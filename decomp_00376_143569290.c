// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143569290 FUN_143569290 body=29 status=ok
// SIG undefined FUN_143569290(void)

undefined8 FUN_143569290(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435692ae FUN_1435692ae body=48 status=ok
// SIG undefined FUN_1435692ae(void)

longlong FUN_1435692ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_1402d9b92(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143569300 FUN_143569300 body=76 status=ok
// SIG undefined FUN_143569300(void)

undefined8 FUN_143569300(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145b05226();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_143569313;
  }
  lVar2 = 0;
LAB_143569313:
  *(longlong *)*param_1 = lVar2;
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),*(longlong *)*param_1 == 0);
}



// FUNCTION 143569390 FUN_143569390 body=29 status=ok
// SIG undefined FUN_143569390(void)

undefined8 FUN_143569390(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435693ae FUN_1435693ae body=66 status=ok
// SIG undefined FUN_1435693ae(void)

void FUN_1435693ae(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  (*(code *)*param_1)(param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143569408 FUN_143569408 body=25 status=ok
// SIG undefined FUN_143569408(void)

void FUN_143569408(void)

{
  FUN_145da085e();
  FUN_14170c56a(&DAT_14cae95d0);
  return;
}



// FUNCTION 143569422 FUN_143569422 body=25 status=ok
// SIG undefined FUN_143569422(void)

void FUN_143569422(void)

{
  FUN_146179322();
  FUN_14170c56a(&DAT_14cae9640);
  return;
}



// FUNCTION 143569462 FUN_143569462 body=123 status=ok
// SIG undefined FUN_143569462(void)

undefined8 FUN_143569462(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar2 = FUN_147bac396(), iVar2 != -1)) {
    lVar1 = *param_1;
    if (*(longlong *)(lVar1 + 0xa8 + (longlong)iVar2 * 0xd0) != 0) {
      FUN_1400020a8();
    }
    memmove((void *)(lVar1 + (longlong)iVar2 * 0xd0),param_3,0xc0);
    FUN_147bac5fe(param_1,*param_4);
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 1435694de FUN_1435694de body=135 status=ok
// SIG undefined FUN_1435694de(void)

undefined8 FUN_1435694de(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  void *_Dst;
  int iVar1;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_147bac864(), iVar1 != -1)) {
    _Dst = (void *)(*param_1 + (longlong)iVar1 * 0x50);
    if (*(longlong *)(*param_1 + 0x28 + (longlong)iVar1 * 0x50) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
      FUN_1400020a8();
    }
    memmove(_Dst,param_3,0x48);
    FUN_147bac8dc(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 143569566 FUN_143569566 body=76 status=ok
// SIG undefined FUN_143569566(void)

void FUN_143569566(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (longlong)(int)((longlong *)*param_1)[1];
  if (lVar1 != 0) {
    lVar2 = *(longlong *)*param_1;
    lVar1 = lVar1 * 0x58;
    do {
      *(char *)(lVar2 + 0xc) = (char)param_1[1];
      if ((*(int *)(lVar2 + 8) != -1) && (DAT_14ca84d88 == '\x01')) {
        FUN_14355ffb6(lVar2);
      }
      lVar2 = lVar2 + 0x58;
      lVar1 = lVar1 + -0x58;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1435695bc FUN_1435695bc body=12 status=ok
// SIG undefined FUN_1435695bc(void)

void FUN_1435695bc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001435695c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1435695c8 FUN_1435695c8 body=29 status=ok
// SIG undefined FUN_1435695c8(void)

undefined8 FUN_1435695c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435695e6 FUN_1435695e6 body=282 status=ok
// SIG undefined FUN_1435695e6(void)

undefined8 * FUN_1435695e6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14356943b);
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



// FUNCTION 143569700 FUN_143569700 body=134 status=ok
// SIG undefined FUN_143569700(void)

void FUN_143569700(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = (longlong)(int)((longlong *)param_1[0x15])[1];
  if (lVar2 != 0) {
    lVar3 = *(longlong *)param_1[0x15];
    lVar2 = lVar2 * 0x58;
    do {
      *(undefined1 *)(lVar3 + 0xc) = *(undefined1 *)(param_1 + 0x16);
      if ((*(int *)(lVar3 + 8) != -1) && (DAT_14ca84d88 == '\x01')) {
        FUN_14355ffb6(lVar3);
      }
      lVar3 = lVar3 + 0x58;
      lVar2 = lVar2 + -0x58;
    } while (lVar2 != 0);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014356977a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143569786 FUN_143569786 body=2348 status=ok
// SIG undefined FUN_143569786(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143569786(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  code *pcStack_c0;
  code *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  undefined8 local_98;
  code *local_90;
  undefined8 local_88;
  undefined **local_78;
  code *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = (undefined1 *)0x0;
  pcStack_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9bbe30,1,0);
  FUN_1400b22c2(&local_98,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_98,&DAT_14cae9318);
  if (cVar2 == '\0') {
    _DAT_14cae9318 = 0;
    uRam000000014cae9320 = 0;
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_90 = FUN_145fa089e;
  local_98 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14cae93b0,&local_98);
  local_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x0;
  pcStack_c0 = (code *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9bc5d0,1,0);
  local_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x0;
  pcStack_c0 = (code *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9bcd00,1,0);
  local_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x0;
  pcStack_c0 = (code *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9bd0c0,1,0);
  local_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x0;
  pcStack_c0 = (code *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9bd910,1,0);
  local_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x0;
  pcStack_c0 = (code *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9be5c0,1,0);
  local_c8 = (undefined1 *)((ulonglong)local_c8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cae9498,L"LWI.Editor.GridSize",&DAT_14c7615ac,
                L"Sets the size of a grid that LWI managers will be generated with.");
  atexit(FUN_14356342d);
  local_98 = (code *)0x14a1e3c88;
  local_90._0_5_ = 10;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cae94a8 = (ulonglong)uVar3;
  local_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x0;
  pcStack_c0 = (code *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9bf2b0,1,0);
  DAT_14cae9500 = 0;
  DAT_14cae9508 = 0;
  atexit(FUN_143564051);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9510);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cae9510,4000);
  atexit((_func_5014 *)&LAB_14356408c);
  pcStack_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9bfbc0,1,&PTR_FUN_14a9bfb90);
  local_98 = (code *)&DAT_14a19662d;
  local_90 = (code *)CONCAT35(local_90._5_3_,4);
  FUN_14001a6c0(&local_98,1);
  local_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x0;
  pcStack_c0 = (code *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9c01c0,1,0);
  local_98._0_4_ = 1;
  local_c8._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cae9580,L"r.gbx.SuspendViewRendering.Allow",&local_98,
                L"Whether to allow suspending view rendering through APlayerController::SetPlayerViewRenderingSuspended() \nNote: r.gbx.SuspendViewRendering.Force is still respected and overrides this cvar \n"
               );
  atexit(FUN_143564265);
  local_98 = (code *)((ulonglong)local_98._4_4_ << 0x20);
  local_c8._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cae9598,L"r.gbx.SuspendViewRendering.Debug",&local_98,
                L"Whether to log calls to APlayerController::SetPlayerViewRenderingSuspended() and  \ndraw text on screen to indicate that a given view is disabled"
               );
  atexit(FUN_1435642aa);
  local_c8._0_4_ = 0;
  FUN_141471170(&DAT_14cae95b0,L"r.CalcLocalPlayerCachedLODDistanceFactor",&DAT_14c7615b0,
                L"Should we calculate a LOD Distance Factor based on the current FOV.  Should not be necessary since LOD is already based on screen size.\n"
               );
  atexit(FUN_1435642ef);
  local_98 = (code *)0x0;
  local_90 = (code *)((ulonglong)local_90 & 0xffffffff00000000);
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)((longlong)local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_149e062c0;
  *(code **)((longlong)local_98 + 0x18) = FUN_143564730;
  local_c8 = (undefined1 *)((ulonglong)local_c8._4_4_ << 0x20);
  FUN_14152bcb8(&DAT_14cae95c0,L"r.CopyLockedViews",
                L"Copies all locked views in to a string that r.LockView will accept to reload them."
                ,&local_98);
  if ((int)local_90 == 0) {
LAB_143569b9c:
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
    goto LAB_143569b9c;
  }
  atexit(FUN_143564a21);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_143569408;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cae9638,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_143569422;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cae96a8,6,&local_98);
  _DAT_14cae96b8 = 0xffffffff;
  _DAT_14cae96bc = 0x105;
  DAT_14cae96be = 0;
  _DAT_14cae96c0 = 2;
  DAT_14cae96c8 = 0;
  uRam000000014cae96d0 = 0;
  DAT_14cae96b0 = &PTR_FUN_14a9c40e0;
  FUN_1463e98d6();
  atexit(FUN_143566894);
  local_90 = FUN_144a91e46;
  local_98 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14cae9760,&local_98);
  local_90 = FUN_1435668d0;
  local_98 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14cae97f8,&local_98);
  local_a8 = &LAB_143566fb0;
  local_b0 = FUN_1408e1242;
  local_b8 = FUN_143566fb8;
  pcStack_c0 = FUN_143567699;
  local_c8 = &LAB_1435676c2;
  FUN_141585c60(&DAT_14cae9e78,L"FLocalVertexFactory",L"/Engine/Private/LocalVertexFactory.ush",
                0x576fe);
  atexit((_func_5014 *)&LAB_1435676ee);
  local_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x0;
  pcStack_c0 = (code *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9c1320,1,0);
  pcStack_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9c1fd0,1,&PTR_FUN_14a9c1fa0);
  local_c8._0_4_ = 0x40;
  FUN_141471170(&DAT_14cae9870,L"r.HLOD.MaximumLevel",&DAT_14c7615b4,
                L"How far down the LOD hierarchy to allow showing (can be used to limit quality loss and streaming texture memory usage on high scalability settings)\n-1: No maximum level (default)\n0: Prevent ever showing a HLOD cluster instead of individual meshes\n1: Allow only the first level of HLOD clusters to be shown\n2+: Allow up to the Nth level of HLOD clusters to be shown"
               );
  atexit(FUN_1435676fa);
  local_98 = (code *)CONCAT44(local_98._4_4_,0x3f000000);
  local_c8._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14cae9880,L"r.HLOD.DitherPauseTime",&local_98,
                L"HLOD dither pause time in seconds\n");
  atexit(FUN_14356773f);
  FUN_1400b22c2(&local_98,&DAT_14a9c2598);
  local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,0x40);
  FUN_140f510cc(&DAT_14cae9898,L"r.HLOD.DistanceOverride",&local_98,
                L"If non-zero, overrides the distance that HLOD transitions will take place for all objects at the HLOD level index, formatting is as follows:\n\'r.HLOD.DistanceOverride 5000, 10000, 20000\' would result in HLOD levels 0, 1 and 2 transitioning at 5000, 1000 and 20000 respectively."
               );
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_143567784);
  FUN_1400b22c2(&local_98,&DAT_149e02088);
  local_c8 = (undefined1 *)((ulonglong)local_c8 & 0xffffffff00000000);
  FUN_140f510cc(&DAT_14cae98b0,L"r.HLOD.DistanceOverrideScale",&local_98,
                L"Scales the value in r.HLOD.DistanceOverride, Default off.\nThis is an optional scale intended to allow game logic to dynamically modify without impacting scalability.\n"
               );
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_1435677c9);
  local_98 = (code *)((ulonglong)local_98 & 0xffffffff00000000);
  local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,4);
  FUN_14078dbce(&DAT_14cae98c8,L"r.HLOD.ForceDisableCastDynamicShadow",&local_98,
                L"If non-zero, will set bCastDynamicShadow to false for all LODActors, regardless of the shadowing setting of their subactors."
               );
  atexit(FUN_14356780e);
  DAT_14cae98e0 = 0;
  _DAT_14cae98e8 = 0;
  atexit((_func_5014 *)&LAB_143567853);
  local_98 = (code *)0x0;
  local_90 = (code *)((ulonglong)local_90 & 0xffffffff00000000);
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)((longlong)local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_149e062c0;
  *(code **)((longlong)local_98 + 0x18) = FUN_140f0b24e;
  FUN_141253d16(&DAT_14cae98f0,&local_98);
  if ((int)local_90 != 0) {
    if (local_98 == (code *)0x0) goto LAB_143569f81;
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_143569f81:
  DAT_14cae9940 = 0;
  DAT_14cae9948 = 0;
  DAT_14cae9920 = 0;
  _DAT_14cae9928 = 0;
  _DAT_14cae994c = 0xffffffff00000080;
  _DAT_14cae9954 = 0;
  DAT_14cae9960 = 0;
  _DAT_14cae9968 = 0;
  DAT_14cae9970 = 0;
  uRam000000014cae9978 = 0;
  DAT_14cae9980 = 0;
  atexit((_func_5014 *)&LAB_143567875);
  FUN_147ba63c8();
  atexit((_func_5014 *)&LAB_143568fa0);
  FUN_147ba6456();
  atexit((_func_5014 *)&LAB_143568fac);
  FUN_147ba64e2();
  atexit((_func_5014 *)&LAB_143568fb8);
  FUN_147ba656e();
  atexit((_func_5014 *)&LAB_143568fc4);
  local_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x0;
  pcStack_c0 = (code *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9c3910,1,0);
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14356a0b4 FUN_14356a0b4 body=55 status=ok
// SIG undefined FUN_14356a0b4(void)

void FUN_14356a0b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cae9f20 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cae9f20 = FUN_14171c317(FUN_1463e999d,uVar1,L"EDecalBlendMode");
  }
  return;
}



// FUNCTION 14356a0eb FUN_14356a0eb body=55 status=ok
// SIG undefined FUN_14356a0eb(void)

void FUN_14356a0eb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cae9f38 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cae9f38 = FUN_14171c317(FUN_1463e99cc,uVar1,L"EMaterialDecalResponse");
  }
  return;
}



// FUNCTION 14356a122 FUN_14356a122 body=55 status=ok
// SIG undefined FUN_14356a122(void)

void FUN_14356a122(void)

{
  undefined8 uVar1;
  
  if (DAT_14cae9f50 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cae9f50 = FUN_14171c317(FUN_1463e99fb,uVar1,L"EMaterialTranslucencyPass");
  }
  return;
}



// FUNCTION 14356a15a FUN_14356a15a body=1203 status=ok
// SIG undefined FUN_14356a15a(void)

void FUN_14356a15a(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb60);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39440);
  FUN_140969ec6(param_1,param_2);
  if (0x103 < (int)param_2[8]) {
    local_30 = *(ulonglong *)(param_1 + 0x18);
    FUN_14356a7f1(param_2,param_1 + 0x240);
    if (0x1ad < (int)param_2[8]) goto LAB_14356a232;
  }
  *(byte *)(param_1 + 0x1d6) =
       *(byte *)(param_1 + 0x1d6) & 0xfe |
       ((*(byte *)(param_1 + 0x1d6) & 2) == 0 && *(char *)(param_1 + 0x129) == '\x01');
LAB_14356a232:
  if ((((*(byte *)(param_2 + 5) & 1) != 0) &&
      (iVar4 = FUN_1448332aa(param_2,&DAT_149e3cb60), iVar4 < 4)) &&
     (*(char *)(param_1 + 0x128) == '\x01')) {
    *(undefined1 *)(param_1 + 0x129) = 2;
  }
  iVar4 = FUN_1448332aa(param_2,&DAT_149e3cb60);
  if (0x2e < iVar4) {
    if ((((*(byte *)(param_2 + 5) & 4) == 0) || (param_2[0xd] == 0)) ||
       ((*(longlong *)(param_2[0xd] + 0x10) == 0 ||
        (((*(byte *)((longlong)param_2 + 0x29) & 1) == 0 ||
         ((*(byte *)((longlong)param_2 + 0x2b) & 2) != 0)))))) {
      bVar3 = 0;
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14caea100) && (FUN_144b3d300(&DAT_14caea100), DAT_14caea100 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar8 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Nanite.ForceEnableMeshes",1);
        if (plVar8 == (longlong *)0x0) {
          DAT_14caea0f8 = 0;
        }
        else {
          DAT_14caea0f8 = (**(code **)(*plVar8 + 0x68))(plVar8);
        }
        _Init_thread_footer(&DAT_14caea100);
      }
      bVar3 = DAT_14caea104;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14caea108) &&
         (FUN_144b3d300(&DAT_14caea108), lVar10 = DAT_14caea0f8, bVar3 = DAT_14caea104,
         DAT_14caea108 == -1)) {
        if (DAT_14caea0f8 == 0) {
          DAT_14caea104 = false;
        }
        else {
          iVar4 = *(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60);
          if (iVar4 == 0x40000002) {
            uVar9 = 0;
          }
          else {
            bVar11 = true;
            if ((DAT_14c86a9f8 == '\x01') && (iVar4 != 2)) {
              if (iVar4 == 1) {
                DVar6 = FUN_140ad26c0();
                DVar7 = GetCurrentThreadId();
                bVar11 = DVar6 == DVar7;
              }
              else {
                bVar11 = false;
              }
            }
            uVar9 = (ulonglong)(bVar11 ^ 1);
          }
          DAT_14caea104 = *(int *)(lVar10 + uVar9 * 4) != 0;
        }
        _Init_thread_footer(&DAT_14caea108);
        bVar3 = DAT_14caea104;
      }
    }
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      local_30 = CONCAT44(local_30._4_4_,(uint)bVar3);
      (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
      uVar5 = (uint)local_30;
      if (1 < (uint)local_30) {
        FUN_14572541c(param_2);
        uVar5 = (uint)local_30;
      }
    }
    else {
      uVar5 = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    if (((*(byte *)(param_2 + 5) & 1) != 0) && (uVar5 != 0)) {
      *(byte *)(param_1 + 0x1c4) = *(byte *)(param_1 + 0x1c4) | 0x10;
    }
  }
  iVar4 = FUN_1448332aa(param_2,&DAT_149e39440);
  if (3 < iVar4) {
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      local_30 = local_30 & 0xffffffff00000000;
      (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
      uVar5 = (uint)local_30;
      if (1 < (uint)local_30) {
        FUN_14572541c(param_2);
        uVar5 = (uint)local_30;
      }
    }
    else {
      uVar5 = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    if (((*(byte *)(param_2 + 5) & 1) != 0) && (uVar5 != 0)) {
      *(byte *)(param_1 + 0x1c2) = *(byte *)(param_1 + 0x1c2) & 0xf7;
    }
  }
  if ((((*(byte *)(param_2 + 5) & 1) != 0) &&
      (iVar4 = FUN_1448332aa(param_2,&DAT_149e3cc78), iVar4 < 0x2c)) &&
     ((*(byte *)(param_1 + 0x180) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x189) = 0;
  }
  if (((*(byte *)(param_2 + 5) & 1) != 0) &&
     (iVar4 = FUN_1448332aa(param_2,&DAT_149e3cbb8), iVar4 < 0x99)) {
    *(undefined1 *)(param_1 + 0x203) = 0;
  }
  if ((((*(byte *)(param_2 + 5) & 1) != 0) &&
      (iVar4 = FUN_1448332aa(param_2,&DAT_149e3cbb8), iVar4 < 0xa9)) &&
     ((*(int *)(param_1 + 0x48) == 0 && (lVar10 = *(longlong *)(param_1 + 0x38), lVar10 != 0)))) {
    *(undefined4 *)(param_1 + 0x48) = 1;
    if (*(int *)(param_1 + 0x4c) == 0) {
      FUN_147bb205a((undefined8 *)(param_1 + 0x40));
      lVar10 = *(longlong *)(param_1 + 0x38);
    }
    **(longlong **)(param_1 + 0x40) = lVar10;
    if ((lVar10 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  iVar4 = FUN_1448332aa(param_2,&DAT_149e39440);
  if ((iVar4 < 1) && (*(char *)(param_1 + 299) == '\x01')) {
    *(undefined1 *)(param_1 + 299) = 8;
  }
  iVar4 = FUN_1448332aa(param_2,&DAT_149e39440);
  if ((iVar4 < 2) && (*(char *)(param_1 + 299) == '\b')) {
    *(undefined1 *)(param_1 + 299) = 1;
  }
  iVar4 = FUN_1448332aa(param_2,&DAT_149e39440);
  if ((iVar4 < 3) && (*(char *)(param_1 + 0x189) == '\x03')) {
    *(undefined1 *)(param_1 + 0x189) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14356a60e FUN_14356a60e body=69 status=ok
// SIG undefined FUN_14356a60e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14356a60e(void)

{
  _DAT_14cae9fe0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014356a650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae9fe8,1);
  return;
}



// FUNCTION 14356a653 FUN_14356a653 body=69 status=ok
// SIG undefined FUN_14356a653(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14356a653(void)

{
  _DAT_14cae9ff8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014356a695. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caea000,1);
  return;
}



// FUNCTION 14356a698 FUN_14356a698 body=69 status=ok
// SIG undefined FUN_14356a698(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14356a698(void)

{
  _DAT_14caea010 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014356a6da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caea018,1);
  return;
}



// FUNCTION 14356a6dd FUN_14356a6dd body=69 status=ok
// SIG undefined FUN_14356a6dd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14356a6dd(void)

{
  _DAT_14caea028 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014356a71f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caea030,1);
  return;
}



// FUNCTION 14356a722 FUN_14356a722 body=69 status=ok
// SIG undefined FUN_14356a722(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14356a722(void)

{
  _DAT_14caea040 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014356a764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caea048,1);
  return;
}



// FUNCTION 14356a767 FUN_14356a767 body=69 status=ok
// SIG undefined FUN_14356a767(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14356a767(void)

{
  _DAT_14caea058 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014356a7a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caea060,1);
  return;
}



// FUNCTION 14356a7ac FUN_14356a7ac body=69 status=ok
// SIG undefined FUN_14356a7ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14356a7ac(void)

{
  _DAT_14caea0d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014356a7ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caea0d8,1);
  return;
}



// FUNCTION 14356a7f1 FUN_14356a7f1 body=415 status=ok
// SIG undefined FUN_14356a7f1(void)

void FUN_14356a7f1(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_118 [40];
  undefined4 local_f0 [49];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cc28);
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e31250);
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      local_2c = 0;
      puVar2 = (ulonglong *)param_1[1];
      piVar1 = (int *)*puVar2 + 1;
      if ((int *)puVar2[1] < piVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
        }
        else {
          FUN_14572512c(param_1,&local_2c);
        }
      }
      else {
        local_2c = *(int *)*puVar2;
        *puVar2 = (ulonglong)piVar1;
      }
      if (0 < local_2c) {
        FUN_1405c0364(param_2);
        FUN_1408dd86e(local_f0,param_1,5,4);
        if (0 < local_2c) {
          iVar4 = 0;
          do {
            iVar3 = FUN_1401c2238(param_2);
            FUN_14357c8c4((longlong)iVar3 * 0x50 + *param_2,local_f0,param_3);
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_2c);
        }
        FUN_1417e15fa(local_f0);
      }
    }
  }
  else {
    local_f0[0] = 0;
    puVar2 = (ulonglong *)param_1[1];
    if (puVar2[1] < *puVar2 + 4) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,local_f0,4);
      }
      else {
        FUN_14572512c(param_1,local_f0);
      }
    }
    else {
      *puVar2 = *puVar2 + 4;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14356a991 FUN_14356a991 body=831 status=ok
// SIG undefined FUN_14356a991(void)

void FUN_14356a991(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 uVar11;
  longlong *plVar12;
  short sVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined *puVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = param_3;
  if ((longlong)(int)param_2[1] == 0) goto LAB_14356abd5;
  if (param_1 == (longlong *)0x0) {
    lVar18 = *param_2;
    lVar15 = (longlong)(int)param_2[1] * 0x50 + lVar18;
    plVar12 = (longlong *)0x0;
    param_1 = (longlong *)0x0;
LAB_14356aa31:
    do {
      FUN_1403e59f8(lVar18,1);
      lVar18 = lVar18 + 0x50;
    } while (lVar18 != lVar15);
  }
  else {
    if (DAT_14caec308 == 0) {
      local_70 = &local_50;
      local_50 = FUN_1417df956;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_146386466;
      local_78 = &LAB_147bb408b;
      local_80 = &LAB_1463eaa15;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000001;
      local_a0 = 8;
      local_a8 = 0x2e0;
      FUN_14081cfa3(L"/Script/Engine",L"MaterialInstance",&DAT_14caec308,&DAT_147bb408a);
    }
    if ((*(int *)(param_1[2] + 0x38) < *(int *)(DAT_14caec308 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14caec308 + 0x38) * 8) !=
        DAT_14caec308 + 0x30)) {
      plVar12 = param_1;
      param_1 = (longlong *)0x0;
    }
    else {
      plVar12 = (longlong *)(**(code **)(*param_1 + 0x2b8))(param_1);
    }
    if ((longlong)(int)param_2[1] != 0) {
      lVar18 = *param_2;
      lVar15 = (longlong)(int)param_2[1] * 0x50 + lVar18;
      goto LAB_14356aa31;
    }
  }
  lVar18 = DAT_14caea0e0;
  iVar8 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar8 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar8 == 2)) {
    uVar14 = 0;
  }
  else if (iVar8 == 1) {
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    uVar14 = (ulonglong)(DVar9 != DVar10);
  }
  else {
    uVar14 = 1;
  }
  cVar7 = DAT_14cb0cc00;
  iVar8 = (int)param_2[1];
  if (0 < iVar8) {
    iVar3 = *(int *)(lVar18 + uVar14 * 4);
    lVar18 = 0;
    do {
      lVar15 = *(longlong *)(*param_2 + 0x10 + lVar18 * 0x50);
      if (lVar15 != 0) {
        sVar13 = 0x9b;
        if ((*(longlong *)(lVar15 + 0x28) != 0) && (DAT_14ca80058 != DAT_14ca80084)) {
          lVar5 = *(longlong *)(*(longlong *)(lVar15 + 0x28) + 0x58);
          uVar6 = (uint)((ulonglong)lVar5 >> 0x10);
          uVar17 = (uint)lVar5 & 0xffff;
          puVar16 = DAT_14ca80090;
          if (DAT_14ca80090 == (undefined *)0x0) {
            puVar16 = &DAT_14ca80088;
          }
          iVar4 = *(int *)(puVar16 +
                          (ulonglong)
                          (DAT_14ca80098 - 1U &
                          (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar17) +
                          (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar17 >> 4)) * 4);
          while (iVar4 != -1) {
            plVar1 = (longlong *)(DAT_14ca80050 + (longlong)iVar4 * 0x14);
            if (*plVar1 == lVar5) {
              if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
                sVar13 = (short)plVar1[1];
              }
              break;
            }
            iVar4 = *(int *)((longlong)plVar1 + 0xc);
          }
        }
        if (sVar13 == DAT_14ca85550) {
          cVar2 = *(char *)(lVar15 + 100);
          if ((iVar3 == 0) || (cVar2 == cVar7 || cVar2 == '\x04')) {
            local_a8 = CONCAT31(local_a8._1_3_,cVar2);
            uVar11 = FUN_1403bc388(local_58,plVar12,param_1,*(undefined4 *)(lVar15 + 0x68));
            FUN_14357c076(uVar11,lVar15);
            iVar8 = (int)param_2[1];
          }
        }
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < iVar8);
  }
LAB_14356abd5:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14356acd2 FUN_14356acd2 body=443 status=ok
// SIG undefined FUN_14356acd2(void)

void FUN_14356acd2(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143578a24();
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) goto LAB_14356ae24;
  puVar7 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
  if (param_1 == (longlong *)0x0) {
    FUN_140056680(&local_28,&DAT_149e01fe8);
  }
  else {
    local_28 = 0;
    uStack_20 = 0;
    FUN_1401031ac(param_1,0);
  }
  FUN_14089e4fa(puVar7,&local_28);
  *puVar7 = &PTR_FUN_14a9cdd20;
  puVar7[0x19] = param_1;
  uVar4 = (**(code **)(*param_1 + 0x468))(param_1);
  *(undefined1 *)(puVar7 + 0x18) = uVar4;
  uVar4 = (**(code **)(*param_1 + 0x470))(param_1);
  *(undefined1 *)((longlong)puVar7 + 0xc1) = uVar4;
  puVar3 = (undefined8 *)param_1[0x47];
  if (puVar3 != puVar7) {
    param_1[0x47] = (longlong)puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar7 + 0xc) = *(int *)(puVar7 + 0xc) + 1;
      UNLOCK();
    }
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  lVar8 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar8 == 0) {
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar2 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar2 != 2)) {
      if (iVar2 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        if (DVar5 == DVar6) goto LAB_14356ae79;
      }
    }
    else {
LAB_14356ae79:
      lVar8 = DAT_14cb10918;
      if (DAT_14cb10918 != 0) goto LAB_14356adaf;
    }
    *(undefined8 *)(param_1[0x47] + 0xb0) = 0;
    uVar9 = 0;
    uVar10 = 0;
  }
  else {
LAB_14356adaf:
    *(undefined8 *)(param_1[0x47] + 0xb0) = *(undefined8 *)(lVar8 + 0x6f8);
    uVar9 = (undefined4)*(undefined8 *)(lVar8 + 0x700);
    uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x700) >> 0x20);
  }
  *(ulonglong *)(param_1[0x47] + 0xb8) = CONCAT44(uVar10,uVar9);
LAB_14356ae24:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00014356ae45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CoCreateGuid((GUID *)((longlong)param_1 + 0x224));
  return;
}



// FUNCTION 14356ae8e FUN_14356ae8e body=92 status=ok
// SIG undefined FUN_14356ae8e(void)

undefined8 FUN_14356ae8e(longlong param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(byte *)(param_1 + 0x128) < 4) && (*(byte *)(param_1 + 0x128) != 2)) {
    cVar1 = FUN_144b24bae(param_1);
    uVar2 = 1;
    if ((cVar1 == '\0') && ((*(byte *)(param_1 + 0x1c0) & 0x20) == 0)) {
      if ((*(uint *)(param_1 + 0x20c) >> (param_2 & 0x1f) & 1) == 0) {
        *(uint *)(param_1 + 0x20c) = *(uint *)(param_1 + 0x20c) | 1 << ((byte)param_2 & 0x1f);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 14356aeea FUN_14356aeea body=785 status=ok
// SIG undefined FUN_14356aeea(void)

undefined8 FUN_14356aeea(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_38;
  int local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar13 = 1 << ((byte)param_2 & 0x1f);
  uVar9 = 0;
  if ((*(byte *)(param_1 + 0x128) < 4) && (*(byte *)(param_1 + 0x128) != 2)) {
    cVar6 = FUN_144b24bae(param_1,param_2);
    uVar9 = 1;
    if ((cVar6 == '\0') && ((*(byte *)(param_1 + 0x1c0) & 0x20) == 0)) {
      if ((*(uint *)(param_1 + 0x20c) & uVar13) == 0) {
        if (DAT_14c86a9f8 != '\x01') {
LAB_14356b1b6:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
        }
        iVar2 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (iVar2 == 2) goto LAB_14356b1b6;
        if (iVar2 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_14356b1b6;
        }
        LOCK();
        pbVar3 = (byte *)(param_1 + 0x210 + ((longlong)(int)(param_2 & 0x1f) >> 3));
        bVar4 = *pbVar3;
        *pbVar3 = *pbVar3 | '\x01' << (param_2 & 7);
        UNLOCK();
        if ((bVar4 >> (param_2 & 7) & 1) == 0) {
          plVar10 = (longlong *)FUN_14001cc68(0x10,0x10);
          *plVar10 = param_1;
          *(uint *)(plVar10 + 1) = param_2;
          plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
          plVar11[1] = (longlong)&DAT_100000001;
          *plVar11 = (longlong)&PTR_FUN_14a9ce790;
          plVar11[2] = (longlong)plVar10;
          local_38 = (undefined8 *)0x0;
          local_30 = 0;
          FUN_1446efa72(&local_38,0,3,0x10);
          local_30 = 3;
          if (plVar11 == (longlong *)0x0) {
            *local_38 = &PTR_LAB_149e020b0;
            LOCK();
            UNLOCK();
            lVar12 = DAT_14c758608 + 1;
            lVar5 = DAT_14c758608 + 1;
            if (lVar12 == 0) {
              LOCK();
              UNLOCK();
              lVar12 = DAT_14c758608 + 2;
              lVar5 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar5;
            local_38[2] = lVar12;
            *local_38 = &PTR_FUN_14a9ce7b0;
            local_38[3] = plVar10;
            local_38[4] = 0;
            local_38[5] = &LAB_14356b20e;
          }
          else {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            *local_38 = &PTR_LAB_149e020b0;
            LOCK();
            UNLOCK();
            lVar12 = DAT_14c758608 + 1;
            lVar5 = DAT_14c758608 + 1;
            if (lVar12 == 0) {
              LOCK();
              UNLOCK();
              lVar12 = DAT_14c758608 + 2;
              lVar5 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar5;
            local_38[2] = lVar12;
            *local_38 = &PTR_FUN_14a9ce7b0;
            local_38[3] = plVar10;
            local_38[4] = plVar11;
            LOCK();
            *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
            UNLOCK();
            local_38[5] = &LAB_14356b20e;
            LOCK();
            plVar10 = plVar11 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
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
          local_48 = 0x101;
          FUN_142c039ac(&local_28,&local_38);
          if (local_28 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_28 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*local_28)(local_28,1);
            }
          }
          if (local_30 == 0) {
LAB_14356b164:
            if (local_38 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_38 != (undefined8 *)0x0) {
            (**(code **)*local_38)(local_38,0);
            FUN_1446efa72(&local_38,0,0,0x10);
            local_30 = 0;
            goto LAB_14356b164;
          }
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar10 = plVar11 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
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
        }
        uVar9 = 0;
        goto LAB_14356af57;
      }
      uVar9 = 0;
    }
  }
  if ((*(uint *)(param_1 + 0x210) & uVar13) != 0) {
    LOCK();
    *(uint *)(param_1 + 0x210) = *(uint *)(param_1 + 0x210) & ~uVar13;
    UNLOCK();
  }
LAB_14356af57:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14356b258 FUN_14356b258 body=240 status=ok
// SIG undefined FUN_14356b258(void)

wchar_t * FUN_14356b258(int param_1)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  
  lVar2 = DAT_14ca97170;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar6 = 0;
  }
  else if (iVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  if (param_1 == 2) {
    pwVar7 = L"BLEND_TranslucentGreyTransmittance";
    pwVar5 = L"BLEND_Translucent";
    goto LAB_14356b2b8;
  }
  pwVar5 = L"BLEND_Opaque";
  switch(param_1) {
  case 1:
    pwVar5 = L"BLEND_Masked";
    break;
  case 3:
    pwVar5 = L"BLEND_Additive";
    break;
  case 4:
    pwVar7 = L"BLEND_ColoredTransmittanceOnly";
    pwVar5 = L"BLEND_Modulate";
    goto LAB_14356b2b8;
  case 5:
    pwVar5 = L"BLEND_AlphaComposite";
    break;
  case 6:
    pwVar5 = L"BLEND_AlphaHoldout";
    break;
  case 7:
    pwVar7 = L"BLEND_TranslucentColoredTransmittance";
    pwVar5 = L"BLEND_TranslucentColoredTransmittance_SUBSTRATEONLY";
LAB_14356b2b8:
    if (0 < *(int *)(lVar2 + uVar6 * 4)) {
      pwVar5 = pwVar7;
    }
  }
  return pwVar5;
}



// FUNCTION 14356b348 FUN_14356b348 body=69 status=ok
// SIG undefined FUN_14356b348(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14356b348(void)

{
  _DAT_14caea0e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014356b38a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caea0f0,1);
  return;
}



// FUNCTION 14356b38d FUN_14356b38d body=41 status=ok
// SIG undefined FUN_14356b38d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14356b38d(void)

{
  _DAT_14caea598 = 0;
  if (DAT_14caea590 != 0) {
    FUN_1400020a8();
  }
  FUN_145d710ae();
  return;
}



// FUNCTION 14356b3b6 FUN_14356b3b6 body=1664 status=ok
// SIG undefined FUN_14356b3b6(void)

void FUN_14356b3b6(longlong *param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  byte bVar10;
  longlong ***ppplVar11;
  longlong lVar12;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  longlong *local_98;
  longlong **local_90 [4];
  longlong ***local_70;
  undefined4 local_68;
  longlong **local_60;
  longlong **local_58;
  longlong ***local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14037e420();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  if (DAT_14c872bf0 == '\x01') {
    if ((DAT_14c872bf1 != '\x01') || ((DAT_14c8442b8 & 1) != 0)) goto LAB_14356b43f;
LAB_14356b41e:
    FUN_14356a991(param_1,param_1 + 0x48,param_1 + 0x4a);
  }
  else {
    if (DAT_14c8442b8 == 0) goto LAB_14356b41e;
LAB_14356b43f:
    lVar8 = param_1[0x49];
    if ((longlong)(int)lVar8 != 0) {
      lVar3 = param_1[0x48];
      lVar12 = 0;
      do {
        if (*(longlong *)(lVar3 + 0x10 + lVar12) != 0) {
          *(undefined8 *)(lVar3 + 0x10 + lVar12) = 0;
          FUN_1401fc67c();
        }
        lVar12 = lVar12 + 0x50;
      } while ((longlong)(int)lVar8 * 0x50 != lVar12);
    }
  }
  FUN_1401fc455(param_1[0x48],(int)param_1[0x49]);
  *(undefined4 *)(param_1 + 0x49) = 0;
  if (*(int *)((longlong)param_1 + 0x24c) != 0) {
    FUN_1405c03aa(param_1 + 0x48,0);
  }
  FUN_144842a8a(param_1,&local_60);
  if (((int)local_60 < 0x1d7) && ((*(byte *)(param_1 + 0x39) & 4) != 0)) {
    *(undefined1 *)(param_1 + 0x25) = 5;
  }
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
  iVar6 = iVar2 + 0xffff;
  if (-1 < iVar2) {
    iVar6 = iVar2;
  }
  if ((iVar6 >> 0x10 < DAT_14c964390) &&
     (lVar8 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar6 >> 0x10) * 0x10), lVar8 != 0)) {
    lVar8 = *(longlong *)(lVar8 + (longlong)(iVar2 % 0x10000) * 0x10);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
    if (lVar8 != 0) {
      iVar2 = *(int *)((longlong)param_1 + 0xc);
      AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
      iVar6 = iVar2 + 0xffff;
      if (-1 < iVar2) {
        iVar6 = iVar2;
      }
      if ((iVar6 >> 0x10 < DAT_14c964390) &&
         (lVar8 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar6 >> 0x10) * 0x10), lVar8 != 0))
      {
        lVar8 = *(longlong *)(lVar8 + (longlong)(iVar2 % 0x10000) * 0x10);
      }
      else {
        lVar8 = 0;
      }
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
      if (*(int *)(lVar8 + 0x280) < 0x132) {
        uVar7 = FUN_1447addd0(&DAT_14a9ce93c,0x10);
        FUN_147bb20d8(&DAT_14caea550,uVar7,&DAT_14a9ce93c);
        local_58 = &local_98;
        local_60 = (longlong **)&DAT_14a9ce93c;
        local_98 = param_1;
        FUN_147bb214c(&DAT_14caea550,&local_a0,&local_60,0);
      }
    }
  }
  else {
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
  }
  bVar10 = *(byte *)(param_1 + 0x2f);
  if (bVar10 != 0xe) {
    if (bVar10 == 0xf) {
      *(undefined1 *)(param_1 + 0x2f) = 1;
      bVar10 = 1;
    }
    *(short *)((longlong)param_1 + 0x17a) = (short)(1 << (bVar10 & 0x1f));
  }
  if (*(char *)((longlong)param_1 + 0x12a) == '\x19') {
    *(undefined1 *)((longlong)param_1 + 0x12a) = 0;
  }
  if (((*(byte *)(param_1 + 0x39) & 0x40) != 0) && (*(char *)((longlong)param_1 + 0x1c9) == '\x03'))
  {
    *(undefined1 *)((longlong)param_1 + 0x1c9) = 2;
    *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0xbf;
  }
  FUN_1403bc1fe(DAT_14ca85550,(ushort *)((longlong)param_1 + 0x17a));
  uVar1 = *(ushort *)((longlong)param_1 + 0x17a);
  if ((uVar1 >> (*(uint *)(param_1 + 0x2f) & 0x1f) & 1) == 0) {
    if ((char)*(uint *)(param_1 + 0x2f) == '\x0e') {
      cVar5 = FUN_14570860e(DAT_14ca85550);
      if (cVar5 != '\0') goto LAB_14356b5b1;
      uVar1 = *(ushort *)((longlong)param_1 + 0x17a);
    }
    if (uVar1 == 0) {
      uVar4 = 0x20;
    }
    else {
      iVar2 = 0;
      if (uVar1 != 0) {
        for (; (uVar1 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
        }
      }
      uVar4 = (undefined1)iVar2;
    }
    *(undefined1 *)(param_1 + 0x2f) = uVar4;
  }
LAB_14356b5b1:
  if ((((int)param_1[0x45] == 0 && *(int *)((longlong)param_1 + 0x224) == 0) &&
      *(int *)((longlong)param_1 + 0x22c) == 0) && (int)param_1[0x46] == 0) {
    CoCreateGuid((GUID *)((longlong)param_1 + 0x224));
  }
  FUN_1403bde7a(param_1,param_1[0x47]);
  lVar8 = (longlong)*(int *)(param_1[0x18] + 0x3e0);
  if (lVar8 != 0) {
    lVar3 = *(longlong *)(param_1[0x18] + 0x3d8);
    lVar12 = 0;
    do {
      if (*(longlong *)(lVar3 + 0x10 + lVar12) != 0) {
        FUN_1400337aa();
      }
      lVar12 = lVar12 + 0x18;
    } while (lVar8 * 0x18 != lVar12);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar10 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 == '\x01') {
      bVar10 = DAT_14c8442b8 & 1;
      goto joined_r0x00014356b66d;
    }
  }
  else {
joined_r0x00014356b66d:
    if ((bVar10 == 0) && ((*(byte *)((longlong)param_1 + 0x1d7) & 0x40) == 0)) {
      lVar8 = (longlong)*(int *)(param_1[0x18] + 0x3a8);
      if (lVar8 != 0) {
        lVar3 = *(longlong *)(param_1[0x18] + 0x3a0);
        lVar12 = 0;
        do {
          if (*(longlong *)(lVar3 + lVar12) != 0) {
            FUN_1400337aa();
          }
          lVar12 = lVar12 + 8;
        } while (lVar8 * 8 != lVar12);
      }
      FUN_1402eeec8();
      FUN_141513496(param_1);
    }
  }
  cVar5 = FUN_1406917e6();
  if (cVar5 == '\0') {
    cVar5 = (**(code **)(*param_1 + 0x4a0))(param_1);
    if ((((cVar5 == '\0') && (cVar5 = (**(code **)(*param_1 + 0x4a8))(param_1), cVar5 == '\0')) &&
        ((char)param_1[0x25] != '\x02')) &&
       (cVar5 = (**(code **)(*param_1 + 0x4b0))(param_1), cVar5 == '\0')) goto LAB_14356b7fe;
    local_a0 = 0x9e00;
    local_60 = &local_98;
    local_98 = (longlong *)&DAT_14cae9e78;
    local_58 = (longlong **)CONCAT44(local_58._4_4_,1);
    FUN_1408ecec8(param_1,local_90);
    ppplVar11 = local_70;
    if (local_70 == (longlong ***)0x0) {
      ppplVar11 = local_90;
    }
    FUN_144717c65(ppplVar11,local_68);
  }
  else {
    cVar5 = (**(code **)(*param_1 + 0x4a8))();
    if (((cVar5 == '\0') && (cVar5 = (**(code **)(*param_1 + 0x4a0))(param_1), cVar5 == '\0')) &&
       (((char)param_1[0x25] != '\x02' &&
        (cVar5 = (**(code **)(*param_1 + 0x4b0))(param_1), cVar5 == '\0')))) goto LAB_14356b7fe;
    local_40 = (longlong ***)0x0;
    local_38 = 0x400000000;
    uVar9 = (**(code **)(*param_1 + 0x350))(param_1,DAT_14c760db4,4);
    FUN_14365e3c6(&DAT_14cafb2e8,uVar9,&local_60);
    ppplVar11 = local_40;
    if (local_40 == (longlong ***)0x0) {
      ppplVar11 = &local_60;
    }
    FUN_144717c65(ppplVar11,local_38 & 0xffffffff);
    local_70 = local_40;
  }
  if (local_70 != (longlong ***)0x0) {
    FUN_1400020a8();
  }
LAB_14356b7fe:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14356ba38 FUN_14356ba38 body=1871 status=ok
// SIG undefined FUN_14356ba38(void)

void FUN_14356ba38(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  longlong *plVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_e8 [32];
  code **local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_98 = 0;
  uStack_90 = 0;
  iVar9 = *(int *)(param_1 + 600);
  if ((longlong)iVar9 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x250);
    lVar19 = 0;
    do {
      plVar15 = *(longlong **)(lVar5 + lVar19);
      *(uint *)(plVar15 + 5) = *(uint *)(plVar15 + 5) | 0x40;
      cVar7 = (**(code **)(*plVar15 + 8))(plVar15);
      if (cVar7 != '\0') {
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar15 + 1;
          lVar20 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + 1;
          UNLOCK();
          if ((int)lVar20 < 0) {
            FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9ae,
                          L"FMaterial::AddRef, Invalid NumDebugRefs %d",(int)lVar20 + 1);
          }
        }
        uVar17 = uStack_90;
        lVar20 = (longlong)(int)uStack_90;
        uVar8 = (int)uStack_90 + 1;
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
        if (uStack_90._4_4_ < uVar8) {
          FUN_147bb263c(&local_98,uVar17 & 0xffffffff);
        }
        *(longlong **)(local_98 + lVar20 * 8) = plVar15;
      }
      lVar19 = lVar19 + 8;
    } while ((longlong)iVar9 * 8 != lVar19);
  }
  FUN_1400fb146(param_1 + 0x80,0);
  switchD_143c3d4dc::caseD_1d(param_1);
  if ((int)uStack_90 < 1 && *(longlong *)(param_1 + 0x238) == 0) goto LAB_14356c114;
  uStack_a0 = (undefined4 *)(param_1 + 0x260);
  LOCK();
  *(undefined4 *)(param_1 + 0x260) = 0;
  UNLOCK();
  local_a8 = *(longlong **)(param_1 + 0x238);
  local_b8 = local_98;
  uStack_b0 = uStack_90;
  local_98 = 0;
  uStack_90 = 0;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar9 != 2) {
      if (iVar9 != 1) goto LAB_14356bb90;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_14356bb95;
      goto LAB_14356bc0e;
    }
LAB_14356bb95:
    if (local_a8 != (longlong *)0x0) {
      local_a8[0x19] = 0;
      *(byte *)((longlong)local_a8 + 0xac) = *(byte *)((longlong)local_a8 + 0xac) | 1;
      (**(code **)(*local_a8 + 0x20))();
    }
    lVar5 = local_b8;
    lVar19 = (longlong)(int)uStack_b0;
    if (lVar19 == 0) {
LAB_14356c0ce:
      uVar17 = 0;
    }
    else {
      lVar20 = 0;
      do {
        (**(code **)(**(longlong **)(lVar5 + lVar20) + 0x10))();
        lVar20 = lVar20 + 8;
      } while (lVar19 * 8 != lVar20);
LAB_14356bbde:
      uVar17 = uStack_b0 & 0xffffffff;
    }
    FUN_14356c87d(local_b8,uVar17);
    uVar17 = uStack_b0 >> 0x20;
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    if ((int)uVar17 != 0) {
      FUN_147bb26c2(&local_b8,0);
    }
    LOCK();
    *uStack_a0 = 1;
    UNLOCK();
  }
  else {
LAB_14356bb90:
    if (iVar9 == 0x10) goto LAB_14356bb95;
LAB_14356bc0e:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 == '\x01') && (iVar9 = *(int *)(lVar5 + 0xc60), iVar9 != 2)) {
        if (iVar9 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          if (DVar10 == DVar11) goto LAB_14356c07f;
        }
        goto LAB_14356bc3f;
      }
LAB_14356c07f:
      if (local_a8 != (longlong *)0x0) {
        local_a8[0x19] = 0;
        *(byte *)((longlong)local_a8 + 0xac) = *(byte *)((longlong)local_a8 + 0xac) | 1;
        (**(code **)(*local_a8 + 0x20))();
      }
      lVar5 = local_b8;
      lVar19 = (longlong)(int)uStack_b0;
      if (lVar19 != 0) {
        lVar20 = 0;
        do {
          (**(code **)(**(longlong **)(lVar5 + lVar20) + 0x10))();
          lVar20 = lVar20 + 8;
        } while (lVar19 * 8 != lVar20);
        goto LAB_14356bbde;
      }
      goto LAB_14356c0ce;
    }
LAB_14356bc3f:
    if (DAT_14ca9a43c == 0) {
      puVar3 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar13 = (uint *)*puVar3;
      if (puVar13 != (uint *)0x0) goto LAB_14356bd9e;
      while( true ) {
        uVar8 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar8 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar8 | 1;
          __tlregdtor(&LAB_14356c471);
        }
        lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar12 = *(undefined4 **)(lVar5 + 0x310);
        *(undefined8 *)(lVar5 + 0x310) = 0;
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar12 = 0xffffffff;
        *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
        puVar12[0x12] = 0;
        *puVar3 = puVar12;
        FUN_140217a48(puVar3);
        puVar13 = (uint *)*puVar3;
LAB_14356bd9e:
        puVar18 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar16 = (uint *)(puVar18 + 0x19);
        uVar8 = puVar13[0x12];
        if (puVar16 <= puVar13 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
          LOCK();
          uVar4 = *puVar13;
          *puVar13 = *puVar13 + uVar8 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar8) != 0xffffffff) break;
          puVar13 = (uint *)*puVar3;
          *puVar13 = 0xffffffff;
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar3 = puVar13;
          puVar18 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x19);
          uVar8 = 0;
          if (puVar16 <= puVar13 + 0x4000) {
            uVar8 = 1;
            goto LAB_14356be1e;
          }
        }
      }
      uVar8 = uVar8 + 1;
LAB_14356be1e:
      *(uint **)(puVar13 + 0x10) = puVar16;
      puVar13[0x12] = uVar8;
      iVar9 = 0;
      FUN_1447247dc(puVar18,0);
      *puVar18 = &PTR_FUN_14a9ce840;
      puVar18[0x15] = local_b8;
      local_b8 = 0;
      *(int *)(puVar18 + 0x16) = (int)uStack_b0;
      *(undefined4 *)((longlong)puVar18 + 0xb4) = uStack_b0._4_4_;
      uStack_b0 = 0;
      *(undefined4 *)(puVar18 + 0x17) = (undefined4)local_a8;
      *(undefined4 *)((longlong)puVar18 + 0xbc) = local_a8._4_4_;
      *(undefined4 *)(puVar18 + 0x18) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)puVar18 + 0xc4) = uStack_a0._4_4_;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar8 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
          uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
        }
        else {
          uVar17 = 2;
        }
      }
      else {
        iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar17 = 5;
      }
      if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
      }
      puVar18[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar18[9] = puVar18;
      puVar18[10] = puVar18;
      lVar5 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar5 == 0) {
        uVar6 = 1;
        if ((char)uVar17 != '\x06') {
          uVar6 = uVar17;
        }
        uVar17 = uVar6;
        uVar14 = 0;
      }
      else {
        if ((char)uVar17 == '\x06') {
          uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
        }
        uVar14 = *(undefined8 *)(lVar5 + 0x30);
      }
      puVar18[0xf] = uVar14;
      puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar18 + 0x1c) = iVar9;
      if (puVar18 == (undefined8 *)0x0) {
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
        UNLOCK();
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(puVar18);
        LOCK();
        piVar2 = (int *)(puVar18 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar18)(puVar18,1);
        }
      }
    }
    else {
      local_88[0] = (code *)0x0;
      local_78 = (longlong *)FUN_14001cc68(0x28,8);
      *local_78 = (longlong)&PTR_LAB_14a9ce820;
      local_78[1] = local_b8;
      local_b8 = 0;
      *(int *)(local_78 + 2) = (int)uStack_b0;
      *(undefined4 *)((longlong)local_78 + 0x14) = uStack_b0._4_4_;
      uStack_b0 = 0;
      *(undefined4 *)(local_78 + 3) = (undefined4)local_a8;
      *(undefined4 *)((longlong)local_78 + 0x1c) = local_a8._4_4_;
      *(undefined4 *)(local_78 + 4) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)local_78 + 0x24) = uStack_a0._4_4_;
      if (local_78 + 1 != (longlong *)0x0) {
        local_88[0] = FUN_14356c8ae;
      }
      local_c8 = local_88;
      FUN_14005a792(&DAT_14ca9a440,L"BeginDestroyCommand",&DAT_14caea548);
      if (local_88[0] != (code *)0x0) {
        plVar15 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar15 = local_68;
        }
        (**(code **)(*plVar15 + 0x10))();
      }
    }
  }
  FUN_14356c87d(local_b8,uStack_b0 & 0xffffffff);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
LAB_14356c114:
  FUN_14356c87d(local_98,(int)uStack_90);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14356c18b FUN_14356c18b body=346 status=ok
// SIG undefined FUN_14356c18b(void)

void FUN_14356c18b(void)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_a8 [40];
  longlong local_80;
  int local_78;
  uint local_70;
  longlong local_68 [3];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = DAT_14caec4b4 | 1 << ((byte)DAT_14c760db4 & 0x1f);
  do {
    uVar8 = -uVar5 & uVar5;
    iVar2 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
      }
    }
    if (uVar8 == 0) {
      iVar2 = 0;
    }
    local_68[0] = 0;
    local_68[1] = 0;
    FUN_14631b754(iVar2,local_68);
    FUN_1457b1826(&local_80,0x10,1,0x200000);
    uVar6 = (ulonglong)local_70;
    if ((-1 < (int)local_70) && ((int)local_70 < local_78)) {
      do {
        plVar1 = *(longlong **)(local_80 + (uVar6 & 0xffffffff) * 8);
        plVar3 = (longlong *)(**(code **)(*plVar1 + 0x2f0))(plVar1);
        lVar4 = (**(code **)(*plVar3 + 0x30))(plVar3,iVar2);
        if ((lVar4 != 0) &&
           ((*(longlong *)(lVar4 + 0x10) != 0 &&
            ((*(byte *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x28) + 0x238) & 1) != 0)))) {
          (**(code **)(*plVar1 + 0x2b8))(plVar1);
        }
        uVar6 = (longlong)(int)local_70;
        do {
          uVar7 = uVar6;
          uVar6 = uVar7 + 1;
          local_70 = (uint)uVar6;
          if ((longlong)local_78 <= (longlong)uVar6) break;
        } while (*(longlong *)(local_80 + uVar6 * 8) == 0);
      } while ((-2 < (longlong)uVar7) && ((int)local_70 < local_78));
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    bVar9 = uVar8 == uVar5;
    uVar5 = uVar8 ^ uVar5;
    if (bVar9) {
      if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 14356c2e6 FUN_14356c2e6 body=69 status=ok
// SIG undefined FUN_14356c2e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14356c2e6(void)

{
  _DAT_14caea110 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014356c328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caea118,1);
  return;
}



// FUNCTION 14356c3fb FUN_14356c3fb body=47 status=ok
// SIG undefined FUN_14356c3fb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14356c3fb(void)

{
  _DAT_14caea298 = 0;
  if (DAT_14caea290 != 0) {
    FUN_1400020a8();
  }
  FUN_14063ddc8(&DAT_14caea250);
  return;
}



// FUNCTION 14356c4fc FUN_14356c4fc body=14 status=ok
// SIG undefined FUN_14356c4fc(void)

void FUN_14356c4fc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 14356c50a FUN_14356c50a body=29 status=ok
// SIG undefined FUN_14356c50a(void)

undefined8 FUN_14356c50a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14356c528 FUN_14356c528 body=64 status=ok
// SIG undefined FUN_14356c528(void)

undefined8 * FUN_14356c528(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a9ce7b0;
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



// FUNCTION 14356c56c FUN_14356c56c body=81 status=ok
// SIG undefined FUN_14356c56c(void)

undefined8 FUN_14356c56c(longlong param_1)

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



// FUNCTION 14356c5c4 FUN_14356c5c4 body=89 status=ok
// SIG undefined FUN_14356c5c4(void)

bool FUN_14356c5c4(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14356c60f;
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
LAB_14356c60f:
  return lVar6 == param_2;
}



// FUNCTION 14356c63a FUN_14356c63a body=118 status=ok
// SIG undefined FUN_14356c63a(void)

void FUN_14356c63a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9ce7b0;
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



// FUNCTION 14356c6b0 FUN_14356c6b0 body=118 status=ok
// SIG undefined FUN_14356c6b0(void)

void FUN_14356c6b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9ce7b0;
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



// FUNCTION 14356c726 FUN_14356c726 body=156 status=ok
// SIG undefined FUN_14356c726(void)

void FUN_14356c726(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9ce7b0;
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
                    /* WARNING: Could not recover jumptable at 0x00014356c7b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14356c7c2 FUN_14356c7c2 body=94 status=ok
// SIG undefined FUN_14356c7c2(void)

void FUN_14356c7c2(longlong param_1)

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
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x00014356c80a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014356c815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 14356c820 FUN_14356c820 body=93 status=ok
// SIG undefined FUN_14356c820(void)

ulonglong FUN_14356c820(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14356c872:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14356c872;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 14356c87d FUN_14356c87d body=49 status=ok
// SIG undefined FUN_14356c87d(void)

void FUN_14356c87d(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_14357d522();
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 14356c8ae FUN_14356c8ae body=155 status=ok
// SIG undefined FUN_14356c8ae(void)

void FUN_14356c8ae(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 200) = 0;
    *(byte *)(param_1[2] + 0xac) = *(byte *)(param_1[2] + 0xac) | 1;
    (**(code **)(*(longlong *)param_1[2] + 0x20))();
  }
  lVar3 = *param_1;
  lVar1 = param_1[1];
  if ((longlong)(int)lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = 0;
    do {
      (**(code **)(**(longlong **)(lVar3 + lVar4) + 0x10))();
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar1 * 8 != lVar4);
    uVar2 = (undefined4)param_1[1];
    lVar3 = *param_1;
  }
  FUN_14356c87d(lVar3,uVar2);
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_147bb26c2(param_1,0);
  }
  LOCK();
  *(undefined4 *)param_1[3] = 1;
  UNLOCK();
  return;
}



// FUNCTION 14356c954 FUN_14356c954 body=29 status=ok
// SIG undefined FUN_14356c954(void)

void FUN_14356c954(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14356c972 FUN_14356c972 body=69 status=ok
// SIG undefined FUN_14356c972(void)

undefined8 * FUN_14356c972(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a9ce820;
  FUN_14356c87d(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14356c9b8 FUN_14356c9b8 body=282 status=ok
// SIG undefined FUN_14356c9b8(void)

undefined8 * FUN_14356c9b8(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14356c471);
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



// FUNCTION 14356cad2 FUN_14356cad2 body=279 status=ok
// SIG undefined FUN_14356cad2(void)

void FUN_14356cad2(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (param_1[0x17] != 0) {
    *(undefined8 *)(param_1[0x17] + 200) = 0;
    *(byte *)(param_1[0x17] + 0xac) = *(byte *)(param_1[0x17] + 0xac) | 1;
    (**(code **)(*(longlong *)param_1[0x17] + 0x20))();
  }
  lVar4 = param_1[0x15];
  iVar2 = *(int *)(param_1 + 0x16);
  if ((longlong)iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    lVar5 = 0;
    do {
      (**(code **)(**(longlong **)(lVar4 + lVar5) + 0x10))();
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar2 * 8 != lVar5);
    uVar3 = *(undefined4 *)(param_1 + 0x16);
    lVar4 = param_1[0x15];
  }
  FUN_14356c87d(lVar4,uVar3);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (*(int *)((longlong)param_1 + 0xb4) != 0) {
    FUN_147bb26c2(param_1 + 0x15,0);
  }
  LOCK();
  *(undefined4 *)param_1[0x18] = 1;
  UNLOCK();
  FUN_14356c87d(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014356cbcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14356cbf6 FUN_14356cbf6 body=12 status=ok
// SIG undefined FUN_14356cbf6(void)

void FUN_14356cbf6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014356cbff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14356cc02 FUN_14356cc02 body=68 status=ok
// SIG undefined FUN_14356cc02(void)

undefined8 * FUN_14356cc02(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14a9ce850;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14356cc46 FUN_14356cc46 body=282 status=ok
// SIG undefined FUN_14356cc46(void)

undefined8 * FUN_14356cc46(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14356c471);
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



// FUNCTION 14356cd60 FUN_14356cd60 body=91 status=ok
// SIG undefined FUN_14356cd60(void)

ulonglong FUN_14356cd60(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar3 = (ulonglong)DAT_14c7585c8;
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      uVar3 = (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014356cdb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 14356cdbb FUN_14356cdbb body=1375 status=ok
// SIG undefined FUN_14356cdbb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14356cdbb(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_50,&DAT_14cae9ee8);
  if (cVar2 == '\0') {
    _DAT_14cae9ee8 = 0;
    uRam000000014cae9ef0 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&DAT_14cae9ef8,L"GradientTexture",1);
  FUN_1446f470e(&DAT_14cae9f00,L"GradientBias",1);
  FUN_1446f470e(&DAT_14cae9f08,L"GradientScale",1);
  FUN_1446f470e(&DAT_14cae9f10,L"GradientCount",1);
  local_60 = &PTR_FUN_14a9c9740;
  local_68 = 1;
  uStack_58 = 3;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9c97d0,2,&PTR_FUN_14a9c97a0);
  local_50 = (undefined8 *)((ulonglong)local_50._4_4_ << 0x20);
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cae9fe0,L"r.MaterialParameterLegacyChecks",&local_50,
                L"When enabled, sanity check new material parameter logic against legacy path.\nNote that this can be slow"
               );
  atexit(FUN_14356a60e);
  local_50 = (undefined8 *)((ulonglong)local_50 & 0xffffffffffffff00);
  local_68._0_4_ = 0x20;
  FUN_140bd5914(&DAT_14cae9ff8,L"r.MaterialLogErrorOnFailure",&local_50,
                L"When enabled, when a material fails to compile it will issue an Error instead of a Warning.\nDefault: false"
               );
  atexit(FUN_14356a653);
  local_50 = (undefined8 *)((ulonglong)local_50 & 0xffffffffffffff00);
  local_68._0_4_ = 0;
  FUN_140bd5914(&DAT_14caea010,L"r.MaterialsDuplicateVerbatim",&local_50,
                L"When enabled, when a material or material function is duplicated, it will not change StateId (which influences DDC keys) pre-emptively.\nDefault: false"
               );
  atexit(FUN_14356a698);
  local_50 = (undefined8 *)((ulonglong)local_50 & 0xffffffffffffff00);
  local_68._0_4_ = 0;
  FUN_140bd5914(&DAT_14caea028,L"r.gbx.MaterialsAfterDOFModulateAllowed",&local_50,
                L"When enabled, allows Modulate materials After DOF.\nDefault: false");
  atexit(FUN_14356a6dd);
  local_50 = (undefined8 *)((ulonglong)local_50 & 0xffffffff00000000);
  local_68._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14caea040,L"r.gbx.ForceGeometryCollectionMaterialUsageDisabled",&local_50,
                L"When enabled, requires geometry collection usage flag to be disabled platform-wide. (Requires platform is Nanite-enabled)"
               );
  atexit(FUN_14356a722);
  local_50 = (undefined8 *)((ulonglong)local_50 & 0xffffffffffffff00);
  local_68._0_4_ = 0;
  FUN_140bd5914(&DAT_14caea058,L"r.gbx.ForceMaterialToLoadExpressions",&local_50,
                L"When cooking, forces material expressions to be completely loaded, including all their referenced objects.\nDefault: false"
               );
  atexit(FUN_14356a767);
  local_50 = (undefined8 *)((ulonglong)local_50 & 0xffffffff00000000);
  local_68._0_4_ = 4;
  FUN_14078dbce(&DAT_14caea0d0,L"r.DiscardUnusedQuality",&local_50,
                L"Whether to keep or discard unused quality level shadermaps in memory.\n0: keep all quality levels in memory. (default)\n1: Discard unused quality levels on load."
               );
  atexit(FUN_14356a7ac);
  local_68._0_4_ = 0;
  FUN_1463e9db8(&DAT_14caea0e8,L"r.CompileMaterialsForShaderFormat",&DAT_149dfb77a,
                L"When enabled, compile materials for this shader format in addition to those for the running platform.\nNote that these shaders are compiled and immediately tossed. This is only useful when directly inspecting output via r.DebugDumpShaderInfo."
               );
  atexit(FUN_14356b348);
  DAT_14caea570 = 0;
  _DAT_14caea578 = 0;
  DAT_14caea550 = 0;
  _DAT_14caea558 = 0;
  _DAT_14caea57c = 0xffffffff00000080;
  _DAT_14caea584 = 0;
  DAT_14caea590 = 0;
  _DAT_14caea598 = 0;
  atexit(FUN_14356b38d);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_149e020b0;
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
  local_50[2] = lVar3;
  *local_50 = &PTR_FUN_149e062c0;
  local_50[3] = FUN_14356c18b;
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  FUN_14152bcb8(&DAT_14caea110,L"r.ListSceneColorMaterials",
                L"Lists all materials that read from scene color.",&local_50);
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_14356d191;
    (**(code **)*local_50)();
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14356d191:
  atexit(FUN_14356c2e6);
  FUN_14621ceb6();
  atexit((_func_5014 *)&LAB_14356c3f6);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 7;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a9cd460);
  DAT_14caea270 = 0;
  DAT_14caea278 = 0;
  DAT_14caea250 = 0;
  _DAT_14caea258 = 0;
  _DAT_14caea27c = 0xffffffff00000080;
  DAT_14caea284 = 0;
  DAT_14caea290 = 0;
  _DAT_14caea298 = 0;
  atexit(FUN_14356c3fb);
  FUN_14096a150(&DAT_14caea5a0);
  atexit((_func_5014 *)&LAB_14356c42a);
  _DAT_14caea2c0 = 0;
  uRam000000014caea2d8 = 0;
  _DAT_14caea2a0 = 0;
  uRam000000014caea2a8 = 0;
  _DAT_14caea2b0 = 0;
  uRam000000014caea2b8 = 0;
  _DAT_14caea2e0 = 0;
  uRam000000014caea2e8 = 0;
  uRam000000014caea2c8 = 0x8000000000;
  _DAT_14caea2d0 = 0xffffffff;
  _DAT_14caea4c0 = 0;
  _DAT_14caea4c8 = 0;
  memset(&DAT_14caea2f0,0,0x1c0);
  _DAT_14caea4cc = 0xffffffff00000080;
  _DAT_14caea4d4 = 0;
  _DAT_14caea4e0 = 0;
  _DAT_14caea4e8 = 0;
  _DAT_14caea510 = 0;
  _DAT_14caea518 = 0;
  _DAT_14caea4f0 = 0;
  uRam000000014caea4f8 = 0;
  _DAT_14caea51c = 0xffffffff00000080;
  _DAT_14caea524 = 0;
  _DAT_14caea530 = 0;
  _DAT_14caea538 = 0;
  atexit((_func_5014 *)&LAB_14356c436);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14356d31c FUN_14356d31c body=67 status=ok
// SIG undefined FUN_14356d31c(void)

void FUN_14356d31c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  switchD_143c3d4dc::caseD_20();
  plVar1 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cb60);
                    /* WARNING: Could not recover jumptable at 0x00014356d35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cc78);
  return;
}



// FUNCTION 14356d360 FUN_14356d360 body=151 status=ok
// SIG undefined FUN_14356d360(void)

void FUN_14356d360(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,0x1427dd501,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
      return;
    }
  }
  return;
}



// FUNCTION 14356d3f8 FUN_14356d3f8 body=291 status=ok
// SIG undefined FUN_14356d3f8(void)

void FUN_14356d3f8(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar2 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  if (param_1[0xc] == 0) {
    lVar1 = param_1[4];
    lVar3 = FUN_140a1dfd8();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar1 = param_1[4];
      if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar1);
      }
      param_1[0xc] = lVar1;
    }
  }
  if (param_1[0xd] == 0) {
    lVar1 = param_1[4];
    lVar3 = FUN_145958e40();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar1 = param_1[4];
      if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar1);
      }
      param_1[0xd] = lVar1;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14356d5e4 FUN_14356d5e4 body=51 status=ok
// SIG undefined FUN_14356d5e4(void)

void FUN_14356d5e4(void)

{
  if (DAT_14caeab40 != (longlong *)0x0) {
    (**(code **)(*DAT_14caeab40 + 0x10))();
  }
  if (DAT_14caeab30 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014356d60d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14caeab30 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14356d617 FUN_14356d617 body=51 status=ok
// SIG undefined FUN_14356d617(void)

void FUN_14356d617(void)

{
  if (DAT_14caeab68 != (longlong *)0x0) {
    (**(code **)(*DAT_14caeab68 + 0x10))();
  }
  if (DAT_14caeab58 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014356d640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14caeab58 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14356d69a FUN_14356d69a body=51 status=ok
// SIG undefined FUN_14356d69a(void)

void FUN_14356d69a(void)

{
  if (DAT_14caeabf0 != (longlong *)0x0) {
    (**(code **)(*DAT_14caeabf0 + 0x10))();
  }
  if (DAT_14caeabe0 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014356d6c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14caeabe0 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14356d6cd FUN_14356d6cd body=51 status=ok
// SIG undefined FUN_14356d6cd(void)

void FUN_14356d6cd(void)

{
  if (DAT_14caeac18 != (longlong *)0x0) {
    (**(code **)(*DAT_14caeac18 + 0x10))();
  }
  if (DAT_14caeac08 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014356d6f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14caeac08 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14356d700 FUN_14356d700 body=51 status=ok
// SIG undefined FUN_14356d700(void)

void FUN_14356d700(void)

{
  if (DAT_14caeac40 != (longlong *)0x0) {
    (**(code **)(*DAT_14caeac40 + 0x10))();
  }
  if (DAT_14caeac30 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014356d729. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14caeac30 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14356d733 FUN_14356d733 body=51 status=ok
// SIG undefined FUN_14356d733(void)

void FUN_14356d733(void)

{
  if (DAT_14caeac68 != (longlong *)0x0) {
    (**(code **)(*DAT_14caeac68 + 0x10))();
  }
  if (DAT_14caeac58 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014356d75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14caeac58 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14356d78e FUN_14356d78e body=51 status=ok
// SIG undefined FUN_14356d78e(void)

void FUN_14356d78e(void)

{
  if (DAT_14caeacc0 != (longlong *)0x0) {
    (**(code **)(*DAT_14caeacc0 + 0x10))();
  }
  if (DAT_14caeacb0 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014356d7b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14caeacb0 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14356d7c1 FUN_14356d7c1 body=51 status=ok
// SIG undefined FUN_14356d7c1(void)

void FUN_14356d7c1(void)

{
  if (DAT_14caeace8 != (longlong *)0x0) {
    (**(code **)(*DAT_14caeace8 + 0x10))();
  }
  if (DAT_14caeacd8 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014356d7ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14caeacd8 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14356d7f4 FUN_14356d7f4 body=51 status=ok
// SIG undefined FUN_14356d7f4(void)

void FUN_14356d7f4(void)

{
  if (DAT_14caead10 != (longlong *)0x0) {
    (**(code **)(*DAT_14caead10 + 0x10))();
  }
  if (DAT_14caead00 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014356d81d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14caead00 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14356d83c FUN_14356d83c body=122 status=ok
// SIG undefined FUN_14356d83c(void)

void FUN_14356d83c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  
  switchD_143c3d4dc::caseD_20();
  plVar1 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cb60);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cc78);
  if (((*(byte *)(*(longlong *)(*param_2 + 8) + 0x28) & 1) != 0) &&
     (*(int *)(*(longlong *)(*param_2 + 8) + 0x40) < 0x109)) {
    if (*(char *)(param_1 + 0x128) == '\x01') {
      uVar2 = 2;
    }
    else {
      if (*(char *)(param_1 + 0x128) != '\x02') {
        return;
      }
      uVar2 = 1;
    }
    *(undefined1 *)(param_1 + 0x128) = uVar2;
  }
  return;
}



// FUNCTION 14356d906 FUN_14356d906 body=51 status=ok
// SIG undefined FUN_14356d906(void)

void FUN_14356d906(void)

{
  if (DAT_14caeadb0 != (longlong *)0x0) {
    (**(code **)(*DAT_14caeadb0 + 0x10))();
  }
  if (DAT_14caeada0 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014356d92f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14caeada0 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14356d939 FUN_14356d939 body=51 status=ok
// SIG undefined FUN_14356d939(void)

void FUN_14356d939(void)

{
  if (DAT_14caeadd8 != (longlong *)0x0) {
    (**(code **)(*DAT_14caeadd8 + 0x10))();
  }
  if (DAT_14caeadc8 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014356d962. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14caeadc8 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14356d96c FUN_14356d96c body=51 status=ok
// SIG undefined FUN_14356d96c(void)

void FUN_14356d96c(void)

{
  if (DAT_14caeae00 != (longlong *)0x0) {
    (**(code **)(*DAT_14caeae00 + 0x10))();
  }
  if (DAT_14caeadf0 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014356d995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14caeadf0 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14356d9db FUN_14356d9db body=51 status=ok
// SIG undefined FUN_14356d9db(void)

void FUN_14356d9db(void)

{
  if (DAT_14caeae70 != (longlong *)0x0) {
    (**(code **)(*DAT_14caeae70 + 0x10))();
  }
  if (DAT_14caeae60 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014356da04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14caeae60 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14356db3a FUN_14356db3a body=51 status=ok
// SIG undefined FUN_14356db3a(void)

void FUN_14356db3a(void)

{
  if (DAT_14caeb000 != (longlong *)0x0) {
    (**(code **)(*DAT_14caeb000 + 0x10))();
  }
  if (DAT_14caeaff0 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014356db63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14caeaff0 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14356db82 FUN_14356db82 body=67 status=ok
// SIG undefined FUN_14356db82(void)

void FUN_14356db82(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  switchD_143c3d4dc::caseD_20();
  plVar1 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cb60);
                    /* WARNING: Could not recover jumptable at 0x00014356dbc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cc78);
  return;
}



// FUNCTION 14356dbc6 FUN_14356dbc6 body=93 status=ok
// SIG undefined FUN_14356dbc6(void)

void FUN_14356dbc6(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  switchD_143c3d4dc::caseD_20();
  plVar1 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cb60);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cc78);
                    /* WARNING: Could not recover jumptable at 0x00014356dc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*param_2 + 8) + 0x218))(*(longlong **)(*param_2 + 8),&DAT_149e3cb60);
  return;
}



// FUNCTION 14356dc5f FUN_14356dc5f body=51 status=ok
// SIG undefined FUN_14356dc5f(void)

void FUN_14356dc5f(void)

{
  if (DAT_14caeb088 != (longlong *)0x0) {
    (**(code **)(*DAT_14caeb088 + 0x10))();
  }
  if (DAT_14caeb078 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014356dc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14caeb078 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14356dd5a FUN_14356dd5a body=51 status=ok
// SIG undefined FUN_14356dd5a(void)

void FUN_14356dd5a(void)

{
  if (DAT_14caeb1a0 != (longlong *)0x0) {
    (**(code **)(*DAT_14caeb1a0 + 0x10))();
  }
  if (DAT_14caeb190 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014356dd83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14caeb190 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14356de06 FUN_14356de06 body=219 status=ok
// SIG undefined FUN_14356de06(void)

void FUN_14356de06(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  
  switchD_143c3d4dc::caseD_20();
  plVar1 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cb60);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cc78);
  plVar1 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cb60);
  if (((*(byte *)(plVar1 + 5) & 1) != 0) && ((int)plVar1[8] < 0x18c)) {
    *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0xf0);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xd8);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xdc);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0xe0);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0xe4);
  }
  iVar2 = FUN_1448332aa(plVar1,&DAT_149e3cb60);
  if (iVar2 < 0x23) {
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_1 + 0xb8);
  }
  return;
}



// FUNCTION 14356def5 FUN_14356def5 body=51 status=ok
// SIG undefined FUN_14356def5(void)

void FUN_14356def5(void)

{
  if (DAT_14caeb290 != (longlong *)0x0) {
    (**(code **)(*DAT_14caeb290 + 0x10))();
  }
  if (DAT_14caeb280 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014356df1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14caeb280 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14356df3c FUN_14356df3c body=51 status=ok
// SIG undefined FUN_14356df3c(void)

void FUN_14356df3c(void)

{
  if (DAT_14caeb2d0 != (longlong *)0x0) {
    (**(code **)(*DAT_14caeb2d0 + 0x10))();
  }
  if (DAT_14caeb2c0 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014356df65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14caeb2c0 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14356e0eb FUN_14356e0eb body=51 status=ok
// SIG undefined FUN_14356e0eb(void)

void FUN_14356e0eb(void)

{
  if (DAT_14caeb4c0 != (longlong *)0x0) {
    (**(code **)(*DAT_14caeb4c0 + 0x10))();
  }
  if (DAT_14caeb4b0 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014356e114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14caeb4b0 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14356e15a FUN_14356e15a body=2864 status=ok
// SIG undefined FUN_14356e15a(void)

void FUN_14356e15a(longlong param_1,longlong *param_2)

{
  void *_Src;
  wchar_t *_Str;
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined2 *local_c0;
  undefined8 uStack_b8;
  undefined2 *local_b0;
  int iStack_a8;
  int iStack_a4;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  undefined8 uStack_88;
  undefined2 *local_80;
  int iStack_78;
  int iStack_74;
  void *local_70;
  int local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  switchD_143c3d4dc::caseD_20();
  plVar9 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar9 + 0x218))(plVar9,&DAT_149e3cb60);
  (**(code **)(*plVar9 + 0x218))(plVar9,&DAT_149e3cc78);
  plVar9 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar9 + 0x218))(plVar9,&DAT_149e3cb60);
  (**(code **)(*plVar9 + 0x218))(plVar9,&DAT_149e3cc78);
  (**(code **)(*plVar9 + 0x218))(plVar9,&DAT_149e39408);
  local_70 = (void *)0x0;
  local_68 = *(int *)(param_1 + 0xb8);
  lVar8 = (longlong)local_68;
  _Src = *(void **)(param_1 + 0xb0);
  if (lVar8 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_68,0);
    memcpy(local_70,_Src,lVar8 * 2);
  }
  param_1 = param_1 + 0xb0;
  if ((int)*(uint *)(plVar9 + 8) < 0x1f1) {
    FUN_1448097c4(param_1,L"Parameters.WorldPosition",L"Parameters.AbsoluteWorldPosition",0);
  }
  else if (*(uint *)(plVar9 + 8) < 0x1f9) {
    local_c8 = plVar9;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caeb9a0) {
      FUN_144b3d300(&DAT_14caeb9a0);
      if (DAT_14caeb9a0 == -1) {
        FUN_140056680(&DAT_14caeb520,L"FieldOfViewWideAngles");
        FUN_140056680(&DAT_14caeb530,L"PrevFieldOfViewWideAngles");
        FUN_140056680(&DAT_14caeb540,L"ViewRectMin");
        FUN_140056680(&DAT_14caeb550,L"ViewSizeAndInvSize");
        FUN_140056680(&DAT_14caeb560,L"BufferSizeAndInvSize");
        FUN_140056680(&DAT_14caeb570,L"ExposureScale");
        FUN_140056680(&DAT_14caeb580,L"DiffuseOverrideParameter");
        FUN_140056680(&DAT_14caeb590,L"SpecularOverrideParameter");
        FUN_140056680(&DAT_14caeb5a0,L"NormalOverrideParameter");
        FUN_140056680(&DAT_14caeb5b0,L"RoughnessOverrideParameter");
        FUN_140056680(&DAT_14caeb5c0,L"PrevFrameGameTime");
        FUN_140056680(&DAT_14caeb5d0,L"PrevFrameRealTime");
        FUN_140056680(&DAT_14caeb5e0,L"OutOfBoundsMask");
        FUN_140056680(&DAT_14caeb5f0,L"WorldCameraMovementSinceLastFrame");
        FUN_140056680(&DAT_14caeb600,L"CullingSign");
        FUN_140056680(&DAT_14caeb610,L"NearPlane");
        FUN_140056680(&DAT_14caeb620,L"GameTime");
        FUN_140056680(&DAT_14caeb630,L"RealTime");
        FUN_140056680(&DAT_14caeb640,L"Random");
        FUN_140056680(&DAT_14caeb650,L"FrameNumber");
        FUN_140056680(&DAT_14caeb660,L"CameraCut");
        FUN_140056680(&DAT_14caeb670,L"UseLightmaps");
        FUN_140056680(&DAT_14caeb680,L"UnlitViewmodeMask");
        FUN_140056680(&DAT_14caeb690,L"DirectionalLightColor");
        FUN_140056680(&DAT_14caeb6a0,L"DirectionalLightDirection");
        FUN_140056680(&DAT_14caeb6b0,L"DirectionalLightShadowTransition");
        FUN_140056680(&DAT_14caeb6c0,L"DirectionalLightShadowSize");
        FUN_140056680(&DAT_14caeb6d0,L"DirectionalLightScreenToShadow");
        FUN_140056680(&DAT_14caeb6e0,L"DirectionalLightShadowDistances");
        FUN_140056680(&DAT_14caeb6f0,L"UpperSkyColor");
        FUN_140056680(&DAT_14caeb700,L"LowerSkyColor");
        FUN_140056680(&DAT_14caeb710,L"TranslucencyLightingVolumeMin");
        FUN_140056680(&DAT_14caeb720,L"TranslucencyLightingVolumeInvSize");
        FUN_140056680(&DAT_14caeb730,L"TemporalAAParams");
        FUN_140056680(&DAT_14caeb740,L"CircleDOFParams");
        FUN_140056680(&DAT_14caeb750,L"DepthOfFieldFocalDistance");
        FUN_140056680(&DAT_14caeb760,L"DepthOfFieldScale");
        FUN_140056680(&DAT_14caeb770,L"DepthOfFieldFocalLength");
        FUN_140056680(&DAT_14caeb780,L"DepthOfFieldFocalRegion");
        FUN_140056680(&DAT_14caeb790,L"DepthOfFieldNearTransitionRegion");
        FUN_140056680(&DAT_14caeb7a0,L"DepthOfFieldFarTransitionRegion");
        FUN_140056680(&DAT_14caeb7b0,L"MotionBlurNormalizedToPixel");
        FUN_140056680(&DAT_14caeb7c0,L"GeneralPurposeTweak");
        FUN_140056680(&DAT_14caeb7d0,L"DemosaicVposOffset");
        FUN_140056680(&DAT_14caeb7e0,L"IndirectLightingColorScale");
        FUN_140056680(&DAT_14caeb7f0,L"HDR32bppEncodingMode");
        FUN_140056680(&DAT_14caeb800,L"AtmosphericFogSunDirection");
        FUN_140056680(&DAT_14caeb810,L"AtmosphericFogSunPower");
        FUN_140056680(&DAT_14caeb820,L"AtmosphericFogPower");
        FUN_140056680(&DAT_14caeb830,L"AtmosphericFogDensityScale");
        FUN_140056680(&DAT_14caeb840,L"AtmosphericFogDensityOffset");
        FUN_140056680(&DAT_14caeb850,L"AtmosphericFogGroundOffset");
        FUN_140056680(&DAT_14caeb860,L"AtmosphericFogDistanceScale");
        FUN_140056680(&DAT_14caeb870,L"AtmosphericFogAltitudeScale");
        FUN_140056680(&DAT_14caeb880,L"AtmosphericFogHeightScaleRayleigh");
        FUN_140056680(&DAT_14caeb890,L"AtmosphericFogStartDistance");
        FUN_140056680(&DAT_14caeb8a0,L"AtmosphericFogDistanceOffset");
        FUN_140056680(&DAT_14caeb8b0,L"AtmosphericFogSunDiscScale");
        FUN_140056680(&DAT_14caeb8c0,L"AtmosphericFogRenderMask");
        FUN_140056680(&DAT_14caeb8d0,L"AtmosphericFogInscatterAltitudeSampleNum");
        FUN_140056680(&DAT_14caeb8e0,L"AtmosphericFogSunColor");
        FUN_140056680(&DAT_14caeb8f0,L"AmbientCubemapTint");
        FUN_140056680(&DAT_14caeb900,L"AmbientCubemapIntensity");
        FUN_140056680(&DAT_14caeb910,L"RenderTargetSize");
        FUN_140056680(&DAT_14caeb920,L"SkyLightParameters");
        FUN_140056680(&DAT_14caeb930,L"SceneFString(TEXTureMinMax");
        FUN_140056680(&DAT_14caeb940,L"SkyLightColor");
        FUN_140056680(&DAT_14caeb950,L"SkyIrradianceEnvironmentMap");
        FUN_140056680(&DAT_14caeb960,L"MobilePreviewMode");
        FUN_140056680(&DAT_14caeb970,L"HMDEyePaddingOffset");
        FUN_140056680(&DAT_14caeb980,L"DirectionalLightShadowFString(TEXTure");
        FUN_140056680(&DAT_14caeb990,L"SamplerState");
        atexit(FUN_14356ec8c);
        _Init_thread_footer(&DAT_14caeb9a0);
      }
    }
    FUN_140056680(&local_80,L"View.");
    FUN_140056680(&local_90,L"Frame.");
    lVar8 = 0;
    do {
      FUN_140474144(&local_a0,&local_90,&DAT_14caeb520 + lVar8);
      FUN_140474144(&local_b0,&local_80,&DAT_14caeb520 + lVar8);
      puVar10 = &DAT_149dfb77a;
      if (iStack_a8 != 0) {
        puVar10 = local_b0;
      }
      puVar7 = &DAT_149dfb77a;
      if (local_98 != 0) {
        puVar7 = local_a0;
      }
      FUN_1448097c4(param_1,puVar7,puVar10,0);
      if (local_b0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_a0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != 0x480);
    if (local_90 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    plVar9 = local_c8;
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  iVar3 = FUN_1448332aa(plVar9,&DAT_149e3cb60);
  if (iVar3 < 7) {
    FUN_1448097c4(param_1,L"View.RenderTargetSize",L"View.BufferSizeAndInvSize.xy",0);
  }
  iVar3 = FUN_1448332aa(plVar9,&DAT_149e39408);
  if (iVar3 < 1) {
    lVar8 = 0;
    do {
      _Str = *(wchar_t **)((longlong)&PTR_u_WorldToClip_14a9d00f0 + lVar8);
      FUN_140056680(&local_90,L"View.");
      if (_Str == (wchar_t *)0x0) {
LAB_14356e5cc:
        iStack_78 = (int)uStack_88;
        iStack_74 = uStack_88._4_4_;
        local_80 = local_90;
        local_90 = (undefined2 *)0x0;
      }
      else {
        sVar5 = wcslen(_Str);
        if ((int)sVar5 == 0) goto LAB_14356e5cc;
        iVar3 = (int)uStack_88;
        iVar4 = (int)sVar5 + (uint)((int)uStack_88 == 0);
        local_80 = local_90;
        local_90 = (undefined2 *)0x0;
        iStack_78 = (int)uStack_88;
        iVar2 = uStack_88._4_4_;
        iStack_74 = uStack_88._4_4_;
        uStack_88 = 0;
        iVar6 = iVar4 + iVar3;
        if (iVar6 < iVar3) goto LAB_14356ec7c;
        if (iVar6 < 0) goto LAB_14356ec84;
        if (iVar2 < iVar6) {
          FUN_1446f8c06(&local_80);
        }
        FUN_1400020e8(&local_80,_Str,sVar5 & 0xffffffff);
        if (local_90 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      FUN_140056680(&local_a0,&DAT_149e06144);
      FUN_140056680(&local_c0,L"DFDemote(ResolvedView.");
      if (_Str == (wchar_t *)0x0) {
LAB_14356e5e4:
        iStack_a8 = (int)uStack_b8;
        iStack_a4 = uStack_b8._4_4_;
        local_b0 = local_c0;
        local_c0 = (undefined2 *)0x0;
        uStack_b8 = 0;
      }
      else {
        sVar5 = wcslen(_Str);
        if ((int)sVar5 == 0) goto LAB_14356e5e4;
        iVar3 = (int)uStack_b8;
        iVar4 = (int)sVar5 + (uint)((int)uStack_b8 == 0);
        local_b0 = local_c0;
        local_c0 = (undefined2 *)0x0;
        iStack_a8 = (int)uStack_b8;
        iVar2 = uStack_b8._4_4_;
        iStack_a4 = uStack_b8._4_4_;
        uStack_b8 = 0;
        iVar6 = iVar4 + iVar3;
        if (iVar6 < iVar3) {
LAB_14356ec7c:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((longlong)iVar4);
        }
        if (iVar6 < 0) {
LAB_14356ec84:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar6);
        }
        if (iVar2 < iVar6) {
          FUN_1446f8c06(&local_b0);
        }
        FUN_1400020e8(&local_b0,_Str,sVar5 & 0xffffffff);
      }
      FUN_1401c7f3e(&local_90,&local_b0,&local_a0);
      if (local_b0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_c0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_a0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      puVar10 = &DAT_149dfb77a;
      if ((int)uStack_88 != 0) {
        puVar10 = local_90;
      }
      puVar7 = &DAT_149dfb77a;
      if (iStack_78 != 0) {
        puVar7 = local_80;
      }
      FUN_1448097c4(param_1,puVar7,puVar10,0);
      if (local_90 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_80 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar8 = lVar8 + 8;
    } while (lVar8 != 0x50);
    lVar8 = 0;
    FUN_1448097c4(param_1,L"ResolvedDFDemote(ResolvedView.",L"DFDemote(ResolvedView.",0);
    do {
      FUN_1448097c4(param_1,(longlong)&DAT_14a9d02d4 +
                            (longlong)*(int *)((longlong)&DAT_14a9d02d4 + lVar8),
                    (longlong)&DAT_14a9d0468 + (longlong)*(int *)((longlong)&DAT_14a9d0468 + lVar8),
                    0);
      lVar8 = lVar8 + 4;
    } while (lVar8 != 0x14);
    lVar8 = 0;
    do {
      uVar1 = *(undefined8 *)((longlong)&PTR_u_GetWorldPosition_Parameters__14a9d0530 + lVar8);
      FUN_140002266(&local_80,L"WSDemote(%s)",uVar1);
      puVar10 = &DAT_149dfb77a;
      if (iStack_78 != 0) {
        puVar10 = local_80;
      }
      FUN_1448097c4(param_1,uVar1,puVar10,0);
      if (local_80 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar8 = lVar8 + 8;
    } while (lVar8 != 0x28);
  }
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14356ec8c FUN_14356ec8c body=46 status=ok
// SIG undefined FUN_14356ec8c(void)

void FUN_14356ec8c(void)

{
  longlong lVar1;
  
  lVar1 = 0x480;
  do {
    if (*(longlong *)(lVar1 + 0x14caeb510) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 14356ecba FUN_14356ecba body=137 status=ok
// SIG undefined FUN_14356ecba(void)

void FUN_14356ecba(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  switchD_143c3d4dc::caseD_20();
  plVar1 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cb60);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cc78);
  plVar1 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cb60);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cc78);
                    /* WARNING: Could not recover jumptable at 0x00014356ed40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e39408);
  return;
}



// FUNCTION 14356ed44 FUN_14356ed44 body=223 status=ok
// SIG undefined FUN_14356ed44(void)

void FUN_14356ed44(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_38 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  local_28.Data1 = 0;
  local_28.Data2 = 0;
  local_28.Data3 = 0;
  local_28.Data4[0] = '\0';
  local_28.Data4[1] = '\0';
  local_28.Data4[2] = '\0';
  local_28.Data4[3] = '\0';
  local_28.Data4[4] = '\0';
  local_28.Data4[5] = '\0';
  local_28.Data4[6] = '\0';
  local_28.Data4[7] = '\0';
  CoCreateGuid(&local_28);
  *(ulong *)(param_1 + 0x28) = local_28.Data1;
  *(undefined4 *)(param_1 + 0x2c) = local_28._4_4_;
  *(undefined4 *)(param_1 + 0x30) = local_28.Data4._0_4_;
  *(undefined4 *)(param_1 + 0x34) = local_28.Data4._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14356f032 FUN_14356f032 body=116 status=ok
// SIG undefined FUN_14356f032(void)

void FUN_14356f032(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  
  switchD_143c3d4dc::caseD_20();
  plVar1 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cb60);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cc78);
  if ((*(int *)(*(longlong *)(*param_2 + 8) + 0x40) < 0x16c) &&
     (bVar2 = *(char *)(param_1 + 0x151) - 1, bVar2 < 3)) {
    *(char *)(param_1 + 0x151) = (char)(0x40503 >> ((bVar2 & 3) << 3));
  }
  return;
}



// FUNCTION 14356f25e FUN_14356f25e body=51 status=ok
// SIG undefined FUN_14356f25e(void)

void FUN_14356f25e(void)

{
  if (DAT_14caebe48 != (longlong *)0x0) {
    (**(code **)(*DAT_14caebe48 + 0x10))();
  }
  if (DAT_14caebe38 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014356f287. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14caebe38 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14356f291 FUN_14356f291 body=51 status=ok
// SIG undefined FUN_14356f291(void)

void FUN_14356f291(void)

{
  if (DAT_14caebe70 != (longlong *)0x0) {
    (**(code **)(*DAT_14caebe70 + 0x10))();
  }
  if (DAT_14caebe60 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014356f2ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14caebe60 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14356f3b4 FUN_14356f3b4 body=237 status=ok
// SIG undefined FUN_14356f3b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14356f3b4(void)

{
  char cVar1;
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(local_20,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(local_20,&DAT_14caeaa10);
  if (cVar1 == '\0') {
    _DAT_14caeaa10 = 0;
    uRam000000014caeaa18 = 0;
  }
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&DAT_14caeaa20,L"GradientTexture",1);
  FUN_1446f470e(&DAT_14caeaa28,L"GradientBias",1);
  FUN_1446f470e(&DAT_14caeaa30,L"GradientScale",1);
  FUN_1446f470e(&DAT_14caeaa38,L"GradientCount",1);
  FUN_1446f470e(&DAT_14caeb1c8,L"Param",1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14356f648 FUN_14356f648 body=55 status=ok
// SIG undefined FUN_14356f648(void)

void FUN_14356f648(void)

{
  undefined8 uVar1;
  
  if (DAT_14caec2f8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caec2f8 = FUN_14171c317(FUN_1463ea9e6,uVar1,L"EMaterialParameterCopyMethod");
  }
  return;
}



// FUNCTION 14356f680 FUN_14356f680 body=967 status=ok
// SIG undefined FUN_14356f680(void)

void FUN_14356f680(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  undefined8 uStack_200;
  longlong *local_1f0;
  longlong local_1e8;
  int local_1e0;
  undefined **local_1d8;
  longlong *plStack_1d0;
  undefined ***local_1c8;
  undefined ****local_1c0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb60);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39440);
  FUN_140969ec6(param_1,param_2);
  iVar5 = FUN_1448332aa(param_2,&DAT_149e3cc78);
  if (0x23 < iVar5) {
    uVar6 = 0;
    if (((*(byte *)((longlong)param_2 + 0x35) & 0x10) != 0) &&
       (uVar6 = 0, (*(byte *)(param_2 + 5) & 4) != 0)) {
      uVar6 = (uint)(param_1[0x56] != 0);
    }
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      local_1d8 = (undefined **)CONCAT44(local_1d8._4_4_,uVar6);
      (**(code **)(*param_2 + 0x170))(param_2,&local_1d8,4);
      uVar6 = (uint)local_1d8;
      if (1 < (uint)local_1d8) {
        FUN_14572541c(param_2);
        uVar6 = (uint)local_1d8;
      }
    }
    else {
      uVar6 = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    if (uVar6 != 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        plVar9 = (longlong *)FUN_14001cc68(0x10,0x10);
        *plVar9 = 0;
        plVar9[1] = 0;
        plVar11 = (longlong *)param_1[0x56];
        if ((plVar11 != plVar9) && (param_1[0x56] = (longlong)plVar9, plVar11 != (longlong *)0x0)) {
          if (*plVar11 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(plVar11);
        }
        *(byte *)((longlong)param_1 + 0x151) = *(byte *)((longlong)param_1 + 0x151) | 0x20;
      }
      if (DAT_14caec2c8 == (longlong *)0x0) {
        uVar10 = FUN_140002dac();
        DAT_14caec2c8 =
             (longlong *)FUN_140002ddd(FUN_1463ea925,uVar10,L"MaterialInstanceCachedData");
      }
      local_1c0 = &local_1c8;
      local_1d8 = &PTR_FUN_149e37810;
      local_1c8 = &local_1d8;
      local_208 = 0;
      uStack_200 = 0;
      plStack_1d0 = param_2;
      (**(code **)(*DAT_14caec2c8 + 0x2d0))(0,local_1c0,param_1[0x56],DAT_14caec2c8);
    }
  }
  if (((*(byte *)(param_1 + 0x2a) & 1) != 0) && (0x103 < (int)param_2[8])) {
    local_1d8 = (undefined **)param_1[3];
    FUN_14356a7f1(param_2,param_1 + 0x57);
  }
  uVar3 = DAT_14c760db4;
  if ((((*(byte *)(param_2 + 5) & 4) == 0) || (param_2[0xd] == 0)) ||
     (*(longlong *)(param_2[0xd] + 0x10) == 0)) goto LAB_14356f9c4;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar5 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar5 != 2)) {
    if (iVar5 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14356f8ee;
    }
    cVar4 = (*(code *)PTR_FUN_14c75b118)();
    if (cVar4 == '\0') goto LAB_14356f9c4;
  }
LAB_14356f8ee:
  plVar11 = (longlong *)(**(code **)(*param_1 + 0x2b0))(param_1);
  lVar12 = (**(code **)(*plVar11 + 0x348))(plVar11,uVar3,4);
  iVar5 = 0;
  FUN_1449d9015(DAT_14ca85550,0);
  if (lVar12 != 0) {
    local_1d8 = (undefined **)0x0;
    plStack_1d0 = (longlong *)0x0;
    local_1e8 = param_1[3];
    FUN_1400348e2(&local_1e8);
    do {
      FUN_14017c93e(lVar12,&local_1e8,iVar5);
      if ((longlong)local_1e0 != 0) {
        lVar13 = (longlong)local_1e0 * 0x1c;
        lVar14 = local_1e8;
        do {
          local_1f0 = (longlong *)0x0;
          FUN_14017ca90(lVar14,param_1,lVar12,&local_1f0);
          if (local_1f0 != (longlong *)0x0) {
            (**(code **)(*local_1f0 + 0x328))();
          }
          lVar14 = lVar14 + 0x1c;
          lVar13 = lVar13 + -0x1c;
        } while (lVar13 != 0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 6);
    if (local_1d8 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14356f9c4:
  iVar5 = FUN_1448332aa(param_2,&DAT_149e39440);
  if ((iVar5 < 3) && (*(char *)((longlong)param_1 + 0x241) == '\x03')) {
    *(undefined1 *)((longlong)param_1 + 0x241) = 0;
    *(undefined1 *)((longlong)param_1 + 0x17c) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14356fa6a FUN_14356fa6a body=648 status=ok
// SIG undefined FUN_14356fa6a(void)

void FUN_14356fa6a(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined1 uVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_143578a24();
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) goto LAB_14356fc44;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar4 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_14356fc44;
    bVar4 = DAT_14c8442b8 & 1;
  }
  if (bVar4 != 0) goto LAB_14356fc44;
  puVar8 = (undefined8 *)FUN_14001cc68(0x208,0x10);
  local_28 = param_1[3];
  FUN_1400021e4(&local_28,local_38);
  FUN_14089e4fa(puVar8);
  *puVar8 = &PTR_FUN_14a9d3350;
  puVar8[0x19] = 0;
  puVar8[0x1a] = param_1;
  *(undefined4 *)((longlong)puVar8 + 0x204) = 0;
  memset(puVar8 + 0x1b,0,299);
  uVar5 = (**(code **)(*param_1 + 0x470))(param_1);
  *(undefined1 *)((longlong)puVar8 + 0xc1) = uVar5;
  uVar5 = (**(code **)(*param_1 + 0x468))(param_1);
  *(undefined1 *)(puVar8 + 0x18) = uVar5;
  puVar3 = (undefined8 *)param_1[0x49];
  if (puVar3 != puVar8) {
    param_1[0x49] = (longlong)puVar8;
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar8 + 0xc) = *(int *)(puVar8 + 0xc) + 1;
      UNLOCK();
    }
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  LOCK();
  *(uint *)(param_1 + 0x5b) = *(uint *)(param_1 + 0x5b) | 1;
  UNLOCK();
  lVar9 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar9 == 0) {
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar2 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar2 != 2)) {
      if (iVar2 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if (DVar6 == DVar7) goto LAB_14356fcc4;
      }
    }
    else {
LAB_14356fcc4:
      lVar9 = DAT_14cb10918;
      if (DAT_14cb10918 != 0) goto LAB_14356fbc7;
    }
    *(undefined8 *)(param_1[0x49] + 0xb0) = 0;
    uVar10 = 0;
  }
  else {
LAB_14356fbc7:
    *(undefined8 *)(param_1[0x49] + 0xb0) = *(undefined8 *)(lVar9 + 0x6f8);
    uVar10 = *(undefined8 *)(lVar9 + 0x700);
  }
  *(undefined8 *)(param_1[0x49] + 0xb8) = uVar10;
LAB_14356fc44:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14356fcf4 FUN_14356fcf4 body=163 status=ok
// SIG undefined FUN_14356fcf4(void)

void FUN_14356fcf4(longlong *param_1)

{
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14356fd98 FUN_14356fd98 body=736 status=ok
// SIG undefined FUN_14356fd98(void)

undefined1 FUN_14356fd98(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_58;
  int local_50;
  undefined8 *local_48;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  lVar8 = (**(code **)(*param_1 + 0x2c0))();
  if (lVar8 == 0) {
    uVar5 = 0;
    goto LAB_14357002b;
  }
  local_39 = 0;
  cVar4 = FUN_144b24cd0(lVar8,&local_39,param_2);
  uVar5 = local_39;
  if (cVar4 == '\0') goto LAB_14357002b;
  if ((DAT_14c86a9f8 != '\x01') ||
     (iVar3 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar3 == 2)) {
LAB_143570015:
    local_39 = (**(code **)(*param_1 + 0x338))(param_1,param_2);
    uVar5 = local_39;
    goto LAB_14357002b;
  }
  if (iVar3 == 1) {
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    if (DVar6 == DVar7) goto LAB_143570015;
  }
  puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar9 = param_1;
  *(undefined4 *)(puVar9 + 1) = param_2;
  plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14a9d4770;
  plVar10[2] = (longlong)puVar9;
  local_39 = 0;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  local_50 = 3;
  if (plVar10 == (longlong *)0x0) {
    *local_58 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_58[2] = lVar11;
    *local_58 = &PTR_FUN_14a9d4790;
    local_58[3] = puVar9;
    local_58[4] = 0;
    local_58[5] = &LAB_14357007a;
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    *local_58 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_58[2] = lVar11;
    *local_58 = &PTR_FUN_14a9d4790;
    local_58[3] = puVar9;
    local_58[4] = plVar10;
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    local_58[5] = &LAB_14357007a;
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
  local_68 = 0x101;
  FUN_142c039ac(&local_48,&local_58);
  if (local_48 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_48 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  if (local_50 == 0) {
LAB_14356ffd2:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_14356ffd2;
  }
  uVar5 = local_39;
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
      uVar5 = local_39;
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        uVar5 = local_39;
      }
    }
  }
LAB_14357002b:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 143570090 FUN_143570090 body=395 status=ok
// SIG undefined FUN_143570090(void)

void FUN_143570090(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  longlong local_98 [2];
  undefined8 *local_88;
  ulonglong uStack_80;
  undefined1 local_78 [32];
  undefined1 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 != param_1 && param_2 != (longlong *)0x0) {
    FUN_1406a5d86(param_1,3);
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    iVar3 = 0;
    do {
      if (((byte)iVar3 & 0xe) != 8) {
        (**(code **)(*param_1 + 0x370))(param_1,iVar3,&local_88,local_98);
        FUN_147bb4c6e(param_1,iVar3,uStack_80 & 0xffffffff);
        if ((longlong)(int)uStack_80 != 0) {
          lVar2 = (longlong)(int)uStack_80 << 4;
          puVar4 = local_88;
          do {
            local_58 = 0xff;
            local_50 = 0xffffffff;
            local_4c = 0;
            local_ac = (undefined4)*puVar4;
            local_a8 = 0;
            local_a4 = (undefined4)((ulonglong)*puVar4 >> 0x20);
            local_a0 = *(undefined4 *)((longlong)puVar4 + 0xc);
            local_9c = *(undefined1 *)(puVar4 + 1);
            local_b8 = 3;
            cVar1 = (**(code **)(*param_2 + 0x3c0))(param_2,iVar3,&local_ac,local_78);
            if (cVar1 != '\0') {
              FUN_1406a551e(param_1,puVar4,local_78);
            }
            puVar4 = puVar4 + 2;
            lVar2 = lVar2 + -0x10;
          } while (lVar2 != 0);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 10);
    FUN_1403ba93c(param_1);
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143570220 FUN_143570220 body=1884 status=ok
// SIG undefined FUN_143570220(void)

void FUN_143570220(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  longlong *plVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_e8 [32];
  code **local_c8;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_98 = 0;
  uStack_90 = 0;
  iVar9 = *(int *)(param_1 + 0x2d0);
  if ((longlong)iVar9 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x2c8);
    lVar19 = 0;
    do {
      plVar15 = *(longlong **)(lVar5 + lVar19);
      *(uint *)(plVar15 + 5) = *(uint *)(plVar15 + 5) | 0x40;
      cVar7 = (**(code **)(*plVar15 + 8))(plVar15);
      if (cVar7 != '\0') {
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar15 + 1;
          lVar20 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + 1;
          UNLOCK();
          if ((int)lVar20 < 0) {
            FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9ae,
                          L"FMaterial::AddRef, Invalid NumDebugRefs %d",(int)lVar20 + 1);
          }
        }
        uVar17 = uStack_90;
        lVar20 = (longlong)(int)uStack_90;
        uVar8 = (int)uStack_90 + 1;
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
        if (uStack_90._4_4_ < uVar8) {
          FUN_147bb263c(&local_98,uVar17 & 0xffffffff);
        }
        *(longlong **)(local_98 + lVar20 * 8) = plVar15;
      }
      lVar19 = lVar19 + 8;
    } while ((longlong)iVar9 * 8 != lVar19);
  }
  FUN_1400fb146(param_1 + 0x80,0);
  switchD_143c3d4dc::caseD_1d(param_1);
  uVar17 = uStack_90;
  plVar15 = *(longlong **)(param_1 + 0x248);
  if ((int)uStack_90 < 1 && plVar15 == (longlong *)0x0) goto LAB_1435708f1;
  uStack_a0 = (uint *)(param_1 + 0x2d8);
  local_b8 = local_98;
  local_98 = 0;
  uStack_90 = 0;
  local_b0 = uVar17;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = *(int *)(lVar5 + 0xc60);
  local_a8 = plVar15;
  if (DAT_14c86a9fc == 0) {
    if (iVar9 != 2) {
      if (iVar9 != 1) goto LAB_143570379;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_14357037e;
      goto LAB_1435703ec;
    }
LAB_14357037e:
    if (local_a8 != (longlong *)0x0) {
      *(byte *)((longlong)local_a8 + 0xac) = *(byte *)((longlong)local_a8 + 0xac) | 1;
      (**(code **)(*local_a8 + 0x20))();
    }
    lVar5 = local_b8;
    lVar19 = (longlong)(int)local_b0;
    if (lVar19 == 0) {
LAB_1435708a1:
      uVar17 = 0;
    }
    else {
      lVar20 = 0;
      do {
        (**(code **)(**(longlong **)(lVar5 + lVar20) + 0x10))();
        lVar20 = lVar20 + 8;
      } while (lVar19 * 8 != lVar20);
LAB_1435703bc:
      uVar17 = local_b0 & 0xffffffff;
    }
    FUN_14356c87d(local_b8,uVar17);
    uVar17 = local_b0 >> 0x20;
    local_b0 = local_b0 & 0xffffffff00000000;
    if ((int)uVar17 != 0) {
      FUN_147bb26c2(&local_b8,0);
    }
    LOCK();
    *uStack_a0 = *uStack_a0 & 0xfffffffe;
    UNLOCK();
    if ((*uStack_a0 & 2) != 0) {
      FUN_1463eb5ca(local_a8);
      LOCK();
      *uStack_a0 = *uStack_a0 & 0xfffffffd;
      UNLOCK();
    }
  }
  else {
LAB_143570379:
    if (iVar9 == 0x10) goto LAB_14357037e;
LAB_1435703ec:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 == '\x01') && (iVar9 = *(int *)(lVar5 + 0xc60), iVar9 != 2)) {
        if (iVar9 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          if (DVar10 == DVar11) goto LAB_14357085d;
        }
        goto LAB_14357041d;
      }
LAB_14357085d:
      if (local_a8 != (longlong *)0x0) {
        *(byte *)((longlong)local_a8 + 0xac) = *(byte *)((longlong)local_a8 + 0xac) | 1;
        (**(code **)(*local_a8 + 0x20))();
      }
      lVar5 = local_b8;
      lVar19 = (longlong)(int)local_b0;
      if (lVar19 != 0) {
        lVar20 = 0;
        do {
          (**(code **)(**(longlong **)(lVar5 + lVar20) + 0x10))();
          lVar20 = lVar20 + 8;
        } while (lVar19 * 8 != lVar20);
        goto LAB_1435703bc;
      }
      goto LAB_1435708a1;
    }
LAB_14357041d:
    if (DAT_14ca9a43c == 0) {
      puVar3 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar13 = (uint *)*puVar3;
      if (puVar13 != (uint *)0x0) goto LAB_14357057c;
      while( true ) {
        uVar8 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar8 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar8 | 1;
          __tlregdtor(&LAB_143574684);
        }
        lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar12 = *(undefined4 **)(lVar5 + 0x310);
        *(undefined8 *)(lVar5 + 0x310) = 0;
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar12 = 0xffffffff;
        *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
        puVar12[0x12] = 0;
        *puVar3 = puVar12;
        FUN_140217a48(puVar3);
        puVar13 = (uint *)*puVar3;
LAB_14357057c:
        puVar18 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar16 = (uint *)(puVar18 + 0x19);
        uVar8 = puVar13[0x12];
        if (puVar16 <= puVar13 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
          LOCK();
          uVar4 = *puVar13;
          *puVar13 = *puVar13 + uVar8 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar8) != 0xffffffff) break;
          puVar13 = (uint *)*puVar3;
          *puVar13 = 0xffffffff;
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar3 = puVar13;
          puVar18 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x19);
          uVar8 = 0;
          if (puVar16 <= puVar13 + 0x4000) {
            uVar8 = 1;
            goto LAB_1435705fc;
          }
        }
      }
      uVar8 = uVar8 + 1;
LAB_1435705fc:
      *(uint **)(puVar13 + 0x10) = puVar16;
      puVar13[0x12] = uVar8;
      iVar9 = 0;
      FUN_1447247dc(puVar18,0);
      *puVar18 = &PTR_FUN_14a9d4820;
      puVar18[0x15] = local_b8;
      local_b8 = 0;
      *(int *)(puVar18 + 0x16) = (int)local_b0;
      *(undefined4 *)((longlong)puVar18 + 0xb4) = local_b0._4_4_;
      local_b0 = 0;
      *(undefined4 *)(puVar18 + 0x17) = (undefined4)local_a8;
      *(undefined4 *)((longlong)puVar18 + 0xbc) = local_a8._4_4_;
      *(undefined4 *)(puVar18 + 0x18) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)puVar18 + 0xc4) = uStack_a0._4_4_;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar8 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
          uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
        }
        else {
          uVar17 = 2;
        }
      }
      else {
        iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar17 = 5;
      }
      if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
      }
      puVar18[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar18[9] = puVar18;
      puVar18[10] = puVar18;
      lVar5 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar5 == 0) {
        uVar6 = 1;
        if ((char)uVar17 != '\x06') {
          uVar6 = uVar17;
        }
        uVar17 = uVar6;
        uVar14 = 0;
      }
      else {
        if ((char)uVar17 == '\x06') {
          uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
        }
        uVar14 = *(undefined8 *)(lVar5 + 0x30);
      }
      puVar18[0xf] = uVar14;
      puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar18 + 0x1c) = iVar9;
      if (puVar18 == (undefined8 *)0x0) {
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
        UNLOCK();
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(puVar18);
        LOCK();
        piVar2 = (int *)(puVar18 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar18)(puVar18,1);
        }
      }
    }
    else {
      local_88[0] = (code *)0x0;
      local_78 = (longlong *)FUN_14001cc68(0x28,8);
      *local_78 = (longlong)&PTR_LAB_14a9d4800;
      local_78[1] = local_b8;
      local_b8 = 0;
      *(int *)(local_78 + 2) = (int)local_b0;
      *(undefined4 *)((longlong)local_78 + 0x14) = local_b0._4_4_;
      local_b0 = 0;
      *(undefined4 *)(local_78 + 3) = (undefined4)local_a8;
      *(undefined4 *)((longlong)local_78 + 0x1c) = local_a8._4_4_;
      *(undefined4 *)(local_78 + 4) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)local_78 + 0x24) = uStack_a0._4_4_;
      if (local_78 + 1 != (longlong *)0x0) {
        local_88[0] = FUN_14357514e;
      }
      local_c8 = local_88;
      FUN_14005a792(&DAT_14ca9a440,L"BeginDestroyCommand",&DAT_14caec354);
      if (local_88[0] != (code *)0x0) {
        plVar15 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar15 = local_68;
        }
        (**(code **)(*plVar15 + 0x10))();
      }
    }
  }
  FUN_14356c87d(local_b8,local_b0 & 0xffffffff);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
LAB_1435708f1:
  FUN_14356c87d(local_98,(int)uStack_90);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14357097e FUN_14357097e body=964 status=ok
// SIG undefined FUN_14357097e(void)

ulonglong FUN_14357097e(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  bool bVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x110) == 0 || *(longlong *)(param_1 + 0x110) != param_2) {
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x110) = 0;
    }
    else {
      if (DAT_14caec308 == 0) {
        local_60 = &local_48;
        local_48 = FUN_1417df956;
        local_50 = FUN_14081d0ea;
        local_58 = &LAB_146386466;
        local_68 = &LAB_147bb408b;
        local_70 = &LAB_1463eaa15;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10000001;
        local_90 = 8;
        local_98 = 0x2e0;
        FUN_14081cfa3(L"/Script/Engine",L"MaterialInstance",&DAT_14caec308,&DAT_147bb408a);
      }
      iVar5 = *(int *)(DAT_14caec308 + 0x38);
      if ((iVar5 <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)iVar5 * 8)
          == DAT_14caec308 + 0x30)) {
        lVar6 = param_2;
        if (param_2 != param_1) {
          do {
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar5) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar5 * 8) !=
                DAT_14caec308 + 0x30)) goto LAB_1435709f9;
            lVar6 = *(longlong *)(lVar6 + 0x110);
          } while ((lVar6 != param_1) && (lVar6 != 0));
          if (lVar6 == 0) goto LAB_1435709f9;
        }
LAB_143570b65:
        FUN_1403ba93c(param_1);
        goto LAB_143570b6d;
      }
LAB_1435709f9:
      lVar6 = FUN_140a1dfd8();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) {
        lVar6 = FUN_14129edf0();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_143570b65;
      }
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      *(longlong *)(param_1 + 0x110) = param_2;
      FUN_1400337aa(param_2);
    }
    if ((char)(param_3 & 0xffffffff) == '\0') {
      FUN_1403ba93c(param_1);
    }
    else {
      if (0 < *(int *)(param_1 + 0x2d0)) {
        local_48 = (code *)0x0;
        uStack_40 = 0;
        if (&local_48 != (code **)(param_1 + 0x2c8)) {
          local_48 = *(code **)(param_1 + 0x2c8);
          *(undefined8 *)(param_1 + 0x2c8) = 0;
          uStack_40 = CONCAT44(*(undefined4 *)(param_1 + 0x2d4),*(int *)(param_1 + 0x2d0));
          *(undefined8 *)(param_1 + 0x2d0) = 0;
        }
        FUN_1403b9c84(&local_48);
        *(undefined4 *)(param_1 + 0x2d0) = 0;
        if (*(int *)(param_1 + 0x2d4) < 0) {
          FUN_14063db1c((code **)(param_1 + 0x2c8),0);
        }
        if (local_48 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      FUN_1403b9b5a(param_1,1);
    }
    iVar5 = *(int *)(param_1 + 0x7c);
    *(int *)(param_1 + 0x7c) = iVar5 + 1;
    uVar7 = (ulonglong)*(int *)(param_1 + 0x70);
    if ((longlong)uVar7 < 1) {
      *(int *)(param_1 + 0x7c) = iVar5;
      uVar9 = CONCAT71((int7)((param_3 & 0xffffffff) >> 8),1);
    }
    else {
      plVar1 = (longlong *)(param_1 + 0x68);
      bVar10 = false;
      do {
        uVar9 = uVar7 * 0x10 - 8;
        uVar12 = uVar7;
        while (((*(int *)(*plVar1 + uVar9) != 0 &&
                (plVar2 = *(longlong **)(*plVar1 + -8 + uVar9), plVar2 != (longlong *)0x0)) &&
               (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_1), cVar4 != '\0'))) {
          uVar9 = uVar9 - 0x10;
          bVar3 = uVar12 < 2;
          uVar12 = uVar12 - 1;
          if (bVar3) {
            iVar5 = *(int *)(param_1 + 0x7c) + -1;
            *(int *)(param_1 + 0x7c) = iVar5;
            uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
            if (bVar10) goto LAB_143570ca0;
            goto LAB_143570b6f;
          }
        }
        uVar7 = uVar12 - 1;
        bVar10 = true;
      } while (1 < uVar12);
      iVar5 = *(int *)(param_1 + 0x7c) + -1;
      *(int *)(param_1 + 0x7c) = iVar5;
LAB_143570ca0:
      uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
      if (iVar5 < 1) {
        iVar5 = *(int *)(param_1 + 0x70);
        iVar8 = iVar5;
        if (0 < iVar5) {
          iVar11 = 0;
          do {
            if (((*(int *)(*plVar1 + 8 + (longlong)iVar11 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar1 + (longlong)iVar11 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar1,iVar11);
              FUN_14005b248(plVar1);
            }
            else {
              iVar11 = iVar11 + 1;
            }
            iVar8 = *(int *)(param_1 + 0x70);
          } while (iVar11 < iVar8);
        }
        iVar11 = 2;
        if (2 < iVar8 * 2) {
          iVar11 = iVar8 * 2;
        }
        *(int *)(param_1 + 0x78) = iVar11;
        if ((iVar11 < iVar5) && (*(int *)(param_1 + 0x74) != iVar8)) {
          FUN_14045812c(plVar1);
        }
      }
    }
  }
  else {
LAB_143570b6d:
    uVar9 = 0;
  }
LAB_143570b6f:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 143570d44 FUN_143570d44 body=316 status=ok
// SIG undefined FUN_143570d44(void)

undefined8 FUN_143570d44(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
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
  uVar2 = CONCAT71((int7)(local_18 >> 8),param_1 != 0);
  if ((param_1 != 0) && (lVar3 = DAT_14caec308, param_1 != param_2)) {
    do {
      if (lVar3 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1417df956;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_146386466;
        local_48 = &LAB_147bb408b;
        local_50 = &LAB_1463eaa15;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10000001;
        local_70 = 8;
        local_78 = 0x2e0;
        FUN_14081cfa3(L"/Script/Engine",L"MaterialInstance",&DAT_14caec308,&DAT_147bb408a);
        lVar3 = DAT_14caec308;
      }
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30),
         *(longlong *)(lVar1 + (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) {
        uVar2 = 0;
        break;
      }
      param_1 = *(longlong *)(param_1 + 0x110);
      uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),param_1 != 0);
    } while (param_1 != param_2 && param_1 != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 143570e81 FUN_143570e81 body=1707 status=ok
// SIG undefined FUN_143570e81(void)

void FUN_143570e81(longlong *param_1,uint *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  code *pcVar6;
  ulonglong uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong lVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong *plVar16;
  uint *puVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined1 auStack_c8 [32];
  code **local_a8;
  undefined8 local_a0;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined8 uStack_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  code *local_68;
  uint local_60;
  uint local_5c;
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar5 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1435710cb;
    bVar5 = DAT_14c8442b8 & 1;
  }
  if (bVar5 != 0) goto LAB_1435710cb;
  LOCK();
  *(uint *)(param_1 + 0x5b) = *(uint *)(param_1 + 0x5b) | 2;
  UNLOCK();
  local_78 = 0;
  uStack_70 = 0;
  lVar11 = (**(code **)(*param_1 + 0x2c0))(param_1);
  if (((lVar11 != 0) && (*(byte *)(lVar11 + 0x128) - 6 < 0xfffffffe)) &&
     (-1 < *(char *)(lVar11 + 0x1c0))) {
    if (DAT_14cad8310 == (longlong *)0x0) {
      FUN_1446f470e(&local_68,L"Renderer",1);
      pcVar6 = local_68;
      uVar14 = FUN_144a52528();
      DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar14,pcVar6);
    }
    (**(code **)(*DAT_14cad8310 + 0x1f8))();
  }
  lVar11 = param_1[0x49];
  uStack_88 = *(undefined8 *)(param_2 + 4);
  lStack_80 = *(longlong *)(param_2 + 6);
  uStack_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar4 + 0xc60);
  local_a0 = lVar11;
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_143570f91;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_143570f96;
      goto LAB_143570ffb;
    }
  }
  else {
LAB_143570f91:
    if (iVar8 != 0x10) {
LAB_143570ffb:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar4 + 0xc60), iVar8 == 2))
        goto LAB_143570f96;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143570f96;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar2;
        if (puVar13 != (uint *)0x0) goto LAB_143571192;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_143574684);
          }
          lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar11 + 0x310);
          *(undefined8 *)(lVar11 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar2 = puVar12;
          FUN_140217a48(puVar2);
          puVar13 = (uint *)*puVar2;
LAB_143571192:
          puVar19 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar19 + 0x1a);
          uVar15 = puVar13[0x12];
          if (puVar17 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar3 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar2;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar2 = puVar13;
            puVar19 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar17 = (uint *)(puVar19 + 0x1a);
            uVar15 = 0;
            if (puVar17 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_143571212;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_143571212:
        *(uint **)(puVar13 + 0x10) = puVar17;
        puVar13[0x12] = uVar15;
        iVar8 = 0;
        FUN_1447247dc(puVar19,0);
        *puVar19 = &PTR_FUN_14a9d48a8;
        *(undefined4 *)(puVar19 + 0x15) = (undefined4)local_a0;
        *(undefined4 *)((longlong)puVar19 + 0xac) = local_a0._4_4_;
        *(uint *)(puVar19 + 0x16) = uStack_98;
        *(uint *)((longlong)puVar19 + 0xb4) = uStack_94;
        *(uint *)(puVar19 + 0x17) = uStack_90;
        *(uint *)((longlong)puVar19 + 0xbc) = uStack_8c;
        *(undefined4 *)(puVar19 + 0x18) = (undefined4)uStack_88;
        *(undefined4 *)((longlong)puVar19 + 0xc4) = uStack_88._4_4_;
        puVar19[0x19] = lStack_80;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar8 = 0;
          }
          else {
            uVar18 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar18 = 5;
        }
        if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
        }
        puVar19[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar19[9] = puVar19;
        puVar19[10] = puVar19;
        lVar11 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar11 == 0) {
          uVar7 = 1;
          if ((char)uVar18 != '\x06') {
            uVar7 = uVar18;
          }
          uVar18 = uVar7;
          uVar14 = 0;
        }
        else {
          if ((char)uVar18 == '\x06') {
            uVar18 = *(ulonglong *)(lVar11 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar11 + 0x30);
        }
        puVar19[0xf] = uVar14;
        puVar19[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar19 + 0x1c) = iVar8;
        if (puVar19 == (undefined8 *)0x0) {
          local_68 = (code *)CONCAT71(local_68._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
          local_68 = (code *)CONCAT71(local_68._1_7_,1);
          FUN_1447439e4(puVar19);
          LOCK();
          piVar1 = (int *)(puVar19 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar19)(puVar19,1);
          }
        }
      }
      else {
        local_68 = (code *)0x0;
        local_58 = (longlong *)FUN_14001cc68(0x30,8);
        *local_58 = (longlong)&PTR_LAB_14a9d4860;
        local_58[5] = lStack_80;
        *(uint *)(local_58 + 3) = uStack_90;
        *(uint *)((longlong)local_58 + 0x1c) = uStack_8c;
        *(undefined4 *)(local_58 + 4) = (undefined4)uStack_88;
        *(undefined4 *)((longlong)local_58 + 0x24) = uStack_88._4_4_;
        *(undefined4 *)(local_58 + 1) = (undefined4)local_a0;
        *(undefined4 *)((longlong)local_58 + 0xc) = local_a0._4_4_;
        *(uint *)(local_58 + 2) = uStack_98;
        *(uint *)((longlong)local_58 + 0x14) = uStack_94;
        if (local_58 + 1 != (longlong *)0x0) {
          local_68 = FUN_1404dca72;
        }
        local_a8 = &local_68;
        FUN_14005a792(&DAT_14ca9a440,L"SetMIParameterValue",&DAT_14caec35c);
        if (local_68 != (code *)0x0) {
          plVar16 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar16 = local_48;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      goto LAB_1435710cb;
    }
  }
LAB_143570f96:
  local_68 = (code *)(ulonglong)uStack_98;
  local_60 = uStack_94;
  local_5c = uStack_8c;
  local_58 = (longlong *)CONCAT71(local_58._1_7_,(undefined1)uStack_90);
  FUN_1404dcaec(lVar11,&local_68,&uStack_88);
  FUN_14006fee2(lVar11,&DAT_14ca85100,0);
LAB_1435710cb:
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14357152e FUN_14357152e body=2121 status=ok
// SIG undefined FUN_14357152e(void)

void FUN_14357152e(longlong *param_1,longlong *param_2,double *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  byte bVar10;
  code *pcVar11;
  ulonglong uVar12;
  int iVar13;
  DWORD DVar14;
  DWORD DVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined8 uVar18;
  uint uVar19;
  longlong *plVar20;
  uint *puVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 auStack_f8 [32];
  code **local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  code *local_78;
  uint local_70;
  uint local_6c;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar20 = param_1 + 0x34;
  iVar13 = (int)param_1[0x35];
  lVar25 = (longlong)iVar13;
  if (0 < lVar25) {
    puVar17 = (uint *)*plVar20;
    lVar24 = lVar25;
    do {
      if (((*param_2 == *(longlong *)puVar17) && (puVar17[3] == *(uint *)((longlong)param_2 + 0xc)))
         && ((char)puVar17[2] == (char)param_2[1])) {
        if (puVar17 != (uint *)0x0) {
          if (((((*(double *)(puVar17 + 4) != *param_3) ||
                (NAN(*(double *)(puVar17 + 4)) || NAN(*param_3))) ||
               ((*(double *)(puVar17 + 6) != param_3[1] ||
                ((NAN(*(double *)(puVar17 + 6)) || NAN(param_3[1]) ||
                 (*(double *)(puVar17 + 8) != param_3[2])))))) ||
              (NAN(*(double *)(puVar17 + 8)) || NAN(param_3[2]))) ||
             ((*(double *)(puVar17 + 10) != param_3[3] ||
              (NAN(*(double *)(puVar17 + 10)) || NAN(param_3[3]))))) goto LAB_1435715ff;
          goto LAB_1435718fb;
        }
        break;
      }
      puVar17 = puVar17 + 0x10;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  *(uint *)(param_1 + 0x35) = iVar13 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1ac) < iVar13 + 1U) {
    FUN_147bbb00e(plVar20,iVar13);
  }
  lVar24 = *plVar20;
  lVar25 = lVar25 * 0x40;
  puVar17 = (uint *)(lVar24 + lVar25);
  *(undefined8 *)(lVar24 + lVar25) = 0;
  *(undefined1 *)(lVar24 + 8 + lVar25) = 2;
  *(undefined4 *)(lVar24 + 0xc + lVar25) = 0xffffffff;
  puVar2 = (undefined8 *)(lVar24 + 0x10 + lVar25);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar24 + 0x20 + lVar25) = 0;
  *(undefined8 *)(lVar24 + 0x28 + lVar25) = 0x3ff0000000000000;
  puVar2 = (undefined8 *)(lVar24 + 0x30 + lVar25);
  *puVar2 = 0;
  puVar2[1] = 0;
  lVar9 = param_2[1];
  *(longlong *)(lVar24 + lVar25) = *param_2;
  ((longlong *)(lVar24 + lVar25))[1] = lVar9;
LAB_1435715ff:
  uVar19 = *(uint *)param_3;
  uVar3 = *(uint *)((longlong)param_3 + 4);
  uVar4 = *(uint *)(param_3 + 1);
  uVar5 = *(uint *)((longlong)param_3 + 0xc);
  uVar6 = *(uint *)((longlong)param_3 + 0x14);
  uVar7 = *(uint *)(param_3 + 3);
  uVar8 = *(uint *)((longlong)param_3 + 0x1c);
  puVar17[8] = *(uint *)(param_3 + 2);
  puVar17[9] = uVar6;
  puVar17[10] = uVar7;
  puVar17[0xb] = uVar8;
  puVar17[4] = uVar19;
  puVar17[5] = uVar3;
  puVar17[6] = uVar4;
  puVar17[7] = uVar5;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar10 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1435718fb;
    bVar10 = DAT_14c8442b8 & 1;
  }
  if (bVar10 != 0) goto LAB_1435718fb;
  LOCK();
  *(uint *)(param_1 + 0x5b) = *(uint *)(param_1 + 0x5b) | 2;
  UNLOCK();
  local_c8 = 0;
  uStack_c0 = 0;
  lVar25 = (**(code **)(*param_1 + 0x2c0))(param_1);
  if (((lVar25 != 0) && (*(byte *)(lVar25 + 0x128) - 6 < 0xfffffffe)) &&
     (-1 < *(char *)(lVar25 + 0x1c0))) {
    if (DAT_14cad8310 == (longlong *)0x0) {
      FUN_1446f470e(&local_78,L"Renderer",1);
      pcVar11 = local_78;
      uVar18 = FUN_144a52528();
      DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar18,pcVar11);
    }
    (**(code **)(*DAT_14cad8310 + 0x1f8))();
  }
  lVar25 = param_1[0x49];
  local_98 = *(longlong *)(puVar17 + 4);
  uStack_90 = *(longlong *)(puVar17 + 6);
  local_88 = puVar17[8];
  uStack_84 = puVar17[9];
  uStack_80 = puVar17[10];
  uStack_7c = puVar17[0xb];
  uStack_b0 = *puVar17;
  uStack_ac = puVar17[1];
  uStack_a8 = puVar17[2];
  uStack_a4 = puVar17[3];
  lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar13 = *(int *)(lVar24 + 0xc60);
  local_b8 = lVar25;
  if (DAT_14c86a9fc == 0) {
    if (iVar13 != 2) {
      if (iVar13 != 1) goto LAB_143571716;
      DVar14 = FUN_140ad26c0();
      DVar15 = GetCurrentThreadId();
      if (DVar14 == DVar15) goto LAB_14357171f;
      goto LAB_143571810;
    }
  }
  else {
LAB_143571716:
    if (iVar13 != 0x10) {
LAB_143571810:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar13 = *(int *)(lVar24 + 0xc60), iVar13 == 2))
        goto LAB_14357171f;
        if (iVar13 == 1) {
          DVar14 = FUN_140ad26c0();
          DVar15 = GetCurrentThreadId();
          if (DVar14 == DVar15) goto LAB_14357171f;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar17 = (uint *)*puVar2;
        if (puVar17 != (uint *)0x0) goto LAB_1435719c6;
        while( true ) {
          uVar19 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar19 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar19 | 1;
            __tlregdtor(&LAB_143574684);
          }
          lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar16 = *(undefined4 **)(lVar25 + 0x310);
          *(undefined8 *)(lVar25 + 0x310) = 0;
          if (puVar16 == (undefined4 *)0x0) {
            puVar16 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar16 = 0xffffffff;
          *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
          puVar16[0x12] = 0;
          *puVar2 = puVar16;
          FUN_140217a48(puVar2);
          puVar17 = (uint *)*puVar2;
LAB_1435719c6:
          puVar23 = (undefined8 *)(*(longlong *)(puVar17 + 0x10) + 0xfU & 0xfffffffffffffff0);
          puVar21 = (uint *)(puVar23 + 0x1e);
          uVar19 = puVar17[0x12];
          if (puVar21 <= puVar17 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
            LOCK();
            uVar3 = *puVar17;
            *puVar17 = *puVar17 + uVar19 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar19) != 0xffffffff) break;
            puVar17 = (uint *)*puVar2;
            *puVar17 = 0xffffffff;
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *puVar2 = puVar17;
            puVar23 = (undefined8 *)((longlong)puVar17 + 0x67U & 0xfffffffffffffff0);
            puVar21 = (uint *)(puVar23 + 0x1e);
            uVar19 = 0;
            if (puVar21 <= puVar17 + 0x4000) {
              uVar19 = 1;
              goto LAB_143571a46;
            }
          }
        }
        uVar19 = uVar19 + 1;
LAB_143571a46:
        *(uint **)(puVar17 + 0x10) = puVar21;
        puVar17[0x12] = uVar19;
        iVar13 = 0;
        FUN_1447247dc(puVar23,0);
        *puVar23 = &PTR_FUN_14a9d48e0;
        *(undefined4 *)(puVar23 + 0x16) = (undefined4)local_b8;
        *(undefined4 *)((longlong)puVar23 + 0xb4) = local_b8._4_4_;
        *(uint *)(puVar23 + 0x17) = uStack_b0;
        *(uint *)((longlong)puVar23 + 0xbc) = uStack_ac;
        *(uint *)(puVar23 + 0x18) = uStack_a8;
        *(uint *)((longlong)puVar23 + 0xc4) = uStack_a4;
        *(undefined4 *)(puVar23 + 0x19) = uStack_a0;
        *(undefined4 *)((longlong)puVar23 + 0xcc) = uStack_9c;
        *(undefined4 *)(puVar23 + 0x1a) = (undefined4)local_98;
        *(undefined4 *)((longlong)puVar23 + 0xd4) = local_98._4_4_;
        *(undefined4 *)(puVar23 + 0x1b) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)puVar23 + 0xdc) = uStack_90._4_4_;
        *(uint *)(puVar23 + 0x1c) = local_88;
        *(uint *)((longlong)puVar23 + 0xe4) = uStack_84;
        *(uint *)(puVar23 + 0x1d) = uStack_80;
        *(uint *)((longlong)puVar23 + 0xec) = uStack_7c;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar19 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar19 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar19];
            iVar13 = 0;
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar13 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
        }
        if (*(code **)(puVar23[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar23[0xe] + 0x18))(puVar23 + 0xe,puVar23 + 9);
        }
        puVar23[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar23[9] = puVar23;
        puVar23[10] = puVar23;
        lVar25 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar25 == 0) {
          uVar12 = 1;
          if ((char)uVar22 != '\x06') {
            uVar12 = uVar22;
          }
          uVar22 = uVar12;
          uVar18 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar25 + 0x38) >> 0x3b;
          }
          uVar18 = *(undefined8 *)(lVar25 + 0x30);
        }
        puVar23[0xf] = uVar18;
        puVar23[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar23 + 0x1c) = iVar13;
        if (puVar23 == (undefined8 *)0x0) {
          local_78 = (code *)CONCAT71(local_78._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
          UNLOCK();
          local_78 = (code *)CONCAT71(local_78._1_7_,1);
          FUN_1447439e4(puVar23);
          LOCK();
          piVar1 = (int *)(puVar23 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar23)(puVar23,1);
          }
        }
      }
      else {
        local_78 = (code *)0x0;
        local_68 = (longlong *)FUN_14001cc68(0x50,0x10);
        *local_68 = (longlong)&PTR_LAB_14a9d48c0;
        *(uint *)(local_68 + 8) = local_88;
        *(uint *)((longlong)local_68 + 0x44) = uStack_84;
        *(uint *)(local_68 + 9) = uStack_80;
        *(uint *)((longlong)local_68 + 0x4c) = uStack_7c;
        *(undefined4 *)(local_68 + 6) = (undefined4)local_98;
        *(undefined4 *)((longlong)local_68 + 0x34) = local_98._4_4_;
        *(undefined4 *)(local_68 + 7) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)local_68 + 0x3c) = uStack_90._4_4_;
        *(uint *)(local_68 + 4) = uStack_a8;
        *(uint *)((longlong)local_68 + 0x24) = uStack_a4;
        *(undefined4 *)(local_68 + 5) = uStack_a0;
        *(undefined4 *)((longlong)local_68 + 0x2c) = uStack_9c;
        *(undefined4 *)(local_68 + 2) = (undefined4)local_b8;
        *(undefined4 *)((longlong)local_68 + 0x14) = local_b8._4_4_;
        *(uint *)(local_68 + 3) = uStack_b0;
        *(uint *)((longlong)local_68 + 0x1c) = uStack_ac;
        if (local_68 + 2 != (longlong *)0x0) {
          local_78 = FUN_147bbb250;
        }
        local_d8 = &local_78;
        FUN_14005a792(&DAT_14ca9a440,L"SetMIParameterValue",&DAT_14caec360);
        if (local_78 != (code *)0x0) {
          plVar20 = local_68;
          if (local_68 == (longlong *)0x0) {
            plVar20 = local_58;
          }
          (**(code **)(*plVar20 + 0x10))();
        }
      }
      goto LAB_1435718fb;
    }
  }
LAB_14357171f:
  local_78 = (code *)(ulonglong)uStack_b0;
  local_70 = uStack_ac;
  local_6c = uStack_a4;
  local_68 = (longlong *)CONCAT71(local_68._1_7_,(undefined1)uStack_a8);
  FUN_143575814(lVar25,&local_78,&local_98);
  FUN_14006fee2(lVar25,&DAT_14ca85100,0);
LAB_1435718fb:
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143571d78 FUN_143571d78 body=1999 status=ok
// SIG undefined FUN_143571d78(void)

void FUN_143571d78(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  code *pcVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  longlong *plVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_d8 [32];
  code **local_b8;
  undefined8 local_a8;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  code *local_78;
  uint local_70;
  uint local_6c;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 != 0) {
    FUN_1400337aa(param_3);
  }
  plVar15 = param_1 + 0x3a;
  lVar20 = (longlong)(int)param_1[0x3b];
  if (0 < lVar20) {
    puVar13 = (uint *)*plVar15;
    lVar19 = lVar20;
    do {
      if (((*param_2 == *(longlong *)puVar13) && (puVar13[3] == *(uint *)((longlong)param_2 + 0xc)))
         && ((char)puVar13[2] == (char)param_2[1])) {
        if (puVar13 != (uint *)0x0) {
          if ((param_3 == 0) || (*(longlong *)(puVar13 + 4) == param_3)) goto LAB_143571e65;
          goto LAB_143571e45;
        }
        break;
      }
      puVar13 = puVar13 + 10;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  uVar8 = (int)param_1[0x3b] + 1;
  *(uint *)(param_1 + 0x3b) = uVar8;
  if (*(uint *)((longlong)param_1 + 0x1dc) < uVar8) {
    FUN_147bbb128(plVar15);
  }
  lVar19 = *plVar15;
  *(undefined8 *)(lVar19 + lVar20 * 0x28) = 0;
  *(undefined1 *)(lVar19 + 8 + lVar20 * 0x28) = 2;
  *(undefined4 *)(lVar19 + 0xc + lVar20 * 0x28) = 0xffffffff;
  puVar2 = (undefined8 *)(lVar19 + 0x10 + lVar20 * 0x28);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar19 + 0x20 + lVar20 * 0x28) = 0;
  lVar4 = param_2[1];
  plVar15 = (longlong *)(lVar19 + lVar20 * 0x28);
  *plVar15 = *param_2;
  plVar15[1] = lVar4;
  puVar2 = (undefined8 *)(lVar19 + 0x18 + lVar20 * 0x28);
  *puVar2 = 0;
  puVar2[1] = 0;
  if (param_3 == 0) goto LAB_143571e65;
  puVar13 = (uint *)(lVar19 + lVar20 * 0x28);
LAB_143571e45:
  lVar20 = FUN_141108188();
  if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar20 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar20 + 0x38) * 8)
      != lVar20 + 0x30)) goto LAB_143571e65;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_3);
  }
  *(longlong *)(puVar13 + 4) = param_3;
  FUN_1406555d4(param_3,param_1,1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar5 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_143571e65;
    bVar5 = DAT_14c8442b8 & 1;
  }
  if (bVar5 != 0) goto LAB_143571e65;
  LOCK();
  *(uint *)(param_1 + 0x5b) = *(uint *)(param_1 + 0x5b) | 2;
  UNLOCK();
  local_88 = 0;
  uStack_80 = 0;
  lVar20 = (**(code **)(*param_1 + 0x2c0))(param_1);
  if (((lVar20 != 0) && (*(byte *)(lVar20 + 0x128) - 6 < 0xfffffffe)) &&
     (-1 < *(char *)(lVar20 + 0x1c0))) {
    if (DAT_14cad8310 == (longlong *)0x0) {
      FUN_1446f470e(&local_78,L"Renderer",1);
      pcVar6 = local_78;
      uVar14 = FUN_144a52528();
      DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar14,pcVar6);
    }
    (**(code **)(*DAT_14cad8310 + 0x1f8))();
  }
  lVar20 = param_1[0x49];
  uStack_90 = *(longlong *)(puVar13 + 4);
  uStack_a0 = *puVar13;
  uStack_9c = puVar13[1];
  uStack_98 = puVar13[2];
  uStack_94 = puVar13[3];
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = *(int *)(lVar19 + 0xc60);
  local_a8 = lVar20;
  if (DAT_14c86a9fc == 0) {
    if (iVar9 != 2) {
      if (iVar9 != 1) goto LAB_143571fb6;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_143571fbf;
      goto LAB_143572045;
    }
  }
  else {
LAB_143571fb6:
    if (iVar9 != 0x10) {
LAB_143572045:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar9 = *(int *)(lVar19 + 0xc60), iVar9 == 2))
        goto LAB_143571fbf;
        if (iVar9 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          if (DVar10 == DVar11) goto LAB_143571fbf;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar2;
        if (puVar13 != (uint *)0x0) goto LAB_1435721b9;
        while( true ) {
          uVar8 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar8 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar8 | 1;
            __tlregdtor(&LAB_143574684);
          }
          lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar20 + 0x310);
          *(undefined8 *)(lVar20 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar2 = puVar12;
          FUN_140217a48(puVar2);
          puVar13 = (uint *)*puVar2;
LAB_1435721b9:
          puVar18 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x19);
          uVar8 = puVar13[0x12];
          if (puVar16 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar3 = *puVar13;
            *puVar13 = *puVar13 + uVar8 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar8) != 0xffffffff) break;
            puVar13 = (uint *)*puVar2;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar2 = puVar13;
            puVar18 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar18 + 0x19);
            uVar8 = 0;
            if (puVar16 <= puVar13 + 0x4000) {
              uVar8 = 1;
              goto LAB_143572239;
            }
          }
        }
        uVar8 = uVar8 + 1;
LAB_143572239:
        *(uint **)(puVar13 + 0x10) = puVar16;
        puVar13[0x12] = uVar8;
        iVar9 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14a9d4970;
        *(undefined4 *)(puVar18 + 0x15) = (undefined4)local_a8;
        *(undefined4 *)((longlong)puVar18 + 0xac) = local_a8._4_4_;
        *(uint *)(puVar18 + 0x16) = uStack_a0;
        *(uint *)((longlong)puVar18 + 0xb4) = uStack_9c;
        *(uint *)(puVar18 + 0x17) = uStack_98;
        *(uint *)((longlong)puVar18 + 0xbc) = uStack_94;
        *(undefined4 *)(puVar18 + 0x18) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)puVar18 + 0xc4) = uStack_90._4_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar8 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
            iVar9 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
        }
        if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
        }
        puVar18[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar18[9] = puVar18;
        puVar18[10] = puVar18;
        lVar20 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar20 == 0) {
          uVar7 = 1;
          if ((char)uVar17 != '\x06') {
            uVar7 = uVar17;
          }
          uVar17 = uVar7;
          uVar14 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar20 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar20 + 0x30);
        }
        puVar18[0xf] = uVar14;
        puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar9;
        if (puVar18 == (undefined8 *)0x0) {
          local_78 = (code *)CONCAT71(local_78._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_78 = (code *)CONCAT71(local_78._1_7_,1);
          FUN_1447439e4(puVar18);
          LOCK();
          piVar1 = (int *)(puVar18 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar18)(puVar18,1);
          }
        }
      }
      else {
        local_78 = (code *)0x0;
        local_68 = (longlong *)FUN_14001cc68(0x28,8);
        *local_68 = (longlong)&PTR_LAB_14a9d4950;
        *(uint *)(local_68 + 3) = uStack_98;
        *(uint *)((longlong)local_68 + 0x1c) = uStack_94;
        *(undefined4 *)(local_68 + 4) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)local_68 + 0x24) = uStack_90._4_4_;
        *(undefined4 *)(local_68 + 1) = (undefined4)local_a8;
        *(undefined4 *)((longlong)local_68 + 0xc) = local_a8._4_4_;
        *(uint *)(local_68 + 2) = uStack_a0;
        *(uint *)((longlong)local_68 + 0x14) = uStack_9c;
        if (local_68 + 1 != (longlong *)0x0) {
          local_78 = FUN_147bbb458;
        }
        local_b8 = &local_78;
        FUN_14005a792(&DAT_14ca9a440,L"SetMIParameterValue",&DAT_14caec36c);
        if (local_78 != (code *)0x0) {
          plVar15 = local_68;
          if (local_68 == (longlong *)0x0) {
            plVar15 = local_58;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
      }
      goto LAB_143571e65;
    }
  }
LAB_143571fbf:
  local_78 = (code *)(ulonglong)uStack_a0;
  local_70 = uStack_9c;
  local_6c = uStack_94;
  local_68 = (longlong *)CONCAT71(local_68._1_7_,(undefined1)uStack_98);
  FUN_143575e90(lVar20,&local_78,&uStack_90);
  FUN_14006fee2(lVar20,&DAT_14ca85100,0);
LAB_143571e65:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143572548 FUN_143572548 body=1985 status=ok
// SIG undefined FUN_143572548(void)

void FUN_143572548(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  code *pcVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  longlong *plVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_d8 [32];
  code **local_b8;
  undefined8 local_a8;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  code *local_78;
  uint local_70;
  uint local_6c;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 != 0) {
    FUN_1400337aa(param_3);
  }
  plVar15 = param_1 + 0x3c;
  lVar20 = (longlong)(int)param_1[0x3d];
  if (0 < lVar20) {
    puVar13 = (uint *)*plVar15;
    lVar19 = lVar20;
    do {
      if (((*param_2 == *(longlong *)puVar13) && (puVar13[3] == *(uint *)((longlong)param_2 + 0xc)))
         && ((char)puVar13[2] == (char)param_2[1])) {
        if (puVar13 != (uint *)0x0) {
          if ((param_3 == 0) || (*(longlong *)(puVar13 + 4) == param_3)) goto LAB_143572635;
          goto LAB_143572615;
        }
        break;
      }
      puVar13 = puVar13 + 10;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  uVar8 = (int)param_1[0x3d] + 1;
  *(uint *)(param_1 + 0x3d) = uVar8;
  if (*(uint *)((longlong)param_1 + 0x1ec) < uVar8) {
    FUN_147bbb1bc(plVar15);
  }
  lVar19 = *plVar15;
  *(undefined8 *)(lVar19 + lVar20 * 0x28) = 0;
  *(undefined1 *)(lVar19 + 8 + lVar20 * 0x28) = 2;
  *(undefined4 *)(lVar19 + 0xc + lVar20 * 0x28) = 0xffffffff;
  puVar2 = (undefined8 *)(lVar19 + 0x10 + lVar20 * 0x28);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar19 + 0x20 + lVar20 * 0x28) = 0;
  lVar4 = param_2[1];
  plVar15 = (longlong *)(lVar19 + lVar20 * 0x28);
  *plVar15 = *param_2;
  plVar15[1] = lVar4;
  puVar2 = (undefined8 *)(lVar19 + 0x18 + lVar20 * 0x28);
  *puVar2 = 0;
  puVar2[1] = 0;
  if (param_3 == 0) goto LAB_143572635;
  puVar13 = (uint *)(lVar19 + lVar20 * 0x28);
LAB_143572615:
  lVar20 = FUN_1411c531a();
  if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar20 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar20 + 0x38) * 8)
      != lVar20 + 0x30)) goto LAB_143572635;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_3);
  }
  *(longlong *)(puVar13 + 4) = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar5 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_143572635;
    bVar5 = DAT_14c8442b8 & 1;
  }
  if (bVar5 != 0) goto LAB_143572635;
  LOCK();
  *(uint *)(param_1 + 0x5b) = *(uint *)(param_1 + 0x5b) | 2;
  UNLOCK();
  local_88 = 0;
  uStack_80 = 0;
  lVar20 = (**(code **)(*param_1 + 0x2c0))(param_1);
  if (((lVar20 != 0) && (*(byte *)(lVar20 + 0x128) - 6 < 0xfffffffe)) &&
     (-1 < *(char *)(lVar20 + 0x1c0))) {
    if (DAT_14cad8310 == (longlong *)0x0) {
      FUN_1446f470e(&local_78,L"Renderer",1);
      pcVar6 = local_78;
      uVar14 = FUN_144a52528();
      DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar14,pcVar6);
    }
    (**(code **)(*DAT_14cad8310 + 0x1f8))();
  }
  lVar20 = param_1[0x49];
  uStack_90 = *(longlong *)(puVar13 + 4);
  uStack_a0 = *puVar13;
  uStack_9c = puVar13[1];
  uStack_98 = puVar13[2];
  uStack_94 = puVar13[3];
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = *(int *)(lVar19 + 0xc60);
  local_a8 = lVar20;
  if (DAT_14c86a9fc == 0) {
    if (iVar9 != 2) {
      if (iVar9 != 1) goto LAB_143572778;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_143572781;
      goto LAB_143572807;
    }
  }
  else {
LAB_143572778:
    if (iVar9 != 0x10) {
LAB_143572807:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar9 = *(int *)(lVar19 + 0xc60), iVar9 == 2))
        goto LAB_143572781;
        if (iVar9 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          if (DVar10 == DVar11) goto LAB_143572781;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar2;
        if (puVar13 != (uint *)0x0) goto LAB_14357297b;
        while( true ) {
          uVar8 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar8 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar8 | 1;
            __tlregdtor(&LAB_143574684);
          }
          lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar20 + 0x310);
          *(undefined8 *)(lVar20 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar2 = puVar12;
          FUN_140217a48(puVar2);
          puVar13 = (uint *)*puVar2;
LAB_14357297b:
          puVar18 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x19);
          uVar8 = puVar13[0x12];
          if (puVar16 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar3 = *puVar13;
            *puVar13 = *puVar13 + uVar8 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar8) != 0xffffffff) break;
            puVar13 = (uint *)*puVar2;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar2 = puVar13;
            puVar18 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar18 + 0x19);
            uVar8 = 0;
            if (puVar16 <= puVar13 + 0x4000) {
              uVar8 = 1;
              goto LAB_1435729fb;
            }
          }
        }
        uVar8 = uVar8 + 1;
LAB_1435729fb:
        *(uint **)(puVar13 + 0x10) = puVar16;
        puVar13[0x12] = uVar8;
        iVar9 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14a9d49a0;
        *(undefined4 *)(puVar18 + 0x15) = (undefined4)local_a8;
        *(undefined4 *)((longlong)puVar18 + 0xac) = local_a8._4_4_;
        *(uint *)(puVar18 + 0x16) = uStack_a0;
        *(uint *)((longlong)puVar18 + 0xb4) = uStack_9c;
        *(uint *)(puVar18 + 0x17) = uStack_98;
        *(uint *)((longlong)puVar18 + 0xbc) = uStack_94;
        *(undefined4 *)(puVar18 + 0x18) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)puVar18 + 0xc4) = uStack_90._4_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar8 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
            iVar9 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
        }
        if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
        }
        puVar18[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar18[9] = puVar18;
        puVar18[10] = puVar18;
        lVar20 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar20 == 0) {
          uVar7 = 1;
          if ((char)uVar17 != '\x06') {
            uVar7 = uVar17;
          }
          uVar17 = uVar7;
          uVar14 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar20 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar20 + 0x30);
        }
        puVar18[0xf] = uVar14;
        puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar9;
        if (puVar18 == (undefined8 *)0x0) {
          local_78 = (code *)CONCAT71(local_78._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_78 = (code *)CONCAT71(local_78._1_7_,1);
          FUN_1447439e4(puVar18);
          LOCK();
          piVar1 = (int *)(puVar18 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar18)(puVar18,1);
          }
        }
      }
      else {
        local_78 = (code *)0x0;
        local_68 = (longlong *)FUN_14001cc68(0x28,8);
        *local_68 = (longlong)&PTR_LAB_14a9d4980;
        *(uint *)(local_68 + 3) = uStack_98;
        *(uint *)((longlong)local_68 + 0x1c) = uStack_94;
        *(undefined4 *)(local_68 + 4) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)local_68 + 0x24) = uStack_90._4_4_;
        *(undefined4 *)(local_68 + 1) = (undefined4)local_a8;
        *(undefined4 *)((longlong)local_68 + 0xc) = local_a8._4_4_;
        *(uint *)(local_68 + 2) = uStack_a0;
        *(uint *)((longlong)local_68 + 0x14) = uStack_9c;
        if (local_68 + 1 != (longlong *)0x0) {
          local_78 = FUN_147bbb576;
        }
        local_b8 = &local_78;
        FUN_14005a792(&DAT_14ca9a440,L"SetMIParameterValue",&DAT_14caec370);
        if (local_78 != (code *)0x0) {
          plVar15 = local_68;
          if (local_68 == (longlong *)0x0) {
            plVar15 = local_58;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
      }
      goto LAB_143572635;
    }
  }
LAB_143572781:
  local_78 = (code *)(ulonglong)uStack_a0;
  local_70 = uStack_9c;
  local_6c = uStack_94;
  local_68 = (longlong *)CONCAT71(local_68._1_7_,(undefined1)uStack_98);
  FUN_143576152(lVar20,&local_78,&uStack_90);
  FUN_14006fee2(lVar20,&DAT_14ca85100,0);
LAB_143572635:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143572d0a FUN_143572d0a body=1688 status=ok
// SIG undefined FUN_143572d0a(void)

void FUN_143572d0a(longlong *param_1,uint *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  code *pcVar6;
  ulonglong uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong lVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong *plVar16;
  uint *puVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined1 auStack_c8 [32];
  code **local_a8;
  undefined8 local_98;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  code *local_68;
  uint local_60;
  uint local_5c;
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar5 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_143572f4d;
    bVar5 = DAT_14c8442b8 & 1;
  }
  if (bVar5 != 0) goto LAB_143572f4d;
  LOCK();
  *(uint *)(param_1 + 0x5b) = *(uint *)(param_1 + 0x5b) | 2;
  UNLOCK();
  local_78 = 0;
  uStack_70 = 0;
  lVar11 = (**(code **)(*param_1 + 0x2c0))(param_1);
  if (((lVar11 != 0) && (*(byte *)(lVar11 + 0x128) - 6 < 0xfffffffe)) &&
     (-1 < *(char *)(lVar11 + 0x1c0))) {
    if (DAT_14cad8310 == (longlong *)0x0) {
      FUN_1446f470e(&local_68,L"Renderer",1);
      pcVar6 = local_68;
      uVar14 = FUN_144a52528();
      DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar14,pcVar6);
    }
    (**(code **)(*DAT_14cad8310 + 0x1f8))();
  }
  lVar11 = param_1[0x49];
  uStack_80 = param_2[4];
  uStack_90 = *param_2;
  uStack_8c = param_2[1];
  uStack_88 = param_2[2];
  uStack_84 = param_2[3];
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar4 + 0xc60);
  local_98 = lVar11;
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_143572e1c;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_143572e21;
      goto LAB_143572e86;
    }
  }
  else {
LAB_143572e1c:
    if (iVar8 != 0x10) {
LAB_143572e86:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar4 + 0xc60), iVar8 == 2))
        goto LAB_143572e21;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143572e21;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar2;
        if (puVar13 != (uint *)0x0) goto LAB_143573014;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_143574684);
          }
          lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar11 + 0x310);
          *(undefined8 *)(lVar11 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar2 = puVar12;
          FUN_140217a48(puVar2);
          puVar13 = (uint *)*puVar2;
LAB_143573014:
          puVar19 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar19 + 0x19);
          uVar15 = puVar13[0x12];
          if (puVar17 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar3 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar2;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar2 = puVar13;
            puVar19 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar17 = (uint *)(puVar19 + 0x19);
            uVar15 = 0;
            if (puVar17 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_143573094;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_143573094:
        *(uint **)(puVar13 + 0x10) = puVar17;
        puVar13[0x12] = uVar15;
        iVar8 = 0;
        FUN_1447247dc(puVar19,0);
        *puVar19 = &PTR_FUN_14a9d4910;
        *(undefined4 *)(puVar19 + 0x15) = (undefined4)local_98;
        *(undefined4 *)((longlong)puVar19 + 0xac) = local_98._4_4_;
        *(uint *)(puVar19 + 0x16) = uStack_90;
        *(uint *)((longlong)puVar19 + 0xb4) = uStack_8c;
        *(uint *)(puVar19 + 0x17) = uStack_88;
        *(uint *)((longlong)puVar19 + 0xbc) = uStack_84;
        *(uint *)(puVar19 + 0x18) = uStack_80;
        *(undefined4 *)((longlong)puVar19 + 0xc4) = uStack_7c;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar8 = 0;
          }
          else {
            uVar18 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar18 = 5;
        }
        if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
        }
        puVar19[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar19[9] = puVar19;
        puVar19[10] = puVar19;
        lVar11 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar11 == 0) {
          uVar7 = 1;
          if ((char)uVar18 != '\x06') {
            uVar7 = uVar18;
          }
          uVar18 = uVar7;
          uVar14 = 0;
        }
        else {
          if ((char)uVar18 == '\x06') {
            uVar18 = *(ulonglong *)(lVar11 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar11 + 0x30);
        }
        puVar19[0xf] = uVar14;
        puVar19[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar19 + 0x1c) = iVar8;
        if (puVar19 == (undefined8 *)0x0) {
          local_68 = (code *)CONCAT71(local_68._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
          local_68 = (code *)CONCAT71(local_68._1_7_,1);
          FUN_1447439e4(puVar19);
          LOCK();
          piVar1 = (int *)(puVar19 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar19)(puVar19,1);
          }
        }
      }
      else {
        local_68 = (code *)0x0;
        local_58 = (longlong *)FUN_14001cc68(0x28,8);
        *local_58 = (longlong)&PTR_LAB_14a9d48f0;
        *(uint *)(local_58 + 3) = uStack_88;
        *(uint *)((longlong)local_58 + 0x1c) = uStack_84;
        *(uint *)(local_58 + 4) = uStack_80;
        *(undefined4 *)((longlong)local_58 + 0x24) = uStack_7c;
        *(undefined4 *)(local_58 + 1) = (undefined4)local_98;
        *(undefined4 *)((longlong)local_58 + 0xc) = local_98._4_4_;
        *(uint *)(local_58 + 2) = uStack_90;
        *(uint *)((longlong)local_58 + 0x14) = uStack_8c;
        if (local_58 + 1 != (longlong *)0x0) {
          local_68 = FUN_144768192;
        }
        local_a8 = &local_68;
        FUN_14005a792(&DAT_14ca9a440,L"SetMIParameterValue",&DAT_14caec364);
        if (local_68 != (code *)0x0) {
          plVar16 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar16 = local_48;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      goto LAB_143572f4d;
    }
  }
LAB_143572e21:
  local_68 = (code *)(ulonglong)uStack_90;
  local_60 = uStack_8c;
  local_5c = uStack_84;
  local_58 = (longlong *)CONCAT71(local_58._1_7_,(undefined1)uStack_88);
  FUN_14006ffac(lVar11,&local_68,&uStack_80);
  FUN_14006fee2(lVar11,&DAT_14ca85100,0);
LAB_143572f4d:
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143573a3a FUN_143573a3a body=101 status=ok
// SIG undefined FUN_143573a3a(void)

void FUN_143573a3a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((*(longlong *)(param_1 + 0x110) != 0) && ((*(byte *)(param_1 + 0x150) & 1) != 0)) &&
     (iVar1 = *(int *)(param_1 + 0x2d0), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x2c8);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + lVar4) + 0x10);
      if (lVar3 != 0) {
        FUN_147bbf61e(lVar3,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 143573aa0 FUN_143573aa0 body=2677 status=ok
// SIG undefined FUN_143573aa0(void)

void FUN_143573aa0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined8 uVar17;
  code *pcVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong *plVar23;
  int iVar24;
  longlong lVar25;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  wchar_t *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  code **local_1c0;
  undefined1 *local_1b8;
  code *local_1b0;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined4 local_15c;
  longlong local_158;
  int local_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined1 local_138 [40];
  undefined4 local_110;
  undefined1 local_10c;
  code *local_108;
  int local_100;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (param_2 != param_1 && param_2 != 0) {
    FUN_1406a5d86(param_1,3);
    local_148 = 0;
    uStack_140 = 0;
    do {
      uVar15 = uStack_140;
      lVar25 = (longlong)(int)uStack_140;
      uVar16 = (int)uStack_140 + 1;
      uStack_140 = CONCAT44(uStack_140._4_4_,uVar16);
      if (uStack_140._4_4_ < uVar16) {
        FUN_144769b64(&local_148,uVar15 & 0xffffffff);
      }
      *(longlong *)(local_148 + lVar25 * 8) = param_2;
      if (DAT_14caec308 == 0) {
        local_108 = FUN_1417df956;
        local_1b0 = FUN_14081d0ea;
        local_1b8 = &LAB_146386466;
        local_1c0 = &local_108;
        local_1c8 = &LAB_147bb408b;
        local_1d0 = &LAB_1463eaa15;
        local_1d8 = L"Engine";
        local_1e0 = 0;
        local_1e8 = 0x10000001;
        local_1f0 = 8;
        local_1f8 = 0x2e0;
        FUN_14081cfa3(L"/Script/Engine",L"MaterialInstance",&DAT_14caec308,&DAT_147bb408a);
      }
    } while (((*(int *)(DAT_14caec308 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14caec308 + 0x38) * 8) == DAT_14caec308 + 0x30)) &&
            (param_2 = *(longlong *)(param_2 + 0x110), param_2 != 0));
    lVar25 = (longlong)(int)uStack_140;
    if (0 < lVar25) {
      local_180 = (longlong *)(param_1 + 0x180);
      local_188 = (longlong *)(param_1 + 400);
      local_190 = (longlong *)(param_1 + 0x1a0);
      plVar1 = (longlong *)(param_1 + 0x1b0);
      local_198 = (longlong *)(param_1 + 0x1d0);
      local_1a0 = (longlong *)(param_1 + 0x1e0);
      do {
        plVar6 = *(longlong **)(local_148 + -8 + lVar25 * 8);
        local_170 = lVar25;
        if (plVar6 != (longlong *)0x0) {
          if (DAT_14caec308 == 0) {
            local_108 = FUN_1417df956;
            local_1b0 = FUN_14081d0ea;
            local_1b8 = &LAB_146386466;
            local_1c0 = &local_108;
            local_1c8 = &LAB_147bb408b;
            local_1d0 = &LAB_1463eaa15;
            local_1d8 = L"Engine";
            local_1e0 = 0;
            local_1e8 = 0x10000001;
            local_1f0 = 8;
            local_1f8 = 0x2e0;
            FUN_14081cfa3(L"/Script/Engine",L"MaterialInstance",&DAT_14caec308,&DAT_147bb408a);
          }
          plVar23 = local_180;
          if ((*(int *)(plVar6[2] + 0x38) < *(int *)(DAT_14caec308 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14caec308 + 0x38) * 8) !=
              DAT_14caec308 + 0x30)) {
            lVar25 = FUN_140a1dfd8();
            if ((*(int *)(lVar25 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar25 + 0x38) * 8) ==
                lVar25 + 0x30)) {
              lVar25 = (**(code **)(*plVar6 + 0x180))(plVar6);
              if (lVar25 == 0) {
LAB_143573d2e:
                lVar25 = (**(code **)(*plVar6 + 0x350))(plVar6,DAT_14c760db4,4);
                if (lVar25 == 0) goto LAB_143574402;
              }
              else {
                lVar25 = (**(code **)(*plVar6 + 0x350))(plVar6,*(undefined1 *)(lVar25 + 0x150),4);
                if (lVar25 == 0) goto LAB_143573d2e;
              }
              FUN_1406a594c(lVar25,&local_158);
              lVar19 = local_158;
              if ((longlong)local_150 != 0) {
                local_178 = (longlong)local_150 * 0x1c;
                lVar20 = 0;
                do {
                  uVar17 = FUN_144b252b8(lVar25);
                  FUN_1406a507c(uVar17,&local_108,*(undefined1 *)(lVar19 + 0x14 + lVar20),
                                *(undefined4 *)(lVar19 + 0x18 + lVar20));
                  FUN_1406a50f8(local_138,*(undefined1 *)(lVar19 + 0x14 + lVar20),&local_108);
                  local_110 = 0xffffffff;
                  local_10c = 0;
                  local_168 = CONCAT44(*(undefined4 *)(lVar19 + 8 + lVar20),
                                       *(undefined4 *)(lVar19 + lVar20));
                  local_160 = 2;
                  local_15c = 0xffffffff;
                  FUN_1406a551e(param_1,&local_168,local_138);
                  if (local_70 != 0) {
                    FUN_1400020a8();
                  }
                  lVar20 = lVar20 + 0x1c;
                } while (local_178 != lVar20);
              }
              iVar24 = 0;
              do {
                FUN_14017c93e(lVar25,&local_108,iVar24);
                if ((longlong)local_100 != 0) {
                  lVar19 = (longlong)local_100 * 0x1c;
                  pcVar18 = local_108;
                  do {
                    if ((*(int *)pcVar18 != 0) || (*(int *)(pcVar18 + 8) != 0)) {
                      iVar5 = *(int *)(param_1 + 0x1b8);
                      *(uint *)(param_1 + 0x1b8) = iVar5 + 1U;
                      if (*(uint *)(param_1 + 0x1bc) < iVar5 + 1U) {
                        FUN_1417e03e8(plVar1,iVar5);
                      }
                      puVar2 = (undefined8 *)(*plVar1 + (longlong)iVar5 * 0x28);
                      *puVar2 = 0;
                      *(undefined1 *)(puVar2 + 1) = 2;
                      *(undefined4 *)((longlong)puVar2 + 0xc) = 0xffffffff;
                      puVar2[2] = 0;
                      puVar2[3] = 0;
                      puVar2[4] = 0;
                      *puVar2 = CONCAT44(*(int *)(pcVar18 + 8),*(int *)pcVar18);
                      FUN_14017ca90(pcVar18,plVar6,lVar25);
                    }
                    pcVar18 = pcVar18 + 0x1c;
                    lVar19 = lVar19 + -0x1c;
                  } while (lVar19 != 0);
                }
                iVar24 = iVar24 + 1;
              } while (iVar24 != 7);
            }
          }
          else {
            if ((longlong)(int)plVar6[0x31] != 0) {
              plVar21 = (longlong *)plVar6[0x30];
              plVar22 = (longlong *)((longlong)plVar21 + (longlong)(int)plVar6[0x31] * 0x24);
              do {
                lVar25 = *(longlong *)(param_1 + 0x180);
                iVar24 = *(int *)(param_1 + 0x188);
                lVar19 = (longlong)iVar24;
                if (lVar19 != 0) {
                  lVar20 = 0;
                  do {
                    if (*(longlong *)(lVar20 + lVar25) == *plVar21) {
                      *(int *)(lVar20 + lVar25 + 0x10) = (int)plVar21[2];
                      goto LAB_143573fb4;
                    }
                    lVar20 = lVar20 + 0x24;
                  } while (lVar19 * 0x24 != lVar20);
                }
                *(uint *)(param_1 + 0x188) = iVar24 + 1U;
                if (*(uint *)(param_1 + 0x18c) < iVar24 + 1U) {
                  FUN_1406a5a8c(plVar23,iVar24);
                  lVar25 = *plVar23;
                }
                *(int *)(lVar25 + 0x20 + lVar19 * 0x24) = (int)plVar21[4];
                lVar9 = *plVar21;
                uVar7 = *(undefined4 *)((longlong)plVar21 + 4);
                lVar10 = plVar21[1];
                uVar8 = *(undefined4 *)((longlong)plVar21 + 0xc);
                lVar20 = plVar21[3];
                plVar4 = (longlong *)(lVar25 + 0x10 + lVar19 * 0x24);
                *plVar4 = plVar21[2];
                plVar4[1] = lVar20;
                puVar3 = (undefined4 *)(lVar25 + lVar19 * 0x24);
                *puVar3 = (int)lVar9;
                puVar3[1] = uVar7;
                puVar3[2] = (int)lVar10;
                puVar3[3] = uVar8;
LAB_143573fb4:
                plVar21 = (longlong *)((longlong)plVar21 + 0x24);
              } while (plVar21 != plVar22);
            }
            plVar23 = local_188;
            if ((longlong)(int)plVar6[0x33] != 0) {
              plVar22 = (longlong *)plVar6[0x32];
              plVar21 = plVar22 + (longlong)(int)plVar6[0x33] * 6;
              do {
                lVar25 = *(longlong *)(param_1 + 400);
                iVar24 = *(int *)(param_1 + 0x198);
                lVar19 = (longlong)iVar24;
                if (lVar19 != 0) {
                  lVar20 = 0;
                  do {
                    if (*(longlong *)(lVar20 + lVar25) == *plVar22) {
                      uVar7 = *(undefined4 *)((longlong)plVar22 + 0x14);
                      lVar19 = plVar22[3];
                      uVar8 = *(undefined4 *)((longlong)plVar22 + 0x1c);
                      puVar3 = (undefined4 *)(lVar20 + lVar25 + 0x10);
                      *puVar3 = (int)plVar22[2];
                      puVar3[1] = uVar7;
                      puVar3[2] = (int)lVar19;
                      puVar3[3] = uVar8;
                      goto LAB_14357406b;
                    }
                    lVar20 = lVar20 + 0x30;
                  } while (lVar19 * 0x30 != lVar20);
                }
                *(uint *)(param_1 + 0x198) = iVar24 + 1U;
                if (*(uint *)(param_1 + 0x19c) < iVar24 + 1U) {
                  FUN_1406a5838(plVar23,iVar24);
                  lVar25 = *plVar23;
                }
                lVar19 = lVar19 * 0x30;
                lVar11 = *plVar22;
                uVar7 = *(undefined4 *)((longlong)plVar22 + 4);
                lVar12 = plVar22[1];
                uVar8 = *(undefined4 *)((longlong)plVar22 + 0xc);
                lVar20 = plVar22[2];
                lVar9 = plVar22[3];
                lVar10 = plVar22[5];
                plVar4 = (longlong *)(lVar25 + 0x20 + lVar19);
                *plVar4 = plVar22[4];
                plVar4[1] = lVar10;
                plVar4 = (longlong *)(lVar25 + 0x10 + lVar19);
                *plVar4 = lVar20;
                plVar4[1] = lVar9;
                puVar3 = (undefined4 *)(lVar25 + lVar19);
                *puVar3 = (int)lVar11;
                puVar3[1] = uVar7;
                puVar3[2] = (int)lVar12;
                puVar3[3] = uVar8;
LAB_14357406b:
                plVar22 = plVar22 + 6;
              } while (plVar22 != plVar21);
            }
            if ((longlong)(int)plVar6[0x35] != 0) {
              plVar23 = (longlong *)plVar6[0x34];
              plVar22 = plVar23 + (longlong)(int)plVar6[0x35] * 8;
              do {
                plVar21 = local_190;
                lVar25 = *(longlong *)(param_1 + 0x1a0);
                iVar24 = *(int *)(param_1 + 0x1a8);
                lVar19 = (longlong)iVar24;
                if (lVar19 != 0) {
                  lVar20 = 0;
                  do {
                    if (*(longlong *)(lVar20 + lVar25) == *plVar23) {
                      lVar9 = plVar23[2];
                      uVar7 = *(undefined4 *)((longlong)plVar23 + 0x14);
                      lVar10 = plVar23[3];
                      uVar8 = *(undefined4 *)((longlong)plVar23 + 0x1c);
                      lVar19 = plVar23[5];
                      plVar21 = (longlong *)(lVar20 + lVar25 + 0x20);
                      *plVar21 = plVar23[4];
                      plVar21[1] = lVar19;
                      puVar3 = (undefined4 *)(lVar20 + lVar25 + 0x10);
                      *puVar3 = (int)lVar9;
                      puVar3[1] = uVar7;
                      puVar3[2] = (int)lVar10;
                      puVar3[3] = uVar8;
                      goto LAB_143574115;
                    }
                    lVar20 = lVar20 + 0x40;
                  } while (lVar19 << 6 != lVar20);
                }
                *(uint *)(param_1 + 0x1a8) = iVar24 + 1U;
                if (*(uint *)(param_1 + 0x1ac) < iVar24 + 1U) {
                  FUN_147bbb00e(local_190,iVar24);
                  lVar25 = *plVar21;
                }
                lVar19 = lVar19 * 0x40;
                lVar13 = *plVar23;
                uVar7 = *(undefined4 *)((longlong)plVar23 + 4);
                lVar14 = plVar23[1];
                uVar8 = *(undefined4 *)((longlong)plVar23 + 0xc);
                lVar20 = plVar23[2];
                lVar9 = plVar23[3];
                lVar10 = plVar23[4];
                lVar11 = plVar23[5];
                lVar12 = plVar23[7];
                plVar21 = (longlong *)(lVar25 + 0x30 + lVar19);
                *plVar21 = plVar23[6];
                plVar21[1] = lVar12;
                plVar21 = (longlong *)(lVar25 + 0x20 + lVar19);
                *plVar21 = lVar10;
                plVar21[1] = lVar11;
                plVar21 = (longlong *)(lVar25 + 0x10 + lVar19);
                *plVar21 = lVar20;
                plVar21[1] = lVar9;
                puVar3 = (undefined4 *)(lVar25 + lVar19);
                *puVar3 = (int)lVar13;
                puVar3[1] = uVar7;
                puVar3[2] = (int)lVar14;
                puVar3[3] = uVar8;
LAB_143574115:
                plVar23 = plVar23 + 8;
              } while (plVar23 != plVar22);
            }
            if ((longlong)(int)plVar6[0x37] != 0) {
              plVar22 = (longlong *)plVar6[0x36];
              plVar23 = plVar22 + (longlong)(int)plVar6[0x37] * 5;
              do {
                lVar25 = *(longlong *)(param_1 + 0x1b0);
                iVar24 = *(int *)(param_1 + 0x1b8);
                lVar19 = (longlong)iVar24;
                if (lVar19 != 0) {
                  lVar20 = 0;
                  do {
                    if (*(longlong *)(lVar25 + lVar20) == *plVar22) {
                      lVar19 = plVar22[2];
                      if (DAT_14c950c29 == '\x01') {
                        if (lVar19 == 0) {
                          lVar19 = 0;
                        }
                        else {
                          FUN_1456cec3c();
                          lVar19 = plVar22[2];
                        }
                      }
                      *(longlong *)(lVar25 + 0x10 + lVar20) = lVar19;
                      goto LAB_143574201;
                    }
                    lVar20 = lVar20 + 0x28;
                  } while (lVar19 * 0x28 != lVar20);
                }
                *(uint *)(param_1 + 0x1b8) = iVar24 + 1U;
                if (*(uint *)(param_1 + 0x1bc) < iVar24 + 1U) {
                  FUN_1417e03e8(plVar1,iVar24);
                  lVar25 = *plVar1;
                }
                uVar7 = *(undefined4 *)((longlong)plVar22 + 4);
                lVar20 = plVar22[1];
                uVar8 = *(undefined4 *)((longlong)plVar22 + 0xc);
                puVar3 = (undefined4 *)(lVar25 + lVar19 * 0x28);
                *puVar3 = (int)*plVar22;
                puVar3[1] = uVar7;
                puVar3[2] = (int)lVar20;
                puVar3[3] = uVar8;
                lVar20 = plVar22[2];
                *(longlong *)(lVar25 + 0x10 + lVar19 * 0x28) = lVar20;
                if ((DAT_14c950c29 == '\x01') && (lVar20 != 0)) {
                  FUN_1456cec3c();
                }
                lVar25 = lVar19 * 0x28 + lVar25;
                uVar7 = *(undefined4 *)((longlong)plVar22 + 0x1c);
                lVar19 = plVar22[4];
                uVar8 = *(undefined4 *)((longlong)plVar22 + 0x24);
                *(int *)(lVar25 + 0x18) = (int)plVar22[3];
                *(undefined4 *)(lVar25 + 0x1c) = uVar7;
                *(int *)(lVar25 + 0x20) = (int)lVar19;
                *(undefined4 *)(lVar25 + 0x24) = uVar8;
LAB_143574201:
                plVar22 = plVar22 + 5;
              } while (plVar22 != plVar23);
            }
            if ((longlong)(int)plVar6[0x3b] != 0) {
              plVar22 = (longlong *)plVar6[0x3a];
              plVar23 = plVar22 + (longlong)(int)plVar6[0x3b] * 5;
              do {
                plVar21 = local_198;
                lVar25 = *(longlong *)(param_1 + 0x1d0);
                iVar24 = *(int *)(param_1 + 0x1d8);
                lVar19 = (longlong)iVar24;
                if (lVar19 != 0) {
                  lVar20 = 0;
                  do {
                    if (*(longlong *)(lVar25 + lVar20) == *plVar22) {
                      lVar19 = plVar22[2];
                      if (DAT_14c950c29 == '\x01') {
                        if (lVar19 == 0) {
                          lVar19 = 0;
                        }
                        else {
                          FUN_1456cec3c();
                          lVar19 = plVar22[2];
                        }
                      }
                      *(longlong *)(lVar25 + 0x10 + lVar20) = lVar19;
                      goto LAB_1435742da;
                    }
                    lVar20 = lVar20 + 0x28;
                  } while (lVar19 * 0x28 != lVar20);
                }
                *(uint *)(param_1 + 0x1d8) = iVar24 + 1U;
                if (*(uint *)(param_1 + 0x1dc) < iVar24 + 1U) {
                  FUN_147bbb128(local_198,iVar24);
                  lVar25 = *plVar21;
                }
                uVar7 = *(undefined4 *)((longlong)plVar22 + 4);
                lVar20 = plVar22[1];
                uVar8 = *(undefined4 *)((longlong)plVar22 + 0xc);
                puVar3 = (undefined4 *)(lVar25 + lVar19 * 0x28);
                *puVar3 = (int)*plVar22;
                puVar3[1] = uVar7;
                puVar3[2] = (int)lVar20;
                puVar3[3] = uVar8;
                lVar20 = plVar22[2];
                *(longlong *)(lVar25 + 0x10 + lVar19 * 0x28) = lVar20;
                if ((DAT_14c950c29 == '\x01') && (lVar20 != 0)) {
                  FUN_1456cec3c();
                }
                lVar25 = lVar19 * 0x28 + lVar25;
                uVar7 = *(undefined4 *)((longlong)plVar22 + 0x1c);
                lVar19 = plVar22[4];
                uVar8 = *(undefined4 *)((longlong)plVar22 + 0x24);
                *(int *)(lVar25 + 0x18) = (int)plVar22[3];
                *(undefined4 *)(lVar25 + 0x1c) = uVar7;
                *(int *)(lVar25 + 0x20) = (int)lVar19;
                *(undefined4 *)(lVar25 + 0x24) = uVar8;
LAB_1435742da:
                plVar22 = plVar22 + 5;
              } while (plVar22 != plVar23);
            }
            if ((longlong)(int)plVar6[0x3d] != 0) {
              plVar23 = (longlong *)plVar6[0x3c];
              plVar6 = plVar23 + (longlong)(int)plVar6[0x3d] * 5;
              do {
                plVar22 = local_1a0;
                lVar25 = *(longlong *)(param_1 + 0x1e0);
                iVar24 = *(int *)(param_1 + 0x1e8);
                lVar19 = (longlong)iVar24;
                if (lVar19 != 0) {
                  lVar20 = 0;
                  do {
                    if (*(longlong *)(lVar25 + lVar20) == *plVar23) {
                      lVar19 = plVar23[2];
                      if (DAT_14c950c29 == '\x01') {
                        if (lVar19 == 0) {
                          lVar19 = 0;
                        }
                        else {
                          FUN_1456cec3c();
                          lVar19 = plVar23[2];
                        }
                      }
                      *(longlong *)(lVar25 + 0x10 + lVar20) = lVar19;
                      goto LAB_1435743cd;
                    }
                    lVar20 = lVar20 + 0x28;
                  } while (lVar19 * 0x28 != lVar20);
                }
                *(uint *)(param_1 + 0x1e8) = iVar24 + 1U;
                if (*(uint *)(param_1 + 0x1ec) < iVar24 + 1U) {
                  FUN_147bbb1bc(local_1a0,iVar24);
                  lVar25 = *plVar22;
                }
                uVar7 = *(undefined4 *)((longlong)plVar23 + 4);
                lVar20 = plVar23[1];
                uVar8 = *(undefined4 *)((longlong)plVar23 + 0xc);
                puVar3 = (undefined4 *)(lVar25 + lVar19 * 0x28);
                *puVar3 = (int)*plVar23;
                puVar3[1] = uVar7;
                puVar3[2] = (int)lVar20;
                puVar3[3] = uVar8;
                lVar20 = plVar23[2];
                *(longlong *)(lVar25 + 0x10 + lVar19 * 0x28) = lVar20;
                if ((DAT_14c950c29 == '\x01') && (lVar20 != 0)) {
                  FUN_1456cec3c();
                }
                lVar25 = lVar19 * 0x28 + lVar25;
                uVar7 = *(undefined4 *)((longlong)plVar23 + 0x1c);
                lVar19 = plVar23[4];
                uVar8 = *(undefined4 *)((longlong)plVar23 + 0x24);
                *(int *)(lVar25 + 0x18) = (int)plVar23[3];
                *(undefined4 *)(lVar25 + 0x1c) = uVar7;
                *(int *)(lVar25 + 0x20) = (int)lVar19;
                *(undefined4 *)(lVar25 + 0x24) = uVar8;
LAB_1435743cd:
                plVar23 = plVar23 + 5;
              } while (plVar23 != plVar6);
            }
          }
        }
LAB_143574402:
        lVar25 = local_170 + -1;
      } while (1 < local_170);
    }
    FUN_1403ba93c(param_1);
    if (local_148 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143574516 FUN_143574516 body=64 status=ok
// SIG undefined FUN_143574516(void)

byte FUN_143574516(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = 0;
  bVar2 = 0;
  if (*(char *)(param_1 + 0x156) == '\x01') {
    bVar2 = *(byte *)(param_1 + 0x157);
  }
  if (*(longlong **)(param_1 + 0x110) != (longlong *)0x0) {
    bVar1 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x470))();
  }
  return bVar1 | bVar2;
}



// FUNCTION 1435746ac FUN_1435746ac body=112 status=ok
// SIG undefined FUN_1435746ac(void)

void FUN_1435746ac(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1[1] + 0x2f0))();
  puVar2 = *(undefined8 **)(*param_1 + 200);
  if (puVar2 != puVar3) {
    *(undefined8 **)(*param_1 + 200) = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar3 + 0xc) = *(int *)(puVar3 + 0xc) + 1;
      UNLOCK();
    }
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  *(char *)(*param_1 + 0xc0) = (char)param_1[2];
  *(undefined1 *)(*param_1 + 0xc1) = *(undefined1 *)((longlong)param_1 + 0x11);
  FUN_1447a4a8e(*param_1,1);
  return;
}



// FUNCTION 143574726 FUN_143574726 body=12 status=ok
// SIG undefined FUN_143574726(void)

void FUN_143574726(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014357472f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143574732 FUN_143574732 body=29 status=ok
// SIG undefined FUN_143574732(void)

undefined8 FUN_143574732(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143574750 FUN_143574750 body=282 status=ok
// SIG undefined FUN_143574750(void)

undefined8 * FUN_143574750(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143574684);
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



// FUNCTION 14357486a FUN_14357486a body=187 status=ok
// SIG undefined FUN_14357486a(void)

void FUN_14357486a(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1[0x16] + 0x2f0))();
  puVar2 = *(undefined8 **)(param_1[0x15] + 200);
  if (puVar2 != puVar3) {
    *(undefined8 **)(param_1[0x15] + 200) = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar3 + 0xc) = *(int *)(puVar3 + 0xc) + 1;
      UNLOCK();
    }
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  *(undefined1 *)(param_1[0x15] + 0xc0) = *(undefined1 *)(param_1 + 0x17);
  *(undefined1 *)(param_1[0x15] + 0xc1) = *(undefined1 *)((longlong)param_1 + 0xb9);
  FUN_1447a4a8e(param_1[0x15],1);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014357491b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143574926 FUN_143574926 body=91 status=ok
// SIG undefined FUN_143574926(void)

void FUN_143574926(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if ((longlong *)(lVar1 + 0x1e0) != param_1 + 1) {
    if (*(longlong *)(lVar1 + 0x1e0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar1 + 0x1e0) = param_1[1];
    param_1[1] = 0;
    *(int *)(lVar1 + 0x1e8) = (int)param_1[2];
    *(undefined4 *)(lVar1 + 0x1ec) = *(undefined4 *)((longlong)param_1 + 0x14);
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14357498c FUN_14357498c body=12 status=ok
// SIG undefined FUN_14357498c(void)

void FUN_14357498c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143574995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143574998 FUN_143574998 body=57 status=ok
// SIG undefined FUN_143574998(void)

undefined8 * FUN_143574998(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a9d4680;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435749d2 FUN_1435749d2 body=282 status=ok
// SIG undefined FUN_1435749d2(void)

undefined8 * FUN_1435749d2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143574684);
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



// FUNCTION 143574aec FUN_143574aec body=179 status=ok
// SIG undefined FUN_143574aec(void)

void FUN_143574aec(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = param_1[0x15];
  if ((longlong *)(lVar2 + 0x1e0) != param_1 + 0x16) {
    if (*(longlong *)(lVar2 + 0x1e0) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(lVar2 + 0x1e0) = param_1[0x16];
    param_1[0x16] = 0;
    *(undefined4 *)(lVar2 + 0x1e8) = *(undefined4 *)(param_1 + 0x17);
    *(undefined4 *)(lVar2 + 0x1ec) = *(undefined4 *)((longlong)param_1 + 0xbc);
    param_1[0x17] = 0;
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143574b93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143574b9f FUN_143574b9f body=7 status=ok
// SIG undefined FUN_143574b9f(void)

void FUN_143574b9f(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 143574ba6 FUN_143574ba6 body=7 status=ok
// SIG undefined FUN_143574ba6(void)

void FUN_143574ba6(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 143574bad FUN_143574bad body=7 status=ok
// SIG undefined FUN_143574bad(void)

void FUN_143574bad(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 143574bb4 FUN_143574bb4 body=7 status=ok
// SIG undefined FUN_143574bb4(void)

void FUN_143574bb4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 143574bbb FUN_143574bbb body=7 status=ok
// SIG undefined FUN_143574bbb(void)

void FUN_143574bbb(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 143574bdc FUN_143574bdc body=29 status=ok
// SIG undefined FUN_143574bdc(void)

void FUN_143574bdc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143574bfa FUN_143574bfa body=52 status=ok
// SIG undefined FUN_143574bfa(void)

undefined8 * FUN_143574bfa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a9d4710;
  FUN_14356fcf4(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143574c2e FUN_143574c2e body=282 status=ok
// SIG undefined FUN_143574c2e(void)

undefined8 * FUN_143574c2e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143574684);
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



// FUNCTION 143574d48 FUN_143574d48 body=131 status=ok
// SIG undefined FUN_143574d48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143574d48(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1447a247c(_DAT_000000a8,0xb0);
    FUN_14356fcf4(0xb0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1447a247c(param_1[0x15],param_1 + 0x16);
  FUN_14356fcf4(param_1 + 0x16);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143574d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143574dcc FUN_143574dcc body=14 status=ok
// SIG undefined FUN_143574dcc(void)

void FUN_143574dcc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 143574dda FUN_143574dda body=29 status=ok
// SIG undefined FUN_143574dda(void)

undefined8 FUN_143574dda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143574df8 FUN_143574df8 body=64 status=ok
// SIG undefined FUN_143574df8(void)

undefined8 * FUN_143574df8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a9d4790;
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



// FUNCTION 143574e3c FUN_143574e3c body=81 status=ok
// SIG undefined FUN_143574e3c(void)

undefined8 FUN_143574e3c(longlong param_1)

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



// FUNCTION 143574e94 FUN_143574e94 body=89 status=ok
// SIG undefined FUN_143574e94(void)

bool FUN_143574e94(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143574edf;
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
LAB_143574edf:
  return lVar6 == param_2;
}



// FUNCTION 143574f0a FUN_143574f0a body=118 status=ok
// SIG undefined FUN_143574f0a(void)

void FUN_143574f0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9d4790;
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



// FUNCTION 143574f80 FUN_143574f80 body=118 status=ok
// SIG undefined FUN_143574f80(void)

void FUN_143574f80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9d4790;
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



// FUNCTION 143574ff6 FUN_143574ff6 body=156 status=ok
// SIG undefined FUN_143574ff6(void)

void FUN_143574ff6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9d4790;
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
                    /* WARNING: Could not recover jumptable at 0x000143575082. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143575092 FUN_143575092 body=94 status=ok
// SIG undefined FUN_143575092(void)

void FUN_143575092(longlong param_1)

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
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001435750da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001435750e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1435750f0 FUN_1435750f0 body=93 status=ok
// SIG undefined FUN_1435750f0(void)

ulonglong FUN_1435750f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_143575142:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_143575142;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 14357514e FUN_14357514e body=168 status=ok
// SIG undefined FUN_14357514e(void)

void FUN_14357514e(longlong *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1[2] != 0) {
    pbVar1 = (byte *)(param_1[2] + 0xac);
    *pbVar1 = *pbVar1 | 1;
    (**(code **)(*(longlong *)param_1[2] + 0x20))();
  }
  lVar4 = *param_1;
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    lVar5 = 0;
    do {
      (**(code **)(**(longlong **)(lVar4 + lVar5) + 0x10))();
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar5);
    uVar3 = (undefined4)param_1[1];
    lVar4 = *param_1;
  }
  FUN_14356c87d(lVar4,uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_147bb26c2(param_1,0);
  }
  LOCK();
  *(uint *)param_1[3] = *(uint *)param_1[3] & 0xfffffffe;
  UNLOCK();
  if ((*(uint *)param_1[3] & 2) != 0) {
    FUN_1463eb5ca(param_1[2]);
    LOCK();
    *(uint *)param_1[3] = *(uint *)param_1[3] & 0xfffffffd;
    UNLOCK();
  }
  return;
}



// FUNCTION 143575200 FUN_143575200 body=29 status=ok
// SIG undefined FUN_143575200(void)

void FUN_143575200(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14357521e FUN_14357521e body=69 status=ok
// SIG undefined FUN_14357521e(void)

undefined8 * FUN_14357521e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a9d4800;
  FUN_14356c87d(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143575264 FUN_143575264 body=282 status=ok
// SIG undefined FUN_143575264(void)

undefined8 * FUN_143575264(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143574684);
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



// FUNCTION 14357537e FUN_14357537e body=298 status=ok
// SIG undefined FUN_14357537e(void)

void FUN_14357537e(undefined8 *param_1)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (param_1[0x17] != 0) {
    pbVar2 = (byte *)(param_1[0x17] + 0xac);
    *pbVar2 = *pbVar2 | 1;
    (**(code **)(*(longlong *)param_1[0x17] + 0x20))();
  }
  lVar5 = param_1[0x15];
  iVar3 = *(int *)(param_1 + 0x16);
  if ((longlong)iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    lVar6 = 0;
    do {
      (**(code **)(**(longlong **)(lVar5 + lVar6) + 0x10))();
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar3 * 8 != lVar6);
    uVar4 = *(undefined4 *)(param_1 + 0x16);
    lVar5 = param_1[0x15];
  }
  FUN_14356c87d(lVar5,uVar4);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (*(int *)((longlong)param_1 + 0xb4) != 0) {
    FUN_147bb26c2(param_1 + 0x15,0);
  }
  LOCK();
  *(uint *)param_1[0x18] = *(uint *)param_1[0x18] & 0xfffffffe;
  UNLOCK();
  if ((*(uint *)param_1[0x18] & 2) != 0) {
    FUN_1463eb5ca(param_1[0x17]);
    LOCK();
    *(uint *)param_1[0x18] = *(uint *)param_1[0x18] & 0xfffffffd;
    UNLOCK();
  }
  FUN_14356c87d(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143575471. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1435754b4 FUN_1435754b4 body=12 status=ok
// SIG undefined FUN_1435754b4(void)

void FUN_1435754b4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001435754bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1435754c0 FUN_1435754c0 body=68 status=ok
// SIG undefined FUN_1435754c0(void)

undefined8 * FUN_1435754c0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14a9d4830;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143575504 FUN_143575504 body=282 status=ok
// SIG undefined FUN_143575504(void)

undefined8 * FUN_143575504(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143574684);
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



// FUNCTION 14357561e FUN_14357561e body=91 status=ok
// SIG undefined FUN_14357561e(void)

ulonglong FUN_14357561e(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar3 = (ulonglong)DAT_14c7585c8;
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      uVar3 = (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014357566f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 143575680 FUN_143575680 body=282 status=ok
// SIG undefined FUN_143575680(void)

undefined8 * FUN_143575680(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143574684);
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



// FUNCTION 14357579a FUN_14357579a body=120 status=ok
// SIG undefined FUN_14357579a(void)

void FUN_14357579a(undefined8 *param_1)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = (undefined4)param_1[1];
  local_20 = 0;
  local_1c = (undefined4)((ulonglong)param_1[1] >> 0x20);
  local_18 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_14 = *(undefined1 *)(param_1 + 2);
  FUN_1404dcaec(*param_1,&local_24,param_1 + 3);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_14006fee2(*param_1,&DAT_14ca85100,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48,&DAT_14ca85100);
}



// FUNCTION 143575814 FUN_143575814 body=441 status=ok
// SIG undefined FUN_143575814(void)

void FUN_143575814(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  
  FUN_1447a4a8e(param_1,0);
  plVar1 = (longlong *)(param_1 + 0x120);
  uVar13 = FUN_147bb8de2(param_1,param_2);
  if (uVar13 != 0xffffffff) {
    lVar12 = *plVar1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[3];
    puVar2 = (undefined8 *)(lVar12 + 0x20 + (ulonglong)uVar13 * 0x30);
    *puVar2 = param_3[2];
    puVar2[1] = uVar5;
    puVar2 = (undefined8 *)(lVar12 + 0x10 + (ulonglong)uVar13 * 0x30);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    return;
  }
  uVar8 = *param_2;
  uVar9 = param_2[1];
  uVar10 = param_2[2];
  uVar7 = *(undefined2 *)(param_2 + 3);
  iVar14 = param_2[4];
  uVar3 = *param_3;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  iVar11 = *(int *)(param_1 + 0x128);
  *(uint *)(param_1 + 0x128) = iVar11 + 1U;
  if (*(uint *)(param_1 + 300) < iVar11 + 1U) {
    FUN_147bb9ce8(plVar1,iVar11);
  }
  lVar12 = *(longlong *)(param_1 + 0x120);
  lVar16 = (longlong)iVar11 * 0x30;
  *(undefined4 *)(lVar12 + lVar16) = uVar8;
  *(undefined4 *)(lVar12 + 4 + lVar16) = uVar9;
  *(undefined4 *)(lVar12 + 8 + lVar16) = uVar10;
  *(undefined2 *)(lVar12 + 0xc + lVar16) = uVar7;
  *(short *)(lVar12 + 0xe + lVar16) = (short)(iVar14 << 0xe);
  *(undefined8 *)(lVar12 + 0x10 + lVar16) = uVar3;
  *(undefined8 *)(lVar12 + 0x18 + lVar16) = uVar4;
  *(undefined8 *)(lVar12 + 0x20 + lVar16) = uVar5;
  *(undefined8 *)(lVar12 + 0x28 + lVar16) = uVar6;
  uVar13 = *(uint *)(param_1 + 0x128);
  iVar14 = 1;
  if (3 < uVar13) {
    uVar15 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
    lVar12 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar14 = 1 << ((byte)lVar12 & 0x1f);
  }
  if (iVar14 != *(int *)(param_1 + 0x138)) {
    FUN_14008edde(plVar1,iVar14);
    return;
  }
  FUN_147bb9a8a(plVar1,uVar13 - 1);
  return;
}



// FUNCTION 1435759ce FUN_1435759ce body=282 status=ok
// SIG undefined FUN_1435759ce(void)

undefined8 * FUN_1435759ce(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143574684);
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



// FUNCTION 143575ae8 FUN_143575ae8 body=120 status=ok
// SIG undefined FUN_143575ae8(void)

void FUN_143575ae8(undefined8 *param_1)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = (undefined4)param_1[1];
  local_20 = 0;
  local_1c = (undefined4)((ulonglong)param_1[1] >> 0x20);
  local_18 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_14 = *(undefined1 *)(param_1 + 2);
  FUN_143575814(*param_1,&local_24,param_1 + 4);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_14006fee2(*param_1,&DAT_14ca85100,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48,&DAT_14ca85100);
}



// FUNCTION 143575b62 FUN_143575b62 body=282 status=ok
// SIG undefined FUN_143575b62(void)

undefined8 * FUN_143575b62(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143574684);
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



// FUNCTION 143575c7c FUN_143575c7c body=120 status=ok
// SIG undefined FUN_143575c7c(void)

void FUN_143575c7c(undefined8 *param_1)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = (undefined4)param_1[1];
  local_20 = 0;
  local_1c = (undefined4)((ulonglong)param_1[1] >> 0x20);
  local_18 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_14 = *(undefined1 *)(param_1 + 2);
  FUN_14006ffac(*param_1,&local_24,param_1 + 3);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_14006fee2(*param_1,&DAT_14ca85100,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48,&DAT_14ca85100);
}



// FUNCTION 143575cfc FUN_143575cfc body=282 status=ok
// SIG undefined FUN_143575cfc(void)

undefined8 * FUN_143575cfc(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143574684);
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



// FUNCTION 143575e16 FUN_143575e16 body=120 status=ok
// SIG undefined FUN_143575e16(void)

void FUN_143575e16(undefined8 *param_1)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = (undefined4)param_1[1];
  local_20 = 0;
  local_1c = (undefined4)((ulonglong)param_1[1] >> 0x20);
  local_18 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_14 = *(undefined1 *)(param_1 + 2);
  FUN_1408ec8a8(*param_1,&local_24,param_1 + 3);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_14006fee2(*param_1,&DAT_14ca85100,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48,&DAT_14ca85100);
}



// FUNCTION 143575e90 FUN_143575e90 body=304 status=ok
// SIG undefined FUN_143575e90(void)

void FUN_143575e90(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  FUN_1447a4a8e(param_1,0);
  plVar1 = (longlong *)(param_1 + 0x1a0);
  iVar10 = FUN_140040664(param_1,param_2);
  if (iVar10 != -1) {
    *(undefined8 *)(*plVar1 + 0x10 + (longlong)iVar10 * 0x18) = *param_3;
    return;
  }
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar2 = *(undefined2 *)(param_2 + 3);
  iVar10 = param_2[4];
  uVar8 = *param_3;
  iVar6 = *(int *)(param_1 + 0x1a8);
  lVar12 = (longlong)iVar6;
  *(uint *)(param_1 + 0x1a8) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x1ac) < iVar6 + 1U) {
    FUN_147bb9e88(plVar1,iVar6);
  }
  lVar9 = *(longlong *)(param_1 + 0x1a0);
  *(undefined4 *)(lVar9 + lVar12 * 0x18) = uVar3;
  *(undefined4 *)(lVar9 + 4 + lVar12 * 0x18) = uVar4;
  *(undefined4 *)(lVar9 + 8 + lVar12 * 0x18) = uVar5;
  *(undefined2 *)(lVar9 + 0xc + lVar12 * 0x18) = uVar2;
  *(short *)(lVar9 + 0xe + lVar12 * 0x18) = (short)(iVar10 << 0xe);
  *(undefined8 *)(lVar9 + 0x10 + lVar12 * 0x18) = uVar8;
  uVar7 = *(uint *)(param_1 + 0x1a8);
  iVar10 = 1;
  if (3 < uVar7) {
    uVar11 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar10 = 1 << ((byte)lVar12 & 0x1f);
  }
  if (iVar10 == *(int *)(param_1 + 0x1b8)) {
    FUN_14008f1d6(plVar1,uVar7 - 1);
    return;
  }
  FUN_14008eefa(plVar1,iVar10);
  return;
}



// FUNCTION 143575fc0 FUN_143575fc0 body=282 status=ok
// SIG undefined FUN_143575fc0(void)

undefined8 * FUN_143575fc0(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143574684);
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



// FUNCTION 1435760da FUN_1435760da body=118 status=ok
// SIG undefined FUN_1435760da(void)

void FUN_1435760da(undefined8 *param_1)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = (undefined4)param_1[1];
  local_20 = 0;
  local_1c = (undefined4)((ulonglong)param_1[1] >> 0x20);
  local_18 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_14 = *(undefined1 *)(param_1 + 2);
  FUN_143575e90(*param_1,&local_24,param_1 + 3);
  FUN_14006fee2(*param_1,&DAT_14ca85100,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143576152 FUN_143576152 body=304 status=ok
// SIG undefined FUN_143576152(void)

void FUN_143576152(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  FUN_1447a4a8e(param_1,0);
  plVar1 = (longlong *)(param_1 + 0x1c0);
  iVar10 = FUN_140040756(param_1,param_2);
  if (iVar10 != -1) {
    *(undefined8 *)(*plVar1 + 0x10 + (longlong)iVar10 * 0x18) = *param_3;
    return;
  }
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar2 = *(undefined2 *)(param_2 + 3);
  iVar10 = param_2[4];
  uVar8 = *param_3;
  iVar6 = *(int *)(param_1 + 0x1c8);
  lVar12 = (longlong)iVar6;
  *(uint *)(param_1 + 0x1c8) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x1cc) < iVar6 + 1U) {
    FUN_147bb9f1c(plVar1,iVar6);
  }
  lVar9 = *(longlong *)(param_1 + 0x1c0);
  *(undefined4 *)(lVar9 + lVar12 * 0x18) = uVar3;
  *(undefined4 *)(lVar9 + 4 + lVar12 * 0x18) = uVar4;
  *(undefined4 *)(lVar9 + 8 + lVar12 * 0x18) = uVar5;
  *(undefined2 *)(lVar9 + 0xc + lVar12 * 0x18) = uVar2;
  *(short *)(lVar9 + 0xe + lVar12 * 0x18) = (short)(iVar10 << 0xe);
  *(undefined8 *)(lVar9 + 0x10 + lVar12 * 0x18) = uVar8;
  uVar7 = *(uint *)(param_1 + 0x1c8);
  iVar10 = 1;
  if (3 < uVar7) {
    uVar11 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar10 = 1 << ((byte)lVar12 & 0x1f);
  }
  if (iVar10 == *(int *)(param_1 + 0x1d8)) {
    FUN_14008f2b8(plVar1,uVar7 - 1);
    return;
  }
  FUN_14008ef88(plVar1,iVar10);
  return;
}



// FUNCTION 143576282 FUN_143576282 body=282 status=ok
// SIG undefined FUN_143576282(void)

undefined8 * FUN_143576282(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143574684);
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



// FUNCTION 14357639c FUN_14357639c body=118 status=ok
// SIG undefined FUN_14357639c(void)

void FUN_14357639c(undefined8 *param_1)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = (undefined4)param_1[1];
  local_20 = 0;
  local_1c = (undefined4)((ulonglong)param_1[1] >> 0x20);
  local_18 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_14 = *(undefined1 *)(param_1 + 2);
  FUN_143576152(*param_1,&local_24,param_1 + 3);
  FUN_14006fee2(*param_1,&DAT_14ca85100,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143576414 FUN_143576414 body=282 status=ok
// SIG undefined FUN_143576414(void)

undefined8 * FUN_143576414(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143574684);
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



// FUNCTION 14357652e FUN_14357652e body=120 status=ok
// SIG undefined FUN_14357652e(void)

void FUN_14357652e(undefined8 *param_1)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = (undefined4)param_1[1];
  local_20 = 0;
  local_1c = (undefined4)((ulonglong)param_1[1] >> 0x20);
  local_18 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_14 = *(undefined1 *)(param_1 + 2);
  FUN_1408ec8a8(*param_1,&local_24,param_1 + 3);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_14006fee2(*param_1,&DAT_14ca85100,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48,&DAT_14ca85100);
}



// FUNCTION 1435765ba FUN_1435765ba body=12 status=ok
// SIG undefined FUN_1435765ba(void)

void FUN_1435765ba(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001435765c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1435765c6 FUN_1435765c6 body=29 status=ok
// SIG undefined FUN_1435765c6(void)

undefined8 FUN_1435765c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435765e4 FUN_1435765e4 body=282 status=ok
// SIG undefined FUN_1435765e4(void)

undefined8 * FUN_1435765e4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143574684);
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



// FUNCTION 1435766fe FUN_1435766fe body=94 status=ok
// SIG undefined FUN_1435766fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435766fe(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_140944df6(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_140944df6(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014357673a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14357675c FUN_14357675c body=296 status=ok
// SIG undefined FUN_14357675c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14357675c(void)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined **local_30;
  undefined8 local_28;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400b22c2(local_20,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(local_20,&DAT_14caebfa4);
  if (cVar1 == '\0') {
    _DAT_14caebfa4 = 0;
    uRam000000014caebfac = 0;
  }
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&DAT_14caec1ac,L"GradientTexture",1);
  FUN_1446f470e(&DAT_14caec1b4,L"GradientBias",1);
  FUN_1446f470e(&DAT_14caec1bc,L"GradientScale",1);
  FUN_1446f470e(&DAT_14caec1c4,L"GradientCount",1);
  local_30 = &PTR_FUN_14a9d3120;
  local_28 = 1;
  local_38 = 0xb;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9d3300,2,&PTR_FUN_14a9d3140);
  DAT_14caec320 = 0;
  _DAT_14caec328 = 0;
  atexit((_func_5014 *)&LAB_14356fa48);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143576896 FUN_143576896 body=130 status=ok
// SIG undefined FUN_143576896(void)

void FUN_143576896(longlong param_1,longlong param_2)

{
  FUN_1406a5d86(param_1,3);
  if (param_2 != 0) {
    FUN_147bbdbf2(param_1 + 400,param_2 + 400);
    FUN_147bbdc4c(param_1 + 0x1a0,param_2 + 0x1a0);
    FUN_147bbdca4(param_1 + 0x180,param_2 + 0x180);
    FUN_147bbdcfe(param_1 + 0x1b0,param_2 + 0x1b0);
    FUN_147bbdd4e(param_1 + 0x1f0,param_2 + 0x1f0);
  }
  FUN_1403ba93c(param_1);
  return;
}



// FUNCTION 143576918 FUN_143576918 body=228 status=ok
// SIG undefined FUN_143576918(void)

longlong FUN_143576918(void)

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
  if (DAT_14caec470 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1417df956;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463eaa20;
    local_38 = &LAB_147bbd9ea;
    local_40 = FUN_1401cf6d7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x330;
    FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caec470;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435769fd FUN_1435769fd body=1452 status=ok
// SIG undefined FUN_1435769fd(void)

void FUN_1435769fd(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_a8 [32];
  code **local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar5 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_143576b97;
    bVar5 = DAT_14c8442b8 & 1;
  }
  if (bVar5 != 0) goto LAB_143576b97;
  uVar12 = *(undefined8 *)(param_1 + 0x248);
  uStack_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  local_80 = uVar12;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143576ab0;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143576ab5;
      goto LAB_143576af2;
    }
  }
  else {
LAB_143576ab0:
    if (iVar7 != 0x10) {
LAB_143576af2:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
        goto LAB_143576ab5;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143576ab5;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143576c5e;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_14357e25f);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_143576c5e:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x18);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x18);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_143576cde;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143576cde:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14a9db560;
        *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_80;
        *(undefined4 *)((longlong)puVar17 + 0xac) = local_80._4_4_;
        *(undefined4 *)(puVar17 + 0x16) = uStack_78;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_74;
        puVar17[0x17] = CONCAT44(uStack_6c,uStack_70);
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar16 != '\x06') {
            uVar6 = uVar16;
          }
          uVar16 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_88 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a9db510;
        local_40 = (undefined4)local_80;
        uStack_3c = local_80._4_4_;
        uStack_38 = uStack_78;
        uStack_34 = uStack_74;
        local_30 = CONCAT44(uStack_6c,uStack_70);
        local_68[0] = FUN_147bc5260;
        FUN_14005a792(&DAT_14ca9a440,L"ClearMIParameterValue",&DAT_14caf1208);
        if (local_68[0] != (code *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_143576b97;
    }
  }
LAB_143576ab5:
  FUN_14357e34a(uVar12,&uStack_78);
  FUN_14006fee2(uVar12,&DAT_14ca85100,0);
LAB_143576b97:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143576faa FUN_143576faa body=1452 status=ok
// SIG undefined FUN_143576faa(void)

void FUN_143576faa(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_a8 [32];
  code **local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar5 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_143577144;
    bVar5 = DAT_14c8442b8 & 1;
  }
  if (bVar5 != 0) goto LAB_143577144;
  uVar12 = *(undefined8 *)(param_1 + 0x248);
  uStack_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  local_80 = uVar12;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_14357705d;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143577062;
      goto LAB_14357709f;
    }
  }
  else {
LAB_14357705d:
    if (iVar7 != 0x10) {
LAB_14357709f:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
        goto LAB_143577062;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143577062;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_14357720b;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_14357e25f);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_14357720b:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x18);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x18);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_14357728b;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_14357728b:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14a9db590;
        *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_80;
        *(undefined4 *)((longlong)puVar17 + 0xac) = local_80._4_4_;
        *(undefined4 *)(puVar17 + 0x16) = uStack_78;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_74;
        puVar17[0x17] = CONCAT44(uStack_6c,uStack_70);
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar16 != '\x06') {
            uVar6 = uVar16;
          }
          uVar16 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_88 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a9db570;
        local_40 = (undefined4)local_80;
        uStack_3c = local_80._4_4_;
        uStack_38 = uStack_78;
        uStack_34 = uStack_74;
        local_30 = CONCAT44(uStack_6c,uStack_70);
        local_68[0] = FUN_147bc5494;
        FUN_14005a792(&DAT_14ca9a440,L"ClearMIParameterValue",&DAT_14caf120c);
        if (local_68[0] != (code *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_143577144;
    }
  }
LAB_143577062:
  FUN_14357e582(uVar12,&uStack_78);
  FUN_14006fee2(uVar12,&DAT_14ca85100,0);
LAB_143577144:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143577557 FUN_143577557 body=1452 status=ok
// SIG undefined FUN_143577557(void)

void FUN_143577557(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_a8 [32];
  code **local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar5 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1435776f1;
    bVar5 = DAT_14c8442b8 & 1;
  }
  if (bVar5 != 0) goto LAB_1435776f1;
  uVar12 = *(undefined8 *)(param_1 + 0x248);
  uStack_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  local_80 = uVar12;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_14357760a;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14357760f;
      goto LAB_14357764c;
    }
  }
  else {
LAB_14357760a:
    if (iVar7 != 0x10) {
LAB_14357764c:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
        goto LAB_14357760f;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_14357760f;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_1435777b8;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_14357e25f);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_1435777b8:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x18);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x18);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_143577838;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143577838:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14a9db5c0;
        *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_80;
        *(undefined4 *)((longlong)puVar17 + 0xac) = local_80._4_4_;
        *(undefined4 *)(puVar17 + 0x16) = uStack_78;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_74;
        puVar17[0x17] = CONCAT44(uStack_6c,uStack_70);
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar16 != '\x06') {
            uVar6 = uVar16;
          }
          uVar16 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_88 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a9db5a0;
        local_40 = (undefined4)local_80;
        uStack_3c = local_80._4_4_;
        uStack_38 = uStack_78;
        uStack_34 = uStack_74;
        local_30 = CONCAT44(uStack_6c,uStack_70);
        local_68[0] = FUN_147bc56b2;
        FUN_14005a792(&DAT_14ca9a440,L"ClearMIParameterValue",&DAT_14caf1210);
        if (local_68[0] != (code *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_1435776f1;
    }
  }
LAB_14357760f:
  FUN_14357e7b6(uVar12,&uStack_78);
  FUN_14006fee2(uVar12,&DAT_14ca85100,0);
LAB_1435776f1:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143577b04 FUN_143577b04 body=69 status=ok
// SIG undefined FUN_143577b04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143577b04(void)

{
  _DAT_14caec490 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143577b46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caec498,1);
  return;
}



// FUNCTION 143577b4a FUN_143577b4a body=28 status=ok
// SIG undefined FUN_143577b4a(void)

undefined8 FUN_143577b4a(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x246)) &
            0xffffffffffffff40;
    return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 6);
  }
  return 0;
}



// FUNCTION 143577b66 FUN_143577b66 body=3772 status=ok
// SIG undefined FUN_143577b66(void)

void FUN_143577b66(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  LARGE_INTEGER LVar5;
  bool bVar6;
  char cVar7;
  DWORD DVar8;
  DWORD DVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  uint *puVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  longlong *plVar20;
  undefined ***pppuVar21;
  undefined7 uVar23;
  longlong lVar22;
  int iVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  uint uVar27;
  longlong lVar28;
  uint uVar29;
  ulonglong uVar30;
  int iVar31;
  bool bVar32;
  bool bVar33;
  undefined1 auStack_188 [32];
  LARGE_INTEGER *local_168;
  ulonglong local_160;
  longlong *local_158;
  int *local_150;
  ulonglong local_148;
  undefined8 *local_140;
  longlong *local_138;
  longlong local_130;
  uint *local_128;
  undefined4 local_120;
  byte local_119;
  longlong local_118;
  undefined8 uStack_110;
  longlong local_108 [2];
  code *local_f8 [2];
  longlong *local_e8;
  longlong local_d8 [5];
  undefined1 local_b0 [24];
  undefined1 local_98 [16];
  LARGE_INTEGER local_88;
  int local_80;
  undefined ***local_78;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  QueryPerformanceCounter(&local_88);
  uVar29 = DAT_14caec4b4 | 1 << ((byte)DAT_14c760db4 & 0x1f);
  bVar6 = false;
  do {
    bVar15 = bVar6;
    uVar27 = -uVar29 & uVar29;
    uVar18 = 0;
    if (uVar29 != 0) {
      for (; (uVar29 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
      }
    }
    if (uVar27 == 0) {
      uVar18 = 0;
    }
    bVar32 = (short)param_1[0x16] == *(short *)(&DAT_14ca85070 + (ulonglong)uVar18 * 2);
    bVar33 = uVar27 != uVar29;
    uVar29 = uVar27 ^ uVar29;
    bVar6 = (bool)(bVar15 | bVar32);
  } while (bVar33);
  if (!bVar15 && !bVar32) goto LAB_14357872e;
  FUN_143222f6a(local_b0);
  if (*(char *)((longlong)param_1 + 0xb2) == '\x01') {
    FUN_14080c2b4();
  }
  local_108[0] = 0;
  local_108[1] = 0;
  local_118 = 0;
  uStack_110 = 0;
  if ((param_1[0x14] == 0) && (param_1[0x15] == 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    if ((DAT_14c872bf0 == '\x01') && (DAT_14c872bf1 != '\x01')) goto LAB_143577ca0;
    local_119 = DAT_14c8442b8 ^ 1;
    if (DAT_14c8442b8 == 0) {
      iVar31 = (int)param_1[5];
      if (iVar31 == 0) {
        uVar30 = 1;
        uVar10 = 0;
        iVar24 = 0;
        iVar17 = 0;
      }
      else {
        puVar14 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar14 = (uint *)(param_1 + 2);
        }
        uVar29 = *puVar14;
        if (uVar29 == 0) {
          iVar24 = iVar31 + 0x1e;
          if (-1 < iVar31 + -1) {
            iVar24 = iVar31 + -1;
          }
          uVar10 = 0;
          uVar25 = (ulonglong)(uint)(iVar24 >> 5);
          if (iVar24 >> 5 < 1) {
            uVar25 = uVar10;
          }
          iVar24 = 0;
          do {
            if (uVar25 == uVar10) goto LAB_143577ca5;
            iVar24 = iVar24 + 0x20;
            uVar29 = puVar14[uVar10 + 1];
            uVar10 = uVar10 + 1;
          } while (uVar29 == 0);
        }
        else {
          uVar10 = 0;
          iVar24 = 0;
        }
        uVar30 = (ulonglong)(-uVar29 & uVar29);
        uVar25 = uVar30 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        iVar17 = (iVar24 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if (iVar31 <= iVar17) {
          iVar17 = iVar31;
        }
      }
      if (iVar17 < iVar31) {
        uVar29 = 0xffffffff;
        do {
          FUN_147bc1688(local_108,*(longlong *)(*param_1 + (longlong)iVar17 * 0x10) + 0x250);
          uVar29 = ~(uint)uVar30 & uVar29;
          puVar14 = (uint *)param_1[4];
          if ((uint *)param_1[4] == (uint *)0x0) {
            puVar14 = (uint *)(param_1 + 2);
          }
          iVar31 = (int)param_1[5];
          iVar17 = (int)uVar10;
          lVar28 = (longlong)iVar17;
          uVar18 = puVar14[lVar28] & uVar29;
          if (uVar18 == 0) {
            iVar19 = iVar31 + 0x1e;
            if (-1 < iVar31 + -1) {
              iVar19 = iVar31 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar16 = iVar19;
            if (iVar19 < iVar17) {
              iVar16 = iVar17;
            }
            if (iVar19 <= iVar17) break;
            lVar22 = 0;
            while( true ) {
              iVar24 = iVar24 + 0x20;
              uVar18 = puVar14[lVar28 + lVar22 + 1];
              if (uVar18 != 0) break;
              lVar22 = lVar22 + 1;
              if (iVar16 - lVar28 == lVar22) goto LAB_143577ca5;
            }
            uVar10 = (ulonglong)(iVar17 + (int)lVar22 + 1);
            uVar29 = 0xffffffff;
          }
          uVar30 = (ulonglong)(-uVar18 & uVar18);
          uVar25 = uVar30 * 2 + 1;
          lVar28 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar28 == 0; lVar28 = lVar28 + -1) {
            }
          }
          iVar17 = (iVar24 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        } while (iVar17 < iVar31);
      }
    }
  }
  else {
LAB_143577ca0:
    local_119 = 0;
  }
LAB_143577ca5:
  FUN_147bc16e6(&local_88,0x10,1,0x200000);
  uVar10 = (ulonglong)local_78 & 0xffffffff;
  if ((-1 < (int)local_78) && ((int)local_78 < local_80)) {
LAB_143577ce6:
    plVar12 = *(longlong **)(local_88.QuadPart + (uVar10 & 0xffffffff) * 8);
    uVar10 = (**(code **)(*plVar12 + 0x2b8))(plVar12);
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      uVar29 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
      uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
      plVar20 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar20 = param_1 + 7;
      }
      iVar31 = *(int *)((longlong)plVar20 +
                       (ulonglong)((int)param_1[9] - 1U & (uVar29 >> 0x10 ^ uVar29)) * 4);
      if (iVar31 != -1) {
        do {
          if (*(ulonglong *)(*param_1 + (longlong)iVar31 * 0x10) == uVar10) {
            iVar31 = (int)param_1[0xf];
            if (iVar31 == 0) {
              uVar25 = 1;
              uVar10 = 0;
              iVar17 = 0;
              iVar24 = 0;
              goto LAB_143577df1;
            }
            puVar14 = (uint *)param_1[0xe];
            if ((uint *)param_1[0xe] == (uint *)0x0) {
              puVar14 = (uint *)(param_1 + 0xc);
            }
            uVar29 = *puVar14;
            if (uVar29 != 0) {
              uVar10 = 0;
              iVar17 = 0;
              goto LAB_143577dbf;
            }
            iVar24 = iVar31 + 0x1e;
            if (-1 < iVar31 + -1) {
              iVar24 = iVar31 + -1;
            }
            uVar10 = 0;
            uVar25 = (ulonglong)(uint)(iVar24 >> 5);
            if (iVar24 >> 5 < 1) {
              uVar25 = uVar10;
            }
            iVar17 = 0;
            goto LAB_143577da6;
          }
          iVar31 = *(int *)((longlong)iVar31 * 0x10 + *param_1 + 8);
        } while (iVar31 != -1);
      }
    }
    goto LAB_143577ed0;
  }
LAB_143577f32:
  if ((undefined1 *)local_88.QuadPart != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_120 = 0;
  local_f8[0] = (code *)0x0;
  local_e8 = (longlong *)0x0;
  local_e8 = (longlong *)FUN_14001cc68(0x30,8);
  *local_e8 = (longlong)&PTR_FUN_14a9dc440;
  local_e8[1] = (longlong)&local_118;
  local_e8[2] = (longlong)local_f8;
  local_e8[3] = (longlong)&local_120;
  local_e8[4] = (longlong)&local_119;
  local_e8[5] = (longlong)local_108;
  if (local_e8 + 1 != (longlong *)0x0) {
    local_f8[0] = FUN_14358123e;
  }
  if (0 < (int)(uint)uStack_110) {
    do {
      pcVar4 = local_f8[0];
      local_88 = *(LARGE_INTEGER *)(local_118 + -8 + (ulonglong)(uint)uStack_110 * 8);
      plVar12 = local_e8;
      if (local_e8 == (longlong *)0x0) {
        plVar12 = local_d8;
      }
      uVar11 = (**(code **)(*plVar12 + 8))();
      (*pcVar4)(uVar11,&local_88);
    } while (0 < (int)(uint)uStack_110);
  }
  if (DAT_14cad8310 == (longlong *)0x0) {
    FUN_1446f470e(&local_88,L"Renderer",1);
    LVar5 = local_88;
    uVar11 = FUN_144a52528();
    DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar11,LVar5.QuadPart);
  }
  plVar12 = (longlong *)(**(code **)(*DAT_14cad8310 + 0xb0))();
  uVar29 = *(uint *)(plVar12 + 5);
  if (uVar29 == 0) {
    uVar30 = 1;
    uVar10 = 0;
    iVar31 = 0;
    uVar18 = 0;
  }
  else {
    puVar14 = (uint *)plVar12[4];
    if ((uint *)plVar12[4] == (uint *)0x0) {
      puVar14 = (uint *)(plVar12 + 2);
    }
    uVar18 = *puVar14;
    if (uVar18 == 0) {
      iVar31 = uVar29 + 0x1e;
      if (-1 < (int)(uVar29 - 1)) {
        iVar31 = uVar29 - 1;
      }
      uVar10 = 0;
      uVar25 = (ulonglong)(uint)(iVar31 >> 5);
      if (iVar31 >> 5 < 1) {
        uVar25 = uVar10;
      }
      iVar31 = 0;
      do {
        if (uVar25 == uVar10) goto LAB_1435780b4;
        iVar31 = iVar31 + 0x20;
        uVar18 = puVar14[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar10 = 0;
      iVar31 = 0;
    }
    uVar30 = (ulonglong)(-uVar18 & uVar18);
    uVar25 = uVar30 * 2 + 1;
    lVar28 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    uVar18 = (iVar31 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
    if ((int)uVar29 <= (int)uVar18) {
      uVar18 = uVar29;
    }
  }
  if (uVar18 != uVar29) {
    lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar2 = (undefined8 *)(lVar28 + 0x308);
    local_140 = (undefined8 *)(lVar28 + 0x310);
    local_130 = 0x527800b400;
    local_150 = (int *)(lVar28 + 0xc60);
    local_138 = (longlong *)(lVar28 + 0x2b8);
    uVar27 = 0xffffffff;
    local_160 = (ulonglong)uVar29;
    local_158 = plVar12;
    local_128 = (uint *)(plVar12 + 2);
    do {
      plVar12 = *(longlong **)(*local_158 + (longlong)(int)uVar18 * 0x10);
      iVar24 = *local_150;
      if (DAT_14c86a9fc == 0) {
        if (iVar24 != 2) {
          if (iVar24 != 1) goto LAB_1435781b3;
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_1435781b8;
          goto LAB_1435781e5;
        }
LAB_1435781b8:
        (**(code **)(*plVar12 + 0x4d0))(plVar12);
      }
      else {
LAB_1435781b3:
        if (iVar24 == 0x10) goto LAB_1435781b8;
LAB_1435781e5:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (*local_150 == 2)) goto LAB_1435781b8;
          if (*local_150 == 1) {
            DVar8 = FUN_140ad26c0();
            DVar9 = GetCurrentThreadId();
            if (DVar8 == DVar9) goto LAB_1435781b8;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar14 = (uint *)*puVar2;
          if (puVar14 != (uint *)0x0) goto LAB_1435783c8;
          do {
            puVar26 = local_140;
            uVar29 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar29 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar29 | 1;
              __tlregdtor(&LAB_14357e25f);
            }
            puVar13 = (undefined4 *)*puVar26;
            *puVar26 = 0;
            if (puVar13 == (undefined4 *)0x0) {
              puVar13 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar13 = 0xffffffff;
            *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar2 = puVar13;
            FUN_140217a48(puVar2);
            puVar14 = (uint *)*puVar2;
LAB_1435783c8:
            uVar25 = *(longlong *)(puVar14 + 0x10) + 7;
            uVar29 = puVar14[0x12];
            while( true ) {
              puVar26 = (undefined8 *)(uVar25 & 0xfffffffffffffff8);
              if (puVar26 + 0x16 <= puVar14 + 0x4000) {
                *(undefined8 **)(puVar14 + 0x10) = puVar26 + 0x16;
                puVar14[0x12] = uVar29 + 1;
                uVar11 = 0;
                FUN_1447247dc(puVar26,0);
                *puVar26 = &PTR_FUN_14a9dc4c0;
                puVar26[0x15] = plVar12;
                uVar23 = (undefined7)((ulonglong)uVar11 >> 8);
                if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                  uVar29 = DAT_14c7585c8 >> 10 & 3;
                  iVar24 = 0;
                  if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar29 < 2) {
                    uVar25 = CONCAT71(uVar23,(&DAT_149e38edc)[uVar29]);
                    iVar24 = 0;
                  }
                  else {
                    uVar25 = CONCAT71(uVar23,2);
                  }
                }
                else {
                  iVar24 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                           *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                  uVar25 = CONCAT71(uVar23,5);
                }
                if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
                  local_148 = uVar25;
                  (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
                  uVar25 = local_148;
                }
                puVar26[0xe] = LowLevelTasks::
                               TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                               TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                               ::vftable;
                puVar26[9] = puVar26;
                puVar26[10] = puVar26;
                lVar28 = *local_138;
                cVar7 = (char)uVar25;
                if (lVar28 == 0) {
                  uVar25 = uVar25 & 0xff;
                  if (cVar7 == '\x06') {
                    uVar25 = 1;
                  }
                  uVar11 = 0;
                }
                else {
                  if (cVar7 == '\x06') {
                    uVar25 = *(ulonglong *)(lVar28 + 0x38) >> 0x3b;
                  }
                  uVar11 = *(undefined8 *)(lVar28 + 0x30);
                }
                puVar26[0xf] = uVar11;
                puVar26[0x10] = (uVar25 << 0x3b) + local_130 | 0xc000000000000000;
                *(int *)((longlong)puVar26 + 0x1c) = iVar24;
                if (puVar26 == (undefined8 *)0x0) {
                  local_88.s.LowPart._0_1_ = 1;
                  FUN_1447439e4(0,&local_88);
                  goto LAB_14357829a;
                }
                LOCK();
                *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
                UNLOCK();
                uVar29 = (uint)local_160;
                local_88.s.LowPart._0_1_ = 1;
                FUN_1447439e4(puVar26,&local_88);
                LOCK();
                piVar1 = (int *)(puVar26 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)*puVar26)(puVar26,1);
                }
                goto LAB_14357829f;
              }
              *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
              LOCK();
              uVar18 = *puVar14;
              *puVar14 = *puVar14 + uVar29 + 1;
              UNLOCK();
              if ((uVar18 ^ uVar29) != 0xffffffff) break;
              puVar14 = (uint *)*puVar2;
              *puVar14 = 0xffffffff;
              *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
              puVar14[0x12] = 0;
              *puVar2 = puVar14;
              uVar25 = (longlong)puVar14 + 0x5f;
              uVar29 = 0;
            }
          } while( true );
        }
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14a9dc460;
        local_88.QuadPart = (LONGLONG)&LAB_1435814be;
        local_168 = &local_88;
        local_60 = plVar12;
        FUN_14005a792(&DAT_14ca9a440,L"ReloadNaniteFixedFunctionBins",&DAT_14caf12a4);
        if ((undefined1 *)local_88.QuadPart != (undefined1 *)0x0) {
          pppuVar21 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar21 = &local_68;
          }
          (*(code *)(*pppuVar21)[2])();
        }
      }
LAB_14357829a:
      uVar29 = (uint)local_160;
LAB_14357829f:
      uVar27 = uVar27 & ~(uint)uVar30;
      puVar14 = (uint *)local_158[4];
      if ((uint *)local_158[4] == (uint *)0x0) {
        puVar14 = local_128;
      }
      uVar3 = *(uint *)(local_158 + 5);
      iVar24 = (int)uVar10;
      lVar28 = (longlong)iVar24;
      uVar18 = puVar14[lVar28] & uVar27;
      if (uVar18 == 0) {
        iVar17 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar17 = uVar3 - 1;
        }
        iVar17 = iVar17 >> 5;
        iVar31 = iVar31 + 0x20;
        iVar19 = iVar17;
        if (iVar17 < iVar24) {
          iVar19 = iVar24;
        }
        if (iVar24 < iVar17) {
          lVar22 = 0;
          do {
            uVar18 = puVar14[lVar28 + lVar22 + 1];
            if (uVar18 != 0) {
              uVar10 = (ulonglong)(iVar24 + (int)lVar22 + 1);
              uVar27 = 0xffffffff;
              goto LAB_143578323;
            }
            iVar31 = iVar31 + 0x20;
            lVar22 = lVar22 + 1;
          } while (iVar19 - lVar28 != lVar22);
          uVar27 = 0xffffffff;
          iVar24 = iVar19;
        }
        uVar10 = (ulonglong)(iVar24 + 1);
        uVar29 = (uint)local_160;
        uVar18 = uVar3;
      }
      else {
LAB_143578323:
        uVar30 = (ulonglong)(-uVar18 & uVar18);
        uVar25 = uVar30 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        uVar18 = (iVar31 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if ((int)uVar3 <= (int)uVar18) {
          uVar18 = uVar3;
        }
      }
    } while (uVar18 != uVar29);
  }
LAB_1435780b4:
  if (local_119 == 0) {
    lVar28 = param_1[0x14];
    if (lVar28 == 0) {
      lVar28 = param_1[0x15];
      if (lVar28 == 0) goto LAB_1435786bb;
      param_1[0x15] = 0;
      FUN_1416525c2(lVar28);
    }
    else {
      param_1[0x14] = 0;
      FUN_145c1a9d0(lVar28);
    }
    FUN_1400020a8(lVar28);
  }
  else {
    if (DAT_14cad8310 == (longlong *)0x0) {
      FUN_1446f470e(&local_88,L"Renderer",1);
      LVar5 = local_88;
      uVar11 = FUN_144a52528();
      DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar11,LVar5.QuadPart);
    }
    (**(code **)(*DAT_14cad8310 + 0x68))(DAT_14cad8310,local_108);
  }
LAB_1435786bb:
  QueryPerformanceCounter(&local_88);
  if (local_f8[0] != (code *)0x0) {
    plVar12 = local_d8;
    if (local_e8 != (longlong *)0x0) {
      plVar12 = local_e8;
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1405ee12c(&DAT_14ca966d0,local_b0);
  FUN_14004710c(local_98);
LAB_14357872e:
  lVar28 = param_1[0x15];
  if (lVar28 != 0) {
    FUN_1416525c2(lVar28);
    FUN_1400020a8(lVar28);
  }
  lVar28 = param_1[0x14];
  if (lVar28 != 0) {
    FUN_145c1a9d0(lVar28);
    FUN_1400020a8(lVar28);
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dc9c0(param_1 + 10);
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_147bc7360(param_1);
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    iVar17 = iVar17 + 0x20;
    uVar29 = puVar14[uVar10 + 1];
    uVar10 = uVar10 + 1;
    if (uVar29 != 0) break;
LAB_143577da6:
    if (uVar25 == uVar10) goto LAB_143577ed0;
  }
LAB_143577dbf:
  uVar25 = (ulonglong)(-uVar29 & uVar29);
  uVar30 = uVar25 * 2 + 1;
  lVar28 = 0x3f;
  if (uVar30 != 0) {
    for (; uVar30 >> lVar28 == 0; lVar28 = lVar28 + -1) {
    }
  }
  iVar24 = (iVar17 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
  if (iVar31 <= iVar24) {
    iVar24 = iVar31;
  }
LAB_143577df1:
  if (iVar24 < iVar31) {
    uVar29 = 0xffffffff;
    do {
      cVar7 = (**(code **)(*plVar12 + 0x2d8))
                        (plVar12,*(undefined8 *)(param_1[10] + (longlong)iVar24 * 0x10));
      uVar30 = uStack_110;
      if (cVar7 != '\0') {
        lVar28 = (longlong)(int)(uint)uStack_110;
        uVar29 = (uint)uStack_110 + 1;
        uStack_110 = CONCAT44(uStack_110._4_4_,uVar29);
        if (uStack_110._4_4_ < uVar29) {
          FUN_147bc7976(&local_118,uVar30 & 0xffffffff);
        }
        *(longlong **)(local_118 + lVar28 * 8) = plVar12;
        break;
      }
      uVar29 = uVar29 & ~(uint)uVar25;
      puVar14 = (uint *)param_1[0xe];
      if ((uint *)param_1[0xe] == (uint *)0x0) {
        puVar14 = (uint *)(param_1 + 0xc);
      }
      iVar31 = (int)param_1[0xf];
      iVar24 = (int)uVar10;
      lVar28 = (longlong)iVar24;
      uVar18 = puVar14[lVar28] & uVar29;
      if (uVar18 == 0) {
        iVar19 = iVar31 + 0x1e;
        if (-1 < iVar31 + -1) {
          iVar19 = iVar31 + -1;
        }
        iVar19 = iVar19 >> 5;
        iVar16 = iVar19;
        if (iVar19 < iVar24) {
          iVar16 = iVar24;
        }
        if (iVar19 <= iVar24) break;
        lVar22 = 0;
        while( true ) {
          iVar17 = iVar17 + 0x20;
          uVar18 = puVar14[lVar28 + lVar22 + 1];
          if (uVar18 != 0) break;
          lVar22 = lVar22 + 1;
          if (iVar16 - lVar28 == lVar22) goto LAB_143577ed0;
        }
        uVar10 = (ulonglong)(iVar24 + (int)lVar22 + 1);
        uVar29 = 0xffffffff;
      }
      uVar25 = (ulonglong)(-uVar18 & uVar18);
      uVar30 = uVar25 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      iVar24 = (iVar17 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
    } while (iVar24 < iVar31);
  }
LAB_143577ed0:
  uVar10 = (longlong)(int)local_78;
  do {
    uVar25 = uVar10;
    uVar10 = uVar25 + 1;
    local_78 = (undefined ***)CONCAT44(local_78._4_4_,(int)uVar10);
    if ((longlong)local_80 <= (longlong)uVar10) break;
  } while (*(longlong *)(local_88.QuadPart + uVar10 * 8) == 0);
  if (((longlong)uVar25 < -1) || (local_80 <= (int)uVar10)) goto LAB_143577f32;
  goto LAB_143577ce6;
}



// FUNCTION 143578a24 FUN_143578a24 body=151 status=ok
// SIG undefined FUN_143578a24(void)

void FUN_143578a24(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,0x1427dd501,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
      return;
    }
  }
  return;
}



// FUNCTION 143578ac5 FUN_143578ac5 body=69 status=ok
// SIG undefined FUN_143578ac5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143578ac5(void)

{
  _DAT_14caec550 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143578b07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caec558,1);
  return;
}



// FUNCTION 143578b0a FUN_143578b0a body=69 status=ok
// SIG undefined FUN_143578b0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143578b0a(void)

{
  _DAT_14caec560 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143578b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caec568,1);
  return;
}



// FUNCTION 143578b70 FUN_143578b70 body=1184 status=ok
// SIG undefined FUN_143578b70(void)

undefined8 FUN_143578b70(undefined8 param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined1 *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143578bad;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143578bb2;
      goto LAB_143578bd8;
    }
  }
  else {
LAB_143578bad:
    if (iVar6 != 0x10) {
LAB_143578bd8:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143578bb2;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143578bb2;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143578d3a;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14357e25f);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143578d3a:
          puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar15 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143578dba;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143578dba:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14a9db828;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
        }
        puVar15[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar15[9] = puVar15;
        puVar15[10] = puVar15;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar15[0xf] = uVar11;
        puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar6;
        if (puVar15 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar15);
          LOCK();
          piVar1 = (int *)(puVar15 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar15)(puVar15,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a2f19c0;
        local_40 = &LAB_14357fd22;
        local_68[0] = &LAB_1448467b2;
        FUN_14005a792(&DAT_14ca9a440,L"BeginAsyncUniformExpressionCacheUpdates",&DAT_14caf1224);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143578c76;
    }
  }
LAB_143578bb2:
  DAT_14caec578 = DAT_14caec578 + 1;
LAB_143578c76:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143579012 FUN_143579012 body=1173 status=ok
// SIG undefined FUN_143579012(void)

void FUN_143579012(void)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined1 *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 == 2) goto LAB_143579052;
    if (iVar6 != 1) goto LAB_14357904d;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_143579052;
  }
  else {
LAB_14357904d:
    if (iVar6 == 0x10) goto LAB_143579052;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2)) {
LAB_143579052:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
    if (iVar6 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143579052;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar10 = (uint *)*puVar2;
    if (puVar10 != (uint *)0x0) goto LAB_1435791ea;
    while( true ) {
      uVar12 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar12 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar12 | 1;
        __tlregdtor(&LAB_14357e25f);
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar9 = *(undefined4 **)(lVar4 + 0x310);
      *(undefined8 *)(lVar4 + 0x310) = 0;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar9 = 0xffffffff;
      *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
      puVar9[0x12] = 0;
      *puVar2 = puVar9;
      FUN_140217a48(puVar2);
      puVar10 = (uint *)*puVar2;
LAB_1435791ea:
      puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar14 = (uint *)(puVar16 + 0x16);
      uVar12 = puVar10[0x12];
      if (puVar14 <= puVar10 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
        LOCK();
        uVar3 = *puVar10;
        *puVar10 = *puVar10 + uVar12 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar12) != 0xffffffff) break;
        puVar10 = (uint *)*puVar2;
        *puVar10 = 0xffffffff;
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar16 + 0x16);
        uVar12 = 0;
        if (puVar14 <= puVar10 + 0x4000) {
          uVar12 = 1;
          goto LAB_14357926a;
        }
      }
    }
    uVar12 = uVar12 + 1;
LAB_14357926a:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar12;
    iVar6 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14a9db888;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar12 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
        uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
        iVar6 = 0;
      }
      else {
        uVar15 = 2;
      }
    }
    else {
      iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar15 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar4 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar4 == 0) {
      uVar5 = 1;
      if ((char)uVar15 != '\x06') {
        uVar5 = uVar15;
      }
      uVar15 = uVar5;
      uVar11 = 0;
    }
    else {
      if ((char)uVar15 == '\x06') {
        uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
      }
      uVar11 = *(undefined8 *)(lVar4 + 0x30);
    }
    puVar16[0xf] = uVar11;
    puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar6;
    if (puVar16 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14a2f19c0;
    local_40 = &LAB_14357fe7a;
    local_68[0] = &LAB_1448467b2;
    FUN_14005a792(&DAT_14ca9a440,L"EndAsyncUniformExpressionCacheUpdates",&DAT_14caf1228);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar13 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar13 = &local_48;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435794b8 FUN_1435794b8 body=290 status=ok
// SIG undefined FUN_1435794b8(void)

void FUN_1435794b8(undefined8 param_1,longlong *param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1447a4a8e(param_2,0);
  cVar3 = (**(code **)(*param_2 + 0x68))(param_2);
  if (cVar3 != '\0') {
    pcVar1 = (char *)((longlong)param_2 + 0xad);
    uVar6 = DAT_14caec4b4 | 1 << ((byte)DAT_14c760db4 & 0x1f);
    do {
      uVar5 = -uVar6 & uVar6;
      iVar2 = 0;
      if (uVar6 != 0) {
        for (; (uVar6 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
        }
      }
      if (uVar5 == 0) {
        iVar2 = 0;
      }
      lVar4 = (**(code **)(*param_2 + 0x30))(param_2,iVar2);
      LOCK();
      bVar7 = *(char *)((longlong)param_2 + 0xad) == '\0';
      if (bVar7) {
        *(char *)((longlong)param_2 + 0xad) = '\x01';
      }
      UNLOCK();
      if (!bVar7) {
        FUN_1447d2058(pcVar1);
      }
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x18) != param_2[9])) {
        FUN_14490df4a();
        local_50 = 0;
        local_68 = 0;
        local_60 = param_2;
        local_58 = lVar4;
        FUN_140e663a2(param_2,&DAT_14ca85100,param_2 + 2,&local_60);
      }
      LOCK();
      cVar3 = *pcVar1;
      if (cVar3 == '\x01') {
        *pcVar1 = '\0';
      }
      UNLOCK();
      if (cVar3 != '\x01') {
        FUN_14008cdb0(pcVar1);
      }
      bVar7 = uVar5 != uVar6;
      uVar6 = uVar5 ^ uVar6;
    } while (bVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435795db FUN_1435795db body=69 status=ok
// SIG undefined FUN_1435795db(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435795db(void)

{
  _DAT_14caec580 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014357961d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caec588,1);
  return;
}



// FUNCTION 143579622 FUN_143579622 body=2001 status=ok
// SIG undefined FUN_143579622(void)

void FUN_143579622(ulonglong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulonglong *puVar15;
  longlong **pplVar16;
  longlong lVar17;
  longlong **pplVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong *puVar21;
  longlong lVar22;
  int iVar23;
  longlong **pplVar24;
  uint uVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined1 auStack_f8 [32];
  longlong **local_d8;
  char local_c1;
  ulonglong local_c0;
  int local_b8;
  int local_b4;
  int *local_b0;
  ulonglong *local_a8;
  longlong **local_a0;
  longlong *local_98;
  ulonglong uStack_90;
  longlong *local_80;
  undefined8 local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b0 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
  local_b8 = *local_b0;
  if (local_b8 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    local_b8 = *local_b0;
  }
  if ((local_b8 == 0x60000000) || (local_b8 == 0)) {
    *local_b0 = 0x40000010;
  }
  local_98 = (longlong *)0x0;
  uStack_90 = 0;
  local_c1 = (char)param_1[1];
  pplVar18 = (longlong **)0x0;
  pplVar24 = &local_98;
  if (local_c1 == '\0') {
    pplVar24 = pplVar18;
  }
  puVar21 = param_1 + 4;
  iVar4 = (int)param_1[7];
  if (iVar4 == 0) {
    uVar19 = 1;
    iVar23 = 0;
    iVar11 = 0;
  }
  else {
    puVar15 = (ulonglong *)param_1[6];
    if ((ulonglong *)param_1[6] == (ulonglong *)0x0) {
      puVar15 = puVar21;
    }
    uVar25 = (uint)*puVar15;
    if (uVar25 == 0) {
      iVar23 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar23 = iVar4 + -1;
      }
      pplVar18 = (longlong **)0x0;
      pplVar16 = (longlong **)(ulonglong)(uint)(iVar23 >> 5);
      if (iVar23 >> 5 < 1) {
        pplVar16 = pplVar18;
      }
      iVar23 = 0;
      do {
        if (pplVar16 == pplVar18) goto LAB_1435798b4;
        iVar23 = iVar23 + 0x20;
        uVar25 = *(uint *)((longlong)puVar15 + (longlong)pplVar18 * 4 + 4);
        pplVar18 = (longlong **)((longlong)pplVar18 + 1);
      } while (uVar25 == 0);
    }
    else {
      pplVar18 = (longlong **)0x0;
      iVar23 = 0;
    }
    uVar19 = (ulonglong)(-uVar25 & uVar25);
    uVar5 = uVar19 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    iVar11 = (iVar23 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar11) {
      iVar11 = iVar4;
    }
  }
  if (iVar11 < iVar4) {
    uVar25 = 0xffffffff;
    local_a8 = puVar21;
    do {
      plVar2 = *(longlong **)(param_1[2] + (longlong)iVar11 * 0x10);
      if ((*(byte *)((longlong)plVar2 + 0xac) & 2) != 0) {
        FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialRenderProxy.cpp",0x374,
                      L"FMaterialRenderProxy deleted and GC mark was: %i",
                      *(byte *)((longlong)plVar2 + 0xac) & 1);
      }
      cVar3 = (**(code **)(*plVar2 + 0x68))(plVar2);
      if (cVar3 != '\0') {
        uVar12 = DAT_14caec4b4 | 1 << ((byte)DAT_14c760db4 & 0x1f);
        local_b4 = iVar23;
        local_a0 = pplVar18;
        do {
          uVar20 = -uVar12 & uVar12;
          iVar4 = 0;
          if (uVar12 != 0) {
            for (; (uVar12 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
            }
          }
          if (uVar20 == 0) {
            iVar4 = 0;
          }
          uVar5 = (**(code **)(*plVar2 + 0x30))(plVar2,iVar4);
          if ((uVar5 != 0) && (*(longlong *)(uVar5 + 0x18) != 0)) {
            local_70 = local_70 & 0xffffffffffffff00;
            local_d8 = pplVar24;
            local_80 = plVar2;
            local_78 = uVar5;
            FUN_140e663a2(plVar2,*param_1,plVar2 + 2,&local_80);
          }
          bVar27 = uVar20 != uVar12;
          uVar12 = uVar20 ^ uVar12;
        } while (bVar27);
        (**(code **)(*plVar2 + 0x78))(plVar2);
        pplVar18 = local_a0;
        puVar21 = local_a8;
        iVar23 = local_b4;
      }
      uVar25 = uVar25 & ~(uint)uVar19;
      puVar15 = (ulonglong *)param_1[6];
      if ((ulonglong *)param_1[6] == (ulonglong *)0x0) {
        puVar15 = puVar21;
      }
      iVar4 = (int)param_1[7];
      iVar11 = (int)pplVar18;
      lVar22 = (longlong)iVar11;
      uVar12 = *(uint *)((longlong)puVar15 + lVar22 * 4) & uVar25;
      if (uVar12 == 0) {
        iVar13 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar13 = iVar4 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar14 = iVar13;
        if (iVar13 < iVar11) {
          iVar14 = iVar11;
        }
        if (iVar13 <= iVar11) break;
        lVar17 = 0;
        while( true ) {
          iVar23 = iVar23 + 0x20;
          uVar12 = *(uint *)((longlong)puVar15 + lVar17 * 4 + lVar22 * 4 + 4);
          if (uVar12 != 0) break;
          lVar17 = lVar17 + 1;
          if (iVar14 - lVar22 == lVar17) goto LAB_1435798b4;
        }
        pplVar18 = (longlong **)(ulonglong)(iVar11 + (int)lVar17 + 1);
        uVar25 = 0xffffffff;
      }
      uVar19 = (ulonglong)(-uVar12 & uVar12);
      uVar5 = uVar19 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iVar11 = (iVar23 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar4);
  }
LAB_1435798b4:
  uVar19 = uStack_90;
  if (local_c1 != '\0') {
    if ((int)uStack_90 == 0) {
      FUN_1447850c6();
    }
    else {
      local_80 = local_98;
      local_98 = (longlong *)0x0;
      uStack_90 = 0;
      local_78 = uVar19;
      local_70 = *param_1;
      puVar6 = TlsGetValue(DAT_14c896140);
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        *puVar6 = 0;
        puVar6[1] = 0;
        *(undefined4 *)(puVar6 + 2) = 0;
        TlsSetValue(DAT_14c896140,puVar6);
      }
      puVar9 = (undefined8 *)puVar6[1];
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)*puVar6;
        if (puVar9 == (undefined8 *)0x0) {
          uVar25 = (uint)DAT_14c896180;
          uVar19 = DAT_14c896180;
          while (DAT_14c896180 = uVar19, local_68 = uVar19, (uVar19 & 0x3ffffff) != 0) {
            local_c0 = (uVar19 & 0xfffffffffc000000) + 0x4000000;
            if (local_c0 >> 0x1a < uVar19 >> 0x1a) {
              FUN_14000f986(0x3a83126f);
            }
            uVar5 = (ulonglong)((uVar25 & 0x3ffffff) >> 0xe);
            uVar26 = (ulonglong)((uint)uVar19 & 0x3fff);
            local_c0 = local_c0 & 0xfffffffffc000000 |
                       (ulonglong)
                       *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar5 * 8) + 0x10 + uVar26 * 0x18);
            LOCK();
            bVar27 = local_68 == DAT_14c896180;
            uVar19 = local_c0;
            if (!bVar27) {
              uVar19 = DAT_14c896180;
            }
            DAT_14c896180 = uVar19;
            UNLOCK();
            if (bVar27) {
              *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar5 * 8) + uVar26 * 0x18 + 0x10) = 0;
              puVar9 = *(undefined8 **)
                        (*(longlong *)(&DAT_14c833b00 + uVar5 * 8) + 8 +
                        (ulonglong)(uVar25 & 0x3fff) * 0x18);
              FUN_1447d080c(uVar25 & 0x3ffffff);
              puVar6[1] = puVar9;
              if (puVar9 != (undefined8 *)0x0) goto LAB_143579be0;
              goto LAB_143579dc7;
            }
            uVar25 = (uint)DAT_14c896180;
            uVar19 = DAT_14c896180;
          }
          puVar6[1] = 0;
LAB_143579dc7:
          puVar9 = (undefined8 *)FUN_14001cc68(0x10000,0);
          puVar6[1] = puVar9;
          iVar4 = 0xff;
          puVar10 = puVar9;
          do {
            puVar8 = puVar10 + 0x20;
            *puVar10 = puVar8;
            iVar4 = iVar4 + -1;
            puVar10 = puVar8;
          } while (iVar4 != 0);
        }
        else {
          puVar6[1] = puVar9;
          puVar8 = puVar6;
        }
        *puVar8 = 0;
LAB_143579be0:
        *(undefined4 *)(puVar6 + 2) = 0x100;
        iVar4 = 0xff;
      }
      else {
        iVar4 = *(int *)(puVar6 + 2) + -1;
      }
      puVar6[1] = *puVar9;
      *(int *)(puVar6 + 2) = iVar4;
      *puVar9 = UE::Tasks::Private::FTaskBase::vftable;
      puVar9[1] = &DAT_100000002;
      puVar9[2] = 0;
      *(undefined4 *)(puVar9 + 3) = 0;
      *(undefined4 *)(puVar9 + 4) = 0xffffffff;
      puVar9[6] = 0;
      puVar9[7] = 0x100000000;
      *(undefined1 *)(puVar9 + 8) = 1;
      puVar9[0xe] = LowLevelTasks::
                    TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                    TTaskDelegateDummy::vftable;
      puVar9[0xf] = 0;
      puVar9[0x10] = 0xe800000000000020;
      puVar9[0x12] = 0;
      puVar9[0x13] = 0x100000000;
      *(undefined2 *)(puVar9 + 0x14) = 0;
      LOCK();
      bVar27 = *(char *)(puVar9 + 8) == '\x01';
      if (bVar27) {
        *(char *)(puVar9 + 8) = '\0';
      }
      UNLOCK();
      if (!bVar27) {
        FUN_14008cdb0(puVar9 + 8);
      }
      *puVar9 = &PTR_FUN_14a9da8a8;
      if (*(code **)(puVar9[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar9[0xe] + 0x18))(puVar9 + 0xe,puVar9 + 9);
      }
      puVar9[0xe] = LowLevelTasks::
                    TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                    TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                    ::vftable;
      puVar9[9] = puVar9;
      puVar9[10] = puVar9;
      lVar22 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar22 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(lVar22 + 0x30);
      }
      puVar9[0xf] = uVar7;
      puVar9[0x10] = 0xc8000052a76a0480;
      *(undefined4 *)((longlong)puVar9 + 0x1c) = 0;
      puVar9[0x15] = local_80;
      local_80 = (longlong *)0x0;
      *(undefined4 *)(puVar9 + 0x16) = (undefined4)local_78;
      *(undefined4 *)((longlong)puVar9 + 0xb4) = local_78._4_4_;
      local_78 = 0;
      puVar9[0x17] = local_70;
      *puVar9 = &PTR_FUN_14a9da898;
      FUN_1400e88c2(puVar9,&DAT_14caec570);
      local_68 = CONCAT71(local_68._1_7_,1);
      FUN_1447439e4(puVar9);
      FUN_140137c57(local_80,local_78 & 0xffffffff);
      FUN_140137bf4(&local_80);
      puVar6 = DAT_14caec570;
      if (DAT_14caec570 != puVar9) {
        DAT_14caec570 = puVar9;
        if (puVar9 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
          UNLOCK();
        }
        if (puVar6 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar6 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar6)(puVar6,1);
          }
        }
      }
      if (puVar9 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar9 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar9)(puVar9,1);
        }
      }
    }
  }
  FUN_140137c57(local_98,uStack_90 & 0xffffffff);
  FUN_140137bf4(&local_98);
  if ((local_b8 == 0x60000000) || (local_b8 == 0)) {
    *local_b0 = local_b8;
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143579df4 FUN_143579df4 body=145 status=ok
// SIG undefined FUN_143579df4(void)

void FUN_143579df4(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 in_XMM2 [16];
  undefined1 auVar6 [16];
  
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *(double *)(param_1 + 0xb0);
  auVar6 = roundsd(in_XMM2,auVar6,9);
  dVar5 = auVar6._0_8_;
  auVar2._0_8_ = (*(double *)(param_1 + 0xb0) - dVar5) * 2147483647.0;
  auVar2._8_8_ = 0;
  auVar6 = roundsd(auVar2,auVar2,9);
  dVar1 = auVar6._0_8_;
  if (2147483647.0 <= dVar5) {
    dVar5 = 2147483647.0;
  }
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  if (2147483647.0 <= dVar1) {
    dVar1 = 2147483647.0;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  *param_2 = CONCAT44((int)dVar1,(int)dVar5);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(double *)(param_1 + 0xb8);
  auVar6 = roundsd(ZEXT816(0),auVar3,9);
  dVar5 = auVar6._0_8_;
  auVar4._0_8_ = (*(double *)(param_1 + 0xb8) - dVar5) * 2147483647.0;
  auVar4._8_8_ = 0;
  auVar6 = roundsd(auVar4,auVar4,9);
  dVar1 = auVar6._0_8_;
  if (2147483647.0 <= dVar5) {
    dVar5 = 2147483647.0;
  }
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  if (2147483647.0 <= dVar1) {
    dVar1 = 2147483647.0;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  param_2[1] = CONCAT44((int)dVar1,(int)dVar5);
  return;
}



// FUNCTION 143579e85 FUN_143579e85 body=171 status=ok
// SIG undefined FUN_143579e85(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143579e85(void)

{
  DAT_14caec5e0 = 0;
  if (DAT_14caec5d8 != 0) {
    FUN_1400020a8();
  }
  _DAT_14caec5a0 = 0;
  if (DAT_14caec5a4 != 0) {
    FUN_14474875a(&DAT_14caec598,0);
  }
  _DAT_14caec5c8 = 0xffffffff;
  _DAT_14caec5c0 = 0;
  if (0x80 < DAT_14caec5c4) {
    DAT_14caec5c4 = 0x80;
    FUN_1446efbd8(&DAT_14caec5a8,0);
  }
  if (DAT_14caec5b8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caec598 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143579f30 FUN_143579f30 body=69 status=ok
// SIG undefined FUN_143579f30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143579f30(void)

{
  _DAT_14caec5f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143579f72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caec600,1);
  return;
}



// FUNCTION 143579f75 FUN_143579f75 body=69 status=ok
// SIG undefined FUN_143579f75(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143579f75(void)

{
  _DAT_14caec608 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143579fb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caec610,1);
  return;
}



// FUNCTION 143579fc8 FUN_143579fc8 body=547 status=ok
// SIG undefined FUN_143579fc8(void)

void FUN_143579fc8(void)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  
  plVar16 = (longlong *)&DAT_14caef6c0;
  do {
    *(undefined4 *)(plVar16 + -1) = 0;
    if (plVar16[-2] != 0) {
      FUN_1400020a8();
    }
    puVar1 = (uint *)(plVar16 + -8);
    iVar3 = (int)plVar16[-5];
    if (iVar3 == 0) {
      uVar5 = 0;
      uVar13 = 1;
      iVar6 = 0;
      iVar8 = 0;
    }
    else {
      puVar9 = (uint *)plVar16[-6];
      if ((uint *)plVar16[-6] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      uVar11 = *puVar9;
      if (uVar11 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        uVar5 = 0;
        uVar10 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar10 = uVar5;
        }
        iVar6 = 0;
        do {
          if (uVar10 == uVar5) goto LAB_14357a023;
          iVar6 = iVar6 + 0x20;
          uVar11 = puVar9[uVar5 + 1];
          uVar5 = uVar5 + 1;
        } while (uVar11 == 0);
      }
      else {
        uVar5 = 0;
        iVar6 = 0;
      }
      uVar13 = (ulonglong)(-uVar11 & uVar11);
      uVar10 = uVar13 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar8 = (iVar6 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar8) {
        iVar8 = iVar3;
      }
    }
    if (iVar8 < iVar3) {
      puVar9 = (uint *)plVar16[-6];
      if ((uint *)plVar16[-6] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      iVar8 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar8 = iVar3 + -1;
      }
      uVar11 = 0xffffffff;
      do {
        uVar11 = ~(uint)uVar13 & uVar11;
        iVar4 = (int)uVar5;
        lVar14 = (longlong)iVar4;
        uVar7 = puVar9[lVar14] & uVar11;
        if (uVar7 == 0) {
          iVar12 = iVar8 >> 5;
          if (iVar8 >> 5 < iVar4) {
            iVar12 = iVar4;
          }
          lVar15 = 0;
          do {
            if (iVar12 - lVar14 == lVar15) goto LAB_14357a023;
            iVar6 = iVar6 + 0x20;
            uVar7 = puVar9[lVar14 + lVar15 + 1];
            lVar15 = lVar15 + 1;
          } while (uVar7 == 0);
          uVar5 = (ulonglong)(uint)(iVar4 + (int)lVar15);
          uVar11 = 0xffffffff;
        }
        uVar13 = (ulonglong)(-uVar7 & uVar7);
        uVar10 = uVar13 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
      } while ((int)((iVar6 - ((uint)lVar14 ^ 0x3f)) + 0x3e) < iVar3);
    }
LAB_14357a023:
    plVar2 = plVar16 + -10;
    *(undefined4 *)(plVar16 + -9) = 0;
    if (*(int *)((longlong)plVar16 + -0x44) != 0) {
      FUN_144748838(plVar2);
    }
    plVar16[-4] = 0xffffffff;
    *(undefined4 *)(plVar16 + -5) = 0;
    if (0x80 < *(uint *)((longlong)plVar16 + -0x24)) {
      *(undefined4 *)((longlong)plVar16 + -0x24) = 0x80;
      FUN_1446efbd8(puVar1);
    }
    if (plVar16[-6] != 0) {
      FUN_1400020a8();
    }
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    plVar16 = plVar2;
    if (plVar2 == (longlong *)&DAT_14caec650) {
      return;
    }
  } while( true );
}



// FUNCTION 14357a1ec FUN_14357a1ec body=1532 status=ok
// SIG undefined FUN_14357a1ec(void)

void FUN_14357a1ec(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined ***pppuVar16;
  uint *puVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined1 auStack_a8 [32];
  code **local_88;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong *local_50;
  longlong local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
    bVar6 = 0;
  }
  else {
    bVar6 = FUN_14357a7ee(param_2,param_1);
  }
  FUN_1403e5ae2(param_1 + 2,param_2);
  if ((param_1[2] != 0) && (lVar10 = (**(code **)(*param_1 + 0x4c0))(param_1), lVar10 != 0)) {
LAB_14357a247:
    lVar11 = lVar10;
    lVar10 = lVar11;
    if (*(longlong *)(lVar11 + 0x20) != 0) goto code_r0x00014357a256;
    goto LAB_14357a26b;
  }
LAB_14357a276:
  *(uint *)(param_1 + 5) = (*(uint *)(param_1 + 5) & 0xfffffff7) + (uint)bVar6 * 8;
  if (param_1 != (longlong *)0x0) {
    LOCK();
    plVar1 = param_1 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + 1;
    UNLOCK();
    if ((int)lVar10 < 0) {
      FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9ae,
                    L"FMaterial::AddRef, Invalid NumDebugRefs %d",(int)lVar10 + 1);
    }
  }
  if (param_2 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caec620);
    *(int *)(param_2 + 0x74) = *(int *)(param_2 + 0x74) + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caec620);
  }
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar10 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_14357a2fc;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14357a305;
      goto LAB_14357a391;
    }
  }
  else {
LAB_14357a2fc:
    if (iVar7 != 0x10) {
LAB_14357a391:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar10 + 0xc60), iVar7 == 2))
        goto LAB_14357a305;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_14357a305;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar3 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar3;
        if (puVar13 != (uint *)0x0) goto LAB_14357a4fc;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_14357e25f);
          }
          lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar10 + 0x310);
          *(undefined8 *)(lVar10 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar3 = puVar12;
          FUN_140217a48(puVar3);
          puVar13 = (uint *)*puVar3;
LAB_14357a4fc:
          puVar19 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar19 + 0x18);
          uVar15 = puVar13[0x12];
          if (puVar17 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar4 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar3;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar3 = puVar13;
            puVar19 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar17 = (uint *)(puVar19 + 0x18);
            uVar15 = 0;
            if (puVar17 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_14357a57c;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_14357a57c:
        *(uint **)(puVar13 + 0x10) = puVar17;
        puVar13[0x12] = uVar15;
        iVar7 = 0;
        FUN_1447247dc(puVar19,0);
        *puVar19 = &PTR_FUN_14a9dc2b0;
        puVar19[0x15] = param_1;
        puVar19[0x16] = param_2;
        *(byte *)(puVar19 + 0x17) = bVar6;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar7 = 0;
          }
          else {
            uVar18 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar18 = 5;
        }
        if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
        }
        puVar19[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar19[9] = puVar19;
        puVar19[10] = puVar19;
        lVar10 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar10 == 0) {
          uVar5 = 1;
          if ((char)uVar18 != '\x06') {
            uVar5 = uVar18;
          }
          uVar18 = uVar5;
          uVar14 = 0;
        }
        else {
          if ((char)uVar18 == '\x06') {
            uVar18 = *(ulonglong *)(lVar10 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar10 + 0x30);
        }
        puVar19[0xf] = uVar14;
        puVar19[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar19 + 0x1c) = iVar7;
        if (puVar19 == (undefined8 *)0x0) {
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(puVar19);
          LOCK();
          piVar2 = (int *)(puVar19 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar19)(puVar19,1);
          }
        }
      }
      else {
        local_88 = local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14a9dc260;
        local_78[0] = FUN_14358050e;
        local_50 = param_1;
        local_48 = param_2;
        local_40 = bVar6;
        FUN_14005a792(&DAT_14ca9a440,L"SetGameThreadShaderMap",&DAT_14caf1290);
        if (local_78[0] != (code *)0x0) {
          pppuVar16 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar16 = &local_58;
          }
          (*(code *)(*pppuVar16)[2])();
        }
      }
      goto LAB_14357a438;
    }
  }
LAB_14357a305:
  lVar10 = param_1[3];
  param_1[3] = param_2;
  if (lVar10 != 0) {
    FUN_1401fc67c();
  }
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xffffffef | (uint)bVar6 << 4;
  if (param_1 != (longlong *)0x0) {
    LOCK();
    param_1 = param_1 + 1;
    lVar10 = *param_1;
    *(int *)param_1 = (int)*param_1 + -1;
    UNLOCK();
    if ((int)lVar10 < 1) {
      FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9b6,
                    L"FMaterial::Release, Invalid NumDebugRefs %d",(int)lVar10 + -1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
    }
  }
LAB_14357a438:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x00014357a256:
  lVar10 = *(longlong *)(lVar11 + 0x20);
  if ((*(uint *)(lVar11 + 8) >> 0x1c & 1) != 0) {
    lVar10 = FUN_142840154(lVar11);
LAB_14357a26b:
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(lVar11 + 0x20);
      goto LAB_14357a247;
    }
    goto LAB_14357a276;
  }
  goto LAB_14357a247;
}



// FUNCTION 14357a7ee FUN_14357a7ee body=4947 status=ok
// SIG undefined FUN_14357a7ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14357a7ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ushort *puVar17;
  ulonglong *puVar18;
  uint uVar19;
  ulonglong *puVar20;
  ulonglong *puVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  size_t _Size;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  int iVar29;
  int iVar30;
  longlong lVar31;
  longlong lVar32;
  undefined1 auStack_248 [32];
  int local_228;
  undefined4 local_220;
  ushort local_20a;
  ushort *local_208;
  ulonglong *local_200;
  ushort *local_1f8;
  longlong *local_1f0;
  longlong local_1e8;
  ulonglong *local_1e0;
  longlong *local_1d8;
  ulonglong *local_1d0;
  longlong *local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  ushort *local_1b0;
  undefined8 *local_1a8;
  longlong *local_1a0;
  void *local_198;
  int local_190;
  undefined4 local_18c;
  void *local_188;
  int local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  int local_13c;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ushort local_f0;
  undefined4 local_ec;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined1 local_c4 [16];
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  char local_98;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar32 = *(longlong *)(param_1 + 0x28);
  local_20a = 0x9b;
  if (DAT_14ca80058 != DAT_14ca80084) {
    lVar16 = *(longlong *)(lVar32 + 0x58);
    uVar6 = (uint)((ulonglong)lVar16 >> 0x10);
    uVar19 = (uint)lVar16 & 0xffff;
    puVar13 = &DAT_14ca80088;
    if (DAT_14ca80090 != (undefined *)0x0) {
      puVar13 = DAT_14ca80090;
    }
    iVar23 = *(int *)(puVar13 +
                     (ulonglong)
                     (DAT_14ca80098 - 1U &
                     (int)((ulonglong)lVar16 >> 0x20) + ((uint)lVar16 << 0x10 | uVar19) +
                     (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar19 >> 4)) * 4);
    while (iVar23 != -1) {
      plVar9 = (longlong *)(DAT_14ca80050 + (longlong)iVar23 * 0x14);
      if (*plVar9 == lVar16) {
        if ((plVar9 != (longlong *)0x0) && ((ushort *)(plVar9 + 1) != (ushort *)0x0)) {
          local_20a = *(ushort *)(plVar9 + 1);
        }
        break;
      }
      iVar23 = *(int *)((longlong)plVar9 + 0xc);
    }
  }
  local_1d8 = param_2;
  FUN_14004e774(&local_178,param_2);
  uVar6 = FUN_14178fc5a(param_1 + 0x6c);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caeff30) && (FUN_144b3d300(&DAT_14caeff30), DAT_14caeff30 == -1)) {
    DAT_14caefef8 = 0;
    _DAT_14caeff00 = 0;
    DAT_14caefee8 = 0;
    _DAT_14caefef0 = 0;
    DAT_14caefed8 = 0;
    _DAT_14caefee0 = 0;
    _DAT_14caeff08 = 0x400;
    DAT_14caeff10 = 0;
    DAT_14caeff18 = &DAT_14c7585e0;
    DAT_14caeff20 = 0;
    InitializeSRWLock((PSRWLOCK)&DAT_14caeff28);
    atexit((_func_5014 *)&LAB_14357e286);
    _Init_thread_footer(&DAT_14caeff30);
  }
  puVar21 = (ulonglong *)(ulonglong)local_20a;
  uVar8 = FUN_144859ac6(&local_178,0x38,(longlong)(ulonglong)uVar6 << 0x20 | (ulonglong)puVar21);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14caeff28);
  for (uVar19 = *(uint *)(DAT_14caeff18 + (ulonglong)(DAT_14caeff0c & (uint)uVar8) * 4);
      local_1e8 = lVar32, uVar19 != 0xffffffff;
      uVar19 = *(uint *)(DAT_14caeff20 + (ulonglong)uVar19 * 4)) {
    if (*(ulonglong *)(DAT_14caefef8 + (longlong)(int)uVar19 * 8) == uVar8) {
      puVar17 = *(ushort **)(DAT_14caefed8 + (longlong)(int)uVar19 * 8);
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14caeff28);
      if (puVar17 != (ushort *)0x0) goto LAB_14357b2b3;
      goto LAB_14357a991;
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14caeff28);
LAB_14357a991:
  local_1e0 = puVar21;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14caeff28);
  for (uVar19 = *(uint *)(DAT_14caeff18 + (ulonglong)(DAT_14caeff0c & (uint)uVar8) * 4);
      uVar19 != 0xffffffff; uVar19 = *(uint *)(DAT_14caeff20 + (ulonglong)uVar19 * 4)) {
    if (*(ulonglong *)(DAT_14caefef8 + (longlong)(int)uVar19 * 8) == uVar8) {
      puVar17 = *(ushort **)(DAT_14caefed8 + (longlong)(int)uVar19 * 8);
      if (puVar17 != (ushort *)0x0) goto LAB_14357b283;
      break;
    }
  }
  local_200 = (ulonglong *)(ulonglong)uVar6;
  local_1c0 = uVar8;
  local_208 = (ushort *)FUN_14001cc68(0x50,0x10);
  local_208[0] = 0;
  local_208[1] = 0;
  local_208[2] = 0;
  local_208[3] = 0;
  local_208[4] = 0;
  local_208[5] = 0;
  local_208[6] = 0;
  local_208[7] = 0;
  local_208[8] = 0;
  local_208[9] = 0;
  local_208[10] = 0;
  local_208[0xb] = 0;
  local_208[0xc] = 0;
  local_208[0xd] = 0;
  local_208[0xe] = 0;
  local_208[0xf] = 0;
  local_208[0x10] = 0;
  local_208[0x11] = 0;
  local_208[0x12] = 0;
  local_208[0x13] = 0;
  local_208[0x14] = 0;
  local_208[0x15] = 0;
  local_208[0x16] = 0;
  local_208[0x17] = 0;
  local_208[0x18] = 0;
  local_208[0x19] = 0;
  local_208[0x1a] = 0;
  local_208[0x1b] = 0;
  local_208[0x1c] = 0;
  local_208[0x1d] = 0;
  local_208[0x1e] = 0;
  local_208[0x1f] = 0;
  local_208[0x20] = 0;
  local_208[0x21] = 0;
  local_208[0x22] = 0;
  local_208[0x23] = 0;
  local_208[0x24] = 0;
  local_208[0x25] = 0;
  local_208[0x26] = 0;
  local_208[0x27] = 0;
  plVar9 = (longlong *)FUN_14099da01(1);
  local_1a8 = (undefined8 *)FUN_14099da01(2);
  local_1d0 = (ulonglong *)FUN_140945e89(1);
  local_1c8 = (longlong *)FUN_140945e89(2);
  local_e8 = -0x1032547698badcff;
  uStack_e0 = 0x1032547698badcfe;
  local_d8 = 0xc3d2e1f0;
  local_d0 = 0;
  if ((longlong)(int)plVar9[1] != 0) {
    plVar11 = (longlong *)*plVar9;
    local_1f8 = (ushort *)(plVar11 + (int)plVar9[1]);
    puVar17 = local_208 + 4;
    do {
      lVar32 = *plVar11;
      iVar23 = *(int *)(lVar32 + 0x50);
      local_13c = 0;
      local_1f0 = plVar11;
      if (0 < iVar23) {
        do {
          iVar30 = local_13c;
          local_138 = CONCAT62(local_138._2_6_,local_20a);
          local_138 = CONCAT44(local_13c,(int)local_138);
          local_130 = CONCAT44(local_130._4_4_,(int)local_200);
          local_f8 = local_148;
          local_108 = local_158;
          uStack_100 = uStack_150;
          local_118 = local_168;
          uStack_110 = uStack_160;
          local_128 = local_178;
          uStack_120 = uStack_170;
          cVar5 = FUN_144a21736(lVar32,&local_138);
          if (cVar5 != '\0') {
            iVar22 = *(int *)(local_208 + 8);
            *(uint *)(local_208 + 8) = iVar22 + 1U;
            if (*(uint *)(local_208 + 10) < iVar22 + 1U) {
              FUN_1417e1a40(puVar17,iVar22);
            }
            lVar16 = *(longlong *)puVar17;
            *(longlong *)(lVar16 + (longlong)iVar22 * 0x10) = lVar32;
            *(int *)(lVar16 + 8 + (longlong)iVar22 * 0x10) = iVar30;
            FUN_140c54e34(&local_e8,lVar32 + 0x28,8);
            FUN_140c54e34(&local_e8,&local_13c,4);
          }
          local_13c = iVar30 + 1;
        } while (iVar23 != local_13c);
      }
      plVar11 = local_1f0 + 1;
    } while ((ushort *)plVar11 != local_1f8);
  }
  local_1f8 = (ushort *)((longlong)local_1e0 * 0x3c);
  if (((*(byte *)((longlong)local_1f8 + 0x14ca814d9) & 8) != 0) &&
     ((longlong)(int)local_1d0[1] != 0)) {
    plVar9 = (longlong *)*local_1d0;
    local_1f0 = plVar9 + (int)local_1d0[1];
    puVar17 = local_208 + 0xc;
    do {
      lVar32 = *plVar9;
      local_138 = CONCAT62(local_138._2_6_,local_20a);
      local_138 = local_138 & 0xffffffff;
      local_130 = CONCAT44(local_130._4_4_,(int)local_200);
      local_f8 = local_148;
      local_108 = local_158;
      uStack_100 = uStack_150;
      local_118 = local_168;
      uStack_110 = uStack_160;
      local_128 = local_178;
      uStack_120 = uStack_170;
      iVar23 = *(int *)(lVar32 + 0x28);
      if ((longlong)iVar23 != 0) {
        lVar16 = *(longlong *)(lVar32 + 0x20);
        lVar15 = 0;
        do {
          cVar5 = FUN_144a21736(*(undefined8 *)(lVar16 + lVar15),&local_138);
          if (cVar5 == '\0') goto LAB_14357acd6;
          lVar15 = lVar15 + 8;
        } while ((longlong)iVar23 * 8 != lVar15);
      }
      iVar23 = *(int *)(local_208 + 0x10);
      *(uint *)(local_208 + 0x10) = iVar23 + 1U;
      if (*(uint *)(local_208 + 0x12) < iVar23 + 1U) {
        FUN_1409995a2(puVar17,iVar23);
      }
      *(longlong *)(*(longlong *)puVar17 + (longlong)iVar23 * 8) = lVar32;
      FUN_140c54e34(&local_e8,lVar32 + 0x10,8);
LAB_14357acd6:
      plVar9 = plVar9 + 1;
    } while (plVar9 != local_1f0);
  }
  FUN_140a0f4bc();
  if ((longlong)DAT_14caa0f90 != 0) {
    local_1b0 = local_1f8 + 0xa6540a6c;
    local_1b8 = DAT_14caa0f88 + DAT_14caa0f90;
    local_1f8 = local_208 + 0x14;
    plVar9 = DAT_14caa0f88;
    puVar21 = local_200;
    do {
      lVar32 = *plVar9;
      local_1a0 = plVar9;
      if ((longlong)*(int *)(local_1a8 + 1) == 0) {
        lVar16 = 0;
      }
      else {
        puVar20 = (ulonglong *)*local_1a8;
        puVar18 = puVar20 + *(int *)(local_1a8 + 1);
        lVar16 = 0;
        local_1d0 = puVar18;
        do {
          uVar8 = *puVar20;
          local_f8 = local_148;
          local_108 = local_158;
          uStack_100 = uStack_150;
          local_118 = local_168;
          uStack_110 = uStack_160;
          local_128 = local_178;
          uStack_120 = uStack_170;
          local_f0 = local_20a;
          local_ec = SUB84(puVar21,0);
          local_138 = uVar8;
          local_130 = lVar32;
          cVar5 = (**(code **)(lVar32 + 0x50))(&local_138);
          if (cVar5 != '\0') {
            iVar23 = *(int *)(uVar8 + 0x50);
            local_138 = local_138 & 0xffffffff00000000;
            puVar18 = local_1d0;
            local_1e0 = puVar20;
            if (0 < iVar23) {
              local_1f0 = (longlong *)(uVar8 + 0x28);
              iVar30 = 0;
              do {
                local_220 = SUB84(puVar21,0);
                local_228 = iVar30;
                cVar5 = FUN_144ae7632(uVar8,local_20a,&local_178,lVar32);
                if (cVar5 != '\0') {
                  if (lVar16 == 0) {
                    iVar22 = *(int *)(local_208 + 0x18);
                    *(uint *)(local_208 + 0x18) = iVar22 + 1U;
                    if (*(uint *)(local_208 + 0x1a) < iVar22 + 1U) {
                      FUN_1417e1b48(local_1f8,iVar22);
                    }
                    lVar15 = *(longlong *)local_1f8;
                    lVar26 = (longlong)iVar22 * 0x30;
                    lVar16 = lVar15 + lVar26;
                    puVar1 = (undefined8 *)(lVar15 + 0x18 + lVar26);
                    *puVar1 = 0;
                    puVar1[1] = 0;
                    puVar1 = (undefined8 *)(lVar15 + 8 + lVar26);
                    *puVar1 = 0;
                    puVar1[1] = 0;
                    *(longlong *)(lVar15 + 0x28 + lVar26) = lVar32;
                    uVar6 = 0;
                    iVar22 = 0;
                  }
                  else {
                    iVar22 = *(int *)(lVar16 + 0x10);
                    uVar6 = *(uint *)(lVar16 + 0x14);
                  }
                  *(uint *)(lVar16 + 0x10) = iVar22 + 1U;
                  iVar29 = iVar30;
                  if (uVar6 < iVar22 + 1U) {
                    FUN_1417e1a40((longlong *)(lVar16 + 8),iVar22);
                    iVar29 = (int)local_138;
                  }
                  lVar15 = *(longlong *)(lVar16 + 8);
                  *(ulonglong *)(lVar15 + (longlong)iVar22 * 0x10) = uVar8;
                  *(int *)(lVar15 + 8 + (longlong)iVar22 * 0x10) = iVar30;
                  FUN_140c54e34(&local_e8,local_1f0,8);
                  uVar6 = (uint)local_d0 & 0x3f;
                  uVar14 = (ulonglong)uVar6;
                  local_d0 = local_d0 + 4;
                  _Size = 4;
                  if (uVar14 == 0) {
                    uVar14 = 0;
                    puVar10 = auStack_248;
                  }
                  else {
                    puVar10 = auStack_248;
                    if (0x3b < uVar6) {
                      lVar15 = -uVar14;
                      memcpy(local_c4 + uVar14,&local_138,lVar15 + 0x40);
                      FUN_140c54ef8(&local_e8,local_c4,0x40);
                      _Size = uVar14 - 0x3c;
                      uVar14 = 0;
                      puVar10 = (undefined1 *)((longlong)&local_208 + lVar15);
                    }
                  }
                  memcpy(local_c4 + uVar14,puVar10 + 0x110,_Size);
                  puVar21 = local_200;
                  iVar30 = iVar29;
                }
                iVar30 = iVar30 + 1;
                local_138 = CONCAT44(local_138._4_4_,iVar30);
                puVar20 = local_1e0;
                puVar18 = local_1d0;
              } while (iVar30 < iVar23);
            }
          }
          puVar20 = puVar20 + 1;
        } while (puVar20 != puVar18);
      }
      if (((*local_1b0 & 0x800) != 0) && ((longlong)(int)local_1c8[1] != 0)) {
        plVar11 = (longlong *)*local_1c8;
        plVar9 = plVar11 + (int)local_1c8[1];
        do {
          lVar15 = *plVar11;
          iVar23 = *(int *)(lVar15 + 0x28);
          if ((longlong)iVar23 != 0) {
            lVar26 = *(longlong *)(lVar15 + 0x20);
            lVar31 = 0;
            do {
              local_138 = *(ulonglong *)(lVar26 + lVar31);
              local_f8 = local_148;
              local_108 = local_158;
              uStack_100 = uStack_150;
              local_118 = local_168;
              uStack_110 = uStack_160;
              local_128 = local_178;
              uStack_120 = uStack_170;
              local_f0 = local_20a;
              local_ec = SUB84(local_200,0);
              local_130 = lVar32;
              cVar5 = (**(code **)(lVar32 + 0x50))(&local_138);
              puVar21 = local_200;
              if (cVar5 == '\0') goto LAB_14357b13f;
              lVar31 = lVar31 + 8;
            } while ((longlong)iVar23 * 8 != lVar31);
          }
          puVar21 = local_200;
          local_228 = (int)local_200;
          cVar5 = FUN_140701edc(lVar15,local_20a,&local_178,lVar32);
          if (cVar5 != '\0') {
            if (lVar16 == 0) {
              iVar23 = *(int *)(local_208 + 0x18);
              *(uint *)(local_208 + 0x18) = iVar23 + 1U;
              if (*(uint *)(local_208 + 0x1a) < iVar23 + 1U) {
                FUN_1417e1b48(local_1f8,iVar23);
              }
              lVar26 = *(longlong *)local_1f8;
              lVar31 = (longlong)iVar23 * 0x30;
              lVar16 = lVar26 + lVar31;
              puVar1 = (undefined8 *)(lVar26 + 0x18 + lVar31);
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1 = (undefined8 *)(lVar26 + 8 + lVar31);
              *puVar1 = 0;
              puVar1[1] = 0;
              *(longlong *)(lVar26 + 0x28 + lVar31) = lVar32;
              uVar6 = 0;
              iVar23 = 0;
            }
            else {
              iVar23 = *(int *)(lVar16 + 0x20);
              uVar6 = *(uint *)(lVar16 + 0x24);
            }
            *(uint *)(lVar16 + 0x20) = iVar23 + 1U;
            if (uVar6 < iVar23 + 1U) {
              FUN_1409995a2((longlong *)(lVar16 + 0x18),iVar23);
            }
            *(longlong *)(*(longlong *)(lVar16 + 0x18) + (longlong)iVar23 * 8) = lVar15;
            FUN_140c54e34(&local_e8,lVar15 + 0x10,8);
            puVar21 = local_200;
          }
LAB_14357b13f:
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar9);
      }
      plVar9 = local_1a0 + 1;
    } while (plVar9 != local_1b8);
  }
  FUN_140c54d7a(&local_e8);
  uVar12 = local_1c0;
  puVar17 = local_208;
  *(undefined4 *)(local_208 + 0x24) = local_74;
  *(undefined8 *)(local_208 + 0x1c) = local_84;
  *(undefined8 *)(local_208 + 0x20) = uStack_7c;
  *local_208 = local_20a;
  uVar14 = _DAT_14caefee0;
  uVar6 = DAT_14caefee0;
  uVar24 = _DAT_14caefee0 & 0xffffffff;
  lVar16 = (longlong)(int)DAT_14caefee0;
  uVar19 = DAT_14caefee0 + 1;
  uVar8 = (ulonglong)uVar19;
  _DAT_14caefee0 = CONCAT44(DAT_14caefee4,uVar19);
  if (DAT_14caefee4 < uVar19) {
    FUN_1463eb6ea(uVar14 & 0xffffffff);
  }
  lVar32 = local_1e8;
  *(ushort **)(DAT_14caefed8 + lVar16 * 8) = puVar17;
  uVar14 = _DAT_14caeff00;
  lVar16 = (longlong)DAT_14caeff00;
  uVar7 = DAT_14caeff00 + 1;
  _DAT_14caeff00 = CONCAT44(DAT_14caeff04,uVar7);
  if (DAT_14caeff04 < uVar7) {
    FUN_14479d316(&DAT_14caefef8,uVar14 & 0xffffffff);
  }
  *(ulonglong *)(DAT_14caefef8 + lVar16 * 8) = uVar12;
  uVar14 = _DAT_14caefef0;
  lVar16 = (longlong)DAT_14caefef0;
  uVar7 = DAT_14caefef0 + 1;
  _DAT_14caefef0 = CONCAT44(DAT_14caefef4,uVar7);
  if (DAT_14caefef4 < uVar7) {
    FUN_1463eb778(uVar14 & 0xffffffff);
  }
  lVar15 = DAT_14caefee8;
  lVar16 = lVar16 * 0x38;
  *(undefined8 *)(DAT_14caefee8 + 0x30 + lVar16) = local_148;
  puVar1 = (undefined8 *)(lVar15 + 0x20 + lVar16);
  *puVar1 = local_158;
  puVar1[1] = uStack_150;
  puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar16);
  *puVar1 = local_168;
  puVar1[1] = uStack_160;
  *(undefined8 *)(lVar15 + lVar16) = local_178;
  ((undefined8 *)(lVar15 + lVar16))[1] = uStack_170;
  if (DAT_14caeff10 <= uVar6) {
    uVar8 = (ulonglong)(uVar6 + (uVar19 == 0));
    uVar14 = uVar8 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar7 = 1 << ((byte)lVar16 & 0x1f);
    uVar19 = 0x20;
    if (0x20 < uVar7) {
      uVar19 = uVar7;
    }
    FUN_1404b04e2(&DAT_14caeff08,uVar19);
  }
  uVar14 = (ulonglong)(DAT_14caeff0c & (uint)uVar12);
  *(undefined4 *)(DAT_14caeff20 + uVar24 * 4) = *(undefined4 *)(DAT_14caeff18 + uVar14 * 4);
  *(uint *)(DAT_14caeff18 + uVar14 * 4) = uVar6;
LAB_14357b283:
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14caeff28);
LAB_14357b2b3:
  uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
  if (*(int *)(lVar32 + 600) != *(int *)(puVar17 + 0x24) ||
      *(undefined1 (*) [16])(lVar32 + 0x248) != *(undefined1 (*) [16])(puVar17 + 0x1c)) {
    local_188 = (void *)0x0;
    local_180 = *(int *)(puVar17 + 0x10);
    lVar16 = (longlong)local_180;
    pvVar2 = *(void **)(puVar17 + 0xc);
    if (lVar16 == 0) {
      local_17c = 0;
    }
    else {
      FUN_1417e1c5c(&local_188,local_180);
      memcpy(local_188,pvVar2,lVar16 << 3);
    }
    FUN_1402affde(&local_e8,local_20a,&local_188);
    puVar21 = (ulonglong *)0x0;
    local_208 = puVar17;
    if ((longlong)*(int *)(puVar17 + 8) != 0) {
      puVar18 = *(ulonglong **)(puVar17 + 4);
      puVar21 = puVar18 + (longlong)*(int *)(puVar17 + 8) * 2;
      do {
        lVar16 = FUN_144b1d0c2(lVar32,*puVar18 + 0x28,(int)puVar18[1]);
        if (lVar16 == 0) {
          uVar8 = *puVar18;
          if ((local_98 == '\x01') && ((int)uStack_e0 != local_b4)) {
            uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
            uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
            puVar10 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar10 = local_b0;
            }
            for (iVar23 = *(int *)(puVar10 +
                                  (ulonglong)(local_a0 - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
                iVar23 != -1; iVar23 = *(int *)((longlong)iVar23 * 0x10 + local_e8 + 8)) {
              if (*(ulonglong *)(local_e8 + (longlong)iVar23 * 0x10) == uVar8) goto LAB_14357b43a;
            }
          }
          cVar5 = (**(code **)(*local_1d8 + 0x18))(local_1d8,local_20a,uVar8,0);
          if (cVar5 != '\0') {
            local_a0 = 0;
            if (local_a8 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            FUN_1401cd05a(&local_e8);
            goto LAB_14357ba05;
          }
        }
LAB_14357b43a:
        puVar18 = puVar18 + 2;
      } while (puVar18 != puVar21);
    }
    local_a0 = 0;
    if (local_a8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1401cd05a(&local_e8);
    if ((longlong)*(int *)(local_208 + 0x10) != 0) {
      puVar21 = *(ulonglong **)(local_208 + 0xc);
      local_200 = puVar21 + *(int *)(local_208 + 0x10);
      lVar16 = lVar32 + 0x48;
      lVar15 = lVar32;
      do {
        lVar32 = local_1e8;
        uVar8 = *puVar21;
        uVar6 = *(uint *)(lVar15 + 0x50);
        uVar14 = *(ulonglong *)(lVar15 + 0x48);
        uVar12 = ((longlong)uVar14 >> 0x18) + lVar16;
        uVar24 = uVar12;
        if ((uVar14 & 1) == 0) {
          uVar24 = uVar14;
        }
        uVar25 = 0;
        if (0 < (int)uVar6) {
          uVar25 = 0;
          uVar28 = (ulonglong)uVar6;
          do {
            uVar19 = (int)(uVar28 >> 1) + (int)uVar25;
            puVar18 = (ulonglong *)(uVar24 + (ulonglong)uVar19 * 8);
            puVar20 = (ulonglong *)*puVar18;
            puVar18 = (ulonglong *)(((longlong)puVar20 >> 0x18) + (longlong)puVar18);
            if (((ulonglong)puVar20 & 1) == 0) {
              puVar18 = puVar20;
            }
            uVar7 = (uint)uVar28;
            if (*puVar18 < *(ulonglong *)(uVar8 + 0x10)) {
              uVar25 = (ulonglong)(uVar19 + (uVar7 & 1));
            }
            uVar28 = uVar28 >> 1;
          } while (1 < uVar7);
        }
        if ((int)uVar25 < (int)uVar6) {
          puVar18 = (ulonglong *)(uVar24 + uVar25 * 8);
          puVar20 = (ulonglong *)*puVar18;
          puVar18 = (ulonglong *)(((longlong)puVar20 >> 0x18) + (longlong)puVar18);
          if (((ulonglong)puVar20 & 1) == 0) {
            puVar18 = puVar20;
          }
          if (*(ulonglong *)(uVar8 + 0x10) < *puVar18) goto LAB_14357b56b;
          if ((uVar14 & 1) == 0) {
            uVar12 = uVar14;
          }
          uVar14 = *(ulonglong *)(uVar12 + uVar25 * 8);
          if ((uVar14 & 1) != 0) {
            uVar14 = ((longlong)uVar14 >> 0x18) + uVar12 + uVar25 * 8;
          }
          if (uVar14 == 0) goto LAB_14357b56b;
        }
        else {
LAB_14357b56b:
          iVar23 = *(int *)(uVar8 + 0x28);
          if ((longlong)iVar23 == 0) goto LAB_14357ba05;
          lVar15 = *(longlong *)(uVar8 + 0x20);
          lVar26 = 0;
          while (cVar5 = (**(code **)(*local_1d8 + 0x18))
                                   (local_1d8,local_20a,*(undefined8 *)(lVar15 + lVar26),0),
                cVar5 != '\0') {
            lVar26 = lVar26 + 8;
            if ((longlong)iVar23 * 8 == lVar26) goto LAB_14357ba05;
          }
        }
        puVar21 = puVar21 + 1;
        lVar15 = lVar32;
      } while (puVar21 != local_200);
    }
    uVar8 = CONCAT71((int7)((ulonglong)puVar21 >> 8),1);
    if ((longlong)*(int *)(local_208 + 0x18) != 0) {
      puVar17 = *(ushort **)(local_208 + 0x14);
      local_208 = puVar17 + (longlong)*(int *)(local_208 + 0x18) * 0x18;
      local_1e0 = (ulonglong *)(lVar32 + 0x60);
      do {
        local_198 = (void *)0x0;
        local_190 = *(int *)(puVar17 + 0x10);
        lVar16 = (longlong)local_190;
        pvVar2 = *(void **)(puVar17 + 0xc);
        if (lVar16 == 0) {
          local_18c = 0;
        }
        else {
          FUN_1417e1c5c(&local_198,local_190);
          memcpy(local_198,pvVar2,lVar16 << 3);
        }
        FUN_1402affde(&local_e8,local_20a,&local_198);
        uVar6 = *(uint *)(lVar32 + 0x68);
        uVar8 = *(ulonglong *)(lVar32 + 0x60);
        uVar14 = ((longlong)uVar8 >> 0x18) + (longlong)local_1e0;
        uVar12 = uVar14;
        if ((uVar8 & 1) == 0) {
          uVar12 = uVar8;
        }
        if ((int)uVar6 < 1) {
          uVar24 = 0;
        }
        else {
          uVar24 = 0;
          uVar25 = (ulonglong)uVar6;
          do {
            uVar19 = (int)(uVar25 >> 1) + (int)uVar24;
            puVar21 = (ulonglong *)(uVar12 + (ulonglong)uVar19 * 8);
            uVar28 = *puVar21;
            uVar27 = ((longlong)uVar28 >> 0x18) + (longlong)puVar21;
            if ((uVar28 & 1) == 0) {
              uVar27 = uVar28;
            }
            uVar7 = (uint)uVar25;
            if (*(ulonglong *)(uVar27 + 0x60) < *(ulonglong *)(*(longlong *)(puVar17 + 0x14) + 0x20)
               ) {
              uVar24 = (ulonglong)(uVar19 + (uVar7 & 1));
            }
            uVar25 = uVar25 >> 1;
          } while (1 < uVar7);
        }
        if ((int)uVar24 < (int)uVar6) {
          puVar21 = (ulonglong *)(uVar12 + uVar24 * 8);
          uVar12 = *puVar21;
          uVar25 = ((longlong)uVar12 >> 0x18) + (longlong)puVar21;
          if ((uVar12 & 1) == 0) {
            uVar25 = uVar12;
          }
          if (*(ulonglong *)(*(longlong *)(puVar17 + 0x14) + 0x20) < *(ulonglong *)(uVar25 + 0x60))
          {
            uVar12 = 0;
          }
          else {
            if ((uVar8 & 1) == 0) {
              uVar14 = uVar8;
            }
            uVar12 = *(ulonglong *)(uVar14 + uVar24 * 8);
            if ((uVar12 & 1) != 0) {
              uVar12 = ((longlong)uVar12 >> 0x18) + uVar14 + uVar24 * 8;
            }
          }
        }
        else {
          uVar12 = 0;
        }
        puVar21 = (ulonglong *)0x0;
        if ((longlong)*(int *)(puVar17 + 8) != 0) {
          puVar18 = *(ulonglong **)(puVar17 + 4);
          puVar21 = puVar18 + (longlong)*(int *)(puVar17 + 8) * 2;
          do {
            cVar5 = (**(code **)(*local_1d8 + 0x18))
                              (local_1d8,local_20a,*puVar18,*(undefined8 *)(puVar17 + 0x14));
            if (cVar5 != '\0') {
              uVar8 = *puVar18;
              if ((local_98 == '\x01') && ((int)uStack_e0 != local_b4)) {
                uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
                uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
                puVar10 = local_a8;
                if (local_a8 == (undefined1 *)0x0) {
                  puVar10 = local_b0;
                }
                for (iVar23 = *(int *)(puVar10 +
                                      (ulonglong)(local_a0 - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
                    iVar23 != -1; iVar23 = *(int *)((longlong)iVar23 * 0x10 + local_e8 + 8)) {
                  if (*(ulonglong *)(local_e8 + (longlong)iVar23 * 0x10) == uVar8)
                  goto LAB_14357b805;
                }
              }
              if ((uVar12 == 0) ||
                 (lVar16 = FUN_144b1d0c2(uVar12,uVar8 + 0x28,(int)puVar18[1]), lVar16 == 0)) {
                uVar8 = 0;
                goto LAB_14357b96a;
              }
            }
LAB_14357b805:
            puVar18 = puVar18 + 2;
          } while (puVar18 != puVar21);
        }
        uVar8 = CONCAT71((int7)((ulonglong)puVar21 >> 8),1);
        if ((longlong)*(int *)(puVar17 + 0x10) != 0) {
          plVar9 = *(longlong **)(puVar17 + 0xc);
          local_1f0 = plVar9 + *(int *)(puVar17 + 0x10);
          local_1f8 = (ushort *)(uVar12 + 0x48);
          do {
            puVar21 = (ulonglong *)*plVar9;
            if (uVar12 == 0) {
LAB_14357b914:
              uVar8 = puVar21[5];
              if ((longlong)(int)uVar8 == 0) {
LAB_14357b95f:
                uVar8 = 0;
                lVar32 = local_1e8;
                goto LAB_14357b96a;
              }
              uVar3 = *(undefined8 *)(puVar17 + 0x14);
              uVar14 = puVar21[4];
              lVar32 = 0;
              while (cVar5 = (**(code **)(*local_1d8 + 0x18))
                                       (local_1d8,local_20a,*(undefined8 *)(uVar14 + lVar32),uVar3),
                    cVar5 != '\0') {
                lVar32 = lVar32 + 8;
                if ((longlong)(int)uVar8 * 8 == lVar32) goto LAB_14357b95f;
              }
            }
            else {
              uVar6 = *(uint *)(uVar12 + 0x50);
              uVar8 = *(ulonglong *)(uVar12 + 0x48);
              uVar14 = ((longlong)uVar8 >> 0x18) + (longlong)local_1f8;
              uVar24 = uVar14;
              if ((uVar8 & 1) == 0) {
                uVar24 = uVar8;
              }
              if ((int)uVar6 < 1) {
                uVar25 = 0;
              }
              else {
                uVar25 = 0;
                uVar28 = (ulonglong)uVar6;
                uVar19 = uVar6;
                do {
                  uVar28 = uVar28 >> 1;
                  uVar7 = (uint)uVar28 + (int)uVar25;
                  puVar18 = (ulonglong *)(uVar24 + (ulonglong)uVar7 * 8);
                  puVar20 = (ulonglong *)*puVar18;
                  puVar18 = (ulonglong *)(((longlong)puVar20 >> 0x18) + (longlong)puVar18);
                  if (((ulonglong)puVar20 & 1) == 0) {
                    puVar18 = puVar20;
                  }
                  if (*puVar18 < puVar21[2]) {
                    uVar25 = (ulonglong)(uVar7 + (uVar19 & 1));
                  }
                  bVar4 = 1 < uVar19;
                  uVar19 = (uint)uVar28;
                } while (bVar4);
              }
              local_200 = puVar21;
              if ((int)uVar6 <= (int)uVar25) goto LAB_14357b914;
              puVar18 = (ulonglong *)(uVar24 + uVar25 * 8);
              puVar20 = (ulonglong *)*puVar18;
              puVar18 = (ulonglong *)(((longlong)puVar20 >> 0x18) + (longlong)puVar18);
              if (((ulonglong)puVar20 & 1) == 0) {
                puVar18 = puVar20;
              }
              if (puVar21[2] < *puVar18) goto LAB_14357b914;
              if ((uVar8 & 1) == 0) {
                uVar14 = uVar8;
              }
              uVar8 = *(ulonglong *)(uVar14 + uVar25 * 8);
              if ((uVar8 & 1) != 0) {
                uVar8 = ((longlong)uVar8 >> 0x18) + uVar14 + uVar25 * 8;
              }
              if (uVar8 == 0) goto LAB_14357b914;
            }
            plVar9 = plVar9 + 1;
          } while (plVar9 != local_1f0);
          uVar8 = CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
          lVar32 = local_1e8;
        }
LAB_14357b96a:
        local_a0 = 0;
        if (local_a8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1401cd05a(&local_e8);
        puVar17 = puVar17 + 0x18;
      } while (((byte)uVar8 & puVar17 != local_208) != 0);
    }
  }
LAB_14357ba07:
  if ((local_60 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14357ba05:
  uVar8 = 0;
  goto LAB_14357ba07;
}



// FUNCTION 14357bb42 FUN_14357bb42 body=323 status=ok
// SIG undefined FUN_14357bb42(void)

void FUN_14357bb42(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar5;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar5;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 != 0) {
    lVar6 = FUN_14001cc68(0x90,0x10);
    FUN_1404e4ca0(lVar6,lVar4 + 0x1a8);
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    lVar4 = *(longlong *)(param_1 + 0x48);
    *(longlong *)(param_1 + 0x48) = lVar6;
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar4;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar5;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14357bc85 FUN_14357bc85 body=69 status=ok
// SIG undefined FUN_14357bc85(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14357bc85(void)

{
  _DAT_14caef6c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014357bcc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caef6d0,1);
  return;
}



// FUNCTION 14357bcca FUN_14357bcca body=107 status=ok
// SIG undefined FUN_14357bcca(void)

void FUN_14357bcca(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0x228) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0x228) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_147bc0460((longlong)param_1 + 0x70);
    if (*(ulonglong *)((longlong)param_1 + 0x60) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0x60) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743d4c0(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x280);
  return;
}



// FUNCTION 14357bd35 FUN_14357bd35 body=69 status=ok
// SIG undefined FUN_14357bd35(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14357bd35(void)

{
  _DAT_14caefc90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014357bd77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caefc98,1);
  return;
}



// FUNCTION 14357bd7a FUN_14357bd7a body=723 status=ok
// SIG undefined FUN_14357bd7a(void)

bool FUN_14357bd7a(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3ca30);
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cbd8);
  iVar2 = FUN_1448332aa(param_1,&DAT_149e3ca30);
  if (0 < iVar2) {
    (**(code **)(*param_1 + 0x150))(param_1,param_2);
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 8),4);
      }
      else {
        FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + 8) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    iVar3 = FUN_1448332aa(param_1,&DAT_149e3cbd8);
    if (iVar3 < 0x1f) {
      local_38 = (undefined2 *)0x0;
      uStack_30 = 0;
      FUN_14021219d(param_1,&local_38);
      puVar4 = local_38;
      if ((int)uStack_30 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      FUN_1446f470e(&local_40,puVar4,1);
      *(undefined8 *)(param_2 + 0xc) = local_40;
      if (local_38 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      (**(code **)(*param_1 + 0x160))(param_1,param_2 + 0xc);
    }
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x14),4);
      }
      else {
        FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x14) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x18),4);
      }
      else {
        FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x18) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x1c),4);
      }
      else {
        FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x1c) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x20),4);
      }
      else {
        FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x20) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar5 = (undefined4 *)(param_2 + 0x24);
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,puVar5,4);
      }
      else {
        FUN_14572512c(param_1,puVar5);
      }
    }
    else {
      *puVar5 = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0 < iVar2;
}



// FUNCTION 14357c05a FUN_14357c05a body=28 status=ok
// SIG undefined FUN_14357c05a(void)

undefined8 FUN_14357c05a(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x246)) &
            0xffffffffffffff08;
    return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 3);
  }
  return 0;
}



// FUNCTION 14357c076 FUN_14357c076 body=1471 status=ok
// SIG undefined FUN_14357c076(void)

undefined1 FUN_14357c076(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined ***pppuVar16;
  uint *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1403e5ae2(param_1 + 2);
  lVar10 = (**(code **)(*param_1 + 0x4c0))(param_1);
  if (lVar10 != 0) {
LAB_14357c0ae:
    lVar11 = lVar10;
    lVar10 = lVar11;
    if (*(longlong *)(lVar11 + 0x20) != 0) goto code_r0x00014357c0bd;
    goto LAB_14357c0d1;
  }
LAB_14357c0dc:
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffff1 | 6;
  *(undefined1 *)((longlong)param_1 + 0xd) = 0xff;
  if (param_1 != (longlong *)0x0) {
    LOCK();
    plVar1 = param_1 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + 1;
    UNLOCK();
    if ((int)lVar10 < 0) {
      FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9ae,
                    L"FMaterial::AddRef, Invalid NumDebugRefs %d",(int)lVar10 + 1);
    }
  }
  if (param_2 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caec620);
    *(int *)(param_2 + 0x74) = *(int *)(param_2 + 0x74) + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caec620);
  }
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar10 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_14357c161;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14357c16a;
      goto LAB_14357c1ef;
    }
  }
  else {
LAB_14357c161:
    if (iVar7 != 0x10) {
LAB_14357c1ef:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar10 + 0xc60), iVar7 == 2))
        goto LAB_14357c16a;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_14357c16a;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar3 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar3;
        if (puVar13 != (uint *)0x0) goto LAB_14357c353;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_14357e25f);
          }
          lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar10 + 0x310);
          *(undefined8 *)(lVar10 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar3 = puVar12;
          FUN_140217a48(puVar3);
          puVar13 = (uint *)*puVar3;
LAB_14357c353:
          puVar18 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar18 + 0x17);
          uVar15 = puVar13[0x12];
          if (puVar17 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar4 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar3;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar3 = puVar13;
            puVar18 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar17 = (uint *)(puVar18 + 0x17);
            uVar15 = 0;
            if (puVar17 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_14357c3d3;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_14357c3d3:
        *(uint **)(puVar13 + 0x10) = puVar17;
        puVar13[0x12] = uVar15;
        iVar7 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14a9dc388;
        puVar18[0x15] = param_1;
        puVar18[0x16] = param_2;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar7 = 0;
          }
          else {
            uVar19 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar19 = 5;
        }
        if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
        }
        puVar18[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar18[9] = puVar18;
        puVar18[10] = puVar18;
        lVar10 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar10 == 0) {
          uVar5 = 1;
          if ((char)uVar19 != '\x06') {
            uVar5 = uVar19;
          }
          uVar19 = uVar5;
          uVar14 = 0;
        }
        else {
          if ((char)uVar19 == '\x06') {
            uVar19 = *(ulonglong *)(lVar10 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar10 + 0x30);
        }
        puVar18[0xf] = uVar14;
        puVar18[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar7;
        if (puVar18 == (undefined8 *)0x0) {
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          uVar6 = FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          uVar6 = FUN_1447439e4(puVar18);
          LOCK();
          piVar2 = (int *)(puVar18 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            uVar6 = (**(code **)*puVar18)(puVar18,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a9dc340;
        local_68[0] = FUN_143580a0a;
        local_40 = param_1;
        local_38 = param_2;
        uVar6 = FUN_14005a792(&DAT_14ca9a440,L"SetInlineShaderMap",&DAT_14caf1298);
        if (local_68[0] != (code *)0x0) {
          pppuVar16 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar16 = &local_48;
          }
          uVar6 = (*(code *)(*pppuVar16)[2])();
        }
      }
      goto LAB_14357c292;
    }
  }
LAB_14357c16a:
  lVar10 = param_1[3];
  param_1[3] = param_2;
  if (lVar10 != 0) {
    FUN_1401fc67c();
  }
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xef;
  LOCK();
  uVar6 = *(undefined1 *)((longlong)param_1 + 0xc);
  *(undefined1 *)((longlong)param_1 + 0xc) = 0xff;
  UNLOCK();
  if (param_1 != (longlong *)0x0) {
    LOCK();
    param_1 = param_1 + 1;
    lVar10 = *param_1;
    *(int *)param_1 = (int)*param_1 + -1;
    UNLOCK();
    if ((int)lVar10 < 1) {
      FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9b6,
                    L"FMaterial::Release, Invalid NumDebugRefs %d",(int)lVar10 + -1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
  }
LAB_14357c292:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x00014357c0bd:
  lVar10 = *(longlong *)(lVar11 + 0x20);
  if ((*(uint *)(lVar11 + 8) >> 0x1c & 1) != 0) {
    lVar10 = FUN_142840154(lVar11);
LAB_14357c0d1:
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(lVar11 + 0x20);
      goto LAB_14357c0ae;
    }
    goto LAB_14357c0dc;
  }
  goto LAB_14357c0ae;
}



// FUNCTION 14357c63c FUN_14357c63c body=647 status=ok
// SIG undefined FUN_14357c63c(void)

void FUN_14357c63c(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_108 [44];
  undefined4 local_dc;
  ulonglong local_d8 [7];
  undefined4 local_9c;
  longlong local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((int)param_2[8] < 0x104) {
    local_98 = 0;
    uStack_90 = 0;
    FUN_1405d0c38(param_2);
    local_68 = 0;
    local_60 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_5c = 0xffffffff00000080;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_147bc6382(param_2);
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_9c,4);
      }
      else {
        FUN_14572512c(param_2,&local_9c);
      }
    }
    else {
      local_9c = *(undefined4 *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    *(undefined4 *)(param_1 + 0x24) = 2;
    *(undefined1 *)(param_1 + 0x20) = 1;
    local_d8[4] = 0;
    local_d8[5] = 0;
    FUN_1402ac1b3(param_2);
    local_d8[2] = 0;
    local_d8[3] = 0;
    FUN_147bc69c2(param_2);
    puVar2 = (ulonglong *)param_2[1];
    if (puVar2[1] < *puVar2 + 4) {
      local_d8[0] = local_d8[0] & 0xffffffff00000000;
      (**(code **)(*param_2 + 0x170))(param_2,local_d8,4);
      if (1 < (uint)local_d8[0]) {
        FUN_14572541c(param_2);
      }
    }
    else {
      *puVar2 = *puVar2 + 4;
    }
    puVar2 = (ulonglong *)param_2[1];
    if (puVar2[1] < *puVar2 + 4) {
      local_d8[0] = local_d8[0] & 0xffffffff00000000;
      (**(code **)(*param_2 + 0x170))(param_2,local_d8,4);
      if (1 < (uint)local_d8[0]) {
        FUN_14572541c(param_2);
      }
    }
    else {
      *puVar2 = *puVar2 + 4;
    }
    local_d8[0] = 0;
    local_d8[1] = 0;
    FUN_147bc6b58(param_2);
    local_dc = 0;
    puVar2 = (ulonglong *)param_2[1];
    if (puVar2[1] < *puVar2 + 4) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_dc,4);
      }
      else {
        FUN_14572512c(param_2,&local_dc);
      }
    }
    else {
      *puVar2 = *puVar2 + 4;
    }
    if (local_d8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_d8[2] != 0) {
      FUN_1400020a8();
    }
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_147bc4fde(&local_88);
    FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  local_88 = 0;
  FUN_14357c8c4(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14357c8c4 FUN_14357c8c4 body=1683 status=ok
// SIG undefined FUN_14357c8c4(void)

void FUN_14357c8c4(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  code *pcVar12;
  longlong lVar13;
  longlong lVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  bool bVar17;
  undefined1 auStack_e8 [47];
  undefined1 local_b9;
  undefined **local_b8;
  int local_b0;
  longlong *local_a8;
  byte local_a0;
  undefined8 local_9c;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2[0xd] == 0) {
    bVar17 = false;
  }
  else {
    bVar17 = *(longlong *)(param_2[0xd] + 0x10) != 0;
  }
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_b8 = (undefined **)CONCAT44(local_b8._4_4_,(uint)bVar17);
    (**(code **)(*param_2 + 0x170))(param_2,&local_b8,4);
    uVar9 = (uint)local_b8;
    if (1 < (uint)local_b8) {
      FUN_14572541c(param_2);
      uVar9 = (uint)local_b8;
    }
  }
  else {
    uVar9 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (uVar9 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      (**(code **)(*param_1 + 0x370))(param_1,&local_b8);
      ppuVar15 = local_b8;
      if (local_b0 == 0) {
        ppuVar15 = (undefined **)&DAT_149dfb77a;
      }
      FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x5fa,
                    L"This platform requires cooked packages, and shaders were not cooked into this material %s."
                    ,ppuVar15);
      if (local_b8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
    goto LAB_14357cf2a;
  }
  if ((param_2[0xd] != 0) && (*(longlong *)(param_2[0xd] + 0x10) != 0)) {
    FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x615,
                  L"Internal error: cooking outside the editor is not possible.");
    goto LAB_14357cf2a;
  }
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_b8 = (undefined **)((ulonglong)local_b8 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_b8,4);
    uVar9 = (uint)local_b8;
    if (1 < (uint)local_b8) {
      FUN_14572541c(param_2);
      uVar9 = (uint)local_b8;
    }
  }
  else {
    uVar9 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (uVar9 == 0) goto LAB_14357cf2a;
  puVar10 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  puVar10[7] = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  puVar10[4] = 0;
  *(undefined8 *)((longlong)puVar10 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar10 + 0x2c) = 0;
  *puVar10 = &PTR_FUN_14a9d9370;
  puVar10[8] = &PTR_FUN_14a9d93a0;
  puVar10[9] = 0;
  puVar10[10] = 0;
  *(undefined8 *)((longlong)puVar10 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar10 + 0x5c) = 0;
  *(undefined1 *)((longlong)puVar10 + 100) = 1;
  puVar10[0xd] = 0xffffffff00000003;
  puVar10[0xe] = 0;
  *(undefined1 *)(puVar10 + 0xf) = 0;
  *(uint *)((longlong)puVar10 + 0x7c) = *(uint *)((longlong)puVar10 + 0x7c) & 0xfffffff0 | 6;
  if (puVar10 != (undefined8 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caec620);
    *(int *)((longlong)puVar10 + 0x74) = *(int *)((longlong)puVar10 + 0x74) + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caec620);
  }
  puVar2 = puVar10 + 10;
  local_b8 = &PTR_FUN_14a388320;
  local_88 = 0;
  local_78 = (longlong *)0x0;
  local_a0 = *(byte *)(param_2 + 5) & 1;
  local_9c = *param_3;
  local_a8 = param_2;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc28);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb60);
  if ((int)param_2[8] < 0x104) {
    puVar3 = (ulonglong *)param_2[1];
    if (puVar3[1] < *puVar3 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_b9,1);
    }
    else {
      *puVar3 = *puVar3 + 1;
    }
    pcVar12 = *(code **)(*param_2 + 0x170);
    if (pcVar12 == FUN_14473a572) {
      param_2 = (longlong *)param_2[0x12];
      pcVar12 = *(code **)(*param_2 + 0x170);
      if (pcVar12 == FUN_14004e24c) {
        FUN_14004e24c(param_2,puVar2,0x14);
      }
      else if (pcVar12 == FUN_1447395b8) {
        lVar13 = param_2[0x12];
        lVar14 = param_2[0x13];
        *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(lVar13 + 0x10 + lVar14);
        puVar4 = (undefined4 *)(lVar13 + lVar14);
        uVar5 = puVar4[1];
        uVar6 = puVar4[2];
        uVar7 = puVar4[3];
        *(undefined4 *)puVar2 = *puVar4;
        *(undefined4 *)((longlong)puVar10 + 0x54) = uVar5;
        *(undefined4 *)(puVar10 + 0xb) = uVar6;
        *(undefined4 *)((longlong)puVar10 + 0x5c) = uVar7;
        param_2[0x13] = param_2[0x13] + 0x14;
      }
      else {
        if (pcVar12 != FUN_144a6950e) goto LAB_14357ce64;
        if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
          puVar4 = *(undefined4 **)param_2[1];
          *(undefined4 *)(puVar10 + 0xc) = puVar4[4];
          uVar5 = puVar4[1];
          uVar6 = puVar4[2];
          uVar7 = puVar4[3];
          *(undefined4 *)puVar2 = *puVar4;
          *(undefined4 *)((longlong)puVar10 + 0x54) = uVar5;
          *(undefined4 *)(puVar10 + 0xb) = uVar6;
          *(undefined4 *)((longlong)puVar10 + 0x5c) = uVar7;
          plVar11 = (longlong *)param_2[1];
          goto LAB_14357ce08;
        }
      }
    }
    else if (pcVar12 == FUN_140090aac) {
      FUN_140090aac(param_2,puVar2,0x14);
    }
    else if (pcVar12 == FUN_144a6950e) {
      if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
        plVar11 = (longlong *)param_2[1];
        puVar4 = (undefined4 *)*plVar11;
        *(undefined4 *)(puVar10 + 0xc) = puVar4[4];
        uVar5 = puVar4[1];
        uVar6 = puVar4[2];
        uVar7 = puVar4[3];
        *(undefined4 *)puVar2 = *puVar4;
        *(undefined4 *)((longlong)puVar10 + 0x54) = uVar5;
        *(undefined4 *)(puVar10 + 0xb) = uVar6;
        *(undefined4 *)((longlong)puVar10 + 0x5c) = uVar7;
LAB_14357ce08:
        *plVar11 = *plVar11 + 0x14;
      }
    }
    else {
LAB_14357ce64:
      (*pcVar12)(param_2,puVar2,0x14);
    }
    *(undefined4 *)(puVar10 + 0xe) = 5;
    *(undefined4 *)((longlong)puVar10 + 0x6c) = 8;
  }
  else {
    plVar11 = (longlong *)param_2[1];
    if ((undefined1 *)plVar11[1] < (undefined1 *)*plVar11 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)((longlong)puVar10 + 100),1);
    }
    else {
      *(undefined1 *)((longlong)puVar10 + 100) = *(undefined1 *)*plVar11;
      *plVar11 = *plVar11 + 1;
    }
    puVar16 = puVar10 + 0xd;
    plVar11 = (longlong *)param_2[1];
    if ((undefined4 *)plVar11[1] < (undefined4 *)*plVar11 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,puVar16,4);
      }
      else {
        FUN_14572512c(param_2,puVar16);
      }
    }
    else {
      *(undefined4 *)puVar16 = *(undefined4 *)*plVar11;
      *plVar11 = *plVar11 + 4;
    }
    pcVar12 = *(code **)(*param_2 + 0x170);
    if (pcVar12 == FUN_14473a572) {
      plVar11 = (longlong *)param_2[0x12];
      pcVar12 = *(code **)(*plVar11 + 0x170);
      if (pcVar12 == FUN_14004e24c) {
        FUN_14004e24c(plVar11,puVar2,0x14);
      }
      else if (pcVar12 == FUN_1447395b8) {
        lVar13 = plVar11[0x12];
        lVar14 = plVar11[0x13];
        *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(lVar13 + 0x10 + lVar14);
        puVar4 = (undefined4 *)(lVar13 + lVar14);
        uVar5 = puVar4[1];
        uVar6 = puVar4[2];
        uVar7 = puVar4[3];
        *(undefined4 *)puVar2 = *puVar4;
        *(undefined4 *)((longlong)puVar10 + 0x54) = uVar5;
        *(undefined4 *)(puVar10 + 0xb) = uVar6;
        *(undefined4 *)((longlong)puVar10 + 0x5c) = uVar7;
        plVar11[0x13] = plVar11[0x13] + 0x14;
      }
      else {
        if (pcVar12 != FUN_144a6950e) goto LAB_14357ce83;
        if ((*(byte *)((longlong)plVar11 + 0x29) & 2) == 0) {
          puVar4 = *(undefined4 **)plVar11[1];
          *(undefined4 *)(puVar10 + 0xc) = puVar4[4];
          uVar5 = puVar4[1];
          uVar6 = puVar4[2];
          uVar7 = puVar4[3];
          *(undefined4 *)puVar2 = *puVar4;
          *(undefined4 *)((longlong)puVar10 + 0x54) = uVar5;
          *(undefined4 *)(puVar10 + 0xb) = uVar6;
          *(undefined4 *)((longlong)puVar10 + 0x5c) = uVar7;
          plVar11 = (longlong *)plVar11[1];
          goto LAB_14357ce35;
        }
      }
    }
    else if (pcVar12 == FUN_140090aac) {
      FUN_140090aac(param_2,puVar2,0x14);
    }
    else {
      plVar11 = param_2;
      if (pcVar12 == FUN_144a6950e) {
        if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
          plVar11 = (longlong *)param_2[1];
          puVar4 = (undefined4 *)*plVar11;
          *(undefined4 *)(puVar10 + 0xc) = puVar4[4];
          uVar5 = puVar4[1];
          uVar6 = puVar4[2];
          uVar7 = puVar4[3];
          *(undefined4 *)puVar2 = *puVar4;
          *(undefined4 *)((longlong)puVar10 + 0x54) = uVar5;
          *(undefined4 *)(puVar10 + 0xb) = uVar6;
          *(undefined4 *)((longlong)puVar10 + 0x5c) = uVar7;
LAB_14357ce35:
          *plVar11 = *plVar11 + 0x14;
        }
      }
      else {
LAB_14357ce83:
        (*pcVar12)(plVar11,puVar2,0x14);
      }
    }
    FUN_14170c4c2((undefined4 *)((longlong)puVar10 + 0x6c),param_2);
  }
  cVar8 = FUN_1407b7eb8(puVar10,&local_b8);
  if (cVar8 != '\0') {
    lVar13 = param_1[2];
    param_1[2] = (longlong)puVar10;
    if (lVar13 != 0) {
      FUN_1401fc67c();
    }
    lVar13 = (**(code **)(*param_1 + 0x4c0))(param_1);
    puVar10 = (undefined8 *)0x0;
    if (lVar13 != 0) {
LAB_14357cec9:
      lVar14 = lVar13;
      lVar13 = lVar14;
      if (*(longlong *)(lVar14 + 0x20) != 0) goto code_r0x00014357ced8;
      goto LAB_14357ceec;
    }
  }
LAB_14357cef7:
  local_b8 = &PTR_FUN_14a388320;
  if (local_88 != 0) {
    plVar11 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar11 = local_68;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (puVar10 != (undefined8 *)0x0) {
    FUN_1401fc67c(puVar10);
  }
LAB_14357cf2a:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014357ced8:
  lVar13 = *(longlong *)(lVar14 + 0x20);
  if ((*(uint *)(lVar14 + 8) >> 0x1c & 1) != 0) {
    lVar13 = FUN_142840154(lVar14);
LAB_14357ceec:
    if (lVar13 == 0) {
      lVar13 = *(longlong *)(lVar14 + 0x20);
      goto LAB_14357cec9;
    }
    goto LAB_14357cef7;
  }
  goto LAB_14357cec9;
}



// FUNCTION 14357cf58 FUN_14357cf58 body=1360 status=ok
// SIG undefined FUN_14357cf58(void)

void FUN_14357cf58(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x10) == 0) goto LAB_14357d110;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_1401fc67c();
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar6 < 0) {
      FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9ae,
                    L"FMaterial::AddRef, Invalid NumDebugRefs %d",iVar6 + 1);
    }
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14357cfe1;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14357cfea;
      goto LAB_14357d071;
    }
  }
  else {
LAB_14357cfe1:
    if (iVar6 != 0x10) {
LAB_14357d071:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_14357cfea;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_14357cfea;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_14357d1d2;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14357e25f);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_14357d1d2:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_14357d252;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_14357d252:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14a9dc3c0;
        puVar16[0x15] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a9dc3a0;
        local_68[0] = FUN_143580cc0;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"ReleaseShaderMap",&DAT_14caf129c);
        if (local_68[0] != (code *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_14357d110;
    }
  }
LAB_14357cfea:
  if (*(longlong *)(param_1 + 0x18) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_1401fc67c();
  }
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xef;
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 < 1) {
      FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9b6,
                    L"FMaterial::Release, Invalid NumDebugRefs %d",iVar6 + -1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
LAB_14357d110:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14357d522 FUN_14357d522 body=57 status=ok
// SIG undefined FUN_14357d522(void)

int FUN_14357d522(longlong param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  LOCK();
  piVar2 = (int *)(param_1 + 8);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  iVar1 = iVar3 + -1;
  if (iVar3 < 1) {
    FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9b6,
                  L"FMaterial::Release, Invalid NumDebugRefs %d",iVar1);
  }
  return iVar1;
}



// FUNCTION 14357d55c FUN_14357d55c body=1531 status=ok
// SIG undefined FUN_14357d55c(void)

void FUN_14357d55c(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  undefined ***pppuVar17;
  uint *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 auStack_b8 [32];
  code **local_98;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  uint local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar15 = *(uint *)(param_1 + 1);
  uVar20 = (ulonglong)uVar15;
  if ((int)uVar15 < 1) goto LAB_14357d745;
  lVar5 = *param_1;
  uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
  *param_1 = 0;
  param_1[1] = 0;
  lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = *(int *)(lVar21 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar9 != 2) {
      if (iVar9 != 1) goto LAB_14357d5b9;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_14357d5c2;
      goto LAB_14357d697;
    }
LAB_14357d5c2:
    lVar21 = 0;
    do {
      plVar6 = *(longlong **)(lVar5 + lVar21);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar7 = *(longlong *)(lVar5 + lVar21);
      if (lVar7 != 0) {
        *(undefined8 *)(lVar5 + lVar21) = 0;
        LOCK();
        piVar1 = (int *)(lVar7 + 8);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 < 1) {
          FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9b6,
                        L"FMaterial::Release, Invalid NumDebugRefs %d",iVar9 + -1);
        }
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)*plVar6)(plVar6,1);
      }
      lVar21 = lVar21 + 8;
    } while (uVar20 * 8 - lVar21 != 0);
  }
  else {
LAB_14357d5b9:
    if (iVar9 == 0x10) goto LAB_14357d5c2;
LAB_14357d697:
    if (DAT_14ca9a438 != '\0') {
LAB_14357d6c8:
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar2;
        if (puVar13 != (uint *)0x0) goto LAB_14357d80d;
        while( true ) {
          uVar16 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar16 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar16 | 1;
            __tlregdtor(&LAB_14357e25f);
          }
          lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar21 + 0x310);
          *(undefined8 *)(lVar21 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar2 = puVar12;
          FUN_140217a48(puVar2);
          puVar13 = (uint *)*puVar2;
LAB_14357d80d:
          puVar19 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar19 + 0x17);
          uVar16 = puVar13[0x12];
          if (puVar18 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar3 = *puVar13;
            *puVar13 = *puVar13 + uVar16 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar16) != 0xffffffff) break;
            puVar13 = (uint *)*puVar2;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar2 = puVar13;
            puVar19 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar19 + 0x17);
            uVar16 = 0;
            if (puVar18 <= puVar13 + 0x4000) {
              uVar16 = 1;
              goto LAB_14357d88d;
            }
          }
        }
        uVar16 = uVar16 + 1;
LAB_14357d88d:
        *(uint **)(puVar13 + 0x10) = puVar18;
        puVar13[0x12] = uVar16;
        iVar9 = 0;
        FUN_1447247dc(puVar19,0);
        *puVar19 = &PTR_FUN_14a9dc430;
        puVar19[0x15] = lVar5;
        *(uint *)(puVar19 + 0x16) = uVar15;
        *(undefined4 *)((longlong)puVar19 + 0xb4) = uVar4;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar9 = 0;
          }
          else {
            uVar20 = 2;
          }
        }
        else {
          iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar20 = 5;
        }
        if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
        }
        puVar19[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar19[9] = puVar19;
        puVar19[10] = puVar19;
        lVar5 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar5 == 0) {
          uVar8 = 1;
          if ((char)uVar20 != '\x06') {
            uVar8 = uVar20;
          }
          uVar20 = uVar8;
          uVar14 = 0;
        }
        else {
          if ((char)uVar20 == '\x06') {
            uVar20 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar5 + 0x30);
        }
        puVar19[0xf] = uVar14;
        puVar19[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar19 + 0x1c) = iVar9;
        if (puVar19 == (undefined8 *)0x0) {
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar19);
          LOCK();
          piVar1 = (int *)(puVar19 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar19)(puVar19,1);
          }
        }
      }
      else {
        local_98 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14a9dc3d0;
        local_88[0] = FUN_143580f1e;
        local_60 = lVar5;
        local_58 = uVar15;
        local_54 = uVar4;
        FUN_14005a792(&DAT_14ca9a440,L"DeferredDestroyMaterialArray",&DAT_14caf12a0);
        if (local_88[0] != (code *)0x0) {
          pppuVar17 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar17 = &local_68;
          }
          (*(code *)(*pppuVar17)[2])();
        }
      }
      FUN_147bb202b(0,0);
      goto LAB_14357d745;
    }
    if ((DAT_14c86a9f8 == '\x01') && (iVar9 = *(int *)(lVar21 + 0xc60), iVar9 != 2)) {
      if (iVar9 == 1) {
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        if (DVar10 == DVar11) goto LAB_14357dad9;
      }
      goto LAB_14357d6c8;
    }
LAB_14357dad9:
    lVar21 = 0;
    do {
      plVar6 = *(longlong **)(lVar5 + lVar21);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar7 = *(longlong *)(lVar5 + lVar21);
      if (lVar7 != 0) {
        *(undefined8 *)(lVar5 + lVar21) = 0;
        LOCK();
        piVar1 = (int *)(lVar7 + 8);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 < 1) {
          FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9b6,
                        L"FMaterial::Release, Invalid NumDebugRefs %d",iVar9 + -1);
        }
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)*plVar6)(plVar6,1);
      }
      lVar21 = lVar21 + 8;
    } while (uVar20 * 8 - lVar21 != 0);
  }
  FUN_147bb202b(lVar5,uVar20);
  if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
  }
LAB_14357d745:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14357db7e FUN_14357db7e body=438 status=ok
// SIG undefined FUN_14357db7e(void)

longlong *
FUN_14357db7e(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
             undefined4 param_5,char param_6)

{
  uint uVar1;
  ulonglong *puVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_8c;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  undefined4 *local_70;
  ulonglong *local_68;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_8c = param_5;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28);
  uVar3 = *(uint *)(lVar8 + 0x68);
  uVar4 = *(ulonglong *)(lVar8 + 0x60);
  uVar9 = lVar8 + 0x60 + ((longlong)uVar4 >> 0x18);
  uVar11 = uVar9;
  if ((uVar4 & 1) == 0) {
    uVar11 = uVar4;
  }
  if ((int)uVar3 < 1) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    uVar13 = uVar3;
    do {
      uVar1 = (uVar13 >> 1) + uVar12;
      puVar2 = (ulonglong *)(uVar11 + (ulonglong)uVar1 * 8);
      uVar10 = *puVar2;
      uVar7 = ((longlong)uVar10 >> 0x18) + (longlong)puVar2;
      if ((uVar10 & 1) == 0) {
        uVar7 = uVar10;
      }
      if (*(ulonglong *)(uVar7 + 0x60) < *(ulonglong *)(param_4 + 0x20)) {
        uVar12 = uVar1 + (uVar13 & 1);
      }
      bVar6 = 1 < uVar13;
      uVar13 = uVar13 >> 1;
    } while (bVar6);
  }
  local_98 = param_2;
  local_58 = param_3;
  local_50 = param_4;
  if ((int)uVar12 < (int)uVar3) {
    uVar7 = (ulonglong)uVar12;
    puVar2 = (ulonglong *)(uVar11 + uVar7 * 8);
    uVar11 = *puVar2;
    uVar10 = ((longlong)uVar11 >> 0x18) + (longlong)puVar2;
    if ((uVar11 & 1) == 0) {
      uVar10 = uVar11;
    }
    if (*(ulonglong *)(param_4 + 0x20) < *(ulonglong *)(uVar10 + 0x60)) goto LAB_14357dca9;
    if ((uVar4 & 1) == 0) {
      uVar9 = uVar4;
    }
    local_60 = *(ulonglong *)(uVar9 + uVar7 * 8);
    if ((local_60 & 1) != 0) {
      local_60 = ((longlong)local_60 >> 0x18) + uVar9 + uVar7 * 8;
    }
    if (local_60 != 0) {
      lVar8 = FUN_144b1d0c2(local_60,param_3 + 0x28,param_5);
      if (lVar8 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x18);
        *param_2 = lVar8;
        param_2[1] = lVar5;
        goto LAB_14357dcfb;
      }
    }
  }
  else {
LAB_14357dca9:
    local_60 = 0;
  }
  if (param_6 != '\0') {
    local_80 = &local_50;
    local_78 = &local_58;
    local_70 = &param_5;
    local_68 = &local_60;
    local_88 = param_1;
    FUN_14357dd36();
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14357dcfb:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14357dd36 FUN_14357dd36 body=1232 status=ok
// SIG undefined FUN_14357dd36(void)

void FUN_14357dd36(longlong *param_1)

{
  uint uVar1;
  ulonglong *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  longlong local_e0 [2];
  uint local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  longlong local_98;
  longlong lStack_90;
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  int iStack_70;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar17 = (longlong *)*param_1;
  local_e8 = plVar17[2];
  if (local_e8 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caec620);
    lVar18 = local_e8;
    *(int *)(local_e8 + 0x74) = *(int *)(local_e8 + 0x74) + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caec620);
    lVar18 = *(longlong *)(lVar18 + 0x28);
    uVar23 = *(uint *)(lVar18 + 0x68);
    uVar14 = *(ulonglong *)(lVar18 + 0x60);
    uVar22 = lVar18 + 0x60 + ((longlong)uVar14 >> 0x18);
    uVar20 = uVar22;
    if ((uVar14 & 1) == 0) {
      uVar20 = uVar14;
    }
    if ((int)uVar23 < 1) {
      uVar25 = 0;
    }
    else {
      uVar25 = 0;
      uVar24 = uVar23;
      do {
        uVar1 = (uVar24 >> 1) + uVar25;
        puVar2 = (ulonglong *)(uVar20 + (ulonglong)uVar1 * 8);
        uVar21 = *puVar2;
        uVar16 = ((longlong)uVar21 >> 0x18) + (longlong)puVar2;
        if ((uVar21 & 1) == 0) {
          uVar16 = uVar21;
        }
        if (*(ulonglong *)(uVar16 + 0x60) < *(ulonglong *)(*(longlong *)param_1[1] + 0x20)) {
          uVar25 = uVar1 + (uVar24 & 1);
        }
        bVar8 = 1 < uVar24;
        uVar24 = uVar24 >> 1;
      } while (bVar8);
    }
    if ((int)uVar25 < (int)uVar23) {
      uVar16 = (ulonglong)uVar25;
      puVar2 = (ulonglong *)(uVar20 + uVar16 * 8);
      uVar20 = *puVar2;
      uVar21 = ((longlong)uVar20 >> 0x18) + (longlong)puVar2;
      if ((uVar20 & 1) == 0) {
        uVar21 = uVar20;
      }
      if (*(ulonglong *)(uVar21 + 0x60) <= *(ulonglong *)(*(longlong *)param_1[1] + 0x20)) {
        if ((uVar14 & 1) == 0) {
          uVar22 = uVar14;
        }
        uVar14 = *(ulonglong *)(uVar22 + uVar16 * 8);
        if ((uVar14 & 1) != 0) {
          uVar14 = ((longlong)uVar14 >> 0x18) + uVar22 + uVar16 * 8;
        }
        if (uVar14 != 0) {
          FUN_144b1d0c2(uVar14,*(longlong *)param_1[2] + 0x28,*(undefined4 *)param_1[3]);
        }
      }
    }
  }
  uVar3 = *(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)((longlong)plVar17 + 0x24) * 2);
  uVar4 = *(undefined4 *)(plVar17[3] + 0x3c);
  (**(code **)(*plVar17 + 0x18))(plVar17,uVar3,*(undefined8 *)param_1[2],*(undefined8 *)param_1[1]);
  lVar18 = *(longlong *)param_1[2];
  lVar19 = *(longlong *)param_1[1];
  FUN_14004e774(&local_d0,plVar17);
  local_88 = local_d0;
  uStack_84 = uStack_cc;
  uStack_80 = uStack_c8;
  uStack_7c = uStack_c4;
  local_78 = (uint *)CONCAT44(uStack_bc,local_c0);
  iStack_70 = iStack_b8;
  uStack_6c = CONCAT44(local_b0,uStack_b4);
  uStack_64 = uStack_ac;
  uStack_60 = uStack_a8;
  uStack_5c = uStack_a4;
  local_58 = local_a0;
  local_50 = CONCAT22(local_50._2_2_,uVar3);
  local_98 = lVar18;
  lStack_90 = lVar19;
  local_4c = uVar4;
  (**(code **)(lVar19 + 0x50))();
  uVar6 = *(undefined8 *)param_1[2];
  uVar5 = *(undefined4 *)param_1[3];
  uVar7 = *(undefined8 *)param_1[1];
  FUN_14004e774(&local_98,plVar17);
  local_f8 = uVar5;
  local_f0 = uVar4;
  FUN_144ae7632(uVar6,uVar3,&local_98,uVar7);
  (**(code **)(*plVar17 + 0x4e8))(plVar17,&local_d0);
  if (*(longlong *)param_1[4] != 0) {
    uVar14 = 0;
    local_78 = (uint *)0x0;
    iStack_70 = 0;
    local_98 = 0;
    lStack_90 = 0;
    uStack_6c = 0xffffffff00000080;
    uStack_64 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_14743d906(*(longlong *)param_1[4],plVar17[3]);
    iVar9 = iStack_70;
    uVar22 = 1;
    iVar15 = 0;
    iVar10 = 0;
    if (iStack_70 != 0) {
      puVar11 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar11 = &local_88;
      }
      uVar23 = *puVar11;
      if (uVar23 == 0) {
        iVar10 = iStack_70 + 0x1e;
        if (-1 < iStack_70 + -1) {
          iVar10 = iStack_70 + -1;
        }
        uVar14 = 0;
        uVar22 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar22 = uVar14;
        }
        iVar15 = 0;
        do {
          if (uVar22 == uVar14) goto LAB_14357e094;
          iVar15 = iVar15 + 0x20;
          uVar23 = puVar11[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar23 == 0);
      }
      else {
        uVar14 = 0;
      }
      uVar22 = (ulonglong)(-uVar23 & uVar23);
      uVar20 = uVar22 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar10 = (iVar15 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      if (iStack_70 <= iVar10) {
        iVar10 = iStack_70;
      }
    }
    if (iVar10 != iStack_70) {
      uVar23 = 0xffffffff;
      do {
        lVar18 = *(longlong *)(local_98 + 8 + (longlong)iVar10 * 0x20);
        uVar20 = *(ulonglong *)(lVar18 + 0xc0);
        plVar17 = (longlong *)
                  ((longlong)(int)(uVar20 >> 1) * 8 +
                  *(longlong *)
                   (*(longlong *)(*(longlong *)(local_98 + 0x10 + (longlong)iVar10 * 0x20) + 0x18) +
                   0x28));
        if ((uVar20 & 1) == 0) {
          plVar17 = (longlong *)(lVar18 + 0xc0);
        }
        FUN_140056680(local_e0,*(undefined8 *)(*plVar17 + 0x18));
        if (local_e0[0] != 0) {
          FUN_1400020a8();
        }
        uVar23 = uVar23 & ~(uint)uVar22;
        puVar11 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar11 = &local_88;
        }
        iVar10 = (int)uVar14;
        lVar18 = (longlong)iVar10;
        uVar25 = puVar11[lVar18] & uVar23;
        if (uVar25 == 0) {
          iVar12 = iStack_70 + 0x1e;
          if (-1 < iStack_70 + -1) {
            iVar12 = iStack_70 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar13 = iVar12;
          if (iVar12 < iVar10) {
            iVar13 = iVar10;
          }
          if (iVar10 < iVar12) {
            lVar19 = 0;
            do {
              uVar25 = puVar11[lVar18 + lVar19 + 1];
              if (uVar25 != 0) {
                uVar14 = (ulonglong)(iVar10 + (int)lVar19 + 1);
                uVar23 = 0xffffffff;
                goto LAB_14357e1ae;
              }
              iVar15 = iVar15 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar13 - lVar18 != lVar19);
            uVar23 = 0xffffffff;
            iVar10 = iVar13;
          }
          uVar14 = (ulonglong)(iVar10 + 1);
          iVar10 = iStack_70;
        }
        else {
LAB_14357e1ae:
          uVar22 = (ulonglong)(-uVar25 & uVar25);
          uVar20 = uVar22 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar10 = (iVar15 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if (iStack_70 <= iVar10) {
            iVar10 = iStack_70;
          }
        }
      } while (iVar10 != iVar9);
    }
LAB_14357e094:
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_147bc5096(&local_98);
  }
  FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0xe87,
                L"Fatal Error Material not found");
  if (CONCAT44(uStack_cc,local_d0) != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != 0) {
    FUN_1401fc67c();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14357e28c FUN_14357e28c body=188 status=ok
// SIG undefined FUN_14357e28c(void)

void FUN_14357e28c(void)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1457b1826(&local_28,0x10,1,0x200000);
  uVar2 = (ulonglong)local_18;
  if ((-1 < (int)local_18) && ((int)local_18 < local_20)) {
    do {
      lVar1 = (**(code **)(**(longlong **)(local_28 + (uVar2 & 0xffffffff) * 8) + 0x2f0))();
      if (lVar1 != 0) {
        FUN_1403ba3b2(lVar1,0);
      }
      uVar2 = (longlong)(int)local_18;
      do {
        uVar3 = uVar2;
        uVar2 = uVar3 + 1;
        local_18 = (uint)uVar2;
        if ((longlong)local_20 <= (longlong)uVar2) break;
      } while (*(longlong *)(local_28 + uVar2 * 8) == 0);
    } while ((-2 < (longlong)uVar3) && ((int)local_18 < local_20));
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14357e34a FUN_14357e34a body=286 status=ok
// SIG undefined FUN_14357e34a(void)

void FUN_14357e34a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  if (*(int *)(param_1 + 0x158) != 0) {
    uVar3 = *param_2;
    uVar7 = (uint)uVar3;
    uVar10 = (uint)((ulonglong)uVar3 >> 0x10);
    iVar8 = (int)((ulonglong)uVar3 >> 0x20);
    iVar9 = (uVar7 << 0x10 | uVar7 & 0xffff) + iVar8 + (uVar10 << 0x13 | uVar10 & 0xffff) +
            ((uVar7 & 0xffff) >> 4);
    uVar10 = ~(iVar9 * 0x8000) + iVar9;
    uVar10 = ((int)uVar10 >> 10 ^ uVar10) * 9;
    uVar10 = (int)uVar10 >> 6 ^ uVar10;
    uVar10 = ~(uVar10 << 0xb) + uVar10;
    uVar2 = *(ushort *)
             (*(longlong *)(param_1 + 0x150) +
             (longlong)(int)(*(int *)(param_1 + 0x158) - 1U & ((int)uVar10 >> 0x10 ^ uVar10)) * 2);
    if (uVar2 != 0) {
      uVar10 = uVar2 - 1;
      lVar4 = *(longlong *)(param_1 + 0x140);
      do {
        uVar6 = (ulonglong)uVar10;
        if ((((*(uint *)(lVar4 + uVar6 * 0x14) == uVar7) &&
             (*(int *)(lVar4 + 8 + uVar6 * 0x14) == iVar8)) &&
            (lVar1 = lVar4 + uVar6 * 0x14,
            *(int *)((longlong)param_2 + 0xc) == (int)*(short *)(lVar1 + 0xc))) &&
           (*(ushort *)(lVar1 + 0xe) >> 0xe == (ushort)*(byte *)(param_2 + 1))) goto LAB_14357e441;
        uVar2 = *(ushort *)(lVar4 + 0xe + uVar6 * 0x14);
        uVar10 = uVar2 & 0x3fff;
      } while ((uVar2 & 0x3fff) != 0);
    }
  }
  uVar10 = 0xffffffff;
LAB_14357e441:
  cVar5 = FUN_147bc5124((longlong *)(param_1 + 0x140),uVar10);
  if (cVar5 == '\0') {
    return;
  }
  FUN_1447a4a8e(param_1,0);
  return;
}



// FUNCTION 14357e468 FUN_14357e468 body=282 status=ok
// SIG undefined FUN_14357e468(void)

undefined8 * FUN_14357e468(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14357e25f);
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



// FUNCTION 14357e582 FUN_14357e582 body=282 status=ok
// SIG undefined FUN_14357e582(void)

void FUN_14357e582(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    uVar3 = *param_2;
    uVar7 = (uint)uVar3;
    uVar10 = (uint)((ulonglong)uVar3 >> 0x10);
    iVar8 = (int)((ulonglong)uVar3 >> 0x20);
    iVar9 = (uVar7 << 0x10 | uVar7 & 0xffff) + iVar8 + (uVar10 << 0x13 | uVar10 & 0xffff) +
            ((uVar7 & 0xffff) >> 4);
    uVar10 = ~(iVar9 * 0x8000) + iVar9;
    uVar10 = ((int)uVar10 >> 10 ^ uVar10) * 9;
    uVar10 = (int)uVar10 >> 6 ^ uVar10;
    uVar10 = ~(uVar10 << 0xb) + uVar10;
    uVar2 = *(ushort *)
             (*(longlong *)(param_1 + 0x170) +
             (longlong)(int)(*(int *)(param_1 + 0x178) - 1U & ((int)uVar10 >> 0x10 ^ uVar10)) * 2);
    if (uVar2 != 0) {
      uVar10 = uVar2 - 1;
      lVar4 = *(longlong *)(param_1 + 0x160);
      do {
        uVar6 = (ulonglong)uVar10;
        if ((((*(uint *)(lVar4 + uVar6 * 0x18) == uVar7) &&
             (*(int *)(lVar4 + 8 + uVar6 * 0x18) == iVar8)) &&
            (lVar1 = lVar4 + uVar6 * 0x18,
            *(int *)((longlong)param_2 + 0xc) == (int)*(short *)(lVar1 + 0xc))) &&
           (*(ushort *)(lVar1 + 0xe) >> 0xe == (ushort)*(byte *)(param_2 + 1))) goto LAB_14357e675;
        uVar2 = *(ushort *)(lVar4 + 0xe + uVar6 * 0x18);
        uVar10 = uVar2 & 0x3fff;
      } while ((uVar2 & 0x3fff) != 0);
    }
  }
  uVar10 = 0xffffffff;
LAB_14357e675:
  cVar5 = FUN_147bc5358((longlong *)(param_1 + 0x160),uVar10);
  if (cVar5 != '\0') {
    FUN_1447a4a8e(param_1,0);
    return;
  }
  return;
}



// FUNCTION 14357e69c FUN_14357e69c body=282 status=ok
// SIG undefined FUN_14357e69c(void)

undefined8 * FUN_14357e69c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14357e25f);
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



// FUNCTION 14357e7b6 FUN_14357e7b6 body=286 status=ok
// SIG undefined FUN_14357e7b6(void)

void FUN_14357e7b6(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  if (*(int *)(param_1 + 0x118) != 0) {
    uVar2 = *param_2;
    uVar6 = (uint)uVar2;
    uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
    iVar7 = (int)((ulonglong)uVar2 >> 0x20);
    iVar8 = (uVar6 << 0x10 | uVar6 & 0xffff) + iVar7 + (uVar9 << 0x13 | uVar9 & 0xffff) +
            ((uVar6 & 0xffff) >> 4);
    uVar9 = ~(iVar8 * 0x8000) + iVar8;
    uVar9 = ((int)uVar9 >> 10 ^ uVar9) * 9;
    uVar9 = (int)uVar9 >> 6 ^ uVar9;
    uVar9 = ~(uVar9 << 0xb) + uVar9;
    uVar1 = *(ushort *)
             (*(longlong *)(param_1 + 0x110) +
             (longlong)(int)(*(int *)(param_1 + 0x118) - 1U & ((int)uVar9 >> 0x10 ^ uVar9)) * 2);
    if (uVar1 != 0) {
      uVar9 = uVar1 - 1;
      lVar3 = *(longlong *)(param_1 + 0x100);
      do {
        lVar5 = (ulonglong)uVar9 * 0x20;
        if ((((*(uint *)(lVar3 + lVar5) == uVar6) && (*(int *)(lVar3 + 8 + lVar5) == iVar7)) &&
            (*(int *)((longlong)param_2 + 0xc) == (int)*(short *)(lVar3 + lVar5 + 0xc))) &&
           (*(ushort *)(lVar3 + lVar5 + 0xe) >> 0xe == (ushort)*(byte *)(param_2 + 1)))
        goto LAB_14357e8ad;
        uVar1 = *(ushort *)(lVar3 + 0xe + lVar5);
        uVar9 = uVar1 & 0x3fff;
      } while ((uVar1 & 0x3fff) != 0);
    }
  }
  uVar9 = 0xffffffff;
LAB_14357e8ad:
  cVar4 = FUN_147bc558c((longlong *)(param_1 + 0x100),uVar9);
  if (cVar4 == '\0') {
    return;
  }
  FUN_1447a4a8e(param_1,0);
  return;
}



// FUNCTION 14357e8d4 FUN_14357e8d4 body=282 status=ok
// SIG undefined FUN_14357e8d4(void)

undefined8 * FUN_14357e8d4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14357e25f);
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



// FUNCTION 14357e9ee FUN_14357e9ee body=134 status=ok
// SIG undefined FUN_14357e9ee(void)

void FUN_14357e9ee(void *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [44];
  undefined1 local_bc [156];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)((longlong)param_1 + 0xa0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    memcpy(local_bc,param_1,0x9c);
    FUN_140c6b438(local_bc,lVar1);
    uVar2 = *(undefined8 *)((longlong)param_1 + 0xa0);
  }
  *(undefined8 *)(*(longlong *)((longlong)param_1 + 0xa8) + 0x68) = uVar2;
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14357ea80 FUN_14357ea80 body=29 status=ok
// SIG undefined FUN_14357ea80(void)

void FUN_14357ea80(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14357ea9e FUN_14357ea9e body=29 status=ok
// SIG undefined FUN_14357ea9e(void)

undefined8 FUN_14357ea9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14357eabc FUN_14357eabc body=282 status=ok
// SIG undefined FUN_14357eabc(void)

undefined8 * FUN_14357eabc(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14357e25f);
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



// FUNCTION 14357ebd6 FUN_14357ebd6 body=186 status=ok
// SIG undefined FUN_14357ebd6(void)

void FUN_14357ebd6(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [44];
  undefined1 local_bc [156];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  lVar2 = *(longlong *)(param_1 + 0x148);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    memcpy(local_bc,(void *)(param_1 + 0xa8),0x9c);
    FUN_140c6b438(local_bc,lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x148);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x68) = uVar3;
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_e8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14357ecaa FUN_14357ecaa body=173 status=ok
// SIG undefined FUN_14357ecaa(void)

void FUN_14357ecaa(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined1 auStack_78 [32];
  undefined2 local_58;
  undefined1 local_56;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_56 = *(undefined1 *)((longlong)param_1 + 0x1a);
  local_58 = *(undefined2 *)(param_1 + 3);
  local_50 = param_1[4];
  if ((local_50 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_18 = *(undefined1 *)(param_1 + 0xb);
  local_48 = *(undefined4 *)(param_1 + 5);
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x2c);
  uStack_40 = *(undefined4 *)(param_1 + 6);
  uStack_3c = *(undefined4 *)((longlong)param_1 + 0x34);
  local_38 = *(undefined4 *)(param_1 + 7);
  uStack_34 = *(undefined4 *)((longlong)param_1 + 0x3c);
  uStack_30 = *(undefined4 *)(param_1 + 8);
  uStack_2c = *(undefined4 *)((longlong)param_1 + 0x44);
  local_28 = *(undefined4 *)(param_1 + 9);
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0x4c);
  uStack_20 = *(undefined4 *)(param_1 + 10);
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0x54);
  uVar1 = FUN_147cccff2(param_1[2],param_1 + 0xc);
  *(undefined1 *)(param_1[0xe] + 0x1ff) = uVar1;
  *(undefined8 *)(param_1[1] + 0x90) = *param_1;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14357ed62 FUN_14357ed62 body=29 status=ok
// SIG undefined FUN_14357ed62(void)

void FUN_14357ed62(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14357ed80 FUN_14357ed80 body=29 status=ok
// SIG undefined FUN_14357ed80(void)

undefined8 FUN_14357ed80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14357ed9e FUN_14357ed9e body=282 status=ok
// SIG undefined FUN_14357ed9e(void)

undefined8 * FUN_14357ed9e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14357e25f);
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



// FUNCTION 14357eeb8 FUN_14357eeb8 body=257 status=ok
// SIG undefined FUN_14357eeb8(void)

void FUN_14357eeb8(longlong param_1)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 auStack_88 [40];
  undefined2 local_60;
  undefined1 local_5e;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  local_5e = *(undefined1 *)(param_1 + 0xc2);
  local_60 = *(undefined2 *)(param_1 + 0xc0);
  local_58 = *(longlong *)(param_1 + 200);
  if ((local_58 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_20 = *(undefined1 *)(param_1 + 0x100);
  local_50 = *(undefined4 *)(param_1 + 0xd0);
  uStack_4c = *(undefined4 *)(param_1 + 0xd4);
  uStack_48 = *(undefined4 *)(param_1 + 0xd8);
  uStack_44 = *(undefined4 *)(param_1 + 0xdc);
  local_40 = *(undefined4 *)(param_1 + 0xe0);
  uStack_3c = *(undefined4 *)(param_1 + 0xe4);
  uStack_38 = *(undefined4 *)(param_1 + 0xe8);
  uStack_34 = *(undefined4 *)(param_1 + 0xec);
  local_30 = *(undefined4 *)(param_1 + 0xf0);
  uStack_2c = *(undefined4 *)(param_1 + 0xf4);
  uStack_28 = *(undefined4 *)(param_1 + 0xf8);
  uStack_24 = *(undefined4 *)(param_1 + 0xfc);
  uVar2 = FUN_147cccff2(*(undefined8 *)(param_1 + 0xb8),param_1 + 0x108);
  *(undefined1 *)(*(longlong *)(param_1 + 0x118) + 0x1ff) = uVar2;
  *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x90) = *(undefined8 *)(param_1 + 0xa8);
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_88);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14357efce FUN_14357efce body=45 status=ok
// SIG undefined FUN_14357efce(void)

void FUN_14357efce(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_14599ed1e(param_1);
      param_1 = param_1 + 0x440;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14357effb FUN_14357effb body=47 status=ok
// SIG undefined FUN_14357effb(void)

void FUN_14357effb(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_145c3271e(param_1 + 1);
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  return;
}



// FUNCTION 14357f02a FUN_14357f02a body=264 status=ok
// SIG undefined FUN_14357f02a(void)

void FUN_14357f02a(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x440;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x440)) {
      uVar5 = uVar4 / 0x440 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x440,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14357f132 FUN_14357f132 body=205 status=ok
// SIG undefined FUN_14357f132(void)

void FUN_14357f132(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = (ulonglong)param_2 * 0x440;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (param_2 < 0x1f) {
        uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar1 = -uVar3 & (uVar1 + uVar3) - 1;
      }
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
    }
  }
  iVar2 = (int)(uVar1 / 0x440);
  iVar4 = 0x7fffffff;
  if ((int)param_2 <= iVar2) {
    iVar4 = iVar2;
  }
  FUN_1446f8d3c(param_1,0,iVar4,0x440,8);
  *(int *)(param_1 + 0xc) = iVar4;
  return;
}



// FUNCTION 14357f1ff FUN_14357f1ff body=99 status=ok
// SIG undefined FUN_14357f1ff(void)

void FUN_14357f1ff(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1 = param_1 + 8;
  param_2 = param_2 + 8;
  do {
    *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
    FUN_147bc57d6(param_1,param_2);
    uVar1 = *(undefined4 *)(param_2 + 0x424);
    uVar2 = *(undefined4 *)(param_2 + 0x428);
    uVar3 = *(undefined4 *)(param_2 + 0x42c);
    *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_2 + 0x420);
    *(undefined4 *)(param_1 + 0x424) = uVar1;
    *(undefined4 *)(param_1 + 0x428) = uVar2;
    *(undefined4 *)(param_1 + 0x42c) = uVar3;
    *(undefined8 *)(param_1 + 0x430) = *(undefined8 *)(param_2 + 0x430);
    param_1 = param_1 + 0x440;
    param_2 = param_2 + 0x440;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14357f262 FUN_14357f262 body=254 status=ok
// SIG undefined FUN_14357f262(void)

void FUN_14357f262(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_488 [40];
  undefined1 local_460 [1056];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_488;
  if ((longlong)(int)param_1[2] != 0) {
    lVar4 = (longlong)(int)param_1[2] * 0x440;
    lVar3 = param_1[1] + 0x430;
    do {
      if (*(longlong *)(lVar3 + -0x430) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(lVar3 + -8);
        FUN_147bc57d6(local_460,lVar3 + -0x428);
        FUN_147cdb92d(*(undefined8 *)(lVar3 + -0x430),lVar3,local_460,uVar5);
        uVar5 = *(undefined8 *)(lVar3 + -0x430);
      }
      lVar2 = *param_1;
      iVar1 = *(int *)(lVar2 + 0x88);
      *(uint *)(lVar2 + 0x88) = iVar1 + 1U;
      if (*(uint *)(lVar2 + 0x8c) < iVar1 + 1U) {
        FUN_147bc588e((longlong *)(lVar2 + 0x80),iVar1);
      }
      *(undefined8 *)(*(longlong *)(lVar2 + 0x80) + (longlong)iVar1 * 8) = uVar5;
      lVar3 = lVar3 + 0x440;
      lVar4 = lVar4 + -0x440;
    } while (lVar4 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_488) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14357f36c FUN_14357f36c body=12 status=ok
// SIG undefined FUN_14357f36c(void)

void FUN_14357f36c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014357f375. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14357f378 FUN_14357f378 body=69 status=ok
// SIG undefined FUN_14357f378(void)

undefined8 * FUN_14357f378(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a9db6d0;
  FUN_14357efce(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14357f3be FUN_14357f3be body=282 status=ok
// SIG undefined FUN_14357f3be(void)

undefined8 * FUN_14357f3be(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14357e25f);
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



// FUNCTION 14357f4d8 FUN_14357f4d8 body=345 status=ok
// SIG undefined FUN_14357f4d8(void)

void FUN_14357f4d8(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_488 [40];
  undefined1 local_460 [1056];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_488;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar5 = param_1[0x16];
  if ((longlong)*(int *)(param_1 + 0x17) == 0) {
    uVar4 = 0;
  }
  else {
    lVar6 = (longlong)*(int *)(param_1 + 0x17) * 0x440;
    lVar5 = lVar5 + 0x430;
    do {
      if (*(longlong *)(lVar5 + -0x430) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(lVar5 + -8);
        FUN_147bc57d6(local_460,lVar5 + -0x428);
        FUN_147cdb92d(*(undefined8 *)(lVar5 + -0x430),lVar5,local_460,uVar7);
        uVar7 = *(undefined8 *)(lVar5 + -0x430);
      }
      lVar3 = param_1[0x15];
      iVar2 = *(int *)(lVar3 + 0x88);
      *(uint *)(lVar3 + 0x88) = iVar2 + 1U;
      if (*(uint *)(lVar3 + 0x8c) < iVar2 + 1U) {
        FUN_147bc588e((longlong *)(lVar3 + 0x80),iVar2);
      }
      *(undefined8 *)(*(longlong *)(lVar3 + 0x80) + (longlong)iVar2 * 8) = uVar7;
      lVar5 = lVar5 + 0x440;
      lVar6 = lVar6 + -0x440;
    } while (lVar6 != 0);
    uVar4 = *(undefined4 *)(param_1 + 0x17);
    lVar5 = param_1[0x16];
  }
  FUN_14357efce(lVar5,uVar4);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_488) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14357f632 FUN_14357f632 body=16 status=ok
// SIG undefined FUN_14357f632(void)

void FUN_14357f632(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_145c26ce2(param_1 + 1);
  return;
}



// FUNCTION 14357f642 FUN_14357f642 body=362 status=ok
// SIG undefined FUN_14357f642(void)

void FUN_14357f642(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  uVar7 = lVar6 * 0xa8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar11 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_14357f6d7;
            lVar6 = uVar9 + 1 + uVar11;
            uVar11 = uVar11 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_14357f6d7:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0xc30c30c30c30c31),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0xa8,8);
  return;
}



// FUNCTION 14357f7ac FUN_14357f7ac body=318 status=ok
// SIG undefined FUN_14357f7ac(void)

undefined8 FUN_14357f7ac(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar5 = (longlong)param_2 * 0xa8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar8 = 0x32;
          if (0x32 < bVar3) {
            uVar8 = (ulonglong)bVar3;
          }
          uVar10 = 0x32 - (ulonglong)bVar3;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar10 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar10 & 0xffffffff] & 0xf) == 0) goto LAB_14357f812;
            lVar2 = uVar8 + 1 + uVar10;
            uVar10 = uVar10 - 1;
          } while (lVar2 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14357f812:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar5 >> 3;
  uVar6 = SUB168(auVar4 * ZEXT816(0xc30c30c30c30c31),0);
  iVar7 = SUB164(auVar4 * ZEXT816(0xc30c30c30c30c31),8);
  iVar9 = 0x7fffffff;
  if ((iVar7 < param_2) || (iVar9 = iVar7, 0 < iVar7)) {
    uVar6 = FUN_1446f8d3c(param_1,0,iVar9,0xa8,8);
  }
  else {
    iVar9 = 0;
  }
  *(int *)(param_1 + 0xc) = iVar9;
  return uVar6;
}



// FUNCTION 14357f8ea FUN_14357f8ea body=288 status=ok
// SIG undefined FUN_14357f8ea(void)

void FUN_14357f8ea(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_1a8 [40];
  undefined1 local_180 [156];
  undefined1 local_e4 [156];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar5 = param_1[2];
  if ((longlong)(int)lVar5 != 0) {
    lVar3 = param_1[1];
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar7);
      if (lVar4 == 0) {
        uVar6 = 0;
      }
      else {
        puVar1 = (undefined8 *)(lVar3 + lVar7);
        memcpy(local_e4,puVar1 + 1,0x9c);
        FUN_140c6b438(local_e4,lVar4);
        uVar6 = *puVar1;
      }
      lVar4 = *param_1;
      iVar2 = *(int *)(lVar4 + 0x78);
      *(uint *)(lVar4 + 0x78) = iVar2 + 1U;
      if (*(uint *)(lVar4 + 0x7c) < iVar2 + 1U) {
        FUN_147bc5914((longlong *)(lVar4 + 0x70),iVar2);
      }
      *(undefined8 *)(*(longlong *)(lVar4 + 0x70) + (longlong)iVar2 * 8) = uVar6;
      lVar7 = lVar7 + 0xa8;
    } while ((longlong)(int)lVar5 * 0xa8 - lVar7 != 0);
  }
  lVar5 = param_1[3];
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    memcpy(local_180,param_1 + 4,0x9c);
    FUN_140c6b438(local_180,lVar5);
    lVar5 = param_1[3];
  }
  *(longlong *)(*param_1 + 0x68) = lVar5;
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14357fa16 FUN_14357fa16 body=29 status=ok
// SIG undefined FUN_14357fa16(void)

void FUN_14357fa16(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14357fa34 FUN_14357fa34 body=57 status=ok
// SIG undefined FUN_14357fa34(void)

undefined8 * FUN_14357fa34(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a9db750;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14357fa6e FUN_14357fa6e body=282 status=ok
// SIG undefined FUN_14357fa6e(void)

undefined8 * FUN_14357fa6e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14357e25f);
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



// FUNCTION 14357fb88 FUN_14357fb88 body=376 status=ok
// SIG undefined FUN_14357fb88(void)

void FUN_14357fb88(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_1a8 [40];
  undefined1 local_180 [156];
  undefined1 local_e4 [156];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0xb8);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0xb0);
    lVar8 = 0;
    do {
      lVar6 = *(longlong *)(lVar5 + lVar8);
      if (lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        puVar2 = (undefined8 *)(lVar5 + lVar8);
        memcpy(local_e4,puVar2 + 1,0x9c);
        FUN_140c6b438(local_e4,lVar6);
        uVar7 = *puVar2;
      }
      lVar6 = *(longlong *)(param_1 + 0xa8);
      iVar4 = *(int *)(lVar6 + 0x78);
      *(uint *)(lVar6 + 0x78) = iVar4 + 1U;
      if (*(uint *)(lVar6 + 0x7c) < iVar4 + 1U) {
        FUN_147bc5914((longlong *)(lVar6 + 0x70),iVar4);
      }
      *(undefined8 *)(*(longlong *)(lVar6 + 0x70) + (longlong)iVar4 * 8) = uVar7;
      lVar8 = lVar8 + 0xa8;
    } while ((longlong)iVar3 * 0xa8 - lVar8 != 0);
  }
  lVar5 = *(longlong *)(param_1 + 0xc0);
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    memcpy(local_180,(void *)(param_1 + 200),0x9c);
    FUN_140c6b438(local_180,lVar5);
    uVar7 = *(undefined8 *)(param_1 + 0xc0);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x68) = uVar7;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1a8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14357fd2a FUN_14357fd2a body=282 status=ok
// SIG undefined FUN_14357fd2a(void)

undefined8 * FUN_14357fd2a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14357e25f);
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



// FUNCTION 14357fe80 FUN_14357fe80 body=282 status=ok
// SIG undefined FUN_14357fe80(void)

undefined8 * FUN_14357fe80(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14357e25f);
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



// FUNCTION 14357ff9a FUN_14357ff9a body=79 status=ok
// SIG undefined FUN_14357ff9a(void)

void FUN_14357ff9a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_140517308();
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_140517308();
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014357ffcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143580004 FUN_143580004 body=12 status=ok
// SIG undefined FUN_143580004(void)

void FUN_143580004(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014358000d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143580010 FUN_143580010 body=29 status=ok
// SIG undefined FUN_143580010(void)

undefined8 FUN_143580010(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14358002e FUN_14358002e body=282 status=ok
// SIG undefined FUN_14358002e(void)

undefined8 * FUN_14358002e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14357e25f);
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



// FUNCTION 143580148 FUN_143580148 body=123 status=ok
// SIG undefined FUN_143580148(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143580148(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14006fee2(_DAT_000000a8,&DAT_14ca85100,DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14006fee2(param_1[0x15],&DAT_14ca85100,*(undefined1 *)(param_1 + 0x16));
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143580192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}


