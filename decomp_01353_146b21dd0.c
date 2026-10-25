// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146b21dd0 FUN_146b21dd0 body=476 status=ok
// SIG undefined FUN_146b21dd0(void)

void FUN_146b21dd0(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 146b21fbc FUN_146b21fbc body=31 status=ok
// SIG undefined FUN_146b21fbc(void)

undefined8 FUN_146b21fbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b21ff8 FUN_146b21ff8 body=93 status=ok
// SIG undefined FUN_146b21ff8(void)

void FUN_146b21ff8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2a890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b22056 FUN_146b22056 body=93 status=ok
// SIG undefined FUN_146b22056(void)

void FUN_146b22056(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2a890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b220b4 FUN_146b220b4 body=126 status=ok
// SIG undefined FUN_146b220b4(void)

void FUN_146b220b4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f2a890;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b22123. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b22140 FUN_146b22140 body=21 status=ok
// SIG undefined FUN_146b22140(void)

undefined8 FUN_146b22140(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146b22156 FUN_146b22156 body=68 status=ok
// SIG undefined FUN_146b22156(void)

void FUN_146b22156(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146b2219a();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1446f4a44(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146b2219a FUN_146b2219a body=322 status=ok
// SIG undefined FUN_146b2219a(void)

void FUN_146b2219a(longlong *param_1)

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



// FUNCTION 146b222de FUN_146b222de body=114 status=ok
// SIG undefined FUN_146b222de(void)

void FUN_146b222de(longlong *param_1,int param_2)

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



// FUNCTION 146b22350 FUN_146b22350 body=19 status=ok
// SIG undefined FUN_146b22350(void)

undefined8 FUN_146b22350(undefined8 param_1,undefined8 *param_2)

{
  (*(code *)*param_2)();
  return param_1;
}



// FUNCTION 146b22382 FUN_146b22382 body=98 status=ok
// SIG undefined FUN_146b22382(void)

void FUN_146b22382(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146b223e4 FUN_146b223e4 body=45 status=ok
// SIG undefined FUN_146b223e4(void)

void FUN_146b223e4(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146b22412 FUN_146b22412 body=323 status=ok
// SIG undefined FUN_146b22412(void)

undefined4 * FUN_146b22412(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1409bc900(param_1,local_48);
  FUN_146b22556(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar6);
  local_58 = 0;
  cVar2 = FUN_1409bc7bc(param_1,uVar3,local_40,&local_4c);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x1c) = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1409bd292(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b22556 FUN_146b22556 body=99 status=ok
// SIG undefined FUN_146b22556(void)

undefined8 * FUN_146b22556(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_2 + 2) = *puVar3;
  return param_2;
}



// FUNCTION 146b225ba FUN_146b225ba body=31 status=ok
// SIG undefined FUN_146b225ba(void)

undefined8 FUN_146b225ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b225f6 FUN_146b225f6 body=93 status=ok
// SIG undefined FUN_146b225f6(void)

void FUN_146b225f6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f2a990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b22654 FUN_146b22654 body=126 status=ok
// SIG undefined FUN_146b22654(void)

void FUN_146b22654(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f2a990;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b226c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b226d2 FUN_146b226d2 body=21 status=ok
// SIG undefined FUN_146b226d2(void)

undefined8 FUN_146b226d2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146b226e8 FUN_146b226e8 body=45 status=ok
// SIG undefined FUN_146b226e8(void)

longlong FUN_146b226e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_145ec1478(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b22716 FUN_146b22716 body=29 status=ok
// SIG undefined FUN_146b22716(void)

undefined8 FUN_146b22716(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b22734 FUN_146b22734 body=31 status=ok
// SIG undefined FUN_146b22734(void)

undefined8 FUN_146b22734(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b22770 FUN_146b22770 body=101 status=ok
// SIG undefined FUN_146b22770(void)

void FUN_146b22770(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e1dc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2aa80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146b227d6 FUN_146b227d6 body=101 status=ok
// SIG undefined FUN_146b227d6(void)

void FUN_146b227d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e1dc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2aa80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146b2283c FUN_146b2283c body=134 status=ok
// SIG undefined FUN_146b2283c(void)

void FUN_146b2283c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e1dc70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f2aa80;
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
                    /* WARNING: Could not recover jumptable at 0x000146b228b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b228d4 FUN_146b228d4 body=25 status=ok
// SIG undefined FUN_146b228d4(void)

undefined8 FUN_146b228d4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146b22910 FUN_146b22910 body=93 status=ok
// SIG undefined FUN_146b22910(void)

void FUN_146b22910(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2ab60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2aaf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146b2296e FUN_146b2296e body=93 status=ok
// SIG undefined FUN_146b2296e(void)

void FUN_146b2296e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2ab60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2aaf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146b229cc FUN_146b229cc body=126 status=ok
// SIG undefined FUN_146b229cc(void)

void FUN_146b229cc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f2ab60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f2aaf0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b22a3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b22a54 FUN_146b22a54 body=20 status=ok
// SIG undefined FUN_146b22a54(void)

undefined8 FUN_146b22a54(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 146b22a6a FUN_146b22a6a body=167 status=ok
// SIG undefined FUN_146b22a6a(void)

void FUN_146b22a6a(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146b22ae5;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146b22ae5;
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
LAB_146b22ae5:
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
                    /* WARNING: Could not recover jumptable at 0x000146b22b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146b22b2c FUN_146b22b2c body=29 status=ok
// SIG undefined FUN_146b22b2c(void)

undefined8 FUN_146b22b2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b22b4a FUN_146b22b4a body=64 status=ok
// SIG undefined FUN_146b22b4a(void)

undefined8 * FUN_146b22b4a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f2ac80;
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



// FUNCTION 146b22b8e FUN_146b22b8e body=81 status=ok
// SIG undefined FUN_146b22b8e(void)

undefined8 FUN_146b22b8e(longlong param_1)

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



// FUNCTION 146b22be6 FUN_146b22be6 body=89 status=ok
// SIG undefined FUN_146b22be6(void)

bool FUN_146b22be6(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146b22c31;
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
LAB_146b22c31:
  return lVar6 == param_2;
}



// FUNCTION 146b22c5c FUN_146b22c5c body=118 status=ok
// SIG undefined FUN_146b22c5c(void)

void FUN_146b22c5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2ac80;
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



// FUNCTION 146b22cd2 FUN_146b22cd2 body=118 status=ok
// SIG undefined FUN_146b22cd2(void)

void FUN_146b22cd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2ac80;
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



// FUNCTION 146b22d48 FUN_146b22d48 body=156 status=ok
// SIG undefined FUN_146b22d48(void)

void FUN_146b22d48(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f2a800;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f2ac80;
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
                    /* WARNING: Could not recover jumptable at 0x000146b22dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b22de4 FUN_146b22de4 body=286 status=ok
// SIG undefined FUN_146b22de4(void)

void FUN_146b22de4(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar8 = *(longlong **)(param_1 + 0x20);
  bVar4 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar6 = (int)plVar8[1];
    lVar7 = 0;
    do {
      if (iVar6 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_146b22e32;
      }
      LOCK();
      iVar5 = (int)plVar8[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar7 = *(longlong *)(param_1 + 0x18);
    bVar4 = false;
  }
LAB_146b22e32:
  pcVar3 = *(code **)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x30);
  local_38 = *param_3;
  local_30 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_48 = *param_2;
  local_40 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar3)(iVar6 + lVar7);
  if (!bVar4) {
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
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
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
  plVar8 = (longlong *)param_3[1];
  if (plVar8 != (longlong *)0x0) {
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
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b22f04 FUN_146b22f04 body=317 status=ok
// SIG undefined FUN_146b22f04(void)

ulonglong FUN_146b22f04(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_146b22fd1;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 != 0) {
      pcVar5 = *(code **)(param_1 + 0x28);
      iVar7 = *(int *)(param_1 + 0x30);
      local_38 = *param_3;
      local_30 = param_3[1];
      *param_3 = 0;
      param_3[1] = 0;
      local_48 = *param_2;
      local_40 = param_2[1];
      *param_2 = 0;
      param_2[1] = 0;
      (*pcVar5)(lVar4 + iVar7);
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
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
      goto LAB_146b22fd3;
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
LAB_146b22fd1:
  uVar8 = 0;
LAB_146b22fd3:
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
  plVar3 = (longlong *)param_3[1];
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
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 146b23042 FUN_146b23042 body=64 status=ok
// SIG undefined FUN_146b23042(void)

undefined8 * FUN_146b23042(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f2acf0;
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



// FUNCTION 146b23086 FUN_146b23086 body=81 status=ok
// SIG undefined FUN_146b23086(void)

undefined8 FUN_146b23086(longlong param_1)

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



// FUNCTION 146b230de FUN_146b230de body=89 status=ok
// SIG undefined FUN_146b230de(void)

bool FUN_146b230de(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146b23129;
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
LAB_146b23129:
  return lVar6 == param_2;
}



// FUNCTION 146b23160 FUN_146b23160 body=118 status=ok
// SIG undefined FUN_146b23160(void)

void FUN_146b23160(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2ad60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2acf0;
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



// FUNCTION 146b231d6 FUN_146b231d6 body=118 status=ok
// SIG undefined FUN_146b231d6(void)

void FUN_146b231d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2ad60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2acf0;
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



// FUNCTION 146b2324c FUN_146b2324c body=156 status=ok
// SIG undefined FUN_146b2324c(void)

void FUN_146b2324c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f2ad60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f2acf0;
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
                    /* WARNING: Could not recover jumptable at 0x000146b232d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b232e8 FUN_146b232e8 body=219 status=ok
// SIG undefined FUN_146b232e8(void)

void FUN_146b232e8(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = *(longlong **)(param_1 + 0x20);
  bVar4 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar6 = (int)plVar8[1];
    lVar7 = 0;
    do {
      if (iVar6 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_146b23331;
      }
      LOCK();
      iVar5 = (int)plVar8[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar7 = *(longlong *)(param_1 + 0x18);
    bVar4 = false;
  }
LAB_146b23331:
  pcVar3 = *(code **)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x30);
  local_30 = *param_2;
  local_28 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar3)(iVar6 + lVar7);
  if (!bVar4) {
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
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b233c4 FUN_146b233c4 body=241 status=ok
// SIG undefined FUN_146b233c4(void)

ulonglong FUN_146b233c4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RDI;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_146b2346d;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 != 0) {
      pcVar5 = *(code **)(param_1 + 0x28);
      iVar7 = *(int *)(param_1 + 0x30);
      local_30 = *param_2;
      local_28 = param_2[1];
      *param_2 = 0;
      param_2[1] = 0;
      (*pcVar5)(lVar4 + iVar7);
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
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
      goto LAB_146b2346f;
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
LAB_146b2346d:
  uVar8 = 0;
LAB_146b2346f:
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 146b234b8 FUN_146b234b8 body=64 status=ok
// SIG undefined FUN_146b234b8(void)

undefined8 * FUN_146b234b8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f2add0;
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



// FUNCTION 146b234fc FUN_146b234fc body=81 status=ok
// SIG undefined FUN_146b234fc(void)

undefined8 FUN_146b234fc(longlong param_1)

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



// FUNCTION 146b23554 FUN_146b23554 body=89 status=ok
// SIG undefined FUN_146b23554(void)

bool FUN_146b23554(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146b2359f;
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
LAB_146b2359f:
  return lVar6 == param_2;
}



// FUNCTION 146b235d6 FUN_146b235d6 body=118 status=ok
// SIG undefined FUN_146b235d6(void)

void FUN_146b235d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2ae40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2add0;
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



// FUNCTION 146b2364c FUN_146b2364c body=118 status=ok
// SIG undefined FUN_146b2364c(void)

void FUN_146b2364c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2ae40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2add0;
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



// FUNCTION 146b236c2 FUN_146b236c2 body=156 status=ok
// SIG undefined FUN_146b236c2(void)

void FUN_146b236c2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f2ae40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f2add0;
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
                    /* WARNING: Could not recover jumptable at 0x000146b2374e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b2375e FUN_146b2375e body=219 status=ok
// SIG undefined FUN_146b2375e(void)

void FUN_146b2375e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = *(longlong **)(param_1 + 0x20);
  bVar4 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar6 = (int)plVar8[1];
    lVar7 = 0;
    do {
      if (iVar6 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_146b237a7;
      }
      LOCK();
      iVar5 = (int)plVar8[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar7 = *(longlong *)(param_1 + 0x18);
    bVar4 = false;
  }
LAB_146b237a7:
  pcVar3 = *(code **)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x30);
  local_30 = *param_2;
  local_28 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar3)(iVar6 + lVar7);
  if (!bVar4) {
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
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b2383a FUN_146b2383a body=241 status=ok
// SIG undefined FUN_146b2383a(void)

ulonglong FUN_146b2383a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RDI;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_146b238e3;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 != 0) {
      pcVar5 = *(code **)(param_1 + 0x28);
      iVar7 = *(int *)(param_1 + 0x30);
      local_30 = *param_2;
      local_28 = param_2[1];
      *param_2 = 0;
      param_2[1] = 0;
      (*pcVar5)(lVar4 + iVar7);
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
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
      goto LAB_146b238e5;
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
LAB_146b238e3:
  uVar8 = 0;
LAB_146b238e5:
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 146b2392e FUN_146b2392e body=64 status=ok
// SIG undefined FUN_146b2392e(void)

undefined8 * FUN_146b2392e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f2aeb0;
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



// FUNCTION 146b23972 FUN_146b23972 body=81 status=ok
// SIG undefined FUN_146b23972(void)

undefined8 FUN_146b23972(longlong param_1)

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



// FUNCTION 146b239ca FUN_146b239ca body=89 status=ok
// SIG undefined FUN_146b239ca(void)

bool FUN_146b239ca(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146b23a15;
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
LAB_146b23a15:
  return lVar6 == param_2;
}



// FUNCTION 146b23a4c FUN_146b23a4c body=118 status=ok
// SIG undefined FUN_146b23a4c(void)

void FUN_146b23a4c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2af20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2aeb0;
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



// FUNCTION 146b23ac2 FUN_146b23ac2 body=118 status=ok
// SIG undefined FUN_146b23ac2(void)

void FUN_146b23ac2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2af20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2aeb0;
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



// FUNCTION 146b23b38 FUN_146b23b38 body=156 status=ok
// SIG undefined FUN_146b23b38(void)

void FUN_146b23b38(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f2af20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f2aeb0;
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
                    /* WARNING: Could not recover jumptable at 0x000146b23bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b23bd4 FUN_146b23bd4 body=219 status=ok
// SIG undefined FUN_146b23bd4(void)

void FUN_146b23bd4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = *(longlong **)(param_1 + 0x20);
  bVar4 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar6 = (int)plVar8[1];
    lVar7 = 0;
    do {
      if (iVar6 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_146b23c1d;
      }
      LOCK();
      iVar5 = (int)plVar8[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar7 = *(longlong *)(param_1 + 0x18);
    bVar4 = false;
  }
LAB_146b23c1d:
  pcVar3 = *(code **)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x30);
  local_30 = *param_2;
  local_28 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar3)(iVar6 + lVar7);
  if (!bVar4) {
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
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b23cb0 FUN_146b23cb0 body=241 status=ok
// SIG undefined FUN_146b23cb0(void)

ulonglong FUN_146b23cb0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RDI;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_146b23d59;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 != 0) {
      pcVar5 = *(code **)(param_1 + 0x28);
      iVar7 = *(int *)(param_1 + 0x30);
      local_30 = *param_2;
      local_28 = param_2[1];
      *param_2 = 0;
      param_2[1] = 0;
      (*pcVar5)(lVar4 + iVar7);
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
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
      goto LAB_146b23d5b;
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
LAB_146b23d59:
  uVar8 = 0;
LAB_146b23d5b:
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 146b23da4 FUN_146b23da4 body=147 status=ok
// SIG undefined FUN_146b23da4(void)

void FUN_146b23da4(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 0x28 + (longlong)(int)param_2 * 0x30);
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
  iVar7 = ~param_2 + iVar5;
  if (iVar7 != 0) {
    iVar6 = 1;
    if (iVar7 < 1) {
      iVar6 = iVar7;
    }
    memmove((void *)((longlong)(int)param_2 * 0x30 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x30 + lVar3),(longlong)iVar6 * 0x30);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 146b23e38 FUN_146b23e38 body=62 status=ok
// SIG undefined FUN_146b23e38(void)

void FUN_146b23e38(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146b23e76(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 146b23e76 FUN_146b23e76 body=112 status=ok
// SIG undefined FUN_146b23e76(void)

ulonglong FUN_146b23e76(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146b23eb0;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_146b23eb0:
  return param_2 & 0xffffffff;
}



// FUNCTION 146b23ee6 FUN_146b23ee6 body=73 status=ok
// SIG undefined FUN_146b23ee6(void)

void FUN_146b23ee6(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x28);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146b23f30 FUN_146b23f30 body=25 status=ok
// SIG undefined FUN_146b23f30(void)

void FUN_146b23f30(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b23f45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 146b23f4a FUN_146b23f4a body=29 status=ok
// SIG undefined FUN_146b23f4a(void)

undefined8 FUN_146b23f4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b23f68 FUN_146b23f68 body=223 status=ok
// SIG undefined FUN_146b23f68(void)

void FUN_146b23f68(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar3 = uVar2 + iVar1;
  if (uVar2 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_144732142(param_1,uVar3);
    iVar1 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_144869b4a(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 << 3;
    do {
      FUN_144869592(param_1,local_34,lVar4,0);
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1402191ca(param_2,0);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b2404a FUN_146b2404a body=147 status=ok
// SIG undefined FUN_146b2404a(void)

void FUN_146b2404a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146b240de FUN_146b240de body=206 status=ok
// SIG undefined FUN_146b240de(void)

LPCRITICAL_SECTION FUN_146b240de(LPCRITICAL_SECTION param_1)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e1dc70;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_149f2aff0;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)&DAT_14c990e10;
  *(code **)&p_Var1->EntryCount = FUN_146b1ff14;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 146b241ac FUN_146b241ac body=29 status=ok
// SIG undefined FUN_146b241ac(void)

undefined8 FUN_146b241ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b241e6 FUN_146b241e6 body=93 status=ok
// SIG undefined FUN_146b241e6(void)

void FUN_146b241e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e1dc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2aff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b24244 FUN_146b24244 body=93 status=ok
// SIG undefined FUN_146b24244(void)

void FUN_146b24244(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e1dc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2aff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b242a2 FUN_146b242a2 body=126 status=ok
// SIG undefined FUN_146b242a2(void)

void FUN_146b242a2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e1dc70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f2aff0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b24311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b2432e FUN_146b2432e body=21 status=ok
// SIG undefined FUN_146b2432e(void)

undefined8 FUN_146b2432e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146b24344 FUN_146b24344 body=29 status=ok
// SIG undefined FUN_146b24344(void)

undefined8 FUN_146b24344(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b2437e FUN_146b2437e body=93 status=ok
// SIG undefined FUN_146b2437e(void)

void FUN_146b2437e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2b060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b243dc FUN_146b243dc body=93 status=ok
// SIG undefined FUN_146b243dc(void)

void FUN_146b243dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2b060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b2443a FUN_146b2443a body=126 status=ok
// SIG undefined FUN_146b2443a(void)

void FUN_146b2443a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f2a800;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f2b060;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b244a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b244b8 FUN_146b244b8 body=193 status=ok
// SIG undefined FUN_146b244b8(void)

void FUN_146b244b8(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  pcVar4 = *(code **)(param_1 + 0x20);
  local_28 = *param_3;
  local_20 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_38 = *param_2;
  local_30 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar4)(uVar3);
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
  plVar5 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b2457a FUN_146b2457a body=195 status=ok
// SIG undefined FUN_146b2457a(void)

undefined8 FUN_146b2457a(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  pcVar4 = *(code **)(param_1 + 0x20);
  local_28 = *param_3;
  local_20 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_38 = *param_2;
  local_30 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar4)(uVar3);
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
  plVar5 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b2463e FUN_146b2463e body=48 status=ok
// SIG undefined FUN_146b2463e(void)

void FUN_146b2463e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 146b2466e FUN_146b2466e body=209 status=ok
// SIG undefined FUN_146b2466e(void)

int FUN_146b2466e(longlong *param_1,undefined8 *param_2)

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



// FUNCTION 146b2473f FUN_146b2473f body=114 status=ok
// SIG undefined FUN_146b2473f(void)

undefined8 * FUN_146b2473f(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_149f2b140;
  uVar2 = *param_1;
  plVar3 = (longlong *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  puVar4[2] = &PTR_FUN_149f2b158;
  puVar4[3] = uVar2;
  puVar4[4] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  return puVar4;
}



// FUNCTION 146b247d4 FUN_146b247d4 body=29 status=ok
// SIG undefined FUN_146b247d4(void)

undefined8 FUN_146b247d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b247f2 FUN_146b247f2 body=64 status=ok
// SIG undefined FUN_146b247f2(void)

undefined8 * FUN_146b247f2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f2b158;
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



// FUNCTION 146b24832 FUN_146b24832 body=91 status=ok
// SIG undefined FUN_146b24832(void)

void FUN_146b24832(longlong param_1,longlong *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + 8);
  local_10 = *(longlong *)(param_1 + 0x10);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 0xc) = *(int *)(local_10 + 0xc) + 1;
    UNLOCK();
  }
  (**(code **)(*param_2 + 0x70))(param_2,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b2488e FUN_146b2488e body=114 status=ok
// SIG undefined FUN_146b2488e(void)

void FUN_146b2488e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f285d0;
  param_1[1] = &PTR_FUN_149f28660;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_145d8b27a(param_1 + 0x1c);
  *param_1 = &PTR_FUN_149f29f80;
  param_1[1] = &PTR_LAB_149f2a010;
  FUN_141504946(param_1 + 0x17);
  FUN_145d8b308(param_1);
  return;
}



// FUNCTION 146b24900 FUN_146b24900 body=288 status=ok
// SIG undefined FUN_146b24900(void)

void FUN_146b24900(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f29a20;
  plVar3 = (longlong *)param_1[0x49];
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
  plVar3 = (longlong *)param_1[0x47];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x42];
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
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x37);
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x2d);
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  if (*(char *)(param_1 + 0x2a) == '\x01') {
    *(undefined1 *)(param_1 + 0x2a) = 0;
  }
  if (*(char *)(param_1 + 0x29) == '\x01') {
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  FUN_146b1d726(param_1);
  return;
}



// FUNCTION 146b24a20 FUN_146b24a20 body=93 status=ok
// SIG undefined FUN_146b24a20(void)

void FUN_146b24a20(void)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446ddc76(&local_18,&DAT_149f297c8,1);
  uVar1 = FUN_144a52528();
  FUN_14493e38c(uVar1,local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b24a7e FUN_146b24a7e body=132 status=ok
// SIG undefined FUN_146b24a7e(void)

undefined8 * FUN_146b24a7e(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x50))(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b24b04 FUN_146b24b04 body=143 status=ok
// SIG undefined FUN_146b24b04(void)

void FUN_146b24b04(longlong *param_1)

{
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[8],(int)param_1[9]);
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b24b94 FUN_146b24b94 body=94 status=ok
// SIG undefined FUN_146b24b94(void)

longlong * FUN_146b24b94(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140056680(param_1 + 2,*param_3);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146b24bf2 FUN_146b24bf2 body=186 status=ok
// SIG undefined FUN_146b24bf2(void)

int * FUN_146b24bf2(int *param_1,int param_2,int param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x16),4000);
  if (param_1[0x15] < 4) {
    FUN_146b27f1e(param_1 + 0x12,4);
  }
  if (param_1[5] < 100) {
    FUN_146b27f7e(param_1 + 2,100);
  }
  if (*param_1 < 0) {
    *param_1 = 0x19000;
    FUN_1414d73b6(DAT_14c872ce0,L"AnalyticsProviderETEventCache",L"MaximumPayloadSize",param_1,
                  &DAT_14c872ce8);
  }
  if (param_1[1] < 0) {
    param_1[1] = *param_1;
  }
  FUN_146b24cac(param_1 + 6);
  return param_1;
}



// FUNCTION 146b24cac FUN_146b24cac body=120 status=ok
// SIG undefined FUN_146b24cac(void)

void FUN_146b24cac(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)((double)param_2 * 1.2);
  if (-1 < iVar3) {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if (iVar2 < iVar3) {
      FUN_144893a1c(param_1);
      iVar2 = *(int *)((longlong)param_1 + 0xc);
    }
    iVar3 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar3 + 0xd;
    if ((uint)(iVar2 - iVar3) < 0xd) {
      FUN_1447403be(param_1,iVar3);
    }
    lVar1 = *param_1;
    *(undefined8 *)(lVar1 + 5 + (longlong)iVar3) = 0x7d5d5b3a2273746e;
    *(undefined8 *)(lVar1 + iVar3) = 0x73746e657645227b;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 146b24d25 FUN_146b24d25 body=100 status=ok
// SIG undefined FUN_146b24d25(void)

void FUN_146b24d25(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  uint uVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  
  if (param_4 == '\0') {
    param_2[1] = *param_2;
    FUN_146b275a2(param_2,param_3);
    puVar2 = (undefined2 *)*param_2;
    uVar3 = (ulonglong)(param_2[1] - (longlong)puVar2) >> 1;
  }
  else {
    uVar1 = 0;
    if (*(int *)(param_3 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_3;
      uVar1 = *(int *)(param_3 + 1) - 1;
    }
    uVar3 = (ulonglong)uVar1;
  }
  FUN_146b27818(param_1,puVar2,uVar3);
  return;
}



// FUNCTION 146b24d89 FUN_146b24d89 body=162 status=ok
// SIG undefined FUN_146b24d89(void)

void FUN_146b24d89(longlong *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447403be(param_1,iVar1);
  }
  *(undefined1 *)(*param_1 + (longlong)iVar1) = 0x2c;
  param_2[1] = *param_2;
  FUN_146b275a2(param_2,param_3);
  FUN_146b27818(param_1,*param_2,(ulonglong)(param_2[1] - *param_2) >> 1);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447403be(param_1,iVar1);
  }
  *(undefined1 *)(*param_1 + (longlong)iVar1) = 0x3a;
  FUN_146b24d25(param_1,param_2,param_3 + 0x10,*(int *)(param_3 + 0x2c) == 4);
  return;
}



// FUNCTION 146b24e2c FUN_146b24e2c body=331 status=ok
// SIG undefined FUN_146b24e2c(void)

void FUN_146b24e2c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_478 [40];
  undefined1 *local_450;
  undefined1 *local_448;
  ulonglong *local_440;
  char local_438;
  undefined1 local_430 [1024];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_478;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  FUN_146b24f78((longlong *)(param_1 + 0x28),param_2);
  if ((longlong)*(int *)(param_1 + 0x30) == 0) {
    iVar6 = 10;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar4 = 0;
    iVar2 = 0;
    do {
      iVar6 = *(int *)(lVar3 + 8 + lVar4);
      iVar1 = *(int *)(lVar3 + 0x18 + lVar4);
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      iVar6 = iVar5 + iVar2 + iVar6 + (uint)(*(int *)(lVar3 + 0x2c + lVar4) != 4) * 2;
      iVar2 = iVar6 + 4;
      lVar4 = lVar4 + 0x30;
    } while ((longlong)*(int *)(param_1 + 0x30) * 0x30 != lVar4);
    iVar6 = iVar6 + 0xe;
  }
  FUN_1400ec3e6(param_1 + 0x38,iVar6);
  if (0 < (longlong)*(int *)(param_1 + 0x30)) {
    local_450 = local_430;
    local_438 = '\0';
    local_440 = &local_30;
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar4 = (longlong)*(int *)(param_1 + 0x30) * 0x30;
    local_448 = local_450;
    do {
      FUN_146b24d89(param_1 + 0x38,&local_450,lVar3);
      lVar3 = lVar3 + 0x30;
      lVar4 = lVar4 + -0x30;
    } while (lVar4 != 0);
    if (local_438 == '\x01') {
      FUN_1400020a8(local_450);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if ((local_30 ^ (ulonglong)auStack_478) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b24f78 FUN_146b24f78 body=80 status=ok
// SIG undefined FUN_146b24f78(void)

longlong * FUN_146b24f78(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_146b17e4e(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 146b24fc8 FUN_146b24fc8 body=108 status=ok
// SIG undefined FUN_146b24fc8(void)

undefined8 * FUN_146b24fc8(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_146b17e8e(param_2,iVar1,0);
    FUN_146b17f01(*param_2,uVar2,iVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return param_2;
}



// FUNCTION 146b25034 FUN_146b25034 body=76 status=ok
// SIG undefined FUN_146b25034(void)

undefined8 FUN_146b25034(longlong param_1,undefined8 param_2,int param_3)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  FUN_146b17d12(param_2,(longlong)param_3 * 0x30 + *(longlong *)(param_1 + 0x28));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return param_2;
}



// FUNCTION 146b25080 FUN_146b25080 body=185 status=ok
// SIG undefined FUN_146b25080(void)

undefined8 * FUN_146b25080(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *_Dst;
  int iVar2;
  int iVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  iVar3 = *(int *)(param_1 + 0x50);
  if (iVar3 == 0) {
    if (0 < *(int *)(param_1 + 0x10)) {
      FUN_14292198a(param_1);
      iVar3 = *(int *)(param_1 + 0x50);
      goto LAB_146b250a5;
    }
  }
  else {
LAB_146b250a5:
    if (0 < iVar3) {
      puVar1 = *(undefined8 **)(param_1 + 0x48);
      *param_2 = *puVar1;
      iVar3 = 0;
      *puVar1 = 0;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
      puVar1[1] = 0;
      _Dst = *(longlong **)(param_1 + 0x48);
      if (*_Dst != 0) {
        FUN_1400020a8();
      }
      iVar2 = *(int *)(param_1 + 0x50) + -1;
      if (iVar2 != 0) {
        memmove(_Dst,_Dst + 2,(longlong)iVar2 << 4);
        iVar3 = *(int *)(param_1 + 0x50) + -1;
      }
      *(int *)(param_1 + 0x50) = iVar3;
      goto LAB_146b25103;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_146b25103:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return param_2;
}



// FUNCTION 146b2513a FUN_146b2513a body=641 status=ok
// SIG undefined FUN_146b2513a(void)

undefined8 * FUN_146b2513a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
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
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  uVar3 = param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 8,iVar1,0);
    FUN_140b8566a(param_1[8],uVar3,iVar1);
  }
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  pvVar2 = (void *)param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_2 + 0xe);
  pvVar2 = (void *)param_2[0xd];
  *(int *)(param_1 + 0xe) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xd,iVar1,0);
    memcpy((void *)param_1[0xd],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar2 = (void *)param_2[0xf];
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xf,iVar1,0);
    memcpy((void *)param_1[0xf],pvVar2,(longlong)iVar1 * 2);
  }
  uVar3 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar3;
  return param_1;
}



// FUNCTION 146b253bc FUN_146b253bc body=135 status=ok
// SIG undefined FUN_146b253bc(void)

void FUN_146b253bc(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  FUN_1459ab2e7(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_146b17e4e(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_146b27938(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b25444 FUN_146b25444 body=113 status=ok
// SIG undefined FUN_146b25444(void)

undefined8 * FUN_146b25444(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  int iVar2;
  
  if (1 < *(int *)(param_1 + 1)) {
    iVar1 = *(int *)(param_1 + 2);
    iVar2 = FUN_146b1c244();
    if (iVar1 == iVar2) goto LAB_146b25463;
  }
  FUN_146b27964(param_1);
LAB_146b25463:
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 1);
  _Src = (void *)*param_1;
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



// FUNCTION 146b254b6 FUN_146b254b6 body=343 status=ok
// SIG undefined FUN_146b254b6(void)

void FUN_146b254b6(LPCRITICAL_SECTION param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  PRTL_CRITICAL_SECTION_DEBUG p_Var5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  _LIST_ENTRY *p_Var9;
  _LIST_ENTRY *p_Var10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 4) {
    FUN_1446efa72(param_1 + 1,0,4,0x10);
    param_1[1].LockCount = 4;
  }
  p_Var5 = param_1[1].DebugInfo;
  plVar6 = *(longlong **)(param_2 + 0x38);
  if (plVar6 == (longlong *)0x0) {
LAB_146b255b7:
    *(undefined ***)p_Var5 = &PTR_LAB_149f2a800;
    p_Var10 = (_LIST_ENTRY *)FUN_144a3f946();
    (p_Var5->ProcessLocksList).Flink = p_Var10;
    *(undefined ***)p_Var5 = &PTR_FUN_149f2c3f0;
    (p_Var5->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
    p_Var5->EntryCount = 0;
    p_Var5->ContentionCount = 0;
    p_Var5->Flags = (int)uVar4;
    p_Var5->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar4 >> 0x20);
    p_Var5->SpareWORD = (short)((ulonglong)uVar4 >> 0x30);
    p_Var5[1].Type = (short)uVar3;
    p_Var5[1].CreatorBackTraceIndex = (short)((uint)uVar3 >> 0x10);
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146b255b7;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    p_Var10 = *(_LIST_ENTRY **)(param_2 + 0x30);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(undefined ***)p_Var5 = &PTR_LAB_149f2a800;
    p_Var9 = (_LIST_ENTRY *)FUN_144a3f946();
    (p_Var5->ProcessLocksList).Flink = p_Var9;
    *(undefined ***)p_Var5 = &PTR_FUN_149f2c3f0;
    (p_Var5->ProcessLocksList).Blink = p_Var10;
    *(longlong **)&p_Var5->EntryCount = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    p_Var5[1].Type = (short)uVar3;
    p_Var5[1].CreatorBackTraceIndex = (short)((uint)uVar3 >> 0x10);
    p_Var5->Flags = (int)uVar4;
    p_Var5->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar4 >> 0x20);
    p_Var5->SpareWORD = (short)((ulonglong)uVar4 >> 0x30);
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
  if (param_1 == (LPCRITICAL_SECTION)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000146b255f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 146b2560e FUN_146b2560e body=189 status=ok
// SIG undefined FUN_146b2560e(void)

void FUN_146b2560e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  iVar1 = (int)param_1[10];
  if (iVar1 == (int)param_2[1]) {
    if (iVar1 < 2) {
      return;
    }
    lVar2 = 0;
    while( true ) {
      uVar3 = *(ushort *)(param_1[9] + lVar2);
      uVar4 = (ulonglong)uVar3;
      uVar5 = *(ushort *)(*param_2 + lVar2);
      if (uVar3 != uVar5) break;
      if (uVar3 == 0) {
        return;
      }
LAB_146b25656:
      lVar2 = lVar2 + 2;
    }
    if ((uVar5 | uVar3) < 0x80) {
      uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      uVar6 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_146b25656;
    }
    if (uVar3 == uVar5) {
      return;
    }
  }
  else if ((int)param_2[1] + iVar1 == 1) {
    return;
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  if (param_1 + 9 != param_2) {
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    param_1[9] = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 10) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return;
}



// FUNCTION 146b256cc FUN_146b256cc body=89 status=ok
// SIG undefined FUN_146b256cc(void)

undefined8 * FUN_146b256cc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0xe8);
  _Src = *(void **)(param_1 + 0xe0);
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



// FUNCTION 146b25726 FUN_146b25726 body=89 status=ok
// SIG undefined FUN_146b25726(void)

undefined8 * FUN_146b25726(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0xf8);
  _Src = *(void **)(param_1 + 0xf0);
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



// FUNCTION 146b25780 FUN_146b25780 body=97 status=ok
// SIG undefined FUN_146b25780(void)

undefined8 FUN_146b25780(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  if (*(int *)(param_1 + 0x60) < 2) {
    uVar1 = 0;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x1b0);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      plVar2 = (longlong *)(param_1 + 0x1d0);
      if (*(longlong **)(param_1 + 0x1c0) != (longlong *)0x0) {
        plVar2 = *(longlong **)(param_1 + 0x1c0);
      }
      uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000146b257da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar1,param_1,param_2);
      return uVar1;
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 146b257ee FUN_146b257ee body=29 status=ok
// SIG undefined FUN_146b257ee(void)

undefined8 FUN_146b257ee(longlong param_1,undefined8 param_2)

{
  FUN_146b24fc8(param_1 + 0x120);
  return param_2;
}



// FUNCTION 146b2580c FUN_146b2580c body=49 status=ok
// SIG undefined FUN_146b2580c(void)

undefined4 FUN_146b2580c(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x178));
  uVar1 = *(undefined4 *)(param_1 + 0x150);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x178));
  return uVar1;
}



// FUNCTION 146b2583e FUN_146b2583e body=29 status=ok
// SIG undefined FUN_146b2583e(void)

undefined8 FUN_146b2583e(longlong param_1,undefined8 param_2)

{
  FUN_146b25034(param_1 + 0x120);
  return param_2;
}



// FUNCTION 146b2585c FUN_146b2585c body=132 status=ok
// SIG undefined FUN_146b2585c(void)

void FUN_146b2585c(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x1a8);
  *(uint *)(param_1 + 0x1a8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1ac) < iVar1 + 1U) {
    FUN_146b289a8((longlong *)(param_1 + 0x1a0),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x1a0);
  lVar5 = (longlong)iVar1 * 0x40;
  lVar3 = *param_2;
  *(longlong *)(lVar2 + lVar5) = lVar3;
  *(undefined8 *)(lVar2 + 0x10 + lVar5) = 0;
  if (lVar3 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000146b258c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*plVar4)(plVar4,lVar2 + lVar5 + 0x10);
    return;
  }
  return;
}



// FUNCTION 146b258ec FUN_146b258ec body=290 status=ok
// SIG undefined FUN_146b258ec(void)

longlong * FUN_146b258ec(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b25a10 FUN_146b25a10 body=135 status=ok
// SIG undefined FUN_146b25a10(void)

void FUN_146b25a10(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  GUID local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  local_68 = 0;
  uStack_60 = 0;
  FUN_1407c869a(&local_58,&local_68,4);
  (**(code **)(*param_1 + 0xe8))(param_1,&local_68,param_2);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b25a98 FUN_146b25a98 body=256 status=ok
// SIG undefined FUN_146b25a98(void)

void FUN_146b25a98(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [40];
  longlong local_a0 [2];
  undefined1 local_90 [16];
  longlong *local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  longlong local_60 [2];
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140056680(local_90,L"BuildInfo");
  FUN_146b280ea(local_60,local_90,param_2);
  local_78 = &local_30;
  local_80 = local_60;
  FUN_146b28a2e(&local_70);
  FUN_140056680(local_a0,L"BuildInfo");
  (**(code **)(*param_1 + 0x78))(param_1,local_a0,&local_70);
  if (local_a0[0] != 0) {
    FUN_1400020a8();
  }
  FUN_146b17e4e(local_70,local_68);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b25b9a FUN_146b25b9a body=256 status=ok
// SIG undefined FUN_146b25b9a(void)

void FUN_146b25b9a(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [40];
  longlong local_a0 [2];
  undefined1 local_90 [16];
  longlong *local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  longlong local_60 [2];
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140056680(local_90,L"Gender");
  FUN_146b280ea(local_60,local_90,param_2);
  local_78 = &local_30;
  local_80 = local_60;
  FUN_146b28a2e(&local_70);
  FUN_140056680(local_a0,L"Gender");
  (**(code **)(*param_1 + 0x78))(param_1,local_a0,&local_70);
  if (local_a0[0] != 0) {
    FUN_1400020a8();
  }
  FUN_146b17e4e(local_70,local_68);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b25c9c FUN_146b25c9c body=256 status=ok
// SIG undefined FUN_146b25c9c(void)

void FUN_146b25c9c(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [40];
  longlong local_a0 [2];
  undefined1 local_90 [16];
  longlong *local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  longlong local_60 [2];
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140056680(local_90,L"Location");
  FUN_146b280ea(local_60,local_90,param_2);
  local_78 = &local_30;
  local_80 = local_60;
  FUN_146b28a2e(&local_70);
  FUN_140056680(local_a0,L"Location");
  (**(code **)(*param_1 + 0x78))(param_1,local_a0,&local_70);
  if (local_a0[0] != 0) {
    FUN_1400020a8();
  }
  FUN_146b17e4e(local_70,local_68);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b25d9e FUN_146b25d9e body=260 status=ok
// SIG undefined FUN_146b25d9e(void)

void FUN_146b25d9e(longlong *param_1,undefined4 param_2)

{
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  undefined1 local_98 [16];
  longlong *local_88;
  ulonglong *local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_64;
  longlong local_60 [2];
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_64 = param_2;
  FUN_140056680(local_98,&DAT_149f2c47a);
  FUN_146b28a8a(local_60,local_98,&local_64);
  local_80 = &local_30;
  local_88 = local_60;
  FUN_146b28a2e(&local_78);
  FUN_140056680(local_a8,&DAT_149f2c47a);
  (**(code **)(*param_1 + 0x78))(param_1,local_a8,&local_78);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_146b17e4e(local_78,local_70);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b25ea4 FUN_146b25ea4 body=172 status=ok
// SIG undefined FUN_146b25ea4(void)

void FUN_146b25ea4(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_38;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar1 * 2);
  }
  (**(code **)(*param_1 + 0xf0))(param_1,&local_40,param_3);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b25f52 FUN_146b25f52 body=690 status=ok
// SIG undefined FUN_146b25f52(void)

/* WARNING: Removing unreachable block (ram,0x000146b26091) */
/* WARNING: Removing unreachable block (ram,0x000146b26179) */
/* WARNING: Removing unreachable block (ram,0x000146b260a0) */
/* WARNING: Removing unreachable block (ram,0x000146b26188) */

void FUN_146b25f52(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  longlong local_48;
  uint local_40;
  uint local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  iVar1 = *(int *)(param_4 + 1);
  uVar2 = *param_4;
  local_40 = iVar1;
  local_34 = param_3;
  if (iVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_146b17e8e(&local_48,iVar1,0);
    FUN_146b17f01(local_48,uVar2,iVar1);
  }
  FUN_140056680(local_88,L"ItemId");
  FUN_146b280ea(&local_78,local_88,param_2);
  lVar3 = (longlong)(int)local_40;
  local_40 = local_40 + 1;
  if (local_3c < local_40) {
    FUN_146b17dba(&local_48);
  }
  lVar3 = lVar3 * 0x30;
  *(undefined8 *)(local_48 + lVar3) = 0;
  *(longlong *)(local_48 + lVar3) = local_78;
  *(undefined4 *)(local_48 + 8 + lVar3) = (undefined4)local_70;
  *(undefined4 *)(local_48 + 0xc + lVar3) = local_70._4_4_;
  *(undefined8 *)(local_48 + 0x10 + lVar3) = 0;
  *(undefined8 *)(local_48 + 0x10 + lVar3) = local_68;
  *(undefined4 *)(local_48 + 0x18 + lVar3) = (undefined4)local_60;
  *(undefined4 *)(local_48 + 0x1c + lVar3) = local_60._4_4_;
  *(undefined8 *)(local_48 + 0x20 + lVar3) = local_58;
  *(undefined1 *)(local_48 + 0x28 + lVar3) = local_50;
  *(undefined4 *)(local_48 + 0x2c + lVar3) = local_4c;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  FUN_140056680(local_98,L"ItemQuantity");
  FUN_146b172be(&local_78,local_98,&local_34);
  lVar3 = (longlong)(int)local_40;
  local_40 = local_40 + 1;
  if (local_3c < local_40) {
    FUN_146b17dba(&local_48);
  }
  lVar3 = lVar3 * 0x30;
  *(undefined8 *)(local_48 + lVar3) = 0;
  *(longlong *)(local_48 + lVar3) = local_78;
  *(undefined4 *)(local_48 + 8 + lVar3) = (undefined4)local_70;
  *(undefined4 *)(local_48 + 0xc + lVar3) = local_70._4_4_;
  *(undefined8 *)(local_48 + 0x10 + lVar3) = 0;
  *(undefined8 *)(local_48 + 0x10 + lVar3) = local_68;
  *(undefined4 *)(local_48 + 0x18 + lVar3) = (undefined4)local_60;
  *(undefined4 *)(local_48 + 0x1c + lVar3) = local_60._4_4_;
  *(undefined8 *)(local_48 + 0x20 + lVar3) = local_58;
  *(undefined1 *)(local_48 + 0x28 + lVar3) = local_50;
  *(undefined4 *)(local_48 + 0x2c + lVar3) = local_4c;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  FUN_140056680(&local_78,L"Item Purchase");
  (**(code **)(*param_1 + 0x78))(param_1,&local_78,&local_48);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_146b17e4e(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b26206 FUN_146b26206 body=546 status=ok
// SIG undefined FUN_146b26206(void)

/* WARNING: Removing unreachable block (ram,0x000146b263ae) */
/* WARNING: Removing unreachable block (ram,0x000146b263c4) */

void FUN_146b26206(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  local_44 = param_4;
  FUN_140056680(local_98,L"Currency");
  FUN_146b280ea(&local_88,local_98,param_3);
  uStack_50._0_4_ = 1;
  FUN_146b17dba(&local_58,0);
  *local_58 = 0;
  *local_58 = local_88;
  local_88 = 0;
  *(undefined4 *)(local_58 + 1) = (undefined4)local_80;
  *(undefined4 *)((longlong)local_58 + 0xc) = local_80._4_4_;
  local_80 = 0;
  local_58[2] = 0;
  local_58[2] = local_78;
  local_78 = 0;
  *(undefined4 *)(local_58 + 3) = (undefined4)local_70;
  *(undefined4 *)((longlong)local_58 + 0x1c) = local_70._4_4_;
  local_70 = 0;
  local_58[4] = local_68;
  *(undefined1 *)(local_58 + 5) = local_60;
  *(undefined4 *)((longlong)local_58 + 0x2c) = local_5c;
  FUN_140056680(local_a8,L"PerItemCost");
  FUN_146b172be(&local_88,local_a8,&local_44);
  lVar3 = (longlong)(int)uStack_50;
  uVar1 = (int)uStack_50 + 1;
  uStack_50 = CONCAT44(uStack_50._4_4_,uVar1);
  if (uStack_50._4_4_ < uVar1) {
    FUN_146b17dba(&local_58);
  }
  lVar2 = lVar3 * 0x30;
  local_58[lVar3 * 6] = 0;
  local_58[lVar3 * 6] = local_88;
  *(undefined4 *)(local_58 + lVar3 * 6 + 1) = (undefined4)local_80;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0xc) = local_80._4_4_;
  local_58[lVar3 * 6 + 2] = 0;
  local_58[lVar3 * 6 + 2] = local_78;
  *(undefined4 *)(local_58 + lVar3 * 6 + 3) = (undefined4)local_70;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0x1c) = local_70._4_4_;
  local_58[lVar3 * 6 + 4] = local_68;
  *(undefined1 *)(local_58 + lVar3 * 6 + 5) = local_60;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0x2c) = local_5c;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  (**(code **)(*param_1 + 0x80))(param_1,param_2,param_5,&local_58);
  FUN_146b17e4e(local_58,uStack_50 & 0xffffffff);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b2642a FUN_146b2642a body=95 status=ok
// SIG undefined FUN_146b2642a(void)

void FUN_146b2642a(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  (**(code **)(*param_1 + 0x98))();
  FUN_146b17e4e(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b2648a FUN_146b2648a body=690 status=ok
// SIG undefined FUN_146b2648a(void)

/* WARNING: Removing unreachable block (ram,0x000146b265c9) */
/* WARNING: Removing unreachable block (ram,0x000146b266b1) */
/* WARNING: Removing unreachable block (ram,0x000146b265d8) */
/* WARNING: Removing unreachable block (ram,0x000146b266c0) */

void FUN_146b2648a(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  longlong local_48;
  uint local_40;
  uint local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  iVar1 = *(int *)(param_4 + 1);
  uVar2 = *param_4;
  local_40 = iVar1;
  local_34 = param_3;
  if (iVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_146b17e8e(&local_48,iVar1,0);
    FUN_146b17f01(local_48,uVar2,iVar1);
  }
  FUN_140056680(local_88,L"GameCurrencyType");
  FUN_146b280ea(&local_78,local_88,param_2);
  lVar3 = (longlong)(int)local_40;
  local_40 = local_40 + 1;
  if (local_3c < local_40) {
    FUN_146b17dba(&local_48);
  }
  lVar3 = lVar3 * 0x30;
  *(undefined8 *)(local_48 + lVar3) = 0;
  *(longlong *)(local_48 + lVar3) = local_78;
  *(undefined4 *)(local_48 + 8 + lVar3) = (undefined4)local_70;
  *(undefined4 *)(local_48 + 0xc + lVar3) = local_70._4_4_;
  *(undefined8 *)(local_48 + 0x10 + lVar3) = 0;
  *(undefined8 *)(local_48 + 0x10 + lVar3) = local_68;
  *(undefined4 *)(local_48 + 0x18 + lVar3) = (undefined4)local_60;
  *(undefined4 *)(local_48 + 0x1c + lVar3) = local_60._4_4_;
  *(undefined8 *)(local_48 + 0x20 + lVar3) = local_58;
  *(undefined1 *)(local_48 + 0x28 + lVar3) = local_50;
  *(undefined4 *)(local_48 + 0x2c + lVar3) = local_4c;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  FUN_140056680(local_98,L"GameCurrencyAmount");
  FUN_146b172be(&local_78,local_98,&local_34);
  lVar3 = (longlong)(int)local_40;
  local_40 = local_40 + 1;
  if (local_3c < local_40) {
    FUN_146b17dba(&local_48);
  }
  lVar3 = lVar3 * 0x30;
  *(undefined8 *)(local_48 + lVar3) = 0;
  *(longlong *)(local_48 + lVar3) = local_78;
  *(undefined4 *)(local_48 + 8 + lVar3) = (undefined4)local_70;
  *(undefined4 *)(local_48 + 0xc + lVar3) = local_70._4_4_;
  *(undefined8 *)(local_48 + 0x10 + lVar3) = 0;
  *(undefined8 *)(local_48 + 0x10 + lVar3) = local_68;
  *(undefined4 *)(local_48 + 0x18 + lVar3) = (undefined4)local_60;
  *(undefined4 *)(local_48 + 0x1c + lVar3) = local_60._4_4_;
  *(undefined8 *)(local_48 + 0x20 + lVar3) = local_58;
  *(undefined1 *)(local_48 + 0x28 + lVar3) = local_50;
  *(undefined4 *)(local_48 + 0x2c + lVar3) = local_4c;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  FUN_140056680(&local_78,L"Currency Purchase");
  (**(code **)(*param_1 + 0x78))(param_1,&local_78,&local_48);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_146b17e4e(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b2673e FUN_146b2673e body=804 status=ok
// SIG undefined FUN_146b2673e(void)

/* WARNING: Removing unreachable block (ram,0x000146b268f0) */
/* WARNING: Removing unreachable block (ram,0x000146b269ec) */
/* WARNING: Removing unreachable block (ram,0x000146b26907) */
/* WARNING: Removing unreachable block (ram,0x000146b269fb) */

void FUN_146b2673e(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined8 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_140056680(local_98,L"RealCurrencyType");
  FUN_146b280ea(&local_88,local_98,param_4);
  uStack_50._0_4_ = 1;
  FUN_146b17dba(&local_58,0);
  *local_58 = 0;
  *local_58 = local_88;
  local_88 = 0;
  *(undefined4 *)(local_58 + 1) = (undefined4)local_80;
  *(undefined4 *)((longlong)local_58 + 0xc) = local_80._4_4_;
  local_80 = 0;
  local_58[2] = 0;
  local_58[2] = local_78;
  local_78 = 0;
  *(undefined4 *)(local_58 + 3) = (undefined4)local_70;
  *(undefined4 *)((longlong)local_58 + 0x1c) = local_70._4_4_;
  local_70 = 0;
  local_58[4] = local_68;
  *(undefined1 *)(local_58 + 5) = local_60;
  *(undefined4 *)((longlong)local_58 + 0x2c) = local_5c;
  FUN_140056680(local_a8,L"RealMoneyCost");
  FUN_146b17486(&local_88,local_a8,&param_5);
  lVar3 = (longlong)(int)(uint)uStack_50;
  uStack_50._0_4_ = (uint)uStack_50 + 1;
  if (uStack_50._4_4_ < (uint)uStack_50) {
    FUN_146b17dba(&local_58);
  }
  uVar1 = param_6;
  lVar2 = lVar3 * 0x30;
  local_58[lVar3 * 6] = 0;
  local_58[lVar3 * 6] = local_88;
  *(undefined4 *)(local_58 + lVar3 * 6 + 1) = (undefined4)local_80;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0xc) = local_80._4_4_;
  local_58[lVar3 * 6 + 2] = 0;
  local_58[lVar3 * 6 + 2] = local_78;
  *(undefined4 *)(local_58 + lVar3 * 6 + 3) = (undefined4)local_70;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0x1c) = local_70._4_4_;
  local_58[lVar3 * 6 + 4] = local_68;
  *(undefined1 *)(local_58 + lVar3 * 6 + 5) = local_60;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0x2c) = local_5c;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  FUN_140056680(local_b8,L"PaymentProvider");
  FUN_146b280ea(&local_88,local_b8,uVar1);
  lVar3 = (longlong)(int)(uint)uStack_50;
  uStack_50._0_4_ = (uint)uStack_50 + 1;
  if (uStack_50._4_4_ < (uint)uStack_50) {
    FUN_146b17dba(&local_58);
  }
  lVar2 = lVar3 * 0x30;
  local_58[lVar3 * 6] = 0;
  local_58[lVar3 * 6] = local_88;
  *(undefined4 *)(local_58 + lVar3 * 6 + 1) = (undefined4)local_80;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0xc) = local_80._4_4_;
  local_58[lVar3 * 6 + 2] = 0;
  local_58[lVar3 * 6 + 2] = local_78;
  *(undefined4 *)(local_58 + lVar3 * 6 + 3) = (undefined4)local_70;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0x1c) = local_70._4_4_;
  local_58[lVar3 * 6 + 4] = local_68;
  *(undefined1 *)(local_58 + lVar3 * 6 + 5) = local_60;
  *(undefined4 *)((longlong)local_58 + lVar2 + 0x2c) = local_5c;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  (**(code **)(*param_1 + 0x98))(param_1,param_2,param_3,&local_58);
  FUN_146b17e4e(local_58,uStack_50 & 0xffffffff);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b26a64 FUN_146b26a64 body=690 status=ok
// SIG undefined FUN_146b26a64(void)

/* WARNING: Removing unreachable block (ram,0x000146b26ba3) */
/* WARNING: Removing unreachable block (ram,0x000146b26c8b) */
/* WARNING: Removing unreachable block (ram,0x000146b26bb2) */
/* WARNING: Removing unreachable block (ram,0x000146b26c9a) */

void FUN_146b26a64(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  longlong local_48;
  uint local_40;
  uint local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  iVar1 = *(int *)(param_4 + 1);
  uVar2 = *param_4;
  local_40 = iVar1;
  local_34 = param_3;
  if (iVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_146b17e8e(&local_48,iVar1,0);
    FUN_146b17f01(local_48,uVar2,iVar1);
  }
  FUN_140056680(local_88,L"GameCurrencyType");
  FUN_146b280ea(&local_78,local_88,param_2);
  lVar3 = (longlong)(int)local_40;
  local_40 = local_40 + 1;
  if (local_3c < local_40) {
    FUN_146b17dba(&local_48);
  }
  lVar3 = lVar3 * 0x30;
  *(undefined8 *)(local_48 + lVar3) = 0;
  *(longlong *)(local_48 + lVar3) = local_78;
  *(undefined4 *)(local_48 + 8 + lVar3) = (undefined4)local_70;
  *(undefined4 *)(local_48 + 0xc + lVar3) = local_70._4_4_;
  *(undefined8 *)(local_48 + 0x10 + lVar3) = 0;
  *(undefined8 *)(local_48 + 0x10 + lVar3) = local_68;
  *(undefined4 *)(local_48 + 0x18 + lVar3) = (undefined4)local_60;
  *(undefined4 *)(local_48 + 0x1c + lVar3) = local_60._4_4_;
  *(undefined8 *)(local_48 + 0x20 + lVar3) = local_58;
  *(undefined1 *)(local_48 + 0x28 + lVar3) = local_50;
  *(undefined4 *)(local_48 + 0x2c + lVar3) = local_4c;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  FUN_140056680(local_98,L"GameCurrencyAmount");
  FUN_146b172be(&local_78,local_98,&local_34);
  lVar3 = (longlong)(int)local_40;
  local_40 = local_40 + 1;
  if (local_3c < local_40) {
    FUN_146b17dba(&local_48);
  }
  lVar3 = lVar3 * 0x30;
  *(undefined8 *)(local_48 + lVar3) = 0;
  *(longlong *)(local_48 + lVar3) = local_78;
  *(undefined4 *)(local_48 + 8 + lVar3) = (undefined4)local_70;
  *(undefined4 *)(local_48 + 0xc + lVar3) = local_70._4_4_;
  *(undefined8 *)(local_48 + 0x10 + lVar3) = 0;
  *(undefined8 *)(local_48 + 0x10 + lVar3) = local_68;
  *(undefined4 *)(local_48 + 0x18 + lVar3) = (undefined4)local_60;
  *(undefined4 *)(local_48 + 0x1c + lVar3) = local_60._4_4_;
  *(undefined8 *)(local_48 + 0x20 + lVar3) = local_58;
  *(undefined1 *)(local_48 + 0x28 + lVar3) = local_50;
  *(undefined4 *)(local_48 + 0x2c + lVar3) = local_4c;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  FUN_140056680(&local_78,L"Currency Given");
  (**(code **)(*param_1 + 0x78))(param_1,&local_78,&local_48);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_146b17e4e(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b26d18 FUN_146b26d18 body=95 status=ok
// SIG undefined FUN_146b26d18(void)

void FUN_146b26d18(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  (**(code **)(*param_1 + 0xa8))();
  FUN_146b17e4e(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b26d78 FUN_146b26d78 body=95 status=ok
// SIG undefined FUN_146b26d78(void)

void FUN_146b26d78(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  (**(code **)(*param_1 + 0xc0))(0,param_2,&local_28);
  FUN_146b17e4e(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b26dd8 FUN_146b26dd8 body=470 status=ok
// SIG undefined FUN_146b26dd8(void)

/* WARNING: Removing unreachable block (ram,0x000146b26f26) */
/* WARNING: Removing unreachable block (ram,0x000146b26f35) */

void FUN_146b26dd8(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined2 *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_44;
  longlong local_40;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_40 = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  local_38 = iVar1;
  if (iVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_146b17e8e(&local_40,iVar1,0);
    FUN_146b17f01(local_40,uVar2,iVar1);
  }
  if (*(int *)(param_2 + 1) == 0) {
    local_78 = &DAT_149dfb77a;
  }
  else {
    local_78 = (undefined2 *)*param_2;
  }
  FUN_140056680(local_88,L"Error");
  FUN_146b24b94(&local_70,local_88,&local_78);
  lVar3 = (longlong)(int)local_38;
  local_38 = local_38 + 1;
  if (local_34 < local_38) {
    FUN_146b17dba(&local_40);
  }
  lVar3 = lVar3 * 0x30;
  *(undefined8 *)(local_40 + lVar3) = 0;
  *(longlong *)(local_40 + lVar3) = local_70;
  *(undefined4 *)(local_40 + 8 + lVar3) = (undefined4)local_68;
  *(undefined4 *)(local_40 + 0xc + lVar3) = local_68._4_4_;
  *(undefined8 *)(local_40 + 0x10 + lVar3) = 0;
  *(undefined8 *)(local_40 + 0x10 + lVar3) = local_60;
  *(undefined4 *)(local_40 + 0x18 + lVar3) = (undefined4)local_58;
  *(undefined4 *)(local_40 + 0x1c + lVar3) = local_58._4_4_;
  *(undefined8 *)(local_40 + 0x20 + lVar3) = local_50;
  *(undefined1 *)(local_40 + 0x28 + lVar3) = local_48;
  *(undefined4 *)(local_40 + 0x2c + lVar3) = local_44;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  FUN_140056680(&local_70,L"Game Error");
  (**(code **)(*param_1 + 0x78))(param_1,&local_70,&local_40);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  FUN_146b17e4e(local_40,local_38);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b26fb0 FUN_146b26fb0 body=226 status=ok
// SIG undefined FUN_146b26fb0(void)

void FUN_146b26fb0(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  uStack_40 = 1;
  FUN_1447a1bd6(&local_48,0);
  puVar2 = local_48;
  *local_48 = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(local_48 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)local_48 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(local_48,iVar1,0);
    memcpy((void *)*puVar2,_Src,(longlong)iVar1 * 2);
  }
  (**(code **)(*param_1 + 0xd8))(param_1,param_2,&local_48,param_4);
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b27094 FUN_146b27094 body=250 status=ok
// SIG undefined FUN_146b27094(void)

void FUN_146b27094(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  undefined8 *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined8 *)0x0;
  uStack_40 = 1;
  FUN_1447a1bd6(&local_48,0);
  puVar2 = local_48;
  *local_48 = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(local_48 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)local_48 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(local_48,iVar1,0);
    memcpy((void *)*puVar2,_Src,(longlong)iVar1 * 2);
  }
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*param_1 + 0xd8))(param_1,param_2,&local_48,&local_58);
  FUN_146b17e4e(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b27190 FUN_146b27190 body=940 status=ok
// SIG undefined FUN_146b27190(void)

/* WARNING: Removing unreachable block (ram,0x000146b2730d) */
/* WARNING: Removing unreachable block (ram,0x000146b27491) */
/* WARNING: Removing unreachable block (ram,0x000146b2731c) */
/* WARNING: Removing unreachable block (ram,0x000146b274a0) */

void FUN_146b27190(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [16];
  undefined2 *local_b0;
  undefined2 *local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_5c;
  longlong local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = 0;
  iVar1 = *(int *)(param_4 + 1);
  uVar2 = *param_4;
  local_50 = iVar1;
  if (iVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_146b17e8e(&local_58,iVar1,0);
    FUN_146b17f01(local_58,uVar2,iVar1);
  }
  if (*(int *)(param_2 + 1) == 0) {
    local_a8 = &DAT_149dfb77a;
  }
  else {
    local_a8 = (undefined2 *)*param_2;
  }
  FUN_140056680(local_98,L"ProgressType");
  FUN_146b24b94(&local_88,local_98,&local_a8);
  lVar4 = (longlong)(int)local_50;
  local_50 = local_50 + 1;
  if (local_4c < local_50) {
    FUN_146b17dba(&local_58);
  }
  lVar4 = lVar4 * 0x30;
  *(undefined8 *)(local_58 + lVar4) = 0;
  *(longlong *)(local_58 + lVar4) = local_88;
  *(undefined4 *)(local_58 + 8 + lVar4) = (undefined4)local_80;
  *(undefined4 *)(local_58 + 0xc + lVar4) = local_80._4_4_;
  *(undefined8 *)(local_58 + 0x10 + lVar4) = 0;
  *(undefined8 *)(local_58 + 0x10 + lVar4) = local_78;
  *(undefined4 *)(local_58 + 0x18 + lVar4) = (undefined4)local_70;
  *(undefined4 *)(local_58 + 0x1c + lVar4) = local_70._4_4_;
  *(undefined8 *)(local_58 + 0x20 + lVar4) = local_68;
  *(undefined1 *)(local_58 + 0x28 + lVar4) = local_60;
  *(undefined4 *)(local_58 + 0x2c + lVar4) = local_5c;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_a8 = (undefined2 *)0x0;
  uStack_a0 = 0;
  if (0 < (int)param_3[1]) {
    lVar6 = 8;
    lVar4 = 0;
    do {
      iVar1 = *(int *)(*param_3 + lVar6);
      iVar5 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar5 = 0;
      }
      FUN_1400020e8(&local_a8,*(undefined8 *)(*param_3 + -8 + lVar6),iVar5);
      lVar4 = lVar4 + 1;
      lVar3 = (longlong)(int)param_3[1];
      if (lVar4 < lVar3) {
        FUN_1400020e8(&local_a8,&DAT_149e0635c,1);
        lVar3 = (longlong)(int)param_3[1];
      }
      lVar6 = lVar6 + 0x10;
    } while (lVar4 < lVar3);
    local_b0 = local_a8;
    if ((int)uStack_a0 != 0) goto LAB_146b273a2;
  }
  local_b0 = &DAT_149dfb77a;
LAB_146b273a2:
  FUN_140056680(local_c0,L"ProgressHierarchy");
  FUN_146b24b94(&local_88,local_c0,&local_b0);
  lVar4 = (longlong)(int)local_50;
  local_50 = local_50 + 1;
  if (local_4c < local_50) {
    FUN_146b17dba(&local_58);
  }
  lVar4 = lVar4 * 0x30;
  *(undefined8 *)(local_58 + lVar4) = 0;
  *(longlong *)(local_58 + lVar4) = local_88;
  *(undefined4 *)(local_58 + 8 + lVar4) = (undefined4)local_80;
  *(undefined4 *)(local_58 + 0xc + lVar4) = local_80._4_4_;
  *(undefined8 *)(local_58 + 0x10 + lVar4) = 0;
  *(undefined8 *)(local_58 + 0x10 + lVar4) = local_78;
  *(undefined4 *)(local_58 + 0x18 + lVar4) = (undefined4)local_70;
  *(undefined4 *)(local_58 + 0x1c + lVar4) = local_70._4_4_;
  *(undefined8 *)(local_58 + 0x20 + lVar4) = local_68;
  *(undefined1 *)(local_58 + 0x28 + lVar4) = local_60;
  *(undefined4 *)(local_58 + 0x2c + lVar4) = local_5c;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  FUN_140056680(&local_88,L"Progression");
  (**(code **)(*param_1 + 0x78))(param_1,&local_88,&local_58);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146b17e4e(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b2753e FUN_146b2753e body=43 status=ok
// SIG undefined FUN_146b2753e(void)

undefined8 FUN_146b2753e(undefined8 param_1,int param_2)

{
  FUN_142922f1a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x280);
  }
  return param_1;
}



// FUNCTION 146b27570 FUN_146b27570 body=50 status=ok
// SIG undefined FUN_146b27570(void)

longlong FUN_146b27570(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x18;
  FUN_142922f1a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x280);
  }
  return param_1;
}



// FUNCTION 146b275a2 FUN_146b275a2 body=630 status=ok
// SIG undefined FUN_146b275a2(void)

longlong FUN_146b275a2(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  undefined2 *puVar4;
  ushort *puVar5;
  
  puVar4 = *(undefined2 **)(param_1 + 8);
  if (*(undefined2 **)(param_1 + 0x10) <= puVar4 + 1) {
    FUN_140213274(param_1,1);
    puVar4 = *(undefined2 **)(param_1 + 8);
  }
  *puVar4 = 0x22;
  *(undefined2 **)(param_1 + 8) = puVar4 + 1;
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (ushort *)*param_2;
  }
  do {
    uVar1 = *puVar5;
    switch(uVar1) {
    case 0:
      puVar4 = *(undefined2 **)(param_1 + 8);
      if (*(undefined2 **)(param_1 + 0x10) <= puVar4 + 1) {
        FUN_140213274(param_1,1);
        puVar4 = *(undefined2 **)(param_1 + 8);
      }
      *puVar4 = 0x22;
      *(undefined2 **)(param_1 + 8) = puVar4 + 1;
      return param_1;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 0xb:
switchD_146b27603_caseD_1:
      if (uVar1 < 0x20) {
        FUN_140212e80(param_1,L"\\u%04x",uVar1);
      }
      else {
        puVar3 = *(ushort **)(param_1 + 8);
        if (*(ushort **)(param_1 + 0x10) <= puVar3 + 1) {
          FUN_140213274(param_1,1);
          puVar3 = *(ushort **)(param_1 + 8);
        }
        *(ushort **)(param_1 + 8) = puVar3 + 1;
        *puVar3 = uVar1;
      }
      goto LAB_146b276f1;
    case 8:
      puVar2 = *(undefined4 **)(param_1 + 8);
      if (*(undefined4 **)(param_1 + 0x10) <= puVar2 + 1) {
        FUN_140213274(param_1,2);
        puVar2 = *(undefined4 **)(param_1 + 8);
      }
      *puVar2 = 0x62005c;
      break;
    case 9:
      puVar2 = *(undefined4 **)(param_1 + 8);
      if (*(undefined4 **)(param_1 + 0x10) <= puVar2 + 1) {
        FUN_140213274(param_1,2);
        puVar2 = *(undefined4 **)(param_1 + 8);
      }
      *puVar2 = 0x74005c;
      break;
    case 10:
      puVar2 = *(undefined4 **)(param_1 + 8);
      if (*(undefined4 **)(param_1 + 0x10) <= puVar2 + 1) {
        FUN_140213274(param_1,2);
        puVar2 = *(undefined4 **)(param_1 + 8);
      }
      *puVar2 = 0x6e005c;
      break;
    case 0xc:
      puVar2 = *(undefined4 **)(param_1 + 8);
      if (*(undefined4 **)(param_1 + 0x10) <= puVar2 + 1) {
        FUN_140213274(param_1,2);
        puVar2 = *(undefined4 **)(param_1 + 8);
      }
      *puVar2 = 0x66005c;
      break;
    case 0xd:
      puVar2 = *(undefined4 **)(param_1 + 8);
      if (*(undefined4 **)(param_1 + 0x10) <= puVar2 + 1) {
        FUN_140213274(param_1,2);
        puVar2 = *(undefined4 **)(param_1 + 8);
      }
      *puVar2 = 0x72005c;
      break;
    default:
      if (uVar1 == 0x22) {
        puVar2 = *(undefined4 **)(param_1 + 8);
        if (*(undefined4 **)(param_1 + 0x10) <= puVar2 + 1) {
          FUN_140213274(param_1,2);
          puVar2 = *(undefined4 **)(param_1 + 8);
        }
        *puVar2 = 0x22005c;
      }
      else {
        if (uVar1 != 0x5c) goto switchD_146b27603_caseD_1;
        puVar2 = *(undefined4 **)(param_1 + 8);
        if (*(undefined4 **)(param_1 + 0x10) <= puVar2 + 1) {
          FUN_140213274(param_1,2);
          puVar2 = *(undefined4 **)(param_1 + 8);
        }
        *puVar2 = 0x5c005c;
      }
    }
    *(undefined4 **)(param_1 + 8) = puVar2 + 1;
LAB_146b276f1:
    puVar5 = puVar5 + 1;
  } while( true );
}



// FUNCTION 146b27818 FUN_146b27818 body=285 status=ok
// SIG undefined FUN_146b27818(void)

void FUN_146b27818(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = (int)param_1[1];
  fVar5 = 0.25;
  while( true ) {
    fVar4 = 1.0;
    if (1.0 <= fVar5 * (float)param_3) {
      fVar4 = fVar5 * (float)param_3;
    }
    FUN_140393c76(param_1,(int)fVar4 + param_3 + iVar1,0);
    lVar3 = FUN_14475a98a(*param_1 + (longlong)iVar1,(int)fVar4 + param_3,param_2,param_3);
    if (lVar3 != 0) break;
    fVar5 = fVar5 + fVar5;
    if (2.0 <= fVar5) {
      iVar2 = FUN_14475aa65(0,param_2,param_3);
      FUN_140393c76(param_1,iVar1 + iVar2,0);
      FUN_14475a98a((longlong)iVar1 + *param_1,iVar2,param_2,param_3);
      return;
    }
  }
  FUN_144a5eaa2(param_1,(int)lVar3 - (int)*param_1,0);
  return;
}



// FUNCTION 146b27938 FUN_146b27938 body=43 status=ok
// SIG undefined FUN_146b27938(void)

void FUN_146b27938(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 146b27964 FUN_146b27964 body=433 status=ok
// SIG undefined FUN_146b27964(void)

void FUN_146b27964(longlong *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c991210) {
    FUN_144b3d300(&DAT_14c991210);
    if (DAT_14c991210 == -1) {
      FUN_146b27b16();
      atexit(FUN_142924d4b);
      _Init_thread_footer(&DAT_14c991210);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c991268) {
    FUN_144b3d300(&DAT_14c991268);
    if (DAT_14c991268 == -1) {
      FUN_146b27c08();
      atexit(FUN_142924d7a);
      _Init_thread_footer(&DAT_14c991268);
    }
  }
  FUN_146b1c258(local_88);
  FUN_140056680(&local_98,L"PROJECTNAME");
  FUN_146b1bcda(local_88,&local_98);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_145c58316(local_88,&local_98,&DAT_14c9911c0,&DAT_14c991218);
  if (&local_98 == param_1) {
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_98;
    local_98 = 0;
    *(undefined4 *)(param_1 + 1) = local_90;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_8c;
  }
  uVar1 = FUN_146b1bcf0(local_88);
  *(undefined4 *)(param_1 + 2) = uVar1;
  FUN_146283b14(local_88);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b27b16 FUN_146b27b16 body=240 status=ok
// SIG undefined FUN_146b27b16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146b27b16(void)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_10;
  
  lVar1 = DAT_14c9911b0;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  cVar2 = FUN_144a8728e();
  if (cVar2 == '\0') {
    bVar3 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar3 ^ 1);
  }
  else {
    uVar4 = 0;
  }
  if (*(char *)(lVar1 + uVar4) == '\x01') {
    local_38 = &DAT_14c872ce8;
    FUN_14105aa76(DAT_14c872ce0,L"Analytics",L"AllowedUserAgentProjectComments",&local_28);
  }
  _DAT_14c9911e0 = 0;
  _DAT_14c9911e8 = 0;
  _DAT_14c9911c0 = 0;
  uRam000000014c9911c8 = 0;
  _DAT_14c9911ec = 0xffffffff00000080;
  _DAT_14c9911f4 = 0;
  DAT_14c991200 = 0;
  _DAT_14c991208 = 0;
  FUN_140e82fa0(&DAT_14c9911c0,&local_28);
  FUN_1447a1747(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b27c08 FUN_146b27c08 body=240 status=ok
// SIG undefined FUN_146b27c08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146b27c08(void)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_10;
  
  lVar1 = DAT_14c9911b0;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  cVar2 = FUN_144a8728e();
  if (cVar2 == '\0') {
    bVar3 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar3 ^ 1);
  }
  else {
    uVar4 = 0;
  }
  if (*(char *)(lVar1 + uVar4) == '\x01') {
    local_38 = &DAT_14c872ce8;
    FUN_14105aa76(DAT_14c872ce0,L"Analytics",L"AllowedUserAgentPlatformComments",&local_28);
  }
  _DAT_14c991238 = 0;
  _DAT_14c991240 = 0;
  _DAT_14c991218 = 0;
  uRam000000014c991220 = 0;
  _DAT_14c991244 = 0xffffffff00000080;
  _DAT_14c99124c = 0;
  DAT_14c991258 = 0;
  _DAT_14c991260 = 0;
  FUN_140e82fa0(&DAT_14c991218,&local_28);
  FUN_1447a1747(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b27cfa FUN_146b27cfa body=34 status=ok
// SIG undefined FUN_146b27cfa(void)

void FUN_146b27cfa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149f2c330;
  return;
}



// FUNCTION 146b27d1c FUN_146b27d1c body=36 status=ok
// SIG undefined FUN_146b27d1c(void)

undefined8 FUN_146b27d1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146b27d5c FUN_146b27d5c body=93 status=ok
// SIG undefined FUN_146b27d5c(void)

void FUN_146b27d5c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f2c2c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b27dba FUN_146b27dba body=126 status=ok
// SIG undefined FUN_146b27dba(void)

void FUN_146b27dba(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f2c2c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b27e29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b27e44 FUN_146b27e44 body=21 status=ok
// SIG undefined FUN_146b27e44(void)

undefined8 FUN_146b27e44(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146b27e5a FUN_146b27e5a body=34 status=ok
// SIG undefined FUN_146b27e5a(void)

undefined8 FUN_146b27e5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146b27e7c FUN_146b27e7c body=63 status=ok
// SIG undefined FUN_146b27e7c(void)

void FUN_146b27e7c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146b27ebc(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 146b27ebc FUN_146b27ebc body=97 status=ok
// SIG undefined FUN_146b27ebc(void)

ulonglong FUN_146b27ebc(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146b27f1e FUN_146b27f1e body=96 status=ok
// SIG undefined FUN_146b27f1e(void)

void FUN_146b27f1e(longlong param_1,int param_2)

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



// FUNCTION 146b27f7e FUN_146b27f7e body=95 status=ok
// SIG undefined FUN_146b27f7e(void)

void FUN_146b27f7e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 146b27fde FUN_146b27fde body=132 status=ok
// SIG undefined FUN_146b27fde(void)

void FUN_146b27fde(longlong param_1,int param_2)

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



// FUNCTION 146b28064 FUN_146b28064 body=132 status=ok
// SIG undefined FUN_146b28064(void)

void FUN_146b28064(longlong param_1,int param_2)

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



// FUNCTION 146b280ea FUN_146b280ea body=156 status=ok
// SIG undefined FUN_146b280ea(void)

longlong * FUN_146b280ea(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146b28186 FUN_146b28186 body=113 status=ok
// SIG undefined FUN_146b28186(void)

longlong * FUN_146b28186(longlong *param_1,longlong *param_2,char *param_3)

{
  wchar_t *pwVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  pwVar1 = L"false";
  if (*param_3 != '\0') {
    pwVar1 = L"true";
  }
  FUN_140056680(param_1 + 2,pwVar1);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146b281f8 FUN_146b281f8 body=9 status=ok
// SIG undefined FUN_146b281f8(void)

void FUN_146b281f8(longlong param_1)

{
  FUN_142922f1a(param_1 + 0x10);
  return;
}



// FUNCTION 146b28202 FUN_146b28202 body=34 status=ok
// SIG undefined FUN_146b28202(void)

undefined8 FUN_146b28202(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x290);
  }
  return param_1;
}



// FUNCTION 146b28224 FUN_146b28224 body=167 status=ok
// SIG undefined FUN_146b28224(void)

void FUN_146b28224(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x30) != 0) && (*(longlong *)(param_2 + 0x38) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x38) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x30) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x38);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x30) = param_2;
    if (*(longlong **)(param_2 + 0x38) == plVar2) goto LAB_146b2829f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x38);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x38) = plVar2;
      goto LAB_146b2829f;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x38) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_146b2829f:
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
                    /* WARNING: Could not recover jumptable at 0x000146b282bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146b282cb FUN_146b282cb body=58 status=ok
// SIG undefined FUN_146b282cb(void)

void FUN_146b282cb(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146b28305 FUN_146b28305 body=128 status=ok
// SIG undefined FUN_146b28305(void)

undefined8 * FUN_146b28305(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [36];
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_149f2c3b0;
  local_24 = 0;
  FUN_146b1f808(puVar1 + 2,param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b28390 FUN_146b28390 body=34 status=ok
// SIG undefined FUN_146b28390(void)

undefined8 FUN_146b28390(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 146b283b2 FUN_146b283b2 body=167 status=ok
// SIG undefined FUN_146b283b2(void)

void FUN_146b283b2(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146b2842d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146b2842d;
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
LAB_146b2842d:
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
                    /* WARNING: Could not recover jumptable at 0x000146b2844d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146b2845a FUN_146b2845a body=46 status=ok
// SIG undefined FUN_146b2845a(void)

void FUN_146b2845a(longlong param_1)

{
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b28488 FUN_146b28488 body=34 status=ok
// SIG undefined FUN_146b28488(void)

undefined8 FUN_146b28488(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146b284aa FUN_146b284aa body=69 status=ok
// SIG undefined FUN_146b284aa(void)

undefined8 * FUN_146b284aa(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f2c3f0;
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
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 146b284f4 FUN_146b284f4 body=81 status=ok
// SIG undefined FUN_146b284f4(void)

undefined8 FUN_146b284f4(longlong param_1)

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



// FUNCTION 146b2854c FUN_146b2854c body=89 status=ok
// SIG undefined FUN_146b2854c(void)

bool FUN_146b2854c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146b28597;
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
LAB_146b28597:
  return lVar6 == param_2;
}



// FUNCTION 146b285c2 FUN_146b285c2 body=118 status=ok
// SIG undefined FUN_146b285c2(void)

void FUN_146b285c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2c3f0;
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



// FUNCTION 146b28638 FUN_146b28638 body=118 status=ok
// SIG undefined FUN_146b28638(void)

void FUN_146b28638(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2c3f0;
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



// FUNCTION 146b286ae FUN_146b286ae body=156 status=ok
// SIG undefined FUN_146b286ae(void)

void FUN_146b286ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f2a800;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f2c3f0;
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
                    /* WARNING: Could not recover jumptable at 0x000146b2873a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b2874a FUN_146b2874a body=286 status=ok
// SIG undefined FUN_146b2874a(void)

void FUN_146b2874a(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar8 = *(longlong **)(param_1 + 0x20);
  bVar4 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar6 = (int)plVar8[1];
    lVar7 = 0;
    do {
      if (iVar6 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_146b28798;
      }
      LOCK();
      iVar5 = (int)plVar8[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar7 = *(longlong *)(param_1 + 0x18);
    bVar4 = false;
  }
LAB_146b28798:
  pcVar3 = *(code **)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x30);
  local_38 = *param_3;
  local_30 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_48 = *param_2;
  local_40 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar3)(iVar6 + lVar7);
  if (!bVar4) {
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
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
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
  plVar8 = (longlong *)param_3[1];
  if (plVar8 != (longlong *)0x0) {
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
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b2886a FUN_146b2886a body=317 status=ok
// SIG undefined FUN_146b2886a(void)

ulonglong FUN_146b2886a(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_146b28937;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 != 0) {
      pcVar5 = *(code **)(param_1 + 0x28);
      iVar7 = *(int *)(param_1 + 0x30);
      local_38 = *param_3;
      local_30 = param_3[1];
      *param_3 = 0;
      param_3[1] = 0;
      local_48 = *param_2;
      local_40 = param_2[1];
      *param_2 = 0;
      param_2[1] = 0;
      (*pcVar5)(lVar4 + iVar7);
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
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
      goto LAB_146b28939;
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
LAB_146b28937:
  uVar8 = 0;
LAB_146b28939:
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
  plVar3 = (longlong *)param_3[1];
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
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 146b289a8 FUN_146b289a8 body=132 status=ok
// SIG undefined FUN_146b289a8(void)

void FUN_146b289a8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146b28a2e FUN_146b28a2e body=91 status=ok
// SIG undefined FUN_146b28a2e(void)

undefined8 * FUN_146b28a2e(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  iVar2 = (int)((ulonglong)(param_2[1] - lVar1) >> 4) * -0x55555555;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_146b17e8e(param_1,iVar2,0);
    FUN_146b17f01(*param_1,lVar1,iVar2);
  }
  return param_1;
}



// FUNCTION 146b28a8a FUN_146b28a8a body=101 status=ok
// SIG undefined FUN_146b28a8a(void)

longlong * FUN_146b28a8a(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140002266(param_1 + 2,&DAT_149e063bc,*param_3);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146b28af0 FUN_146b28af0 body=508 status=ok
// SIG undefined FUN_146b28af0(void)

longlong * FUN_146b28af0(longlong *param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c991280) && (FUN_144b3d300(&DAT_14c991280), DAT_14c991280 == -1)) {
    DAT_14c991270 = (longlong *)0x0;
    DAT_14c991278 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_1429252e0);
    _Init_thread_footer(&DAT_14c991280);
  }
  plVar7 = DAT_14c991278;
  bVar2 = 1;
  if (DAT_14c991278 == (longlong *)0x0) {
LAB_146b28bac:
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)DAT_14c991278[1];
    do {
      if (iVar5 == 0) goto LAB_146b28bac;
      LOCK();
      iVar3 = (int)plVar7[1];
      bVar9 = iVar5 == iVar3;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar9);
    plVar8 = DAT_14c991270;
    plVar4 = DAT_14c991278;
    if (DAT_14c991270 != (longlong *)0x0) goto LAB_146b28b55;
    bVar2 = 0;
  }
  plVar6 = (longlong *)FUN_146b2c80d();
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  plVar8 = (longlong *)0x0;
  if (plVar6 == plVar7) {
    plVar8 = plVar6;
  }
  if ((bool)(bVar2 | plVar6 == plVar7)) {
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
        plVar7 = plVar6;
        goto joined_r0x000146b28c03;
      }
    }
  }
  else {
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar5 = *piVar1;
      UNLOCK();
joined_r0x000146b28c03:
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar8 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    DAT_14c991270 = plVar8;
    if (DAT_14c991278 == (longlong *)0x0) goto LAB_146b28c74;
  }
  else {
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
    plVar7 = plVar6;
    DAT_14c991270 = plVar8;
    plVar4 = DAT_14c991278;
    if (DAT_14c991278 == plVar6) goto LAB_146b28b55;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    plVar4 = plVar6;
    if (DAT_14c991278 == (longlong *)0x0) goto LAB_146b28b55;
  }
  plVar7 = DAT_14c991278;
  LOCK();
  piVar1 = (int *)((longlong)DAT_14c991278 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar7 + 0x10))();
  }
  plVar7 = plVar6;
  plVar4 = plVar6;
  DAT_14c991278 = plVar6;
  if (plVar6 == (longlong *)0x0) {
LAB_146b28c74:
    *param_1 = (longlong)plVar8;
    param_1[1] = 0;
    return param_1;
  }
LAB_146b28b55:
  DAT_14c991278 = plVar4;
  LOCK();
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  UNLOCK();
  *param_1 = (longlong)plVar8;
  param_1[1] = (longlong)plVar7;
  LOCK();
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  UNLOCK();
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
  return param_1;
}



// FUNCTION 146b28cec FUN_146b28cec body=461 status=ok
// SIG undefined FUN_146b28cec(void)

void FUN_146b28cec(longlong param_1,undefined4 *param_2)

{
  void **ppvVar1;
  uint uVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined1 auStack_68 [40];
  void *local_40;
  uint local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 4);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 0x1a0) = *param_2;
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  *(undefined4 *)(param_1 + 0x1a8) = uVar4;
  *(undefined4 *)(param_1 + 0x1ac) = uVar5;
  FUN_144a787a6((undefined8 *)(param_1 + 0x1b8),param_2 + 6);
  uVar3 = param_2[0xb];
  uVar4 = param_2[0xc];
  uVar5 = param_2[0xd];
  *(undefined4 *)(param_1 + 0x1c8) = param_2[10];
  *(undefined4 *)(param_1 + 0x1cc) = uVar3;
  *(undefined4 *)(param_1 + 0x1d0) = uVar4;
  *(undefined4 *)(param_1 + 0x1d4) = uVar5;
  plVar7 = (longlong *)FUN_14054d1d4();
  uVar2 = *(uint *)(param_1 + 0x1c0);
  if ((int)uVar2 < 2) {
    FUN_146b28eba(&local_40);
  }
  else {
    local_40 = (void *)0x0;
    _Src = *(void **)(param_1 + 0x1b8);
    local_38 = uVar2;
    FUN_1446dd670(&local_40,(ulonglong)uVar2,0);
    memcpy(local_40,_Src,(ulonglong)uVar2 * 2);
  }
  ppvVar1 = (void **)(param_1 + 400);
  if (ppvVar1 == &local_40) {
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 400) != 0) {
      FUN_1400020a8();
    }
    *(void **)(param_1 + 400) = local_40;
    local_40 = (void *)0x0;
    *(uint *)(param_1 + 0x198) = local_38;
    *(undefined4 *)(param_1 + 0x19c) = local_34;
  }
  if (*(int *)(param_1 + 0x198) == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = *ppvVar1;
  }
  cVar6 = (**(code **)(*plVar7 + 0x50))(plVar7,puVar8);
  if (cVar6 == '\0') {
    if (*(int *)(param_1 + 0x198) == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = *ppvVar1;
    }
    (**(code **)(*plVar7 + 0x58))(plVar7,puVar8,1);
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe8));
  FUN_146b28f64(param_1 + 0xf0,param_1 + 0x1a0);
  *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0x1d0);
  if (*(longlong *)(param_1 + 0x1d0) < *(longlong *)(param_1 + 0xa8)) {
    do {
      FUN_142926e76(param_1 + 0x40);
    } while (*(longlong *)(param_1 + 0xb0) < *(longlong *)(param_1 + 0xa8));
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe8));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b28eba FUN_146b28eba body=168 status=ok
// SIG undefined FUN_146b28eba(void)

undefined8 FUN_146b28eba(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400b22c2(&local_38,&DAT_149f2c732);
  FUN_140b74e96(&local_48);
  iVar1 = local_30 + -1;
  if (local_30 == 0) {
    iVar1 = 0;
  }
  FUN_1412cfe60(param_1,&local_48,iVar1 + 1 + (uint)(local_40 == 0));
  FUN_1401aebe8(param_1,local_38,iVar1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b28f64 FUN_146b28f64 body=1350 status=ok
// SIG undefined FUN_146b28f64(void)

void FUN_146b28f64(longlong param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_168 [32];
  ulonglong local_148;
  ulonglong local_140;
  longlong local_138;
  longlong local_130;
  ulonglong *local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined1 local_104 [4];
  undefined **local_100;
  undefined1 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  int local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_142926890();
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_148 = (ulonglong)*(int *)(param_1 + 0x20);
  if (local_148 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x18);
    plVar7 = (longlong *)FUN_146b2b320(param_1,lVar9);
    local_130 = param_1;
    local_128 = param_2;
    if ((plVar7 == (longlong *)0x0) ||
       (lVar8 = (**(code **)(*plVar7 + 0x50))(plVar7),
       lVar8 != (longlong)*(int *)(lVar9 + 8) * (longlong)*(int *)(lVar9 + 0xc))) {
      FUN_1447cbafe(&local_e8,&local_100,lVar9 + 4,0);
      bVar4 = true;
    }
    else {
      FUN_146b2b56e(param_1,&local_100,lVar9);
      FUN_14482b35e(&local_98,local_104,&local_100,0);
      if (local_100 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      bVar4 = false;
    }
    local_110 = -local_148;
    local_118 = lVar9 + 0x50;
    local_140 = 0;
    uVar14 = 0;
    local_138 = lVar9;
LAB_146b2920d:
    do {
      iVar5 = (int)uVar14;
      uVar14 = (ulonglong)(iVar5 + 1U);
      if ((int)(iVar5 + 1U) < (int)local_148) {
        lVar16 = (longlong)iVar5;
        local_120 = lVar16 + 1;
        lVar8 = local_110 + lVar16;
        lVar17 = local_118 + lVar16 * 0x50;
        bVar3 = true;
        lVar13 = 0;
        do {
          plVar7 = (longlong *)FUN_146b2b320(local_130,lVar17);
          iVar12 = (int)lVar13;
          if ((plVar7 == (longlong *)0x0) ||
             (lVar9 = (**(code **)(*plVar7 + 0x50))(plVar7),
             lVar9 != (longlong)*(int *)(lVar17 + 8) * (longlong)*(int *)(lVar17 + 0xc))) {
            FUN_1447cbafe(&local_e8,&local_100,lVar17 + 4);
            if (!bVar4) {
              uVar14 = (ulonglong)(iVar5 + iVar12 + 1);
              iVar12 = iVar12 + 1;
              lVar9 = local_138;
              goto LAB_146b29354;
            }
          }
          else {
            FUN_146b2b56e(local_130,&local_100,lVar17);
            FUN_14482b35e(&local_98,local_104,&local_100,0);
            if (local_100 != (undefined **)0x0) {
              FUN_1400020a8();
            }
            lVar9 = local_138;
            if (bVar4) {
              FUN_146b2bfea(lVar16 * 0x50 + local_138,iVar12 + 1);
              if (!bVar3) goto LAB_146b2939d;
              uVar14 = local_120 + lVar13;
              bVar4 = false;
              goto LAB_146b2920d;
            }
          }
          bVar3 = lVar16 + lVar13 + 2 < (longlong)local_148;
          lVar13 = lVar13 + 1;
          lVar17 = lVar17 + 0x50;
        } while (lVar8 + 1 + lVar13 != 0);
        uVar14 = local_148 & 0xffffffff;
        lVar9 = local_138;
      }
      else {
        bVar3 = false;
      }
      iVar12 = (int)uVar14 - iVar5;
      if (bVar4) {
        FUN_146b2bfea((longlong)iVar5 * 0x50 + lVar9,iVar12);
        bVar4 = false;
        if (!bVar3) break;
        goto LAB_146b2920d;
      }
LAB_146b29354:
      iVar15 = (int)local_140;
      if (iVar15 != iVar5) {
        memmove((void *)((longlong)iVar15 * 0x50 + lVar9),(void *)((longlong)iVar5 * 0x50 + lVar9),
                (longlong)iVar12 * 0x50);
      }
      local_140 = (ulonglong)(uint)(iVar15 + iVar12);
      bVar4 = true;
    } while (bVar3);
LAB_146b2939d:
    param_1 = local_130;
    *(int *)(local_130 + 0x20) = (int)local_140;
    if ((int)uStack_e0 != local_b4) {
      FUN_146b2bc4a(local_130);
      if ((longlong)*(int *)(param_1 + 0x20) != 0) {
        lVar9 = (longlong)*(int *)(param_1 + 0x20) * 0x50;
        lVar8 = *(longlong *)(param_1 + 0x18) + 0x20;
        do {
          *(undefined4 *)(lVar8 + 8) = 0;
          if (*(int *)(lVar8 + 0xc) != 0) {
            FUN_146b2c7ae(lVar8,0);
          }
          *(undefined4 *)(lVar8 + -8) = 0;
          uVar6 = 0;
          iVar5 = 0;
          if (*(int *)(lVar8 + -4) != 0) {
            FUN_146b2c7ae(lVar8 + -0x10,0);
            iVar5 = *(int *)(lVar8 + -8);
            uVar6 = *(uint *)(lVar8 + -4);
          }
          uVar1 = *(uint *)(lVar8 + -0x14);
          *(uint *)(lVar8 + -8) = iVar5 + 1U;
          if (uVar6 < iVar5 + 1U) {
            FUN_146b2c17a(lVar8 + -0x10);
          }
          *(ulonglong *)(*(longlong *)(lVar8 + -0x10) + (longlong)iVar5 * 8) =
               (ulonglong)uVar1 << 0x20;
          lVar8 = lVar8 + 0x50;
          lVar9 = lVar9 + -0x50;
        } while (lVar9 != 0);
      }
    }
    param_2 = local_128;
    if ((int)local_140 < (int)local_148) {
      FUN_146b2b0ba(param_1);
    }
  }
  lVar9 = *(longlong *)(param_1 + 8);
  local_f8 = 0;
  local_100 = &PTR_FUN_149f2c790;
  local_f0 = &local_98;
  plVar7 = (longlong *)FUN_140e92164();
  if (*(int *)(lVar9 + 0x198) == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = *(undefined2 **)(lVar9 + 400);
  }
  (**(code **)(*plVar7 + 0x130))(plVar7,puVar10,&local_100);
  uVar14 = (ulonglong)*(int *)(param_1 + 0x20);
  if (uVar14 < param_2[2]) {
    uVar11 = 0x1000000;
    if (*param_2 < 0x1000000) {
      uVar11 = *param_2;
    }
    uVar11 = uVar11 + (uVar11 == 0);
    uVar2 = param_2[1];
    if ((longlong)uVar2 <= (longlong)uVar11) {
      uVar11 = uVar2;
    }
    do {
      iVar5 = FUN_142926638(param_1,uVar2,uVar11 & 0xffffffff);
      if (iVar5 == 0) break;
      uVar14 = uVar14 + 1;
    } while (uVar14 < param_2[2]);
  }
  FUN_146b2b904(param_1);
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_e8);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_98);
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b294ac FUN_146b294ac body=203 status=ok
// SIG undefined FUN_146b294ac(void)

undefined4 *
FUN_146b294ac(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 param_5)

{
  PSRWLOCK SRWLock;
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  SRWLock = (PSRWLOCK)(param_1 + 0xe8);
  AcquireSRWLockShared(SRWLock);
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0xf0) + 0x28))(param_1 + 0xf0,param_3);
  if (cVar1 == '\0') {
    ReleaseSRWLockShared(SRWLock);
    local_60 = param_5;
    local_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
    local_48 = param_3[4];
    local_68 = param_4;
    FUN_146b29578(param_1 + 0x20);
  }
  else {
    ReleaseSRWLockShared(SRWLock);
  }
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 0;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b29578 FUN_146b29578 body=506 status=ok
// SIG undefined FUN_146b29578(void)

void FUN_146b29578(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar7 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149f2c860;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[10] = 0;
  *(undefined1 *)(plVar7 + 2) = 0xff;
  *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x2c) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x14) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x1c) = 0;
  *(undefined4 *)((longlong)plVar7 + 0x34) = 0;
  plVar7[0xb] = 0;
  plVar7[0xc] = 0;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
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
  *(undefined1 *)(plVar7 + 2) = 1;
  *(undefined4 *)((longlong)plVar7 + 0x24) = param_2[4];
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(undefined4 *)((longlong)plVar7 + 0x14) = *param_2;
  *(undefined4 *)(plVar7 + 3) = uVar4;
  *(undefined4 *)((longlong)plVar7 + 0x1c) = uVar5;
  *(undefined4 *)(plVar7 + 4) = uVar6;
  plVar8 = (longlong *)FUN_146b2cd4c(param_3);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)plVar7[6];
  plVar7[5] = (longlong)(plVar8 + 2);
  plVar7[6] = (longlong)plVar8;
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
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_48 = param_2[4];
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_68 = plVar8 + 2;
  local_60 = plVar8;
  FUN_14292605c(param_1 + 0x20,&local_58,&local_68);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_78 = plVar7 + 2;
  local_70 = plVar7;
  FUN_146b2af88(param_1,&local_78);
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b29774 FUN_146b29774 body=102 status=ok
// SIG undefined FUN_146b29774(void)

undefined8
FUN_146b29774(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = param_3[4];
  local_38 = param_5;
  FUN_146b297dc(param_1 + 0x20,param_2,&local_28);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b297dc FUN_146b297dc body=602 status=ok
// SIG undefined FUN_146b297dc(void)

longlong *
FUN_146b297dc(longlong param_1,longlong *param_2,undefined4 *param_3,longlong param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong *local_98;
  longlong local_90;
  longlong *local_88;
  undefined1 local_80;
  longlong local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  local_58 = param_3[4];
  FUN_146b29afe(param_1 + 0x20,&local_78);
  if (local_78 == 0) {
    plVar6 = (longlong *)FUN_14001cc68(0x68,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_149f2c860;
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[8] = 0;
    plVar6[9] = 0;
    plVar6[10] = 0;
    *(undefined1 *)(plVar6 + 2) = 0xff;
    *(undefined8 *)((longlong)plVar6 + 0x24) = 0;
    *(undefined8 *)((longlong)plVar6 + 0x2c) = 0;
    *(undefined8 *)((longlong)plVar6 + 0x14) = 0;
    *(undefined8 *)((longlong)plVar6 + 0x1c) = 0;
    *(undefined4 *)((longlong)plVar6 + 0x34) = 0;
    plVar6[0xb] = 0;
    plVar6[0xc] = 0;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    *(undefined1 *)(plVar6 + 2) = 0;
    *(undefined4 *)((longlong)plVar6 + 0x24) = param_3[4];
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined4 *)((longlong)plVar6 + 0x14) = *param_3;
    *(undefined4 *)(plVar6 + 3) = uVar3;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uVar4;
    *(undefined4 *)(plVar6 + 4) = uVar5;
    plVar6[0xb] = param_4;
    plVar6[0xc] = param_5;
    FUN_146b2b06a(plVar6 + 7);
    *(undefined1 *)(plVar6 + 9) = 1;
    *param_2 = plVar6[7];
    lVar7 = plVar6[8];
    param_2[1] = lVar7;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    local_a0 = plVar6 + 2;
    local_98 = plVar6;
    if (plVar6 == (longlong *)0x0) {
      FUN_146b2af88(param_1,&local_a0);
      goto LAB_146b29933;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    FUN_146b2af88(param_1,&local_a0);
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_146b29933;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 != 0) goto LAB_146b29933;
    lVar7 = *plVar6;
    local_88 = plVar6;
  }
  else {
    FUN_146b2cba2(&local_90);
    local_80 = 0;
    FUN_146b2c9b6(local_90,local_78);
    local_80 = 1;
    *param_2 = local_90;
    param_2[1] = (longlong)local_88;
    if (local_88 == (longlong *)0x0) goto LAB_146b29933;
    LOCK();
    *(int *)(local_88 + 1) = (int)local_88[1] + 1;
    UNLOCK();
    if (local_88 == (longlong *)0x0) goto LAB_146b29933;
    LOCK();
    plVar6 = local_88 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_146b29933;
    (**(code **)*local_88)(local_88);
    LOCK();
    piVar2 = (int *)((longlong)local_88 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 != 0) goto LAB_146b29933;
    lVar7 = *local_88;
  }
  (**(code **)(lVar7 + 0x10))(local_88);
LAB_146b29933:
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_70 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b29a38 FUN_146b29a38 body=197 status=ok
// SIG undefined FUN_146b29a38(void)

ulonglong FUN_146b29a38(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = param_2[4];
  FUN_146b29afe(param_1 + 0x40,&local_58);
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (local_58 == 0) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe8));
    uVar3 = (**(code **)(*(longlong *)(param_1 + 0xf0) + 0x28))(param_1 + 0xf0,param_2);
    uVar4 = (ulonglong)uVar3;
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe8));
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b29afe FUN_146b29afe body=220 status=ok
// SIG undefined FUN_146b29afe(void)

undefined8 * FUN_146b29afe(PSRWLOCK param_1,undefined8 *param_2,undefined4 *param_3)

{
  PVOID pvVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < (longlong)param_1[0xe].Ptr) {
    AcquireSRWLockShared(param_1);
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    local_28 = param_3[4];
    iVar3 = FUN_146b2e0be(param_1 + 1,local_38);
    if (((iVar3 != -1) &&
        (pvVar1 = (PVOID)((longlong)param_1[1].Ptr + (longlong)iVar3 * 0x28),
        plVar4 = (longlong *)((longlong)pvVar1 + 0x18),
        plVar4 != (longlong *)0x0 && pvVar1 != (PVOID)0x0)) && (lVar2 = *plVar4, lVar2 != 0)) {
      *param_2 = *(undefined8 *)(lVar2 + 0x28);
      lVar2 = *(longlong *)(lVar2 + 0x30);
      param_2[1] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      ReleaseSRWLockShared(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    ReleaseSRWLockShared(param_1);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b29be0 FUN_146b29be0 body=86 status=ok
// SIG undefined FUN_146b29be0(void)

undefined8 FUN_146b29be0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe8));
  (**(code **)(*(longlong *)(param_1 + 0xf0) + 0x20))(param_1 + 0xf0,param_2,param_3);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe8));
  return param_2;
}



// FUNCTION 146b29c36 FUN_146b29c36 body=75 status=ok
// SIG undefined FUN_146b29c36(void)

void FUN_146b29c36(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  FUN_146b29c82(param_1 + 0x20,&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b29c82 FUN_146b29c82 body=334 status=ok
// SIG undefined FUN_146b29c82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146b29c82(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar6 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149f2c860;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  *(undefined1 *)(plVar6 + 2) = 0xff;
  *(undefined8 *)((longlong)plVar6 + 0x24) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x2c) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x14) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x1c) = 0;
  *(undefined4 *)((longlong)plVar6 + 0x34) = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  if (plVar6 == (longlong *)0x0) {
    DAT_00000010 = 2;
    _DAT_00000024 = param_2[4];
    _DAT_00000014 = *param_2;
    _DAT_00000018 = param_2[1];
    _DAT_0000001c = param_2[2];
    _DAT_00000020 = param_2[3];
    local_38 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
    *(undefined1 *)(plVar6 + 2) = 2;
    *(undefined4 *)((longlong)plVar6 + 0x24) = param_2[4];
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(undefined4 *)((longlong)plVar6 + 0x14) = *param_2;
    *(undefined4 *)(plVar6 + 3) = uVar3;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uVar4;
    *(undefined4 *)(plVar6 + 4) = uVar5;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    local_38 = plVar6;
  }
  local_40 = plVar6 + 2;
  FUN_146b2af88(param_1,&local_40);
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b29de6 FUN_146b29de6 body=79 status=ok
// SIG undefined FUN_146b29de6(void)

undefined4 FUN_146b29de6(longlong param_1)

{
  undefined4 uVar1;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe8));
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0xf0) + 0x30))(param_1 + 0xf0);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe8));
  return uVar1;
}



// FUNCTION 146b29e36 FUN_146b29e36 body=56 status=ok
// SIG undefined FUN_146b29e36(void)

void FUN_146b29e36(longlong param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe8));
  FUN_146b29e6e(param_1 + 0xf0);
                    /* WARNING: Could not recover jumptable at 0x000146b29e67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe8));
  return;
}



// FUNCTION 146b29e6e FUN_146b29e6e body=2483 status=ok
// SIG undefined FUN_146b29e6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146b29e6e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined1 auVar19 [16];
  int iVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  undefined1 *puVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  int *piVar31;
  bool bVar32;
  bool bVar33;
  undefined4 uVar34;
  undefined4 uVar36;
  undefined1 auVar35 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar37 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar38 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar39 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar40 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar43 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar56 [16];
  undefined1 auStack_3f8 [32];
  longlong local_3d8;
  longlong local_3c8;
  int local_3c0;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined8 local_388;
  undefined8 uStack_380;
  undefined4 local_378;
  undefined8 local_370;
  longlong *local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined4 local_354;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  longlong *local_250;
  undefined8 local_248;
  longlong *local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  longlong local_148;
  undefined1 local_138 [2] [16];
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  plVar1 = param_1 + 5;
  local_118 = 0;
  local_110 = 0;
  local_138[0] = (undefined1  [16])0x0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  FUN_146b2c200(local_138,plVar1);
  local_398 = (undefined1  [16])0x0;
  local_3a8 = (undefined1  [16])0x0;
  iVar22 = (int)param_1[4];
  if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar22);
  }
  local_398._0_12_ = ZEXT812(0);
  local_398._12_4_ = 0;
  if (iVar22 != 0) {
    FUN_14481578e(local_398);
    lVar28 = param_1[4];
    if ((longlong)(int)lVar28 != 0) {
      lVar30 = param_1[3];
      lVar27 = 0;
      do {
        uVar34 = local_398._8_4_;
        lVar29 = (longlong)(int)local_398._8_4_;
        uVar21 = local_398._8_4_ + 1;
        local_398._8_4_ = uVar21;
        if ((uint)local_398._12_4_ < uVar21) {
          FUN_1446f48e2(local_398,uVar34);
        }
        *(undefined4 *)(local_398._0_8_ + lVar29 * 4) = *(undefined4 *)(lVar30 + 4 + lVar27);
        lVar27 = lVar27 + 0x50;
      } while ((longlong)(int)lVar28 * 0x50 != lVar27);
    }
    if ((longlong)(int)local_398._8_4_ != 0) {
      piVar4 = (int *)(local_398._0_8_ + (longlong)(int)local_398._8_4_ * 4);
      piVar31 = (int *)local_398._0_8_;
      do {
        if ((longlong)(int)param_1[4] != 0) {
          lVar28 = param_1[3];
          lVar30 = (longlong)(int)param_1[4] * 0x50;
          do {
            if (*(int *)(lVar28 + 4) == *piVar31) {
              if (lVar28 != 0) {
                *(undefined1 *)(lVar28 + 0x40) = 1;
                iVar22 = FUN_142926638(param_1,(longlong)*(int *)(lVar28 + 0xc) *
                                               (longlong)*(int *)(lVar28 + 8));
                if (iVar22 < 1) {
                  FUN_146b2b904(param_1);
                  goto LAB_146b2a320;
                }
                uVar34 = local_3a8._8_4_;
                lVar28 = (longlong)(int)local_3a8._8_4_;
                uVar21 = local_3a8._8_4_ + 1;
                local_3a8._8_4_ = uVar21;
                if ((uint)local_3a8._12_4_ < uVar21) {
                  FUN_1446f48e2(local_3a8,uVar34);
                }
                *(int *)(local_3a8._0_8_ + lVar28 * 4) = iVar22;
              }
              break;
            }
            lVar28 = lVar28 + 0x50;
            lVar30 = lVar30 + -0x50;
          } while (lVar30 != 0);
        }
        piVar31 = piVar31 + 1;
      } while (piVar31 != piVar4);
    }
  }
  FUN_146b2b904(param_1);
  local_3b8 = (undefined1  [16])0x0;
  plVar2 = param_1 + 7;
  local_370 = 0x100000000;
  local_360 = 0xffffffff;
  local_358 = 0;
  iVar22 = 0;
  local_368 = plVar2;
  if ((int)param_1[10] != 0) {
    FUN_1449c0562(&local_370);
    iVar22 = (int)param_1[10];
  }
  local_238 = local_360;
  uVar18 = local_238;
  local_230 = local_358;
  local_22c = local_354;
  local_248 = local_370;
  local_240 = local_368;
  local_238._4_4_ = (int)((ulonglong)local_360 >> 0x20);
  iVar20 = local_238._4_4_;
  local_250 = plVar1;
  if ((local_238._4_4_ != iVar22) || (local_238 = uVar18, local_368 != plVar2)) {
    do {
      local_238 = uVar18;
      puVar26 = (undefined8 *)((longlong)iVar20 * 0x40 + *local_250);
      uVar34 = local_3b8._8_4_;
      lVar28 = (longlong)(int)local_3b8._8_4_;
      uVar21 = local_3b8._8_4_ + 1;
      local_3b8._8_4_ = uVar21;
      if ((uint)local_3b8._12_4_ < uVar21) {
        FUN_14170552e(local_3b8,uVar34);
      }
      *(undefined4 *)(local_3b8._0_8_ + 0x10 + lVar28 * 0x14) = *(undefined4 *)(puVar26 + 2);
      uVar18 = puVar26[1];
      puVar3 = (undefined8 *)(local_3b8._0_8_ + lVar28 * 0x14);
      *puVar3 = *puVar26;
      puVar3[1] = uVar18;
      local_238 = CONCAT44(local_238._4_4_,(uint)local_238 & ~local_248._4_4_);
      FUN_1449c0562(&local_248);
      iVar20 = local_238._4_4_;
      uVar18 = local_238;
    } while (local_250 != plVar1 || (local_240 != plVar2 || local_238._4_4_ != iVar22));
  }
  bVar32 = true;
  if ((longlong)(int)local_3b8._8_4_ != 0) {
    lVar28 = (longlong)(int)local_3b8._8_4_ * 0x14;
    puVar26 = (undefined8 *)local_3b8._0_8_;
    while( true ) {
      lVar28 = lVar28 + -0x14;
      local_268 = *puVar26;
      uStack_260 = puVar26[1];
      local_258 = *(undefined4 *)(puVar26 + 2);
      local_3d8 = 0;
      (**(code **)(*param_1 + 0x18))(param_1,&local_250,&local_268,0);
      FUN_146b2d4bc(plVar1,puVar26);
      if ((int)local_250 != 0) break;
      FUN_146b2ad9e(&local_250,&local_3c8);
      lVar30 = local_3c8;
      local_3d8 = (longlong)local_3c0;
      local_388 = *puVar26;
      uStack_380 = puVar26[1];
      local_378 = *(undefined4 *)(puVar26 + 2);
      FUN_14292559e(param_1,&local_370,&local_388);
      iVar22 = (int)local_370;
      bVar32 = (int)local_370 == 0;
      if (lVar30 != 0) {
        FUN_1400020a8(lVar30);
      }
      bVar33 = (int)local_250 == 0;
      local_250 = (longlong *)CONCAT26(local_250._6_2_,1);
      if ((bVar33) && (local_148 != 0)) {
        FUN_1400020a8();
      }
      if ((iVar22 != 0) || (puVar26 = (undefined8 *)((longlong)puVar26 + 0x14), lVar28 == 0))
      goto LAB_146b2a2c9;
    }
    bVar32 = false;
LAB_146b2a2c9:
  }
  if ((undefined8 *)local_3b8._0_8_ != (undefined8 *)0x0) {
    FUN_1400020a8(local_3b8._0_8_);
  }
  if (bVar32) {
    lVar28 = (longlong)(int)local_398._8_4_;
    if (lVar28 != 0) {
      uVar18 = local_398._0_8_;
      lVar30 = 0;
      do {
        FUN_146b2b986(param_1,*(undefined4 *)(uVar18 + lVar30));
        lVar30 = lVar30 + 4;
      } while (lVar28 * 4 != lVar30);
    }
    FUN_146b2b0ba(param_1);
  }
  else {
LAB_146b2a320:
    lVar28 = (longlong)(int)local_3a8._8_4_;
    if (lVar28 != 0) {
      uVar18 = local_3a8._0_8_;
      lVar30 = 0;
      do {
        FUN_146b2b986(param_1,*(undefined4 *)(uVar18 + lVar30));
        lVar30 = lVar30 + 4;
      } while (lVar28 * 4 != lVar30);
    }
    auVar19 = _DAT_149931e80;
    if ((longlong)(int)param_1[4] != 0) {
      uVar23 = (longlong)(int)param_1[4] * 0x50 - 0x50;
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar23;
      uVar34 = SUB164(auVar37 * ZEXT816(0xcccccccccccccccd),8);
      uVar36 = (undefined4)(uVar23 / 0x140000000);
      auVar38._0_8_ = CONCAT44(uVar36,uVar34);
      auVar38._8_4_ = uVar34;
      auVar38._12_4_ = uVar36;
      auVar35._0_8_ = auVar38._0_8_ >> 6;
      auVar35._8_8_ = auVar38._8_8_ >> 6;
      puVar24 = (undefined1 *)(param_1[3] + 0x4f0);
      uVar25 = 0;
      auVar37 = pmovsxbq(in_XMM1,0xf0e);
      auVar38 = pmovsxbq(in_XMM2,0xd0c);
      auVar39 = pmovsxbq(in_XMM3,0xb0a);
      auVar40 = pmovsxbq(in_XMM4,0x908);
      auVar41 = pmovsxbq(in_XMM5,0x706);
      auVar42 = pmovsxbq((undefined1  [16])0x0,0x504);
      auVar43 = pmovsxbq(unaff_XMM7,0x302);
      auVar44 = pmovsxbq(unaff_XMM8,0x100);
      do {
        auVar45._8_4_ = (int)uVar25;
        auVar45._0_8_ = uVar25;
        auVar45._12_4_ = (int)(uVar25 >> 0x20);
        auVar47 = auVar35 | auVar19;
        auVar48 = (auVar45 | auVar44) ^ auVar19;
        lVar28 = auVar47._0_8_;
        auVar49._0_8_ = -(ulonglong)(lVar28 < auVar48._0_8_);
        lVar30 = auVar47._8_8_;
        auVar49._8_8_ = -(ulonglong)(lVar30 < auVar48._8_8_);
        auVar56 = pshuflw(unaff_XMM14,auVar49,0xe8);
        auVar48._8_4_ = 0xffffffff;
        auVar48._0_8_ = 0xffffffffffffffff;
        auVar48._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar56 ^ auVar48,auVar56 ^ auVar48);
        if ((auVar48._0_4_ & 1) != 0) {
          puVar24[-0x4b0] = 0;
        }
        auVar49 = packssdw(auVar49,auVar49);
        auVar56._8_4_ = 0xffffffff;
        auVar56._0_8_ = 0xffffffffffffffff;
        auVar56._12_4_ = 0xffffffff;
        auVar49 = packssdw(auVar49 ^ auVar56,auVar49 ^ auVar56);
        auVar49 = packsswb(auVar49,auVar49);
        if ((auVar49[1] & 1) != 0) {
          puVar24[-0x460] = 0;
        }
        auVar49 = (auVar45 | auVar43) ^ auVar19;
        auVar50._0_8_ = -(ulonglong)(lVar28 < auVar49._0_8_);
        auVar50._8_8_ = -(ulonglong)(lVar30 < auVar49._8_8_);
        auVar48 = packssdw(auVar48,auVar50);
        auVar5._8_4_ = 0xffffffff;
        auVar5._0_8_ = 0xffffffffffffffff;
        auVar5._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 ^ auVar5,auVar48 ^ auVar5);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[2] & 1) != 0) {
          puVar24[-0x410] = 0;
        }
        auVar49 = pshufhw(auVar50,auVar50,0x84);
        auVar6._8_4_ = 0xffffffff;
        auVar6._0_8_ = 0xffffffffffffffff;
        auVar6._12_4_ = 0xffffffff;
        auVar49 = packssdw(auVar49 ^ auVar6,auVar49 ^ auVar6);
        auVar49 = packsswb(auVar49,auVar49);
        if ((auVar49[3] & 1) != 0) {
          puVar24[-0x3c0] = 0;
        }
        auVar49 = (auVar45 | auVar42) ^ auVar19;
        auVar51._0_8_ = -(ulonglong)(lVar28 < auVar49._0_8_);
        auVar51._8_8_ = -(ulonglong)(lVar30 < auVar49._8_8_);
        auVar48 = pshuflw(auVar48,auVar51,0xe8);
        auVar7._8_4_ = 0xffffffff;
        auVar7._0_8_ = 0xffffffffffffffff;
        auVar7._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 ^ auVar7,auVar48 ^ auVar7);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[4] & 1) != 0) {
          puVar24[-0x370] = 0;
        }
        auVar49 = packssdw(auVar51,auVar51);
        auVar8._8_4_ = 0xffffffff;
        auVar8._0_8_ = 0xffffffffffffffff;
        auVar8._12_4_ = 0xffffffff;
        auVar49 = packssdw(auVar49 ^ auVar8,auVar49 ^ auVar8);
        auVar49 = packsswb(auVar49,auVar49);
        if ((auVar49[5] & 1) != 0) {
          puVar24[-800] = 0;
        }
        auVar49 = (auVar45 | auVar41) ^ auVar19;
        auVar52._0_8_ = -(ulonglong)(lVar28 < auVar49._0_8_);
        auVar52._8_8_ = -(ulonglong)(lVar30 < auVar49._8_8_);
        auVar48 = packssdw(auVar48,auVar52);
        auVar9._8_4_ = 0xffffffff;
        auVar9._0_8_ = 0xffffffffffffffff;
        auVar9._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 ^ auVar9,auVar48 ^ auVar9);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[6] & 1) != 0) {
          puVar24[-0x2d0] = 0;
        }
        auVar49 = pshufhw(auVar52,auVar52,0x84);
        auVar10._8_4_ = 0xffffffff;
        auVar10._0_8_ = 0xffffffffffffffff;
        auVar10._12_4_ = 0xffffffff;
        auVar49 = packssdw(auVar49 ^ auVar10,auVar49 ^ auVar10);
        auVar49 = packsswb(auVar49,auVar49);
        if ((auVar49[7] & 1) != 0) {
          puVar24[-0x280] = 0;
        }
        auVar49 = (auVar45 | auVar40) ^ auVar19;
        auVar53._0_8_ = -(ulonglong)(lVar28 < auVar49._0_8_);
        auVar53._8_8_ = -(ulonglong)(lVar30 < auVar49._8_8_);
        auVar48 = pshuflw(auVar48,auVar53,0xe8);
        auVar11._8_4_ = 0xffffffff;
        auVar11._0_8_ = 0xffffffffffffffff;
        auVar11._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 ^ auVar11,auVar48 ^ auVar11);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[8] & 1) != 0) {
          puVar24[-0x230] = 0;
        }
        auVar49 = packssdw(auVar53,auVar53);
        auVar12._8_4_ = 0xffffffff;
        auVar12._0_8_ = 0xffffffffffffffff;
        auVar12._12_4_ = 0xffffffff;
        auVar49 = packssdw(auVar49 ^ auVar12,auVar49 ^ auVar12);
        auVar49 = packsswb(auVar49,auVar49);
        if ((auVar49[9] & 1) != 0) {
          puVar24[-0x1e0] = 0;
        }
        auVar49 = (auVar45 | auVar39) ^ auVar19;
        auVar54._0_8_ = -(ulonglong)(lVar28 < auVar49._0_8_);
        auVar54._8_8_ = -(ulonglong)(lVar30 < auVar49._8_8_);
        auVar48 = packssdw(auVar48,auVar54);
        auVar13._8_4_ = 0xffffffff;
        auVar13._0_8_ = 0xffffffffffffffff;
        auVar13._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 ^ auVar13,auVar48 ^ auVar13);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[10] & 1) != 0) {
          puVar24[-400] = 0;
        }
        auVar49 = pshufhw(auVar54,auVar54,0x84);
        auVar14._8_4_ = 0xffffffff;
        auVar14._0_8_ = 0xffffffffffffffff;
        auVar14._12_4_ = 0xffffffff;
        auVar49 = packssdw(auVar49 ^ auVar14,auVar49 ^ auVar14);
        auVar49 = packsswb(auVar49,auVar49);
        if ((auVar49[0xb] & 1) != 0) {
          puVar24[-0x140] = 0;
        }
        auVar49 = (auVar45 | auVar38) ^ auVar19;
        auVar55._0_8_ = -(ulonglong)(lVar28 < auVar49._0_8_);
        auVar55._8_8_ = -(ulonglong)(lVar30 < auVar49._8_8_);
        auVar48 = pshuflw(auVar48,auVar55,0xe8);
        auVar15._8_4_ = 0xffffffff;
        auVar15._0_8_ = 0xffffffffffffffff;
        auVar15._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 ^ auVar15,auVar48 ^ auVar15);
        unaff_XMM14 = packsswb(auVar48,auVar48);
        if ((unaff_XMM14[0xc] & 1) != 0) {
          puVar24[-0xf0] = 0;
        }
        auVar48 = packssdw(auVar55,auVar55);
        auVar16._8_4_ = 0xffffffff;
        auVar16._0_8_ = 0xffffffffffffffff;
        auVar16._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 ^ auVar16,auVar48 ^ auVar16);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[0xd] & 1) != 0) {
          puVar24[-0xa0] = 0;
        }
        auVar48 = (auVar45 | auVar37) ^ auVar19;
        auVar46._0_8_ = -(ulonglong)(lVar28 < auVar48._0_8_);
        auVar46._8_8_ = -(ulonglong)(lVar30 < auVar48._8_8_);
        auVar48 = packssdw(auVar47,auVar46);
        auVar47._8_4_ = 0xffffffff;
        auVar47._0_8_ = 0xffffffffffffffff;
        auVar47._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 ^ auVar47,auVar48 ^ auVar47);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[0xe] & 1) != 0) {
          puVar24[-0x50] = 0;
        }
        auVar48 = pshufhw(auVar46,auVar46,0x84);
        auVar17._8_4_ = 0xffffffff;
        auVar17._0_8_ = 0xffffffffffffffff;
        auVar17._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 ^ auVar17,auVar48 ^ auVar17);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[0xf] & 1) != 0) {
          *puVar24 = 0;
        }
        uVar25 = uVar25 + 0x10;
        puVar24 = puVar24 + 0x500;
      } while ((uVar23 / 0x50 + 0x10 & 0xfffffffffffffff0) != uVar25);
    }
    FUN_146b2c594(plVar1,local_138);
  }
  FUN_146b2b904(param_1);
  (**(code **)(*param_1 + 8))(param_1);
  if (local_3a8._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_398._0_8_ != 0) {
    FUN_1400020a8();
  }
  local_f0 = 0;
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  FUN_146b2c778(local_138);
  if ((local_e0 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b2a824 FUN_146b2a824 body=69 status=ok
// SIG undefined FUN_146b2a824(void)

undefined8 FUN_146b2a824(longlong param_1)

{
  undefined8 uVar1;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe8));
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0xf0) + 0x40))(param_1 + 0xf0);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe8));
  return uVar1;
}



// FUNCTION 146b2a86a FUN_146b2a86a body=69 status=ok
// SIG undefined FUN_146b2a86a(void)

undefined8 FUN_146b2a86a(longlong param_1)

{
  undefined8 uVar1;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe8));
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0xf0) + 0x38))(param_1 + 0xf0);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe8));
  return uVar1;
}



// FUNCTION 146b2a8c0 FUN_146b2a8c0 body=331 status=ok
// SIG undefined FUN_146b2a8c0(void)

undefined8 * FUN_146b2a8c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_149f2c6a0;
  param_1[1] = param_2;
  uVar1 = FUN_1405d8a54(0);
  param_1[3] = uVar1;
  InitializeSRWLock((PSRWLOCK)(param_1 + 4));
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = param_1 + 0xf;
  param_1[0x10] = param_1 + 0xf;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x13));
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x19));
  param_1[0x1a] = &PTR_FUN_149f2c740;
  param_1[0x1b] = param_2;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0xffffffff;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  uVar1 = FUN_1411b1052(param_1,L"FVirtualFileCacheThread",0,0,0xffffffffffffffff,0);
  param_1[2] = uVar1;
  return param_1;
}



// FUNCTION 146b2aa0c FUN_146b2aa0c body=155 status=ok
// SIG undefined FUN_146b2aa0c(void)

void FUN_146b2aa0c(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_149f2c6a0;
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  FUN_146b2aaa8(param_1 + 0x1a);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_146b2c96d(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  param_1[0x10] = param_1 + 0xf;
  param_1[0xf] = param_1 + 0xf;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_146b2c010(param_1 + 5);
  return;
}



// FUNCTION 146b2aaa8 FUN_146b2aaa8 body=92 status=ok
// SIG undefined FUN_146b2aaa8(void)

void FUN_146b2aaa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f2c740;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_146b2c778(param_1 + 5);
  FUN_146b2bfea(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b2ab08 FUN_146b2ab08 body=637 status=ok
// SIG undefined FUN_146b2ab08(void)

void FUN_146b2ab08(longlong param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  int local_160;
  undefined2 local_15c;
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_208;
  cVar3 = *param_2;
  if (cVar3 == '\x01') {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 200));
    local_1e8 = (longlong)*(int *)(*(undefined8 **)(param_2 + 0x18) + 1);
    local_188 = *(undefined4 *)(param_2 + 0x14);
    local_198 = *(undefined4 *)(param_2 + 4);
    uStack_194 = *(undefined4 *)(param_2 + 8);
    uStack_190 = *(undefined4 *)(param_2 + 0xc);
    uStack_18c = *(undefined4 *)(param_2 + 0x10);
    FUN_14292559e(param_1 + 0xd0,&local_160,&local_198,**(undefined8 **)(param_2 + 0x18));
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 200));
  }
  else {
    if (cVar3 == '\x02') {
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 200));
      local_1a8 = *(undefined4 *)(param_2 + 0x14);
      local_1b8 = *(undefined4 *)(param_2 + 4);
      uStack_1b4 = *(undefined4 *)(param_2 + 8);
      uStack_1b0 = *(undefined4 *)(param_2 + 0xc);
      uStack_1ac = *(undefined4 *)(param_2 + 0x10);
      FUN_142925f6a(param_1 + 0xd0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_208);
    }
    if (cVar3 == '\0') {
      local_48 = *(undefined4 *)(param_2 + 4);
      uStack_44 = *(undefined4 *)(param_2 + 8);
      uStack_40 = *(undefined4 *)(param_2 + 0xc);
      uStack_3c = *(undefined4 *)(param_2 + 0x10);
      local_38 = *(undefined4 *)(param_2 + 0x14);
      FUN_146b29afe(param_1 + 0x20,&local_1c8);
      if (local_1c8 == 0) {
        *(longlong *)(param_1 + 0x168) = *(longlong *)(param_1 + 0x168) + 1;
        AcquireSRWLockShared((PSRWLOCK)(param_1 + 200));
        local_1e8 = *(longlong *)(param_2 + 0x50);
        local_168 = *(undefined4 *)(param_2 + 0x14);
        local_178 = *(undefined4 *)(param_2 + 4);
        uStack_174 = *(undefined4 *)(param_2 + 8);
        uStack_170 = *(undefined4 *)(param_2 + 0xc);
        uStack_16c = *(undefined4 *)(param_2 + 0x10);
        (**(code **)(*(longlong *)(param_1 + 0xd0) + 0x18))
                  (param_1 + 0xd0,&local_160,&local_178,*(undefined8 *)(param_2 + 0x48));
        if (local_160 == 0) {
          FUN_146b2ad9e(&local_160,&local_1d8);
          lVar4 = *(longlong *)(param_2 + 0x28);
          *(undefined8 *)(lVar4 + 0x80) = local_1d8;
          local_1d8 = 0;
          *(undefined4 *)(lVar4 + 0x88) = (undefined4)uStack_1d0;
          *(undefined4 *)(lVar4 + 0x8c) = uStack_1d0._4_4_;
          FUN_140b576f0();
        }
        else {
          local_1d8 = 0;
          uStack_1d0 = 0;
          FUN_146b2c9b6(*(undefined8 *)(param_2 + 0x28));
        }
        bVar5 = local_160 == 0;
        local_160 = 1;
        local_15c = 0;
        if ((bVar5) && (local_58 != 0)) {
          FUN_1400020a8();
        }
        ReleaseSRWLockShared((PSRWLOCK)(param_1 + 200));
      }
      else {
        *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + 1;
        FUN_146b2c9b6(*(undefined8 *)(param_2 + 0x28));
      }
      if (local_1c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1c0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_1c0)(local_1c0);
          LOCK();
          piVar2 = (int *)((longlong)local_1c0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_1c0 + 0x10))(local_1c0);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b2ad9e FUN_146b2ad9e body=109 status=ok
// SIG undefined FUN_146b2ad9e(void)

undefined8 * FUN_146b2ad9e(int *param_1,undefined8 *param_2)

{
  if (*param_1 != 0) {
    FUN_1467e8feb(param_1);
  }
  *param_1 = DAT_14c845ecc;
  memcpy(param_1 + 1,&DAT_14c845ed0,0x100);
  *param_2 = *(undefined8 *)(param_1 + 0x42);
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(int *)(param_2 + 1) = param_1[0x44];
  *(int *)((longlong)param_2 + 0xc) = param_1[0x45];
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  return param_2;
}



// FUNCTION 146b2ae0c FUN_146b2ae0c body=184 status=ok
// SIG undefined FUN_146b2ae0c(void)

undefined8 FUN_146b2ae0c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  do {
    if ((*(byte *)(param_1 + 0xc0) & 1) != 0) break;
    FUN_146b2aec6(param_1,&local_38);
    bVar3 = *(byte *)(param_1 + 0xc0);
    if ((bVar3 & 1) == 0) {
      if (local_38 == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))(*(longlong **)(param_1 + 0x18),100,0);
      }
      else {
        FUN_146b2ab08(param_1);
      }
    }
    plVar4 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  } while ((bVar3 & 1) == 0);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 146b2aec6 FUN_146b2aec6 body=172 status=ok
// SIG undefined FUN_146b2aec6(void)

undefined8 * FUN_146b2aec6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  *param_2 = 0;
  param_2[1] = 0;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x98));
  if (*(int *)(param_1 + 0xa8) != 0) {
    plVar6 = (longlong *)(param_1 + 0xa0);
    uVar3 = *(undefined8 *)*plVar6;
    lVar4 = ((undefined8 *)*plVar6)[1];
    if (lVar4 == 0) {
      *param_2 = uVar3;
      param_2[1] = 0;
    }
    else {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
      plVar5 = (longlong *)param_2[1];
      *param_2 = uVar3;
      param_2[1] = lVar4;
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
    }
    FUN_146b2ca1e(plVar6);
    FUN_146b2ca80(plVar6);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x98));
  return param_2;
}



// FUNCTION 146b2af88 FUN_146b2af88 body=225 status=ok
// SIG undefined FUN_146b2af88(void)

void FUN_146b2af88(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x1c8) == '\x01') {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x98));
    iVar3 = *(int *)(param_1 + 0xa8);
    *(uint *)(param_1 + 0xa8) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0xac) < iVar3 + 1U) {
      FUN_146b2cb1c((longlong *)(param_1 + 0xa0),iVar3);
    }
    lVar4 = *(longlong *)(param_1 + 0xa0);
    *(undefined8 *)(lVar4 + (longlong)iVar3 * 0x10) = *param_2;
    lVar5 = param_2[1];
    *(longlong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x98));
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
  }
  else {
    FUN_146b2ab08(param_1,*param_2);
  }
  plVar6 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000146b2b03b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146b2b06a FUN_146b2b06a body=79 status=ok
// SIG undefined FUN_146b2b06a(void)

longlong FUN_146b2b06a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((*(char *)(param_1 + 0x18) == '\x01') &&
     (plVar3 = *(longlong **)(param_1 + 8), plVar3 != (longlong *)0x0)) {
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
  FUN_146b2cba2(param_1);
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return param_1;
}



// FUNCTION 146b2b0ba FUN_146b2b0ba body=219 status=ok
// SIG undefined FUN_146b2b0ba(void)

void FUN_146b2b0ba(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_58 [32];
  int local_38;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
  iVar1 = *(int *)(lVar2 + 0x198);
  local_38 = (iVar1 == 0) + 9;
  local_28 = (undefined2 *)0x0;
  FUN_14125bce8(&local_28,*(undefined8 *)(lVar2 + 400),iVar1,0);
  FUN_1401aebe8(&local_28,L"vfc.meta",8);
  plVar3 = (longlong *)FUN_14054d1d4();
  puVar5 = local_28;
  if (local_20 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,puVar5,0);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_146b2bba6(puVar4,param_1);
    (**(code **)*puVar4)(puVar4,1);
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b2b196 FUN_146b2b196 body=176 status=ok
// SIG undefined FUN_146b2b196(void)

void FUN_146b2b196(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [32];
  int local_28;
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0x198);
  local_28 = (iVar1 == 0) + 9;
  local_20 = (undefined2 *)0x0;
  FUN_14125bce8(&local_20,*(undefined8 *)(*(longlong *)(param_1 + 8) + 400),iVar1,0);
  FUN_1401aebe8(&local_20,L"vfc.meta",8);
  plVar2 = (longlong *)FUN_140e92164();
  puVar3 = local_20;
  if (local_18 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  (**(code **)(*plVar2 + 0x88))(plVar2,puVar3);
  if (local_20 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b2b248 FUN_146b2b248 body=216 status=ok
// SIG undefined FUN_146b2b248(void)

void FUN_146b2b248(longlong param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int *piVar5;
  
  if ((longlong)*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  piVar5 = (int *)(*(longlong *)(param_1 + 0x18) + 4);
  lVar3 = 0;
  while (*piVar5 != *param_2) {
    lVar3 = lVar3 + -0x50;
    piVar5 = piVar5 + 0x14;
    if (-lVar3 == (longlong)*(int *)(param_1 + 0x20) * 0x50) {
      return;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x18) - lVar3;
  if (lVar3 == 0) {
    return;
  }
  uVar2 = piVar5[9];
  if ((int)uVar2 < 1) {
    return;
  }
  lVar1 = *(longlong *)(piVar5 + 7);
  uVar4 = 0;
  do {
    if (*(int *)(lVar1 + uVar4 * 8) == param_2[1]) {
      if (uVar2 - 1 != (int)uVar4) {
        memmove((void *)(lVar1 + uVar4 * 8),(void *)(lVar1 + uVar4 * 8 + 8),
                (longlong)(int)((uVar2 - 1) - (int)uVar4) << 3);
        uVar2 = piVar5[9];
      }
      piVar5[9] = uVar2 - 1;
      FUN_146b2cdfe(lVar3 + 0x20);
      FUN_1429262bc(lVar3 + 0x10,*(undefined8 *)(param_2 + 1));
      *(longlong *)(param_1 + 0x80) =
           *(longlong *)(param_1 + 0x80) - (longlong)piVar5[1] * (longlong)param_2[2];
      return;
    }
    uVar4 = uVar4 + 1;
  } while (uVar2 != uVar4);
  return;
}



// FUNCTION 146b2b320 FUN_146b2b320 body=219 status=ok
// SIG undefined FUN_146b2b320(void)

longlong FUN_146b2b320(undefined8 param_1,longlong param_2)

{
  PSRWLOCK SRWLock;
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b2b56e(param_1,&local_28,param_2);
  lVar5 = *(longlong *)(param_2 + 0x30);
  if (lVar5 == 0) {
    SRWLock = *(PSRWLOCK *)(param_2 + 0x48);
    AcquireSRWLockExclusive(SRWLock);
    puVar1 = *(undefined8 **)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    plVar2 = (longlong *)FUN_140e92164();
    puVar4 = local_28;
    if (local_20 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    uVar3 = (**(code **)(*plVar2 + 0x100))(plVar2,puVar4,1,1);
    puVar1 = *(undefined8 **)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = uVar3;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    ReleaseSRWLockExclusive(SRWLock);
    lVar5 = *(longlong *)(param_2 + 0x30);
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 146b2b3fc FUN_146b2b3fc body=368 status=ok
// SIG undefined FUN_146b2b3fc(void)

uint FUN_146b2b3fc(longlong param_1,int *param_2,longlong param_3,longlong param_4)

{
  PSRWLOCK SRWLock;
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x18);
    lVar6 = (longlong)*(int *)(param_1 + 0x20) * 0x50;
    do {
      if (*(int *)(lVar8 + 4) == *param_2) {
        if (lVar8 != 0) {
          FUN_146b2b56e(param_1,&local_58,lVar8);
          SRWLock = *(PSRWLOCK *)(lVar8 + 0x48);
          AcquireSRWLockExclusive(SRWLock);
          puVar1 = *(undefined8 **)(lVar8 + 0x30);
          *(undefined8 *)(lVar8 + 0x30) = 0;
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
          }
          plVar4 = (longlong *)FUN_140e92164();
          puVar7 = local_58;
          if (local_50 == 0) {
            puVar7 = &DAT_149dfb77a;
          }
          uVar3 = 0;
          plVar4 = (longlong *)(**(code **)(*plVar4 + 0xe8))(plVar4,puVar7,0);
          if (plVar4 != (longlong *)0x0) {
            lVar6 = (longlong)param_2[1] * (longlong)*(int *)(lVar8 + 8);
            lVar8 = (longlong)param_2[2] * (longlong)*(int *)(lVar8 + 8);
            if (param_4 <= lVar8) {
              lVar8 = param_4;
            }
            cVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,lVar6);
            if (cVar2 == '\0') {
              uVar3 = 0;
            }
            else if (param_3 == 0) {
              lVar5 = (**(code **)(*plVar4 + 0x50))(plVar4);
              uVar3 = (uint)(lVar8 + lVar6 <= lVar5);
            }
            else {
              uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,param_3,lVar8);
            }
            (**(code **)*plVar4)(plVar4,1);
          }
          ReleaseSRWLockExclusive(SRWLock);
          if (local_58 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_146b2b455;
        }
        break;
      }
      lVar8 = lVar8 + 0x50;
      lVar6 = lVar6 + -0x50;
    } while (lVar6 != 0);
  }
  uVar3 = 0;
LAB_146b2b455:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 146b2b56e FUN_146b2b56e body=321 status=ok
// SIG undefined FUN_146b2b56e(void)

undefined8 * FUN_146b2b56e(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_88 [32];
  int local_68;
  longlong local_58 [2];
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140002266(&local_48,&DAT_149e063bc,*(undefined4 *)(param_3 + 4));
  FUN_140ba7826(&local_38,L"vfc_",&local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_58,&DAT_149f2c70a);
  FUN_1468181c8(&local_48,&local_38,local_58);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_38 = local_48;
  local_48 = 0;
  local_30 = (int)local_40;
  local_2c = local_40._4_4_;
  local_40 = 0;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  iVar3 = local_30 + -1;
  if (local_30 == 0) {
    iVar3 = 0;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x198);
  local_68 = iVar3 + 1 + (uint)(iVar1 == 0);
  *param_2 = 0;
  FUN_14125bce8(param_2,*(undefined8 *)(lVar2 + 400),iVar1,0);
  FUN_1401aebe8(param_2,local_38,iVar3);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b2b6b0 FUN_146b2b6b0 body=125 status=ok
// SIG undefined FUN_146b2b6b0(void)

undefined8 * FUN_146b2b6b0(longlong param_1,undefined8 *param_2,int *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x20) == 0) {
LAB_146b2b6ed:
    uVar2 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar4 = (longlong)*(int *)(param_1 + 0x20) * 0x50;
    uVar2 = 0;
    do {
      if (*(int *)(lVar3 + 4) == *param_3) {
        if ((lVar3 == 0) ||
           (plVar1 = (longlong *)FUN_146b2bec8(param_1,lVar3), plVar1 == (longlong *)0x0))
        goto LAB_146b2b6ed;
        uVar2 = (**(code **)(*plVar1 + 8))
                          (plVar1,(longlong)param_3[1] * (longlong)*(int *)(lVar3 + 8),
                           (longlong)param_3[2] * (longlong)*(int *)(lVar3 + 8),0);
        break;
      }
      lVar3 = lVar3 + 0x50;
      lVar4 = lVar4 + -0x50;
    } while (lVar4 != 0);
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 146b2b72e FUN_146b2b72e body=61 status=ok
// SIG undefined FUN_146b2b72e(void)

longlong FUN_146b2b72e(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = FUN_146b2d230((longlong *)(param_1 + 0x28),*param_2,param_2);
  if (iVar1 == -1) {
    lVar3 = 0;
  }
  else {
    lVar3 = (longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x28);
  }
  lVar2 = lVar3 + 0x18;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 146b2b76c FUN_146b2b76c body=88 status=ok
// SIG undefined FUN_146b2b76c(void)

undefined4 * FUN_146b2b76c(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_3);
  uVar3 = DAT_14c845dc8;
  if (lVar2 == 0) {
    *(undefined2 *)(param_2 + 1) = 0;
    uVar3 = 8;
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x10);
    memcpy(param_2 + 1,&DAT_14c845dcc,0x100);
    *(ulonglong *)(param_2 + 0x42) = (ulonglong)uVar1;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 146b2b7c4 FUN_146b2b7c4 body=319 status=ok
// SIG undefined FUN_146b2b7c4(void)

undefined4 * FUN_146b2b7c4(undefined4 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *_Dst;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  iVar2 = *(int *)(param_2 + 0x18);
  if ((iVar2 == 0) || (*(char *)(param_2 + 0x40) == '\x01')) {
    *param_1 = 8;
    *(undefined2 *)(param_1 + 1) = 0;
  }
  else {
    lVar1 = param_2 + 0x10;
    _Dst = *(uint **)(param_2 + 0x10);
    uVar3 = *_Dst;
    uVar4 = _Dst[1];
    uVar6 = *(undefined8 *)_Dst;
    lVar9 = (longlong)*(int *)(param_2 + 8);
    uVar8 = (longlong)(-lVar9 & (param_3 + lVar9) - 1U) / lVar9;
    if ((longlong)uVar8 < (longlong)(int)uVar4) {
      iVar7 = 0;
      if (iVar2 + -1 != 0) {
        memmove(_Dst,_Dst + 2,(longlong)(iVar2 + -1) << 3);
        iVar7 = *(int *)(param_2 + 0x18) + -1;
      }
      *(int *)(param_2 + 0x18) = iVar7;
      FUN_146b2cdfe(lVar1);
      FUN_1429262bc(param_2 + 0x20,uVar8 << 0x20 | (ulonglong)uVar3);
      FUN_1429262bc(lVar1,CONCAT44(uVar4 - (int)uVar8,uVar3 + (int)uVar8));
    }
    else {
      iVar7 = 0;
      if (iVar2 + -1 != 0) {
        memmove(_Dst,_Dst + 2,(longlong)(iVar2 + -1) << 3);
        iVar7 = *(int *)(param_2 + 0x18) + -1;
      }
      *(int *)(param_2 + 0x18) = iVar7;
      FUN_146b2cdfe(lVar1);
      FUN_1429262bc(param_2 + 0x20,uVar6);
      uVar8 = (ulonglong)uVar4;
    }
    uVar5 = *(undefined4 *)(param_2 + 4);
    *param_1 = DAT_14c845dc8;
    memcpy(param_1 + 1,&DAT_14c845dcc,0x100);
    param_1[0x41] = uVar5;
    param_1[0x42] = uVar3;
    param_1[0x43] = (int)uVar8;
  }
  return param_1;
}



// FUNCTION 146b2b904 FUN_146b2b904 body=130 status=ok
// SIG undefined FUN_146b2b904(void)

void FUN_146b2b904(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x20) == 0) {
    lVar2 = 0;
    lVar1 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x18);
    lVar5 = (longlong)*(int *)(param_1 + 0x20) * 0x50 + lVar4;
    lVar1 = 0;
    lVar2 = 0;
    do {
      if ((longlong)*(int *)(lVar4 + 0x18) == 0) {
        lVar6 = 0;
      }
      else {
        lVar3 = 0;
        lVar6 = 0;
        do {
          lVar6 = lVar6 + *(int *)(*(longlong *)(lVar4 + 0x10) + 4 + lVar3);
          lVar3 = lVar3 + 8;
        } while ((longlong)*(int *)(lVar4 + 0x18) * 8 != lVar3);
      }
      lVar1 = lVar1 + (longlong)*(int *)(lVar4 + 0xc) * (longlong)*(int *)(lVar4 + 8);
      lVar2 = lVar2 + lVar6 * *(int *)(lVar4 + 8);
      lVar4 = lVar4 + 0x50;
    } while (lVar4 != lVar5);
  }
  *(longlong *)(param_1 + 0x78) = lVar1;
  *(longlong *)(param_1 + 0x80) = lVar1 - lVar2;
  return;
}



// FUNCTION 146b2b986 FUN_146b2b986 body=443 status=ok
// SIG undefined FUN_146b2b986(void)

void FUN_146b2b986(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x18);
    lVar4 = (longlong)*(int *)(param_1 + 0x20) * 0x50;
    do {
      if (*(int *)(lVar11 + 4) == param_2) {
        if (lVar11 != 0) {
          puVar3 = *(undefined8 **)(lVar11 + 0x30);
          if (puVar3 != (undefined8 *)0x0) {
            *(undefined8 *)(lVar11 + 0x30) = 0;
            (**(code **)*puVar3)(puVar3,1);
          }
          FUN_146b2b56e(param_1,&local_58,lVar11);
          plVar5 = (longlong *)FUN_140e92164();
          puVar6 = local_58;
          if (local_50 == 0) {
            puVar6 = &DAT_149dfb77a;
          }
          (**(code **)(*plVar5 + 0x88))(plVar5,puVar6);
          iVar1 = *(int *)(param_1 + 0x20);
          lVar11 = (longlong)iVar1;
          if (lVar11 != 0) {
            local_68 = *(longlong *)(param_1 + 0x18);
            local_60 = local_68 + 0x54;
            iVar14 = 0;
            bVar12 = *(int *)(local_68 + 4) == param_2;
            iVar8 = 0;
            do {
              lVar4 = (longlong)iVar8;
              iVar15 = iVar8 + 1;
              if (iVar8 + 1 < iVar1) {
                iVar15 = iVar1;
              }
              lVar7 = lVar4 * 0x50;
              piVar13 = (int *)(local_60 + lVar7);
              iVar9 = iVar8;
              do {
                lVar4 = lVar4 + 1;
                iVar10 = iVar15;
                if (lVar11 <= lVar4) break;
                iVar2 = *piVar13;
                iVar9 = iVar9 + 1;
                piVar13 = piVar13 + 0x14;
                iVar10 = iVar9;
              } while (bVar12 == (iVar2 == param_2));
              iVar15 = iVar10 - iVar8;
              if (bVar12 == false) {
                if (iVar14 != iVar8) {
                  memmove((void *)((longlong)iVar14 * 0x50 + local_68),(void *)(lVar7 + local_68),
                          (longlong)iVar15 * 0x50);
                }
                iVar14 = iVar14 + iVar15;
              }
              else {
                FUN_146b2bfea(lVar7 + local_68,iVar15);
              }
              bVar12 = (bool)(bVar12 ^ 1);
              iVar8 = iVar10;
            } while (lVar4 < lVar11);
            *(int *)(param_1 + 0x20) = iVar14;
          }
          if (local_58 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      lVar11 = lVar11 + 0x50;
      lVar4 = lVar4 + -0x50;
    } while (lVar4 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b2bb42 FUN_146b2bb42 body=100 status=ok
// SIG undefined FUN_146b2bb42(void)

void FUN_146b2bb42(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b2bba6 FUN_146b2bba6 body=163 status=ok
// SIG undefined FUN_146b2bba6(void)

longlong * FUN_146b2bba6(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_142926eb7(param_1,param_2 + 0x10);
  if (((*(byte *)(param_1 + 5) & 1) == 0) || (*(int *)(param_2 + 0x10) == 1)) {
    FUN_146b2e714(param_1,param_2 + 0x18);
    FUN_146b2eb72(param_1,param_2 + 0x28);
    puVar2 = (undefined4 *)(param_2 + 0x88);
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
      }
      else {
        FUN_14572512c(param_1,puVar2);
      }
    }
    else {
      *puVar2 = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  else {
    FUN_14572541c(param_1);
    FUN_146b2bc4a(param_2);
  }
  return param_1;
}



// FUNCTION 146b2bc4a FUN_146b2bc4a body=68 status=ok
// SIG undefined FUN_146b2bc4a(void)

void FUN_146b2bc4a(longlong param_1)

{
  FUN_146b2bfea(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_146b2d7a0(param_1 + 0x18,0);
  }
  FUN_146b2d810(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  return;
}



// FUNCTION 146b2bc8e FUN_146b2bc8e body=57 status=ok
// SIG undefined FUN_146b2bc8e(void)

void FUN_146b2bc8e(undefined8 *param_1,int param_2)

{
  FUN_146b2bfea(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146b2d7a0(param_1,param_2);
  return;
}



// FUNCTION 146b2bcd6 FUN_146b2bcd6 body=317 status=ok
// SIG undefined FUN_146b2bcd6(void)

double FUN_146b2bcd6(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  int iVar4;
  int iVar5;
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
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = param_1 + 0x38;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar4 = *(int *)(param_1 + 0x50);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c == iVar4) && (uStack_58 == lVar2)) {
    dVar3 = NAN;
  }
  else {
    iVar5 = 0;
    dVar3 = 0.0;
    do {
      iVar5 = iVar5 + 1;
      dVar3 = dVar3 + (double)*(int *)(*local_88 + 0x20 + (longlong)iStack_6c * 0x40);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar4));
    dVar3 = dVar3 / (double)iVar5;
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return dVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b2be14 FUN_146b2be14 body=148 status=ok
// SIG undefined FUN_146b2be14(void)

ulonglong FUN_146b2be14(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (*(longlong *)(param_2 + 0x30) == 0) {
    plVar2 = (longlong *)FUN_140e92164();
    FUN_146b2b56e(param_1,&local_38,param_2);
    puVar3 = local_38;
    if (local_30 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    uVar1 = (**(code **)(*plVar2 + 0x78))(plVar2,puVar3);
    uVar4 = (ulonglong)uVar1;
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 146b2beaa FUN_146b2beaa body=29 status=ok
// SIG undefined FUN_146b2beaa(void)

bool FUN_146b2beaa(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_146b2d230(param_1 + 0x28,*param_2,param_2);
  return iVar1 != -1;
}



// FUNCTION 146b2bec8 FUN_146b2bec8 body=213 status=ok
// SIG undefined FUN_146b2bec8(void)

longlong FUN_146b2bec8(undefined8 param_1,longlong param_2)

{
  PSRWLOCK SRWLock;
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b2b56e(param_1,&local_28,param_2);
  lVar5 = *(longlong *)(param_2 + 0x38);
  if (lVar5 == 0) {
    SRWLock = *(PSRWLOCK *)(param_2 + 0x48);
    AcquireSRWLockExclusive(SRWLock);
    puVar1 = *(undefined8 **)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    plVar2 = (longlong *)FUN_140e92164();
    puVar4 = local_28;
    if (local_20 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    uVar3 = (**(code **)(*plVar2 + 0x188))(plVar2,puVar4);
    puVar1 = *(undefined8 **)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = uVar3;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    ReleaseSRWLockExclusive(SRWLock);
    lVar5 = *(longlong *)(param_2 + 0x38);
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 146b2bf9e FUN_146b2bf9e body=38 status=ok
// SIG undefined FUN_146b2bf9e(void)

undefined8 FUN_146b2bf9e(undefined8 param_1,int param_2)

{
  FUN_146b2aa0c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b2bfc4 FUN_146b2bfc4 body=38 status=ok
// SIG undefined FUN_146b2bfc4(void)

undefined8 FUN_146b2bfc4(undefined8 param_1,int param_2)

{
  FUN_146b2aaa8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b2bfea FUN_146b2bfea body=38 status=ok
// SIG undefined FUN_146b2bfea(void)

void FUN_146b2bfea(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146b2bb42(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 146b2c010 FUN_146b2c010 body=52 status=ok
// SIG undefined FUN_146b2c010(void)

void FUN_146b2c010(longlong *param_1)

{
  FUN_146b2c044();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b2c044 FUN_146b2c044 body=308 status=ok
// SIG undefined FUN_146b2c044(void)

void FUN_146b2c044(longlong *param_1)

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
      FUN_146b2e29e(*(undefined8 *)(*local_68 + 0x18 + (longlong)iStack_4c * 0x28));
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
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



// FUNCTION 146b2c17a FUN_146b2c17a body=132 status=ok
// SIG undefined FUN_146b2c17a(void)

void FUN_146b2c17a(longlong param_1,int param_2)

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



// FUNCTION 146b2c200 FUN_146b2c200 body=122 status=ok
// SIG undefined FUN_146b2c200(void)

longlong FUN_146b2c200(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_146b2c27a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146b2c27a FUN_146b2c27a body=201 status=ok
// SIG undefined FUN_146b2c27a(void)

undefined8 * FUN_146b2c27a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_146b2c344(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406cd6a8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_146b2c4aa(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x10;
        puVar6 = puVar6 + 0x10;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 146b2c344 FUN_146b2c344 body=356 status=ok
// SIG undefined FUN_146b2c344(void)

void FUN_146b2c344(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      if (*(longlong *)(*local_70 + 0x18 + (longlong)iStack_54 * 0x40) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140b7ce44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
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



// FUNCTION 146b2c4aa FUN_146b2c4aa body=128 status=ok
// SIG undefined FUN_146b2c4aa(void)

undefined4 * FUN_146b2c4aa(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  param_1[4] = param_2[4];
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  _Src = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_146b2c52a(param_1 + 6,iVar1);
    memcpy(*(void **)(param_1 + 6),_Src,(longlong)iVar1 * 0xc);
  }
  uVar5 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = uVar5;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  return param_1;
}



// FUNCTION 146b2c52a FUN_146b2c52a body=106 status=ok
// SIG undefined FUN_146b2c52a(void)

undefined8 FUN_146b2c52a(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0xc,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0xc)) {
    uVar5 = uVar2 / 0xc & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0xc,4);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 146b2c594 FUN_146b2c594 body=93 status=ok
// SIG undefined FUN_146b2c594(void)

longlong FUN_146b2c594(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_146b2c5f2(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 146b2c5f2 FUN_146b2c5f2 body=389 status=ok
// SIG undefined FUN_146b2c5f2(void)

longlong * FUN_146b2c5f2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + 0x18 + (longlong)iVar6 * 0x40) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar7));
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
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b2c778 FUN_146b2c778 body=54 status=ok
// SIG undefined FUN_146b2c778(void)

void FUN_146b2c778(longlong *param_1)

{
  FUN_146b2c344(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b2c7ae FUN_146b2c7ae body=95 status=ok
// SIG undefined FUN_146b2c7ae(void)

void FUN_146b2c7ae(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 146b2c80d FUN_146b2c80d body=171 status=ok
// SIG undefined FUN_146b2c80d(void)

undefined8 * FUN_146b2c80d(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x1e8,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_149f2c7b0;
  puVar1[2] = &PTR_FUN_149f2c7d0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 2;
  FUN_146b2a8c0(puVar1 + 6,puVar1 + 2);
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0x2000;
  puVar1[0x37] = 0x80000000;
  puVar1[0x38] = 1;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  *(undefined1 *)(puVar1 + 0x3b) = 1;
  puVar1[0x3c] = 0;
  return puVar1;
}



// FUNCTION 146b2c8c2 FUN_146b2c8c2 body=29 status=ok
// SIG undefined FUN_146b2c8c2(void)

undefined8 FUN_146b2c8c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b2c8e0 FUN_146b2c8e0 body=38 status=ok
// SIG undefined FUN_146b2c8e0(void)

undefined8 FUN_146b2c8e0(undefined8 param_1,int param_2)

{
  FUN_146b2c906();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b2c906 FUN_146b2c906 body=103 status=ok
// SIG undefined FUN_146b2c906(void)

void FUN_146b2c906(longlong param_1)

{
  FUN_1429252fa(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1400020a8();
  }
  FUN_146b2aa0c(param_1 + 0x20);
  FUN_144760e21(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b2c96d FUN_146b2c96d body=73 status=ok
// SIG undefined FUN_146b2c96d(void)

void FUN_146b2c96d(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146b2c9b6 FUN_146b2c9b6 body=104 status=ok
// SIG undefined FUN_146b2c9b6(void)

void FUN_146b2c9b6(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined8 *)(param_1 + 0x80) = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 0x88) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  else {
    FUN_1447a127e((undefined8 *)(param_1 + 0x80),iVar1,0);
    memcpy(*(void **)(param_1 + 0x80),_Src,(longlong)iVar1);
  }
  FUN_140b576f0(param_1);
  return;
}



// FUNCTION 146b2ca1e FUN_146b2ca1e body=97 status=ok
// SIG undefined FUN_146b2ca1e(void)

void FUN_146b2ca1e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  longlong *plVar3;
  int iVar4;
  
  _Dst = (void *)*param_1;
  plVar3 = *(longlong **)((longlong)_Dst + 8);
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
  if (*(int *)(param_1 + 1) + -1 == 0) {
    iVar4 = 0;
  }
  else {
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(*(int *)(param_1 + 1) + -1) << 4);
    iVar4 = *(int *)(param_1 + 1) + -1;
  }
  *(int *)(param_1 + 1) = iVar4;
  return;
}



// FUNCTION 146b2ca80 FUN_146b2ca80 body=62 status=ok
// SIG undefined FUN_146b2ca80(void)

void FUN_146b2ca80(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146b2cabe(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146b2cabe FUN_146b2cabe body=93 status=ok
// SIG undefined FUN_146b2cabe(void)

ulonglong FUN_146b2cabe(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146b2cb1c FUN_146b2cb1c body=132 status=ok
// SIG undefined FUN_146b2cb1c(void)

void FUN_146b2cb1c(longlong param_1,int param_2)

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



// FUNCTION 146b2cba2 FUN_146b2cba2 body=94 status=ok
// SIG undefined FUN_146b2cba2(void)

longlong * FUN_146b2cba2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xa0,0x10);
  FUN_146b2cc00(plVar3);
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
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
  return param_1;
}


