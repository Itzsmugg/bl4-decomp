// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1488a626a FUN_1488a626a body=156 status=ok
// SIG undefined FUN_1488a626a(void)

void FUN_1488a626a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8c8d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40d400;
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
                    /* WARNING: Could not recover jumptable at 0x0001488a62f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488a6306 FUN_1488a6306 body=98 status=ok
// SIG undefined FUN_1488a6306(void)

void FUN_1488a6306(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001488a634f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001488a635e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1488a6368 FUN_1488a6368 body=94 status=ok
// SIG undefined FUN_1488a6368(void)

ulonglong FUN_1488a6368(longlong param_1)

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
LAB_1488a63bb:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1488a63bb;
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



// FUNCTION 1488a63c6 FUN_1488a63c6 body=29 status=ok
// SIG undefined FUN_1488a63c6(void)

undefined8 FUN_1488a63c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488a6400 FUN_1488a6400 body=93 status=ok
// SIG undefined FUN_1488a6400(void)

void FUN_1488a6400(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8c8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40d470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488a645e FUN_1488a645e body=93 status=ok
// SIG undefined FUN_1488a645e(void)

void FUN_1488a645e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8c8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40d470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488a64bc FUN_1488a64bc body=126 status=ok
// SIG undefined FUN_1488a64bc(void)

void FUN_1488a64bc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8c8d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40d470;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488a652b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488a6548 FUN_1488a6548 body=21 status=ok
// SIG undefined FUN_1488a6548(void)

undefined8 FUN_1488a6548(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1488a655d FUN_1488a655d body=59 status=ok
// SIG undefined FUN_1488a655d(void)

void FUN_1488a655d(undefined2 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x22) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x1c) = 0;
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 1488a6598 FUN_1488a6598 body=143 status=ok
// SIG undefined FUN_1488a6598(void)

void FUN_1488a6598(longlong param_1,int param_2)

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



// FUNCTION 1488a6628 FUN_1488a6628 body=108 status=ok
// SIG undefined FUN_1488a6628(void)

void FUN_1488a6628(longlong param_1,uint param_2)

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



// FUNCTION 1488a6694 FUN_1488a6694 body=143 status=ok
// SIG undefined FUN_1488a6694(void)

void FUN_1488a6694(longlong param_1,int param_2)

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



// FUNCTION 1488a6724 FUN_1488a6724 body=322 status=ok
// SIG undefined FUN_1488a6724(void)

void FUN_1488a6724(longlong *param_1)

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



// FUNCTION 1488a6868 FUN_1488a6868 body=114 status=ok
// SIG undefined FUN_1488a6868(void)

void FUN_1488a6868(longlong *param_1,int param_2)

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



// FUNCTION 1488a68de FUN_1488a68de body=81 status=ok
// SIG undefined FUN_1488a68de(void)

undefined8 FUN_1488a68de(longlong param_1)

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



// FUNCTION 1488a6936 FUN_1488a6936 body=118 status=ok
// SIG undefined FUN_1488a6936(void)

void FUN_1488a6936(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d330;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40d550;
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



// FUNCTION 1488a69ac FUN_1488a69ac body=118 status=ok
// SIG undefined FUN_1488a69ac(void)

void FUN_1488a69ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d330;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40d550;
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



// FUNCTION 1488a6a22 FUN_1488a6a22 body=156 status=ok
// SIG undefined FUN_1488a6a22(void)

void FUN_1488a6a22(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a79d330;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40d550;
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
                    /* WARNING: Could not recover jumptable at 0x0001488a6aae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488a6abe FUN_1488a6abe body=98 status=ok
// SIG undefined FUN_1488a6abe(void)

void FUN_1488a6abe(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001488a6b07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001488a6b16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1488a6b20 FUN_1488a6b20 body=94 status=ok
// SIG undefined FUN_1488a6b20(void)

ulonglong FUN_1488a6b20(longlong param_1)

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
LAB_1488a6b73:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1488a6b73;
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



// FUNCTION 1488a6b7e FUN_1488a6b7e body=64 status=ok
// SIG undefined FUN_1488a6b7e(void)

undefined8 * FUN_1488a6b7e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b40d5c0;
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



// FUNCTION 1488a6bc2 FUN_1488a6bc2 body=81 status=ok
// SIG undefined FUN_1488a6bc2(void)

undefined8 FUN_1488a6bc2(longlong param_1)

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



// FUNCTION 1488a6c1a FUN_1488a6c1a body=89 status=ok
// SIG undefined FUN_1488a6c1a(void)

bool FUN_1488a6c1a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1488a6c65;
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
LAB_1488a6c65:
  return lVar6 == param_2;
}



// FUNCTION 1488a6c90 FUN_1488a6c90 body=118 status=ok
// SIG undefined FUN_1488a6c90(void)

void FUN_1488a6c90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8c8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40d5c0;
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



// FUNCTION 1488a6d06 FUN_1488a6d06 body=118 status=ok
// SIG undefined FUN_1488a6d06(void)

void FUN_1488a6d06(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8c8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40d5c0;
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



// FUNCTION 1488a6d7c FUN_1488a6d7c body=156 status=ok
// SIG undefined FUN_1488a6d7c(void)

void FUN_1488a6d7c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8c8d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40d5c0;
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
                    /* WARNING: Could not recover jumptable at 0x0001488a6e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488a6e18 FUN_1488a6e18 body=98 status=ok
// SIG undefined FUN_1488a6e18(void)

void FUN_1488a6e18(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001488a6e61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001488a6e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1488a6e7a FUN_1488a6e7a body=94 status=ok
// SIG undefined FUN_1488a6e7a(void)

ulonglong FUN_1488a6e7a(longlong param_1)

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
LAB_1488a6ecd:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1488a6ecd;
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



// FUNCTION 1488a6ed8 FUN_1488a6ed8 body=132 status=ok
// SIG undefined FUN_1488a6ed8(void)

void FUN_1488a6ed8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488a6f5e FUN_1488a6f5e body=62 status=ok
// SIG undefined FUN_1488a6f5e(void)

void FUN_1488a6f5e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488a6f9c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 1488a6f9c FUN_1488a6f9c body=93 status=ok
// SIG undefined FUN_1488a6f9c(void)

ulonglong FUN_1488a6f9c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,8);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 1488a6ffa FUN_1488a6ffa body=68 status=ok
// SIG undefined FUN_1488a6ffa(void)

undefined8 * FUN_1488a6ffa(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b40d630;
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



// FUNCTION 1488a7042 FUN_1488a7042 body=81 status=ok
// SIG undefined FUN_1488a7042(void)

undefined8 FUN_1488a7042(longlong param_1)

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



// FUNCTION 1488a709a FUN_1488a709a body=91 status=ok
// SIG undefined FUN_1488a709a(void)

bool FUN_1488a709a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1488a70ca;
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
LAB_1488a70ca:
  return lVar6 == param_2;
}



// FUNCTION 1488a7112 FUN_1488a7112 body=118 status=ok
// SIG undefined FUN_1488a7112(void)

void FUN_1488a7112(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b40d630;
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



// FUNCTION 1488a7188 FUN_1488a7188 body=118 status=ok
// SIG undefined FUN_1488a7188(void)

void FUN_1488a7188(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b40d630;
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



// FUNCTION 1488a71fe FUN_1488a71fe body=156 status=ok
// SIG undefined FUN_1488a71fe(void)

void FUN_1488a71fe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b40d630;
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
                    /* WARNING: Could not recover jumptable at 0x0001488a728a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488a729a FUN_1488a729a body=94 status=ok
// SIG undefined FUN_1488a729a(void)

void FUN_1488a729a(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001488a72e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001488a72ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1488a72f8 FUN_1488a72f8 body=48 status=ok
// SIG undefined FUN_1488a72f8(void)

void FUN_1488a72f8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 1488a7328 FUN_1488a7328 body=112 status=ok
// SIG undefined FUN_1488a7328(void)

void FUN_1488a7328(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 1488a7398 FUN_1488a7398 body=147 status=ok
// SIG undefined FUN_1488a7398(void)

void FUN_1488a7398(longlong param_1,int param_2)

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



// FUNCTION 1488a742c FUN_1488a742c body=9 status=ok
// SIG undefined FUN_1488a742c(void)

void FUN_1488a742c(longlong param_1)

{
  FUN_1486bd056(param_1 + 0x10);
  return;
}



// FUNCTION 1488a7436 FUN_1488a7436 body=29 status=ok
// SIG undefined FUN_1488a7436(void)

undefined8 FUN_1488a7436(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488a7454 FUN_1488a7454 body=9 status=ok
// SIG undefined FUN_1488a7454(void)

void FUN_1488a7454(longlong param_1)

{
  FUN_1486bd056(param_1 + 0x10);
  return;
}



// FUNCTION 1488a745e FUN_1488a745e body=29 status=ok
// SIG undefined FUN_1488a745e(void)

undefined8 FUN_1488a745e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488a747c FUN_1488a747c body=70 status=ok
// SIG undefined FUN_1488a747c(void)

void FUN_1488a747c(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b18bd30;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    plVar1 = (longlong *)(param_1 + 0x130);
    if (*(longlong **)(param_1 + 0x120) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x120);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1486bda76(param_1 + 0x10);
  return;
}



// FUNCTION 1488a74c2 FUN_1488a74c2 body=29 status=ok
// SIG undefined FUN_1488a74c2(void)

undefined8 FUN_1488a74c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488a74e0 FUN_1488a74e0 body=9 status=ok
// SIG undefined FUN_1488a74e0(void)

void FUN_1488a74e0(longlong param_1)

{
  FUN_1486bda76(param_1 + 0x10);
  return;
}



// FUNCTION 1488a74ea FUN_1488a74ea body=29 status=ok
// SIG undefined FUN_1488a74ea(void)

undefined8 FUN_1488a74ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488a751a FUN_1488a751a body=119 status=ok
// SIG undefined FUN_1488a751a(void)

void FUN_1488a751a(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  FUN_148896610();
  if (-1 < (int)param_2) {
    uVar2 = *(uint *)(param_1 + 0x88);
    if ((int)param_2 <= (int)uVar2) {
      plVar1 = (longlong *)(param_1 + 0x80);
      *(uint *)(param_1 + 0x88) = uVar2 + 1;
      if (*(uint *)(param_1 + 0x8c) <= uVar2) {
        FUN_14475e4ac(plVar1);
      }
      uVar3 = (ulonglong)param_2;
      memmove((void *)(*plVar1 + uVar3 * 4 + 4),(void *)(*plVar1 + uVar3 * 4),
              (ulonglong)(uVar2 - param_2) << 2);
      *(undefined4 *)(*plVar1 + uVar3 * 4) = 0x3f800000;
    }
  }
  return;
}



// FUNCTION 1488a7592 FUN_1488a7592 body=117 status=ok
// SIG undefined FUN_1488a7592(void)

void FUN_1488a7592(longlong param_1,uint param_2)

{
  int iVar1;
  
  if ((-1 < (int)param_2) && (iVar1 = *(int *)(param_1 + 0x88), (int)param_2 < iVar1)) {
    if (~param_2 + iVar1 != 0) {
      memmove((void *)(*(longlong *)(param_1 + 0x80) + (ulonglong)param_2 * 4),
              (void *)(*(longlong *)(param_1 + 0x80) + (ulonglong)param_2 * 4 + 4),
              (longlong)(int)(~param_2 + iVar1) << 2);
      iVar1 = *(int *)(param_1 + 0x88);
    }
    *(int *)(param_1 + 0x88) = iVar1 + -1;
    FUN_1401fef06(param_1 + 0x80);
  }
  return;
}



// FUNCTION 1488a760c FUN_1488a760c body=47 status=ok
// SIG undefined FUN_1488a760c(void)

void FUN_1488a760c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb80c70);
  FUN_144983130(lVar1 + 8,param_1 + 0x80);
  return;
}



// FUNCTION 1488a763c FUN_1488a763c body=58 status=ok
// SIG undefined FUN_1488a763c(void)

void FUN_1488a763c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14889661a();
  lVar1 = *(longlong *)(param_1 + 0x48);
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80c70);
  FUN_144983130(lVar2 + 8,lVar1 + 0x80);
  return;
}



// FUNCTION 1488a767c FUN_1488a767c body=1153 status=ok
// SIG undefined FUN_1488a767c(void)

void FUN_1488a767c(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  longlong *local_88 [2];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  float local_54;
  undefined2 local_48;
  undefined1 local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb80c88) {
    FUN_144b3d300(&DAT_14cb80c88);
    if (DAT_14cb80c88 == -1) {
      FUN_1446f470e(&DAT_14cb80c80,L"Direction",1);
      _Init_thread_footer(&DAT_14cb80c88);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb80c94) {
    FUN_144b3d300(&DAT_14cb80c94);
    if (DAT_14cb80c94 == -1) {
      FUN_1446f470e(&DAT_14cb80c8c,L"Duration",1);
      _Init_thread_footer(&DAT_14cb80c94);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb80ca0) {
    FUN_144b3d300(&DAT_14cb80ca0);
    if (DAT_14cb80ca0 == -1) {
      FUN_1446f470e(&DAT_14cb80c98,L"Color",1);
      _Init_thread_footer(&DAT_14cb80ca0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb80cac) {
    FUN_144b3d300(&DAT_14cb80cac);
    if (DAT_14cb80cac == -1) {
      FUN_1446f470e(&DAT_14cb80ca4,L"Reason",1);
      _Init_thread_footer(&DAT_14cb80cac);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb80cb8) {
    FUN_144b3d300(&DAT_14cb80cb8);
    if (DAT_14cb80cb8 == -1) {
      FUN_1446f470e(&DAT_14cb80cb0,L"Priority",1);
      _Init_thread_footer(&DAT_14cb80cb8);
    }
  }
  uVar1 = *(undefined1 *)(param_1 + 0x80);
  uVar2 = FUN_1486d0cd4();
  FUN_1406f1d90(uVar2,local_88,uVar1);
  puVar3 = (undefined8 *)FUN_1447a1f4a(local_88);
  local_78 = (void *)0x0;
  local_70 = *(int *)(puVar3 + 1);
  lVar4 = (longlong)local_70;
  _Src = (void *)*puVar3;
  if (lVar4 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,_Src,lVar4 * 2);
  }
  FUN_1470ed5e8(&local_68,&local_78);
  lVar4 = FUN_1470e53c2(param_2,&DAT_14cb80c80);
  FUN_1403719a4(lVar4 + 8,&local_68);
  FUN_144a2da94(&local_68);
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  local_60 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(param_1 + 200) == 0) {
    local_60 = DAT_14cb80c78;
  }
  local_68 = 0;
  local_48 = 8;
  local_40 = 0x12;
  local_38 = 0x12;
  if ((DAT_14c9a9954 & 0x20) != 0) {
    local_38 = 0;
  }
  lVar4 = FUN_1470e53c2(param_2,&DAT_14cb80ca4);
  FUN_1403719a4(lVar4 + 8,&local_68);
  FUN_144a2da94(&local_68);
  if (*(char *)(param_1 + 0x80) != '\x02') {
    lVar4 = FUN_1470e53c2(param_2,&DAT_14cb80c8c);
    FUN_144983130(lVar4 + 8,param_1 + 0x88);
    local_60._0_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0xc2)];
    local_60._4_4_ = (&DAT_14c758c60)[*(byte *)(param_1 + 0xc1)];
    local_58 = (&DAT_14c758c60)[*(byte *)(param_1 + 0xc0)];
    local_54 = (float)*(byte *)(param_1 + 0xc3) * 0.003921569;
    local_68 = 0;
    local_48 = 0x10;
    local_40 = 0x18;
    local_38 = 0x18;
    if ((DAT_14c9aa014 & 0x20) != 0) {
      local_38 = 0;
    }
    lVar4 = FUN_1470e53c2(param_2,&DAT_14cb80c98);
    FUN_1403719a4(lVar4 + 8,&local_68);
    FUN_144a2da94(&local_68);
    local_68 = 0;
    local_48 = 4;
    local_60 = CONCAT44(local_60._4_4_,(uint)*(byte *)(param_1 + 0xc4));
    local_40 = 2;
    local_38 = (byte)~DAT_14c9a8754 >> 4 & 2;
    lVar4 = FUN_1470e53c2(param_2,&DAT_14cb80cb0);
    FUN_1403719a4(lVar4 + 8,&local_68);
    FUN_144a2da94(&local_68);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488a7afe FUN_1488a7afe body=170 status=ok
// SIG undefined FUN_1488a7afe(void)

void FUN_1488a7afe(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_38;
  undefined1 local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14889661a();
  local_50 = *(undefined4 *)(param_1 + 0x70);
  local_58 = 0;
  local_38 = 4;
  local_30 = 3;
  local_28 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  FUN_1446f470e(local_60,L"StopTime",1);
  lVar1 = FUN_1470e53c2(param_2,local_60);
  FUN_1403719a4(lVar1 + 8,&local_58);
  FUN_144a2da94(&local_58);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488a7baa FUN_1488a7baa body=611 status=ok
// SIG undefined FUN_1488a7baa(void)

void FUN_1488a7baa(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined2 *local_b0;
  int local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80cbc);
  FUN_144983130(lVar2 + 8,param_1 + 0x80);
  FUN_14044066a(&local_80,0x11,7);
  cVar1 = FUN_144a43716(param_1 + 0x88,&local_78);
  FUN_144a2da94(&local_80);
  if (cVar1 == '\0') {
    FUN_14883b14a(param_1 + 200,&local_90);
    puVar3 = &DAT_149dfb77a;
    if (local_88 != 0) {
      puVar3 = local_90;
    }
    FUN_1408226d0(param_1 + 0xb8,&local_a0,1);
    puVar4 = &DAT_149dfb77a;
    if (local_98 != 0) {
      puVar4 = local_a0;
    }
    FUN_140592d2e(param_1 + 0x88,&local_b0);
    puVar5 = &DAT_149dfb77a;
    if (local_a8 != 0) {
      puVar5 = local_b0;
    }
    local_b8 = puVar3;
    FUN_140002266(&local_80,L"%s\n%s -> %s",puVar5,puVar4);
    if ((longlong *)(param_2 + 8) == &local_80) {
      if (local_80 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_80;
      local_80 = 0;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)local_78;
      *(undefined4 *)(param_2 + 0x14) = local_78._4_4_;
      local_78 = 0;
    }
    if (local_b0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_90 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1408226d0(param_1 + 0xb8,&local_90,1);
  puVar3 = local_90;
  if (local_88 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_80,L"Change the \'%s\' Fact on the referenced actor.",puVar3);
  if ((longlong *)(param_2 + 0x18) == &local_80) {
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 0x18) = local_80;
    local_80 = 0;
    *(undefined4 *)(param_2 + 0x20) = (undefined4)local_78;
    *(undefined4 *)(param_2 + 0x24) = local_78._4_4_;
    local_78 = 0;
  }
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488a7e0e FUN_1488a7e0e body=236 status=ok
// SIG undefined FUN_1488a7e0e(void)

void FUN_1488a7e0e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined2 local_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0xb8) != 0) {
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      local_68 = 0;
      cVar1 = FUN_140c58c2c(*(longlong *)(param_1 + 8),param_1 + 0x80,&local_58,param_1 + 0xb8);
      if (cVar1 != '\0') {
        puVar2 = (undefined8 *)FUN_14889a422(param_2);
        *puVar2 = CONCAT44(uStack_54,CONCAT22(uStack_56,local_58));
        *(undefined4 *)(puVar2 + 1) = uStack_50;
        FUN_1447715ec(puVar2 + 2,&local_48);
        *(undefined1 *)(puVar2 + 7) = 0;
        FUN_140427366(param_1 + 200,puVar2 + 8);
      }
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488a7f08 FUN_1488a7f08 body=444 status=ok
// SIG undefined FUN_1488a7f08(void)

void FUN_1488a7f08(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined2 *local_b0;
  int local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80cc4);
  FUN_144983130(lVar2 + 8,param_1 + 0x80);
  FUN_14044066a(&local_80,0x11,7);
  cVar1 = FUN_144a43716(param_1 + 0x88,&local_78);
  FUN_144a2da94(&local_80);
  if (cVar1 == '\0') {
    FUN_140592d2e(param_1 + 0xd0,&local_90);
    puVar4 = &DAT_149dfb77a;
    if (local_88 != 0) {
      puVar4 = local_90;
    }
    FUN_1400021e4(param_1 + 0xb8,&local_a0);
    puVar3 = &DAT_149dfb77a;
    if (local_98 != 0) {
      puVar3 = local_a0;
    }
    FUN_140592d2e(param_1 + 0x88,&local_b0);
    puVar5 = &DAT_149dfb77a;
    if (local_a8 != 0) {
      puVar5 = local_b0;
    }
    local_b8 = puVar4;
    FUN_140002266(&local_80,L"%s\n%s -> %s",puVar5,puVar3);
    if ((longlong *)(param_2 + 8) == &local_80) {
      if (local_80 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_80;
      local_80 = 0;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)local_78;
      *(undefined4 *)(param_2 + 0x14) = local_78._4_4_;
      local_78 = 0;
    }
    if (local_b0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_90 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488a80c6 FUN_1488a80c6 body=427 status=ok
// SIG undefined FUN_1488a80c6(void)

void FUN_1488a80c6(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 ***pppuVar7;
  ulonglong uVar8;
  undefined8 *_Src;
  undefined1 auStack_78 [32];
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if ((*(char *)(lVar2 + 0x100) == '\x01') && (*(char *)(param_1 + 0xa0) == '\x01')) {
    plVar4 = (longlong *)FUN_14479d2ce(param_1 + 0x70);
    if (plVar4 != (longlong *)0x0) {
      uVar5 = FUN_144a7fd54();
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar5);
      if (plVar4 != (longlong *)0x0) {
        uVar5 = FUN_144a7fd54();
        plVar6 = (longlong *)FUN_144718840(plVar4,uVar5);
        if (plVar6 != (longlong *)0x0 && plVar4 != plVar6) {
          uVar5 = (**(code **)(*plVar6 + 0x28))(plVar6);
          local_40 = 0;
          if (*(char *)(param_1 + 0xa0) == '\x01') {
            _Src = (undefined8 *)(param_1 + 0x78);
            bVar1 = *(byte *)(param_1 + 0x98);
            local_40 = *(ushort *)(param_1 + 0x90);
            if (local_40 < 0x19) {
              pppuVar7 = local_58;
            }
            else {
              pppuVar7 = (undefined8 ***)FUN_14001cc68(local_40,0);
              _Src = (undefined8 *)*_Src;
              local_58[0] = pppuVar7;
            }
            uVar8 = (ulonglong)((uint)bVar1 * 0x120);
            pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + uVar8);
            if (pcVar3 == (code *)0x0) {
              memcpy(pppuVar7,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
            }
            else {
              (*pcVar3)(pppuVar7,_Src);
            }
            local_38 = *(byte *)(param_1 + 0x98);
          }
          else {
            local_38 = 0;
          }
          FUN_140af060e(uVar5,lVar2 + 0xb8,local_58);
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
          if (pcVar3 != (code *)0x0) {
            pppuVar7 = local_58;
            if (0x18 < local_40) {
              pppuVar7 = (undefined8 ***)local_58[0];
            }
            (*pcVar3)(pppuVar7);
          }
          if (0x18 < local_40) {
            FUN_1400020a8(local_58[0]);
          }
        }
      }
    }
  }
  FUN_141646d70(param_1);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488a8278 FUN_1488a8278 body=694 status=ok
// SIG undefined FUN_1488a8278(void)

void FUN_1488a8278(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined8 ***pppuVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  longlong local_c8;
  undefined1 local_c0;
  undefined7 uStack_bf;
  int local_b8;
  undefined4 local_98;
  undefined8 **local_90 [3];
  ushort local_78;
  byte local_70;
  undefined2 local_68;
  undefined2 uStack_66;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(char *)(param_1 + 0x100) != '\0') ||
     (*(undefined8 ****)(param_1 + 0xb8) == (undefined8 ***)0x0)) goto LAB_1488a833c;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_90[0] = *(undefined8 ****)(param_1 + 0xb8);
  FUN_1401533ba(&local_c0,local_90,1);
  if (*(longlong *)(param_1 + 8) != 0) {
    local_d8 = 0;
    cVar3 = FUN_140c58c2c(*(longlong *)(param_1 + 8),param_1 + 0x80,&local_68,&local_c0);
    if (cVar3 != '\0') {
      local_c0 = 0;
      local_98 = 0;
      FUN_14575a19a(&local_c0,0);
      FUN_1447c3578(param_1 + 200,local_90,&local_c0);
      FUN_144a5ac3a(&local_c0);
      bVar1 = *(byte *)(param_1 + 0xf0);
      if (bVar1 < 3) {
        if (bVar1 == 1) {
          uVar4 = FUN_144a7fca4(local_90);
          FUN_1411bee87(&local_c0,uVar4);
LAB_1488a84cb:
          lVar8 = CONCAT71(uStack_bf,local_c0);
          goto LAB_1488a8453;
        }
        if (bVar1 == 2) {
          uVar4 = FUN_1405d5f74(local_90);
          FUN_140002266(&local_c0,&DAT_149e063bc,uVar4);
          goto LAB_1488a841a;
        }
      }
      else {
        if (bVar1 != 3) {
          if (bVar1 != 0x12) goto LAB_1488a845c;
          FUN_1457d43e4(local_90,&local_c0);
          goto LAB_1488a84cb;
        }
        fVar9 = (float)FUN_144a7ecd0(local_90);
        FUN_140002266(&local_c0,L"%.2f",(double)fVar9);
LAB_1488a841a:
        if (local_b8 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        else {
          puVar6 = (undefined2 *)CONCAT71(uStack_bf,local_c0);
        }
        FUN_1446f470e(&local_c8,puVar6,1);
        lVar8 = local_c8;
        if (CONCAT71(uStack_bf,local_c0) != 0) {
          FUN_1400020a8();
        }
LAB_1488a8453:
        if (lVar8 != 0) {
          puVar5 = (undefined8 *)FUN_14889a422(param_2);
          *puVar5 = CONCAT44(uStack_64,CONCAT22(uStack_66,local_68));
          *(undefined4 *)(puVar5 + 1) = uStack_60;
          FUN_1447715ec(puVar5 + 2,&local_58);
          *(undefined1 *)(puVar5 + 7) = 0;
          *(undefined1 *)(puVar5 + 8) = 0;
          *(longlong *)((longlong)puVar5 + 0x44) = lVar8;
          FUN_140641d04(puVar5 + 8);
        }
      }
LAB_1488a845c:
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_70 * 0x120));
      if (pcVar2 != (code *)0x0) {
        pppuVar7 = local_90;
        if (0x18 < local_78) {
          pppuVar7 = (undefined8 ***)local_90[0];
        }
        (*pcVar2)(pppuVar7);
      }
      if (0x18 < local_78) {
        FUN_1400020a8(local_90[0]);
      }
    }
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
LAB_1488a833c:
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488a8530 FUN_1488a8530 body=307 status=ok
// SIG undefined FUN_1488a8530(void)

void FUN_1488a8530(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14883b1da(param_1 + 0x80,&local_38);
  if ((longlong *)(param_2 + 8) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 8) = local_38;
    local_38 = 0;
    *(undefined4 *)(param_2 + 0x10) = (undefined4)local_30;
    *(undefined4 *)(param_2 + 0x14) = local_30._4_4_;
  }
  FUN_140b126e4(param_1 + 0x80,&local_48);
  puVar1 = local_48;
  if (local_40 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_38,L"Changes the \'%s\' Fact.",puVar1);
  if ((longlong *)(param_2 + 0x18) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 0x18) = local_38;
    local_38 = 0;
    *(undefined4 *)(param_2 + 0x20) = (undefined4)local_30;
    *(undefined4 *)(param_2 + 0x24) = local_30._4_4_;
    local_30 = 0;
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488a8664 FUN_1488a8664 body=206 status=ok
// SIG undefined FUN_1488a8664(void)

void FUN_1488a8664(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  
  cVar4 = FUN_140114204((undefined8 *)(param_1 + 0x80));
  if (cVar4 != '\0') {
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
      FUN_1488a6598(param_2,iVar2);
    }
    lVar3 = *param_2;
    puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x70);
    *(undefined2 *)puVar1 = 0;
    *(undefined8 *)((longlong)puVar1 + 4) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 0x88);
    *puVar1 = *(undefined8 *)(param_1 + 0x80);
    FUN_1447715ec(puVar1 + 2,param_1 + 0x90);
    *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(param_1 + 0xb8);
    FUN_1406df492(lVar3 + (longlong)iVar2 * 0x70 + 0x40,param_1 + 0xc0);
    return;
  }
  return;
}



// FUNCTION 1488a8744 FUN_1488a8744 body=466 status=ok
// SIG undefined FUN_1488a8744(void)

void FUN_1488a8744(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  longlong local_78;
  undefined8 local_70;
  undefined2 local_58;
  undefined1 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80cd8);
  FUN_144983130(lVar2 + 8,param_1 + 0x80);
  local_70 = *(undefined8 *)(param_1 + 0xb8);
  local_78 = 0;
  local_58 = 8;
  local_50 = 0x12;
  local_48 = 0x12;
  if ((DAT_14c9a9954 & 0x20) != 0) {
    local_48 = 0;
  }
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80ce0);
  FUN_1403719a4(lVar2 + 8,&local_78);
  FUN_144a2da94(&local_78);
  FUN_14044066a(&local_78,0x11,7);
  cVar1 = FUN_144a43716(param_1 + 0x88,&local_70);
  FUN_144a2da94(&local_78);
  if (cVar1 == '\0') {
    FUN_1400021e4(param_1 + 0xb8,&local_88);
    puVar3 = &DAT_149dfb77a;
    if (local_80 != 0) {
      puVar3 = local_88;
    }
    FUN_140592d2e(param_1 + 0x88,&local_98);
    puVar4 = &DAT_149dfb77a;
    if (local_90 != 0) {
      puVar4 = local_98;
    }
    FUN_140002266(&local_78,L"Setting %s Stance To %s",puVar4,puVar3);
    if ((longlong *)(param_2 + 8) == &local_78) {
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_78;
      local_78 = 0;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)local_70;
      *(undefined4 *)(param_2 + 0x14) = local_70._4_4_;
      local_70 = 0;
    }
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488a8918 FUN_1488a8918 body=48 status=ok
// SIG undefined FUN_1488a8918(void)

void FUN_1488a8918(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b40d97c);
  FUN_1406f8a8a(param_1,param_2);
  return;
}



// FUNCTION 1488a8948 FUN_1488a8948 body=51 status=ok
// SIG undefined FUN_1488a8948(void)

void FUN_1488a8948(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    iVar1 = FUN_1448332aa(param_2,&DAT_14b40d97c);
    if (iVar1 < 0) {
      *(undefined2 *)(param_1 + 200) = 0;
    }
  }
  return;
}



// FUNCTION 1488a8982 FUN_1488a8982 body=77 status=ok
// SIG undefined FUN_1488a8982(void)

void FUN_1488a8982(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_14167b620();
  if (*(longlong *)(param_1 + 0x78) != 0) {
    uVar1 = FUN_14479d2ce(param_1 + 0x70);
    lVar2 = FUN_14152bd28(uVar1);
    if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x78) != 0)) {
      FUN_14480f766(lVar2 + 0x60);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1488a89d0 FUN_1488a89d0 body=146 status=ok
// SIG undefined FUN_1488a89d0(void)

void FUN_1488a89d0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141646d70();
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 200) == '\x01') {
    uVar2 = FUN_14479d2ce(param_1 + 0x70);
    lVar3 = FUN_14152bd28(uVar2);
    if (lVar3 != 0) {
      if (0 < *(int *)(lVar3 + 0x230)) {
        local_20 = lVar1 + 0xc0;
        FUN_140b042ce(lVar3 + 0x1a8);
      }
      FUN_14483674a(lVar3);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488a8a6a FUN_1488a8a6a body=298 status=ok
// SIG undefined FUN_1488a8a6a(void)

void FUN_1488a8a6a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(char *)(param_1 + 0xd0) == '\0') && (*(longlong *)(param_1 + 0xb8) != 0)) &&
     (*(int *)(param_1 + 0xc0) - 1U < 0xfffffffe)) {
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      local_78 = 0;
      cVar1 = FUN_140c58c2c(*(longlong *)(param_1 + 8),param_1 + 0x80,&local_58,&DAT_14cb246b0);
      if (cVar1 != '\0') {
        puVar2 = (undefined8 *)FUN_14889a422(param_2);
        *puVar2 = CONCAT44(uStack_54,CONCAT22(uStack_56,local_58));
        *(undefined4 *)(puVar2 + 1) = uStack_50;
        FUN_1447715ec(puVar2 + 2,&local_48);
        *(undefined1 *)(puVar2 + 7) = 0;
        local_70 = *(undefined8 *)(param_1 + 0xb8);
        local_68 = *(undefined4 *)(param_1 + 0xc0);
        local_60 = 0;
        FUN_14883afb8(puVar2 + 8);
      }
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488a8b96 FUN_1488a8b96 body=388 status=ok
// SIG undefined FUN_1488a8b96(void)

void FUN_1488a8b96(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_c8 [40];
  undefined2 *local_a0;
  int local_98;
  undefined8 local_90;
  undefined2 *local_88;
  int local_80;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80cf8);
  FUN_144983130(lVar2 + 8,param_1 + 0x80);
  FUN_14044066a(&local_78,0x11,7);
  cVar1 = FUN_144a43716(param_1 + 0x88,&local_70);
  FUN_144a2da94(&local_78);
  if (cVar1 == '\0') {
    local_90 = *(undefined8 *)(param_1 + 0xb8);
    FUN_1400021e4(&local_90,&local_88);
    puVar3 = &DAT_149dfb77a;
    if (local_80 != 0) {
      puVar3 = local_88;
    }
    FUN_140592d2e(param_1 + 0x88,&local_a0);
    puVar4 = &DAT_149dfb77a;
    if (local_98 != 0) {
      puVar4 = local_a0;
    }
    FUN_140002266(&local_78,L"%s\nTeam -> %s",puVar4,puVar3);
    if ((longlong *)(param_2 + 8) == &local_78) {
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_78;
      local_78 = 0;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)local_70;
      *(undefined4 *)(param_2 + 0x14) = local_70._4_4_;
      local_70 = 0;
    }
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488a8d1c FUN_1488a8d1c body=131 status=ok
// SIG undefined FUN_1488a8d1c(void)

void FUN_1488a8d1c(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0xd0) == '\x01') {
    plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x70);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = FUN_1449d6ade();
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
      if (plVar1 != (longlong *)0x0) {
        uVar2 = FUN_1449d6ade();
        plVar3 = (longlong *)FUN_144718840(plVar1,uVar2);
        if (plVar3 != (longlong *)0x0 && plVar1 != plVar3) {
          uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
          FUN_14582b566(uVar2);
        }
      }
    }
  }
  FUN_141646d70(param_1);
  return;
}



// FUNCTION 1488a8da6 FUN_1488a8da6 body=288 status=ok
// SIG undefined FUN_1488a8da6(void)

void FUN_1488a8da6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined2 local_40;
  undefined1 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 0;
  uStack_58 = 0;
  local_40 = 8;
  FUN_14485c47a(&uStack_58,*(undefined8 *)(param_1 + 0x80));
  local_38 = 6;
  local_30 = 6;
  if ((DAT_14c9a8bd4 & 0x20) != 0) {
    local_30 = 0;
  }
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb80d08);
  FUN_1403719a4(lVar1 + 8,&local_60);
  FUN_144a2da94(&local_60);
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb80d00);
  FUN_144983130(lVar1 + 8,param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    local_68 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x18);
    FUN_1400021e4(&local_68,&local_60);
    if ((longlong *)(param_2 + 8) == &local_60) {
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_60;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)uStack_58;
      *(undefined4 *)(param_2 + 0x14) = uStack_58._4_4_;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488a8ecc FUN_1488a8ecc body=189 status=ok
// SIG undefined FUN_1488a8ecc(void)

void FUN_1488a8ecc(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  FUN_14889661a();
  if (*(char *)(param_1 + 0x50) == '\x02') {
    uVar3 = FUN_14479d2ce(param_1 + 0x70);
    lVar4 = FUN_1470e53c2(param_2,&DAT_14cb80d00);
    puVar1 = (undefined8 *)(lVar4 + 0x40);
    if (*(byte *)(lVar4 + 0x60) == 7) {
      FUN_14485c47a(puVar1,uVar3);
      return;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar4 + 0x60) * 0x120));
    if (pcVar2 != (code *)0x0) {
      puVar5 = puVar1;
      if (0x18 < *(ushort *)(lVar4 + 0x58)) {
        puVar5 = *(undefined8 **)(lVar4 + 0x40);
      }
      (*pcVar2)(puVar5);
    }
    if (0x18 < *(ushort *)(lVar4 + 0x58)) {
      FUN_1400020a8(*puVar1);
    }
    *(undefined2 *)(lVar4 + 0x58) = 8;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    FUN_14485c47a(puVar1,uVar3);
    *(undefined1 *)(lVar4 + 0x60) = 7;
  }
  return;
}



// FUNCTION 1488a8f8a FUN_1488a8f8a body=917 status=ok
// SIG undefined FUN_1488a8f8a(void)

void FUN_1488a8f8a(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 ***pppuVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 local_149;
  uint local_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  undefined4 local_120;
  undefined8 **local_110;
  longlong *local_108;
  ushort local_f8;
  byte local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong local_a8;
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar7 = FUN_1405f939e();
  lVar8 = FUN_14479d2ce(param_1 + 0x70);
  if (lVar7 != 0 && lVar8 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    lVar9 = FUN_144a545f2(lVar8,*(undefined8 *)(lVar2 + 0xf8),0);
    if (lVar9 != 0) {
      puVar10 = (uint *)&DAT_14c846480;
      if (*(longlong *)(lVar8 + 0x1c8) != 0) {
        puVar10 = (uint *)(*(longlong *)(lVar8 + 0x1c8) + 0x240);
      }
      local_148 = *puVar10;
      uStack_144 = puVar10[1];
      uStack_140 = puVar10[2];
      uStack_13c = puVar10[3];
      local_138 = puVar10[4];
      uStack_134 = puVar10[5];
      uStack_130 = puVar10[6];
      uStack_12c = puVar10[7];
      uVar4 = *(undefined8 *)(puVar10 + 8);
      uVar5 = *(undefined8 *)(puVar10 + 10);
      uVar11 = *(undefined8 *)(puVar10 + 0xc);
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_b8 = 0x800000100;
      local_a8 = 0;
      local_98 = (longlong *)0x0;
      FUN_1448052ee(&local_148,&local_110);
      local_168 = uVar4;
      uStack_160 = uVar5;
      local_158 = uVar11;
      uVar11 = FUN_145a82b82();
      local_1d8 = &local_e8;
      uVar11 = FUN_141137228(lVar7,uVar11,&local_168,&local_110);
      lVar7 = param_1 + 0x78;
      FUN_14485c47a(lVar7,uVar11);
      cVar6 = FUN_144729dda(lVar7);
      if (cVar6 != '\0') {
        uVar11 = FUN_14479d2ce(lVar7);
        FUN_148832822(uVar11,*(undefined8 *)(lVar2 + 0x80),lVar2 + 0x148);
        uVar11 = FUN_14479d2ce(lVar7);
        FUN_1478b82cc(uVar11,lVar9,&DAT_14cadada0,*(undefined8 *)(lVar2 + 0xf8));
        uVar11 = FUN_14479d2ce(lVar7);
        local_188 = *(undefined4 *)(lVar2 + 0x100);
        uStack_184 = *(undefined4 *)(lVar2 + 0x104);
        uStack_180 = *(undefined4 *)(lVar2 + 0x108);
        uStack_17c = *(undefined4 *)(lVar2 + 0x10c);
        local_178 = *(undefined8 *)(lVar2 + 0x110);
        local_1d8 = (undefined8 *)((ulonglong)local_1d8 & 0xffffffffffffff00);
        FUN_14639e34e(uVar11,&local_188,0,0);
        uVar11 = FUN_14479d2ce(lVar7);
        local_1a8 = *(undefined4 *)(lVar2 + 0x118);
        uStack_1a4 = *(undefined4 *)(lVar2 + 0x11c);
        uStack_1a0 = *(undefined4 *)(lVar2 + 0x120);
        uStack_19c = *(undefined4 *)(lVar2 + 0x124);
        local_198 = *(undefined8 *)(lVar2 + 0x128);
        local_1d8 = (undefined8 *)((ulonglong)local_1d8 & 0xffffffffffffff00);
        FUN_1478c12fc(uVar11,&local_1a8,0,0);
        uVar11 = FUN_14479d2ce(lVar7);
        local_1c8 = *(undefined4 *)(lVar2 + 0x130);
        uStack_1c4 = *(undefined4 *)(lVar2 + 0x134);
        uStack_1c0 = *(undefined4 *)(lVar2 + 0x138);
        uStack_1bc = *(undefined4 *)(lVar2 + 0x13c);
        local_1b8 = *(undefined8 *)(lVar2 + 0x140);
        FUN_140aff5e4(uVar11);
        uVar11 = FUN_14479d2ce(lVar7);
        FUN_148832656(uVar11);
        fVar14 = (float)FUN_141236616(param_1);
        local_149 = 2;
        local_168 = FUN_144a7be76(param_1);
        FUN_144a7bec8(param_1,&local_110);
        local_148 = local_148 & 0xffffff00;
        local_120 = 0;
        FUN_144a7bf34(&local_148,&local_110,&local_168,&local_149);
        if (local_108 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_108 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_108 + 0x10))();
          }
        }
        FUN_1447c3578(lVar2 + 0x88,&local_110,&local_148);
        fVar15 = (float)FUN_144a7ecd0(&local_110);
        *(float *)(param_1 + 0x80) = fVar14 + fVar15;
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f0 * 0x120));
        if (pcVar3 != (code *)0x0) {
          pppuVar13 = &local_110;
          if (0x18 < local_f8) {
            pppuVar13 = (undefined8 ***)local_110;
          }
          (*pcVar3)(pppuVar13);
        }
        if (0x18 < local_f8) {
          FUN_1400020a8(local_110);
        }
        FUN_144a5ac3a(&local_148);
      }
      if (local_a8 != 0) {
        plVar12 = local_98;
        if (local_98 == (longlong *)0x0) {
          plVar12 = local_88;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488a9320 FUN_1488a9320 body=63 status=ok
// SIG undefined FUN_1488a9320(void)

void FUN_1488a9320(longlong param_1)

{
  float fVar1;
  
  if ((*(char *)(param_1 + 0x68) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) == '\0')) {
    fVar1 = (float)FUN_141236616(param_1);
    if (fVar1 < *(float *)(param_1 + 0x80)) {
      return;
    }
  }
  FUN_14097c15a(param_1);
  return;
}



// FUNCTION 1488a9360 FUN_1488a9360 body=57 status=ok
// SIG undefined FUN_1488a9360(void)

void FUN_1488a9360(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  FUN_14167b620();
  cVar2 = FUN_144729dda(param_1 + 0x78);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x78);
    FUN_1488329b6(uVar1);
    return;
  }
  return;
}



// FUNCTION 1488a93b2 FUN_1488a93b2 body=384 status=ok
// SIG undefined FUN_1488a93b2(void)

void FUN_1488a93b2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x80) == 0) goto LAB_1488a94f4;
  lVar4 = *(longlong *)(param_1 + 0x90);
  if (lVar4 == 0) {
    uVar3 = FUN_14012344a();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x90) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x98) == 0) {
    if ((lVar4 == 0) || (*(longlong *)(param_1 + 0x88) == 0)) goto LAB_1488a94f4;
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      *(undefined8 *)(param_1 + 0x98) = 0;
      goto LAB_1488a94f4;
    }
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x88));
    *(longlong *)(param_1 + 0x98) = lVar4;
    if (lVar4 == 0) goto LAB_1488a94f4;
  }
  FUN_1400021e4(param_1 + 0x80,&local_48);
  puVar5 = local_48;
  if (local_40 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_38,L"Loop: %s",puVar5);
  if ((longlong *)(param_2 + 8) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 8) = local_38;
    local_38 = 0;
    *(undefined4 *)(param_2 + 0x10) = (undefined4)local_30;
    *(undefined4 *)(param_2 + 0x14) = local_30._4_4_;
    local_30 = 0;
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1488a94f4:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488a9534 FUN_1488a9534 body=104 status=ok
// SIG undefined FUN_1488a9534(void)

void FUN_1488a9534(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x68) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) == '\0')) {
    lVar1 = *(longlong *)(param_1 + 0x48);
    lVar3 = FUN_1405f939e(param_1);
    if (lVar3 != 0) {
      lVar3 = FUN_140115352(lVar3);
      if (lVar3 != 0) {
        cVar2 = FUN_1488a959c(lVar3 + 0xf8,lVar1 + 0x80);
        if (cVar2 != '\0') {
          return;
        }
      }
    }
  }
  FUN_14097c15a(param_1);
  return;
}



// FUNCTION 1488a959c FUN_1488a959c body=135 status=ok
// SIG undefined FUN_1488a959c(void)

undefined8 FUN_1488a959c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar3 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        bVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar6 * 0x60) == lVar1;
        uVar4 = CONCAT71((int7)(int3)((uint)iVar6 >> 8),bVar7);
        if (bVar7) {
          return uVar4;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x60 + *(longlong *)(param_1 + 8) + 0x58);
      } while (iVar6 != -1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1488a9624 FUN_1488a9624 body=68 status=ok
// SIG undefined FUN_1488a9624(void)

void FUN_1488a9624(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1405f939e();
  if (lVar1 != 0) {
    lVar1 = FUN_140115352(lVar1);
    if (lVar1 != 0) {
      FUN_14887fa86(lVar1 + 0xf8,*(longlong *)(param_1 + 0x48) + 0x80);
    }
  }
  FUN_14167b620(param_1);
  return;
}



// FUNCTION 1488a966e FUN_1488a966e body=200 status=ok
// SIG undefined FUN_1488a966e(void)

void FUN_1488a966e(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(param_1 + 0x80,&local_38);
  puVar1 = local_38;
  if (local_30 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_28,L"Stop Loop \'%s\'",puVar1);
  if ((longlong *)(param_2 + 8) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 8) = local_28;
    local_28 = 0;
    *(undefined4 *)(param_2 + 0x10) = (undefined4)local_20;
    *(undefined4 *)(param_2 + 0x14) = local_20._4_4_;
    local_20 = 0;
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488a973e FUN_1488a973e body=451 status=ok
// SIG undefined FUN_1488a973e(void)

void FUN_1488a973e(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  int local_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined8 local_70;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80d10);
  FUN_144983130(lVar2 + 8,param_1 + 0x80);
  FUN_1489a5ae0(param_1 + 0xb8,local_88);
  FUN_1470ed5e8(&local_78,local_88);
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80d18);
  FUN_1403719a4(lVar2 + 8,&local_78);
  FUN_144a2da94(&local_78);
  FUN_14044066a(&local_78,0x11,7);
  cVar1 = FUN_144a43716(param_1 + 0x88,&local_70);
  FUN_144a2da94(&local_78);
  if (cVar1 == '\0') {
    FUN_1489a5ae0(param_1 + 0xb8,&local_98);
    puVar3 = &DAT_149dfb77a;
    if (local_90 != 0) {
      puVar3 = local_98;
    }
    FUN_140592d2e(param_1 + 0x88,&local_a8);
    puVar4 = &DAT_149dfb77a;
    if (local_a0 != 0) {
      puVar4 = local_a8;
    }
    FUN_140002266(&local_78,L"%s: %s",puVar4,puVar3);
    if ((longlong *)(param_2 + 8) == &local_78) {
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_78;
      local_78 = 0;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)local_70;
      *(undefined4 *)(param_2 + 0x14) = local_70._4_4_;
      local_70 = 0;
    }
    if (local_a8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488a9902 FUN_1488a9902 body=505 status=ok
// SIG undefined FUN_1488a9902(void)

void FUN_1488a9902(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x48);
  lVar5 = FUN_14479d2ce(param_1 + 0x70);
  if (lVar5 == 0) goto LAB_1488a9981;
  uVar6 = FUN_1407ca880();
  plVar7 = (longlong *)FUN_144718840(lVar5,uVar6);
  if (plVar7 == (longlong *)0x0) goto LAB_1488a9981;
  uVar6 = FUN_14479d2ce(param_1 + 0x70);
  uVar6 = FUN_140963804(lVar4 + 0xb8,uVar6);
  if (*(char *)(lVar4 + 0xd0) == '\0') {
    uVar8 = (**(code **)(*plVar7 + 0x50))(plVar7);
    FUN_1489a6964(uVar8,&local_40,uVar6);
    if (local_40 == 0) {
LAB_1488a9a18:
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_38 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar1 = (int *)((longlong)local_38 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_38 + 0x10))(local_38);
          }
        }
      }
    }
    else {
      lVar5 = *(longlong *)(local_40 + 0x30);
      lVar9 = FUN_140ed0e8c();
      plVar10 = local_38;
      lVar5 = *(longlong *)(lVar5 + 0x10);
      iVar3 = *(int *)(lVar9 + 0x38);
      if ((*(int *)(lVar5 + 0x38) < iVar3) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) != lVar9 + 0x30)) {
        lVar5 = *(longlong *)(local_40 + 0x30);
        lVar9 = FUN_140bb554a();
        plVar10 = local_38;
        lVar5 = *(longlong *)(lVar5 + 0x10);
        iVar3 = *(int *)(lVar9 + 0x38);
        if ((*(int *)(lVar5 + 0x38) < iVar3) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) != lVar9 + 0x30))
        goto LAB_1488a9a18;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
        }
        bVar11 = local_40 != 0;
        if (bVar11) {
          FUN_14892a78c(local_40,CONCAT71((int7)(int3)((uint)iVar3 >> 8),
                                          *(undefined1 *)(lVar4 + 0xd2)));
        }
      }
      else {
        if (local_38 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
        }
        bVar11 = local_40 != 0;
        if (bVar11) {
          FUN_1410c9a0e(local_40,CONCAT71((int7)(int3)((uint)iVar3 >> 8),
                                          *(undefined1 *)(lVar4 + 0xd1)));
        }
      }
      if (plVar10 != (longlong *)0x0) {
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
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_38 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar1 = (int *)((longlong)local_38 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_38 + 0x10))(local_38);
          }
        }
      }
      if (bVar11) goto LAB_1488a9981;
    }
  }
  (**(code **)(*plVar7 + 0x28))(plVar7,uVar6);
LAB_1488a9981:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488a9afc FUN_1488a9afc body=144 status=ok
// SIG undefined FUN_1488a9afc(void)

void FUN_1488a9afc(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x70);
  if (lVar2 != 0) {
    uVar3 = FUN_1407ca880();
    plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
      uVar3 = FUN_14479d2ce(param_1 + 0x70);
      lVar2 = FUN_140963804(lVar2 + 0xb8,uVar3);
      if (lVar2 != 0) {
        uVar3 = (**(code **)(*plVar4 + 0x50))(plVar4);
        cVar1 = FUN_143e50aa0(uVar3,lVar2);
        if (cVar1 != '\0') {
          return;
        }
      }
    }
  }
  FUN_14097c15a(param_1);
  return;
}



// FUNCTION 1488a9b92 FUN_1488a9b92 body=412 status=ok
// SIG undefined FUN_1488a9b92(void)

void FUN_1488a9b92(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80d60);
  FUN_144983130(lVar2 + 8,param_1 + 0x80);
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80d68);
  FUN_144983130(lVar2 + 8,param_1 + 0xb8);
  FUN_14044066a(&local_78,0x11,7);
  cVar1 = FUN_144a43716(param_1 + 0x88,&local_70);
  FUN_144a2da94(&local_78);
  if (cVar1 == '\0') {
    FUN_140592d2e(param_1 + 0xc0,&local_88);
    puVar3 = &DAT_149dfb77a;
    if (local_80 != 0) {
      puVar3 = local_88;
    }
    FUN_140592d2e(param_1 + 0x88,&local_98);
    puVar4 = &DAT_149dfb77a;
    if (local_90 != 0) {
      puVar4 = local_98;
    }
    FUN_140002266(&local_78,L"%s -> %s",puVar4,puVar3);
    if ((longlong *)(param_2 + 8) == &local_78) {
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_78;
      local_78 = 0;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)local_70;
      *(undefined4 *)(param_2 + 0x14) = local_70._4_4_;
      local_70 = 0;
    }
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488a9d30 FUN_1488a9d30 body=244 status=ok
// SIG undefined FUN_1488a9d30(void)

void FUN_1488a9d30(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined2 local_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_68 = 0;
    cVar1 = FUN_140c58c2c(*(longlong *)(param_1 + 8),param_1 + 0xb8,&local_50,&DAT_14cb7bde0);
    if (cVar1 != '\0') {
      puVar2 = (undefined8 *)FUN_14889a422(param_2);
      *puVar2 = CONCAT44(uStack_4c,CONCAT22(uStack_4e,local_50));
      *(undefined4 *)(puVar2 + 1) = uStack_48;
      FUN_1447715ec(puVar2 + 2,&local_40);
      *(undefined1 *)(puVar2 + 7) = 0;
      local_60 = 1;
      local_54 = 1;
      local_5c = DAT_14cb7c588;
      FUN_140641b42(puVar2 + 8);
    }
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488a9e2c FUN_1488a9e2c body=102 status=ok
// SIG undefined FUN_1488a9e2c(void)

void FUN_1488a9e2c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14048be4a();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488a9e94 FUN_1488a9e94 body=67 status=ok
// SIG undefined FUN_1488a9e94(void)

void FUN_1488a9e94(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0xb0);
  if (lVar1 == param_2) {
    lVar1 = FUN_14479d2ce(param_1 + 0xa8);
    if (lVar1 == param_3) {
      *(undefined1 *)(param_1 + 0xb8) = 1;
    }
  }
  return;
}



// FUNCTION 1488a9ed8 FUN_1488a9ed8 body=70 status=ok
// SIG undefined FUN_1488a9ed8(void)

void FUN_1488a9ed8(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = FUN_14479d2ce(param_1 + 0xb0);
  if (lVar3 != 0) {
    uVar1 = FUN_14479d2ce(param_1 + 0xa8);
    cVar2 = FUN_1402b80e4(lVar3,uVar1);
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 0xb8) = 1;
    }
  }
  return;
}



// FUNCTION 1488a9f24 FUN_1488a9f24 body=397 status=ok
// SIG undefined FUN_1488a9f24(void)

void FUN_1488a9f24(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0x88);
  if (lVar5 == 0) {
    uVar4 = FUN_1407ad36c();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x88) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x80);
  lVar6 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x90) == 0) {
    if (lVar5 == 0 || lVar6 == 0) goto LAB_1488a9f8a;
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 != '\0') {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,plVar1);
        *(longlong *)(param_1 + 0x90) = lVar5;
        if (lVar5 == 0) goto LAB_1488a9f8a;
        lVar6 = *plVar1;
        goto LAB_1488a9ff5;
      }
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  else {
LAB_1488a9ff5:
    local_68 = lVar6;
    FUN_1400021e4(&local_68,&local_60);
    if ((longlong *)(param_2 + 8) == &local_60) {
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_60;
      local_60 = 0;
      *(undefined4 *)(param_2 + 0x10) = local_58;
      *(undefined4 *)(param_2 + 0x14) = local_54;
    }
    local_68 = *plVar1;
    FUN_1400021e4(&local_68,local_78);
    FUN_1470ed5e8(&local_60,local_78);
    lVar5 = FUN_1470e53c2(param_2,&DAT_14cb80d70);
    FUN_1403719a4(lVar5 + 8,&local_60);
    FUN_144a2da94(&local_60);
  }
LAB_1488a9f8a:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488aa0b2 FUN_1488aa0b2 body=2459 status=ok
// SIG undefined FUN_1488aa0b2(void)

void FUN_1488aa0b2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  uint uVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 ****ppppuVar16;
  uint uVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong *plVar21;
  int iVar22;
  undefined4 uVar23;
  undefined1 auStack_518 [40];
  longlong *local_4f0;
  longlong local_4e8;
  longlong local_4e0;
  longlong *local_4d8;
  undefined8 local_4d0;
  longlong local_4c8;
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined8 local_4b0;
  undefined8 ***local_4a8;
  longlong *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  ulonglong uStack_488;
  undefined8 local_480;
  undefined4 uStack_478;
  undefined4 uStack_474;
  uint local_470;
  undefined8 uStack_46c;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined4 local_430;
  undefined2 local_42c;
  undefined1 local_42a;
  undefined4 local_429;
  undefined8 ***local_420 [3];
  ushort local_408;
  byte local_400;
  undefined1 local_3f8;
  undefined7 uStack_3f7;
  undefined4 local_3f0;
  undefined1 local_3e8 [8];
  ushort local_3e0;
  byte local_3d8;
  longlong local_3d0;
  undefined8 local_3c0 [7];
  undefined1 local_388 [40];
  undefined4 local_360;
  undefined1 local_358 [4];
  undefined8 local_354;
  undefined8 local_34c;
  undefined1 local_340 [704];
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_518;
  lVar3 = *(longlong *)(param_1 + 0x48);
  lVar13 = *(longlong *)(lVar3 + 0x88);
  if (lVar13 == 0) {
    uVar12 = FUN_1407ad36c();
    lVar13 = FUN_14477b664(uVar12);
    *(longlong *)(lVar3 + 0x88) = lVar13;
  }
  plVar2 = (longlong *)(lVar3 + 0x80);
  if (*(longlong *)(lVar3 + 0x90) == 0) {
    if ((lVar13 == 0) || (*plVar2 == 0)) goto LAB_1488aa306;
    plVar20 = *(longlong **)(lVar13 + 0xb8);
    if ((plVar20 == (longlong *)0x0) ||
       (cVar9 = (**(code **)(*plVar20 + 0x108))(plVar20), cVar9 == '\0')) {
      *(undefined8 *)(lVar3 + 0x90) = 0;
      goto LAB_1488aa306;
    }
    uVar12 = (**(code **)(*plVar20 + 0x110))(plVar20);
    lVar13 = FUN_144aff482(uVar12,plVar2);
    *(longlong *)(lVar3 + 0x90) = lVar13;
    if (lVar13 == 0) goto LAB_1488aa306;
  }
  local_4f0 = plVar2;
  uVar12 = FUN_1405f939e(param_1);
  iVar22 = 0;
  local_4b0 = 0;
  FUN_14485c47a(&local_4b0,uVar12);
  local_358[0] = 0;
  local_354 = local_4b0;
  local_34c = 0;
  local_80 = 0;
  local_78 = 0x800000000;
  local_3f8 = 2;
  local_3c0[0] = FUN_144a7be76(param_1);
  FUN_144a7bec8(param_1,&local_4a8);
  local_388[0] = 0;
  local_360 = 0;
  FUN_144a7bf34(local_388,&local_4a8,local_3c0,&local_3f8);
  if (plStack_4a0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_4a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_4a0 + 0x10))();
    }
  }
  plVar2 = (longlong *)(lVar3 + 0x170);
  lVar13 = lVar3 + 0x180;
  local_4a8 = (undefined8 ***)&DAT_100000000;
  uStack_498 = 0xffffffff;
  uStack_490._0_4_ = 0;
  local_4e8 = param_1;
  plStack_4a0 = (longlong *)lVar13;
  if (*(int *)(lVar3 + 0x198) != 0) {
    FUN_1449c0562(&local_4a8);
    iVar22 = *(int *)(lVar3 + 0x198);
  }
  local_4c0 = uStack_498;
  uVar12 = local_4c0;
  local_4b8 = (undefined4)uStack_490;
  local_4b4 = uStack_490._4_4_;
  local_4d0 = (undefined8 ****)local_4a8;
  local_4c8 = (longlong)plStack_4a0;
  local_4c0._4_4_ = (int)((ulonglong)uStack_498 >> 0x20);
  local_4d8 = plVar2;
  if ((local_4c0._4_4_ != iVar22) || (plStack_4a0 != (longlong *)lVar13)) {
    local_4e0 = lVar3 + 0x158;
    iVar11 = local_4c0._4_4_;
    local_4c0 = uVar12;
LAB_1488aa3b9:
    lVar15 = *local_4d8;
    plVar20 = (longlong *)(lVar15 + (longlong)iVar11 * 0x28);
    lVar4 = *plVar20;
    lVar14 = plVar20[2];
    if (lVar14 == 0) {
      uVar12 = FUN_140490c9a();
      lVar14 = FUN_14477b664(uVar12);
      plVar20[2] = lVar14;
    }
    plVar21 = (longlong *)(lVar15 + (longlong)iVar11 * 0x28 + 8);
    lVar15 = plVar20[3];
    if (lVar15 == 0) {
      if ((lVar14 != 0) && (*plVar21 != 0)) {
        plVar5 = *(longlong **)(lVar14 + 0xb8);
        if ((plVar5 == (longlong *)0x0) ||
           (cVar9 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar9 == '\0')) {
          plVar20[3] = 0;
        }
        else {
          uVar12 = (**(code **)(*plVar5 + 0x110))(plVar5);
          lVar15 = FUN_144aff482(uVar12,plVar21);
          plVar20[3] = lVar15;
          if (lVar15 != 0) goto LAB_1488aa3f4;
        }
      }
    }
    else {
LAB_1488aa3f4:
      if (*(int *)(lVar3 + 0x128) != *(int *)(lVar3 + 0x154)) {
        uVar8 = (uint)((ulonglong)lVar4 >> 0x10);
        uVar17 = (uint)lVar4 & 0xffff;
        lVar14 = *(longlong *)(lVar3 + 0x160);
        if (*(longlong *)(lVar3 + 0x160) == 0) {
          lVar14 = local_4e0;
        }
        uVar19 = (ulonglong)
                 (*(int *)(lVar3 + 0x168) - 1U &
                 (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar17) +
                 (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar17 >> 4));
        iVar11 = *(int *)(lVar14 + uVar19 * 4);
        if (iVar11 != -1) {
          lVar6 = *(longlong *)(lVar3 + 0x120);
          do {
            if (*(longlong *)(lVar6 + (longlong)iVar11 * 0x48) == lVar4) {
              local_470 = local_470 & 0xffffff00;
              local_4a8 = (undefined8 ****)0x0;
              plStack_4a0 = (longlong *)0x0;
              uStack_498 = 0;
              iVar11 = *(int *)(lVar14 + uVar19 * 4);
              goto joined_r0x0001488aa547;
            }
            iVar11 = *(int *)(lVar6 + (longlong)iVar11 * 0x48 + 0x40);
          } while (iVar11 != -1);
        }
      }
    }
    goto LAB_1488aa406;
  }
LAB_1488aa28b:
  local_4c0 = uVar12;
  param_1 = local_4e8;
  local_4a8 = (undefined8 ***)((ulonglong)local_4a8 & 0xffffffff00000000);
  plStack_4a0 = (longlong *)0x0;
  uStack_498 = 0;
  uStack_490 = 0;
  uStack_488 = 0;
  local_480 = 0;
  uStack_478 = 0;
  uStack_474 = 0;
  local_470 = 0;
  uStack_46c = 0;
  local_460 = 0;
  uStack_458 = 0;
  local_450 = 0;
  uStack_448 = 0;
  local_440 = 0;
  uStack_438 = 0;
  local_430 = 0xffffffff;
  local_42c = 0;
  local_42a = 1;
  local_429 = 0;
  uVar12 = FUN_1405f939e(local_4e8);
  FUN_146551558(uVar12,local_4f0,local_358,&local_4a8);
  FUN_144a5ac3a(local_388);
  FUN_1407acd04(local_340);
LAB_1488aa306:
  FUN_14097c15a(param_1);
  if ((local_70 ^ (ulonglong)auStack_518) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
joined_r0x0001488aa547:
  if (iVar11 == -1) goto LAB_1488aa561;
  plVar20 = (longlong *)(lVar6 + (longlong)iVar11 * 0x48);
  if (*plVar20 == lVar4) goto LAB_1488aa563;
  iVar11 = (int)plVar20[8];
  goto joined_r0x0001488aa547;
LAB_1488aa561:
  plVar20 = (longlong *)0x0;
LAB_1488aa563:
  FUN_14034cca6(local_3c0,plVar20 + 1);
  switch(*(undefined1 *)(lVar15 + 0x18)) {
  case 0:
    FUN_1447c3578(local_3c0,&local_3f8,local_388);
    FUN_1411a0e4c(&local_3f8,local_420);
    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_3d8 * 0x120));
    if (pcVar7 != (code *)0x0) {
      puVar18 = &local_3f8;
      if (0x18 < local_3e0) {
        puVar18 = (undefined1 *)CONCAT71(uStack_3f7,local_3f8);
      }
      (*pcVar7)(puVar18);
    }
    if (0x18 < local_3e0) {
      FUN_1400020a8(CONCAT71(uStack_3f7,local_3f8));
    }
    FUN_14188f998(&local_4a8,local_420);
    break;
  case 1:
    FUN_1447c3578(local_3c0,&local_3f8,local_388);
    ppppuVar16 = (undefined8 ****)FUN_14070d842(&local_3f8);
    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_3d8 * 0x120));
    if (pcVar7 != (code *)0x0) {
      puVar18 = &local_3f8;
      if (0x18 < local_3e0) {
        puVar18 = (undefined1 *)CONCAT71(uStack_3f7,local_3f8);
      }
      (*pcVar7)(puVar18);
    }
    if (0x18 < local_3e0) {
      FUN_1400020a8(CONCAT71(uStack_3f7,local_3f8));
    }
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[(byte)local_470])(&local_4a8);
    local_4a8 = ppppuVar16;
    if ((ppppuVar16 != (undefined8 ****)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(ppppuVar16);
    }
    local_470 = CONCAT31(local_470._1_3_,1);
    break;
  case 2:
    FUN_1447c3578(local_3c0,&local_3f8,local_388);
    uVar23 = FUN_144a7ecd0(&local_3f8);
    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_3d8 * 0x120));
    if (pcVar7 != (code *)0x0) {
      puVar18 = &local_3f8;
      if (0x18 < local_3e0) {
        puVar18 = (undefined1 *)CONCAT71(uStack_3f7,local_3f8);
      }
      (*pcVar7)(puVar18);
    }
    if (0x18 < local_3e0) {
      FUN_1400020a8(CONCAT71(uStack_3f7,local_3f8));
    }
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[(byte)local_470])(&local_4a8);
    local_4a8 = (undefined8 ***)CONCAT44(local_4a8._4_4_,uVar23);
    local_470 = CONCAT31(local_470._1_3_,2);
    break;
  case 3:
    FUN_1447c3578(local_3c0,&local_3f8,local_388);
    uVar10 = FUN_144a7fca4(&local_3f8);
    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_3d8 * 0x120));
    if (pcVar7 != (code *)0x0) {
      puVar18 = &local_3f8;
      if (0x18 < local_3e0) {
        puVar18 = (undefined1 *)CONCAT71(uStack_3f7,local_3f8);
      }
      (*pcVar7)(puVar18);
    }
    if (0x18 < local_3e0) {
      FUN_1400020a8(CONCAT71(uStack_3f7,local_3f8));
    }
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[(byte)local_470])(&local_4a8);
    local_4a8 = (undefined8 ***)CONCAT71(local_4a8._1_7_,uVar10);
    local_470 = CONCAT31(local_470._1_3_,3);
    break;
  case 4:
    FUN_1447c3578(local_3c0,local_420,local_388);
    FUN_14096c63a(local_420,&local_3f8);
    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_400 * 0x120));
    if (pcVar7 != (code *)0x0) {
      ppppuVar16 = local_420;
      if (0x18 < local_408) {
        ppppuVar16 = (undefined8 ****)local_420[0];
      }
      (*pcVar7)(ppppuVar16);
    }
    if (0x18 < local_408) {
      FUN_1400020a8(local_420[0]);
    }
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[(byte)local_470])(&local_4a8);
    uStack_498 = 0;
    uStack_490._0_4_ = 0;
    uStack_490._4_4_ = 0;
    uStack_488 = uStack_488 & 0xffffffff00000000;
    local_480 = 0;
    uStack_478 = 0;
    uStack_474 = 0;
    local_4a8 = (undefined8 ***)CONCAT71(uStack_3f7,local_3f8);
    plStack_4a0 = (longlong *)CONCAT44(plStack_4a0._4_4_,local_3f0);
    FUN_1447715ec(&uStack_498,local_3e8);
    local_470 = CONCAT31(local_470._1_3_,4);
    if (local_3d0 != 0) {
      FUN_1400020a8();
    }
    break;
  case 5:
    FUN_1447c3578(local_3c0,&local_3f8,local_388);
    FUN_1488aaa4e(&local_3f8,local_420);
    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_3d8 * 0x120));
    if (pcVar7 != (code *)0x0) {
      puVar18 = &local_3f8;
      if (0x18 < local_3e0) {
        puVar18 = (undefined1 *)CONCAT71(uStack_3f7,local_3f8);
      }
      (*pcVar7)(puVar18);
    }
    if (0x18 < local_3e0) {
      FUN_1400020a8(CONCAT71(uStack_3f7,local_3f8));
    }
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[(byte)local_470])(&local_4a8);
    local_4a8 = local_420[0];
    local_470 = CONCAT31(local_470._1_3_,5);
  }
  FUN_1410de4b6(local_358,plVar21,&local_4a8);
  FUN_144a2da94(local_3c0);
  (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[(byte)local_470])(&local_4a8);
LAB_1488aa406:
  local_4c0 = CONCAT44(local_4c0._4_4_,(uint)local_4c0 & ~local_4d0._4_4_);
  FUN_1449c0562(&local_4d0);
  iVar11 = local_4c0._4_4_;
  uVar12 = local_4c0;
  if (local_4d8 == plVar2 && (local_4c8 == lVar13 && local_4c0._4_4_ == iVar22)) goto LAB_1488aa28b;
  goto LAB_1488aa3b9;
}



// FUNCTION 1488aaa4e FUN_1488aaa4e body=177 status=ok
// SIG undefined FUN_1488aaa4e(void)

longlong * FUN_1488aaa4e(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[4] == ' ') {
    *param_2 = *param_1;
  }
  else {
    FUN_1400b56fe(local_40,param_1,0x20);
    pppuVar2 = (undefined8 ***)local_40[0];
    if (local_20 == 0) {
      pppuVar2 = DAT_14cb7ed28;
    }
    *param_2 = (longlong)pppuVar2;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar2 = local_40;
      if (0x18 < local_28) {
        pppuVar2 = (undefined8 ***)local_40[0];
      }
      (*pcVar1)(pppuVar2);
    }
    if (0x18 < local_28) {
      FUN_1400020a8(local_40[0]);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488aab06 FUN_1488aab06 body=412 status=ok
// SIG undefined FUN_1488aab06(void)

void FUN_1488aab06(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80d98);
  FUN_144983130(lVar2 + 8,param_1 + 0x80);
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80da0);
  FUN_144983130(lVar2 + 8,param_1 + 0xb8);
  FUN_14044066a(&local_78,0x11,7);
  cVar1 = FUN_144a43716(param_1 + 0x88,&local_70);
  FUN_144a2da94(&local_78);
  if (cVar1 == '\0') {
    FUN_140592d2e(param_1 + 0xc0,&local_88);
    puVar3 = &DAT_149dfb77a;
    if (local_80 != 0) {
      puVar3 = local_88;
    }
    FUN_140592d2e(param_1 + 0x88,&local_98);
    puVar4 = &DAT_149dfb77a;
    if (local_90 != 0) {
      puVar4 = local_98;
    }
    FUN_140002266(&local_78,L"%s -> %s",puVar4,puVar3);
    if ((longlong *)(param_2 + 8) == &local_78) {
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_78;
      local_78 = 0;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)local_70;
      *(undefined4 *)(param_2 + 0x14) = local_70._4_4_;
      local_70 = 0;
    }
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488aaca4 FUN_1488aaca4 body=487 status=ok
// SIG undefined FUN_1488aaca4(void)

void FUN_1488aaca4(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong lVar4;
  void **ppvVar5;
  void **ppvVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14889661a();
  if (*(char *)(param_1 + 0x50) != '\x02') goto LAB_1488aaccf;
  uVar3 = FUN_147f22960();
  FUN_1401cfad2(uVar3,&local_50,*(undefined1 *)(param_1 + 0xb0));
  lVar4 = FUN_1470e53c2(param_2,&DAT_14cb80da8);
  pvVar2 = local_50;
  ppvVar6 = (void **)(lVar4 + 0x40);
  if (*(byte *)(lVar4 + 0x60) == 8) {
    if (ppvVar6 != &local_50) {
      *(int *)(lVar4 + 0x48) = local_48;
      if (local_48 == 0 && *(int *)(lVar4 + 0x4c) == 0) {
        *(undefined4 *)(lVar4 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(ppvVar6,local_48);
        if (local_48 != 0) {
          memcpy(*ppvVar6,pvVar2,(longlong)local_48 * 2);
        }
      }
    }
  }
  else {
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar4 + 0x60) * 0x120));
    if (pcVar1 != (code *)0x0) {
      ppvVar5 = ppvVar6;
      if (0x18 < *(ushort *)(lVar4 + 0x58)) {
        ppvVar5 = *(void ***)(lVar4 + 0x40);
      }
      (*pcVar1)(ppvVar5);
    }
    if (0x18 < *(ushort *)(lVar4 + 0x58)) {
      FUN_1400020a8(*ppvVar6);
    }
    pvVar2 = local_50;
    local_40 = (void *)0x0;
    local_38 = local_48;
    if ((longlong)local_48 == 0) {
      local_34 = 0;
      *(undefined2 *)(lVar4 + 0x58) = 0x10;
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(undefined4 *)(lVar4 + 0x48) = 0;
LAB_1488aae53:
      *(undefined4 *)(lVar4 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_48,0);
      memcpy(local_40,pvVar2,(longlong)local_48 * 2);
      pvVar2 = local_40;
      lVar7 = (longlong)local_38;
      *(undefined2 *)(lVar4 + 0x58) = 0x10;
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(int *)(lVar4 + 0x48) = local_38;
      if (lVar7 == 0) goto LAB_1488aae53;
      FUN_1446dd670(ppvVar6,local_38,0);
      memcpy(*ppvVar6,pvVar2,lVar7 * 2);
    }
    *(undefined1 *)(lVar4 + 0x60) = 8;
    if (local_40 != (void *)0x0) {
      FUN_1400020a8(local_40);
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1488aaccf:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488aae8c FUN_1488aae8c body=5 status=ok
// SIG undefined FUN_1488aae8c(void)

undefined4 FUN_1488aae8c(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1[1] == 0) {
    return 0;
  }
  uVar1 = *param_1;
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (lVar3 == 0) {
      return 0;
    }
    if (*(uint *)(lVar3 + 0x10) != param_1[1]) {
      return 0;
    }
    uVar2 = CONCAT31((int3)(*(uint *)(lVar3 + 8) >> 8),(*(uint *)(lVar3 + 8) & 0x10200000) == 0);
  }
  return uVar2;
}



// FUNCTION 1488aae92 FUN_1488aae92 body=437 status=ok
// SIG undefined FUN_1488aae92(void)

longlong * FUN_1488aae92(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_14045cb56(param_2,&local_38);
  plVar3 = local_30;
  if (local_30 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_14ac8c8d0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b40e400;
    puVar4[3] = local_38;
    puVar4[4] = 0;
    puVar4[5] = FUN_1488ab048;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_14ac8c8d0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b40e400;
    puVar4[3] = local_38;
    puVar4[4] = local_30;
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = FUN_1488ab048;
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
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
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ab048 FUN_1488ab048 body=378 status=ok
// SIG undefined FUN_1488ab048(void)

void FUN_1488ab048(longlong param_1,longlong param_2,undefined8 param_3,byte param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [56];
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar3 = (byte)*(undefined4 *)(param_1 + 0xb0);
  if (bVar3 < param_4) {
    bVar3 = param_4;
  }
  *(byte *)(param_1 + 0xb0) = bVar3;
  if (param_2 == 0 || param_4 != 0) {
    if (param_2 == 0) goto LAB_1488ab195;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x48);
    uVar4 = FUN_1402b804a(param_2);
    FUN_14034cca6(local_98,lVar1 + 0xf0);
    local_60 = DAT_14cb80d88;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    FUN_1470e4ef2(uVar4,local_98);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_144a2da94(local_98);
    FUN_14034cca6(local_98,lVar1 + 0x128);
    local_60 = DAT_14cb80d90;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    FUN_1470e4ef2(uVar4,local_98);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_144a2da94(local_98);
    bVar3 = *(byte *)(param_1 + 0xb0);
  }
  if ((3 < bVar3) && (*(int *)(param_2 + 0x88) != 0)) {
    puVar2 = *(undefined8 **)(param_2 + 0x80);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72((longlong *)(param_2 + 0x80),0,0,0x10);
      *(undefined4 *)(param_2 + 0x88) = 0;
    }
  }
LAB_1488ab195:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ab1c4 FUN_1488ab1c4 body=116 status=ok
// SIG undefined FUN_1488ab1c4(void)

void FUN_1488ab1c4(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x78);
    if ((cVar1 != '\0') && (*(longlong **)(param_1 + 0x80) != (longlong *)0x0)) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x10))();
      cVar1 = FUN_1408a3462(uVar2);
      if (cVar1 != '\0') {
        *(undefined1 *)(param_1 + 0xb0) = 4;
      }
    }
  }
  if (((*(char *)(param_1 + 0x68) == '\0') &&
      (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) == '\0')) && (*(byte *)(param_1 + 0xb0) < 4)
     ) {
    return;
  }
  FUN_14097c15a(param_1);
  return;
}



// FUNCTION 1488ab238 FUN_1488ab238 body=181 status=ok
// SIG undefined FUN_1488ab238(void)

void FUN_1488ab238(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(byte *)(param_1 + 0xb0) < 4) {
    if (*(longlong *)(param_1 + 0x98) != 0) {
      cVar1 = FUN_144729dda(param_1 + 0x90);
      if ((cVar1 != '\0') && (*(longlong **)(param_1 + 0x98) != (longlong *)0x0)) {
        lVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))();
        if (lVar2 != 0) {
          FUN_140356f00(lVar2,2,4);
        }
      }
    }
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      cVar1 = FUN_144729dda(param_1 + 0xa0);
      if ((cVar1 != '\0') && (*(longlong **)(param_1 + 0xa8) != (longlong *)0x0)) {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x28))();
        FUN_1402b8a4c(uVar3,&DAT_14cb23ef0);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 1;
  FUN_14167b620(param_1);
  return;
}



// FUNCTION 1488ab2f4 FUN_1488ab2f4 body=412 status=ok
// SIG undefined FUN_1488ab2f4(void)

void FUN_1488ab2f4(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80db0);
  FUN_144983130(lVar2 + 8,param_1 + 0x80);
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80db8);
  FUN_144983130(lVar2 + 8,param_1 + 0xb8);
  FUN_14044066a(&local_78,0x11,7);
  cVar1 = FUN_144a43716(param_1 + 0x88,&local_70);
  FUN_144a2da94(&local_78);
  if (cVar1 == '\0') {
    FUN_140592d2e(param_1 + 0xc0,&local_88);
    puVar3 = &DAT_149dfb77a;
    if (local_80 != 0) {
      puVar3 = local_88;
    }
    FUN_140592d2e(param_1 + 0x88,&local_98);
    puVar4 = &DAT_149dfb77a;
    if (local_90 != 0) {
      puVar4 = local_98;
    }
    FUN_140002266(&local_78,L"%s -> %s",puVar4,puVar3);
    if ((longlong *)(param_2 + 8) == &local_78) {
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_78;
      local_78 = 0;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)local_70;
      *(undefined4 *)(param_2 + 0x14) = local_70._4_4_;
      local_70 = 0;
    }
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ab492 FUN_1488ab492 body=133 status=ok
// SIG undefined FUN_1488ab492(void)

void FUN_1488ab492(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = DAT_14cb809d0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = DAT_14cb80dc8;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = DAT_14cb809c8;
  return;
}



// FUNCTION 1488ab518 FUN_1488ab518 body=60 status=ok
// SIG undefined FUN_1488ab518(void)

void FUN_1488ab518(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  FUN_141890184();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = DAT_14cb80dc8;
  return;
}



// FUNCTION 1488ab554 FUN_1488ab554 body=487 status=ok
// SIG undefined FUN_1488ab554(void)

void FUN_1488ab554(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong lVar4;
  void **ppvVar5;
  void **ppvVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14889661a();
  if (*(char *)(param_1 + 0x50) != '\x02') goto LAB_1488ab57f;
  uVar3 = FUN_147f22960();
  FUN_1401cfad2(uVar3,&local_50,*(undefined1 *)(param_1 + 0xc9));
  lVar4 = FUN_1470e53c2(param_2,&DAT_14cb80dc0);
  pvVar2 = local_50;
  ppvVar6 = (void **)(lVar4 + 0x40);
  if (*(byte *)(lVar4 + 0x60) == 8) {
    if (ppvVar6 != &local_50) {
      *(int *)(lVar4 + 0x48) = local_48;
      if (local_48 == 0 && *(int *)(lVar4 + 0x4c) == 0) {
        *(undefined4 *)(lVar4 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(ppvVar6,local_48);
        if (local_48 != 0) {
          memcpy(*ppvVar6,pvVar2,(longlong)local_48 * 2);
        }
      }
    }
  }
  else {
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar4 + 0x60) * 0x120));
    if (pcVar1 != (code *)0x0) {
      ppvVar5 = ppvVar6;
      if (0x18 < *(ushort *)(lVar4 + 0x58)) {
        ppvVar5 = *(void ***)(lVar4 + 0x40);
      }
      (*pcVar1)(ppvVar5);
    }
    if (0x18 < *(ushort *)(lVar4 + 0x58)) {
      FUN_1400020a8(*ppvVar6);
    }
    pvVar2 = local_50;
    local_40 = (void *)0x0;
    local_38 = local_48;
    if ((longlong)local_48 == 0) {
      local_34 = 0;
      *(undefined2 *)(lVar4 + 0x58) = 0x10;
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(undefined4 *)(lVar4 + 0x48) = 0;
LAB_1488ab703:
      *(undefined4 *)(lVar4 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_48,0);
      memcpy(local_40,pvVar2,(longlong)local_48 * 2);
      pvVar2 = local_40;
      lVar7 = (longlong)local_38;
      *(undefined2 *)(lVar4 + 0x58) = 0x10;
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(int *)(lVar4 + 0x48) = local_38;
      if (lVar7 == 0) goto LAB_1488ab703;
      FUN_1446dd670(ppvVar6,local_38,0);
      memcpy(*ppvVar6,pvVar2,lVar7 * 2);
    }
    *(undefined1 *)(lVar4 + 0x60) = 8;
    if (local_40 != (void *)0x0) {
      FUN_1400020a8(local_40);
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1488ab57f:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ab73c FUN_1488ab73c body=298 status=ok
// SIG undefined FUN_1488ab73c(void)

void FUN_1488ab73c(longlong param_1,longlong param_2,undefined8 param_3,byte param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  uint local_58;
  undefined2 local_40;
  undefined1 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  bVar3 = *(byte *)(param_1 + 0xc9);
  if (*(byte *)(param_1 + 0xc9) < param_4) {
    bVar3 = param_4;
  }
  *(byte *)(param_1 + 0xc9) = bVar3;
  if ((3 < bVar3 && param_2 != 0) && (*(int *)(param_2 + 0x88) != 0)) {
    puVar1 = *(undefined8 **)(param_2 + 0x80);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(param_2 + 0x80),0,0,0x10);
      *(undefined4 *)(param_2 + 0x88) = 0;
    }
  }
  if (param_4 == 0 && param_2 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    uVar4 = FUN_1402b804a(param_2);
    local_60 = 0;
    local_40 = 4;
    local_58 = (uint)*(byte *)(lVar2 + 0x129);
    local_30 = (DAT_14c9a8634 & 0x20) == 0;
    local_38 = 1;
    FUN_1446ddc76(&local_78,"bWaitForLoop",1);
    local_68 = 0xffffffff;
    local_70 = local_78;
    FUN_1402b8456(uVar4,&local_70,&local_60);
    FUN_144a2da94(&local_60);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ab868 FUN_1488ab868 body=428 status=ok
// SIG undefined FUN_1488ab868(void)

void FUN_1488ab868(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 ****ppppuVar7;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [40];
  undefined4 local_68;
  undefined8 ***local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 200) == '\x01') {
    cVar2 = FUN_144729dda(param_1 + 0x98);
    if (cVar2 != '\0') {
      lVar4 = FUN_14479d2ce(param_1 + 0x98);
      lVar4 = *(longlong *)(lVar4 + 0x690);
      lVar5 = FUN_14479d2ce(param_1 + 0xa0);
      if (lVar4 == lVar5) {
        *(undefined1 *)(param_1 + 200) = 0;
        FUN_148896804(param_1,DAT_14cb80dc8);
      }
    }
  }
  if (((*(char *)(param_1 + 0x68) != '\0') ||
      (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) != '\0')) || (3 < *(byte *)(param_1 + 0xc9))
     ) {
    FUN_14097c15a(param_1);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  uVar6 = FUN_14479d2ce(param_1 + 0xa0);
  local_90[0] = 0;
  local_68 = 0;
  FUN_1456bb102(local_90,uVar6);
  FUN_1447c3578(lVar4 + 0xf0,local_60,local_90);
  cVar3 = FUN_144a7fca4(local_60);
  cVar2 = *(char *)(lVar4 + 0x128);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar7 = local_60;
    if (0x18 < local_48) {
      ppppuVar7 = (undefined8 ****)local_60[0];
    }
    (*pcVar1)(ppppuVar7);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  FUN_144a5ac3a(local_90);
  if ((cVar2 != cVar3) && (*(longlong *)(param_1 + 0xb0) != 0)) {
    cVar2 = FUN_144729dda(param_1 + 0xa8);
    if ((cVar2 != '\0') && (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0)) {
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x20))();
      if (lVar4 != 0) {
        FUN_140356f00(lVar4,2,3);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488aba16 FUN_1488aba16 body=175 status=ok
// SIG undefined FUN_1488aba16(void)

void FUN_1488aba16(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_1 + 0xc9) < 4) && (*(longlong *)(param_1 + 0xb0) != 0)) {
    cVar1 = FUN_144729dda(param_1 + 0xa8);
    if ((cVar1 != '\0') && (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0)) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x20))();
      if (lVar2 != 0) {
        FUN_140356f00(lVar2,2,4);
      }
    }
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0xb8);
    if ((cVar1 != '\0') && (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0)) {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x28))();
      FUN_1402b8a4c(uVar3,&DAT_14cb88ca8);
    }
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xc9) = 1;
  FUN_14167b620(param_1);
  return;
}



// FUNCTION 1488abada FUN_1488abada body=234 status=ok
// SIG undefined FUN_1488abada(void)

void FUN_1488abada(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a8e0e6(param_1 + 0x88);
  if (cVar1 == '\0') {
    lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80dd8);
    FUN_144983130(lVar2 + 8,param_1 + 0x80);
  }
  FUN_140592d2e(param_1 + 0xc0,&local_30);
  if ((longlong *)(param_2 + 8) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 8) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_2 + 0x10) = local_28;
    *(undefined4 *)(param_2 + 0x14) = local_24;
  }
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80dd0);
  FUN_144983130(lVar2 + 8,param_1 + 0xb8);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488abbc6 FUN_1488abbc6 body=451 status=ok
// SIG undefined FUN_1488abbc6(void)

void FUN_1488abbc6(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 ***pppuVar8;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined1 local_91;
  undefined1 local_90 [40];
  undefined4 local_68;
  undefined8 **local_60;
  longlong *local_58;
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14889661a();
  lVar6 = *(longlong *)(param_1 + 0x48);
  cVar4 = FUN_144a8e0e6(lVar6 + 0x88);
  if (cVar4 == '\0') {
    local_91 = 2;
    local_a0 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_60);
    local_90[0] = 0;
    local_68 = 0;
    FUN_144a7bf34(local_90,&local_60,&local_a0,&local_91);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
    FUN_1447c3578(lVar6 + 0x80,&local_60,local_90);
    uVar5 = FUN_14070d842(&local_60);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
    if (pcVar3 != (code *)0x0) {
      pppuVar8 = &local_60;
      if (0x18 < local_48) {
        pppuVar8 = (undefined8 ***)local_60;
      }
      (*pcVar3)(pppuVar8);
    }
    if (0x18 < local_48) {
      FUN_1400020a8(local_60);
    }
    FUN_144a5ac3a(local_90);
    lVar6 = FUN_1470e53c2(param_2,&DAT_14cb80dd0);
    puVar2 = (undefined8 *)(lVar6 + 0x40);
    if (*(byte *)(lVar6 + 0x60) == 6) {
      FUN_14485c47a(puVar2,uVar5);
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar7 = puVar2;
        if (0x18 < *(ushort *)(lVar6 + 0x58)) {
          puVar7 = *(undefined8 **)(lVar6 + 0x40);
        }
        (*pcVar3)(puVar7);
      }
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        FUN_1400020a8(*puVar2);
      }
      *(undefined2 *)(lVar6 + 0x58) = 8;
      *(undefined8 *)(lVar6 + 0x40) = 0;
      FUN_14485c47a(puVar2,uVar5);
      *(undefined1 *)(lVar6 + 0x60) = 6;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488abd8a FUN_1488abd8a body=690 status=ok
// SIG undefined FUN_1488abd8a(void)

void FUN_1488abd8a(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 ****ppppuVar7;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_c9;
  undefined1 local_c8;
  undefined7 uStack_c7;
  ushort local_b0;
  byte local_a8;
  undefined4 local_a0 [2];
  undefined8 ***local_98;
  longlong *local_90;
  ushort local_80;
  byte local_78;
  undefined1 local_70 [40];
  undefined4 local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(char *)(param_1 + 0x68) != '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) == '\x01')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_70[0] = 0;
  local_48[0] = 0;
  cVar4 = FUN_144a8e0e6(lVar2 + 0x88);
  if (cVar4 == '\0') {
    local_c9 = 2;
    local_d8 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_98);
    local_c8 = 0;
    local_a0[0] = 0;
    FUN_144a7bf34(&local_c8,&local_98,&local_d8,&local_c9);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    FUN_1447c3578(lVar2 + 0x80,&local_98,&local_c8);
    uVar5 = FUN_14070d842(&local_98);
    FUN_1456bb102(local_70,uVar5);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar7 = &local_98;
      if (0x18 < local_80) {
        ppppuVar7 = (undefined8 ****)local_98;
      }
      (*pcVar3)(ppppuVar7);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(local_98);
    }
    FUN_144a5ac3a(&local_c8);
    cVar4 = FUN_1447f8eee(local_70);
    if (cVar4 != '\0') goto LAB_1488abf25;
  }
  else {
    local_c9 = 2;
    local_d8 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_98);
    local_c8 = 0;
    local_a0[0] = 0;
    FUN_144a7bf34(&local_c8,&local_98,&local_d8,&local_c9);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    FUN_14031eb60(local_70,&local_c8);
    FUN_140c12ec4(local_48,local_a0);
    FUN_144a5ac3a(&local_c8);
  }
  puVar6 = &local_c8;
  FUN_1447c3578(lVar2 + 0xb8,puVar6,local_70);
  cVar4 = FUN_144a7fca4(puVar6);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_b0) {
      puVar6 = (undefined1 *)CONCAT71(uStack_c7,local_c8);
    }
    (*pcVar3)(puVar6);
  }
  if (0x18 < local_b0) {
    FUN_1400020a8(CONCAT71(uStack_c7,local_c8));
  }
  if (cVar4 != '\0') {
    FUN_14097c15a(param_1);
  }
LAB_1488abf25:
  FUN_144a5ac3a(local_70);
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488ac05e FUN_1488ac05e body=370 status=ok
// SIG undefined FUN_1488ac05e(void)

void FUN_1488ac05e(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80de0);
  FUN_144983130(lVar2 + 8,param_1 + 0x80);
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80de8);
  FUN_144983130(lVar2 + 8,param_1 + 0xb8);
  cVar1 = FUN_144a8e0e6(param_1 + 0x88);
  if (cVar1 == '\0') {
    FUN_140592d2e(param_1 + 0xc0,&local_50);
    puVar3 = &DAT_149dfb77a;
    if (local_48 != 0) {
      puVar3 = local_50;
    }
    FUN_140592d2e(param_1 + 0x88,&local_60);
    puVar4 = &DAT_149dfb77a;
    if (local_58 != 0) {
      puVar4 = local_60;
    }
    FUN_140002266(&local_40,L"%s Attacking %s",puVar4,puVar3);
    if ((longlong *)(param_2 + 8) == &local_40) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_40;
      local_40 = 0;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)local_38;
      *(undefined4 *)(param_2 + 0x14) = local_38._4_4_;
      local_38 = 0;
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ac1d2 FUN_1488ac1d2 body=839 status=ok
// SIG undefined FUN_1488ac1d2(void)

void FUN_1488ac1d2(longlong param_1,longlong param_2)

{
  float *pfVar1;
  code *pcVar2;
  uint uVar3;
  void *_Src;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 **ppuVar6;
  float *pfVar7;
  undefined2 *puVar8;
  undefined2 **ppuVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_a8 [40];
  undefined2 *local_80;
  uint local_78;
  void *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14889661a();
  if (*(char *)(param_1 + 0x50) != '\x02') goto LAB_1488ac20b;
  uVar4 = FUN_147f22960();
  FUN_1401cfad2(uVar4,&local_80,*(undefined1 *)(param_1 + 0x90));
  lVar5 = FUN_1470e53c2(param_2,&DAT_14cb80df0);
  uVar3 = local_78;
  puVar8 = local_80;
  ppuVar9 = (undefined2 **)(lVar5 + 0x40);
  if (*(byte *)(lVar5 + 0x60) == 8) {
    if (ppuVar9 != &local_80) {
      lVar10 = (longlong)(int)local_78;
      *(uint *)(lVar5 + 0x48) = local_78;
      if (local_78 == 0 && *(int *)(lVar5 + 0x4c) == 0) {
        *(undefined4 *)(lVar5 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(ppuVar9,local_78);
        if (uVar3 != 0) {
          memcpy(*ppuVar9,puVar8,lVar10 * 2);
        }
      }
    }
  }
  else {
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar5 + 0x60) * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppuVar6 = ppuVar9;
      if (0x18 < *(ushort *)(lVar5 + 0x58)) {
        ppuVar6 = *(undefined2 ***)(lVar5 + 0x40);
      }
      (*pcVar2)(ppuVar6);
    }
    if (0x18 < *(ushort *)(lVar5 + 0x58)) {
      FUN_1400020a8(*ppuVar9);
    }
    puVar8 = local_80;
    local_70 = (void *)0x0;
    lVar10 = (longlong)(int)local_78;
    local_68 = CONCAT44(local_68._4_4_,local_78);
    if (lVar10 == 0) {
      local_68 = (ulonglong)local_78;
      *(undefined2 *)(lVar5 + 0x58) = 0x10;
      *(undefined8 *)(lVar5 + 0x40) = 0;
      *(undefined4 *)(lVar5 + 0x48) = 0;
LAB_1488ac3a8:
      *(undefined4 *)(lVar5 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(&local_70,local_78,0);
      memcpy(local_70,puVar8,lVar10 * 2);
      _Src = local_70;
      lVar10 = (longlong)(int)local_68;
      *(undefined2 *)(lVar5 + 0x58) = 0x10;
      *(undefined8 *)(lVar5 + 0x40) = 0;
      *(int *)(lVar5 + 0x48) = (int)local_68;
      if (lVar10 == 0) goto LAB_1488ac3a8;
      FUN_1446dd670(ppuVar9,local_68 & 0xffffffff,0);
      memcpy(*ppuVar9,_Src,lVar10 * 2);
    }
    *(undefined1 *)(lVar5 + 0x60) = 8;
    if (local_70 != (void *)0x0) {
      FUN_1400020a8(local_70);
    }
  }
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x128) == '\x01') {
    fVar12 = *(float *)(param_1 + 0x94);
    fVar11 = (float)FUN_141236616(param_1);
    fVar12 = fVar12 - fVar11;
    fVar11 = 0.0;
    if (0.0 <= fVar12) {
      fVar11 = fVar12;
    }
    FUN_1400021e4(&DAT_14cb80df8,&local_80);
    puVar8 = local_80;
    if (local_78 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_70,L"%s: %0.03f",puVar8,(double)fVar11);
    if ((void **)(param_2 + 8) == &local_70) {
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(void **)(param_2 + 8) = local_70;
      local_70 = (void *)0x0;
      *(int *)(param_2 + 0x10) = (int)local_68;
      *(undefined4 *)(param_2 + 0x14) = local_68._4_4_;
      local_68 = 0;
    }
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    lVar5 = FUN_1470e53c2(param_2,&DAT_14cb80df8);
    pfVar1 = (float *)(lVar5 + 0x40);
    if (*(byte *)(lVar5 + 0x60) == 3) {
      *pfVar1 = fVar11;
    }
    else {
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar5 + 0x60) * 0x120));
      if (pcVar2 != (code *)0x0) {
        pfVar7 = pfVar1;
        if (0x18 < *(ushort *)(lVar5 + 0x58)) {
          pfVar7 = *(float **)(lVar5 + 0x40);
        }
        (*pcVar2)(pfVar7);
      }
      if (0x18 < *(ushort *)(lVar5 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)pfVar1);
      }
      *(undefined2 *)(lVar5 + 0x58) = 4;
      *(float *)(lVar5 + 0x40) = fVar11;
      *(undefined1 *)(lVar5 + 0x60) = 3;
    }
  }
LAB_1488ac20b:
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488ac51a FUN_1488ac51a body=437 status=ok
// SIG undefined FUN_1488ac51a(void)

longlong * FUN_1488ac51a(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_14045cb56(param_2,&local_38);
  plVar3 = local_30;
  if (local_30 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_14ac8c8d0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b40e4e0;
    puVar4[3] = local_38;
    puVar4[4] = 0;
    puVar4[5] = FUN_1488ac6d0;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_14ac8c8d0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b40e4e0;
    puVar4[3] = local_38;
    puVar4[4] = local_30;
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = FUN_1488ac6d0;
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
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
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ac6d0 FUN_1488ac6d0 body=315 status=ok
// SIG undefined FUN_1488ac6d0(void)

void FUN_1488ac6d0(longlong param_1,longlong param_2,undefined8 param_3,byte param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 auStack_60 [3];
  undefined2 local_48;
  undefined1 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  bVar2 = (byte)*(undefined4 *)(param_1 + 0x90);
  if (bVar2 < param_4) {
    bVar2 = param_4;
  }
  *(byte *)(param_1 + 0x90) = bVar2;
  if (param_4 == 0) {
    if (param_2 == 0) goto LAB_1488ac7e9;
    lVar3 = FUN_14479d2ce(param_1 + 0x78);
    if (lVar3 != 0) {
      uVar4 = FUN_1402b804a(param_2);
      local_68 = 0;
      auStack_60[0] = 0;
      local_48 = 8;
      FUN_14485c47a(auStack_60,lVar3);
      local_40 = 7;
      local_38 = 7;
      if ((DAT_14c9a8cf4 & 0x20) != 0) {
        local_38 = 0;
      }
      local_70 = 0xffffffff;
      local_78 = DAT_14cb80e00;
      FUN_1402b8456(uVar4,&local_78,&local_68);
      FUN_144a2da94(&local_68);
    }
    bVar2 = *(byte *)(param_1 + 0x90);
  }
  else if (param_2 == 0) goto LAB_1488ac7e9;
  if ((3 < bVar2) && (*(int *)(param_2 + 0x88) != 0)) {
    puVar1 = *(undefined8 **)(param_2 + 0x80);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(param_2 + 0x80),0,0,0x10);
      *(undefined4 *)(param_2 + 0x88) = 0;
    }
  }
LAB_1488ac7e9:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488ac80c FUN_1488ac80c body=116 status=ok
// SIG undefined FUN_1488ac80c(void)

void FUN_1488ac80c(longlong param_1)

{
  float fVar1;
  
  if (((*(char *)(param_1 + 0x68) != '\0') ||
      (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) != '\0')) || (3 < *(byte *)(param_1 + 0x90))
     ) {
    FUN_14097c15a(param_1);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x128) == '\x01') {
    fVar1 = (float)FUN_141236616(param_1);
    if (*(float *)(param_1 + 0x94) <= fVar1) {
      *(undefined1 *)(param_1 + 0x90) = 4;
      FUN_14097c15a(param_1);
      return;
    }
  }
  else if (1 < *(byte *)(param_1 + 0x90)) {
    *(undefined1 *)(param_1 + 0x90) = 4;
  }
  return;
}



// FUNCTION 1488ac880 FUN_1488ac880 body=423 status=ok
// SIG undefined FUN_1488ac880(void)

void FUN_1488ac880(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_60;
  undefined1 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((*(byte *)(param_1 + 0x90) < 4) ||
      (*(char *)(*(longlong *)(param_1 + 0x48) + 0x128) == '\x01')) &&
     (*(longlong *)(param_1 + 0x88) != 0)) {
    cVar1 = FUN_144729dda(param_1 + 0x80);
    if ((cVar1 != '\0') && (*(longlong **)(param_1 + 0x88) != (longlong *)0x0)) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x20))();
      if (lVar2 != 0) {
        cVar1 = FUN_147f5674e(lVar2,&DAT_14cb24288);
        if (cVar1 == '\0') {
          cVar1 = FUN_147f5674e(lVar2,&DAT_14cb241d8);
          if (cVar1 != '\0') {
            FUN_140356f00(lVar2,2,3);
          }
        }
        else {
          lVar2 = lVar2 + (ulonglong)*(byte *)(lVar2 + 0x3c0) * 0x138 + 0x18;
          local_80 = 0;
          local_60 = 4;
          local_78 = 0;
          local_58 = 1;
          local_50 = (DAT_14c9a8634 & 0x20) == 0;
          local_88 = 0xffffffff;
          local_90 = DAT_14cb80e08;
          FUN_1402b8456(lVar2,&local_90,&local_80);
          FUN_144a2da94(&local_80);
          local_80 = 0;
          local_60 = 4;
          local_78 = 0;
          local_50 = (DAT_14c9a8634 & 0x20) == 0;
          local_58 = 1;
          local_88 = 0xffffffff;
          local_90 = DAT_14cb80e10;
          FUN_1402b8456(lVar2,&local_90,&local_80);
          FUN_144a2da94(&local_80);
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x90) = 1;
  FUN_14167b620(param_1);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488aca28 FUN_1488aca28 body=1119 status=ok
// SIG undefined FUN_1488aca28(void)

void FUN_1488aca28(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined **ppuVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined ***pppuVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 *puVar17;
  code **ppcVar18;
  undefined8 *puVar19;
  undefined1 auStack_258 [40];
  undefined8 local_230;
  longlong *local_228;
  longlong local_220;
  code *local_218 [2];
  undefined8 local_208 [6];
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  code *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined ***local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined **local_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_1470dde52();
  if (((*(longlong *)(param_1 + 0x510) == 0) || (*(int *)(param_1 + 0x520) == 0)) ||
     (lVar12 = FUN_1447210f0(param_1), lVar12 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_258);
  }
  FUN_1488acea4(param_1);
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_88 = 0;
  local_78 = (longlong *)0x0;
  local_98 = 0x800000102;
  if ((longlong)*(int *)(param_1 + 0x520) != 0) {
    lVar12 = (longlong)*(int *)(param_1 + 0x520) * 0xc0;
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x518) + 0xb0);
    do {
      local_220 = puVar19[-0x16];
      if (((local_220 == 0) || (puVar19[-0x13] == 0)) || (puVar19[-0x12] == 0)) {
        FUN_1470ddf8e(param_1);
        break;
      }
      local_108 = (code *)0x0;
      local_f8 = (undefined ***)0x0;
      local_168 = (code *)puVar19[-0x10];
      FUN_1446dcdd4(&local_1d8,&local_168);
      lVar16 = 0;
      if (DAT_14cb1d1f0 != 0) {
        lVar16 = FUN_144837462(DAT_14cb1d1f0,&local_1d8);
      }
      if (CONCAT44(uStack_1bc,uStack_1c0) != 0) {
        FUN_1400020a8();
      }
      uVar13 = local_d8;
      lVar9 = uStack_e0;
      ppuVar8 = local_e8;
      pppuVar14 = local_f8;
      pcVar3 = local_108;
      if (lVar16 != 0) {
        uVar4 = (undefined4)uStack_100;
        uVar5 = uStack_100._4_4_;
        uVar6 = (undefined4)uStack_f0;
        uVar7 = uStack_f0._4_4_;
        uVar10 = (undefined4)uStack_d0;
        uVar11 = uStack_d0._4_4_;
        local_1a8 = (undefined4)local_d8;
        uStack_1a4 = local_d8._4_4_;
        uStack_1a0 = (undefined4)uStack_d0;
        uStack_19c = uStack_d0._4_4_;
        local_1b8 = (undefined4)local_e8;
        uStack_1b4 = local_e8._4_4_;
        uStack_1b0 = (undefined4)uStack_e0;
        uStack_1ac = uStack_e0._4_4_;
        local_1c8 = (undefined4)local_f8;
        uStack_1c4 = local_f8._4_4_;
        uStack_1c0 = (undefined4)uStack_f0;
        uStack_1bc = uStack_f0._4_4_;
        local_1d8 = (undefined4)local_108;
        uStack_1d4 = local_108._4_4_;
        uStack_1d0 = (undefined4)uStack_100;
        uStack_1cc = uStack_100._4_4_;
        local_108 = FUN_143d89086;
        uStack_100 = CONCAT44(uStack_15c,uStack_160);
        local_f8 = (undefined ***)0x0;
        uStack_f0 = CONCAT44(uStack_14c,uStack_150);
        local_e8 = &PTR_LAB_14b40e550;
        uStack_e0 = lVar16;
        local_d8 = *(undefined8 *)(param_1 + 0x18);
        uStack_d0 = CONCAT44(uStack_12c,uStack_130);
        local_168 = pcVar3;
        uStack_160 = uVar4;
        uStack_15c = uVar5;
        local_138 = uVar13;
        uStack_130 = uVar10;
        uStack_12c = uVar11;
        local_148 = ppuVar8;
        lStack_140 = lVar9;
        local_158 = pppuVar14;
        uStack_150 = uVar6;
        uStack_14c = uVar7;
        if (pcVar3 != (code *)0x0) {
          if (pppuVar14 == (undefined ***)0x0) {
            pppuVar14 = &local_148;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      puVar17 = (undefined8 *)(*(longlong *)(puVar19[-0x13] + 0x1c8) + 0x240);
      if (*(longlong *)(puVar19[-0x13] + 0x1c8) == 0) {
        puVar17 = &DAT_14c846480;
      }
      ppcVar18 = &local_168;
      for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
        *ppcVar18 = (code *)*puVar17;
        puVar17 = puVar17 + 1;
        ppcVar18 = ppcVar18 + 1;
      }
      FUN_1411374b4(&local_1d8,*(undefined8 *)(param_1 + 0x510),&local_220,&local_168);
      local_218[0] = local_108;
      local_208[0] = 0;
      if (local_108 != (code *)0x0) {
        pppuVar14 = local_f8;
        if (local_f8 == (undefined ***)0x0) {
          pppuVar14 = (undefined ***)&local_e8;
        }
        (*(code *)**pppuVar14)(pppuVar14,local_208);
      }
      uVar13 = FUN_140faf186(&local_1d8,local_218);
      FUN_140faf12e(uVar13,&local_230);
      plVar15 = local_228;
      if (puVar19 == &local_230) {
LAB_1488acdca:
        plVar15 = local_228;
        if (local_228 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_228 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_228)(local_228);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
      }
      else {
        *puVar19 = local_230;
        local_230 = 0;
        plVar2 = (longlong *)puVar19[1];
        if (local_228 == plVar2) goto LAB_1488acdca;
        local_228 = (longlong *)0x0;
        puVar19[1] = plVar15;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar15 = plVar2 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
          goto LAB_1488acdca;
        }
      }
      FUN_14119d0c2(&local_1d8);
      *(undefined1 *)(puVar19 + -4) = 0;
      *(undefined4 *)(puVar19 + -1) = 0;
      if (local_108 != (code *)0x0) {
        pppuVar14 = local_f8;
        if (local_f8 == (undefined ***)0x0) {
          pppuVar14 = (undefined ***)&local_e8;
        }
        (*(code *)(*pppuVar14)[2])();
      }
      puVar19 = puVar19 + 0x18;
      lVar12 = lVar12 + -0xc0;
    } while (lVar12 != 0);
  }
  if (local_88 != 0) {
    plVar15 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar15 = local_68;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488acea4 FUN_1488acea4 body=62 status=ok
// SIG undefined FUN_1488acea4(void)

void FUN_1488acea4(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    lVar1 = FUN_143377e72();
    if (lVar1 != 0) {
      uVar2 = FUN_143377e72(*(undefined8 *)(param_1 + 0x5a8));
      FUN_140ef5ee2(uVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1488acee2 FUN_1488acee2 body=98 status=ok
// SIG undefined FUN_1488acee2(void)

void FUN_1488acee2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1470de2a6();
  FUN_1437fe810();
  iVar1 = *(int *)(param_1 + 0x520);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x518);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + 0x70 + lVar4);
      if (lVar3 != 0) {
        FUN_140aeefbc(lVar3,0,1);
        *(undefined8 *)(lVar2 + 0x70 + lVar4) = 0;
      }
      lVar4 = lVar4 + 0xc0;
    } while ((longlong)iVar1 * 0xc0 != lVar4);
  }
  return;
}



// FUNCTION 1488acf44 FUN_1488acf44 body=88 status=ok
// SIG undefined FUN_1488acf44(void)

void FUN_1488acf44(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x520);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x518);
    lVar4 = *param_2;
    lVar3 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar3) != lVar4) ||
         (*(int *)(lVar2 + 8 + lVar3) != (int)param_2[1])) {
        *(longlong *)(lVar2 + lVar3) = lVar4;
        *(int *)(lVar2 + 8 + lVar3) = (int)param_2[1];
        *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0;
        lVar4 = *param_2;
      }
      lVar3 = lVar3 + 0xc0;
    } while ((longlong)iVar1 * 0xc0 != lVar3);
  }
  return;
}



// FUNCTION 1488acf9c FUN_1488acf9c body=90 status=ok
// SIG undefined FUN_1488acf9c(void)

void FUN_1488acf9c(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x520);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x518);
    lVar4 = *param_2;
    lVar3 = 0;
    do {
      if ((*(longlong *)(lVar2 + 0x30 + lVar3) != lVar4) ||
         (*(int *)(lVar2 + 0x38 + lVar3) != (int)param_2[1])) {
        *(longlong *)(lVar2 + 0x30 + lVar3) = lVar4;
        *(int *)(lVar2 + 0x38 + lVar3) = (int)param_2[1];
        *(undefined8 *)(lVar2 + 0x40 + lVar3) = 0;
        lVar4 = *param_2;
      }
      lVar3 = lVar3 + 0xc0;
    } while ((longlong)iVar1 * 0xc0 != lVar3);
  }
  return;
}



// FUNCTION 1488ad002 FUN_1488ad002 body=152 status=ok
// SIG undefined FUN_1488ad002(void)

void FUN_1488ad002(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined5 uStack_28;
  undefined3 uStack_23;
  undefined5 uStack_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    lVar1 = FUN_143377e72();
    if (lVar1 != 0) {
      uVar2 = FUN_143377e72(*(undefined8 *)(param_1 + 0x5a8));
      FUN_140c7df0a(uVar2);
      uVar2 = FUN_143377e72();
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      local_30 = 0;
      uStack_28 = 0;
      uStack_23 = 0;
      uStack_20 = 0;
      local_18 = 0x1000101;
      FUN_1405244c0(uVar2);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ad09c FUN_1488ad09c body=407 status=ok
// SIG undefined FUN_1488ad09c(void)

void FUN_1488ad09c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_68 [72];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_2 + 0xb0) != 0) {
    cVar2 = FUN_14641b224();
    if (cVar2 != '\0') {
      lVar3 = FUN_147e26e54(*(undefined8 *)(param_2 + 0xb0));
      if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
        *(longlong *)(param_2 + 0x70) = lVar3;
        if (lVar3 == 0) goto LAB_1488ad1f0;
      }
      else {
        FUN_1456cec3c(lVar3);
        *(longlong *)(param_2 + 0x70) = lVar3;
      }
      *(undefined4 *)(param_2 + 0xa8) = 1;
      FUN_144a7cbb2();
      if (*(longlong *)(param_2 + 0x70) != 0) {
        FUN_14111712a();
      }
      if ((*(longlong *)(param_2 + 0x28) != 0) &&
         (plVar1 = *(longlong **)(param_2 + 0x70), plVar1 != (longlong *)0x0)) {
        uVar4 = FUN_1407725cc();
        lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar4);
        if (lVar3 != 0) {
          uVar4 = FUN_1407725cc();
          lVar5 = FUN_144718840(lVar3,uVar4);
          if (lVar5 != 0 && lVar3 != lVar5) {
            lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x1c8);
            if (lVar3 == 0) {
              local_78 = DAT_14c8464f0;
              local_88 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              uStack_80 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            }
            else {
              local_88 = *(undefined8 *)(lVar3 + 0x260);
              uStack_80 = *(undefined8 *)(lVar3 + 0x268);
              local_78 = *(undefined8 *)(lVar3 + 0x270);
            }
            FUN_1487d96c4(local_68,&local_88);
            uVar4 = FUN_144b397c8(lVar5);
            FUN_14186f004(uVar4,2,local_68);
          }
        }
      }
    }
    if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_1488ad1f0:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1488ad246 FUN_1488ad246 body=939 status=ok
// SIG undefined FUN_1488ad246(void)

void FUN_1488ad246(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong *plStack_120;
  undefined1 *local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined1 local_d8 [48];
  undefined1 local_a8 [80];
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((*(longlong *)(param_2 + 0x70) == 0) || (lVar7 = FUN_140a40fb0(), lVar7 == 0)) ||
     (cVar5 = FUN_140532d9e(lVar7), cVar5 == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_158);
  }
  local_118 = &LAB_1488adae6;
  local_110 = 0;
  FUN_1488ad9e6(lVar7 + 0x1240,&local_138,param_1);
  uVar8 = FUN_1447210f0(param_1);
  FUN_141246736(&local_118,uVar8);
  plVar12 = (longlong *)CONCAT44(uStack_10c,local_110);
  if (plVar12 != (longlong *)0x0) {
    iVar6 = (int)plVar12[1];
    do {
      if (iVar6 == 0) {
        plVar12 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)plVar12[1];
      bVar13 = iVar6 == iVar4;
      if (bVar13) {
        *(int *)(plVar12 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar13);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_10c,local_110) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_10c,local_110) + 0x10))();
    }
    puVar3 = local_118;
    if (plVar12 != (longlong *)0x0) {
      if (local_118 == (undefined1 *)0x0) {
        FUN_1470ddf8e(param_1);
      }
      else {
        lVar9 = *(longlong *)(lVar7 + 0x1518);
        lVar7 = *(longlong *)(lVar7 + 0x1520);
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        plVar10 = *(longlong **)(param_2 + 0x88);
        *(longlong *)(param_2 + 0x80) = lVar9;
        *(longlong *)(param_2 + 0x88) = lVar7;
        if (plVar10 != (longlong *)0x0) {
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
          lVar9 = *(longlong *)(param_2 + 0x80);
        }
        if ((lVar9 != 0) && (*(int *)(lVar9 + 0x250) != -1)) {
          plVar10 = *(longlong **)(param_2 + 0x70);
          if (plVar10 != (longlong *)0x0) {
            uVar8 = FUN_140b040c0();
            plVar10 = (longlong *)(**(code **)(*plVar10 + 0x288))(plVar10,uVar8);
            if (plVar10 != (longlong *)0x0) {
              uVar8 = FUN_140b040c0();
              plVar11 = (longlong *)FUN_144718840(plVar10,uVar8);
              if ((plVar11 != (longlong *)0x0 && plVar10 != plVar11) &&
                 (lVar7 = (**(code **)(*plVar11 + 0x20))(plVar11), lVar7 != 0)) {
                local_118 = *(undefined1 **)(param_1 + 0x18);
                FUN_140ba2cd0(lVar7,&local_118,1);
              }
            }
          }
          FUN_147e41d8c(&local_118,*(undefined8 *)(param_2 + 0x20));
          FUN_144a540c6(*(undefined8 *)(param_2 + 0x80),&local_138);
          plVar10 = plStack_40;
          local_50 = local_130._0_4_;
          local_58 = local_138;
          local_48 = local_128;
          plStack_40 = plStack_120;
          local_128 = 0;
          plStack_120 = (longlong *)0x0;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))();
            }
            if (plStack_120 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plStack_120 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plStack_120 + 0x10))();
              }
            }
          }
          FUN_144955a78(local_d8,param_1 + 0x528);
          FUN_140381eae(puVar3 + 0x58,&local_138,&local_118);
          plVar11 = local_130;
          plVar10 = (longlong *)(param_2 + 0x98);
          if (plVar10 != &local_138) {
            *(longlong *)(param_2 + 0x98) = local_138;
            local_138 = 0;
            plVar2 = *(longlong **)(param_2 + 0xa0);
            if (local_130 != plVar2) {
              local_130 = (longlong *)0x0;
              *(longlong **)(param_2 + 0xa0) = plVar11;
              if (plVar2 != (longlong *)0x0) {
                LOCK();
                plVar11 = plVar2 + 1;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)*plVar11 == 0) {
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
            }
          }
          plVar11 = local_130;
          if (local_130 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_130 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_130)(local_130);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          if (*plVar10 == 0) {
            FUN_1470ddf8e(param_1);
          }
          else {
            FUN_140c50aa0(*(undefined8 *)(param_2 + 0x80),plVar10);
            *(undefined4 *)(param_2 + 0xa8) = 2;
          }
          if (plStack_40 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plStack_40 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plStack_40 + 0x10))();
            }
          }
          FUN_144a2da94(local_a8);
        }
      }
      LOCK();
      plVar10 = plVar12 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      goto LAB_1488ad5ab;
    }
  }
  FUN_1470ddf8e(param_1);
LAB_1488ad5ab:
  if ((local_38 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488ad60a FUN_1488ad60a body=867 status=ok
// SIG undefined FUN_1488ad60a(void)

void FUN_1488ad60a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  float fVar12;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong *plStack_128;
  longlong local_118;
  longlong *local_110;
  undefined1 local_d8 [48];
  undefined1 local_a8 [80];
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((*(longlong *)(param_2 + 0x48) == 0) || (*(char *)(param_2 + 0x90) == '\x01')) {
    *(undefined4 *)(param_2 + 0xa8) = 4;
  }
  else {
    lVar7 = FUN_1447210f0();
    if (lVar7 == 0) {
      fVar12 = 0.0;
    }
    else {
      fVar12 = *(float *)(lVar7 + 0x930);
    }
    if (*(float *)(param_2 + 0x50) <= fVar12 - *(float *)(param_2 + 0x78)) {
      uVar8 = FUN_1447210f0(param_1);
      FUN_141246736(&local_118,uVar8);
      if (local_110 != (longlong *)0x0) {
        iVar6 = (int)local_110[1];
        do {
          if (iVar6 == 0) {
            plVar10 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar5 = (int)local_110[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(local_110 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
          plVar10 = local_110;
        } while (!bVar11);
        LOCK();
        piVar1 = (int *)((longlong)local_110 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_110 + 0x10))();
        }
        if (plVar10 != (longlong *)0x0) {
          if (((local_118 == 0) || (*(longlong *)(param_2 + 0x80) == 0)) ||
             (*(longlong *)(param_2 + 0x70) == 0)) {
            FUN_1470ddf8e(param_1);
          }
          else {
            FUN_147e41d8c(&local_118,*(undefined8 *)(param_2 + 0x48));
            FUN_144a540c6(*(undefined8 *)(param_2 + 0x80),&local_140);
            plVar3 = plStack_40;
            local_50 = local_138._0_4_;
            local_58 = local_140;
            local_48 = local_130;
            plStack_40 = plStack_128;
            local_130 = 0;
            plStack_128 = (longlong *)0x0;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar3 + 0x10))();
              }
              if (plStack_128 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plStack_128 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plStack_128 + 0x10))();
                }
              }
            }
            FUN_144955a78(local_d8,param_1 + 0x528);
            FUN_140381eae(local_118 + 0x58,&local_140,&local_118);
            plVar2 = local_138;
            plVar3 = (longlong *)(param_2 + 0x98);
            if (plVar3 != &local_140) {
              *(longlong *)(param_2 + 0x98) = local_140;
              local_140 = 0;
              plVar4 = *(longlong **)(param_2 + 0xa0);
              if (local_138 != plVar4) {
                local_138 = (longlong *)0x0;
                *(longlong **)(param_2 + 0xa0) = plVar2;
                if (plVar4 != (longlong *)0x0) {
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
                }
              }
            }
            plVar2 = local_138;
            if (local_138 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_138 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*local_138)(local_138);
                LOCK();
                piVar1 = (int *)((longlong)plVar2 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar2 + 0x10))(plVar2);
                }
              }
            }
            if (*plVar3 == 0) {
              FUN_1470ddf8e(param_1);
            }
            else {
              local_148 = *(undefined8 *)(param_2 + 0x58);
              FUN_1446dcdd4(&local_140);
              if (DAT_14cb1d1f0 == 0) {
                lVar7 = 0;
              }
              else {
                lVar7 = FUN_144837462(DAT_14cb1d1f0,&local_140);
              }
              if (plStack_128 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              if ((lVar7 != 0) &&
                 (lVar9 = FUN_140a40fb0(*(undefined8 *)(param_2 + 0x70)), lVar9 != 0)) {
                local_140 = *(longlong *)(param_1 + 0x18);
                FUN_14084412e(lVar9 + 0x1288,&local_140,lVar7);
              }
              *(undefined1 *)(param_2 + 0x90) = 1;
              FUN_140c50aa0(*(undefined8 *)(param_2 + 0x80),plVar3);
              *(undefined4 *)(param_2 + 0xa8) = 2;
            }
            if (plStack_40 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plStack_40 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plStack_40 + 0x10))();
              }
            }
            FUN_144a2da94(local_a8);
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
          goto LAB_1488ad649;
        }
      }
      FUN_1470ddf8e(param_1);
    }
  }
LAB_1488ad649:
  if ((local_38 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488ad96e FUN_1488ad96e body=120 status=ok
// SIG undefined FUN_1488ad96e(void)

void FUN_1488ad96e(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_2 + 0x80) != 0) && (*(longlong *)(param_2 + 0x98) != 0)) {
    plVar2 = (longlong *)FUN_141262ec6();
    if (*plVar2 == *(longlong *)(param_2 + 0x98)) {
      cVar1 = FUN_144903750(*(undefined8 *)(param_2 + 0x80),(longlong *)(param_2 + 0x98),1);
      if (cVar1 == '\x01') {
        *(undefined4 *)(param_2 + 0xa8) = 5;
      }
      else if (cVar1 == '\x02') goto LAB_1488ad9a5;
      return;
    }
  }
LAB_1488ad9a5:
  FUN_1470ddf8e(param_1);
  return;
}



// FUNCTION 1488ad9e6 FUN_1488ad9e6 body=254 status=ok
// SIG undefined FUN_1488ad9e6(void)

undefined8
FUN_1488ad9e6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b40e5e0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b40e570;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1488b39e4(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488adaec FUN_1488adaec body=131 status=ok
// SIG undefined FUN_1488adaec(void)

void FUN_1488adaec(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 200) = 0;
  if (*(int *)(param_2 + 0xcc) < 0) {
    FUN_1488b4e12(param_2);
  }
  local_20 = FUN_144a7e9aa();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_1488b4d30(param_1,&local_20,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488adb70 FUN_1488adb70 body=253 status=ok
// SIG undefined FUN_1488adb70(void)

void FUN_1488adb70(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    plVar6 = (longlong *)*param_3;
    lVar7 = (longlong)*(int *)(param_3 + 1) * 0x18;
    do {
      lVar3 = plVar6[1];
      if (lVar3 == 0) {
        uVar2 = FUN_14094f534();
        lVar3 = FUN_14477b664(uVar2);
        plVar6[1] = lVar3;
      }
      plVar5 = (longlong *)plVar6[2];
      if (plVar5 == (longlong *)0x0) {
        if ((lVar3 != 0) && (*plVar6 != 0)) {
          plVar5 = *(longlong **)(lVar3 + 0xb8);
          if ((plVar5 == (longlong *)0x0) ||
             (cVar1 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar1 == '\0')) {
            plVar6[2] = 0;
          }
          else {
            uVar2 = (**(code **)(*plVar5 + 0x110))(plVar5);
            plVar5 = (longlong *)FUN_144aff482(uVar2,plVar6);
            plVar6[2] = (longlong)plVar5;
            if (plVar5 != (longlong *)0x0) goto LAB_1488adbb7;
          }
        }
      }
      else {
LAB_1488adbb7:
        lVar3 = (**(code **)(*plVar5 + 8))();
        lVar4 = FUN_1408c3c54();
        if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          if (plVar6 != (longlong *)0x0) {
            FUN_1458492c0(param_1);
          }
          break;
        }
      }
      plVar6 = plVar6 + 3;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  FUN_145848bfc(param_1 + 0x440);
  return;
}



// FUNCTION 1488adc6e FUN_1488adc6e body=109 status=ok
// SIG undefined FUN_1488adc6e(void)

undefined8 * FUN_1488adc6e(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)(param_1 + 0x3f8) != 0) && (*(longlong *)(param_1 + 0x410) != DAT_14caa8578)) {
    puVar3 = (undefined8 *)(param_1 + 0x410);
    lVar2 = FUN_1461a6134(*(longlong *)(param_1 + 0x3f8),puVar3);
    if ((lVar2 != 0) && (cVar1 = FUN_143e50aa0(param_1 + 0x9e0,lVar2), cVar1 != '\0'))
    goto LAB_1488adc9e;
  }
  puVar3 = &DAT_14caa8578;
LAB_1488adc9e:
  *param_2 = *puVar3;
  return param_2;
}



// FUNCTION 1488adcdc FUN_1488adcdc body=224 status=ok
// SIG undefined FUN_1488adcdc(void)

ulonglong FUN_1488adcdc(undefined8 param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [192];
  undefined1 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_38 = (undefined1 *)0x0;
  local_30 = 0x1800000000;
  FUN_14024dbd6(param_1,local_f8,0);
  puVar5 = local_38;
  if (local_38 == (undefined1 *)0x0) {
    puVar5 = local_f8;
  }
  lVar3 = (longlong)(int)local_30;
  if (lVar3 == 0) {
    uVar4 = CONCAT71((int7)((ulonglong)local_f8 >> 8),1);
  }
  else {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(puVar5 + lVar6);
      if (((plVar1 != (longlong *)0x0) &&
          (cVar2 = (**(code **)(*plVar1 + 0x4e8))(plVar1), cVar2 != '\0')) && (plVar1[0xb5] == 0)) {
        uVar4 = 0;
        goto LAB_1488add81;
      }
      lVar6 = lVar6 + 8;
    } while (lVar3 * 8 != lVar6);
    uVar4 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
  }
LAB_1488add81:
  if (local_38 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1488addbe FUN_1488addbe body=703 status=ok
// SIG undefined FUN_1488addbe(void)

ulonglong FUN_1488addbe(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint *puVar8;
  ulonglong unaff_RBX;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_188 [40];
  longlong local_160;
  longlong *local_158;
  uint local_150;
  char local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_130 [24];
  longlong *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_70 = (longlong *)0x0;
  local_68 = 0x1800000000;
  FUN_140ba3884(param_1,local_130,0);
  plVar10 = local_70;
  if (local_70 == (longlong *)0x0) {
    plVar10 = local_130;
  }
  if ((longlong)(int)local_68 != 0) {
    plVar11 = plVar10 + (int)local_68;
    do {
      lVar13 = *plVar10;
      if (lVar13 != 0) {
        lVar6 = FUN_144a78c84();
        if (((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) ||
           (cVar3 = FUN_148810d6e(lVar13), cVar3 == '\0')) {
          plVar7 = (longlong *)FUN_144a7954a(lVar13);
          if (plVar7 == (longlong *)0x0) {
            unaff_RBX = 0;
          }
          else {
            puVar8 = (uint *)(**(code **)(*plVar7 + 0x398))(plVar7);
            uVar1 = *puVar8;
            (**(code **)(*plVar7 + 0x4a8))(plVar7,&local_148);
            if (local_148._4_1_ != '\0') {
              uVar1 = (uint)local_148;
            }
            unaff_RBX = (ulonglong)uVar1;
            cVar3 = FUN_14371c02c(plVar7);
            if (cVar3 == '\0') goto LAB_1488ae028;
          }
        }
        else {
          local_148 = 0;
          uStack_140 = 0;
          local_158 = plVar11;
          (**(code **)(*(longlong *)(lVar13 + 0x1250) + 0x10))(lVar13 + 0x1250,&local_148);
          lVar6 = local_148;
          lVar14 = (longlong)(int)uStack_140;
          if (lVar14 == 0) {
            unaff_RBX = 0;
            bVar2 = true;
          }
          else {
            lVar12 = 0;
            unaff_RBX = 0;
            local_160 = param_1;
            do {
              plVar11 = *(longlong **)(lVar6 + lVar12);
              if (plVar11 != (longlong *)0x0) {
                puVar8 = (uint *)(**(code **)(*plVar11 + 0x398))(plVar11);
                uVar1 = *puVar8;
                (**(code **)(*plVar11 + 0x4a8))(plVar11,&local_150);
                uVar5 = uVar1;
                if (local_14c != '\0') {
                  uVar5 = local_150;
                }
                if ((int)uVar1 < (int)uVar5) {
                  uVar1 = uVar5;
                }
                unaff_RBX = (ulonglong)uVar1;
                cVar3 = FUN_14371c02c(plVar11);
                if (cVar3 == '\0') {
                  bVar2 = false;
                  param_1 = local_160;
                  goto LAB_1488adf9b;
                }
              }
              lVar12 = lVar12 + 8;
            } while (lVar14 * 8 != lVar12);
            bVar2 = true;
            param_1 = local_160;
          }
LAB_1488adf9b:
          if (local_148 != 0) {
            FUN_1400020a8(local_148);
          }
          plVar11 = local_158;
          if (!bVar2) goto LAB_1488ae028;
        }
        iVar4 = (**(code **)(**(longlong **)(lVar13 + 0x8a8) + 0x90))();
        if (iVar4 != (int)unaff_RBX) {
          FUN_1448215fa(lVar13);
          goto LAB_1488ae028;
        }
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar11);
  }
  uVar9 = CONCAT71((int7)(unaff_RBX >> 8),1);
  if (*(char *)(param_1 + 0x418) == '\x01') {
    plVar10 = local_130;
    if (local_70 != (longlong *)0x0) {
      plVar10 = local_70;
    }
    lVar13 = (longlong)(int)local_68;
    if (lVar13 != 0) {
      lVar6 = 0;
      do {
        plVar11 = *(longlong **)((longlong)plVar10 + lVar6);
        FUN_1407396de(plVar11,0,0);
        (**(code **)(*plVar11 + 0xaf8))(plVar11,0);
        lVar6 = lVar6 + 8;
      } while (lVar13 * 8 != lVar6);
    }
    *(undefined1 *)(param_1 + 0x418) = 0;
LAB_1488ae028:
    uVar9 = 0;
  }
  if (local_70 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1488ae07e FUN_1488ae07e body=494 status=ok
// SIG undefined FUN_1488ae07e(void)

void FUN_1488ae07e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x278);
  lVar2 = param_1 + 0x288;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  local_60 = param_1;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x2a0) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0x2a0);
  }
  uStack_68 = CONCAT44(uStack_3c,uStack_40);
  local_70 = local_48;
  iStack_6c = iStack_44;
  local_80 = (undefined4)local_58;
  uStack_7c = local_58._4_4_;
  uStack_78 = (undefined4)uStack_50;
  uStack_74 = uStack_50._4_4_;
  local_88 = plVar1;
  if ((iStack_44 != iVar3) || (uStack_50 != lVar2)) {
    do {
      FUN_143d8403e(&local_60,*local_88 + (longlong)iStack_6c * 0x18,
                    *local_88 + (longlong)iStack_6c * 0x18 + 8);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar3));
  }
  plVar1 = (longlong *)(param_1 + 0x2c8);
  lVar2 = param_1 + 0x2d8;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x2f0) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0x2f0);
  }
  uStack_68 = CONCAT44(uStack_3c,uStack_40);
  local_70 = local_48;
  iStack_6c = iStack_44;
  local_80 = (undefined4)local_58;
  uStack_7c = local_58._4_4_;
  uStack_78 = (undefined4)uStack_50;
  uStack_74 = uStack_50._4_4_;
  local_88 = plVar1;
  if ((iStack_44 != iVar3) || (uStack_50 != lVar2)) {
    do {
      FUN_143d8403e(&local_60,*local_88 + (longlong)iStack_6c * 0x18,
                    *local_88 + (longlong)iStack_6c * 0x18 + 8);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar3));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ae26e FUN_1488ae26e body=33 status=ok
// SIG undefined FUN_1488ae26e(void)

void FUN_1488ae26e(longlong param_1)

{
  FUN_1401b2056();
  FUN_140491244(param_1 + 0x450);
  return;
}



// FUNCTION 1488ae290 FUN_1488ae290 body=53 status=ok
// SIG undefined FUN_1488ae290(void)

undefined8 * FUN_1488ae290(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*(longlong *)(lVar1 + 0x50) + 0x18))(lVar1 + 0x50,param_2);
  }
  return param_2;
}



// FUNCTION 1488ae2e4 FUN_1488ae2e4 body=81 status=ok
// SIG undefined FUN_1488ae2e4(void)

void FUN_1488ae2e4(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 == 0) {
    (**(code **)(param_1[-0x7c] + 0x698))(param_1 + -0x7c);
    lVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_14110fb2c(lVar1,param_2);
  return;
}



// FUNCTION 1488ae336 FUN_1488ae336 body=59 status=ok
// SIG undefined FUN_1488ae336(void)

longlong FUN_1488ae336(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1488b5c98(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_1488b5c8c(lVar2);
  return lVar2;
}



// FUNCTION 1488ae372 FUN_1488ae372 body=170 status=ok
// SIG undefined FUN_1488ae372(void)

undefined8 * FUN_1488ae372(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = param_2;
  puVar7 = param_1;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  uVar3 = param_2[0x13];
  lVar5 = param_2[0x14];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[0x14];
  param_1[0x13] = uVar3;
  param_1[0x14] = lVar5;
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
  FUN_145989806(param_1 + 0x15,param_2 + 0x15);
  return param_1;
}



// FUNCTION 1488ae41c FUN_1488ae41c body=225 status=ok
// SIG undefined FUN_1488ae41c(void)

undefined8 FUN_1488ae41c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar3 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x60);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      uVar4 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x20) == lVar1) {
          if ((undefined8 *)(lVar3 + 8) == (undefined8 *)0x0 || lVar3 == 0) goto LAB_1488ae437;
          local_10 = *(undefined8 *)(lVar3 + 8);
          uVar4 = FUN_14479d2ce();
          break;
        }
        iVar6 = *(int *)(lVar3 + 0x18);
      } while (iVar6 != -1);
      goto LAB_1488ae439;
    }
  }
LAB_1488ae437:
  uVar4 = 0;
LAB_1488ae439:
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1488ae4fe FUN_1488ae4fe body=473 status=ok
// SIG undefined FUN_1488ae4fe(void)

longlong FUN_1488ae4fe(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong local_98;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x20);
  lVar8 = param_1 + 0x30;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  local_a0 = param_3;
  local_98 = param_1;
  uStack_60 = lVar8;
  if (*(int *)(param_1 + 0x48) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x48);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar8)) {
    do {
      lVar6 = *local_90;
      lVar5 = (longlong)iStack_74;
      lVar4 = FUN_14479d2ce(lVar6 + lVar5 * 0x20 + 8);
      if (((lVar4 != 0) && (lVar3 = FUN_14479d2ce(lVar4 + 1000), lVar3 == param_2)) &&
         ((*local_a0 == 0 || (cVar2 = FUN_14021d296(lVar6 + lVar5 * 0x20,local_a0), cVar2 != '\0')))
         ) goto LAB_1488ae5b2;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while ((CONCAT44(uStack_7c,uStack_80) != lVar8 || iStack_74 != iVar7) || local_90 != plVar1);
  }
  if ((*local_a0 == 0) && ((longlong)*(int *)(local_98 + 0x78) != 0)) {
    lVar8 = *(longlong *)(local_98 + 0x70);
    lVar6 = (longlong)*(int *)(local_98 + 0x78) << 4;
    do {
      lVar4 = FUN_14479d2ce(lVar8);
      if ((lVar4 != 0) && (lVar5 = FUN_14479d2ce(lVar4 + 1000), lVar5 == param_2))
      goto LAB_1488ae5b2;
      lVar8 = lVar8 + 0x10;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  lVar4 = 0;
LAB_1488ae5b2:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1488ae6d8 FUN_1488ae6d8 body=457 status=ok
// SIG undefined FUN_1488ae6d8(void)

longlong FUN_1488ae6d8(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong local_98;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x20);
  lVar7 = param_1 + 0x30;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  local_a0 = param_3;
  local_98 = param_1;
  uStack_60 = lVar7;
  if (*(int *)(param_1 + 0x48) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = *(int *)(param_1 + 0x48);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar6) || (uStack_60 != lVar7)) {
    do {
      lVar5 = *local_90;
      lVar4 = (longlong)iStack_74;
      lVar3 = FUN_14479d2ce(lVar5 + lVar4 * 0x20 + 8);
      if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x3f0) == param_2)) &&
         ((*local_a0 == 0 || (cVar2 = FUN_14021d296(lVar5 + lVar4 * 0x20,local_a0), cVar2 != '\0')))
         ) goto LAB_1488ae78c;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while ((CONCAT44(uStack_7c,uStack_80) != lVar7 || iStack_74 != iVar6) || local_90 != plVar1);
  }
  if ((*local_a0 == 0) && ((longlong)*(int *)(local_98 + 0x78) != 0)) {
    lVar7 = *(longlong *)(local_98 + 0x70);
    lVar5 = (longlong)*(int *)(local_98 + 0x78) << 4;
    do {
      lVar3 = FUN_14479d2ce(lVar7);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x3f0) == param_2)) goto LAB_1488ae78c;
      lVar7 = lVar7 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  lVar3 = 0;
LAB_1488ae78c:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1488ae8a2 FUN_1488ae8a2 body=244 status=ok
// SIG undefined FUN_1488ae8a2(void)

void FUN_1488ae8a2(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar6 = (uint)lVar1 & 0xffff;
    lVar5 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x60);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x20) == lVar1) {
          if ((undefined8 *)(lVar5 + 8) != (undefined8 *)0x0 && lVar5 != 0) {
            local_18 = *(undefined8 *)(lVar5 + 8);
            plVar3 = (longlong *)FUN_14479d2ce();
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x650))(plVar3,param_3);
            }
          }
          break;
        }
        iVar4 = *(int *)(lVar5 + 0x18);
      } while (iVar4 != -1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488ae998 FUN_1488ae998 body=244 status=ok
// SIG undefined FUN_1488ae998(void)

void FUN_1488ae998(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar6 = (uint)lVar1 & 0xffff;
    lVar5 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x60);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x20) == lVar1) {
          if ((undefined8 *)(lVar5 + 8) != (undefined8 *)0x0 && lVar5 != 0) {
            local_18 = *(undefined8 *)(lVar5 + 8);
            plVar3 = (longlong *)FUN_14479d2ce();
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x658))(plVar3,param_3);
            }
          }
          break;
        }
        iVar4 = *(int *)(lVar5 + 0x18);
      } while (iVar4 != -1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488aea8e FUN_1488aea8e body=253 status=ok
// SIG undefined FUN_1488aea8e(void)

void FUN_1488aea8e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar2 = *param_2;
    uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar4 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x60);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x20) == lVar2) {
          if ((undefined8 *)(lVar4 + 8) != (undefined8 *)0x0 && lVar4 != 0) {
            local_18 = *(undefined8 *)(lVar4 + 8);
            lVar2 = FUN_14479d2ce();
            if (lVar2 != 0) {
              *(undefined1 *)(lVar2 + 0xae8) = 0;
              FUN_1487bb7e8(lVar2 + 0xad0,param_3);
            }
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488aeb8c FUN_1488aeb8c body=253 status=ok
// SIG undefined FUN_1488aeb8c(void)

void FUN_1488aeb8c(longlong param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar2 = *param_2;
    uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar4 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x60);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x20) == lVar2) {
          if ((undefined8 *)(lVar4 + 8) != (undefined8 *)0x0 && lVar4 != 0) {
            local_18 = *(undefined8 *)(lVar4 + 8);
            lVar2 = FUN_14479d2ce();
            if (lVar2 != 0) {
              *(undefined1 *)(lVar2 + 0xae8) = 1;
              FUN_1487bb7e8(lVar2 + 0xad0,param_3);
            }
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488aec8a FUN_1488aec8a body=252 status=ok
// SIG undefined FUN_1488aec8a(void)

undefined8 * FUN_1488aec8a(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar2 = *param_3;
    uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar4 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x60);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x20) == lVar2) {
          if ((undefined8 *)(lVar4 + 8) != (undefined8 *)0x0 && lVar4 != 0) {
            local_18 = *(undefined8 *)(lVar4 + 8);
            lVar2 = FUN_14479d2ce();
            if (lVar2 != 0) {
              FUN_1488adc6e(lVar2,param_2);
              goto LAB_1488aecb3;
            }
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  *param_2 = DAT_14caa8578;
LAB_1488aecb3:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488aed88 FUN_1488aed88 body=406 status=ok
// SIG undefined FUN_1488aed88(void)

void FUN_1488aed88(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  longlong local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = (longlong *)(param_1 + 0x20);
  local_48 = param_1 + 0x30;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_78 = local_40;
  iStack_74 = iStack_3c;
  local_70 = local_38;
  local_6c = local_34;
  local_88 = local_50;
  local_80 = local_48;
  local_58 = 0;
  local_90 = plVar2;
  local_68 = plVar2;
  local_60 = plVar2;
  if (iStack_3c < *(int *)(local_48 + 0x18)) {
    do {
      lVar1 = FUN_14479d2ce(*local_90 + (longlong)iStack_74 * 0x20 + 8);
      if (lVar1 != 0) {
        local_50 = lVar1;
        (*(code *)*param_2)(param_2[1],&local_50);
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < *(int *)(local_80 + 0x18));
    if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
      FUN_1488b5db2(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
    }
  }
  if (0 < *(int *)(param_1 + 0x78)) {
    lVar1 = 0;
    iVar3 = 0;
    do {
      plVar2 = (longlong *)FUN_14479d2ce(*(longlong *)(param_1 + 0x70) + lVar1);
      if (plVar2 != (longlong *)0x0) {
        local_90 = plVar2;
        (*(code *)*param_2)(param_2[1],&local_90);
      }
      iVar3 = iVar3 + 1;
      lVar1 = lVar1 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x78));
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488aef48 FUN_1488aef48 body=64 status=ok
// SIG undefined FUN_1488aef48(void)

longlong FUN_1488aef48(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    if ((*(char *)(param_1 + 0x48) == '\x01') && (*(longlong *)(param_1 + 0x18) != 0)) {
      FUN_1400020a8();
    }
    FUN_1488b63c8(param_1,param_2);
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  return param_1;
}



// FUNCTION 1488aef8c FUN_1488aef8c body=226 status=ok
// SIG undefined FUN_1488aef8c(void)

void FUN_1488aef8c(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar4 = FUN_144729dda(param_1 + 0x18);
  if ((cVar4 != '\0') && (*(longlong *)(param_1 + 0xd8) != 0)) {
    uVar6 = FUN_14479d2ce(param_1 + 0x18);
    uVar6 = FUN_1447210f0(uVar6);
    FUN_14132b09a(&local_30,uVar6);
    if (local_28 != (longlong *)0x0) {
      iVar5 = (int)local_28[1];
      do {
        if (iVar5 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_28[1];
        bVar8 = iVar5 == iVar3;
        if (bVar8) {
          *(int *)(local_28 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
        plVar7 = local_28;
      } while (!bVar8);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      if (plVar7 != (longlong *)0x0) {
        if (local_30 != 0) {
          FUN_143d842f2(local_30,param_2,0);
        }
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488b0418 FUN_1488b0418 body=478 status=ok
// SIG undefined FUN_1488b0418(void)

void FUN_1488b0418(undefined4 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double *pdVar11;
  uint uVar12;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar9 = (double)FUN_140c8331a();
  if ((dVar9 != 0.0) && (*(char *)((longlong)dVar9 + 0x524) == '\x01')) {
    lVar1 = *(longlong *)((longlong)dVar9 + 0x1c8);
    if (lVar1 == 0) {
      local_98 = DAT_14c846508;
      local_a8 = (undefined4)DAT_14c8464f8;
      uStack_a4 = DAT_14c8464f8._4_4_;
      uStack_a0 = (undefined4)DAT_14c846500;
      uStack_9c = DAT_14c846500._4_4_;
    }
    else {
      dVar4 = *(double *)(lVar1 + 0x240);
      dVar5 = *(double *)(lVar1 + 0x248);
      dVar6 = *(double *)(lVar1 + 0x250);
      dVar7 = *(double *)(lVar1 + 600);
      pdVar11 = *(double **)(lVar1 + 0x228);
      dVar10 = dVar9;
      local_88 = dVar4;
      uStack_80 = dVar5;
      local_78 = dVar6;
      uStack_70 = dVar7;
      if (pdVar11 == (double *)0x0) {
        param_1 = 0x40;
        pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
        dVar10 = DAT_14c8463d8;
        *pdVar11 = DAT_14c8463d0;
        pdVar11[1] = dVar10;
        dVar10 = DAT_14c8463e8;
        pdVar11[2] = DAT_14c8463e0;
        pdVar11[3] = dVar10;
        dVar10 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar11[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar11[5] = dVar10;
        dVar10 = DAT_14c846508;
        pdVar11[6] = DAT_14c846508;
        *(double **)(lVar1 + 0x228) = pdVar11;
      }
      auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar11[1]);
      auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar11);
      auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar11[1]) >> 0x20);
      iVar8 = movmskpd(SUB84(dVar10,0),auVar2);
      auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar11[3]);
      auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar11[2]);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar11[3]) >> 0x20);
      uVar12 = movmskpd(param_1,auVar3);
      if ((uVar12 & 0x3fffffff) != 0 || iVar8 != 0) {
        *(undefined4 *)(pdVar11 + 2) = (undefined4)local_78;
        *(undefined4 *)((longlong)pdVar11 + 0x14) = local_78._4_4_;
        *(undefined4 *)(pdVar11 + 3) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)pdVar11 + 0x1c) = uStack_70._4_4_;
        *(undefined4 *)pdVar11 = (undefined4)local_88;
        *(undefined4 *)((longlong)pdVar11 + 4) = local_88._4_4_;
        *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_80._4_4_;
        FUN_1448052ee(&local_88,&local_68);
        pdVar11[6] = local_58;
        pdVar11[4] = (double)CONCAT44(uStack_64,local_68);
        pdVar11[5] = (double)CONCAT44(uStack_5c,uStack_60);
      }
      local_98 = pdVar11[6];
      local_a8 = *(undefined4 *)(pdVar11 + 4);
      uStack_a4 = *(undefined4 *)((longlong)pdVar11 + 0x24);
      uStack_a0 = *(undefined4 *)(pdVar11 + 5);
      uStack_9c = *(undefined4 *)((longlong)pdVar11 + 0x2c);
    }
    local_88 = *(double *)(param_2 + 0x20);
    uStack_80 = *(double *)(param_2 + 0x28);
    local_78 = *(double *)(param_2 + 0x30);
    FUN_1401c9a0e(&local_a8,&local_68);
    if (*(longlong *)((longlong)dVar9 + 0x1c8) != 0) {
      local_78 = local_58;
      local_88 = (double)CONCAT44(uStack_64,local_68);
      uStack_80 = (double)CONCAT44(uStack_5c,uStack_60);
      local_b8 = 0;
      FUN_145849cd0(*(longlong *)((longlong)dVar9 + 0x1c8),&local_88,0,0);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b05f8 FUN_1488b05f8 body=91 status=ok
// SIG undefined FUN_1488b05f8(void)

void FUN_1488b05f8(undefined8 param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_140c8331a();
  if ((((lVar2 != 0) && (*(char *)(lVar2 + 0x524) == '\x01')) &&
      (lVar1 = *(longlong *)(lVar2 + 0x530), lVar1 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x3c0), lVar2 != 0)) {
    param_2 = param_2 + *(float *)(lVar2 + 0x38c);
    if (*(float *)(lVar1 + 0x5c) <= param_2) {
      param_2 = *(float *)(lVar1 + 0x5c);
    }
    if (param_2 <= *(float *)(lVar1 + 0x58)) {
      param_2 = *(float *)(lVar1 + 0x58);
    }
    *(float *)(lVar2 + 0x38c) = param_2;
  }
  return;
}



// FUNCTION 1488b0654 FUN_1488b0654 body=75 status=ok
// SIG undefined FUN_1488b0654(void)

void FUN_1488b0654(longlong param_1)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    local_10 = 0;
    FUN_1488b06a0();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b06a0 FUN_1488b06a0 body=541 status=ok
// SIG undefined FUN_1488b06a0(void)

void FUN_1488b06a0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [13];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = *(longlong *)(param_1 + 0xd8);
  if ((lVar3 == 0) || (lVar4 = *param_2, lVar4 == *(longlong *)(param_1 + 0xe0)))
  goto LAB_1488b06e4;
  puVar2 = (undefined8 *)(lVar3 + 0xd0);
  puVar7 = local_a8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar9 = *(undefined4 *)(lVar3 + 0x13c);
  if ((longlong)*(int *)(lVar3 + 0xa08) != 0) {
    puVar2 = (undefined8 *)(*(longlong *)(lVar3 + 0xa00) + 0x10);
    lVar5 = 0;
    do {
      if ((lVar4 != 0) && (puVar2[0xc] == lVar4)) {
        lVar5 = *(longlong *)(lVar3 + 0xa00) - lVar5;
        if (lVar5 != 0) {
          puVar7 = puVar2;
          puVar8 = local_a8;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar6 = (undefined4 *)(lVar3 + 0x13c);
          if (*(char *)(puVar2 + 0xd) != '\0') {
            puVar6 = (undefined4 *)(lVar5 + 0x7c);
          }
          uVar9 = *puVar6;
        }
        break;
      }
      puVar2 = puVar2 + 0x10;
      lVar5 = lVar5 + -0x80;
    } while (-lVar5 != (longlong)*(int *)(lVar3 + 0xa08) * 0x80);
  }
  lVar3 = FUN_140d97494(param_1);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x70) != '\0')) {
    if (*param_2 != 0) goto LAB_1488b06e4;
    lVar3 = *(longlong *)(param_1 + 0xd8);
    lVar4 = FUN_140d97494(param_1);
    if (lVar4 == 0) {
LAB_1488b07c4:
      lVar4 = 0xc0;
    }
    else {
      if (*(char *)(lVar4 + 0x70) == '\x02') {
        lVar4 = 0xad0;
        cVar1 = *(char *)(lVar3 + 0xac0);
      }
      else {
        if (*(char *)(lVar4 + 0x70) != '\x01') goto LAB_1488b07c4;
        lVar4 = 0xa30;
        cVar1 = *(char *)(lVar3 + 0xa20);
      }
      if (cVar1 == '\0') goto LAB_1488b07c4;
    }
    uVar9 = *(undefined4 *)(lVar3 + lVar4 + 0x7c);
    puVar2 = (undefined8 *)(lVar3 + lVar4 + 0x10);
    puVar7 = local_a8;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  lVar3 = FUN_140c8331a(param_1);
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x3c0) != 0) {
      *(undefined1 *)(lVar3 + 0x524) = 0;
      *(undefined4 *)(lVar3 + 0x520) = 0;
      *(undefined4 *)(lVar3 + 0x4a0) = *(undefined4 *)(*(longlong *)(lVar3 + 0x3c0) + 0x38c);
      puVar2 = &DAT_14c846480;
      if (*(longlong *)(lVar3 + 0x1c8) != 0) {
        puVar2 = (undefined8 *)(*(longlong *)(lVar3 + 0x1c8) + 0x240);
      }
      puVar7 = (undefined8 *)(lVar3 + 0x440);
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar7 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar2 = local_a8;
      puVar7 = (undefined8 *)(lVar3 + 0x4b0);
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar7 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar7 = puVar7 + 1;
      }
      *(undefined4 *)(lVar3 + 0x510) = uVar9;
    }
    *(longlong *)(param_1 + 0xe0) = *param_2;
  }
LAB_1488b06e4:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b08be FUN_1488b08be body=63 status=ok
// SIG undefined FUN_1488b08be(void)

void FUN_1488b08be(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    return;
  }
  FUN_146552988(param_1,*(longlong *)(param_1 + 0xd8) + 0xc0);
  FUN_145da2368(param_1,*(longlong *)(param_1 + 0xd8) + 0x140);
  return;
}



// FUNCTION 1488b08fd FUN_1488b08fd body=223 status=ok
// SIG undefined FUN_1488b08fd(void)

longlong * FUN_1488b08fd(longlong *param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    iVar3 = FUN_144b2c470(param_2);
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3);
    }
    if (iVar3 != 0) {
      FUN_1488b6544(param_1,iVar3);
    }
    FUN_144a7d35a(param_2,&local_30);
    if (-1 < (int)local_28) {
      do {
        if ((int)local_30[1] <= (int)local_28) break;
        lVar4 = FUN_14479d2ce((ulonglong)local_28 * 8 + *local_30);
        if (lVar4 != 0) {
          iVar3 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
            FUN_140cba038(param_1,iVar3);
          }
          *(longlong *)(*param_1 + (longlong)iVar3 * 8) = lVar4;
        }
        uVar1 = local_28 + 1;
        bVar2 = -2 < (int)local_28;
        local_28 = uVar1;
      } while (bVar2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b09de FUN_1488b09de body=254 status=ok
// SIG undefined FUN_1488b09de(void)

void FUN_1488b09de(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_140dddae6();
  if (cVar1 != '\0') {
    uVar2 = FUN_1408db39c(param_1,"prevent_saves");
    DAT_14cb80ee0 = FUN_1410c4486(uVar2,0);
    FUN_1488b0ade(&DAT_14cb80ee8,0);
    uVar2 = FUN_1408db39c(param_1,"whitelisted_missions");
    plVar3 = (longlong *)FUN_1407cbaec(uVar2);
    if ((longlong)(int)plVar3[2] != 0) {
      lVar4 = *plVar3;
      lVar5 = (longlong)(int)plVar3[2] << 4;
      do {
        FUN_14068d188(lVar4,local_44,0);
        FUN_1409612f0(&DAT_14cb80ee8,local_48,local_44,0);
        lVar4 = lVar4 + 0x10;
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != 0);
    }
    uVar2 = FUN_1408db39c(param_1,"mission_replay_allowed");
    DAT_14cb80f38 = FUN_1410c4486(uVar2,0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b0ade FUN_1488b0ade body=110 status=ok
// SIG undefined FUN_1488b0ade(void)

void FUN_1488b0ade(longlong param_1,uint param_2)

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
    FUN_1401bcd02(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_140961796(param_1);
    return;
  }
  FUN_140b79050(param_1);
  FUN_1401bcd02(param_1,param_2);
  return;
}



// FUNCTION 1488b0b4c FUN_1488b0b4c body=29 status=ok
// SIG undefined FUN_1488b0b4c(void)

undefined8 FUN_1488b0b4c(undefined8 param_1)

{
  FUN_140056680(param_1,L"demo_config.yml");
  return param_1;
}



// FUNCTION 1488b0b6a FUN_1488b0b6a body=819 status=ok
// SIG undefined FUN_1488b0b6a(void)

void FUN_1488b0b6a(longlong param_1,longlong *param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  
  iVar11 = 0x20;
  if (*(int *)(param_1 + 0x18) < 0x20) {
    iVar11 = *(int *)(param_1 + 0x18);
  }
  iVar8 = 0;
  if (iVar11 < 1) {
    iVar11 = 0;
  }
  iVar13 = iVar11 + 2;
  iVar9 = iVar11 + 1;
  dVar1 = *(double *)(param_1 + 8);
  dVar2 = *(double *)(param_1 + 0x10);
  iVar10 = -3 - iVar11;
  iVar11 = -2 - iVar11;
  iVar7 = -1;
  iVar12 = 0;
  do {
    dVar5 = (double)((float)iVar12 / (float)iVar9);
    iVar14 = 0;
    do {
      dVar6 = (double)((float)iVar14 / (float)iVar9);
      if (*(char *)(param_1 + 0x21) == '\x01') {
        iVar3 = (int)param_2[5];
        *(uint *)(param_2 + 5) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0x2c) < iVar3 + 1U) {
          FUN_14489624a(param_2 + 4,iVar3);
        }
        lVar15 = param_2[4];
        *(double *)(lVar15 + (longlong)iVar3 * 0x10) = dVar6;
        *(double *)(lVar15 + 8 + (longlong)iVar3 * 0x10) = dVar5;
      }
      if ((param_3 != (longlong *)0x0) &&
         ((((iVar12 == 0 || (iVar9 == iVar14)) || (iVar12 == iVar9)) || (iVar14 == 0)))) {
        lVar15 = param_2[1];
        iVar3 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_1446f48e2(param_3,iVar3);
        }
        *(int *)(*param_3 + (longlong)iVar3 * 4) = (int)lVar15;
      }
      iVar3 = (int)param_2[1];
      lVar15 = (longlong)iVar3;
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1403e3958(param_2,iVar3);
      }
      lVar4 = *param_2;
      *(undefined8 *)(lVar4 + lVar15 * 0x18) = 0;
      *(double *)(lVar4 + 8 + lVar15 * 0x18) = (double)(float)(dVar6 * (dVar2 + dVar2) + -dVar2);
      *(double *)(lVar4 + 0x10 + lVar15 * 0x18) = (double)(float)((dVar1 + dVar1) * dVar5 + -dVar1);
      if (iVar14 != 0 && iVar12 != 0) {
        FUN_143d87f52(param_1,iVar10 + iVar14,iVar11 + iVar14,iVar8 + iVar14,param_2 + 2);
        FUN_143d87f52(param_1,iVar10 + iVar14,iVar8 + iVar14,iVar7 + iVar14,param_2 + 2);
      }
      iVar14 = iVar14 + 1;
    } while (iVar13 != iVar14);
    iVar12 = iVar12 + 1;
    iVar10 = iVar10 + iVar13;
    iVar7 = iVar7 + iVar13;
    iVar8 = iVar8 + iVar13;
    iVar11 = iVar11 + iVar13;
  } while (iVar12 != iVar13);
  return;
}



// FUNCTION 1488b0e9e FUN_1488b0e9e body=82 status=ok
// SIG undefined FUN_1488b0e9e(void)

undefined4 FUN_1488b0e9e(longlong *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVar2 = param_2;
  }
  iVar1 = (int)uVar2 >> 5;
  if (-0x20 < (int)param_2) {
    if (iVar1 < (int)param_1[1]) goto LAB_1488b0ed5;
    if (0x7ff < (int)param_2) {
      return 0;
    }
  }
  FUN_14478085e(param_1,iVar1 + 1,0);
LAB_1488b0ed5:
  uVar2 = *(uint *)(*param_1 + (longlong)iVar1 * 4);
  return CONCAT31((int3)(uVar2 >> 8),(uVar2 >> (param_2 & 0x1f) & 1) != 0);
}



// FUNCTION 1488b0ef0 FUN_1488b0ef0 body=110 status=ok
// SIG undefined FUN_1488b0ef0(void)

void FUN_1488b0ef0(longlong *param_1,int param_2,char param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  iVar3 = iVar3 >> 5;
  if (-0x20 < param_2) {
    if (iVar3 < (int)param_1[1]) goto LAB_1488b0f31;
    if (0x7ff < param_2) {
      return;
    }
  }
  FUN_14478085e(param_1,iVar3 + 1,0);
LAB_1488b0f31:
  uVar2 = 1 << ((byte)param_2 & 0x1f);
  if (param_3 == '\0') {
    puVar1 = (uint *)(*param_1 + (longlong)iVar3 * 4);
    *puVar1 = *puVar1 & ~uVar2;
  }
  else {
    puVar1 = (uint *)(*param_1 + (longlong)iVar3 * 4);
    *puVar1 = *puVar1 | uVar2;
  }
  return;
}



// FUNCTION 1488b0f5e FUN_1488b0f5e body=228 status=ok
// SIG undefined FUN_1488b0f5e(void)

void FUN_1488b0f5e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 != 0) {
    iVar3 = (int)param_1[1];
    if (0 < iVar3) {
      iVar8 = 0;
      lVar6 = 0;
      local_58 = param_1;
      do {
        uVar1 = *(uint *)(*param_1 + lVar6 * 4);
        if (uVar1 != 0) {
          lVar7 = 0;
          do {
            if ((uVar1 >> ((uint)lVar7 & 0x1f) & 1) != 0) {
              local_4c = iVar8 + (uint)lVar7;
              pcVar2 = (code *)*param_2;
              plVar5 = (longlong *)param_2[2];
              if ((longlong *)param_2[2] == (longlong *)0x0) {
                plVar5 = param_2 + 4;
              }
              uVar4 = (**(code **)(*plVar5 + 8))();
              (*pcVar2)(uVar4,&local_4c);
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 != 0x20);
          iVar3 = (int)local_58[1];
          param_1 = local_58;
        }
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 0x20;
      } while (lVar6 < iVar3);
      if (*param_2 == 0) goto LAB_1488b101b;
    }
    plVar5 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_1488b101b:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b1052 FUN_1488b1052 body=289 status=ok
// SIG undefined FUN_1488b1052(void)

void FUN_1488b1052(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x48);
    lVar7 = (longlong)*(int *)(param_1 + 0x50) << 3;
    do {
      lVar3 = FUN_14479d2ce(lVar6);
      if (lVar3 == param_2) goto LAB_1488b1143;
      lVar6 = lVar6 + 8;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    iVar2 = *(int *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
      FUN_1488b6b3a((longlong *)(param_1 + 0x48),iVar2);
    }
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar2 * 8);
    *puVar1 = 0;
    FUN_14485c47a(puVar1,param_2);
    uVar4 = FUN_14479d2ce(puVar1);
    FUN_1406966b6(uVar4,&DAT_14cb80f90,1);
  }
  if (param_2 != 0) {
    uVar4 = FUN_1401b0f18();
    plVar5 = (longlong *)FUN_144718840(param_2,uVar4);
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x28))(plVar5);
      FUN_141256c7a(local_38,param_1,&LAB_1488b140a);
      FUN_1448b6402(lVar6 + 0x28,local_40,local_38);
      FUN_1449db362(local_38);
    }
  }
LAB_1488b1143:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b1174 FUN_1488b1174 body=216 status=ok
// SIG undefined FUN_1488b1174(void)

void FUN_1488b1174(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined4 local_70;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x3a) == '\0') {
    lVar1 = FUN_14479d2ce(param_1 + 0x14);
    if (lVar1 != 0) {
      lVar1 = FUN_1447210f0(lVar1);
      if (lVar1 != 0) {
        *(undefined1 *)(param_1 + 0x3a) = 1;
        uVar2 = FUN_144a88394(lVar1);
        FUN_1488b1538(local_88,param_1);
        local_78 = 0;
        local_70 = 0;
        FUN_14487d8d8(&local_78,local_88);
        local_38 = 1;
        FUN_14016fdb0(uVar2,local_90,&local_78);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_38])(&local_78);
        FUN_1449db362(local_88);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b124e FUN_1488b124e body=442 status=ok
// SIG undefined FUN_1488b124e(void)

void FUN_1488b124e(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  GUID local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_2 != 0) && (*(char *)(param_1 + 0x10) == '\0')) &&
     (*(longlong *)(param_2 + 0xa8) != 0)) {
    *(undefined1 *)(param_1 + 0x10) = 1;
    *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)param_3;
    lVar1 = param_1 + 0x14;
    FUN_14485c47a(lVar1,*(undefined8 *)(param_2 + 0xa8));
    cVar4 = FUN_144729dda(lVar1);
    if (cVar4 != '\0') {
      lVar5 = FUN_14479d2ce(lVar1);
      FUN_141256e1a(&local_58,param_1);
      FUN_1412c5acc(lVar5 + 0x330,local_60,&local_58);
      FUN_1449db362(&local_58);
      lVar5 = FUN_14479d2ce(lVar1);
      iVar2 = *(int *)(lVar5 + 0x1c0);
      if ((longlong)iVar2 != 0) {
        lVar5 = *(longlong *)(lVar5 + 0x1b8);
        lVar8 = 0;
        do {
          FUN_1488b1052(param_1,*(undefined8 *)(lVar5 + lVar8));
          lVar8 = lVar8 + 8;
        } while ((longlong)iVar2 * 8 != lVar8);
      }
    }
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(param_1 + 0x1c) = *param_3;
    local_58.Data1 = 0;
    local_58.Data2 = 0;
    local_58.Data3 = 0;
    local_58.Data4[0] = '\0';
    local_58.Data4[1] = '\0';
    local_58.Data4[2] = '\0';
    local_58.Data4[3] = '\0';
    local_58.Data4[4] = '\0';
    local_58.Data4[5] = '\0';
    local_58.Data4[6] = '\0';
    local_58.Data4[7] = '\0';
    CoCreateGuid(&local_58);
    *(ulong *)(param_1 + 0x28) = local_58.Data1;
    *(undefined4 *)(param_1 + 0x2c) = local_58._4_4_;
    *(undefined4 *)(param_1 + 0x30) = local_58.Data4._0_4_;
    *(undefined4 *)(param_1 + 0x34) = local_58.Data4._4_4_;
    uVar6 = FUN_14001cc68(0x158,0x10);
    FUN_1407e4f8e(uVar6);
    puVar3 = *(undefined8 **)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = uVar6;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
      uVar6 = *(undefined8 *)(param_1 + 0x40);
    }
    uVar7 = FUN_14479d2ce(lVar1);
    FUN_1407e7de2(uVar6,param_2,uVar7);
    lVar1 = *(longlong *)(param_1 + 0x40);
    FUN_141256c7a(&local_58,param_1,FUN_1488b1174);
    FUN_1448b6402(lVar1 + 0x10,local_60,&local_58);
    FUN_1449db362(&local_58);
    FUN_141256fc0(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b1414 FUN_1488b1414 body=292 status=ok
// SIG undefined FUN_1488b1414(void)

void FUN_1488b1414(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    plVar5 = (longlong *)(param_1 + 0x48);
    lVar7 = *(longlong *)(param_1 + 0x48);
    lVar6 = (longlong)*(int *)(param_1 + 0x50) << 3;
    uVar8 = 0;
    do {
      lVar3 = FUN_14479d2ce(lVar7);
      if (lVar3 == param_2) {
        if ((int)uVar8 < 0) {
          return;
        }
        if (*(int *)(param_1 + 0x50) <= (int)uVar8) {
          return;
        }
        if (*(char *)(param_1 + 0x38) == '\x01') {
          lVar7 = (ulonglong)(uVar8 & 0x7fffffff) * 8;
          cVar1 = FUN_144729dda(*plVar5 + lVar7);
          if (cVar1 != '\0') {
            uVar4 = FUN_14479d2ce(lVar7 + *plVar5);
            FUN_1406966b6(uVar4,&DAT_14cb80f90,0);
          }
        }
        iVar2 = *(int *)(param_1 + 0x50);
        if (iVar2 - 1U != uVar8) {
          memmove((void *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar8 & 0x7fffffff) * 8),
                  (void *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar8 & 0x7fffffff) * 8 + 8),
                  (longlong)(int)((iVar2 - 1U) - uVar8) << 3);
          iVar2 = *(int *)(param_1 + 0x50);
        }
        *(int *)(param_1 + 0x50) = iVar2 + -1;
        FUN_1488b6bc0(plVar5);
        if (param_2 == 0) {
          return;
        }
        uVar4 = FUN_1401b0f18();
        plVar5 = (longlong *)FUN_144718840(param_2,uVar4);
        if (plVar5 == (longlong *)0x0) {
          return;
        }
        lVar7 = (**(code **)(*plVar5 + 0x28))(plVar5);
        FUN_140457ffc(lVar7 + 0x28,param_1);
        return;
      }
      lVar7 = lVar7 + 8;
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 1488b1538 FUN_1488b1538 body=380 status=ok
// SIG undefined FUN_1488b1538(void)

longlong * FUN_1488b1538(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_1488b1642:
    *puVar3 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b40ead0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_141256fc0;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1488b1642;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b40ead0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_141256fc0;
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
  return param_1;
}



// FUNCTION 1488b16b4 FUN_1488b16b4 body=114 status=ok
// SIG undefined FUN_1488b16b4(void)

void FUN_1488b16b4(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  int local_28;
  longlong local_18 [3];
  
  local_18[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18[0] = 0;
  local_18[1] = 0;
  LOCK();
  iVar1 = DAT_14cb80fb0 + 1;
  UNLOCK();
  iVar2 = DAT_14cb80fb0 + 1;
  DAT_14cb80fb0 = iVar1;
  if ((int)param_1[8] != iVar2) {
    *(int *)(param_1 + 8) = iVar2;
    local_28 = iVar2;
    (**(code **)(*param_1 + 0x2a8))(0,param_2,local_18,param_3);
  }
  if (local_18[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b1728 FUN_1488b1728 body=77 status=ok
// SIG undefined FUN_1488b1728(void)

void FUN_1488b1728(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1427dc336(local_20);
  switchD_143c3d4dc::caseD_3d(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b1776 FUN_1488b1776 body=151 status=ok
// SIG undefined FUN_1488b1776(void)

void FUN_1488b1776(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  plVar2 = (longlong *)param_1[1];
  if (plVar2 == (longlong *)0x0) {
    lVar3 = *param_1;
    if (lVar3 != 0) {
      lVar4 = *param_2;
      iVar1 = (int)param_2[1];
      lVar6 = (longlong)iVar1;
      if (lVar6 != 0) {
        uVar5 = 0;
        do {
          if (*(longlong *)(lVar4 + uVar5) == lVar3) {
            if ((int)(~uVar5 >> 3) != 0) {
              return;
            }
            break;
          }
          uVar5 = uVar5 + 8;
        } while (lVar6 * 8 - uVar5 != 0);
      }
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14023b962(param_2,iVar1);
        lVar4 = *param_2;
      }
      *(longlong *)(lVar4 + lVar6 * 8) = lVar3;
    }
  }
  else if ((int)plVar2[8] != param_3) {
    *(int *)(plVar2 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0001488b180a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2b0))(plVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 1488b1842 FUN_1488b1842 body=130 status=ok
// SIG undefined FUN_1488b1842(void)

undefined8 FUN_1488b1842(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  uStack_20 = 0;
  LOCK();
  iVar1 = DAT_14cb80fb0 + 1;
  UNLOCK();
  iVar3 = DAT_14cb80fb0 + 1;
  DAT_14cb80fb0 = iVar1;
  if ((int)param_1[8] != iVar3) {
    *(int *)(param_1 + 8) = iVar3;
    (**(code **)(*param_1 + 0x2b0))(0,&local_28);
  }
  if ((int)uStack_20 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *local_28;
  }
  if (local_28 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b18c6 FUN_1488b18c6 body=121 status=ok
// SIG undefined FUN_1488b18c6(void)

void FUN_1488b18c6(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = rand();
  local_20 = local_20 +
             ((int)((longlong)local_20 * 0x40000001 >> 0x3d) - (local_20 >> 0x1f)) * -0x7fffffff;
  local_1c = local_20;
  FUN_1488b16b4(param_1 + -0x48,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b1940 FUN_1488b1940 body=42 status=ok
// SIG undefined FUN_1488b1940(void)

undefined8 FUN_1488b1940(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_1488b1842(param_1 + -0x38);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488b195c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x3f8))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1488b197f FUN_1488b197f body=142 status=ok
// SIG undefined FUN_1488b197f(void)

void FUN_1488b197f(longlong param_1,longlong *param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = (longlong)*(int *)(param_1 + 0x18) / (longlong)(int)(uint)*(byte *)(param_1 + 9) & 0xffff;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (*(int *)((longlong)param_3 + 0xc) < (int)uVar5) {
    FUN_140824bde(param_3,uVar5);
  }
  if ((int)uVar5 != 0) {
    uVar6 = 0;
    do {
      uVar1 = *(ushort *)(lVar3 + uVar6 * 2);
      if ((int)(uint)uVar1 < (int)param_2[1]) {
        lVar4 = *param_2;
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_14023b962(param_3,iVar2);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar2 * 8) =
             *(undefined8 *)(lVar4 + (ulonglong)uVar1 * 8);
      }
      uVar6 = uVar6 + 1;
    } while (uVar5 != uVar6);
  }
  return;
}



// FUNCTION 1488b1a42 FUN_1488b1a42 body=79 status=ok
// SIG undefined FUN_1488b1a42(void)

ulonglong FUN_1488b1a42(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1447210f0(param_2);
  lVar3 = FUN_140149a73(lVar2,0);
  if (lVar3 == 0) {
    bVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x18) == 0) {
    bVar1 = 1;
  }
  else {
    lVar2 = param_1 + 0x10;
    bVar1 = FUN_1405d584e(lVar2,lVar3);
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar3 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 1488b1a9a FUN_1488b1a9a body=188 status=ok
// SIG undefined FUN_1488b1a9a(void)

longlong FUN_1488b1a9a(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_1488b1b39;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1488b1b58(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_1488b1b39:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1488b1b58 FUN_1488b1b58 body=272 status=ok
// SIG undefined FUN_1488b1b58(void)

undefined4 * FUN_1488b1b58(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1488b1c6a(param_1,local_48);
  FUN_1488b1df4(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_1488b1d58(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
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
      FUN_1488b1eb6(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b1c6a FUN_1488b1c6a body=238 status=ok
// SIG undefined FUN_1488b1c6a(void)

int * FUN_1488b1c6a(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 1488b1d58 FUN_1488b1d58 body=155 status=ok
// SIG undefined FUN_1488b1d58(void)

undefined8 FUN_1488b1d58(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          memmove(_Dst,param_3,0x58);
          FUN_148884786(param_1,*param_4,1);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1488b1df4 FUN_1488b1df4 body=193 status=ok
// SIG undefined FUN_1488b1df4(void)

undefined8 * FUN_1488b1df4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_50 = 0xff7fffff7f7fffff;
  FUN_144a7a8f6(&local_48);
  uStack_40._0_6_ = CONCAT24(0x101,(undefined4)uStack_40);
  local_38 = 0;
  uStack_30 = uStack_30 & 0xffffffff00000000;
  *param_2 = *(undefined8 *)*param_1;
  FUN_141890c22(param_2 + 1,&local_78);
  *(undefined4 *)(param_2 + 4) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_2 + 0x24) = uStack_60._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_58._4_4_;
  *(undefined4 *)(param_2 + 6) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0x34) = uStack_50._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x3c) = local_48._4_4_;
  *(undefined4 *)(param_2 + 8) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x44) = uStack_40._4_4_;
  *(undefined4 *)(param_2 + 9) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x4c) = local_38._4_4_;
  *(undefined4 *)(param_2 + 10) = (undefined4)uStack_30;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b1eb6 FUN_1488b1eb6 body=477 status=ok
// SIG undefined FUN_1488b1eb6(void)

void FUN_1488b1eb6(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 1488b2094 FUN_1488b2094 body=147 status=ok
// SIG undefined FUN_1488b2094(void)

void FUN_1488b2094(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc0)) {
      uVar5 = uVar4 / 0xc0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488b2128 FUN_1488b2128 body=29 status=ok
// SIG undefined FUN_1488b2128(void)

undefined8 FUN_1488b2128(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488b2146 FUN_1488b2146 body=437 status=ok
// SIG undefined FUN_1488b2146(void)

longlong * FUN_1488b2146(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_14045cb56(param_2,&local_38);
  plVar3 = local_30;
  if (local_30 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_14ac8b0f0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b40e2b0;
    puVar4[3] = local_38;
    puVar4[4] = 0;
    puVar4[5] = &LAB_1488a7676;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_14ac8b0f0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b40e2b0;
    puVar4[3] = local_38;
    puVar4[4] = local_30;
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = &LAB_1488a7676;
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
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
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b22fc FUN_1488b22fc body=64 status=ok
// SIG undefined FUN_1488b22fc(void)

undefined8 * FUN_1488b22fc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b40e2b0;
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



// FUNCTION 1488b2340 FUN_1488b2340 body=81 status=ok
// SIG undefined FUN_1488b2340(void)

undefined8 FUN_1488b2340(longlong param_1)

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



// FUNCTION 1488b2398 FUN_1488b2398 body=89 status=ok
// SIG undefined FUN_1488b2398(void)

bool FUN_1488b2398(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1488b23e3;
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
LAB_1488b23e3:
  return lVar6 == param_2;
}



// FUNCTION 1488b240e FUN_1488b240e body=118 status=ok
// SIG undefined FUN_1488b240e(void)

void FUN_1488b240e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e2b0;
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



// FUNCTION 1488b2484 FUN_1488b2484 body=118 status=ok
// SIG undefined FUN_1488b2484(void)

void FUN_1488b2484(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e2b0;
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



// FUNCTION 1488b24fa FUN_1488b24fa body=156 status=ok
// SIG undefined FUN_1488b24fa(void)

void FUN_1488b24fa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8b0f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40e2b0;
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
                    /* WARNING: Could not recover jumptable at 0x0001488b2586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488b2596 FUN_1488b2596 body=98 status=ok
// SIG undefined FUN_1488b2596(void)

void FUN_1488b2596(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001488b25df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001488b25ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1488b25f8 FUN_1488b25f8 body=94 status=ok
// SIG undefined FUN_1488b25f8(void)

ulonglong FUN_1488b25f8(longlong param_1)

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
LAB_1488b264b:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1488b264b;
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



// FUNCTION 1488b2656 FUN_1488b2656 body=210 status=ok
// SIG undefined FUN_1488b2656(void)

undefined8 * FUN_1488b2656(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  code *pcVar5;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar5 != (code *)0x0) {
      puVar3 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        puVar3 = (undefined8 *)*param_1;
      }
      (*pcVar5)(puVar3);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
  }
  bVar1 = *(byte *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 3);
  *(ushort *)(param_1 + 3) = uVar2;
  if (uVar2 < 0x19) {
    uVar4 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85b8 + uVar4);
    if ((pcVar5 == (code *)0x0) &&
       (pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + uVar4), pcVar5 == (code *)0x0)) {
      memcpy(param_1,param_2,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
    }
    else {
      (*pcVar5)(param_1,param_2);
    }
  }
  else {
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined2 *)(param_2 + 3) = 0;
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  return param_1;
}



// FUNCTION 1488b2728 FUN_1488b2728 body=437 status=ok
// SIG undefined FUN_1488b2728(void)

longlong * FUN_1488b2728(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_14045cb56(param_2,&local_38);
  plVar3 = local_30;
  if (local_30 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_14b40ed20;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b40e320;
    puVar4[3] = local_38;
    puVar4[4] = 0;
    puVar4[5] = &LAB_1488a897c;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_14b40ed20;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b40e320;
    puVar4[3] = local_38;
    puVar4[4] = local_30;
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = &LAB_1488a897c;
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
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
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b28de FUN_1488b28de body=64 status=ok
// SIG undefined FUN_1488b28de(void)

undefined8 * FUN_1488b28de(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b40e320;
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



// FUNCTION 1488b2922 FUN_1488b2922 body=81 status=ok
// SIG undefined FUN_1488b2922(void)

undefined8 FUN_1488b2922(longlong param_1)

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



// FUNCTION 1488b297a FUN_1488b297a body=89 status=ok
// SIG undefined FUN_1488b297a(void)

bool FUN_1488b297a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1488b29c5;
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
LAB_1488b29c5:
  return lVar6 == param_2;
}



// FUNCTION 1488b29f0 FUN_1488b29f0 body=118 status=ok
// SIG undefined FUN_1488b29f0(void)

void FUN_1488b29f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40ed20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e320;
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



// FUNCTION 1488b2a66 FUN_1488b2a66 body=118 status=ok
// SIG undefined FUN_1488b2a66(void)

void FUN_1488b2a66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40ed20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e320;
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



// FUNCTION 1488b2adc FUN_1488b2adc body=156 status=ok
// SIG undefined FUN_1488b2adc(void)

void FUN_1488b2adc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b40ed20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40e320;
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
                    /* WARNING: Could not recover jumptable at 0x0001488b2b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488b2b78 FUN_1488b2b78 body=98 status=ok
// SIG undefined FUN_1488b2b78(void)

void FUN_1488b2b78(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001488b2bc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001488b2bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1488b2bda FUN_1488b2bda body=94 status=ok
// SIG undefined FUN_1488b2bda(void)

ulonglong FUN_1488b2bda(longlong param_1)

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
LAB_1488b2c2d:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1488b2c2d;
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



// FUNCTION 1488b2c3a FUN_1488b2c3a body=437 status=ok
// SIG undefined FUN_1488b2c3a(void)

longlong * FUN_1488b2c3a(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_14045cb56(param_2,&local_38);
  plVar3 = local_30;
  if (local_30 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_14b40d390;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b40e390;
    puVar4[3] = local_38;
    puVar4[4] = 0;
    puVar4[5] = FUN_1488a9e94;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_14b40d390;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b40e390;
    puVar4[3] = local_38;
    puVar4[4] = local_30;
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = FUN_1488a9e94;
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
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
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b2df0 FUN_1488b2df0 body=64 status=ok
// SIG undefined FUN_1488b2df0(void)

undefined8 * FUN_1488b2df0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b40e390;
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



// FUNCTION 1488b2e34 FUN_1488b2e34 body=81 status=ok
// SIG undefined FUN_1488b2e34(void)

undefined8 FUN_1488b2e34(longlong param_1)

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



// FUNCTION 1488b2e8c FUN_1488b2e8c body=89 status=ok
// SIG undefined FUN_1488b2e8c(void)

bool FUN_1488b2e8c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1488b2ed7;
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
LAB_1488b2ed7:
  return lVar6 == param_2;
}



// FUNCTION 1488b2f02 FUN_1488b2f02 body=118 status=ok
// SIG undefined FUN_1488b2f02(void)

void FUN_1488b2f02(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40d390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e390;
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



// FUNCTION 1488b2f78 FUN_1488b2f78 body=118 status=ok
// SIG undefined FUN_1488b2f78(void)

void FUN_1488b2f78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40d390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e390;
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



// FUNCTION 1488b2fee FUN_1488b2fee body=156 status=ok
// SIG undefined FUN_1488b2fee(void)

void FUN_1488b2fee(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b40d390;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40e390;
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
                    /* WARNING: Could not recover jumptable at 0x0001488b307a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488b308a FUN_1488b308a body=98 status=ok
// SIG undefined FUN_1488b308a(void)

void FUN_1488b308a(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001488b30d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001488b30e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1488b30ec FUN_1488b30ec body=94 status=ok
// SIG undefined FUN_1488b30ec(void)

ulonglong FUN_1488b30ec(longlong param_1)

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
LAB_1488b313f:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1488b313f;
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



// FUNCTION 1488b314a FUN_1488b314a body=78 status=ok
// SIG undefined FUN_1488b314a(void)

undefined8 * FUN_1488b314a(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar2 != 0) goto LAB_1488b3174;
  }
  lVar2 = 0;
LAB_1488b3174:
  FUN_14485c47a(param_1,lVar2);
  cVar1 = FUN_14493c216(param_1,0);
  if (cVar1 == '\0') {
    param_1[1] = param_2;
  }
  return param_1;
}



// FUNCTION 1488b3198 FUN_1488b3198 body=64 status=ok
// SIG undefined FUN_1488b3198(void)

undefined8 * FUN_1488b3198(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b40e400;
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



// FUNCTION 1488b31dc FUN_1488b31dc body=81 status=ok
// SIG undefined FUN_1488b31dc(void)

undefined8 FUN_1488b31dc(longlong param_1)

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



// FUNCTION 1488b3234 FUN_1488b3234 body=89 status=ok
// SIG undefined FUN_1488b3234(void)

bool FUN_1488b3234(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1488b327f;
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
LAB_1488b327f:
  return lVar6 == param_2;
}



// FUNCTION 1488b32aa FUN_1488b32aa body=118 status=ok
// SIG undefined FUN_1488b32aa(void)

void FUN_1488b32aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8c8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e400;
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



// FUNCTION 1488b3320 FUN_1488b3320 body=118 status=ok
// SIG undefined FUN_1488b3320(void)

void FUN_1488b3320(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8c8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e400;
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



// FUNCTION 1488b3396 FUN_1488b3396 body=156 status=ok
// SIG undefined FUN_1488b3396(void)

void FUN_1488b3396(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8c8d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40e400;
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
                    /* WARNING: Could not recover jumptable at 0x0001488b3422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488b3432 FUN_1488b3432 body=98 status=ok
// SIG undefined FUN_1488b3432(void)

void FUN_1488b3432(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001488b347b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001488b348a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1488b3494 FUN_1488b3494 body=94 status=ok
// SIG undefined FUN_1488b3494(void)

ulonglong FUN_1488b3494(longlong param_1)

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
LAB_1488b34e7:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1488b34e7;
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



// FUNCTION 1488b34f2 FUN_1488b34f2 body=29 status=ok
// SIG undefined FUN_1488b34f2(void)

undefined8 FUN_1488b34f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488b352c FUN_1488b352c body=93 status=ok
// SIG undefined FUN_1488b352c(void)

void FUN_1488b352c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8c8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488b358a FUN_1488b358a body=93 status=ok
// SIG undefined FUN_1488b358a(void)

void FUN_1488b358a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8c8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488b35e8 FUN_1488b35e8 body=126 status=ok
// SIG undefined FUN_1488b35e8(void)

void FUN_1488b35e8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8c8d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40e470;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488b3657. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488b3674 FUN_1488b3674 body=21 status=ok
// SIG undefined FUN_1488b3674(void)

undefined8 FUN_1488b3674(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1488b368a FUN_1488b368a body=64 status=ok
// SIG undefined FUN_1488b368a(void)

undefined8 * FUN_1488b368a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b40e4e0;
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



// FUNCTION 1488b36ce FUN_1488b36ce body=81 status=ok
// SIG undefined FUN_1488b36ce(void)

undefined8 FUN_1488b36ce(longlong param_1)

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



// FUNCTION 1488b3726 FUN_1488b3726 body=89 status=ok
// SIG undefined FUN_1488b3726(void)

bool FUN_1488b3726(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1488b3771;
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
LAB_1488b3771:
  return lVar6 == param_2;
}



// FUNCTION 1488b379c FUN_1488b379c body=118 status=ok
// SIG undefined FUN_1488b379c(void)

void FUN_1488b379c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8c8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e4e0;
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



// FUNCTION 1488b3812 FUN_1488b3812 body=118 status=ok
// SIG undefined FUN_1488b3812(void)

void FUN_1488b3812(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8c8d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e4e0;
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



// FUNCTION 1488b3888 FUN_1488b3888 body=156 status=ok
// SIG undefined FUN_1488b3888(void)

void FUN_1488b3888(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8c8d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40e4e0;
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
                    /* WARNING: Could not recover jumptable at 0x0001488b3914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488b3924 FUN_1488b3924 body=98 status=ok
// SIG undefined FUN_1488b3924(void)

void FUN_1488b3924(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001488b396d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001488b397c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1488b3986 FUN_1488b3986 body=94 status=ok
// SIG undefined FUN_1488b3986(void)

ulonglong FUN_1488b3986(longlong param_1)

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
LAB_1488b39d9:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1488b39d9;
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



// FUNCTION 1488b39e4 FUN_1488b39e4 body=230 status=ok
// SIG undefined FUN_1488b39e4(void)

undefined8 * FUN_1488b39e4(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1488b3acc FUN_1488b3acc body=29 status=ok
// SIG undefined FUN_1488b3acc(void)

undefined8 FUN_1488b3acc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488b3b04 FUN_1488b3b04 body=29 status=ok
// SIG undefined FUN_1488b3b04(void)

bool FUN_1488b3b04(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488b3b22 FUN_1488b3b22 body=26 status=ok
// SIG undefined FUN_1488b3b22(void)

bool FUN_1488b3b22(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1488b3b3c FUN_1488b3b3c body=24 status=ok
// SIG undefined FUN_1488b3b3c(void)

bool FUN_1488b3b3c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1488b3b60 FUN_1488b3b60 body=101 status=ok
// SIG undefined FUN_1488b3b60(void)

void FUN_1488b3b60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40e5e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488b3bc6 FUN_1488b3bc6 body=101 status=ok
// SIG undefined FUN_1488b3bc6(void)

void FUN_1488b3bc6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40e5e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40e570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488b3c2c FUN_1488b3c2c body=134 status=ok
// SIG undefined FUN_1488b3c2c(void)

void FUN_1488b3c2c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b40e5e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40e570;
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
                    /* WARNING: Could not recover jumptable at 0x0001488b3ca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488b3cb2 FUN_1488b3cb2 body=52 status=ok
// SIG undefined FUN_1488b3cb2(void)

void FUN_1488b3cb2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488b3ce3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1488b3ce6 FUN_1488b3ce6 body=167 status=ok
// SIG undefined FUN_1488b3ce6(void)

bool FUN_1488b3ce6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488b3d90 FUN_1488b3d90 body=110 status=ok
// SIG undefined FUN_1488b3d90(void)

void FUN_1488b3d90(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x18;
    if (0x18 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xcc) = (int)uVar2;
    FUN_1488b3dfe(param_1,*(undefined4 *)(param_1 + 200),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 1488b3dfe FUN_1488b3dfe body=142 status=ok
// SIG undefined FUN_1488b3dfe(void)

void FUN_1488b3dfe(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x19) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,param_4);
  return;
}



// FUNCTION 1488b3e8c FUN_1488b3e8c body=643 status=ok
// SIG undefined FUN_1488b3e8c(void)

void FUN_1488b3e8c(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = *(int *)(param_3 + 200);
        *(uint *)(param_3 + 200) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0xcc) < iVar2 + 1U) {
          FUN_1488b4568(param_3,iVar2);
        }
        lVar7 = *(longlong *)(param_3 + 0xc0);
        if (*(longlong *)(param_3 + 0xc0) == 0) {
          lVar7 = param_3;
        }
        *(longlong **)(lVar7 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1488b3e8c(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488b4110 FUN_1488b4110 body=336 status=ok
// SIG undefined FUN_1488b4110(void)

void FUN_1488b4110(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar6 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar6) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = *(int *)(param_3 + 200);
        *(uint *)(param_3 + 200) = iVar3 + 1U;
        if (*(uint *)(param_3 + 0xcc) < iVar3 + 1U) {
          FUN_1488b4568(param_3,iVar3);
        }
        lVar5 = *(longlong *)(param_3 + 0xc0);
        if (*(longlong *)(param_3 + 0xc0) == 0) {
          lVar5 = param_3;
        }
        *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar6));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488b4262 FUN_1488b4262 body=772 status=ok
// SIG undefined FUN_1488b4262(void)

void FUN_1488b4262(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar12 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar12;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar11 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar11) || (uStack_130 != lVar12)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1488b4386:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_1488b439e;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_1488b4386;
LAB_1488b439e:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar2 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar2 + 1U) {
            FUN_1488b4568(param_3,iVar2);
          }
          lVar8 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar8 = param_3;
          }
          *(longlong **)(lVar8 + (longlong)iVar2 * 8) = plVar3;
        }
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar8 != 0)) {
          lVar7 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar7 * 8) = lVar8;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar12 || iStack_144 != iVar11));
    lVar12 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar12 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar10 + lVar8);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1488b4262(uVar4,&local_168,param_3);
        lVar8 = lVar8 + 8;
      } while (lVar12 * 8 != lVar8);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488b4568 FUN_1488b4568 body=125 status=ok
// SIG undefined FUN_1488b4568(void)

void FUN_1488b4568(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x18;
    if (0x18 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x18 < *(uint *)(param_1 + 0xcc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xcc) = (int)uVar4;
    FUN_1488b3dfe(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488b45e6 FUN_1488b45e6 body=110 status=ok
// SIG undefined FUN_1488b45e6(void)

void FUN_1488b45e6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x18;
    if (0x18 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xcc) = (int)uVar2;
    FUN_14819719c(param_1,*(undefined4 *)(param_1 + 200),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 1488b4654 FUN_1488b4654 body=643 status=ok
// SIG undefined FUN_1488b4654(void)

void FUN_1488b4654(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = *(int *)(param_3 + 200);
        *(uint *)(param_3 + 200) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0xcc) < iVar2 + 1U) {
          FUN_14819711e(param_3,iVar2);
        }
        lVar7 = *(longlong *)(param_3 + 0xc0);
        if (*(longlong *)(param_3 + 0xc0) == 0) {
          lVar7 = param_3;
        }
        *(longlong **)(lVar7 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1488b4654(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488b48d8 FUN_1488b48d8 body=336 status=ok
// SIG undefined FUN_1488b48d8(void)

void FUN_1488b48d8(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar6 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar6) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = *(int *)(param_3 + 200);
        *(uint *)(param_3 + 200) = iVar3 + 1U;
        if (*(uint *)(param_3 + 0xcc) < iVar3 + 1U) {
          FUN_14819711e(param_3,iVar3);
        }
        lVar5 = *(longlong *)(param_3 + 0xc0);
        if (*(longlong *)(param_3 + 0xc0) == 0) {
          lVar5 = param_3;
        }
        *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar6));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


