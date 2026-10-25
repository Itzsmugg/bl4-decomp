// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1428f591a FUN_1428f591a body=415 status=ok
// SIG undefined FUN_1428f591a(void)

void FUN_1428f591a(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong _Size;
  int *piVar8;
  void *_Dst;
  
  _Size = (ulonglong)param_2 * 0x10;
  _Src = (void *)*param_1;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1428f5961;
  while( true ) {
    FUN_144769a66(puVar1);
    puVar4 = (uint *)*puVar1;
LAB_1428f5961:
    _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    if (puVar6 <= puVar4 + 0x4000) break;
    if (0xffa < param_2) {
      puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
      *puVar4 = 0xffffffff;
      puVar4[0x12] = 0;
      _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
      *(uint **)(puVar4 + 0x10) = puVar4 + (ulonglong)param_2 * 4 + 0x18;
      *puVar4 = 1;
      goto LAB_1428f59ee;
    }
    uVar7 = puVar4[0x12];
    while( true ) {
      *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
      LOCK();
      uVar2 = *puVar4;
      *puVar4 = *puVar4 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar4 = (uint *)*puVar1;
      *puVar4 = 0xffffffff;
      *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
      puVar6 = (uint *)((longlong)_Dst + _Size);
      uVar7 = 0;
      if (puVar6 <= puVar4 + 0x4000) {
        uVar7 = 1;
        goto LAB_1428f59e3;
      }
    }
  }
  uVar7 = puVar4[0x12] + 1;
LAB_1428f59e3:
  *(uint **)(puVar4 + 0x10) = puVar6 + 2;
  puVar4[0x12] = uVar7;
LAB_1428f59ee:
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src != (void *)0x0) {
    uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
    if (uVar3 != 0) {
      if (uVar3 < _Size) {
        _Size = uVar3;
      }
      memcpy(_Dst,_Src,_Size);
    }
    piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
    LOCK();
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (*piVar8 == 0) {
      if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
        lVar5 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar5 = FUN_145bdc178();
        }
        FUN_140028df4(lVar5,piVar8);
      }
      else {
        FUN_144705e74(piVar8);
      }
    }
  }
  *param_1 = _Dst;
  return;
}



// FUNCTION 1428f5aba FUN_1428f5aba body=200 status=ok
// SIG undefined FUN_1428f5aba(void)

longlong * FUN_1428f5aba(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x220,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149efd6c0;
  plVar1 = plVar4 + 2;
  FUN_146a1e540(plVar1);
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1469b57ec(&local_30,plVar1);
  plVar3 = local_28;
  *param_1 = (longlong)plVar1;
  param_1[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428f5b86 FUN_1428f5b86 body=29 status=ok
// SIG undefined FUN_1428f5b86(void)

undefined8 FUN_1428f5b86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1428f5bb8 FUN_1428f5bb8 body=93 status=ok
// SIG undefined FUN_1428f5bb8(void)

void FUN_1428f5bb8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149efd930;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1428f5c16 FUN_1428f5c16 body=93 status=ok
// SIG undefined FUN_1428f5c16(void)

void FUN_1428f5c16(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149efd930;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1428f5c74 FUN_1428f5c74 body=126 status=ok
// SIG undefined FUN_1428f5c74(void)

void FUN_1428f5c74(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149efd930;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001428f5ce3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1428f5d0a FUN_1428f5d0a body=34 status=ok
// SIG undefined FUN_1428f5d0a(void)

undefined8 FUN_1428f5d0a(longlong param_1)

{
  FUN_140898514(*(longlong *)(param_1 + 0x18) + 0xf0,DAT_14c979cd2);
  return 1;
}



// FUNCTION 1428f5d2c FUN_1428f5d2c body=48 status=ok
// SIG undefined FUN_1428f5d2c(void)

longlong FUN_1428f5d2c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x268;
  FUN_1469b6826(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1428f5e21 FUN_1428f5e21 body=1372 status=ok
// SIG undefined FUN_1428f5e21(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428f5e21(void)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined **local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  lVar1 = 0;
  FUN_14282b410(L"/Script/Slate",0,0,&PTR_FUN_149ef8480);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/Slate",0,0,&PTR_FUN_149ef86a0);
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_149ef87e0 + lVar1),L"/Script/Slate",
                  *(undefined8 *)((longlong)&PTR_u_EVirtualKeyboardTrigger_149ef87e8 + lVar1),
                  *(undefined8 *)((longlong)&PTR_DAT_149ef87f0 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x40);
  lVar1 = 0;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_149ef8950 + lVar1),L"/Script/Slate",
                  *(undefined8 *)((longlong)&PTR_u_ESelectionMode_149ef8958 + lVar1),
                  *(undefined8 *)((longlong)&PTR_DAT_149ef8960 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x40);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  lVar1 = 0;
  FUN_14282b410(L"/Script/Slate",0,0,&PTR_FUN_149ef8a60);
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_149ef8c20 + lVar1),L"/Script/Slate",
                  *(undefined8 *)((longlong)&PTR_u_EMultiBoxType_149ef8c28 + lVar1),
                  *(undefined8 *)((longlong)&PTR_DAT_149ef8c30 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x40);
  uStack_48 = 1;
  local_50 = &PTR_FUN_149ef8ee0;
  local_58 = 1;
  lVar1 = 0;
  FUN_14282b410(L"/Script/Slate",0,0,&PTR_FUN_149ef8f00);
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_149ef9040 + lVar1),L"/Script/Slate",
                  *(undefined8 *)((longlong)&PTR_u_EDescendantScrollDestination_149ef9048 + lVar1),
                  *(undefined8 *)((longlong)&PTR_DAT_149ef9050 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x40);
  local_50 = &PTR_FUN_149ef9cc0;
  uStack_48 = 1;
  local_58 = 5;
  FUN_14282b410(L"/Script/Slate",&PTR_FUN_149ef9db0,1,&PTR_FUN_149ef9ce0);
  DAT_14c98e468 = 0;
  DAT_14c98e470 = 0;
  atexit(FUN_1428f1d52);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c98e478,L"Slate.Input.MotionFiresUserInteractionEvents",&DAT_14c75ef40,
                L"If this is false, LastUserInteractionTimeUpdateEvent events won\'t be fired based on motion input, and LastInteractionTime won\'t be updated\nSome motion devices report small tiny changes constantly without filtering, so motion input is unhelpful for determining user activity"
               );
  atexit(FUN_1428f2371);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c98e488,L"Slate.Input.PointerUpFiresPointerMoveForDragDrop",&DAT_14c75ef41,
                L"When true, a synthetic pointer move event is fired from pointer up to ensure drag events are called if necessary on any widgets before OnDrop."
               );
  atexit(FUN_1428f23b6);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c98e498,L"Slate.EnableGamepadEditorNavigation",&DAT_14c75ef42,
                L"True implies we allow gamepad navigation outside of the game viewport.");
  atexit(FUN_1428f23fb);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c98e4a8,L"Slate.UseFixedDeltaTime",&DAT_14c98e4b8,
                L"True means we use a constant delta time on every widget tick.");
  atexit(FUN_1428f2440);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c98e4c0,L"Slate.SkipWidgetDrawingInHeadlessMode",&DAT_14c75ef43,
                L"Skip drawing the widgets when running without rendering (e.g. -nullrhi). On by default, disable if there\'s non-visual logic in widget\'s Tick function (as this also skips ticking them)."
               );
  atexit(FUN_1428f2485);
  local_40 = "Direct";
  local_38 = 6;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  local_40 = "ToLeafmost";
  local_38 = 10;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  local_40 = "Tunnel";
  local_38 = 6;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  local_40 = "Bubble";
  local_38 = 6;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  _DAT_14c98e4d0 = 0x4100000041400000;
  _DAT_14c98e4d8 = 0x4040000040800000;
  _DAT_14c98e500 = 0;
  _DAT_14c98e508 = 0;
  _DAT_14c98e4e0 = 0;
  uRam000000014c98e4e8 = 0;
  _DAT_14c98e50c = 0xffffffff00000080;
  _DAT_14c98e514 = 0;
  DAT_14c98e520 = 0;
  _DAT_14c98e528 = 0;
  atexit(FUN_1428f24ca);
  local_40 = (char *)((ulonglong)local_40 & 0xffffffff00000000);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14c98e530,L"Slate.ThrottleWhenMouseIsMoving",&local_40,
                L"Whether to attempt to increase UI responsiveness based on mouse cursor movement.")
  ;
  atexit(FUN_1428f24f9);
  local_40._0_4_ = 0x23;
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14c98e548,L"Slate.TargetFrameRateForResponsiveness",&local_40,
                L"Minimum sustained average frame rate required before we consider the editor to be \"responsive\" for a smooth UI experience"
               );
  atexit(FUN_1428f253e);
  local_40._0_4_ = 0;
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14c98e560,L"Slate.AllowSlateToSleep",&local_40,
                L"Whether Slate should go to sleep when there are no active timers and the user is idle"
               );
  atexit(FUN_1428f2583);
  local_40 = (char *)((ulonglong)local_40._4_4_ << 0x20);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14c98e578,L"Slate.SleepBufferPostInput",&local_40,
                L"The amount of time that must pass without any user action before Slate is put to sleep (provided that there are no active timers)."
               );
  atexit(FUN_1428f25c8);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c98e590,L"Slate.RequireFocusForGamepadInput",&DAT_14c98e5a0,
                L"Whether gamepad input should be ignored by the engine if the application is not currently active"
               );
  atexit(FUN_1428f260d);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c98e5a8,L"Slate.Transform.FullscreenMouseInput",&DAT_14c75ef44,
                L"Set true to transform mouse input to account for viewport stretching at fullscreen resolutions not natively supported by the monitor."
               );
  atexit(FUN_1428f2652);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c98e5b8,L"Slate.EnableTooltips",&DAT_14c75ef45,
                L"Whether to allow tooltips to spawn at all.");
  atexit(FUN_1428f2697);
  DAT_14c98e618 = 0;
  DAT_14c98e620 = 0;
  atexit(FUN_1428f26dc);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428f6380 FUN_1428f6380 body=69 status=ok
// SIG undefined FUN_1428f6380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428f6380(void)

{
  _DAT_14c98e650 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428f63c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98e658,1);
  return;
}



// FUNCTION 1428f63c5 FUN_1428f63c5 body=69 status=ok
// SIG undefined FUN_1428f63c5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428f63c5(void)

{
  _DAT_14c98e660 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428f6407. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98e668,1);
  return;
}



// FUNCTION 1428f640a FUN_1428f640a body=69 status=ok
// SIG undefined FUN_1428f640a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428f640a(void)

{
  _DAT_14c98e670 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428f644c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98e678,1);
  return;
}



// FUNCTION 1428f644f FUN_1428f644f body=69 status=ok
// SIG undefined FUN_1428f644f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428f644f(void)

{
  _DAT_14c98e680 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428f6491. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98e688,1);
  return;
}



// FUNCTION 1428f6494 FUN_1428f6494 body=69 status=ok
// SIG undefined FUN_1428f6494(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428f6494(void)

{
  _DAT_14c98e690 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428f64d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98e698,1);
  return;
}



// FUNCTION 1428f64d9 FUN_1428f64d9 body=69 status=ok
// SIG undefined FUN_1428f64d9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428f64d9(void)

{
  _DAT_14c98e6a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428f651b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98e6a8,1);
  return;
}



// FUNCTION 1428f651e FUN_1428f651e body=69 status=ok
// SIG undefined FUN_1428f651e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428f651e(void)

{
  _DAT_14c98e6b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428f6560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98e6c0,1);
  return;
}



// FUNCTION 1428f6564 FUN_1428f6564 body=735 status=ok
// SIG undefined FUN_1428f6564(void)

void FUN_1428f6564(longlong param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_57;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 0x20) == 0) || (*param_2 != '\x01')) {
    plVar8 = *(longlong **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (lVar4 != 0) {
      LOCK();
      piVar2 = (int *)(lVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
    }
    goto LAB_1428f6841;
  }
  if (*(char *)(param_1 + 0x48) != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  plVar8 = *(longlong **)(param_2 + 0x30);
  if (plVar8 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x60) = uVar3;
    plVar7 = *(longlong **)(param_1 + 0x68);
    if (plVar7 != (longlong *)0x0) {
LAB_1428f66ee:
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      *(longlong **)(param_1 + 0x68) = plVar8;
      if (plVar8 != (longlong *)0x0) goto LAB_1428f66c0;
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x60) = uVar3;
    if (*(longlong **)(param_1 + 0x68) != plVar8) {
      LOCK();
      *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(param_1 + 0x68);
      if (plVar7 != (longlong *)0x0) goto LAB_1428f66ee;
      *(longlong **)(param_1 + 0x68) = plVar8;
    }
LAB_1428f66c0:
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  plVar8 = *(longlong **)(param_2 + 0x28);
  plVar7 = *(longlong **)(param_2 + 0x30);
  if (plVar7 == (longlong *)0x0) {
    if (plVar8 == (longlong *)0x0) {
LAB_1428f65e4:
      plVar8 = *(longlong **)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
    }
LAB_1428f6760:
    bVar5 = true;
    plVar7 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
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
    if (plVar8 == (longlong *)0x0) goto LAB_1428f65e4;
    plVar8 = *(longlong **)(param_2 + 0x28);
    plVar7 = *(longlong **)(param_2 + 0x30);
    if (plVar7 == (longlong *)0x0) goto LAB_1428f6760;
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    bVar5 = false;
  }
  local_58 = DAT_14c96b23a;
  local_57 = 1;
  local_50 = 0;
  uStack_48 = 0;
  (**(code **)(*plVar8 + 0x1c0))(plVar8);
  if (!bVar5) {
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  plVar8 = *(longlong **)(param_2 + 0x20);
  if (plVar8 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    plVar7 = *(longlong **)(param_1 + 0x58);
    if (plVar7 != (longlong *)0x0) {
LAB_1428f67d9:
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      *(longlong **)(param_1 + 0x58) = plVar8;
      if (plVar8 != (longlong *)0x0) goto LAB_1428f6805;
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    if (*(longlong **)(param_1 + 0x58) != plVar8) {
      LOCK();
      *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(param_1 + 0x58);
      if (plVar7 != (longlong *)0x0) goto LAB_1428f67d9;
      *(longlong **)(param_1 + 0x58) = plVar8;
    }
LAB_1428f6805:
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  cVar6 = FUN_1414dd3b0(DAT_14c98e618);
  if (cVar6 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))(*(longlong **)(param_1 + 0x20),0xe);
  }
LAB_1428f6841:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428f6884 FUN_1428f6884 body=141 status=ok
// SIG undefined FUN_1428f6884(void)

void FUN_1428f6884(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x0001428f690d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428f6912 FUN_1428f6912 body=1133 status=ok
// SIG undefined FUN_1428f6912(void)

void FUN_1428f6912(longlong param_1,longlong *param_2,undefined8 param_3,int *param_4)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  undefined1 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  char cVar12;
  int iVar13;
  undefined8 uVar14;
  longlong *plVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  float local_190;
  undefined1 **local_188;
  undefined1 local_180;
  undefined1 local_178 [48];
  undefined1 local_148 [16];
  undefined1 *local_138;
  undefined1 *puStack_130;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_100;
  undefined1 local_ff;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  float local_c4;
  float local_c0;
  undefined8 local_bc;
  undefined8 uStack_b4;
  float local_ac;
  float local_a8;
  byte local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (((*(longlong **)(param_1 + 0x1e8) != (longlong *)0x0) &&
      (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x48))(), cVar12 != '\0')) &&
     (plVar6 = *(longlong **)(param_1 + 0x200), plVar6 != (longlong *)0x0)) {
    iVar13 = (int)plVar6[1];
    do {
      if (iVar13 == 0) goto LAB_1428f6971;
      LOCK();
      iVar11 = (int)plVar6[1];
      bVar16 = iVar13 == iVar11;
      if (bVar16) {
        *(int *)(plVar6 + 1) = iVar13 + 1;
        iVar11 = iVar13;
      }
      iVar13 = iVar11;
      UNLOCK();
    } while (!bVar16);
    lVar7 = *(longlong *)(param_1 + 0x1f8);
    if ((lVar7 != 0) && (lVar7 == *param_2)) {
      (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x28))
                (*(longlong **)(param_1 + 0x1e8),&local_e8);
      plVar2 = DAT_14c98e618;
      if ((local_e8 != (longlong *)0x0) && ((*(byte *)((longlong)local_e8 + 0x39) & 0x19) != 0)) {
        fVar17 = (float)(**(code **)(*DAT_14c98e618 + 0x58))(DAT_14c98e618);
        plVar15 = *(longlong **)(lVar7 + 0x510);
        plVar8 = *(longlong **)(lVar7 + 0x518);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        fVar18 = (float)(**(code **)(*plVar15 + 0xf8))();
        fVar17 = fVar17 * fVar18;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar15 = plVar8 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
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
        local_100 = DAT_14c96b23a;
        local_ff = 1;
        local_f8 = 0;
        uStack_f0 = 0;
        (**(code **)(*local_e8 + 0x1c0))();
        FUN_1405d299c(local_e8,fVar17);
        FUN_1401271b4(*param_2,&local_d8);
        (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x30))
                  (*(longlong **)(param_1 + 0x1e8),&local_138);
        fVar18 = 1.0 / ((float)local_bc * uStack_b4._4_4_ - (float)uStack_b4 * local_bc._4_4_);
        local_c0 = (-local_bc._4_4_ * fVar18 * (float)(double)local_138 +
                    (float)local_bc * fVar18 * (float)(double)puStack_130 +
                   (-local_ac * -local_bc._4_4_ * fVar18 - (float)local_bc * fVar18 * local_a8)) *
                   fVar17;
        local_c4 = (fVar18 * uStack_b4._4_4_ * (float)(double)local_138 +
                    -(float)uStack_b4 * fVar18 * (float)(double)puStack_130 +
                   (-local_ac * fVar18 * uStack_b4._4_4_ - local_a8 * -(float)uStack_b4 * fVar18)) *
                   fVar17;
        plVar15 = &DAT_14c84635c;
        if ((*(byte *)((longlong)local_e8 + 0x31) & 0x20) != 0) {
          plVar15 = local_e8 + 0x2d;
        }
        local_d8 = *plVar15;
        local_a8 = local_c4 * 0.0 + local_c0 + 0.0;
        local_ac = local_c0 * 0.0 + local_c4 + 0.0;
        local_bc = 0x3f800000;
        uStack_b4 = 0x3f80000000000000;
        local_a4 = local_a4 & 0xfe;
        local_cc = CONCAT44(local_c0 + 0.0,local_c4 + 0.0);
        local_d0 = 0x3f800000;
        uVar5 = *(undefined1 *)(*param_2 + 0x3a);
        local_138 = &DAT_3f8000003f800000;
        puStack_130 = &DAT_3f8000003f800000;
        local_128 = &DAT_3f8000003f800000;
        puStack_120 = &DAT_3f8000003f800000;
        local_118 = 0x3f19999a;
        uStack_114 = 0x3f19999a;
        uStack_110 = 0x3f19999a;
        uStack_10c = 0x3f19999a;
        iVar13 = *param_4;
        *param_4 = iVar13 + 1;
        FUN_146980a5e(*param_2,local_148);
        dVar3 = (double)plVar2[0x7c];
        dVar4 = (double)plVar2[0x7d];
        uVar10 = (**(code **)(*plVar2 + 0x60))(plVar2);
        uVar9 = *(undefined8 *)(*param_2 + 0x380);
        uVar14 = FUN_14287bc5c();
        local_198 = uVar10;
        local_190 = (float)(dVar3 - dVar4);
        FUN_142877efe(local_178,*param_2,uVar14,uVar9);
        local_188 = &local_138;
        local_198 = param_3;
        local_190 = (float)(iVar13 + 1);
        local_180 = uVar5;
        FUN_14016eaf2(local_e8,local_178,&local_d8,local_148);
      }
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_e0 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar1 = (int *)((longlong)local_e0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_e0 + 0x10))(local_e0);
          }
        }
      }
    }
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
LAB_1428f6971:
  if ((local_a0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428f6d80 FUN_1428f6d80 body=1144 status=ok
// SIG undefined FUN_1428f6d80(void)

void FUN_1428f6d80(longlong param_1,longlong *param_2,undefined8 param_3,int *param_4)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  float *pfVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  float local_1a0;
  undefined1 **local_198;
  undefined1 local_190;
  undefined1 local_179;
  longlong *local_178;
  longlong *local_170;
  undefined1 local_168 [48];
  undefined1 local_138 [16];
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f0;
  undefined1 local_ef;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  float local_c4;
  float local_c0;
  undefined8 local_bc;
  undefined8 uStack_b4;
  float local_ac;
  float local_a8;
  byte local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar4 = *(longlong **)(param_1 + 0x58);
  if (plVar4 != (longlong *)0x0) {
    iVar13 = (int)plVar4[1];
    do {
      if (iVar13 == 0) goto LAB_1428f6dd9;
      LOCK();
      iVar12 = (int)plVar4[1];
      bVar16 = iVar13 == iVar12;
      if (bVar16) {
        *(int *)(plVar4 + 1) = iVar13 + 1;
        iVar12 = iVar13;
      }
      iVar13 = iVar12;
      UNLOCK();
    } while (!bVar16);
    if ((((*(char *)(param_1 + 0x48) == '\x01') &&
         (lVar5 = *(longlong *)(param_1 + 0x50), lVar5 != 0)) && (lVar5 == *param_2)) &&
       (plVar6 = *(longlong **)(param_1 + 0x68), plVar6 != (longlong *)0x0)) {
      iVar13 = (int)plVar6[1];
      do {
        if (iVar13 == 0) goto LAB_1428f71cf;
        LOCK();
        iVar12 = (int)plVar6[1];
        bVar16 = iVar13 == iVar12;
        if (bVar16) {
          *(int *)(plVar6 + 1) = iVar13 + 1;
          iVar12 = iVar13;
        }
        iVar13 = iVar12;
        UNLOCK();
      } while (!bVar16);
      plVar7 = *(longlong **)(param_1 + 0x60);
      if (plVar7 != (longlong *)0x0) {
        local_170 = DAT_14c98e618;
        fVar17 = (float)(**(code **)(*DAT_14c98e618 + 0x58))();
        plVar8 = *(longlong **)(lVar5 + 0x510);
        plVar9 = *(longlong **)(lVar5 + 0x518);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        fVar18 = (float)(**(code **)(*plVar8 + 0xf8))();
        fVar17 = fVar17 * fVar18;
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
        local_f0 = DAT_14c96b23a;
        local_ef = 1;
        local_e8 = 0;
        uStack_e0 = 0;
        (**(code **)(*plVar7 + 0x1c0))(plVar7);
        FUN_1405d299c(plVar7,fVar17);
        FUN_14007d9be(param_1,&local_d8,10);
        FUN_1401271b4(*param_2,&local_d8);
        fVar18 = 1.0 / ((float)local_bc * uStack_b4._4_4_ - (float)uStack_b4 * local_bc._4_4_);
        pfVar15 = (float *)&DAT_14c84635c;
        if ((*(byte *)((longlong)plVar7 + 0x31) & 0x20) != 0) {
          pfVar15 = (float *)(plVar7 + 0x2d);
        }
        local_c0 = (-local_bc._4_4_ * fVar18 * (float)local_d8 +
                    (float)local_bc * fVar18 * local_d8._4_4_ +
                   (-local_ac * -local_bc._4_4_ * fVar18 - (float)local_bc * fVar18 * local_a8)) *
                   fVar17 - pfVar15[1] * DAT_14c75ef4c * 0.5;
        local_c4 = (fVar18 * uStack_b4._4_4_ * (float)local_d8 +
                    -(float)uStack_b4 * fVar18 * local_d8._4_4_ +
                   (-local_ac * fVar18 * uStack_b4._4_4_ - local_a8 * -(float)uStack_b4 * fVar18)) *
                   fVar17 - DAT_14c75ef4c * *pfVar15 * 0.5;
        local_d8 = CONCAT44(pfVar15[1] * DAT_14c75ef4c,DAT_14c75ef4c * *pfVar15);
        local_a8 = local_c4 * 0.0 + local_c0 + 0.0;
        local_ac = local_c0 * 0.0 + local_c4 + 0.0;
        local_bc = 0x3f800000;
        uStack_b4 = 0x3f80000000000000;
        local_a4 = local_a4 & 0xfe;
        local_cc = CONCAT44(local_c0 + 0.0,local_c4 + 0.0);
        local_d0 = 0x3f800000;
        local_179 = *(undefined1 *)(*param_2 + 0x3a);
        local_128 = &DAT_3f8000003f800000;
        puStack_120 = &DAT_3f8000003f800000;
        local_118 = &DAT_3f8000003f800000;
        puStack_110 = &DAT_3f8000003f800000;
        local_108 = 0x3f19999a;
        uStack_104 = 0x3f19999a;
        uStack_100 = 0x3f19999a;
        uStack_fc = 0x3f19999a;
        iVar13 = *param_4;
        *param_4 = iVar13 + 1;
        local_178 = plVar7;
        FUN_146980a5e(*param_2,local_138);
        dVar2 = (double)local_170[0x7c];
        dVar3 = (double)local_170[0x7d];
        uVar11 = (**(code **)(*local_170 + 0x60))();
        uVar10 = *(undefined8 *)(*param_2 + 0x380);
        uVar14 = FUN_14287bc5c();
        local_1a8 = uVar11;
        local_1a0 = (float)(dVar2 - dVar3);
        FUN_142877efe(local_168,*param_2,uVar14,uVar10);
        local_190 = local_179;
        local_1a8 = param_3;
        local_1a0 = (float)(iVar13 + 1);
        local_198 = &local_128;
        FUN_14016eaf2(local_178,local_168,&local_d8,local_138);
      }
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
LAB_1428f71cf:
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
LAB_1428f6dd9:
  if ((local_a0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428f71fa FUN_1428f71fa body=292 status=ok
// SIG undefined FUN_1428f71fa(void)

undefined1 * FUN_1428f71fa(undefined1 *param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = *param_2;
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    plVar2 = *(longlong **)(param_2 + 0x10);
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar2 != plVar3) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(longlong **)(param_1 + 0x10) = plVar2;
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
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = 0;
    plVar2 = *(longlong **)(param_2 + 0x20);
    plVar3 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != plVar3) {
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(longlong **)(param_1 + 0x20) = plVar2;
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
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = 0;
    plVar2 = *(longlong **)(param_2 + 0x30);
    plVar3 = *(longlong **)(param_1 + 0x30);
    if (plVar2 != plVar3) {
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(longlong **)(param_1 + 0x30) = plVar2;
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
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  return param_1;
}



// FUNCTION 1428f731e FUN_1428f731e body=132 status=ok
// SIG undefined FUN_1428f731e(void)

void FUN_1428f731e(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (double)*(float *)(param_2 + 0x24);
  local_30 = (double)*(float *)(param_2 + 0x20);
  FUN_1469a4dec(param_1 + 0x2e8,*(undefined4 *)(param_2 + 0x58),&local_30);
  local_30 = (double)CONCAT44(local_30._4_4_,*(undefined4 *)(param_2 + 0x58));
  puVar1 = (undefined8 *)FUN_1403d055c(param_1 + 0xa8,*(undefined4 *)(param_2 + 0x58),&local_30);
  *puVar1 = *(undefined8 *)(param_2 + 0x20);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428f73a4 FUN_1428f73a4 body=5687 status=ok
// SIG undefined FUN_1428f73a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428f73a4(longlong param_1,undefined8 *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  BOOL BVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  LARGE_INTEGER *pLVar12;
  longlong *plVar13;
  longlong lVar14;
  float *pfVar15;
  undefined1 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  uint uVar20;
  longlong *plVar21;
  int iVar22;
  float fVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  _struct_19 _Var27;
  LARGE_INTEGER LVar28;
  LARGE_INTEGER *pLVar29;
  bool bVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float fVar36;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStack_468 [32];
  undefined1 local_448;
  LARGE_INTEGER *local_440;
  undefined4 local_438;
  longlong local_430;
  undefined4 local_424;
  longlong *local_420;
  longlong *local_418;
  longlong local_410;
  longlong *local_408;
  undefined8 local_400;
  _struct_19 local_3f8;
  undefined4 local_3ec;
  undefined8 *local_3e8;
  float local_3e0;
  float local_3dc;
  LARGE_INTEGER local_3d8;
  longlong *local_3d0;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  longlong local_378;
  longlong local_370 [28];
  undefined8 *local_290;
  uint local_288;
  undefined1 local_280;
  undefined8 local_278;
  longlong *local_270;
  longlong local_268;
  undefined4 local_260;
  LARGE_INTEGER local_250;
  undefined1 local_248 [288];
  undefined1 *local_128;
  ulonglong local_120;
  undefined1 local_118;
  undefined8 local_110;
  longlong *plStack_108;
  longlong local_100;
  ulonglong uStack_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_468;
  local_3e8 = param_2;
  if (DAT_14c75ef45 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(DAT_14c707940 ^ (ulonglong)auStack_468 ^ (ulonglong)auStack_468);
  }
  local_420 = DAT_14c98e618;
  if ((param_3 == '\0') || ((*(char *)(param_1 + 0x48) == '\0' && (DAT_14c98e6c8 != '\x01')))) {
    local_424 = 0;
  }
  else {
    BVar8 = QueryPerformanceCounter(&local_250);
    local_424 = CONCAT31((int3)((uint)BVar8 >> 8),
                         0.05 < ((double)CONCAT71(local_250.QuadPart._1_7_,local_250.s.LowPart._0_1_
                                                 ) * DAT_14c83f420 + 16777216.0) -
                                *(double *)(param_1 + 0x30));
  }
  local_250.s.LowPart._0_1_ = DAT_14c96b238;
  local_128 = (undefined1 *)0x0;
  local_120 = 0x400000000;
  local_118 = 0;
  local_110 = 0;
  plStack_108 = (longlong *)0x0;
  local_100 = 0;
  uStack_f8 = 0;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar22 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar22 != 2)) {
    if (iVar22 == 1) {
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_1428f8669;
    }
  }
  else {
LAB_1428f8669:
    if (((DAT_14c968088 == (longlong *)0x0) ||
        (cVar6 = (**(code **)(*DAT_14c968088 + 0x80))(), cVar6 == '\0')) &&
       (*(longlong *)(param_1 + 0x1e8) == 0)) {
      if ((int)local_420[0x2b] != *(int *)((longlong)local_420 + 0x184)) {
        uVar3 = (uint)((ulonglong)DAT_14c966e98 >> 0x10);
        uVar20 = (uint)DAT_14c966e98 & 0xffff;
        plVar18 = local_420 + 0x31;
        if ((longlong *)local_420[0x32] != (longlong *)0x0) {
          plVar18 = (longlong *)local_420[0x32];
        }
        uVar3 = *(uint *)((longlong)plVar18 +
                         (ulonglong)
                         ((int)local_420[0x33] - 1U &
                         (int)((ulonglong)DAT_14c966e98 >> 0x20) +
                         ((uint)DAT_14c966e98 << 0x10 | uVar20) + (uVar3 << 0x13 | uVar3 & 0xffff) +
                         (uVar20 >> 4)) * 4);
        param_2 = (undefined8 *)(ulonglong)uVar3;
        if (uVar3 != 0xffffffff) {
          do {
            param_2 = (undefined8 *)((longlong)(int)param_2 * 0x20);
            if (*(longlong *)(local_420[0x2a] + (longlong)param_2) == DAT_14c966e98)
            goto LAB_1428f7520;
            uVar3 = *(uint *)((longlong)param_2 + local_420[0x2a] + 0x18);
            param_2 = (undefined8 *)(ulonglong)uVar3;
          } while (uVar3 != 0xffffffff);
        }
      }
      cVar6 = (**(code **)(*local_420 + 8))();
      plVar21 = DAT_14c968090;
      plVar18 = DAT_14c968088;
      if (cVar6 == '\0') {
        if (DAT_14c968090 == (longlong *)0x0) {
          cVar6 = (**(code **)(*DAT_14c968088 + 0x60))();
        }
        else {
          LOCK();
          *(int *)(DAT_14c968090 + 1) = (int)DAT_14c968090[1] + 1;
          UNLOCK();
          cVar6 = (**(code **)(*plVar18 + 0x60))();
          LOCK();
          plVar18 = plVar21 + 1;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)*plVar18 == 0) {
            (**(code **)*plVar21)();
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))();
            }
          }
        }
        if (cVar6 == '\0') goto LAB_1428f7520;
      }
      plVar18 = local_420;
      uVar4 = *(undefined4 *)(param_1 + 0x18);
      FUN_1401b43e8(local_420,&local_3c8);
      FUN_14007d9be(param_1,&local_3d8,10);
      local_440 = (LARGE_INTEGER *)CONCAT44(local_440._4_4_,uVar4);
      local_448 = 1;
      (**(code **)(*plVar18 + 0x108))(plVar18,&local_3b8,local_3d8.QuadPart,&local_3c8);
      FUN_1401b439d(CONCAT44(fStack_3c4,local_3c8),fStack_3c0);
      if (CONCAT44(fStack_3c4,local_3c8) != 0) {
        FUN_1400020a8();
      }
      if (0 < (int)local_288) {
        plVar18 = *(longlong **)(param_1 + 0x290);
        if (plVar18 == (longlong *)0x0) {
          plVar18 = (longlong *)0x0;
          lVar24 = 0;
        }
        else {
          iVar22 = (int)plVar18[1];
          lVar24 = 0;
          do {
            if (iVar22 == 0) {
              plVar18 = (longlong *)0x0;
              goto LAB_1428f8848;
            }
            LOCK();
            iVar9 = (int)plVar18[1];
            bVar31 = iVar22 == iVar9;
            if (bVar31) {
              *(int *)(plVar18 + 1) = iVar22 + 1;
              iVar9 = iVar22;
            }
            iVar22 = iVar9;
            UNLOCK();
          } while (!bVar31);
          lVar24 = *(longlong *)(param_1 + 0x288);
        }
LAB_1428f8848:
        plVar21 = local_290 + 7;
        if (local_290 == (undefined8 *)0x0) {
          plVar21 = &local_378;
        }
        lVar14 = *plVar21;
        plVar21 = local_370;
        if (local_290 != (undefined8 *)0x0) {
          plVar21 = local_290 + 8;
        }
        plVar21 = (longlong *)*plVar21;
        if (plVar21 == (longlong *)0x0) {
          bVar31 = lVar24 != lVar14 || lVar24 == 0;
        }
        else {
          LOCK();
          *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
          UNLOCK();
          bVar31 = lVar24 != lVar14 || lVar24 == 0;
          LOCK();
          plVar13 = plVar21 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
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
        if (plVar18 != (longlong *)0x0) {
          LOCK();
          plVar21 = plVar18 + 1;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)*plVar21 == 0) {
            (**(code **)*plVar18)(plVar18);
            LOCK();
            piVar1 = (int *)((longlong)plVar18 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
            }
          }
        }
        if (bVar31) {
          local_250.s.LowPart._0_1_ = (undefined1)local_3b8;
          FUN_1401bb734(local_248,&uStack_3b0);
          plVar18 = plStack_108;
          local_118 = local_280;
          if (local_270 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_270 + 1) = (int)local_270[1] + 1;
            UNLOCK();
          }
          local_110 = local_278;
          plStack_108 = local_270;
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            plVar21 = plVar18 + 1;
            *(int *)plVar21 = (int)*plVar21 + -1;
            UNLOCK();
            if ((int)*plVar21 == 0) {
              (**(code **)*plVar18)(plVar18);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
              }
            }
          }
          FUN_1401bb840(&local_100,&local_268);
        }
      }
      FUN_1447fa2ac(local_268,local_260);
      if (local_268 != 0) {
        FUN_1400020a8();
      }
      if (local_270 != (longlong *)0x0) {
        LOCK();
        plVar18 = local_270 + 1;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)*plVar18 == 0) {
          (**(code **)*local_270)(local_270);
          LOCK();
          piVar1 = (int *)((longlong)local_270 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_270 + 0x10))(local_270);
          }
        }
      }
      param_2 = (undefined8 *)(ulonglong)local_288;
      puVar19 = local_290;
      if (local_290 == (undefined8 *)0x0) {
        puVar19 = &uStack_3b0;
      }
      FUN_1447157bd(puVar19,param_2);
      if (local_290 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1428f7520:
  lVar24 = (longlong)(int)local_120;
  local_430 = param_1;
  if (lVar24 < 1) {
    local_400 = 0;
    plVar18 = (longlong *)0x0;
    LVar28._0_4_ = 0;
    LVar28._4_4_ = 0;
    local_418 = (longlong *)0x0;
    bVar31 = false;
  }
  else {
    uVar25 = lVar24 + 1;
    lVar24 = lVar24 * 0x48 + -8;
    local_418 = (longlong *)0x0;
    LVar28._0_4_ = 0;
    LVar28._4_4_ = 0;
    plVar18 = (longlong *)0x0;
    local_400 = 0;
    fVar38 = unaff_XMM6_Da;
    fVar37 = unaff_XMM7_Da;
    fVar23 = unaff_XMM8_Da;
    fVar36 = unaff_XMM9_Da;
    bVar30 = false;
    do {
      puVar16 = local_128;
      if (local_128 == (undefined1 *)0x0) {
        puVar16 = local_248;
      }
      if ((_struct_19)LVar28.QuadPart == (_struct_19)0x0) {
        param_2 = &local_3b8;
        (**(code **)(**(longlong **)(puVar16 + lVar24 + -8) + 0x1b0))
                  (*(longlong **)(puVar16 + lVar24 + -8),param_2);
        if (((_struct_19)local_3b8 == (_struct_19)0x0) ||
           (cVar6 = (**(code **)(*(longlong *)local_3b8 + 0x20))(), cVar6 != '\0')) {
          LVar28._0_4_ = 0;
          LVar28._4_4_ = 0;
        }
        else {
          local_400 = *(undefined8 *)(puVar16 + lVar24 + -8);
          plVar21 = *(longlong **)(puVar16 + lVar24);
          if (plVar21 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
            UNLOCK();
          }
          if (plVar21 == plVar18) {
            if (plVar18 == (longlong *)0x0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              LOCK();
              plVar17 = plVar21 + 1;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              plVar13 = plVar18;
              if ((int)*plVar17 == 0) {
                (**(code **)*plVar21)(plVar21);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar22 = *piVar1;
                UNLOCK();
                plVar17 = plVar21;
                plVar21 = plVar18;
                goto joined_r0x0001428f7715;
              }
            }
          }
          else {
            plVar13 = plVar21;
            if (plVar18 != (longlong *)0x0) {
              LOCK();
              plVar17 = plVar18 + 1;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)*plVar17 == 0) {
                (**(code **)*plVar18)(plVar18);
                LOCK();
                piVar1 = (int *)((longlong)plVar18 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar22 = *piVar1;
                UNLOCK();
                plVar17 = plVar18;
joined_r0x0001428f7715:
                plVar13 = plVar21;
                if (iVar22 == 0) {
                  (**(code **)(*plVar17 + 0x10))();
                }
              }
            }
          }
          plVar18 = plVar13;
          plVar13 = uStack_3b0;
          LVar28 = local_3b8;
          plVar21 = local_418;
          if (uStack_3b0 != (longlong *)0x0) {
            LOCK();
            *(int *)(uStack_3b0 + 1) = (int)uStack_3b0[1] + 1;
            UNLOCK();
          }
          if (local_418 != (longlong *)0x0) {
            LOCK();
            plVar17 = local_418 + 1;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)*plVar17 == 0) {
              (**(code **)*local_418)();
              LOCK();
              piVar1 = (int *)((longlong)plVar21 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar21 + 0x10))();
              }
            }
          }
          local_418 = plVar13;
        }
        plVar21 = uStack_3b0;
        if (uStack_3b0 != (longlong *)0x0) {
          LOCK();
          plVar13 = uStack_3b0 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*uStack_3b0)();
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))();
            }
          }
        }
      }
      unaff_XMM6_Da = fVar38;
      unaff_XMM7_Da = fVar37;
      unaff_XMM8_Da = fVar23;
      unaff_XMM9_Da = fVar36;
      bVar31 = bVar30;
      if ((*(byte *)(*(longlong *)(puVar16 + lVar24 + -8) + 0x30) & 8) != 0) {
        fVar41 = *(float *)(puVar16 + lVar24 + -0x38);
        fVar34 = fVar41 * 0.0;
        unaff_XMM7_Da = *(float *)(puVar16 + lVar24 + -0x30) + fVar34;
        fVar32 = *(float *)(puVar16 + lVar24 + -0x34) + fVar34;
        fVar42 = fVar34 + unaff_XMM7_Da;
        fVar33 = fVar41 * *(float *)(puVar16 + lVar24 + -0x40) + fVar32;
        fVar39 = *(float *)(puVar16 + lVar24 + -0x3c) * fVar41 + unaff_XMM7_Da;
        fVar40 = fVar34 + fVar32;
        fVar35 = *(float *)(puVar16 + lVar24 + -0x3c) * fVar41 + fVar42;
        fVar34 = fVar34 + fVar33;
        fVar41 = fVar42;
        if (fVar42 <= fVar39) {
          fVar41 = fVar39;
        }
        if (fVar41 <= fVar35) {
          fVar41 = fVar35;
        }
        unaff_XMM6_Da = unaff_XMM7_Da;
        if (unaff_XMM7_Da <= fVar41) {
          unaff_XMM6_Da = fVar41;
        }
        fVar41 = fVar33;
        if (fVar33 <= fVar40) {
          fVar41 = fVar40;
        }
        if (fVar41 <= fVar34) {
          fVar41 = fVar34;
        }
        unaff_XMM8_Da = fVar32;
        if (fVar32 <= fVar41) {
          unaff_XMM8_Da = fVar41;
        }
        if (fVar39 <= fVar42) {
          fVar42 = fVar39;
        }
        if (fVar35 <= fVar42) {
          fVar42 = fVar35;
        }
        if (fVar42 <= unaff_XMM7_Da) {
          unaff_XMM7_Da = fVar42;
        }
        if (fVar40 <= fVar33) {
          fVar33 = fVar40;
        }
        if (fVar34 <= fVar33) {
          fVar33 = fVar34;
        }
        if (fVar33 <= fVar32) {
          fVar32 = fVar33;
        }
        bVar31 = true;
        unaff_XMM9_Da = fVar32;
        if (bVar30) {
          if (fVar38 <= unaff_XMM6_Da) {
            fVar38 = unaff_XMM6_Da;
          }
          if (fVar23 <= unaff_XMM8_Da) {
            fVar23 = unaff_XMM8_Da;
          }
          if (unaff_XMM7_Da <= fVar37) {
            fVar37 = unaff_XMM7_Da;
          }
          unaff_XMM6_Da = fVar38;
          unaff_XMM7_Da = fVar37;
          unaff_XMM8_Da = fVar23;
          unaff_XMM9_Da = fVar36;
          if (fVar32 <= fVar36) {
            unaff_XMM9_Da = fVar32;
          }
        }
      }
      uVar25 = uVar25 - 1;
      lVar24 = lVar24 + -0x48;
      fVar38 = unaff_XMM6_Da;
      fVar37 = unaff_XMM7_Da;
      fVar23 = unaff_XMM8_Da;
      fVar36 = unaff_XMM9_Da;
      bVar30 = bVar31;
    } while (1 < uVar25);
  }
  plVar21 = *(longlong **)(local_430 + 0x2a0);
  local_3ec = (undefined4)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  if (plVar21 == (longlong *)0x0) {
    plVar21 = (longlong *)0x0;
    _Var27.LowPart = 0;
    _Var27.HighPart = 0;
  }
  else {
    iVar22 = (int)plVar21[1];
    _Var27.LowPart = 0;
    _Var27.HighPart = 0;
    do {
      if (iVar22 == 0) {
        plVar21 = (longlong *)0x0;
        goto LAB_1428f7819;
      }
      LOCK();
      iVar9 = (int)plVar21[1];
      bVar30 = iVar22 == iVar9;
      if (bVar30) {
        *(int *)(plVar21 + 1) = iVar22 + 1;
        iVar9 = iVar22;
      }
      iVar22 = iVar9;
      UNLOCK();
    } while (!bVar30);
    _Var27 = *(_struct_19 *)(local_430 + 0x298);
    local_3ec = 0;
  }
