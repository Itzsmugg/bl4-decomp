// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1428548aa FUN_1428548aa body=12 status=ok
// SIG undefined FUN_1428548aa(void)

void FUN_1428548aa(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001428548b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1428548b6 FUN_1428548b6 body=29 status=ok
// SIG undefined FUN_1428548b6(void)

undefined8 FUN_1428548b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1428548d4 FUN_1428548d4 body=191 status=ok
// SIG undefined FUN_1428548d4(void)

void FUN_1428548d4(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_68 [40];
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x20))(*(longlong **)(lVar1 + 0x10),&local_40);
      **(double **)param_1[2] = local_40;
      *(double *)(*(longlong *)param_1[2] + 8) = local_38;
      *(double *)(*(longlong *)param_1[2] + 0x10) = local_30 - local_40;
      *(double *)(*(longlong *)param_1[2] + 0x18) = local_28 - local_38;
      *(undefined4 *)param_1[1] = 0;
      goto LAB_142854976;
    }
  }
  *(undefined4 *)param_1[1] = 0x80040201;
LAB_142854976:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428549ba FUN_1428549ba body=12 status=ok
// SIG undefined FUN_1428549ba(void)

void FUN_1428549ba(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001428549c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1428549c6 FUN_1428549c6 body=29 status=ok
// SIG undefined FUN_1428549c6(void)

undefined8 FUN_1428549c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1428549e4 FUN_1428549e4 body=92 status=ok
// SIG undefined FUN_1428549e4(void)

void FUN_1428549e4(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  
  lVar1 = *param_1;
  uVar3 = 0x80040201;
  if (*(longlong *)(lVar1 + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x98))();
      uVar3 = 0x80040204;
      if (cVar2 != '\0') {
        uVar3 = 0;
        (**(code **)(**(longlong **)(lVar1 + 0x10) + 0xb8))(*(longlong **)(lVar1 + 0x10),0);
      }
    }
  }
  *(undefined4 *)param_1[1] = uVar3;
  return;
}



// FUNCTION 142854a5e FUN_142854a5e body=12 status=ok
// SIG undefined FUN_142854a5e(void)

void FUN_142854a5e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142854a67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142854a6a FUN_142854a6a body=29 status=ok
// SIG undefined FUN_142854a6a(void)

undefined8 FUN_142854a6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142854a88 FUN_142854a88 body=218 status=ok
// SIG undefined FUN_142854a88(void)

void FUN_142854a88(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = *param_1;
  if (*(longlong *)(lVar6 + 8) != 0) {
    cVar4 = (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x10))();
    if (cVar4 != '\0') {
      (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x18))(*(longlong **)(lVar6 + 0x10),&local_30);
      if (local_30 != 0) {
        uVar3 = *(undefined8 *)(lVar6 + 8);
        local_40 = local_30;
        local_38 = local_28;
        if (local_28 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_28 + 1) = (int)local_28[1] + 1;
          UNLOCK();
        }
        lVar5 = FUN_146917ee2(uVar3,&local_40);
        lVar6 = lVar5 + 0x38;
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        **(longlong **)param_1[2] = lVar6;
        *(undefined4 *)param_1[1] = 0;
      }
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142854b8a FUN_142854b8a body=12 status=ok
// SIG undefined FUN_142854b8a(void)

void FUN_142854b8a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142854b93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142854b96 FUN_142854b96 body=29 status=ok
// SIG undefined FUN_142854b96(void)

undefined8 FUN_142854b96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142854bb4 FUN_142854bb4 body=189 status=ok
// SIG undefined FUN_142854bb4(void)

void FUN_142854bb4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  HRESULT HVar5;
  undefined8 *puVar6;
  HWND hwnd;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *param_1;
  cVar4 = (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x10))();
  if (cVar4 != '\0') {
    puVar6 = (undefined8 *)(**(code **)(**(longlong **)(lVar3 + 0x10) + 0xc0))();
    (**(code **)*puVar6)(puVar6,&local_28);
    HVar5 = -0x7feceaf7;
    if (local_28 != (longlong *)0x0) {
      hwnd = (HWND)(**(code **)(*local_28 + 0xc0))();
      if (hwnd != (HWND)0x0) {
        HVar5 = UiaHostProviderFromHwnd(hwnd,*(IRawElementProviderSimple ***)param_1[2]);
      }
    }
    *(HRESULT *)param_1[1] = HVar5;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
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



// FUNCTION 142854c98 FUN_142854c98 body=12 status=ok
// SIG undefined FUN_142854c98(void)

void FUN_142854c98(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142854ca1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142854ca4 FUN_142854ca4 body=29 status=ok
// SIG undefined FUN_142854ca4(void)

undefined8 FUN_142854ca4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142854cc2 FUN_142854cc2 body=210 status=ok
// SIG undefined FUN_142854cc2(void)

void FUN_142854cc2(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *param_1;
  if (*(longlong *)(lVar4 + 8) != 0) {
    cVar1 = (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x10))();
    if (cVar1 != '\0') {
      if (*(int *)param_1[2] == 0x2719) {
        lVar3 = FUN_14001cc68(0x70,0x10);
        local_30 = *(undefined8 *)(lVar4 + 0x10);
        local_28 = *(longlong *)(lVar4 + 0x18);
        if (local_28 != 0) {
          LOCK();
          *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
          UNLOCK();
        }
        FUN_146916742(lVar3,*(undefined8 *)(lVar4 + 8),&local_30);
        lVar4 = lVar3 + 0x58;
        if (lVar3 == 0) {
          lVar4 = 0;
        }
        **(longlong **)param_1[3] = lVar4;
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_1469195da(lVar4 + 0x28,*(int *)param_1[2],*(undefined8 *)param_1[3]);
      }
      *(undefined4 *)param_1[1] = uVar2;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142854d96 FUN_142854d96 body=70 status=ok
// SIG undefined FUN_142854d96(void)

undefined8 * FUN_142854d96(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_149ec9f80;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 142854de2 FUN_142854de2 body=29 status=ok
// SIG undefined FUN_142854de2(void)

void FUN_142854de2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142854e00 FUN_142854e00 body=29 status=ok
// SIG undefined FUN_142854e00(void)

undefined8 FUN_142854e00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142854e1e FUN_142854e1e body=255 status=ok
// SIG undefined FUN_142854e1e(void)

void FUN_142854e1e(longlong *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = *param_1;
  if ((*(longlong *)(lVar6 + 8) != 0) &&
     (cVar3 = (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x10))(), cVar3 != '\0')) {
    plVar4 = (longlong *)(**(code **)(**(longlong **)(lVar6 + 0x10) + 0xc0))();
    (**(code **)(*plVar4 + 8))
              (plVar4,&local_30,(int)*(double *)param_1[3],(int)*(double *)param_1[4]);
    if (local_30 == 0) {
      lVar6 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar6 + 8);
      local_40 = local_30;
      local_38 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      lVar5 = FUN_146917ee2(uVar2,&local_40);
      lVar6 = lVar5 + 0x30;
      if (lVar5 == 0) {
        lVar6 = 0;
      }
    }
    **(longlong **)param_1[2] = lVar6;
    *(undefined4 *)param_1[1] = 0;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_28 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142854f1e FUN_142854f1e body=78 status=ok
// SIG undefined FUN_142854f1e(void)

undefined8 * FUN_142854f1e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_149ec9fa0;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 142854f72 FUN_142854f72 body=29 status=ok
// SIG undefined FUN_142854f72(void)

void FUN_142854f72(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142854f90 FUN_142854f90 body=29 status=ok
// SIG undefined FUN_142854f90(void)

undefined8 FUN_142854f90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142854fae FUN_142854fae body=248 status=ok
// SIG undefined FUN_142854fae(void)

void FUN_142854fae(longlong *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = *param_1;
  **(undefined8 **)param_1[2] = 0;
  if (*(longlong *)(lVar6 + 8) != 0) {
    cVar3 = (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x10))();
    if (cVar3 != '\0') {
      plVar4 = (longlong *)(**(code **)(**(longlong **)(lVar6 + 0x10) + 0xc0))();
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_30,0);
      if (local_30 != 0) {
        uVar2 = *(undefined8 *)(lVar6 + 8);
        local_40 = local_30;
        local_38 = local_28;
        if (local_28 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_28 + 1) = (int)local_28[1] + 1;
          UNLOCK();
        }
        lVar5 = FUN_146917ee2(uVar2,&local_40);
        lVar6 = lVar5 + 0x30;
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        **(longlong **)param_1[2] = lVar6;
      }
      *(undefined4 *)param_1[1] = 0;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_28 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428550ce FUN_1428550ce body=12 status=ok
// SIG undefined FUN_1428550ce(void)

void FUN_1428550ce(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001428550d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1428550da FUN_1428550da body=29 status=ok
// SIG undefined FUN_1428550da(void)

undefined8 FUN_1428550da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1428550f7 FUN_1428550f7 body=2584 status=ok
// SIG undefined FUN_1428550f7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428550f7(void)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_74;
  char *local_70;
  int local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = (char *)0x8000000149ec5510;
  local_74 = 0xf;
  local_68 = FUN_14577453c();
  local_64 = 1;
  FUN_14171c728(&DAT_14c966fe8,&local_70);
  local_88 = 0;
  FUN_14153156c(&DAT_14c966ff0,L"Accessibility.Enable",&DAT_14c966fe9,
                L"If false, all queries from accessible APIs will be ignored. On some platforms, the application must be restarted in order to take effect."
               );
  atexit(FUN_14284e380);
  DAT_14c967820 = 0;
  local_70 = "Gamepad_LeftX";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c9678f8 = (ulonglong)uVar2;
  local_70 = "Gamepad_LeftY";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c967900 = (ulonglong)uVar2;
  local_70 = "Gamepad_RightX";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c967908 = (ulonglong)uVar2;
  local_70 = "Gamepad_RightY";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c967910 = (ulonglong)uVar2;
  local_70 = "Gamepad_LeftTriggerAxis";
  local_68 = 0x17;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c967918 = (ulonglong)uVar2;
  local_70 = "Gamepad_RightTriggerAxis";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c967920 = (ulonglong)uVar2;
  local_70 = "Gamepad_LeftThumbstick";
  local_68 = 0x16;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c967878 = (ulonglong)uVar2;
  local_70 = "Gamepad_RightThumbstick";
  local_68 = 0x17;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c967880 = (ulonglong)uVar2;
  local_70 = "Gamepad_Special_Left";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c967870 = (ulonglong)uVar2;
  local_70 = "Gamepad_Special_Left_X";
  local_68 = 0x16;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c967828 = (ulonglong)uVar2;
  local_70 = "Gamepad_Special_Left_Y";
  local_68 = 0x16;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c967830 = (ulonglong)uVar2;
  local_70 = "Gamepad_Special_Right";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c967868 = (ulonglong)uVar2;
  local_70 = "Gamepad_FaceButton_Bottom";
  local_68 = 0x19;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c967838 = (ulonglong)uVar2;
  local_70 = "Gamepad_FaceButton_Right";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c967840 = (ulonglong)uVar2;
  local_70 = "Gamepad_FaceButton_Left";
  local_68 = 0x17;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c967848 = (ulonglong)uVar2;
  local_70 = "Gamepad_FaceButton_Top";
  local_68 = 0x16;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c967850 = (ulonglong)uVar2;
  local_70 = "Gamepad_LeftShoulder";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c967858 = (ulonglong)uVar2;
  local_70 = "Gamepad_RightShoulder";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c967860 = (ulonglong)uVar2;
  local_70 = "Gamepad_LeftTrigger";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c967888 = (ulonglong)uVar2;
  local_70 = "Gamepad_RightTrigger";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c967890 = (ulonglong)uVar2;
  local_70 = "Gamepad_DPad_Up";
  local_68 = 0xf;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c967898 = (ulonglong)uVar2;
  local_70 = "Gamepad_DPad_Down";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c9678a0 = (ulonglong)uVar2;
  local_70 = "Gamepad_DPad_Right";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c9678b0 = (ulonglong)uVar2;
  local_70 = "Gamepad_DPad_Left";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c9678a8 = (ulonglong)uVar2;
  local_70 = "Gamepad_LeftStick_Up";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c9678b8 = (ulonglong)uVar2;
  local_70 = "Gamepad_LeftStick_Down";
  local_68 = 0x16;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c9678c0 = (ulonglong)uVar2;
  local_70 = "Gamepad_LeftStick_Right";
  local_68 = 0x17;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c9678d0 = (ulonglong)uVar2;
  local_70 = "Gamepad_LeftStick_Left";
  local_68 = 0x16;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c9678c8 = (ulonglong)uVar2;
  local_70 = "Gamepad_RightStick_Up";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c9678d8 = (ulonglong)uVar2;
  local_70 = "Gamepad_RightStick_Down";
  local_68 = 0x17;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c9678e0 = (ulonglong)uVar2;
  local_70 = "Gamepad_RightStick_Right";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c9678f0 = (ulonglong)uVar2;
  local_70 = "Gamepad_RightStick_Left";
  local_68 = 0x17;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c9678e8 = (ulonglong)uVar2;
  FUN_14605fba4();
  atexit((_func_5014 *)&LAB_14284e3e9);
  local_88 = 4;
  FUN_141471170(&DAT_14c967028,L"EnableHighDPIAwareness",&DAT_14c75ed08,
                L"Enables or disables high dpi mode");
  atexit(FUN_14284e3ee);
  local_88 = 4;
  FUN_14153156c(&DAT_14c967038,L"AllowVirtualKeyboard",&DAT_14c967048,
                L"Allow the use of a virtual keyboard despite platform main screen being non-touch")
  ;
  atexit(FUN_14284e433);
  DAT_14c967070 = 0;
  _DAT_14c967078 = 0;
  _DAT_14c967080 = 2;
  atexit(FUN_14284e478);
  DAT_14c967088 = 0;
  _DAT_14c967090 = 0;
  _DAT_14c967098 = 2;
  atexit(FUN_14284e4a9);
  DAT_14c9670b8 = 0;
  _DAT_14c9670c0 = 0;
  atexit((_func_5014 *)&LAB_14284e85d);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_149e001f0;
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
  *(longlong *)(local_70 + 0x10) = lVar3;
  *(undefined ***)local_70 = &PTR_FUN_149ec9690;
  local_88 = 0;
  FUN_1415c7246(&DAT_14c9670c8,L"r.SetFramePace",
                L"Set a target frame rate for the frame pacer.To set 30fps: \"r.SetFramePace 30\"",
                &local_70);
  if (local_68 != 0) {
    if (local_70 == (char *)0x0) goto LAB_1428558f1;
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_1428558f1:
  atexit(FUN_14284e881);
  DAT_14c967118 = 0;
  DAT_14c967120 = 0;
  DAT_14c9670f8 = 0;
  _DAT_14c967100 = 0;
  _DAT_14c967124 = 0xffffffff00000080;
  DAT_14c96712c = 0;
  DAT_14c967138 = 0;
  DAT_14c967140 = 0;
  atexit(FUN_14284eba6);
  DAT_14c967168 = 0;
  DAT_14c967170 = 0;
  DAT_14c967148 = 0;
  _DAT_14c967150 = 0;
  _DAT_14c967174 = 0xffffffff00000080;
  DAT_14c96717c = 0;
  DAT_14c967188 = 0;
  DAT_14c967190 = 0;
  atexit(FUN_14284ebcf);
  local_88 = 0;
  FUN_141471170(&DAT_14c9671d0,L"Slate.PreventDuplicateMouseEventsForTouchForWindows7",
                &DAT_14c9671e0,
                L"Hack to get around multiple mouse events being triggered for touch events on Windows 7 and lower.  Enabling this will prevent pen tablets from working on windows 7 since until we switch to the windows 8 sdk (and can use WM_POINTER* events) we cannot detect the difference"
               );
  atexit(FUN_1428500fd);
  local_88 = 0;
  FUN_14153156c(&DAT_14c9671e8,L"WindowsApplication.EnableWindowMessageProfilerScopes",
                &DAT_14c9671f8,
                L"Enable profiler scopes for window message handling on a per-message basis and for custom message handlers."
               );
  atexit(FUN_142850142);
  local_88 = 0;
  FUN_14153156c(&DAT_14c967200,L"WindowsApplication.EnableFirstTouchEvent",&DAT_14c967210,
                L"Enable FirstTouch Event which prevents small pop on some touch input devices");
  atexit(FUN_142850187);
  _DAT_14c967214 = 0xffff8300ffff8300;
  FUN_1446f470e(&DAT_14c967220,L"WindowsApplication",1);
  FUN_140056680(&DAT_14c967228,&DAT_149eca138);
  atexit((_func_5014 *)&LAB_1428501cc);
  FUN_140056680(&DAT_14c967238,L"MobileTouch");
  atexit((_func_5014 *)&LAB_1428501dd);
  FUN_1446f470e(&DAT_14c967390,L"AppStatusTracker",1);
  local_88 = 0;
  FUN_14153156c(&DAT_14c9673e0,L"WindowsCursor.UseInvisibleCursorForNoneCursorType",&DAT_14c9673f0,
                L"If enabled, sets the platform HCursor to a transparent cursor instead of null when the mouse cursor type to None."
               );
  atexit(FUN_142850bcc);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142855b10 FUN_142855b10 body=84 status=ok
// SIG undefined FUN_142855b10(void)

undefined8 FUN_142855b10(void)

{
  DWORD DVar1;
  HWND hWnd;
  undefined4 extraout_var;
  undefined1 auStack_38 [36];
  DWORD local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  hWnd = GetForegroundWindow();
  GetWindowThreadProcessId(hWnd,&local_14);
  DVar1 = GetCurrentProcessId();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71((int7)(CONCAT44(extraout_var,DVar1) >> 8),local_14 == DVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142855b70 FUN_142855b70 body=210 status=ok
// SIG undefined FUN_142855b70(void)

void FUN_142855b70(wchar_t *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  HWND hWndNewOwner;
  size_t sVar3;
  HGLOBAL hMem;
  wchar_t *_Dest;
  HANDLE pvVar4;
  
  hWndNewOwner = GetActiveWindow();
  BVar1 = OpenClipboard(hWndNewOwner);
  if (BVar1 != 0) {
    EmptyClipboard();
    sVar3 = wcslen(param_1);
    hMem = GlobalAlloc(2,(longlong)((int)sVar3 + 1) << 1);
    _Dest = GlobalLock(hMem);
    wcscpy(_Dest,param_1);
    GlobalUnlock(hMem);
    pvVar4 = SetClipboardData(0xd,hMem);
    if (pvVar4 == (HANDLE)0x0) {
      DVar2 = GetLastError();
      FUN_140033559(".\\Runtime/ApplicationCore/Private/Windows/WindowsPlatformApplicationMisc.cpp",
                    0x19b,L"SetClipboardData failed with error code %i",DVar2);
    }
    CloseClipboard();
  }
  return;
}



// FUNCTION 142855c67 FUN_142855c67 body=47 status=ok
// SIG undefined FUN_142855c67(void)

void FUN_142855c67(void)

{
  longlong lVar1;
  
  lVar1 = 0x40;
  do {
    if (*(longlong **)(&DAT_14c967980 + lVar1) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(&DAT_14c967980 + lVar1) + 0x10))();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 142855ca4 FUN_142855ca4 body=157 status=ok
// SIG undefined FUN_142855ca4(void)

void FUN_142855ca4(void)

{
  if (DAT_14c967a60 != (HANDLE)0x0) {
    WaitForSingleObject(DAT_14c75ed18,0xffffffff);
    if (DAT_14c967a58 != (HWND)0x0) {
      PostMessageW(DAT_14c967a58,0x10,0,0);
    }
    WaitForSingleObject(DAT_14c967a60,0xffffffff);
    CloseHandle(DAT_14c967a60);
    DAT_14c967a60 = (HANDLE)0x0;
    DAT_14c967a58 = (HWND)0x0;
    if (DAT_14c967a68 != (HWND)0x0) {
      PostMessageW(DAT_14c967a68,2,0,0);
      DAT_14c967a68 = (HWND)0x0;
    }
  }
  return;
}



// FUNCTION 142855d41 FUN_142855d41 body=264 status=ok
// SIG undefined FUN_142855d41(void)

undefined8 FUN_142855d41(undefined8 param_1,int *param_2,longlong *param_3)

{
  wchar_t *pwVar1;
  int iVar2;
  size_t sVar3;
  undefined1 auStack_58 [32];
  wchar_t **local_38;
  wchar_t *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_142857293(param_1,(short)param_2[1]);
  FUN_1400020e8(param_1,&DAT_149e00c10,3);
  if (*param_2 == 1) {
    local_38 = &local_28;
    iVar2 = (**(code **)(*param_3 + 0x60))(param_3,param_2 + 2,(short)param_2[1],param_2 + 6);
    pwVar1 = local_28;
    if (-1 < iVar2) {
      sVar3 = wcslen(local_28);
      FUN_1400020e8(param_1,pwVar1,sVar3 & 0xffffffff);
      FUN_1400020e8(param_1,&DAT_149e001d8,1);
      Ordinal_6(local_28);
    }
    FUN_1400020e8(param_1,L"(TSF IME)",9);
  }
  else if (*param_2 == 2) {
    FUN_1400020e8(param_1,L"(Keyboard)",10);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142855e4f FUN_142855e4f body=349 status=ok
// SIG undefined FUN_142855e4f(void)

undefined8 FUN_142855e4f(undefined8 param_1,HKL param_2)

{
  LPWSTR pWVar1;
  UINT UVar2;
  HKL hkl;
  size_t sVar3;
  undefined1 auStack_68 [32];
  LPWSTR local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  hkl = GetKeyboardLayout(0);
  if (hkl != param_2) {
    ActivateKeyboardLayout(param_2,0);
  }
  FUN_142857293(param_1,(ulonglong)param_2 & 0xffff);
  FUN_1400020e8(param_1);
  UVar2 = ImmGetIMEFileNameW(param_2,(LPWSTR)0x0,0);
  if (UVar2 == 0) {
    FUN_1400020e8(param_1,L"(Keyboard)",10);
  }
  else {
    local_48 = (LPWSTR)0x0;
    uStack_40 = 0;
    UVar2 = ImmGetDescriptionW(param_2,(LPWSTR)0x0,0);
    FUN_1409ee492(&local_48,UVar2 + 1,1);
    ImmGetDescriptionW(param_2,local_48,UVar2);
    pWVar1 = local_48;
    local_48[(int)UVar2] = L'\0';
    if (1 < (int)uStack_40) {
      sVar3 = wcslen(local_48);
      FUN_1400020e8(param_1,pWVar1,sVar3 & 0xffffffff);
      FUN_1400020e8(param_1,&DAT_149e001d8,1);
    }
    FUN_1400020e8(param_1,L"(IMM IME)",9);
    if (local_48 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if (hkl != param_2) {
    ActivateKeyboardLayout(hkl,0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142855fae FUN_142855fae body=165 status=ok
// SIG undefined FUN_142855fae(void)

void FUN_142855fae(longlong param_1)

{
  int iVar1;
  HKL pHVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  int local_68 [22];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 8) == 2) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x50))
                      (*(longlong **)(param_1 + 0x18),&DAT_1499d76f0,local_68);
    lVar3 = 0;
    if ((iVar1 < 0) || (local_68[0] != 1)) goto LAB_142856027;
    plVar4 = local_78;
    FUN_142855d41(plVar4,local_68,*(undefined8 *)(param_1 + 0x10));
  }
  else {
    pHVar2 = GetKeyboardLayout(0);
    plVar4 = (longlong *)local_68;
    FUN_142855e4f(plVar4,pHVar2);
  }
  lVar3 = *plVar4;
LAB_142856027:
  if (lVar3 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142856054 FUN_142856054 body=390 status=ok
// SIG undefined FUN_142856054(void)

void FUN_142856054(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = *(ulonglong *)(param_1 + 0x50);
  plVar5 = *(longlong **)(param_1 + 0x58);
  local_40 = uVar4;
  if (plVar5 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    local_38 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
  }
  uVar6 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  iVar7 = FUN_1414f68dc((longlong *)(param_1 + 0x60),uVar6 >> 0x10 ^ uVar6,&local_40);
  if (iVar7 == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)iVar7 * 0x38 + *(longlong *)(param_1 + 0x60);
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  uVar2 = *(undefined4 *)(lVar8 + 0x24);
  uVar3 = *(undefined4 *)(lVar8 + 0x28);
  *(undefined4 *)(lVar8 + 0x28) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x68))(*(longlong **)(param_1 + 0x50),uVar2,0);
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x28))
            (*(longlong **)(param_1 + 0x50),*(undefined4 *)(lVar8 + 0x24),0,0);
  plVar5 = *(longlong **)(param_1 + 0x50);
  FUN_140056680(&local_40,&DAT_149dfb77a);
  (**(code **)(*plVar5 + 0x38))(plVar5,uVar2,uVar3,&local_40);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_14692ab24(param_1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428561dc FUN_1428561dc body=295 status=ok
// SIG undefined FUN_1428561dc(void)

void FUN_1428561dc(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  HWND pHVar3;
  HIMC pHVar4;
  undefined1 auStack_858 [32];
  undefined1 local_838 [8];
  undefined8 local_830;
  undefined8 local_828;
  longlong *local_820;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_858;
  FUN_1459bcbc4();
  local_828 = *param_2;
  local_820 = (longlong *)param_2[1];
  if (local_820 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_820 + 0xc) = *(int *)((longlong)local_820 + 0xc) + 1;
    UNLOCK();
  }
  FUN_146190be8(param_1 + 0xb0,&local_830,&local_828);
  if (local_820 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_820 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_820 + 0x10))();
    }
  }
  pHVar3 = (HWND)(**(code **)(*(longlong *)*param_2 + 0xc0))();
  local_830 = *(undefined8 *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    pHVar4 = (HIMC)0x0;
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))
                      (*(longlong **)(param_1 + 0x20),&local_830);
    if (iVar2 < 0) {
      local_830 = *(undefined8 *)(param_1 + 0x30);
      FUN_14682f6b8(&local_828,0x400,iVar2);
    }
    pHVar4 = *(HIMC *)(param_1 + 0x40);
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x48))
                    (*(longlong **)(param_1 + 0x20),pHVar3,local_830,local_838);
  if (iVar2 < 0) {
    FUN_14682f6b8(&local_828,0x400,iVar2);
  }
  ImmAssociateContext(pHVar3,pHVar4);
  if ((local_20 ^ (ulonglong)auStack_858) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142856304 FUN_142856304 body=678 status=ok
// SIG undefined FUN_142856304(void)

undefined8 * FUN_142856304(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_878 [32];
  longlong local_858;
  longlong local_850;
  undefined8 *local_848;
  int local_83c;
  undefined8 local_838;
  longlong *local_830;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_878;
  local_838 = *param_3;
  local_830 = (longlong *)param_3[1];
  if (local_830 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_830 + 0xc) = *(int *)((longlong)local_830 + 0xc) + 1;
    UNLOCK();
  }
  local_848 = &local_838;
  FUN_145c3336c((longlong *)(param_1 + 0x60),&local_83c);
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (local_830 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_830 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_830 + 0x10))();
    }
  }
  plVar7 = (longlong *)(lVar2 + (longlong)local_83c * 0x38 + 0x18);
  puVar5 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  *puVar5 = &PTR_FUN_149ec6a90;
  puVar5[1] = &PTR_LAB_149ec6b80;
  *(undefined4 *)(puVar5 + 2) = 1;
  puVar5[3] = *param_3;
  lVar2 = param_3[1];
  puVar5[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar5[5] = 0;
  puVar5[6] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x35) = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  *(undefined4 *)(puVar5 + 10) = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  *(undefined4 *)(puVar5 + 0xf) = 0;
  if ((longlong *)*plVar7 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar7 + 0x10))();
  }
  *plVar7 = (longlong)puVar5;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))
                    (*(longlong **)(param_1 + 0x20),puVar5 + 0xc);
  if (iVar4 < 0) {
LAB_142856550:
    FUN_14682f6b8(&local_838,0x400,iVar4);
  }
  else {
    lVar2 = *plVar7;
    plVar3 = *(longlong **)(lVar2 + 0x60);
    if (plVar3 == (longlong *)0x0) goto LAB_142856550;
    local_850 = lVar2 + 0x78;
    local_858 = lVar2 + 0x68;
    iVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,*(undefined4 *)(param_1 + 0x28),0);
    if (iVar4 < 0) goto LAB_142856550;
    if (*(longlong *)(*plVar7 + 0x68) == 0) goto LAB_142856550;
    iVar4 = (**(code **)(**(longlong **)(*plVar7 + 0x60) + 0x20))();
    if (iVar4 < 0) goto LAB_142856550;
    lVar2 = *plVar7;
    puVar5 = *(undefined8 **)(lVar2 + 0x68);
    if (*(longlong **)(lVar2 + 0x70) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x70) + 0x10))();
      *(undefined8 *)(lVar2 + 0x70) = 0;
    }
    iVar4 = (**(code **)*puVar5)(puVar5,&DAT_1499d7740,(undefined8 *)(lVar2 + 0x70));
    if ((-1 < iVar4) && (plVar3 = (longlong *)*plVar7, plVar3[0xe] != 0)) {
      puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar5 = &PTR_FUN_149ecade0;
      puVar5[1] = plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      *param_2 = puVar5;
      puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      puVar6[1] = &DAT_100000001;
      *puVar6 = &PTR_LAB_149ecae10;
      puVar6[2] = puVar5;
      param_2[1] = puVar6;
      goto LAB_14285657d;
    }
    FUN_14682f6b8(&local_838,0x400,iVar4);
    iVar4 = (**(code **)(**(longlong **)(*plVar7 + 0x60) + 0x28))(*(longlong **)(*plVar7 + 0x60),1);
    if (iVar4 < 0) goto LAB_142856550;
  }
  if ((longlong *)*plVar7 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar7 + 0x10))();
    *plVar7 = 0;
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14285657d:
  if ((local_38 ^ (ulonglong)auStack_878) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428565ac FUN_1428565ac body=409 status=ok
// SIG undefined FUN_1428565ac(void)

void FUN_1428565ac(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_848 [32];
  ulonglong local_828;
  longlong *local_820;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_848;
  plVar6 = (longlong *)(param_1 + 0x60);
  uVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_828 = uVar2;
  if (plVar3 == (longlong *)0x0) {
    local_820 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar3 + 0xcU) = *(int *)((longlong)plVar3 + 0xcU) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xcU) = *(int *)((longlong)plVar3 + 0xcU) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xcU) = *(int *)((longlong)plVar3 + 0xcU) + 1;
    UNLOCK();
    local_820 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xcU) = *(int *)((longlong)plVar3 + 0xcU) + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar5 = FUN_1414f68dc(plVar6,uVar4 >> 0x10 ^ uVar4,&local_828);
  if (iVar5 == -1) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)iVar5 * 0x38 + *plVar6;
  }
  if (local_820 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_820 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_820 + 0x10))();
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  plVar3 = *(longlong **)(*(longlong *)(lVar7 + 0x18) + 0x60);
  iVar5 = (**(code **)(*plVar3 + 0x28))(plVar3,1);
  if (iVar5 < 0) {
    FUN_14682f6b8(&local_828,0x400,iVar5);
  }
  local_828 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    local_820 = (longlong *)0x0;
    FUN_145a0e4e6(plVar6);
  }
  else {
    LOCK();
    *(int *)((longlong)plVar3 + 0xcU) = *(int *)((longlong)plVar3 + 0xcU) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xcU) = *(int *)((longlong)plVar3 + 0xcU) + 1;
    UNLOCK();
    local_820 = plVar3;
    FUN_145a0e4e6(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_848) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142856746 FUN_142856746 body=583 status=ok
// SIG undefined FUN_142856746(void)

void FUN_142856746(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  BOOL BVar6;
  HWND hWnd;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_878 [40];
  undefined1 local_850 [8];
  longlong *local_848;
  longlong *local_840;
  ulonglong local_838;
  longlong *local_830;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_878;
  uVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    *(ulonglong *)(param_1 + 0x50) = uVar2;
    plVar7 = *(longlong **)(param_1 + 0x58);
    if (plVar7 == (longlong *)0x0) goto LAB_1428567e2;
    *(undefined8 *)(param_1 + 0x58) = 0;
LAB_1428567aa:
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1428567e2;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar5 = *piVar1;
    UNLOCK();
    plVar3 = plVar7;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(ulonglong *)(param_1 + 0x50) = uVar2;
    plVar7 = *(longlong **)(param_1 + 0x58);
    if (plVar3 != plVar7) {
      *(longlong **)(param_1 + 0x58) = plVar3;
      if (plVar7 == (longlong *)0x0) goto LAB_1428567e2;
      goto LAB_1428567aa;
    }
    LOCK();
    plVar7 = plVar3 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_1428567e2;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar5 = *piVar1;
    UNLOCK();
  }
  if (iVar5 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_1428567e2:
  uVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_838 = uVar2;
  if (plVar3 == (longlong *)0x0) {
    local_830 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar3 + 0xcU) = *(int *)((longlong)plVar3 + 0xcU) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xcU) = *(int *)((longlong)plVar3 + 0xcU) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xcU) = *(int *)((longlong)plVar3 + 0xcU) + 1;
    UNLOCK();
    local_830 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xcU) = *(int *)((longlong)plVar3 + 0xcU) + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar5 = FUN_1414f68dc((longlong *)(param_1 + 0x60),uVar4 >> 0x10 ^ uVar4,&local_838);
  if (iVar5 == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)iVar5 * 0x38 + *(longlong *)(param_1 + 0x60);
  }
  if (local_830 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_830 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_830 + 0x10))();
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  (**(code **)(*(longlong *)*param_2 + 0x58))((longlong *)*param_2,&local_848);
  if (local_848 == (longlong *)0x0) {
    *(undefined8 *)(lVar8 + 0x10) = 0;
  }
  else {
    hWnd = (HWND)(**(code **)(*local_848 + 0xc0))();
    *(HWND *)(lVar8 + 0x10) = hWnd;
    if ((hWnd != (HWND)0x0) && (BVar6 = IsWindowEnabled(hWnd), BVar6 != 0)) {
      *(undefined2 *)(lVar8 + 0x20) = 0;
      ImmAssociateContext(*(HWND *)(lVar8 + 0x10),*(HIMC *)(param_1 + 0x40));
      iVar5 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x48))
                        (*(longlong **)(param_1 + 0x20),*(undefined8 *)(lVar8 + 0x10),
                         *(undefined8 *)(*(longlong *)(lVar8 + 0x18) + 0x60),local_850);
      if (iVar5 < 0) {
        FUN_14682f6b8(&local_838,0x400,iVar5);
      }
    }
  }
  if (local_840 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_840 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_840)(local_840);
      LOCK();
      piVar1 = (int *)((longlong)local_840 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_840 + 0x10))(local_840);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_878) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14285698e FUN_14285698e body=920 status=ok
// SIG undefined FUN_14285698e(void)

void FUN_14285698e(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  HIMC pHVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  uint *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_88 [40];
  uint *local_60;
  ulonglong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar18 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_58 = uVar18;
  if (plVar3 == (longlong *)0x0) {
    local_50 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar3 + 0xcU) = *(int *)((longlong)plVar3 + 0xcU) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xcU) = *(int *)((longlong)plVar3 + 0xcU) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xcU) = *(int *)((longlong)plVar3 + 0xcU) + 1;
    UNLOCK();
    local_50 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xcU) = *(int *)((longlong)plVar3 + 0xcU) + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  uVar5 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar6 = FUN_1414f68dc((longlong *)(param_1 + 0x60),uVar5 >> 0x10 ^ uVar5,&local_58);
  if (iVar6 == -1) {
    lVar19 = 0;
  }
  else {
    lVar19 = (longlong)iVar6 * 0x38 + *(longlong *)(param_1 + 0x60);
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  if (*(HWND *)(lVar19 + 0x10) != (HWND)0x0) {
    pHVar9 = ImmGetContext(*(HWND *)(lVar19 + 0x10));
    *(undefined1 *)(lVar19 + 0x21) = 1;
    uVar20 = 1;
    uVar18 = 0;
    ImmNotifyIME(pHVar9,0x15,1,0);
    ImmReleaseContext(*(HWND *)(lVar19 + 0x10),pHVar9);
    FUN_1459bcbc4(param_1);
    puVar17 = (uint *)(param_1 + 0xc0);
    iVar6 = *(int *)(param_1 + 0xd8);
    iVar15 = 0;
    iVar7 = 0;
    if (iVar6 != 0) {
      puVar10 = *(uint **)(param_1 + 0xd0);
      if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
        puVar10 = puVar17;
      }
      uVar5 = *puVar10;
      if (uVar5 == 0) {
        iVar7 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar7 = iVar6 + -1;
        }
        uVar18 = 0;
        uVar20 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar20 = uVar18;
        }
        iVar15 = 0;
        do {
          if (uVar20 == uVar18) goto LAB_142856a8e;
          iVar15 = iVar15 + 0x20;
          uVar5 = puVar10[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar5 == 0);
      }
      else {
        uVar18 = 0;
      }
      uVar20 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar20 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar7 = (iVar15 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if (iVar6 <= iVar7) {
        iVar7 = iVar6;
      }
    }
    if (iVar7 != iVar6) {
      uVar5 = 0xffffffff;
      local_60 = puVar17;
      do {
        lVar11 = *(longlong *)(param_1 + 0xb0);
        plVar3 = *(longlong **)(lVar11 + 8 + (longlong)iVar7 * 0x18);
        if (plVar3 != (longlong *)0x0) {
          iVar8 = (int)plVar3[1];
          do {
            if (iVar8 == 0) goto LAB_142856c5f;
            LOCK();
            iVar12 = (int)plVar3[1];
            bVar21 = iVar8 == iVar12;
            if (bVar21) {
              *(int *)(plVar3 + 1) = iVar8 + 1;
              iVar12 = iVar8;
            }
            iVar8 = iVar12;
            UNLOCK();
          } while (!bVar21);
          plVar4 = *(longlong **)(lVar11 + (longlong)iVar7 * 0x18);
          if ((plVar4 != (longlong *)0x0) && (lVar11 = (**(code **)(*plVar4 + 0xc0))(), lVar11 != 0)
             ) {
            (**(code **)(**(longlong **)(param_1 + 0x20) + 0x48))
                      (*(longlong **)(param_1 + 0x20),lVar11,*(undefined8 *)(param_1 + 0x30),
                       &local_58);
            ImmAssociateContext(*(HWND *)(lVar19 + 0x10),(HIMC)0x0);
          }
          LOCK();
          plVar4 = plVar3 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          puVar17 = local_60;
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            puVar17 = local_60;
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
              puVar17 = local_60;
            }
          }
        }
LAB_142856c5f:
        uVar5 = uVar5 & ~(uint)uVar20;
        puVar10 = *(uint **)(param_1 + 0xd0);
        if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
          puVar10 = puVar17;
        }
        iVar8 = *(int *)(param_1 + 0xd8);
        iVar7 = (int)uVar18;
        lVar11 = (longlong)iVar7;
        uVar14 = puVar10[lVar11] & uVar5;
        if (uVar14 == 0) {
          iVar12 = iVar8 + 0x1e;
          if (-1 < iVar8 + -1) {
            iVar12 = iVar8 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar13 = iVar12;
          if (iVar12 < iVar7) {
            iVar13 = iVar7;
          }
          if (iVar7 < iVar12) {
            lVar16 = 0;
            do {
              uVar14 = puVar10[lVar11 + lVar16 + 1];
              if (uVar14 != 0) {
                uVar18 = (ulonglong)(iVar7 + (int)lVar16 + 1);
                uVar5 = 0xffffffff;
                goto LAB_142856cd9;
              }
              iVar15 = iVar15 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar13 - lVar11 != lVar16);
            uVar5 = 0xffffffff;
            iVar7 = iVar13;
          }
          uVar18 = (ulonglong)(iVar7 + 1);
          puVar17 = local_60;
          iVar7 = iVar8;
        }
        else {
LAB_142856cd9:
          uVar20 = (ulonglong)(-uVar14 & uVar14);
          uVar2 = uVar20 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar7 = (iVar15 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          if (iVar8 <= iVar7) {
            iVar7 = iVar8;
          }
        }
      } while (iVar7 != iVar6);
    }
  }
LAB_142856a8e:
  *(undefined8 *)(param_1 + 0x50) = 0;
  plVar3 = *(longlong **)(param_1 + 0x58);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142856d28 FUN_142856d28 body=1181 status=ok
// SIG undefined FUN_142856d28(void)

LRESULT FUN_142856d28(longlong param_1,HWND param_2,UINT param_3,WPARAM param_4,HKL param_5)

{
  int *piVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  DWORD DVar5;
  uint uVar6;
  int iVar7;
  LONG LVar8;
  LRESULT LVar9;
  HIMC pHVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_a8 [40];
  longlong local_80;
  int local_78;
  undefined4 uStack_74;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  ulonglong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 8) != 1) goto switchD_142856d8c_caseD_283;
  if ((int)param_3 < 0x10f) {
    if (param_3 - 0x50 < 2) {
      DVar5 = ImmGetProperty(param_5,4);
      *(DWORD *)(param_1 + 0x48) = DVar5;
      goto switchD_142856d8c_caseD_283;
    }
    if (param_3 == 0x10d) {
      if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_14692a9b8(param_1);
      }
      param_3 = 0x10d;
    }
    else {
      if (param_3 != 0x10e) goto switchD_142856d8c_caseD_283;
      if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_14692ab24(param_1);
      }
      param_3 = 0x10e;
    }
  }
  else {
    uVar12 = (uint)param_5;
    switch(param_3) {
    case 0x281:
      if (((param_4 != 0) && (*(longlong *)(param_1 + 0x50) != 0)) &&
         ((*(uint *)(param_1 + 0x48) & 0x30000) == 0x10000)) {
        param_5 = (HKL)(ulonglong)(uVar12 & 0x7fffffff);
      }
      param_3 = 0x281;
      break;
    case 0x282:
      param_3 = 0x282;
      break;
    case 0x283:
    case 0x284:
    case 0x285:
    case 0x287:
switchD_142856d8c_caseD_283:
      break;
    case 0x286:
      LVar9 = 0;
      goto LAB_142856e15;
    case 0x288:
      param_3 = 0x288;
      break;
    default:
      if (param_3 != 0x10f) goto switchD_142856d8c_caseD_283;
      uVar3 = *(ulonglong *)(param_1 + 0x50);
      if (uVar3 != 0) {
        plVar4 = *(longlong **)(param_1 + 0x58);
        local_58 = uVar3;
        if (plVar4 == (longlong *)0x0) {
          local_50 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
          UNLOCK();
          LOCK();
          *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
          UNLOCK();
          LOCK();
          *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
          UNLOCK();
          local_50 = plVar4;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
            UNLOCK();
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))();
            }
          }
        }
        uVar6 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        iVar7 = FUN_1414f68dc((longlong *)(param_1 + 0x60),uVar6 >> 0x10 ^ uVar6);
        if (iVar7 == -1) {
          lVar13 = 0;
        }
        else {
          lVar13 = (longlong)iVar7 * 0x38 + *(longlong *)(param_1 + 0x60);
        }
        if (local_50 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_50 + 0x10))();
          }
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        if (*(char *)(lVar13 + 0x20) == '\0') {
          FUN_14692a9b8(param_1);
        }
        pHVar10 = ImmGetContext(param_2);
        FUN_14692a776(param_1,pHVar10);
        if (param_5 == (HKL)0x0) {
          FUN_142856054(param_1);
        }
        else {
          if ((uVar12 >> 0xb & 1) != 0) {
            local_78 = 0;
            local_5c = 0;
            local_60 = 1;
            (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))();
            FUN_1428571c6(&local_58,pHVar10,0x800);
            (**(code **)(**(longlong **)(param_1 + 0x50) + 0x38))
                      (*(longlong **)(param_1 + 0x50),*(undefined4 *)(lVar13 + 0x24),
                       *(undefined4 *)(lVar13 + 0x28),&local_58);
            plVar4 = *(longlong **)(param_1 + 0x50);
            if (*(char *)(lVar13 + 0x21) == '\x01') {
              lVar11 = *plVar4;
              iVar7 = local_78;
            }
            else {
              iVar7 = (uint)local_50 + -1;
              if ((uint)local_50 == 0) {
                iVar7 = 0;
              }
              iVar7 = iVar7 + *(int *)(lVar13 + 0x24);
              lVar11 = *plVar4;
            }
            (**(code **)(lVar11 + 0x28))(plVar4,iVar7);
            FUN_14692ab24(param_1);
            if (local_58 != 0) {
              FUN_1400020a8();
            }
          }
          if (((ulonglong)param_5 & 8) != 0) {
            FUN_1428571c6(&local_58,pHVar10,8);
            if (((uVar12 >> 0xb & 1) == 0) && ((uint)local_50 < 2)) {
              FUN_142856054(param_1);
            }
            local_5c = 0;
            local_60 = 0;
            local_64 = 1;
            (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))
                      (*(longlong **)(param_1 + 0x50),&local_5c,&local_60);
            if (local_60 != 0) {
              plVar4 = *(longlong **)(param_1 + 0x50);
              FUN_140056680(&local_78,&DAT_149dfb77a);
              (**(code **)(*plVar4 + 0x38))(plVar4,local_5c,local_60,&local_78);
              if (CONCAT44(uStack_74,local_78) != 0) {
                FUN_1400020a8();
              }
            }
            if (*(char *)(lVar13 + 0x20) == '\0') {
              FUN_14692a9b8(param_1);
            }
            uVar2 = *(undefined4 *)(lVar13 + 0x24);
            iVar7 = (uint)local_50 + -1;
            if ((uint)local_50 == 0) {
              iVar7 = 0;
            }
            *(int *)(lVar13 + 0x28) = iVar7;
            local_80 = lVar13;
            (**(code **)(**(longlong **)(param_1 + 0x50) + 0x68))
                      (*(longlong **)(param_1 + 0x50),uVar2);
            (**(code **)(**(longlong **)(param_1 + 0x50) + 0x38))
                      (*(longlong **)(param_1 + 0x50),uVar2);
            lVar13 = local_80;
            if (local_58 != 0) {
              FUN_1400020a8();
              lVar13 = local_80;
            }
          }
          if ((uVar12 & 0x4080) == 0x80) {
            LVar8 = ImmGetCompositionStringW(pHVar10,0x80,(LPVOID)0x0,0);
            (**(code **)(**(longlong **)(param_1 + 0x50) + 0x28))
                      (*(longlong **)(param_1 + 0x50),(int)(short)LVar8 + *(int *)(lVar13 + 0x24),0,
                       1);
          }
        }
        ImmReleaseContext(param_2,pHVar10);
      }
      param_3 = 0x10f;
    }
  }
  LVar9 = DefWindowProcW(param_2,param_3,param_4,(LPARAM)param_5);
LAB_142856e15:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return LVar9;
}



// FUNCTION 1428571c6 FUN_1428571c6 body=107 status=ok
// SIG undefined FUN_1428571c6(void)

longlong * FUN_1428571c6(longlong *param_1,HIMC param_2,DWORD param_3)

{
  DWORD dwBufLen;
  
  *param_1 = 0;
  param_1[1] = 0;
  dwBufLen = ImmGetCompositionStringW(param_2,param_3,(LPVOID)0x0,0);
  FUN_1409ee492(param_1,((int)dwBufLen >> 1) + 1,1);
  ImmGetCompositionStringW(param_2,param_3,(LPVOID)*param_1,dwBufLen);
  *(undefined2 *)(*param_1 + (longlong)((int)dwBufLen >> 1) * 2) = 0;
  return param_1;
}



// FUNCTION 142857232 FUN_142857232 body=24 status=ok
// SIG undefined FUN_142857232(void)

bool FUN_142857232(longlong param_1)

{
  BOOL BVar1;
  
  BVar1 = IsIconic(*(HWND *)(param_1 + 0x28));
  return BVar1 != 0;
}



// FUNCTION 142857254 FUN_142857254 body=27 status=ok
// SIG undefined FUN_142857254(void)

bool FUN_142857254(longlong param_1)

{
  HWND pHVar1;
  
  pHVar1 = GetForegroundWindow();
  return pHVar1 == *(HWND *)(param_1 + 0x28);
}



// FUNCTION 142857270 FUN_142857270 body=25 status=ok
// SIG undefined FUN_142857270(void)

bool FUN_142857270(void)

{
  int iVar1;
  
  iVar1 = GetSystemMetrics(0x1000);
  return iVar1 == 0;
}



// FUNCTION 142857293 FUN_142857293 body=87 status=ok
// SIG undefined FUN_142857293(void)

undefined8 * FUN_142857293(undefined8 *param_1,LCID param_2)

{
  int cchData;
  
  *param_1 = 0;
  param_1[1] = 0;
  cchData = GetLocaleInfoW(param_2,2,(LPWSTR)0x0,0);
  FUN_1409ee492(param_1,cchData,1);
  GetLocaleInfoW(param_2,2,(LPWSTR)*param_1,cchData);
  return param_1;
}



// FUNCTION 1428572ea FUN_1428572ea body=58 status=ok
// SIG undefined FUN_1428572ea(void)

undefined8 * FUN_1428572ea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149ecade0;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142857366 FUN_142857366 body=92 status=ok
// SIG undefined FUN_142857366(void)

void FUN_142857366(longlong param_1,int param_2,int param_3,int param_4)

{
  longlong *plVar1;
  undefined1 auStack_38 [36];
  int local_14;
  int local_10;
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x40);
  if (plVar1 != (longlong *)0x0) {
    local_10 = param_3 + param_2;
    local_c = param_4 + param_2;
    local_14 = param_2;
    (**(code **)(*plVar1 + 0x18))(plVar1,0,&local_14);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428573fe FUN_1428573fe body=29 status=ok
// SIG undefined FUN_1428573fe(void)

undefined8 FUN_1428573fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14285741b FUN_14285741b body=594 status=ok
// SIG undefined FUN_14285741b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14285741b(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  DAT_14c967968 = 0;
  _DAT_14c967970 = 0;
  atexit((_func_5014 *)&LAB_142855c42);
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
  DAT_14c967978 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  _DAT_14c967980 = 0;
  atexit((_func_5014 *)&LAB_142855c53);
  lVar2 = 0;
  do {
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
    plVar1 = DAT_14c844840;
    *(longlong **)((longlong)&DAT_14c967990 + lVar2) = DAT_14c844840;
    if (plVar1 != (longlong *)0x0) {
      if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*plVar1 + 8))();
      }
    }
    *(undefined4 *)((longlong)&DAT_14c967998 + lVar2) = 0;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x40);
  atexit(FUN_142855c67);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c9679d0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c9679d0,4000);
  atexit((_func_5014 *)&LAB_142855c96);
  return;
}



// FUNCTION 142857670 FUN_142857670 body=691 status=ok
// SIG undefined FUN_142857670(void)

void FUN_142857670(char *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  void *pvVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  char *pcVar8;
  char cVar9;
  int iVar10;
  ulonglong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte bVar15;
  bool bVar16;
  undefined1 auStack_878 [36];
  int local_854;
  undefined8 local_850;
  undefined8 local_848 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_878;
  cVar9 = *param_1;
  if (cVar9 == '\0') {
    bVar16 = false;
  }
  else {
    do {
      pvVar3 = memchr(&DAT_149ecafe3,(int)cVar9,7);
      if (pvVar3 == (void *)0x0) goto LAB_1428576cf;
      cVar9 = param_1[1];
      param_1 = param_1 + 1;
    } while (cVar9 != '\0');
    cVar9 = '\0';
LAB_1428576cf:
    bVar16 = cVar9 == '/';
  }
  uVar11 = (ulonglong)bVar16;
  uVar4 = (ulonglong)(byte)param_1[uVar11];
  if ((0x3f < uVar4) || ((0x8000000200000001U >> (uVar4 & 0x3f) & 1) == 0)) {
    pcVar8 = param_1 + uVar11;
    pbVar14 = (byte *)(param_1 + uVar11);
    do {
      pbVar6 = pbVar14 + 1;
      pvVar3 = memchr(&DAT_149ecafe3,(int)(char)uVar4,7);
      if (pvVar3 != (void *)0x0) {
        *pbVar14 = 0;
        break;
      }
      uVar4 = (ulonglong)*pbVar6;
      pbVar14 = pbVar6;
    } while (*pbVar6 != 0);
    if (uVar11 != 0) goto LAB_142857767;
    bVar2 = *pbVar6;
    if (bVar2 != 0) {
      iVar10 = 0;
      local_850 = param_2;
LAB_1428577af:
      pbVar14 = pbVar6 + 2;
      bVar15 = bVar2;
      pbVar7 = pbVar6;
      while( true ) {
        pbVar7 = pbVar7 + 1;
        pvVar3 = memchr(&DAT_149ecafe3,(int)(char)bVar15,7);
        if (pvVar3 == (void *)0x0) break;
        bVar15 = pbVar6[1];
        pbVar6 = pbVar6 + 1;
        pbVar14 = pbVar14 + 1;
        param_2 = local_850;
        if (bVar15 == 0) goto LAB_1428578fd;
      }
      bVar2 = bVar15;
      if (bVar15 != 0x2f) {
        do {
          local_854 = iVar10;
          pbVar12 = pbVar14;
          pbVar13 = pbVar7;
          pvVar3 = memchr(&DAT_149ecafe3,(int)(char)bVar2,7);
          iVar10 = local_854;
          if ((bVar2 == 0x3d) || (pvVar3 != (void *)0x0)) {
            pbVar13[-1] = 0;
            break;
          }
          pbVar7 = pbVar13 + 1;
          pbVar14 = pbVar12 + 1;
          bVar2 = *pbVar13;
        } while (*pbVar13 != 0);
        do {
          bVar2 = *pbVar13;
          param_2 = local_850;
          if (bVar2 == 0) goto LAB_1428578fd;
          pbVar14 = pbVar12;
          if ((bVar2 == 0x22) || (bVar2 == 0x27)) goto LAB_14285785a;
          pbVar13 = pbVar13 + 1;
          pbVar12 = pbVar12 + 1;
        } while( true );
      }
      local_848[iVar10] = 0;
      local_848[(longlong)iVar10 + 1] = 0;
      FUN_142857ba1(local_850,pcVar8,local_848);
      goto LAB_142857767;
    }
    iVar10 = 0;
LAB_1428578fd:
    local_848[iVar10] = 0;
    local_848[(longlong)iVar10 + 1] = 0;
    FUN_142857ba1(param_2,pcVar8,local_848);
  }
LAB_1428576f7:
  if ((local_48 ^ (ulonglong)auStack_878) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (pbVar14 = pbVar7 + 1, bVar1 != bVar2) {
LAB_14285785a:
    pbVar7 = pbVar14;
    bVar1 = *pbVar7;
    if (bVar1 == 0) break;
  }
  if (bVar1 != 0) {
    *pbVar7 = 0;
    pbVar7 = pbVar7 + 1;
  }
  if (pbVar12 != (byte *)0x0 && pbVar6 != (byte *)0x0) {
    lVar5 = (longlong)local_854;
    local_848[lVar5] = pbVar6;
    local_854 = local_854 + 2;
    local_848[lVar5 + 1] = pbVar12;
  }
  bVar2 = *pbVar7;
  if ((bVar2 == 0) || (pbVar6 = pbVar7, iVar10 = local_854, 0xfc < local_854)) goto LAB_1428578ba;
  goto LAB_1428577af;
LAB_1428578ba:
  local_848[local_854] = 0;
  local_848[(longlong)local_854 + 1] = 0;
  FUN_142857ba1(local_850,pcVar8,local_848);
  if (bVar15 == 0x2f) {
LAB_142857767:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_878);
  }
  goto LAB_1428576f7;
}



// FUNCTION 142857942 FUN_142857942 body=468 status=ok
// SIG undefined FUN_142857942(void)

void FUN_142857942(longlong param_1,char *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  size_t sVar4;
  void *pvVar5;
  int iVar6;
  char cVar7;
  ulonglong _Size;
  longlong *plVar8;
  char *_Str;
  char cVar9;
  
  if ((*(char *)(param_1 + 0x9c62) == '\x01') && (cVar7 = *param_2, cVar7 != '\0')) {
    plVar1 = (longlong *)(param_1 + 0x9c28);
    cVar9 = '\0';
    iVar6 = 0;
    _Str = param_2;
    do {
      if (cVar9 == '\x02') {
        if (cVar7 == '}') {
          if (iVar6 < 1) {
LAB_142857af2:
            cVar9 = '\0';
          }
          else {
            iVar6 = iVar6 + 1;
            plVar8 = plVar1;
            do {
              lVar2 = *plVar8;
              sVar4 = strlen(_Str);
              if ((ulonglong)((longlong)param_2 - (longlong)_Str) <= sVar4) {
                sVar4 = (longlong)param_2 - (longlong)_Str;
              }
              pvVar5 = malloc(sVar4 + 1);
              if (pvVar5 != (void *)0x0) {
                *(undefined1 *)((longlong)pvVar5 + sVar4) = 0;
                memcpy(pvVar5,_Str,sVar4);
              }
              *(void **)(lVar2 + 8) = pvVar5;
              plVar8 = (longlong *)(lVar2 + 0x10);
              iVar6 = iVar6 + -1;
            } while (1 < iVar6);
            iVar6 = 0;
            cVar9 = '\0';
          }
        }
        else {
          cVar9 = '\x02';
          if (cVar7 == '{') {
            _Str = param_2 + 1;
          }
        }
      }
      else {
        pvVar5 = memchr(&DAT_149ecafe3,(int)cVar7,7);
        if (((pvVar5 == (void *)0x0) && (cVar7 != '{')) && (cVar7 != ',')) {
          if (cVar9 == '\0') {
            _Str = param_2;
          }
          cVar9 = '\x01';
        }
        else {
          if (cVar9 != '\x01') goto LAB_142857af2;
          if (*_Str == '.') {
            lVar2 = *plVar1;
            puVar3 = malloc(0x18);
            *plVar1 = (longlong)puVar3;
            puVar3[1] = 0;
            puVar3[2] = lVar2;
            sVar4 = strlen(_Str);
            _Size = (longlong)param_2 - (longlong)_Str;
            if (sVar4 < (ulonglong)((longlong)param_2 - (longlong)_Str)) {
              _Size = sVar4;
            }
            pvVar5 = malloc(_Size + 1);
            if (pvVar5 != (void *)0x0) {
              *(undefined1 *)((longlong)pvVar5 + _Size) = 0;
              memcpy(pvVar5,_Str,_Size);
            }
            *puVar3 = pvVar5;
            iVar6 = iVar6 + 1;
          }
          _Str = param_2 + 1;
          cVar9 = (cVar7 != ',') * '\x02';
        }
      }
      cVar7 = param_2[1];
      param_2 = param_2 + 1;
    } while (cVar7 != '\0');
  }
  return;
}



// FUNCTION 142857ba1 FUN_142857ba1 body=8397 status=ok
// SIG undefined FUN_142857ba1(void)

void FUN_142857ba1(longlong param_1,byte *param_2,longlong *param_3)

{
  longlong *plVar1;
  double dVar2;
  undefined1 auVar3 [16];
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  void *pvVar8;
  char *pcVar9;
  longlong lVar10;
  byte *pbVar11;
  uint uVar12;
  byte bVar13;
  char cVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  uint extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  uint extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_258 [36];
  float local_234;
  float local_230;
  float local_22c;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  float local_1fc;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  float fStack_1d0;
  float fStack_1cc;
  uint local_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  float local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  byte *local_188;
  longlong local_180;
  undefined1 local_178 [16];
  float local_168 [12];
  byte local_138 [72];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if (*(char *)(param_1 + 0x9c61) == '\x01') {
    if (*(char *)(param_1 + 0x9c63) != '\0') goto LAB_142859d50;
    iVar4 = strcmp((char *)param_2,"linearGradient");
    if (iVar4 == 0) {
LAB_142858fdc:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_258);
    }
    iVar4 = strcmp((char *)param_2,"radialGradient");
    if (iVar4 == 0) {
LAB_1428591db:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_258);
    }
    iVar4 = strcmp((char *)param_2,"stop");
    if (iVar4 == 0) {
LAB_1428594f2:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_258);
    }
LAB_142857c82:
    iVar4 = strcmp((char *)param_2,"style");
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 0x9c62) = 1;
    }
    goto LAB_142859d50;
  }
  uVar5 = *param_2 - 0x67;
  if (uVar5 == 0) {
    uVar5 = (uint)param_2[1];
  }
  if (uVar5 == 0) {
    iVar4 = *(int *)(param_1 + 0x9c00);
    if ((longlong)iVar4 < 0x7f) {
      *(int *)(param_1 + 0x9c00) = iVar4 + 1;
      pvVar8 = (void *)((longlong)iVar4 * 0x138 + param_1);
      memcpy((void *)((longlong)pvVar8 + 0x138),pvVar8,0x138);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_258);
  }
  iVar4 = strcmp((char *)param_2,"path");
  if (iVar4 == 0) {
    if (*(char *)(param_1 + 0x9c60) != '\0') goto LAB_142859d50;
    iVar4 = *(int *)(param_1 + 0x9c00);
    if ((longlong)iVar4 < 0x7f) {
      *(int *)(param_1 + 0x9c00) = iVar4 + 1;
      pvVar8 = (void *)((longlong)iVar4 * 0x138 + param_1);
      memcpy((void *)((longlong)pvVar8 + 0x138),pvVar8,0x138);
    }
    pbVar11 = (byte *)*param_3;
    if (pbVar11 != (byte *)0x0) {
      param_3 = param_3 + 1;
      pcVar9 = (char *)0x0;
      do {
        uVar5 = *pbVar11 - 100;
        if (uVar5 == 0) {
          uVar5 = (uint)pbVar11[1];
        }
        if (uVar5 == 0) {
          pcVar9 = (char *)*param_3;
        }
        else {
          local_180 = *param_3;
          local_188 = pbVar11;
          local_178 = ZEXT816(0);
          FUN_14285b7a6(param_1,&local_188);
        }
        pbVar11 = (byte *)param_3[1];
        param_3 = param_3 + 2;
      } while (pbVar11 != (byte *)0x0);
      if ((pcVar9 != (char *)0x0) && (*(undefined4 *)(param_1 + 0x9c10) = 0, *pcVar9 != '\0')) {
        uVar16 = 0;
        iVar6 = 0;
        iVar4 = 0;
        fVar32 = 0.0;
        fVar30 = 0.0;
        fVar31 = 0.0;
        fVar36 = 0.0;
        do {
          pcVar9 = (char *)FUN_14285cc7d(pcVar9,local_138);
          bVar13 = local_138[0];
          uVar5 = (uint)(char)local_138[0];
          if (local_138[0] == 0) break;
          pvVar8 = memchr("0123456789+-.eE",uVar5,0x10);
          if (pvVar8 == (void *)0x0) {
            iVar6 = FUN_14285cd20(bVar13);
            bVar13 = bVar13 & 0xdf;
            if (bVar13 == 0x5a) {
              if (0 < *(int *)(param_1 + 0x9c10)) {
                fVar36 = **(float **)(param_1 + 0x9c08);
                fVar31 = (*(float **)(param_1 + 0x9c08))[1];
                FUN_14285cd74(param_1,1);
                fVar32 = fVar31;
                fVar30 = fVar36;
              }
              *(undefined4 *)(param_1 + 0x9c10) = 0;
              FUN_14285d42e(param_1);
            }
            else {
              if (bVar13 != 0x4d) {
                uVar16 = (ulonglong)uVar5;
                iVar17 = iVar4;
                goto LAB_142858689;
              }
              if (0 < *(int *)(param_1 + 0x9c10)) {
                FUN_14285cd74(param_1,0);
              }
              *(undefined4 *)(param_1 + 0x9c10) = 0;
            }
            uVar16 = (ulonglong)uVar5;
            iVar17 = 0;
            goto LAB_142858689;
          }
          if (iVar4 < 10) {
            dVar2 = (double)FUN_14285c7e1(local_138);
            lVar10 = (longlong)iVar4;
            iVar4 = iVar4 + 1;
            local_168[lVar10] = (float)dVar2;
          }
          fVar22 = local_168[1];
          fVar20 = local_168[0];
          iVar17 = iVar4;
          if (iVar4 < iVar6) goto LAB_142858689;
          cVar14 = (char)uVar16;
          uVar5 = (uint)uVar16 & 0xff;
          switch(uVar5) {
          case 0x41:
switchD_1428583a0_caseD_61:
            fVar30 = local_168[5];
            fVar32 = local_168[6];
            if (cVar14 == 'a') {
              fVar30 = local_168[5] + fVar36;
              fVar32 = local_168[6] + fVar31;
            }
            fVar35 = fVar36 - fVar30;
            fVar34 = fVar31 - fVar32;
            local_234 = fVar32;
            local_230 = fVar30;
            if (((SQRT(fVar35 * fVar35 + fVar34 * fVar34) < 1e-06) ||
                (fVar21 = ABS(local_168[0]), fVar21 < 1e-06)) ||
               (fVar33 = ABS(local_168[1]), fVar33 < 1e-06)) {
              FUN_14285d34d(param_1,fVar30);
            }
            else {
              local_218 = ZEXT416((uint)local_168[3]);
              local_228 = ZEXT416((uint)local_168[4]);
              fVar32 = (local_168[2] / 180.0) * 3.1415927;
              fVar30 = sinf(fVar32);
              local_22c = cosf(fVar32);
              fVar32 = fVar34 * fVar30 * 0.5 + fVar35 * local_22c * 0.5;
              local_1f8._4_4_ = extraout_XMM0_Db;
              local_1f8._0_4_ = fVar30;
              local_1f8._8_4_ = extraout_XMM0_Dc;
              local_1f8._12_4_ = extraout_XMM0_Dd;
              fVar34 = fVar34 * local_22c * 0.5 - fVar35 * fVar30 * 0.5;
              fVar30 = (fVar34 * fVar34) / (fVar22 * fVar22) + (fVar32 * fVar32) / (fVar20 * fVar20)
              ;
              if (1.0 < fVar30) {
                fVar21 = fVar21 * SQRT(fVar30);
              }
              fVar30 = (float)(~-(uint)(1.0 < fVar30) & (uint)fVar33 |
                              (uint)(SQRT(fVar30) * fVar33) & -(uint)(1.0 < fVar30));
              local_1e8 = ZEXT416((uint)fVar30);
              fVar22 = fVar32 * fVar32 * fVar30 * fVar30;
              fVar35 = fVar34 * fVar34 * fVar21 * fVar21;
              fVar33 = fVar35 + fVar22;
              fVar20 = 0.0;
              if (0.0 < fVar33) {
                fVar22 = (fVar21 * fVar21 * fVar30 * fVar30 - fVar35) - fVar22;
                if (0.0 <= fVar22) {
                  fVar20 = fVar22;
                }
                fVar20 = fVar20 / fVar33;
                if (fVar20 < 0.0) {
                  fVar20 = sqrtf(fVar20);
                }
                else {
                  fVar20 = SQRT(fVar20);
                }
              }
              local_1d8 = (double)ABS((float)local_228._0_4_);
              if (ABS((float)local_218._0_4_) <= 1e-06 != 1e-06 < local_1d8) {
                fVar20 = -fVar20;
              }
              fVar35 = (fVar21 * fVar20 * fVar34) / (float)local_1e8._0_4_;
              fVar30 = (-(float)local_1e8._0_4_ * fVar20 * fVar32) / fVar21;
              fVar37 = (fVar32 - fVar35) / fVar21;
              fVar33 = (fVar34 - fVar30) / (float)local_1e8._0_4_;
              fVar22 = (-fVar32 - fVar35) / fVar21;
              local_228._0_8_ = CONCAT44(local_1e8._4_4_,fVar30) ^ 0x8000000000000000;
              local_228._8_4_ = local_1e8._8_4_ ^ 0x80000000;
              local_228._12_4_ = local_1e8._12_4_ ^ 0x80000000;
              fVar34 = (-fVar34 - fVar30) / (float)local_1e8._0_4_;
              fVar20 = SQRT(fVar37 * fVar37 + fVar33 * fVar33);
              fVar32 = (fVar33 * 0.0 + fVar37) / fVar20;
              fVar30 = -1.0;
              if (-1.0 <= fVar32) {
                fVar30 = fVar32;
              }
              fVar32 = 1.0;
              if (fVar30 <= 1.0) {
                fVar32 = fVar30;
              }
              local_198 = ZEXT416((uint)fVar21);
              local_218._0_4_ = acosf(fVar32);
              local_218._4_4_ = extraout_XMM0_Db_00;
              local_218._8_4_ = extraout_XMM0_Dc_00;
              local_218._12_4_ = extraout_XMM0_Dd_00;
              fVar32 = (fVar37 * fVar22 + fVar33 * fVar34) /
                       (SQRT(fVar22 * fVar22 + fVar34 * fVar34) * fVar20);
              fVar30 = -1.0;
              if (-1.0 <= fVar32) {
                fVar30 = fVar32;
              }
              fVar32 = 1.0;
              if (fVar30 <= 1.0) {
                fVar32 = fVar30;
              }
              fVar30 = acosf(fVar32);
              uVar5 = -(uint)(fVar34 * fVar37 < fVar22 * fVar33);
              auVar27._0_8_ =
                   (CONCAT44(extraout_XMM0_Db_01,(uint)-fVar30 & uVar5) ^ 0x8000000000000000) &
                   0x80000000ffffffff;
              auVar27._8_4_ = (extraout_XMM0_Dc_01 ^ 0x80000000) & 0x80000000;
              auVar27._12_4_ = (extraout_XMM0_Dd_01 ^ 0x80000000) & 0x80000000;
              auVar26._8_4_ = extraout_XMM0_Dc_01 & 0x7fffffff;
              auVar26._0_8_ =
                   CONCAT44(extraout_XMM0_Db_01,~uVar5 & (uint)fVar30) & 0x7fffffffffffffff;
              auVar26._12_4_ = extraout_XMM0_Dd_01 & 0x7fffffff;
              auVar28 = auVar27 | auVar26;
              fVar30 = auVar28._0_4_;
              if ((1e-06 < local_1d8) || (fVar30 <= 0.0)) {
                if (1e-06 < local_1d8) {
                  auVar3._4_4_ = auVar28._4_4_;
                  auVar3._0_4_ = (uint)(fVar30 + 6.2831855) & -(uint)(fVar30 < 0.0);
                  auVar3._8_4_ = auVar28._8_4_;
                  auVar3._12_4_ = auVar28._12_4_;
                  auVar28 = ZEXT416(~-(uint)(fVar30 < 0.0) & (uint)fVar30) | auVar3;
                }
              }
              else {
                auVar28._0_4_ = fVar30 + -6.2831855;
              }
              fVar34 = auVar28._0_4_;
              fVar30 = ABS(fVar34) / 1.5707964 + 1.0;
              iVar4 = (int)fVar30;
              fVar30 = (float)(int)fVar30;
              fStack_1d0 = (float)(int)ABS(auVar28._8_4_);
              fStack_1cc = (float)(int)ABS(auVar28._12_4_);
              local_1d8 = (double)CONCAT44((float)(int)ABS(auVar28._4_4_),fVar30);
              fVar30 = (fVar34 / fVar30) * 0.5;
              fVar20 = cosf(fVar30);
              fVar22 = sinf(fVar30);
              fVar32 = local_234;
              fVar30 = local_230;
              if (-1 < iVar4) {
                local_1b8 = -(float)local_1f8._0_4_;
                uStack_1b4 = local_1f8._4_4_ ^ 0x80000000;
                uStack_1b0 = local_1f8._8_4_ ^ 0x80000000;
                uStack_1ac = local_1f8._12_4_ ^ 0x80000000;
                local_1fc = local_1b8 * (float)local_228._0_4_ +
                            local_22c * fVar35 + (fVar36 + local_230) * 0.5;
                local_228._0_4_ =
                     (float)local_228._0_4_ * local_22c +
                     fVar35 * (float)local_1f8._0_4_ + (fVar31 + local_234) * 0.5;
                uVar5 = -(uint)(fVar33 < fVar37 * 0.0);
                local_218._0_4_ = (local_218._0_4_ ^ 0x80000000) & uVar5 | ~uVar5 & local_218._0_4_;
                fVar22 = ((1.0 - fVar20) * 1.3333334) / fVar22;
                uStack_1c4 = (uint)auVar28._4_4_ & 0x80000000;
                uStack_1c0 = (uint)auVar28._8_4_ & 0x80000000;
                uStack_1bc = (uint)auVar28._12_4_ & 0x80000000;
                local_1c8 = ~-(uint)(fVar34 < 0.0) & (uint)ABS(fVar22) |
                            ((uint)fVar22 | 0x80000000) & -(uint)(fVar34 < 0.0);
                iVar17 = 0;
                local_1a8._0_4_ = fVar34;
                do {
                  local_1a8 = auVar28;
                  fVar36 = ((float)iVar17 / (float)local_1d8) * (float)local_1a8._0_4_;
                  fVar36 = fVar36 + (float)local_218._0_4_;
                  cosf(fVar36);
                  sinf(fVar36);
                  if (iVar17 != 0) {
                    FUN_14285d42e(param_1);
                    FUN_14285d42e(param_1);
                    FUN_14285d42e(param_1);
                  }
                  iVar17 = iVar17 + 1;
                  fVar32 = local_234;
                  fVar30 = local_230;
                  auVar28 = local_1a8;
                } while (iVar4 + 1 != iVar17);
              }
            }
            fVar31 = fVar32;
            fVar36 = fVar30;
            iVar17 = 0;
            break;
          case 0x42:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x49:
          case 0x4a:
          case 0x4b:
          case 0x4e:
          case 0x4f:
          case 0x50:
          case 0x52:
          case 0x55:
switchD_1428583a0_caseD_62:
            iVar17 = 0;
            if (1 < iVar4) {
              fVar30 = local_168[iVar4 - 2];
              fVar32 = local_168[iVar4 - 1];
              goto LAB_142858ab2;
            }
            break;
          case 0x43:
            fVar32 = local_168[3];
            fVar30 = local_168[2];
            fVar31 = local_168[5];
            fVar36 = local_168[4];
LAB_1428587d8:
            FUN_14285d42e(param_1);
            FUN_14285d42e(param_1);
            FUN_14285d42e(param_1);
            goto LAB_142858984;
          case 0x48:
switchD_1428583a0_caseD_68:
            fVar30 = local_168[0];
            if (cVar14 == 'h') {
              fVar30 = local_168[0] + fVar36;
            }
            FUN_14285d34d(param_1);
            fVar32 = fVar31;
            fVar36 = fVar30;
            iVar17 = 0;
            break;
          case 0x4c:
            fVar32 = local_168[1];
            fVar30 = local_168[0];
LAB_142858974:
            FUN_14285d34d(param_1);
            fVar31 = fVar32;
            fVar36 = fVar30;
LAB_142858984:
            iVar17 = 0;
            break;
          case 0x4d:
switchD_1428583a0_caseD_6d:
            fVar32 = local_168[1];
            fVar30 = local_168[0];
            if (cVar14 == 'm') {
              fVar30 = local_168[0] + fVar36;
              fVar32 = local_168[1] + fVar31;
            }
            if (*(int *)(param_1 + 0x9c10) < 1) {
              FUN_14285d42e(param_1);
            }
            else {
              *(float *)(*(longlong *)(param_1 + 0x9c08) +
                        (ulonglong)(*(int *)(param_1 + 0x9c10) * 2 - 2) * 4) = fVar30;
              *(float *)(*(longlong *)(param_1 + 0x9c08) +
                        (longlong)(*(int *)(param_1 + 0x9c10) * 2 + -1) * 4) = fVar32;
            }
            uVar16 = CONCAT71((int7)(uVar16 >> 8),(cVar14 == 'm') << 5) | 0x4c;
            iVar6 = FUN_14285cd20(uVar16);
            goto LAB_142858ab2;
          case 0x51:
            auVar23 = ZEXT416((uint)local_168[0]);
            auVar26 = ZEXT416((uint)local_168[1]);
            fVar20 = local_168[3];
            fVar22 = local_168[2];
            goto LAB_142858a01;
          case 0x53:
            fVar30 = local_168[0];
            fVar32 = local_168[1];
            fVar36 = local_168[2];
            fVar31 = local_168[3];
LAB_1428588fe:
            FUN_14285d42e(param_1);
            FUN_14285d42e(param_1);
            FUN_14285d42e(param_1);
            iVar17 = 0;
            break;
          case 0x54:
            fVar20 = local_168[1];
            fVar22 = local_168[0];
LAB_1428589a9:
            auVar23 = ZEXT416((uint)((fVar36 + fVar36) - fVar30));
            auVar26 = ZEXT416((uint)((fVar31 + fVar31) - fVar32));
LAB_142858a01:
            fVar30 = auVar23._0_4_;
            auVar23._0_4_ = (fVar30 - fVar36) * 0.6666667 + fVar36;
            auVar24._4_12_ = auVar26._4_12_;
            auVar24._0_4_ = (auVar26._0_4_ - fVar31) * 0.6666667 + fVar31;
            FUN_14285d42e(param_1,auVar23._0_8_,auVar24._0_8_);
            FUN_14285d42e(param_1);
            FUN_14285d42e(param_1);
            fVar32 = auVar26._0_4_;
            fVar31 = fVar20;
            fVar36 = fVar22;
            iVar17 = 0;
            break;
          case 0x56:
switchD_1428583a0_caseD_76:
            fVar32 = local_168[0];
            if (cVar14 == 'v') {
              fVar32 = local_168[0] + fVar31;
            }
            FUN_14285d34d(param_1);
            fVar30 = fVar36;
LAB_142858ab2:
            fVar31 = fVar32;
            fVar36 = fVar30;
            iVar17 = 0;
            break;
          default:
            switch(uVar5) {
            case 0x61:
              goto switchD_1428583a0_caseD_61;
            default:
              goto switchD_1428583a0_caseD_62;
            case 99:
              fVar32 = local_168[3] + fVar31;
              fVar30 = local_168[2] + fVar36;
              fVar31 = fVar31 + local_168[5];
              fVar36 = fVar36 + local_168[4];
              goto LAB_1428587d8;
            case 0x68:
              goto switchD_1428583a0_caseD_68;
            case 0x6c:
              fVar32 = fVar31 + local_168[1];
              fVar30 = fVar36 + local_168[0];
              goto LAB_142858974;
            case 0x6d:
              goto switchD_1428583a0_caseD_6d;
            case 0x71:
              auVar23 = ZEXT416((uint)(local_168[0] + fVar36));
              auVar26 = ZEXT416((uint)(local_168[1] + fVar31));
              fVar20 = local_168[3] + fVar31;
              fVar22 = local_168[2] + fVar36;
              goto LAB_142858a01;
            case 0x73:
              fVar30 = local_168[0] + fVar36;
              fVar32 = local_168[1] + fVar31;
              fVar36 = local_168[2] + fVar36;
              fVar31 = local_168[3] + fVar31;
              goto LAB_1428588fe;
            case 0x74:
              fVar20 = local_168[1] + fVar31;
              fVar22 = local_168[0] + fVar36;
              goto LAB_1428589a9;
            case 0x76:
              goto switchD_1428583a0_caseD_76;
            }
          }
LAB_142858689:
          iVar4 = iVar17;
        } while (*pcVar9 != '\0');
        if (*(int *)(param_1 + 0x9c10) != 0) goto LAB_142859d2c;
      }
    }
LAB_142859d36:
    FUN_14285cfc8(param_1);
  }
  else {
    iVar4 = strcmp((char *)param_2,"rect");
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x9c00);
      if ((longlong)iVar4 < 0x7f) {
        *(int *)(param_1 + 0x9c00) = iVar4 + 1;
        pvVar8 = (void *)((longlong)iVar4 * 0x138 + param_1);
        memcpy((void *)((longlong)pvVar8 + 0x138),pvVar8,0x138);
      }
      lVar10 = *param_3;
      if (lVar10 == 0) {
        fVar30 = -1.0;
        auVar29 = ZEXT816(0);
        uVar15 = 0;
        uVar19 = 0;
        uVar25 = 0;
        fVar36 = 0.0;
        fVar31 = 0.0;
        fVar32 = -1.0;
      }
      else {
        fVar31 = 0.0;
        fVar32 = -1.0;
        fVar30 = -1.0;
        fVar36 = 0.0;
        uVar15 = 0;
        uVar19 = 0;
        uVar25 = 0;
        auVar29 = ZEXT816(0);
        do {
          iVar4 = FUN_14285b98b(param_1,lVar10,param_3[1]);
          if (iVar4 == 0) {
            pbVar11 = (byte *)*param_3;
            bVar13 = *pbVar11;
            uVar5 = bVar13 - 0x78;
            if (uVar5 == 0) {
              uVar5 = (uint)pbVar11[1];
            }
            if (uVar5 == 0) {
              auVar29._0_8_ = FUN_14285c744(param_1,param_3[1]);
              auVar29._8_4_ = extraout_XMM0_Dc_02;
              auVar29._12_4_ = extraout_XMM0_Dd_02;
              pbVar11 = (byte *)*param_3;
              bVar13 = *pbVar11;
            }
            uVar5 = bVar13 - 0x79;
            if (uVar5 == 0) {
              uVar5 = (uint)pbVar11[1];
            }
            if (uVar5 == 0) {
              uVar15 = FUN_14285c744(param_1,param_3[1]);
              pbVar11 = (byte *)*param_3;
              uVar19 = extraout_XMM0_Dc_03;
              uVar25 = extraout_XMM0_Dd_03;
            }
            iVar4 = strcmp((char *)pbVar11,"width");
            if (iVar4 == 0) {
              fVar36 = (float)FUN_14285c744(param_1,param_3[1]);
              pbVar11 = (byte *)*param_3;
            }
            iVar4 = strcmp((char *)pbVar11,"height");
            if (iVar4 == 0) {
              fVar31 = (float)FUN_14285c744(param_1,param_3[1]);
              pbVar11 = (byte *)*param_3;
            }
            bVar13 = *pbVar11;
            uVar5 = bVar13 - 0x72;
            if ((uVar5 == 0) && (uVar5 = pbVar11[1] - 0x78, uVar5 == 0)) {
              uVar5 = (uint)pbVar11[2];
            }
            if (uVar5 == 0) {
              fVar30 = (float)FUN_14285c744(param_1,param_3[1]);
              fVar30 = ABS(fVar30);
              pbVar11 = (byte *)*param_3;
              bVar13 = *pbVar11;
            }
            uVar5 = bVar13 - 0x72;
            if ((uVar5 == 0) && (uVar5 = pbVar11[1] - 0x79, uVar5 == 0)) {
              uVar5 = (uint)pbVar11[2];
            }
            if (uVar5 == 0) {
              fVar32 = (float)FUN_14285c744(param_1,param_3[1]);
              fVar32 = ABS(fVar32);
            }
          }
          lVar10 = param_3[2];
          param_3 = param_3 + 2;
        } while (lVar10 != 0);
      }
      fVar20 = fVar32;
      if (fVar32 <= 0.0 || 0.0 <= fVar30) {
        fVar20 = fVar30;
      }
      fVar30 = fVar20;
      if (fVar20 <= 0.0 || 0.0 <= fVar32) {
        fVar30 = fVar32;
      }
      if ((fVar36 != 0.0) || (NAN(fVar36))) {
        if ((fVar31 != 0.0) || (NAN(fVar31))) {
          fVar32 = 0.0;
          if (0.0 <= fVar20) {
            fVar32 = fVar20;
          }
          fVar20 = fVar36 * 0.5;
          if (fVar32 <= fVar36 * 0.5) {
            fVar20 = fVar32;
          }
          *(undefined4 *)(param_1 + 0x9c10) = 0;
          if (1e-05 <= fVar20) {
            fVar36 = 0.0;
            if (0.0 <= fVar30) {
              fVar36 = fVar30;
            }
            fVar30 = fVar31 * 0.5;
            if (fVar36 <= fVar31 * 0.5) {
              fVar30 = fVar36;
            }
            if (0.0001 <= fVar30) {
              local_228._0_4_ = auVar29._0_4_ + fVar20;
              FUN_14285d42e(param_1);
              FUN_14285d34d(param_1);
              local_22c = (float)uVar15 + fVar30;
              local_218._0_4_ = fVar30 * 0.44771522 + (float)uVar15;
              local_1e8._8_4_ = uVar19;
              local_1e8._0_8_ = uVar15;
              local_1e8._12_4_ = uVar25;
              local_1f8 = auVar29;
              FUN_14285d42e(param_1);
              FUN_14285d42e(param_1);
              FUN_14285d42e(param_1);
              FUN_14285d34d(param_1);
              FUN_14285d42e(param_1);
              FUN_14285d42e(param_1);
              FUN_14285d42e(param_1);
              FUN_14285d34d(param_1);
              FUN_14285d42e(param_1);
              FUN_14285d42e(param_1);
              FUN_14285d42e(param_1);
              FUN_14285d34d(param_1);
              FUN_14285d42e(param_1);
              FUN_14285d42e(param_1);
              goto LAB_142859a98;
            }
          }
          FUN_14285d42e(param_1);
          FUN_14285d34d(param_1);
          FUN_14285d34d(param_1);
          FUN_14285d34d(param_1);
LAB_142859ae8:
          uVar15 = 1;
LAB_142859d31:
          FUN_14285cd74(param_1,uVar15);
          goto LAB_142859d36;
        }
      }
    }
    else {
      iVar4 = strcmp((char *)param_2,"circle");
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_1 + 0x9c00);
        if ((longlong)iVar4 < 0x7f) {
          *(int *)(param_1 + 0x9c00) = iVar4 + 1;
          pvVar8 = (void *)((longlong)iVar4 * 0x138 + param_1);
          memcpy((void *)((longlong)pvVar8 + 0x138),pvVar8,0x138);
        }
        lVar10 = *param_3;
        if (lVar10 != 0) {
          fVar36 = 0.0;
          do {
            iVar4 = FUN_14285b98b(param_1,lVar10,param_3[1]);
            if (iVar4 == 0) {
              pbVar11 = (byte *)*param_3;
              bVar13 = *pbVar11;
              uVar5 = bVar13 - 99;
              if ((uVar5 == 0) && (uVar5 = pbVar11[1] - 0x78, uVar5 == 0)) {
                uVar5 = (uint)pbVar11[2];
              }
              if (uVar5 == 0) {
                FUN_14285c744(param_1,param_3[1]);
                pbVar11 = (byte *)*param_3;
                bVar13 = *pbVar11;
              }
              uVar5 = (uint)bVar13;
              uVar12 = uVar5 - 99;
              if ((uVar12 == 0) && (uVar12 = pbVar11[1] - 0x79, uVar12 == 0)) {
                uVar12 = (uint)pbVar11[2];
              }
              if (uVar12 == 0) {
                FUN_14285c744(param_1,param_3[1]);
                pbVar11 = (byte *)*param_3;
                uVar5 = (uint)*pbVar11;
              }
              uVar5 = uVar5 - 0x72;
              if (uVar5 == 0) {
                uVar5 = (uint)pbVar11[1];
              }
              if (uVar5 == 0) {
                fVar36 = (float)FUN_14285c744(param_1,param_3[1]);
                fVar36 = ABS(fVar36);
              }
            }
            lVar10 = param_3[2];
            param_3 = param_3 + 2;
          } while (lVar10 != 0);
          if (0.0 < fVar36) {
            *(undefined4 *)(param_1 + 0x9c10) = 0;
            FUN_14285d42e(param_1);
            FUN_14285d42e(param_1);
            FUN_14285d42e(param_1);
            FUN_14285d42e(param_1);
            FUN_14285d42e(param_1);
            FUN_14285d42e(param_1);
            FUN_14285d42e(param_1);
            FUN_14285d42e(param_1);
            FUN_14285d42e(param_1);
            FUN_14285d42e(param_1);
            FUN_14285d42e(param_1);
            FUN_14285d42e(param_1);
LAB_142859a98:
            FUN_14285d42e(param_1);
            goto LAB_142859ae8;
          }
        }
      }
      else {
        iVar4 = strcmp((char *)param_2,"ellipse");
        if (iVar4 == 0) {
          iVar4 = *(int *)(param_1 + 0x9c00);
          if ((longlong)iVar4 < 0x7f) {
            *(int *)(param_1 + 0x9c00) = iVar4 + 1;
            pvVar8 = (void *)((longlong)iVar4 * 0x138 + param_1);
            memcpy((void *)((longlong)pvVar8 + 0x138),pvVar8,0x138);
          }
          lVar10 = *param_3;
          if (lVar10 != 0) {
            fVar30 = 0.0;
            fVar31 = 0.0;
            fVar36 = 0.0;
            do {
              iVar4 = FUN_14285b98b(param_1,lVar10,param_3[1]);
              if (iVar4 == 0) {
                pbVar11 = (byte *)*param_3;
                bVar13 = *pbVar11;
                uVar5 = bVar13 - 99;
                if ((uVar5 == 0) && (uVar5 = pbVar11[1] - 0x78, uVar5 == 0)) {
                  uVar5 = (uint)pbVar11[2];
                }
                if (uVar5 == 0) {
                  fVar36 = (float)FUN_14285c744(param_1,param_3[1]);
                  pbVar11 = (byte *)*param_3;
                  bVar13 = *pbVar11;
                }
                uVar5 = (uint)bVar13;
                uVar12 = uVar5 - 99;
                if ((uVar12 == 0) && (uVar12 = pbVar11[1] - 0x79, uVar12 == 0)) {
                  uVar12 = (uint)pbVar11[2];
                }
                if (uVar12 == 0) {
                  FUN_14285c744(param_1,param_3[1]);
                  pbVar11 = (byte *)*param_3;
                  uVar5 = (uint)*pbVar11;
                }
                uVar12 = uVar5 - 0x72;
                if ((uVar12 == 0) && (uVar12 = pbVar11[1] - 0x78, uVar12 == 0)) {
                  uVar12 = (uint)pbVar11[2];
                }
                if (uVar12 == 0) {
                  fVar31 = (float)FUN_14285c744(param_1,param_3[1]);
                  fVar31 = ABS(fVar31);
                  pbVar11 = (byte *)*param_3;
                  uVar5 = (uint)*pbVar11;
                }
                uVar5 = uVar5 - 0x72;
                if ((uVar5 == 0) && (uVar5 = pbVar11[1] - 0x79, uVar5 == 0)) {
                  uVar5 = (uint)pbVar11[2];
                }
                if (uVar5 == 0) {
                  fVar30 = (float)FUN_14285c744(param_1,param_3[1]);
                  fVar30 = ABS(fVar30);
                }
              }
              lVar10 = param_3[2];
              param_3 = param_3 + 2;
            } while (lVar10 != 0);
            if ((0.0 < fVar31) && (0.0 < fVar30)) {
              *(undefined4 *)(param_1 + 0x9c10) = 0;
              FUN_14285d42e(param_1);
              local_228._0_4_ = fVar31 * 0.5522848 + fVar36;
              FUN_14285d42e(param_1);
              FUN_14285d42e(param_1);
              FUN_14285d42e(param_1);
              FUN_14285d42e(param_1);
              FUN_14285d42e(param_1);
              FUN_14285d42e(param_1);
              FUN_14285d42e(param_1);
              FUN_14285d42e(param_1);
              FUN_14285d42e(param_1);
              FUN_14285d42e(param_1);
              FUN_14285d42e(param_1);
              goto LAB_142859a98;
            }
          }
        }
        else {
          iVar4 = strcmp((char *)param_2,"line");
          if (iVar4 == 0) {
            iVar4 = *(int *)(param_1 + 0x9c00);
            if ((longlong)iVar4 < 0x7f) {
              *(int *)(param_1 + 0x9c00) = iVar4 + 1;
              pvVar8 = (void *)((longlong)iVar4 * 0x138 + param_1);
              memcpy((void *)((longlong)pvVar8 + 0x138),pvVar8,0x138);
            }
            lVar10 = *param_3;
            while (lVar10 != 0) {
              iVar4 = FUN_14285b98b(param_1,lVar10,param_3[1]);
              if (iVar4 == 0) {
                pbVar11 = (byte *)*param_3;
                bVar13 = *pbVar11;
                uVar5 = bVar13 - 0x78;
                if ((uVar5 == 0) && (uVar5 = pbVar11[1] - 0x31, uVar5 == 0)) {
                  uVar5 = (uint)pbVar11[2];
                }
                if (uVar5 == 0) {
                  FUN_14285c744(param_1,param_3[1]);
                  pbVar11 = (byte *)*param_3;
                  bVar13 = *pbVar11;
                }
                uVar5 = (uint)bVar13;
                uVar12 = uVar5 - 0x79;
                if ((uVar12 == 0) && (uVar12 = pbVar11[1] - 0x31, uVar12 == 0)) {
                  uVar12 = (uint)pbVar11[2];
                }
                if (uVar12 == 0) {
                  FUN_14285c744(param_1,param_3[1]);
                  pbVar11 = (byte *)*param_3;
                  uVar5 = (uint)*pbVar11;
                }
                uVar12 = uVar5 - 0x78;
                if ((uVar12 == 0) && (uVar12 = pbVar11[1] - 0x32, uVar12 == 0)) {
                  uVar12 = (uint)pbVar11[2];
                }
                if (uVar12 == 0) {
                  FUN_14285c744(param_1,param_3[1]);
                  pbVar11 = (byte *)*param_3;
                  uVar5 = (uint)*pbVar11;
                }
                uVar5 = uVar5 - 0x79;
                if ((uVar5 == 0) && (uVar5 = pbVar11[1] - 0x32, uVar5 == 0)) {
                  uVar5 = (uint)pbVar11[2];
                }
                if (uVar5 == 0) {
                  FUN_14285c744(param_1,param_3[1]);
                }
              }
              plVar1 = param_3 + 2;
              param_3 = param_3 + 2;
              lVar10 = *plVar1;
            }
            *(undefined4 *)(param_1 + 0x9c10) = 0;
            FUN_14285d42e(param_1);
            FUN_14285d34d(param_1);
LAB_142859d2c:
            uVar15 = 0;
            goto LAB_142859d31;
          }
          iVar4 = strcmp((char *)param_2,"polyline");
          if (iVar4 == 0) {
            iVar4 = *(int *)(param_1 + 0x9c00);
            if ((longlong)iVar4 < 0x7f) {
              *(int *)(param_1 + 0x9c00) = iVar4 + 1;
              pvVar8 = (void *)((longlong)iVar4 * 0x138 + param_1);
              memcpy((void *)((longlong)pvVar8 + 0x138),pvVar8,0x138);
            }
            uVar15 = 0;
          }
          else {
            iVar4 = strcmp((char *)param_2,"polygon");
            if (iVar4 != 0) {
              iVar4 = strcmp((char *)param_2,"linearGradient");
              if (iVar4 == 0) goto LAB_142858fdc;
              iVar4 = strcmp((char *)param_2,"radialGradient");
              if (iVar4 == 0) goto LAB_1428591db;
              iVar4 = strcmp((char *)param_2,"stop");
              if (iVar4 == 0) goto LAB_1428594f2;
              iVar4 = strcmp((char *)param_2,"defs");
              if (iVar4 == 0) {
                *(undefined1 *)(param_1 + 0x9c61) = 1;
                goto LAB_142859d50;
              }
              iVar4 = strcmp((char *)param_2,"svg");
              if (iVar4 == 0) {
                lVar10 = *param_3;
                if (lVar10 != 0) {
                  uVar16 = 0;
                  do {
                    iVar4 = FUN_14285b98b(param_1,lVar10,param_3[uVar16 + 1]);
                    if (iVar4 == 0) {
                      uVar18 = uVar16 | 1;
                      pcVar9 = (char *)param_3[uVar16];
                      iVar4 = strcmp(pcVar9,"width");
                      if (iVar4 == 0) {
                        uVar19 = FUN_14285c744(param_1,param_3[uVar18]);
                        **(undefined4 **)(param_1 + 0x9c20) = uVar19;
                      }
                      else {
                        iVar4 = strcmp(pcVar9,"height");
                        if (iVar4 == 0) {
                          uVar19 = FUN_14285c744(param_1,param_3[uVar18]);
                          *(undefined4 *)(*(longlong *)(param_1 + 0x9c20) + 4) = uVar19;
                        }
                        else {
                          iVar4 = strcmp(pcVar9,"viewBox");
                          if (iVar4 == 0) {
                            pcVar9 = (char *)FUN_14285cb5d(param_3[uVar18],local_138);
                            dVar2 = (double)FUN_14285c7e1(local_138);
                            *(float *)(param_1 + 40000) = (float)dVar2;
                            cVar14 = *pcVar9;
                            while( true ) {
                              if (cVar14 == '\0') goto LAB_142859d50;
                              pvVar8 = memchr(&DAT_149ecafe3,(int)cVar14,7);
                              if (((pvVar8 == (void *)0x0) && (cVar14 != ',')) && (cVar14 != '%'))
                              break;
                              cVar14 = pcVar9[1];
                              pcVar9 = pcVar9 + 1;
                            }
                            pcVar9 = (char *)FUN_14285cb5d(pcVar9,local_138);
                            dVar2 = (double)FUN_14285c7e1(local_138);
                            *(float *)(param_1 + 0x9c44) = (float)dVar2;
                            cVar14 = *pcVar9;
                            while( true ) {
                              if (cVar14 == '\0') goto LAB_142859d50;
                              pvVar8 = memchr(&DAT_149ecafe3,(int)cVar14,7);
                              if (((pvVar8 == (void *)0x0) && (cVar14 != ',')) && (cVar14 != '%'))
                              break;
                              cVar14 = pcVar9[1];
                              pcVar9 = pcVar9 + 1;
                            }
                            pcVar9 = (char *)FUN_14285cb5d(pcVar9,local_138);
                            dVar2 = (double)FUN_14285c7e1(local_138);
                            *(float *)(param_1 + 0x9c48) = (float)dVar2;
                            cVar14 = *pcVar9;
                            while( true ) {
                              if (cVar14 == '\0') goto LAB_142859d50;
                              pvVar8 = memchr(&DAT_149ecafe3,(int)cVar14,7);
                              if (((pvVar8 == (void *)0x0) && (cVar14 != ',')) && (cVar14 != '%'))
                              break;
                              cVar14 = pcVar9[1];
                              pcVar9 = pcVar9 + 1;
                            }
                            FUN_14285cb5d(pcVar9,local_138);
                            dVar2 = (double)FUN_14285c7e1(local_138);
                            *(float *)(param_1 + 0x9c4c) = (float)dVar2;
                          }
                          else {
                            iVar4 = strcmp(pcVar9,"preserveAspectRatio");
                            if (iVar4 == 0) {
                              pcVar9 = (char *)param_3[uVar18];
                              pcVar7 = strstr(pcVar9,"none");
                              if (pcVar7 == (char *)0x0) {
                                pcVar7 = strstr(pcVar9,"xMin");
                                uVar19 = 0;
                                if (pcVar7 == (char *)0x0) {
                                  pcVar7 = strstr(pcVar9,"xMid");
                                  uVar19 = 1;
                                  if (pcVar7 != (char *)0x0) goto LAB_142857f8b;
                                  pcVar7 = strstr(pcVar9,"xMax");
                                  uVar19 = 2;
                                  if (pcVar7 != (char *)0x0) goto LAB_142857f8b;
                                }
                                else {
LAB_142857f8b:
                                  *(undefined4 *)(param_1 + 0x9c50) = uVar19;
                                  pcVar9 = (char *)param_3[uVar18];
                                }
                                pcVar7 = strstr(pcVar9,"yMin");
                                uVar19 = 0;
                                if (pcVar7 == (char *)0x0) {
                                  pcVar7 = strstr(pcVar9,"yMid");
                                  uVar19 = 1;
                                  if (pcVar7 != (char *)0x0) goto LAB_142857fdd;
                                  pcVar9 = strstr(pcVar9,"yMax");
                                  uVar19 = 2;
                                  if (pcVar9 != (char *)0x0) goto LAB_142857fdd;
                                }
                                else {
LAB_142857fdd:
                                  *(undefined4 *)(param_1 + 0x9c54) = uVar19;
                                }
                                *(undefined4 *)(param_1 + 0x9c58) = 1;
                                pcVar9 = strstr((char *)param_3[uVar18],"slice");
                                *(uint *)(param_1 + 0x9c58) = 2 - (uint)(pcVar9 == (char *)0x0);
                              }
                              else {
                                *(undefined4 *)(param_1 + 0x9c58) = 0;
                              }
                            }
                          }
                        }
                      }
                    }
                    lVar10 = param_3[uVar16 + 2];
                    uVar16 = uVar16 + 2;
                  } while (lVar10 != 0);
                }
                goto LAB_142859d50;
              }
              goto LAB_142857c82;
            }
            iVar4 = *(int *)(param_1 + 0x9c00);
            if ((longlong)iVar4 < 0x7f) {
              *(int *)(param_1 + 0x9c00) = iVar4 + 1;
              pvVar8 = (void *)((longlong)iVar4 * 0x138 + param_1);
              memcpy((void *)((longlong)pvVar8 + 0x138),pvVar8,0x138);
            }
            uVar15 = 1;
          }
          FUN_14285b806(param_1,param_3,uVar15);
        }
      }
    }
  }
  if (0 < *(int *)(param_1 + 0x9c00)) {
    *(int *)(param_1 + 0x9c00) = *(int *)(param_1 + 0x9c00) + -1;
  }
LAB_142859d50:
  if ((local_f0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142859de2 FUN_142859de2 body=1415 status=ok
// SIG undefined FUN_142859de2(void)

void FUN_142859de2(float *param_1,char *param_2)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float unaff_XMM6_Da;
  float fVar9;
  float fVar10;
  float unaff_XMM7_Da;
  float unaff_XMM9_Da;
  float fVar11;
  float unaff_XMM13_Da;
  float fVar12;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float fVar13;
  undefined1 auStack_138 [44];
  int local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *param_1 = 1.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 1.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  cVar4 = *param_2;
  while (cVar4 != '\0') {
    while (iVar6 = strncmp(param_2,"matrix",6), iVar6 != 0) {
      iVar6 = strncmp(param_2,"translate",9);
      if (iVar6 == 0) {
        local_10c = 0;
        iVar6 = FUN_14285e1b9(param_2,&local_108,2,&local_10c);
        unaff_XMM6_Da = 0.0;
        unaff_XMM13_Da = 0.0;
        unaff_XMM15_Da = local_108;
        if (local_10c != 1) {
          unaff_XMM13_Da = local_104;
        }
LAB_14285a0f0:
        unaff_XMM7_Da = 0.0;
LAB_14285a144:
        unaff_XMM9_Da = 1.0;
        unaff_XMM14_Da = 1.0;
        goto LAB_14285a22e;
      }
      iVar6 = strncmp(param_2,"scale",5);
      if (iVar6 == 0) {
        local_10c = 0;
        iVar6 = FUN_14285e1b9(param_2,&local_108,2,&local_10c);
        unaff_XMM14_Da = local_108;
        if (local_10c != 1) {
          unaff_XMM14_Da = local_104;
        }
        unaff_XMM6_Da = 0.0;
        unaff_XMM7_Da = 0.0;
        unaff_XMM9_Da = local_108;
        unaff_XMM13_Da = 0.0;
        unaff_XMM15_Da = 0.0;
        goto LAB_14285a22e;
      }
      iVar6 = strncmp(param_2,"rotate",6);
      if (iVar6 == 0) {
        local_10c = 0;
        iVar6 = FUN_14285e1b9(param_2,&local_108,3,&local_10c);
        fVar3 = local_100;
        fVar2 = local_104;
        iVar5 = local_10c;
        fVar9 = (local_108 / 180.0) * 3.1415927;
        fVar7 = cosf(fVar9);
        fVar9 = sinf(fVar9);
        if (iVar5 < 2) {
          fVar8 = 0.0;
          fVar12 = 0.0;
        }
        else {
          fVar12 = 0.0 - fVar2;
          fVar8 = 0.0 - fVar3;
        }
        fVar11 = fVar7 - fVar9 * 0.0;
        fVar13 = (fVar12 * fVar7 - fVar8 * fVar9) + 0.0;
        unaff_XMM7_Da = fVar9 + fVar7 * 0.0;
        fVar10 = fVar7 * 0.0 - fVar9;
        unaff_XMM14_Da = fVar9 * 0.0 + fVar7;
        unaff_XMM13_Da = fVar12 * fVar9 + fVar8 * fVar7 + 0.0;
        unaff_XMM6_Da = fVar10;
        unaff_XMM9_Da = fVar11;
        unaff_XMM15_Da = fVar13;
        if (1 < iVar5) {
          unaff_XMM9_Da = unaff_XMM7_Da * 0.0 + fVar11;
          unaff_XMM6_Da = unaff_XMM14_Da * 0.0 + fVar10;
          unaff_XMM15_Da = fVar2 + unaff_XMM13_Da * 0.0 + fVar13;
          unaff_XMM7_Da = unaff_XMM7_Da + fVar11 * 0.0;
          unaff_XMM14_Da = unaff_XMM14_Da + fVar10 * 0.0;
          unaff_XMM13_Da = fVar3 + fVar13 * 0.0 + unaff_XMM13_Da;
        }
        goto LAB_14285a22e;
      }
      iVar6 = strncmp(param_2,"skewX",5);
      if (iVar6 == 0) {
        local_10c = 0;
        iVar6 = FUN_14285e1b9(param_2,&local_108,1,&local_10c);
        unaff_XMM6_Da = tanf((local_108 / 180.0) * 3.1415927);
        unaff_XMM13_Da = 0.0;
        unaff_XMM15_Da = 0.0;
        goto LAB_14285a0f0;
      }
      iVar6 = strncmp(param_2,"skewY",5);
      if (iVar6 == 0) {
        local_10c = 0;
        iVar6 = FUN_14285e1b9(param_2,&local_108,1,&local_10c);
        unaff_XMM7_Da = tanf((local_108 / 180.0) * 3.1415927);
        unaff_XMM13_Da = 0.0;
        unaff_XMM15_Da = 0.0;
        unaff_XMM6_Da = 0.0;
        goto LAB_14285a144;
      }
      pcVar1 = param_2 + 1;
      param_2 = param_2 + 1;
      if (*pcVar1 == '\0') goto LAB_14285a2f0;
    }
    local_10c = 0;
    iVar6 = FUN_14285e1b9(param_2,&local_108,6,&local_10c);
    if (local_10c == 6) {
      unaff_XMM6_Da = local_100;
      unaff_XMM7_Da = local_104;
      unaff_XMM9_Da = local_108;
      unaff_XMM13_Da = local_f4;
      unaff_XMM14_Da = local_fc;
      unaff_XMM15_Da = local_f8;
    }
LAB_14285a22e:
    fVar2 = param_1[2];
    fVar3 = *param_1;
    fVar7 = param_1[1];
    fVar9 = param_1[3];
    *param_1 = unaff_XMM9_Da * fVar3 + unaff_XMM7_Da * fVar2;
    param_1[1] = unaff_XMM9_Da * fVar7 + unaff_XMM7_Da * fVar9;
    param_1[2] = unaff_XMM6_Da * fVar3 + unaff_XMM14_Da * fVar2;
    param_1[3] = unaff_XMM6_Da * fVar7 + unaff_XMM14_Da * fVar9;
    param_1[4] = fVar3 * unaff_XMM15_Da + fVar2 * unaff_XMM13_Da + param_1[4];
    param_1[5] = fVar7 * unaff_XMM15_Da + fVar9 * unaff_XMM13_Da + param_1[5];
    cVar4 = param_2[iVar6];
    param_2 = param_2 + iVar6;
  }
LAB_14285a2f0:
  if ((local_f0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14285a388 FUN_14285a388 body=1224 status=ok
// SIG undefined FUN_14285a388(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14285a388(char *param_1,char *param_2,float param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  longlong lVar21;
  float fVar22;
  undefined1 in_XMM5 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  cVar1 = *param_2;
  *param_1 = cVar1;
  if (cVar1 == '\x01') {
    fVar22 = 1.0;
    if (param_3 <= 1.0) {
      fVar22 = param_3;
    }
    *(uint *)(param_1 + 0x1c) =
         ((*(uint *)(param_2 + 8) >> 0x18) *
          (int)(float)(~-(uint)(param_3 < 0.0) & (uint)(fVar22 * 256.0)) & 0xff00) << 0x10 |
         *(uint *)(param_2 + 8) & 0xffffff;
  }
  else {
    puVar3 = *(undefined8 **)(param_2 + 8);
    param_1[1] = *(char *)(puVar3 + 3);
    *(undefined8 *)(param_1 + 0x14) = puVar3[2];
    uVar5 = puVar3[1];
    *(undefined8 *)(param_1 + 4) = *puVar3;
    *(undefined8 *)(param_1 + 0xc) = uVar5;
    iVar14 = *(int *)((longlong)puVar3 + 0x24);
    if (iVar14 == 0) {
      memset(param_1 + 0x1c,0,0x400);
      iVar14 = *(int *)((longlong)puVar3 + 0x24);
    }
    auVar6 = _DAT_149931e80;
    if (iVar14 == 1) {
      fVar22 = 1.0;
      if (param_3 <= 1.0) {
        fVar22 = param_3;
      }
      lVar9 = 0;
      do {
        *(uint *)(param_1 + lVar9 * 4 + 0x1c) =
             (*(uint *)(puVar3 + lVar9 + 5) >> 0x18) *
             (int)(float)(~-(uint)(param_3 < 0.0) & (uint)(fVar22 * 256.0)) * 0x10000 & 0xff000000 |
             *(uint *)(puVar3 + lVar9 + 5) & 0xffffff;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x100);
    }
    else {
      fVar22 = 1.0;
      if (param_3 <= 1.0) {
        fVar22 = param_3;
      }
      fVar24 = (float)(~-(uint)(param_3 < 0.0) & (uint)(fVar22 * 256.0));
      iVar7 = (int)fVar24;
      iVar8 = iVar7 * 0x10000;
      fVar22 = *(float *)((longlong)puVar3 + 0x2c);
      fVar18 = 1.0;
      if (fVar22 <= 1.0) {
        fVar18 = fVar22;
      }
      fVar18 = (float)(~-(uint)(fVar22 < 0.0) & (uint)fVar18);
      fVar22 = *(float *)((longlong)puVar3 + (longlong)iVar14 * 8 + 0x24);
      uVar10 = (uint)(fVar18 * 255.0);
      if (0 < (int)uVar10) {
        uVar15 = (*(uint *)(puVar3 + 5) >> 0x18) * iVar8 & 0xff000000 |
                 *(uint *)(puVar3 + 5) & 0xffffff;
        lVar9 = (ulonglong)uVar10 - 1;
        auVar20._8_4_ = (int)lVar9;
        auVar20._0_8_ = lVar9;
        auVar20._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
        auVar23 = pmovsxbq(in_XMM5,0x302);
        auVar25 = pmovsxbq(ZEXT416((uint)fVar24),0x100);
        lVar9 = 0;
        auVar20 = auVar20 ^ _DAT_149931e80;
        auVar26 = pmovsxbq(unaff_XMM9,0x404);
        do {
          auVar27 = auVar25 ^ auVar6;
          lVar19 = auVar20._0_8_;
          lVar21 = auVar20._8_8_;
          if ((bool)(~(lVar19 < auVar27._0_8_) & 1)) {
            *(uint *)(param_1 + lVar9 + 0x1c) = uVar15;
          }
          if (auVar27._8_8_ <= lVar21) {
            *(uint *)(param_1 + lVar9 + 0x20) = uVar15;
          }
          auVar27 = auVar23 ^ auVar6;
          if (auVar27._0_8_ <= lVar19) {
            *(uint *)(param_1 + lVar9 + 0x24) = uVar15;
          }
          if (auVar27._8_8_ <= lVar21) {
            *(uint *)(param_1 + lVar9 + 0x28) = uVar15;
          }
          lVar19 = auVar25._8_8_;
          auVar25._0_8_ = auVar25._0_8_ + auVar26._0_8_;
          auVar25._8_8_ = lVar19 + auVar26._8_8_;
          lVar19 = auVar23._8_8_;
          auVar23._0_8_ = auVar23._0_8_ + auVar26._0_8_;
          auVar23._8_8_ = lVar19 + auVar26._8_8_;
          lVar9 = lVar9 + 0x10;
        } while ((ulonglong)(uVar10 + 3 >> 2) << 4 != lVar9);
        iVar14 = *(int *)((longlong)puVar3 + 0x24);
      }
      if (iVar14 < 2) {
        fVar24 = 1.0;
        if (fVar22 <= 1.0) {
          fVar24 = fVar22;
        }
        iVar11 = (int)((float)(~-(uint)(fVar22 < fVar18) & (uint)fVar24 |
                              -(uint)(fVar22 < fVar18) & (uint)fVar18) * 255.0);
        uVar10 = 0;
      }
      else {
        lVar9 = 0;
        do {
          uVar10 = *(uint *)(puVar3 + lVar9 + 6);
          uVar15 = (uVar10 >> 0x18) * iVar8;
          fVar22 = *(float *)((longlong)puVar3 + lVar9 * 8 + 0x2c);
          fVar18 = 1.0;
          if (fVar22 <= 1.0) {
            fVar18 = fVar22;
          }
          fVar24 = *(float *)((longlong)puVar3 + lVar9 * 8 + 0x34);
          fVar4 = 1.0;
          if (fVar24 <= 1.0) {
            fVar4 = fVar24;
          }
          iVar17 = (int)(float)(~-(uint)(fVar22 < 0.0) & (uint)(fVar18 * 255.0));
          iVar11 = (int)(float)(~-(uint)(fVar24 < 0.0) & (uint)(fVar4 * 255.0));
          uVar12 = iVar11 - iVar17;
          if (uVar12 != 0 && iVar17 <= iVar11) {
            uVar2 = *(uint *)(puVar3 + lVar9 + 5);
            fVar22 = 0.0;
            uVar13 = 0;
            do {
              fVar18 = 1.0;
              if (fVar22 <= 1.0) {
                fVar18 = fVar22;
              }
              iVar14 = (int)(float)(~-(uint)(fVar22 < 0.0) & (uint)(fVar18 * 256.0));
              iVar16 = 0x100 - iVar14;
              *(uint *)(param_1 + uVar13 * 4 + (longlong)iVar17 * 4 + 0x1c) =
                   (iVar14 * (uVar15 >> 0x18) + iVar16 * ((uVar2 >> 0x18) * iVar7 >> 8 & 0xff) &
                   0xff00) << 0x10 |
                   ((uVar10 >> 0x10 & 0xff) * iVar14 + iVar16 * (uVar2 >> 0x10 & 0xff) & 0xff00) <<
                   8 | (uVar10 >> 8 & 0xff) * iVar14 + iVar16 * (uVar2 >> 8 & 0xff) & 0xff00 |
                       (uVar10 & 0xff) * iVar14 + iVar16 * (uVar2 & 0xff) >> 8 & 0xff;
              fVar22 = fVar22 + 1.0 / (float)(int)uVar12;
              uVar13 = uVar13 + 1;
            } while (uVar12 != uVar13);
            iVar14 = *(int *)((longlong)puVar3 + 0x24);
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < iVar14 + -1);
        uVar10 = uVar15 & 0xff000000 | uVar10 & 0xffffff;
      }
      if (iVar11 < 0x100) {
        lVar9 = (longlong)iVar11;
        do {
          *(uint *)(param_1 + lVar9 * 4 + 0x1c) = uVar10;
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 != 0x100);
      }
    }
  }
  return;
}



// FUNCTION 14285a850 FUN_14285a850 body=2424 status=ok
// SIG undefined FUN_14285a850(void)

void FUN_14285a850(longlong param_1,float param_2,float param_3,float param_4,float param_5,
                  char *param_6,char param_7)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  int *piVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int **ppiVar9;
  void *pvVar10;
  int *piVar11;
  int iVar12;
  undefined8 *puVar13;
  int *piVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  float *pfVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  longlong lVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  undefined1 auStack_158 [32];
  uint *local_138;
  int *local_130;
  int *local_128;
  ulonglong local_120;
  float local_114;
  ulonglong local_110;
  uint local_108;
  uint local_104;
  undefined8 *local_100;
  int local_f8;
  uint local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_128 = (int *)0x0;
  local_114 = param_3;
  if (0 < *(int *)(param_1 + 0x74)) {
    local_100 = (undefined8 *)(param_1 + 0x48);
    piVar23 = (int *)0x0;
    uVar18 = 0;
    lVar24 = 0;
    do {
      memset(*(void **)(param_1 + 0x58),0,(longlong)*(int *)(param_1 + 0x70));
      local_f4 = *(uint *)(param_1 + 0x70);
      local_f8 = 0;
      local_110 = uVar18;
      local_120 = (ulonglong)(uint)((int)uVar18 * 5);
      iVar25 = 0;
      do {
        fVar30 = (float)((int)local_120 + iVar25) + 0.5;
        ppiVar9 = &local_128;
        if (piVar23 != (int *)0x0) {
          do {
            if ((float)piVar23[2] <= fVar30) {
              *ppiVar9 = *(int **)(piVar23 + 4);
              *(undefined8 *)(piVar23 + 4) = *(undefined8 *)(param_1 + 0x40);
              *(int **)(param_1 + 0x40) = piVar23;
            }
            else {
              *piVar23 = *piVar23 + piVar23[1];
              ppiVar9 = (int **)(*ppiVar9 + 4);
            }
            piVar23 = *ppiVar9;
          } while (piVar23 != (int *)0x0);
          if (local_128 != (int *)0x0) {
            ppiVar9 = &local_128;
            piVar23 = local_128;
            bVar6 = false;
LAB_14285a9d2:
            do {
              bVar7 = bVar6;
              piVar11 = *(int **)(piVar23 + 4);
              if (piVar11 != (int *)0x0) {
                if (*piVar23 <= *piVar11) {
                  ppiVar9 = (int **)(piVar23 + 4);
                  piVar23 = piVar11;
                  bVar6 = bVar7;
                  goto LAB_14285a9d2;
                }
                *(undefined8 *)(piVar23 + 4) = *(undefined8 *)(piVar11 + 4);
                *(int **)(piVar11 + 4) = piVar23;
                *ppiVar9 = piVar11;
                bVar7 = true;
                ppiVar9 = (int **)(piVar11 + 4);
                piVar23 = *(int **)(piVar11 + 4);
                bVar6 = true;
                if (*(int **)(piVar11 + 4) != (int *)0x0) goto LAB_14285a9d2;
              }
              piVar23 = local_128;
              if ((!bVar7) || (ppiVar9 = &local_128, bVar6 = false, local_128 == (int *)0x0))
              goto LAB_14285aa2e;
            } while( true );
          }
        }
        piVar23 = (int *)0x0;
LAB_14285aa2e:
        if ((int)lVar24 < *(int *)(param_1 + 0x18)) {
          lVar24 = (longlong)(int)lVar24;
          do {
            if (fVar30 < *(float *)(*(longlong *)(param_1 + 0x10) + 4 + lVar24 * 0x20)) break;
            pfVar19 = (float *)(*(longlong *)(param_1 + 0x10) + lVar24 * 0x20);
            piVar11 = piVar23;
            if (fVar30 < pfVar19[3]) {
              piVar11 = *(int **)(param_1 + 0x40);
              if (piVar11 == (int *)0x0) {
                pvVar3 = *(void **)(param_1 + 0x50);
                if (pvVar3 == (void *)0x0) {
LAB_14285aa98:
                  pvVar10 = calloc(1,0x410);
                  if (pvVar10 == (void *)0x0) {
                    pvVar10 = (void *)0x0;
                  }
                  else {
                    puVar13 = (undefined8 *)((longlong)pvVar3 + 0x408);
                    if (pvVar3 == (void *)0x0) {
                      puVar13 = local_100;
                    }
                    *puVar13 = pvVar10;
                  }
LAB_14285aac3:
                  *(void **)(param_1 + 0x50) = pvVar10;
                  iVar12 = *(int *)((longlong)pvVar10 + 0x400);
                }
                else {
                  iVar12 = *(int *)((longlong)pvVar3 + 0x400);
                  pvVar10 = pvVar3;
                  if (1000 < iVar12) {
                    pvVar10 = *(void **)((longlong)pvVar3 + 0x408);
                    if (pvVar10 == (void *)0x0) goto LAB_14285aa98;
                    goto LAB_14285aac3;
                  }
                }
                *(int *)((longlong)pvVar10 + 0x400) = iVar12 + 0x18;
                piVar11 = (int *)((longlong)iVar12 + (longlong)pvVar10);
                if (piVar11 == (int *)0x0) break;
              }
              else {
                *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(piVar11 + 4);
              }
              fVar26 = (pfVar19[2] - *pfVar19) / (pfVar19[3] - pfVar19[1]);
              if (0.0 <= fVar26) {
                auVar28 = roundss(ZEXT416((uint)(fVar26 * 1024.0)),ZEXT416((uint)(fVar26 * 1024.0)),
                                  9);
                fVar27 = auVar28._0_4_;
              }
              else {
                auVar28 = roundss(ZEXT416((uint)(fVar26 * -1024.0)),
                                  ZEXT416((uint)(fVar26 * -1024.0)),9);
                fVar27 = -auVar28._0_4_;
              }
              piVar11[1] = (int)fVar27;
              auVar28 = ZEXT416((uint)((fVar26 * (fVar30 - pfVar19[1]) + *pfVar19) * 1024.0));
              auVar28 = roundss(auVar28,auVar28,9);
              iVar12 = (int)auVar28._0_4_;
              *piVar11 = iVar12;
              piVar11[2] = (int)pfVar19[3];
              piVar11[4] = 0;
              piVar11[5] = 0;
              piVar11[3] = (int)pfVar19[4];
              if (piVar23 != (int *)0x0) {
                piVar4 = piVar23;
                if (iVar12 < *piVar23) {
                  *(int **)(piVar11 + 4) = piVar23;
                }
                else {
                  do {
                    piVar14 = piVar4;
                    piVar4 = *(int **)(piVar14 + 4);
                    if (piVar4 == (int *)0x0) break;
                  } while (*piVar4 < iVar12);
                  *(int **)(piVar11 + 4) = piVar4;
                  *(int **)(piVar14 + 4) = piVar11;
                  piVar11 = piVar23;
                }
              }
            }
            lVar24 = lVar24 + 1;
            piVar23 = piVar11;
          } while (lVar24 < *(int *)(param_1 + 0x18));
        }
        local_128 = piVar23;
        if (piVar23 != (int *)0x0) {
          uVar2 = *(undefined4 *)(param_1 + 0x70);
          uVar5 = *(undefined8 *)(param_1 + 0x58);
          if (param_7 == '\0') {
            iVar12 = 0;
            iVar8 = 0;
            piVar11 = piVar23;
            do {
              if (iVar8 == 0) {
                iVar12 = *piVar11;
                iVar8 = piVar11[3];
              }
              else {
                iVar8 = iVar8 + piVar11[3];
                if (iVar8 == 0) {
                  local_130 = &local_f8;
                  local_138 = &local_f4;
                  FUN_14285e768(uVar5,uVar2,iVar12,*piVar11);
                  iVar8 = 0;
                }
              }
              piVar11 = *(int **)(piVar11 + 4);
            } while (piVar11 != (int *)0x0);
          }
          else if (param_7 == '\x01') {
            bVar6 = false;
            piVar11 = piVar23;
            iVar12 = 0;
            do {
              iVar8 = *piVar11;
              if (bVar6) {
                local_130 = &local_f8;
                local_138 = &local_f4;
                FUN_14285e768(uVar5,uVar2,iVar12);
                iVar8 = iVar12;
              }
              bVar6 = !bVar6;
              piVar11 = *(int **)(piVar11 + 4);
              iVar12 = iVar8;
            } while (piVar11 != (int *)0x0);
          }
        }
        iVar25 = iVar25 + 1;
      } while (iVar25 != 5);
      if ((int)local_f4 < 1) {
        local_f4 = 0;
      }
      if (*(int *)(param_1 + 0x70) <= local_f8) {
        local_f8 = *(int *)(param_1 + 0x70) + -1;
      }
      iVar25 = local_f8 - local_f4;
      if ((int)local_f4 <= local_f8) {
        local_120 = (ulonglong)local_f4 + *(longlong *)(param_1 + 0x58);
        lVar15 = *(longlong *)(param_1 + 0x68);
        iVar12 = *(int *)(param_1 + 0x78);
        uVar18 = (ulonglong)(local_f4 * 4);
        cVar1 = *param_6;
        if (cVar1 == '\x03') {
          if (-1 < iVar25) {
            fVar30 = ((float)(int)local_110 - local_114) / param_5;
            fVar26 = ((float)(int)local_f4 - param_2) / param_4;
            lVar15 = lVar15 + (longlong)(iVar12 * (int)local_110) + uVar18;
            lVar20 = 0;
            do {
              fVar29 = *(float *)(param_6 + 4) * fVar26 + *(float *)(param_6 + 0xc) * fVar30 +
                       *(float *)(param_6 + 0x14);
              fVar27 = *(float *)(param_6 + 8) * fVar26 + *(float *)(param_6 + 0x10) * fVar30 +
                       *(float *)(param_6 + 0x18);
              fVar29 = SQRT(fVar29 * fVar29 + fVar27 * fVar27) * 255.0;
              fVar27 = 255.0;
              if (fVar29 <= 255.0) {
                fVar27 = fVar29;
              }
              uVar16 = *(uint *)(param_6 +
                                (longlong)(int)(float)(~-(uint)(fVar29 < 0.0) & (uint)fVar27) * 4 +
                                0x1c);
              uVar21 = (uint)*(byte *)(local_120 + lVar20) * (uVar16 >> 0x18) * 0x101 + 0x101;
              uVar22 = uVar21 >> 0x10;
              iVar12 = uVar22 * 0x101;
              iVar8 = (uVar22 ^ 0xff) * 0x101;
              *(char *)(lVar15 + lVar20 * 4) =
                   (char)((uint)*(byte *)(lVar15 + lVar20 * 4) * iVar8 + 0x101 >> 0x10) +
                   (char)((uVar16 & 0xff) * iVar12 + 0x101 >> 0x10);
              *(char *)(lVar15 + 1 + lVar20 * 4) =
                   (char)((uint)*(byte *)(lVar15 + 1 + lVar20 * 4) * iVar8 + 0x101 >> 0x10) +
                   (char)((uVar16 >> 8 & 0xff) * iVar12 + 0x101 >> 0x10);
              *(char *)(lVar15 + 2 + lVar20 * 4) =
                   (char)((uint)*(byte *)(lVar15 + 2 + lVar20 * 4) * iVar8 + 0x101 >> 0x10) +
                   (char)(iVar12 * (uVar16 >> 0x10 & 0xff) + 0x101 >> 0x10);
              *(char *)(lVar15 + 3 + lVar20 * 4) =
                   (char)((uint)*(byte *)(lVar15 + 3 + lVar20 * 4) * iVar8 + 0x101 >> 0x10) +
                   (char)(uVar21 >> 0x10);
              fVar26 = fVar26 + 1.0 / param_4;
              lVar20 = lVar20 + 1;
            } while (iVar25 + 1 != (int)lVar20);
          }
        }
        else if (cVar1 == '\x02') {
          if (-1 < iVar25) {
            fVar30 = ((float)(int)local_f4 - param_2) / param_4;
            lVar15 = lVar15 + (longlong)(iVar12 * (int)local_110) + uVar18;
            lVar20 = 0;
            do {
              fVar27 = (*(float *)(param_6 + 8) * fVar30 +
                        *(float *)(param_6 + 0x10) * (((float)(int)local_110 - local_114) / param_5)
                       + *(float *)(param_6 + 0x18)) * 255.0;
              fVar26 = 255.0;
              if (fVar27 <= 255.0) {
                fVar26 = fVar27;
              }
              uVar16 = *(uint *)(param_6 +
                                (longlong)(int)(float)(~-(uint)(fVar27 < 0.0) & (uint)fVar26) * 4 +
                                0x1c);
              uVar21 = (uint)*(byte *)(local_120 + lVar20) * (uVar16 >> 0x18) * 0x101 + 0x101;
              uVar22 = uVar21 >> 0x10;
              iVar12 = uVar22 * 0x101;
              iVar8 = (uVar22 ^ 0xff) * 0x101;
              *(char *)(lVar15 + lVar20 * 4) =
                   (char)((uint)*(byte *)(lVar15 + lVar20 * 4) * iVar8 + 0x101 >> 0x10) +
                   (char)((uVar16 & 0xff) * iVar12 + 0x101 >> 0x10);
              *(char *)(lVar15 + 1 + lVar20 * 4) =
                   (char)((uint)*(byte *)(lVar15 + 1 + lVar20 * 4) * iVar8 + 0x101 >> 0x10) +
                   (char)((uVar16 >> 8 & 0xff) * iVar12 + 0x101 >> 0x10);
              *(char *)(lVar15 + 2 + lVar20 * 4) =
                   (char)((uint)*(byte *)(lVar15 + 2 + lVar20 * 4) * iVar8 + 0x101 >> 0x10) +
                   (char)(iVar12 * (uVar16 >> 0x10 & 0xff) + 0x101 >> 0x10);
              *(char *)(lVar15 + 3 + lVar20 * 4) =
                   (char)((uint)*(byte *)(lVar15 + 3 + lVar20 * 4) * iVar8 + 0x101 >> 0x10) +
                   (char)(uVar21 >> 0x10);
              fVar30 = fVar30 + 1.0 / param_4;
              lVar20 = lVar20 + 1;
            } while (iVar25 + 1 != (int)lVar20);
          }
        }
        else if ((cVar1 == '\x01') && (-1 < iVar25)) {
          uVar16 = *(uint *)(param_6 + 0x1c);
          uVar21 = uVar16 >> 0x10 & 0xff;
          uVar22 = uVar16 >> 8 & 0xff;
          local_104 = (uVar16 >> 0x18) << 8 | uVar16 >> 0x18;
          local_108 = (uVar16 & 0xff) << 8 | uVar16 & 0xff;
          lVar15 = lVar15 + (longlong)(iVar12 * (int)local_110) + uVar18;
          lVar20 = 0;
          do {
            uVar16 = *(byte *)(local_120 + lVar20) * local_104 + 0x101;
            uVar17 = uVar16 >> 0x10;
            iVar12 = (uVar17 ^ 0xff) * 0x101;
            *(char *)(lVar15 + lVar20 * 4) =
                 (char)((uint)*(byte *)(lVar15 + lVar20 * 4) * iVar12 + 0x101 >> 0x10) +
                 (char)(local_108 * uVar17 + 0x101 >> 0x10);
            *(char *)(lVar15 + 1 + lVar20 * 4) =
                 (char)((uint)*(byte *)(lVar15 + 1 + lVar20 * 4) * iVar12 + 0x101 >> 0x10) +
                 (char)((uVar22 << 8 | uVar22) * uVar17 + 0x101 >> 0x10);
            *(char *)(lVar15 + 2 + lVar20 * 4) =
                 (char)((uint)*(byte *)(lVar15 + 2 + lVar20 * 4) * iVar12 + 0x101 >> 0x10) +
                 (char)((uVar21 << 8 | uVar21) * uVar17 + 0x101 >> 0x10);
            *(char *)(lVar15 + 3 + lVar20 * 4) =
                 (char)((uint)*(byte *)(lVar15 + 3 + lVar20 * 4) * iVar12 + 0x101 >> 0x10) +
                 (char)(uVar16 >> 0x10);
            lVar20 = lVar20 + 1;
          } while (iVar25 + 1 != (int)lVar20);
        }
      }
      uVar18 = (ulonglong)((int)local_110 + 1U);
    } while ((int)((int)local_110 + 1U) < *(int *)(param_1 + 0x74));
  }
  if ((local_f0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14285b1c9 FUN_14285b1c9 body=1182 status=ok
// SIG undefined FUN_14285b1c9(void)

void FUN_14285b1c9(longlong param_1,undefined8 *param_2,char param_3)

{
  byte bVar1;
  char *_Str1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  char *_Dest;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  undefined1 auStack_b8 [40];
  char *local_90;
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  _Dest = calloc(1,0xe0);
  if (_Dest != (char *)0x0) {
    _Dest[0xad] = '\x01';
    _Dest[0x80] = param_3;
    uVar8 = 0x742480000;
    uVar9 = uVar8;
    if (param_3 == '\x02') {
      _Dest[0x9c] = '\0';
      _Dest[0x9d] = '\0';
      _Dest[0x9e] = '\0';
      _Dest[0x9f] = '\0';
      _Dest[0xa0] = '\a';
      _Dest[0xa1] = '\0';
      _Dest[0xa2] = '\0';
      _Dest[0xa3] = '\0';
      uVar9 = 0x742c80000;
      uVar8 = 0x700000000;
    }
    *(undefined8 *)(_Dest + 0x84) = uVar8;
    *(undefined8 *)(_Dest + 0x8c) = uVar8;
    *(undefined8 *)(_Dest + 0x94) = uVar9;
    _Dest[0xb0] = '\0';
    _Dest[0xb1] = '\0';
    _Dest[0xb2] = -0x80;
    _Dest[0xb3] = '?';
    _Dest[0xb4] = '\0';
    _Dest[0xb5] = '\0';
    _Dest[0xb6] = '\0';
    _Dest[0xb7] = '\0';
    _Dest[0xb8] = '\0';
    _Dest[0xb9] = '\0';
    _Dest[0xba] = '\0';
    _Dest[0xbb] = '\0';
    _Dest[0xbc] = '\0';
    _Dest[0xbd] = '\0';
    _Dest[0xbe] = -0x80;
    _Dest[0xbf] = '?';
    _Dest[0xc0] = '\0';
    _Dest[0xc1] = '\0';
    _Dest[0xc2] = '\0';
    _Dest[0xc3] = '\0';
    _Dest[0xc4] = '\0';
    _Dest[0xc5] = '\0';
    _Dest[0xc6] = '\0';
    _Dest[199] = '\0';
    pbVar10 = (byte *)*param_2;
    if (pbVar10 != (byte *)0x0) {
      local_90 = _Dest + 0xb0;
      do {
        uVar5 = *pbVar10 - 0x69;
        if ((uVar5 == 0) && (uVar5 = pbVar10[1] - 100, uVar5 == 0)) {
          uVar5 = (uint)pbVar10[2];
        }
        if (uVar5 == 0) {
          strncpy(_Dest,(char *)param_2[1],0x3f);
          _Dest[0x3f] = '\0';
        }
        else {
          iVar3 = FUN_14285b98b(param_1,pbVar10,(char *)param_2[1]);
          if (iVar3 == 0) {
            pbVar10 = (byte *)*param_2;
            iVar3 = strcmp((char *)pbVar10,"gradientUnits");
            if (iVar3 == 0) {
              iVar3 = strcmp((char *)param_2[1],"objectBoundingBox");
              if (iVar3 == 0) {
                _Dest[0xad] = '\x01';
              }
              else {
                _Dest[0xad] = '\0';
              }
            }
            else {
              iVar3 = strcmp((char *)pbVar10,"gradientTransform");
              if (iVar3 == 0) {
                FUN_142859de2(local_90,param_2[1]);
              }
              else {
                bVar1 = *pbVar10;
                uVar5 = bVar1 - 99;
                if (uVar5 == 0) {
                  uVar5 = pbVar10[1] - 0x78;
                  if (uVar5 == 0) {
                    uVar5 = (uint)pbVar10[2];
                  }
                  if (uVar5 != 0) {
                    uVar5 = pbVar10[1] - 0x79;
                    if (uVar5 == 0) {
                      uVar5 = (uint)pbVar10[2];
                    }
                    goto LAB_14285b31a;
                  }
LAB_14285b4f9:
                  uVar8 = FUN_14285cb5d(param_2[1],local_88);
                  uVar4 = FUN_14285cad2(uVar8);
                  dVar2 = (double)FUN_14285c7e1(local_88);
                  *(float *)(_Dest + 0x84) = (float)dVar2;
                  *(undefined4 *)(_Dest + 0x88) = uVar4;
                }
                else {
LAB_14285b31a:
                  if (uVar5 == 0) {
LAB_14285b47f:
                    uVar8 = FUN_14285cb5d(param_2[1],local_88);
                    uVar4 = FUN_14285cad2(uVar8);
                    dVar2 = (double)FUN_14285c7e1(local_88);
                    *(float *)(_Dest + 0x8c) = (float)dVar2;
                    *(undefined4 *)(_Dest + 0x90) = uVar4;
                  }
                  else {
                    uVar5 = bVar1 - 0x72;
                    if (uVar5 == 0) {
                      uVar5 = (uint)pbVar10[1];
                    }
                    if (uVar5 == 0) {
LAB_14285b4c2:
                      uVar8 = FUN_14285cb5d(param_2[1],local_88);
                      uVar4 = FUN_14285cad2(uVar8);
                      dVar2 = (double)FUN_14285c7e1(local_88);
                      *(float *)(_Dest + 0x94) = (float)dVar2;
                      *(undefined4 *)(_Dest + 0x98) = uVar4;
                    }
                    else {
                      uVar5 = (uint)bVar1;
                      uVar6 = uVar5 - 0x66;
                      if (uVar6 == 0) {
                        uVar6 = pbVar10[1] - 0x78;
                        if (uVar6 == 0) {
                          uVar6 = (uint)pbVar10[2];
                        }
                        if (uVar6 != 0) {
                          uVar6 = pbVar10[1] - 0x79;
                          if (uVar6 == 0) {
                            uVar6 = (uint)pbVar10[2];
                          }
                          goto LAB_14285b341;
                        }
LAB_14285b58f:
                        uVar8 = FUN_14285cb5d(param_2[1],local_88);
                        uVar4 = FUN_14285cad2(uVar8);
                        dVar2 = (double)FUN_14285c7e1(local_88);
                        *(float *)(_Dest + 0x9c) = (float)dVar2;
                        *(undefined4 *)(_Dest + 0xa0) = uVar4;
                      }
                      else {
LAB_14285b341:
                        if (uVar6 == 0) {
                          uVar8 = FUN_14285cb5d(param_2[1],local_88);
                          uVar4 = FUN_14285cad2(uVar8);
                          dVar2 = (double)FUN_14285c7e1(local_88);
                          *(float *)(_Dest + 0xa4) = (float)dVar2;
                          *(undefined4 *)(_Dest + 0xa8) = uVar4;
                        }
                        else {
                          uVar7 = uVar5 - 0x78;
                          uVar6 = uVar7;
                          if ((uVar7 == 0) && (uVar6 = pbVar10[1] - 0x31, uVar6 == 0)) {
                            uVar6 = (uint)pbVar10[2];
                          }
                          if (uVar6 == 0) goto LAB_14285b4f9;
                          uVar5 = uVar5 - 0x79;
                          uVar6 = uVar5;
                          if ((uVar5 == 0) && (uVar6 = pbVar10[1] - 0x31, uVar6 == 0)) {
                            uVar6 = (uint)pbVar10[2];
                          }
                          if (uVar6 == 0) goto LAB_14285b47f;
                          if ((uVar7 == 0) && (uVar7 = pbVar10[1] - 0x32, uVar7 == 0)) {
                            uVar7 = (uint)pbVar10[2];
                          }
                          if (uVar7 == 0) goto LAB_14285b4c2;
                          if ((uVar5 == 0) && (uVar5 = pbVar10[1] - 0x32, uVar5 == 0)) {
                            uVar5 = (uint)pbVar10[2];
                          }
                          if (uVar5 == 0) goto LAB_14285b58f;
                          iVar3 = strcmp((char *)pbVar10,"spreadMethod");
                          if (iVar3 == 0) {
                            _Str1 = (char *)param_2[1];
                            iVar3 = strcmp(_Str1,"pad");
                            if (iVar3 == 0) {
                              _Dest[0xac] = '\0';
                            }
                            else {
                              iVar3 = strcmp(_Str1,"reflect");
                              if (iVar3 == 0) {
                                _Dest[0xac] = '\x01';
                              }
                              else {
                                iVar3 = strcmp(_Str1,"repeat");
                                if (iVar3 == 0) {
                                  _Dest[0xac] = '\x02';
                                }
                              }
                            }
                          }
                          else {
                            iVar3 = strcmp((char *)pbVar10,"xlink:href");
                            if (iVar3 == 0) {
                              strncpy(_Dest + 0x40,(char *)(param_2[1] + 1),0x3e);
                              _Dest[0x7e] = '\0';
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        pbVar10 = (byte *)param_2[2];
        param_2 = param_2 + 2;
      } while (pbVar10 != (byte *)0x0);
    }
    *(undefined8 *)(_Dest + 0xd8) = *(undefined8 *)(param_1 + 0x9c30);
    *(char **)(param_1 + 0x9c30) = _Dest;
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14285b7a6 FUN_14285b7a6 body=96 status=ok
// SIG undefined FUN_14285b7a6(void)

void FUN_14285b7a6(undefined8 param_1,undefined8 *param_2)

{
  char *_Str1;
  int iVar1;
  
  _Str1 = (char *)*param_2;
  while (_Str1 != (char *)0x0) {
    iVar1 = strcmp(_Str1,"style");
    if (iVar1 == 0) {
      FUN_14285c2e6(param_1,param_2[1]);
    }
    else {
      FUN_14285b98b(param_1,_Str1);
    }
    _Str1 = (char *)param_2[2];
    param_2 = param_2 + 2;
  }
  return;
}



// FUNCTION 14285b806 FUN_14285b806 body=388 status=ok
// SIG undefined FUN_14285b806(void)

void FUN_14285b806(longlong param_1,longlong *param_2,undefined4 param_3)

{
  double dVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_c8 [44];
  undefined4 local_9c;
  undefined1 local_98 [72];
  float local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_1 + 0x9c10) = 0;
  lVar5 = *param_2;
  local_9c = param_3;
  if (lVar5 != 0) {
    uVar6 = 0;
    iVar4 = 0;
    do {
      iVar2 = FUN_14285b98b(param_1,lVar5,param_2[uVar6 + 1]);
      if (iVar2 == 0) {
        iVar2 = strcmp((char *)param_2[uVar6],"points");
        if ((iVar2 == 0) && (pcVar3 = (char *)param_2[uVar6 | 1], *pcVar3 != '\0')) {
          lVar5 = 0;
          do {
            pcVar3 = (char *)FUN_14285cc7d(pcVar3,local_98);
            dVar1 = (double)FUN_14285c7e1(local_98);
            local_50[lVar5] = (float)dVar1;
            if ((int)lVar5 == 0) {
              lVar5 = 1;
            }
            else {
              if (iVar4 == 0) {
                if (*(int *)(param_1 + 0x9c10) < 1) {
                  FUN_14285d42e(param_1);
                }
                else {
                  *(float *)(*(longlong *)(param_1 + 0x9c08) +
                            (ulonglong)(*(int *)(param_1 + 0x9c10) * 2 - 2) * 4) = local_50[0];
                  *(float *)(*(longlong *)(param_1 + 0x9c08) +
                            (longlong)(*(int *)(param_1 + 0x9c10) * 2 + -1) * 4) = local_50[1];
                }
              }
              else {
                FUN_14285d34d(param_1);
              }
              iVar4 = iVar4 + 1;
              lVar5 = 0;
            }
          } while (*pcVar3 != '\0');
        }
      }
      lVar5 = param_2[uVar6 + 2];
      uVar6 = uVar6 + 2;
    } while (lVar5 != 0);
  }
  FUN_14285cd74(param_1,local_9c);
  FUN_14285cfc8(param_1);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14285b98b FUN_14285b98b body=2394 status=ok
// SIG undefined FUN_14285b98b(void)

undefined8 FUN_14285b98b(longlong param_1,char *param_2,char *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  char *_Dest;
  longlong *plVar10;
  uint uVar11;
  char cVar12;
  bool bVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined1 auStack_118 [32];
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar9 = 0;
  _Dest = (char *)((longlong)*(int *)(param_1 + 0x9c00) * 0x138 + param_1);
  if (_Dest == (char *)0x0) goto LAB_14285bc25;
  iVar4 = strcmp(param_2,"style");
  if (iVar4 == 0) {
    FUN_14285c2e6(param_1,param_3);
  }
  else {
    iVar4 = strcmp(param_2,"display");
    if (iVar4 == 0) {
      iVar4 = strcmp(param_3,"none");
      uVar9 = 1;
      if (iVar4 == 0) {
        _Dest[0x136] = '\0';
      }
      goto LAB_14285bc25;
    }
    iVar4 = strcmp(param_2,"fill");
    if (iVar4 == 0) {
      iVar4 = strcmp(param_3,"none");
      if (iVar4 == 0) {
        _Dest[0x134] = '\0';
      }
      else {
        iVar4 = strncmp(param_3,"url(",4);
        if (iVar4 == 0) {
          _Dest[0x134] = '\x02';
          pcVar7 = param_3 + 4;
          if (param_3[4] == '#') {
            pcVar7 = param_3 + 5;
          }
          uVar8 = 0;
          do {
            if (pcVar7[uVar8] == ')') goto LAB_14285bdcd;
            _Dest[uVar8 + 0x6c] = pcVar7[uVar8];
            uVar8 = uVar8 + 1;
          } while (uVar8 != 0x3f);
          uVar8 = 0x3f;
LAB_14285bdcd:
          _Dest[(uVar8 & 0xffffffff) + 0x6c] = '\0';
        }
        else {
          _Dest[0x134] = '\x01';
          uVar17 = FUN_14285c4ff(param_3);
          *(undefined4 *)(_Dest + 0x58) = uVar17;
        }
      }
    }
    else {
      iVar4 = strcmp(param_2,"opacity");
      if (iVar4 == 0) {
        dVar3 = (double)FUN_14285c7e1(param_3);
        fVar15 = 0.0;
        if (0.0 <= (float)dVar3) {
          fVar15 = (float)dVar3;
        }
        fVar16 = 1.0;
        if (fVar15 <= 1.0) {
          fVar16 = fVar15;
        }
        *(float *)(_Dest + 0x60) = fVar16;
      }
      else {
        iVar4 = strcmp(param_2,"fill-opacity");
        if (iVar4 == 0) {
          dVar3 = (double)FUN_14285c7e1(param_3);
          fVar15 = 0.0;
          if (0.0 <= (float)dVar3) {
            fVar15 = (float)dVar3;
          }
          fVar16 = 1.0;
          if (fVar15 <= 1.0) {
            fVar16 = fVar15;
          }
          *(float *)(_Dest + 100) = fVar16;
        }
        else {
          iVar4 = strcmp(param_2,"stroke");
          if (iVar4 == 0) {
            iVar4 = strcmp(param_3,"none");
            if (iVar4 == 0) {
              _Dest[0x135] = '\0';
            }
            else {
              iVar4 = strncmp(param_3,"url(",4);
              if (iVar4 == 0) {
                _Dest[0x135] = '\x02';
                pcVar7 = param_3 + 4;
                if (param_3[4] == '#') {
                  pcVar7 = param_3 + 5;
                }
                uVar8 = 0;
                do {
                  if (pcVar7[uVar8] == ')') goto LAB_14285bfc4;
                  _Dest[uVar8 + 0xac] = pcVar7[uVar8];
                  uVar8 = uVar8 + 1;
                } while (uVar8 != 0x3f);
                uVar8 = 0x3f;
LAB_14285bfc4:
                _Dest[(uVar8 & 0xffffffff) + 0xac] = '\0';
              }
              else {
                _Dest[0x135] = '\x01';
                uVar17 = FUN_14285c4ff(param_3);
                *(undefined4 *)(_Dest + 0x5c) = uVar17;
              }
            }
          }
          else {
            iVar4 = strcmp(param_2,"stroke-width");
            if (iVar4 == 0) {
              uVar17 = FUN_14285c744(param_1,param_3,0,
                                     SQRT(*(float *)(param_1 + 0x9c48) *
                                          *(float *)(param_1 + 0x9c48) +
                                          *(float *)(param_1 + 0x9c4c) *
                                          *(float *)(param_1 + 0x9c4c)) / 1.4142135);
              *(undefined4 *)(_Dest + 0xec) = uVar17;
            }
            else {
              iVar4 = strcmp(param_2,"stroke-dasharray");
              if (iVar4 == 0) {
                uVar14 = 0;
                if ((*param_3 != '\0') && (*param_3 != 'n')) {
                  uVar11 = 0;
LAB_14285be4b:
                  local_f8 = (float)((uint)local_f8 & 0xffffff00);
                  cVar12 = *param_3;
                  while (cVar12 != '\0') {
                    pvVar5 = memchr(&DAT_149ecafe3,(int)cVar12,7);
                    if ((cVar12 != ',') && (pvVar5 == (void *)0x0)) {
                      iVar4 = 0;
                      goto LAB_14285bef6;
                    }
                    pcVar7 = param_3 + 1;
                    param_3 = param_3 + 1;
                    cVar12 = *pcVar7;
                  }
                  iVar4 = 0;
                  goto LAB_14285be83;
                }
                goto LAB_14285c0c8;
              }
              iVar4 = strcmp(param_2,"stroke-dashoffset");
              if (iVar4 == 0) {
                uVar17 = FUN_14285c744(param_1,param_3,0,
                                       SQRT(*(float *)(param_1 + 0x9c48) *
                                            *(float *)(param_1 + 0x9c48) +
                                            *(float *)(param_1 + 0x9c4c) *
                                            *(float *)(param_1 + 0x9c4c)) / 1.4142135);
                *(undefined4 *)(_Dest + 0xf0) = uVar17;
              }
              else {
                iVar4 = strcmp(param_2,"stroke-opacity");
                if (iVar4 == 0) {
                  dVar3 = (double)FUN_14285c7e1(param_3);
                  fVar15 = 0.0;
                  if (0.0 <= (float)dVar3) {
                    fVar15 = (float)dVar3;
                  }
                  fVar16 = 1.0;
                  if (fVar15 <= 1.0) {
                    fVar16 = fVar15;
                  }
                  *(float *)(_Dest + 0x68) = fVar16;
                }
                else {
                  iVar4 = strcmp(param_2,"stroke-linecap");
                  if (iVar4 == 0) {
                    iVar4 = strcmp(param_3,"butt");
                    if (iVar4 == 0) {
                      cVar12 = '\0';
                    }
                    else {
                      iVar4 = strcmp(param_3,"round");
                      if (iVar4 == 0) {
                        cVar12 = '\x01';
                      }
                      else {
                        iVar4 = strcmp(param_3,"square");
                        cVar12 = (iVar4 == 0) * '\x02';
                      }
                    }
                    _Dest[0x119] = cVar12;
                  }
                  else {
                    iVar4 = strcmp(param_2,"stroke-linejoin");
                    if (iVar4 == 0) {
                      iVar4 = strcmp(param_3,"miter");
                      if (iVar4 == 0) {
                        cVar12 = '\0';
                      }
                      else {
                        iVar4 = strcmp(param_3,"round");
                        if (iVar4 == 0) {
                          cVar12 = '\x01';
                        }
                        else {
                          iVar4 = strcmp(param_3,"bevel");
                          cVar12 = (iVar4 == 0) * '\x02';
                        }
                      }
                      _Dest[0x118] = cVar12;
                    }
                    else {
                      iVar4 = strcmp(param_2,"stroke-miterlimit");
                      if (iVar4 == 0) {
                        dVar3 = (double)FUN_14285c7e1(param_3);
                        fVar15 = 0.0;
                        if (0.0 <= (float)dVar3) {
                          fVar15 = (float)dVar3;
                        }
                        *(float *)(_Dest + 0x11c) = fVar15;
                      }
                      else {
                        iVar4 = strcmp(param_2,"fill-rule");
                        if (iVar4 == 0) {
                          iVar4 = strcmp(param_3,"nonzero");
                          if (iVar4 == 0) {
                            bVar13 = false;
                          }
                          else {
                            iVar4 = strcmp(param_3,"evenodd");
                            bVar13 = iVar4 == 0;
                          }
                          _Dest[0x120] = bVar13;
                        }
                        else {
                          iVar4 = strcmp(param_2,"font-size");
                          if (iVar4 == 0) {
                            uVar17 = FUN_14285c744(param_1,param_3,0,
                                                   SQRT(*(float *)(param_1 + 0x9c48) *
                                                        *(float *)(param_1 + 0x9c48) +
                                                        *(float *)(param_1 + 0x9c4c) *
                                                        *(float *)(param_1 + 0x9c4c)) / 1.4142135);
                            *(undefined4 *)(_Dest + 0x124) = uVar17;
                          }
                          else {
                            iVar4 = strcmp(param_2,"transform");
                            if (iVar4 == 0) {
                              FUN_142859de2(&local_f8,param_3);
                              fVar15 = *(float *)(_Dest + 0x48);
                              fVar16 = *(float *)(_Dest + 0x40);
                              fVar1 = *(float *)(_Dest + 0x44);
                              fVar2 = *(float *)(_Dest + 0x4c);
                              *(float *)(_Dest + 0x40) = local_f8 * fVar16 + local_f4 * fVar15;
                              *(float *)(_Dest + 0x44) = local_f8 * fVar1 + local_f4 * fVar2;
                              *(float *)(_Dest + 0x48) = local_f0 * fVar16 + local_ec * fVar15;
                              *(float *)(_Dest + 0x4c) = local_f0 * fVar1 + local_ec * fVar2;
                              *(float *)(_Dest + 0x50) =
                                   fVar16 * local_e8 + fVar15 * local_e4 + *(float *)(_Dest + 0x50);
                              *(float *)(_Dest + 0x54) =
                                   local_e8 * fVar1 + local_e4 * fVar2 + *(float *)(_Dest + 0x54);
                            }
                            else {
                              iVar4 = strcmp(param_2,"stop-color");
                              if (iVar4 == 0) {
                                uVar17 = FUN_14285c4ff(param_3);
                                *(undefined4 *)(_Dest + 0x128) = uVar17;
                              }
                              else {
                                iVar4 = strcmp(param_2,"stop-opacity");
                                if (iVar4 == 0) {
                                  dVar3 = (double)FUN_14285c7e1(param_3);
                                  fVar15 = 0.0;
                                  if (0.0 <= (float)dVar3) {
                                    fVar15 = (float)dVar3;
                                  }
                                  fVar16 = 1.0;
                                  if (fVar15 <= 1.0) {
                                    fVar16 = fVar15;
                                  }
                                  *(float *)(_Dest + 300) = fVar16;
                                }
                                else {
                                  iVar4 = strcmp(param_2,"offset");
                                  if (iVar4 == 0) {
                                    uVar17 = FUN_14285c744(param_1,param_3,0,0x3f800000);
                                    *(undefined4 *)(_Dest + 0x130) = uVar17;
                                  }
                                  else {
                                    if (((*param_2 != 'i') || (param_2[1] != 'd')) ||
                                       (param_2[2] != '\0')) {
                                      iVar4 = strcmp(param_2,"class");
                                      if (iVar4 == 0) {
                                        uVar9 = 1;
                                        for (plVar10 = *(longlong **)(param_1 + 0x9c28);
                                            plVar10 != (longlong *)0x0;
                                            plVar10 = (longlong *)plVar10[2]) {
                                          iVar4 = strcmp((char *)(*plVar10 + 1),param_3);
                                          if (iVar4 == 0) {
                                            FUN_14285c2e6(param_1,plVar10[1]);
                                          }
                                        }
                                      }
                                      goto LAB_14285bc25;
                                    }
                                    strncpy(_Dest,param_3,0x3f);
                                    _Dest[0x3f] = '\0';
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_14285bc20;
  while( true ) {
    if (iVar4 < 0x3f) {
      lVar6 = (longlong)iVar4;
      iVar4 = iVar4 + 1;
      *(char *)((longlong)&local_f8 + lVar6) = cVar12;
    }
    cVar12 = param_3[1];
    param_3 = param_3 + 1;
    if (cVar12 == '\0') break;
LAB_14285bef6:
    pvVar5 = memchr(&DAT_149ecafe3,(int)cVar12,7);
    if ((cVar12 == ',') || (pvVar5 != (void *)0x0)) break;
  }
LAB_14285be83:
  *(undefined1 *)((longlong)&local_f8 + (longlong)iVar4) = 0;
  if (local_f8._0_1_ == '\0') goto LAB_14285bffc;
  if ((int)uVar11 < 8) {
    uVar14 = FUN_14285c744(param_1,&local_f8,0,
                           SQRT(*(float *)(param_1 + 0x9c48) * *(float *)(param_1 + 0x9c48) +
                                *(float *)(param_1 + 0x9c4c) * *(float *)(param_1 + 0x9c4c)) /
                           1.4142135);
    lVar6 = (longlong)(int)uVar11;
    uVar11 = uVar11 + 1;
    *(uint *)(_Dest + lVar6 * 4 + 0xf4) = uVar14 & 0x7fffffff;
  }
  if (*param_3 == '\0') goto LAB_14285bffc;
  goto LAB_14285be4b;
LAB_14285bffc:
  if ((int)uVar11 < 1) {
    uVar14 = 0;
  }
  else {
    fVar15 = 0.0;
    uVar8 = 0;
    do {
      fVar15 = fVar15 + *(float *)(_Dest + uVar8 * 4 + 0xf4);
      uVar8 = uVar8 + 1;
    } while (uVar11 != uVar8);
    uVar14 = 0;
    if (1e-06 < fVar15) {
      uVar14 = uVar11;
    }
  }
LAB_14285c0c8:
  *(uint *)(_Dest + 0x114) = uVar14;
LAB_14285bc20:
  uVar9 = 1;
LAB_14285bc25:
  if ((local_b0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 14285c2e6 FUN_14285c2e6 body=536 status=ok
// SIG undefined FUN_14285c2e6(void)

void FUN_14285c2e6(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  void *pvVar4;
  char *pcVar5;
  char cVar6;
  char *pcVar7;
  uint uVar8;
  size_t sVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  undefined1 auStack_478 [40];
  undefined8 local_450;
  undefined1 local_448 [512];
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_478;
  cVar6 = *param_2;
  local_450 = param_1;
  do {
    if (cVar6 == '\0') {
      if ((local_48 ^ (ulonglong)auStack_478) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    do {
      pvVar4 = memchr(&DAT_149ecafe3,(int)cVar6,7);
      pcVar10 = param_2;
      if (pvVar4 == (void *)0x0) goto LAB_14285c34e;
      cVar6 = param_2[1];
      param_2 = param_2 + 1;
    } while (cVar6 != '\0');
    cVar6 = '\0';
    pcVar10 = param_2;
LAB_14285c34e:
    while ((pcVar1 = param_2, pcVar11 = param_2, cVar6 != '\0' && (cVar6 != ';'))) {
      pcVar1 = param_2 + 1;
      param_2 = param_2 + 1;
      cVar6 = *pcVar1;
    }
    while ((pcVar10 < pcVar1 &&
           ((*pcVar1 == 0x3b ||
            (pvVar4 = memchr(&DAT_149ecafe3,(int)*pcVar1,7), pcVar11 = pcVar1, pvVar4 != (void *)0x0
            ))))) {
      pcVar1 = pcVar1 + -1;
      pcVar11 = pcVar10;
    }
    pcVar1 = pcVar11 + 1;
    pcVar5 = pcVar10;
    pcVar7 = pcVar10;
    if (pcVar10 < pcVar1) {
      do {
        pcVar2 = pcVar5;
        pcVar7 = pcVar5;
        if (*pcVar5 == ':') break;
        pcVar2 = pcVar5 + 1;
        bVar12 = pcVar5 < pcVar11;
        pcVar5 = pcVar2;
        pcVar7 = pcVar2;
      } while (bVar12);
      while ((pcVar10 < pcVar2 &&
             ((*pcVar2 == 0x3a ||
              (pvVar4 = memchr(&DAT_149ecafe3,(int)*pcVar2,7), pcVar5 = pcVar2,
              pvVar4 != (void *)0x0))))) {
        pcVar2 = pcVar2 + -1;
        pcVar5 = pcVar10;
      }
    }
    uVar8 = ((int)pcVar5 - (int)pcVar10) + 1;
    uVar3 = 0x1ff;
    if ((int)uVar8 < 0x1ff) {
      uVar3 = uVar8;
    }
    if (uVar8 == 0) {
      sVar9 = (size_t)uVar3;
    }
    else {
      sVar9 = (size_t)(int)uVar3;
      memcpy(local_248,pcVar10,sVar9);
    }
    local_248[sVar9] = 0;
    pcVar10 = pcVar7;
    if (pcVar7 < pcVar1) {
      do {
        if ((*pcVar7 != 0x3a) &&
           (pvVar4 = memchr(&DAT_149ecafe3,(int)*pcVar7,7), pcVar10 = pcVar7, pvVar4 == (void *)0x0)
           ) break;
        pcVar10 = pcVar7 + 1;
        bVar12 = pcVar7 < pcVar11;
        pcVar7 = pcVar10;
      } while (bVar12);
    }
    uVar8 = (int)pcVar1 - (int)pcVar10;
    uVar3 = 0x1ff;
    if ((int)uVar8 < 0x1ff) {
      uVar3 = uVar8;
    }
    if (uVar8 == 0) {
      sVar9 = (size_t)uVar3;
    }
    else {
      sVar9 = (size_t)(int)uVar3;
      memcpy(local_448,pcVar10,sVar9);
    }
    local_448[sVar9] = 0;
    FUN_14285b98b(local_450,local_248,local_448);
    param_2 = param_2 + (*param_2 != '\0');
    cVar6 = *param_2;
  } while( true );
}



// FUNCTION 14285c4ff FUN_14285c4ff body=580 status=ok
// SIG undefined FUN_14285c4ff(void)

uint FUN_14285c4ff(char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  void *pvVar6;
  char *pcVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  int *local_98;
  undefined8 *local_90;
  uint *local_88;
  uint local_74;
  int local_70;
  uint local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  do {
    pcVar7 = param_1;
    cVar1 = *pcVar7;
    param_1 = pcVar7 + 1;
  } while (cVar1 == ' ');
  sVar5 = strlen(pcVar7);
  if (cVar1 != '#' || sVar5 == 0) {
    if ((((cVar1 == 'r' && 3 < sVar5) && (*param_1 == 'g')) && (pcVar7[2] == 'b')) &&
       (pcVar7[3] == '(')) {
      local_6c = 0xffffffff;
      local_98 = &local_70;
      local_70 = -1;
      local_88 = &local_74;
      local_74 = 0xffffffff;
      local_48[2] = 0;
      local_48[3] = 0;
      local_48[0] = 0;
      local_48[1] = 0;
      local_90 = &local_68;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      FUN_145834187(pcVar7 + 4,"%d%[%%, \t]%d%[%%, \t]%d",&local_6c,local_48);
      pcVar7 = strchr((char *)local_48,0x25);
      if (pcVar7 == (char *)0x0) {
        uVar2 = local_70 << 8 | local_74;
        uVar4 = local_6c;
      }
      else {
        uVar2 = ((uint)((ulonglong)(uint)(local_70 * 0xff) * 0x51eb851f >> 0x20) & 0xffffffe0) << 3
                | (local_74 * 0xff) / 100;
        uVar4 = (local_6c * 0xff) / 100;
      }
      uVar2 = uVar4 << 0x10 | uVar2;
    }
    else {
      lVar8 = 8;
      do {
        iVar3 = strcmp(*(char **)("white" + lVar8 + 3),pcVar7);
        if (iVar3 == 0) {
          uVar2 = *(uint *)((longlong)&PTR_DAT_149ecaf40 + lVar8);
          goto LAB_14285c5f1;
        }
        lVar8 = lVar8 + 0x10;
      } while (lVar8 != 0xa8);
      uVar2 = 0x808080;
    }
    goto LAB_14285c5f1;
  }
  local_48[0] = local_48[0] & 0xffffffff00000000;
  cVar1 = *param_1;
  if (cVar1 == '\0') {
LAB_14285c58e:
    uVar2 = 0;
  }
  else {
    lVar8 = 0;
    do {
      pvVar6 = memchr(&DAT_149ecafe3,(int)cVar1,7);
      if (pvVar6 != (void *)0x0) break;
      cVar1 = pcVar7[lVar8 + 2];
      lVar8 = lVar8 + 1;
    } while (cVar1 != '\0');
    if ((int)lVar8 == 3) {
      FUN_145834187(param_1,&DAT_149ecb182,local_48);
      uVar2 = ((uint)local_48[0] & 0xf00) << 8 |
              ((uint)local_48[0] & 0xf0) << 4 | (uint)local_48[0] & 0xf;
      uVar2 = uVar2 << 4 | uVar2;
    }
    else {
      if ((int)lVar8 != 6) goto LAB_14285c58e;
      FUN_145834187(param_1,&DAT_149ecb182,local_48);
      uVar2 = (uint)local_48[0];
    }
  }
  uVar2 = uVar2 & 0xffffff;
LAB_14285c5f1:
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14285c744 FUN_14285c744 body=156 status=ok
// SIG undefined FUN_14285c744(void)

void FUN_14285c744(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  double dVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [72];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = FUN_14285cb5d(param_2,local_88);
  uVar2 = FUN_14285cad2(uVar3);
  dVar1 = (double)FUN_14285c7e1(local_88);
  FUN_14285c961(param_1,CONCAT44(uVar2,(float)dVar1),param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14285c7e1 FUN_14285c7e1 body=383 status=ok
// SIG undefined FUN_14285c7e1(void)

void FUN_14285c7e1(byte *param_1)

{
  byte *pbVar1;
  double dVar2;
  byte bVar3;
  long lVar4;
  longlong lVar5;
  bool bVar6;
  double dVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  byte *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (byte *)0x0;
  if (*param_1 == 0x2d) {
    param_1 = param_1 + 1;
    uVar8 = 0xbff00000;
  }
  else {
    uVar8 = 0x3ff00000;
    if (*param_1 == 0x2b) {
      param_1 = param_1 + 1;
    }
  }
  bVar3 = *param_1;
  if ((byte)(bVar3 - 0x3a) < 0xf6) {
    dVar2 = 0.0;
    bVar6 = false;
  }
  else {
    lVar5 = strtoll(param_1,&local_58,10);
    bVar6 = param_1 != local_58;
    if (bVar6) {
      dVar2 = (double)lVar5;
    }
    else {
      dVar2 = 0.0;
    }
    bVar3 = *local_58;
    param_1 = local_58;
  }
  if ((bVar3 == 0x2e) &&
     (pbVar1 = param_1 + 1, param_1 = param_1 + 1, 0xf5 < (byte)(*pbVar1 - 0x3a))) {
    lVar5 = strtoll(param_1,&local_58,10);
    pbVar1 = local_58;
    if (param_1 == local_58) goto LAB_14285c8dd;
    dVar7 = pow(10.0,(double)((longlong)local_58 - (longlong)param_1));
    dVar2 = dVar2 + (double)lVar5 / dVar7;
    param_1 = pbVar1;
  }
  else {
LAB_14285c8dd:
    dVar7 = 0.0;
    if (!bVar6) goto LAB_14285c932;
  }
  if ((*param_1 | 0x20) == 0x65) {
    lVar4 = strtol((char *)(param_1 + 1),(char **)&local_58,10);
    if (param_1 + 1 != local_58) {
      dVar7 = pow(10.0,(double)lVar4);
      dVar2 = dVar2 * dVar7;
    }
  }
  dVar7 = (double)((ulonglong)uVar8 << 0x20) * dVar2;
LAB_14285c932:
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(dVar7);
}



// FUNCTION 14285c961 FUN_14285c961 body=139 status=ok
// SIG undefined FUN_14285c961(void)

ulonglong FUN_14285c961(longlong param_1,ulonglong param_2,float param_3,float param_4)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  undefined1 auVar4 [16];
  
  fVar2 = (float)param_2;
  auVar4 = ZEXT416((uint)fVar2);
  iVar3 = (int)(param_2 >> 0x20);
  if (7 < iVar3 - 2U) {
    return param_2 & 0xffffffff;
  }
  lVar1 = (longlong)*(int *)(param_1 + 0x9c00) * 0x138 + param_1;
  switch(iVar3) {
  case 2:
    auVar4 = ZEXT416((uint)(fVar2 / 72.0));
    break;
  case 3:
    auVar4 = ZEXT416((uint)(fVar2 / 6.0));
    break;
  case 4:
    auVar4 = ZEXT416((uint)(fVar2 / 25.4));
    break;
  case 5:
    auVar4 = ZEXT416((uint)(fVar2 / 2.54));
    break;
  case 7:
    return (ulonglong)(uint)((fVar2 / 100.0) * param_4 + param_3);
  case 8:
    return (ulonglong)(uint)(fVar2 * *(float *)(lVar1 + 0x124));
  case 9:
    return (ulonglong)(uint)(fVar2 * *(float *)(lVar1 + 0x124) * 0.52);
  }
  auVar4._0_4_ = auVar4._0_4_ * *(float *)(param_1 + 0x9c5c);
  return auVar4._0_8_;
}



// FUNCTION 14285c9ec FUN_14285c9ec body=230 status=ok
// SIG undefined FUN_14285c9ec(void)

void FUN_14285c9ec(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = *param_2;
  fVar3 = param_2[2];
  fVar4 = param_1[5];
  fVar5 = param_1[3];
  fVar6 = param_2[4];
  param_1[1] = *param_1 * param_2[1] + fVar1 * param_2[3];
  param_1[3] = param_1[2] * param_2[1] + fVar5 * param_2[3];
  param_1[5] = param_1[4] * param_2[1] + fVar4 * param_2[3] + param_2[5];
  *param_1 = *param_1 * fVar2 + fVar1 * fVar3;
  param_1[2] = param_1[2] * fVar2 + fVar3 * fVar5;
  param_1[4] = fVar2 * param_1[4] + fVar3 * fVar4 + fVar6;
  return;
}



// FUNCTION 14285cad2 FUN_14285cad2 body=139 status=ok
// SIG undefined FUN_14285cad2(void)

char FUN_14285cad2(byte *param_1)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = *param_1;
  if (bVar1 < 0x69) {
    if (bVar1 == 0x25) {
      return '\a';
    }
    if (bVar1 != 99) {
      if (bVar1 != 0x65) {
        return '\0';
      }
      cVar2 = '\b';
      if (param_1[1] != 0x6d) {
        cVar2 = (param_1[1] == 0x78) * '\t';
      }
      return cVar2;
    }
    cVar2 = '\x05';
  }
  else {
    if (bVar1 == 0x69) {
      if (param_1[1] == 0x6e) {
        return '\x06';
      }
      return '\0';
    }
    if (bVar1 != 0x6d) {
      if (bVar1 != 0x70) {
        return '\0';
      }
      bVar1 = param_1[1];
      if (bVar1 == 99) {
        return '\x03';
      }
      if (bVar1 == 0x74) {
        return '\x02';
      }
      if (bVar1 != 0x78) {
        return '\0';
      }
      return '\x01';
    }
    cVar2 = '\x04';
  }
  if (param_1[1] == 0x6d) {
    return cVar2;
  }
  return '\0';
}



// FUNCTION 14285cb5d FUN_14285cb5d body=288 status=ok
// SIG undefined FUN_14285cb5d(void)

byte * FUN_14285cb5d(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  
  bVar4 = *param_1;
  if ((bVar4 == 0x2d) || (iVar3 = 0, bVar4 == 0x2b)) {
    *param_2 = bVar4;
    bVar4 = param_1[1];
    param_1 = param_1 + 1;
    iVar3 = 1;
  }
  while (pbVar2 = param_1, bVar4 != 0) {
    pbVar2 = param_1 + 1;
    if ((byte)(bVar4 - 0x3a) < 0xf6) {
      if (bVar4 != 0x2e) goto LAB_14285cbf8;
      if (iVar3 < 0x3f) {
        lVar6 = (longlong)iVar3;
        iVar3 = iVar3 + 1;
        param_2[lVar6] = 0x2e;
      }
      bVar4 = *pbVar2;
      goto LAB_14285cbcf;
    }
    if (iVar3 < 0x3f) {
      lVar6 = (longlong)iVar3;
      iVar3 = iVar3 + 1;
      param_2[lVar6] = bVar4;
    }
    param_1 = pbVar2;
    bVar4 = *pbVar2;
  }
LAB_14285cbaf:
  param_2[iVar3] = 0;
  return pbVar2;
LAB_14285cbcf:
  if (bVar4 == 0) goto LAB_14285cbaf;
  param_1 = pbVar2;
  if ((byte)(bVar4 - 0x3a) < 0xf6) goto LAB_14285cbf8;
  if (iVar3 < 0x3f) {
    lVar6 = (longlong)iVar3;
    iVar3 = iVar3 + 1;
    param_2[lVar6] = bVar4;
  }
  bVar4 = pbVar2[1];
  pbVar2 = pbVar2 + 1;
  goto LAB_14285cbcf;
LAB_14285cbf8:
  pbVar2 = param_1;
  if ((((bVar4 | 0x20) == 0x65) && (bVar5 = param_1[1], bVar5 != 0x6d)) && (bVar5 != 0x78)) {
    pbVar2 = param_1 + 1;
    if (iVar3 < 0x3f) {
      lVar6 = (longlong)iVar3;
      iVar3 = iVar3 + 1;
      param_2[lVar6] = bVar4;
      bVar5 = *pbVar2;
    }
    if ((bVar5 == 0x2d) || (bVar5 == 0x2b)) {
      if (iVar3 < 0x3f) {
        lVar6 = (longlong)iVar3;
        iVar3 = iVar3 + 1;
        param_2[lVar6] = bVar5;
      }
      bVar5 = param_1[2];
      pbVar2 = param_1 + 2;
    }
    while (0xf5 < (byte)(bVar5 - 0x3a)) {
      if (iVar3 < 0x3f) {
        lVar6 = (longlong)iVar3;
        iVar3 = iVar3 + 1;
        param_2[lVar6] = bVar5;
      }
      pbVar1 = pbVar2 + 1;
      pbVar2 = pbVar2 + 1;
      bVar5 = *pbVar1;
    }
  }
  goto LAB_14285cbaf;
}



// FUNCTION 14285cc7d FUN_14285cc7d body=163 status=ok
// SIG undefined FUN_14285cc7d(void)

byte * FUN_14285cc7d(byte *param_1,byte *param_2)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  
  *param_2 = 0;
  bVar1 = *param_1;
  while( true ) {
    if (bVar1 == 0) {
      return param_1;
    }
    pbVar3 = param_1 + 1;
    pvVar2 = memchr(&DAT_149ecafe3,(int)(char)bVar1,7);
    if ((bVar1 != 0x2c) && (pvVar2 == (void *)0x0)) break;
    bVar1 = *pbVar3;
    param_1 = pbVar3;
  }
  if (((0x2e < bVar1) || ((0x680000000000U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) &&
     ((byte)(bVar1 - 0x3a) < 0xf6)) {
    *param_2 = bVar1;
    param_2[1] = 0;
    return pbVar3;
  }
  pbVar3 = (byte *)FUN_14285cb5d(param_1,param_2);
  return pbVar3;
}



// FUNCTION 14285cd20 FUN_14285cd20 body=84 status=ok
// SIG undefined FUN_14285cd20(void)

undefined8 FUN_14285cd20(undefined1 param_1)

{
  switch(param_1) {
  case 0x41:
switchD_14285cd46_caseD_61:
    return 7;
  case 0x42:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x52:
  case 0x55:
switchD_14285cd46_caseD_62:
    return 0;
  case 0x43:
switchD_14285cd46_caseD_63:
    return 6;
  case 0x48:
  case 0x56:
switchD_14285cd46_caseD_68:
    return 1;
  case 0x4c:
  case 0x4d:
  case 0x54:
switchD_14285cd46_caseD_6c:
    return 2;
  case 0x51:
  case 0x53:
switchD_14285cd46_caseD_71:
    return 4;
  default:
    switch(param_1) {
    case 0x61:
      goto switchD_14285cd46_caseD_61;
    default:
      goto switchD_14285cd46_caseD_62;
    case 99:
      goto switchD_14285cd46_caseD_63;
    case 0x68:
    case 0x76:
      goto switchD_14285cd46_caseD_68;
    case 0x6c:
    case 0x6d:
    case 0x74:
      goto switchD_14285cd46_caseD_6c;
    case 0x71:
    case 0x73:
      goto switchD_14285cd46_caseD_71;
    }
  }
}



// FUNCTION 14285cd74 FUN_14285cd74 body=548 status=ok
// SIG undefined FUN_14285cd74(void)

void FUN_14285cd74(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_b8 [32];
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (3 < *(int *)(param_1 + 0x9c10)) {
    iVar1 = *(int *)(param_1 + 0x9c00);
    if (param_2 != '\0') {
      FUN_14285d34d(param_1,**(undefined4 **)(param_1 + 0x9c08),
                    (*(undefined4 **)(param_1 + 0x9c08))[1]);
    }
    puVar3 = calloc(1,0x28);
    if (puVar3 != (undefined8 *)0x0) {
      iVar2 = *(int *)(param_1 + 0x9c10);
      pvVar4 = malloc((longlong)iVar2 * 8);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_b8);
      }
      *(char *)((longlong)puVar3 + 0xc) = param_2;
      *(int *)(puVar3 + 1) = iVar2;
      if (0 < iVar2) {
        lVar5 = (longlong)iVar1 * 0x138;
        fVar7 = *(float *)(param_1 + 0x40 + lVar5);
        fVar9 = *(float *)(param_1 + 0x44 + lVar5);
        fVar11 = *(float *)(param_1 + 0x48 + lVar5);
        fVar13 = *(float *)(param_1 + 0x50 + lVar5);
        fVar8 = *(float *)(param_1 + 0x4c + lVar5);
        fVar10 = *(float *)(param_1 + 0x54 + lVar5);
        lVar5 = *(longlong *)(param_1 + 0x9c08);
        lVar6 = 0;
        do {
          fVar12 = *(float *)(lVar5 + lVar6 * 8);
          fVar14 = *(float *)(lVar5 + 4 + lVar6 * 8);
          *(float *)((longlong)pvVar4 + lVar6 * 8) = fVar12 * fVar7 + fVar11 * fVar14 + fVar13;
          *(float *)((longlong)pvVar4 + lVar6 * 8 + 4) = fVar12 * fVar9 + fVar14 * fVar8 + fVar10;
          lVar6 = lVar6 + 1;
        } while (iVar2 != lVar6);
        if (iVar2 != 1) {
          lVar5 = 0;
          fVar7 = 0.0;
          fVar9 = 0.0;
          fVar11 = 0.0;
          fVar13 = 0.0;
          do {
            FUN_14285d4ce(&local_98,pvVar4);
            fVar8 = local_8c;
            fVar10 = local_90;
            fVar12 = local_94;
            fVar14 = local_98;
            if (lVar5 != 0) {
              fVar12 = fVar11;
              if (local_94 <= fVar11) {
                fVar12 = local_94;
              }
              fVar10 = fVar9;
              if (fVar9 <= local_90) {
                fVar10 = local_90;
              }
              fVar14 = fVar13;
              if (local_98 <= fVar13) {
                fVar14 = local_98;
              }
              fVar8 = fVar7;
              if (fVar7 <= local_8c) {
                fVar8 = local_8c;
              }
            }
            *(float *)(puVar3 + 2) = fVar14;
            *(float *)((longlong)puVar3 + 0x14) = fVar12;
            *(float *)(puVar3 + 3) = fVar10;
            *(float *)((longlong)puVar3 + 0x1c) = fVar8;
            lVar5 = lVar5 + 3;
            pvVar4 = (void *)((longlong)pvVar4 + 0x18);
            fVar7 = fVar8;
            fVar9 = fVar10;
            fVar11 = fVar12;
            fVar13 = fVar14;
          } while ((int)lVar5 < iVar2 + -1);
        }
      }
      puVar3[4] = *(undefined8 *)(param_1 + 0x9c18);
      *(undefined8 **)(param_1 + 0x9c18) = puVar3;
    }
  }
  if ((local_80 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14285cfc8 FUN_14285cfc8 body=900 status=ok
// SIG undefined FUN_14285cfc8(void)

void FUN_14285cfc8(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar11 = *(longlong *)(param_1 + 0x9c18);
  if (lVar11 == 0) goto LAB_14285d326;
  iVar2 = *(int *)(param_1 + 0x9c00);
  puVar10 = malloc(0xb8);
  if (puVar10 == (undefined8 *)0x0) goto LAB_14285d326;
  puVar13 = (undefined8 *)((longlong)iVar2 * 0x138 + param_1);
  puVar10[0x14] = 0;
  puVar10[0x15] = 0;
  puVar10[0x12] = 0;
  puVar10[0x13] = 0;
  puVar10[0x10] = 0;
  puVar10[0x11] = 0;
  puVar10[0xe] = 0;
  puVar10[0xf] = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  puVar10[10] = 0;
  puVar10[0xb] = 0;
  puVar10[8] = 0;
  puVar10[9] = 0;
  puVar10[0x16] = 0;
  uVar3 = puVar13[1];
  uVar4 = puVar13[2];
  uVar5 = puVar13[3];
  uVar6 = puVar13[4];
  uVar7 = puVar13[5];
  uVar8 = puVar13[6];
  uVar9 = puVar13[7];
  *puVar10 = *puVar13;
  puVar10[1] = uVar3;
  puVar10[2] = uVar4;
  puVar10[3] = uVar5;
  puVar10[4] = uVar6;
  puVar10[5] = uVar7;
  puVar10[6] = uVar8;
  puVar10[7] = uVar9;
  fVar14 = (SQRT(*(float *)((longlong)puVar13 + 0x44) * *(float *)((longlong)puVar13 + 0x44) +
                 *(float *)((longlong)puVar13 + 0x4c) * *(float *)((longlong)puVar13 + 0x4c)) +
           SQRT(*(float *)(puVar13 + 8) * *(float *)(puVar13 + 8) +
                *(float *)(puVar13 + 9) * *(float *)(puVar13 + 9))) * 0.5;
  *(float *)((longlong)puVar10 + 100) = *(float *)((longlong)puVar13 + 0xec) * fVar14;
  *(float *)(puVar10 + 0xd) = *(float *)(puVar13 + 0x1e) * fVar14;
  iVar2 = *(int *)((longlong)puVar13 + 0x114);
  *(char *)((longlong)puVar10 + 0x8c) = (char)iVar2;
  if (0 < (longlong)iVar2) {
    lVar12 = 0;
    do {
      *(float *)((longlong)puVar10 + lVar12 * 4 + 0x6c) =
           *(float *)((longlong)puVar13 + lVar12 * 4 + 0xf4) * fVar14;
      lVar12 = lVar12 + 1;
    } while (iVar2 != lVar12);
  }
  *(undefined1 *)((longlong)puVar10 + 0x8d) = *(undefined1 *)(puVar13 + 0x23);
  *(undefined1 *)((longlong)puVar10 + 0x8e) = *(undefined1 *)((longlong)puVar13 + 0x119);
  *(undefined4 *)(puVar10 + 0x12) = *(undefined4 *)((longlong)puVar13 + 0x11c);
  *(undefined1 *)((longlong)puVar10 + 0x94) = *(undefined1 *)(puVar13 + 0x24);
  *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar13 + 0xc);
  puVar10[0x15] = lVar11;
  *(undefined8 *)(param_1 + 0x9c18) = 0;
  fVar14 = *(float *)(lVar11 + 0x10);
  *(float *)(puVar10 + 0x13) = fVar14;
  fVar15 = *(float *)(lVar11 + 0x14);
  *(float *)((longlong)puVar10 + 0x9c) = fVar15;
  fVar16 = *(float *)(lVar11 + 0x18);
  *(float *)(puVar10 + 0x14) = fVar16;
  fVar17 = *(float *)(lVar11 + 0x1c);
  *(float *)((longlong)puVar10 + 0xa4) = fVar17;
  for (lVar11 = *(longlong *)(lVar11 + 0x20); lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x20)) {
    if (*(float *)(lVar11 + 0x10) <= fVar14) {
      fVar14 = *(float *)(lVar11 + 0x10);
    }
    *(float *)(puVar10 + 0x13) = fVar14;
    if (*(float *)(lVar11 + 0x14) <= fVar15) {
      fVar15 = *(float *)(lVar11 + 0x14);
    }
    *(float *)((longlong)puVar10 + 0x9c) = fVar15;
    if (fVar16 <= *(float *)(lVar11 + 0x18)) {
      fVar16 = *(float *)(lVar11 + 0x18);
    }
    *(float *)(puVar10 + 0x14) = fVar16;
    if (fVar17 <= *(float *)(lVar11 + 0x1c)) {
      fVar17 = *(float *)(lVar11 + 0x1c);
    }
    *(float *)((longlong)puVar10 + 0xa4) = fVar17;
  }
  cVar1 = *(char *)((longlong)puVar13 + 0x134);
  if (cVar1 == '\x02') {
    FUN_14285d911(local_58,puVar13 + 8);
    FUN_14285da40(local_68,puVar10,local_58);
    lVar11 = FUN_14285dcf0(param_1,(longlong)puVar13 + 0x6c,local_68,puVar10 + 8);
    puVar10[9] = lVar11;
    if (lVar11 == 0) {
LAB_14285d25f:
      *(undefined1 *)(puVar10 + 8) = 0;
    }
  }
  else if (cVar1 == '\x01') {
    *(undefined1 *)(puVar10 + 8) = 1;
    *(uint *)(puVar10 + 9) =
         (int)(longlong)(*(float *)((longlong)puVar13 + 100) * 255.0) << 0x18 |
         *(uint *)(puVar13 + 0xb);
  }
  else if (cVar1 == '\0') goto LAB_14285d25f;
  cVar1 = *(char *)((longlong)puVar13 + 0x135);
  if (cVar1 == '\x02') {
    FUN_14285d911(local_58,puVar13 + 8);
    FUN_14285da40(local_68,puVar10,local_58);
    lVar11 = FUN_14285dcf0(param_1,(longlong)puVar13 + 0xac,local_68,puVar10 + 10);
    puVar10[0xb] = lVar11;
    if (lVar11 == 0) {
      *(undefined1 *)(puVar10 + 10) = 0;
    }
  }
  else if (cVar1 == '\x01') {
    *(undefined1 *)(puVar10 + 10) = 1;
    *(uint *)(puVar10 + 0xb) =
         (int)(longlong)(*(float *)(puVar13 + 0xd) * 255.0) << 0x18 |
         *(uint *)((longlong)puVar13 + 0x5c);
  }
  else if (cVar1 == '\0') {
    *(undefined1 *)(puVar10 + 10) = 0;
  }
  *(bool *)((longlong)puVar10 + 0x95) = *(char *)((longlong)puVar13 + 0x136) != '\0';
  if (*(longlong *)(*(longlong *)(param_1 + 0x9c20) + 8) == 0) {
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x9c20) + 8);
  }
  else {
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x9c38) + 0xb0);
  }
  *puVar13 = puVar10;
  *(undefined8 **)(param_1 + 0x9c38) = puVar10;
LAB_14285d326:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14285d34d FUN_14285d34d body=225 status=ok
// SIG undefined FUN_14285d34d(void)

void FUN_14285d34d(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  iVar3 = *(int *)(param_1 + 0x9c10);
  if (0 < iVar3) {
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x9c08) + (ulonglong)(iVar3 * 2 - 2) * 4);
    fVar2 = *(float *)(*(longlong *)(param_1 + 0x9c08) + (ulonglong)(iVar3 * 2 - 1) * 4);
    fVar5 = (param_3 - fVar2) / 3.0;
    fVar4 = (param_2 - fVar1) / 3.0;
    FUN_14285d42e(param_1,fVar1 + fVar4,fVar2 + fVar5);
    FUN_14285d42e(param_1,param_2 - fVar4,param_3 - fVar5);
    FUN_14285d42e(param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 14285d42e FUN_14285d42e body=160 status=ok
// SIG undefined FUN_14285d42e(void)

void FUN_14285d42e(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x9c10);
  iVar1 = *(int *)(param_1 + 0x9c14);
  if (iVar3 < iVar1) {
    pvVar2 = *(void **)(param_1 + 0x9c08);
  }
  else {
    iVar3 = 8;
    if (iVar1 != 0) {
      iVar3 = iVar1 * 2;
    }
    *(int *)(param_1 + 0x9c14) = iVar3;
    pvVar2 = realloc(*(void **)(param_1 + 0x9c08),(longlong)(iVar3 * 2) << 2);
    *(void **)(param_1 + 0x9c08) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x9c10);
  }
  *(undefined4 *)((longlong)pvVar2 + (longlong)(iVar3 * 2) * 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x9c08) + 4 + (longlong)*(int *)(param_1 + 0x9c10) * 8) =
       param_3;
  *(int *)(param_1 + 0x9c10) = *(int *)(param_1 + 0x9c10) + 1;
  return;
}



// FUNCTION 14285d4ce FUN_14285d4ce body=1090 status=ok
// SIG undefined FUN_14285d4ce(void)

void FUN_14285d4ce(float *param_1,float *param_2)

{
  double dVar1;
  bool bVar2;
  ulonglong uVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  undefined1 auStack_118 [32];
  double local_f8 [3];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  fVar11 = *param_2;
  if (param_2[6] <= *param_2) {
    fVar11 = param_2[6];
  }
  *param_1 = fVar11;
  fVar10 = param_2[1];
  if (param_2[7] <= param_2[1]) {
    fVar10 = param_2[7];
  }
  param_1[1] = fVar10;
  fVar12 = *param_2;
  if (*param_2 <= param_2[6]) {
    fVar12 = param_2[6];
  }
  param_1[2] = fVar12;
  fVar9 = param_2[1];
  if (param_2[1] <= param_2[7]) {
    fVar9 = param_2[7];
  }
  param_1[3] = fVar9;
  if ((((param_2[2] < fVar11) || (fVar12 < param_2[2])) || (param_2[3] < fVar10)) ||
     (((fVar9 < param_2[3] || (param_2[4] < fVar11)) ||
      ((fVar12 < param_2[4] || ((param_2[5] < fVar10 || (fVar9 < param_2[5])))))))) {
    uVar6 = 0;
    bVar2 = true;
    do {
      bVar4 = bVar2;
      dVar7 = (double)param_2[uVar6 + 2];
      dVar13 = (double)param_2[uVar6] * -3.0;
      dVar1 = (double)param_2[uVar6 + 6] * 3.0 +
              (double)param_2[uVar6 + 4] * -9.0 + dVar7 * 9.0 + dVar13;
      dVar8 = (double)param_2[uVar6 + 4] * 6.0 + (double)param_2[uVar6] * 6.0 + dVar7 * -12.0;
      dVar13 = dVar7 * 3.0 + dVar13;
      if (1e-12 <= ABS(dVar1)) {
        dVar7 = dVar8 * dVar8 + dVar13 * -4.0 * dVar1;
        if (1e-12 < dVar7) {
          if (dVar7 < 0.0) {
            dVar13 = sqrt(dVar7);
          }
          else {
            dVar13 = SQRT(dVar7);
          }
          dVar13 = (dVar13 - dVar8) / (dVar1 + dVar1);
          bVar2 = 1e-12 < dVar13 && dVar13 < 0.999999999999;
          if (bVar2) {
            local_f8[0] = dVar13;
          }
          if (dVar7 < 0.0) {
            dVar7 = sqrt(dVar7);
          }
          else {
            dVar7 = SQRT(dVar7);
          }
          dVar8 = (-dVar8 - dVar7) / (dVar1 + dVar1);
          if ((dVar8 <= 1e-12) || (0.999999999999 <= dVar8)) {
            uVar5 = 1;
            if (1e-12 >= dVar13 || dVar13 >= 0.999999999999) goto LAB_14285d88a;
          }
          else {
            uVar5 = (ulonglong)(bVar2 + 1);
            local_f8[bVar2] = dVar8;
          }
LAB_14285d7bd:
          fVar11 = param_1[uVar6];
          fVar10 = param_1[uVar6 + 2];
          uVar3 = 0;
          do {
            dVar8 = local_f8[uVar3];
            dVar1 = 1.0 - dVar8;
            fVar12 = (float)(dVar8 * dVar8 * dVar8 * (double)param_2[uVar6 + 6] +
                            dVar1 * 3.0 * dVar8 * dVar8 * (double)param_2[uVar6 + 4] +
                            dVar1 * dVar1 * 3.0 * dVar8 * (double)param_2[uVar6 + 2] +
                            dVar1 * dVar1 * dVar1 * (double)param_2[uVar6]);
            if (fVar12 <= fVar11) {
              fVar11 = fVar12;
            }
            param_1[uVar6] = fVar11;
            if (fVar10 <= fVar12) {
              fVar10 = fVar12;
            }
            param_1[uVar6 | 2] = fVar10;
            uVar3 = uVar3 + 1;
          } while (uVar5 != uVar3);
        }
      }
      else if (((1e-12 < ABS(dVar8)) && (dVar8 = -dVar13 / dVar8, 1e-12 < dVar8)) &&
              (dVar8 < 0.999999999999)) {
        local_f8[0] = dVar8;
        uVar5 = 1;
        goto LAB_14285d7bd;
      }
LAB_14285d88a:
      uVar6 = 1;
      bVar2 = false;
    } while (bVar4);
  }
  if ((local_e0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14285d911 FUN_14285d911 body=303 status=ok
// SIG undefined FUN_14285d911(void)

void FUN_14285d911(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *param_2 * param_2[3] - param_2[1] * param_2[2];
  if (1e-06 <= ABS(fVar1)) {
    fVar1 = 1.0 / fVar1;
    *param_1 = param_2[3] * fVar1;
    param_1[2] = -param_2[2] * fVar1;
    param_1[4] = (param_2[5] * param_2[2] - param_2[4] * param_2[3]) * fVar1;
    param_1[1] = -param_2[1] * fVar1;
    param_1[3] = *param_2 * fVar1;
    fVar1 = (param_2[4] * param_2[1] - param_2[5] * *param_2) * fVar1;
  }
  else {
    param_2[0] = 1.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 1.0;
    param_2[4] = 0.0;
    fVar1 = 0.0;
    param_1 = param_2;
  }
  param_1[5] = fVar1;
  return;
}



// FUNCTION 14285da40 FUN_14285da40 body=687 status=ok
// SIG undefined FUN_14285da40(void)

void FUN_14285da40(float *param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_e8 [32];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar9 = *(longlong **)(param_2 + 0xa8);
  if (plVar9 != (longlong *)0x0) {
    bVar4 = true;
    do {
      fVar10 = *(float *)*plVar9;
      fVar11 = ((float *)*plVar9)[1];
      local_b8 = *param_3 * fVar10 + param_3[2] * fVar11 + param_3[4];
      local_b4 = fVar10 * param_3[1] + fVar11 * param_3[3] + param_3[5];
      if (1 < (int)plVar9[1]) {
        iVar8 = 5;
        lVar6 = 0x300000000;
        lVar5 = 0x200000000;
        lVar7 = 0;
        do {
          lVar3 = *plVar9;
          fVar10 = *(float *)(lVar3 + (lVar6 >> 0x1e));
          fVar11 = *(float *)(lVar3 + (lVar5 >> 0x1e));
          fVar12 = *param_3;
          fVar13 = param_3[2];
          fVar14 = param_3[4];
          local_b0 = fVar11 * fVar12 + fVar10 * fVar13 + fVar14;
          fVar1 = param_3[1];
          fVar2 = param_3[3];
          fVar15 = param_3[5];
          local_ac = fVar11 * fVar1 + fVar10 * fVar2 + fVar15;
          fVar10 = *(float *)(lVar3 + (longlong)iVar8 * 4);
          fVar11 = *(float *)(lVar3 + (longlong)(iVar8 + -1) * 4);
          local_a8 = fVar11 * fVar12 + fVar13 * fVar10 + fVar14;
          local_a4 = fVar11 * fVar1 + fVar10 * fVar2 + fVar15;
          fVar10 = *(float *)(lVar3 + 0x18 + lVar7 * 8);
          fVar11 = *(float *)(lVar3 + 0x1c + lVar7 * 8);
          fVar14 = fVar12 * fVar10 + fVar13 * fVar11 + fVar14;
          fVar15 = fVar10 * fVar1 + fVar2 * fVar11 + fVar15;
          local_a0 = fVar14;
          local_9c = fVar15;
          FUN_14285d4ce(&local_c8,&local_b8);
          fVar10 = local_c4;
          fVar11 = local_c8;
          fVar12 = local_c0;
          fVar13 = local_bc;
          if (!bVar4) {
            fVar10 = param_1[1];
            if (local_c4 <= param_1[1]) {
              fVar10 = local_c4;
            }
            fVar11 = *param_1;
            if (local_c8 <= *param_1) {
              fVar11 = local_c8;
            }
            fVar12 = param_1[2];
            if (param_1[2] <= local_c0) {
              fVar12 = local_c0;
            }
            fVar13 = param_1[3];
            if (param_1[3] <= local_bc) {
              fVar13 = local_bc;
            }
          }
          lVar7 = lVar7 + 3;
          *param_1 = fVar11;
          param_1[1] = fVar10;
          param_1[2] = fVar12;
          param_1[3] = fVar13;
          iVar8 = iVar8 + 6;
          lVar5 = lVar5 + 0x600000000;
          lVar6 = lVar6 + 0x600000000;
          bVar4 = false;
          local_b8 = fVar14;
          local_b4 = fVar15;
        } while (lVar7 < (longlong)(int)plVar9[1] + -1);
      }
      plVar9 = (longlong *)plVar9[4];
    } while (plVar9 != (longlong *)0x0);
  }
  if ((local_90 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14285dcf0 FUN_14285dcf0 body=860 status=ok
// SIG undefined FUN_14285dcf0(void)

float * FUN_14285dcf0(longlong param_1,char *param_2,float *param_3,char *param_4)

{
  int iVar1;
  float fVar2;
  char *pcVar3;
  void *_Src;
  int iVar4;
  float *pfVar5;
  char *_Str1;
  char *_Str1_00;
  char *_Str2;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pcVar3 = *(char **)(param_1 + 0x9c30);
  if (pcVar3 != (char *)0x0) {
    iVar1 = *(int *)(param_1 + 0x9c00);
    _Str1 = pcVar3;
    do {
      iVar4 = strcmp(_Str1,param_2);
      if (iVar4 == 0) {
        _Src = *(void **)(_Str1 + 0xd0);
        _Str1_00 = _Str1;
        while (_Src == (void *)0x0) {
          _Str2 = _Str1_00 + 0x40;
          _Str1_00 = pcVar3;
          while (iVar4 = strcmp(_Str1_00,_Str2), iVar4 != 0) {
            _Str1_00 = *(char **)(_Str1_00 + 0xd8);
            if (_Str1_00 == (char *)0x0) {
              return (float *)0x0;
            }
          }
          _Src = *(void **)(_Str1_00 + 0xd0);
        }
        fVar2 = *(float *)(_Str1_00 + 200);
        pfVar5 = malloc((longlong)(int)fVar2 * 8 + 0x28);
        if (pfVar5 == (float *)0x0) {
          return (float *)0x0;
        }
        if (_Str1[0xad] == '\x01') {
          fVar8 = *param_3;
          fVar9 = param_3[1];
          fVar12 = param_3[2] - fVar8;
          fVar10 = param_3[3] - fVar9;
        }
        else {
          fVar8 = *(float *)(param_1 + 40000);
          fVar9 = *(float *)(param_1 + 0x9c44);
          fVar12 = *(float *)(param_1 + 0x9c48);
          fVar10 = *(float *)(param_1 + 0x9c4c);
        }
        if (_Str1[0x80] == '\x02') {
          fVar6 = (float)FUN_14285c961(param_1,*(undefined8 *)(_Str1 + 0x84),fVar8,fVar12);
          fVar7 = (float)FUN_14285c961(param_1,*(undefined8 *)(_Str1 + 0x8c),fVar9,fVar10);
          fVar8 = (float)FUN_14285c961(param_1,*(undefined8 *)(_Str1 + 0x94),fVar8,fVar12);
          fVar12 = (float)FUN_14285c961(param_1,*(undefined8 *)(_Str1 + 0x9c),fVar9,fVar10);
          fVar8 = fVar8 - fVar6;
          fVar12 = fVar12 - fVar7;
          fVar11 = -fVar8;
        }
        else {
          fVar6 = (float)FUN_14285c961(param_1,*(undefined8 *)(_Str1 + 0x84),fVar8,fVar12);
          fVar7 = (float)FUN_14285c961(param_1,*(undefined8 *)(_Str1 + 0x8c),fVar9,fVar10);
          fVar8 = (float)FUN_14285c961(param_1,*(undefined8 *)(_Str1 + 0x9c),fVar8,fVar12);
          fVar9 = (float)FUN_14285c961(param_1,*(undefined8 *)(_Str1 + 0xa4),fVar9,fVar10);
          fVar11 = 0.0;
          fVar12 = (float)FUN_14285c961(param_1,*(undefined8 *)(_Str1 + 0x94),0,
                                        SQRT(fVar12 * fVar12 + fVar10 * fVar10) / 1.4142135);
          pfVar5[7] = fVar8 / fVar12;
          pfVar5[8] = fVar9 / fVar12;
          fVar8 = 0.0;
        }
        *pfVar5 = fVar12;
        pfVar5[1] = fVar11;
        pfVar5[2] = fVar8;
        pfVar5[3] = fVar12;
        pfVar5[4] = fVar6;
        pfVar5[5] = fVar7;
        FUN_14285c9ec(pfVar5,_Str1 + 0xb0);
        FUN_14285c9ec(pfVar5,param_1 + (longlong)iVar1 * 0x138 + 0x40);
        *(char *)(pfVar5 + 6) = _Str1[0xac];
        memcpy(pfVar5 + 10,_Src,(longlong)(int)fVar2 * 8);
        pfVar5[9] = fVar2;
        *param_4 = _Str1[0x80];
        return pfVar5;
      }
      _Str1 = *(char **)(_Str1 + 0xd8);
    } while (_Str1 != (char *)0x0);
  }
  return (float *)0x0;
}



// FUNCTION 14285e04c FUN_14285e04c body=365 status=ok
// SIG undefined FUN_14285e04c(void)

void FUN_14285e04c(float *param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = param_1[1] * 0.0 + *param_1;
  fVar3 = param_1[3] * 0.0 + param_1[2];
  param_2 = param_1[5] * 0.0 + param_1[4] + param_2;
  fVar1 = *param_1 * 0.0 + param_1[1];
  fVar2 = param_1[2] * 0.0 + param_1[3];
  param_3 = param_1[4] * 0.0 + param_1[5] + param_3;
  param_1[1] = fVar4 * 0.0 + fVar1 * param_5;
  param_1[3] = fVar3 * 0.0 + fVar2 * param_5;
  param_1[5] = param_2 * 0.0 + param_3 * param_5 + 0.0;
  *param_1 = fVar4 * param_4 + fVar1 * 0.0;
  param_1[2] = fVar3 * param_4 + fVar2 * 0.0;
  param_1[4] = param_4 * param_2 + param_3 * 0.0 + 0.0;
  return;
}



// FUNCTION 14285e1b9 FUN_14285e1b9 body=255 status=ok
// SIG undefined FUN_14285e1b9(void)

ulonglong FUN_14285e1b9(longlong param_1,longlong param_2,int param_3,int *param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  double dVar4;
  byte *pbVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_4 = 0;
  for (uVar6 = 0; *(char *)(param_1 + uVar6) != '\0'; uVar6 = uVar6 + 1) {
    if (*(char *)(param_1 + uVar6) == '(') {
      pbVar5 = (byte *)(param_1 + uVar6);
      cVar1 = '(';
      goto LAB_14285e204;
    }
  }
LAB_14285e21a:
  uVar6 = 1;
  goto LAB_14285e21f;
LAB_14285e204:
  if (cVar1 == '\0') goto LAB_14285e21a;
  if (cVar1 == ')') {
    if ((byte *)(param_1 + uVar6) <= pbVar5) goto LAB_14285e21f;
    goto LAB_14285e260;
  }
  cVar1 = *(char *)(param_1 + 1 + uVar6);
  uVar6 = uVar6 + 1;
  goto LAB_14285e204;
LAB_14285e260:
  do {
    bVar2 = *pbVar5;
    if ((((ulonglong)bVar2 < 0x2f) && ((0x680000000000U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)) ||
       (0xf5 < (byte)(bVar2 - 0x3a))) {
      if (param_3 <= *param_4) {
        uVar6 = 0;
        break;
      }
      pbVar5 = (byte *)FUN_14285cb5d(pbVar5,local_88);
      dVar4 = (double)FUN_14285c7e1(local_88);
      iVar3 = *param_4;
      *param_4 = iVar3 + 1;
      *(float *)(param_2 + (longlong)iVar3 * 4) = (float)dVar4;
    }
    else {
      pbVar5 = pbVar5 + 1;
    }
  } while (pbVar5 < (byte *)(param_1 + uVar6));
LAB_14285e21f:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 14285e2b9 FUN_14285e2b9 body=199 status=ok
// SIG undefined FUN_14285e2b9(void)

void FUN_14285e2b9(longlong param_1,float param_2,float param_3,byte param_4)

{
  byte *pbVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (0 < (longlong)iVar4) {
    lVar5 = *(longlong *)(param_1 + 0x20);
    lVar6 = (longlong)iVar4 * 0x20;
    fVar8 = param_2 - *(float *)(lVar5 + -0x20 + lVar6);
    fVar9 = param_3 - *(float *)(lVar5 + -0x1c + lVar6);
    if (fVar8 * fVar8 + fVar9 * fVar9 < *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc)) {
      pbVar1 = (byte *)(lVar5 + lVar6 + -4);
      *pbVar1 = *pbVar1 | param_4;
      return;
    }
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar4 < iVar2) {
    pvVar3 = *(void **)(param_1 + 0x20);
  }
  else {
    uVar7 = 0x40;
    if (0 < iVar2) {
      uVar7 = (ulonglong)(uint)(iVar2 * 2);
    }
    *(int *)(param_1 + 0x2c) = (int)uVar7;
    pvVar3 = realloc(*(void **)(param_1 + 0x20),uVar7 << 5);
    *(void **)(param_1 + 0x20) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x28);
  }
  lVar5 = (longlong)iVar4 * 0x20;
  *(float *)((longlong)pvVar3 + lVar5) = param_2;
  *(float *)((longlong)pvVar3 + lVar5 + 4) = param_3;
  *(byte *)((longlong)pvVar3 + lVar5 + 0x1c) = param_4;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}



// FUNCTION 14285e380 FUN_14285e380 body=748 status=ok
// SIG undefined FUN_14285e380(void)

void FUN_14285e380(longlong param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,float param_9,int param_10,
                  undefined4 param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_10 < 0xb) {
    param_10 = param_10 + 1;
    do {
      fVar1 = param_8 - param_2;
      fVar2 = param_9 - param_3;
      fVar3 = (param_4 - param_8) * fVar2 - (param_5 - param_9) * fVar1;
      fVar5 = -fVar3;
      if (-fVar3 <= fVar3) {
        fVar5 = fVar3;
      }
      fVar4 = (param_6 - param_8) * fVar2 - (param_7 - param_9) * fVar1;
      fVar3 = -fVar4;
      if (-fVar4 <= fVar4) {
        fVar3 = fVar4;
      }
      if ((fVar3 + fVar5) * (fVar3 + fVar5) <
          (fVar1 * fVar1 + fVar2 * fVar2) * *(float *)(param_1 + 8)) {
        FUN_14285e2b9(param_1,param_8,param_9,param_11);
        return;
      }
      param_3 = param_5 + param_3;
      fVar5 = (param_7 + param_5) * 0.5;
      param_2 = param_4 + param_2;
      fVar1 = (param_6 + param_4) * 0.5;
      param_7 = (param_7 + param_9) * 0.5;
      param_6 = (param_6 + param_8) * 0.5;
      param_4 = (fVar1 + param_6) * 0.5;
      param_5 = (fVar5 + param_7) * 0.5;
      param_2 = (param_4 + (fVar1 + param_2 * 0.5) * 0.5) * 0.5;
      param_3 = (param_5 + (fVar5 + param_3 * 0.5) * 0.5) * 0.5;
      FUN_14285e380(param_1);
      param_10 = param_10 + 1;
    } while (param_10 != 0xc);
  }
  return;
}



// FUNCTION 14285e66c FUN_14285e66c body=252 status=ok
// SIG undefined FUN_14285e66c(void)

void FUN_14285e66c(longlong param_1,uint param_2,float param_3,uint param_4,float param_5)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  
  if ((param_3 != param_5) || (NAN(param_3) || NAN(param_5))) {
    iVar6 = *(int *)(param_1 + 0x18);
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar6 < iVar1) {
      pvVar5 = *(void **)(param_1 + 0x10);
    }
    else {
      uVar8 = 0x40;
      if (0 < iVar1) {
        uVar8 = (ulonglong)(uint)(iVar1 * 2);
      }
      *(int *)(param_1 + 0x1c) = (int)uVar8;
      pvVar5 = realloc(*(void **)(param_1 + 0x10),uVar8 << 5);
      *(void **)(param_1 + 0x10) = pvVar5;
      if (pvVar5 == (void *)0x0) {
        return;
      }
      iVar6 = *(int *)(param_1 + 0x18);
    }
    lVar7 = (longlong)iVar6 * 0x20;
    *(int *)(param_1 + 0x18) = iVar6 + 1;
    bVar3 = param_3 < param_5;
    bVar2 = param_3 < param_5;
    fVar9 = param_5;
    uVar4 = param_4;
    if (param_5 <= param_3) {
      fVar9 = param_3;
      uVar4 = param_2;
      param_3 = param_5;
    }
    *(uint *)((longlong)pvVar5 + lVar7) = ~-(uint)bVar2 & param_4 | -(uint)bVar2 & param_2;
    *(float *)((longlong)pvVar5 + lVar7 + 4) = param_3;
    *(uint *)((longlong)pvVar5 + lVar7 + 8) = uVar4;
    *(float *)((longlong)pvVar5 + lVar7 + 0xc) = fVar9;
    *(uint *)((longlong)pvVar5 + lVar7 + 0x10) = (uint)bVar3 * 2 + -1;
  }
  return;
}



// FUNCTION 14285e768 FUN_14285e768 body=171 status=ok
// SIG undefined FUN_14285e768(void)

void FUN_14285e768(longlong param_1,uint param_2,uint param_3,uint param_4,uint *param_5,
                  uint *param_6)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar1 = (int)param_3 >> 10;
  uVar3 = (int)param_4 >> 10;
  if ((int)uVar1 < (int)*param_5) {
    *param_5 = uVar1;
  }
  if ((int)*param_6 < (int)uVar3) {
    *param_6 = uVar3;
  }
  if (-1 < (int)uVar3 && (int)uVar1 < (int)param_2) {
    if (uVar1 == uVar3) {
      *(char *)(param_1 + (ulonglong)uVar1) =
           *(char *)(param_1 + (ulonglong)uVar1) + (char)((param_4 - param_3) * 0x33 >> 10);
    }
    else {
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      else {
        *(char *)(param_1 + (ulonglong)uVar1) =
             *(char *)(param_1 + (ulonglong)uVar1) +
             (char)((0x400 - (param_3 & 0x3ff)) * 0x33 >> 10);
        uVar1 = uVar1 + 1;
      }
      if ((int)uVar3 < (int)param_2) {
        *(char *)(param_1 + (ulonglong)uVar3) =
             *(char *)(param_1 + (ulonglong)uVar3) + (char)((param_4 & 0x3ff) * 0x33 >> 10);
        param_2 = uVar3;
      }
      if ((int)uVar1 < (int)param_2) {
        uVar2 = (ulonglong)uVar1;
        do {
          *(char *)(param_1 + uVar2) = *(char *)(param_1 + uVar2) + '3';
          uVar2 = uVar2 + 1;
        } while (uVar2 < param_2);
      }
    }
  }
  return;
}



// FUNCTION 14285e813 FUN_14285e813 body=103 status=ok
// SIG undefined FUN_14285e813(void)

void FUN_14285e813(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar7 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar7 < iVar2) {
    pvVar6 = *(void **)(param_1 + 0x20);
  }
  else {
    uVar8 = 0x40;
    if (0 < iVar2) {
      uVar8 = (ulonglong)(uint)(iVar2 * 2);
    }
    *(int *)(param_1 + 0x2c) = (int)uVar8;
    pvVar6 = realloc(*(void **)(param_1 + 0x20),uVar8 << 5);
    *(void **)(param_1 + 0x20) = pvVar6;
    if (pvVar6 == (void *)0x0) {
      return;
    }
    iVar7 = *(int *)(param_1 + 0x28);
  }
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[3];
  puVar1 = (undefined8 *)((longlong)pvVar6 + (longlong)iVar7 * 0x20 + 0x10);
  *puVar1 = param_2[2];
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)((longlong)pvVar6 + (longlong)iVar7 * 0x20);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}



// FUNCTION 14285e87a FUN_14285e87a body=587 status=ok
// SIG undefined FUN_14285e87a(void)

void FUN_14285e87a(longlong param_1,float param_2,int param_3)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  byte *pbVar8;
  int iVar9;
  byte bVar10;
  float *pfVar11;
  longlong lVar12;
  byte bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if (0 < (longlong)*(int *)(param_1 + 0x28)) {
    pfVar3 = *(float **)(param_1 + 0x20);
    pfVar5 = pfVar3 + 1;
    iVar9 = 0;
    pfVar11 = pfVar3 + (longlong)*(int *)(param_1 + 0x28) * 8 + -8;
    do {
      pfVar7 = pfVar3;
      fVar14 = pfVar5[-1] - *pfVar11;
      pfVar11[2] = fVar14;
      fVar15 = *pfVar5 - pfVar11[1];
      pfVar11[3] = fVar15;
      fVar16 = SQRT(fVar14 * fVar14 + fVar15 * fVar15);
      if (1e-06 < fVar16) {
        pfVar11[2] = fVar14 * (1.0 / fVar16);
        pfVar11[3] = fVar15 * (1.0 / fVar16);
      }
      pfVar11[4] = fVar16;
      iVar9 = iVar9 + 1;
      uVar2 = *(uint *)(param_1 + 0x28);
      pfVar5 = pfVar5 + 8;
      pfVar3 = pfVar7 + 8;
      pfVar11 = pfVar7;
    } while (iVar9 < (int)uVar2);
    if (0 < (int)uVar2) {
      lVar4 = *(longlong *)(param_1 + 0x20);
      lVar6 = lVar4 + (ulonglong)uVar2 * 0x20;
      pbVar8 = (byte *)(lVar4 + 0x1c);
      iVar9 = 0;
      lVar12 = lVar6 + -0x20;
      fVar14 = *(float *)(lVar6 + -0x18);
      fVar15 = *(float *)(lVar6 + -0x14);
      do {
        lVar6 = lVar4;
        fVar16 = *(float *)(pbVar8 + -0x14);
        fVar1 = *(float *)(pbVar8 + -0x10);
        fVar15 = (fVar15 + fVar1) * 0.5;
        *(float *)(pbVar8 + -8) = fVar15;
        fVar17 = (-fVar16 - fVar14) * 0.5;
        *(float *)(pbVar8 + -4) = fVar17;
        fVar14 = fVar15 * fVar15 + fVar17 * fVar17;
        if (1e-06 < fVar14) {
          fVar18 = 600.0;
          if (1.0 / fVar14 <= 600.0) {
            fVar18 = 1.0 / fVar14;
          }
          *(float *)(pbVar8 + -8) = fVar15 * fVar18;
          *(float *)(pbVar8 + -4) = fVar17 * fVar18;
        }
        bVar13 = *pbVar8 & 1;
        *pbVar8 = bVar13;
        bVar10 = bVar13;
        if (0.0 < *(float *)(lVar12 + 0xc) * fVar16 - *(float *)(lVar12 + 8) * fVar1) {
          bVar10 = bVar13 + 4;
          *pbVar8 = bVar10;
        }
        if ((bVar13 != 0) && ((param_3 - 1U < 2 || (fVar14 * param_2 * param_2 < 1.0)))) {
          *pbVar8 = bVar10 | 2;
        }
        iVar9 = iVar9 + 1;
        pbVar8 = pbVar8 + 0x20;
        lVar4 = lVar6 + 0x20;
        lVar12 = lVar6;
        fVar14 = fVar16;
        fVar15 = fVar1;
      } while (iVar9 < *(int *)(param_1 + 0x28));
    }
  }
  return;
}



// FUNCTION 14285eac5 FUN_14285eac5 body=3096 status=ok
// SIG undefined FUN_14285eac5(void)

void FUN_14285eac5(longlong param_1,float *param_2,int param_3,int param_4,int param_5,int param_6,
                  float param_7)

{
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 extraout_var [12];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_1a8 [32];
  float local_188;
  float local_180;
  float local_178;
  int local_170;
  undefined4 local_168;
  float local_160;
  float local_15c;
  int local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  int local_140;
  float local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float fStack_114;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  fVar14 = param_7 * 0.5;
  fVar8 = acosf(fVar14 / (*(float *)(param_1 + 8) + fVar14));
  auVar9 = roundss(ZEXT416(0),ZEXT416((uint)(3.1415927 / (fVar8 + fVar8))),10);
  local_158 = 2;
  if (2 < (int)auVar9._0_4_) {
    local_158 = (int)auVar9._0_4_;
  }
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0.0;
  fStack_114 = 0.0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  fVar8 = *param_2;
  local_160 = fVar14;
  if (param_4 == 0) {
    fVar12 = param_2[1];
    fVar11 = param_2[8] - fVar8;
    fVar17 = param_2[9] - fVar12;
    fVar16 = SQRT(fVar11 * fVar11 + fVar17 * fVar17);
    if (1e-06 < fVar16) {
      fVar11 = fVar11 * (1.0 / fVar16);
    }
    pfVar6 = param_2 + 8;
    param_3 = param_3 + -1;
    fVar17 = (float)(~-(uint)(1e-06 < fVar16) & (uint)fVar17 |
                    (uint)(fVar17 * (1.0 / fVar16)) & -(uint)(1e-06 < fVar16));
    iVar5 = 1;
    local_150 = 0.0;
    if (param_6 == 2) {
      fVar8 = fVar8 + -fVar11 * fVar14;
      fVar12 = fVar12 + -fVar17 * fVar14;
      fVar16 = -fVar17 * fVar14 + fVar8;
      fVar8 = fVar17 * fVar14 + fVar8;
      fVar17 = fVar12 + -fVar11 * fVar14;
      local_188 = fVar17;
      FUN_14285e66c(param_1,fVar16);
      fStack_114 = fVar11 * fVar14 + fVar12;
LAB_14285ee62:
      local_138 = CONCAT44(fVar17,(float)local_138);
    }
    else if (param_6 == 1) {
      local_178 = param_7;
      local_168 = 0;
      local_188 = fVar11;
      local_180 = fVar17;
      local_170 = local_158;
      FUN_14285f6de(param_1,&local_118,&local_138,param_2);
      fVar16 = local_118;
      fVar8 = (float)local_138;
    }
    else {
      if (param_6 == 0) {
        fVar16 = fVar8 - fVar17 * fVar14;
        fVar8 = fVar17 * fVar14 + fVar8;
        fVar17 = fVar12 - fVar11 * fVar14;
        local_188 = fVar17;
        FUN_14285e66c(param_1,fVar16);
        fStack_114 = fVar11 * fVar14 + fVar12;
        goto LAB_14285ee62;
      }
      fVar16 = 0.0;
      fVar8 = 0.0;
    }
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar17 = 0.0;
    pfVar4 = param_2;
  }
  else {
    lVar2 = (longlong)param_3;
    fVar8 = fVar8 - param_2[lVar2 * 8 + -8];
    fVar12 = param_2[1] - param_2[lVar2 * 8 + -7];
    fVar17 = SQRT(fVar8 * fVar8 + fVar12 * fVar12);
    if (1e-06 < fVar17) {
      fVar8 = fVar8 * (1.0 / fVar17);
    }
    fVar12 = (float)(~-(uint)(1e-06 < fVar17) & (uint)fVar12 |
                    (uint)(fVar12 * (1.0 / fVar17)) & -(uint)(1e-06 < fVar17));
    fVar13 = fVar17 * fVar8 * 0.5 + param_2[lVar2 * 8 + -8];
    fVar17 = fVar17 * fVar12 * 0.5 + param_2[lVar2 * 8 + -7];
    fVar12 = fVar12 * fVar14;
    fVar16 = fVar13 - fVar12;
    fVar11 = fVar8 * fVar14 + fVar17;
    fVar12 = fVar12 + fVar13;
    fVar17 = fVar17 - fVar8 * fVar14;
    local_138 = (ulonglong)(uint)fVar17 << 0x20;
    iVar5 = 0;
    pfVar4 = param_2 + lVar2 * 8 + -8;
    pfVar6 = param_2;
    fVar8 = fVar12;
    local_150 = fVar16;
    local_118 = fVar16;
    fStack_114 = fVar11;
  }
  if (iVar5 < param_3) {
    local_13c = (float)local_158;
    pfVar3 = pfVar4;
    fVar14 = fStack_114;
    local_14c = fVar12;
    local_148 = fVar11;
    local_144 = fVar17;
    local_140 = param_4;
    do {
      pfVar4 = pfVar6;
      fVar17 = local_160;
      fVar12 = pfVar4[7];
      if (((uint)fVar12 & 1) == 0) {
        fVar12 = *pfVar4;
        fVar17 = pfVar4[5] * local_160;
        fVar16 = fVar12 - fVar17;
        fVar19 = pfVar4[1] - pfVar4[6] * local_160;
        fVar11 = pfVar4[6] * local_160 + pfVar4[1];
        local_188 = fVar14;
        FUN_14285e66c(param_1,fVar16);
        local_188 = fVar11;
        FUN_14285e66c(param_1,fVar8);
        fVar8 = fVar17 + fVar12;
      }
      else if (param_5 == 2) {
LAB_14285f210:
        fVar12 = *pfVar4;
        fVar17 = pfVar4[1];
        fVar13 = pfVar3[3] * local_160;
        fVar18 = pfVar3[2] * local_160;
        local_15c = fVar17 - fVar18;
        fVar15 = pfVar4[3] * local_160;
        local_154 = fVar12 - fVar15;
        fVar19 = pfVar4[2] * local_160 + fVar17;
        fVar11 = fVar17 - pfVar4[2] * local_160;
        local_188 = fVar14;
        FUN_14285e66c(param_1,fVar12 - fVar13);
        fVar16 = local_154;
        local_188 = fVar18 + fVar17;
        FUN_14285e66c(param_1,local_154);
        local_188 = local_15c;
        FUN_14285e66c(param_1,fVar8);
        local_188 = fVar11;
        FUN_14285e66c(param_1,fVar13 + fVar12);
        fVar8 = fVar15 + fVar12;
      }
      else if (param_5 == 1) {
        fVar12 = pfVar4[3];
        fVar17 = pfVar4[2];
        fVar16 = atan2f(-pfVar3[2],pfVar3[3]);
        fVar17 = atan2f(-fVar17,fVar12);
        fVar12 = local_160;
        fVar17 = fVar17 - fVar16;
        fVar17 = (float)(~-(uint)(fVar17 < 3.1415927) & (uint)fVar17 |
                        (uint)(fVar17 + 6.2831855) & -(uint)(fVar17 < 3.1415927));
        fVar17 = (float)(~-(uint)(3.1415927 < fVar17) & (uint)fVar17 |
                        (uint)(fVar17 + -6.2831855) & -(uint)(3.1415927 < fVar17));
        auVar9._0_8_ = CONCAT44(extraout_var._0_4_,fVar17) ^ 0x8000000080000000;
        auVar9._8_4_ = extraout_var._4_4_ ^ 0x80000000;
        auVar9._12_4_ = extraout_var._8_4_ ^ 0x80000000;
        if (-fVar17 <= fVar17) {
          auVar9._0_4_ = fVar17;
        }
        auVar10._4_12_ = auVar9._4_12_;
        auVar10._0_4_ = (auVar9._0_4_ / 3.1415927) * local_13c;
        auVar9 = roundss(auVar10,auVar10,10);
        iVar1 = (int)auVar9._0_4_;
        if ((int)auVar9._0_4_ < 3) {
          iVar1 = 2;
        }
        if (local_158 <= iVar1) {
          iVar1 = local_158;
        }
        local_154 = (float)(iVar1 + -1);
        iVar7 = 0;
        fVar13 = fVar8;
        local_15c = fVar16;
        do {
          fVar16 = ((float)iVar7 / local_154) * fVar17 + local_15c;
          fVar8 = cosf(fVar16);
          fVar8 = fVar8 * fVar12;
          fVar11 = sinf(fVar16);
          fVar11 = fVar11 * fVar12;
          fVar16 = *pfVar4 - fVar8;
          fVar19 = pfVar4[1] - fVar11;
          fVar8 = fVar8 + *pfVar4;
          fVar11 = fVar11 + pfVar4[1];
          local_188 = fVar14;
          FUN_14285e66c(param_1,fVar16);
          local_188 = fVar11;
          FUN_14285e66c(param_1,fVar13);
          iVar7 = iVar7 + 1;
          fVar13 = fVar8;
          fVar14 = fVar19;
        } while (iVar1 != iVar7);
      }
      else {
        if (((uint)fVar12 & 2) != 0) goto LAB_14285f210;
        fVar11 = pfVar3[2];
        fVar13 = pfVar4[2];
        fVar18 = pfVar4[3];
        fVar15 = pfVar3[3] * local_160;
        if (((uint)fVar12 & 4) == 0) {
          fVar12 = pfVar4[1];
          fVar11 = fVar11 * local_160;
          fVar16 = *pfVar4 - fVar18 * local_160;
          fVar19 = fVar13 * local_160 + fVar12;
          local_188 = fVar14;
          FUN_14285e66c(param_1,*pfVar4 - fVar15);
          local_188 = fVar11 + fVar12;
          FUN_14285e66c(param_1,fVar16);
          fVar14 = pfVar4[5];
          fVar12 = *pfVar4;
          fVar11 = pfVar4[6] * fVar17 + pfVar4[1];
          local_188 = fVar11;
          FUN_14285e66c(param_1,fVar8);
          fVar8 = fVar14 * fVar17 + fVar12;
        }
        else {
          local_15c = *pfVar4 - pfVar4[5] * local_160;
          fVar19 = pfVar4[1] - pfVar4[6] * local_160;
          local_188 = fVar14;
          FUN_14285e66c(param_1);
          fVar14 = *pfVar4;
          local_188 = pfVar4[1] - fVar11 * fVar17;
          fVar11 = pfVar4[1] - fVar13 * fVar17;
          FUN_14285e66c(param_1,fVar8);
          local_188 = fVar11;
          FUN_14285e66c(param_1,fVar15 + fVar14);
          fVar16 = local_15c;
          fVar8 = fVar18 * fVar17 + fVar14;
        }
      }
      pfVar6 = pfVar4 + 8;
      iVar5 = iVar5 + 1;
      pfVar3 = pfVar4;
      fVar14 = fVar19;
    } while (iVar5 != param_3);
    local_138 = (ulonglong)(uint)fVar11 << 0x20;
    param_4 = local_140;
    fVar17 = local_144;
    fStack_114 = fVar19;
  }
  local_138 = CONCAT44(local_138._4_4_,fVar8);
  local_118 = fVar16;
  if (param_4 == 0) {
    fVar14 = *pfVar6;
    fVar12 = pfVar6[1];
    fVar11 = fVar14 - *pfVar4;
    fVar17 = fVar12 - pfVar4[1];
    fVar16 = SQRT(fVar11 * fVar11 + fVar17 * fVar17);
    if (1e-06 < fVar16) {
      fVar11 = fVar11 * (1.0 / fVar16);
    }
    fVar17 = (float)(~-(uint)(1e-06 < fVar16) & (uint)fVar17 |
                    (uint)(fVar17 * (1.0 / fVar16)) & -(uint)(1e-06 < fVar16));
    if (param_6 != 2) {
      if (param_6 == 1) {
        local_180 = -fVar17;
        local_188 = -fVar11;
        local_170 = local_158;
        local_178 = param_7;
        local_168 = 1;
        FUN_14285f6de(param_1,&local_138,&local_118,pfVar6);
      }
      else if (param_6 == 0) {
        fVar11 = fVar11 * local_160;
        fVar16 = fVar14 - fVar17 * local_160;
        local_188 = fVar11 + fVar12;
        FUN_14285e66c(param_1,fVar17 * local_160 + fVar14);
        local_188 = fVar12 - fVar11;
        FUN_14285e66c(param_1,fVar8);
        local_188 = fStack_114;
        goto LAB_14285f65d;
      }
      if ((local_f0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    fVar11 = fVar11 * local_160;
    fVar17 = fVar17 * local_160;
    fVar16 = (fVar14 + fVar11) - fVar17;
    local_188 = fVar12 + fVar17 + fVar11;
    FUN_14285e66c(param_1,fVar17 + fVar14 + fVar11);
    local_188 = (fVar12 + fVar17) - fVar11;
    FUN_14285e66c(param_1,fVar8);
    local_188 = fStack_114;
  }
  else {
    local_188 = fStack_114;
    FUN_14285e66c(param_1,local_150);
    fVar16 = fVar8;
    local_188 = fVar17;
  }
LAB_14285f65d:
  FUN_14285e66c(param_1,fVar16);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_1a8);
}



// FUNCTION 14285f6de FUN_14285f6de body=670 status=ok
// SIG undefined FUN_14285f6de(void)

void FUN_14285f6de(undefined8 param_1,float *param_2,float *param_3,float *param_4,float param_5,
                  float param_6,float param_7,int param_8,int param_9)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  
  fVar1 = *param_4;
  fVar2 = param_4[1];
  local_f4 = 0.0;
  iVar3 = 0;
  local_f8 = 0.0;
  local_100 = 0.0;
  local_fc = 0.0;
  fVar5 = 0.0;
  fVar7 = 0.0;
  do {
    fVar9 = ((float)iVar3 / (float)(param_8 + -1)) * 3.1415927;
    fVar4 = cosf(fVar9);
    fVar4 = fVar4 * param_7 * 0.5;
    fVar9 = sinf(fVar9);
    fVar9 = fVar9 * param_7 * 0.5;
    fVar8 = -param_5 * fVar9 + -param_6 * fVar4 + fVar1;
    fVar6 = fVar9 * -param_6 + fVar4 * param_5 + fVar2;
    fVar4 = fVar6;
    fVar9 = fVar8;
    if ((iVar3 != 0) &&
       (FUN_14285e66c(param_1,fVar7,fVar5,fVar8,fVar6), fVar4 = local_f8, fVar9 = local_f4,
       iVar3 - param_8 == -1)) {
      local_100 = fVar8;
      local_fc = fVar6;
    }
    local_f4 = fVar9;
    local_f8 = fVar4;
    iVar3 = iVar3 + 1;
    fVar5 = fVar6;
    fVar7 = fVar8;
  } while (iVar3 != param_8);
  if (param_9 != 0) {
    FUN_14285e66c(param_1,*param_2,param_2[1],local_f4,local_f8);
    FUN_14285e66c(param_1,local_100,local_fc,*param_3,param_3[1]);
  }
  *param_2 = local_f4;
  param_2[1] = local_f8;
  *param_3 = local_100;
  param_3[1] = local_fc;
  return;
}



// FUNCTION 14285f97c FUN_14285f97c body=47 status=ok
// SIG undefined FUN_14285f97c(void)

void FUN_14285f97c(void)

{
  DAT_14c967c00 = 0;
  if (DAT_14c967bf8 != 0) {
    FUN_1400020a8();
  }
  FUN_14619aade(&DAT_14c967bb8);
  return;
}



// FUNCTION 14285f9ab FUN_14285f9ab body=49 status=ok
// SIG undefined FUN_14285f9ab(void)

void FUN_14285f9ab(void)

{
  FUN_144760e21(DAT_14c967c08,DAT_14c967c10);
  if (DAT_14c967c08 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14285f9dc FUN_14285f9dc body=17 status=ok
// SIG undefined FUN_14285f9dc(void)

void FUN_14285f9dc(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14c967c20;
  if (DAT_14c967c20 == 0) {
    return;
  }
  if (DAT_14c967c20 != 0) {
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



// FUNCTION 14285fa0a FUN_14285fa0a body=311 status=ok
// SIG undefined FUN_14285fa0a(void)

void FUN_14285fa0a(void)

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
  local_48 = 0x8000000149ecb446;
  local_34 = 0x11;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_1462783e2(&local_48);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/DeveloperSettings",&PTR_FUN_149ecb7b0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/DeveloperSettings",&PTR_FUN_149ecbb90,1,0);
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/DeveloperSettings",&PTR_FUN_149ecc030,1,&PTR_FUN_149ecc000);
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/DeveloperSettings",&PTR_FUN_149ecc6a0,1,&PTR_FUN_149ecc670);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/DeveloperSettings",&PTR_FUN_149ecca40,1,0);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14285fb44 FUN_14285fb44 body=55 status=ok
// SIG undefined FUN_14285fb44(void)

void FUN_14285fb44(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967c38 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967c38 = FUN_14171c317(FUN_14627895f,uVar1,L"EFontRasterizationMode");
  }
  return;
}



// FUNCTION 14285fb7b FUN_14285fb7b body=55 status=ok
// SIG undefined FUN_14285fb7b(void)

void FUN_14285fb7b(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967c80 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967c80 = FUN_14171c317(FUN_146278a8e,uVar1,L"EUINavigationRule");
  }
  return;
}



// FUNCTION 14285fbb2 FUN_14285fbb2 body=55 status=ok
// SIG undefined FUN_14285fbb2(void)

void FUN_14285fbb2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967c98 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967c98 = FUN_14171c317(FUN_146278abf,uVar1,L"EColorVisionDeficiency");
  }
  return;
}



// FUNCTION 14285fbe9 FUN_14285fbe9 body=55 status=ok
// SIG undefined FUN_14285fbe9(void)

void FUN_14285fbe9(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967cc8 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967cc8 = FUN_14171c317(FUN_146278af0,uVar1,L"EButtonClickMethod");
  }
  return;
}



// FUNCTION 14285fc20 FUN_14285fc20 body=55 status=ok
// SIG undefined FUN_14285fc20(void)

void FUN_14285fc20(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967ce0 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967ce0 = FUN_14171c317(FUN_146278b21,uVar1,L"EButtonTouchMethod");
  }
  return;
}



// FUNCTION 14285fc57 FUN_14285fc57 body=55 status=ok
// SIG undefined FUN_14285fc57(void)

void FUN_14285fc57(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967cf8 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967cf8 = FUN_14171c317(FUN_146278b52,uVar1,L"EButtonPressMethod");
  }
  return;
}



// FUNCTION 14285fc8e FUN_14285fc8e body=55 status=ok
// SIG undefined FUN_14285fc8e(void)

void FUN_14285fc8e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967d10 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967d10 = FUN_14171c317(FUN_146278b83,uVar1,L"EUINavigation");
  }
  return;
}



// FUNCTION 14285fcc5 FUN_14285fcc5 body=55 status=ok
// SIG undefined FUN_14285fcc5(void)

void FUN_14285fcc5(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967d28 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967d28 = FUN_14171c317(FUN_146278bb4,uVar1,L"EUINavigationAction");
  }
  return;
}



// FUNCTION 14285fcfc FUN_14285fcfc body=55 status=ok
// SIG undefined FUN_14285fcfc(void)

void FUN_14285fcfc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967d40 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967d40 = FUN_14171c317(FUN_146278be3,uVar1,L"ENavigationSource");
  }
  return;
}



// FUNCTION 14285fd33 FUN_14285fd33 body=55 status=ok
// SIG undefined FUN_14285fd33(void)

void FUN_14285fd33(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967d58 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967d58 = FUN_14171c317(FUN_146278c12,uVar1,L"ENavigationGenesis");
  }
  return;
}



// FUNCTION 14285fd6a FUN_14285fd6a body=55 status=ok
// SIG undefined FUN_14285fd6a(void)

void FUN_14285fd6a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967d70 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967d70 = FUN_14171c317(FUN_14171db21,uVar1,L"EHorizontalAlignment");
  }
  return;
}



// FUNCTION 14285fda1 FUN_14285fda1 body=55 status=ok
// SIG undefined FUN_14285fda1(void)

void FUN_14285fda1(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967d88 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967d88 = FUN_14171c317(FUN_14171db52,uVar1,L"EVerticalAlignment");
  }
  return;
}



// FUNCTION 14285fdd8 FUN_14285fdd8 body=55 status=ok
// SIG undefined FUN_14285fdd8(void)

void FUN_14285fdd8(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967da0 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967da0 = FUN_14171c317(FUN_146278c41,uVar1,L"EMenuPlacement");
  }
  return;
}



// FUNCTION 14285fe0f FUN_14285fe0f body=55 status=ok
// SIG undefined FUN_14285fe0f(void)

void FUN_14285fe0f(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967db8 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967db8 = FUN_14171c317(FUN_146278c70,uVar1,L"EOrientation");
  }
  return;
}



// FUNCTION 14285fe46 FUN_14285fe46 body=55 status=ok
// SIG undefined FUN_14285fe46(void)

void FUN_14285fe46(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967dd0 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967dd0 = FUN_14171c317(FUN_146278ca1,uVar1,L"EScrollDirection");
  }
  return;
}



// FUNCTION 14285fe7d FUN_14285fe7d body=55 status=ok
// SIG undefined FUN_14285fe7d(void)

void FUN_14285fe7d(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967de8 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967de8 = FUN_14171c317(FUN_146278cd0,uVar1,L"ETextCommit");
  }
  return;
}



// FUNCTION 14285feb4 FUN_14285feb4 body=55 status=ok
// SIG undefined FUN_14285feb4(void)

void FUN_14285feb4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967e00 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967e00 = FUN_14171c317(FUN_146278d01,uVar1,L"ESelectInfo");
  }
  return;
}



// FUNCTION 14285feeb FUN_14285feeb body=55 status=ok
// SIG undefined FUN_14285feeb(void)

void FUN_14285feeb(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967e18 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967e18 = FUN_14171c317(FUN_146278d30,uVar1,L"ESlatePostRT");
  }
  return;
}



// FUNCTION 14285ff22 FUN_14285ff22 body=55 status=ok
// SIG undefined FUN_14285ff22(void)

void FUN_14285ff22(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967e78 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967e78 = FUN_14171c317(FUN_146278ebc,uVar1,L"EWidgetPixelSnapping");
  }
  return;
}



// FUNCTION 14285ff5a FUN_14285ff5a body=49 status=ok
// SIG undefined FUN_14285ff5a(void)

void FUN_14285ff5a(undefined8 *param_1)

{
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xc] = 0;
  *(byte *)(param_1 + 0xd) = (*(byte *)(param_1 + 0xd) & 0xf8) + 1;
  return;
}



// FUNCTION 14285ff8c FUN_14285ff8c body=41 status=ok
// SIG undefined FUN_14285ff8c(void)

void FUN_14285ff8c(longlong param_1)

{
  double dVar1;
  
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xf8;
  dVar1 = (double)(**(code **)(*DAT_14c968098 + 0x60))();
  *(double *)(param_1 + 0x50) = dVar1 - *(double *)(param_1 + 0x60);
  return;
}



// FUNCTION 14285ffb5 FUN_14285ffb5 body=59 status=ok
// SIG undefined FUN_14285ffb5(void)

void FUN_14285ffb5(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c9680a0;
  if (DAT_14c9680a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c9680a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014285ffe5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14285fff0 FUN_14285fff0 body=59 status=ok
// SIG undefined FUN_14285fff0(void)

void FUN_14285fff0(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c968090;
  if (DAT_14c968090 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c968090 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142860020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14286002c FUN_14286002c body=538 status=ok
// SIG undefined FUN_14286002c(void)

void FUN_14286002c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  bool bVar18;
  double dVar19;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x21));
  iVar4 = (int)param_1[3];
  lVar15 = (longlong)iVar4;
  if (lVar15 != 0) {
    plVar14 = (longlong *)param_1[2];
    bVar3 = true;
    if ((*plVar14 != 0) && (plVar14[1] != 0)) {
      bVar3 = *(int *)(plVar14[1] + 8) < 1;
    }
    iVar11 = 0;
    iVar5 = 0;
LAB_1428600d5:
    do {
      if (iVar5 + 1 < iVar4) {
        lVar6 = (longlong)iVar5;
        lVar12 = lVar6 + 2;
        plVar7 = plVar14 + lVar6 * 2 + 3;
        bVar18 = true;
        lVar9 = -1;
        do {
          iVar8 = (int)lVar9;
          if ((plVar7[-1] == 0) || (*plVar7 == 0)) {
            if (!bVar3) {
              iVar13 = iVar5 - iVar8;
              iVar8 = -iVar8;
              goto LAB_142860180;
            }
          }
          else if ((bool)(*(int *)(*plVar7 + 8) < 1 ^ bVar3)) {
            iVar13 = iVar5 - iVar8;
            break;
          }
          bVar18 = lVar12 < lVar15;
          lVar9 = lVar9 + -1;
          lVar12 = lVar12 + 1;
          plVar7 = plVar7 + 2;
          iVar13 = iVar4;
        } while (lVar6 - lVar15 != lVar9);
      }
      else {
        bVar18 = false;
        iVar13 = iVar5 + 1;
      }
      iVar8 = iVar13 - iVar5;
      if (bVar3) {
        FUN_145e10c41(plVar14 + (longlong)iVar5 * 2,iVar8);
        bVar3 = false;
        iVar5 = iVar13;
        if (!bVar18) break;
        goto LAB_1428600d5;
      }
LAB_142860180:
      if (iVar11 != iVar5) {
        memmove(plVar14 + (longlong)iVar11 * 2,plVar14 + (longlong)iVar5 * 2,(longlong)iVar8 << 4);
      }
      iVar11 = iVar11 + iVar8;
      bVar3 = true;
      iVar5 = iVar13;
    } while (bVar18);
    *(int *)(param_1 + 3) = iVar11;
  }
  dVar19 = (double)(**(code **)(*param_1 + 0x60))(param_1);
  if ((longlong)(int)param_1[3] == 0) {
    uVar16 = 0;
  }
  else {
    plVar14 = (longlong *)param_1[2];
    plVar7 = plVar14 + (longlong)(int)param_1[3] * 2;
    uVar17 = 0;
    uVar16 = 0;
    do {
      plVar10 = (longlong *)plVar14[1];
      bVar3 = true;
      if (plVar10 == (longlong *)0x0) {
LAB_1428601f6:
        plVar10 = (longlong *)0x0;
        lVar15 = 0;
      }
      else {
        iVar4 = (int)plVar10[1];
        do {
          if (iVar4 == 0) goto LAB_1428601f6;
          LOCK();
          iVar5 = (int)plVar10[1];
          bVar18 = iVar4 == iVar5;
          if (bVar18) {
            *(int *)(plVar10 + 1) = iVar4 + 1;
            iVar5 = iVar4;
          }
          iVar4 = iVar5;
          UNLOCK();
        } while (!bVar18);
        lVar15 = *plVar14;
        bVar3 = false;
      }
      if ((*(char *)(lVar15 + 0x20) == '\0') &&
         (bVar18 = *(double *)(lVar15 + 0x18) <= dVar19, *(bool *)(lVar15 + 0x20) = bVar18,
         uVar16 = uVar17, bVar18)) {
        uVar17 = 1;
        uVar16 = 1;
      }
      if (!bVar3) {
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
      plVar14 = plVar14 + 2;
    } while (plVar14 != plVar7);
  }
  *(undefined1 *)((longlong)param_1 + 0x144) = uVar16;
                    /* WARNING: Could not recover jumptable at 0x000142860096. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x21));
  return;
}



// FUNCTION 142860246 FUN_142860246 body=51 status=ok
// SIG undefined FUN_142860246(void)

void FUN_142860246(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_140d2ceff();
  if (cVar1 != '\0') {
    FUN_140898514(param_1 + 0xd8,param_2);
    return;
  }
  return;
}



// FUNCTION 142860279 FUN_142860279 body=55 status=ok
// SIG undefined FUN_142860279(void)

void FUN_142860279(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967e98 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967e98 = FUN_14171c317(FUN_146278eeb,uVar1,L"ESlateDebuggingInputEvent");
  }
  return;
}



// FUNCTION 1428602b0 FUN_1428602b0 body=55 status=ok
// SIG undefined FUN_1428602b0(void)

void FUN_1428602b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967eb0 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967eb0 = FUN_14171c317(FUN_146278f1a,uVar1,L"ESlateDebuggingStateChangeEvent");
  }
  return;
}



// FUNCTION 1428602e7 FUN_1428602e7 body=55 status=ok
// SIG undefined FUN_1428602e7(void)

void FUN_1428602e7(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967ec8 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967ec8 = FUN_14171c317(FUN_146278f49,uVar1,L"ESlateDebuggingNavigationMethod");
  }
  return;
}



// FUNCTION 14286031e FUN_14286031e body=55 status=ok
// SIG undefined FUN_14286031e(void)

void FUN_14286031e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c967ee0 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c967ee0 = FUN_14171c317(FUN_146278f78,uVar1,L"ESlateDebuggingFocusEvent");
  }
  return;
}



// FUNCTION 142860355 FUN_142860355 body=69 status=ok
// SIG undefined FUN_142860355(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142860355(void)

{
  _DAT_14c967ef0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142860397. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c967ef8,1);
  return;
}



// FUNCTION 14286039a FUN_14286039a body=69 status=ok
// SIG undefined FUN_14286039a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14286039a(void)

{
  _DAT_14c967f00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428603dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c967f08,1);
  return;
}



// FUNCTION 1428603df FUN_1428603df body=69 status=ok
// SIG undefined FUN_1428603df(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428603df(void)

{
  _DAT_14c967f10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142860421. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c967f18,1);
  return;
}



// FUNCTION 142860424 FUN_142860424 body=41 status=ok
// SIG undefined FUN_142860424(void)

void FUN_142860424(void)

{
  DAT_14c967f68 = 0;
  if (DAT_14c967f60 != 0) {
    FUN_1400020a8();
  }
  FUN_145d61f56();
  return;
}



// FUNCTION 14286044e FUN_14286044e body=69 status=ok
// SIG undefined FUN_14286044e(void)

void FUN_14286044e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x48) + 0x40);
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x38);
    lVar3 = 0;
    do {
      FUN_14695408c(*(undefined8 *)(lVar1 + lVar3),param_2);
      lVar3 = lVar3 + 0x10;
    } while (lVar2 * 0x10 != lVar3);
  }
  return;
}



// FUNCTION 142860494 FUN_142860494 body=142 status=ok
// SIG undefined FUN_142860494(void)

void FUN_142860494(longlong param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  
  if ((((param_3 & 0x48) == 0) || (*(char *)(param_1 + 0x7b) == '\0')) &&
     (*(char *)(param_1 + 0x78) == '\0')) {
    *(byte *)(param_2 + 0x14) = *(byte *)(param_2 + 0x14) | param_3;
    if ((param_3 & 0x69) != 0) {
      FUN_146930164(*(undefined8 *)(param_1 + 0x18),param_2);
    }
    if (((*(char *)(param_1 + 0x7c) == '\0') && ((char)param_3 < '\0')) &&
       (*(char *)(param_1 + 0x7d) == '\0')) {
      FUN_1469301d6(*(undefined8 *)(param_1 + 0x20),param_2);
    }
    if ((param_3 & 0xbf) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x28);
      if (*(char *)(lVar1 + 0x33c) == '\x01') {
        FUN_1469314fa(lVar1,param_2);
        return;
      }
      FUN_1469336e0(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 142860522 FUN_142860522 body=437 status=ok
// SIG undefined FUN_142860522(void)

void FUN_142860522(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  byte bVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  byte *local_50;
  undefined1 local_48;
  undefined1 local_40 [5];
  byte local_3b;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14032ae96(param_1 + 0x10);
  plVar6 = *(longlong **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
  lVar8 = *param_2;
  *(longlong *)(param_1 + 0x48) = lVar8;
  plVar6 = (longlong *)param_2[1];
  plVar5 = *(longlong **)(param_1 + 0x50);
  if (plVar5 != plVar6) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(param_1 + 0x50);
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
    *(longlong **)(param_1 + 0x50) = plVar6;
    lVar8 = *param_2;
    plVar6 = (longlong *)param_2[1];
  }
  lVar2 = DAT_14c98dec8;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    lVar2 = DAT_14c98dec8;
    UNLOCK();
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
  }
  if (lVar8 != lVar2) {
    bVar7 = (DAT_14c96b1e1 == DAT_14c96b238) << 3 | ((DAT_14c96b238 & 0x19) != 0) * '\x02';
    lVar8 = *param_2;
    plVar6 = *(longlong **)(lVar8 + 0x1c8);
    if (plVar6 != (longlong *)0x0) {
      iVar4 = (int)plVar6[1];
      do {
        if (iVar4 == 0) goto LAB_142860673;
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar9 = iVar4 == iVar3;
        if (bVar9) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
      } while (!bVar9);
      lVar8 = *(longlong *)(lVar8 + 0x1c0);
      if (lVar8 != 0) {
        bVar7 = *(byte *)(lVar8 + 0x39);
        bVar7 = (DAT_14c96b1e1 == bVar7) << 3 | ((bVar7 & 0x19) != 0) * '\x02';
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
    }
LAB_142860673:
    local_3b = bVar7 | 1;
    local_3a = (undefined2)DAT_14c967f78;
    local_58 = &local_3a;
    local_50 = &local_3b;
    local_48 = 0;
    FUN_142860e1c(param_1,local_40,*param_2,DAT_14c967f78);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428606d8 FUN_1428606d8 body=1262 status=ok
// SIG undefined FUN_1428606d8(void)

ulonglong FUN_1428606d8(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 unaff_RDI;
  uint *puVar13;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_d8 [32];
  ushort *local_b8;
  undefined1 *local_b0;
  undefined1 local_a8;
  ushort local_9a;
  ushort local_98;
  byte local_96;
  undefined1 local_95;
  int local_94;
  longlong local_90;
  ulonglong local_88;
  ulonglong local_80;
  uint local_78;
  uint uStack_74;
  int iStack_70;
  int iStack_6c;
  ushort local_68;
  undefined1 local_65;
  uint local_64;
  uint local_60;
  uint uStack_5c;
  int iStack_58;
  int iStack_54;
  longlong *local_50;
  ulonglong local_48;
  undefined7 uVar14;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar11 = *(longlong *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 **)(param_1 + 0x68) = param_3;
  uVar10 = (ulonglong)(param_2 >> 0x10);
  lVar4 = *(longlong *)(lVar11 + 0x10 + (ulonglong)((param_2 & 0xffff) << 6));
  plVar5 = *(longlong **)(lVar4 + uVar10 * 0x18);
  uVar12 = *(uint *)(plVar5 + 5);
  if (uVar12 != *(uint *)(lVar4 + 8 + uVar10 * 0x18)) {
    puVar13 = (uint *)0x0;
    goto LAB_142860797;
  }
  lVar4 = lVar4 + uVar10 * 0x18;
  uVar14 = (undefined7)((ulonglong)unaff_RDI >> 8);
  puVar13 = (uint *)CONCAT71(uVar14,DAT_14c98dec8 != plVar5);
  if (DAT_14c98dec8 == plVar5) {
    uVar17 = *(uint *)(lVar4 + 0x10);
    uVar16 = uVar12 >> 0x10;
    uVar15 = uVar12 & 0xffff;
  }
  else {
    cVar6 = (**(code **)(*plVar5 + 0x208))(plVar5);
    if (((cVar6 == '\0') || ((longlong)*(int *)(param_1 + 0x58) == -1)) ||
       (lVar11 = *(longlong *)(param_1 + 0x10),
       *(int *)(lVar11 + 0x18 + (longlong)*(int *)(param_1 + 0x58) * 0x40) == 0)) {
      uVar12 = *(uint *)(lVar4 + 0x10);
      if ((*(short *)(lVar4 + 8) == (short)uVar12) &&
         (uVar12 >> 0x10 == (uint)*(ushort *)(lVar4 + 10))) {
        FUN_14693204c(param_1,&local_64);
      }
      else {
        uVar17 = *(uint *)(lVar4 + 8) & 0xffff;
        uVar15 = (*(uint *)(lVar4 + 8) >> 0x10) + 1;
        lVar4 = *(longlong *)(param_1 + 0x10);
        if (*(int *)(lVar4 + 0x18 + (ulonglong)(uVar17 << 6)) <= (int)(uVar15 & 0xffff)) {
          uVar17 = *(uint *)((ulonglong)(uVar17 << 6) + lVar4 + 4);
          if (uVar17 == 0xffffffff) {
            uVar17 = DAT_14c967f78 & 0xffff;
            uVar15 = DAT_14c967f78 >> 0x10;
          }
          else {
            uVar17 = uVar17 & 0xffff;
            uVar15 = (uint)*(ushort *)(lVar4 + 0xc + (ulonglong)(uVar17 << 6));
          }
        }
        local_60 = uVar15 << 0x10 | uVar17;
        iStack_58 = *(int *)(lVar4 + 8 + (ulonglong)(uVar17 << 6)) * 0x400 + (uVar15 & 0xffff);
        iStack_54 = *(int *)(lVar4 + 8 + (ulonglong)((uVar12 & 0xffff) << 6)) * 0x400 +
                    (uVar12 >> 0x10);
        puVar13 = &local_60;
        uStack_5c = uVar12;
        (**(code **)*param_3)(param_3,puVar13);
        local_78 = local_60;
        uStack_74 = uStack_5c;
        iStack_70 = iStack_58;
        iStack_6c = iStack_54;
        FUN_146931b0e(param_1);
      }
      puVar8 = (undefined8 *)(**(code **)(*plVar5 + 0x188))(plVar5);
      iVar7 = (**(code **)*puVar8)(puVar8);
      plVar1 = DAT_14c98dec8;
      puVar13 = (uint *)CONCAT71((int7)((ulonglong)puVar13 >> 8),1);
      if (iVar7 < 1) goto LAB_142860797;
      plVar9 = (longlong *)(**(code **)(*plVar5 + 0x188))(plVar5);
      if (plVar1 == plVar5) goto LAB_142860797;
      uVar12 = *(uint *)(plVar5 + 5);
      iVar7 = (**(code **)*plVar9)(plVar9);
      if ((iVar7 < 1) || (uVar12 == DAT_14c967f78)) goto LAB_142860797;
      uVar10 = (ulonglong)(uVar12 >> 0x10);
      local_88 = (ulonglong)uVar12 & 0xffff;
      lVar4 = *(longlong *)
               (*(longlong *)(param_1 + 0x10) + 0x10 + (ulonglong)(uint)((int)local_88 << 6));
      local_90 = uVar10 * 3;
      local_98 = *(ushort *)(lVar4 + 0x10 + uVar10 * 0x18);
      local_9a = *(ushort *)(lVar4 + 0x12 + uVar10 * 0x18);
      local_80 = (ulonglong)uVar12;
      local_68 = local_98;
      cVar6 = (**(code **)(*plVar5 + 0x208))(plVar5);
      if ((cVar6 == '\0') || ((longlong)*(int *)(param_1 + 0x58) == -1)) {
LAB_1428609ea:
        local_95 = *(undefined1 *)(local_90 * 8 + lVar4 + 0x15);
        local_96 = *(byte *)(plVar5 + 6);
        local_94 = (**(code **)*plVar9)(plVar9);
        uVar12 = (uint)local_98;
        uVar17 = (uint)local_9a;
        if (0 < local_94) {
          iVar7 = 0;
          uVar17 = (uint)local_9a;
          uVar12 = (uint)local_98;
          do {
            (**(code **)(*plVar9 + 0x38))(plVar9,&local_60,iVar7);
            if (DAT_14c98dec8 != local_50) {
              local_65 = local_95;
              local_a8 = (local_96 & 0x60) != 0;
              local_b0 = &local_65;
              local_b8 = &local_68;
              FUN_142860e1c(param_1,&local_64,local_50,local_80);
              uVar17 = local_64 >> 0x10;
              uVar12 = local_64;
            }
            if ((CONCAT44(uStack_5c,local_60) != 0) &&
               (plVar5 = (longlong *)CONCAT44(iStack_54,iStack_58), plVar5 != (longlong *)0x0)) {
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
            iVar7 = iVar7 + 1;
          } while (local_94 != iVar7);
        }
      }
      else {
        uVar12 = (uint)local_98;
        uVar17 = (uint)local_9a;
        if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x18 +
                    (longlong)*(int *)(param_1 + 0x58) * 0x40) == 0) goto LAB_1428609ea;
      }
      if (((ushort)uVar12 != local_98) || (local_9a != (ushort)uVar17)) {
        lVar4 = *(longlong *)
                 (*(longlong *)(param_1 + 0x10) + 0x10 + (ulonglong)(uint)((int)local_88 << 6)) +
                local_90 * 8;
        *(uint *)(lVar4 + 0x10) = uVar12 & 0xffff | uVar17 << 0x10;
        FUN_146931a6e(param_1,lVar4,CONCAT22(local_9a,local_98));
      }
      goto LAB_142860797;
    }
    uVar17 = *(uint *)(lVar4 + 0x10);
    if ((*(short *)(lVar4 + 8) == (short)uVar17) &&
       (uVar17 >> 0x10 == (uint)*(ushort *)(lVar4 + 10))) {
      puVar13 = (uint *)CONCAT71(uVar14,1);
      goto LAB_142860797;
    }
    uVar15 = *(uint *)(lVar4 + 8) & 0xffff;
    uVar12 = (*(uint *)(lVar4 + 8) >> 0x10) + 1;
    if (*(int *)(lVar11 + 0x18 + (ulonglong)(uVar15 << 6)) <= (int)(uVar12 & 0xffff)) {
      uVar15 = *(uint *)((ulonglong)(uVar15 << 6) + lVar11 + 4);
      if (uVar15 == 0xffffffff) {
        uVar15 = DAT_14c967f78 & 0xffff;
        uVar12 = DAT_14c967f78 >> 0x10;
      }
      else {
        uVar15 = uVar15 & 0xffff;
        uVar12 = (uint)*(ushort *)(lVar11 + 0xc + (ulonglong)(uVar15 << 6));
      }
    }
    uVar16 = uVar12 & 0xffff;
    uVar12 = uVar12 << 0x10 | uVar15;
  }
  iStack_58 = *(int *)((ulonglong)(uVar15 << 6) + lVar11 + 8) * 0x400 + uVar16;
  iStack_54 = *(int *)(lVar11 + 8 + (ulonglong)((uVar17 & 0xffff) << 6)) * 0x400 + (uVar17 >> 0x10);
  local_60 = uVar12;
  uStack_5c = uVar17;
  (**(code **)*param_3)(param_3,&local_60);
  local_78 = local_60;
  uStack_74 = uStack_5c;
  iStack_70 = iStack_58;
  iStack_6c = iStack_54;
  FUN_146931b0e(param_1);
LAB_142860797:
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return (ulonglong)puVar13 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142860bc8 FUN_142860bc8 body=505 status=ok
// SIG undefined FUN_142860bc8(void)

undefined8 FUN_142860bc8(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  uint local_30;
  char local_28;
  ulonglong local_20;
  
  uVar2 = DAT_14c979cd1;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  DAT_14c979cd1 = 1;
  bVar4 = *(byte *)(param_1 + 0x78);
  if (bVar4 == 0) {
    FUN_1469304f0(param_1);
    bVar4 = *(byte *)(param_1 + 0x78);
  }
  if ((bVar4 & 1) == 0) {
    FUN_146930f38(param_1);
    bVar4 = *(byte *)(param_1 + 0x78);
  }
  if (((bVar4 & 1) == 0) && (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x108))) {
    FUN_1469304f0(param_1);
    bVar4 = *(byte *)(param_1 + 0x78);
  }
  if ((bVar4 & 1) == 0) {
    FUN_1469313a2(*(undefined8 *)(param_1 + 0x20));
    FUN_14693144e(*(undefined8 *)(param_1 + 0x28));
    FUN_14693175a(local_38,*(undefined8 *)(param_1 + 0x10));
    if ((short)local_30 == (short)DAT_14c967f78) goto LAB_142860d38;
    do {
      do {
        lVar1 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 0x10 +
                 (ulonglong)((local_30 & 0xffff) << 6)) + (ulonglong)(local_30 >> 0x10) * 0x18;
        FUN_1469314fa(*(undefined8 *)(param_1 + 0x28),lVar1);
        if ((*(byte *)(lVar1 + 0x16) & 0x10) != 0) {
          *(byte *)(lVar1 + 0x14) = *(byte *)(lVar1 + 0x14) | 1;
          FUN_146931572(*(undefined8 *)(param_1 + 0x20),lVar1);
        }
        FUN_1469318b2(local_38);
        if (local_28 == '\x01') {
          FUN_1469317c8(local_38);
        }
      } while ((short)local_30 != (short)DAT_14c967f78);
LAB_142860d38:
    } while (DAT_14c967f78 >> 0x10 != local_30 >> 0x10);
    bVar4 = *(byte *)(param_1 + 0x78);
  }
  if ((bVar4 & 1) == 0) {
    FUN_14693110a(param_1);
    bVar4 = *(byte *)(param_1 + 0x78);
  }
  if ((bVar4 & 1) == 0) {
    FUN_1469307e4(param_1 + 0x30,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x328));
    uVar3 = FUN_146931282(param_1);
    bVar4 = *(byte *)(param_1 + 0x78);
  }
  else {
    uVar3 = 0;
  }
  if ((bVar4 & 1) != 0) {
    FUN_14692ffc0(*(undefined8 *)(param_1 + 0x18));
    FUN_146930032(*(undefined8 *)(param_1 + 0x20));
    FUN_1469300bc(*(undefined8 *)(param_1 + 0x28));
    if (*(int *)(param_1 + 0x3c) < 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      FUN_146934f1c(param_1 + 0x30,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    FUN_14032adfc(*(undefined8 *)(param_1 + 0x48));
    uVar3 = 1;
  }
  DAT_14c979cd1 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 142860dc2 FUN_142860dc2 body=90 status=ok
// SIG undefined FUN_142860dc2(void)

void FUN_142860dc2(ushort *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = *(uint *)(param_2 + 1);
  if (0 < (int)uVar2) {
    iVar5 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + iVar5;
      if (*(ushort *)(*param_2 + (ulonglong)uVar1 * 2) < *param_1) {
        iVar5 = uVar1 + (uVar6 & 1);
      }
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar3);
    iVar4 = -1;
    if (iVar5 < (int)uVar2) {
      iVar4 = iVar5;
    }
    if (iVar4 < (int)uVar2 && iVar5 < (int)uVar2) {
      *(int *)(param_2 + 1) = iVar4;
    }
  }
  return;
}



// FUNCTION 142860e1c FUN_142860e1c body=1006 status=ok
// SIG undefined FUN_142860e1c(void)

uint * FUN_142860e1c(undefined4 *param_1,uint *param_2,longlong *param_3,undefined4 param_4,
                    ushort *param_5,byte *param_6,byte param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  byte bVar8;
  byte bVar9;
  ulonglong uVar10;
  undefined7 uVar11;
  uint uVar12;
  undefined2 uVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_c8 [32];
  ushort *local_a8;
  byte *local_a0;
  byte local_98;
  uint *local_88;
  ulonglong local_80;
  undefined4 local_78;
  byte local_71;
  uint local_70;
  byte local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar17 = true;
  if ((longlong)(int)param_1[0x16] != -1) {
    bVar17 = *(int *)(*(longlong *)(param_1 + 4) + 0x18 + (longlong)(int)param_1[0x16] * 0x40) == 0;
  }
  puVar15 = &local_70;
  local_88 = param_2;
  local_78 = param_4;
  FUN_1469319f4(param_1,puVar15,*param_5,param_3);
  *param_5 = (ushort)local_70;
  local_80 = (ulonglong)local_70;
  *local_88 = local_70;
  bVar5 = *param_6;
  uVar10 = CONCAT71((int7)((ulonglong)param_5 >> 8),bVar5) & 0xffffffff;
  uVar11 = (undefined7)(uVar10 >> 8);
  bVar8 = ((bVar5 & 0xc) != 0) << 2 | (~(byte)uVar10 & 3) == 0 |
          ((*(byte *)((longlong)param_3 + 0x39) & 0x19) != 0) * '\x02' |
          (DAT_14c96b1e1 == *(byte *)((longlong)param_3 + 0x39)) << 3;
  uVar14 = local_70 >> 0x10;
  uVar10 = (ulonglong)uVar14;
  uVar13 = (undefined2)(local_70 >> 0x10);
  if ((~*(byte *)((longlong)param_3 + 0x31) & 3) == 0) {
    lVar3 = *(longlong *)(param_1 + 4) + (ulonglong)(ushort)local_70 * 0x40;
    puVar15 = (uint *)(lVar3 + 0x20);
    iVar6 = *(int *)(lVar3 + 0x28);
    *(uint *)(lVar3 + 0x28) = iVar6 + 1U;
    if (*(uint *)(lVar3 + 0x2c) < iVar6 + 1U) {
      FUN_14488eebe(puVar15,iVar6);
    }
    *(undefined2 *)(*(longlong *)puVar15 + (longlong)iVar6 * 2) = uVar13;
    if ((bVar5 & 0xc) == 0) {
      if ((((*(byte *)((longlong)param_3 + 0x31) & 1) != 0) &&
          (lVar3 = *(longlong *)param_3[0x36], lVar3 != 0)) && (*(byte *)(lVar3 + 0x99) != 0)) {
        local_a8 = (ushort *)CONCAT44(local_a8._4_4_,(uint)*(byte *)(lVar3 + 0x99));
        FUN_1401630a0(lVar3,param_3,CONCAT71(uVar11,4),0);
      }
      bVar8 = (DAT_14c96b1e1 == *(byte *)((longlong)param_3 + 0x39)) << 3 |
              ((*param_6 & 0xc) != 0) << 2 |
              ((*(byte *)((longlong)param_3 + 0x39) & 0x19) != 0) * '\x02' | (~*param_6 & 3) == 0;
    }
  }
  if ((*(byte *)(param_3 + 7) & 0xcc) != 0) {
    lVar3 = *(longlong *)(param_1 + 4) + (ulonglong)*param_5 * 0x40;
    iVar6 = *(int *)(lVar3 + 0x38);
    *(uint *)(lVar3 + 0x38) = iVar6 + 1U;
    if (*(uint *)(lVar3 + 0x3c) < iVar6 + 1U) {
      FUN_14488eebe((longlong *)(lVar3 + 0x30),iVar6);
    }
    *(undefined2 *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar6 * 2) = uVar13;
  }
  bVar5 = (**(code **)(*param_3 + 0x208))(param_3);
  local_58 = (uint)local_80;
  uVar12 = local_58 & 0xffff;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 4) + 0x10 + (ulonglong)(uVar12 << 6));
  *(uint *)(lVar3 + 8 + uVar10 * 0x18) = local_58;
  *(undefined4 *)(lVar3 + 0xc + uVar10 * 0x18) = local_78;
  *(uint *)(lVar3 + 0x10 + uVar10 * 0x18) = local_58;
  *(byte *)(lVar3 + 0x15 + uVar10 * 0x18) = bVar8;
  bVar9 = *(byte *)(lVar3 + 0x16 + uVar10 * 0x18) & 0xf7 | bVar5 * '\b';
  *(byte *)(lVar3 + 0x16 + uVar10 * 0x18) = bVar9;
  *(byte *)(lVar3 + 0x16 + uVar10 * 0x18) = bVar9 & 0xef | *(byte *)(param_3 + 7) >> 3 & 0x10;
  iStack_54 = *(int *)(*(longlong *)(param_1 + 4) + 8 + (ulonglong)(uVar12 << 6)) * 0x400 + uVar14;
  local_68 = *param_1;
  uStack_64 = param_1[1];
  uStack_60 = param_1[2];
  uStack_5c = param_1[3];
  local_71 = bVar8;
  FUN_14697dcf8(param_3,&local_68,&local_71,
                CONCAT71((int7)((ulonglong)puVar15 >> 8),param_7) & 0xffffffff);
  if ((byte)(bVar17 | bVar5 ^ 1) == 1) {
    bVar5 = *(byte *)(param_3 + 6);
    plVar7 = (longlong *)(**(code **)(*param_3 + 0x188))(param_3);
    iVar6 = (**(code **)*plVar7)(plVar7);
    if (0 < iVar6) {
      iVar16 = 0;
      do {
        (**(code **)(*plVar7 + 0x38))(plVar7,&local_68,iVar16);
        if (DAT_14c98dec8 != CONCAT44(iStack_54,local_58)) {
          local_a0 = &local_69;
          local_a8 = param_5;
          local_98 = param_7 | (bVar5 & 0x20) >> 5;
          local_69 = bVar8;
          FUN_142860e1c(param_1,local_88,CONCAT44(iStack_54,local_58),local_70);
        }
        if ((CONCAT44(uStack_64,local_68) != 0) &&
           (plVar4 = (longlong *)CONCAT44(uStack_5c,uStack_60), plVar4 != (longlong *)0x0)) {
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
        iVar16 = iVar16 + 1;
      } while (iVar6 != iVar16);
      local_80 = (ulonglong)*local_88;
      uVar12 = local_70 & 0xffff;
      uVar10 = (ulonglong)(local_70 >> 0x10);
    }
    *(int *)(*(longlong *)(*(longlong *)(param_1 + 4) + 0x10 + (ulonglong)(uVar12 << 6)) + 0x10 +
            uVar10 * 0x18) = (int)local_80;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_88;
}



// FUNCTION 14286120c FUN_14286120c body=308 status=ok
// SIG undefined FUN_14286120c(void)

void FUN_14286120c(longlong *param_1,ushort param_2,undefined4 param_3)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 local_40;
  uint local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar7 = *(longlong *)(*param_1 + 0x10);
  lVar4 = (ulonglong)param_2 * 0x40;
  lVar1 = lVar7 + lVar4;
  uVar2 = *(ushort *)(lVar7 + 0xc + lVar4);
  uVar6 = (uint)uVar2;
  iVar3 = *(int *)(lVar7 + 0x18 + lVar4);
  if ((int)uVar6 < iVar3) {
    uVar5 = (uVar6 + iVar3) - 1;
    local_40 = CONCAT22(uVar2,param_2);
    local_3c = uVar5 * 0x10000 | (uint)param_2;
    local_34 = *(int *)(lVar7 + 8 + (ulonglong)param_2 * 0x40) * 0x400;
    local_38 = local_34 + uVar6;
    local_34 = local_34 + (uVar5 & 0xffff);
    *(undefined4 *)(lVar7 + 8 + (ulonglong)param_2 * 0x40) = param_3;
    if (*(longlong **)(*param_1 + 0x68) != (longlong *)0x0) {
      local_48 = &local_40;
      (**(code **)(**(longlong **)(*param_1 + 0x68) + 0x10))();
      iVar3 = *(int *)(lVar1 + 0x18);
    }
    if ((int)uVar6 < iVar3) {
      lVar7 = (ulonglong)(uVar6 * 8) * 3;
      do {
        lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar7);
        if (lVar4 != 0) {
          FUN_14697dcb0(lVar4,(uVar6 & 0xffff) +
                              *(int *)(*(longlong *)(*param_1 + 0x10) + 8 +
                                      (ulonglong)param_2 * 0x40) * 0x400);
          iVar3 = *(int *)(lVar1 + 0x18);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x18;
      } while ((int)uVar6 < iVar3);
    }
    if (*(longlong **)(*param_1 + 0x68) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(*param_1 + 0x68) + 0x18))();
    }
  }
  else {
    *(undefined4 *)(lVar1 + 8) = param_3;
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142861342 FUN_142861342 body=504 status=ok
// SIG undefined FUN_142861342(void)

void FUN_142861342(longlong *param_1,ushort param_2,ushort param_3,uint param_4)

{
  void *pvVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ushort uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  
  uVar6 = DAT_14c967f78;
  lVar11 = (ulonglong)param_2 * 0x40 + *(longlong *)(*param_1 + 0x10);
  if ((int)(uint)param_3 < (int)param_4) {
    lVar7 = (ulonglong)param_4 - (ulonglong)param_3;
    lVar8 = (ulonglong)param_3 * 0x18;
    do {
      lVar3 = *(longlong *)(lVar11 + 0x10);
      lVar4 = *(longlong *)(lVar3 + lVar8);
      if (lVar4 != 0) {
        *(undefined8 *)(lVar4 + 0x18) = 0;
        *(undefined4 *)(lVar4 + 0x20) = 0xffffffff;
        *(undefined4 *)(lVar4 + 0x28) = uVar6;
        *(undefined4 *)(lVar4 + 0x2c) = 0;
      }
      *(undefined8 *)(lVar3 + lVar8) = 0;
      lVar8 = lVar8 + 0x18;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  uVar10 = (param_3 + (short)param_4) - 1;
  uVar2 = *(uint *)(lVar11 + 0x28);
  if (0 < (int)uVar2) {
    lVar8 = *(longlong *)(lVar11 + 0x20);
    uVar15 = 0;
    uVar9 = (ulonglong)uVar2;
    uVar12 = uVar2;
    do {
      uVar9 = uVar9 >> 1;
      uVar14 = (uint)uVar9 + uVar15;
      if (*(ushort *)(lVar8 + (ulonglong)uVar14 * 2) < param_3) {
        uVar15 = uVar14 + (uVar12 & 1);
      }
      bVar5 = 1 < uVar12;
      uVar12 = (uint)uVar9;
    } while (bVar5);
    if (((int)uVar15 < (int)uVar2) && ((int)uVar15 < (int)uVar2)) {
      iVar16 = 0;
      uVar9 = (ulonglong)uVar2;
      uVar12 = uVar2;
      do {
        uVar9 = uVar9 >> 1;
        uVar14 = (uint)uVar9 + iVar16;
        if (*(ushort *)(lVar8 + (ulonglong)uVar14 * 2) <= uVar10) {
          iVar16 = uVar14 + (uVar12 & 1);
        }
        bVar5 = 1 < uVar12;
        uVar12 = (uint)uVar9;
      } while (bVar5);
      if ((iVar16 < (int)uVar2) && (uVar2 - iVar16 != 0 && iVar16 <= (int)uVar2)) {
        iVar13 = iVar16 - uVar15;
        if (iVar13 == 0) goto LAB_142861474;
        pvVar1 = (void *)(lVar8 + (longlong)(int)uVar15 * 2);
        memmove(pvVar1,(void *)((longlong)pvVar1 + (longlong)iVar13 * 2),
                (longlong)(int)(uVar2 - iVar16) * 2);
        uVar15 = *(int *)(lVar11 + 0x28) - iVar13;
      }
      else if (uVar2 == uVar15) goto LAB_142861474;
      *(uint *)(lVar11 + 0x28) = uVar15;
    }
  }
LAB_142861474:
  uVar2 = *(uint *)(lVar11 + 0x38);
  if (0 < (int)uVar2) {
    lVar8 = *(longlong *)(lVar11 + 0x30);
    uVar15 = 0;
    uVar12 = uVar2;
    do {
      uVar14 = (uVar12 >> 1) + uVar15;
      if (*(ushort *)(lVar8 + (ulonglong)uVar14 * 2) < param_3) {
        uVar15 = uVar14 + (uVar12 & 1);
      }
      bVar5 = 1 < uVar12;
      uVar12 = uVar12 >> 1;
    } while (bVar5);
    if (((int)uVar15 < (int)uVar2) && ((int)uVar15 < (int)uVar2)) {
      iVar16 = 0;
      uVar12 = uVar2;
      do {
        uVar14 = (uVar12 >> 1) + iVar16;
        if (*(ushort *)(lVar8 + (ulonglong)uVar14 * 2) <= uVar10) {
          iVar16 = uVar14 + (uVar12 & 1);
        }
        bVar5 = 1 < uVar12;
        uVar12 = uVar12 >> 1;
      } while (bVar5);
      if ((iVar16 < (int)uVar2) && (uVar2 - iVar16 != 0 && iVar16 <= (int)uVar2)) {
        iVar13 = iVar16 - uVar15;
        if (iVar13 == 0) {
          return;
        }
        pvVar1 = (void *)(lVar8 + (longlong)(int)uVar15 * 2);
        memmove(pvVar1,(void *)((longlong)pvVar1 + (longlong)iVar13 * 2),
                (longlong)(int)(uVar2 - iVar16) * 2);
        uVar15 = *(int *)(lVar11 + 0x38) - iVar13;
      }
      else if (uVar2 == uVar15) {
        return;
      }
      *(uint *)(lVar11 + 0x38) = uVar15;
    }
  }
  return;
}



// FUNCTION 142861572 FUN_142861572 body=51 status=ok
// SIG undefined FUN_142861572(void)

void FUN_142861572(longlong param_1,undefined8 param_2)

{
  FUN_146933a58(*(undefined8 *)(param_1 + 0x10));
  FUN_146933ade(*(undefined8 *)(param_1 + 0x20),param_2);
  FUN_146933bd0(*(undefined8 *)(param_1 + 0x18),param_2);
  return;
}



// FUNCTION 1428615a6 FUN_1428615a6 body=446 status=ok
// SIG undefined FUN_1428615a6(void)

void FUN_1428615a6(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ushort uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x10);
  lVar3 = *(longlong *)(lVar5 + 0x100);
  if (*(longlong *)(lVar5 + 0x100) == 0) {
    lVar3 = lVar5;
  }
  iVar1 = *(int *)(lVar5 + 0x108);
  if ((longlong)iVar1 != 0) {
    lVar5 = 0;
    do {
      lVar2 = *param_2;
      uVar4 = *(uint *)(lVar3 + 4 + lVar5);
      if ((*(uint *)(lVar2 + 8) <= uVar4) && (uVar4 <= *(uint *)(lVar2 + 0xc))) {
        uVar4 = *(uint *)(lVar3 + lVar5);
        uVar6 = (ushort)(uVar4 >> 0x10);
        if (*(short *)(lVar2 + 4) == (short)uVar4) {
          uVar6 = (uVar6 + *(short *)((longlong)param_2 + 10)) - *(short *)(lVar2 + 2);
          uVar4 = (uint)*(ushort *)(param_2 + 1);
        }
        *(ulonglong *)(lVar3 + lVar5) =
             CONCAT44(*(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 8 +
                              (ulonglong)((uVar4 & 0xffff) << 6)) * 0x400 + (uint)uVar6,
                      (uint)uVar6 << 0x10 | uVar4 & 0xffff);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  lVar3 = *(longlong *)(lVar5 + 800);
  if (*(longlong *)(lVar5 + 800) == 0) {
    lVar3 = lVar5;
  }
  iVar1 = *(int *)(lVar5 + 0x328);
  if ((longlong)iVar1 != 0) {
    lVar5 = 0;
    do {
      lVar2 = *param_2;
      uVar4 = *(uint *)(lVar3 + 4 + lVar5);
      if ((*(uint *)(lVar2 + 8) <= uVar4) && (uVar4 <= *(uint *)(lVar2 + 0xc))) {
        uVar4 = *(uint *)(lVar3 + lVar5);
        uVar6 = (ushort)(uVar4 >> 0x10);
        if (*(short *)(lVar2 + 4) == (short)uVar4) {
          uVar6 = (uVar6 + *(short *)((longlong)param_2 + 10)) - *(short *)(lVar2 + 2);
          uVar4 = (uint)*(ushort *)(param_2 + 1);
        }
        *(ulonglong *)(lVar3 + lVar5) =
             CONCAT44(*(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 8 +
                              (ulonglong)((uVar4 & 0xffff) << 6)) * 0x400 + (uint)uVar6,
                      (uint)uVar6 << 0x10 | uVar4 & 0xffff);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  lVar3 = *(longlong *)(lVar5 + 0x100);
  if (*(longlong *)(lVar5 + 0x100) == 0) {
    lVar3 = lVar5;
  }
  iVar1 = *(int *)(lVar5 + 0x108);
  if ((longlong)iVar1 != 0) {
    lVar5 = 0;
    do {
      lVar2 = *param_2;
      uVar4 = *(uint *)(lVar3 + 4 + lVar5);
      if ((*(uint *)(lVar2 + 8) <= uVar4) && (uVar4 <= *(uint *)(lVar2 + 0xc))) {
        uVar4 = *(uint *)(lVar3 + lVar5);
        uVar6 = (ushort)(uVar4 >> 0x10);
        if (*(short *)(lVar2 + 4) == (short)uVar4) {
          uVar6 = (uVar6 + *(short *)((longlong)param_2 + 10)) - *(short *)(lVar2 + 2);
          uVar4 = (uint)*(ushort *)(param_2 + 1);
        }
        *(ulonglong *)(lVar3 + lVar5) =
             CONCAT44(*(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 8 +
                              (ulonglong)((uVar4 & 0xffff) << 6)) * 0x400 + (uint)uVar6,
                      (uint)uVar6 << 0x10 | uVar4 & 0xffff);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 142861764 FUN_142861764 body=342 status=ok
// SIG undefined FUN_142861764(void)

void FUN_142861764(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = *(longlong *)(lVar2 + 0x100);
  if (*(longlong *)(lVar2 + 0x100) == 0) {
    lVar3 = lVar2;
  }
  if ((longlong)*(int *)(lVar2 + 0x108) != 0) {
    lVar2 = (longlong)*(int *)(lVar2 + 0x108) << 3;
    do {
      if ((*(uint *)(*param_2 + 8) <= *(uint *)(lVar3 + 4)) &&
         (*(uint *)(lVar3 + 4) <= *(uint *)(*param_2 + 0xc))) {
        iVar1 = *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
          FUN_146933f68((longlong *)(param_1 + 0x28),iVar1);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = lVar3;
      }
      lVar3 = lVar3 + 8;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar3 = *(longlong *)(lVar2 + 800);
  if (*(longlong *)(lVar2 + 800) == 0) {
    lVar3 = lVar2;
  }
  if ((longlong)*(int *)(lVar2 + 0x328) != 0) {
    lVar2 = (longlong)*(int *)(lVar2 + 0x328) << 3;
    do {
      if ((*(uint *)(*param_2 + 8) <= *(uint *)(lVar3 + 4)) &&
         (*(uint *)(lVar3 + 4) <= *(uint *)(*param_2 + 0xc))) {
        iVar1 = *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
          FUN_146933f68((longlong *)(param_1 + 0x28),iVar1);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = lVar3;
      }
      lVar3 = lVar3 + 8;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar3 = *(longlong *)(lVar2 + 0x100);
  if (*(longlong *)(lVar2 + 0x100) == 0) {
    lVar3 = lVar2;
  }
  if ((longlong)*(int *)(lVar2 + 0x108) != 0) {
    lVar2 = (longlong)*(int *)(lVar2 + 0x108) << 3;
    do {
      if ((*(uint *)(*param_2 + 8) <= *(uint *)(lVar3 + 4)) &&
         (*(uint *)(lVar3 + 4) <= *(uint *)(*param_2 + 0xc))) {
        iVar1 = *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
          FUN_146933f68((longlong *)(param_1 + 0x28),iVar1);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = lVar3;
      }
      lVar3 = lVar3 + 8;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1428618ba FUN_1428618ba body=108 status=ok
// SIG undefined FUN_1428618ba(void)

void FUN_1428618ba(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    do {
      puVar4 = *(uint **)(lVar3 + lVar5);
      uVar2 = *puVar4;
      *(ulonglong *)puVar4 =
           CONCAT44(*(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 8 +
                            (ulonglong)((uVar2 & 0xffff) << 6)) * 0x400 + (uVar2 >> 0x10),uVar2);
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < *(int *)(param_1 + 0x34)) {
    return;
  }
  FUN_146933fbe(param_1 + 0x28);
  return;
}



// FUNCTION 142861926 FUN_142861926 body=52 status=ok
// SIG undefined FUN_142861926(void)

undefined8 * FUN_142861926(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149ed0400;
  FUN_142861b3c(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14286195a FUN_14286195a body=450 status=ok
// SIG undefined FUN_14286195a(void)

void FUN_14286195a(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,8);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_142861a75:
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
LAB_142861ab2:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1428619b0;
LAB_1428619a5:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1428619b0:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x0001428619dc;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_142861a32:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_142861ab2;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_142861a75;
code_r0x0001428619dc:
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
      goto LAB_142861a32;
    }
  }
  goto LAB_1428619a5;
}



// FUNCTION 142861b3c FUN_142861b3c body=99 status=ok
// SIG undefined FUN_142861b3c(void)

void FUN_142861b3c(longlong *param_1)

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



// FUNCTION 142861ba0 FUN_142861ba0 body=29 status=ok
// SIG undefined FUN_142861ba0(void)

undefined8 FUN_142861ba0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142861bd2 FUN_142861bd2 body=85 status=ok
// SIG undefined FUN_142861bd2(void)

void FUN_142861bd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149ed04c0;
  return;
}



// FUNCTION 142861c28 FUN_142861c28 body=85 status=ok
// SIG undefined FUN_142861c28(void)

void FUN_142861c28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149ed04c0;
  return;
}



// FUNCTION 142861c7e FUN_142861c7e body=118 status=ok
// SIG undefined FUN_142861c7e(void)

void FUN_142861c7e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149ed04c0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142861ce5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142861cf4 FUN_142861cf4 body=55 status=ok
// SIG undefined FUN_142861cf4(void)

void FUN_142861cf4(void)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = DAT_14c968098;
  if (DAT_14c968098 != 0) {
    cVar2 = FUN_140d2ceff();
    if (cVar2 != '\0') {
      FUN_140898514(lVar1 + 0xd8,0);
      return;
    }
  }
  return;
}



// FUNCTION 142861d2c FUN_142861d2c body=51 status=ok
// SIG undefined FUN_142861d2c(void)

undefined1 FUN_142861d2c(void)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = DAT_14c968098;
  if (DAT_14c968098 != 0) {
    cVar2 = FUN_140d2ceff();
    if (cVar2 != '\0') {
      FUN_140898514(lVar1 + 0xd8,0);
    }
  }
  return 1;
}



// FUNCTION 142861d60 FUN_142861d60 body=31 status=ok
// SIG undefined FUN_142861d60(void)

undefined8 FUN_142861d60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142861d8b FUN_142861d8b body=734 status=ok
// SIG undefined FUN_142861d8b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142861d8b(void)

{
  longlong lVar1;
  ulonglong uVar2;
  
  FUN_14098d3d2(FUN_14285fb44,L"/Script/SlateCore",L"EFontRasterizationMode",&DAT_14c967c30);
  FUN_14282b410(L"/Script/SlateCore",0,0,&PTR_FUN_149eccfb0,1,0,0);
  FUN_14282b410(L"/Script/SlateCore",0,0,&PTR_FUN_149ecd140,1,0,0);
  FUN_14098d3d2(FUN_14285fb7b,L"/Script/SlateCore",L"EUINavigationRule",&DAT_14c967c78);
  FUN_14098d3d2(FUN_14285fbb2,L"/Script/SlateCore",L"EColorVisionDeficiency",&DAT_14c967c90);
  lVar1 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_149ecdaf0 + lVar1),L"/Script/SlateCore",
                  *(undefined8 *)(&UNK_149ecdaf8 + lVar1),
                  *(undefined8 *)((longlong)&PTR_FUN_149ecdb00 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x1d0);
  FUN_14098d3d2(FUN_14285feeb,L"/Script/SlateCore",L"ESlatePostRT",&DAT_14c967e10);
  lVar1 = 0;
  FUN_14282b410(L"/Script/SlateCore",0,0,&PTR_FUN_149ecde00,1,0,0);
  FUN_14282b410(L"/Script/SlateCore",0,0,&PTR_FUN_149ecdea0,1,0,0);
  uVar2 = 0;
  FUN_14282b410(L"/Script/SlateCore",&PTR_FUN_149ece250,1,0,0,0,0);
  FUN_14098d3d2(FUN_14285ff22,L"/Script/SlateCore",L"EWidgetPixelSnapping",&DAT_14c967e70);
  DAT_14c968098 = 0;
  DAT_14c9680a0 = 0;
  atexit(FUN_14285ffb5);
  DAT_14c968088 = 0;
  DAT_14c968090 = 0;
  atexit(FUN_14285fff0);
  DAT_14c9680a8 = 0;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_149ece760 + lVar1),L"/Script/SlateCore",
                  *(undefined8 *)((longlong)&PTR_u_ESlateDebuggingInputEvent_149ece768 + lVar1),
                  *(undefined8 *)((longlong)&PTR_DAT_149ece770 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x80);
  uVar2 = uVar2 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c967ef0,L"Slate.InvalidationList.MaxArrayElements",&DAT_14c75ed20,
                L"With the invalidation system, the preferred size of the elements array.",uVar2);
  atexit(FUN_142860355);
  uVar2 = uVar2 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c967f00,L"Slate.InvalidationList.NumberElementLeftBeforeSplitting",
                &DAT_14c75ed24,
                L"With the invalidation system, when splitting, only split the array when the number of element left is under X."
                ,uVar2);
  atexit(FUN_14286039a);
  FUN_14153156c(&DAT_14c967f10,L"Slate.InvalidationList.EnableReindexLayerId",&DAT_14c75ed28,
                L"With invalidation system, when a painted widget returns a bigger LayerId that it used to, re-index the other widgets."
                ,uVar2 & 0xffffffff00000000);
  atexit(FUN_1428603df);
  DAT_14c967f40 = 0;
  DAT_14c967f48 = 0;
  DAT_14c967f20 = 0;
  _DAT_14c967f28 = 0;
  _DAT_14c967f4c = 0xffffffff00000080;
  DAT_14c967f54 = 0;
  DAT_14c967f60 = 0;
  DAT_14c967f68 = 0;
  DAT_14c967f70 = 0xffffffff;
  atexit(FUN_142860424);
  DAT_14c967f78 = 0xffffffff;
  return;
}



// FUNCTION 14286206c FUN_14286206c body=209 status=ok
// SIG undefined FUN_14286206c(void)

void FUN_14286206c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xc] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  uVar1 = DAT_14c84635c;
  *(undefined8 *)((longlong)param_1 + 0x6c) = DAT_14c84635c;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) & 0xfe;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(byte *)((longlong)param_1 + 0xc4) = *(byte *)((longlong)param_1 + 0xc4) & 0xfe;
  param_1[0x19] = 0xbf800000bf800000;
  param_1[0x1a] = 0xbf800000bf800000;
  param_1[0x1b] = &DAT_3f8000003f800000;
  param_1[0x1c] = &DAT_3f8000003f800000;
  param_1[0x1d] = &DAT_3f8000003f800000;
  param_1[0x1e] = &DAT_3f8000003f800000;
  param_1[0x1f] = 0x3f19999a3f19999a;
  param_1[0x20] = 0x3f19999a3f19999a;
  param_1[0x23] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x24) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x122) = 0;
  *(byte *)((longlong)param_1 + 0x123) = (*(byte *)((longlong)param_1 + 0x123) & 0xf0) + 1;
  return;
}



// FUNCTION 14286213d FUN_14286213d body=117 status=ok
// SIG undefined FUN_14286213d(void)

void FUN_14286213d(void)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = DAT_14c9681c0;
  if (DAT_14c9681c0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)DAT_14c9681c0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (DAT_14c968100 == '\x01') {
    if (DAT_14c9680f4 == '\x01') {
      DAT_14c9680f4 = '\0';
    }
    if (DAT_14c9680c0 != 0) {
      FUN_1400020a8();
    }
    DAT_14c968100 = '\0';
  }
  plVar2 = DAT_14c9680b8;
  if (DAT_14c9680b8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)DAT_14c9680b8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142862199. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1428621b2 FUN_1428621b2 body=244 status=ok
// SIG undefined FUN_1428621b2(void)

undefined8 *
FUN_1428621b2(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1469352a6(param_1,&local_40);
  *param_2 = 0xffffffffffffffff;
  *(undefined1 *)(param_2 + 1) = 0;
  if (local_40 != (longlong *)0x0) {
    bVar3 = *(byte *)(local_40 + 7);
    if ((bVar3 & 0x50) == 0) {
      if ((bVar3 & 8) != 0) {
        FUN_14697ecae(local_40,*(undefined8 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x28));
        bVar3 = *(byte *)(local_40 + 7);
      }
      if ((bVar3 & 4) != 0) {
        (**(code **)(*local_40 + 0x10))
                  (local_40,local_40 + 0x1a,*(undefined8 *)(param_3 + 0x20),
                   *(undefined4 *)(param_3 + 0x28));
      }
    }
    else {
      FUN_146935310(param_1,param_2,param_3,param_4);
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428622aa FUN_1428622aa body=654 status=ok
// SIG undefined FUN_1428622aa(void)

ulonglong FUN_1428622aa(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte *pbVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong unaff_RBP;
  undefined7 uVar18;
  float *pfVar19;
  short sVar20;
  bool bVar21;
  undefined4 uVar22;
  
  plVar10 = (longlong *)*param_1;
  uVar18 = (undefined7)(unaff_RBP >> 8);
  if (((~*(byte *)((longlong)param_1 + 0x15) & 3) == 0) &&
     (((*(short *)((longlong)param_1 + 0xc) != (short)DAT_14c967f78 ||
       (DAT_14c967f78 >> 0x10 != (uint)*(ushort *)((longlong)param_1 + 0xe))) &&
      ((*(byte *)((longlong)plVar10 + 0x31) & 0x40) == 0)))) {
    uVar16 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) >> 0x10);
    lVar17 = *(longlong *)
              (*(longlong *)(param_3 + 0x10) + 0x10 +
              (ulonglong)((*(uint *)((longlong)param_1 + 0xc) & 0xffff) << 6));
    lVar11 = *(longlong *)(lVar17 + uVar16 * 0x18);
    unaff_RBP = CONCAT71(uVar18,1);
    if (lVar11 == 0) goto LAB_1428624fc;
    pbVar1 = (byte *)(lVar11 + 0x30);
    *pbVar1 = *pbVar1 | 0x80;
    pbVar1 = (byte *)(lVar17 + uVar16 * 0x18 + 0x14);
    *pbVar1 = *pbVar1 | 1;
LAB_142862524:
    FUN_1469314fa(param_2);
  }
  else {
    if ((*(byte *)((longlong)param_1 + 0x14) & 0x11) == 0) {
      if (((*(byte *)((longlong)param_1 + 0x14) & 2) == 0) || ((*(byte *)(plVar10 + 6) & 0x40) != 0)
         ) {
        unaff_RBP = 0;
        goto LAB_1428624fc;
      }
      *(byte *)(plVar10 + 7) = *(byte *)(plVar10 + 7) | 0x10;
    }
    else {
      bVar7 = *(byte *)((longlong)plVar10 + 0x31);
      pfVar19 = (float *)(plVar10 + 0x2d);
      if ((bVar7 & 0x20) == 0) {
        pfVar19 = (float *)&DAT_14c84635c;
      }
      fVar3 = *pfVar19;
      fVar4 = pfVar19[1];
      pfVar19 = (float *)&DAT_14c84635c;
      if ((*(byte *)((longlong)param_1 + 0x15) & 8) == 0) {
        if ((char)plVar10[6] < '\0') {
          if ((bVar7 & 0x40) == 0) {
            uVar22 = 0x3f800000;
          }
          else {
            uVar22 = *(undefined4 *)((longlong)plVar10 + 0x3c);
          }
          FUN_1405d299c(plVar10,uVar22);
        }
        else {
          if ((bVar7 & 0x40) == 0) {
            uVar22 = 0x3f800000;
          }
          else {
            uVar22 = *(undefined4 *)((longlong)plVar10 + 0x3c);
          }
          (**(code **)(*plVar10 + 0x168))(plVar10,uVar22);
        }
        pfVar19 = (float *)(plVar10 + 0x2d);
        if ((*(byte *)((longlong)plVar10 + 0x31) & 0x20) == 0) {
          pfVar19 = (float *)&DAT_14c84635c;
        }
      }
      fVar5 = *pfVar19;
      fVar6 = pfVar19[1];
      if (((*(byte *)(plVar10 + 6) & 0x40) == 0) &&
         ((~*(byte *)((longlong)param_1 + 0x15) & 3) == 0)) {
        *(byte *)(plVar10 + 7) = *(byte *)(plVar10 + 7) | 0x10;
      }
      if ((fVar5 == fVar3) && (!NAN(fVar5) && !NAN(fVar3))) {
        if ((fVar6 == fVar4) &&
           ((!NAN(fVar6) && !NAN(fVar4) &&
            (unaff_RBP = CONCAT71(uVar18,1), (*(byte *)((longlong)param_1 + 0x14) & 0x10) == 0))))
        goto LAB_1428624fc;
      }
      uVar18 = (undefined7)(unaff_RBP >> 8);
      if ((*(short *)((longlong)param_1 + 0xc) == (short)DAT_14c967f78) &&
         (uVar8 = *(ushort *)((longlong)param_1 + 0xe), DAT_14c967f78 >> 0x10 == (uint)uVar8)) {
        plVar12 = (longlong *)plVar10[0x39];
        unaff_RBP = CONCAT71(uVar18,1);
        if (plVar12 != (longlong *)0x0) {
          iVar14 = (int)plVar12[1];
          do {
            if (iVar14 == 0) goto LAB_1428624fc;
            LOCK();
            iVar13 = (int)plVar12[1];
            bVar21 = iVar14 == iVar13;
            if (bVar21) {
              *(int *)(plVar12 + 1) = iVar14 + 1;
              iVar13 = iVar14;
            }
            iVar14 = iVar13;
            UNLOCK();
          } while (!bVar21);
          if (plVar10[0x38] != 0) {
            FUN_140163244(plVar10[0x38],CONCAT71((uint7)(byte)(uVar8 >> 8),1));
          }
          LOCK();
          plVar10 = plVar12 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        goto LAB_1428624fc;
      }
      uVar9 = *(uint *)((longlong)param_1 + 0xc);
      uVar15 = *(uint *)(param_3 + 0x58);
      if ((longlong)(int)uVar15 == -1) {
        sVar20 = (short)(DAT_14c967f78 >> 0x10);
        uVar15 = DAT_14c967f78;
      }
      else {
        sVar20 = *(short *)(*(longlong *)(param_3 + 0x10) + 0xc + (longlong)(int)uVar15 * 0x40);
      }
      lVar17 = (ulonglong)((uVar9 >> 0x10) * 0x18) +
               *(longlong *)
                (*(longlong *)(param_3 + 0x10) + 0x10 + (ulonglong)((uVar9 & 0xffff) << 6));
      if (((short)uVar15 != (short)uVar9) || (sVar20 != (short)(uVar9 >> 0x10))) {
        unaff_RBP = CONCAT71(uVar18,1);
        if ((*(byte *)(lVar17 + 0x15) & 8) != 0) goto LAB_1428624fc;
        *(byte *)(lVar17 + 0x14) = *(byte *)(lVar17 + 0x14) | 1;
        if (*(char *)(param_2 + 0x33c) != '\x01') {
          FUN_1469336e0(param_2);
          goto LAB_1428624fc;
        }
        goto LAB_142862524;
      }
      FUN_140163244(*(undefined8 *)(param_4 + 0x50),CONCAT71((int7)((ulonglong)lVar17 >> 8),0x80));
      *(undefined1 *)(param_4 + 0x78) = 1;
    }
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
  }
LAB_1428624fc:
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 142862538 FUN_142862538 body=55 status=ok
// SIG undefined FUN_142862538(void)

void FUN_142862538(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9681e0 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c9681e0 = FUN_14171c317(FUN_1462790b7,uVar1,L"EFontHinting");
  }
  return;
}



// FUNCTION 14286256f FUN_14286256f body=55 status=ok
// SIG undefined FUN_14286256f(void)

void FUN_14286256f(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9681f8 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c9681f8 = FUN_14171c317(FUN_1462790e6,uVar1,L"EFontLoadingPolicy");
  }
  return;
}



// FUNCTION 1428625a6 FUN_1428625a6 body=55 status=ok
// SIG undefined FUN_1428625a6(void)

void FUN_1428625a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14c968210 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c968210 = FUN_14171c317(FUN_146279115,uVar1,L"EFontLayoutMethod");
  }
  return;
}



// FUNCTION 1428625e0 FUN_1428625e0 body=169 status=ok
// SIG undefined FUN_1428625e0(void)

void FUN_1428625e0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x18) * 0x30;
    lVar1 = *(longlong *)(param_1 + 0x10) + 0x28;
    do {
      (**(code **)(*param_2 + 0x88))(param_2,lVar1,0,0);
      lVar1 = lVar1 + 0x30;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x38);
    plVar4 = plVar2 + (longlong)*(int *)(param_1 + 0x40) * 7;
    do {
      if ((longlong)(int)plVar2[1] != 0) {
        lVar3 = (longlong)(int)plVar2[1] * 0x30;
        lVar1 = *plVar2 + 0x28;
        do {
          (**(code **)(*param_2 + 0x88))(param_2,lVar1,0,0);
          lVar1 = lVar1 + 0x30;
          lVar3 = lVar3 + -0x30;
        } while (lVar3 != 0);
      }
      plVar2 = plVar2 + 7;
    } while (plVar2 != plVar4);
  }
  return;
}



// FUNCTION 14286268a FUN_14286268a body=157 status=ok
// SIG undefined FUN_14286268a(void)

void FUN_14286268a(longlong param_1,longlong param_2)

{
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined1 local_1b0;
  undefined **local_1a8;
  longlong local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20();
  if ((*(byte *)(param_2 + 0x28) & 4) != 0) {
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 2;
  }
  local_1b0 = 0;
  local_1b8 = 1;
  FUN_140430222(param_1 + 0x28,param_2,param_1,0);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 8;
  }
  if ((local_18 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142862728 FUN_142862728 body=55 status=ok
// SIG undefined FUN_142862728(void)

void FUN_142862728(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9682d0 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c9682d0 = FUN_14171c317(FUN_146279531,uVar1,L"ETextShapingMethod");
  }
  return;
}



// FUNCTION 14286275f FUN_14286275f body=69 status=ok
// SIG undefined FUN_14286275f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14286275f(void)

{
  _DAT_14c9682e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428627a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9682e8,1);
  return;
}



// FUNCTION 1428627a4 FUN_1428627a4 body=69 status=ok
// SIG undefined FUN_1428627a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428627a4(void)

{
  _DAT_14c9682f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428627e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9682f8,1);
  return;
}



// FUNCTION 1428627e9 FUN_1428627e9 body=69 status=ok
// SIG undefined FUN_1428627e9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428627e9(void)

{
  _DAT_14c968300 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014286282b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c968308,1);
  return;
}



// FUNCTION 14286282e FUN_14286282e body=69 status=ok
// SIG undefined FUN_14286282e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14286282e(void)

{
  _DAT_14c968310 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142862870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c968318,1);
  return;
}



// FUNCTION 142862873 FUN_142862873 body=69 status=ok
// SIG undefined FUN_142862873(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142862873(void)

{
  _DAT_14c968320 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428628b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c968328,1);
  return;
}



// FUNCTION 1428628b8 FUN_1428628b8 body=69 status=ok
// SIG undefined FUN_1428628b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428628b8(void)

{
  _DAT_14c968330 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428628fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c968338,1);
  return;
}



// FUNCTION 1428628fd FUN_1428628fd body=69 status=ok
// SIG undefined FUN_1428628fd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428628fd(void)

{
  _DAT_14c968348 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014286293f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c968350,1);
  return;
}



// FUNCTION 142862942 FUN_142862942 body=4 status=ok
// SIG undefined FUN_142862942(void)

undefined4 FUN_142862942(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// FUNCTION 142862946 FUN_142862946 body=69 status=ok
// SIG undefined FUN_142862946(void)

void FUN_142862946(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x18,0,0);
                    /* WARNING: Could not recover jumptable at 0x000142862988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x28,0,0);
  return;
}



// FUNCTION 14286298b FUN_14286298b body=59 status=ok
// SIG undefined FUN_14286298b(void)

void FUN_14286298b(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c968378;
  if (DAT_14c968378 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c968378 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001428629bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428629c6 FUN_1428629c6 body=282 status=ok
// SIG undefined FUN_1428629c6(void)

undefined8
FUN_1428629c6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8,
             undefined1 param_9)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 *local_b0;
  undefined1 local_a8;
  undefined1 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98 = &local_78;
  local_78 = 0;
  uStack_70 = 0;
  local_a0 = param_9;
  local_a8 = param_8;
  local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,param_7);
  local_b8 = param_6;
  FUN_1406d6b62(param_1,param_3,param_4,param_5);
  local_b0 = &local_80;
  local_7c = param_5;
  local_90 = (undefined4)local_78;
  uStack_8c = local_78._4_4_;
  uStack_88 = (undefined4)uStack_70;
  uStack_84 = uStack_70._4_4_;
  local_78 = 0;
  uStack_70 = 0;
  local_b8 = CONCAT44(local_b8._4_4_,param_7);
  local_80 = param_4;
  FUN_140af7964(param_1,param_2,&local_90,param_6);
  FUN_140af7df7(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142862ae2 FUN_142862ae2 body=4597 status=ok
// SIG undefined FUN_142862ae2(void)

short * FUN_142862ae2(longlong param_1,short *param_2,longlong *param_3,int *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  byte bVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  DWORD DVar15;
  DWORD DVar16;
  short *psVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined4 *puVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong *plVar28;
  longlong lVar29;
  longlong lVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 unaff_XMM10 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_258 [32];
  int local_238;
  float local_230;
  longlong local_220;
  longlong *local_218;
  longlong *local_210;
  longlong *local_208;
  undefined8 local_200;
  longlong *local_1f8;
  undefined8 **local_1f0;
  short **local_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  uint local_1d0;
  float local_1c8;
  float local_1c4;
  uint local_1c0;
  undefined1 *local_1b8;
  longlong *local_1b0;
  short **local_1a8;
  byte *local_1a0;
  undefined8 *local_198;
  undefined1 local_189;
  short *local_188;
  longlong *local_180;
  longlong local_178;
  undefined4 uStack_170;
  int iStack_16c;
  ushort uStack_168;
  ushort uStack_166;
  undefined1 uStack_164;
  undefined1 uStack_163;
  short sStack_162;
  undefined4 uStack_160;
  undefined1 uStack_15c;
  undefined8 local_158;
  undefined8 *local_150;
  longlong *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  float local_138;
  float local_134;
  undefined4 local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 *local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint local_f8;
  longlong *local_f0;
  undefined4 *local_e8;
  int *local_e0;
  undefined4 *local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  byte local_b9;
  undefined8 **local_b8;
  short **local_b0;
  undefined1 local_a4 [4];
  ulonglong local_a0;
  
  lVar30 = DAT_14c968358;
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if ((*(char *)((longlong)param_3 + 0x24) != '\x01') || (*(char *)(*param_3 + 0x24) == '\0')) {
LAB_142862cbe:
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_258);
  }
  iVar12 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (iVar12 == 0x40000002) {
    uVar24 = 0;
  }
  else {
    bVar31 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar12 != 2)) {
      if (iVar12 == 1) {
        DVar15 = FUN_140ad26c0();
        DVar16 = GetCurrentThreadId();
        bVar31 = DVar15 == DVar16;
      }
      else {
        bVar31 = false;
      }
    }
    uVar24 = (ulonglong)(bVar31 ^ 1);
  }
  if (*(char *)(lVar30 + uVar24) == '\0') goto LAB_142862cbe;
  lVar30 = *param_3;
  local_b9 = *(char *)(lVar30 + 0x24) == '\x03';
  lVar29 = (longlong)*(int *)(param_1 + 600);
  fVar34 = 0.0;
  if (0.0 <= *(float *)(lVar30 + 0x14)) {
    fVar34 = *(float *)(lVar30 + 0x14);
  }
  fVar32 = 0.0;
  if (0.0 <= *(float *)(lVar30 + 0x18)) {
    fVar32 = *(float *)(lVar30 + 0x18);
  }
  iVar12 = FUN_144b42fe0(((int)(fVar34 * 64.0) * 0x60 + 0x24) / 0x48,(int)(fVar32 * 65536.0));
  fVar32 = (float)(uint)(iVar12 + 0x20 >> 6);
  lVar30 = *param_3;
  iVar12 = (int)*(short *)(lVar30 + 0x26);
  fVar34 = 1.0;
  if (1.0 <= fVar32) {
    fVar34 = fVar32;
  }
  auVar38 = roundps(unaff_XMM10,ZEXT416((uint)((float)*param_4 * *(float *)(lVar30 + 0x18) + 0.5)),1
                   );
  fVar35 = 2.0;
  fVar32 = 2.0 / fVar34;
  if (0.25 <= fVar32) {
    fVar32 = 0.25;
  }
  if (fVar32 <= 0.05) {
    fVar32 = 0.05;
  }
  fVar37 = auVar38._0_4_ / fVar34 + fVar32;
  local_c4 = 2;
  local_c8 = 2;
  if (*(byte *)(lVar30 + 0x24) - 2 < 2) {
    local_c4 = 0;
    local_c8 = 0;
    local_218 = (longlong *)(param_1 + 0x1a0);
  }
  else {
    local_218 = (longlong *)(param_1 + 0x1c0);
    if (*(byte *)(lVar30 + 0x24) == 1) {
      local_c4 = 2;
    }
  }
  if (8.0 <= fVar37) {
    fVar37 = 8.0;
  }
  local_e8 = &local_c8;
  local_e0 = &local_c0;
  local_d8 = &local_c4;
  local_220 = lVar29 * 0x10;
  plVar18 = param_3 + lVar29 * 2 + 0xd;
  plVar19 = (longlong *)param_3[lVar29 * 2 + 0xe];
  local_f0 = param_3;
  local_d0 = param_1;
  local_c0 = iVar12;
  if (plVar19 != (longlong *)0x0) {
    iVar13 = (int)plVar19[1];
    do {
      if (iVar13 == 0) goto LAB_142862e82;
      LOCK();
      iVar9 = (int)plVar19[1];
      bVar31 = iVar13 == iVar9;
      if (bVar31) {
        *(int *)(plVar19 + 1) = iVar13 + 1;
        iVar9 = iVar13;
      }
      iVar13 = iVar9;
      UNLOCK();
    } while (!bVar31);
    puVar20 = (undefined4 *)*plVar18;
    bVar31 = true;
    if (puVar20 != (undefined4 *)0x0) {
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(puVar20 + 8);
      uVar14 = *puVar20;
      uVar2 = puVar20[1];
      uVar3 = puVar20[2];
      uVar4 = puVar20[3];
      uVar8 = *(undefined8 *)(puVar20 + 6);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(puVar20 + 4);
      *(undefined8 *)(param_2 + 0xc) = uVar8;
      *(undefined4 *)param_2 = uVar14;
      *(undefined4 *)(param_2 + 2) = uVar2;
      *(undefined4 *)(param_2 + 4) = uVar3;
      *(undefined4 *)(param_2 + 6) = uVar4;
      if (*(char *)((longlong)param_2 + 0x25) == '\x01') {
        fVar33 = (float)puVar20[3];
        fVar36 = (float)puVar20[4];
        if ((fVar33 < fVar37) || (fVar36 < fVar32)) {
          if (fVar37 <= fVar33) {
            fVar37 = fVar33;
          }
          if (fVar32 <= fVar36) {
            fVar32 = fVar36;
          }
          goto LAB_142862e3d;
        }
        if (*(char *)((longlong)puVar20 + 0x26) == '\x01') {
          bVar10 = FUN_142863cd8(&local_f0,puVar20);
          *(byte *)((longlong)puVar20 + 0x26) = bVar10 ^ 1;
        }
        puVar20 = (undefined4 *)((longlong)param_3 + local_220 + 0x88);
        uVar14 = puVar20[1];
        uVar2 = puVar20[2];
        uVar3 = puVar20[3];
        *(undefined4 *)(param_2 + 10) = *puVar20;
        *(undefined4 *)(param_2 + 0xc) = uVar14;
        *(undefined4 *)(param_2 + 0xe) = uVar2;
        *(undefined4 *)(param_2 + 0x10) = uVar3;
      }
      bVar31 = false;
    }
LAB_142862e3d:
    LOCK();
    plVar28 = plVar19 + 1;
    *(int *)plVar28 = (int)*plVar28 + -1;
    UNLOCK();
    if ((int)*plVar28 == 0) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
    if (!bVar31) goto LAB_142862e61;
  }
LAB_142862e82:
  fVar33 = (float)local_c0;
  fVar36 = 2.0;
  if (2.0 < fVar37 * fVar33) {
    fVar36 = 2.0;
    do {
      fVar36 = fVar36 + fVar36;
    } while (fVar36 < fVar37 * fVar33);
  }
  if (2.0 < fVar32 * fVar33) {
    fVar35 = 2.0;
    do {
      fVar35 = fVar35 + fVar35;
    } while (fVar35 < fVar32 * fVar33);
  }
  fVar36 = fVar36 / fVar33;
  lVar30 = param_3[2];
  local_128 = *(undefined8 *)*param_3;
  local_120 = ((undefined8 *)*param_3)[1];
  if (local_120 != 0) {
    LOCK();
    *(int *)(local_120 + 0xc) = *(int *)(local_120 + 0xc) + 1;
    UNLOCK();
  }
  fVar34 = fVar34 / (float)iVar12;
  fVar35 = fVar35 / fVar33;
  local_238 = local_c0;
  local_230 = fVar36;
  FUN_14693582c(&local_118,&local_128,(int)lVar30,local_c8);
  plVar19 = (longlong *)(param_1 + 0x100);
  iVar12 = FUN_14694da22(plVar19,local_f8,&local_118);
  if (iVar12 != -1) {
    lVar30 = (longlong)iVar12 * 0x40 + *plVar19;
    plVar28 = (longlong *)(lVar30 + 0x28);
    if (((plVar28 == (longlong *)0x0 || lVar30 == 0) ||
        (puVar20 = (undefined4 *)*plVar28, (float)puVar20[3] < fVar36)) ||
       ((float)puVar20[4] < fVar35)) goto LAB_142862f89;
    if (*(char *)((longlong)puVar20 + 0x26) == '\x01') {
      bVar10 = FUN_142863cd8(&local_f0);
      *(byte *)(*plVar28 + 0x26) = bVar10 ^ 1;
      puVar20 = (undefined4 *)*plVar28;
    }
    *plVar18 = (longlong)puVar20;
    plVar19 = *(longlong **)(lVar30 + 0x30);
    plVar18 = (longlong *)param_3[lVar29 * 2 + 0xe];
    if (plVar18 != plVar19) {
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar19 + 0xc) = *(int *)((longlong)plVar19 + 0xc) + 1;
        UNLOCK();
        plVar18 = (longlong *)param_3[lVar29 * 2 + 0xe];
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
      param_3[lVar29 * 2 + 0xe] = (longlong)plVar19;
      puVar20 = (undefined4 *)*plVar28;
    }
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(puVar20 + 8);
    uVar14 = *puVar20;
    uVar2 = puVar20[1];
    uVar3 = puVar20[2];
    uVar4 = puVar20[3];
    uVar8 = *(undefined8 *)(puVar20 + 6);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(puVar20 + 4);
    *(undefined8 *)(param_2 + 0xc) = uVar8;
    *(undefined4 *)param_2 = uVar14;
    *(undefined4 *)(param_2 + 2) = uVar2;
    *(undefined4 *)(param_2 + 4) = uVar3;
    *(undefined4 *)(param_2 + 6) = uVar4;
    if (*(char *)((longlong)param_2 + 0x25) == '\x01') {
      *(float *)(param_2 + 10) = ((float)(int)param_2[1] + 0.5) * fVar34;
      *(float *)(param_2 + 0xc) = ((float)(int)*param_2 + -0.5) * fVar34;
      *(float *)(param_2 + 0xe) = (float)(int)((ushort)param_2[4] - 1) * fVar34;
      *(float *)(param_2 + 0x10) = (float)(int)((ushort)param_2[5] - 1) * fVar34;
      uVar14 = *(undefined4 *)(param_2 + 0xc);
      uVar2 = *(undefined4 *)(param_2 + 0xe);
      uVar3 = *(undefined4 *)(param_2 + 0x10);
      puVar20 = (undefined4 *)((longlong)param_3 + local_220 + 0x88);
      *puVar20 = *(undefined4 *)(param_2 + 10);
      puVar20[1] = uVar14;
      puVar20[2] = uVar2;
      puVar20[3] = uVar3;
    }
    goto LAB_1428632c4;
  }
LAB_142862f89:
  local_150 = local_118;
  local_148 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_110 + 0xc) = *(int *)((longlong)local_110 + 0xc) + 1;
    UNLOCK();
  }
  local_140 = local_108;
  local_13c = local_c4;
  local_130 = uStack_100;
  local_158 = 0;
  uStack_168 = 0;
  uStack_166 = 0;
  uStack_164 = 0;
  uStack_163 = 0;
  sStack_162 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  local_178 = 0;
  uStack_170 = 0;
  iStack_16c = 0;
  local_210 = plVar19;
  local_208 = plVar18;
  local_138 = fVar36;
  local_134 = fVar35;
  uVar14 = (**(code **)((ulonglong)local_b9 * 0x10 + 0x10 + **(longlong **)(param_1 + 0x58)))
                     (*(longlong **)(param_1 + 0x58),&local_150,&local_158,&local_178);
  psVar17 = (short *)FUN_14001cc68(0x28,0x10);
  psVar17[0] = 0;
  psVar17[1] = 0;
  psVar17[2] = 0;
  psVar17[3] = 0;
  psVar17[4] = 0;
  psVar17[5] = 0;
  psVar17[6] = 0;
  psVar17[7] = 0;
  psVar17[8] = 0;
  psVar17[9] = 0;
  psVar17[10] = 0;
  psVar17[0xb] = 0;
  psVar17[0xc] = 0;
  psVar17[0xd] = 0;
  psVar17[0xe] = 0;
  psVar17[0xf] = 0;
  psVar17[0x10] = 0;
  psVar17[0x11] = 0;
  psVar17[0x12] = 0;
  psVar17[0x13] = 0;
  local_188 = psVar17;
  local_180 = (longlong *)FUN_14001cc68(0x18,0x10);
  lVar30 = local_220;
  local_180[1] = (longlong)&DAT_100000001;
  *local_180 = (longlong)&PTR_FUN_149eda240;
  local_180[2] = (longlong)psVar17;
  switch(uVar14) {
  case 0:
    break;
  case 1:
    *(undefined1 *)((longlong)psVar17 + 0x25) = 0;
    *(undefined1 *)((longlong)psVar17 + 0x27) = 1;
    local_1f0 = &local_118;
    local_1e8 = &local_188;
    FUN_14694db98(local_210,&local_1b8);
    plVar28 = local_180;
    plVar18 = local_208;
    *local_208 = (longlong)local_188;
    plVar19 = (longlong *)local_208[1];
    if (plVar19 != local_180) {
      if (local_180 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_180 + 0xc) = *(int *)((longlong)local_180 + 0xc) + 1;
        UNLOCK();
        plVar19 = (longlong *)local_208[1];
      }
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar19 + 0x10))();
        }
      }
      plVar18[1] = (longlong)plVar28;
    }
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(local_188 + 0x10);
    uVar14 = *(undefined4 *)local_188;
    uVar2 = *(undefined4 *)(local_188 + 2);
    uVar3 = *(undefined4 *)(local_188 + 4);
    uVar4 = *(undefined4 *)(local_188 + 6);
    uVar8 = *(undefined8 *)(local_188 + 0xc);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(local_188 + 8);
    *(undefined8 *)(param_2 + 0xc) = uVar8;
    *(undefined4 *)param_2 = uVar14;
    *(undefined4 *)(param_2 + 2) = uVar2;
    *(undefined4 *)(param_2 + 4) = uVar3;
    *(undefined4 *)(param_2 + 6) = uVar4;
    if (*(char *)((longlong)param_2 + 0x25) == '\x01') {
      *(float *)(param_2 + 10) = ((float)(int)param_2[1] + 0.5) * fVar34;
      *(float *)(param_2 + 0xc) = ((float)(int)*param_2 + -0.5) * fVar34;
      *(float *)(param_2 + 0xe) = (float)(int)((ushort)param_2[4] - 1) * fVar34;
      *(float *)(param_2 + 0x10) = (float)(int)((ushort)param_2[5] - 1) * fVar34;
      uVar14 = *(undefined4 *)(param_2 + 0xc);
      uVar2 = *(undefined4 *)(param_2 + 0xe);
      uVar3 = *(undefined4 *)(param_2 + 0x10);
      puVar20 = (undefined4 *)((longlong)param_3 + lVar30 + 0x88);
      *puVar20 = *(undefined4 *)(param_2 + 10);
      puVar20[1] = uVar14;
      puVar20[2] = uVar2;
      puVar20[3] = uVar3;
    }
    goto LAB_142863275;
  case 2:
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    goto LAB_14286326d;
  case 3:
    *(byte *)(psVar17 + 0x13) = local_b9 ^ 1;
    break;
  default:
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
LAB_14286326d:
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    goto LAB_142863275;
  }
  *(undefined1 *)((longlong)psVar17 + 0x25) = 1;
  psVar17[1] = local_158._4_2_;
  *psVar17 = local_158._6_2_;
  *(float *)(psVar17 + 6) = fVar36;
  *(float *)(psVar17 + 8) = fVar35;
  *(float *)(psVar17 + 10) = (float)(int)local_158._4_2_;
  *(float *)(psVar17 + 0xc) = (float)(int)local_158._6_2_;
  *(float *)(psVar17 + 0xe) = (float)(ushort)local_158;
  *(float *)(psVar17 + 0x10) = (float)local_158._2_2_;
  *(undefined1 *)((longlong)psVar17 + 0x27) = 1;
  uVar24 = (ulonglong)iStack_16c;
  uVar27 = (ulonglong)local_158._2_2_ * (local_158 & 0xffff);
  bVar31 = uVar27 - uVar24 == 0;
  local_189 = uVar27 < uVar24 || bVar31;
  if (uVar27 < uVar24 || bVar31) {
    uStack_168 = (ushort)local_158;
    uStack_166 = local_158._2_2_;
    sStack_162 = local_158._4_2_;
    uStack_164 = (undefined1)(local_158 >> 0x30);
    uStack_163 = (undefined1)(local_158 >> 0x38);
    uStack_160 = local_c8;
    uStack_15c = 1;
LAB_142863199:
    local_1b8 = &local_189;
    local_1a8 = &local_188;
    local_1a0 = &local_b9;
    local_198 = &local_158;
    lVar30 = local_218[1];
    local_1b0 = &local_178;
    if ((longlong)(int)lVar30 != 0) {
      lVar29 = *local_218;
      lVar21 = 0;
      do {
        cVar11 = FUN_142863e32(&local_1b8,
                               *(undefined8 *)
                                (*(longlong *)(param_1 + 0x1e0) +
                                (ulonglong)*(byte *)(lVar29 + lVar21) * 0x10));
        if (cVar11 != '\0') {
          local_1f0 = (undefined8 **)local_118;
          local_1e8 = (short **)local_110;
          if (local_110 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_110 + 0xc) = *(int *)((longlong)local_110 + 0xc) + 1;
            UNLOCK();
          }
          local_b8 = &local_1f0;
          local_1d0 = local_f8;
          local_1e0 = local_108;
          uStack_1dc = uStack_104;
          uStack_1d8 = uStack_100;
          uStack_1d4 = uStack_fc;
          uVar22 = local_f8 >> 0xd ^ -local_f8;
          uVar23 = uVar22 << 8 ^ (-0x61c88647 - local_f8) - uVar22;
          uVar25 = uVar23 >> 0xd ^ (local_f8 - uVar22) - uVar23;
          uVar22 = uVar25 >> 0xc ^ (uVar22 - uVar23) - uVar25;
          uVar23 = uVar22 << 0x10 ^ (uVar23 - uVar25) - uVar22;
          uVar25 = uVar23 >> 5 ^ (uVar25 - uVar22) - uVar23;
          uVar26 = uVar25 >> 3 ^ (uVar22 - uVar23) - uVar25;
          uVar22 = uVar26 << 10 ^ (uVar23 - uVar25) - uVar26;
          uVar23 = (uint)fVar36 >> 0xd ^ (uVar22 >> 0xf ^ uVar25 - (uVar26 + uVar22)) - (int)fVar36;
          uVar22 = uVar23 << 8 ^ (-0x61c88647 - uVar23) - (int)fVar36;
          uVar26 = uVar22 >> 0xd ^ ((int)fVar36 - uVar23) - uVar22;
          uVar23 = uVar26 >> 0xc ^ (uVar23 - uVar22) - uVar26;
          uVar25 = uVar23 << 0x10 ^ (uVar22 - uVar26) - uVar23;
          uVar22 = uVar25 >> 5 ^ (uVar26 - uVar23) - uVar25;
          uVar26 = uVar22 >> 3 ^ (uVar23 - uVar25) - uVar22;
          uVar23 = uVar26 << 10 ^ (uVar25 - uVar22) - uVar26;
          uVar23 = (uint)fVar35 >> 0xd ^ (uVar23 >> 0xf ^ uVar22 - (uVar26 + uVar23)) - (int)fVar35;
          uVar25 = uVar23 << 8 ^ (-0x61c88647 - uVar23) - (int)fVar35;
          uVar22 = uVar25 >> 0xd ^ ((int)fVar35 - uVar23) - uVar25;
          uVar23 = uVar22 >> 0xc ^ (uVar23 - uVar25) - uVar22;
          uVar26 = uVar23 << 0x10 ^ (uVar25 - uVar22) - uVar23;
          uVar25 = uVar26 >> 5 ^ (uVar22 - uVar23) - uVar26;
          uVar22 = uVar25 >> 3 ^ (uVar23 - uVar26) - uVar25;
          uVar23 = uVar22 << 10 ^ (uVar26 - uVar25) - uVar22;
          local_1c0 = uVar23 >> 0xf ^ uVar25 - (uVar22 + uVar23);
          local_1c8 = fVar36;
          local_1c4 = fVar35;
          local_b0 = &local_188;
          FUN_14694e06e(param_1 + 0x150,&local_200);
          plVar18 = local_208;
          plVar19 = local_210;
          if (local_1e8 != (short **)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_1e8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)((longlong)*local_1e8 + 0x10))();
            }
          }
          local_1f0 = &local_118;
          local_1e8 = &local_188;
          FUN_14694db98(plVar19,&local_b8);
          plVar28 = local_180;
          lVar30 = local_220;
          *plVar18 = (longlong)local_188;
          plVar19 = (longlong *)plVar18[1];
          if (plVar19 != local_180) {
            if (local_180 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)local_180 + 0xc) = *(int *)((longlong)local_180 + 0xc) + 1;
              UNLOCK();
              plVar19 = (longlong *)plVar18[1];
            }
            if (plVar19 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar19 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar19 + 0x10))();
              }
            }
            plVar18[1] = (longlong)plVar28;
          }
          *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(local_188 + 0x10);
          uVar14 = *(undefined4 *)local_188;
          uVar2 = *(undefined4 *)(local_188 + 2);
          uVar3 = *(undefined4 *)(local_188 + 4);
          uVar4 = *(undefined4 *)(local_188 + 6);
          uVar8 = *(undefined8 *)(local_188 + 0xc);
          *(undefined8 *)(param_2 + 8) = *(undefined8 *)(local_188 + 8);
          *(undefined8 *)(param_2 + 0xc) = uVar8;
          *(undefined4 *)param_2 = uVar14;
          *(undefined4 *)(param_2 + 2) = uVar2;
          *(undefined4 *)(param_2 + 4) = uVar3;
          *(undefined4 *)(param_2 + 6) = uVar4;
          if (*(char *)((longlong)param_2 + 0x25) == '\x01') {
            *(float *)(param_2 + 10) = ((float)(int)param_2[1] + 0.5) * fVar34;
            *(float *)(param_2 + 0xc) = ((float)(int)*param_2 + -0.5) * fVar34;
            *(float *)(param_2 + 0xe) = (float)(int)((ushort)param_2[4] - 1) * fVar34;
            *(float *)(param_2 + 0x10) = (float)(int)((ushort)param_2[5] - 1) * fVar34;
            uVar14 = *(undefined4 *)(param_2 + 0xc);
            uVar2 = *(undefined4 *)(param_2 + 0xe);
            uVar3 = *(undefined4 *)(param_2 + 0x10);
            puVar20 = (undefined4 *)((longlong)param_3 + lVar30 + 0x88);
            *puVar20 = *(undefined4 *)(param_2 + 10);
            puVar20[1] = uVar14;
            puVar20[2] = uVar2;
            puVar20[3] = uVar3;
          }
          goto LAB_142863275;
        }
        lVar21 = lVar21 + 1;
      } while ((int)lVar30 != lVar21);
    }
    if (0xfe < *(int *)(param_1 + 0x1e8)) goto LAB_142863248;
    (**(code **)(**(longlong **)(param_1 + 0x1f0) + 8))
              (*(longlong **)(param_1 + 0x1f0),&local_200,local_c8);
    plVar19 = local_1f8;
    uVar8 = local_200;
    if (local_1f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1f8 + 1) = (int)local_1f8[1] + 1;
      UNLOCK();
    }
    iVar12 = *(int *)(param_1 + 0x1e8);
    *(uint *)(param_1 + 0x1e8) = iVar12 + 1U;
    if (*(uint *)(param_1 + 0x1ec) < iVar12 + 1U) {
      FUN_14627a3ee((longlong *)(param_1 + 0x1e0),iVar12);
    }
    lVar30 = *(longlong *)(param_1 + 0x1e0);
    *(undefined8 *)(lVar30 + (longlong)iVar12 * 0x10) = uVar8;
    *(longlong **)(lVar30 + 8 + (longlong)iVar12 * 0x10) = plVar19;
    if (plVar19 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
      UNLOCK();
      LOCK();
      plVar18 = plVar19 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*plVar19)(plVar19);
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
    iVar13 = (int)local_218[1];
    *(uint *)(local_218 + 1) = iVar13 + 1U;
    if (*(uint *)((longlong)local_218 + 0xc) < iVar13 + 1U) {
      FUN_1447403be(local_218,iVar13);
    }
    *(char *)(*local_218 + (longlong)iVar13) = (char)iVar12;
    cVar11 = FUN_142863e32(&local_1b8,local_200,iVar12);
    plVar18 = local_208;
    plVar19 = local_210;
    if (cVar11 == '\0') {
      *(undefined1 *)((longlong)local_188 + 0x25) = 0;
    }
    else {
      local_1f0 = (undefined8 **)local_118;
      local_1e8 = (short **)local_110;
      if (local_110 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_110 + 0xc) = *(int *)((longlong)local_110 + 0xc) + 1;
        UNLOCK();
      }
      local_b8 = &local_1f0;
      local_1d0 = local_f8;
      local_1e0 = local_108;
      uStack_1dc = uStack_104;
      uStack_1d8 = uStack_100;
      uStack_1d4 = uStack_fc;
      uVar22 = local_f8 >> 0xd ^ -local_f8;
      uVar23 = uVar22 << 8 ^ (-0x61c88647 - local_f8) - uVar22;
      uVar25 = uVar23 >> 0xd ^ (local_f8 - uVar22) - uVar23;
      uVar22 = uVar25 >> 0xc ^ (uVar22 - uVar23) - uVar25;
      uVar23 = uVar22 << 0x10 ^ (uVar23 - uVar25) - uVar22;
      uVar25 = uVar23 >> 5 ^ (uVar25 - uVar22) - uVar23;
      uVar26 = uVar25 >> 3 ^ (uVar22 - uVar23) - uVar25;
      uVar22 = uVar26 << 10 ^ (uVar23 - uVar25) - uVar26;
      uVar23 = (uint)fVar36 >> 0xd ^ (uVar22 >> 0xf ^ uVar25 - (uVar26 + uVar22)) - (int)fVar36;
      uVar22 = uVar23 << 8 ^ (-0x61c88647 - uVar23) - (int)fVar36;
      uVar26 = uVar22 >> 0xd ^ ((int)fVar36 - uVar23) - uVar22;
      uVar23 = uVar26 >> 0xc ^ (uVar23 - uVar22) - uVar26;
      uVar25 = uVar23 << 0x10 ^ (uVar22 - uVar26) - uVar23;
      uVar22 = uVar25 >> 5 ^ (uVar26 - uVar23) - uVar25;
      uVar26 = uVar22 >> 3 ^ (uVar23 - uVar25) - uVar22;
      uVar23 = uVar26 << 10 ^ (uVar25 - uVar22) - uVar26;
      uVar23 = (uint)fVar35 >> 0xd ^ (uVar23 >> 0xf ^ uVar22 - (uVar26 + uVar23)) - (int)fVar35;
      uVar25 = uVar23 << 8 ^ (-0x61c88647 - uVar23) - (int)fVar35;
      uVar22 = uVar25 >> 0xd ^ ((int)fVar35 - uVar23) - uVar25;
      uVar23 = uVar22 >> 0xc ^ (uVar23 - uVar25) - uVar22;
      uVar26 = uVar23 << 0x10 ^ (uVar25 - uVar22) - uVar23;
      uVar25 = uVar26 >> 5 ^ (uVar22 - uVar23) - uVar26;
      uVar22 = uVar25 >> 3 ^ (uVar23 - uVar26) - uVar25;
      uVar23 = uVar22 << 10 ^ (uVar26 - uVar25) - uVar22;
      local_1c0 = uVar23 >> 0xf ^ uVar25 - (uVar22 + uVar23);
      local_b0 = &local_188;
      local_1c8 = fVar36;
      local_1c4 = fVar35;
      FUN_14694e06e(param_1 + 0x150,local_a4);
      if (local_1e8 != (short **)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_1e8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)((longlong)*local_1e8 + 0x10))();
        }
      }
    }
    lVar30 = local_220;
    local_1e8 = &local_188;
    local_1f0 = &local_118;
    FUN_14694db98(plVar19,&local_b8);
    if ((*(byte *)(param_1 + 0x200) & 1) == 0) {
      local_238 = *(int *)(param_1 + 0x1d8);
      FUN_145c1c9a0(param_1 + 8,*(undefined4 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1b8),
                    *(undefined4 *)(param_1 + 0x1c8));
    }
    plVar28 = local_180;
    *plVar18 = (longlong)local_188;
    plVar19 = (longlong *)plVar18[1];
    if (plVar19 != local_180) {
      if (local_180 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_180 + 0xc) = *(int *)((longlong)local_180 + 0xc) + 1;
        UNLOCK();
        plVar19 = (longlong *)plVar18[1];
      }
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar19 + 0x10))();
        }
      }
      plVar18[1] = (longlong)plVar28;
    }
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(local_188 + 0x10);
    uVar14 = *(undefined4 *)local_188;
    uVar2 = *(undefined4 *)(local_188 + 2);
    uVar3 = *(undefined4 *)(local_188 + 4);
    uVar4 = *(undefined4 *)(local_188 + 6);
    uVar5 = *(undefined4 *)(local_188 + 10);
    uVar6 = *(undefined4 *)(local_188 + 0xc);
    uVar7 = *(undefined4 *)(local_188 + 0xe);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(local_188 + 8);
    *(undefined4 *)(param_2 + 10) = uVar5;
    *(undefined4 *)(param_2 + 0xc) = uVar6;
    *(undefined4 *)(param_2 + 0xe) = uVar7;
    *(undefined4 *)param_2 = uVar14;
    *(undefined4 *)(param_2 + 2) = uVar2;
    *(undefined4 *)(param_2 + 4) = uVar3;
    *(undefined4 *)(param_2 + 6) = uVar4;
    if (*(char *)((longlong)param_2 + 0x25) == '\x01') {
      *(float *)(param_2 + 10) = ((float)(int)param_2[1] + 0.5) * fVar34;
      *(float *)(param_2 + 0xc) = ((float)(int)*param_2 + -0.5) * fVar34;
      *(float *)(param_2 + 0xe) = (float)(int)((ushort)param_2[4] - 1) * fVar34;
      *(float *)(param_2 + 0x10) = (float)(int)((ushort)param_2[5] - 1) * fVar34;
      uVar14 = *(undefined4 *)(param_2 + 0xc);
      uVar2 = *(undefined4 *)(param_2 + 0xe);
      uVar3 = *(undefined4 *)(param_2 + 0x10);
      puVar20 = (undefined4 *)((longlong)param_3 + lVar30 + 0x88);
      *puVar20 = *(undefined4 *)(param_2 + 10);
      puVar20[1] = uVar14;
      puVar20[2] = uVar2;
      puVar20[3] = uVar3;
    }
    if (local_1f8 != (longlong *)0x0) {
      LOCK();
      plVar19 = local_1f8 + 1;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)*plVar19 == 0) {
        (**(code **)*local_1f8)(local_1f8);
        LOCK();
        piVar1 = (int *)((longlong)local_1f8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1f8 + 0x10))(local_1f8);
        }
      }
    }
  }
  else {
    if (local_b9 != 1) goto LAB_142863199;
LAB_142863248:
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
  }
LAB_142863275:
  plVar19 = local_180;
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_180 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  if (local_148 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_148 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_148 + 0x10))();
    }
  }
LAB_1428632c4:
  if (local_110 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_110 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_110 + 0x10))();
    }
  }
LAB_142862e61:
  if ((local_a0 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142863cd8 FUN_142863cd8 body=345 status=ok
// SIG undefined FUN_142863cd8(void)

bool FUN_142863cd8(longlong *param_1,undefined2 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined8 local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = param_1[4];
  local_a0 = *(undefined4 *)(param_2 + 6);
  local_a8 = *(undefined4 *)param_1[2];
  uVar2 = *(undefined4 *)param_1[1];
  lVar5 = ((longlong *)*param_1)[2];
  puVar4 = *(undefined8 **)*param_1;
  local_60 = *puVar4;
  local_58 = puVar4[1];
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 0xc) = *(int *)(local_58 + 0xc) + 1;
    UNLOCK();
  }
  FUN_14693582c(&local_50,&local_60,(int)lVar5,uVar2);
  local_88 = local_50;
  local_80 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_48 + 0xc) = *(int *)((longlong)local_48 + 0xc) + 1;
    UNLOCK();
  }
  local_78 = local_40;
  local_74 = *(undefined4 *)param_1[3];
  local_70 = *(undefined4 *)(param_2 + 6);
  local_6c = *(undefined4 *)(param_2 + 8);
  local_68 = local_38;
  local_90 = param_2[4];
  local_8e = param_2[5];
  local_8c = param_2[1];
  local_8a = *param_2;
  iVar6 = (**(code **)(**(longlong **)(lVar3 + 0x58) + 0x18))
                    (*(longlong **)(lVar3 + 0x58),&local_88);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_80 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return iVar6 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142863e32 FUN_142863e32 body=357 status=ok
// SIG undefined FUN_142863e32(void)

undefined8 FUN_142863e32(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong lStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)*param_1 == '\x01') {
    lVar2 = FUN_1408fb716(param_2 + 8,(int)*(short *)(param_1[1] + 0x10),
                          (int)*(short *)(param_1[1] + 0x12));
    if (lVar2 != 0) {
      *(undefined1 *)(*(longlong *)param_1[2] + 0x24) = param_3;
      *(ushort *)(*(longlong *)param_1[2] + 4) =
           (ushort)*(byte *)(lVar2 + 0x20) + (short)*(undefined4 *)(lVar2 + 0x10);
      *(ushort *)(*(longlong *)param_1[2] + 6) =
           (ushort)*(byte *)(lVar2 + 0x20) + (short)*(undefined4 *)(lVar2 + 0x14);
      *(ushort *)(*(longlong *)param_1[2] + 8) =
           (short)*(undefined4 *)(lVar2 + 0x18) + (ushort)*(byte *)(lVar2 + 0x20) * -2;
      *(ushort *)(*(longlong *)param_1[2] + 10) =
           (short)*(undefined4 *)(lVar2 + 0x1c) + (ushort)*(byte *)(lVar2 + 0x20) * -2;
      uVar3 = 1;
      goto LAB_142863ee0;
    }
  }
  else if (*(char *)param_1[3] == '\0') {
    local_38 = 0;
    lStack_30 = 0;
    local_28 = 0;
    cVar1 = FUN_1469380ba(param_2,*(undefined2 *)param_1[4],((undefined2 *)param_1[4])[1]);
    if (cVar1 != '\0') {
      *(undefined1 *)(*(longlong *)param_1[2] + 0x24) = param_3;
      *(undefined2 *)(*(longlong *)param_1[2] + 4) = local_38._4_2_;
      *(undefined2 *)(*(longlong *)param_1[2] + 6) = local_38._6_2_;
      *(undefined2 *)(*(longlong *)param_1[2] + 8) = (undefined2)local_38;
      *(undefined2 *)(*(longlong *)param_1[2] + 10) = local_38._2_2_;
    }
    if (lStack_30 != 0) {
      FUN_1400020a8();
    }
    uVar3 = 1;
    if (cVar1 != '\0') goto LAB_142863ee0;
  }
  uVar3 = 0;
LAB_142863ee0:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 142863faa FUN_142863faa body=122 status=ok
// SIG undefined FUN_142863faa(void)

undefined8 FUN_142863faa(longlong param_1)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  if (((*(byte *)(param_1 + 0x200) & 1) != 0) && (cVar2 = FUN_142864024(param_1), cVar2 != '\0')) {
    *(undefined1 *)(param_1 + 0x200) = 0;
    return 1;
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 != 1) {
      return 0;
    }
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    if (DVar3 != DVar4) {
      return 0;
    }
  }
  FUN_1415dd412(param_1);
  return 0;
}



// FUNCTION 142864024 FUN_142864024 body=406 status=ok
// SIG undefined FUN_142864024(void)

undefined8 FUN_142864024(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_142864079;
    }
    return 0;
  }
LAB_142864079:
  FUN_146936706(param_1);
  iVar1 = *(int *)(param_1 + 0x1e8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1e0);
    lVar5 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar5) + 0x20))();
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
  }
  FUN_145f8b0f0(param_1 + 0x240,param_1);
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_144893a1c(param_1 + 0x1a0,0);
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(int *)(param_1 + 0x1bc) != 0) {
    FUN_144893a1c(param_1 + 0x1b0,0);
  }
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    FUN_144893a1c(param_1 + 0x1d0,0);
  }
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  if (*(int *)(param_1 + 0x1cc) != 0) {
    FUN_144893a1c(param_1 + 0x1c0,0);
  }
  FUN_1458b1b65(*(undefined8 *)(param_1 + 0x1e0),*(undefined4 *)(param_1 + 0x1e8));
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  if (*(int *)(param_1 + 0x1ec) != 0) {
    FUN_14694e8a8(param_1 + 0x1e0);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x208));
  *(undefined4 *)(param_1 + 0x238) = 0;
  if (*(int *)(param_1 + 0x23c) != 0) {
    FUN_146125c7e(param_1 + 0x230,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x208));
  return 1;
}



// FUNCTION 1428641ba FUN_1428641ba body=69 status=ok
// SIG undefined FUN_1428641ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428641ba(void)

{
  _DAT_14c9683a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428641fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9683b0,1);
  return;
}



// FUNCTION 142864221 FUN_142864221 body=169 status=ok
// SIG undefined FUN_142864221(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142864221(void)

{
  _DAT_14c968468 = 0;
  if (DAT_14c968460 != 0) {
    FUN_1400020a8();
  }
  _DAT_14c968428 = 0;
  if (DAT_14c96842c != 0) {
    FUN_14472eb64(&DAT_14c968420,0);
  }
  _DAT_14c968450 = 0xffffffff;
  _DAT_14c968448 = 0;
  if (0x80 < DAT_14c96844c) {
    DAT_14c96844c = 0x80;
    FUN_1446efbd8(&DAT_14c968430,0);
  }
  if (DAT_14c968440 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c968420 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1428642ca FUN_1428642ca body=69 status=ok
// SIG undefined FUN_1428642ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428642ca(void)

{
  _DAT_14c968478 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014286430c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c968480,1);
  return;
}



// FUNCTION 14286432f FUN_14286432f body=7 status=ok
// SIG undefined FUN_14286432f(void)

void FUN_14286432f(undefined8 param_1)

{
  FUN_14001cc68(param_1,0);
  return;
}



// FUNCTION 142864336 FUN_142864336 body=53 status=ok
// SIG undefined FUN_142864336(void)

void * FUN_142864336(longlong param_1,longlong param_2)

{
  void *pvVar1;
  size_t _Size;
  
  _Size = param_1 * param_2;
  if (_Size != 0) {
    pvVar1 = (void *)FUN_14001cc68(_Size);
    pvVar1 = memset(pvVar1,0,_Size);
    return pvVar1;
  }
  return (void *)0x0;
}



// FUNCTION 14286436b FUN_14286436b body=8 status=ok
// SIG undefined FUN_14286436b(void)

void FUN_14286436b(undefined8 param_1,undefined8 param_2)

{
  FUN_14001fdce(param_1,param_2,0);
  return;
}



// FUNCTION 142864378 FUN_142864378 body=59 status=ok
// SIG undefined FUN_142864378(void)

void FUN_142864378(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c9684c8;
  if (DAT_14c9684c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c9684c8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001428643a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428643b4 FUN_1428643b4 body=492 status=ok
// SIG undefined FUN_1428643b4(void)

longlong FUN_1428643b4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  void *local_60;
  undefined8 uStack_58;
  void *local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (lVar5 != 0) goto LAB_1428643f0;
  if (*(char *)(param_1 + 0x120) == '\x01') {
    local_60 = (void *)0x0;
    iVar3 = *(int *)(param_1 + 0x118);
    _Src = *(void **)(param_1 + 0x110);
    uStack_58 = CONCAT44(uStack_58._4_4_,iVar3);
    if ((longlong)iVar3 == 0) goto LAB_14286444b;
    FUN_1446dd670(&local_60,iVar3,0);
    memcpy(local_60,_Src,(longlong)iVar3 * 2);
    local_50 = local_60;
    local_48 = (undefined4)uStack_58;
    local_44 = uStack_58._4_4_;
  }
  else {
LAB_14286444b:
    local_50 = (void *)0x0;
    local_48 = 0;
    local_44 = 0;
  }
  plVar4 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149eda470;
  local_60 = (void *)0x0;
  uStack_58 = 0;
  local_68 = 0;
  FUN_1458a31e8(plVar4 + 2,&local_50,0,0);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xb0) = 0x10;
    plVar6 = *(longlong **)(param_1 + 0xb8);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xb8) = 0;
LAB_142864526:
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
      if (plVar4 != (longlong *)0x0) goto LAB_142864569;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xb0) = plVar4 + 2;
    plVar6 = *(longlong **)(param_1 + 0xb8);
    if (plVar4 == plVar6) {
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
    else {
      *(longlong **)(param_1 + 0xb8) = plVar4;
      if (plVar6 != (longlong *)0x0) goto LAB_142864526;
    }
LAB_142864569:
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
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  lVar5 = *(longlong *)(param_1 + 0xb0);
LAB_1428643f0:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1428645a2 FUN_1428645a2 body=99 status=ok
// SIG undefined FUN_1428645a2(void)

void FUN_1428645a2(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    (**(code **)(*param_2 + 0x88))(param_2,*(longlong *)(param_1 + 0xa0) + 0x20,0,0);
  }
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142864602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,*(longlong *)(param_1 + 0xb0) + 0x20,0,0);
  return;
}



// FUNCTION 142864605 FUN_142864605 body=69 status=ok
// SIG undefined FUN_142864605(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142864605(void)

{
  _DAT_14c968500 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142864647. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c968508,1);
  return;
}



// FUNCTION 14286464a FUN_14286464a body=69 status=ok
// SIG undefined FUN_14286464a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14286464a(void)

{
  _DAT_14c968518 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014286468c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c968520,1);
  return;
}



// FUNCTION 14286468f FUN_14286468f body=78 status=ok
// SIG undefined FUN_14286468f(void)

int FUN_14286468f(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar1 = FUN_142866e50(param_1,param_2,0);
  bVar2 = FUN_142866e50(param_1,param_2,1);
  bVar3 = FUN_142866e50(param_1,param_2,2);
  return (uint)bVar1 + (uint)bVar2 * 2 + (uint)bVar3 * 4;
}



// FUNCTION 1428646dd FUN_1428646dd body=400 status=ok
// SIG undefined FUN_1428646dd(void)

ulonglong FUN_1428646dd(undefined8 param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  ulonglong uVar7;
  undefined8 unaff_RBP;
  float fVar8;
  float fVar9;
  
  fVar1 = param_4[2];
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar8 = fVar3;
  if (fVar3 <= fVar2) {
    fVar8 = fVar2;
  }
  fVar9 = fVar1;
  if (fVar8 <= fVar1) {
    fVar9 = fVar8;
  }
  fVar8 = fVar3;
  if (fVar2 <= fVar3) {
    fVar8 = fVar2;
  }
  if (fVar9 <= fVar8) {
    fVar9 = fVar8;
  }
  if (ABS(fVar9 + -0.5) <= ABS(param_2 + -0.5)) {
    fVar8 = *param_3;
    fVar4 = param_3[1];
    cVar6 = FUN_142867a2b(fVar3 - fVar2,param_2,fVar9,param_3,param_4,fVar4 - fVar8,fVar3 - fVar2);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (cVar6 == '\0') {
      fVar5 = param_3[2];
      cVar6 = FUN_142867a2b(param_1,param_2,fVar9,param_3,param_4,fVar5 - fVar4,fVar1 - fVar3);
      if (cVar6 == '\0') {
        uVar7 = FUN_142867a2b(param_1,param_2,fVar9,param_3,param_4,fVar8 - fVar5,fVar2 - fVar1);
        return uVar7;
      }
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14286486d FUN_14286486d body=960 status=ok
// SIG undefined FUN_14286486d(void)

ulonglong FUN_14286486d(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4,
                       float *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  uint uVar9;
  undefined8 unaff_RBP;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_168 [32];
  float *local_148;
  float *local_140;
  float local_138;
  float local_130;
  float local_128;
  double local_120;
  double local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  fVar1 = param_6[2];
  fVar2 = *param_6;
  fVar3 = param_6[1];
  fVar12 = fVar3;
  if (fVar3 <= fVar2) {
    fVar12 = fVar2;
  }
  fVar11 = fVar1;
  if (fVar12 <= fVar1) {
    fVar11 = fVar12;
  }
  fVar12 = fVar3;
  if (fVar2 <= fVar3) {
    fVar12 = fVar2;
  }
  if (fVar11 <= fVar12) {
    fVar11 = fVar12;
  }
  if (ABS(fVar11 + -0.5) <= ABS((float)param_2 + -0.5)) {
    fVar12 = *param_3;
    fVar4 = param_3[1];
    local_10c = *param_4;
    local_138 = fVar4 - fVar12;
    local_108 = (fVar12 - local_10c) - *param_5;
    local_110 = (param_3[2] - param_4[2]) - param_5[2];
    local_104 = (fVar4 - param_4[1]) - param_5[1];
    local_fc = -fVar12 - local_108;
    local_f8 = -fVar4 - local_104;
    fVar12 = -param_3[2] - local_110;
    local_108 = local_108 + fVar2;
    local_104 = local_104 + fVar3;
    local_110 = fVar1 + local_110;
    dVar5 = ((double)local_fc * -0.5) / (double)local_108;
    dVar7 = ((double)local_f8 * -0.5) / (double)local_104;
    local_128 = fVar3 - fVar2;
    local_130 = ((param_4[1] - local_10c) + param_5[1]) - *param_5;
    local_148 = &local_fc;
    local_140 = &local_108;
    local_120 = dVar5;
    local_118 = dVar7;
    local_100 = local_110;
    local_f4 = fVar12;
    cVar8 = FUN_142867b46(local_128,param_2,fVar11,param_3);
    uVar10 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (cVar8 == '\0') {
      local_128 = param_6[2] - param_6[1];
      local_130 = ((param_4[2] - param_4[1]) + param_5[2]) - param_5[1];
      dVar6 = ((double)fVar12 * -0.5) / (double)local_110;
      local_138 = param_3[2] - param_3[1];
      local_148 = &local_fc;
      local_140 = &local_108;
      local_120 = dVar7;
      local_118 = dVar6;
      cVar8 = FUN_142867b46(param_1,param_2,fVar11,param_3);
      if (cVar8 == '\0') {
        local_128 = *param_6 - param_6[2];
        local_130 = ((*param_4 - param_4[2]) + *param_5) - param_5[2];
        local_138 = *param_3 - param_3[2];
        local_148 = &local_fc;
        local_140 = &local_108;
        local_120 = dVar6;
        local_118 = dVar5;
        uVar9 = FUN_142867b46(param_1,param_2,fVar11,param_3);
        uVar10 = (ulonglong)uVar9;
      }
    }
  }
  else {
    uVar10 = 0;
  }
  if ((local_f0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142864c2e FUN_142864c2e body=296 status=ok
// SIG undefined FUN_142864c2e(void)

ulonglong FUN_142864c2e(undefined8 param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 unaff_RBP;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar5 = fVar2;
  if (fVar2 <= fVar1) {
    fVar5 = fVar1;
  }
  fVar6 = param_4[2];
  if (fVar5 <= param_4[2]) {
    fVar6 = fVar5;
  }
  fVar5 = fVar2;
  if (fVar1 <= fVar2) {
    fVar5 = fVar1;
  }
  if (fVar6 <= fVar5) {
    fVar6 = fVar5;
  }
  if (ABS(fVar6 + -0.5) <= ABS(param_2 + -0.5)) {
    cVar3 = FUN_142867f80(fVar2 - fVar1,param_2,fVar6,param_3,param_4,param_3[1] - *param_3,
                          fVar2 - fVar1);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if ((cVar3 == '\0') &&
       (cVar3 = FUN_142867f80(param_1,param_2,fVar6,param_3,param_4,param_3[2] - param_3[1],
                              param_4[2] - param_4[1]), cVar3 == '\0')) {
      uVar4 = FUN_142867f80(param_1,param_2,fVar6,param_3,param_4,*param_3 - param_3[2],
                            *param_4 - param_4[2]);
      return uVar4;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 142864d56 FUN_142864d56 body=960 status=ok
// SIG undefined FUN_142864d56(void)

ulonglong FUN_142864d56(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4,
                       float *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  uint uVar9;
  undefined8 unaff_RBP;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_168 [32];
  float *local_148;
  float *local_140;
  float local_138;
  float local_130;
  float local_128;
  double local_120;
  double local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  fVar1 = param_6[2];
  fVar2 = *param_6;
  fVar3 = param_6[1];
  fVar12 = fVar3;
  if (fVar3 <= fVar2) {
    fVar12 = fVar2;
  }
  fVar11 = fVar1;
  if (fVar12 <= fVar1) {
    fVar11 = fVar12;
  }
  fVar12 = fVar3;
  if (fVar2 <= fVar3) {
    fVar12 = fVar2;
  }
  if (fVar11 <= fVar12) {
    fVar11 = fVar12;
  }
  if (ABS(fVar11 + -0.5) <= ABS((float)param_2 + -0.5)) {
    fVar12 = *param_3;
    fVar4 = param_3[1];
    local_10c = *param_4;
    local_138 = fVar4 - fVar12;
    local_108 = (fVar12 - local_10c) - *param_5;
    local_110 = (param_3[2] - param_4[2]) - param_5[2];
    local_104 = (fVar4 - param_4[1]) - param_5[1];
    local_fc = -fVar12 - local_108;
    local_f8 = -fVar4 - local_104;
    fVar12 = -param_3[2] - local_110;
    local_108 = local_108 + fVar2;
    local_104 = local_104 + fVar3;
    local_110 = fVar1 + local_110;
    dVar5 = ((double)local_fc * -0.5) / (double)local_108;
    dVar7 = ((double)local_f8 * -0.5) / (double)local_104;
    local_128 = fVar3 - fVar2;
    local_130 = ((param_4[1] - local_10c) + param_5[1]) - *param_5;
    local_148 = &local_fc;
    local_140 = &local_108;
    local_120 = dVar5;
    local_118 = dVar7;
    local_100 = local_110;
    local_f4 = fVar12;
    cVar8 = FUN_14286826e(local_128,param_2,fVar11,param_3);
    uVar10 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (cVar8 == '\0') {
      local_128 = param_6[2] - param_6[1];
      local_130 = ((param_4[2] - param_4[1]) + param_5[2]) - param_5[1];
      dVar6 = ((double)fVar12 * -0.5) / (double)local_110;
      local_138 = param_3[2] - param_3[1];
      local_148 = &local_fc;
      local_140 = &local_108;
      local_120 = dVar7;
      local_118 = dVar6;
      cVar8 = FUN_14286826e(param_1,param_2,fVar11,param_3);
      if (cVar8 == '\0') {
        local_128 = *param_6 - param_6[2];
        local_130 = ((*param_4 - param_4[2]) + *param_5) - param_5[2];
        local_138 = *param_3 - param_3[2];
        local_148 = &local_fc;
        local_140 = &local_108;
        local_120 = dVar6;
        local_118 = dVar5;
        uVar9 = FUN_14286826e(param_1,param_2,fVar11,param_3);
        uVar10 = (ulonglong)uVar9;
      }
    }
  }
  else {
    uVar10 = 0;
  }
  if ((local_f0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142865117 FUN_142865117 body=296 status=ok
// SIG undefined FUN_142865117(void)

ulonglong FUN_142865117(undefined8 param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 unaff_RBP;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar5 = fVar2;
  if (fVar2 <= fVar1) {
    fVar5 = fVar1;
  }
  fVar6 = param_4[2];
  if (fVar5 <= param_4[2]) {
    fVar6 = fVar5;
  }
  fVar5 = fVar2;
  if (fVar1 <= fVar2) {
    fVar5 = fVar1;
  }
  if (fVar6 <= fVar5) {
    fVar6 = fVar5;
  }
  if (ABS(fVar6 + -0.5) <= ABS(param_2 + -0.5)) {
    cVar3 = FUN_142868620(fVar2 - fVar1,param_2,fVar6,param_3,param_4,param_3[1] - *param_3,
                          fVar2 - fVar1);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if ((cVar3 == '\0') &&
       (cVar3 = FUN_142868620(param_1,param_2,fVar6,param_3,param_4,param_3[2] - param_3[1],
                              param_4[2] - param_4[1]), cVar3 == '\0')) {
      uVar4 = FUN_142868620(param_1,param_2,fVar6,param_3,param_4,*param_3 - param_3[2],
                            *param_4 - param_4[2]);
      return uVar4;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14286523f FUN_14286523f body=960 status=ok
// SIG undefined FUN_14286523f(void)

ulonglong FUN_14286523f(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4,
                       float *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  uint uVar9;
  undefined8 unaff_RBP;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_168 [32];
  float *local_148;
  float *local_140;
  float local_138;
  float local_130;
  float local_128;
  double local_120;
  double local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  fVar1 = param_6[2];
  fVar2 = *param_6;
  fVar3 = param_6[1];
  fVar12 = fVar3;
  if (fVar3 <= fVar2) {
    fVar12 = fVar2;
  }
  fVar11 = fVar1;
  if (fVar12 <= fVar1) {
    fVar11 = fVar12;
  }
  fVar12 = fVar3;
  if (fVar2 <= fVar3) {
    fVar12 = fVar2;
  }
  if (fVar11 <= fVar12) {
    fVar11 = fVar12;
  }
  if (ABS(fVar11 + -0.5) <= ABS((float)param_2 + -0.5)) {
    fVar12 = *param_3;
    fVar4 = param_3[1];
    local_10c = *param_4;
    local_138 = fVar4 - fVar12;
    local_108 = (fVar12 - local_10c) - *param_5;
    local_110 = (param_3[2] - param_4[2]) - param_5[2];
    local_104 = (fVar4 - param_4[1]) - param_5[1];
    local_fc = -fVar12 - local_108;
    local_f8 = -fVar4 - local_104;
    fVar12 = -param_3[2] - local_110;
    local_108 = local_108 + fVar2;
    local_104 = local_104 + fVar3;
    local_110 = fVar1 + local_110;
    dVar5 = ((double)local_fc * -0.5) / (double)local_108;
    dVar7 = ((double)local_f8 * -0.5) / (double)local_104;
    local_128 = fVar3 - fVar2;
    local_130 = ((param_4[1] - local_10c) + param_5[1]) - *param_5;
    local_148 = &local_fc;
    local_140 = &local_108;
    local_120 = dVar5;
    local_118 = dVar7;
    local_100 = local_110;
    local_f4 = fVar12;
    cVar8 = FUN_14286875c(local_128,param_2,fVar11,param_3);
    uVar10 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (cVar8 == '\0') {
      local_128 = param_6[2] - param_6[1];
      local_130 = ((param_4[2] - param_4[1]) + param_5[2]) - param_5[1];
      dVar6 = ((double)fVar12 * -0.5) / (double)local_110;
      local_138 = param_3[2] - param_3[1];
      local_148 = &local_fc;
      local_140 = &local_108;
      local_120 = dVar7;
      local_118 = dVar6;
      cVar8 = FUN_14286875c(param_1,param_2,fVar11,param_3);
      if (cVar8 == '\0') {
        local_128 = *param_6 - param_6[2];
        local_130 = ((*param_4 - param_4[2]) + *param_5) - param_5[2];
        local_138 = *param_3 - param_3[2];
        local_148 = &local_fc;
        local_140 = &local_108;
        local_120 = dVar6;
        local_118 = dVar5;
        uVar9 = FUN_14286875c(param_1,param_2,fVar11,param_3);
        uVar10 = (ulonglong)uVar9;
      }
    }
  }
  else {
    uVar10 = 0;
  }
  if ((local_f0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142865600 FUN_142865600 body=556 status=ok
// SIG undefined FUN_142865600(void)

void FUN_142865600(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  void *_Dst;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  void *pvVar22;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar3 = (undefined4 *)param_1[1];
  if (puVar3 == (undefined4 *)param_1[2]) {
    lVar16 = (longlong)puVar3 - *param_1;
    uVar19 = lVar16 >> 5;
    uVar17 = uVar19 + 1;
    uVar15 = (uVar19 >> 1) + uVar19;
    if (uVar15 <= uVar17) {
      uVar15 = uVar17;
    }
    if (0x7ffffffffffffff - (uVar19 >> 1) < uVar19) {
      uVar15 = 0x7ffffffffffffff;
    }
    if (uVar15 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14694ac37();
    }
    lVar20 = uVar15 * 0x20;
    if (uVar15 < 0x80) {
      if (uVar15 == 0) {
        _Dst = (void *)0x0;
      }
      else {
        _Dst = (void *)FUN_14001cc68(lVar20,0x10);
      }
    }
    else {
      _Dst = (void *)FUN_140c1ca1d(lVar20);
    }
    uVar10 = *param_2;
    uVar11 = param_2[1];
    uVar12 = param_2[3];
    puVar1 = (undefined8 *)((longlong)_Dst + lVar16 + 0x10);
    *puVar1 = param_2[2];
    puVar1[1] = uVar12;
    *(undefined8 *)((longlong)_Dst + lVar16) = uVar10;
    ((undefined8 *)((longlong)_Dst + lVar16))[1] = uVar11;
    puVar4 = (undefined4 *)param_1[1];
    memmove(_Dst,(void *)*param_1,(longlong)puVar3 - *param_1);
    if (puVar4 != puVar3) {
      memmove((void *)((longlong)_Dst + lVar16 + 0x20),puVar3,param_1[1] - (longlong)puVar3);
    }
    lVar16 = *param_1;
    if (lVar16 != 0) {
      lVar18 = lVar16;
      if ((0xfff < (ulonglong)(param_1[2] - lVar16)) &&
         (lVar18 = *(longlong *)(lVar16 + -8), 0x1f < (ulonglong)((lVar16 + -8) - lVar18))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_1400020a8(lVar18);
    }
    *param_1 = (longlong)_Dst;
    pvVar22 = (void *)(uVar17 * 0x20 + (longlong)_Dst);
    param_1[1] = (longlong)pvVar22;
    param_1[2] = (longlong)(lVar20 + (longlong)_Dst);
  }
  else {
    uVar6 = *(undefined4 *)param_2;
    uVar7 = *(undefined4 *)((longlong)param_2 + 4);
    uVar8 = *(undefined4 *)(param_2 + 1);
    uVar9 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar10 = param_2[3];
    *(undefined8 *)(puVar3 + 4) = param_2[2];
    *(undefined8 *)(puVar3 + 6) = uVar10;
    *puVar3 = uVar6;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    _Dst = (void *)*param_1;
    pvVar22 = (void *)(param_1[1] + 0x20);
    param_1[1] = (longlong)pvVar22;
  }
  lVar16 = (longlong)pvVar22 - (longlong)_Dst >> 5;
  if (1 < lVar16) {
    fVar2 = *(float *)((longlong)pvVar22 + -0x20);
    uVar10 = *(undefined8 *)((longlong)pvVar22 + -8);
    uStack_58 = (undefined4)((ulonglong)*(undefined8 *)((longlong)pvVar22 + -0x10) >> 0x20);
    uStack_68 = *(undefined8 *)((longlong)pvVar22 + -0x1c);
    uVar11 = *(undefined8 *)((longlong)pvVar22 + -0x14);
    uStack_60 = (undefined4)uVar11;
    local_5c = (undefined4)((ulonglong)uVar11 >> 0x20);
    uVar17 = lVar16 - 1;
    uVar15 = lVar16 - 2;
    do {
      uVar19 = uVar15 >> 1;
      if (*(float *)((longlong)_Dst + uVar19 * 0x20) <= fVar2) goto LAB_1428657d7;
      puVar21 = (undefined8 *)(uVar19 * 0x20 + (longlong)_Dst);
      uVar12 = *puVar21;
      uVar13 = puVar21[1];
      uVar14 = puVar21[3];
      puVar1 = (undefined8 *)((longlong)_Dst + uVar17 * 0x20 + 0x10);
      *puVar1 = puVar21[2];
      puVar1[1] = uVar14;
      puVar1 = (undefined8 *)((longlong)_Dst + uVar17 * 0x20);
      *puVar1 = uVar12;
      puVar1[1] = uVar13;
      bVar5 = 1 < uVar15;
      uVar17 = uVar19;
      uVar15 = uVar19 - 1;
    } while (bVar5);
    uVar17 = 0;
LAB_1428657d7:
    lVar16 = uVar17 * 0x20;
    *(float *)((longlong)_Dst + lVar16) = fVar2;
    puVar1 = (undefined8 *)((longlong)_Dst + lVar16 + 4);
    *puVar1 = uStack_68;
    puVar1[1] = uVar11;
    uStack_54._0_4_ = (undefined4)uVar10;
    uStack_54._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
    puVar3 = (undefined4 *)((longlong)_Dst + lVar16 + 0x10);
    *puVar3 = local_5c;
    puVar3[1] = uStack_58;
    puVar3[2] = (undefined4)uStack_54;
    puVar3[3] = uStack_54._4_4_;
    uStack_54 = uVar10;
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14286582e FUN_14286582e body=558 status=ok
// SIG undefined FUN_14286582e(void)

void FUN_14286582e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,char *param_4)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *_Dst;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  byte *local_98;
  int local_90;
  int local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_4 + 8) == 0) goto LAB_14286585a;
  _Dst = *(byte **)(param_4 + 0x20);
  if (_Dst == (byte *)0x0) {
    iVar4 = *(int *)(param_1 + 1);
    iVar5 = *(int *)((longlong)param_1 + 0xc);
    pbVar2 = (byte *)FUN_14001cc68((longlong)(int)(iVar4 * iVar5 + (uint)(iVar4 * iVar5 == 0)));
    _Dst = pbVar2;
  }
  else {
    iVar4 = *(int *)(param_1 + 1);
    iVar5 = *(int *)((longlong)param_1 + 0xc);
    pbVar2 = (byte *)0x0;
  }
  local_88 = *param_3;
  uStack_80 = param_3[1];
  local_78 = param_3[2];
  uStack_70 = param_3[3];
  local_68 = param_3[4];
  uStack_60 = param_3[5];
  local_98 = _Dst;
  local_90 = iVar4;
  local_8c = iVar5;
  memset(_Dst,0,(longlong)iVar5 * (longlong)iVar4);
  local_58 = *(undefined8 *)(param_4 + 0x10);
  local_50 = *(undefined8 *)(param_4 + 0x18);
  if (*(int *)(param_4 + 8) == 3) {
    if (0 < iVar4 * iVar5) {
      pbVar3 = _Dst;
      do {
        *pbVar3 = *pbVar3 | 2;
        pbVar3 = pbVar3 + 1;
      } while (pbVar3 < _Dst + iVar4 * iVar5);
    }
  }
  else if (*(int *)(param_4 + 8) == 2) {
    FUN_146944322(&local_98,param_2);
    local_a8 = *param_1;
    local_a0 = *(undefined4 *)(param_1 + 1);
    local_9c = *(undefined4 *)((longlong)param_1 + 0xc);
    FUN_146941364(&local_98);
  }
  iVar1 = *(int *)(param_4 + 0xc);
  if (iVar1 == 0) {
LAB_142865998:
    local_a8 = *param_1;
    local_a0 = *(undefined4 *)(param_1 + 1);
    local_9c = *(undefined4 *)((longlong)param_1 + 0xc);
    FUN_146941bf6(&local_98);
    iVar1 = *(int *)(param_4 + 0xc);
    if (iVar1 == 1) {
      if (iVar4 * iVar5 < 1) goto LAB_1428659e7;
      pbVar3 = _Dst + iVar4 * iVar5;
      do {
        *_Dst = *_Dst | 2;
        _Dst = _Dst + 1;
      } while (_Dst < pbVar3);
      iVar1 = *(int *)(param_4 + 0xc);
    }
LAB_1428659e0:
    if (iVar1 - 1U < 2) goto LAB_1428659e7;
  }
  else {
    if (iVar1 != 1) goto LAB_1428659e0;
    if (*(int *)(param_4 + 8) != 3) goto LAB_142865998;
LAB_1428659e7:
    if (*param_4 == '\x01') {
      local_a8 = *param_1;
      local_a0 = *(undefined4 *)(param_1 + 1);
      local_9c = *(undefined4 *)((longlong)param_1 + 0xc);
      FUN_1469429c2(&local_98,&local_a8,param_2);
    }
    else {
      local_a8 = *param_1;
      local_a0 = *(undefined4 *)(param_1 + 1);
      local_9c = *(undefined4 *)((longlong)param_1 + 0xc);
      FUN_14694213c(&local_98,&local_a8,param_2);
    }
  }
  FUN_146943262(&local_98,param_1);
  if (pbVar2 != (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
  }
LAB_14286585a:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142865a78 FUN_142865a78 body=126 status=ok
// SIG undefined FUN_142865a78(void)

undefined8 FUN_142865a78(int *param_1,double *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)param_2[4];
  if ((plVar2 == (longlong *)0x0) || (*plVar2 != plVar2[1])) {
    plVar2 = (longlong *)param_2[3];
    FUN_14694b8bc(plVar2,(plVar2[1] - *plVar2 >> 3) * -0x5555555555555555 + 1);
    param_2[4] = (double)(plVar2[1] + -0x18);
  }
  iVar1 = param_1[1];
  param_2[1] = (double)*param_1 * *param_2;
  param_2[2] = (double)iVar1 * *param_2;
  return 0;
}



// FUNCTION 142865af6 FUN_142865af6 body=250 status=ok
// SIG undefined FUN_142865af6(void)

undefined8 FUN_142865af6(int *param_1,double *param_2)

{
  double dVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  dVar3 = (double)param_1[1] * *param_2;
  dVar4 = (double)*param_1 * *param_2;
  if ((dVar4 == param_2[1]) && (!NAN(dVar4) && !NAN(param_2[1]))) {
    if ((dVar3 == param_2[2]) && (!NAN(dVar3) && !NAN(param_2[2]))) goto LAB_142865ba2;
  }
  dVar1 = param_2[4];
  local_48 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *(undefined4 *)(local_48 + 1) = 7;
  *local_48 = &PTR_FUN_149ed35d0;
  dVar5 = param_2[2];
  local_48[2] = param_2[1];
  local_48[3] = dVar5;
  local_48[4] = dVar4;
  local_48[5] = dVar3;
  puVar2 = *(undefined8 **)((longlong)dVar1 + 8);
  if (puVar2 == *(undefined8 **)((longlong)dVar1 + 0x10)) {
    FUN_14694add6(dVar1,puVar2,&local_48);
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  else {
    *puVar2 = local_48;
    *(longlong *)((longlong)dVar1 + 8) = *(longlong *)((longlong)dVar1 + 8) + 8;
  }
  param_2[1] = dVar4;
  param_2[2] = dVar3;
LAB_142865ba2:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142865bf1 FUN_142865bf1 body=283 status=ok
// SIG undefined FUN_142865bf1(void)

undefined8 FUN_142865bf1(int *param_1,int *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  double local_78;
  double dStack_70;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar1 = *param_3;
  dVar4 = (double)param_2[1] * dVar1;
  dVar5 = (double)*param_2 * dVar1;
  if ((((dVar5 != param_3[1]) || (NAN(dVar5) || NAN(param_3[1]))) || (dVar4 != param_3[2])) ||
     (NAN(dVar4) || NAN(param_3[2]))) {
    dVar2 = param_3[4];
    local_58 = (double)param_1[1] * dVar1;
    local_60 = (double)*param_1 * dVar1;
    local_78 = param_3[1];
    dStack_70 = param_3[2];
    local_50 = dVar5;
    local_48 = dVar4;
    local_80 = (undefined8 *)FUN_146938dac();
    puVar3 = *(undefined8 **)((longlong)dVar2 + 8);
    if (puVar3 == *(undefined8 **)((longlong)dVar2 + 0x10)) {
      FUN_14694add6(dVar2,puVar3,&local_80);
      if (local_80 != (undefined8 *)0x0) {
        (**(code **)*local_80)(local_80,1);
      }
    }
    else {
      *puVar3 = local_80;
      *(longlong *)((longlong)dVar2 + 8) = *(longlong *)((longlong)dVar2 + 8) + 8;
    }
    param_3[1] = dVar5;
    param_3[2] = dVar4;
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142865d0d FUN_142865d0d body=458 status=ok
// SIG undefined FUN_142865d0d(void)

undefined8 FUN_142865d0d(int *param_1,int *param_2,int *param_3,double *param_4)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  double local_98;
  double dStack_90;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar8 = *param_4;
  dVar2 = (double)param_3[1] * dVar8;
  dVar3 = (double)*param_3 * dVar8;
  if ((((dVar3 != param_4[1]) || (NAN(dVar3) || NAN(param_4[1]))) || (dVar2 != param_4[2])) ||
     (NAN(dVar2) || NAN(param_4[2]))) {
    dVar5 = (double)param_2[1] * dVar8;
    dVar6 = (double)*param_2 * dVar8;
    dVar7 = (double)param_1[1] * dVar8;
    dVar8 = (double)*param_1 * dVar8;
  }
  else {
    dVar5 = (double)param_2[1] * dVar8;
    dVar6 = (double)*param_2 * dVar8;
    dVar7 = (double)param_1[1] * dVar8;
    dVar8 = (double)*param_1 * dVar8;
    dVar4 = (dVar8 - dVar3) * (dVar5 - dVar2) - (dVar7 - dVar2) * (dVar6 - dVar3);
    if ((dVar4 == 0.0) && (!NAN(dVar4))) goto LAB_142865de8;
  }
  dVar4 = param_4[4];
  local_98 = param_4[1];
  dStack_90 = param_4[2];
  local_80 = dVar8;
  local_78 = dVar7;
  local_70 = dVar6;
  local_68 = dVar5;
  local_60 = dVar3;
  local_58 = dVar2;
  local_a0 = (undefined8 *)FUN_146938e6c();
  puVar1 = *(undefined8 **)((longlong)dVar4 + 8);
  if (puVar1 == *(undefined8 **)((longlong)dVar4 + 0x10)) {
    FUN_14694add6(dVar4,puVar1,&local_a0);
    if (local_a0 != (undefined8 *)0x0) {
      (**(code **)*local_a0)(local_a0,1);
    }
  }
  else {
    *puVar1 = local_a0;
    *(longlong *)((longlong)dVar4 + 8) = *(longlong *)((longlong)dVar4 + 8) + 8;
  }
  param_4[1] = dVar3;
  param_4[2] = dVar2;
LAB_142865de8:
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142865ed8 FUN_142865ed8 body=69 status=ok
// SIG undefined FUN_142865ed8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142865ed8(void)

{
  _DAT_14c968528 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142865f1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c968530,1);
  return;
}



// FUNCTION 142865f1e FUN_142865f1e body=423 status=ok
// SIG undefined FUN_142865f1e(void)

undefined8 FUN_142865f1e(longlong *param_1,longlong *param_2,short *param_3,char param_4)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)param_2[1];
  uVar11 = 1;
  if (plVar3 == (longlong *)0x0) goto LAB_142865f9f;
  iVar10 = (int)plVar3[1];
  do {
    if (iVar10 == 0) goto LAB_142865f9f;
    LOCK();
    iVar8 = (int)plVar3[1];
    bVar12 = iVar10 == iVar8;
    if (bVar12) {
      *(int *)(plVar3 + 1) = iVar10 + 1;
      iVar8 = iVar10;
    }
    iVar10 = iVar8;
    UNLOCK();
  } while (!bVar12);
  plVar4 = (longlong *)*param_2;
  if (plVar4 == (longlong *)0x0) {
LAB_142865f7d:
    uVar11 = 1;
  }
  else {
    uVar11 = 2;
    if ((char)plVar4[3] == '\0') {
      if (*plVar4 == 0) goto LAB_142865f7d;
      local_58 = param_1 + 0xb;
      local_60 = param_1 + 7;
      local_68 = (undefined4)param_2[4];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      lVar6 = param_2[3];
      lVar7 = param_2[2];
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_48 = plVar4;
      local_40 = plVar3;
      cVar9 = FUN_146944ff0(&local_48,(int)lVar7,(int)lVar6,uVar2);
      uVar11 = 1;
      if (cVar9 != '\0') {
        lVar6 = *param_2;
        lVar7 = param_2[1];
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
          UNLOCK();
        }
        plVar4 = (longlong *)param_1[1];
        *param_1 = lVar6;
        param_1[1] = lVar7;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
        *(int *)(param_1 + 4) = (int)param_2[4];
        uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
        lVar6 = param_2[3];
        uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
        *(int *)(param_1 + 2) = (int)param_2[2];
        *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
        *(int *)(param_1 + 3) = (int)lVar6;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
        *param_3 = (short)(int)param_1[0x12] - (short)(int)param_1[0x11];
        param_3[1] = (short)*(undefined4 *)((longlong)param_1 + 0x94) -
                     (short)*(undefined4 *)((longlong)param_1 + 0x8c);
        param_3[2] = (short)param_1[0x11];
        param_3[3] = *(short *)((longlong)param_1 + 0x94);
        uVar11 = 0;
        if (param_4 != '\0') {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
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
              uVar11 = 0;
            }
          }
        }
      }
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
LAB_142865f9f:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 1428660c6 FUN_1428660c6 body=264 status=ok
// SIG undefined FUN_1428660c6(void)

void FUN_1428660c6(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  plVar6 = (longlong *)*param_1;
  if (*plVar6 != 0) {
    lVar14 = param_1[1];
    piVar7 = (int *)param_1[2];
    puVar8 = (undefined4 *)param_1[5];
    puVar9 = (undefined8 *)param_1[4];
    iVar3 = *(int *)param_1[3];
    iVar4 = *piVar7;
    iVar5 = *(int *)(lVar14 + 0xe8);
    *(uint *)(lVar14 + 0xe8) = iVar5 + 1U;
    if (*(uint *)(lVar14 + 0xec) < iVar5 + 1U) {
      FUN_142866f52(lVar14,iVar5);
    }
    lVar10 = *(longlong *)(lVar14 + 0xe0);
    uVar2 = *puVar8;
    uVar11 = *puVar9;
    lVar12 = puVar9[1];
    if (lVar12 != 0) {
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      UNLOCK();
    }
    if (lVar10 != 0) {
      lVar14 = lVar10;
    }
    lVar13 = (longlong)iVar5 * 0x38;
    lVar10 = *plVar6;
    *(int *)(lVar14 + lVar13) = *piVar7;
    *(int *)(lVar14 + 4 + lVar13) = iVar3 - iVar4;
    *(longlong *)(lVar14 + 8 + lVar13) = lVar10;
    *(undefined8 *)(lVar14 + 0x10 + lVar13) = uVar11;
    *(longlong *)(lVar14 + 0x18 + lVar13) = lVar12;
    *(undefined4 *)(lVar14 + 0x20 + lVar13) = uVar2;
    puVar9 = (undefined8 *)(lVar14 + 0x28 + lVar13);
    *puVar9 = 0;
    puVar9[1] = 0;
    *(undefined8 *)*param_1 = 0;
    puVar9 = (undefined8 *)param_1[4];
    *puVar9 = 0;
    plVar6 = (longlong *)puVar9[1];
    if (plVar6 != (longlong *)0x0) {
      puVar9[1] = 0;
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar7 = (int *)((longlong)plVar6 + 0xc);
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (*piVar7 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    *(undefined4 *)param_1[5] = 0x3f800000;
  }
  return;
}



// FUNCTION 1428661ce FUN_1428661ce body=122 status=ok
// SIG undefined FUN_1428661ce(void)

void FUN_1428661ce(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  
  puVar5 = (undefined4 *)*param_1;
  if (*(char *)(puVar5 + 1) == '\x01') {
    lVar6 = param_1[1];
    piVar7 = (int *)param_1[2];
    iVar1 = *(int *)param_1[3];
    iVar2 = *piVar7;
    iVar3 = *(int *)(lVar6 + 0x30);
    lVar8 = (longlong)iVar3;
    *(uint *)(lVar6 + 0x30) = iVar3 + 1U;
    if (*(uint *)(lVar6 + 0x34) < iVar3 + 1U) {
      FUN_142867152((longlong *)(lVar6 + 0x28),iVar3);
    }
    lVar6 = *(longlong *)(lVar6 + 0x28);
    uVar4 = *puVar5;
    *(int *)(lVar6 + lVar8 * 0xc) = *piVar7;
    *(int *)(lVar6 + 4 + lVar8 * 0xc) = iVar1 - iVar2;
    *(undefined4 *)(lVar6 + 8 + lVar8 * 0xc) = uVar4;
    if (*(char *)(*param_1 + 4) == '\x01') {
      *(undefined1 *)(*param_1 + 4) = 0;
    }
  }
  return;
}



// FUNCTION 142866248 FUN_142866248 body=148 status=ok
// SIG undefined FUN_142866248(void)

void FUN_142866248(longlong *param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  
  if ((*(char *)(param_2 + 0x21) == '\0') && (*(char *)(param_2 + 0x22) == '\0')) {
    lVar1 = *param_1;
    cVar3 = (char)param_4 - (char)param_3;
    *(char *)(param_2 + 0x21) = cVar3;
    if (cVar3 != '\0') {
      lVar2 = param_1[1];
      param_3 = param_3 - (int)lVar2;
      (**(code **)(**(longlong **)(lVar1 + 0x28) + 0x88))(*(longlong **)(lVar1 + 0x28),param_3);
      iVar4 = (**(code **)(**(longlong **)(lVar1 + 0x28) + 0x70))();
      if (iVar4 == param_3) {
        param_4 = param_4 - (int)lVar2;
        iVar4 = (**(code **)(**(longlong **)(lVar1 + 0x28) + 0x88))
                          (*(longlong **)(lVar1 + 0x28),param_3);
        while (iVar4 != -1) {
          *(char *)(param_2 + 0x22) = *(char *)(param_2 + 0x22) + '\x01';
          if (param_4 <= iVar4) goto LAB_1428662d2;
          iVar4 = (**(code **)(**(longlong **)(lVar1 + 0x28) + 0x78))();
        }
        iVar4 = -1;
LAB_1428662d2:
        if (iVar4 != param_4) {
          *(undefined1 *)(param_2 + 0x22) = 0;
        }
      }
    }
  }
  return;
}



// FUNCTION 1428662dc FUN_1428662dc body=215 status=ok
// SIG undefined FUN_1428662dc(void)

void FUN_1428662dc(longlong param_1,undefined2 param_2,undefined4 *param_3,undefined2 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_3 = 0;
  *param_4 = 0;
  plVar2 = (longlong *)**(longlong **)(param_1 + 8);
  plVar3 = (longlong *)plVar2[1];
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_142866393;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    puVar4 = (undefined8 *)*plVar2;
    if (puVar4 != (undefined8 *)0x0) {
      uVar8 = FUN_144b42f90(*puVar4,param_2);
      *param_3 = uVar8;
      local_2c = 0;
      cVar6 = FUN_1406d7a52(**(undefined8 **)(param_1 + 0x10),uVar8);
      if (cVar6 != '\0') {
        *param_4 = (short)((local_2c + 0x200U >> 10) + 0x20 >> 6);
      }
    }
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
LAB_142866393:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428663b4 FUN_1428663b4 body=47 status=ok
// SIG undefined FUN_1428663b4(void)

void FUN_1428663b4(void)

{
  longlong lVar1;
  
  lVar1 = 0x2a80;
  do {
    if (*(longlong **)((longlong)&DAT_14c968520 + lVar1) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)&DAT_14c968520 + lVar1) + 0x10))();
    }
    lVar1 = lVar1 + -0x28;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1428663e3 FUN_1428663e3 body=55 status=ok
// SIG undefined FUN_1428663e3(void)

void FUN_1428663e3(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96afd0 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96afd0 = FUN_14171c317(FUN_146279a44,uVar1,L"EFocusCause");
  }
  return;
}



// FUNCTION 14286641a FUN_14286641a body=47 status=ok
// SIG undefined FUN_14286641a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14286641a(void)

{
  _DAT_14c96b288 = 0;
  if (DAT_14c96b280 != 0) {
    FUN_1400020a8();
  }
  FUN_1405535a6(&DAT_14c96b240);
  return;
}



// FUNCTION 142866449 FUN_142866449 body=47 status=ok
// SIG undefined FUN_142866449(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142866449(void)

{
  _DAT_14c96b230 = 0;
  if (DAT_14c96b228 != 0) {
    FUN_1400020a8();
  }
  FUN_1405535a6(&DAT_14c96b1e8);
  return;
}



// FUNCTION 142866478 FUN_142866478 body=46 status=ok
// SIG undefined FUN_142866478(void)

void FUN_142866478(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + 8;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x128);
  }
  *param_2 = *(undefined8 *)(lVar1 + 0x38);
  lVar1 = *(longlong *)(lVar1 + 0x40);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1428664a6 FUN_1428664a6 body=169 status=ok
// SIG undefined FUN_1428664a6(void)

undefined8 FUN_1428664a6(longlong *param_1,int *param_2,char param_3)

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
      if (*(int *)(lVar1 + lVar6) == *param_2) {
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(lVar1 + (lVar3 >> 0x20) * 4),
                  (void *)(lVar1 + (longlong)(iVar2 - iVar5) * 4),(longlong)iVar5 << 2);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        if (param_3 == '\x01') {
          FUN_14479f406(param_1);
          return 1;
        }
        return 1;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar2 << 2 != lVar6);
  }
  return 0;
}



// FUNCTION 14286654f FUN_14286654f body=59 status=ok
// SIG undefined FUN_14286654f(void)

void FUN_14286654f(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c96b100;
  if (DAT_14c96b100 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c96b100 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014286657f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14286658a FUN_14286658a body=55 status=ok
// SIG undefined FUN_14286658a(void)

void FUN_14286658a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b118 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b118 = FUN_14171c317(FUN_146279fd4,uVar1,L"EWidgetClipping");
  }
  return;
}



// FUNCTION 1428665c2 FUN_1428665c2 body=167 status=ok
// SIG undefined FUN_1428665c2(void)

void FUN_1428665c2(float *param_1,float *param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xf8 | 3;
  auVar2 = blendps(ZEXT416((uint)(param_2[3] + 0.5)),ZEXT816(0),0xe);
  auVar3 = roundps(auVar2,auVar2,1);
  auVar2 = blendps(ZEXT416((uint)(param_2[2] + 0.5)),ZEXT816(0),0xe);
  auVar6 = roundps(auVar2,auVar2,1);
  auVar2 = blendps(ZEXT416((uint)(param_2[1] + 0.5)),ZEXT816(0),0xe);
  auVar7 = roundps(auVar2,auVar2,1);
  auVar2 = blendps(ZEXT416((uint)(*param_2 + 0.5)),ZEXT816(0),0xe);
  auVar2 = roundps(auVar2,auVar2,1);
  fVar1 = auVar2._0_4_;
  fVar5 = auVar6._0_4_;
  fVar4 = fVar1;
  if (fVar5 <= fVar1) {
    fVar4 = fVar5;
  }
  if (fVar1 <= fVar5) {
    auVar2._0_4_ = fVar5;
  }
  fVar1 = auVar3._0_4_;
  auVar3 = auVar7;
  if (fVar1 <= auVar7._0_4_) {
    auVar3._4_12_ = auVar7._4_12_;
    auVar3._0_4_ = fVar1;
  }
  if (auVar7._0_4_ <= fVar1) {
    auVar7._0_4_ = fVar1;
  }
  *param_1 = fVar4;
  param_1[1] = auVar3._0_4_;
  param_1[2] = auVar2._0_4_;
  param_1[3] = auVar3._0_4_;
  param_1[4] = fVar4;
  param_1[5] = auVar7._0_4_;
  param_1[6] = auVar2._0_4_;
  param_1[7] = auVar7._0_4_;
  return;
}



// FUNCTION 142866669 FUN_142866669 body=414 status=ok
// SIG undefined FUN_142866669(void)

uint FUN_142866669(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar9 = *param_2;
  fVar1 = param_2[1];
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar11 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_4[1];
  fVar6 = *param_4;
  fVar10 = (fVar4 - fVar1) * (fVar2 - fVar9) - (fVar11 - fVar9) * (fVar3 - fVar1);
  uVar7 = -(uint)(0.0 < fVar10);
  fVar11 = (fVar5 - fVar4) * (fVar2 - fVar11) - (fVar6 - fVar11) * (fVar3 - fVar4);
  uVar8 = -(uint)(0.0 < fVar11);
  fVar11 = (float)(uVar8 & 0x3f800000 | ~uVar8 & -(uint)(fVar11 < 0.0) & 0xbf800000);
  fVar9 = (fVar1 - fVar5) * (fVar2 - fVar6) - (fVar9 - fVar6) * (fVar3 - fVar5);
  uVar8 = -(uint)(0.0 < fVar9);
  return -(uint)((float)(uVar8 & 0x3f800000 | ~uVar8 & -(uint)(fVar9 < 0.0) & 0xbf800000) == fVar11
                && (float)(uVar7 & 0x3f800000 | ~uVar7 & -(uint)(fVar10 < 0.0) & 0xbf800000) ==
                   fVar11) & 0xffffff01;
}



// FUNCTION 142866807 FUN_142866807 body=55 status=ok
// SIG undefined FUN_142866807(void)

void FUN_142866807(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b130 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b130 = FUN_14171c317(FUN_14627a005,uVar1,L"EFlowDirectionPreference");
  }
  return;
}



// FUNCTION 14286683e FUN_14286683e body=69 status=ok
// SIG undefined FUN_14286683e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14286683e(void)

{
  _DAT_14c96b140 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142866880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c96b148,1);
  return;
}



// FUNCTION 142866883 FUN_142866883 body=69 status=ok
// SIG undefined FUN_142866883(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142866883(void)

{
  _DAT_14c96b150 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428668c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c96b158,1);
  return;
}



// FUNCTION 1428668da FUN_1428668da body=164 status=ok
// SIG undefined FUN_1428668da(void)

undefined8 * FUN_1428668da(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x128);
  if (*(longlong *)(param_1 + 0x128) == 0) {
    lVar4 = param_1 + 8;
  }
  uVar5 = (longlong)*(int *)(param_1 + 0x130) * 0x48;
  lVar4 = lVar4 + uVar5;
  do {
    if (uVar5 == 0) {
      lVar4 = -1;
      goto LAB_14286693a;
    }
    puVar1 = (undefined8 *)(lVar4 + -0x10);
    lVar4 = lVar4 + -0x48;
    cVar2 = (**(code **)(*(longlong *)*puVar1 + 0x200))();
    uVar5 = uVar5 - 0x48;
  } while (cVar2 == '\0');
  lVar4 = (longlong)((int)(uVar5 >> 3) * 0x38e38e39);
LAB_14286693a:
  lVar3 = param_1 + 8;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x128);
  }
  *param_2 = *(undefined8 *)(lVar3 + 0x38 + lVar4 * 0x48);
  lVar4 = *(longlong *)(lVar3 + 0x40 + lVar4 * 0x48);
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1428669ec FUN_1428669ec body=49 status=ok
// SIG undefined FUN_1428669ec(void)

void FUN_1428669ec(longlong param_1,int param_2)

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



// FUNCTION 142866a1e FUN_142866a1e body=116 status=ok
// SIG undefined FUN_142866a1e(void)

void FUN_142866a1e(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 142866af2 FUN_142866af2 body=55 status=ok
// SIG undefined FUN_142866af2(void)

void FUN_142866af2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x38);
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
                    /* WARNING: Could not recover jumptable at 0x000142866b25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142866b2a FUN_142866b2a body=347 status=ok
// SIG undefined FUN_142866b2a(void)

undefined8 FUN_142866b2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  byte bVar14;
  longlong lVar15;
  longlong lVar16;
  
  if (param_4 != 0) {
    lVar16 = 0;
    do {
      lVar15 = *(longlong *)(param_3 + lVar16);
      if (DAT_14c950c29 == 1) {
        if (lVar15 == 0) {
          lVar15 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar15 = *(longlong *)(param_3 + lVar16);
        }
      }
      bVar14 = DAT_14c950c29;
      plVar3 = (longlong *)(param_2 + lVar16);
      *plVar3 = lVar15;
      lVar15 = *(longlong *)(param_3 + 8 + lVar16);
      if ((bVar14 & 1) != 0) {
        if (lVar15 == 0) {
          lVar15 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar15 = *(longlong *)(param_3 + 8 + lVar16);
          bVar14 = DAT_14c950c29;
        }
      }
      plVar3[1] = lVar15;
      uVar5 = *(undefined4 *)(param_3 + 0x10 + lVar16);
      *(undefined4 *)((longlong)plVar3 + 0x13) = *(undefined4 *)(param_3 + 0x13 + lVar16);
      *(undefined4 *)(plVar3 + 2) = uVar5;
      lVar15 = *(longlong *)(param_3 + 0x18 + lVar16);
      if ((bVar14 & 1) != 0) {
        if (lVar15 == 0) {
          lVar15 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar15 = *(longlong *)(param_3 + 0x18 + lVar16);
        }
      }
      plVar3[3] = lVar15;
      puVar4 = (undefined4 *)(param_3 + 0x20 + lVar16);
      uVar5 = puVar4[1];
      uVar8 = puVar4[2];
      uVar9 = puVar4[3];
      *(undefined4 *)(plVar3 + 4) = *puVar4;
      *(undefined4 *)((longlong)plVar3 + 0x24) = uVar5;
      *(undefined4 *)(plVar3 + 5) = uVar8;
      *(undefined4 *)((longlong)plVar3 + 0x2c) = uVar9;
      lVar15 = *(longlong *)(param_3 + 0x30 + lVar16);
      lVar6 = *(longlong *)(param_3 + 0x38 + lVar16);
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      plVar7 = (longlong *)plVar3[7];
      plVar3[6] = lVar15;
      plVar3[7] = lVar6;
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
      puVar4 = (undefined4 *)(param_3 + 0x40 + lVar16);
      uVar5 = *puVar4;
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar4 = (undefined4 *)(param_3 + 0x4c + lVar16);
      uVar11 = puVar4[1];
      uVar12 = puVar4[2];
      uVar13 = puVar4[3];
      *(undefined4 *)((longlong)plVar3 + 0x4c) = *puVar4;
      *(undefined4 *)(plVar3 + 10) = uVar11;
      *(undefined4 *)((longlong)plVar3 + 0x54) = uVar12;
      *(undefined4 *)(plVar3 + 0xb) = uVar13;
      *(undefined4 *)(plVar3 + 8) = uVar5;
      *(undefined4 *)((longlong)plVar3 + 0x44) = uVar8;
      *(undefined4 *)(plVar3 + 9) = uVar9;
      *(undefined4 *)((longlong)plVar3 + 0x4c) = uVar10;
      lVar16 = lVar16 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142866c86 FUN_142866c86 body=457 status=ok
// SIG undefined FUN_142866c86(void)

void FUN_142866c86(int param_1,uint param_2,longlong param_3,longlong *param_4)

{
  double dVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  double dVar5;
  ushort uVar6;
  ushort *puVar7;
  int iVar8;
  ushort *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  iVar8 = (int)param_4[1] + param_2;
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  if (*(int *)((longlong)param_4 + 0xc) < iVar8) {
    FUN_14171e2ac(param_4);
  }
  if (0 < (int)param_2) {
    dVar5 = (double)param_1;
    uVar11 = (ulonglong)param_2;
    puVar9 = (ushort *)(param_3 + 2);
    lVar10 = 0;
    do {
      dVar13 = (double)(int)(short)puVar9[-1];
      if ((char)param_4[6] == '\0') {
        param_4[4] = (longlong)dVar13;
        param_4[5] = (longlong)dVar5;
        param_4[2] = param_4[4];
        param_4[3] = param_4[5];
        *(undefined1 *)(param_4 + 6) = 1;
        puVar7 = (ushort *)(param_3 + lVar10 * 6 + 2);
        iVar8 = (int)(short)puVar9[-1] + (uint)*puVar9;
        dVar14 = (double)param_4[2];
        dVar1 = (double)param_4[3];
        dVar15 = dVar5;
      }
      else {
        dVar14 = (double)param_4[2];
        if (dVar13 <= (double)param_4[2]) {
          dVar14 = dVar13;
        }
        param_4[2] = (longlong)dVar14;
        dVar1 = (double)param_4[3];
        if (dVar5 <= (double)param_4[3]) {
          dVar1 = dVar5;
        }
        param_4[3] = (longlong)dVar1;
        dVar15 = (double)param_4[4];
        if ((double)param_4[4] <= dVar13) {
          dVar15 = dVar13;
        }
        dVar13 = dVar15;
        param_4[4] = (longlong)dVar13;
        dVar15 = (double)param_4[5];
        if ((double)param_4[5] <= dVar5) {
          dVar15 = dVar5;
        }
        param_4[5] = (longlong)dVar15;
        iVar8 = (uint)*puVar9 + (int)(short)puVar9[-1];
        puVar7 = puVar9;
      }
      dVar16 = (double)(iVar8 + -1);
      if (dVar16 <= dVar14) {
        dVar14 = dVar16;
      }
      param_4[2] = (longlong)dVar14;
      if (dVar5 <= dVar1) {
        dVar1 = dVar5;
      }
      param_4[3] = (longlong)dVar1;
      if (dVar13 <= dVar16) {
        dVar13 = dVar16;
      }
      param_4[4] = (longlong)dVar13;
      if (dVar15 <= dVar5) {
        dVar15 = dVar5;
      }
      param_4[5] = (longlong)dVar15;
      uVar6 = puVar9[1];
      uVar2 = *puVar7;
      uVar3 = puVar9[-1];
      iVar8 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar8 + 1U) {
        FUN_14694abb2(param_4,iVar8);
      }
      lVar4 = *param_4;
      lVar12 = (longlong)iVar8 * 0x10;
      *(int *)(lVar4 + lVar12) = (int)(short)uVar3;
      *(int *)(lVar4 + 4 + lVar12) = param_1;
      *(uint *)(lVar4 + 8 + lVar12) = (uint)uVar2;
      *(char *)(lVar4 + 0xc + lVar12) = (char)uVar6;
      lVar10 = lVar10 + 1;
      puVar9 = puVar9 + 3;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}



// FUNCTION 142866e50 FUN_142866e50 body=256 status=ok
// SIG undefined FUN_142866e50(void)

byte FUN_142866e50(float *param_1,float *param_2,uint param_3)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_38 [36];
  float local_14 [3];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  fVar3 = (param_1[param_3] + -0.5) / (param_1[param_3] - param_2[param_3]);
  bVar1 = 0;
  if ((0.0 < fVar3) && (fVar3 < 1.0)) {
    fVar2 = 1.0 - fVar3;
    local_14[0] = *param_1 * fVar2 + *param_2 * fVar3;
    local_14[1] = param_1[1] * fVar2 + param_2[1] * fVar3;
    local_14[2] = param_1[2] * fVar2 + param_2[2] * fVar3;
    fVar3 = local_14[1];
    if (local_14[1] <= local_14[0]) {
      fVar3 = local_14[0];
    }
    fVar2 = local_14[2];
    if (fVar3 <= local_14[2]) {
      fVar2 = fVar3;
    }
    fVar3 = local_14[1];
    if (local_14[0] <= local_14[1]) {
      fVar3 = local_14[0];
    }
    if (fVar2 <= fVar3) {
      fVar2 = fVar3;
    }
    bVar1 = -(fVar2 == local_14[param_3]) & 1;
  }
  if ((DAT_14c707940 ^ (ulonglong)auStack_38 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142866f52 FUN_142866f52 body=511 status=ok
// SIG undefined FUN_142866f52(void)

void FUN_142866f52(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xe8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 5) {
    *(undefined4 *)((longlong)param_1 + 0xec) = 4;
LAB_142866f7b:
    if (*(void **)((longlong)param_1 + 0xe0) == (void *)0x0) {
      return;
    }
    memmove(param_1,*(void **)((longlong)param_1 + 0xe0),(longlong)param_2 * 0x38);
    param_2 = 0;
    uVar6 = 0;
  }
  else {
    lVar5 = (longlong)(int)uVar3;
    if (4 < *(uint *)((longlong)param_1 + 0xec)) {
      lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
    }
    uVar6 = lVar5 * 0x38;
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
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_142867027;
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
LAB_142867027:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar6 >> 3;
    uVar6 = (uVar6 >> 3) / 7;
    uVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
    if ((int)uVar8 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0xec) = 0x7fffffff;
      uVar6 = 0x7fffffff;
    }
    else {
      *(uint *)((longlong)param_1 + 0xec) = uVar8;
      if (uVar8 < 5) goto LAB_142866f7b;
    }
    if (*(longlong *)((longlong)param_1 + 0xe0) == 0) {
      FUN_1446efa72((longlong)param_1 + 0xe0,0,uVar6,0x38);
      memmove(*(void **)((longlong)param_1 + 0xe0),param_1,(longlong)param_2 * 0x38);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0xe0,param_2,uVar6,0x38);
  return;
}



// FUNCTION 142867152 FUN_142867152 body=363 status=ok
// SIG undefined FUN_142867152(void)

void FUN_142867152(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0xc;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1428671e8;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1428671e8:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 14286735a FUN_14286735a body=56 status=ok
// SIG undefined FUN_14286735a(void)

void FUN_14286735a(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14286739e FUN_14286739e body=70 status=ok
// SIG undefined FUN_14286739e(void)

ulonglong FUN_14286739e(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_146935a38(*param_1,param_1[1],*(undefined4 *)param_1[2],param_2,*param_3,
                        *(undefined4 *)(param_1 + 3),*(undefined4 *)(param_1 + 4));
  if ((char)uVar1 == '\0') {
    *(undefined8 *)param_1[5] = param_2;
  }
  return uVar1 ^ 1;
}



// FUNCTION 1428673e4 FUN_1428673e4 body=110 status=ok
// SIG undefined FUN_1428673e4(void)

undefined8 FUN_1428673e4(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  
  plVar2 = (longlong *)*param_1;
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_14694d62a(plVar2,iVar1);
  }
  FUN_14694d546((longlong)iVar1 * 0xa8 + *plVar2,param_2);
  iVar1 = *(int *)param_1[1];
  iVar3 = *(int *)(param_2 + 0x14);
  if (iVar1 < *(int *)(param_2 + 0x14)) {
    iVar3 = iVar1;
  }
  *(int *)param_1[1] = iVar3;
  uVar4 = *(uint *)(param_1[1] + 4);
  if ((int)uVar4 < (int)(uint)*(byte *)(param_2 + 0x21)) {
    uVar4 = (uint)*(byte *)(param_2 + 0x21);
  }
  *(uint *)(param_1[1] + 4) = uVar4;
  return 1;
}



// FUNCTION 142867452 FUN_142867452 body=399 status=ok
// SIG undefined FUN_142867452(void)

int FUN_142867452(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      lVar7 = *param_1;
      do {
        lVar11 = (longlong)iVar8 * 0x40;
        plVar6 = *(longlong **)(lVar7 + 8 + lVar11);
        if (plVar6 == (longlong *)0x0) {
LAB_142867581:
          plVar6 = (longlong *)0x0;
        }
        else {
          iVar5 = (int)plVar6[1];
          do {
            if (iVar5 == 0) goto LAB_142867581;
            LOCK();
            iVar4 = (int)plVar6[1];
            bVar12 = iVar5 == iVar4;
            if (bVar12) {
              *(int *)(plVar6 + 1) = iVar5 + 1;
              iVar4 = iVar5;
            }
            iVar5 = iVar4;
            UNLOCK();
          } while (!bVar12);
        }
        plVar10 = (longlong *)(lVar7 + lVar11);
        lVar7 = *plVar10;
        plVar3 = (longlong *)param_3[1];
        if (plVar3 == (longlong *)0x0) {
LAB_142867589:
          lVar9 = 0;
        }
        else {
          iVar5 = (int)plVar3[1];
          do {
            if (iVar5 == 0) goto LAB_142867589;
            LOCK();
            iVar4 = (int)plVar3[1];
            bVar12 = iVar5 == iVar4;
            if (bVar12) {
              *(int *)(plVar3 + 1) = iVar5 + 1;
              iVar4 = iVar5;
            }
            iVar5 = iVar4;
            UNLOCK();
          } while (!bVar12);
          lVar9 = *param_3;
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
        if (plVar6 == (longlong *)0x0) {
          lVar7 = 0;
        }
        else {
          LOCK();
          plVar3 = plVar6 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
        if (((((lVar7 == lVar9) && ((int)plVar10[2] == (int)param_3[2])) &&
             (*(int *)((longlong)plVar10 + 0x14) == *(int *)((longlong)param_3 + 0x14))) &&
            (((char)plVar10[3] == (char)param_3[3] &&
             (*(char *)((longlong)plVar10 + 0x19) == *(char *)((longlong)param_3 + 0x19))))) &&
           (*(int *)((longlong)plVar10 + 0x1c) == *(int *)((longlong)param_3 + 0x1c))) {
          if ((*(float *)((longlong)plVar10 + 0x24) == *(float *)((longlong)param_3 + 0x24)) &&
             (!NAN(*(float *)((longlong)plVar10 + 0x24)) &&
              !NAN(*(float *)((longlong)param_3 + 0x24)))) {
            return iVar8;
          }
        }
        lVar7 = *param_1;
        iVar8 = *(int *)(lVar7 + 0x38 + lVar11);
      } while (iVar8 != -1);
    }
  }
  return -1;
}



// FUNCTION 1428675e2 FUN_1428675e2 body=954 status=ok
// SIG undefined FUN_1428675e2(void)

void FUN_1428675e2(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  uint local_f0;
  undefined2 local_e8;
  undefined2 local_e6;
  undefined2 local_e4;
  undefined2 local_e2;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint local_b0;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar14 = *param_3;
  *param_3 = 0;
  lVar9 = param_3[1];
  uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  local_98 = *param_2;
  plVar7 = (longlong *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  uVar4 = *(undefined4 *)(param_2 + 2);
  uVar13 = *(uint *)((longlong)param_2 + 0x14);
  uVar5 = *(uint *)(param_2 + 3);
  uVar6 = *(uint *)((longlong)param_2 + 0x1c);
  local_f8 = *(undefined4 *)(param_2 + 4);
  lVar8 = *param_1;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
  }
  local_f0 = uVar5;
  local_90 = plVar7;
  FUN_14693582c(&local_88,&local_98,uVar4,(1 < uVar13) * '\x02');
  local_d0 = local_88;
  local_c8 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_80 + 0xc) = *(int *)((longlong)local_80 + 0xc) + 1;
    UNLOCK();
  }
  local_b0 = local_68;
  local_c0 = local_78;
  uStack_bc = uStack_74;
  uStack_b8 = uStack_70;
  uStack_b4 = uStack_6c;
  uVar13 = local_68 >> 0xd ^ -local_68;
  uVar15 = uVar13 << 8 ^ (-0x61c88647 - local_68) - uVar13;
  uVar16 = uVar15 >> 0xd ^ (local_68 - uVar13) - uVar15;
  uVar13 = uVar16 >> 0xc ^ (uVar13 - uVar15) - uVar16;
  uVar15 = uVar13 << 0x10 ^ (uVar15 - uVar16) - uVar13;
  uVar16 = uVar15 >> 5 ^ (uVar16 - uVar13) - uVar15;
  uVar17 = uVar16 >> 3 ^ (uVar13 - uVar15) - uVar16;
  uVar13 = uVar17 << 10 ^ (uVar15 - uVar16) - uVar17;
  uVar15 = uVar5 >> 0xd ^ (uVar13 >> 0xf ^ uVar16 - (uVar17 + uVar13)) - uVar5;
  uVar13 = uVar15 << 8 ^ (-0x61c88647 - uVar15) - uVar5;
  uVar17 = uVar13 >> 0xd ^ (uVar5 - uVar15) - uVar13;
  uVar15 = uVar17 >> 0xc ^ (uVar15 - uVar13) - uVar17;
  uVar16 = uVar15 << 0x10 ^ (uVar13 - uVar17) - uVar15;
  uVar13 = uVar16 >> 5 ^ (uVar17 - uVar15) - uVar16;
  uVar17 = uVar13 >> 3 ^ (uVar15 - uVar16) - uVar13;
  uVar15 = uVar17 << 10 ^ (uVar16 - uVar13) - uVar17;
  uVar15 = uVar6 >> 0xd ^ (uVar15 >> 0xf ^ uVar13 - (uVar17 + uVar15)) - uVar6;
  uVar16 = uVar15 << 8 ^ (-0x61c88647 - uVar15) - uVar6;
  uVar13 = uVar16 >> 0xd ^ (uVar6 - uVar15) - uVar16;
  uVar15 = uVar13 >> 0xc ^ (uVar15 - uVar16) - uVar13;
  uVar16 = uVar15 << 0x10 ^ (uVar16 - uVar13) - uVar15;
  uVar17 = uVar16 >> 5 ^ (uVar13 - uVar15) - uVar16;
  uVar13 = uVar17 >> 3 ^ (uVar15 - uVar16) - uVar17;
  uVar15 = uVar13 << 10 ^ (uVar16 - uVar17) - uVar13;
  local_a0 = uVar15 >> 0xf ^ uVar17 - (uVar13 + uVar15);
  plVar2 = (longlong *)(lVar8 + 0x150);
  local_a8 = uVar5;
  local_a4 = uVar6;
  iVar10 = FUN_14694e32a(plVar2);
  if ((iVar10 != -1) &&
     (lVar11 = (longlong)iVar10 * 0x50 + *plVar2, plVar12 = (longlong *)(lVar11 + 0x38),
     plVar12 != (longlong *)0x0 && lVar11 != 0)) {
    lVar11 = *plVar12;
    if (*(char *)(lVar11 + 0x25) == '\x01') {
      local_e4 = *(undefined2 *)(lVar11 + 4);
      local_e2 = *(undefined2 *)(lVar11 + 6);
      local_e8 = *(undefined2 *)(lVar11 + 8);
      local_e6 = *(undefined2 *)(lVar11 + 10);
      local_e0 = lVar14;
      local_d8 = (int)lVar9;
      local_d4 = uVar3;
      FUN_14693812a(*(undefined8 *)
                     (*(longlong *)(lVar8 + 0x1e0) + (ulonglong)*(byte *)(lVar11 + 0x24) * 0x10),
                    &local_e8);
      if (local_e0 != 0) {
        FUN_1400020a8();
      }
      lVar14 = 0;
    }
    FUN_14694e6ba(plVar2,&local_d0);
  }
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_c8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_c8 + 0x10))();
    }
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_80 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  if (lVar14 != 0) {
    FUN_1400020a8(lVar14);
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14286799e FUN_14286799e body=85 status=ok
// SIG undefined FUN_14286799e(void)

void FUN_14286799e(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  
  lVar1 = param_1[4];
  puVar4 = param_1;
  if (lVar1 != 0) {
    uVar2 = FUN_1406d9ab2();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if (*(int *)(puVar4 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*puVar4;
  }
  FUN_14158b496(param_1 + 5,puVar5,0);
  return;
}



// FUNCTION 1428679f4 FUN_1428679f4 body=55 status=ok
// SIG undefined FUN_1428679f4(void)

void FUN_1428679f4(void)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = DAT_14c968098;
  if (DAT_14c968098 != 0) {
    cVar2 = FUN_140d2ceff();
    if (cVar2 != '\0') {
      FUN_140898514(lVar1 + 0xd8,0);
    }
    DAT_14c979c6c = DAT_14c979c6c + 1;
  }
  return;
}



// FUNCTION 142867a2b FUN_142867a2b body=283 status=ok
// SIG undefined FUN_142867a2b(void)

bool FUN_142867a2b(undefined8 param_1,undefined4 param_2,undefined4 param_3,float *param_4,
                  float *param_5,float param_6,float param_7)

{
  uint uVar1;
  bool bVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  dVar3 = (double)param_6 / (double)(param_6 - param_7);
  bVar2 = false;
  if ((0.01 < dVar3) && (dVar3 < 0.99)) {
    dVar5 = 1.0 - dVar3;
    fVar6 = (float)((double)param_4[2] * dVar5 + (double)param_5[2] * dVar3);
    fVar7 = (float)((double)param_4[1] * dVar5 + (double)param_5[1] * dVar3);
    fVar4 = (float)((double)*param_4 * dVar5 + (double)*param_5 * dVar3);
    fVar8 = fVar7;
    if (fVar7 <= fVar4) {
      fVar8 = fVar4;
    }
    if (fVar8 <= fVar6) {
      fVar6 = fVar8;
    }
    if (fVar4 <= fVar7) {
      fVar7 = fVar4;
    }
    if (fVar6 <= fVar7) {
      fVar6 = fVar7;
    }
    uVar1 = FUN_146951256(0x3ff0000000000000,0,0x3ff0000000000000,dVar3,param_2,param_3,fVar6);
    bVar2 = 1 < uVar1;
  }
  return bVar2;
}



// FUNCTION 142867b46 FUN_142867b46 body=948 status=ok
// SIG undefined FUN_142867b46(void)

ulonglong FUN_142867b46(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,float param_7,float param_8,
                       float param_9,double param_10,double param_11)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  ulonglong local_120;
  uint local_114;
  undefined4 local_110 [2];
  double local_108 [5];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar2 = FUN_1469389a0(local_108 + 2,(double)((param_9 - param_8) + param_7));
  if ((int)uVar2 < 1) {
    uVar5 = 0;
  }
  else {
    local_114 = -(uint)(param_10 < 1.0 && 0.0 < param_10);
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    uVar6 = 1;
    do {
      dVar1 = local_108[uVar6 + 1];
      if ((0.01 < dVar1) && (dVar1 < 0.99)) {
        uVar8 = FUN_142867efb(param_4,param_5,param_6,dVar1);
        local_138 = param_2;
        local_130 = param_3;
        local_128 = uVar8;
        uVar3 = FUN_146951256(param_1,0,0,dVar1);
        if ((local_114 & 1) != 0) {
          local_108[0] = 0.0;
          local_108[1] = 1.0;
          local_120 = (ulonglong)(dVar1 < param_10);
          local_108[local_120] = param_10;
          local_110[0] = param_2;
          local_110[1] = param_3;
          uVar9 = FUN_142867efb(param_4,param_5,param_6,param_10);
          local_110[local_120] = uVar9;
          local_130 = local_110[1];
          local_138 = local_110[0];
          local_128 = uVar8;
          uVar4 = FUN_146951256(param_1,local_108[0],SUB84(local_108[1],0),dVar1);
          uVar3 = uVar3 | uVar4;
        }
        if (0.0 < param_11 && param_11 < 1.0) {
          local_108[0] = 0.0;
          local_108[1] = 1.0;
          local_120 = (ulonglong)(dVar1 < param_11);
          local_108[local_120] = param_11;
          local_110[0] = param_2;
          local_110[1] = param_3;
          uVar9 = FUN_142867efb(param_4,param_5,param_6,param_11);
          local_110[local_120] = uVar9;
          local_130 = local_110[1];
          local_138 = local_110[0];
          local_128 = uVar8;
          uVar4 = FUN_146951256(param_1,local_108[0],SUB84(local_108[1],0),dVar1);
          uVar3 = uVar3 | uVar4;
        }
        if ((uVar3 & 2) != 0) break;
      }
      uVar5 = CONCAT71((int7)(uVar5 >> 8),uVar6 < uVar2);
      bVar7 = uVar6 != uVar2;
      uVar6 = uVar6 + 1;
    } while (bVar7);
  }
  if ((local_e0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffff01;
}



// FUNCTION 142867efb FUN_142867efb body=133 status=ok
// SIG undefined FUN_142867efb(void)

undefined8 FUN_142867efb(float *param_1,float *param_2,float *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = ((double)param_3[2] * param_4 + (double)param_2[2]) * param_4 + (double)param_1[2];
  dVar2 = ((double)param_3[1] * param_4 + (double)param_2[1]) * param_4 + (double)param_1[1];
  dVar3 = ((double)*param_3 * param_4 + (double)*param_2) * param_4 + (double)*param_1;
  dVar4 = dVar2;
  if (dVar2 <= dVar3) {
    dVar4 = dVar3;
  }
  if (dVar4 <= dVar1) {
    dVar1 = dVar4;
  }
  if (dVar3 <= dVar2) {
    dVar2 = dVar3;
  }
  if (dVar1 <= dVar2) {
    dVar1 = dVar2;
  }
  return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
}



// FUNCTION 142867f80 FUN_142867f80 body=316 status=ok
// SIG undefined FUN_142867f80(void)

undefined8
FUN_142867f80(undefined8 param_1,undefined4 param_2,undefined4 param_3,float *param_4,float *param_5
             ,float param_6,float param_7)

{
  double dVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  dVar1 = (double)param_6 / (double)(param_6 - param_7);
  if ((0.01 < dVar1) && (dVar1 < 0.99)) {
    dVar5 = 1.0 - dVar1;
    fVar6 = (float)((double)param_4[2] * dVar5 + (double)param_5[2] * dVar1);
    fVar7 = (float)((double)param_4[1] * dVar5 + (double)param_5[1] * dVar1);
    fVar4 = (float)((double)*param_4 * dVar5 + (double)*param_5 * dVar1);
    fVar8 = fVar7;
    if (fVar7 <= fVar4) {
      fVar8 = fVar4;
    }
    if (fVar8 <= fVar6) {
      fVar6 = fVar8;
    }
    if (fVar4 <= fVar7) {
      fVar7 = fVar4;
    }
    if (fVar6 <= fVar7) {
      fVar6 = fVar7;
    }
    uVar2 = FUN_146951256(0x3ff0000000000000,0,0x3ff0000000000000,dVar1,param_2,param_3,fVar6);
    uVar3 = FUN_146951596(param_1,dVar1,uVar2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1428680bc FUN_1428680bc body=434 status=ok
// SIG undefined FUN_1428680bc(void)

void FUN_1428680bc(longlong param_1,longlong *param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar15 [16];
  
  dVar13 = *param_3 + -0.5;
  *param_3 = dVar13;
  dVar12 = param_3[1] + -0.5;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar12;
  auVar14 = roundsd(in_XMM2,auVar14,9);
  iVar4 = (int)auVar14._0_8_;
  param_3[1] = dVar12;
  iVar3 = *(int *)((longlong)param_2 + 0xc) + -1;
  lVar2 = 0;
  iVar10 = 0;
  if (0 < iVar4) {
    iVar10 = iVar3;
  }
  iVar5 = iVar3;
  if (iVar4 < 0) {
    iVar5 = 0;
  }
  iVar6 = iVar4;
  if (*(int *)((longlong)param_2 + 0xc) <= iVar4) {
    iVar6 = iVar10;
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar13;
  auVar15 = roundsd(in_XMM3,auVar15,9);
  iVar9 = (int)auVar15._0_8_;
  if (iVar4 < 0) {
    iVar6 = iVar10;
  }
  iVar10 = (int)param_2[1] + -1;
  iVar8 = 0;
  if (0 < iVar9) {
    iVar8 = iVar10;
  }
  iVar11 = iVar10;
  if (iVar9 < 0) {
    iVar11 = 0;
  }
  iVar7 = iVar9;
  if ((int)param_2[1] <= iVar9) {
    iVar7 = iVar8;
  }
  if (iVar9 < 0) {
    iVar7 = iVar8;
  }
  iVar8 = iVar9 + 1;
  if (iVar10 <= iVar9) {
    iVar8 = iVar11;
  }
  dVar13 = dVar13 - (double)(int)auVar15._0_8_;
  if (iVar9 < -1) {
    iVar8 = iVar11;
  }
  iVar10 = iVar4 + 1;
  if (iVar3 <= iVar4) {
    iVar10 = iVar5;
  }
  dVar12 = dVar12 - (double)(int)auVar14._0_8_;
  if (iVar4 < -1) {
    iVar10 = iVar5;
  }
  do {
    lVar1 = *param_2;
    iVar3 = (int)param_2[1] * iVar10;
    iVar4 = (int)param_2[1] * iVar6;
    *(float *)(param_1 + lVar2 * 4) =
         (float)((double)(float)((double)*(float *)(lVar1 + (longlong)((iVar3 + iVar7) * 4) * 4 +
                                                   lVar2 * 4) * (1.0 - dVar13) +
                                (double)*(float *)(lVar1 + (longlong)((iVar3 + iVar8) * 4) * 4 +
                                                  lVar2 * 4) * dVar13) * dVar12 +
                (double)(float)((double)*(float *)(lVar1 + (longlong)((iVar4 + iVar7) * 4) * 4 +
                                                  lVar2 * 4) * (1.0 - dVar13) +
                               (double)*(float *)(lVar1 + (longlong)((iVar4 + iVar8) * 4) * 4 +
                                                 lVar2 * 4) * dVar13) * (1.0 - dVar12));
    lVar2 = lVar2 + 1;
  } while (lVar2 != 4);
  return;
}



// FUNCTION 14286826e FUN_14286826e body=945 status=ok
// SIG undefined FUN_14286826e(void)

ulonglong FUN_14286826e(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,float param_7,float param_8,
                       float param_9,double param_10,double param_11)

{
  double dVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  uint local_118;
  uint local_114;
  undefined4 local_110 [2];
  double local_108 [5];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar3 = FUN_1469389a0(local_108 + 2,(double)((param_9 - param_8) + param_7));
  if ((int)uVar3 < 1) {
    uVar6 = 0;
  }
  else {
    local_114 = -(uint)(param_10 < 1.0 && 0.0 < param_10);
    local_118 = -(uint)(0.0 < param_11 && param_11 < 1.0);
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    uVar7 = 1;
    do {
      dVar1 = local_108[uVar7 + 1];
      if ((0.01 < dVar1) && (dVar1 < 0.99)) {
        uVar9 = FUN_142867efb(param_4,param_5,param_6,dVar1);
        local_138 = param_2;
        local_130 = param_3;
        local_128 = uVar9;
        uVar4 = FUN_146951256(param_1,0,0x3ff0000000000000,dVar1);
        if ((local_114 & 1) != 0) {
          local_108[0] = 0.0;
          local_108[1] = 1.0;
          local_108[dVar1 < param_10] = param_10;
          local_110[0] = param_2;
          local_110[1] = param_3;
          uVar10 = FUN_142867efb(param_4,param_5,param_6,param_10);
          local_110[dVar1 < param_10] = uVar10;
          local_130 = local_110[1];
          local_138 = local_110[0];
          local_128 = uVar9;
          uVar5 = FUN_146951256(param_1,local_108[0],local_108[1],dVar1);
          uVar4 = uVar4 | uVar5;
        }
        if ((local_118 & 1) != 0) {
          local_108[0] = 0.0;
          local_108[1] = 1.0;
          local_108[dVar1 < param_11] = param_11;
          local_110[0] = param_2;
          local_110[1] = param_3;
          uVar10 = FUN_142867efb(param_4,param_5,param_6,param_11);
          local_110[dVar1 < param_11] = uVar10;
          local_130 = local_110[1];
          local_138 = local_110[0];
          local_128 = uVar9;
          uVar5 = FUN_146951256(param_1,local_108[0],local_108[1],dVar1);
          uVar4 = uVar4 | uVar5;
        }
        cVar2 = FUN_146951596(param_1,dVar1,uVar4);
        if (cVar2 != '\0') break;
      }
      uVar6 = CONCAT71((int7)(uVar6 >> 8),uVar7 < uVar3);
      bVar8 = uVar7 != uVar3;
      uVar7 = uVar7 + 1;
    } while (bVar8);
  }
  if ((local_e0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffff01;
}



// FUNCTION 142868620 FUN_142868620 body=316 status=ok
// SIG undefined FUN_142868620(void)

undefined8
FUN_142868620(undefined8 param_1,undefined4 param_2,undefined4 param_3,float *param_4,float *param_5
             ,float param_6,float param_7)

{
  double dVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  dVar1 = (double)param_6 / (double)(param_6 - param_7);
  if ((0.01 < dVar1) && (dVar1 < 0.99)) {
    dVar5 = 1.0 - dVar1;
    fVar6 = (float)((double)param_4[2] * dVar5 + (double)param_5[2] * dVar1);
    fVar7 = (float)((double)param_4[1] * dVar5 + (double)param_5[1] * dVar1);
    fVar4 = (float)((double)*param_4 * dVar5 + (double)*param_5 * dVar1);
    fVar8 = fVar7;
    if (fVar7 <= fVar4) {
      fVar8 = fVar4;
    }
    if (fVar8 <= fVar6) {
      fVar6 = fVar8;
    }
    if (fVar4 <= fVar7) {
      fVar7 = fVar4;
    }
    if (fVar6 <= fVar7) {
      fVar6 = fVar7;
    }
    uVar2 = FUN_146951256(0x3ff0000000000000,0,0x3ff0000000000000,dVar1,param_2,param_3,fVar6);
    uVar3 = FUN_14695192c(param_1,dVar1,uVar2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14286875c FUN_14286875c body=945 status=ok
// SIG undefined FUN_14286875c(void)

ulonglong FUN_14286875c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,float param_7,float param_8,
                       float param_9,double param_10,double param_11)

{
  double dVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  uint local_118;
  uint local_114;
  undefined4 local_110 [2];
  double local_108 [5];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar3 = FUN_1469389a0(local_108 + 2,(double)((param_9 - param_8) + param_7));
  if ((int)uVar3 < 1) {
    uVar6 = 0;
  }
  else {
    local_114 = -(uint)(param_10 < 1.0 && 0.0 < param_10);
    local_118 = -(uint)(0.0 < param_11 && param_11 < 1.0);
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    uVar7 = 1;
    do {
      dVar1 = local_108[uVar7 + 1];
      if ((0.01 < dVar1) && (dVar1 < 0.99)) {
        uVar9 = FUN_142867efb(param_4,param_5,param_6,dVar1);
        local_138 = param_2;
        local_130 = param_3;
        local_128 = uVar9;
        uVar4 = FUN_146951256(param_1,0,0x3ff0000000000000,dVar1);
        if ((local_114 & 1) != 0) {
          local_108[0] = 0.0;
          local_108[1] = 1.0;
          local_108[dVar1 < param_10] = param_10;
          local_110[0] = param_2;
          local_110[1] = param_3;
          uVar10 = FUN_142867efb(param_4,param_5,param_6,param_10);
          local_110[dVar1 < param_10] = uVar10;
          local_130 = local_110[1];
          local_138 = local_110[0];
          local_128 = uVar9;
          uVar5 = FUN_146951256(param_1,local_108[0],local_108[1],dVar1);
          uVar4 = uVar4 | uVar5;
        }
        if ((local_118 & 1) != 0) {
          local_108[0] = 0.0;
          local_108[1] = 1.0;
          local_108[dVar1 < param_11] = param_11;
          local_110[0] = param_2;
          local_110[1] = param_3;
          uVar10 = FUN_142867efb(param_4,param_5,param_6,param_11);
          local_110[dVar1 < param_11] = uVar10;
          local_130 = local_110[1];
          local_138 = local_110[0];
          local_128 = uVar9;
          uVar5 = FUN_146951256(param_1,local_108[0],local_108[1],dVar1);
          uVar4 = uVar4 | uVar5;
        }
        cVar2 = FUN_14695192c(param_1,dVar1,uVar4);
        if (cVar2 != '\0') break;
      }
      uVar6 = CONCAT71((int7)(uVar6 >> 8),uVar7 < uVar3);
      bVar8 = uVar7 != uVar3;
      uVar7 = uVar7 + 1;
    } while (bVar8);
  }
  if ((local_e0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffff01;
}



// FUNCTION 142868b0e FUN_142868b0e body=29 status=ok
// SIG undefined FUN_142868b0e(void)

undefined8 FUN_142868b0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142868b40 FUN_142868b40 body=93 status=ok
// SIG undefined FUN_142868b40(void)

void FUN_142868b40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149eda490;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142868b9e FUN_142868b9e body=93 status=ok
// SIG undefined FUN_142868b9e(void)

void FUN_142868b9e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149eda490;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142868bfc FUN_142868bfc body=126 status=ok
// SIG undefined FUN_142868bfc(void)

void FUN_142868bfc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149eda490;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142868c6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142868c84 FUN_142868c84 body=20 status=ok
// SIG undefined FUN_142868c84(void)

undefined1 FUN_142868c84(longlong param_1)

{
  FUN_141253e76(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 142868c98 FUN_142868c98 body=87 status=ok
// SIG undefined FUN_142868c98(void)

void FUN_142868c98(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar4 != 0) {
        FUN_1400020a8();
      }
      plVar3 = (longlong *)plVar4[-2];
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
      plVar4 = plVar4 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 142868d00 FUN_142868d00 body=1399 status=ok
// SIG undefined FUN_142868d00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142868d00(void)

{
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14286206c(&DAT_14c9680b0);
  atexit(FUN_14286213d);
  ppuStack_60 = &PTR_FUN_149ed1360;
  local_58 = 3;
  local_68 = 6;
  FUN_14282b410(L"/Script/SlateCore",0,0,&PTR_FUN_149ed13c0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/SlateCore",&PTR_FUN_149ed1800,1,0);
  FUN_14098d3d2(FUN_142862728,L"/Script/SlateCore",L"ETextShapingMethod",&DAT_14c9682c8);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c9682e0,L"Slate.MaxFontAtlasPagesBeforeFlush",&DAT_14c75ed2c,
                L"The number of font atlas textures created and used before we flush the font cache if a texture atlas is full"
               );
  atexit(FUN_14286275f);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c9682f0,L"Slate.MaxFontNonAtlasTexturesBeforeFlush",&DAT_14c75ed30,
                L"The number of large glyph font textures initially.");
  atexit(FUN_1428627a4);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c968300,L"Slate.GrowFontAtlasFrameWindow",&DAT_14c75ed34,
                L"The number of frames within the font atlas will resize rather than flush.");
  atexit(FUN_1428627e9);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c968310,L"Slate.GrowFontNonAtlasFrameWindow",&DAT_14c75ed38,
                L"The number of frames within the large font glyph pool will resize rather than flush."
               );
  atexit(FUN_14286282e);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c968320,L"Slate.UnloadFreeTypeDataOnFlush",&DAT_14c75ed3c,
                L"Releases the free type data when the font cache is flushed");
  atexit(FUN_142862873);
  local_48 = 0;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14c968330,L"Slate.DefaultTextShapingMethod",&local_48,
                L"0: Auto (default), 1: KerningOnly, 2: FullShaping.");
  atexit(FUN_1428628b8);
  local_48 = CONCAT31(local_48._1_3_,1);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14c968348,L"SlateSdfText.Enable",&local_48,
                L"Enables MSDF-based text rendering in Slate");
  atexit(FUN_1428628fd);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c9683a8,L"Slate.Font.AsyncLazyLoad",&DAT_14c9683b8,
                L"Causes unloaded font faces that are lazily loaded, to be loaded asynchronusly, until then the font won\'t measure correctly.  Once complete the UI will invalidate."
               );
  atexit(FUN_1428641ba);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c968478,L"Slate.EnableLegacyFontHinting",&DAT_14c968488,
                L"Enable the legacy font hinting? (0/1).");
  atexit(FUN_1428642ca);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/SlateCore",&PTR_FUN_149ed24b0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/SlateCore",&PTR_FUN_149ed2810,1,0);
  DAT_14c9684c0 = 0;
  DAT_14c9684c8 = 0;
  atexit(FUN_142864378);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/SlateCore",0,0,&PTR_FUN_149ed3280);
  _DAT_14c96b1c8 = 0;
  _DAT_14c96b1c0 = 0;
  uRam000000014c96b1c4 = 0;
  _DAT_14c96b1d0 = 0;
  uRam000000014c96b1d4 = 0;
  uRam000000014c96b1d8 = 0;
  uRam000000014c96b1dc = 0x3f800000;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c968500,L"Slate.OutlineFontRenderMethod",&DAT_14c968510,
                L"Changes the render method for outline fonts.  0 = freetype does everything and generates a bitmap for the base glyph (default).  1 = We override the freetype rasterizer.  Can help with some rendering anomalies on complicated fonts."
               );
  atexit(FUN_142864605);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c968518,L"Slate.EnableFontAntiAliasing",&DAT_14c75ed40,
                L"Enable or disable anti-aliasing for font rendering (0 = off, 1 = on). Enabled by default."
               );
  atexit(FUN_14286464a);
  local_48 = 1;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14c968528,L"SlateSdfText.GeneratorPoolSize",&local_48,
                L"Sets the maximum number of concurrent tasks when generating multi-channel distance fields for Slate text glyphs"
               );
  atexit(FUN_142865ed8);
  ppuStack_60 = &PTR_FUN_149ed7c70;
  local_58 = 1;
  local_68 = 9;
  FUN_14282b410(L"/Script/SlateCore",0,0,&PTR_FUN_149ed7c90);
  local_48 = (undefined4)DAT_14c966e98;
  uStack_44 = DAT_14c966e98._4_4_;
  uStack_40 = (undefined4)DAT_14c966ea0;
  uStack_3c = DAT_14c966ea0._4_4_;
  local_38 = DAT_14c966ea8;
  if (DAT_14c966ea8 != 0) {
    LOCK();
    *(int *)(DAT_14c966ea8 + 8) = *(int *)(DAT_14c966ea8 + 8) + 1;
    UNLOCK();
  }
  FUN_146279f36(&DAT_14c96b240,&local_48);
  atexit(FUN_14286641a);
  local_48 = (undefined4)DAT_14c966e80;
  uStack_44 = DAT_14c966e80._4_4_;
  uStack_40 = (undefined4)DAT_14c966e88;
  uStack_3c = DAT_14c966e88._4_4_;
  local_38 = DAT_14c966e90;
  if (DAT_14c966e90 != 0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 8) = *(int *)(DAT_14c966e90 + 8) + 1;
    UNLOCK();
  }
  FUN_146279f36(&DAT_14c96b1e8,&local_48);
  atexit(FUN_142866449);
  _DAT_14c96b0b8 = 0x4300000043000000;
  FUN_14098d3d2(FUN_14286658a,L"/Script/SlateCore",L"EWidgetClipping",&DAT_14c96b110);
  FUN_14098d3d2(FUN_142866807,L"/Script/SlateCore",L"EFlowDirectionPreference",&DAT_14c96b128);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c96b140,L"Slate.EnableLayoutLocalization",&DAT_14c75ed44,
                L"Controls if we enable or disable localized layout, which affects left to right or right to left detection for cultures."
               );
  atexit(FUN_14286683e);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c96b150,L"Slate.ShouldFollowCultureByDefault",&DAT_14c96b1bc,
                L"Should we initially follow the culture\'s flow direction at the window level.");
  atexit(FUN_142866883);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/SlateCore",0,0,&PTR_FUN_149ed8290);
  DAT_14c96b238 = 0x19;
  DAT_14c96b1e1 = 2;
  DAT_14c96b23b = 4;
  DAT_14c96b23a = 1;
  DAT_14c96b23c = 0x11;
  DAT_14c96b239 = 0x1f;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142869278 FUN_142869278 body=7 status=ok
// SIG undefined FUN_142869278(void)

void FUN_142869278(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x908) = param_2;
  return;
}



// FUNCTION 142869280 FUN_142869280 body=138 status=ok
// SIG undefined FUN_142869280(void)

void FUN_142869280(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined1 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[5];
  param_1[6] = param_3[4];
  param_1[7] = uVar6;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  param_1[8] = *param_4;
  param_1[9] = uVar2;
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  param_1[0xc] = uVar5;
  param_1[0xd] = uVar6;
  param_1[0xe] = param_4[6];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  uVar4 = param_5[3];
  uVar5 = param_5[4];
  uVar6 = param_5[5];
  param_1[0x11] = param_5[2];
  param_1[0x12] = uVar4;
  param_1[0x13] = uVar5;
  param_1[0x14] = uVar6;
  param_1[0xf] = uVar2;
  param_1[0x10] = uVar3;
  *(undefined1 *)(param_1 + 0x15) = param_6;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  return;
}


