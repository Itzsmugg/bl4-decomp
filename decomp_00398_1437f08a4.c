// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1437f08a4 FUN_1437f08a4 body=23 status=ok
// SIG undefined FUN_1437f08a4(void)

undefined1 FUN_1437f08a4(void)

{
  FUN_144c27270(DAT_14c787d38);
  return 1;
}



// FUNCTION 1437f08e2 FUN_1437f08e2 body=282 status=ok
// SIG undefined FUN_1437f08e2(void)

undefined8 * FUN_1437f08e2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1437f08bb);
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



// FUNCTION 1437f09fc FUN_1437f09fc body=282 status=ok
// SIG undefined FUN_1437f09fc(void)

undefined8 * FUN_1437f09fc(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1437f08bb);
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



// FUNCTION 1437f0b16 FUN_1437f0b16 body=218 status=ok
// SIG undefined FUN_1437f0b16(void)

void FUN_1437f0b16(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_28 = 0;
    local_38 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar3 = *(longlong *)(lVar1 + 0xf0);
    if (lVar3 == 0) {
      lVar3 = FUN_144b3f4a0();
      *(longlong *)(lVar1 + 0xf0) = lVar3;
    }
    local_30 = *(undefined8 *)(lVar3 + 0x3e0);
    local_20 = (uint)*(ushort *)(param_1 + 0x20);
    iVar2 = FUN_144bf9540();
    if (iVar2 == 0) {
      FUN_144b3e9f0(local_3c,1);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),&local_38);
      FUN_144b3e9f0(local_3c,0);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),&local_38);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437f0bf2 FUN_1437f0bf2 body=282 status=ok
// SIG undefined FUN_1437f0bf2(void)

undefined8 * FUN_1437f0bf2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1437f08bb);
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



// FUNCTION 1437f0d10 FUN_1437f0d10 body=345 status=ok
// SIG undefined FUN_1437f0d10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437f0d10(void)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb1b380);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb1b380,4000);
  DAT_14cb1b3a8 = 0;
  _DAT_14cb1b3b0 = 0;
  _DAT_14cb1b3b8 = 2;
  atexit(FUN_1437ef187);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb1b3c0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb1b3c0,4000);
  DAT_14cb1b3e8 = 0;
  _DAT_14cb1b3f0 = 0;
  _DAT_14cb1b3f8 = 2;
  atexit(FUN_1437ef1c2);
  local_58 = 0x800000014ab67544;
  local_44 = 9;
  uStack_50 = FUN_14577453c();
  uStack_4c = CONCAT31(uStack_4c._1_3_,1);
  FUN_14641b4e8(&local_58);
  atexit((_func_5014 *)&LAB_1437ef2e8);
  _DAT_14cb1b430 = &PTR_FUN_14ab678f0;
  DAT_14cb1b438 = 0;
  uRam000000014cb1b440 = 0;
  DAT_14cb1b448 = 0;
  uRam000000014cb1b450 = 0;
  atexit(FUN_1437ef2f4);
  local_58 = 0x4c464e94807eec6d;
  uStack_50 = 0x915d6661;
  uStack_4c = 0xa889b2e;
  _DAT_14cb1b414 = 0x807eec6d;
  uRam000000014cb1b418 = 0x4c464e94;
  uRam000000014cb1b41c = 0x915d6661;
  uRam000000014cb1b420 = 0xa889b2e;
  FUN_141005458(&local_58,1,L"HavokInplaceLoadInfo",0);
  atexit((_func_5014 *)&LAB_1437ef50e);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437f0e70 FUN_1437f0e70 body=54 status=ok
// SIG undefined FUN_1437f0e70(void)

void FUN_1437f0e70(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1402309ae(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab6b310;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 10) = 1;
  return;
}



// FUNCTION 1437f0ea6 FUN_1437f0ea6 body=227 status=ok
// SIG undefined FUN_1437f0ea6(void)

longlong FUN_1437f0ea6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1b600 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14105c5ba;
    local_38 = &LAB_1437f0e6d;
    local_40 = FUN_1437f0e70;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/GbxNav",L"AnimNotify_SetStance",&DAT_14cb1b600,&DAT_1437f0e6c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1b600;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437f0f8f FUN_1437f0f8f body=47 status=ok
// SIG undefined FUN_1437f0f8f(void)

longlong FUN_1437f0f8f(void)

{
  if (DAT_14cb1b608 == 0) {
    FUN_14073dd9a(&DAT_14cb1b608,&PTR_FUN_14ab6b2c8);
  }
  return DAT_14cb1b608;
}



// FUNCTION 1437f0fbe FUN_1437f0fbe body=55 status=ok
// SIG undefined FUN_1437f0fbe(void)

void FUN_1437f0fbe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1b620 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1b620 = FUN_14171c317(FUN_14641bc2e,uVar1,L"EGbxAnimLocomotionPreference");
  }
  return;
}



// FUNCTION 1437f0ff5 FUN_1437f0ff5 body=55 status=ok
// SIG undefined FUN_1437f0ff5(void)

void FUN_1437f0ff5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1b730 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1b730 = FUN_14171c317(FUN_14641c078,uVar1,L"EGbxNavAvoidType");
  }
  return;
}



// FUNCTION 1437f102c FUN_1437f102c body=55 status=ok
// SIG undefined FUN_1437f102c(void)

void FUN_1437f102c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1b7f0 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1b7f0 = FUN_14171c317(FUN_14641c4c4,uVar1,L"EGbxNavAnimType");
  }
  return;
}



// FUNCTION 1437f1063 FUN_1437f1063 body=55 status=ok
// SIG undefined FUN_1437f1063(void)

void FUN_1437f1063(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1b850 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1b850 = FUN_14171c317(FUN_14641c6ba,uVar1,L"EGbxNavPoseMatchTestSort");
  }
  return;
}



// FUNCTION 1437f109a FUN_1437f109a body=48 status=ok
// SIG undefined FUN_1437f109a(void)

longlong FUN_1437f109a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f10d0 FUN_1437f10d0 body=48 status=ok
// SIG undefined FUN_1437f10d0(void)

longlong FUN_1437f10d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f1100 FUN_1437f1100 body=48 status=ok
// SIG undefined FUN_1437f1100(void)

longlong FUN_1437f1100(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_140b21cc2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f1130 FUN_1437f1130 body=38 status=ok
// SIG undefined FUN_1437f1130(void)

undefined8 FUN_1437f1130(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f126a FUN_1437f126a body=352 status=ok
// SIG undefined FUN_1437f126a(void)

void FUN_1437f126a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  longlong lVar3;
  
  memset(param_2 + 1,0,0x358);
  *(undefined1 *)(param_2 + 3) = 1;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0xffffffffffffffff;
  *(undefined2 *)(param_2 + 8) = 0xffff;
  param_2[0x24] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)((longlong)param_2 + 300) = 8;
  *param_2 = &PTR_FUN_14ab70b90;
  *(undefined4 *)(param_2 + 0x27) = 0xffffffff;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  *(undefined4 *)(param_2 + 0x2e) = 0xffffffff;
  lVar3 = 0;
  do {
    *(undefined8 *)((longlong)param_2 + lVar3 + 0x188) = 0;
    pbVar2 = (byte *)((longlong)param_2 + lVar3 + 400);
    *pbVar2 = *pbVar2 & 0xfc;
    *(undefined1 *)((longlong)param_2 + lVar3 + 0x191) = 0;
    *(undefined4 *)((longlong)param_2 + lVar3 + 0x198) = 0xfffffffe;
    *(undefined4 *)((longlong)param_2 + lVar3 + 0x1a0) = 0xfffffffe;
    *(undefined1 *)((longlong)param_2 + lVar3 + 0x1bc) = 0;
    puVar1 = (undefined8 *)((longlong)param_2 + lVar3 + 0x1a8);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)((longlong)param_2 + lVar3 + 0x1b8) = 0;
    *(undefined4 *)((longlong)param_2 + lVar3 + 0x1c0) = 0;
    *(undefined1 *)((longlong)param_2 + lVar3 + 0x1c4) = 0;
    *(undefined ***)((longlong)param_2 + lVar3 + 0x180) = &PTR_FUN_14a7be320;
    *(undefined8 *)((longlong)param_2 + lVar3 + 0x1c8) = 0;
    *(undefined4 *)((longlong)param_2 + lVar3 + 0x1d0) = 0x100;
    *(undefined8 *)((longlong)param_2 + lVar3 + 0x1d8) = 0;
    *(undefined1 **)((longlong)param_2 + lVar3 + 0x1e0) = &DAT_3f8000003f800000;
    *(undefined2 *)((longlong)param_2 + lVar3 + 0x1e8) = 0;
    *(undefined1 *)((longlong)param_2 + lVar3 + 0x1ea) = 0;
    puVar1 = (undefined8 *)((longlong)param_2 + lVar3 + 0x1ec);
    *puVar1 = 0x3f80000000000000;
    puVar1[1] = 0x3f80000000000000;
    puVar1 = (undefined8 *)((longlong)param_2 + lVar3 + 0x1fc);
    *puVar1 = 0x3f800000;
    puVar1[1] = 0x3f80000000000000;
    *(undefined8 *)((longlong)param_2 + lVar3 + 0x20c) = 0x4120000041200000;
    *(undefined4 *)((longlong)param_2 + lVar3 + 0x214) = 0;
    *(undefined2 *)((longlong)param_2 + lVar3 + 0x218) = 1;
    lVar3 = lVar3 + 0xa0;
  } while (lVar3 != 0x1e0);
  return;
}



// FUNCTION 1437f13dc FUN_1437f13dc body=57 status=ok
// SIG undefined FUN_1437f13dc(void)

void FUN_1437f13dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1b650 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1b650 = FUN_140002ddd(FUN_14641bccf,uVar1,L"GbxCondition_IsNavigating");
  }
  return;
}



// FUNCTION 1437f1492 FUN_1437f1492 body=57 status=ok
// SIG undefined FUN_1437f1492(void)

void FUN_1437f1492(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1b668 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1b668 = FUN_140002ddd(FUN_14641bd65,uVar1,L"GbxCondition_Stance");
  }
  return;
}



// FUNCTION 1437f1656 FUN_1437f1656 body=1081 status=ok
// SIG undefined FUN_1437f1656(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437f1656(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab684f0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab69250,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab695a0,1,0);
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  _DAT_14cb1b4a0 = 0x47efffffe0000000;
  _DAT_14cb1b4a8 = 0x47efffffe0000000;
  _DAT_14cb1b4b0 = 0x47efffffe0000000;
  _DAT_14cb1b4b8 = 0x47efffffe0000000;
  _DAT_14cb1b4c0 = 0x47efffffe0000000;
  _DAT_14cb1b4c8 = 0x47efffffe0000000;
  _DAT_14cb1b4d0 = 0x47efffffe0000000;
  _DAT_14cb1b4d8 = 0x47efffffe0000000;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cb1b4e0);
  if (cVar1 == '\0') {
    _DAT_14cb1b4e0 = 0;
    uRam000000014cb1b4e8 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb1b4f0 = (ulonglong)uVar2;
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab698e0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab69be0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab6a1c0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab6adc0,3,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab6b1b0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab6b5f0,1,0);
  FUN_14098d3d2(FUN_1437f0fbe,L"/Script/GbxNav",L"EGbxAnimLocomotionPreference",&DAT_14cb1b618);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab6b790,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab6b840);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab6b930);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab6bb60,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab6bcf0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab6bf90);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab6c440,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab6c790);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14ab6cd30;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab6cd50);
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14ab6f8b0;
  local_68 = 8;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab6fa30,1,&PTR_FUN_14ab6f8f0);
  FUN_1446f470e(&DAT_14cb1b8a8,L"OnStanceChange",1);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab6fd70,1,&PTR_FUN_14ab6fd40);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab6fed0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437f1a90 FUN_1437f1a90 body=55 status=ok
// SIG undefined FUN_1437f1a90(void)

void FUN_1437f1a90(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1b9f0 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1b9f0 = FUN_140002ddd(FUN_1437f1ac7,uVar1,L"ReplicatedStance");
  }
  return;
}



// FUNCTION 1437f1ac7 FUN_1437f1ac7 body=47 status=ok
// SIG undefined FUN_1437f1ac7(void)

longlong FUN_1437f1ac7(void)

{
  if (DAT_14cb1b9e8 == 0) {
    FUN_14086a14e(&DAT_14cb1b9e8,&PTR_FUN_14ab761e8);
  }
  return DAT_14cb1b9e8;
}



// FUNCTION 1437f1afc FUN_1437f1afc body=48 status=ok
// SIG undefined FUN_1437f1afc(void)

void FUN_1437f1afc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14ab7b710;
  return;
}



// FUNCTION 1437f1b2c FUN_1437f1b2c body=264 status=ok
// SIG undefined FUN_1437f1b2c(void)

void FUN_1437f1b2c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 2;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x200000000;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 2;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0x400000000;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return;
}



// FUNCTION 1437f1c34 FUN_1437f1c34 body=55 status=ok
// SIG undefined FUN_1437f1c34(void)

void FUN_1437f1c34(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1ba80 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1ba80 = FUN_14171c317(FUN_14641d25e,uVar1,L"EGbxNavCharacterType");
  }
  return;
}



// FUNCTION 1437f1c6b FUN_1437f1c6b body=55 status=ok
// SIG undefined FUN_1437f1c6b(void)

void FUN_1437f1c6b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1bbb8 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1bbb8 = FUN_14171c317(FUN_14641d80a,uVar1,L"EGbxNavOffset");
  }
  return;
}



// FUNCTION 1437f1ca2 FUN_1437f1ca2 body=55 status=ok
// SIG undefined FUN_1437f1ca2(void)

void FUN_1437f1ca2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1bbd0 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1bbd0 = FUN_14171c317(FUN_14641d839,uVar1,L"EGbxNavGoalRotation");
  }
  return;
}



// FUNCTION 1437f1cd9 FUN_1437f1cd9 body=55 status=ok
// SIG undefined FUN_1437f1cd9(void)

void FUN_1437f1cd9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1bbe8 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1bbe8 = FUN_14171c317(FUN_14641d868,uVar1,L"EGbxNavGoalProjectionMode");
  }
  return;
}



// FUNCTION 1437f1d10 FUN_1437f1d10 body=55 status=ok
// SIG undefined FUN_1437f1d10(void)

void FUN_1437f1d10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1bce8 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1bce8 = FUN_14171c317(FUN_14641dc7b,uVar1,L"EGbxNavLinkDirection");
  }
  return;
}



// FUNCTION 1437f1d4a FUN_1437f1d4a body=48 status=ok
// SIG undefined FUN_1437f1d4a(void)

longlong FUN_1437f1d4a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140cbae1c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f1d7a FUN_1437f1d7a body=48 status=ok
// SIG undefined FUN_1437f1d7a(void)

longlong FUN_1437f1d7a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x748;
  FUN_140cbae1c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f1daa FUN_1437f1daa body=48 status=ok
// SIG undefined FUN_1437f1daa(void)

longlong FUN_1437f1daa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x750;
  FUN_140cbae1c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f1ddc FUN_1437f1ddc body=48 status=ok
// SIG undefined FUN_1437f1ddc(void)

longlong FUN_1437f1ddc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1058;
  FUN_140d79f6c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f1e14 FUN_1437f1e14 body=48 status=ok
// SIG undefined FUN_1437f1e14(void)

longlong FUN_1437f1e14(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x11c0;
  FUN_140d79f6c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f1e4c FUN_1437f1e4c body=48 status=ok
// SIG undefined FUN_1437f1e4c(void)

longlong FUN_1437f1e4c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_140a6993c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f1e7c FUN_1437f1e7c body=29 status=ok
// SIG undefined FUN_1437f1e7c(void)

undefined8 FUN_1437f1e7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f1ed8 FUN_1437f1ed8 body=60 status=ok
// SIG undefined FUN_1437f1ed8(void)

undefined1 FUN_1437f1ed8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e321ae(param_2,param_3);
    *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1437f1f3c FUN_1437f1f3c body=59 status=ok
// SIG undefined FUN_1437f1f3c(void)

undefined8 FUN_1437f1f3c(longlong *param_1)

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



// FUNCTION 1437f20ec FUN_1437f20ec body=57 status=ok
// SIG undefined FUN_1437f20ec(void)

void FUN_1437f20ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1bd30 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1bd30 = FUN_140002ddd(FUN_14641ddd3,uVar1,L"GbxNavLinkDef_FallAndLand");
  }
  return;
}



// FUNCTION 1437f2142 FUN_1437f2142 body=121 status=ok
// SIG undefined FUN_1437f2142(void)

void FUN_1437f2142(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0xa0);
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *param_2 = &PTR_FUN_14ab7cc10;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0x42c8000040000000;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0x42c80000;
  return;
}



// FUNCTION 1437f21d4 FUN_1437f21d4 body=57 status=ok
// SIG undefined FUN_1437f21d4(void)

void FUN_1437f21d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1bd60 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1bd60 = FUN_140002ddd(FUN_14641deff,uVar1,L"GbxNavLinkDef_Jump");
  }
  return;
}



// FUNCTION 1437f225c FUN_1437f225c body=57 status=ok
// SIG undefined FUN_1437f225c(void)

void FUN_1437f225c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1bd78 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1bd78 = FUN_140002ddd(FUN_14641df95,uVar1,L"GbxNavLinkDef_Loop");
  }
  return;
}



// FUNCTION 1437f22e4 FUN_1437f22e4 body=57 status=ok
// SIG undefined FUN_1437f22e4(void)

void FUN_1437f22e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1bd90 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1bd90 = FUN_140002ddd(FUN_14641e02b,uVar1,L"GbxNavLinkDef_Stance");
  }
  return;
}



// FUNCTION 1437f232c FUN_1437f232c body=209 status=ok
// SIG undefined FUN_1437f232c(void)

void FUN_1437f232c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  memset(param_2 + 2,0,0x150);
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *param_2 = &PTR_FUN_14ab7d1c0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x1a] = 0x8000000000;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *(undefined4 *)(param_2 + 0x1b) = 0xffffffff;
  param_2[0x1d] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  *(undefined4 *)(param_2 + 0x21) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_2 + 0x10c) = 0x404;
  param_2[0x14] = &PTR_FUN_14a89a2c0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  *(undefined4 *)(param_2 + 0x2a) = 0x42dc0000;
  return;
}



// FUNCTION 1437f2416 FUN_1437f2416 body=57 status=ok
// SIG undefined FUN_1437f2416(void)

void FUN_1437f2416(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1bda8 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1bda8 = FUN_140002ddd(FUN_14641e0c1,uVar1,L"GbxNavLinkDef_Stretch");
  }
  return;
}



// FUNCTION 1437f244f FUN_1437f244f body=1112 status=ok
// SIG undefined FUN_1437f244f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437f244f(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab74c40,1,0);
  _DAT_14cb1b900 = 0x47efffffe0000000;
  _DAT_14cb1b908 = 0x47efffffe0000000;
  DAT_14cb1b910 = 0x47efffffe0000000;
  _DAT_14cb1b918 = 0x47efffffe0000000;
  _DAT_14cb1b920 = 0x47efffffe0000000;
  DAT_14cb1b928 = 0x47efffffe0000000;
  _DAT_14cb1b930 = 0x47efffffe0000000;
  _DAT_14cb1b938 = 0x47efffffe0000000;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab75e40,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab75f50,1,0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb1b9c0 = (ulonglong)uVar1;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab76000,1,0);
  FUN_1446f470e(&DAT_14cb1ba08,L"ReceivedStanceChanged",1);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab765d0,1,&PTR_FUN_14ab765a0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab76930,1,0);
  FUN_14098d3d2(FUN_1437f1c34,L"/Script/GbxNav",L"EGbxNavCharacterType",&DAT_14cb1ba78);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab76af0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab779b0,4,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab77eb0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab780d0,1,&PTR_FUN_14ab780a0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab78bc0,2,&PTR_FUN_14ab78b70);
  ppuStack_60 = &PTR_FUN_14ab79410;
  local_68 = 1;
  local_58 = 3;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab79470);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab79680);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab79ce0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab7a120,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab7a2c0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab7a780,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14ab7ac90;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab7acb0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab7ae10,1,&PTR_FUN_14ab7ade0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab7afa0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab7b090);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab7b360);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab7b450);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab7b550);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab7b6e0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437f28a8 FUN_1437f28a8 body=55 status=ok
// SIG undefined FUN_1437f28a8(void)

void FUN_1437f28a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1bef8 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1bef8 = FUN_14171c317(FUN_14641e9fc,uVar1,L"EGbxNavMoveStyle");
  }
  return;
}



// FUNCTION 1437f28df FUN_1437f28df body=55 status=ok
// SIG undefined FUN_1437f28df(void)

void FUN_1437f28df(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1bf88 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1bf88 = FUN_14171c317(FUN_14641ec82,uVar1,L"EGbxPainterGeoType");
  }
  return;
}



// FUNCTION 1437f2916 FUN_1437f2916 body=55 status=ok
// SIG undefined FUN_1437f2916(void)

void FUN_1437f2916(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1bfa0 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1bfa0 = FUN_14171c317(FUN_14641ecb1,uVar1,L"EGbxPainterType");
  }
  return;
}



// FUNCTION 1437f294d FUN_1437f294d body=55 status=ok
// SIG undefined FUN_1437f294d(void)

void FUN_1437f294d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1bfb8 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1bfb8 = FUN_14171c317(FUN_14641ece0,uVar1,L"EGbxPainterNavFilterType");
  }
  return;
}



// FUNCTION 1437f2984 FUN_1437f2984 body=55 status=ok
// SIG undefined FUN_1437f2984(void)

void FUN_1437f2984(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1c1e8 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1c1e8 = FUN_14171c317(FUN_14641f570,uVar1,L"EGbxNavResult");
  }
  return;
}



// FUNCTION 1437f29bb FUN_1437f29bb body=55 status=ok
// SIG undefined FUN_1437f29bb(void)

void FUN_1437f29bb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1c200 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1c200 = FUN_14171c317(FUN_14641f59f,uVar1,L"EGbxNavExec");
  }
  return;
}



// FUNCTION 1437f29f2 FUN_1437f29f2 body=55 status=ok
// SIG undefined FUN_1437f29f2(void)

void FUN_1437f29f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1c260 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1c260 = FUN_14171c317(FUN_14641f792,uVar1,L"EGbxNavLinkType");
  }
  return;
}



// FUNCTION 1437f2a29 FUN_1437f2a29 body=55 status=ok
// SIG undefined FUN_1437f2a29(void)

void FUN_1437f2a29(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1c278 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1c278 = FUN_14171c317(FUN_14641f7c1,uVar1,L"EGbxNavDataVersion");
  }
  return;
}



// FUNCTION 1437f2a70 FUN_1437f2a70 body=48 status=ok
// SIG undefined FUN_1437f2a70(void)

longlong FUN_1437f2a70(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14061144a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f2aa0 FUN_1437f2aa0 body=48 status=ok
// SIG undefined FUN_1437f2aa0(void)

longlong FUN_1437f2aa0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_14061144a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f2ad0 FUN_1437f2ad0 body=48 status=ok
// SIG undefined FUN_1437f2ad0(void)

longlong FUN_1437f2ad0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_140810216(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f2b00 FUN_1437f2b00 body=48 status=ok
// SIG undefined FUN_1437f2b00(void)

longlong FUN_1437f2b00(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x7f8;
  FUN_140810216(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f2b30 FUN_1437f2b30 body=48 status=ok
// SIG undefined FUN_1437f2b30(void)

longlong FUN_1437f2b30(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xbf0;
  FUN_140810216(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f2b60 FUN_1437f2b60 body=48 status=ok
// SIG undefined FUN_1437f2b60(void)

longlong FUN_1437f2b60(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140222560(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f2b90 FUN_1437f2b90 body=48 status=ok
// SIG undefined FUN_1437f2b90(void)

longlong FUN_1437f2b90(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140222560(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f2bc0 FUN_1437f2bc0 body=48 status=ok
// SIG undefined FUN_1437f2bc0(void)

longlong FUN_1437f2bc0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_14028f60c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f2bf0 FUN_1437f2bf0 body=48 status=ok
// SIG undefined FUN_1437f2bf0(void)

longlong FUN_1437f2bf0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x7f8;
  FUN_14028f60c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f2e3e FUN_1437f2e3e body=1135 status=ok
// SIG undefined FUN_1437f2e3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437f2e3e(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb1bdb8 = (ulonglong)uVar2;
  _DAT_14cb1bdc0 = 0x47efffffe0000000;
  _DAT_14cb1bdc8 = 0x47efffffe0000000;
  _DAT_14cb1bdd0 = 0x47efffffe0000000;
  _DAT_14cb1bdd8 = 0x47efffffe0000000;
  _DAT_14cb1bde0 = 0x47efffffe0000000;
  DAT_14cb1bde8 = 0x47efffffe0000000;
  _DAT_14cb1bdf0 = 0x47efffffe0000000;
  _DAT_14cb1bdf8 = 0x47efffffe0000000;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab821e0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab823f0,1,0);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cb1be38);
  if (cVar1 == '\0') {
    _DAT_14cb1be38 = 0;
    uRam000000014cb1be40 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab825d0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab82970);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab82fe0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab83590);
  FUN_14098d3d2(FUN_1437f28a8,L"/Script/GbxNav",L"EGbxNavMoveStyle",&DAT_14cb1bef0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab83c70,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab83fc0,1,0);
  local_58 = 3;
  ppuStack_60 = &PTR_FUN_14ab84870;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab84920,1,&PTR_FUN_14ab848d0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab85d30,2,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab85ef0,2,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab868b0,1,&PTR_FUN_14ab86880);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab874d0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab87c00,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab889f0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab89120,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab89f30,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab8a670,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab8a700);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab8aa00);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab8bd70,2,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab8c610,1,0);
  local_58 = 3;
  ppuStack_60 = &PTR_FUN_14ab8ca50;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab8cab0);
  FUN_14098d3d2(FUN_1437f2a29,L"/Script/GbxNav",L"EGbxNavDataVersion",&DAT_14cb1c270);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437f32b0 FUN_1437f32b0 body=55 status=ok
// SIG undefined FUN_1437f32b0(void)

void FUN_1437f32b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1c310 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1c310 = FUN_14171c317(FUN_14641fe33,uVar1,L"EGbxRotationInterpType");
  }
  return;
}



// FUNCTION 1437f32e7 FUN_1437f32e7 body=55 status=ok
// SIG undefined FUN_1437f32e7(void)

void FUN_1437f32e7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1c3b8 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1c3b8 = FUN_14171c317(FUN_146420141,uVar1,L"EGbxStanceTurnRate");
  }
  return;
}



// FUNCTION 1437f331e FUN_1437f331e body=55 status=ok
// SIG undefined FUN_1437f331e(void)

void FUN_1437f331e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1c3d0 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1c3d0 = FUN_14171c317(FUN_146420170,uVar1,L"EGbxStanceTurnStyle");
  }
  return;
}



// FUNCTION 1437f3355 FUN_1437f3355 body=55 status=ok
// SIG undefined FUN_1437f3355(void)

void FUN_1437f3355(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1c478 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1c478 = FUN_14171c317(FUN_1464204d5,uVar1,L"EStanceTemp");
  }
  return;
}



// FUNCTION 1437f338c FUN_1437f338c body=55 status=ok
// SIG undefined FUN_1437f338c(void)

void FUN_1437f338c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1c5d8 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1c5d8 = FUN_14171c317(FUN_146420b63,uVar1,L"EHavokNavMeshVertexSelectionMethod");
  }
  return;
}



// FUNCTION 1437f33c4 FUN_1437f33c4 body=48 status=ok
// SIG undefined FUN_1437f33c4(void)

longlong FUN_1437f33c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140612a20(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f34b0 FUN_1437f34b0 body=169 status=ok
// SIG undefined FUN_1437f34b0(void)

void FUN_1437f34b0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0xe8);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14ab997d0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0x42c8000042c80000;
  *(undefined4 *)(param_2 + 8) = 0x42c80000;
  *(undefined1 *)((longlong)param_2 + 0x45) = 0;
  param_2[9] = 0x447a000044870000;
  param_2[10] = 0x447a0000;
  *(undefined1 *)(param_2 + 0xb) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0x42c8000042340000;
  memset(param_2 + 0xd,0,0x88);
  *(undefined1 *)(param_2 + 0x1e) = 1;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  return;
}



// FUNCTION 1437f35c8 FUN_1437f35c8 body=57 status=ok
// SIG undefined FUN_1437f35c8(void)

void FUN_1437f35c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1c3e8 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1c3e8 = FUN_140002ddd(FUN_14642019f,uVar1,L"GbxStanceDef");
  }
  return;
}



// FUNCTION 1437f3644 FUN_1437f3644 body=57 status=ok
// SIG undefined FUN_1437f3644(void)

void FUN_1437f3644(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1c418 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1c418 = FUN_140002ddd(FUN_1464202c5,uVar1,L"GbxStancePickerDef");
  }
  return;
}



// FUNCTION 1437f3720 FUN_1437f3720 body=57 status=ok
// SIG undefined FUN_1437f3720(void)

void FUN_1437f3720(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1c460 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1c460 = FUN_140002ddd(FUN_14642047b,uVar1,L"GbxStanceAnyDef");
  }
  return;
}



// FUNCTION 1437f3768 FUN_1437f3768 body=378 status=ok
// SIG undefined FUN_1437f3768(void)

/* WARNING: Removing unreachable block (ram,0x0001437f3845) */

void FUN_1437f3768(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar5 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1447a71f6(&local_58,uVar5 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  if (&local_58 == param_1) {
    uVar5 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_144760e21(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_58;
    local_58 = 0;
    *(int *)(param_1 + 1) = (int)uStack_50;
    *(uint *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
    uStack_50 = 0;
    uVar5 = 0;
  }
  FUN_144760e21(local_58,uVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437f38e4 FUN_1437f38e4 body=90 status=ok
// SIG undefined FUN_1437f38e4(void)

undefined8 * FUN_1437f38e4(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  uVar3 = param_2[1];
  lVar4 = param_2[2];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[2];
  param_1[1] = uVar3;
  param_1[2] = lVar4;
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



// FUNCTION 1437f394c FUN_1437f394c body=113 status=ok
// SIG undefined FUN_1437f394c(void)

void FUN_1437f394c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x98);
  *(undefined2 *)((longlong)param_2 + 0x30) = 4;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x38) = 3;
  *(char *)((longlong)param_2 + 0x40) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined4 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined4 *)((longlong)param_2 + 0x90) = 0;
  return;
}



// FUNCTION 1437f3a92 FUN_1437f3a92 body=57 status=ok
// SIG undefined FUN_1437f3a92(void)

void FUN_1437f3a92(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1c500 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1c500 = FUN_140002ddd(FUN_14642073b,uVar1,L"GbxStanceUserDataDef");
  }
  return;
}



// FUNCTION 1437f3b58 FUN_1437f3b58 body=703 status=ok
// SIG undefined FUN_1437f3b58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437f3b58(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  _DAT_14cb1c288 = 0x47efffffe0000000;
  _DAT_14cb1c290 = 0x47efffffe0000000;
  _DAT_14cb1c298 = 0x47efffffe0000000;
  _DAT_14cb1c2a0 = 0x47efffffe0000000;
  _DAT_14cb1c2a8 = 0x47efffffe0000000;
  _DAT_14cb1c2b0 = 0x47efffffe0000000;
  _DAT_14cb1c2b8 = 0x47efffffe0000000;
  _DAT_14cb1c2c0 = 0x47efffffe0000000;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab92e00);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab930b0,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14ab93bd0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab93bf0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb1c338 = (ulonglong)uVar1;
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab948f0,1,0);
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14ab95970;
  local_68 = 7;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab959b0);
  FUN_14098d3d2(FUN_1437f3355,L"/Script/GbxNav",L"EStanceTemp",&DAT_14cb1c470);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab96200,1,&PTR_FUN_14ab961d0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab96640);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab96760);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab96830,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab968c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab978d0,1,&PTR_FUN_14ab97850);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab97960);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14ab98f40;
  local_68 = 5;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab99030,1,&PTR_FUN_14ab98f60);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437f3e18 FUN_1437f3e18 body=1224 status=ok
// SIG undefined FUN_1437f3e18(void)

void FUN_1437f3e18(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_84;
  longlong local_80;
  longlong local_78;
  undefined1 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = *(longlong *)(param_1 + 0x168);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_a8);
  }
  iVar3 = *(int *)(param_1 + 0x170);
  uVar8 = DAT_14c872be0 - *(longlong *)(param_1 + 0x178);
  *(longlong *)(param_1 + 0x178) = DAT_14c872be0;
  if (uVar8 < 0xb) {
    if (*(char *)(lVar7 + 0x990) == '\0') {
      plVar10 = *(longlong **)(lVar7 + 0x978);
      plVar14 = *(longlong **)(param_1 + 0x160);
      if (plVar10 != plVar14) {
        if ((plVar14 == (longlong *)0x0) || ((longlong)*(int *)(param_1 + 0x148) == 0)) {
          lVar7 = 0;
        }
        else {
          plVar11 = *(longlong **)(param_1 + 0x140);
          plVar13 = plVar11 + (longlong)*(int *)(param_1 + 0x148) * 0xe;
          lVar7 = 0;
          do {
            cVar4 = (**(code **)(*plVar14 + 0x20))(plVar14);
            if (cVar4 != '\0') {
LAB_1437f40a6:
              lVar7 = *plVar11;
              break;
            }
            if ((longlong)(int)plVar11[0xd] != 0) {
              lVar6 = 0;
              do {
                if (*(longlong **)(plVar11[0xc] + lVar6) == plVar14) goto LAB_1437f40a6;
                lVar6 = lVar6 + 8;
              } while ((longlong)(int)plVar11[0xd] * 8 != lVar6);
            }
            plVar11 = plVar11 + 0xe;
          } while (plVar11 != plVar13);
        }
        if ((plVar10 == (longlong *)0x0) || ((longlong)*(int *)(param_1 + 0x148) == 0)) {
          lVar6 = 0;
        }
        else {
          plVar14 = *(longlong **)(param_1 + 0x140);
          plVar11 = plVar14 + (longlong)*(int *)(param_1 + 0x148) * 0xe;
          lVar6 = 0;
          do {
            cVar4 = (**(code **)(*plVar10 + 0x20))(plVar10);
            if (cVar4 != '\0') {
LAB_1437f4112:
              lVar6 = *plVar14;
              break;
            }
            if ((longlong)(int)plVar14[0xd] != 0) {
              lVar9 = 0;
              do {
                if (*(longlong **)(plVar14[0xc] + lVar9) == plVar10) goto LAB_1437f4112;
                lVar9 = lVar9 + 8;
              } while ((longlong)(int)plVar14[0xd] * 8 != lVar9);
            }
            plVar14 = plVar14 + 0xe;
          } while (plVar14 != plVar11);
        }
        if (lVar6 != lVar7) {
          iVar5 = *(int *)(param_1 + 0x158);
          if (0 < (longlong)iVar5) {
            puVar12 = (undefined1 *)(*(longlong *)(param_1 + 0x150) + 0x40);
            uVar8 = 0;
            do {
              if ((*(longlong *)(puVar12 + -0x40) == DAT_14cb1c7c0 ||
                   *(longlong *)(puVar12 + -0x40) == lVar7) &&
                 (*(longlong *)(puVar12 + -0x38) == DAT_14cb1c7c0 ||
                  *(longlong *)(puVar12 + -0x38) == lVar6)) {
                if (((int)uVar8 < iVar5) &&
                   (FUN_14173e550(*(longlong *)(param_1 + 0x168) + 0x8e8,puVar12 + -0x30),
                   *(longlong *)(puVar12 + -0x28) != 0)) {
                  lVar7 = FUN_14063d1f6();
                  if ((((*(longlong *)(puVar12 + -0x28) != 0) && (lVar7 != 0)) &&
                      (lVar6 = *(longlong *)(*(longlong *)(puVar12 + -0x28) + 0x10), lVar6 != 0)) &&
                     ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38) &&
                      (*(longlong *)
                        (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                       lVar7 + 0x30)))) {
                    iVar5 = *(int *)(param_1 + 0x174) + ((*(int *)(param_1 + 0x174) + 1) / 3) * -3 +
                            1;
                    *(int *)(param_1 + 0x174) = iVar5;
                    plVar10 = (longlong *)(param_1 + (longlong)iVar5 * 0xa0 + 0x180);
                    (**(code **)(*plVar10 + 0x1a8))(plVar10);
                    (**(code **)(*plVar10 + 0x1b0))(plVar10,0);
                    local_84 = puVar12[-0x14];
                    local_88 = *(undefined4 *)(puVar12 + -0x18);
                    local_80 = *(longlong *)(puVar12 + -0x10);
                    if ((DAT_14c950c29 == 1) && (local_80 != 0)) {
                      FUN_1456cec3c();
                    }
                    local_78 = *(longlong *)(puVar12 + -8);
                    if (((DAT_14c950c29 & 1) != 0) && (local_78 != 0)) {
                      FUN_1456cec3c();
                    }
                    local_70 = *puVar12;
                    local_68 = 1;
                    FUN_1403201ee(param_1,*(int *)(param_1 + 0x174) + 1);
                    *(int *)(param_1 + 0x170) = (int)uVar8;
                    goto LAB_1437f3ee6;
                  }
                }
                break;
              }
              uVar8 = uVar8 + 1;
              puVar12 = puVar12 + 0x68;
            } while ((longlong)iVar5 != uVar8);
          }
        }
      }
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x170);
LAB_1437f3ee6:
      if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)(param_1 + 0x158))) {
        lVar7 = *(longlong *)(param_1 + 0x150);
        plVar10 = (longlong *)(param_1 + (longlong)*(int *)(param_1 + 0x174) * 0xa0 + 0x180);
        fVar15 = (float)(**(code **)(*plVar10 + 0x110))(plVar10);
        fVar16 = (float)(**(code **)(*plVar10 + 0x108))(plVar10);
        lVar6 = (uVar8 & 0xffffffff) * 0x68;
        pfVar2 = (float *)(lVar7 + 0x48 + lVar6);
        if (fVar16 - fVar15 < *pfVar2 || fVar16 - fVar15 == *pfVar2) {
          lVar7 = lVar7 + lVar6;
          local_84 = *(undefined1 *)(lVar7 + 0x4c);
          local_88 = *(undefined4 *)(lVar7 + 0x48);
          local_80 = *(longlong *)(lVar7 + 0x50);
          if ((DAT_14c950c29 == 1) && (local_80 != 0)) {
            FUN_1456cec3c();
          }
          local_78 = *(longlong *)(lVar7 + 0x58);
          if (((DAT_14c950c29 & 1) != 0) && (local_78 != 0)) {
            FUN_1456cec3c();
          }
          local_70 = *(undefined1 *)(lVar7 + 0x60);
          local_68 = 1;
          FUN_1403201ee(param_1,0);
          *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
    local_68 = 0;
    FUN_1403201ee(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(*(longlong *)(param_1 + 0x168) + 0x978);
  FUN_14491269a(param_1,param_2);
  if ((iVar3 == -1) == (*(int *)(param_1 + 0x170) != -1)) {
    if (*(int *)(param_1 + 0x170) == -1) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0x168) + 0x970);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0x168) + 0x970);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437f4302 FUN_1437f4302 body=665 status=ok
// SIG undefined FUN_1437f4302(void)

void FUN_1437f4302(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_2 == 0) || (plVar2 = *(longlong **)(param_2 + 0xa8), plVar2 == (longlong *)0x0)) {
LAB_1437f4438:
    if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (DAT_14cb1c498 == 0) {
    local_50 = &local_38;
    local_38 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_1427b09ee;
    local_58 = &LAB_147e36893;
    local_60 = FUN_146420564;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10004001;
    local_80 = 8;
    local_88 = 0x28;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
  }
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,DAT_14cb1c498);
  if (plVar2 == (longlong *)0x0) goto LAB_1437f4438;
  if (DAT_14cb1c498 == 0) {
    local_50 = &local_38;
    local_38 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_1427b09ee;
    local_58 = &LAB_147e36893;
    local_60 = FUN_146420564;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10004001;
    local_80 = 8;
    local_88 = 0x28;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
  }
  plVar3 = (longlong *)FUN_144718840(plVar2,DAT_14cb1c498);
  if ((plVar2 == plVar3) || (plVar3 == (longlong *)0x0)) goto LAB_1437f4438;
  lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
  if (lVar4 == 0) goto LAB_1437f4438;
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 == 0) {
    uVar5 = FUN_145ef08be();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x40) = lVar4;
  }
  if (((*(longlong *)(param_1 + 0x48) != 0) || (lVar4 == 0)) || (*(longlong *)(param_1 + 0x38) == 0)
     ) goto LAB_1437f440f;
  plVar2 = *(longlong **)(lVar4 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_1437f45b0:
    uVar5 = 0;
  }
  else {
    cVar1 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar1 == '\0') goto LAB_1437f45b0;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    uVar5 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0x38));
  }
  *(undefined8 *)(param_1 + 0x48) = uVar5;
LAB_1437f440f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1437f45b8 FUN_1437f45b8 body=168 status=ok
// SIG undefined FUN_1437f45b8(void)

void FUN_1437f45b8(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  if ((((plVar2 != (longlong *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
      lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar4 = *(longlong *)(lVar4 + 0x140);
      if (lVar4 != *(longlong *)(param_1 + 0x10)) {
        lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
        *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(lVar3 + 0x168);
        lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
        *(undefined1 *)(lVar3 + 0x168) = 0;
      }
      goto LAB_1437f4615;
    }
  }
  lVar4 = 0;
LAB_1437f4615:
  *(longlong *)(param_1 + 0x10) = lVar4;
  return;
}



// FUNCTION 1437f469a FUN_1437f469a body=74 status=ok
// SIG undefined FUN_1437f469a(void)

void FUN_1437f469a(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x43340000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = 0x3f0000003f000000;
  *(undefined4 *)(param_1 + 4) = 0x3e4ccccd;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 1;
  *(undefined1 *)((longlong)param_1 + 0x35) = 0;
  *(byte *)((longlong)param_1 + 0x36) = *(byte *)((longlong)param_1 + 0x36) & 0xfc;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x42b4000000000000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x4296000000000000;
  return;
}



// FUNCTION 1437f46e4 FUN_1437f46e4 body=275 status=ok
// SIG undefined FUN_1437f46e4(void)

bool FUN_1437f46e4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar6 = *param_2;
    uVar3 = (uint)((ulonglong)lVar6 >> 0x10);
    uVar10 = (uint)lVar6 & 0xffff;
    lVar8 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x60);
    }
    iVar7 = *(int *)(lVar8 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar10) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar10 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar7 * 0x28);
        if (*plVar1 == lVar6) {
          if (plVar1 == (longlong *)0x0) {
            return false;
          }
          plVar9 = plVar1 + 1;
          if (plVar9 == (longlong *)0x0) {
            return false;
          }
          lVar6 = plVar1[2];
          if (lVar6 == 0) {
            uVar5 = FUN_145cd6c5a();
            lVar6 = FUN_14477b664(uVar5);
            plVar1[2] = lVar6;
          }
          if (plVar1[3] != 0) {
            return true;
          }
          if (lVar6 == 0) {
            return false;
          }
          if (*plVar9 == 0) {
            return false;
          }
          plVar2 = *(longlong **)(lVar6 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
            lVar6 = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar5,plVar9);
          }
          plVar1[3] = lVar6;
          return lVar6 != 0;
        }
        iVar7 = (int)plVar1[4];
      } while (iVar7 != -1);
    }
  }
  return false;
}



// FUNCTION 1437f480d FUN_1437f480d body=19 status=ok
// SIG undefined FUN_1437f480d(void)

void FUN_1437f480d(void)

{
  FUN_147e3d9ba();
  FUN_1464219c6();
  return;
}



// FUNCTION 1437f4820 FUN_1437f4820 body=218 status=ok
// SIG undefined FUN_1437f4820(void)

void FUN_1437f4820(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  FUN_140f0d13e();
  for (lVar4 = param_1; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x20)) {
    if ((*(uint *)(lVar4 + 8) & 0x30) != 0) {
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x648) == 0) {
    plVar2 = (longlong *)(param_1 + 0x638);
    *(undefined8 **)(param_1 + 0x650) = &DAT_14cb1c7f0;
    *(longlong *)(param_1 + 0x648) = param_1;
    lVar4 = DAT_14cb1c820;
    while( true ) {
      *(longlong *)(param_1 + 0x638) = lVar4;
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x650) + 0x30);
      LOCK();
      lVar3 = *plVar1;
      bVar5 = lVar4 == lVar3;
      if (bVar5) {
        *plVar1 = (longlong)plVar2;
        lVar3 = lVar4;
      }
      UNLOCK();
      if (bVar5) break;
      *(longlong *)(param_1 + 0x638) = lVar3;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x650) + 0x30);
    }
    if (*plVar2 != 0) {
      *(longlong **)(*plVar2 + 8) = plVar2;
    }
    plVar2 = *(longlong **)(param_1 + 0x650);
    if ((longlong)(int)plVar2[1] != 0) {
      lVar4 = 0;
      do {
        if ((*(int *)(*plVar2 + 8 + lVar4) != 0) && (*(longlong *)(*plVar2 + lVar4) != 0)) {
          FUN_140ead0b4(plVar2,*(undefined8 *)(param_1 + 0x648));
          return;
        }
        lVar4 = lVar4 + 0x10;
      } while ((longlong)(int)plVar2[1] * 0x10 != lVar4);
    }
  }
  return;
}



// FUNCTION 1437f48fa FUN_1437f48fa body=5277 status=ok
// SIG undefined FUN_1437f48fa(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140a8a346) overlaps instruction at (ram,0x000140a8a345)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_1437f48fa(uint *param_1)

{
  double dVar1;
  int *piVar2;
  longlong *plVar3;
  uint *puVar4;
  float *pfVar5;
  byte bVar6;
  float fVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char cVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  longlong lVar23;
  uint *puVar24;
  double *pdVar25;
  byte bVar26;
  longlong *plVar27;
  double *pdVar28;
  double *pdVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  byte *pbVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auStack_4c8 [32];
  longlong local_4a8;
  longlong *local_498;
  double dStack_490;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [24];
  uint *local_430;
  double local_428;
  double dStack_420;
  double local_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  double *local_348;
  double dStack_340;
  undefined1 local_338 [16];
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  ulonglong local_2e8;
  ulonglong uStack_2e0;
  ulonglong local_2d8;
  ulonglong local_2d0;
  ulonglong uStack_2c8;
  ulonglong local_2c0;
  undefined1 local_2b8;
  ulonglong local_2b0;
  ulonglong uStack_2a8;
  ulonglong local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178 [2];
  double local_168;
  uint uStack_164;
  longlong local_160;
  double dStack_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  if ((((param_1[1] != 0) && (uVar20 = *param_1, -1 < (int)uVar20)) && ((int)uVar20 < DAT_14c9647dc)
      ) && (((plVar27 = (longlong *)
                        ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
             plVar27 != (longlong *)0x0 && (*(uint *)(plVar27 + 2) == param_1[1])) &&
            (((*(uint *)(plVar27 + 1) & 0x10200000) == 0 &&
             (plVar27 = (longlong *)*plVar27, plVar27 != (longlong *)0x0)))))) {
    lVar23 = plVar27[0x15];
    if (lVar23 != 0) {
      lVar15 = FUN_145a743fa();
      if (((*(int *)(lVar15 + 0x38) <= *(int *)(*(longlong *)(lVar23 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar15 + 0x38) * 8) == lVar15 + 0x30)) &&
         (*(char *)(lVar23 + 0x390) == '\x01')) {
        FUN_147e411a6(plVar27);
      }
    }
    if (param_1[1] == 0) {
LAB_1437f5d91:
      uVar21 = 0;
    }
    else {
      uVar20 = *param_1;
      uVar21 = 0;
      if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
        puVar22 = (undefined8 *)
                  ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
        if ((puVar22 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar22 + 2) != param_1[1] || ((*(uint *)(puVar22 + 1) & 0x10200000) != 0))))
        goto LAB_1437f5d91;
        uVar21 = *puVar22;
      }
    }
    FUN_1406a930a(uVar21,local_178);
    pdVar28 = local_178;
    pdVar25 = (double *)(param_1 + 8);
    for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
      *pdVar25 = *pdVar28;
      pdVar28 = pdVar28 + 1;
      pdVar25 = pdVar25 + 1;
    }
    local_168 = (double)((ulonglong)uStack_164 << 0x20);
    local_178[0] = 0.0;
    local_178[1] = 0.0;
    local_160 = 0;
    dStack_158 = 0.0;
    *(undefined4 *)(plVar27 + 0xcf) = 0;
    plVar27[0xcd] = 0;
    plVar27[0xce] = 0;
    FUN_147e2f234(plVar27 + 0xd0,&local_160);
    (**(code **)(*plVar27 + 0x540))(plVar27);
    FUN_141801bc8(local_160,(ulonglong)dStack_158 & 0xffffffff);
    if (local_160 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_147e3c00e(param_1);
  if ((((*(char *)((longlong)param_1 + 0x169) != '\0') || (param_1[1] == 0)) ||
      (uVar20 = *param_1, (int)uVar20 < 0)) ||
     (((DAT_14c9647dc <= (int)uVar20 ||
       (plVar27 = (longlong *)
                  ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
       plVar27 == (longlong *)0x0)) ||
      ((*(uint *)(plVar27 + 2) != param_1[1] ||
       (((*(uint *)(plVar27 + 1) & 0x10200000) != 0 || (lVar23 = *plVar27, lVar23 == 0))))))))
  goto LAB_1437f4d12;
  lVar15 = FUN_14477bcf0();
  lVar15 = *(longlong *)(lVar15 + 0xa8);
  if (*(char *)(lVar15 + 0x7c) != '\x01') goto LAB_1437f4d12;
  FUN_1406a930a(lVar23,local_178);
  FUN_147e3ee12(local_178,&local_1f8);
  FUN_1406a930a(lVar23,local_178);
  FUN_147e3ed9a(local_178,&local_278);
  fVar7 = *(float *)(lVar15 + 0x80);
  dVar33 = (double)(fVar7 + fVar7);
  dStack_250 = dStack_250 + dVar33;
  local_258 = local_258 + dVar33;
  dStack_260 = dStack_260 + dVar33;
  local_268 = local_268 - dVar33;
  dStack_270 = dStack_270 - dVar33;
  local_278 = local_278 - dVar33;
  local_248 = (double)CONCAT71(local_248._1_7_,1);
  lVar15 = *(longlong *)(lVar23 + 0xb0);
  if (lVar15 == 0) {
    lVar15 = FUN_1448abda6(lVar23);
  }
  FUN_147e40743(&local_348,lVar15,&local_278,2);
  local_430 = param_1;
  if ((longlong)dStack_340._0_4_ == 0) {
LAB_1437f4cf0:
    *(undefined1 *)(param_1 + 0x5a) = 1;
  }
  else {
    lVar15 = (longlong)dStack_340._0_4_ * 0x18;
    pdVar28 = local_348;
    do {
      lVar16 = *(longlong *)(lVar23 + 0xb0);
      if (lVar16 == 0) {
        lVar16 = FUN_1448abda6(lVar23);
      }
      FUN_147e3bc04(local_178,lVar16,pdVar28);
      dVar52 = local_1a8;
      dVar47 = dStack_1b0;
      dVar44 = local_1b8;
      dVar51 = local_1c8;
      dVar50 = dStack_1d0;
      dVar49 = local_1d8;
      dVar48 = dStack_1e0;
      dVar42 = local_1e8;
      dVar8 = dStack_1f0;
      dVar33 = local_1f8;
      pdVar28[2] = local_168;
      *pdVar28 = local_178[0];
      pdVar28[1] = local_178[1];
      pdVar28 = pdVar28 + 3;
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != 0);
    if (dStack_340._0_4_ == 0) goto LAB_1437f4cf0;
    if ((longlong)(int)param_1[0x2c] != 0) {
      plVar27 = *(longlong **)(local_430 + 0x2a);
      local_498 = plVar27 + (int)param_1[0x2c];
      do {
        if ((longlong)dStack_340._0_4_ != 0) {
          pdVar25 = local_348 + (longlong)dStack_340._0_4_ * 3;
          pdVar28 = local_348;
          do {
            dVar41 = *pdVar28 * dVar44;
            dVar43 = pdVar28[1] * dVar47;
            dVar34 = pdVar28[2] * dVar52;
            dVar39 = dVar43 * dVar33 - dVar8 * dVar41;
            dVar40 = dVar34 * dVar8 - dVar42 * dVar43;
            dVar45 = dVar41 * dVar42 - dVar33 * dVar34;
            dVar40 = dVar40 + dVar40;
            dVar45 = dVar45 + dVar45;
            dVar39 = dVar39 + dVar39;
            dVar34 = dVar39 * dVar48 + dVar34 + (dVar45 * dVar33 - dVar40 * dVar8) + dVar51;
            lVar23 = *plVar27;
            iVar14 = *(int *)(lVar23 + 0xc0);
            uVar20 = iVar14 + 1;
            if (iVar14 < (int)(*(uint *)(lVar23 + 0xc4) & 0x7fffffff)) {
              lVar15 = *(longlong *)(lVar23 + 0xb8);
            }
            else {
              uVar19 = *(uint *)(lVar23 + 0xc4) * 2;
              if (uVar19 <= uVar20) {
                uVar19 = uVar20;
              }
              uVar30 = (ulonglong)uVar19;
              if ((0x7ffffffe < uVar19) && (uVar30 = 0x7ffffffe, uVar20 == 0x7fffffff)) {
                FUN_144bfc170(0x4648a379,
                              "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                              ,0x90,"Invalid requestedCapacity");
              }
              local_178[0] = (double)(uVar30 * 0x10);
              lVar15 = (*DAT_14c787670)(DAT_14c6e47a8,local_178,DAT_14c6e47ac);
              FUN_144b3d470(lVar15,*(undefined8 *)(lVar23 + 0xb8),
                            (longlong)*(int *)(lVar23 + 0xc0) << 4);
              dVar1 = (double)(uVar30 * 0x10 + 0x10);
              uVar31 = uVar30;
              if ((ulonglong)dVar1 <= (ulonglong)local_178[0]) {
                uVar31 = uVar30 + 1;
                local_178[0] = (double)((longlong)local_178[0] + -0x10);
                if ((ulonglong)dVar1 <= (ulonglong)local_178[0]) {
                  uVar31 = uVar31 + ((longlong)local_178[0] + uVar30 * -0x10 >> 4);
                }
              }
              if (-1 < *(int *)(lVar23 + 0xc4)) {
                (*DAT_14c787678)(CONCAT71((int7)((ulonglong)dVar1 >> 8),DAT_14c6e47a8),
                                 *(undefined8 *)(lVar23 + 0xb8),0);
              }
              *(int *)(lVar23 + 0xc4) = (int)uVar31;
              *(longlong *)(lVar23 + 0xb8) = lVar15;
              iVar14 = *(int *)(lVar23 + 0xc0);
            }
            pfVar5 = (float *)(lVar15 + (longlong)iVar14 * 0x10);
            *pfVar5 = (float)((dVar39 * dVar8 - dVar45 * dVar42) + dVar48 * dVar40 + dVar41 + dVar49
                             ) * 0.01;
            pfVar5[1] = (float)((dVar42 * dVar40 - dVar33 * dVar39) + dVar48 * dVar45 + dVar43 +
                               dVar50) * 0.01;
            pfVar5[2] = (float)dVar34 * 0.01;
            pfVar5[3] = (float)dVar34 * 0.01;
            *(uint *)(lVar23 + 0xc0) = uVar20;
            pdVar28 = pdVar28 + 3;
          } while (pdVar28 != pdVar25);
        }
        plVar27 = plVar27 + 1;
      } while (plVar27 != local_498);
    }
  }
  param_1 = local_430;
  if (local_348 != (double *)0x0) {
    FUN_1400020a8();
    param_1 = local_430;
  }
LAB_1437f4d12:
  pbVar17 = (byte *)FUN_147e3ca42(param_1);
  if ((*(char *)((longlong)param_1 + 0x169) == '\0') && ((char)param_1[0x5a] == '\0')) {
    uVar20 = param_1[1];
    pbVar17 = (byte *)(ulonglong)uVar20;
    if (((uVar20 != 0) &&
        ((((uVar19 = *param_1, -1 < (int)uVar19 && ((int)uVar19 < DAT_14c9647dc)) &&
          (plVar27 = (longlong *)
                     ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
          plVar27 != (longlong *)0x0)) &&
         ((*(uint *)(plVar27 + 2) == uVar20 &&
          (pbVar17 = (byte *)(ulonglong)*(uint *)(plVar27 + 1),
          (*(uint *)(plVar27 + 1) & 0x10200000) == 0)))))) && (lVar23 = *plVar27, lVar23 != 0)) {
      pdVar28 = (double *)(param_1 + 8);
      pdVar25 = pdVar28;
      pdVar29 = local_178;
      for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
        *pdVar29 = *pdVar25;
        pdVar25 = pdVar25 + 1;
        pdVar29 = pdVar29 + 1;
      }
      local_178[0] = local_178[0] + 100.0;
      local_178[1] = local_178[1] + 100.0;
      local_168 = local_168 + 100.0;
      *(undefined1 *)(param_1 + 0x32) = 1;
      lVar15 = lVar23;
      do {
        lVar16 = lVar15;
        lVar15 = *(longlong *)(lVar16 + 0x120);
      } while (lVar15 != 0);
      FUN_147e3ee12(local_178,&local_1f8);
      FUN_147e3ed9a(local_178,&local_278);
      lVar15 = *(longlong *)(lVar23 + 0xb0);
      if (lVar15 == 0) {
        lVar15 = FUN_1448abda6(lVar23);
      }
      local_4a8 = lVar16;
      FUN_147e41440(param_1 + 0x32,lVar15,&local_278,&local_1f8);
      auVar12 = _DAT_149936790;
      auVar11 = _DAT_149934d80;
      if ((longlong)(int)param_1[0x36] != 0) {
        pbVar17 = *(byte **)(param_1 + 0x34);
        pbVar32 = pbVar17 + (longlong)(int)param_1[0x36] * 0xb0;
        puVar4 = param_1 + 0x38;
        dVar33 = (double)DAT_149934d80;
        dVar8 = DAT_149934d80._8_8_;
        do {
          uVar20 = *(uint *)(pbVar17 + 0x70);
          pbVar18 = (byte *)(ulonglong)uVar20;
          uVar30 = (ulonglong)(uVar20 >> 8) & 0xffffffffffffff0f;
          bVar26 = (byte)uVar30;
          if (3 < bVar26) goto LAB_1437f5276;
          uVar19 = uVar20 >> 8 & 0xf;
          cVar13 = (char)uVar20;
          switch(uVar19) {
          default:
            FUN_1412aff1a(pbVar17,puVar4,0,0xbf800000);
            break;
          case 2:
            if (param_1[0x48] != param_1[0x53]) {
              puVar24 = *(uint **)(param_1 + 0x56);
              if (*(uint **)(param_1 + 0x56) == (uint *)0x0) {
                puVar24 = param_1 + 0x54;
              }
              uVar20 = puVar24[param_1[0x58] - 1 & *(uint *)(pbVar17 + 0x74)];
              if (uVar20 != 0xffffffff) {
                do {
                  puVar24 = (uint *)(*(longlong *)(param_1 + 0x46) + (longlong)(int)uVar20 * 0x18);
                  if (*puVar24 == *(uint *)(pbVar17 + 0x74)) {
                    if (puVar24 + 2 != (uint *)0x0 && puVar24 != (uint *)0x0) {
                      if ((cVar13 != '\0') ||
                         (lVar23 = *(longlong *)(puVar24 + 2), *(char *)(lVar23 + 0x680) != '\x01'))
                      goto LAB_1437f5276;
                      FUN_147e47a34(lVar23,&local_2b0);
                      local_2d8 = local_2a0 ^ 0x8000000000000000;
                      local_2e8 = local_2b0 ^ 0x8000000000000000;
                      uStack_2e0 = uStack_2a8 ^ 0x8000000000000000;
                      local_2c0 = local_2a0;
                      local_2d0 = local_2b0;
                      uStack_2c8 = uStack_2a8;
                      local_2b8 = 1;
                      FUN_147e47986(lVar23,&local_3a8);
                      pdVar25 = pdVar28;
                      FUN_147e3ee12(pdVar28,&local_408);
                      local_328 = 0.0;
                      dStack_320 = 0.0;
                      local_448._0_16_ = local_368;
                      auVar37 = local_448._0_16_;
                      auVar35 = minpd(local_368,local_3c8);
                      local_458 = local_358;
                      auVar53 = local_458;
                      auVar38 = minpd(local_358,local_3b8);
                      auVar36._8_8_ = -(ulonglong)(auVar35._8_8_ < 0.0);
                      auVar36._0_8_ = -(ulonglong)(auVar35._0_8_ < 0.0);
                      iVar14 = movmskpd((int)&local_328,auVar36);
                      auVar35._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
                      auVar35._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
                      uVar20 = movmskpd((int)pdVar25,auVar35);
                      local_468._8_8_ = local_3b8._8_8_;
                      dStack_490 = local_3c8._8_8_;
                      local_458._0_8_ = local_358._0_8_;
                      local_458._8_8_ = local_358._8_8_;
                      local_448._0_8_ = local_368._0_8_;
                      local_448._8_8_ = local_368._8_8_;
                      local_468._0_8_ = local_3b8._0_8_;
                      uVar21 = local_468._0_8_;
                      local_498 = local_3c8._0_8_;
                      local_458 = auVar53;
                      local_448._0_16_ = auVar37;
                      if ((uVar20 & 0x3fffffff) == 0 && iVar14 == 0) {
                        local_478 = local_408;
                        dStack_470 = dStack_400;
                        local_488 = local_3f8;
                        dStack_480 = dStack_3f0;
                        local_428 = dStack_3f0;
                        dStack_420 = dStack_3f0;
                        local_348 = (double *)
                                    (dStack_3a0 * local_3f8 * -1.0 +
                                    local_398 * dStack_400 +
                                    dStack_390 * local_408 * 1.0 + local_3a8 * dStack_3f0);
                        dStack_340 = local_3a8 * local_3f8 * 1.0 +
                                     dStack_390 * dStack_400 +
                                     local_398 * local_408 * -1.0 + dStack_3a0 * dStack_3f0;
                        local_338._8_8_ =
                             local_398 * local_3f8 * -1.0 +
                             ((local_408 * local_3a8 * -1.0 + dStack_390 * dStack_3f0) -
                             dStack_3a0 * dStack_400);
                        local_338._0_8_ =
                             dStack_390 * local_3f8 * 1.0 +
                             ((local_408 * dStack_3a0 * 1.0 + local_398 * dStack_3f0) -
                             local_3a8 * dStack_400);
                        dVar51 = local_388 * (double)local_498;
                        dVar44 = dStack_380 * dStack_490;
                        dVar49 = local_378 * (double)local_468._0_8_;
                        dVar50 = dStack_370 * (double)local_468._8_8_;
                        dVar42 = dVar44 * local_408 - dStack_400 * dVar51;
                        dVar52 = dVar49 * dStack_400 - local_3f8 * dVar44;
                        dVar47 = dVar51 * local_3f8 - local_408 * dVar49;
                        dVar48 = dVar50 * dStack_3f0 - dStack_3f0 * dVar50;
                        dVar52 = dVar52 + dVar52;
                        dVar47 = dVar47 + dVar47;
                        dVar42 = dVar42 + dVar42;
                        dVar48 = dVar48 + dVar48;
                        local_328 = (dVar42 * dStack_400 - local_3f8 * dVar47) +
                                    dStack_3f0 * dVar52 + dVar51 + local_3e8;
                        dStack_320 = (dVar52 * local_3f8 - dVar42 * local_408) +
                                     dStack_3f0 * dVar47 + dVar44 + dStack_3e0;
                        local_468._0_8_ = (double)local_458._0_8_ * (double)local_468._0_8_;
                        local_468._8_8_ = (double)local_458._8_8_ * (double)local_468._8_8_;
                        local_318 = (dVar47 * local_408 - dStack_400 * dVar52) +
                                    dStack_3f0 * dVar42 + dVar49 + local_3d8;
                        dStack_310 = (dVar48 * dStack_3f0 - dVar48 * dStack_3f0) +
                                     dStack_3f0 * dVar48 + dVar50 + dStack_3d0;
                        dStack_490 = (double)local_448._8_8_ * dStack_490;
                        local_498 = (longlong *)((double)local_448._0_8_ * (double)local_498);
                      }
                      else {
                        dVar48 = dStack_400 + dStack_400;
                        dVar49 = local_3f8 + local_3f8;
                        dVar42 = local_408 * (local_408 + local_408);
                        local_1a8 = (1.0 - (dVar42 + dStack_400 * dVar48)) * (double)local_468._0_8_
                        ;
                        dVar50 = (local_408 + local_408) * dStack_3f0;
                        local_1b8 = (dVar48 * dStack_3f0 + local_408 * dVar49) *
                                    (double)local_468._0_8_;
                        local_468._8_8_ = (double)local_468._8_8_ * (double)local_458._8_8_;
                        local_468._0_8_ = (double)local_468._0_8_ * (double)local_458._0_8_;
                        local_1d8 = (dVar48 * local_408 - dVar49 * dStack_3f0) * dStack_490;
                        dStack_1b0 = (dVar49 * dStack_400 - dVar50) * (double)uVar21;
                        local_1f8 = (dVar33 - (local_3f8 * dVar49 + dStack_400 * dVar48)) *
                                    (double)local_498;
                        dStack_1d0 = (dVar8 - (local_3f8 * dVar49 + dVar42)) * dStack_490;
                        dStack_1f0 = (dVar48 * local_408 + dVar49 * dStack_3f0) * (double)local_498;
                        local_1c8 = (dVar49 * dStack_400 + dVar50) * dStack_490;
                        local_1e8 = (local_408 * dVar49 - dVar48 * dStack_3f0) * (double)local_498;
                        dStack_1e0 = 0.0;
                        uStack_1c0 = 0;
                        uStack_1a0 = 0;
                        local_198 = local_3e8;
                        dStack_190 = dStack_3e0;
                        local_188 = local_3d8;
                        uStack_180 = 0x3ff0000000000000;
                        dVar50 = local_3a8 + local_3a8;
                        dVar51 = dStack_3a0 + dStack_3a0;
                        dVar49 = local_398 + local_398;
                        dVar42 = local_3a8 * dVar50;
                        dVar48 = dStack_3a0 * dVar51;
                        local_478 = (1.0 - (dVar42 + dVar48)) * (double)local_458._0_8_;
                        dStack_470 = (0.0 - (dVar42 + dVar48)) * (double)local_458._8_8_;
                        local_488 = (dVar51 * dStack_390 + local_3a8 * dVar49) *
                                    (double)local_458._0_8_;
                        dStack_480 = (dVar50 * dStack_390 + local_3a8 * dVar50) *
                                     (double)local_458._8_8_;
                        local_258 = (dVar51 * local_3a8 - dVar49 * dStack_390) *
                                    (double)local_448._8_8_;
                        dStack_230 = (dVar49 * dStack_3a0 - dVar50 * dStack_390) *
                                     (double)local_458._0_8_;
                        dStack_490 = dStack_490 * (double)local_448._8_8_;
                        local_498 = (longlong *)((double)local_498 * (double)local_448._0_8_);
                        local_278 = (dVar33 - (local_398 * dVar49 + dVar48)) *
                                    (double)local_448._0_8_;
                        dStack_250 = (dVar8 - (local_398 * dVar49 + dVar42)) *
                                     (double)local_448._8_8_;
                        dStack_270 = (dVar51 * local_3a8 + dVar49 * dStack_390) *
                                     (double)local_448._0_8_;
                        local_248 = (dVar49 * dStack_3a0 + dVar50 * dStack_390) *
                                    (double)local_448._8_8_;
                        local_268 = (local_3a8 * dVar49 - dVar51 * dStack_390) *
                                    (double)local_448._0_8_;
                        dStack_260 = 0.0;
                        uStack_240 = 0;
                        uStack_220 = 0;
                        local_218 = local_388;
                        dStack_210 = dStack_380;
                        local_208 = local_378;
                        uStack_200 = 0x3ff0000000000000;
                        local_238 = local_488;
                        local_228 = local_478;
                        FUN_1447fea8d(local_178,&local_278,&local_1f8);
                        dVar42 = local_168 * local_168 +
                                 local_178[0] * local_178[0] + local_178[1] * local_178[1];
                        local_428 = local_148;
                        dVar48 = local_148 * local_148 +
                                 dStack_158 * dStack_158 + local_150 * local_150;
                        local_410 = local_128;
                        dVar49 = local_128 * local_128 +
                                 local_138 * local_138 + local_130 * local_130;
                        uVar30 = -(ulonglong)(0.0 <= dVar42 + -9.99999993922529e-09);
                        dVar42 = (double)(~uVar30 & 0x3ff0000000000000 |
                                         (ulonglong)(1.0 / SQRT(dVar42)) & uVar30);
                        uVar30 = -(ulonglong)(0.0 <= dVar48 + -9.99999993922529e-09);
                        dVar48 = (double)(~uVar30 & 0x3ff0000000000000 |
                                         (ulonglong)(1.0 / SQRT(dVar48)) & uVar30);
                        uVar30 = -(ulonglong)(0.0 <= dVar49 + -9.99999993922529e-09);
                        dVar49 = (double)(~uVar30 & 0x3ff0000000000000 |
                                         (ulonglong)(1.0 / SQRT(dVar49)) & uVar30);
                        local_458._0_8_ = local_178[1] * dVar42;
                        local_448._0_8_ = dStack_158 * dVar48;
                        local_478 = local_150 * dVar48;
                        local_488 = local_138 * dVar49;
                        auVar53._8_8_ = -(ulonglong)(0.0 <= dStack_490);
                        auVar53._0_8_ = -(ulonglong)(0.0 <= (double)local_498);
                        auVar53 = blendvpd(auVar12,auVar11,auVar53);
                        local_138 = (double)(~-(ulonglong)(0.0 <= (double)local_468._0_8_) &
                                             0xbff0000000000000 |
                                            -(ulonglong)(0.0 <= (double)local_468._0_8_) &
                                            0x3ff0000000000000);
                        dVar50 = auVar53._0_8_;
                        local_178[0] = local_178[0] * dVar42 * dVar50;
                        local_178[1] = local_178[1] * dVar42 * dVar50;
                        local_168 = dVar42 * local_168 * dVar50;
                        dVar42 = auVar53._8_8_;
                        local_148 = dVar48 * local_148 * dVar42;
                        local_150 = local_478 * dVar42;
                        dStack_158 = dVar42 * dStack_158 * dVar48;
                        local_128 = dVar49 * local_128 * local_138;
                        local_130 = local_130 * dVar49 * local_138;
                        local_138 = local_138 * local_488;
                        FUN_14481fd10(&local_298,local_178);
                        dVar42 = local_288 * local_288 + local_298 * local_298;
                        dVar48 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                        auVar38._0_8_ = dVar42 + dVar48;
                        auVar38._8_8_ = dVar42 + dVar48;
                        auVar37._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
                        auVar37._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
                        auVar53 = sqrtpd(auVar38,auVar38);
                        auVar53 = divpd(auVar11,auVar53);
                        auVar46._0_8_ = auVar53._0_8_ * local_288;
                        auVar46._8_8_ = auVar53._8_8_ * dStack_280;
                        local_338 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar46,auVar37);
                        local_348 = (double *)
                                    ((ulonglong)(local_298 * auVar53._0_8_) &
                                    -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_));
                        dStack_340 = (double)((ulonglong)(dStack_290 * auVar53._8_8_) &
                                             -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_));
                        dStack_310 = 0.0;
                        local_328 = local_118;
                        dStack_320 = dStack_110;
                        local_318 = local_108;
                      }
                      local_308 = local_498;
                      uStack_300 = dStack_490;
                      local_2f8 = local_468._0_8_;
                      uStack_2f0 = local_468._8_8_;
                      if ((longlong)(int)param_1[0x2c] != 0) {
                        local_468._0_8_ = *(undefined8 *)(param_1 + 0x2a);
                        lVar23 = 0;
                        local_498 = (longlong *)((longlong)(int)param_1[0x2c] << 3);
                        do {
                          FUN_147e3be23(*(undefined8 *)(local_468._0_8_ + lVar23),&local_2e8,
                                        &local_348,1);
                          lVar23 = lVar23 + 8;
                        } while (local_498 != (longlong *)lVar23);
                      }
                    }
                    break;
                  }
                  uVar20 = puVar24[4];
                } while (uVar20 != 0xffffffff);
              }
            }
            break;
          case 3:
            if (param_1[0x48] != param_1[0x53]) {
              puVar24 = *(uint **)(param_1 + 0x56);
              if (*(uint **)(param_1 + 0x56) == (uint *)0x0) {
                puVar24 = param_1 + 0x54;
              }
              uVar20 = puVar24[param_1[0x58] - 1 & *(uint *)(pbVar17 + 0x74)];
              if (uVar20 != 0xffffffff) {
                do {
                  puVar24 = (uint *)(*(longlong *)(param_1 + 0x46) + (longlong)(int)uVar20 * 0x18);
                  if (*puVar24 == *(uint *)(pbVar17 + 0x74)) {
                    if (((ulonglong)(puVar24 + 2) & 0xfffffffffffffff7) != 0) goto LAB_1437f5276;
                    break;
                  }
                  uVar20 = puVar24[4];
                } while (uVar20 != 0xffffffff);
              }
            }
            break;
          case 4:
          case 7:
            out(0xfd,cVar13);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 5:
                    /* WARNING: Could not recover jumptable at 0x0001437f8c33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pbVar17 = (byte *)(*(code *)((longlong)&switchD_1437f8c33::switchdataD_14ab9f9a8 +
                                        (longlong)
                                        (int)(&switchD_1437f8c33::switchdataD_14ab9f9a8)
                                             [(longlong)pbVar18]))();
            return pbVar17;
          case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 8:
          case 0xb:
            *(uint *)(pbVar18 + -0x7d) =
                 *(int *)(pbVar18 + -0x7d) +
                 (&switchD_1437f5240::switchdataD_14ab9f998)[uVar19] + 0x4ab9f998;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 9:
                    /* WARNING: Read-only address (ram,0x000149934d80) is written */
                    /* WARNING: Read-only address (ram,0x000149936790) is written */
            return pbVar18;
          case 10:
            LOCK();
            bVar6 = *pbVar18;
            *pbVar18 = bVar26;
            UNLOCK();
            pbVar32 = (byte *)(ulonglong)CONCAT31((int3)(uVar20 >> 8),cVar13 + *pbVar18);
            *pbVar32 = *pbVar32 + cVar13 + *pbVar18;
            if (pbVar17[0x1d8] == 1) {
              pbVar17[0x1d8] = 0;
            }
            if (pbVar17[0x1b8] == 1) {
              pbVar17[0x1b8] = 0;
            }
            plVar27 = *(longlong **)(pbVar17 + 0x180);
            if (plVar27 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar27 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                pbVar32 = (byte *)(**(code **)*plVar27)(plVar27,CONCAT71((int7)(uVar30 >> 8),bVar6))
                ;
                LOCK();
                piVar2 = (int *)((longlong)plVar27 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  pbVar32 = (byte *)(**(code **)(*plVar27 + 0x10))(plVar27);
                }
              }
            }
            if (pbVar17[0x140] == 1) {
              if (*(longlong *)(pbVar17 + 0x130) != 0) {
                pbVar32 = (byte *)FUN_1400020a8();
              }
              pbVar17[0x140] = 0;
            }
            if (pbVar17[0x54] == 1) {
              pbVar17[0x54] = 0;
            }
            plVar27 = *(longlong **)(pbVar17 + 0x48);
            if (plVar27 == (longlong *)0x0) {
              return pbVar32;
            }
            LOCK();
            piVar2 = (int *)((longlong)plVar27 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 != 0) {
              return pbVar32;
            }
                    /* WARNING: Could not recover jumptable at 0x000144942dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pbVar17 = (byte *)(**(code **)(*plVar27 + 0x10))();
            return pbVar17;
          case 0xc:
            *(int *)(pbVar18 + 8) = *(int *)(pbVar18 + 8) + 1;
            goto LAB_140a8a349;
          case 0xd:
            *(undefined8 *)pbVar17 = *(undefined8 *)puVar4;
            lVar23 = *(longlong *)(param_1 + 0x3a);
            *(longlong *)(pbVar17 + 8) = lVar23;
            if (lVar23 != 0) {
              LOCK();
              *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + 1;
              UNLOCK();
            }
LAB_140a8a349:
            pbVar17[0x120] = 1;
                    /* WARNING: Read-only address (ram,0x000149934d80) is written */
                    /* WARNING: Read-only address (ram,0x000149936790) is written */
            return pbVar17;
          case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0xf:
            (**(code **)(pbVar18 + 0x10))();
            uVar21 = *(undefined8 *)puVar4;
            uVar9 = *(undefined8 *)(param_1 + 0x3a);
            uVar10 = *(undefined8 *)(param_1 + 0x3e);
            *(undefined8 *)(pbVar17 + 0x10) = *(undefined8 *)(param_1 + 0x3c);
            *(undefined8 *)(pbVar17 + 0x18) = uVar10;
            *(undefined8 *)pbVar17 = uVar21;
            *(undefined8 *)(pbVar17 + 8) = uVar9;
            pbVar17[0x120] = 0;
            return pbVar17;
          }
          if ((0xffffff < param_1[0x44]) || (0xffffff < param_1[0x40])) break;
LAB_1437f5276:
          pbVar17 = pbVar17 + 0xb0;
        } while (pbVar17 != pbVar32);
      }
      uVar20 = param_1[0x44];
      pbVar17 = (byte *)(ulonglong)uVar20;
      if (((0xffffff < uVar20) || (param_1[3] < uVar20)) || (0xffffff < param_1[0x40])) {
        *(undefined1 *)((longlong)param_1 + 0x169) = 1;
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_4c8) == DAT_14c707940) {
    return pbVar17;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437f5d98 FUN_1437f5d98 body=465 status=ok
// SIG undefined FUN_1437f5d98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437f5d98(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(char *)(param_1 + 0x169) == '\0') && (*(char *)(param_1 + 0x168) == '\0')) {
    FUN_14477bcf0();
    uVar7 = uRam000000014c6dae8c;
    uVar6 = uRam000000014c6dae88;
    uVar5 = uRam000000014c6dae84;
    uVar4 = _DAT_14c6dae80;
    iVar1 = *(int *)(param_1 + 0xb0);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0xa8);
      uVar13 = _DAT_14c6dae80 ^ 0x80000000;
      uVar14 = uRam000000014c6dae84 ^ 0x80000000;
      uVar15 = uRam000000014c6dae88 ^ 0x80000000;
      uVar16 = uRam000000014c6dae8c ^ 0x80000000;
      lVar10 = 0;
      do {
        puVar12 = (undefined8 *)(*(longlong *)(lVar2 + lVar10) + 0x120);
        local_88 = 0xe0;
        puVar8 = (undefined8 *)(*DAT_14c787670)(0,&local_88,0);
        if (DAT_14c787680 != (code *)0x0) {
          (*DAT_14c787680)(puVar8,"hkaiNavVolume");
        }
        puVar8[1] = 0xffffffff;
        puVar8[2] = 1;
        *puVar8 = &PTR_LAB_14ab9efa0;
        puVar8[3] = 0;
        puVar8[4] = 0x8000000000000000;
        puVar8[5] = 0;
        puVar8[6] = 0x8000000000000000;
        puVar8[7] = 0;
        puVar8[8] = 0x8000000000000000;
        puVar8[9] = 0;
        puVar8[10] = 0x8000000000000000;
        puVar8[0xb] = 0;
        puVar8[0xc] = 0x8000000000000000;
        puVar8[0xe] = 0;
        puVar8[0xf] = 0;
        puVar8[0x16] = 0;
        puVar8[0x17] = 0;
        puVar8[0x14] = 0;
        puVar8[0x15] = 0;
        *(undefined4 *)((longlong)puVar8 + 0xcc) = 1;
        puVar8[0x1a] = 0;
        puVar8[0x1b] = 0;
        *(uint *)(puVar8 + 0x10) = uVar4;
        *(uint *)((longlong)puVar8 + 0x84) = uVar5;
        *(uint *)(puVar8 + 0x11) = uVar6;
        *(uint *)((longlong)puVar8 + 0x8c) = uVar7;
        *(uint *)(puVar8 + 0x12) = uVar13;
        *(uint *)((longlong)puVar8 + 0x94) = uVar14;
        *(uint *)(puVar8 + 0x13) = uVar15;
        *(uint *)((longlong)puVar8 + 0x9c) = uVar16;
        FUN_140d4ae10(puVar12);
        *puVar12 = puVar8;
        uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + lVar10) + 0x120);
        lVar9 = FUN_147e48bfc();
        lVar11 = *(longlong *)(lVar9 + 8) + 0x18;
        if (*(longlong *)(lVar9 + 8) == 0) {
          lVar11 = 0;
        }
        FUN_144d06d10(*(undefined8 *)(lVar2 + lVar10),param_1 + 0xe0,lVar11,uVar3);
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar1 * 8 != lVar10);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437f5f6a FUN_1437f5f6a body=493 status=ok
// SIG undefined FUN_1437f5f6a(void)

void FUN_1437f5f6a(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  uchar auVar5 [8];
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  GUID local_88;
  uchar local_78 [8];
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((*(char *)((longlong)param_1 + 0x169) == '\0') && (param_1[1] != 0)) &&
      (uVar1 = *param_1, -1 < (int)uVar1)) &&
     ((((int)uVar1 < DAT_14c9647dc &&
       (plVar10 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar10 != (longlong *)0x0)) &&
      ((*(uint *)(plVar10 + 2) == param_1[1] &&
       (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 &&
        (plVar10 = (longlong *)*plVar10, plVar10 != (longlong *)0x0)))))))) {
    local_88.Data1 = 0;
    local_88.Data2 = 0;
    local_88.Data3 = 0;
    local_88.Data4[0] = '\0';
    local_88.Data4[1] = '\0';
    local_88.Data4[2] = '\0';
    local_88.Data4[3] = '\0';
    local_88.Data4[4] = '\0';
    local_88.Data4[5] = '\0';
    local_88.Data4[6] = '\0';
    local_88.Data4[7] = '\0';
    CoCreateGuid(&local_88);
    uVar4 = local_88._4_4_;
    uVar6 = local_88.Data4._4_4_;
    local_70 = 0;
    uStack_68 = 0;
    local_88.Data2 = (undefined2)local_88.Data1;
    local_88.Data3 = local_88.Data1._2_2_;
    local_88.Data1 = 3;
    local_88.Data4[4] = local_88.Data4[0];
    local_88.Data4[5] = local_88.Data4[1];
    local_88.Data4[6] = local_88.Data4[2];
    local_88.Data4[7] = local_88.Data4[3];
    local_88.Data4._0_4_ = uVar4;
    auVar5 = local_88.Data4;
    local_88.Data4[4] = (uchar)uVar6;
    local_88.Data4[5] = SUB41(uVar6,1);
    local_88.Data4[6] = SUB41(uVar6,2);
    local_88.Data4[7] = SUB41(uVar6,3);
    local_78[0] = local_88.Data4[4];
    local_78[1] = local_88.Data4[5];
    local_78[2] = local_88.Data4[6];
    local_78[3] = local_88.Data4[7];
    uVar1 = param_1[0x2c];
    local_88.Data4 = auVar5;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar1);
    }
    if (uVar1 != 0) {
      FUN_147e3e298(&local_70);
      uVar1 = param_1[0x2c];
      if ((longlong)(int)uVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x2a);
        lVar12 = 0;
        do {
          uVar8 = uStack_68;
          lVar3 = *(longlong *)(lVar2 + lVar12);
          if ((((lVar3 != 0) && (*(longlong *)(lVar3 + 0x120) != 0)) &&
              (*(int *)(*(longlong *)(lVar3 + 0x120) + 0x20) != 0)) &&
             (*(longlong *)(lVar3 + 0x148) != 0)) {
            lVar11 = (longlong)(int)uStack_68;
            uVar9 = (int)uStack_68 + 1;
            uStack_68 = CONCAT44(uStack_68._4_4_,uVar9);
            if (uStack_68._4_4_ < uVar9) {
              FUN_147e3e300(&local_70,uVar8 & 0xffffffff);
            }
            lVar7 = local_70;
            FUN_147e2f35a(lVar11 * 0x30 + local_70,lVar3 + 0x120);
            lVar3 = *(longlong *)(lVar3 + 0x148);
            *(longlong *)(lVar7 + 0x28 + lVar11 * 0x30) = lVar3;
            if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
              FUN_1456cec3c();
            }
          }
          lVar12 = lVar12 + 8;
        } while ((longlong)(int)uVar1 * 8 != lVar12);
      }
    }
    *(undefined4 *)(plVar10 + 0xcf) = local_78._0_4_;
    *(ulong *)(plVar10 + 0xcd) = local_88.Data1;
    *(undefined4 *)((longlong)plVar10 + 0x66c) = local_88._4_4_;
    *(undefined4 *)(plVar10 + 0xce) = local_88.Data4._0_4_;
    *(undefined4 *)((longlong)plVar10 + 0x674) = local_88.Data4._4_4_;
    FUN_147e2f234(plVar10 + 0xd0,&local_70);
    (**(code **)(*plVar10 + 0x540))(plVar10);
    FUN_141801bc8(local_70,uStack_68 & 0xffffffff);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437f6159 FUN_1437f6159 body=2032 status=ok
// SIG undefined FUN_1437f6159(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1437f6159(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  LPVOID pvVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  longlong lVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar30;
  undefined4 uVar31;
  double dVar32;
  float fVar33;
  double dVar34;
  uint uVar35;
  uint uVar37;
  uint uVar38;
  undefined1 auVar36 [16];
  uint uVar39;
  double dVar40;
  undefined1 auVar41 [12];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  ulonglong uVar47;
  undefined1 auVar48 [16];
  undefined1 auStack_178 [32];
  float local_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  longlong local_148;
  ulonglong local_140;
  undefined **local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined1 local_108 [16];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e0;
  undefined1 auVar42 [16];
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  dVar22 = *(double *)(param_1 + 0x30);
  uVar18 = 9;
  if ((((((dVar22 <= -DAT_14cb1c738) || (DAT_14cb1c738 <= dVar22)) ||
        (*(double *)(param_1 + 0x38) <= -DAT_14cb1c740)) ||
       ((DAT_14cb1c740 <= *(double *)(param_1 + 0x38) ||
        (*(double *)(param_1 + 0x40) <= -DAT_14cb1c748)))) ||
      ((DAT_14cb1c748 <= *(double *)(param_1 + 0x40) ||
       ((iVar14 = _finite(dVar22), iVar14 == 0 ||
        (iVar14 = _finite(*(double *)(param_1 + 0x38)), iVar14 == 0)))))) ||
     ((iVar14 = _finite(*(double *)(param_1 + 0x40)), uVar13 = DAT_14cb1c870, uVar12 = DAT_14cb1c868
      , uVar11 = DAT_14cb1c860, iVar14 == 0 ||
      ((*(float *)(param_1 + 0x28) <= 0.0 && *(float *)(param_1 + 0x28) != 0.0 ||
       (*(float *)(param_1 + 0x2c) <= 0.0 && *(float *)(param_1 + 0x2c) != 0.0))))))
  goto LAB_1437f6858;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar18 = 4;
    goto LAB_1437f6858;
  }
  if (*(int *)(param_1 + 8) == 0x200) {
    local_128 = *(undefined8 *)(param_1 + 0x40);
    local_138 = *(undefined ***)(param_1 + 0x30);
    uStack_130 = *(undefined8 *)(param_1 + 0x38);
    local_110 = DAT_14cb1c870;
    local_120 = DAT_14cb1c860;
    uStack_118 = DAT_14cb1c868;
    param_2[0] = 0xffffffff;
    param_2[1] = 0xffffffff;
    param_2[2] = 3;
    *(undefined ***)(param_2 + 4) = local_138;
    *(undefined8 *)(param_2 + 6) = uStack_130;
    *(undefined8 *)(param_2 + 8) = local_128;
    *(undefined8 *)(param_2 + 10) = uVar11;
    *(undefined8 *)(param_2 + 0xc) = uVar12;
    *(undefined8 *)(param_2 + 0xe) = uVar13;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    plVar5 = *(longlong **)(param_2 + 0x12);
    if (plVar5 != (longlong *)0x0) {
      param_2[0x12] = 0;
      param_2[0x13] = 0;
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
    param_2[0x14] = 0xffffffff;
    uVar18 = 0;
    goto LAB_1437f6858;
  }
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x598);
  if (DAT_14cb1d000 == 0) {
LAB_1437f68de:
    bVar10 = false;
  }
  else {
    pvVar15 = TlsGetValue(DAT_14cb1d000);
    TlsSetValue(DAT_14cb1d000,(LPVOID)(longlong)((int)pvVar15 + 1));
    if ((int)pvVar15 != 0) goto LAB_1437f68de;
    AcquireSRWLockShared((PSRWLOCK)(lVar6 + 0x250));
    bVar10 = true;
  }
  uVar18 = 5;
  if ((*(longlong *)(lVar6 + 0x78) != 0) &&
     (lVar20 = *(longlong *)(*(longlong *)(lVar6 + 0x78) + 0x140), lVar20 != 0)) {
    lVar16 = FUN_144b3f1e0();
    if (lVar16 == 0) {
      uVar18 = 6;
    }
    else {
      local_148 = 0;
      local_140 = 0x8000000000000000;
      dVar22 = (double)*(float *)(param_1 + 0x2c);
      local_110 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_138 = &PTR_LAB_14ab9eff0;
      fVar21 = (float)(*(double *)(param_1 + 0x40) + (double)*(float *)(param_1 + 0x28));
      fStack_154 = (float)(*(double *)(param_1 + 0x38) + dVar22);
      local_158 = (float)(*(double *)(param_1 + 0x30) + dVar22);
      fVar33 = (float)(*(double *)(param_1 + 0x40) - (double)*(float *)(param_1 + 0x28));
      fStack_14c = (float)(*(double *)(param_1 + 0x38) - dVar22);
      local_150 = (float)(*(double *)(param_1 + 0x30) - dVar22);
      auVar26._0_4_ = local_150 * (float)DAT_149e1ef30;
      auVar26._4_4_ = fStack_14c * DAT_149e1ef30._4_4_;
      auVar26._8_4_ = fVar33 * DAT_149e1ef30._8_4_;
      auVar26._12_4_ = fVar33 * DAT_149e1ef30._12_4_;
      local_f8 = local_158 * (float)DAT_149e1ef30;
      fStack_f4 = fStack_154 * DAT_149e1ef30._4_4_;
      fStack_f0 = fVar21 * DAT_149e1ef30._8_4_;
      fStack_ec = fVar21 * DAT_149e1ef30._12_4_;
      iVar14 = -0x80000000;
      if (*(int *)(param_1 + 8) != -1) {
        iVar14 = 1 << ((byte)*(int *)(param_1 + 8) & 0x1f);
      }
      local_128 = CONCAT44(local_128._4_4_,iVar14);
      local_108 = auVar26;
      FUN_144b44640(fVar21,&local_138,&local_148);
      if ((local_140 & 0xffffffff) == 0) {
        uVar18 = 9;
      }
      else {
        uVar30 = (undefined4)DAT_14c8464e0;
        uVar31 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
        dVar22 = *(double *)(param_1 + 0x30);
        dVar3 = *(double *)(param_1 + 0x38);
        dVar4 = *(double *)(param_1 + 0x40);
        fVar21 = 3.4028235e+38;
        uVar19 = 0xffffffff;
        uVar17 = 0;
        dVar32 = DAT_14c8464e8;
        dVar34 = DAT_14c8464f0;
        do {
          uVar35 = *(uint *)(local_148 + uVar17 * 4);
          lVar16 = *(longlong *)
                    (*(longlong *)(lVar20 + 0x38) + 8 + (ulonglong)((uVar35 >> 0x16) * 0x120));
          if (lVar16 != 0) {
            lVar7 = *(longlong *)(*(longlong *)(lVar16 + 0x20) + 0x38);
            auVar42 = *(undefined1 (*) [16])
                       (*(longlong *)(*(longlong *)(lVar16 + 0x20) + 0x18) +
                       (ulonglong)(uVar35 & 0x3fffff) * 0x18);
            auVar26 = pmovzxwd(auVar26,auVar42);
            auVar44._0_4_ =
                 (float)auVar26._0_4_ * *(float *)(lVar7 + 0xa0) + *(float *)(lVar7 + 0xb0);
            auVar44._4_4_ =
                 (float)auVar26._4_4_ * *(float *)(lVar7 + 0xa4) + *(float *)(lVar7 + 0xb4);
            auVar44._8_4_ =
                 (float)auVar26._8_4_ * *(float *)(lVar7 + 0xa8) + *(float *)(lVar7 + 0xb8);
            auVar44._12_4_ =
                 (float)auVar26._12_4_ * *(float *)(lVar7 + 0xac) + *(float *)(lVar7 + 0xbc);
            auVar41._0_4_ =
                 (float)auVar42._8_2_ * *(float *)(lVar7 + 0xa0) + *(float *)(lVar7 + 0xb0);
            auVar41._4_4_ =
                 (float)auVar42._10_2_ * *(float *)(lVar7 + 0xa4) + *(float *)(lVar7 + 0xb4);
            auVar41._8_4_ =
                 (float)auVar42._12_2_ * *(float *)(lVar7 + 0xa8) + *(float *)(lVar7 + 0xb8);
            auVar42._12_4_ =
                 (float)auVar42._14_2_ * *(float *)(lVar7 + 0xac) + *(float *)(lVar7 + 0xbc);
            auVar42._0_12_ = auVar41;
            if (*(byte *)(lVar16 + 0x40) != 0) {
              uVar35 = (uint)*(byte *)(lVar16 + 0x40);
              auVar27._0_4_ = 0x16a8300 << uVar35;
              auVar27._4_4_ = 0x502ab000 << uVar35;
              auVar27._8_4_ = 0xa2a8c00 << uVar35;
              auVar27._12_4_ = 0 << uVar35;
              auVar29._0_4_ = 0xa154c00 << uVar35;
              auVar29._4_4_ = 0x1554300 << uVar35;
              auVar29._8_4_ = 0x50157000 << uVar35;
              auVar29._12_4_ = 0 << uVar35;
              auVar8._4_4_ = auVar44._8_4_;
              auVar8._0_4_ = auVar44._4_4_;
              auVar8._8_4_ = auVar44._0_4_;
              auVar8._12_4_ = auVar44._12_4_;
              auVar26 = blendvps(auVar44,auVar8,auVar27);
              auVar36._4_4_ = auVar44._0_4_;
              auVar36._0_4_ = auVar44._8_4_;
              auVar36._8_4_ = auVar44._4_4_;
              auVar36._12_4_ = auVar44._12_4_;
              auVar44 = blendvps(auVar26,auVar36,auVar29);
              uVar47 = (ulonglong)uVar35;
              uVar35 = (0xae71e0U >> uVar47) << 0x1f;
              uVar37 = (0xb9e306U >> uVar47) << 0x1f;
              uVar38 = (0xeb903cU >> uVar47) << 0x1f;
              uVar39 = (0U >> uVar47) << 0x1f;
              auVar9._4_4_ = auVar41._8_4_;
              auVar9._0_4_ = auVar41._4_4_;
              auVar9._8_4_ = auVar41._0_4_;
              auVar9._12_4_ = auVar42._12_4_;
              auVar26 = blendvps(auVar42,auVar9,auVar27);
              auVar48._4_4_ = auVar41._0_4_;
              auVar48._0_4_ = auVar41._8_4_;
              auVar48._8_4_ = auVar41._4_4_;
              auVar48._12_4_ = auVar42._12_4_;
              auVar26 = blendvps(auVar26,auVar48,auVar29);
              auVar45._0_8_ = CONCAT44(auVar44._4_4_ ^ uVar37,auVar44._0_4_ ^ uVar35);
              auVar45._8_4_ = auVar44._8_4_ ^ uVar38;
              auVar45._12_4_ = auVar44._12_4_ ^ uVar39;
              auVar43._0_4_ = auVar26._0_4_ ^ uVar35;
              auVar43._4_4_ = auVar26._4_4_ ^ uVar37;
              auVar43._8_4_ = auVar26._8_4_ ^ uVar38;
              auVar43._12_4_ = auVar26._12_4_ ^ uVar39;
              auVar24._8_4_ = auVar45._8_4_;
              auVar24._0_8_ = auVar45._0_8_;
              auVar24._12_4_ = auVar45._12_4_;
              auVar44 = minps(auVar45,auVar43);
              auVar26 = maxps(auVar24,auVar43);
              auVar41 = auVar26._0_12_;
            }
            fVar33 = auVar44._4_4_ + *(float *)(lVar16 + 0x54);
            fVar46 = auVar44._12_4_ + *(float *)(lVar16 + 0x5c);
            dVar23 = (double)(auVar44._0_4_ + *(float *)(lVar16 + 0x50)) * 100.0;
            if ((dVar23 <= dVar22) &&
               (dVar25 = (double)(auVar41._0_4_ + *(float *)(lVar16 + 0x50)) * 100.0,
               dVar23 = dVar22, dVar25 < dVar22)) {
              dVar23 = dVar25;
            }
            auVar28._4_4_ = fVar33;
            auVar28._0_4_ = fVar33;
            auVar28._8_4_ = fVar46;
            auVar28._12_4_ = fVar46;
            auVar26._8_8_ = auVar28._8_8_;
            auVar26._0_8_ = (double)fVar33 * 100.0;
            if (auVar26._0_8_ <= dVar3) {
              dVar25 = (double)(auVar41._4_4_ + *(float *)(lVar16 + 0x54)) * 100.0;
              auVar26._8_8_ = 0;
              auVar26._0_8_ = dVar3;
              if (dVar25 < dVar3) {
                auVar26._8_8_ = 0;
                auVar26._0_8_ = dVar25;
              }
            }
            dVar25 = (double)(auVar44._8_4_ + *(float *)(lVar16 + 0x58)) * 100.0;
            if ((dVar25 <= dVar4) &&
               (dVar40 = (double)(auVar41._8_4_ + *(float *)(lVar16 + 0x58)) * 100.0, dVar25 = dVar4
               , dVar40 < dVar4)) {
              dVar25 = dVar40;
            }
            dVar40 = auVar26._0_8_;
            fVar33 = (float)((dVar25 - dVar4) * (dVar25 - dVar4) +
                            (dVar40 - dVar3) * (dVar40 - dVar3) +
                            (dVar23 - dVar22) * (dVar23 - dVar22));
            if (fVar33 < fVar21) {
              uVar30 = SUB84(dVar23,0);
              uVar31 = (undefined4)((ulonglong)dVar23 >> 0x20);
              if (fVar33 <= 0.0) {
                iVar14 = (int)uVar17;
                goto LAB_1437f6786;
              }
              uVar19 = uVar17 & 0xffffffff;
              dVar32 = dVar40;
              dVar34 = dVar25;
              fVar21 = fVar33;
            }
          }
          dVar25 = dVar34;
          dVar40 = dVar32;
          iVar14 = (int)uVar19;
          uVar17 = uVar17 + 1;
          dVar32 = dVar40;
          dVar34 = dVar25;
        } while ((local_140 & 0xffffffff) != uVar17);
        if (iVar14 == -1) {
          uVar18 = 8;
        }
        else {
LAB_1437f6786:
          uVar35 = *(uint *)(local_148 + (longlong)iVar14 * 4);
          uVar38 = uVar35 & 0x3fffff;
          uVar37 = uVar35 >> 0x16;
          if (uVar35 == 0xffffffff) {
            uVar37 = 0xffffffff;
            uVar38 = 0xffffffff;
          }
          *param_2 = uVar37;
          param_2[1] = uVar38;
          param_2[2] = 2;
          *(ulonglong *)(param_2 + 4) = CONCAT44(uVar31,uVar30);
          *(double *)(param_2 + 6) = dVar40;
          *(double *)(param_2 + 8) = dVar25;
          uVar18 = DAT_14cb1c868;
          *(undefined8 *)(param_2 + 10) = DAT_14cb1c860;
          *(undefined8 *)(param_2 + 0xc) = uVar18;
          *(undefined8 *)(param_2 + 0xe) = DAT_14cb1c870;
          param_2[0x10] = 0;
          param_2[0x11] = 0;
          plVar5 = *(longlong **)(param_2 + 0x12);
          if (plVar5 != (longlong *)0x0) {
            param_2[0x12] = 0;
            param_2[0x13] = 0;
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
          param_2[0x14] = 0xffffffff;
          uVar18 = 0;
        }
      }
      uVar17 = local_140 >> 0x20;
      local_140 = local_140 & 0xffffffff00000000;
      lVar20 = (longlong)(int)uVar17;
      if ((-1 < lVar20) && (local_148 != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))(&PTR_vftable_14c6e47c0,local_148,lVar20 << 2);
      }
    }
  }
  if (bVar10) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar6 + 0x250));
  }
  if (DAT_14cb1d000 != 0) {
    pvVar15 = TlsGetValue(DAT_14cb1d000);
    TlsSetValue(DAT_14cb1d000,(LPVOID)(longlong)((int)pvVar15 + -1));
  }
LAB_1437f6858:
  if ((local_e0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18;
}



// FUNCTION 1437f694a FUN_1437f694a body=121 status=ok
// SIG undefined FUN_1437f694a(void)

void FUN_1437f694a(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  
  FUN_1448912e0(param_1 + 0x20,param_1 + 0x950);
  if (((*(int *)(param_1 + 0x14) != 0) && (uVar1 = *(uint *)(param_1 + 0x10), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x14))) &&
       (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*plVar2 != 0)))) {
      FUN_1437fc2c0(*plVar2,param_1 + 0x20);
      return;
    }
  }
  return;
}



// FUNCTION 1437f69c4 FUN_1437f69c4 body=12981 status=ok
// SIG undefined FUN_1437f69c4(void)

void FUN_1437f69c4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  float *pfVar3;
  double dVar4;
  byte bVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  int iVar11;
  byte bVar12;
  char cVar13;
  byte bVar14;
  int iVar15;
  longlong lVar16;
  code *pcVar17;
  double *pdVar18;
  longlong lVar19;
  longlong lVar20;
  undefined7 ***_Dst;
  char *pcVar21;
  void *pvVar22;
  undefined7 *puVar23;
  longlong *plVar24;
  longlong lVar25;
  longlong *plVar26;
  longlong *plVar27;
  undefined7 **_Size;
  code **ppcVar28;
  undefined8 *puVar29;
  code **ppcVar30;
  size_t _Size_00;
  double *pdVar31;
  longlong *plVar32;
  undefined8 *puVar33;
  undefined8 uVar34;
  longlong *plVar35;
  bool bVar36;
  undefined1 uVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined1 auStack_9b8 [32];
  undefined4 local_998;
  undefined4 local_990;
  undefined4 local_988;
  undefined8 local_980;
  wchar_t *local_978;
  code *local_970;
  undefined1 *local_968;
  undefined1 *local_960;
  code *local_958;
  code *local_950;
  undefined4 local_93c;
  longlong local_938;
  code **local_930;
  undefined4 local_924;
  longlong *local_920;
  longlong *local_918;
  undefined8 local_910;
  undefined8 local_908;
  longlong *local_900;
  undefined7 *local_8f8;
  undefined8 local_8f0;
  longlong **local_8e8;
  undefined7 local_8e0;
  int iStack_8d9;
  undefined4 uStack_8d5;
  undefined4 uStack_8d1;
  undefined4 uStack_8cd;
  undefined4 local_8c9;
  undefined4 uStack_8c5;
  undefined4 uStack_8c1;
  undefined4 uStack_8bd;
  undefined4 local_8b9;
  undefined4 uStack_8b5;
  undefined4 uStack_8b1;
  undefined4 uStack_8ad;
  code *local_8a8;
  undefined7 **ppuStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  longlong local_888;
  code **ppcStack_880;
  undefined8 local_878;
  undefined8 uStack_870;
  longlong local_868;
  code *local_858;
  undefined7 **local_850;
  double local_800;
  undefined1 local_7f8;
  longlong local_7e8;
  undefined8 uStack_7e0;
  float local_7d8;
  undefined4 local_7d0;
  undefined8 uStack_7cc;
  undefined8 uStack_7c4;
  undefined8 uStack_7bc;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 local_7ac;
  undefined8 local_7a8;
  longlong lStack_7a0;
  float local_798;
  char local_794;
  uint local_790;
  undefined4 uStack_78c;
  undefined8 uStack_788;
  undefined4 local_780;
  undefined4 uStack_77c;
  undefined8 uStack_778;
  double adStack_770 [9];
  ulonglong local_728;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined1 local_710;
  undefined7 *local_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  longlong local_6e0;
  code *local_6d8;
  undefined7 **ppuStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  code **local_6b8;
  undefined8 local_6b0;
  char local_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  longlong local_670;
  longlong *plStack_668;
  undefined4 local_660;
  undefined8 local_658;
  float local_650;
  undefined4 local_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined8 local_638;
  char local_630;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  longlong local_618;
  char local_610;
  undefined4 local_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined7 *local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  char local_5d8;
  undefined1 local_5d0 [8];
  longlong *local_5c8;
  longlong *local_558;
  longlong *local_4e0;
  char local_4b0;
  char local_4a8;
  undefined8 local_498 [12];
  char local_438;
  undefined8 local_428;
  undefined4 local_420;
  undefined1 local_418 [5];
  undefined1 auStack_413 [3];
  undefined8 uStack_410;
  undefined8 local_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  longlong local_3e0;
  char local_3d8 [8];
  char local_3d0;
  double local_3c0;
  char *local_3b8;
  undefined8 local_3b0;
  longlong local_3a8;
  int iStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  longlong local_388;
  code *local_380;
  undefined7 **ppuStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  code **local_360;
  undefined8 local_358;
  uint local_350;
  undefined4 local_34c;
  double local_348;
  double dStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  longlong lStack_318;
  longlong *local_310;
  longlong *local_308;
  ulonglong local_300;
  char cStack_2f8;
  undefined5 uStack_2f7;
  undefined2 uStack_2f2;
  undefined6 local_2f0;
  undefined2 uStack_2ea;
  undefined4 local_2e8;
  undefined1 local_2e4;
  undefined1 uStack_2e3;
  longlong local_238;
  longlong local_230;
  longlong lStack_228;
  undefined4 local_220;
  undefined1 local_21c;
  longlong local_218;
  longlong lStack_210;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  longlong local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  longlong local_1a0;
  longlong *local_198;
  undefined4 local_190;
  undefined2 local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  longlong local_170;
  char local_168;
  undefined1 local_160;
  longlong local_158 [12];
  char local_f8;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined1 local_c0;
  byte local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_9b8;
  if ((((((*(int *)(param_1 + 0x14) == 0) || (uVar6 = *(uint *)(param_1 + 0x10), (int)uVar6 < 0)) ||
        (DAT_14c9647dc <= (int)uVar6)) ||
       ((plVar24 = (longlong *)
                   ((ulonglong)((uVar6 & 0xffff) * 0x18) + (longlong)DAT_14c9647c8[uVar6 >> 0x10]),
        plVar24 == (longlong *)0x0 || ((int)plVar24[2] != *(int *)(param_1 + 0x14))))) ||
      ((*(uint *)(plVar24 + 1) & 0x10200000) != 0)) ||
     (plVar24 = (longlong *)*plVar24, plVar24 == (longlong *)0x0)) goto LAB_1437f8e49;
  bVar5 = *(byte *)((longlong)plVar24 + 0x5b4);
  FUN_1437fc42e(plVar24);
  if ((*(char *)(param_1 + 0x804) == '\x01') && (*(longlong *)(param_1 + 0xcc0) == 0)) {
    *(undefined8 *)(param_1 + 0xcc0) = DAT_14c872be0;
  }
  lVar20 = plVar24[0x16];
  if (lVar20 == 0) {
    lVar20 = FUN_1448abda6(plVar24);
    if (lVar20 != 0) goto LAB_1437f6ac0;
LAB_1437f7e4b:
    uVar49 = 0x3d0;
    memset(&local_7e8,0,0x3d0);
    uStack_7c4 = 0x404000003f800000;
    uStack_7bc = 0x3f8000003fc00000;
    uStack_7b4 = 0x3f800000;
    uStack_7b0 = 0x40000000;
    local_7ac = 0x3f800000;
    uStack_788 = 0;
    local_7a8 = 0;
    lStack_7a0 = 0;
    local_780._0_2_ = CONCAT11(1,(byte)local_780);
    uStack_778 = 0;
    adStack_770[0] = 0.0;
    adStack_770[1] = 0.0;
    adStack_770[2] = 0.0;
    adStack_770[3] = 0.0;
    adStack_770[4] = 0.0;
    adStack_770[5] = 0.0;
    adStack_770[6] = 0.0;
    adStack_770[7] = 0.0;
    adStack_770[8] = 0.0;
    local_728 = 0;
    uStack_718 = (double)CONCAT44(0x3f800000,(undefined4)uStack_718);
    local_710 = 1;
    local_690 = DAT_14cb1c748;
    local_6a0 = DAT_14cb1c738;
    uStack_698 = DAT_14cb1c740;
    uStack_678 = DAT_14cb1c870;
    uStack_688 = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
    uStack_680 = (longlong *)CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
    local_670 = 0;
    plStack_668 = (longlong *)0x0;
    local_660 = 0xffffffff;
    local_630 = 0;
LAB_1437f7f2c:
    uStack_7cc = CONCAT26(uStack_7cc._6_2_,0x10100000002);
    local_720 = (undefined7 *)CONCAT44(local_720._4_4_,0x3f800000);
    uStack_7b0 = 0x40000000;
    uStack_7b4 = 0x3f800000;
    uStack_7bc = 0x3f8000003fc00000;
    uStack_7c4 = 0x404000003f800000;
    local_630 = '\0';
    local_660 = 0xffffffff;
    plStack_668 = (longlong *)0x0;
    local_670 = 0;
    local_710 = 1;
    local_728 = 0;
    adStack_770[8] = 0.0;
    adStack_770[7] = 0.0;
    adStack_770[6] = 0.0;
    adStack_770[5] = 0.0;
    adStack_770[4] = 0.0;
    adStack_770[3] = 0.0;
    adStack_770[2] = 0.0;
    adStack_770[1] = 0.0;
    adStack_770[0] = 0.0;
    uStack_778 = 0;
    uStack_788 = 0;
    lStack_7a0 = 0;
    local_7a8 = 0;
    local_7ac = 0x3f800000;
    local_438 = '\0';
    local_428 = 0;
    local_420 = (uint)local_420._2_2_ << 0x10;
    local_6a0 = DAT_14cb1c738;
    uStack_698 = DAT_14cb1c740;
    local_690 = DAT_14cb1c748;
    uStack_678 = DAT_14cb1c870;
  }
  else {
LAB_1437f6ac0:
    uVar49 = DAT_14cb1c840;
    param_4 = (undefined4)lVar20;
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_7e8,uVar49);
    plVar27 = uStack_7e0;
    lVar20 = local_7e8;
    if ((local_7e8 == 0) || (uStack_7e0 == (longlong *)0x0)) {
      plVar27 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(uStack_7e0 + 1) = (int)uStack_7e0[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)uStack_7e0 + 0xc) = *(int *)((longlong)uStack_7e0 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar35 = uStack_7e0 + 1;
      *(int *)plVar35 = (int)*plVar35 + -1;
      UNLOCK();
      if ((int)*plVar35 == 0) {
        (**(code **)*uStack_7e0)(uStack_7e0);
        LOCK();
        piVar2 = (int *)((longlong)plVar27 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
        }
      }
    }
    plVar35 = uStack_7e0;
    if (uStack_7e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = uStack_7e0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*uStack_7e0)(uStack_7e0);
        LOCK();
        piVar2 = (int *)((longlong)plVar35 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar35 + 0x10))(plVar35);
        }
      }
    }
    if (plVar27 == (longlong *)0x0) goto LAB_1437f7e4b;
    iVar15 = (int)plVar27[1];
    do {
      plVar35 = (longlong *)0x0;
      if (iVar15 == 0) break;
      LOCK();
      iVar11 = (int)plVar27[1];
      bVar36 = iVar15 == iVar11;
      if (bVar36) {
        *(int *)(plVar27 + 1) = iVar15 + 1;
        iVar11 = iVar15;
      }
      iVar15 = iVar11;
      UNLOCK();
      plVar35 = plVar27;
    } while (!bVar36);
    LOCK();
    piVar2 = (int *)((longlong)plVar27 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
    }
    if (plVar35 == (longlong *)0x0) {
      uVar49 = 0x3d0;
      memset(&local_7e8,0,0x3d0);
      uStack_7c4 = 0x404000003f800000;
      uStack_7bc = 0x3f8000003fc00000;
      uStack_7b4 = 0x3f800000;
      uStack_7b0 = 0x40000000;
      local_7ac = 0x3f800000;
      local_790 = local_790 & 0xffffff00;
      uStack_788 = 0;
      local_7a8 = 0;
      lStack_7a0 = 0;
      local_780._0_2_ = CONCAT11(1,(byte)local_780);
      uStack_778 = 0;
      adStack_770[0] = 0.0;
      adStack_770[1] = 0.0;
      adStack_770[2] = 0.0;
      adStack_770[3] = 0.0;
      adStack_770[4] = 0.0;
      adStack_770[5] = 0.0;
      adStack_770[6] = 0.0;
      adStack_770[7] = 0.0;
      adStack_770[8] = 0.0;
      local_728 = 0;
      uStack_718 = 0.0078125;
      local_710 = 1;
      local_6a8 = '\0';
      local_690 = DAT_14cb1c748;
      local_6a0 = DAT_14cb1c738;
      uStack_698 = DAT_14cb1c740;
      uStack_678 = DAT_14cb1c870;
      uStack_688 = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
      uStack_680 = (longlong *)CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
      local_670 = 0;
      plStack_668 = (longlong *)0x0;
      local_660 = 0xffffffff;
      local_658 = (ulonglong)(uint)local_658;
      local_630 = 0;
      local_5d8 = '\0';
      goto LAB_1437f7f2c;
    }
    if ((lVar20 == 0) || (plVar27 = (longlong *)plVar24[0x3e], plVar27 == (longlong *)0x0)) {
      uVar49 = 0x3d0;
      memset(&local_7e8,0,0x3d0);
      uStack_7cc = CONCAT26(uStack_7cc._6_2_,0x10100000002);
      uStack_7c4 = 0x404000003f800000;
      uStack_7bc = 0x3f8000003fc00000;
      uStack_7b4 = 0x3f800000;
      uStack_7b0 = 0x40000000;
      local_7ac = 0x3f800000;
      local_790 = local_790 & 0xffffff00;
      uStack_788 = 0;
      local_7a8 = 0;
      lStack_7a0 = 0;
      local_780._0_2_ = CONCAT11(1,(byte)local_780);
      uStack_778 = 0;
      adStack_770[0] = 0.0;
      adStack_770[1] = 0.0;
      adStack_770[2] = 0.0;
      adStack_770[3] = 0.0;
      adStack_770[4] = 0.0;
      adStack_770[5] = 0.0;
      adStack_770[6] = 0.0;
      adStack_770[7] = 0.0;
      adStack_770[8] = 0.0;
      local_728 = 0;
      local_720 = (undefined7 *)CONCAT44(local_720._4_4_,0x3f800000);
      uStack_718 = 0.0078125;
      local_710 = 1;
      local_6a8 = '\0';
      local_690 = DAT_14cb1c748;
      local_6a0 = DAT_14cb1c738;
      uStack_698 = DAT_14cb1c740;
      uStack_678 = DAT_14cb1c870;
      uStack_688 = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
      uStack_680 = (longlong *)CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
      local_670 = 0;
      plStack_668 = (longlong *)0x0;
      local_660 = 0xffffffff;
      local_658 = (ulonglong)(uint)local_658;
      local_630 = '\0';
      local_5d8 = '\0';
      local_438 = '\0';
      local_428 = 0;
      local_420 = (uint)local_420._2_2_ << 0x10;
    }
    else {
      local_7d0 = local_7d0 & 0xffff0000;
      local_7e8 = 0;
      uStack_7e0 = (longlong *)0x0;
      local_7d8 = 0.0;
      uStack_7cc = CONCAT17(uStack_7cc._7_1_,0x10100000002);
      uStack_7c4 = 0x404000003f800000;
      uStack_7bc = 0x3f8000003fc00000;
      uStack_7b4 = 0x3f800000;
      uStack_7b0 = 0x40000000;
      local_7ac = 0x3f800000;
      local_794 = '\0';
      local_790 = local_790 & 0xffffff00;
      uStack_78c = 0;
      uStack_788 = 0;
      local_780 = CONCAT22(local_780._2_2_,0x100);
      local_7a8 = 0;
      lStack_7a0 = 0;
      uStack_778 = 0;
      adStack_770[0] = 0.0;
      adStack_770[1] = 0.0;
      adStack_770[2] = 0.0;
      adStack_770[3] = 0.0;
      adStack_770[4] = 0.0;
      adStack_770[5] = 0.0;
      adStack_770[6] = 0.0;
      adStack_770[7] = 0.0;
      adStack_770[8] = 0.0;
      local_728 = 0;
      local_720 = (undefined7 *)0x3f800000;
      uStack_718 = 0.0078125;
      local_710 = 1;
      local_708 = (undefined7 *)0x0;
      local_6a8 = '\0';
      local_6a0 = DAT_14cb1c738;
      uStack_698 = DAT_14cb1c740;
      local_690 = DAT_14cb1c748;
      uStack_688 = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
      uStack_680 = (longlong *)CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
      uStack_678 = DAT_14cb1c870;
      local_670 = 0;
      plStack_668 = (longlong *)0x0;
      local_660 = 0xffffffff;
      local_658 = 0;
      local_650 = 0.0;
      local_630 = '\0';
      local_610 = '\0';
      local_5d8 = '\0';
      local_4a8 = '\0';
      local_438 = '\0';
      local_420 = local_420 & 0xffff0000;
      local_428 = 0;
      plVar1 = plVar24 + 0x2f;
      if (*(code **)(plVar24[0x2f] + 0xe0) == (code *)&LAB_144948d28) {
        if (*(byte *)((longlong)plVar24 + 0x291) - 1 < 2) {
          uVar37 = plVar24[0x22] != 0;
        }
        else {
          uVar37 = 0;
        }
      }
      else {
        uVar37 = (**(code **)(plVar24[0x2f] + 0xe0))(plVar1);
      }
      local_428._0_6_ = CONCAT15(uVar37,(undefined5)local_428);
      local_428 = CONCAT35(local_428._5_3_,(undefined5)local_428) & 0xffffff00ffffffff;
      uStack_7e0 = (longlong *)CONCAT44(uStack_7e0._4_4_,*(undefined4 *)(lVar20 + 0x5a0));
      fVar47 = *(float *)(lVar20 + 0x5a4);
      local_7e8 = lVar20;
      if ((((*(uint *)(plVar27 + 1) & 0x10) == 0) && (lVar19 = plVar27[4], lVar19 != 0)) &&
         (-1 < (short)*(undefined4 *)(lVar19 + 8))) {
        uVar6 = *(uint *)(lVar19 + 0xc);
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar19 = (ulonglong)((uVar6 & 0xffff) * 0x18) + (longlong)DAT_14c9647c8[uVar6 >> 0x10];
        }
        else {
          lVar19 = 0;
        }
        if ((*(uint *)(lVar19 + 8) >> 0x1c & 1) != 0) goto LAB_1437f77a9;
        if (DAT_14cae8b20 == 0) {
          local_960 = local_418;
          _local_418 = (double)&LAB_14355090c;
          local_950 = FUN_14081d0ea;
          local_958 = FUN_14081d0ea;
          local_968 = &LAB_147b8e16d;
          local_970 = (code *)&LAB_140810a38;
          local_978 = L"Engine";
          local_980 = 0x800000000;
          local_988 = 0x10000000;
          local_990 = 8;
          local_998 = 0x3f0;
          param_4 = 0x47b8e16c;
          FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20);
        }
        lVar19 = DAT_14cae8b20;
        if (DAT_14c951858 == 0) {
          local_960 = local_418;
          _local_418 = (double)FUN_1449e2820;
          local_950 = FUN_14081d0ea;
          local_958 = FUN_14081d0ea;
          local_968 = &LAB_1468c5283;
          local_970 = FUN_142809da0;
          local_978 = L"Engine";
          local_980 = 0x400000000;
          local_988 = 0x10000000;
          local_990 = 8;
          local_998 = 0x50;
          param_4 = 0x468c5288;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858);
        }
        lVar16 = plVar27[4];
        if (lVar16 == 0) goto LAB_1437f77a9;
        iVar15 = *(int *)(lVar19 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < iVar15) ||
             (lVar25 = lVar16,
             *(longlong *)
              (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)iVar15 * 8) !=
             lVar19 + 0x30)) {
            lVar25 = 0;
          }
        } while ((lVar25 == 0) && (lVar16 = *(longlong *)(lVar16 + 0x20), lVar16 != 0));
        if ((lVar25 == 0) ||
           (((*(longlong *)(lVar25 + 0xc0) == 0 ||
             (lVar19 = *(longlong *)(*(longlong *)(lVar25 + 0xc0) + 0x30), lVar19 == 0)) ||
            (plVar26 = *(longlong **)(lVar19 + 0x2b0), plVar26 == (longlong *)0x0))))
        goto LAB_1437f77a9;
        fVar48 = *(float *)((longlong)plVar27 + 0x74);
        if (*(code **)(*plVar26 + 0x668) == (code *)&LAB_1448e5bda) {
          fVar38 = *(float *)(plVar26 + 0x99) * *(float *)((longlong)plVar26 + 0x4cc) *
                   *(float *)(plVar26 + 0x9a);
        }
        else {
          fVar38 = (float)(**(code **)(*plVar26 + 0x668))();
        }
        fVar48 = fVar48 * fVar38;
      }
      else {
LAB_1437f77a9:
        fVar48 = *(float *)((longlong)plVar27 + 0x74);
      }
      fVar47 = fVar47 * fVar48;
      uStack_7e0 = (longlong *)CONCAT44(fVar47,(float)uStack_7e0);
      local_7d8 = fVar47 + *(float *)(param_1 + 0x450);
      if (*(char *)((longlong)plVar24 + 0x1539) == '\x04') {
        uVar37 = (**(code **)(*plVar27 + 0x700))(plVar27);
      }
      else {
        uVar37 = *(undefined1 *)(lVar20 + 0x5cc);
      }
      local_428._0_5_ = CONCAT14(uVar37,(undefined4)local_428);
      if (*(code **)(*plVar24 + 0x480) == FUN_1440e9830) {
        uStack_78c = FUN_1440e9830(plVar24);
      }
      else {
        uStack_78c = (**(code **)(*plVar24 + 0x480))(plVar24);
      }
      uStack_778 = FUN_144a7c224(plVar24);
      local_7ac = (undefined4)plVar24[0x2a2];
      uStack_7cc = plVar24[0x29e];
      uStack_7c4 = plVar24[0x29f];
      uStack_7bc = plVar24[0x2a0];
      uStack_7b4 = (undefined4)plVar24[0x2a1];
      uStack_7b0 = *(undefined4 *)((longlong)plVar24 + 0x150c);
      fVar47 = *(float *)(plVar24 + 0x36c);
      if ((fVar47 != 3.4028235e+38) || (NAN(fVar47))) {
        local_794 = '\x01';
        local_798 = fVar47;
      }
      else if (local_794 != '\0') {
        local_794 = '\0';
      }
      cVar13 = *(char *)((longlong)plVar24 + 0x1539);
      if (((char)plVar24[0x359] == '\0') && ((byte)(cVar13 - 1U) < 4)) {
        uVar37 = (**(code **)(plVar24[0x2f] +
                             *(longlong *)(&DAT_14ab9f978 + (ulonglong)(byte)(cVar13 - 1U) * 8)))
                           (plVar1);
        cVar13 = *(char *)((longlong)plVar24 + 0x1539);
      }
      else {
        uVar37 = 0;
      }
      local_790 = CONCAT31(local_790._1_3_,(char)plVar24[0x239]);
      local_7d0 = CONCAT31(CONCAT21(local_7d0._2_2_,uVar37),(byte)(cVar13 - 4U) < 0xfd);
      if ((char)plVar24[0x243] == '\x01') {
        uStack_7cc = uStack_7cc & 0xffffffff00000000;
      }
      if ((char)plVar24[0x36d] == '\x01') {
        uVar37 = 1;
        if (1.0 <= (float)uStack_7e0 - *(float *)((longlong)plVar24 + 0x1b64)) {
          *(undefined1 *)(plVar24 + 0x36d) = 0;
          goto LAB_1437f6fd3;
        }
      }
      else {
LAB_1437f6fd3:
        uVar37 = 0;
      }
      local_420._0_2_ = CONCAT11(uVar37,(undefined1)local_420);
      local_418[4] = *(undefined1 *)((longlong)plVar24 + 0x1734);
      local_418._0_4_ = (int)plVar24[0x2e6];
      plVar27 = plVar24 + 0x2e7;
      plVar26 = (longlong *)(auStack_413 + 3);
      for (lVar20 = 0xb; lVar20 != 0; lVar20 = lVar20 + -1) {
        *plVar26 = *plVar27;
        plVar27 = plVar27 + 1;
        plVar26 = plVar26 + 1;
      }
      local_3b0 = (undefined7 *)CONCAT71(local_3b0._1_7_,(char)plVar24[0x2f3]);
      local_3b8 = (char *)plVar24[0x2f2];
      local_3a8 = plVar24[0x2f4];
      if ((DAT_14c950c29 == 1) && (local_3a8 != 0)) {
        FUN_1456cec3c();
      }
      local_348 = (double)CONCAT71(local_348._1_7_,(char)plVar24[0x300]);
      if ((char)plVar24[0x300] == '\x01') {
        local_380 = (code *)plVar24[0x2f9];
        iStack_3a0 = (int)plVar24[0x2f5];
        uStack_39c = *(undefined4 *)((longlong)plVar24 + 0x17ac);
        local_398 = (undefined4)plVar24[0x2f6];
        uStack_394 = *(undefined4 *)((longlong)plVar24 + 0x17b4);
        uStack_390 = (undefined4)plVar24[0x2f7];
        uStack_38c = *(undefined4 *)((longlong)plVar24 + 0x17bc);
        local_388 = plVar24[0x2f8];
        local_358 = (undefined7 ***)0x0;
        local_350 = *(uint *)(plVar24 + 0x2ff);
        lVar20 = (longlong)(int)local_350;
        if (lVar20 == 0) {
          local_34c = 2;
        }
        else {
          plVar27 = plVar24 + 0x2fa;
          if ((longlong *)plVar24[0x2fe] != (longlong *)0x0) {
            plVar27 = (longlong *)plVar24[0x2fe];
          }
          FUN_144891736(&ppuStack_378,local_350,0);
          _Dst = local_358;
          if (local_358 == (undefined7 ***)0x0) {
            _Dst = &ppuStack_378;
          }
          memcpy(_Dst,plVar27,lVar20 << 4);
        }
      }
      dStack_340 = (double)plVar24[0x301];
      uStack_338 = (double)plVar24[0x302];
      uStack_330 = plVar24[0x303];
      uStack_328 = (longlong *)plVar24[0x304];
      local_320 = plVar24[0x305];
      lStack_318 = plVar24[0x306];
      local_310 = (longlong *)plVar24[0x307];
      local_308 = (longlong *)plVar24[0x308];
      if (local_308 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_308 + 1) = (int)local_308[1] + 1;
        UNLOCK();
      }
      local_300 = CONCAT44(local_300._4_4_,(int)plVar24[0x309]);
      lVar20 = plVar24[0x30a];
      cStack_2f8 = (char)lVar20;
      uStack_2f7 = (undefined5)((ulonglong)lVar20 >> 8);
      uStack_2f2 = (undefined2)((ulonglong)lVar20 >> 0x30);
      uVar34 = 0;
      memcpy(&local_2f0,plVar24 + 0x30b,0xb8);
      local_238 = plVar24[0x322];
      local_230 = plVar24[0x323];
      lStack_228 = plVar24[0x324];
      local_220 = (undefined4)plVar24[0x325];
      local_21c = *(undefined1 *)((longlong)plVar24 + 0x192c);
      local_1f8 = plVar24[0x32a];
      local_218 = plVar24[0x326];
      lStack_210 = plVar24[0x327];
      local_208 = plVar24[0x328];
      lStack_200 = plVar24[0x329];
      local_1f0 = (undefined4)plVar24[0x32b];
      local_1e8 = (undefined4)plVar24[0x32c];
      local_1d8 = (undefined4)plVar24[0x32e];
      local_1e0 = plVar24[0x32d];
      local_1d0 = (undefined4)plVar24[0x32f];
      uStack_1cc = *(undefined4 *)((longlong)plVar24 + 0x197c);
      uStack_1c8 = (undefined4)plVar24[0x330];
      uStack_1c4 = *(undefined4 *)((longlong)plVar24 + 0x1984);
      local_1c0 = (undefined4)plVar24[0x331];
      uStack_1bc = *(undefined4 *)((longlong)plVar24 + 0x198c);
      uStack_1b8 = (undefined4)plVar24[0x332];
      uStack_1b4 = *(undefined4 *)((longlong)plVar24 + 0x1994);
      local_1b0 = (undefined4)plVar24[0x333];
      uStack_1ac = *(undefined4 *)((longlong)plVar24 + 0x199c);
      uStack_1a8 = (undefined4)plVar24[0x334];
      uStack_1a4 = *(undefined4 *)((longlong)plVar24 + 0x19a4);
      local_1a0 = plVar24[0x335];
      plVar27 = (longlong *)plVar24[0x336];
      if (plVar27 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar27 + 1) = (int)plVar27[1] + 1;
        UNLOCK();
      }
      local_190 = (undefined4)plVar24[0x337];
      local_188 = (undefined2)plVar24[0x338];
      local_168 = (char)plVar24[0x33c];
      if (local_168 == '\x01') {
        local_170 = plVar24[0x33b];
        local_180 = (undefined4)plVar24[0x339];
        uStack_17c = *(undefined4 *)((longlong)plVar24 + 0x19cc);
        uStack_178 = (undefined4)plVar24[0x33a];
        uStack_174 = *(undefined4 *)((longlong)plVar24 + 0x19d4);
      }
      local_160 = (undefined1)plVar24[0x33d];
      cVar13 = (char)plVar24[0x34a];
      local_f8 = cVar13;
      if (cVar13 == '\x01') {
        plVar26 = plVar24 + 0x33e;
        plVar32 = local_158;
        for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
          *plVar32 = *plVar26;
          plVar26 = plVar26 + 1;
          plVar32 = plVar32 + 1;
        }
      }
      local_e0 = (undefined4)plVar24[0x34d];
      local_e8 = plVar24[0x34c];
      if ((char)plVar24[0x351] == '\0') {
        bVar12 = *(byte *)(plVar24 + 0x352);
      }
      else {
        local_c8 = plVar24[0x350];
        local_d8 = (undefined4)plVar24[0x34e];
        uStack_d4 = *(undefined4 *)((longlong)plVar24 + 0x1a74);
        uStack_d0 = (undefined4)plVar24[0x34f];
        uStack_cc = *(undefined4 *)((longlong)plVar24 + 0x1a7c);
        bVar12 = *(byte *)(plVar24 + 0x352);
      }
      local_c0 = 0;
      if (cVar13 != '\0') {
        local_f8 = '\0';
      }
      if (local_168 != '\0') {
        local_168 = '\0';
      }
      local_198 = plVar27;
      local_b8 = bVar12;
      if (plVar27 != (longlong *)0x0) {
        LOCK();
        plVar26 = plVar27 + 1;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if ((int)*plVar26 == 0) {
          (**(code **)*plVar27)(plVar27);
          LOCK();
          piVar2 = (int *)((longlong)plVar27 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar27 + 0x10))(plVar27);
          }
        }
      }
      plVar27 = local_308;
      local_920 = plVar35;
      if (local_308 != (longlong *)0x0) {
        LOCK();
        plVar35 = local_308 + 1;
        *(int *)plVar35 = (int)*plVar35 + -1;
        UNLOCK();
        if ((int)*plVar35 == 0) {
          (**(code **)*local_308)(local_308);
          LOCK();
          piVar2 = (int *)((longlong)plVar27 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar27 + 0x10))(plVar27);
          }
        }
      }
      if ((local_348._0_1_ == '\x01') && (local_358 != (undefined7 ***)0x0)) {
        FUN_1400020a8();
      }
      if ((*(byte *)((longlong)plVar24 + 0x5b4) & 0x20) == 0) {
        bVar14 = 0;
        if (*(char *)(param_1 + 0x808) != '\0') {
          bVar14 = bVar12 ^ 1;
        }
      }
      else {
        bVar14 = 1;
      }
      local_420 = CONCAT31(local_420._1_3_,bVar14);
      _Size = (undefined7 **)CONCAT71((int7)((ulonglong)uVar34 >> 8),local_7d0._1_1_);
      FUN_144a75fa0(plVar24,local_418);
      pdVar18 = (double *)local_418;
      pdVar31 = adStack_770;
      for (lVar20 = 0xb; lVar20 != 0; lVar20 = lVar20 + -1) {
        *pdVar31 = *pdVar18;
        pdVar18 = pdVar18 + 1;
        pdVar31 = pdVar31 + 1;
      }
      local_710 = local_3b8._0_1_;
      uStack_718 = local_3c0;
      puVar23 = local_3b0;
      if (DAT_14c950c29 == 1) {
        if (local_3b0 == (undefined7 *)0x0) {
          puVar23 = (undefined7 *)0x0;
        }
        else {
          FUN_1456cec3c();
          puVar23 = local_3b0;
        }
      }
      local_708 = puVar23;
      if ((char)local_350 == '\x01') {
        if ((local_6a8 != '\0') && (local_6b8 != (code **)0x0)) {
          FUN_1400020a8();
        }
        local_6e0 = local_388;
        uStack_6f8 = CONCAT44(uStack_39c,iStack_3a0);
        local_6f0 = CONCAT44(uStack_394,local_398);
        uStack_6e8 = CONCAT44(uStack_38c,uStack_390);
        local_700 = local_3a8;
        if (local_360 == (code **)0x0) {
          local_6c8 = local_370;
          uStack_6c0 = uStack_368;
          local_6d8 = local_380;
          ppuStack_6d0 = ppuStack_378;
        }
        local_6b8 = local_360;
        local_360 = (code **)0x0;
        local_6b0 = local_358;
        local_358 = (undefined7 ***)0x200000000;
        local_6a8 = '\x01';
      }
      else if (local_6a8 != '\0') {
        if (local_6b8 != (code **)0x0) {
          FUN_1400020a8();
        }
        local_6a8 = '\0';
      }
      plVar27 = local_310;
      plVar35 = plStack_668;
      uStack_680 = uStack_328;
      uStack_678 = local_320;
      local_690 = uStack_338;
      uStack_688 = uStack_330;
      local_6a0 = local_348;
      uStack_698 = dStack_340;
      local_670 = lStack_318;
      lStack_318 = 0;
      if (local_310 == plStack_668) {
LAB_1437f73ca:
        plVar27 = local_310;
        local_660 = local_308._0_4_;
        local_658 = local_300;
        if (local_310 != (longlong *)0x0) {
          LOCK();
          plVar35 = local_310 + 1;
          *(int *)plVar35 = (int)*plVar35 + -1;
          UNLOCK();
          if ((int)*plVar35 == 0) {
            (**(code **)*local_310)(local_310);
            LOCK();
            piVar2 = (int *)((longlong)plVar27 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar27 + 0x10))(plVar27);
            }
          }
        }
      }
      else {
        local_310 = (longlong *)0x0;
        plStack_668 = plVar27;
        if (plVar35 != (longlong *)0x0) {
          LOCK();
          plVar27 = plVar35 + 1;
          *(int *)plVar27 = (int)*plVar27 + -1;
          UNLOCK();
          if ((int)*plVar27 == 0) {
            (**(code **)*plVar35)(plVar35);
            LOCK();
            piVar2 = (int *)((longlong)plVar35 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar35 + 0x10))(plVar35);
            }
          }
          goto LAB_1437f73ca;
        }
        local_660 = local_308._0_4_;
        local_658 = local_300;
        plStack_668 = plVar27;
      }
      if (((char)local_350 == '\x01') && (local_360 != (code **)0x0)) {
        FUN_1400020a8();
      }
      adStack_770[5] = 0.0;
      pcVar17 = *(code **)(**(longlong **)(param_1 + 0xcc8) + 0x18);
      if ((pcVar17 == (code *)&LAB_14494a6dc) ||
         ((pcVar17 != (code *)&LAB_1402f53cc && (iVar15 = (*pcVar17)(), iVar15 == 1)))) {
        adStack_770[3] = 0.0;
      }
      iVar15 = *(int *)((longlong)plVar24 + 0x153c);
      *(undefined4 *)((longlong)plVar24 + 0x153c) = 0;
      local_428 = CONCAT44(local_428._4_4_,iVar15);
      if (iVar15 == 2) {
        local_728 = local_728 & 0xffffffff00000000;
        uStack_718 = 0.0078125;
        local_710 = 1;
        local_708 = (undefined7 *)0x0;
        if (local_6a8 == '\x01') {
          if (local_6b8 != (code **)0x0) {
            FUN_1400020a8();
          }
          local_6a8 = '\0';
        }
      }
      if ((char)plVar24[699] == '\0') {
        iStack_3a0 = (uint)iStack_3a0._1_3_ << 8;
      }
      else {
        fVar47 = uStack_7e0._4_4_;
        pfVar3 = (float *)(plVar24 + 0x2ac);
        iStack_3a0 = CONCAT31(iStack_3a0._1_3_,(char)plVar24[699]);
        _local_418 = *(unkbyte9 *)pfVar3;
        local_408 = (undefined7 *)plVar24[0x2ae];
        if ((DAT_14c950c29 == 1) && (local_408 != (undefined7 *)0x0)) {
          FUN_1456cec3c();
        }
        local_3a8 = CONCAT71(local_3a8._1_7_,(char)plVar24[0x2ba]);
        if ((char)plVar24[0x2ba] == '\x01') {
          local_3e0 = plVar24[0x2b3];
          uStack_400 = (undefined4)plVar24[0x2af];
          uStack_3fc = *(undefined4 *)((longlong)plVar24 + 0x157c);
          local_3f8 = (undefined4)plVar24[0x2b0];
          uStack_3f4 = *(undefined4 *)((longlong)plVar24 + 0x1584);
          uStack_3f0 = (undefined4)plVar24[0x2b1];
          uStack_3ec = *(undefined4 *)((longlong)plVar24 + 0x158c);
          uStack_3e8 = (undefined4)plVar24[0x2b2];
          uStack_3e4 = *(undefined4 *)((longlong)plVar24 + 0x1594);
          local_3b8 = (char *)0x0;
          iVar15 = (int)plVar24[0x2b9];
          local_3b0 = (undefined7 *)CONCAT44(local_3b0._4_4_,iVar15);
          if ((longlong)iVar15 == 0) {
            local_3b0 = (undefined7 *)CONCAT44(2,iVar15);
          }
          else {
            local_918 = plVar24 + 0x2b4;
            if ((longlong *)plVar24[0x2b8] != (longlong *)0x0) {
              local_918 = (longlong *)plVar24[0x2b8];
            }
            FUN_144891736(local_3d8,iVar15,0);
            pcVar21 = local_3b8;
            if (local_3b8 == (char *)0x0) {
              pcVar21 = local_3d8;
            }
            _Size = (undefined7 **)((longlong)iVar15 << 4);
            memcpy(pcVar21,local_918,(size_t)_Size);
          }
        }
        fVar48 = *(float *)((longlong)plVar24 + 0x15e4) + fVar47;
        *(float *)((longlong)plVar24 + 0x15e4) = fVar48;
        if (*(float *)(plVar24 + 700) <= fVar48) {
          if ((char)plVar24[699] == '\x01') {
            if ((char)plVar24[0x2ba] == '\x01') {
              if (plVar24[0x2b8] != 0) {
                FUN_1400020a8();
              }
              *(undefined1 *)(plVar24 + 0x2ba) = 0;
            }
            *(undefined1 *)(plVar24 + 699) = 0;
          }
          plVar24[700] = 0;
        }
        else {
          *pfVar3 = fVar47 + *pfVar3;
        }
      }
      if (((byte)iStack_3a0 == 1) && (uStack_778 != 0)) {
        local_710 = (undefined1)uStack_410;
        uStack_718 = _local_418;
        puVar23 = local_408;
        if (DAT_14c950c29 == 1) {
          if (local_408 == (undefined7 *)0x0) {
            puVar23 = (undefined7 *)0x0;
          }
          else {
            FUN_1456cec3c(local_408);
            puVar23 = local_408;
          }
        }
        _Size = (undefined7 **)&local_720;
        local_708 = puVar23;
        if ((char)local_3a8 == '\x01') {
          if ((local_6a8 != '\0') && (local_6b8 != (code **)0x0)) {
            FUN_1400020a8();
          }
          local_6e0 = local_3e0;
          local_6f0 = CONCAT44(uStack_3ec,uStack_3f0);
          uStack_6e8 = CONCAT44(uStack_3e4,uStack_3e8);
          local_700 = CONCAT44(uStack_3fc,uStack_400);
          uStack_6f8 = CONCAT44(uStack_3f4,local_3f8);
          local_6b8 = (code **)0x0;
          lVar20 = (longlong)(int)local_3b0;
          local_6b0 = (undefined7 ***)CONCAT44(local_6b0._4_4_,(int)local_3b0);
          if (lVar20 == 0) {
            local_6b0 = (undefined7 ***)CONCAT44(2,(int)local_3b0);
          }
          else {
            pcVar21 = local_3d8;
            if (local_3b8 != (char *)0x0) {
              pcVar21 = local_3b8;
            }
            FUN_144891736(&local_6d8,(ulonglong)local_3b0 & 0xffffffff,0);
            ppcVar28 = local_6b8;
            if (local_6b8 == (code **)0x0) {
              ppcVar28 = &local_6d8;
            }
            memcpy(ppcVar28,pcVar21,lVar20 << 4);
          }
          local_6a8 = '\x01';
        }
        else if (local_6a8 != '\0') {
          if (local_6b8 != (code **)0x0) {
            FUN_1400020a8();
          }
          local_6a8 = '\0';
        }
        fVar47 = (float)FUN_14180436c(uStack_778,local_708);
        local_728 = CONCAT44(local_728._4_4_,fVar47);
        lVar20 = *(longlong *)(param_1 + 0xcc8);
        if ((1.0 <= ABS(fVar47 - *(float *)(lVar20 + 0x11f0))) ||
           (0.01 < ABS(*(float *)(lVar20 + 0x11f8)))) {
          *(undefined4 *)(lVar20 + 0x11ec) = 0;
          *(undefined4 *)(lVar20 + 0x11f4) = *(undefined4 *)(lVar20 + 0x11e8);
          *(float *)(lVar20 + 0x11f0) = fVar47;
          *(undefined4 *)(lVar20 + 0x11f8) = 0;
        }
      }
      if (((((byte)iStack_3a0 & 1) != 0) && ((char)local_3a8 == '\x01')) &&
         (local_3b8 != (char *)0x0)) {
        FUN_1400020a8();
      }
      uVar49 = uStack_7e0._4_4_;
      if (*(code **)(*plVar24 + 0xc18) == FUN_1448f9cce) {
        if ((((char)plVar24[0x359] == '\0') &&
            (bVar12 = *(char *)((longlong)plVar24 + 0x1539) - 1, bVar12 < 4)) &&
           ((cVar13 = (**(code **)(plVar24[0x2f] +
                                  *(longlong *)(&DAT_14ab9f978 + (ulonglong)bVar12 * 8)))(plVar1),
            cVar13 != '\0' &&
            ((lVar20 = plVar24[0x3e], lVar20 != 0 &&
             (plVar27 = *(longlong **)(lVar20 + 0x428), plVar27 != (longlong *)0x0)))))) {
          lVar19 = *plVar27;
          if (*(code **)(lVar19 + 0xba8) == FUN_144b222b6) {
            if (*(code **)(lVar19 + 3000) == (code *)&LAB_147a0c89e) {
              if ((plVar27[0x15d] == 0) || (*(char *)(plVar27[0x15d] + 0x30) != '\x02')) {
LAB_1437f7567:
                if (*(code **)(lVar19 + 0xbb0) != (code *)&LAB_1400ba9be) {
                  cVar13 = (**(code **)(lVar19 + 0xbb0))(plVar27);
                  goto LAB_1437f8247;
                }
                lVar19 = plVar27[0x15d];
                if ((lVar19 != 0) && (*(char *)(lVar19 + 0x30) == '\x03')) {
                  if (*(longlong *)(lVar19 + 0x358) == 0) {
                    if (0 < *(int *)(lVar19 + 0x368)) goto LAB_1437f825a;
                  }
                  else if (*(int *)(*(longlong *)(lVar19 + 0x358) + 0x1b4) < 1) goto LAB_1437f825a;
                }
                goto LAB_1437f82d2;
              }
            }
            else {
              cVar13 = (**(code **)(lVar19 + 3000))(plVar27);
              if (cVar13 == '\0') {
                lVar19 = *plVar27;
                goto LAB_1437f7567;
              }
            }
          }
          else {
            cVar13 = (**(code **)(lVar19 + 0xba8))(plVar27);
LAB_1437f8247:
            if (cVar13 == '\0') goto LAB_1437f82d2;
          }
LAB_1437f825a:
          if (*(longlong *)(lVar20 + 0x428) != 0) {
            FUN_14021124a(*(longlong *)(lVar20 + 0x428),local_418);
            if (local_418[0] == '\x01') {
              _Size = (undefined7 **)&local_408;
              ppcVar28 = &local_858;
              (**(code **)(*plVar24 + 0xb90))(plVar24,ppcVar28,_Size,uVar49);
            }
            else {
              ppcVar28 = (code **)&DAT_14c846480;
            }
            puVar29 = local_498;
            for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
              *puVar29 = *ppcVar28;
              ppcVar28 = ppcVar28 + 1;
              puVar29 = puVar29 + 1;
            }
            local_438 = '\x01';
          }
LAB_1437f82b7:
          local_7d0._0_2_ = (ushort)(byte)local_7d0;
          uVar37 = (**(code **)(*plVar24 + 0xbe0))(plVar24);
          local_428._0_7_ = CONCAT16(uVar37,(undefined6)local_428);
        }
      }
      else {
        cVar13 = (**(code **)(*plVar24 + 0xc18))(plVar24,local_498);
        if (cVar13 != '\0') goto LAB_1437f82b7;
      }
LAB_1437f82d2:
      if ((local_7d0._1_1_ == '\x01') && ((char)plVar24[0x23e] == '\0')) {
        cVar13 = FUN_141804692(plVar24,local_5d0);
        if (cVar13 == '\0') {
          _Size = (undefined7 **)CONCAT71((int7)((ulonglong)_Size >> 8),1);
          cVar13 = FUN_144903750(param_1,param_1 + 0x390);
          if (cVar13 == '\0') {
            _local_418 = *(undefined1 (*) [16])(param_1 + 0x390);
            if (*(longlong *)(param_1 + 0x398) != 0) {
              LOCK();
              piVar2 = (int *)(*(longlong *)(param_1 + 0x398) + 8);
              *piVar2 = *piVar2 + 1;
              UNLOCK();
            }
            cStack_2f8 = '\x01';
            if (local_4a8 == '\x01') {
              if (local_4b0 == '\x01') {
                local_4b0 = 0xff;
                plVar27 = local_5c8;
              }
              else {
                if (local_4b0 != '\x02') goto LAB_1437f8368;
                local_4b0 = 0xff;
                plVar27 = local_558;
                if (local_4e0 != (longlong *)0x0) {
                  LOCK();
                  plVar35 = local_4e0 + 1;
                  *(int *)plVar35 = (int)*plVar35 + -1;
                  UNLOCK();
                  if ((int)*plVar35 == 0) {
                    (**(code **)*local_4e0)(local_4e0);
                    LOCK();
                    piVar2 = (int *)((longlong)local_4e0 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    plVar27 = local_558;
                    if (*piVar2 == 0) {
                      (**(code **)(*local_4e0 + 0x10))(local_4e0);
                      plVar27 = local_558;
                    }
                  }
                }
              }
              if (plVar27 != (longlong *)0x0) {
                LOCK();
                plVar35 = plVar27 + 1;
                *(int *)plVar35 = (int)*plVar35 + -1;
                UNLOCK();
                if ((int)*plVar35 == 0) {
                  (**(code **)*plVar27)(plVar27);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar27 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar27 + 0x10))(plVar27);
                  }
                }
              }
            }
LAB_1437f8368:
            local_4b0 = -1;
            FUN_140a8a2e2(local_5d0,local_418);
            plVar27 = uStack_328;
            local_4a8 = '\x01';
            if (cStack_2f8 == '\x01') {
              cStack_2f8 = -1;
              plVar27 = uStack_410;
            }
            else {
              if (cStack_2f8 != '\x02') goto LAB_1437f84d9;
              cStack_2f8 = -1;
              if (uStack_328 != (longlong *)0x0) {
                LOCK();
                plVar35 = uStack_328 + 1;
                *(int *)plVar35 = (int)*plVar35 + -1;
                UNLOCK();
                if ((int)*plVar35 == 0) {
                  (**(code **)*uStack_328)(uStack_328);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar27 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar27 + 0x10))(plVar27);
                  }
                }
              }
              plVar27 = (longlong *)CONCAT44(uStack_39c,iStack_3a0);
            }
            if (plVar27 != (longlong *)0x0) {
              LOCK();
              plVar35 = plVar27 + 1;
              *(int *)plVar35 = (int)*plVar35 + -1;
              UNLOCK();
              if ((int)*plVar35 == 0) {
                (**(code **)*plVar27)(plVar27);
                LOCK();
                piVar2 = (int *)((longlong)plVar27 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar27 + 0x10))(plVar27);
                }
              }
            }
          }
        }
      }
      else {
        dVar42 = (double)plVar24[0x25];
        dVar4 = (double)plVar24[0x26];
        lVar20 = plVar24[0x27];
        iVar15 = (**(code **)(**(longlong **)(param_1 + 0xcc8) + 0x18))();
        uVar51 = 0;
        uVar52 = 0;
        uVar49 = 0;
        uVar50 = 0;
        if (iVar15 != 1) {
          uVar49 = (int)lVar20;
          uVar50 = (int)((ulonglong)lVar20 >> 0x20);
        }
        if ((((dVar42 != 0.0) || (NAN(dVar42))) || (dVar4 != 0.0)) || (NAN(dVar4))) {
          dVar45 = atan2(dVar4,dVar42);
          uVar51 = SUB84(dVar45,0);
          uVar52 = (undefined4)((ulonglong)dVar45 >> 0x20);
        }
        dVar4 = dVar42 * dVar42 + dVar4 * dVar4;
        dVar42 = SQRT(dVar4);
        uVar39 = 0;
        uVar40 = 0;
        if (((dVar42 != 0.0) || (NAN(dVar42))) ||
           (((double)CONCAT44(uVar50,uVar49) != 0.0 || (NAN((double)CONCAT44(uVar50,uVar49)))))) {
          dVar42 = atan2((double)CONCAT44(uVar50,uVar49),dVar42);
          uVar39 = SUB84(dVar42,0);
          uVar40 = (undefined4)((ulonglong)dVar42 >> 0x20);
        }
        adStack_770[6] = (double)CONCAT44(uVar40,uVar39) * 57.29577951308232;
        adStack_770[8] = 0.0;
        local_728 = CONCAT44(local_728._4_4_,
                             (float)SQRT((double)CONCAT44(uVar50,uVar49) *
                                         (double)CONCAT44(uVar50,uVar49) + dVar4));
        adStack_770[7] = (double)CONCAT44(uVar52,uVar51) * 57.29577951308232;
      }
LAB_1437f84d9:
      if (*(code **)(*plVar24 + 0xc20) == FUN_14482728a) {
        _Size = (undefined7 **)
                CONCAT71((int7)((ulonglong)_Size >> 8),
                         *(char *)((longlong)plVar24 + 0x1539) == '\x04');
        FUN_1448272b6(plVar24 + 0x75c,local_418);
      }
      else {
        (**(code **)(*plVar24 + 0xc20))(plVar24,local_418);
      }
      plVar35 = local_920;
      pcVar17 = *(code **)(*plVar24 + 0xc28);
      if (pcVar17 == FUN_144af8daa) {
        lVar20 = plVar24[0x39d];
        if ((lVar20 != 0) && (plVar24[0x22] != 0)) {
          if (*(code **)(*(longlong *)(&DAT_00001100 + lVar20) + 0x10) == (code *)&LAB_144944cea) {
            lVar20 = lVar20 + 0x1808;
          }
          else {
            lVar20 = (**(code **)(*(longlong *)(&DAT_00001100 + lVar20) + 0x10))
                               (&DAT_00001100 + lVar20);
          }
          local_8f0 = &local_908;
          local_908 = DAT_14cb72618;
          local_8e8 = &local_900;
          local_900 = (longlong *)0x0;
          ppuStack_8a0 = (undefined7 **)&local_8f0;
          local_8a8 = (code *)&LAB_143cbcae0;
          _Size = ppuStack_8a0;
          if (*(longlong *)(lVar20 + 0x40) != 0) {
            ppcStack_880 = &local_8a8;
            local_8f8 = &local_8e0;
            iStack_8d9._1_3_ = (uint3)&local_888;
            uStack_8d5 = (undefined4)((ulonglong)&local_888 >> 0x18);
            uStack_8d1._0_1_ = (undefined1)((ulonglong)&local_888 >> 0x38);
            local_8e0 = 0x143cbca2e;
            iStack_8d9 = (uint)iStack_8d9._1_3_ << 8;
            _Size = &local_8f8;
            local_858 = FUN_1487df56e;
            local_888 = lVar20;
            local_850 = _Size;
            FUN_1447c5ba2();
            if (local_900 != (longlong *)0x0) {
              pcVar17 = *(code **)(*local_900 + 0x28);
              plVar24 = local_900;
              if (pcVar17 != (code *)&LAB_1447c9426) goto LAB_1437f878a;
              if (*(float *)(local_900 + 0x54) <= 1e-08) goto LAB_1437f8794;
            }
          }
          goto LAB_1437f8654;
        }
LAB_1437f8794:
        local_780._0_2_ = (ushort)(byte)local_780;
        local_650 = (float)adStack_770[4];
        if (local_630 == '\x01') {
          local_630 = '\0';
        }
        if (local_610 == '\x01') {
LAB_1437f9832:
          local_610 = '\0';
LAB_1437f872b:
        }
      }
      else {
LAB_1437f878a:
        cVar13 = (*pcVar17)(plVar24);
        if (cVar13 == '\0') goto LAB_1437f8794;
LAB_1437f8654:
        if (local_3d0 == '\x01') {
          local_780._0_2_ = CONCAT11(1,(byte)local_780);
          local_650 = (float)local_418._0_4_;
          if ((char)local_3f8 == '\x01') {
            local_638 = CONCAT44(uStack_3fc,uStack_400);
            local_648 = (undefined4)uStack_410;
            uStack_644 = uStack_410._4_4_;
            uStack_640 = (undefined4)local_408;
            uStack_63c = local_408._4_4_;
            local_630 = '\x01';
LAB_1437f86f8:
          }
          else if (local_630 == '\x01') {
            local_630 = '\0';
            goto LAB_1437f86f8;
          }
          if (local_3d8[0] != '\x01') goto LAB_1437f869f;
          local_618 = local_3e0;
          local_628 = uStack_3f0;
          uStack_624 = uStack_3ec;
          uStack_620 = uStack_3e8;
          uStack_61c = uStack_3e4;
          local_610 = '\x01';
          goto LAB_1437f872b;
        }
        if ((float)local_728 <= 1.0) goto LAB_1437f8794;
        local_780._0_2_ = (ushort)(byte)local_780;
        local_650 = (float)adStack_770[7];
        if (local_630 == '\x01') {
          local_630 = '\0';
        }
LAB_1437f869f:
        if (local_610 != '\0') goto LAB_1437f9832;
      }
      if ((((*(int *)(param_1 + 0x43c) != 0) &&
           (uVar6 = *(uint *)(param_1 + 0x438), -1 < (int)uVar6)) && ((int)uVar6 < DAT_14c9647dc))
         && (((plVar24 = (longlong *)
                         ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                         (longlong)DAT_14c9647c8[uVar6 >> 0x10]), _Size = DAT_14c9647c8,
              plVar24 != (longlong *)0x0 && ((int)plVar24[2] == *(int *)(param_1 + 0x43c))) &&
             (((*(uint *)(plVar24 + 1) & 0x10200000) == 0 &&
              (plVar24 = (longlong *)*plVar24, plVar24 != (longlong *)0x0)))))) {
        pdVar18 = (double *)&DAT_14c846480;
        if (plVar24[0x39] != 0) {
          pdVar18 = (double *)(plVar24[0x39] + 0x240);
        }
        dVar7 = *pdVar18;
        dVar8 = pdVar18[1];
        dVar9 = pdVar18[2];
        dVar43 = pdVar18[8] * *(double *)(param_1 + 0x420);
        dVar44 = pdVar18[9] * *(double *)(param_1 + 0x428);
        dVar4 = *(double *)(param_1 + 0x430) * pdVar18[10];
        dVar42 = pdVar18[3];
        dVar45 = dVar44 * dVar7 - dVar8 * dVar43;
        dVar46 = dVar4 * dVar8 - dVar9 * dVar44;
        dVar41 = dVar43 * dVar9 - dVar7 * dVar4;
        dVar46 = dVar46 + dVar46;
        dVar41 = dVar41 + dVar41;
        dVar45 = dVar45 + dVar45;
        dVar44 = (dVar9 * dVar46 - dVar7 * dVar45) + pdVar18[3] * dVar41 + dVar44 + pdVar18[5];
        local_408 = (undefined7 *)
                    (dVar45 * dVar42 + dVar4 + (dVar41 * dVar7 - dVar46 * dVar8) + pdVar18[6]);
        uStack_410._0_4_ = SUB84(dVar44,0);
        _local_418 = (dVar45 * dVar8 - dVar41 * dVar9) + dVar42 * dVar46 + dVar43 + pdVar18[4];
        uStack_410._4_4_ = (int)((ulonglong)dVar44 >> 0x20);
        (**(code **)(*plVar24 + 0x328))(plVar24,&uStack_400);
        local_5e8 = CONCAT44(uStack_3f4,local_3f8);
        uStack_5e0 = CONCAT44(uStack_3ec,uStack_3f0);
        local_5f8 = local_408;
        uStack_5f0 = CONCAT44(uStack_3fc,uStack_400);
        local_608 = local_418._0_4_;
        uStack_604 = stack0xfffffffffffffbec;
        uStack_600 = (undefined4)uStack_410;
        uStack_5fc = uStack_410._4_4_;
        local_5d8 = '\x01';
      }
      uVar49 = SUB84(_Size,0);
      local_428 = CONCAT17(*(undefined1 *)(param_1 + 0xcd1),(undefined7)local_428);
    }
    LOCK();
    plVar24 = plVar35 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*plVar35)(plVar35);
      LOCK();
      piVar2 = (int *)((longlong)plVar35 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
      }
    }
  }
  iVar15 = 1;
  if ((bVar5 & 0x20) == 0) {
    iVar15 = local_420;
  }
  plVar24 = (longlong *)(param_1 + 0x440);
  local_420 = CONCAT31(local_420._1_3_,(char)iVar15);
  plVar27 = *(longlong **)(param_1 + 0xcc8);
  if (plVar27 == (longlong *)0x0) {
LAB_1437f89e0:
    if (*(char *)(param_1 + 0x948) == '\x01') {
      plVar27 = *(longlong **)(param_1 + 0x938);
      if (plVar27 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar27 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar27 + 0x10))();
        }
      }
      plVar27 = *(longlong **)(param_1 + 0x918);
      if (plVar27 != (longlong *)0x0) {
        LOCK();
        plVar35 = plVar27 + 1;
        *(int *)plVar35 = (int)*plVar35 + -1;
        UNLOCK();
        if ((int)*plVar35 == 0) {
          (**(code **)*plVar27)(plVar27);
          LOCK();
          piVar2 = (int *)((longlong)plVar27 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar27 + 0x10))(plVar27);
          }
        }
      }
      if (*(char *)(param_1 + 0x8d8) == '\x01') {
        if (*(longlong *)(param_1 + 0x8c8) != 0) {
          FUN_1400020a8();
        }
        *(undefined1 *)(param_1 + 0x8d8) = 0;
      }
      *(undefined1 *)(param_1 + 0x948) = 0;
    }
  }
  else {
    if (1 < *(int *)(param_1 + 0x260) - 1U) {
      if (*(int *)(param_1 + 0x260) == 3) goto LAB_1437f8892;
      goto LAB_1437f89e0;
    }
    if ((*(int *)(param_1 + 600) == -1) || (*(int *)(param_1 + 0x25c) == -1)) goto LAB_1437f89e0;
LAB_1437f8892:
    dVar42 = *(double *)(param_1 + 0x268);
    if ((((dVar42 <= -DAT_14cb1c738) ||
         (((DAT_14cb1c738 <= dVar42 || (*(double *)(param_1 + 0x270) <= -DAT_14cb1c740)) ||
          (DAT_14cb1c740 <= *(double *)(param_1 + 0x270))))) ||
        (((*(double *)(param_1 + 0x278) <= -DAT_14cb1c748 ||
          (DAT_14cb1c748 <= *(double *)(param_1 + 0x278))) ||
         (iVar15 = _finite(dVar42), iVar15 == 0)))) ||
       ((iVar15 = _finite(*(double *)(param_1 + 0x270)), iVar15 == 0 ||
        (iVar15 = _finite(*(double *)(param_1 + 0x278)), iVar15 == 0)))) goto LAB_1437f89e0;
    pcVar17 = *(code **)(*plVar27 + 0x18);
    iVar15 = 1;
    if ((pcVar17 != (code *)&LAB_14494a6dc) && (iVar15 = 2, pcVar17 != (code *)&LAB_1402f53cc)) {
      iVar15 = (*pcVar17)(plVar27);
    }
    if ((iVar15 == 3) || (iVar15 != *(int *)(param_1 + 0x260))) goto LAB_1437f89e0;
    dVar42 = *(double *)(param_1 + 0xf8);
    dVar4 = *(double *)(param_1 + 0x100);
    if (iVar15 == 2) {
      fVar47 = *(float *)(param_1 + 0x144);
      dVar41 = *(double *)(param_1 + 0x108) - (double)fVar47;
      dVar45 = (local_690 - (double)local_658._4_4_) - dVar41;
      if (1.0 <= (float)SQRT(dVar45 * dVar45 +
                             (uStack_698 - dVar4) * (uStack_698 - dVar4) +
                             (local_6a0 - dVar42) * (local_6a0 - dVar42))) {
        dVar42 = dVar42 - *(double *)(param_1 + 0x268);
        dVar4 = dVar4 - *(double *)(param_1 + 0x270);
        dVar41 = dVar41 - *(double *)(param_1 + 0x278);
        dVar42 = dVar41 * dVar41 + dVar4 * dVar4 + dVar42 * dVar42;
        fVar48 = *(float *)(param_1 + 0x140);
        if (*(float *)(param_1 + 0x140) <= fVar47) {
          fVar48 = fVar47;
        }
        goto LAB_1437f8fac;
      }
      goto LAB_1437f89e0;
    }
    if ((float)SQRT((uStack_698 - dVar4) * (uStack_698 - dVar4) +
                    (local_6a0 - dVar42) * (local_6a0 - dVar42)) < 1.0) goto LAB_1437f89e0;
    dVar42 = dVar42 - *(double *)(param_1 + 0x268);
    dVar4 = dVar4 - *(double *)(param_1 + 0x270);
    dVar42 = dVar4 * dVar4 + dVar42 * dVar42;
    fVar48 = *(float *)(param_1 + 0x140);
LAB_1437f8fac:
    if (fVar48 <= (float)SQRT(dVar42)) goto LAB_1437f89e0;
    local_350 = local_350 & 0xffffff00;
    local_348 = DAT_14cb1c738;
    dStack_340 = DAT_14cb1c740;
    uStack_338 = DAT_14cb1c748;
    uStack_330 = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
    uStack_328 = (longlong *)CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
    local_320 = DAT_14cb1c870;
    lStack_318 = 0;
    local_310 = (longlong *)0x0;
    local_308 = (longlong *)CONCAT44(local_308._4_4_,0xffffffff);
    local_300 = 0;
    cStack_2f8 = 0;
    uStack_2f7 = 0;
    uStack_2f2 = 0;
    local_2f0 = 0;
    uStack_2ea = 0;
    local_2e8 = 0;
    local_2e4 = 0;
    uStack_2e3 = 0;
    puVar29 = (undefined8 *)(param_1 + 0x28);
    puVar33 = (undefined8 *)local_418;
    for (lVar20 = 0xb; lVar20 != 0; lVar20 = lVar20 + -1) {
      *puVar33 = *puVar29;
      puVar29 = puVar29 + 1;
      puVar33 = puVar33 + 1;
    }
    local_3b8 = (char *)CONCAT71(local_3b8._1_7_,*(undefined1 *)(param_1 + 0x88));
    local_3c0 = *(double *)(param_1 + 0x80);
    puVar23 = *(undefined7 **)(param_1 + 0x90);
    if (DAT_14c950c29 == 1) {
      if (puVar23 == (undefined7 *)0x0) {
        puVar23 = (undefined7 *)0x0;
      }
      else {
        FUN_1456cec3c();
        puVar23 = *(undefined7 **)(param_1 + 0x90);
      }
    }
    local_3b0 = puVar23;
    if (((double *)(param_1 + 0x80) != &local_3c0) && (*(char *)(param_1 + 0xf0) == '\x01')) {
      local_388 = *(longlong *)(param_1 + 0xb8);
      local_398 = *(undefined4 *)(param_1 + 0xa8);
      uStack_394 = *(undefined4 *)(param_1 + 0xac);
      uStack_390 = *(undefined4 *)(param_1 + 0xb0);
      uStack_38c = *(undefined4 *)(param_1 + 0xb4);
      local_3a8 = *(longlong *)(param_1 + 0x98);
      iStack_3a0 = *(int *)(param_1 + 0xa0);
      uStack_39c = *(undefined4 *)(param_1 + 0xa4);
      local_360 = (code **)0x0;
      iVar15 = *(int *)(param_1 + 0xe8);
      local_358 = (undefined7 ***)CONCAT44(local_358._4_4_,iVar15);
      if ((longlong)iVar15 == 0) {
        local_358 = (undefined7 ***)CONCAT44(2,iVar15);
      }
      else {
        pvVar22 = (void *)(param_1 + 0xc0);
        if (*(void **)(param_1 + 0xe0) != (void *)0x0) {
          pvVar22 = *(void **)(param_1 + 0xe0);
        }
        FUN_144891736(&local_380,iVar15,0);
        ppcVar28 = local_360;
        if (local_360 == (code **)0x0) {
          ppcVar28 = &local_380;
        }
        _Size_00 = (longlong)iVar15 << 4;
        memcpy(ppcVar28,pvVar22,_Size_00);
        uVar49 = (undefined4)_Size_00;
      }
      local_350 = CONCAT31(local_350._1_3_,1);
    }
    plVar27 = local_310;
    uStack_328 = *(longlong **)(param_1 + 0x118);
    local_320 = *(longlong *)(param_1 + 0x120);
    uStack_338 = *(double *)(param_1 + 0x108);
    uStack_330 = *(longlong *)(param_1 + 0x110);
    local_348 = *(double *)(param_1 + 0xf8);
    dStack_340 = *(double *)(param_1 + 0x100);
    lStack_318 = *(undefined8 *)(param_1 + 0x128);
    local_310 = *(longlong **)(param_1 + 0x130);
    if (local_310 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_310 + 8) = *(int *)((longlong)local_310 + 8) + 1;
      UNLOCK();
    }
    if (plVar27 != (longlong *)0x0) {
      LOCK();
      plVar35 = plVar27 + 1;
      *(int *)plVar35 = (int)*plVar35 + -1;
      UNLOCK();
      if ((int)*plVar35 == 0) {
        (**(code **)*plVar27)(plVar27);
        LOCK();
        piVar2 = (int *)((longlong)plVar27 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
        }
      }
    }
    local_308 = (longlong *)CONCAT44(local_308._4_4_,*(undefined4 *)(param_1 + 0x138));
    local_300 = *(ulonglong *)(param_1 + 0x140);
    uVar34 = *(undefined8 *)(param_1 + 0x480);
    lVar20 = *(longlong *)(param_1 + 0x488);
    if (lVar20 != 0) {
      LOCK();
      *(int *)(lVar20 + 0xc) = *(int *)(lVar20 + 0xc) + 1;
      UNLOCK();
    }
    plVar27 = (longlong *)CONCAT26(uStack_2ea,local_2f0);
    cStack_2f8 = (char)uVar34;
    uStack_2f7 = (undefined5)((ulonglong)uVar34 >> 8);
    uStack_2f2 = (undefined2)((ulonglong)uVar34 >> 0x30);
    local_2f0 = (undefined6)lVar20;
    uStack_2ea = (undefined2)((ulonglong)lVar20 >> 0x30);
    if (plVar27 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar27 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar27 + 0x10))();
      }
    }
    local_2e8 = *(undefined4 *)(param_1 + 0x450);
    local_2e4 = *(undefined1 *)(param_1 + 0x458);
    uStack_2e3 = *(undefined1 *)(param_1 + 0x805);
    ppcVar28 = &local_858;
    puVar29 = (undefined8 *)local_418;
    ppcVar30 = ppcVar28;
    for (lVar20 = 0xb; puVar23 = local_3b0, lVar20 != 0; lVar20 = lVar20 + -1) {
      *ppcVar30 = (code *)*puVar29;
      puVar29 = puVar29 + 1;
      ppcVar30 = ppcVar30 + 1;
    }
    local_7f8 = local_3b8._0_1_;
    local_800 = local_3c0;
    if ((local_3b0 != (undefined7 *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(local_3b0);
    }
    uVar10 = local_300;
    plVar27 = local_310;
    lVar20 = lStack_318;
    ppcVar30 = local_360;
    cVar13 = (char)local_350;
    if ((char)local_350 == '\x01') {
      local_868 = local_388;
      local_888 = local_3a8;
      ppcStack_880 = (code **)CONCAT44(uStack_39c,iStack_3a0);
      local_878 = CONCAT44(uStack_394,local_398);
      uStack_870 = CONCAT44(uStack_38c,uStack_390);
      if (local_360 == (code **)0x0) {
        local_898 = local_370;
        uStack_890 = uStack_368;
        local_8a8 = local_380;
        ppuStack_8a0 = ppuStack_378;
      }
      local_360 = (code **)0x0;
      param_4 = (undefined4)local_358;
      uVar49 = local_358._4_4_;
      local_358 = (undefined7 ***)0x200000000;
      ppcVar28 = ppcVar30;
    }
    local_8b9 = (undefined4)uStack_328;
    uStack_8b5 = uStack_328._4_4_;
    uStack_8b1 = (undefined4)local_320;
    uStack_8ad = local_320._4_4_;
    local_8c9 = (undefined4)uStack_338;
    uStack_8c5 = uStack_338._4_4_;
    uStack_8c1 = (undefined4)uStack_330;
    uStack_8bd = uStack_330._4_4_;
    iStack_8d9 = SUB84(local_348,0);
    uStack_8d5 = (undefined4)((ulonglong)local_348 >> 0x20);
    uStack_8d1 = SUB84(dStack_340,0);
    uStack_8cd = (undefined4)((ulonglong)dStack_340 >> 0x20);
    lStack_318 = 0;
    local_310 = (longlong *)0x0;
    uVar50 = local_308._0_4_;
    local_920 = (longlong *)CONCAT26(uStack_2f2,CONCAT51(uStack_2f7,cStack_2f8));
    local_918 = (longlong *)CONCAT26(uStack_2ea,local_2f0);
    cStack_2f8 = '\0';
    uStack_2f7 = 0;
    uStack_2f2 = 0;
    local_2f0 = 0;
    uStack_2ea = 0;
    local_8f0 = (undefined8 *)
                CONCAT44(CONCAT22(local_8f0._6_2_,CONCAT11(uStack_2e3,local_2e4)),local_2e8);
    if (((char)local_350 != '\0') && (local_360 != (code **)0x0)) {
      local_938 = (longlong)plVar27;
      local_93c = param_4;
      local_930 = ppcVar28;
      FUN_1400020a8();
      ppcVar28 = local_930;
      plVar27 = (longlong *)local_938;
      param_4 = local_93c;
    }
    if (*(char *)(param_1 + 0x948) == '\x01') {
      local_910 = lVar20;
      plVar35 = *(longlong **)(param_1 + 0x938);
      local_93c = param_4;
      local_938 = (longlong)plVar27;
      local_930 = ppcVar28;
      local_924 = uVar49;
      if (plVar35 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar35 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar35 + 0x10))();
        }
      }
      plVar27 = *(longlong **)(param_1 + 0x918);
      if (plVar27 != (longlong *)0x0) {
        LOCK();
        plVar35 = plVar27 + 1;
        *(int *)plVar35 = (int)*plVar35 + -1;
        UNLOCK();
        if ((int)*plVar35 == 0) {
          (**(code **)*plVar27)(plVar27);
          LOCK();
          piVar2 = (int *)((longlong)plVar27 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar27 + 0x10))(plVar27);
          }
        }
      }
      ppcVar28 = local_930;
      lVar20 = local_910;
      plVar27 = (longlong *)local_938;
      param_4 = local_93c;
      uVar49 = local_924;
      if (*(char *)(param_1 + 0x8d8) == '\x01') {
        if (*(longlong *)(param_1 + 0x8c8) != 0) {
          FUN_1400020a8();
        }
        *(undefined1 *)(param_1 + 0x8d8) = 0;
        ppcVar28 = local_930;
        lVar20 = local_910;
        plVar27 = (longlong *)local_938;
        param_4 = local_93c;
        uVar49 = local_924;
      }
    }
    ppcVar30 = &local_858;
    puVar29 = (undefined8 *)(param_1 + 0x810);
    for (lVar19 = 0xb; lVar19 != 0; lVar19 = lVar19 + -1) {
      *puVar29 = *ppcVar30;
      ppcVar30 = ppcVar30 + 1;
      puVar29 = puVar29 + 1;
    }
    *(undefined1 *)(param_1 + 0x870) = local_7f8;
    *(double *)(param_1 + 0x868) = local_800;
    *(undefined7 **)(param_1 + 0x878) = puVar23;
    if ((puVar23 != (undefined7 *)0x0 & DAT_14c950c29) == 1) {
      local_938 = (longlong)plVar27;
      local_930 = ppcVar28;
      FUN_1456cec3c(puVar23);
      ppcVar28 = local_930;
      plVar27 = (longlong *)local_938;
    }
    *(char *)(param_1 + 0x8d8) = cVar13;
    if (cVar13 != '\0') {
      *(longlong *)(param_1 + 0x8a0) = local_868;
      *(undefined8 *)(param_1 + 0x890) = local_878;
      *(undefined8 *)(param_1 + 0x898) = uStack_870;
      *(longlong *)(param_1 + 0x880) = local_888;
      *(code ***)(param_1 + 0x888) = ppcStack_880;
      if (ppcVar28 == (code **)0x0) {
        *(undefined8 *)(param_1 + 0x8b8) = local_898;
        *(undefined8 *)(param_1 + 0x8c0) = uStack_890;
        *(code **)(param_1 + 0x8a8) = local_8a8;
        *(undefined7 ***)(param_1 + 0x8b0) = ppuStack_8a0;
      }
      *(code ***)(param_1 + 0x8c8) = ppcVar28;
      *(undefined4 *)(param_1 + 0x8d0) = param_4;
      *(undefined4 *)(param_1 + 0x8d4) = uVar49;
      ppcVar28 = (code **)0x0;
    }
    *(undefined4 *)(param_1 + 0x900) = local_8b9;
    *(undefined4 *)(param_1 + 0x904) = uStack_8b5;
    *(undefined4 *)(param_1 + 0x908) = uStack_8b1;
    *(undefined4 *)(param_1 + 0x90c) = uStack_8ad;
    *(undefined4 *)(param_1 + 0x8f0) = local_8c9;
    *(undefined4 *)(param_1 + 0x8f4) = uStack_8c5;
    *(undefined4 *)(param_1 + 0x8f8) = uStack_8c1;
    *(undefined4 *)(param_1 + 0x8fc) = uStack_8bd;
    *(int *)(param_1 + 0x8e0) = iStack_8d9;
    *(undefined4 *)(param_1 + 0x8e4) = uStack_8d5;
    *(undefined4 *)(param_1 + 0x8e8) = uStack_8d1;
    *(undefined4 *)(param_1 + 0x8ec) = uStack_8cd;
    *(longlong *)(param_1 + 0x910) = lVar20;
    *(longlong **)(param_1 + 0x918) = plVar27;
    *(undefined4 *)(param_1 + 0x920) = uVar50;
    *(ulonglong *)(param_1 + 0x928) = uVar10;
    *(longlong **)(param_1 + 0x930) = local_920;
    *(longlong **)(param_1 + 0x938) = local_918;
    *(undefined4 *)(param_1 + 0x940) = (undefined4)local_8f0;
    *(undefined2 *)(param_1 + 0x944) = local_8f0._4_2_;
    *(undefined1 *)(param_1 + 0x948) = 1;
    if (ppcVar28 != (code **)0x0 && cVar13 == '\x01') {
      FUN_1400020a8(ppcVar28);
    }
  }
  *(float *)(param_1 + 0x450) = local_7d8;
  *plVar24 = local_7e8;
  *(longlong **)(param_1 + 0x448) = uStack_7e0;
  *(ulonglong *)(param_1 + 0x478) = CONCAT44(local_7ac,uStack_7b0);
  *(undefined4 *)(param_1 + 0x468) = uStack_7c4._4_4_;
  *(undefined4 *)(param_1 + 0x46c) = (undefined4)uStack_7bc;
  *(undefined4 *)(param_1 + 0x470) = uStack_7bc._4_4_;
  *(undefined4 *)(param_1 + 0x474) = uStack_7b4;
  *(uint *)(param_1 + 0x458) = local_7d0;
  *(undefined4 *)(param_1 + 0x45c) = (undefined4)uStack_7cc;
  *(undefined4 *)(param_1 + 0x460) = uStack_7cc._4_4_;
  *(undefined4 *)(param_1 + 0x464) = (undefined4)uStack_7c4;
  if (lStack_7a0 != 0) {
    LOCK();
    *(int *)(lStack_7a0 + 0xc) = *(int *)(lStack_7a0 + 0xc) + 1;
    UNLOCK();
  }
  plVar27 = *(longlong **)(param_1 + 0x488);
  *(undefined8 *)(param_1 + 0x480) = local_7a8;
  *(longlong *)(param_1 + 0x488) = lStack_7a0;
  if (plVar27 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar27 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar27 + 0x10))();
    }
  }
  if (&local_7e8 != plVar24) {
    if (local_794 == '\x01') {
      *(float *)(param_1 + 0x490) = local_798;
      uVar37 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x494) != '\x01') goto LAB_1437f8a98;
      uVar37 = 0;
    }
    *(undefined1 *)(param_1 + 0x494) = uVar37;
  }
LAB_1437f8a98:
  *(undefined4 *)(param_1 + 0x4a8) = local_780;
  *(undefined4 *)(param_1 + 0x4ac) = uStack_77c;
  *(undefined4 *)(param_1 + 0x4b0) = (undefined4)uStack_778;
  *(undefined4 *)(param_1 + 0x4b4) = uStack_778._4_4_;
  *(uint *)(param_1 + 0x498) = local_790;
  *(undefined4 *)(param_1 + 0x49c) = uStack_78c;
  *(undefined4 *)(param_1 + 0x4a0) = (undefined4)uStack_788;
  *(undefined4 *)(param_1 + 0x4a4) = uStack_788._4_4_;
  pdVar18 = adStack_770;
  pdVar31 = (double *)(param_1 + 0x4b8);
  for (lVar20 = 0xb; lVar20 != 0; lVar20 = lVar20 + -1) {
    *pdVar31 = *pdVar18;
    pdVar18 = pdVar18 + 1;
    pdVar31 = pdVar31 + 1;
  }
  *(undefined1 *)(param_1 + 0x518) = local_710;
  *(double *)(param_1 + 0x510) = uStack_718;
  puVar23 = local_708;
  if (DAT_14c950c29 == 1) {
    if (local_708 == (undefined7 *)0x0) {
      puVar23 = (undefined7 *)0x0;
    }
    else {
      FUN_1456cec3c();
      puVar23 = local_708;
    }
  }
  *(undefined7 **)(param_1 + 0x520) = puVar23;
  if (&local_7e8 != plVar24) {
    if (local_6a8 == '\x01') {
      if ((*(char *)(param_1 + 0x580) != '\0') && (*(longlong *)(param_1 + 0x570) != 0)) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x548) = local_6e0;
      *(undefined4 *)(param_1 + 0x538) = (undefined4)local_6f0;
      *(undefined4 *)(param_1 + 0x53c) = local_6f0._4_4_;
      *(undefined4 *)(param_1 + 0x540) = (undefined4)uStack_6e8;
      *(undefined4 *)(param_1 + 0x544) = uStack_6e8._4_4_;
      *(undefined4 *)(param_1 + 0x528) = (undefined4)local_700;
      *(undefined4 *)(param_1 + 0x52c) = local_700._4_4_;
      *(undefined4 *)(param_1 + 0x530) = (undefined4)uStack_6f8;
      *(undefined4 *)(param_1 + 0x534) = uStack_6f8._4_4_;
      *(undefined8 *)(param_1 + 0x570) = 0;
      lVar20 = (longlong)(int)local_6b0;
      *(int *)(param_1 + 0x578) = (int)local_6b0;
      if (lVar20 == 0) {
        *(undefined4 *)(param_1 + 0x57c) = 2;
      }
      else {
        ppcVar28 = &local_6d8;
        if (local_6b8 != (code **)0x0) {
          ppcVar28 = local_6b8;
        }
        FUN_144891736((void *)(param_1 + 0x550),(ulonglong)local_6b0 & 0xffffffff,0);
        pvVar22 = *(void **)(param_1 + 0x570);
        if (*(void **)(param_1 + 0x570) == (void *)0x0) {
          pvVar22 = (void *)(param_1 + 0x550);
        }
        memcpy(pvVar22,ppcVar28,lVar20 << 4);
      }
      uVar37 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x580) == '\0') goto LAB_1437f8b15;
      if (*(longlong *)(param_1 + 0x570) != 0) {
        FUN_1400020a8();
      }
      uVar37 = 0;
    }
    *(undefined1 *)(param_1 + 0x580) = uVar37;
  }
LAB_1437f8b15:
  *(undefined4 *)(param_1 + 0x5a8) = (undefined4)uStack_680;
  *(undefined4 *)(param_1 + 0x5ac) = uStack_680._4_4_;
  *(undefined4 *)(param_1 + 0x5b0) = (undefined4)uStack_678;
  *(undefined4 *)(param_1 + 0x5b4) = uStack_678._4_4_;
  *(undefined4 *)(param_1 + 0x598) = (undefined4)local_690;
  *(undefined4 *)(param_1 + 0x59c) = local_690._4_4_;
  *(undefined4 *)(param_1 + 0x5a0) = (undefined4)uStack_688;
  *(undefined4 *)(param_1 + 0x5a4) = uStack_688._4_4_;
  *(undefined4 *)(param_1 + 0x588) = (undefined4)local_6a0;
  *(undefined4 *)(param_1 + 0x58c) = local_6a0._4_4_;
  *(undefined4 *)(param_1 + 0x590) = (undefined4)uStack_698;
  *(undefined4 *)(param_1 + 0x594) = uStack_698._4_4_;
  if (plStack_668 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_668 + 1) = (int)plStack_668[1] + 1;
    UNLOCK();
  }
  plVar27 = *(longlong **)(param_1 + 0x5c0);
  *(longlong *)(param_1 + 0x5b8) = local_670;
  *(longlong **)(param_1 + 0x5c0) = plStack_668;
  if (plVar27 != (longlong *)0x0) {
    LOCK();
    plVar35 = plVar27 + 1;
    *(int *)plVar35 = (int)*plVar35 + -1;
    UNLOCK();
    if ((int)*plVar35 == 0) {
      (**(code **)*plVar27)(plVar27);
      LOCK();
      piVar2 = (int *)((longlong)plVar27 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x5c8) = local_660;
  *(ulonglong *)(param_1 + 0x5d0) = local_658;
  *(float *)(param_1 + 0x5d8) = local_650;
  if (&local_7e8 == plVar24) goto LAB_1437f8e20;
  if (local_630 == '\x01') {
    *(undefined8 *)(param_1 + 0x5f0) = local_638;
    *(undefined4 *)(param_1 + 0x5e0) = local_648;
    *(undefined4 *)(param_1 + 0x5e4) = uStack_644;
    *(undefined4 *)(param_1 + 0x5e8) = uStack_640;
    *(undefined4 *)(param_1 + 0x5ec) = uStack_63c;
    uVar37 = 1;
LAB_1437f8ccb:
    *(undefined1 *)(param_1 + 0x5f8) = uVar37;
  }
  else if (*(char *)(param_1 + 0x5f8) == '\x01') {
    uVar37 = 0;
    goto LAB_1437f8ccb;
  }
  if (local_610 == '\x01') {
    *(longlong *)(param_1 + 0x610) = local_618;
    *(undefined4 *)(param_1 + 0x600) = local_628;
    *(undefined4 *)(param_1 + 0x604) = uStack_624;
    *(undefined4 *)(param_1 + 0x608) = uStack_620;
    *(undefined4 *)(param_1 + 0x60c) = uStack_61c;
    *(undefined1 *)(param_1 + 0x618) = 1;
  }
  else if (*(char *)(param_1 + 0x618) == '\x01') {
    *(undefined1 *)(param_1 + 0x618) = 0;
  }
  if (local_5d8 == '\x01') {
    *(undefined8 *)(param_1 + 0x640) = local_5e8;
    *(undefined8 *)(param_1 + 0x648) = uStack_5e0;
    *(undefined7 **)(param_1 + 0x630) = local_5f8;
    *(undefined8 *)(param_1 + 0x638) = uStack_5f0;
    *(undefined4 *)(param_1 + 0x620) = local_608;
    *(undefined4 *)(param_1 + 0x624) = uStack_604;
    *(undefined4 *)(param_1 + 0x628) = uStack_600;
    *(undefined4 *)(param_1 + 0x62c) = uStack_5fc;
    *(undefined1 *)(param_1 + 0x650) = 1;
  }
  else if (*(char *)(param_1 + 0x650) == '\x01') {
    *(undefined1 *)(param_1 + 0x650) = 0;
  }
  if (local_4a8 == '\x01') {
    if (*(char *)(param_1 + 0x780) != '\0') {
      if (*(char *)(param_1 + 0x778) == '\x01') {
        *(undefined1 *)(param_1 + 0x778) = 0xff;
        plVar24 = *(longlong **)(param_1 + 0x660);
      }
      else {
        if (*(char *)(param_1 + 0x778) != '\x02') goto LAB_1437f8deb;
        *(undefined1 *)(param_1 + 0x778) = 0xff;
        plVar24 = *(longlong **)(param_1 + 0x748);
        if (plVar24 != (longlong *)0x0) {
          LOCK();
          plVar27 = plVar24 + 1;
          *(int *)plVar27 = (int)*plVar27 + -1;
          UNLOCK();
          if ((int)*plVar27 == 0) {
            (**(code **)*plVar24)(plVar24);
            LOCK();
            piVar2 = (int *)((longlong)plVar24 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar24 + 0x10))(plVar24);
            }
          }
        }
        plVar24 = *(longlong **)(param_1 + 0x6d0);
      }
      if (plVar24 != (longlong *)0x0) {
        LOCK();
        plVar27 = plVar24 + 1;
        *(int *)plVar27 = (int)*plVar27 + -1;
        UNLOCK();
        if ((int)*plVar27 == 0) {
          (**(code **)*plVar24)(plVar24);
          LOCK();
          piVar2 = (int *)((longlong)plVar24 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
          }
        }
      }
    }
LAB_1437f8deb:
    *(undefined1 *)(param_1 + 0x778) = 0xff;
    FUN_140a8a2e2(param_1 + 0x658,local_5d0);
    uVar37 = 1;
    goto LAB_1437f8dff;
  }
  if (*(char *)(param_1 + 0x780) == '\0') goto LAB_1437f8e05;
  switch(*(undefined1 *)(param_1 + 0x778)) {
  case 0:
  case 3:
    *(undefined1 *)(param_1 + 0x778) = 0xff;
    break;
  case 1:
    *(undefined1 *)(param_1 + 0x778) = 0xff;
    plVar24 = *(longlong **)(param_1 + 0x660);
    goto LAB_1437f8c43;
  case 2:
    *(undefined1 *)(param_1 + 0x778) = 0xff;
    plVar24 = *(longlong **)(param_1 + 0x748);
    if (plVar24 != (longlong *)0x0) {
      LOCK();
      plVar27 = plVar24 + 1;
      *(int *)plVar27 = (int)*plVar27 + -1;
      UNLOCK();
      if ((int)*plVar27 == 0) {
        (**(code **)*plVar24)(plVar24);
        LOCK();
        piVar2 = (int *)((longlong)plVar24 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
        }
      }
    }
    plVar24 = *(longlong **)(param_1 + 0x6d0);
LAB_1437f8c43:
    if (plVar24 != (longlong *)0x0) {
      LOCK();
      plVar27 = plVar24 + 1;
      *(int *)plVar27 = (int)*plVar27 + -1;
      UNLOCK();
      if ((int)*plVar27 == 0) {
        (**(code **)*plVar24)(plVar24);
        LOCK();
        piVar2 = (int *)((longlong)plVar24 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
        }
      }
    }
  }
  uVar37 = 0;
LAB_1437f8dff:
  *(undefined1 *)(param_1 + 0x780) = uVar37;
LAB_1437f8e05:
  if (local_438 == '\x01') {
    puVar29 = local_498;
    puVar33 = (undefined8 *)(param_1 + 0x790);
    for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
      *puVar33 = *puVar29;
      puVar29 = puVar29 + 1;
      puVar33 = puVar33 + 1;
    }
    uVar37 = 1;
LAB_1437f8f79:
    *(undefined1 *)(param_1 + 0x7f0) = uVar37;
  }
  else if (*(char *)(param_1 + 0x7f0) == '\x01') {
    uVar37 = 0;
    goto LAB_1437f8f79;
  }
LAB_1437f8e20:
  *(undefined2 *)(param_1 + 0x808) = (undefined2)local_420;
  *(ulonglong *)(param_1 + 0x800) = local_428;
  FUN_144942c9a();
LAB_1437f8e49:
  if ((local_a0 ^ (ulonglong)auStack_9b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437f9c7a FUN_1437f9c7a body=91 status=ok
// SIG undefined FUN_1437f9c7a(void)

void FUN_1437f9c7a(void)

{
  if (DAT_14cb1c838 != 0) {
    if (DAT_14cb1c830 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb1c830)(DAT_14cb1c830,0);
    FUN_1446efa72(&DAT_14cb1c830,0,0,0x10);
    DAT_14cb1c838 = 0;
  }
  if (DAT_14cb1c830 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1437f9cd6 FUN_1437f9cd6 body=65 status=ok
// SIG undefined FUN_1437f9cd6(void)

undefined8 * FUN_1437f9cd6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab9f130;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f9d18 FUN_1437f9d18 body=65 status=ok
// SIG undefined FUN_1437f9d18(void)

undefined8 * FUN_1437f9d18(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab9f130;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f9d5a FUN_1437f9d5a body=65 status=ok
// SIG undefined FUN_1437f9d5a(void)

undefined8 * FUN_1437f9d5a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab9f130;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f9d9c FUN_1437f9d9c body=65 status=ok
// SIG undefined FUN_1437f9d9c(void)

undefined8 * FUN_1437f9d9c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab9f130;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f9dde FUN_1437f9dde body=65 status=ok
// SIG undefined FUN_1437f9dde(void)

undefined8 * FUN_1437f9dde(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab9f130;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f9e3c FUN_1437f9e3c body=162 status=ok
// SIG undefined FUN_1437f9e3c(void)

void FUN_1437f9e3c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  switch(*(undefined1 *)(param_1 + 0x120)) {
  case 0:
  case 3:
    *(undefined1 *)(param_1 + 0x120) = 0xff;
    return;
  case 1:
    *(undefined1 *)(param_1 + 0x120) = 0xff;
    plVar3 = *(longlong **)(param_1 + 8);
    break;
  case 2:
    *(undefined1 *)(param_1 + 0x120) = 0xff;
    plVar3 = *(longlong **)(param_1 + 0xf0);
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
    plVar3 = *(longlong **)(param_1 + 0x78);
    break;
  default:
    goto switchD_1437f9e60_default;
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
                    /* WARNING: Could not recover jumptable at 0x0001437f9ebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
switchD_1437f9e60_default:
  return;
}



// FUNCTION 1437f9ede FUN_1437f9ede body=31 status=ok
// SIG undefined FUN_1437f9ede(void)

undefined8 FUN_1437f9ede(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f9f9e FUN_1437f9f9e body=120 status=ok
// SIG undefined FUN_1437f9f9e(void)

void FUN_1437f9f9e(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 0x38 + (longlong)(int)param_2 * 0x78);
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
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x78);
    memmove(_Dst,(void *)((longlong)_Dst + 0x78),(longlong)(int)(~param_2 + iVar5) * 0x78);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 1437fa016 FUN_1437fa016 body=339 status=ok
// SIG undefined FUN_1437fa016(void)

void FUN_1437fa016(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x78;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1437fa084;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_1437fa084:
    iVar5 = (int)(uVar4 / 0x78);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x78,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1437fa16a FUN_1437fa16a body=120 status=ok
// SIG undefined FUN_1437fa16a(void)

undefined8 * FUN_1437fa16a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ab9f090;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],(longlong)*(int *)((longlong)param_1 + 0x24) << 6);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 1437fa1e2 FUN_1437fa1e2 body=827 status=ok
// SIG undefined FUN_1437fa1e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437fa1e2(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab9c0a0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab9c330,1,0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab9ca70,1,0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab9d100,1,0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab9d600,1,0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab9dab0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab9df70,1,0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab9e5c0,1,0);
  _DAT_14cb1c720 = 0x47efffffe0000000;
  _DAT_14cb1c728 = 0x47efffffe0000000;
  _DAT_14cb1c730 = 0x47efffffe0000000;
  DAT_14cb1c738 = 0x47efffffe0000000;
  DAT_14cb1c740 = 0x47efffffe0000000;
  DAT_14cb1c748 = 0x47efffffe0000000;
  _DAT_14cb1c750 = 0x47efffffe0000000;
  _DAT_14cb1c758 = 0x47efffffe0000000;
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab9e900,1,0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb1c778 = (ulonglong)uVar2;
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxNav",&PTR_FUN_14ab9e9c0,1,0);
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxNav",0,0,&PTR_FUN_14ab9eb60);
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cb1c7b0);
  if (cVar1 == '\0') {
    _DAT_14cb1c7b0 = 0;
    uRam000000014cb1c7b8 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&DAT_14cb1c7c0,&DAT_149e26db4,1);
  _DAT_14cb1c7d0 = &LAB_1437f4660;
  _DAT_14cb1c7d8 = 0x443411ec;
  DAT_14cb1c7dc = 1;
  DAT_14cb1c7c8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb1c7c8;
  atexit((_func_5014 *)&LAB_1437f4665);
  DAT_14cb1c7f0 = 0;
  _DAT_14cb1c7f8 = 0;
  _DAT_14cb1c800 = 2;
  _DAT_14cb1c804 = 0;
  ram0x00014cb1c80c = 0;
  _DAT_14cb1c814 = 0x200000000;
  _DAT_14cb1c81c = 0;
  _DAT_14cb1c828 = 0;
  LOCK();
  DAT_14cb1c820._0_4_ = 0;
  DAT_14cb1c820._4_4_ = 0;
  UNLOCK();
  atexit(FUN_1437f480d);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437fa520 FUN_1437fa520 body=69 status=ok
// SIG undefined FUN_1437fa520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437fa520(void)

{
  _DAT_14cb1c8b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437fa562. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1c8b8,1);
  return;
}



// FUNCTION 1437fa566 FUN_1437fa566 body=734 status=ok
// SIG undefined FUN_1437fa566(void)

void FUN_1437fa566(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  double _X;
  double _X_00;
  undefined1 uVar6;
  int iVar7;
  longlong *plVar8;
  double *pdVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  double dStack_80;
  undefined8 local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined8 local_60 [2];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((((*(int *)(param_1 + 0x14) == 0) || (uVar3 = *(uint *)(param_1 + 0x10), (int)uVar3 < 0)) ||
       (DAT_14c9647dc <= (int)uVar3)) ||
      ((plVar10 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)(param_1 + 0x14))))) ||
     (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 || (lVar4 = *plVar10, lVar4 == 0)))) {
    *(undefined1 *)(param_2 + 0xcd1) = 1;
    goto LAB_1437fa7da;
  }
  local_a8 = *(double *)(param_2 + 0x588);
  _X = *(double *)(param_2 + 0x590);
  _X_00 = *(double *)(param_2 + 0x598);
  uStack_90 = *(undefined8 *)(param_2 + 0x5a0);
  local_88 = *(undefined8 *)(param_2 + 0x5a8);
  dStack_80 = *(double *)(param_2 + 0x5b0);
  local_78 = *(undefined8 *)(param_2 + 0x5b8);
  local_70 = *(longlong **)(param_2 + 0x5c0);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  local_68 = *(undefined4 *)(param_2 + 0x5c8);
  local_60[0] = *(undefined8 *)(param_2 + 0x5d0);
  dStack_a0 = _X;
  local_98 = _X_00;
  if ((local_a8 <= -(double)CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860)) ||
     ((double)CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860) <= local_a8)) {
LAB_1437fa6f2:
    plVar8 = (longlong *)FUN_1409a8112(param_2,0);
    plVar10 = local_70;
    if (plVar8 != (longlong *)0x0) {
      lVar5 = plVar8[0x39];
      if (lVar5 == 0) {
        pdVar9 = (double *)&DAT_14c8464e0;
        uVar11 = (undefined4)DAT_14c8464f0;
        uVar12 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar11 = (undefined4)*(undefined8 *)(lVar5 + 0x270);
        uVar12 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x270) >> 0x20);
        pdVar9 = (double *)(lVar5 + 0x260);
      }
      local_a8 = *pdVar9;
      dStack_a0 = pdVar9[1];
      dStack_80 = DAT_14cb1c870;
      uStack_90 = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
      local_88 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
      local_98 = (double)CONCAT44(uVar12,uVar11);
      local_78 = 0;
      if (local_70 != (longlong *)0x0) {
        local_70 = (longlong *)0x0;
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      local_68 = 0xffffffff;
      (**(code **)(*plVar8 + 0x528))(plVar8,local_60);
    }
  }
  else {
    if ((_X <= -(double)CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868)) ||
       ((double)CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868) <= _X)) goto LAB_1437fa6f2;
    if ((_X_00 <= -DAT_14cb1c870) || (DAT_14cb1c870 <= _X_00)) goto LAB_1437fa6f2;
    iVar7 = _finite(local_a8);
    if (iVar7 == 0) goto LAB_1437fa6f2;
    iVar7 = _finite(_X);
    if (iVar7 == 0) goto LAB_1437fa6f2;
    iVar7 = _finite(_X_00);
    if (iVar7 == 0) goto LAB_1437fa6f2;
  }
  uVar6 = FUN_1406d2885(&local_a8,lVar4);
  plVar10 = local_70;
  *(undefined1 *)(param_2 + 0xcd1) = uVar6;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_70 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
LAB_1437fa7da:
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437fa852 FUN_1437fa852 body=95 status=ok
// SIG undefined FUN_1437fa852(void)

undefined8 FUN_1437fa852(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x3c8);
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    if (iVar1 < 1) {
      lVar4 = 0;
    }
    else {
      uVar2 = rand();
      iVar3 = (int)((float)iVar1 * ((float)(uVar2 & 0x7fff) / 32767.0));
      iVar6 = iVar1 + -1;
      if (iVar3 < iVar1 + -1) {
        iVar6 = iVar3;
      }
      lVar4 = (longlong)iVar6;
    }
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + lVar4 * 8);
  }
  return uVar5;
}



// FUNCTION 1437fa8b2 FUN_1437fa8b2 body=108 status=ok
// SIG undefined FUN_1437fa8b2(void)

longlong * FUN_1437fa8b2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((longlong)*(int *)(param_1 + 0x108) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x100);
    lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0x108) * 0x28;
    do {
      if ((longlong)*(int *)(lVar3 + 0x18) != 0) {
        plVar2 = *(longlong **)(lVar3 + 0x10);
        plVar5 = plVar2 + (longlong)*(int *)(lVar3 + 0x18) * 0x13;
        do {
          if ((longlong)(int)plVar2[1] != 0) {
            lVar4 = 0;
            do {
              if (*(longlong *)(*plVar2 + lVar4) == param_2) {
                return plVar2;
              }
              lVar4 = lVar4 + 8;
            } while ((longlong)(int)plVar2[1] * 8 != lVar4);
          }
          plVar2 = plVar2 + 0x13;
        } while (plVar2 != plVar5);
      }
      lVar3 = lVar3 + 0x28;
    } while (lVar3 != lVar1);
  }
  return (longlong *)0x0;
}



// FUNCTION 1437fa91e FUN_1437fa91e body=69 status=ok
// SIG undefined FUN_1437fa91e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437fa91e(void)

{
  _DAT_14cb1c8d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437fa960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1c8e0,1);
  return;
}



// FUNCTION 1437fa964 FUN_1437fa964 body=213 status=ok
// SIG undefined FUN_1437fa964(void)

void FUN_1437fa964(longlong param_1,byte param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  uVar6 = DAT_14cb1c870;
  uVar5 = DAT_14cb1c868;
  uVar4 = DAT_14cb1c860;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = DAT_14cb1c870;
  local_58 = DAT_14cb1c860;
  uStack_50 = DAT_14cb1c868;
  uStack_30 = DAT_14cb1c870;
  uStack_40 = DAT_14cb1c860;
  uStack_38 = DAT_14cb1c868;
  uVar7 = DAT_14c872be0;
  if ((param_2 & 0xfe) != 2) {
    uVar7 = 0;
  }
  *(undefined8 *)(param_1 + 8) = uVar7;
  *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0;
  local_48._0_4_ = (undefined4)uVar6;
  local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar4;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_38._0_4_ = (undefined4)uVar5;
  uStack_38._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  *(undefined4 *)(param_1 + 0x48) = (undefined4)uStack_38;
  *(undefined4 *)(param_1 + 0x4c) = uStack_38._4_4_;
  *(undefined4 *)(param_1 + 0x50) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x54) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x38) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x3c) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x40) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x44) = uStack_40._4_4_;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  plVar3 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  local_48 = uVar6;
  uStack_40 = uVar4;
  uStack_38 = uVar5;
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
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  LOCK();
  *(byte *)(param_1 + 0x10) = param_2;
  UNLOCK();
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437faa3a FUN_1437faa3a body=431 status=ok
// SIG undefined FUN_1437faa3a(void)

void FUN_1437faa3a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
  }
  if (DAT_14c762030 == 0) goto LAB_1437faae5;
  if (DAT_14c762030 == 1) {
    if (DAT_14c86a9f8 == '\x01') {
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar3 = *(int *)(lVar4 + 0xc60);
      if ((iVar3 != 0x40000002) && (iVar3 != 2)) {
        if (iVar3 != 1) goto LAB_1437faae5;
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if ((DVar6 != DVar7) && (*(int *)(lVar4 + 0xc60) != 0x40000002)) goto LAB_1437faae5;
      }
    }
    if ((*(longlong *)(param_2 + 0x5a8) == 0) ||
       ((*(byte *)(*(longlong *)(param_2 + 0x5a8) + 0xa0) & 1) != 0)) {
LAB_1437faae5:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
  }
  FUN_1437fa964(param_1,1);
  local_50 = *param_3;
  plVar5 = (longlong *)param_3[1];
  if (plVar5 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_48 = plVar5;
  }
  local_58 = &PTR_LAB_14aba04c0;
  local_68 = 0;
  local_78 = &LAB_143800a94;
  local_88 = 0xff;
  FUN_14014aede(&local_80);
  if (local_80 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_80 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_80)(local_80,1);
    }
  }
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
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437fac18 FUN_1437fac18 body=888 status=ok
// SIG undefined FUN_1437fac18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437fac18(longlong *param_1,float *param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  if (((longlong *)*param_1 != (longlong *)0x0) &&
     (iVar4 = (**(code **)(*(longlong *)*param_1 + 8))(), iVar4 == 0)) {
    lVar7 = *param_1;
    cVar3 = FUN_140383102(lVar7 + 0x80,param_2);
    if ((((cVar3 != '\0') &&
         (((dVar12 = *(double *)(lVar7 + 0xb0) - *(double *)(param_2 + 0xc),
           dVar11 = *(double *)(lVar7 + 0xa8) - *(double *)(param_2 + 10),
           dVar10 = (double)(*param_2 * 0.25 * *param_2 * 0.25),
           dVar11 * dVar11 + dVar12 * dVar12 < dVar10 &&
           (dVar11 = (double)(param_2[1] * 0.5 * param_2[1] * 0.5),
           ABS(*(double *)(lVar7 + 0xb8) - *(double *)(param_2 + 0xe)) < dVar11)) &&
          (dVar12 = *(double *)(lVar7 + 200) - *(double *)(param_2 + 0x12),
          dVar13 = *(double *)(lVar7 + 0xc0) - *(double *)(param_2 + 0x10),
          dVar13 * dVar13 + dVar12 * dVar12 < dVar10)))) &&
        (ABS(*(double *)(lVar7 + 0xd0) - *(double *)(param_2 + 0x14)) < dVar11)) &&
       ((*(char *)(lVar7 + 0x10) == '\x01' ||
        ((ulonglong)(DAT_14c872be0 - *(longlong *)(lVar7 + 8)) < 3)))) {
      return;
    }
    if (*(char *)(lVar7 + 0x10) != '\x01') goto LAB_1437faf79;
  }
  plVar5 = (longlong *)FUN_14001cc68(0xf8);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14aba04e0;
  memset(plVar5 + 3,0,0x88);
  plVar5[5] = -1;
  plVar5[9] = DAT_14cb1c870;
  lVar7 = DAT_14cb1c868;
  plVar5[7] = DAT_14cb1c860;
  plVar5[8] = lVar7;
  plVar5[0xc] = DAT_14cb1c870;
  lVar7 = DAT_14cb1c868;
  plVar5[10] = DAT_14cb1c860;
  plVar5[0xb] = lVar7;
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  *(undefined4 *)(plVar5 + 0xf) = 0xffffffff;
  plVar8 = plVar5 + 2;
  *plVar8 = (longlong)&PTR_FUN_14aba0500;
  *(undefined4 *)(plVar5 + 0x13) = 0xffffffff;
  plVar5[0x14] = 0;
  plVar5[0x15] = 0;
  plVar5[0x16] = 0;
  plVar5[0x19] = DAT_14cb1c870;
  lVar7 = DAT_14cb1c868;
  plVar5[0x17] = DAT_14cb1c860;
  plVar5[0x18] = lVar7;
  plVar5[0x1c] = DAT_14cb1c870;
  lVar7 = DAT_14cb1c868;
  plVar5[0x1a] = DAT_14cb1c860;
  plVar5[0x1b] = lVar7;
  *(undefined4 *)(plVar5 + 0x1d) = 0xffffffff;
  *(undefined4 *)((longlong)plVar5 + 0xec) = 0xffffffff;
  *(undefined4 *)(plVar5 + 0x1e) = 0xffffffff;
  *(undefined4 *)((longlong)plVar5 + 0xf4) = 0xffffffff;
  if (plVar8 == (longlong *)0x0) {
    if (plVar5 == (longlong *)0x0) goto LAB_1437faeae;
LAB_1437faefb:
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar8;
    plVar8 = (longlong *)param_1[1];
    if (plVar5 == plVar8) {
      LOCK();
      plVar8 = plVar5 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    else {
      param_1[1] = (longlong)plVar5;
      if (plVar8 != (longlong *)0x0) {
        bVar2 = false;
        goto LAB_1437faf16;
      }
    }
LAB_1437faf59:
    LOCK();
    plVar8 = plVar5 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  else {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      plVar5[0x10] = (longlong)plVar8;
      if ((longlong *)plVar5[0x11] != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar5[0x11] != (longlong *)0x0) {
          plVar9 = plVar5 + 0x11;
          plVar6 = (longlong *)plVar5[0x11];
          goto LAB_1437fae9a;
        }
        plVar5[0x11] = (longlong)plVar5;
      }
LAB_1437faede:
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
      goto LAB_1437faefb;
    }
    _DAT_00000080 = 0x10;
    plVar9 = (longlong *)&DAT_00000088;
    plVar6 = _DAT_00000088;
    if (_DAT_00000088 != (longlong *)0x0) {
LAB_1437fae9a:
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      *plVar9 = (longlong)plVar5;
      if (plVar5 != (longlong *)0x0) goto LAB_1437faede;
    }
LAB_1437faeae:
    *param_1 = (longlong)plVar8;
    plVar8 = (longlong *)param_1[1];
    if (plVar8 != (longlong *)0x0) {
      param_1[1] = (longlong)plVar5;
      bVar2 = true;
LAB_1437faf16:
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      if (!bVar2) goto LAB_1437faf59;
    }
  }
  lVar7 = *param_1;
LAB_1437faf79:
  FUN_143800b08(lVar7,param_2);
  return;
}



// FUNCTION 1437faf90 FUN_1437faf90 body=815 status=ok
// SIG undefined FUN_1437faf90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437faf90(longlong *param_1,double *param_2)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  float fVar16;
  double dVar17;
  
  if (((longlong *)*param_1 != (longlong *)0x0) &&
     (iVar10 = (**(code **)(*(longlong *)*param_1 + 8))(), iVar10 == 1)) {
    lVar13 = *param_1;
    cVar9 = FUN_140383102(lVar13 + 0xb8,param_2 + 7);
    if (cVar9 != '\0') {
      fVar16 = *(float *)(param_2 + 7);
      if (*(float *)((longlong)param_2 + 0x3c) <= *(float *)(param_2 + 7)) {
        fVar16 = *(float *)((longlong)param_2 + 0x3c);
      }
      dVar3 = *param_2 - *(double *)(lVar13 + 0x80);
      dVar17 = param_2[1] - *(double *)(lVar13 + 0x88);
      dVar4 = param_2[2] - *(double *)(lVar13 + 0x90);
      dVar2 = (double)(fVar16 * 0.25 * fVar16 * 0.25);
      if (((dVar4 * dVar4 + dVar17 * dVar17 + dVar3 * dVar3 < dVar2) &&
          (dVar3 = param_2[4] - *(double *)(lVar13 + 0xa0),
          dVar17 = param_2[5] - *(double *)(lVar13 + 0xa8),
          dVar4 = param_2[6] - *(double *)(lVar13 + 0xb0),
          dVar4 * dVar4 + dVar17 * dVar17 + dVar3 * dVar3 < dVar2)) &&
         ((*(char *)(lVar13 + 0x10) == '\x01' ||
          ((ulonglong)(DAT_14c872be0 - *(longlong *)(lVar13 + 8)) < 3)))) {
        return;
      }
    }
    if (*(char *)(lVar13 + 0x10) != '\x01') goto LAB_1437fb2a8;
  }
  plVar11 = (longlong *)FUN_14001cc68(0xf0);
  plVar11[1] = (longlong)&DAT_100000001;
  *plVar11 = (longlong)&PTR_FUN_14aba0540;
  memset(plVar11 + 3,0,0xc0);
  plVar11[5] = -1;
  lVar13 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
  plVar11[7] = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
  plVar11[8] = lVar13;
  plVar11[9] = DAT_14cb1c870;
  plVar11[0xc] = DAT_14cb1c870;
  lVar13 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
  plVar11[10] = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
  plVar11[0xb] = lVar13;
  plVar11[0xd] = 0;
  plVar11[0xe] = 0;
  *(undefined4 *)(plVar11 + 0xf) = 0xffffffff;
  plVar14 = plVar11 + 2;
  *plVar14 = (longlong)&PTR_FUN_14aba0560;
  plVar11[0x14] = DAT_14cb1c870;
  lVar13 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
  plVar11[0x12] = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
  plVar11[0x13] = lVar13;
  plVar11[0x18] = DAT_14cb1c870;
  uVar8 = DAT_14cb1c868._4_4_;
  uVar7 = (undefined4)DAT_14cb1c868;
  uVar6 = DAT_14cb1c860._4_4_;
  *(undefined4 *)(plVar11 + 0x16) = (undefined4)DAT_14cb1c860;
  *(undefined4 *)((longlong)plVar11 + 0xb4) = uVar6;
  *(undefined4 *)(plVar11 + 0x17) = uVar7;
  *(undefined4 *)((longlong)plVar11 + 0xbc) = uVar8;
  *(undefined4 *)(plVar11 + 0x1a) = 0xffffffff;
  plVar11[0x1b] = 0;
  plVar11[0x1c] = 0;
  plVar11[0x1d] = 0;
  if (plVar14 == (longlong *)0x0) {
    if (plVar11 == (longlong *)0x0) goto LAB_1437fb1ed;
LAB_1437fb22a:
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar14;
    plVar14 = (longlong *)param_1[1];
    if (plVar11 == plVar14) {
      LOCK();
      plVar14 = plVar11 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    else {
      param_1[1] = (longlong)plVar11;
      if (plVar14 != (longlong *)0x0) {
        bVar5 = false;
        goto LAB_1437fb245;
      }
    }
LAB_1437fb288:
    LOCK();
    plVar14 = plVar11 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  else {
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      plVar11[0x10] = (longlong)plVar14;
      if ((longlong *)plVar11[0x11] != plVar11) {
        LOCK();
        *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar11[0x11] != (longlong *)0x0) {
          plVar15 = plVar11 + 0x11;
          plVar12 = (longlong *)plVar11[0x11];
          goto LAB_1437fb1d9;
        }
        plVar11[0x11] = (longlong)plVar11;
      }
LAB_1437fb20d:
      LOCK();
      plVar15 = plVar11 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      goto LAB_1437fb22a;
    }
    _DAT_00000080 = 0x10;
    plVar15 = (longlong *)&DAT_00000088;
    plVar12 = _DAT_00000088;
    if (_DAT_00000088 != (longlong *)0x0) {
LAB_1437fb1d9:
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
      *plVar15 = (longlong)plVar11;
      if (plVar11 != (longlong *)0x0) goto LAB_1437fb20d;
    }
LAB_1437fb1ed:
    *param_1 = (longlong)plVar14;
    plVar14 = (longlong *)param_1[1];
    if (plVar14 != (longlong *)0x0) {
      param_1[1] = (longlong)plVar11;
      bVar5 = true;
LAB_1437fb245:
      LOCK();
      plVar15 = plVar14 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      if (!bVar5) goto LAB_1437fb288;
    }
  }
  lVar13 = *param_1;
LAB_1437fb2a8:
  FUN_143800ecc(lVar13,param_2);
  return;
}



// FUNCTION 1437fb2bf FUN_1437fb2bf body=786 status=ok
// SIG undefined FUN_1437fb2bf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437fb2bf(longlong *param_1,float *param_2)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  float fVar13;
  
  if (((longlong *)*param_1 != (longlong *)0x0) &&
     (iVar7 = (**(code **)(*(longlong *)*param_1 + 8))(), iVar7 == 3)) {
    lVar10 = *param_1;
    if (*(char *)(lVar10 + 0x100) == *(char *)(param_2 + 0x20)) {
      fVar13 = param_2[1];
      if (*param_2 <= param_2[1]) {
        fVar13 = *param_2;
      }
      cVar6 = FUN_140383102(lVar10 + 0x80,param_2);
      if (((cVar6 != '\0') &&
          (((((int)*(float *)(lVar10 + 0xf8) < 0 || ((int)*(float *)(lVar10 + 0xfc) < 0)) ||
            ((*(float *)(lVar10 + 0xf8) == param_2[0x1e] &&
             (*(float *)(lVar10 + 0xfc) == param_2[0x1f])))) &&
           (cVar6 = FUN_1401bec20(lVar10 + 0xa8,param_2 + 10,fVar13 * 0.2), cVar6 != '\0')))) &&
         ((*(char *)(lVar10 + 0x10) == '\x01' ||
          ((ulonglong)(DAT_14c872be0 - *(longlong *)(lVar10 + 8)) < 3)))) {
        return;
      }
    }
    if (*(char *)(lVar10 + 0x10) != '\x01') goto LAB_1437fb5b5;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x118);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14aba0580;
  memset(plVar8 + 3,0,0x100);
  plVar8[5] = -1;
  plVar8[9] = DAT_14cb1c870;
  lVar10 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
  plVar8[7] = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
  plVar8[8] = lVar10;
  plVar8[0xc] = DAT_14cb1c870;
  lVar10 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
  plVar8[10] = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
  plVar8[0xb] = lVar10;
  plVar8[0xd] = 0;
  plVar8[0xe] = 0;
  *(undefined4 *)(plVar8 + 0xf) = 0xffffffff;
  plVar11 = plVar8 + 2;
  *plVar11 = (longlong)&PTR_FUN_14aba05a0;
  *(undefined4 *)(plVar8 + 0x13) = 0xffffffff;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x19] = DAT_14cb1c870;
  lVar10 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
  plVar8[0x17] = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
  plVar8[0x18] = lVar10;
  plVar8[0x1c] = DAT_14cb1c870;
  uVar5 = DAT_14cb1c868._4_4_;
  uVar4 = (undefined4)DAT_14cb1c868;
  uVar3 = DAT_14cb1c860._4_4_;
  *(undefined4 *)(plVar8 + 0x1a) = (undefined4)DAT_14cb1c860;
  *(undefined4 *)((longlong)plVar8 + 0xd4) = uVar3;
  *(undefined4 *)(plVar8 + 0x1b) = uVar4;
  *(undefined4 *)((longlong)plVar8 + 0xdc) = uVar5;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  *(undefined4 *)(plVar8 + 0x1f) = 0xffffffff;
  plVar8[0x21] = -1;
  *(undefined1 *)(plVar8 + 0x22) = 1;
  if (plVar11 == (longlong *)0x0) {
    if (plVar8 == (longlong *)0x0) goto LAB_1437fb4fa;
LAB_1437fb537:
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar11;
    plVar11 = (longlong *)param_1[1];
    if (plVar8 == plVar11) {
      LOCK();
      plVar11 = plVar8 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    else {
      param_1[1] = (longlong)plVar8;
      if (plVar11 != (longlong *)0x0) {
        bVar2 = false;
        goto LAB_1437fb552;
      }
    }
LAB_1437fb595:
    LOCK();
    plVar11 = plVar8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  else {
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      plVar8[0x10] = (longlong)plVar11;
      if ((longlong *)plVar8[0x11] != plVar8) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar8[0x11] != (longlong *)0x0) {
          plVar12 = plVar8 + 0x11;
          plVar9 = (longlong *)plVar8[0x11];
          goto LAB_1437fb4e6;
        }
        plVar8[0x11] = (longlong)plVar8;
      }
LAB_1437fb51a:
      LOCK();
      plVar12 = plVar8 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      goto LAB_1437fb537;
    }
    _DAT_00000080 = 0x10;
    plVar12 = (longlong *)&DAT_00000088;
    plVar9 = _DAT_00000088;
    if (_DAT_00000088 != (longlong *)0x0) {
LAB_1437fb4e6:
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      *plVar12 = (longlong)plVar8;
      if (plVar8 != (longlong *)0x0) goto LAB_1437fb51a;
    }
LAB_1437fb4fa:
    *param_1 = (longlong)plVar11;
    plVar11 = (longlong *)param_1[1];
    if (plVar11 != (longlong *)0x0) {
      param_1[1] = (longlong)plVar8;
      bVar2 = true;
LAB_1437fb552:
      LOCK();
      plVar12 = plVar11 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      if (!bVar2) goto LAB_1437fb595;
    }
  }
  lVar10 = *param_1;
LAB_1437fb5b5:
  FUN_1438012d6(lVar10,param_2);
  return;
}



// FUNCTION 1437fb5d1 FUN_1437fb5d1 body=784 status=ok
// SIG undefined FUN_1437fb5d1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437fb5d1(longlong *param_1,double *param_2)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  double dVar12;
  float fVar13;
  
  if (((longlong *)*param_1 != (longlong *)0x0) &&
     (iVar6 = (**(code **)(*(longlong *)*param_1 + 8))(), iVar6 == 4)) {
    lVar9 = *param_1;
    fVar13 = *(float *)((longlong)param_2 + 0x24);
    if (*(float *)(param_2 + 4) <= *(float *)((longlong)param_2 + 0x24)) {
      fVar13 = *(float *)(param_2 + 4);
    }
    cVar5 = FUN_140383102(lVar9 + 0xa0,param_2 + 4);
    if ((((cVar5 != '\0') && (*(char *)(lVar9 + 0xd0) == *(char *)(param_2 + 10))) &&
        (ABS(*(float *)(lVar9 + 0x98) - *(float *)(param_2 + 3)) <= 1.0)) &&
       ((dVar2 = *param_2 - *(double *)(lVar9 + 0x80),
        dVar12 = param_2[1] - *(double *)(lVar9 + 0x88),
        dVar3 = param_2[2] - *(double *)(lVar9 + 0x90),
        dVar3 * dVar3 + dVar12 * dVar12 + dVar2 * dVar2 < (double)(fVar13 * 0.2 * fVar13 * 0.2) &&
        ((*(char *)(lVar9 + 0x10) == '\x01' ||
         ((ulonglong)(DAT_14c872be0 - *(longlong *)(lVar9 + 8)) < 3)))))) {
      return;
    }
    if (*(char *)(lVar9 + 0x10) != '\x01') goto LAB_1437fb8c5;
  }
  plVar7 = (longlong *)FUN_14001cc68(0xe8);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14aba05c0;
  memset(plVar7 + 3,0,0xd0);
  plVar7[5] = -1;
  lVar9 = DAT_14cb1c868;
  plVar7[7] = DAT_14cb1c860;
  plVar7[8] = lVar9;
  plVar7[9] = DAT_14cb1c870;
  plVar7[0xc] = DAT_14cb1c870;
  lVar9 = DAT_14cb1c868;
  plVar7[10] = DAT_14cb1c860;
  plVar7[0xb] = lVar9;
  plVar7[0xd] = 0;
  plVar7[0xe] = 0;
  *(undefined4 *)(plVar7 + 0xf) = 0xffffffff;
  plVar10 = plVar7 + 2;
  *plVar10 = (longlong)&PTR_FUN_14aba05e0;
  *(undefined4 *)(plVar7 + 0x15) = 0x3f800000;
  *(undefined4 *)(plVar7 + 0x17) = 0xffffffff;
  plVar7[0x18] = 0;
  plVar7[0x19] = 0;
  plVar7[0x1a] = 0;
  plVar7[0x1b] = -1;
  *(undefined4 *)((longlong)plVar7 + 0xe4) = 0xffffffff;
  if (plVar10 == (longlong *)0x0) {
    if (plVar7 == (longlong *)0x0) goto LAB_1437fb80a;
LAB_1437fb847:
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar10;
    plVar10 = (longlong *)param_1[1];
    if (plVar7 == plVar10) {
      LOCK();
      plVar10 = plVar7 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    else {
      param_1[1] = (longlong)plVar7;
      if (plVar10 != (longlong *)0x0) {
        bVar4 = false;
        goto LAB_1437fb862;
      }
    }
LAB_1437fb8a5:
    LOCK();
    plVar10 = plVar7 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  else {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      plVar7[0x10] = (longlong)plVar10;
      if ((longlong *)plVar7[0x11] != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar7[0x11] != (longlong *)0x0) {
          plVar11 = plVar7 + 0x11;
          plVar8 = (longlong *)plVar7[0x11];
          goto LAB_1437fb7f6;
        }
        plVar7[0x11] = (longlong)plVar7;
      }
LAB_1437fb82a:
      LOCK();
      plVar11 = plVar7 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      goto LAB_1437fb847;
    }
    _DAT_00000080 = 0x10;
    plVar11 = (longlong *)&DAT_00000088;
    plVar8 = _DAT_00000088;
    if (_DAT_00000088 != (longlong *)0x0) {
LAB_1437fb7f6:
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      *plVar11 = (longlong)plVar7;
      if (plVar7 != (longlong *)0x0) goto LAB_1437fb82a;
    }
LAB_1437fb80a:
    *param_1 = (longlong)plVar10;
    plVar10 = (longlong *)param_1[1];
    if (plVar10 != (longlong *)0x0) {
      param_1[1] = (longlong)plVar7;
      bVar4 = true;
LAB_1437fb862:
      LOCK();
      plVar11 = plVar10 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      if (!bVar4) goto LAB_1437fb8a5;
    }
  }
  lVar9 = *param_1;
LAB_1437fb8c5:
  FUN_14380171c(lVar9,param_2);
  return;
}



// FUNCTION 1437fb8f2 FUN_1437fb8f2 body=524 status=ok
// SIG undefined FUN_1437fb8f2(void)

bool FUN_1437fb8f2(double *param_1,double *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double _X;
  double _X_00;
  double _X_01;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  
  fVar3 = *(float *)(param_2 + 9);
  fVar4 = *(float *)((longlong)param_2 + 0x4c);
  _X = *param_1;
  _X_00 = param_1[1];
  _X_01 = param_1[2];
  plVar10 = (longlong *)param_1[7];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  bVar12 = false;
  if ((-DAT_14cb1c860 < _X) && (_X < DAT_14cb1c860)) {
    bVar12 = false;
    if ((-DAT_14cb1c868 < _X_00) && (bVar12 = false, _X_00 < DAT_14cb1c868)) {
      bVar12 = false;
      if ((-DAT_14cb1c870 < _X_01) && (_X_01 < DAT_14cb1c870)) {
        fVar5 = *(float *)(param_1 + 9);
        fVar6 = *(float *)((longlong)param_1 + 0x4c);
        dVar7 = *param_2;
        dVar8 = param_2[1];
        dVar9 = param_2[2];
        iVar11 = _finite(_X);
        if (iVar11 != 0) {
          iVar11 = _finite(_X_00);
          if (iVar11 != 0) {
            iVar11 = _finite(_X_01);
            if ((iVar11 != 0) &&
               ((float)((dVar7 - _X) * (dVar7 - _X) + (dVar8 - _X_00) * (dVar8 - _X_00)) <=
                (fVar3 + fVar5) * (fVar3 + fVar5) + 0.01)) {
              bVar12 = ABS((float)((double)(float)dVar9 - _X_01)) <= fVar4 + fVar6 + 0.01;
              goto LAB_1437fba8d;
            }
          }
        }
        bVar12 = false;
      }
    }
  }
LAB_1437fba8d:
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
  return bVar12;
}



// FUNCTION 1437fbafe FUN_1437fbafe body=19 status=ok
// SIG undefined FUN_1437fbafe(void)

void FUN_1437fbafe(void)

{
  FUN_147e44622();
  FUN_146421d60();
  return;
}



// FUNCTION 1437fbb16 FUN_1437fbb16 body=1016 status=ok
// SIG undefined FUN_1437fbb16(void)

void FUN_1437fbb16(longlong param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_718 [32];
  uint local_6f8 [2];
  longlong local_6f0;
  undefined4 local_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 local_6d8;
  undefined4 uStack_6d4;
  undefined8 uStack_6d0;
  char local_6c8;
  undefined7 uStack_6c7;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined4 local_6b8;
  undefined4 uStack_6b4;
  undefined8 local_6b0;
  char local_6a8;
  undefined1 local_3b8;
  undefined1 local_3b0;
  undefined1 local_3a8 [7];
  undefined4 local_3a1;
  undefined4 uStack_39d;
  undefined4 uStack_399;
  undefined4 uStack_395;
  undefined8 local_391;
  undefined1 local_80;
  undefined1 local_78;
  uint local_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_718;
  FUN_141527b1c();
  cVar1 = FUN_140b4b52a(param_1,param_2);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_2 + 0x38))(param_2), cVar1 == '\0')) {
    do {
      local_6f8[0] = 0;
      local_6f0 = 0;
      local_3b0 = 0xff;
      (**(code **)(*param_2 + 400))(param_2,&local_6f0);
      FUN_1407ff2c2(local_6f8,param_2);
      (**(code **)(*param_2 + 0x188))(param_2,local_6f8);
      if (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0xc4)) {
        lVar4 = *(longlong *)(param_1 + 0xd0);
        if (*(longlong *)(param_1 + 0xd0) == 0) {
          lVar4 = param_1 + 200;
        }
        iVar3 = *(int *)(lVar4 + (ulonglong)
                                 (*(int *)(param_1 + 0xd8) - 1U &
                                 (int)local_6f0 + (int)((ulonglong)local_6f0 >> 0x20) * 0x17) * 4);
        if (iVar3 != -1) {
          do {
            lVar4 = *(longlong *)(param_1 + 0x90) + (longlong)iVar3 * 0x1030;
            if (*(longlong *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar3 * 0x1030) == local_6f0
               ) {
              if ((lVar4 + 8U & 0xfffffffffffffff7) != 0) {
                switch(local_3b0) {
                case 0:
                  local_80 = 0xff;
                  FUN_1449496c6(local_3a8,&local_6e8);
                  local_78 = local_3b8;
                  local_70 = local_6f8[0];
                  if (*(uint *)(lVar4 + 0xa50) < local_6f8[0]) {
                    if (local_3a8 != (undefined1 *)(lVar4 + 0x3c0)) {
                      FUN_1402bea0c((undefined1 *)(lVar4 + 0x3c0),local_3a8);
                    }
                    *(uint *)(lVar4 + 0xa50) = local_70;
                  }
                  FUN_1449493b2(local_3a8);
                  break;
                case 1:
                  if (local_6c8 == '\x01') {
                    local_50 = uStack_6d0;
                    local_60 = uStack_6e0;
                    uStack_5c = uStack_6dc;
                    uStack_58 = local_6d8;
                    uStack_54 = uStack_6d4;
                  }
                  if (local_6a8 == '\x01') {
                    local_391 = local_6b0;
                    local_3a1 = uStack_6c0;
                    uStack_39d = uStack_6bc;
                    uStack_399 = local_6b8;
                    uStack_395 = uStack_6b4;
                  }
                  if (*(uint *)(lVar4 + 0xea8) < local_6f8[0]) {
                    *(undefined4 *)(lVar4 + 0xdf8) = local_6e8;
                    *(char *)(lVar4 + 0xe18) = local_6c8;
                    if (local_6c8 != '\0') {
                      *(undefined8 *)(lVar4 + 0xe10) = local_50;
                      *(undefined4 *)(lVar4 + 0xe00) = local_60;
                      *(undefined4 *)(lVar4 + 0xe04) = uStack_5c;
                      *(undefined4 *)(lVar4 + 0xe08) = uStack_58;
                      *(undefined4 *)(lVar4 + 0xe0c) = uStack_54;
                    }
                    *(char *)(lVar4 + 0xe38) = local_6a8;
                    if (local_6a8 != '\0') {
                      *(undefined8 *)(lVar4 + 0xe30) = local_391;
                      *(undefined4 *)(lVar4 + 0xe20) = local_3a1;
                      *(undefined4 *)(lVar4 + 0xe24) = uStack_39d;
                      *(undefined4 *)(lVar4 + 0xe28) = uStack_399;
                      *(undefined4 *)(lVar4 + 0xe2c) = uStack_395;
                    }
                    *(uint *)(lVar4 + 0xe40) = local_6f8[0];
                    *(undefined1 *)(lVar4 + 0xe48) = 1;
                    *(uint *)(lVar4 + 0xea8) = local_6f8[0];
                  }
                  break;
                case 2:
                  if (*(uint *)(lVar4 + 0xfe0) < local_6f8[0]) {
                    *(ulonglong *)(lVar4 + 0xf80) = CONCAT44(uStack_6b4,local_6b8);
                    *(ulonglong *)(lVar4 + 0xf70) = CONCAT71(uStack_6c7,local_6c8);
                    *(ulonglong *)(lVar4 + 0xf78) = CONCAT44(uStack_6bc,uStack_6c0);
                    *(ulonglong *)(lVar4 + 0xf60) = CONCAT44(uStack_6d4,local_6d8);
                    *(undefined8 *)(lVar4 + 0xf68) = uStack_6d0;
                    *(undefined4 *)(lVar4 + 0xf50) = local_6e8;
                    *(undefined4 *)(lVar4 + 0xf54) = uStack_6e4;
                    *(undefined4 *)(lVar4 + 0xf58) = uStack_6e0;
                    *(undefined4 *)(lVar4 + 0xf5c) = uStack_6dc;
                    *(uint *)(lVar4 + 0xf88) = local_6f8[0];
                    *(undefined1 *)(lVar4 + 0xf90) = 1;
                    *(uint *)(lVar4 + 0xfe0) = local_6f8[0];
                  }
                  break;
                case 3:
                  if (*(uint *)(lVar4 + 0x58) < local_6f8[0]) {
                    *(ulonglong *)(lVar4 + 0x38) = CONCAT44(uStack_6e4,local_6e8);
                    *(uint *)(lVar4 + 0x40) = local_6f8[0];
                    *(undefined1 *)(lVar4 + 0x44) = 1;
                    *(uint *)(lVar4 + 0x58) = local_6f8[0];
                  }
                  break;
                case 4:
                  switch((undefined1)local_6e8) {
                  case 0:
                    uVar2 = *(uint *)(lVar4 + 0xa50);
                    if (*(uint *)(lVar4 + 0xa50) < local_6f8[0]) {
                      uVar2 = local_6f8[0];
                    }
                    *(uint *)(lVar4 + 0xa50) = uVar2;
                    break;
                  case 1:
                    uVar2 = *(uint *)(lVar4 + 0xea8);
                    if (*(uint *)(lVar4 + 0xea8) < local_6f8[0]) {
                      uVar2 = local_6f8[0];
                    }
                    *(uint *)(lVar4 + 0xea8) = uVar2;
                    break;
                  case 2:
                    uVar2 = *(uint *)(lVar4 + 0xfe0);
                    if (*(uint *)(lVar4 + 0xfe0) < local_6f8[0]) {
                      uVar2 = local_6f8[0];
                    }
                    *(uint *)(lVar4 + 0xfe0) = uVar2;
                    break;
                  case 3:
                    uVar2 = *(uint *)(lVar4 + 0x58);
                    if (*(uint *)(lVar4 + 0x58) < local_6f8[0]) {
                      uVar2 = local_6f8[0];
                    }
                    *(uint *)(lVar4 + 0x58) = uVar2;
                  }
                }
              }
              break;
            }
            iVar3 = *(int *)(lVar4 + 0x1028);
          } while (iVar3 != -1);
        }
      }
      FUN_1407ff8cc(&local_6e8);
      cVar1 = (**(code **)(*param_2 + 0x38))(param_2);
    } while (cVar1 == '\0');
  }
  if ((local_48 ^ (ulonglong)auStack_718) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437fbf0f FUN_1437fbf0f body=69 status=ok
// SIG undefined FUN_1437fbf0f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437fbf0f(void)

{
  _DAT_14cb1cc70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437fbf51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1cc78,1);
  return;
}



// FUNCTION 1437fbf54 FUN_1437fbf54 body=69 status=ok
// SIG undefined FUN_1437fbf54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437fbf54(void)

{
  _DAT_14cb1cc80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437fbf96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1cc88,1);
  return;
}



// FUNCTION 1437fbf99 FUN_1437fbf99 body=69 status=ok
// SIG undefined FUN_1437fbf99(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437fbf99(void)

{
  _DAT_14cb1cc90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437fbfdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1cc98,1);
  return;
}



// FUNCTION 1437fbfde FUN_1437fbfde body=69 status=ok
// SIG undefined FUN_1437fbfde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437fbfde(void)

{
  _DAT_14cb1cca0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437fc020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1cca8,1);
  return;
}



// FUNCTION 1437fc032 FUN_1437fc032 body=349 status=ok
// SIG undefined FUN_1437fc032(void)

void FUN_1437fc032(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x8f0))();
  if (param_3 == 0) {
    local_40 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,&local_40,puVar2,1);
  }
  local_38 = 0xc;
  local_30 = 0;
  if (param_2 == 0) {
    local_58 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_2 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,&local_58,puVar2,1);
  }
  local_50 = 0xc;
  local_48 = 0;
  FUN_141801cf0(param_1,&local_58,&local_40);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437fc19e FUN_1437fc19e body=205 status=ok
// SIG undefined FUN_1437fc19e(void)

void FUN_1437fc19e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  *(undefined4 *)(param_1 + 0x5d8) = 0;
  iVar1 = *(int *)(param_1 + 0x1254);
  *(int *)(param_1 + 0x1254) = iVar1 + 1;
  uVar6 = (ulonglong)*(int *)(param_1 + 0x1248);
  if ((longlong)uVar6 < 1) {
    *(int *)(param_1 + 0x1254) = iVar1;
    return;
  }
  bVar7 = false;
  do {
    lVar8 = uVar6 * 0x10 + -8;
    uVar9 = uVar6;
    while (((lVar2 = *(longlong *)(param_1 + 0x1240), *(int *)(lVar2 + lVar8) != 0 &&
            (plVar3 = *(longlong **)(lVar2 + -8 + lVar8), plVar3 != (longlong *)0x0)) &&
           (cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_1,param_2), cVar5 != '\0'))) {
      lVar8 = lVar8 + -0x10;
      bVar4 = uVar9 < 2;
      uVar9 = uVar9 - 1;
      if (bVar4) {
        *(int *)(param_1 + 0x1254) = *(int *)(param_1 + 0x1254) + -1;
        if (!bVar7) {
          return;
        }
        goto LAB_1437fc255;
      }
    }
    uVar6 = uVar9 - 1;
    bVar7 = true;
  } while (1 < uVar9);
  *(int *)(param_1 + 0x1254) = *(int *)(param_1 + 0x1254) + -1;
LAB_1437fc255:
  FUN_14474d06a((longlong *)(param_1 + 0x1240),0);
  return;
}



// FUNCTION 1437fc2a6 FUN_1437fc2a6 body=18 status=ok
// SIG undefined FUN_1437fc2a6(void)

void FUN_1437fc2a6(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x153c);
  if (*(int *)(param_1 + 0x153c) < param_2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x153c) = iVar1;
  return;
}



// FUNCTION 1437fc2c0 FUN_1437fc2c0 body=365 status=ok
// SIG undefined FUN_1437fc2c0(void)

void FUN_1437fc2c0(longlong *param_1,float *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  
  if (((param_1[0x29d] != 0) && (0.0 < *param_2)) &&
     ((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0)) {
    FUN_140ec85f2(param_1,param_2 + 0xcc);
    plVar1 = param_1 + 0x251;
    if ((char)param_1[0x274] == '\0') {
      uVar4 = FUN_144836af6(plVar1);
      FUN_1448367ba(plVar1,uVar4);
    }
    if ((((char)param_1[0x27d] == '\x01') && (4 < DAT_14c872be0 - param_1[0x27c])) &&
       ((param_1[0x27b] + 4U <= DAT_14c872be0 || ((char)param_1[0x27a] == '\0')))) {
      FUN_14012b994(plVar1);
    }
    plVar1 = (longlong *)param_1[0x29d];
    if (plVar1 != (longlong *)0x0) {
      if ((char)plVar1[0x2f] == '\x03') {
        if (((param_1[0x2a3] != 0) && (*(char *)(param_1[0x2a3] + 0xcd0) == '\x01')) &&
           (*(char *)((longlong)param_1 + 0x1539) == '\x04')) {
          cVar3 = (**(code **)(*plVar1 + 0x700))();
          if (cVar3 == '\0') {
            lVar2 = param_1[0x220];
            cVar3 = (**(code **)(*param_1 + 0xbd0))(param_1);
            if ((char)lVar2 != cVar3) {
              FUN_14035beba(param_1);
              return;
            }
          }
        }
      }
      else {
        if (0xbf < *(byte *)((longlong)param_1 + 0x5b4)) {
          *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) & 0x3f;
          (**(code **)(*param_1 + 0x5f0))(param_1,*(undefined1 *)((longlong)plVar1 + 0x552));
        }
        if ((*(char *)((longlong)param_1 + 0x1539) == '\x04') &&
           ((*(byte *)(param_1[0x29d] + 0x60) & 0x10) == 0)) {
          FUN_140bdc5b6(param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1437fc42e FUN_1437fc42e body=2951 status=ok
// SIG undefined FUN_1437fc42e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437fc42e(longlong *param_1,float *param_2)

{
  float fVar1;
  double dVar2;
  longlong lVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  byte bVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  double *pdVar12;
  longlong *_Dst;
  longlong lVar13;
  longlong *plVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_8a8 [32];
  undefined8 *local_888;
  undefined1 local_880;
  undefined8 local_870;
  undefined1 local_868 [16];
  undefined1 local_858 [16];
  undefined8 local_848;
  longlong lStack_840;
  longlong local_838;
  undefined4 local_7a4;
  byte local_79b;
  undefined4 local_778;
  double local_748;
  double dStack_740;
  double local_738;
  undefined1 local_728 [8];
  double local_720;
  double local_710;
  double local_708;
  double local_700;
  longlong local_6f8;
  longlong lStack_6f0;
  longlong local_6e8;
  longlong lStack_6e0;
  longlong local_310;
  longlong local_100;
  byte local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_8a8;
  if (((param_1[0x29d] == 0) || (*param_2 <= 0.0)) ||
     ((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0)) goto LAB_1437fce87;
  FUN_1448912e0(param_1 + 0x2e6,param_2);
  if ((((char)param_1[699] == '\x01') && (0.0 < *(float *)(param_1 + 700))) &&
     (*(float *)((longlong)param_1 + 0x15e4) <= 0.0)) {
    *(char *)(param_1 + 0x2f3) = (char)param_1[0x2ad];
    param_1[0x2f2] = param_1[0x2ac];
    lVar13 = param_1[0x2ae];
    if (DAT_14c950c29 == '\x01') {
      if (lVar13 == 0) {
        lVar13 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar13 = param_1[0x2ae];
      }
    }
    param_1[0x2f4] = lVar13;
    if ((char)param_1[0x2ba] == '\x01') {
      if (((char)param_1[0x300] != '\0') && (param_1[0x2fe] != 0)) {
        FUN_1400020a8();
      }
      param_1[0x2f9] = param_1[0x2b3];
      param_1[0x2f7] = param_1[0x2b1];
      param_1[0x2f8] = param_1[0x2b2];
      *(int *)(param_1 + 0x2f5) = (int)param_1[0x2af];
      *(undefined4 *)((longlong)param_1 + 0x17ac) = *(undefined4 *)((longlong)param_1 + 0x157c);
      *(int *)(param_1 + 0x2f6) = (int)param_1[0x2b0];
      *(undefined4 *)((longlong)param_1 + 0x17b4) = *(undefined4 *)((longlong)param_1 + 0x1584);
      param_1[0x2fe] = 0;
      iVar11 = (int)param_1[0x2b9];
      *(int *)(param_1 + 0x2ff) = iVar11;
      if ((longlong)iVar11 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x17fc) = 2;
      }
      else {
        plVar14 = param_1 + 0x2b4;
        if ((longlong *)param_1[0x2b8] != (longlong *)0x0) {
          plVar14 = (longlong *)param_1[0x2b8];
        }
        FUN_144891736(param_1 + 0x2fa,iVar11,0);
        _Dst = (longlong *)param_1[0x2fe];
        if ((longlong *)param_1[0x2fe] == (longlong *)0x0) {
          _Dst = param_1 + 0x2fa;
        }
        memcpy(_Dst,plVar14,(longlong)iVar11 << 4);
      }
      uVar10 = 1;
    }
    else {
      if ((char)param_1[0x300] == '\0') goto LAB_1437fc55e;
      if (param_1[0x2fe] != 0) {
        FUN_1400020a8();
      }
      uVar10 = 0;
    }
    *(undefined1 *)(param_1 + 0x300) = uVar10;
  }
LAB_1437fc55e:
  (**(code **)(*param_1 + 0xc40))(param_1,*(undefined1 *)((longlong)param_1 + 0x19c1));
  if (((char)param_1[0x359] == '\0') &&
     (bVar8 = *(char *)((longlong)param_1 + 0x1539) - 1, bVar8 < 4)) {
    plVar14 = param_1 + 0x2f;
    cVar9 = (**(code **)(param_1[0x2f] + *(longlong *)(&DAT_14aba0d38 + (ulonglong)bVar8 * 8)))
                      (plVar14);
    if (cVar9 != '\0') {
      FUN_1408ba9a6(param_1,param_1 + 0x30b);
      if (((*(byte *)((longlong)param_1 + 0x5b4) & 0x20) == 0) &&
         (1 < (ulonglong)(DAT_14c872be0 - param_1[0x2e5]))) {
        if (((byte)(*(char *)((longlong)param_1 + 0x1539) - 1U) < 3) ||
           (*(char *)(param_1[0x2a3] + 0x804) == '\0')) {
          if ((char)param_1[0x34a] == '\x01') {
            uVar10 = (**(code **)(param_1[0x2f] + 0xe0))(plVar14);
            local_6f8 = param_1[0x33e];
            lStack_6f0 = param_1[0x33f];
            local_6e8 = param_1[0x340];
            lStack_6e0 = param_1[0x341];
            local_848 = param_1[0x342];
            lStack_840 = param_1[0x343];
            local_838 = param_1[0x344];
            local_888 = (undefined8 *)CONCAT71(local_888._1_7_,uVar10);
            local_880 = 0;
            FUN_140835c94(param_1 + 0x20c,&local_848,&local_6f8,0x3e800000);
          }
          (**(code **)(*param_1 + 0x758))(param_1);
          fVar1 = *(float *)(param_1 + 0x2e6);
          if ((((((((0.0 < fVar1) && (dVar2 = (double)param_1[0x301], -DAT_14cb1c860 < dVar2)) &&
                  (dVar2 < DAT_14cb1c860)) &&
                 ((dVar23 = (double)param_1[0x302], -DAT_14cb1c868 < dVar23 &&
                  (dVar23 < DAT_14cb1c868)))) &&
                (dVar19 = (double)param_1[0x303], -DAT_14cb1c870 < dVar19)) &&
               (((dVar19 < DAT_14cb1c870 && (iVar11 = _finite(dVar2), iVar11 != 0)) &&
                ((iVar11 = _finite(dVar23), iVar11 != 0 &&
                 (((iVar11 = _finite(dVar19), iVar11 != 0 && ((char)param_1[0x359] == '\0')) &&
                  (bVar8 = *(char *)((longlong)param_1 + 0x1539) - 1, bVar8 < 4)))))))) &&
              ((cVar9 = (**(code **)(*plVar14 + *(longlong *)(&DAT_14aba0d38 + (ulonglong)bVar8 * 8)
                                    ))(plVar14), cVar9 != '\0' && (param_1[0x3e] != 0)))) &&
             (lVar13 = param_1[0x22], lVar13 != 0)) {
            lVar3 = *(longlong *)(param_1[0x3e] + 0x1c8);
            if (lVar3 == 0) {
              pdVar12 = &DAT_14c8464e0;
              uVar25 = SUB84(DAT_14c8464f0,0);
              uVar26 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            }
            else {
              uVar25 = (undefined4)*(undefined8 *)(lVar3 + 0x270);
              uVar26 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x270) >> 0x20);
              pdVar12 = (double *)(lVar3 + 0x260);
            }
            dVar24 = *pdVar12;
            dVar17 = pdVar12[1];
            dVar22 = pdVar12[1];
            dVar19 = dVar19 - (double)CONCAT44(uVar26,uVar25);
            dVar2 = dVar2 - dVar24;
            local_6f8 = *(longlong *)(lVar13 + 0x240);
            lStack_6f0 = *(longlong *)(lVar13 + 0x248);
            local_6e8 = *(longlong *)(lVar13 + 0x250);
            lStack_6e0 = *(longlong *)(lVar13 + 600);
            local_710 = dVar2;
            local_708 = dVar23 - dVar22;
            local_700 = dVar19;
            FUN_1448052ee(&local_6f8,local_728);
            if ((char)param_1[0x33d] == '\x01') {
              local_738 = (double)param_1[0x2ec];
              local_748 = (double)param_1[0x2ea];
              dStack_740 = (double)param_1[0x2eb];
            }
            else {
              (**(code **)(*param_1 + 0xc30))(param_1,&local_6f8);
              FUN_1448052ee(&local_6f8,&local_748);
            }
            dVar20 = dStack_740;
            bVar4 = false;
            if ((ABS(dVar2) <= 9.999999747378752e-05) &&
               (bVar4 = false, ABS(dVar23 - dVar22) <= 9.999999747378752e-05)) {
              bVar4 = ABS(dVar19) <= 9.999999747378752e-05;
            }
            if ((!bVar4) || (1e-08 < ABS(local_720 - dStack_740))) {
              local_870 = CONCAT44(uVar26,uVar25);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14caddfd8) &&
                 (FUN_144b3d300(&DAT_14caddfd8), DAT_14caddfd8 == -1)) {
                FUN_1456bdea2(&DAT_14caddf88);
                atexit((_func_5014 *)&LAB_14350c396);
                _Init_thread_footer(&DAT_14caddfd8);
              }
              FUN_1402ed838(&local_6f8,param_1[0x22],DAT_14caddfd0 ^ 1,1);
              memset(&local_848,0,0x100);
              local_778 = 0xffffffff;
              local_848 = CONCAT44(0x3f800000,(undefined4)local_848);
              local_7a4 = 0xffffffff;
              auVar18._8_8_ = dVar20;
              auVar18._0_8_ = local_748;
              auVar18 = divpd(auVar18,_DAT_1499387d0);
              auVar21._8_8_ = 0;
              auVar21._0_8_ = local_738;
              auVar21 = divpd(auVar21,_DAT_1499387d0);
              auVar18 = roundpd(auVar18,auVar18,3);
              auVar21 = roundpd(auVar21,auVar21,3);
              dVar22 = (local_748 - auVar18._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
              dVar20 = (dVar20 - auVar18._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
              dVar5 = (local_738 - auVar21._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
              dVar6 = (0.0 - auVar21._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
              dVar2 = sin(dVar22);
              dVar23 = sin(dVar20);
              dVar19 = sin(dVar5);
              sin(dVar6);
              dVar22 = cos(dVar22);
              dVar20 = cos(dVar20);
              dVar5 = cos(dVar5);
              cos(dVar6);
              dVar7 = dVar23 * dVar2 * dVar19 + dVar20 * dVar22 * dVar5;
              dVar6 = -(dVar2 * dVar20 * dVar5) - dVar22 * dVar23 * dVar19;
              local_868._8_4_ = SUB84(dVar6,0);
              local_868._0_8_ = dVar2 * dVar23 * dVar5 - dVar22 * dVar20 * dVar19;
              local_868._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
              local_858._8_4_ = SUB84(dVar7,0);
              local_858._0_8_ = -(dVar20 * dVar2 * dVar19) + dVar23 * dVar22 * dVar5;
              local_858._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
              local_880 = 0;
              local_888 = &local_848;
              FUN_1402eda10(param_1,&local_710,local_868,1);
              if ((!bVar4) && ((local_79b & 3) == 1)) {
                (**(code **)(*param_1 + 0x4c8))(param_1,&local_848);
                local_880 = 1;
                local_888 = &local_848;
                (**(code **)(*param_1 + 0x508))(param_1,&local_710,1.0 - local_848._4_4_);
              }
              if ((((local_f0 & 1) != 0) && (local_6f8 != 0)) &&
                 ((*(uint *)(local_6f8 + 8) >> 0x1e & 1) == 0)) {
                FUN_140248a4c(local_6f8,&local_6f8);
              }
              local_6f8 = 0;
              uVar25 = (undefined4)local_870;
              uVar26 = (undefined4)((ulonglong)local_870 >> 0x20);
              if (local_100 != 0) {
                FUN_1400020a8();
              }
              if (local_310 != 0) {
                FUN_1400020a8();
              }
            }
            lVar13 = *(longlong *)(param_1[0x3e] + 0x1c8);
            if (lVar13 == 0) {
              pdVar12 = &DAT_14c8464e0;
              uVar15 = SUB84(DAT_14c8464f0,0);
              uVar16 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            }
            else {
              uVar15 = (undefined4)*(undefined8 *)(lVar13 + 0x270);
              uVar16 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x270) >> 0x20);
              pdVar12 = (double *)(lVar13 + 0x260);
            }
            dVar2 = pdVar12[1];
            dVar23 = 1.0 / (double)fVar1;
            param_1[0x25] = (longlong)(dVar23 * (*pdVar12 - dVar24));
            param_1[0x26] = (longlong)((dVar2 - dVar17) * dVar23);
            param_1[0x27] =
                 (longlong)
                 (((double)CONCAT44(uVar16,uVar15) - (double)CONCAT44(uVar26,uVar25)) * dVar23);
            cVar9 = (**(code **)(param_1[0x2f] + 0xe0))(plVar14);
            if (cVar9 != '\0') {
              param_1[0x27] = 0;
            }
            dVar2 = DAT_14c8464e0;
            dVar23 = DAT_14c8464e8;
            dVar19 = DAT_14c8464f0;
            if (0.0001 <= *(float *)(param_1 + 0x2f0)) {
              dVar22 = (double)*(float *)(param_1 + 0x2f0);
              dVar2 = (double)param_1[0x25];
              dVar23 = (double)param_1[0x26];
              dVar19 = (double)param_1[0x27];
              dVar24 = dVar19 * dVar19 + dVar2 * dVar2 + dVar23 * dVar23;
              if (dVar22 * dVar22 < dVar24) {
                dVar22 = (1.0 / SQRT(dVar24)) * dVar22;
                dVar2 = dVar2 * dVar22;
                dVar23 = dVar23 * dVar22;
                dVar19 = dVar19 * dVar22;
              }
            }
            param_1[0x25] = (longlong)dVar2;
            param_1[0x26] = (longlong)dVar23;
            param_1[0x27] = (longlong)dVar19;
            dVar22 = dVar19 * dVar19 + dVar2 * dVar2 + dVar23 * dVar23;
            if (((dVar22 != 1.0) || (dVar17 = dVar23, dVar20 = dVar19, dVar24 = dVar2, NAN(dVar22)))
               && (dVar17 = DAT_14c8464e8, dVar20 = DAT_14c8464f0, dVar24 = DAT_14c8464e0,
                  9.99999993922529e-09 <= dVar22)) {
              dVar22 = 1.0 / SQRT(dVar22);
              dVar17 = dVar23 * dVar22;
              dVar20 = dVar19 * dVar22;
              dVar24 = dVar2 * dVar22;
            }
            param_1[0x71] = (longlong)dVar24;
            param_1[0x72] = (longlong)dVar17;
            param_1[0x73] = (longlong)dVar20;
            *(undefined1 *)(param_1 + 0x352) = 1;
          }
          (**(code **)(*param_1 + 0x760))(param_1);
        }
        else {
          (**(code **)(*param_1 + 0x3a0))(param_1);
        }
      }
      *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) & 0xdf;
      goto LAB_1437fce87;
    }
  }
  *(undefined1 *)(param_1 + 0x33d) = 0;
LAB_1437fce87:
  if ((local_e0 ^ (ulonglong)auStack_8a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437fcfb6 FUN_1437fcfb6 body=88 status=ok
// SIG undefined FUN_1437fcfb6(void)

void FUN_1437fcfb6(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x1520);
  *(undefined8 *)(param_1 + 0x1518) = uVar3;
  *(longlong *)(param_1 + 0x1520) = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x0001437fd00a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1437fd00e FUN_1437fd00e body=262 status=ok
// SIG undefined FUN_1437fd00e(void)

void FUN_1437fd00e(longlong param_1,double *param_2,char param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  char cVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x1d8);
  if (plVar4 != (longlong *)0x0) {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    if ((param_3 != '\0') || (cVar5 = (**(code **)(*plVar4 + 0x790))(plVar4), cVar5 == '\0')) {
      plVar4[0x7b] = (longlong)(dVar1 + (double)plVar4[0x7b]);
      plVar4[0x7c] = (longlong)(dVar2 + (double)plVar4[0x7c]);
      plVar4[0x7d] = (longlong)(dVar3 + (double)plVar4[0x7d]);
    }
  }
  if (*(char *)(param_1 + 0x1558) == '\x01') {
    dVar1 = param_2[2];
    dVar2 = param_2[1];
    *(double *)(param_1 + 0x1540) = *(double *)(param_1 + 0x1540) + *param_2;
    *(double *)(param_1 + 0x1548) = *(double *)(param_1 + 0x1548) + dVar2;
    *(double *)(param_1 + 0x1550) = *(double *)(param_1 + 0x1550) + dVar1;
  }
  else {
    if ((double *)(param_1 + 0x1540) == param_2) {
      return;
    }
    *(double *)(param_1 + 0x1550) = param_2[2];
    dVar1 = param_2[1];
    *(double *)(param_1 + 0x1540) = *param_2;
    *(double *)(param_1 + 0x1548) = dVar1;
  }
  *(undefined1 *)(param_1 + 0x1558) = 1;
  return;
}



// FUNCTION 1437fd114 FUN_1437fd114 body=109 status=ok
// SIG undefined FUN_1437fd114(void)

void FUN_1437fd114(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  
  if (*(char *)(param_1 + 0x1558) == '\x01') {
    dVar1 = param_2[2];
    dVar2 = param_2[1];
    *(double *)(param_1 + 0x1540) = *(double *)(param_1 + 0x1540) + *param_2;
    *(double *)(param_1 + 0x1548) = *(double *)(param_1 + 0x1548) + dVar2;
    *(double *)(param_1 + 0x1550) = *(double *)(param_1 + 0x1550) + dVar1;
  }
  else {
    if ((double *)(param_1 + 0x1540) == param_2) {
      return;
    }
    *(double *)(param_1 + 0x1550) = param_2[2];
    dVar1 = param_2[1];
    *(double *)(param_1 + 0x1540) = *param_2;
    *(double *)(param_1 + 0x1548) = dVar1;
  }
  *(undefined1 *)(param_1 + 0x1558) = 1;
  return;
}



// FUNCTION 1437fd182 FUN_1437fd182 body=1545 status=ok
// SIG undefined FUN_1437fd182(void)

void FUN_1437fd182(longlong *param_1,longlong param_2,longlong param_3,char param_4)

{
  int *piVar1;
  code *pcVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  uint *puVar18;
  longlong *plVar19;
  uint uVar20;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0xc68))();
  if (param_2 == 0) {
    if (param_3 != 0) {
      lVar12 = 0;
      goto LAB_1437fd1ef;
    }
    param_1[0x67] = 0;
    bVar4 = true;
  }
  else {
    lVar12 = FUN_144a43c10(param_2);
    if (param_3 == 0) {
      param_1[0x67] = 0;
      bVar4 = true;
      bVar5 = true;
      if (lVar12 == 0) goto LAB_1437fd296;
    }
    else {
LAB_1437fd1ef:
      lVar14 = FUN_144a43c10(param_3);
      param_1[0x67] = (longlong)(double)*(float *)(param_3 + 0x3c);
      if (lVar12 == lVar14) {
        bVar4 = false;
        goto LAB_1437fd296;
      }
      if (lVar14 != 0) {
        FUN_14012bcc6(lVar14);
        FUN_14012b926(lVar14 + 0x1b8);
      }
      bVar5 = false;
    }
    bVar4 = bVar5;
    if ((((param_1[0x2f4] == 0) || ((*(byte *)((longlong)param_1 + 0x9f) & 0x20) == 0)) &&
        (param_1[0x279] != 0)) && (lVar12 = FUN_144a43c10(), lVar12 != 0)) {
      lVar12 = FUN_1437fa852(lVar12);
      if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar12);
      }
      param_1[0x2f4] = lVar12;
      *(undefined1 *)(param_1 + 0x2f3) = 1;
    }
  }
LAB_1437fd296:
  lVar12 = param_1[0x29d];
  if ((lVar12 != 0) && (*(char *)(lVar12 + 0x178) == '\x03')) {
    local_60 = 0;
    lStack_58 = 0;
    uVar13 = FUN_145ef08be();
    local_78 = FUN_14477b664(uVar13);
    lVar14 = FUN_145ef08be();
    uVar13 = FUN_145ef08be();
    FUN_1402d1bfa(&local_50,uVar13,param_3);
    if (local_50 != 0) {
      lStack_58 = 0;
    }
    local_88 = local_50;
    local_68 = local_50;
    lVar15 = FUN_145ef08be();
    if (lVar14 == 0) {
LAB_1437fd3ba:
      lVar15 = lVar14;
    }
    else if (lVar15 == 0) {
      lVar15 = 0;
    }
    else if ((*(int *)(lVar15 + 0x38) <= *(int *)(lVar14 + 0x38)) &&
            (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) ==
             lVar15 + 0x30)) goto LAB_1437fd3ba;
    if (local_78 != lVar15) {
      lStack_58 = 0;
    }
    uVar13 = FUN_14477b664(lVar15);
    lVar14 = FUN_14477b664(uVar13);
    if (lVar14 != 0 && local_88 != 0) {
      lStack_58 = param_3;
    }
    local_60 = lVar14;
    if (*(longlong *)(lVar12 + 0x820) == 0) {
      uVar13 = FUN_145ef08be();
      uVar13 = FUN_14477b664(uVar13);
      *(undefined8 *)(lVar12 + 0x820) = uVar13;
    }
    if (lVar14 == 0) {
      lVar14 = FUN_145ef08be();
    }
    local_78 = local_68;
    local_88 = FUN_14477b664(lVar14);
    iVar8 = 0;
    if ((local_88 != 0) && (plVar19 = *(longlong **)(local_88 + 0xb8), plVar19 != (longlong *)0x0))
    {
      lVar14 = *plVar19;
      pcVar2 = *(code **)(lVar14 + 0x108);
      if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
        cVar7 = (*pcVar2)(plVar19);
        iVar8 = 0;
        if (cVar7 == '\0') goto LAB_1437fd49b;
        lVar14 = *plVar19;
      }
      pcVar2 = *(code **)(lVar14 + 0x110);
      if (pcVar2 == (code *)&LAB_144783426) {
        ppuVar16 = &PTR_PTR_14c763408;
      }
      else if (pcVar2 == (code *)&LAB_144783432) {
        ppuVar16 = &PTR_PTR_14c75f798;
      }
      else {
        ppuVar16 = (undefined **)(*pcVar2)(plVar19);
      }
      iVar8 = FUN_144aff48c(ppuVar16);
    }
LAB_1437fd49b:
    local_70 = *(longlong *)(lVar12 + 0x818);
    local_80 = *(longlong *)(lVar12 + 0x820);
    if ((local_80 == 0) || (plVar19 = *(longlong **)(local_80 + 0xb8), plVar19 == (longlong *)0x0))
    {
      iVar9 = 0;
    }
    else {
      lVar14 = *plVar19;
      pcVar2 = *(code **)(lVar14 + 0x108);
      if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
        cVar7 = (*pcVar2)(plVar19);
        iVar9 = 0;
        if (cVar7 == '\0') goto LAB_1437fd51d;
        lVar14 = *plVar19;
      }
      pcVar2 = *(code **)(lVar14 + 0x110);
      if (pcVar2 == (code *)&LAB_144783426) {
        ppuVar16 = &PTR_PTR_14c763408;
      }
      else if (pcVar2 == (code *)&LAB_144783432) {
        ppuVar16 = &PTR_PTR_14c75f798;
      }
      else {
        ppuVar16 = (undefined **)(*pcVar2)(plVar19);
      }
      iVar9 = FUN_144aff48c(ppuVar16);
    }
LAB_1437fd51d:
    if ((iVar9 == iVar8) && (local_70 == local_78)) {
      if (local_80 == local_88) {
LAB_1437fd688:
        if (*(char *)(lVar12 + 0x830) == param_4) goto LAB_1437fd2b0;
      }
      else if ((local_88 != 0) && (local_80 != 0)) {
        iVar8 = *(int *)(local_88 + 0x38);
        iVar9 = *(int *)(local_80 + 0x38);
        if (((iVar8 <= iVar9) &&
            (*(longlong *)(*(longlong *)(local_80 + 0x30) + (longlong)iVar8 * 8) == local_88 + 0x30)
            ) || ((iVar9 <= iVar8 &&
                  (*(longlong *)(*(longlong *)(local_88 + 0x30) + (longlong)iVar9 * 8) ==
                   local_80 + 0x30)))) goto LAB_1437fd688;
      }
    }
    FUN_147e321ae(lVar12 + 0x818,&local_68);
    *(char *)(lVar12 + 0x830) = param_4;
    uVar3 = *(ulonglong *)(lVar12 + 0x28);
    if (uVar3 < 0xffffffff00000000) {
      plVar19 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar19 = (longlong *)0x0;
      }
      (**(code **)(*plVar19 + 0x58))(plVar19,lVar12,uVar3,0x19);
    }
    else {
      uVar20 = (uint)uVar3;
      if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c998088)) {
        puVar17 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar17 = DAT_14c998080;
        }
        if ((*(uint *)(puVar17 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar20 & 0x1f) & 1) != 0) {
          lVar12 = DAT_14c998060 + (ulonglong)(uVar20 & 0x7fffffff) * 0x68;
          puVar18 = *(uint **)(lVar12 + 0x18);
          if (*(uint **)(lVar12 + 0x18) == (uint *)0x0) {
            puVar18 = (uint *)(lVar12 + 8);
          }
          *puVar18 = *puVar18 | 0x2000000;
          *(byte *)(lVar12 + 0x60) = *(byte *)(lVar12 + 0x60) | 1;
        }
      }
    }
  }
LAB_1437fd2b0:
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar8 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar8 != 2)) {
    if (iVar8 != 1) goto LAB_1437fd2e8;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_1437fd2e8;
  }
  plVar19 = (longlong *)param_1[0x2a6];
  param_1[0x2a5] = 0;
  param_1[0x2a6] = 0;
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar19 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar19 + 0x10))();
    }
  }
LAB_1437fd2e8:
  cVar6 = '\0';
  cVar7 = '\0';
  if (param_2 != 0) {
    cVar7 = *(char *)(param_2 + 0x56);
  }
  if (!bVar4) {
    cVar6 = *(char *)(param_3 + 0x56);
  }
  if (cVar6 != cVar7) {
    FUN_1409e8b8e(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437fd7c5 FUN_1437fd7c5 body=49 status=ok
// SIG undefined FUN_1437fd7c5(void)

void FUN_1437fd7c5(void)

{
  FUN_140d4abe5(DAT_14cb1cce8,DAT_14cb1ccf0);
  if (DAT_14cb1cce8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437fd7f6 FUN_1437fd7f6 body=1872 status=ok
// SIG undefined FUN_1437fd7f6(void)

longlong * FUN_1437fd7f6(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  byte bVar19;
  undefined8 uVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  longlong *plVar25;
  longlong lVar26;
  int iVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auStack_228 [47];
  undefined1 local_1f9;
  undefined8 local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  int local_1dc;
  longlong local_1d8;
  double local_1d0;
  longlong local_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  longlong local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  longlong lStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1406a930a(param_2,&local_178);
  iVar1 = *(int *)(param_2 + 0x620);
  iVar2 = *(int *)(param_2 + 0x624);
  iVar27 = *(int *)(param_2 + 0x628);
  if (((iVar2 == 0 && iVar1 == 0) && iVar27 == 0) && *(int *)(param_2 + 0x62c) == 0) {
    uVar14 = 0;
    goto LAB_1437fd8be;
  }
  dVar7 = local_148 + local_148;
  dVar4 = local_158 + local_158;
  dVar32 = dStack_150 + dStack_150;
  local_188 = local_158;
  dStack_180 = dStack_150;
  local_1b8 = local_108;
  dStack_1b0 = dStack_100;
  auVar30._0_8_ = dStack_110 * (dVar32 * local_158 - dVar7 * dStack_140);
  auVar30._8_8_ = local_108 * (dVar7 * dStack_150 - dVar4 * dStack_140);
  local_198 = local_148;
  dStack_190 = dStack_140;
  dVar28 = (local_178 - local_178) * 0.5;
  dVar29 = (dStack_170 - dStack_170) * 0.5;
  dVar11 = (local_168 - local_168) * 0.5;
  dVar33 = (local_178 + local_178) * 0.5;
  dVar6 = (dStack_170 + dStack_170) * 0.5;
  local_1c0 = local_168;
  dVar5 = (local_168 + local_168) * 0.5;
  auVar34._0_8_ = (dVar32 * dStack_140 + local_158 * dVar7) * local_108;
  auVar34._8_8_ = (dVar4 * dStack_140 + local_158 * dVar4) * dStack_100;
  auVar34 = blendpd(auVar34,auVar30,2);
  dVar8 = (1.0 - (dVar7 * local_148 + dStack_150 * dVar32)) * local_118;
  dVar9 = (1.0 - (dVar7 * local_148 + local_158 * dVar4)) * dStack_110;
  auVar31._8_4_ = SUB84(dVar9,0);
  auVar31._0_8_ = dVar8;
  auVar31._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar31 = blendpd(auVar30,auVar31,2);
  dVar9 = (dVar7 * dStack_140 + dVar32 * local_158) * local_118;
  dVar3 = (dVar4 * dStack_140 + dVar7 * dStack_150) * dStack_110;
  local_1a8 = local_118;
  uStack_1a0 = dStack_110;
  local_118 = (local_158 * dVar7 - dVar32 * dStack_140) * local_118;
  dVar7 = ABS(dVar5 * auVar34._0_8_) + ABS(auVar31._0_8_ * dVar6) + ABS(dVar33 * dVar8);
  dVar10 = ABS(dVar5 * auVar34._8_8_) + ABS(auVar31._8_8_ * dVar6) + ABS(dVar33 * dVar9);
  dVar32 = (1.0 - (local_158 * dVar4 + dStack_150 * dVar32)) * local_108;
  local_1d0 = dStack_170;
  local_1c8 = local_160;
  dVar33 = ABS(dVar32 * dVar5) + ABS(dVar3 * dVar6) + ABS(local_118 * dVar33);
  dVar4 = dVar11 * auVar34._0_8_ + dVar29 * auVar31._0_8_ + dVar28 * dVar8 + local_138;
  dVar5 = dVar11 * auVar34._8_8_ + dVar29 * auVar31._8_8_ + dVar28 * dVar9 + dStack_130;
  dVar9 = dVar11 * dVar32 + dVar29 * dVar3 + dVar28 * local_118 + local_128;
  local_1dc = *(int *)(param_2 + 0x62c);
  iVar15 = FUN_147e41c4c(param_2);
  local_1f9 = iVar15 == 2;
  if (((param_2 == 0) || (*(longlong *)(param_2 + 0xa8) == 0)) ||
     (lVar18 = *(longlong *)(*(longlong *)(param_2 + 0xa8) + 0x1c8), lVar18 == 0)) {
    lVar26 = 0;
  }
  else {
    do {
      lVar26 = lVar18;
      lVar18 = *(longlong *)(lVar26 + 0x120);
    } while (*(longlong *)(lVar26 + 0x120) != 0);
  }
  dVar3 = dVar5 - dVar10;
  dVar5 = dVar5 + dVar10;
  local_1d8 = FUN_147e3b8b6(param_2);
  lVar18 = *(longlong *)(param_2 + 0xa8);
  if (lVar18 == 0) {
    uVar24 = 0;
    uVar20 = 0;
    goto LAB_1437fdd95;
  }
  lVar17 = FUN_140cee6b8();
  if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x38) < *(int *)(lVar17 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8)
      != lVar17 + 0x30)) {
    lVar18 = *(longlong *)(param_2 + 0xa8);
    uVar24 = 0;
    uVar20 = 0;
    if (lVar18 != 0) {
      lVar17 = FUN_145a743fa();
      uVar24 = 0;
      uVar20 = 0;
      if (*(int *)(lVar17 + 0x38) <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) {
        uVar24 = 0;
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar17 + 0x38) * 8) == lVar17 + 0x30) {
          uVar20 = CONCAT71((int7)((ulonglong)lVar18 >> 8),*(undefined1 *)(lVar18 + 0x390));
          if (param_2 == 0) {
LAB_1437fdea0:
            lVar17 = 0;
          }
          else {
            lVar18 = FUN_140f2f736();
            if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar18 + 0x38)) ||
               (lVar17 = param_2,
               *(longlong *)
                (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar18 + 0x38) * 8) != lVar18 + 0x30)) goto LAB_1437fdea0;
          }
          uVar24 = 0;
          local_1f8 = uVar20;
          if ((longlong)*(int *)(lVar17 + 0x660) != 0) {
            plVar21 = *(longlong **)(lVar17 + 0x658);
            local_1f0 = plVar21 + *(int *)(lVar17 + 0x660);
            plVar25 = (longlong *)0x0;
            do {
              lVar18 = *plVar21;
              uVar24 = 0;
              if (lVar18 != 0) {
                local_1e8 = plVar25;
                lVar17 = FUN_14477bcf0();
                if ((longlong)*(int *)(lVar17 + 0xc0) != 0) {
                  iVar15 = 0x15;
                  lVar23 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar17 + 0xb8) + lVar23) == lVar18) {
                      if ((iVar15 != 0x14) &&
                         (uVar24 = 1 << ((byte)iVar15 & 0x1f), plVar25 = local_1e8, iVar15 != -1))
                      goto LAB_1437fdf34;
                      break;
                    }
                    iVar15 = iVar15 + 1;
                    lVar23 = lVar23 + 8;
                  } while ((longlong)*(int *)(lVar17 + 0xc0) * 8 != lVar23);
                }
                uVar24 = 0x80000000;
                plVar25 = local_1e8;
              }
LAB_1437fdf34:
              uVar24 = (uint)plVar25 | uVar24;
              plVar25 = (longlong *)(ulonglong)uVar24;
              plVar21 = plVar21 + 1;
              uVar20 = local_1f8;
            } while (plVar21 != local_1f0);
          }
        }
        else {
          uVar20 = 0;
        }
      }
    }
  }
  else {
    uVar20 = CONCAT71((int7)((ulonglong)lVar18 >> 8),*(undefined1 *)(lVar18 + 0x390));
    if (param_2 == 0) {
LAB_1437fdd07:
      lVar17 = 0;
    }
    else {
      lVar18 = FUN_140c87682();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar18 + 0x38)) ||
         (lVar17 = param_2,
         *(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar18 + 0x38) * 8) != lVar18 + 0x30)) goto LAB_1437fdd07;
    }
    local_1f8 = uVar20;
    if ((longlong)*(int *)(lVar17 + 0x640) == 0) {
      uVar24 = 0;
    }
    else {
      local_1f0 = (longlong *)CONCAT44(local_1f0._4_4_,iVar27);
      plVar21 = *(longlong **)(lVar17 + 0x638);
      local_1e8 = plVar21 + *(int *)(lVar17 + 0x640);
      uVar24 = 0;
      do {
        lVar18 = *plVar21;
        uVar16 = 0;
        if (lVar18 != 0) {
          lVar17 = FUN_14477bcf0();
          bVar19 = 0xff;
          if ((longlong)*(int *)(lVar17 + 0x40) != 0) {
            lVar23 = (longlong)*(int *)(lVar17 + 0x40) << 3;
            lVar22 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar17 + 0x38) + lVar22 * 8) == lVar18) {
                bVar19 = (byte)lVar22;
                break;
              }
              lVar22 = lVar22 + 1;
              lVar23 = lVar23 + -8;
            } while (lVar23 != 0);
          }
          uVar16 = 1 << (bVar19 & 0x1f);
        }
        uVar24 = uVar24 | uVar16;
        plVar21 = plVar21 + 1;
      } while (plVar21 != local_1e8);
      uVar20 = local_1f8;
      iVar27 = (int)local_1f0;
    }
  }
LAB_1437fdd95:
  *param_1 = param_2;
  param_1[2] = (longlong)local_178;
  param_1[3] = (longlong)local_1d0;
  param_1[4] = (longlong)local_1c0;
  param_1[5] = local_1c8;
  param_1[6] = (longlong)local_188;
  param_1[7] = (longlong)dStack_180;
  param_1[8] = (longlong)local_198;
  param_1[9] = (longlong)dStack_190;
  param_1[10] = (longlong)local_138;
  param_1[0xb] = (longlong)dStack_130;
  param_1[0xc] = (longlong)local_128;
  param_1[0xd] = lStack_120;
  *(undefined4 *)(param_1 + 0xe) = (undefined4)local_1a8;
  *(undefined4 *)((longlong)param_1 + 0x74) = local_1a8._4_4_;
  *(undefined4 *)(param_1 + 0xf) = (undefined4)uStack_1a0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uStack_1a0._4_4_;
  param_1[0x10] = (longlong)local_108;
  param_1[0x11] = (longlong)dStack_100;
  auVar13._8_4_ = SUB84(dVar3,0);
  auVar13._0_8_ = dVar4 - dVar7;
  auVar13._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x12) = auVar13;
  param_1[0x14] = (longlong)(dVar9 - dVar33);
  auVar12._8_4_ = SUB84(dVar5,0);
  auVar12._0_8_ = dVar4 + dVar7;
  auVar12._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x15) = auVar12;
  param_1[0x17] = (longlong)(dVar9 + dVar33);
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(int *)(param_1 + 0x19) = iVar1;
  *(int *)((longlong)param_1 + 0xcc) = iVar2;
  *(int *)(param_1 + 0x1a) = iVar27;
  *(int *)((longlong)param_1 + 0xd4) = local_1dc;
  param_1[0x1b] = lVar26;
  param_1[0x1c] = local_1d8;
  *(uint *)(param_1 + 0x1d) = uVar24;
  *(undefined1 *)((longlong)param_1 + 0xec) = local_1f9;
  *(char *)((longlong)param_1 + 0xed) = (char)uVar20;
  uVar14 = 1;
LAB_1437fd8be:
  *(undefined1 *)(param_1 + 0x1e) = uVar14;
  if ((local_f0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1437fdf47 FUN_1437fdf47 body=83 status=ok
// SIG undefined FUN_1437fdf47(void)

int FUN_1437fdf47(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 == 0) {
    iVar1 = -0x80000000;
  }
  else {
    lVar2 = FUN_14477bcf0();
    bVar3 = 0xff;
    if ((longlong)*(int *)(lVar2 + 0x40) != 0) {
      lVar4 = (longlong)*(int *)(lVar2 + 0x40) << 3;
      lVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar2 + 0x38) + lVar5 * 8) == param_1) {
          bVar3 = (byte)lVar5;
          break;
        }
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    iVar1 = 1 << (bVar3 & 0x1f);
  }
  return iVar1;
}



// FUNCTION 1437fdf9a FUN_1437fdf9a body=627 status=ok
// SIG undefined FUN_1437fdf9a(void)

void * FUN_1437fdf9a(void *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_268 [32];
  undefined4 local_248;
  uint uStack_244;
  undefined4 uStack_240;
  uint uStack_23c;
  ulonglong local_238;
  undefined4 local_230;
  uint uStack_22c;
  undefined4 uStack_228;
  uint uStack_224;
  ulonglong local_220;
  undefined1 local_218;
  undefined8 local_208 [12];
  undefined1 local_1a8 [96];
  uint local_148;
  undefined1 local_138 [16];
  undefined4 local_128;
  uint uStack_124;
  undefined4 uStack_120;
  uint uStack_11c;
  ulonglong local_118;
  undefined8 local_108 [12];
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  longlong local_58;
  uint local_50;
  char local_4b;
  char local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_1437fd7f6(local_138,param_3);
  if (((((local_48 == '\x01') && ((*(uint *)(param_2 + 0xe8) & local_50) != 0)) &&
       (*(double *)(param_2 + 0x90) <= local_90)) &&
      ((local_a8 < *(double *)(param_2 + 0xa8) || local_a8 == *(double *)(param_2 + 0xa8) &&
       (*(double *)(param_2 + 0x98) <= local_88)))) &&
     ((local_a0 < *(double *)(param_2 + 0xb0) || local_a0 == *(double *)(param_2 + 0xb0) &&
      ((*(double *)(param_2 + 0xa0) <= local_80 &&
       (local_98 < *(double *)(param_2 + 0xb8) || local_98 == *(double *)(param_2 + 0xb8))))))) {
    lVar2 = *(longlong *)(param_2 + 0xe0);
    if (lVar2 == 0 || lVar2 == local_58) {
      if (*(char *)(param_2 + 0xec) == '\x01') {
        if (param_3 != 0) {
          do {
            lVar4 = param_3;
            param_3 = *(longlong *)(lVar4 + 0x120);
          } while (param_3 != 0);
          if (lVar4 == *(longlong *)(param_2 + 0xd8)) goto LAB_1437fe0d6;
        }
      }
      else {
LAB_1437fe0d6:
        if (lVar2 == 0 && local_58 != 0) {
LAB_1437fe153:
          uStack_244 = uStack_124 ^ 0x80000000;
          uStack_23c = uStack_11c ^ 0x80000000;
          local_248 = local_128;
          uStack_240 = uStack_120;
          local_238 = local_118 ^ 0x8000000000000000;
          local_230 = local_128;
          uStack_22c = uStack_124;
          uStack_228 = uStack_120;
          uStack_224 = uStack_11c;
          local_220 = local_118;
          local_218 = 1;
          puVar3 = local_108;
          puVar5 = local_208;
          for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar5 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar5 = puVar5 + 1;
          }
          FUN_147e3ee12(&local_128,local_1a8);
          local_148 = local_50;
          memcpy(param_1,&local_248,0x110);
          *(undefined1 *)((longlong)param_1 + 0x110) = 1;
          goto LAB_1437fe1e3;
        }
        cVar1 = *(char *)(param_2 + 0xed);
        if (cVar1 == local_4b) {
          if (cVar1 == '\0') {
            if (local_70 < *(uint *)(param_2 + 200)) goto LAB_1437fe153;
            if (local_70 == *(uint *)(param_2 + 200)) {
              if (local_6c < *(uint *)(param_2 + 0xcc)) goto LAB_1437fe153;
              if (local_6c == *(uint *)(param_2 + 0xcc)) {
                if ((local_68 < *(uint *)(param_2 + 0xd0)) ||
                   ((local_68 == *(uint *)(param_2 + 0xd0) && (local_64 < *(uint *)(param_2 + 0xd4))
                    ))) goto LAB_1437fe153;
              }
            }
          }
        }
        else if (cVar1 != '\0') goto LAB_1437fe153;
      }
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x110) = 0;
LAB_1437fe1e3:
  if ((local_30 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437fe20e FUN_1437fe20e body=738 status=ok
// SIG undefined FUN_1437fe20e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1437fe20e(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_2d8 [32];
  longlong local_2b8;
  longlong local_2b0;
  longlong *local_2a8;
  undefined1 local_2a0 [8];
  longlong *local_298;
  longlong local_290;
  longlong *local_288;
  longlong *local_280;
  longlong local_278;
  longlong local_268 [34];
  char local_158;
  undefined1 local_148 [240];
  char local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1437fd7f6(local_148);
  if (local_58 == '\x01') {
    local_268[0] = *(longlong *)(param_2 + 0xb0);
    if (local_268[0] == 0) {
      local_268[0] = FUN_1448abda6(param_2);
    }
    FUN_1438026c2(local_2a0,&DAT_14cb1cfb0);
    local_2b0 = local_290;
    LOCK();
    *(int *)(local_290 + 0x38) = *(int *)(local_290 + 0x38) + 1;
    UNLOCK();
    local_2a8 = local_288;
    local_2b8 = local_278;
    LOCK();
    *(int *)(local_278 + 0x38) = *(int *)(local_278 + 0x38) + 1;
    UNLOCK();
    plVar4 = local_298;
LAB_1437fe2b7:
    if (plVar4 != local_280) {
      lVar3 = plVar4[2];
      if (lVar3 != param_2) {
        iVar1 = *(int *)(lVar3 + 0x640);
        if ((longlong)iVar1 != 0) {
          lVar5 = *(longlong *)(lVar3 + 0x638);
          lVar6 = 0;
          do {
            if (*(longlong *)(lVar5 + lVar6) != 0) {
              FUN_14477bcf0();
            }
            lVar6 = lVar6 + 8;
          } while ((longlong)iVar1 * 8 != lVar6);
        }
        FUN_1437fdf9a(local_268,local_148,lVar3);
        if (local_158 != '\0') {
          iVar1 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
            FUN_147e45492(param_1,iVar1);
          }
          memcpy((void *)((longlong)iVar1 * 0x110 + *param_1),local_268,0x110);
        }
      }
      plVar7 = (longlong *)*plVar4;
      if (plVar7 == (longlong *)0x0) {
LAB_1437fe48d:
        plVar4 = (longlong *)0x0;
      }
      else {
        do {
          lVar3 = plVar7[2];
          if ((lVar3 != 0) && ((*(uint *)(lVar3 + 8) & 0x40018000) == 0)) {
            uVar2 = *(uint *)(lVar3 + 0xc);
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar5 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
              if ((*(uint *)(lVar5 + 8 + (ulonglong)(uVar2 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
                lVar5 = lVar5 + (ulonglong)(uVar2 & 0xffff) * 0x18;
LAB_1437fe39e:
                plVar4 = plVar7;
                if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) goto LAB_1437fe46b;
              }
            }
            else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
              lVar5 = 0;
              goto LAB_1437fe39e;
            }
          }
          plVar7 = (longlong *)*plVar7;
          plVar4 = (longlong *)0x0;
        } while (plVar7 != (longlong *)0x0);
      }
      goto LAB_1437fe2b7;
    }
    LOCK();
    *(int *)(local_2b8 + 0x38) = *(int *)(local_2b8 + 0x38) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_2b0 + 0x38) = *(int *)(local_2b0 + 0x38) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_278 + 0x38) = *(int *)(local_278 + 0x38) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_290 + 0x38) = *(int *)(local_290 + 0x38) + -1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
LAB_1437fe46b:
  lVar3 = *(longlong *)(lVar3 + 0xb0);
  if (lVar3 == 0) {
    lVar3 = FUN_1448abda6();
  }
  if (lVar3 != *local_2a8) {
    plVar7 = (longlong *)*plVar4;
    if (plVar7 != (longlong *)0x0) {
      do {
        lVar3 = plVar7[2];
        if ((lVar3 != 0) && ((*(uint *)(lVar3 + 8) & 0x40018000) == 0)) {
          uVar2 = *(uint *)(lVar3 + 0xc);
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar5 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            if ((*(uint *)(lVar5 + 8 + (ulonglong)(uVar2 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
              lVar5 = lVar5 + (ulonglong)(uVar2 & 0xffff) * 0x18;
LAB_1437fe431:
              plVar4 = plVar7;
              if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) goto LAB_1437fe46b;
            }
          }
          else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
            lVar5 = 0;
            goto LAB_1437fe431;
          }
        }
        plVar7 = (longlong *)*plVar7;
        plVar4 = (longlong *)0x0;
        if (plVar7 == (longlong *)0x0) goto LAB_1437fe2b7;
      } while( true );
    }
    goto LAB_1437fe48d;
  }
  goto LAB_1437fe2b7;
}



// FUNCTION 1437fe4f1 FUN_1437fe4f1 body=69 status=ok
// SIG undefined FUN_1437fe4f1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437fe4f1(void)

{
  _DAT_14cb1cd00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437fe533. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1cd08,1);
  return;
}



// FUNCTION 1437fe536 FUN_1437fe536 body=30 status=ok
// SIG undefined FUN_1437fe536(void)

void FUN_1437fe536(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  *(undefined4 *)((longlong)param_1 + 9) = 0x1010101;
  *(double *)(param_1 + 8) = (double)param_4;
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



// FUNCTION 1437fe554 FUN_1437fe554 body=99 status=ok
// SIG undefined FUN_1437fe554(void)

void FUN_1437fe554(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  if ((((plVar2 != (longlong *)0x0) && (*(int *)(param_1 + 0x34) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x34))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001437fe5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_1 + 0x40);
      return;
    }
  }
  return;
}



// FUNCTION 1437fe5b8 FUN_1437fe5b8 body=509 status=ok
// SIG undefined FUN_1437fe5b8(void)

undefined8 * FUN_1437fe5b8(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  uVar6 = *(undefined4 *)(param_2 + 2);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar8 = *(undefined4 *)(param_2 + 3);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar10 = *(undefined4 *)(param_2 + 4);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar12 = *(undefined4 *)(param_2 + 5);
  uVar13 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar14 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar15 = *(undefined4 *)(param_2 + 7);
  uVar16 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar14;
  *(undefined4 *)(param_1 + 7) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar16;
  *(undefined4 *)(param_1 + 4) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar11;
  *(undefined4 *)(param_1 + 5) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar13;
  *(undefined4 *)(param_1 + 2) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar7;
  *(undefined4 *)(param_1 + 3) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar9;
  uVar3 = param_2[8];
  lVar4 = param_2[9];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[9];
  param_1[8] = uVar3;
  param_1[9] = lVar4;
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
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  uVar6 = *(undefined4 *)(param_2 + 0xb);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar8 = *(undefined4 *)(param_2 + 0xc);
  uVar9 = *(undefined4 *)((longlong)param_2 + 100);
  uVar10 = *(undefined4 *)(param_2 + 0xd);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x6c);
  uVar12 = *(undefined4 *)(param_2 + 0xe);
  uVar13 = *(undefined4 *)((longlong)param_2 + 0x74);
  uVar14 = *(undefined4 *)((longlong)param_2 + 0x7c);
  uVar15 = *(undefined4 *)(param_2 + 0x10);
  uVar16 = *(undefined4 *)((longlong)param_2 + 0x84);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar14;
  *(undefined4 *)(param_1 + 0x10) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar16;
  *(undefined4 *)(param_1 + 0xd) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar11;
  *(undefined4 *)(param_1 + 0xe) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar13;
  *(undefined4 *)(param_1 + 0xb) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar7;
  *(undefined4 *)(param_1 + 0xc) = uVar8;
  *(undefined4 *)((longlong)param_1 + 100) = uVar9;
  uVar3 = param_2[0x11];
  lVar4 = param_2[0x12];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[0x12];
  param_1[0x11] = uVar3;
  param_1[0x12] = lVar4;
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
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  param_1[0x14] = param_2[0x14];
  uVar6 = *(undefined4 *)(param_2 + 0x15);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xac);
  uVar8 = *(undefined4 *)(param_2 + 0x16);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0xb4);
  uVar10 = *(undefined4 *)(param_2 + 0x17);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0xbc);
  uVar12 = *(undefined4 *)(param_2 + 0x18);
  uVar13 = *(undefined4 *)((longlong)param_2 + 0xc4);
  uVar14 = *(undefined4 *)((longlong)param_2 + 0xcc);
  uVar15 = *(undefined4 *)(param_2 + 0x1a);
  uVar16 = *(undefined4 *)((longlong)param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar14;
  *(undefined4 *)(param_1 + 0x1a) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar16;
  *(undefined4 *)(param_1 + 0x17) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar11;
  *(undefined4 *)(param_1 + 0x18) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar13;
  *(undefined4 *)(param_1 + 0x15) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar7;
  *(undefined4 *)(param_1 + 0x16) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar9;
  uVar3 = param_2[0x1b];
  lVar4 = param_2[0x1c];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[0x1c];
  param_1[0x1b] = uVar3;
  param_1[0x1c] = lVar4;
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
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
  param_1[0x1e] = param_2[0x1e];
  uVar3 = param_2[0x20];
  uVar17 = param_2[0x21];
  uVar18 = param_2[0x22];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = uVar3;
  param_1[0x21] = uVar17;
  param_1[0x22] = uVar18;
  return param_1;
}



// FUNCTION 1437fe7b6 FUN_1437fe7b6 body=89 status=ok
// SIG undefined FUN_1437fe7b6(void)

void FUN_1437fe7b6(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_1 + 0x38);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x58) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x50)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_1 + 0x50) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 1437fe810 FUN_1437fe810 body=1 status=ok
// SIG undefined FUN_1437fe810(void)

void FUN_1437fe810(void)

{
  return;
}



// FUNCTION 1437fe822 FUN_1437fe822 body=1616 status=ok
// SIG undefined FUN_1437fe822(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1437fe822(longlong param_1,float param_2,float param_3,longlong param_4)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 **ppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  undefined8 *puVar22;
  longlong lVar23;
  undefined8 *puVar24;
  longlong lVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  bool bVar28;
  float fVar29;
  undefined1 auStack_438 [32];
  undefined1 local_418 [128];
  undefined1 *local_398;
  undefined8 local_390;
  undefined1 *local_388;
  undefined1 *local_380;
  undefined4 local_378 [190];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_438;
  *(undefined4 *)(param_4 + 0x48) = 0;
  if (*(int *)(param_4 + 0x4c) < 0) {
    FUN_146bf53da(param_4,0);
  }
  lVar5 = FUN_14477bcf0();
  uVar4 = *(uint *)(lVar5 + 0xc0);
  if (((param_1 != 0 && uVar4 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
     (lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2b0), lVar20 != 0)) {
    local_398 = (undefined1 *)0x0;
    local_390 = 0x1000000000;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar4);
    }
    if ((uVar4 < 0x11) || (FUN_14380435a(local_418), 0 < *(int *)(lVar5 + 0xc0))) {
      lVar23 = 0;
      do {
        lVar25 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + lVar23 * 8);
        if (lVar25 != 0) {
          lVar6 = FUN_14477bcf0();
          if ((longlong)*(int *)(lVar6 + 0xc0) != 0) {
            iVar8 = 0x15;
            lVar14 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar6 + 0xb8) + lVar14) == lVar25) {
                if ((iVar8 != 0x14) && (uVar4 = 1 << ((byte)iVar8 & 0x1f), iVar8 != -1))
                goto LAB_1437fe97a;
                break;
              }
              iVar8 = iVar8 + 1;
              lVar14 = lVar14 + 8;
            } while ((longlong)*(int *)(lVar6 + 0xc0) * 8 != lVar14);
          }
          uVar4 = 0x80000000;
LAB_1437fe97a:
          if ((((*(uint *)(lVar20 + 0x648) & uVar4) != 0) &&
              (fVar29 = *(float *)(lVar25 + 0x38), param_2 < fVar29 + 1.0)) &&
             (param_3 < *(float *)(lVar25 + 0x30) + 1.0)) {
            lVar25 = (longlong)(int)local_390;
            uVar4 = (int)local_390 + 1;
            local_390 = CONCAT44(local_390._4_4_,uVar4);
            if (local_390._4_4_ < uVar4) {
              FUN_143804516(local_418);
            }
            puVar7 = local_398;
            if (local_398 == (undefined1 *)0x0) {
              puVar7 = local_418;
            }
            *(int *)(puVar7 + lVar25 * 8) = (int)lVar23 + 0x15;
            *(uint *)(puVar7 + lVar25 * 8 + 4) =
                 -(uint)(param_2 < fVar29) & (uint)(fVar29 - param_2);
          }
        }
        lVar23 = lVar23 + 1;
      } while (lVar23 < *(int *)(lVar5 + 0xc0));
    }
    iVar8 = (int)local_390;
    uVar12 = local_390 & 0xffffffff;
    if (uVar12 != 0) {
      if (1 < (int)local_390) {
        puVar7 = local_398;
        if (local_398 == (undefined1 *)0x0) {
          puVar7 = local_418;
        }
        memset(local_378,0,0x2f0);
        local_380 = puVar7 + uVar12 * 8 + -8;
        local_388 = puVar7;
        fVar29 = logf((float)iVar8);
        local_378[0] = (int)(longlong)(fVar29 + fVar29);
        ppuVar9 = &local_388;
        do {
          puVar10 = (undefined8 *)*ppuVar9;
          puVar11 = (undefined8 *)ppuVar9[1];
          iVar8 = *(int *)(ppuVar9 + 2);
          iVar21 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar10) >> 3);
          uVar4 = iVar21 + 1;
          puVar16 = puVar11;
          puVar26 = puVar10;
          if (iVar8 != 0) {
LAB_1437feab2:
            puVar13 = puVar10;
            if (8 < (int)uVar4) {
              uVar2 = puVar13[uVar4 >> 1];
              puVar13[uVar4 >> 1] = *puVar13;
              *puVar13 = uVar2;
              puVar22 = puVar16 + 1;
              puVar10 = puVar13;
              do {
                puVar3 = puVar10 + 1;
                puVar17 = puVar10 + 1;
                do {
                  puVar27 = puVar17;
                  puVar10 = puVar3;
                  if (puVar16 < puVar10) break;
                  puVar3 = puVar10 + 1;
                  puVar17 = puVar27 + 1;
                } while (*(float *)((longlong)puVar10 + 4) < *(float *)((longlong)puVar13 + 4) ||
                         *(float *)((longlong)puVar10 + 4) == *(float *)((longlong)puVar13 + 4));
                puVar3 = puVar22 + -2;
                do {
                  puVar17 = puVar22;
                  puVar24 = puVar3;
                  puVar22 = puVar17 + -1;
                  if (puVar22 <= puVar13) break;
                  puVar3 = puVar24 + -1;
                } while (*(float *)((longlong)puVar13 + 4) < *(float *)((longlong)puVar17 + -4) ||
                         *(float *)((longlong)puVar13 + 4) == *(float *)((longlong)puVar17 + -4));
                if (puVar22 < puVar10) goto LAB_1437feb3b;
                uVar2 = *puVar10;
                *puVar10 = *puVar22;
                *puVar22 = uVar2;
              } while( true );
            }
            for (; puVar10 = puVar13, puVar11 = puVar13, puVar13 < puVar16; puVar16 = puVar16 + -1)
            {
              while (puVar26 = puVar10, puVar10 = puVar11 + 1, puVar10 <= puVar16) {
                pfVar1 = (float *)((longlong)puVar11 + 0xc);
                puVar11 = puVar10;
                if (*pfVar1 < *(float *)((longlong)puVar26 + 4) ||
                    *pfVar1 == *(float *)((longlong)puVar26 + 4)) {
                  puVar10 = puVar26;
                }
              }
              uVar2 = *puVar26;
              *puVar26 = *puVar16;
              *puVar16 = uVar2;
            }
            goto LAB_1437fed64;
          }
LAB_1437febcf:
          if (uVar4 != 0) {
            iVar8 = (iVar21 - (iVar21 + -1 >> 0x1f)) + -1 >> 1;
            iVar21 = iVar8;
joined_r0x0001437febf6:
            do {
              iVar19 = iVar8 * 2 + 1;
              if (iVar19 < (int)uVar4) {
                iVar18 = iVar8 * 2 + 2;
                if ((iVar18 < (int)uVar4) &&
                   (fVar29 = *(float *)((longlong)puVar10 + (longlong)iVar19 * 8 + 4),
                   pfVar1 = (float *)((longlong)puVar10 + (longlong)iVar18 * 8 + 4),
                   fVar29 < *pfVar1 || fVar29 == *pfVar1)) {
                  iVar19 = iVar18;
                }
                lVar20 = (longlong)iVar8;
                lVar5 = (longlong)iVar19;
                fVar29 = *(float *)((longlong)puVar10 + lVar5 * 8 + 4);
                pfVar1 = (float *)((longlong)puVar10 + lVar20 * 8 + 4);
                if (*pfVar1 <= fVar29 && fVar29 != *pfVar1) {
                  uVar2 = puVar10[lVar20];
                  puVar10[lVar20] = puVar10[lVar5];
                  puVar10[lVar5] = uVar2;
                  iVar8 = iVar19;
                  goto joined_r0x0001437febf6;
                }
              }
              bVar28 = iVar21 != 0;
              iVar8 = iVar21 + -1;
              iVar21 = iVar8;
            } while (bVar28);
            if (1 < (int)uVar4) {
              uVar12 = (ulonglong)uVar4;
              uVar2 = *puVar10;
              *puVar10 = puVar10[uVar12 - 1];
              puVar10[uVar12 - 1] = uVar2;
              if (uVar4 != 2) {
                do {
                  uVar15 = uVar12 - 1;
                  iVar8 = 0;
                  iVar19 = 1;
                  iVar21 = 0;
                  do {
                    iVar8 = iVar8 + 2;
                    iVar18 = iVar19;
                    if (((longlong)iVar8 < (longlong)uVar15) &&
                       (fVar29 = *(float *)((longlong)puVar10 + (longlong)iVar19 * 8 + 4),
                       pfVar1 = (float *)((longlong)puVar10 + (longlong)iVar8 * 8 + 4),
                       fVar29 < *pfVar1 || fVar29 == *pfVar1)) {
                      iVar18 = iVar8;
                    }
                    lVar5 = (longlong)iVar21;
                    lVar20 = (longlong)iVar18;
                    fVar29 = *(float *)((longlong)puVar10 + lVar20 * 8 + 4);
                    pfVar1 = (float *)((longlong)puVar10 + lVar5 * 8 + 4);
                    if (fVar29 < *pfVar1 || fVar29 == *pfVar1) break;
                    uVar2 = puVar10[lVar5];
                    puVar10[lVar5] = puVar10[lVar20];
                    puVar10[lVar20] = uVar2;
                    iVar8 = iVar18 * 2;
                    iVar19 = iVar18 * 2 + 1;
                    iVar21 = iVar18;
                  } while ((longlong)iVar19 < (longlong)uVar15);
                  uVar2 = *puVar10;
                  *puVar10 = puVar10[uVar12 - 2];
                  puVar10[uVar12 - 2] = uVar2;
                  uVar12 = uVar15;
                } while (2 < uVar15);
              }
            }
          }
LAB_1437fed64:
          ppuVar9 = ppuVar9 + -3;
        } while (&local_388 <= ppuVar9);
        uVar12 = local_390 & 0xffffffff;
      }
      iVar8 = (int)uVar12;
      if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar12);
      }
      if (*(int *)(param_4 + 0x4c) < iVar8) {
        FUN_146bf53da(param_4,uVar12);
        iVar8 = (int)local_390;
      }
      puVar7 = local_398;
      if (local_398 == (undefined1 *)0x0) {
        puVar7 = local_418;
      }
      if (iVar8 != 0) {
        lVar5 = 0;
        do {
          iVar21 = *(int *)(param_4 + 0x48);
          *(uint *)(param_4 + 0x48) = iVar21 + 1U;
          if (*(uint *)(param_4 + 0x4c) < iVar21 + 1U) {
            FUN_1401fcbb6(param_4,iVar21);
          }
          lVar20 = *(longlong *)(param_4 + 0x40);
          if (*(longlong *)(param_4 + 0x40) == 0) {
            lVar20 = param_4;
          }
          *(undefined4 *)(lVar20 + (longlong)iVar21 * 4) = *(undefined4 *)(puVar7 + lVar5);
          lVar5 = lVar5 + 8;
        } while ((longlong)iVar8 * 8 != lVar5);
      }
    }
    if (local_398 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1437feb3b:
  uVar2 = *puVar13;
  *puVar13 = *puVar22;
  *puVar22 = uVar2;
  iVar8 = iVar8 + -1;
  puVar17 = puVar17 + -2;
  if ((longlong)puVar24 - (longlong)puVar26 < (longlong)puVar11 - (longlong)puVar27) {
    if (puVar10 < puVar16) {
      *ppuVar9 = (undefined1 *)puVar10;
      ppuVar9[1] = (undefined1 *)puVar16;
      *(int *)(ppuVar9 + 2) = iVar8;
      ppuVar9 = ppuVar9 + 3;
    }
    puVar10 = puVar13;
    puVar11 = puVar24;
    if (puVar22 <= puVar13 + 1) goto LAB_1437fed64;
  }
  else {
    if (puVar13 + 1 < puVar22) {
      *ppuVar9 = (undefined1 *)puVar13;
      ppuVar9[1] = (undefined1 *)puVar17;
      *(int *)(ppuVar9 + 2) = iVar8;
      ppuVar9 = ppuVar9 + 3;
    }
    puVar13 = puVar27;
    puVar17 = puVar16;
    puVar11 = puVar16;
    if (puVar16 <= puVar10) goto LAB_1437fed64;
  }
  iVar21 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar13) >> 3);
  uVar4 = iVar21 + 1;
  puVar16 = puVar17;
  puVar26 = puVar13;
  if (iVar8 == 0) goto LAB_1437febcf;
  goto LAB_1437feab2;
}



// FUNCTION 1437fee74 FUN_1437fee74 body=119 status=ok
// SIG undefined FUN_1437fee74(void)

void FUN_1437fee74(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  iVar2 = -1;
  if (param_1 != 0) {
    lVar1 = FUN_14477bcf0();
    if ((longlong)*(int *)(lVar1 + 0xc0) != 0) {
      iVar2 = 0x15;
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar1 + 0xb8) + lVar3) == param_1) {
          if (iVar2 != 0x14) goto LAB_1437feecb;
          break;
        }
        iVar2 = iVar2 + 1;
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(lVar1 + 0xc0) * 8 != lVar3);
    }
    iVar2 = -1;
  }
LAB_1437feecb:
  param_2[2] = iVar2;
  uVar4 = FUN_1402efefa(iVar2,0x42c80000);
  param_2[1] = uVar4;
  *param_2 = uVar4;
  return;
}



// FUNCTION 1437feef8 FUN_1437feef8 body=1871 status=ok
// SIG undefined FUN_1437feef8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1437feef8(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar3;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  int iVar29;
  uint uVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auStack_288 [32];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  double dVar2;
  double dVar4;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  auVar44 = _DAT_149934d80;
  auVar5 = *(undefined1 (*) [16])(param_1 + 0x280);
  dVar7 = auVar5._0_8_;
  dVar11 = auVar5._8_8_;
  auVar6 = *(undefined1 (*) [16])(param_1 + 0x290);
  dVar8 = auVar6._0_8_;
  auVar34 = *(undefined1 (*) [16])(param_1 + 0x6a0);
  dVar9 = auVar34._0_8_;
  dVar12 = auVar34._8_8_;
  auVar34 = minpd(auVar34,auVar5);
  auVar5 = *(undefined1 (*) [16])(param_1 + 0x6b0);
  dVar10 = auVar5._0_8_;
  auVar39 = minpd(auVar5,auVar6);
  auVar35._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
  auVar35._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
  iVar29 = movmskpd((int)local_c0,auVar35);
  auVar34._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
  auVar34._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
  uVar30 = movmskpd((int)param_2,auVar34);
  if ((uVar30 & 0x3fffffff) == 0 && iVar29 == 0) {
    dVar21 = *(double *)(param_1 + 0x660);
    dVar22 = *(double *)(param_1 + 0x668);
    dVar23 = *(double *)(param_1 + 0x670);
    dVar24 = *(double *)(param_1 + 0x678);
    dVar25 = *(double *)(param_1 + 0x240);
    dVar26 = *(double *)(param_1 + 0x248);
    dVar27 = *(double *)(param_1 + 0x250);
    dVar28 = *(double *)(param_1 + 600);
    dVar38 = *(double *)(param_1 + 600);
    dVar33 = *(double *)(param_1 + 600);
    dVar1 = *(double *)(param_1 + 0x240);
    dVar2 = *(double *)(param_1 + 0x240);
    dVar3 = *(double *)(param_1 + 0x248);
    dVar4 = *(double *)(param_1 + 0x248);
    dVar40 = *(double *)(param_1 + 0x250);
    dVar37 = *(double *)(param_1 + 0x250);
    dVar16 = *(double *)(param_1 + 0x680) * dVar7;
    dVar42 = *(double *)(param_1 + 0x688) * dVar11;
    dVar17 = *(double *)(param_1 + 0x690) * dVar8;
    dVar18 = *(double *)(param_1 + 0x698) * auVar6._8_8_;
    dVar13 = dVar42 * dVar25 - dVar26 * dVar16;
    dVar14 = dVar17 * dVar26 - dVar27 * dVar42;
    dVar19 = dVar16 * dVar27 - dVar25 * dVar17;
    dVar20 = dVar18 * dVar28 - dVar28 * dVar18;
    dVar14 = dVar14 + dVar14;
    dVar19 = dVar19 + dVar19;
    dVar13 = dVar13 + dVar13;
    dVar20 = dVar20 + dVar20;
    dVar41 = *(double *)(param_1 + 0x260);
    dVar15 = (dVar14 * dVar27 - dVar13 * dVar25) + dVar33 * dVar19 + dVar42 +
             *(double *)(param_1 + 0x268);
    dVar42 = *(double *)(param_1 + 0x270);
    dVar43 = *(double *)(param_1 + 0x278);
    *param_2 = dVar22 * dVar40 * -1.0 + dVar23 * dVar3 + dVar24 * dVar1 * 1.0 + dVar21 * dVar38;
    param_2[1] = dVar21 * dVar37 * 1.0 + dVar24 * dVar4 + dVar23 * dVar2 * -1.0 + dVar22 * dVar33;
    param_2[2] = dVar24 * dVar40 * 1.0 + ((dVar1 * dVar22 * 1.0 + dVar23 * dVar38) - dVar21 * dVar3)
    ;
    param_2[3] = dVar23 * dVar37 * -1.0 +
                 ((dVar2 * dVar21 * -1.0 + dVar24 * dVar33) - dVar22 * dVar4);
    auVar44._8_4_ = SUB84(dVar15,0);
    auVar44._0_8_ = (dVar13 * dVar26 - dVar27 * dVar19) + dVar38 * dVar14 + dVar16 + dVar41;
    auVar44._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 4) = auVar44;
    param_2[6] = (dVar19 * dVar25 - dVar26 * dVar14) + dVar38 * dVar13 + dVar17 + dVar42;
    param_2[7] = (dVar20 * dVar28 - dVar20 * dVar28) + dVar33 * dVar20 + dVar18 + dVar43;
  }
  else {
    dVar3 = *(double *)(param_1 + 0x240);
    dVar4 = *(double *)(param_1 + 0x248);
    dVar40 = *(double *)(param_1 + 0x250);
    dVar37 = dVar4 + dVar4;
    dVar41 = dVar40 + dVar40;
    dVar38 = dVar3 * (dVar3 + dVar3);
    local_178 = (1.0 - (dVar38 + dVar4 * dVar37)) * dVar8;
    dVar2 = *(double *)(param_1 + 0x240) * dVar41;
    dVar33 = *(double *)(param_1 + 600);
    dVar42 = dVar41 * dVar33;
    dVar43 = (dVar3 + dVar3) * *(double *)(param_1 + 600);
    dVar33 = dVar37 * dVar33;
    local_188 = (dVar33 + dVar2) * dVar8;
    dVar38 = (DAT_149934d80._8_8_ - (dVar40 * dVar41 + dVar38)) * dVar11;
    dVar1 = (dVar37 * dVar3 + dVar42) * dVar7;
    local_198 = (dVar41 * dVar4 + dVar43) * dVar11;
    dStack_180 = (dVar41 * dVar4 - dVar43) * dVar8;
    local_1b8 = (dVar2 - dVar33) * dVar7;
    local_1c8._8_4_ = SUB84(dVar1,0);
    local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar40 * dVar41 + dVar4 * dVar37)) * dVar7;
    local_1c8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar38,0);
    local_1a8._0_8_ = (dVar37 * dVar3 - dVar42) * dVar11;
    local_1a8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = *(undefined8 *)(param_1 + 0x260);
    uStack_160 = *(undefined8 *)(param_1 + 0x268);
    local_158 = *(undefined8 *)(param_1 + 0x270);
    uStack_150 = 0x3ff0000000000000;
    dVar2 = *(double *)(param_1 + 0x660);
    dVar3 = *(double *)(param_1 + 0x668);
    dVar4 = *(double *)(param_1 + 0x670);
    dVar40 = dVar3 + dVar3;
    dVar37 = dVar4 + dVar4;
    dVar38 = dVar2 * (dVar2 + dVar2);
    local_1f8 = (1.0 - (dVar38 + dVar3 * dVar40)) * dVar10;
    dVar1 = *(double *)(param_1 + 0x660) * dVar37;
    dVar33 = *(double *)(param_1 + 0x678);
    dVar41 = dVar37 * dVar33;
    dVar42 = (dVar2 + dVar2) * *(double *)(param_1 + 0x678);
    dVar33 = dVar40 * dVar33;
    local_208 = (dVar33 + dVar1) * dVar10;
    dStack_200 = (dVar37 * dVar3 - dVar42) * dVar10;
    local_248 = ((double)DAT_149934d80 - (dVar4 * dVar37 + dVar3 * dVar40)) * dVar9;
    dVar38 = (DAT_149934d80._8_8_ - (dVar4 * dVar37 + dVar38)) * dVar12;
    dStack_240 = (dVar40 * dVar2 + dVar41) * dVar9;
    local_218 = (dVar37 * dVar3 + dVar42) * dVar12;
    local_238 = (dVar1 - dVar33) * dVar9;
    uStack_230 = 0;
    local_228._8_4_ = SUB84(dVar38,0);
    local_228._0_8_ = (dVar40 * dVar2 - dVar41) * dVar12;
    local_228._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1e8 = *(undefined8 *)(param_1 + 0x680);
    uStack_1e0 = *(undefined8 *)(param_1 + 0x688);
    local_1d8 = *(undefined8 *)(param_1 + 0x690);
    uStack_1d0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar39._8_8_ = -(ulonglong)(0.0 <= dVar11 * dVar12);
    auVar39._0_8_ = -(ulonglong)(0.0 <= dVar7 * dVar9);
    auVar34 = blendvpd(_DAT_149936790,auVar44,auVar39);
    uVar31 = -(ulonglong)(0.0 <= dVar8 * dVar10);
    dVar33 = (double)(~uVar31 & 0xbff0000000000000 | uVar31 & 0x3ff0000000000000);
    dVar38 = auVar34._0_8_;
    local_138 = local_138 * dVar38;
    local_140 = local_140 * dVar38;
    local_148 = local_148 * dVar38;
    dVar38 = auVar34._8_8_;
    local_118 = local_118 * dVar38;
    local_120 = local_120 * dVar38;
    local_128 = dVar38 * local_128;
    local_f8 = local_f8 * dVar33;
    local_100 = local_100 * dVar33;
    local_108 = dVar33 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar33 = local_258 * local_258 + local_268 * local_268;
    dVar38 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar36._0_8_ = dVar33 + dVar38;
    auVar36._8_8_ = dVar33 + dVar38;
    auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
    auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
    auVar34 = sqrtpd(auVar36,auVar36);
    auVar44 = divpd(auVar44,auVar34);
    auVar45._0_8_ = auVar44._0_8_ * local_258;
    auVar45._8_8_ = auVar44._8_8_ * dStack_250;
    auVar34 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar45,auVar32);
    *param_2 = (double)((ulonglong)(local_268 * auVar44._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
    param_2[1] = (double)((ulonglong)(dStack_260 * auVar44._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
    *(undefined1 (*) [16])(param_2 + 2) = auVar34;
    param_2[4] = local_e8;
    param_2[5] = dStack_e0;
    param_2[6] = local_d8;
    param_2[7] = 0.0;
  }
  dVar33 = auVar5._8_8_ * auVar6._8_8_;
  auVar6._8_4_ = SUB84(dVar12 * dVar11,0);
  auVar6._0_8_ = dVar9 * dVar7;
  auVar6._12_4_ = (int)((ulonglong)(dVar12 * dVar11) >> 0x20);
  *(undefined1 (*) [16])(param_2 + 8) = auVar6;
  auVar5._8_4_ = SUB84(dVar33,0);
  auVar5._0_8_ = dVar10 * dVar8;
  auVar5._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 10) = auVar5;
  if ((local_c0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437ff648 FUN_1437ff648 body=2997 status=ok
// SIG undefined FUN_1437ff648(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1437ff648(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  double *pdVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  uint *puVar19;
  undefined8 uVar20;
  uint *puVar21;
  float fVar22;
  longlong lVar23;
  longlong lVar24;
  float fVar25;
  longlong *plVar26;
  longlong *plVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auStack_2c8 [32];
  float *local_2a8;
  undefined8 *local_2a0;
  int local_294;
  longlong *local_290;
  longlong *local_288;
  undefined8 local_280;
  longlong local_278;
  longlong local_270;
  undefined1 **local_268;
  undefined8 *local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  ulonglong local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined8 local_1f8;
  float fStack_1f0;
  float fStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined1 local_138 [16];
  undefined1 *local_128;
  undefined8 local_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined2 local_d8;
  undefined1 local_d6;
  undefined4 local_d4;
  ulonglong local_c0;
  
  uVar16 = _DAT_14c6dae78;
  uVar15 = _DAT_14c6dae70;
  uVar14 = uRam000000014c6dae68;
  uVar13 = _DAT_14c6dae60;
  uVar12 = uRam000000014c6dae58;
  uVar11 = _DAT_14c6dae50;
  uVar10 = uRam000000014c6dae48;
  uVar9 = _DAT_14c6dae40;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  uVar28 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    plVar1 = param_1 + 0x1b;
    local_248 = 0;
    local_240 = 0x8000000000000000;
    local_268 = &local_128;
    local_288 = param_1 + 0x11;
    local_260 = param_1 + 0x18;
    plVar27 = (longlong *)0x0;
    local_280 = param_2;
LAB_1437ff756:
    if ((int)uVar28 < *(int *)(param_1 + 0x1c)) {
      lVar17 = *plVar1;
      lVar23 = (ulonglong)uVar28 * 0x70;
      iVar3 = *(int *)(lVar17 + 0x54 + lVar23);
      if ((((((iVar3 == 0) || (uVar29 = *(uint *)(lVar17 + lVar23 + 0x50), (int)uVar29 < 0)) ||
            (DAT_14c9647dc <= (int)uVar29)) ||
           ((puVar18 = (undefined8 *)
                       ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8)),
            puVar18 == (undefined8 *)0x0 || (*(int *)(puVar18 + 2) != iVar3)))) ||
          ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)) ||
         (((iVar3 = *(int *)(lVar17 + 0x60 + lVar23), iVar3 == 0 ||
           (uVar29 = *(uint *)(lVar17 + lVar23 + 0x5c), (int)uVar29 < 0)) ||
          ((DAT_14c9647dc <= (int)uVar29 ||
           (((lVar24 = (ulonglong)((uVar29 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8), lVar24 == 0
             || (*(int *)(lVar24 + 0x10) != iVar3)) || ((*(uint *)(lVar24 + 8) & 0x10200000) != 0)))
           ))))) {
        FUN_141806ba4(plVar1,uVar28);
        FUN_141806c08(plVar1);
        goto LAB_1437ff824;
      }
      if ((*(uint *)(puVar18 + 1) & 0x10200000) == 0) {
        uVar20 = *puVar18;
      }
      else {
        uVar20 = 0;
      }
      local_270 = FUN_141805382(*param_1,uVar20,*(undefined4 *)(lVar17 + 0x68 + lVar23));
      uVar29 = uVar28;
      if (local_270 != 0) {
        lVar17 = *plVar1;
        iVar3 = *(int *)(lVar17 + 0x60 + lVar23);
        if ((iVar3 == 0) || (uVar4 = *(uint *)(lVar17 + lVar23 + 0x5c), (int)uVar4 < 0)) {
LAB_1437fff60:
          uVar20 = 0;
        }
        else {
          uVar20 = 0;
          if ((int)uVar4 < DAT_14c9647dc) {
            puVar18 = (undefined8 *)
                      ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
            if (((puVar18 == (undefined8 *)0x0) || (*(int *)(puVar18 + 2) != iVar3)) ||
               ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)) goto LAB_1437fff60;
            uVar20 = *puVar18;
          }
        }
        local_290 = plVar27;
        local_278 = FUN_141805382(*param_1,uVar20,*(undefined4 *)(lVar17 + 0x68 + lVar23));
        plVar27 = local_290;
        if (local_278 == 0) goto LAB_1437ff827;
        local_1e8 = uVar9;
        uStack_1e0 = uVar10;
        local_1d8 = uVar11;
        uStack_1d0 = uVar12;
        local_1c8 = uVar13;
        uStack_1c0 = uVar14;
        local_1b8 = uVar15;
        uStack_1b0 = uVar16;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_198 = uVar9;
        uStack_190 = uVar10;
        local_188 = uVar11;
        uStack_180 = uVar12;
        local_178 = uVar13;
        uStack_170 = uVar14;
        local_168 = uVar15;
        uStack_160 = uVar16;
        local_158 = 0;
        uStack_150 = 0;
        local_140 = 0x8000000400000000;
        local_128 = local_118;
        local_120 = 0x8000000400000000;
        local_108 = 0xbf800000bf800000;
        local_e8 = 0;
        uStack_e0 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_d8 = 3;
        local_d6 = 1;
        local_d4 = 0xffffffff;
        lVar17 = *plVar1;
        iVar3 = *(int *)(lVar17 + 0x58 + lVar23);
        pdVar6 = *(double **)(lVar17 + lVar23);
        iVar5 = *(int *)(lVar17 + 100 + lVar23);
        fStack_1f0 = (float)pdVar6[2] * 0.01;
        fStack_1ec = (float)pdVar6[2] * 0.01;
        local_1f8 = (float *)CONCAT44((float)pdVar6[1] * 0.01,(float)*pdVar6 * 0.01);
        local_208 = (float)pdVar6[3] * 0.01;
        fStack_204 = (float)pdVar6[4] * 0.01;
        fStack_200 = (float)pdVar6[5] * 0.01;
        fStack_1fc = (float)pdVar6[5] * 0.01;
        local_218 = (float)pdVar6[6] * 0.01;
        fStack_214 = (float)pdVar6[7] * 0.01;
        fStack_210 = (float)pdVar6[8] * 0.01;
        fStack_20c = (float)pdVar6[8] * 0.01;
        local_228 = (float)pdVar6[9] * 0.01;
        fStack_224 = (float)pdVar6[10] * 0.01;
        fStack_220 = (float)pdVar6[0xb] * 0.01;
        fStack_21c = (float)pdVar6[0xb] * 0.01;
        local_238 = 0;
        uStack_230 = 0x3f800000;
        local_2a0 = &local_238;
        local_2a8 = &local_228;
        local_148 = local_138;
        FUN_144c50130(&local_1e8,&local_1f8,&local_208,&local_218);
        local_d8 = CONCAT11(local_d8._1_1_,*(undefined1 *)(lVar17 + 0x18 + lVar23));
        local_d6 = 1;
        uVar29 = *(uint *)(lVar17 + 0x10 + lVar23);
        uVar4 = iVar3 << 6 | uVar29 | 0x80000000;
        if (0x1f < uVar29) {
          uVar4 = 0xffffffff;
        }
        iVar3 = (int)local_140 + 1;
        if ((int)(local_140._4_4_ & 0x7fffffff) <= (int)local_140) {
          FUN_1401f86b2(&local_148,&PTR_vftable_14c6e47a0,iVar3);
        }
        *(uint *)(local_148 + (longlong)(int)local_140 * 4) = uVar4;
        local_140 = CONCAT44(local_140._4_4_,iVar3);
        uVar29 = *(uint *)(lVar17 + lVar23 + 0x14);
        iVar3 = (int)local_120 + 1;
        if ((int)(local_120._4_4_ & 0x7fffffff) <= (int)local_120) {
          FUN_1401f86b2(local_268,&PTR_vftable_14c6e47a0,iVar3);
        }
        lVar24 = local_270;
        lVar17 = local_278;
        uVar4 = iVar5 << 6 | uVar29 | 0xc0000000;
        if (0x1f < uVar29) {
          uVar4 = 0xffffffff;
        }
        *(uint *)(local_128 + (longlong)(int)local_120 * 4) = uVar4;
        local_120 = CONCAT44(local_120._4_4_,iVar3);
        local_2a8._0_4_ = 0x3d4ccccd;
        FUN_144c502e0(&local_1e8,local_270,local_278,&local_248);
        local_2a8 = (float *)CONCAT44(local_2a8._4_4_,0x3d4ccccd);
        FUN_144c502e0(&local_1e8,lVar17,lVar24,&local_248);
        plVar27 = local_290;
        if ((int)local_240 != 0) {
          lVar17 = *plVar1 + lVar23;
          puVar19 = (uint *)(lVar17 + 0x50);
          iVar3 = *(int *)(lVar17 + 0x54);
          if ((iVar3 == 0) || (uVar29 = *puVar19, (int)uVar29 < 0)) {
LAB_143800004:
            lVar17 = 0;
          }
          else {
            lVar17 = 0;
            if ((int)uVar29 < DAT_14c9647dc) {
              plVar26 = (longlong *)
                        ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
              if (((plVar26 == (longlong *)0x0) || ((int)plVar26[2] != iVar3)) ||
                 ((*(uint *)(plVar26 + 1) & 0x10200000) != 0)) goto LAB_143800004;
              lVar17 = *plVar26;
            }
          }
          local_294 = *(int *)(lVar17 + 0x630);
          lVar23 = *plVar1 + lVar23;
          puVar21 = (uint *)(lVar23 + 0x5c);
          iVar3 = *(int *)(lVar23 + 0x60);
          if ((iVar3 == 0) || (uVar29 = *puVar21, (int)uVar29 < 0)) {
LAB_14380000c:
            lVar17 = 0;
          }
          else {
            lVar17 = 0;
            if ((int)uVar29 < DAT_14c9647dc) {
              plVar26 = (longlong *)
                        ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
              if (((plVar26 == (longlong *)0x0) || ((int)plVar26[2] != iVar3)) ||
                 ((*(uint *)(plVar26 + 1) & 0x10200000) != 0)) goto LAB_14380000c;
              lVar17 = *plVar26;
            }
          }
          iVar3 = *(int *)(lVar17 + 0x630);
          if (iVar3 < local_294) {
            puVar21 = puVar19;
          }
          if ((puVar21[1] == 0) || (uVar29 = *puVar21, (int)uVar29 < 0)) {
LAB_143800014:
            lVar17 = 0;
          }
          else {
            lVar17 = 0;
            if ((int)uVar29 < DAT_14c9647dc) {
              plVar26 = (longlong *)
                        ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
              if (((plVar26 == (longlong *)0x0) || (*(uint *)(plVar26 + 2) != puVar21[1])) ||
                 ((*(uint *)(plVar26 + 1) & 0x10200000) != 0)) goto LAB_143800014;
              lVar17 = *plVar26;
            }
          }
          local_218 = *(float *)(lVar17 + 0x630);
          if (*(int *)(param_1 + 0x12) != *(int *)((longlong)param_1 + 0xbc)) {
            puVar18 = (undefined8 *)param_1[0x19];
            if ((undefined8 *)param_1[0x19] == (undefined8 *)0x0) {
              puVar18 = local_260;
            }
            fVar22 = *(float *)((longlong)puVar18 +
                               (ulonglong)(*(int *)(param_1 + 0x1a) - 1U & (uint)local_218) * 4);
            if (fVar22 != -NAN) {
              lVar17 = *local_288;
              fVar25 = fVar22;
              do {
                if (*(float *)(lVar17 + (longlong)(int)fVar25 * 0x14) == local_218)
                goto LAB_1437ffe4a;
                fVar25 = *(float *)(lVar17 + (longlong)(int)fVar25 * 0x14 + 0xc);
              } while (fVar25 != -NAN);
            }
          }
          FUN_144c4ee90(local_280,&local_1f8);
          plVar26 = local_288;
          fVar22 = (float)local_1f8;
          if ((float)local_1f8 != -NAN) {
            local_1f8 = &local_218;
            FUN_14594106c(local_288,&local_208,&local_1f8);
            lVar17 = *plVar26;
            *(float *)(lVar17 + 8 + (longlong)(int)local_208 * 0x14) = fVar22;
            lVar23 = local_278;
            if (iVar3 < local_294) {
              lVar23 = local_270;
            }
            *(undefined4 *)(lVar17 + 4 + (longlong)(int)local_208 * 0x14) =
                 *(undefined4 *)(*(longlong *)(lVar23 + 0x20) + 0x17c);
LAB_1437fffcc:
            local_258 = local_248;
            local_250 = (longlong)(int)local_240 * 0x90 + local_248;
            FUN_144c4ef10(local_280,fVar22,&local_258);
            plVar27 = (longlong *)CONCAT71((int7)((ulonglong)plVar26 >> 8),1);
          }
          goto LAB_1437ffd96;
        }
        FUN_141806ba4(plVar1,uVar28);
        FUN_141806c08(plVar1);
        plVar27 = local_290;
        goto LAB_1437ffec7;
      }
      goto LAB_1437ff827;
    }
    goto LAB_143800096;
  }
  plVar27 = (longlong *)0x0;
LAB_14380018c:
  if ((local_c0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar27 & 0xffffff01;
  while (fVar22 = pfVar2[3], fVar22 != -NAN) {
LAB_1437ffe4a:
    pfVar2 = (float *)(lVar17 + (longlong)(int)fVar22 * 0x14);
    if (*pfVar2 == local_218) {
      if ((((ulonglong)(pfVar2 + 1) & 0xfffffffffffffffb) != 0) &&
         (fVar22 = pfVar2[2], plVar26 = local_290, fVar22 != -NAN)) goto LAB_1437fffcc;
      break;
    }
  }
LAB_1437ffd96:
  lVar17 = local_248;
  if ((longlong)(int)local_240 != 0) {
    lVar23 = (longlong)(int)local_240 * 0x90;
    do {
      *(undefined4 *)(lVar17 + -0x28 + lVar23) = 0;
      lVar24 = (longlong)*(int *)(lVar17 + -0x24 + lVar23);
      if ((-1 < lVar24) && (lVar7 = *(longlong *)(lVar17 + -0x30 + lVar23), lVar7 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0,lVar7,lVar24 << 2);
      }
      *(undefined8 *)(lVar17 + -0x30 + lVar23) = 0;
      *(undefined4 *)(lVar17 + -0x24 + lVar23) = 0x80000000;
      *(undefined4 *)(lVar17 + -0x48 + lVar23) = 0;
      lVar24 = (longlong)*(int *)(lVar17 + -0x44 + lVar23);
      if ((-1 < lVar24) && (lVar7 = *(longlong *)(lVar17 + -0x50 + lVar23), lVar7 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0,lVar7,lVar24 << 2);
      }
      *(undefined8 *)(lVar17 + -0x50 + lVar23) = 0;
      *(undefined4 *)(lVar17 + -0x44 + lVar23) = 0x80000000;
      lVar23 = lVar23 + -0x90;
    } while (lVar23 != 0);
  }
  local_240 = local_240 & 0xffffffff00000000;
  FUN_141806ba4(plVar1,uVar28);
  FUN_141806c08(plVar1);
LAB_1437ffec7:
  uVar8 = local_120 >> 0x20;
  local_120 = local_120 & 0xffffffff00000000;
  lVar17 = (longlong)(int)uVar8;
  if ((-1 < lVar17) && (local_128 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0,local_128,lVar17 << 2);
  }
  local_128 = (undefined1 *)0x0;
  local_120 = CONCAT44(0x80000000,(int)local_120);
  uVar8 = local_140 >> 0x20;
  local_140 = local_140 & 0xffffffff00000000;
  lVar17 = (longlong)(int)uVar8;
  if ((-1 < lVar17) && (local_148 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0,local_148,lVar17 << 2);
  }
LAB_1437ff824:
  uVar29 = uVar28 - 1;
LAB_1437ff827:
  uVar28 = uVar29 + 1;
  if ((int)uVar29 < -1) goto LAB_143800096;
  goto LAB_1437ff756;
LAB_143800096:
  lVar17 = local_248;
  if ((longlong)(int)local_240 != 0) {
    lVar23 = (longlong)(int)local_240 * 0x90;
    do {
      *(undefined4 *)(lVar17 + -0x28 + lVar23) = 0;
      lVar24 = (longlong)*(int *)(lVar17 + -0x24 + lVar23);
      if ((-1 < lVar24) && (lVar7 = *(longlong *)(lVar17 + -0x30 + lVar23), lVar7 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0,lVar7,lVar24 << 2);
      }
      *(undefined8 *)(lVar17 + -0x30 + lVar23) = 0;
      *(undefined4 *)(lVar17 + -0x24 + lVar23) = 0x80000000;
      *(undefined4 *)(lVar17 + -0x48 + lVar23) = 0;
      lVar24 = (longlong)*(int *)(lVar17 + -0x44 + lVar23);
      if ((-1 < lVar24) && (lVar7 = *(longlong *)(lVar17 + -0x50 + lVar23), lVar7 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0,lVar7,lVar24 << 2);
      }
      *(undefined8 *)(lVar17 + -0x50 + lVar23) = 0;
      *(undefined4 *)(lVar17 + -0x44 + lVar23) = 0x80000000;
      lVar23 = lVar23 + -0x90;
    } while (lVar23 != 0);
  }
  uVar8 = local_240 >> 0x20;
  local_240 = local_240 & 0xffffffff00000000;
  lVar17 = (longlong)(int)uVar8;
  if ((-1 < lVar17) && (local_248 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0,local_248,lVar17 * 0x90);
  }
  goto LAB_14380018c;
}



// FUNCTION 1438001fe FUN_1438001fe body=143 status=ok
// SIG undefined FUN_1438001fe(void)

undefined4 * FUN_1438001fe(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  lVar1 = param_2[0x39];
  if (lVar1 == 0) {
    puVar9 = &DAT_14c8464e0;
    uVar10 = DAT_14c8464f0;
  }
  else {
    puVar9 = (undefined8 *)(lVar1 + 0x260);
    uVar10 = *(undefined8 *)(lVar1 + 0x270);
  }
  uVar2 = *(undefined4 *)puVar9;
  uVar3 = *(undefined4 *)((longlong)puVar9 + 4);
  uVar4 = *(undefined4 *)(puVar9 + 1);
  uVar5 = *(undefined4 *)((longlong)puVar9 + 0xc);
  *(undefined8 *)(param_1 + 10) = DAT_14cb1c870;
  uVar8 = DAT_14cb1c868._4_4_;
  uVar7 = (undefined4)DAT_14cb1c868;
  uVar6 = DAT_14cb1c860._4_4_;
  param_1[6] = (undefined4)DAT_14cb1c860;
  param_1[7] = uVar6;
  param_1[8] = uVar7;
  param_1[9] = uVar8;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 4) = uVar10;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0xffffffff;
  (**(code **)(*param_2 + 0x528))(param_2,param_1 + 0x12,param_1 + 0x13);
  return param_1;
}



// FUNCTION 14380028d FUN_14380028d body=295 status=ok
// SIG undefined FUN_14380028d(void)

void FUN_14380028d(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  double dVar1;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  longlong lVar20;
  undefined1 (*pauVar21) [16];
  double dVar3;
  double dVar5;
  double dVar7;
  
  if (param_1[6][0] == '\0') {
    if (param_2 == param_1) {
      return;
    }
    pauVar21 = param_1;
    for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
      *(undefined8 *)*pauVar21 = *(undefined8 *)*param_2;
      param_2 = (undefined1 (*) [16])(*param_2 + 8);
      pauVar21 = (undefined1 (*) [16])(*pauVar21 + 8);
    }
  }
  else {
    dVar14 = *(double *)param_1[2];
    dVar15 = *(double *)(param_1[2] + 8);
    dVar1 = *(double *)param_2[3];
    dVar8 = *(double *)param_2[2];
    dVar10 = *(double *)(param_2[2] + 8);
    dVar9 = *(double *)param_1[3];
    dVar11 = *(double *)(param_1[3] + 8);
    dVar16 = *(double *)*param_2;
    dVar17 = *(double *)(*param_2 + 8);
    dVar18 = *(double *)param_2[1];
    dVar19 = *(double *)(param_2[1] + 8);
    dVar2 = *(double *)(param_1[1] + 8);
    dVar3 = *(double *)(param_1[1] + 8);
    dVar4 = *(double *)(*param_1 + 8);
    dVar5 = *(double *)(*param_1 + 8);
    dVar6 = *(double *)param_1[1];
    dVar7 = *(double *)param_1[1];
    dVar13 = dVar16 * dVar7 * 1.0 +
             dVar19 * dVar5 + *(double *)*param_1 * dVar18 * -1.0 + dVar3 * dVar17;
    auVar12._8_4_ = SUB84(dVar13,0);
    auVar12._0_8_ =
         dVar17 * dVar6 * -1.0 +
         dVar18 * dVar4 + *(double *)*param_1 * dVar19 * 1.0 + dVar2 * dVar16;
    auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *param_1 = auVar12;
    *(double *)param_1[1] =
         dVar19 * dVar6 * 1.0 +
         ((*(double *)*param_1 * dVar17 * 1.0 + dVar2 * dVar18) - dVar4 * dVar16);
    *(double *)(param_1[1] + 8) =
         dVar18 * dVar7 * -1.0 +
         ((*(double *)*param_1 * dVar16 * -1.0 + dVar3 * dVar19) - dVar5 * dVar17);
    *(double *)param_1[2] = dVar14 + dVar8;
    *(double *)(param_1[2] + 8) = dVar15 + dVar10;
    *(double *)param_1[3] = dVar1 + dVar9;
    *(double *)(param_1[3] + 8) = dVar11 + 0.0;
  }
  param_1[6][0] = 1;
  return;
}



// FUNCTION 1438003f9 FUN_1438003f9 body=642 status=ok
// SIG undefined FUN_1438003f9(void)

void FUN_1438003f9(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined4 param_3,
                  longlong param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auVar5 [12];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  iVar3 = *(int *)(param_4 + 0x20);
  iVar10 = iVar3 + 8;
  if ((int)(*(uint *)(param_4 + 0x24) & 0x7fffffff) < iVar10) {
    FUN_1418055da(param_4 + 0x18,&PTR_vftable_14c6e47a0,iVar10);
  }
  lVar4 = *(longlong *)(param_4 + 0x18);
  lVar11 = (longlong)iVar3 * 0x10;
  *(int *)(param_4 + 0x20) = iVar10;
  auVar13 = *param_1;
  *(undefined1 (*) [16])(lVar4 + lVar11) = auVar13;
  auVar13 = blendps(*param_2,auVar13,0xe);
  *(undefined1 (*) [16])(lVar4 + 0x10 + lVar11) = auVar13;
  auVar13._4_4_ = 0;
  auVar13._0_4_ = *(uint *)*param_1;
  auVar13._8_4_ = *(undefined4 *)(*param_1 + 8);
  auVar13._12_4_ = *(undefined4 *)(*param_1 + 0xc);
  auVar13 = ZEXT416(*(uint *)(*param_2 + 4)) << 0x20 | auVar13;
  *(undefined1 (*) [16])(lVar4 + 0x20 + lVar11) = auVar13;
  auVar5._4_8_ = auVar13._8_8_;
  auVar5._0_4_ = *(undefined4 *)(*param_1 + 4);
  auVar12._0_8_ = auVar5._0_8_ << 0x20;
  auVar12._8_4_ = *(undefined4 *)(*param_1 + 8);
  auVar12._12_4_ = *(undefined4 *)(*param_1 + 0xc);
  puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar11);
  *puVar1 = *(undefined8 *)*param_2;
  puVar1[1] = auVar12._8_8_;
  uVar6 = *(undefined4 *)(*param_1 + 4);
  uVar7 = *(undefined4 *)(*param_1 + 0xc);
  uVar8 = *(undefined4 *)(*param_2 + 8);
  puVar2 = (undefined4 *)(lVar4 + 0x40 + lVar11);
  *puVar2 = *(undefined4 *)*param_1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar8;
  puVar2[3] = uVar7;
  uVar6 = *(undefined4 *)(*param_1 + 4);
  uVar7 = *(undefined4 *)(*param_1 + 0xc);
  uVar8 = *(undefined4 *)(*param_2 + 8);
  puVar2 = (undefined4 *)(lVar4 + 0x50 + lVar11);
  *puVar2 = *(undefined4 *)*param_2;
  puVar2[1] = uVar6;
  puVar2[2] = uVar8;
  puVar2[3] = uVar7;
  uVar6 = *(undefined4 *)(*param_1 + 0xc);
  uVar7 = *(undefined4 *)(*param_2 + 4);
  uVar8 = *(undefined4 *)(*param_2 + 8);
  puVar2 = (undefined4 *)(lVar4 + 0x60 + lVar11);
  *puVar2 = *(undefined4 *)*param_1;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar6;
  uVar9 = *(undefined8 *)(*param_2 + 8);
  puVar1 = (undefined8 *)(lVar4 + 0x70 + lVar11);
  *puVar1 = *(undefined8 *)*param_2;
  puVar1[1] = uVar9;
  iVar3 = *(int *)(param_4 + 0x30);
  iVar10 = iVar3 + 0xc;
  if ((int)(*(uint *)(param_4 + 0x34) & 0x7fffffff) < iVar10) {
    FUN_141805702(param_4 + 0x28,&PTR_vftable_14c6e47a0,iVar10);
  }
  lVar4 = *(longlong *)(param_4 + 0x28);
  lVar11 = (longlong)iVar3 * 0x10;
  *(int *)(param_4 + 0x30) = iVar10;
  *(undefined8 *)(lVar4 + lVar11) = 0x400000000;
  *(undefined4 *)(lVar4 + 8 + lVar11) = 6;
  *(undefined4 *)(lVar4 + 0xc + lVar11) = param_3;
  *(undefined8 *)(lVar4 + 0x10 + lVar11) = 0x600000000;
  *(undefined4 *)(lVar4 + 0x18 + lVar11) = 2;
  *(undefined4 *)(lVar4 + 0x1c + lVar11) = param_3;
  *(undefined8 *)(lVar4 + 0x20 + lVar11) = 0x300000001;
  *(undefined4 *)(lVar4 + 0x28 + lVar11) = 7;
  *(undefined4 *)(lVar4 + 0x2c + lVar11) = param_3;
  *(undefined8 *)(lVar4 + 0x30 + lVar11) = 0x700000001;
  *(undefined4 *)(lVar4 + 0x38 + lVar11) = 5;
  *(undefined4 *)(lVar4 + 0x3c + lVar11) = param_3;
  *(undefined8 *)(lVar4 + 0x40 + lVar11) = 0x100000000;
  *(undefined4 *)(lVar4 + 0x48 + lVar11) = 5;
  *(undefined4 *)(lVar4 + 0x4c + lVar11) = param_3;
  *(undefined8 *)(lVar4 + 0x50 + lVar11) = 0x500000000;
  *(undefined4 *)(lVar4 + 0x58 + lVar11) = 4;
  *(undefined4 *)(lVar4 + 0x5c + lVar11) = param_3;
  *(undefined8 *)(lVar4 + 0x60 + lVar11) = 0x600000002;
  *(undefined4 *)(lVar4 + 0x68 + lVar11) = 7;
  *(undefined4 *)(lVar4 + 0x6c + lVar11) = param_3;
  *(undefined8 *)(lVar4 + 0x70 + lVar11) = 0x700000002;
  *(undefined4 *)(lVar4 + 0x78 + lVar11) = 3;
  *(undefined4 *)(lVar4 + 0x7c + lVar11) = param_3;
  *(undefined8 *)(lVar4 + 0x80 + lVar11) = 0x200000000;
  *(undefined4 *)(lVar4 + 0x88 + lVar11) = 3;
  *(undefined4 *)(lVar4 + 0x8c + lVar11) = param_3;
  *(undefined8 *)(lVar4 + 0x90 + lVar11) = 0x300000000;
  *(undefined4 *)(lVar4 + 0x98 + lVar11) = 1;
  *(undefined4 *)(lVar4 + 0x9c + lVar11) = param_3;
  *(undefined8 *)(lVar4 + 0xa0 + lVar11) = 0x500000004;
  *(undefined4 *)(lVar4 + 0xa8 + lVar11) = 7;
  *(undefined4 *)(lVar4 + 0xac + lVar11) = param_3;
  *(undefined8 *)(lVar4 + 0xb0 + lVar11) = 0x700000004;
  *(undefined4 *)(lVar4 + 0xb8 + lVar11) = 6;
  *(undefined4 *)(lVar4 + 0xbc + lVar11) = param_3;
  return;
}



// FUNCTION 14380067c FUN_14380067c body=460 status=ok
// SIG undefined FUN_14380067c(void)

undefined8 FUN_14380067c(longlong *param_1,uint *param_2,longlong *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2[1] != 0) {
    uVar2 = *param_2;
    uVar9 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143800826;
    plVar8 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar8 != (longlong *)0x0) &&
       (((*(uint *)(plVar8 + 2) == param_2[1] &&
         (lVar5 = *param_1, (*(uint *)(plVar8 + 1) & 0x10200000) == 0)) &&
        (lVar6 = *plVar8, lVar6 != 0)))) {
      FUN_141070526(&local_40,lVar6);
      plVar8 = local_38;
      if (&local_40 != param_3) {
        *param_3 = local_40;
        local_40 = 0;
        plVar7 = (longlong *)param_3[1];
        if (local_38 != plVar7) {
          local_38 = (longlong *)0x0;
          param_3[1] = (longlong)plVar8;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar7 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
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
      }
      plVar8 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_38 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      if (*param_3 != 0) {
        FUN_1437fa566(*(undefined8 *)(lVar5 + 0x120));
        iVar3 = *(int *)(lVar5 + 0x10);
        if ((longlong)iVar3 != 0) {
          lVar5 = *(longlong *)(lVar5 + 8);
          lVar10 = 0;
          do {
            iVar4 = *(int *)(lVar5 + 4 + lVar10);
            if (((iVar4 != 0) && (uVar2 = *(uint *)(lVar5 + lVar10), -1 < (int)uVar2)) &&
               ((int)uVar2 < DAT_14c9647dc)) {
              plVar8 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if (((plVar8 != (longlong *)0x0) && ((int)plVar8[2] == iVar4)) &&
                 (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))) {
                FUN_1410817f4(*plVar8,param_3);
              }
            }
            lVar10 = lVar10 + 8;
          } while ((longlong)iVar3 * 8 != lVar10);
        }
        FUN_1437fcfb6(lVar6,param_3);
        uVar9 = 1;
        goto LAB_143800826;
      }
    }
  }
  uVar9 = 0;
LAB_143800826:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143800874 FUN_143800874 body=29 status=ok
// SIG undefined FUN_143800874(void)

undefined8 FUN_143800874(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143800892 FUN_143800892 body=292 status=ok
// SIG undefined FUN_143800892(void)

void FUN_143800892(longlong *param_1,uint *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*param_3 != 0) {
    lVar7 = (longlong)*(int *)(*param_1 + 0x10);
    if (lVar7 != 0) {
      lVar5 = *(longlong *)(*param_1 + 8);
      lVar8 = 0;
      do {
        iVar3 = *(int *)(lVar5 + 4 + lVar8);
        if (((iVar3 != 0) && (uVar4 = *(uint *)(lVar5 + lVar8), -1 < (int)uVar4)) &&
           ((int)uVar4 < DAT_14c9647dc)) {
          plVar6 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == iVar3)) &&
             (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (*plVar6 != 0)))) {
            FUN_1410212da(*plVar6,param_3);
          }
        }
        lVar8 = lVar8 + 8;
      } while (lVar7 * 8 != lVar8);
    }
  }
  *param_3 = 0;
  plVar6 = (longlong *)param_3[1];
  if (plVar6 != (longlong *)0x0) {
    param_3[1] = 0;
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
  if (((param_2[1] != 0) && (uVar4 = *param_2, -1 < (int)uVar4)) && ((int)uVar4 < DAT_14c9647dc)) {
    plVar6 = (longlong *)
             ((ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if ((((plVar6 != (longlong *)0x0) && (*(uint *)(plVar6 + 2) == param_2[1])) &&
        ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) && (*plVar6 != 0)) {
      FUN_1437fcfb6(*plVar6,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 1438009e0 FUN_1438009e0 body=29 status=ok
// SIG undefined FUN_1438009e0(void)

undefined8 FUN_1438009e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438009fe FUN_1438009fe body=114 status=ok
// SIG undefined FUN_1438009fe(void)

void FUN_1438009fe(longlong *param_1,int param_2)

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



// FUNCTION 143800ab4 FUN_143800ab4 body=83 status=ok
// SIG undefined FUN_143800ab4(void)

undefined8 * FUN_143800ab4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14aba04c0;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143800b08 FUN_143800b08 body=352 status=ok
// SIG undefined FUN_143800b08(void)

void FUN_143800b08(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x80) = *param_2;
  uVar4 = param_2[2];
  lVar5 = param_2[3];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = uVar4;
  *(longlong *)(param_1 + 0x98) = lVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0xa0) = param_2[4];
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar8 = *(undefined4 *)(param_2 + 6);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar10 = *(undefined4 *)(param_2 + 7);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar12 = *(undefined4 *)(param_2 + 8);
  uVar13 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar14 = *(undefined4 *)(param_2 + 9);
  uVar15 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar16 = *(undefined4 *)(param_2 + 10);
  uVar17 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar18 = *(undefined4 *)(param_2 + 0xb);
  uVar19 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar20 = *(undefined4 *)(param_2 + 0xc);
  uVar21 = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)(param_1 + 0xac) = uVar7;
  *(undefined4 *)(param_1 + 0xb0) = uVar8;
  *(undefined4 *)(param_1 + 0xb4) = uVar9;
  *(undefined4 *)(param_1 + 0xb8) = uVar10;
  *(undefined4 *)(param_1 + 0xbc) = uVar11;
  *(undefined4 *)(param_1 + 0xc0) = uVar12;
  *(undefined4 *)(param_1 + 0xc4) = uVar13;
  *(undefined4 *)(param_1 + 200) = uVar14;
  *(undefined4 *)(param_1 + 0xcc) = uVar15;
  *(undefined4 *)(param_1 + 0xd0) = uVar16;
  *(undefined4 *)(param_1 + 0xd4) = uVar17;
  *(undefined4 *)(param_1 + 0xd8) = uVar18;
  *(undefined4 *)(param_1 + 0xdc) = uVar19;
  *(undefined4 *)(param_1 + 0xe0) = uVar20;
  *(undefined4 *)(param_1 + 0xe4) = uVar21;
  plStack_30 = *(longlong **)(param_1 + 0x78);
  if (plStack_30 == (longlong *)0x0) {
LAB_143800bd6:
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    bVar24 = true;
  }
  else {
    iVar23 = (int)plStack_30[1];
    do {
      if (iVar23 == 0) goto LAB_143800bd6;
      LOCK();
      iVar22 = (int)plStack_30[1];
      bVar24 = iVar23 == iVar22;
      if (bVar24) {
        *(int *)(plStack_30 + 1) = iVar23 + 1;
        iVar22 = iVar23;
      }
      iVar23 = iVar22;
      UNLOCK();
    } while (!bVar24);
    local_38 = *(undefined8 *)(param_1 + 0x70);
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
    bVar24 = false;
  }
  plVar6 = plStack_30;
  FUN_1437faa3a(param_1,*(undefined8 *)(param_1 + 0xa0),&local_38);
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (!bVar24) {
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143800c7c FUN_143800c7c body=9 status=ok
// SIG undefined FUN_143800c7c(void)

void FUN_143800c7c(longlong param_1)

{
  FUN_143800e4c(param_1 + 0x10);
  return;
}



// FUNCTION 143800c86 FUN_143800c86 body=29 status=ok
// SIG undefined FUN_143800c86(void)

undefined8 FUN_143800c86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143800ca4 FUN_143800ca4 body=38 status=ok
// SIG undefined FUN_143800ca4(void)

undefined8 FUN_143800ca4(undefined8 param_1,int param_2)

{
  FUN_143800e4c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143800cce FUN_143800cce body=378 status=ok
// SIG undefined FUN_143800cce(void)

void FUN_143800cce(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0xffffffffffffffff;
  local_70 = 0;
  local_68 = DAT_14cb1c860;
  uStack_60 = DAT_14cb1c868;
  local_58 = DAT_14cb1c870;
  uStack_50 = DAT_14cb1c860;
  uStack_48 = DAT_14cb1c868;
  uStack_40 = DAT_14cb1c870;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_28 = 0xffffffff;
  cVar5 = FUN_14038bf6e(param_1 + 0x80,&local_78);
  *(undefined8 *)(param_1 + 8) = DAT_14c872be0;
  *(undefined4 *)(param_1 + 0x20) = local_70;
  *(undefined8 *)(param_1 + 0x18) = local_78;
  *(undefined4 *)(param_1 + 0x48) = (undefined4)uStack_48;
  *(undefined4 *)(param_1 + 0x4c) = uStack_48._4_4_;
  *(undefined4 *)(param_1 + 0x50) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x54) = uStack_40._4_4_;
  *(undefined4 *)(param_1 + 0x38) = (undefined4)local_58;
  *(undefined4 *)(param_1 + 0x3c) = local_58._4_4_;
  *(undefined4 *)(param_1 + 0x40) = (undefined4)uStack_50;
  *(undefined4 *)(param_1 + 0x44) = uStack_50._4_4_;
  *(undefined4 *)(param_1 + 0x28) = (undefined4)local_68;
  *(undefined4 *)(param_1 + 0x2c) = local_68._4_4_;
  *(undefined4 *)(param_1 + 0x30) = (undefined4)uStack_60;
  *(undefined4 *)(param_1 + 0x34) = uStack_60._4_4_;
  if (cVar5 == '\0') {
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    plVar4 = *(longlong **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = local_38;
    *(longlong **)(param_1 + 0x60) = plStack_30;
    uVar6 = 3;
    if (plVar4 == (longlong *)0x0) goto LAB_143800dc3;
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_143800dc3;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    uVar7 = 3;
    uVar6 = 3;
  }
  else {
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    plVar4 = *(longlong **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = local_38;
    *(longlong **)(param_1 + 0x60) = plStack_30;
    uVar6 = 2;
    if (plVar4 == (longlong *)0x0) goto LAB_143800dc3;
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_143800dc3;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    uVar7 = 2;
    uVar6 = 2;
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar6 = uVar7;
  }
LAB_143800dc3:
  plVar4 = plStack_30;
  *(undefined4 *)(param_1 + 0x68) = local_28;
  LOCK();
  *(undefined1 *)(param_1 + 0x10) = uVar6;
  UNLOCK();
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
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



// FUNCTION 143800e4c FUN_143800e4c body=127 status=ok
// SIG undefined FUN_143800e4c(void)

void FUN_143800e4c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aba0500;
  plVar3 = (longlong *)param_1[0x13];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14aba0520;
  plVar3 = (longlong *)param_1[0xc];
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
  plVar3 = (longlong *)param_1[0xf];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143800ebf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143800ecc FUN_143800ecc body=404 status=ok
// SIG undefined FUN_143800ecc(void)

void FUN_143800ecc(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 uVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x90) = param_2[2];
  uVar4 = param_2[1];
  *(undefined8 *)(param_1 + 0x80) = *param_2;
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  if ((undefined8 *)(param_1 + 0x80) != param_2) {
    if (*(char *)((longlong)param_2 + 0x1c) == '\x01') {
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 3);
      uVar11 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x9c) != '\x01') goto LAB_143800f32;
      uVar11 = 0;
    }
    *(undefined1 *)(param_1 + 0x9c) = uVar11;
  }
LAB_143800f32:
  *(undefined8 *)(param_1 + 0xb0) = param_2[6];
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar8 = *(undefined4 *)(param_2 + 5);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0xa4) = uVar7;
  *(undefined4 *)(param_1 + 0xa8) = uVar8;
  *(undefined4 *)(param_1 + 0xac) = uVar9;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0xb8) = param_2[7];
  uVar4 = param_2[9];
  lVar5 = param_2[10];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 200) = uVar4;
  *(longlong *)(param_1 + 0xd0) = lVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0xd8) = param_2[0xb];
  plStack_30 = *(longlong **)(param_1 + 0x78);
  if (plStack_30 == (longlong *)0x0) {
LAB_143800fce:
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    bVar13 = true;
  }
  else {
    iVar12 = (int)plStack_30[1];
    do {
      if (iVar12 == 0) goto LAB_143800fce;
      LOCK();
      iVar10 = (int)plStack_30[1];
      bVar13 = iVar12 == iVar10;
      if (bVar13) {
        *(int *)(plStack_30 + 1) = iVar12 + 1;
        iVar10 = iVar12;
      }
      iVar12 = iVar10;
      UNLOCK();
    } while (!bVar13);
    local_38 = *(undefined8 *)(param_1 + 0x70);
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
    bVar13 = false;
  }
  plVar6 = plStack_30;
  FUN_1437faa3a(param_1,*(undefined8 *)(param_1 + 0xd8),&local_38);
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (!bVar13) {
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143801074 FUN_143801074 body=9 status=ok
// SIG undefined FUN_143801074(void)

void FUN_143801074(longlong param_1)

{
  FUN_143801246(param_1 + 0x10);
  return;
}



// FUNCTION 14380107e FUN_14380107e body=29 status=ok
// SIG undefined FUN_14380107e(void)

undefined8 FUN_14380107e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14380109c FUN_14380109c body=38 status=ok
// SIG undefined FUN_14380109c(void)

undefined8 FUN_14380109c(undefined8 param_1,int param_2)

{
  FUN_143801246();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438010c8 FUN_1438010c8 body=381 status=ok
// SIG undefined FUN_1438010c8(void)

void FUN_1438010c8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0xffffffffffffffff;
  local_70 = 0;
  local_68 = DAT_14cb1c860;
  uStack_60 = DAT_14cb1c868;
  local_58 = DAT_14cb1c870;
  uStack_50 = DAT_14cb1c860;
  uStack_48 = DAT_14cb1c868;
  uStack_40 = DAT_14cb1c870;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_28 = 0xffffffff;
  iVar4 = FUN_140855e2d(param_1 + 0x80,&local_78,0);
  *(undefined8 *)(param_1 + 8) = DAT_14c872be0;
  *(undefined4 *)(param_1 + 0x20) = local_70;
  *(undefined8 *)(param_1 + 0x18) = local_78;
  *(undefined4 *)(param_1 + 0x48) = (undefined4)uStack_48;
  *(undefined4 *)(param_1 + 0x4c) = uStack_48._4_4_;
  *(undefined4 *)(param_1 + 0x50) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x54) = uStack_40._4_4_;
  *(undefined4 *)(param_1 + 0x38) = (undefined4)local_58;
  *(undefined4 *)(param_1 + 0x3c) = local_58._4_4_;
  *(undefined4 *)(param_1 + 0x40) = (undefined4)uStack_50;
  *(undefined4 *)(param_1 + 0x44) = uStack_50._4_4_;
  *(undefined4 *)(param_1 + 0x28) = (undefined4)local_68;
  *(undefined4 *)(param_1 + 0x2c) = local_68._4_4_;
  *(undefined4 *)(param_1 + 0x30) = (undefined4)uStack_60;
  *(undefined4 *)(param_1 + 0x34) = uStack_60._4_4_;
  if (iVar4 == 0) {
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    plVar3 = *(longlong **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = local_38;
    *(longlong **)(param_1 + 0x60) = plStack_30;
    uVar5 = 2;
    if (plVar3 == (longlong *)0x0) goto LAB_1438011c0;
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1438011c0;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    UNLOCK();
    uVar6 = 2;
    uVar5 = 2;
  }
  else {
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    plVar3 = *(longlong **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = local_38;
    *(longlong **)(param_1 + 0x60) = plStack_30;
    uVar5 = 3;
    if (plVar3 == (longlong *)0x0) goto LAB_1438011c0;
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1438011c0;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    UNLOCK();
    uVar6 = 3;
    uVar5 = 3;
  }
  if (iVar4 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar5 = uVar6;
  }
LAB_1438011c0:
  plVar3 = plStack_30;
  *(undefined4 *)(param_1 + 0x68) = local_28;
  LOCK();
  *(undefined1 *)(param_1 + 0x10) = uVar5;
  UNLOCK();
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143801246 FUN_143801246 body=143 status=ok
// SIG undefined FUN_143801246(void)

void FUN_143801246(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aba0560;
  plVar3 = (longlong *)param_1[0x1a];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (*(char *)((longlong)param_1 + 0x9c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  }
  *param_1 = &PTR_LAB_14aba0520;
  plVar3 = (longlong *)param_1[0xc];
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
  plVar3 = (longlong *)param_1[0xf];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001438012c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1438012d6 FUN_1438012d6 body=482 status=ok
// SIG undefined FUN_1438012d6(void)

void FUN_1438012d6(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x80) = *param_2;
  uVar4 = param_2[2];
  lVar5 = param_2[3];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = uVar4;
  *(longlong *)(param_1 + 0x98) = lVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0xa0) = param_2[4];
  uVar7 = *(undefined4 *)(param_2 + 5);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar9 = *(undefined4 *)(param_2 + 6);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar11 = *(undefined4 *)(param_2 + 7);
  uVar12 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar13 = *(undefined4 *)(param_2 + 8);
  uVar14 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar15 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar16 = *(undefined4 *)(param_2 + 10);
  uVar17 = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)(param_1 + 0xcc) = uVar15;
  *(undefined4 *)(param_1 + 0xd0) = uVar16;
  *(undefined4 *)(param_1 + 0xd4) = uVar17;
  *(undefined4 *)(param_1 + 0xb8) = uVar11;
  *(undefined4 *)(param_1 + 0xbc) = uVar12;
  *(undefined4 *)(param_1 + 0xc0) = uVar13;
  *(undefined4 *)(param_1 + 0xc4) = uVar14;
  *(undefined4 *)(param_1 + 0xa8) = uVar7;
  *(undefined4 *)(param_1 + 0xac) = uVar8;
  *(undefined4 *)(param_1 + 0xb0) = uVar9;
  *(undefined4 *)(param_1 + 0xb4) = uVar10;
  uVar4 = param_2[0xb];
  lVar5 = param_2[0xc];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = uVar4;
  *(longlong *)(param_1 + 0xe0) = lVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xd);
  *(undefined8 *)(param_1 + 0xf0) = param_2[0xe];
  *(undefined8 *)(param_1 + 0xf8) = param_2[0xf];
  *(undefined1 *)(param_1 + 0x100) = *(undefined1 *)(param_2 + 0x10);
  plStack_30 = *(longlong **)(param_1 + 0x78);
  if (plStack_30 == (longlong *)0x0) {
LAB_1438013f3:
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    bVar20 = true;
  }
  else {
    iVar19 = (int)plStack_30[1];
    do {
      if (iVar19 == 0) goto LAB_1438013f3;
      LOCK();
      iVar18 = (int)plStack_30[1];
      bVar20 = iVar19 == iVar18;
      if (bVar20) {
        *(int *)(plStack_30 + 1) = iVar19 + 1;
        iVar18 = iVar19;
      }
      iVar19 = iVar18;
      UNLOCK();
    } while (!bVar20);
    local_38 = *(undefined8 *)(param_1 + 0x70);
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
    bVar20 = false;
  }
  plVar6 = plStack_30;
  FUN_1437faa3a(param_1,*(undefined8 *)(param_1 + 0xa0),&local_38);
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (!bVar20) {
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438014cc FUN_1438014cc body=9 status=ok
// SIG undefined FUN_1438014cc(void)

void FUN_1438014cc(longlong param_1)

{
  FUN_14380166c(param_1 + 0x10);
  return;
}



// FUNCTION 1438014d6 FUN_1438014d6 body=29 status=ok
// SIG undefined FUN_1438014d6(void)

undefined8 FUN_1438014d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438014f4 FUN_1438014f4 body=38 status=ok
// SIG undefined FUN_1438014f4(void)

undefined8 FUN_1438014f4(undefined8 param_1,int param_2)

{
  FUN_14380166c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143801520 FUN_143801520 body=330 status=ok
// SIG undefined FUN_143801520(void)

ulonglong FUN_143801520(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong *plVar4;
  char cVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  longlong *plStack_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = 0xffffffffffffffff;
  local_68 = 0;
  local_60 = DAT_14cb1c860;
  uStack_58 = DAT_14cb1c868;
  local_50 = DAT_14cb1c870;
  uStack_48 = DAT_14cb1c860;
  uStack_40 = DAT_14cb1c868;
  uStack_38 = DAT_14cb1c870;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  local_20 = 0xffffffff;
  cVar5 = FUN_14488902f(param_1 + 0x80);
  if (cVar5 == '\0') {
    uVar6 = FUN_1437fa964(param_1,3);
  }
  else {
    *(undefined8 *)(param_1 + 8) = DAT_14c872be0;
    *(undefined4 *)(param_1 + 0x20) = local_68;
    *(undefined8 *)(param_1 + 0x18) = local_70;
    *(undefined4 *)(param_1 + 0x48) = (undefined4)uStack_40;
    *(undefined4 *)(param_1 + 0x4c) = uStack_40._4_4_;
    *(undefined4 *)(param_1 + 0x50) = (undefined4)uStack_38;
    *(undefined4 *)(param_1 + 0x54) = uStack_38._4_4_;
    *(undefined4 *)(param_1 + 0x38) = (undefined4)local_50;
    *(undefined4 *)(param_1 + 0x3c) = local_50._4_4_;
    *(undefined4 *)(param_1 + 0x40) = (undefined4)uStack_48;
    *(undefined4 *)(param_1 + 0x44) = uStack_48._4_4_;
    *(undefined4 *)(param_1 + 0x28) = (undefined4)local_60;
    *(undefined4 *)(param_1 + 0x2c) = local_60._4_4_;
    *(undefined4 *)(param_1 + 0x30) = (undefined4)uStack_58;
    *(undefined4 *)(param_1 + 0x34) = uStack_58._4_4_;
    if (plStack_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
      UNLOCK();
    }
    plVar4 = *(longlong **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = local_30;
    *(longlong **)(param_1 + 0x60) = plStack_28;
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
    *(undefined4 *)(param_1 + 0x68) = local_20;
    LOCK();
    uVar3 = *(undefined1 *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x10) = 2;
    uVar6 = (ulonglong)CONCAT31((int3)((uint)local_20 >> 8),uVar3);
    UNLOCK();
  }
  plVar4 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      uVar6 = (**(code **)*plStack_28)(plStack_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        uVar6 = (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14380166c FUN_14380166c body=175 status=ok
// SIG undefined FUN_14380166c(void)

void FUN_14380166c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aba05a0;
  plVar3 = (longlong *)param_1[0x1c];
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
  plVar3 = (longlong *)param_1[0x13];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14aba0520;
  plVar3 = (longlong *)param_1[0xc];
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
  plVar3 = (longlong *)param_1[0xf];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001438016e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14380171c FUN_14380171c body=341 status=ok
// SIG undefined FUN_14380171c(void)

void FUN_14380171c(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar7 = *param_2;
  uVar8 = param_2[1];
  uVar9 = param_2[2];
  uVar10 = param_2[3];
  uVar11 = param_2[4];
  uVar12 = param_2[5];
  uVar13 = param_2[6];
  *(undefined4 *)(param_1 + 0x8c) = param_2[3];
  *(undefined4 *)(param_1 + 0x90) = uVar11;
  *(undefined4 *)(param_1 + 0x94) = uVar12;
  *(undefined4 *)(param_1 + 0x98) = uVar13;
  *(undefined4 *)(param_1 + 0x80) = uVar7;
  *(undefined4 *)(param_1 + 0x84) = uVar8;
  *(undefined4 *)(param_1 + 0x88) = uVar9;
  *(undefined4 *)(param_1 + 0x8c) = uVar10;
  *(undefined4 *)(param_1 + 0xa8) = param_2[10];
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0xc);
  lVar5 = *(longlong *)(param_2 + 0xe);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = uVar4;
  *(longlong *)(param_1 + 0xb8) = lVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0x14);
  uVar7 = param_2[0x11];
  uVar8 = param_2[0x12];
  uVar9 = param_2[0x13];
  *(undefined4 *)(param_1 + 0xc0) = param_2[0x10];
  *(undefined4 *)(param_1 + 0xc4) = uVar7;
  *(undefined4 *)(param_1 + 200) = uVar8;
  *(undefined4 *)(param_1 + 0xcc) = uVar9;
  plStack_30 = *(longlong **)(param_1 + 0x78);
  if (plStack_30 == (longlong *)0x0) {
LAB_1438017df:
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    bVar16 = true;
  }
  else {
    iVar15 = (int)plStack_30[1];
    do {
      if (iVar15 == 0) goto LAB_1438017df;
      LOCK();
      iVar14 = (int)plStack_30[1];
      bVar16 = iVar15 == iVar14;
      if (bVar16) {
        *(int *)(plStack_30 + 1) = iVar15 + 1;
        iVar14 = iVar15;
      }
      iVar15 = iVar14;
      UNLOCK();
    } while (!bVar16);
    local_38 = *(undefined8 *)(param_1 + 0x70);
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
    bVar16 = false;
  }
  plVar6 = plStack_30;
  FUN_1437faa3a(param_1,*(undefined8 *)(param_1 + 0xc0),&local_38);
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (!bVar16) {
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143801884 FUN_143801884 body=9 status=ok
// SIG undefined FUN_143801884(void)

void FUN_143801884(longlong param_1)

{
  FUN_143801a20(param_1 + 0x10);
  return;
}



// FUNCTION 14380188e FUN_14380188e body=29 status=ok
// SIG undefined FUN_14380188e(void)

undefined8 FUN_14380188e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438018ac FUN_1438018ac body=38 status=ok
// SIG undefined FUN_1438018ac(void)

undefined8 FUN_1438018ac(undefined8 param_1,int param_2)

{
  FUN_143801a20();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438018d8 FUN_1438018d8 body=327 status=ok
// SIG undefined FUN_1438018d8(void)

ulonglong FUN_1438018d8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  longlong *plStack_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = 0xffffffffffffffff;
  local_68 = 0;
  local_60 = DAT_14cb1c860;
  uStack_58 = DAT_14cb1c868;
  local_50 = DAT_14cb1c870;
  uStack_48 = DAT_14cb1c860;
  uStack_40 = DAT_14cb1c868;
  uStack_38 = DAT_14cb1c870;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  local_20 = 0xffffffff;
  iVar5 = FUN_14022b7ff(param_1 + 0x80);
  if (iVar5 == 0) {
    *(undefined8 *)(param_1 + 8) = DAT_14c872be0;
    *(undefined4 *)(param_1 + 0x20) = local_68;
    *(undefined8 *)(param_1 + 0x18) = local_70;
    *(undefined4 *)(param_1 + 0x48) = (undefined4)uStack_40;
    *(undefined4 *)(param_1 + 0x4c) = uStack_40._4_4_;
    *(undefined4 *)(param_1 + 0x50) = (undefined4)uStack_38;
    *(undefined4 *)(param_1 + 0x54) = uStack_38._4_4_;
    *(undefined4 *)(param_1 + 0x38) = (undefined4)local_50;
    *(undefined4 *)(param_1 + 0x3c) = local_50._4_4_;
    *(undefined4 *)(param_1 + 0x40) = (undefined4)uStack_48;
    *(undefined4 *)(param_1 + 0x44) = uStack_48._4_4_;
    *(undefined4 *)(param_1 + 0x28) = (undefined4)local_60;
    *(undefined4 *)(param_1 + 0x2c) = local_60._4_4_;
    *(undefined4 *)(param_1 + 0x30) = (undefined4)uStack_58;
    *(undefined4 *)(param_1 + 0x34) = uStack_58._4_4_;
    if (plStack_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
      UNLOCK();
    }
    plVar4 = *(longlong **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = local_30;
    *(longlong **)(param_1 + 0x60) = plStack_28;
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
    *(undefined4 *)(param_1 + 0x68) = local_20;
    LOCK();
    uVar3 = *(undefined1 *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x10) = 2;
    uVar6 = (ulonglong)CONCAT31((int3)((uint)local_20 >> 8),uVar3);
    UNLOCK();
  }
  else {
    uVar6 = FUN_1437fa964(param_1,3);
  }
  plVar4 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      uVar6 = (**(code **)*plStack_28)(plStack_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        uVar6 = (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143801a20 FUN_143801a20 body=127 status=ok
// SIG undefined FUN_143801a20(void)

void FUN_143801a20(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aba05e0;
  plVar3 = (longlong *)param_1[0x17];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14aba0520;
  plVar3 = (longlong *)param_1[0xc];
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
  plVar3 = (longlong *)param_1[0xf];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143801a93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143801aa0 FUN_143801aa0 body=122 status=ok
// SIG undefined FUN_143801aa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_143801aa0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  do {
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_143801aee:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_143801aee;
      }
    }
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  } while( true );
}



// FUNCTION 143801b1a FUN_143801b1a body=77 status=ok
// SIG undefined FUN_143801b1a(void)

void FUN_143801b1a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    plVar1 = (longlong *)param_1[2];
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6();
    }
    if (lVar2 == *plVar1) break;
    lVar2 = FUN_143801aa0(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 143801b68 FUN_143801b68 body=29 status=ok
// SIG undefined FUN_143801b68(void)

undefined8 FUN_143801b68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143801d1a FUN_143801d1a body=101 status=ok
// SIG undefined FUN_143801d1a(void)

void FUN_143801d1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aba0be0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba0600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143801d80 FUN_143801d80 body=101 status=ok
// SIG undefined FUN_143801d80(void)

void FUN_143801d80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aba0be0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba0600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143801de6 FUN_143801de6 body=134 status=ok
// SIG undefined FUN_143801de6(void)

void FUN_143801de6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aba0be0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aba0600;
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
                    /* WARNING: Could not recover jumptable at 0x000143801e5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143801e6c FUN_143801e6c body=99 status=ok
// SIG undefined FUN_143801e6c(void)

void FUN_143801e6c(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    lVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143801ebc;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       (((int)plVar3[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))
       ) {
      lVar2 = *plVar3;
      goto LAB_143801ebc;
    }
  }
  lVar2 = 0;
LAB_143801ebc:
                    /* WARNING: Could not recover jumptable at 0x000143801ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  return;
}



// FUNCTION 143801ed0 FUN_143801ed0 body=305 status=ok
// SIG undefined FUN_143801ed0(void)

undefined8 FUN_143801ed0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143801ffa;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143801ffa;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_143801ffa:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143801fa9;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_143801fa9;
    }
  }
  uVar6 = 0;
LAB_143801fa9:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143802004 FUN_143802004 body=29 status=ok
// SIG undefined FUN_143802004(void)

undefined8 FUN_143802004(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438021aa FUN_1438021aa body=101 status=ok
// SIG undefined FUN_1438021aa(void)

void FUN_1438021aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aba0be0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba0670;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143802210 FUN_143802210 body=101 status=ok
// SIG undefined FUN_143802210(void)

void FUN_143802210(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aba0be0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba0670;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143802276 FUN_143802276 body=134 status=ok
// SIG undefined FUN_143802276(void)

void FUN_143802276(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aba0be0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aba0670;
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
                    /* WARNING: Could not recover jumptable at 0x0001438022ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1438022fc FUN_1438022fc body=99 status=ok
// SIG undefined FUN_1438022fc(void)

void FUN_1438022fc(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    lVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14380234c;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       (((int)plVar3[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))
       ) {
      lVar2 = *plVar3;
      goto LAB_14380234c;
    }
  }
  lVar2 = 0;
LAB_14380234c:
                    /* WARNING: Could not recover jumptable at 0x000143802358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  return;
}



// FUNCTION 143802360 FUN_143802360 body=305 status=ok
// SIG undefined FUN_143802360(void)

undefined8 FUN_143802360(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14380248a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14380248a;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_14380248a:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143802439;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_143802439;
    }
  }
  uVar6 = 0;
LAB_143802439:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143802500 FUN_143802500 body=208 status=ok
// SIG undefined FUN_143802500(void)

undefined8 * FUN_143802500(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x130,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14aba06e0;
  puVar4[1] = *(undefined8 *)(param_1 + 8);
  memcpy(puVar4 + 2,(void *)(param_1 + 0x10),0xb8);
  puVar4[0x19] = *(undefined8 *)(param_1 + 200);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  puVar4[0x1a] = *(undefined8 *)(param_1 + 0xd0);
  puVar4[0x1b] = uVar1;
  *(undefined4 *)(puVar4 + 0x1c) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined1 *)((longlong)puVar4 + 0xe4) = *(undefined1 *)(param_1 + 0xe4);
  puVar4[0x21] = *(undefined8 *)(param_1 + 0x108);
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  uVar3 = *(undefined8 *)(param_1 + 0x100);
  puVar4[0x1f] = *(undefined8 *)(param_1 + 0xf8);
  puVar4[0x20] = uVar3;
  puVar4[0x1d] = uVar1;
  puVar4[0x1e] = uVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  uVar2 = *(undefined8 *)(param_1 + 0x118);
  uVar3 = *(undefined8 *)(param_1 + 0x128);
  puVar4[0x24] = *(undefined8 *)(param_1 + 0x120);
  puVar4[0x25] = uVar3;
  puVar4[0x22] = uVar1;
  puVar4[0x23] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 1438025d6 FUN_1438025d6 body=29 status=ok
// SIG undefined FUN_1438025d6(void)

void FUN_1438025d6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1438025f4 FUN_1438025f4 body=29 status=ok
// SIG undefined FUN_1438025f4(void)

undefined8 FUN_1438025f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143802632 FUN_143802632 body=29 status=ok
// SIG undefined FUN_143802632(void)

undefined8 FUN_143802632(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143802650 FUN_143802650 body=61 status=ok
// SIG undefined FUN_143802650(void)

void FUN_143802650(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if (((DAT_14c872bd8 != '\x01') || (DAT_14c872bf0 == '\x01')) && ((int)param_1[3] == 0)) {
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  (**(code **)(*param_1 + 0x30))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x1c) = 2;
  return;
}



// FUNCTION 1438026a4 FUN_1438026a4 body=29 status=ok
// SIG undefined FUN_1438026a4(void)

undefined8 FUN_1438026a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438026c2 FUN_1438026c2 body=391 status=ok
// SIG undefined FUN_1438026c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1438026c2(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = *param_3;
  plVar2 = *(longlong **)(param_2 + 0x30);
  LOCK();
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
  UNLOCK();
  if (plVar2 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    do {
      lVar3 = plVar2[2];
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 8) & 0x40018000) == 0)) {
        uVar1 = *(uint *)(lVar3 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar3 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          if ((*(uint *)(lVar3 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
            lVar3 = lVar3 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_143802742:
            plVar4 = plVar2;
            if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) break;
          }
        }
        else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
          lVar3 = 0;
          goto LAB_143802742;
        }
      }
      plVar2 = (longlong *)*plVar2;
      plVar4 = (longlong *)0x0;
    } while (plVar2 != (longlong *)0x0);
  }
  param_1[1] = plVar4;
  param_1[2] = param_2;
  LOCK();
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
  UNLOCK();
  param_1[3] = param_1;
  lVar3 = param_1[1];
  while (lVar3 != 0) {
    plVar2 = (longlong *)param_1[3];
    lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0xb0);
    if (lVar3 == 0) {
      lVar3 = FUN_1448abda6();
    }
    if (lVar3 == *plVar2) break;
    lVar3 = FUN_144b2e940(*(undefined8 *)param_1[1]);
    param_1[1] = lVar3;
  }
  LOCK();
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + -1;
  UNLOCK();
  LOCK();
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = param_2;
  LOCK();
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
  UNLOCK();
  param_1[6] = param_1;
  lVar3 = param_1[4];
  while (lVar3 != 0) {
    plVar2 = (longlong *)param_1[6];
    lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0xb0);
    if (lVar3 == 0) {
      lVar3 = FUN_1448abda6();
    }
    if (lVar3 == *plVar2) break;
    lVar3 = FUN_144b2e940(*(undefined8 *)param_1[4]);
    param_1[4] = lVar3;
  }
  LOCK();
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 14380284a FUN_14380284a body=416 status=ok
// SIG undefined FUN_14380284a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14380284a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = *param_2;
  LOCK();
  _DAT_14cb1c828 = _DAT_14cb1c828 + 1;
  UNLOCK();
  plVar2 = DAT_14cb1c820;
  if (DAT_14cb1c820 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    do {
      lVar3 = plVar2[2];
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 8) & 0x40018000) == 0)) {
        uVar1 = *(uint *)(lVar3 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar3 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          if ((*(uint *)(lVar3 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
            lVar3 = lVar3 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_1438028cd:
            plVar4 = plVar2;
            if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) break;
          }
        }
        else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
          lVar3 = 0;
          goto LAB_1438028cd;
        }
      }
      plVar2 = (longlong *)*plVar2;
      plVar4 = (longlong *)0x0;
    } while (plVar2 != (longlong *)0x0);
  }
  param_1[1] = plVar4;
  param_1[2] = &DAT_14cb1c7f0;
  LOCK();
  _DAT_14cb1c828 = _DAT_14cb1c828 + 1;
  UNLOCK();
  param_1[3] = param_1;
  lVar3 = param_1[1];
  while (lVar3 != 0) {
    plVar2 = (longlong *)param_1[3];
    lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0xb0);
    if (lVar3 == 0) {
      lVar3 = FUN_1448abda6();
    }
    if (lVar3 == *plVar2) break;
    lVar3 = FUN_1438029ea(*(undefined8 *)param_1[1]);
    param_1[1] = lVar3;
  }
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = &DAT_14cb1c7f0;
  LOCK();
  _DAT_14cb1c828 = _DAT_14cb1c828 + 1;
  UNLOCK();
  param_1[6] = param_1;
  lVar3 = param_1[4];
  while (lVar3 != 0) {
    plVar2 = (longlong *)param_1[6];
    lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0xb0);
    if (lVar3 == 0) {
      lVar3 = FUN_1448abda6();
    }
    if (lVar3 == *plVar2) break;
    lVar3 = FUN_1438029ea(*(undefined8 *)param_1[4]);
    param_1[4] = lVar3;
  }
  LOCK();
  _DAT_14cb1c828 = _DAT_14cb1c828 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 1438029ea FUN_1438029ea body=122 status=ok
// SIG undefined FUN_1438029ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1438029ea(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  do {
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_143802a38:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_143802a38;
      }
    }
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  } while( true );
}



// FUNCTION 143802a64 FUN_143802a64 body=77 status=ok
// SIG undefined FUN_143802a64(void)

void FUN_143802a64(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    plVar1 = (longlong *)param_1[2];
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6();
    }
    if (lVar2 == *plVar1) break;
    lVar2 = FUN_1438029ea(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 143802ab2 FUN_143802ab2 body=5408 status=ok
// SIG undefined FUN_143802ab2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143802ab2(undefined8 *param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 uVar11;
  longlong lVar12;
  bool bVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar26;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  double dVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  double dVar47;
  double dVar48;
  undefined1 auVar46 [16];
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auStack_458 [32];
  longlong *local_438;
  longlong *local_430;
  undefined1 local_428 [24];
  longlong local_410;
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  undefined8 local_3d8;
  double dStack_3d0;
  double local_3c0;
  undefined1 local_3b8 [16];
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  undefined8 uStack_340;
  double local_338;
  double dStack_330;
  longlong *local_328;
  undefined8 uStack_320;
  double local_318;
  undefined8 uStack_310;
  double local_308;
  undefined8 uStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  longlong local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  undefined8 local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  double dStack_1f0;
  longlong *local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  longlong *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double dStack_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_458;
  local_430 = param_2;
  if (*param_2 != 0) {
    local_410 = param_1[5];
    lVar17 = *(longlong *)(*param_2 + 0x40);
    dVar22 = (double)*(float *)(lVar17 + 0x4c);
    dVar35 = (double)*(float *)(lVar17 + 0x48);
    dVar54 = (double)*(float *)(lVar17 + 0x44);
    dVar39 = (double)*(float *)(lVar17 + 0x40);
    pdVar2 = (double *)*param_1;
    local_428._0_16_ = *(undefined1 (*) [16])(pdVar2 + 8);
    dVar48 = local_428._0_8_;
    dVar53 = local_428._8_8_;
    auVar43 = *(undefined1 (*) [16])(pdVar2 + 10);
    dVar34 = auVar43._0_8_;
    dVar26 = auVar43._8_8_;
    local_2b8 = minpd(_DAT_149934d80,local_428._0_16_);
    auVar43 = minpd(ZEXT816(0x3ff0000000000000),auVar43);
    auVar46._8_8_ = -(ulonglong)(local_2b8._8_8_ < 0.0);
    auVar46._0_8_ = -(ulonglong)(local_2b8._0_8_ < 0.0);
    iVar15 = movmskpd((int)param_2,auVar46);
    auVar55._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
    auVar55._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
    uVar18 = movmskpd(param_3,auVar55);
    if ((uVar18 & 0x3fffffff) == 0 && iVar15 == 0) {
      dVar50 = *pdVar2;
      dVar52 = pdVar2[1];
      dVar6 = pdVar2[2];
      dVar7 = pdVar2[3];
      dVar44 = pdVar2[3];
      dVar27 = pdVar2[3];
      dVar51 = pdVar2[1];
      dVar45 = pdVar2[1];
      dVar49 = pdVar2[2];
      dVar47 = pdVar2[2];
      local_3e8._0_8_ =
           dVar54 * dVar49 * -1.0 + dVar35 * dVar51 + dVar22 * *pdVar2 * 1.0 + dVar39 * dVar44;
      local_3e8._8_8_ =
           dVar39 * dVar47 * 1.0 + dVar22 * dVar45 + dVar35 * *pdVar2 * -1.0 + dVar54 * dVar27;
      local_3b8._0_8_ =
           dVar22 * dVar49 * 1.0 + ((*pdVar2 * dVar54 * 1.0 + dVar35 * dVar44) - dVar39 * dVar51);
      local_3b8._8_8_ =
           dVar35 * dVar47 * -1.0 + ((*pdVar2 * dVar39 * -1.0 + dVar22 * dVar27) - dVar54 * dVar45);
      dVar48 = *(double *)(lVar17 + 0x20) * dVar48;
      dVar53 = *(double *)(lVar17 + 0x28) * dVar53;
      dVar54 = *(double *)(lVar17 + 0x30) * dVar34;
      dVar22 = dVar26 * 0.0;
      dVar45 = dVar53 * dVar50 - dVar48 * dVar52;
      dVar51 = dVar54 * dVar52 - dVar53 * dVar6;
      dVar35 = dVar48 * dVar6 - dVar54 * dVar50;
      dVar39 = dVar22 * dVar7 - dVar22 * dVar7;
      dVar51 = dVar51 + dVar51;
      dVar35 = dVar35 + dVar35;
      dVar45 = dVar45 + dVar45;
      dVar39 = dVar39 + dVar39;
      local_3d8 = (dVar45 * dVar52 - dVar6 * dVar35) + dVar44 * dVar51 + dVar48 + pdVar2[4];
      dStack_3d0 = (dVar51 * dVar6 - dVar45 * dVar50) + dVar27 * dVar35 + dVar53 + pdVar2[5];
      local_3f8._0_8_ = (dVar35 * dVar50 - dVar52 * dVar51) + dVar44 * dVar45 + dVar54 + pdVar2[6];
      local_3f8._8_8_ = (dVar39 * dVar7 - dVar39 * dVar7) + dVar27 * dVar39 + dVar22 + pdVar2[7];
      local_408._8_4_ = SUB84(dVar26 * 0.0,0);
      local_408._0_8_ = dVar34 * 1.0;
      local_408._12_4_ = (int)((ulonglong)(dVar26 * 0.0) >> 0x20);
    }
    else {
      dVar45 = *pdVar2;
      dVar51 = pdVar2[1];
      dVar44 = pdVar2[2];
      dVar47 = dVar51 + dVar51;
      dVar49 = dVar44 + dVar44;
      dVar27 = dVar45 * (dVar45 + dVar45);
      local_1f8 = (1.0 - (dVar44 * dVar49 + dVar51 * dVar47)) * dVar48;
      dStack_1d0 = (1.0 - (dVar44 * dVar49 + dVar27)) * dVar53;
      dVar44 = pdVar2[3];
      dVar50 = dVar49 * dVar44;
      dVar52 = (dVar45 + dVar45) * pdVar2[3];
      dVar44 = dVar47 * dVar44;
      local_1d8 = (dVar47 * dVar45 - dVar50) * dVar53;
      dStack_1b0 = (dVar49 * dVar51 - dVar52) * dVar34;
      local_1b8 = (dVar44 + *pdVar2 * dVar49) * dVar34;
      dStack_1f0 = (dVar47 * dVar45 + dVar50) * dVar48;
      local_1c8 = (dVar49 * dVar51 + dVar52) * dVar53;
      local_1a8 = (1.0 - (dVar27 + dVar51 * dVar47)) * dVar34;
      local_1e8 = (longlong *)((*pdVar2 * dVar49 - dVar44) * dVar48);
      uStack_1e0 = 0;
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198 = pdVar2[4];
      dStack_190 = pdVar2[5];
      local_188 = pdVar2[6];
      uStack_180 = 0x3ff0000000000000;
      auVar43._8_4_ = SUB84(dVar54,0);
      auVar43._0_8_ = dVar39;
      auVar43._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
      dVar48 = auVar43._8_8_ + dVar54;
      dVar44 = dVar35 + dVar35;
      dVar53 = dVar39 * (dVar39 + dVar39);
      local_278 = 1.0 - (dVar35 * dVar44 + dVar54 * dVar48);
      dStack_250 = 1.0 - (dVar35 * dVar44 + dVar53);
      local_228 = 1.0 - (dVar53 + dVar54 * dVar48);
      dStack_230 = (dVar39 + dVar39) * dVar22;
      dStack_270 = dVar48 * dVar39 + dVar44 * dVar22;
      local_248 = dVar44 * dVar54 + dStack_230;
      local_258 = dVar48 * dVar39 - dVar44 * dVar22;
      dStack_230 = dVar44 * dVar54 - dStack_230;
      local_238 = dVar48 * dVar22 + dVar39 * dVar44;
      local_268 = dVar39 * dVar44 - dVar48 * dVar22;
      uStack_260 = 0;
      uStack_240 = 0;
      uStack_220 = 0;
      local_208._8_4_ = 0;
      local_208._0_8_ = *(double *)(lVar17 + 0x30);
      local_208._12_4_ = 0x3ff00000;
      local_218 = *(double *)(lVar17 + 0x20);
      dStack_210 = *(double *)(lVar17 + 0x28);
      FUN_1447fea8d(&local_178);
      auVar43 = _DAT_149934d80;
      local_438 = local_168;
      dVar48 = (double)local_168 * (double)local_168 +
               local_178 * local_178 + dStack_170 * dStack_170;
      dVar54 = local_148 * local_148 + local_158 * local_158 + dStack_150 * dStack_150;
      dVar22 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
      uVar20 = -(ulonglong)(0.0 <= dVar48 + -9.99999993922529e-09);
      dVar53 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar48)) & uVar20);
      uVar20 = -(ulonglong)(0.0 <= dVar54 + -9.99999993922529e-09);
      dVar54 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar54)) & uVar20);
      uVar20 = -(ulonglong)(0.0 <= dVar22 + -9.99999993922529e-09);
      dVar22 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar22)) & uVar20);
      auVar41._8_8_ = -(ulonglong)(0.0 <= (double)local_428._8_8_);
      auVar41._0_8_ = -(ulonglong)(0.0 <= (double)local_428._0_8_);
      auVar55 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar41);
      local_408._8_8_ = dVar26 * 0.0;
      local_408._0_8_ = dVar34 * 1.0;
      uVar20 = -(ulonglong)(0.0 <= dVar34 * 1.0);
      dVar48 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
      dVar34 = auVar55._0_8_;
      local_178 = local_178 * dVar53 * dVar34;
      dStack_170 = dStack_170 * dVar53 * dVar34;
      local_168 = (longlong *)(dVar53 * (double)local_168 * dVar34);
      dVar34 = auVar55._8_8_;
      local_148 = dVar54 * local_148 * dVar34;
      dStack_150 = dStack_150 * dVar54 * dVar34;
      local_158 = dVar34 * local_158 * dVar54;
      local_128 = dVar22 * local_128 * dVar48;
      local_130 = local_130 * dVar22 * dVar48;
      local_138 = dVar48 * local_138 * dVar22;
      FUN_14481fd10(&local_298,&local_178);
      dVar48 = local_288 * local_288 + local_298 * local_298;
      dVar34 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar32._0_8_ = dVar48 + dVar34;
      auVar32._8_8_ = dVar48 + dVar34;
      auVar23._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_);
      auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_);
      auVar55 = sqrtpd(auVar32,auVar32);
      auVar43 = divpd(auVar43,auVar55);
      auVar36._0_8_ = auVar43._0_8_ * local_288;
      auVar36._8_8_ = auVar43._8_8_ * dStack_280;
      local_3b8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar36,auVar23);
      local_3d8 = (double)CONCAT44(uStack_114,local_118);
      dStack_3d0 = dStack_110;
      local_3e8._8_8_ =
           (ulonglong)(dStack_290 * auVar43._8_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_);
      local_3e8._0_8_ =
           (ulonglong)(local_298 * auVar43._0_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_);
      local_3f8._8_8_ = 0;
      local_3f8._0_8_ = local_108;
      lVar17 = *(longlong *)(*local_430 + 0x40);
    }
    auVar43 = local_408;
    uVar20 = (ulonglong)*(uint *)(lVar17 + 0x88);
    local_2a8 = 0;
    uStack_2a0 = 0;
    if ((int)*(uint *)(lVar17 + 0x88) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar20);
    }
    uVar5 = local_428._0_8_;
    uVar8 = local_428._8_8_;
    dVar48 = local_408._0_8_;
    if (uVar20 != 0) {
      FUN_144724de8(&local_2a8,uVar20);
      if (*local_430 != 0) {
        lVar17 = *(longlong *)(*local_430 + 0x40);
        uVar18 = *(uint *)(lVar17 + 0x88);
        uVar21 = (ulonglong)uVar18;
        if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar21);
        }
        uVar10 = uStack_2a0._4_4_;
        uStack_2a0 = (ulonglong)uStack_2a0._4_4_ << 0x20;
        if ((int)uVar10 < (int)uVar18) {
          FUN_144724de8(&local_2a8,uVar18);
        }
        if (uVar21 != 0) {
          local_438 = (longlong *)(lVar17 + 0x78);
          uVar16 = 0;
          do {
            uVar9 = uStack_2a0;
            lVar12 = *(longlong *)(lVar17 + 0x80);
            if (*(longlong *)(lVar17 + 0x80) == 0) {
              lVar12 = (longlong)local_438;
            }
            uVar3 = *(undefined8 *)(lVar12 + uVar16 * 8);
            lVar12 = *local_430;
            lVar19 = (longlong)(int)uStack_2a0;
            uVar18 = (int)uStack_2a0 + 1;
            uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar18);
            if (uStack_2a0._4_4_ < uVar18) {
              FUN_1417333de(&local_2a8,uVar9 & 0xffffffff);
            }
            *(undefined8 *)(local_2a8 + lVar19 * 0x10) = uVar3;
            *(longlong *)(local_2a8 + 8 + lVar19 * 0x10) = lVar12;
            uVar16 = uVar16 + 1;
          } while (uVar21 != uVar16);
        }
      }
      dVar26 = (double)local_3e8._8_8_ + (double)local_3e8._8_8_;
      dVar34 = (double)local_3b8._0_8_ + (double)local_3b8._0_8_;
      dVar53 = (double)local_3e8._0_8_ * ((double)local_3e8._0_8_ + (double)local_3e8._0_8_);
      local_338 = (1.0 - ((double)local_3b8._0_8_ * dVar34 + (double)local_3e8._8_8_ * dVar26)) *
                  (double)uVar5;
      dStack_2e0 = (1.0 - ((double)local_3b8._0_8_ * dVar34 + dVar53)) * (double)uVar8;
      local_318 = (1.0 - (dVar53 + (double)local_3e8._8_8_ * dVar26)) * dVar48;
      local_358 = (double)local_3e8._0_8_;
      dStack_350 = (double)local_3e8._0_8_;
      dVar53 = ((double)local_3e8._0_8_ + (double)local_3e8._0_8_) * (double)local_3b8._8_8_;
      local_368 = (double)local_3b8._8_8_;
      dStack_360 = (double)local_3b8._8_8_;
      dStack_330 = (dVar26 * (double)local_3e8._0_8_ + dVar34 * (double)local_3b8._8_8_) *
                   (double)uVar5;
      local_308 = (dVar34 * (double)local_3e8._8_8_ + dVar53) * (double)uVar8;
      local_2f8 = ((double)local_3e8._0_8_ * dVar34 + dVar26 * (double)local_3b8._8_8_) * dVar48;
      local_2e8 = (dVar26 * (double)local_3e8._0_8_ - dVar34 * (double)local_3b8._8_8_) *
                  (double)uVar8;
      dStack_2f0 = (dVar34 * (double)local_3e8._8_8_ - dVar53) * dVar48;
      local_328 = (longlong *)
                  (((double)local_3e8._0_8_ * dVar34 - dVar26 * (double)local_3b8._8_8_) *
                  (double)uVar5);
      uStack_310 = 0;
      uStack_320 = 0;
      uStack_300 = 0;
      local_348 = (double)local_3f8._0_8_;
      uStack_340 = 0x3ff0000000000000;
      local_378 = (double)local_3e8._8_8_;
      dStack_370 = (double)local_3e8._8_8_;
      local_388 = (double)local_3b8._0_8_;
      dStack_380 = (double)local_3b8._0_8_;
      local_398 = (double)local_3e8._0_8_;
      dStack_390 = (double)local_3b8._8_8_;
      local_3a8 = (double)local_3e8._8_8_;
      dStack_3a0 = (double)local_3b8._0_8_;
      local_438 = (longlong *)(local_410 + 8);
      lVar17 = 8;
      do {
        lVar12 = *(longlong *)(local_2a8 + -8 + lVar17);
        if (((lVar12 != 0) &&
            (uVar18 = *(uint *)(lVar12 + 0x54 + (ulonglong)((*(byte *)(lVar12 + 8) & 3) == 0) * 8),
            (uVar18 & 1) != 0)) &&
           ((lVar19 = *(longlong *)(local_2a8 + lVar17),
            *(char *)(*(longlong *)param_1[1] + 0xe5) != '\0' ||
            (((uVar18 & 0x3c00000) == 0 || (*(char *)param_1[2] != '\0')))))) {
          lVar4 = *(longlong *)(lVar12 + 0x10);
          bVar13 = lVar19 != 0 && *(char *)(lVar4 + 0x1c) == '\x04';
          if (*(char *)param_1[3] == '\x01') {
            if (bVar13) {
              dVar45 = *(double *)(lVar4 + 0x30);
              dVar51 = *(double *)(lVar4 + 0x38);
              auVar56 = *(undefined1 (*) [16])(lVar4 + 0x40);
              dVar54 = *(double *)(lVar4 + 0x50);
              dVar53 = *(double *)(lVar4 + 0x68);
              dVar44 = *(double *)(lVar4 + 0x70);
              dVar27 = *(double *)(lVar4 + 0x78);
              dVar48 = *(double *)(lVar4 + 0x80);
              dVar34 = *(double *)(lVar4 + 0x88);
              dVar22 = *(double *)(lVar4 + 0x60);
              dVar35 = *(double *)(lVar4 + 0x58);
            }
            else {
              dVar53 = 0.0;
              auVar56 = ZEXT816(0x3ff0000000000000) << 0x40;
              dVar48 = 1.0;
              dVar34 = 0.0;
              dVar44 = 1.0;
              dVar27 = 1.0;
              dVar54 = 0.0;
              dVar45 = 0.0;
              dVar51 = 0.0;
              dVar22 = 0.0;
              dVar35 = 0.0;
            }
          }
          else {
            if (bVar13) {
              dVar53 = *(double *)(lVar4 + 0x30);
              dVar26 = *(double *)(lVar4 + 0x38);
              dVar54 = *(double *)(lVar4 + 0x40);
              dVar22 = *(double *)(lVar4 + 0x48);
              dVar35 = *(double *)(lVar4 + 0x50);
              dVar39 = *(double *)(lVar4 + 0x58);
              uVar28 = *(undefined4 *)(lVar4 + 0x60);
              uVar29 = *(undefined4 *)(lVar4 + 100);
              uVar30 = *(undefined4 *)(lVar4 + 0x68);
              uVar31 = *(undefined4 *)(lVar4 + 0x6c);
              auVar55 = *(undefined1 (*) [16])(lVar4 + 0x70);
              dVar48 = *(double *)(lVar4 + 0x80);
              dVar34 = *(double *)(lVar4 + 0x88);
              auVar46 = minpd(auVar55,local_428._0_16_);
            }
            else {
              uVar28 = 0;
              uVar29 = 0;
              uVar30 = 0;
              uVar31 = 0;
              dVar54 = 0.0;
              dVar22 = 1.0;
              dVar48 = 1.0;
              dVar34 = 0.0;
              dVar35 = 0.0;
              dVar39 = 0.0;
              dVar53 = 0.0;
              dVar26 = 0.0;
              auVar55 = _DAT_149934d80;
              auVar46 = local_2b8;
            }
            auVar40._8_8_ = dVar34;
            auVar40._0_8_ = dVar48;
            auVar41 = minpd(auVar40,auVar43);
            auVar38._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
            auVar38._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
            iVar15 = movmskpd((int)lVar4,auVar38);
            auVar42._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
            auVar42._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
            uVar18 = movmskpd(CONCAT31((int3)(uVar18 >> 8),bVar13),auVar42);
            dVar44 = auVar55._0_8_;
            dVar27 = auVar55._8_8_;
            if ((uVar18 & 0x3fffffff) == 0 && iVar15 == 0) {
              dVar45 = dVar26 * local_388 * -1.0 +
                       local_358 * dVar22 * 1.0 + local_368 * dVar53 + local_378 * dVar54;
              dVar51 = dVar53 * dStack_380 * 1.0 +
                       dStack_350 * dVar54 * -1.0 + dStack_360 * dVar26 + dStack_370 * dVar22;
              auVar56._0_8_ =
                   dVar22 * local_388 * 1.0 +
                   ((local_358 * dVar26 * 1.0 + local_368 * dVar54) - local_378 * dVar53);
              auVar56._8_8_ =
                   dVar54 * dStack_380 * -1.0 +
                   ((dStack_350 * dVar53 * -1.0 + dStack_360 * dVar22) - dStack_370 * dVar26);
              dVar35 = dVar35 * (double)local_428._0_8_;
              dVar39 = dVar39 * (double)local_428._8_8_;
              dVar53 = (double)CONCAT44(uVar29,uVar28) * local_408._0_8_;
              dVar26 = (double)CONCAT44(uVar31,uVar30) * local_408._8_8_;
              dVar49 = dVar39 * (double)local_3e8._0_8_ - local_3a8 * dVar35;
              dVar50 = dVar53 * (double)local_3e8._8_8_ - dStack_3a0 * dVar39;
              dVar22 = dVar35 * (double)local_3b8._0_8_ - local_398 * dVar53;
              dVar47 = dVar26 * (double)local_3b8._8_8_ - dStack_390 * dVar26;
              dVar50 = dVar50 + dVar50;
              dVar22 = dVar22 + dVar22;
              dVar49 = dVar49 + dVar49;
              dVar47 = dVar47 + dVar47;
              dVar54 = (dVar49 * (double)local_3e8._8_8_ - dStack_3a0 * dVar22) +
                       local_368 * dVar50 + dVar35 + local_3d8;
              dVar35 = (dVar50 * (double)local_3b8._0_8_ - dVar49 * local_398) +
                       dStack_360 * dVar22 + dVar39 + dStack_3d0;
              dVar22 = (dVar22 * (double)local_3e8._0_8_ - local_3a8 * dVar50) +
                       local_368 * dVar49 + dVar53 + (double)local_3f8._0_8_;
              dVar53 = (dVar47 * (double)local_3b8._8_8_ - dVar47 * dStack_390) +
                       dStack_360 * dVar47 + dVar26 + (double)local_3f8._8_8_;
              dVar44 = dVar44 * (double)local_428._0_8_;
              dVar27 = dVar27 * (double)local_428._8_8_;
              dVar48 = dVar48 * local_408._0_8_;
              dVar34 = dVar34 * local_408._8_8_;
              auVar43 = local_408;
            }
            else {
              local_2c8 = auVar43._0_8_ * dVar48;
              dStack_2c0 = auVar43._8_8_ * dVar34;
              dVar34 = dVar26 + dVar26;
              dVar51 = dVar54 + dVar54;
              dVar45 = dVar53 * (dVar53 + dVar53);
              local_228 = (1.0 - (dVar45 + dVar26 * dVar34)) * dVar48;
              dVar47 = (dVar53 + dVar53) * dVar22;
              local_238 = (dVar34 * dVar22 + dVar53 * dVar51) * dVar48;
              local_258 = (dVar34 * dVar53 - dVar51 * dVar22) * dVar27;
              dStack_230 = (dVar51 * dVar26 - dVar47) * dVar48;
              local_2d8 = (double)local_428._0_8_ * dVar44;
              dStack_2d0 = (double)local_428._8_8_ * dVar27;
              local_278 = (1.0 - (dVar54 * dVar51 + dVar26 * dVar34)) * dVar44;
              dStack_250 = (1.0 - (dVar54 * dVar51 + dVar45)) * dVar27;
              dStack_270 = (dVar34 * dVar53 + dVar51 * dVar22) * dVar44;
              local_248 = (dVar51 * dVar26 + dVar47) * dVar27;
              local_268 = (dVar53 * dVar51 - dVar34 * dVar22) * dVar44;
              uStack_260 = 0;
              uStack_240 = 0;
              uStack_220 = 0;
              local_208._4_4_ = uVar29;
              local_208._0_4_ = uVar28;
              local_208._8_4_ = 0;
              local_208._12_4_ = 0x3ff00000;
              local_1f8 = local_338;
              dStack_1f0 = dStack_330;
              local_1e8 = local_328;
              uStack_1e0 = uStack_320;
              local_1d8 = local_2e8;
              dStack_1d0 = dStack_2e0;
              local_1c8 = local_308;
              uStack_1c0 = uStack_300;
              local_1b8 = local_2f8;
              dStack_1b0 = dStack_2f0;
              local_1a8 = local_318;
              uStack_1a0 = uStack_310;
              local_198 = local_3d8;
              dStack_190 = dStack_3d0;
              local_188 = local_348;
              uStack_180 = uStack_340;
              local_218 = dVar35;
              dStack_210 = dVar39;
              FUN_1447fea8d(&local_178,&local_278,&local_1f8);
              dVar34 = dStack_2c0;
              dVar48 = local_2c8;
              dVar27 = dStack_2d0;
              dVar44 = local_2d8;
              auVar43 = local_408;
              auVar55 = _DAT_149934d80;
              dVar26 = (double)local_168 * (double)local_168 +
                       local_178 * local_178 + dStack_170 * dStack_170;
              local_3c0 = local_158;
              dVar54 = local_148 * local_148 + local_158 * local_158 + dStack_150 * dStack_150;
              dVar53 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
              uVar21 = -(ulonglong)(0.0 <= dVar26 + -9.99999993922529e-09);
              dVar26 = (double)(~uVar21 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar26)) & uVar21);
              uVar21 = -(ulonglong)(0.0 <= dVar54 + -9.99999993922529e-09);
              dVar54 = (double)(~uVar21 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar54)) & uVar21);
              uVar21 = -(ulonglong)(0.0 <= dVar53 + -9.99999993922529e-09);
              dVar53 = (double)(~uVar21 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar53)) & uVar21);
              auVar24._8_8_ = -(ulonglong)(0.0 <= dStack_2d0);
              auVar24._0_8_ = -(ulonglong)(0.0 <= local_2d8);
              auVar46 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar24);
              dVar22 = (double)(~-(ulonglong)(0.0 <= local_2c8) & 0xbff0000000000000 |
                               -(ulonglong)(0.0 <= local_2c8) & 0x3ff0000000000000);
              dVar35 = auVar46._0_8_;
              local_178 = local_178 * dVar26 * dVar35;
              dStack_170 = dStack_170 * dVar26 * dVar35;
              local_168 = (longlong *)(dVar26 * (double)local_168 * dVar35);
              dVar26 = auVar46._8_8_;
              local_148 = dVar54 * local_148 * dVar26;
              dStack_150 = dStack_150 * dVar54 * dVar26;
              local_158 = dVar26 * local_158 * dVar54;
              local_128 = dVar53 * local_128 * dVar22;
              local_130 = local_130 * dVar53 * dVar22;
              local_138 = dVar22 * local_138 * dVar53;
              FUN_14481fd10(&local_298,&local_178);
              dVar53 = local_288 * local_288 + local_298 * local_298;
              dVar26 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
              auVar33._0_8_ = dVar53 + dVar26;
              auVar33._8_8_ = dVar53 + dVar26;
              auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_);
              auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_);
              auVar46 = sqrtpd(auVar33,auVar33);
              auVar55 = divpd(auVar55,auVar46);
              auVar37._0_8_ = auVar55._0_8_ * local_288;
              auVar37._8_8_ = auVar55._8_8_ * dStack_280;
              dVar45 = (double)((ulonglong)(local_298 * auVar55._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_));
              dVar51 = (double)((ulonglong)(dStack_290 * auVar55._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_));
              auVar56 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar37,auVar25);
              dVar54 = (double)CONCAT44(uStack_114,local_118);
              dVar53 = 0.0;
              dVar22 = local_108;
              dVar35 = dStack_110;
            }
          }
          uVar5 = *(undefined8 *)param_1[4];
          FUN_140d4ccda(&local_178,local_430);
          local_1d8 = local_158;
          dStack_1d0 = dStack_150;
          local_1e8 = local_168;
          uStack_1e0 = CONCAT44(uStack_15c,uStack_160);
          local_1f8 = local_178;
          dStack_1f0 = dStack_170;
          uVar11 = local_148._0_1_;
          local_278._0_7_ = (undefined7)((ulonglong)local_148 >> 8);
          iVar15 = *(int *)(local_410 + 0x10);
          *(uint *)(local_410 + 0x10) = iVar15 + 1U;
          if (*(uint *)(local_410 + 0x14) < iVar15 + 1U) {
            FUN_1418062f6(local_438,iVar15);
          }
          lVar4 = *local_438;
          lVar14 = (longlong)iVar15 * 0xb0;
          *(double *)(lVar4 + lVar14) = dVar45;
          ((double *)(lVar4 + lVar14))[1] = dVar51;
          *(undefined1 (*) [16])(lVar4 + 0x10 + lVar14) = auVar56;
          pdVar2 = (double *)(lVar4 + 0x20 + lVar14);
          *pdVar2 = dVar54;
          pdVar2[1] = dVar35;
          pdVar2 = (double *)(lVar4 + 0x30 + lVar14);
          *pdVar2 = dVar22;
          pdVar2[1] = dVar53;
          pdVar2 = (double *)(lVar4 + 0x40 + lVar14);
          *pdVar2 = dVar44;
          pdVar2[1] = dVar27;
          pdVar2 = (double *)(lVar4 + 0x50 + lVar14);
          *pdVar2 = dVar48;
          pdVar2[1] = dVar34;
          *(longlong *)(lVar4 + 0x60 + lVar14) = lVar12;
          *(longlong *)(lVar4 + 0x68 + lVar14) = lVar19;
          *(undefined8 *)(lVar4 + 0x70 + lVar14) = uVar5;
          pdVar2 = (double *)(lVar4 + 0x78 + lVar14);
          *pdVar2 = local_1f8;
          pdVar2[1] = dStack_1f0;
          puVar1 = (undefined8 *)(lVar4 + 0x88 + lVar14);
          *puVar1 = local_1e8;
          puVar1[1] = uStack_1e0;
          pdVar2 = (double *)(lVar4 + 0x98 + lVar14);
          *pdVar2 = local_1d8;
          pdVar2[1] = dStack_1d0;
          *(undefined1 *)(lVar4 + 0xa8 + lVar14) = uVar11;
          uVar28 = (undefined4)local_278;
          *(undefined4 *)(lVar4 + 0xa9 + lVar14) = uVar28;
          *(undefined4 *)(lVar4 + 0xac + lVar14) = local_278._3_4_;
        }
        lVar17 = lVar17 + 0x10;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
      if (local_2a8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143803fd4 FUN_143803fd4 body=122 status=ok
// SIG undefined FUN_143803fd4(void)

void FUN_143803fd4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xf8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xf8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xf8 + 4) = uVar5;
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



// FUNCTION 14380404e FUN_14380404e body=301 status=ok
// SIG undefined FUN_14380404e(void)

void FUN_14380404e(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar4 = (ulonglong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar5 = uVar4 + 0xf;
      if (param_2 < 0xfff) {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
      }
      else {
        if ((uVar5 & 0x7fffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1438040af;
            lVar1 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar4 = -uVar4 & ((uVar5 & 0x7fffffff0) + uVar4) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
    }
  }
LAB_1438040af:
  iVar3 = (int)(uVar4 >> 3);
  iVar7 = 0x7fffffff;
  if ((int)param_2 <= iVar3) {
    iVar7 = iVar3;
  }
  if (iVar7 != *(int *)(param_1 + 0x8c)) {
    *(int *)(param_1 + 0x8c) = iVar7;
    FUN_14380417c(param_1,*(undefined4 *)(param_1 + 0x88));
    return;
  }
  return;
}



// FUNCTION 14380417c FUN_14380417c body=141 status=ok
// SIG undefined FUN_14380417c(void)

void FUN_14380417c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,8);
  return;
}



// FUNCTION 14380420a FUN_14380420a body=335 status=ok
// SIG undefined FUN_14380420a(void)

void FUN_14380420a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar3 = *(uint *)(param_1 + 0x88);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  iVar8 = 0x10;
  if (0x10 < uVar3) {
    lVar5 = (longlong)(int)uVar3;
    if (0x10 < *(uint *)(param_1 + 0x8c)) {
      lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
    }
    uVar6 = lVar5 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar6 + 0xf;
        if (uVar6 < 0x7ff1) {
          uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar2) {
              uVar7 = (ulonglong)bVar2;
            }
            uVar9 = 0x32 - (ulonglong)bVar2;
            do {
              uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14380429e;
              lVar5 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar5 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = (ulonglong)DAT_14c841df8;
          }
          uVar6 = -uVar6 & ((uVar1 & 0xfffffffffffffff0) + uVar6) - 1;
        }
      }
      else {
        uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
      }
    }
LAB_14380429e:
    iVar4 = (int)(uVar6 >> 3);
    iVar8 = 0x7fffffff;
    if ((int)uVar3 <= iVar4) {
      iVar8 = iVar4;
    }
  }
  *(int *)(param_1 + 0x8c) = iVar8;
  FUN_14380417c(param_1,param_2);
  return;
}



// FUNCTION 14380435a FUN_14380435a body=301 status=ok
// SIG undefined FUN_14380435a(void)

void FUN_14380435a(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar4 = (ulonglong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar5 = uVar4 + 0xf;
      if (param_2 < 0xfff) {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
      }
      else {
        if ((uVar5 & 0x7fffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1438043bb;
            lVar1 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar4 = -uVar4 & ((uVar5 & 0x7fffffff0) + uVar4) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
    }
  }
LAB_1438043bb:
  iVar3 = (int)(uVar4 >> 3);
  iVar7 = 0x7fffffff;
  if ((int)param_2 <= iVar3) {
    iVar7 = iVar3;
  }
  if (iVar7 != *(int *)(param_1 + 0x8c)) {
    *(int *)(param_1 + 0x8c) = iVar7;
    FUN_143804488(param_1,*(undefined4 *)(param_1 + 0x88));
    return;
  }
  return;
}



// FUNCTION 143804488 FUN_143804488 body=141 status=ok
// SIG undefined FUN_143804488(void)

void FUN_143804488(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,8);
  return;
}



// FUNCTION 143804516 FUN_143804516 body=335 status=ok
// SIG undefined FUN_143804516(void)

void FUN_143804516(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar3 = *(uint *)(param_1 + 0x88);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  iVar8 = 0x10;
  if (0x10 < uVar3) {
    lVar5 = (longlong)(int)uVar3;
    if (0x10 < *(uint *)(param_1 + 0x8c)) {
      lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
    }
    uVar6 = lVar5 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar6 + 0xf;
        if (uVar6 < 0x7ff1) {
          uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar2) {
              uVar7 = (ulonglong)bVar2;
            }
            uVar9 = 0x32 - (ulonglong)bVar2;
            do {
              uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_1438045aa;
              lVar5 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar5 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = (ulonglong)DAT_14c841df8;
          }
          uVar6 = -uVar6 & ((uVar1 & 0xfffffffffffffff0) + uVar6) - 1;
        }
      }
      else {
        uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
      }
    }
LAB_1438045aa:
    iVar4 = (int)(uVar6 >> 3);
    iVar8 = 0x7fffffff;
    if ((int)uVar3 <= iVar4) {
      iVar8 = iVar4;
    }
  }
  *(int *)(param_1 + 0x8c) = iVar8;
  FUN_143804488(param_1,param_2);
  return;
}



// FUNCTION 143804666 FUN_143804666 body=152 status=ok
// SIG undefined FUN_143804666(void)

void FUN_143804666(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_1408a45f2((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_1438046cf;
    }
  }
  uVar5 = 0;
LAB_1438046cf:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 1438046fe FUN_1438046fe body=91 status=ok
// SIG undefined FUN_1438046fe(void)

bool FUN_1438046fe(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14380472e;
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
LAB_14380472e:
  return lVar6 == param_2;
}



// FUNCTION 143804792 FUN_143804792 body=408 status=ok
// SIG undefined FUN_143804792(void)

void FUN_143804792(longlong *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar5 = FUN_1405e5186(param_1,param_3,local_48);
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      local_58 = *(undefined8 *)(param_3 + 8);
      local_78 = *param_3;
      uStack_74 = param_3[1];
      uStack_70 = param_3[2];
      uStack_6c = param_3[3];
      local_68 = param_3[4];
      uStack_64 = param_3[5];
      uStack_60 = param_3[6];
      uStack_5c = param_3[7];
      uVar3 = *param_2;
      iVar5 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
        FUN_141408df2(param_1,iVar5);
      }
      lVar4 = *param_1;
      lVar6 = (longlong)iVar5 * 0x30;
      *(undefined8 *)(lVar4 + 0x20 + lVar6) = local_58;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar6);
      *puVar2 = CONCAT44(uStack_64,local_68);
      puVar2[1] = CONCAT44(uStack_5c,uStack_60);
      puVar1 = (undefined4 *)(lVar4 + lVar6);
      *puVar1 = local_78;
      puVar1[1] = uStack_74;
      puVar1[2] = uStack_70;
      puVar1[3] = uStack_6c;
      *(undefined8 *)(lVar4 + 0x28 + lVar6) = uVar3;
      goto LAB_14380490a;
    }
    iVar5 = (int)param_1[1];
    if (iVar5 < 100 ||
        ((double)param_1[8] - (double)param_1[6]) * ((double)param_1[8] - (double)param_1[6]) +
        ((double)param_1[9] - (double)param_1[7]) * ((double)param_1[9] - (double)param_1[7]) <=
        (double)(*(float *)(param_1 + 0xd) * *(float *)(param_1 + 0xd))) {
      local_58 = *(undefined8 *)(param_3 + 8);
      local_78 = *param_3;
      uStack_74 = param_3[1];
      uStack_70 = param_3[2];
      uStack_6c = param_3[3];
      local_68 = param_3[4];
      uStack_64 = param_3[5];
      uStack_60 = param_3[6];
      uStack_5c = param_3[7];
      uVar3 = *param_2;
      *(uint *)(param_1 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
        FUN_141408df2(param_1);
      }
      lVar4 = *param_1;
      lVar6 = (longlong)iVar5 * 0x30;
      *(undefined8 *)(lVar4 + 0x20 + lVar6) = local_58;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar6);
      *puVar2 = CONCAT44(uStack_64,local_68);
      puVar2[1] = CONCAT44(uStack_5c,uStack_60);
      puVar1 = (undefined4 *)(lVar4 + lVar6);
      *puVar1 = local_78;
      puVar1[1] = uStack_74;
      puVar1[2] = uStack_70;
      puVar1[3] = uStack_6c;
      *(undefined8 *)(lVar4 + 0x28 + lVar6) = uVar3;
      goto LAB_14380490a;
    }
    FUN_14140899a(param_1);
    local_48[0] = param_1;
  }
  FUN_143804792(local_48[0],param_2,param_3,param_4);
LAB_14380490a:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14380492c FUN_14380492c body=15972 status=ok
// SIG undefined FUN_14380492c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14380492c(double *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  double *pdVar5;
  double *pdVar6;
  float fVar7;
  undefined1 auVar8 [16];
  double *pdVar9;
  undefined8 uVar10;
  undefined8 *****pppppuVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *****pppppuVar18;
  undefined8 *****pppppuVar19;
  undefined8 *****pppppuVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 ******ppppppuVar23;
  char cVar24;
  byte bVar25;
  int iVar26;
  undefined8 *puVar27;
  double dVar28;
  int *piVar29;
  int *piVar30;
  undefined8 *******pppppppuVar31;
  uint *puVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  undefined8 ******ppppppuVar36;
  undefined8 ******ppppppuVar37;
  longlong *plVar38;
  int *piVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 *puVar42;
  undefined8 ******ppppppuVar43;
  uint uVar44;
  int iVar45;
  int iVar46;
  longlong lVar47;
  longlong lVar48;
  undefined8 *******pppppppuVar49;
  ulonglong uVar50;
  code *pcVar51;
  undefined8 ******ppppppuVar52;
  int iVar53;
  undefined *_Src;
  undefined8 ******ppppppuVar54;
  undefined8 ******ppppppuVar55;
  undefined8 ******ppppppuVar56;
  longlong lVar57;
  int *piVar58;
  uint uVar59;
  undefined8 ******ppppppuVar60;
  undefined8 ******ppppppuVar61;
  uint *puVar62;
  PSRWLOCK SRWLock;
  int *piVar63;
  undefined1 *puVar64;
  bool bVar65;
  float fVar66;
  float fVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  float fVar73;
  double dVar74;
  float fVar75;
  float fVar76;
  double dVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined1 auStack_b098 [32];
  double *local_b078;
  undefined8 local_b070;
  int *local_b060;
  int *local_b058;
  double local_b050;
  uint *local_b048;
  PSRWLOCK local_b040;
  int *local_b038;
  undefined8 *******local_b030;
  double local_b028;
  double local_b020;
  undefined1 local_b018 [16];
  int *local_b008;
  undefined8 uStack_b000;
  undefined1 local_aff8 [16];
  int *local_afe0;
  undefined8 local_afd8;
  undefined4 uStack_afd0;
  undefined4 uStack_afcc;
  undefined8 local_afc0;
  int iStack_afb8;
  undefined4 uStack_afb4;
  double local_afb0;
  double dStack_afa8;
  double local_afa0;
  double dStack_af98;
  double local_af90;
  double dStack_af88;
  double local_af80;
  longlong *local_af78;
  undefined4 local_af70;
  int *local_6b8;
  undefined8 local_6b0;
  double local_6a8;
  undefined8 uStack_6a0;
  undefined8 *******local_698;
  undefined8 *******pppppppuStack_690;
  float fStack_68c;
  double local_688;
  undefined8 *******local_680;
  undefined8 *******pppppppuStack_678;
  int iStack_670;
  undefined2 uStack_66c;
  undefined1 uStack_66a;
  undefined1 uStack_669;
  undefined8 uStack_668;
  undefined1 auStack_660 [16];
  undefined8 local_650;
  undefined8 local_648;
  int local_640;
  undefined8 local_638;
  longlong lStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  longlong local_5f0;
  int local_5e8;
  undefined8 local_5e0;
  char local_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  int local_5b8;
  undefined8 *******local_5b0;
  undefined8 *******pppppppuStack_5a8;
  double local_5a0;
  undefined8 *******pppppppuStack_598;
  undefined8 *******pppppppuStack_590;
  double dStack_588;
  undefined8 local_580;
  longlong lStack_578;
  int local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  char local_548;
  undefined1 local_540 [472];
  undefined8 *******local_368;
  int local_360;
  int local_35c;
  undefined1 *local_210;
  ulonglong local_208;
  undefined1 local_200 [16];
  undefined1 *local_1f0;
  ulonglong local_1e8;
  longlong local_1e0;
  longlong *plStack_1d8;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 *****local_138;
  undefined8 *******pppppppuStack_130;
  undefined1 auStack_128 [16];
  double local_118;
  longlong *local_110;
  undefined4 local_108;
  double local_100;
  ulonglong local_f0;
  undefined8 uStack_48;
  
  uStack_48 = 0x143804942;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_b098;
  dVar28 = *param_1;
  FUN_1402225ae(*(undefined8 *)((longlong)dVar28 + 0x598));
  local_b050 = dVar28;
  if (((*(char *)((longlong)dVar28 + 0x5cc) == '\x01') &&
      (0.0 < *(float *)((longlong)dVar28 + 0x5a4))) &&
     (iVar45 = *(int *)((longlong)dVar28 + 0x60), (longlong)iVar45 != 0)) {
    lVar57 = *(longlong *)((longlong)dVar28 + 0x58);
    lVar47 = 0;
    do {
      pdVar9 = *(double **)(lVar57 + lVar47);
      dVar28 = *pdVar9;
      if (((((-(double)DAT_14cb1c860 < dVar28) && (dVar28 < (double)DAT_14cb1c860)) &&
           ((dVar68 = pdVar9[1], -(double)DAT_14cb1c868 < dVar68 &&
            ((dVar68 < (double)DAT_14cb1c868 && (dVar74 = pdVar9[2], -DAT_14cb1c870 < dVar74))))))
          && (dVar74 < DAT_14cb1c870)) &&
         (((iVar26 = _finite(dVar28), iVar26 != 0 && (iVar26 = _finite(dVar68), iVar26 != 0)) &&
          (iVar26 = _finite(dVar74), iVar26 != 0)))) {
        FUN_1402ef798(pdVar9);
        if (((*(char *)((longlong)pdVar9 + 0x151) == '\x01') &&
            (*(char *)((longlong)pdVar9 + 0x51) == '\x01')) &&
           ((*(float *)(pdVar9 + 9) * *(float *)(pdVar9 + 9) + 0.01 <
             (float)((pdVar9[0x89] - *pdVar9) * (pdVar9[0x89] - *pdVar9) +
                    (pdVar9[0x8a] - pdVar9[1]) * (pdVar9[0x8a] - pdVar9[1])) ||
            (cVar24 = FUN_1401beb30(pdVar9 + 0x6a), cVar24 != '\0')))) {
          if (*(char *)(pdVar9 + 0x2b) == '\0') {
            if ((*(int *)((longlong)pdVar9 + 0x17c) != 0) &&
               (uVar44 = *(uint *)(pdVar9 + 0x2f), -1 < (int)uVar44)) {
              local_b070 = 0;
              if ((int)uVar44 < DAT_14c9647dc) {
                puVar27 = (undefined8 *)
                          ((ulonglong)((uVar44 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar44 >> 0x10) * 8));
                if (((puVar27 == (undefined8 *)0x0) ||
                    (*(int *)(puVar27 + 2) != *(int *)((longlong)pdVar9 + 0x17c))) ||
                   ((*(uint *)(puVar27 + 1) & 0x10200000) != 0)) {
                  local_b070 = 0;
                }
                else {
                  local_b070 = *puVar27;
                }
              }
              goto LAB_1438051db;
            }
LAB_143805445:
            local_b070 = 0;
          }
          else {
            if (((*(char *)(pdVar9 + 0x2b) != '\x02') || (*(int *)((longlong)pdVar9 + 0x184) == 0))
               || (uVar44 = *(uint *)(pdVar9 + 0x30), (int)uVar44 < 0)) goto LAB_143805445;
            local_b070 = 0;
            if ((int)uVar44 < DAT_14c9647dc) {
              plVar38 = (longlong *)
                        ((ulonglong)((uVar44 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar44 >> 0x10) * 8));
              if ((((plVar38 == (longlong *)0x0) ||
                   ((int)plVar38[2] != *(int *)((longlong)pdVar9 + 0x184))) ||
                  ((*(uint *)(plVar38 + 1) & 0x10200000) != 0)) || (*plVar38 == 0))
              goto LAB_143805445;
              local_b070 = *(undefined8 *)(*plVar38 + 0xa8);
            }
          }
LAB_1438051db:
          dVar28 = pdVar9[0x8b];
          local_698 = (undefined8 *******)*pdVar9;
          pppppppuStack_690 = (undefined8 *******)pdVar9[1];
          local_688 = pdVar9[2] - (double)*(float *)((longlong)pdVar9 + 0x4c);
          local_b078 = (double *)CONCAT44(local_b078._4_4_,*(undefined4 *)(pdVar9 + 0x43));
          FUN_141807377(&local_afc0,(double)*(float *)((longlong)pdVar9 + 0x4c),&local_698,
                        *(undefined4 *)(pdVar9 + 0x44));
          pdVar9[0x8b] = local_afb0;
          pdVar9[0x89] = local_afc0;
          pdVar9[0x8a] = (double)CONCAT44(uStack_afb4,iStack_afb8);
          if (10.0 < ABS((double)(float)dVar28 - pdVar9[0x8b])) {
            FUN_1402ef798(pdVar9);
          }
        }
        pdVar5 = pdVar9 + 0x6a;
        cVar24 = FUN_1401beb30(pdVar5);
        if (cVar24 != '\0') {
          pdVar6 = pdVar9 + 0x7f;
          local_b078 = pdVar6;
          FUN_14382d2f2(&local_afc0,local_b050,pdVar9 + 0x43,pdVar5);
          if (iStack_afb8 - 1U < 2) {
            if (((int)local_afc0 == -1) || (local_afc0._4_4_ == -1)) goto LAB_143805029;
LAB_143804b90:
            if (((local_afb0 <= -(double)DAT_14cb1c860) ||
                ((((double)DAT_14cb1c860 <= local_afb0 || (dStack_afa8 <= -(double)DAT_14cb1c868))
                 || ((double)DAT_14cb1c868 <= dStack_afa8)))) ||
               ((((local_afa0 <= -DAT_14cb1c870 || (DAT_14cb1c870 <= local_afa0)) ||
                 (iVar26 = _finite(local_afb0), iVar26 == 0)) ||
                ((iVar26 = _finite(dStack_afa8), iVar26 == 0 ||
                 (iVar26 = _finite(local_afa0), iVar26 == 0)))))) goto LAB_143805029;
            *(int *)(pdVar9 + 0x6b) = iStack_afb8;
            *pdVar5 = local_afc0;
            pdVar9[0x70] = local_af90;
            pdVar9[0x71] = dStack_af88;
            pdVar9[0x6e] = local_afa0;
            pdVar9[0x6f] = dStack_af98;
            pdVar9[0x6c] = local_afb0;
            pdVar9[0x6d] = dStack_afa8;
            if (local_af78 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_af78 + 1) = (int)local_af78[1] + 1;
              UNLOCK();
            }
            plVar38 = (longlong *)pdVar9[0x73];
            pdVar9[0x72] = local_af80;
            pdVar9[0x73] = (double)local_af78;
            if (plVar38 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar38 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*plVar38)(plVar38);
                LOCK();
                piVar63 = (int *)((longlong)plVar38 + 0xc);
                *piVar63 = *piVar63 + -1;
                UNLOCK();
                if (*piVar63 == 0) {
                  (**(code **)(*plVar38 + 0x10))(plVar38);
                }
              }
            }
            *(undefined4 *)(pdVar9 + 0x74) = local_af70;
            pdVar9[0x75] = *pdVar6;
            pdVar9[0x76] = pdVar9[0x80];
            *(undefined1 (*) [16])(pdVar9 + 0x77) = *(undefined1 (*) [16])(pdVar9 + 0x81);
            *(undefined1 (*) [16])(pdVar9 + 0x79) = *(undefined1 (*) [16])(pdVar9 + 0x83);
            dVar28 = pdVar9[0x85];
            dVar68 = pdVar9[0x86];
            if (dVar68 != 0.0) {
              LOCK();
              *(int *)((longlong)dVar68 + 8) = *(int *)((longlong)dVar68 + 8) + 1;
              UNLOCK();
            }
            plVar38 = (longlong *)pdVar9[0x7c];
            pdVar9[0x7b] = dVar28;
            pdVar9[0x7c] = dVar68;
            if (plVar38 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar38 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*plVar38)(plVar38);
                LOCK();
                piVar63 = (int *)((longlong)plVar38 + 0xc);
                *piVar63 = *piVar63 + -1;
                UNLOCK();
                if (*piVar63 == 0) {
                  (**(code **)(*plVar38 + 0x10))(plVar38);
                }
              }
            }
            *(undefined4 *)(pdVar9 + 0x7d) = *(undefined4 *)(pdVar9 + 0x87);
            pdVar9[0x7e] = pdVar9[0x88];
            *(undefined4 *)(pdVar9 + 0x8c) = *(undefined4 *)(pdVar9 + 0x44);
            FUN_1402eff60(pdVar9 + 0x75,&local_af80);
            FUN_1402eff60(pdVar6);
            if (((((*(char *)((longlong)pdVar9 + 0x1a1) == '\x01') &&
                  (*(char *)((longlong)pdVar9 + 0x1a2) == '\x01')) &&
                 (*(char *)((longlong)pdVar9 + 0x1a3) == '\x01')) &&
                ((*(char *)((longlong)pdVar9 + 0x1a4) == '\x01' &&
                 (*(char *)((longlong)pdVar9 + 0x1a5) == '\x01')))) &&
               ((0.0 < *(float *)(pdVar9 + 0x33) &&
                ((0.0 < *(float *)((longlong)pdVar9 + 0x19c) &&
                 (1.0 < (pdVar9[0x76] - pdVar9[0x6d]) * (pdVar9[0x76] - pdVar9[0x6d]) +
                        (pdVar9[0x75] - pdVar9[0x6c]) * (pdVar9[0x75] - pdVar9[0x6c]))))))) {
              local_650 = 0;
              local_688 = pdVar9[0x6e];
              local_698 = (undefined8 *******)pdVar9[0x6c];
              pppppppuStack_690 = (undefined8 *******)pdVar9[0x6d];
              pppppppuStack_130 = DAT_14cb1c860;
              auStack_128._8_8_ = DAT_14cb1c870;
              auStack_128._0_8_ = DAT_14cb1c868;
              local_680 = DAT_14cb1c860;
              pppppppuStack_678 = DAT_14cb1c868;
              iStack_670 = SUB84(DAT_14cb1c870,0);
              uStack_66c = (undefined2)((ulonglong)DAT_14cb1c870 >> 0x20);
              uStack_66a = (undefined1)((ulonglong)DAT_14cb1c870 >> 0x30);
              uStack_669 = (undefined1)((ulonglong)DAT_14cb1c870 >> 0x38);
              uStack_668 = 0;
              auStack_660._0_12_ = ZEXT412(0xffffffff) << 0x40;
              local_148 = local_698;
              uStack_140 = pppppppuStack_690;
              local_138 = (undefined8 *****)local_688;
              FUN_1402f021a(&local_698,
                            (float)((double)*(float *)((longlong)pdVar9 + 0x21c) - pdVar9[0x37]));
              local_650 = CONCAT44(*(undefined4 *)((longlong)pdVar9 + 0x19c),
                                   *(float *)(pdVar9 + 0x33) + *(float *)(pdVar9 + 0x43));
              local_148 = (undefined8 *******)*pdVar6;
              uStack_140 = (undefined8 *******)pdVar9[0x80];
              local_138 = (undefined8 *****)pdVar9[0x81];
              pppppppuStack_130 = (undefined8 *******)pdVar9[0x82];
              auStack_128 = *(undefined1 (*) [16])(pdVar9 + 0x83);
              local_118 = pdVar9[0x85];
              local_110 = (longlong *)pdVar9[0x86];
              if (local_110 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_110 + 1) = (int)local_110[1] + 1;
                UNLOCK();
              }
              local_108 = *(undefined4 *)(pdVar9 + 0x87);
              local_100 = pdVar9[0x88];
              FUN_1402f021a(&local_148);
              local_100 = pdVar9[9];
              cVar24 = FUN_1437fb8f2(&local_698);
              plVar38 = local_110;
              if (local_110 != (longlong *)0x0) {
                LOCK();
                plVar4 = local_110 + 1;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)*plVar4 == 0) {
                  (**(code **)*local_110)(local_110);
                  LOCK();
                  piVar63 = (int *)((longlong)plVar38 + 0xc);
                  *piVar63 = *piVar63 + -1;
                  UNLOCK();
                  if (*piVar63 == 0) {
                    (**(code **)(*plVar38 + 0x10))(plVar38);
                  }
                }
              }
              uVar10 = auStack_660._0_8_;
              if ((longlong *)auStack_660._0_8_ != (longlong *)0x0) {
                LOCK();
                plVar38 = (longlong *)(auStack_660._0_8_ + 8);
                *(int *)plVar38 = (int)*plVar38 + -1;
                UNLOCK();
                if ((int)*plVar38 == 0) {
                  (*(code *)**(undefined8 **)auStack_660._0_8_)(auStack_660._0_8_);
                  LOCK();
                  piVar63 = (int *)(uVar10 + 0xc);
                  *piVar63 = *piVar63 + -1;
                  UNLOCK();
                  if (*piVar63 == 0) {
                    (**(code **)(*(longlong *)uVar10 + 0x10))(uVar10);
                  }
                }
              }
              if (cVar24 == '\0') goto LAB_143805029;
            }
          }
          else {
            if (iStack_afb8 == 3) goto LAB_143804b90;
LAB_143805029:
            dVar28 = DAT_14cb1c870;
            pppppppuVar49 = DAT_14cb1c868;
            pppppppuVar31 = DAT_14cb1c860;
            local_688 = DAT_14cb1c870;
            local_698 = DAT_14cb1c860;
            pppppppuStack_690 = DAT_14cb1c868;
            iStack_670 = SUB84(DAT_14cb1c870,0);
            uStack_66c = (undefined2)((ulonglong)DAT_14cb1c870 >> 0x20);
            uStack_66a = (undefined1)((ulonglong)DAT_14cb1c870 >> 0x30);
            uStack_669 = (undefined1)((ulonglong)DAT_14cb1c870 >> 0x38);
            local_680 = DAT_14cb1c860;
            pppppppuStack_678 = DAT_14cb1c868;
            pdVar9[0x6a] = -NAN;
            *(undefined4 *)(pdVar9 + 0x6b) = 0;
            auVar8._8_4_ = iStack_670;
            auVar8._0_8_ = pppppppuVar49;
            auVar8._12_2_ = uStack_66c;
            auVar8[0xe] = uStack_66a;
            auVar8[0xf] = uStack_669;
            pdVar9[0x6c] = (double)pppppppuVar31;
            pdVar9[0x6d] = (double)pppppppuVar49;
            pdVar9[0x6e] = dVar28;
            pdVar9[0x6f] = (double)pppppppuVar31;
            *(undefined1 (*) [16])(pdVar9 + 0x70) = auVar8;
            pdVar9[0x72] = 0.0;
            plVar38 = (longlong *)pdVar9[0x73];
            if (plVar38 != (longlong *)0x0) {
              pdVar9[0x73] = 0.0;
              LOCK();
              plVar4 = plVar38 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*plVar38)(plVar38);
                LOCK();
                piVar63 = (int *)((longlong)plVar38 + 0xc);
                *piVar63 = *piVar63 + -1;
                UNLOCK();
                if (*piVar63 == 0) {
                  (**(code **)(*plVar38 + 0x10))(plVar38);
                }
              }
            }
            *(undefined4 *)(pdVar9 + 0x74) = 0xffffffff;
          }
          plVar38 = local_af78;
          if (local_af78 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_af78 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_af78)(local_af78);
              LOCK();
              piVar63 = (int *)((longlong)plVar38 + 0xc);
              *piVar63 = *piVar63 + -1;
              UNLOCK();
              if (*piVar63 == 0) {
                (**(code **)(*plVar38 + 0x10))(plVar38);
              }
            }
          }
        }
      }
      lVar47 = lVar47 + 8;
    } while ((longlong)iVar45 * 8 != lVar47);
  }
  dVar28 = local_b050;
  iVar45 = *(int *)((longlong)local_b050 + 0xd0);
  if ((longlong)iVar45 != 0) {
    lVar57 = *(longlong *)((longlong)local_b050 + 200);
    lVar47 = 0;
    do {
      iVar26 = *(int *)(lVar57 + 4 + lVar47);
      if (((((iVar26 != 0) && (uVar44 = *(uint *)(lVar57 + lVar47), -1 < (int)uVar44)) &&
           ((int)uVar44 < DAT_14c9647dc)) &&
          ((plVar38 = (longlong *)
                      ((ulonglong)((uVar44 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar44 >> 0x10) * 8)),
           plVar38 != (longlong *)0x0 && ((int)plVar38[2] == iVar26)))) &&
         (((*(uint *)(plVar38 + 1) & 0x10200000) == 0 && (*plVar38 != 0)))) {
        FUN_14493c85e();
      }
      lVar47 = lVar47 + 8;
    } while ((longlong)iVar45 * 8 != lVar47);
  }
  SRWLock = (PSRWLOCK)((longlong)dVar28 + 0x1d0);
  AcquireSRWLockExclusive(SRWLock);
  puVar62 = (uint *)((longlong)dVar28 + 0xf0);
  iVar45 = *(int *)((longlong)dVar28 + 0x108);
  local_b048 = puVar62;
  local_b040 = SRWLock;
  if (iVar45 == 0) {
    uVar50 = 1;
    uVar40 = 0;
    iVar53 = 0;
    iVar26 = 0;
  }
  else {
    puVar32 = *(uint **)((longlong)dVar28 + 0x100);
    if (*(uint **)((longlong)dVar28 + 0x100) == (uint *)0x0) {
      puVar32 = puVar62;
    }
    uVar44 = *puVar32;
    if (uVar44 == 0) {
      iVar26 = iVar45 + 0x1e;
      if (-1 < iVar45 + -1) {
        iVar26 = iVar45 + -1;
      }
      uVar40 = 0;
      uVar50 = (ulonglong)(uint)(iVar26 >> 5);
      if (iVar26 >> 5 < 1) {
        uVar50 = uVar40;
      }
      iVar53 = 0;
      do {
        if (uVar50 == uVar40) goto LAB_1438056c0;
        iVar53 = iVar53 + 0x20;
        uVar44 = puVar32[uVar40 + 1];
        uVar40 = uVar40 + 1;
      } while (uVar44 == 0);
    }
    else {
      uVar40 = 0;
      iVar53 = 0;
    }
    uVar50 = (ulonglong)(-uVar44 & uVar44);
    uVar41 = uVar50 * 2 + 1;
    lVar57 = 0x3f;
    if (uVar41 != 0) {
      for (; uVar41 >> lVar57 == 0; lVar57 = lVar57 + -1) {
      }
    }
    iVar26 = (iVar53 - ((uint)lVar57 ^ 0x3f)) + 0x3e;
    if (iVar45 <= iVar26) {
      iVar26 = iVar45;
    }
  }
  if (iVar26 != iVar45) {
    uVar44 = 0xffffffff;
    iVar46 = iVar45;
    do {
      if (*(longlong *)(*(longlong *)((longlong)dVar28 + 0xe0) + 8 + (longlong)iVar26 * 0x20) != 0)
      {
        FUN_14494286e();
        iVar46 = *(int *)((longlong)dVar28 + 0x108);
      }
      uVar44 = uVar44 & ~(uint)uVar50;
      puVar32 = *(uint **)((longlong)dVar28 + 0x100);
      if (*(uint **)((longlong)dVar28 + 0x100) == (uint *)0x0) {
        puVar32 = puVar62;
      }
      iVar26 = (int)uVar40;
      lVar57 = (longlong)iVar26;
      uVar33 = puVar32[lVar57] & uVar44;
      if (uVar33 == 0) {
        iVar34 = iVar46 + 0x1e;
        if (-1 < iVar46 + -1) {
          iVar34 = iVar46 + -1;
        }
        iVar34 = iVar34 >> 5;
        iVar53 = iVar53 + 0x20;
        iVar35 = iVar34;
        if (iVar34 < iVar26) {
          iVar35 = iVar26;
        }
        if (iVar26 < iVar34) {
          lVar47 = 0;
          do {
            uVar33 = puVar32[lVar57 + lVar47 + 1];
            if (uVar33 != 0) {
              uVar40 = (ulonglong)(iVar26 + (int)lVar47 + 1);
              uVar44 = 0xffffffff;
              goto LAB_143805677;
            }
            iVar53 = iVar53 + 0x20;
            lVar47 = lVar47 + 1;
          } while (iVar35 - lVar57 != lVar47);
          uVar44 = 0xffffffff;
          lVar57 = (longlong)iVar35;
        }
        uVar40 = lVar57 + 1U & 0xffffffff;
        puVar62 = local_b048;
        SRWLock = local_b040;
        dVar28 = local_b050;
        iVar26 = iVar46;
      }
      else {
LAB_143805677:
        uVar50 = (ulonglong)(-uVar33 & uVar33);
        uVar41 = uVar50 * 2 + 1;
        lVar57 = 0x3f;
        if (uVar41 != 0) {
          for (; uVar41 >> lVar57 == 0; lVar57 = lVar57 + -1) {
          }
        }
        iVar26 = (iVar53 - ((uint)lVar57 ^ 0x3f)) + 0x3e;
        if (iVar46 <= iVar26) {
          iVar26 = iVar46;
        }
      }
    } while (iVar26 != iVar45);
  }
LAB_1438056c0:
  ReleaseSRWLockExclusive(SRWLock);
  if (*(char *)((longlong)dVar28 + 0x1f0) == '\x01') {
    local_6b8 = (int *)0x0;
    local_6b0 = 0x2000000000;
    local_6a8 = 0.0;
    uStack_6a0 = 0;
    local_afc0 = dVar28;
    AcquireSRWLockShared(SRWLock);
    uVar44 = *(uint *)((longlong)dVar28 + 0x108);
    uVar40 = CONCAT44(0,uVar44);
    if (uVar44 == 0) {
      uVar41 = 1;
      piVar63 = (int *)0x0;
      iVar45 = 0;
      uVar33 = 0;
    }
    else {
      puVar32 = *(uint **)((longlong)dVar28 + 0x100);
      if (*(uint **)((longlong)dVar28 + 0x100) == (uint *)0x0) {
        puVar32 = puVar62;
      }
      uVar33 = *puVar32;
      if (uVar33 == 0) {
        iVar45 = uVar44 + 0x1e;
        if (-1 < (int)(uVar44 - 1)) {
          iVar45 = uVar44 - 1;
        }
        piVar63 = (int *)0x0;
        piVar30 = (int *)(ulonglong)(uint)(iVar45 >> 5);
        if (iVar45 >> 5 < 1) {
          piVar30 = piVar63;
        }
        iVar45 = 0;
        do {
          if (piVar30 == piVar63) goto LAB_143806304;
          iVar45 = iVar45 + 0x20;
          uVar33 = puVar32[(longlong)piVar63 + 1];
          piVar63 = (int *)((longlong)piVar63 + 1);
        } while (uVar33 == 0);
      }
      else {
        piVar63 = (int *)0x0;
        iVar45 = 0;
      }
      uVar41 = (ulonglong)(-uVar33 & uVar33);
      uVar50 = uVar41 * 2 + 1;
      lVar57 = 0x3f;
      if (uVar50 != 0) {
        for (; uVar50 >> lVar57 == 0; lVar57 = lVar57 + -1) {
        }
      }
      uVar33 = (iVar45 - ((uint)lVar57 ^ 0x3f)) + 0x3e;
      if ((int)uVar44 <= (int)uVar33) {
        uVar33 = uVar44;
      }
    }
    if (uVar33 != uVar44) {
      uVar59 = 0xffffffff;
      local_b018._0_8_ = uVar40;
      do {
        lVar57 = *(longlong *)((longlong)dVar28 + 0xe0);
        lVar47 = *(longlong *)(lVar57 + 8 + (longlong)(int)uVar33 * 0x20);
        if (((lVar47 != 0) && (*(longlong *)(lVar47 + 0x4a0) != 0)) &&
           (*(int *)(lVar47 + 0x45c) != 0)) {
          local_b060 = (int *)CONCAT44(local_b060._4_4_,uVar59);
          local_aff8._0_4_ = iVar45;
          lVar48 = (longlong)(int)local_6b0;
          uVar44 = (int)local_6b0 + 1;
          local_6b0 = CONCAT44(local_6b0._4_4_,uVar44);
          local_b058 = piVar63;
          if (local_6b0._4_4_ < uVar44) {
            FUN_141805e00(&iStack_afb8);
          }
          piVar63 = local_6b8;
          if (local_6b8 == (int *)0x0) {
            piVar63 = &iStack_afb8;
          }
          piVar30 = piVar63 + lVar48 * 0x152;
          memset(piVar30,0,0x548);
          uVar10 = *(undefined8 *)(lVar47 + 0x588);
          uVar14 = *(undefined8 *)(lVar47 + 0x590);
          uVar15 = *(undefined8 *)(lVar47 + 0x598);
          uVar16 = *(undefined8 *)(lVar47 + 0x5a0);
          uVar17 = *(undefined8 *)(lVar47 + 0x5b0);
          *(undefined8 *)(piVar63 + lVar48 * 0x152 + 10) = *(undefined8 *)(lVar47 + 0x5a8);
          *(undefined8 *)(piVar63 + lVar48 * 0x152 + 10 + 2) = uVar17;
          *(undefined8 *)(piVar63 + lVar48 * 0x152 + 6) = uVar15;
          *(undefined8 *)(piVar63 + lVar48 * 0x152 + 6 + 2) = uVar16;
          *(undefined8 *)(piVar63 + lVar48 * 0x152 + 2) = uVar10;
          *(undefined8 *)(piVar63 + lVar48 * 0x152 + 2 + 2) = uVar14;
          uVar10 = *(undefined8 *)(lVar47 + 0x5b8);
          lVar48 = *(longlong *)(lVar47 + 0x5c0);
          if (lVar48 == 0) {
            *(undefined8 *)(piVar30 + 0xe) = uVar10;
            piVar30[0x10] = 0;
            piVar30[0x11] = 0;
          }
          else {
            LOCK();
            *(int *)(lVar48 + 8) = *(int *)(lVar48 + 8) + 1;
            UNLOCK();
            plVar38 = *(longlong **)(piVar30 + 0x10);
            *(undefined8 *)(piVar30 + 0xe) = uVar10;
            *(longlong *)(piVar30 + 0x10) = lVar48;
            if (plVar38 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar38 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*plVar38)(plVar38);
                LOCK();
                piVar63 = (int *)((longlong)plVar38 + 0xc);
                *piVar63 = *piVar63 + -1;
                UNLOCK();
                if (*piVar63 == 0) {
                  (**(code **)(*plVar38 + 0x10))(plVar38);
                }
              }
            }
          }
          puVar62 = local_b048;
          dVar28 = local_b050;
          piVar30[0x12] = *(int *)(lVar47 + 0x5c8);
          *(undefined8 *)(piVar30 + 0x14) = *(undefined8 *)(lVar47 + 0x5d0);
          fVar66 = (float)*(double *)(lVar47 + 0x4d8) * 0.017453292;
          fVar66 = (float)(longlong)
                          (fVar66 * 0.15915494 +
                          *(float *)(&DAT_14a184448 + (ulonglong)(fVar66 < 0.0) * 4)) * -6.2831855 +
                   fVar66;
          if (1.5707964 < fVar66) {
            fVar67 = 3.1415927;
LAB_14380597f:
            fVar66 = fVar67 - fVar66;
            fVar67 = -1.0;
          }
          else {
            if (fVar66 < -1.5707964) {
              fVar67 = -3.1415927;
              goto LAB_14380597f;
            }
            fVar67 = 1.0;
          }
          fVar75 = fVar66 * fVar66;
          dVar68 = (double)*(float *)(lVar47 + 0x500);
          *(double *)(piVar30 + 0x18) =
               (double)((((((fVar75 * -2.6051615e-07 + 2.4760495e-05) * fVar75 + -0.0013888378) *
                           fVar75 + 0.041666638) * fVar75 + -0.5) * fVar75 + 1.0) * fVar67) * dVar68
          ;
          plVar38 = (longlong *)(lVar57 + 8 + (longlong)(int)uVar33 * 0x20);
          *(double *)(piVar30 + 0x1a) =
               (double)((((((fVar75 * -2.3889859e-08 + 2.7525562e-06) * fVar75 + -0.00019840874) *
                           fVar75 + 0.008333331) * fVar75 + -0.16666667) * fVar75 + 1.0) * fVar66) *
               dVar68;
          *(double *)(piVar30 + 0x1c) = dVar68 * 0.0;
          local_698 = (undefined8 *******)0x0;
          pppppppuStack_690 = (undefined8 *******)0x0;
          local_648 = 0;
          local_640 = -1;
          local_5d8 = '\0';
          local_638 = 0;
          lStack_630 = 0;
          local_5d0 = 0;
          local_5c0 = 0xffffffffffffffff;
          local_5b8 = 0;
          local_5a0 = DAT_14cb1c870;
          local_5b0 = DAT_14cb1c860;
          pppppppuStack_5a8 = DAT_14cb1c868;
          dStack_588 = DAT_14cb1c870;
          pppppppuStack_598 = DAT_14cb1c860;
          pppppppuStack_590 = DAT_14cb1c868;
          local_580 = 0;
          lStack_578 = 0;
          local_570 = -1;
          local_568 = 0;
          local_548 = '\0';
          local_210 = (undefined1 *)0x0;
          local_208 = 0x2200000000;
          local_1f0 = (undefined1 *)0x0;
          local_1e8 = 0x400000000;
          local_1e0 = 0;
          plStack_1d8 = (longlong *)0x0;
          lVar57 = *plVar38;
          uStack_5c8 = *(undefined8 *)(lVar57 + 0x438);
          local_650 = CONCAT44((int)((ulonglong)local_650 >> 0x20),*(undefined4 *)(lVar57 + 0x47c));
          uVar10 = *(undefined8 *)(lVar57 + 0x45c);
          auStack_660 = *(undefined1 (*) [16])(lVar57 + 0x46c);
          iStack_670 = (int)uVar10;
          uStack_66c = (undefined2)((ulonglong)uVar10 >> 0x20);
          uStack_66a = (undefined1)((ulonglong)uVar10 >> 0x30);
          uStack_669 = (undefined1)((ulonglong)uVar10 >> 0x38);
          uStack_668 = *(undefined8 *)(lVar57 + 0x464);
          if (iStack_670 == 2) {
            cVar24 = (**(code **)(**(longlong **)(lVar57 + 0xcc8) + 0x10))
                               (*(longlong **)(lVar57 + 0xcc8),lVar57 + 0x440,&local_698);
            if (cVar24 != '\0') {
              if ((((*(char *)(lVar57 + 0x780) == '\x01') && (*(char *)(lVar57 + 0x778) == '\x01'))
                  && (1.0 <= fStack_68c)) && (lVar47 = *(longlong *)(lVar57 + 0x658), lVar47 != 0))
              {
                local_148 = *(undefined8 ********)(lVar47 + 0x3a8);
                uStack_140 = *(undefined8 ********)(lVar47 + 0x3b0);
                local_138 = *(undefined8 ******)(lVar47 + 0x3b8);
                pppppppuStack_130 = *(undefined8 ********)(lVar47 + 0x3c0);
                auStack_128 = *(undefined1 (*) [16])(lVar47 + 0x3c8);
                local_118 = *(double *)(lVar47 + 0x3d8);
                local_110 = *(longlong **)(lVar47 + 0x3e0);
                if (local_110 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_110 + 1) = (int)local_110[1] + 1;
                  UNLOCK();
                }
                local_108 = *(undefined4 *)(lVar47 + 1000);
                local_100 = *(double *)(lVar47 + 0x3f0);
                dVar68 = *(double *)(lVar57 + 0xa28) - (double)local_148;
                dVar74 = *(double *)(lVar57 + 0xa30) - (double)uStack_140;
                fVar67 = (float)(SQRT(dVar74 * dVar74 + dVar68 * dVar68) -
                                (double)SUB84(local_100,0));
                fVar66 = 0.0;
                if (0.0 <= fVar67) {
                  fVar66 = fVar67;
                }
                FUN_1402faf4a(&local_628,&local_148);
                plVar4 = local_110;
                local_5d0 = *(undefined8 *)(*(longlong *)(lVar57 + 0x658) + 0x140);
                fVar67 = local_698._0_4_;
                if (fVar66 / fStack_68c <= local_698._0_4_) {
                  fVar67 = fVar66 / fStack_68c;
                }
                local_698 = (undefined8 *******)CONCAT44(local_698._4_4_,fVar67);
                if (local_110 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_110 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_110)(local_110);
                    LOCK();
                    piVar63 = (int *)((longlong)plVar4 + 0xc);
                    *piVar63 = *piVar63 + -1;
                    UNLOCK();
                    if (*piVar63 == 0) {
                      (**(code **)(*plVar4 + 0x10))(plVar4);
                    }
                  }
                }
              }
              goto LAB_143805d44;
            }
            local_698 = (undefined8 *******)CONCAT44(local_698._4_4_,0x7f7fffff);
            iStack_670 = 1;
LAB_14380615a:
            lVar57 = FUN_1409a8112(*plVar38,0);
            if (lVar57 == 0) {
              piVar30[0x16] = 0;
              iVar45 = 0;
            }
            else {
              uVar44 = *(uint *)(lVar57 + 0xc);
              piVar30[0x16] = uVar44;
              if ((int)uVar44 < DAT_14c9647dc) {
                lVar57 = (ulonglong)((uVar44 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar44 >> 0x10) * 8);
              }
              else {
                lVar57 = 0;
              }
              iVar45 = *(int *)(lVar57 + 0x10);
              if (*(int *)(lVar57 + 0x10) == 0) {
                LOCK();
                iVar45 = DAT_14c964868 + 1;
                UNLOCK();
                iVar26 = DAT_14c964868 + 1;
                bVar65 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar45;
                if (bVar65) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar26);
                }
                LOCK();
                iVar45 = *(int *)(lVar57 + 0x10);
                bVar65 = iVar45 == 0;
                if (bVar65) {
                  *(int *)(lVar57 + 0x10) = iVar26;
                  iVar45 = 0;
                }
                UNLOCK();
                if (bVar65) {
                  iVar45 = iVar26;
                }
              }
            }
            piVar30[0x17] = iVar45;
          }
          else {
LAB_143805d44:
            plVar4 = plStack_1d8;
            if (iStack_670 == 2) {
              local_1e0 = *plVar38;
              plStack_1d8 = (longlong *)plVar38[1];
              if (plStack_1d8 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_1d8 + 1) = (int)plStack_1d8[1] + 1;
                UNLOCK();
              }
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                plVar38 = plVar4 + 1;
                *(int *)plVar38 = (int)*plVar38 + -1;
                UNLOCK();
                if ((int)*plVar38 == 0) {
                  (**(code **)*plVar4)(plVar4);
                  LOCK();
                  piVar63 = (int *)((longlong)plVar4 + 0xc);
                  *piVar63 = *piVar63 + -1;
                  UNLOCK();
                  if (*piVar63 == 0) {
                    (**(code **)(*plVar4 + 0x10))(plVar4);
                  }
                }
              }
              pppppppuVar31 = (undefined8 *******)(piVar30 + 0x1e);
              if (&local_698 != (undefined8 ********)pppppppuVar31) {
                if ((char)piVar30[0x150] == '\x01') {
                  FUN_144815b4a(pppppppuVar31);
                }
                pppppppuVar49 = &local_698;
                for (lVar57 = 9; lVar57 != 0; lVar57 = lVar57 + -1) {
                  *pppppppuVar31 = *pppppppuVar49;
                  pppppppuVar49 = pppppppuVar49 + 1;
                  pppppppuVar31 = pppppppuVar31 + 1;
                }
                piVar30[0x30] = (int)local_650;
                *(undefined8 *)(piVar30 + 0x32) = local_648;
                piVar30[0x34] = local_640;
                *(undefined8 *)(piVar30 + 0x36) = local_638;
                *(longlong *)(piVar30 + 0x38) = lStack_630;
                if (lStack_630 != 0) {
                  LOCK();
                  *(int *)(lStack_630 + 0xc) = *(int *)(lStack_630 + 0xc) + 1;
                  UNLOCK();
                }
                *(char *)(piVar30 + 0x4e) = local_5d8;
                if (local_5d8 == '\x01') {
                  *(undefined8 *)(piVar30 + 0x42) = local_608;
                  *(undefined8 *)(piVar30 + 0x44) = uStack_600;
                  *(undefined8 *)(piVar30 + 0x3e) = local_618;
                  *(undefined8 *)(piVar30 + 0x40) = uStack_610;
                  *(undefined8 *)(piVar30 + 0x3a) = local_628;
                  *(undefined8 *)(piVar30 + 0x3c) = uStack_620;
                  *(undefined8 *)(piVar30 + 0x46) = local_5f8;
                  *(longlong *)(piVar30 + 0x48) = local_5f0;
                  if (local_5f0 != 0) {
                    LOCK();
                    *(int *)(local_5f0 + 8) = *(int *)(local_5f0 + 8) + 1;
                    UNLOCK();
                  }
                  piVar30[0x4a] = local_5e8;
                  *(undefined8 *)(piVar30 + 0x4c) = local_5e0;
                }
                *(undefined8 *)(piVar30 + 0x50) = local_5d0;
                *(undefined8 *)(piVar30 + 0x52) = uStack_5c8;
                piVar30[0x56] = local_5b8;
                *(undefined8 *)(piVar30 + 0x54) = local_5c0;
                auVar21._8_8_ = pppppppuStack_598;
                auVar21._0_8_ = local_5a0;
                auVar22._8_8_ = dStack_588;
                auVar22._0_8_ = pppppppuStack_590;
                *(undefined1 (*) [16])(piVar30 + 0x5c) = auVar21;
                *(undefined8 ********)(piVar30 + 0x58) = local_5b0;
                *(undefined8 ********)(piVar30 + 0x5a) = pppppppuStack_5a8;
                *(undefined1 (*) [16])(piVar30 + 0x60) = auVar22;
                *(undefined8 *)(piVar30 + 100) = local_580;
                *(longlong *)(piVar30 + 0x66) = lStack_578;
                if (lStack_578 != 0) {
                  LOCK();
                  *(int *)(lStack_578 + 8) = *(int *)(lStack_578 + 8) + 1;
                  UNLOCK();
                }
                piVar30[0x68] = local_570;
                *(undefined8 *)(piVar30 + 0x6a) = local_568;
                *(char *)(piVar30 + 0x72) = local_548;
                if (local_548 == '\x01') {
                  *(undefined8 *)(piVar30 + 0x70) = local_550;
                  *(undefined8 *)(piVar30 + 0x6c) = local_560;
                  *(undefined8 *)(piVar30 + 0x6e) = uStack_558;
                }
                piVar30[0x140] = 0;
                piVar30[0x141] = 0;
                lVar57 = (longlong)(int)local_208;
                piVar30[0x142] = (int)local_208;
                if (lVar57 == 0) {
                  piVar30[0x143] = 0x22;
                }
                else {
                  puVar42 = local_210;
                  if (local_210 == (undefined1 *)0x0) {
                    puVar42 = local_540;
                  }
                  FUN_144784e8c(piVar30 + 0x74,local_208 & 0xffffffff);
                  piVar63 = *(int **)(piVar30 + 0x140);
                  if (*(int **)(piVar30 + 0x140) == (int *)0x0) {
                    piVar63 = piVar30 + 0x74;
                  }
                  memcpy(piVar63,puVar42,lVar57 * 0x18);
                }
                piVar30[0x148] = 0;
                piVar30[0x149] = 0;
                lVar57 = (longlong)(int)local_1e8;
                piVar30[0x14a] = (int)local_1e8;
                if (lVar57 == 0) {
                  piVar30[0x14b] = 4;
                }
                else {
                  puVar42 = local_1f0;
                  if (local_1f0 == (undefined1 *)0x0) {
                    puVar42 = local_200;
                  }
                  FUN_140de5076(piVar30 + 0x144,local_1e8 & 0xffffffff,0);
                  piVar63 = *(int **)(piVar30 + 0x148);
                  if (*(int **)(piVar30 + 0x148) == (int *)0x0) {
                    piVar63 = piVar30 + 0x144;
                  }
                  memcpy(piVar63,puVar42,lVar57 << 2);
                }
                *(longlong *)(piVar30 + 0x14c) = local_1e0;
                *(longlong **)(piVar30 + 0x14e) = plStack_1d8;
                if (plStack_1d8 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plStack_1d8 + 1) = (int)plStack_1d8[1] + 1;
                  UNLOCK();
                }
                *(undefined1 *)(piVar30 + 0x150) = 1;
              }
            }
            else if (iStack_670 == 1) goto LAB_14380615a;
          }
          FUN_144815b4a(&local_698);
          uVar44 = *(uint *)((longlong)dVar28 + 0x108);
          uVar40 = local_b018._0_8_;
          piVar63 = local_b058;
          uVar59 = (uint)local_b060;
          iVar45 = local_aff8._0_4_;
        }
        uVar59 = uVar59 & ~(uint)uVar41;
        puVar32 = *(uint **)((longlong)local_b050 + 0x100);
        if (*(uint **)((longlong)local_b050 + 0x100) == (uint *)0x0) {
          puVar32 = puVar62;
        }
        iVar26 = (int)piVar63;
        lVar57 = (longlong)iVar26;
        uVar33 = puVar32[lVar57] & uVar59;
        if (uVar33 == 0) {
          iVar53 = uVar44 + 0x1e;
          if (-1 < (int)(uVar44 - 1)) {
            iVar53 = uVar44 - 1;
          }
          iVar53 = iVar53 >> 5;
          iVar45 = iVar45 + 0x20;
          iVar46 = iVar53;
          if (iVar53 < iVar26) {
            iVar46 = iVar26;
          }
          if (iVar26 < iVar53) {
            lVar47 = 0;
            do {
              uVar33 = puVar32[lVar57 + lVar47 + 1];
              if (uVar33 != 0) {
                piVar63 = (int *)(ulonglong)(iVar26 + (int)lVar47 + 1);
                uVar59 = 0xffffffff;
                goto LAB_143806115;
              }
              iVar45 = iVar45 + 0x20;
              lVar47 = lVar47 + 1;
            } while (iVar46 - lVar57 != lVar47);
            uVar59 = 0xffffffff;
            lVar57 = (longlong)iVar46;
          }
          piVar63 = (int *)(lVar57 + 1U & 0xffffffff);
          uVar40 = local_b018._0_8_;
          puVar62 = local_b048;
          uVar33 = uVar44;
        }
        else {
LAB_143806115:
          uVar41 = (ulonglong)(-uVar33 & uVar33);
          uVar50 = uVar41 * 2 + 1;
          lVar57 = 0x3f;
          if (uVar50 != 0) {
            for (; uVar50 >> lVar57 == 0; lVar57 = lVar57 + -1) {
            }
          }
          uVar33 = (iVar45 - ((uint)lVar57 ^ 0x3f)) + 0x3e;
          if ((int)uVar44 <= (int)uVar33) {
            uVar33 = uVar44;
          }
        }
        dVar28 = local_b050;
      } while (uVar33 != (uint)uVar40);
    }
LAB_143806304:
    SRWLock = local_b040;
    ReleaseSRWLockShared(local_b040);
    if ((longlong)*(int *)((longlong)dVar28 + 0x3b0) != 0) {
      puVar42 = *(undefined1 **)((longlong)dVar28 + 0x3a8);
      puVar64 = puVar42 + (longlong)*(int *)((longlong)dVar28 + 0x3b0) * 0x78;
      do {
        uVar40 = local_6b0;
        lVar57 = (longlong)(int)local_6b0;
        uVar44 = (int)local_6b0 + 1;
        local_6b0 = CONCAT44(local_6b0._4_4_,uVar44);
        if (local_6b0._4_4_ < uVar44) {
          FUN_141805e00(&iStack_afb8,uVar40 & 0xffffffff);
        }
        piVar63 = local_6b8;
        if (local_6b8 == (int *)0x0) {
          piVar63 = &iStack_afb8;
        }
        *(undefined1 *)(piVar63 + lVar57 * 0x152) = *puVar42;
        uVar10 = *(undefined8 *)(puVar42 + 0x10);
        uVar14 = *(undefined8 *)(puVar42 + 0x18);
        uVar15 = *(undefined8 *)(puVar42 + 0x20);
        auVar8 = *(undefined1 (*) [16])(puVar42 + 0x28);
        *(undefined8 *)(piVar63 + lVar57 * 0x152 + 2) = *(undefined8 *)(puVar42 + 8);
        *(undefined8 *)(piVar63 + lVar57 * 0x152 + 2 + 2) = uVar10;
        *(undefined8 *)(piVar63 + lVar57 * 0x152 + 6) = uVar14;
        *(undefined8 *)(piVar63 + lVar57 * 0x152 + 6 + 2) = uVar15;
        *(undefined1 (*) [16])(piVar63 + lVar57 * 0x152 + 10) = auVar8;
        *(undefined8 *)(piVar63 + lVar57 * 0x152 + 0xe) = *(undefined8 *)(puVar42 + 0x38);
        lVar47 = *(longlong *)(puVar42 + 0x40);
        *(longlong *)(piVar63 + lVar57 * 0x152 + 0x10) = lVar47;
        if (lVar47 != 0) {
          LOCK();
          *(int *)(lVar47 + 8) = *(int *)(lVar47 + 8) + 1;
          UNLOCK();
        }
        piVar63[lVar57 * 0x152 + 0x12] = *(int *)(puVar42 + 0x48);
        *(undefined8 *)(piVar63 + lVar57 * 0x152 + 0x14) = *(undefined8 *)(puVar42 + 0x50);
        auVar8 = *(undefined1 (*) [16])(puVar42 + 0x68);
        *(undefined1 (*) [16])(piVar63 + lVar57 * 0x152 + 0x16) =
             *(undefined1 (*) [16])(puVar42 + 0x58);
        *(undefined1 (*) [16])(piVar63 + lVar57 * 0x152 + 0x1a) = auVar8;
        *(undefined1 *)(piVar63 + lVar57 * 0x152 + 0x150) = 0;
        puVar42 = puVar42 + 0x78;
      } while (puVar42 != puVar64);
    }
    iVar45 = (int)local_6b0;
    uVar40 = (ulonglong)(int)local_6b0;
    piVar63 = local_6b8;
    if (local_6b8 == (int *)0x0) {
      piVar63 = &iStack_afb8;
    }
    if (0 < (longlong)uVar40) {
      uVar50 = 0;
      local_b038 = piVar63;
      do {
        if (uVar50 + 1 < uVar40) {
          cVar24 = (float)piVar63[0x166] <= (float)piVar63[0x14] &&
                   (float)piVar63[0x14] != (float)piVar63[0x166];
          if ((char)piVar63[0x2a2] != (char)piVar63[0x150]) {
            cVar24 = (char)piVar63[0x2a2];
          }
          if (cVar24 == '\x01') {
            memcpy(&local_698,piVar63,0x548);
            memcpy(piVar63,piVar63 + 0x152,0x548);
            puVar62 = local_b048;
            memcpy(piVar63 + 0x152,&local_698,0x548);
          }
        }
        uVar50 = uVar50 + 2;
        piVar63 = piVar63 + 0x2a4;
      } while (uVar50 < uVar40);
      if (2 < iVar45) {
        uVar50 = 2;
        local_afd8 = uVar40;
        do {
          iVar45 = (int)uVar50 * 2;
          local_b028 = (double)CONCAT44(local_b028._4_4_,iVar45);
          local_afe0 = (int *)(longlong)iVar45;
          dVar28 = 0.0;
          local_b018._0_8_ = uVar50;
          do {
            iVar45 = (int)uVar40 - SUB84(dVar28,0);
            if (local_b028._0_4_ <= iVar45) {
              iVar45 = local_b028._0_4_;
            }
            local_b060 = (int *)CONCAT44(local_b060._4_4_,iVar45);
            local_b020 = dVar28;
            if ((0 < (int)uVar50) && ((int)uVar50 < iVar45)) {
              local_b058 = local_b038 + (longlong)dVar28 * 0x152;
              iVar45 = 0;
              uVar41 = uVar50 & 0xffffffff;
              while( true ) {
                iVar26 = (int)uVar41;
                local_aff8._0_4_ = iVar26;
                iVar53 = 0;
                uVar44 = iVar26 - iVar45;
                if (uVar44 != 0 && iVar45 <= iVar26) {
                  iVar53 = 0;
                  uVar50 = (ulonglong)uVar44;
                  do {
                    uVar50 = uVar50 >> 1;
                    iVar46 = (uint)uVar50 + iVar53;
                    cVar24 = (float)local_b058[(longlong)iVar26 * 0x152 + 0x14] <
                             (float)local_b058
                                    [(longlong)iVar45 * 0x152 + (longlong)iVar46 * 0x152 + 0x14];
                    if ((char)local_b058[(longlong)iVar26 * 0x152 + 0x150] !=
                        (char)local_b058
                              [(longlong)iVar45 * 0x152 + (longlong)iVar46 * 0x152 + 0x150]) {
                      cVar24 = (char)local_b058[(longlong)iVar26 * 0x152 + 0x150];
                    }
                    if (cVar24 == '\0') {
                      iVar53 = iVar46 + (uVar44 & 1);
                    }
                    bVar65 = 1 < uVar44;
                    uVar44 = (uint)uVar50;
                  } while (bVar65);
                }
                iVar53 = iVar53 + iVar45;
                uVar50 = local_b018._0_8_;
                if (iVar26 - iVar53 == 0 || iVar26 < iVar53) break;
                uVar44 = (uint)local_b060 - iVar26;
                if (uVar44 == 0 || (int)(uint)local_b060 < iVar26) {
                  local_b030 = (undefined8 *******)0x0;
                }
                else {
                  piVar63 = local_b058 + (longlong)iVar53 * 0x152;
                  local_b030 = (undefined8 *******)0x0;
                  uVar40 = (ulonglong)uVar44;
                  do {
                    uVar40 = uVar40 >> 1;
                    uVar33 = (uint)uVar40 + (int)local_b030;
                    cVar24 = (float)local_b058
                                    [(longlong)iVar26 * 0x152 + (ulonglong)uVar33 * 0x152 + 0x14] <=
                             (float)piVar63[0x14] &&
                             (float)piVar63[0x14] !=
                             (float)local_b058
                                    [(longlong)iVar26 * 0x152 + (ulonglong)uVar33 * 0x152 + 0x14];
                    if ((char)local_b058
                              [(longlong)iVar26 * 0x152 + (ulonglong)uVar33 * 0x152 + 0x150] !=
                        (char)piVar63[0x150]) {
                      cVar24 = (char)local_b058
                                     [(longlong)iVar26 * 0x152 + (ulonglong)uVar33 * 0x152 + 0x150];
                    }
                    if (cVar24 != '\0') {
                      local_b030 = (undefined8 *******)(ulonglong)(uVar33 + (uVar44 & 1));
                    }
                    bVar65 = 1 < uVar44;
                    uVar44 = (uint)uVar40;
                  } while (bVar65);
                  local_aff8._0_4_ = iVar26 + (int)local_b030;
                  if (0 < (int)local_b030) {
                    piVar30 = piVar63 + (longlong)(iVar26 - iVar53) * 0x152;
                    piVar58 = piVar63 + (longlong)(local_aff8._0_4_ - iVar53) * 0x152;
                    piVar29 = piVar30;
                    do {
                      while( true ) {
                        piVar39 = piVar29 + 0x152;
                        piVar2 = piVar63 + 0x152;
                        memcpy(&local_698,piVar63,0x548);
                        memcpy(piVar63,piVar29,0x548);
                        memcpy(piVar29,&local_698,0x548);
                        if (piVar39 == piVar58) break;
                        if (piVar2 == piVar30) {
                          piVar30 = piVar39;
                        }
                        piVar63 = piVar63 + 0x152;
                        piVar29 = piVar39;
                      }
                      piVar63 = piVar2;
                      piVar29 = piVar30;
                    } while (piVar2 != piVar30);
                  }
                }
                uVar41 = (ulonglong)(uint)local_aff8._0_4_;
                uVar50 = local_b018._0_8_;
                uVar40 = local_afd8;
                puVar62 = local_b048;
                SRWLock = local_b040;
                if (((int)(uint)local_b060 <= (int)local_aff8._0_4_) ||
                   (iVar45 = (int)local_b030 + iVar53 + 1, (int)local_aff8._0_4_ <= iVar45)) break;
              }
            }
            dVar28 = (double)((longlong)local_b020 + (longlong)local_afe0);
          } while ((longlong)dVar28 < (longlong)uVar40);
          uVar50 = (ulonglong)local_b028 & 0xffffffff;
        } while (local_b028._0_4_ < (int)uVar40);
      }
      uVar40 = local_6b0 & 0xffffffff;
      if (0 < (int)local_6b0) {
        uVar80 = 0;
        uVar81 = 0x80000000;
        uVar50 = 0;
        pcVar51 = _finite_exref;
        do {
          piVar63 = local_6b8;
          if (local_6b8 == (int *)0x0) {
            piVar63 = &iStack_afb8;
          }
          if ((char)piVar63[uVar50 * 0x152 + 0x150] == '\x01') {
            if (DAT_14cb1cc20 == 0) {
              FUN_145bd5856();
            }
            lVar57 = (longlong)(int)uVar50;
            fVar66 = (float)piVar63[lVar57 * 0x152 + 0x1f];
            if (fVar66 <= 10.0) {
              fVar66 = 10.0;
            }
            dVar28 = *(double *)(piVar63 + lVar57 * 0x152 + 0x22);
            dVar68 = *(double *)(piVar63 + lVar57 * 0x152 + 0x24);
            if (((((double)((ulonglong)DAT_14cb1c860 ^ CONCAT44(uVar81,uVar80)) < dVar28) &&
                 (dVar28 < (double)DAT_14cb1c860)) &&
                ((double)((ulonglong)DAT_14cb1c868 ^ CONCAT44(uVar81,uVar80)) < dVar68)) &&
               ((dVar68 < (double)DAT_14cb1c868 && (iVar45 = (*pcVar51)(dVar28), iVar45 != 0)))) {
              (*pcVar51)(dVar68);
            }
            if (((dVar28 <= (double)((ulonglong)DAT_14cb1c860 ^ CONCAT44(uVar81,uVar80))) ||
                ((double)DAT_14cb1c860 <= dVar28)) ||
               ((dVar68 <= (double)((ulonglong)DAT_14cb1c868 ^ CONCAT44(uVar81,uVar80)) ||
                ((((double)DAT_14cb1c868 <= dVar68 || (iVar45 = (*pcVar51)(dVar28), iVar45 == 0)) ||
                 (iVar45 = (*pcVar51)(dVar68), iVar45 == 0)))))) {
              uVar82 = SUB84(DAT_14c8463f0,0);
              uVar78 = (undefined4)((ulonglong)DAT_14c8463f0 >> 0x20);
              dVar68 = DAT_14c8463f8;
            }
            else {
              dVar74 = dVar28 * dVar28 + dVar68 * dVar68;
              if (9.99999993922529e-09 < dVar74) {
                dVar68 = dVar68 * (1.0 / SQRT(dVar74));
              }
              else {
                dVar68 = 0.0;
              }
              uVar40 = -(ulonglong)(9.99999993922529e-09 < dVar74) &
                       (ulonglong)(dVar28 * (1.0 / SQRT(dVar74)));
              uVar82 = (undefined4)uVar40;
              uVar78 = (undefined4)(uVar40 >> 0x20);
            }
            fVar67 = (float)piVar63[lVar57 * 0x152 + 0x20] * 0.017453292;
            fVar67 = (float)(longlong)
                            (fVar67 * 0.15915494 +
                            *(float *)(&DAT_14a184448 + (ulonglong)(fVar67 < 0.0) * 4)) * -6.2831855
                     + fVar67;
            if (1.5707964 < fVar67) {
              fVar75 = 3.1415927;
LAB_1438068b8:
              fVar67 = fVar75 - fVar67;
              fVar75 = -1.0;
            }
            else {
              if (fVar67 < -1.5707964) {
                fVar75 = -3.1415927;
                goto LAB_1438068b8;
              }
              fVar75 = 1.0;
            }
            fVar76 = fVar67 * fVar67;
            dVar28 = (double)((((((fVar76 * -2.3889859e-08 + 2.7525562e-06) * fVar76 +
                                 -0.00019840874) * fVar76 + 0.008333331) * fVar76 + -0.16666667) *
                               fVar76 + 1.0) * fVar67);
            dVar74 = (double)((((((fVar76 * -2.6051615e-07 + 2.4760495e-05) * fVar76 + -0.0013888378
                                 ) * fVar76 + 0.041666638) * fVar76 + -0.5) * fVar76 + 1.0) * fVar75
                             );
            dVar70 = dVar74 * dVar74 + dVar28 * dVar28;
            if (9.99999993922529e-09 < dVar70) {
              dVar28 = dVar28 * (1.0 / SQRT(dVar70));
            }
            else {
              dVar28 = 0.0;
            }
            local_368 = (undefined8 *******)0x0;
            lVar47 = (longlong)DAT_14cb1cc20;
            local_360 = DAT_14cb1cc20;
            if (lVar47 == 0) {
              local_35c = 0x22;
              lVar47 = -1;
            }
            else {
              _Src = DAT_14cb1cc18;
              if (DAT_14cb1cc18 == (undefined *)0x0) {
                _Src = &DAT_14cb1c8e8;
              }
              FUN_144784e8c(&local_698,DAT_14cb1cc20);
              pppppppuVar31 = local_368;
              if (local_368 == (undefined8 *******)0x0) {
                pppppppuVar31 = &local_698;
              }
              memcpy(pppppppuVar31,_Src,lVar47 * 0x18);
              lVar47 = (longlong)local_360;
              pppppppuVar31 = local_368;
              if (local_368 == (undefined8 *******)0x0) {
                pppppppuVar31 = &local_698;
              }
              if (lVar47 == 0) {
                lVar47 = -1;
              }
              else {
                lVar48 = 0;
                do {
                  *(double *)((longlong)pppppppuVar31 + lVar48 + 8) =
                       *(double *)((longlong)pppppppuVar31 + lVar48 + 8) * (double)fVar66;
                  *(double *)((longlong)pppppppuVar31 + lVar48 + 0x10) =
                       *(double *)((longlong)pppppppuVar31 + lVar48 + 0x10) * (double)fVar66;
                  lVar48 = lVar48 + 0x18;
                } while (lVar47 * 0x18 != lVar48);
                lVar47 = (longlong)(local_360 + -1);
              }
            }
            fVar67 = (float)piVar63[lVar57 * 0x152 + 0x21];
            dVar74 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar70) &
                             (ulonglong)((1.0 / SQRT(dVar70)) * dVar74));
            pppppppuVar31 = local_368;
            if (local_368 == (undefined8 *******)0x0) {
              pppppppuVar31 = &local_698;
            }
            pppppppuVar31[lVar47 * 3 + 1] = (undefined8 ******)((double)fVar67 * dVar74);
            pppppppuVar31[lVar47 * 3 + 2] = (undefined8 ******)(dVar28 * (double)fVar67);
            pppppppuVar31 = local_368;
            if (local_368 == (undefined8 *******)0x0) {
              pppppppuVar31 = &local_698;
            }
            lVar47 = (longlong)local_360;
            if (lVar47 != 0) {
              lVar48 = 0;
              do {
                dVar70 = *(double *)((longlong)pppppppuVar31 + lVar48 + 8);
                dVar69 = *(double *)((longlong)pppppppuVar31 + lVar48 + 0x10);
                fVar67 = (float)SQRT(dVar70 * dVar70 + dVar69 * dVar69);
                dVar77 = DAT_14c8463f8;
                dVar71 = DAT_14c8463f0;
                if (1e-08 < fVar67) {
                  dVar77 = dVar69 * (double)(1.0 / fVar67);
                  dVar71 = dVar70 * (double)(1.0 / fVar67);
                }
                fVar67 = (fVar67 * (float)piVar63[lVar57 * 0x152 + 0x2d]) / fVar66 +
                         *(float *)((longlong)pppppppuVar31 + lVar48);
                *(float *)((longlong)pppppppuVar31 + lVar48) = fVar67;
                fVar67 = (float)((double)fVar67 +
                                (dVar71 * dVar74 + dVar28 * dVar77) *
                                (double)(float)piVar63[lVar57 * 0x152 + 0x2e]);
                *(float *)((longlong)pppppppuVar31 + lVar48) = fVar67;
                if (0.0 <= dVar71 * (double)((ulonglong)dVar28 ^ CONCAT44(uVar81,uVar80)) +
                           dVar74 * dVar77) {
                  fVar67 = fVar67 + (float)piVar63[lVar57 * 0x152 + 0x30];
                  *(float *)((longlong)pppppppuVar31 + lVar48) = fVar67;
                }
                *(float *)((longlong)pppppppuVar31 + lVar48) =
                     (float)((double)fVar67 +
                            (dVar71 * (double)CONCAT44(uVar78,uVar82) + dVar77 * dVar68) *
                            (double)(float)piVar63[lVar57 * 0x152 + 0x2f]);
                lVar48 = lVar48 + 0x18;
              } while (lVar47 * 0x18 != lVar48);
            }
            pppppppuVar31 = local_368;
            local_b030 = (undefined8 *******)(piVar63 + lVar57 * 0x152 + 0x74);
            local_b060 = piVar63;
            if ((undefined8 ********)local_b030 == &local_698) {
              if (local_368 != (undefined8 *******)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              if (local_368 == (undefined8 *******)0x0) {
                memmove(local_b030,&local_698,0x330);
              }
              if (*(longlong *)(piVar63 + lVar57 * 0x152 + 0x140) != 0) {
                FUN_1400020a8();
                pppppppuVar31 = local_368;
              }
              *(undefined8 ********)(piVar63 + lVar57 * 0x152 + 0x140) = pppppppuVar31;
              local_368 = (undefined8 *******)0x0;
              piVar63[lVar57 * 0x152 + 0x142] = local_360;
              piVar63[lVar57 * 0x152 + 0x143] = local_35c;
            }
            lVar47 = FUN_14477bcf0();
            fVar66 = *(float *)(lVar47 + 0xa0);
            piVar30 = local_6b8;
            if (local_6b8 == (int *)0x0) {
              piVar30 = &iStack_afb8;
            }
            local_b058 = piVar30 + lVar57 * 0x152 + 0x74;
            piVar58 = piVar30 + lVar57 * 0x152;
            piVar29 = *(int **)(piVar30 + lVar57 * 0x152 + 0x140);
            if (*(int **)(piVar30 + lVar57 * 0x152 + 0x140) == (int *)0x0) {
              piVar29 = local_b058;
            }
            lVar47 = (longlong)(piVar30[lVar57 * 0x152 + 0x142] + -1);
            fVar67 = (float)piVar29[lVar47 * 6];
            uVar80 = 0;
            uVar81 = 0;
            uVar82 = 0;
            fVar75 = (float)piVar30[lVar57 * 0x152 + 0x2d] + (float)piVar30[lVar57 * 0x152 + 0x2e] +
                     (float)piVar30[lVar57 * 0x152 + 0x2f] + (float)piVar30[lVar57 * 0x152 + 0x30];
            local_b018 = ZEXT416((uint)fVar75);
            if (0 < (int)local_6b0) {
              local_b020 = *(double *)(piVar29 + lVar47 * 6 + 2);
              local_b028 = *(double *)(piVar29 + lVar47 * 6 + 4);
              local_aff8._0_4_ = -fVar75;
              local_aff8._4_4_ = 0x80000000;
              local_aff8._8_4_ = 0x80000000;
              local_aff8._12_4_ = 0x80000000;
              local_afe0 = piVar58 + 0x3a;
              uVar40 = 0;
              do {
                if (uVar40 != uVar50) {
                  piVar30 = local_6b8;
                  if (local_6b8 == (int *)0x0) {
                    piVar30 = &iStack_afb8;
                  }
                  if (uVar40 < uVar50) {
                    piVar29 = piVar30 + lVar57 * 0x152 + 0x144;
                    if (*(int **)(piVar30 + lVar57 * 0x152 + 0x148) != (int *)0x0) {
                      piVar29 = *(int **)(piVar30 + lVar57 * 0x152 + 0x148);
                    }
                    if ((longlong)piVar30[lVar57 * 0x152 + 0x14a] != 0) {
                      lVar47 = 0;
                      do {
                        if (*(int *)((longlong)piVar29 + lVar47) == (int)uVar40) goto LAB_143807049;
                        lVar47 = lVar47 + 4;
                      } while ((longlong)piVar30[lVar57 * 0x152 + 0x14a] * 4 != lVar47);
                    }
                  }
                  else {
                    piVar29 = piVar30 + (longlong)(int)uVar40 * 0x152;
                    if ((char)piVar29[0x150] == '\0') {
                      fVar75 = 3.4028235e+38;
                    }
                    else {
                      fVar75 = (float)piVar29[0x1e];
                    }
                    fVar76 = (float)piVar30[lVar57 * 0x152 + 0x1e];
                    if (fVar75 <= (float)piVar30[lVar57 * 0x152 + 0x1e]) {
                      fVar76 = fVar75;
                    }
                    dVar28 = *(double *)(piVar29 + 0x18);
                    dVar68 = *(double *)(piVar29 + 0x1a);
                    dVar77 = dVar28 * dVar28 + dVar68 * dVar68;
                    fVar75 = (float)((double)fVar76 * SQRT(dVar77) + (double)(float)piVar29[0x14]) +
                             (float)piVar30[lVar57 * 0x152 + 0x21] * fVar76 +
                             (float)piVar30[lVar57 * 0x152 + 0x14];
                    dVar74 = *(double *)(piVar29 + 2) - *(double *)(piVar30 + lVar57 * 0x152 + 2);
                    dVar70 = *(double *)(piVar29 + 4) - *(double *)(piVar30 + lVar57 * 0x152 + 4);
                    dVar69 = dVar70 * dVar70 + dVar74 * dVar74;
                    if ((float)dVar69 <= fVar75 * fVar75) {
                      if (ABS((float)(*(double *)(piVar30 + lVar57 * 0x152 + 6) -
                                     *(double *)(piVar29 + 6))) <=
                          (float)piVar30[lVar57 * 0x152 + 0x15] + (float)piVar29[0x15]) {
                        if ((char)*piVar29 == '\x01') {
                          if ((*(char *)((longlong)piVar30 + lVar57 * 0x548 + 0xa5) == '\x01') &&
                             ((float)piVar30[lVar57 * 0x152 + 0x21] <= 1.0)) goto LAB_143806e9c;
                          if (*(char *)((longlong)piVar30 + lVar57 * 0x548 + 0xa6) == '\x01') {
                            if ((dVar77 != 1.0) || (NAN(dVar77))) {
                              if (9.99999993922529e-09 <= dVar77) {
                                dVar77 = 1.0 / SQRT(dVar77);
                                dVar68 = dVar68 * dVar77;
                                dVar28 = dVar28 * dVar77;
                                uVar78 = 0;
                                uVar79 = 0;
                              }
                              else {
                                uVar78 = SUB84(DAT_14c8464f0,0);
                                uVar79 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                                dVar68 = DAT_14c8464e8;
                                dVar28 = DAT_14c8464e0;
                              }
                            }
                            else {
                              uVar41 = -(ulonglong)(*(double *)(piVar29 + 0x1c) == 0.0) &
                                       (ulonglong)*(double *)(piVar29 + 0x1c);
                              uVar78 = (undefined4)uVar41;
                              uVar79 = (undefined4)(uVar41 >> 0x20);
                            }
                            if ((dVar69 != 1.0) || (NAN(dVar69))) {
                              dVar77 = DAT_14c8464e0;
                              dVar71 = DAT_14c8464e8;
                              local_b008 = DAT_14c8464f0;
                              if (9.99999993922529e-09 <= dVar69) {
                                dVar77 = dVar74 * (1.0 / SQRT(dVar69));
                                dVar71 = dVar70 * (1.0 / SQRT(dVar69));
                                local_b008 = (int *)0x0;
                              }
                            }
                            else {
                              dVar69 = *(double *)(piVar29 + 6) -
                                       *(double *)(piVar30 + lVar57 * 0x152 + 6);
                              dVar77 = dVar74;
                              dVar71 = dVar70;
                              local_b008 = (int *)(-(ulonglong)(dVar69 == 0.0) & (ulonglong)dVar69);
                            }
                            uStack_b000 = 0;
                            dVar74 = *(double *)(piVar30 + lVar57 * 0x152 + 0x22);
                            fVar75 = 0.0;
                            if ((((((-(double)DAT_14cb1c860 < dVar74) &&
                                   (dVar74 < (double)DAT_14cb1c860)) &&
                                  (-(double)DAT_14cb1c868 <
                                   *(double *)(piVar30 + lVar57 * 0x152 + 0x24))) &&
                                 ((*(double *)(piVar30 + lVar57 * 0x152 + 0x24) <
                                   (double)DAT_14cb1c868 &&
                                  (-DAT_14cb1c870 < *(double *)(piVar30 + lVar57 * 0x152 + 0x26)))))
                                && (*(double *)(piVar30 + lVar57 * 0x152 + 0x26) < DAT_14cb1c870))
                               && ((iVar45 = _finite(dVar74), iVar45 != 0 &&
                                   (iVar45 = _finite(*(double *)(piVar30 + lVar57 * 0x152 + 0x24)),
                                   iVar45 != 0)))) {
                              iVar45 = _finite(*(double *)(piVar30 + lVar57 * 0x152 + 0x26));
                              fVar75 = 0.0;
                              if (iVar45 != 0) {
                                fVar75 = -0.5;
                              }
                            }
                            if ((float)((double)CONCAT44(uVar79,uVar78) * (double)local_b008 +
                                       dVar28 * dVar77 + dVar68 * dVar71) < fVar75)
                            goto LAB_143806e9c;
                          }
                        }
                        if ((((piVar30[lVar57 * 0x152 + 0x51] == 0) ||
                             (uVar44 = piVar30[lVar57 * 0x152 + 0x50], (int)uVar44 < 0)) ||
                            (DAT_14c9647dc <= (int)uVar44)) ||
                           (((lVar47 = (ulonglong)((uVar44 & 0xffff) * 0x18) +
                                       *(longlong *)
                                        (DAT_14c9647c8 + (ulonglong)(uVar44 >> 0x10) * 8),
                             lVar47 == 0 ||
                             (*(int *)(lVar47 + 0x10) != piVar30[lVar57 * 0x152 + 0x51])) ||
                            (((*(uint *)(lVar47 + 8) & 0x10200000) != 0 ||
                             (cVar24 = FUN_140383372(), cVar24 == '\0')))))) {
                          bVar25 = *(byte *)(piVar29 + 0x150);
                          if (((char)piVar30[lVar57 * 0x152 + 0x150] == '\x01') &&
                             ((bVar25 & 1) != 0)) {
                            puVar62 = (uint *)(piVar30 + lVar57 * 0x152 + 0x52);
                            if ((((piVar30[lVar57 * 0x152 + 0x53] != 0) &&
                                 (((uVar44 = *puVar62, -1 < (int)uVar44 &&
                                   ((int)uVar44 < DAT_14c9647dc)) &&
                                  (lVar47 = (ulonglong)((uVar44 & 0xffff) * 0x18) +
                                            *(longlong *)
                                             (DAT_14c9647c8 + (ulonglong)(uVar44 >> 0x10) * 8),
                                  lVar47 != 0)))) &&
                                ((*(int *)(lVar47 + 0x10) == piVar30[lVar57 * 0x152 + 0x53] &&
                                 ((*(uint *)(lVar47 + 8) & 0x10200000) == 0)))) ||
                               ((((piVar29[0x53] != 0 &&
                                  ((uVar44 = piVar29[0x52], -1 < (int)uVar44 &&
                                   ((int)uVar44 < DAT_14c9647dc)))) &&
                                 (lVar47 = (ulonglong)((uVar44 & 0xffff) * 0x18) +
                                           *(longlong *)
                                            (DAT_14c9647c8 + (ulonglong)(uVar44 >> 0x10) * 8),
                                 lVar47 != 0)) &&
                                ((*(int *)(lVar47 + 0x10) == piVar29[0x53] &&
                                 ((*(uint *)(lVar47 + 8) & 0x10200000) == 0)))))) {
                              local_b008 = piVar29 + 0x52;
                              cVar24 = FUN_140383372(puVar62);
                              if ((cVar24 != '\0') ||
                                 ((cVar24 = FUN_140383372(puVar62), cVar24 != '\0' ||
                                  (cVar24 = FUN_140383372(local_b008), cVar24 != '\0'))))
                              goto LAB_143806e9c;
                              bVar25 = *(byte *)(piVar29 + 0x150);
                            }
                          }
                          if ((bVar25 & 1) != 0) {
                            iVar45 = piVar29[0x14a];
                            uVar44 = iVar45 + 1;
                            piVar29[0x14a] = uVar44;
                            if ((uint)piVar29[0x14b] < uVar44) {
                              FUN_1400c4ccc(piVar29 + 0x144);
                            }
                            piVar30 = piVar29 + 0x144;
                            if (*(int **)(piVar29 + 0x148) != (int *)0x0) {
                              piVar30 = *(int **)(piVar29 + 0x148);
                            }
                            piVar30[iVar45] = (int)uVar50;
                          }
LAB_143807049:
                          local_b038 = (int *)CONCAT44(local_b038._4_4_,fVar66);
                          local_afd8 = CONCAT44(uVar80,fVar67);
                          piVar30 = local_6b8;
                          if (local_6b8 == (int *)0x0) {
                            piVar30 = &iStack_afb8;
                          }
                          iVar45 = piVar30[uVar40 * 0x152 + 0x150];
                          dVar28 = *(double *)(piVar30 + uVar40 * 0x152 + 0x18);
                          dVar68 = *(double *)(piVar30 + uVar40 * 0x152 + 0x1a);
                          fVar66 = (float)piVar58[0x14];
                          dVar74 = *(double *)(piVar30 + uVar40 * 0x152 + 4) -
                                   *(double *)(piVar58 + 4);
                          dVar70 = *(double *)(piVar30 + uVar40 * 0x152 + 2) -
                                   *(double *)(piVar58 + 2);
                          fVar67 = (float)SQRT(dVar70 * dVar70 + dVar74 * dVar74);
                          dVar69 = DAT_14c8463f8;
                          dVar77 = DAT_14c8463f0;
                          if (1e-08 < fVar67) {
                            dVar69 = dVar74 * (double)(1.0 / fVar67);
                            dVar77 = dVar70 * (double)(1.0 / fVar67);
                          }
                          fVar67 = (fVar66 + 25.0 + (float)piVar30[uVar40 * 0x152 + 0x14]) / fVar67;
                          fVar75 = fVar67;
                          if (1.0 <= fVar67) {
                            fVar75 = 1.0;
                          }
                          local_b008 = (int *)CONCAT44(local_b008._4_4_,
                                                       piVar30[uVar40 * 0x152 + 0x14]);
                          uStack_afd0 = uVar81;
                          uStack_afcc = uVar82;
                          fVar67 = asinf((float)(-(uint)(fVar67 < -1.0) & 0xbf800000 |
                                                ~-(uint)(fVar67 < -1.0) & (uint)fVar75));
                          dVar74 = (double)-(fVar67 * 57.295776) * 0.017453292519943295;
                          dVar70 = sin(dVar74);
                          dVar71 = cos(dVar74);
                          dVar74 = (double)(fVar67 * 57.295776) * 0.017453292519943295;
                          dVar72 = sin(dVar74);
                          dVar74 = cos(dVar74);
                          if ((char)iVar45 == '\0') {
                            fVar66 = 0.0;
                          }
                          else {
                            fVar66 = fVar66 / (local_b008._0_4_ + fVar66);
                          }
                          dVar12 = dVar70 * dVar77 + dVar69 * dVar71;
                          dVar13 = dVar74 * dVar77 - dVar69 * dVar72;
                          dVar70 = -(dVar71 * dVar77 - dVar69 * dVar70);
                          dVar74 = -(dVar72 * dVar77 + dVar69 * dVar74);
                          dVar68 = dVar68 * (double)(1.0 - fVar66) + local_b028 * (double)fVar66;
                          dVar28 = dVar28 * (double)(1.0 - fVar66) + (double)fVar66 * local_b020;
                          if ((((char)piVar58[0x4e] == '\x01') &&
                              (cVar24 = FUN_1437fb8f2(local_afe0), cVar24 != '\0')) &&
                             ((float)piVar58[0x4c] - (float)piVar30[uVar40 * 0x152 + 0x14] <
                              (float)piVar58[0x14] ||
                              (float)piVar58[0x4c] - (float)piVar30[uVar40 * 0x152 + 0x14] ==
                              (float)piVar58[0x14])) {
                            dVar69 = (*(double *)(piVar58 + 0x3c) - *(double *)(piVar58 + 4)) -
                                     dVar68;
                            dVar77 = (*(double *)(piVar58 + 0x3a) - *(double *)(piVar58 + 2)) -
                                     dVar28;
                            if ((dVar77 * dVar12 + dVar69 * dVar70 < -1.0) &&
                               (dVar77 * dVar74 + dVar69 * dVar13 < -1.0)) {
                              fVar75 = (float)FUN_147e3e8a7(piVar58);
                              fVar66 = local_b038._0_4_;
                              fVar67 = (float)local_afd8;
                              uVar80 = local_afd8._4_4_;
                              uVar81 = uStack_afd0;
                              uVar82 = uStack_afcc;
                              if (fVar75 < (float)piVar58[0x2b]) {
                                piVar30 = *(int **)(piVar58 + 0x140);
                                if (*(int **)(piVar58 + 0x140) == (int *)0x0) {
                                  piVar30 = local_b058;
                                }
                                iVar45 = piVar58[0x142];
                                if ((longlong)iVar45 != 0) {
                                  fVar75 = (float)piVar58[0x2d];
                                  fVar76 = (float)piVar58[0x2e];
                                  fVar73 = (float)piVar58[0x2f];
                                  fVar7 = (float)piVar58[0x30];
                                  lVar47 = 0;
                                  do {
                                    if ((9.999999747378752e-05 <
                                         ABS(*(double *)((longlong)piVar30 + lVar47 + 8))) ||
                                       (9.999999747378752e-05 <
                                        ABS(*(double *)((longlong)piVar30 + lVar47 + 0x10)))) {
                                      *(float *)((longlong)piVar30 + lVar47) =
                                           *(float *)((longlong)piVar30 + lVar47) -
                                           (fVar75 + fVar76 + fVar73 + fVar7);
                                    }
                                    lVar47 = lVar47 + 0x18;
                                  } while ((longlong)iVar45 * 0x18 != lVar47);
                                }
                              }
                              goto LAB_143806e9c;
                            }
                          }
                          piVar29 = *(int **)(piVar58 + 0x140);
                          if (*(int **)(piVar58 + 0x140) == (int *)0x0) {
                            piVar29 = local_b058;
                          }
                          iVar45 = piVar58[0x142];
                          fVar66 = local_b038._0_4_;
                          fVar67 = (float)local_afd8;
                          uVar80 = local_afd8._4_4_;
                          uVar81 = uStack_afd0;
                          uVar82 = uStack_afcc;
                          if ((longlong)iVar45 != 0) {
                            lVar47 = 0;
                            do {
                              dVar77 = *(double *)((longlong)piVar29 + lVar47 + 0x10) - dVar68;
                              dVar69 = *(double *)((longlong)piVar29 + lVar47 + 8) - dVar28;
                              if ((dVar69 * dVar12 + dVar77 * dVar70 < -1.0) &&
                                 (dVar69 * dVar74 + dVar77 * dVar13 < -1.0)) {
                                fVar75 = (float)piVar58[0x20] * 0.017453292;
                                fVar75 = (float)(longlong)
                                                (fVar75 * 0.15915494 +
                                                *(float *)(&DAT_14a184448 +
                                                          (ulonglong)(fVar75 < 0.0) * 4)) *
                                         -6.2831855 + fVar75;
                                if (1.5707964 < fVar75) {
                                  fVar76 = 3.1415927;
LAB_1438073b2:
                                  fVar75 = fVar76 - fVar75;
                                  fVar76 = -1.0;
                                }
                                else {
                                  if (fVar75 < -1.5707964) {
                                    fVar76 = -3.1415927;
                                    goto LAB_1438073b2;
                                  }
                                  fVar76 = 1.0;
                                }
                                fVar73 = fVar75 * fVar75;
                                dVar77 = *(double *)(piVar30 + uVar40 * 0x152 + 0x18) -
                                         (double)((((((fVar73 * -2.6051615e-07 + 2.4760495e-05) *
                                                      fVar73 + -0.0013888378) * fVar73 + 0.041666638
                                                    ) * fVar73 + -0.5) * fVar73 + 1.0) * fVar76) *
                                         (double)(float)piVar58[0x21];
                                dVar69 = *(double *)(piVar30 + uVar40 * 0x152 + 0x1a) -
                                         (double)((((((fVar73 * -2.3889859e-08 + 2.7525562e-06) *
                                                      fVar73 + -0.00019840874) * fVar73 +
                                                    0.008333331) * fVar73 + -0.16666667) * fVar73 +
                                                  1.0) * fVar75) * (double)(float)piVar58[0x21];
                                fVar75 = (float)SQRT(dVar69 * dVar69 + dVar77 * dVar77);
                                fVar75 = (float)(-(uint)(0.0 < fVar75) &
                                                (uint)((float)((SQRT((*(double *)
                                                                       (piVar30 + uVar40 * 0x152 + 4
                                                                       ) - *(double *)(piVar58 + 4))
                                                                     * (*(double *)
                                                                         (piVar30 +
                                                                         uVar40 * 0x152 + 4) -
                                                                       *(double *)(piVar58 + 4)) +
                                                                     (*(double *)
                                                                       (piVar30 + uVar40 * 0x152 + 2
                                                                       ) - *(double *)(piVar58 + 2))
                                                                     * (*(double *)
                                                                         (piVar30 +
                                                                         uVar40 * 0x152 + 2) -
                                                                       *(double *)(piVar58 + 2))) -
                                                               (double)(float)piVar58[0x14]) -
                                                              (double)(float)piVar30[uVar40 * 0x152
                                                                                     + 0x14]) /
                                                      fVar75)) / local_b038._0_4_;
                                if (1.0 <= fVar75) {
                                  fVar75 = 1.0;
                                }
                                if (fVar75 <= 0.0) {
                                  fVar75 = 0.0;
                                }
                                *(float *)((longlong)piVar29 + lVar47) =
                                     ((1.0 - fVar75) + 1.0) * (float)local_aff8._0_4_ +
                                     *(float *)((longlong)piVar29 + lVar47);
                              }
                              lVar47 = lVar47 + 0x18;
                            } while ((longlong)iVar45 * 0x18 != lVar47);
                          }
                        }
                      }
                    }
                  }
                }
LAB_143806e9c:
                uVar40 = uVar40 + 1;
              } while ((longlong)uVar40 < (longlong)(int)local_6b0);
            }
            piVar29 = local_b058;
            piVar30 = local_b060;
            pcVar51 = _finite_exref;
            uVar40 = DAT_149931e80;
            uVar80 = (undefined4)DAT_149931e80;
            uVar81 = DAT_149931e80._4_4_;
            dVar28 = *(double *)(piVar58 + 0x22);
            bVar65 = false;
            if (((double)((ulonglong)DAT_14cb1c860 ^ uVar40) < dVar28) &&
               (bVar65 = false, dVar28 < (double)DAT_14cb1c860)) {
              bVar65 = false;
              if (((double)((ulonglong)DAT_14cb1c868 ^ uVar40) < *(double *)(piVar58 + 0x24)) &&
                 (bVar65 = false, *(double *)(piVar58 + 0x24) < (double)DAT_14cb1c868)) {
                bVar65 = false;
                if (((double)((ulonglong)DAT_14cb1c870 ^ uVar40) < *(double *)(piVar58 + 0x26)) &&
                   (*(double *)(piVar58 + 0x26) < DAT_14cb1c870)) {
                  iVar45 = _finite(dVar28);
                  if ((iVar45 == 0) || (iVar45 = _finite(*(double *)(piVar58 + 0x24)), iVar45 == 0))
                  {
                    bVar65 = false;
                  }
                  else {
                    iVar45 = _finite(*(double *)(piVar58 + 0x26));
                    bVar65 = iVar45 != 0;
                  }
                }
              }
            }
            piVar39 = *(int **)(piVar58 + 0x140);
            if (*(int **)(piVar58 + 0x140) == (int *)0x0) {
              piVar39 = piVar29;
            }
            fVar75 = ABS(fVar67 - (float)piVar39[(longlong)(piVar58[0x142] + -1) * 6]);
            if ((bVar65) || (1e-08 < fVar75)) {
              if (*(longlong *)(piVar58 + 0x6a) != 0) {
                bVar65 = (longlong)uStack_6a0 < 0;
                uStack_6a0 = uStack_6a0 & 0xffffffff00000000;
                if (bVar65) {
                  FUN_141805cae(&local_6a8,0);
                }
                iVar45 = piVar58[0x142];
                if (iVar45 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4(iVar45);
                }
                if ((int)uStack_6a0._4_4_ < iVar45) {
                  FUN_141805cae(&local_6a8);
                  iVar45 = piVar58[0x142];
                }
                piVar30 = *(int **)(piVar58 + 0x140);
                if (*(int **)(piVar58 + 0x140) == (int *)0x0) {
                  piVar30 = piVar29;
                }
                if (iVar45 != 0) {
                  lVar47 = 0;
                  do {
                    uVar40 = uStack_6a0;
                    lVar48 = (longlong)(int)uStack_6a0;
                    uVar44 = (int)uStack_6a0 + 1;
                    uStack_6a0 = CONCAT44(uStack_6a0._4_4_,uVar44);
                    if (uStack_6a0._4_4_ < uVar44) {
                      FUN_147e4455e(&local_6a8,uVar40 & 0xffffffff);
                    }
                    puVar27 = (undefined8 *)((longlong)piVar30 + lVar47 + 8);
                    puVar3 = (undefined8 *)((longlong)local_6a8 + lVar48 * 0x18);
                    *puVar3 = 0;
                    puVar3[1] = 0;
                    *(undefined8 *)((longlong)local_6a8 + 0x10 + lVar48 * 0x18) = 0;
                    *(undefined4 *)((longlong)local_6a8 + 0x10 + lVar48 * 0x18) = 0x7f7fffff;
                    uVar10 = puVar27[1];
                    puVar3 = (undefined8 *)((longlong)local_6a8 + lVar48 * 0x18);
                    *puVar3 = *puVar27;
                    puVar3[1] = uVar10;
                    lVar47 = lVar47 + 0x18;
                  } while ((longlong)iVar45 * 0x18 != lVar47);
                }
                fVar75 = (float)piVar58[0x21];
                local_b078 = &local_6a8;
                (**(code **)(**(longlong **)(piVar58 + 0x6a) + 8))
                          (*(longlong **)(piVar58 + 0x6a),*(undefined8 *)(piVar58 + 0x14c),
                           local_b078,piVar58 + 0x3a);
                iVar45 = piVar58[0x142];
                if (0 < (longlong)iVar45) {
                  lVar47 = 0;
                  do {
                    fVar76 = *(float *)((longlong)local_6a8 + 0x10 + lVar47);
                    if (fVar76 <= fVar75) {
                      piVar30 = *(int **)(piVar58 + 0x140);
                      if (*(int **)(piVar58 + 0x140) == (int *)0x0) {
                        piVar30 = local_b058;
                      }
                      dVar28 = *(double *)((longlong)piVar30 + lVar47 + 8);
                      dVar68 = *(double *)((longlong)piVar30 + lVar47 + 0x10);
                      fVar73 = (float)SQRT(dVar28 * dVar28 + dVar68 * dVar68);
                      uVar44 = -(uint)(0.0 < fVar73);
                      fVar76 = (float)(~uVar44 & 0x7f7fffff | (uint)(fVar76 / fVar73) & uVar44) /
                               fVar66;
                      if (1.0 <= fVar76) {
                        fVar76 = 1.0;
                      }
                      if (fVar76 <= 0.0) {
                        fVar76 = 0.0;
                      }
                      *(float *)((longlong)piVar30 + lVar47) =
                           ((1.0 - fVar76) + 1.0) * -(float)local_b018._0_4_ +
                           *(float *)((longlong)piVar30 + lVar47);
                    }
                    lVar47 = lVar47 + 0x18;
                  } while ((longlong)iVar45 * 0x18 != lVar47);
                  iVar45 = piVar58[0x142];
                }
                piVar30 = local_b058;
                if (*(int **)(piVar58 + 0x140) != (int *)0x0) {
                  piVar30 = *(int **)(piVar58 + 0x140);
                }
                fVar75 = ABS(fVar67 - (float)piVar30[(longlong)(iVar45 + -1) * 6]);
                pcVar51 = _finite_exref;
                piVar30 = local_b060;
              }
              if (1e-08 < fVar75) {
                iVar45 = piVar63[lVar57 * 0x152 + 0x142];
                if (1 < (longlong)iVar45) {
                  pppppppuVar31 = local_b030;
                  if (*(undefined8 ********)(piVar63 + lVar57 * 0x152 + 0x140) !=
                      (undefined8 *******)0x0) {
                    pppppppuVar31 = *(undefined8 ********)(piVar63 + lVar57 * 0x152 + 0x140);
                  }
                  memset(&local_688,0,0x2f0);
                  pppppppuStack_690 = pppppppuVar31 + (longlong)iVar45 * 3 + -3;
                  local_698 = pppppppuVar31;
                  fVar66 = logf((float)iVar45);
                  local_688 = (double)CONCAT44(local_688._4_4_,(int)(longlong)(fVar66 + fVar66));
                  pppppppuVar31 = &local_698;
                  do {
                    ppppppuVar37 = *pppppppuVar31;
                    ppppppuVar55 = pppppppuVar31[1];
                    iVar45 = *(int *)(pppppppuVar31 + 2);
                    uVar44 = (int)((ulonglong)((longlong)ppppppuVar55 - (longlong)ppppppuVar37) >> 3
                                  ) * -0x55555555 + 1;
                    ppppppuVar52 = ppppppuVar37;
                    ppppppuVar61 = ppppppuVar55;
                    if (iVar45 != 0) {
LAB_143807ef2:
                      if (8 < (int)uVar44) {
                        uVar40 = (ulonglong)(uVar44 >> 1);
                        pppppuVar11 = ppppppuVar37[uVar40 * 3 + 2];
                        pppppuVar18 = ppppppuVar37[uVar40 * 3];
                        pppppuVar19 = (ppppppuVar37 + uVar40 * 3)[1];
                        ppppppuVar37[uVar40 * 3 + 2] = ppppppuVar37[2];
                        pppppuVar20 = ppppppuVar37[1];
                        ppppppuVar37[uVar40 * 3] = *ppppppuVar37;
                        (ppppppuVar37 + uVar40 * 3)[1] = pppppuVar20;
                        ppppppuVar37[2] = pppppuVar11;
                        *ppppppuVar37 = pppppuVar18;
                        ppppppuVar37[1] = pppppuVar19;
                        ppppppuVar60 = ppppppuVar55 + 3;
                        ppppppuVar36 = ppppppuVar37;
                        do {
                          ppppppuVar23 = ppppppuVar36 + 3;
                          ppppppuVar56 = ppppppuVar36 + 3;
                          do {
                            ppppppuVar36 = ppppppuVar56;
                            ppppppuVar54 = ppppppuVar23;
                            if (ppppppuVar55 < ppppppuVar36) break;
                            ppppppuVar23 = ppppppuVar54 + 3;
                            ppppppuVar56 = ppppppuVar36 + 3;
                          } while (*(float *)ppppppuVar37 < *(float *)ppppppuVar36 ||
                                   *(float *)ppppppuVar37 == *(float *)ppppppuVar36);
                          ppppppuVar23 = ppppppuVar60 + -6;
                          do {
                            ppppppuVar56 = ppppppuVar60;
                            ppppppuVar43 = ppppppuVar23;
                            ppppppuVar60 = ppppppuVar56 + -3;
                            if (ppppppuVar60 <= ppppppuVar37) break;
                            ppppppuVar23 = ppppppuVar43 + -3;
                          } while (*(float *)ppppppuVar60 < *(float *)ppppppuVar37 ||
                                   *(float *)ppppppuVar60 == *(float *)ppppppuVar37);
                          if (ppppppuVar60 < ppppppuVar36) goto LAB_143807fe0;
                          pppppuVar11 = ppppppuVar36[2];
                          pppppuVar18 = *ppppppuVar36;
                          pppppuVar19 = ppppppuVar36[1];
                          ppppppuVar36[2] = ppppppuVar56[-1];
                          pppppuVar20 = ppppppuVar56[-2];
                          *ppppppuVar36 = *ppppppuVar60;
                          ppppppuVar36[1] = pppppuVar20;
                          ppppppuVar56[-1] = pppppuVar11;
                          *ppppppuVar60 = pppppuVar18;
                          ppppppuVar56[-2] = pppppuVar19;
                        } while( true );
                      }
                      if (ppppppuVar37 < ppppppuVar55) {
                        do {
                          ppppppuVar52 = ppppppuVar37;
                          if (ppppppuVar37 + 3 <= ppppppuVar55) {
                            ppppppuVar61 = ppppppuVar37 + 3;
                            fVar66 = *(float *)ppppppuVar37;
                            do {
                              fVar67 = *(float *)ppppppuVar61;
                              ppppppuVar60 = ppppppuVar61;
                              if (fVar66 <= fVar67) {
                                fVar67 = fVar66;
                                ppppppuVar60 = ppppppuVar52;
                              }
                              ppppppuVar52 = ppppppuVar60;
                              ppppppuVar61 = ppppppuVar61 + 3;
                              fVar66 = fVar67;
                            } while (ppppppuVar61 <= ppppppuVar55);
                          }
                          local_138 = ppppppuVar52[2];
                          local_148 = (undefined8 *******)*ppppppuVar52;
                          uStack_140 = (undefined8 *******)ppppppuVar52[1];
                          pppppuVar18 = local_148;
                          pppppuVar19 = uStack_140;
                          ppppppuVar52[2] = ppppppuVar55[2];
                          pppppuVar11 = ppppppuVar55[1];
                          *ppppppuVar52 = *ppppppuVar55;
                          ppppppuVar52[1] = pppppuVar11;
                          ppppppuVar55[2] = local_138;
                          local_148._4_4_ = (float)((ulonglong)local_148 >> 0x20);
                          uStack_140._4_4_ = (float)((ulonglong)uStack_140 >> 0x20);
                          *(float *)ppppppuVar55 = (float)local_148;
                          *(float *)((longlong)ppppppuVar55 + 4) = local_148._4_4_;
                          *(float *)(ppppppuVar55 + 1) = (float)uStack_140;
                          *(float *)((longlong)ppppppuVar55 + 0xc) = uStack_140._4_4_;
                          ppppppuVar55 = ppppppuVar55 + -3;
                          local_148 = (undefined8 *******)pppppuVar18;
                          uStack_140 = (undefined8 *******)pppppuVar19;
                        } while (ppppppuVar37 < ppppppuVar55);
                      }
                      goto LAB_143808381;
                    }
LAB_1438080b3:
                    if (uVar44 != 0) {
                      iVar45 = (int)((uVar44 - ((int)(uVar44 - 2) >> 0x1f)) + -2) >> 1;
                      iVar26 = iVar45;
joined_r0x0001438080d6:
                      do {
                        iVar53 = iVar45 * 2 + 1;
                        if (iVar53 < (int)uVar44) {
                          iVar46 = iVar45 * 2 + 2;
                          if ((iVar46 < (int)uVar44) &&
                             (*(float *)(ppppppuVar37 + (longlong)iVar46 * 3) <
                              *(float *)(ppppppuVar37 + (longlong)iVar53 * 3) ||
                              *(float *)(ppppppuVar37 + (longlong)iVar46 * 3) ==
                              *(float *)(ppppppuVar37 + (longlong)iVar53 * 3))) {
                            iVar53 = iVar46;
                          }
                          if (*(float *)(ppppppuVar37 + (longlong)iVar53 * 3) <=
                              *(float *)(ppppppuVar37 + (longlong)iVar45 * 3) &&
                              *(float *)(ppppppuVar37 + (longlong)iVar45 * 3) !=
                              *(float *)(ppppppuVar37 + (longlong)iVar53 * 3)) {
                            ppppppuVar55 = ppppppuVar37 + (longlong)iVar45 * 3;
                            ppppppuVar52 = ppppppuVar37 + (longlong)iVar53 * 3;
                            local_138 = ppppppuVar55[2];
                            local_148 = (undefined8 *******)*ppppppuVar55;
                            uStack_140 = (undefined8 *******)ppppppuVar55[1];
                            pppppuVar18 = local_148;
                            pppppuVar19 = uStack_140;
                            ppppppuVar55[2] = ppppppuVar52[2];
                            pppppuVar11 = ppppppuVar52[1];
                            *ppppppuVar55 = *ppppppuVar52;
                            ppppppuVar55[1] = pppppuVar11;
                            ppppppuVar52[2] = local_138;
                            local_148._4_4_ = (float)((ulonglong)local_148 >> 0x20);
                            uStack_140._4_4_ = (float)((ulonglong)uStack_140 >> 0x20);
                            *(float *)ppppppuVar52 = (float)local_148;
                            *(float *)((longlong)ppppppuVar52 + 4) = local_148._4_4_;
                            *(float *)(ppppppuVar52 + 1) = (float)uStack_140;
                            *(float *)((longlong)ppppppuVar52 + 0xc) = uStack_140._4_4_;
                            iVar45 = iVar53;
                            local_148 = (undefined8 *******)pppppuVar18;
                            uStack_140 = (undefined8 *******)pppppuVar19;
                            goto joined_r0x0001438080d6;
                          }
                        }
                        bVar65 = iVar26 != 0;
                        iVar45 = iVar26 + -1;
                        iVar26 = iVar45;
                      } while (bVar65);
                      if (1 < (int)uVar44) {
                        uVar40 = (ulonglong)uVar44 - 1;
                        local_138 = ppppppuVar37[2];
                        local_148 = (undefined8 *******)*ppppppuVar37;
                        uStack_140 = (undefined8 *******)ppppppuVar37[1];
                        pppppuVar18 = local_148;
                        pppppuVar19 = uStack_140;
                        ppppppuVar37[2] = ppppppuVar37[uVar40 * 3 + 2];
                        pppppuVar11 = (ppppppuVar37 + uVar40 * 3)[1];
                        *ppppppuVar37 = ppppppuVar37[uVar40 * 3];
                        ppppppuVar37[1] = pppppuVar11;
                        ppppppuVar37[uVar40 * 3 + 2] = local_138;
                        local_148._4_4_ = (float)((ulonglong)local_148 >> 0x20);
                        uStack_140._4_4_ = (float)((ulonglong)uStack_140 >> 0x20);
                        ppppppuVar55 = ppppppuVar37 + uVar40 * 3;
                        *(float *)ppppppuVar55 = (float)local_148;
                        *(float *)((longlong)ppppppuVar55 + 4) = local_148._4_4_;
                        *(float *)(ppppppuVar55 + 1) = (float)uStack_140;
                        *(float *)((longlong)ppppppuVar55 + 0xc) = uStack_140._4_4_;
                        local_148 = (undefined8 *******)pppppuVar18;
                        uStack_140 = (undefined8 *******)pppppuVar19;
                        if (uVar44 != 2) {
                          do {
                            iVar45 = 0;
                            iVar53 = 1;
                            iVar26 = 0;
                            do {
                              iVar45 = iVar45 + 2;
                              iVar46 = iVar53;
                              if (((longlong)iVar45 < (longlong)uVar40) &&
                                 (*(float *)(ppppppuVar37 + (longlong)iVar45 * 3) <
                                  *(float *)(ppppppuVar37 + (longlong)iVar53 * 3) ||
                                  *(float *)(ppppppuVar37 + (longlong)iVar45 * 3) ==
                                  *(float *)(ppppppuVar37 + (longlong)iVar53 * 3))) {
                                iVar46 = iVar45;
                              }
                              if (*(float *)(ppppppuVar37 + (longlong)iVar26 * 3) <
                                  *(float *)(ppppppuVar37 + (longlong)iVar46 * 3) ||
                                  *(float *)(ppppppuVar37 + (longlong)iVar26 * 3) ==
                                  *(float *)(ppppppuVar37 + (longlong)iVar46 * 3)) break;
                              ppppppuVar55 = ppppppuVar37 + (longlong)iVar26 * 3;
                              ppppppuVar52 = ppppppuVar37 + (longlong)iVar46 * 3;
                              pppppuVar11 = ppppppuVar55[2];
                              pppppuVar18 = *ppppppuVar55;
                              pppppuVar19 = ppppppuVar55[1];
                              ppppppuVar55[2] = ppppppuVar52[2];
                              pppppuVar20 = ppppppuVar52[1];
                              *ppppppuVar55 = *ppppppuVar52;
                              ppppppuVar55[1] = pppppuVar20;
                              ppppppuVar52[2] = pppppuVar11;
                              *ppppppuVar52 = pppppuVar18;
                              ppppppuVar52[1] = pppppuVar19;
                              iVar45 = iVar46 * 2;
                              iVar53 = iVar46 * 2 + 1;
                              iVar26 = iVar46;
                            } while ((longlong)iVar53 < (longlong)uVar40);
                            uVar41 = uVar40 - 1;
                            local_138 = ppppppuVar37[2];
                            local_148 = (undefined8 *******)*ppppppuVar37;
                            uStack_140 = (undefined8 *******)ppppppuVar37[1];
                            pppppuVar18 = local_148;
                            pppppuVar19 = uStack_140;
                            ppppppuVar37[2] = ppppppuVar37[uVar41 * 3 + 2];
                            pppppuVar11 = (ppppppuVar37 + uVar41 * 3)[1];
                            *ppppppuVar37 = ppppppuVar37[uVar41 * 3];
                            ppppppuVar37[1] = pppppuVar11;
                            ppppppuVar37[uVar41 * 3 + 2] = local_138;
                            local_148._4_4_ = (float)((ulonglong)local_148 >> 0x20);
                            uStack_140._4_4_ = (float)((ulonglong)uStack_140 >> 0x20);
                            ppppppuVar55 = ppppppuVar37 + uVar41 * 3;
                            *(float *)ppppppuVar55 = (float)local_148;
                            *(float *)((longlong)ppppppuVar55 + 4) = local_148._4_4_;
                            *(float *)(ppppppuVar55 + 1) = (float)uStack_140;
                            *(float *)((longlong)ppppppuVar55 + 0xc) = uStack_140._4_4_;
                            bVar65 = 2 < uVar40;
                            uVar40 = uVar41;
                            local_148 = (undefined8 *******)pppppuVar18;
                            uStack_140 = (undefined8 *******)pppppuVar19;
                          } while (bVar65);
                        }
                      }
                    }
LAB_143808381:
                    pppppppuVar31 = pppppppuVar31 + -3;
                  } while (&local_698 <= pppppppuVar31);
                }
                lVar47 = *(longlong *)(piVar63 + lVar57 * 0x152 + 0x140);
                piVar29 = (int *)(lVar47 + 8);
                if (lVar47 == 0) {
                  piVar29 = piVar63 + lVar57 * 0x152 + 0x76;
                }
                piVar58 = (int *)(lVar47 + 0x10);
                if (lVar47 == 0) {
                  piVar58 = piVar63 + lVar57 * 0x152 + 0x78;
                }
                uVar10 = *(undefined8 *)piVar58;
                *(undefined8 *)(piVar63 + lVar57 * 0x152 + 0x6c) = *(undefined8 *)piVar29;
                *(undefined8 *)(piVar63 + lVar57 * 0x152 + 0x6e) = uVar10;
                (piVar63 + lVar57 * 0x152 + 0x70)[0] = 0;
                (piVar63 + lVar57 * 0x152 + 0x70)[1] = 0;
                *(undefined1 *)(piVar63 + lVar57 * 0x152 + 0x72) = 1;
                pcVar51 = _finite_exref;
              }
            }
            FUN_14382ab50(*(undefined8 *)(*(longlong *)(piVar63 + lVar57 * 0x152 + 0x14c) + 0xcc8),
                          *(longlong *)(piVar63 + lVar57 * 0x152 + 0x14c) + 0x440,
                          piVar63 + lVar57 * 0x152 + 0x1e,piVar30 + lVar57 * 0x152 + 0x6c);
            uVar40 = local_6b0 & 0xffffffff;
            puVar62 = local_b048;
            SRWLock = local_b040;
          }
          uVar50 = uVar50 + 1;
        } while ((longlong)uVar50 < (longlong)(int)uVar40);
      }
    }
    if (local_6a8 != 0.0) {
      FUN_1400020a8();
      uVar40 = local_6b0 & 0xffffffff;
    }
    piVar63 = &iStack_afb8;
    if (local_6b8 != (int *)0x0) {
      piVar63 = local_6b8;
    }
    FUN_140102dc2(piVar63,uVar40 & 0xffffffff);
    dVar28 = local_b050;
    if (local_6b8 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  AcquireSRWLockExclusive(SRWLock);
  iVar45 = *(int *)((longlong)dVar28 + 0x108);
  if (iVar45 == 0) {
    uVar50 = 1;
    uVar40 = 0;
    iVar53 = 0;
    iVar26 = 0;
  }
  else {
    puVar32 = *(uint **)((longlong)dVar28 + 0x100);
    if (*(uint **)((longlong)dVar28 + 0x100) == (uint *)0x0) {
      puVar32 = puVar62;
    }
    uVar44 = *puVar32;
    if (uVar44 == 0) {
      iVar26 = iVar45 + 0x1e;
      if (-1 < iVar45 + -1) {
        iVar26 = iVar45 + -1;
      }
      uVar40 = 0;
      uVar50 = (ulonglong)(uint)(iVar26 >> 5);
      if (iVar26 >> 5 < 1) {
        uVar50 = uVar40;
      }
      iVar53 = 0;
      do {
        if (uVar50 == uVar40) goto LAB_143808670;
        iVar53 = iVar53 + 0x20;
        uVar44 = puVar32[uVar40 + 1];
        uVar40 = uVar40 + 1;
      } while (uVar44 == 0);
    }
    else {
      uVar40 = 0;
      iVar53 = 0;
    }
    uVar50 = (ulonglong)(-uVar44 & uVar44);
    uVar41 = uVar50 * 2 + 1;
    lVar57 = 0x3f;
    if (uVar41 != 0) {
      for (; uVar41 >> lVar57 == 0; lVar57 = lVar57 + -1) {
      }
    }
    iVar26 = (iVar53 - ((uint)lVar57 ^ 0x3f)) + 0x3e;
    if (iVar45 <= iVar26) {
      iVar26 = iVar45;
    }
  }
  if (iVar26 != iVar45) {
    uVar44 = 0xffffffff;
    iVar46 = iVar45;
    do {
      if (*(longlong *)(*(longlong *)((longlong)dVar28 + 0xe0) + 8 + (longlong)iVar26 * 0x20) != 0)
      {
        FUN_144982a3a();
        iVar46 = *(int *)((longlong)dVar28 + 0x108);
      }
      uVar44 = uVar44 & ~(uint)uVar50;
      puVar32 = *(uint **)((longlong)dVar28 + 0x100);
      if (*(uint **)((longlong)dVar28 + 0x100) == (uint *)0x0) {
        puVar32 = puVar62;
      }
      iVar26 = (int)uVar40;
      lVar57 = (longlong)iVar26;
      uVar33 = puVar32[lVar57] & uVar44;
      if (uVar33 == 0) {
        iVar34 = iVar46 + 0x1e;
        if (-1 < iVar46 + -1) {
          iVar34 = iVar46 + -1;
        }
        iVar34 = iVar34 >> 5;
        iVar53 = iVar53 + 0x20;
        iVar35 = iVar34;
        if (iVar34 < iVar26) {
          iVar35 = iVar26;
        }
        if (iVar26 < iVar34) {
          lVar47 = 0;
          do {
            uVar33 = puVar32[lVar57 + lVar47 + 1];
            if (uVar33 != 0) {
              uVar40 = (ulonglong)(iVar26 + (int)lVar47 + 1);
              uVar44 = 0xffffffff;
              goto LAB_143808627;
            }
            iVar53 = iVar53 + 0x20;
            lVar47 = lVar47 + 1;
          } while (iVar35 - lVar57 != lVar47);
          uVar44 = 0xffffffff;
          iVar26 = iVar35;
        }
        uVar40 = (ulonglong)(iVar26 + 1);
        puVar62 = local_b048;
        SRWLock = local_b040;
        dVar28 = local_b050;
        iVar26 = iVar46;
      }
      else {
LAB_143808627:
        uVar50 = (ulonglong)(-uVar33 & uVar33);
        uVar41 = uVar50 * 2 + 1;
        lVar57 = 0x3f;
        if (uVar41 != 0) {
          for (; uVar41 >> lVar57 == 0; lVar57 = lVar57 + -1) {
          }
        }
        iVar26 = (iVar53 - ((uint)lVar57 ^ 0x3f)) + 0x3e;
        if (iVar46 <= iVar26) {
          iVar26 = iVar46;
        }
      }
    } while (iVar26 != iVar45);
  }
LAB_143808670:
  ReleaseSRWLockExclusive(SRWLock);
  iVar45 = *(int *)((longlong)dVar28 + 0xd0);
  if ((longlong)iVar45 != 0) {
    lVar57 = *(longlong *)((longlong)dVar28 + 200);
    lVar47 = 0;
    do {
      iVar26 = *(int *)(lVar57 + 4 + lVar47);
      if (((((iVar26 != 0) && (uVar44 = *(uint *)(lVar57 + lVar47), -1 < (int)uVar44)) &&
           ((int)uVar44 < DAT_14c9647dc)) &&
          ((plVar38 = (longlong *)
                      ((ulonglong)((uVar44 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar44 >> 0x10) * 8)),
           plVar38 != (longlong *)0x0 && ((int)plVar38[2] == iVar26)))) &&
         (((*(uint *)(plVar38 + 1) & 0x10200000) == 0 && (*plVar38 != 0)))) {
        FUN_14493c85e(*plVar38,CONCAT71((int7)((ulonglong)plVar38 >> 8),1));
      }
      lVar47 = lVar47 + 8;
    } while ((longlong)iVar45 * 8 != lVar47);
  }
  if ((local_f0 ^ (ulonglong)auStack_b098) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_144973740((longlong)dVar28 + 0x3b8);
  return;
LAB_143807fe0:
  local_138 = ppppppuVar37[2];
  local_148 = (undefined8 *******)*ppppppuVar37;
  uStack_140 = (undefined8 *******)ppppppuVar37[1];
  pppppuVar18 = local_148;
  pppppuVar19 = uStack_140;
  ppppppuVar37[2] = ppppppuVar56[-1];
  pppppuVar11 = ppppppuVar56[-2];
  *ppppppuVar37 = *ppppppuVar60;
  ppppppuVar37[1] = pppppuVar11;
  ppppppuVar56[-1] = local_138;
  local_148._4_4_ = (float)((ulonglong)local_148 >> 0x20);
  uStack_140._4_4_ = (float)((ulonglong)uStack_140 >> 0x20);
  *(float *)ppppppuVar60 = (float)local_148;
  *(float *)((longlong)ppppppuVar56 + -0x14) = local_148._4_4_;
  *(float *)(ppppppuVar56 + -2) = (float)uStack_140;
  *(float *)((longlong)ppppppuVar56 + -0xc) = uStack_140._4_4_;
  iVar45 = iVar45 + -1;
  ppppppuVar56 = ppppppuVar56 + -6;
  piVar30 = local_b060;
  local_148 = (undefined8 *******)pppppuVar18;
  uStack_140 = (undefined8 *******)pppppuVar19;
  if ((longlong)ppppppuVar43 - (longlong)ppppppuVar52 <
      (longlong)ppppppuVar61 - (longlong)ppppppuVar54) {
    if (ppppppuVar36 < ppppppuVar55) {
      *pppppppuVar31 = ppppppuVar36;
      pppppppuVar31[1] = ppppppuVar55;
      *(int *)(pppppppuVar31 + 2) = iVar45;
      pppppppuVar31 = pppppppuVar31 + 3;
    }
    ppppppuVar54 = ppppppuVar37;
    if (ppppppuVar60 <= ppppppuVar37 + 3) goto LAB_143808381;
  }
  else {
    if (ppppppuVar37 + 3 < ppppppuVar60) {
      *pppppppuVar31 = ppppppuVar37;
      pppppppuVar31[1] = ppppppuVar56;
      *(int *)(pppppppuVar31 + 2) = iVar45;
      pppppppuVar31 = pppppppuVar31 + 3;
    }
    ppppppuVar37 = ppppppuVar36;
    ppppppuVar43 = ppppppuVar55;
    ppppppuVar56 = ppppppuVar55;
    if (ppppppuVar55 <= ppppppuVar36) goto LAB_143808381;
  }
  uVar44 = (int)((ulonglong)((longlong)ppppppuVar43 - (longlong)ppppppuVar54) >> 3) * -0x55555555 +
           1;
  ppppppuVar52 = ppppppuVar54;
  ppppppuVar55 = ppppppuVar56;
  ppppppuVar61 = ppppppuVar43;
  if (iVar45 == 0) goto LAB_1438080b3;
  goto LAB_143807ef2;
}



// FUNCTION 1438087bc FUN_1438087bc body=29 status=ok
// SIG undefined FUN_1438087bc(void)

undefined8 FUN_1438087bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438087d9 FUN_1438087d9 body=1146 status=ok
// SIG undefined FUN_1438087d9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438087d9(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  char *local_48;
  undefined4 uStack_40;
  uint uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  _DAT_14cb1c848 = 0x47efffffe0000000;
  _DAT_14cb1c850 = 0x47efffffe0000000;
  DAT_14cb1c858 = 0x47efffffe0000000;
  DAT_14cb1c860 = 0x47efffffe0000000;
  DAT_14cb1c868 = 0x47efffffe0000000;
  DAT_14cb1c870 = 0x47efffffe0000000;
  _DAT_14cb1c878 = 0x47efffffe0000000;
  _DAT_14cb1c880 = 0x47efffffe0000000;
  local_48 = "AssetRegistry";
  uStack_40 = 0xd;
  uStack_3c = uStack_3c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb1c888 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_48,&DAT_14cb1c890);
  if (cVar1 == '\0') {
    _DAT_14cb1c890 = 0;
    uRam000000014cb1c898 = 0;
  }
  if (local_48 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_48 = (char *)((ulonglong)local_48 & 0xffffffffffffff00);
  local_58 = 0;
  FUN_140bd5914(&DAT_14cb1c8b0,L"gbx.nav.ParallelSync",&local_48,
                L"When enabled, GbxNavAgents will be updated in parallel.");
  atexit(FUN_1437fa520);
  local_48 = "bone";
  uStack_40 = 4;
  uStack_3c = uStack_3c & 0xffffff00;
  FUN_14001a6c0(&local_48,1);
  local_48 = (char *)0x95794f0fe3dafd34;
  uStack_40 = 0xae10d1c6;
  uStack_3c = 0xe5b1fdea;
  _DAT_14cb1c8c8 = 0xe3dafd34;
  uRam000000014cb1c8cc = 0x95794f0f;
  uRam000000014cb1c8d0 = 0xae10d1c6;
  uRam000000014cb1c8d4 = 0xe5b1fdea;
  FUN_141005458(&local_48,0,L"GbxNavAnimData",0);
  atexit((_func_5014 *)&LAB_1437fa845);
  local_58 = 0;
  FUN_141471170(&DAT_14cb1c8d8,L"gbx.nav.AsyncAPIMode",&DAT_14c762030,
                L"Defines how Gbx Nav Async API handles nav queries:\n - 0: Do not use an async dispatch mode. All queries are executed in the current thread\n - 1: Hybrid (Default)\n - 2: Always dispatch queries in the background thread"
               );
  atexit(FUN_1437fa91e);
  DAT_14cb1cc18 = 0;
  _DAT_14cb1cc20 = 0x2200000000;
  atexit((_func_5014 *)&LAB_1437fb8e1);
  DAT_14cb1cc28 = 0;
  _DAT_14cb1cc30 = 0;
  _DAT_14cb1cc38 = 2;
  _DAT_14cb1cc3c = 0;
  ram0x00014cb1cc44 = 0;
  _DAT_14cb1cc4c = 0x200000000;
  _DAT_14cb1cc54 = 0;
  _DAT_14cb1cc60 = 0;
  LOCK();
  DAT_14cb1cc58._0_4_ = 0;
  DAT_14cb1cc58._4_4_ = 0;
  UNLOCK();
  atexit(FUN_1437fbafe);
  FUN_1446f470e(&DAT_14cb1cc68,L"NavChannel",1);
  _DAT_14cb1c8a8 = 0;
  LOCK();
  DAT_14cb1c8a0 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_1437fbb11);
  local_58 = 0;
  FUN_1415c789c(&DAT_14cb1cc70,L"gbx.nav.net.PathPeriod",&DAT_14c762034,
                L"Once a new path is sent to clients, it will not send another path for this long (in seconds)"
               );
  atexit(FUN_1437fbf0f);
  local_58 = 0;
  FUN_1415c789c(&DAT_14cb1cc80,L"gbx.nav.net.TransformPeriod",&DAT_14c762038,
                L"Once a new transform is sent to clients, it will not send another transform for this long (in seconds)"
               );
  atexit(FUN_1437fbf54);
  local_58 = 0;
  FUN_1415c789c(&DAT_14cb1cc90,L"gbx.nav.net.DesiredYawPeriod",&DAT_14c76203c,
                L"Once a new desired rotation is sent to clients, it will not send another desired rotation for this long (in seconds)"
               );
  atexit(FUN_1437fbf99);
  local_58 = 0;
  FUN_1415c789c(&DAT_14cb1cca0,L"gbx.nav.net.AckPeriod",&DAT_14c762040,
                L"How long to wait without receiving an ack to resend some data.");
  atexit(FUN_1437fbfde);
  FUN_1446f470e(&local_48,&DAT_14aba01f6,1);
  FUN_14598ad7a(&DAT_14cb1ccb0,&local_48,0);
  _DAT_14cb1ccd0 = &LAB_1437fd78c;
  _DAT_14cb1ccd8 = 0x45006000;
  DAT_14cb1ccdc = 1;
  DAT_14cb1ccc8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb1ccc8;
  atexit((_func_5014 *)&LAB_1437fd791);
  DAT_14cb1cce8 = 0;
  _DAT_14cb1ccf0 = 0;
  atexit(FUN_1437fd7c5);
  local_48 = "SMInstance";
  uStack_40 = 10;
  uStack_3c = uStack_3c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb1ccf8 = (ulonglong)uVar2;
  local_48 = (char *)((ulonglong)local_48 & 0xffffffffffffff00);
  local_58 = 0;
  FUN_140bd5914(&DAT_14cb1cd00,L"gbx.nav.AllowComplexGeometryForNavMesh",&local_48,
                L"If non-zero, allow meshes with ECollisionTraceFlag::CTF_UseComplexAsSimple set to be considered for nav mesh generation."
               );
  atexit(FUN_1437fe4f1);
  FUN_1446f470e(&DAT_14cb1cd18,L"NavGatherBodies",1);
  FUN_140056680(&DAT_14cb1cd20,&DAT_14a9b0260);
  atexit((_func_5014 *)&LAB_1437fe811);
  _DAT_14cb1cd48 = 0;
  LOCK();
  DAT_14cb1cd40 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_1437feeeb);
  _DAT_14cb1cd38 = 0;
  LOCK();
  DAT_14cb1cd30 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_1437feef0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143808c54 FUN_143808c54 body=19 status=ok
// SIG undefined FUN_143808c54(void)

void FUN_143808c54(void)

{
  FUN_147e4bf40();
  FUN_1464225ee();
  return;
}



// FUNCTION 143808c68 FUN_143808c68 body=9206 status=ok
// SIG undefined FUN_143808c68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143808c68(longlong param_1)

{
  float *pfVar1;
  void *pvVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  undefined1 uVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 uVar22;
  longlong lVar23;
  undefined8 *puVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong *plVar28;
  int iVar29;
  double *pdVar30;
  undefined8 *puVar31;
  ulonglong uVar32;
  double *pdVar33;
  longlong *plVar34;
  undefined8 *puVar35;
  longlong *plVar36;
  double *pdVar37;
  bool bVar38;
  float fVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  float fVar43;
  float fVar44;
  double dVar45;
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auStack_428 [32];
  longlong *local_408;
  longlong local_3f8;
  double *local_3f0;
  longlong *local_3e8;
  longlong *local_3e0;
  longlong local_3d8;
  longlong *local_3d0;
  longlong *local_3c8;
  double *local_3c0;
  longlong *local_3b8;
  undefined8 *local_3b0;
  longlong local_3a8;
  undefined8 uStack_3a0;
  double local_398 [4];
  double local_378;
  double dStack_370;
  double local_368;
  double local_358;
  double dStack_350;
  double local_348;
  undefined8 local_318;
  undefined8 *puStack_310;
  double local_308;
  double local_300;
  undefined8 *puStack_2f8;
  double local_2f0;
  char local_2e8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined1 local_2a8;
  undefined7 uStack_2a7;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  undefined4 local_270;
  int iStack_26c;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  undefined8 local_240;
  double local_238;
  double local_230;
  longlong local_228;
  ulonglong uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  float fStack_1f0;
  float fStack_1ec;
  undefined4 local_1e8;
  undefined8 local_1e4;
  float local_1d8;
  float local_1d4;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  ulonglong local_1b8;
  undefined1 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  double dStack_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 *local_158;
  double dStack_150;
  char local_148;
  undefined7 uStack_147;
  undefined8 uStack_140;
  undefined8 uStack_138;
  int iStack_130;
  int iStack_12c;
  int local_128;
  undefined1 local_124;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_428;
  uStack_138 = (double)CONCAT44(uStack_138._4_4_,(int)uStack_138);
  uStack_140 = (double)CONCAT44(uStack_140._4_4_,(undefined4)uStack_140);
  if ((((((*(int *)(param_1 + 0xe4) == 0) ||
         (uVar15 = *(uint *)(param_1 + 0xe0),
         uStack_138 = (double)CONCAT44(uStack_138._4_4_,(int)uStack_138),
         uStack_140 = (double)CONCAT44(uStack_140._4_4_,(undefined4)uStack_140), (int)uVar15 < 0))
        || (uStack_138 = (double)CONCAT44(uStack_138._4_4_,(int)uStack_138),
           uStack_140 = (double)CONCAT44(uStack_140._4_4_,(undefined4)uStack_140),
           DAT_14c9647dc <= (int)uVar15)) ||
       ((plVar28 = (longlong *)
                   ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
        uStack_138 = (double)CONCAT44(uStack_138._4_4_,(int)uStack_138),
        uStack_140 = (double)CONCAT44(uStack_140._4_4_,(undefined4)uStack_140),
        plVar28 == (longlong *)0x0 ||
        (uStack_138 = (double)CONCAT44(uStack_138._4_4_,(int)uStack_138),
        uStack_140 = (double)CONCAT44(uStack_140._4_4_,(undefined4)uStack_140),
        (int)plVar28[2] != *(int *)(param_1 + 0xe4))))) ||
      (uStack_138 = (double)CONCAT44(uStack_138._4_4_,(int)uStack_138),
      uStack_140 = (double)CONCAT44(uStack_140._4_4_,(undefined4)uStack_140),
      (*(uint *)(plVar28 + 1) & 0x10200000) != 0)) ||
     (plVar28 = (longlong *)*plVar28,
     uStack_138 = (double)CONCAT44(uStack_138._4_4_,(int)uStack_138),
     uStack_140 = (double)CONCAT44(uStack_140._4_4_,(undefined4)uStack_140),
     plVar28 == (longlong *)0x0)) goto LAB_143808d43;
  local_1b8 = local_1b8 & 0xffffffffffffff00;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0.0;
  uStack_210 = 0.0;
  local_208 = 0.0;
  uStack_200 = 0.0;
  local_1f8 = 0;
  fStack_1f0 = 0.0;
  fStack_1ec = 0.0;
  local_1e8 = 0;
  local_3f8 = param_1;
  FUN_147e46a0c(plVar28 + 0xca,&local_228);
  (**(code **)(*plVar28 + 0x540))(plVar28);
  if ((char)local_1b8 == '\x01') {
    local_1b8 = local_1b8 & 0xffffffffffffff00;
  }
  FUN_140937fd9(local_208,(ulonglong)uStack_200 & 0xffffffff);
  if (local_208 != 0.0) {
    FUN_1400020a8();
  }
  FUN_140298e51(local_218,(ulonglong)uStack_210 & 0xffffffff);
  if (local_218 != 0.0) {
    FUN_1400020a8();
  }
  FUN_140938008(local_228,uStack_220 & 0xffffffff);
  if (local_228 != 0) {
    FUN_1400020a8();
  }
  plVar36 = (longlong *)plVar28[0x15];
  if (plVar36 != (longlong *)0x0) {
    lVar20 = FUN_140cee6b8();
    lVar21 = local_3f8;
    if ((*(int *)(lVar20 + 0x38) <= *(int *)(plVar36[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar36[2] + 0x30) + (longlong)*(int *)(lVar20 + 0x38) * 8) ==
        lVar20 + 0x30)) {
      *(char *)(local_3f8 + 0x150) = (char)plVar36[0x72];
      uVar13 = (**(code **)(*plVar36 + 0x638))(plVar36);
      *(undefined1 *)(lVar21 + 0x152) = uVar13;
    }
  }
  lVar21 = local_3f8;
  if (*(char *)(local_3f8 + 0x150) == '\x01') {
    FUN_147e40f79(plVar28);
  }
  lVar20 = FUN_14477bcf0();
  uVar52 = uRam000000014c6dae6c;
  uVar51 = uRam000000014c6dae68;
  uVar50 = uRam000000014c6dae64;
  uVar19 = _DAT_14c6dae60;
  lVar20 = *(longlong *)(lVar20 + 0x98);
  local_218 = (double)CONCAT44(uRam000000014c6dae64,_DAT_14c6dae60);
  uStack_210 = (double)CONCAT44(uRam000000014c6dae6c,uRam000000014c6dae68);
  local_208 = 3.433228345528505e-06;
  fStack_1f0 = 0.5;
  fStack_1ec = 0.5;
  local_1e8 = CONCAT31(local_1e8._1_3_,1);
  local_1e4 = 0x7f7fffee3f000000;
  local_1d0 = 0;
  local_1c8 = -0x8000000000000000;
  local_1c0 = 0;
  local_1b8 = 0x8000000000000000;
  local_1a8 = 0;
  local_1a0 = 0x8000000000000000;
  local_198 = 0;
  local_190 = 0x8000000000000000;
  dStack_188 = -NAN;
  local_228 = CONCAT44(local_228._4_4_,*(float *)(lVar20 + 0x30) * 0.01);
  uStack_200 = (double)CONCAT44(*(float *)(lVar20 + 0x38) * 0.01,*(float *)(lVar20 + 0x34) * 0.01);
  local_1f8._0_7_ = CONCAT16(*(undefined1 *)(lVar20 + 0x70),0x10100000001);
  local_1b0 = *(undefined1 *)(lVar20 + 0x7d);
  local_1d8 = *(float *)(lVar20 + 0x74) * 0.01 * 0.01;
  local_1d4 = *(float *)(lVar20 + 0x78) * 0.01;
  local_3d8 = lVar20;
  if (*(char *)(lVar20 + 0x7c) == '\x01') {
    local_1d8 = 3.40282e+38;
    FUN_1406a930a(plVar28,&local_178);
    FUN_147e3ee12(&local_178,local_398);
    FUN_1406a930a(plVar28,&local_178);
    FUN_147e3ed9a(&local_178,&local_2d8);
    dVar40 = (double)(*(float *)(lVar20 + 0x78) + *(float *)(lVar20 + 0x78));
    dStack_2b0 = dStack_2b0 + dVar40;
    local_2b8 = local_2b8 + dVar40;
    dStack_2c0 = dStack_2c0 + dVar40;
    local_2c8 = local_2c8 - dVar40;
    uStack_2d0 = uStack_2d0 - dVar40;
    local_2d8 = local_2d8 - dVar40;
    local_2a8 = 1;
    lVar21 = plVar28[0x16];
    if (lVar21 == 0) {
      lVar21 = FUN_1448abda6(plVar28);
    }
    FUN_147e40743(&local_178,lVar21,&local_2d8,1);
    if ((longlong)(int)uStack_170 != 0) {
      pdVar30 = local_178 + (longlong)(int)uStack_170 * 3;
      pdVar33 = local_178;
      uVar15 = (uint)local_1c8;
      do {
        dVar4 = *pdVar33 * local_358;
        dVar5 = pdVar33[1] * dStack_350;
        dVar41 = pdVar33[2] * local_348;
        dVar40 = dVar5 * local_398[0] - dVar4 * local_398[1];
        dVar3 = dVar41 * local_398[1] - dVar5 * local_398[2];
        dVar45 = dVar4 * local_398[2] - dVar41 * local_398[0];
        dVar3 = dVar3 + dVar3;
        dVar45 = dVar45 + dVar45;
        dVar40 = dVar40 + dVar40;
        dVar41 = dVar40 * local_398[3] + dVar41 + (dVar45 * local_398[0] - dVar3 * local_398[1]) +
                 local_368;
        uVar18 = uVar15 + 1;
        if ((int)(local_1c8._4_4_ & 0x7fffffff) <= (int)uVar15) {
          uVar12 = local_1c8._4_4_ * 2;
          if (local_1c8._4_4_ * 2 <= uVar18) {
            uVar12 = uVar18;
          }
          uVar26 = (ulonglong)uVar12;
          if ((0x7ffffffe < uVar12) && (uVar26 = 0x7ffffffe, uVar15 == 0x7ffffffe)) {
            FUN_144bfc170(0x4648a379,
                          "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                          ,0x90,"Invalid requestedCapacity");
          }
          local_278 = (double)(uVar26 * 0x10);
          lVar21 = (*DAT_14c787670)(DAT_14c6e47a8,&local_278,DAT_14c6e47ac);
          FUN_144b3d470(lVar21,local_1d0,(longlong)(int)(uint)local_1c8 << 4);
          dVar47 = (double)(uVar26 * 0x10 + 0x10);
          uVar32 = uVar26;
          if ((ulonglong)dVar47 <= (ulonglong)local_278) {
            uVar32 = uVar26 + 1;
            local_278 = (double)((longlong)local_278 - 0x10);
            if ((ulonglong)dVar47 <= (ulonglong)local_278) {
              uVar32 = uVar32 + ((longlong)local_278 + uVar26 * -0x10 >> 4);
            }
          }
          if (-1 < local_1c8) {
            (*DAT_14c787678)(CONCAT71((int7)((ulonglong)dVar47 >> 8),DAT_14c6e47a8),local_1d0,0);
          }
          local_1c8 = CONCAT44((int)uVar32,(uint)local_1c8);
          uVar15 = (uint)local_1c8;
          local_1d0 = lVar21;
        }
        pfVar1 = (float *)(local_1d0 + (longlong)(int)uVar15 * 0x10);
        *pfVar1 = (float)((dVar40 * local_398[1] - dVar45 * local_398[2]) +
                          local_398[3] * dVar3 + dVar4 + local_378) * 0.01;
        pfVar1[1] = (float)((local_398[2] * dVar3 - local_398[0] * dVar40) +
                            local_398[3] * dVar45 + dVar5 + dStack_370) * 0.01;
        pfVar1[2] = (float)dVar41 * 0.01;
        pfVar1[3] = (float)dVar41 * 0.01;
        local_1c8 = CONCAT44(local_1c8._4_4_,uVar18);
        pdVar33 = pdVar33 + 3;
        lVar20 = local_3d8;
        uVar19 = _DAT_14c6dae60;
        uVar50 = uRam000000014c6dae64;
        uVar51 = uRam000000014c6dae68;
        uVar52 = uRam000000014c6dae6c;
        uVar15 = uVar18;
      } while (pdVar33 != pdVar30);
    }
    lVar21 = local_3f8;
    if (local_178 != (double *)0x0) {
      FUN_1400020a8(local_178);
      lVar21 = local_3f8;
    }
  }
  fStack_1ec = *(float *)(lVar20 + 0x84) * 0.01;
  fStack_1f0 = *(float *)(lVar20 + 0x80) * 0.01;
  local_1e4 = CONCAT44(*(float *)(lVar20 + 0x8c) * 0.01,*(float *)(lVar20 + 0x88) * 0.01);
  FUN_1406a930a(plVar28);
  local_3a8 = 0;
  uStack_3a0 = 0;
  lVar23 = plVar28[200];
  if ((longlong)(int)lVar23 == 0) {
    plVar36 = (longlong *)(lVar21 + 0x48);
    local_3e0 = (longlong *)(lVar21 + 0x50);
    iVar29 = *(int *)(lVar21 + 0x50);
    uVar15 = 0;
  }
  else {
    lVar21 = plVar28[199];
    lVar20 = 0;
    do {
      local_178 = *(double **)(lVar21 + lVar20);
      if (local_178 != (double *)0x0) {
        FUN_147e4c008(&local_3a8,&local_178);
      }
      lVar20 = lVar20 + 8;
    } while ((longlong)(int)lVar23 * 8 != lVar20);
    uVar15 = (uint)uStack_3a0;
    plVar36 = (longlong *)(local_3f8 + 0x48);
    local_3e0 = (longlong *)(local_3f8 + 0x50);
    iVar29 = *(int *)(local_3f8 + 0x50);
    *(uint *)(local_3f8 + 0x50) = iVar29 + (uint)uStack_3a0;
    lVar21 = local_3f8;
    lVar20 = local_3d8;
    if ((uint)(*(int *)(local_3f8 + 0x54) - iVar29) < (uint)uStack_3a0) {
      FUN_147e4c0fa(plVar36);
      lVar21 = local_3f8;
      lVar20 = local_3d8;
    }
  }
  memset((void *)((longlong)iVar29 * 0x1e0 + *(longlong *)(lVar21 + 0x48)),0,
         (longlong)(int)uVar15 * 0x1e0);
  uVar22 = FUN_14477bcf0();
  FUN_147e46c68(uVar22,&local_178);
  if ((undefined8 *)(lVar21 + 0xa8) == &local_178) {
    if (local_178 != (double *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar21 + 0xa8) != 0) {
      FUN_1400020a8();
    }
    *(double **)(local_3f8 + 0xa8) = local_178;
    local_178 = (double *)0x0;
    *(int *)(local_3f8 + 0xb0) = (int)uStack_170;
    *(undefined4 *)(local_3f8 + 0xb4) = uStack_170._4_4_;
  }
  FUN_1437fe20e(&local_178,plVar28);
  lVar21 = local_3f8;
  local_3b0 = (undefined8 *)(local_3f8 + 0x38);
  if (local_3b0 == &local_178) {
    if (local_178 != (double *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(local_3f8 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(double **)(lVar21 + 0x38) = local_178;
    local_178 = (double *)0x0;
    *(int *)(lVar21 + 0x40) = (int)uStack_170;
    *(undefined4 *)(lVar21 + 0x44) = uStack_170._4_4_;
  }
  *(int *)(lVar21 + 0x90) = (int)*(float *)(lVar20 + 0x44);
  if (*(int *)(lVar21 + 0x50) < 1) {
    fVar53 = 100.0;
  }
  else {
    local_3d0 = (longlong *)(lVar21 + 0x18);
    fVar53 = 0.0;
    plVar34 = (longlong *)0x0;
    local_3c8 = plVar28;
    local_3b8 = plVar36;
    do {
      pdVar37 = (double *)((longlong)plVar34 * 0x1e0 + *plVar36);
      pdVar30 = local_398;
      pdVar33 = pdVar37;
      for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
        *pdVar33 = *pdVar30;
        pdVar30 = pdVar30 + 1;
        pdVar33 = pdVar33 + 1;
      }
      dVar40 = *(double *)(local_3a8 + (longlong)plVar34 * 8);
      local_3e8 = plVar34;
      if ((dVar40 != 0.0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(dVar40);
      }
      pdVar37[0x16] = dVar40;
      uVar15 = FUN_1437fdf47(*(undefined8 *)(local_3a8 + (longlong)plVar34 * 8));
      lVar23 = local_3f8;
      *(uint *)(local_3f8 + 0x58) = *(uint *)(local_3f8 + 0x58) | uVar15;
      fVar39 = *(float *)(*(longlong *)(local_3a8 + (longlong)plVar34 * 8) + 0x30);
      fVar43 = *(float *)(lVar20 + 0x3c);
      uVar13 = *(undefined1 *)(local_3f8 + 0x150);
      *(float *)((longlong)pdVar37 + 0xcc) = (fVar39 + fVar39) * 0.01;
      *(float *)(pdVar37 + 0x19) = fVar43 * 0.017453292;
      pdVar37[0x1a] = (double)local_3d0;
      *(undefined1 *)(pdVar37 + 0x1b) = uVar13;
      *(undefined4 *)(pdVar37 + 0x1c) = (undefined4)local_228;
      pdVar37[0x1e] = local_218;
      pdVar37[0x1f] = uStack_210;
      *(ulonglong *)((longlong)pdVar37 + 0x11c) = CONCAT44(local_1e8,fStack_1ec);
      *(undefined8 *)((longlong)pdVar37 + 0x124) = local_1e4;
      *(undefined4 *)(pdVar37 + 0x22) = (undefined4)local_1f8;
      *(undefined4 *)((longlong)pdVar37 + 0x114) = local_1f8._4_4_;
      *(float *)(pdVar37 + 0x23) = fStack_1f0;
      *(float *)((longlong)pdVar37 + 0x11c) = fStack_1ec;
      pdVar37[0x20] = local_208;
      pdVar37[0x21] = uStack_200;
      FUN_147e4a462(pdVar37 + 0x26,&local_1d8);
      local_3f0 = pdVar37 + 0x2c;
      FUN_147e4a4bc(local_3f0,&local_1a8);
      pdVar37[0x30] = dStack_188;
      lVar21 = *(longlong *)(local_3a8 + (longlong)plVar34 * 8);
      fVar39 = *(float *)(lVar21 + 0x38) * 0.01;
      *(float *)(pdVar37 + 0x20) = fVar39;
      *(float *)((longlong)pdVar37 + 0x104) =
           *(float *)(lVar21 + 0x30 + (ulonglong)*(byte *)(lVar21 + 0x3c) * 4) * 0.01;
      if (fVar39 <= *(float *)((longlong)pdVar37 + 0x10c)) {
        fVar39 = *(float *)((longlong)pdVar37 + 0x10c);
      }
      *(float *)(pdVar37 + 0x20) = fVar39;
      cVar14 = *(char *)(lVar21 + 0x45);
      *(char *)((longlong)pdVar37 + 0x114) = cVar14;
      if ((char)plVar28[0xc9] == '\x01') {
        lVar21 = *(longlong *)(local_3a8 + (longlong)plVar34 * 8);
        lVar23 = plVar28[0x16];
        if (lVar23 == 0) {
          lVar23 = FUN_1448abda6(local_3c8);
        }
        iVar29 = *(int *)(lVar20 + 0x98);
        if ((longlong)iVar29 != 0) {
          lVar20 = *(longlong *)(local_3d8 + 0x90);
          local_3c0 = pdVar37 + 0x37;
          lVar25 = 0;
          do {
            plVar28 = *(longlong **)(lVar20 + lVar25);
            if ((plVar28 != (longlong *)0x0) && (plVar28[10] != 0)) {
              lVar27 = (ulonglong)(*(byte *)(lVar21 + 0x3c) & 1) * 4 + 0x30;
              if (*(char *)(lVar21 + 0x44) != '\0') {
                lVar27 = 0x40;
              }
              lVar27 = (**(code **)(*plVar28 + 0x2a0))(plVar28,*(undefined4 *)(lVar21 + lVar27));
              uVar15 = FUN_147e420a4(lVar23,plVar28[10]);
              uVar26 = (ulonglong)uVar15;
              if (0x1f < uVar15) {
                uVar26 = 0xffffffff;
              }
              *(ulonglong *)(lVar27 + 0x20) = uVar26;
              if (lVar27 != 0) {
                FUN_144b3d910(lVar27);
              }
              iVar16 = *(int *)(pdVar37 + 0x38);
              iVar17 = iVar16 + 1;
              if ((int)(*(uint *)((longlong)pdVar37 + 0x1c4) & 0x7fffffff) <= iVar16) {
                FUN_147e4a97a(local_3c0,iVar17);
                iVar16 = *(int *)(pdVar37 + 0x38);
              }
              *(longlong *)((longlong)pdVar37[0x37] + (longlong)iVar16 * 8) = lVar27;
              *(int *)(pdVar37 + 0x38) = iVar17;
              FUN_144b3f230(lVar27);
            }
            lVar25 = lVar25 + 8;
          } while ((longlong)iVar29 * 8 != lVar25);
        }
        lVar20 = local_3d8;
        lVar23 = local_3f8;
        if (*(int *)(pdVar37 + 0x38) != 0) {
          local_178 = (double *)&DAT_00000030;
          puVar24 = (undefined8 *)(*DAT_14c787670)(0,&local_178,0);
          if (DAT_14c787680 != (code *)0x0) {
            (*DAT_14c787680)(puVar24,"hkaiTraversalAnalysisSettings");
          }
          puVar24[1] = 0xffffffff;
          puVar24[2] = 1;
          *puVar24 = &PTR_LAB_14aba2ae0;
          puVar24[3] = 0x40a000003dcccccd;
          puVar24[4] = 0x3e4ccccd40000000;
          *(undefined4 *)(puVar24 + 5) = 0x3f800000;
          *(float *)(puVar24 + 3) = *(float *)(lVar20 + 0xa0) * 0.01;
          *(float *)((longlong)puVar24 + 0x1c) = *(float *)(lVar20 + 0xa4) * 0.01;
          *(float *)(puVar24 + 5) = *(float *)(lVar20 + 0xa8) * 0.01;
          *(float *)(puVar24 + 4) = (*(float *)(lVar21 + 0x30) + *(float *)(lVar21 + 0x30)) * 0.01;
          lVar25 = (ulonglong)(*(byte *)(lVar21 + 0x3c) & 1) * 4 + 0x30;
          if (*(char *)(lVar21 + 0x44) != '\0') {
            lVar25 = 0x40;
          }
          *(float *)((longlong)puVar24 + 0x24) = *(float *)(lVar21 + lVar25) * 0.01;
          puVar31 = (undefined8 *)pdVar37[0x36];
          if (puVar31 != puVar24) {
            if (puVar24 != (undefined8 *)0x0) {
              FUN_144b3d910(puVar24);
              puVar31 = (undefined8 *)pdVar37[0x36];
            }
            pdVar37[0x36] = (double)puVar24;
            if (puVar31 != (undefined8 *)0x0) {
              FUN_144b3f230();
            }
          }
          if (puVar24 != (undefined8 *)0x0) {
            FUN_144b3f230(puVar24);
          }
        }
        *(byte *)(pdVar37 + 0x30) = *(byte *)(pdVar37 + 0x30) | 2;
        cVar14 = *(char *)((longlong)pdVar37 + 0x114);
        plVar34 = local_3e8;
        plVar28 = local_3c8;
        plVar36 = local_3b8;
      }
      if (cVar14 != '\0') {
        fVar39 = *(float *)(pdVar37 + 0x20) * 100.0;
        *(float *)(pdVar37 + 0x32) = fVar39;
        *(undefined1 *)((longlong)pdVar37 + 0x194) = 1;
        if (fVar53 < fVar39) {
          fVar53 = fVar39;
        }
      }
      if (*(char *)(lVar23 + 0x150) == '\0') {
        if (*(char *)((longlong)pdVar37 + 0x194) == '\x01') {
          dVar40 = (double)*(float *)(pdVar37 + 0x32);
          *pdVar37 = *pdVar37 + dVar40;
          pdVar37[1] = pdVar37[1] + dVar40;
          pdVar37[2] = dVar40 + pdVar37[2];
        }
      }
      else {
        fVar39 = (float)pdVar37[2];
        fVar43 = (float)pdVar37[1];
        fVar44 = (float)*pdVar37;
        local_2d8 = (double)CONCAT44(uVar50,uVar19);
        uStack_2d0 = (double)CONCAT44(uVar52,uVar51);
        local_318 = (double)CONCAT44(fVar43,fVar44);
        local_278 = (double)(CONCAT44(fVar43,fVar44) ^ 0x8000000080000000);
        local_178 = (double *)
                    CONCAT44((float)((ulonglong)local_278 >> 0x20) * 0.01,SUB84(local_278,0) * 0.01)
        ;
        uStack_170 = (undefined8 *)CONCAT44(-fVar39 * 0.01,-fVar39 * 0.01);
        local_168 = (double *)CONCAT44(fVar43 * 0.01,fVar44 * 0.01);
        uStack_160 = (longlong *)CONCAT44(fVar39 * 0.01,fVar39 * 0.01);
        FUN_144d130b0(&local_278,&local_178,&local_2d8);
        FUN_147e46cd8(local_3f0,&local_278);
        local_270 = 0;
        if ((-1 < iStack_26c) && (local_278 != 0.0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
        }
      }
      plVar34 = (longlong *)((longlong)plVar34 + 1);
    } while ((longlong)plVar34 < (longlong)(int)*local_3e0);
    fVar53 = fVar53 + 100.0;
  }
  pdVar30 = local_398;
  pdVar33 = (double *)&local_178;
  for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
    *pdVar33 = *pdVar30;
    pdVar30 = pdVar30 + 1;
    pdVar33 = pdVar33 + 1;
  }
  dVar40 = (double)fVar53;
  local_178 = (double *)((double)local_178 + dVar40);
  uStack_170 = (undefined8 *)((double)uStack_170 + dVar40);
  local_168 = (double *)(dVar40 + (double)local_168);
  plVar36 = plVar28;
  do {
    plVar34 = plVar36;
    plVar36 = (longlong *)plVar34[0x24];
  } while (plVar36 != (longlong *)0x0);
  lVar21 = local_3f8 + 0xb8;
  FUN_147e3ee12(&local_178,&local_2d8);
  FUN_147e3ed9a(&local_178,&local_278);
  lVar20 = plVar28[0x16];
  if (lVar20 == 0) {
    lVar20 = FUN_1448abda6(plVar28);
  }
  local_408 = plVar34;
  FUN_147e41440(lVar21,lVar20,&local_278,&local_2d8);
  if (*(int *)(local_3f8 + 0xe4) == 0) {
LAB_14380b058:
    lVar21 = 0;
  }
  else {
    uVar15 = *(uint *)(local_3f8 + 0xe0);
    lVar21 = 0;
    if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
      plVar28 = (longlong *)
                ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
      if ((plVar28 == (longlong *)0x0) ||
         (((int)plVar28[2] != *(int *)(local_3f8 + 0xe4) ||
          ((*(uint *)(plVar28 + 1) & 0x10200000) != 0)))) goto LAB_14380b058;
      lVar21 = *plVar28;
    }
  }
  dVar40 = *(double *)(lVar21 + 0xb0);
  if (dVar40 == 0.0) {
    dVar40 = (double)FUN_1448abda6(lVar21);
  }
  FUN_1406a930a(lVar21,&local_178);
  FUN_147e3ed9a(&local_178,&local_278);
  FUN_1406a930a(lVar21,&local_178);
  FUN_147e3ee12(&local_178,&local_2d8);
  local_3e8 = (longlong *)dVar40;
  local_178 = (double *)dVar40;
  FUN_147e3dcc0(&local_318,&DAT_14cb1cf90,&local_178);
  dVar8 = local_288;
  dVar7 = dStack_290;
  dVar6 = local_298;
  dVar47 = dStack_2b0;
  dVar5 = local_2b8;
  dVar4 = dStack_2c0;
  dVar45 = local_2c8;
  dVar3 = uStack_2d0;
  dVar41 = local_2d8;
  dVar40 = local_2f0;
  puVar24 = puStack_2f8;
  local_240 = puStack_310;
  local_238 = local_308;
  LOCK();
  *(int *)((longlong)local_308 + 8) = *(int *)((longlong)local_308 + 8) + 1;
  UNLOCK();
  local_230 = local_300;
  LOCK();
  *(int *)((longlong)local_2f0 + 8) = *(int *)((longlong)local_2f0 + 8) + 1;
  UNLOCK();
  if (puStack_310 != puStack_2f8) {
    pdVar30 = (double *)(local_3f8 + 0x60);
    dVar9 = (double)CONCAT71(uStack_2a7,local_2a8);
    do {
      puVar31 = local_240;
      lVar21 = local_240[2];
      FUN_14380b060(lVar21,&local_178);
      if ((((local_148 != '\0') && (local_278 <= (double)uStack_160)) &&
          ((double)local_178 <= local_260)) &&
         ((((double)CONCAT44(iStack_26c,local_270) <= (double)local_158 &&
           ((double)uStack_170 <= local_258)) &&
          ((local_268 <= dStack_150 &&
           (((double)local_168 <= local_250 && (*(byte *)(lVar21 + 0x681) < 2)))))))) {
        local_3f0 = pdVar30;
        lVar20 = FUN_140612f46(lVar21 + 0x6b8);
        if (lVar20 != 0) {
          FUN_140612f46(lVar21 + 0x6b8);
        }
        uStack_160 = (longlong *)0x0;
        local_158 = (undefined8 *)0x0;
        local_178 = *(double **)(lVar21 + 0x6b8);
        dStack_150 = (double)((ulonglong)dStack_150 & 0xffffffff00000000);
        local_148 = 0;
        uStack_147 = 0;
        uStack_140._0_4_ = 0;
        uStack_140._4_4_ = 0;
        uStack_138._0_4_ = 0;
        uStack_138._4_4_ = 0;
        uStack_170 = *(undefined8 **)(lVar21 + 0x6c0);
        local_168 = *(double **)(lVar21 + 0x6c8);
        if (&uStack_160 != (undefined8 *)(lVar21 + 0x6d0)) {
          uVar15 = *(uint *)(lVar21 + 0x6d8);
          pvVar2 = *(void **)(lVar21 + 0x6d0);
          local_158 = (undefined8 *)(ulonglong)uVar15;
          if ((longlong)(int)uVar15 != 0) {
            FUN_1446dd670(&uStack_160,uVar15,0);
            memcpy(uStack_160,pvVar2,(longlong)(int)uVar15 * 2);
          }
        }
        dStack_150 = (double)CONCAT44(dStack_150._4_4_,*(int *)(lVar21 + 0x6e0));
        if (*(char *)(lVar21 + 0x684) == '\x01') {
          if ((*(longlong *)(lVar21 + 0x720) == 0) ||
             (lVar20 = *(longlong *)(*(longlong *)(lVar21 + 0x720) + 0x3a8), lVar20 == 0)) {
            pdVar30 = (double *)&DAT_14cb1ce10;
            uStack_138 = DAT_14cb1ce20;
          }
          else {
            uStack_138 = *(double *)(lVar20 + 0x270);
            pdVar30 = (double *)(lVar20 + 0x260);
          }
        }
        else {
          uStack_138 = *(double *)(lVar21 + 0x270);
          pdVar30 = (double *)(lVar21 + 0x260);
        }
        dVar10 = *pdVar30;
        uStack_140 = pdVar30[1];
        local_148 = SUB81(dVar10,0);
        uStack_147 = (undefined7)((ulonglong)dVar10 >> 8);
        if ((uStack_170 != (undefined8 *)0x0) && (*(int *)(lVar21 + 0x6e0) != 0)) {
          uStack_138 = uStack_138 * dVar8;
          dVar10 = dVar10 * dVar6;
          uStack_140 = uStack_140 * dVar7;
          dVar11 = uStack_140 * dVar41 - dVar3 * dVar10;
          dVar42 = uStack_138 * dVar3 - dVar45 * uStack_140;
          dVar48 = dVar10 * dVar45 - dVar41 * uStack_138;
          dVar42 = dVar42 + dVar42;
          dVar48 = dVar48 + dVar48;
          dVar11 = dVar11 + dVar11;
          dVar10 = (dVar11 * dVar3 - dVar48 * dVar45) + dVar4 * dVar42 + dVar10 + dVar5;
          uStack_140 = (dVar45 * dVar42 - dVar41 * dVar11) + dVar4 * dVar48 + uStack_140 + dVar47;
          uStack_138 = dVar11 * dVar4 + uStack_138 + (dVar48 * dVar41 - dVar42 * dVar3) + dVar9;
          local_148 = SUB81(dVar10,0);
          uStack_147 = (undefined7)((ulonglong)dVar10 >> 8);
          iVar29 = *(int *)(local_3f8 + 0x68);
          *(uint *)(local_3f8 + 0x68) = iVar29 + 1U;
          if (*(uint *)(local_3f8 + 0x6c) < iVar29 + 1U) {
            FUN_147e4c18e(local_3f0,iVar29);
          }
          dVar10 = *local_3f0;
          pdVar30 = (double *)((longlong)dVar10 + (longlong)iVar29 * 0x48);
          *pdVar30 = (double)local_178;
          pdVar30[1] = (double)uStack_170;
          pdVar30[2] = (double)local_168;
          pdVar30[3] = 0.0;
          lVar21 = (longlong)(int)local_158;
          *(int *)(pdVar30 + 4) = (int)local_158;
          if (lVar21 == 0) {
            *(undefined4 *)((longlong)pdVar30 + 0x24) = 0;
          }
          else {
            puVar31 = (undefined8 *)((longlong)dVar10 + (longlong)iVar29 * 0x48 + 0x18);
            local_3e0 = uStack_160;
            FUN_1446dd670(puVar31,(ulonglong)local_158 & 0xffffffff,0);
            memcpy((void *)*puVar31,local_3e0,lVar21 * 2);
          }
          *(undefined4 *)(pdVar30 + 5) = dStack_150._0_4_;
          pdVar30[6] = (double)CONCAT71(uStack_147,local_148);
          pdVar30[7] = uStack_140;
          pdVar30[8] = uStack_138;
        }
        puVar31 = local_240;
        pdVar30 = local_3f0;
        if (uStack_160 != (longlong *)0x0) {
          FUN_1400020a8();
          puVar31 = local_240;
          pdVar30 = local_3f0;
        }
      }
      local_240 = (undefined8 *)FUN_147e3dd30(*puVar31);
      FUN_147e3ddb2(&local_240);
    } while (local_240 != puVar24);
  }
  LOCK();
  *(int *)((longlong)dVar40 + 8) = *(int *)((longlong)dVar40 + 8) + -1;
  UNLOCK();
  LOCK();
  *(int *)((longlong)local_238 + 8) = *(int *)((longlong)local_238 + 8) + -1;
  UNLOCK();
  LOCK();
  *(int *)((longlong)local_2f0 + 8) = *(int *)((longlong)local_2f0 + 8) + -1;
  UNLOCK();
  LOCK();
  *(int *)((longlong)local_308 + 8) = *(int *)((longlong)local_308 + 8) + -1;
  UNLOCK();
  local_178 = (double *)local_3e8;
  FUN_147e4c222(&local_318);
  puVar24 = puStack_2f8;
  local_240 = puStack_310;
  local_238 = local_308;
  LOCK();
  *(int *)((longlong)local_308 + 8) = *(int *)((longlong)local_308 + 8) + 1;
  UNLOCK();
  local_230 = local_300;
  local_3e0 = (longlong *)local_2f0;
  LOCK();
  *(int *)((longlong)local_2f0 + 8) = *(int *)((longlong)local_2f0 + 8) + 1;
  UNLOCK();
  if (puStack_310 != puStack_2f8) {
    local_3f0 = (double *)(local_3f8 + 0x80);
    do {
      puVar31 = local_240;
      lVar21 = local_240[2];
      local_178 = (double *)0x0;
      uStack_170 = (undefined8 *)0x0;
      local_168 = (double *)0xffffffffffffffff;
      uStack_160 = (longlong *)CONCAT71(uStack_160._1_7_,3);
      uStack_138._0_4_ = 0;
      uStack_138._4_4_ = 0;
      iStack_130 = 0;
      local_148 = '\0';
      uStack_147 = 0;
      uStack_140._0_4_ = 0;
      uStack_140._4_4_ = 0;
      local_158 = (undefined8 *)0x0;
      dStack_150 = 0.0;
      cVar14 = FUN_147e421b0(lVar21,&local_178);
      if (cVar14 != '\0') {
        if ((longlong)(int)uStack_170 != 0) {
          lVar20 = (longlong)(int)uStack_170 * 0x60;
          dVar40 = (double)local_178;
          do {
            cVar14 = FUN_1438192b1(&local_278,dVar40);
            if (cVar14 != '\0') {
              local_158 = *(undefined8 **)(lVar21 + 0x6e0);
              dStack_150 = *(double *)(lVar21 + 0x6e8);
              local_148 = (char)*(undefined8 *)(lVar21 + 0x6f0);
              uStack_147 = (undefined7)((ulonglong)*(undefined8 *)(lVar21 + 0x6f0) >> 8);
              if (&uStack_140 != (undefined8 *)(lVar21 + 0x6f8)) {
                iVar29 = *(int *)(lVar21 + 0x700);
                pvVar2 = *(void **)(lVar21 + 0x6f8);
                uStack_138._0_4_ = iVar29;
                if (iVar29 == 0 && uStack_138._4_4_ == 0) {
                  uStack_138._4_4_ = 0;
                }
                else {
                  FUN_1446dd670(&uStack_140,iVar29);
                  if (iVar29 != 0) {
                    memcpy((void *)CONCAT44(uStack_140._4_4_,(undefined4)uStack_140),pvVar2,
                           (longlong)iVar29 * 2);
                  }
                }
              }
              iStack_130 = *(int *)(lVar21 + 0x708);
              if ((dStack_150 != 0.0) && (iStack_130 != 0)) {
                FUN_14380b146(&local_178,&local_2d8);
                iVar29 = *(int *)(local_3f8 + 0x88);
                *(uint *)(local_3f8 + 0x88) = iVar29 + 1U;
                if (*(uint *)(local_3f8 + 0x8c) < iVar29 + 1U) {
                  FUN_147e4c378(local_3f0,iVar29);
                }
                dVar40 = *local_3f0;
                lVar21 = (longlong)iVar29 * 0x50;
                *(undefined8 *)((longlong)dVar40 + lVar21) = 0;
                *(double **)((longlong)dVar40 + lVar21) = local_178;
                local_178 = (double *)0x0;
                *(int *)((longlong)dVar40 + 8 + lVar21) = (int)uStack_170;
                *(undefined4 *)((longlong)dVar40 + 0xc + lVar21) = uStack_170._4_4_;
                uStack_170 = (undefined8 *)0x0;
                *(undefined1 *)((longlong)dVar40 + 0x18 + lVar21) = (undefined1)uStack_160;
                *(double **)((longlong)dVar40 + 0x10 + lVar21) = local_168;
                *(undefined8 **)((longlong)dVar40 + 0x20 + lVar21) = local_158;
                pdVar30 = (double *)((longlong)dVar40 + 0x28 + lVar21);
                *pdVar30 = dStack_150;
                pdVar30[1] = (double)CONCAT71(uStack_147,local_148);
                *(undefined8 *)((longlong)dVar40 + 0x38 + lVar21) = 0;
                lVar20 = (longlong)(int)uStack_138;
                pvVar2 = (void *)CONCAT44(uStack_140._4_4_,(undefined4)uStack_140);
                *(int *)((longlong)dVar40 + 0x40 + lVar21) = (int)uStack_138;
                if (lVar20 == 0) {
                  *(undefined4 *)((longlong)dVar40 + lVar21 + 0x44) = 0;
                }
                else {
                  puVar35 = (undefined8 *)((longlong)dVar40 + lVar21 + 0x38);
                  FUN_1446dd670(puVar35,(int)uStack_138,0);
                  memcpy((void *)*puVar35,pvVar2,lVar20 * 2);
                }
                *(int *)((longlong)dVar40 + lVar21 + 0x48) = iStack_130;
              }
              break;
            }
            dVar40 = (double)((longlong)dVar40 + 0x60);
            lVar20 = lVar20 + -0x60;
          } while (lVar20 != 0);
        }
      }
      if (CONCAT44(uStack_140._4_4_,(undefined4)uStack_140) != 0) {
        FUN_1400020a8();
      }
      if (local_178 != (double *)0x0) {
        FUN_1400020a8();
      }
      local_240 = (undefined8 *)FUN_147e4c2ac(*puVar31);
      FUN_147e4c32e(&local_240);
    } while (local_240 != puVar24);
  }
  LOCK();
  *(int *)((longlong)local_3e0 + 8) = *(int *)((longlong)local_3e0 + 8) + -1;
  UNLOCK();
  LOCK();
  *(int *)((longlong)local_238 + 8) = *(int *)((longlong)local_238 + 8) + -1;
  UNLOCK();
  LOCK();
  *(int *)((longlong)local_2f0 + 8) = *(int *)((longlong)local_2f0 + 8) + -1;
  UNLOCK();
  LOCK();
  *(int *)((longlong)local_308 + 8) = *(int *)((longlong)local_308 + 8) + -1;
  UNLOCK();
  local_318 = (double)local_3e8;
  FUN_147e4c40c(&local_178);
  plVar28 = uStack_160;
  local_3f0 = local_168;
  LOCK();
  *(int *)(local_168 + 1) = *(int *)(local_168 + 1) + 1;
  UNLOCK();
  local_3e0 = (longlong *)dStack_150;
  LOCK();
  *(int *)((longlong)dStack_150 + 8) = *(int *)((longlong)dStack_150 + 8) + 1;
  UNLOCK();
  local_3e8 = local_158;
  if (uStack_170 != local_158) {
    local_3d0 = (longlong *)(local_3f8 + 0xd0);
    puVar24 = uStack_170;
    do {
      lVar21 = puVar24[2];
      FUN_147e41f60(lVar21,&local_318);
      dVar41 = local_2f0;
      dVar40 = local_308;
      plVar36 = local_3d0;
      if ((((local_2e8 != '\0') && (local_278 <= local_300)) && (local_318 <= local_260)) &&
         ((((double)CONCAT44(iStack_26c,local_270) <= (double)puStack_2f8 &&
           ((double)puStack_310 <= local_258)) &&
          ((local_268 <= local_2f0 && (local_308 <= local_250)))))) {
        iVar29 = *(int *)(local_3f8 + 0xd8);
        *(uint *)(local_3f8 + 0xd8) = iVar29 + 1U;
        if (*(uint *)(local_3f8 + 0xdc) < iVar29 + 1U) {
          FUN_147e4c556(local_3d0,iVar29);
          lVar20 = *plVar36;
        }
        else {
          lVar20 = *local_3d0;
        }
        pdVar30 = (double *)(lVar20 + (longlong)iVar29 * 0x48);
        pdVar30[6] = 0.0;
        pdVar30[7] = 0.0;
        pdVar30[4] = 0.0;
        pdVar30[5] = 0.0;
        pdVar30[2] = 0.0;
        pdVar30[3] = 0.0;
        *pdVar30 = 0.0;
        pdVar30[1] = 0.0;
        pdVar30[8] = 0.0;
        dVar47 = local_2c8 + local_2c8;
        dVar4 = local_2d8 + local_2d8;
        dVar5 = uStack_2d0 + uStack_2d0;
        auVar46._0_8_ = (dVar5 * dStack_2c0 + local_2d8 * dVar47) * local_288;
        auVar46._8_8_ = (dVar4 * dStack_2c0 + local_2d8 * dVar4) * dStack_280;
        dVar48 = (1.0 - (dVar47 * local_2c8 + dVar5 * uStack_2d0)) * local_298;
        dVar3 = (dVar47 * dStack_2c0 + dVar5 * local_2d8) * local_298;
        dVar45 = (dVar4 * dStack_2c0 + dVar47 * uStack_2d0) * dStack_290;
        dVar42 = (local_2d8 * dVar47 - dVar5 * dStack_2c0) * local_298;
        auVar54._0_8_ = dStack_290 * (dVar5 * local_2d8 - dVar47 * dStack_2c0);
        auVar54._8_8_ = local_288 * (dVar47 * uStack_2d0 - dVar4 * dStack_2c0);
        auVar46 = blendpd(auVar46,auVar54,2);
        auVar55._8_8_ = (1.0 - (dVar47 * local_2c8 + dVar4 * local_2d8)) * dStack_290;
        auVar55._0_8_ = dVar48;
        auVar55 = blendpd(auVar54,auVar55,2);
        dVar6 = (local_318 + local_300) * 0.5;
        dVar7 = ((double)puStack_310 + (double)puStack_2f8) * 0.5;
        dVar47 = (dVar41 + dVar40) * 0.5;
        dVar10 = (local_300 - local_318) * 0.5;
        dVar11 = ((double)puStack_2f8 - (double)puStack_310) * 0.5;
        dVar9 = (dVar41 - dVar40) * 0.5;
        dVar41 = dVar47 * auVar46._0_8_ + dVar7 * auVar55._0_8_ + dVar6 * dVar48 + local_2b8;
        dVar8 = dVar47 * auVar46._8_8_ + dVar7 * auVar55._8_8_ + dVar6 * dVar3 + dStack_2b0;
        dVar48 = ABS(dVar9 * auVar46._0_8_) + ABS(auVar55._0_8_ * dVar11) + ABS(dVar10 * dVar48);
        dVar49 = ABS(dVar9 * auVar46._8_8_) + ABS(auVar55._8_8_ * dVar11) + ABS(dVar10 * dVar3);
        dVar40 = (1.0 - (dVar4 * local_2d8 + dVar5 * uStack_2d0)) * local_288;
        dVar3 = ABS(dVar9 * dVar40) + ABS(dVar11 * dVar45) + ABS(dVar10 * dVar42);
        dVar40 = dVar40 * dVar47 + dVar45 * dVar7 + dVar42 * dVar6 +
                 (double)CONCAT71(uStack_2a7,local_2a8);
        *pdVar30 = dVar41 - dVar48;
        pdVar30[1] = dVar8 - dVar49;
        pdVar30[2] = dVar40 - dVar3;
        pdVar30[3] = dVar48 + dVar41;
        pdVar30[4] = dVar49 + dVar8;
        pdVar30[5] = dVar40 + dVar3;
        *(undefined1 *)(pdVar30 + 6) = 1;
        uVar19 = (undefined4)local_240;
        *(undefined4 *)((longlong)pdVar30 + 0x31) = uVar19;
        *(undefined4 *)((longlong)pdVar30 + 0x34) = local_240._3_4_;
        if ((longlong)*(int *)(lVar21 + 0x3a0) != 0) {
          plVar34 = *(longlong **)(lVar21 + 0x398);
          plVar36 = plVar34 + *(int *)(lVar21 + 0x3a0);
          do {
            lVar21 = *plVar34;
            lVar20 = FUN_14477bcf0();
            if ((longlong)*(int *)(lVar20 + 0x78) != 0) {
              lVar23 = (longlong)*(int *)(lVar20 + 0x78) << 3;
              lVar25 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar20 + 0x70) + lVar25 * 8) == lVar21) {
                  if ((int)lVar25 != -1) {
                    iVar29 = *(int *)(pdVar30 + 8);
                    *(uint *)(pdVar30 + 8) = iVar29 + 1U;
                    if (*(uint *)((longlong)pdVar30 + 0x44) < iVar29 + 1U) {
                      FUN_1446f48e2(pdVar30 + 7,iVar29);
                    }
                    *(int *)((longlong)pdVar30[7] + (longlong)iVar29 * 4) = (int)lVar25;
                  }
                  break;
                }
                lVar25 = lVar25 + 1;
                lVar23 = lVar23 + -8;
              } while (lVar23 != 0);
            }
            plVar34 = plVar34 + 1;
          } while (plVar34 != plVar36);
        }
      }
      puVar24 = (undefined8 *)FUN_147e4c496(*puVar24);
      while (puVar24 != (undefined8 *)0x0) {
        lVar21 = FUN_1447210f0(puVar24[2]);
        if (lVar21 == *plVar28) goto LAB_14380a66c;
        puVar24 = (undefined8 *)FUN_147e4c496(*puVar24);
      }
      puVar24 = (undefined8 *)0x0;
LAB_14380a66c:
    } while (puVar24 != local_3e8);
  }
  LOCK();
  *(int *)((longlong)local_3e0 + 8) = *(int *)((longlong)local_3e0 + 8) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_3f0 + 1) = *(int *)(local_3f0 + 1) + -1;
  UNLOCK();
  LOCK();
  *(int *)((longlong)dStack_150 + 8) = *(int *)((longlong)dStack_150 + 8) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_168 + 1) = *(int *)(local_168 + 1) + -1;
  UNLOCK();
  local_178 = (double *)&DAT_00000038;
  plVar28 = (longlong *)(*DAT_14c787670)(0,&local_178,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(plVar28,"hkGeometry");
  }
  local_3e8 = plVar28;
  FUN_144b3e890(plVar28);
  lVar21 = local_3f8;
  if ((longlong)*(int *)(local_3f8 + 200) != 0) {
    lVar20 = *(longlong *)(local_3f8 + 0xc0);
    lVar23 = (longlong)*(int *)(local_3f8 + 200) * 0xb0 + lVar20;
    local_3f0 = (double *)(local_3f8 + 0x70);
    local_3e0 = (longlong *)(local_3f8 + 0x110);
LAB_14380ac34:
    do {
      if (1 < (byte)((*(byte *)(lVar20 + 0x71) & 0xf) - 3)) {
        cVar14 = FUN_147e40bab(lVar20 + 0x78,local_3b0,*(undefined4 *)(lVar21 + 0x58));
        if (cVar14 == '\0') {
          uVar26 = *(ulonglong *)(lVar20 + 0x70);
          iVar29 = *(int *)(lVar21 + 0x68);
          if ((longlong)iVar29 == 0) {
            iVar29 = -1;
          }
          else {
            lVar25 = *(longlong *)(lVar21 + 0x60);
            uVar32 = 0;
            do {
              lVar21 = lVar25 + uVar32;
              lVar27 = FUN_140612f46(lVar21);
              if (lVar27 == 0) {
                iVar17 = -1;
              }
              else {
                lVar21 = FUN_140612f46(lVar21);
                iVar17 = *(int *)(lVar21 + 0xc);
              }
              lVar21 = local_3f8;
              if (iVar17 == (int)(uVar26 >> 0x20)) {
                iVar29 = (int)(uVar32 >> 3) * 0x38e38e39;
                goto LAB_14380acc9;
              }
              uVar32 = uVar32 + 0x48;
            } while ((longlong)iVar29 * 0x48 != uVar32);
            iVar29 = -1;
          }
LAB_14380acc9:
          if ((uVar26 >> 0x20 == 0) || (iVar29 != -1)) {
            if (((((uint)uVar26 & 0xf00) == 0x200) && ((char)uVar26 == '\0')) && (iVar29 == -1)) {
              uVar26 = (ulonglong)((uint)uVar26 & 0xfffff000 | 0x100);
            }
            uStack_138._0_4_ = 0;
            uStack_138._4_4_ = 0;
            iStack_130 = 0;
            iStack_12c = 8;
            local_128 = -1;
            local_124 = 0;
            uVar15 = (uint)uVar26;
            FUN_140e846e9(&local_2d8,uVar26 & 0xffffffff);
            FUN_147e4c7de(&local_178,local_2d8,(ulonglong)uStack_2d0 & 0xffffffff,iStack_12c);
            if (local_2d8 != 0.0) {
              FUN_1400020a8();
            }
            if ((-1 < iVar29) && (iVar29 < *(int *)(lVar21 + 0x68))) {
              local_128 = iVar29;
            }
            if ((uVar26 >> 8 & 0xf) == 0) {
              local_124 = 0;
LAB_14380ae6d:
              uVar19 = FUN_147e43936(&local_178);
              plVar28 = local_3e8;
              FUN_1412aff1a(lVar20,local_3e8,uVar19,0xbf800000);
            }
            else {
              uVar18 = (uint)(uVar26 >> 8) & 0xf;
              if (uVar18 == 1) {
                local_124 = 2;
                if ((uVar15 >> 0xd & 1) == 0) goto LAB_14380ae6d;
                uVar19 = FUN_147e43936(&local_178);
                iVar29 = *(int *)(lVar21 + 0x78);
                *(uint *)(lVar21 + 0x78) = iVar29 + 1U;
                if (*(uint *)(lVar21 + 0x7c) < iVar29 + 1U) {
                  FUN_147e4c8ec(local_3f0,iVar29);
                }
                dVar40 = *local_3f0;
                lVar25 = (longlong)iVar29 * 0x10;
                *(longlong *)((longlong)dVar40 + lVar25) = lVar20;
                *(undefined4 *)((longlong)dVar40 + 8 + lVar25) = uVar19;
                *(undefined1 *)((longlong)dVar40 + 0xc + lVar25) = 1;
                plVar28 = local_3e8;
              }
              else {
                if (uVar18 != 2) goto LAB_14380ae6d;
                local_124 = 3;
                if ((char)uVar26 == '\0') {
                  uVar19 = FUN_147e43936(&local_178);
                  iVar29 = *(int *)(lVar21 + 0x78);
                  *(uint *)(lVar21 + 0x78) = iVar29 + 1U;
                  if (*(uint *)(lVar21 + 0x7c) < iVar29 + 1U) {
                    FUN_147e4c8ec(local_3f0,iVar29);
                  }
                  dVar40 = *local_3f0;
                  lVar25 = (longlong)iVar29 * 0x10;
                  *(longlong *)((longlong)dVar40 + lVar25) = lVar20;
                  *(undefined4 *)((longlong)dVar40 + 8 + lVar25) = uVar19;
                  *(byte *)((longlong)dVar40 + 0xc + lVar25) = (byte)(uVar15 >> 0xd) & 1;
                  plVar28 = local_3e8;
                }
                else if ((uVar15 >> 0xd & 1) == 0) {
                  local_2d8 = 2.76676761671098e-322;
                  dVar40 = (double)(*DAT_14c787670)(0,&local_2d8,0);
                  if (DAT_14c787680 != (code *)0x0) {
                    (*DAT_14c787680)(dVar40,"hkGeometry");
                  }
                  FUN_144b3e890(dVar40);
                  local_2d8 = dVar40;
                  FUN_1412aff1a(lVar20,dVar40,0,0xbf800000);
                  uVar19 = FUN_147e43936(&local_178);
                  local_278 = (double)CONCAT44(local_278._4_4_,uVar19);
                  FUN_147e4c972(local_3e0,&local_2d8,&local_278);
                  plVar28 = local_3e8;
                  if (dVar40 != 0.0) {
                    FUN_144b3f230(dVar40);
                    plVar28 = local_3e8;
                  }
                }
                else {
                  iStack_130 = 0;
                  if (iStack_12c != 0) {
                    FUN_143819928(&local_178);
                  }
                  local_124 = 2;
                  uVar19 = FUN_147e43936(&local_178);
                  iVar29 = *(int *)(lVar21 + 0x78);
                  *(uint *)(lVar21 + 0x78) = iVar29 + 1U;
                  if (*(uint *)(lVar21 + 0x7c) < iVar29 + 1U) {
                    FUN_147e4c8ec(local_3f0,iVar29);
                  }
                  dVar40 = *local_3f0;
                  lVar25 = (longlong)iVar29 * 0x10;
                  *(longlong *)((longlong)dVar40 + lVar25) = lVar20;
                  *(undefined4 *)((longlong)dVar40 + 8 + lVar25) = uVar19;
                  *(undefined1 *)((longlong)dVar40 + 0xc + lVar25) = 0;
                  plVar28 = local_3e8;
                }
              }
            }
            bVar38 = true;
            if (*(uint *)(plVar28 + 6) < 0x1000000) {
              bVar38 = 0xffffff < *(uint *)(plVar28 + 4);
            }
            if (CONCAT44(uStack_138._4_4_,(int)uStack_138) != 0) {
              FUN_1400020a8();
            }
            lVar20 = lVar20 + 0xb0;
            if ((bool)(bVar38 | lVar20 == lVar23)) break;
            goto LAB_14380ac34;
          }
        }
      }
      lVar20 = lVar20 + 0xb0;
    } while (lVar20 != lVar23);
  }
  lVar20 = local_3d8;
  if (((*(uint *)(local_3e8 + 6) < 0x1000000) &&
      (*(uint *)(local_3e8 + 6) <= *(uint *)(lVar21 + 0x2c))) &&
     (*(uint *)(local_3e8 + 4) < 0x1000000)) {
    plVar28 = *(longlong **)(lVar21 + 0x108);
    if ((plVar28 != local_3e8) &&
       (*(longlong **)(lVar21 + 0x108) = local_3e8, plVar28 != (longlong *)0x0)) {
      FUN_144b3f230();
    }
  }
  else {
    if (local_3e8 != (longlong *)0x0) {
      (**(code **)(*local_3e8 + 8))(local_3e8,1);
    }
    LOCK();
    *(undefined4 *)(lVar21 + 0x18) = 1;
    UNLOCK();
  }
  if ((*(char *)(lVar20 + 0x7c) == '\x01') && ((uint)local_1c8 == 0)) {
    *(undefined1 *)(lVar21 + 0x151) = 1;
  }
  if (local_3a8 != 0) {
    FUN_1400020a8();
  }
  FUN_147e4aaf0(&local_1a8);
  FUN_147e4ab7c(&local_1d8);
LAB_143808d43:
  if ((local_f0 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14380b060 FUN_14380b060 body=230 status=ok
// SIG undefined FUN_14380b060(void)

void FUN_14380b060(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if ((*(char *)(param_1 + 0x684) == '\x01') &&
     ((*(longlong *)(param_1 + 0x720) == 0 ||
      (param_1 = *(longlong *)(*(longlong *)(param_1 + 0x720) + 0x3a8), param_1 == 0)))) {
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    *param_2 = 0.0;
    param_2[1] = 0.0;
    *(undefined1 *)(param_2 + 6) = 0;
  }
  else {
    dVar1 = *(double *)(param_1 + 0x170);
    dVar2 = *(double *)(param_1 + 0x188);
    dVar3 = *(double *)(param_1 + 0x160);
    dVar4 = *(double *)(param_1 + 0x168);
    dVar5 = *(double *)(param_1 + 0x180);
    dVar6 = *(double *)(param_1 + 0x178);
    *param_2 = dVar3 - dVar6;
    param_2[1] = dVar4 - dVar5;
    param_2[2] = dVar1 - dVar2;
    param_2[3] = dVar3 + dVar6;
    param_2[4] = dVar4 + dVar5;
    param_2[5] = dVar1 + dVar2;
    *(undefined1 *)(param_2 + 6) = 1;
  }
  return;
}



// FUNCTION 14380b146 FUN_14380b146 body=961 status=ok
// SIG undefined FUN_14380b146(void)

void FUN_14380b146(longlong *param_1,double *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  if ((longlong)(int)param_1[1] != 0) {
    pauVar10 = (undefined1 (*) [16])*param_1;
    pauVar11 = pauVar10 + (longlong)(int)param_1[1] * 6;
    do {
      dVar13 = *(double *)*pauVar10 * param_2[8];
      dVar14 = *(double *)(*pauVar10 + 8) * param_2[9];
      dVar12 = *(double *)pauVar10[1] * param_2[10];
      dVar7 = *param_2;
      dVar8 = param_2[1];
      dVar9 = param_2[2];
      dVar1 = param_2[3];
      dVar15 = dVar14 * dVar7 - dVar13 * dVar8;
      dVar16 = dVar12 * dVar8 - dVar14 * dVar9;
      dVar17 = dVar13 * dVar9 - dVar7 * dVar12;
      dVar16 = dVar16 + dVar16;
      dVar17 = dVar17 + dVar17;
      dVar15 = dVar15 + dVar15;
      dVar6 = (dVar9 * dVar16 - dVar7 * dVar15) + param_2[3] * dVar17 + dVar14 + param_2[5];
      dVar14 = param_2[6];
      auVar2._8_4_ = SUB84(dVar6,0);
      auVar2._0_8_ = (dVar15 * dVar8 - dVar17 * dVar9) + dVar1 * dVar16 + dVar13 + param_2[4];
      auVar2._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *pauVar10 = auVar2;
      *(double *)pauVar10[1] = dVar15 * dVar1 + dVar12 + (dVar17 * dVar7 - dVar16 * dVar8) + dVar14;
      dVar13 = *(double *)(pauVar10[1] + 8) * param_2[8];
      dVar14 = *(double *)pauVar10[2] * param_2[9];
      dVar12 = *(double *)(pauVar10[2] + 8) * param_2[10];
      dVar7 = *param_2;
      dVar8 = param_2[1];
      dVar9 = param_2[2];
      dVar1 = param_2[3];
      dVar15 = dVar14 * dVar7 - dVar13 * dVar8;
      dVar16 = dVar12 * dVar8 - dVar14 * dVar9;
      dVar17 = dVar13 * dVar9 - dVar7 * dVar12;
      dVar16 = dVar16 + dVar16;
      dVar17 = dVar17 + dVar17;
      dVar15 = dVar15 + dVar15;
      dVar6 = (dVar9 * dVar16 - dVar7 * dVar15) + param_2[3] * dVar17 + dVar14 + param_2[5];
      dVar14 = param_2[6];
      auVar3._8_4_ = SUB84(dVar6,0);
      auVar3._0_8_ = (dVar15 * dVar8 - dVar17 * dVar9) + dVar1 * dVar16 + dVar13 + param_2[4];
      auVar3._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *(undefined1 (*) [16])(pauVar10[1] + 8) = auVar3;
      *(double *)(pauVar10[2] + 8) =
           dVar15 * dVar1 + dVar12 + (dVar17 * dVar7 - dVar16 * dVar8) + dVar14;
      dVar13 = *(double *)pauVar10[3] * param_2[8];
      dVar14 = *(double *)(pauVar10[3] + 8) * param_2[9];
      dVar12 = *(double *)pauVar10[4] * param_2[10];
      dVar7 = *param_2;
      dVar8 = param_2[1];
      dVar9 = param_2[2];
      dVar1 = param_2[3];
      dVar15 = dVar14 * dVar7 - dVar13 * dVar8;
      dVar16 = dVar12 * dVar8 - dVar14 * dVar9;
      dVar17 = dVar13 * dVar9 - dVar7 * dVar12;
      dVar16 = dVar16 + dVar16;
      dVar17 = dVar17 + dVar17;
      dVar15 = dVar15 + dVar15;
      dVar6 = (dVar9 * dVar16 - dVar7 * dVar15) + param_2[3] * dVar17 + dVar14 + param_2[5];
      dVar14 = param_2[6];
      auVar4._8_4_ = SUB84(dVar6,0);
      auVar4._0_8_ = (dVar15 * dVar8 - dVar17 * dVar9) + dVar1 * dVar16 + dVar13 + param_2[4];
      auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      pauVar10[3] = auVar4;
      *(double *)pauVar10[4] = dVar15 * dVar1 + dVar12 + (dVar17 * dVar7 - dVar16 * dVar8) + dVar14;
      dVar13 = *(double *)(pauVar10[4] + 8) * param_2[8];
      dVar14 = *(double *)pauVar10[5] * param_2[9];
      dVar12 = *(double *)(pauVar10[5] + 8) * param_2[10];
      dVar7 = *param_2;
      dVar8 = param_2[1];
      dVar9 = param_2[2];
      dVar1 = param_2[3];
      dVar15 = dVar14 * dVar7 - dVar13 * dVar8;
      dVar16 = dVar12 * dVar8 - dVar14 * dVar9;
      dVar17 = dVar13 * dVar9 - dVar7 * dVar12;
      dVar16 = dVar16 + dVar16;
      dVar17 = dVar17 + dVar17;
      dVar15 = dVar15 + dVar15;
      dVar6 = (dVar9 * dVar16 - dVar7 * dVar15) + param_2[3] * dVar17 + dVar14 + param_2[5];
      dVar14 = param_2[6];
      auVar5._8_4_ = SUB84(dVar6,0);
      auVar5._0_8_ = (dVar15 * dVar8 - dVar17 * dVar9) + dVar1 * dVar16 + dVar13 + param_2[4];
      auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *(undefined1 (*) [16])(pauVar10[4] + 8) = auVar5;
      *(double *)(pauVar10[5] + 8) =
           dVar15 * dVar1 + dVar12 + (dVar17 * dVar7 - dVar16 * dVar8) + dVar14;
      pauVar10 = pauVar10 + 6;
    } while (pauVar10 != pauVar11);
  }
  return;
}



// FUNCTION 14380b508 FUN_14380b508 body=4231 status=ok
// SIG undefined FUN_14380b508(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14380b508(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  float fVar2;
  int iVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  void *_Dst;
  double dVar9;
  uint uVar10;
  double *pdVar11;
  double *pdVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  double dVar24;
  undefined1 auVar23 [16];
  double dVar26;
  double dVar27;
  undefined1 auVar25 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auStack_4a8 [32];
  void *local_488;
  longlong local_480;
  undefined4 local_478;
  float local_464;
  longlong local_460;
  undefined1 local_458 [16];
  undefined1 local_448 [24];
  double *local_430;
  undefined8 local_428;
  double local_420;
  double local_418;
  double local_410;
  double local_408;
  double local_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  double local_398;
  double dStack_390;
  undefined1 local_388 [16];
  double local_378;
  double dStack_370;
  undefined1 local_368 [16];
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  undefined1 local_2f8 [24];
  undefined8 local_2e0;
  undefined1 local_2d8 [64];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  ulonglong local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  local_460 = param_1;
  local_428 = param_2;
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    pdVar12 = *(double **)(param_1 + 0x48);
    local_430 = pdVar12 + (longlong)*(int *)(param_1 + 0x50) * 0x3c;
    do {
      FUN_147e47188(local_2f8,local_428);
      local_138 = 0.0;
      local_130 = 1.69759663277222e-313;
      local_128 = (double)CONCAT35(local_128._5_3_,0x1ffffffff);
      uVar6 = FUN_147e43936(&local_178);
      local_398 = (double)CONCAT44(local_398._4_4_,uVar6);
      local_1e8 = (double)CONCAT44((uint)((ulonglong)pdVar12[2] >> 0x20) ^ DAT_149931e80._4_4_,
                                   SUB84(pdVar12[2],0) ^ (uint)DAT_149931e80);
      local_1f8._0_4_ = *(uint *)pdVar12 ^ (uint)DAT_149931e80;
      local_1f8._4_4_ = *(uint *)((longlong)pdVar12 + 4) ^ DAT_149931e80._4_4_;
      local_1f8._8_4_ = *(uint *)(pdVar12 + 1) ^ DAT_149931e80._8_4_;
      local_1f8._12_4_ = *(uint *)((longlong)pdVar12 + 0xc) ^ DAT_149931e80._12_4_;
      dStack_1d0 = pdVar12[2];
      dStack_1e0 = *pdVar12;
      dStack_1d8 = pdVar12[1];
      local_1c8 = (double)CONCAT71(local_1c8._1_7_,1);
      FUN_14380d5ab(&local_278,local_1f8,&DAT_14c846480);
      FUN_147e4cb3c(local_2d8,&local_278,&local_398);
      if (local_278 != 0.0) {
        FUN_144b3f230();
      }
      lVar14 = local_460;
      if (local_138 != 0.0) {
        FUN_1400020a8();
      }
      local_464 = -1.0;
      if (*(char *)((longlong)pdVar12 + 0x194) == '\x01') {
        local_464 = *(float *)(pdVar12 + 0x32);
      }
      iVar3 = *(int *)(lVar14 + 0x40);
      if ((longlong)iVar3 != 0) {
        lVar14 = *(longlong *)(local_460 + 0x38);
        fVar2 = (float)(~-(uint)(0.0 < local_464) & 0x41200000 |
                       (uint)(local_464 + 10.0) & -(uint)(0.0 < local_464));
        dVar9 = (double)fVar2;
        local_408 = (double)-fVar2;
        lVar13 = 0;
        local_400 = dVar9;
        do {
          uVar10 = *(uint *)(lVar14 + 0x100 + lVar13);
          uVar7 = FUN_1437fdf47(pdVar12[0x16]);
          if ((uVar7 & uVar10) != 0) {
            pdVar11 = (double *)(lVar14 + lVar13);
            local_338 = *pdVar11;
            dStack_330 = pdVar11[1];
            local_328 = pdVar11[2];
            dStack_320 = pdVar11[3];
            local_318 = pdVar11[4];
            dStack_310 = pdVar11[5];
            local_308 = pdVar11[6];
            dVar28 = (dStack_310 - local_328) * 0.5;
            dVar33 = (local_318 - dStack_330) * 0.5;
            dVar34 = (dStack_320 - local_338) * 0.5;
            if (dVar33 <= dVar34) {
              dVar34 = dVar33;
            }
            if (dVar28 <= dVar34) {
              dVar34 = dVar28;
            }
            if (dVar9 <= dVar34) {
              dStack_310 = dStack_310 + local_408;
              local_318 = local_318 + local_408;
              dStack_320 = dStack_320 + local_408;
              local_328 = local_328 - local_408;
              dStack_330 = dStack_330 - local_408;
              local_338 = local_338 - local_408;
              uVar16 = (ulonglong)local_308 >> 8;
              local_308 = (double)CONCAT71((int7)uVar16,1);
              pdVar11 = pdVar12;
              FUN_147e3ee12(pdVar12,&local_3f8);
              local_368 = ZEXT816(0);
              local_378 = 0.0;
              dStack_370 = 0.0;
              dVar9 = local_3b8._0_8_;
              dVar32 = local_3b8._8_8_;
              dVar34 = local_3a8._0_8_;
              dVar4 = local_3a8._8_8_;
              local_458 = *(undefined1 (*) [16])(lVar14 + 0x80 + lVar13);
              dVar28 = local_458._0_8_;
              dVar30 = local_458._8_8_;
              local_448._0_16_ = *(undefined1 (*) [16])(lVar14 + 0x90 + lVar13);
              dVar33 = local_448._0_8_;
              auVar19 = minpd(local_458,local_3b8);
              auVar22 = minpd(local_448._0_16_,local_3a8);
              auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
              auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
              iVar8 = movmskpd((int)&local_378,auVar20);
              auVar19._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
              auVar19._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
              uVar10 = movmskpd((int)pdVar11,auVar19);
              if ((uVar10 & 0x3fffffff) == 0 && iVar8 == 0) {
                pdVar11 = (double *)(lVar14 + 0x40 + lVar13);
                dVar29 = *pdVar11;
                dVar31 = pdVar11[1];
                pdVar11 = (double *)(lVar14 + 0x50 + lVar13);
                dVar27 = *pdVar11;
                dVar35 = pdVar11[1];
                dVar21 = (double)DAT_149931170;
                dVar24 = DAT_149931170._8_8_;
                local_398 = dVar31 * local_3e8 * -1.0 +
                            dVar27 * dStack_3f0 + dVar35 * local_3f8 * dVar21 + dVar29 * dStack_3e0;
                dStack_390 = dVar29 * local_3e8 * 1.0 +
                             dVar35 * dStack_3f0 + dVar27 * local_3f8 * dVar24 + dVar31 * dStack_3e0
                ;
                pdVar11 = (double *)(lVar14 + 0x60 + lVar13);
                dVar36 = *pdVar11 * dVar9;
                dVar37 = pdVar11[1] * dVar32;
                pdVar11 = (double *)(lVar14 + 0x70 + lVar13);
                dVar18 = *pdVar11 * dVar34;
                dVar26 = pdVar11[1] * dVar4;
                local_388._8_8_ =
                     dVar27 * local_3e8 * dVar24 +
                     ((local_3f8 * dVar29 * dVar24 + dVar35 * dStack_3e0) - dVar31 * dStack_3f0);
                local_388._0_8_ =
                     dVar35 * local_3e8 * dVar21 +
                     ((local_3f8 * dVar31 * dVar21 + dVar27 * dStack_3e0) - dVar29 * dStack_3f0);
                dVar29 = dVar37 * local_3f8 - dStack_3f0 * dVar36;
                dVar31 = dVar18 * dStack_3f0 - local_3e8 * dVar37;
                dVar21 = dVar36 * local_3e8 - local_3f8 * dVar18;
                dVar24 = dVar26 * dStack_3e0 - dStack_3e0 * dVar26;
                dVar31 = dVar31 + dVar31;
                dVar21 = dVar21 + dVar21;
                dVar29 = dVar29 + dVar29;
                dVar24 = dVar24 + dVar24;
                local_378 = (dVar29 * dStack_3f0 - local_3e8 * dVar21) +
                            dStack_3e0 * dVar31 + dVar36 + local_3d8;
                dStack_370 = (dVar31 * local_3e8 - dVar29 * local_3f8) +
                             dStack_3e0 * dVar21 + dVar37 + dStack_3d0;
                local_368._0_8_ =
                     (dVar21 * local_3f8 - dStack_3f0 * dVar31) + dStack_3e0 * dVar29 + dVar18 +
                     local_3c8;
                local_368._8_8_ =
                     (dVar24 * dStack_3e0 - dVar24 * dStack_3e0) + dStack_3e0 * dVar24 + dVar26 +
                     dStack_3c0;
                dVar33 = dVar33 * dVar34;
                dVar4 = local_448._8_8_ * dVar4;
                local_358 = dVar28 * dVar9;
                dStack_350 = dVar30 * dVar32;
              }
              else {
                dVar26 = dStack_3f0 + dStack_3f0;
                dVar21 = local_3e8 + local_3e8;
                dVar18 = local_3f8 * (local_3f8 + local_3f8);
                local_1a8 = (1.0 - (dVar18 + dStack_3f0 * dVar26)) * dVar34;
                dVar24 = (local_3f8 + local_3f8) * dStack_3e0;
                local_1b8 = (dVar26 * dStack_3e0 + local_3f8 * dVar21) * dVar34;
                local_448._8_8_ = dVar4 * local_448._8_8_;
                local_448._0_8_ = dVar34 * dVar33;
                dStack_1d8 = (dVar26 * local_3f8 - dVar21 * dStack_3e0) * dVar32;
                dStack_1b0 = (dVar21 * dStack_3f0 - dVar24) * dVar34;
                dStack_1d0 = (1.0 - (local_3e8 * dVar21 + dVar18)) * dVar32;
                local_1c8 = (dVar21 * dStack_3f0 + dVar24) * dVar32;
                local_1e8 = (local_3f8 * dVar21 - dVar26 * dStack_3e0) * dVar9;
                local_1f8._8_8_ = (dVar26 * local_3f8 + dVar21 * dStack_3e0) * dVar9;
                local_1f8._0_8_ = (1.0 - (local_3e8 * dVar21 + dStack_3f0 * dVar26)) * dVar9;
                dStack_1e0 = 0.0;
                uStack_1c0 = 0;
                uStack_1a0 = 0;
                local_198 = local_3d8;
                dStack_190 = dStack_3d0;
                local_188 = local_3c8;
                uStack_180 = 0x3ff0000000000000;
                pdVar11 = (double *)(lVar14 + 0x40 + lVar13);
                dVar18 = *pdVar11;
                dVar26 = pdVar11[1];
                dVar29 = *(double *)(lVar14 + 0x50 + lVar13);
                dVar27 = dVar26 + dVar26;
                dVar4 = dVar29 + dVar29;
                dVar31 = dVar18 * (dVar18 + dVar18);
                local_228 = (1.0 - (dVar31 + dVar26 * dVar27)) * dVar33;
                dVar35 = *(double *)(lVar14 + 0x40 + lVar13) * dVar4;
                pdVar11 = (double *)(lVar14 + 0x58 + lVar13);
                dVar34 = *pdVar11;
                dVar21 = dVar4 * dVar34;
                dVar24 = (dVar18 + dVar18) * *pdVar11;
                dVar34 = dVar27 * dVar34;
                local_238 = (dVar34 + dVar35) * dVar33;
                local_258 = (dVar27 * dVar18 - dVar21) * dVar30;
                dStack_230 = (dVar4 * dVar26 - dVar24) * dVar33;
                local_458._8_4_ = SUB84(dVar32 * dVar30,0);
                local_458._0_8_ = dVar9 * dVar28;
                local_458._12_4_ = (int)((ulonglong)(dVar32 * dVar30) >> 0x20);
                local_278 = (1.0 - (dVar29 * dVar4 + dVar26 * dVar27)) * dVar28;
                dStack_250 = (1.0 - (dVar29 * dVar4 + dVar31)) * dVar30;
                dStack_270 = (dVar27 * dVar18 + dVar21) * dVar28;
                local_248 = (dVar4 * dVar26 + dVar24) * dVar30;
                local_268 = (dVar35 - dVar34) * dVar28;
                uStack_260 = 0;
                uStack_240 = 0;
                uStack_220 = 0;
                puVar1 = (undefined8 *)(lVar14 + 0x60 + lVar13);
                local_218 = *puVar1;
                uStack_210 = puVar1[1];
                local_208 = *(undefined8 *)(lVar14 + 0x70 + lVar13);
                uStack_200 = 0x3ff0000000000000;
                FUN_1447fea8d(&local_178,&local_278,local_1f8);
                local_410 = local_168;
                dVar34 = local_168 * local_168 + local_178 * local_178 + dStack_170 * dStack_170;
                local_418 = local_158;
                dVar28 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
                local_420 = local_138;
                dVar9 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
                uVar16 = -(ulonglong)(0.0 <= dVar34 + -9.99999993922529e-09);
                dVar32 = (double)(~uVar16 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar34)) & uVar16);
                uVar16 = -(ulonglong)(0.0 <= dVar28 + -9.99999993922529e-09);
                dVar34 = (double)(~uVar16 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar28)) & uVar16);
                uVar16 = -(ulonglong)(0.0 <= dVar9 + -9.99999993922529e-09);
                dVar9 = (double)(~uVar16 & 0x3ff0000000000000 |
                                (ulonglong)(1.0 / SQRT(dVar9)) & uVar16);
                dVar33 = (double)local_448._0_8_;
                dVar4 = (double)local_448._8_8_;
                auVar22._8_8_ = -(ulonglong)(0.0 <= (double)local_458._8_8_);
                auVar22._0_8_ = -(ulonglong)(0.0 <= (double)local_458._0_8_);
                auVar19 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar22);
                dVar28 = (double)(~-(ulonglong)(0.0 <= (double)local_448._0_8_) & 0xbff0000000000000
                                 | -(ulonglong)(0.0 <= (double)local_448._0_8_) & 0x3ff0000000000000
                                 );
                dVar30 = auVar19._0_8_;
                local_178 = local_178 * dVar32 * dVar30;
                dStack_170 = dStack_170 * dVar32 * dVar30;
                local_168 = dVar32 * local_168 * dVar30;
                dVar32 = auVar19._8_8_;
                local_148 = dVar34 * local_148 * dVar32;
                local_150 = local_150 * dVar34 * dVar32;
                local_158 = dVar32 * local_158 * dVar34;
                local_128 = dVar9 * local_128 * dVar28;
                local_130 = local_130 * dVar9 * dVar28;
                local_138 = dVar28 * local_138 * dVar9;
                FUN_14481fd10(&local_298,&local_178);
                dVar9 = local_288 * local_288 + local_298 * local_298;
                dVar34 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                auVar23._0_8_ = dVar9 + dVar34;
                auVar23._8_8_ = dVar9 + dVar34;
                auVar17._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
                auVar17._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
                auVar19 = sqrtpd(auVar23,auVar23);
                auVar19 = divpd(_DAT_149934d80,auVar19);
                auVar25._0_8_ = auVar19._0_8_ * local_288;
                auVar25._8_8_ = auVar19._8_8_ * dStack_280;
                local_398 = (double)((ulonglong)(local_298 * auVar19._0_8_) &
                                    -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_));
                dStack_390 = (double)((ulonglong)(dStack_290 * auVar19._8_8_) &
                                     -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_));
                local_388 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar25,auVar17);
                local_368._8_8_ = 0.0;
                local_368._0_8_ = (double)local_108;
                local_378 = local_118;
                dStack_370 = dStack_110;
                local_358 = (double)local_458._0_8_;
                dStack_350 = (double)local_458._8_8_;
              }
              local_348._8_4_ = SUB84(dVar4,0);
              local_348._0_8_ = dVar33;
              local_348._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
              local_138 = 0.0;
              local_130 = 1.69759663277222e-313;
              local_128 = (double)CONCAT35(local_128._5_3_,0x2ffffffff);
              uVar6 = FUN_147e43936(&local_178);
              local_278 = (double)CONCAT44(local_278._4_4_,uVar6);
              FUN_14380d5ab(local_1f8,&local_338,&local_398);
              FUN_147e4cb3c(local_2d8,local_1f8,&local_278);
              if (local_1f8._0_8_ != 0) {
                FUN_144b3f230();
              }
              dVar9 = local_400;
              if (local_138 != 0.0) {
                FUN_1400020a8();
              }
            }
          }
          lVar13 = lVar13 + 0x110;
        } while ((longlong)iVar3 * 0x110 - lVar13 != 0);
      }
      lVar14 = local_460;
      if ((longlong)*(int *)(local_460 + 0x78) != 0) {
        if (local_464 <= 0.0) {
          local_464 = 0.0;
        }
        lVar13 = (longlong)*(int *)(local_460 + 0x78) << 4;
        lVar15 = *(longlong *)(local_460 + 0x70) + 8;
        do {
          if (*(char *)(lVar15 + 4) == '\0') {
            local_178 = 2.76676761671098e-322;
            dVar9 = (double)(*DAT_14c787670)(0,&local_178,0);
            if (DAT_14c787680 != (code *)0x0) {
              (*DAT_14c787680)(dVar9,"hkGeometry");
            }
            FUN_144b3e890(dVar9);
            local_178 = dVar9;
            FUN_1412aff1a(*(undefined8 *)(lVar15 + -8),dVar9,0);
            FUN_147e4cba2(local_2d8,&local_178);
            if (dVar9 != 0.0) {
              FUN_144b3f230();
            }
          }
          else {
            pdVar11 = *(double **)(lVar15 + -8);
            local_178 = *pdVar11;
            dStack_170 = pdVar11[1];
            local_168 = pdVar11[2];
            dStack_160 = pdVar11[3];
            dVar9 = pdVar11[4];
            dVar34 = pdVar11[5];
            dVar28 = pdVar11[6];
            dVar33 = pdVar11[7];
            local_1f8 = *(undefined1 (*) [16])(pdVar11 + 8);
            local_1e8 = pdVar11[10];
            dStack_1e0 = pdVar11[0xb];
            fVar2 = *(float *)((longlong)pdVar12[0x16] + 0x4c);
            pdVar11[4] = dVar9 + 0.0;
            pdVar11[5] = pdVar11[5] + 0.0;
            pdVar11[6] = dVar28 - (double)fVar2;
            pdVar11[7] = 0.0;
            FUN_1412aff1a(*(undefined8 *)(lVar15 + -8),local_2e0);
            pdVar11 = *(double **)(lVar15 + -8);
            pdVar11[2] = local_168;
            pdVar11[3] = dStack_160;
            *pdVar11 = local_178;
            pdVar11[1] = dStack_170;
            pdVar11[4] = dVar9;
            pdVar11[5] = dVar34;
            pdVar11[6] = dVar28;
            pdVar11[7] = dVar33;
            auVar5._8_8_ = dStack_1e0;
            auVar5._0_8_ = local_1e8;
            pdVar11[8] = (double)local_1f8._0_8_;
            pdVar11[9] = (double)local_1f8._8_8_;
            *(undefined1 (*) [16])(pdVar11 + 10) = auVar5;
          }
          lVar15 = lVar15 + 0x10;
          lVar13 = lVar13 + -0x10;
        } while (lVar13 != 0);
      }
      if (*(char *)(lVar14 + 0x152) != '\0') {
        *(undefined1 *)((longlong)pdVar12 + 0x115) = 0;
      }
      uVar6 = *(undefined4 *)(lVar14 + 0x28);
      lVar14 = *(longlong *)(DAT_14cb1ceb0 + 8) + 0x18;
      if (*(longlong *)(DAT_14cb1ceb0 + 8) == 0) {
        lVar14 = 0;
      }
      local_178 = 1.10670704668439e-321;
      _Dst = (void *)(*DAT_14c787670)(0,&local_178,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(_Dst);
      }
      memset(_Dst,0,0xe0);
      FUN_147e4cc08(_Dst);
      local_488 = _Dst;
      local_480 = lVar14;
      local_478 = uVar6;
      FUN_143819973(&local_178,local_2f8,pdVar12 + 0x19,pdVar12 + 0x1c);
      if (_Dst != (void *)0x0) {
        FUN_144b3f230(_Dst);
      }
      dVar9 = local_178;
      if (local_178 != 0.0) {
        local_178 = 0.0;
        FUN_140d4b01e(pdVar12 + 0x10);
        dVar34 = dStack_170;
        pdVar12[0x10] = dVar9;
        dVar9 = pdVar12[0x3b];
        if (dVar9 != dStack_170) {
          if (dStack_170 != 0.0) {
            FUN_144b3d910(dStack_170);
            dVar9 = pdVar12[0x3b];
          }
          pdVar12[0x3b] = dVar34;
          if (dVar9 != 0.0) {
            FUN_144b3f230();
          }
        }
      }
      FUN_147e471f6(&local_178);
      FUN_147e47250(local_2f8);
      pdVar12 = pdVar12 + 0x3c;
    } while (pdVar12 != local_430);
  }
  if ((local_f0 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14380c590 FUN_14380c590 body=1849 status=ok
// SIG undefined FUN_14380c590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14380c590(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined8 *puVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  longlong local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [8];
  float local_1e0;
  int local_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 local_1a8 [16];
  longlong local_188;
  int local_180;
  uint local_17c;
  longlong local_168;
  undefined4 local_160;
  int local_15c;
  undefined1 local_138 [8];
  ulonglong uStack_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  uVar11 = _DAT_14c6dae78;
  uVar10 = _DAT_14c6dae70;
  uVar9 = uRam000000014c6dae68;
  uVar8 = _DAT_14c6dae60;
  uVar7 = uRam000000014c6dae58;
  uVar6 = _DAT_14c6dae50;
  uVar5 = uRam000000014c6dae48;
  uVar4 = _DAT_14c6dae40;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar28 = *(longlong *)(param_1 + 0x48);
    lVar25 = (longlong)*(int *)(param_1 + 0x50) * 0x1e0 + lVar28;
    lVar27 = param_1 + 0xd0;
    do {
      if ((((*(longlong *)(lVar28 + 0x80) != 0) && (*(longlong *)(lVar28 + 0x1d8) != 0)) &&
          (*(longlong *)(lVar28 + 0x1b0) != 0)) &&
         (cVar15 = FUN_144b3e610(*(longlong *)(lVar28 + 0x80) + 0x90), cVar15 != '\0')) {
        local_1c8 = 0x40;
        puVar20 = (undefined8 *)(*DAT_14c787670)(0,&local_1c8,0);
        if (DAT_14c787680 != (code *)0x0) {
          (*DAT_14c787680)(puVar20,"hkaiTraversalAnalysisInput");
        }
        puVar20[1] = 0xffffffff;
        puVar20[2] = 1;
        *puVar20 = &PTR_LAB_14aba2b40;
        puVar20[3] = 0;
        puVar20[4] = 0x8000000000000000;
        puVar20[5] = 0;
        puVar20[6] = 0x8000000000000000;
        puVar20[7] = 0;
        FUN_147e6605e(puVar20 + 3);
        lVar2 = puVar20[3];
        lVar22 = (longlong)*(int *)(puVar20 + 4) * 0x60;
        plVar1 = (longlong *)(lVar2 + lVar22);
        *(undefined4 *)(puVar20 + 4) = 1;
        *(undefined8 *)(lVar2 + lVar22) = 0;
        *(undefined4 *)(lVar2 + 8 + lVar22) = 0xffffffff;
        puVar24 = (undefined8 *)(lVar2 + 0x10 + lVar22);
        *puVar24 = uVar4;
        puVar24[1] = uVar5;
        puVar24 = (undefined8 *)(lVar2 + 0x20 + lVar22);
        *puVar24 = uVar6;
        puVar24[1] = uVar7;
        puVar24 = (undefined8 *)(lVar2 + 0x30 + lVar22);
        *puVar24 = uVar8;
        puVar24[1] = uVar9;
        puVar24 = (undefined8 *)(lVar2 + 0x40 + lVar22);
        *puVar24 = uVar10;
        puVar24[1] = uVar11;
        *(undefined4 *)(lVar2 + 0x50 + lVar22) = 0;
        lVar2 = *(longlong *)(lVar28 + 0x80);
        if (lVar2 != 0) {
          FUN_144b3d910(lVar2);
          lVar22 = *plVar1;
          *plVar1 = lVar2;
          if (lVar22 != 0) {
            FUN_144b3f230();
          }
        }
        *(undefined4 *)(plVar1 + 1) = 0;
        lVar2 = *(longlong *)(lVar28 + 0x1d8);
        lVar23 = puVar20[7];
        lVar22 = *(longlong *)(lVar2 + 0x18);
        if (lVar23 != lVar22) {
          if (lVar22 == 0) {
            uVar21 = 0;
          }
          else {
            FUN_144b3d910(lVar22);
            lVar23 = puVar20[7];
            uVar21 = *(undefined8 *)(lVar2 + 0x18);
          }
          puVar20[7] = uVar21;
          if (lVar23 != 0) {
            FUN_144b3f230();
          }
        }
        puVar24 = *(undefined8 **)(lVar28 + 0x1c8);
        if (puVar24 != puVar20) {
          if (puVar20 != (undefined8 *)0x0) {
            FUN_144b3d910(puVar20);
            puVar24 = *(undefined8 **)(lVar28 + 0x1c8);
          }
          *(undefined8 **)(lVar28 + 0x1c8) = puVar20;
          if (puVar24 != (undefined8 *)0x0) {
            FUN_144b3f230();
          }
        }
        FUN_144d32a80(lVar28 + 0x198);
        if (*(longlong *)(lVar28 + 0x1d0) != 0) {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uStack_130;
          _local_138 = auVar3 << 0x40;
          FUN_147e66202(*(longlong *)(lVar28 + 0x1d0) + 0x18,&local_1c8);
          lVar2 = *(longlong *)(local_1c8 + 8);
          if (lVar2 != 0) {
            FUN_144b3d910(lVar2);
            iVar16 = FUN_144d3ea60(lVar2);
            if (0 < iVar16) {
              iVar16 = 0;
              local_220 = lVar27;
              do {
                uVar17 = FUN_144d3ea90(lVar2,iVar16);
                uVar21 = FUN_144d3ea70(lVar2,iVar16);
                FUN_141806ca0(&local_1c8,uVar21);
                if (((uVar17 != 0xffffffff) &&
                    (uVar26 = uVar17 & 0x1f, (int)uVar26 < *(int *)(param_1 + 0xb0))) &&
                   (cVar15 = FUN_147e472d0(&local_1c8,local_220,uVar26), cVar15 == '\0')) {
                  cVar15 = *(char *)(*(longlong *)(param_1 + 0xa8) + (ulonglong)(uVar17 & 0x1f));
                  local_1cc = iVar16;
                  if (cVar15 == '\x02') {
                    auVar31._4_4_ = uStack_1b0;
                    auVar31._0_4_ = uStack_1c0;
                    auVar31._8_4_ = uStack_1bc;
                    auVar31._12_4_ = uStack_1ac;
                    auVar33._4_4_ = local_1b8;
                    auVar33._0_4_ = (undefined4)local_1c8;
                    auVar33._8_4_ = local_1c8._4_4_;
                    auVar33._12_4_ = uStack_1b4;
                    _local_138 = insertps(auVar33,local_1a8,0x28);
                    local_118 = insertps(auVar31,local_1a8,0xa8);
                    local_128._4_4_ = uStack_1b4;
                    local_128._0_4_ = local_1c8._4_4_;
                    local_128._8_4_ = local_1a8._4_4_;
                    local_128._12_4_ = 0;
                    local_108._8_4_ = local_1a8._12_4_;
                    local_108._0_8_ = auVar31._8_8_;
                    local_108._12_4_ = 0;
                    local_228 = local_1f8;
                    iVar18 = FUN_144d35250(lVar2,&local_1cc,local_138,local_1e8);
LAB_14380cab3:
                    if (iVar18 == 0) {
                      iVar18 = 0;
                    }
                    else {
                      fVar29 = ((local_1e0 - (float)uStack_130) * 100.0) / 251.0;
                      if (1.0 <= fVar29) {
                        fVar29 = 1.0;
                      }
                      if (fVar29 <= 0.0) {
                        fVar29 = 0.0;
                      }
                      iVar18 = (int)ROUND(fVar29 * 33554432.0 + fVar29 * 33554432.0 + 0.5) >> 1;
                    }
                  }
                  else {
                    iVar18 = 0;
                    if (cVar15 == '\x01') {
                      auVar30._4_4_ = uStack_1b0;
                      auVar30._0_4_ = uStack_1c0;
                      auVar30._8_4_ = uStack_1bc;
                      auVar30._12_4_ = uStack_1ac;
                      auVar32._4_4_ = local_1b8;
                      auVar32._0_4_ = (undefined4)local_1c8;
                      auVar32._8_4_ = local_1c8._4_4_;
                      auVar32._12_4_ = uStack_1b4;
                      _local_138 = insertps(auVar32,local_1a8,0x28);
                      local_118 = insertps(auVar30,local_1a8,0xa8);
                      local_128._4_4_ = uStack_1b4;
                      local_128._0_4_ = local_1c8._4_4_;
                      local_128._8_4_ = local_1a8._4_4_;
                      local_128._12_4_ = 0;
                      local_108._8_4_ = local_1a8._12_4_;
                      local_108._0_8_ = auVar30._8_8_;
                      local_108._12_4_ = 0;
                      local_228 = local_1f8;
                      iVar18 = FUN_144d396d0(lVar2,&local_1cc,local_138,local_1e8);
                      goto LAB_14380cab3;
                    }
                  }
                  local_180 = 0;
                  iVar19 = 0;
                  if ((local_17c & 0x7fffffff) == 0) {
                    FUN_1401f86b2(&local_188,&PTR_vftable_14c6e47a0,1);
                    iVar19 = local_180;
                  }
                  *(uint *)(local_188 + (longlong)iVar19 * 4) = iVar18 << 5 | uVar26;
                  local_180 = 1;
                  FUN_147e6650c(&local_168,&PTR_vftable_14c6e47a0,local_188,1);
                  uVar14 = uStack_1b0;
                  uVar13 = local_1b8;
                  uVar12 = uStack_1c0;
                  local_1c8 = CONCAT44((undefined4)local_1c8,local_1c8._4_4_);
                  uStack_1c0 = uStack_1bc;
                  uStack_1bc = uVar12;
                  local_1b8 = uStack_1b4;
                  uStack_1b4 = uVar13;
                  uStack_1b0 = uStack_1ac;
                  uStack_1ac = uVar14;
                  FUN_144c51350(*(undefined8 *)(lVar28 + 0x80),&local_1c8);
                }
                local_160 = 0;
                if ((-1 < (longlong)local_15c) && (local_168 != 0)) {
                  (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                            (&PTR_vftable_14c6e47a0,local_168,(longlong)local_15c << 2);
                }
                lVar27 = local_220;
                local_168 = 0;
                local_15c = -0x80000000;
                local_180 = 0;
                if ((-1 < (longlong)(int)local_17c) && (local_188 != 0)) {
                  (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                            (&PTR_vftable_14c6e47a0,local_188,(longlong)(int)local_17c << 2);
                }
                iVar16 = iVar16 + 1;
                iVar18 = FUN_144d3ea60(lVar2);
              } while (iVar16 < iVar18);
            }
            local_208 = 0;
            uStack_200 = 0;
            local_218 = 0;
            uStack_210 = 0;
            FUN_144c515c0(*(undefined8 *)(lVar28 + 0x80),&local_218);
            FUN_144b3f230(lVar2);
          }
        }
        if (puVar20 != (undefined8 *)0x0) {
          FUN_144b3f230(puVar20);
        }
      }
      lVar28 = lVar28 + 0x1e0;
    } while (lVar28 != lVar25);
  }
  if ((local_f0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14380ccca FUN_14380ccca body=1740 status=ok
// SIG undefined FUN_14380ccca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14380ccca(longlong param_1)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong lVar23;
  undefined1 auStack_3d8 [32];
  float *local_3b8;
  undefined8 *local_3b0;
  longlong local_3a0;
  longlong local_398;
  longlong local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  longlong local_360;
  ulonglong local_358;
  undefined4 local_34c;
  undefined1 local_348 [256];
  undefined8 local_248;
  undefined8 uStack_240;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 *local_158;
  undefined8 local_150;
  undefined1 local_148 [16];
  undefined1 *local_138;
  undefined8 local_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined4 local_e4;
  ulonglong local_d0;
  
  uVar14 = _DAT_14c6dae78;
  uVar13 = _DAT_14c6dae70;
  uVar12 = uRam000000014c6dae68;
  uVar11 = _DAT_14c6dae60;
  uVar10 = uRam000000014c6dae58;
  uVar9 = _DAT_14c6dae50;
  uVar8 = uRam000000014c6dae48;
  uVar7 = _DAT_14c6dae40;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  local_3a0 = param_1;
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar21 = *(longlong *)(param_1 + 0x48);
    lVar18 = (longlong)*(int *)(param_1 + 0x50) * 0x1e0 + lVar21;
    lVar16 = 0;
    local_398 = lVar18;
    do {
      lVar23 = *(longlong *)(lVar21 + 0x80);
      if (((lVar23 != 0) && (*(int *)(lVar23 + 0x20) != 0)) &&
         (cVar15 = FUN_144b3e610(lVar23 + 0x90), cVar15 != '\0')) {
        FUN_144c3e1d0(local_348);
        local_34c = 0xffffffff;
        FUN_144c3e6c0(local_348,lVar23,&local_34c);
        local_360 = 0;
        local_358 = 0x8000000000000000;
        if ((longlong)*(int *)(local_3a0 + 0x88) != 0) {
          plVar19 = *(longlong **)(local_3a0 + 0x80);
          plVar22 = plVar19 + (longlong)*(int *)(local_3a0 + 0x88) * 10;
          uVar17 = 0;
          local_390 = lVar23;
          do {
            local_1f8 = uVar7;
            uStack_1f0 = uVar8;
            local_1e8 = uVar9;
            uStack_1e0 = uVar10;
            local_1d8 = uVar11;
            uStack_1d0 = uVar12;
            local_1c8 = uVar13;
            uStack_1c0 = uVar14;
            local_1b8 = 0;
            uStack_1b0 = 0;
            local_1a8 = uVar7;
            uStack_1a0 = uVar8;
            local_198 = uVar9;
            uStack_190 = uVar10;
            local_188 = uVar11;
            uStack_180 = uVar12;
            local_178 = uVar13;
            uStack_170 = uVar14;
            local_168 = 0;
            uStack_160 = 0;
            local_158 = local_148;
            local_150 = 0x8000000400000000;
            local_138 = local_128;
            local_130 = 0x8000000400000000;
            local_118 = 0xbf800000bf800000;
            local_f8 = 0;
            uStack_f0 = 0;
            local_108 = 0;
            uStack_100 = 0;
            local_e8 = 3;
            local_e6 = 1;
            local_e4 = 0xffffffff;
            lVar18 = lVar16 * 0x60;
            pdVar2 = (double *)(*plVar19 + lVar18);
            pdVar3 = (double *)(*plVar19 + 0x10 + lVar18);
            local_208 = (float)*pdVar2 * 0.01;
            fStack_204 = (float)pdVar2[1] * 0.01;
            fStack_200 = (float)*pdVar3 * 0.01;
            fStack_1fc = (float)*pdVar3 * 0.01;
            pdVar2 = (double *)(*plVar19 + 0x18 + lVar18);
            pdVar3 = (double *)(*plVar19 + 0x28 + lVar18);
            local_218 = (float)*pdVar2 * 0.01;
            fStack_214 = (float)pdVar2[1] * 0.01;
            fStack_210 = (float)*pdVar3 * 0.01;
            fStack_20c = (float)*pdVar3 * 0.01;
            pdVar2 = (double *)(*plVar19 + 0x30 + lVar18);
            pdVar3 = (double *)(*plVar19 + 0x40 + lVar18);
            local_228 = (float)*pdVar2 * 0.01;
            fStack_224 = (float)pdVar2[1] * 0.01;
            fStack_220 = (float)*pdVar3 * 0.01;
            fStack_21c = (float)*pdVar3 * 0.01;
            pdVar2 = (double *)(*plVar19 + 0x48 + lVar18);
            pdVar3 = (double *)(*plVar19 + 0x58 + lVar18);
            local_238 = (float)*pdVar2 * 0.01;
            fStack_234 = (float)pdVar2[1] * 0.01;
            fStack_230 = (float)*pdVar3 * 0.01;
            fStack_22c = (float)*pdVar3 * 0.01;
            local_248 = 0;
            uStack_240 = 0x3f800000;
            local_3b0 = &local_248;
            local_3b8 = &local_238;
            FUN_144c50130(&local_1f8,&local_208,&local_218,&local_228);
            local_e8 = CONCAT11(local_e8._1_1_,(char)plVar19[3]);
            local_e6 = 1;
            uVar5 = uVar17 | *(uint *)(plVar19 + 2) | 0x80000000;
            if (0x1f < *(uint *)(plVar19 + 2)) {
              uVar5 = 0xffffffff;
            }
            iVar1 = (int)local_150 + 1;
            if ((int)(local_150._4_4_ & 0x7fffffff) <= (int)local_150) {
              FUN_1401f86b2(&local_158,&PTR_vftable_14c6e47a0,iVar1);
            }
            *(uint *)(local_158 + (longlong)(int)local_150 * 4) = uVar5;
            local_150 = CONCAT44(local_150._4_4_,iVar1);
            uVar5 = uVar17 | *(uint *)((longlong)plVar19 + 0x14) | 0xc0000000;
            if (0x1f < *(uint *)((longlong)plVar19 + 0x14)) {
              uVar5 = 0xffffffff;
            }
            iVar1 = (int)local_130 + 1;
            if ((int)(local_130._4_4_ & 0x7fffffff) <= (int)local_130) {
              FUN_1401f86b2(&local_138,&PTR_vftable_14c6e47a0,iVar1);
            }
            *(uint *)(local_138 + (longlong)(int)local_130 * 4) = uVar5;
            local_130._0_4_ = iVar1;
            FUN_144c502c0(&local_1f8,local_348,&local_360,0x3d4ccccd);
            uVar5 = local_130._4_4_;
            local_130 = (ulonglong)local_130._4_4_ << 0x20;
            if ((-1 < (longlong)(int)uVar5) && (local_138 != (undefined1 *)0x0)) {
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                        (&PTR_vftable_14c6e47a0,local_138,(longlong)(int)uVar5 << 2);
            }
            local_138 = (undefined1 *)0x0;
            local_130 = CONCAT44(0x80000000,(int)local_130);
            uVar6 = local_150 >> 0x20;
            local_150 = local_150 & 0xffffffff00000000;
            lVar18 = (longlong)(int)uVar6;
            if ((-1 < lVar18) && (local_158 != (undefined1 *)0x0)) {
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                        (&PTR_vftable_14c6e47a0,local_158,lVar18 << 2);
            }
            lVar23 = local_390;
            plVar19 = plVar19 + 10;
            uVar17 = uVar17 + 0x40;
          } while (plVar19 != plVar22);
          if ((longlong)(int)local_358 != 0) {
            lVar18 = (longlong)(int)local_358 * 0x90;
            lVar20 = local_360;
            do {
              FUN_144c51350(*(undefined8 *)(lVar21 + 0x80),lVar20);
              lVar20 = lVar20 + 0x90;
              lVar18 = lVar18 + -0x90;
            } while (lVar18 != 0);
          }
        }
        local_378 = 0;
        uStack_370 = 0;
        local_388 = 0;
        uStack_380 = 0;
        FUN_144c515c0(lVar23,&local_388,&local_378);
        lVar18 = local_360;
        if ((longlong)(int)local_358 != 0) {
          lVar23 = (longlong)(int)local_358 * 0x90;
          do {
            *(undefined4 *)(lVar18 + -0x28 + lVar23) = 0;
            lVar20 = (longlong)*(int *)(lVar18 + -0x24 + lVar23);
            if ((-1 < lVar20) && (lVar4 = *(longlong *)(lVar18 + -0x30 + lVar23), lVar4 != 0)) {
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0,lVar4,lVar20 << 2);
            }
            *(undefined8 *)(lVar18 + -0x30 + lVar23) = 0;
            *(undefined4 *)(lVar18 + -0x24 + lVar23) = 0x80000000;
            *(undefined4 *)(lVar18 + -0x48 + lVar23) = 0;
            lVar20 = (longlong)*(int *)(lVar18 + -0x44 + lVar23);
            if ((-1 < lVar20) && (lVar4 = *(longlong *)(lVar18 + -0x50 + lVar23), lVar4 != 0)) {
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0,lVar4,lVar20 << 2);
            }
            *(undefined8 *)(lVar18 + -0x50 + lVar23) = 0;
            *(undefined4 *)(lVar18 + -0x44 + lVar23) = 0x80000000;
            lVar23 = lVar23 + -0x90;
          } while (lVar23 != 0);
        }
        lVar18 = local_398;
        uVar6 = local_358 >> 0x20;
        local_358 = local_358 & 0xffffffff00000000;
        lVar23 = (longlong)(int)uVar6;
        if ((-1 < lVar23) && (local_360 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_360,lVar23 * 0x90);
        }
        FUN_140c3e2cc(local_348);
      }
      lVar16 = lVar16 + 1;
      lVar21 = lVar21 + 0x1e0;
    } while (lVar21 != lVar18);
  }
  if ((local_d0 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14380d398 FUN_14380d398 body=529 status=ok
// SIG undefined FUN_14380d398(void)

void FUN_14380d398(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  char local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_147e46ef6();
    local_48 = '\0';
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = *(undefined4 *)(param_1 + 0x94);
    uStack_84 = *(undefined4 *)(param_1 + 0x98);
    uStack_80 = *(undefined4 *)(param_1 + 0x9c);
    uStack_7c = *(undefined4 *)(param_1 + 0xa0);
    local_78 = *(undefined4 *)(param_1 + 0xa4);
    FUN_147e470ec(&local_a8,param_1 + 0x80);
    FUN_147e4713a(&local_98,param_1 + 0x60);
    iVar3 = *(int *)(param_1 + 0x50);
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3);
    }
    if ((int)uStack_b0._4_4_ < iVar3) {
      FUN_147e4c5ea(&local_b8);
      iVar3 = *(int *)(param_1 + 0x50);
    }
    if (iVar3 != 0) {
      lVar7 = (longlong)iVar3 * 0x1e0;
      lVar5 = *(longlong *)(param_1 + 0x48) + 0x80;
      do {
        uVar1 = uStack_b0;
        lVar6 = (longlong)(int)uStack_b0;
        uVar2 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar2);
        if (uStack_b0._4_4_ < uVar2) {
          FUN_147e4c6d8(&local_b8,uVar1 & 0xffffffff);
        }
        FUN_147e4c65a(lVar6 * 0x48 + local_b8,lVar5);
        lVar5 = lVar5 + 0x1e0;
        lVar7 = lVar7 + -0x1e0;
      } while (lVar7 != 0);
    }
    if (((*(int *)(param_1 + 0xe4) != 0) && (uVar2 = *(uint *)(param_1 + 0xe0), -1 < (int)uVar2)) &&
       ((int)uVar2 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0xe4))) &&
         (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
          (plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0)))) {
        FUN_147e46a0c(plVar4 + 0xca,&local_b8);
        (**(code **)(*plVar4 + 0x540))(plVar4);
      }
    }
    if (local_48 == '\x01') {
      local_48 = '\0';
    }
    FUN_140937fd9(local_98,uStack_90 & 0xffffffff);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_140298e51(local_a8,uStack_a0 & 0xffffffff);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_140938008(local_b8,uStack_b0 & 0xffffffff);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14380d5ab FUN_14380d5ab body=603 status=ok
// SIG undefined FUN_14380d5ab(void)

longlong * FUN_14380d5ab(longlong *param_1,double *param_2,double *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  dVar9 = (param_2[2] + param_2[5]) * 0.5;
  local_88 = (float)((*param_2 + param_2[3]) * 0.5) * 0.01;
  fStack_84 = (float)((param_2[1] + param_2[4]) * 0.5) * 0.01;
  fStack_80 = (float)dVar9 * 0.01;
  fStack_7c = (float)dVar9 * 0.01;
  dVar9 = (param_2[5] - param_2[2]) * 0.5;
  local_98 = (float)((param_2[3] - *param_2) * 0.5) * 0.01;
  fStack_94 = (float)((param_2[4] - param_2[1]) * 0.5) * 0.01;
  fStack_90 = (float)dVar9 * 0.01;
  fStack_8c = (float)dVar9 * 0.01;
  local_d8 = 0x38;
  lVar5 = (*DAT_14c787670)(0,&local_d8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar5,"hkGeometry");
  }
  FUN_144b3e890(lVar5);
  *param_1 = lVar5;
  FUN_144be8ca0(&local_88,&local_98,lVar5,0xffffffff);
  auVar8 = insertps(ZEXT416((uint)(float)*param_3),ZEXT416((uint)(float)param_3[1]),0x10);
  auVar8 = insertps(auVar8,ZEXT416((uint)(float)param_3[2]),0x20);
  local_78 = insertps(auVar8,ZEXT416((uint)(float)param_3[3]),0x30);
  local_d8._4_4_ = (float)param_3[5];
  local_d8._0_4_ = (float)param_3[4];
  fVar10 = (float)local_d8 * 0.01;
  fVar11 = local_d8._4_4_ * 0.01;
  fVar12 = (float)param_3[6] * 0.01;
  fVar13 = (float)param_3[6] * 0.01;
  FUN_144b45650();
  if (*(int *)(lVar5 + 0x20) != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      pfVar1 = (float *)(*(longlong *)(lVar5 + 0x18) + lVar6);
      fVar2 = *pfVar1;
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      pfVar1 = (float *)(*(longlong *)(lVar5 + 0x18) + lVar6);
      *pfVar1 = fVar4 * local_b8 + fVar3 * local_c8 + fVar2 * (float)local_d8 + fVar10;
      pfVar1[1] = fVar4 * fStack_b4 + fVar3 * fStack_c4 + fVar2 * local_d8._4_4_ + fVar11;
      pfVar1[2] = fVar4 * fStack_b0 + fVar3 * fStack_c0 + fVar2 * fStack_d0 + fVar12;
      pfVar1[3] = fVar4 * fStack_ac + fVar3 * fStack_bc + fVar2 * fStack_cc + fVar13;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (uVar7 < *(uint *)(lVar5 + 0x20));
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
  local_a8 = fVar10;
  fStack_a4 = fVar11;
  fStack_a0 = fVar12;
  fStack_9c = fVar13;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14380d808 FUN_14380d808 body=6015 status=ok
// SIG undefined FUN_14380d808(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14380d808(longlong param_1)

{
  int *piVar1;
  float *pfVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined8 uVar12;
  longlong *plVar13;
  char cVar14;
  undefined4 extraout_EAX;
  longlong lVar15;
  double *pdVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  longlong *plVar22;
  ulonglong uVar23;
  longlong lVar24;
  int iVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong *plVar29;
  longlong *plVar30;
  longlong *plVar31;
  longlong *plVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  longlong *plVar37;
  longlong *plVar38;
  undefined8 *puVar39;
  longlong *plVar40;
  longlong lVar41;
  bool bVar42;
  byte bVar43;
  float fVar44;
  double dVar45;
  double dVar46;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar47;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar59;
  double dVar65;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auStack_4d8 [32];
  longlong local_4b8;
  longlong *local_4b0;
  longlong *local_4a8;
  longlong *local_4a0;
  undefined1 *local_498;
  ulonglong uStack_490;
  longlong *local_488;
  longlong *local_480;
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  longlong local_448;
  undefined1 local_438 [16];
  double local_420;
  double local_418;
  double local_410;
  undefined1 local_408 [16];
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined1 local_3e8 [8];
  float fStack_3e0;
  float fStack_3dc;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined1 local_3b8 [16];
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  LOCK();
  *(undefined4 *)(param_1 + 0x18) = 1;
  uVar20 = DAT_14cb1c840;
  UNLOCK();
  if ((((*(int *)(param_1 + 0x6c) != 0) && (uVar19 = *(uint *)(param_1 + 0x68), -1 < (int)uVar19))
      && ((int)uVar19 < DAT_14c9647dc)) &&
     (((plVar22 = (longlong *)
                  ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
       plVar22 != (longlong *)0x0 && ((int)plVar22[2] == *(int *)(param_1 + 0x6c))) &&
      (((*(uint *)(plVar22 + 1) & 0x10200000) == 0 &&
       ((lVar15 = *plVar22, lVar15 != 0 && ((*(uint *)(plVar22 + 1) & 0x10200000) == 0)))))))) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_3f8,uVar20,lVar15);
    plVar22 = uStack_3f0;
    uVar23 = local_3f8;
    if ((local_3f8 == 0) || (uStack_3f0 == (longlong *)0x0)) {
      plVar22 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(uStack_3f0 + 1) = (int)uStack_3f0[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)uStack_3f0 + 0xc) = *(int *)((longlong)uStack_3f0 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar40 = uStack_3f0 + 1;
      *(int *)plVar40 = (int)*plVar40 + -1;
      UNLOCK();
      if ((int)*plVar40 == 0) {
        (**(code **)*uStack_3f0)(uStack_3f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar22 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
    }
    plVar40 = uStack_3f0;
    if (uStack_3f0 != (longlong *)0x0) {
      LOCK();
      plVar31 = uStack_3f0 + 1;
      *(int *)plVar31 = (int)*plVar31 + -1;
      UNLOCK();
      if ((int)*plVar31 == 0) {
        (**(code **)*uStack_3f0)(uStack_3f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar40 + 0x10))(plVar40);
        }
      }
    }
    if (plVar22 != (longlong *)0x0) {
      iVar36 = (int)plVar22[1];
      do {
        plVar40 = (longlong *)0x0;
        if (iVar36 == 0) break;
        LOCK();
        iVar25 = (int)plVar22[1];
        bVar42 = iVar36 == iVar25;
        if (bVar42) {
          *(int *)(plVar22 + 1) = iVar36 + 1;
          iVar25 = iVar36;
        }
        iVar36 = iVar25;
        UNLOCK();
        plVar40 = plVar22;
      } while (!bVar42);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
      if (plVar40 != (longlong *)0x0) {
        if ((((((uVar23 != 0) && (*(int *)(param_1 + 0x6c) != 0)) &&
              (uVar19 = *(uint *)(param_1 + 0x68), -1 < (int)uVar19)) &&
             (((int)uVar19 < DAT_14c9647dc &&
              (plVar22 = (longlong *)
                         ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
              plVar22 != (longlong *)0x0)))) && ((int)plVar22[2] == *(int *)(param_1 + 0x6c))) &&
           ((((*(uint *)(plVar22 + 1) & 0x10200000) == 0 && (*plVar22 != 0)) &&
            ((lVar15 = *(longlong *)(*plVar22 + 0x30), lVar15 != 0 &&
             (*(longlong *)(lVar15 + 0x2b0) != 0)))))) {
          lVar15 = FUN_14477bcf0();
          lVar15 = *(longlong *)(lVar15 + 0x98);
          if (lVar15 != 0) {
            LOCK();
            *(undefined4 *)(param_1 + 0x18) = 0;
            UNLOCK();
            *(float *)(param_1 + 0x84) = *(float *)(lVar15 + 0x48) * 0.01;
            *(float *)(param_1 + 0x88) = *(float *)(lVar15 + 0x4c) * 0.01;
            *(float *)(param_1 + 0x8c) = *(float *)(lVar15 + 0x50) * 0.01;
            *(float *)(param_1 + 0x90) = *(float *)(lVar15 + 0x54) * 0.01;
            *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(lVar15 + 0x58);
            *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(lVar15 + 0x5c);
            *(float *)(param_1 + 0x9c) = *(float *)(lVar15 + 0x60) * 0.01;
            *(float *)(param_1 + 0xb4) = *(float *)(lVar15 + 100) * 0.01;
            *(float *)(param_1 + 0xa0) = *(float *)(lVar15 + 0x68) * 0.01;
            *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(lVar15 + 0x6c);
            *(float *)(param_1 + 0x80) = *(float *)(lVar15 + 0x40) * 0.01;
            local_488 = plVar40;
            lVar15 = FUN_14477bcf0();
            if ((longlong)*(int *)(lVar15 + 0x40) != 0) {
              plVar40 = *(longlong **)(lVar15 + 0x38);
              plVar22 = plVar40 + *(int *)(lVar15 + 0x40);
              do {
                lVar15 = *plVar40;
                if (lVar15 != 0) {
                  lVar28 = *(longlong *)(param_1 + 0x28);
                  lVar41 = (longlong)*(int *)(param_1 + 0x30);
                  if (lVar41 != 0) {
                    uVar23 = 0;
                    do {
                      if (*(longlong *)(lVar28 + uVar23) == lVar15) {
                        if ((int)(~uVar23 >> 3) != 0) goto LAB_14380db83;
                        break;
                      }
                      uVar23 = uVar23 + 8;
                    } while (lVar41 * 8 - uVar23 != 0);
                  }
                  uVar19 = *(int *)(param_1 + 0x30) + 1;
                  *(uint *)(param_1 + 0x30) = uVar19;
                  if (*(uint *)(param_1 + 0x34) < uVar19) {
                    FUN_141806424();
                    lVar28 = *(longlong *)(param_1 + 0x28);
                  }
                  *(longlong *)(lVar28 + lVar41 * 8) = lVar15;
                }
LAB_14380db83:
                plVar40 = plVar40 + 1;
              } while (plVar40 != plVar22);
            }
            iVar36 = *(int *)(param_1 + 0x30);
            if (1 < (longlong)iVar36) {
              uVar23 = *(ulonglong *)(param_1 + 0x28);
              memset(local_3e8,0,0x2f0);
              uStack_3f0 = (longlong *)(uVar23 + (longlong)iVar36 * 8 + -8);
              local_3f8 = uVar23;
              fVar44 = logf((float)iVar36);
              local_3e8._0_4_ = (int)(longlong)(fVar44 + fVar44);
              puVar39 = &local_3f8;
              do {
                plVar40 = (longlong *)*puVar39;
                plVar31 = (longlong *)puVar39[1];
                iVar36 = *(int *)(puVar39 + 2);
                iVar25 = (int)((ulonglong)((longlong)plVar31 - (longlong)plVar40) >> 3);
                uVar23 = (ulonglong)(iVar25 + 1);
                plVar30 = plVar40;
                plVar22 = plVar31;
                if (iVar36 != 0) {
LAB_14380ddea:
                  if (8 < (int)(uint)uVar23) {
                    uVar19 = (uint)uVar23 >> 1;
                    lVar15 = plVar40[uVar19];
                    plVar40[uVar19] = *plVar40;
                    *plVar40 = lVar15;
                    plVar17 = plVar22 + 1;
                    plVar29 = plVar40;
                    do {
                      plVar13 = plVar29 + 1;
                      plVar32 = plVar29 + 1;
                      do {
                        plVar29 = plVar32;
                        plVar37 = plVar13;
                        if (plVar22 < plVar29) break;
                        plVar13 = plVar37 + 1;
                        plVar32 = plVar29 + 1;
                      } while (*(float *)(*plVar29 + 0x30) < *(float *)(*plVar40 + 0x30) ||
                               *(float *)(*plVar29 + 0x30) == *(float *)(*plVar40 + 0x30));
                      plVar13 = plVar17 + -2;
                      do {
                        plVar32 = plVar17;
                        plVar38 = plVar13;
                        plVar17 = plVar32 + -1;
                        if (plVar17 <= plVar40) break;
                        plVar13 = plVar38 + -1;
                      } while (*(float *)(*plVar40 + 0x30) < *(float *)(*plVar17 + 0x30) ||
                               *(float *)(*plVar40 + 0x30) == *(float *)(*plVar17 + 0x30));
                      if (plVar17 < plVar29) goto LAB_14380de84;
                      lVar15 = *plVar29;
                      *plVar29 = *plVar17;
                      *plVar17 = lVar15;
                    } while( true );
                  }
                  if (plVar40 < plVar22) {
                    do {
                      plVar31 = plVar40;
                      if (plVar40 + 1 <= plVar22) {
                        plVar30 = plVar40 + 1;
                        lVar15 = *plVar40;
                        do {
                          fVar44 = *(float *)(*plVar30 + 0x30);
                          lVar28 = *plVar30;
                          plVar17 = plVar30;
                          if (fVar44 < *(float *)(lVar15 + 0x30) ||
                              fVar44 == *(float *)(lVar15 + 0x30)) {
                            lVar28 = lVar15;
                            plVar17 = plVar31;
                          }
                          plVar31 = plVar17;
                          plVar30 = plVar30 + 1;
                          lVar15 = lVar28;
                        } while (plVar30 <= plVar22);
                      }
                      lVar15 = *plVar31;
                      *plVar31 = *plVar22;
                      *plVar22 = lVar15;
                      plVar22 = plVar22 + -1;
                    } while (plVar40 < plVar22);
                  }
                  goto LAB_14380df73;
                }
LAB_14380dc6d:
                iVar36 = (int)uVar23;
                if (iVar36 != 0) {
                  iVar25 = (iVar25 - (iVar25 + -1 >> 0x1f)) + -1 >> 1;
                  iVar35 = iVar25;
joined_r0x00014380dc90:
                  do {
                    iVar34 = iVar25 * 2 + 1;
                    if (iVar34 < iVar36) {
                      iVar33 = iVar25 * 2 + 2;
                      if ((iVar33 < iVar36) &&
                         (*(float *)(plVar40[iVar34] + 0x30) < *(float *)(plVar40[iVar33] + 0x30) ||
                          *(float *)(plVar40[iVar34] + 0x30) == *(float *)(plVar40[iVar33] + 0x30)))
                      {
                        iVar34 = iVar33;
                      }
                      lVar15 = plVar40[iVar25];
                      fVar44 = *(float *)(plVar40[iVar34] + 0x30);
                      pfVar2 = (float *)(lVar15 + 0x30);
                      if (*pfVar2 <= fVar44 && fVar44 != *pfVar2) {
                        plVar40[iVar25] = plVar40[iVar34];
                        plVar40[iVar34] = lVar15;
                        iVar25 = iVar34;
                        goto joined_r0x00014380dc90;
                      }
                    }
                    bVar42 = iVar35 != 0;
                    iVar25 = iVar35 + -1;
                    iVar35 = iVar25;
                  } while (bVar42);
                  if (1 < iVar36) {
                    lVar15 = *plVar40;
                    *plVar40 = plVar40[uVar23 - 1];
                    plVar40[uVar23 - 1] = lVar15;
                    if (iVar36 != 2) {
                      do {
                        uVar26 = uVar23 - 1;
                        iVar36 = 0;
                        iVar35 = 1;
                        iVar25 = 0;
                        do {
                          iVar36 = iVar36 + 2;
                          iVar34 = iVar35;
                          if (((longlong)iVar36 < (longlong)uVar26) &&
                             (*(float *)(plVar40[iVar35] + 0x30) <
                              *(float *)(plVar40[iVar36] + 0x30) ||
                              *(float *)(plVar40[iVar35] + 0x30) ==
                              *(float *)(plVar40[iVar36] + 0x30))) {
                            iVar34 = iVar36;
                          }
                          lVar15 = plVar40[iVar25];
                          fVar44 = *(float *)(plVar40[iVar34] + 0x30);
                          pfVar2 = (float *)(lVar15 + 0x30);
                          if (fVar44 < *pfVar2 || fVar44 == *pfVar2) break;
                          plVar40[iVar25] = plVar40[iVar34];
                          plVar40[iVar34] = lVar15;
                          iVar36 = iVar34 * 2;
                          iVar35 = iVar34 * 2 + 1;
                          iVar25 = iVar34;
                        } while ((longlong)iVar35 < (longlong)uVar26);
                        lVar15 = *plVar40;
                        *plVar40 = plVar40[uVar23 - 2];
                        plVar40[uVar23 - 2] = lVar15;
                        uVar23 = uVar26;
                      } while (2 < uVar26);
                    }
                  }
                }
LAB_14380df73:
                puVar39 = puVar39 + -3;
              } while (&local_3f8 <= puVar39);
            }
            local_438 = ZEXT816(0);
            iVar36 = *(int *)(param_1 + 0x78);
            local_4b8 = param_1;
            if (iVar36 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar36);
            }
            if (iVar36 != 0) {
              FUN_143829a88(local_438);
              auVar55 = _DAT_149935300;
              auVar50 = _DAT_149934d80;
              if ((longlong)*(int *)(local_4b8 + 0x78) != 0) {
                plVar40 = *(longlong **)(local_4b8 + 0x70);
                plVar22 = plVar40 + *(int *)(local_4b8 + 0x78);
                local_4b0 = plVar22;
                do {
                  plVar31 = (longlong *)*plVar40;
                  if (plVar31 != (longlong *)0x0) {
                    if ((longlong)(int)plVar31[0xcb] != 0) {
                      lVar15 = (longlong)(int)plVar31[0xcb] * 0x48;
                      puVar39 = (undefined8 *)(plVar31[0xca] + 0x38);
                      do {
                        FUN_140938055(*puVar39);
                        *(undefined4 *)(puVar39 + 1) = 0;
                        if (*(int *)((longlong)puVar39 + 0xc) != 0) {
                          FUN_141807496(puVar39);
                        }
                        puVar39 = puVar39 + 9;
                        lVar15 = lVar15 + -0x48;
                      } while (lVar15 != 0);
                    }
                    iVar36 = (**(code **)(*plVar31 + 0x9f8))(plVar31);
                    pdVar16 = (double *)(*(longlong *)(plVar31[0x15] + 0x1c8) + 0x240);
                    if (*(longlong *)(plVar31[0x15] + 0x1c8) == 0) {
                      pdVar16 = (double *)&DAT_14c846480;
                    }
                    dVar47 = *pdVar16;
                    dVar3 = pdVar16[1];
                    dVar45 = dVar47 * 0.0 + dVar3 * -0.0;
                    bVar43 = *(char *)((longlong)plVar31 + 0x1fb) == '\x02';
                    if ((!(bool)bVar43) &&
                       (dVar66 = dVar3 - pdVar16[2] * 0.0, dVar59 = pdVar16[2] * 0.0 - dVar47,
                       (dVar45 + dVar45) * pdVar16[3] + 1.0 +
                       ((dVar59 + dVar59) * dVar47 - (dVar66 + dVar66) * dVar3) < 0.998)) {
                      bVar43 = FUN_140cee66a(plVar31);
                      bVar43 = bVar43 ^ 1;
                    }
                    if ((iVar36 == 8 & bVar43) == 0) {
                      FUN_140b03ca2(plVar31,local_478);
                      dVar47 = (double)plVar31[0x48];
                      dVar3 = (double)plVar31[0x49];
                      dVar45 = (double)plVar31[0x4a];
                      dVar59 = (double)plVar31[0x4b];
                      local_3d8 = plVar31[0x4c];
                      uStack_3d0 = plVar31[0x4d];
                      local_3c8 = plVar31[0x4e];
                      uStack_3c0 = plVar31[0x4f];
                      local_3b8 = auVar50;
                      local_3a8 = 0x3ff0000000000000;
                      uStack_3a0 = 0;
                      dVar66 = dVar45 * dVar45 + dVar47 * dVar47;
                      dVar65 = dVar59 * dVar59 + dVar3 * dVar3;
                      auVar60._0_8_ = dVar66 + dVar65;
                      auVar60._8_8_ = dVar66 + dVar65;
                      auVar57._8_8_ = -(ulonglong)(1e-08 <= auVar60._8_8_);
                      auVar57._0_8_ = -(ulonglong)(1e-08 <= auVar60._0_8_);
                      auVar61 = sqrtpd(auVar60,auVar60);
                      auVar61 = divpd(auVar50,auVar61);
                      auVar67._0_8_ = auVar61._0_8_ * dVar45;
                      auVar67._8_8_ = auVar61._8_8_ * dVar59;
                      _local_3e8 = blendvpd(auVar55,auVar67,auVar57);
                      local_3f8 = (ulonglong)(dVar47 * auVar61._0_8_) &
                                  -(ulonglong)(1e-08 <= auVar60._0_8_);
                      uStack_3f0 = (longlong *)
                                   ((ulonglong)(dVar3 * auVar61._8_8_) &
                                   -(ulonglong)(1e-08 <= auVar60._8_8_));
                      uVar20 = local_438._8_4_;
                      lVar15 = (longlong)(int)local_438._8_4_;
                      uVar19 = local_438._8_4_ + 1;
                      local_438._8_4_ = uVar19;
                      if ((uint)local_438._12_4_ < uVar19) {
                        FUN_143829bc6(local_438,uVar20);
                      }
                      uVar12 = local_438._0_8_;
                      plVar30 = (longlong *)(local_438._0_8_ + lVar15 * 0x58);
                      plVar30[9] = 0;
                      plVar30[10] = 0;
                      plVar30[7] = 0;
                      plVar30[8] = 0;
                      plVar30[5] = 0;
                      plVar30[6] = 0;
                      plVar30[3] = 0;
                      plVar30[4] = 0;
                      plVar30[1] = 0;
                      plVar30[2] = 0;
                      *plVar30 = (longlong)plVar31;
                      *(bool *)((longlong)plVar30 + 0x54) = iVar36 == 5;
                      *(byte *)((longlong)plVar30 + 0x56) = bVar43;
                      plVar30[3] = local_478._0_8_;
                      plVar30[4] = local_478._8_8_;
                      *(undefined1 (*) [16])(plVar30 + 5) = local_468;
                      *(undefined1 (*) [16])(plVar30 + 7) = local_458;
                      plVar30[9] = local_448;
                      *(int *)(plVar30 + 10) = (int)plVar31[0xd0];
                      FUN_140298df4(plVar30 + 1);
                      plVar22 = local_4b0;
                      if ((longlong)(int)plVar30[2] != 0) {
                        lVar15 = *(longlong *)(uVar12 + 8 + lVar15 * 0x58);
                        lVar28 = (longlong)(int)plVar30[2] * 0x50;
                        do {
                          FUN_14380b146(lVar15);
                          lVar15 = lVar15 + 0x50;
                          lVar28 = lVar28 + -0x50;
                          plVar22 = local_4b0;
                        } while (lVar28 != 0);
                      }
                    }
                  }
                  plVar40 = plVar40 + 1;
                } while (plVar40 != plVar22);
              }
            }
            plVar22 = (longlong *)(longlong)(int)local_438._8_4_;
            if (1 < (longlong)plVar22) {
              local_480 = (longlong *)(ulonglong)(local_438._8_4_ - 1);
              local_4a8 = (longlong *)&DAT_00000001;
              plVar40 = (longlong *)0x0;
              do {
                local_4a0 = plVar40;
                if (*(char *)(local_438._0_8_ + 0x56 + (longlong)plVar40 * 0x58) == '\0') {
                  plVar31 = (longlong *)(local_438._0_8_ + (longlong)plVar40 * 0x58);
                  local_4b0 = plVar31 + 3;
                  dVar46 = (double)(*(float *)(local_4b8 + 0x80) * 100.0);
                  dVar47 = (double)plVar31[8];
                  dVar3 = (double)plVar31[7];
                  dVar45 = (double)plVar31[6];
                  dVar59 = (double)plVar31[5];
                  dVar66 = (double)plVar31[3];
                  dVar65 = (double)plVar31[4];
                  local_498 = (undefined1 *)((longlong)plVar31 + 0x55);
                  plVar40 = local_4a8;
LAB_14380e3c3:
                  if (*(char *)(local_438._0_8_ + 0x56 + (longlong)plVar40 * 0x58) == '\0') {
                    lVar15 = (longlong)*(int *)(*plVar31 + 0x640);
                    if (lVar15 != 0) {
                      plVar29 = (longlong *)(local_438._0_8_ + (longlong)plVar40 * 0x58);
                      dVar48 = (double)(*(float *)(local_4b8 + 0x80) * 100.0);
                      plVar17 = *(longlong **)(*plVar31 + 0x638);
                      plVar30 = plVar17 + lVar15;
                      do {
                        if (*plVar17 != 0) {
                          lVar15 = (longlong)*(int *)(*plVar29 + 0x640);
                          if (lVar15 != 0) {
                            lVar28 = 0;
                            do {
                              if (*(longlong *)(*(longlong *)(*plVar29 + 0x638) + lVar28) ==
                                  *plVar17) {
                                if ((int)plVar31[10] != (int)plVar29[10]) goto LAB_14380e61d;
                                if (*(char *)((longlong)plVar31 + 0x54) != '\x01') {
                                  if (*(char *)((longlong)plVar29 + 0x54) == '\0')
                                  goto LAB_14380e61d;
                                  if ((((double)plVar29[3] - dVar48 <= dVar45 + dVar46) &&
                                      (dVar66 - dVar46 <= (double)plVar29[6] + dVar48)) &&
                                     (((double)plVar29[4] - dVar48 <= dVar3 + dVar46 &&
                                      (((dVar65 - dVar46 <= (double)plVar29[7] + dVar48 &&
                                        ((double)plVar29[5] - dVar48 <= dVar47 + dVar46)) &&
                                       (puVar18 = local_498,
                                       dVar59 - dVar46 <= (double)plVar29[8] + dVar48))))))
                                  goto LAB_14380e61a;
                                  lVar15 = plVar29[2];
                                  if ((longlong)(int)lVar15 == 0) goto LAB_14380e572;
                                  lVar28 = 0;
                                  goto LAB_14380e553;
                                }
                                if (*(char *)((longlong)plVar29 + 0x54) != '\0') goto LAB_14380e61d;
                                if ((((dVar66 - dVar46 <= (double)plVar29[6] + dVar48) &&
                                     ((double)plVar29[3] - dVar48 <= dVar45 + dVar46)) &&
                                    (dVar65 - dVar46 <= (double)plVar29[7] + dVar48)) &&
                                   ((((double)plVar29[4] - dVar48 <= dVar3 + dVar46 &&
                                     (dVar59 - dVar46 <= (double)plVar29[8] + dVar48)) &&
                                    ((double)plVar29[5] - dVar48 <= dVar47 + dVar46))))
                                goto LAB_14380e4f5;
                                lVar15 = plVar29[2];
                                if ((longlong)(int)lVar15 == 0) goto LAB_14380e5df;
                                lVar28 = 0;
                                goto LAB_14380e5c0;
                              }
                              lVar28 = lVar28 + 8;
                            } while (lVar15 * 8 != lVar28);
                          }
                        }
                        plVar17 = plVar17 + 1;
                      } while (plVar17 != plVar30);
                    }
                  }
                  goto LAB_14380e61d;
                }
LAB_14380e629:
                plVar40 = (longlong *)((longlong)local_4a0 + 1);
                local_4a8 = (longlong *)((longlong)local_4a8 + 1);
              } while (plVar40 != local_480);
            }
            if (local_438._8_4_ == 0) {
              uVar20 = 0;
            }
            else {
              local_4a8 = (longlong *)(local_438._0_8_ + (longlong)(int)local_438._8_4_ * 0xb * 8);
              local_4a0 = (longlong *)(local_4b8 + 0x38);
              local_498 = (undefined1 *)(_DAT_14c6dae80 ^ 0x8000000080000000);
              uStack_490 = uRam000000014c6dae88 ^ 0x8000000080000000;
              plVar22 = (longlong *)local_438._0_8_;
              lVar15 = local_4b8;
              do {
                if ((*(char *)((longlong)plVar22 + 0x54) != '\0') ||
                   (*(char *)((longlong)plVar22 + 0x55) == '\x01')) {
                  lVar28 = *plVar22;
                  dVar45 = *(double *)(lVar28 + 0x240);
                  dVar59 = *(double *)(lVar28 + 0x248);
                  dVar47 = SUB168(*(undefined1 (*) [16])(lVar28 + 0x250),0);
                  dVar3 = SUB168(*(undefined1 (*) [16])(lVar28 + 0x250),8);
                  lVar9 = *(longlong *)(lVar28 + 0x260);
                  lVar10 = *(longlong *)(lVar28 + 0x268);
                  lVar41 = *(longlong *)(lVar28 + 0x270);
                  lVar24 = *(longlong *)(lVar28 + 0x278);
                  dVar66 = dVar47 * dVar47 + dVar45 * dVar45;
                  dVar65 = dVar3 * dVar3 + dVar59 * dVar59;
                  auVar55._0_8_ = dVar66 + dVar65;
                  auVar55._8_8_ = dVar66 + dVar65;
                  auVar50._8_8_ = -(ulonglong)(1e-08 <= auVar55._8_8_);
                  auVar50._0_8_ = -(ulonglong)(1e-08 <= auVar55._0_8_);
                  auVar57 = sqrtpd(auVar55,auVar55);
                  auVar61._8_8_ = 0x3ff0000000000000;
                  auVar61._0_8_ = 0x3ff0000000000000;
                  auVar57 = divpd(auVar61,auVar57);
                  auVar62._0_8_ = auVar57._0_8_ * dVar47;
                  auVar62._8_8_ = auVar57._8_8_ * dVar3;
                  dVar47 = (double)((ulonglong)(dVar45 * auVar57._0_8_) &
                                   -(ulonglong)(1e-08 <= auVar55._0_8_));
                  dVar3 = (double)((ulonglong)(dVar59 * auVar57._8_8_) &
                                  -(ulonglong)(1e-08 <= auVar55._8_8_));
                  auVar68 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar62,auVar50);
                  cVar14 = FUN_140cee66a();
                  lVar28 = *plVar22;
                  if ((cVar14 != '\0') &&
                     (local_478._8_4_ = SUB84(dVar3,0), local_478._0_8_ = dVar47,
                     local_478._12_4_ = (int)((ulonglong)dVar3 >> 0x20),
                     dVar45 = auVar68._0_8_ * 0.0, dVar59 = dVar3 - dVar45,
                     dVar66 = dVar47 * 0.0 + dVar3 * -0.0, dVar45 = dVar45 - dVar47,
                     local_468 = auVar68,
                     ((dVar45 + dVar45) * dVar47 - (dVar59 + dVar59) * dVar3) +
                     auVar68._8_8_ * (dVar66 + dVar66) + 1.0 < 0.998)) {
                    uVar20 = SUB84(local_478,0);
                    FUN_1448052ee();
                    auVar49._8_8_ = 0;
                    auVar49._0_8_ = local_420;
                    auVar50 = divpd(auVar49,_DAT_1499387d0);
                    auVar54._8_8_ = 0;
                    auVar54._0_8_ = local_410;
                    auVar55 = divpd(auVar54,_DAT_1499387d0);
                    auVar50 = roundpd(auVar50,auVar50,3);
                    auVar55 = roundpd(auVar55,auVar55,3);
                    dVar65 = (local_420 - auVar50._0_8_ * (double)DAT_1499387d0) *
                             0.008726646259971648;
                    dVar46 = (0.0 - auVar50._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
                    dVar47 = (local_410 - auVar55._0_8_ * (double)DAT_1499387d0) *
                             0.008726646259971648;
                    dVar3 = (0.0 - auVar55._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
                    dVar45 = sin(dVar65);
                    dVar59 = sin(dVar46);
                    dVar66 = sin(dVar47);
                    sin(dVar3);
                    dVar65 = cos(dVar65);
                    dVar46 = cos(dVar46);
                    dVar47 = cos(dVar47);
                    cos(dVar3);
                    local_468._0_8_ = -(dVar46 * dVar45 * dVar66) + dVar59 * dVar65 * dVar47;
                    local_468._8_8_ = dVar59 * dVar45 * dVar66 + dVar46 * dVar65 * dVar47;
                    local_478._0_8_ = dVar45 * dVar59 * dVar47 - dVar65 * dVar46 * dVar66;
                    auVar51._8_8_ = -(dVar45 * dVar46 * dVar47) - dVar65 * dVar59 * dVar66;
                    local_478._8_8_ = auVar51._8_8_;
                    if (*(char *)(lVar28 + 0x6c0) == '\x01') {
                      auVar56 = *(undefined1 (*) [16])(lVar28 + 0x6b0);
                      dVar47 = auVar56._8_8_;
                      auVar4._8_8_ = -(ulonglong)
                                      (9.999999747378752e-05 <
                                      ABS(*(double *)(lVar28 + 0x6a8) - auVar51._8_8_));
                      auVar4._0_8_ = -(ulonglong)
                                      (9.999999747378752e-05 <
                                      ABS(*(double *)(lVar28 + 0x6a0) - (double)local_478._0_8_));
                      uVar19 = movmskpd(extraout_EAX,auVar4);
                      auVar63._8_8_ =
                           -(ulonglong)
                            (9.999999747378752e-05 < ABS(dVar47 - (double)local_468._8_8_));
                      auVar63._0_8_ =
                           -(ulonglong)
                            (9.999999747378752e-05 < ABS(auVar56._0_8_ - (double)local_468._0_8_));
                      iVar36 = movmskpd(uVar20,auVar63);
                      uVar21 = iVar36 << 2 | uVar19;
                      if (uVar21 != 0) {
                        auVar56._0_8_ = ABS(auVar56._0_8_ + (double)local_468._0_8_);
                        auVar56._8_8_ = ABS(dVar47 + (double)local_468._8_8_);
                        auVar64._8_8_ =
                             -(ulonglong)
                              (DAT_149e1ee70._8_8_ <
                              ABS(*(double *)(lVar28 + 0x6a8) + auVar51._8_8_));
                        auVar64._0_8_ =
                             -(ulonglong)
                              ((double)DAT_149e1ee70 <
                              ABS(*(double *)(lVar28 + 0x6a0) + (double)local_478._0_8_));
                        iVar36 = movmskpd(uVar19,auVar64);
                        auVar58._8_8_ = -(ulonglong)(DAT_149e1ee70._8_8_ < auVar56._8_8_);
                        auVar58._0_8_ = -(ulonglong)((double)DAT_149e1ee70 < auVar56._0_8_);
                        uVar19 = movmskpd(uVar21,auVar58);
                        if ((uVar19 & 0x3fffffff) != 0 || iVar36 != 0) goto LAB_14380e939;
                      }
                    }
                    else {
                      *(undefined8 *)(lVar28 + 0x6b0) = local_468._0_8_;
                      *(undefined8 *)(lVar28 + 0x6b8) = local_468._8_8_;
                      *(undefined8 *)(lVar28 + 0x6a0) = local_478._0_8_;
                      *(double *)(lVar28 + 0x6a8) = auVar51._8_8_;
                      *(undefined1 *)(lVar28 + 0x6c0) = 1;
LAB_14380e939:
                      auVar56 = ZEXT416((uint)(float)(double)local_468._0_8_);
                      auVar51._0_8_ = auVar51._8_8_;
                      auVar52._4_12_ = auVar51._4_12_;
                      auVar52._0_4_ = (float)auVar51._8_8_;
                      auVar50 = insertps(ZEXT416((uint)(float)(double)local_478._0_8_),auVar52,0x10)
                      ;
                      auVar50 = insertps(auVar50,auVar56,0x20);
                      local_408 = insertps(auVar50,ZEXT416((uint)(float)(double)local_468._8_8_),
                                           0x30);
                      local_3f8 = 0;
                      FUN_144b45650(&local_3f8);
                      local_3c8 = 0;
                      uStack_3c0 = 0;
                      if ((longlong)*(int *)(lVar28 + 0x658) != 0) {
                        plVar31 = *(longlong **)(lVar28 + 0x650);
                        plVar40 = plVar31 + (longlong)*(int *)(lVar28 + 0x658) * 9;
                        do {
                          lVar28 = *plVar31;
                          if (lVar28 != 0) {
                            iVar36 = *(int *)(lVar28 + 0x40);
                            if ((longlong)iVar36 < 1) {
                              auVar56._8_8_ = (double)uRam000000014c6dae88;
                              auVar56._0_8_ = (double)_DAT_14c6dae80;
                              auVar53._8_8_ = uStack_490;
                              auVar53._0_8_ = local_498;
                            }
                            else {
                              lVar24 = *(longlong *)(lVar28 + 0x38);
                              lVar27 = 0;
                              auVar53._8_8_ = uStack_490;
                              auVar53._0_8_ = local_498;
                              auVar56._8_8_ = (double)uRam000000014c6dae88;
                              auVar56._0_8_ = (double)_DAT_14c6dae80;
                              do {
                                pfVar2 = (float *)(lVar24 + lVar27);
                                fVar44 = *pfVar2;
                                fVar7 = pfVar2[1];
                                fVar8 = pfVar2[2];
                                pfVar2 = (float *)(lVar24 + lVar27);
                                *pfVar2 = fVar8 * (float)local_3d8 +
                                          fVar7 * (float)local_3e8._0_4_ + fVar44 * (float)local_3f8
                                          + (float)local_3c8;
                                pfVar2[1] = fVar8 * local_3d8._4_4_ +
                                            fVar7 * (float)local_3e8._4_4_ +
                                            fVar44 * local_3f8._4_4_ + local_3c8._4_4_;
                                pfVar2[2] = fVar8 * (float)uStack_3d0 +
                                            fVar7 * fStack_3e0 + fVar44 * (float)uStack_3f0 +
                                            (float)uStack_3c0;
                                pfVar2[3] = fVar8 * uStack_3d0._4_4_ +
                                            fVar7 * fStack_3dc + fVar44 * uStack_3f0._4_4_ +
                                            uStack_3c0._4_4_;
                                lVar28 = *plVar31;
                                lVar24 = *(longlong *)(lVar28 + 0x38);
                                auVar56 = minps(auVar56,*(undefined1 (*) [16])(lVar24 + lVar27));
                                auVar53 = maxps(auVar53,*(undefined1 (*) [16])(lVar24 + lVar27));
                                lVar27 = lVar27 + 0x10;
                              } while ((longlong)iVar36 * 0x10 != lVar27);
                            }
                            *(undefined1 (*) [16])(lVar28 + 0x90) = auVar56;
                            *(undefined1 (*) [16])(lVar28 + 0xa0) = auVar53;
                            lVar28 = *(longlong *)(*plVar31 + 0xd8);
                            *(undefined8 *)(*plVar31 + 0xd8) = 0;
                            if (lVar28 != 0) {
                              FUN_144b3f230();
                            }
                          }
                          plVar31 = plVar31 + 9;
                        } while (plVar31 != plVar40);
                      }
                    }
                    auVar6._8_8_ = 0;
                    auVar6._0_8_ = local_418;
                    auVar50 = divpd(auVar6 << 0x40,_DAT_1499387d0);
                    auVar50 = roundpd(auVar50,auVar50,3);
                    auVar55 = roundpd(auVar56,_DAT_149931140,3);
                    dVar65 = (0.0 - auVar50._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
                    dVar46 = (local_418 - auVar50._8_8_ * DAT_1499387d0._8_8_) *
                             0.008726646259971648;
                    dVar47 = (0.0 - auVar55._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
                    dVar3 = (0.0 - auVar55._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
                    dVar45 = sin(dVar65);
                    dVar59 = sin(dVar46);
                    dVar66 = sin(dVar47);
                    sin(dVar3);
                    dVar65 = cos(dVar65);
                    dVar46 = cos(dVar46);
                    dVar48 = cos(dVar47);
                    cos(dVar3);
                    auVar68._0_8_ = -(dVar46 * dVar45 * dVar66) + dVar59 * dVar65 * dVar48;
                    auVar68._8_8_ = dVar59 * dVar45 * dVar66 + dVar46 * dVar65 * dVar48;
                    dVar47 = dVar45 * dVar59 * dVar48 - dVar65 * dVar46 * dVar66;
                    dVar3 = -(dVar45 * dVar46 * dVar48) - dVar65 * dVar59 * dVar66;
                    lVar24 = 0;
                    lVar28 = *plVar22;
                  }
                  if ((longlong)*(int *)(lVar28 + 0x658) != 0) {
                    plVar40 = *(longlong **)(lVar28 + 0x650);
                    local_4b0 = plVar22 + 1;
                    lVar28 = (longlong)*(int *)(lVar28 + 0x658) * 0x48;
                    bVar42 = false;
                    iVar36 = 0;
                    do {
                      iVar25 = FUN_14038d05c(plVar40[6]);
                      if (((iVar25 != -1) && (lVar27 = *plVar40, lVar27 != 0)) &&
                         ((plVar40[3] != 0 &&
                          (((*(int *)(lVar27 + 0x20) != 0 &&
                            (cVar14 = FUN_144b3e610(lVar27 + 0x90), cVar14 != '\0')) &&
                           (plVar40[6] != 0)))))) {
                        bVar11 = !bVar42;
                        bVar42 = true;
                        if (bVar11) {
                          if (*(char *)((longlong)plVar22 + 0x54) == '\x01') {
                            iVar35 = DAT_14cb1c7e8 + 1;
                            *(int *)(*plVar22 + 0x630) = DAT_14cb1c7e8;
                            DAT_14cb1c7e8 = iVar35;
                          }
                          else {
                            bVar42 = false;
                          }
                        }
                        iVar35 = *(int *)(lVar15 + 0x40);
                        uVar19 = iVar35 + 1;
                        *(uint *)(lVar15 + 0x40) = uVar19;
                        if (*(uint *)(lVar15 + 0x44) < uVar19) {
                          FUN_141807eaa(local_4a0);
                        }
                        lVar15 = *local_4a0;
                        lVar27 = (longlong)iVar35 * 0xa0;
                        memset((void *)(lVar27 + lVar15),0,0xa0);
                        plVar31 = (longlong *)(lVar27 + lVar15);
                        plVar31[4] = 0;
                        plVar31[5] = 0x3ff0000000000000;
                        plVar31[6] = 0;
                        plVar31[7] = 0;
                        plVar31[8] = 0;
                        plVar31[9] = 0;
                        *(undefined4 *)(plVar31 + 10) = 0;
                        *(undefined4 *)((longlong)plVar31 + 0x54) = 0x3ff00000;
                        *(undefined4 *)(plVar31 + 0xb) = 0;
                        *(undefined4 *)((longlong)plVar31 + 0x5c) = 0x3ff00000;
                        *(undefined1 (*) [16])(plVar31 + 0xc) = ZEXT816(0x3ff0000000000000);
                        plVar31[0xe] = 0;
                        plVar31[0xf] = 0;
                        plVar31[0x10] = 0;
                        plVar31[0x11] = -0x40800000;
                        plVar31[0x12] = -1;
                        *plVar31 = *plVar22;
                        auVar5._8_4_ = SUB84(dVar3,0);
                        auVar5._0_8_ = dVar47;
                        auVar5._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
                        *(undefined1 (*) [16])(plVar31 + 2) = auVar5;
                        *(undefined1 (*) [16])(plVar31 + 4) = auVar68;
                        plVar31[6] = lVar9;
                        plVar31[7] = lVar10;
                        plVar31[8] = lVar41;
                        plVar31[9] = lVar24;
                        *(undefined4 *)(plVar31 + 10) = 0;
                        *(undefined4 *)((longlong)plVar31 + 0x54) = 0x3ff00000;
                        *(undefined4 *)(plVar31 + 0xb) = 0;
                        *(undefined4 *)((longlong)plVar31 + 0x5c) = 0x3ff00000;
                        *(undefined1 (*) [16])(plVar31 + 0xc) = ZEXT816(0x3ff0000000000000);
                        *(undefined4 *)(plVar31 + 0x11) =
                             *(undefined4 *)
                              (plVar40[6] + 0x30 + (ulonglong)*(byte *)(plVar40[6] + 0x3c) * 4);
                        *(int *)((longlong)plVar31 + 0x94) =
                             *(int *)(*plVar22 + 0x630) * 100 + iVar25;
                        *(int *)(plVar31 + 0x12) = iVar36;
                        *(int *)((longlong)plVar31 + 0x8c) = iVar25;
                        *(undefined1 *)((longlong)plVar31 + 0x9c) =
                             *(undefined1 *)((longlong)plVar22 + 0x56);
                        *(undefined1 *)((longlong)plVar31 + 0x9d) =
                             *(undefined1 *)((longlong)plVar22 + 0x54);
                        FUN_140298df4(plVar31 + 0xf);
                        *(int *)(plVar31 + 0x13) = (int)plVar22[10];
                        plVar31[0xe] = (longlong)plVar40;
                        lVar15 = local_4b8;
                        if ((*(char *)((longlong)plVar22 + 0x54) == '\x01') &&
                           (lVar27 = *(longlong *)(*plVar40 + 0xe0),
                           *(undefined8 *)(*plVar40 + 0xe0) = 0, lVar27 != 0)) {
                          FUN_144b3f230();
                          lVar15 = local_4b8;
                        }
                      }
                      iVar36 = iVar36 + 1;
                      plVar40 = plVar40 + 9;
                      lVar28 = lVar28 + -0x48;
                    } while (lVar28 != 0);
                  }
                }
                plVar22 = plVar22 + 0xb;
              } while (plVar22 != local_4a8);
              uVar20 = local_438._8_4_;
            }
            FUN_143829a4d(local_438._0_8_,uVar20);
            plVar40 = local_488;
            if (local_438._0_8_ != 0) {
              FUN_1400020a8();
            }
          }
        }
        LOCK();
        plVar22 = plVar40 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*plVar40)(plVar40);
          LOCK();
          piVar1 = (int *)((longlong)plVar40 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar40 + 0x10))(plVar40);
          }
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_4d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14380de84:
  lVar15 = *plVar40;
  *plVar40 = *plVar17;
  *plVar17 = lVar15;
  iVar36 = iVar36 + -1;
  plVar32 = plVar32 + -2;
  if ((longlong)plVar38 - (longlong)plVar30 < (longlong)plVar31 - (longlong)plVar37) {
    if (plVar29 < plVar22) {
      *puVar39 = plVar29;
      puVar39[1] = plVar22;
      *(int *)(puVar39 + 2) = iVar36;
      puVar39 = puVar39 + 3;
    }
    plVar37 = plVar40;
    plVar31 = plVar38;
    if (plVar17 <= plVar40 + 1) goto LAB_14380df73;
  }
  else {
    if (plVar40 + 1 < plVar17) {
      *puVar39 = plVar40;
      puVar39[1] = plVar32;
      *(int *)(puVar39 + 2) = iVar36;
      puVar39 = puVar39 + 3;
    }
    plVar40 = plVar29;
    plVar32 = plVar22;
    plVar31 = plVar22;
    if (plVar22 <= plVar29) goto LAB_14380df73;
  }
  iVar25 = (int)((ulonglong)((longlong)plVar31 - (longlong)plVar37) >> 3);
  uVar23 = (ulonglong)(iVar25 + 1);
  plVar30 = plVar37;
  plVar22 = plVar32;
  if (iVar36 == 0) goto LAB_14380dc6d;
  goto LAB_14380ddea;
  while (lVar28 = lVar28 + 0x50, (longlong)(int)lVar15 * 0x50 != lVar28) {
LAB_14380e5c0:
    cVar14 = FUN_1438192b1(local_4b0);
    if (cVar14 != '\0') goto LAB_14380e4f5;
  }
LAB_14380e5df:
  lVar15 = plVar31[2];
  if ((longlong)(int)lVar15 != 0) {
    lVar28 = 0;
    do {
      cVar14 = FUN_1438192b1(plVar29 + 3);
      if (cVar14 != '\0') goto LAB_14380e4f5;
      lVar28 = lVar28 + 0x50;
    } while ((longlong)(int)lVar15 * 0x50 != lVar28);
  }
  goto LAB_14380e61d;
LAB_14380e4f5:
  puVar18 = (undefined1 *)((longlong)plVar29 + 0x55);
LAB_14380e61a:
  *puVar18 = 1;
  goto LAB_14380e61d;
  while (lVar28 = lVar28 + 0x50, (longlong)(int)lVar15 * 0x50 != lVar28) {
LAB_14380e553:
    cVar14 = FUN_1438192b1(local_4b0);
    puVar18 = local_498;
    if (cVar14 != '\0') goto LAB_14380e61a;
  }
LAB_14380e572:
  lVar15 = plVar31[2];
  if ((longlong)(int)lVar15 != 0) {
    lVar28 = 0;
    do {
      cVar14 = FUN_1438192b1(plVar29 + 3);
      puVar18 = local_498;
      if (cVar14 != '\0') goto LAB_14380e61a;
      lVar28 = lVar28 + 0x50;
    } while ((longlong)(int)lVar15 * 0x50 != lVar28);
  }
LAB_14380e61d:
  plVar40 = (longlong *)((longlong)plVar40 + 1);
  if (plVar40 == plVar22) goto LAB_14380e629;
  goto LAB_14380e3c3;
}



// FUNCTION 14380ef8a FUN_14380ef8a body=3092 status=ok
// SIG undefined FUN_14380ef8a(void)

void FUN_14380ef8a(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  uint *puVar7;
  longlong *plVar8;
  int *piVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  uint *puVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong *local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint *local_120;
  uint *local_118;
  undefined1 local_10c [4];
  longlong local_108;
  ulonglong uStack_100;
  uint local_f8 [4];
  uint *local_e8;
  int local_e0;
  uint local_dc;
  undefined4 uStack_d8;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  longlong local_b8;
  longlong *plStack_b0;
  uint local_a8 [4];
  uint *local_98;
  int local_90;
  uint local_8c;
  undefined4 uStack_88;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  uVar3 = DAT_14cb1c840;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (((((*(int *)(param_1 + 0x18) == 0) && (*(int *)(param_1 + 0x6c) != 0)) &&
       (uVar4 = *(uint *)(param_1 + 0x68), -1 < (int)uVar4)) &&
      (((int)uVar4 < DAT_14c9647dc &&
       (plVar8 = (longlong *)
                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar8 != (longlong *)0x0)))) &&
     (((int)plVar8[2] == *(int *)(param_1 + 0x6c) &&
      (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar17 = *plVar8, lVar17 != 0)))))) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_b8,uVar3,lVar17);
    plVar8 = plStack_b0;
    lVar17 = local_b8;
    if ((local_b8 == 0) || (plStack_b0 == (longlong *)0x0)) {
      plVar8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plStack_b0 + 0xc) = *(int *)((longlong)plStack_b0 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar14 = plStack_b0 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar9 = (int *)((longlong)plVar8 + 0xc);
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (*piVar9 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    plVar14 = plStack_b0;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar9 = (int *)((longlong)plVar14 + 0xc);
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (*piVar9 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    if (plVar8 != (longlong *)0x0) {
      iVar20 = (int)plVar8[1];
      do {
        plVar14 = (longlong *)0x0;
        if (iVar20 == 0) break;
        LOCK();
        iVar15 = (int)plVar8[1];
        bVar23 = iVar20 == iVar15;
        if (bVar23) {
          *(int *)(plVar8 + 1) = iVar20 + 1;
          iVar15 = iVar20;
        }
        iVar20 = iVar15;
        UNLOCK();
        plVar14 = plVar8;
      } while (!bVar23);
      LOCK();
      piVar9 = (int *)((longlong)plVar8 + 0xc);
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      if (plVar14 != (longlong *)0x0) {
        if (((((lVar17 != 0) && (*(int *)(param_1 + 0x6c) != 0)) &&
             (uVar4 = *(uint *)(param_1 + 0x68), -1 < (int)uVar4)) &&
            ((((int)uVar4 < DAT_14c9647dc &&
              (plVar8 = (longlong *)
                        ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
              plVar8 != (longlong *)0x0)) &&
             (((int)plVar8[2] == *(int *)(param_1 + 0x6c) &&
              (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))))))) &&
           ((lVar12 = *(longlong *)(*plVar8 + 0x30), lVar12 != 0 &&
            (lVar12 = *(longlong *)(lVar12 + 0x2b0), lVar12 != 0)))) {
          *(uint *)(lVar12 + 0x648) = *(uint *)(lVar12 + 0x648) & 0xffe00000;
          iVar20 = *(int *)(param_1 + 0x30);
          local_160 = plVar14;
          if ((longlong)iVar20 != 0) {
            lVar5 = *(longlong *)(param_1 + 0x28);
            lVar22 = 0;
            do {
              uVar4 = FUN_1437fdf47(*(undefined8 *)(lVar5 + lVar22));
              *(uint *)(lVar12 + 0x648) = *(uint *)(lVar12 + 0x648) | uVar4;
              lVar22 = lVar22 + 8;
            } while ((longlong)iVar20 * 8 != lVar22);
          }
          local_168 = lVar17;
          FUN_140f07f68(lVar17);
          local_178 = param_1;
          if ((longlong)*(int *)(param_1 + 0x50) != 0) {
            lVar17 = *(longlong *)(param_1 + 0x48);
            local_158 = (longlong)*(int *)(param_1 + 0x50) * 0x40 + lVar17;
LAB_14380f1fe:
            lVar12 = *(longlong *)(local_178 + 0x38);
            lVar5 = (longlong)*(int *)(lVar17 + 0x38) * 0xa0;
            lVar22 = (longlong)*(int *)(lVar17 + 0x3c) * 0xa0;
            local_138 = *(longlong *)(lVar12 + lVar5);
            lVar5 = *(longlong *)(lVar12 + 0x70 + lVar5);
            local_148 = *(longlong *)(lVar12 + lVar22);
            local_140 = *(longlong *)(lVar12 + 0x70 + lVar22);
            lVar12 = *(longlong *)(lVar17 + 8);
            local_170 = lVar17;
            if (lVar12 != 0) {
              local_98 = (uint *)0x0;
              local_90 = 0;
              local_b8 = 0;
              plStack_b0 = (longlong *)0x0;
              local_8c = 0x80;
              uStack_88 = 0xffffffff;
              local_84 = 0;
              local_78 = (undefined1 *)0x0;
              local_70 = 0;
              local_e8 = (uint *)0x0;
              local_e0 = 0;
              local_108 = 0;
              uStack_100 = 0;
              local_dc = 0x80;
              uStack_d8 = 0xffffffff;
              local_d4 = 0;
              local_c8 = (undefined1 *)0x0;
              local_c0 = 0;
              local_150 = lVar5;
              if ((longlong)*(int *)(lVar12 + 0x28) != 0) {
                puVar7 = *(uint **)(lVar12 + 0x20);
                puVar18 = puVar7 + (longlong)*(int *)(lVar12 + 0x28) * 4;
                do {
                  local_124 = *puVar7;
                  if ((int)plStack_b0 != local_84) {
                    puVar6 = local_78;
                    if (local_78 == (undefined1 *)0x0) {
                      puVar6 = local_80;
                    }
                    iVar20 = *(int *)(puVar6 + (ulonglong)(local_70 - 1U & local_124) * 4);
                    while (iVar20 != -1) {
                      lVar17 = local_b8 + (longlong)iVar20 * 0x10;
                      if (*(uint *)(local_b8 + (longlong)iVar20 * 0x10) == local_124) {
                        piVar9 = (int *)(lVar17 + 4);
                        if (piVar9 != (int *)0x0 && lVar17 != 0) {
                          *piVar9 = *piVar9 + 1;
                          goto LAB_14380f398;
                        }
                        break;
                      }
                      iVar20 = *(int *)(lVar17 + 8);
                    }
                  }
                  local_128 = 1;
                  local_120 = &local_124;
                  local_118 = &local_128;
                  FUN_140c0fbee(&local_b8,local_10c,&local_120,0);
LAB_14380f398:
                  local_128 = puVar7[2];
                  if ((int)uStack_100 != local_d4) {
                    puVar6 = local_c8;
                    if (local_c8 == (undefined1 *)0x0) {
                      puVar6 = local_d0;
                    }
                    iVar20 = *(int *)(puVar6 + (ulonglong)(local_c0 - 1U & local_128) * 4);
                    while (iVar20 != -1) {
                      lVar17 = local_108 + (longlong)iVar20 * 0x10;
                      if (*(uint *)(local_108 + (longlong)iVar20 * 0x10) == local_128) {
                        piVar9 = (int *)(lVar17 + 4);
                        if (piVar9 != (int *)0x0 && lVar17 != 0) {
                          *piVar9 = *piVar9 + 1;
                          goto LAB_14380f435;
                        }
                        break;
                      }
                      iVar20 = *(int *)(lVar17 + 8);
                    }
                  }
                  local_12c = 1;
                  local_118 = &local_12c;
                  local_120 = &local_128;
                  FUN_140c0fbee(&local_108,local_10c,&local_120,0);
LAB_14380f435:
                  puVar7 = puVar7 + 4;
                } while (puVar7 != puVar18);
                if (local_90 != 0) {
                  puVar7 = local_98;
                  if (local_98 == (uint *)0x0) {
                    puVar7 = local_a8;
                  }
                  uVar4 = *puVar7;
                  if (uVar4 == 0) {
                    iVar20 = local_90 + 0x1e;
                    if (-1 < local_90 + -1) {
                      iVar20 = local_90 + -1;
                    }
                    uVar10 = 0;
                    uVar13 = (ulonglong)(uint)(iVar20 >> 5);
                    if (iVar20 >> 5 < 1) {
                      uVar13 = uVar10;
                    }
                    iVar20 = 0;
                    do {
                      if (uVar13 == uVar10) goto LAB_14380f58b;
                      iVar20 = iVar20 + 0x20;
                      uVar4 = puVar7[uVar10 + 1];
                      uVar10 = uVar10 + 1;
                    } while (uVar4 == 0);
                  }
                  else {
                    uVar10 = 0;
                    iVar20 = 0;
                  }
                  uVar19 = (ulonglong)(-uVar4 & uVar4);
                  uVar13 = uVar19 * 2 + 1;
                  lVar17 = 0x3f;
                  if (uVar13 != 0) {
                    for (; uVar13 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                    }
                  }
                  iVar15 = (iVar20 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                  if (iVar15 < local_90) {
                    iVar21 = local_90 + 0x1e;
                    if (-1 < local_90 + -1) {
                      iVar21 = local_90 + -1;
                    }
                    iVar21 = iVar21 >> 5;
                    uVar4 = 0xffffffff;
                    do {
                      if (0xfe < *(int *)(local_b8 + 4 + (longlong)iVar15 * 0x10))
                      goto LAB_14380f6fc;
                      uVar4 = uVar4 & ~(uint)uVar19;
                      iVar15 = (int)uVar10;
                      lVar17 = (longlong)iVar15;
                      uVar16 = puVar7[lVar17] & uVar4;
                      if (uVar16 == 0) {
                        iVar11 = iVar21;
                        if (iVar21 < iVar15) {
                          iVar11 = iVar15;
                        }
                        if (iVar21 <= iVar15) break;
                        lVar12 = 0;
                        while( true ) {
                          iVar20 = iVar20 + 0x20;
                          uVar16 = puVar7[lVar17 + lVar12 + 1];
                          if (uVar16 != 0) break;
                          lVar12 = lVar12 + 1;
                          if (iVar11 - lVar17 == lVar12) goto LAB_14380f58b;
                        }
                        uVar10 = (ulonglong)(iVar15 + (int)lVar12 + 1);
                        uVar4 = 0xffffffff;
                      }
                      uVar19 = (ulonglong)(-uVar16 & uVar16);
                      uVar13 = uVar19 * 2 + 1;
                      lVar17 = 0x3f;
                      if (uVar13 != 0) {
                        for (; uVar13 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                        }
                      }
                      iVar15 = (iVar20 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                    } while (iVar15 < local_90);
                  }
                }
              }
LAB_14380f58b:
              if (local_e0 == 0) {
                uVar13 = 1;
                uVar10 = 0;
                iVar15 = 0;
                iVar20 = 0;
              }
              else {
                puVar7 = local_e8;
                if (local_e8 == (uint *)0x0) {
                  puVar7 = local_f8;
                }
                uVar4 = *puVar7;
                if (uVar4 == 0) {
                  iVar20 = local_e0 + 0x1e;
                  if (-1 < local_e0 + -1) {
                    iVar20 = local_e0 + -1;
                  }
                  uVar10 = 0;
                  uVar13 = (ulonglong)(uint)(iVar20 >> 5);
                  if (iVar20 >> 5 < 1) {
                    uVar13 = uVar10;
                  }
                  iVar15 = 0;
                  do {
                    if (uVar13 == uVar10) goto LAB_14380f626;
                    iVar15 = iVar15 + 0x20;
                    uVar4 = puVar7[uVar10 + 1];
                    uVar10 = uVar10 + 1;
                  } while (uVar4 == 0);
                }
                else {
                  uVar10 = 0;
                  iVar15 = 0;
                }
                uVar13 = (ulonglong)(-uVar4 & uVar4);
                uVar19 = uVar13 * 2 + 1;
                lVar17 = 0x3f;
                if (uVar19 != 0) {
                  for (; uVar19 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                  }
                }
                iVar20 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                if (local_e0 <= iVar20) {
                  iVar20 = local_e0;
                }
              }
              if (iVar20 == local_e0) {
LAB_14380f626:
                bVar23 = false;
              }
              else {
                puVar7 = local_e8;
                if (local_e8 == (uint *)0x0) {
                  puVar7 = local_f8;
                }
                iVar21 = local_e0 + 0x1e;
                if (-1 < local_e0 + -1) {
                  iVar21 = local_e0 + -1;
                }
                iVar21 = iVar21 >> 5;
                uVar4 = 0xffffffff;
                do {
                  iVar20 = *(int *)(local_108 + 4 + (longlong)iVar20 * 0x10);
                  bVar23 = 0xfe < iVar20;
                  if (0xfe < iVar20) goto LAB_14380f6fc;
                  uVar4 = uVar4 & ~(uint)uVar13;
                  iVar20 = (int)uVar10;
                  lVar17 = (longlong)iVar20;
                  uVar16 = puVar7[lVar17] & uVar4;
                  if (uVar16 == 0) {
                    iVar11 = iVar21;
                    if (iVar21 < iVar20) {
                      iVar11 = iVar20;
                    }
                    if (iVar21 <= iVar20) goto LAB_14380f626;
                    lVar12 = 0;
                    while( true ) {
                      iVar15 = iVar15 + 0x20;
                      uVar16 = puVar7[lVar17 + lVar12 + 1];
                      if (uVar16 != 0) break;
                      lVar12 = lVar12 + 1;
                      if (iVar11 - lVar17 == lVar12) goto LAB_14380f626;
                    }
                    uVar10 = (ulonglong)(iVar20 + (int)lVar12 + 1);
                    uVar4 = 0xffffffff;
                  }
                  uVar13 = (ulonglong)(-uVar16 & uVar16);
                  uVar19 = uVar13 * 2 + 1;
                  lVar17 = 0x3f;
                  if (uVar19 != 0) {
                    for (; uVar19 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                    }
                  }
                  iVar20 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                } while (iVar20 < local_e0);
              }
              goto LAB_14380f6ff;
            }
            goto LAB_14380f814;
          }
LAB_14380fad8:
          plVar14 = local_160;
          lVar17 = local_178;
          if (*(int *)(local_178 + 0x60) != 0) {
            FUN_146421af4(local_168 + 0x2d8,local_178 + 0x58);
          }
          *(undefined1 *)(lVar17 + 0xbc) = 1;
        }
        LOCK();
        plVar8 = plVar14 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar9 = (int *)((longlong)plVar14 + 0xc);
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (*piVar9 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14380f6fc:
  bVar23 = true;
LAB_14380f6ff:
  local_c0 = 0;
  if (local_c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  lVar5 = local_150;
  lVar17 = local_170;
  uVar10 = uStack_100 >> 0x20;
  uStack_100 = uStack_100 & 0xffffffff00000000;
  if ((int)uVar10 != 0) {
    FUN_14472eb64(&local_108,0);
  }
  uStack_d8 = 0xffffffff;
  local_d4 = 0;
  local_e0 = 0;
  if (0x80 < local_dc) {
    local_dc = 0x80;
    FUN_1446efbd8(local_f8,0);
  }
  if (local_e8 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar10 = (ulonglong)plStack_b0 >> 0x20;
  plStack_b0 = (longlong *)((ulonglong)plStack_b0 & 0xffffffff00000000);
  if ((int)uVar10 != 0) {
    FUN_14472eb64(&local_b8,0);
  }
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    FUN_1446efbd8(local_a8,0);
  }
  if (local_98 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (!bVar23) {
LAB_14380f814:
    iVar20 = *(int *)(lVar5 + 0x40);
    *(uint *)(lVar5 + 0x40) = iVar20 + 1U;
    if (*(uint *)(lVar5 + 0x44) < iVar20 + 1U) {
      FUN_141807fbe((longlong *)(lVar5 + 0x38),iVar20);
    }
    lVar12 = *(longlong *)(lVar5 + 0x38);
    lVar5 = (longlong)iVar20 * 0x40;
    puVar7 = (uint *)(lVar12 + lVar5);
    puVar2 = (undefined8 *)(lVar12 + lVar5);
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    FUN_141802284(lVar12 + lVar5 + 8,lVar17 + 8);
    FUN_141802284(puVar2 + 4,lVar17 + 0x20);
    if (local_148 == 0) {
      *puVar7 = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(local_148 + 0xc);
      *puVar7 = uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      uVar4 = *(uint *)(lVar12 + 0x10);
      if (*(uint *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar20 = DAT_14c964868 + 1;
        UNLOCK();
        uVar16 = DAT_14c964868 + 1;
        bVar23 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar20;
        if (bVar23) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        uVar4 = *(uint *)(lVar12 + 0x10);
        bVar23 = uVar4 == 0;
        if (bVar23) {
          *(uint *)(lVar12 + 0x10) = uVar16;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar23) {
          uVar4 = uVar16;
        }
      }
    }
    puVar7[1] = uVar4;
    *(undefined1 *)(puVar7 + 0xe) = 1;
    plVar8 = (longlong *)(local_140 + 0x38);
    iVar20 = *(int *)(local_140 + 0x40);
    *(uint *)(local_140 + 0x40) = iVar20 + 1U;
    if (*(uint *)(local_140 + 0x44) < iVar20 + 1U) {
      FUN_141807fbe(plVar8,iVar20);
    }
    lVar12 = *plVar8;
    lVar5 = (longlong)iVar20 * 0x40;
    puVar7 = (uint *)(lVar12 + lVar5);
    puVar2 = (undefined8 *)(lVar12 + lVar5);
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    FUN_141802284(lVar12 + lVar5 + 8,lVar17 + 8);
    FUN_141802284(puVar2 + 4,lVar17 + 0x20);
    if (local_138 == 0) {
      *puVar7 = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(local_138 + 0xc);
      *puVar7 = uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar17 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar17 = 0;
      }
      uVar4 = *(uint *)(lVar17 + 0x10);
      if (*(uint *)(lVar17 + 0x10) == 0) {
        LOCK();
        iVar20 = DAT_14c964868 + 1;
        UNLOCK();
        uVar16 = DAT_14c964868 + 1;
        bVar23 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar20;
        if (bVar23) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        uVar4 = *(uint *)(lVar17 + 0x10);
        bVar23 = uVar4 == 0;
        if (bVar23) {
          *(uint *)(lVar17 + 0x10) = uVar16;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar23) {
          uVar4 = uVar16;
        }
      }
    }
    puVar7[1] = uVar4;
    *(undefined1 *)(puVar7 + 0xe) = 0;
    lVar17 = local_170;
  }
  lVar17 = lVar17 + 0x40;
  if (lVar17 == local_158) goto LAB_14380fad8;
  goto LAB_14380f1fe;
}



// FUNCTION 14380fba0 FUN_14380fba0 body=5245 status=ok
// SIG undefined FUN_14380fba0(void)

void FUN_14380fba0(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  longlong local_88 [2];
  longlong local_78;
  undefined8 uStack_70;
  undefined1 local_64 [4];
  undefined8 *local_60 [2];
  longlong *local_50;
  undefined8 **local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_146422a7d();
  if (DAT_14c963ff1 == '\x01') {
    FUN_1460d77d2(&DAT_14cb1b430);
  }
  else {
    FUN_147e47782(&local_50);
  }
  if (DAT_14cb1ceb0 == 0) {
    lVar6 = FUN_14001cc68(0x20,0x10);
    FUN_14581f414(lVar6);
    DAT_14cb1ceb0 = lVar6;
  }
  if (DAT_14cb1cde8 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    *puVar7 = &PTR_FUN_14aba2be0;
    puVar7[1] = &DAT_149e3b0aa;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    local_60[0] = puVar7;
    FUN_146422510(&local_50);
    puVar7[2] = local_50;
    DAT_14cb1cde8 = puVar7;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8338a0) {
      FUN_144b3d300(&DAT_14c8338a0);
      if (DAT_14c8338a0 == -1) {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
    }
    puVar7 = DAT_14cb1cde8 + 1;
    if (DAT_14cb1cde8 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    local_50 = (longlong *)0x14ab67c58;
    local_48 = (undefined8 **)CONCAT35(local_48._5_3_,7);
    uVar4 = FUN_14001a6c0(&local_50,1);
    (**(code **)(DAT_14c8337f0 + 0x28))(&DAT_14c8337f0,uVar4,puVar7);
  }
  local_78 = 0;
  uStack_70._0_4_ = 1;
  uStack_70._4_4_ = 0;
  FUN_141518130(&local_78,0);
  lVar6 = local_78;
  FUN_140056680(&local_50,L"GbxNavPathTestComponent.GbxActorDef");
  FUN_140056680(local_60,L"GbxNavPathTestComponent.SpawnDefinition");
  FUN_141517fc0(lVar6,0x20,local_60,&local_50);
  iVar3 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,iVar3);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavTestAgentData.GbxActorDef");
  FUN_140056680(local_60,L"GbxNavTestAgentData.SpawnDefinition");
  FUN_141517fc0(lVar6,0x20,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavTest_NavMeshPath.SetGbxActorDef");
  FUN_140056680(local_60,L"GbxNavTest_NavMeshPath.SetSpawnDef");
  FUN_141517fc0(lVar6,0x10,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"/Script/GbxNav.GbxNavLinkData");
  FUN_140056680(local_60,L"/Script/GbxNav.GbxNavEdge");
  FUN_141517fc0(lVar6,2,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"/Script/GbxNav.GbxNavLinkActor");
  FUN_140056680(local_60,L"/Script/GbxNav.GbxNavEdgeActor");
  FUN_141517fc0(lVar6,2,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"/Script/GbxNav.GbxNavLinkBlocker");
  FUN_140056680(local_60,L"/Script/GbxNav.GbxNavEdgeBlocker");
  FUN_141517fc0(lVar6,2,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"/Script/GbxNav.GbxNavLinkComponent");
  FUN_140056680(local_60,L"/Script/GbxNav.GbxNavEdgeComponent");
  FUN_141517fc0(lVar6,2,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"/Script/GbxNav.GbxNavLinkPreviewComponent");
  FUN_140056680(local_60,L"/Script/GbxNav.GbxNavEdgePreviewComponent");
  FUN_141517fc0(lVar6,2,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"/Script/GbxNav.GbxNavLinkDirection");
  FUN_140056680(local_60,L"/Script/GbxNav.GbxNavEdgeDirection");
  FUN_141517fc0(lVar6,8,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavLinkData.LinkType");
  FUN_140056680(local_60,L"GbxNavLinkData.EdgeType");
  FUN_141517fc0(lVar6,0x20,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavLinkData.ReverseLink");
  FUN_140056680(local_60,L"GbxNavLinkData.ReverseEdge");
  FUN_141517fc0(lVar6,0x20,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavLinkComponent.Link");
  FUN_140056680(local_60,L"GbxNavLinkComponent.Edge");
  FUN_141517fc0(lVar6,0x20,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavLinkComponent.IsLinkEnabled");
  FUN_140056680(local_60,L"GbxNavLinkComponent.IsEdgeEnabled");
  FUN_141517fc0(lVar6,0x10,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavLinkComponent.SetLinkEnabled");
  FUN_140056680(local_60,L"GbxNavLinkComponent.SetEdgeEnabled");
  FUN_141517fc0(lVar6,0x10,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavLinkComponent.LinkEnd");
  FUN_140056680(local_60,L"GbxNavLinkComponent.EdgeEnd");
  FUN_141517fc0(lVar6,0x20,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavLinkComponent.LinkBeginWidth");
  FUN_140056680(local_60,L"GbxNavLinkComponent.EdgeBeginWidth");
  FUN_141517fc0(lVar6,0x20,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavLinkComponent.LinkEndWidth");
  FUN_140056680(local_60,L"GbxNavLinkComponent.EdgeEndWidth");
  FUN_141517fc0(lVar6,0x20,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavLinkActor.IsLinkEnabled");
  FUN_140056680(local_60,L"GbxNavLinkActor.IsEdgeEnabled");
  FUN_141517fc0(lVar6,0x10,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavLinkActor.SetLinkEnabled");
  FUN_140056680(local_60,L"GbxNavLinkActor.SetEdgeEnabled");
  FUN_141517fc0(lVar6,0x10,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavLinkActor.LinkEnd");
  FUN_140056680(local_60,L"GbxNavLinkActor.EdgeEnd");
  FUN_141517fc0(lVar6,0x20,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavLinkActor.OnLinkStarted");
  FUN_140056680(local_60,L"GbxNavLinkActor.OnEdgeStarted");
  FUN_141517fc0(lVar6,0x20,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavLinkActor.OnLinkEnded");
  FUN_140056680(local_60,L"GbxNavLinkActor.OnEdgeEnded");
  FUN_141517fc0(lVar6,0x20,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavLinkActor.LinkComponent");
  FUN_140056680(local_60,L"GbxNavLinkActor.EdgeComponent");
  FUN_141517fc0(lVar6,0x20,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavLinkActor.GbxNavLinkPreviewComponent");
  FUN_140056680(local_60,L"GbxNavLinkActor.GbxNavEdgePreviewComponent");
  FUN_141517fc0(lVar6,0x20,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"/Script/GbxNav.GbxNavLinks");
  FUN_140056680(local_60,L"/Script/GbxNav.GbxNavEdges");
  FUN_141517fc0(lVar6,4,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavWorldData.Links");
  FUN_140056680(local_60,L"GbxNavWorldData.Edges");
  FUN_141517fc0(lVar6,0x20,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavLinks.Links");
  FUN_140056680(local_60,L"GbxNavLinks.Edges");
  FUN_141517fc0(lVar6,0x20,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavMeshLayer.LinkDistance");
  FUN_140056680(local_60,L"GbxNavMeshLayer.EdgeDistance");
  FUN_141517fc0(lVar6,0x20,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavMeshLayer.bSetLinkDistanceManually");
  FUN_140056680(local_60,L"GbxNavMeshLayer.bSetEdgeDistanceManually");
  FUN_141517fc0(lVar6,0x20,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavLinkData.ReverseLink");
  FUN_140056680(local_60,L"GbxNavLinkData.ReverseEdge");
  FUN_141517fc0(lVar6,0x20,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavSettings.DefaultLink");
  FUN_140056680(local_60,L"GbxNavSettings.DefaultEdge");
  FUN_141517fc0(lVar6,0x20,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"HavokTraversalData.Link");
  FUN_140056680(local_60,L"HavokTraversalData.Edge");
  FUN_141517fc0(lVar6,0x20,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavMeshComponent.bAutoAddLinks");
  FUN_140056680(local_60,L"GbxNavMeshComponent.bAutoAddUserEdges");
  FUN_141517fc0(lVar6,0x20,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"GbxNavPainterComponent.bPainterEnabled");
  FUN_140056680(local_60,L"GbxNavPainterComponent.bEnabled");
  FUN_141517fc0(lVar6,0x20,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"/Script/GbxNav.GbxRotationChannelDataOverride");
  FUN_140056680(local_60,L"/Script/GbxEngine.GbxRotationChannelDataOverride");
  FUN_141517fc0(lVar6,4,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar2 = local_78;
  lVar1 = local_78 + lVar6 * 0xa0;
  FUN_140056680(&local_50,L"EGbxNavCharacterType");
  FUN_140056680(local_60,L"EGbxNavCharacterType");
  FUN_141517fc0(lVar1,8,local_60,&local_50);
  FUN_140056680(local_60,L"EGbxNavCharacterType::AI_Walking");
  FUN_140056680(local_88,L"EGbxNavCharacterType::AI");
  local_50 = local_88;
  local_48 = local_60;
  FUN_1411f1c38(lVar2 + lVar6 * 0xa0 + 0x50,local_64,&local_50,0);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar8 = uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uVar5 = (uint)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
  if (uStack_70._4_4_ < uVar5) {
    FUN_141518130(&local_78,uVar8 & 0xffffffff);
  }
  lVar2 = local_78;
  lVar1 = local_78 + lVar6 * 0xa0;
  FUN_140056680(&local_50,L"EGbxNavLinkType");
  FUN_140056680(local_60,L"EGbxNavEdgeType");
  FUN_141517fc0(lVar1,8,local_60,&local_50);
  lVar6 = lVar2 + lVar6 * 0xa0 + 0x50;
  FUN_140056680(local_60,L"EGbxNavLinkType::Default");
  FUN_140056680(local_88,L"EGbxNavEdgeType::Default");
  local_50 = local_88;
  local_48 = local_60;
  FUN_1411f1c38(lVar6,local_64,&local_50,0);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_60,L"EGbxNavLinkType::Vault");
  FUN_140056680(local_88,L"EGbxNavEdgeType::Vault");
  local_50 = local_88;
  local_48 = local_60;
  FUN_1411f1c38(lVar6,local_64,&local_50,0);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_60,L"EGbxNavLinkType::Balcony");
  FUN_140056680(local_88,L"EGbxNavEdgeType::Balcony");
  local_50 = local_88;
  local_48 = local_60;
  FUN_1411f1c38(lVar6,local_64,&local_50,0);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_60,L"EGbxNavLinkType::Jump");
  FUN_140056680(local_88,L"EGbxNavEdgeType::Jump");
  local_50 = local_88;
  local_48 = local_60;
  FUN_1411f1c38(lVar6,local_64,&local_50,0);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_60,L"EGbxNavLinkType::Default");
  FUN_140056680(local_88,L"EGbxNavEdgeType::Cover");
  local_50 = local_88;
  local_48 = local_60;
  FUN_1411f1c38(lVar6,local_64,&local_50,0);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar8 = uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uVar5 = (uint)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
  if (uStack_70._4_4_ < uVar5) {
    FUN_141518130(&local_78,uVar8 & 0xffffffff);
  }
  lVar2 = local_78;
  lVar1 = local_78 + lVar6 * 0xa0;
  FUN_140056680(&local_50,L"EGbxNavLinkType");
  FUN_140056680(local_60,L"EGbxNavLinkType");
  FUN_141517fc0(lVar1,8,local_60,&local_50);
  FUN_140056680(local_60,L"EGbxNavLinkType::Default");
  FUN_140056680(local_88,L"EGbxNavLinkType::Cover");
  local_50 = local_88;
  local_48 = local_60;
  FUN_1411f1c38(lVar2 + lVar6 * 0xa0 + 0x50,local_64,&local_50,0);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar6 = (longlong)(int)(uint)uStack_70;
  uVar5 = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < uVar5) {
    uVar8 = uStack_70 & 0xffffffff;
    uStack_70._0_4_ = uVar5;
    FUN_141518130(&local_78,uVar8);
    uVar5 = (uint)uStack_70;
  }
  uStack_70._0_4_ = uVar5;
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"/Script/GbxNav.EGbxNavGoalProjectionMode");
  FUN_140056680(local_60,L"/Script/GbxNav.EGbxNavGoalMoveToNavMesh");
  FUN_141517fc0(lVar6,8,local_60,&local_50);
  uVar5 = (uint)uStack_70;
  lVar6 = (longlong)(int)(uint)uStack_70;
  uStack_70._0_4_ = (uint)uStack_70 + 1;
  if (uStack_70._4_4_ < (uint)uStack_70) {
    FUN_141518130(&local_78,uVar5);
  }
  lVar6 = lVar6 * 0xa0 + local_78;
  FUN_140056680(&local_50,L"/Script/GbxNav.GbxNavGoal.ProjectionMode");
  FUN_140056680(local_60,L"/Script/GbxNav.GbxNavGoal.MoveToNavMesh");
  FUN_141517fc0(lVar6,0x20,local_60,&local_50);
  FUN_140056680(&local_50,L"GbxNav");
  local_98 = local_78;
  local_90 = (uint)uStack_70;
  FUN_141071fba(&local_98,&local_50);
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_1407a3a24(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143811024 FUN_143811024 body=579 status=ok
// SIG undefined FUN_143811024(void)

undefined1 * FUN_143811024(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  uVar8 = DAT_14cb1c868._4_4_;
  uVar7 = (undefined4)DAT_14cb1c868;
  uVar6 = DAT_14cb1c860._4_4_;
  uVar3 = *(undefined8 *)(param_1 + 0x644);
  uVar9 = *(undefined8 *)(param_1 + 0x260);
  uVar10 = *(undefined8 *)(param_1 + 0x268);
  uVar1 = *(undefined8 *)(param_1 + 0x270);
  *(undefined4 *)(param_2 + 0x20) = (undefined4)DAT_14cb1c860;
  *(undefined4 *)(param_2 + 0x24) = uVar6;
  *(undefined4 *)(param_2 + 0x28) = uVar7;
  *(undefined4 *)(param_2 + 0x2c) = uVar8;
  *(undefined8 *)(param_2 + 0x30) = DAT_14cb1c870;
  *(undefined8 *)(param_2 + 8) = uVar9;
  *(undefined8 *)(param_2 + 0x10) = uVar10;
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
  *(undefined8 *)(param_2 + 0x50) = uVar3;
  plVar4 = *(longlong **)(param_1 + 0xa8);
  *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_1 + 0x1f0);
  uVar6 = *(undefined4 *)(param_1 + 0x1e4);
  uVar7 = *(undefined4 *)(param_1 + 0x1e8);
  uVar8 = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x1e0);
  *(undefined4 *)(param_2 + 100) = uVar6;
  *(undefined4 *)(param_2 + 0x68) = uVar7;
  *(undefined4 *)(param_2 + 0x6c) = uVar8;
  if (plVar4 == (longlong *)0x0) {
    return param_2;
  }
  uVar2 = *(uint *)((longlong)plVar4 + 0xc);
  *(uint *)(param_2 + 0x58) = uVar2;
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar15 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar15 = 0;
  }
  iVar11 = *(int *)(lVar15 + 0x10);
  if (*(int *)(lVar15 + 0x10) == 0) {
    LOCK();
    iVar11 = DAT_14c964868 + 1;
    UNLOCK();
    iVar14 = DAT_14c964868 + 1;
    bVar16 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar11;
    if (bVar16) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar14);
    }
    LOCK();
    iVar11 = *(int *)(lVar15 + 0x10);
    bVar16 = iVar11 == 0;
    if (bVar16) {
      *(int *)(lVar15 + 0x10) = iVar14;
      iVar11 = 0;
    }
    UNLOCK();
    if (bVar16) {
      iVar11 = iVar14;
    }
  }
  *(int *)(param_2 + 0x5c) = iVar11;
  plVar12 = (longlong *)(**(code **)(*plVar4 + 0x5f0))(plVar4);
  if (plVar12 == (longlong *)0x0) goto LAB_14381119e;
  pcVar5 = *(code **)(*plVar12 + 0x5e8);
  if (pcVar5 == FUN_140972dde) {
    lVar15 = plVar12[0x76];
    if (lVar15 != 0) goto LAB_1438111ec;
    pcVar5 = *(code **)(*plVar12 + 0x5f8);
    if (pcVar5 == FUN_144784df4) {
      if (*(code **)(plVar12[0x784] + 0x18) == (code *)&LAB_144904684) {
        if (*(int *)((longlong)plVar12 + 0x75b4) != 0) {
          uVar2 = *(uint *)(plVar12 + 0xeb6);
          bVar16 = false;
          if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1438111a0;
          plVar13 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((plVar13 != (longlong *)0x0) &&
             (((int)plVar13[2] == *(int *)((longlong)plVar12 + 0x75b4) &&
              ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)))) {
            if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
              lVar15 = *plVar13;
            }
            else {
              lVar15 = 0;
            }
            lVar15 = lVar15 + 0x110;
            goto LAB_1438111d2;
          }
        }
      }
      else {
        lVar15 = (**(code **)(plVar12[0x784] + 0x18))(plVar12 + 0x784);
LAB_1438111d2:
        if (lVar15 != 0) {
          lVar15 = *(longlong *)(lVar15 + 0x20);
          goto LAB_1438111db;
        }
      }
    }
    else {
      lVar15 = (*pcVar5)(plVar12);
LAB_1438111db:
      if (lVar15 != 0) {
        lVar15 = *(longlong *)(lVar15 + 0x3b0);
        goto LAB_1438111e7;
      }
    }
  }
  else {
    lVar15 = (*pcVar5)(plVar12);
LAB_1438111e7:
    if (lVar15 != 0) {
LAB_1438111ec:
      bVar16 = (*(byte *)(lVar15 + 0x39a) & 8) == 0;
      goto LAB_1438111a0;
    }
  }
LAB_14381119e:
  bVar16 = false;
LAB_1438111a0:
  *param_2 = bVar16;
  (**(code **)(*plVar4 + 0x328))(plVar4,param_2 + 0x60);
  return param_2;
}



// FUNCTION 143811278 FUN_143811278 body=433 status=ok
// SIG undefined FUN_143811278(void)

void FUN_143811278(longlong param_1)

{
  longlong *plVar1;
  void **ppvVar2;
  byte bVar3;
  void *_Src;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *local_40;
  int local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140675252();
  for (lVar5 = param_1; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x20)) {
    if ((*(uint *)(lVar5 + 8) & 0x30) != 0) goto LAB_143811312;
  }
  if (*(longlong *)(param_1 + 0x6a8) == 0) {
    plVar1 = (longlong *)(param_1 + 0x698);
    *(longlong **)(param_1 + 0x6b0) = &DAT_14cb1cf90;
    *(longlong *)(param_1 + 0x6a8) = param_1;
    lVar5 = DAT_14cb1cf90;
    while( true ) {
      *(longlong *)(param_1 + 0x698) = lVar5;
      LOCK();
      lVar4 = **(longlong **)(param_1 + 0x6b0);
      bVar6 = lVar5 == lVar4;
      if (bVar6) {
        **(longlong **)(param_1 + 0x6b0) = (longlong)plVar1;
        lVar4 = lVar5;
      }
      UNLOCK();
      if (bVar6) break;
      *(longlong *)(param_1 + 0x698) = lVar4;
      lVar5 = **(longlong **)(param_1 + 0x6b0);
    }
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
LAB_143811312:
  FUN_140d370ea(&local_58,param_1);
  _Src = local_40;
  *(undefined8 *)(param_1 + 0x6b8) = local_58;
  *(undefined4 *)(param_1 + 0x6c0) = local_50;
  *(undefined4 *)(param_1 + 0x6c4) = uStack_4c;
  *(undefined4 *)(param_1 + 0x6c8) = uStack_48;
  *(undefined4 *)(param_1 + 0x6cc) = uStack_44;
  ppvVar2 = (void **)(param_1 + 0x6d0);
  if (ppvVar2 != &local_40) {
    *(int *)(param_1 + 0x6d8) = local_38;
    if (local_38 == 0 && *(int *)(param_1 + 0x6dc) == 0) {
      *(undefined4 *)(param_1 + 0x6dc) = 0;
    }
    else {
      FUN_1446dd670(ppvVar2,local_38);
      if (local_38 != 0) {
        memcpy(*ppvVar2,_Src,(longlong)local_38 * 2);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x6e0) = local_30;
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_1);
  }
  if (((*(byte *)(param_1 + 0x9f) & 0x20) != 0) ||
     (((lVar5 != 0 && (bVar3 = *(byte *)(lVar5 + 0x152), bVar3 != 1)) &&
      ((6 < bVar3 || ((0x68U >> (bVar3 & 0x1f) & 1) == 0)))))) {
    FUN_147e478d2(param_1);
    FUN_140acf01e(param_1);
    FUN_140aced8e(param_1);
    FUN_140acee66(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14381142a FUN_14381142a body=2714 status=ok
// SIG undefined FUN_14381142a(void)

void FUN_14381142a(longlong *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  void *pvVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  LPVOID pvVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined4 *puVar22;
  ulonglong uVar23;
  char *pcVar24;
  longlong lVar25;
  undefined8 uVar26;
  int iVar27;
  undefined4 *puVar28;
  byte bVar29;
  ulonglong *puVar30;
  ulonglong uVar31;
  int iVar32;
  undefined8 *puVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  double dVar36;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  longlong *local_168;
  ulonglong local_160;
  longlong *local_158;
  ulonglong local_150;
  longlong *local_148;
  int local_13c;
  ulonglong *local_138;
  longlong *local_130;
  ulonglong local_128;
  void *local_120;
  PSRWLOCK local_118;
  longlong local_110;
  double local_108;
  ulonglong *puStack_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((int)param_1[0x10] != 0) {
    lVar15 = FUN_14477bcf0();
    local_13c = *(int *)(lVar15 + 0xd8);
    lVar15 = *(longlong *)(*param_1 + 0x598);
    local_b8 = lVar15;
    if (DAT_14cb1d000 != 0) {
      pvVar16 = TlsGetValue(DAT_14cb1d000);
      TlsSetValue(DAT_14cb1d000,(LPVOID)(longlong)((int)pvVar16 + 1));
    }
    local_118 = (PSRWLOCK)(lVar15 + 0x250);
    AcquireSRWLockExclusive(local_118);
    local_c8 = 0;
    uStack_c0 = 0;
    iVar32 = (int)param_1[0x10];
    if (iVar32 == 0) {
      FUN_143811ec5(&local_b8,&local_c8);
    }
    else {
      plVar21 = param_1 + 0xf;
      local_168 = param_1 + 5;
      local_148 = param_1 + 0xc;
      local_130 = param_1 + 3;
      local_128 = 0;
      local_160 = 0;
      local_158 = plVar21;
      do {
        lVar15 = param_1[0xf];
        lVar17 = (longlong)iVar32;
        uVar14 = *(uint *)(lVar15 + -0x18 + lVar17 * 0x18);
        iVar3 = *(int *)(lVar15 + -0x14 + lVar17 * 0x18);
        uVar23 = *(ulonglong *)(lVar15 + -0x10 + lVar17 * 0x18);
        bVar29 = *(byte *)(lVar15 + -8 + lVar17 * 0x18);
        *(int *)(param_1 + 0x10) = iVar32 + -1;
        FUN_141808160(plVar21);
        plVar19 = local_168;
        if ((bVar29 & 1) == 0) {
          if ((int)param_1[6] != *(int *)((longlong)param_1 + 0x5c)) {
            uVar14 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) * -0x7a143595;
            uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
            plVar19 = (longlong *)param_1[0xd];
            if ((longlong *)param_1[0xd] == (longlong *)0x0) {
              plVar19 = local_148;
            }
            iVar32 = *(int *)((longlong)plVar19 +
                             (ulonglong)((int)param_1[0xe] - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4);
            if (iVar32 != -1) {
              do {
                puVar30 = (ulonglong *)(*local_168 + (longlong)iVar32 * 0x18);
                if (*puVar30 == uVar23) {
                  if (puVar30 + 1 != (ulonglong *)0x0 && puVar30 != (ulonglong *)0x0) {
                    iVar32 = (int)puVar30[1];
                    if ((longlong)(int)param_1[2] != 0) {
                      plVar20 = (longlong *)param_1[1];
                      plVar19 = plVar20 + (longlong)(int)param_1[2] * 3;
                      bVar9 = false;
LAB_143811863:
                      do {
                        if ((longlong)(int)plVar20[1] != 0) {
                          lVar15 = 0;
                          do {
                            if (*(int *)(*plVar20 + 0x48 + lVar15) == iVar32) {
                              *(undefined4 *)(*plVar20 + 0x48 + lVar15) = 0xffffffff;
                              plVar20 = plVar20 + 3;
                              bVar9 = true;
                              if (plVar20 == plVar19) goto LAB_1438118b4;
                              goto LAB_143811863;
                            }
                            lVar15 = lVar15 + 0x50;
                          } while ((longlong)(int)plVar20[1] * 0x50 != lVar15);
                        }
                        plVar20 = plVar20 + 3;
                      } while (plVar20 != plVar19);
                      if (bVar9) {
LAB_1438118b4:
                        lVar17 = (longlong)iVar32 * 0x50;
                        FUN_141807228(*param_1 + 0x3b8,param_1[3] + lVar17,
                                      *(undefined4 *)(param_1[3] + 0x48 + lVar17),1);
                        uVar18 = uStack_c0;
                        lVar15 = param_1[3];
                        dVar5 = (double)*(float *)(lVar15 + 0x48 + lVar17);
                        dVar36 = *(double *)(lVar15 + 0x10 + lVar17);
                        dVar1 = *(double *)(lVar15 + lVar17);
                        dVar2 = *(double *)(lVar15 + 8 + lVar17);
                        lVar15 = (longlong)(int)uStack_c0;
                        uVar14 = (int)uStack_c0 + 1;
                        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar14);
                        if (uStack_c0._4_4_ < uVar14) {
                          FUN_140555802(&local_c8,uVar18 & 0xffffffff);
                        }
                        lVar15 = lVar15 * 0x38;
                        *(double *)(local_c8 + lVar15) = dVar1 - dVar5;
                        *(double *)(local_c8 + 8 + lVar15) = dVar2 - dVar5;
                        *(double *)(local_c8 + 0x10 + lVar15) = dVar36 - dVar5;
                        *(double *)(local_c8 + 0x18 + lVar15) = dVar1 + dVar5;
                        *(double *)(local_c8 + 0x20 + lVar15) = dVar2 + dVar5;
                        *(double *)(local_c8 + 0x28 + lVar15) = dVar36 + dVar5;
                        *(undefined1 *)(local_c8 + 0x30 + lVar15) = 1;
                        local_160 = CONCAT71((int7)((ulonglong)local_c8 >> 8),1);
                      }
                    }
                    local_108 = 0.0;
                    puStack_100 = (ulonglong *)0x0;
                    lVar17 = *local_130;
                    lVar25 = (longlong)iVar32 * 0x50;
                    lVar15 = lVar17 + lVar25;
                    *(undefined8 *)(lVar17 + lVar25) = 0;
                    ((undefined8 *)(lVar17 + lVar25))[1] = 0;
                    puVar33 = (undefined8 *)(lVar17 + 0x10 + lVar25);
                    *puVar33 = 0;
                    puVar33[1] = 0;
                    puVar28 = (undefined4 *)(lVar17 + 0x20 + lVar25);
                    *puVar28 = 0;
                    puVar28[1] = 0;
                    puVar28[2] = 0;
                    puVar28[3] = 0;
                    *(undefined4 *)(lVar17 + 0x38 + lVar25) = 0;
                    if (*(int *)(lVar17 + 0x3c + lVar25) == 0) {
                      *(undefined4 *)(lVar15 + 0x3c) = 0;
                    }
                    else {
                      FUN_1446dd670(lVar15 + 0x30,0);
                    }
                    *(undefined4 *)(lVar15 + 0x40) = 0;
                    *(undefined4 *)(lVar15 + 0x48) = 0xbf800000;
                    *(undefined1 *)(lVar15 + 0x4c) = 0;
                    FUN_1408a44f6(local_168,uVar23);
                  }
                  break;
                }
                iVar32 = (int)puVar30[2];
              } while (iVar32 != -1);
            }
          }
        }
        else if (((iVar3 != 0) && (-1 < (int)uVar14)) && ((int)uVar14 < DAT_14c9647dc)) {
          uVar18 = (ulonglong)(uVar14 >> 0x10);
          lVar15 = (ulonglong)(uVar14 & 0xffff) * 3;
          lVar17 = (ulonglong)(uint)((int)lVar15 * 8) + *(longlong *)(DAT_14c9647c8 + uVar18 * 8);
          if (((lVar17 != 0) && (*(int *)(lVar17 + 0x10) == iVar3)) &&
             ((*(uint *)(lVar17 + 8) & 0x10200000) == 0)) {
            uVar12 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) * -0x7a143595;
            uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
            uVar12 = uVar12 >> 0x10 ^ uVar12;
            local_150 = uVar18;
            local_110 = lVar15;
            if ((int)param_1[6] != *(int *)((longlong)param_1 + 0x5c)) {
              plVar21 = (longlong *)param_1[0xd];
              if ((longlong *)param_1[0xd] == (longlong *)0x0) {
                plVar21 = local_148;
              }
              iVar32 = *(int *)((longlong)plVar21 + (ulonglong)((int)param_1[0xe] - 1U & uVar12) * 4
                               );
              if (iVar32 != -1) {
                do {
                  puVar30 = (ulonglong *)(*local_168 + (longlong)iVar32 * 0x18);
                  if (*puVar30 == uVar23) {
                    if (puVar30 != (ulonglong *)0x0) goto LAB_143811745;
                    break;
                  }
                  iVar32 = (int)puVar30[2];
                } while (iVar32 != -1);
              }
            }
            FUN_141806782(local_168,&local_108);
            puVar30 = puStack_100;
            *puStack_100 = uVar23;
            *(undefined4 *)(puStack_100 + 1) = 0xffffffff;
            *(undefined4 *)(puStack_100 + 2) = 0xffffffff;
            iVar32 = local_108._0_4_;
            local_178 = 0;
            cVar10 = FUN_143804666(plVar19,uVar12,puStack_100,&local_108);
            if (cVar10 == '\0') {
              uVar13 = (int)param_1[6] - *(int *)((longlong)param_1 + 0x5c);
              if (uVar13 < 4) {
                iVar27 = 1;
              }
              else {
                uVar23 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
                lVar15 = 0x3f;
                if (uVar23 != 0) {
                  for (; uVar23 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                  }
                }
                iVar27 = 1 << ((byte)lVar15 & 0x1f);
              }
              if (((int)uVar13 < 1) || (iVar27 <= (int)param_1[0xe])) {
                uVar12 = (int)param_1[0xe] - 1U & uVar12;
                *(uint *)((longlong)puVar30 + 0x14) = uVar12;
                plVar21 = (longlong *)param_1[0xd];
                if ((longlong *)param_1[0xd] == (longlong *)0x0) {
                  plVar21 = local_148;
                }
                *(undefined4 *)(puVar30 + 2) =
                     *(undefined4 *)
                      ((longlong)plVar21 +
                      ((longlong)(int)param_1[0xe] - 1U & (longlong)(int)uVar12) * 4);
                plVar21 = (longlong *)param_1[0xd];
                if ((longlong *)param_1[0xd] == (longlong *)0x0) {
                  plVar21 = local_148;
                }
                *(int *)((longlong)plVar21 +
                        ((longlong)(int)param_1[0xe] - 1U & (longlong)(int)uVar12) * 4) = iVar32;
              }
              else {
                *(int *)(param_1 + 0xe) = iVar27;
                FUN_141806958(local_168);
              }
            }
            puVar30 = (ulonglong *)(*local_168 + (longlong)iVar32 * 0x18);
LAB_143811745:
            lVar15 = local_110;
            plVar19 = local_130;
            puVar30 = puVar30 + 1;
            plVar21 = local_158;
            if ((int)*puVar30 == -1) {
              uVar12 = *(uint *)(param_1 + 4);
              uVar23 = (ulonglong)(int)uVar12;
              if (0 < (longlong)uVar23) {
                pcVar24 = (char *)(*local_130 + 0x4c);
                uVar18 = 0;
                do {
                  uVar31 = uVar18;
                  if (*pcVar24 == '\0') goto LAB_1438119f4;
                  uVar18 = uVar18 + 1;
                  pcVar24 = pcVar24 + 0x50;
                } while (uVar23 != uVar18);
              }
              *(uint *)(param_1 + 4) = uVar12 + 1;
              if (*(uint *)((longlong)param_1 + 0x24) < uVar12 + 1) {
                FUN_1464226be(local_130,uVar12);
              }
              FUN_143829e9c(uVar23 * 0x50 + *plVar19);
              uVar18 = (ulonglong)uVar12;
              uVar31 = uVar23;
LAB_1438119f4:
              *(int *)puVar30 = (int)uVar18;
              puVar28 = (undefined4 *)(uVar31 * 0x50 + *plVar19);
              iVar32 = (int)lVar15;
              if ((int)uVar14 < DAT_14c9647dc) {
                plVar21 = (longlong *)
                          ((ulonglong)(uint)(iVar32 * 8) +
                          *(longlong *)(DAT_14c9647c8 + local_150 * 8));
                if (((plVar21 == (longlong *)0x0) || ((int)plVar21[2] != iVar3)) ||
                   ((*(uint *)(plVar21 + 1) & 0x10200000) != 0)) {
                  lVar15 = 0;
                }
                else {
                  lVar15 = *plVar21;
                }
              }
              else {
                lVar15 = 0;
              }
              if ((*(char *)(lVar15 + 0x684) == '\x01') &&
                 ((*(longlong *)(lVar15 + 0x720) == 0 ||
                  (lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x720) + 0x3a8), lVar15 == 0)))) {
                uVar34 = (undefined4)DAT_14cb1ce20;
                uVar35 = (undefined4)((ulonglong)DAT_14cb1ce20 >> 0x20);
                puVar22 = (undefined4 *)&DAT_14cb1ce10;
              }
              else {
                uVar34 = (undefined4)*(undefined8 *)(lVar15 + 0x270);
                uVar35 = (undefined4)((ulonglong)*(undefined8 *)(lVar15 + 0x270) >> 0x20);
                puVar22 = (undefined4 *)(lVar15 + 0x260);
              }
              uVar6 = puVar22[1];
              uVar7 = puVar22[2];
              uVar8 = puVar22[3];
              *puVar28 = *puVar22;
              puVar28[1] = uVar6;
              puVar28[2] = uVar7;
              puVar28[3] = uVar8;
              *(ulonglong *)(puVar28 + 4) = CONCAT44(uVar35,uVar34);
              if ((((int)uVar14 < DAT_14c9647dc) &&
                  (plVar21 = (longlong *)
                             ((ulonglong)(uint)(iVar32 * 8) +
                             *(longlong *)(DAT_14c9647c8 + local_150 * 8)),
                  plVar21 != (longlong *)0x0)) &&
                 (((int)plVar21[2] == iVar3 && ((*(uint *)(plVar21 + 1) & 0x10200000) == 0)))) {
                lVar15 = *plVar21;
              }
              else {
                lVar15 = 0;
              }
              *(undefined8 *)(puVar28 + 6) = *(undefined8 *)(lVar15 + 0x6b8);
              uVar34 = *(undefined4 *)(lVar15 + 0x6c4);
              uVar35 = *(undefined4 *)(lVar15 + 0x6c8);
              uVar6 = *(undefined4 *)(lVar15 + 0x6cc);
              puVar28[8] = *(undefined4 *)(lVar15 + 0x6c0);
              puVar28[9] = uVar34;
              puVar28[10] = uVar35;
              puVar28[0xb] = uVar6;
              puVar33 = (undefined8 *)(puVar28 + 0xc);
              local_138 = puVar30;
              if (puVar33 != (undefined8 *)(lVar15 + 0x6d0)) {
                iVar27 = *(int *)(lVar15 + 0x6d8);
                pvVar4 = *(void **)(lVar15 + 0x6d0);
                puVar28[0xe] = iVar27;
                if (iVar27 == 0 && puVar28[0xf] == 0) {
                  puVar28[0xf] = 0;
                }
                else {
                  local_120 = pvVar4;
                  FUN_1446dd670(puVar33,iVar27);
                  if (iVar27 != 0) {
                    memcpy((void *)*puVar33,local_120,(longlong)iVar27 * 2);
                  }
                }
              }
              plVar21 = local_158;
              puVar28[0x10] = *(undefined4 *)(lVar15 + 0x6e0);
              *(undefined1 *)(puVar28 + 0x13) = 1;
              if ((int)uVar14 < DAT_14c9647dc) {
                puVar33 = (undefined8 *)
                          ((ulonglong)(uint)(iVar32 << 3) +
                          *(longlong *)(DAT_14c9647c8 + local_150 * 8));
                if (((puVar33 == (undefined8 *)0x0) || (*(int *)(puVar33 + 2) != iVar3)) ||
                   ((*(uint *)(puVar33 + 1) & 0x10200000) != 0)) {
                  uVar26 = 0;
                }
                else {
                  uVar26 = *puVar33;
                }
              }
              else {
                uVar26 = 0;
              }
              FUN_14380b060(uVar26,&local_108);
              dVar36 = local_f0 - local_108;
              if (local_f0 - local_108 <= local_e8 - (double)puStack_100) {
                dVar36 = local_e8 - (double)puStack_100;
              }
              if (dVar36 <= local_e0 - local_f8) {
                dVar36 = local_e0 - local_f8;
              }
              puVar28[0x12] = (float)(dVar36 * 0.5);
              if (0 < (int)param_1[2]) {
                uVar23 = *local_138;
                iVar32 = 0;
                bVar29 = 0;
                do {
                  bVar11 = FUN_144a05a2a(param_1,iVar32,(int)uVar23);
                  bVar29 = bVar29 | bVar11;
                  iVar32 = iVar32 + 1;
                } while (iVar32 < (int)param_1[2]);
                if ((bVar29 & 1) != 0) {
                  FUN_141807228(*param_1 + 0x3b8,puVar28,puVar28[0x12],1);
                  uVar23 = uStack_c0;
                  lVar15 = param_1[3];
                  lVar17 = (longlong)(int)*local_138 * 0x50;
                  dVar5 = (double)*(float *)(lVar15 + 0x48 + lVar17);
                  dVar36 = *(double *)(lVar15 + 0x10 + lVar17);
                  dVar1 = *(double *)(lVar15 + lVar17);
                  dVar2 = *(double *)(lVar15 + 8 + lVar17);
                  lVar15 = (longlong)(int)uStack_c0;
                  uVar14 = (int)uStack_c0 + 1;
                  uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar14);
                  if (uStack_c0._4_4_ < uVar14) {
                    FUN_140555802(&local_c8,uVar23 & 0xffffffff);
                  }
                  lVar15 = lVar15 * 0x38;
                  *(double *)(local_c8 + lVar15) = dVar1 - dVar5;
                  *(double *)(local_c8 + 8 + lVar15) = dVar2 - dVar5;
                  *(double *)(local_c8 + 0x10 + lVar15) = dVar36 - dVar5;
                  *(double *)(local_c8 + 0x18 + lVar15) = dVar1 + dVar5;
                  *(double *)(local_c8 + 0x20 + lVar15) = dVar2 + dVar5;
                  *(double *)(local_c8 + 0x28 + lVar15) = dVar36 + dVar5;
                  *(undefined1 *)(local_c8 + 0x30 + lVar15) = 1;
                  local_160 = CONCAT71((int7)((ulonglong)local_c8 >> 8),1);
                }
              }
              uVar14 = (int)local_128 + 1;
              local_128 = (ulonglong)uVar14;
              if (local_13c <= (int)uVar14 && 0 < local_13c) break;
            }
          }
        }
        iVar32 = (int)param_1[0x10];
      } while (iVar32 != 0);
      FUN_143811ec5(&local_b8,&local_c8);
      if ((local_160 & 1) != 0) {
        FUN_1418053f8(*param_1);
      }
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if (DAT_14cb1d000 != 0) {
      pvVar16 = TlsGetValue(DAT_14cb1d000);
      TlsSetValue(DAT_14cb1d000,(LPVOID)(longlong)((int)pvVar16 + -1));
    }
    ReleaseSRWLockExclusive(local_118);
  }
  if ((local_b0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143811ec5 FUN_143811ec5 body=3938 status=ok
// SIG undefined FUN_143811ec5(void)

void FUN_143811ec5(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  uint *puVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  int iVar27;
  uint uVar28;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  float local_180;
  float fStack_17c;
  uint *local_178;
  uint local_16c;
  undefined **local_168;
  undefined1 local_160;
  uint **local_158;
  undefined1 local_150 [40];
  uint *local_128;
  ulonglong local_120;
  undefined **local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  uint local_b8 [4];
  uint *local_a8;
  int local_a0;
  uint local_9c;
  int iStack_98;
  int local_94;
  undefined1 local_90 [8];
  undefined1 *local_88;
  uint local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((((int)param_2[1] != 0) && (*(longlong *)(*param_1 + 0x78) != 0)) &&
     (lVar19 = *(longlong *)(*(longlong *)(*param_1 + 0x78) + 0x140), lVar19 != 0)) {
    local_a8 = (uint *)0x0;
    local_a0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_9c = 0x80;
    iStack_98 = -1;
    local_94 = 0;
    local_88 = (undefined1 *)0x0;
    local_80 = 0;
    local_128 = (uint *)0x0;
    local_120 = 0x8000000000000000;
    local_188 = lVar19;
    FUN_144c3b9b0(local_150);
    local_160 = 0;
    local_168 = &PTR_FUN_14aba2e28;
    lVar19 = param_2[1];
    local_158 = &local_128;
    if ((longlong)(int)lVar19 != 0) {
      lVar17 = *param_2;
      lVar22 = 0;
      do {
        fStack_cc = (float)*(double *)(lVar17 + 0x28 + lVar22);
        fStack_17c = (float)*(double *)(lVar17 + 0x20 + lVar22);
        local_180 = (float)*(double *)(lVar17 + 0x18 + lVar22);
        fStack_dc = (float)*(double *)(lVar17 + 0x10 + lVar22);
        local_e8 = (float)*(double *)(lVar17 + lVar22) * 0.01;
        fStack_e4 = (float)*(double *)(lVar17 + 8 + lVar22) * 0.01;
        fStack_e0 = fStack_dc * 0.01;
        fStack_dc = fStack_dc * 0.01;
        local_d8 = local_180 * 0.01;
        fStack_d4 = fStack_17c * 0.01;
        fStack_d0 = fStack_cc * 0.01;
        fStack_cc = fStack_cc * 0.01;
        local_108 = 0xffffffff;
        local_100 = 0;
        uStack_f8 = 0;
        local_f0 = 0;
        local_118 = &PTR_LAB_14aba2e30;
        FUN_144c3c120(local_150,&local_118,&local_168);
        lVar22 = lVar22 + 0x38;
      } while ((longlong)(int)lVar19 * 0x38 - lVar22 != 0);
    }
    if ((longlong)(int)local_120 != 0) {
      local_178 = local_128 + (int)local_120;
      puVar12 = local_128;
      do {
        iVar14 = iStack_98;
        uVar11 = uStack_c0;
        uVar28 = *puVar12;
        uVar21 = uVar28 >> 0x16;
        lVar19 = *(longlong *)(*(longlong *)(local_188 + 0x38) + (ulonglong)(uVar21 * 0x120));
        if (lVar19 != 0) {
          iVar20 = (int)uStack_c0;
          if ((int)uStack_c0 != local_94) {
            puVar10 = local_88;
            if (local_88 == (undefined1 *)0x0) {
              puVar10 = local_90;
            }
            iVar7 = *(int *)(puVar10 + (ulonglong)(local_80 - 1 & uVar21) * 4);
            while (iVar7 != -1) {
              lVar17 = local_c8 + (longlong)iVar7 * 0x20;
              if (*(uint *)(local_c8 + (longlong)iVar7 * 0x20) == uVar21) {
                if (lVar17 != 0) {
                  lVar17 = lVar17 + 8;
                  goto LAB_1438126db;
                }
                break;
              }
              iVar7 = *(int *)(lVar17 + 0x18);
            }
          }
          local_118 = (undefined **)0x0;
          uStack_110._0_4_ = 0;
          uStack_110._4_4_ = 0x80000000;
          if (local_94 == 0) {
            uStack_c0 = CONCAT44(uStack_c0._4_4_,(int)uStack_c0 + 1);
            if (uStack_c0._4_4_ == iVar20) {
              FUN_1447711aa(&local_c8,uVar11 & 0xffffffff);
            }
            iVar14 = local_a0;
            if (local_a0 == 0) {
              iVar7 = -1;
            }
            else {
              iVar7 = local_a0 + 0x1e;
              if (-1 < local_a0 + -1) {
                iVar7 = local_a0 + -1;
              }
              iVar7 = iVar7 >> 5;
            }
            iVar16 = local_a0 + 1;
            iVar27 = local_a0 + 0x1f;
            if (-1 < local_a0) {
              iVar27 = local_a0;
            }
            if (iVar27 >> 5 == iVar7) {
              local_a0 = iVar16;
            }
            else {
              if ((int)local_9c <= local_a0) {
                if (local_a0 + 0x20U < 0xa0) {
                  local_9c = 0x80;
                }
                else {
                  uVar15 = local_a0 + 0x20U >> 5;
                  if (local_9c + 0x1f < 0xa0) {
                    uVar24 = 4;
                    if (4 < uVar15) {
                      uVar24 = uVar15;
                    }
                  }
                  else {
                    uVar24 = uVar15 + (uVar15 * 3 >> 3) + 0x10;
                  }
                  uVar11 = (ulonglong)(uVar24 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar8 = (uint)(uVar11 + 0xf);
                      if (uVar24 < 0x1ffd) {
                        uVar11 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar11 + 0xf >> 4]];
                      }
                      else {
                        uVar26 = (ulonglong)(uVar8 & 0xfffffff0);
                        if (uVar26 < 0x7ff1) {
                          bVar13 = (&DAT_14c841e00)[uVar8 >> 4];
                          uVar25 = 0x32;
                          if (0x32 < bVar13) {
                            uVar25 = (ulonglong)bVar13;
                          }
                          uVar18 = 0x32 - (ulonglong)bVar13;
                          do {
                            uVar11 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar18 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar18 & 0xffffffff] & 0xf) == 0)
                            goto LAB_1438127c4;
                            lVar17 = uVar25 + 1 + uVar18;
                            uVar18 = uVar18 - 1;
                          } while (lVar17 != 0x33);
                        }
                        uVar11 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar11 = 0x10;
                        }
                        uVar11 = -uVar11 & (uVar26 + uVar11) - 1;
                      }
                    }
                    else {
                      uVar11 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar11,0);
                    }
                  }
LAB_1438127c4:
                  iVar7 = (int)(uVar11 >> 2);
                  local_9c = iVar7 << 5;
                  if (iVar7 < (int)uVar15) {
                    local_9c = 0xffffffe0;
                  }
                }
                FUN_1446efbd8(local_b8,local_a0);
                iVar16 = local_a0 + 1;
              }
              iVar7 = iVar16 + 0x1f;
              if (-1 < iVar16) {
                iVar7 = iVar16;
              }
              local_a0 = iVar16;
              if (iVar16 % 0x20 != 0) {
                puVar9 = local_a8;
                if (local_a8 == (uint *)0x0) {
                  puVar9 = local_b8;
                }
                bVar13 = -(char)(iVar16 % 0x20);
                puVar9[iVar7 >> 5] = (puVar9[iVar7 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
              }
            }
            lVar17 = (longlong)iVar20;
            puVar9 = local_a8;
            if (local_a8 == (uint *)0x0) {
              puVar9 = local_b8;
            }
            bVar13 = (byte)iVar14 & 0x1f;
            puVar9[iVar27 >> 5] =
                 puVar9[iVar27 >> 5] & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
            iVar14 = iVar20;
          }
          else {
            lVar17 = (longlong)iStack_98;
            iStack_98 = *(int *)(local_c8 + 4 + lVar17 * 0x20);
            local_94 = local_94 + -1;
            if (local_94 != 0) {
              *(undefined4 *)(local_c8 + (longlong)iStack_98 * 0x20) = 0xffffffff;
            }
          }
          lVar22 = local_c8;
          puVar9 = local_a8;
          if (local_a8 == (uint *)0x0) {
            puVar9 = local_b8;
          }
          iVar20 = iVar14 + 0x1f;
          if (-1 < iVar14) {
            iVar20 = iVar14;
          }
          puVar9[iVar20 >> 5] = puVar9[iVar20 >> 5] | 1 << ((byte)iVar14 & 0x1f);
          lVar17 = lVar17 * 0x20;
          puVar1 = (undefined4 *)(local_c8 + lVar17);
          *(uint *)(local_c8 + lVar17) = uVar21;
          FUN_143829ef2(&local_118,&PTR_vftable_14c6e47c0);
          *(undefined ***)(lVar22 + 8 + lVar17) = local_118;
          *(undefined4 *)(lVar22 + 0x10 + lVar17) = (undefined4)uStack_110;
          *(undefined4 *)(lVar22 + 0x14 + lVar17) = uStack_110._4_4_;
          local_118 = (undefined **)0x0;
          uStack_110 = 0;
          *(undefined4 *)(lVar22 + 0x18 + lVar17) = 0xffffffff;
          uVar21 = *(uint *)(lVar22 + lVar17);
          uVar15 = (int)uStack_c0 - local_94;
          if (1 < uVar15) {
            puVar10 = local_88;
            if (local_88 == (undefined1 *)0x0) {
              puVar10 = local_90;
            }
            iVar20 = *(int *)(puVar10 + (ulonglong)(local_80 - 1 & uVar21) * 4);
            while (iVar20 != -1) {
              puVar2 = (undefined4 *)(local_c8 + (longlong)iVar20 * 0x20);
              if (*(uint *)(local_c8 + (longlong)iVar20 * 0x20) == uVar21) {
                puVar2[4] = 0;
                if (*(longlong *)(puVar2 + 2) != 0 && -1 < (longlong)(int)puVar2[5]) {
                  (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                            (&PTR_vftable_14c6e47c0,*(longlong *)(puVar2 + 2),
                             (longlong)(int)puVar2[5] << 3);
                }
                *(undefined8 *)(puVar2 + 2) = 0;
                puVar2[5] = 0x80000000;
                uVar3 = *puVar1;
                uVar4 = puVar1[1];
                uVar5 = puVar1[2];
                uVar6 = puVar1[3];
                *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
                *puVar2 = uVar3;
                puVar2[1] = uVar4;
                puVar2[2] = uVar5;
                puVar2[3] = uVar6;
                FUN_147e675be(&local_c8,iVar14);
                iVar14 = iVar20;
                goto LAB_143812679;
              }
              iVar20 = puVar2[6];
            }
          }
          uVar24 = 1;
          if (3 < uVar15) {
            uVar11 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
            lVar17 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            uVar24 = 1 << ((byte)lVar17 & 0x1f);
          }
          if (((int)uVar15 < 1) || ((int)uVar24 <= (int)local_80)) {
            uVar21 = local_80 - 1 & uVar21;
            puVar1[7] = uVar21;
            puVar10 = local_88;
            if (local_88 == (undefined1 *)0x0) {
              puVar10 = local_90;
            }
            puVar1[6] = *(undefined4 *)
                         (puVar10 + ((longlong)(int)local_80 - 1U & (longlong)(int)uVar21) * 4);
            puVar10 = local_88;
            if (local_88 == (undefined1 *)0x0) {
              puVar10 = local_90;
            }
            *(int *)(puVar10 + ((longlong)(int)local_80 - 1U & (longlong)(int)uVar21) * 4) = iVar14;
          }
          else {
            local_80 = uVar24;
            if (local_88 != (undefined1 *)0x0) {
              FUN_1446efa72(&local_88,0,0,4);
            }
            uVar21 = local_80;
            if (local_80 == 1) {
              if (local_88 != (undefined1 *)0x0) {
                FUN_1446efa72(&local_88,0,0,4);
              }
LAB_143812471:
              uVar15 = 0;
              do {
                puVar10 = local_88;
                if (local_88 == (undefined1 *)0x0) {
                  puVar10 = local_90;
                }
                *(undefined4 *)(puVar10 + (ulonglong)(local_80 + 0x7fffffff & uVar15) * 4) =
                     0xffffffff;
                uVar15 = uVar15 + 1;
              } while (uVar21 != uVar15);
            }
            else {
              if (local_80 == 0) goto LAB_143812679;
              FUN_1446efa72(&local_88,0,local_80,4);
              if (0 < (int)uVar21) goto LAB_143812471;
            }
            if (local_a0 == 0) {
              uVar11 = 0;
              uVar26 = 1;
              iVar20 = 0;
              iVar7 = 0;
            }
            else {
              puVar9 = local_a8;
              if (local_a8 == (uint *)0x0) {
                puVar9 = local_b8;
              }
              uVar21 = *puVar9;
              if (uVar21 == 0) {
                iVar20 = local_a0 + 0x1e;
                if (-1 < local_a0 + -1) {
                  iVar20 = local_a0 + -1;
                }
                uVar11 = 0;
                uVar26 = (ulonglong)(uint)(iVar20 >> 5);
                if (iVar20 >> 5 < 1) {
                  uVar26 = uVar11;
                }
                iVar7 = 0;
                do {
                  if (uVar26 == uVar11) goto LAB_143812679;
                  iVar7 = iVar7 + 0x20;
                  uVar21 = puVar9[uVar11 + 1];
                  uVar11 = uVar11 + 1;
                } while (uVar21 == 0);
              }
              else {
                uVar11 = 0;
                iVar7 = 0;
              }
              uVar26 = (ulonglong)(-uVar21 & uVar21);
              uVar25 = uVar26 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar25 != 0) {
                for (; uVar25 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              iVar20 = (iVar7 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
              if (local_a0 <= iVar20) {
                iVar20 = local_a0;
              }
            }
            if (iVar20 < local_a0) {
              uVar21 = 0xffffffff;
              do {
                lVar17 = (longlong)iVar20 * 0x20;
                uVar25 = (longlong)(int)local_80 - 1U & (longlong)*(int *)(local_c8 + lVar17);
                iVar16 = (int)uVar25;
                *(int *)(local_c8 + 0x1c + lVar17) = iVar16;
                puVar10 = local_88;
                if (local_88 == (undefined1 *)0x0) {
                  puVar10 = local_90;
                }
                *(undefined4 *)(local_c8 + 0x18 + lVar17) =
                     *(undefined4 *)(puVar10 + ((longlong)(int)local_80 - 1U & uVar25) * 4);
                puVar10 = local_88;
                if (local_88 == (undefined1 *)0x0) {
                  puVar10 = local_90;
                }
                *(int *)(puVar10 + ((longlong)iVar16 & (longlong)(int)local_80 - 1U) * 4) = iVar20;
                uVar21 = ~(uint)uVar26 & uVar21;
                puVar9 = local_a8;
                if (local_a8 == (uint *)0x0) {
                  puVar9 = local_b8;
                }
                iVar20 = (int)uVar11;
                lVar17 = (longlong)iVar20;
                uVar15 = puVar9[lVar17] & uVar21;
                if (uVar15 == 0) {
                  iVar16 = local_a0 + 0x1e;
                  if (-1 < local_a0 + -1) {
                    iVar16 = local_a0 + -1;
                  }
                  iVar16 = iVar16 >> 5;
                  iVar27 = iVar16;
                  if (iVar16 < iVar20) {
                    iVar27 = iVar20;
                  }
                  if (iVar16 <= iVar20) break;
                  lVar22 = 0;
                  while( true ) {
                    iVar7 = iVar7 + 0x20;
                    uVar15 = puVar9[lVar17 + lVar22 + 1];
                    if (uVar15 != 0) break;
                    lVar22 = lVar22 + 1;
                    if (iVar27 - lVar17 == lVar22) goto LAB_143812679;
                  }
                  uVar11 = (ulonglong)(iVar20 + (int)lVar22 + 1);
                  uVar21 = 0xffffffff;
                }
                uVar26 = (ulonglong)(-uVar15 & uVar15);
                uVar25 = uVar26 * 2 + 1;
                lVar17 = 0x3f;
                if (uVar25 != 0) {
                  for (; uVar25 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                  }
                }
                iVar20 = (iVar7 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
              } while (iVar20 < local_a0);
            }
          }
LAB_143812679:
          lVar17 = local_c8;
          uVar11 = uStack_110 >> 0x20;
          uStack_110 = uStack_110 & 0xffffffff00000000;
          lVar22 = (longlong)(int)uVar11;
          if (local_118 != (undefined **)0x0 && -1 < lVar22) {
            (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                      (&PTR_vftable_14c6e47c0,local_118,lVar22 << 3);
          }
          lVar17 = lVar17 + (longlong)iVar14 * 0x20 + 8;
          FUN_144c3f230(lVar19,lVar17);
LAB_1438126db:
          local_16c = uVar28 & 0x3fffff;
          FUN_144c3f320(lVar19,lVar17,&local_16c);
        }
        puVar12 = puVar12 + 1;
      } while (puVar12 != local_178);
    }
    iVar14 = local_a0;
    if (local_a0 == 0) {
      uVar26 = 1;
      uVar11 = 0;
      iVar7 = 0;
      iVar20 = 0;
    }
    else {
      puVar12 = local_a8;
      if (local_a8 == (uint *)0x0) {
        puVar12 = local_b8;
      }
      uVar28 = *puVar12;
      if (uVar28 == 0) {
        iVar20 = local_a0 + 0x1e;
        if (-1 < local_a0 + -1) {
          iVar20 = local_a0 + -1;
        }
        uVar11 = 0;
        uVar26 = (ulonglong)(uint)(iVar20 >> 5);
        if (iVar20 >> 5 < 1) {
          uVar26 = uVar11;
        }
        iVar7 = 0;
        do {
          if (uVar26 == uVar11) goto LAB_143812a3d;
          iVar7 = iVar7 + 0x20;
          uVar28 = puVar12[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar28 == 0);
      }
      else {
        uVar11 = 0;
        iVar7 = 0;
      }
      uVar26 = (ulonglong)(-uVar28 & uVar28);
      uVar25 = uVar26 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar20 = (iVar7 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if (local_a0 <= iVar20) {
        iVar20 = local_a0;
      }
    }
    if (iVar20 != local_a0) {
      uVar28 = 0xffffffff;
      lVar19 = local_188;
      do {
        FUN_144c3f3c0(*(undefined8 *)
                       (*(longlong *)(lVar19 + 0x38) +
                       (longlong)*(int *)(local_c8 + (longlong)iVar20 * 0x20) * 0x120));
        uVar28 = ~(uint)uVar26 & uVar28;
        puVar12 = local_a8;
        if (local_a8 == (uint *)0x0) {
          puVar12 = local_b8;
        }
        iVar20 = (int)uVar11;
        lVar17 = (longlong)iVar20;
        uVar21 = puVar12[lVar17] & uVar28;
        if (uVar21 == 0) {
          iVar16 = local_a0 + 0x1e;
          if (-1 < local_a0 + -1) {
            iVar16 = local_a0 + -1;
          }
          iVar16 = iVar16 >> 5;
          iVar7 = iVar7 + 0x20;
          iVar27 = iVar16;
          if (iVar16 < iVar20) {
            iVar27 = iVar20;
          }
          if (iVar20 < iVar16) {
            lVar22 = 0;
            do {
              uVar21 = puVar12[lVar17 + lVar22 + 1];
              if (uVar21 != 0) {
                uVar11 = (ulonglong)(iVar20 + (int)lVar22 + 1);
                uVar28 = 0xffffffff;
                goto LAB_143812d89;
              }
              iVar7 = iVar7 + 0x20;
              lVar22 = lVar22 + 1;
            } while (iVar27 - lVar17 != lVar22);
            uVar28 = 0xffffffff;
            lVar17 = (longlong)iVar27;
          }
          uVar11 = lVar17 + 1U & 0xffffffff;
          lVar19 = local_188;
          iVar20 = local_a0;
        }
        else {
LAB_143812d89:
          uVar26 = (ulonglong)(-uVar21 & uVar21);
          uVar25 = uVar26 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar20 = (iVar7 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (local_a0 <= iVar20) {
            iVar20 = local_a0;
          }
        }
      } while (iVar20 != iVar14);
    }
LAB_143812a3d:
    uVar11 = local_120 >> 0x20;
    local_120 = local_120 & 0xffffffff00000000;
    lVar19 = (longlong)(int)uVar11;
    if ((-1 < lVar19) && (local_128 != (uint *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))(&PTR_vftable_14c6e47c0,local_128,lVar19 << 2);
    }
    local_80 = 0;
    if (local_88 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_a0 == 0) {
      uVar11 = 0;
      uVar26 = 1;
      iVar14 = 0;
      iVar20 = 0;
    }
    else {
      puVar12 = local_a8;
      if (local_a8 == (uint *)0x0) {
        puVar12 = local_b8;
      }
      uVar28 = *puVar12;
      if (uVar28 == 0) {
        iVar14 = local_a0 + 0x1e;
        if (-1 < local_a0 + -1) {
          iVar14 = local_a0 + -1;
        }
        uVar11 = 0;
        uVar26 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar26 = uVar11;
        }
        iVar20 = 0;
        do {
          if (uVar26 == uVar11) goto LAB_143812c26;
          iVar20 = iVar20 + 0x20;
          uVar28 = puVar12[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar28 == 0);
      }
      else {
        uVar11 = 0;
        iVar20 = 0;
      }
      uVar26 = (ulonglong)(-uVar28 & uVar28);
      uVar25 = uVar26 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar14 = (iVar20 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if (local_a0 <= iVar14) {
        iVar14 = local_a0;
      }
    }
    if (iVar14 < local_a0) {
      uVar28 = 0xffffffff;
      do {
        lVar17 = local_c8;
        lVar23 = (longlong)iVar14 * 0x20;
        lVar19 = *(longlong *)(local_c8 + 8 + lVar23);
        *(undefined4 *)(local_c8 + 0x10 + lVar23) = 0;
        lVar22 = (longlong)*(int *)(local_c8 + 0x14 + lVar23);
        if ((-1 < lVar22) && (lVar19 != 0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))(&PTR_vftable_14c6e47c0,lVar19,lVar22 << 3);
        }
        *(undefined8 *)(lVar17 + lVar23 + 8) = 0;
        *(undefined4 *)(lVar17 + lVar23 + 0x14) = 0x80000000;
        uVar28 = uVar28 & ~(uint)uVar26;
        puVar12 = local_a8;
        if (local_a8 == (uint *)0x0) {
          puVar12 = local_b8;
        }
        iVar14 = (int)uVar11;
        lVar19 = (longlong)iVar14;
        uVar21 = puVar12[lVar19] & uVar28;
        if (uVar21 == 0) {
          iVar7 = local_a0 + 0x1e;
          if (-1 < local_a0 + -1) {
            iVar7 = local_a0 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar16 = iVar7;
          if (iVar7 < iVar14) {
            iVar16 = iVar14;
          }
          if (iVar7 <= iVar14) break;
          lVar17 = 0;
          while( true ) {
            iVar20 = iVar20 + 0x20;
            uVar21 = puVar12[lVar19 + lVar17 + 1];
            if (uVar21 != 0) break;
            lVar17 = lVar17 + 1;
            if (iVar16 - lVar19 == lVar17) goto LAB_143812c26;
          }
          uVar11 = (ulonglong)(iVar14 + (int)lVar17 + 1);
          uVar28 = 0xffffffff;
        }
        uVar26 = (ulonglong)(-uVar21 & uVar21);
        uVar25 = uVar26 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        iVar14 = (iVar20 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      } while (iVar14 < local_a0);
    }
LAB_143812c26:
    uVar11 = uStack_c0 >> 0x20;
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    if ((int)uVar11 != 0) {
      FUN_1446f4a44(&local_c8,0);
    }
    iStack_98 = 0xffffffff;
    local_94 = 0;
    local_a0 = 0;
    if (0x80 < local_9c) {
      local_9c = 0x80;
      FUN_1446efbd8(local_b8,0);
    }
    if (local_a8 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143812e28 FUN_143812e28 body=69 status=ok
// SIG undefined FUN_143812e28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143812e28(void)

{
  _DAT_14cb1ce28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143812e6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1ce30,1);
  return;
}



// FUNCTION 143812e6d FUN_143812e6d body=69 status=ok
// SIG undefined FUN_143812e6d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143812e6d(void)

{
  _DAT_14cb1ce40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143812eaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1ce48,1);
  return;
}



// FUNCTION 143812eb2 FUN_143812eb2 body=69 status=ok
// SIG undefined FUN_143812eb2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143812eb2(void)

{
  _DAT_14cb1ce58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143812ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1ce60,1);
  return;
}



// FUNCTION 143812ef8 FUN_143812ef8 body=429 status=ok
// SIG undefined FUN_143812ef8(void)

undefined4 FUN_143812ef8(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  double _X;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  if (param_2[2] - 1 < 2) {
    if (*param_2 == 0xffffffff) {
      return 0xbf800000;
    }
    if (param_2[1] == 0xffffffff) {
      return 0xbf800000;
    }
  }
  else if (param_2[2] != 3) {
    return 0xbf800000;
  }
  _X = *(double *)(param_2 + 4);
  if ((((((-DAT_14cb1cda8 < _X) && (_X < DAT_14cb1cda8)) &&
        (-DAT_14cb1cdb0 < *(double *)(param_2 + 6))) &&
       ((*(double *)(param_2 + 6) < DAT_14cb1cdb0 && (-DAT_14cb1cdb8 < *(double *)(param_2 + 8)))))
      && ((*(double *)(param_2 + 8) < DAT_14cb1cdb8 &&
          ((iVar3 = _finite(_X), iVar3 != 0 &&
           (iVar3 = _finite(*(double *)(param_2 + 6)), iVar3 != 0)))))) &&
     ((iVar3 = _finite(*(double *)(param_2 + 8)), iVar3 != 0 &&
      (lVar2 = *(longlong *)(param_1 + 0xa0), lVar2 != 0)))) {
    uVar6 = 0xffffffff;
    uVar4 = 0xffffffff;
    if (param_2[2] == 1) {
      uVar6 = param_2[1];
      uVar4 = (ulonglong)*param_2;
    }
    if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
      lVar5 = (uVar4 << 0x20) + (longlong)(int)uVar6;
      lVar7 = lVar2 + 0x58;
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        lVar7 = *(longlong *)(lVar2 + 0x60);
      }
      iVar3 = *(int *)(lVar7 + (ulonglong)
                               (*(int *)(lVar2 + 0x68) - 1U &
                               uVar6 + (int)((ulonglong)lVar5 >> 0x20) * 0x17) * 4);
      if (iVar3 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar3 * 0x18);
          if (*plVar1 == lVar5) {
            if (plVar1 == (longlong *)0x0) {
              return 0xbf800000;
            }
            if (plVar1 + 1 == (longlong *)0x0) {
              return 0xbf800000;
            }
            return (int)plVar1[1];
          }
          iVar3 = (int)plVar1[2];
        } while (iVar3 != -1);
      }
    }
  }
  return 0xbf800000;
}



// FUNCTION 1438130a6 FUN_1438130a6 body=34 status=ok
// SIG undefined FUN_1438130a6(void)

undefined8 * FUN_1438130a6(undefined8 *param_1,longlong *param_2)

{
  *param_1 = param_2;
  AcquireSRWLockShared((PSRWLOCK)(*param_2 + 0xb0));
  return param_1;
}



// FUNCTION 1438130c8 FUN_1438130c8 body=18 status=ok
// SIG undefined FUN_1438130c8(void)

void FUN_1438130c8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001438130d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)*param_1 + 0xb0));
  return;
}



// FUNCTION 1438130df FUN_1438130df body=46 status=ok
// SIG undefined FUN_1438130df(void)

void FUN_1438130df(void)

{
  if (DAT_14cb1ce78 != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    DAT_14cb1ce78 = 0;
  }
  return;
}



// FUNCTION 14381310d FUN_14381310d body=59 status=ok
// SIG undefined FUN_14381310d(void)

void FUN_14381310d(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb1cf80;
  if (DAT_14cb1cf80 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb1cf80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014381313d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143813148 FUN_143813148 body=171 status=ok
// SIG undefined FUN_143813148(void)

void FUN_143813148(undefined8 param_1)

{
  int *piVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14069cc7b(&local_28,param_1);
  if (local_28 != 0) {
    uVar3 = FUN_140d7d4de(local_28 + 0x470,local_28 + 0x478,local_28 + 0x4c8,param_1);
    bVar2 = FUN_147e47f23(uVar3);
    *(byte *)(local_28 + 0x500) = *(byte *)(local_28 + 0x500) | bVar2;
  }
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143813204 FUN_143813204 body=171 status=ok
// SIG undefined FUN_143813204(void)

void FUN_143813204(undefined8 param_1)

{
  int *piVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14069cc7b(&local_28,param_1);
  if (local_28 != 0) {
    uVar3 = FUN_140f0d332(local_28 + 0x470,local_28 + 0x508,local_28 + 0x558,param_1);
    bVar2 = FUN_147e48089(uVar3);
    *(byte *)(local_28 + 0x590) = *(byte *)(local_28 + 0x590) | bVar2;
  }
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438132c0 FUN_1438132c0 body=1697 status=ok
// SIG undefined FUN_1438132c0(void)

bool FUN_1438132c0(int *param_1,longlong *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined2 *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  
  piVar1 = param_1 + 1;
  piVar2 = param_1 + 3;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  puVar3 = (undefined2 *)((longlong)param_1 + 0x11);
  *(undefined2 *)((longlong)param_1 + 0x11) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13) = 0;
  lVar17 = param_2[1];
  if ((longlong)(int)lVar17 == 0) {
    iVar15 = 0;
    bVar19 = false;
    iVar13 = 0;
LAB_1438135a4:
    iVar12 = param_1[2];
    if (iVar12 == 2) {
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)((longlong)param_1 + 0x13) = 0;
      *puVar3 = 0;
      param_1[2] = 2;
      if (!bVar19) {
        return true;
      }
      iVar15 = 0;
      iVar12 = 2;
LAB_1438135db:
      iVar13 = 0;
    }
    else {
      if (*piVar2 == 2) goto LAB_1438135ec;
      if (iVar15 == 1) {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        *(undefined1 *)(param_1 + 4) = 1;
        *(undefined1 *)((longlong)param_1 + 0x13) = 0;
        *puVar3 = 0;
        param_1[1] = 1;
        if (!bVar19) {
          return true;
        }
        iVar15 = 1;
        goto LAB_14381357e;
      }
      if (iVar13 != 1) {
        if (iVar12 == 1) {
          param_1[0] = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          *(undefined1 *)(param_1 + 4) = 1;
          *(undefined1 *)((longlong)param_1 + 0x13) = 0;
          *puVar3 = 0;
          param_1[2] = 1;
          if (!bVar19) {
            return true;
          }
          iVar15 = 0;
          iVar12 = 1;
          goto LAB_1438135db;
        }
        if (*piVar2 == 1) {
          param_1[2] = 0;
          param_1[0] = 0;
          param_1[1] = 0;
          *(undefined1 *)(param_1 + 4) = 1;
          *(undefined1 *)((longlong)param_1 + 0x13) = 0;
          *puVar3 = 0;
          goto LAB_1438135f9;
        }
        goto LAB_143813606;
      }
      param_1[3] = 0;
      piVar1[0] = 0;
      piVar1[1] = 0;
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)((longlong)param_1 + 0x13) = 0;
      *puVar3 = 0;
      *param_1 = 1;
      if (!bVar19) {
        return true;
      }
      iVar13 = 1;
      iVar12 = 0;
      iVar15 = 0;
    }
  }
  else {
    lVar10 = *param_2;
    lVar16 = 0;
    bVar6 = false;
    do {
      puVar4 = *(uint **)(lVar10 + lVar16);
      if (puVar4[10] != 0) {
        piVar9 = *(int **)(puVar4 + 8);
        iVar15 = *piVar9;
        if (iVar15 == 3) {
          uVar7 = puVar4[2];
          if (uVar7 < 0xb) {
            if ((0x54U >> (uVar7 & 0x1f) & 1) == 0) {
              if ((0x602U >> (uVar7 & 0x1f) & 1) == 0) {
                if ((uVar7 == 8) && (puVar4[0xc] != 1)) goto LAB_14381336b;
                goto LAB_143813435;
              }
            }
            else {
              puVar4[2] = 1;
            }
LAB_143813404:
            iVar15 = puVar4[10] - 1;
            if (iVar15 == 0) {
              uVar7 = 0;
            }
            else {
              memmove(piVar9,piVar9 + 1,(longlong)iVar15 << 2);
              uVar7 = puVar4[10] - 1;
            }
            puVar4[10] = uVar7;
            FUN_141808350(puVar4 + 8);
          }
        }
        else {
          if (iVar15 == 2) {
            if (4 < puVar4[2] - 4) {
              if (puVar4[2] != 1) goto LAB_143813435;
              puVar4[2] = 4;
            }
            goto LAB_143813404;
          }
          if (iVar15 == 1) {
            uVar7 = puVar4[2];
            if ((uVar7 == 8) && (puVar4[0xc] == 0)) {
LAB_14381336b:
              puVar4[2] = 9;
            }
            else if (uVar7 < 7) {
              if ((0x52U >> (uVar7 & 0x1f) & 1) == 0) {
                if ((0xcU >> (uVar7 & 0x1f) & 1) == 0) goto LAB_143813435;
              }
              else {
                puVar4[2] = 2;
              }
              goto LAB_143813404;
            }
          }
        }
      }
LAB_143813435:
      bVar19 = bVar6;
      switch(puVar4[2]) {
      case 1:
        bVar19 = true;
        if (!bVar6) {
          if (puVar4[1] == 0) {
LAB_143813510:
            bVar19 = false;
          }
          else {
            uVar7 = *puVar4;
            bVar19 = false;
            if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
              lVar11 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
              if ((lVar11 == 0) || (*(uint *)(lVar11 + 0x10) != puVar4[1])) goto LAB_143813510;
              bVar19 = (*(uint *)(lVar11 + 8) & 0x10200000) == 0;
            }
          }
          bVar19 = (bool)(bVar19 ^ 1);
        }
        break;
      case 2:
        if (param_1[2] != 2) {
          param_1[2] = 1;
        }
        break;
      case 3:
        param_1[2] = 2;
        break;
      case 4:
        if (*param_1 != 2) {
          *param_1 = 1;
        }
        break;
      case 5:
        *param_1 = 2;
        break;
      case 6:
      case 9:
        if (*piVar1 != 2) {
          *piVar1 = 1;
        }
        break;
      case 7:
      case 10:
        *piVar1 = 2;
        break;
      case 8:
        if ((*(char *)((longlong)puVar4 + 0x49) == '\x01') && (*piVar2 != 2)) {
          *piVar2 = 1;
        }
      }
      piVar9 = piVar2;
      if ((puVar4[0xc] == 2) || (piVar9 = param_1, puVar4[0xc] == 1)) {
        *piVar9 = 2;
      }
      lVar16 = lVar16 + 8;
      bVar6 = bVar19;
    } while ((longlong)(int)lVar17 * 8 != lVar16);
    iVar15 = *piVar1;
    if (iVar15 == 2) {
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)((longlong)param_1 + 0x13) = 0;
      *puVar3 = 0;
      param_1[1] = 2;
      if (!bVar19) {
        return true;
      }
      iVar15 = 2;
LAB_14381357e:
      iVar12 = 0;
      goto LAB_1438135db;
    }
    iVar13 = *param_1;
    if (iVar13 != 2) goto LAB_1438135a4;
LAB_1438135ec:
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
LAB_1438135f9:
    iVar12 = 0;
    iVar15 = 0;
    iVar13 = 0;
LAB_143813606:
    if (!bVar19) goto LAB_14381393a;
  }
  uVar7 = *(uint *)(param_2 + 1);
  lVar17 = (longlong)(int)uVar7;
  if (lVar17 != 0) {
    puVar5 = (undefined8 *)*param_2;
    puVar4 = (uint *)*puVar5;
    iVar15 = 0;
    bVar19 = false;
    if (puVar4[2] == 1) {
      bVar19 = true;
      if ((((puVar4[1] != 0) && (uVar8 = *puVar4, -1 < (int)uVar8)) && ((int)uVar8 < DAT_14c9647dc))
         && ((lVar10 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8), lVar10 != 0 &&
             (*(uint *)(lVar10 + 0x10) == puVar4[1])))) {
        bVar19 = (*(uint *)(lVar10 + 8) & 0x10200000) != 0;
      }
    }
    uVar14 = 0;
    do {
      iVar13 = (int)uVar14;
      uVar8 = iVar13 + 1;
      if ((int)uVar8 < (int)uVar7) {
        do {
          iVar13 = (int)uVar14;
          lVar10 = (longlong)iVar13;
          bVar6 = true;
          lVar16 = 0;
          do {
            puVar4 = (uint *)puVar5[lVar10 + lVar16 + 1];
            if (puVar4[2] == 1) {
              if (((puVar4[1] == 0) || (uVar8 = *puVar4, (int)uVar8 < 0)) ||
                 ((DAT_14c9647dc <= (int)uVar8 ||
                  ((lVar11 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8),
                   lVar11 == 0 || (*(uint *)(lVar11 + 0x10) != puVar4[1])))))) {
                bVar18 = bVar19 == false;
              }
              else {
                bVar18 = bVar19 == ((*(uint *)(lVar11 + 8) & 0x10200000) == 0);
              }
              if (bVar18) {
                uVar8 = (int)lVar16 + iVar13 + 1;
                break;
              }
            }
            else if (bVar19) {
              FUN_140d4af13(puVar5 + lVar10,(int)lVar16 + 1);
              if (!bVar6) goto LAB_14381392d;
              uVar14 = (uVar14 & 0xffffffff) + lVar16 + 1;
              goto LAB_143813734;
            }
            bVar6 = lVar10 + lVar16 + 2 < lVar17;
            lVar16 = lVar16 + 1;
            uVar8 = uVar7;
          } while ((lVar17 + -1) - lVar10 != lVar16);
          iVar12 = uVar8 - iVar13;
          if (bVar19 == false) goto LAB_143813780;
          FUN_140d4af13(puVar5 + lVar10,iVar12);
          uVar14 = (ulonglong)uVar8;
          if (!bVar6) goto LAB_14381392d;
LAB_143813734:
          iVar13 = (int)uVar14;
          uVar8 = iVar13 + 1;
          bVar19 = false;
        } while ((int)uVar8 < (int)uVar7);
      }
      else if (bVar19 != false) {
        FUN_140d4af13(puVar5 + iVar13,1);
        break;
      }
      bVar6 = false;
      iVar12 = 1;
LAB_143813780:
      uVar14 = (ulonglong)uVar8;
      if (iVar15 != iVar13) {
        memmove(puVar5 + iVar15,puVar5 + iVar13,(longlong)iVar12 << 3);
      }
      iVar15 = iVar15 + iVar12;
      bVar19 = true;
    } while (bVar6);
LAB_14381392d:
    *(int *)(param_2 + 1) = iVar15;
    iVar13 = *param_1;
    iVar15 = param_1[1];
    iVar12 = param_1[2];
  }
LAB_14381393a:
  bVar19 = true;
  if (((iVar13 == 0) && (iVar15 == 0)) && (iVar12 == 0)) {
    bVar19 = *piVar2 != 0;
  }
  return bVar19;
}



// FUNCTION 143813961 FUN_143813961 body=1712 status=ok
// SIG undefined FUN_143813961(void)

bool FUN_143813961(int *param_1,longlong *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined2 *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  
  piVar1 = param_1 + 1;
  piVar2 = param_1 + 3;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  puVar3 = (undefined2 *)((longlong)param_1 + 0x11);
  *(undefined2 *)((longlong)param_1 + 0x11) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13) = 0;
  lVar17 = param_2[1];
  if ((longlong)(int)lVar17 == 0) {
    iVar14 = 0;
    bVar18 = false;
    iVar10 = 0;
LAB_143813c41:
    iVar9 = param_1[2];
    if (iVar9 == 2) {
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)((longlong)param_1 + 0x13) = 0;
      *puVar3 = 0;
      param_1[2] = 2;
      if (!bVar18) {
        return true;
      }
      iVar14 = 0;
      iVar9 = 2;
LAB_143813c7b:
      iVar10 = 0;
    }
    else {
      if (*piVar2 == 2) goto LAB_143813c8c;
      if (iVar14 == 1) {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        *(undefined1 *)(param_1 + 4) = 1;
        *(undefined1 *)((longlong)param_1 + 0x13) = 0;
        *puVar3 = 0;
        param_1[1] = 1;
        if (!bVar18) {
          return true;
        }
        iVar14 = 1;
        goto LAB_143813c1c;
      }
      if (iVar10 != 1) {
        if (iVar9 == 1) {
          param_1[0] = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          *(undefined1 *)(param_1 + 4) = 1;
          *(undefined1 *)((longlong)param_1 + 0x13) = 0;
          *puVar3 = 0;
          param_1[2] = 1;
          if (!bVar18) {
            return true;
          }
          iVar14 = 0;
          iVar9 = 1;
          goto LAB_143813c7b;
        }
        if (*piVar2 == 1) {
          param_1[2] = 0;
          param_1[0] = 0;
          param_1[1] = 0;
          *(undefined1 *)(param_1 + 4) = 1;
          *(undefined1 *)((longlong)param_1 + 0x13) = 0;
          *puVar3 = 0;
          goto LAB_143813c99;
        }
        goto LAB_143813ca7;
      }
      param_1[3] = 0;
      piVar1[0] = 0;
      piVar1[1] = 0;
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)((longlong)param_1 + 0x13) = 0;
      *puVar3 = 0;
      *param_1 = 1;
      if (!bVar18) {
        return true;
      }
      iVar10 = 1;
      iVar9 = 0;
      iVar14 = 0;
    }
  }
  else {
    lVar12 = *param_2;
    lVar16 = 0;
    bVar6 = false;
    do {
      puVar4 = *(uint **)(lVar12 + lVar16);
      if (puVar4[10] != 0) {
        piVar8 = *(int **)(puVar4 + 8);
        iVar14 = *piVar8;
        if (iVar14 == 3) {
          uVar7 = puVar4[2];
          if (uVar7 < 0xb) {
            if ((0x54U >> (uVar7 & 0x1f) & 1) == 0) {
              if ((0x602U >> (uVar7 & 0x1f) & 1) == 0) {
                if ((uVar7 == 8) && (puVar4[0xc] != 1)) goto LAB_143813a09;
                goto LAB_143813ad3;
              }
            }
            else {
              puVar4[2] = 1;
            }
LAB_143813aa2:
            iVar14 = puVar4[10] - 1;
            if (iVar14 == 0) {
              uVar7 = 0;
            }
            else {
              memmove(piVar8,piVar8 + 1,(longlong)iVar14 << 2);
              uVar7 = puVar4[10] - 1;
            }
            puVar4[10] = uVar7;
            FUN_141808350(puVar4 + 8);
          }
        }
        else {
          if (iVar14 == 2) {
            if (4 < puVar4[2] - 4) {
              if (puVar4[2] != 1) goto LAB_143813ad3;
              puVar4[2] = 4;
            }
            goto LAB_143813aa2;
          }
          if (iVar14 == 1) {
            uVar7 = puVar4[2];
            if ((uVar7 == 8) && (puVar4[0xc] == 0)) {
LAB_143813a09:
              puVar4[2] = 9;
            }
            else if (uVar7 < 7) {
              if ((0x52U >> (uVar7 & 0x1f) & 1) == 0) {
                if ((0xcU >> (uVar7 & 0x1f) & 1) == 0) goto LAB_143813ad3;
              }
              else {
                puVar4[2] = 2;
              }
              goto LAB_143813aa2;
            }
          }
        }
      }
LAB_143813ad3:
      bVar18 = bVar6;
      switch(puVar4[2]) {
      case 1:
        bVar18 = true;
        if (!bVar6) {
          if (puVar4[1] == 0) {
LAB_143813bae:
            bVar18 = false;
          }
          else {
            uVar7 = *puVar4;
            bVar18 = false;
            if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
              lVar13 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
              if ((lVar13 == 0) || (*(uint *)(lVar13 + 0x10) != puVar4[1])) goto LAB_143813bae;
              bVar18 = (*(uint *)(lVar13 + 8) & 0x10200000) == 0;
            }
          }
          bVar18 = (bool)(bVar18 ^ 1);
        }
        break;
      case 2:
        if (param_1[2] != 2) {
          param_1[2] = 1;
        }
        break;
      case 3:
        param_1[2] = 2;
        break;
      case 4:
        if (*param_1 != 2) {
          *param_1 = 1;
        }
        break;
      case 5:
        *param_1 = 2;
        break;
      case 6:
      case 9:
        if (*piVar1 != 2) {
          *piVar1 = 1;
        }
        break;
      case 7:
      case 10:
        *piVar1 = 2;
        break;
      case 8:
        if ((*(char *)((longlong)puVar4 + 0x49) == '\x01') && (*piVar2 != 2)) {
          *piVar2 = 1;
        }
      }
      piVar8 = piVar2;
      if ((puVar4[0xc] == 2) || (piVar8 = param_1, puVar4[0xc] == 1)) {
        *piVar8 = 2;
      }
      lVar16 = lVar16 + 8;
      bVar6 = bVar18;
    } while ((longlong)(int)lVar17 * 8 != lVar16);
    iVar14 = *piVar1;
    if (iVar14 == 2) {
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)((longlong)param_1 + 0x13) = 0;
      *puVar3 = 0;
      param_1[1] = 2;
      if (!bVar18) {
        return true;
      }
      iVar14 = 2;
LAB_143813c1c:
      iVar9 = 0;
      goto LAB_143813c7b;
    }
    iVar10 = *param_1;
    if (iVar10 != 2) goto LAB_143813c41;
LAB_143813c8c:
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
LAB_143813c99:
    iVar9 = 0;
    iVar14 = 0;
    iVar10 = 0;
LAB_143813ca7:
    if (!bVar18) goto LAB_143813ef2;
  }
  uVar7 = *(uint *)(param_2 + 1);
  lVar17 = (longlong)(int)uVar7;
  if (lVar17 != 0) {
    puVar5 = (undefined8 *)*param_2;
    puVar4 = (uint *)*puVar5;
    iVar14 = 0;
    bVar18 = false;
    if (puVar4[2] == 1) {
      bVar18 = true;
      if ((((puVar4[1] != 0) && (uVar15 = *puVar4, -1 < (int)uVar15)) &&
          ((int)uVar15 < DAT_14c9647dc)) &&
         ((lVar12 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8), lVar12 != 0 &&
          (*(uint *)(lVar12 + 0x10) == puVar4[1])))) {
        bVar18 = (*(uint *)(lVar12 + 8) & 0x10200000) != 0;
      }
    }
    uVar11 = 0;
    do {
      iVar10 = (int)uVar11;
      if ((int)(iVar10 + 1U) < (int)uVar7) {
        do {
          iVar10 = (int)uVar11;
          lVar12 = (longlong)iVar10;
          bVar6 = true;
          lVar16 = 0;
          do {
            puVar4 = (uint *)puVar5[lVar12 + lVar16 + 1];
            if (puVar4[2] == 1) {
              if (((puVar4[1] == 0) || (uVar15 = *puVar4, (int)uVar15 < 0)) ||
                 ((DAT_14c9647dc <= (int)uVar15 ||
                  ((lVar13 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8),
                   lVar13 == 0 || (*(uint *)(lVar13 + 0x10) != puVar4[1])))))) {
                bVar19 = bVar18 == false;
              }
              else {
                bVar19 = bVar18 == ((*(uint *)(lVar13 + 8) & 0x10200000) == 0);
              }
              if (bVar19) {
                uVar15 = (int)lVar16 + iVar10 + 1;
                break;
              }
            }
            else if (bVar18 != false) {
              FUN_140d4ad0d(puVar5 + lVar12,(int)lVar16 + 1);
              if (!bVar6) goto LAB_143813edf;
              uVar11 = (uVar11 & 0xffffffff) + lVar16 + 1;
              goto LAB_143813e30;
            }
            bVar6 = lVar12 + lVar16 + 2 < lVar17;
            lVar16 = lVar16 + 1;
            uVar15 = uVar7;
          } while ((lVar17 + -1) - lVar12 != lVar16);
          iVar9 = uVar15 - iVar10;
          if (bVar18 == false) {
            uVar11 = (ulonglong)uVar15;
            goto LAB_143813e7c;
          }
          FUN_140d4ad0d(puVar5 + lVar12,iVar9);
          uVar11 = (ulonglong)uVar15;
          if (!bVar6) goto LAB_143813edf;
LAB_143813e30:
          iVar10 = (int)uVar11;
          bVar18 = false;
        } while ((int)(iVar10 + 1U) < (int)uVar7);
        iVar9 = 1;
        bVar6 = false;
        uVar11 = (ulonglong)(iVar10 + 1U);
      }
      else {
        if (bVar18) {
          FUN_140d4ad0d(puVar5 + iVar10,1);
          break;
        }
        iVar9 = 1;
        bVar6 = false;
        uVar11 = (ulonglong)(iVar10 + 1U);
      }
LAB_143813e7c:
      if (iVar14 != iVar10) {
        memmove(puVar5 + iVar14,puVar5 + iVar10,(longlong)iVar9 << 3);
      }
      iVar14 = iVar14 + iVar9;
      bVar18 = true;
    } while (bVar6);
LAB_143813edf:
    *(int *)(param_2 + 1) = iVar14;
    iVar10 = *param_1;
    iVar14 = param_1[1];
    iVar9 = param_1[2];
  }
LAB_143813ef2:
  bVar18 = true;
  if (((iVar10 == 0) && (iVar14 == 0)) && (iVar9 == 0)) {
    bVar18 = *piVar2 != 0;
  }
  return bVar18;
}



// FUNCTION 143814011 FUN_143814011 body=89 status=ok
// SIG undefined FUN_143814011(void)

longlong FUN_143814011(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if (param_1 != 0) {
    uVar1 = *param_2;
    if ((-1 < (int)uVar1) && (-1 < (int)param_2[1])) {
      lVar3 = *(longlong *)(param_1 + 0x140);
      if ((lVar3 == 0) ||
         ((*(int *)(lVar3 + 0x40) <= (int)uVar1 ||
          (lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + (ulonglong)uVar1 * 0x120), lVar2 == 0
          )))) {
        return 0;
      }
      lVar3 = 0;
      if ((int)param_2[1] <
          *(int *)(*(longlong *)(lVar2 + 0x20) + 0xd8) +
          *(int *)(*(longlong *)(lVar2 + 0x20) + 0x20)) {
        lVar3 = lVar2;
      }
    }
  }
  return lVar3;
}



// FUNCTION 14381406a FUN_14381406a body=95 status=ok
// SIG undefined FUN_14381406a(void)

longlong * FUN_14381406a(longlong *param_1,longlong param_2)

{
  bool bVar1;
  LPVOID pvVar2;
  
  *param_1 = *(longlong *)(param_2 + 0x598);
  if (DAT_14cb1d000 == 0) {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    pvVar2 = TlsGetValue(DAT_14cb1d000);
    TlsSetValue(DAT_14cb1d000,(LPVOID)(longlong)((int)pvVar2 + 1));
    bVar1 = ((ulonglong)pvVar2 & 0xffffffff) == 0;
    *(bool *)(param_1 + 1) = bVar1;
    if (bVar1) {
      AcquireSRWLockShared((PSRWLOCK)(*param_1 + 0x250));
    }
  }
  return param_1;
}



// FUNCTION 1438140c9 FUN_1438140c9 body=102 status=ok
// SIG undefined FUN_1438140c9(void)

undefined8 FUN_1438140c9(longlong param_1,int *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *param_2;
  if ((-1 < (longlong)iVar1) && (iVar1 < (int)*(uint *)(param_1 + 0x40))) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 0x120);
    if (lVar3 != 0) {
      uVar2 = *param_3;
      if ((uVar2 < *(uint *)(param_1 + 0x40) && -1 < (int)uVar2) &&
         (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (ulonglong)uVar2 * 0x120),
         lVar4 != 0)) {
        lVar4 = *(longlong *)(lVar4 + 0x20);
        return CONCAT71((int7)((ulonglong)lVar4 >> 8),
                        *(int *)(*(longlong *)(lVar3 + 0x20) + 0x180) == *(int *)(lVar4 + 0x180));
      }
    }
  }
  return 0;
}



// FUNCTION 14381412f FUN_14381412f body=507 status=ok
// SIG undefined FUN_14381412f(void)

undefined8 FUN_14381412f(float *param_1,float *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  float fVar9;
  float *pfVar10;
  longlong *plVar11;
  float fVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = *(double *)(param_1 + 0xe);
  local_48 = *(double *)(param_1 + 10);
  dStack_40 = *(double *)(param_1 + 0xc);
  uVar6 = *(ulonglong *)(param_1 + 0x16);
  local_50 = uVar6;
  if (param_3 == '\0') {
    local_90 = param_1[2];
    local_98 = *(undefined8 *)param_1;
    local_88 = *(undefined8 *)(param_1 + 4);
    local_80 = *(longlong **)(param_1 + 6);
    if (local_80 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)((longlong)local_80 + 0xc) = *(int *)((longlong)local_80 + 0xc) + 1;
      UNLOCK();
      plVar11 = local_80;
    }
    local_78 = *(undefined8 *)(param_1 + 8);
    local_70 = 0x43fa0000;
    local_68 = param_1[10];
    fStack_64 = param_1[0xb];
    fStack_60 = param_1[0xc];
    fStack_5c = param_1[0xd];
    local_58 = *(undefined8 *)(param_1 + 0xe);
    cVar4 = FUN_14488ab98(&local_98,&local_48,&local_50);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    if (cVar4 == '\0') {
      uVar7 = 0;
      goto LAB_143814303;
    }
    uVar6 = local_50 & 0xffffffff;
    uVar8 = local_50._4_4_;
  }
  else {
    uVar8 = (uint)(uVar6 >> 0x20);
  }
  param_2[6] = (*param_1 + *param_1) * 0.01;
  fVar9 = (float)((uint)uVar6 << 0x16 | uVar8);
  fVar12 = -NAN;
  if ((int)((uint)uVar6 | uVar8) < 0) {
    fVar9 = -NAN;
  }
  *param_2 = (float)local_48 * 0.01;
  param_2[1] = (float)dStack_40 * 0.01;
  param_2[2] = (float)local_38 * 0.01;
  param_2[3] = (float)local_38 * 0.01;
  param_2[4] = fVar9;
  if ((*(longlong *)(param_1 + 8) == 0) ||
     (plVar11 = *(longlong **)(param_1 + 6), plVar11 == (longlong *)0x0)) {
    uVar7 = 0;
  }
  else {
    iVar5 = (int)plVar11[1];
    uVar7 = 0;
    do {
      if (iVar5 == 0) goto LAB_1438142a7;
      LOCK();
      iVar3 = (int)plVar11[1];
      bVar14 = iVar5 == iVar3;
      if (bVar14) {
        *(int *)(plVar11 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar14);
    uVar7 = *(undefined8 *)(param_1 + 4);
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
LAB_1438142a7:
  *(undefined8 *)(param_2 + 0xe) = uVar7;
  lVar13 = (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x598) + 400);
  uVar7 = 0xffffffffffffffff;
  if (lVar13 != 0) {
    pfVar10 = *(float **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x598) + 0x188);
    lVar13 = lVar13 * 0xc;
    do {
      if (*pfVar10 == param_1[2]) {
        if (pfVar10 != (float *)0x0) {
          uVar7 = *(undefined8 *)(pfVar10 + 1);
          fVar12 = param_1[2];
        }
        break;
      }
      pfVar10 = pfVar10 + 3;
      lVar13 = lVar13 + -0xc;
    } while (lVar13 != 0);
  }
  param_2[0x10] = fVar12;
  *(undefined8 *)(param_2 + 0x11) = uVar7;
  uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
LAB_143814303:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}


