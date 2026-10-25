// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14770120c FUN_14770120c body=213 status=ok
// SIG undefined FUN_14770120c(void)

void FUN_14770120c(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = FUN_14479d2ce(param_1 + 0x18);
  pcVar3 = *(code **)(param_1 + 0x20);
  local_38 = *param_3;
  local_30 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_48 = *param_2;
  local_40 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar3)(uVar5,&local_48,&local_38,param_4);
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
  plVar4 = (longlong *)param_3[1];
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477012e2 FUN_1477012e2 body=291 status=ok
// SIG undefined FUN_1477012e2(void)

bool FUN_1477012e2(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar5 = FUN_144a61b4f();
  if (cVar5 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar7 = local_48;
  }
  else {
    lVar7 = 0;
  }
  lVar6 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar6 != 0) {
    pcVar3 = *(code **)(param_1 + 0x20);
    local_48 = *param_3;
    local_40 = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    local_58 = *param_2;
    local_50 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    (*pcVar3)(lVar6,&local_58,&local_48,param_4);
  }
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
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
  plVar4 = (longlong *)param_3[1];
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
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar6 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147701406 FUN_147701406 body=31 status=ok
// SIG undefined FUN_147701406(void)

undefined8 FUN_147701406(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147701440 FUN_147701440 body=93 status=ok
// SIG undefined FUN_147701440(void)

void FUN_147701440(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a509020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14770149e FUN_14770149e body=93 status=ok
// SIG undefined FUN_14770149e(void)

void FUN_14770149e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a509020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1477014fc FUN_1477014fc body=126 status=ok
// SIG undefined FUN_1477014fc(void)

void FUN_1477014fc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8660;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a509020;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014770156b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14770157a FUN_14770157a body=58 status=ok
// SIG undefined FUN_14770157a(void)

void FUN_14770157a(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001477015b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1477015b4 FUN_1477015b4 body=31 status=ok
// SIG undefined FUN_1477015b4(void)

undefined8 FUN_1477015b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477015ee FUN_1477015ee body=93 status=ok
// SIG undefined FUN_1477015ee(void)

void FUN_1477015ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3cb240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a509090;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14770164c FUN_14770164c body=93 status=ok
// SIG undefined FUN_14770164c(void)

void FUN_14770164c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3cb240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a509090;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1477016aa FUN_1477016aa body=126 status=ok
// SIG undefined FUN_1477016aa(void)

void FUN_1477016aa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3cb240;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a509090;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147701719. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147701728 FUN_147701728 body=40 status=ok
// SIG undefined FUN_147701728(void)

void FUN_147701728(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014770174d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147701750 FUN_147701750 body=54 status=ok
// SIG undefined FUN_147701750(void)

void FUN_147701750(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x10);
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
      plVar3 = plVar3 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147701786 FUN_147701786 body=20 status=ok
// SIG undefined FUN_147701786(void)

void FUN_147701786(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_14770179a(param_1,*(undefined4 *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 14770179a FUN_14770179a body=277 status=ok
// SIG undefined FUN_14770179a(void)

void FUN_14770179a(undefined8 *param_1,int param_2,int param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  uint uVar4;
  void *_Dst;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  code *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(param_3,0x20);
    }
    _Src = (void *)*param_1;
    local_50 = &local_59;
    local_58 = FUN_140036a08;
    lVar3 = FUN_144a773aa(&local_58,&DAT_14c7585d0);
    puVar1 = (ulonglong *)(lVar3 + 0x10);
    uVar4 = param_3 << 5;
    uVar7 = (ulonglong)(uVar4 == 0) << 3 | 0xfffffffffffffff0;
    uVar5 = (uint)(uVar4 != 0) * 8;
    lVar2 = (ulonglong)uVar5 + 7;
    _Dst = (void *)(*(longlong *)(lVar3 + 0x10) + lVar2 & uVar7);
    uVar6 = (longlong)_Dst + (longlong)(int)uVar4;
    if (*(ulonglong *)(lVar3 + 0x18) < uVar6) {
      FUN_140023dd8(puVar1,uVar5 + 8 | uVar4);
      _Dst = (void *)(lVar2 + *puVar1 & uVar7);
      uVar6 = (longlong)(int)uVar4 + (longlong)_Dst;
    }
    *puVar1 = uVar6;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,(longlong)param_2 << 5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477018b2 FUN_1477018b2 body=87 status=ok
// SIG undefined FUN_1477018b2(void)

void FUN_1477018b2(longlong param_1,int param_2)

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
  FUN_14770179a();
  return;
}



// FUNCTION 14770190a FUN_14770190a body=63 status=ok
// SIG undefined FUN_14770190a(void)

void FUN_14770190a(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145c30b08(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_147701a8e(param_1);
    return;
  }
  FUN_14770194a(param_1);
  FUN_145c30b08(param_1);
  return;
}



// FUNCTION 14770194a FUN_14770194a body=322 status=ok
// SIG undefined FUN_14770194a(void)

void FUN_14770194a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x74 + (longlong)iVar4 * 0x78) * 4) =
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



// FUNCTION 147701a8e FUN_147701a8e body=446 status=ok
// SIG undefined FUN_147701a8e(void)

void FUN_147701a8e(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x78;
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar10),*(undefined4 *)(lVar3 + 4 + lVar10));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x74 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x70 + lVar10) =
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



// FUNCTION 147701c4e FUN_147701c4e body=76 status=ok
// SIG undefined FUN_147701c4e(void)

void FUN_147701c4e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145a6935c();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_147701c62;
    }
  }
  lVar2 = 0;
LAB_147701c62:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 147701c9a FUN_147701c9a body=120 status=ok
// SIG undefined FUN_147701c9a(void)

longlong FUN_147701c9a(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_147701d14();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_147701d6e(param_1,&local_24,param_2);
    lVar1 = (longlong)local_24 * 0x78 + *param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 147701d14 FUN_147701d14 body=89 status=ok
// SIG undefined FUN_147701d14(void)

longlong FUN_147701d14(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x78;
        if ((*(int *)(lVar1 + lVar4) == *param_3) && (*(int *)(lVar1 + 4 + lVar4) == param_3[1])) {
          return lVar1 + lVar4;
        }
        iVar2 = *(int *)(lVar1 + lVar4 + 0x70);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147701d6e FUN_147701d6e body=329 status=ok
// SIG undefined FUN_147701d6e(void)

undefined4 * FUN_147701d6e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_147701eb8(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0x3ff0000000000000;
  local_40[4] = 0x3ff0000000000000;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0;
  *(undefined4 *)(local_40 + 9) = 0;
  *(undefined1 *)((longlong)local_40 + 0x4c) = 1;
  *(undefined8 *)((longlong)local_40 + 0x4d) = 0;
  *(undefined8 *)((longlong)local_40 + 0x55) = 0;
  *(undefined8 *)((longlong)local_40 + 0x5d) = 0;
  *(undefined8 *)((longlong)local_40 + 0x65) = 0;
  *(undefined8 *)((longlong)local_40 + 0x6c) = 0xffffffff00000000;
  cVar1 = FUN_147701f9a(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x74) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xe) =
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
      FUN_147701a8e(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147701eb8 FUN_147701eb8 body=226 status=ok
// SIG undefined FUN_147701eb8(void)

int * FUN_147701eb8(longlong *param_1,int *param_2)

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
      FUN_1410fd1ac(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x78);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x78) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x78 + *param_1;
  return param_2;
}



// FUNCTION 147701f9a FUN_147701f9a body=178 status=ok
// SIG undefined FUN_147701f9a(void)

undefined8 FUN_147701f9a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  void *_Dst;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar2 = *param_1;
      do {
        lVar5 = (longlong)iVar4 * 0x78;
        _Dst = (void *)(lVar2 + lVar5);
        if ((*(int *)(lVar2 + lVar5) == *param_3) && (*(int *)(lVar2 + 4 + lVar5) == param_3[1])) {
          plVar3 = *(longlong **)((longlong)_Dst + 0x60);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          memmove(_Dst,param_3,0x70);
          FUN_14770204c(param_1,*param_4);
          *param_4 = iVar4;
          return 1;
        }
        iVar4 = *(int *)((longlong)_Dst + 0x70);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 14770204c FUN_14770204c body=116 status=ok
// SIG undefined FUN_14770204c(void)

void FUN_14770204c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x78) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78 + 4) = uVar5;
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



// FUNCTION 1477020c0 FUN_1477020c0 body=68 status=ok
// SIG undefined FUN_1477020c0(void)

void FUN_1477020c0(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_147701a8e(param_1);
  return;
}



// FUNCTION 147702104 FUN_147702104 body=175 status=ok
// SIG undefined FUN_147702104(void)

void FUN_147702104(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_14770218d;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14770218d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1477021b4 FUN_1477021b4 body=127 status=ok
// SIG undefined FUN_1477021b4(void)

int * FUN_1477021b4(longlong *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  uVar2 = FUN_144a78877(*param_3,param_3[1]);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & uVar2) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar3 * 0x78;
        if ((*(int *)(lVar1 + lVar5) == *param_3) && (*(int *)(lVar1 + 4 + lVar5) == param_3[1]))
        goto LAB_1477021dd;
        iVar3 = *(int *)(lVar5 + lVar1 + 0x70);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_1477021dd:
  *param_2 = iVar3;
  return param_2;
}



// FUNCTION 147702234 FUN_147702234 body=110 status=ok
// SIG undefined FUN_147702234(void)

undefined8 * FUN_147702234(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = param_2;
  puVar5 = param_1;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  param_1[9] = param_2[9];
  if (param_1 != param_2) {
    param_1[10] = param_2[10];
    param_2[10] = 0;
    plVar2 = (longlong *)param_1[0xb];
    param_1[0xb] = param_2[0xb];
    param_2[0xb] = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  param_1[0xc] = param_2[0xc];
  return param_1;
}



// FUNCTION 1477022a2 FUN_1477022a2 body=87 status=ok
// SIG undefined FUN_1477022a2(void)

void FUN_1477022a2(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x74 + (longlong)param_2 * 0x78);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x70 + lVar5 * 0x78);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x78 + 0x70);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x78 + 0x70);
  FUN_1477022fa();
  return;
}



// FUNCTION 1477022fa FUN_1477022fa body=59 status=ok
// SIG undefined FUN_1477022fa(void)

void FUN_1477022fa(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(*param_1 + 0x60 + (longlong)param_2 * 0x78);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14770204c(param_1,param_2);
  return;
}



// FUNCTION 147702336 FUN_147702336 body=164 status=ok
// SIG undefined FUN_147702336(void)

void FUN_147702336(longlong *param_1,undefined8 param_2)

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
        goto LAB_1477023b6;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1477023b6:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1477023da FUN_1477023da body=119 status=ok
// SIG undefined FUN_1477023da(void)