LAB_1428f7819:
  lVar24 = local_430;
  local_408 = plVar18;
  if ((_struct_19)LVar28.QuadPart == _Var27) {
LAB_1428f7989:
    local_410 = 0;
    plVar18 = (longlong *)0x0;
  }
  else {
    if (((*(longlong *)(local_430 + 0x2a8) != 0) &&
        (plVar18 = *(longlong **)(local_430 + 0x2b0), plVar18 != (longlong *)0x0)) &&
       (0 < (int)plVar18[1])) {
      plVar13 = (longlong *)0x0;
      iVar22 = (int)plVar18[1];
      do {
        iVar9 = iVar22;
        if (iVar9 == 0) {
          plVar18 = (longlong *)0x0;
          goto LAB_1428f787b;
        }
        LOCK();
        iVar22 = (int)plVar18[1];
        bVar30 = iVar9 == iVar22;
        if (bVar30) {
          *(int *)(plVar18 + 1) = iVar9 + 1;
          iVar22 = iVar9;
        }
        UNLOCK();
      } while (!bVar30);
      plVar13 = *(longlong **)(local_430 + 0x2a8);
LAB_1428f787b:
      local_3b8._0_4_ = 0;
      local_3b8._4_4_ = 0;
      uStack_3b0 = (longlong *)0x0;
      (**(code **)(*plVar13 + 0xa8))();
      plVar13 = uStack_3b0;
      if (uStack_3b0 != (longlong *)0x0) {
        LOCK();
        plVar17 = uStack_3b0 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          (**(code **)*uStack_3b0)(uStack_3b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      lVar24 = local_430;
      if (iVar9 != 0) {
        LOCK();
        plVar13 = plVar18 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
      }
    }
    if (((_struct_19)LVar28.QuadPart != (_struct_19)0x0) && ((char)local_424 == '\x01')) {
      (**(code **)(*(longlong *)LVar28 + 0x30))(LVar28.QuadPart);
    }
    if ((~(byte)local_424 & (_struct_19)LVar28.QuadPart != (_struct_19)0x0) != 0)
    goto LAB_1428f7989;
    if ((_struct_19)LVar28.QuadPart == (_struct_19)0x0) {
      local_3b8._0_4_ = 0;
      local_3b8._4_4_ = 0;
      uStack_3b0 = (longlong *)0x0;
    }
    else {
      (*(code *)**(undefined8 **)LVar28)(LVar28.QuadPart);
      local_3b8._4_4_ = fStack_3c4;
      local_3b8._0_4_ = local_3c8;
      uStack_3b0 = (longlong *)CONCAT44(fStack_3bc,fStack_3c0);
      if (uStack_3b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_3b0 + 1) = (int)uStack_3b0[1] + 1;
        UNLOCK();
        plVar18 = (longlong *)CONCAT44(fStack_3bc,fStack_3c0);
        if (plVar18 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar18 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar18)(plVar18);
            LOCK();
            piVar1 = (int *)((longlong)plVar18 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
            }
          }
        }
      }
    }
    iVar22 = (int)local_120 + 1;
    local_410 = 0;
    lVar24 = (local_120 & 0xffffffff) * 0x48 + 0x40;
    local_3f8 = _Var27;
    do {
      lVar14 = lVar24;
      iVar22 = iVar22 + -1;
      if (iVar22 < 1) {
        plVar18 = (longlong *)0x0;
        goto LAB_1428f83c4;
      }
      puVar16 = local_128;
      if (local_128 == (undefined1 *)0x0) {
        puVar16 = local_248;
      }
      cVar6 = (**(code **)(**(longlong **)(puVar16 + lVar14 + -0x50) + 0xa8))();
      lVar24 = lVar14 + -0x48;
    } while (cVar6 == '\0');
    local_410 = *(longlong *)(puVar16 + lVar14 + -0x50);
    plVar18 = *(longlong **)(puVar16 + lVar14 + -0x48);
    if (plVar18 == (longlong *)0x0) {
      plVar18 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
    }
LAB_1428f83c4:
    plVar13 = uStack_3b0;
    _Var27 = local_3f8;
    lVar24 = local_430;
    if (uStack_3b0 != (longlong *)0x0) {
      LOCK();
      plVar17 = uStack_3b0 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*uStack_3b0)(uStack_3b0);
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
  if ((bVar31) && (0 < (int)local_120)) {
    FUN_1469a5c0c(local_3e8,&local_3b8,&local_250);
    if ((_struct_19)local_3b8 != (_struct_19)0x0) {
      local_3c8 = -1.0;
      fStack_3c4 = -1.0;
      fStack_3c0 = -1.0;
      fStack_3bc = -1.0;
      local_3d8.s = local_3b8;
      local_3d0 = uStack_3b0;
      if (uStack_3b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_3b0 + 1) = (int)uStack_3b0[1] + 1;
        UNLOCK();
      }
      cVar6 = FUN_1469a9072(local_3e8,&local_3d8,&local_250,&local_3c8);
      plVar13 = local_3d0;
      if (local_3d0 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_3d0 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          (**(code **)*local_3d0)(local_3d0);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      lVar24 = local_430;
      if (cVar6 != '\0') {
        if (unaff_XMM6_Da <= fStack_3bc) {
          unaff_XMM6_Da = fStack_3bc;
        }
        if (unaff_XMM8_Da <= fStack_3c0) {
          unaff_XMM8_Da = fStack_3c0;
        }
        if (fStack_3c4 <= unaff_XMM7_Da) {
          unaff_XMM7_Da = fStack_3c4;
        }
        if (local_3c8 <= unaff_XMM9_Da) {
          unaff_XMM9_Da = local_3c8;
        }
        bVar31 = true;
      }
    }
    plVar13 = uStack_3b0;
    if (uStack_3b0 != (longlong *)0x0) {
      LOCK();
      plVar17 = uStack_3b0 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*uStack_3b0)(uStack_3b0);
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
  fVar38 = *(float *)(lVar24 + 0x2c8);
  fVar37 = *(float *)(lVar24 + 0x2cc);
  if (_Var27 == (_struct_19)0x0) {
    if ((_struct_19)LVar28.QuadPart != (_struct_19)0x0) goto LAB_1428f7afd;
  }
  else {
    cVar6 = (**(code **)(*(longlong *)_Var27 + 0x28))(_Var27);
    if ((cVar6 == '\0') ||
       ((_struct_19)LVar28.QuadPart != (_struct_19)0x0 && (_struct_19)LVar28.QuadPart != _Var27)) {
LAB_1428f7afd:
      FUN_1400bbf02(lVar24,&local_3b8,10);
      fVar37 = (float)local_3b8._4_4_ + _DAT_14c98e644;
      fVar38 = (float)(undefined4)local_3b8 + _DAT_14c98e640;
      if (((_struct_19)LVar28.QuadPart != (_struct_19)0x0) &&
         ((cVar6 = (**(code **)(*(longlong *)LVar28 + 0x28))(LVar28.QuadPart), cVar6 != '\0' &&
          (local_410 == 0)))) {
        uStack_3b0 = (longlong *)(double)fVar37;
        local_3b8 = (LARGE_INTEGER)(double)fVar38;
        (**(code **)(*(longlong *)LVar28 + 0x40))(LVar28.QuadPart);
        fVar38 = (float)(double)local_3b8;
        fVar37 = (float)(double)uStack_3b0;
      }
    }
  }
  fVar23 = 0.0;
  if (*(longlong *)(lVar24 + 0x288) == 0) {
    fVar36 = 0.0;
    fVar23 = 0.0;
  }
  else {
    plVar13 = *(longlong **)(lVar24 + 0x290);
    if ((plVar13 == (longlong *)0x0) || ((int)plVar13[1] < 1)) {
      fVar36 = 0.0;
      lVar24 = local_430;
    }
    else {
      lVar24 = 0;
      iVar22 = (int)plVar13[1];
      do {
        iVar9 = iVar22;
        if (iVar9 == 0) {
          plVar13 = (longlong *)0x0;
          goto LAB_1428f7bf2;
        }
        LOCK();
        iVar22 = (int)plVar13[1];
        bVar30 = iVar9 == iVar22;
        if (bVar30) {
          *(int *)(plVar13 + 1) = iVar9 + 1;
          iVar22 = iVar9;
        }
        UNLOCK();
      } while (!bVar30);
      lVar24 = *(longlong *)(local_430 + 0x288);
LAB_1428f7bf2:
      puVar19 = &DAT_14c84635c;
      if ((*(byte *)(lVar24 + 0x31) & 0x20) != 0) {
        puVar19 = (undefined8 *)(lVar24 + 0x168);
      }
      uVar26 = *puVar19;
      if (iVar9 != 0) {
        LOCK();
        plVar17 = plVar13 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
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
      fVar23 = (float)uVar26;
      fVar36 = (float)((ulonglong)uVar26 >> 0x20);
      local_3b8._4_4_ = fVar37;
      local_3b8._0_4_ = fVar38;
      uStack_3b0 = (longlong *)CONCAT44(fVar37,fVar38);
      local_440 = &local_3d8;
      local_3d8 = DAT_14c84635c;
      local_438 = 1;
      local_448 = 0;
      local_3e0 = fVar23;
      local_3dc = fVar36;
      (**(code **)(*local_420 + 0x1d0))(local_420,&local_3c8);
      lVar24 = local_430;
      fVar37 = fStack_3c4;
      fVar38 = local_3c8;
    }
  }
  plVar13 = local_418;
  if (bVar31) {
    fVar41 = (DAT_14c98e648 + unaff_XMM8_Da) - fVar38;
    fVar42 = (DAT_14c98e64c + unaff_XMM6_Da) - fVar37;
    if ((((fVar41 != 0.0) || (NAN(fVar41))) || (fVar42 != 0.0)) || (NAN(fVar42))) {
      cVar6 = *(char *)(lVar24 + 0x2e0);
      if (cVar6 == '\0') {
        if (ABS(fVar41) < ABS(fVar42)) {
          local_3b8._4_4_ = fVar37 + 0.0;
          local_3b8._0_4_ = fVar38 + fVar41;
          uStack_3b0 = (longlong *)CONCAT44(fVar37 + 0.0,fVar38 + fVar41);
          local_440 = &local_3d8;
          local_3d8 = DAT_14c84635c;
          local_438 = 1;
          local_448 = 0;
          local_3e0 = fVar23;
          local_3dc = fVar36;
          (**(code **)(*local_420 + 0x1d0))(local_420,&local_3c8);
          cVar6 = '\x02';
          if (((fVar23 + local_3c8 < unaff_XMM9_Da) || (unaff_XMM8_Da < local_3c8)) ||
             ((fVar36 + fStack_3c4 < unaff_XMM7_Da || (unaff_XMM6_Da < fStack_3c4))))
          goto LAB_1428f7eb4;
        }
        local_3b8._4_4_ = fVar37 + fVar42;
        local_3b8._0_4_ = fVar38 + 0.0;
        uStack_3b0 = (longlong *)CONCAT44(fVar37 + fVar42,fVar38 + 0.0);
        local_440 = &local_3d8;
        local_3d8 = DAT_14c84635c;
        local_438 = 1;
        local_448 = 0;
        local_3e0 = fVar23;
        local_3dc = fVar36;
        (**(code **)(*local_420 + 0x1d0))(local_420,&local_3c8);
        cVar6 = ((fStack_3c4 <= unaff_XMM6_Da && unaff_XMM7_Da <= fVar36 + fStack_3c4) &
                -(local_3c8 <= unaff_XMM8_Da && unaff_XMM9_Da <= fVar23 + local_3c8)) + 1;
      }
LAB_1428f7eb4:
      if (cVar6 == '\x02') {
        fVar38 = fVar38 + fVar41;
      }
      else {
        fVar37 = fVar37 + fVar42;
      }
      *(char *)(lVar24 + 0x2e0) = (cVar6 == '\x02') + '\x01';
    }
  }
  *(float *)(lVar24 + 0x2c8) = fVar38;
  *(float *)(lVar24 + 0x2cc) = fVar37;
  if ((_struct_19)LVar28.QuadPart != _Var27) {
    if ((_struct_19)LVar28.QuadPart == (_struct_19)0x0) {
      if ((_Var27 != (_struct_19)0x0) &&
         (cVar6 = (**(code **)(*(longlong *)_Var27 + 0x28))(_Var27), cVar6 == '\0')) {
        FUN_14589483e(lVar24);
      }
    }
    else {
      FUN_14589483e(lVar24);
      if ((char)local_424 != '\0') {
        if (local_410 == 0) {
          uStack_3b0 = plVar13;
          local_3c8 = fVar38;
          fStack_3c4 = fVar37;
          local_3b8 = LVar28;
          if (plVar13 == (longlong *)0x0) {
            FUN_1469b7be8(lVar24,&local_3b8,&local_3c8);
            uVar26 = local_400;
          }
          else {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
            FUN_1469b7be8(lVar24,&local_3b8,&local_3c8);
            uVar26 = local_400;
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              plVar17 = plVar13 + 1;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)*plVar17 == 0) {
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
          *(undefined8 *)(lVar24 + 0x2b8) = uVar26;
          plVar17 = *(longlong **)(lVar24 + 0x2c0);
          if (plVar17 != local_408) {
            if (local_408 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)local_408 + 0xc) = *(int *)((longlong)local_408 + 0xc) + 1;
              UNLOCK();
              plVar17 = *(longlong **)(lVar24 + 0x2c0);
            }
            if (plVar17 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar17 + 0x10))();
              }
            }
            *(longlong **)(lVar24 + 0x2c0) = local_408;
          }
        }
        else {
          *(longlong *)(lVar24 + 0x2a8) = local_410;
          plVar17 = *(longlong **)(lVar24 + 0x2b0);
          if (plVar17 != plVar18) {
            if (plVar18 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
              UNLOCK();
              plVar17 = *(longlong **)(lVar24 + 0x2b0);
            }
            if (plVar17 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar17 + 0x10))();
              }
            }
            *(longlong **)(lVar24 + 0x2b0) = plVar18;
          }
          ((LARGE_INTEGER *)(lVar24 + 0x298))->QuadPart = (LONGLONG)LVar28;
          plVar17 = *(longlong **)(lVar24 + 0x2a0);
          if (plVar17 != plVar13) {
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
              UNLOCK();
              plVar17 = *(longlong **)(lVar24 + 0x2a0);
            }
            if (plVar17 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar17 + 0x10))();
              }
            }
            *(longlong **)(lVar24 + 0x2a0) = plVar13;
          }
        }
      }
    }
  }
  if (((*(longlong *)(lVar24 + 0x288) == 0) || (*(longlong *)(lVar24 + 0x290) == 0)) ||
     (*(int *)(*(longlong *)(lVar24 + 0x290) + 8) < 1)) goto LAB_1428f81b6;
  iVar22 = *DAT_14c98e558;
  fVar23 = *(float *)((longlong)DAT_14c98e618 + 0x3f4);
  QueryPerformanceCounter((LARGE_INTEGER *)&local_3b8);
  fVar36 = (float)((((double)local_3b8 * DAT_14c83f420 + 16777216.0) - (double)_DAT_14c75ef50) -
                  *(double *)(lVar24 + 0x2d8)) / _DAT_14c75ef54;
  if (1.0 <= fVar36) {
    fVar36 = 1.0;
  }
  if (fVar36 <= 0.0) {
    fVar36 = 0.0;
  }
  plVar17 = *(longlong **)(lVar24 + 0x290);
  bVar31 = true;
  if (plVar17 == (longlong *)0x0) {
    plVar17 = (longlong *)0x0;
    lVar24 = 0;
  }
  else {
    iVar9 = (int)plVar17[1];
    lVar24 = 0;
    do {
      if (iVar9 == 0) {
        plVar17 = (longlong *)0x0;
        goto LAB_1428f80a7;
      }
      LOCK();
      iVar5 = (int)plVar17[1];
      bVar30 = iVar9 == iVar5;
      if (bVar30) {
        *(int *)(plVar17 + 1) = iVar9 + 1;
        iVar5 = iVar9;
      }
      iVar9 = iVar5;
      UNLOCK();
    } while (!bVar30);
    lVar24 = *(longlong *)(local_430 + 0x288);
    bVar31 = false;
  }
LAB_1428f80a7:
  if ((*(float *)(lVar24 + 0x35c) != fVar36) || (NAN(*(float *)(lVar24 + 0x35c)) || NAN(fVar36))) {
    *(float *)(lVar24 + 0x35c) = fVar36;
    (**(code **)(**(longlong **)(lVar24 + 0x510) + 0x98))(*(longlong **)(lVar24 + 0x510),fVar36);
  }
  fVar41 = 0.0;
  if (fVar23 <= 1.0 / (float)iVar22) {
    fVar41 = powf(1.0 - fVar36,3.0);
  }
  lVar14 = local_430;
  fVar37 = fVar37 + fVar41 * 5.0;
  fVar38 = fVar38 + fVar41 * 30.0;
  if (((fVar38 != *(float *)(lVar24 + 0x380)) || (NAN(fVar38) || NAN(*(float *)(lVar24 + 0x380))))
     || ((fVar37 != *(float *)(lVar24 + 900) || (NAN(fVar37) || NAN(*(float *)(lVar24 + 900)))))) {
    bVar7 = *(byte *)(lVar24 + 0x31) & 0x20;
LAB_1428f84d0:
    local_3b8._4_4_ = fVar37;
    local_3b8._0_4_ = fVar38;
    uStack_3b0 = (longlong *)CONCAT44(fVar37,fVar38);
    pLVar29 = (LARGE_INTEGER *)(lVar24 + 0x168);
    pLVar12 = pLVar29;
    if (bVar7 == 0) {
      pLVar12 = &DAT_14c84635c;
    }
    local_3d8 = *pLVar12;
    local_448 = 0;
    (**(code **)(*local_420 + 0x110))(local_420,&local_3c8);
    plVar13 = local_418;
    uVar26 = CONCAT44(fStack_3c4,local_3c8);
    if ((*(byte *)(lVar24 + 0x31) & 0x20) == 0) {
      pLVar29 = &DAT_14c84635c;
    }
    *(LARGE_INTEGER *)(lVar14 + 0x2d0) = *pLVar29;
    FUN_145a1ce82(lVar24,uVar26);
    FUN_1469807c6(lVar24,uVar26);
  }
  else {
    bVar7 = *(byte *)(lVar24 + 0x31) & 0x20;
    pfVar15 = (float *)&DAT_14c84635c;
    if (bVar7 != 0) {
      pfVar15 = (float *)(lVar24 + 0x168);
    }
    if ((((*pfVar15 != *(float *)(local_430 + 0x2d0)) ||
         (NAN(*pfVar15) || NAN(*(float *)(local_430 + 0x2d0)))) ||
        (pfVar15[1] != *(float *)(local_430 + 0x2d4))) ||
       (NAN(pfVar15[1]) || NAN(*(float *)(local_430 + 0x2d4)))) goto LAB_1428f84d0;
  }
  if (!bVar31) {
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
LAB_1428f81b6:
  if ((char)local_3ec == '\0') {
    LOCK();
    plVar17 = plVar21 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
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
  plVar21 = local_408;
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar18 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar21 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
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
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar13 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
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
  FUN_1447fa2ac(local_100,uStack_f8 & 0xffffffff);
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  plVar18 = plStack_108;
  if (plStack_108 != (longlong *)0x0) {
    LOCK();
    plVar21 = plStack_108 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plStack_108)(plStack_108);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  puVar16 = local_128;
  if (local_128 == (undefined1 *)0x0) {
    puVar16 = local_248;
  }
  FUN_1447157bd(puVar16,local_120 & 0xffffffff);
  if (local_128 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428f8a6c FUN_1428f8a6c body=55 status=ok
// SIG undefined FUN_1428f8a6c(void)

void FUN_1428f8a6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98e870 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c98e870 = FUN_14171c317(FUN_14627f690,uVar1,L"EUserInterfaceActionType");
  }
  return;
}



// FUNCTION 1428f8aa3 FUN_1428f8aa3 body=55 status=ok
// SIG undefined FUN_1428f8aa3(void)

void FUN_1428f8aa3(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98e888 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c98e888 = FUN_14171c317(FUN_14627f6bf,uVar1,L"EMultipleKeyBindingIndex");
  }
  return;
}



// FUNCTION 1428f8ada FUN_1428f8ada body=49 status=ok
// SIG undefined FUN_1428f8ada(void)

void FUN_1428f8ada(void)

