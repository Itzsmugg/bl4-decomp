// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1441e1b68 FUN_1441e1b68 body=85 status=ok
// SIG undefined FUN_1441e1b68(void)

void FUN_1441e1b68(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98f930;
  return;
}



// FUNCTION 1441e1bbe FUN_1441e1bbe body=118 status=ok
// SIG undefined FUN_1441e1bbe(void)

void FUN_1441e1bbe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98f930;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441e1c25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e1c3a FUN_1441e1c3a body=362 status=ok
// SIG undefined FUN_1441e1c3a(void)

ulonglong FUN_1441e1c3a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined8 *local_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400021e4(*(undefined8 *)(param_1 + 8),&local_38);
  local_60[0] = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  puVar7 = local_38;
  if ((int)local_30 == 0) {
    puVar7 = (undefined8 *)&DAT_149dfb77a;
  }
  FUN_140c3a228(local_60,puVar7);
  local_40 = 2;
  local_3c = 0xffffffff;
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_2 + 0x40) != *(int *)(param_2 + 0x6c)) {
    uVar2 = (uint)((ulonglong)DAT_14cbcea00 >> 0x10);
    uVar6 = (uint)DAT_14cbcea00 & 0xffff;
    lVar5 = param_2 + 0x70;
    if (*(longlong *)(param_2 + 0x78) != 0) {
      lVar5 = *(longlong *)(param_2 + 0x78);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_2 + 0x80) - 1U &
                             (int)((ulonglong)DAT_14cbcea00 >> 0x20) +
                             ((uint)DAT_14cbcea00 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_2 + 0x38);
      do {
        lVar1 = lVar5 + (longlong)iVar4 * 0x38;
        if (*(longlong *)(lVar5 + (longlong)iVar4 * 0x38) == DAT_14cbcea00) {
          if (((lVar1 != 0) && (lVar1 + 8 != 0)) &&
             (cVar3 = FUN_14097d526(lVar1 + 8,local_60), cVar3 != '\0')) {
            uVar8 = 0;
            goto LAB_1441e1d7a;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x30);
      } while (iVar4 != -1);
    }
  }
  local_38 = &DAT_14cbcea00;
  local_30 = local_60;
  FUN_145b208b6((longlong *)(param_2 + 0x38),local_24,&local_38,0);
  uVar8 = CONCAT71((int7)((ulonglong)local_60 >> 8),1);
LAB_1441e1d7a:
  FUN_140c3a2ac(local_60);
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1441e1dd0 FUN_1441e1dd0 body=29 status=ok
// SIG undefined FUN_1441e1dd0(void)

undefined8 FUN_1441e1dd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441e1e26 FUN_1441e1e26 body=64 status=ok
// SIG undefined FUN_1441e1e26(void)

