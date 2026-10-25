// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149445094 FUN_149445094 body=126 status=ok
// SIG undefined FUN_149445094(void)

void FUN_149445094(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bcca890;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149445103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149445112 FUN_149445112 body=21 status=ok
// SIG undefined FUN_149445112(void)

undefined8 FUN_149445112(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149445140 FUN_149445140 body=136 status=ok
// SIG undefined FUN_149445140(void)

void FUN_149445140(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1494451c8(param_2);
  uVar2 = FUN_149445212(param_2 + 0x28);
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x2a8))
            (*(longlong **)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x50),uVar1,uVar2,
             param_3 + 0x20);
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x2b0))
            (*(longlong **)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x50),uVar1,uVar2,
             param_3 + 0x20,param_3 + 0x38);
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 1494451c8 FUN_1494451c8 body=74 status=ok
// SIG undefined FUN_1494451c8(void)

undefined8 FUN_1494451c8(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = FUN_1492dc406();
  if (((lVar2 == 0) || (lVar3 = FUN_1467194c4(), lVar3 == 0)) ||
     (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30) {
      uVar4 = uVar1;
    }
  }
  return uVar4;
}



// FUNCTION 149445212 FUN_149445212 body=74 status=ok
// SIG undefined FUN_149445212(void)

undefined8 FUN_149445212(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = FUN_1492dc4d4();
  if (((lVar2 == 0) || (lVar3 = FUN_146719588(), lVar3 == 0)) ||
     (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30) {
      uVar4 = uVar1;
    }
  }
  return uVar4;
}



// FUNCTION 14944525c FUN_14944525c body=109 status=ok
// SIG undefined FUN_14944525c(void)

void FUN_14944525c(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  FUN_1492dc406(param_2);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  FUN_1492dc4d4(param_2 + 0x28);
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x2b0))
            (*(longlong **)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x50),uVar1,uVar2,
             param_3 + 0x20,param_3 + 0x38);
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 1494452ca FUN_1494452ca body=292 status=ok
// SIG undefined FUN_1494452ca(void)

void FUN_1494452ca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  FUN_140320438(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    return;
  }
  plVar3 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14bccc410;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  FUN_144a7c084(plVar3 + 2);
  FUN_144a7c084(plVar3 + 7);
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x58) = 0x10;
    plVar4 = *(longlong **)(param_1 + 0x60);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x58) = plVar3 + 2;
    plVar4 = *(longlong **)(param_1 + 0x60);
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      goto LAB_149445387;
    }
    *(longlong **)(param_1 + 0x60) = plVar3;
    if (plVar4 == (longlong *)0x0) goto LAB_149445387;
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
  if (plVar3 == (longlong *)0x0) {
    return;
  }
LAB_149445387:
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 1494453ee FUN_1494453ee body=266 status=ok
// SIG undefined FUN_1494453ee(void)