{
  FUN_144760e21(DAT_14c98ea68,DAT_14c98ea70);
  if (DAT_14c98ea68 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1428f8b0c FUN_1428f8b0c body=177 status=ok
// SIG undefined FUN_1428f8b0c(void)

void FUN_1428f8b0c(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_2 != 0) {
    local_40 = *(longlong **)(*param_2 + 0x70);
    FUN_144869592(param_1 + 0x18,local_2c,&local_40,0);
    local_40 = param_2;
    local_38 = param_3;
    FUN_1469eb5ba(param_1 + 0x68,local_2c,&local_40);
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428f8bbe FUN_1428f8bbe body=216 status=ok
// SIG undefined FUN_1428f8bbe(void)

void FUN_1428f8bbe(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_2 != 0) {
    local_48 = *(longlong **)(*param_2 + 0x70);
    FUN_144869592(param_1 + 0x18,local_34,&local_48,0);
    local_48 = param_2;
    local_40 = param_3;
    FUN_1469eb5ba(param_1 + 0x68,local_34,&local_48);
    local_48 = param_2;
    local_40 = param_4;
    FUN_1469ebb62(param_1 + 0xb8,local_34,&local_48);
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428f8c97 FUN_1428f8c97 body=139 status=ok
// SIG undefined FUN_1428f8c97(void)

undefined1 FUN_1428f8c97(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  
  lVar5 = *param_2;
  plVar6 = *(longlong **)(lVar5 + 0x1c8);
  if (plVar6 != (longlong *)0x0) {
    iVar4 = (int)plVar6[1];
    do {
      if (iVar4 == 0) {
        return 0;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar7);
    lVar5 = *(longlong *)(lVar5 + 0x1c0);
    while( true ) {
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
      if (lVar5 == 0) {
        return 0;
      }
      if (*param_1 == lVar5) {
        return 1;
      }
      plVar6 = *(longlong **)(lVar5 + 0x1c8);
      if (plVar6 == (longlong *)0x0) break;
      iVar4 = (int)plVar6[1];
      do {
        if (iVar4 == 0) {
          return 0;
        }
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
      } while (!bVar7);
      lVar5 = *(longlong *)(lVar5 + 0x1c0);
    }
  }
  return 0;
}



// FUNCTION 1428f8d22 FUN_1428f8d22 body=540 status=ok
// SIG undefined FUN_1428f8d22(void)

void FUN_1428f8d22(undefined8 *param_1,undefined8 *param_2,float *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = 1.0 / (param_3[7] * param_3[10] - param_3[9] * param_3[8]);
  fVar5 = param_3[7] * fVar3;
  fVar4 = -param_3[9] * fVar3;
  fVar2 = -param_3[8] * fVar3;
  fVar3 = fVar3 * param_3[10];
  fVar5 = fVar2 * *(float *)(param_4 + 0x20) + fVar5 * *(float *)(param_4 + 0x24) +
          (-param_3[0xb] * fVar2 - fVar5 * param_3[0xc]);
  fVar4 = fVar3 * *(float *)(param_4 + 0x20) + fVar4 * *(float *)(param_4 + 0x24) +
          (-param_3[0xb] * fVar3 - param_3[0xc] * fVar4);
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar6 = fVar2 * 0.3;
  if (150.0 <= fVar6) {
    fVar6 = 150.0;
  }
  if (fVar6 <= 5.0) {
    fVar6 = 5.0;
  }
  if ((fVar6 <= fVar4) && (fVar4 <= fVar2 - fVar6)) {
    fVar6 = fVar3 * 0.3;
    if (150.0 <= fVar6) {
      fVar6 = 150.0;
    }
    if (fVar6 <= 5.0) {
      fVar6 = 5.0;
    }
    if ((fVar6 <= fVar5) && (fVar5 <= fVar3 - fVar6)) {
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_1428f8f0b;
    }
  }
  fVar6 = (float)(DAT_14c846320 * ((double)fVar4 / (double)fVar2) +
                 DAT_14c846328 * ((double)fVar5 / (double)fVar3));
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((float)(((double)fVar5 / (double)fVar3) / ((double)fVar4 / (double)fVar2)) <= 1.0) {
    if (1.0 < fVar6) {
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
        UNLOCK();
      }
      *(undefined4 *)(param_1 + 2) = 2;
      return;
    }
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(param_1 + 2) = 1;
    return;
  }
  if (1.0 < fVar6) {
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(param_1 + 2) = 3;
    return;
  }
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
LAB_1428f8f0b:
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 1428f8f3e FUN_1428f8f3e body=274 status=ok
// SIG undefined FUN_1428f8f3e(void)

void FUN_1428f8f3e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *puStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_140163244(*(undefined8 *)(param_1 + 8),8);
  }
  iVar6 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar6 + 1U) {
    FUN_1469eebc8((longlong *)(param_1 + 0x18),iVar6);
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  *(longlong *)(lVar3 + (longlong)iVar6 * 0x10) = *param_2;
  lVar4 = param_2[1];
  *(longlong *)(lVar3 + 8 + (longlong)iVar6 * 0x10) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (*param_2 != DAT_14c98dec8) {
    lVar3 = *(longlong *)(param_1 + 8);
    puVar5 = *(undefined8 **)(lVar3 + 0x10);
    if (puVar5 == (undefined8 *)0x0) {
LAB_1428f9024:
      local_38 = 0;
      puStack_30 = (undefined8 *)0x0;
      FUN_1407630f8();
    }
    else {
      iVar6 = *(int *)(puVar5 + 1);
      do {
        if (iVar6 == 0) goto LAB_1428f9024;
        LOCK();
        iVar2 = *(int *)(puVar5 + 1);
        bVar7 = iVar6 == iVar2;
        if (bVar7) {
          *(int *)(puVar5 + 1) = iVar6 + 1;
          iVar2 = iVar6;
        }
        iVar6 = iVar2;
        UNLOCK();
      } while (!bVar7);
      local_38 = *(undefined8 *)(lVar3 + 8);
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
      puStack_30 = puVar5;
      FUN_1407630f8();
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(puVar5);
        LOCK();
        piVar1 = (int *)((longlong)puVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428f9064 FUN_1428f9064 body=214 status=ok
// SIG undefined FUN_1428f9064(void)

void FUN_1428f9064(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *puStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_140163244(*(undefined8 *)(param_1 + 8),8);
  }
  FUN_1469f3dc0(param_1 + 0x18,param_2,param_3);
  if (*param_2 != DAT_14c98dec8) {
    lVar3 = *(longlong *)(param_1 + 8);
    puVar4 = *(undefined8 **)(lVar3 + 0x10);
    if (puVar4 == (undefined8 *)0x0) {
LAB_1428f911d:
      local_38 = 0;
      puStack_30 = (undefined8 *)0x0;
      FUN_1407630f8();
    }
    else {
      iVar5 = *(int *)(puVar4 + 1);
      do {
        if (iVar5 == 0) goto LAB_1428f911d;
        LOCK();
        iVar2 = *(int *)(puVar4 + 1);
        bVar6 = iVar5 == iVar2;
        if (bVar6) {
          *(int *)(puVar4 + 1) = iVar5 + 1;
          iVar2 = iVar5;
        }
        iVar5 = iVar2;
        UNLOCK();
      } while (!bVar6);
      local_38 = *(undefined8 *)(lVar3 + 8);
      LOCK();
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
      UNLOCK();
      puStack_30 = puVar4;
      FUN_1407630f8();
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4);
        LOCK();
        piVar1 = (int *)((longlong)puVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428f914c FUN_1428f914c body=97 status=ok
// SIG undefined FUN_1428f914c(void)

void FUN_1428f914c(longlong param_1,longlong *param_2)

{
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_2 != DAT_14c98dec8) {
    FUN_14066af28(*param_2,*(undefined8 *)(param_1 + 8));
  }
  local_20 = param_2;
  FUN_1469f3e40(param_1 + 0x18);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428f91ae FUN_1428f91ae body=1091 status=ok
// SIG undefined FUN_1428f91ae(void)

void FUN_1428f91ae(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_d8 [36];
  int local_b4;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *local_90;
  longlong local_88;
  longlong *plStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar3 = *(longlong **)(param_2 + 0x78);
  if (plVar3 != (longlong *)0x0) {
    FUN_1469ee30c();
    cVar9 = (**(code **)(*plVar3 + 0x50))(plVar3);
    if (cVar9 != '\0') {
      lVar4 = *(longlong *)(param_2 + 0x78);
      plVar3 = *(longlong **)(param_2 + 0x80);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (lVar4 != 0) {
        plVar12 = *(longlong **)(param_1 + 0x218);
        bVar8 = true;
        if (plVar12 == (longlong *)0x0) {
          plVar12 = (longlong *)0x0;
          lVar11 = 0;
        }
        else {
          iVar10 = (int)plVar12[1];
          lVar11 = 0;
          do {
            if (iVar10 == 0) {
              plVar12 = (longlong *)0x0;
              goto LAB_1428f927c;
            }
            LOCK();
            iVar13 = (int)plVar12[1];
            bVar14 = iVar10 == iVar13;
            if (bVar14) {
              *(int *)(plVar12 + 1) = iVar10 + 1;
              iVar13 = iVar10;
            }
            iVar10 = iVar13;
            UNLOCK();
          } while (!bVar14);
          lVar11 = *(longlong *)(param_1 + 0x210);
          bVar8 = false;
        }
LAB_1428f927c:
        lVar5 = *(longlong *)(param_1 + 0x220);
        plVar6 = *(longlong **)(param_1 + 0x228);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        if (lVar5 != 0) {
          if (!bVar8) {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
          }
          local_b0 = lVar11;
          local_88 = lVar11;
          plStack_80 = plVar12;
          cVar9 = FUN_1469be7b6(lVar4);
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar12 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              local_b4 = CONCAT31(local_b4._1_3_,cVar9);
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              cVar9 = (char)local_b4;
              if (*piVar1 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
                cVar9 = (char)local_b4;
              }
            }
          }
          if (cVar9 != '\0') {
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
            }
            local_b4 = -1;
            iVar10 = local_b4;
            if ((longlong)*(int *)(param_1 + 0x200) != 0) {
              lVar11 = 0;
              iVar13 = 0;
              do {
                iVar10 = iVar13;
                if (*(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar11) == lVar5) break;
                iVar13 = iVar13 + 1;
                lVar11 = lVar11 + 0x10;
                iVar10 = local_b4;
              } while ((longlong)*(int *)(param_1 + 0x200) * 0x10 != lVar11);
            }
            local_b4 = iVar10;
            if (plVar6 != (longlong *)0x0) {
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
            local_88 = *(longlong *)(param_1 + 0x220);
            plStack_80 = *(longlong **)(param_1 + 0x228);
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            if (local_88 != DAT_14c98dec8) {
              FUN_14066af28(local_88,*(undefined8 *)(param_1 + 0x1e8));
            }
            local_90 = &local_88;
            FUN_1469f3e40(param_1 + 0x1f8);
            plVar7 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              plVar2 = plStack_80 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plStack_80)(plStack_80);
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
            }
            local_a8 = 0;
            uStack_a0 = 0;
            FUN_146a584ee(lVar5);
            *(undefined8 *)(param_1 + 0x220) = 0;
            plVar7 = *(longlong **)(param_1 + 0x228);
            if (plVar7 != (longlong *)0x0) {
              *(undefined8 *)(param_1 + 0x228) = 0;
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
            if (*(int *)(param_1 + 0x200) == 0) {
              FUN_1469cccae(local_b0);
            }
            else {
              iVar10 = 1;
              if (1 < local_b4) {
                iVar10 = local_b4;
              }
              FUN_1469d3314(param_1,iVar10 + -1);
            }
            FUN_1469bd33a(param_1,&local_88);
            FUN_1469c2ef8(local_88,0);
            plVar7 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              plVar2 = plStack_80 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plStack_80)(plStack_80);
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
            }
            local_58 = *(undefined8 *)(local_b0 + 0x100);
            local_88 = *(longlong *)(local_b0 + 0xd0);
            plStack_80 = *(longlong **)(local_b0 + 0xd8);
            local_78 = *(undefined4 *)(local_b0 + 0xe0);
            uStack_74 = *(undefined4 *)(local_b0 + 0xe4);
            uStack_70 = *(undefined4 *)(local_b0 + 0xe8);
            uStack_6c = *(undefined4 *)(local_b0 + 0xec);
            local_68 = *(undefined4 *)(local_b0 + 0xf0);
            uStack_64 = *(undefined4 *)(local_b0 + 0xf4);
            uStack_60 = *(undefined4 *)(local_b0 + 0xf8);
            uStack_5c = *(undefined4 *)(local_b0 + 0xfc);
            plVar7 = *(longlong **)(param_1 + 0x10);
            if (plVar7 == (longlong *)0x0) {
LAB_1428f9570:
              FUN_1469bd3c2(lVar4,&local_88);
            }
            else {
              iVar10 = (int)plVar7[1];
              do {
                if (iVar10 == 0) goto LAB_1428f9570;
                LOCK();
                iVar13 = (int)plVar7[1];
                bVar14 = iVar10 == iVar13;
                if (bVar14) {
                  *(int *)(plVar7 + 1) = iVar10 + 1;
                  iVar13 = iVar10;
                }
                iVar10 = iVar13;
                UNLOCK();
              } while (!bVar14);
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
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
              FUN_1469bd3c2(lVar4,&local_88);
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
        }
        if (plVar6 != (longlong *)0x0) {
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
        if (!bVar8) {
          LOCK();
          plVar6 = plVar12 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
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
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar3 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
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
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428f95f2 FUN_1428f95f2 body=1213 status=ok
// SIG undefined FUN_1428f95f2(void)

undefined1 * FUN_1428f95f2(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  float fVar13;
  undefined1 auStack_b8 [47];
  char local_89;
  longlong local_88;
  longlong *local_80;
  double local_78;
  longlong *plStack_70;
  double *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar9 = *(longlong **)(param_4 + 0x78);
  if (plVar9 == (longlong *)0x0) {
LAB_1428f9626:
    plVar9 = (longlong *)0x0;
  }
  else {
    FUN_1469ee30c();
    cVar6 = (**(code **)(*plVar9 + 0x50))(plVar9);
    if (cVar6 == '\0') goto LAB_1428f9626;
    lVar3 = *(longlong *)(param_4 + 0x78);
    plVar9 = *(longlong **)(param_4 + 0x80);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      plStack_70 = *(longlong **)(param_1 + 0x218);
      if (plStack_70 == (longlong *)0x0) {
LAB_1428f96f8:
        local_78 = 0.0;
        plStack_70 = (longlong *)0x0;
        bVar12 = true;
      }
      else {
        iVar7 = (int)plStack_70[1];
        do {
          if (iVar7 == 0) goto LAB_1428f96f8;
          LOCK();
          iVar8 = (int)plStack_70[1];
          bVar12 = iVar7 == iVar8;
          if (bVar12) {
            *(int *)(plStack_70 + 1) = iVar7 + 1;
            iVar8 = iVar7;
          }
          iVar7 = iVar8;
          UNLOCK();
        } while (!bVar12);
        local_78 = *(double *)(param_1 + 0x210);
        LOCK();
        *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
        UNLOCK();
        bVar12 = false;
      }
      plVar4 = plStack_70;
      cVar6 = FUN_1469be7b6(lVar3,&local_78,0);
      plVar10 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_70 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          local_89 = cVar6;
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          cVar6 = local_89;
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            cVar6 = local_89;
          }
        }
      }
      if (!bVar12) {
        LOCK();
        plVar10 = plVar4 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
      if (cVar6 != '\0') {
        lVar11 = *(longlong *)(param_1 + 0x220);
        if (lVar11 == 0) {
          lVar11 = *(longlong *)(lVar3 + 0x40);
          plVar4 = *(longlong **)(lVar3 + 0x48);
          if (plVar4 == (longlong *)0x0) {
            *(longlong *)(param_1 + 0x220) = lVar11;
            plVar10 = *(longlong **)(param_1 + 0x228);
            if (plVar10 != (longlong *)0x0) {
              *(undefined8 *)(param_1 + 0x228) = 0;
LAB_1428f9815:
              LOCK();
              plVar4 = plVar10 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*plVar10)(plVar10);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar7 = *piVar1;
                UNLOCK();
joined_r0x0001428f9846:
                if (iVar7 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
              goto LAB_1428f9852;
            }
          }
          else {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            *(longlong *)(param_1 + 0x220) = lVar11;
            plVar10 = *(longlong **)(param_1 + 0x228);
            if (plVar4 == plVar10) {
              LOCK();
              plVar10 = plVar4 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar7 = *piVar1;
                UNLOCK();
                plVar10 = plVar4;
                goto joined_r0x0001428f9846;
              }
            }
            else {
              *(longlong **)(param_1 + 0x228) = plVar4;
              if (plVar10 != (longlong *)0x0) goto LAB_1428f9815;
            }
LAB_1428f9852:
            lVar11 = *(longlong *)(param_1 + 0x220);
          }
          if (lVar11 == 0) goto LAB_1428f9628;
        }
        local_80 = *(longlong **)(param_1 + 0x228);
        if (local_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
        }
        local_88 = lVar11;
        FUN_1469d45ce(param_1,&local_78,param_3);
        fVar13 = (float)local_78;
        cVar6 = FUN_146a580d6(lVar11);
        iVar8 = (int)((fVar13 * 0.5 + *(float *)(param_1 + 0x238)) /
                     (fVar13 - *(float *)(*(longlong *)
                                           (lVar11 + 0x448 + (ulonglong)(cVar6 != '\0') * 8) + 0xb48
                                         )));
        iVar7 = *(int *)(param_1 + 0x200);
        if (iVar8 < *(int *)(param_1 + 0x200)) {
          iVar7 = iVar8;
        }
        iVar8 = 0;
        if (0 < iVar7) {
          iVar8 = iVar7;
        }
        plVar4 = *(longlong **)(lVar3 + 0x48);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          plVar10 = plVar4 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        local_78 = *(double *)(param_1 + 0x220);
        plStack_70 = *(longlong **)(param_1 + 0x228);
        if (plStack_70 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
          UNLOCK();
        }
        if (local_78 != DAT_14c98dec8) {
          FUN_14066af28(local_78,*(undefined8 *)(param_1 + 0x1e8));
        }
        local_68 = &local_78;
        FUN_1469f3e40(param_1 + 0x1f8);
        plVar4 = plStack_70;
        if (plStack_70 != (longlong *)0x0) {
          LOCK();
          plVar10 = plStack_70 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plStack_70)(plStack_70);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        plVar4 = *(longlong **)(param_1 + 0x218);
        if (plVar4 == (longlong *)0x0) {
LAB_1428f999b:
          FUN_1469bd63c(0,&local_88,iVar8,0);
        }
        else {
          iVar7 = (int)plVar4[1];
          do {
            if (iVar7 == 0) goto LAB_1428f999b;
            LOCK();
            iVar5 = (int)plVar4[1];
            bVar12 = iVar7 == iVar5;
            if (bVar12) {
              *(int *)(plVar4 + 1) = iVar7 + 1;
              iVar5 = iVar7;
            }
            iVar7 = iVar5;
            UNLOCK();
          } while (!bVar12);
          FUN_1469bd63c(*(undefined8 *)(param_1 + 0x210),&local_88,iVar8,0);
          LOCK();
          plVar10 = plVar4 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        *(undefined8 *)(param_1 + 0x220) = 0;
        plVar4 = *(longlong **)(param_1 + 0x228);
        if (plVar4 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x228) = 0;
          LOCK();
          plVar10 = plVar4 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        *param_2 = 1;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        plVar4 = local_80;
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_80 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        goto LAB_1428f9657;
      }
    }
  }
LAB_1428f9628:
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_1428f9657:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar9 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428f9ab0 FUN_1428f9ab0 body=666 status=ok
// SIG undefined FUN_1428f9ab0(void)

undefined1 * FUN_1428f9ab0(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  cVar6 = FUN_140591fd6();
  if ((cVar6 == '\0') || (lVar3 = *(longlong *)(param_1 + 0x220), lVar3 == 0)) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    local_100 = *(longlong **)(param_1 + 0x228);
    local_108 = lVar3;
    if (local_100 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x220) = 0;
    }
    else {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x228);
      *(undefined8 *)(param_1 + 0x220) = 0;
      if (plVar4 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x228) = 0;
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
    FUN_1469d45ce(param_1,&local_f8,param_3);
    lVar3 = local_108;
    cVar6 = FUN_146a580d6(local_108);
    iVar7 = (int)(((float)(double)local_f8 * 0.5 + *(float *)(param_1 + 0x238)) /
                 ((float)(double)local_f8 -
                 *(float *)(*(longlong *)(lVar3 + 0x448 + (ulonglong)(cVar6 != '\0') * 8) + 0xb48)))
    ;
    iVar5 = *(int *)(param_1 + 0x200);
    if (iVar7 < *(int *)(param_1 + 0x200)) {
      iVar5 = iVar7;
    }
    iVar7 = 0;
    if (0 < iVar5) {
      iVar7 = iVar5;
    }
    if (lVar3 != DAT_14c98dec8) {
      FUN_14066af28(lVar3,*(undefined8 *)(param_1 + 0x1e8));
    }
    local_f8 = &local_108;
    FUN_1469f3e40(param_1 + 0x1f8);
    FUN_1428f9064(param_1 + 0x1e0,&local_108,iVar7);
    local_118 = local_108;
    local_110 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_1469ce008(param_1);
    local_f8 = (longlong *)CONCAT71(local_f8._1_7_,1);
    local_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    memset(local_d0,0,0x88);
    local_48 = 0x20702;
    local_c0 = 0;
    uStack_b8 = 0;
    local_44 = 1;
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = local_48;
    param_2[0xb4] = local_44;
    FUN_14493db24(&local_f8);
    plVar4 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_100 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_100)(local_100);
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
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428f9d4c FUN_1428f9d4c body=132 status=ok
// SIG undefined FUN_1428f9d4c(void)

void FUN_1428f9d4c(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 0x10);
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)param_2 * 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 != DAT_14c98dec8) {
    FUN_14066af28(lVar3,*(undefined8 *)(param_1 + 8));
  }
  FUN_1469f3f48(param_1 + 0x18,param_2);
  FUN_1469f3fbe(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001428f9dc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428f9dd0 FUN_1428f9dd0 body=163 status=ok
// SIG undefined FUN_1428f9dd0(void)

void FUN_1428f9dd0(undefined8 *param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146a58688(*param_1,&local_30);
  FUN_1469cdf04(local_30,param_1,param_2);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  plVar3 = (longlong *)param_1[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428f9e74 FUN_1428f9e74 body=162 status=ok
// SIG undefined FUN_1428f9e74(void)

undefined4 FUN_1428f9e74(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146a58688(*param_1,&local_30);
  uVar4 = FUN_1469cde74(local_30,param_1);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  plVar3 = (longlong *)param_1[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428f9f17 FUN_1428f9f17 body=41 status=ok
// SIG undefined FUN_1428f9f17(void)

void FUN_1428f9f17(void)

{
  DAT_14c98e978 = 0;
  if (DAT_14c98e970 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6ff28();
  return;
}



// FUNCTION 1428f9f84 FUN_1428f9f84 body=59 status=ok
// SIG undefined FUN_1428f9f84(void)

void FUN_1428f9f84(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c98e8a0;
  if (DAT_14c98e8a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c98e8a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001428f9fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428f9fbf FUN_1428f9fbf body=286 status=ok
// SIG undefined FUN_1428f9fbf(void)

void FUN_1428f9fbf(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  if (0 < (int)param_1[1]) {
    lVar8 = 0;
    do {
      lVar6 = *param_1;
      plVar7 = *(longlong **)(lVar6 + 8 + lVar8 * 0x10);
      bVar3 = true;
      if (plVar7 == (longlong *)0x0) {
LAB_1428fa011:
        plVar7 = (longlong *)0x0;
        lVar6 = 0;
      }
      else {
        iVar5 = (int)plVar7[1];
        do {
          if (iVar5 == 0) goto LAB_1428fa011;
          LOCK();
          iVar4 = (int)plVar7[1];
          bVar10 = iVar5 == iVar4;
          if (bVar10) {
            *(int *)(plVar7 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar10);
        lVar6 = *(longlong *)(lVar6 + lVar8 * 0x10);
        bVar3 = false;
      }
      if (((*(longlong *)(lVar6 + 0x2c0) == 0) ||
          (plVar9 = *(longlong **)(lVar6 + 0x2c8), plVar9 == (longlong *)0x0)) ||
         ((int)plVar9[1] < 1)) {
LAB_1428fa04f:
        plVar9 = (longlong *)0x0;
        lVar6 = 0;
      }
      else {
        iVar5 = (int)plVar9[1];
        do {
          if (iVar5 == 0) goto LAB_1428fa04f;
          LOCK();
          iVar4 = (int)plVar9[1];
          bVar10 = iVar5 == iVar4;
          if (bVar10) {
            *(int *)(plVar9 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar10);
        lVar6 = *(longlong *)(lVar6 + 0x2c0);
      }
      if (!bVar3) {
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
      if (lVar6 != 0) {
        if (param_2 == '\0') {
          if (*(longlong **)(lVar6 + 0x510) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar6 + 0x510) + 0x58))();
          }
        }
        else {
          thunk_FUN_1616686ea(lVar6);
        }
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar9 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 1428fa0de FUN_1428fa0de body=130 status=ok
// SIG undefined FUN_1428fa0de(void)

ulonglong FUN_1428fa0de(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  int local_28;
  byte local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (*(char *)(param_1 + 0x188) == '\x01') {
    FUN_1469d1cbc(param_1,&local_28,param_2);
    uVar2 = CONCAT71((int7)((ulonglong)&local_28 >> 8),local_24 ^ 1 | local_28 != 1);
  }
  if (*param_2 != 0) {
    bVar1 = FUN_14681561c(*(undefined8 *)(param_1 + 0x168));
    uVar2 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 & bVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428fa162 FUN_1428fa162 body=2263 status=ok
// SIG undefined FUN_1428fa162(void)

longlong *
FUN_1428fa162(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
             undefined1 param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 unaff_RBP;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  int local_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  longlong *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar7 = FUN_1428fa0de(param_1,param_3);
  if (cVar7 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
  }
  FUN_1469decfe(param_1,&local_58,*param_3);
  if (local_58 == 0) {
LAB_1428fa3a4:
    FUN_1469df474(param_1,&local_68,param_3,
                  CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
    lVar9 = local_68;
    if (local_68 == 0) {
      plVar10 = (longlong *)param_1[2];
      bVar13 = true;
      if (plVar10 == (longlong *)0x0) {
LAB_1428fa5a7:
        lVar9 = 0;
        plVar10 = (longlong *)0x0;
      }
      else {
        iVar8 = (int)plVar10[1];
        do {
          if (iVar8 == 0) goto LAB_1428fa5a7;
          LOCK();
          iVar6 = (int)plVar10[1];
          bVar14 = iVar8 == iVar6;
          if (bVar14) {
            *(int *)(plVar10 + 1) = iVar8 + 1;
            iVar6 = iVar8;
          }
          iVar8 = iVar6;
          UNLOCK();
        } while (!bVar14);
        lVar9 = param_1[1];
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        LOCK();
        plVar3 = plVar10 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
        bVar13 = false;
      }
      FUN_14162fdc4();
      if (DAT_14c98e9c0 == lVar9) {
        if (!bVar13) {
          LOCK();
          plVar3 = plVar10 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
      else {
        plVar3 = (longlong *)param_1[0xd];
        if ((int)plVar3[1] == *(int *)((longlong)plVar3 + 0x34)) {
LAB_1428fa63d:
          bVar14 = false;
        }
        else {
          lVar9 = *param_3;
          uVar5 = (uint)((ulonglong)lVar9 >> 0x10);
          uVar12 = (uint)lVar9 & 0xffff;
          plVar11 = plVar3 + 7;
          if ((longlong *)plVar3[8] != (longlong *)0x0) {
            plVar11 = (longlong *)plVar3[8];
          }
          iVar8 = *(int *)((longlong)plVar11 +
                          (ulonglong)
                          ((int)plVar3[9] - 1U &
                          (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar12) +
                          (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar12 >> 4)) * 4);
          if (iVar8 == -1) goto LAB_1428fa63d;
          do {
            bVar14 = *(longlong *)(*plVar3 + (longlong)iVar8 * 0x20) == lVar9;
            if (bVar14) break;
            iVar8 = *(int *)((longlong)iVar8 * 0x20 + *plVar3 + 0x18);
          } while (iVar8 != -1);
        }
        if (!bVar13) {
          LOCK();
          plVar3 = plVar10 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
        if (bVar14) {
          FUN_14162fdc4();
          local_d8 = param_5;
          FUN_1428fa162(DAT_14c98e9c0,param_2,param_3,param_4);
          goto LAB_1428fa68c;
        }
      }
      FUN_1469df7d0(&local_78,param_3);
      lVar9 = local_78;
      FUN_1469bed62(&local_b8);
      local_c8 = (undefined4)*param_3;
      uStack_c4 = *(undefined4 *)((longlong)param_3 + 4);
      uStack_c0 = (undefined4)param_3[1];
      uStack_bc = *(undefined4 *)((longlong)param_3 + 0xc);
      FUN_1469df89e(local_b8,&local_88);
      local_a8 = local_88;
      local_a0 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_80 + 1) = (int)local_80[1] + 1;
        UNLOCK();
      }
      FUN_1469c43d8(lVar9,local_98,&local_a8);
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_90 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
      plVar10 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_80 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      plVar10 = (longlong *)CONCAT44(uStack_ac,local_b0);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar10 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      FUN_1469bf126(param_1[0x1d],&local_b8);
      local_d8 = 0;
      FUN_1469de9a0(param_1,&local_88,&local_78,&local_b8);
      plVar10 = (longlong *)CONCAT44(uStack_ac,local_b0);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar10 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      plVar10 = local_88;
      if (local_88 == (longlong *)0x0) {
LAB_1428fa8f4:
        *param_2 = 0;
        param_2[1] = 0;
      }
      else {
        (**(code **)(*local_88 + 0x260))(local_88,&local_b8);
        iVar8 = local_b0;
        FUN_1469ec9dc(local_b8,local_b0);
        if (local_b8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (iVar8 < 1) goto LAB_1428fa8f4;
        (**(code **)(*plVar10 + 0x260))(plVar10,&local_b8);
        lVar9 = *local_b8;
        plVar10 = (longlong *)local_b8[1];
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        FUN_1469ec9dc(local_b8,local_b0);
        if (local_b8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (plVar10 == (longlong *)0x0) {
          *param_2 = lVar9;
          param_2[1] = 0;
        }
        else {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          *param_2 = lVar9;
          param_2[1] = (longlong)plVar10;
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          LOCK();
          plVar3 = plVar10 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
          LOCK();
          plVar3 = plVar10 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
      plVar10 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_80 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_80)(local_80);
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
    else {
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      local_d8 = 0;
      FUN_1428faa40(param_1,param_2,param_3);
      lVar4 = *param_2;
      if (lVar4 == 0) goto LAB_1428fa68c;
      plStack_70 = (longlong *)param_2[1];
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
        UNLOCK();
      }
      local_78 = lVar4;
      FUN_1469bd63c(lVar9,&local_78,0xffffffff,param_4);
      plVar10 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_70 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      lVar9 = *param_2;
      FUN_146a591d8(lVar9);
      FUN_14162fdc4();
      lVar4 = DAT_14c98e9c0;
      plStack_70 = (longlong *)param_2[1];
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
        UNLOCK();
      }
      local_78 = lVar9;
      FUN_1469c6316(lVar4,&local_78);
    }
    plVar10 = plStack_70;
    if (plStack_70 == (longlong *)0x0) goto LAB_1428fa68c;
    LOCK();
    plVar3 = plStack_70 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1428fa68c;
    (**(code **)*plStack_70)(plStack_70);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_1428fa68c;
    lVar9 = *plVar10;
  }
  else {
    if (((*(int *)(local_58 + 0x120) == 0) || (*(longlong **)(local_58 + 0x118) == (longlong *)0x0))
       || (cVar7 = (**(code **)(**(longlong **)(local_58 + 0x118) + 0x30))(), cVar7 == '\0')) {
      local_68 = 0;
      local_60 = *(longlong **)(local_58 + 0x150);
      if (local_60 != (longlong *)0x0) {
        iVar8 = (int)local_60[1];
        do {
          if (iVar8 == 0) {
            local_60 = (longlong *)0x0;
            goto LAB_1428fa285;
          }
          LOCK();
          iVar6 = (int)local_60[1];
          bVar13 = iVar8 == iVar6;
          if (bVar13) {
            *(int *)(local_60 + 1) = iVar8 + 1;
            iVar6 = iVar8;
          }
          iVar8 = iVar6;
          UNLOCK();
        } while (!bVar13);
        if (local_60 != (longlong *)0x0) {
          local_68 = *(longlong *)(local_58 + 0x148);
        }
      }
    }
    else {
      if (*(int *)(local_58 + 0x120) == 0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = *(longlong **)(local_58 + 0x118);
      }
      (**(code **)(*plVar10 + 0x58))(plVar10,&local_68,param_3);
    }
LAB_1428fa285:
    plVar10 = local_60;
    if (local_68 == 0) {
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_60 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      goto LAB_1428fa3a4;
    }
    plVar3 = *(longlong **)(local_68 + 0x2c8);
    if (plVar3 == (longlong *)0x0) {
LAB_1428fa2ea:
      plVar10 = (longlong *)0x0;
      lVar9 = 0;
    }
    else {
      iVar8 = (int)plVar3[1];
      do {
        if (iVar8 == 0) goto LAB_1428fa2ea;
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar13 = iVar8 == iVar6;
        if (bVar13) {
          *(int *)(plVar3 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar13);
      plVar10 = *(longlong **)(local_68 + 0x2c0);
      if (plVar10 == (longlong *)0x0) {
        lVar9 = 0;
        plVar10 = (longlong *)0x0;
      }
      else {
        FUN_14162fdc4();
        lVar9 = DAT_14c98e9c0;
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        local_88 = plVar10;
        local_80 = plVar3;
        FUN_1469df362(lVar9,&local_78,&local_88);
        plVar10 = plStack_70;
        lVar9 = local_78;
        plVar11 = local_80;
        local_78 = 0;
        plStack_70 = (longlong *)0x0;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_80 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_80)(local_80);
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
      LOCK();
      plVar11 = plVar3 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
    if (((char)param_4 == '\0') &&
       (((cVar7 = FUN_146a57ad6(local_68), cVar7 == '\0' ||
         ((lVar9 != 0 && (cVar7 = FUN_146a57bcc(lVar9), cVar7 == '\0')))) ||
        (cVar7 = FUN_146a57bcc(local_68), cVar7 == '\0')))) {
      local_78 = local_68;
      plStack_70 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
      (**(code **)*param_1)(param_1,&local_78);
      plVar3 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar11 = plStack_70 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plStack_70)(plStack_70);
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
    plVar3 = local_60;
    if (local_60 == (longlong *)0x0) {
      *param_2 = local_68;
      param_2[1] = 0;
    }
    else {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
      *param_2 = local_68;
      param_2[1] = (longlong)local_60;
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
      LOCK();
      plVar11 = local_60 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (plVar10 == (longlong *)0x0) goto LAB_1428fa68c;
    LOCK();
    plVar3 = plVar10 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1428fa68c;
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_1428fa68c;
    lVar9 = *plVar10;
  }
  (**(code **)(lVar9 + 0x10))(plVar10);
LAB_1428fa68c:
  plVar10 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_50 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1428faa40 FUN_1428faa40 body=3139 status=ok
// SIG undefined FUN_1428faa40(void)

longlong *
FUN_1428faa40(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,char param_5)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  void *_Src;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_c38 [32];
  undefined1 *local_c18;
  undefined8 local_c08;
  undefined1 local_bf9;
  undefined1 local_bf8 [8];
  longlong *local_bf0;
  undefined1 local_bd9;
  undefined1 local_bd8 [8];
  longlong *local_bd0;
  undefined1 local_bb9;
  wchar_t *local_bb8;
  undefined4 local_bb0;
  undefined4 uStack_bac;
  undefined1 local_ba0 [4];
  undefined1 local_b9c [4];
  longlong *local_b98 [2];
  undefined1 local_b88 [16];
  undefined1 local_b78;
  undefined8 local_b70;
  undefined8 uStack_b68;
  undefined8 local_b60;
  longlong *local_b58;
  undefined8 local_b50;
  longlong *local_b48;
  longlong *local_b40 [2];
  undefined1 local_b30 [16];
  undefined1 local_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  longlong local_b08;
  longlong *local_b00;
  longlong *local_af8;
  int iStack_af0;
  undefined4 uStack_aec;
  longlong local_ae8;
  longlong *local_ae0;
  longlong *local_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  longlong *local_ac0;
  undefined1 local_668 [424];
  undefined1 *local_4c0;
  undefined8 local_490;
  longlong *local_488;
  longlong local_3c0;
  longlong *local_3b8;
  undefined8 local_218;
  longlong *local_210;
  undefined1 local_128;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c38;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1469decfe(0,&local_ae8,*param_3);
  lVar14 = local_ae8;
  if (local_ae8 == 0) goto LAB_1428faecb;
  if (((*(int *)(local_ae8 + 0x110) == 0) || (*(longlong **)(local_ae8 + 0x108) == (longlong *)0x0))
     || (cVar9 = (**(code **)(**(longlong **)(local_ae8 + 0x108) + 0x30))(), cVar9 == '\0')) {
LAB_1428fab56:
    if ((((*(longlong *)(lVar14 + 0x148) != 0) && (*(longlong *)(lVar14 + 0x150) != 0)) &&
        (0 < *(int *)(*(longlong *)(lVar14 + 0x150) + 8))) &&
       (((*(int *)(lVar14 + 0x120) == 0 || (*(longlong **)(lVar14 + 0x118) == (longlong *)0x0)) ||
        (cVar9 = (**(code **)(**(longlong **)(lVar14 + 0x118) + 0x30))(), cVar9 == '\0'))))
    goto LAB_1428faf3e;
    lVar2 = *param_3;
    local_ad8 = (longlong *)*param_3;
    uStack_ad0 = (longlong *)param_3[1];
    local_ac8 = *param_4;
    local_ac0 = (longlong *)param_4[1];
    if (local_ac0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_ac0 + 1) = (int)local_ac0[1] + 1;
      UNLOCK();
    }
    if (*(int *)(lVar14 + 0x100) == 0) {
      plVar13 = (longlong *)0x0;
    }
    else {
      plVar13 = *(longlong **)(lVar14 + 0xf8);
    }
    (**(code **)(*plVar13 + 0x58))((int)lVar2,&local_3c0,&local_ad8);
    plVar13 = local_3b8;
    if (local_3b8 == (longlong *)0x0) {
      *param_2 = local_3c0;
      plVar11 = (longlong *)param_2[1];
      if (plVar11 != (longlong *)0x0) {
        param_2[1] = 0;
LAB_1428fac4e:
        LOCK();
        plVar13 = plVar11 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar10 = *piVar1;
          UNLOCK();
joined_r0x0001428fac41:
          if (iVar10 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_3b8 + 1) = (int)local_3b8[1] + 1;
      UNLOCK();
      *param_2 = local_3c0;
      plVar11 = (longlong *)param_2[1];
      if (local_3b8 == plVar11) {
        LOCK();
        plVar11 = local_3b8 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_3b8)(local_3b8);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar10 = *piVar1;
          UNLOCK();
          plVar11 = plVar13;
          goto joined_r0x0001428fac41;
        }
      }
      else {
        param_2[1] = (longlong)local_3b8;
        if (plVar11 != (longlong *)0x0) goto LAB_1428fac4e;
      }
    }
    if (local_3b8 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_3b8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*local_3b8)(local_3b8);
        LOCK();
        piVar1 = (int *)((longlong)local_3b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_3b8 + 0x10))(local_3b8);
        }
      }
    }
    plVar13 = local_ac0;
    if (local_ac0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_ac0 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_ac0)(local_ac0);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
    lVar14 = *param_2;
    if (lVar14 == *(longlong *)(param_1 + 0x128) && *(longlong *)(param_1 + 0x128) != 0) {
      *(undefined8 *)(param_1 + 0x128) = 0;
      plVar13 = *(longlong **)(param_1 + 0x130);
      if (plVar13 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x130) = 0;
        LOCK();
        plVar11 = plVar13 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
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
      lVar14 = param_3[1];
      *(longlong *)(param_1 + 0x114) = *param_3;
      *(longlong *)(param_1 + 0x11c) = lVar14;
      lVar14 = *param_2;
    }
    lVar7 = local_ae8;
    uVar5 = *(undefined4 *)((longlong)param_3 + 4);
    lVar2 = param_3[1];
    uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
    *(int *)(lVar14 + 0x310) = (int)*param_3;
    *(undefined4 *)(lVar14 + 0x314) = uVar5;
    *(int *)(lVar14 + 0x318) = (int)lVar2;
    *(undefined4 *)(lVar14 + 0x31c) = uVar6;
    lVar2 = local_ae8 + 0x58;
    plVar11 = (longlong *)FUN_14142e2d2(lVar2);
    plVar13 = (longlong *)*plVar11;
    if (*(code **)(*plVar13 + 0x50) != FUN_144828418) {
      plVar13 = (longlong *)(**(code **)(*plVar13 + 0x50))();
    }
    FUN_1447a1fc0(plVar13);
    plVar11 = (longlong *)*plVar11;
    pcVar3 = *(code **)(*plVar11 + 0x28);
    if (pcVar3 == FUN_14482841c) {
      plVar13 = plVar11 + 3;
      if (plVar11[5] != 0) {
        plVar13 = (longlong *)(plVar11[5] + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      plVar13 = plVar11 + 2;
    }
    else {
      plVar13 = (longlong *)(*pcVar3)(plVar11);
    }
    if ((int)plVar13[1] < 2) {
      FUN_145715fae(&local_ad8,lVar7 + 0xf0);
    }
    else {
      plVar13 = (longlong *)FUN_14142e2d2(lVar2);
      local_ad8 = (longlong *)*plVar13;
      if (local_ad8 != (longlong *)0x0) {
        (**(code **)(*local_ad8 + 8))();
      }
      uStack_ad0 = (longlong *)CONCAT44(uStack_ad0._4_4_,(int)plVar13[1]);
    }
    FUN_146a58fc4(lVar14,&local_ad8);
    if (local_ad8 != (longlong *)0x0) {
      (**(code **)(*local_ad8 + 0x10))();
    }
    uVar12 = FUN_1458e87ca(lVar7 + 0x18);
    FUN_146a590ac(lVar14,uVar12);
    *(longlong *)(lVar7 + 0x148) = lVar14;
    plVar13 = (longlong *)param_2[1];
    plVar11 = *(longlong **)(lVar7 + 0x150);
    if (plVar11 != plVar13) {
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
        UNLOCK();
        plVar11 = *(longlong **)(lVar7 + 0x150);
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
      }
      *(longlong **)(lVar7 + 0x150) = plVar13;
      lVar14 = *param_2;
    }
    if (lVar14 == 0) {
      if (local_ae8 == 0) {
LAB_1428faecb:
        FUN_1400021e4(param_3,&local_af8);
      }
      else {
        plVar11 = (longlong *)FUN_14142e2d2(local_ae8 + 0x58);
        plVar13 = (longlong *)*plVar11;
        if (*(code **)(*plVar13 + 0x50) != FUN_144828418) {
          plVar13 = (longlong *)(**(code **)(*plVar13 + 0x50))();
        }
        FUN_1447a1fc0(plVar13);
        plVar11 = (longlong *)*plVar11;
        pcVar3 = *(code **)(*plVar11 + 0x28);
        if (pcVar3 == FUN_14482841c) {
          plVar13 = plVar11 + 3;
          if (plVar11[5] != 0) {
            plVar13 = (longlong *)(plVar11[5] + 8);
          }
        }
        else if (pcVar3 == (code *)&LAB_14010c34c) {
          plVar13 = plVar11 + 2;
        }
        else {
          plVar13 = (longlong *)(*pcVar3)(plVar11);
        }
        if ((int)plVar13[1] < 2) goto LAB_1428faecb;
        plVar11 = (longlong *)FUN_14142e2d2(local_ae8 + 0x58);
        plVar13 = (longlong *)*plVar11;
        if (*(code **)(*plVar13 + 0x50) != FUN_144828418) {
          plVar13 = (longlong *)(**(code **)(*plVar13 + 0x50))();
        }
        FUN_1447a1fc0(plVar13);
        plVar11 = (longlong *)*plVar11;
        pcVar3 = *(code **)(*plVar11 + 0x28);
        if (pcVar3 == FUN_14482841c) {
          plVar13 = plVar11 + 3;
          if (plVar11[5] != 0) {
            plVar13 = (longlong *)(plVar11[5] + 8);
          }
        }
        else if (pcVar3 == (code *)&LAB_14010c34c) {
          plVar13 = plVar11 + 2;
        }
        else {
          plVar13 = (longlong *)(*pcVar3)(plVar11);
        }
        local_af8 = (longlong *)0x0;
        iStack_af0 = (int)plVar13[1];
        lVar14 = (longlong)iStack_af0;
        _Src = (void *)*plVar13;
        if (lVar14 == 0) {
          uStack_aec = 0;
        }
        else {
          FUN_1446dd670(&local_af8,iStack_af0,0);
          memcpy(local_af8,_Src,lVar14 * 2);
        }
      }
      if (iStack_af0 < 2) {
        FUN_1400b22c2(&local_ad8,"Unknown");
        if (local_af8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        local_af8 = local_ad8;
        iStack_af0 = (int)uStack_ad0;
        uStack_aec = uStack_ad0._4_4_;
      }
      if (param_5 == '\0') {
        FUN_1469e1978(&local_3c0);
        FUN_1469e1b7c(param_3,local_b40);
        FUN_14023423e(local_b30,local_b40);
        local_b20 = 1;
        local_b18 = 0;
        uStack_b10 = 0;
        FUN_1469e1b26(&local_3c0,local_b30);
        local_128 = 0;
        FUN_140a53a96(local_668);
        local_4c0 = &DAT_200000002;
        FUN_140a570d8(&local_ad8);
        local_bb8 = L"Unrecognized";
        local_bb0 = 0xc;
        FUN_1446e940c(local_b9c,&local_bb8);
        local_bb8 = L"TabManagement";
        local_bb0 = 0xd;
        FUN_1446e940c(local_ba0,&local_bb8);
        local_bb8 = L"unrecognized tab";
        local_bb0 = 0x10;
        FUN_140208c1e(local_b98,local_ba0,local_b9c,&local_bb8);
        FUN_14023423e(local_b88,local_b98);
        local_b78 = 1;
        local_b70 = 0;
        uStack_b68 = 0;
        uVar12 = FUN_140a54906(&local_ad8,local_b88);
        local_c18 = &local_bb9;
        FUN_140a54526(&local_bb8,"STextBlock",
                      ".\\Runtime/Slate/Private/Framework/Docking/TabManager.cpp",0x843);
        FUN_140a52852(&local_bb8,&local_b60,uVar12);
        plVar11 = local_488;
        plVar13 = local_b58;
        if (local_b58 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_b58 + 1) = (int)local_b58[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(local_b58 + 1) = (int)local_b58[1] + 1;
          UNLOCK();
        }
        local_490 = local_b60;
        local_488 = local_b58;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar11 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
        local_c18 = &local_bd9;
        FUN_140a53d66(local_bd8,&DAT_149efe19f,
                      ".\\Runtime/Slate/Private/Framework/Docking/TabManager.cpp",0x83f);
        FUN_140a50bf4(local_bd8,&local_b50,local_668);
        plVar4 = local_210;
        plVar11 = local_b48;
        if (local_b48 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_b48 + 1) = (int)local_b48[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(local_b48 + 1) = (int)local_b48[1] + 1;
          UNLOCK();
        }
        local_218 = local_b50;
        local_210 = local_b48;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar15 = plVar4 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
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
        FUN_1469feed2(local_bf8,&local_bf9);
        FUN_1469e1dfa(local_bf8,&local_b08,&local_3c0);
        plVar4 = local_b00;
        if (local_b00 == (longlong *)0x0) {
          *param_2 = local_b08;
          plVar15 = (longlong *)param_2[1];
          if (plVar15 != (longlong *)0x0) {
            param_2[1] = 0;
LAB_1428fb3d5:
            LOCK();
            plVar4 = plVar15 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar10 = *piVar1;
              UNLOCK();
joined_r0x0001428fb3c8:
              if (iVar10 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
        }
        else {
          LOCK();
          *(int *)(local_b00 + 1) = (int)local_b00[1] + 1;
          UNLOCK();
          *param_2 = local_b08;
          plVar15 = (longlong *)param_2[1];
          if (local_b00 == plVar15) {
            LOCK();
            plVar15 = local_b00 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*local_b00)(local_b00);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar10 = *piVar1;
              UNLOCK();
              plVar15 = plVar4;
              goto joined_r0x0001428fb3c8;
            }
          }
          else {
            param_2[1] = (longlong)local_b00;
            if (plVar15 != (longlong *)0x0) goto LAB_1428fb3d5;
          }
        }
        if (local_b00 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_b00 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_b00)(local_b00);
            LOCK();
            piVar1 = (int *)((longlong)local_b00 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_b00 + 0x10))(local_b00);
            }
          }
        }
        if (local_bf0 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_bf0 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_bf0)(local_bf0);
            LOCK();
            piVar1 = (int *)((longlong)local_bf0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_bf0 + 0x10))(local_bf0);
            }
          }
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar11 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
        if (local_b48 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_b48 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*local_b48)(local_b48);
            LOCK();
            piVar1 = (int *)((longlong)local_b48 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_b48 + 0x10))(local_b48);
            }
          }
        }
        if (local_bd0 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_bd0 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*local_bd0)(local_bd0);
            LOCK();
            piVar1 = (int *)((longlong)local_bd0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_bd0 + 0x10))(local_bd0);
            }
          }
        }
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar13 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
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
        if (local_b58 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_b58 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*local_b58)(local_b58);
            LOCK();
            piVar1 = (int *)((longlong)local_b58 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_b58 + 0x10))(local_b58);
            }
          }
        }
        plVar13 = (longlong *)CONCAT44(uStack_bac,local_bb0);
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar13 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
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
        if (local_b98[0] != (longlong *)0x0) {
          (**(code **)(*local_b98[0] + 0x10))();
        }
        FUN_140a59ae6(&local_ad8);
        FUN_140a5660c(local_668);
        if (local_b40[0] != (longlong *)0x0) {
          (**(code **)(*local_b40[0] + 0x10))();
        }
        FUN_1469e1e6e(&local_3c0);
        FUN_1446f470e(&local_c08,L"Unrecognized",1);
        lVar14 = *param_2;
        *(undefined8 *)(lVar14 + 0x310) = local_c08;
        *(undefined4 *)(lVar14 + 0x318) = 0xffffffff;
        *(undefined1 *)(lVar14 + 0x31c) = 0;
      }
      if (local_af8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1428faf3e;
    }
  }
  else {
    lVar2 = *param_3;
    local_ad8 = (longlong *)*param_3;
    uStack_ad0 = (longlong *)param_3[1];
    local_ac8 = *param_4;
    local_ac0 = (longlong *)param_4[1];
    if (local_ac0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_ac0 + 1) = (int)local_ac0[1] + 1;
      UNLOCK();
    }
    if (*(int *)(lVar14 + 0x110) == 0) {
      plVar13 = (longlong *)0x0;
    }
    else {
      plVar13 = *(longlong **)(lVar14 + 0x108);
    }
    cVar9 = (**(code **)(*plVar13 + 0x58))((int)lVar2,&local_ad8);
    plVar13 = local_ac0;
    if (local_ac0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_ac0 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_ac0)();
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))();
        }
      }
    }
    lVar14 = local_ae8;
    if (cVar9 != '\0') goto LAB_1428fab56;
LAB_1428faf3e:
    lVar14 = *param_2;
    if (lVar14 == 0) goto LAB_1428fb00c;
  }
  plVar13 = *(longlong **)(param_1 + 0x10);
  if (plVar13 == (longlong *)0x0) {
LAB_1428fafa1:
    local_ad8 = (longlong *)0x0;
    uStack_ad0 = (longlong *)0x0;
    bVar16 = true;
  }
  else {
    iVar10 = (int)plVar13[1];
    do {
      if (iVar10 == 0) goto LAB_1428fafa1;
      LOCK();
      iVar8 = (int)plVar13[1];
      bVar16 = iVar10 == iVar8;
      if (bVar16) {
        *(int *)(plVar13 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar16);
    plVar4 = *(longlong **)(param_1 + 8);
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar13 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    bVar16 = false;
    local_ad8 = plVar4;
    uStack_ad0 = plVar13;
  }
  plVar13 = uStack_ad0;
  FUN_146a58e30(lVar14,&local_ad8);
  plVar11 = uStack_ad0;
  if (uStack_ad0 != (longlong *)0x0) {
    LOCK();
    plVar4 = uStack_ad0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*uStack_ad0)(uStack_ad0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (!bVar16) {
    LOCK();
    plVar11 = plVar13 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
LAB_1428fb00c:
  if (local_ae0 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_ae0 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_ae0)(local_ae0);
      LOCK();
      piVar1 = (int *)((longlong)local_ae0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_ae0 + 0x10))(local_ae0);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428fb684 FUN_1428fb684 body=762 status=ok
// SIG undefined FUN_1428fb684(void)

void FUN_1428fb684(undefined8 param_1,longlong param_2,undefined8 *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  longlong local_68;
  undefined4 local_60;
  undefined1 local_5c;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_4;
  (**(code **)*param_3)(param_3,&local_38,param_1,param_2);
  if (local_38 == 0) {
    local_50 = (longlong *)CONCAT35(local_50._5_3_,0x1ffffffff);
    local_58 = param_2;
    FUN_1469df474(param_1,&local_48,&local_58,1);
    if (local_48 != 0) {
LAB_1428fb8b4:
      FUN_1469bd63c(local_48,param_4,0xffffffff,0);
      goto LAB_1428fb8c5;
    }
    local_60 = 0xffffffff;
    local_5c = 1;
    local_78 = local_78 & 0xffffffffffffff00;
    local_68 = param_2;
    FUN_1428fa162(param_1,&local_58,&local_68,0);
    plVar2 = local_30;
    plVar6 = local_50;
    local_38 = local_58;
    local_58 = 0;
    if (local_50 == local_30) {
LAB_1428fb77f:
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
    }
    else {
      local_50 = (longlong *)0x0;
      local_30 = plVar6;
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
        goto LAB_1428fb77f;
      }
    }
    if (local_38 == 0) goto LAB_1428fb8c5;
    FUN_146a58380(local_38,&local_58);
    if (((*(longlong *)(local_58 + 0x210) == 0) ||
        (plVar6 = *(longlong **)(local_58 + 0x218), plVar6 == (longlong *)0x0)) ||
       ((int)plVar6[1] < 1)) {
LAB_1428fb934:
      FUN_1469bd63c(0,param_4,0xffffffff,0);
    }
    else {
      iVar4 = (int)plVar6[1];
      do {
        if (iVar4 == 0) goto LAB_1428fb934;
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
      } while (!bVar7);
      FUN_1469bd63c(*(undefined8 *)(local_58 + 0x210),param_4,0xffffffff,0);
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
    plVar6 = local_50;
    if (local_50 == (longlong *)0x0) goto LAB_1428fb8c5;
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_1428fb8c5;
    (**(code **)*local_50)(local_50);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_1428fb8c5;
    lVar5 = *plVar6;
  }
  else {
    FUN_146a58380(local_38,&local_48);
    if (((*(longlong *)(local_48 + 0x210) == 0) ||
        (plVar6 = *(longlong **)(local_48 + 0x218), plVar6 == (longlong *)0x0)) ||
       ((int)plVar6[1] < 1)) {
LAB_1428fb8b2:
      local_48 = 0;
      goto LAB_1428fb8b4;
    }
    iVar4 = (int)plVar6[1];
    do {
      if (iVar4 == 0) goto LAB_1428fb8b2;
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar7);
    FUN_1469bd63c(*(undefined8 *)(local_48 + 0x210),param_4,0xffffffff,0);
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_1428fb8c5;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_1428fb8c5;
    lVar5 = *plVar6;
  }
  (**(code **)(lVar5 + 0x10))(plVar6);
LAB_1428fb8c5:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  plVar6 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428fb97f FUN_1428fb97f body=59 status=ok
// SIG undefined FUN_1428fb97f(void)

void FUN_1428fb97f(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c98e9c8;
  if (DAT_14c98e9c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c98e9c8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001428fb9af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428fba08 FUN_1428fba08 body=68 status=ok
// SIG undefined FUN_1428fba08(void)

undefined8 * FUN_1428fba08(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f01c50;
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



// FUNCTION 1428fba68 FUN_1428fba68 body=68 status=ok
// SIG undefined FUN_1428fba68(void)

undefined8 * FUN_1428fba68(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f01cc0;
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



// FUNCTION 1428fbad4 FUN_1428fbad4 body=68 status=ok
// SIG undefined FUN_1428fbad4(void)

undefined8 * FUN_1428fbad4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f01d30;
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



// FUNCTION 1428fbb40 FUN_1428fbb40 body=68 status=ok
// SIG undefined FUN_1428fbb40(void)

undefined8 * FUN_1428fbb40(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f01da0;
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



// FUNCTION 1428fbbac FUN_1428fbbac body=103 status=ok
// SIG undefined FUN_1428fbbac(void)

int FUN_1428fbbac(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x40;
        if (((*(longlong *)(lVar2 + lVar4) == *param_3) &&
            (*(longlong *)(lVar2 + lVar4 + 8) == param_3[1])) &&
           (*(char *)(lVar2 + lVar4 + 0x10) == (char)param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x38 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1428fbc14 FUN_1428fbc14 body=157 status=ok
// SIG undefined FUN_1428fbc14(void)

longlong FUN_1428fbc14(longlong param_1,longlong param_2,uint param_3)

{
  ushort uVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  
  if (*(ulonglong *)(param_1 + 0x10) <=
      (ulonglong)(*(longlong *)(param_1 + 8) + (longlong)(int)param_3)) {
    FUN_145753a78();
  }
  if (param_3 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    if (0 < (int)param_3) {
      uVar5 = 0;
      bVar4 = 0;
      do {
        bVar3 = bVar4;
        uVar1 = *(ushort *)(param_2 + uVar5 * 2);
        *(char *)(lVar2 + uVar5) = (char)uVar1;
        uVar5 = uVar5 + 1;
        bVar4 = bVar3 | 0x7f < uVar1;
      } while (param_3 != uVar5);
      if ((bool)(bVar3 | 0x7f < uVar1)) {
        uVar5 = 0;
        do {
          if (0x7f < *(ushort *)(param_2 + uVar5 * 2)) {
            *(undefined1 *)(lVar2 + uVar5) = 0x3f;
          }
          uVar5 = uVar5 + 1;
        } while (param_3 != uVar5);
        thunk_FUN_140e0237d(param_2,param_3);
      }
    }
    *(longlong *)(param_1 + 8) = lVar2 + (int)param_3;
  }
  return param_1;
}



// FUNCTION 1428fbcb2 FUN_1428fbcb2 body=189 status=ok
// SIG undefined FUN_1428fbcb2(void)

undefined1 * FUN_1428fbcb2(undefined1 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2 = (longlong *)*param_2;
  if ((int)param_2[0x53] != 0) {
    FUN_1469c6996(param_2,&local_38);
    cVar3 = *(char *)(local_38 + 0x2f0);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
    uVar4 = DAT_14c96b1e1;
    if (cVar3 != '\0') goto LAB_1428fbcfa;
  }
  iVar5 = (**(code **)(*param_2 + 0x268))(param_2);
  puVar6 = &DAT_14c96b1e1;
  if (iVar5 == 0) {
    puVar6 = &DAT_14c96b238;
  }
  uVar4 = *puVar6;
LAB_1428fbcfa:
  *param_1 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1428fbd8e FUN_1428fbd8e body=12 status=ok
// SIG undefined FUN_1428fbd8e(void)

void FUN_1428fbd8e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001428fbd97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1428fbd9a FUN_1428fbd9a body=29 status=ok
// SIG undefined FUN_1428fbd9a(void)

undefined8 FUN_1428fbd9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1428fbdb8 FUN_1428fbdb8 body=303 status=ok
// SIG undefined FUN_1428fbdb8(void)

void FUN_1428fbdb8(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149f05750;
  plVar1 = param_1 + 0x48;
  if (*(int *)(param_1 + 0x49) == 0) {
LAB_1428fbe07:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x49) = 0;
      goto LAB_1428fbe07;
    }
  }
  plVar1 = param_1 + 0x46;
  if (*(int *)(param_1 + 0x47) == 0) {
LAB_1428fbe4f:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x47) = 0;
      goto LAB_1428fbe4f;
    }
  }
  plVar1 = param_1 + 0x44;
  if (*(int *)(param_1 + 0x45) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1428fbe9b;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x45) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1428fbe9b:
  FUN_1469edf3a(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 1428fbee7 FUN_1428fbee7 body=68 status=ok
// SIG undefined FUN_1428fbee7(void)

void FUN_1428fbee7(void)

{
  if (DAT_14c98eab8 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c98ea98,DAT_14c98eaa0);
  if (DAT_14c98ea98 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1428fbf3c FUN_1428fbf3c body=174 status=ok
// SIG undefined FUN_1428fbf3c(void)

void FUN_1428fbf3c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f006d0;
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
  plVar3 = (longlong *)param_1[0x45];
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
  plVar3 = (longlong *)param_1[0x43];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1469ec9dc(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 1428fbfea FUN_1428fbfea body=59 status=ok
// SIG undefined FUN_1428fbfea(void)

longlong FUN_1428fbfea(longlong param_1,int param_2)

{
  FUN_1469ec9dc(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1428fc042 FUN_1428fc042 body=64 status=ok
// SIG undefined FUN_1428fc042(void)

undefined8 * FUN_1428fc042(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f04ae0;
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



// FUNCTION 1428fc096 FUN_1428fc096 body=110 status=ok
// SIG undefined FUN_1428fc096(void)

void FUN_1428fc096(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f04ae0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1428fc104 FUN_1428fc104 body=110 status=ok
// SIG undefined FUN_1428fc104(void)

void FUN_1428fc104(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f04ae0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1428fc172 FUN_1428fc172 body=148 status=ok
// SIG undefined FUN_1428fc172(void)

void FUN_1428fc172(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f04ae0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001428fc1f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1428fc206 FUN_1428fc206 body=20 status=ok
// SIG undefined FUN_1428fc206(void)

undefined8 FUN_1428fc206(longlong param_1)

{
  FUN_1428fc22e(param_1 + 0x18);
  return 0;
}



// FUNCTION 1428fc21a FUN_1428fc21a body=20 status=ok
// SIG undefined FUN_1428fc21a(void)

undefined1 FUN_1428fc21a(longlong param_1)

{
  FUN_1428fc22e(param_1 + 0x18);
  return 1;
}



// FUNCTION 1428fc22e FUN_1428fc22e body=128 status=ok
// SIG undefined FUN_1428fc22e(void)

void FUN_1428fc22e(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != (longlong *)0x0) {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) {
        return;
      }
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
    lVar3 = *param_1;
    if (lVar3 != 0) {
      plVar4 = *(longlong **)(lVar3 + 0x160);
      *(undefined8 *)(lVar3 + 0x158) = 0;
      *(undefined8 *)(lVar3 + 0x160) = 0;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      FUN_1469de912(lVar3);
    }
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001428fc276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428fc2ae FUN_1428fc2ae body=39 status=ok
// SIG undefined FUN_1428fc2ae(void)

byte FUN_1428fc2ae(undefined8 *param_1,longlong *param_2)

{
  byte bVar1;
  
  bVar1 = FUN_1469e1534(*param_1);
  return bVar1 & *param_2 == param_1[1];
}



// FUNCTION 1428fc2d5 FUN_1428fc2d5 body=1084 status=ok
// SIG undefined FUN_1428fc2d5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428fc2d5(void)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  char *local_40;
  undefined4 local_38;
  uint uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  lVar6 = 0;
  FUN_14282b410(L"/Script/Slate",&PTR_FUN_149efe9e0,1,0);
  _DAT_14c98e640 = 0x4100000041400000;
  _DAT_14c98e648 = 0x4040000040800000;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c98e650,L"Slate.EnableSyntheticCursorMoves",&DAT_14c75ef48,&DAT_149dfb77a);
  atexit(FUN_1428f6380);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c98e660,L"Slate.EnableCursorQueries",&DAT_14c75ef49,&DAT_149dfb77a);
  atexit(FUN_1428f63c5);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14c98e670,L"Slate.SoftwareCursorScale",&DAT_14c75ef4c,
                L"Scale factor applied to the software cursor. Requires the cursor widget to be scale-aware."
               );
  atexit(FUN_1428f640a);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14c98e680,L"Slate.TooltipSummonDelay",&DAT_14c75ef50,
                L"Delay in seconds before a tooltip is displayed near the mouse cursor when hovering over widgets that supply tooltip data."
               );
  atexit(FUN_1428f644f);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14c98e690,L"Slate.TooltipIntroDuration",&DAT_14c75ef54,
                L"How long it takes for a tooltip to animate into view, in seconds.");
  atexit(FUN_1428f6494);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14c98e6a0,L"Slate.CursorSignificantMoveDetectionThreshold",&DAT_14c98e6b0,
                L"The distance from previous cursor position above which the move will be considered significant (used to trigger the display of the tooltips)."
               );
  atexit(FUN_1428f64d9);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c98e6b8,L"Slate.AllowTooltipsWithHiddenCursor",&DAT_14c98e6c8,&DAT_149dfb77a)
  ;
  atexit(FUN_1428f651e);
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Slate",0,0,&PTR_FUN_149eff6e0);
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_149eff9e0 + lVar6),L"/Script/Slate",
                  *(undefined8 *)((longlong)&PTR_u_EUserInterfaceActionType_149eff9e8 + lVar6),
                  *(undefined8 *)((longlong)&PTR_DAT_149eff9f0 + lVar6));
    lVar6 = lVar6 + 0x20;
  } while (lVar6 != 0x40);
  DAT_14c98ea68 = 0;
  _DAT_14c98ea70 = 0;
  _DAT_14c98ea78 = 2;
  atexit(FUN_1428f8ada);
  _DAT_14c98e8a8 = 0x4038000000000000;
  _DAT_14c98e8b0 = 0x4038000000000000;
  DAT_14c98e8e0 = 0x4064000000000000;
  DAT_14c98e8e8 = 0x4039000000000000;
  DAT_14c98e8f0 = 0x406a400000000000;
  DAT_14c98e8f8 = 0x4049000000000000;
  _DAT_14c98e920 = 0x408f400000000000;
  _DAT_14c98e928 = 0x4082c00000000000;
  DAT_14c98e950 = 0;
  _DAT_14c98e958 = 0;
  DAT_14c98e930 = 0;
  _DAT_14c98e938 = 0;
  _DAT_14c98e95c = 0xffffffff00000080;
  DAT_14c98e964 = 0;
  DAT_14c98e970 = 0;
  DAT_14c98e978 = 0;
  atexit(FUN_1428f9f17);
  FUN_140056680(&DAT_14c98e980,L"OpenedTab");
  atexit((_func_5014 *)&LAB_1428f9f40);
  FUN_140056680(&DAT_14c98e990,L"ClosedTab");
  atexit((_func_5014 *)&LAB_1428f9f51);
  FUN_140056680(&DAT_14c98e9a0,L"SidebarTab");
  atexit((_func_5014 *)&LAB_1428f9f62);
  FUN_140056680(&DAT_14c98e9b0,L"InvalidTab");
  atexit((_func_5014 *)&LAB_1428f9f73);
  local_40 = "NullLayout";
  local_38 = 10;
  uStack_34 = uStack_34 & 0xffffff00;
  uVar5 = FUN_14001a6c0(&local_40,1);
  FUN_14627f844(&local_40,uVar5);
  pcVar4 = local_40;
  FUN_14627f6ee(local_50);
  FUN_14608fcfa(pcVar4,&DAT_14c98e898,local_50);
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
  plVar3 = (longlong *)CONCAT44(uStack_34,local_38);
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
  atexit(FUN_1428f9f84);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428fc714 FUN_1428fc714 body=91 status=ok
// SIG undefined FUN_1428fc714(void)

void FUN_1428fc714(void)

{
  if (DAT_14c98eae8 != 0) {
    if (DAT_14c98eae0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c98eae0)(DAT_14c98eae0,0);
    FUN_1446efa72(&DAT_14c98eae0,0,0,0x10);
    DAT_14c98eae8 = 0;
  }
  if (DAT_14c98eae0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1428fc76f FUN_1428fc76f body=91 status=ok
// SIG undefined FUN_1428fc76f(void)

void FUN_1428fc76f(void)

{
  if (DAT_14c98eb00 != 0) {
    if (DAT_14c98eaf8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c98eaf8)(DAT_14c98eaf8,0);
    FUN_1446efa72(&DAT_14c98eaf8,0,0,0x10);
    DAT_14c98eb00 = 0;
  }
  if (DAT_14c98eaf8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1428fc7ca FUN_1428fc7ca body=91 status=ok
// SIG undefined FUN_1428fc7ca(void)

void FUN_1428fc7ca(void)

{
  if (DAT_14c98eb10 != 0) {
    if (DAT_14c98eb08 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c98eb08)(DAT_14c98eb08,0);
    FUN_1446efa72(&DAT_14c98eb08,0,0,0x10);
    DAT_14c98eb10 = 0;
  }
  if (DAT_14c98eb08 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1428fc825 FUN_1428fc825 body=91 status=ok
// SIG undefined FUN_1428fc825(void)

void FUN_1428fc825(void)

{
  if (DAT_14c98eb28 != 0) {
    if (DAT_14c98eb20 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c98eb20)(DAT_14c98eb20,0);
    FUN_1446efa72(&DAT_14c98eb20,0,0,0x10);
    DAT_14c98eb28 = 0;
  }
  if (DAT_14c98eb20 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1428fc880 FUN_1428fc880 body=867 status=ok
// SIG undefined FUN_1428fc880(void)

longlong * FUN_1428fc880(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  char cVar4;
  byte bVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [44];
  undefined1 local_ac [4];
  undefined1 local_a8 [16];
  longlong local_98 [2];
  longlong *local_88;
  undefined4 local_80;
  longlong local_78;
  ulonglong uStack_70;
  wchar_t *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_3 == 0) {
LAB_1428fc8b8:
    plVar6 = (longlong *)FUN_14142e2d2(param_2);
    plVar7 = (longlong *)*plVar6;
    *param_1 = (longlong)plVar7;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    *(int *)(param_1 + 1) = (int)plVar6[1];
  }
  else {
    FUN_1469baccc(*param_3,&local_60);
    pwVar3 = local_60;
    cVar4 = FUN_1403e7f2a(local_60);
    if (cVar4 == '\0') {
      bVar5 = 0;
    }
    else {
      bVar5 = FUN_14171cb38(pwVar3);
      bVar5 = bVar5 ^ 1;
    }
    plVar7 = (longlong *)CONCAT44(uStack_54,local_58);
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
    if (bVar5 == 0) goto LAB_1428fc8b8;
    local_78 = 0;
    uStack_70 = 0;
    plVar7 = (longlong *)FUN_14142e2d2(param_2);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    local_50 = (longlong *)*plVar7;
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 8))();
    }
    local_48 = (undefined4)plVar7[1];
    FUN_140056680(&local_88,L"ToolTipDescription");
    FUN_140233eec(&local_78,&local_88,&local_60);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
    }
    FUN_1469bac48(*param_3,&local_88);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    local_50 = local_88;
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 8))();
    }
    local_48 = local_80;
    FUN_140056680(local_98,L"Keybinding");
    FUN_140233eec(&local_78,local_98,&local_60);
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
      local_50 = (longlong *)0x0;
      local_48 = 0;
    }
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))();
    }
    local_60 = L"ToolTip + Keybinding";
    local_58 = 0x14;
    FUN_1446e940c(local_98,&local_60);
    local_60 = L"ToolBar";
    local_58 = 7;
    FUN_1446e940c(local_ac,&local_60);
    local_60 = L"{ToolTipDescription} ({Keybinding})";
    local_58 = 0x23;
    FUN_140208c1e(&local_88,local_ac,local_98,&local_60);
    FUN_14023409e(local_a8,&local_88,1);
    FUN_140233c04(param_1,local_a8,&local_78);
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))();
    }
    FUN_14010f8af(local_78,uStack_70 & 0xffffffff);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  plVar7 = param_2 + 3;
  if ((int)param_2[4] != 0) {
    puVar2 = (undefined8 *)*plVar7;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1428fc91a;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar7,0,0,0x10);
    *(undefined4 *)(param_2 + 4) = 0;
  }
  if (*plVar7 != 0) {
    FUN_1400020a8();
  }
LAB_1428fc91a:
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  plVar7 = (longlong *)param_3[1];
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
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428fcbe4 FUN_1428fcbe4 body=854 status=ok
// SIG undefined FUN_1428fcbe4(void)

longlong * FUN_1428fcbe4(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_128 [32];
  longlong *local_108 [2];
  undefined8 local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined4 auStack_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
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
  plVar4 = DAT_14c844840;
  *param_1 = (longlong)DAT_14c844840;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  *(undefined4 *)(param_1 + 1) = DAT_14c844848;
  if ((int)param_2[1] != 0) {
    puVar2 = (undefined8 *)*param_2;
    plVar3 = (longlong *)*puVar2;
    if (plVar4 != plVar3) {
      *param_1 = (longlong)plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar2 + 1);
    if (2 < (int)param_2[1]) {
      lVar6 = 1;
      do {
        lVar5 = *param_2;
        local_d8 = *(longlong **)(lVar5 + lVar6 * 0x10);
        if (local_d8 != (longlong *)0x0) {
          (**(code **)(*local_d8 + 8))();
        }
        local_d0 = *(undefined4 *)(lVar5 + lVar6 * 0x10 + 8);
        local_e8 = (longlong *)*param_1;
        if (local_e8 != (longlong *)0x0) {
          (**(code **)(*local_e8 + 8))();
        }
        local_e0 = (undefined4)param_1[1];
        FUN_1467d1526(local_108,L"{0}/{1}");
        FUN_14023409e(&local_f8,local_108,1);
        local_88._0_4_ = 4;
        FUN_14023423e(local_78,&local_e8);
        local_68 = 4;
        FUN_14023423e(local_58,&local_d8);
        local_a8 = &local_88;
        local_a0 = &local_48;
        FUN_14010d304(&local_98,&local_a8);
        local_b8 = local_f8;
        local_b0 = local_f0;
        if (local_f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_c8,&local_b8,&local_98);
        FUN_14007f2db(local_98,local_90);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        lVar5 = 0x30;
        do {
          if (*(longlong **)((longlong)&local_88 + lVar5) != (longlong *)0x0) {
            (**(code **)(**(longlong **)((longlong)&local_88 + lVar5) + 0x10))();
            *(undefined8 *)((longlong)&local_88 + lVar5) = 0;
            *(undefined4 *)((longlong)auStack_80 + lVar5) = 0;
          }
          plVar4 = local_f0;
          lVar5 = lVar5 + -0x20;
        } while (lVar5 != -0x10);
        if (local_f0 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_f0 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_f0)(local_f0);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        if (local_e8 != (longlong *)0x0) {
          (**(code **)(*local_e8 + 0x10))();
        }
        if (local_d8 != (longlong *)0x0) {
          (**(code **)(*local_d8 + 0x10))();
        }
        FUN_140008f88(param_1,local_c8);
        if (local_c8[0] != (longlong *)0x0) {
          (**(code **)(*local_c8[0] + 0x10))();
        }
        if (local_108[0] != (longlong *)0x0) {
          (**(code **)(*local_108[0] + 0x10))();
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < (longlong)(int)param_2[1] + -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428fcf3b FUN_1428fcf3b body=579 status=ok
// SIG undefined FUN_1428fcf3b(void)

undefined8
FUN_1428fcf3b(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined2 *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar10 = (undefined2 *)0x0;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  local_40 = param_3;
  local_38 = param_2;
  if (param_2 != 0) {
    FUN_1400021e4(&local_38,&local_78);
    iVar4 = (int)local_70;
    iVar6 = ((int)local_70 == 0) + 1;
    local_68 = local_78;
    local_78 = (undefined2 *)0x0;
    iVar5 = local_70._4_4_;
    uStack_60 = local_70;
    local_70 = 0;
    iVar9 = iVar6 + iVar4;
    if (iVar9 < iVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if (iVar5 < iVar9) {
      FUN_1446f8c06(&local_68);
    }
    FUN_1400020e8(&local_68,&DAT_149e0635c,1);
    uStack_50 = uStack_60;
    puVar10 = local_68;
    local_58 = local_68;
    local_68 = (undefined2 *)0x0;
    uStack_60 = 0;
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (param_3 == 0) {
    if ((*param_4 == 0) || (lVar3 = *(longlong *)(*param_4 + 0x68), lVar3 == 0)) {
      FUN_140002266(&local_68,L"MultiboxWidget%d",param_5);
      FUN_140474144(&local_78,&local_58,&local_68);
      puVar8 = local_78;
      if ((int)local_70 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      FUN_1446f470e(param_1,puVar8,1);
      puVar8 = local_68;
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
        puVar8 = local_68;
      }
      goto LAB_1428fd10b;
    }
    plVar7 = &local_80;
    local_80 = lVar3;
  }
  else {
    plVar7 = &local_40;
  }
  FUN_1400021e4(plVar7,&local_78);
  FUN_1407ec8fc(&local_68,&local_58,&local_78);
  puVar8 = local_68;
  if ((int)uStack_60 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_1,puVar8,1);
  puVar8 = local_78;
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
    puVar8 = local_78;
  }
LAB_1428fd10b:
  if (puVar8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (puVar10 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar10);
  }
  plVar7 = (longlong *)param_4[1];
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
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1428fd180 FUN_1428fd180 body=1107 status=ok
// SIG undefined FUN_1428fd180(void)

void FUN_1428fd180(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [40];
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  uint *local_68;
  longlong local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
    if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  local_78 = param_1;
  if ((*(int *)(param_2 + 0xb0) != 0) && (*(int *)(param_1 + 0xb0) == 0)) {
    FUN_1406fa324(param_1 + 0xa8,param_2 + 0xa8);
  }
  uVar3 = *(uint *)(param_2 + 0x30);
  if (uVar3 == 0) {
    uVar16 = 1;
    uVar15 = 0;
    iVar10 = 0;
    uVar4 = 0;
  }
  else {
    puVar5 = *(uint **)(param_2 + 0x28);
    if (*(uint **)(param_2 + 0x28) == (uint *)0x0) {
      puVar5 = (uint *)(param_2 + 0x18);
    }
    uVar4 = *puVar5;
    if (uVar4 == 0) {
      iVar10 = uVar3 + 0x1e;
      if (-1 < (int)(uVar3 - 1)) {
        iVar10 = uVar3 - 1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar16 == uVar15) goto LAB_1428fd295;
        iVar10 = iVar10 + 0x20;
        uVar4 = puVar5[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    uVar16 = (ulonglong)(-uVar4 & uVar4);
    uVar2 = uVar16 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if ((int)uVar3 <= (int)uVar4) {
      uVar4 = uVar3;
    }
  }
  if (uVar4 != uVar3) {
    local_70 = local_78 + 8;
    uVar9 = 0xffffffff;
    local_80 = (ulonglong)uVar3;
    local_68 = (uint *)(param_2 + 0x18);
    do {
      lVar11 = *(longlong *)(param_2 + 8);
      puVar1 = (undefined8 *)(lVar11 + (longlong)(int)uVar4 * 0x14);
      piVar13 = (int *)(puVar1 + 1);
      piVar6 = (int *)FUN_146a1d538(local_78,*puVar1);
      if (piVar6 == (int *)0x0) {
        local_60 = lVar11 + (longlong)(int)uVar4 * 0x14;
        local_58 = piVar13;
        FUN_146a250fc(local_70,local_4c,&local_60);
      }
      else {
        iVar14 = *piVar13;
        if (iVar14 != 0) {
          *piVar6 = iVar14;
        }
      }
      uVar9 = uVar9 & ~(uint)uVar16;
      puVar5 = *(uint **)(param_2 + 0x28);
      if (*(uint **)(param_2 + 0x28) == (uint *)0x0) {
        puVar5 = local_68;
      }
      uVar3 = *(uint *)(param_2 + 0x30);
      iVar14 = (int)uVar15;
      lVar11 = (longlong)iVar14;
      uVar4 = puVar5[lVar11] & uVar9;
      if (uVar4 == 0) {
        iVar8 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar8 = uVar3 - 1;
        }
        iVar8 = iVar8 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar7 = iVar8;
        if (iVar8 < iVar14) {
          iVar7 = iVar14;
        }
        if (iVar14 < iVar8) {
          lVar12 = 0;
          do {
            uVar4 = puVar5[lVar11 + lVar12 + 1];
            if (uVar4 != 0) {
              uVar15 = (ulonglong)(iVar14 + (int)lVar12 + 1);
              uVar9 = 0xffffffff;
              goto LAB_1428fd3e3;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar7 - lVar11 != lVar12);
          uVar9 = 0xffffffff;
          iVar14 = iVar7;
        }
        uVar15 = (ulonglong)(iVar14 + 1);
        uVar4 = uVar3;
      }
      else {
LAB_1428fd3e3:
        uVar16 = (ulonglong)(-uVar4 & uVar4);
        uVar2 = uVar16 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if ((int)uVar3 <= (int)uVar4) {
          uVar4 = uVar3;
        }
      }
    } while (uVar4 != (uint)local_80);
  }
LAB_1428fd295:
  uVar3 = *(uint *)(param_2 + 0x80);
  if (uVar3 == 0) {
    uVar16 = 1;
    uVar15 = 0;
    iVar10 = 0;
    uVar4 = 0;
  }
  else {
    puVar5 = *(uint **)(param_2 + 0x78);
    if (*(uint **)(param_2 + 0x78) == (uint *)0x0) {
      puVar5 = (uint *)(param_2 + 0x68);
    }
    uVar4 = *puVar5;
    if (uVar4 == 0) {
      iVar10 = uVar3 + 0x1e;
      if (-1 < (int)(uVar3 - 1)) {
        iVar10 = uVar3 - 1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar16 == uVar15) goto LAB_1428fd465;
        iVar10 = iVar10 + 0x20;
        uVar4 = puVar5[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    uVar16 = (ulonglong)(-uVar4 & uVar4);
    uVar2 = uVar16 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if ((int)uVar3 <= (int)uVar4) {
      uVar4 = uVar3;
    }
  }
  if (uVar4 != uVar3) {
    local_70 = local_78 + 0x58;
    uVar9 = 0xffffffff;
    local_80 = (ulonglong)uVar3;
    local_68 = (uint *)(param_2 + 0x68);
    do {
      lVar11 = *(longlong *)(param_2 + 0x58);
      puVar1 = (undefined8 *)(lVar11 + (longlong)(int)uVar4 * 0x14);
      piVar13 = (int *)(puVar1 + 1);
      piVar6 = (int *)FUN_146a1d648(local_78,*puVar1);
      if (piVar6 == (int *)0x0) {
        local_60 = lVar11 + (longlong)(int)uVar4 * 0x14;
        local_58 = piVar13;
        FUN_146a25602(local_70,local_4c,&local_60);
      }
      else {
        iVar14 = *piVar13;
        if (iVar14 != 0) {
          *piVar6 = iVar14;
        }
      }
      uVar9 = uVar9 & ~(uint)uVar16;
      puVar5 = *(uint **)(param_2 + 0x78);
      if (*(uint **)(param_2 + 0x78) == (uint *)0x0) {
        puVar5 = local_68;
      }
      uVar3 = *(uint *)(param_2 + 0x80);
      iVar14 = (int)uVar15;
      lVar11 = (longlong)iVar14;
      uVar4 = puVar5[lVar11] & uVar9;
      if (uVar4 == 0) {
        iVar8 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar8 = uVar3 - 1;
        }
        iVar8 = iVar8 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar7 = iVar8;
        if (iVar8 < iVar14) {
          iVar7 = iVar14;
        }
        if (iVar14 < iVar8) {
          lVar12 = 0;
          do {
            uVar4 = puVar5[lVar11 + lVar12 + 1];
            if (uVar4 != 0) {
              uVar15 = (ulonglong)(iVar14 + (int)lVar12 + 1);
              uVar9 = 0xffffffff;
              goto LAB_1428fd565;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar7 - lVar11 != lVar12);
          uVar9 = 0xffffffff;
          iVar14 = iVar7;
        }
        uVar15 = (ulonglong)(iVar14 + 1);
        uVar4 = uVar3;
      }
      else {
LAB_1428fd565:
        uVar16 = (ulonglong)(-uVar4 & uVar4);
        uVar2 = uVar16 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if ((int)uVar3 <= (int)uVar4) {
          uVar4 = uVar3;
        }
      }
    } while (uVar4 != (uint)local_80);
  }
LAB_1428fd465:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1428fd5ef FUN_1428fd5ef body=524 status=ok
// SIG undefined FUN_1428fd5ef(void)

void FUN_1428fd5ef(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < *(int *)(param_2 + 0x1f8)) {
    FUN_1406fa324(param_1 + 0x1f0,param_2 + 0x1f0);
  }
  iVar2 = *(int *)(param_2 + 0x1c8);
  if (iVar2 == 0) {
    uVar9 = 1;
    uVar14 = 0;
    iVar10 = 0;
    iVar4 = 0;
  }
  else {
    puVar5 = *(uint **)(param_2 + 0x1c0);
    if (*(uint **)(param_2 + 0x1c0) == (uint *)0x0) {
      puVar5 = (uint *)(param_2 + 0x1b0);
    }
    uVar6 = *puVar5;
    if (uVar6 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar9 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar9 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar9 == uVar14) goto LAB_1428fd6c0;
        iVar10 = iVar10 + 0x20;
        uVar6 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar9 = (ulonglong)(-uVar6 & uVar6);
    uVar1 = uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar6 = 0xffffffff;
    do {
      local_60 = *(longlong *)(param_2 + 0x1a0) + (longlong)iVar4 * 0x20;
      local_58 = (longlong)iVar4 * 0x20 + *(longlong *)(param_2 + 0x1a0) + 8;
      FUN_146a25b08(param_1 + 0x1a0,local_4c,&local_60);
      uVar6 = ~(uint)uVar9 & uVar6;
      puVar5 = *(uint **)(param_2 + 0x1c0);
      if (*(uint **)(param_2 + 0x1c0) == (uint *)0x0) {
        puVar5 = (uint *)(param_2 + 0x1b0);
      }
      iVar3 = *(int *)(param_2 + 0x1c8);
      iVar4 = (int)uVar14;
      lVar12 = (longlong)iVar4;
      uVar11 = puVar5[lVar12] & uVar6;
      if (uVar11 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar4) {
          iVar8 = iVar4;
        }
        if (iVar4 < iVar7) {
          lVar13 = 0;
          do {
            uVar11 = puVar5[lVar12 + lVar13 + 1];
            if (uVar11 != 0) {
              uVar14 = (ulonglong)(iVar4 + (int)lVar13 + 1);
              uVar6 = 0xffffffff;
              goto LAB_1428fd7a8;
            }
            iVar10 = iVar10 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar8 - lVar12 != lVar13);
          uVar6 = 0xffffffff;
          iVar4 = iVar8;
        }
        uVar14 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_1428fd7a8:
        uVar9 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar9 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar4 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
LAB_1428fd6c0:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428fd817 FUN_1428fd817 body=59 status=ok
// SIG undefined FUN_1428fd817(void)

void FUN_1428fd817(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c98ed38;
  if (DAT_14c98ed38 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c98ed38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001428fd847. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428fd852 FUN_1428fd852 body=46 status=ok
// SIG undefined FUN_1428fd852(void)

void FUN_1428fd852(void)

{
  longlong lVar1;
  
  lVar1 = 0x60;
  do {
    if (*(longlong *)((longlong)&DAT_14c98ed40 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1428fd920 FUN_1428fd920 body=293 status=ok
// SIG undefined FUN_1428fd920(void)

void FUN_1428fd920(undefined1 *param_1,undefined1 *param_2)

{
  char cVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  cVar1 = param_2[0x20];
  param_1[0x20] = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  param_1[0xb4] = param_2[0xb4];
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  return;
}



// FUNCTION 1428fda46 FUN_1428fda46 body=339 status=ok
// SIG undefined FUN_1428fda46(void)

undefined1 * FUN_1428fda46(undefined1 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = *param_2;
  uVar4 = param_2[1];
  plVar7 = (longlong *)param_2[2];
  local_40 = uVar4;
  if (plVar7 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    local_38 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar3 = (int *)((longlong)plVar7 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  uVar5 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar6 = FUN_146a2dac4((longlong *)(lVar8 + 0x360),uVar5 >> 0x10 ^ uVar5,&local_40);
  plVar1 = local_38;
  if (iVar6 == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)iVar6 * 0x28 + *(longlong *)(lVar8 + 0x360);
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar7 = (longlong *)(lVar8 + 0x10);
  if (lVar8 == 0) {
    plVar7 = (longlong *)0x0;
  }
  *param_1 = *(undefined1 *)(*plVar7 + 0x20);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428fdbd2 FUN_1428fdbd2 body=12 status=ok
// SIG undefined FUN_1428fdbd2(void)

void FUN_1428fdbd2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001428fdbdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1428fdbde FUN_1428fdbde body=83 status=ok
// SIG undefined FUN_1428fdbde(void)

undefined8 * FUN_1428fdbde(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149f0a1e0;
  plVar3 = (longlong *)param_1[3];
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



// FUNCTION 1428fdc32 FUN_1428fdc32 body=180 status=ok
// SIG undefined FUN_1428fdc32(void)

undefined1 * FUN_1428fdc32(undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  
  lVar1 = *param_2;
  plVar4 = *(longlong **)(lVar1 + 0x478);
  if (*(code **)(*plVar4 + 0x50) != FUN_144828418) {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x50))();
  }
  FUN_1447a1fc0(plVar4);
  plVar4 = *(longlong **)(lVar1 + 0x478);
  pcVar2 = *(code **)(*plVar4 + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar5 = plVar4 + 3;
    if (plVar4[5] != 0) {
      plVar5 = (longlong *)(plVar4[5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar5 = plVar4 + 2;
  }
  else {
    plVar5 = (longlong *)(*pcVar2)(plVar4);
  }
  if ((int)plVar5[1] < 2) {
    cVar3 = FUN_146a0b37c(lVar1);
    puVar6 = &DAT_14c96b1e1;
    if (cVar3 != '\0') {
      puVar6 = &DAT_14c96b238;
    }
  }
  else {
    puVar6 = &DAT_14c96b238;
  }
  *param_1 = *puVar6;
  return param_1;
}



// FUNCTION 1428fdd04 FUN_1428fdd04 body=12 status=ok
// SIG undefined FUN_1428fdd04(void)

void FUN_1428fdd04(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001428fdd0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1428fdd10 FUN_1428fdd10 body=29 status=ok
// SIG undefined FUN_1428fdd10(void)

undefined8 FUN_1428fdd10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1428fdd5e FUN_1428fdd5e body=12 status=ok
// SIG undefined FUN_1428fdd5e(void)

void FUN_1428fdd5e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001428fdd67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1428fdd6a FUN_1428fdd6a body=29 status=ok
// SIG undefined FUN_1428fdd6a(void)

undefined8 FUN_1428fdd6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1428fdd88 FUN_1428fdd88 body=48 status=ok
// SIG undefined FUN_1428fdd88(void)

longlong FUN_1428fdd88(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x268;
  FUN_146a37ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1428fddb8 FUN_1428fddb8 body=48 status=ok
// SIG undefined FUN_1428fddb8(void)

longlong FUN_1428fddb8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x268;
  FUN_146a37ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1428fdde8 FUN_1428fdde8 body=563 status=ok
// SIG undefined FUN_1428fdde8(void)

void FUN_1428fdde8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar6 = (int)param_1[0xc] - *(int *)((longlong)param_1 + 0x8c);
  if (((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar6) ||
     (iVar6 != (int)param_1[0x16])) {
    if ((*(int *)(*param_1 + 0x6b8) != 0) &&
       ((plVar4 = *(longlong **)(*param_1 + 0x6b0), plVar4 != (longlong *)0x0 &&
        (cVar5 = (**(code **)(*plVar4 + 0x30))(), cVar5 != '\0')))) {
      iVar6 = (int)param_1[6];
      if (iVar6 == 0) {
        uVar15 = 1;
        uVar17 = 0;
        iVar13 = 0;
        iVar7 = 0;
      }
      else {
        puVar11 = (uint *)param_1[5];
        if ((uint *)param_1[5] == (uint *)0x0) {
          puVar11 = (uint *)(param_1 + 3);
        }
        uVar16 = *puVar11;
        if (uVar16 == 0) {
          iVar7 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar7 = iVar6 + -1;
          }
          uVar17 = 0;
          uVar15 = (ulonglong)(uint)(iVar7 >> 5);
          if (iVar7 >> 5 < 1) {
            uVar15 = uVar17;
          }
          iVar13 = 0;
          do {
            if (uVar15 == uVar17) goto LAB_1428fdfcc;
            iVar13 = iVar13 + 0x20;
            uVar16 = puVar11[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar16 == 0);
        }
        else {
          uVar17 = 0;
          iVar13 = 0;
        }
        uVar15 = (ulonglong)(-uVar16 & uVar16);
        uVar3 = uVar15 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar7) {
          iVar7 = iVar6;
        }
      }
      if (iVar7 < iVar6) {
        uVar16 = 0xffffffff;
        do {
          plVar4 = *(longlong **)(param_1[1] + 0x10 + (longlong)iVar7 * 0x28);
          (**(code **)(*plVar4 + 0x58))(plVar4,local_58);
          plVar4 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_50 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          uVar16 = uVar16 & ~(uint)uVar15;
          puVar11 = (uint *)param_1[5];
          if ((uint *)param_1[5] == (uint *)0x0) {
            puVar11 = (uint *)(param_1 + 3);
          }
          iVar6 = (int)param_1[6];
          iVar7 = (int)uVar17;
          lVar14 = (longlong)iVar7;
          uVar8 = puVar11[lVar14] & uVar16;
          if (uVar8 == 0) {
            iVar9 = iVar6 + 0x1e;
            if (-1 < iVar6 + -1) {
              iVar9 = iVar6 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar10 = iVar9;
            if (iVar9 < iVar7) {
              iVar10 = iVar7;
            }
            if (iVar9 <= iVar7) break;
            lVar12 = 0;
            while( true ) {
              iVar13 = iVar13 + 0x20;
              uVar8 = puVar11[lVar14 + lVar12 + 1];
              if (uVar8 != 0) break;
              lVar12 = lVar12 + 1;
              if (iVar10 - lVar14 == lVar12) goto LAB_1428fdfcc;
            }
            uVar17 = (ulonglong)(iVar7 + (int)lVar12 + 1);
            uVar16 = 0xffffffff;
          }
          uVar15 = (ulonglong)(-uVar8 & uVar8);
          uVar3 = uVar15 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        } while (iVar7 < iVar6);
      }
    }
LAB_1428fdfcc:
    if ((*(int *)(*param_1 + 0x6c8) != 0) &&
       (plVar4 = *(longlong **)(*param_1 + 0x6c0), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x60))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428fe02e FUN_1428fe02e body=130 status=ok
// SIG undefined FUN_1428fe02e(void)

undefined1 * FUN_1428fe02e(undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  
  lVar1 = *param_2;
  if ((*(int *)(lVar1 + 0x960) != 0) && (*(longlong **)(lVar1 + 0x958) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x958) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(lVar1 + 0x960) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(lVar1 + 0x958);
      }
      uVar3 = (**(code **)(*plVar4 + 0x58))();
      *(undefined4 *)(lVar1 + 0x950) = uVar3;
    }
  }
  puVar5 = &DAT_14c96b238;
  if (*(int *)(lVar1 + 0x950) < *(int *)(lVar1 + 0x244) == (bool)(char)param_2[1]) {
    puVar5 = &DAT_14c96b1e1;
  }
  *param_1 = *puVar5;
  return param_1;
}



// FUNCTION 1428fe0ce FUN_1428fe0ce body=12 status=ok
// SIG undefined FUN_1428fe0ce(void)

void FUN_1428fe0ce(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001428fe0d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1428fe0da FUN_1428fe0da body=29 status=ok
// SIG undefined FUN_1428fe0da(void)

undefined8 FUN_1428fe0da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1428fe0f8 FUN_1428fe0f8 body=29 status=ok
// SIG undefined FUN_1428fe0f8(void)

undefined8 FUN_1428fe0f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1428fe12a FUN_1428fe12a body=93 status=ok
// SIG undefined FUN_1428fe12a(void)

void FUN_1428fe12a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0a860;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f0c060;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1428fe188 FUN_1428fe188 body=93 status=ok
// SIG undefined FUN_1428fe188(void)

void FUN_1428fe188(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0a860;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f0c060;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1428fe1e6 FUN_1428fe1e6 body=126 status=ok
// SIG undefined FUN_1428fe1e6(void)

void FUN_1428fe1e6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f0a860;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f0c060;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001428fe255. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1428fe264 FUN_1428fe264 body=50 status=ok
// SIG undefined FUN_1428fe264(void)

undefined8 FUN_1428fe264(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x238) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x230);
  }
  (**(code **)(*plVar1 + 0x58))(plVar1,param_2);
  return param_2;
}



// FUNCTION 1428fe296 FUN_1428fe296 body=126 status=ok
// SIG undefined FUN_1428fe296(void)

undefined8 FUN_1428fe296(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x238) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x230);
  }
  (**(code **)(*plVar2 + 0x58))(plVar2,local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_18 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar1 = (int *)((longlong)local_18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428fe315 FUN_1428fe315 body=68 status=ok
// SIG undefined FUN_1428fe315(void)

void FUN_1428fe315(void)

{
  if (DAT_14c98ee28 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c98ee08,DAT_14c98ee10);
  if (DAT_14c98ee08 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1428fe359 FUN_1428fe359 body=746 status=ok
// SIG undefined FUN_1428fe359(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428fe359(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  _DAT_14c98ead8 = 0;
  DAT_14c98eae0 = 0;
  _DAT_14c98eae8 = 0;
  atexit(FUN_1428fc714);
  _DAT_14c98eaf0 = 0;
  DAT_14c98eaf8 = 0;
  _DAT_14c98eb00 = 0;
  atexit(FUN_1428fc76f);
  DAT_14c98eb08 = (undefined8 *)0x0;
  DAT_14c98eb10 = 0;
  FUN_1446efa72(&DAT_14c98eb08,0,2,0x10);
  puVar1 = DAT_14c98eb08;
  DAT_14c98eb10 = 2;
  *DAT_14c98eb08 = &PTR_LAB_149f09660;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_149f095f0;
  puVar1[3] = FUN_1469fff36;
  atexit(FUN_1428fc7ca);
  DAT_14c98eb18 = 0;
  DAT_14c98eb1c = 0;
  DAT_14c98eb20 = 0;
  _DAT_14c98eb28 = 0;
  atexit(FUN_1428fc825);
  _DAT_14c98eb30 = 0;
  _DAT_14c98eb58 = 0x402e000000000000;
  DAT_14c98eb60 = 0x4034000000000000;
  FUN_14282b410(L"/Script/Slate",&PTR_FUN_149f06c00,1,0,0,0,0);
  FUN_14282b410(L"/Script/Slate",&PTR_FUN_149f06fc0,1,0,0,0,0);
  FUN_14282b410(L"/Script/Slate",&PTR_FUN_149f07380,1,0,0,0,0);
  FUN_14282b410(L"/Script/Slate",&PTR_FUN_149f07740,1,0,0,0,0);
  FUN_14282b410(L"/Script/Slate",&PTR_FUN_149f07b10,1,0,0,0,0);
  FUN_14282b410(L"/Script/Slate",&PTR_FUN_149f07ee0,1,0,0,0,0);
  FUN_14282b410(L"/Script/Slate",&PTR_FUN_149f082a0,1,0,0,0,0);
  FUN_14282b410(L"/Script/Slate",&PTR_FUN_149f08660,1,0,0,0,0);
  FUN_14282b410(L"/Script/Slate",&PTR_FUN_149f08a20,1,0,0,0,0);
  FUN_14282b410(L"/Script/Slate",&PTR_FUN_149f08de0,1,0,0,0,0);
  FUN_14282b410(L"/Script/Slate",&PTR_FUN_149f091a0,1,0,0,0,0);
  FUN_140056680(&DAT_14c98ed00,&DAT_149f091c8);
  atexit((_func_5014 *)&LAB_1428fd801);
  FUN_14628000c();
  atexit((_func_5014 *)&LAB_1428fd812);
  return;
}



// FUNCTION 1428fe644 FUN_1428fe644 body=407 status=ok
// SIG undefined FUN_1428fe644(void)

undefined8 FUN_1428fe644(longlong *param_1,double *param_2,double *param_3)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  dVar5 = (double)*(float *)param_1[1];
  fVar7 = (float)(param_2[1] * dVar5);
  lVar1 = *param_1;
  fVar6 = (float)(*param_2 * dVar5);
  fVar3 = (float)(dVar5 * *param_3 + *param_2 * dVar5) - fVar6;
  fVar8 = (float)(param_3[1] * dVar5 + param_2[1] * dVar5) - fVar7;
  fVar11 = *(float *)(lVar1 + 0x1c);
  fVar4 = *(float *)(lVar1 + 0x24);
  fVar10 = fVar11 * 0.0 + fVar8 * fVar4;
  fVar9 = fVar11 * fVar6 + fVar4 * fVar7 + *(float *)(lVar1 + 0x2c);
  fVar11 = fVar3 * fVar11 + fVar4 * 0.0 + fVar9;
  fVar12 = fVar10 + fVar9;
  fVar10 = fVar10 + fVar11;
  fVar4 = fVar11;
  if (fVar12 <= fVar11) {
    fVar4 = fVar12;
  }
  if (fVar10 <= fVar4) {
    fVar4 = fVar10;
  }
  fVar13 = fVar9;
  if (fVar4 <= fVar9) {
    fVar13 = fVar4;
  }
  pfVar2 = (float *)param_1[2];
  if (fVar13 < pfVar2[2] || fVar13 == pfVar2[2]) {
    if (fVar11 <= fVar12) {
      fVar11 = fVar12;
    }
    if (fVar11 <= fVar10) {
      fVar11 = fVar10;
    }
    if (fVar9 <= fVar11) {
      fVar9 = fVar11;
    }
    if (*pfVar2 <= fVar9) {
      fVar11 = *(float *)(lVar1 + 0x20);
      fVar4 = *(float *)(lVar1 + 0x28);
      fVar8 = fVar11 * 0.0 + fVar8 * fVar4;
      fVar9 = fVar6 * fVar11 + fVar7 * fVar4 + *(float *)(lVar1 + 0x30);
      fVar4 = fVar3 * fVar11 + fVar4 * 0.0 + fVar9;
      fVar3 = fVar8 + fVar9;
      fVar8 = fVar8 + fVar4;
      fVar11 = fVar4;
      if (fVar3 <= fVar4) {
        fVar11 = fVar3;
      }
      if (fVar8 <= fVar11) {
        fVar11 = fVar8;
      }
      fVar6 = fVar9;
      if (fVar11 <= fVar9) {
        fVar6 = fVar11;
      }
      if (fVar6 < pfVar2[3] || fVar6 == pfVar2[3]) {
        if (fVar4 <= fVar3) {
          fVar4 = fVar3;
        }
        if (fVar4 <= fVar8) {
          fVar4 = fVar8;
        }
        if (fVar9 <= fVar4) {
          fVar9 = fVar4;
        }
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),pfVar2[1] <= fVar9);
      }
    }
  }
  return 0;
}



// FUNCTION 1428fe7dc FUN_1428fe7dc body=8 status=ok
// SIG undefined FUN_1428fe7dc(void)

longlong FUN_1428fe7dc(longlong param_1)

{
  return param_1 + 0x160;
}



// FUNCTION 1428fe7e4 FUN_1428fe7e4 body=274 status=ok
// SIG undefined FUN_1428fe7e4(void)

void FUN_1428fe7e4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *puStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_140163244(*(undefined8 *)(param_1 + 8),8);
  }
  iVar6 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar6 + 1U) {
    FUN_1469e5f1c((longlong *)(param_1 + 0x18),iVar6);
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  *(longlong *)(lVar3 + (longlong)iVar6 * 0x10) = *param_2;
  lVar4 = param_2[1];
  *(longlong *)(lVar3 + 8 + (longlong)iVar6 * 0x10) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (*param_2 != DAT_14c98dec8) {
    lVar3 = *(longlong *)(param_1 + 8);
    puVar5 = *(undefined8 **)(lVar3 + 0x10);
    if (puVar5 == (undefined8 *)0x0) {
LAB_1428fe8ca:
      local_38 = 0;
      puStack_30 = (undefined8 *)0x0;
      FUN_1407630f8();
    }
    else {
      iVar6 = *(int *)(puVar5 + 1);
      do {
        if (iVar6 == 0) goto LAB_1428fe8ca;
        LOCK();
        iVar2 = *(int *)(puVar5 + 1);
        bVar7 = iVar6 == iVar2;
        if (bVar7) {
          *(int *)(puVar5 + 1) = iVar6 + 1;
          iVar2 = iVar6;
        }
        iVar6 = iVar2;
        UNLOCK();
      } while (!bVar7);
      local_38 = *(undefined8 *)(lVar3 + 8);
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
      puStack_30 = puVar5;
      FUN_1407630f8();
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(puVar5);
        LOCK();
        piVar1 = (int *)((longlong)puVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428fe90a FUN_1428fe90a body=49 status=ok
// SIG undefined FUN_1428fe90a(void)

void FUN_1428fe90a(void)

{
  FUN_1404578a2(DAT_14c98ee48,DAT_14c98ee50);
  if (DAT_14c98ee48 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1428fe93b FUN_1428fe93b body=55 status=ok
// SIG undefined FUN_1428fe93b(void)

void FUN_1428fe93b(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98ee68 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c98ee68 = FUN_14171c317(FUN_14628089b,uVar1,L"ETextJustify");
  }
  return;
}



// FUNCTION 1428fe972 FUN_1428fe972 body=55 status=ok
// SIG undefined FUN_1428fe972(void)

void FUN_1428fe972(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98ee80 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c98ee80 = FUN_14171c317(FUN_1462808cc,uVar1,L"ETextWrappingPolicy");
  }
  return;
}



// FUNCTION 1428fe9a9 FUN_1428fe9a9 body=55 status=ok
// SIG undefined FUN_1428fe9a9(void)

void FUN_1428fe9a9(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98ee98 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c98ee98 = FUN_14171c317(FUN_1462808fb,uVar1,L"ETextFlowDirection");
  }
  return;
}



// FUNCTION 1428fe9e0 FUN_1428fe9e0 body=69 status=ok
// SIG undefined FUN_1428fe9e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428fe9e0(void)

{
  _DAT_14c98eea8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428fea22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98eeb0,1);
  return;
}



// FUNCTION 1428fea26 FUN_1428fea26 body=1163 status=ok
// SIG undefined FUN_1428fea26(void)

void FUN_1428fea26(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_108 [36];
  uint local_e4;
  ulonglong local_e0;
  uint *local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  longlong *local_b0;
  char local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    dVar22 = (double)*(float *)(param_1 + 0x94) * *(double *)(param_1 + 0xd0);
    uVar5 = *(uint *)(param_1 + 0x68);
    if (uVar5 == 0) {
      uVar14 = 1;
      uVar19 = 0;
      uVar8 = 0;
      iVar13 = 0;
    }
    else {
      puVar9 = *(uint **)(param_1 + 0x60);
      if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 0x50);
      }
      uVar8 = *puVar9;
      if (uVar8 == 0) {
        iVar13 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar13 = uVar5 - 1;
        }
        uVar19 = 0;
        uVar14 = (ulonglong)(uint)(iVar13 >> 5);
        if (iVar13 >> 5 < 1) {
          uVar14 = uVar19;
        }
        iVar13 = 0;
        do {
          if (uVar14 == uVar19) goto LAB_1428fea79;
          iVar13 = iVar13 + 0x20;
          uVar8 = puVar9[uVar19 + 1];
          uVar19 = uVar19 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar19 = 0;
        iVar13 = 0;
      }
      uVar14 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar8 = (iVar13 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if ((int)uVar5 <= (int)uVar8) {
        uVar8 = uVar5;
      }
    }
    if (uVar8 != uVar5) {
      dVar21 = (double)*(float *)(param_1 + 0xbc);
      if ((double)*(float *)(param_1 + 0xbc) <= dVar22) {
        dVar21 = dVar22;
      }
      fVar23 = (float)(dVar21 - (double)(*(float *)(param_1 + 0x94) *
                                        (*(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0xa8))));
      uVar16 = 0xffffffff;
      local_e0 = (ulonglong)uVar5;
      local_d8 = (uint *)(param_1 + 0x50);
      do {
        lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x40) + (longlong)(int)uVar8 * 0xc) *
                 0x68;
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x30) + lVar12);
        iVar18 = *(int *)(param_1 + 0xb0);
        local_e4 = uVar16;
        if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x60 + lVar12) == '\x01') {
          if (iVar18 == 2) {
            fVar20 = *(float *)((longlong)plVar3 + 0x54);
            goto LAB_1428fee51;
          }
          if (iVar18 != 0) goto LAB_1428febe7;
          fVar20 = *(float *)((longlong)plVar3 + 0x54);
LAB_1428fedc7:
          plVar6 = *(longlong **)(*plVar3 + (longlong)((int)plVar3[1] + -1) * 0x10);
          (**(code **)(*plVar6 + 0x20))(plVar6,&local_c0);
          cVar7 = local_a8;
          plVar6 = local_b0;
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_b0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_b0)(local_b0);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          if (cVar7 == '\x01') {
            fVar20 = (float)(double)plVar3[8];
          }
          uVar24 = (undefined4)DAT_14c8463f8;
          uVar25 = (undefined4)((ulonglong)DAT_14c8463f8 >> 0x20);
LAB_1428fec35:
          fVar20 = fVar23 - fVar20;
LAB_1428fec4c:
          dVar22 = (double)fVar20;
        }
        else {
LAB_1428febe7:
          fVar20 = *(float *)((longlong)plVar3 + 0x54);
          if (iVar18 == 0) {
LAB_1428fee51:
            (**(code **)(**(longlong **)*plVar3 + 0x20))(*(longlong **)*plVar3,&local_c0);
            cVar7 = local_a8;
            plVar6 = local_b0;
            if (local_b0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_b0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_b0)(local_b0);
                LOCK();
                piVar2 = (int *)((longlong)plVar6 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
            }
            dVar22 = (double)plVar3[8];
            if (cVar7 == '\0') {
              fVar20 = (float)dVar22;
            }
            uVar24 = (undefined4)DAT_14c8463f8;
            uVar25 = (undefined4)((ulonglong)DAT_14c8463f8 >> 0x20);
LAB_1428fec20:
            fVar20 = -(float)(dVar22 - (double)fVar20);
            goto LAB_1428fec4c;
          }
          if (iVar18 == 2) goto LAB_1428fedc7;
          uVar24 = (undefined4)DAT_14c8463f8;
          uVar25 = (undefined4)((ulonglong)DAT_14c8463f8 >> 0x20);
          if (iVar18 == 1) {
            fVar20 = (fVar23 - fVar20) * 0.5;
            goto LAB_1428fec4c;
          }
          if (iVar18 == 4) goto LAB_1428fec35;
          dVar22 = DAT_14c8463f0;
          if (iVar18 == 3) {
            dVar22 = (double)plVar3[8];
            goto LAB_1428fec20;
          }
        }
        plVar3[6] = (longlong)((double)plVar3[6] + dVar22);
        plVar3[7] = (longlong)((double)plVar3[7] + (double)CONCAT44(uVar25,uVar24));
        lVar12 = plVar3[1];
        if ((longlong)(int)lVar12 != 0) {
          lVar15 = *plVar3;
          lVar17 = 0;
          do {
            plVar3 = *(longlong **)(lVar15 + lVar17);
            (**(code **)(*plVar3 + 0x38))(plVar3,&local_d0);
            local_b8 = local_c8 + (double)CONCAT44(uVar25,uVar24);
            local_c0 = local_d0 + dVar22;
            (**(code **)(*plVar3 + 0x30))(plVar3,&local_c0);
            lVar17 = lVar17 + 0x10;
          } while ((longlong)(int)lVar12 * 0x10 != lVar17);
        }
        uVar16 = local_e4 & ~(uint)uVar14;
        puVar9 = *(uint **)(param_1 + 0x60);
        if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
          puVar9 = local_d8;
        }
        uVar5 = *(uint *)(param_1 + 0x68);
        iVar18 = (int)uVar19;
        lVar12 = (longlong)iVar18;
        uVar8 = puVar9[lVar12] & uVar16;
        if (uVar8 == 0) {
          iVar10 = uVar5 + 0x1e;
          if (-1 < (int)(uVar5 - 1)) {
            iVar10 = uVar5 - 1;
          }
          iVar10 = iVar10 >> 5;
          iVar13 = iVar13 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar18) {
            iVar11 = iVar18;
          }
          if (iVar18 < iVar10) {
            lVar15 = 0;
            do {
              uVar8 = puVar9[lVar12 + lVar15 + 1];
              if (uVar8 != 0) {
                uVar19 = (ulonglong)(iVar18 + (int)lVar15 + 1);
                uVar16 = 0xffffffff;
                goto LAB_1428fed47;
              }
              iVar13 = iVar13 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar11 - lVar12 != lVar15);
            uVar16 = 0xffffffff;
            iVar18 = iVar11;
          }
          uVar19 = (ulonglong)(iVar18 + 1);
          uVar8 = uVar5;
        }
        else {
LAB_1428fed47:
          uVar14 = (ulonglong)(-uVar8 & uVar8);
          uVar4 = uVar14 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          uVar8 = (iVar13 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if ((int)uVar5 <= (int)uVar8) {
            uVar8 = uVar5;
          }
        }
      } while (uVar8 != (uint)local_e0);
    }
  }
LAB_1428fea79:
  if ((local_a0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428feeb2 FUN_1428feeb2 body=396 status=ok
// SIG undefined FUN_1428feeb2(void)

void FUN_1428feeb2(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  float fVar10;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  fVar1 = *(float *)(param_1 + 0x94);
  fVar10 = (*(float *)(param_1 + 0xa8) + *(float *)(param_1 + 0xa0)) * fVar1;
  *(float *)(param_1 + 0xbc) = *(float *)(param_1 + 0xbc) + fVar10;
  *(float *)(param_1 + 0xc0) = fVar10 + *(float *)(param_1 + 0xc0);
  *(float *)(param_1 + 0xc4) =
       (*(float *)(param_1 + 0xac) + *(float *)(param_1 + 0xa4)) * fVar1 +
       *(float *)(param_1 + 0xc4);
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    dVar4 = (double)*(float *)(param_1 + 0xa4) * (double)fVar1;
    dVar5 = (double)*(float *)(param_1 + 0xa0) * (double)fVar1;
    plVar8 = *(longlong **)(param_1 + 0x30);
    plVar9 = plVar8 + (longlong)*(int *)(param_1 + 0x38) * 0xd;
    do {
      plVar8[6] = (longlong)((double)plVar8[6] + dVar5);
      plVar8[7] = (longlong)((double)plVar8[7] + dVar4);
      lVar6 = plVar8[1];
      if ((longlong)(int)lVar6 != 0) {
        lVar2 = *plVar8;
        lVar7 = 0;
        do {
          plVar3 = *(longlong **)(lVar2 + lVar7);
          (**(code **)(*plVar3 + 0x38))(plVar3,&local_90);
          local_78 = local_88 + dVar4;
          local_80 = local_90 + dVar5;
          (**(code **)(*plVar3 + 0x30))(plVar3,&local_80);
          lVar7 = lVar7 + 0x10;
        } while ((longlong)(int)lVar6 * 0x10 != lVar7);
      }
      plVar8 = plVar8 + 0xd;
    } while (plVar8 != plVar9);
  }
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428ff040 FUN_1428ff040 body=147 status=ok
// SIG undefined FUN_1428ff040(void)

void FUN_1428ff040(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  puVar1 = (undefined8 *)param_1[2];
  if ((*(int *)param_1[3] < ((int *)param_1[3])[1]) && (*(float *)((longlong)puVar1 + 4) <= 0.0)) {
    return;
  }
  lVar2 = param_1[1];
  if (*(int *)(*param_1 + 0xc) < 0) {
    plVar5 = (longlong *)(lVar2 + 0x10);
    uVar6 = (ulonglong)*(int *)(lVar2 + 0x18);
    uVar4 = *(int *)(lVar2 + 0x18) + 1;
    *(uint *)(lVar2 + 0x18) = uVar4;
    if (uVar4 <= *(uint *)(lVar2 + 0x1c)) goto LAB_1428ff083;
  }
  else {
    plVar5 = (longlong *)(lVar2 + 0x20);
    uVar6 = (ulonglong)*(int *)(lVar2 + 0x28);
    uVar4 = *(int *)(lVar2 + 0x28) + 1;
    *(uint *)(lVar2 + 0x28) = uVar4;
    if (uVar4 <= *(uint *)(lVar2 + 0x2c)) goto LAB_1428ff083;
  }
  FUN_146a74608(plVar5,uVar6 & 0xffffffff);
LAB_1428ff083:
  lVar2 = *plVar5;
  *(undefined8 *)(lVar2 + uVar6 * 0x18) = *puVar1;
  *(undefined8 *)(lVar2 + 8 + uVar6 * 0x18) = puVar1[1];
  lVar3 = puVar1[2];
  *(longlong *)(lVar2 + 0x10 + uVar6 * 0x18) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1428ff0d4 FUN_1428ff0d4 body=57 status=ok
// SIG undefined FUN_1428ff0d4(void)

void FUN_1428ff0d4(longlong param_1,char param_2)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x91) != param_2) {
    *(char *)(param_1 + 0x91) = param_2;
    *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 1;
    iVar2 = *(int *)(param_1 + 0x28);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x20);
      lVar4 = 0;
      do {
        pbVar1 = (byte *)(lVar3 + 0x68 + lVar4);
        *pbVar1 = *pbVar1 | 7;
        lVar4 = lVar4 + 0x70;
      } while ((longlong)iVar2 * 0x70 - lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 1428ff10e FUN_1428ff10e body=57 status=ok
// SIG undefined FUN_1428ff10e(void)

void FUN_1428ff10e(longlong param_1,char param_2)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x92) != param_2) {
    *(char *)(param_1 + 0x92) = param_2;
    *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 1;
    iVar2 = *(int *)(param_1 + 0x28);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x20);
      lVar4 = 0;
      do {
        pbVar1 = (byte *)(lVar3 + 0x68 + lVar4);
        *pbVar1 = *pbVar1 | 7;
        lVar4 = lVar4 + 0x70;
      } while ((longlong)iVar2 * 0x70 - lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 1428ff148 FUN_1428ff148 body=106 status=ok
// SIG undefined FUN_1428ff148(void)

void FUN_1428ff148(longlong param_1,char *param_2)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  undefined1 uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x151);
  bVar3 = param_2[1];
  bVar2 = *(char *)(param_1 + 0x150) == *param_2;
  if ((bVar1 & 1) == 0) {
    bVar2 = bVar1 == bVar3;
  }
  if ((bool)(bVar1 == bVar3 & bVar2)) goto LAB_1428ff19f;
  if ((char *)(param_1 + 0x150) != param_2) {
    if (bVar3 == 0) {
      if ((bVar1 & 1) == 0) goto LAB_1428ff195;
      uVar4 = 0;
    }
    else {
      *(char *)(param_1 + 0x150) = *param_2;
      uVar4 = 1;
    }
    *(undefined1 *)(param_1 + 0x151) = uVar4;
  }
LAB_1428ff195:
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 1;
  bVar3 = param_2[1];
LAB_1428ff19f:
  if ((bVar3 & 1) != 0) {
    param_2[1] = '\0';
  }
  return;
}



// FUNCTION 1428ff1b2 FUN_1428ff1b2 body=78 status=ok
// SIG undefined FUN_1428ff1b2(void)

void FUN_1428ff1b2(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 0x128,*param_2,iVar1);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 2);
  FUN_140a5cea4(param_1 + 0x140,param_2 + 3);
  return;
}



// FUNCTION 1428ff234 FUN_1428ff234 body=137 status=ok
// SIG undefined FUN_1428ff234(void)

void FUN_1428ff234(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  
  if ((*(longlong *)(param_1 + 0x310) != 0) &&
     (plVar3 = *(longlong **)(param_1 + 0x2c8), plVar3 != (longlong *)0x0)) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        return;
      }
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
    if ((*(longlong *)(param_1 + 0x2c0) != 0) &&
       (cVar5 = FUN_14681561c(*(undefined8 *)(*(longlong *)(param_1 + 0x2c0) + 0x168),
                              *(undefined8 *)(param_1 + 0x310)), cVar5 == '\0')) {
      FUN_146a56f5e(param_1);
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
                    /* WARNING: Could not recover jumptable at 0x0001428ff290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428ff2ce FUN_1428ff2ce body=49 status=ok
// SIG undefined FUN_1428ff2ce(void)

void FUN_1428ff2ce(void)

{
  FUN_146a7f317(DAT_14c98ef60,DAT_14c98ef68);
  if (DAT_14c98ef60 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1428ff300 FUN_1428ff300 body=6220 status=ok
// SIG undefined FUN_1428ff300(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428ff300(longlong *param_1,char param_2,byte param_3,undefined4 param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  code *pcVar6;
  longlong lVar7;
  uint uVar8;
  code *pcVar9;
  undefined4 uVar10;
  int iVar11;
  char cVar12;
  undefined1 uVar13;
  int iVar14;
  longlong lVar15;
  float *pfVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined8 uVar20;
  longlong lVar21;
  undefined **ppuVar22;
  longlong *plVar23;
  undefined1 *puVar24;
  longlong *plVar25;
  bool bVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined1 auStack_5f8 [32];
  code **local_5d8;
  code **local_5d0;
  longlong *local_5c8;
  undefined1 *local_5c0;
  undefined8 *local_5b8;
  undefined2 *local_5b0;
  undefined1 local_5a8;
  longlong local_5a0;
  undefined4 local_598;
  undefined4 local_594;
  longlong local_590;
  longlong *local_588;
  undefined8 local_580;
  longlong *local_578;
  longlong local_570;
  longlong local_568;
  undefined1 local_560 [8];
  longlong *local_558;
  undefined8 local_550;
  longlong *local_548;
  code *local_540;
  longlong *local_538;
  code *local_530;
  longlong *local_528;
  undefined1 local_519;
  undefined8 local_518;
  longlong *local_510;
  undefined8 local_500;
  longlong *local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined1 local_4dc [4];
  code *local_4d8;
  longlong *local_4d0;
  longlong local_4c8;
  longlong *plStack_4c0;
  undefined1 local_4b0 [22];
  undefined2 local_49a;
  undefined8 local_498;
  longlong *plStack_490;
  longlong *local_488;
  undefined2 local_480;
  undefined4 local_2f0;
  undefined1 local_2b7;
  undefined4 local_2b4;
  undefined4 local_2b0;
  float local_2ac;
  float local_2a8;
  undefined8 local_2a0;
  undefined2 local_296;
  byte local_293;
  uint local_290;
  code *local_238;
  longlong *local_230;
  undefined1 local_200 [8];
  undefined1 local_1f8 [56];
  longlong local_1c0;
  longlong local_1b8 [28];
  undefined1 *local_d8;
  ulonglong local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  longlong *plStack_b8;
  longlong local_b0;
  ulonglong uStack_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_5f8;
  if ((((char)param_1[0x50] == '\x01') && (param_1[0x40] != 0)) && (param_1[0x41] != 0)) {
    if (0 < *(int *)(param_1[0x41] + 8) == (bool)param_2) goto LAB_1428ff9b8;
    if (param_2 == '\0') {
      (**(code **)(*DAT_14c98e618 + 0x168))(DAT_14c98e618,&local_498,param_4);
      plVar17 = plStack_490;
      pcVar9 = local_498;
      pcVar6 = (code *)param_1[0x44];
      if (plStack_490 != (longlong *)0x0) {
        LOCK();
        plVar23 = plStack_490 + 1;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)*plVar23 == 0) {
          (**(code **)*plStack_490)(plStack_490);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
      }
      plVar17 = DAT_14c98e618;
      if (pcVar9 == pcVar6) {
        plStack_490 = (longlong *)param_1[2];
        if (plStack_490 == (longlong *)0x0) {
LAB_1428ff406:
          local_498 = (code *)0x0;
          plStack_490 = (longlong *)0x0;
          bVar26 = true;
        }
        else {
          iVar14 = (int)plStack_490[1];
          do {
            if (iVar14 == 0) goto LAB_1428ff406;
            LOCK();
            iVar11 = (int)plStack_490[1];
            bVar26 = iVar14 == iVar11;
            if (bVar26) {
              *(int *)(plStack_490 + 1) = iVar14 + 1;
              iVar11 = iVar14;
            }
            iVar14 = iVar11;
            UNLOCK();
          } while (!bVar26);
          local_498 = (code *)param_1[1];
          LOCK();
          *(int *)(plStack_490 + 1) = (int)plStack_490[1] + 1;
          UNLOCK();
          bVar26 = false;
        }
        plVar23 = plStack_490;
        FUN_1410a3d58(plVar17,param_4,&local_498,2);
        plVar17 = plStack_490;
        if (plStack_490 != (longlong *)0x0) {
          LOCK();
          plVar18 = plStack_490 + 1;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)*plVar18 == 0) {
            (**(code **)*plStack_490)(plStack_490);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
            }
          }
        }
        if (!bVar26) {
          LOCK();
          plVar17 = plVar23 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 == 0) {
            (**(code **)*plVar23)(plVar23);
            LOCK();
            piVar1 = (int *)((longlong)plVar23 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar23 + 0x10))(plVar23);
            }
          }
        }
      }
      if (((param_1[0x40] != 0) && (plVar17 = (longlong *)param_1[0x41], plVar17 != (longlong *)0x0)
          ) && (0 < (int)plVar17[1])) {
        iVar14 = (int)plVar17[1];
        do {
          if (iVar14 == 0) {
            (**(code **)(_DAT_00000000 + 0x38))(0);
            goto LAB_14290077d;
          }
          LOCK();
          iVar11 = (int)plVar17[1];
          bVar26 = iVar14 == iVar11;
          if (bVar26) {
            *(int *)(plVar17 + 1) = iVar14 + 1;
            iVar11 = iVar14;
          }
          iVar14 = iVar11;
          UNLOCK();
        } while (!bVar26);
        (**(code **)(*(longlong *)param_1[0x40] + 0x38))();
        LOCK();
        plVar23 = plVar17 + 1;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)*plVar23 == 0) {
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
LAB_14290077d:
      FUN_146a6cadc(param_1);
      goto LAB_1428ff9b8;
    }
  }
  else if (param_2 == '\0') goto LAB_1428ff9b8;
  if ((((int)param_1[0x49] != 0) && ((longlong *)param_1[0x48] != (longlong *)0x0)) &&
     (cVar12 = (**(code **)(*(longlong *)param_1[0x48] + 0x30))(), cVar12 != '\0')) {
    if ((int)param_1[0x49] == 0) {
      plVar17 = (longlong *)0x0;
    }
    else {
      plVar17 = (longlong *)param_1[0x48];
    }
    (**(code **)(*plVar17 + 0x58))(plVar17,local_4b0);
    (**(code **)(*param_1 + 0x240))(param_1,local_4b0);
  }
  if (param_1[0x44] != 0) {
    if ((((int)param_1[0x4b] != 0) && ((longlong *)param_1[0x4a] != (longlong *)0x0)) &&
       (cVar12 = (**(code **)(*(longlong *)param_1[0x4a] + 0x30))(), cVar12 != '\0')) {
      if ((int)param_1[0x4b] == 0) {
        plVar17 = (longlong *)0x0;
      }
      else {
        plVar17 = (longlong *)param_1[0x4a];
      }
      (**(code **)(*plVar17 + 0x58))(plVar17,1);
    }
    plVar23 = DAT_14c98e618;
    local_200[0] = DAT_14c96b238;
    local_d8 = (undefined1 *)0x0;
    local_d0 = 0x400000000;
    local_c8 = 0;
    local_c0 = 0;
    plStack_b8 = (longlong *)0x0;
    local_b0 = 0;
    uStack_a8 = 0;
    plVar17 = (longlong *)param_1[2];
    if (plVar17 == (longlong *)0x0) {
LAB_1428ff56b:
      local_4c8 = 0;
      plStack_4c0 = (longlong *)0x0;
      FUN_1407c4cd2(plVar23,&local_4c8,local_200);
    }
    else {
      iVar14 = (int)plVar17[1];
      do {
        if (iVar14 == 0) goto LAB_1428ff56b;
        LOCK();
        iVar11 = (int)plVar17[1];
        bVar26 = iVar14 == iVar11;
        if (bVar26) {
          *(int *)(plVar17 + 1) = iVar14 + 1;
          iVar11 = iVar14;
        }
        iVar14 = iVar11;
        UNLOCK();
      } while (!bVar26);
      local_4c8 = param_1[1];
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      plStack_4c0 = plVar17;
      FUN_1407c4cd2(plVar23,&local_4c8,local_200);
      LOCK();
      plVar23 = plVar17 + 1;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)*plVar23 == 0) {
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
    lVar15 = (longlong)(int)local_d0;
    if (0 < lVar15) {
      puVar24 = local_d8;
      if (local_d8 == (undefined1 *)0x0) {
        puVar24 = local_1f8;
      }
      uVar28 = *(undefined4 *)(puVar24 + lVar15 * 0x48 + -0x40);
      FUN_1405d299c(param_1,uVar28);
      local_4d8 = (code *)param_1[0x44];
      local_4d0 = (longlong *)param_1[0x45];
      if (local_4d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_4d0 + 1) = (int)local_4d0[1] + 1;
        UNLOCK();
      }
      plVar17 = (longlong *)(puVar24 + lVar15 * 0x48);
      FUN_1405d299c(local_4d8,uVar28);
      pfVar16 = (float *)(local_4d8 + 0x168);
      if (((byte)local_4d8[0x31] & 0x20) == 0) {
        pfVar16 = (float *)&DAT_14c84635c;
      }
      fVar2 = *pfVar16;
      fVar29 = pfVar16[1];
      if ((((int)param_1[0x4e] == 0) || ((longlong *)param_1[0x4d] == (longlong *)0x0)) ||
         (cVar12 = (**(code **)(*(longlong *)param_1[0x4d] + 0x30))(), cVar12 == '\0')) {
        iVar14 = (int)param_1[0x4c];
      }
      else {
        if ((int)param_1[0x4e] == 0) {
          plVar23 = (longlong *)0x0;
        }
        else {
          plVar23 = (longlong *)param_1[0x4d];
        }
        iVar14 = (**(code **)(*plVar23 + 0x58))();
        *(int *)(param_1 + 0x4c) = iVar14;
      }
      fVar3 = *(float *)((longlong)plVar17 + -0x3c);
      fVar4 = *(float *)(plVar17 + -7);
      lVar15 = *(longlong *)((longlong)plVar17 + -0x3c);
      local_4dc = (undefined1  [4])0x0;
      fVar27 = fVar2;
      if (iVar14 - 3U < 2) {
        local_4dc = (undefined1  [4])0x1;
        fVar27 = *(float *)(plVar17 + -9);
        if (fVar27 <= fVar2) {
          fVar27 = fVar2;
        }
      }
      else if (iVar14 == 5) {
        local_4dc = (undefined1  [4])0x3;
        fVar29 = *(float *)(plVar17 + -5) * *(float *)(plVar17 + -9) +
                 *(float *)(plVar17 + -4) * *(float *)((longlong)plVar17 + -0x44);
        fVar27 = *(float *)(plVar17 + -9) * *(float *)((longlong)plVar17 + -0x2c) +
                 *(float *)((longlong)plVar17 + -0x44) * *(float *)((longlong)plVar17 + -0x24);
      }
      else if (iVar14 == 0) {
        local_4dc = (undefined1  [4])0x2;
      }
      if (*(char *)((longlong)param_1 + 0x27c) == '\x01') {
        local_498 = (code *)CONCAT71(local_498._1_7_,1);
        plStack_490 = (longlong *)0x0;
        local_488 = (longlong *)0x0;
        local_480 = CONCAT11(1,*(undefined1 *)((longlong)param_1 + 0x27b));
        uVar13 = 1;
      }
      else {
        FUN_146a6c8ba(&local_498,local_200);
        uVar13 = (undefined1)local_498;
      }
      plVar23 = local_488;
      *(undefined1 *)(param_1 + 0x50) = uVar13;
      if (param_1 + 0x50 != &local_498) {
        param_1[0x51] = (longlong)plStack_490;
        plStack_490 = (longlong *)0x0;
        plVar18 = (longlong *)param_1[0x52];
        if (local_488 != plVar18) {
          local_488 = (longlong *)0x0;
          param_1[0x52] = (longlong)plVar23;
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            plVar23 = plVar18 + 1;
            *(int *)plVar23 = (int)*plVar23 + -1;
            UNLOCK();
            if ((int)*plVar23 == 0) {
              (**(code **)*plVar18)(plVar18);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
              }
            }
          }
        }
      }
      plVar23 = local_488;
      *(undefined2 *)(param_1 + 0x53) = local_480;
      if (local_488 != (longlong *)0x0) {
        LOCK();
        plVar18 = local_488 + 1;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)*plVar18 == 0) {
          (**(code **)*local_488)(local_488);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar23 + 0x10))(plVar23);
          }
        }
      }
      pcVar6 = local_4d8;
      plVar23 = DAT_14c98e618;
      if (*(char *)((longlong)param_1 + 0x2a1) == '\x01') {
        if ((char)param_1[0x53] != '\0') {
          FUN_1428668da(local_200,&local_498);
          plVar23 = plStack_490;
          param_1[0x3e] = (longlong)local_498;
          plVar17 = (longlong *)param_1[0x3f];
          if (plVar17 != plStack_490) {
            if (plStack_490 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plStack_490 + 0xc) = *(int *)((longlong)plStack_490 + 0xc) + 1;
              UNLOCK();
              plVar17 = (longlong *)param_1[0x3f];
            }
            if (plVar17 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar17 + 0x10))();
              }
            }
            param_1[0x3f] = (longlong)plVar23;
          }
          plVar17 = plStack_490;
          if (plStack_490 != (longlong *)0x0) {
            LOCK();
            plVar23 = plStack_490 + 1;
            *(int *)plVar23 = (int)*plVar23 + -1;
            UNLOCK();
            if ((int)*plVar23 == 0) {
              (**(code **)*plStack_490)(plStack_490);
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
          }
          if (param_3 != 0) {
            FUN_14627ef0a(DAT_14c98e618,param_4);
          }
          plVar23 = (longlong *)param_1[2];
          uVar28 = 0x4c846301;
          if (plVar23 == (longlong *)0x0) {
LAB_14290009a:
            lVar15 = 0;
            plVar23 = (longlong *)0x0;
          }
          else {
            iVar14 = (int)plVar23[1];
            do {
              if (iVar14 == 0) goto LAB_14290009a;
              LOCK();
              iVar11 = (int)plVar23[1];
              bVar26 = iVar14 == iVar11;
              if (bVar26) {
                *(int *)(plVar23 + 1) = iVar14 + 1;
                iVar11 = iVar14;
              }
              iVar14 = iVar11;
              UNLOCK();
            } while (!bVar26);
            lVar15 = param_1[1];
            LOCK();
            *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
            UNLOCK();
            LOCK();
            plVar17 = plVar23 + 1;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)*plVar17 == 0) {
              (**(code **)*plVar23)(plVar23);
              LOCK();
              piVar1 = (int *)((longlong)plVar23 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar23 + 0x10))(plVar23);
              }
            }
            uVar28 = 0;
          }
          plVar17 = DAT_14c98e618;
          uVar13 = *(undefined1 *)((longlong)param_1 + 0x27a);
          uVar5 = *(undefined1 *)((longlong)param_1 + 0x299);
          local_518 = (code *)(lVar15 + 0x1e0);
          if (lVar15 == 0) {
            local_518 = (code *)0x0;
          }
          local_5c8 = param_1 + 0x46;
          if ((char)uVar28 == '\0') {
            LOCK();
            *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
            UNLOCK();
          }
          local_5b0 = (undefined2 *)CONCAT71(local_5b0._1_7_,uVar13);
          local_5b8 = (undefined8 *)CONCAT71(local_5b8._1_7_,uVar5);
          local_5c0 = local_4dc;
          local_5d0 = &local_4d8;
          local_5d8 = (code **)&local_518;
          local_510 = plVar23;
          local_4f0 = lVar15;
          local_4e8 = plVar23;
          FUN_1469a9f84(plVar17,&local_498,&local_4f0,local_200);
          plVar17 = local_4e8;
          if (local_4e8 != (longlong *)0x0) {
            LOCK();
            plVar18 = local_4e8 + 1;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)*plVar18 == 0) {
              (**(code **)*local_4e8)(local_4e8);
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
          }
          plVar17 = local_510;
          if (local_510 != (longlong *)0x0) {
            LOCK();
            plVar18 = local_510 + 1;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)*plVar18 == 0) {
              (**(code **)*local_510)(local_510);
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
          }
          plVar18 = plStack_490;
          param_1[0x40] = (longlong)local_498;
          plVar17 = (longlong *)param_1[0x41];
          if (plVar17 != plStack_490) {
            if (plStack_490 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plStack_490 + 0xc) = *(int *)((longlong)plStack_490 + 0xc) + 1;
              UNLOCK();
              plVar17 = (longlong *)param_1[0x41];
            }
            if (plVar17 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar17 + 0x10))();
              }
            }
            param_1[0x41] = (longlong)plVar18;
          }
          lVar15 = *(longlong *)(param_1[0x5c] + 8);
          lVar21 = param_1[0x46];
          lVar7 = param_1[0x47];
          if (lVar7 != 0) {
            LOCK();
            *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
            UNLOCK();
          }
          local_5a0 = CONCAT44(local_5a0._4_4_,uVar28);
          if (*(longlong *)(lVar15 + 0x10) != DAT_14c98dec8) {
            if (*(longlong *)(lVar15 + 8) == 0) {
              uVar20 = 0;
            }
            else {
              uVar20 = *(undefined8 *)(*(longlong *)(lVar15 + 8) + 8);
            }
            FUN_14066af28(*(longlong *)(lVar15 + 0x10),uVar20);
          }
          plVar17 = *(longlong **)(lVar15 + 0x18);
          *(longlong *)(lVar15 + 0x10) = lVar21;
          *(longlong *)(lVar15 + 0x18) = lVar7;
          FUN_140a5503c(lVar15);
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            plVar18 = plVar17 + 1;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)*plVar18 == 0) {
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
          lVar15 = local_5a0;
          plVar17 = DAT_14c98e618;
          if (param_3 != 0) {
            local_518 = local_4d8;
            local_510 = local_4d0;
            if (local_4d0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_4d0 + 1) = (int)local_4d0[1] + 1;
              UNLOCK();
            }
            FUN_1410a3d58(plVar17,param_4,&local_518,2);
            plVar17 = local_510;
            if (local_510 != (longlong *)0x0) {
              LOCK();
              plVar18 = local_510 + 1;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)*plVar18 == 0) {
                (**(code **)*local_510)(local_510);
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
          plVar17 = plStack_490;
          if (plStack_490 != (longlong *)0x0) {
            LOCK();
            plVar18 = plStack_490 + 1;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)*plVar18 == 0) {
              (**(code **)*plStack_490)(plStack_490);
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
          }
          cVar12 = (char)lVar15;
          goto joined_r0x000142900b15;
        }
        local_5a8 = *(undefined1 *)((longlong)param_1 + 0x27a);
        local_49a = 0x100;
        local_4f0 = CONCAT44(fVar29,fVar27);
        local_510 = (longlong *)param_1[2];
        if (local_510 == (longlong *)0x0) {
          local_510 = (longlong *)0x0;
          local_518 = (code *)0x0;
        }
        else {
          iVar14 = (int)local_510[1];
          local_518 = (code *)0x0;
          do {
            if (iVar14 == 0) {
              local_510 = (longlong *)0x0;
              goto LAB_1428ff847;
            }
            LOCK();
            iVar11 = (int)local_510[1];
            bVar26 = iVar14 == iVar11;
            if (bVar26) {
              *(int *)(local_510 + 1) = iVar14 + 1;
              iVar11 = iVar14;
            }
            iVar14 = iVar11;
            UNLOCK();
          } while (!bVar26);
          local_518 = (code *)param_1[1];
        }
LAB_1428ff847:
        local_5b0 = &local_49a;
        local_5b8 = &local_4f0;
        local_5c0 = (undefined1 *)CONCAT71(local_5c0._1_7_,param_3);
        local_5c8 = (longlong *)local_4dc;
        local_5d0 = (code **)&local_500;
        local_5d8 = &local_4d8;
        local_500._0_4_ = fVar3;
        local_500._4_4_ = fVar4;
        FUN_1428f4aae(plVar23,&local_498,&local_518,local_200);
        plVar17 = local_510;
        if (local_510 != (longlong *)0x0) {
          LOCK();
          plVar23 = local_510 + 1;
          *(int *)plVar23 = (int)*plVar23 + -1;
          UNLOCK();
          if ((int)*plVar23 == 0) {
            (**(code **)*local_510)(local_510);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
            }
          }
        }
        plVar23 = plStack_490;
        if (local_498 != (code *)0x0) {
          (**(code **)(*(longlong *)local_498 + 0x18))(local_498,&local_518);
          plVar17 = local_510;
          pcVar6 = local_518;
          if (local_510 != (longlong *)0x0) {
            LOCK();
            plVar23 = local_510 + 1;
            *(int *)plVar23 = (int)*plVar23 + -1;
            UNLOCK();
            if ((int)*plVar23 == 0) {
              (**(code **)*local_510)(local_510);
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
          }
          plVar17 = plStack_490;
          if (pcVar6 == (code *)0x0) {
            plVar17 = (longlong *)param_1[0x41];
            if (plVar17 != (longlong *)0x0) {
              iVar14 = (int)plVar17[1];
              do {
                if (iVar14 == 0) goto LAB_1429000f5;
                LOCK();
                iVar11 = (int)plVar17[1];
                bVar26 = iVar14 == iVar11;
                if (bVar26) {
                  *(int *)(plVar17 + 1) = iVar14 + 1;
                  iVar11 = iVar14;
                }
                iVar14 = iVar11;
                UNLOCK();
              } while (!bVar26);
              if ((longlong *)param_1[0x40] != (longlong *)0x0) {
                (**(code **)(*(longlong *)param_1[0x40] + 0x38))();
              }
              LOCK();
              plVar23 = plVar17 + 1;
              *(int *)plVar23 = (int)*plVar23 + -1;
              UNLOCK();
              if ((int)*plVar23 == 0) {
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
LAB_1429000f5:
            FUN_146a6cadc(param_1);
            plVar23 = plStack_490;
          }
          else {
            param_1[0x40] = (longlong)local_498;
            plVar23 = (longlong *)param_1[0x41];
            if (plVar23 != plStack_490) {
              if (plStack_490 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)plStack_490 + 0xc) = *(int *)((longlong)plStack_490 + 0xc) + 1;
                UNLOCK();
                plVar23 = (longlong *)param_1[0x41];
              }
              if (plVar23 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar23 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar23 + 0x10))();
                }
              }
              param_1[0x41] = (longlong)plVar17;
            }
            uVar20 = (**(code **)(*(longlong *)local_498 + 0x28))(local_498);
            local_518 = FUN_146a6c9de;
            local_510 = (longlong *)((ulonglong)local_510 & 0xffffffff00000000);
            FUN_146a6c964(uVar20,&local_4f0,param_1);
            (**(code **)(*(longlong *)local_498 + 0x18))(local_498,&local_518);
            plVar23 = local_510;
            param_1[0x3e] = (longlong)local_518;
            plVar17 = (longlong *)param_1[0x3f];
            if (plVar17 != local_510) {
              if (local_510 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)local_510 + 0xc) = *(int *)((longlong)local_510 + 0xc) + 1;
                UNLOCK();
                plVar17 = (longlong *)param_1[0x3f];
              }
              if (plVar17 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar17 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar17 + 0x10))();
                }
              }
              param_1[0x3f] = (longlong)plVar23;
            }
            plVar17 = local_510;
            plVar23 = plStack_490;
            if (local_510 != (longlong *)0x0) {
              LOCK();
              plVar18 = local_510 + 1;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)*plVar18 == 0) {
                (**(code **)*local_510)(local_510);
                LOCK();
                piVar1 = (int *)((longlong)plVar17 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar23 = plStack_490;
                if (*piVar1 == 0) {
                  (**(code **)(*plVar17 + 0x10))(plVar17);
                  plVar23 = plStack_490;
                }
              }
            }
          }
        }
LAB_1428ff8f6:
        if (plVar23 != (longlong *)0x0) {
          LOCK();
          plVar17 = plVar23 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 != 0) goto LAB_1428ff918;
          (**(code **)*plVar23)(plVar23);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 != 0) goto LAB_1428ff918;
          lVar15 = *plVar23;
LAB_1428ff915:
          (**(code **)(lVar15 + 0x10))(plVar23);
        }
      }
      else {
        if ((char)param_1[0x53] == '\0') {
          local_4e8 = (longlong *)
                      CONCAT44(*(float *)((longlong)plVar17 + -0x44) + fVar4,
                               *(float *)(plVar17 + -9) + fVar3);
          bVar26 = local_4dc != (undefined1  [4])0x3;
          local_4f0 = lVar15;
          uVar28 = (**(code **)(*DAT_14c98e618 + 0x58))();
          FUN_1405d299c(pcVar6,uVar28);
          pfVar16 = (float *)(local_4d8 + 0x168);
          if (((byte)local_4d8[0x31] & 0x20) == 0) {
            pfVar16 = (float *)&DAT_14c84635c;
          }
          fVar2 = *pfVar16;
          fVar29 = pfVar16[1];
          local_5d0 = (code **)&local_518;
          local_518 = (code *)CONCAT44((float)DAT_14c8463f8,(float)DAT_14c8463f0);
          local_5c8 = (longlong *)CONCAT44(local_5c8._4_4_,(uint)bVar26);
          local_5d8 = (code **)((ulonglong)local_5d8 & 0xffffffffffffff00);
          local_500._0_4_ = fVar2;
          local_500._4_4_ = fVar29;
          (**(code **)(*DAT_14c98e618 + 0x1d0))(DAT_14c98e618,&local_498,&local_4f0);
          uVar28 = (undefined4)local_498;
          uVar10 = local_498._4_4_;
          if (param_3 != 0) {
            FUN_14627ef0a(DAT_14c98e618,param_4);
          }
          FUN_14627df0c(&local_498);
          plVar17 = local_230;
          local_2f0 = 1;
          local_296 = 0x101;
          local_2b4 = uVar28;
          local_2b0 = uVar10;
          local_2b7 = 0;
          local_2a0 = 0x3f80000000000001;
          local_290 = (uint)param_3;
          if (local_4d0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_4d0 + 1) = (int)local_4d0[1] + 1;
            UNLOCK();
          }
          local_238 = local_4d8;
          local_230 = local_4d0;
          local_2ac = fVar2;
          local_2a8 = fVar29;
          local_293 = param_3;
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            plVar23 = plVar17 + 1;
            *(int *)plVar23 = (int)*plVar23 + -1;
            UNLOCK();
            if ((int)*plVar23 == 0) {
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
          local_5d8 = (code **)&local_519;
          FUN_1461c0e96(&local_518,"SWindow",
                        ".\\Runtime/Slate/Private/Widgets/Input/SMenuAnchor.cpp",0x1f7);
          FUN_1462139ea(&local_518,&local_500,&local_498);
          plVar17 = local_510;
          if (local_510 != (longlong *)0x0) {
            LOCK();
            plVar23 = local_510 + 1;
            *(int *)plVar23 = (int)*plVar23 + -1;
            UNLOCK();
            if ((int)*plVar23 == 0) {
              (**(code **)*local_510)(local_510);
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
          }
          FUN_14627e134(&local_498);
          if (param_3 != 0) {
            local_530 = local_4d8;
            local_528 = local_4d0;
            if (local_4d0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_4d0 + 1) = (int)local_4d0[1] + 1;
              UNLOCK();
            }
            FUN_1469a5b86(CONCAT44(local_500._4_4_,(float)local_500),&local_530);
          }
          plVar17 = (longlong *)FUN_14001cc68(0x58,0x10);
          uVar13 = *(undefined1 *)((longlong)param_1 + 0x27a);
          local_540 = local_4d8;
          local_538 = local_4d0;
          if (local_4d0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_4d0 + 1) = (int)local_4d0[1] + 1;
            UNLOCK();
          }
          local_550 = CONCAT44(local_500._4_4_,(float)local_500);
          local_548 = local_4f8;
          if (local_4f8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_4f8 + 1) = (int)local_4f8[1] + 1;
            UNLOCK();
          }
          FUN_1469a4f78(plVar17,&local_550,&local_540,uVar13);
          plVar18 = (longlong *)FUN_14001cc68(0x18,0x10);
          plVar18[1] = (longlong)&DAT_100000001;
          *plVar18 = (longlong)&PTR_FUN_149efcf50;
          plVar18[2] = (longlong)plVar17;
          if ((plVar17 != (longlong *)0x0) &&
             (((plVar17[1] == 0 || (plVar17[2] == 0)) || (*(int *)(plVar17[2] + 8) < 1)))) {
            if (plVar18 == (longlong *)0x0) {
              plVar17[1] = (longlong)plVar17;
              plVar23 = (longlong *)plVar17[2];
              if (plVar23 != (longlong *)0x0) {
LAB_14290072e:
                LOCK();
                piVar1 = (int *)((longlong)plVar23 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar23 + 0x10))();
                }
                plVar17[2] = (longlong)plVar18;
                if (plVar18 != (longlong *)0x0) goto LAB_142900746;
              }
            }
            else {
              LOCK();
              *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
              UNLOCK();
              plVar17[1] = (longlong)plVar17;
              if ((longlong *)plVar17[2] != plVar18) {
                LOCK();
                *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
                UNLOCK();
                plVar23 = (longlong *)plVar17[2];
                if (plVar23 != (longlong *)0x0) goto LAB_14290072e;
                plVar17[2] = (longlong)plVar18;
              }
LAB_142900746:
              LOCK();
              plVar23 = plVar18 + 1;
              *(int *)plVar23 = (int)*plVar23 + -1;
              UNLOCK();
              if ((int)*plVar23 == 0) {
                (**(code **)*plVar18)(plVar18);
                LOCK();
                piVar1 = (int *)((longlong)plVar18 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18);
                }
              }
            }
          }
          plVar23 = DAT_14c98e618;
          plVar19 = (longlong *)(local_d8 + 0x38);
          if (local_d8 == (undefined1 *)0x0) {
            plVar19 = &local_1c0;
          }
          local_570 = *plVar19;
          plVar19 = local_1b8;
          if (local_d8 != (undefined1 *)0x0) {
            plVar19 = (longlong *)(local_d8 + 0x40);
          }
          local_568 = *plVar19;
          if (local_568 != 0) {
            LOCK();
            *(int *)(local_568 + 8) = *(int *)(local_568 + 8) + 1;
            UNLOCK();
          }
          local_580 = CONCAT44(local_500._4_4_,(float)local_500);
          local_578 = local_4f8;
          if (local_4f8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_4f8 + 1) = (int)local_4f8[1] + 1;
            UNLOCK();
          }
          local_5d8 = (code **)CONCAT71(local_5d8._1_7_,1);
          FUN_1469a8322(plVar23,local_560,&local_580,&local_570);
          if (local_558 != (longlong *)0x0) {
            LOCK();
            plVar23 = local_558 + 1;
            *(int *)plVar23 = (int)*plVar23 + -1;
            UNLOCK();
            if ((int)*plVar23 == 0) {
              (**(code **)*local_558)(local_558);
              LOCK();
              piVar1 = (int *)((longlong)local_558 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_558 + 0x10))(local_558);
              }
            }
          }
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
            UNLOCK();
          }
          plVar23 = (longlong *)param_1[0x43];
          param_1[0x42] = (longlong)plVar17;
          param_1[0x43] = (longlong)plVar18;
          plVar19 = plVar17;
          plVar25 = plVar18;
          if (plVar23 != (longlong *)0x0) {
            LOCK();
            plVar19 = plVar23 + 1;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)*plVar19 == 0) {
              (**(code **)*plVar23)(plVar23);
              LOCK();
              piVar1 = (int *)((longlong)plVar23 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar23 + 0x10))(plVar23);
              }
            }
            plVar19 = (longlong *)param_1[0x42];
            plVar25 = (longlong *)param_1[0x43];
          }
          param_1[0x40] = (longlong)plVar19;
          plVar23 = (longlong *)param_1[0x41];
          if (plVar23 != plVar25) {
            if (plVar25 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar25 + 0xc) = *(int *)((longlong)plVar25 + 0xc) + 1;
              UNLOCK();
              plVar23 = (longlong *)param_1[0x41];
            }
            if (plVar23 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar23 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar23 + 0x10))();
              }
            }
            param_1[0x41] = (longlong)plVar25;
          }
          uVar20 = (**(code **)(*plVar17 + 0x28))(plVar17);
          local_498 = FUN_146a6c9de;
          plStack_490 = (longlong *)((ulonglong)plStack_490 & 0xffffffff00000000);
          FUN_146a6c964(uVar20,&local_518,param_1);
          plVar23 = local_4f8;
          param_1[0x3e] = CONCAT44(local_500._4_4_,(float)local_500);
          plVar17 = (longlong *)param_1[0x3f];
          if (plVar17 != local_4f8) {
            if (local_4f8 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)local_4f8 + 0xc) = *(int *)((longlong)local_4f8 + 0xc) + 1;
              UNLOCK();
              plVar17 = (longlong *)param_1[0x3f];
            }
            if (plVar17 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar17 + 0x10))();
              }
            }
            param_1[0x3f] = (longlong)plVar23;
          }
          plVar23 = local_4f8;
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            plVar17 = plVar18 + 1;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)*plVar17 == 0) {
              (**(code **)*plVar18)(plVar18);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar23 = local_4f8;
              if (*piVar1 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
                plVar23 = local_4f8;
              }
            }
          }
          goto LAB_1428ff8f6;
        }
        plVar23 = (longlong *)(local_d8 + 0x38);
        if (local_d8 == (undefined1 *)0x0) {
          plVar23 = &local_1c0;
        }
        lVar15 = *plVar23;
        plVar23 = local_1b8;
        if (local_d8 != (undefined1 *)0x0) {
          plVar23 = (longlong *)(local_d8 + 0x40);
        }
        plVar23 = (longlong *)*plVar23;
        if (plVar23 == (longlong *)0x0) {
          param_1[0x3e] = lVar15;
          plVar18 = (longlong *)param_1[0x3f];
          if (plVar18 != (longlong *)0x0) {
LAB_1429007c4:
            plVar17 = param_1 + 0x3f;
            LOCK();
            piVar1 = (int *)((longlong)plVar18 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar18 + 0x10))();
            }
            *plVar17 = (longlong)plVar23;
            if (plVar23 != (longlong *)0x0) goto LAB_1429007d8;
          }
        }
        else {
          LOCK();
          *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
          UNLOCK();
          param_1[0x3e] = lVar15;
          if ((longlong *)param_1[0x3f] != plVar23) {
            LOCK();
            *(int *)((longlong)plVar23 + 0xc) = *(int *)((longlong)plVar23 + 0xc) + 1;
            UNLOCK();
            plVar17 = param_1 + 0x3f;
            plVar18 = (longlong *)*plVar17;
            if (plVar18 != (longlong *)0x0) goto LAB_1429007c4;
            *plVar17 = (longlong)plVar23;
          }
LAB_1429007d8:
          LOCK();
          plVar18 = plVar23 + 1;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)*plVar18 == 0) {
            (**(code **)*plVar23)(plVar23);
            LOCK();
            piVar1 = (int *)((longlong)plVar23 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar23 + 0x10))(plVar23);
            }
          }
        }
        if (param_3 != 0) {
          FUN_14627ef0a(DAT_14c98e618,param_4);
        }
        plVar23 = (longlong *)param_1[2];
        uVar28 = (undefined4)CONCAT71((int7)((ulonglong)plVar17 >> 8),1);
        if (plVar23 == (longlong *)0x0) {
LAB_142900818:
          lVar15 = 0;
          plVar23 = (longlong *)0x0;
        }
        else {
          iVar14 = (int)plVar23[1];
          do {
            if (iVar14 == 0) goto LAB_142900818;
            LOCK();
            iVar11 = (int)plVar23[1];
            bVar26 = iVar14 == iVar11;
            if (bVar26) {
              *(int *)(plVar23 + 1) = iVar14 + 1;
              iVar11 = iVar14;
            }
            iVar14 = iVar11;
            UNLOCK();
          } while (!bVar26);
          lVar15 = param_1[1];
          LOCK();
          *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
          UNLOCK();
          LOCK();
          plVar17 = plVar23 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 == 0) {
            (**(code **)*plVar23)(plVar23);
            LOCK();
            piVar1 = (int *)((longlong)plVar23 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar23 + 0x10))(plVar23);
            }
          }
          uVar28 = 0;
        }
        lVar21 = FUN_14001cc68(0x58,0x10);
        local_590 = lVar15 + 0x1e0;
        if (lVar15 == 0) {
          local_590 = 0;
        }
        uVar13 = *(undefined1 *)((longlong)param_1 + 0x27a);
        if ((char)uVar28 == '\0') {
          LOCK();
          *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
          UNLOCK();
        }
        local_5a0 = lVar21;
        local_594 = uVar28;
        local_588 = plVar23;
        FUN_1469a53be(lVar21,&local_590,&local_4d8,uVar13);
        plVar17 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar17[1] = (longlong)&DAT_100000001;
        ppuVar22 = &PTR_FUN_149efcec0;
        *plVar17 = (longlong)&PTR_FUN_149efcec0;
        plVar17[2] = lVar21;
        if ((lVar21 == 0) ||
           (((*(longlong *)(lVar21 + 8) != 0 &&
             (ppuVar22 = *(undefined ***)(lVar21 + 0x10), ppuVar22 != (undefined **)0x0)) &&
            (0 < *(int *)(ppuVar22 + 1))))) {
          local_598 = (undefined4)CONCAT71((int7)((ulonglong)ppuVar22 >> 8),1);
          if (plVar17 != (longlong *)0x0) goto LAB_142900991;
        }
        else if (plVar17 == (longlong *)0x0) {
          *(longlong *)(lVar21 + 8) = lVar21;
          plVar18 = *(longlong **)(lVar21 + 0x10);
          if (plVar18 != (longlong *)0x0) {
LAB_142900954:
            LOCK();
            piVar1 = (int *)((longlong)plVar18 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              ppuVar22 = (undefined **)(**(code **)(*plVar18 + 0x10))();
            }
            *(longlong **)(lVar21 + 0x10) = plVar17;
            lVar21 = local_5a0;
            if (plVar17 != (longlong *)0x0) goto LAB_142900972;
          }
          local_598 = (undefined4)CONCAT71((int7)((ulonglong)ppuVar22 >> 8),1);
        }
        else {
          LOCK();
          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
          UNLOCK();
          *(longlong *)(lVar21 + 8) = lVar21;
          if (*(longlong **)(lVar21 + 0x10) != plVar17) {
            LOCK();
            *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
            UNLOCK();
            plVar18 = *(longlong **)(lVar21 + 0x10);
            if (plVar18 != (longlong *)0x0) goto LAB_142900954;
            *(longlong **)(lVar21 + 0x10) = plVar17;
            lVar21 = local_5a0;
          }
LAB_142900972:
          LOCK();
          plVar18 = plVar17 + 1;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)*plVar18 == 0) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
            }
          }
LAB_142900991:
          LOCK();
          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
          UNLOCK();
          local_598 = 0;
        }
        plVar18 = (longlong *)param_1[0x43];
        param_1[0x42] = lVar21;
        param_1[0x43] = (longlong)plVar17;
        plVar19 = plVar17;
        if (plVar18 != (longlong *)0x0) {
          LOCK();
          plVar19 = plVar18 + 1;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)*plVar19 == 0) {
            (**(code **)*plVar18)(plVar18);
            LOCK();
            piVar1 = (int *)((longlong)plVar18 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
            }
          }
          plVar19 = (longlong *)param_1[0x43];
        }
        uVar28 = local_598;
        plVar18 = (longlong *)param_1[0x41];
        param_1[0x40] = param_1[0x42];
        if (plVar18 != plVar19) {
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar19 + 0xc) = *(int *)((longlong)plVar19 + 0xc) + 1;
            UNLOCK();
            plVar18 = (longlong *)param_1[0x41];
          }
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar18 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar18 + 0x10))();
            }
          }
          param_1[0x41] = (longlong)plVar19;
        }
        FUN_146a6cc12(*(undefined8 *)(param_1[0x5c] + 8),&local_4d8);
        lVar15 = local_5a0;
        plVar18 = DAT_14c98e618;
        if (param_3 != 0) {
          local_498 = local_4d8;
          plStack_490 = local_4d0;
          if (local_4d0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_4d0 + 1) = (int)local_4d0[1] + 1;
            UNLOCK();
          }
          FUN_1410a3d58(plVar18,param_4,&local_498,2);
          plVar18 = plStack_490;
          if (plStack_490 != (longlong *)0x0) {
            LOCK();
            plVar19 = plStack_490 + 1;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)*plVar19 == 0) {
              (**(code **)*plStack_490)(plStack_490);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
              }
            }
          }
        }
        if ((char)uVar28 == '\0') {
          LOCK();
          *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
          UNLOCK();
        }
        uVar8 = DAT_14c98ef68;
        lVar21 = (longlong)(int)DAT_14c98ef68;
        DAT_14c98ef68 = DAT_14c98ef68 + 1;
        if (DAT_14c98ef6c < DAT_14c98ef68) {
          FUN_146a7fb76(uVar8);
        }
        lVar7 = DAT_14c98ef60;
        *(longlong *)(DAT_14c98ef60 + lVar21 * 0x10) = lVar15;
        *(longlong **)(lVar7 + 8 + lVar21 * 0x10) = plVar17;
        if ((char)uVar28 == '\0') {
          LOCK();
          plVar18 = plVar17 + 1;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)*plVar18 == 0) {
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
        cVar12 = (char)local_594;
joined_r0x000142900b15:
        if (cVar12 == '\0') {
          LOCK();
          plVar17 = plVar23 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 == 0) {
            (**(code **)*plVar23)(plVar23);
            LOCK();
            piVar1 = (int *)((longlong)plVar23 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              lVar15 = *plVar23;
              goto LAB_1428ff915;
            }
          }
        }
      }
LAB_1428ff918:
      plVar17 = local_4d0;
      if (local_4d0 != (longlong *)0x0) {
        LOCK();
        plVar23 = local_4d0 + 1;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)*plVar23 == 0) {
          (**(code **)*local_4d0)(local_4d0);
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
    FUN_1447fa2ac(local_b0,uStack_a8 & 0xffffffff);
    if (local_b0 != 0) {
      FUN_1400020a8();
    }
    plVar17 = plStack_b8;
    if (plStack_b8 != (longlong *)0x0) {
      LOCK();
      plVar23 = plStack_b8 + 1;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)*plVar23 == 0) {
        (**(code **)*plStack_b8)(plStack_b8);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
    puVar24 = local_1f8;
    if (local_d8 != (undefined1 *)0x0) {
      puVar24 = local_d8;
    }
    FUN_1447157bd(puVar24,local_d0 & 0xffffffff);
    if (local_d8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140163244(param_1,0xc);
LAB_1428ff9b8:
  if ((local_a0 ^ (ulonglong)auStack_5f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142900b4e FUN_142900b4e body=972 status=ok
// SIG undefined FUN_142900b4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142900b4e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_149f10d00;
  param_1[0x3c] = &PTR_LAB_149f10f50;
  if (((param_1[0x40] != 0) && (plVar7 = (longlong *)param_1[0x41], plVar7 != (longlong *)0x0)) &&
     (0 < (int)plVar7[1])) {
    iVar6 = (int)plVar7[1];
    do {
      if (iVar6 == 0) {
        (**(code **)(_DAT_00000000 + 0x38))(0);
        goto LAB_142900be1;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar8 = iVar6 == iVar4;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar8);
    (**(code **)(*(longlong *)param_1[0x40] + 0x38))();
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
LAB_142900be1:
    if (((*(char *)((longlong)param_1 + 0x279) == '\0') &&
        (*(undefined1 *)((longlong)param_1 + 0x279) = 1, *(int *)(param_1 + 0x4b) != 0)) &&
       (((longlong *)param_1[0x4a] != (longlong *)0x0 &&
        (cVar5 = (**(code **)(*(longlong *)param_1[0x4a] + 0x30))(), cVar5 != '\0')))) {
      if (*(int *)(param_1 + 0x4b) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)param_1[0x4a];
      }
      (**(code **)(*plVar7 + 0x58))(plVar7,0);
    }
  }
  plVar7 = (longlong *)param_1[0x41];
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  param_1[0x42] = 0;
  plVar7 = (longlong *)param_1[0x43];
  if (plVar7 != (longlong *)0x0) {
    param_1[0x43] = 0;
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
  plVar7 = (longlong *)param_1[0x3f];
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  param_1[0x51] = 0;
  plVar7 = (longlong *)param_1[0x52];
  if (plVar7 != (longlong *)0x0) {
    param_1[0x52] = 0;
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
  *(undefined2 *)(param_1 + 0x53) = 0x100;
  FUN_146a74fbf(param_1[0x5c],*(undefined4 *)(param_1 + 0x5d));
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  plVar7 = (longlong *)param_1[0x52];
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
  if (*(char *)((longlong)param_1 + 0x27c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x27c) = 0;
  }
  plVar7 = param_1 + 0x4d;
  if (*(int *)(param_1 + 0x4e) == 0) {
LAB_142900d72:
    if (*plVar7 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar7;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar7,0,0,0x10);
      *(undefined4 *)(param_1 + 0x4e) = 0;
      goto LAB_142900d72;
    }
  }
  plVar7 = param_1 + 0x4a;
  if (*(int *)(param_1 + 0x4b) == 0) {
LAB_142900dba:
    if (*plVar7 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar7;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar7,0,0,0x10);
      *(undefined4 *)(param_1 + 0x4b) = 0;
      goto LAB_142900dba;
    }
  }
  plVar7 = param_1 + 0x48;
  if (*(int *)(param_1 + 0x49) != 0) {
    puVar3 = (undefined8 *)*plVar7;
    if (puVar3 == (undefined8 *)0x0) goto LAB_142900e0e;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar7,0,0,0x10);
    *(undefined4 *)(param_1 + 0x49) = 0;
  }
  if (*plVar7 != 0) {
    FUN_1400020a8();
  }
LAB_142900e0e:
  plVar7 = (longlong *)param_1[0x47];
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
  plVar7 = (longlong *)param_1[0x45];
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
  plVar7 = (longlong *)param_1[0x43];
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
  plVar7 = (longlong *)param_1[0x41];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = (longlong *)param_1[0x3f];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 142900f1a FUN_142900f1a body=68 status=ok
// SIG undefined FUN_142900f1a(void)

void FUN_142900f1a(void)

{
  if (DAT_14c98ef90 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c98ef70,DAT_14c98ef78);
  if (DAT_14c98ef70 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142900f5e FUN_142900f5e body=68 status=ok
// SIG undefined FUN_142900f5e(void)

void FUN_142900f5e(void)

{
  if (DAT_14c98efd0 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c98efb0,DAT_14c98efb8);
  if (DAT_14c98efb0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142900fa2 FUN_142900fa2 body=68 status=ok
// SIG undefined FUN_142900fa2(void)

void FUN_142900fa2(void)

{
  if (DAT_14c98f010 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c98eff0,DAT_14c98eff8);
  if (DAT_14c98eff0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142900fe6 FUN_142900fe6 body=68 status=ok
// SIG undefined FUN_142900fe6(void)

void FUN_142900fe6(void)

{
  if (DAT_14c98f050 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c98f030,DAT_14c98f038);
  if (DAT_14c98f030 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14290102a FUN_14290102a body=59 status=ok
// SIG undefined FUN_14290102a(void)

longlong FUN_14290102a(longlong param_1,int param_2)

{
  FUN_146a74fbf(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142901066 FUN_142901066 body=59 status=ok
// SIG undefined FUN_142901066(void)

longlong FUN_142901066(longlong param_1,int param_2)

{
  FUN_1404578a2(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429010ae FUN_1429010ae body=98 status=ok
// SIG undefined FUN_1429010ae(void)

undefined1 * FUN_1429010ae(longlong param_1,undefined1 *param_2)

{
  float fVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  float fVar5;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 8);
      }
      fVar5 = (float)(**(code **)(*plVar4 + 0x58))();
      fVar1 = **(float **)(param_1 + 0x18);
      if ((fVar1 != fVar5) || (NAN(fVar1) || NAN(fVar5))) {
        **(float **)(param_1 + 0x18) = fVar5;
        uVar3 = 1;
        goto LAB_1429010f4;
      }
    }
  }
  uVar3 = 0;
LAB_1429010f4:
  *param_2 = 0;
  param_2[1] = uVar3;
  return param_2;
}



// FUNCTION 142901110 FUN_142901110 body=29 status=ok
// SIG undefined FUN_142901110(void)

undefined8 FUN_142901110(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142901142 FUN_142901142 body=85 status=ok
// SIG undefined FUN_142901142(void)

void FUN_142901142(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ef0aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f11f80;
  return;
}



// FUNCTION 142901198 FUN_142901198 body=85 status=ok
// SIG undefined FUN_142901198(void)

void FUN_142901198(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ef0aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f11f80;
  return;
}



// FUNCTION 1429011ee FUN_1429011ee body=118 status=ok
// SIG undefined FUN_1429011ee(void)

void FUN_1429011ee(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149ef0aa0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f11f80;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142901255. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14290126c FUN_14290126c body=19 status=ok
// SIG undefined FUN_14290126c(void)

undefined1 FUN_14290126c(undefined8 param_1,undefined8 param_2)

{
  FUN_145ab4d7a(param_2);
  return 1;
}



// FUNCTION 142901280 FUN_142901280 body=29 status=ok
// SIG undefined FUN_142901280(void)

undefined8 FUN_142901280(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429012b2 FUN_1429012b2 body=85 status=ok
// SIG undefined FUN_1429012b2(void)

void FUN_1429012b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ef0aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f11ff0;
  return;
}



// FUNCTION 142901308 FUN_142901308 body=85 status=ok
// SIG undefined FUN_142901308(void)

void FUN_142901308(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ef0aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f11ff0;
  return;
}



// FUNCTION 14290135e FUN_14290135e body=118 status=ok
// SIG undefined FUN_14290135e(void)

void FUN_14290135e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149ef0aa0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f11ff0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001429013c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1429013d4 FUN_1429013d4 body=91 status=ok
// SIG undefined FUN_1429013d4(void)

void FUN_1429013d4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145ab4b0e(param_2,local_40);
  local_30 = 1;
  local_28 = 0;
  uStack_20 = 0;
  FUN_145ab4ba4(param_2,local_40);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142901430 FUN_142901430 body=93 status=ok
// SIG undefined FUN_142901430(void)

undefined8 FUN_142901430(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145ab4b0e(param_2,local_40);
  local_30 = 1;
  local_28 = 0;
  uStack_20 = 0;
  FUN_145ab4ba4(param_2,local_40);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290148e FUN_14290148e body=29 status=ok
// SIG undefined FUN_14290148e(void)

undefined8 FUN_14290148e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429014c0 FUN_1429014c0 body=85 status=ok
// SIG undefined FUN_1429014c0(void)

void FUN_1429014c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ef0aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12060;
  return;
}



// FUNCTION 142901516 FUN_142901516 body=85 status=ok
// SIG undefined FUN_142901516(void)

void FUN_142901516(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ef0aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12060;
  return;
}



// FUNCTION 14290156c FUN_14290156c body=118 status=ok
// SIG undefined FUN_14290156c(void)

void FUN_14290156c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149ef0aa0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f12060;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001429015d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1429015ea FUN_1429015ea body=19 status=ok
// SIG undefined FUN_1429015ea(void)

undefined1 FUN_1429015ea(undefined8 param_1,undefined8 param_2)

{
  FUN_146a5ec6a(param_2);
  return 1;
}



// FUNCTION 1429015fe FUN_1429015fe body=29 status=ok
// SIG undefined FUN_1429015fe(void)

undefined8 FUN_1429015fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142901630 FUN_142901630 body=85 status=ok
// SIG undefined FUN_142901630(void)

void FUN_142901630(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ef0aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f120d0;
  return;
}



// FUNCTION 142901686 FUN_142901686 body=85 status=ok
// SIG undefined FUN_142901686(void)

void FUN_142901686(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ef0aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f120d0;
  return;
}



// FUNCTION 1429016dc FUN_1429016dc body=118 status=ok
// SIG undefined FUN_1429016dc(void)

void FUN_1429016dc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149ef0aa0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f120d0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142901743. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14290175a FUN_14290175a body=19 status=ok
// SIG undefined FUN_14290175a(void)

undefined1 FUN_14290175a(undefined8 param_1,undefined8 param_2)

{
  FUN_145ab4c3e(param_2);
  return 1;
}



// FUNCTION 14290176e FUN_14290176e body=29 status=ok
// SIG undefined FUN_14290176e(void)

undefined8 FUN_14290176e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429017a0 FUN_1429017a0 body=85 status=ok
// SIG undefined FUN_1429017a0(void)

void FUN_1429017a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ef0aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12140;
  return;
}



// FUNCTION 1429017f6 FUN_1429017f6 body=85 status=ok
// SIG undefined FUN_1429017f6(void)

void FUN_1429017f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ef0aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12140;
  return;
}



// FUNCTION 14290184c FUN_14290184c body=118 status=ok
// SIG undefined FUN_14290184c(void)

void FUN_14290184c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149ef0aa0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f12140;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001429018b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1429018c2 FUN_1429018c2 body=29 status=ok
// SIG undefined FUN_1429018c2(void)

void FUN_1429018c2(undefined8 param_1,undefined8 param_2)

{
  FUN_145ab4c3e(param_2);
  FUN_145ab4d7a(param_2);
  return;
}



// FUNCTION 1429018e0 FUN_1429018e0 body=32 status=ok
// SIG undefined FUN_1429018e0(void)

undefined1 FUN_1429018e0(undefined8 param_1,undefined8 param_2)

{
  FUN_145ab4c3e(param_2);
  FUN_145ab4d7a(param_2);
  return 1;
}



// FUNCTION 142901900 FUN_142901900 body=29 status=ok
// SIG undefined FUN_142901900(void)

undefined8 FUN_142901900(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142901932 FUN_142901932 body=93 status=ok
// SIG undefined FUN_142901932(void)

void FUN_142901932(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f134c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12400;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142901990 FUN_142901990 body=93 status=ok
// SIG undefined FUN_142901990(void)

void FUN_142901990(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f134c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12400;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1429019ee FUN_1429019ee body=126 status=ok
// SIG undefined FUN_1429019ee(void)

void FUN_1429019ee(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f134c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f12400;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142901a5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142901a6c FUN_142901a6c body=29 status=ok
// SIG undefined FUN_142901a6c(void)

undefined8 FUN_142901a6c(longlong param_1,undefined8 param_2)

{
  FUN_1409cf936(param_2,*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 142901a8a FUN_142901a8a body=80 status=ok
// SIG undefined FUN_142901a8a(void)

undefined8 FUN_142901a8a(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1409cf936(local_20,*(undefined8 *)(param_1 + 0x18));
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142901adc FUN_142901adc body=29 status=ok
// SIG undefined FUN_142901adc(void)

undefined8 FUN_142901adc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142901b0e FUN_142901b0e body=93 status=ok
// SIG undefined FUN_142901b0e(void)

void FUN_142901b0e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ed0600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12470;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142901b6c FUN_142901b6c body=93 status=ok
// SIG undefined FUN_142901b6c(void)

void FUN_142901b6c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ed0600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12470;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142901bca FUN_142901bca body=126 status=ok
// SIG undefined FUN_142901bca(void)

void FUN_142901bca(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149ed0600;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f12470;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142901c39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142901c48 FUN_142901c48 body=84 status=ok
// SIG undefined FUN_142901c48(void)

bool FUN_142901c48(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  cVar3 = (**(code **)(*plVar1 + 0x198))(plVar1);
  bVar4 = true;
  if ((cVar3 == '\0') && (lVar2 = plVar1[0x3f], *(char *)(lVar2 + 0x9b8) == '\0')) {
    if ((*(longlong *)(lVar2 + 0x9c0) == 0) || (*(longlong *)(lVar2 + 0x9c8) == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = 0 < *(int *)(*(longlong *)(lVar2 + 0x9c8) + 8);
    }
  }
  return bVar4;
}



// FUNCTION 142901c9c FUN_142901c9c body=74 status=ok
// SIG undefined FUN_142901c9c(void)

undefined8 FUN_142901c9c(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x198))(*(longlong **)(param_1 + 0x18));
  return 1;
}



// FUNCTION 142901ce6 FUN_142901ce6 body=29 status=ok
// SIG undefined FUN_142901ce6(void)

undefined8 FUN_142901ce6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142901d18 FUN_142901d18 body=85 status=ok
// SIG undefined FUN_142901d18(void)

void FUN_142901d18(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ef0aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12ab0;
  return;
}



// FUNCTION 142901d6e FUN_142901d6e body=85 status=ok
// SIG undefined FUN_142901d6e(void)

void FUN_142901d6e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ef0aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f12ab0;
  return;
}



// FUNCTION 142901dc4 FUN_142901dc4 body=118 status=ok
// SIG undefined FUN_142901dc4(void)

void FUN_142901dc4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149ef0aa0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f12ab0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142901e2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142901e42 FUN_142901e42 body=19 status=ok
// SIG undefined FUN_142901e42(void)

undefined1 FUN_142901e42(undefined8 param_1,undefined8 param_2)

{
  FUN_146a68ee6(param_2);
  return 1;
}



// FUNCTION 142901e65 FUN_142901e65 body=303 status=ok
// SIG undefined FUN_142901e65(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142901e65(void)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_34;
  char *local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_149f0f6b0 + lVar2),L"/Script/Slate",
                  *(undefined8 *)(&UNK_149f0f6b8 + lVar2),
                  *(undefined8 *)((longlong)&PTR_FUN_149f0f6c0 + lVar2));
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x70);
  local_30 = (char *)((ulonglong)local_30 & 0xffffffff00000000);
  local_48 = 0;
  FUN_14078dbce(&DAT_14c98eea8,L"Slate.DefaultTextFlowDirection",&local_30,
                L"0: Auto (default), 1: LeftToRight, 2: RightToLeft.");
  atexit(FUN_1428fe9e0);
  local_30 = (char *)0x8000000149ec9eb0;
  local_34 = 5;
  local_28 = FUN_14577453c();
  local_24 = 1;
  FUN_14628092a(&local_30);
  FUN_146280e72();
  FUN_146280f22();
  FUN_146280fd2();
  local_30 = "SButton";
  local_28 = 7;
  local_24 = 0;
  uVar1 = FUN_14001a6c0(&local_30,1);
  DAT_14c98ef58 = (ulonglong)uVar1;
  FUN_1414627f0();
  FUN_146035534();
  DAT_14c98ef60 = 0;
  _DAT_14c98ef68 = 0;
  atexit(FUN_1428ff2ce);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142901f98 FUN_142901f98 body=69 status=ok
// SIG undefined FUN_142901f98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142901f98(void)

{
  _DAT_14c98f0c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142901fda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98f0d0,1);
  return;
}



// FUNCTION 142901fde FUN_142901fde body=338 status=ok
// SIG undefined FUN_142901fde(void)

void FUN_142901fde(undefined4 *param_1,undefined8 param_2,float param_3,char param_4,char param_5)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  float local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = param_2;
  FUN_1402df5c4(&local_50);
  if ((local_50 != 0) && ((byte)(*(char *)(local_50 + 0x42) - 2U) < 3)) {
    local_78 = param_3;
    (**(code **)(*(longlong *)(DAT_14c98e618 + 0x148) + 0x98))
              (DAT_14c98e618 + 0x148,param_2,DAT_14c9680a8,*param_1);
    goto LAB_1429020e1;
  }
  if (param_4 == '\0') {
    uVar3 = *param_1;
    lVar2 = *(longlong *)(DAT_14c98e618 + 0x148);
    if ((param_3 != 0.0) || (NAN(param_3))) goto LAB_1429020d3;
  }
  else {
    uVar3 = *param_1;
    lVar2 = *(longlong *)(DAT_14c98e618 + 0x148);
    if (param_5 != '\0') {
LAB_1429020d3:
      local_78 = (float)((uint)local_78._1_3_ << 8);
      (**(code **)(lVar2 + 0xa8))(DAT_14c98e618 + 0x148,param_2,DAT_14c9680a8,uVar3);
      goto LAB_1429020e1;
    }
  }
  local_78 = (float)((uint)local_78._1_3_ << 8);
  (**(code **)(lVar2 + 0xb8))(DAT_14c98e618 + 0x148,param_2);
LAB_1429020e1:
  if (local_48 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_48 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290214a FUN_14290214a body=134 status=ok
// SIG undefined FUN_14290214a(void)

void FUN_14290214a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) {
        return;
      }
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
    lVar3 = *(longlong *)(param_1 + 0x18);
    if (lVar3 != 0) {
      if (lVar3 != DAT_14c98dec8) {
        FUN_14066af28(lVar3,*(undefined8 *)(param_1 + 8));
      }
      plVar4 = *(longlong **)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
    }
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001429021c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1429021d8 FUN_1429021d8 body=69 status=ok
// SIG undefined FUN_1429021d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429021d8(void)

{
  _DAT_14c98f0f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014290221a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98f0f8,1);
  return;
}



// FUNCTION 14290221d FUN_14290221d body=69 status=ok
// SIG undefined FUN_14290221d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14290221d(void)

{
  _DAT_14c98f100 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014290225f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98f108,1);
  return;
}



// FUNCTION 142902262 FUN_142902262 body=69 status=ok
// SIG undefined FUN_142902262(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142902262(void)

{
  _DAT_14c98f110 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429022a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98f118,1);
  return;
}



// FUNCTION 1429022a7 FUN_1429022a7 body=69 status=ok
// SIG undefined FUN_1429022a7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429022a7(void)

{
  _DAT_14c98f120 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429022e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98f128,1);
  return;
}



// FUNCTION 1429022ec FUN_1429022ec body=238 status=ok
// SIG undefined FUN_1429022ec(void)

void FUN_1429022ec(undefined8 *param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = 1.0 / param_2;
  if (*(char *)*param_1 == '\x01') {
    if ((param_2 < 1.0 & *(byte *)param_1[1]) != 0) {
LAB_14290237e:
      *(uint *)(param_1[2] + 4) =
           ~-(uint)(param_2 < 1.0) & (uint)(*(float *)(param_1[3] + 4) / fVar2) |
           (uint)(fVar2 * *(float *)(param_1[3] + 4)) & -(uint)(param_2 < 1.0);
      *(float *)param_1[2] = ((float *)param_1[2])[1] * param_2;
      pfVar1 = (float *)param_1[4];
      fVar3 = fVar2 * *pfVar1;
      if (pfVar1[1] <= fVar2 * *pfVar1) {
        fVar3 = pfVar1[1];
      }
      pfVar1[1] = fVar3;
      *(float *)param_1[4] = param_2 * ((float *)param_1[4])[1];
      return;
    }
  }
  else if (param_2 < 1.0 || *(byte *)param_1[1] != 0) goto LAB_14290237e;
  *(uint *)param_1[2] =
       ~-(uint)(param_2 < 1.0) & (uint)(*(float *)param_1[3] * param_2) |
       (uint)(*(float *)param_1[3] / param_2) & -(uint)(param_2 < 1.0);
  ((float *)param_1[2])[1] = *(float *)param_1[2] * fVar2;
  pfVar1 = (float *)param_1[4];
  fVar3 = param_2 * pfVar1[1];
  if (*pfVar1 <= param_2 * pfVar1[1]) {
    fVar3 = *pfVar1;
  }
  *pfVar1 = fVar3;
  ((float *)param_1[4])[1] = fVar2 * *(float *)param_1[4];
  return;
}



// FUNCTION 1429023e6 FUN_1429023e6 body=137 status=ok
// SIG undefined FUN_1429023e6(void)

void FUN_1429023e6(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 8) = 0;
  FUN_146abebd0(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146abecca(param_1 + 0x18,iVar1);
  }
  lVar3 = (longlong)param_3;
  memmove((void *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8 + 8),
          (void *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8),
          (ulonglong)(uint)(iVar1 - param_3) << 3);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8) = uVar2;
  FUN_140163244(*(undefined8 *)(param_1 + 8),8);
  return;
}



// FUNCTION 142902470 FUN_142902470 body=528 status=ok
// SIG undefined FUN_142902470(void)

int FUN_142902470(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,undefined8 param_7,char param_8)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  int local_200;
  undefined8 local_1f8;
  undefined1 local_1f0;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  longlong lStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 *local_198;
  undefined8 local_190;
  undefined1 local_188;
  undefined1 local_180 [288];
  undefined1 *local_60;
  ulonglong local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_188 = DAT_14c96b238;
  local_60 = (undefined1 *)0x0;
  local_58 = 0x400000000;
  local_50 = 0;
  local_1e0 = 0;
  local_198 = (undefined1 *)0x0;
  local_190 = 0x1000000000;
  uVar3 = FUN_1417215b6(param_1,param_3);
  if (param_8 != '\0') {
    local_1e0 = CONCAT71((int7)((ulonglong)uVar3 >> 8),*(undefined1 *)(param_1 + 0x3a));
  }
  local_1d8 = *param_2;
  uStack_1d4 = param_2[1];
  uStack_1d0 = param_2[2];
  uStack_1cc = param_2[3];
  local_1c8 = *(undefined8 *)(param_2 + 4);
  local_1b8 = *(undefined8 *)(param_2 + 8);
  uStack_1b0 = *(undefined8 *)(param_2 + 10);
  uVar6 = local_58 & 0xffffffff;
  lStack_1c0 = param_1;
  if (0 < (int)local_58) {
    lVar9 = 0;
    lVar8 = 0;
    iVar7 = param_6;
    do {
      puVar5 = local_60;
      if (local_60 == (undefined1 *)0x0) {
        puVar5 = local_180;
      }
      cVar1 = FUN_14022ea56(param_1,param_4,puVar5 + lVar9);
      if (cVar1 == '\0') {
        puVar4 = local_198;
        if (local_198 == (undefined1 *)0x0) {
          puVar4 = local_1a8;
        }
        if (puVar4[lVar8] != '\0') {
          iVar7 = param_6 + 1;
        }
        local_1f0 = (undefined1)local_1e0;
        local_1f8 = param_7;
        local_208 = param_5;
        local_200 = iVar7;
        iVar2 = FUN_14016eaf2(*(undefined8 *)(puVar5 + lVar9 + 0x38),&local_1d8,puVar5 + lVar9,
                              param_4);
        if (param_6 < iVar2) {
          param_6 = iVar2;
        }
      }
      lVar8 = lVar8 + 1;
      uVar6 = (ulonglong)(int)local_58;
      lVar9 = lVar9 + 0x48;
    } while (lVar8 < (longlong)uVar6);
  }
  if (local_198 != (undefined1 *)0x0) {
    FUN_1400020a8();
    uVar6 = local_58 & 0xffffffff;
  }
  puVar5 = local_180;
  if (local_60 != (undefined1 *)0x0) {
    puVar5 = local_60;
  }
  FUN_1447157bd(puVar5,uVar6);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return param_6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142902706 FUN_142902706 body=170 status=ok
// SIG undefined FUN_142902706(void)

void FUN_142902706(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f14e80;
  FUN_146ac0ab8(param_1[0x49],*(undefined4 *)(param_1 + 0x4a));
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_146ac0ab8(param_1[0x47],*(undefined4 *)(param_1 + 0x48));
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  FUN_146aa7671(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 1429027b0 FUN_1429027b0 body=1176 status=ok
// SIG undefined FUN_1429027b0(void)

void FUN_1429027b0(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  iVar6 = *(int *)(param_2 + 0x54) + *(int *)(param_2 + 0x50);
  iVar13 = *(int *)(param_1 + 0x210);
  if (iVar13 <= iVar6) {
    iVar6 = iVar6 + 1;
    *(int *)(param_1 + 0x210) = iVar6;
    uVar7 = iVar6 - iVar13;
    if ((uint)(*(int *)(param_1 + 0x214) - iVar13) < uVar7) {
      FUN_14475e4ac((longlong *)(param_1 + 0x208));
    }
    memset((void *)((longlong)iVar13 * 4 + *(longlong *)(param_1 + 0x208)),0,
           (longlong)(int)uVar7 << 2);
  }
  iVar6 = *(int *)(param_2 + 0x5c) + *(int *)(param_2 + 0x58);
  iVar13 = *(int *)(param_1 + 0x220);
  if (iVar13 <= iVar6) {
    iVar6 = iVar6 + 1;
    *(int *)(param_1 + 0x220) = iVar6;
    uVar7 = iVar6 - iVar13;
    if ((uint)(*(int *)(param_1 + 0x224) - iVar13) < uVar7) {
      FUN_14475e4ac((longlong *)(param_1 + 0x218));
    }
    memset((void *)((longlong)iVar13 * 4 + *(longlong *)(param_1 + 0x218)),0,
           (longlong)(int)uVar7 << 2);
  }
  if (param_3 != '\0') {
    iVar13 = *(int *)(param_1 + 0x200);
    if (0 < (longlong)iVar13) {
      if (iVar13 != 1) {
        lVar9 = *(longlong *)(param_1 + 0x1f8);
        memset(local_338,0,0x2f0);
        local_340 = lVar9 + (longlong)iVar13 * 8 + -8;
        local_348 = lVar9;
        fVar23 = logf((float)iVar13);
        local_338[0] = (int)(longlong)(fVar23 + fVar23);
        plVar3 = &local_348;
        do {
          plVar4 = (longlong *)*plVar3;
          plVar5 = (longlong *)plVar3[1];
          iVar13 = (int)plVar3[2];
          iVar6 = (int)((ulonglong)((longlong)plVar5 - (longlong)plVar4) >> 3);
          uVar17 = (ulonglong)(iVar6 + 1);
          plVar11 = plVar5;
          plVar20 = plVar4;
          if (iVar13 != 0) {
LAB_142902912:
            plVar8 = plVar4;
            if (8 < (int)(uint)uVar17) {
              uVar7 = (uint)uVar17 >> 1;
              lVar9 = plVar8[uVar7];
              plVar8[uVar7] = *plVar8;
              *plVar8 = lVar9;
              plVar18 = plVar11 + 1;
              plVar4 = plVar8;
              do {
                plVar1 = plVar4 + 1;
                plVar12 = plVar4 + 1;
                do {
                  plVar21 = plVar12;
                  plVar4 = plVar1;
                  if (plVar11 < plVar4) break;
                  plVar1 = plVar4 + 1;
                  plVar12 = plVar21 + 1;
                } while (*(int *)(*plVar4 + 0x60) <= *(int *)(*plVar8 + 0x60));
                plVar1 = plVar18 + -2;
                do {
                  plVar12 = plVar18;
                  plVar19 = plVar1;
                  plVar18 = plVar12 + -1;
                  if (plVar18 <= plVar8) break;
                  plVar1 = plVar19 + -1;
                } while (*(int *)(*plVar8 + 0x60) <= *(int *)(*plVar18 + 0x60));
                if (plVar18 < plVar4) goto LAB_1429029a2;
                lVar9 = *plVar4;
                *plVar4 = *plVar18;
                *plVar18 = lVar9;
              } while( true );
            }
            if (plVar8 < plVar11) {
              do {
                plVar4 = plVar8;
                if (plVar8 + 1 <= plVar11) {
                  lVar9 = *plVar8;
                  plVar5 = plVar8 + 1;
                  do {
                    plVar20 = plVar5;
                    lVar2 = *plVar5;
                    if (*(int *)(*plVar5 + 0x60) <= *(int *)(lVar9 + 0x60)) {
                      plVar20 = plVar4;
                      lVar2 = lVar9;
                    }
                    lVar9 = lVar2;
                    plVar4 = plVar20;
                    plVar5 = plVar5 + 1;
                  } while (plVar5 <= plVar11);
                }
                lVar9 = *plVar4;
                *plVar4 = *plVar11;
                *plVar11 = lVar9;
                plVar11 = plVar11 + -1;
              } while (plVar8 < plVar11);
            }
            goto LAB_142902bce;
          }
LAB_142902a36:
          iVar13 = (int)uVar17;
          if (iVar13 != 0) {
            iVar6 = (iVar6 - (iVar6 + -1 >> 0x1f)) + -1 >> 1;
            iVar16 = iVar6;
joined_r0x000142902a5d:
            do {
              iVar15 = iVar6 * 2 + 1;
              if (iVar15 < iVar13) {
                iVar14 = iVar6 * 2 + 2;
                if ((iVar14 < iVar13) &&
                   (*(int *)(plVar4[iVar15] + 0x60) <= *(int *)(plVar4[iVar14] + 0x60))) {
                  iVar15 = iVar14;
                }
                lVar9 = plVar4[iVar6];
                if (*(int *)(lVar9 + 0x60) < *(int *)(plVar4[iVar15] + 0x60)) {
                  plVar4[iVar6] = plVar4[iVar15];
                  plVar4[iVar15] = lVar9;
                  iVar6 = iVar15;
                  goto joined_r0x000142902a5d;
                }
              }
              bVar22 = iVar16 != 0;
              iVar6 = iVar16 + -1;
              iVar16 = iVar6;
            } while (bVar22);
            if (1 < iVar13) {
              lVar9 = *plVar4;
              *plVar4 = plVar4[uVar17 - 1];
              plVar4[uVar17 - 1] = lVar9;
              if (iVar13 != 2) {
                do {
                  uVar10 = uVar17 - 1;
                  iVar13 = 0;
                  iVar16 = 1;
                  iVar6 = 0;
                  do {
                    iVar13 = iVar13 + 2;
                    iVar15 = iVar16;
                    if (((longlong)iVar13 < (longlong)uVar10) &&
                       (*(int *)(plVar4[iVar16] + 0x60) <= *(int *)(plVar4[iVar13] + 0x60))) {
                      iVar15 = iVar13;
                    }
                    lVar9 = plVar4[iVar6];
                    if (*(int *)(plVar4[iVar15] + 0x60) <= *(int *)(lVar9 + 0x60)) break;
                    plVar4[iVar6] = plVar4[iVar15];
                    plVar4[iVar15] = lVar9;
                    iVar13 = iVar15 * 2;
                    iVar16 = iVar15 * 2 + 1;
                    iVar6 = iVar15;
                  } while ((longlong)iVar16 < (longlong)uVar10);
                  lVar9 = *plVar4;
                  *plVar4 = plVar4[uVar17 - 2];
                  plVar4[uVar17 - 2] = lVar9;
                  uVar17 = uVar10;
                } while (2 < uVar10);
              }
            }
          }
LAB_142902bce:
          plVar3 = plVar3 + -3;
        } while (&local_348 <= plVar3);
      }
      lVar9 = *(longlong *)(**(longlong **)(param_1 + 0x1f8) + 8);
      if ((lVar9 != 0) && (*(longlong *)(lVar9 + 8) != 0)) {
        FUN_1469739e2();
      }
      FUN_140163244(*(undefined8 *)(param_1 + 0x1e8),8);
    }
  }
  FUN_140163244(param_1,1);
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1429029a2:
  lVar9 = *plVar8;
  *plVar8 = *plVar18;
  *plVar18 = lVar9;
  iVar13 = iVar13 + -1;
  plVar12 = plVar12 + -2;
  if ((longlong)plVar19 - (longlong)plVar20 < (longlong)plVar5 - (longlong)plVar21) {
    if (plVar4 < plVar11) {
      *plVar3 = (longlong)plVar4;
      plVar3[1] = (longlong)plVar11;
      *(int *)(plVar3 + 2) = iVar13;
      plVar3 = plVar3 + 3;
    }
    plVar4 = plVar8;
    plVar5 = plVar19;
    if (plVar18 <= plVar8 + 1) goto LAB_142902bce;
  }
  else {
    if (plVar8 + 1 < plVar18) {
      *plVar3 = (longlong)plVar8;
      plVar3[1] = (longlong)plVar12;
      *(int *)(plVar3 + 2) = iVar13;
      plVar3 = plVar3 + 3;
    }
    plVar8 = plVar21;
    plVar12 = plVar11;
    plVar5 = plVar11;
    if (plVar11 <= plVar4) goto LAB_142902bce;
  }
  iVar6 = (int)((ulonglong)((longlong)plVar5 - (longlong)plVar8) >> 3);
  uVar17 = (ulonglong)(iVar6 + 1);
  plVar11 = plVar12;
  plVar20 = plVar8;
  if (iVar13 == 0) goto LAB_142902a36;
  goto LAB_142902912;
}



// FUNCTION 142902c49 FUN_142902c49 body=69 status=ok
// SIG undefined FUN_142902c49(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142902c49(void)

{
  _DAT_14c98f148 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142902c8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98f150,1);
  return;
}



// FUNCTION 142902c8e FUN_142902c8e body=69 status=ok
// SIG undefined FUN_142902c8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142902c8e(void)

{
  _DAT_14c98f160 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142902cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98f168,1);
  return;
}



// FUNCTION 142902cd3 FUN_142902cd3 body=55 status=ok
// SIG undefined FUN_142902cd3(void)

void FUN_142902cd3(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98f178 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c98f178 = FUN_14171c317(FUN_146281774,uVar1,L"EStretchDirection");
  }
  return;
}



// FUNCTION 142902d0a FUN_142902d0a body=55 status=ok
// SIG undefined FUN_142902d0a(void)

void FUN_142902d0a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98f190 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c98f190 = FUN_14171c317(FUN_1462817a3,uVar1,L"EStretch");
  }
  return;
}



// FUNCTION 142902d5d FUN_142902d5d body=69 status=ok
// SIG undefined FUN_142902d5d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142902d5d(void)

{
  _DAT_14c98f1e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142902d9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98f1e8,1);
  return;
}



// FUNCTION 142902da2 FUN_142902da2 body=2115 status=ok
// SIG undefined FUN_142902da2(void)

void FUN_142902da2(longlong param_1,float *param_2,ulonglong *param_3,undefined1 param_4,
                  char param_5,float param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  float *pfVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  ulonglong local_148;
  longlong *local_140;
  ulonglong local_138;
  longlong *plStack_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_138 = *param_3;
  if (local_138 != 0) {
    plVar4 = (longlong *)param_3[1];
    plStack_130 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      FUN_146ac47de(&local_e8,&local_148,&local_138);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      FUN_146ac47de(&local_e8,&local_148);
      if (plVar4 != (longlong *)0x0) {
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
    }
  }
  local_118 = 0;
  local_110 = 0;
  local_138 = 0;
  plStack_130 = (longlong *)0x0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  FUN_14697e2c8(param_1,param_2,&local_e8);
  uVar5 = *param_3;
  if (uVar5 != 0) {
    plVar4 = (longlong *)param_3[1];
    local_148 = uVar5;
    if (plVar4 == (longlong *)0x0) {
      local_140 = (longlong *)0x0;
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
      local_140 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
    }
    uVar6 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    iVar7 = FUN_1469840b2(&local_138,uVar6 >> 0x10 ^ uVar6,&local_148);
    plVar1 = local_140;
    lVar9 = 0;
    if (iVar7 != -1) {
      lVar9 = (longlong)iVar7 * 0x60 + local_138;
    }
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_140 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (plVar4 == (longlong *)0x0) {
      if (lVar9 == 0) goto LAB_14290353d;
      pfVar10 = (float *)(lVar9 + 0x10);
    }
    else {
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
      pfVar10 = (float *)(lVar9 + 0x10);
      if (lVar9 == 0) {
        pfVar10 = (float *)0x0;
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
    if (pfVar10 != (float *)0x0) {
      if (param_5 == '\x03') {
        fVar12 = pfVar10[8] * (float)DAT_14c84635c + pfVar10[10] * DAT_14c84635c._4_4_ +
                 pfVar10[0xc] + *pfVar10 * pfVar10[8] + pfVar10[10] * pfVar10[1];
        fVar15 = (float)DAT_14c84635c * pfVar10[7] + pfVar10[9] * DAT_14c84635c._4_4_ + pfVar10[0xb]
                 + *pfVar10 * pfVar10[7] + pfVar10[1] * pfVar10[9];
        fVar13 = 1.0 / (param_2[7] * param_2[10] - param_2[9] * param_2[8]);
        if (*(int *)(param_1 + 0x318) == 1) {
          fVar14 = param_2[7] * fVar13;
          fVar13 = -param_2[8] * fVar13;
          fVar12 = (fVar15 * fVar13 + fVar12 * fVar14 +
                   (-param_2[0xb] * fVar13 - param_2[0xc] * fVar14)) - param_2[1];
        }
        else {
          fVar14 = -param_2[9] * fVar13;
          fVar13 = param_2[10] * fVar13;
          fVar12 = (fVar15 * fVar13 + fVar12 * fVar14 +
                   (-param_2[0xb] * fVar13 - param_2[0xc] * fVar14)) - *param_2;
        }
      }
      else if (param_5 == '\x02') {
        fVar12 = pfVar10[8] * (float)DAT_14c84635c + pfVar10[10] * DAT_14c84635c._4_4_ +
                 pfVar10[0xc];
        fVar15 = (float)DAT_14c84635c * pfVar10[7] + DAT_14c84635c._4_4_ * pfVar10[9] + pfVar10[0xb]
        ;
        fVar13 = 1.0 / (param_2[7] * param_2[10] - param_2[9] * param_2[8]);
        if (*(int *)(param_1 + 0x318) == 1) {
          fVar14 = param_2[7] * fVar13;
          fVar13 = -param_2[8] * fVar13;
          fVar12 = fVar15 * fVar13 + fVar12 * fVar14 +
                   (-param_2[0xb] * fVar13 - param_2[0xc] * fVar14) + pfVar10[1] * 0.5;
          pfVar10 = param_2 + 1;
        }
        else {
          fVar14 = -param_2[9] * fVar13;
          fVar13 = param_2[10] * fVar13;
          fVar12 = fVar15 * fVar13 + fVar12 * fVar14 +
                   (-param_2[0xb] * fVar13 - param_2[0xc] * fVar14) + *pfVar10 * 0.5;
          pfVar10 = param_2;
        }
        param_6 = *pfVar10 * 0.5;
      }
      else if (param_5 == '\x01') {
        fVar15 = 1.0 / (param_2[7] * param_2[10] - param_2[9] * param_2[8]);
        if (*(int *)(param_1 + 0x318) == 1) {
          fVar13 = param_2[7] * fVar15;
          fVar15 = -param_2[8] * fVar15;
          fVar12 = -param_2[0xb] * fVar15 - param_2[0xc] * fVar13;
        }
        else {
          fVar13 = -param_2[9] * fVar15;
          fVar15 = param_2[10] * fVar15;
          fVar12 = -param_2[0xb] * fVar15 - param_2[0xc] * fVar13;
        }
        fVar12 = ((float)DAT_14c84635c * pfVar10[7] + DAT_14c84635c._4_4_ * pfVar10[9] +
                 pfVar10[0xb]) * fVar15 +
                 (pfVar10[8] * (float)DAT_14c84635c + pfVar10[10] * DAT_14c84635c._4_4_ +
                 pfVar10[0xc]) * fVar13 + fVar12;
      }
      else {
        fVar15 = 1.0 / (param_2[7] * param_2[10] - param_2[9] * param_2[8]);
        bVar11 = *(int *)(param_1 + 0x318) == 1;
        if (bVar11) {
          fVar13 = param_2[7] * fVar15;
          fVar15 = -param_2[8] * fVar15;
          fVar12 = -param_2[0xb] * fVar15 - param_2[0xc] * fVar13;
        }
        else {
          fVar13 = -param_2[9] * fVar15;
          fVar15 = param_2[10] * fVar15;
          fVar12 = -param_2[0xb] * fVar15 - param_2[0xc] * fVar13;
        }
        fVar12 = ((float)DAT_14c84635c * pfVar10[7] + DAT_14c84635c._4_4_ * pfVar10[9] +
                 pfVar10[0xb]) * fVar15 +
                 (pfVar10[8] * (float)DAT_14c84635c + pfVar10[10] * DAT_14c84635c._4_4_ +
                 pfVar10[0xc]) * fVar13 + fVar12;
        fVar15 = (float)((ulonglong)*(undefined8 *)pfVar10 >> 0x20);
        pfVar8 = param_2 + 1;
        if (!bVar11) {
          fVar15 = (float)*(undefined8 *)pfVar10;
          pfVar8 = param_2;
        }
        if (param_6 <= fVar12) {
          if (fVar12 + fVar15 <= *pfVar8 - param_6) goto LAB_14290353d;
          fVar12 = (fVar12 + fVar15) - ((*pfVar8 - param_6) - param_6);
        }
      }
      fVar12 = fVar12 - param_6;
      if ((fVar12 != 0.0) || (NAN(fVar12))) {
        *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x1e0);
        local_158 = param_4;
        FUN_146a98e20(param_1,param_2,fVar12,1);
      }
    }
  }
LAB_14290353d:
  local_f0 = 0;
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  FUN_146983544(&local_138);
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_146984428(&local_e8);
  if ((local_90 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429035f4 FUN_1429035f4 body=426 status=ok
// SIG undefined FUN_1429035f4(void)

void FUN_1429035f4(longlong param_1,float param_2,float param_3,float param_4)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar4;
  
  if ((*(longlong **)(param_1 + 0x28) == (longlong *)0x0 || *(int *)(param_1 + 0x30) == 0) ||
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))(), cVar2 == '\0')) {
    iVar3 = *(int *)(param_1 + 0x20);
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)(param_1 + 0x28);
    }
    iVar3 = (**(code **)(*plVar4 + 0x58))();
    *(int *)(param_1 + 0x20) = iVar3;
  }
  if (iVar3 != 1) {
    iVar3 = *(int *)(param_1 + 0x70);
    plVar4 = *(longlong **)(param_1 + 0x68);
    if (plVar4 != (longlong *)0x0 && iVar3 != 0) {
      (**(code **)(*plVar4 + 0x30))();
      iVar3 = *(int *)(param_1 + 0x70);
      plVar4 = *(longlong **)(param_1 + 0x68);
    }
    if (plVar4 == (longlong *)0x0 || iVar3 == 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x60);
LAB_142903747:
                    /* WARNING: Could not recover jumptable at 0x000142903763. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar4,param_3);
    return;
  }
  param_3 = (float)(~-(uint)(0.0 < param_4) & (uint)param_2 |
                   (uint)((param_3 / param_4) * param_2) & -(uint)(0.0 < param_4));
  if ((*(longlong **)(param_1 + 0x68) != (longlong *)0x0 && *(int *)(param_1 + 0x70) != 0) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))(), cVar2 != '\0')) {
    if (*(int *)(param_1 + 0x70) == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)(param_1 + 0x68);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x58);
    goto LAB_142903747;
  }
  *(float *)(param_1 + 0x38) = param_3;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  plVar4 = (longlong *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x48) != 0) {
    puVar1 = (undefined8 *)*plVar4;
    if (puVar1 == (undefined8 *)0x0) goto LAB_14290370e;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_14290370e:
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 14290379e FUN_14290379e body=99 status=ok
// SIG undefined FUN_14290379e(void)

void FUN_14290379e(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 142903802 FUN_142903802 body=66 status=ok
// SIG undefined FUN_142903802(void)

void FUN_142903802(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f16100;
  FUN_146aa793b(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 142903844 FUN_142903844 body=66 status=ok
// SIG undefined FUN_142903844(void)

void FUN_142903844(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f16460;
  FUN_146aa7a0b(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 142903886 FUN_142903886 body=167 status=ok
// SIG undefined FUN_142903886(void)

void FUN_142903886(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_149f166a0;
  plVar2 = (longlong *)param_1[0x4a];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_146a74fbf(param_1[0x42],*(undefined4 *)(param_1 + 0x43));
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  plVar2 = param_1 + 0x3d;
  if (*(int *)(param_1 + 0x3e) != 0) {
    puVar3 = (undefined8 *)*plVar2;
    if (puVar3 == (undefined8 *)0x0) goto LAB_142903918;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar2,0,0,0x10);
    *(undefined4 *)(param_1 + 0x3e) = 0;
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
LAB_142903918:
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 14290392d FUN_14290392d body=91 status=ok
// SIG undefined FUN_14290392d(void)

void FUN_14290392d(void)

{
  if (DAT_14c98f1f8 != 0) {
    if (DAT_14c98f1f0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c98f1f0)(DAT_14c98f1f0,0);
    FUN_1446efa72(&DAT_14c98f1f0,0,0,0x10);
    DAT_14c98f1f8 = 0;
  }
  if (DAT_14c98f1f0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1429039b8 FUN_1429039b8 body=66 status=ok
// SIG undefined FUN_1429039b8(void)

void FUN_1429039b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f16c20;
  FUN_146aa7bc1(param_1[0x40],*(undefined4 *)(param_1 + 0x41));
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 1429039fa FUN_1429039fa body=68 status=ok
// SIG undefined FUN_1429039fa(void)

void FUN_1429039fa(void)

{
  if (DAT_14c98fff8 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c98ffd8,DAT_14c98ffe0);
  if (DAT_14c98ffd8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142903a3e FUN_142903a3e body=68 status=ok
// SIG undefined FUN_142903a3e(void)

void FUN_142903a3e(void)

{
  if (DAT_14c990038 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c990018,DAT_14c990020);
  if (DAT_14c990018 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142903a82 FUN_142903a82 body=68 status=ok
// SIG undefined FUN_142903a82(void)

void FUN_142903a82(void)

{
  if (DAT_14c990078 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c990058,DAT_14c990060);
  if (DAT_14c990058 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142903ac6 FUN_142903ac6 body=39 status=ok
// SIG undefined FUN_142903ac6(void)

longlong FUN_142903ac6(longlong param_1,int param_2)

{
  FUN_140cc7538();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -0x18);
  }
  return param_1 + -0x18;
}



// FUNCTION 142903b0c FUN_142903b0c body=59 status=ok
// SIG undefined FUN_142903b0c(void)

longlong FUN_142903b0c(longlong param_1,int param_2)

{
  FUN_145be1bc1(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142903b47 FUN_142903b47 body=68 status=ok
// SIG undefined FUN_142903b47(void)

void FUN_142903b47(void)

{
  if (DAT_14c9900b8 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c990098,DAT_14c9900a0);
  if (DAT_14c990098 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142903b8c FUN_142903b8c body=39 status=ok
// SIG undefined FUN_142903b8c(void)

longlong FUN_142903b8c(longlong param_1,int param_2)

{
  FUN_140cc7538();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -0x18);
  }
  return param_1 + -0x18;
}



// FUNCTION 142903bb3 FUN_142903bb3 body=68 status=ok
// SIG undefined FUN_142903bb3(void)

void FUN_142903bb3(void)

{
  if (DAT_14c9900f8 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c9900d8,DAT_14c9900e0);
  if (DAT_14c9900d8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142903bf8 FUN_142903bf8 body=59 status=ok
// SIG undefined FUN_142903bf8(void)

longlong FUN_142903bf8(longlong param_1,int param_2)

{
  FUN_146aa7671(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142903c34 FUN_142903c34 body=59 status=ok
// SIG undefined FUN_142903c34(void)

longlong FUN_142903c34(longlong param_1,int param_2)

{
  FUN_146aa7741(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142903c6f FUN_142903c6f body=68 status=ok
// SIG undefined FUN_142903c6f(void)

void FUN_142903c6f(void)

{
  if (DAT_14c990138 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c990118,DAT_14c990120);
  if (DAT_14c990118 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142903cb3 FUN_142903cb3 body=68 status=ok
// SIG undefined FUN_142903cb3(void)

void FUN_142903cb3(void)

{
  if (DAT_14c990178 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c990158,DAT_14c990160);
  if (DAT_14c990158 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142903cf7 FUN_142903cf7 body=68 status=ok
// SIG undefined FUN_142903cf7(void)

void FUN_142903cf7(void)

{
  if (DAT_14c9901b8 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c990198,DAT_14c9901a0);
  if (DAT_14c990198 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142903d3c FUN_142903d3c body=59 status=ok
// SIG undefined FUN_142903d3c(void)

longlong FUN_142903d3c(longlong param_1,int param_2)

{
  FUN_1469edf3a(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142903d78 FUN_142903d78 body=59 status=ok
// SIG undefined FUN_142903d78(void)

longlong FUN_142903d78(longlong param_1,int param_2)

{
  FUN_146aa793b(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142903db3 FUN_142903db3 body=68 status=ok
// SIG undefined FUN_142903db3(void)

void FUN_142903db3(void)

{
  if (DAT_14c9901f8 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c9901d8,DAT_14c9901e0);
  if (DAT_14c9901d8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142903df8 FUN_142903df8 body=59 status=ok
// SIG undefined FUN_142903df8(void)

longlong FUN_142903df8(longlong param_1,int param_2)

{
  FUN_146aa7a0b(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142903e34 FUN_142903e34 body=39 status=ok
// SIG undefined FUN_142903e34(void)

longlong FUN_142903e34(longlong param_1,int param_2)

{
  FUN_140cc7538();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -0x18);
  }
  return param_1 + -0x18;
}



// FUNCTION 142903e5c FUN_142903e5c body=39 status=ok
// SIG undefined FUN_142903e5c(void)

longlong FUN_142903e5c(longlong param_1,int param_2)

{
  FUN_140cc7538();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -0x18);
  }
  return param_1 + -0x18;
}



// FUNCTION 142903e83 FUN_142903e83 body=68 status=ok
// SIG undefined FUN_142903e83(void)

void FUN_142903e83(void)

{
  if (DAT_14c990238 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c990218,DAT_14c990220);
  if (DAT_14c990218 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142903ec8 FUN_142903ec8 body=59 status=ok
// SIG undefined FUN_142903ec8(void)

longlong FUN_142903ec8(longlong param_1,int param_2)

{
  FUN_146aa7bc1(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142903f04 FUN_142903f04 body=48 status=ok
// SIG undefined FUN_142903f04(void)

longlong FUN_142903f04(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x268;
  FUN_146aac586(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142903f46 FUN_142903f46 body=563 status=ok
// SIG undefined FUN_142903f46(void)

void FUN_142903f46(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar6 = (int)param_1[0xc] - *(int *)((longlong)param_1 + 0x8c);
  if (((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar6) ||
     (iVar6 != (int)param_1[0x16])) {
    if ((*(int *)(*param_1 + 0x6b8) != 0) &&
       ((plVar4 = *(longlong **)(*param_1 + 0x6b0), plVar4 != (longlong *)0x0 &&
        (cVar5 = (**(code **)(*plVar4 + 0x30))(), cVar5 != '\0')))) {
      iVar6 = (int)param_1[6];
      if (iVar6 == 0) {
        uVar15 = 1;
        uVar17 = 0;
        iVar13 = 0;
        iVar7 = 0;
      }
      else {
        puVar11 = (uint *)param_1[5];
        if ((uint *)param_1[5] == (uint *)0x0) {
          puVar11 = (uint *)(param_1 + 3);
        }
        uVar16 = *puVar11;
        if (uVar16 == 0) {
          iVar7 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar7 = iVar6 + -1;
          }
          uVar17 = 0;
          uVar15 = (ulonglong)(uint)(iVar7 >> 5);
          if (iVar7 >> 5 < 1) {
            uVar15 = uVar17;
          }
          iVar13 = 0;
          do {
            if (uVar15 == uVar17) goto LAB_14290412a;
            iVar13 = iVar13 + 0x20;
            uVar16 = puVar11[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar16 == 0);
        }
        else {
          uVar17 = 0;
          iVar13 = 0;
        }
        uVar15 = (ulonglong)(-uVar16 & uVar16);
        uVar3 = uVar15 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar7) {
          iVar7 = iVar6;
        }
      }
      if (iVar7 < iVar6) {
        uVar16 = 0xffffffff;
        do {
          plVar4 = *(longlong **)(param_1[1] + 0x10 + (longlong)iVar7 * 0x28);
          (**(code **)(*plVar4 + 0x58))(plVar4,local_58);
          plVar4 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_50 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          uVar16 = uVar16 & ~(uint)uVar15;
          puVar11 = (uint *)param_1[5];
          if ((uint *)param_1[5] == (uint *)0x0) {
            puVar11 = (uint *)(param_1 + 3);
          }
          iVar6 = (int)param_1[6];
          iVar7 = (int)uVar17;
          lVar14 = (longlong)iVar7;
          uVar8 = puVar11[lVar14] & uVar16;
          if (uVar8 == 0) {
            iVar9 = iVar6 + 0x1e;
            if (-1 < iVar6 + -1) {
              iVar9 = iVar6 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar10 = iVar9;
            if (iVar9 < iVar7) {
              iVar10 = iVar7;
            }
            if (iVar9 <= iVar7) break;
            lVar12 = 0;
            while( true ) {
              iVar13 = iVar13 + 0x20;
              uVar8 = puVar11[lVar14 + lVar12 + 1];
              if (uVar8 != 0) break;
              lVar12 = lVar12 + 1;
              if (iVar10 - lVar14 == lVar12) goto LAB_14290412a;
            }
            uVar17 = (ulonglong)(iVar7 + (int)lVar12 + 1);
            uVar16 = 0xffffffff;
          }
          uVar15 = (ulonglong)(-uVar8 & uVar8);
          uVar3 = uVar15 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        } while (iVar7 < iVar6);
      }
    }
LAB_14290412a:
    if ((*(int *)(*param_1 + 0x6c8) != 0) &&
       (plVar4 = *(longlong **)(*param_1 + 0x6c0), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x60))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290418c FUN_14290418c body=149 status=ok
// SIG undefined FUN_14290418c(void)

undefined2 * FUN_14290418c(longlong param_1,undefined2 *param_2)

{
  float fVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_48 [36];
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,&local_24);
      fVar1 = **(float **)(param_1 + 0x18);
      if ((fVar1 != local_24) || (NAN(fVar1) || NAN(local_24))) {
        **(float **)(param_1 + 0x18) = local_24;
        *param_2 = 0x100;
        goto LAB_1429041f1;
      }
    }
  }
  *param_2 = 0;
LAB_1429041f1:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142904222 FUN_142904222 body=245 status=ok
// SIG undefined FUN_142904222(void)

void FUN_142904222(longlong *param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  bool bVar14;
  
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    iVar3 = *param_3;
    lVar5 = *param_2;
    iVar10 = (int)plVar4[1];
    do {
      if (iVar10 == 0) {
        return;
      }
      LOCK();
      iVar8 = (int)plVar4[1];
      bVar14 = iVar10 == iVar8;
      if (bVar14) {
        *(int *)(plVar4 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar14);
    lVar6 = *param_1;
    if (lVar6 != 0) {
      uVar13 = *(uint *)(lVar6 + 0x200);
      uVar9 = (ulonglong)(int)uVar13;
      if ((longlong)uVar9 < 1) {
        lVar12 = *(longlong *)(lVar6 + 0x1f8);
        uVar13 = 0;
      }
      else {
        lVar12 = *(longlong *)(lVar6 + 0x1f8);
        uVar11 = 0;
        do {
          lVar7 = *(longlong *)(lVar12 + uVar11 * 8);
          if ((lVar7 != lVar5) && ((float)(int)*(float *)(lVar5 + 0xc0) < *(float *)(lVar7 + 0xc0)))
          goto LAB_1429042c3;
          uVar11 = uVar11 + 1;
        } while (uVar9 != uVar11);
      }
      uVar11 = 0xffffffff;
      if (*(longlong *)(lVar12 + -8 + uVar9 * 8) != lVar5) {
        uVar11 = (ulonglong)uVar13;
      }
LAB_1429042c3:
      iVar10 = (int)uVar11;
      if (iVar10 != iVar3 && iVar10 != -1) {
        FUN_1429023e6(lVar6 + 0x1e0,iVar3,iVar10 - (uint)(iVar3 < iVar10));
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
                    /* WARNING: Could not recover jumptable at 0x00014290430c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142904354 FUN_142904354 body=64 status=ok
// SIG undefined FUN_142904354(void)

undefined8 * FUN_142904354(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_149f18fa0;
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 1429043a4 FUN_1429043a4 body=94 status=ok
// SIG undefined FUN_1429043a4(void)

void FUN_1429043a4(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    uVar4 = *param_2;
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        return;
      }
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
    if (*param_1 != 0) {
      FUN_1429027b0(*param_1,uVar4,0);
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
                    /* WARNING: Could not recover jumptable at 0x0001429043f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14290443e FUN_14290443e body=64 status=ok
// SIG undefined FUN_14290443e(void)

undefined8 * FUN_14290443e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_149f19250;
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 14290447e FUN_14290447e body=1186 status=ok
// SIG undefined FUN_14290447e(void)

void FUN_14290447e(undefined8 *param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  float *local_160;
  longlong local_158;
  float local_148;
  float fStack_144;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  char local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  fStack_144 = (float)param_3[3];
  uVar6 = *param_1;
  local_148 = (float)param_3[2];
  lVar7 = param_1[1];
  fStack_110 = (float)param_3[1];
  fStack_114 = (float)*param_3;
  local_13c = 0x3f800000;
  local_138 = CONCAT44(fStack_110,fStack_114);
  local_f0 = *(longlong *)(param_2 + 0x10);
  local_90 = *(char *)(local_f0 + 0x198);
  if (DAT_14c96b1e0 == '\0') {
    if (local_90 == '\0') goto LAB_14290457f;
    local_98 = *(ulonglong *)(local_f0 + 400);
    local_a8 = *(undefined8 *)(local_f0 + 0x180);
    uStack_a0 = *(undefined8 *)(local_f0 + 0x188);
LAB_1429047f2:
    fVar9 = (float)*(double *)(local_f0 + 0x170);
    if (DAT_14c96b1e0 != '\0') {
      fVar9 = (0.5 - fVar9) + 0.5;
    }
    local_130 = CONCAT44((float)*(double *)(local_f0 + 0x178),fVar9);
    local_168 = &local_130;
    local_158 = lVar7 + 0x1c;
    local_128 = *(float *)(lVar7 + 8);
    local_160 = &local_128;
    fStack_124 = (float)*(undefined8 *)(lVar7 + 0xc);
    fStack_120 = (float)((ulonglong)*(undefined8 *)(lVar7 + 0xc) >> 0x20);
    FUN_146978c22(&local_e0,&local_148,&local_13c,&local_a8);
    local_f0 = *(longlong *)(param_2 + 0x10);
    plVar8 = *(longlong **)(param_2 + 0x18);
    local_128 = local_e0;
    fStack_124 = fStack_dc;
    if (plVar8 == (longlong *)0x0) {
      local_f8 = local_b0;
      fStack_120 = fStack_d8;
      fStack_11c = fStack_d4;
      local_108 = CONCAT44(uStack_bc,local_c0);
      uStack_100 = CONCAT44(uStack_b4,uStack_b8);
      local_118 = local_d0;
      fStack_114 = fStack_cc;
      fStack_110 = fStack_c8;
      fStack_10c = fStack_c4;
LAB_14290473a:
      local_e8 = (longlong *)0x0;
      goto LAB_142904746;
    }
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    local_f8 = local_b0;
    fStack_120 = fStack_d8;
    fStack_11c = fStack_d4;
    local_118 = local_d0;
    fStack_114 = fStack_cc;
    fStack_110 = fStack_c8;
    fStack_10c = fStack_c4;
    local_108 = CONCAT44(uStack_bc,local_c0);
    uStack_100 = CONCAT44(uStack_b4,uStack_b8);
  }
  else {
    if (local_90 != '\0') {
      local_a8 = *(undefined8 *)(local_f0 + 0x180);
      uStack_a0 = *(undefined8 *)(local_f0 + 0x188);
      local_98 = *(ulonglong *)(local_f0 + 400) ^ 0x80000000;
      goto LAB_1429047f2;
    }
LAB_14290457f:
    uVar5 = *(undefined1 *)(lVar7 + 0x34);
    fStack_120 = *(float *)(lVar7 + 8);
    fStack_10c = *(float *)(lVar7 + 0x1c);
    fVar9 = *(float *)(lVar7 + 0x20);
    fVar3 = *(float *)(lVar7 + 0x28);
    fVar4 = *(float *)(lVar7 + 0x24);
    fVar10 = fStack_114 * fVar9 + fVar3 * fStack_110 + *(float *)(lVar7 + 0x30);
    fVar11 = fStack_114 * fStack_10c + fVar4 * fStack_110 + *(float *)(lVar7 + 0x2c);
    fVar12 = fVar9 * 0.0 + fVar3;
    fVar13 = fStack_10c * 0.0 + fVar4;
    fVar9 = fVar3 * 0.0 + fVar9;
    fStack_10c = fVar4 * 0.0 + fStack_10c;
    local_118 = fStack_110 * fStack_120 + *(float *)(lVar7 + 0x10);
    fStack_11c = fStack_114 * fStack_120 + *(float *)(lVar7 + 0xc);
    plVar8 = *(longlong **)(param_2 + 0x18);
    local_128 = local_148;
    fStack_124 = fStack_144;
    if (plVar8 == (longlong *)0x0) {
      local_108 = CONCAT44(fVar13,fVar9);
      uStack_100 = CONCAT44(fVar11,fVar12);
      local_f8 = CONCAT35(local_f8._5_3_,CONCAT14(uVar5,fVar10)) & 0xffffff01ffffffff;
      goto LAB_14290473a;
    }
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    local_108 = CONCAT44(fVar13,fVar9);
    uStack_100 = CONCAT44(fVar11,fVar12);
    local_f8 = CONCAT17(local_e0._2_1_,CONCAT25((undefined2)local_e0,CONCAT14(uVar5,fVar10))) &
               0xffffff01ffffffff;
  }
  LOCK();
  *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
  UNLOCK();
  LOCK();
  plVar1 = plVar8 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  local_e8 = plVar8;
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
LAB_142904746:
  FUN_1402018be(uVar6,&local_128);
  plVar8 = local_e8;
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290495a FUN_14290495a body=29 status=ok
// SIG undefined FUN_14290495a(void)

undefined8 FUN_14290495a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14290498c FUN_14290498c body=85 status=ok
// SIG undefined FUN_14290498c(void)

void FUN_14290498c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ef0aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f19320;
  return;
}



// FUNCTION 1429049e2 FUN_1429049e2 body=85 status=ok
// SIG undefined FUN_1429049e2(void)

void FUN_1429049e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ef0aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f19320;
  return;
}



// FUNCTION 142904a38 FUN_142904a38 body=118 status=ok
// SIG undefined FUN_142904a38(void)

void FUN_142904a38(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149ef0aa0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f19320;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142904a9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142904ab6 FUN_142904ab6 body=19 status=ok
// SIG undefined FUN_142904ab6(void)

undefined1 FUN_142904ab6(undefined8 param_1,undefined8 param_2)

{
  FUN_145ff9aea(param_2);
  return 1;
}



// FUNCTION 142904ac9 FUN_142904ac9 body=217 status=ok
// SIG undefined FUN_142904ac9(void)

undefined8 * FUN_142904ac9(void)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = (undefined8 *)FUN_14001cc68(0x230,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f19460;
  FUN_140a560dc(puVar2 + 2);
  puVar2[2] = &PTR_FUN_149f19480;
  puVar2[0x3e] = &PTR__purecall_149ef0700;
  puVar2[0x3f] = puVar2 + 2;
  local_28 = "Children";
  local_20 = 8;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  puVar2[0x40] = (ulonglong)uVar1;
  puVar2[0x3e] = &PTR_LAB_149f196c0;
  *(undefined1 *)((longlong)puVar2 + 0x224) = 0;
  puVar2[0x41] = 0;
  puVar2[0x42] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142904ba4 FUN_142904ba4 body=59 status=ok
// SIG undefined FUN_142904ba4(void)

longlong FUN_142904ba4(longlong param_1,int param_2)

{
  FUN_146ac2a0b(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142904be0 FUN_142904be0 body=66 status=ok
// SIG undefined FUN_142904be0(void)

void FUN_142904be0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f19480;
  FUN_146ac2a0b(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 142904c31 FUN_142904c31 body=236 status=ok
// SIG undefined FUN_142904c31(void)

void FUN_142904c31(float *param_1,char param_2,float param_3,longlong param_4,float *param_5,
                  float *param_6)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *param_5;
  fVar1 = param_5[2];
  iVar2 = *(int *)(param_4 + 0x38);
  if (param_2 == '\x01') {
    if (iVar2 == 0) {
LAB_142904c78:
      fVar5 = (param_3 - (fVar4 + fVar1)) * *param_6;
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      goto LAB_142904d0b;
    }
    if (iVar2 == 1) {
      iVar2 = 3;
    }
    else if (iVar2 == 3) {
      iVar2 = 1;
    }
  }
  else if (iVar2 == 0) goto LAB_142904c78;
  pfVar3 = (float *)&DAT_14c84635c;
  if ((*(byte *)(*(longlong *)(param_4 + 0x10) + 0x31) & 0x20) != 0) {
    pfVar3 = (float *)(*(longlong *)(param_4 + 0x10) + 0x168);
  }
  fVar5 = *pfVar3 * *param_6;
  fVar6 = param_3 - (fVar4 + fVar1);
  if (fVar6 <= fVar5) {
    fVar5 = fVar6;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (iVar2 != 1) {
    if (iVar2 == 3) {
      fVar4 = (param_3 - fVar5) - fVar1;
    }
    else if (iVar2 == 2) {
      fVar4 = (fVar4 + (param_3 - fVar5) * 0.5) - fVar1;
    }
    else {
      fVar5 = fVar6 * *param_6;
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
    }
  }
LAB_142904d0b:
  *param_1 = fVar4;
  param_1[1] = fVar5;
  return;
}



// FUNCTION 142904d1d FUN_142904d1d body=204 status=ok
// SIG undefined FUN_142904d1d(void)

void FUN_142904d1d(float *param_1,float param_2,longlong param_3,longlong param_4,float *param_5)

{
  float fVar1;
  int iVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *(float *)(param_4 + 4);
  fVar1 = *(float *)(param_4 + 0xc);
  iVar2 = *(int *)(param_3 + 0x3c);
  if (iVar2 == 0) {
    fVar5 = (param_2 - (fVar4 + fVar1)) * *param_5;
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
  }
  else {
    puVar3 = &DAT_14c84635c;
    if ((*(byte *)(*(longlong *)(param_3 + 0x10) + 0x31) & 0x20) != 0) {
      puVar3 = (undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x168);
    }
    fVar5 = *(float *)((longlong)puVar3 + 4) * *param_5;
    fVar6 = param_2 - (fVar4 + fVar1);
    if (fVar6 <= fVar5) {
      fVar5 = fVar6;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    if (iVar2 != 1) {
      if (iVar2 == 3) {
        fVar4 = (param_2 - fVar5) - fVar1;
      }
      else if (iVar2 == 2) {
        fVar4 = (fVar4 + (param_2 - fVar5) * 0.5) - fVar1;
      }
      else {
        fVar5 = fVar6 * *param_5;
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
      }
    }
  }
  *param_1 = fVar4;
  param_1[1] = fVar5;
  return;
}



// FUNCTION 142904dea FUN_142904dea body=207 status=ok
// SIG undefined FUN_142904dea(void)

void FUN_142904dea(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 0x10;
  if (0x10 < param_2) {
    uVar2 = (ulonglong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x400) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0);
      }
    }
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (iVar4 == *(int *)(param_1 + 0x20c)) {
    return;
  }
  *(int *)(param_1 + 0x20c) = iVar4;
  FUN_142904eba(param_1,*(undefined4 *)(param_1 + 0x208));
  return;
}



// FUNCTION 142904eba FUN_142904eba body=141 status=ok
// SIG undefined FUN_142904eba(void)

void FUN_142904eba(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,0x20);
  return;
}



// FUNCTION 142904f48 FUN_142904f48 body=233 status=ok
// SIG undefined FUN_142904f48(void)

void FUN_142904f48(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      uVar3 = (ulonglong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x20c)) {
        uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
      }
      uVar4 = uVar3 * 0x20;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar4 < 0x7ff1) {
            uVar4 = (ulonglong)
                    (ushort)(&DAT_14c841d90)
                            [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
          }
          else {
            uVar3 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar3 = (ulonglong)DAT_14c841df8;
            }
            uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
          }
        }
        else {
          uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
        }
      }
      iVar2 = (int)(uVar4 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_142904eba(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 142905032 FUN_142905032 body=207 status=ok
// SIG undefined FUN_142905032(void)

void FUN_142905032(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 0x10;
  if (0x10 < param_2) {
    uVar2 = (ulonglong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x400) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0);
      }
    }
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (iVar4 == *(int *)(param_1 + 0x20c)) {
    return;
  }
  *(int *)(param_1 + 0x20c) = iVar4;
  FUN_142905102(param_1,*(undefined4 *)(param_1 + 0x208));
  return;
}



// FUNCTION 142905102 FUN_142905102 body=141 status=ok
// SIG undefined FUN_142905102(void)

void FUN_142905102(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,0x20);
  return;
}



// FUNCTION 142905190 FUN_142905190 body=233 status=ok
// SIG undefined FUN_142905190(void)

void FUN_142905190(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      uVar3 = (ulonglong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x20c)) {
        uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
      }
      uVar4 = uVar3 * 0x20;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar4 < 0x7ff1) {
            uVar4 = (ulonglong)
                    (ushort)(&DAT_14c841d90)
                            [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
          }
          else {
            uVar3 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar3 = (ulonglong)DAT_14c841df8;
            }
            uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
          }
        }
        else {
          uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
        }
      }
      iVar2 = (int)(uVar4 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_142905102(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14290527a FUN_14290527a body=59 status=ok
// SIG undefined FUN_14290527a(void)

longlong FUN_14290527a(longlong param_1,int param_2)

{
  FUN_146ac4139(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429052b6 FUN_1429052b6 body=66 status=ok
// SIG undefined FUN_1429052b6(void)

void FUN_1429052b6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f19940;
  FUN_146ac4139(param_1[0x40],*(undefined4 *)(param_1 + 0x41));
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 1429052f8 FUN_1429052f8 body=123 status=ok
// SIG undefined FUN_1429052f8(void)

void FUN_1429052f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_18 = param_2[6];
  local_48 = *param_2;
  uStack_40 = param_2[1];
  local_38 = *(undefined4 *)(param_2 + 2);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_30 = *(undefined4 *)(param_2 + 3);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_28 = *(undefined4 *)(param_2 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_20 = *(undefined4 *)(param_2 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_50 = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_58 = *(undefined1 *)((longlong)param_1 + 0x19);
  FUN_142902da2(*param_1,&local_48,param_1 + 1,*(undefined1 *)(param_1 + 3));
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142905374 FUN_142905374 body=95 status=ok
// SIG undefined FUN_142905374(void)

undefined8 * FUN_142905374(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_149f19c40;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  return puVar2 + 1;
}



// FUNCTION 1429053da FUN_1429053da body=29 status=ok
// SIG undefined FUN_1429053da(void)

void FUN_1429053da(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1429053f8 FUN_1429053f8 body=83 status=ok
// SIG undefined FUN_1429053f8(void)

undefined8 * FUN_1429053f8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f19c40;
  plVar3 = (longlong *)param_1[3];
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