undefined8 * FUN_1441e1e26(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98fba0;
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



// FUNCTION 1441e1e6a FUN_1441e1e6a body=81 status=ok
// SIG undefined FUN_1441e1e6a(void)

undefined8 FUN_1441e1e6a(longlong param_1)

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



// FUNCTION 1441e1ec0 FUN_1441e1ec0 body=89 status=ok
// SIG undefined FUN_1441e1ec0(void)

bool FUN_1441e1ec0(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441e1f0b;
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
LAB_1441e1f0b:
  return lVar6 == param_2;
}



// FUNCTION 1441e1f36 FUN_1441e1f36 body=118 status=ok
// SIG undefined FUN_1441e1f36(void)

void FUN_1441e1f36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98fba0;
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



// FUNCTION 1441e1fac FUN_1441e1fac body=118 status=ok
// SIG undefined FUN_1441e1fac(void)

void FUN_1441e1fac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98fba0;
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



// FUNCTION 1441e2022 FUN_1441e2022 body=156 status=ok
// SIG undefined FUN_1441e2022(void)

void FUN_1441e2022(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b412d70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98fba0;
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
                    /* WARNING: Could not recover jumptable at 0x0001441e20ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e20c8 FUN_1441e20c8 body=46 status=ok
// SIG undefined FUN_1441e20c8(void)

undefined8 FUN_1441e20c8(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1441e20f6(param_1 + 0x28);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1441e20f6 FUN_1441e20f6 body=103 status=ok
// SIG undefined FUN_1441e20f6(void)

void FUN_1441e20f6(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x2c) != 0) {
    uVar1 = *(uint *)(lVar2 + 0x28);
    lVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1441e2142;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       (((int)plVar4[2] == *(int *)(lVar2 + 0x2c) && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0))))
    {
      lVar3 = *plVar4;
      goto LAB_1441e2142;
    }
  }
  lVar3 = 0;
LAB_1441e2142:
  if (*(int *)(lVar2 + 0x9c) == *(int *)(lVar3 + 0x40)) {
    return;
  }
  *(int *)(lVar2 + 0x9c) = *(int *)(lVar3 + 0x40);
  FUN_14111b6ca();
  return;
}



// FUNCTION 1441e215e FUN_1441e215e body=64 status=ok
// SIG undefined FUN_1441e215e(void)

undefined8 * FUN_1441e215e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98fc10;
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



// FUNCTION 1441e21a2 FUN_1441e21a2 body=81 status=ok
// SIG undefined FUN_1441e21a2(void)

undefined8 FUN_1441e21a2(longlong param_1)

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



// FUNCTION 1441e21f8 FUN_1441e21f8 body=89 status=ok
// SIG undefined FUN_1441e21f8(void)

bool FUN_1441e21f8(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441e2243;
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
LAB_1441e2243:
  return lVar6 == param_2;
}



// FUNCTION 1441e226e FUN_1441e226e body=118 status=ok
// SIG undefined FUN_1441e226e(void)

void FUN_1441e226e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98fc10;
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



// FUNCTION 1441e22e4 FUN_1441e22e4 body=118 status=ok
// SIG undefined FUN_1441e22e4(void)

void FUN_1441e22e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98fc10;
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



// FUNCTION 1441e235a FUN_1441e235a body=156 status=ok
// SIG undefined FUN_1441e235a(void)

void FUN_1441e235a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b412d70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98fc10;
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
                    /* WARNING: Could not recover jumptable at 0x0001441e23e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e2400 FUN_1441e2400 body=46 status=ok
// SIG undefined FUN_1441e2400(void)

undefined8 FUN_1441e2400(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1441e242e(param_1 + 0x28);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1441e242e FUN_1441e242e body=103 status=ok
// SIG undefined FUN_1441e242e(void)

void FUN_1441e242e(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x2c) != 0) {
    uVar1 = *(uint *)(lVar2 + 0x28);
    lVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1441e247a;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       (((int)plVar4[2] == *(int *)(lVar2 + 0x2c) && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0))))
    {
      lVar3 = *plVar4;
      goto LAB_1441e247a;
    }
  }
  lVar3 = 0;
LAB_1441e247a:
  if (*(int *)(lVar2 + 0x9c) == *(int *)(lVar3 + 0x40)) {
    return;
  }
  *(int *)(lVar2 + 0x9c) = *(int *)(lVar3 + 0x40);
  FUN_14111b6ca();
  return;
}



// FUNCTION 1441e2496 FUN_1441e2496 body=64 status=ok
// SIG undefined FUN_1441e2496(void)

undefined8 * FUN_1441e2496(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98fc80;
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



// FUNCTION 1441e24da FUN_1441e24da body=81 status=ok
// SIG undefined FUN_1441e24da(void)

undefined8 FUN_1441e24da(longlong param_1)

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



// FUNCTION 1441e2530 FUN_1441e2530 body=89 status=ok
// SIG undefined FUN_1441e2530(void)

bool FUN_1441e2530(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441e257b;
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
LAB_1441e257b:
  return lVar6 == param_2;
}



// FUNCTION 1441e25a6 FUN_1441e25a6 body=118 status=ok
// SIG undefined FUN_1441e25a6(void)

void FUN_1441e25a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98fc80;
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



// FUNCTION 1441e261c FUN_1441e261c body=118 status=ok
// SIG undefined FUN_1441e261c(void)

void FUN_1441e261c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98fc80;
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



// FUNCTION 1441e2692 FUN_1441e2692 body=156 status=ok
// SIG undefined FUN_1441e2692(void)

void FUN_1441e2692(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98fc80;
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
                    /* WARNING: Could not recover jumptable at 0x0001441e271e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e272e FUN_1441e272e body=51 status=ok
// SIG undefined FUN_1441e272e(void)

void FUN_1441e272e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  iVar2 = FUN_14133cd66(*(undefined8 *)(param_1 + 0x30));
  if (*(int *)(lVar1 + 0xa0) == iVar2) {
    return;
  }
  *(int *)(lVar1 + 0xa0) = iVar2;
  FUN_14111b6ca(lVar1);
  return;
}



// FUNCTION 1441e2762 FUN_1441e2762 body=79 status=ok
// SIG undefined FUN_1441e2762(void)

ulonglong FUN_1441e2762(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar3 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x28);
    iVar2 = FUN_14133cd66(*(undefined8 *)(param_1 + 0x30));
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (*(int *)(lVar1 + 0xa0) != iVar2) {
      *(int *)(lVar1 + 0xa0) = iVar2;
      FUN_14111b6ca(lVar1);
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1441e27b2 FUN_1441e27b2 body=64 status=ok
// SIG undefined FUN_1441e27b2(void)

undefined8 * FUN_1441e27b2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98fcf0;
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



// FUNCTION 1441e27f6 FUN_1441e27f6 body=81 status=ok
// SIG undefined FUN_1441e27f6(void)

undefined8 FUN_1441e27f6(longlong param_1)

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



// FUNCTION 1441e284c FUN_1441e284c body=89 status=ok
// SIG undefined FUN_1441e284c(void)

bool FUN_1441e284c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441e2897;
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
LAB_1441e2897:
  return lVar6 == param_2;
}



// FUNCTION 1441e28c2 FUN_1441e28c2 body=118 status=ok
// SIG undefined FUN_1441e28c2(void)

void FUN_1441e28c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98fcf0;
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



// FUNCTION 1441e2938 FUN_1441e2938 body=118 status=ok
// SIG undefined FUN_1441e2938(void)

void FUN_1441e2938(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98fcf0;
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



// FUNCTION 1441e29ae FUN_1441e29ae body=156 status=ok
// SIG undefined FUN_1441e29ae(void)

void FUN_1441e29ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98fcf0;
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
                    /* WARNING: Could not recover jumptable at 0x0001441e2a3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e2aee FUN_1441e2aee body=676 status=ok
// SIG undefined FUN_1441e2aee(void)

void FUN_1441e2aee(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *param_1;
  FUN_141648437(local_68);
  FUN_140056680(local_78,L"build");
  FUN_1418bf800(param_2,local_78,local_68);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  lVar8 = 0x1000000000;
  iVar1 = *(int *)(lVar4 + 0x9c);
  local_78[0] = 0;
  local_78[1] = 0;
  lVar5 = 0xf;
  iVar2 = 0x10;
  lVar3 = 0x1000000000;
  iVar6 = iVar1;
  do {
    *(undefined2 *)((longlong)local_68 + lVar5 * 2) =
         *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar6 % 10) * 2);
    uVar7 = iVar6 + 9;
    lVar5 = lVar5 + -1;
    lVar3 = lVar3 + -0x100000000;
    iVar2 = iVar2 + -1;
    iVar6 = iVar6 / 10;
  } while (0x12 < uVar7);
  if (iVar1 < 0) {
    iVar2 = (int)lVar5;
    lVar3 = (longlong)iVar2;
    *(undefined2 *)((longlong)local_68 + lVar3 * 2) = 0x2d;
  }
  else {
    lVar3 = lVar3 >> 0x20;
  }
  FUN_1400020e8(local_78,(longlong)local_68 + lVar3 * 2,0x10 - iVar2);
  FUN_140056680(local_68,L"local_player_count");
  FUN_1418bf800(param_2,local_68,local_78);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(lVar4 + 0xa0);
  local_78[0] = 0;
  local_78[1] = 0;
  lVar4 = 0xf;
  iVar2 = 0x10;
  iVar6 = iVar1;
  do {
    *(undefined2 *)((longlong)local_68 + lVar4 * 2) =
         *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar6 % 10) * 2);
    uVar7 = iVar6 + 9;
    lVar4 = lVar4 + -1;
    lVar8 = lVar8 + -0x100000000;
    iVar2 = iVar2 + -1;
    iVar6 = iVar6 / 10;
  } while (0x12 < uVar7);
  if (iVar1 < 0) {
    iVar2 = (int)lVar4;
    lVar8 = (longlong)iVar2;
    *(undefined2 *)((longlong)local_68 + lVar8 * 2) = 0x2d;
  }
  else {
    lVar8 = lVar8 >> 0x20;
  }
  FUN_1400020e8(local_78,(longlong)local_68 + lVar8 * 2,0x10 - iVar2);
  FUN_140056680(local_68,L"party_member_count");
  FUN_1418bf800(param_2,local_68,local_78);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = param_1[1];
  FUN_140056680(local_68,L"play_online_privilege");
  FUN_1418bf800(param_2,local_68,lVar4);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e2d94 FUN_1441e2d94 body=727 status=ok
// SIG undefined FUN_1441e2d94(void)

bool FUN_1441e2d94(longlong *param_1,float *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  float *pfVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  bool bVar16;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar5 = (undefined8 *)*param_1;
  *(float *)param_1[1] = *(float *)param_1[1] - *param_2;
  pfVar6 = (float *)param_1[1];
  fVar3 = *pfVar6;
  if (fVar3 <= 0.0) {
    uVar9 = FUN_145d27e30(puVar5,pfVar6[1]);
    if ((char)uVar9 == *(char *)(pfVar6 + 2)) {
      FUN_148db14b8(puVar5 + 0x15,pfVar6[1]);
    }
    else {
      plVar11 = (longlong *)FUN_140773fe2();
      if (plVar11 != (longlong *)0x0) {
        uVar12 = FUN_14111b7b0(puVar5);
        lVar13 = (**(code **)(*plVar11 + 0x2d0))(plVar11,pfVar6[1],uVar12);
        if (lVar13 != 0) {
          fVar4 = pfVar6[1];
          fVar15 = 0.0;
          if (SUB41(pfVar6[2],0) < 4) {
            fVar15 = pfVar6[2];
          }
          plVar11 = (longlong *)puVar5[1];
          if (plVar11 == (longlong *)0x0) {
LAB_1441e2eaf:
            local_80 = (undefined8 *)0x0;
            local_78 = 0;
            FUN_1446efa72(&local_80,0,4,0x10);
            local_78 = 4;
            *local_80 = &PTR_LAB_14b990050;
            LOCK();
            UNLOCK();
            lVar14 = DAT_14c758608 + 1;
            lVar8 = DAT_14c758608 + 1;
            if (lVar14 == 0) {
              LOCK();
              UNLOCK();
              lVar14 = DAT_14c758608 + 2;
              lVar8 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar8;
            local_80[2] = lVar14;
            *local_80 = &PTR_FUN_14b98ffe0;
            local_80[3] = 0;
            local_80[4] = 0;
            local_80[5] = puVar5;
            *(float *)(local_80 + 6) = fVar4;
            FUN_148a5d2d9(lVar13,fVar15,&local_80);
          }
          else {
            iVar10 = (int)plVar11[1];
            do {
              if (iVar10 == 0) goto LAB_1441e2eaf;
              LOCK();
              iVar7 = (int)plVar11[1];
              bVar16 = iVar10 == iVar7;
              if (bVar16) {
                *(int *)(plVar11 + 1) = iVar10 + 1;
                iVar7 = iVar10;
              }
              iVar10 = iVar7;
              UNLOCK();
            } while (!bVar16);
            uVar12 = *puVar5;
            local_80 = (undefined8 *)0x0;
            local_78 = 0;
            FUN_1446efa72(&local_80,0,4,0x10);
            local_78 = 4;
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            *local_80 = &PTR_LAB_14b990050;
            LOCK();
            UNLOCK();
            lVar14 = DAT_14c758608 + 1;
            lVar8 = DAT_14c758608 + 1;
            if (lVar14 == 0) {
              LOCK();
              UNLOCK();
              lVar14 = DAT_14c758608 + 2;
              lVar8 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar8;
            local_80[2] = lVar14;
            *local_80 = &PTR_FUN_14b98ffe0;
            local_80[3] = uVar12;
            local_80[4] = plVar11;
            LOCK();
            *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
            UNLOCK();
            local_80[5] = puVar5;
            *(float *)(local_80 + 6) = fVar4;
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
            FUN_148a5d2d9(lVar13,fVar15,&local_80);
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
          FUN_148db14b8(puVar5 + 0x15,pfVar6[1]);
          goto LAB_1441e2de2;
        }
      }
    }
    FUN_148db0e50(puVar5 + 2,pfVar6[1],0,uVar9);
  }
LAB_1441e2de2:
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0.0 < fVar3;
}



// FUNCTION 1441e3076 FUN_1441e3076 body=12 status=ok
// SIG undefined FUN_1441e3076(void)

void FUN_1441e3076(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001441e307f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1441e3082 FUN_1441e3082 body=29 status=ok
// SIG undefined FUN_1441e3082(void)

undefined8 FUN_1441e3082(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441e30a0 FUN_1441e30a0 body=64 status=ok
// SIG undefined FUN_1441e30a0(void)

undefined8 * FUN_1441e30a0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98ffe0;
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



// FUNCTION 1441e30e4 FUN_1441e30e4 body=81 status=ok
// SIG undefined FUN_1441e30e4(void)

undefined8 FUN_1441e30e4(longlong param_1)

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



// FUNCTION 1441e313a FUN_1441e313a body=89 status=ok
// SIG undefined FUN_1441e313a(void)

bool FUN_1441e313a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441e3185;
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
LAB_1441e3185:
  return lVar6 == param_2;
}



// FUNCTION 1441e31b0 FUN_1441e31b0 body=118 status=ok
// SIG undefined FUN_1441e31b0(void)

void FUN_1441e31b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b990050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98ffe0;
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



// FUNCTION 1441e3226 FUN_1441e3226 body=118 status=ok
// SIG undefined FUN_1441e3226(void)

void FUN_1441e3226(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b990050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98ffe0;
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



// FUNCTION 1441e329c FUN_1441e329c body=156 status=ok
// SIG undefined FUN_1441e329c(void)

void FUN_1441e329c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b990050;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98ffe0;
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
                    /* WARNING: Could not recover jumptable at 0x0001441e3328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e334e FUN_1441e334e body=58 status=ok
// SIG undefined FUN_1441e334e(void)

undefined8 FUN_1441e334e(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1441dea84(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),param_2 == 0);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1441e3388 FUN_1441e3388 body=64 status=ok
// SIG undefined FUN_1441e3388(void)

undefined8 * FUN_1441e3388(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9900c0;
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



// FUNCTION 1441e33cc FUN_1441e33cc body=81 status=ok
// SIG undefined FUN_1441e33cc(void)

undefined8 FUN_1441e33cc(longlong param_1)

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



// FUNCTION 1441e3422 FUN_1441e3422 body=89 status=ok
// SIG undefined FUN_1441e3422(void)

bool FUN_1441e3422(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441e346d;
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
LAB_1441e346d:
  return lVar6 == param_2;
}



// FUNCTION 1441e3498 FUN_1441e3498 body=118 status=ok
// SIG undefined FUN_1441e3498(void)

void FUN_1441e3498(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9900c0;
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



// FUNCTION 1441e350e FUN_1441e350e body=118 status=ok
// SIG undefined FUN_1441e350e(void)

void FUN_1441e350e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9900c0;
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



// FUNCTION 1441e3584 FUN_1441e3584 body=156 status=ok
// SIG undefined FUN_1441e3584(void)

void FUN_1441e3584(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e35290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9900c0;
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
                    /* WARNING: Could not recover jumptable at 0x0001441e3610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e362e FUN_1441e362e body=50 status=ok
// SIG undefined FUN_1441e362e(void)

undefined8 FUN_1441e362e(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1401861f4(*(longlong *)(param_1 + 0x28) + 0x10);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1441e3660 FUN_1441e3660 body=64 status=ok
// SIG undefined FUN_1441e3660(void)

undefined8 * FUN_1441e3660(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b990130;
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



// FUNCTION 1441e36a4 FUN_1441e36a4 body=81 status=ok
// SIG undefined FUN_1441e36a4(void)

undefined8 FUN_1441e36a4(longlong param_1)

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



// FUNCTION 1441e36fa FUN_1441e36fa body=89 status=ok
// SIG undefined FUN_1441e36fa(void)

bool FUN_1441e36fa(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441e3745;
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
LAB_1441e3745:
  return lVar6 == param_2;
}



// FUNCTION 1441e3770 FUN_1441e3770 body=118 status=ok
// SIG undefined FUN_1441e3770(void)

void FUN_1441e3770(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f7870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990130;
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



// FUNCTION 1441e37e6 FUN_1441e37e6 body=118 status=ok
// SIG undefined FUN_1441e37e6(void)

void FUN_1441e37e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f7870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990130;
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



// FUNCTION 1441e385c FUN_1441e385c body=156 status=ok
// SIG undefined FUN_1441e385c(void)

void FUN_1441e385c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f7870;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b990130;
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
                    /* WARNING: Could not recover jumptable at 0x0001441e38e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e3904 FUN_1441e3904 body=49 status=ok
// SIG undefined FUN_1441e3904(void)

undefined8 FUN_1441e3904(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_148da7dac(*(undefined8 *)(param_1 + 0x28),param_3);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1441e3936 FUN_1441e3936 body=64 status=ok
// SIG undefined FUN_1441e3936(void)

undefined8 * FUN_1441e3936(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9901a0;
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



// FUNCTION 1441e397a FUN_1441e397a body=81 status=ok
// SIG undefined FUN_1441e397a(void)

undefined8 FUN_1441e397a(longlong param_1)

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



// FUNCTION 1441e39d0 FUN_1441e39d0 body=89 status=ok
// SIG undefined FUN_1441e39d0(void)

bool FUN_1441e39d0(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441e3a1b;
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
LAB_1441e3a1b:
  return lVar6 == param_2;
}



// FUNCTION 1441e3a46 FUN_1441e3a46 body=118 status=ok
// SIG undefined FUN_1441e3a46(void)

void FUN_1441e3a46(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f7870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9901a0;
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



// FUNCTION 1441e3abc FUN_1441e3abc body=118 status=ok
// SIG undefined FUN_1441e3abc(void)

void FUN_1441e3abc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f7870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9901a0;
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



// FUNCTION 1441e3b32 FUN_1441e3b32 body=156 status=ok
// SIG undefined FUN_1441e3b32(void)

void FUN_1441e3b32(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f7870;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9901a0;
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
                    /* WARNING: Could not recover jumptable at 0x0001441e3bbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e3bda FUN_1441e3bda body=49 status=ok
// SIG undefined FUN_1441e3bda(void)

undefined8 FUN_1441e3bda(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_148da7f10(*(undefined8 *)(param_1 + 0x28),param_3);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1441e3c0c FUN_1441e3c0c body=64 status=ok
// SIG undefined FUN_1441e3c0c(void)

undefined8 * FUN_1441e3c0c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b990210;
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



// FUNCTION 1441e3c50 FUN_1441e3c50 body=81 status=ok
// SIG undefined FUN_1441e3c50(void)

undefined8 FUN_1441e3c50(longlong param_1)

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



// FUNCTION 1441e3ca6 FUN_1441e3ca6 body=89 status=ok
// SIG undefined FUN_1441e3ca6(void)

bool FUN_1441e3ca6(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441e3cf1;
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
LAB_1441e3cf1:
  return lVar6 == param_2;
}



// FUNCTION 1441e3d1c FUN_1441e3d1c body=118 status=ok
// SIG undefined FUN_1441e3d1c(void)

void FUN_1441e3d1c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f7870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990210;
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



// FUNCTION 1441e3d92 FUN_1441e3d92 body=118 status=ok
// SIG undefined FUN_1441e3d92(void)

void FUN_1441e3d92(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f7870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990210;
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



// FUNCTION 1441e3e08 FUN_1441e3e08 body=156 status=ok
// SIG undefined FUN_1441e3e08(void)

void FUN_1441e3e08(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f7870;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b990210;
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
                    /* WARNING: Could not recover jumptable at 0x0001441e3e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e3eb0 FUN_1441e3eb0 body=49 status=ok
// SIG undefined FUN_1441e3eb0(void)

undefined8 FUN_1441e3eb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_148da7f10(*(undefined8 *)(param_1 + 0x28),param_3);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1441e3ee2 FUN_1441e3ee2 body=64 status=ok
// SIG undefined FUN_1441e3ee2(void)

undefined8 * FUN_1441e3ee2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b990280;
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



// FUNCTION 1441e3f26 FUN_1441e3f26 body=81 status=ok
// SIG undefined FUN_1441e3f26(void)

undefined8 FUN_1441e3f26(longlong param_1)

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



// FUNCTION 1441e3f7c FUN_1441e3f7c body=89 status=ok
// SIG undefined FUN_1441e3f7c(void)

bool FUN_1441e3f7c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441e3fc7;
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
LAB_1441e3fc7:
  return lVar6 == param_2;
}



// FUNCTION 1441e3ff2 FUN_1441e3ff2 body=118 status=ok
// SIG undefined FUN_1441e3ff2(void)

void FUN_1441e3ff2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9902f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990280;
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



// FUNCTION 1441e4068 FUN_1441e4068 body=118 status=ok
// SIG undefined FUN_1441e4068(void)

void FUN_1441e4068(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9902f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990280;
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



// FUNCTION 1441e40de FUN_1441e40de body=156 status=ok
// SIG undefined FUN_1441e40de(void)

void FUN_1441e40de(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9902f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b990280;
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
                    /* WARNING: Could not recover jumptable at 0x0001441e416a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e4184 FUN_1441e4184 body=46 status=ok
// SIG undefined FUN_1441e4184(void)

undefined8 FUN_1441e4184(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_148da8074(*(undefined8 *)(param_1 + 0x28));
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1441e41b2 FUN_1441e41b2 body=64 status=ok
// SIG undefined FUN_1441e41b2(void)

undefined8 * FUN_1441e41b2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b990360;
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



// FUNCTION 1441e41f6 FUN_1441e41f6 body=81 status=ok
// SIG undefined FUN_1441e41f6(void)

undefined8 FUN_1441e41f6(longlong param_1)

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



// FUNCTION 1441e424c FUN_1441e424c body=89 status=ok
// SIG undefined FUN_1441e424c(void)

bool FUN_1441e424c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441e4297;
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
LAB_1441e4297:
  return lVar6 == param_2;
}



// FUNCTION 1441e42c2 FUN_1441e42c2 body=118 status=ok
// SIG undefined FUN_1441e42c2(void)

void FUN_1441e42c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9903d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990360;
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



// FUNCTION 1441e4338 FUN_1441e4338 body=118 status=ok
// SIG undefined FUN_1441e4338(void)

void FUN_1441e4338(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9903d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990360;
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



// FUNCTION 1441e43ae FUN_1441e43ae body=156 status=ok
// SIG undefined FUN_1441e43ae(void)

void FUN_1441e43ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9903d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b990360;
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
                    /* WARNING: Could not recover jumptable at 0x0001441e443a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e4454 FUN_1441e4454 body=46 status=ok
// SIG undefined FUN_1441e4454(void)

undefined8 FUN_1441e4454(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1460db4f2(*(undefined8 *)(param_1 + 0x28));
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1441e4482 FUN_1441e4482 body=64 status=ok
// SIG undefined FUN_1441e4482(void)

undefined8 * FUN_1441e4482(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b990440;
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



// FUNCTION 1441e44c6 FUN_1441e44c6 body=81 status=ok
// SIG undefined FUN_1441e44c6(void)

undefined8 FUN_1441e44c6(longlong param_1)

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



// FUNCTION 1441e451c FUN_1441e451c body=89 status=ok
// SIG undefined FUN_1441e451c(void)

bool FUN_1441e451c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441e4567;
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
LAB_1441e4567:
  return lVar6 == param_2;
}



// FUNCTION 1441e4592 FUN_1441e4592 body=118 status=ok
// SIG undefined FUN_1441e4592(void)

void FUN_1441e4592(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9904b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990440;
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



// FUNCTION 1441e4608 FUN_1441e4608 body=118 status=ok
// SIG undefined FUN_1441e4608(void)

void FUN_1441e4608(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9904b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990440;
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



// FUNCTION 1441e467e FUN_1441e467e body=156 status=ok
// SIG undefined FUN_1441e467e(void)

void FUN_1441e467e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9904b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b990440;
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
                    /* WARNING: Could not recover jumptable at 0x0001441e470a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e471a FUN_1441e471a body=77 status=ok
// SIG undefined FUN_1441e471a(void)

undefined8 FUN_1441e471a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = param_3;
  FUN_1441e47f4(param_2,param_1 + 0x28,&local_14);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e4768 FUN_1441e4768 body=138 status=ok
// SIG undefined FUN_1441e4768(void)

ulonglong FUN_1441e4768(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_14 = param_2;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1441e47f4(&local_28,param_1 + 0x28,&local_14,param_3);
    FUN_1447a1747(local_28,local_20);
    uVar1 = CONCAT71((int7)((ulonglong)&local_28 >> 8),1);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e47f4 FUN_1441e47f4 body=703 status=ok
// SIG undefined FUN_1441e47f4(void)

undefined8 *
FUN_1441e47f4(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  int iVar5;
  void *_Src;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined1 auStack_a8 [36];
  undefined4 local_84;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined **local_68;
  longlong *local_60;
  longlong *local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar4 = *param_3;
  uVar11 = *param_2;
  *param_1 = 0;
  param_1[1] = 0;
  if (0 < *(int *)(param_4 + 1)) {
    lVar9 = FUN_145ec0e26(uVar11);
    local_84 = uVar4;
    local_80 = uVar11;
    if (((lVar9 == 0) || (*(longlong *)(lVar9 + 0x1f0) == 0)) ||
       (lVar9 = FUN_140d6e14c(), lVar9 == 0)) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(longlong *)(lVar9 + 0x30);
    }
    local_78 = 0;
    uStack_70 = 0;
    if ((longlong)*(int *)(param_4 + 1) != 0) {
      puVar15 = (undefined8 *)*param_4;
      lVar12 = (longlong)*(int *)(param_4 + 1) << 4;
      do {
        plVar10 = (longlong *)FUN_140489acc();
        (**(code **)(*plVar10 + 0x2e8))(plVar10,&local_68,puVar15,0);
        if ((&DAT_149fc1b6e)[local_50] == '\x01') {
          plVar10 = local_60;
          if (local_58 == (longlong *)0x0) goto LAB_1441e48fb;
          LOCK();
          *(int *)(local_58 + 1) = (int)local_58[1] + 1;
          UNLOCK();
          plVar13 = local_58;
        }
        else {
          plVar10 = (longlong *)0x0;
LAB_1441e48fb:
          plVar13 = (longlong *)0x0;
        }
        local_68 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
        bVar16 = plVar10 != (longlong *)0x0;
        if (bVar16 && lVar9 != 0) {
          uVar11 = FUN_145ec0e26(local_80);
          FUN_140b6e166(&local_68,uVar11,plVar10);
          if ((local_68 == (undefined **)0x0) ||
             (cVar7 = FUN_145cf80ce(lVar9,local_84), plVar10 = local_60, cVar7 == '\0')) {
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
            bVar16 = true;
          }
          else {
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
            bVar16 = false;
          }
        }
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar13 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        uVar6 = uStack_70;
        if (bVar16) {
          lVar14 = (longlong)(int)uStack_70;
          uVar8 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
          if (uStack_70._4_4_ < uVar8) {
            FUN_1447a1bd6(&local_78,uVar6 & 0xffffffff);
          }
          lVar14 = lVar14 * 0x10;
          puVar2 = (undefined8 *)(local_78 + lVar14);
          *(undefined8 *)(local_78 + lVar14) = 0;
          iVar5 = *(int *)(puVar15 + 1);
          _Src = (void *)*puVar15;
          *(int *)(local_78 + 8 + lVar14) = iVar5;
          if ((longlong)iVar5 == 0) {
            *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar2,iVar5,0);
            memcpy((void *)*puVar2,_Src,(longlong)iVar5 * 2);
          }
        }
        puVar15 = puVar15 + 2;
        lVar12 = lVar12 + -0x10;
      } while (lVar12 != 0);
    }
    FUN_1410e5bda(param_1,&local_78);
    FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1441e4ab4 FUN_1441e4ab4 body=64 status=ok
// SIG undefined FUN_1441e4ab4(void)

undefined8 * FUN_1441e4ab4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b990520;
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



// FUNCTION 1441e4af8 FUN_1441e4af8 body=81 status=ok
// SIG undefined FUN_1441e4af8(void)

undefined8 FUN_1441e4af8(longlong param_1)

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



// FUNCTION 1441e4b4e FUN_1441e4b4e body=89 status=ok
// SIG undefined FUN_1441e4b4e(void)

bool FUN_1441e4b4e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441e4b99;
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
LAB_1441e4b99:
  return lVar6 == param_2;
}



// FUNCTION 1441e4bc4 FUN_1441e4bc4 body=118 status=ok
// SIG undefined FUN_1441e4bc4(void)

void FUN_1441e4bc4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b990590;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990520;
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



// FUNCTION 1441e4c3a FUN_1441e4c3a body=118 status=ok
// SIG undefined FUN_1441e4c3a(void)

void FUN_1441e4c3a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b990590;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990520;
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



// FUNCTION 1441e4cb0 FUN_1441e4cb0 body=156 status=ok
// SIG undefined FUN_1441e4cb0(void)

void FUN_1441e4cb0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b990590;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b990520;
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
                    /* WARNING: Could not recover jumptable at 0x0001441e4d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e4d4c FUN_1441e4d4c body=65 status=ok
// SIG undefined FUN_1441e4d4c(void)

void FUN_1441e4d4c(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1441e4dec(param_1 + 0x28,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e4d8e FUN_1441e4d8e body=92 status=ok
// SIG undefined FUN_1441e4d8e(void)

undefined8 FUN_1441e4d8e(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1441e4dec(param_1 + 0x28,&local_c);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e4dec FUN_1441e4dec body=279 status=ok
// SIG undefined FUN_1441e4dec(void)

byte FUN_1441e4dec(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  byte unaff_BPL;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined **local_58;
  longlong local_50;
  longlong *local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *param_2;
  uVar4 = *param_1;
  FUN_1446f470e(&local_60,L"SHIFT",1);
  plVar5 = (longlong *)FUN_140489acc();
  (**(code **)(*plVar5 + 0x2e8))(plVar5,&local_58,param_3,local_60);
  if ((&DAT_149fc1b6e)[local_40] == '\x01') {
    lVar6 = local_50;
    if (local_48 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
      plVar5 = local_48;
    }
  }
  else {
    plVar5 = (longlong *)0x0;
    lVar6 = 0;
  }
  local_58 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])();
  if (lVar6 != 0) {
    unaff_BPL = FUN_148da8186(uVar4,uVar3,lVar6);
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
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar6 != 0 & unaff_BPL;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e4f04 FUN_1441e4f04 body=64 status=ok
// SIG undefined FUN_1441e4f04(void)

undefined8 * FUN_1441e4f04(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b990600;
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



// FUNCTION 1441e4f48 FUN_1441e4f48 body=81 status=ok
// SIG undefined FUN_1441e4f48(void)

undefined8 FUN_1441e4f48(longlong param_1)

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



// FUNCTION 1441e4f9e FUN_1441e4f9e body=89 status=ok
// SIG undefined FUN_1441e4f9e(void)

bool FUN_1441e4f9e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441e4fe9;
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
LAB_1441e4fe9:
  return lVar6 == param_2;
}



// FUNCTION 1441e5014 FUN_1441e5014 body=118 status=ok
// SIG undefined FUN_1441e5014(void)

void FUN_1441e5014(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b990670;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990600;
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



// FUNCTION 1441e508a FUN_1441e508a body=118 status=ok
// SIG undefined FUN_1441e508a(void)

void FUN_1441e508a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b990670;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990600;
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



// FUNCTION 1441e5100 FUN_1441e5100 body=156 status=ok
// SIG undefined FUN_1441e5100(void)

void FUN_1441e5100(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b990670;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b990600;
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
                    /* WARNING: Could not recover jumptable at 0x0001441e518c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e519c FUN_1441e519c body=114 status=ok
// SIG undefined FUN_1441e519c(void)

undefined4 FUN_1441e519c(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  uVar4 = FUN_1441e52a0(param_1 + 0x28,&local_1c);
  plVar3 = *(longlong **)(param_3 + 8);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e5210 FUN_1441e5210 body=143 status=ok
// SIG undefined FUN_1441e5210(void)

ulonglong FUN_1441e5210(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar4 = 0;
  }
  else {
    FUN_1441e52a0(param_1 + 0x28,&local_1c,param_3);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  }
  plVar3 = *(longlong **)(param_3 + 8);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e52a0 FUN_1441e52a0 body=91 status=ok
// SIG undefined FUN_1441e52a0(void)

ulonglong FUN_1441e52a0(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    uVar6 = FUN_148da8186(*param_1,*param_2,uVar3);
    return uVar6;
  }
  LOCK();
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  UNLOCK();
  uVar5 = FUN_148da8186(*param_1,*param_2,uVar3);
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
  return (ulonglong)uVar5;
}



// FUNCTION 1441e52fc FUN_1441e52fc body=64 status=ok
// SIG undefined FUN_1441e52fc(void)

undefined8 * FUN_1441e52fc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9906e0;
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



// FUNCTION 1441e5340 FUN_1441e5340 body=81 status=ok
// SIG undefined FUN_1441e5340(void)

undefined8 FUN_1441e5340(longlong param_1)

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



// FUNCTION 1441e5396 FUN_1441e5396 body=89 status=ok
// SIG undefined FUN_1441e5396(void)

bool FUN_1441e5396(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441e53e1;
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
LAB_1441e53e1:
  return lVar6 == param_2;
}



// FUNCTION 1441e540c FUN_1441e540c body=118 status=ok
// SIG undefined FUN_1441e540c(void)

void FUN_1441e540c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f7870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9906e0;
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



// FUNCTION 1441e5482 FUN_1441e5482 body=118 status=ok
// SIG undefined FUN_1441e5482(void)

void FUN_1441e5482(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f7870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9906e0;
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



// FUNCTION 1441e54f8 FUN_1441e54f8 body=156 status=ok
// SIG undefined FUN_1441e54f8(void)

void FUN_1441e54f8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f7870;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9906e0;
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
                    /* WARNING: Could not recover jumptable at 0x0001441e5584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e5594 FUN_1441e5594 body=65 status=ok
// SIG undefined FUN_1441e5594(void)

void FUN_1441e5594(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1441e5634(param_1 + 0x28,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e55d6 FUN_1441e55d6 body=92 status=ok
// SIG undefined FUN_1441e55d6(void)

undefined8 FUN_1441e55d6(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1441e5634(param_1 + 0x28,&local_c);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e5634 FUN_1441e5634 body=287 status=ok
// SIG undefined FUN_1441e5634(void)

void FUN_1441e5634(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **local_50;
  longlong local_48;
  longlong *local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *param_2;
  uVar4 = *param_1;
  FUN_1446f470e(&local_58,L"SHIFT",1);
  plVar6 = (longlong *)FUN_140489acc();
  (**(code **)(*plVar6 + 0x2e8))(plVar6,&local_50,param_3,local_58);
  if ((&DAT_149fc1b6e)[local_38] == '\x01') {
    lVar7 = local_48;
    if (local_40 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      plVar6 = local_40;
    }
  }
  else {
    plVar6 = (longlong *)0x0;
    lVar7 = 0;
  }
  local_50 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_38])();
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_148da81f0(uVar4,uVar3,lVar7);
  }
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
  FUN_143f5ce1a(*(undefined8 *)(DAT_14cb98ab0 + 0x28),uVar3,uVar5);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e5754 FUN_1441e5754 body=64 status=ok
// SIG undefined FUN_1441e5754(void)

undefined8 * FUN_1441e5754(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b990750;
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



// FUNCTION 1441e5798 FUN_1441e5798 body=81 status=ok
// SIG undefined FUN_1441e5798(void)

undefined8 FUN_1441e5798(longlong param_1)

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



// FUNCTION 1441e57ee FUN_1441e57ee body=89 status=ok
// SIG undefined FUN_1441e57ee(void)

bool FUN_1441e57ee(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441e5839;
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
LAB_1441e5839:
  return lVar6 == param_2;
}



// FUNCTION 1441e5864 FUN_1441e5864 body=118 status=ok
// SIG undefined FUN_1441e5864(void)

void FUN_1441e5864(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9907c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990750;
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



// FUNCTION 1441e58da FUN_1441e58da body=118 status=ok
// SIG undefined FUN_1441e58da(void)

void FUN_1441e58da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9907c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990750;
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



// FUNCTION 1441e5950 FUN_1441e5950 body=156 status=ok
// SIG undefined FUN_1441e5950(void)

void FUN_1441e5950(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9907c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b990750;
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
                    /* WARNING: Could not recover jumptable at 0x0001441e59dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e59ec FUN_1441e59ec body=104 status=ok
// SIG undefined FUN_1441e59ec(void)

void FUN_1441e59ec(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_3 + 8);
  if (plVar3 != (longlong *)0x0) {
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
    plVar3 = *(longlong **)(param_3 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001441e5a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1441e5a54 FUN_1441e5a54 body=129 status=ok
// SIG undefined FUN_1441e5a54(void)

ulonglong FUN_1441e5a54(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar4 = 0;
  }
  else {
    plVar3 = *(longlong **)(param_3 + 8);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (plVar3 != (longlong *)0x0) {
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
  }
  plVar3 = *(longlong **)(param_3 + 8);
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
  return uVar4 & 0xffffffff;
}



// FUNCTION 1441e5ad6 FUN_1441e5ad6 body=111 status=ok
// SIG undefined FUN_1441e5ad6(void)

undefined8 * FUN_1441e5ad6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b990910;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1441e5b27;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1441e5b27:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441e5b5a FUN_1441e5b5a body=115 status=ok
// SIG undefined FUN_1441e5b5a(void)

void FUN_1441e5b5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5072b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990910;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_1460dbc54(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1441e5bce FUN_1441e5bce body=115 status=ok
// SIG undefined FUN_1441e5bce(void)

void FUN_1441e5bce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5072b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990910;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_1460dbc54(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1441e5c42 FUN_1441e5c42 body=149 status=ok
// SIG undefined FUN_1441e5c42(void)

void FUN_1441e5c42(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b5072b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b990910;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_1460dbc54(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441e5cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e5cfa FUN_1441e5cfa body=40 status=ok
// SIG undefined FUN_1441e5cfa(void)

undefined8 FUN_1441e5cfa(longlong param_1)

{
  undefined8 in_RAX;
  undefined7 uVar1;
  undefined7 extraout_var;
  
  uVar1 = (undefined7)((ulonglong)in_RAX >> 8);
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0 && *(int *)(param_1 + 0x20) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))();
    uVar1 = extraout_var;
  }
  return CONCAT71(uVar1,1);
}



// FUNCTION 1441e5d22 FUN_1441e5d22 body=111 status=ok
// SIG undefined FUN_1441e5d22(void)

undefined8 * FUN_1441e5d22(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b990980;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1441e5d73;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1441e5d73:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441e5da6 FUN_1441e5da6 body=115 status=ok
// SIG undefined FUN_1441e5da6(void)

void FUN_1441e5da6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5072b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990980;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_1460db834(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1441e5e1a FUN_1441e5e1a body=115 status=ok
// SIG undefined FUN_1441e5e1a(void)

void FUN_1441e5e1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5072b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990980;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_1460db834(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1441e5e8e FUN_1441e5e8e body=149 status=ok
// SIG undefined FUN_1441e5e8e(void)

void FUN_1441e5e8e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b5072b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b990980;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_1460db834(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441e5f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e5f24 FUN_1441e5f24 body=65 status=ok
// SIG undefined FUN_1441e5f24(void)

void FUN_1441e5f24(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1441e5faa(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e5f66 FUN_1441e5f66 body=67 status=ok
// SIG undefined FUN_1441e5f66(void)

undefined8 FUN_1441e5f66(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1441e5faa(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e5faa FUN_1441e5faa body=629 status=ok
// SIG undefined FUN_1441e5faa(void)

void FUN_1441e5faa(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_f8 [44];
  undefined4 local_cc;
  longlong *local_c8;
  longlong local_c0 [2];
  longlong *local_b0;
  undefined8 *local_a8;
  undefined1 local_9c [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_cc = *param_2;
  uVar11 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  iVar3 = (int)param_3[5];
  local_c8 = param_1;
  if (iVar3 == 0) {
    uVar15 = 1;
    iVar12 = 0;
    iVar5 = 0;
  }
  else {
    puVar9 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar9 = (uint *)(param_3 + 2);
    }
    uVar14 = *puVar9;
    if (uVar14 == 0) {
      iVar5 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar5 = iVar3 + -1;
      }
      uVar11 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar11;
      }
      iVar12 = 0;
      do {
        if (uVar15 == uVar11) goto LAB_1441e619a;
        iVar12 = iVar12 + 0x20;
        uVar14 = puVar9[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar11 = 0;
      iVar12 = 0;
    }
    uVar15 = (ulonglong)(-uVar14 & uVar14);
    uVar2 = uVar15 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar5 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar5) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 < iVar3) {
    uVar14 = 0xffffffff;
    do {
      puVar1 = (undefined8 *)(*param_3 + (longlong)iVar5 * 0x28);
      plVar4 = (longlong *)*puVar1;
      (**(code **)(*plVar4 + 0x30))(plVar4,local_c0);
      local_b0 = local_c0;
      local_a8 = puVar1 + 2;
      FUN_1413216f2(&local_98,local_9c,&local_b0,0);
      if (local_c0[0] != 0) {
        FUN_1400020a8();
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      puVar9 = (uint *)param_3[4];
      if ((uint *)param_3[4] == (uint *)0x0) {
        puVar9 = (uint *)(param_3 + 2);
      }
      iVar3 = (int)param_3[5];
      iVar5 = (int)uVar11;
      lVar13 = (longlong)iVar5;
      uVar6 = puVar9[lVar13] & uVar14;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar7 <= iVar5) break;
        lVar10 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar6 = puVar9[lVar13 + lVar10 + 1];
          if (uVar6 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar8 - lVar13 == lVar10) goto LAB_1441e619a;
        }
        uVar11 = (ulonglong)(iVar5 + (int)lVar10 + 1);
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar5 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar3);
  }
LAB_1441e619a:
  plVar4 = (longlong *)*local_c8;
  if (plVar4 != (longlong *)0x0 && (int)local_c8[1] != 0) {
    (**(code **)(*plVar4 + 0x60))(plVar4,local_cc,&local_98);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_98);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e6220 FUN_1441e6220 body=162 status=ok
// SIG undefined FUN_1441e6220(void)

void FUN_1441e6220(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0xb0);
  if (*(int *)(param_1 + 0xb8) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1441e626d;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1441e626d:
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_145d43c70(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c31a(param_1 + 0x10);
  return;
}



// FUNCTION 1441e62c2 FUN_1441e62c2 body=29 status=ok
// SIG undefined FUN_1441e62c2(void)

undefined8 FUN_1441e62c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441e62e0 FUN_1441e62e0 body=83 status=ok
// SIG undefined FUN_1441e62e0(void)

undefined8 * FUN_1441e62e0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b990a10;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441e6348 FUN_1441e6348 body=116 status=ok
// SIG undefined FUN_1441e6348(void)

void FUN_1441e6348(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990a10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441e63bc FUN_1441e63bc body=116 status=ok
// SIG undefined FUN_1441e63bc(void)

void FUN_1441e63bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990a10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441e6430 FUN_1441e6430 body=154 status=ok
// SIG undefined FUN_1441e6430(void)

void FUN_1441e6430(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4d80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b990a10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441e64ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e64d4 FUN_1441e64d4 body=20 status=ok
// SIG undefined FUN_1441e64d4(void)

undefined1 FUN_1441e64d4(longlong param_1)

{
  FUN_1441e64e8(param_1 + 0x18);
  return 1;
}



// FUNCTION 1441e64e8 FUN_1441e64e8 body=263 status=ok
// SIG undefined FUN_1441e64e8(void)

void FUN_1441e64e8(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68 [3];
  undefined8 local_50;
  longlong local_48;
  undefined8 *local_40;
  longlong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_1;
  local_50 = *param_2;
  local_48 = param_2[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  FUN_1459b6cd8(lVar1,&local_50);
  lVar1 = *param_1;
  param_3 = (longlong *)*param_3;
  if (param_3 == (longlong *)0x0) {
    local_68[0] = 0;
    local_68[1] = 0;
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    (**(code **)(*param_3 + 0x18))(param_3,local_68);
  }
  local_38 = local_68;
  local_40 = param_2;
  FUN_148db27de(lVar1 + 0x50,local_2c);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((param_3 != (longlong *)0x0) && (local_78 != 0)) {
    FUN_1400020a8();
  }
  lVar1 = *param_1;
  if (((*(int *)(lVar1 + 8) == *(int *)(lVar1 + 0x34)) && (*(int *)(lVar1 + 0xa8) != 0)) &&
     (plVar2 = *(longlong **)(lVar1 + 0xa0), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x60))(plVar2,(int)param_1[2],lVar1 + 0x50);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e65f0 FUN_1441e65f0 body=111 status=ok
// SIG undefined FUN_1441e65f0(void)

undefined8 * FUN_1441e65f0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b990aa0;
  plVar1 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1441e6641;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1441e6641:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441e67de FUN_1441e67de body=123 status=ok
// SIG undefined FUN_1441e67de(void)

void FUN_1441e67de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98cfe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990aa0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_14114e6dc(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 1441e685a FUN_1441e685a body=123 status=ok
// SIG undefined FUN_1441e685a(void)

void FUN_1441e685a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98cfe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990aa0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_14114e6dc(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 1441e68d6 FUN_1441e68d6 body=157 status=ok
// SIG undefined FUN_1441e68d6(void)

void FUN_1441e68d6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b98cfe0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b990aa0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_14114e6dc(&p_Var1->EntryCount,param_1 + 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441e6964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e699c FUN_1441e699c body=294 status=ok
// SIG undefined FUN_1441e699c(void)

undefined8 FUN_1441e699c(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441e6abc;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1441e6abc;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1441e6abc:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441e6a4a;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      plVar3 = *(longlong **)(param_1 + 0x20);
      uVar7 = 1;
      if (plVar3 != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
        (**(code **)(*plVar3 + 0x60))(plVar3,CONCAT71((int7)((ulonglong)lVar6 >> 8),param_2 == 0));
      }
      goto LAB_1441e6a4a;
    }
  }
  uVar7 = 0;
LAB_1441e6a4a:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e6ac4 FUN_1441e6ac4 body=104 status=ok
// SIG undefined FUN_1441e6ac4(void)

undefined8 * FUN_1441e6ac4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b990cf0;
  plVar3 = (longlong *)param_1[7];
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
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441e6b30 FUN_1441e6b30 body=81 status=ok
// SIG undefined FUN_1441e6b30(void)

undefined8 FUN_1441e6b30(longlong param_1)

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



// FUNCTION 1441e6b86 FUN_1441e6b86 body=89 status=ok
// SIG undefined FUN_1441e6b86(void)

bool FUN_1441e6b86(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441e6bd1;
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
LAB_1441e6bd1:
  return lVar6 == param_2;
}



// FUNCTION 1441e6bfc FUN_1441e6bfc body=143 status=ok
// SIG undefined FUN_1441e6bfc(void)

void FUN_1441e6bfc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990cf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1441e6c8c FUN_1441e6c8c body=143 status=ok
// SIG undefined FUN_1441e6c8c(void)

void FUN_1441e6c8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990cf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1441e6d1c FUN_1441e6d1c body=181 status=ok
// SIG undefined FUN_1441e6d1c(void)

void FUN_1441e6d1c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  _RTL_CRITICAL_SECTION *p_Var4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e063e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b990cf0;
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
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  p_Var4 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var4;
  if (p_Var4 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var4->LockCount = p_Var4->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441e6dc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e6ddc FUN_1441e6ddc body=46 status=ok
// SIG undefined FUN_1441e6ddc(void)

undefined8 FUN_1441e6ddc(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1441e6e0a(param_1 + 0x28);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1441e6e0a FUN_1441e6e0a body=562 status=ok
// SIG undefined FUN_1441e6e0a(void)

void FUN_1441e6e0a(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_5c [8];
  short local_54 [2];
  undefined **local_50;
  longlong *local_48;
  longlong local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(param_2 + 8) < 2) || (*(longlong *)(param_1[1] + 0x30) != 0)) goto LAB_1441e6e37;
  uVar3 = *param_1;
  plVar10 = param_1 + 1;
  FUN_148da8fa0(uVar3,plVar10);
  if (*(longlong *)(*plVar10 + 0x30) == 0) goto LAB_1441e6e37;
  FUN_148da92b8(uVar3,plVar10);
  lVar5 = FUN_148da9c22(uVar3);
  if (((lVar5 == 0) || (lVar5 = FUN_1400f6f32(lVar5), lVar5 == 0)) ||
     (lVar5 = *(longlong *)(lVar5 + 0x68), lVar5 == 0)) goto LAB_1441e6e37;
  uVar1 = ((uint *)*plVar10)[1];
  if (((((uVar1 == 0) || (uVar2 = *(uint *)*plVar10, (int)uVar2 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar2 ||
        ((plVar8 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar8 == (longlong *)0x0 || (*(uint *)(plVar8 + 2) != uVar1)))))) ||
      ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) || (lVar9 = *plVar8, lVar9 == 0)) {
LAB_1441e6f0c:
    lVar9 = 0;
  }
  else {
    lVar6 = FUN_140082f10();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_1441e6f0c;
  }
  FUN_1413d94b2(lVar5,local_54,lVar9);
  if (local_54[0] < 0) goto LAB_1441e6e37;
  (**(code **)(**(longlong **)(*plVar10 + 0x30) + 0x10))(*(longlong **)(*plVar10 + 0x30),local_5c);
  FUN_1413d9c32(lVar5,&local_50,local_54,local_5c);
  uVar7 = (ulonglong)local_38;
  if ((&DAT_149fc1b6e)[uVar7] == '\x01') {
    if (local_48 != (longlong *)0x0) {
      cVar4 = (**(code **)(*local_48 + 0x28))();
      uVar7 = (ulonglong)local_38;
      goto LAB_1441e6f95;
    }
    local_50 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar7])(&local_48);
  }
  else {
    cVar4 = ((ulonglong)local_48 & 0xffffff) != 0;
LAB_1441e6f95:
    local_50 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar7])(&local_48);
    if (cVar4 != '\0') goto LAB_1441e6e37;
  }
  local_50 = &PTR_FUN_14a184370;
  local_48 = *(longlong **)(*plVar10 + 0x30);
  local_40 = *(longlong *)(*plVar10 + 0x38);
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  local_38 = 0;
  local_68 = 0;
  FUN_1414c1098(lVar5,local_5c,local_54,&local_50);
  local_50 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_38])(&local_48);
LAB_1441e6e37:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441e703e FUN_1441e703e body=104 status=ok
// SIG undefined FUN_1441e703e(void)

undefined8 * FUN_1441e703e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b990d60;
  plVar3 = (longlong *)param_1[7];
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
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441e70aa FUN_1441e70aa body=81 status=ok
// SIG undefined FUN_1441e70aa(void)

undefined8 FUN_1441e70aa(longlong param_1)

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



// FUNCTION 1441e7100 FUN_1441e7100 body=89 status=ok
// SIG undefined FUN_1441e7100(void)

bool FUN_1441e7100(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441e714b;
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
LAB_1441e714b:
  return lVar6 == param_2;
}



// FUNCTION 1441e7176 FUN_1441e7176 body=143 status=ok
// SIG undefined FUN_1441e7176(void)

void FUN_1441e7176(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990d60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1441e7206 FUN_1441e7206 body=143 status=ok
// SIG undefined FUN_1441e7206(void)

void FUN_1441e7206(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990d60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1441e7296 FUN_1441e7296 body=181 status=ok
// SIG undefined FUN_1441e7296(void)

void FUN_1441e7296(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  _RTL_CRITICAL_SECTION *p_Var4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4d80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b990d60;
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
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  p_Var4 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var4;
  if (p_Var4 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var4->LockCount = p_Var4->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441e733b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e7358 FUN_1441e7358 body=49 status=ok
// SIG undefined FUN_1441e7358(void)

undefined8 FUN_1441e7358(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1441e738a(param_1 + 0x28,param_3);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1441e738a FUN_1441e738a body=141 status=ok
// SIG undefined FUN_1441e738a(void)

void FUN_1441e738a(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  uVar3 = *param_1;
  plVar8 = param_1 + 1;
  *(undefined1 *)(param_1[1] + 0x28) = 0;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    lVar5 = *plVar8;
    lVar6 = param_2[1];
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    plVar7 = *(longlong **)(lVar5 + 0x20);
    *(longlong *)(lVar5 + 0x18) = lVar4;
    *(longlong *)(lVar5 + 0x20) = lVar6;
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
  }
  if ((*(longlong *)(*plVar8 + 8) != 0) && (*(longlong *)(*plVar8 + 0x30) != 0)) {
    FUN_148da9c66(uVar3,plVar8);
  }
  FUN_148da95b6(uVar3,plVar8);
  return;
}



// FUNCTION 1441e7418 FUN_1441e7418 body=104 status=ok
// SIG undefined FUN_1441e7418(void)

undefined8 * FUN_1441e7418(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b990dd0;
  plVar3 = (longlong *)param_1[7];
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
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441e7484 FUN_1441e7484 body=81 status=ok
// SIG undefined FUN_1441e7484(void)

undefined8 FUN_1441e7484(longlong param_1)

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



// FUNCTION 1441e74da FUN_1441e74da body=89 status=ok
// SIG undefined FUN_1441e74da(void)

bool FUN_1441e74da(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441e7525;
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
LAB_1441e7525:
  return lVar6 == param_2;
}



// FUNCTION 1441e7550 FUN_1441e7550 body=143 status=ok
// SIG undefined FUN_1441e7550(void)

void FUN_1441e7550(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990dd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1441e75e0 FUN_1441e75e0 body=143 status=ok
// SIG undefined FUN_1441e75e0(void)

void FUN_1441e75e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990dd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1441e7670 FUN_1441e7670 body=181 status=ok
// SIG undefined FUN_1441e7670(void)

void FUN_1441e7670(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  _RTL_CRITICAL_SECTION *p_Var4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4d80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b990dd0;
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
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  p_Var4 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var4;
  if (p_Var4 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var4->LockCount = p_Var4->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441e7715. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e7732 FUN_1441e7732 body=49 status=ok
// SIG undefined FUN_1441e7732(void)

undefined8 FUN_1441e7732(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1441e7764(param_1 + 0x28,param_3);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1441e7764 FUN_1441e7764 body=141 status=ok
// SIG undefined FUN_1441e7764(void)

void FUN_1441e7764(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  uVar3 = *param_1;
  plVar8 = param_1 + 1;
  *(undefined1 *)(param_1[1] + 0x50) = 0;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    lVar5 = *plVar8;
    lVar6 = param_2[1];
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    plVar7 = *(longlong **)(lVar5 + 0x48);
    *(longlong *)(lVar5 + 0x40) = lVar4;
    *(longlong *)(lVar5 + 0x48) = lVar6;
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
  }
  if ((*(longlong *)(*plVar8 + 8) != 0) && (*(longlong *)(*plVar8 + 0x30) != 0)) {
    FUN_148da9c66(uVar3,plVar8);
  }
  FUN_148da95b6(uVar3,plVar8);
  return;
}



// FUNCTION 1441e77f2 FUN_1441e77f2 body=91 status=ok
// SIG undefined FUN_1441e77f2(void)

bool FUN_1441e77f2(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441e7822;
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
LAB_1441e7822:
  return lVar6 == param_2;
}



// FUNCTION 1441e786a FUN_1441e786a body=29 status=ok
// SIG undefined FUN_1441e786a(void)

undefined8 FUN_1441e786a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441e7a06 FUN_1441e7a06 body=93 status=ok
// SIG undefined FUN_1441e7a06(void)

void FUN_1441e7a06(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9912e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441e7a64 FUN_1441e7a64 body=93 status=ok
// SIG undefined FUN_1441e7a64(void)

void FUN_1441e7a64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9912e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441e7ac2 FUN_1441e7ac2 body=126 status=ok
// SIG undefined FUN_1441e7ac2(void)

void FUN_1441e7ac2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7600;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9912e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441e7b31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e7b58 FUN_1441e7b58 body=287 status=ok
// SIG undefined FUN_1441e7b58(void)

undefined8 FUN_1441e7b58(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441e7c71;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441e7c71;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1441e7c71:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441e7c19;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if (*(longlong *)(param_2 + 0x68) == DAT_14cbced90) {
        FUN_148dab0ec(*(undefined8 *)(param_1 + 0x20));
      }
      goto LAB_1441e7c19;
    }
  }
  uVar6 = 0;
LAB_1441e7c19:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e7c78 FUN_1441e7c78 body=29 status=ok
// SIG undefined FUN_1441e7c78(void)

undefined8 FUN_1441e7c78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441e7caa FUN_1441e7caa body=101 status=ok
// SIG undefined FUN_1441e7caa(void)

void FUN_1441e7caa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9914a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441e7d10 FUN_1441e7d10 body=101 status=ok
// SIG undefined FUN_1441e7d10(void)

void FUN_1441e7d10(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9914a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441e7d76 FUN_1441e7d76 body=134 status=ok
// SIG undefined FUN_1441e7d76(void)

void FUN_1441e7d76(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9914a0;
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
                    /* WARNING: Could not recover jumptable at 0x0001441e7ded. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e7e06 FUN_1441e7e06 body=20 status=ok
// SIG undefined FUN_1441e7e06(void)

undefined1 FUN_1441e7e06(longlong param_1)

{
  FUN_1441e7e1a(param_1 + 0x18);
  return 1;
}



// FUNCTION 1441e7e1a FUN_1441e7e1a body=606 status=ok
// SIG undefined FUN_1441e7e1a(void)

void FUN_1441e7e1a(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *param_1;
  if (((*(int *)(lVar2 + 0x24) != 0) && (uVar1 = *(uint *)(lVar2 + 0x20), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == *(int *)(lVar2 + 0x24))) &&
       (((*(uint *)(lVar8 + 8) & 0x10200000) == 0 && (0 < (longlong)*(int *)(lVar2 + 0x408))))) {
      lVar8 = lVar2 + 0x40;
      if (*(longlong *)(lVar2 + 0x400) != 0) {
        lVar8 = *(longlong *)(lVar2 + 0x400);
      }
      piVar3 = (int *)param_1[2];
      lVar7 = 0;
      do {
        if ((*piVar3 == *(int *)(lVar8 + lVar7)) &&
           (plVar4 = *(longlong **)(piVar3 + 4), plVar4 == *(longlong **)(lVar8 + 0x10 + lVar7))) {
          if (plVar4 == (longlong *)0x0) {
LAB_1441e7fb3:
            local_38 = (code *)0x0;
            uStack_30 = 0;
          }
          else {
            if (((piVar3[3] == 0) || (uVar1 = piVar3[2], (int)uVar1 < 0)) ||
               (DAT_14c9647dc <= (int)uVar1)) goto LAB_1441e7fb3;
            lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            if (((lVar8 == 0) || (*(int *)(lVar8 + 0x10) != piVar3[3])) ||
               ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)) goto LAB_1441e7fb3;
            pcVar5 = (code *)(**(code **)(*plVar4 + 8))();
            if (pcVar5 == (code *)0x0) goto LAB_1441e7fb3;
            if (DAT_14cac9ca8 == 0) {
              local_50 = &local_38;
              local_38 = FUN_141030f22;
              local_40 = FUN_14081d0ea;
              local_48 = FUN_14081d0ea;
              local_58 = &LAB_1478c0a72;
              local_60 = &LAB_1417b2375;
              local_68 = L"Engine";
              local_70 = 0x1000000000;
              local_78 = 0x10000004;
              local_80 = 8;
              local_88 = 0x390;
              FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
            }
            if ((*(int *)(*(longlong *)(pcVar5 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(pcVar5 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30))
            goto LAB_1441e7fb3;
            uStack_30 = 0;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(pcVar5);
            }
            local_38 = pcVar5;
            uVar6 = FUN_145a3ca5a();
            uStack_30 = FUN_144718840(pcVar5,uVar6);
          }
          FUN_145806b10(lVar2,*(undefined4 *)param_1[2],&local_38,piVar3 + 6);
          break;
        }
        lVar7 = lVar7 + 0x78;
      } while ((longlong)*(int *)(lVar2 + 0x408) * 0x78 - lVar7 != 0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e807a FUN_1441e807a body=31 status=ok
// SIG undefined FUN_1441e807a(void)

undefined8 FUN_1441e807a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441e809a FUN_1441e809a body=461 status=ok
// SIG undefined FUN_1441e809a(void)

bool FUN_1441e809a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  
  if ((*param_1 != 0) && (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (*(code **)(*plVar1 + 0x20) == (code *)&LAB_144a7e90a) {
      plVar1 = plVar1 + 0x143;
    }
    else {
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    }
    if ((int)plVar1[6] != *(int *)((longlong)plVar1 + 0x5c)) {
      plVar3 = plVar1 + 0xc;
      if ((longlong *)plVar1[0xd] != (longlong *)0x0) {
        plVar3 = (longlong *)plVar1[0xd];
      }
      iVar2 = *(int *)((longlong)plVar3 +
                      (ulonglong)((int)plVar1[0xe] - 1U & *(uint *)(param_1 + 2)) * 4);
      if (iVar2 != -1) {
        do {
          bVar5 = *(uint *)(plVar1[5] + (longlong)iVar2 * 0xe0) == *(uint *)(param_1 + 2);
          if (bVar5) break;
          iVar2 = *(int *)((longlong)iVar2 * 0xe0 + plVar1[5] + 0xd0);
        } while (iVar2 != -1);
        goto LAB_1441e8128;
      }
    }
  }
  bVar5 = false;
LAB_1441e8128:
  if ((*param_2 != 0) && (plVar1 = (longlong *)param_2[1], plVar1 != (longlong *)0x0)) {
    if (*(code **)(*plVar1 + 0x20) == (code *)&LAB_144a7e90a) {
      plVar1 = plVar1 + 0x143;
    }
    else {
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    }
    if ((int)plVar1[6] != *(int *)((longlong)plVar1 + 0x5c)) {
      plVar3 = plVar1 + 0xc;
      if ((longlong *)plVar1[0xd] != (longlong *)0x0) {
        plVar3 = (longlong *)plVar1[0xd];
      }
      iVar2 = *(int *)((longlong)plVar3 +
                      (ulonglong)((int)plVar1[0xe] - 1U & *(uint *)(param_2 + 2)) * 4);
      if (iVar2 != -1) {
        do {
          if (*(uint *)(plVar1[5] + (longlong)iVar2 * 0xe0) == *(uint *)(param_2 + 2)) {
            if (!bVar5) goto LAB_1441e81c3;
            goto LAB_1441e81a6;
          }
          iVar2 = *(int *)((longlong)iVar2 * 0xe0 + plVar1[5] + 0xd0);
        } while (iVar2 != -1);
      }
    }
  }
  if (bVar5) {
LAB_1441e81c3:
    if ((*param_1 != 0) && (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
      if (*(code **)(*plVar1 + 0x20) == (code *)&LAB_144a7e90a) {
        plVar1 = plVar1 + 0x143;
      }
      else {
        plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
      }
      if ((int)plVar1[6] != *(int *)((longlong)plVar1 + 0x5c)) {
        plVar3 = plVar1 + 0xc;
        if ((longlong *)plVar1[0xd] != (longlong *)0x0) {
          plVar3 = (longlong *)plVar1[0xd];
        }
        iVar2 = *(int *)((longlong)plVar3 +
                        (ulonglong)((int)plVar1[0xe] - 1U & *(uint *)(param_1 + 2)) * 4);
        if (iVar2 != -1) {
          do {
            if (*(uint *)(plVar1[5] + (longlong)iVar2 * 0xe0) == *(uint *)(param_1 + 2)) {
              return true;
            }
            iVar2 = *(int *)((longlong)iVar2 * 0xe0 + plVar1[5] + 0xd0);
          } while (iVar2 != -1);
          return false;
        }
      }
    }
    bVar5 = false;
  }
  else {
LAB_1441e81a6:
    bVar4 = *(byte *)((longlong)param_1 + 0x19) < *(byte *)((longlong)param_2 + 0x19);
    bVar5 = false;
    if (*(byte *)((longlong)param_1 + 0x19) == *(byte *)((longlong)param_2 + 0x19)) {
      bVar5 = *(float *)((longlong)param_1 + 0x1c) == *(float *)((longlong)param_2 + 0x1c);
      bVar4 = *(float *)((longlong)param_1 + 0x1c) < *(float *)((longlong)param_2 + 0x1c);
    }
    bVar5 = !bVar4 && !bVar5;
  }
  return bVar5;
}



// FUNCTION 1441e8268 FUN_1441e8268 body=31 status=ok
// SIG undefined FUN_1441e8268(void)

undefined8 FUN_1441e8268(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441e8288 FUN_1441e8288 body=114 status=ok
// SIG undefined FUN_1441e8288(void)

void FUN_1441e8288(longlong *param_1,int param_2)

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



// FUNCTION 1441e834c FUN_1441e834c body=66 status=ok
// SIG undefined FUN_1441e834c(void)

void FUN_1441e834c(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1441e8390 FUN_1441e8390 body=53 status=ok
// SIG undefined FUN_1441e8390(void)

void FUN_1441e8390(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(lVar1 + 0x30) + 0x38))(lVar1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x0001441e83b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar1 + 0x30) + 0x30))(lVar1 + 0x30);
    return;
  }
  return;
}



// FUNCTION 1441e83dc FUN_1441e83dc body=29 status=ok
// SIG undefined FUN_1441e83dc(void)

undefined8 FUN_1441e83dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441e8578 FUN_1441e8578 body=93 status=ok
// SIG undefined FUN_1441e8578(void)

void FUN_1441e8578(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b991820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441e85d6 FUN_1441e85d6 body=93 status=ok
// SIG undefined FUN_1441e85d6(void)

void FUN_1441e85d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b991820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441e8634 FUN_1441e8634 body=126 status=ok
// SIG undefined FUN_1441e8634(void)

void FUN_1441e8634(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b991820;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441e86a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e86bc FUN_1441e86bc body=266 status=ok
// SIG undefined FUN_1441e86bc(void)

undefined8 FUN_1441e86bc(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441e87c0;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441e87c0;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441e87c0:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441e8767;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148dae608(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_1441e8767;
    }
  }
  uVar6 = 0;
LAB_1441e8767:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e87c8 FUN_1441e87c8 body=29 status=ok
// SIG undefined FUN_1441e87c8(void)

undefined8 FUN_1441e87c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441e8964 FUN_1441e8964 body=93 status=ok
// SIG undefined FUN_1441e8964(void)

void FUN_1441e8964(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b991900;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441e89c2 FUN_1441e89c2 body=93 status=ok
// SIG undefined FUN_1441e89c2(void)

void FUN_1441e89c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b991900;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441e8a20 FUN_1441e8a20 body=126 status=ok
// SIG undefined FUN_1441e8a20(void)

void FUN_1441e8a20(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b991900;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441e8a8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441e8aa8 FUN_1441e8aa8 body=266 status=ok
// SIG undefined FUN_1441e8aa8(void)

undefined8 FUN_1441e8aa8(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441e8bac;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441e8bac;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441e8bac:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441e8b53;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148dae608(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_1441e8b53;
    }
  }
  uVar6 = 0;
LAB_1441e8b53:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441e8bb3 FUN_1441e8bb3 body=9987 status=ok
// SIG undefined FUN_1441e8bb3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441e8bb3(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 *local_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined1 local_104 [8];
  undefined4 local_fc;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined1 local_e4 [8];
  undefined4 local_dc;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined1 local_c4 [8];
  wchar_t local_bc [2];
  wchar_t **local_b8;
  undefined1 *local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined4 *local_98;
  undefined1 *local_90;
  undefined **local_88;
  undefined1 *local_80;
  undefined1 local_78 [24];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1446f470e(&DAT_14cbce610,L"Party",1);
  FUN_1446f470e(&DAT_14cbce618,&DAT_149e063b2,1);
  _DAT_14cbce620 = 0;
  uRam000000014cbce628 = 0;
  _DAT_14cbce630 = 0;
  DAT_14cbce638 = 0;
  uRam000000014cbce640 = 0;
  FUN_1446ddda2(&DAT_14cbce620,"Matchmaking_AutomaticRegionText",0);
  atexit((_func_5014 *)&LAB_1441d8390);
  _DAT_14cbce648 = 0;
  uRam000000014cbce650 = 0;
  _DAT_14cbce658 = 0;
  DAT_14cbce660 = 0;
  uRam000000014cbce668 = 0;
  FUN_1446ddda2(&DAT_14cbce648,"Matchmaking_ManualRegionText",0);
  atexit((_func_5014 *)&LAB_1441d83a1);
  _DAT_14cbce670 = 0;
  uRam000000014cbce678 = 0;
  _DAT_14cbce680 = 0;
  DAT_14cbce688 = 0;
  uRam000000014cbce690 = 0;
  FUN_1446ddda2(&DAT_14cbce670,"PingDisplayText",0);
  atexit((_func_5014 *)&LAB_1441d83b2);
  _DAT_14cbce698 = 0;
  uRam000000014cbce6a0 = 0;
  _DAT_14cbce6a8 = 0;
  DAT_14cbce6b0 = 0;
  uRam000000014cbce6b8 = 0;
  FUN_1446ddda2(&DAT_14cbce698,"GoodPingDisplayText",0);
  atexit((_func_5014 *)&LAB_1441d83c3);
  _DAT_14cbce6c0 = 0;
  uRam000000014cbce6c8 = 0;
  _DAT_14cbce6d0 = 0;
  DAT_14cbce6d8 = 0;
  uRam000000014cbce6e0 = 0;
  FUN_1446ddda2(&DAT_14cbce6c0,"OkPingDisplayText",0);
  atexit((_func_5014 *)&LAB_1441d83d4);
  _DAT_14cbce6e8 = 0;
  uRam000000014cbce6f0 = 0;
  _DAT_14cbce6f8 = 0;
  DAT_14cbce700 = 0;
  uRam000000014cbce708 = 0;
  FUN_1446ddda2(&DAT_14cbce6e8,"BadPingDisplayText",0);
  atexit((_func_5014 *)&LAB_1441d83e5);
  FUN_1446f470e(&DAT_14cbce710,L"UNSET",1);
  FUN_140056680(&DAT_14cbce718,L"GameplayEnded");
  atexit((_func_5014 *)&LAB_1441d83f6);
  local_a8 = L"AssetRegistry";
  local_a0 = (undefined1 *)CONCAT35(local_a0._5_3_,0xd);
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbce728 = (ulonglong)uVar2;
  _DAT_14cbce734 = 0;
  FUN_14052b5e0(&DAT_14cbce730,"onlineprefs",0);
  _DAT_14cbce740 = "onlineprefs";
  _DAT_14cbce748 = 0;
  uRam000000014cbce750 = 0;
  _DAT_14cbce758 = 0;
  DAT_14cbce760 = 0;
  uRam000000014cbce768 = 0;
  FUN_1446ddda2(&DAT_14cbce748,"oak.onlineprefs",0);
  atexit((_func_5014 *)&LAB_1441d8407);
  _DAT_14cbce774 = 0;
  FUN_14052b5e0(&DAT_14cbce770,"trait_mission",0);
  _DAT_14cbce780 = "trait_mission";
  _DAT_14cbce78c = 0;
  FUN_14052b5e0(&DAT_14cbce788,"weekly_trait_mission",0);
  _DAT_14cbce798 = "weekly_trait_mission";
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_a8,&DAT_14cbce7a0);
  if (cVar1 == '\0') {
    _DAT_14cbce7a0 = 0;
    uRam000000014cbce7a8 = 0;
  }
  if (local_a8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbce7b0 = 0x47efffffe0000000;
  _DAT_14cbce7b8 = 0x47efffffe0000000;
  _DAT_14cbce7c0 = 0x47efffffe0000000;
  _DAT_14cbce7c8 = 0x47efffffe0000000;
  _DAT_14cbce7d0 = 0x47efffffe0000000;
  _DAT_14cbce7d8 = 0x47efffffe0000000;
  _DAT_14cbce7e0 = 0x47efffffe0000000;
  _DAT_14cbce7e8 = 0x47efffffe0000000;
  local_a8 = 
  L"慃桳眀慥潰彮灤彳獥楴慭整戀獡捩挀慨汬湥敧猀捯慩l桰瑯彯潭敤最湥牥捩瑟獡k慭汩爀獥慰湷琀瑵牯慩l灳捥慩彬潮楴楦慣楴湯最湥牥捩湟瑯晩捩瑡潩n慶汵彴慣摲伀䱎义彅䕍卓䝁E义䅇䕍䵟卅䅓䕇一呏䙉䍉呁佉彎䕍卓䝁E䕍啎呟呕剏䅉彌䕍卓䝁E潣汬捥楴汢e灵慤整挀湯楦彧灵慤整搀楥楮tGbxBrainAspectSettings_TakeOff"
  ;
  local_a0._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbce7f0 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbce7f8,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_1441d8418);
  local_a8 = L"潢敮䜀戀砀䄀琀琀爀椀戀甀琀攀䐀攀昀";
  local_a0._0_5_ = 4;
  FUN_14001a6c0(&local_a8,1);
  _DAT_14cbce80c = 0;
  FUN_14052b5e0(&DAT_14cbce808,"PlayerAwareness",0);
  _DAT_14cbce818 = "PlayerAwareness";
  local_a8 = L"basic";
  local_a0._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbce820 = (ulonglong)uVar2;
  local_a8 = L"challenge";
  local_a0._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbce828 = (ulonglong)uVar2;
  local_a8 = L"online";
  local_a0._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbce830 = (ulonglong)uVar2;
  local_a8 = L"social";
  local_a0._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbce838 = (ulonglong)uVar2;
  local_a8 = L"alert";
  local_a0._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbce840 = (ulonglong)uVar2;
  local_a8 = L"photo_mode";
  local_a0._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbce848 = (ulonglong)uVar2;
  local_a8 = L"generic_task";
  local_a0._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbce850 = (ulonglong)uVar2;
  local_a8 = L"mission";
  local_a0._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbce858 = (ulonglong)uVar2;
  local_a8 = 
  L"慭汩爀獥慰湷琀瑵牯慩l灳捥慩彬潮楴楦慣楴湯最湥牥捩湟瑯晩捩瑡潩n慶汵彴慣摲伀䱎义彅䕍卓䝁E义䅇䕍䵟卅䅓䕇一呏䙉䍉呁佉彎䕍卓䝁E䕍啎呟呕剏䅉彌䕍卓䝁E潣汬捥楴汢e灵慤整挀湯楦彧灵慤整搀楥楮tGbxBrainAspectSettings_TakeOff"
  ;
  local_a0._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbce860 = (ulonglong)uVar2;
  local_a8 = L"respawn";
  local_a0._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbce868 = (ulonglong)uVar2;
  local_a8 = L"tutorial";
  local_a0._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbce870 = (ulonglong)uVar2;
  local_a8 = L"special_notification";
  local_a0._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbce878 = (ulonglong)uVar2;
  local_a8 = L"generic_notification";
  local_a0._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbce880 = (ulonglong)uVar2;
  local_a8 = L"vault_card";
  local_a0._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbce888 = (ulonglong)uVar2;
  local_a8 = L"ONLINE_MESSAGE";
  local_a0._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbce890 = (ulonglong)uVar2;
  local_a8 = L"INGAME_MESSAGE";
  local_a0._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbce898 = (ulonglong)uVar2;
  local_a8 = L"NOTIFICATION_MESSAGE";
  local_a0._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbce8a0 = (ulonglong)uVar2;
  local_a8 = L"MENU_TUTORIAL_MESSAGE";
  local_a0._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbce8a8 = (ulonglong)uVar2;
  local_a8 = L"collectible";
  local_a0._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbce8b0 = (ulonglong)uVar2;
  local_a8 = L"湩瑩";
  local_a0._0_5_ = 4;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = L"update";
  local_a0._0_5_ = 6;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = L"config_update";
  local_a0._0_5_ = 0xd;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = L"deinit";
  local_a0 = (undefined1 *)CONCAT35(local_a0._5_3_,6);
  FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&DAT_14cbce8b8,L"player_level",1);
  FUN_1446f470e(&DAT_14cbce8c0,L"plot_mission",1);
  FUN_1446f470e(&DAT_14cbce8c8,L"campaign_completed",1);
  FUN_1446f470e(&DAT_14cbce8d0,L"highest_vault_hunter_level",1);
  FUN_1446f470e(&DAT_14cbce8d8,L"owned_cowbell",1);
  FUN_1446f470e(&DAT_14cbce8e0,L"owned_harmonica",1);
  FUN_1446f470e(&DAT_14cbce8e8,L"owned_bounty_pack_dlc",1);
  FUN_1446f470e(&DAT_14cbce8f0,L"bounty_pack_prereq",1);
  FUN_1446f470e(&DAT_14cbce8f8,L"dlc_prereq",1);
  FUN_140056680(&DAT_14cbce900,L"crossplay");
  atexit((_func_5014 *)&LAB_1441d8429);
  FUN_140056680(&DAT_14cbce910,L"player_level");
  atexit((_func_5014 *)&LAB_1441d843a);
  FUN_140056680(&DAT_14cbce920,L"plot_mission");
  atexit((_func_5014 *)&LAB_1441d844b);
  FUN_140056680(&DAT_14cbce930,L"campaign_completion_mask");
  atexit((_func_5014 *)&LAB_1441d845c);
  FUN_140056680(&DAT_14cbce940,L"campaign_completion");
  atexit((_func_5014 *)&LAB_1441d846d);
  FUN_140056680(&DAT_14cbce950,L"vault_hunter_level");
  atexit((_func_5014 *)&LAB_1441d847e);
  FUN_140056680(&DAT_14cbce960,&DAT_14b3f9006);
  atexit((_func_5014 *)&LAB_1441d848f);
  FUN_140056680(&DAT_14cbce970,L"owned_bounty_pack_mask");
  atexit((_func_5014 *)&LAB_1441d84a0);
  FUN_140056680(&DAT_14cbce980,L"cowbell_completion_count");
  atexit((_func_5014 *)&LAB_1441d84b1);
  FUN_140056680(&DAT_14cbce990,L"harmonica_completion_count");
  atexit((_func_5014 *)&LAB_1441d84c2);
  FUN_140056680(&DAT_14cbce9a0,L"Endgame");
  atexit((_func_5014 *)&LAB_1441d84d3);
  FUN_140056680(&DAT_14cbce9b0,L"BossRun");
  atexit((_func_5014 *)&LAB_1441d84e4);
  FUN_140056680(&DAT_14cbce9c0,L"DisallowDLCMapHost");
  atexit((_func_5014 *)&LAB_1441d84f5);
  FUN_140056680(&DAT_14cbce9d0,L"Campaign");
  atexit((_func_5014 *)&LAB_1441d8506);
  FUN_140056680(&DAT_14cbce9e0,L"TubaTakedown");
  atexit((_func_5014 *)&LAB_1441d8517);
  FUN_1446f470e(&DAT_14cbcea00,L"HostCharacterDef",1);
  local_a8 = L"Online";
  local_a0._0_4_ = 6;
  FUN_1446e940c(&local_b8,&local_a8);
  local_a8 = L"OnlinePresence";
  local_a0._0_4_ = 0xe;
  FUN_1446e940c(&local_d8,&local_a8);
  local_a8 = L"Online";
  local_a0._0_4_ = 6;
  FUN_140208c1e(&DAT_14cbcea08,&local_d8,&local_b8,&local_a8);
  atexit((_func_5014 *)&LAB_1441de69f);
  local_a8 = L"Offline";
  local_a0._0_4_ = 7;
  FUN_1446e940c(&local_b8,&local_a8);
  local_a8 = L"OnlinePresence";
  local_a0._0_4_ = 0xe;
  FUN_1446e940c(&local_d8,&local_a8);
  local_a8 = L"Offline";
  local_a0._0_4_ = 7;
  FUN_140208c1e(&DAT_14cbcea18,&local_d8,&local_b8,&local_a8);
  atexit((_func_5014 *)&LAB_1441de6b3);
  local_a8 = L"Away";
  local_a0._0_4_ = 4;
  FUN_1446e940c(&local_b8,&local_a8);
  local_a8 = L"OnlinePresence";
  local_a0._0_4_ = 0xe;
  FUN_1446e940c(&local_d8,&local_a8);
  local_a8 = L"Away";
  local_a0._0_4_ = 4;
  FUN_140208c1e(&DAT_14cbcea28,&local_d8,&local_b8,&local_a8);
  atexit((_func_5014 *)&LAB_1441de6c7);
  local_a8 = L"DoNotDisturb";
  local_a0._0_4_ = 0xc;
  FUN_1446e940c(&local_b8,&local_a8);
  local_a8 = L"OnlinePresence";
  local_a0._0_4_ = 0xe;
  FUN_1446e940c(&local_d8,&local_a8);
  local_a8 = L"Do Not Disturb";
  local_a0._0_4_ = 0xe;
  FUN_140208c1e(&DAT_14cbcea38,&local_d8,&local_b8,&local_a8);
  atexit((_func_5014 *)&LAB_1441de6db);
  local_a8 = L"Chat";
  local_a0._0_4_ = 4;
  FUN_1446e940c(&local_b8,&local_a8);
  local_a8 = L"OnlinePresence";
  local_a0._0_4_ = 0xe;
  FUN_1446e940c(&local_d8,&local_a8);
  local_a8 = L"Chat";
  local_a0._0_4_ = 4;
  FUN_140208c1e(&DAT_14cbcea48,&local_d8,&local_b8,&local_a8);
  atexit((_func_5014 *)&LAB_1441de6ef);
  local_a8 = L"Standard";
  local_a0._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcea58 = (ulonglong)uVar2;
  local_a8 = L"PrologueSkip";
  local_a0._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcea60 = (ulonglong)uVar2;
  local_a8 = L"UltimateVaultHunterSkip";
  local_a0._0_5_ = 0x17;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcea68 = (ulonglong)uVar2;
  local_a8 = L"SkipToDLC_Cowbell";
  local_a0._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcea70 = (ulonglong)uVar2;
  local_a8 = L"SkipToDLC_Harmonica";
  local_a0._0_5_ = 0x13;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcea78 = (ulonglong)uVar2;
  local_a8 = L"獕e慔杲瑥潌正圀慥潰nGpsGeneratorSettings_TargetingOwner";
  local_a0._0_5_ = 3;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcea80 = (ulonglong)uVar2;
  local_a8 = L"Sight";
  local_a0._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcea88 = (ulonglong)uVar2;
  local_a8 = L"TargetLock";
  local_a0 = (undefined1 *)CONCAT35(local_a0._5_3_,10);
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcea90 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbcea98,L"GoreStump_");
  atexit((_func_5014 *)&LAB_1441de703);
  FUN_140056680(&DAT_14cbceaa8,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_1441de714);
  FUN_140056680(&DAT_14cbceab8,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_1441de725);
  FUN_140056680(&DAT_14cbceac8,L"GoreFX_");
  atexit((_func_5014 *)&LAB_1441de736);
  FUN_1446f470e(&DAT_14cbcead8,L"LIMB_GORED",1);
  _DAT_14cbceae0 = 0x4072c00000000000;
  _DAT_14cbceae8 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbceaf0,L"body",1);
  FUN_1446f470e(&DAT_14cbceaf8,L"title_card",1);
  FUN_1400b22c2(&DAT_14cbceb00,"Party");
  atexit((_func_5014 *)&LAB_1441de747);
  FUN_1400b22c2(&DAT_14cbceb10,&DAT_14b524850);
  atexit((_func_5014 *)&LAB_1441de758);
  FUN_1400b22c2(&DAT_14cbceb20,"Match");
  atexit((_func_5014 *)&LAB_1441de769);
  FUN_1400b22c2(&DAT_14cbceb30,"Spectate");
  atexit((_func_5014 *)&LAB_1441de77a);
  FUN_140056680(&DAT_14cbceb40,L"InMenus");
  atexit((_func_5014 *)&LAB_1441de78b);
  FUN_140056680(&DAT_14cbceb50,L"InGameplay");
  atexit((_func_5014 *)&LAB_1441de79c);
  FUN_140056680(&DAT_14cbceb60,L"Kitten");
  atexit((_func_5014 *)&LAB_1441de7ad);
  FUN_140056680(&DAT_14cbceb70,L"Ozone");
  atexit((_func_5014 *)&LAB_1441de7be);
  FUN_1446f470e(&DAT_14cbcec84,L"PRESENCESEARCH",1);
  local_bc[0] = L'\0';
  local_bc[1] = L'\0';
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_14020fad6(&local_d8,L"InvalidSession");
  iVar3 = (int)uStack_d0 + -1;
  if ((int)uStack_d0 == 0) {
    iVar3 = 0;
  }
  FUN_1446f82e2(local_c4,iVar3,local_d8,1);
  local_dc = 1;
  local_f8 = 0;
  uStack_f0 = 0;
  local_a8 = local_bc;
  local_a0 = local_c4;
  FUN_14020fad6(&local_f8,L"NetworkCapabilityLost");
  iVar3 = (int)uStack_f0 + -1;
  if ((int)uStack_f0 == 0) {
    iVar3 = 0;
  }
  FUN_1446f82e2(local_e4,iVar3,local_f8,1);
  local_fc = 2;
  local_118 = 0;
  uStack_110 = 0;
  local_98 = &local_dc;
  local_90 = local_e4;
  FUN_14020fad6(&local_118,L"AgeRestriction");
  iVar3 = (int)uStack_110 + -1;
  if ((int)uStack_110 == 0) {
    iVar3 = 0;
  }
  FUN_1446f82e2(local_104,iVar3,local_118,1);
  local_b0 = local_78;
  local_b8 = &local_a8;
  local_88 = (undefined **)&local_fc;
  local_80 = local_104;
  FUN_145dde666(&local_b8);
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  atexit(FUN_1441deb57);
  local_a8 = L"UnixSocketPath";
  local_a0._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcecf8 = (ulonglong)uVar2;
  local_a8 = L"UpscalingMethod";
  local_a0._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbced00 = (ulonglong)uVar2;
  local_a8 = L"FrameGeneration";
  local_a0._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbced08 = (ulonglong)uVar2;
  local_a8 = L"Upscaling";
  local_a0._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbced10 = (ulonglong)uVar2;
  local_a8 = L"AntiAliasingMethod";
  local_a0._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbced18 = (ulonglong)uVar2;
  local_a8 = L"WindowsTextureLODGroups";
  local_a0._0_5_ = 0x17;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbced20 = (ulonglong)uVar2;
  local_a8 = L"Textures";
  local_a0._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbced28 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbcf488,L"oak.CharacterInfo");
  atexit((_func_5014 *)&LAB_1441dee90);
  FUN_140056680(&DAT_14cbcf498,L"oak.PlayerLevel");
  atexit((_func_5014 *)&LAB_1441deea1);
  FUN_140056680(&DAT_14cbcf4a8,L"oak.Headset");
  atexit((_func_5014 *)&LAB_1441deeb2);
  FUN_140056680(&DAT_14cbce9f0,L"oak.DlcMask");
  atexit((_func_5014 *)&LAB_1441deec3);
  FUN_140056680(&DAT_14cbced30,L"OAK.QUIT_TO_MENU_WITH_PARTY");
  atexit((_func_5014 *)&LAB_1441deed4);
  FUN_140056680(&DAT_14cbced40,L"OAK.CANCEL_RETURN_TO_MAIN_MENU");
  atexit((_func_5014 *)&LAB_1441deee5);
  FUN_140056680(&DAT_14cbced50,L"OAK.HOST_MAIN_MENU_STATION");
  atexit((_func_5014 *)&LAB_1441deef6);
  FUN_140056680(&DAT_14cbced60,L"OAK.PARTY_LEADER_PROGRESS");
  atexit((_func_5014 *)&LAB_1441def07);
  FUN_140056680(&DAT_14cbced70,L"OAK.PARTY_LEADER_VAULT_HUNTER_LEVEL");
  atexit((_func_5014 *)&LAB_1441def18);
  FUN_140056680(&DAT_14cbced80,L"Empty");
  atexit((_func_5014 *)&LAB_1441df69a);
  local_a8 = L"Phased";
  local_a0._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbced90 = (ulonglong)uVar2;
  DAT_14cbced98 = 0;
  atexit((_func_5014 *)&LAB_1441df6b5);
  local_a8 = L"Ping Duration";
  local_a0._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcee10 = (ulonglong)uVar2;
  local_a8 = L"Reference Size";
  local_a0._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcee18 = (ulonglong)uVar2;
  local_a8 = L"Stencil Bitmask";
  local_a0._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcee20 = (ulonglong)uVar2;
  local_a8 = L"Effect Color";
  local_a0._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcee28 = (ulonglong)uVar2;
  local_a8 = L"Outline Width";
  local_a0._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcee30 = (ulonglong)uVar2;
  local_a8 = L"Outline Alpha";
  local_a0._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcee38 = (ulonglong)uVar2;
  local_a8 = L"Fill Type";
  local_a0._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcee40 = (ulonglong)uVar2;
  local_a8 = L"Fill Alpha";
  local_a0 = (undefined1 *)CONCAT35(local_a0._5_3_,10);
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcee48 = (ulonglong)uVar2;
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,0x41a00000);
  local_128 = (wchar_t **)((ulonglong)local_128._4_4_ << 0x20);
  FUN_140a6b41e(&DAT_14cbcee50,L"oak.grapple.AsyncTraceFrequency",&local_a8,
                L"Limit on asynchronous grapple traces per player per second");
  atexit(FUN_1441df6dd);
  DAT_14cbcee68 = 0;
  uRam000000014cbcee70 = 0;
  local_98 = (undefined4 *)0x0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_1441e82fa;
  local_a8 = L"ｈ찡䡖\xec83䠠캉돨";
  local_120 = &DAT_149e02088;
  local_128 = &local_a8;
  FUN_145dc59f4(&DAT_14cbcee80,"OakAimAssistParameters",FUN_148dabef8,0);
  atexit((_func_5014 *)&LAB_1441df722);
  FUN_1446f470e(&DAT_14cbcef00,L"PlayerTargetLineOfSight",1);
  _DAT_14cbcef0c = 0;
  FUN_14052b5e0(&DAT_14cbcef08,"profile",0);
  _DAT_14cbcef18 = 0;
  FUN_14052b5e0(&DAT_14cbcef14,"input",0);
  _DAT_14cbcef24 = 0;
  FUN_14052b5e0(&DAT_14cbcef20,"cursor",0);
  _DAT_14cbcef30 = 0;
  FUN_14052b5e0(&DAT_14cbcef2c,"invert_x_axis",0);
  _DAT_14cbcef3c = 0;
  FUN_14052b5e0(&DAT_14cbcef38,"invert_y_axis",0);
  _DAT_14cbcef48 = 0;
  FUN_14052b5e0(&DAT_14cbcef44,"sensitivity",0);
  _DAT_14cbcef54 = 0;
  FUN_14052b5e0(&DAT_14cbcef50,"friction_default",0);
  _DAT_14cbcef60 = 0;
  FUN_14052b5e0(&DAT_14cbcef5c,"pc_scroll_sensitivity",0);
  _DAT_14cbcef6c = 0;
  FUN_14052b5e0(&DAT_14cbcef68,"max_idle_time",0);
  _DAT_14cbcef78 = 0;
  FUN_14052b5e0(&DAT_14cbcef74,"show_idle_flash",0);
  ram0x00014cbcef84 = 0;
  FUN_14052b5e0(&DAT_14cbcef80,"volume_overall",0);
  ram0x00014cbcef90 = 0;
  FUN_14052b5e0(&DAT_14cbcef8c,"volume_music",0);
  ram0x00014cbcef9c = 0;
  FUN_14052b5e0(&DAT_14cbcef98,"volume_sfx",0);
  ram0x00014cbcefa8 = 0;
  FUN_14052b5e0(&DAT_14cbcefa4,"volume_dialog",0);
  ram0x00014cbcefb4 = 0;
  FUN_14052b5e0(&DAT_14cbcefb0,"PlayInBackground",0);
  ram0x00014cbcefc0 = 0;
  FUN_14052b5e0(&DAT_14cbcefbc,"MuteHitNotifies",0);
  ram0x00014cbcefcc = 0;
  FUN_14052b5e0(&DAT_14cbcefc8,"audio_preset",0);
  ram0x00014cbcefd8 = 0;
  FUN_14052b5e0(&DAT_14cbcefd4,"force_mono",0);
  ram0x00014cbcefe4 = 0;
  FUN_14052b5e0(&DAT_14cbcefe0,"use_controller_speaker",0);
  ram0x00014cbceff0 = 0;
  FUN_14052b5e0(&DAT_14cbcefec,"menu_music_volume",0);
  ram0x00014cbceffc = 0;
  FUN_14052b5e0(&DAT_14cbceff8,"game_music_volume",0);
  ram0x00014cbcf008 = 0;
  FUN_14052b5e0(&DAT_14cbcf004,"cinematic_music_volume",0);
  ram0x00014cbcf014 = 0;
  FUN_14052b5e0(&DAT_14cbcf010,"boss_music_trim",0);
  ram0x00014cbcf020 = 0;
  FUN_14052b5e0(&DAT_14cbcf01c,"player_weapons_trim",0);
  ram0x00014cbcf02c = 0;
  FUN_14052b5e0(&DAT_14cbcf028,"explosions_trim",0);
  ram0x00014cbcf038 = 0;
  FUN_14052b5e0(&DAT_14cbcf034,"ui_trim",0);
  ram0x00014cbcf044 = 0;
  FUN_14052b5e0(&DAT_14cbcf040,"outgoing_damage_trim",0);
  ram0x00014cbcf050 = 0;
  FUN_14052b5e0(&DAT_14cbcf04c,"incoming_damage_trim",0);
  ram0x00014cbcf05c = 0;
  FUN_14052b5e0(&DAT_14cbcf058,"player_voice_volume",0);
  ram0x00014cbcf068 = 0;
  FUN_14052b5e0(&DAT_14cbcf064,"player_efforts_trim",0);
  ram0x00014cbcf074 = 0;
  FUN_14052b5e0(&DAT_14cbcf070,"player_callouts_trim",0);
  ram0x00014cbcf080 = 0;
  FUN_14052b5e0(&DAT_14cbcf07c,"player_idle_lines_trim",0);
  ram0x00014cbcf08c = 0;
  FUN_14052b5e0(&DAT_14cbcf088,"combat_voice_volume",0);
  ram0x00014cbcf098 = 0;
  FUN_14052b5e0(&DAT_14cbcf094,"claptrap_volume",0);
  DAT_14cbcf0a0._4_4_ = 0;
  DAT_14cbcf0a8 = 0;
  FUN_14052b5e0(&DAT_14cbcf0a0,"eq_mode",0);
  DAT_14cbcf0ac._4_4_ = 0;
  DAT_14cbcf0b4 = 0;
  FUN_14052b5e0(&DAT_14cbcf0ac,"audio_language",0);
  DAT_14cbcf0b8._4_4_ = 0;
  DAT_14cbcf0c0 = 0;
  FUN_14052b5e0(&DAT_14cbcf0b8,"toggle_zoom",0);
  DAT_14cbcf0c4._4_4_ = 0;
  DAT_14cbcf0cc = 0;
  FUN_14052b5e0(&DAT_14cbcf0c4,"toggle_crouch",0);
  DAT_14cbcf0d0._4_4_ = 0;
  DAT_14cbcf0d8 = 0;
  FUN_14052b5e0(&DAT_14cbcf0d0,"toggle_sprint",0);
  DAT_14cbcf0dc._4_4_ = 0;
  DAT_14cbcf0e4 = 0;
  FUN_14052b5e0(&DAT_14cbcf0dc,"enable_dash",0);
  DAT_14cbcf0e8._4_4_ = 0;
  DAT_14cbcf0f0 = 0;
  FUN_14052b5e0(&DAT_14cbcf0e8,"controller_ads_snap",0);
  DAT_14cbcf0f4._4_4_ = 0;
  DAT_14cbcf0fc = 0;
  FUN_14052b5e0(&DAT_14cbcf0f4,"mouse_ads_snap",0);
  DAT_14cbcf100._4_4_ = 0;
  DAT_14cbcf108 = 0;
  FUN_14052b5e0(&DAT_14cbcf100,"controller_aim_assist",0);
  DAT_14cbcf10c._4_4_ = 0;
  DAT_14cbcf114 = 0;
  FUN_14052b5e0(&DAT_14cbcf10c,"controller_aim_recentering",0);
  DAT_14cbcf118._4_4_ = 0;
  DAT_14cbcf120 = 0;
  FUN_14052b5e0(&DAT_14cbcf118,"camera_head_bob",0);
  DAT_14cbcf124._4_4_ = 0;
  DAT_14cbcf12c = 0;
  FUN_14052b5e0(&DAT_14cbcf124,"mantle_with_forward",0);
  DAT_14cbcf130._4_4_ = 0;
  DAT_14cbcf138 = 0;
  FUN_14052b5e0(&DAT_14cbcf130,"censor_content",0);
  DAT_14cbcf13c._4_4_ = 0;
  DAT_14cbcf144 = 0;
  FUN_14052b5e0(&DAT_14cbcf13c,"look_mouse_sensitivity",0);
  DAT_14cbcf148._4_4_ = 0;
  DAT_14cbcf150 = 0;
  FUN_14052b5e0(&DAT_14cbcf148,"look_controller_sensitivity",0);
  DAT_14cbcf154._4_4_ = 0;
  DAT_14cbcf15c = 0;
  FUN_14052b5e0(&DAT_14cbcf154,"look_sensitivity_horizontal",0);
  DAT_14cbcf160._4_4_ = 0;
  DAT_14cbcf168 = 0;
  FUN_14052b5e0(&DAT_14cbcf160,"look_sensitivity_vertical",0);
  DAT_14cbcf16c._4_4_ = 0;
  DAT_14cbcf174 = 0;
  FUN_14052b5e0(&DAT_14cbcf16c,"ads_sensitivity_horizontal",0);
  DAT_14cbcf178._4_4_ = 0;
  DAT_14cbcf180 = 0;
  FUN_14052b5e0(&DAT_14cbcf178,"ads_sensitivity_vertical",0);
  DAT_14cbcf184._4_4_ = 0;
  DAT_14cbcf18c = 0;
  FUN_14052b5e0(&DAT_14cbcf184,"motion_controls_look_sensitivity_horizontal",0);
  DAT_14cbcf190._4_4_ = 0;
  DAT_14cbcf198 = 0;
  FUN_14052b5e0(&DAT_14cbcf190,"motion_controls_look_sensitivity_vertical",0);
  DAT_14cbcf19c._4_4_ = 0;
  DAT_14cbcf1a4 = 0;
  FUN_14052b5e0(&DAT_14cbcf19c,"motion_controls_ads_sensitivity_horizontal",0);
  DAT_14cbcf1a8._4_4_ = 0;
  DAT_14cbcf1b0 = 0;
  FUN_14052b5e0(&DAT_14cbcf1a8,"motion_controls_ads_sensitivity_vertical",0);
  DAT_14cbcf1b4._4_4_ = 0;
  DAT_14cbcf1bc = 0;
  FUN_14052b5e0(&DAT_14cbcf1b4,"motion_controls_setting",0);
  DAT_14cbcf1c0._4_4_ = 0;
  DAT_14cbcf1c8 = 0;
  FUN_14052b5e0(&DAT_14cbcf1c0,"jcms_look_sensitivity_horizontal",0);
  DAT_14cbcf1cc._4_4_ = 0;
  DAT_14cbcf1d4 = 0;
  FUN_14052b5e0(&DAT_14cbcf1cc,"jcms_look_sensitivity_vertical",0);
  DAT_14cbcf1d8._4_4_ = 0;
  DAT_14cbcf1e0 = 0;
  FUN_14052b5e0(&DAT_14cbcf1d8,"jcms_ads_sensitivity_horizontal",0);
  DAT_14cbcf1e4._4_4_ = 0;
  DAT_14cbcf1ec = 0;
  FUN_14052b5e0(&DAT_14cbcf1e4,"jcms_ads_sensitivity_vertical",0);
  DAT_14cbcf1f0._4_4_ = 0;
  DAT_14cbcf1f8 = 0;
  FUN_14052b5e0(&DAT_14cbcf1f0,"jcms_enable_control",0);
  DAT_14cbcf1fc._4_4_ = 0;
  DAT_14cbcf204 = 0;
  FUN_14052b5e0(&DAT_14cbcf1fc,"invert_look_x_axis_kbm",0);
  DAT_14cbcf208._4_4_ = 0;
  DAT_14cbcf210 = 0;
  FUN_14052b5e0(&DAT_14cbcf208,"invert_look_y_axis_kbm",0);
  DAT_14cbcf214._4_4_ = 0;
  DAT_14cbcf21c = 0;
  FUN_14052b5e0(&DAT_14cbcf214,"invert_move_x_axis_kbm",0);
  DAT_14cbcf220._4_4_ = 0;
  DAT_14cbcf228 = 0;
  FUN_14052b5e0(&DAT_14cbcf220,"invert_move_y_axis_kbm",0);
  DAT_14cbcf22c._4_4_ = 0;
  DAT_14cbcf234 = 0;
  FUN_14052b5e0(&DAT_14cbcf22c,"invert_look_x_axis_gamepad",0);
  DAT_14cbcf238._4_4_ = 0;
  DAT_14cbcf240 = 0;
  FUN_14052b5e0(&DAT_14cbcf238,"invert_look_y_axis_gamepad",0);
  DAT_14cbcf244._4_4_ = 0;
  DAT_14cbcf24c = 0;
  FUN_14052b5e0(&DAT_14cbcf244,"invert_move_x_axis_gamepad",0);
  DAT_14cbcf250._4_4_ = 0;
  DAT_14cbcf258 = 0;
  FUN_14052b5e0(&DAT_14cbcf250,"invert_move_y_axis_gamepad",0);
  DAT_14cbcf25c._4_4_ = 0;
  DAT_14cbcf264 = 0;
  FUN_14052b5e0(&DAT_14cbcf25c,"left_stick_radial_dead_zone_inner",0);
  DAT_14cbcf268._4_4_ = 0;
  DAT_14cbcf270 = 0;
  FUN_14052b5e0(&DAT_14cbcf268,"left_stick_radial_dead_zone_outer",0);
  DAT_14cbcf274._4_4_ = 0;
  DAT_14cbcf27c = 0;
  FUN_14052b5e0(&DAT_14cbcf274,"left_stick_axial_dead_zone_inner",0);
  DAT_14cbcf280._4_4_ = 0;
  DAT_14cbcf288 = 0;
  FUN_14052b5e0(&DAT_14cbcf280,"left_stick_axial_dead_zone_outer",0);
  DAT_14cbcf28c._4_4_ = 0;
  DAT_14cbcf294 = 0;
  FUN_14052b5e0(&DAT_14cbcf28c,"right_stick_radial_dead_zone_inner",0);
  DAT_14cbcf298._4_4_ = 0;
  DAT_14cbcf2a0 = 0;
  FUN_14052b5e0(&DAT_14cbcf298,"right_stick_radial_dead_zone_outer",0);
  DAT_14cbcf2a4._4_4_ = 0;
  DAT_14cbcf2ac = 0;
  FUN_14052b5e0(&DAT_14cbcf2a4,"right_stick_axial_dead_zone_inner",0);
  DAT_14cbcf2b0._4_4_ = 0;
  DAT_14cbcf2b8 = 0;
  FUN_14052b5e0(&DAT_14cbcf2b0,"right_stick_axial_dead_zone_outer",0);
  DAT_14cbcf2bc._4_4_ = 0;
  DAT_14cbcf2c4 = 0;
  FUN_14052b5e0(&DAT_14cbcf2bc,"use_toggle_glide_kbm",0);
  DAT_14cbcf2c8._4_4_ = 0;
  DAT_14cbcf2d0 = 0;
  FUN_14052b5e0(&DAT_14cbcf2c8,"use_toggle_glide_gamepad",0);
  DAT_14cbcf2d4._4_4_ = 0;
  DAT_14cbcf2dc = 0;
  FUN_14052b5e0(&DAT_14cbcf2d4,"crosshair_position",0);
  DAT_14cbcf2e0._4_4_ = 0;
  DAT_14cbcf2e8 = 0;
  FUN_14052b5e0(&DAT_14cbcf2e0,"base_fov",0);
  DAT_14cbcf2ec._4_4_ = 0;
  DAT_14cbcf2f4 = 0;
  FUN_14052b5e0(&DAT_14cbcf2ec,"vehicle_fov",0);
  DAT_14cbcf2f8._4_4_ = 0;
  DAT_14cbcf300 = 0;
  FUN_14052b5e0(&DAT_14cbcf2f8,"map_viewer_zoom_speed",0);
  DAT_14cbcf304._4_4_ = 0;
  DAT_14cbcf30c = 0;
  FUN_14052b5e0(&DAT_14cbcf304,"grapple_pitch_correction",0);
  DAT_14cbcf310._4_4_ = 0;
  DAT_14cbcf318 = 0;
  FUN_14052b5e0(&DAT_14cbcf310,"on_foot_gamepad_stick_preset",0);
  DAT_14cbcf31c._4_4_ = 0;
  DAT_14cbcf324 = 0;
  FUN_14052b5e0(&DAT_14cbcf31c,"is_southpaw_on_foot_gamepad_stick_preset_active",0);
  DAT_14cbcf328._4_4_ = 0;
  DAT_14cbcf330 = 0;
  FUN_14052b5e0(&DAT_14cbcf328,"on_vehicle_gamepad_stick_preset",0);
  DAT_14cbcf334._4_4_ = 0;
  DAT_14cbcf33c = 0;
  FUN_14052b5e0(&DAT_14cbcf334,"is_southpaw_on_vehicle_gamepad_stick_preset_active",0);
  DAT_14cbcf340._4_4_ = 0;
  DAT_14cbcf348 = 0;
  FUN_14052b5e0(&DAT_14cbcf340,"display_damage_numbers",0);
  DAT_14cbcf34c._4_4_ = 0;
  DAT_14cbcf354 = 0;
  FUN_14052b5e0(&DAT_14cbcf34c,"rumble_enabled",0);
  DAT_14cbcf358._4_4_ = 0;
  DAT_14cbcf360 = 0;
  FUN_14052b5e0(&DAT_14cbcf358,"camera_shake_intensity",0);
  DAT_14cbcf364._4_4_ = 0;
  DAT_14cbcf36c = 0;
  FUN_14052b5e0(&DAT_14cbcf364,"reactivetriggers_enabled",0);
  DAT_14cbcf370._4_4_ = 0;
  DAT_14cbcf378 = 0;
  FUN_14052b5e0(&DAT_14cbcf370,"mouse_smoothing_enabled",0);
  DAT_14cbcf37c._4_4_ = 0;
  DAT_14cbcf384 = 0;
  FUN_14052b5e0(&DAT_14cbcf37c,"compass_vertical_indicator_config",0);
  DAT_14cbcf388._4_4_ = 0;
  DAT_14cbcf390 = 0;
  FUN_14052b5e0(&DAT_14cbcf388,"radar_enabled",0);
  DAT_14cbcf394._4_4_ = 0;
  DAT_14cbcf39c = 0;
  FUN_14052b5e0(&DAT_14cbcf394,"controller_lighting_enabled",0);
  DAT_14cbcf3a0._4_4_ = 0;
  DAT_14cbcf3a8 = 0;
  FUN_14052b5e0(&DAT_14cbcf3a0,"aim_mouse_and_touch_enabled",0);
  DAT_14cbcf3ac._4_4_ = 0;
  DAT_14cbcf3b4 = 0;
  FUN_14052b5e0(&DAT_14cbcf3ac,"show_challenge_notifications",0);
  DAT_14cbcf3b8._4_4_ = 0;
  DAT_14cbcf3c0 = 0;
  FUN_14052b5e0(&DAT_14cbcf3b8,"show_vault_card_notifications",0);
  DAT_14cbcf3c4._4_4_ = 0;
  DAT_14cbcf3cc = 0;
  FUN_14052b5e0(&DAT_14cbcf3c4,"menu_tutorials_enabled",0);
  DAT_14cbcf3d0._4_4_ = 0;
  DAT_14cbcf3d8 = 0;
  FUN_14052b5e0(&DAT_14cbcf3d0,"hud_tutorials_enabled",0);
  DAT_14cbcf3dc._4_4_ = 0;
  DAT_14cbcf3e4 = 0;
  FUN_14052b5e0(&DAT_14cbcf3dc,"seen_menu_tutorials",0);
  DAT_14cbcf3e8._4_4_ = 0;
  DAT_14cbcf3f0 = 0;
  FUN_14052b5e0(&DAT_14cbcf3e8,"seen_hud_tutorials",0);
  _DAT_14cbcf3f8 = 0xc1a00000;
  _DAT_14cbcf3fc = 0xc1c00000;
  _DAT_14cbcf400 = 0x3e800000;
  _DAT_14cbcf404 = 0x3f000000;
  DAT_14cbcf408 = 0;
  DAT_14cbcf409 = 1;
  DAT_14cbcf40a = 0;
  _DAT_14cbcf40c = 0x3e168e3f;
  _DAT_14cbcf410 = 0x3f13dc59;
  _DAT_14cbcf414 = 0x3f6e1bc1;
  _DAT_14cbcf418 = 0x3f800000;
  _DAT_14cbcf41c = 0x3f800000;
  DAT_14cbcf420 = 0x3f800000;
  _DAT_14cbcf424 = 0x3f469c45;
  _DAT_14cbcf428 = 0x3f31a198;
  _DAT_14cbcf42c = 0x3f1e0147;
  _DAT_14cbcf430 = 0x3f800000;
  _DAT_14cbcf434 = 0x3f000000;
  DAT_14cbcf438 = 1;
  _DAT_14cbcf43c = 0;
  _DAT_14cbcf440 = 0;
  _DAT_14cbcf444 = 0;
  _DAT_14cbcf448 = 0x3f800000;
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
  DAT_14cbcf450 = DAT_14c844840;
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
  _DAT_14cbcf458 = 0;
  atexit((_func_5014 *)&LAB_1441dfdc1);
  ram0x00014cbcf464 = 0;
  FUN_14052b5e0(&DAT_14cbcf460,"map_viewer_hidden_filters",0);
  ram0x00014cbcf470 = 0;
  FUN_14052b5e0(&DAT_14cbcf46c,"path_visibility_duration",0);
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441eb2ca FUN_1441eb2ca body=496 status=ok
// SIG undefined FUN_1441eb2ca(void)

void FUN_1441eb2ca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *plStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar4 = FUN_1400b465c();
  if (lVar4 != 0) {
    lVar5 = FUN_1403ca142();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30),
       *(longlong *)(lVar4 + (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
      plVar6 = (longlong *)FUN_140a68038(CONCAT71((int7)((ulonglong)lVar4 >> 8),1));
      if (plVar6 == (longlong *)0x0) {
        local_98 = (longlong *)0x0;
        plStack_90 = (longlong *)0x0;
      }
      else {
        (**(code **)(*plVar6 + 0xe0))(plVar6,&local_98);
        if (local_98 != (longlong *)0x0) {
          FUN_148db679a(param_1,&local_a8);
          plVar6 = local_98;
          if (local_a8 != 0) {
            local_68 = 0;
            local_60 = 0;
            local_88 = 0;
            uStack_80 = 0;
            local_5c = 0xffffffff00000080;
            local_54 = 0;
            local_48 = 0;
            local_40 = 0;
            local_b8 = 0;
            local_b0 = 0;
            FUN_148dbc82a(&local_b8,param_3);
            local_c8 = &local_b8;
            (**(code **)(*plVar6 + 8))(plVar6,local_a8,param_2,&local_88);
            cVar3 = FUN_148db68aa(param_2);
            if (cVar3 != '\0') {
              lVar4 = FUN_145afc2ec(param_1);
              if ((lVar4 != 0) && (*(char *)(lVar4 + 0x178) == '\x03')) {
                FUN_144a787a6(lVar4 + 0xcb8,param_2);
              }
            }
            local_40 = 0;
            if (local_48 != 0) {
              FUN_1400020a8();
            }
            FUN_1411632c2(&local_88);
          }
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_a0 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*local_a0)(local_a0);
              LOCK();
              piVar1 = (int *)((longlong)local_a0 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_a0 + 0x10))(local_a0);
              }
            }
          }
        }
      }
      plVar6 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_90 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_90)(plStack_90);
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
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441eb4bc FUN_1441eb4bc body=1158 status=ok
// SIG undefined FUN_1441eb4bc(void)

void FUN_1441eb4bc(longlong param_1,undefined8 param_2,byte param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined1 local_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined8 *local_d8;
  int local_d0;
  void *local_c8;
  int local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar7 = FUN_1400b465c();
  if (lVar7 == 0) goto LAB_1441eb518;
  lVar8 = FUN_1403ca142();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
     (lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30),
     *(longlong *)(lVar7 + (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30))
  goto LAB_1441eb518;
  plVar9 = (longlong *)FUN_140a68038(CONCAT71((int7)((ulonglong)lVar7 >> 8),1));
  if (plVar9 == (longlong *)0x0) {
    local_a8 = (longlong *)0x0;
    plStack_a0 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar9 + 0xe0))(plVar9,&local_a8);
    if (local_a8 != (longlong *)0x0) {
      FUN_148db679a(param_1,&local_b8);
      if (local_b8 != 0) {
        local_78 = 0;
        local_70 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_6c = 0xffffffff00000080;
        local_64 = 0;
        local_58 = 0;
        local_50 = 0;
        FUN_1400021e4(param_4,&local_c8);
        pvVar4 = local_c8;
        local_f0 = *param_4 != 0;
        local_e8 = (void *)0x0;
        local_e0 = local_c0;
        local_f8 = param_1;
        if ((longlong)local_c0 == 0) {
          local_dc = 0;
        }
        else {
          FUN_1446dd670(&local_e8,local_c0,0);
          memcpy(local_e8,pvVar4,(longlong)local_c0 * 2);
        }
        local_d8 = (undefined8 *)0x0;
        local_d0 = 0;
        FUN_1446efa72(&local_d8,0,4,0x10);
        puVar5 = local_d8;
        local_d0 = 4;
        *local_d8 = &PTR_LAB_14b994420;
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar8 == 0) {
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        local_d8[2] = lVar8;
        *local_d8 = &PTR_FUN_14b9943b0;
        local_d8[3] = 0;
        iVar10 = 0;
        if (param_1 != 0) {
          uVar3 = *(uint *)(param_1 + 0xc);
          *(uint *)(local_d8 + 3) = uVar3;
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          iVar10 = *(int *)(lVar7 + 0x10);
          if (*(int *)(lVar7 + 0x10) == 0) {
            LOCK();
            iVar10 = DAT_14c964868 + 1;
            UNLOCK();
            iVar11 = DAT_14c964868 + 1;
            bVar12 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar10;
            if (bVar12) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar11);
            }
            LOCK();
            iVar10 = *(int *)(lVar7 + 0x10);
            bVar12 = iVar10 == 0;
            if (bVar12) {
              *(int *)(lVar7 + 0x10) = iVar11;
              iVar10 = 0;
            }
            UNLOCK();
            if (bVar12) {
              iVar10 = iVar11;
            }
          }
        }
        pvVar4 = local_e8;
        *(int *)((longlong)puVar5 + 0x1c) = iVar10;
        puVar5[4] = local_f8;
        *(undefined1 *)(puVar5 + 5) = local_f0;
        puVar5[6] = 0;
        lVar7 = (longlong)local_e0;
        *(int *)(puVar5 + 7) = local_e0;
        if (lVar7 == 0) {
          *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
        }
        else {
          FUN_1446dd670(puVar5 + 6,local_e0,0);
          memcpy((void *)puVar5[6],pvVar4,lVar7 * 2);
        }
        if (local_e8 != (void *)0x0) {
          FUN_1400020a8(local_e8);
        }
        plVar9 = local_a8;
        local_108 = 0;
        local_100 = 0;
        FUN_148dbc8bc(&local_108,&local_d8);
        local_118 = &local_98;
        local_110 = &local_108;
        (**(code **)(*plVar9 + 0x10))(plVar9,local_b8,param_2,(uint)(param_3 ^ 1) * 2);
        cVar6 = FUN_148db68aa(param_2);
        if ((cVar6 != '\0') && (lVar7 = FUN_145afc2ec(param_1), lVar7 != 0)) {
          FUN_144a7e010(lVar7 + 0xcb8);
        }
        if (local_d0 == 0) {
LAB_1441eb864:
          if (local_d8 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_d8 != (undefined8 *)0x0) {
          (**(code **)*local_d8)(local_d8,0);
          FUN_1446efa72(&local_d8,0,0,0x10);
          local_d0 = 0;
          goto LAB_1441eb864;
        }
        if (local_c8 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_50 = 0;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        FUN_1411632c2(&local_98);
      }
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_b0 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)local_b0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_b0 + 0x10))(local_b0);
          }
        }
      }
    }
  }
  plVar9 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_a0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
LAB_1441eb518:
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441eb9a4 FUN_1441eb9a4 body=516 status=ok
// SIG undefined FUN_1441eb9a4(void)

undefined4 * FUN_1441eb9a4(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
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
  undefined1 *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = param_1[0x72];
  if ((lVar4 != 0) && (lVar6 = *(longlong *)(lVar4 + 0x430), lVar6 != 0)) {
    if (DAT_14cae9568 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1417de738;
      local_30 = &LAB_145893408;
      local_38 = &LAB_1458cbbd2;
      local_48 = &LAB_147ba21f1;
      local_50 = &LAB_1463e9233;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar6 = *(longlong *)(lVar4 + 0x430);
      if (lVar6 == 0) goto LAB_1441eba6e;
    }
    if (((((DAT_14cae9568 != 0) && (lVar4 = *(longlong *)(lVar6 + 0x10), lVar4 != 0)) &&
         (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
        ((((*(longlong *)
             (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
            DAT_14cae9568 + 0x30 && (lVar4 = FUN_1401ca7f2(), lVar4 != 0)) &&
          ((*(int *)(lVar4 + 0x3c) != 0 &&
           ((uVar1 = *(uint *)(lVar4 + 0x38), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc))))))
         && (plVar5 = (longlong *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
            plVar5 != (longlong *)0x0)))) &&
       (((((int)plVar5[2] == *(int *)(lVar4 + 0x3c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
         && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) &&
        (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
         (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)))))) {
      (**(code **)(*plVar5 + 0x718))(plVar5,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
LAB_1441eba6e:
  if (*(code **)(*param_1 + 0x670) == (code *)&LAB_1449b4f9e) {
    param_1 = param_1 + 0x322;
  }
  else {
    param_1 = (longlong *)(**(code **)(*param_1 + 0x670))(param_1);
  }
  *(longlong *)(param_2 + 4) = param_1[2];
  uVar2 = *(undefined4 *)((longlong)param_1 + 4);
  lVar4 = param_1[1];
  uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
  *param_2 = (int)*param_1;
  param_2[1] = uVar2;
  param_2[2] = (int)lVar4;
  param_2[3] = uVar3;
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1441ebbce FUN_1441ebbce body=1962 status=ok
// SIG undefined FUN_1441ebbce(void)

void FUN_1441ebbce(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  bool bVar14;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  wchar_t *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  code **local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  code *local_138;
  int local_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined8 local_118;
  longlong local_110;
  longlong *local_108;
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (((((*(int *)(param_1 + 0x3c) == 0) || (uVar2 = *(uint *)(param_1 + 0x38), (int)uVar2 < 0)) ||
       (DAT_14c9647dc <= (int)uVar2)) ||
      ((plVar10 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)(param_1 + 0x3c))))) ||
     ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) goto LAB_1441ebc34;
  if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
    lVar6 = *plVar10;
  }
  else {
    lVar6 = 0;
  }
  if (*(longlong *)(lVar6 + 0x30) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*(longlong *)(lVar6 + 0x30) + 0x360);
  }
  FUN_14132b09a(&local_110,uVar8);
  if (local_108 == (longlong *)0x0) goto LAB_1441ebc34;
  iVar5 = (int)local_108[1];
  do {
    if (iVar5 == 0) {
      plVar10 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar3 = (int)local_108[1];
    bVar14 = iVar5 == iVar3;
    if (bVar14) {
      *(int *)(local_108 + 1) = iVar5 + 1;
      iVar3 = iVar5;
    }
    iVar5 = iVar3;
    UNLOCK();
    plVar10 = local_108;
  } while (!bVar14);
  LOCK();
  piVar1 = (int *)((longlong)local_108 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_108 + 0x10))();
  }
  if (plVar10 == (longlong *)0x0) goto LAB_1441ebc34;
  if ((local_110 != 0) && (lVar6 = FUN_146071a56(param_1), lVar6 != 0)) {
    *(undefined1 *)(param_1 + 0x43) = 1;
    FUN_140898514(param_1 + 0x18,1);
    if (((*(int *)(param_1 + 0xb0) == 0) ||
        (((uVar2 = *(uint *)(param_1 + 0xac), (int)uVar2 < 0 || (DAT_14c9647dc <= (int)uVar2)) ||
         (lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar11 == 0)))) ||
       ((*(int *)(lVar11 + 0x10) != *(int *)(param_1 + 0xb0) ||
        ((*(uint *)(lVar11 + 8) & 0x10200000) != 0)))) {
      FUN_148e08160(lVar6,&local_110,1);
      lVar11 = FUN_1488ae41c(local_110,&local_110);
      if (lVar11 == 0) {
LAB_1441ebdba:
        if (*(int *)(param_1 + 0xa0) == 0) {
LAB_1441ec1ce:
          lVar11 = 0;
        }
        else {
          uVar2 = *(uint *)(param_1 + 0x9c);
          lVar11 = 0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            plVar12 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((plVar12 == (longlong *)0x0) ||
               (((int)plVar12[2] != *(int *)(param_1 + 0xa0) ||
                ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_1441ec1ce;
            lVar11 = *plVar12;
          }
        }
      }
      else {
        lVar7 = FUN_1402269ac();
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_1441ebdba;
      }
      local_50 = (longlong *)0x0;
      local_48 = 0x1800000000;
      FUN_148db7afc(lVar6,&local_110,0);
      if (lVar11 == 0) {
        if (0 < (int)local_48) {
          plVar12 = local_50;
          if (local_50 == (longlong *)0x0) {
            plVar12 = &local_110;
          }
          if (*plVar12 != 0) {
            lVar11 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x30));
            if (lVar11 != 0) {
              srand((int)*(double *)(lVar11 + 0x6d0));
            }
            iVar5 = rand();
            plVar12 = local_50;
            if (local_50 == (longlong *)0x0) {
              plVar12 = &local_110;
            }
            lVar11 = FUN_1488ae41c(local_110,plVar12[iVar5 % (int)local_48] + 0x6e0);
            if (lVar11 != 0) {
              lVar7 = FUN_1402269ac();
              if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) goto LAB_1441ebe4c;
            }
          }
        }
      }
      else {
LAB_1441ebe4c:
        plVar12 = *(longlong **)(lVar11 + 0x3f0);
        if (plVar12 != (longlong *)0x0) {
          lVar11 = (**(code **)(*plVar12 + 8))(plVar12);
          lVar7 = FUN_1401548e0();
          if ((((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar11 + 0x38))) &&
              (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
               lVar7 + 0x30)) && (*(char *)((longlong)plVar12 + 0x10aa) == '\x01')) {
            uVar8 = FUN_141563480(plVar12 + 0x216);
            cVar4 = FUN_14125be1e(*(undefined8 *)(param_1 + 0x30),uVar8);
            if ((cVar4 == '\0') && (0 < (int)local_48)) {
              plVar12 = &local_110;
              if (local_50 != (longlong *)0x0) {
                plVar12 = local_50;
              }
              lVar11 = FUN_1488ae41c(local_110,*plVar12 + 0x6e0);
              if (lVar11 != 0) {
                lVar7 = FUN_1402269ac();
                if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
                    (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                      (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
                   (plVar12 = *(longlong **)(lVar11 + 0x3f0), plVar12 != (longlong *)0x0))
                goto LAB_1441ebf70;
              }
              goto LAB_1441ebe89;
            }
          }
LAB_1441ebf70:
          puVar13 = (undefined4 *)plVar12[1];
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = &DAT_14c9485f0;
          }
          if (DAT_14c947fe0 == 0) {
            lVar11 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar11);
            DAT_14c947fe0 = lVar11;
          }
          FUN_140045924(DAT_14c947fe0,&local_118,puVar13,1);
          FUN_148db74e2(param_1);
          *(undefined8 *)(param_1 + 0x94) = 0;
          *(undefined8 *)(param_1 + 0x9c) = 0;
          puVar13 = &DAT_14c9485f0;
          if ((undefined4 *)plVar12[1] != (undefined4 *)0x0) {
            puVar13 = (undefined4 *)plVar12[1];
          }
          if (DAT_14c947fe0 == 0) {
            lVar11 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar11);
            DAT_14c947fe0 = lVar11;
          }
          FUN_140045924(DAT_14c947fe0,&local_138,puVar13,1);
          FUN_148e07972(lVar6,&local_138);
          local_138 = *(code **)(param_1 + 0x30);
          FUN_1447cd2ec(lVar6 + 0x2940,&local_138);
          FUN_145a08e78(param_1,2,0);
          FUN_148db75e0(param_1);
          lVar6 = *(longlong *)(param_1 + 0x30);
          lVar11 = *(longlong *)(lVar6 + 0x430);
          lVar7 = 0;
          if (lVar11 != 0) {
            if (DAT_14cae9568 == 0) {
              local_138 = FUN_1417de738;
              local_140 = &LAB_145893408;
              local_148 = &LAB_1458cbbd2;
              local_158 = &LAB_147ba21f1;
              local_160 = &LAB_1463e9233;
              local_168 = L"Engine";
              local_170 = 0;
              local_178 = 0x1000000c;
              local_180 = 8;
              local_188 = 0x2b8;
              local_150 = &local_138;
              FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
              lVar11 = *(longlong *)(lVar6 + 0x430);
              if (lVar11 != 0) goto LAB_1441ec04e;
LAB_1441ec312:
              lVar7 = 0;
            }
            else {
LAB_1441ec04e:
              lVar7 = 0;
              if ((DAT_14cae9568 != 0) && (lVar6 = *(longlong *)(lVar11 + 0x10), lVar6 != 0)) {
                if (*(int *)(lVar6 + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) goto LAB_1441ec312;
                lVar7 = 0;
                if (*(longlong *)
                     (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
                    DAT_14cae9568 + 0x30) {
                  lVar7 = lVar11;
                }
              }
            }
          }
          lVar6 = FUN_1404960a8(lVar7);
          if (lVar6 != 0) {
            puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
            *puVar9 = &PTR_FUN_14b993e08;
            puVar9[1] = local_118;
            FUN_14039144e(lVar6,puVar9);
          }
          uVar8 = FUN_1401cb356();
          local_138 = (code *)0x0;
          local_130 = 0;
          FUN_1446efa72(&local_138,0,3,0x10);
          local_130 = 3;
          *(undefined ***)local_138 = &PTR_LAB_149e02020;
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 1;
          lVar6 = DAT_14c758608 + 1;
          if (lVar11 == 0) {
            LOCK();
            UNLOCK();
            lVar11 = DAT_14c758608 + 2;
            lVar6 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar6;
          *(longlong *)(local_138 + 0x10) = lVar11;
          *(undefined ***)local_138 = &PTR_FUN_14b994570;
          *(longlong *)(local_138 + 0x18) = param_1;
          *(undefined8 *)(local_138 + 0x20) = local_118;
          local_188 = 0;
          FUN_1405f67fc(uVar8,local_128,&local_138,
                        L"FOakPlayerCharacterSelect.ForceCharacterSelectionAfterCountdown");
          if (local_120 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_120 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_120 + 0x10))();
            }
          }
          if (local_130 != 0) {
            if (local_138 == (code *)0x0) goto LAB_1441ebe89;
            (*(code *)**(undefined8 **)local_138)(local_138,0);
            FUN_1446efa72(&local_138,0,0,0x10);
            local_130 = 0;
          }
          if (local_138 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
      }
LAB_1441ebe89:
      if (local_50 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
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
LAB_1441ebc34:
  if ((local_40 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441ec37a FUN_1441ec37a body=402 status=ok
// SIG undefined FUN_1441ec37a(void)

void FUN_1441ec37a(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  int local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  if (((*(longlong *)(lVar2 + 0x70) == 0) || (*(longlong *)(lVar2 + 0x78) == 0)) ||
     (*(int *)(*(longlong *)(lVar2 + 0x78) + 8) < 1)) {
    uVar5 = FUN_1401cb356();
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    local_38 = 3;
    *local_40 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_40[2] = lVar6;
    *local_40 = &PTR_FUN_14b993e90;
    local_40[3] = lVar2;
    local_40[4] = FUN_141191d9a;
    local_48 = 0x3dcccccd;
    FUN_1405f67fc(uVar5,&local_30,&local_40,L"FOakPlayerCharacterSelect.CheckShowCharacterSelect");
    *(undefined8 *)(lVar2 + 0x70) = local_30;
    local_30 = 0;
    plVar3 = *(longlong **)(lVar2 + 0x78);
    *(longlong **)(lVar2 + 0x78) = local_28;
    local_28 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      if (local_28 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))();
        }
      }
    }
    if (local_38 != 0) {
      if (local_40 == (undefined8 *)0x0) goto LAB_1441ec4d3;
      (**(code **)*local_40)(local_40,0);
      FUN_1446efa72(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1441ec4d3:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ec50e FUN_1441ec50e body=417 status=ok
// SIG undefined FUN_1441ec50e(void)

void FUN_1441ec50e(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  int local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  if (((*(longlong *)(lVar2 + 0x80) == 0) || (*(longlong *)(lVar2 + 0x88) == 0)) ||
     (*(int *)(*(longlong *)(lVar2 + 0x88) + 8) < 1)) {
    uVar5 = FUN_1401cb356();
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    local_38 = 3;
    *local_40 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_40[2] = lVar6;
    *local_40 = &PTR_FUN_14b993e90;
    local_40[3] = lVar2;
    local_40[4] = FUN_1460718d8;
    local_48 = 0x3dcccccd;
    FUN_1405f67fc(uVar5,&local_30,&local_40,
                  L"FOakPlayerCharacterSelect.StartShowingCharacterStandIns");
    *(undefined8 *)(lVar2 + 0x80) = local_30;
    local_30 = 0;
    plVar3 = *(longlong **)(lVar2 + 0x88);
    *(longlong **)(lVar2 + 0x88) = local_28;
    local_28 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      if (local_28 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))();
        }
      }
    }
    if (local_38 != 0) {
      if (local_40 == (undefined8 *)0x0) goto LAB_1441ec676;
      (**(code **)*local_40)(local_40,0);
      FUN_1446efa72(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1441ec676:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ec738 FUN_1441ec738 body=69 status=ok
// SIG undefined FUN_1441ec738(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441ec738(void)

{
  _DAT_14cbcfa70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001441ec77a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbcfa78,1);
  return;
}



// FUNCTION 1441ec77e FUN_1441ec77e body=2002 status=ok
// SIG undefined FUN_1441ec77e(void)

void FUN_1441ec77e(longlong *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  code *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457bd2ce();
  if ((char)param_1[0x2f] != '\x03') {
    FUN_145ac4942(param_1,0,0);
  }
  lVar7 = FUN_1447210f0(param_1);
  if (lVar7 == 0) goto LAB_1441ec7d7;
  cVar5 = FUN_1410e9f0d(lVar7);
  FUN_14036c39e(param_1 + 0x767,param_1);
  if (cVar5 != '\0') goto LAB_1441ec7d7;
  if ((char)param_1[0x2f] == '\x03') {
    uVar8 = FUN_1447210f0(param_1);
    FUN_145ac00ca(&local_50,uVar8);
    if (local_48 != (longlong *)0x0) {
      iVar6 = (int)local_48[1];
      do {
        if (iVar6 == 0) {
          plVar9 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar15 = (int)local_48[1];
        bVar16 = iVar6 == iVar15;
        if (bVar16) {
          *(int *)(local_48 + 1) = iVar6 + 1;
          iVar15 = iVar6;
        }
        iVar6 = iVar15;
        UNLOCK();
        plVar9 = local_48;
      } while (!bVar16);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      if (plVar9 != (longlong *)0x0) {
        if (local_50 != (code *)0x0) {
          FUN_14608fb2a(local_50,param_1);
        }
        LOCK();
        plVar14 = plVar9 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
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
  }
  FUN_145befd3c(param_1 + 0x1b5);
  FUN_145dce2bc(param_1);
  (**(code **)(*param_1 + 0x6c8))(param_1);
  lVar7 = FUN_140eeb17a(param_1);
  param_1[0x64b] = lVar7;
  (**(code **)(param_1[0x1c8] + 0x50))(param_1 + 0x1c8);
  cVar5 = (**(code **)(*param_1 + 0x6c8))(param_1);
  if ((cVar5 != '\0') && ((param_1[0x73] == 0 || ((*(byte *)(param_1[0x73] + 0x39a) & 8) == 0)))) {
    plVar9 = (longlong *)FUN_14001cc68(0x5d0,0x10);
    plVar9[1] = (longlong)&DAT_100000001;
    *plVar9 = (longlong)&PTR_FUN_14b994820;
    pcVar2 = (code *)(plVar9 + 2);
    FUN_1461da5c4(pcVar2);
    local_50 = pcVar2;
    local_48 = plVar9;
    FUN_148dbde44(&local_50,pcVar2);
    if (plVar9 == (longlong *)0x0) {
      param_1[0x440] = 0x10;
      plVar14 = (longlong *)param_1[0x441];
      if (plVar14 != (longlong *)0x0) {
        param_1[0x441] = 0;
LAB_1441ecb01:
        LOCK();
        plVar9 = plVar14 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar6 = *piVar1;
          UNLOCK();
joined_r0x0001441ecaf1:
          if (iVar6 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      param_1[0x440] = (longlong)pcVar2;
      plVar14 = (longlong *)param_1[0x441];
      if (plVar9 == plVar14) {
        LOCK();
        plVar14 = plVar9 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar6 = *piVar1;
          UNLOCK();
          plVar14 = plVar9;
          goto joined_r0x0001441ecaf1;
        }
      }
      else {
        param_1[0x441] = (longlong)plVar9;
        if (plVar14 != (longlong *)0x0) goto LAB_1441ecb01;
      }
    }
    plVar9 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_48 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    lVar7 = param_1[0x440];
    if (lVar7 != 0) {
      lVar10 = FUN_14073fae1();
      lVar11 = *(longlong *)(lVar10 + 0x40);
      if (lVar11 == 0) {
        uVar8 = FUN_145d81f02();
        lVar11 = FUN_14477b664(uVar8);
        *(longlong *)(lVar10 + 0x40) = lVar11;
      }
      lVar12 = *(longlong *)(lVar10 + 0x48);
      if (((lVar12 == 0) && (lVar12 = 0, lVar11 != 0)) && (*(longlong *)(lVar10 + 0x38) != 0)) {
        plVar9 = *(longlong **)(lVar11 + 0xb8);
        if ((plVar9 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar5 == '\0')) {
          lVar12 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar9 + 0x110))(plVar9);
          lVar12 = FUN_144aff482(uVar8,(longlong *)(lVar10 + 0x38));
        }
        *(longlong *)(lVar10 + 0x48) = lVar12;
      }
      FUN_145ccdb66(lVar7,lVar12,param_1 + 0x1cc);
    }
    plVar9 = (longlong *)FUN_14001cc68(0x158);
    plVar9[1] = (longlong)&DAT_100000001;
    *plVar9 = (longlong)&PTR_FUN_14b994840;
    pcVar2 = (code *)(plVar9 + 2);
    memset(pcVar2,0,0x148);
    FUN_14663184a(pcVar2);
    local_50 = pcVar2;
    local_48 = plVar9;
    FUN_148dbdf10(&local_50,pcVar2);
    if (plVar9 == (longlong *)0x0) {
      param_1[0x442] = 0x10;
      plVar14 = (longlong *)param_1[0x443];
      if (plVar14 != (longlong *)0x0) {
        param_1[0x443] = 0;
LAB_1441ecca5:
        LOCK();
        plVar9 = plVar14 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar6 = *piVar1;
          UNLOCK();
joined_r0x0001441ecc95:
          if (iVar6 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      param_1[0x442] = (longlong)pcVar2;
      plVar14 = (longlong *)param_1[0x443];
      if (plVar9 == plVar14) {
        LOCK();
        plVar14 = plVar9 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar6 = *piVar1;
          UNLOCK();
          plVar14 = plVar9;
          goto joined_r0x0001441ecc95;
        }
      }
      else {
        param_1[0x443] = (longlong)plVar9;
        if (plVar14 != (longlong *)0x0) goto LAB_1441ecca5;
      }
    }
    plVar9 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_48 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (param_1[0x442] != 0) {
      FUN_145d8a262(param_1[0x442],param_1);
    }
    lVar7 = FUN_145dfa8bc(param_1);
    if (lVar7 != 0) {
      plVar9 = (longlong *)(lVar7 + 8);
      iVar6 = *(int *)(lVar7 + 0x10);
      if (iVar6 == 0) {
LAB_1441ecd39:
        FUN_1446efa72(plVar9,0,3,0x10);
        *(undefined4 *)(lVar7 + 0x10) = 3;
      }
      else {
        if ((longlong *)*plVar9 != (longlong *)0x0) {
          cVar5 = (**(code **)(*(longlong *)*plVar9 + 0x30))();
          if (cVar5 != '\0') goto LAB_1441ecdea;
          iVar6 = *(int *)(lVar7 + 0x10);
        }
        if (iVar6 != 3) goto LAB_1441ecd39;
      }
      puVar4 = (undefined8 *)*plVar9;
      *puVar4 = &PTR_LAB_149e06450;
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar11 == 0) {
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      puVar4[2] = lVar11;
      *puVar4 = &PTR_FUN_14b9948b0;
      puVar4[3] = 0;
      if (param_1 == (longlong *)0x0) {
        iVar6 = 0;
      }
      else {
        uVar3 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(puVar4 + 3) = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        iVar6 = *(int *)(lVar7 + 0x10);
        if (*(int *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar15 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar15);
          }
          LOCK();
          iVar6 = *(int *)(lVar7 + 0x10);
          bVar16 = iVar6 == 0;
          if (bVar16) {
            *(int *)(lVar7 + 0x10) = iVar15;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar16) {
            iVar6 = iVar15;
          }
        }
      }
      *(int *)((longlong)puVar4 + 0x1c) = iVar6;
      puVar4[4] = FUN_148db81c8;
      *(undefined4 *)(puVar4 + 5) = 0;
    }
LAB_1441ecdea:
    puVar13 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    FUN_145ae3858(puVar13,param_1);
    *puVar13 = &PTR_FUN_14b97a010;
    puVar13[0x1b] = &PTR_FUN_14b97a390;
    FUN_1458c8dd4(puVar13,1);
    puVar4 = (undefined8 *)param_1[0x799];
    param_1[0x799] = (longlong)puVar13;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    puVar13 = (undefined8 *)FUN_14001cc68(0x160,0x10);
    FUN_145ae3858(puVar13,param_1);
    *puVar13 = &PTR_FUN_14b40ddd0;
    puVar13[0x1b] = 0;
    puVar13[0x1c] = 0;
    *(undefined8 *)((longlong)puVar13 + 0xe4) = 0;
    *(undefined8 *)((longlong)puVar13 + 0xec) = 0;
    puVar13[0x1f] = 0;
    puVar13[0x20] = 0;
    puVar13[0x21] = 0;
    puVar13[0x22] = 0;
    puVar13[0x23] = 0;
    puVar13[0x24] = 0;
    puVar13[0x25] = 0;
    puVar13[0x29] = &PTR_FUN_14b40e290;
    puVar13[0x2a] = 0;
    puVar13[0x2b] = 0;
    FUN_145729c32(puVar13,1);
    puVar4 = (undefined8 *)param_1[0x79a];
    param_1[0x79a] = (longlong)puVar13;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  cVar5 = (**(code **)(*param_1 + 0x6c8))(param_1);
  if (cVar5 == '\0') {
    FUN_1441ecf52();
  }
  else {
    uVar8 = FUN_1447210f0(param_1);
    lVar7 = FUN_1411db1ae(uVar8);
    if (lVar7 != 0) {
      local_50 = (code *)&LAB_14583b16c;
      local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
      FUN_141202804(lVar7 + 0x68,local_58,param_1);
    }
    local_50 = FUN_140f64702;
    local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
    FUN_145c3307e(param_1 + 0x1c4,local_58,param_1);
    lVar7 = (**(code **)(param_1[0x1c3] + 0x30))(param_1 + 0x1c3);
    if (lVar7 != 0) {
      local_50 = FUN_14124fea8;
      local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
      FUN_146630810(lVar7,local_58,param_1);
    }
    local_50 = FUN_145b251d4;
    local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
    FUN_145c8298c(param_1 + 0x724,local_58,param_1,&local_50);
    local_50 = FUN_145a2a4fe;
    local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
    FUN_145c82b8a(param_1 + 0x727,local_58,param_1,&local_50);
    (**(code **)(*param_1 + 0x14c0))(param_1);
  }
  param_1[0x4a8] = (longlong)param_1;
  lVar7 = (**(code **)(param_1[0x1cd] + 0x10))(param_1 + 0x1cd);
  *(undefined1 *)(lVar7 + 0x81) = 1;
LAB_1441ec7d7:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ecf52 FUN_1441ecf52 body=713 status=ok
// SIG undefined FUN_1441ecf52(void)

void FUN_1441ecf52(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  int local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((char)param_1[0x657] == '\x01') {
    cVar3 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
    }
  }
  else {
    cVar3 = FUN_144108806(param_1);
    if (cVar3 != '\0') {
      *(undefined1 *)(param_1 + 0x657) = 1;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
    }
    lVar4 = FUN_1447210f0(param_1);
    if ((lVar4 != 0) && (param_1[0x658] == 0)) {
      lVar4 = FUN_1447210f0(param_1);
      if (*(longlong *)(lVar4 + 0x1f0) == 0) {
        puVar5 = (undefined8 *)(lVar4 + 0x458);
      }
      else {
        puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar5;
      local_b0 = (undefined8 *)0x0;
      local_a8 = 0;
      FUN_1446efa72(&local_b0,0,3,0x10);
      puVar5 = local_b0;
      local_a8 = 3;
      *local_b0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_b0[2] = lVar6;
      *local_b0 = &PTR_FUN_14b994ca0;
      local_b0[3] = 0;
      iVar7 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar1 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_b0 + 3) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        iVar7 = *(int *)(lVar4 + 0x10);
        if (*(int *)(lVar4 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar9 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar9) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar7 = *(int *)(lVar4 + 0x10);
          bVar9 = iVar7 == 0;
          if (bVar9) {
            *(int *)(lVar4 + 0x10) = iVar8;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar9) {
            iVar7 = iVar8;
          }
        }
      }
      *(int *)((longlong)puVar5 + 0x1c) = iVar7;
      puVar5[4] = param_1;
      local_98 = 0;
      local_90 = 0;
      FUN_14487d8d8(&local_98,&local_b0);
      local_58 = 1;
      local_b8 = local_a0;
      local_a0[0] = 0;
      local_9c = 0xbf800000;
      FUN_1406f4044(uVar2,param_1 + 0x658,&local_98,0x3f000000);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
      if (local_a8 != 0) {
        if (local_b0 == (undefined8 *)0x0) goto LAB_1441ed1a5;
        (**(code **)*local_b0)(local_b0,0);
        FUN_1446efa72(&local_b0,0,0,0x10);
        local_a8 = 0;
      }
      if (local_b0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1441ed1a5:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441ed24e FUN_1441ed24e body=914 status=ok
// SIG undefined FUN_1441ed24e(void)

void FUN_1441ed24e(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
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
  code *local_40;
  undefined1 local_33;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar2 = (**(code **)(*param_1 + 0x6c8))();
  if (cVar2 != '\0') {
    plVar4 = (longlong *)FUN_1403ca102(param_1);
    if ((((plVar4 != (longlong *)0x0) && (bVar3 = (**(code **)(*plVar4 + 0x498))(plVar4), 5 < bVar3)
         ) && (FUN_145bd0d64(param_1), param_1[0xa1] != 0)) &&
       (cVar2 = (**(code **)(*param_1 + 0x6c8))(param_1), cVar2 != '\0')) {
      FUN_145bf7e08(param_1);
    }
    (**(code **)(*param_1 + 0x1018))(param_1);
    lVar6 = param_1[0x440];
    if (lVar6 != 0) {
      lVar5 = FUN_1447210f0(param_1);
      if (lVar5 == 0) {
        pcVar7 = (code *)0x0;
      }
      else {
        pcVar7 = *(code **)(lVar5 + 0x18);
      }
      FUN_1405f0c40(DAT_14cb84f20,&local_40,pcVar7);
      local_48 = local_40;
      if (local_40 == (code *)0x0) {
        local_48 = pcVar7;
      }
      FUN_145ac0ecc(lVar6);
    }
    local_31 = 0;
    local_33 = 0;
    FUN_14572e6ac(param_1);
    if ((plVar4 != (longlong *)0x0) &&
       (plVar4 = (longlong *)FUN_145a1006a(plVar4), plVar4 != (longlong *)0x0)) {
      lVar6 = param_1[0x86];
      if (lVar6 == 0) {
LAB_1441ed5d2:
        lVar5 = 0;
      }
      else {
        if (DAT_14cae9568 == 0) {
          local_60 = &local_40;
          local_40 = FUN_1417de738;
          local_50 = (code *)&LAB_145893408;
          local_58 = &LAB_1458cbbd2;
          local_68 = &LAB_147ba21f1;
          local_70 = &LAB_1463e9233;
          local_78 = L"Engine";
          local_80 = 0;
          local_88 = 0x1000000c;
          local_90 = 8;
          local_98 = 0x2b8;
          FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
          lVar6 = param_1[0x86];
          if (lVar6 == 0) goto LAB_1441ed5d2;
        }
        lVar5 = 0;
        if ((DAT_14cae9568 != 0) && (lVar1 = *(longlong *)(lVar6 + 0x10), lVar1 != 0)) {
          if (*(int *)(lVar1 + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) goto LAB_1441ed5d2;
          lVar5 = 0;
          if (*(longlong *)
               (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
              DAT_14cae9568 + 0x30) {
            lVar5 = lVar6;
          }
        }
      }
      (**(code **)(*plVar4 + 0x2b8))(plVar4,lVar5);
    }
  }
  FUN_145befd3c(param_1 + 0x1b5);
  FUN_145dce2bc(param_1);
  (**(code **)(*param_1 + 0x6c8))(param_1);
  lVar6 = param_1[0x73];
  if (lVar6 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_60 = &local_40;
      local_40 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1464f5fc4;
      local_68 = &LAB_148c3dd26;
      local_70 = &LAB_1459673ba;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar6 = param_1[0x73];
      if (lVar6 == 0) goto LAB_1441ed42d;
    }
    if ((((DAT_14cbae3d8 != 0) && (lVar5 = *(longlong *)(lVar6 + 0x10), lVar5 != 0)) &&
        (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
        DAT_14cbae3d8 + 0x30)) {
      *(bool *)(lVar6 + 0x741) = param_1[0x44d] != 0;
    }
  }
LAB_1441ed42d:
  if (DAT_14cadba60 == '\x01') {
    lVar6 = FUN_1408ed0b0();
    *(undefined1 *)(lVar6 + 0xb0) = 1;
  }
  FUN_1447f69b6(param_1 + 0x467);
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441ed5e2 FUN_1441ed5e2 body=916 status=ok
// SIG undefined FUN_1441ed5e2(void)

void FUN_1441ed5e2(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
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
  undefined1 *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145bd0af4();
  lVar12 = *(longlong *)(param_1 + 0x430);
  if (lVar12 == 0) goto LAB_1441ed80a;
  if (DAT_14cae9568 == 0) {
    local_60 = &local_48;
    local_48 = FUN_1417de738;
    local_50 = &LAB_145893408;
    local_58 = &LAB_1458cbbd2;
    local_68 = &LAB_147ba21f1;
    local_70 = &LAB_1463e9233;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x1000000c;
    local_90 = 8;
    local_98 = 0x2b8;
    FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
    lVar12 = *(longlong *)(param_1 + 0x430);
    if (lVar12 == 0) goto LAB_1441ed80a;
  }
  if ((((DAT_14cae9568 == 0) || (lVar6 = *(longlong *)(lVar12 + 0x10), lVar6 == 0)) ||
      (*(int *)(lVar6 + 0x38) < *(int *)(DAT_14cae9568 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) !=
      DAT_14cae9568 + 0x30)) goto LAB_1441ed80a;
  lVar6 = FUN_14030d4a0();
  if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
      != lVar6 + 0x30)) goto LAB_1441ed80a;
  lVar6 = *(longlong *)(param_1 + 0x430);
  if (lVar6 == 0) {
LAB_1441ed98b:
    lVar8 = 0;
  }
  else {
    if (DAT_14cae9568 == 0) {
      local_60 = &local_48;
      local_48 = FUN_1417de738;
      local_50 = &LAB_145893408;
      local_58 = &LAB_1458cbbd2;
      local_68 = &LAB_147ba21f1;
      local_70 = &LAB_1463e9233;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x1000000c;
      local_90 = 8;
      local_98 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar6 = *(longlong *)(param_1 + 0x430);
      if (lVar6 == 0) goto LAB_1441ed98b;
    }
    lVar8 = 0;
    if ((DAT_14cae9568 != 0) && (lVar3 = *(longlong *)(lVar6 + 0x10), lVar3 != 0)) {
      if (*(int *)(lVar3 + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) goto LAB_1441ed98b;
      lVar8 = 0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
          == DAT_14cae9568 + 0x30) {
        lVar8 = lVar6;
      }
    }
  }
  iVar2 = *(int *)(lVar12 + 0x2fc);
  *(int *)(lVar12 + 0x2fc) = iVar2 + 1;
  lVar6 = (longlong)*(int *)(lVar12 + 0x2f0);
  if (lVar6 < 1) {
    *(int *)(lVar12 + 0x2fc) = iVar2;
  }
  else {
    plVar1 = (longlong *)(lVar12 + 0x2e8);
    uVar11 = lVar6 + 1;
    lVar6 = lVar6 * 0x10 + -8;
    bVar9 = 0;
    do {
      if (((*(int *)(*plVar1 + lVar6) == 0) ||
          (plVar4 = *(longlong **)(*plVar1 + -8 + lVar6), plVar4 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar4 + 0x60))(plVar4,lVar8,param_1), cVar5 == '\0')) {
        bVar9 = 1;
      }
      uVar11 = uVar11 - 1;
      lVar6 = lVar6 + -0x10;
    } while (1 < uVar11);
    iVar2 = *(int *)(lVar12 + 0x2fc);
    *(int *)(lVar12 + 0x2fc) = iVar2 + -1;
    if ((bool)(bVar9 & iVar2 < 2)) {
      iVar2 = *(int *)(lVar12 + 0x2f0);
      iVar7 = iVar2;
      if (0 < iVar2) {
        iVar10 = 0;
        do {
          if (((*(int *)(*plVar1 + 8 + (longlong)iVar10 * 0x10) == 0) ||
              (plVar4 = *(longlong **)(*plVar1 + (longlong)iVar10 * 0x10), plVar4 == (longlong *)0x0
              )) || (cVar5 = (**(code **)(*plVar4 + 0x28))(), cVar5 != '\0')) {
            FUN_14005b288(plVar1,iVar10);
            FUN_14005b248(plVar1);
          }
          else {
            iVar10 = iVar10 + 1;
          }
          iVar7 = *(int *)(lVar12 + 0x2f0);
        } while (iVar10 < iVar7);
      }
      iVar10 = 2;
      if (2 < iVar7 * 2) {
        iVar10 = iVar7 * 2;
      }
      *(int *)(lVar12 + 0x2f8) = iVar10;
      if ((iVar10 < iVar2) && (*(int *)(lVar12 + 0x2f4) != iVar7)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
      }
    }
  }
LAB_1441ed80a:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441ed992 FUN_1441ed992 body=621 status=ok
// SIG undefined FUN_1441ed992(void)

ulonglong FUN_1441ed992(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined8 *local_a0;
  int local_98;
  undefined2 local_90 [2];
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(longlong *)(param_1 + 0x3248) == 0) {
    lVar3 = FUN_1447210f0();
    if (lVar3 == 0) {
      uVar8 = 0;
    }
    else {
      local_a0 = (undefined8 *)0x0;
      local_98 = 0;
      FUN_1446efa72(&local_a0,0,3,0x10);
      puVar5 = local_a0;
      local_98 = 3;
      *local_a0 = &PTR_LAB_14a1c8830;
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
      local_a0[2] = lVar4;
      *local_a0 = &PTR_FUN_14b994d10;
      local_a0[3] = 0;
      iVar6 = 0;
      if (param_1 != 0) {
        uVar1 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_a0 + 3) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar3 = 0;
        }
        iVar6 = *(int *)(lVar3 + 0x10);
        if (*(int *)(lVar3 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar9 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar9) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar6 = *(int *)(lVar3 + 0x10);
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(lVar3 + 0x10) = iVar7;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar9) {
            iVar6 = iVar7;
          }
        }
      }
      *(int *)((longlong)puVar5 + 0x1c) = iVar6;
      puVar5[4] = param_1;
      lVar3 = FUN_1447210f0(param_1);
      if (*(longlong *)(lVar3 + 0x1f0) == 0) {
        puVar5 = (undefined8 *)(lVar3 + 0x458);
      }
      else {
        puVar5 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar5;
      local_88 = 0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,&local_a0);
      local_48 = 1;
      local_a8 = local_90;
      local_90[0] = 0;
      local_8c = 0xbf800000;
      FUN_1406f4044(uVar2,param_1 + 0x3248,&local_88,0x3dcccccd);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      if (local_98 != 0) {
        if (local_a0 == (undefined8 *)0x0) goto LAB_1441edb64;
        (**(code **)*local_a0)(local_a0,0);
        FUN_1446efa72(&local_a0,0,0,0x10);
        local_98 = 0;
      }
      if (local_a0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1441edb64:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1441edc00 FUN_1441edc00 body=187 status=ok
// SIG undefined FUN_1441edc00(void)

void FUN_1441edc00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x3248) != 0) {
    lVar2 = FUN_1447210f0();
    if (lVar2 != 0) {
      lVar2 = FUN_1447210f0(param_1);
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        plVar3 = (longlong *)(lVar2 + 0x458);
      }
      else {
        plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
      }
      lVar2 = *(longlong *)(param_1 + 0x3248);
      if (lVar2 != 0) {
        lVar1 = *plVar3;
        uVar4 = (uint)lVar2;
        if ((int)(uVar4 & 0xffffff) < *(int *)(lVar1 + 0x10)) {
          lVar5 = lVar1 + 0x18;
          if (*(longlong *)(lVar1 + 0x28) != 0) {
            lVar5 = *(longlong *)(lVar1 + 0x28);
          }
          if ((*(uint *)(lVar5 + (ulonglong)((uVar4 & 0xffffff) >> 5) * 4) >> (uVar4 & 0x1f) & 1) !=
              0) {
            lVar1 = *(longlong *)(lVar1 + 8);
            lVar5 = (ulonglong)(uVar4 & 0xffffff) * 0x70;
            if (((lVar1 + lVar5 != 0) && (*(longlong *)(lVar1 + 0x60 + lVar5) == lVar2)) &&
               (*(char *)(lVar1 + 1 + lVar5) != '\x04')) {
              FUN_1405a424c();
            }
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x3248) = 0;
  }
  return;
}



// FUNCTION 1441edcbc FUN_1441edcbc body=283 status=ok
// SIG undefined FUN_1441edcbc(void)

void FUN_1441edcbc(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x32b9) != '\0') goto LAB_1441edda7;
  *(undefined1 *)(param_1 + 0x32b9) = 1;
  lVar1 = FUN_1447210f0();
  if (((lVar1 != 0) && (lVar1 = FUN_1400f6f32(lVar1), lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 0x68), lVar1 != 0)) {
    FUN_140d27df6(lVar1,&local_28,param_1);
    if (-1 < (short)local_28) {
      FUN_145c2ee12(lVar1,&local_28);
    }
  }
  if (*(longlong *)(param_1 + 0x2400) == 0) {
    local_28 = *(undefined8 *)(param_1 + 0x23f0);
    lVar1 = FUN_14050aea0();
    *(longlong *)(param_1 + 0x2400) = lVar1;
    if (lVar1 != 0) goto LAB_1441edd50;
  }
  else {
LAB_1441edd50:
    if (*(longlong *)(param_1 + 0x23d8) == *(longlong *)(param_1 + 0x23f0)) {
      iVar2 = *(int *)(param_1 + 0x23f8);
      if (*(int *)(param_1 + 0x23e0) != iVar2) goto LAB_1441edd76;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x23f8);
LAB_1441edd76:
      *(longlong *)(param_1 + 0x23d8) = *(longlong *)(param_1 + 0x23f0);
      *(int *)(param_1 + 0x23e0) = iVar2;
      *(undefined8 *)(param_1 + 0x23e8) = 0;
    }
    FUN_1441ffbe0(param_1);
  }
  if (*(char *)(param_1 + 0x3251) == '\x01') {
    FUN_1414dc7b2(param_1);
  }
LAB_1441edda7:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441eddd8 FUN_1441eddd8 body=907 status=ok
// SIG undefined FUN_1441eddd8(void)

void FUN_1441eddd8(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  longlong *local_78;
  undefined4 local_70;
  longlong local_68;
  longlong *local_60;
  code *local_58 [3];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((char)param_1[0x2f] == '\x03') && (cVar4 = (**(code **)(*param_1 + 0x6c8))(), cVar4 == '\0'))
  {
    uVar5 = FUN_1447210f0(param_1);
    plVar6 = (longlong *)FUN_140636ec6(uVar5);
    if (plVar6 != (longlong *)0x0) {
      if (DAT_14cbadd90 == 0) {
        local_90 = local_58;
        local_58[0] = FUN_141030f22;
        local_80 = FUN_14081d0ea;
        local_88 = &LAB_1459f2e4c;
        local_98 = &LAB_148c39de3;
        local_a0 = &LAB_1457a9eb2;
        local_a8 = &DAT_149e063b2;
        local_b0 = 0;
        local_b8 = 0x10000004;
        local_c0 = 0x10;
        local_c8 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar6[2] + 0x38)) && (plVar6 != param_1)) &&
         (*(longlong *)
           (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
          DAT_14cbadd90 + 0x30)) {
        lVar7 = plVar6[0x47a];
        if (lVar7 == 0) {
          local_58[0] = (code *)plVar6[0x478];
          lVar7 = FUN_14050aea0();
          plVar6[0x47a] = lVar7;
          if (lVar7 == 0) goto LAB_1441ede46;
        }
        lVar8 = FUN_140f7e331();
        FUN_140e4b9fe(lVar7 + 0x38,&local_68);
        if (((*(char *)(lVar8 + 0x30) == '\x01') && (local_68 != 0)) &&
           (cVar4 = FUN_148e08dd2(local_68,param_1), cVar4 == '\0')) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
          plVar6 = DAT_14c844840;
          local_78 = DAT_14c844840;
          if (DAT_14c844840 != (longlong *)0x0) {
            (**(code **)(*DAT_14c844840 + 8))(DAT_14c844840);
          }
          local_70 = DAT_14c844848;
          FUN_1447a97f4(local_58,&DAT_14c9485f0);
          lVar7 = FUN_141563480(local_68 + 0x30);
          if (lVar7 != 0) {
            plVar2 = *(longlong **)(lVar7 + 0x28);
            plVar3 = plVar6;
            if (plVar6 != plVar2) {
              local_78 = plVar2;
              if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 8))(plVar2);
              }
              plVar3 = plVar2;
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
            plVar6 = plVar3;
            local_70 = *(undefined4 *)(lVar7 + 0x30);
            puVar9 = &DAT_14c9485f0;
            if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
              puVar9 = *(undefined4 **)(lVar7 + 8);
            }
            FUN_1447715ec(local_58,puVar9);
          }
          if ((char)param_1[0x657] == '\x01') {
            FUN_14405010e(param_1,&local_78,local_58);
          }
          if (local_40 != 0) {
            FUN_1400020a8();
          }
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
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
      }
    }
  }
LAB_1441ede46:
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441ee164 FUN_1441ee164 body=125 status=ok
// SIG undefined FUN_1441ee164(void)

void FUN_1441ee164(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x6c8))();
  if ((((cVar1 != '\0') && (param_1[0x1e9] != 0)) &&
      (lVar2 = *(longlong *)(param_1[0x1e9] + 0x3f70), lVar2 != 0)) &&
     (*(char *)(lVar2 + 0x10aa) == '\x01')) {
    lVar2 = FUN_141563480(lVar2 + 0x10b0);
    if (lVar2 != 0) {
      cVar1 = FUN_14125be1e(param_1,lVar2);
      if (cVar1 == '\0') {
        FUN_14405010e(param_1,lVar2 + 0x28,&DAT_14c9485f0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1441ee1ee FUN_1441ee1ee body=168 status=ok
// SIG undefined FUN_1441ee1ee(void)

void FUN_1441ee1ee(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  
  *param_5 = 1;
  FUN_1415ad8ea();
  if (param_2 == 0) {
    return;
  }
  plVar1 = (longlong *)(param_2 + 0x70);
  iVar5 = *(int *)(param_2 + 0x78);
  if (iVar5 != 0) {
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      cVar4 = (**(code **)(*(longlong *)*plVar1 + 0x30))();
      if (cVar4 != '\0') {
        return;
      }
      iVar5 = *(int *)(param_2 + 0x78);
    }
    if (iVar5 == 2) goto LAB_1441ee24b;
  }
  FUN_1446efa72(plVar1,0,2,0x10);
  *(undefined4 *)(param_2 + 0x78) = 2;
LAB_1441ee24b:
  puVar2 = (undefined8 *)*plVar1;
  *puVar2 = &PTR_LAB_14b9821b0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  puVar2[2] = lVar6;
  *puVar2 = &PTR_FUN_14b995090;
  return;
}



// FUNCTION 1441ee296 FUN_1441ee296 body=55 status=ok
// SIG undefined FUN_1441ee296(void)

void FUN_1441ee296(longlong param_1,int param_2)

{
  if ((((*(char *)(param_1 + 0x178) == '\x03') && (*(int *)(param_1 + 0x2970) != param_2)) &&
      (*(int *)(param_1 + 0x2970) = param_2, *(int *)(param_1 + 0x2968) != 0)) &&
     (*(longlong **)(param_1 + 0x2960) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001441ee2ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x2960) + 0x60))();
    return;
  }
  return;
}



// FUNCTION 1441ee2d6 FUN_1441ee2d6 body=651 status=ok
// SIG undefined FUN_1441ee2d6(void)

void FUN_1441ee2d6(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined1 auStack_158 [40];
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_14061de74();
  plVar4 = *(longlong **)(param_1 + 0xf40);
  if ((plVar4 != (longlong *)0x0) && (lVar5 = plVar4[0x23d], lVar5 != 0)) {
    dVar1 = *(double *)(lVar5 + 0x2f70);
    dVar2 = *(double *)(lVar5 + 0x2f78);
    dVar3 = *(double *)(lVar5 + 0x2f80);
    if (((dVar1 != 0.0) || (((NAN(dVar1) || (dVar2 != 0.0)) || (NAN(dVar2))))) ||
       ((dVar3 != 0.0 || (NAN(dVar3))))) {
      FUN_14023d054(plVar4,&local_e8);
      local_100 = local_e8;
      uStack_fc = uStack_e4;
      uStack_f8 = uStack_e0;
      uStack_f4 = uStack_dc;
      local_f0 = local_d8;
      (**(code **)(*plVar4 + 0x768))(plVar4,&local_100,(float)dVar1,0);
      cVar6 = FUN_1418650ee(*(undefined8 *)(param_1 + 0xf40));
      if (cVar6 == '\0') {
        plVar4 = *(longlong **)(param_1 + 0xf40);
        FUN_14023d054(plVar4,&local_e8);
        local_118 = local_c8;
        uStack_114 = uStack_c4;
        uStack_110 = uStack_c0;
        uStack_10c = uStack_bc;
        local_108 = local_b8;
        (**(code **)(*plVar4 + 0x768))(plVar4,&local_118,(float)dVar2,0);
      }
      plVar4 = *(longlong **)(param_1 + 0xf40);
      FUN_14023d054(plVar4,&local_e8);
      local_130 = local_a8;
      uStack_12c = uStack_a4;
      uStack_128 = uStack_a0;
      uStack_124 = uStack_9c;
      local_120 = local_98;
      (**(code **)(*plVar4 + 0x768))(plVar4,&local_130,(float)dVar3,0);
    }
    cVar6 = FUN_1403971ea(lVar5 + 0x1f08);
    if (cVar6 != '\0') {
      *(undefined1 *)(lVar5 + 0x2b88) = 1;
      FUN_140692004((void *)(lVar5 + 0x2720));
      *(undefined1 *)(lVar5 + 0x2b88) = 0;
      memset((void *)(lVar5 + 0x2720),0,0x98);
    }
  }
  if (*(longlong *)(param_1 + 0x31f8) != 0) {
    cVar6 = FUN_140315fec();
    if (cVar6 != '\0') {
      FUN_1406de772(*(undefined8 *)(param_1 + 0x31f8));
    }
  }
  if (*(longlong *)(param_1 + 0x32f0) != 0) {
    cVar6 = FUN_1403c0dbe();
    if (cVar6 != '\0') {
      FUN_144a0e220(*(undefined8 *)(param_1 + 0x32f0));
      FUN_1410c797e(param_1);
    }
  }
  if (*(longlong *)(param_1 + 0x3300) != 0) {
    cVar6 = FUN_14021d98a();
    if (cVar6 != '\0') {
      FUN_1447c1a98(*(undefined8 *)(param_1 + 0x3300));
    }
  }
  if (*(longlong *)(param_1 + 0x3310) != 0) {
    cVar6 = FUN_1402f0c06();
    if (cVar6 != '\0') {
      FUN_140223270(*(undefined8 *)(param_1 + 0x3310));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ee562 FUN_1441ee562 body=192 status=ok
// SIG undefined FUN_1441ee562(void)

void FUN_1441ee562(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (((param_2 != '\0') && (*(longlong *)(param_1 + 0x4f8) == 0)) &&
     (lVar1 = *(longlong *)(param_1 + 0x500), lVar1 != 0)) {
    lVar2 = FUN_1412bd3b2();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30 && (lVar1 = *(longlong *)(param_1 + 0x500), lVar1 != 0)))) {
      lVar2 = FUN_1412bd3b2();
      if (((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x500);
      }
      plVar3 = (longlong *)FUN_146630cf2(param_1,uVar4);
      if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(plVar3);
      }
      *(longlong **)(param_1 + 0x4f8) = plVar3;
                    /* WARNING: Could not recover jumptable at 0x0001441ee611. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x438))(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 1441ee622 FUN_1441ee622 body=336 status=ok
// SIG undefined FUN_1441ee622(void)

undefined4 FUN_1441ee622(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_38 = 0;
  FUN_14096c7c0(&local_40,param_3);
  uVar4 = FUN_1463f9fc0(param_1,param_2,&local_40);
  lVar5 = FUN_1447210f0(param_1);
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) {
    lVar6 = FUN_1459f1912();
    lVar2 = *(longlong *)(lVar5 + 0x1f0);
    if (((lVar2 != 0) &&
        (((lVar6 != 0 && (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0)) &&
         (*(int *)(lVar6 + 0x38) <= *(int *)(lVar3 + 0x38))))) &&
       ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
         lVar6 + 0x30 & (byte)uVar4) == 1)) {
      if (*(longlong *)(lVar5 + 0x30) == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x2b0);
      }
      FUN_148ab78c8(lVar2,*(undefined8 *)(lVar5 + 0x588));
      (**(code **)(*param_1 + 0x1008 + (ulonglong)(byte)((byte)param_2 ^ 1) * 8))(param_1);
    }
  }
  if ((int)param_3[1] != 0) {
    puVar1 = (undefined8 *)*param_3;
    if (puVar1 == (undefined8 *)0x0) goto LAB_1441ee6c5;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
LAB_1441ee6c5:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ee774 FUN_1441ee774 body=1648 status=ok
// SIG undefined FUN_1441ee774(void)

void FUN_1441ee774(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 uVar9;
  ulonglong uVar10;
  undefined8 unaff_RBP;
  undefined2 *puVar11;
  longlong *plVar12;
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
  undefined1 *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_143c9f4f8();
  if (param_2 == (longlong *)0x0) {
    FUN_1415d3e68(param_1 + 0x1d1,&DAT_14cbcfb48,param_1 + 0x1b3);
    plVar12 = (longlong *)0x0;
  }
  else {
    lVar6 = (**(code **)(*param_2 + 8))(param_2);
    lVar7 = FUN_140a1ada8();
    if ((lVar7 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38))) {
      plVar12 = (longlong *)0x0;
    }
    else {
      plVar12 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30) {
        plVar12 = param_2;
      }
    }
    if (*(char *)((longlong)param_2 + 0x51) == '\x01') {
      cVar3 = FUN_14030d5d4(param_1);
      if ((cVar3 != '\0') || (cVar3 = FUN_141660e76(param_1), cVar3 == '\0')) {
        FUN_1410ef0a8(param_1);
      }
      local_98 = CONCAT31(local_98._1_3_,*(undefined1 *)((longlong)param_2 + 0x52));
      FUN_146630da4(param_1 + 0x1d1,&DAT_14cbcfb48,param_1 + 0x1b3,
                    *(undefined1 *)((longlong)param_2 + 0x53));
    }
    else {
      FUN_1415d3e68(param_1 + 0x1d1,&DAT_14cbcfb48,param_1 + 0x1b3);
    }
    if (((char)param_2[3] == '\x01') && (FUN_14580b07e(param_1 + 0x69e), param_1[0x442] != 0)) {
      FUN_1459dd05c();
    }
  }
  cVar3 = (**(code **)(*param_1 + 0x6c8))(param_1);
  if (cVar3 != '\0') {
    cVar3 = FUN_14016169c(param_1,&local_40);
    if (((cVar3 == '\0') || ((int)local_40 == 0)) &&
       (lVar6 = FUN_144a8c772(param_1 + 0x1b3), lVar6 != 0)) {
      if (plVar12 == (longlong *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined1 *)((longlong)plVar12 + 0x9c);
      }
      FUN_1418b7a18(lVar6,uVar9);
    }
  }
  if (plVar12 == (longlong *)0x0) {
    local_40 = DAT_14cbcfb48;
    FUN_1400bc8c2(param_1 + 0x737);
  }
  else {
    cVar3 = *(char *)((longlong)plVar12 + 0x9d);
    FUN_1407ae792(param_1 + 0x722,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar3) & 0xffffffff,
                  DAT_14cbcfb48);
    if (((cVar3 == '\x01') && (lVar6 = FUN_14027284a(param_1 + 0x722), lVar6 != 0)) &&
       (param_1[0x7a] == lVar6)) {
      FUN_1458ae910(lVar6,4,0);
    }
    if ((*(char *)((longlong)plVar12 + 0xa4) == '\x01') && (lVar6 = param_1[0x86], lVar6 != 0)) {
      if (DAT_14cae9568 == 0) {
        local_60 = &local_40;
        local_40 = FUN_1417de738;
        local_50 = &LAB_145893408;
        local_58 = &LAB_1458cbbd2;
        local_68 = &LAB_147ba21f1;
        local_70 = &LAB_1463e9233;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x1000000c;
        local_90 = 8;
        local_98 = 0x2b8;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        lVar6 = param_1[0x86];
        if (lVar6 == 0) goto LAB_1441ee9a0;
      }
      if ((((((DAT_14cae9568 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x10), lVar6 != 0)) &&
            (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
           ((*(longlong *)
              (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
             DAT_14cae9568 + 0x30 && (lVar6 = FUN_1401ca7f2(), lVar6 != 0)))) &&
          (*(int *)(lVar6 + 0x3c) != 0)) &&
         (((uVar1 = *(uint *)(lVar6 + 0x38), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
          ((lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar7 != 0 &&
           ((*(int *)(lVar7 + 0x10) == *(int *)(lVar6 + 0x3c) &&
            ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))))))) {
        FUN_144000cde(lVar6,CONCAT71((uint7)(byte)(uVar1 >> 0x18),1));
      }
    }
  }
LAB_1441ee9a0:
  if ((param_2 == (longlong *)0x0) || ((char)param_2[3] != '\x01')) {
    if (param_1[0xa1] != 0) {
      lVar6 = FUN_140dd10c4();
      plVar8 = (longlong *)param_1[0xa1];
      if ((((plVar8 != (longlong *)0x0) && (lVar6 != 0)) && (lVar7 = plVar8[2], lVar7 != 0)) &&
         ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar7 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30)))) {
        lVar6 = 0x318;
        goto LAB_1441eea41;
      }
    }
  }
  else if (param_1[0xa1] != 0) {
    lVar6 = FUN_140dd10c4();
    plVar8 = (longlong *)param_1[0xa1];
    if (((plVar8 != (longlong *)0x0) && (lVar6 != 0)) &&
       ((lVar7 = plVar8[2], lVar7 != 0 &&
        ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar7 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)))))) {
      lVar6 = 0x308;
LAB_1441eea41:
      (**(code **)(*plVar8 + lVar6))(plVar8,&DAT_14cbc9e08);
    }
  }
  if (plVar12 == (longlong *)0x0) {
    cVar3 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if (cVar3 == '\0') goto LAB_1441eeb58;
LAB_1441eeaa5:
    puVar11 = &DAT_149e0209e;
  }
  else {
    if (*(char *)((longlong)plVar12 + 0x9b) == '\x01') {
      FUN_1410ef130(param_1 + 0x1ca);
    }
    cVar3 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if (cVar3 == '\0') goto LAB_1441eeb58;
    if (*(char *)((longlong)plVar12 + 0x9c) == '\0') goto LAB_1441eeaa5;
    puVar11 = &DAT_149e25dfc;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbcfb08) && (FUN_144b3d300(&DAT_14cbcfb08), DAT_14cbcfb08 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gbx.DepthOfFieldCineOnly",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14cbcfb00 = 0;
    }
    else {
      DAT_14cbcfb00 = (**(code **)(*plVar8 + 0x60))(plVar8);
    }
    _Init_thread_footer(&DAT_14cbcfb08);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbcfb18) && (FUN_144b3d300(&DAT_14cbcfb18), DAT_14cbcfb18 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cbcfb10 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gbx.ForceDepthOfFieldDisable",1);
    _Init_thread_footer(&DAT_14cbcfb18);
  }
  lVar6 = DAT_14cbcfb00;
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar10 = 0;
  }
  else if (iVar2 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar10 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar10 = 1;
  }
  if (*(char *)(lVar6 + uVar10) == '\x01') {
    (**(code **)(*DAT_14cbcfb10 + 0x98))(DAT_14cbcfb10,puVar11,0x6000000,0);
  }
  (**(code **)(*param_1 + 0x14b8))(param_1);
LAB_1441eeb58:
  cVar3 = (**(code **)(*param_1 + 0x6c8))();
  uVar9 = 0;
  if ((plVar12 != (longlong *)0x0) && (uVar9 = 0, cVar3 != '\0')) {
    uVar9 = *(undefined1 *)((longlong)plVar12 + 0x9c);
  }
  *(undefined1 *)((longlong)param_1 + 0xf19) = uVar9;
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441eede6 FUN_1441eede6 body=1496 status=ok
// SIG undefined FUN_1441eede6(void)

void FUN_1441eede6(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined7 uVar7;
  longlong *plVar5;
  undefined8 uVar6;
  int7 iVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  undefined1 uVar12;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  uint local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_141322ef2();
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    lVar3 = FUN_140a1ada8();
    if (lVar3 != 0) {
      local_60 = 0;
      cVar9 = '\0';
      local_5c = 0;
      uVar11 = 0;
      iVar10 = 0;
      uVar12 = 0;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar4 = lVar3 + 0x30;
        local_60 = 0;
        local_5c = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar4) {
          if (((((char)param_2[3] == '\x01') && ((char)param_2[10] == '\x01')) && (param_3 != 0)) &&
             (*(char *)((longlong)param_2 + 99) != '\0')) {
            if (DAT_14cba8288 == 0) {
              local_80 = local_58;
              local_58[0] = FUN_141864c34;
              local_70 = FUN_14081d0ea;
              local_78 = (code *)&LAB_1464cee30;
              local_88 = &LAB_148bfac22;
              local_90 = (code *)&LAB_140f21842;
              local_98 = L"Game";
              local_a0 = 0;
              local_a8 = 0x10000004;
              local_b0 = 0x10;
              local_b8 = 0x9cd0;
              FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
            }
            iVar10 = *(int *)(DAT_14cba8288 + 0x38);
            lVar4 = DAT_14cba8288;
            if ((iVar10 <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
               (lVar4 = DAT_14cba8288 + 0x30,
               *(longlong *)
                (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)iVar10 * 8) ==
               lVar4)) {
              lVar4 = 0;
              iVar8 = (int7)(int3)((uint)iVar10 >> 8);
              if (*(char *)(param_3 + 0x5d30) == '\x02') {
                if (*(char *)(param_3 + 0x73eb) != '\x02') {
                  lVar4 = FUN_140f330f4(param_3 + 0x71a8,CONCAT71(iVar8,1));
                }
              }
              else if (*(char *)(param_3 + 0x5d30) == '\x01') {
                lVar4 = FUN_1416c1800(param_3 + 0x71a8,CONCAT71(iVar8,1));
              }
            }
          }
          uVar11 = 0;
          iVar10 = 0;
          if (*(char *)((longlong)param_2 + 0x89) == '\x01') {
            iVar10 = *(int *)((longlong)param_2 + 0x8c);
          }
          uVar7 = (undefined7)((ulonglong)lVar4 >> 8);
          local_60 = (undefined4)CONCAT71(uVar7,(char)param_2[0x13]);
          uVar12 = (undefined1)param_2[0x11];
          if ((char)param_2[0x12] == '\x01') {
            uVar11 = *(uint *)((longlong)param_2 + 0x94);
          }
          local_5c = (undefined4)CONCAT71(uVar7,*(undefined1 *)((longlong)param_2 + 0x99));
          cVar9 = *(char *)((longlong)param_2 + 0x9a);
        }
      }
      goto LAB_1441eef41;
    }
  }
  local_60 = 0;
  cVar9 = '\0';
  local_5c = 0;
  uVar11 = 0;
  iVar10 = 0;
  uVar12 = 0;
LAB_1441eef41:
  if (param_3 != 0) {
    if (DAT_14cb94538 == 0) {
      local_80 = local_58;
      local_58[0] = FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_1427b09ee;
      local_88 = &LAB_148a18249;
      local_90 = FUN_14657713c;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10004001;
      local_b0 = 8;
      local_b8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
    }
    plVar5 = (longlong *)FUN_144718840(param_3,DAT_14cb94538);
    if (plVar5 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5);
      FUN_140bc1ec4(uVar6,DAT_14cb75f48,0xff,0);
      if (iVar10 != 0) {
        uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5);
        local_b0 = local_b0 & 0xffffff00;
        local_b8 = CONCAT31(local_b8._1_3_,1);
        FUN_140d78b8a(uVar6,DAT_14cb75f48,iVar10,1);
      }
      uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5);
      FUN_1412bb140(uVar6,DAT_14cb75f48,uVar12);
    }
    if (DAT_14cba8288 == 0) {
      local_80 = local_58;
      local_58[0] = FUN_141864c34;
      local_70 = FUN_14081d0ea;
      local_78 = (code *)&LAB_1464cee30;
      local_88 = &LAB_148bfac22;
      local_90 = (code *)&LAB_140f21842;
      local_98 = L"Game";
      local_a0 = 0;
      local_a8 = 0x10000004;
      local_b0 = 0x10;
      local_b8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      FUN_1400021e4(&DAT_14cb75f48,local_58);
      FUN_1407aedfe(param_3,0,local_58,0xffffffff);
      if (local_58[0] != (code *)0x0) {
        FUN_1400020a8();
      }
      if (uVar11 != 0) {
        FUN_1400021e4(&DAT_14cb75f48,local_58);
        FUN_1407aedfe(param_3,1,local_58,uVar11);
        if (local_58[0] != (code *)0x0) {
          FUN_1400020a8();
        }
        plVar5 = *(longlong **)(&DAT_00006850 + param_3);
        if (plVar5 != (longlong *)0x0) {
          if ((uVar11 & 4) != 0) {
            if (plVar5[0x76c] != 0) {
              cVar1 = (**(code **)(*plVar5 + 0xeb8))(plVar5);
              if (cVar1 != '\0') {
                FUN_1410fee4e(plVar5,0);
              }
            }
            (**(code **)(**(longlong **)(&DAT_00006850 + param_3) + 0xe48))();
          }
          if ((~uVar11 & 5) == 0) {
            (**(code **)(**(longlong **)(&DAT_00006850 + param_3) + 0x7f0))
                      (*(longlong **)(&DAT_00006850 + param_3),0);
          }
        }
      }
      if ((char)local_5c == '\0') {
        FUN_1400bc8c2(param_3 + 0x67f8,&DAT_14cb75f48);
      }
      else {
        FUN_1400bc96c(param_3 + 0x67f8,&DAT_14cb75f48);
      }
      if (*(longlong *)(&DAT_00006850 + param_3) != 0) {
        FUN_141459c0e(*(longlong *)(&DAT_00006850 + param_3),local_60,DAT_14cb75f48);
      }
      FUN_14131ba30(param_3 + 0x6c48,param_2);
      FUN_1415e2d0a(param_3,param_2);
    }
  }
  if (*(longlong *)(param_1 + 0x2210) != 0) {
    if (cVar9 == '\0') {
      FUN_1400bc8c2();
    }
    else {
      FUN_1400bc96c(*(longlong *)(param_1 + 0x2210) + 0xb0,&DAT_14cb75f48);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ef3c0 FUN_1441ef3c0 body=551 status=ok
// SIG undefined FUN_1441ef3c0(void)

void FUN_1441ef3c0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  longlong *local_d8 [2];
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined4 *local_98;
  ulonglong *local_90;
  longlong local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined4 local_50 [4];
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = FUN_1403ca102();
  if (lVar3 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cbcfb68) {
      FUN_144b3d300(&DAT_14cbcfb68);
      if (DAT_14cbcfb68 == -1) {
        local_b8 = (longlong *)*param_2;
        if (local_b8 != (longlong *)0x0) {
          (**(code **)(*local_b8 + 8))();
        }
        local_b0 = (undefined4)param_2[1];
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        local_60 = 0;
        uStack_58 = 0;
        FUN_1446ddda2(&local_78,"MainMenuCannotJoinDLC",0);
        FUN_1410d1eba(local_d8,&local_78);
        FUN_14023409e(&local_c8,local_d8,1);
        local_50[0] = 4;
        FUN_14023423e(local_40,&local_b8);
        local_98 = local_50;
        local_90 = &local_30;
        FUN_14010d304(&local_88);
        local_a8 = local_c8;
        local_a0 = local_c0;
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(&DAT_14cbcfb58,&local_a8,&local_88);
        FUN_14007f2db(local_88,local_80);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        if (local_40[0] != (longlong *)0x0) {
          (**(code **)(*local_40[0] + 0x10))();
        }
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_c0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar2 = (int *)((longlong)local_c0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_c0 + 0x10))(local_c0);
            }
          }
        }
        if (local_b8 != (longlong *)0x0) {
          (**(code **)(*local_b8 + 0x10))();
        }
        if (local_d8[0] != (longlong *)0x0) {
          (**(code **)(*local_d8[0] + 0x10))();
        }
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_1441ef5e8);
        _Init_thread_footer(&DAT_14cbcfb68);
      }
    }
    FUN_14413e7dc(lVar3,0,&DAT_14cbcfb58,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ef5fc FUN_1441ef5fc body=118 status=ok
// SIG undefined FUN_1441ef5fc(void)

void FUN_1441ef5fc(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_14016169c(param_1,&local_1c);
  if (((cVar1 == '\0') || (local_1c == 0)) && (lVar2 = FUN_148d3db36(param_1), lVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ef684 FUN_1441ef684 body=118 status=ok
// SIG undefined FUN_1441ef684(void)

void FUN_1441ef684(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_14016169c(param_1,&local_1c);
  if (((cVar1 == '\0') || (local_1c == 0)) && (lVar2 = FUN_148d3db36(param_1), lVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ef764 FUN_1441ef764 body=242 status=ok
// SIG undefined FUN_1441ef764(void)

void FUN_1441ef764(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined ***pppuVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_6c;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined4 *local_38;
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_6c = param_3;
  if (*(longlong *)(param_1 + 0x398) != 0) {
    lVar3 = FUN_140082f10();
    lVar1 = *(longlong *)(param_1 + 0x398);
    if (lVar1 != 0) {
      local_78 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1441ef7d3;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        local_78 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          local_78 = lVar1;
        }
        goto LAB_1441ef7d3;
      }
    }
  }
  local_78 = 0;
LAB_1441ef7d3:
  local_30 = &local_78;
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14b995200;
  local_38 = &local_6c;
  local_68[0] = FUN_1441f67d2;
  local_40 = param_2;
  FUN_141499582(param_1,local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar4 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar4 = &local_48;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441ef86a FUN_1441ef86a body=66 status=ok
// SIG undefined FUN_1441ef86a(void)

void FUN_1441ef86a(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xf48);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_14477b072(plVar1,DAT_14cba7e70);
                    /* WARNING: Could not recover jumptable at 0x0001441ef8a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,0,*(code **)(*plVar1 + 0x248));
    return;
  }
  return;
}



// FUNCTION 1441ef8ac FUN_1441ef8ac body=1713 status=ok
// SIG undefined FUN_1441ef8ac(void)

undefined8 FUN_1441ef8ac(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *plStack_d0;
  longlong local_c8;
  longlong *plStack_c0;
  undefined2 *local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  longlong *plStack_80;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f0 = param_2;
  FUN_1411a601e();
  if (((byte *)*param_3 == (byte *)0x0) || ((*(byte *)*param_3 & 3) == 0)) {
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    FUN_14009b010(&local_88,3,0);
    if (param_3 != &DAT_14c9a1308) {
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
        UNLOCK();
      }
      plVar4 = (longlong *)param_3[1];
      *param_3 = local_88;
      param_3[1] = (longlong)plStack_80;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar4 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    plVar4 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_80 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_80)(plStack_80);
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
  local_e0 = param_3;
  uVar6 = FUN_1412868e8();
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  FUN_14009b010(&local_a8,3,0);
  puVar9 = (undefined4 *)(param_1 + 0x2600);
  uVar8 = 0;
  local_e8 = param_1;
  do {
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    FUN_14009b010(&local_88,1,0);
    if (local_88 != 0) {
      FUN_1404a8912(local_88,*puVar9);
    }
    FUN_1401cfb1c(uVar6,&local_b8,uVar8 & 0xffffffff);
    puVar7 = &DAT_149dfb77a;
    if ((int)plStack_b0 != 0) {
      puVar7 = local_b8;
    }
    FUN_1446f470e(&local_c8,puVar7);
    if (local_b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_a8 != 0) {
      local_f8 = 0;
      FUN_140516f2a(local_a8,&local_c8,&local_88,0);
    }
    plVar4 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_80 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    uVar8 = uVar8 + 1;
    puVar9 = puVar9 + 0x10;
  } while (uVar8 != 6);
  plStack_b0 = (longlong *)CONCAT44(plStack_b0._4_4_,DAT_14cbcbd80);
  local_b8 = DAT_14cbcbd78;
  FUN_1448075d0(&local_88);
  plVar4 = local_e0;
  if (*local_e0 != 0) {
    local_f8 = 0;
    FUN_14014191c(*local_e0,&local_88,&local_a8,0);
  }
  lVar5 = local_e8;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  uVar6 = local_f0;
  FUN_1418ef232(lVar5,local_f0,plVar4);
  FUN_1411cf240(lVar5,uVar6,plVar4);
  if (((byte *)*plVar4 == (byte *)0x0) || ((*(byte *)*plVar4 & 3) == 0)) {
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    FUN_14009b010(&local_88,3,0);
    if (plVar4 != &DAT_14c9a1308) {
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
        UNLOCK();
      }
      plVar3 = (longlong *)plVar4[1];
      *plVar4 = local_88;
      plVar4[1] = (longlong)plStack_80;
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
    plVar3 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_80)(plStack_80);
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
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  FUN_14009b010(&local_a8,1,0);
  if (local_a8 != 0) {
    FUN_14709cef8(local_a8,*(undefined8 *)(lVar5 + 0x3dc0));
  }
  plStack_b0 = (longlong *)CONCAT44(plStack_b0._4_4_,DAT_14cbcfaa8);
  local_b8 = DAT_14cbcfaa0;
  FUN_1448075d0(&local_88);
  if (*plVar4 != 0) {
    local_f8 = 0;
    FUN_14014191c(*plVar4,&local_88,&local_a8,0);
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  local_b8 = (undefined2 *)0x0;
  plStack_b0 = (longlong *)0x0;
  FUN_14009b010(&local_b8,1,0);
  if (local_b8 != (undefined2 *)0x0) {
    FUN_14709cef8(local_b8,*(undefined8 *)(lVar5 + 0x3dc8));
  }
  plStack_c0 = (longlong *)CONCAT44(plStack_c0._4_4_,DAT_14cbcfac0);
  local_c8 = DAT_14cbcfab8;
  FUN_1448075d0(&local_88);
  if (*plVar4 != 0) {
    local_f8 = 0;
    FUN_14014191c(*plVar4,&local_88,&local_b8,0);
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  local_c8 = 0;
  plStack_c0 = (longlong *)0x0;
  FUN_14009b010(&local_c8,1,0);
  if (local_c8 != 0) {
    FUN_14709cef8(local_c8,*(undefined8 *)(lVar5 + 0x3dd0));
  }
  plStack_d0 = (longlong *)CONCAT44(plStack_d0._4_4_,DAT_14cbcfad8);
  local_d8 = DAT_14cbcfad0;
  FUN_1448075d0(&local_88);
  if (*plVar4 != 0) {
    local_f8 = 0;
    FUN_14014191c(*plVar4,&local_88,&local_c8,0);
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  local_d8 = 0;
  plStack_d0 = (longlong *)0x0;
  FUN_14009b010(&local_d8,1,0);
  if (local_d8 != 0) {
    FUN_1401269d0(local_d8,lVar5 + 0x3dd8);
  }
  local_90 = DAT_14cbcfaf0;
  local_98 = DAT_14cbcfae8;
  FUN_1448075d0(&local_88);
  if (*plVar4 != 0) {
    local_f8 = 0;
    FUN_14014191c(*plVar4,&local_88,&local_d8,0);
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  plVar4 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_d0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_c0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_b0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_a0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441eff5e FUN_1441eff5e body=60 status=ok
// SIG undefined FUN_1441eff5e(void)

void FUN_1441eff5e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xc30);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a0))(plVar1,param_2,1);
  }
  uVar2 = FUN_14420d55e(param_2);
  *(undefined4 *)(&DAT_000031a0 + param_1) = uVar2;
  return;
}



// FUNCTION 1441eff9a FUN_1441eff9a body=58 status=ok
// SIG undefined FUN_1441eff9a(void)

undefined1 FUN_1441eff9a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 0xc30) != 0) {
    FUN_1411a610c(*(longlong *)(param_1 + 0xc30),param_2,param_3,1);
  }
  FUN_14421289f(param_3,*(undefined4 *)(&DAT_000031a0 + param_1));
  return 1;
}



// FUNCTION 1441effd8 FUN_1441effd8 body=293 status=ok
// SIG undefined FUN_1441effd8(void)

void FUN_1441effd8(longlong param_1,undefined4 *param_2,char param_3,uint param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auStack_78 [32];
  int local_58;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)(param_1 + 0x958) + 0x10))(param_1 + 0x958);
  lVar2 = FUN_1447210f0(param_1);
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_14007a5e6(lVar2);
    if (plVar3 != (longlong *)0x0) {
      bVar5 = 0x40;
      if (param_3 != '\0') {
        local_40 = *param_2;
        local_3c = 1;
        cVar1 = FUN_145774f4c(param_1);
        bVar5 = cVar1 << 5 | 0x40;
      }
      cVar1 = (**(code **)(*plVar3 + 0x100))(plVar3,param_2);
      bVar4 = bVar5 | 4;
      if (cVar1 == '\0') {
        bVar4 = bVar5;
      }
      FUN_14136cf00(local_44,param_1,0);
      (**(code **)(*plVar3 + 0xf8))(plVar3,param_2);
      local_58 = (param_4 & 0xff) * 4;
      (**(code **)(*plVar3 + 0x20))(plVar3,*param_2,param_1 + 0xe38,bVar4);
      FUN_14136cce2(local_44);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f0100 FUN_1441f0100 body=335 status=ok
// SIG undefined FUN_1441f0100(void)

void FUN_1441f0100(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(char *)(param_1 + 0x178) == '\x03') && (lVar1 = *(longlong *)(param_1 + 0x398), lVar1 != 0)
     ) {
    if (DAT_14cbae3d8 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1464f5fc4;
      local_58 = &LAB_148c3dd26;
      local_60 = &LAB_1459673ba;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar1 = *(longlong *)(param_1 + 0x398);
      if (lVar1 == 0) goto LAB_1441f016f;
    }
    if ((((DAT_14cbae3d8 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
        DAT_14cbae3d8 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
  }
LAB_1441f016f:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441f0270 FUN_1441f0270 body=352 status=ok
// SIG undefined FUN_1441f0270(void)

undefined8 FUN_1441f0270(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
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
  lVar2 = *(longlong *)(param_1 + 0x398);
  if (lVar2 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464f5fc4;
      local_48 = &LAB_148c3dd26;
      local_50 = &LAB_1459673ba;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar2 = *(longlong *)(param_1 + 0x398);
      if (lVar2 == 0) goto LAB_1441f03ab;
    }
    uVar3 = 0;
    if ((DAT_14cbae3d8 == 0) || (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 == 0))
    goto LAB_1441f03ad;
    if (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar1 + 0x38)) {
      uVar3 = 0;
      if ((param_2 != 0) &&
         (uVar3 = 0,
         *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8)
         == DAT_14cbae3d8 + 0x30)) {
        lVar2 = FUN_1409e484c(lVar2,param_2);
        uVar3 = *(undefined8 *)(lVar2 + 0x20);
      }
      goto LAB_1441f03ad;
    }
  }
LAB_1441f03ab:
  uVar3 = 0;
LAB_1441f03ad:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1441f03d2 FUN_1441f03d2 body=463 status=ok
// SIG undefined FUN_1441f03d2(void)

void FUN_1441f03d2(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((param_2 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) &&
     (lVar4 = *(longlong *)(param_1 + 0x398), lVar4 != 0)) {
    if (DAT_14cbae3d8 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1464f5fc4;
      local_58 = &LAB_148c3dd26;
      local_60 = &LAB_1459673ba;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar4 = *(longlong *)(param_1 + 0x398);
      if (lVar4 == 0) goto LAB_1441f04cd;
    }
    if (((DAT_14cbae3d8 != 0) && (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0)) &&
       ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8)
         == DAT_14cbae3d8 + 0x30)))) {
      FUN_1410dfe5a(lVar4,param_2,param_3);
      lVar1 = *(longlong *)(param_1 + 0xf48);
      if (lVar1 != 0) {
        lVar4 = FUN_1409e484c(lVar4,param_2);
        uVar2 = *(undefined8 *)(lVar4 + 8);
        local_38 = (code *)0x14b993b64;
        local_30 = 10;
        local_2c = 0;
        uVar3 = FUN_14001a6c0(&local_38,1);
        local_38 = (code *)(ulonglong)uVar3;
        FUN_1441f68dc(lVar1 + 0x59c0,&local_38,param_3,uVar2);
      }
    }
  }
LAB_1441f04cd:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441f05b2 FUN_1441f05b2 body=201 status=ok
// SIG undefined FUN_1441f05b2(void)

undefined8 * FUN_1441f05b2(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  wchar_t local_58 [36];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbcfbcc) {
    FUN_144b3d300(&DAT_14cbcfbcc);
    if (DAT_14cbcfbcc == -1) {
      builtin_wcsncpy(local_58 + 0x18,L"ntory",6);
      builtin_wcsncpy(local_58 + 0x10,L"yForInve",8);
      builtin_wcsncpy(local_58 + 8,L"lotsRead",8);
      builtin_wcsncpy(local_58,L"OnEquipS",8);
      FUN_1446f470e(&DAT_14cbcfbc4,local_58,1);
      _Init_thread_footer(&DAT_14cbcfbcc);
    }
  }
  *param_1 = DAT_14cbcfbc4;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f0862 FUN_1441f0862 body=7 status=ok
// SIG undefined FUN_1441f0862(void)

undefined1 FUN_1441f0862(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x2580);
}



// FUNCTION 1441f086e FUN_1441f086e body=189 status=ok
// SIG undefined FUN_1441f086e(void)

void FUN_1441f086e(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_144169656();
  lVar3 = *(longlong *)(param_1 + 0x24a8);
  if ((((lVar3 != 0) && (*(longlong **)(lVar3 + 0x138) != (longlong *)0x0)) &&
      (*(int *)(lVar3 + 0x134) != 0)) &&
     ((uVar1 = *(uint *)(lVar3 + 0x130), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar4 != 0) &&
       ((*(int *)(lVar4 + 0x10) == *(int *)(lVar3 + 0x134) &&
        ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
      plVar2 = (longlong *)(**(code **)(**(longlong **)(lVar3 + 0x138) + 8))();
      if (plVar2 != (longlong *)0x0) {
        lVar3 = FUN_145a8901c();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x0001441f0928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x668))(plVar2,param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1441f099a FUN_1441f099a body=875 status=ok
// SIG undefined FUN_1441f099a(void)

ulonglong FUN_1441f099a(longlong param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 unaff_RDI;
  ulonglong uVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  code *local_38;
  ulonglong local_30;
  undefined7 uVar12;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar4 = FUN_140161e9a(param_1 + 0x3c28);
  if (iVar4 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x430);
    if (lVar7 != 0) {
      if (DAT_14cae9568 == 0) {
        local_50 = &local_38;
        local_38 = FUN_1417de738;
        local_40 = &LAB_145893408;
        local_48 = &LAB_1458cbbd2;
        local_58 = &LAB_147ba21f1;
        local_60 = &LAB_1463e9233;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x1000000c;
        local_80 = 8;
        local_88 = 0x2b8;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        lVar7 = *(longlong *)(param_1 + 0x430);
        if (lVar7 == 0) goto LAB_1441f0a89;
      }
      if (((((((DAT_14cae9568 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x10), lVar7 != 0)) &&
             (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
            ((*(longlong *)
               (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
              DAT_14cae9568 + 0x30 && (lVar7 = FUN_1401ca7f2(), lVar7 != 0)))) &&
           ((*(int *)(lVar7 + 0x3c) != 0 &&
            ((uVar1 = *(uint *)(lVar7 + 0x38), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc))))))
          && (lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar10 != 0))
         && ((*(int *)(lVar10 + 0x10) == *(int *)(lVar7 + 0x3c) &&
             ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)))) goto LAB_1441f09c9;
    }
LAB_1441f0a89:
    lVar7 = FUN_148e047d8(param_1 + 0xe50);
    if (lVar7 == 0) {
      plVar8 = (longlong *)FUN_14497e828(param_1);
      uVar12 = (undefined7)((ulonglong)unaff_RDI >> 8);
      uVar11 = CONCAT71(uVar12,1);
      if (plVar8 == (longlong *)0x0) goto LAB_1441f09cb;
      lVar7 = FUN_1403ca142();
      if ((*(int *)(plVar8[2] + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (*(longlong *)(*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
          lVar7 + 0x30)) goto LAB_1441f09cb;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cbcfb70) &&
         (FUN_144b3d300(&DAT_14cbcfb70), lVar7 = DAT_14cbcfa80, DAT_14cbcfb70 == -1)) {
        iVar4 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
          uVar9 = 0;
        }
        else if (iVar4 == 1) {
          DVar5 = FUN_140ad26c0();
          DVar6 = GetCurrentThreadId();
          uVar9 = (ulonglong)(DVar5 != DVar6);
        }
        else {
          uVar9 = 1;
        }
        DAT_14cbcfb6c = *(char *)(lVar7 + uVar9);
        _Init_thread_footer(&DAT_14cbcfb70);
      }
      bVar2 = (**(code **)(*plVar8 + 0x498))(plVar8);
      if (5 < bVar2) {
        if (*(code **)(*plVar8 + 0x498) == (code *)&LAB_14015c36e) {
          cVar3 = (char)plVar8[0x42];
        }
        else {
          cVar3 = (**(code **)(*plVar8 + 0x498))(plVar8);
        }
        if ((cVar3 == '\b') ||
           ((DAT_14cbcfb6c == '\x01' &&
            (cVar3 = (**(code **)(*plVar8 + 0x498))(plVar8), (byte)(cVar3 - 6U) < 3)))) {
          if (DAT_14cbcfb6c != '\0') goto LAB_1441f09cb;
          if (*(longlong *)(param_1 + 0xf40) == 0) {
            if ((*(longlong *)(param_1 + 0x2370) != 0) &&
               (*(int *)(param_1 + 0x2378) - 1U < 0xfffffffe)) goto LAB_1441f09c9;
            cVar3 = *(char *)(param_1 + 0x2368);
          }
          else {
            cVar3 = *(char *)(*(longlong *)(param_1 + 0xf40) + 0x1990);
          }
          if (cVar3 == '\0') {
            uVar11 = CONCAT71(uVar12,*(undefined1 *)(param_1 + 0x23b8)) ^ 1;
            goto LAB_1441f09cb;
          }
        }
      }
    }
  }
LAB_1441f09c9:
  uVar11 = 0;
LAB_1441f09cb:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar11 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f0d06 FUN_1441f0d06 body=1242 status=ok
// SIG undefined FUN_1441f0d06(void)

void FUN_1441f0d06(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145af097e();
  if (*(longlong *)(param_1 + 0x188) != 0) {
    lVar2 = FUN_1410decb6();
    lVar3 = *(longlong *)(param_1 + 0x188);
    if ((((lVar3 != 0) && (lVar2 != 0)) && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) &&
       ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)))) {
      local_40 = (code *)&LAB_148dbb15c;
      local_38 = 0;
      local_48 = &local_40;
      FUN_1441f11e2(lVar3,&DAT_14cbc9bd0,1,param_1);
      local_40 = (code *)&LAB_148dbb166;
      local_38 = 0;
      local_48 = &local_40;
      FUN_1441f11e2(lVar3,&DAT_14cbc9bd8,1,param_1);
      local_40 = (code *)&LAB_14621eb52;
      local_38 = 0;
      local_48 = &local_40;
      FUN_1441f11e2(lVar3,&DAT_14cbc9be0,1,param_1);
      local_40 = FUN_148dbb170;
      local_38 = 0;
      local_48 = &local_40;
      FUN_1441f11e2(lVar3,&DAT_14cbc9be8,1,param_1);
      local_40 = FUN_148dbb226;
      local_38 = 0;
      local_48 = &local_40;
      FUN_1441f11e2(lVar3,&DAT_14cbc9bf0,1,param_1);
      local_40 = FUN_148dbb248;
      local_38 = 0;
      local_48 = &local_40;
      FUN_1441f11e2(lVar3,&DAT_14cbc9c10,1,param_1);
      local_40 = FUN_14621eb5a;
      local_38 = 0;
      local_48 = &local_40;
      FUN_1441f11e2(lVar3,&DAT_14cbc9c00,1,param_1);
      local_40 = FUN_148dbb2a4;
      local_38 = 0;
      local_48 = &local_40;
      FUN_1441f11e2(lVar3,&DAT_14cbc9c08,1,param_1);
    }
  }
  lVar3 = FUN_1415336fa(param_1);
  if (lVar3 != 0) {
    local_40 = (code *)&LAB_148dbb300;
    local_38 = 0;
    local_48 = &local_40;
    FUN_1441f11e2(lVar3,&DAT_14cbc9bf8,1,param_1);
    local_40 = (code *)&LAB_148dbb310;
    local_38 = 0;
    local_48 = &local_40;
    FUN_1441f11e2(lVar3,&DAT_14cbc9bf8,0x10,param_1);
  }
  lVar3 = *(longlong *)(param_1 + 0xa80);
  if (lVar3 != 0) {
    lVar2 = FUN_14592314a();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar3);
      }
      goto LAB_1441f0f32;
    }
  }
  lVar3 = 0;
LAB_1441f0f32:
  *(longlong *)(param_1 + 0x31f8) = lVar3;
  lVar3 = *(longlong *)(param_1 + 0x32e8);
  if (lVar3 != 0) {
    lVar2 = FUN_145922d9c();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (lVar3 = *(longlong *)(param_1 + 0x32e8), lVar3 != 0)) {
      lVar2 = FUN_145922d9c();
      if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 0x32e8);
      }
      plVar4 = (longlong *)FUN_14663115a(param_1,uVar5);
      if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(plVar4);
      }
      *(longlong **)(param_1 + 0x32f0) = plVar4;
      (**(code **)(*plVar4 + 0x2a0))(plVar4);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x32f8);
  if (lVar3 != 0) {
    lVar2 = FUN_14592340c();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (lVar3 = *(longlong *)(param_1 + 0x32f8), lVar3 != 0)) {
      lVar2 = FUN_14592340c();
      if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 0x32f8);
      }
      plVar4 = (longlong *)FUN_14663120c(param_1,uVar5);
      if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(plVar4);
      }
      *(longlong **)(param_1 + 0x3300) = plVar4;
      (**(code **)(*plVar4 + 0x2a0))(plVar4);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x3308);
  if (lVar3 != 0) {
    lVar2 = FUN_145922e88();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (lVar3 = *(longlong *)(param_1 + 0x3308), lVar3 != 0)) {
      lVar2 = FUN_145922e88();
      if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 0x3308);
      }
      plVar4 = (longlong *)FUN_1466312be(param_1,uVar5);
      if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(plVar4);
      }
      *(longlong **)(param_1 + 0x3310) = plVar4;
      (**(code **)(*plVar4 + 0x2a0))(plVar4);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_1418ed8e8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f11e2 FUN_1441f11e2 body=1070 status=ok
// SIG undefined FUN_1441f11e2(void)

void FUN_1441f11e2(longlong param_1,undefined8 *param_2,undefined1 param_3,longlong param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *(undefined4 *)(param_5 + 1);
  uVar5 = *param_5;
  local_58 = (undefined8 *)*param_2;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 == 0) goto LAB_1441f1484;
  puVar9 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar7 = DAT_14c762760 + 1;
  *(int *)(puVar9 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar7;
  *puVar9 = &PTR_LAB_14acd0ae0;
  *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
  uVar4 = *(uint *)(lVar8 + 0xc);
  *(uint *)(puVar9 + 2) = uVar4;
  if ((int)uVar4 < DAT_14c9647dc) {
    lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
  }
  else {
    lVar8 = 0;
  }
  iVar7 = *(int *)(lVar8 + 0x10);
  if (*(int *)(lVar8 + 0x10) == 0) {
    LOCK();
    iVar7 = DAT_14c964868 + 1;
    UNLOCK();
    iVar12 = DAT_14c964868 + 1;
    bVar14 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar7;
    if (bVar14) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar12);
    }
    LOCK();
    iVar7 = *(int *)(lVar8 + 0x10);
    bVar14 = iVar7 == 0;
    if (bVar14) {
      *(int *)(lVar8 + 0x10) = iVar12;
      iVar7 = 0;
    }
    UNLOCK();
    if (bVar14) {
      iVar7 = iVar12;
    }
  }
  *(int *)((longlong)puVar9 + 0x14) = iVar7;
  *(undefined1 *)(puVar9 + 3) = param_3;
  *puVar9 = &PTR_FUN_14b47b0e0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  *(undefined1 *)(puVar9 + 6) = 0;
  FUN_14063ef7a(puVar9 + 4);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar6 = local_58;
  local_50 = 3;
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
  *local_58 = &PTR_FUN_14b994920;
  local_58[3] = 0;
  iVar7 = 0;
  if (param_4 != 0) {
    uVar4 = *(uint *)(param_4 + 0xc);
    *(uint *)(local_58 + 3) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar7 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar7 = *(int *)(lVar8 + 0x10);
      bVar14 = iVar7 == 0;
      if (bVar14) {
        *(int *)(lVar8 + 0x10) = iVar12;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar7 = iVar12;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar7;
  puVar6[4] = uVar5;
  *(undefined4 *)(puVar6 + 5) = uVar3;
  plVar10 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14a55ecf0;
  plVar10[2] = (longlong)local_58;
  local_58 = (undefined8 *)0x0;
  *(int *)(plVar10 + 3) = local_50;
  local_50 = 0;
  if (plVar10 == (longlong *)0x0) {
    puVar9[4] = 0x10;
    plVar13 = (longlong *)puVar9[5];
    if (plVar13 != (longlong *)0x0) {
      puVar9[5] = 0;
LAB_1441f1548:
      LOCK();
      plVar1 = plVar13 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      if (plVar10 != (longlong *)0x0) goto LAB_1441f1407;
    }
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    puVar9[4] = plVar10 + 2;
    plVar13 = (longlong *)puVar9[5];
    if (plVar10 == plVar13) {
      LOCK();
      plVar13 = plVar10 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    else {
      puVar9[5] = plVar10;
      if (plVar13 != (longlong *)0x0) goto LAB_1441f1548;
    }
LAB_1441f1407:
    LOCK();
    plVar13 = plVar10 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  if (local_50 == 0) {
LAB_1441f144b:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_1441f144b;
  }
  *(undefined1 *)(puVar9 + 6) = *(undefined1 *)(param_1 + 0x1c8);
  iVar7 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar7 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar7);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar7 * 8) = puVar9;
LAB_1441f1484:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