void FUN_1494453ee(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_1448c2e86();
  iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,DAT_14cc0b540);
  if (iVar1 < 1) {
    lVar3 = 0;
  }
  else {
    plVar2 = (longlong *)FUN_1448c2e86();
    lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,DAT_14cc0b540,0);
    lVar3 = lVar3 + -8;
  }
  *(longlong *)(param_1 + 0x48) = lVar3;
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (((((lVar3 == 0) || (lVar4 = FUN_1458cc76c(), lVar4 == 0)) ||
       (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) ||
      ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30 || (lVar3 = *(longlong *)(param_1 + 0x38), lVar3 == 0)))) ||
     ((*(byte *)(lVar3 + 0xd4) & 1) != 0)) {
    lVar3 = FUN_1459f6c22();
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    *(longlong *)(param_1 + 0x38) = lVar3;
  }
  if ((*(longlong *)(param_1 + 0x40) != 0) &&
     (lVar3 == *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10))) {
    return;
  }
  plVar2 = (longlong *)FUN_1494454f8(param_2,lVar3);
  if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar2);
  }
  *(longlong **)(param_1 + 0x40) = plVar2;
                    /* WARNING: Could not recover jumptable at 0x0001494454da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x2a0))(plVar2);
  return;
}



// FUNCTION 1494454f8 FUN_1494454f8 body=175 status=ok
// SIG undefined FUN_1494454f8(void)

undefined8 FUN_1494454f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494455a8 FUN_1494455a8 body=62 status=ok
// SIG undefined FUN_1494455a8(void)

void FUN_1494455a8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_14474897c(param_1 + 0x18);
  uVar1 = FUN_14477dc2a(param_1);
  FUN_14477dadc(uVar1,param_2);
  *(float *)(param_1 + 0x50) = *(float *)(param_2 + 0x28) + *(float *)(param_1 + 0x50);
  return;
}



// FUNCTION 1494455e6 FUN_1494455e6 body=1015 status=ok
// SIG undefined FUN_1494455e6(void)

void FUN_1494455e6(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined1 local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1447139fe(param_1 + 0x18);
  if ((*(longlong *)(param_1 + 0x48) == 0) || (*(longlong *)(param_1 + 0x40) == 0))
  goto LAB_1494457fc;
  FUN_144a7c084(&local_80);
  FUN_144a7c084(&local_58);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined8 *)(param_1 + 0x68) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x178))
              (*(longlong **)(param_1 + 0x48),&local_88,*(undefined8 *)(param_1 + 0x28));
    lVar3 = local_88;
    if (local_88 != 0) {
      lVar2 = FUN_1411f0380();
      if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
          (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
           lVar2 + 0x30)) && (local_88 != 0)) {
        plVar4 = *(longlong **)(param_1 + 0x48);
        local_90 = FUN_145a92b78();
        if ((local_90 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(local_90);
        }
        cVar1 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(param_1 + 0x28),&local_90);
        plVar4 = *(longlong **)(param_1 + 0x48);
        if (cVar1 == '\0') {
          local_a0 = FUN_14599ae76();
          if ((local_a0 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(local_a0);
          }
          cVar1 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(param_1 + 0x28),&local_a0);
          if (cVar1 != '\0') {
            plVar4 = *(longlong **)(param_1 + 0x48);
            local_a8 = FUN_14599ae76();
            if ((local_a8 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(local_a8);
            }
            cVar1 = (**(code **)(*plVar4 + 0x238))
                              (plVar4,*(undefined8 *)(param_1 + 0x28),&local_a8,&local_80);
            if (cVar1 != '\0') {
              FUN_14944525c(param_1,&local_80,param_2);
              lVar3 = FUN_14599ae76();
              goto LAB_149445990;
            }
          }
        }
        else {
          local_98 = FUN_145a92b78();
          if ((local_98 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(local_98);
          }
          cVar1 = (**(code **)(*plVar4 + 0x238))
                            (plVar4,*(undefined8 *)(param_1 + 0x28),&local_98,&local_80);
          if (cVar1 != '\0') {
            FUN_149445140(param_1,&local_80,param_2);
            lVar3 = FUN_145a92b78();
LAB_149445990:
            if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar3);
            }
            *(longlong *)(param_1 + 0x68) = lVar3;
          }
        }
        plVar4 = *(longlong **)(param_1 + 0x58);
        if (plVar4 != &local_80) {
          (**(code **)(*plVar4 + 0x48))(plVar4);
          plVar4[1] = local_78;
          plVar4[2] = local_70;
          *(undefined1 *)(plVar4 + 4) = local_60;
          local_60 = 0;
          (**(code **)(local_80 + 0x48))();
          plVar4 = *(longlong **)(param_1 + 0x58);
        }
        if (plVar4 != &local_80) {
          (**(code **)(plVar4[5] + 0x48))(plVar4 + 5);
          plVar4[6] = local_50;
          plVar4[7] = local_48;
          *(undefined1 *)(plVar4 + 9) = local_38;
          local_38 = 0;
          (**(code **)(local_58 + 0x48))(&local_58);
        }
      }
    }
  }
  else if ((*(longlong *)(param_1 + 0x58) != 0) &&
          (lVar3 = *(longlong *)(param_1 + 0x68), lVar3 != 0)) {
    lVar2 = FUN_1411f0380();
    if ((lVar2 != 0) &&
       (((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) && (lVar3 = *(longlong *)(param_1 + 0x68), lVar3 != 0)))) {
      lVar2 = FUN_1411f0380();
      if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x68);
      }
      lVar2 = FUN_145a92b78();
      if (lVar3 == lVar2) {
        FUN_149445140(param_1,*(undefined8 *)(param_1 + 0x58),param_2);
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x68);
        if (lVar3 == 0) {
LAB_149445929:
          lVar3 = 0;
        }
        else {
          lVar2 = FUN_1411f0380();
          if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
              lVar2 + 0x30)) goto LAB_149445929;
          lVar3 = *(longlong *)(param_1 + 0x68);
        }
        lVar2 = FUN_14599ae76();
        if (lVar3 == lVar2) {
          FUN_14944525c(param_1,*(undefined8 *)(param_1 + 0x58),param_2);
        }
      }
    }
  }
  FUN_1448eac94(&local_58);
  FUN_1448eac94(&local_80);
LAB_1494457fc:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494459de FUN_1494459de body=38 status=ok
// SIG undefined FUN_1494459de(void)

void FUN_1494459de(longlong param_1,undefined8 param_2)

{
  FUN_1408112b8();
  FUN_1408112ba(param_1 + 0x18,param_2);
  return;
}



// FUNCTION 149445a04 FUN_149445a04 body=254 status=ok
// SIG undefined FUN_149445a04(void)

void FUN_149445a04(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined2 *local_50;
  int local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400021e4(param_1 + 0x28,&local_50);
  puVar1 = local_50;
  if (local_48 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_40,L"LiveLink - SubjectName: %s",puVar1);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_40;
  local_60 = (void *)0x0;
  local_58 = local_38;
  if ((longlong)local_38 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_38,0);
    memcpy(local_60,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_60,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149445b04 FUN_149445b04 body=118 status=ok
// SIG undefined FUN_149445b04(void)

void FUN_149445b04(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bc13528);
  if (DAT_14cc16d30 == 0) {
    uVar1 = FUN_145a25c2b();
    DAT_14cc16d30 = FUN_140002ddd(FUN_14672f3bc,uVar1,L"AnimNode_LiveLinkPose");
  }
  if ((*(byte *)(param_2 + 5) & 5) != 0) {
    FUN_14496b17c(0,param_2,param_1,DAT_14cc16d30,0,0);
  }
  return;
}



// FUNCTION 149445b7e FUN_149445b7e body=158 status=ok
// SIG undefined FUN_149445b7e(void)

void FUN_149445b7e(undefined8 param_1,longlong param_2)

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
  FUN_149445c1e(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149445c1e FUN_149445c1e body=93 status=ok
// SIG undefined FUN_149445c1e(void)

void FUN_149445c1e(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    cVar1 = FUN_144966fca(param_1[4]);
    if (cVar1 != '\0') {
      uVar2 = FUN_144966fba(param_1);
      thunk_FUN_14036294a(uVar2);
    }
    lVar3 = param_1[0x7c];
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar3;
    }
  }
  *(undefined1 *)(lVar3 + 0x8d8) = param_2;
  return;
}



// FUNCTION 149445c7c FUN_149445c7c body=185 status=ok
// SIG undefined FUN_149445c7c(void)

void FUN_149445c7c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
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
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_149445d36(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149445d36 FUN_149445d36 body=129 status=ok
// SIG undefined FUN_149445d36(void)

void FUN_149445d36(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    cVar1 = FUN_144966fca(param_1[4]);
    if (cVar1 != '\0') {
      uVar2 = FUN_144966fba(param_1);
      thunk_FUN_14036294a(uVar2);
    }
    lVar3 = param_1[0x7c];
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar3;
    }
  }
  lVar4 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *param_2;
    }
  }
  *(longlong *)(lVar3 + 0x8e0) = lVar4;
  return;
}



// FUNCTION 149445db8 FUN_149445db8 body=156 status=ok
// SIG undefined FUN_149445db8(void)

void FUN_149445db8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149445e56(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149445e56 FUN_149445e56 body=95 status=ok
// SIG undefined FUN_149445e56(void)

void FUN_149445e56(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    cVar1 = FUN_144966fca(param_1[4]);
    if (cVar1 != '\0') {
      uVar2 = FUN_144966fba(param_1);
      thunk_FUN_14036294a(uVar2);
    }
    lVar3 = param_1[0x7c];
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar3;
    }
  }
  *(undefined8 *)(lVar3 + 0x8d0) = param_2;
  return;
}



// FUNCTION 149445eb8 FUN_149445eb8 body=95 status=ok
// SIG undefined FUN_149445eb8(void)

void FUN_149445eb8(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14005d520();
  FUN_144b2002e(local_38,param_1,0);
  FUN_1494452ca(param_1 + 0x8a8,local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149445f18 FUN_149445f18 body=41 status=ok
// SIG undefined FUN_149445f18(void)

void FUN_149445f18(longlong param_1,undefined8 param_2)

{
  FUN_14477b7d6();
  FUN_1494453ee(param_1 + 0x8a8,param_2);
  return;
}



// FUNCTION 149445f46 FUN_149445f46 body=23 status=ok
// SIG undefined FUN_149445f46(void)

undefined1 FUN_149445f46(longlong param_1)

{
  FUN_1494455e6(param_1 + 0x8a8);
  return 1;
}



// FUNCTION 149445f5e FUN_149445f5e body=219 status=ok
// SIG undefined FUN_149445f5e(void)

void FUN_149445f5e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  short sVar2;
  undefined8 uVar3;
  longlong lVar4;
  short sVar5;
  
  sVar2 = (short)*(undefined4 *)(param_1 + 0x5e8);
  sVar5 = sVar2 + 1;
  *(short *)(param_1 + 0x5e8) = sVar5;
  *(undefined8 *)(param_1 + 0x5e0) = DAT_14c872be0;
  if (sVar5 == -1) {
    *(short *)(param_1 + 0x5e8) = sVar2 + 2;
  }
  FUN_14474897c(param_1 + 0x8c0,param_2);
  uVar3 = FUN_14477dc2a(param_1 + 0x8a8);
  FUN_14477dadc(uVar3,param_2);
  *(float *)(param_1 + 0x8f8) = *(float *)(param_2 + 0x28) + *(float *)(param_1 + 0x8f8);
  lVar1 = *(longlong *)(param_1 + 0x130);
  if (lVar1 != 0) {
    lVar4 = FUN_145a95f18();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      lVar4 = *(longlong *)(param_1 + 0x8e8);
      if (DAT_14c950c29 == '\x01') {
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar4 = *(longlong *)(param_1 + 0x8e8);
        }
      }
      *(longlong *)(lVar1 + 0x438) = lVar4;
    }
  }
  return;
}



// FUNCTION 14944603a FUN_14944603a body=176 status=ok
// SIG undefined FUN_14944603a(void)

undefined8 * FUN_14944603a(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14477b072(param_1,DAT_14cc16d90);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_38 = 0;
    local_40 = param_3;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_40);
    *param_2 = local_38;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494460ec FUN_1494460ec body=179 status=ok
// SIG undefined FUN_1494460ec(void)

void FUN_1494460ec(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_30,local_28);
  *param_3 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494461a0 FUN_1494461a0 body=176 status=ok
// SIG undefined FUN_1494461a0(void)

undefined8 * FUN_1494461a0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14477b072(param_1,DAT_14cc16da0);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_38 = 0;
    local_40 = param_3;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_40);
    *param_2 = local_38;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  (**(code **)(*param_1 + 0x2c0))(param_1,param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149446252 FUN_149446252 body=179 status=ok
// SIG undefined FUN_149446252(void)

void FUN_149446252(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2c0))(param_1,&local_30,local_28);
  *param_3 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149446306 FUN_149446306 body=256 status=ok
// SIG undefined FUN_149446306(void)

void FUN_149446306(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_14477b072(param_1,DAT_14cc16db0);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_68 = 0;
    local_60 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_5c = 0xffffffff00000080;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_140d188f2(&local_88,param_2);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_88);
    FUN_140d188f2(param_2,&local_88);
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_14064e7da(&local_88);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014944640e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2b8))(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149446418 FUN_149446418 body=249 status=ok
// SIG undefined FUN_149446418(void)

void FUN_149446418(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar1 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2b8))(param_1,puVar1);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149446515 FUN_149446515 body=318 status=ok
// SIG undefined FUN_149446515(void)

void FUN_149446515(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145bd9614(param_4);
  uVar4 = *(uint *)(param_2 + 0x78);
  if ((uint)((int)param_4[1] - *(int *)((longlong)param_4 + 0x34)) < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_147508cda(param_4,uVar4);
    iVar2 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if (((int)param_4[9] == 0) || ((int)param_4[9] < iVar2)) {
      *(int *)(param_4 + 9) = iVar2;
      FUN_1408cb1a2(param_4);
    }
  }
  if ((0 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) == *(int *)(param_2 + 0x78))) {
    lVar3 = 0;
    lVar5 = 0;
    do {
      fVar1 = *(float *)(*(longlong *)(param_2 + 0x70) + lVar5 * 4);
      iVar2 = _finite((double)fVar1);
      if (iVar2 != 0) {
        local_70 = *param_3 + lVar3;
        FUN_149447244(param_4,&local_64,&local_70);
        *(float *)(*param_4 + 8 + (longlong)local_64 * 0x14) = fVar1;
      }
      lVar5 = lVar5 + 1;
      lVar3 = lVar3 + 8;
    } while (lVar5 < *(int *)(param_1 + 8));
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149446656 FUN_149446656 body=745 status=ok
// SIG undefined FUN_149446656(void)

void FUN_149446656(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong **pplVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 auStack_f8 [32];
  longlong *local_d8 [13];
  undefined8 local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_68 = 0;
  uStack_60 = 0;
  iVar5 = *(int *)(param_3 + 0x18);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (iVar5 != 0) {
    FUN_149447398(&local_68);
    if ((longlong)*(int *)(param_3 + 0x18) != 0) {
      plVar12 = *(longlong **)(param_3 + 0x10);
      plVar1 = plVar12 + *(int *)(param_3 + 0x18);
      do {
        uVar11 = uStack_60;
        lVar8 = *plVar12;
        if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
          uVar3 = (uint)((ulonglong)lVar8 >> 0x10);
          uVar4 = (uint)lVar8 & 0xffff;
          lVar6 = *(longlong *)(param_1 + 0x68);
          if (*(longlong *)(param_1 + 0x68) == 0) {
            lVar6 = param_1 + 0x60;
          }
          iVar5 = *(int *)(lVar6 + (ulonglong)
                                   (*(int *)(param_1 + 0x70) - 1U &
                                   (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar4) +
                                   (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) * 4);
          if (iVar5 != -1) {
            do {
              plVar2 = (longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar5 * 0x18);
              if (*plVar2 == lVar8) {
                if ((plVar2 != (longlong *)0x0) && (plVar2 + 1 != (longlong *)0x0)) {
                  lVar8 = (longlong)(int)uStack_60;
                  uVar3 = (int)uStack_60 + 1;
                  uStack_60 = CONCAT44(uStack_60._4_4_,uVar3);
                  if (uStack_60._4_4_ < uVar3) {
                    FUN_1489aa3ea(&local_68,uVar11 & 0xffffffff);
                  }
                  *(longlong *)(local_68 + lVar8 * 8) = plVar2[1];
                  goto LAB_1494468f9;
                }
                break;
              }
              iVar5 = (int)plVar2[2];
            } while (iVar5 != -1);
          }
        }
        FUN_14944603a(param_1);
        uVar11 = uStack_60;
        lVar8 = (longlong)(int)uStack_60;
        uVar3 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar3);
        if (uStack_60._4_4_ < uVar3) {
          FUN_1489aa3ea(&local_68,uVar11 & 0xffffffff);
        }
        *(undefined8 *)(local_68 + lVar8 * 8) = local_70;
        local_d8[0] = plVar12;
        local_d8[1] = &local_70;
        FUN_140906722((longlong *)(param_1 + 0x28),local_4c,local_d8);
LAB_1494468f9:
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar1);
    }
  }
  if (0 < (int)uStack_60) {
    lVar8 = 0;
    do {
      local_70 = *(undefined8 *)(local_68 + lVar8 * 8);
      puVar9 = (undefined8 *)(lVar8 * 0x60 + *(longlong *)(param_4 + 0xa0));
      pplVar10 = local_d8;
      for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
        *pplVar10 = (longlong *)*puVar9;
        puVar9 = puVar9 + 1;
        pplVar10 = pplVar10 + 1;
      }
      uVar3 = FUN_1408bcd7e(param_5[2],&local_70);
      if (uVar3 != 0xffffffff) {
        lVar6 = (longlong)(int)((longlong *)param_5[2])[1];
        if (lVar6 != 0) {
          uVar11 = 0;
          lVar7 = 0;
          do {
            if (uVar3 == *(ushort *)(*(longlong *)param_5[2] + uVar11)) {
              if ((~uVar11 & 0x1fffffffe) != 0) {
                pplVar10 = local_d8;
                puVar9 = (undefined8 *)((lVar7 >> 0x20) * 0x60 + *param_5);
                for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
                  *puVar9 = *pplVar10;
                  pplVar10 = pplVar10 + 1;
                  puVar9 = puVar9 + 1;
                }
              }
              break;
            }
            lVar7 = lVar7 + 0x100000000;
            uVar11 = uVar11 + 2;
          } while (lVar6 * 2 != uVar11);
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)uStack_60);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149446942 FUN_149446942 body=593 status=ok
// SIG undefined FUN_149446942(void)

void FUN_149446942(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_9c [4];
  longlong *local_98;
  undefined8 *puStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = 0;
  uStack_b0 = 0;
  iVar7 = (int)param_3[1];
  local_d0 = param_3;
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  local_c8 = param_4;
  if (iVar7 != 0) {
    FUN_149447398(&local_b8);
    if ((longlong)(int)local_d0[1] != 0) {
      plVar8 = (longlong *)*local_d0;
      plVar1 = plVar8 + (int)local_d0[1];
      do {
        uVar3 = uStack_b0;
        lVar9 = *plVar8;
        if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
          uVar4 = (uint)((ulonglong)lVar9 >> 0x10);
          uVar6 = (uint)lVar9 & 0xffff;
          lVar5 = *(longlong *)(param_1 + 0xb8);
          if (*(longlong *)(param_1 + 0xb8) == 0) {
            lVar5 = param_1 + 0xb0;
          }
          iVar7 = *(int *)(lVar5 + (ulonglong)
                                   (*(int *)(param_1 + 0xc0) - 1U &
                                   (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar6) +
                                   (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
          if (iVar7 != -1) {
            do {
              plVar2 = (longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar7 * 0x18);
              if (*plVar2 == lVar9) {
                if ((plVar2 != (longlong *)0x0) && (plVar2 + 1 != (longlong *)0x0)) {
                  lVar9 = (longlong)(int)uStack_b0;
                  uVar4 = (int)uStack_b0 + 1;
                  uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar4);
                  if (uStack_b0._4_4_ < uVar4) {
                    FUN_1489aa3ea(&local_b8,uVar3 & 0xffffffff);
                  }
                  *(longlong *)(local_b8 + lVar9 * 8) = plVar2[1];
                  goto LAB_149446b5b;
                }
                break;
              }
              iVar7 = (int)plVar2[2];
            } while (iVar7 != -1);
          }
        }
        FUN_1494461a0(param_1,&local_c0);
        uVar3 = uStack_b0;
        lVar9 = (longlong)(int)uStack_b0;
        uVar4 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar4);
        if (uStack_b0._4_4_ < uVar4) {
          FUN_1489aa3ea(&local_b8,uVar3 & 0xffffffff);
        }
        *(undefined8 *)(local_b8 + lVar9 * 8) = local_c0;
        local_98 = plVar8;
        puStack_90 = &local_c0;
        FUN_140906722((longlong *)(param_1 + 0x78),local_9c,&local_98,0);
LAB_149446b5b:
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar1);
    }
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = (longlong *)0x0;
  puStack_90 = (undefined8 *)0x0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_149446515(local_d0,local_c8,&local_b8,&local_98);
  FUN_149446306(param_1,&local_98);
  FUN_149446b96(&local_98,param_6);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(&local_98);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149446b96 FUN_149446b96 body=430 status=ok
// SIG undefined FUN_149446b96(void)

void FUN_149446b96(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (iVar5 != 0) {
    FUN_14480ffb8(&local_b8);
  }
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar5 = (int)param_1[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = param_1;
  if ((iStack_54 != iVar5) || (uStack_60 != plVar1)) {
    do {
      uVar3 = uStack_b0;
      puVar6 = (undefined8 *)((longlong)iStack_74 * 0x14 + *local_90);
      lVar7 = (longlong)(int)uStack_b0;
      uVar4 = (int)uStack_b0 + 1;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar4);
      if (uStack_b0._4_4_ < uVar4) {
        FUN_1406de67a(&local_b8,uVar3 & 0xffffffff);
      }
      lVar7 = lVar7 * 0x10;
      uVar2 = *(undefined4 *)(puVar6 + 1);
      *(undefined8 *)(local_b8 + lVar7) = *puVar6;
      *(undefined4 *)(local_b8 + 8 + lVar7) = uVar2;
      *(undefined1 *)(local_b8 + 0xc + lVar7) = 0;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_1 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || iStack_74 != iVar5));
  }
  FUN_1449802a2(param_2,&local_b8);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149446d5c FUN_149446d5c body=38 status=ok
// SIG undefined FUN_149446d5c(void)

undefined8 FUN_149446d5c(undefined8 param_1,int param_2)

{
  FUN_145cf520e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149446d82 FUN_149446d82 body=57 status=ok
// SIG undefined FUN_149446d82(void)

void FUN_149446d82(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc16d30 == 0) {
    uVar1 = FUN_145a25c2b();
    DAT_14cc16d30 = FUN_140002ddd(FUN_14672f3bc,uVar1,L"AnimNode_LiveLinkPose");
  }
  return;
}



// FUNCTION 149446de4 FUN_149446de4 body=19 status=ok
// SIG undefined FUN_149446de4(void)

undefined1 FUN_149446de4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_149445b04(param_3);
  return 1;
}



// FUNCTION 149446e06 FUN_149446e06 body=54 status=ok
// SIG undefined FUN_149446e06(void)

undefined1 FUN_149446e06(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149446f1a(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 149446e64 FUN_149446e64 body=59 status=ok
// SIG undefined FUN_149446e64(void)

undefined8 FUN_149446e64(longlong *param_1)

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



// FUNCTION 149446eaa FUN_149446eaa body=34 status=ok
// SIG undefined FUN_149446eaa(void)

void FUN_149446eaa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_145cf520e(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149446f1a FUN_149446f1a body=254 status=ok
// SIG undefined FUN_149446f1a(void)

longlong FUN_149446f1a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte bVar12;
  longlong lVar13;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  uVar8 = *(undefined4 *)(param_2 + 0x24);
  uVar9 = *(undefined4 *)(param_2 + 0x25);
  uVar10 = *(undefined4 *)(param_2 + 0x29);
  uVar11 = *(undefined4 *)(param_2 + 0x2d);
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  *(undefined4 *)(param_1 + 0x25) = uVar9;
  *(undefined4 *)(param_1 + 0x29) = uVar10;
  *(undefined4 *)(param_1 + 0x2d) = uVar11;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  lVar13 = *(longlong *)(param_2 + 0x38);
  if (DAT_14c950c29 == 1) {
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar13 = *(longlong *)(param_2 + 0x38);
    }
  }
  bVar12 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x38) = lVar13;
  lVar13 = *(longlong *)(param_2 + 0x40);
  if ((bVar12 & 1) != 0) {
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar13 = *(longlong *)(param_2 + 0x40);
    }
  }
  *(longlong *)(param_1 + 0x40) = lVar13;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  lVar13 = *(longlong *)(param_2 + 0x60);
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(longlong *)(param_1 + 0x60) = lVar13;
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
  lVar13 = *(longlong *)(param_2 + 0x68);
  if (DAT_14c950c29 == 1) {
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar13 = *(longlong *)(param_2 + 0x68);
    }
  }
  *(longlong *)(param_1 + 0x68) = lVar13;
  return param_1;
}



// FUNCTION 14944701a FUN_14944701a body=46 status=ok
// SIG undefined FUN_14944701a(void)

void FUN_14944701a(undefined8 param_1,undefined8 *param_2)

{
  FUN_140b4884c(param_2);
  *param_2 = &PTR_FUN_14bccc340;
  FUN_145e1dc68(param_2 + 0x115);
  return;
}



// FUNCTION 149447048 FUN_149447048 body=46 status=ok
// SIG undefined FUN_149447048(void)

void FUN_149447048(undefined8 param_1,undefined8 *param_2)

{
  FUN_140b4884c(param_2);
  *param_2 = &PTR_FUN_14bccc340;
  FUN_145e1dc68(param_2 + 0x115);
  return;
}



// FUNCTION 14944709a FUN_14944709a body=105 status=ok
// SIG undefined FUN_14944709a(void)

undefined1 FUN_14944709a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1411a1ca6(param_2,param_3);
    FUN_149446f1a(param_2 + 0x8a8,param_3 + 0x8a8);
    param_3 = param_3 + 0x920;
    param_2 = param_2 + 0x920;
  }
  return 1;
}



// FUNCTION 14944712c FUN_14944712c body=59 status=ok
// SIG undefined FUN_14944712c(void)

undefined8 FUN_14944712c(longlong *param_1)

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



// FUNCTION 149447178 FUN_149447178 body=62 status=ok
// SIG undefined FUN_149447178(void)

void FUN_149447178(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x124) == '\x01') {
    *param_2 = &PTR_FUN_14bccc340;
    FUN_145cf520e(param_2 + 0x115);
    FUN_14064e066(param_2);
    *(undefined1 *)(param_2 + 0x124) = 0;
  }
  return;
}



// FUNCTION 149447206 FUN_149447206 body=31 status=ok
// SIG undefined FUN_149447206(void)

void FUN_149447206(longlong param_1)

{
  FUN_1448eac94(param_1 + 0x38);
  FUN_1448eac94(param_1 + 0x10);
  return;
}



// FUNCTION 149447226 FUN_149447226 body=29 status=ok
// SIG undefined FUN_149447226(void)

undefined8 FUN_149447226(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149447244 FUN_149447244 body=339 status=ok
// SIG undefined FUN_149447244(void)

undefined4 * FUN_149447244(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1408cb62c(param_1,local_40);
  uVar1 = *(undefined8 *)*param_3;
  *local_38 = uVar1;
  local_38[1] = 0xffffffff00000000;
  local_44 = local_40[0];
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = 0;
  cVar2 = FUN_1417b4c5a(param_1,uVar7,local_38);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)(local_38 + 2) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_38 + 0xc) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1408cb1a2(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149447398 FUN_149447398 body=26 status=ok
// SIG undefined FUN_149447398(void)

void FUN_149447398(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_1489aa448(param_1,*(undefined4 *)(param_1 + 8),param_2,8);
  return;
}



// FUNCTION 1494473b2 FUN_1494473b2 body=708 status=ok
// SIG undefined FUN_1494473b2(void)

longlong * FUN_1494473b2(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1490d6d3a();
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined8 *)(param_2 + 8),8);
    }
    else {
      thunk_FUN_146821949(param_1);
    }
  }
  else {
    *(undefined8 *)(param_2 + 8) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  FUN_149447ffa(param_1,param_2 + 0x10);
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x20),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x20) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar3 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar3 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x24);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x24) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x24) = *piVar3 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_14944811c(param_2 + 0x28,param_1);
  FUN_14944825e(param_1,param_2 + 0x38);
  piVar3 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar3 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x48);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x48) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x48) = *piVar3 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x4c),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x4c) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar4 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x50),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x50) = *puVar4;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  FUN_149448646(param_1,param_2 + 0x58);
  FUN_149448646(param_1,param_2 + 0xa8);
  FUN_149448646(param_1,param_2 + 0xf8);
  piVar3 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar3 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x148);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x148) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x148) = *piVar3 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149447678 FUN_149447678 body=94 status=ok
// SIG undefined FUN_149447678(void)

void FUN_149447678(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1e8));
    if (*(int *)(lVar1 + 0x1a0) != *(int *)(lVar1 + 0x1cc)) {
      FUN_1494479bc(lVar1 + 0x198);
      FUN_1494489f8(lVar1 + 0x198);
    }
                    /* WARNING: Could not recover jumptable at 0x0001494476ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1e8));
    return;
  }
  return;
}



// FUNCTION 1494476d6 FUN_1494476d6 body=57 status=ok
// SIG undefined FUN_1494476d6(void)

void FUN_1494476d6(undefined8 *param_1,int param_2)

{
  FUN_145d6c6cb(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14944948e(param_1,param_2);
  return;
}



// FUNCTION 149447710 FUN_149447710 body=204 status=ok
// SIG undefined FUN_149447710(void)

void FUN_149447710(longlong param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x88));
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_1408be2c4(param_1 + 0x78,0);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x88));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe0));
  FUN_14944794e(param_1 + 0x90,0);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe0));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x138));
  FUN_149447c88(param_1 + 0xe8,0);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x138));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 400));
  FUN_147be7cf8(param_1 + 0x140,0);
                    /* WARNING: Could not recover jumptable at 0x0001494477d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 400));
  return;
}



// FUNCTION 1494477dc FUN_1494477dc body=70 status=ok
// SIG undefined FUN_1494477dc(void)

undefined8 * FUN_1494477dc(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = FUsdInfoCache::vftable;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    FUN_145d6c4fa(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149447822 FUN_149447822 body=206 status=ok
// SIG undefined FUN_149447822(void)

void FUN_149447822(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  FUN_145d6c694(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_145d6c694(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_145d6c694(param_1 + 0x58);
  FUN_1494478f0(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  if (*(char *)(param_1 + 0x26) == '\x01') {
    *(undefined1 *)(param_1 + 0x26) = 0;
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  FUN_1490d6cf4(param_1);
  return;
}



// FUNCTION 1494478f0 FUN_1494478f0 body=38 status=ok
// SIG undefined FUN_1494478f0(void)

void FUN_1494478f0(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_149447916(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 149447916 FUN_149447916 body=56 status=ok
// SIG undefined FUN_149447916(void)

void FUN_149447916(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1);
  return;
}



// FUNCTION 14944794e FUN_14944794e body=110 status=ok
// SIG undefined FUN_14944794e(void)

void FUN_14944794e(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_145d6c766(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_149447b00(param_1);
    return;
  }
  FUN_1494479bc(param_1);
  FUN_145d6c766(param_1,param_2);
  return;
}



// FUNCTION 1494479bc FUN_1494479bc body=322 status=ok
// SIG undefined FUN_1494479bc(void)

void FUN_1494479bc(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 149447b00 FUN_149447b00 body=390 status=ok
// SIG undefined FUN_149447b00(void)

void FUN_149447b00(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar1,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar5 = local_60;
  if (uVar3 != 0) {
    plVar2 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar2,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar2;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
    }
    local_48 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_78 = param_1;
    if (local_60._4_4_ < (int)local_48[3]) {
      iVar6 = local_60._4_4_;
      local_60 = uVar5;
      do {
        lVar4 = *local_78;
        *(undefined4 *)(lVar4 + 0xc + (longlong)iVar6 * 0x10) = 0;
        plVar7 = (longlong *)*plVar1;
        if ((longlong *)*plVar1 == (longlong *)0x0) {
          plVar7 = plVar2;
        }
        *(int *)(lVar4 + 8 + (longlong)iVar6 * 0x10) = (int)*plVar7;
        plVar7 = (longlong *)*plVar1;
        if ((longlong *)*plVar1 == (longlong *)0x0) {
          plVar7 = plVar2;
        }
        *(int *)plVar7 = iVar6;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_60._4_4_ < (int)local_68[3]);
    }
  }
  local_60 = uVar5;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149447c88 FUN_149447c88 body=110 status=ok
// SIG undefined FUN_149447c88(void)

void FUN_149447c88(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_145d6c8de(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_149447e3e(param_1);
    return;
  }
  FUN_149447cf6(param_1);
  FUN_145d6c8de(param_1,param_2);
  return;
}



// FUNCTION 149447cf6 FUN_149447cf6 body=326 status=ok
// SIG undefined FUN_149447cf6(void)

void FUN_149447cf6(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
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



// FUNCTION 149447e3e FUN_149447e3e body=391 status=ok
// SIG undefined FUN_149447e3e(void)

void FUN_149447e3e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar1,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar5 = local_60;
  if (uVar3 != 0) {
    plVar2 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar2,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar2;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
    }
    local_48 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_78 = param_1;
    if (local_60._4_4_ < (int)local_48[3]) {
      iVar6 = local_60._4_4_;
      local_60 = uVar5;
      do {
        lVar4 = *local_78;
        *(undefined4 *)(lVar4 + 0x5c + (longlong)iVar6 * 0x60) = 0;
        plVar7 = (longlong *)*plVar1;
        if ((longlong *)*plVar1 == (longlong *)0x0) {
          plVar7 = plVar2;
        }
        *(int *)(lVar4 + 0x58 + (longlong)iVar6 * 0x60) = (int)*plVar7;
        plVar7 = (longlong *)*plVar1;
        if ((longlong *)*plVar1 == (longlong *)0x0) {
          plVar7 = plVar2;
        }
        *(int *)plVar7 = iVar6;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_60._4_4_ < (int)local_68[3]);
    }
  }
  local_60 = uVar5;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149447fc6 FUN_149447fc6 body=51 status=ok
// SIG undefined FUN_149447fc6(void)

void FUN_149447fc6(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_145d6c694(param_1 + 8);
  FUN_1490d6cf4(param_1);
  return;
}



// FUNCTION 149447ffa FUN_149447ffa body=288 status=ok
// SIG undefined FUN_149447ffa(void)

longlong * FUN_149447ffa(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 1) << 3,
             (longlong)*(int *)((longlong)param_2 + 0xc) << 3);
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1448f21ac(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_1c;
    uVar3 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1468f8d30(param_2,local_1c,*(undefined4 *)((longlong)param_2 + 0xc));
      uVar3 = *(uint *)(param_2 + 1);
    }
    (**(code **)(*param_1 + 0x170))(param_1,*param_2,(longlong)(int)uVar3 << 3);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14944811c FUN_14944811c body=321 status=ok
// SIG undefined FUN_14944811c(void)

void FUN_14944811c(undefined8 *param_1,longlong *param_2)

{
  uint *puVar1;
  byte bVar2;
  ulonglong *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar2 = *(byte *)(param_1 + 1);
  puVar3 = (ulonglong *)param_2[1];
  puVar4 = (uint *)*puVar3;
  puVar1 = puVar4 + 1;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((uint *)puVar3[1] < puVar1) {
      local_2c = (uint)bVar2;
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      uVar6 = local_2c;
      if (1 < local_2c) {
        FUN_14572541c(param_2);
        uVar6 = local_2c;
      }
    }
    else {
      uVar6 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
    }
    if (uVar6 == 0) goto LAB_14944820b;
  }
  else {
    if ((uint *)puVar3[1] < puVar1) {
      local_2c = 0;
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      uVar6 = local_2c;
      if (1 < local_2c) {
        FUN_14572541c(param_2);
        uVar6 = local_2c;
      }
    }
    else {
      uVar6 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
    }
    if (uVar6 == 0) {
      if (*(char *)(param_1 + 1) == '\x01') {
        *(undefined1 *)(param_1 + 1) = 0;
      }
      goto LAB_14944820b;
    }
    if (bVar2 == 0) {
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  puVar5 = *(undefined8 **)param_2[1];
  if ((undefined8 *)((longlong *)param_2[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,8);
    }
    else {
      thunk_FUN_146821949(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
  }
LAB_14944820b:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944825e FUN_14944825e body=354 status=ok
// SIG undefined FUN_14944825e(void)

longlong * FUN_14944825e(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x68,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x68);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1494478f0(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_149448518(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x27627 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1494483fb(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x68;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_1494483c2(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1494484dc(param_2);
        FUN_1494483fb(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1494483c2 FUN_1494483c2 body=57 status=ok
// SIG undefined FUN_1494483c2(void)

void FUN_1494483c2(undefined8 *param_1,int param_2)

{
  FUN_1494478f0(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_149448518(param_1,param_2);
  return;
}



// FUNCTION 1494483fb FUN_1494483fb body=224 status=ok
// SIG undefined FUN_1494483fb(void)

longlong * FUN_1494483fb(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14021219d(param_1,param_2 + 0x50);
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x60),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x60) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x61);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x61) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x61) = *piVar2 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_146b7ba06(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494484dc FUN_1494484dc body=59 status=ok
// SIG undefined FUN_1494484dc(void)

longlong FUN_1494484dc(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1494485b6(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x68 + *param_1;
  FUN_149448584(lVar2);
  return lVar2;
}



// FUNCTION 149448518 FUN_149448518 body=108 status=ok
// SIG undefined FUN_149448518(void)

void FUN_149448518(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x68,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x68)) {
      uVar2 = uVar1 / 0x68 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x68,8);
  }
  return;
}



// FUNCTION 149448584 FUN_149448584 body=50 status=ok
// SIG undefined FUN_149448584(void)

void FUN_149448584(undefined8 *param_1)

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
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  return;
}



// FUNCTION 1494485b6 FUN_1494485b6 body=143 status=ok
// SIG undefined FUN_1494485b6(void)

void FUN_1494485b6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149448646 FUN_149448646 body=131 status=ok
// SIG undefined FUN_149448646(void)

longlong FUN_149448646(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_1494486c9();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_149447b00(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1494486c9 FUN_1494486c9 body=584 status=ok
// SIG undefined FUN_1494486c9(void)

longlong * FUN_1494486c9(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  int local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar5 = local_50._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_54 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_54,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_54);
      }
    }
    else {
      local_54 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    local_48 = param_2 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = local_50;
    local_70 = local_48;
    local_68 = local_40;
    uVar6 = local_68;
    local_60 = local_38;
    local_5c = local_34;
    local_68._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_80 = param_2;
    if (local_68._4_4_ < (int)local_48[3]) {
      iVar7 = local_68._4_4_;
      local_68 = uVar6;
      do {
        FUN_1490d6d3a(param_1,(longlong)iVar7 * 0x10 + *local_80);
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar7 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  else {
    local_50 = (ulonglong)local_50._4_4_ << 0x20;
    puVar3 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_50,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_50);
      }
    }
    else {
      local_50 = CONCAT44(uVar5,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar2;
    }
    FUN_145d6c766(param_2,local_50 & 0xffffffff);
    uVar6 = local_68;
    if (0 < (int)local_50) {
      iVar7 = 0;
      do {
        FUN_149448912(param_2,&local_80);
        uVar4 = local_78;
        FUN_1490d6c70(local_78);
        *(undefined4 *)(uVar4 + 8) = 0xffffffff;
        FUN_1490d6d3a(param_1,uVar4);
        iVar7 = iVar7 + 1;
        uVar6 = local_68;
      } while (iVar7 < (int)local_50);
    }
  }
  local_68 = uVar6;
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149448912 FUN_149448912 body=229 status=ok
// SIG undefined FUN_149448912(void)

int * FUN_149448912(longlong *param_1,int *param_2)

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



// FUNCTION 1494489f8 FUN_1494489f8 body=276 status=ok
// SIG undefined FUN_1494489f8(void)

void FUN_1494489f8(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      FUN_1490d6cf4((longlong)iStack_44 * 0x10 + *local_60);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14474875a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149448b0e FUN_149448b0e body=131 status=ok
// SIG undefined FUN_149448b0e(void)

longlong FUN_149448b0e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_149448b91();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_149448f76(param_2);
    }
  }
  return param_1;
}



// FUNCTION 149448b91 FUN_149448b91 body=766 status=ok
// SIG undefined FUN_149448b91(void)

longlong * FUN_149448b91(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  int local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar7 = local_58._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_5c = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_5c,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_5c);
      }
    }
    else {
      local_5c = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    local_50 = param_2 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_80 = local_58;
    local_78 = local_50;
    local_70 = local_48;
    uVar8 = local_70;
    local_68 = local_40;
    local_64 = local_3c;
    local_70._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_88 = param_2;
    if (local_70._4_4_ < (int)local_50[3]) {
      iVar10 = local_70._4_4_;
      local_70 = uVar8;
      do {
        lVar4 = *local_88;
        FUN_1490d6d3a(param_1,lVar4 + (longlong)iVar10 * 0x18);
        puVar9 = (undefined8 *)(lVar4 + (longlong)iVar10 * 0x18 + 8);
        puVar5 = *(undefined8 **)param_1[1];
        if ((undefined8 *)((longlong *)param_1[1])[1] < puVar5 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar9,8);
          }
          else {
            thunk_FUN_146821949(param_1);
          }
        }
        else {
          *puVar9 = *puVar5;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar10 = local_70._4_4_;
        uVar8 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  else {
    local_58 = (ulonglong)local_58._4_4_ << 0x20;
    puVar3 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_58,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_58);
      }
    }
    else {
      local_58 = CONCAT44(uVar7,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar2;
    }
    FUN_145d6ca5a(param_2,local_58 & 0xffffffff);
    uVar8 = local_70;
    if (0 < (int)local_58) {
      iVar10 = 0;
      do {
        FUN_149448e90(param_2,&local_88);
        uVar6 = local_80;
        FUN_1490d6c70(local_80);
        puVar5 = (undefined8 *)(uVar6 + 8);
        *(undefined8 *)(uVar6 + 8) = 0;
        *(undefined4 *)(uVar6 + 0x10) = 0xffffffff;
        FUN_1490d6d3a(param_1,uVar6);
        puVar9 = *(undefined8 **)param_1[1];
        if ((undefined8 *)((longlong *)param_1[1])[1] < puVar9 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar5,8);
          }
          else {
            thunk_FUN_146821949(param_1,puVar5);
          }
        }
        else {
          *puVar5 = *puVar9;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
        }
        iVar10 = iVar10 + 1;
        uVar8 = local_70;
      } while (iVar10 < (int)local_58);
    }
  }
  local_70 = uVar8;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149448e90 FUN_149448e90 body=230 status=ok
// SIG undefined FUN_149448e90(void)

int * FUN_149448e90(longlong *param_1,int *param_2)

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



// FUNCTION 149448f76 FUN_149448f76 body=387 status=ok
// SIG undefined FUN_149448f76(void)

void FUN_149448f76(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar1,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar5 = local_60;
  if (uVar3 != 0) {
    plVar2 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar2,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar2;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
    }
    local_48 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_78 = param_1;
    if (local_60._4_4_ < (int)local_48[3]) {
      iVar6 = local_60._4_4_;
      local_60 = uVar5;
      do {
        lVar4 = *local_78;
        *(undefined4 *)(lVar4 + 0x14 + (longlong)iVar6 * 0x18) = 0;
        plVar7 = (longlong *)*plVar1;
        if ((longlong *)*plVar1 == (longlong *)0x0) {
          plVar7 = plVar2;
        }
        *(int *)(lVar4 + 0x10 + (longlong)iVar6 * 0x18) = (int)*plVar7;
        plVar7 = (longlong *)*plVar1;
        if ((longlong *)*plVar1 == (longlong *)0x0) {
          plVar7 = plVar2;
        }
        *(int *)plVar7 = iVar6;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_60._4_4_ < (int)local_68[3]);
    }
  }
  local_60 = uVar5;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494490fa FUN_1494490fa body=363 status=ok
// SIG undefined FUN_1494490fa(void)

longlong * FUN_1494490fa(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x150,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x150);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_145d6c6cb(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_14944948e(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xc30c < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1494473b2(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x150;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_1494476d6(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_149449266(param_2);
        FUN_1494473b2(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149449266 FUN_149449266 body=62 status=ok
// SIG undefined FUN_149449266(void)

longlong FUN_149449266(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1494492aa(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x150 + *param_1;
  thunk_FUN_14944933e(lVar2);
  return lVar2;
}



// FUNCTION 1494492a4 thunk_FUN_14944933e body=5 status=ok
// SIG undefined thunk_FUN_14944933e(void)

longlong thunk_FUN_14944933e(longlong param_1)

{
  FUN_1490d6c70();
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined1 *)(param_1 + 0x148) = 0;
  return param_1;
}



// FUNCTION 1494492aa FUN_1494492aa body=146 status=ok
// SIG undefined FUN_1494492aa(void)

void FUN_1494492aa(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x150,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0xc30c30c30c30c31),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x150,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14944933e FUN_14944933e body=217 status=ok
// SIG undefined FUN_14944933e(void)

longlong FUN_14944933e(longlong param_1)

{
  FUN_1490d6c70();
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined1 *)(param_1 + 0x148) = 0;
  return param_1;
}



// FUNCTION 149449418 FUN_149449418 body=98 status=ok
// SIG undefined FUN_149449418(void)

void FUN_149449418(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14944947a FUN_14944947a body=20 status=ok
// SIG undefined FUN_14944947a(void)

void FUN_14944947a(void *param_1,undefined8 param_2,uint param_3)

{
  if (param_3 != 0) {
    memset(param_1,0,(ulonglong)param_3 << 3);
    return;
  }
  return;
}



// FUNCTION 14944948e FUN_14944948e body=112 status=ok
// SIG undefined FUN_14944948e(void)

void FUN_14944948e(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x150,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0xc30c30c30c30c31),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x150,8);
  }
  return;
}



// FUNCTION 1494494fe FUN_1494494fe body=110 status=ok
// SIG undefined FUN_1494494fe(void)

void FUN_1494494fe(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_145d6ca5a(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_149448f76(param_1);
    return;
  }
  FUN_14944956c(param_1);
  FUN_145d6ca5a(param_1,param_2);
  return;
}



// FUNCTION 14944956c FUN_14944956c body=322 status=ok
// SIG undefined FUN_14944956c(void)

void FUN_14944956c(longlong *param_1)

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



// FUNCTION 1494496b0 FUN_1494496b0 body=284 status=ok
// SIG undefined FUN_1494496b0(void)

undefined8 * FUN_1494496b0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_3 == 0) || (lVar1 = *param_1, lVar1 == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  AcquireSRWLockShared((PSRWLOCK)(lVar1 + 0xa0));
  local_40 = 0;
  FUN_14485c47a(&local_40,param_3);
  local_38 = local_40;
  iVar3 = FUN_14944a892((longlong *)(lVar1 + 0x50),
                        (uint)((ulonglong)local_40 >> 0x20) ^ (uint)local_40);
  if (iVar3 != -1) {
    lVar4 = *(longlong *)(lVar1 + 0x50);
    if ((lVar4 + (longlong)iVar3 * 0x20 + 8U & 0xfffffffffffffff7) != 0) {
      lVar4 = lVar4 + (longlong)iVar3 * 0x20;
      *param_2 = 0;
      iVar3 = *(int *)(lVar4 + 0x10);
      uVar2 = *(undefined8 *)(lVar4 + 8);
      *(int *)(param_2 + 1) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        FUN_149449418(param_2,iVar3,0);
        FUN_14944947a(*param_2,uVar2,iVar3);
      }
      goto LAB_14944976b;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14944976b:
  ReleaseSRWLockShared((PSRWLOCK)(lVar1 + 0xa0));
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494497cd FUN_1494497cd body=1 status=ok
// SIG undefined FUN_1494497cd(void)

void FUN_1494497cd(void)

{
  return;
}



// FUNCTION 1494497ce FUN_1494497ce body=101 status=ok
// SIG undefined FUN_1494497ce(void)

void FUN_1494497ce(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar1 = FUN_149449834();
  if ((lVar1 != 0) && (0 < (longlong)*(int *)(lVar1 + 0x70))) {
    lVar3 = lVar1;
    if (*(longlong *)(lVar1 + 0x60) != 0) {
      lVar3 = *(longlong *)(lVar1 + 0x60);
    }
    piVar2 = (int *)(lVar3 + 0x10);
    lVar3 = 0;
    do {
      if (*piVar2 == *(int *)(param_2 + 0x10)) {
        FUN_14944ae64(lVar1);
        FUN_14944aee4(lVar1);
        return;
      }
      lVar3 = lVar3 + 1;
      piVar2 = piVar2 + 0x18;
    } while (*(int *)(lVar1 + 0x70) != lVar3);
  }
  return;
}



// FUNCTION 149449834 FUN_149449834 body=106 status=ok
// SIG undefined FUN_149449834(void)

undefined8 * FUN_149449834(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar4 = (undefined8 *)*param_1;
    lVar3 = (longlong)*(int *)(param_1 + 1) * 0x90;
    do {
      iVar1 = *(int *)(puVar4 + 1);
      if (iVar1 == *(int *)(param_2 + 1)) {
        if ((iVar1 < 2) || (iVar1 = FUN_144a80a00(*puVar4,*param_2), iVar1 == 0))
        goto LAB_14944988b;
      }
      else if (*(int *)(param_2 + 1) + iVar1 == 1) goto LAB_14944988b;
      puVar4 = puVar4 + 0x12;
      lVar3 = lVar3 + -0x90;
    } while (lVar3 != 0);
  }
  puVar4 = (undefined8 *)0x0;
LAB_14944988b:
  puVar2 = puVar4 + 2;
  if (puVar4 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}



// FUNCTION 14944989e FUN_14944989e body=285 status=ok
// SIG undefined FUN_14944989e(void)

undefined8 * FUN_14944989e(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  *(undefined4 *)((longlong)param_1 + 0xf) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1490d6b88(param_1 + 3);
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 0xb) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
  param_1[0x10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (param_3 != 0) {
    FUN_1401924dc(param_3);
    param_1[0x10] = param_3;
  }
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0x101010100000012;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 0x129) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0x12d) = 1;
  *(undefined2 *)((longlong)param_1 + 0x12e) = 0x100;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[8] = DAT_14cbfea60;
  return param_1;
}



// FUNCTION 1494499bc FUN_1494499bc body=131 status=ok
// SIG undefined FUN_1494499bc(void)

longlong FUN_1494499bc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_149449a3f();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_149449f3e(param_2);
    }
  }
  return param_1;
}



// FUNCTION 149449a3f FUN_149449a3f body=651 status=ok
// SIG undefined FUN_149449a3f(void)

longlong * FUN_149449a3f(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  int local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_70._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_74 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_74,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_74);
      }
    }
    else {
      local_74 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    local_68 = param_2 + 2;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_98 = local_70;
    local_90 = local_68;
    local_88 = local_60;
    uVar7 = local_88;
    local_80 = local_58;
    local_7c = local_54;
    local_88._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_a0 = param_2;
    if (local_88._4_4_ < (int)local_68[3]) {
      iVar8 = local_88._4_4_;
      local_88 = uVar7;
      do {
        lVar4 = *local_a0;
        FUN_1490d6d3a(param_1,lVar4 + (longlong)iVar8 * 0x20);
        FUN_149449db2(param_1,lVar4 + (longlong)iVar8 * 0x20 + 8);
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar8 = local_88._4_4_;
        uVar7 = local_88;
      } while (local_88._4_4_ < (int)local_90[3]);
    }
  }
  else {
    local_70 = (ulonglong)local_70._4_4_ << 0x20;
    puVar3 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_70,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_70);
      }
    }
    else {
      local_70 = CONCAT44(uVar6,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar2;
    }
    FUN_145df21f6(param_2,local_70 & 0xffffffff);
    uVar7 = local_88;
    if (0 < (int)local_70) {
      iVar8 = 0;
      do {
        FUN_149449ccc(param_2,&local_a0);
        uVar5 = local_98;
        FUN_1490d6c70(local_98);
        *(undefined8 *)(uVar5 + 8) = 0;
        *(undefined8 *)(uVar5 + 0x10) = 0;
        *(undefined4 *)(uVar5 + 0x18) = 0xffffffff;
        FUN_1490d6d3a(param_1,uVar5);
        FUN_149449db2(param_1,uVar5 + 8);
        iVar8 = iVar8 + 1;
        uVar7 = local_88;
      } while (iVar8 < (int)local_70);
    }
  }
  local_88 = uVar7;
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149449ccc FUN_149449ccc body=229 status=ok
// SIG undefined FUN_149449ccc(void)

int * FUN_149449ccc(longlong *param_1,int *param_2)

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



// FUNCTION 149449db2 FUN_149449db2 body=394 status=ok
// SIG undefined FUN_149449db2(void)

longlong * FUN_149449db2(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_147bf1112(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      (**(code **)(*param_1 + 0x120))(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_147bf1112(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1409d3082(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = 0;
        (**(code **)(*param_1 + 0x120))(param_1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149449f3e FUN_149449f3e body=444 status=ok
// SIG undefined FUN_149449f3e(void)

void FUN_149449f3e(longlong *param_1)

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
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
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
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x20;
        iVar6 = FUN_1490d6d37(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
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
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14944a0fc FUN_14944a0fc body=131 status=ok
// SIG undefined FUN_14944a0fc(void)

longlong FUN_14944a0fc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_14944a17f();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_14944a6da(param_2);
    }
  }
  return param_1;
}



// FUNCTION 14944a17f FUN_14944a17f body=649 status=ok
// SIG undefined FUN_14944a17f(void)

longlong * FUN_14944a17f(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined8 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_78 = local_50;
    uVar7 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar7;
      do {
        lVar5 = *local_90;
        (**(code **)(*param_1 + 0x120))(param_1,lVar5 + (longlong)iVar8 * 0x20);
        FUN_14944a4f0(param_1,lVar5 + (longlong)iVar8 * 0x20 + 8);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar7 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined8 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_145df238c(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar7 = local_78;
    if (0 < (int)local_60) {
      iVar8 = 0;
      do {
        FUN_14944a40a(param_2,&local_90);
        puVar3 = local_88 + 1;
        *local_88 = 0;
        local_88[1] = 0;
        local_88[2] = 0;
        *(undefined4 *)(local_88 + 3) = 0xffffffff;
        (**(code **)(*param_1 + 0x120))(param_1);
        FUN_14944a4f0(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_78;
      } while (iVar8 < (int)local_60);
    }
  }
  local_78 = uVar7;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14944a40a FUN_14944a40a body=229 status=ok
// SIG undefined FUN_14944a40a(void)

int * FUN_14944a40a(longlong *param_1,int *param_2)

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



// FUNCTION 14944a4f0 FUN_14944a4f0 body=354 status=ok
// SIG undefined FUN_14944a4f0(void)

longlong * FUN_14944a4f0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_145d37afc(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1490d73c0(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1490d6d3a(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_14944a654(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_14944a69a(param_2);
        FUN_1490d6d3a(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14944a654 FUN_14944a654 body=68 status=ok
// SIG undefined FUN_14944a654(void)

void FUN_14944a654(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145d37afc(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1490d73c0(param_1,param_2);
  return;
}



// FUNCTION 14944a69a FUN_14944a69a body=64 status=ok
// SIG undefined FUN_14944a69a(void)

longlong FUN_14944a69a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1492e9470(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 8 + *param_1;
  FUN_1492e944a(lVar2,1);
  return lVar2;
}



// FUNCTION 14944a6da FUN_14944a6da body=439 status=ok
// SIG undefined FUN_14944a6da(void)

void FUN_14944a6da(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14944a892 FUN_14944a892 body=185 status=ok
// SIG undefined FUN_14944a892(void)

int FUN_14944a892(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x20);
        cVar1 = FUN_14472ecf8(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14944a8bb;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14944a8bb:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 14944a94c FUN_14944a94c body=110 status=ok
// SIG undefined FUN_14944a94c(void)

void FUN_14944a94c(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_145df21f6(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_149449f3e(param_1);
    return;
  }
  FUN_14944a9ba(param_1);
  FUN_145df21f6(param_1,param_2);
  return;
}



// FUNCTION 14944a9ba FUN_14944a9ba body=322 status=ok
// SIG undefined FUN_14944a9ba(void)

void FUN_14944a9ba(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 14944aafe FUN_14944aafe body=110 status=ok
// SIG undefined FUN_14944aafe(void)

void FUN_14944aafe(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_145df238c(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_14944a6da(param_1);
    return;
  }
  FUN_14944ab6c(param_1);
  FUN_145df238c(param_1,param_2);
  return;
}



// FUNCTION 14944ab6c FUN_14944ab6c body=322 status=ok
// SIG undefined FUN_14944ab6c(void)

void FUN_14944ab6c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 14944acb0 FUN_14944acb0 body=31 status=ok
// SIG undefined FUN_14944acb0(void)

undefined8 FUN_14944acb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14944acd0 FUN_14944acd0 body=3 status=ok
// SIG undefined FUN_14944acd0(void)

undefined8 FUN_14944acd0(void)

{
  return 0;
}



// FUNCTION 14944acd4 FUN_14944acd4 body=5 status=ok
// SIG undefined FUN_14944acd4(void)

undefined8 FUN_14944acd4(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 14944acda FUN_14944acda body=5 status=ok
// SIG undefined FUN_14944acda(void)

undefined8 FUN_14944acda(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 14944ace0 FUN_14944ace0 body=8 status=ok
// SIG undefined FUN_14944ace0(void)

bool FUN_14944ace0(longlong param_1,longlong param_2)

{
  return *(longlong *)(param_1 + 0x18) == param_2;
}



// FUNCTION 14944ace8 FUN_14944ace8 body=3 status=ok
// SIG undefined FUN_14944ace8(void)

undefined1 FUN_14944ace8(void)

{
  return 1;
}



// FUNCTION 14944acec FUN_14944acec body=93 status=ok
// SIG undefined FUN_14944acec(void)

void FUN_14944acec(longlong param_1,longlong *param_2)

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
  *puVar1 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FUsdSchemasModule>,class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14944ad4a FUN_14944ad4a body=126 status=ok
// SIG undefined FUN_14944ad4a(void)

void FUN_14944ad4a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FUsdSchemasModule>,class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014944adb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14944adc8 FUN_14944adc8 body=21 status=ok
// SIG undefined FUN_14944adc8(void)

undefined8 FUN_14944adc8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14944adde FUN_14944adde body=1 status=ok
// SIG undefined FUN_14944adde(void)

void FUN_14944adde(void)

{
  return;
}



// FUNCTION 14944ade0 FUN_14944ade0 body=5 status=ok
// SIG undefined FUN_14944ade0(void)

longlong FUN_14944ade0(longlong param_1)

{
  return param_1 + 0x20;
}



// FUNCTION 14944ade6 FUN_14944ade6 body=53 status=ok
// SIG undefined FUN_14944ade6(void)

void FUN_14944ade6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar1 = param_1;
  }
  FUN_14944ae1b(lVar1,*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14944ae1b FUN_14944ae1b body=72 status=ok
// SIG undefined FUN_14944ae1b(void)

void FUN_14944ae1b(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x40);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if (plVar2[-8] != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14944ae64 FUN_14944ae64 body=128 status=ok
// SIG undefined FUN_14944ae64(void)

void FUN_14944ae64(longlong param_1,uint param_2)

{
  longlong *_Dst;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar2 = param_1;
  }
  _Dst = (longlong *)(lVar2 + (longlong)(int)param_2 * 0x60);
  if (*(longlong *)(lVar2 + 0x20 + (longlong)(int)param_2 * 0x60) != 0) {
    plVar3 = _Dst + 8;
    if ((longlong *)_Dst[6] != (longlong *)0x0) {
      plVar3 = (longlong *)_Dst[6];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*_Dst != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x70);
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,_Dst + 0xc,(longlong)(int)(~param_2 + iVar1) * 0x60);
    iVar1 = *(int *)(param_1 + 0x70);
  }
  *(int *)(param_1 + 0x70) = iVar1 + -1;
  return;
}



// FUNCTION 14944aee4 FUN_14944aee4 body=52 status=ok
// SIG undefined FUN_14944aee4(void)

void FUN_14944aee4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14944af18(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
  if (iVar1 == *(int *)(param_1 + 0x74)) {
    return;
  }
  *(int *)(param_1 + 0x74) = iVar1;
  FUN_14944af9a(param_1,*(undefined4 *)(param_1 + 0x70),iVar1);
  return;
}



// FUNCTION 14944af18 FUN_14944af18 body=129 status=ok
// SIG undefined FUN_14944af18(void)

ulonglong FUN_14944af18(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_1) {
    iVar2 = param_2 - param_1;
    if ((ulonglong)((longlong)iVar2 * 0x60) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x60,0);
      uVar1 = uVar1 / 0x60;
    }
  }
  return uVar1;
}



// FUNCTION 14944af9a FUN_14944af9a body=140 status=ok
// SIG undefined FUN_14944af9a(void)

void FUN_14944af9a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x60);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x60);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x60,0,param_3,0x60);
    memmove(*(void **)((longlong)param_1 + 0x60),param_1,(longlong)param_2 * 0x60);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x60,param_2,param_3,0x60);
  return;
}



// FUNCTION 14944b032 FUN_14944b032 body=99 status=ok
// SIG undefined FUN_14944b032(void)

void FUN_14944b032(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  plVar1 = (longlong *)FUN_144aff0e0();
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3906c);
  FUN_141001072(param_1,plVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944b096 FUN_14944b096 body=48 status=ok
// SIG undefined FUN_14944b096(void)

void FUN_14944b096(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3906c);
  FUN_141001072(param_1,param_2);
  return;
}



// FUNCTION 14944b0de FUN_14944b0de body=185 status=ok
// SIG undefined FUN_14944b0de(void)

void FUN_14944b0de(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < (longlong)*(int *)(param_1 + 0x104)) {
    FUN_144a808d5(local_30,(longlong)*(int *)(param_1 + 0x104),param_2,param_3);
    *(undefined4 *)(param_1 + 0x104) = local_30[0];
  }
  if (0 < (longlong)*(int *)(param_1 + 0x108)) {
    FUN_144a808d5(local_30,(longlong)*(int *)(param_1 + 0x108),param_2,param_3);
    *(undefined4 *)(param_1 + 0x108) = local_30[0];
  }
  if (0 < (longlong)*(int *)(param_1 + 0x100)) {
    FUN_144a808d5(local_30,(longlong)*(int *)(param_1 + 0x100),param_2,param_3);
    *(undefined4 *)(param_1 + 0x100) = local_30[0];
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944b198 FUN_14944b198 body=598 status=ok
// SIG undefined FUN_14944b198(void)

void FUN_14944b198(longlong param_1)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_78 [32];
  undefined4 local_58 [2];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140836bcc();
  uVar3 = FUN_14073751e();
  lVar4 = FUN_144a78ede(param_1,uVar3);
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(lVar4 + 0x118);
    uVar1 = *(undefined8 *)(lVar4 + 0x120);
    fVar6 = *(float *)(param_1 + 0x114);
    dVar2 = (double)(int)((ulonglong)uVar1 >> 0x20);
    if ((fVar6 != -3.4028235e+38) || (NAN(fVar6))) {
      dVar8 = (double)fVar6 * ((double)(int)uVar1 / dVar2);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar8;
      auVar9 = roundpd(auVar9,auVar9,1);
      dVar7 = auVar9._0_8_;
      dVar8 = dVar8 - dVar7;
      if (2147483647.0 <= dVar7) {
        dVar7 = 2147483647.0;
      }
      if (dVar7 <= -2147483648.0) {
        dVar7 = -2147483648.0;
      }
      fVar6 = (float)dVar8;
      if (0.99999994 <= fVar6) {
        fVar6 = 0.99999994;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      fVar6 = fVar6 + 0.5 + -0.5;
      if (0.99999994 <= fVar6) {
        fVar6 = 0.99999994;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      FUN_144a808d5(local_58,CONCAT44(fVar6,(int)dVar7),uVar1,uVar3);
      *(undefined4 *)(param_1 + 0x104) = local_58[0];
      *(undefined4 *)(param_1 + 0x114) = 0xff7fffff;
    }
    fVar6 = *(float *)(param_1 + 0x118);
    if ((fVar6 != -3.4028235e+38) || (NAN(fVar6))) {
      dVar2 = (double)fVar6 * ((double)(int)uVar1 / dVar2);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = dVar2;
      auVar9 = roundpd(auVar10,auVar10,1);
      dVar8 = auVar9._0_8_;
      dVar2 = dVar2 - dVar8;
      if (2147483647.0 <= dVar8) {
        dVar8 = 2147483647.0;
      }
      if (dVar8 <= -2147483648.0) {
        dVar8 = -2147483648.0;
      }
      fVar6 = (float)dVar2;
      if (0.99999994 <= fVar6) {
        fVar6 = 0.99999994;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      fVar6 = fVar6 + 0.5 + -0.5;
      if (0.99999994 <= fVar6) {
        fVar6 = 0.99999994;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      FUN_144a808d5(local_58,CONCAT44(fVar6,(int)dVar8),uVar1,uVar3);
      *(undefined4 *)(param_1 + 0x108) = local_58[0];
      *(undefined4 *)(param_1 + 0x118) = 0xff7fffff;
    }
    lVar4 = FUN_140007850(param_1 + 0x120);
    if ((lVar4 != 0) && (*(longlong *)(param_1 + 0xf8) == 0)) {
      lVar4 = FUN_140007850(param_1 + 0x120);
      if (lVar4 != 0) {
        lVar5 = FUN_1458d5f9a();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          lVar4 = *(longlong *)(lVar4 + 0x650);
          if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar4);
          }
          *(longlong *)(param_1 + 0xf8) = lVar4;
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944b3f0 FUN_14944b3f0 body=290 status=ok
// SIG undefined FUN_14944b3f0(void)

undefined1 * FUN_14944b3f0(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  
  uVar2 = FUN_14073751e();
  lVar3 = FUN_144a78ede(param_1,uVar2);
  uVar2 = *(undefined8 *)(lVar3 + 0x118);
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    dVar7 = 0.0;
  }
  else {
    fVar5 = (float)FUN_1490631d0();
    dVar7 = (double)fVar5;
  }
  dVar9 = ((double)(int)uVar2 * dVar7) / (double)(int)((ulonglong)uVar2 >> 0x20);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar9;
  auVar8 = roundpd(auVar8,auVar8,1);
  dVar7 = auVar8._0_8_;
  dVar9 = dVar9 - dVar7;
  if (2147483647.0 <= dVar7) {
    dVar7 = 2147483647.0;
  }
  if (dVar7 <= -2147483648.0) {
    dVar7 = -2147483648.0;
  }
  iVar1 = (int)dVar9;
  fVar6 = (float)dVar9 - (float)iVar1;
  fVar5 = fVar6;
  if (0.99999994 <= fVar6) {
    fVar5 = 0.99999994;
  }
  fVar5 = (float)(~-(uint)(0.0 < fVar6) & (uint)fVar6 | (uint)fVar5 & -(uint)(0.0 < fVar6)) + 0.5 +
          -0.5;
  if (0.99999994 <= fVar5) {
    fVar5 = 0.99999994;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  iVar4 = (uint)((char)*(undefined8 *)(param_1 + 0x98) != '\x01') +
          (int)((ulonglong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
  *param_2 = 1;
  *(int *)(param_2 + 4) = iVar4;
  param_2[8] = 0;
  *(int *)(param_2 + 0xc) = iVar1 + iVar4 + (int)dVar7 + (int)(fVar5 + 0.5) + 1;
  param_2[0x10] = 1;
  return param_2;
}



// FUNCTION 14944b512 FUN_14944b512 body=238 status=ok
// SIG undefined FUN_14944b512(void)

void FUN_14944b512(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144757f48(param_1,8);
  cVar1 = FUN_145c40fca(param_1,1);
  if (cVar1 != '\0') {
    if ((char)param_3 != '\0') {
      uVar2 = FUN_14073751e();
      lVar3 = FUN_144a78ede(param_1,uVar2);
      uVar4 = *(ulonglong *)(param_1 + 0x98) & 0xff;
      uVar5 = 0;
      if (uVar4 != 2) {
        local_68 = *(undefined8 *)(lVar3 + 0x118);
        local_48 = *param_2;
        uStack_44 = param_2[1];
        uStack_40 = param_2[2];
        uStack_3c = param_2[3];
        FUN_14944b601(&local_34,&local_48,param_1 + 0xf8,
                      (uint)((int)uVar4 != 1) + (int)(*(ulonglong *)(param_1 + 0x98) >> 0x20));
        uVar5 = local_34;
      }
      *(undefined4 *)(param_1 + 0x100) = uVar5;
    }
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    FUN_147575be8(param_1,&local_58,param_3,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944b601 FUN_14944b601 body=558 status=ok
// SIG undefined FUN_14944b601(void)

int * FUN_14944b601(int *param_1,undefined8 *param_2,longlong *param_3,int param_4,longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  fVar8 = *(float *)((longlong)param_3 + 0x14);
  uVar2 = *param_2;
  lVar3 = param_2[1];
  if (*param_3 == 0) {
    dVar13 = 0.0;
  }
  else {
    fVar7 = (float)FUN_1490631d0();
    dVar13 = (double)fVar7;
  }
  fVar7 = (float)((ulonglong)uVar2 >> 0x20);
  auVar15 = roundps(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7),1);
  fVar7 = (fVar7 - auVar15._0_4_) + 0.5 + -0.5;
  auVar11 = ZEXT416((uint)fVar7);
  if (0.99999994 <= fVar7) {
    auVar11 = ZEXT416(0x3f7fffff);
  }
  if (auVar11._0_4_ <= 0.0) {
    auVar6._12_4_ = 0;
    auVar6._0_12_ = auVar11._4_12_;
    auVar11 = auVar6 << 0x20;
  }
  if (ABS(fVar8) <= 1e-08) {
    dVar14 = 1.0;
  }
  else {
    dVar14 = (double)fVar8;
  }
  dVar9 = (((double)((longlong)(((int)uVar2 - param_4) + (int)auVar15._0_4_) * (lVar3 >> 0x20)) +
           (double)(int)((ulonglong)lVar3 >> 0x20) * (double)auVar11._0_4_) / (double)(int)lVar3) *
          dVar14;
  auVar5._4_8_ = (ulonglong)dVar9 >> 0x20;
  auVar5._0_4_ = (float)dVar9;
  lVar3 = param_3[2];
  iVar1 = *(int *)((longlong)param_3 + 0xc);
  dVar9 = (double)(int)((ulonglong)param_5 >> 0x20);
  dVar4 = (double)(int)param_5;
  fVar8 = (float)FUN_1447c7e44(auVar5._0_8_);
  dVar10 = ((double)fVar8 * dVar4) / dVar9;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar10;
  auVar15 = roundpd(auVar15,auVar15,1);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = (double)(int)(dVar10 - auVar15._0_8_) + dVar10;
  auVar11 = roundpd(auVar11,auVar11,1);
  dVar10 = auVar11._0_8_;
  if (2147483647.0 <= dVar10) {
    dVar10 = 2147483647.0;
  }
  if (dVar10 <= -2147483648.0) {
    dVar10 = -2147483648.0;
  }
  dVar9 = ((double)(float)(dVar13 - (((double)((param_5 >> 0x20) *
                                              ((longlong)iVar1 + (longlong)(int)lVar3)) +
                                     (double)((ulonglong)dVar9 & 0x8000000000000000)) / dVar4) /
                                    dVar14) * dVar4) / dVar9;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = dVar9;
  auVar11 = roundpd(auVar16,auVar16,1);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = (double)(int)(dVar9 - auVar11._0_8_) + dVar9;
  auVar11 = roundpd(auVar12,auVar12,1);
  dVar13 = auVar11._0_8_;
  if (2147483647.0 <= dVar13) {
    dVar13 = 2147483647.0;
  }
  if (dVar13 <= -2147483648.0) {
    dVar13 = -2147483648.0;
  }
  *param_1 = ((int)dVar10 + (int)param_3[1]) % (int)dVar13;
  return param_1;
}



// FUNCTION 14944b830 FUN_14944b830 body=262 status=ok
// SIG undefined FUN_14944b830(void)

longlong FUN_14944b830(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined4 *)(param_1 + 0x100);
  uVar2 = FUN_14073751e();
  lVar3 = FUN_144a78ede(param_1,uVar2);
  uVar5 = *(ulonglong *)(param_1 + 0x98) & 0xff;
  if (uVar5 == 2) {
    local_2c = 0;
  }
  else {
    local_68 = *(undefined8 *)(lVar3 + 0x118);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    FUN_14944b601(&local_2c,&local_48,param_1 + 0xf8,
                  (uint)((int)uVar5 != 1) + (int)(*(ulonglong *)(param_1 + 0x98) >> 0x20));
  }
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  lVar3 = FUN_1475759e6(param_1,&local_58,param_3);
  if (lVar3 != 0) {
    lVar4 = FUN_145ba3326();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (lVar6 = lVar3,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
       != lVar4 + 0x30)) {
      lVar6 = 0;
    }
    *(undefined4 *)(lVar6 + 0x100) = local_2c;
  }
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944b938 FUN_14944b938 body=846 status=ok
// SIG undefined FUN_14944b938(void)

void FUN_14944b938(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  double dVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  float fVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  float fVar20;
  double dVar21;
  undefined1 unaff_XMM8 [16];
  
  FUN_147539898();
  uVar4 = FUN_14073751e();
  lVar5 = FUN_144a78ede(param_1,uVar4);
  lVar5 = *(longlong *)(lVar5 + 0x118);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  fVar16 = ABS(*(float *)(param_1 + 0x10c));
  if (fVar16 <= 1e-08) {
    dVar14 = 1.0;
  }
  else {
    dVar14 = (double)*(float *)(param_1 + 0x10c);
  }
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    dVar17 = 0.0;
  }
  else {
    fVar16 = (float)FUN_1490631d0(*(longlong *)(param_1 + 0xf8),fVar16,0);
    dVar17 = (double)fVar16;
  }
  dVar13 = (double)(int)((ulonglong)lVar5 >> 0x20);
  dVar2 = (double)(int)lVar5;
  dVar17 = (double)(float)(dVar17 - (((double)(((longlong)*(int *)(param_1 + 0x104) +
                                               (longlong)*(int *)(param_1 + 0x108)) *
                                              (lVar5 >> 0x20)) +
                                     (double)((ulonglong)dVar13 & 0x8000000000000000)) / dVar2) /
                                    dVar14);
  dVar19 = (dVar2 * dVar17) / dVar13;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = dVar19;
  auVar18 = roundpd(unaff_XMM8,auVar18,1);
  dVar21 = auVar18._0_8_;
  dVar19 = dVar19 - dVar21;
  if (2147483647.0 <= dVar21) {
    dVar21 = 2147483647.0;
  }
  if (dVar21 <= -2147483648.0) {
    dVar21 = -2147483648.0;
  }
  iVar6 = (int)dVar19;
  iVar8 = (int)dVar21 + iVar6;
  if (1 < iVar8) {
    iVar7 = (uint)((char)uVar4 != '\x01') + (int)((ulonglong)uVar4 >> 0x20);
    iVar10 = (int)((ulonglong)uVar1 >> 0x20) + -1 + (uint)((char)uVar1 == '\x01');
    fVar20 = (float)dVar19 - (float)iVar6;
    fVar16 = fVar20;
    if (0.99999994 <= fVar20) {
      fVar16 = 0.99999994;
    }
    fVar16 = (float)(~-(uint)(0.0 < fVar20) & (uint)fVar20 | (uint)fVar16 & -(uint)(0.0 < fVar20)) +
             0.5 + -0.5;
    dVar13 = ((double)(float)(dVar17 - (((double)((ulonglong)dVar13 & 0x8000000000000000) +
                                        (double)((lVar5 >> 0x20) *
                                                (longlong)*(int *)(param_1 + 0x100))) / dVar2) /
                                       dVar14) * dVar2) / dVar13;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = dVar13;
    auVar18 = roundpd(auVar15,auVar15,1);
    dVar14 = auVar18._0_8_;
    dVar13 = dVar13 - dVar14;
    if (2147483647.0 <= dVar14) {
      dVar14 = 2147483647.0;
    }
    if (dVar14 <= -2147483648.0) {
      dVar14 = -2147483648.0;
    }
    iVar6 = (int)dVar13;
    if (0.99999994 <= fVar16) {
      fVar16 = 0.99999994;
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    fVar11 = (float)dVar13 - (float)iVar6;
    fVar20 = fVar11;
    if (0.99999994 <= fVar11) {
      fVar20 = 0.99999994;
    }
    fVar20 = (float)(~-(uint)(0.0 < fVar11) & (uint)fVar11 | (uint)fVar20 & -(uint)(0.0 < fVar11)) +
             0.5 + -0.5;
    if (0.99999994 <= fVar20) {
      fVar20 = 0.99999994;
    }
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    bVar9 = true;
    for (fVar11 = 0.0; (iVar7 < iVar10 || ((iVar7 == iVar10 && (fVar11 < 0.0))));
        fVar11 = fVar11 - auVar18._0_4_) {
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_14753e8f2(param_2,iVar3);
      }
      *(int *)(*param_2 + (longlong)iVar3 * 4) = iVar7;
      if (bVar9) {
        fVar11 = fVar11 + fVar20;
        fVar12 = fVar11 + fVar11;
        iVar3 = (int)dVar14 + iVar6;
      }
      else {
        fVar11 = fVar11 + fVar16;
        fVar12 = fVar11 + fVar11;
        iVar3 = iVar8;
      }
      iVar7 = iVar7 + iVar3 + ((int)ROUND(fVar12 + -0.5) >> 1);
      auVar18 = roundss(ZEXT816(0),ZEXT416((uint)fVar11),9);
      bVar9 = false;
    }
  }
  return;
}



// FUNCTION 14944bc86 FUN_14944bc86 body=205 status=ok
// SIG undefined FUN_14944bc86(void)

undefined4 FUN_14944bc86(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [56];
  longlong local_58;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  FUN_14944c8dc(local_90,param_1 + 0xf8);
  local_48 = (uint)((char)uVar1 != '\x01') + (int)((ulonglong)uVar1 >> 0x20);
  local_44 = (uint)((char)uVar2 == '\x01') + (int)((ulonglong)uVar2 >> 0x20);
  uVar3 = FUN_14944bd54(local_90,param_2,param_3,param_4);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944bd54 FUN_14944bd54 body=870 status=ok
// SIG undefined FUN_14944bd54(void)

void FUN_14944bd54(longlong param_1,float param_2,ulonglong param_3,longlong param_4)

{
  uint uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  double dVar17;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  uVar4 = *(int *)(param_1 + 0x4c) - 1;
  uVar7 = param_3;
  if ((int)uVar4 <= (int)(uint)param_3) {
    if (0.0 <= (float)(param_3 >> 0x20)) {
      uVar7 = (ulonglong)uVar4;
    }
    if (uVar4 != (uint)param_3) {
      uVar7 = (ulonglong)uVar4;
    }
    param_3 = uVar7 & 0xffffffff;
  }
  dVar2 = (double)(int)param_4;
  dVar11 = (double)(int)((ulonglong)param_4 >> 0x20);
  iVar6 = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc);
  uVar4 = (uint)param_3;
  if ((int)uVar4 <= (int)uVar1) {
    if ((float)(uVar7 >> 0x20) <= 0.0) {
      uVar7 = (ulonglong)uVar1;
    }
    if (uVar1 != uVar4) {
      uVar7 = (ulonglong)uVar1;
    }
    uVar4 = (uint)uVar7;
  }
  param_4 = param_4 >> 0x20;
  fVar16 = (float)(uVar7 >> 0x20);
  auVar14 = roundps(unaff_XMM10,ZEXT416((uint)fVar16),1);
  fVar9 = (float)((double)param_2 -
                 ((double)(iVar6 * param_4) + (double)((ulonglong)dVar11 & 0x8000000000000000)) /
                 dVar2);
  fVar16 = (fVar16 - auVar14._0_4_) + 0.5 + -0.5;
  auVar13 = ZEXT416((uint)fVar16);
  if (0.99999994 <= fVar16) {
    auVar13 = ZEXT416(0x3f7fffff);
  }
  if (auVar13._0_4_ <= 0.0) {
    auVar3._12_4_ = 0;
    auVar3._0_12_ = auVar13._4_12_;
    auVar13 = auVar3 << 0x20;
  }
  if (ABS(*(float *)(param_1 + 0x14)) <= 1e-08) {
    dVar8 = 1.0;
  }
  else {
    dVar8 = (double)*(float *)(param_1 + 0x14);
  }
  dVar8 = dVar8 * ((double)auVar13._0_4_ + (double)(int)((uVar4 - uVar1) + (int)auVar14._0_4_));
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar8;
  auVar14 = roundpd(auVar14,auVar14,1);
  dVar17 = auVar14._0_8_;
  dVar8 = dVar8 - dVar17;
  if (2147483647.0 <= dVar17) {
    dVar17 = 2147483647.0;
  }
  if (dVar17 <= -2147483648.0) {
    dVar17 = -2147483648.0;
  }
  fVar16 = (float)dVar8;
  if (0.99999994 <= fVar16) {
    fVar16 = 0.99999994;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  fVar16 = fVar16 + 0.5 + -0.5;
  if (0.99999994 <= fVar16) {
    fVar16 = 0.99999994;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (0.0 < fVar9) {
    dVar8 = ((double)param_2 * dVar2) / dVar11;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = dVar8;
    auVar14 = roundpd(auVar13,auVar13,1);
    dVar12 = auVar14._0_8_;
    dVar8 = dVar8 - dVar12;
    iVar5 = (int)dVar8;
    fVar10 = (float)dVar8 - (float)iVar5;
    fVar15 = fVar10;
    if (0.99999994 <= fVar10) {
      fVar15 = 0.99999994;
    }
    fVar15 = (float)(~-(uint)(0.0 < fVar10) & (uint)fVar10 | (uint)fVar15 & -(uint)(0.0 < fVar10)) +
             0.5 + -0.5;
    if (2147483647.0 <= dVar12) {
      dVar12 = 2147483647.0;
    }
    if (dVar12 <= -2147483648.0) {
      dVar12 = -2147483648.0;
    }
    if (0.99999994 <= fVar15) {
      fVar15 = 0.99999994;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    if (((int)(fVar15 + 0.5) + (int)dVar12 + iVar5 + 1 <
         (int)((iVar6 + *(int *)(param_1 + 0x4c)) - uVar1)) ||
       (0.0001 < ABS(((float)(((double)(*(int *)(param_1 + 8) * param_4) +
                              (double)((ulonglong)dVar11 & 0x8000000000000000)) / dVar2) +
                     (float)(((double)((int)dVar17 * param_4) + (double)fVar16 * dVar11) / dVar2)) -
                     fVar9))) {
      FUN_1447c7e44();
    }
  }
  return;
}



// FUNCTION 14944c0be FUN_14944c0be body=366 status=ok
// SIG undefined FUN_14944c0be(void)

longlong * FUN_14944c0be(longlong *param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  float fVar9;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 800))();
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_145ba3326();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) goto LAB_14944c0e2;
  }
  plVar1 = (longlong *)0x0;
LAB_14944c0e2:
  uVar2 = FUN_14073751e();
  lVar3 = FUN_144a78ede(param_1,uVar2);
  dVar6 = ((double)(int)*(undefined8 *)(lVar3 + 0x118) * (double)*(float *)(param_3 + 0x6bc)) /
          (double)(int)((ulonglong)*(undefined8 *)(lVar3 + 0x118) >> 0x20);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar6;
  auVar8 = roundpd(auVar8,auVar8,1);
  dVar7 = auVar8._0_8_;
  dVar6 = dVar6 - dVar7;
  if (2147483647.0 <= dVar7) {
    dVar7 = 2147483647.0;
  }
  if (dVar7 <= -2147483648.0) {
    dVar7 = -2147483648.0;
  }
  iVar4 = (int)dVar6;
  fVar5 = (float)dVar6 - (float)iVar4;
  fVar9 = fVar5;
  if (0.99999994 <= fVar5) {
    fVar9 = 0.99999994;
  }
  fVar9 = (float)(~-(uint)(0.0 < fVar5) & (uint)fVar5 | (uint)fVar9 & -(uint)(0.0 < fVar5)) + 0.5 +
          -0.5;
  if (0.99999994 <= fVar9) {
    fVar9 = 0.99999994;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  (**(code **)(*plVar1 + 0x308))
            (plVar1,param_1 + 0x20,param_2,(int)(fVar9 + 0.5) + (int)dVar7 + iVar4 + 1,0xffffffff);
  lVar3 = *(longlong *)(param_3 + 0x650);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  plVar1[0x1f] = lVar3;
  (**(code **)(*param_1 + 0x318))(param_1,plVar1);
  return plVar1;
}



// FUNCTION 14944c22c FUN_14944c22c body=312 status=ok
// SIG undefined FUN_14944c22c(void)

undefined8 * FUN_14944c22c(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_c8 [40];
  undefined **local_a0;
  undefined1 local_98;
  uint local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int iStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  local_90 = local_90 & 0xffffff00;
  local_a0 = &PTR_FUN_14bcce450;
  iVar1 = (uint)((char)*(undefined8 *)(param_3 + 0xa0) == '\x01') +
          (int)((ulonglong)*(undefined8 *)(param_3 + 0xa0) >> 0x20);
  iVar2 = (uint)((char)*(undefined8 *)(param_3 + 0x98) != '\x01') +
          (int)((ulonglong)*(undefined8 *)(param_3 + 0x98) >> 0x20);
  FUN_14944c8dc(&local_80,param_3 + 0xf8);
  *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 3;
  *(undefined1 *)(param_2 + 1) = local_98;
  *(undefined4 *)(param_2 + 3) = uStack_88;
  param_2[2] = CONCAT44(uStack_8c,local_90);
  *param_2 = &PTR_FUN_14bcce450;
  param_2[4] = local_80;
  local_38 = iVar2;
  iStack_34 = iVar1;
  if ((local_80 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined4 *)((longlong)param_2 + 0x34) = uStack_6c;
  *(undefined4 *)(param_2 + 7) = uStack_68;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_64;
  *(undefined4 *)(param_2 + 8) = uStack_60;
  param_2[5] = local_78;
  param_2[6] = CONCAT44(uStack_6c,uStack_70);
  *(undefined4 *)(param_2 + 9) = local_58;
  *(undefined4 *)((longlong)param_2 + 0x4c) = uStack_54;
  *(undefined4 *)(param_2 + 10) = uStack_50;
  *(undefined4 *)((longlong)param_2 + 0x54) = uStack_4c;
  param_2[0xb] = local_48;
  *(undefined4 *)(param_2 + 0xc) = local_40;
  *(undefined4 *)((longlong)param_2 + 100) = local_3c;
  param_2[0xd] = CONCAT44(iStack_34,local_38);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944c36e FUN_14944c36e body=75 status=ok
// SIG undefined FUN_14944c36e(void)

bool FUN_14944c36e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14944c3a7;
    }
  }
  lVar2 = 0;
LAB_14944c3a7:
  lVar1 = FUN_145ba3326();
  return lVar2 == lVar1;
}



// FUNCTION 14944c3bf FUN_14944c3bf body=174 status=ok
// SIG undefined FUN_14944c3bf(void)

undefined8 FUN_14944c3bf(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba3326();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944c4c8 FUN_14944c4c8 body=132 status=ok
// SIG undefined FUN_14944c4c8(void)

void FUN_14944c4c8(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0x100),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
    return;
  }
  return;
}



// FUNCTION 14944c54c FUN_14944c54c body=106 status=ok
// SIG undefined FUN_14944c54c(void)

void FUN_14944c54c(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0x100);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944c5b8 FUN_14944c5b8 body=95 status=ok
// SIG undefined FUN_14944c5b8(void)

void FUN_14944c5b8(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x108);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x100) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0x100) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x108);
  }
  *(int *)(param_1 + 0x108) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0x100);
  return;
}



// FUNCTION 14944c624 FUN_14944c624 body=62 status=ok
// SIG undefined FUN_14944c624(void)

undefined8 * FUN_14944c624(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bcce450;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14944c662 FUN_14944c662 body=57 status=ok
// SIG undefined FUN_14944c662(void)

void FUN_14944c662(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc16ee8 == 0) {
    uVar1 = FUN_14596ed69();
    DAT_14cc16ee8 = FUN_140002ddd(FUN_14672fabd,uVar1,L"MovieSceneGeometryCacheSectionTemplate");
  }
  return;
}



// FUNCTION 14944c6b0 FUN_14944c6b0 body=71 status=ok
// SIG undefined FUN_14944c6b0(void)

void FUN_14944c6b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  FUN_1446f8bcc(param_2 + 7,0);
  *(undefined1 **)((longlong)param_2 + 0x1c) = &DAT_ff7fffffff7fffff;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0x3f800000;
  *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) & 0xfe;
  return;
}



// FUNCTION 14944c6f8 FUN_14944c6f8 body=71 status=ok
// SIG undefined FUN_14944c6f8(void)

void FUN_14944c6f8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  FUN_1446f8bcc(param_2 + 7,0);
  *(undefined1 **)((longlong)param_2 + 0x1c) = &DAT_ff7fffffff7fffff;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0x3f800000;
  *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) & 0xfe;
  return;
}



// FUNCTION 14944c764 FUN_14944c764 body=54 status=ok
// SIG undefined FUN_14944c764(void)

undefined1 FUN_14944c764(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14944c87c(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 14944c7c2 FUN_14944c7c2 body=59 status=ok
// SIG undefined FUN_14944c7c2(void)

undefined8 FUN_14944c7c2(longlong *param_1)

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



// FUNCTION 14944c808 FUN_14944c808 body=38 status=ok
// SIG undefined FUN_14944c808(void)

void FUN_14944c808(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    if (*(longlong *)(param_2 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14944c87c FUN_14944c87c body=94 status=ok
// SIG undefined FUN_14944c87c(void)

longlong * FUN_14944c87c(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *param_2;
    }
  }
  *param_1 = lVar5;
  lVar5 = param_2[2];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar3 = param_2[3];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar4 = param_2[4];
  param_1[1] = param_2[1];
  param_1[2] = lVar5;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(int *)(param_1 + 3) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(int *)(param_1 + 4) = (int)lVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x2c);
  lVar5 = param_2[6];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x34);
  *(int *)(param_1 + 5) = (int)param_2[5];
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  *(int *)(param_1 + 6) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
  FUN_144a787a6(param_1 + 7,param_2 + 7);
  return param_1;
}



// FUNCTION 14944c8dc FUN_14944c8dc body=148 status=ok
// SIG undefined FUN_14944c8dc(void)

longlong * FUN_14944c8dc(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar2 = param_2[1];
  lVar5 = param_2[2];
  lVar6 = param_2[3];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar7 = param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 3) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(int *)(param_1 + 4) = (int)lVar7;
  param_1[1] = lVar2;
  param_1[2] = lVar5;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  lVar2 = param_2[6];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x34);
  *(int *)(param_1 + 5) = (int)param_2[5];
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  *(int *)(param_1 + 6) = (int)lVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar4;
  param_1[7] = 0;
  iVar1 = (int)param_2[8];
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



// FUNCTION 14944c9a4 FUN_14944c9a4 body=76 status=ok
// SIG undefined FUN_14944c9a4(void)

undefined8 FUN_14944c9a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14944c87c(param_2,param_3);
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 14944ca18 FUN_14944ca18 body=59 status=ok
// SIG undefined FUN_14944ca18(void)

undefined8 FUN_14944ca18(longlong *param_1)

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



// FUNCTION 14944ca5e FUN_14944ca5e body=38 status=ok
// SIG undefined FUN_14944ca5e(void)

void FUN_14944ca5e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    if (*(longlong *)(param_2 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14944cad2 FUN_14944cad2 body=82 status=ok
// SIG undefined FUN_14944cad2(void)

undefined8 * FUN_14944cad2(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_1446f8bcc(param_1 + 7,0);
  *(undefined1 **)((longlong)param_1 + 0x1c) = &DAT_ff7fffffff7fffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfe;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 14944cb92 FUN_14944cb92 body=121 status=ok
// SIG undefined FUN_14944cb92(void)

undefined8 FUN_14944cb92(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + 8 + lVar1) = *(undefined1 *)(param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x10 + lVar1) = *(undefined8 *)(param_3 + 0x10 + lVar1);
      *(undefined4 *)(param_2 + 0x18 + lVar1) = *(undefined4 *)(param_3 + 0x18 + lVar1);
      FUN_14944c87c(param_2 + 0x20 + lVar1,param_3 + 0x20 + lVar1);
      *(undefined8 *)(param_2 + 0x68 + lVar1) = *(undefined8 *)(param_3 + 0x68 + lVar1);
      lVar1 = lVar1 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14944cc34 FUN_14944cc34 body=59 status=ok
// SIG undefined FUN_14944cc34(void)

undefined8 FUN_14944cc34(longlong *param_1)

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



// FUNCTION 14944cc7a FUN_14944cc7a body=48 status=ok
// SIG undefined FUN_14944cc7a(void)

void FUN_14944cc7a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14bcce450;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 14944ccfa FUN_14944ccfa body=62 status=ok
// SIG undefined FUN_14944ccfa(void)

undefined8 * FUN_14944ccfa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bccedc0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14944cd38 FUN_14944cd38 body=407 status=ok
// SIG undefined FUN_14944cd38(void)

longlong FUN_14944cd38(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
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
  lVar4 = FUN_144a6c4d8();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
      != lVar4 + 0x30)) {
    lVar4 = FUN_1458d5f9a();
    uVar2 = local_60;
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30 &&
        (*(longlong *)(param_1 + 0x650) != 0)))) goto LAB_14944cd9a;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x240);
    lVar4 = param_1 + 0x250;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = lVar4;
    if (*(int *)(param_1 + 0x268) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = *(int *)(param_1 + 0x268);
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_78 = plVar1;
    if ((local_60._4_4_ != iVar6) || (uStack_48 != lVar4)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar2;
      do {
        param_1 = *(longlong *)(*local_78 + (longlong)iVar3 * 0x10);
        if (param_1 != 0) {
          lVar5 = FUN_1458d5f9a();
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) goto LAB_14944cd9a;
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != plVar1 ||
               (CONCAT44(uStack_64,uStack_68) != lVar4 || local_60._4_4_ != iVar6));
    }
  }
  local_60 = uVar2;
  param_1 = 0;
LAB_14944cd9a:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14944ced0 FUN_14944ced0 body=34 status=ok
// SIG undefined FUN_14944ced0(void)

undefined8 FUN_14944ced0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14944cef2 FUN_14944cef2 body=42 status=ok
// SIG undefined FUN_14944cef2(void)

undefined8 * FUN_14944cef2(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_149064db0(param_3);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 3;
  *param_2 = &PTR_FUN_14bccede8;
  *(undefined1 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 14944cf1c FUN_14944cf1c body=34 status=ok
// SIG undefined FUN_14944cf1c(void)

undefined8 FUN_14944cf1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14944cf50 FUN_14944cf50 body=36 status=ok
// SIG undefined FUN_14944cf50(void)

undefined8 FUN_14944cf50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14944cf90 FUN_14944cf90 body=93 status=ok
// SIG undefined FUN_14944cf90(void)

void FUN_14944cf90(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bccee00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14944cfee FUN_14944cfee body=123 status=ok
// SIG undefined FUN_14944cfee(void)

void FUN_14944cfee(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bccee00;
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



// FUNCTION 14944d06a FUN_14944d06a body=21 status=ok
// SIG undefined FUN_14944d06a(void)

undefined8 FUN_14944d06a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14944d080 FUN_14944d080 body=90 status=ok
// SIG undefined FUN_14944d080(void)

void FUN_14944d080(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x58,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14bccedc0;
  FUN_14944d0da(param_1 + 1,param_2 + 8);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  return;
}



// FUNCTION 14944d0da FUN_14944d0da body=109 status=ok
// SIG undefined FUN_14944d0da(void)

longlong * FUN_14944d0da(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar1 = param_2[1];
  lVar2 = param_2[2];
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x1c);
  *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
  *(undefined8 *)((longlong)param_1 + 0x1c) = uVar3;
  param_1[1] = lVar1;
  param_1[2] = lVar2;
  lVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = lVar1;
  param_1[7] = 0;
  param_1[7] = param_2[7];
  param_2[7] = 0;
  *(int *)(param_1 + 8) = (int)param_2[8];
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  param_2[8] = 0;
  return param_1;
}



// FUNCTION 14944d148 FUN_14944d148 body=167 status=ok
// SIG undefined FUN_14944d148(void)

void FUN_14944d148(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined1 auStack_138 [32];
  undefined1 local_118 [248];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1468200e0(local_118);
  FUN_14906797c(param_2,local_118);
  uVar1 = FUN_140209a84(local_118);
  *(float *)(param_1 + 0xe4) = (float)uVar1 * 9.536743e-07 + *(float *)(param_1 + 0xe4);
  FUN_1400fd2aa(local_118);
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944d1f0 FUN_14944d1f0 body=324 status=ok
// SIG undefined FUN_14944d1f0(void)

void FUN_14944d1f0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  void *_Dst;
  int iVar3;
  undefined1 auStack_88 [40];
  void *local_60;
  uint local_54;
  uint *local_50;
  void **local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_54 = param_2;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x15));
  if ((int)param_1[0xc] != *(int *)((longlong)param_1 + 0x8c)) {
    plVar2 = param_1 + 0x12;
    if ((longlong *)param_1[0x13] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x13];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[0x14] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar1 = param_1[0xb];
      do {
        if (*(uint *)(lVar1 + (longlong)iVar3 * 0x18) == param_2) goto LAB_14944d307;
        iVar3 = *(int *)(lVar1 + (longlong)iVar3 * 0x18 + 0x10);
      } while (iVar3 != -1);
    }
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  _Dst = (void *)FUN_14001cc68(200);
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  memset(_Dst,0,0x99);
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa9) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb1) = 0;
  local_60 = _Dst;
  (**(code **)(*param_1 + 0x50))(param_1,param_2,0,_Dst);
  local_50 = &local_54;
  local_48 = &local_60;
  FUN_14944d8f0(param_1 + 0xb,local_3c);
  FUN_14944d148(param_1,local_60);
LAB_14944d307:
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x15));
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944d336 FUN_14944d336 body=74 status=ok
// SIG undefined FUN_14944d336(void)

void FUN_14944d336(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 - *(int *)(param_1 + 0xd4);
  if (iVar1 != 0) {
    iVar2 = -iVar1;
    if (-iVar1 < 0) {
      iVar2 = iVar1;
    }
    if ((*(int *)(param_1 + 0xd8) <= iVar2) && (*(int *)(param_1 + 0x30) == 0)) {
      FUN_14944d1f0(param_1,param_2);
    }
    *(int *)(param_1 + 0xd4) = param_2;
    *(undefined1 *)(param_1 + 0xe9) = 1;
  }
  return;
}



// FUNCTION 14944d380 FUN_14944d380 body=334 status=ok
// SIG undefined FUN_14944d380(void)

void FUN_14944d380(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
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
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
    FUN_14944dd1a(param_2);
  }
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      iVar2 = iStack_5c;
      lVar1 = *local_78;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_14944dd7a(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) =
           *(undefined8 *)(lVar1 + (longlong)iVar2 * 0x18 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14944d4d0 FUN_14944d4d0 body=287 status=ok
// SIG undefined FUN_14944d4d0(void)

void FUN_14944d4d0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  ulonglong local_38;
  ulonglong *local_30;
  undefined8 **local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_2;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar5 != -1) {
      do {
        puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 0x18);
        if (*puVar2 == param_2) {
          if ((puVar2 != (ulonglong *)0x0) && (puVar2 + 1 != (ulonglong *)0x0)) {
            LOCK();
            piVar1 = (int *)(puVar2[1] + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            goto LAB_14944d5d2;
          }
          break;
        }
        iVar5 = (int)puVar2[2];
      } while (iVar5 != -1);
    }
  }
  local_40 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *local_40 = &PTR_FUN_149e002e8;
  *(undefined4 *)(local_40 + 1) = 0;
  *local_40 = &PTR_FUN_14bccf708;
  local_40[2] = param_3;
  LOCK();
  *(int *)(local_40 + 1) = *(int *)(local_40 + 1) + 1;
  UNLOCK();
  local_28 = &local_40;
  local_30 = &local_38;
  FUN_14944de00((longlong *)(param_1 + 0x18),local_1c);
LAB_14944d5d2:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944d5f0 FUN_14944d5f0 body=244 status=ok
// SIG undefined FUN_14944d5f0(void)

void FUN_14944d5f0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong *puVar7;
  
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar6 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x58);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                             4);
    if (iVar5 != -1) {
      do {
        puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 0x18);
        if (*puVar2 == param_2) {
          puVar7 = puVar2 + 1;
          if (puVar7 == (ulonglong *)0x0 || puVar2 == (ulonglong *)0x0) {
            return;
          }
          iVar5 = (**(code **)(**(longlong **)(*puVar7 + 0x10) + 0x30))();
          *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) - iVar5;
          puVar3 = (undefined8 *)*puVar7;
          LOCK();
          piVar1 = (int *)(puVar3 + 1);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (puVar3 == (undefined8 *)0x0 || iVar5 != 1) {
            if (iVar5 != 1) {
              return;
            }
          }
          else {
            (**(code **)*puVar3)(puVar3,1);
          }
          FUN_14944e2fc((longlong *)(param_1 + 0x18),param_2);
          return;
        }
        iVar5 = (int)puVar2[2];
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 14944d76a FUN_14944d76a body=194 status=ok
// SIG undefined FUN_14944d76a(void)

undefined8 FUN_14944d76a(longlong param_1,ulonglong param_2,undefined4 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar5 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x58);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                             4);
    if (iVar6 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
            return 0;
          }
          plVar2 = *(longlong **)(puVar1[1] + 0x10);
          cVar3 = (**(code **)(*plVar2 + 0x28))(plVar2,param_3,param_4);
          if (cVar3 == '\0') {
            return 0;
          }
          return 1;
        }
        iVar6 = (int)puVar1[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14944d830 FUN_14944d830 body=38 status=ok
// SIG undefined FUN_14944d830(void)

undefined8 FUN_14944d830(undefined8 param_1,int param_2)

{
  FUN_145ec8c9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14944d856 FUN_14944d856 body=39 status=ok
// SIG undefined FUN_14944d856(void)

undefined8 * FUN_14944d856(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e002e8;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14944d87e FUN_14944d87e body=114 status=ok
// SIG undefined FUN_14944d87e(void)

void FUN_14944d87e(longlong *param_1,int param_2)

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



// FUNCTION 14944d8f0 FUN_14944d8f0 body=287 status=ok
// SIG undefined FUN_14944d8f0(void)

undefined4 * FUN_14944d8f0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14944da10(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_14944daf6(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14944db76(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944da10 FUN_14944da10 body=230 status=ok
// SIG undefined FUN_14944da10(void)

int * FUN_14944da10(longlong *param_1,int *param_2)

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



// FUNCTION 14944daf6 FUN_14944daf6 body=128 status=ok
// SIG undefined FUN_14944daf6(void)

undefined8 FUN_14944daf6(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_14944d87e(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14944db76 FUN_14944db76 body=419 status=ok
// SIG undefined FUN_14944db76(void)

void FUN_14944db76(longlong *param_1)

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



// FUNCTION 14944dd1a FUN_14944dd1a body=95 status=ok
// SIG undefined FUN_14944dd1a(void)

void FUN_14944dd1a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14944dd7a FUN_14944dd7a body=132 status=ok
// SIG undefined FUN_14944dd7a(void)

void FUN_14944dd7a(longlong param_1,int param_2)

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



// FUNCTION 14944de00 FUN_14944de00 body=326 status=ok
// SIG undefined FUN_14944de00(void)

undefined4 * FUN_14944de00(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14944df48(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_14944e02e(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14944e120(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944df48 FUN_14944df48 body=230 status=ok
// SIG undefined FUN_14944df48(void)

int * FUN_14944df48(longlong *param_1,int *param_2)

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



// FUNCTION 14944e02e FUN_14944e02e body=128 status=ok
// SIG undefined FUN_14944e02e(void)

undefined8 FUN_14944e02e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_14944e0ae((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14944e0ae FUN_14944e0ae body=114 status=ok
// SIG undefined FUN_14944e0ae(void)

void FUN_14944e0ae(longlong *param_1,int param_2)

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



// FUNCTION 14944e120 FUN_14944e120 body=474 status=ok
// SIG undefined FUN_14944e120(void)

void FUN_14944e120(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 14944e2fc FUN_14944e2fc body=132 status=ok
// SIG undefined FUN_14944e2fc(void)

void FUN_14944e2fc(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_14944e380(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14944e380 FUN_14944e380 body=87 status=ok
// SIG undefined FUN_14944e380(void)

void FUN_14944e380(longlong *param_1,int param_2)

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
  FUN_14944e0ae();
  return;
}



// FUNCTION 14944e3d8 FUN_14944e3d8 body=34 status=ok
// SIG undefined FUN_14944e3d8(void)

void FUN_14944e3d8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bccf7f0;
  return;
}



// FUNCTION 14944e3fa FUN_14944e3fa body=31 status=ok
// SIG undefined FUN_14944e3fa(void)

undefined8 FUN_14944e3fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14944e436 FUN_14944e436 body=93 status=ok
// SIG undefined FUN_14944e436(void)

void FUN_14944e436(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bccf780;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14944e494 FUN_14944e494 body=126 status=ok
// SIG undefined FUN_14944e494(void)

void FUN_14944e494(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bccf780;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014944e503. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14944e51e FUN_14944e51e body=21 status=ok
// SIG undefined FUN_14944e51e(void)

undefined8 FUN_14944e51e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14944e534 FUN_14944e534 body=29 status=ok
// SIG undefined FUN_14944e534(void)

undefined8 FUN_14944e534(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14944e55a FUN_14944e55a body=61 status=ok
// SIG undefined FUN_14944e55a(void)

void FUN_14944e55a(longlong param_1,undefined8 param_2)

{
  FUN_1490676e2();
  FUN_14906797c(param_1 + 0x98,param_2);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x16c) * 0x48);
  return;
}



// FUNCTION 14944e598 FUN_14944e598 body=116 status=ok
// SIG undefined FUN_14944e598(void)

undefined8
FUN_14944e598(longlong param_1,float param_2,undefined8 param_3,int *param_4,longlong *param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  dVar5 = (double)param_2 * *(double *)(param_1 + 0x58);
  dVar5 = dVar5 + dVar5 + -0.5;
  iVar1 = *(int *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 100) + -1;
  iVar4 = (int)((ulonglong)(longlong)ROUND(dVar5) >> 1) + iVar1;
  if (iVar3 <= iVar4) {
    iVar4 = iVar3;
  }
  if (iVar4 < iVar1) {
    iVar4 = iVar1;
  }
  if ((*param_4 == -1) || (iVar4 != *param_4)) {
    cVar2 = FUN_14944e60c(dVar5,iVar4,param_1 + 0x98);
    if (cVar2 != '\0') {
      *param_5 = param_1 + 0x98;
      *param_4 = iVar4;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14944e60c FUN_14944e60c body=81 status=ok
// SIG undefined FUN_14944e60c(void)

undefined8 FUN_14944e60c(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)FUN_14603991a();
  cVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14603991a();
                    /* WARNING: Could not recover jumptable at 0x00014944e650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,param_1,param_2,param_3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14944e65e FUN_14944e65e body=125 status=ok
// SIG undefined FUN_14944e65e(void)

bool FUN_14944e65e(longlong param_1,float param_2,undefined8 param_3,undefined8 param_4,int *param_5
                  ,undefined8 *param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  
  dVar10 = (double)param_2 * *(double *)(param_1 + 0x58);
  dVar10 = dVar10 + dVar10 + -0.5;
  iVar1 = *(int *)(param_1 + 0x60);
  iVar8 = *(int *)(param_1 + 100) + -1;
  iVar9 = (int)((ulonglong)(longlong)ROUND(dVar10) >> 1) + iVar1;
  if (iVar8 <= iVar9) {
    iVar9 = iVar8;
  }
  if (iVar9 < iVar1) {
    iVar9 = iVar1;
  }
  lVar7 = FUN_14944e6dc(dVar10,iVar9);
  iVar1 = *param_5;
  if (iVar1 != iVar9) {
    param_6[6] = *(undefined8 *)(lVar7 + 0x38);
    uVar2 = *(undefined8 *)(lVar7 + 8);
    uVar3 = *(undefined8 *)(lVar7 + 0x10);
    uVar4 = *(undefined8 *)(lVar7 + 0x18);
    uVar5 = *(undefined8 *)(lVar7 + 0x20);
    uVar6 = *(undefined8 *)(lVar7 + 0x30);
    param_6[4] = *(undefined8 *)(lVar7 + 0x28);
    param_6[5] = uVar6;
    param_6[2] = uVar4;
    param_6[3] = uVar5;
    *param_6 = uVar2;
    param_6[1] = uVar3;
    *param_5 = iVar9;
  }
  return iVar1 != iVar9;
}



// FUNCTION 14944e6dc FUN_14944e6dc body=497 status=ok
// SIG undefined FUN_14944e6dc(void)

float * FUN_14944e6dc(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  longlong lVar8;
  float *pfVar9;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  float local_100;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined8 local_68;
  float fStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined8 uStack_57;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  pfVar9 = (float *)&DAT_14cbf7250;
  if (-1 < param_2) {
    if (*(int *)(param_1 + 0x168) == 0) {
      if (*(float *)(param_1 + 0x28) <= 0.0) goto LAB_14944e843;
      FUN_14944e9ae(param_1 + 0x160);
    }
    lVar8 = (longlong)param_2 - (longlong)*(int *)(param_1 + 0x60);
    lVar1 = *(longlong *)(param_1 + 0x160);
    pfVar9 = (float *)(lVar1 + lVar8 * 0x48);
    if ((((*pfVar9 == 0.0) && (!NAN(*pfVar9))) && (*(int *)(lVar1 + 0x40 + lVar8 * 0x48) == 0)) &&
       (*(int *)(lVar1 + 0x44 + lVar8 * 0x48) == 0)) {
      local_48 = 0;
      memset(local_108,0,0x99);
      local_68 = 0;
      fStack_60 = 0.0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_57 = 0;
      cVar7 = FUN_14944e60c(param_1,param_2,local_108);
      if (cVar7 == '\0') {
        *(undefined8 *)(pfVar9 + 0xc) = DAT_14c8464f0;
        uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(float)DAT_14c8464e8);
        *(ulonglong *)(pfVar9 + 8) = CONCAT44(DAT_14c8464e0._4_4_,(float)DAT_14c8464e0);
        *(undefined8 *)(pfVar9 + 10) = uVar2;
        fVar6 = DAT_14c8464e8._4_4_;
        fVar5 = (float)DAT_14c8464e8;
        fVar4 = DAT_14c8464e0._4_4_;
        fVar3 = (float)DAT_14c8464e0;
        *(undefined8 *)(pfVar9 + 6) = DAT_14c8464f0;
        pfVar9[2] = fVar3;
        pfVar9[3] = fVar4;
        pfVar9[4] = fVar5;
        pfVar9[5] = fVar6;
      }
      else {
        *pfVar9 = (float)((double)(param_2 - *(int *)(param_1 + 0x60)) / *(double *)(param_1 + 0x58)
                         );
        *(double *)(pfVar9 + 2) = (double)local_88;
        *(double *)(pfVar9 + 4) = (double)local_84;
        *(double *)(pfVar9 + 6) = (double)local_80;
        *(double *)(pfVar9 + 8) = (double)local_7c;
        *(double *)(pfVar9 + 10) = (double)local_78;
        *(double *)(pfVar9 + 0xc) = (double)local_74;
        pfVar9[0x10] = local_100;
        pfVar9[0x11] = fStack_60;
      }
      *(bool *)(pfVar9 + 0xe) = cVar7 != '\0';
      FUN_145f7cfa2(local_108);
    }
  }
LAB_14944e843:
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return pfVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944e8ce FUN_14944e8ce body=165 status=ok
// SIG undefined FUN_14944e8ce(void)

void FUN_14944e8ce(longlong param_1,undefined8 param_2,char param_3,int *param_4,float *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  float fVar5;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  fVar5 = (float)param_2;
  dVar4 = (double)fVar5 * *(double *)(param_1 + 0x58);
  iVar1 = *(int *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 100) + -1;
  iVar2 = (int)((ulonglong)(longlong)ROUND(dVar4 + dVar4 + -0.5) >> 1) + iVar1;
  if (iVar3 <= iVar2) {
    iVar2 = iVar3;
  }
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  *param_4 = iVar2;
  if (param_3 != '\0') {
    auVar7._8_4_ = in_XMM1_Dc;
    auVar7._0_8_ = param_2;
    auVar7._12_4_ = in_XMM1_Dd;
    auVar6._4_12_ = auVar7._4_12_;
    auVar6._0_4_ = fVar5 / *(float *)(param_1 + 0x28);
    auVar7 = roundps(auVar6,ZEXT416((uint)auVar6._0_4_),1);
    fVar5 = fVar5 - auVar7._0_4_ * *(float *)(param_1 + 0x28);
  }
  fVar5 = (float)((double)(fVar5 - (float)((double)(iVar2 - *(int *)(param_1 + 0x60)) /
                                          *(double *)(param_1 + 0x58))) *
                 *(double *)(param_1 + 0x58));
  if (1.0 <= fVar5) {
    fVar5 = 1.0;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *param_5 = fVar5;
  return;
}



// FUNCTION 14944e9ae FUN_14944e9ae body=110 status=ok
// SIG undefined FUN_14944e9ae(void)

void FUN_14944e9ae(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14944ee46(param_1,iVar1);
    }
    FUN_14944ee18((longlong)iVar1 * 0x48 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_14944eeda(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14944eaa8 FUN_14944eaa8 body=103 status=ok
// SIG undefined FUN_14944eaa8(void)

void FUN_14944eaa8(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(param_1 + 0x170) != 0) {
    plVar2 = (longlong *)FUN_14603991a();
    cVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    puVar3 = (undefined8 *)FUN_14603991a();
    (**(code **)*puVar3)(puVar3,param_1,*(undefined8 *)(param_1 + 0x170));
    if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014944eb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x170) + 8))
                (*(longlong **)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x60),0);
      return;
    }
  }
  return;
}



// FUNCTION 14944eb10 FUN_14944eb10 body=138 status=ok
// SIG undefined FUN_14944eb10(void)

undefined8 * FUN_14944eb10(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x390,0x10);
  *puVar1 = &PTR_FUN_14bcd0a90;
  local_58 = 0;
  local_48 = &PTR_LAB_14bcd0e30;
  local_68 = FUN_14451fa6e;
  local_40 = puVar1;
  FUN_144405238(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcd0a90;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944ebba FUN_14944ebba body=127 status=ok
// SIG undefined FUN_14944ebba(void)

void FUN_14944ebba(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x650);
  if ((lVar2 != 0) && (iVar1 = *(int *)(lVar2 + 0x58), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(lVar2 + 0x50);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (lVar3 != 0) {
        lVar4 = FUN_145ba35e4();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          FUN_14944eaa8(lVar3);
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  FUN_149064882(param_1);
  return;
}



// FUNCTION 14944ec3a FUN_14944ec3a body=137 status=ok
// SIG undefined FUN_14944ec3a(void)

void FUN_14944ec3a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x650);
  if ((lVar2 != 0) && (iVar1 = *(int *)(lVar2 + 0x58), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(lVar2 + 0x50);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if (lVar3 != 0) {
        lVar4 = FUN_145ba35e4();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          plVar5 = (longlong *)FUN_14603991a();
          (**(code **)(*plVar5 + 8))(plVar5,lVar3);
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  FUN_149064d54(param_1);
  return;
}



// FUNCTION 14944ecc4 FUN_14944ecc4 body=111 status=ok
// SIG undefined FUN_14944ecc4(void)

undefined * FUN_14944ecc4(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined *puVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x358);
  if (lVar1 != 0) {
    lVar3 = FUN_145ba35e4();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      return &DAT_14cbf7298;
    }
  }
  puVar2 = (undefined *)FUN_149066970(param_1,param_2,param_3);
  return puVar2;
}



// FUNCTION 14944ed34 FUN_14944ed34 body=45 status=ok
// SIG undefined FUN_14944ed34(void)

longlong FUN_14944ed34(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a21ec2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14944ed62 FUN_14944ed62 body=48 status=ok
// SIG undefined FUN_14944ed62(void)

longlong FUN_14944ed62(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145a21ec2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14944ed92 FUN_14944ed92 body=48 status=ok
// SIG undefined FUN_14944ed92(void)

longlong FUN_14944ed92(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145a21ec2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14944edc2 FUN_14944edc2 body=48 status=ok
// SIG undefined FUN_14944edc2(void)

longlong FUN_14944edc2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145a21ec2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14944edf2 FUN_14944edf2 body=38 status=ok
// SIG undefined FUN_14944edf2(void)

undefined8 FUN_14944edf2(undefined8 param_1,int param_2)

{
  FUN_149065412();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14944ee18 FUN_14944ee18 body=46 status=ok
// SIG undefined FUN_14944ee18(void)

void FUN_14944ee18(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    param_1 = param_1 + 0x12;
  }
  return;
}



// FUNCTION 14944ee46 FUN_14944ee46 body=147 status=ok
// SIG undefined FUN_14944ee46(void)

void FUN_14944ee46(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14944eeda FUN_14944eeda body=62 status=ok
// SIG undefined FUN_14944eeda(void)

void FUN_14944eeda(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14944ef18(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 14944ef18 FUN_14944ef18 body=112 status=ok
// SIG undefined FUN_14944ef18(void)

ulonglong FUN_14944ef18(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x48) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14944ef52;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x48,8);
      param_2 = param_2 / 0x48;
    }
  }
LAB_14944ef52:
  return param_2 & 0xffffffff;
}



// FUNCTION 14944ef88 FUN_14944ef88 body=34 status=ok
// SIG undefined FUN_14944ef88(void)

void FUN_14944ef88(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bcd0df0;
  return;
}



// FUNCTION 14944efaa FUN_14944efaa body=31 status=ok
// SIG undefined FUN_14944efaa(void)

undefined8 FUN_14944efaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14944efe6 FUN_14944efe6 body=93 status=ok
// SIG undefined FUN_14944efe6(void)

void FUN_14944efe6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bcd0d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14944f044 FUN_14944f044 body=126 status=ok
// SIG undefined FUN_14944f044(void)

void FUN_14944f044(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bcd0d80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014944f0b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14944f0ce FUN_14944f0ce body=21 status=ok
// SIG undefined FUN_14944f0ce(void)

undefined8 FUN_14944f0ce(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14944f0e4 FUN_14944f0e4 body=29 status=ok
// SIG undefined FUN_14944f0e4(void)

undefined8 FUN_14944f0e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14944f102 FUN_14944f102 body=38 status=ok
// SIG undefined FUN_14944f102(void)

undefined8 FUN_14944f102(undefined8 param_1,int param_2)

{
  FUN_14906d038();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14944f128 FUN_14944f128 body=600 status=ok
// SIG undefined FUN_14944f128(void)

void FUN_14944f128(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78 [12];
  
  local_78[0xb] = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78[10] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 10);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 10);
  }
  local_78[8] = 0;
  local_78[9] = 0;
  local_78[6] = 0;
  local_78[7] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 6);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 6);
  }
  plVar1 = local_78 + 6;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_78[4] = 0;
  local_78[5] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 4);
  }
  local_78[2] = 0;
  local_78[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 2);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = local_78;
  local_98 = local_78 + 2;
  FUN_14944f382(&local_88,local_78[10],plVar1,local_78 + 4);
  if ((local_88 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e(local_88);
  }
  *param_3 = local_88;
  *(undefined1 *)(param_3 + 1) = local_80;
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[2] != 0) {
    FUN_1400020a8();
  }
  if (local_78[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_78[0xb] ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944f382 FUN_14944f382 body=629 status=ok
// SIG undefined FUN_14944f382(void)

longlong *
FUN_14944f382(longlong *param_1,longlong *param_2,longlong param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  int local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [28];
  char local_84;
  longlong local_78;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  plVar3 = *(longlong **)(param_3 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    lVar5 = FUN_140298400();
    if (((*(int *)(lVar5 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
         lVar5 + 0x30)) &&
       (((*(int *)(param_3 + 0xc) != 0 || *(int *)(param_3 + 8) != 0) ||
        *(int *)(param_3 + 0x10) != 0) || *(int *)(param_3 + 0x14) != 0)) {
      lVar5 = (**(code **)(*plVar3 + 0x2e8))(plVar3);
      bVar7 = true;
      if ((lVar5 != 0) && (lVar5 = FUN_140313508(lVar5,param_3 + 8), lVar5 != 0)) {
        bVar7 = ((*(int *)(lVar5 + 0x5c) == 0 && *(int *)(lVar5 + 0x58) == 0) &&
                *(int *)(lVar5 + 0x60) == 0) && *(int *)(lVar5 + 100) == 0;
      }
      iVar1 = *(int *)(param_4 + 1);
      iVar2 = *(int *)(param_5 + 1);
      uVar6 = (**(code **)(*param_2 + 0x180))(param_2);
      local_b8 = FUN_145a960f0();
      if ((local_b8 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(local_b8);
      }
      FUN_149450a5c(local_a8,uVar6,&local_b8);
      lVar5 = local_78;
      while (local_84 == '\0') {
        local_78 = lVar5;
        if (lVar5 != 0) {
          bVar9 = true;
          bVar8 = true;
          if (1 < iVar1) {
            local_b0 = *(undefined8 *)(lVar5 + 0x18);
            FUN_1400021e4(&local_b0,&local_c8);
            if (local_c0 == *(int *)(param_4 + 1)) {
              bVar8 = true;
              if (1 < local_c0) {
                iVar4 = FUN_144a80a00(local_c8,*param_4);
                bVar8 = iVar4 == 0;
              }
            }
            else {
              bVar8 = *(int *)(param_4 + 1) + local_c0 == 1;
            }
            if (local_c8 != 0) {
              FUN_1400020a8();
            }
          }
          if (1 < iVar2) {
            iVar4 = *(int *)(lVar5 + 0x398);
            if (iVar4 == *(int *)(param_5 + 1)) {
              if (1 < iVar4) {
                iVar4 = FUN_144a80a00(*(undefined8 *)(lVar5 + 0x390),*param_5);
                bVar9 = iVar4 == 0;
              }
            }
            else {
              bVar9 = *(int *)(param_5 + 1) + iVar4 == 1;
            }
          }
          if (((bool)(bVar8 & bVar9)) && (lVar5 = FUN_1494510f0(lVar5,param_6), lVar5 != 0)) {
            if (((!bVar7) || (lVar5 = *(longlong *)(lVar5 + 0xa8), lVar5 != 0)) &&
               (DAT_14c950c29 != '\0')) {
              FUN_14689c22e(lVar5);
            }
            *param_1 = lVar5;
            break;
          }
        }
        FUN_149450ade(local_a8);
        lVar5 = local_78;
      }
      if (local_50 == '\x01') {
        FUN_14024445c(local_a0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944f618 FUN_14944f618 body=256 status=ok
// SIG undefined FUN_14944f618(void)

void FUN_14944f618(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149452162(param_1,&local_48,local_38);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    local_48 = 0;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944f71a FUN_14944f71a body=179 status=ok
// SIG undefined FUN_14944f71a(void)

void FUN_14944f71a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494510f0(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944f7ce FUN_14944f7ce body=139 status=ok
// SIG undefined FUN_14944f7ce(void)

void FUN_14944f7ce(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149451a50(param_1,&local_28);
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



// FUNCTION 14944f85a FUN_14944f85a body=38 status=ok
// SIG undefined FUN_14944f85a(void)

void FUN_14944f85a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14945215a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14944f880 FUN_14944f880 body=229 status=ok
// SIG undefined FUN_14944f880(void)

void FUN_14944f880(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_149451410(param_1,&local_38,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944f966 FUN_14944f966 body=39 status=ok
// SIG undefined FUN_14944f966(void)

void FUN_14944f966(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149452102();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14944f9a4 FUN_14944f9a4 body=156 status=ok
// SIG undefined FUN_14944f9a4(void)

void FUN_14944f9a4(undefined8 param_1,longlong param_2)

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
  FUN_149451ce8(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944fa42 FUN_14944fa42 body=191 status=ok
// SIG undefined FUN_14944fa42(void)

void FUN_14944fa42(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14945209c(param_1,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944fb06 FUN_14944fb06 body=158 status=ok
// SIG undefined FUN_14944fb06(void)

void FUN_14944fb06(undefined8 param_1,longlong param_2)

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
  FUN_149451fb4(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944fbaa FUN_14944fbaa body=158 status=ok
// SIG undefined FUN_14944fbaa(void)

void FUN_14944fbaa(undefined8 param_1,longlong param_2)

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
  FUN_149452074(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944fc4e FUN_14944fc4e body=158 status=ok
// SIG undefined FUN_14944fc4e(void)

void FUN_14944fc4e(undefined8 param_1,longlong param_2)

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
  FUN_149452060(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944fcf2 FUN_14944fcf2 body=158 status=ok
// SIG undefined FUN_14944fcf2(void)

void FUN_14944fcf2(undefined8 param_1,longlong param_2)

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
  FUN_149452088(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944fd92 FUN_14944fd92 body=151 status=ok
// SIG undefined FUN_14944fd92(void)

void FUN_14944fd92(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149451f2a(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944fe2a FUN_14944fe2a body=151 status=ok
// SIG undefined FUN_14944fe2a(void)

void FUN_14944fe2a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149451f02(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944fec2 FUN_14944fec2 body=151 status=ok
// SIG undefined FUN_14944fec2(void)

void FUN_14944fec2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149451f16(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