void FUN_1477023da(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_147702452(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147702452 FUN_147702452 body=141 status=ok
// SIG undefined FUN_147702452(void)

void FUN_147702452(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 1477024e0 FUN_1477024e0 body=358 status=ok
// SIG undefined FUN_1477024e0(void)

undefined4 * FUN_1477024e0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147702648(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  *local_40 = *(ulonglong *)*param_3;
  local_40[1] = *puVar1;
  local_40[2] = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_58 = 0;
  cVar2 = FUN_14770272e(param_1,uVar3,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x1c) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_147702896(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147702648 FUN_147702648 body=229 status=ok
// SIG undefined FUN_147702648(void)

int * FUN_147702648(longlong *param_1,int *param_2)

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



// FUNCTION 14770272e FUN_14770272e body=221 status=ok
// SIG undefined FUN_14770272e(void)

void FUN_14770272e(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong *plVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar10 * 0x20) == *param_3) {
          plVar9 = *(longlong **)(puVar3 + 4);
          if (plVar9 != (longlong *)0x0) {
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_14770280c(param_1,*param_4,1);
          *param_4 = iVar10;
          uVar8 = 1;
          goto LAB_1477027a4;
        }
        iVar10 = puVar3[6];
      } while (iVar10 != -1);
    }
  }
  uVar8 = 0;
LAB_1477027a4:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  return;
}



// FUNCTION 14770280c FUN_14770280c body=138 status=ok
// SIG undefined FUN_14770280c(void)

void FUN_14770280c(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147702896 FUN_147702896 body=477 status=ok
// SIG undefined FUN_147702896(void)

void FUN_147702896(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
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



// FUNCTION 147702a74 FUN_147702a74 body=132 status=ok
// SIG undefined FUN_147702a74(void)

void FUN_147702a74(longlong param_1,int param_2)

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



// FUNCTION 147702afa FUN_147702afa body=63 status=ok
// SIG undefined FUN_147702afa(void)

void FUN_147702afa(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147702b3a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147702b3a FUN_147702b3a body=97 status=ok
// SIG undefined FUN_147702b3a(void)

ulonglong FUN_147702b3a(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 147702b9c FUN_147702b9c body=154 status=ok
// SIG undefined FUN_147702b9c(void)

undefined8 FUN_147702b9c(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_147702c36(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 147702c36 FUN_147702c36 body=90 status=ok
// SIG undefined FUN_147702c36(void)

void FUN_147702c36(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_147702c90();
  return;
}



// FUNCTION 147702c90 FUN_147702c90 body=84 status=ok
// SIG undefined FUN_147702c90(void)

void FUN_147702c90(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_14770280c(param_1,param_2,1);
  return;
}



// FUNCTION 147702ce4 FUN_147702ce4 body=96 status=ok
// SIG undefined FUN_147702ce4(void)

void FUN_147702ce4(longlong param_1,int param_2)

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



// FUNCTION 147702d44 FUN_147702d44 body=322 status=ok
// SIG undefined FUN_147702d44(void)

void FUN_147702d44(longlong *param_1)

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



// FUNCTION 147702e88 FUN_147702e88 body=311 status=ok
// SIG undefined FUN_147702e88(void)

void FUN_147702e88(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
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
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
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
      plVar3 = *(longlong **)(*local_68 + 0x10 + (longlong)iStack_4c * 0x20);
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
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147702fc0 FUN_147702fc0 body=369 status=ok
// SIG undefined FUN_147702fc0(void)

longlong *
FUN_147702fc0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x2c0,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a509100;
  plVar1 = plVar4 + 2;
  FUN_146a8a5ae(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_14770315a(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1477030c5;
    param_1[1] = 0;
LAB_147703088:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1477030c5;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_1477030c5;
      goto LAB_147703088;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1477030c5;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1477030c5:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 0x2b0;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147703132 FUN_147703132 body=9 status=ok
// SIG undefined FUN_147703132(void)

void FUN_147703132(longlong param_1)

{
  FUN_146a8a61e(param_1 + 0x10);
  return;
}



// FUNCTION 14770313c FUN_14770313c body=29 status=ok
// SIG undefined FUN_14770313c(void)

undefined8 FUN_14770313c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14770315a FUN_14770315a body=167 status=ok
// SIG undefined FUN_14770315a(void)

void FUN_14770315a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1477031d5;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1477031d5;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1477031d5:
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
                    /* WARNING: Could not recover jumptable at 0x0001477031f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147703202 FUN_147703202 body=154 status=ok
// SIG undefined FUN_147703202(void)

undefined8 * FUN_147703202(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = &PTR_LAB_149f1aac0;
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
  param_1[2] = lVar3;
  *param_1 = &PTR_FUN_14a50ce90;
  param_1[4] = *param_3;
  param_1[5] = 0;
  FUN_14485c47a(param_1 + 5,param_2);
  if (param_2 != 0) {
    uVar2 = FUN_14479d2ce(param_1 + 5);
    uVar2 = FUN_14477b072(uVar2,*param_3);
    param_1[3] = uVar2;
  }
  return param_1;
}



// FUNCTION 14770329c FUN_14770329c body=29 status=ok
// SIG undefined FUN_14770329c(void)

undefined8 FUN_14770329c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477032d2 FUN_1477032d2 body=29 status=ok
// SIG undefined FUN_1477032d2(void)

bool FUN_1477032d2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 == param_2;
}



// FUNCTION 1477032f0 FUN_1477032f0 body=26 status=ok
// SIG undefined FUN_1477032f0(void)

bool FUN_1477032f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x28,1);
  return lVar1 == 0;
}



// FUNCTION 147703314 FUN_147703314 body=101 status=ok
// SIG undefined FUN_147703314(void)

void FUN_147703314(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f1aac0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50ce90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14770337a FUN_14770337a body=101 status=ok
// SIG undefined FUN_14770337a(void)

void FUN_14770337a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f1aac0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50ce90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1477033e0 FUN_1477033e0 body=134 status=ok
// SIG undefined FUN_1477033e0(void)

void FUN_1477033e0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f1aac0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a50ce90;
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
                    /* WARNING: Could not recover jumptable at 0x000147703457. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147703466 FUN_147703466 body=111 status=ok
// SIG undefined FUN_147703466(void)

undefined4 * FUN_147703466(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 1;
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(param_1 + 0x18),&local_38);
  *param_2 = (undefined4)local_38;
  param_2[1] = local_38._4_4_;
  param_2[2] = (undefined4)uStack_30;
  param_2[3] = uStack_30._4_4_;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477034d6 FUN_1477034d6 body=169 status=ok
// SIG undefined FUN_1477034d6(void)

bool FUN_1477034d6(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x28,local_38,0);
    lVar3 = local_38[0];
  }
  else {
    lVar3 = 0;
  }
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  if (plVar2 != (longlong *)0x0) {
    local_38[0] = 0;
    local_38[1] = 0;
    local_28 = 1;
    (**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(param_1 + 0x18));
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return plVar2 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147703580 FUN_147703580 body=52 status=ok
// SIG undefined FUN_147703580(void)

undefined8 * FUN_147703580(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a509190;
  FUN_1449db362(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477035ce FUN_1477035ce body=29 status=ok
// SIG undefined FUN_1477035ce(void)

bool FUN_1477035ce(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x38);
  return lVar1 == param_2;
}



// FUNCTION 1477035ec FUN_1477035ec body=26 status=ok
// SIG undefined FUN_1477035ec(void)

bool FUN_1477035ec(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x38,1);
  return lVar1 == 0;
}



// FUNCTION 147703606 FUN_147703606 body=24 status=ok
// SIG undefined FUN_147703606(void)

bool FUN_147703606(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x38);
  return lVar1 != 0;
}



// FUNCTION 14770362a FUN_14770362a body=143 status=ok
// SIG undefined FUN_14770362a(void)

void FUN_14770362a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a509190;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar2;
  *(undefined4 *)(puVar1 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uVar4;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140a5c51c(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_14a509120;
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar5;
  puVar1[9] = *(undefined8 *)(param_1 + 0x48);
  return;
}



// FUNCTION 1477036ba FUN_1477036ba body=143 status=ok
// SIG undefined FUN_1477036ba(void)

void FUN_1477036ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a509190;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar2;
  *(undefined4 *)(puVar1 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uVar4;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_140a5c51c(puVar1 + 4,param_1 + 0x20);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_14a509120;
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar5;
  puVar1[9] = *(undefined8 *)(param_1 + 0x48);
  return;
}



// FUNCTION 14770374a FUN_14770374a body=179 status=ok
// SIG undefined FUN_14770374a(void)

void FUN_14770374a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a509190;
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)&p_Var1->CriticalSection = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)&p_Var1->CriticalSection + 4) = uVar3;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = uVar4;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Flink + 4) = uVar5;
  *(undefined1 *)&(p_Var1->ProcessLocksList).Blink = *(undefined1 *)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_140a5c51c(&p_Var1->EntryCount,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14a509120;
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  uVar4 = *(undefined4 *)(param_1 + 0x40);
  uVar5 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)&p_Var1[1].CriticalSection = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar3;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Flink = uVar4;
  *(undefined4 *)((longlong)&p_Var1[1].ProcessLocksList.Flink + 4) = uVar5;
  p_Var1[1].ProcessLocksList.Blink = *(_LIST_ENTRY **)(param_1 + 0x48);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477037ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477037fe FUN_1477037fe body=144 status=ok
// SIG undefined FUN_1477037fe(void)

undefined8 FUN_1477037fe(longlong param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_14479d2ce(param_1 + 0x38);
  pcVar2 = *(code **)(param_1 + 0x40);
  iVar1 = *(int *)(param_1 + 0x48);
  local_48 = *(undefined1 *)(param_1 + 0x18);
  local_58 = *(undefined4 *)(param_1 + 8);
  uStack_54 = *(undefined4 *)(param_1 + 0xc);
  uStack_50 = *(undefined4 *)(param_1 + 0x10);
  uStack_4c = *(undefined4 *)(param_1 + 0x14);
  local_40 = 0;
  local_38 = 0;
  FUN_140a5c51c(&local_40,param_1 + 0x20);
  (*pcVar2)(iVar1 + lVar3,param_2,&local_58);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147703890 FUN_147703890 body=216 status=ok
// SIG undefined FUN_147703890(void)

bool FUN_147703890(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [44];
  undefined1 local_6c [20];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x38,&local_58,0);
    lVar5 = CONCAT44(uStack_54,local_58);
  }
  else {
    lVar5 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x38);
  if (lVar4 != 0) {
    pcVar2 = *(code **)(param_1 + 0x40);
    iVar1 = *(int *)(param_1 + 0x48);
    local_48 = *(undefined1 *)(param_1 + 0x18);
    local_58 = *(undefined4 *)(param_1 + 8);
    uStack_54 = *(undefined4 *)(param_1 + 0xc);
    uStack_50 = *(undefined4 *)(param_1 + 0x10);
    uStack_4c = *(undefined4 *)(param_1 + 0x14);
    local_40 = 0;
    local_38 = 0;
    FUN_140a5c51c(&local_40,param_1 + 0x20);
    (*pcVar2)(iVar1 + lVar4,local_6c,&local_58);
  }
  if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14770396c FUN_14770396c body=154 status=ok
// SIG undefined FUN_14770396c(void)

undefined8 * FUN_14770396c(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = &PTR_LAB_14a50baa0;
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
  param_1[2] = lVar3;
  *param_1 = &PTR_FUN_14a50ba30;
  param_1[4] = *param_3;
  param_1[5] = 0;
  FUN_14485c47a(param_1 + 5,param_2);
  if (param_2 != 0) {
    uVar2 = FUN_14479d2ce(param_1 + 5);
    uVar2 = FUN_14477b072(uVar2,*param_3);
    param_1[3] = uVar2;
  }
  return param_1;
}



// FUNCTION 147703a06 FUN_147703a06 body=29 status=ok
// SIG undefined FUN_147703a06(void)

undefined8 FUN_147703a06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147703a3c FUN_147703a3c body=29 status=ok
// SIG undefined FUN_147703a3c(void)

bool FUN_147703a3c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 == param_2;
}



// FUNCTION 147703a5a FUN_147703a5a body=26 status=ok
// SIG undefined FUN_147703a5a(void)

bool FUN_147703a5a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x28,1);
  return lVar1 == 0;
}



// FUNCTION 147703a8a FUN_147703a8a body=101 status=ok
// SIG undefined FUN_147703a8a(void)

void FUN_147703a8a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50baa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50ba30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147703af0 FUN_147703af0 body=101 status=ok
// SIG undefined FUN_147703af0(void)

void FUN_147703af0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50baa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50ba30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147703b56 FUN_147703b56 body=134 status=ok
// SIG undefined FUN_147703b56(void)

void FUN_147703b56(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a50baa0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a50ba30;
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
                    /* WARNING: Could not recover jumptable at 0x000147703bcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147703bdc FUN_147703bdc body=459 status=ok
// SIG undefined FUN_147703bdc(void)

undefined8 * FUN_147703bdc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_108 [32];
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  uint local_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong local_b0;
  undefined8 auStack_a8 [4];
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined4 local_74;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  undefined1 local_54;
  undefined8 local_50;
  longlong *plStack_48;
  undefined8 local_40;
  char local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = &PTR_FUN_149ed05f0;
  local_e0 = &DAT_3f8000003f800000;
  uStack_d8 = &DAT_3f8000003f800000;
  local_d0 = local_d0 & 0xffffff00;
  uStack_cc = 3;
  uStack_c8 = 0x4200000042000000;
  local_74 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  auStack_a8[0] = 0;
  auStack_a8[1] = 0;
  auStack_a8[2] = 0;
  auStack_a8[3] = 0;
  uStack_88 = 0;
  uStack_87 = 0;
  uStack_80 = 0;
  uStack_7f = 0;
  local_70 = 1;
  local_68 = DAT_14c84635c;
  local_60 = DAT_14c84635c;
  local_58 = local_58 & 0xffffff00;
  local_54 = 4;
  local_50 = 0;
  plStack_48 = (longlong *)0x0;
  local_40 = 0;
  local_38 = '\x01';
  plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar3 + 0x248))(plVar3,*(undefined8 *)(param_1 + 0x18),&local_e8);
  *param_2 = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_2 + 1) = (undefined4)local_e0;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_e0._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)uStack_d8;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_d8._4_4_;
  *(uint *)(param_2 + 3) = local_d0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_cc;
  *(undefined4 *)(param_2 + 4) = (undefined4)uStack_c8;
  *(undefined4 *)((longlong)param_2 + 0x24) = uStack_c8._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)local_c0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_c0._4_4_;
  *(undefined4 *)(param_2 + 6) = (undefined4)uStack_b8;
  *(undefined4 *)((longlong)param_2 + 0x34) = uStack_b8._4_4_;
  param_2[7] = local_b0;
  if ((local_b0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar3 = plStack_48;
  puVar5 = auStack_a8;
  puVar6 = param_2 + 8;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)((longlong)param_2 + 0x94) = local_54;
  *(uint *)(param_2 + 0x12) = local_58;
  param_2[0x13] = local_50;
  param_2[0x14] = plStack_48;
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_48 + 1) = (int)plStack_48[1] + 1;
    UNLOCK();
  }
  param_2[0x15] = local_40;
  if (local_38 == '\x01') {
    local_e8 = &PTR_FUN_149ed05f0;
    if (plStack_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_48)(plStack_48);
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
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147703da8 FUN_147703da8 body=397 status=ok
// SIG undefined FUN_147703da8(void)

bool FUN_147703da8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  undefined **ppuVar6;
  undefined1 auStack_118 [32];
  undefined **local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  undefined4 local_84;
  undefined2 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_64;
  undefined8 local_60;
  longlong *plStack_58;
  undefined8 local_50;
  char local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar4 = FUN_144a61b4f();
  if (cVar4 == '\0') {
    FUN_140192332(param_1 + 0x28,&local_f8,0);
    ppuVar6 = local_f8;
  }
  else {
    ppuVar6 = (undefined **)0x0;
  }
  plVar5 = (longlong *)FUN_14479d2ce();
  if (plVar5 != (longlong *)0x0) {
    local_f8 = &PTR_FUN_149ed05f0;
    local_f0 = &DAT_3f8000003f800000;
    puStack_e8 = &DAT_3f8000003f800000;
    local_e0 = 0;
    local_dc = 3;
    local_d8 = 0x4200000042000000;
    local_84 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    uStack_97 = 0;
    uStack_90 = 0;
    uStack_8f = 0;
    local_80 = 1;
    local_78 = DAT_14c84635c;
    local_70 = DAT_14c84635c;
    local_68 = 0;
    local_64 = 4;
    local_60 = 0;
    plStack_58 = (longlong *)0x0;
    local_50 = 0;
    local_48 = '\x01';
    (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(param_1 + 0x18),&local_f8);
    plVar3 = plStack_58;
    if (local_48 == '\x01') {
      local_f8 = &PTR_FUN_149ed05f0;
      if (plStack_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_58 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_58)(plStack_58);
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
  }
  if ((ppuVar6 != (undefined **)0x0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(ppuVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return plVar5 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147703f38 FUN_147703f38 body=225 status=ok
// SIG undefined FUN_147703f38(void)

undefined8 *
FUN_147703f38(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = &PTR_LAB_14a50bb10;
  FUN_140e361c2(param_1 + 2,param_4);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_4 + 0xb0);
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x19] = *(undefined8 *)(param_4 + 0xb8);
  *(undefined8 *)(param_4 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_4 + 0xc0);
  *(undefined4 *)(param_4 + 0xc0) = 0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  param_1[0x1c] = lVar4;
  *param_1 = &PTR_FUN_14a509200;
  param_1[0x1d] = 0;
  FUN_14485c47a(param_1 + 0x1d,param_2);
  *(undefined4 *)(param_1 + 0x1f) = uVar1;
  param_1[0x1e] = uVar2;
  return param_1;
}



// FUNCTION 14770401a FUN_14770401a body=52 status=ok
// SIG undefined FUN_14770401a(void)

undefined8 * FUN_14770401a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a50bb10;
  FUN_1476d2a2e(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14770406e FUN_14770406e body=32 status=ok
// SIG undefined FUN_14770406e(void)

bool FUN_14770406e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0xe8);
  return lVar1 == param_2;
}



// FUNCTION 14770408e FUN_14770408e body=29 status=ok
// SIG undefined FUN_14770408e(void)

bool FUN_14770408e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0xe8,1);
  return lVar1 == 0;
}



// FUNCTION 1477040ac FUN_1477040ac body=27 status=ok
// SIG undefined FUN_1477040ac(void)

bool FUN_1477040ac(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0xe8);
  return lVar1 != 0;
}



// FUNCTION 1477040d6 FUN_1477040d6 body=182 status=ok
// SIG undefined FUN_1477040d6(void)

void FUN_1477040d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 0x10) {
    FUN_1446efa72(param_2,0,0x10,0x10);
    *(undefined4 *)(param_2 + 1) = 0x10;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50bb10;
  FUN_140e361c2(puVar1 + 2,param_1 + 0x10);
  *(undefined1 *)(puVar1 + 0x18) = *(undefined1 *)(param_1 + 0xc0);
  puVar1[0x19] = 0;
  *(undefined4 *)(puVar1 + 0x1a) = 0;
  FUN_147704426(puVar1 + 0x19,param_1 + 200);
  puVar1[0x1c] = *(undefined8 *)(param_1 + 0xe0);
  *puVar1 = &PTR_FUN_14a509200;
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  puVar1[0x1d] = *(undefined8 *)(param_1 + 0xe8);
  puVar1[0x1e] = uVar2;
  puVar1[0x1f] = *(undefined8 *)(param_1 + 0xf8);
  return;
}



// FUNCTION 14770418c FUN_14770418c body=182 status=ok
// SIG undefined FUN_14770418c(void)

void FUN_14770418c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 0x10) {
    FUN_1446efa72(param_2,0,0x10,0x10);
    *(undefined4 *)(param_2 + 1) = 0x10;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50bb10;
  FUN_140e361c2(puVar1 + 2,param_1 + 0x10);
  *(undefined1 *)(puVar1 + 0x18) = *(undefined1 *)(param_1 + 0xc0);
  puVar1[0x19] = 0;
  *(undefined4 *)(puVar1 + 0x1a) = 0;
  FUN_147704426(puVar1 + 0x19,param_1 + 200);
  puVar1[0x1c] = *(undefined8 *)(param_1 + 0xe0);
  *puVar1 = &PTR_FUN_14a509200;
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  puVar1[0x1d] = *(undefined8 *)(param_1 + 0xe8);
  puVar1[0x1e] = uVar2;
  puVar1[0x1f] = *(undefined8 *)(param_1 + 0xf8);
  return;
}



// FUNCTION 147704242 FUN_147704242 body=218 status=ok
// SIG undefined FUN_147704242(void)

void FUN_147704242(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 0x10) {
    FUN_1446efa72(param_2 + 1,0,0x10,0x10);
    param_2[1].LockCount = 0x10;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a50bb10;
  FUN_140e361c2(&p_Var1->ProcessLocksList,param_1 + 0x10);
  *(undefined1 *)&p_Var1[4].Type = *(undefined1 *)(param_1 + 0xc0);
  p_Var1[4].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&p_Var1[4].ProcessLocksList.Flink = 0;
  FUN_147704426(&p_Var1[4].CriticalSection,param_1 + 200);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  p_Var1[4].EntryCount = (int)uVar2;
  p_Var1[4].ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14a509200;
  uVar3 = *(undefined4 *)(param_1 + 0xec);
  uVar4 = *(undefined4 *)(param_1 + 0xf0);
  uVar5 = *(undefined4 *)(param_1 + 0xf4);
  p_Var1[4].Flags = *(DWORD *)(param_1 + 0xe8);
  p_Var1[4].CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1[4].SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[5].Type = (short)uVar4;
  p_Var1[5].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[5].field_0x4 = uVar5;
  p_Var1[5].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0xf8);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014770430c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14770431c FUN_14770431c body=90 status=ok
// SIG undefined FUN_14770431c(void)

void FUN_14770431c(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14479d2ce(param_1 + 0xe8);
  FUN_1477044aa(param_1 + 0x10,param_1 + 0xf0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147704378 FUN_147704378 body=171 status=ok
// SIG undefined FUN_147704378(void)

bool FUN_147704378(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0xe8,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0xe8);
  if (lVar2 != 0) {
    local_28 = lVar2;
    FUN_1477044aa(param_1 + 0x10,param_1 + 0xf0);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147704426 FUN_147704426 body=130 status=ok
// SIG undefined FUN_147704426(void)

void FUN_147704426(longlong *param_1,longlong *param_2)

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



// FUNCTION 1477044aa FUN_1477044aa body=311 status=ok
// SIG undefined FUN_1477044aa(void)

void FUN_1477044aa(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_128 [32];
  undefined **local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong local_d0;
  undefined8 local_c8 [10];
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar1 = *(int *)(param_2 + 1);
  pcVar2 = (code *)*param_2;
  lVar3 = *param_3;
  local_108 = &PTR_FUN_149ed05f0;
  local_100 = *(undefined4 *)(param_1 + 8);
  uStack_fc = *(undefined4 *)(param_1 + 0xc);
  uStack_f8 = *(undefined4 *)(param_1 + 0x10);
  uStack_f4 = *(undefined4 *)(param_1 + 0x14);
  local_f0 = *(undefined4 *)(param_1 + 0x18);
  uStack_ec = *(undefined4 *)(param_1 + 0x1c);
  uStack_e8 = *(undefined4 *)(param_1 + 0x20);
  uStack_e4 = *(undefined4 *)(param_1 + 0x24);
  local_e0 = *(undefined4 *)(param_1 + 0x28);
  uStack_dc = *(undefined4 *)(param_1 + 0x2c);
  uStack_d8 = *(undefined4 *)(param_1 + 0x30);
  uStack_d4 = *(undefined4 *)(param_1 + 0x34);
  local_d0 = *(longlong *)(param_1 + 0x38);
  if ((local_d0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar5 = (undefined8 *)(param_1 + 0x40);
  puVar6 = local_c8;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_74 = *(undefined1 *)(param_1 + 0x94);
  local_78 = *(undefined4 *)(param_1 + 0x90);
  local_70 = *(undefined8 *)(param_1 + 0x98);
  local_68 = *(longlong *)(param_1 + 0xa0);
  if (local_68 != 0) {
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
  }
  local_60 = *(undefined8 *)(param_1 + 0xa8);
  local_58 = *(undefined1 *)(param_1 + 0xb0);
  local_50 = 0;
  local_48 = 0;
  FUN_147704426(&local_50,param_1 + 0xb8);
  (*pcVar2)(lVar3 + iVar1,&local_108);
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477045e2 FUN_1477045e2 body=29 status=ok
// SIG undefined FUN_1477045e2(void)

undefined8 FUN_1477045e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14770461a FUN_14770461a body=29 status=ok
// SIG undefined FUN_14770461a(void)

bool FUN_14770461a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147704638 FUN_147704638 body=26 status=ok
// SIG undefined FUN_147704638(void)

bool FUN_147704638(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147704652 FUN_147704652 body=24 status=ok
// SIG undefined FUN_147704652(void)

bool FUN_147704652(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14770466a FUN_14770466a body=101 status=ok
// SIG undefined FUN_14770466a(void)

void FUN_14770466a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a509270;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1477046d0 FUN_1477046d0 body=101 status=ok
// SIG undefined FUN_1477046d0(void)

void FUN_1477046d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a509270;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147704736 FUN_147704736 body=134 status=ok
// SIG undefined FUN_147704736(void)

void FUN_147704736(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a509270;
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
                    /* WARNING: Could not recover jumptable at 0x0001477047ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477047bc FUN_1477047bc body=63 status=ok
// SIG undefined FUN_1477047bc(void)

undefined8 FUN_1477047bc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 1477047fc FUN_1477047fc body=199 status=ok
// SIG undefined FUN_1477047fc(void)

bool FUN_1477047fc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0 [184];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_f8,0);
    lVar3 = local_f8;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,local_f0,param_2,param_3);
    FUN_14493db24(local_f0);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477048c4 FUN_1477048c4 body=29 status=ok
// SIG undefined FUN_1477048c4(void)

undefined8 FUN_1477048c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477048fc FUN_1477048fc body=29 status=ok
// SIG undefined FUN_1477048fc(void)

bool FUN_1477048fc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14770491a FUN_14770491a body=26 status=ok
// SIG undefined FUN_14770491a(void)

bool FUN_14770491a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147704934 FUN_147704934 body=24 status=ok
// SIG undefined FUN_147704934(void)

bool FUN_147704934(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14770494c FUN_14770494c body=101 status=ok
// SIG undefined FUN_14770494c(void)

void FUN_14770494c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05630;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5092e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1477049b2 FUN_1477049b2 body=101 status=ok
// SIG undefined FUN_1477049b2(void)

void FUN_1477049b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05630;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5092e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147704a18 FUN_147704a18 body=134 status=ok
// SIG undefined FUN_147704a18(void)

void FUN_147704a18(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05630;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5092e0;
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
                    /* WARNING: Could not recover jumptable at 0x000147704a8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147704a9e FUN_147704a9e body=44 status=ok
// SIG undefined FUN_147704a9e(void)

undefined8 FUN_147704a9e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return param_2;
}



// FUNCTION 147704aca FUN_147704aca body=178 status=ok
// SIG undefined FUN_147704aca(void)

bool FUN_147704aca(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined1 local_e0 [184];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_e8,0);
    lVar3 = local_e8;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,local_e0);
    FUN_14493db24(local_e0);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147704b7e FUN_147704b7e body=29 status=ok
// SIG undefined FUN_147704b7e(void)

undefined8 FUN_147704b7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147704bb6 FUN_147704bb6 body=29 status=ok
// SIG undefined FUN_147704bb6(void)

bool FUN_147704bb6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147704bd4 FUN_147704bd4 body=26 status=ok
// SIG undefined FUN_147704bd4(void)

bool FUN_147704bd4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147704bee FUN_147704bee body=24 status=ok
// SIG undefined FUN_147704bee(void)

bool FUN_147704bee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147704c06 FUN_147704c06 body=101 status=ok
// SIG undefined FUN_147704c06(void)

void FUN_147704c06(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a509350;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147704c6c FUN_147704c6c body=101 status=ok
// SIG undefined FUN_147704c6c(void)

void FUN_147704c6c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a509350;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147704cd2 FUN_147704cd2 body=134 status=ok
// SIG undefined FUN_147704cd2(void)

void FUN_147704cd2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a509350;
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
                    /* WARNING: Could not recover jumptable at 0x000147704d49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147704d58 FUN_147704d58 body=39 status=ok
// SIG undefined FUN_147704d58(void)

void FUN_147704d58(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147704d7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 147704d80 FUN_147704d80 body=146 status=ok
// SIG undefined FUN_147704d80(void)

bool FUN_147704d80(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147704e14 FUN_147704e14 body=131 status=ok
// SIG undefined FUN_147704e14(void)

void FUN_147704e14(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  *param_2 = 0;
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
  FUN_145e31e60(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8),param_1,param_2);
  return;
}



// FUNCTION 147704e98 FUN_147704e98 body=29 status=ok
// SIG undefined FUN_147704e98(void)

undefined8 FUN_147704e98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147704ed0 FUN_147704ed0 body=29 status=ok
// SIG undefined FUN_147704ed0(void)

bool FUN_147704ed0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147704eee FUN_147704eee body=26 status=ok
// SIG undefined FUN_147704eee(void)

bool FUN_147704eee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147704f08 FUN_147704f08 body=24 status=ok
// SIG undefined FUN_147704f08(void)

bool FUN_147704f08(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147704f20 FUN_147704f20 body=101 status=ok
// SIG undefined FUN_147704f20(void)

void FUN_147704f20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04bf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5093c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147704f86 FUN_147704f86 body=101 status=ok
// SIG undefined FUN_147704f86(void)

void FUN_147704f86(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04bf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5093c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147704fec FUN_147704fec body=134 status=ok
// SIG undefined FUN_147704fec(void)

void FUN_147704fec(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f04bf0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5093c0;
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
                    /* WARNING: Could not recover jumptable at 0x000147705063. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147705072 FUN_147705072 body=42 status=ok
// SIG undefined FUN_147705072(void)

void FUN_147705072(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147705099. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 14770509c FUN_14770509c body=154 status=ok
// SIG undefined FUN_14770509c(void)

bool FUN_14770509c(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147705138 FUN_147705138 body=154 status=ok
// SIG undefined FUN_147705138(void)

undefined8 * FUN_147705138(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = &PTR_LAB_149f05ae0;
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
  param_1[2] = lVar3;
  *param_1 = &PTR_FUN_14a509430;
  param_1[4] = *param_3;
  param_1[5] = 0;
  FUN_14485c47a(param_1 + 5,param_2);
  if (param_2 != 0) {
    uVar2 = FUN_14479d2ce(param_1 + 5);
    uVar2 = FUN_14477b072(uVar2,*param_3);
    param_1[3] = uVar2;
  }
  return param_1;
}



// FUNCTION 1477051d2 FUN_1477051d2 body=29 status=ok
// SIG undefined FUN_1477051d2(void)

undefined8 FUN_1477051d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147705208 FUN_147705208 body=29 status=ok
// SIG undefined FUN_147705208(void)

bool FUN_147705208(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 == param_2;
}



// FUNCTION 147705226 FUN_147705226 body=26 status=ok
// SIG undefined FUN_147705226(void)

bool FUN_147705226(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x28,1);
  return lVar1 == 0;
}



// FUNCTION 14770524a FUN_14770524a body=101 status=ok
// SIG undefined FUN_14770524a(void)

void FUN_14770524a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05ae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a509430;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1477052b0 FUN_1477052b0 body=101 status=ok
// SIG undefined FUN_1477052b0(void)

void FUN_1477052b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05ae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a509430;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147705316 FUN_147705316 body=134 status=ok
// SIG undefined FUN_147705316(void)

void FUN_147705316(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f05ae0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a509430;
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
                    /* WARNING: Could not recover jumptable at 0x00014770538d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14770539c FUN_14770539c body=94 status=ok
// SIG undefined FUN_14770539c(void)

undefined1 FUN_14770539c(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1a = 0x100;
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(param_1 + 0x18),&local_1a);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (undefined1)local_1a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477053fc FUN_1477053fc body=163 status=ok
// SIG undefined FUN_1477053fc(void)

bool FUN_1477053fc(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined2 local_28;
  undefined6 uStack_26;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x28,&local_28,0);
    lVar3 = CONCAT62(uStack_26,local_28);
  }
  else {
    lVar3 = 0;
  }
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  if (plVar2 != (longlong *)0x0) {
    local_28 = 0x100;
    (**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(param_1 + 0x18));
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return plVar2 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477054a0 FUN_1477054a0 body=324 status=ok
// SIG undefined FUN_1477054a0(void)

longlong * FUN_1477054a0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x460,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a5094a0;
  plVar4 = plVar3 + 2;
  FUN_1477055e6(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_147706920(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_147705577;
    param_1[1] = 0;
LAB_147705541:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_147705577;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_147705577;
      goto LAB_147705541;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147705577;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_147705577:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x450;
  FUN_140a52e78(*param_1,"SComboBox<UObject*>",".\\Runtime/UMG/Private/Components/ComboBox.cpp",0x21
               );
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477055e6 FUN_1477055e6 body=197 status=ok
// SIG undefined FUN_1477055e6(void)

undefined8 * FUN_1477055e6(undefined8 *param_1)

{
  FUN_146a6d0b8();
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *param_1 = &PTR_FUN_14a5094c0;
  param_1[0x3c] = &PTR_LAB_14a509720;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  *(undefined1 *)((longlong)param_1 + 0x33) = 1;
  *(byte *)((longlong)param_1 + 0x32) = *(byte *)((longlong)param_1 + 0x32) | 4;
  return param_1;
}



// FUNCTION 1477056ac FUN_1477056ac body=9 status=ok
// SIG undefined FUN_1477056ac(void)

void FUN_1477056ac(longlong param_1)

{
  FUN_147705e88(param_1 + 0x10);
  return;
}



// FUNCTION 1477056b6 FUN_1477056b6 body=29 status=ok
// SIG undefined FUN_1477056b6(void)

undefined8 FUN_1477056b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477056d4 FUN_1477056d4 body=38 status=ok
// SIG undefined FUN_1477056d4(void)

undefined8 FUN_1477056d4(undefined8 param_1,int param_2)

{
  FUN_147705e88();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477056fa FUN_1477056fa body=1037 status=ok
// SIG undefined FUN_1477056fa(void)

undefined1 *
FUN_1477056fa(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar4 = (**(code **)(*param_1 + 0x1a8))();
  if (cVar4 == '\0') {
LAB_147705a0a:
    FUN_14171f816(param_1,param_2,param_3,param_4);
LAB_147705a1b:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
  cVar4 = (**(code **)(*DAT_14c98e618 + 0xb0))(DAT_14c98e618,param_4);
  cVar5 = (**(code **)(*DAT_14c98e618 + 0xa0))();
  if ((char)param_1[0x87] == '\x01') {
    if (cVar4 == '\0') {
      if (*(char *)((longlong)param_1 + 0x439) != '\0') {
        *(undefined1 *)((longlong)param_1 + 0x439) = 0;
        (**(code **)(*(longlong *)(param_1[0x7f] + 0x4e8) + 0xd0))(param_1[0x7f] + 0x4e8);
        if (0 < local_50) {
          FUN_147705f56(param_1,*local_58,3);
        }
        *param_2 = 1;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
        local_60 = param_1[2];
        if (local_60 == 0) {
LAB_1477059ae:
          local_68 = 0;
          local_60 = 0;
        }
        else {
          iVar6 = *(int *)(local_60 + 8);
          do {
            if (iVar6 == 0) goto LAB_1477059ae;
            LOCK();
            iVar8 = *(int *)(local_60 + 8);
            bVar11 = iVar6 == iVar8;
            if (bVar11) {
              *(int *)(local_60 + 8) = iVar6 + 1;
              iVar8 = iVar6;
            }
            iVar6 = iVar8;
            UNLOCK();
          } while (!bVar11);
          local_68 = param_1[1];
        }
        FUN_140592b68(param_2,&local_68,2,0);
        if (local_58 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_147705805;
      }
      *(undefined1 *)((longlong)param_1 + 0x439) = 1;
      FUN_1469a9da8(DAT_14c98e618,param_1 + 0x72,0);
      if (((int)param_1[0x84] != 0) && ((longlong *)param_1[0x83] != (longlong *)0x0)) {
        (**(code **)(*(longlong *)param_1[0x83] + 0x60))();
      }
      FUN_146a62c5e(param_1,param_2);
      goto LAB_147705a1b;
    }
    if (cVar4 == '\x01') {
LAB_1477059ef:
      cVar4 = *(char *)((longlong)param_1 + 0x439);
      FUN_147705fda(param_1);
    }
    else {
      lVar10 = *(longlong *)(param_4 + 0x20);
      plVar3 = *(longlong **)(param_4 + 0x30);
      lVar7 = DAT_14c966f40;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        lVar7 = DAT_14c966f40;
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
      }
      if (lVar10 == lVar7) goto LAB_1477059ef;
      cVar4 = *(char *)((longlong)param_1 + 0x439);
    }
    if (cVar4 != '\x01') goto LAB_147705a0a;
  }
  else if (cVar5 == '\x03') {
    lVar10 = param_1[0x7e];
    if (lVar10 != 0) {
      plVar3 = *(longlong **)(param_1[0x7f] + 0x8a0);
      if (plVar3 == (longlong *)0x0) {
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
LAB_147705a99:
        iVar6 = -1;
        iVar8 = 0;
      }
      else {
        (**(code **)(*plVar3 + 8))(plVar3,&local_58);
        iVar6 = -1;
        if ((longlong)local_50 == 0) goto LAB_147705a99;
        lVar9 = (longlong)local_50 << 3;
        lVar7 = 0;
        do {
          iVar8 = local_50;
          if (local_58[lVar7] == lVar10) {
            iVar6 = (int)lVar7;
            break;
          }
          lVar7 = lVar7 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
      if (iVar6 < iVar8 + -1) {
        lVar10 = local_58[(longlong)iVar6 + 1];
LAB_147705aad:
        if (lVar10 == 0) {
          FUN_147706508();
        }
        else {
          FUN_147706086(param_1[0x7f],lVar10,3);
        }
      }
    }
  }
  else {
    if (cVar5 != '\x02') {
      FUN_146a63056(param_1,param_2,param_3,param_4);
      goto LAB_147705a1b;
    }
    lVar10 = param_1[0x7e];
    if ((lVar10 != 0) && (plVar3 = *(longlong **)(param_1[0x7f] + 0x8a0), plVar3 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar3 + 8))(plVar3,&local_58);
      if ((longlong)local_50 != 0) {
        lVar9 = (longlong)local_50 << 3;
        lVar7 = 0;
        do {
          if (local_58[lVar7] == lVar10) {
            if (0 < (int)(uint)lVar7) {
              lVar10 = local_58[(ulonglong)((uint)lVar7 & 0x7fffffff) - 1];
              goto LAB_147705aad;
            }
            break;
          }
          lVar7 = lVar7 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
    }
  }
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_147705805:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147705b08 FUN_147705b08 body=461 status=ok
// SIG undefined FUN_147705b08(void)

longlong * FUN_147705b08(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = FUN_14001cc68(0x70,0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_147705b46:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_147705b46;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    uVar3 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
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
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    bVar9 = false;
    local_48 = uVar3;
    plStack_40 = plVar2;
  }
  plVar2 = plStack_40;
  FUN_1477065a2(lVar6,&local_48);
  *param_2 = lVar6;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149ef0b50;
  plVar7[2] = lVar6;
  param_2[1] = (longlong)plVar7;
  if ((lVar6 == 0) ||
     (((*(longlong *)(lVar6 + 8) != 0 && (*(longlong *)(lVar6 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar6 + 0x10) + 8))))) goto LAB_147705c82;
  if (plVar7 == (longlong *)0x0) {
    *(longlong *)(lVar6 + 8) = lVar6;
    plVar8 = *(longlong **)(lVar6 + 0x10);
    if (plVar8 == (longlong *)0x0) goto LAB_147705c82;
LAB_147705be5:
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    *(longlong **)(lVar6 + 0x10) = plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_147705c82;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong *)(lVar6 + 8) = lVar6;
    if (*(longlong **)(lVar6 + 0x10) != plVar7) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(lVar6 + 0x10);
      if (plVar8 != (longlong *)0x0) goto LAB_147705be5;
      *(longlong **)(lVar6 + 0x10) = plVar7;
    }
  }
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
LAB_147705c82:
  if (!bVar9) {
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147705ce4 FUN_147705ce4 body=203 status=ok
// SIG undefined FUN_147705ce4(void)

undefined8 FUN_147705ce4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab7680) {
    FUN_144b3d300(&DAT_14cab7680);
    if (DAT_14cab7680 == -1) {
      FUN_140056680(&DAT_14cab7670,L"Combo Box");
      atexit((_func_5014 *)&LAB_1433324d2);
      _Init_thread_footer(&DAT_14cab7680);
    }
  }
  FUN_140009b9a(local_28,&DAT_14cab7670);
  FUN_14023423e(param_2,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147705db0 FUN_147705db0 body=215 status=ok
// SIG undefined FUN_147705db0(void)

undefined8 FUN_147705db0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_146a62c32();
  if (cVar1 == '\0') {
    FUN_1469a9da8(DAT_14c98e618,param_1 + 0x390,0);
    if ((*(int *)(param_1 + 0x420) != 0) && (*(longlong **)(param_1 + 0x418) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(param_1 + 0x418) + 0x60))();
    }
  }
  else {
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x3f8) + 0x4e8) + 0xd0))
              (*(longlong *)(param_1 + 0x3f8) + 0x4e8,&local_30);
    if (0 < local_28) {
      FUN_147705f56(param_1,*local_30,3);
    }
    if (local_30 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_146a62c5e(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147705e88 FUN_147705e88 body=206 status=ok
// SIG undefined FUN_147705e88(void)

void FUN_147705e88(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5094c0;
  param_1[0x3c] = &PTR_LAB_14a509720;
  plVar3 = (longlong *)param_1[0x89];
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
  FUN_1449db362(param_1 + 0x85);
  FUN_1449db362(param_1 + 0x83);
  plVar3 = (longlong *)param_1[0x82];
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
  plVar3 = (longlong *)param_1[0x80];
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
  FUN_1449db362(param_1 + 0x7c);
  FUN_146a3ee4c(param_1);
  return;
}



// FUNCTION 147705f56 FUN_147705f56 body=132 status=ok
// SIG undefined FUN_147705f56(void)

void FUN_147705f56(longlong *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  
  if (param_3 == 1) {
    return;
  }
  if (param_1[0x7e] != param_2) {
    FUN_1469a9da8(DAT_14c98e618,param_1 + 0x75,0);
    param_1[0x7e] = param_2;
    if (((int)param_1[0x7d] != 0) && (plVar1 = (longlong *)param_1[0x7c], plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x60))(plVar1,param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147705fd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,0,1,0);
  return;
}



// FUNCTION 147705fda FUN_147705fda body=170 status=ok
// SIG undefined FUN_147705fda(void)

void FUN_147705fda(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x439) = 0;
    lVar1 = *(longlong *)(param_1 + 0x3f0);
    if (lVar1 != 0) {
      FUN_147706086(*(undefined8 *)(param_1 + 0x3f8),lVar1,1);
      lVar2 = *(longlong *)(param_1 + 0x3f8);
      *(longlong *)(lVar2 + 0x7c8) = lVar1;
      *(undefined4 *)(lVar2 + 2000) = 0;
      FUN_146af42a2();
    }
    local_20 = &local_30;
    local_28 = &LAB_147706422;
    local_30 = param_1;
    FUN_1469a9e54(DAT_14c98e618,&local_28,0);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147706086 FUN_147706086 body=131 status=ok
// SIG undefined FUN_147706086(void)

void FUN_147706086(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  FUN_14770610a(param_1,&local_30);
  if (local_28 == '\x01') {
    local_38 = local_30;
    FUN_147706306(param_1 + 0x710,0);
    FUN_147706374(param_1,&local_38,1,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14770610a FUN_14770610a body=507 status=ok
// SIG undefined FUN_14770610a(void)

longlong * FUN_14770610a(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_3;
  if (((*(int *)(param_1 + 0x800) != 0) && (*(longlong **)(param_1 + 0x7f8) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7f8) + 0x30))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x800) == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)(param_1 + 0x7f8);
    }
    cVar1 = (**(code **)(*plVar4 + 0x58))(plVar4,lVar3);
    if (cVar1 == '\0') {
      if (*(longlong **)(param_1 + 0x8a0) == (longlong *)0x0) {
        local_60 = 0;
        local_58 = 0;
        uVar6 = 0xffffffff;
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x8a0) + 8))();
        uVar6 = 0xffffffff;
        if ((longlong)local_58 != 0) {
          lVar2 = (longlong)local_58 << 3;
          lVar5 = 0;
          do {
            if (*(longlong *)(local_60 + lVar5 * 8) == lVar3) {
              uVar6 = (uint)lVar5;
              break;
            }
            lVar5 = lVar5 + 1;
            lVar2 = lVar2 + -8;
          } while (lVar2 != 0);
        }
      }
      iVar7 = 1;
      if (*(int *)(param_1 + 0x718) - *(int *)(param_1 + 0x744) == 1) {
        local_48 = param_1 + 0x720;
        local_50 = 0x100000000;
        local_40 = 0xffffffff;
        local_38 = 0;
        if (*(int *)(param_1 + 0x738) == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1449c0562(&local_50);
          lVar3 = (longlong)local_40._4_4_;
        }
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x710) + lVar3 * 0x10);
        if (lVar3 != 0) {
          iVar7 = -1;
          if ((longlong)local_58 != 0) {
            lVar2 = (longlong)local_58 << 3;
            lVar5 = 0;
            do {
              if (*(longlong *)(local_60 + lVar5 * 8) == lVar3) {
                iVar7 = (int)lVar5;
                break;
              }
              lVar5 = lVar5 + 1;
              lVar2 = lVar2 + -8;
            } while (lVar2 != 0);
          }
          iVar7 = (uint)(iVar7 < (int)uVar6) * 2 + -1;
        }
      }
      do {
        uVar6 = uVar6 + iVar7;
        if (((int)uVar6 < 0) || (local_58 <= (int)uVar6)) {
          *(undefined1 *)(param_2 + 1) = 0;
          goto LAB_147706173;
        }
        if (*(int *)(param_1 + 0x800) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(param_1 + 0x7f8);
        }
        lVar3 = *(longlong *)(local_60 + (ulonglong)uVar6 * 8);
        cVar1 = (**(code **)(*plVar4 + 0x58))(plVar4,lVar3);
      } while (cVar1 == '\0');
    }
  }
  *param_2 = lVar3;
  *(undefined1 *)(param_2 + 1) = 1;
LAB_147706173:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147706306 FUN_147706306 body=110 status=ok
// SIG undefined FUN_147706306(void)

void FUN_147706306(longlong param_1,uint param_2)

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
    FUN_1400dbf46(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_14075bc1a(param_1);
    return;
  }
  FUN_14688540c(param_1);
  FUN_1400dbf46(param_1,param_2);
  return;
}



// FUNCTION 147706374 FUN_147706374 body=174 status=ok
// SIG undefined FUN_147706374(void)

void FUN_147706374(longlong param_1,undefined8 *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x3a0) != 0) && (*(longlong **)(param_1 + 0x398) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x3a0) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x398);
      }
      iVar2 = (**(code **)(*plVar3 + 0x58))();
      *(int *)(param_1 + 0x390) = iVar2;
      goto LAB_1477063ce;
    }
  }
  iVar2 = *(int *)(param_1 + 0x390);
LAB_1477063ce:
  if (iVar2 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x4e8) + 0x28))
              (param_1 + 0x4e8,*param_2,param_3,param_4 != 3);
                    /* WARNING: Could not recover jumptable at 0x00014770640e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x4e8) + 0x40))(param_1 + 0x4e8,param_4);
    return;
  }
  return;
}



// FUNCTION 147706428 FUN_147706428 body=222 status=ok
// SIG undefined FUN_147706428(void)

void FUN_147706428(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_1;
  local_18 = *(longlong **)(lVar3 + 0x10);
  if (local_18 == (longlong *)0x0) {
    local_18 = (longlong *)0x0;
    local_20 = 0;
  }
  else {
    iVar7 = (int)local_18[1];
    local_20 = 0;
    do {
      if (iVar7 == 0) {
        local_18 = (longlong *)0x0;
        goto LAB_147706470;
      }
      LOCK();
      iVar5 = (int)local_18[1];
      bVar8 = iVar7 == iVar5;
      if (bVar8) {
        *(int *)(local_18 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar8);
    local_20 = *(undefined8 *)(lVar3 + 8);
  }
LAB_147706470:
  local_30 = *(undefined8 *)(lVar3 + 0x3f8);
  local_28 = *(longlong *)(lVar3 + 0x400);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  cVar6 = FUN_1469b70dc(param_2,&local_30);
  if (cVar6 != '\0') {
    FUN_1410a3cc2(param_2,&local_20,2);
  }
  plVar4 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147706508 FUN_147706508 body=153 status=ok
// SIG undefined FUN_147706508(void)

void FUN_147706508(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x3a0) != 0) && (*(longlong **)(param_1 + 0x398) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x3a0) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x398);
      }
      iVar2 = (**(code **)(*plVar3 + 0x58))();
      *(int *)(param_1 + 0x390) = iVar2;
      goto LAB_147706554;
    }
  }
  iVar2 = *(int *)(param_1 + 0x390);
LAB_147706554:
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x718) != *(int *)(param_1 + 0x744))) {
    (**(code **)(*(longlong *)(param_1 + 0x4e8) + 0x30))(param_1 + 0x4e8);
                    /* WARNING: Could not recover jumptable at 0x00014770659a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x4e8) + 0x40))(param_1 + 0x4e8,3);
    return;
  }
  return;
}



// FUNCTION 1477065a2 FUN_1477065a2 body=143 status=ok
// SIG undefined FUN_1477065a2(void)

undefined8 * FUN_1477065a2(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_14697595a(param_1,&local_28,3);
  *param_1 = &PTR_FUN_14a509740;
  param_1[0xd] = &PTR_LAB_14a509830;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147706632 FUN_147706632 body=38 status=ok
// SIG undefined FUN_147706632(void)

undefined8 FUN_147706632(undefined8 param_1,int param_2)

{
  FUN_14697900e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14770665e FUN_14770665e body=622 status=ok
// SIG undefined FUN_14770665e(void)

undefined8 * FUN_14770665e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_98 [40];
  longlong *local_70 [2];
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar8 = *(longlong **)(param_1 + -0x48), plVar8 != (longlong *)0x0)) && (0 < (int)plVar8[1])
     ) {
    lVar9 = 0;
    iVar5 = (int)plVar8[1];
    do {
      iVar4 = iVar5;
      if (iVar4 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_1477066df;
      }
      LOCK();
      iVar5 = (int)plVar8[1];
      bVar10 = iVar4 == iVar5;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar4 + 1;
        iVar5 = iVar4;
      }
      UNLOCK();
    } while (!bVar10);
    lVar9 = *(longlong *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
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
LAB_1477066df:
    bVar10 = true;
    if (*(longlong *)(lVar9 + 0x3f0) != 0) {
      local_40 = *(longlong *)(lVar9 + 0x3f0);
      (**(code **)(*(longlong *)(*(longlong *)(lVar9 + 0x3f8) + 0x4e8) + 0xd8))
                (*(longlong *)(lVar9 + 0x3f8) + 0x4e8,&local_50);
      if (local_50 == (longlong *)0x0) {
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar2 = (int *)((longlong)local_48 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_48 + 0x10))(local_48);
            }
          }
        }
      }
      else {
        (**(code **)(*local_50 + 0x58))(local_50,&local_60);
        FUN_14697f6be(local_60,local_70,0);
        puVar6 = (undefined8 *)FUN_1447a1f4a(local_70);
        *param_2 = 0;
        iVar5 = *(int *)(puVar6 + 1);
        pvVar3 = (void *)*puVar6;
        *(int *)(param_2 + 1) = iVar5;
        if ((longlong)iVar5 == 0) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(param_2,iVar5,0);
          memcpy((void *)*param_2,pvVar3,(longlong)iVar5 * 2);
        }
        if (local_70[0] != (longlong *)0x0) {
          (**(code **)(*local_70[0] + 0x10))();
        }
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_58 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar2 = (int *)((longlong)local_58 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_58 + 0x10))(local_58);
            }
          }
        }
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar2 = (int *)((longlong)local_48 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_48 + 0x10))(local_48);
            }
          }
        }
        bVar10 = false;
      }
    }
    if (iVar4 != 0) {
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
    if (!bVar10) goto LAB_147706857;
  }
  uVar7 = FUN_140e82300();
  puVar6 = (undefined8 *)FUN_1447a1f4a(uVar7);
  *param_2 = 0;
  iVar5 = *(int *)(puVar6 + 1);
  pvVar3 = (void *)*puVar6;
  *(int *)(param_2 + 1) = iVar5;
  if ((longlong)iVar5 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar5,0);
    memcpy((void *)*param_2,pvVar3,(longlong)iVar5 * 2);
  }
LAB_147706857:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1477068ce FUN_1477068ce body=81 status=ok
// SIG undefined FUN_1477068ce(void)

undefined8 FUN_1477068ce(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x28))(param_1,local_28);
  FUN_146918c70(param_2,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147706920 FUN_147706920 body=167 status=ok
// SIG undefined FUN_147706920(void)

void FUN_147706920(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14770699b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14770699b;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14770699b:
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
                    /* WARNING: Could not recover jumptable at 0x0001477069bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1477069c8 FUN_1477069c8 body=29 status=ok
// SIG undefined FUN_1477069c8(void)

undefined8 FUN_1477069c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147706a00 FUN_147706a00 body=29 status=ok
// SIG undefined FUN_147706a00(void)

bool FUN_147706a00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147706a1e FUN_147706a1e body=26 status=ok
// SIG undefined FUN_147706a1e(void)

bool FUN_147706a1e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147706a38 FUN_147706a38 body=24 status=ok
// SIG undefined FUN_147706a38(void)

bool FUN_147706a38(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147706a5c FUN_147706a5c body=101 status=ok
// SIG undefined FUN_147706a5c(void)

void FUN_147706a5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5098e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a509870;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147706ac2 FUN_147706ac2 body=101 status=ok
// SIG undefined FUN_147706ac2(void)

void FUN_147706ac2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5098e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a509870;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147706b28 FUN_147706b28 body=134 status=ok
// SIG undefined FUN_147706b28(void)

void FUN_147706b28(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a5098e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a509870;
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
                    /* WARNING: Could not recover jumptable at 0x000147706b9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147706bae FUN_147706bae body=52 status=ok
// SIG undefined FUN_147706bae(void)

undefined8 FUN_147706bae(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3);
  return param_2;
}



// FUNCTION 147706be2 FUN_147706be2 body=206 status=ok
// SIG undefined FUN_147706be2(void)

bool FUN_147706be2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar5 = local_38;
  }
  else {
    lVar5 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar4 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar4,local_48,param_2);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
  }
  if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147706cb4 FUN_147706cb4 body=3282 status=ok
// SIG undefined FUN_147706cb4(void)

void FUN_147706cb4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  longlong *plVar10;
  code *pcVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined1 auStack_948 [32];
  undefined1 *local_928;
  longlong *local_918;
  longlong local_910;
  undefined8 local_908;
  longlong local_900;
  undefined4 local_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  undefined4 uStack_8e8;
  undefined1 uStack_8e4;
  undefined8 local_8e0;
  undefined4 local_8d8;
  undefined4 local_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined1 local_8b8;
  undefined8 local_8b0;
  undefined4 local_8a8;
  undefined4 local_898;
  undefined4 uStack_894;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  uint local_888;
  undefined1 local_884;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined1 local_870 [16];
  undefined1 local_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined1 local_848 [8];
  longlong *local_840;
  undefined1 local_831;
  code *local_830;
  undefined8 local_828;
  undefined1 local_811;
  code *local_810;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined8 local_7f8;
  longlong local_7f0;
  undefined4 local_7e8;
  undefined1 local_7e4;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 local_7c8;
  undefined8 local_7c0;
  longlong local_7b8;
  undefined8 local_7b0;
  longlong *local_7a8;
  undefined4 local_7a0;
  undefined1 local_79c;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  longlong *local_780;
  undefined8 local_778;
  undefined1 local_770;
  undefined8 local_768;
  undefined8 uStack_760;
  longlong local_5d0;
  longlong local_5c8;
  code *local_5c0;
  longlong *local_5b8;
  undefined8 local_5b0;
  longlong *local_5a8;
  undefined1 local_590 [32];
  undefined1 local_570;
  undefined1 local_56f;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 local_558;
  undefined1 local_554;
  undefined1 local_550 [56];
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined1 local_508;
  undefined1 local_500 [48];
  undefined1 local_4d0;
  char local_4cf;
  undefined1 local_4ce;
  undefined1 local_4c8 [32];
  undefined4 local_4a8;
  undefined1 local_4a4;
  undefined1 local_4a0 [112];
  undefined8 local_430;
  undefined1 local_3c8 [192];
  wchar_t *local_308;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined8 local_130;
  longlong *local_128;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined1 local_a0 [64];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_948;
  *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(param_2 + 0x1c8);
  lVar16 = *(longlong *)(param_2 + 0x1b8);
  *(longlong *)(param_1 + 0x3c8) = lVar16;
  uVar6 = *(undefined4 *)(lVar16 + 0x594);
  uVar7 = *(undefined4 *)(lVar16 + 0x598);
  uVar8 = *(undefined4 *)(lVar16 + 0x59c);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(lVar16 + 0x590);
  *(undefined4 *)(param_1 + 0x3d4) = uVar6;
  *(undefined4 *)(param_1 + 0x3d8) = uVar7;
  *(undefined4 *)(param_1 + 0x3dc) = uVar8;
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  local_910 = lVar16 + 0x20;
  if (*(longlong *)(param_2 + 0x1c0) != 0) {
    local_910 = *(longlong *)(param_2 + 0x1c0);
  }
  plVar15 = (longlong *)(lVar16 + 0x550);
  if (*(char *)(param_2 + 0x2b0) != '\0') {
    plVar15 = (longlong *)(param_2 + 0x298);
  }
  lVar12 = *plVar15;
  lVar14 = lVar16;
  if (DAT_14c950c29 == 1) {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *plVar15;
      lVar14 = *(longlong *)(param_1 + 0x3c8);
    }
  }
  bVar9 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x390) = lVar12;
  *(longlong *)(param_1 + 0x398) = plVar15[1];
  *(longlong *)(param_1 + 0x3a0) = plVar15[2];
  plVar15 = (longlong *)(lVar14 + 0x568);
  if (*(char *)(param_2 + 0x2d0) != '\0') {
    plVar15 = (longlong *)(param_2 + 0x2b8);
  }
  lVar12 = *plVar15;
  if ((bVar9 & 1) != 0) {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *plVar15;
    }
  }
  *(longlong *)(param_1 + 0x3a8) = lVar12;
  *(longlong *)(param_1 + 0x3b0) = plVar15[1];
  *(longlong *)(param_1 + 0x3b8) = plVar15[2];
  FUN_14009d848(param_1 + 0x418,param_2 + 0x268);
  FUN_147708582(param_1 + 0x3e0,param_2 + 0x248);
  FUN_147708606(param_1 + 0x428,param_2 + 600);
  *(undefined1 *)(param_1 + 0x438) = *(undefined1 *)(param_2 + 0x2d9);
  *(undefined1 *)(param_1 + 0x439) = 0;
  uVar13 = *(undefined8 *)(param_2 + 0x278);
  lVar12 = *(longlong *)(param_2 + 0x280);
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  plVar15 = *(longlong **)(param_1 + 0x410);
  *(undefined8 *)(param_1 + 0x408) = uVar13;
  *(longlong *)(param_1 + 0x410) = lVar12;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar15 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  FUN_140a53a96(&local_308);
  local_7a0 = *(undefined4 *)(param_2 + 0x294);
  local_79c = 1;
  local_798 = 0;
  uStack_790 = 0;
  local_a4 = 1;
  local_a8 = local_7a0;
  FUN_144a450dc(local_a0,&local_798);
  FUN_1449db362(&local_798);
  FUN_147707988(&local_778);
  local_7d0 = *(undefined8 *)(param_2 + 0x228);
  local_7c8 = *(undefined8 *)(param_2 + 0x230);
  local_7c0 = *(undefined8 *)(param_2 + 0x238);
  local_7b8 = *(longlong *)(param_2 + 0x240);
  if (local_7b8 != 0) {
    LOCK();
    *(int *)(local_7b8 + 8) = *(int *)(local_7b8 + 8) + 1;
    UNLOCK();
  }
  FUN_147707c02(&local_778,&local_7d0);
  local_830 = FUN_147707ce6;
  local_828._0_4_ = 0;
  FUN_14770868a(&local_810,param_1,&local_830);
  FUN_144a450dc(&local_5c8,&local_810);
  FUN_1449db362(&local_810);
  local_830 = FUN_147705f56;
  local_828._0_4_ = 0;
  FUN_14770e88a(&local_810,param_1,&local_830);
  FUN_144a450dc(local_4c8,&local_810);
  FUN_1449db362(&local_810);
  local_830 = FUN_1477081a4;
  local_828 = (longlong *)((ulonglong)local_828._4_4_ << 0x20);
  FUN_14770ed82(&local_810,param_1,&local_830);
  FUN_144a450dc(local_3c8,&local_810);
  FUN_1449db362(&local_810);
  local_7e8 = 1;
  local_7e4 = 1;
  local_7e0 = 0;
  uStack_7d8 = 0;
  local_4a8 = 1;
  local_4a4 = 1;
  FUN_144a450dc(local_4a0,&local_7e0);
  FUN_1449db362(&local_7e0);
  local_430 = *(undefined8 *)(param_2 + 0x1d0);
  local_7f8 = *(undefined8 *)(param_2 + 0x278);
  local_7f0 = *(longlong *)(param_2 + 0x280);
  if (local_7f0 != 0) {
    LOCK();
    *(int *)(local_7f0 + 8) = *(int *)(local_7f0 + 8) + 1;
    UNLOCK();
  }
  FUN_1477082ea(&local_778,&local_7f8);
  local_928 = &local_811;
  FUN_14770f2b8(&local_810,"SComboListType","Runtime\\Slate\\Public\\Widgets/Input/SComboBox.h",0xda
               );
  lVar12 = CONCAT44(uStack_804,local_808);
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  plVar15 = *(longlong **)(param_1 + 0x400);
  *(code **)(param_1 + 0x3f8) = local_810;
  *(longlong *)(param_1 + 0x400) = lVar12;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar15 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  FUN_147708370(&local_810,&local_7b0,&local_778);
  plVar1 = local_128;
  plVar15 = local_7a8;
  if (local_7a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_7a8 + 1) = (int)local_7a8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_7a8 + 1) = (int)local_7a8[1] + 1;
    UNLOCK();
  }
  local_130 = local_7b0;
  local_128 = local_7a8;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar1 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
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
  local_928 = &local_831;
  FUN_140a53d66(&local_830,&DAT_149efe19f,"Runtime\\Slate\\Public\\Widgets/Input/SComboBox.h",0xd7);
  FUN_140a50bf4(&local_830,&local_788,&local_308);
  plVar1 = local_780;
  if (local_780 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x440) = local_788;
    plVar17 = *(longlong **)(param_1 + 0x448);
    if (plVar17 == (longlong *)0x0) goto LAB_1477071fa;
    *(undefined8 *)(param_1 + 0x448) = 0;
LAB_14770794c:
    LOCK();
    plVar1 = plVar17 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1477071fa;
    (**(code **)*plVar17)(plVar17);
    LOCK();
    piVar2 = (int *)((longlong)plVar17 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_780 + 1) = (int)local_780[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x440) = local_788;
    plVar17 = *(longlong **)(param_1 + 0x448);
    if (local_780 != plVar17) {
      *(longlong **)(param_1 + 0x448) = local_780;
      if (plVar17 == (longlong *)0x0) goto LAB_1477071fa;
      goto LAB_14770794c;
    }
    LOCK();
    plVar17 = local_780 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 != 0) goto LAB_1477071fa;
    (**(code **)*local_780)(local_780);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    UNLOCK();
    plVar17 = plVar1;
  }
  if (iVar4 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
  }
LAB_1477071fa:
  if (local_780 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_780 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_780)(local_780);
      LOCK();
      piVar2 = (int *)((longlong)local_780 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_780 + 0x10))(local_780);
      }
    }
  }
  plVar1 = local_828;
  if (local_828 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_828 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*local_828)(local_828);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar15 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (local_7a8 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_7a8 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_7a8)(local_7a8);
      LOCK();
      piVar2 = (int *)((longlong)local_7a8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_7a8 + 0x10))(local_7a8);
      }
    }
  }
  plVar15 = (longlong *)CONCAT44(uStack_804,local_808);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar15 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  FUN_1477083e4(&local_778);
  FUN_140a5660c(&local_308);
  local_830 = *(code **)(param_2 + 0x1a8);
  local_828 = *(longlong **)(param_2 + 0x1b0);
  pcVar11 = local_830;
  if (local_828 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_828 + 1) = (int)local_828[1] + 1;
    UNLOCK();
    pcVar11 = *(code **)(param_2 + 0x1a8);
  }
  lVar16 = lVar16 + 0x10;
  plVar15 = (longlong *)(param_1 + 0x448);
  if (pcVar11 == DAT_14c98dec8) {
    local_918 = (longlong *)(param_1 + 0x448);
    FUN_140a570d8(&local_778);
    local_308 = L"ContentWarning";
    local_300 = 0xe;
    FUN_1446e940c(&local_788,&local_308);
    local_308 = L"SComboBox";
    local_300 = 9;
    FUN_1446e940c(&local_7b0,&local_308);
    FUN_140208bae(&local_810,&local_7b0,&local_788,L"No Content Provided");
    FUN_14023423e(local_870,&local_810);
    local_860 = 1;
    local_858 = 0;
    uStack_850 = 0;
    lVar12 = FUN_140a54906(&local_778,local_870);
    local_898 = 0x3f800000;
    uStack_894 = 0;
    uStack_890 = 0;
    uStack_88c = 0x3f800000;
    local_888 = local_888 & 0xffffff00;
    local_884 = 1;
    local_880 = 0;
    uStack_878 = 0;
    *(uint *)(lVar12 + 0x280) = local_888;
    *(undefined4 *)(lVar12 + 0x270) = 0x3f800000;
    *(undefined4 *)(lVar12 + 0x274) = 0;
    *(undefined4 *)(lVar12 + 0x278) = 0;
    *(undefined4 *)(lVar12 + 0x27c) = 0x3f800000;
    *(undefined1 *)(lVar12 + 0x284) = 1;
    FUN_144a450dc(lVar12 + 0x288,&local_880);
    FUN_1449db362(&local_880);
    local_928 = &local_811;
    FUN_140a54526(&local_308,"STextBlock","Runtime\\Slate\\Public\\Widgets/Input/SComboBox.h",0xe9);
    uVar13 = FUN_146abbae8(&local_308,&local_830);
    FUN_140a52852(uVar13,local_848,lVar12);
    if (local_840 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_840 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*local_840)(local_840);
        LOCK();
        piVar2 = (int *)((longlong)local_840 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_840 + 0x10))(local_840);
        }
      }
    }
    plVar15 = (longlong *)CONCAT44(uStack_2fc,local_300);
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar15 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    if (local_810 != (code *)0x0) {
      (**(code **)(*(longlong *)local_810 + 0x10))();
    }
    FUN_140a59ae6(&local_778);
    plVar15 = local_918;
  }
  FUN_146a0f1de(&local_778);
  plVar17 = local_5b8;
  plVar1 = local_828;
  local_5c8 = local_910;
  if (*(char *)(param_2 + 0x291) == '\x01') {
    local_4d0 = *(undefined1 *)(param_2 + 0x290);
    local_4cf = '\x01';
  }
  else if (local_4cf == '\x01') {
    local_4cf = '\0';
  }
  if (local_828 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_828 + 1) = (int)local_828[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_828 + 1) = (int)local_828[1] + 1;
    UNLOCK();
  }
  local_5c0 = local_830;
  local_5b8 = local_828;
  local_5d0 = lVar16;
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar17 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar2 = (int *)((longlong)plVar17 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  plVar17 = local_5a8;
  local_5b0 = *(undefined8 *)(param_1 + 0x440);
  plVar15 = (longlong *)*plVar15;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  plVar10 = plVar15;
  if (local_5a8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_5a8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      puVar5 = (undefined8 *)*local_5a8;
      local_5a8 = plVar15;
      (*(code *)*puVar5)(plVar17);
      LOCK();
      piVar2 = (int *)((longlong)plVar17 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar10 = local_5a8;
      if (*piVar2 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        plVar10 = local_5a8;
      }
    }
  }
  local_5a8 = plVar10;
  local_56f = *(undefined1 *)(param_2 + 0x2d8);
  local_8c8 = *(undefined4 *)(param_2 + 0x1d8);
  uStack_8c4 = *(undefined4 *)(param_2 + 0x1dc);
  uStack_8c0 = *(undefined4 *)(param_2 + 0x1e0);
  uStack_8bc = *(undefined4 *)(param_2 + 0x1e4);
  local_8b8 = *(undefined1 *)(param_2 + 0x1e8);
  local_8b0 = 0;
  local_8a8 = 0;
  FUN_140a58be0(&local_8b0,param_2 + 0x1f0);
  local_508 = local_8b8;
  local_518 = local_8c8;
  uStack_514 = uStack_8c4;
  uStack_510 = uStack_8c0;
  uStack_50c = uStack_8bc;
  FUN_144a450dc(local_500,&local_8b0);
  FUN_1449db362(&local_8b0);
  uStack_8e8 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x20d) >> 0x18);
  uStack_8e4 = (undefined1)((ulonglong)*(undefined8 *)(param_2 + 0x20d) >> 0x38);
  local_8f8 = *(undefined4 *)(param_2 + 0x200);
  uStack_8f4 = *(undefined4 *)(param_2 + 0x204);
  uStack_8f0 = *(undefined4 *)(param_2 + 0x208);
  uStack_8ec = *(undefined4 *)(param_2 + 0x20c);
  local_8e0 = 0;
  local_8d8 = 0;
  FUN_140a5aaa0(&local_8e0,param_2 + 0x218);
  local_558 = uStack_8e8;
  local_568 = local_8f8;
  uStack_564 = uStack_8f4;
  uStack_560 = uStack_8f0;
  uStack_55c = uStack_8ec;
  local_554 = uStack_8e4;
  FUN_144a450dc(local_550,&local_8e0);
  FUN_1449db362(&local_8e0);
  local_810 = FUN_147705fda;
  local_808 = 0;
  FUN_147718422(&local_308,param_1);
  FUN_144a450dc(local_590,&local_308);
  FUN_1449db362(&local_308);
  local_570 = *(undefined1 *)(param_2 + 0x2da);
  local_4ce = *(undefined1 *)(param_2 + 0x2db);
  FUN_146a616ac(param_1,&local_778);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar15 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
    LOCK();
    plVar17 = plVar15 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar1 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
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
  FUN_146a0f6a8(&local_778);
  local_908 = *(undefined8 *)(param_1 + 0x3f8);
  local_900 = *(longlong *)(param_1 + 0x400);
  if (local_900 != 0) {
    LOCK();
    *(int *)(local_900 + 0xc) = *(int *)(local_900 + 0xc) + 1;
    UNLOCK();
  }
  FUN_146abbb6e(param_1,&local_908);
  lVar16 = *(longlong *)(param_2 + 0x288);
  *(longlong *)(param_1 + 0x3f0) = lVar16;
  if (lVar16 != 0) {
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x3f8) + 0x4e8) + 0x28))
              (*(longlong *)(param_1 + 0x3f8) + 0x4e8,lVar16,1,0);
    lVar12 = *(longlong *)(param_1 + 0x3f8);
    *(longlong *)(lVar12 + 0x7c8) = lVar16;
    *(undefined4 *)(lVar12 + 2000) = 0;
    FUN_146af42a2();
  }
  uVar13 = *(undefined8 *)(param_1 + 0x3f8);
  local_778 = FUN_141319416();
  local_770 = 1;
  local_768 = 0;
  uStack_760 = 0;
  FUN_146af67b6(uVar13,&local_778);
  FUN_1449db362(&local_768);
  plVar15 = local_828;
  if (local_828 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_828 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_828)(local_828);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_948) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147707988 FUN_147707988 body=633 status=ok
// SIG undefined FUN_147707988(void)

longlong FUN_147707988(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_30,"ListView",1);
  uVar4 = 0;
  uVar3 = FUN_1458178ee(lVar2,local_30,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1ec) = 0;
  *(undefined8 *)(param_1 + 500) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x23d) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 600) = 6;
  *(undefined1 *)(param_1 + 0x25c) = 1;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 3;
  *(undefined1 *)(param_1 + 0x2d4) = 1;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined1 *)(param_1 + 0x2f8) = 1;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x310) = 1;
  *(undefined1 *)(param_1 + 0x315) = 0;
  *(undefined1 *)(param_1 + 800) = 0;
  *(undefined2 *)(param_1 + 0x328) = 0x19;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined2 *)(param_1 + 0x340) = 0;
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_38,"ScrollBar",1);
  uVar3 = FUN_145817968(lVar2,local_38,0,0);
  *(undefined8 *)(param_1 + 0x348) = uVar3;
  *(undefined2 *)(param_1 + 0x350) = 0;
  lVar2 = DAT_14c96b2f0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    bVar1 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar1 ^ 1);
  }
  *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(lVar2 + uVar4 * 4);
  *(undefined4 *)(param_1 + 0x358) = 0x3f000000;
  *(undefined8 *)(param_1 + 0x35c) = 0;
  *(undefined8 *)(param_1 + 0x364) = 0;
  *(undefined2 *)(param_1 + 0x36c) = 0x101;
  *(undefined1 *)(param_1 + 0x36e) = 0;
  *(undefined2 *)(param_1 + 0x370) = 0x101;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined1 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3ac) = 0;
  *(undefined8 *)(param_1 + 0x3b4) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147707c02 FUN_147707c02 body=228 status=ok
// SIG undefined FUN_147707c02(void)

longlong FUN_147707c02(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  plVar3 = *(longlong **)(param_1 + 0x238);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x238) = 0;
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
  *(undefined8 *)(param_1 + 0x220) = *param_2;
  *(undefined8 *)(param_1 + 0x228) = param_2[1];
  uVar4 = param_2[2];
  lVar5 = param_2[3];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x230) = uVar4;
  *(longlong *)(param_1 + 0x238) = lVar5;
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
  plVar3 = (longlong *)param_2[3];
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
  return param_1;
}



// FUNCTION 147707ce6 FUN_147707ce6 body=1212 status=ok
// SIG undefined FUN_147707ce6(void)

undefined8 *
FUN_147707ce6(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  undefined1 auStack_788 [32];
  undefined1 *local_768;
  undefined8 local_758;
  undefined8 local_750;
  longlong *local_748;
  undefined1 local_731;
  wchar_t *local_730;
  undefined4 local_728;
  undefined4 uStack_724;
  undefined1 local_718 [4];
  undefined1 local_714 [4];
  longlong *local_710 [2];
  undefined1 local_700 [16];
  undefined1 local_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  longlong *local_6d0;
  undefined8 local_6c8;
  longlong *local_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined1 local_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined1 local_690 [424];
  undefined8 local_4e8;
  undefined8 local_4e0;
  longlong *local_4d8;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined1 local_4c0;
  undefined1 local_4b8 [664];
  undefined1 local_220 [8];
  longlong *local_218;
  undefined8 local_70;
  longlong *local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_788;
  if ((*(int *)(param_1 + 0x430) != 0) && (*(longlong **)(param_1 + 0x428) != (longlong *)0x0)) {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x428) + 0x30))();
    if (cVar6 != '\0') {
      FUN_147708be0(local_690);
      local_4e8 = *(undefined8 *)(param_1 + 0x3c0);
      uVar7 = *(undefined8 *)(param_1 + 0x3d0);
      uVar4 = *(undefined8 *)(param_1 + 0x3d8);
      local_6a8 = 1;
      local_6a0 = 0;
      uStack_698 = 0;
      local_4c0 = 1;
      local_6b8._0_4_ = (undefined4)uVar7;
      local_6b8._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      uStack_6b0._0_4_ = (undefined4)uVar4;
      uStack_6b0._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      local_4d0 = (undefined4)local_6b8;
      uStack_4cc = local_6b8._4_4_;
      uStack_4c8 = (undefined4)uStack_6b0;
      uStack_4c4 = uStack_6b0._4_4_;
      local_6b8 = uVar7;
      uStack_6b0 = uVar4;
      FUN_144a450dc(local_4b8,&local_6a0);
      FUN_1449db362();
      if (*(int *)(param_1 + 0x430) == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = *(longlong **)(param_1 + 0x428);
      }
      (**(code **)(*plVar8 + 0x58))(plVar8,&local_750,param_3);
      plVar8 = local_4d8;
      if (local_748 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_748 + 1) = (int)local_748[1] + 1;
        UNLOCK();
      }
      local_4e0 = local_750;
      local_4d8 = local_748;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar3 = (int *)((longlong)plVar8 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      local_6c8 = param_4;
      FUN_147708d76(local_220,0x22d);
      FUN_147708caa(local_220,&local_730,local_690);
      *param_2 = local_730;
      lVar5 = CONCAT44(uStack_724,local_728);
      param_2[1] = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
        plVar8 = (longlong *)CONCAT44(uStack_724,local_728);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar3 = (int *)((longlong)plVar8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
      if (local_218 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_218 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_218)(local_218);
          LOCK();
          piVar3 = (int *)((longlong)local_218 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_218 + 0x10))(local_218);
          }
        }
      }
      if (local_748 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_748 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_748)(local_748);
          LOCK();
          piVar3 = (int *)((longlong)local_748 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_748 + 0x10))(local_748);
          }
        }
      }
      puVar9 = local_690;
      goto LAB_14770803a;
    }
  }
  FUN_147708be0(local_220);
  FUN_140a570d8(local_690);
  local_730 = L"ComboBoxMissingOnGenerateWidgetMethod";
  local_728 = 0x25;
  FUN_1446e940c(local_714,&local_730);
  local_730 = L"SlateCore";
  local_728 = 9;
  FUN_1446e940c(local_718,&local_730);
  FUN_140208bae(local_710,local_718,local_714,L"Please provide a .OnGenerateWidget() handler.");
  FUN_14023423e(local_700,local_710);
  local_6f0 = 1;
  local_6e8 = 0;
  uStack_6e0 = 0;
  uVar7 = FUN_140a54906(local_690,local_700);
  local_768 = &local_731;
  FUN_140a54526(&local_730,"STextBlock","Runtime\\Slate\\Public\\Widgets/Input/SComboBox.h",0x238);
  FUN_140a52852(&local_730,&local_6d8,uVar7);
  plVar2 = local_68;
  plVar8 = local_6d0;
  if (local_6d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_6d0 + 1) = (int)local_6d0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_6d0 + 1) = (int)local_6d0[1] + 1;
    UNLOCK();
  }
  local_70 = local_6d8;
  local_68 = local_6d0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_758 = param_4;
  FUN_147708d76(&local_750,0x236);
  FUN_147708caa(&local_750,&local_6c8,local_220);
  *param_2 = local_6c8;
  param_2[1] = local_6c0;
  if (local_6c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_6c0 + 1) = (int)local_6c0[1] + 1;
    UNLOCK();
    if (local_6c0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_6c0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_6c0)(local_6c0);
        LOCK();
        piVar3 = (int *)((longlong)local_6c0 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_6c0 + 0x10))(local_6c0);
        }
      }
    }
  }
  if (local_748 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_748 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_748)(local_748);
      LOCK();
      piVar3 = (int *)((longlong)local_748 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_748 + 0x10))(local_748);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_6d0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_6d0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_6d0)(local_6d0);
      LOCK();
      piVar3 = (int *)((longlong)local_6d0 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_6d0 + 0x10))(local_6d0);
      }
    }
  }
  plVar8 = (longlong *)CONCAT44(uStack_724,local_728);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_710[0] != (longlong *)0x0) {
    (**(code **)(*local_710[0] + 0x10))();
  }
  FUN_140a59ae6(local_690);
  puVar9 = local_220;
LAB_14770803a:
  FUN_147708d2a(puVar9);
  if ((local_38 ^ (ulonglong)auStack_788) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477081a4 FUN_1477081a4 body=325 status=ok
// SIG undefined FUN_1477081a4(void)

undefined1 * FUN_1477081a4(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_4 + 0x20);
  plVar4 = *(longlong **)(param_4 + 0x30);
  lVar5 = DAT_14c964d88;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    lVar5 = DAT_14c964d88;
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
  if (lVar3 == lVar5) {
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x3f8) + 0x4e8) + 0xd0))
              (*(longlong *)(param_1 + 0x3f8) + 0x4e8);
    if (0 < local_40) {
      FUN_147705f56(param_1,*local_48,0);
      *param_2 = 1;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      memset(param_2 + 0x28,0,0x88);
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      param_2[0xb4] = 0;
    }
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (0 < local_40) goto LAB_147708279;
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_147708279:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477082ea FUN_1477082ea body=133 status=ok
// SIG undefined FUN_1477082ea(void)

longlong FUN_1477082ea(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x308);
  *(undefined8 *)(param_1 + 0x300) = uVar3;
  *(longlong *)(param_1 + 0x308) = lVar4;
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



// FUNCTION 147708370 FUN_147708370 body=115 status=ok
// SIG undefined FUN_147708370(void)

longlong * FUN_147708370(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_147716504(*param_1,param_3);
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



// FUNCTION 1477083e4 FUN_1477083e4 body=414 status=ok
// SIG undefined FUN_1477083e4(void)

void FUN_1477083e4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x3b0);
  FUN_1449db362(param_1 + 0x3a0);
  FUN_1449db362(param_1 + 0x390);
  FUN_1449db362(param_1 + 0x378);
  FUN_1449db362(param_1 + 0x330);
  if (*(char *)(param_1 + 800) == '\x01') {
    *(undefined1 *)(param_1 + 800) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x308);
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
  plVar3 = *(longlong **)(param_1 + 0x2f0);
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
  FUN_1449db362(param_1 + 0x2d8);
  FUN_1449db362(param_1 + 0x2c0);
  FUN_1449db362(param_1 + 0x2b0);
  FUN_1449db362(param_1 + 0x2a0);
  FUN_1449db362(param_1 + 0x290);
  FUN_1449db362(param_1 + 0x280);
  FUN_1449db362(param_1 + 0x270);
  FUN_1449db362(param_1 + 0x260);
  FUN_1449db362(param_1 + 0x248);
  plVar3 = *(longlong **)(param_1 + 0x238);
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
  FUN_1449db362(param_1 + 0x210);
  FUN_1449db362(param_1 + 0x200);
  FUN_1449db362(param_1 + 0x1f0);
  FUN_1449db362(param_1 + 0x1e0);
  FUN_1449db362(param_1 + 0x1d0);
  FUN_1449db362(param_1 + 0x1c0);
  FUN_1449db362(param_1 + 0x1b0);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 147708582 FUN_147708582 body=130 status=ok
// SIG undefined FUN_147708582(void)

void FUN_147708582(longlong *param_1,longlong *param_2)

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



// FUNCTION 147708606 FUN_147708606 body=130 status=ok
// SIG undefined FUN_147708606(void)

void FUN_147708606(longlong *param_1,longlong *param_2)

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



// FUNCTION 14770868a FUN_14770868a body=386 status=ok
// SIG undefined FUN_14770868a(void)

longlong * FUN_14770868a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14770879b:
    *puVar5 = &PTR_LAB_14a50bb80;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14a509950;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14770879b;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a50bb80;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14a509950;
    puVar5[3] = uVar7;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 14770880c FUN_14770880c body=64 status=ok
// SIG undefined FUN_14770880c(void)

undefined8 * FUN_14770880c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a509950;
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



// FUNCTION 147708850 FUN_147708850 body=81 status=ok
// SIG undefined FUN_147708850(void)

undefined8 FUN_147708850(longlong param_1)

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



// FUNCTION 1477088a8 FUN_1477088a8 body=89 status=ok
// SIG undefined FUN_1477088a8(void)

bool FUN_1477088a8(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1477088f3;
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
LAB_1477088f3:
  return lVar6 == param_2;
}



// FUNCTION 14770892a FUN_14770892a body=118 status=ok
// SIG undefined FUN_14770892a(void)

void FUN_14770892a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50bb80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a509950;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1477089a0 FUN_1477089a0 body=118 status=ok
// SIG undefined FUN_1477089a0(void)

void FUN_1477089a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50bb80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a509950;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147708a16 FUN_147708a16 body=156 status=ok
// SIG undefined FUN_147708a16(void)

void FUN_147708a16(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a50bb80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a509950;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147708aa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147708ab2 FUN_147708ab2 body=105 status=ok
// SIG undefined FUN_147708ab2(void)

undefined8 FUN_147708ab2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_147708b06:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_147708b06;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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
  return param_2;
}



// FUNCTION 147708b1c FUN_147708b1c body=192 status=ok
// SIG undefined FUN_147708b1c(void)

ulonglong FUN_147708b1c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_147708bba:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_147708bba;
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
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if ((lVar4 != 0) &&
       ((**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_30,param_2,param_3),
       local_28 != (longlong *)0x0)) {
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 147708be0 FUN_147708be0 body=201 status=ok
// SIG undefined FUN_147708be0(void)

longlong FUN_147708be0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140a5071c();
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_28,"ComboBox.Row",1);
  uVar3 = FUN_145817f3a(lVar2,local_28,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  *(undefined8 *)(param_1 + 0x1b0) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b8) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 1;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147708caa FUN_147708caa body=128 status=ok
// SIG undefined FUN_147708caa(void)

longlong * FUN_147708caa(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1 + 8,param_3);
  FUN_14770d5b0(*param_1,param_3,*(undefined8 *)param_1[2]);
  lVar1 = *param_1;
  bVar4 = *(byte *)(lVar1 + 0x38);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 8) + 0x220))(lVar1 + 8);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(lVar1 + 0x38);
  }
  *(byte *)(lVar1 + 0x38) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x39) = *(byte *)(*param_1 + 0x39) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 147708d2a FUN_147708d2a body=76 status=ok
// SIG undefined FUN_147708d2a(void)

void FUN_147708d2a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x1d8);
  plVar3 = *(longlong **)(param_1 + 0x1b8);
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



// FUNCTION 147708d76 FUN_147708d76 body=371 status=ok
// SIG undefined FUN_147708d76(void)

longlong * FUN_147708d76(longlong *param_1,undefined4 param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_3;
  plVar3 = (longlong *)FUN_14001cc68(0x390);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a5099c0;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x380);
  FUN_147708f12(plVar4);
  plVar3[2] = (longlong)&PTR_LAB_14a5099e0;
  plVar3[3] = (longlong)&PTR_FUN_14a509a80;
  local_38 = plVar4;
  local_30 = plVar3;
  FUN_14770d504(&local_38,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_147708e79;
    param_1[1] = 0;
LAB_147708e41:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_147708e79;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_147708e79;
      goto LAB_147708e41;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147708e79;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_147708e79:
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_48 = 0x380;
  FUN_140a52e78(*param_1 + 8,"SComboRow<OptionType>",
                "Runtime\\Slate\\Public\\Widgets/Input/SComboBox.h",param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147708eea FUN_147708eea body=9 status=ok
// SIG undefined FUN_147708eea(void)

void FUN_147708eea(longlong param_1)

{
  FUN_14770c654(param_1 + 0x10);
  return;
}



// FUNCTION 147708ef4 FUN_147708ef4 body=29 status=ok
// SIG undefined FUN_147708ef4(void)

undefined8 FUN_147708ef4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147708f12 FUN_147708f12 body=202 status=ok
// SIG undefined FUN_147708f12(void)

undefined8 * FUN_147708f12(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_149f0e360;
  FUN_140a55e66(param_1 + 1);
  *param_1 = &PTR_LAB_14a50c1b0;
  param_1[1] = &PTR_FUN_14a50c250;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  *(undefined1 *)((longlong)param_1 + 700) = 1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined1 *)((longlong)param_1 + 0x31c) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b) = 2;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 4;
  return param_1;
}



// FUNCTION 147708ff0 FUN_147708ff0 body=198 status=ok
// SIG undefined FUN_147708ff0(void)

byte FUN_147708ff0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_14770903f;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = false;
  }
LAB_14770903f:
  puVar6 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9);
  if (puVar6 != (undefined8 *)0x0) {
    local_30 = *puVar6;
    uVar7 = (**(code **)(*plVar9 + 0x60))(plVar9);
    plVar9 = (longlong *)(uVar7 & 0xffffffff);
  }
  if (!bVar3) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar6 != (undefined8 *)0x0 & (byte)plVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477090b8 FUN_1477090b8 body=228 status=ok
// SIG undefined FUN_1477090b8(void)

void FUN_1477090b8(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_147709107;
      }
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_147709107:
  cVar4 = (**(code **)(*plVar9 + 0x68))(plVar9,*(undefined4 *)(param_1 + 0x2b8));
  if ((cVar4 != '\0') &&
     (puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,param_1),
     puVar7 != (undefined8 *)0x0)) {
    local_30 = *puVar7;
    uVar6 = (**(code **)(*plVar9 + 0x60))(plVar9);
    (**(code **)(*plVar9 + 0x50))(plVar9,*puVar7,uVar6 ^ 1);
  }
  if (!bVar2) {
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14770919e FUN_14770919e body=198 status=ok
// SIG undefined FUN_14770919e(void)

byte FUN_14770919e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_1477091ed;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = false;
  }
LAB_1477091ed:
  puVar6 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9);
  if (puVar6 != (undefined8 *)0x0) {
    local_30 = *puVar6;
    uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9);
    plVar9 = (longlong *)(uVar7 & 0xffffffff);
  }
  if (!bVar3) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar6 != (undefined8 *)0x0 & (byte)plVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147709266 FUN_147709266 body=124 status=ok
// SIG undefined FUN_147709266(void)

undefined4 FUN_147709266(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_14770929f;
      }
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
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_14770929f:
  uVar5 = (**(code **)(*plVar7 + 0x88))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  if (!bVar2) {
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
  return uVar5;
}



// FUNCTION 1477092e2 FUN_1477092e2 body=124 status=ok
// SIG undefined FUN_1477092e2(void)

undefined1 FUN_1477092e2(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_14770931c;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar5 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_14770931c:
  uVar4 = (**(code **)(*plVar7 + 0x68))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  if (!bVar2) {
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
  return uVar4;
}



// FUNCTION 14770935e FUN_14770935e body=144 status=ok
// SIG undefined FUN_14770935e(void)

longlong FUN_14770935e(longlong param_1,longlong param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_14770939a;
      }
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
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_14770939a:
  uVar5 = (**(code **)(*plVar7 + 0x90))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  FUN_144a69486(param_2,uVar5);
  if (!bVar2) {
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
  return param_2;
}



// FUNCTION 1477093ee FUN_1477093ee body=126 status=ok
// SIG undefined FUN_1477093ee(void)

undefined4 FUN_1477093ee(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_147709428;
      }
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
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_147709428:
  uVar5 = (**(code **)(*plVar7 + 0x98))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  if (!bVar2) {
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
  return uVar5;
}



// FUNCTION 14770946c FUN_14770946c body=154 status=ok
// SIG undefined FUN_14770946c(void)

longlong * FUN_14770946c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 == (longlong *)0x0) {
LAB_1477094f5:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1477094f5;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    lVar7 = *(longlong *)(param_1 + 0x10) + -8;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar7 = 0;
    }
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
    lVar6 = lVar7 + 8;
    if (lVar7 == 0) {
      lVar6 = 0;
    }
    *param_2 = lVar6;
    param_2[1] = (longlong)plVar3;
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
  }
  return param_2;
}



// FUNCTION 14770956a FUN_14770956a body=228 status=ok
// SIG undefined FUN_14770956a(void)

void FUN_14770956a(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_1477095b9;
      }
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_1477095b9:
  cVar4 = (**(code **)(*plVar9 + 0x68))(plVar9,*(undefined4 *)(param_1 + 0x2b8));
  if ((cVar4 != '\0') &&
     (puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,param_1),
     puVar7 != (undefined8 *)0x0)) {
    local_30 = *puVar7;
    uVar6 = (**(code **)(*plVar9 + 0x60))(plVar9);
    (**(code **)(*plVar9 + 0x58))(plVar9,*puVar7,uVar6 ^ 1);
  }
  if (!bVar2) {
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14770965e FUN_14770965e body=114 status=ok
// SIG undefined FUN_14770965e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14770965e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x2b0);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar8) {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0xb8))();
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
        return (ulonglong)uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001477096c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(_DAT_00000000 + 0xb8))(0);
  return uVar7;
}



// FUNCTION 1477096d0 FUN_1477096d0 body=1489 status=ok
// SIG undefined FUN_1477096d0(void)

void FUN_1477096d0(longlong param_1,uint param_2,undefined4 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_6d8 [32];
  longlong **local_6b8;
  longlong local_6b0;
  undefined1 local_6a1;
  undefined1 local_6a0 [8];
  longlong *local_698;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined1 local_678;
  undefined8 local_670;
  undefined4 local_668;
  undefined4 local_660;
  undefined1 local_65c;
  undefined8 local_658;
  undefined8 uStack_650;
  longlong local_648;
  longlong *plStack_640;
  longlong *local_630;
  undefined8 local_628;
  longlong *local_620;
  undefined2 local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  longlong *local_5f0;
  undefined8 local_5e8;
  longlong *local_5e0;
  undefined8 local_5d8;
  longlong *local_5d0;
  undefined8 local_5c8;
  longlong *local_5c0;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined1 local_5a8;
  undefined8 local_5a0;
  undefined4 local_598;
  undefined1 local_590 [192];
  undefined1 local_4d0 [424];
  undefined8 local_328;
  undefined1 local_318 [24];
  undefined1 local_300 [16];
  undefined2 local_2f0;
  undefined1 auStack_2e8 [16];
  undefined1 local_2d8 [192];
  undefined1 local_218 [440];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_6d8;
  *(undefined8 *)(param_1 + 0x368) = *param_4;
  plVar6 = (longlong *)param_4[1];
  plVar8 = *(longlong **)(param_1 + 0x370);
  if (plVar8 != plVar6) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(param_1 + 0x370);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x370) = plVar6;
  }
  *(undefined8 *)(param_1 + 0x360) = 0;
  if (param_2 < 2) {
    local_5a8 = *(undefined1 *)(param_3 + 4);
    local_5b8 = *param_3;
    uStack_5b4 = param_3[1];
    uStack_5b0 = param_3[2];
    uStack_5ac = param_3[3];
    local_5a0 = 0;
    local_598 = 0;
    FUN_140a58be0(&local_5a0,param_3 + 6);
    uVar4 = FUN_140a58d14(param_1 + 0x220,&local_5b8);
    FUN_140a58896(uVar4,param_4);
    lVar5 = param_1 + 0x200;
  }
  else {
    FUN_140a5296a(local_218);
    FUN_140a50426(local_2d8);
    lVar5 = FUN_140a52578(local_2d8);
    *(undefined4 *)(lVar5 + 0x40) = 3;
    *(undefined1 *)(lVar5 + 0x44) = 1;
    *(undefined4 *)(lVar5 + 0x48) = 0;
    *(undefined1 *)(lVar5 + 0x4c) = 1;
    FUN_146a2b81a(local_4d0);
    local_328 = *(undefined8 *)(param_1 + 0x2d0);
    local_610 = CONCAT11(1,*(undefined1 *)(param_1 + 0x37c));
    local_608 = 0;
    uStack_600 = 0;
    local_2f0 = local_610;
    FUN_144a450dc(auStack_2e8,&local_608);
    FUN_1449db362(&local_608);
    plVar6 = *(longlong **)(param_1 + 0x18);
    if (plVar6 == (longlong *)0x0) {
LAB_1477098a8:
      local_648 = 0;
      plStack_640 = (longlong *)0x0;
    }
    else {
      iVar3 = (int)plVar6[1];
      do {
        if (iVar3 == 0) goto LAB_1477098a8;
        LOCK();
        iVar2 = (int)plVar6[1];
        bVar9 = iVar3 == iVar2;
        if (bVar9) {
          *(int *)(plVar6 + 1) = iVar3 + 1;
          iVar2 = iVar3;
        }
        iVar3 = iVar2;
        UNLOCK();
      } while (!bVar9);
      local_648 = *(longlong *)(param_1 + 0x10) + -8;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        local_648 = 0;
      }
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      plStack_640 = plVar6;
      if ((int)*plVar8 == 0) {
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
    local_630 = &local_648;
    local_6b8 = &local_630;
    FUN_14770c45a(&local_628,"SExpanderArrow","Runtime\\Slate\\Public\\Widgets/Views/STableRow.h",
                  0xca);
    if (local_620 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_620 + 1) = (int)local_620[1] + 1;
      UNLOCK();
    }
    plVar6 = *(longlong **)(param_1 + 0x2e0);
    *(undefined8 *)(param_1 + 0x2d8) = local_628;
    *(longlong **)(param_1 + 0x2e0) = local_620;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    FUN_14770c3e2(&local_628,&local_5f8,local_4d0);
    local_5e8 = local_5f8;
    local_5e0 = local_5f0;
    if (local_5f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_5f0 + 1) = (int)local_5f0[1] + 1;
      UNLOCK();
    }
    local_6b0 = param_1 + 0x1e8;
    uVar4 = FUN_140a4fe8e(lVar5,&local_5e8);
    uVar4 = FUN_140a52392(local_218,uVar4);
    FUN_140a50426(local_590);
    local_660 = 0x3f800000;
    local_65c = 1;
    local_658 = 0;
    uStack_650 = 0;
    plVar6 = (longlong *)FUN_140a5475a(local_590);
    lVar5 = *plVar6;
    local_688 = *param_3;
    uStack_684 = param_3[1];
    uStack_680 = param_3[2];
    uStack_67c = param_3[3];
    local_678 = *(undefined1 *)(param_3 + 4);
    local_670 = 0;
    local_668 = 0;
    FUN_140a58be0(&local_670,param_3 + 6);
    *(undefined1 *)(plVar6 + 5) = local_678;
    *(undefined4 *)(plVar6 + 3) = local_688;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_684;
    *(undefined4 *)(plVar6 + 4) = uStack_680;
    *(undefined4 *)((longlong)plVar6 + 0x24) = uStack_67c;
    FUN_144a450dc(plVar6 + 6,&local_670);
    FUN_1449db362(&local_670);
    uVar7 = FUN_146a07044(plVar6,param_4);
    uVar4 = FUN_140a52392(uVar4,uVar7);
    local_6b8 = (longlong **)&local_6a1;
    FUN_140a541dc(local_6a0,"SHorizontalBox","Runtime\\Slate\\Public\\Widgets/Views/STableRow.h",
                  0xc3);
    FUN_140a50ec6(local_6a0,&local_5d8,uVar4);
    local_5c8 = local_5d8;
    local_5c0 = local_5d0;
    if (local_5d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_5d0 + 1) = (int)local_5d0[1] + 1;
      UNLOCK();
    }
    FUN_140a58896(local_6b0,&local_5c8);
    plVar6 = local_5c0;
    if (local_5c0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_5c0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_5c0)(local_5c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_5d0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_5d0 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_5d0)(local_5d0);
        LOCK();
        piVar1 = (int *)((longlong)local_5d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_5d0 + 0x10))(local_5d0);
        }
      }
    }
    if (local_698 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_698 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_698)(local_698);
        LOCK();
        piVar1 = (int *)((longlong)local_698 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_698 + 0x10))(local_698);
        }
      }
    }
    FUN_140a509a6(local_590);
    plVar6 = local_5e0;
    if (local_5e0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_5e0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_5e0)(local_5e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_5f0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_5f0 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_5f0)(local_5f0);
        LOCK();
        piVar1 = (int *)((longlong)local_5f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_5f0 + 0x10))(local_5f0);
        }
      }
    }
    if (local_620 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_620 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_620)(local_620);
        LOCK();
        piVar1 = (int *)((longlong)local_620 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_620 + 0x10))(local_620);
        }
      }
    }
    plVar6 = plStack_640;
    if (plStack_640 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_640 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plStack_640)(plStack_640);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    FUN_1449db362(auStack_2e8);
    FUN_1449db362(local_300);
    FUN_1449db362(local_318);
    FUN_140a4ff8c(local_4d0);
    FUN_140a509a6(local_2d8);
    FUN_145ab33da(local_218);
  }
  *(longlong *)(param_1 + 0x360) = lVar5;
  if ((local_60 ^ (ulonglong)auStack_6d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147709ca2 FUN_147709ca2 body=1060 status=ok
// SIG undefined FUN_147709ca2(void)

int FUN_147709ca2(longlong param_1,int param_2,undefined8 param_3,ulonglong *param_4,
                 undefined8 param_5,undefined8 param_6,int param_7,float *param_8)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  float *local_110;
  float *local_108;
  undefined4 local_100;
  float *local_f8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined1 local_cc;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_bc;
  ulonglong local_b4;
  float local_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined8 local_9c;
  byte local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar13 = *(longlong **)(param_1 + 0x2b0);
  bVar8 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar10 = (int)plVar13[1];
    plVar14 = (longlong *)0x0;
    do {
      if (iVar10 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_147709d25;
      }
      LOCK();
      iVar9 = (int)plVar13[1];
      bVar16 = iVar10 == iVar9;
      if (bVar16) {
        *(int *)(plVar13 + 1) = iVar10 + 1;
        iVar9 = iVar10;
      }
      iVar10 = iVar9;
      UNLOCK();
    } while (!bVar16);
    plVar14 = *(longlong **)(param_1 + 0x2a8);
    bVar8 = false;
  }
LAB_147709d25:
  lVar15 = 0x890;
  if (param_2 == 2) {
    lVar15 = 0x940;
  }
  lVar12 = 0x7e0;
  if (param_2 != 0) {
    lVar12 = lVar15;
  }
  lVar12 = lVar12 + *(longlong *)(param_1 + 0x2c8);
  iVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
  if (iVar10 == 1) {
    pfVar11 = (float *)(lVar12 + 8);
    cVar6 = *(char *)(lVar12 + 0x18);
    if (cVar6 != '\0') {
      if (cVar6 == '\x01') {
        pfVar11 = (float *)FUN_1400c06fe(pfVar11);
      }
      else if (cVar6 == '\x03') {
        pfVar11 = param_8 + 8;
      }
      else {
        pfVar11 = param_8 + 4;
      }
    }
    local_d8 = pfVar11[3] * param_8[3];
    local_dc = pfVar11[2] * param_8[2];
    local_e0 = pfVar11[1] * param_8[1];
    local_e4 = *pfVar11 * *param_8;
    local_110 = &local_e4;
    local_b4 = *param_4;
    local_c8 = *(undefined8 *)((longlong)param_4 + 0xc);
    local_c0 = *(float *)(param_4 + 1);
    local_bc = 0;
    local_ac = *(float *)((longlong)param_4 + 0x1c);
    fStack_a8 = *(float *)(param_4 + 4);
    fStack_a4 = *(float *)((longlong)param_4 + 0x24);
    fStack_a0 = *(float *)(param_4 + 5);
    local_9c = *(undefined8 *)((longlong)param_4 + 0x2c);
    local_94 = local_94 & 0xfc | *(char *)((longlong)param_4 + 0x34) * '\x02' & 2U;
    local_118 = 0;
    FUN_140239bd2(param_6,param_7,&local_c8,lVar12);
  }
  else {
    uVar7 = *param_4;
    fVar20 = (float)(uVar7 >> 0x20) * 0.5;
    fVar19 = (float)uVar7 * 0.5;
    fVar18 = fVar20 - fVar19;
    fVar17 = fVar19 - fVar20;
    pfVar11 = (float *)(lVar12 + 8);
    cVar6 = *(char *)(lVar12 + 0x18);
    if (cVar6 != '\0') {
      if (cVar6 == '\x01') {
        pfVar11 = (float *)FUN_1400c06fe(pfVar11);
      }
      else if (cVar6 == '\x03') {
        pfVar11 = param_8 + 8;
      }
      else {
        pfVar11 = param_8 + 4;
      }
    }
    local_d8 = pfVar11[3] * param_8[3];
    local_dc = pfVar11[2] * param_8[2];
    local_e0 = pfVar11[1] * param_8[1];
    local_e4 = *pfVar11 * *param_8;
    local_f8 = &local_e4;
    local_108 = &local_d4;
    local_cc = 1;
    local_c0 = *(float *)(param_4 + 1);
    fVar2 = *(float *)((longlong)param_4 + 0x1c);
    local_c8 = CONCAT44(fVar18 * local_c0 + *(float *)(param_4 + 2),
                        fVar17 * local_c0 + *(float *)((longlong)param_4 + 0xc));
    local_b4 = uVar7 << 0x20 | uVar7 >> 0x20;
    fVar3 = *(float *)(param_4 + 4);
    fVar4 = *(float *)(param_4 + 5);
    fVar5 = *(float *)((longlong)param_4 + 0x24);
    fStack_a0 = fVar3 * 0.0 + fVar4;
    fStack_a4 = fVar2 * 0.0 + fVar5;
    fStack_a8 = fVar4 * 0.0 + fVar3;
    local_ac = fVar5 * 0.0 + fVar2;
    local_bc = 0;
    local_9c = CONCAT44(fVar17 * fVar3 + fVar18 * fVar4 + *(float *)(param_4 + 6),
                        fVar17 * fVar2 + fVar18 * fVar5 + *(float *)((longlong)param_4 + 0x2c));
    local_94 = local_94 & 0xfc | *(char *)((longlong)param_4 + 0x34) * '\x02' & 2U;
    local_100 = 0;
    local_110 = (float *)CONCAT44(local_110._4_4_,0xbfc90fdb);
    local_118 = 0;
    local_d4 = fVar20;
    local_d0 = fVar19;
    FUN_14695471e(param_6,param_7,&local_c8,lVar12);
  }
  if (!bVar8) {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_7 + 1;
}



// FUNCTION 14770a0c8 FUN_14770a0c8 body=216 status=ok
// SIG undefined FUN_14770a0c8(void)

void FUN_14770a0c8(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x368) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar3 = *(longlong **)(param_1 + 0x370);
  if (plVar3 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar3 = *(longlong **)(param_1 + 0x370);
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x370) = plVar2;
  }
  *(undefined8 *)(param_1 + 0x360) = 0;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1456f28da(param_1 + 8,&local_30);
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14770a1a2 FUN_14770a1a2 body=822 status=ok
// SIG undefined FUN_14770a1a2(void)

longlong FUN_14770a1a2(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_88 [47];
  char local_59;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar13 = (longlong *)param_1[0x56];
  bVar3 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar13[1];
    plVar14 = (longlong *)0x0;
    do {
      if (iVar8 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_14770a1fc;
      }
      LOCK();
      iVar9 = (int)plVar13[1];
      bVar15 = iVar8 == iVar9;
      if (bVar15) {
        *(int *)(plVar13 + 1) = iVar8 + 1;
        iVar9 = iVar8;
      }
      iVar8 = iVar9;
      UNLOCK();
    } while (!bVar15);
    plVar14 = (longlong *)param_1[0x55];
    bVar3 = false;
  }
LAB_14770a1fc:
  (**(code **)(*plVar14 + 0xe8))(plVar14,&local_58);
  cVar4 = (**(code **)(*local_58 + 0x198))();
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
  cVar5 = (**(code **)(*plVar14 + 0x68))(plVar14,(int)param_1[0x57]);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab771c) && (FUN_144b3d300(&DAT_14cab771c), DAT_14cab771c == -1)) {
    FUN_1446ddc76(&DAT_14cab7714,"GenericWhiteBox",1);
    _Init_thread_footer(&DAT_14cab771c);
  }
  plVar10 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = DAT_14c96b350;
  }
  lVar12 = 0;
  (**(code **)(*plVar10 + 0x50))(plVar10,DAT_14cab7714,0,0);
  puVar11 = (undefined8 *)(**(code **)(*plVar14 + 0x48))(plVar14,param_1);
  if (puVar11 == (undefined8 *)0x0) goto LAB_14770a3d5;
  local_58 = (longlong *)*puVar11;
  local_59 = cVar4;
  cVar4 = (**(code **)(*plVar14 + 0x10))(plVar14,&local_58);
  local_58 = (longlong *)*puVar11;
  cVar6 = (**(code **)(*plVar14 + 0x20))(plVar14,&local_58);
  iVar8 = (**(code **)(*param_1 + 0x78))(param_1);
  uVar2 = *(uint *)(param_1 + 0x57);
  if (cVar4 == '\0') {
    if (cVar6 == '\0') goto LAB_14770a37f;
    lVar12 = param_1[0x59];
    if (local_59 == '\0') {
      if (*(char *)((longlong)param_1 + 0x43) == '\0') {
        lVar12 = lVar12 + 0xaa0;
        goto LAB_14770a3d5;
      }
    }
    else if (*(char *)((longlong)param_1 + 0x43) == '\0') {
      lVar12 = lVar12 + 0x9f0;
      goto LAB_14770a3d5;
    }
    if ((uVar2 & 1) != 0) goto LAB_14770a3ce;
  }
  else {
    if (*(char *)((longlong)param_1 + 700) == '\x01') {
      lVar12 = param_1[0x59];
      if (local_59 == '\0') {
        if (*(char *)((longlong)param_1 + 0x43) == '\0') {
          lVar12 = lVar12 + 0x2d0;
        }
        else {
          lVar12 = lVar12 + 0x220;
        }
      }
      else if (*(char *)((longlong)param_1 + 0x43) == '\0') {
        lVar12 = lVar12 + 0x170;
      }
      else {
        lVar12 = lVar12 + 0xc0;
      }
      goto LAB_14770a3d5;
    }
LAB_14770a37f:
    if (((cVar5 != '\0') && (*(char *)(param_1[0x59] + 0x380) == '\x01')) &&
       (iVar9 = (**(code **)(*param_1 + 0x38))(param_1), iVar9 == 0)) {
      if (*(char *)((longlong)param_1 + 0x43) == '\x01') {
        lVar12 = param_1[0x59] + 0x440;
      }
      else {
        lVar12 = param_1[0x59] + 0x390;
      }
      goto LAB_14770a3d5;
    }
    bVar7 = iVar8 != 0 & *(byte *)((longlong)param_1 + 0x43);
    lVar12 = param_1[0x59];
    if ((uVar2 & 1) != 0) {
      if (bVar7 == 0) {
        lVar12 = lVar12 + 0x700;
        goto LAB_14770a3d5;
      }
LAB_14770a3ce:
      lVar12 = lVar12 + 0x650;
      goto LAB_14770a3d5;
    }
    if (bVar7 == 0) {
      lVar12 = lVar12 + 0x5a0;
      goto LAB_14770a3d5;
    }
  }
  lVar12 = lVar12 + 0x4f0;
LAB_14770a3d5:
  if (!bVar3) {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar12;
}



// FUNCTION 14770a4da FUN_14770a4da body=45 status=ok
// SIG undefined FUN_14770a4da(void)

longlong FUN_14770a4da(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_14770c654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14770a508 FUN_14770a508 body=398 status=ok
// SIG undefined FUN_14770a508(void)

undefined1 * FUN_14770a508(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_4 + 0x40);
  plVar10 = *(longlong **)(param_4 + 0x50);
  lVar4 = DAT_14c966e98;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    lVar4 = DAT_14c966e98;
    UNLOCK();
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
  if (lVar2 == lVar4) {
    plVar10 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = true;
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
      plVar9 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar10[1];
      plVar9 = (longlong *)0x0;
      do {
        if (iVar7 == 0) {
          plVar10 = (longlong *)0x0;
          goto LAB_14770a5c1;
        }
        LOCK();
        iVar5 = (int)plVar10[1];
        bVar11 = iVar7 == iVar5;
        if (bVar11) {
          *(int *)(plVar10 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar11);
      plVar9 = *(longlong **)(param_1 + 0x2a0);
      bVar3 = false;
    }
LAB_14770a5c1:
    puVar8 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,param_1 + -8);
    local_50 = *puVar8;
    cVar6 = (**(code **)(*plVar9 + 0x10))(plVar9);
    if (cVar6 != '\0') {
      (**(code **)(*plVar9 + 0x40))(plVar9);
      *param_2 = 1;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      memset(param_2 + 0x28,0,0x88);
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      param_2[0xb4] = 0;
    }
    if (!bVar3) {
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
    if (cVar6 != '\0') goto LAB_14770a651;
  }
  FUN_14770bf32(param_1,param_2,param_3,param_4);
LAB_14770a651:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14770a698 FUN_14770a698 body=1843 status=ok
// SIG undefined FUN_14770a698(void)

undefined1 * FUN_14770a698(longlong param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong *puVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_178 [36];
  undefined4 local_154;
  undefined1 *local_150;
  longlong *local_148;
  float *local_140;
  ulonglong local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_118;
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_88;
  undefined1 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar16 = *(longlong **)(param_1 + 0x2a8);
  local_150 = param_2;
  local_140 = param_3;
  if (plVar16 == (longlong *)0x0) {
    local_154 = (undefined4)CONCAT71((int7)(local_80 >> 8),1);
LAB_14770a75f:
    plVar13 = (longlong *)0x0;
    plVar15 = (longlong *)0x0;
    plVar16 = (longlong *)0x0;
  }
  else {
    uVar10 = (ulonglong)*(uint *)(plVar16 + 1);
    do {
      uVar8 = (uint)uVar10;
      if (uVar8 == 0) {
        local_154 = (undefined4)CONCAT71((int7)(uVar10 >> 8),1);
        goto LAB_14770a75f;
      }
      LOCK();
      uVar3 = *(uint *)(plVar16 + 1);
      if (uVar8 == uVar3) {
        *(uint *)(plVar16 + 1) = uVar8 + 1;
      }
      else {
        uVar10 = (ulonglong)uVar3;
      }
      UNLOCK();
    } while (uVar8 != uVar3);
    plVar15 = *(longlong **)(param_1 + 0x2a0);
    plVar13 = plVar15 + -0x9d;
    if (plVar15 == (longlong *)0x0) {
      plVar13 = (longlong *)0x0;
    }
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar16 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
      local_154 = 0;
    }
    else {
      local_154 = 0;
    }
  }
  local_148 = (longlong *)(param_1 + -8);
  lVar11 = *(longlong *)(param_4 + 0x40);
  plVar4 = *(longlong **)(param_4 + 0x50);
  if (plVar4 == (longlong *)0x0) {
    if (lVar11 == DAT_14c966e98) goto LAB_14770a7d1;
LAB_14770aa4a:
    puVar14 = local_150;
    if ((lVar11 != DAT_14c966fa0) || (cVar6 = FUN_146af41be(plVar13), cVar6 != '\0'))
    goto LAB_14770ab58;
LAB_14770aace:
    iVar9 = (**(code **)(*local_148 + 0x78))();
    if ((2 < iVar9 - 1U) ||
       (puVar12 = (ulonglong *)(**(code **)(*plVar15 + 0x48))(plVar15), puVar12 == (ulonglong *)0x0)
       ) goto LAB_14770ab58;
    local_138 = *puVar12;
    cVar6 = (**(code **)(*plVar15 + 0x10))(plVar15);
    if (cVar6 == '\0') {
      (**(code **)(*plVar15 + 0x30))(plVar15);
      (**(code **)(*plVar15 + 0x28))(plVar15,*puVar12,1,1);
      (**(code **)(*plVar15 + 0x40))(plVar15,2);
    }
    (**(code **)(*plVar15 + 0xa0))(plVar15,*puVar12,param_4);
    *puVar14 = 1;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    lVar5 = DAT_14c966e98;
    UNLOCK();
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    puVar14 = local_150;
    if (lVar11 != lVar5) {
      lVar11 = *(longlong *)(param_4 + 0x40);
      plVar4 = *(longlong **)(param_4 + 0x50);
      if (plVar4 == (longlong *)0x0) goto LAB_14770aa4a;
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      if (lVar11 == DAT_14c966fa0) {
        cVar6 = FUN_146af41be(plVar13);
        puVar14 = local_150;
        LOCK();
        plVar13 = plVar4 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        if (cVar6 == '\0') goto LAB_14770aace;
      }
      else {
        LOCK();
        plVar13 = plVar4 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
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
      goto LAB_14770ab58;
    }
LAB_14770a7d1:
    local_138 = local_138 & 0xffffffffffffff00;
    local_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    memset(local_110,0,0x88);
    puVar14 = local_150;
    local_88 = 0x20702;
    local_100 = 0;
    uStack_f8 = 0;
    local_84 = 1;
    FUN_1403d4c6e(local_150);
    FUN_14493db24(&local_138);
    if (*(char *)(param_1 + 0x370) == '\x01') {
      local_138 = CONCAT71(local_138._1_7_,1);
      local_118 = 0;
      local_130 = 0;
      uStack_128 = 0;
      memset(local_110,0,0x88);
      puVar14 = local_150;
      local_88 = 0x20702;
      local_100 = 0;
      uStack_f8 = 0;
      local_84 = 1;
      FUN_1402c17c2(local_150,&local_138);
      FUN_14493db24(&local_138);
    }
    fVar18 = local_140[8] * 0.0;
    fVar19 = local_140[7] * 0.0;
    fVar17 = local_140[10] * 0.0;
    fVar20 = local_140[9] * 0.0;
    local_138 = CONCAT44(fVar17 + fVar18 + local_140[0xc],fVar20 + fVar19 + local_140[0xb]);
    local_130 = CONCAT44(*local_140 * local_140[8] + fVar17,*local_140 * local_140[7] + fVar20);
    uStack_128 = CONCAT44(local_140[10] * local_140[1] + fVar18,local_140[1] * local_140[9] + fVar19
                         );
    cVar6 = FUN_1402b2a42();
    cVar7 = FUN_140591fd6(param_1);
    if (cVar7 != '\0') {
      if ((cVar6 != '\0') && (*(char *)(param_1 + 0x371) == '\0')) {
        iVar9 = (**(code **)(*local_148 + 0x78))();
        if (iVar9 == 3) {
          if (((*(char *)(param_1 + 0x370) == '\0') && ((*(byte *)(param_4 + 8) & 0xf) == 0)) &&
             (puVar12 = (ulonglong *)(**(code **)(*plVar15 + 0x48))(plVar15,local_148),
             puVar12 != (ulonglong *)0x0)) {
            local_138 = *puVar12;
            cVar6 = (**(code **)(*plVar15 + 0x10))(plVar15);
            if ((cVar6 != '\0') && (iVar9 = (**(code **)(*plVar15 + 0x70))(plVar15), 1 < iVar9)) {
              (**(code **)(*plVar15 + 0x30))(plVar15);
              (**(code **)(*plVar15 + 0x28))(plVar15,*puVar12,1,1);
              (**(code **)(*plVar15 + 0x40))(plVar15);
              local_138 = CONCAT71(local_138._1_7_,1);
              local_118 = 0;
              local_130 = 0;
              uStack_128 = 0;
              memset(local_110,0,0x88);
              goto LAB_14770acdc;
            }
          }
        }
        else if (iVar9 == 2) {
          if (*(char *)(param_1 + 0x370) == '\0') {
            (**(code **)(*plVar15 + 0x30))(plVar15);
            (**(code **)(*plVar15 + 0x40))(plVar15);
          }
          local_138 = CONCAT71(local_138._1_7_,1);
          local_118 = 0;
          local_130 = 0;
          uStack_128 = 0;
          memset(local_110,0,0x88);
LAB_14770acdc:
          puVar14 = local_150;
          local_84 = 1;
          local_88 = 0x20702;
          uStack_f8 = 0;
          local_100 = 0;
          FUN_1402c17c2(local_150,&local_138);
          FUN_14493db24(&local_138);
        }
      }
      lVar11 = (**(code **)(*plVar15 + 0x48))(plVar15,local_148);
      if ((lVar11 != 0) && (cVar6 = (**(code **)(*plVar15 + 0xa8))(plVar15), cVar6 != '\0')) {
        local_138 = CONCAT71(local_138._1_7_,1);
        local_118 = 0;
        local_130 = 0;
        uStack_128 = 0;
        memset(local_110,0,0x88);
        puVar14 = local_150;
        local_88 = 0x20702;
        local_100 = 0;
        uStack_f8 = 0;
        local_84 = 1;
        FUN_1402c17c2(local_150,&local_138);
        FUN_14493db24(&local_138);
      }
      if (((*(char *)(param_1 + 0x370) == '\x01') && (*(char *)(param_1 + 0x371) == '\0')) &&
         (*(int *)(param_1 + 0x2b8) == 0)) {
        (**(code **)(*plVar15 + 0x40))(plVar15,2);
      }
      goto LAB_14770ab8a;
    }
    FUN_14493db24(puVar14);
LAB_14770ab58:
    *puVar14 = 0;
  }
  puVar14[0x20] = 0;
  *(undefined8 *)(puVar14 + 8) = 0;
  *(undefined8 *)(puVar14 + 0x10) = 0;
  memset(puVar14 + 0x28,0,0x88);
  *(undefined4 *)(puVar14 + 0xb0) = 0x20702;
  puVar14[0xb4] = 0;
LAB_14770ab8a:
  if ((char)local_154 == '\0') {
    LOCK();
    plVar13 = plVar16 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    LOCK();
    plVar13 = plVar16 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar14;
}



// FUNCTION 14770adcc FUN_14770adcc body=361 status=ok
// SIG undefined FUN_14770adcc(void)

undefined1 * FUN_14770adcc(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar7 = *(longlong *)(param_4 + 0x40);
  plVar8 = *(longlong **)(param_4 + 0x50);
  lVar3 = DAT_14c966e98;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    lVar3 = DAT_14c966e98;
    UNLOCK();
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
  }
  if (lVar7 == lVar3) {
    plVar8 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = true;
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
      plVar9 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar8[1];
      plVar9 = (longlong *)0x0;
      do {
        if (iVar6 == 0) {
          plVar8 = (longlong *)0x0;
          goto LAB_14770ae65;
        }
        LOCK();
        iVar4 = (int)plVar8[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar8 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      plVar9 = *(longlong **)(param_1 + 0x2a0);
      bVar2 = false;
    }
LAB_14770ae65:
    lVar7 = (**(code **)(*plVar9 + 0x48))(plVar9);
    if (lVar7 != 0) {
      cVar5 = (**(code **)(*plVar9 + 0xb0))(plVar9);
      if (cVar5 == '\0') {
        (**(code **)(*(longlong *)(param_1 + -8) + 0x28))((longlong *)(param_1 + -8));
      }
      *param_2 = 1;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      memset(param_2 + 0x28,0,0x88);
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      param_2[0xb4] = 0;
    }
    if (!bVar2) {
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
    }
    if (lVar7 != 0) {
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14770af36 FUN_14770af36 body=637 status=ok
// SIG undefined FUN_14770af36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_14770af36(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [136];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(char *)(param_1 + 0x372) == '\x01') {
    *(undefined1 *)(param_1 + 0x372) = 0;
    local_e8[0] = 1;
    local_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    memset(local_c0,0,0x88);
    local_38 = 0x20702;
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    if (plVar7 == (longlong *)0x0) {
LAB_14770b0d8:
      (**(code **)(_DAT_00000000 + 0xe8))(0,local_f8);
      uVar6 = FUN_140592a6e(local_e8,local_f8);
      FUN_1403d4c6e(param_2,uVar6);
    }
    else {
      iVar5 = (int)plVar7[1];
      do {
        if (iVar5 == 0) goto LAB_14770b0d8;
        LOCK();
        iVar3 = (int)plVar7[1];
        bVar8 = iVar5 == iVar3;
        if (bVar8) {
          *(int *)(plVar7 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar8);
      (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0xe8))
                (*(longlong **)(param_1 + 0x2a0),local_f8);
      uVar6 = FUN_140592a6e(local_e8,local_f8);
      FUN_1403d4c6e(param_2,uVar6);
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
    FUN_14493db24(local_e8);
  }
  else {
    cVar4 = FUN_140591fd6(param_1);
    if (((cVar4 != '\0') &&
        (*(undefined1 *)(param_1 + 0x371) = 1, *(char *)(param_1 + 0x370) == '\x01')) &&
       (*(int *)(param_1 + 0x2b8) == 0)) {
      plVar7 = *(longlong **)(param_1 + 0x2a8);
      if (plVar7 == (longlong *)0x0) {
LAB_14770b1a2:
        (**(code **)(_DAT_00000000 + 0x40))(0);
      }
      else {
        iVar5 = (int)plVar7[1];
        do {
          if (iVar5 == 0) goto LAB_14770b1a2;
          LOCK();
          iVar3 = (int)plVar7[1];
          bVar8 = iVar5 == iVar3;
          if (bVar8) {
            *(int *)(plVar7 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar8);
        (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x40))();
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
    if (((*(int *)(param_1 + 800) != 0) && (*(longlong **)(param_1 + 0x318) != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x318) + 0x30))(), cVar4 != '\0')) {
      if (*(int *)(param_1 + 800) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x318);
      }
      (**(code **)(*plVar7 + 0x58))(plVar7,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_118);
    }
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14770b1ba FUN_14770b1ba body=90 status=ok
// SIG undefined FUN_14770b1ba(void)

void FUN_14770b1ba(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x330) != 0) && (*(longlong **)(param_1 + 0x328) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x330) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x328);
      }
                    /* WARNING: Could not recover jumptable at 0x00014770b205. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 14770b214 FUN_14770b214 body=106 status=ok
// SIG undefined FUN_14770b214(void)

void FUN_14770b214(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x314) == '\x01') {
    *(undefined1 *)(param_1 + 0x314) = 0;
  }
  if ((*(int *)(param_1 + 0x340) != 0) && (*(longlong **)(param_1 + 0x338) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x338) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x340) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x338);
      }
                    /* WARNING: Could not recover jumptable at 0x00014770b26f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14770b27e FUN_14770b27e body=1078 status=ok
// SIG undefined FUN_14770b27e(void)

undefined1 *
FUN_14770b27e(longlong param_1,undefined1 *param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  byte *pbVar11;
  longlong *plVar12;
  byte *pbVar13;
  longlong *plVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1a8 [40];
  int local_180 [2];
  undefined **local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined3 uStack_118;
  undefined4 local_115;
  undefined1 uStack_111;
  undefined3 uStack_110;
  undefined4 uStack_10d;
  undefined4 uStack_109;
  undefined8 local_100;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e8;
  byte local_e4 [4];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (((*(int *)(param_1 + 0x2e8) == 0) || (*(longlong **)(param_1 + 0x2e0) == (longlong *)0x0)) ||
     (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x30))(), cVar9 == '\0')) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
    goto LAB_14770b35a;
  }
  plVar14 = *(longlong **)(param_1 + 0x2a8);
  bVar6 = true;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
    plVar12 = (longlong *)0x0;
  }
  else {
    iVar10 = (int)plVar14[1];
    plVar12 = (longlong *)0x0;
    do {
      if (iVar10 == 0) {
        plVar14 = (longlong *)0x0;
        goto LAB_14770b3f8;
      }
      LOCK();
      iVar8 = (int)plVar14[1];
      bVar15 = iVar10 == iVar8;
      if (bVar15) {
        *(int *)(plVar14 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar15);
    plVar12 = *(longlong **)(param_1 + 0x2a0);
    bVar6 = false;
  }
LAB_14770b3f8:
  fVar16 = *(float *)(param_4 + 0x20);
  fVar2 = *(float *)(param_4 + 0x24);
  fVar18 = *(float *)((longlong)param_3 + 0x1c);
  fVar17 = *(float *)(param_3 + 4);
  fVar3 = *(float *)((longlong)param_3 + 0x24);
  fVar19 = *(float *)(param_3 + 5);
  fVar20 = 1.0 / (fVar18 * fVar19 - fVar3 * fVar17);
  fVar4 = *(float *)(param_3 + 6);
  fVar5 = *(float *)((longlong)param_3 + 0x2c);
  iVar10 = (**(code **)(*plVar12 + 0xc0))();
  if (iVar10 == 0) {
    fVar18 = -fVar3 * fVar20;
    fVar19 = fVar19 * fVar20;
    fVar17 = -fVar5 * fVar19 - fVar4 * fVar18;
    fVar16 = fVar16 * fVar19 + fVar18 * fVar2;
  }
  else {
    fVar18 = fVar18 * fVar20;
    fVar20 = -fVar17 * fVar20;
    fVar17 = -fVar5 * fVar20 - fVar4 * fVar18;
    fVar16 = fVar16 * fVar20 + fVar18 * fVar2;
  }
  fVar2 = (float)((ulonglong)*param_3 >> 0x20);
  if (iVar10 == 0) {
    fVar2 = (float)*param_3;
  }
  fVar18 = fVar2 * 0.25;
  if (10.0 <= fVar18) {
    fVar18 = 10.0;
  }
  if (fVar18 <= 3.0) {
    fVar18 = 3.0;
  }
  local_180[0] = 0;
  if (fVar18 <= fVar16 + fVar17) {
    local_180[0] = (fVar2 - fVar18 < fVar16 + fVar17) + 1;
  }
  local_170 = *(undefined8 *)(param_4 + 8);
  uStack_168 = *(undefined8 *)(param_4 + 0x10);
  local_160 = *(undefined8 *)(param_4 + 0x18);
  local_158 = *(undefined8 *)(param_4 + 0x20);
  uStack_150 = *(undefined8 *)(param_4 + 0x28);
  local_148 = *(undefined8 *)(param_4 + 0x30);
  uStack_140 = *(undefined8 *)(param_4 + 0x38);
  local_138 = *(undefined8 *)(param_4 + 0x40);
  local_130 = *(undefined8 *)(param_4 + 0x48);
  local_128 = *(longlong *)(param_4 + 0x50);
  if (local_128 != 0) {
    LOCK();
    *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
    UNLOCK();
  }
  uStack_120 = *(undefined8 *)(param_4 + 0x58);
  uVar7 = *(undefined8 *)(param_4 + 0x60);
  uStack_10d = *(undefined4 *)(param_4 + 0x6b);
  uStack_109 = *(undefined4 *)(param_4 + 0x6f);
  uStack_118 = (undefined3)uVar7;
  local_115 = (undefined4)((ulonglong)uVar7 >> 0x18);
  uStack_110 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x67) >> 8);
  uStack_111 = (undefined1)((ulonglong)uVar7 >> 0x38);
  local_178 = &PTR_FUN_149efe1e0;
  local_100 = *(undefined8 *)(param_4 + 0x78);
  local_f8 = *(longlong *)(param_4 + 0x80);
  if (local_f8 != 0) {
    LOCK();
    *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
    UNLOCK();
  }
  local_f0 = param_1 + -8;
  FUN_14770c75c(local_180,&local_e8);
  pbVar11 = local_e4;
  if (&local_e8 == (undefined4 *)(param_1 + 0x310)) {
    if ((local_e4[0] & 1) != 0) goto LAB_14770b62f;
  }
  else {
    pbVar13 = (byte *)(param_1 + 0x314);
    if ((local_e4[0] & 1) == 0) {
      pbVar11 = pbVar13;
      if (*pbVar13 != 1) goto LAB_14770b632;
    }
    else {
      *(undefined4 *)(param_1 + 0x310) = local_e8;
      *pbVar13 = 1;
    }
LAB_14770b62f:
    *pbVar11 = 0;
  }
LAB_14770b632:
  FUN_1469ac82c(&local_178);
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (!bVar6) {
    LOCK();
    plVar12 = plVar14 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
LAB_14770b35a:
  if ((local_e0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14770b6b6 FUN_14770b6b6 body=207 status=ok
// SIG undefined FUN_14770b6b6(void)

undefined8 FUN_14770b6b6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  char local_e0 [184];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = param_1 + -8;
  local_f0 = param_3;
  local_e8 = param_4;
  FUN_14770c822(&local_f8,local_e0);
  if (((local_e0[0] == '\0') && (*(int *)(param_1 + 0x350) != 0)) &&
     (*(longlong **)(param_1 + 0x348) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x348) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x350) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x348);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_4);
      goto LAB_14770b711;
    }
  }
  FUN_1403d4c6e(param_2,local_e0);
LAB_14770b711:
  FUN_14493db24(local_e0);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14770b786 FUN_14770b786 body=394 status=ok
// SIG undefined FUN_14770b786(void)

undefined8 FUN_14770b786(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong *plStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c0;
  undefined1 local_b8 [136];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined1 *)(param_1 + 0x372) = 1;
  local_e0[0] = 1;
  local_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  memset(local_b8,0,0x88);
  local_30 = 0x20702;
  local_f8 = (undefined4)DAT_14c966e98;
  uStack_f4 = DAT_14c966e98._4_4_;
  uStack_f0 = (undefined4)DAT_14c966ea0;
  uStack_ec = DAT_14c966ea0._4_4_;
  local_e8 = DAT_14c966ea8;
  if (DAT_14c966ea8 != 0) {
    LOCK();
    *(int *)(DAT_14c966ea8 + 8) = *(int *)(DAT_14c966ea8 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_14770b867:
    local_108 = 0;
    plStack_100 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_14770b867;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar8 = 0;
    }
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
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    local_108 = lVar8 + 8;
    if (lVar8 == 0) {
      local_108 = 0;
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    bVar9 = false;
    plStack_100 = plVar4;
  }
  plVar4 = plStack_100;
  uVar7 = FUN_1407c9a0c(local_e0,&local_108,&local_f8);
  FUN_1403d4c6e(param_2,uVar7);
  plVar1 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_100 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (!bVar9) {
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
  FUN_14493db24(local_e0);
  if ((local_28 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14770b912 FUN_14770b912 body=557 status=ok
// SIG undefined FUN_14770b912(void)

undefined1 * FUN_14770b912(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (*(char *)(param_1 + 0x372) != '\x01') goto LAB_14770bb11;
  plVar1 = (longlong *)(param_1 + -8);
  *(undefined1 *)(param_1 + 0x372) = 0;
  plVar10 = *(longlong **)(param_1 + 0x2a8);
  bVar3 = true;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar10[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar6 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_14770b9b9;
      }
      LOCK();
      iVar4 = (int)plVar10[1];
      bVar11 = iVar6 == iVar4;
      if (bVar11) {
        *(int *)(plVar10 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar11);
    plVar9 = *(longlong **)(param_1 + 0x2a0);
    bVar3 = false;
  }
LAB_14770b9b9:
  puVar8 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,plVar1);
  if (puVar8 != (undefined8 *)0x0) {
    uVar7 = (**(code **)(*plVar1 + 0x78))(plVar1);
    if (uVar7 != 0) {
      local_f8 = *puVar8;
      cVar5 = (**(code **)(*plVar9 + 0x10))(plVar9);
      if (cVar5 == '\0') {
        if (uVar7 != 3) {
          (**(code **)(*plVar9 + 0x30))(plVar9);
        }
      }
      else if ((uVar7 & 0xfffffffe) != 2) goto LAB_14770ba8d;
      (**(code **)(*plVar9 + 0x28))(plVar9,*puVar8,1,1);
      (**(code **)(*plVar9 + 0x40))(plVar9);
      local_f8 = CONCAT71(local_f8._1_7_,1);
      local_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      memset(local_d0,0,0x88);
      local_48 = 0x20702;
      local_44 = 0;
      FUN_1403d4924(param_2,&local_f8);
      FUN_14493db24(&local_f8);
    }
LAB_14770ba8d:
    cVar5 = (**(code **)(*plVar9 + 0xa8))(plVar9);
    if (cVar5 != '\0') {
      local_f8 = CONCAT71(local_f8._1_7_,1);
      local_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      memset(local_d0,0,0x88);
      local_48 = 0x20702;
      local_44 = 0;
      FUN_1403d4924(param_2,&local_f8);
      FUN_14493db24(&local_f8);
    }
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
LAB_14770bb11:
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14770bb40 FUN_14770bb40 body=484 status=ok
// SIG undefined FUN_14770bb40(void)

longlong * FUN_14770bb40(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_14001cc68(0x70,0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_14770bb7e:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar4 = (int)plVar2[1];
    do {
      if (iVar4 == 0) goto LAB_14770bb7e;
      LOCK();
      iVar3 = (int)plVar2[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar8 = 0;
    }
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
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
    local_48 = lVar8 + 8;
    if (lVar8 == 0) {
      local_48 = 0;
    }
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    bVar9 = false;
    plStack_40 = plVar2;
  }
  plVar2 = plStack_40;
  FUN_14770cc42(lVar5,&local_48,0xd);
  *param_2 = lVar5;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149ef0b50;
  plVar6[2] = lVar5;
  param_2[1] = (longlong)plVar6;
  if ((lVar5 == 0) ||
     (((*(longlong *)(lVar5 + 8) != 0 && (*(longlong *)(lVar5 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar5 + 0x10) + 8))))) goto LAB_14770bcde;
  if (plVar6 == (longlong *)0x0) {
    *(longlong *)(lVar5 + 8) = lVar5;
    plVar7 = *(longlong **)(lVar5 + 0x10);
    if (plVar7 == (longlong *)0x0) goto LAB_14770bcde;
LAB_14770bc24:
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    *(longlong **)(lVar5 + 0x10) = plVar6;
    if (plVar6 == (longlong *)0x0) goto LAB_14770bcde;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(longlong *)(lVar5 + 8) = lVar5;
    if (*(longlong **)(lVar5 + 0x10) != plVar6) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(lVar5 + 0x10);
      if (plVar7 != (longlong *)0x0) goto LAB_14770bc24;
      *(longlong **)(lVar5 + 0x10) = plVar6;
    }
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
LAB_14770bcde:
  if (!bVar9) {
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14770bd26 FUN_14770bd26 body=180 status=ok
// SIG undefined FUN_14770bd26(void)

void FUN_14770bd26(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14770d1c0(param_1 + -8);
  uVar1 = FUN_14023976a(param_1,param_2,param_3,param_4,param_5,uVar1,param_7,param_8);
  FUN_14770d414(param_1 + -8,param_2,param_3,param_4,param_5,uVar1,param_7,param_8);
  return;
}



// FUNCTION 14770bdda FUN_14770bdda body=297 status=ok
// SIG undefined FUN_14770bdda(void)

void FUN_14770bdda(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x360) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar6 = *(longlong **)(param_1 + 0x368);
  if (plVar6 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x368);
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
    *(longlong **)(param_1 + 0x368) = plVar2;
  }
  lVar3 = *(longlong *)(param_1 + 0x358);
  if (lVar3 == 0) {
    local_30 = *param_2;
    local_28 = param_2[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    FUN_1456f28da(param_1,&local_30);
  }
  else {
    FUN_14149270a(lVar3);
    uVar4 = *param_2;
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar2 = *(longlong **)(lVar3 + 0x18);
    *(undefined8 *)(lVar3 + 0x10) = uVar4;
    *(longlong *)(lVar3 + 0x18) = lVar5;
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
    FUN_140a5503c(lVar3);
  }
  plVar2 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14770bf04 FUN_14770bf04 body=45 status=ok
// SIG undefined FUN_14770bf04(void)

longlong FUN_14770bf04(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_14770c654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14770bf32 FUN_14770bf32 body=1199 status=ok
// SIG undefined FUN_14770bf32(void)

undefined1 * FUN_14770bf32(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  undefined4 uVar12;
  undefined8 unaff_RBP;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_188 [36];
  undefined4 local_164;
  longlong local_160;
  longlong local_158;
  longlong *plStack_150;
  undefined1 local_148 [16];
  longlong local_138;
  longlong *plStack_130;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong local_110;
  undefined8 local_108;
  undefined1 local_100 [8];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e0;
  undefined1 local_d8 [136];
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar13 = *(longlong **)(param_1 + 0x2a8);
  uVar12 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar13[1];
    plVar14 = (longlong *)0x0;
    do {
      if (iVar6 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_14770bf94;
      }
      LOCK();
      iVar5 = (int)plVar13[1];
      bVar15 = iVar6 == iVar5;
      if (bVar15) {
        *(int *)(plVar13 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar15);
    plVar14 = *(longlong **)(param_1 + 0x2a0);
    uVar12 = 0;
  }
LAB_14770bf94:
  *(undefined2 *)(param_1 + 0x370) = 0;
  lVar10 = *(longlong *)(param_4 + 0x40);
  plVar3 = *(longlong **)(param_4 + 0x50);
  local_160 = param_4;
  if (plVar3 == (longlong *)0x0) {
    lVar4 = CONCAT44(DAT_14c966e98._4_4_,(undefined4)DAT_14c966e98);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar4 = CONCAT44(DAT_14c966e98._4_4_,(undefined4)DAT_14c966e98);
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
  if (((lVar10 != lVar4) ||
      (iVar6 = (**(code **)(*(longlong *)(param_1 + -8) + 0x78))((longlong *)(param_1 + -8)),
      iVar6 == 0)) ||
     (puVar8 = (undefined8 *)(**(code **)(*plVar14 + 0x48))(plVar14), puVar8 == (undefined8 *)0x0))
  {
    cVar11 = (char)uVar12;
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
    goto LAB_14770c1fa;
  }
  local_108 = *puVar8;
  local_164 = uVar12;
  uVar7 = (**(code **)(*plVar14 + 0x10))(plVar14);
  if (iVar6 == 3) {
    if ((*(ushort *)(local_160 + 8) & 3) == 0) {
      if ((*(ushort *)(local_160 + 8) & 0xc) == 0) goto LAB_14770c09f;
      (**(code **)(*plVar14 + 0x28))(plVar14,local_108,uVar7 ^ 1,1);
    }
    else {
      (**(code **)(*plVar14 + 0x38))(plVar14);
    }
    *(undefined1 *)(param_1 + 0x370) = 1;
    if (*(int *)(param_1 + 0x2b8) == 1) {
      (**(code **)(*plVar14 + 0x40))(plVar14);
    }
  }
LAB_14770c09f:
  if ((((char)uVar7 == '\0') || (*(char *)(param_1 + 0x373) != '\0')) &&
     (*(char *)(param_1 + 0x370) == '\0')) {
    (**(code **)(*plVar14 + 0x30))(plVar14);
    (**(code **)(*plVar14 + 0x28))(plVar14,local_108,1,1);
    *(undefined1 *)(param_1 + 0x370) = 1;
    if (*(int *)(param_1 + 0x2b8) == 1) {
      (**(code **)(*plVar14 + 0x40))(plVar14);
    }
  }
  local_100[0] = 1;
  local_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  memset(local_d8,0,0x88);
  local_50 = 0x20702;
  local_4c = 0;
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
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_14770c254:
    local_138 = 0;
    plStack_130 = (longlong *)0x0;
    bVar15 = true;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14770c254;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar15 = iVar6 == iVar5;
      if (bVar15) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar15);
    lVar10 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar10 = 0;
    }
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
    local_138 = lVar10 + 8;
    if (lVar10 == 0) {
      local_138 = 0;
    }
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    bVar15 = false;
    plStack_130 = plVar3;
  }
  plVar3 = plStack_130;
  uVar9 = FUN_1407c9a0c(local_100,&local_138,&local_120);
  (**(code **)(*plVar14 + 0xe8))(plVar14,local_148);
  uVar9 = FUN_140592b68(uVar9,local_148,0,0);
  plVar14 = *(longlong **)(param_1 + 0x10);
  if (plVar14 == (longlong *)0x0) {
LAB_14770c311:
    local_158 = 0;
    plStack_150 = (longlong *)0x0;
    bVar16 = true;
  }
  else {
    iVar6 = (int)plVar14[1];
    do {
      if (iVar6 == 0) goto LAB_14770c311;
      LOCK();
      iVar5 = (int)plVar14[1];
      bVar16 = iVar6 == iVar5;
      if (bVar16) {
        *(int *)(plVar14 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar16);
    lVar10 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar10 = 0;
    }
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar14 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    local_158 = lVar10 + 8;
    if (lVar10 == 0) {
      local_158 = 0;
    }
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    bVar16 = false;
    plStack_150 = plVar14;
  }
  plVar14 = plStack_150;
  uVar9 = FUN_140592a6e(uVar9,&local_158);
  FUN_1403d4c6e(param_2,uVar9);
  if (!bVar16) {
    LOCK();
    plVar1 = plVar14 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  plVar14 = plStack_130;
  if (plStack_130 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_130 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_130)(plStack_130);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (!bVar15) {
    LOCK();
    plVar14 = plVar3 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  FUN_14493db24(local_100);
  cVar11 = (char)local_164;
LAB_14770c1fa:
  if (cVar11 == '\0') {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14770c3e2 FUN_14770c3e2 body=119 status=ok
// SIG undefined FUN_14770c3e2(void)

longlong * FUN_14770c3e2(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_14770c5cc(param_1[2],*param_1,param_3);
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



// FUNCTION 14770c45a FUN_14770c45a body=369 status=ok
// SIG undefined FUN_14770c45a(void)

longlong *
FUN_14770c45a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x2d8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f0e410;
  plVar1 = plVar4 + 2;
  FUN_146aec4be(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_146a2ba86(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14770c55f;
    param_1[1] = 0;
LAB_14770c522:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_14770c55f;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_14770c55f;
      goto LAB_14770c522;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14770c55f;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_14770c55f:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 0x2c8;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14770c5cc FUN_14770c5cc body=134 status=ok
// SIG undefined FUN_14770c5cc(void)

void FUN_14770c5cc(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)*param_1;
  local_18 = (longlong *)((undefined8 *)*param_1)[1];
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_146aec5c0(param_2,param_3,&local_20);
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14770c654 FUN_14770c654 body=263 status=ok
// SIG undefined FUN_14770c654(void)

void FUN_14770c654(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a50c1b0;
  param_1[1] = &PTR_FUN_14a50c250;
  plVar3 = (longlong *)param_1[0x6e];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1449db362(param_1 + 0x6a);
  FUN_1449db362(param_1 + 0x68);
  FUN_1449db362(param_1 + 0x66);
  FUN_1449db362(param_1 + 100);
  if (*(char *)((longlong)param_1 + 0x31c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x31c) = 0;
  }
  FUN_1449db362(param_1 + 0x61);
  FUN_1449db362(param_1 + 0x5f);
  FUN_1449db362(param_1 + 0x5d);
  plVar3 = (longlong *)param_1[0x5c];
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
  plVar3 = (longlong *)param_1[0x56];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  param_1[1] = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x40);
  FUN_140c057ec(param_1 + 1);
  return;
}



// FUNCTION 14770c75c FUN_14770c75c body=197 status=ok
// SIG undefined FUN_14770c75c(void)

longlong FUN_14770c75c(undefined4 *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  lVar2 = *(longlong *)(param_1 + 0x24);
  plVar8 = *(longlong **)(lVar2 + 0x2b0);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_14770c7a8;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    plVar7 = *(longlong **)(lVar2 + 0x2a8);
    bVar3 = false;
  }
LAB_14770c7a8:
  puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x48))(plVar7,lVar2);
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined1 *)(param_2 + 4) = 0;
  }
  else {
    if (*(int *)(lVar2 + 0x2f0) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(lVar2 + 0x2e8);
    }
    (**(code **)(*plVar7 + 0x58))(plVar7,param_2,param_1 + 2,*param_1,*puVar6);
  }
  if (!bVar3) {
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  return param_2;
}



// FUNCTION 14770c822 FUN_14770c822 body=1055 status=ok
// SIG undefined FUN_14770c822(void)

undefined1 * FUN_14770c822(longlong *param_1,undefined1 *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 unaff_RBP;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  uint local_1b4;
  int local_1b0;
  byte local_1ac;
  char local_1a8 [184];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar5 = *param_1;
  if (((*(int *)(lVar5 + 0x300) != 0) && (*(longlong **)(lVar5 + 0x2f8) != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(**(longlong **)(lVar5 + 0x2f8) + 0x30))(), cVar8 != '\0')) {
    plVar13 = *(longlong **)(lVar5 + 0x2b0);
    uVar12 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (plVar13 == (longlong *)0x0) {
      plVar13 = (longlong *)0x0;
      plVar14 = (longlong *)0x0;
    }
    else {
      iVar9 = (int)plVar13[1];
      plVar14 = (longlong *)0x0;
      do {
        if (iVar9 == 0) {
          plVar13 = (longlong *)0x0;
          goto LAB_14770c90b;
        }
        LOCK();
        iVar7 = (int)plVar13[1];
        bVar15 = iVar9 == iVar7;
        if (bVar15) {
          *(int *)(plVar13 + 1) = iVar9 + 1;
          iVar7 = iVar9;
        }
        iVar9 = iVar7;
        UNLOCK();
      } while (!bVar15);
      plVar14 = *(longlong **)(lVar5 + 0x2a8);
      uVar12 = 0;
    }
LAB_14770c90b:
    if (*(char *)(lVar5 + 0x31c) == '\x01') {
      *(undefined1 *)(lVar5 + 0x31c) = 0;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar14 + 0x48))(plVar14);
    bVar15 = true;
    if (puVar10 != (undefined8 *)0x0) {
      lVar6 = param_1[1];
      fVar17 = *(float *)(param_1[2] + 0x20);
      fVar16 = *(float *)(param_1[2] + 0x24);
      fVar19 = *(float *)(lVar6 + 0x1c);
      fVar18 = *(float *)(lVar6 + 0x20);
      fVar2 = *(float *)(lVar6 + 0x24);
      fVar20 = *(float *)(lVar6 + 0x28);
      fVar21 = 1.0 / (fVar19 * fVar20 - fVar2 * fVar18);
      fVar3 = *(float *)(lVar6 + 0x30);
      fVar4 = *(float *)(lVar6 + 0x2c);
      iVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      local_1b4 = (uint)uVar12;
      if (iVar9 == 0) {
        fVar19 = -fVar2 * fVar21;
        fVar20 = fVar20 * fVar21;
        fVar18 = -fVar4 * fVar20 - fVar3 * fVar19;
        fVar17 = fVar17 * fVar20 + fVar19 * fVar16;
      }
      else {
        fVar19 = fVar19 * fVar21;
        fVar21 = -fVar18 * fVar21;
        fVar18 = -fVar4 * fVar21 - fVar3 * fVar19;
        fVar17 = fVar17 * fVar21 + fVar19 * fVar16;
      }
      uVar12 = *(ulonglong *)param_1[1] >> 0x20;
      if (iVar9 == 0) {
        uVar12 = *(ulonglong *)param_1[1];
      }
      fVar16 = (float)uVar12 * 0.25;
      if (10.0 <= fVar16) {
        fVar16 = 10.0;
      }
      if (fVar16 <= 3.0) {
        fVar16 = 3.0;
      }
      iVar9 = 0;
      if (fVar16 <= fVar17 + fVar18) {
        iVar9 = ((float)uVar12 - fVar16 < fVar17 + fVar18) + 1;
      }
      if (((*(int *)(lVar5 + 0x2f0) == 0) || (*(longlong **)(lVar5 + 0x2e8) == (longlong *)0x0)) ||
         (cVar8 = (**(code **)(**(longlong **)(lVar5 + 0x2e8) + 0x30))(), cVar8 == '\0')) {
        local_1ac = 1;
        local_1b0 = iVar9;
      }
      else {
        local_1c8 = *puVar10;
        if (*(int *)(lVar5 + 0x2f0) == 0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = *(longlong **)(lVar5 + 0x2e8);
        }
        (**(code **)(*plVar11 + 0x58))(plVar11,&local_1b0,param_1[2],iVar9);
        if ((local_1ac & 1) == 0) {
          uVar12 = (ulonglong)local_1b4;
          goto LAB_14770cb49;
        }
      }
      local_1c8 = *puVar10;
      if (*(int *)(lVar5 + 0x300) == 0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = *(longlong **)(lVar5 + 0x2f8);
      }
      (**(code **)(*plVar11 + 0x58))(plVar11,local_1a8,param_1[2],local_1b0);
      if ((local_1a8[0] == '\x01') && (local_1b0 == 1)) {
        (**(code **)(*plVar14 + 0x50))(plVar14,*puVar10,1);
      }
      FUN_1428fd920(param_2);
      FUN_14493db24(local_1a8);
      uVar12 = (ulonglong)local_1b4;
      if (local_1ac == 1) {
        local_1ac = 0;
      }
      bVar15 = false;
    }
LAB_14770cb49:
    if ((char)uVar12 == '\0') {
      LOCK();
      plVar14 = plVar13 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
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
    if (!bVar15) goto LAB_14770cba2;
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14770cba2:
  if ((local_f0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14770cc42 FUN_14770cc42 body=140 status=ok
// SIG undefined FUN_14770cc42(void)

undefined8 * FUN_14770cc42(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_14697595a(param_1,&local_28);
  *param_1 = &PTR_FUN_14a50c4a0;
  param_1[0xd] = &PTR_FUN_14a50c590;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14770ccd0 FUN_14770ccd0 body=38 status=ok
// SIG undefined FUN_14770ccd0(void)

undefined8 FUN_14770ccd0(undefined8 param_1,int param_2)

{
  FUN_14697900e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14770ccfc FUN_14770ccfc body=490 status=ok
// SIG undefined FUN_14770ccfc(void)

void FUN_14770ccfc(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar8 = *(longlong **)(param_1 + -0x48), plVar8 != (longlong *)0x0)) && (0 < (int)plVar8[1])
     ) {
    lVar7 = 0;
    iVar4 = (int)plVar8[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_14770cd87;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar11 = iVar3 == iVar4;
      if (bVar11) {
        *(int *)(plVar8 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar11);
    lVar7 = *(longlong *)(param_1 + -0x50) + -8;
    if (*(longlong *)(param_1 + -0x50) == 0) {
      lVar7 = 0;
    }
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
LAB_14770cd87:
    if (((*(longlong *)(lVar7 + 0x2a8) != 0) &&
        (plVar10 = *(longlong **)(lVar7 + 0x2b0), plVar10 != (longlong *)0x0)) &&
       (0 < (int)plVar10[1])) {
      plVar9 = (longlong *)0x0;
      iVar4 = (int)plVar10[1];
      do {
        iVar5 = iVar4;
        if (iVar5 == 0) {
          plVar10 = (longlong *)0x0;
          goto LAB_14770cdd9;
        }
        LOCK();
        iVar4 = (int)plVar10[1];
        bVar11 = iVar5 == iVar4;
        if (bVar11) {
          *(int *)(plVar10 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        UNLOCK();
      } while (!bVar11);
      plVar9 = *(longlong **)(lVar7 + 0x2a8);
LAB_14770cdd9:
      (**(code **)(*plVar9 + 0xe8))(plVar9,&local_50);
      (**(code **)(*local_50 + 0x198))();
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_48 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      puVar6 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,lVar7);
      if (puVar6 != (undefined8 *)0x0) {
        local_50 = (longlong *)*puVar6;
        (**(code **)(*plVar9 + 0x10))(plVar9,&local_50);
        (**(code **)(*plVar9 + 0x30))(plVar9);
        (**(code **)(*plVar9 + 0x28))(plVar9,local_50,1,1);
        (**(code **)(*plVar9 + 0x40))(plVar9,3);
      }
      if (iVar5 != 0) {
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
    if (iVar3 != 0) {
      LOCK();
      plVar10 = plVar8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14770ceec FUN_14770ceec body=166 status=ok
// SIG undefined FUN_14770ceec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14770ceec(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  
  if (((*(longlong *)(param_1 + -0x50) == 0) ||
      (plVar3 = *(longlong **)(param_1 + -0x48), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
     ) {
    uVar7 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014770cf8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (**(code **)(_DAT_00000000 + 0x30))(0);
        return uVar7;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    plVar8 = (longlong *)(*(longlong *)(param_1 + -0x50) + -8);
    if (*(longlong *)(param_1 + -0x50) == 0) {
      plVar8 = (longlong *)0x0;
    }
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
    uVar6 = (**(code **)(*plVar8 + 0x30))(plVar8);
    uVar7 = (ulonglong)uVar6;
    LOCK();
    plVar8 = plVar3 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  return uVar7;
}



// FUNCTION 14770cf92 FUN_14770cf92 body=556 status=ok
// SIG undefined FUN_14770cf92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14770cf92(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar7 = *(longlong **)(param_1 + -0x48), plVar7 != (longlong *)0x0)) && (0 < (int)plVar7[1])
     ) {
    lVar8 = 0;
    iVar6 = (int)plVar7[1];
    do {
      iVar5 = iVar6;
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_14770d01e;
      }
      LOCK();
      iVar6 = (int)plVar7[1];
      bVar9 = iVar5 == iVar6;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar6 = iVar5;
      }
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + -0x50) + -8;
    if (*(longlong *)(param_1 + -0x50) == 0) {
      lVar8 = 0;
    }
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
LAB_14770d01e:
    if (((*(longlong *)(lVar8 + 0x2a8) == 0) ||
        (plVar3 = *(longlong **)(lVar8 + 0x2b0), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
       ) {
      bVar9 = false;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) {
          (**(code **)(_DAT_00000000 + 0xe8))(0,&local_48);
          goto LAB_14770d0f6;
        }
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar9 = iVar6 == iVar4;
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar9);
      (**(code **)(**(longlong **)(lVar8 + 0x2a8) + 0xe8))(*(longlong **)(lVar8 + 0x2a8),&local_48);
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
LAB_14770d0f6:
      local_68 = local_48;
      local_60 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      FUN_146974758(&local_58,&local_68);
      *param_2 = local_58;
      param_2[1] = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_50 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
      }
      plVar3 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_60 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      bVar9 = true;
    }
    if (iVar5 != 0) {
      LOCK();
      plVar3 = plVar7 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (bVar9) goto LAB_14770d0ba;
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14770d0ba:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14770d1c0 FUN_14770d1c0 body=594 status=ok
// SIG undefined FUN_14770d1c0(void)

int FUN_14770d1c0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,float *param_7)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  float *pfVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  float *local_a0;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 local_54;
  byte local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar10 = *(longlong **)(param_1 + 0x2b0);
  bVar3 = true;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
    plVar12 = (longlong *)0x0;
  }
  else {
    iVar7 = (int)plVar10[1];
    plVar12 = (longlong *)0x0;
    do {
      if (iVar7 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_14770d223;
      }
      LOCK();
      iVar5 = (int)plVar10[1];
      bVar13 = iVar7 == iVar5;
      if (bVar13) {
        *(int *)(plVar10 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar13);
    plVar12 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = false;
  }
LAB_14770d223:
  (**(code **)(*plVar12 + 0xe8))(plVar12,&local_80);
  cVar6 = (**(code **)(*local_80 + 0x198))();
  plVar4 = (longlong *)CONCAT44(uStack_74,local_78);
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
  puVar8 = (undefined8 *)(**(code **)(*plVar12 + 0x48))(plVar12,param_1);
  iVar7 = param_6;
  if (((puVar8 != (undefined8 *)0x0) && (cVar6 != '\0')) &&
     (cVar6 = (**(code **)*plVar12)(plVar12), cVar6 != '\0')) {
    local_80 = (longlong *)*puVar8;
    cVar6 = (**(code **)(*plVar12 + 8))(plVar12);
    if (cVar6 != '\0') {
      lVar11 = *(longlong *)(param_1 + 0x2c8);
      pfVar9 = (float *)(lVar11 + 0x18);
      cVar6 = *(char *)(lVar11 + 0x28);
      if (cVar6 != '\0') {
        if (cVar6 == '\x01') {
          pfVar9 = (float *)FUN_1400c06fe(pfVar9);
          lVar11 = *(longlong *)(param_1 + 0x2c8);
        }
        else if (cVar6 == '\x03') {
          pfVar9 = param_7 + 8;
        }
        else {
          pfVar9 = param_7 + 4;
        }
      }
      local_84 = pfVar9[3] * param_7[3];
      local_88 = pfVar9[2] * param_7[2];
      local_8c = pfVar9[1] * param_7[1];
      local_90 = *pfVar9 * *param_7;
      local_a0 = &local_90;
      local_6c = *param_3;
      local_80 = *(longlong **)((longlong)param_3 + 0xc);
      local_78 = *(undefined4 *)(param_3 + 1);
      uStack_74 = 0;
      uStack_70 = 0;
      local_64 = *(undefined4 *)((longlong)param_3 + 0x1c);
      uStack_60 = *(undefined4 *)(param_3 + 4);
      uStack_5c = *(undefined4 *)((longlong)param_3 + 0x24);
      uStack_58 = *(undefined4 *)(param_3 + 5);
      local_54 = *(undefined8 *)((longlong)param_3 + 0x2c);
      local_4c = local_4c & 0xfc | *(char *)((longlong)param_3 + 0x34) * '\x02' & 2U;
      iVar7 = param_6 + 1;
      local_a8 = 0;
      FUN_140239bd2(param_5,param_6,&local_80,lVar11 + 0x10);
    }
  }
  if (!bVar3) {
    LOCK();
    plVar12 = plVar10 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 14770d414 FUN_14770d414 body=239 status=ok
// SIG undefined FUN_14770d414(void)

ulonglong FUN_14770d414(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,uint param_6,undefined8 param_7,undefined1 param_8)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if (*(char *)((longlong)param_1 + 0x31c) == '\x01') {
    if ((((int)param_1[0x62] != 0) && ((longlong *)param_1[0x61] != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(*(longlong *)param_1[0x61] + 0x30))(), cVar1 != '\0')) {
      if ((int)param_1[0x62] == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)param_1[0x61];
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))
                        (plVar3,(int)param_1[99],param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8);
      return uVar2;
    }
    uVar2 = (**(code **)(*param_1 + 0x88))
                      (param_1,(int)param_1[99],param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8);
  }
  else {
    uVar2 = (ulonglong)param_6;
  }
  return uVar2;
}



// FUNCTION 14770d504 FUN_14770d504 body=171 status=ok
// SIG undefined FUN_14770d504(void)

void FUN_14770d504(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x10) != 0) && (*(longlong *)(param_2 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x18) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x10) = param_2 + 8;
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x10) = param_2 + 8;
    if (*(longlong **)(param_2 + 0x18) == plVar2) goto LAB_14770d583;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x18) = plVar2;
      goto LAB_14770d583;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x18) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14770d583:
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
                    /* WARNING: Could not recover jumptable at 0x00014770d5a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14770d5b0 FUN_14770d5b0 body=312 status=ok
// SIG undefined FUN_14770d5b0(void)

void FUN_14770d5b0(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_2f8 [32];
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined1 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined1 local_298 [424];
  undefined8 local_f0;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60;
  undefined1 local_58 [24];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  FUN_14770d6ea(local_298);
  local_f0 = *(undefined8 *)(param_2 + 0x1a8);
  local_2c8 = *(undefined1 *)(param_2 + 0x1d0);
  local_2d8 = *(undefined4 *)(param_2 + 0x1c0);
  uStack_2d4 = *(undefined4 *)(param_2 + 0x1c4);
  uStack_2d0 = *(undefined4 *)(param_2 + 0x1c8);
  uStack_2cc = *(undefined4 *)(param_2 + 0x1cc);
  local_2c0 = 0;
  local_2b8 = 0;
  FUN_140a58be0(&local_2c0,param_2 + 0x1d8);
  local_60 = local_2c8;
  local_70 = local_2d8;
  uStack_6c = uStack_2d4;
  uStack_68 = uStack_2d0;
  uStack_64 = uStack_2cc;
  FUN_144a450dc(local_58,&local_2c0);
  FUN_1449db362(&local_2c0);
  local_2a0 = local_40;
  local_2a8 = local_298;
  lVar1 = FUN_14770d852(&local_2a8,param_2 + 0x1b0);
  FUN_14770d946(param_1,lVar1,param_3);
  (**(code **)(*param_1 + 0x80))
            (param_1,*(undefined4 *)(*param_3 + 0x270),lVar1 + 0x228,lVar1 + 600);
  FUN_14770d8a6(local_298);
  if ((local_30 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14770d6ea FUN_14770d6ea body=359 status=ok
// SIG undefined FUN_14770d6ea(void)

longlong FUN_14770d6ea(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_30,"TableView.Row",1);
  uVar3 = FUN_145817f3a(lVar2,local_30,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  *(longlong *)(param_1 + 0x1b0) = lVar2;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined1 *)(param_1 + 0x238) = 1;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined2 *)(param_1 + 0x250) = 1;
  *(undefined1 *)(param_1 + 0x252) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined8 *)(param_1 + 600) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x260) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14770d852 FUN_14770d852 body=84 status=ok
// SIG undefined FUN_14770d852(void)

undefined8 FUN_14770d852(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  puVar3 = (undefined8 *)param_1[1];
  uVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)puVar3[1];
  *puVar3 = uVar4;
  puVar3[1] = lVar5;
  if (plVar6 != (longlong *)0x0) {
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
  return *param_1;
}



// FUNCTION 14770d8a6 FUN_14770d8a6 body=160 status=ok
// SIG undefined FUN_14770d8a6(void)

void FUN_14770d8a6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x260);
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
  FUN_1449db362(param_1 + 0x240);
  FUN_1449db362(param_1 + 0x218);
  FUN_1449db362(param_1 + 0x208);
  FUN_1449db362(param_1 + 0x1f8);
  FUN_1449db362(param_1 + 0x1e8);
  FUN_1449db362(param_1 + 0x1d8);
  FUN_1449db362(param_1 + 0x1c8);
  FUN_1449db362(param_1 + 0x1b8);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 14770d946 FUN_14770d946 body=507 status=ok
// SIG undefined FUN_14770d946(void)

void FUN_14770d946(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90;
  undefined1 local_8c;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68 [16];
  code *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(param_1 + 0x37a) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_2 + 0x1b0);
  local_78 = 0;
  local_70 = 1;
  local_58 = (code *)&LAB_14770db42;
  local_50 = 0;
  FUN_14770dd6e(local_68,param_1,&local_58);
  FUN_140a5acbc(param_1 + 0x270,param_1 + 8,&local_78);
  FUN_1449db362(local_68);
  local_a0 = 0x3f800000;
  uStack_9c = 0;
  uStack_98 = 0x3f800000;
  uStack_94 = 0x3f800000;
  local_90 = 0;
  local_8c = 1;
  local_58 = FUN_14770db50;
  local_50 = 0;
  FUN_14770e260(local_88,param_1,&local_58);
  FUN_140a5c8a2(param_1 + 600,param_1 + 8,&local_a0);
  FUN_1449db362(local_88);
  FUN_14770e782(param_1 + 0x2e8,param_2 + 0x1b8);
  FUN_14770e806(param_1 + 0x2f8,param_2 + 0x1c8);
  FUN_145767132(param_1 + 800,param_2 + 0x1e8);
  FUN_14697937e(param_1 + 0x330,param_2 + 0x1f8);
  FUN_14697937e(param_1 + 0x340,param_2 + 0x208);
  FUN_146979402(param_1 + 0x350,param_2 + 0x218);
  local_b0 = *param_3;
  local_a8 = param_3[1];
  if (local_a8 != 0) {
    LOCK();
    *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + 1;
    UNLOCK();
  }
  FUN_14770dc88(param_1,&local_b0);
  *(undefined1 *)(param_1 + 700) = *(undefined1 *)(param_2 + 0x250);
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x254);
  *(undefined1 *)(param_1 + 0x37c) = *(undefined1 *)(param_2 + 0x251);
  *(undefined1 *)(param_1 + 0x37b) = *(undefined1 *)(param_2 + 0x252);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14770db50 FUN_14770db50 body=311 status=ok
// SIG undefined FUN_14770db50(void)

undefined4 * FUN_14770db50(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  bool bVar14;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = *(longlong **)(param_1 + 0x2b0);
  if (plVar3 != (longlong *)0x0) {
    iVar11 = (int)plVar3[1];
    while (iVar11 != 0) {
      LOCK();
      iVar9 = (int)plVar3[1];
      bVar14 = iVar11 == iVar9;
      if (bVar14) {
        *(int *)(plVar3 + 1) = iVar11 + 1;
        iVar9 = iVar11;
      }
      iVar11 = iVar9;
      UNLOCK();
      if (bVar14) {
        plVar4 = *(longlong **)(param_1 + 0x2a8);
        lVar5 = *(longlong *)(param_1 + 0x2c8);
        puVar13 = (undefined4 *)(lVar5 + 0x7b0);
        if ((*(byte *)(param_1 + 700) & plVar4 != (longlong *)0x0) != 0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          puVar12 = (undefined8 *)(**(code **)(*plVar4 + 0x48))(plVar4);
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
          if (puVar12 != (undefined8 *)0x0) {
            local_40 = *puVar12;
            cVar10 = (**(code **)(*plVar4 + 0x10))(plVar4);
            if (cVar10 != '\0') {
              puVar13 = (undefined4 *)(lVar5 + 0x7c4);
            }
          }
        }
        param_2[4] = puVar13[4];
        uVar6 = puVar13[1];
        uVar7 = puVar13[2];
        uVar8 = puVar13[3];
        *param_2 = *puVar13;
        param_2[1] = uVar6;
        param_2[2] = uVar7;
        param_2[3] = uVar8;
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
        if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
          return param_2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x2c8);
  param_2[4] = *(undefined4 *)(lVar5 + 0x7c0);
  uVar6 = *(undefined4 *)(lVar5 + 0x7b4);
  uVar7 = *(undefined4 *)(lVar5 + 0x7b8);
  uVar8 = *(undefined4 *)(lVar5 + 0x7bc);
  *param_2 = *(undefined4 *)(lVar5 + 0x7b0);
  param_2[1] = uVar6;
  param_2[2] = uVar7;
  param_2[3] = uVar8;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 14770dc88 FUN_14770dc88 body=229 status=ok
// SIG undefined FUN_14770dc88(void)

void FUN_14770dc88(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    lVar5 = lVar2 + 0x4e8;
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    *(longlong *)(param_1 + 0x2a8) = lVar5;
    plVar4 = *(longlong **)(param_1 + 0x2b0);
    if (plVar4 == (longlong *)0x0) goto LAB_14770dd36;
LAB_14770dcd6:
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    *(longlong **)(param_1 + 0x2b0) = plVar3;
    if (plVar3 == (longlong *)0x0) goto LAB_14770dd36;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar5 = lVar2 + 0x4e8;
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    *(longlong *)(param_1 + 0x2a8) = lVar5;
    if (*(longlong **)(param_1 + 0x2b0) != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x2b0);
      if (plVar4 != (longlong *)0x0) goto LAB_14770dcd6;
      *(longlong **)(param_1 + 0x2b0) = plVar3;
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
LAB_14770dd36:
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
                    /* WARNING: Could not recover jumptable at 0x00014770dd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14770dd6e FUN_14770dd6e body=397 status=ok
// SIG undefined FUN_14770dd6e(void)

longlong * FUN_14770dd6e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_14770de8a:
    *puVar5 = &PTR_LAB_149f056a0;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar10;
    *puVar5 = &PTR_FUN_14a50c5c0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_14770de8a;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar12 = iVar8 == iVar7;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar12);
    lVar9 = *(longlong *)(param_2 + 0x10) + -8;
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar9 = 0;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f056a0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14a50c5c0;
    puVar5[3] = lVar9;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 14770defc FUN_14770defc body=64 status=ok
// SIG undefined FUN_14770defc(void)

undefined8 * FUN_14770defc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a50c5c0;
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



// FUNCTION 14770df40 FUN_14770df40 body=81 status=ok
// SIG undefined FUN_14770df40(void)

undefined8 FUN_14770df40(longlong param_1)

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


