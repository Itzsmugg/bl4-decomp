// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1480babc2 FUN_1480babc2 body=114 status=ok
// SIG undefined FUN_1480babc2(void)

void FUN_1480babc2(longlong *param_1,int param_2)

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



// FUNCTION 1480bac34 FUN_1480bac34 body=450 status=ok
// SIG undefined FUN_1480bac34(void)

void FUN_1480bac34(longlong *param_1)

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
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 1480badf8 FUN_1480badf8 body=102 status=ok
// SIG undefined FUN_1480badf8(void)

void FUN_1480badf8(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1480bae5e(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1480bae5e FUN_1480bae5e body=87 status=ok
// SIG undefined FUN_1480bae5e(void)

void FUN_1480bae5e(longlong *param_1,int param_2)

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
  FUN_1480ba6e4();
  return;
}



// FUNCTION 1480baeb6 FUN_1480baeb6 body=102 status=ok
// SIG undefined FUN_1480baeb6(void)

void FUN_1480baeb6(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_1480baf1c(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1480baf1c FUN_1480baf1c body=113 status=ok
// SIG undefined FUN_1480baf1c(void)

void FUN_1480baf1c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong *plVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x20;
  plVar6 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[8];
  }
  lVar3 = (longlong)*(int *)(lVar1 + 0x1c + lVar2);
  iVar5 = *(int *)((longlong)plVar6 + lVar3 * 4);
  if (iVar5 == param_2) {
    puVar4 = (undefined4 *)((longlong)plVar6 + lVar3 * 4);
  }
  else {
    do {
      lVar3 = (longlong)iVar5;
      iVar5 = *(int *)(lVar1 + 0x18 + lVar3 * 0x20);
    } while (iVar5 != param_2);
    puVar4 = (undefined4 *)(lVar1 + lVar3 * 0x20 + 0x18);
  }
  *puVar4 = *(undefined4 *)(lVar1 + lVar2 + 0x18);
  if (*(char *)(*param_1 + 0xc + lVar2) == '\x01') {
    *(undefined1 *)(lVar2 + *param_1 + 0xc) = 0;
  }
  FUN_1480babc2();
  return;
}



// FUNCTION 1480baf8e FUN_1480baf8e body=29 status=ok
// SIG undefined FUN_1480baf8e(void)

undefined8 FUN_1480baf8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480bafc6 FUN_1480bafc6 body=29 status=ok
// SIG undefined FUN_1480bafc6(void)

bool FUN_1480bafc6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1480bafe4 FUN_1480bafe4 body=26 status=ok
// SIG undefined FUN_1480bafe4(void)

bool FUN_1480bafe4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1480baffe FUN_1480baffe body=24 status=ok
// SIG undefined FUN_1480baffe(void)

bool FUN_1480baffe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1480bb016 FUN_1480bb016 body=101 status=ok
// SIG undefined FUN_1480bb016(void)

void FUN_1480bb016(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad895a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1480bb07c FUN_1480bb07c body=101 status=ok
// SIG undefined FUN_1480bb07c(void)

void FUN_1480bb07c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad895a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1480bb0e2 FUN_1480bb0e2 body=134 status=ok
// SIG undefined FUN_1480bb0e2(void)

void FUN_1480bb0e2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad895a0;
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
                    /* WARNING: Could not recover jumptable at 0x0001480bb159. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480bb168 FUN_1480bb168 body=44 status=ok
// SIG undefined FUN_1480bb168(void)

void FUN_1480bb168(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001480bb191. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1480bb194 FUN_1480bb194 body=144 status=ok
// SIG undefined FUN_1480bb194(void)

bool FUN_1480bb194(longlong param_1,undefined8 param_2)

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
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480bb226 FUN_1480bb226 body=151 status=ok
// SIG undefined FUN_1480bb226(void)

void FUN_1480bb226(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1480bb2be();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cb38e20;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x10;
  return;
}



// FUNCTION 1480bb2be FUN_1480bb2be body=258 status=ok
// SIG undefined FUN_1480bb2be(void)

void FUN_1480bb2be(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb38ea0) {
    FUN_144b3d300(&DAT_14cb38ea0);
    if (DAT_14cb38ea0 == -1) {
      FUN_1480bb3c2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x19;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb38e20,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14391f548);
      _Init_thread_footer(&DAT_14cb38ea0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480bb3c2 FUN_1480bb3c2 body=226 status=ok
// SIG undefined FUN_1480bb3c2(void)

longlong * FUN_1480bb3c2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1480bb4a6;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480bb4a6 FUN_1480bb4a6 body=130 status=ok
// SIG undefined FUN_1480bb4a6(void)

undefined1 * FUN_1480bb4a6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CountOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1480bb528;
}



// FUNCTION 1480bb52c FUN_1480bb52c body=181 status=ok
// SIG undefined FUN_1480bb52c(void)

longlong FUN_1480bb52c(longlong *param_1,uint param_2,longlong *param_3)

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
          if (lVar3 != 0) goto LAB_1480bb5c4;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1480bb5e2(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_1480bb5c4:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1480bb5e2 FUN_1480bb5e2 body=278 status=ok
// SIG undefined FUN_1480bb5e2(void)

undefined4 * FUN_1480bb5e2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_1480baa46(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  *(undefined1 *)((longlong)local_40 + 0xc) = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_1480bab2c(param_1,param_3,local_40,local_48);
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
      FUN_1480bac34(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480bb6fa FUN_1480bb6fa body=110 status=ok
// SIG undefined FUN_1480bb6fa(void)

void FUN_1480bb6fa(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_1480bb76a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1480bb76a FUN_1480bb76a body=132 status=ok
// SIG undefined FUN_1480bb76a(void)

void FUN_1480bb76a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,0x10);
  return;
}



// FUNCTION 1480bb7ee FUN_1480bb7ee body=128 status=ok
// SIG undefined FUN_1480bb7ee(void)

void FUN_1480bb7ee(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb38468;
  if (DAT_14cb3849c != 0) {
    *(int *)(DAT_14cb38468 + (longlong)DAT_14cb38498 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb3849c) {
    iVar4 = DAT_14cb38498;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14cb3849c = DAT_14cb3849c + 1;
  puVar3 = &DAT_14cb38478;
  if (DAT_14cb38488 != (undefined *)0x0) {
    puVar3 = DAT_14cb38488;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb38498 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1480bb86e FUN_1480bb86e body=154 status=ok
// SIG undefined FUN_1480bb86e(void)

void FUN_1480bb86e(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1480bb908();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cb38eb0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x90;
  return;
}



// FUNCTION 1480bb908 FUN_1480bb908 body=258 status=ok
// SIG undefined FUN_1480bb908(void)

void FUN_1480bb908(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb38f30) {
    FUN_144b3d300(&DAT_14cb38f30);
    if (DAT_14cb38f30 == -1) {
      FUN_1480bba0c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0x24;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb38eb0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14391ff9a);
      _Init_thread_footer(&DAT_14cb38f30);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480bba0c FUN_1480bba0c body=226 status=ok
// SIG undefined FUN_1480bba0c(void)

longlong * FUN_1480bba0c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1480bbaf0;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480bbaf0 FUN_1480bbaf0 body=136 status=ok
// SIG undefined FUN_1480bbaf0(void)

code * FUN_1480bbaf0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SocketData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8800000032;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480bbb78;
}



// FUNCTION 1480bbb78 FUN_1480bbb78 body=136 status=ok
// SIG undefined FUN_1480bbb78(void)

code * FUN_1480bbb78(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PreviousSocketTransformOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000031;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480bbc00;
}



// FUNCTION 1480bbc00 FUN_1480bbc00 body=136 status=ok
// SIG undefined FUN_1480bbc00(void)

code * FUN_1480bbc00(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SocketTransformOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7c00000030;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480bbc88;
}



// FUNCTION 1480bbc88 FUN_1480bbc88 body=136 status=ok
// SIG undefined FUN_1480bbc88(void)

code * FUN_1480bbc88(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PreviousComponentToTranslatedWorld_Scale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000002f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480bbd10;
}



// FUNCTION 1480bbd10 FUN_1480bbd10 body=136 status=ok
// SIG undefined FUN_1480bbd10(void)

code * FUN_1480bbd10(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PreviousComponentToTranslatedWorld_Rotation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000002e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480bbd98;
}



// FUNCTION 1480bbd98 FUN_1480bbd98 body=136 status=ok
// SIG undefined FUN_1480bbd98(void)

code * FUN_1480bbd98(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PreviousComponentToTranslatedWorld_Translation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480bbe20;
}



// FUNCTION 1480bbe20 FUN_1480bbe20 body=136 status=ok
// SIG undefined FUN_1480bbe20(void)

code * FUN_1480bbe20(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ComponentToTranslatedWorld_Scale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480bbea8;
}



// FUNCTION 1480bbea8 FUN_1480bbea8 body=136 status=ok
// SIG undefined FUN_1480bbea8(void)

code * FUN_1480bbea8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ComponentToTranslatedWorld_Rotation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480bbf30;
}



// FUNCTION 1480bbf30 FUN_1480bbf30 body=136 status=ok
// SIG undefined FUN_1480bbf30(void)

code * FUN_1480bbf30(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ComponentToTranslatedWorld_Translation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480bbfb8;
}



// FUNCTION 1480bbfb8 FUN_1480bbfb8 body=136 status=ok
// SIG undefined FUN_1480bbfb8(void)

code * FUN_1480bbfb8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumUnfilteredSockets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480bc040;
}



// FUNCTION 1480bc040 FUN_1480bc040 body=136 status=ok
// SIG undefined FUN_1480bc040(void)

code * FUN_1480bc040(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumFilteredSockets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480bc0c8;
}



// FUNCTION 1480bc0c8 FUN_1480bc0c8 body=136 status=ok
// SIG undefined FUN_1480bc0c8(void)

code * FUN_1480bc0c8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumSockets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480bc150;
}



// FUNCTION 1480bc150 FUN_1480bc150 body=136 status=ok
// SIG undefined FUN_1480bc150(void)

code * FUN_1480bc150(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InvDeltaSeconds";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480bc1d8;
}



// FUNCTION 1480bc1d8 FUN_1480bc1d8 body=130 status=ok
// SIG undefined FUN_1480bc1d8(void)

undefined1 * FUN_1480bc1d8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IsDataValid";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x25;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1480bc25a;
}



// FUNCTION 1480bc25e FUN_1480bc25e body=109 status=ok
// SIG undefined FUN_1480bc25e(void)

void FUN_1480bc25e(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0xc0) == param_2) {
          FUN_1480bc2cc(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0xc0 + *param_1 + 0xb0);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1480bc2cc FUN_1480bc2cc body=106 status=ok
// SIG undefined FUN_1480bc2cc(void)

void FUN_1480bc2cc(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xb4 + (longlong)param_2 * 0xc0);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0xb0 + lVar5 * 0xc0);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0xc0 + 0xb0);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0xc0 + 0xb0);
  FUN_1480bc336();
  return;
}



// FUNCTION 1480bc336 FUN_1480bc336 body=93 status=ok
// SIG undefined FUN_1480bc336(void)

void FUN_1480bc336(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = *param_1;
  puVar3 = *(undefined8 **)(lVar2 + 0xa8 + (longlong)param_2 * 0xc0);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (*(longlong *)(lVar2 + (longlong)param_2 * 0xc0 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_1480b488a(param_1,param_2);
  return;
}



// FUNCTION 1480bc394 FUN_1480bc394 body=56 status=ok
// SIG undefined FUN_1480bc394(void)

longlong FUN_1480bc394(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 8) != 0 && (*(ulonglong *)(param_1 + 8) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480bc3cc FUN_1480bc3cc body=56 status=ok
// SIG undefined FUN_1480bc3cc(void)

int FUN_1480bc3cc(longlong param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x10) < 0x10000000) {
    iVar1 = *(uint *)(param_1 + 0x10) << 4;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,0x10);
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 1480bc404 FUN_1480bc404 body=21 status=ok
// SIG undefined FUN_1480bc404(void)

undefined * FUN_1480bc404(void)

{
  FUN_1480bc426();
  return &DAT_14cb38f38;
}



// FUNCTION 1480bc426 FUN_1480bc426 body=205 status=ok
// SIG undefined FUN_1480bc426(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480bc426(void)

{
  if ((DAT_14cb38f9f & 2) != 0) {
    return;
  }
  DAT_14cb38f9f = DAT_14cb38f9f | 2;
  _DAT_14cb38f40 = L"TResourceArray";
  _DAT_14cb38f58 = FUN_146826540;
  _DAT_14cb38f60 = FUN_146825d77;
  _DAT_14cb38f68 = FUN_146825fd6;
  _DAT_14cb38f70 = FUN_1407e02ea;
  _DAT_14cb38f78 = FUN_146826273;
  _DAT_14cb38f50 = FUN_1480bc4f4;
  _DAT_14cb38f90 = 0xffffffff00000020;
  _DAT_14cb38f98 = 8;
  DAT_14cb38f9c = 1;
  _DAT_14cb38f80 = FUN_1480bc520;
  FUN_1480bc536();
  FUN_1480bc644();
  FUN_1407e00cc(&DAT_14cb38f38);
  return;
}



// FUNCTION 1480bc4f4 FUN_1480bc4f4 body=43 status=ok
// SIG undefined FUN_1480bc4f4(void)

void FUN_1480bc4f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    (**(code **)*param_1)(param_1,0);
  }
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 1480bc520 FUN_1480bc520 body=21 status=ok
// SIG undefined FUN_1480bc520(void)

undefined * FUN_1480bc520(void)

{
  FUN_1480bc81d();
  return &DAT_14cb38fa0;
}



// FUNCTION 1480bc536 FUN_1480bc536 body=270 status=ok
// SIG undefined FUN_1480bc536(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480bc536(void)

{
  _DAT_14cb38fc8 = L"bNeedsCPUAccess";
  DAT_14cb38ff2 = FUN_140850cc5();
  if ((DAT_14c9cfd57 & 2) == 0) {
    DAT_14c9cfd57 = DAT_14c9cfd57 | 3;
    _DAT_14c9cfcf8 = L"bool";
    _DAT_14c9cfd10 = &LAB_147169480;
    _DAT_14c9cfd18 = &LAB_14716948c;
    _DAT_14c9cfd20 = &LAB_147169498;
    _DAT_14c9cfd28 = &LAB_14716949e;
    _DAT_14c9cfd30 = &LAB_1471694a2;
    _DAT_14c9cfd08 = &LAB_1471694a8;
    _DAT_14c9cfd48 = &DAT_100000001;
    _DAT_14c9cfd50 = 1;
    DAT_14c9cfd54 = 0;
  }
  _DAT_14cb38fd0 = &DAT_14c9cfcf0;
  _DAT_14cb38fe0 = &LAB_14682652b;
  _DAT_14cb38fe8 = &DAT_100000018;
  _DAT_14cb38ff0 = 0;
  _DAT_14cb38fd8 = DAT_14cb38f48;
  DAT_14cb38f48 = &DAT_14cb38fc8;
  return;
}



// FUNCTION 1480bc644 FUN_1480bc644 body=473 status=ok
// SIG undefined FUN_1480bc644(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480bc644(void)

{
  _DAT_14cb38ff8 = L"BASE";
  DAT_14cb39022 = 4;
  if ((DAT_14cb3908f & 2) == 0) {
    DAT_14cb3908f = DAT_14cb3908f | 3;
    _DAT_14cb39030 = L"(TArray<T, AllocatorType>)";
    _DAT_14cb39048 = FUN_1480bc898;
    _DAT_14cb39050 = &LAB_1480bc8f8;
    _DAT_14cb39058 = &LAB_1480bc906;
    _DAT_14cb39060 = &LAB_1480bc914;
    _DAT_14cb39068 = &DAT_1480bc922;
    _DAT_14cb39040 = FUN_1480bc924;
    _DAT_14cb39080 = 0x1000000010;
    _DAT_14cb39088 = 8;
    DAT_14cb3908c = '\0';
  }
  else if (DAT_14cb3908c != '\0') {
    DAT_14cb38f9e = DAT_14cb38f9e + '\x01';
  }
  _DAT_14cb39008 = DAT_14cb38f48;
  _DAT_14cb39018 = &DAT_100000008;
  _DAT_14cb39010 = &LAB_14682652b;
  _DAT_14cb39000 = &DAT_14cb39028;
  DAT_14cb38f9d = DAT_14cb38f9d + '\x01';
  DAT_14cb38f48 = &DAT_14cb38ff8;
  _DAT_14cb39090 = L"BASE";
  DAT_14cb390ba = 4;
  _DAT_14cb39098 = FUN_146268212();
  _DAT_14cb390a0 = DAT_14cb38f48;
  _DAT_14cb390a8 = &LAB_14682652b;
  DAT_14cb38f48 = &DAT_14cb39090;
  DAT_14cb38f9d = DAT_14cb38f9d + '\x01';
  _DAT_14cb390b0 = 0x100000000;
  if (*(char *)(_DAT_14cb39098 + 100) != '\0') {
    DAT_14cb38f9e = DAT_14cb38f9e + '\x01';
  }
  return;
}



// FUNCTION 1480bc81d FUN_1480bc81d body=122 status=ok
// SIG undefined FUN_1480bc81d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480bc81d(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb38fc0) {
    FUN_144b3d300(&DAT_14cb38fc0);
    if (DAT_14cb38fc0 == -1) {
      DAT_14cb38fa8 = 0;
      uRam000000014cb38fb0 = 0;
      _DAT_14cb38fa0 = &PTR_FUN_14ad89a50;
      DAT_14cb38fb8 = 0;
      atexit((_func_5014 *)&LAB_143920194);
      _Init_thread_footer(&DAT_14cb38fc0);
      return;
    }
  }
  return;
}



// FUNCTION 1480bc898 FUN_1480bc898 body=95 status=ok
// SIG undefined FUN_1480bc898(void)

void FUN_1480bc898(void)

{
  undefined1 auStack_48 [32];
  ulonglong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_146826a6c(0,local_28,0x10);
  if (local_28[0] != 0 && (local_28[0] & 1) == 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480bc924 FUN_1480bc924 body=51 status=ok
// SIG undefined FUN_1480bc924(void)

void FUN_1480bc924(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 1480bc958 FUN_1480bc958 body=2723 status=ok
// SIG undefined FUN_1480bc958(void)

void FUN_1480bc958(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 *puVar19;
  longlong lVar20;
  float fVar21;
  undefined8 *puVar22;
  char cVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  int *piVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  int iVar30;
  float fVar31;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar32 [16];
  int iVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_2c8 [36];
  float local_2a4;
  float local_2a0;
  float local_29c;
  undefined1 local_298 [16];
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float *local_268;
  int local_260;
  float *local_258;
  int local_250;
  float *local_248;
  int local_240;
  float *local_238;
  int local_230;
  float *local_228;
  int local_220;
  float *local_218;
  int local_210;
  float *local_208;
  int local_200;
  float *local_1f8;
  int local_1f0;
  float *local_1e8;
  int local_1e0;
  float *local_1d8;
  int local_1d0;
  float *local_1c8;
  int local_1c0;
  float *local_1b8;
  int local_1b0;
  float *local_1a8;
  int local_1a0;
  float *local_198;
  int local_190;
  float *local_188;
  int local_180;
  uint *local_178;
  undefined8 uStack_170;
  int local_168;
  undefined1 local_160 [8];
  longlong local_158;
  undefined8 *local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [72];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  FUN_1405c93a6(local_160,param_1);
  local_150 = (undefined8 *)0x0;
  puVar24 = (undefined8 *)FUN_1405c943a(local_158,local_148);
  puVar22 = local_150;
  puVar19 = local_150;
  if (local_150 != puVar24) {
    if (puVar24 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
      UNLOCK();
    }
    puVar19 = puVar24;
    if (local_150 != (undefined8 *)0x0) {
      LOCK();
      piVar26 = (int *)(local_150 + 1);
      *piVar26 = *piVar26 + -1;
      UNLOCK();
      if (*piVar26 == 0) {
        puVar19 = (undefined8 *)*local_150;
        local_150 = puVar24;
        (*(code *)*puVar19)(puVar22,1);
        puVar19 = local_150;
      }
    }
  }
  local_150 = puVar19;
  local_178 = (uint *)0x0;
  uStack_170 = 0;
  local_168 = 0;
  FUN_144a98d08(&local_178,param_1);
  FUN_144a76c20(&local_1a8,param_1);
  FUN_144a76c20(&local_198,param_1);
  FUN_144a76c20(&local_188,param_1);
  FUN_144a76c20(&local_1d8,param_1);
  FUN_144a76c20(&local_1c8,param_1);
  FUN_144a76c20(&local_1b8,param_1);
  FUN_144a76c20(&local_208,param_1);
  FUN_144a76c20(&local_1f8,param_1);
  FUN_144a76c20(&local_1e8,param_1);
  FUN_144a76c20(&local_238,param_1);
  FUN_144a76c20(&local_228,param_1);
  FUN_144a76c20(&local_218,param_1);
  FUN_144a76c20(&local_268,param_1);
  FUN_144a76c20(&local_258,param_1);
  FUN_144a76c20(&local_248,param_1);
  if (local_150 != (undefined8 *)0x0) {
    if (local_150[0x28] == 0) {
      uVar27 = 0xffffffff;
      iVar30 = 0;
LAB_1480bcb8f:
      puVar22 = local_150;
      if ((((local_150[0x1e] == 0) || ((longlong *)local_150[0x1a] == (longlong *)0x0)) ||
          (local_150[0x1c] == 0)) ||
         ((cVar23 = (**(code **)(*(longlong *)local_150[0x1a] + 0x58))(), cVar23 == '\0' ||
          (cVar23 = (**(code **)(*(longlong *)puVar22[0x1c] + 0x58))(), cVar23 == '\0')))) {
        iVar33 = 0;
      }
      else {
        iVar33 = *(int *)((longlong)local_150 + 0x10c);
      }
    }
    else {
      cVar23 = FUN_1461c3a34();
      iVar33 = 0;
      iVar30 = 0;
      if (cVar23 != '\0') {
        iVar30 = *(int *)((longlong)local_150 + 0x14c);
      }
      uVar27 = iVar30 - 1;
      if (local_150 != (undefined8 *)0x0) goto LAB_1480bcb8f;
    }
    if ((0 < iVar30) && (iVar30 == iVar33)) {
      piVar26 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar26 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar26) {
        local_298 = ZEXT416(-(uint)(0.0 < *(float *)(local_158 + 0x2f0)) &
                            (uint)(1.0 / *(float *)(local_158 + 0x2f0)));
        iVar30 = 0;
        do {
          uVar28 = *local_178;
          if ((int)uVar27 <= (int)*local_178) {
            uVar28 = uVar27;
          }
          if ((int)uVar28 < 1) {
            uVar28 = 0;
          }
          uVar29 = (ulonglong)uVar28;
          lVar20 = local_150[0x28];
          uVar25 = (ulonglong)(*(int *)(local_150 + 0x29) * uVar28);
          fVar16 = *(float *)(lVar20 + uVar25);
          fVar17 = *(float *)(lVar20 + 4 + uVar25);
          fVar18 = *(float *)(lVar20 + 8 + uVar25);
          local_178 = local_178 + local_168;
          FUN_144a928e2(local_138,local_158 + 0x40);
          auVar32._0_8_ = FUN_144a928e2(local_138,local_158 + 0x140);
          auVar32._8_8_ = extraout_XMM0_Qb;
          lVar20 = local_150[0x1e];
          if (*(char *)((longlong)local_150 + 0x111) == '\x01') {
            auVar32 = pmovsxwd(auVar32,*(undefined8 *)(lVar20 + uVar29 * 0x10));
            iVar33 = auVar32._12_4_;
            fVar41 = (float)auVar32._0_4_ * 3.051851e-05;
            local_288 = (float)auVar32._4_4_ * 3.051851e-05;
            local_278 = (float)auVar32._8_4_ * 3.051851e-05;
            auVar32 = pmovsxwd(auVar32,*(undefined8 *)(lVar20 + 8 + uVar29 * 0x10));
            fVar37 = (float)auVar32._0_4_ * 3.051851e-05;
            fVar38 = (float)auVar32._4_4_ * 3.051851e-05;
            fVar39 = (float)auVar32._8_4_ * 3.051851e-05;
            fVar40 = (float)auVar32._12_4_ * 3.051851e-05;
          }
          else {
            auVar32 = pmovsxbd(auVar32,*(undefined4 *)(lVar20 + uVar29 * 8));
            iVar33 = auVar32._12_4_;
            fVar41 = (float)auVar32._0_4_ * 0.007874016;
            local_288 = (float)auVar32._4_4_ * 0.007874016;
            local_278 = (float)auVar32._8_4_ * 0.007874016;
            auVar32 = pmovsxbd(auVar32,*(undefined4 *)(lVar20 + 4 + uVar29 * 8));
            fVar37 = (float)auVar32._0_4_ * 0.007874016;
            fVar38 = (float)auVar32._4_4_ * 0.007874016;
            fVar39 = (float)auVar32._8_4_ * 0.007874016;
            fVar40 = (float)auVar32._12_4_ * 0.007874016;
          }
          fStack_280 = (float)iVar33 * 0.0;
          fVar35 = (fVar37 * local_288 - fVar41 * fVar38) * fVar40;
          fVar36 = (fVar39 * fVar41 - fVar37 * local_278) * fVar40;
          fVar40 = (fVar38 * local_278 - fVar39 * local_288) * fVar40;
          fVar21 = local_298._0_4_;
          local_2a4 = fVar16;
          local_2a0 = fVar17;
          local_29c = fVar18;
          fStack_284 = local_288;
          fStack_27c = fStack_280;
          fStack_274 = fStack_280;
          fStack_270 = local_278;
          fStack_26c = fStack_280;
          FUN_144a928e2(local_138,local_158 + 0xc0);
          fVar34 = local_288;
          fVar31 = local_278;
          if (fVar35 * fVar35 + fVar40 * fVar40 + fVar36 * fVar36 <= 0.001) {
            fVar39 = 1.0;
            fVar41 = 1.0;
            fVar40 = 0.0;
            fVar36 = 1.0;
            fVar35 = 0.0;
            fVar37 = 0.0;
            fVar38 = 0.0;
            fVar34 = 0.0;
            fVar31 = 0.0;
          }
          pfVar1 = local_1a8 + local_1a0;
          *local_1a8 = local_2a4;
          pfVar2 = local_198 + local_190;
          *local_198 = local_2a0;
          pfVar3 = local_188 + local_180;
          *local_188 = local_29c;
          pfVar4 = local_1d8 + local_1d0;
          *local_1d8 = (fVar16 - fVar16) * fVar21;
          pfVar5 = local_1c8 + local_1c0;
          *local_1c8 = (fVar17 - fVar17) * fVar21;
          pfVar6 = local_1b8 + local_1b0;
          *local_1b8 = (fVar18 - fVar18) * fVar21;
          pfVar7 = local_208 + local_200;
          *local_208 = fVar37;
          pfVar8 = local_1f8 + local_1f0;
          *local_1f8 = fVar38;
          pfVar9 = local_1e8 + local_1e0;
          *local_1e8 = fVar39;
          pfVar10 = local_238 + local_230;
          *local_238 = fVar40;
          pfVar11 = local_228 + local_220;
          *local_228 = fVar36;
          pfVar12 = local_218 + local_210;
          *local_218 = fVar35;
          pfVar13 = local_268 + local_260;
          *local_268 = fVar41;
          pfVar14 = local_258 + local_250;
          *local_258 = fVar34;
          pfVar15 = local_248 + local_240;
          *local_248 = fVar31;
          iVar30 = iVar30 + 1;
          piVar26 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar26 = (int *)(param_1 + 0x3c);
          }
          local_268 = pfVar13;
          local_258 = pfVar14;
          local_248 = pfVar15;
          local_238 = pfVar10;
          local_228 = pfVar11;
          local_218 = pfVar12;
          local_208 = pfVar7;
          local_1f8 = pfVar8;
          local_1e8 = pfVar9;
          local_1d8 = pfVar4;
          local_1c8 = pfVar5;
          local_1b8 = pfVar6;
          local_1a8 = pfVar1;
          local_198 = pfVar2;
          local_188 = pfVar3;
        } while (iVar30 < *piVar26);
      }
      goto LAB_1480bd34c;
    }
  }
  fVar39 = DAT_14c846338;
  fVar18 = DAT_14c846330._4_4_;
  fVar16 = (float)DAT_14c846330;
  FUN_144a928e2(local_138,local_158 + 0x40);
  fVar38 = DAT_14c846338;
  fVar40 = DAT_14c846330._4_4_;
  fVar17 = (float)DAT_14c846330;
  FUN_144a928e2(local_138,local_158 + 0xc0);
  FUN_144a928e2(local_138,local_158 + 0xc0);
  FUN_144a928e2(local_138,local_158 + 0xc0);
  piVar26 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar26 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar26) {
    iVar30 = 0;
    do {
      pfVar1 = local_1a8 + local_1a0;
      *local_1a8 = fVar16;
      pfVar2 = local_198 + local_190;
      *local_198 = fVar18;
      pfVar3 = local_188 + local_180;
      *local_188 = fVar39;
      pfVar4 = local_1d8 + local_1d0;
      *local_1d8 = fVar17;
      pfVar5 = local_1c8 + local_1c0;
      *local_1c8 = fVar40;
      pfVar6 = local_1b8 + local_1b0;
      *local_1b8 = fVar38;
      pfVar7 = local_208 + local_200;
      *local_208 = 0.0;
      pfVar8 = local_1f8 + local_1f0;
      *local_1f8 = 0.0;
      pfVar9 = local_1e8 + local_1e0;
      *local_1e8 = 1.0;
      pfVar10 = local_238 + local_230;
      *local_238 = 0.0;
      pfVar11 = local_228 + local_220;
      *local_228 = 1.0;
      pfVar12 = local_218 + local_210;
      *local_218 = 0.0;
      pfVar13 = local_268 + local_260;
      *local_268 = 1.0;
      pfVar14 = local_258 + local_250;
      *local_258 = 0.0;
      pfVar15 = local_248 + local_240;
      *local_248 = 0.0;
      iVar30 = iVar30 + 1;
      piVar26 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar26 = (int *)(param_1 + 0x3c);
      }
      local_268 = pfVar13;
      local_258 = pfVar14;
      local_248 = pfVar15;
      local_238 = pfVar10;
      local_228 = pfVar11;
      local_218 = pfVar12;
      local_208 = pfVar7;
      local_1f8 = pfVar8;
      local_1e8 = pfVar9;
      local_1d8 = pfVar4;
      local_1c8 = pfVar5;
      local_1b8 = pfVar6;
      local_1a8 = pfVar1;
      local_198 = pfVar2;
      local_188 = pfVar3;
    } while (iVar30 < *piVar26);
  }
LAB_1480bd34c:
  if (local_150 != (undefined8 *)0x0) {
    LOCK();
    piVar26 = (int *)(local_150 + 1);
    *piVar26 = *piVar26 + -1;
    UNLOCK();
    if (*piVar26 == 0) {
      (**(code **)*local_150)(local_150,1);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480bd3fc FUN_1480bd3fc body=3319 status=ok
// SIG undefined FUN_1480bd3fc(void)

void FUN_1480bd3fc(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined1 auVar19 [12];
  undefined8 *puVar20;
  char cVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  int *piVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  int iVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8 [8];
  float fStack_2c0;
  float fStack_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_2a8 [16];
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float *local_268;
  int local_260;
  float *local_258;
  int local_250;
  float *local_248;
  int local_240;
  float *local_238;
  int local_230;
  float *local_228;
  int local_220;
  float *local_218;
  int local_210;
  float *local_208;
  int local_200;
  float *local_1f8;
  int local_1f0;
  float *local_1e8;
  int local_1e0;
  float *local_1d8;
  int local_1d0;
  float *local_1c8;
  int local_1c0;
  float *local_1b8;
  int local_1b0;
  float *local_1a8;
  int local_1a0;
  float *local_198;
  int local_190;
  float *local_188;
  int local_180;
  uint *local_178;
  undefined8 uStack_170;
  int local_168;
  undefined1 local_160 [8];
  longlong local_158;
  undefined8 *local_150;
  undefined1 local_148 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  FUN_1405c93a6(local_160,param_1);
  local_150 = (undefined8 *)0x0;
  puVar22 = (undefined8 *)FUN_1405c943a(local_158,local_148);
  puVar20 = local_150;
  puVar17 = local_150;
  if (local_150 != puVar22) {
    if (puVar22 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
      UNLOCK();
    }
    puVar17 = puVar22;
    if (local_150 != (undefined8 *)0x0) {
      LOCK();
      piVar24 = (int *)(local_150 + 1);
      *piVar24 = *piVar24 + -1;
      UNLOCK();
      if (*piVar24 == 0) {
        puVar17 = (undefined8 *)*local_150;
        local_150 = puVar22;
        (*(code *)*puVar17)(puVar20,1);
        puVar17 = local_150;
      }
    }
  }
  local_150 = puVar17;
  local_178 = (uint *)0x0;
  uStack_170 = 0;
  local_168 = 0;
  FUN_144a98d08(&local_178,param_1);
  FUN_144a76c20(&local_1a8,param_1);
  FUN_144a76c20(&local_198,param_1);
  FUN_144a76c20(&local_188,param_1);
  FUN_144a76c20(&local_1d8,param_1);
  FUN_144a76c20(&local_1c8,param_1);
  FUN_144a76c20(&local_1b8,param_1);
  FUN_144a76c20(&local_208,param_1);
  FUN_144a76c20(&local_1f8,param_1);
  FUN_144a76c20(&local_1e8,param_1);
  FUN_144a76c20(&local_238,param_1);
  FUN_144a76c20(&local_228,param_1);
  FUN_144a76c20(&local_218,param_1);
  FUN_144a76c20(&local_268,param_1);
  FUN_144a76c20(&local_258,param_1);
  FUN_144a76c20(&local_248,param_1);
  if (local_150 != (undefined8 *)0x0) {
    if (local_150[0x28] == 0) {
      uVar26 = 0xffffffff;
      iVar29 = 0;
LAB_1480bd639:
      puVar20 = local_150;
      if ((((local_150[0x1e] == 0) || ((longlong *)local_150[0x1a] == (longlong *)0x0)) ||
          (local_150[0x1c] == 0)) ||
         ((cVar21 = (**(code **)(*(longlong *)local_150[0x1a] + 0x58))(), cVar21 == '\0' ||
          (cVar21 = (**(code **)(*(longlong *)puVar20[0x1c] + 0x58))(), cVar21 == '\0')))) {
        iVar25 = 0;
      }
      else {
        iVar25 = *(int *)((longlong)local_150 + 0x10c);
      }
    }
    else {
      cVar21 = FUN_1461c3a34();
      iVar25 = 0;
      iVar29 = 0;
      if (cVar21 != '\0') {
        iVar29 = *(int *)((longlong)local_150 + 0x14c);
      }
      uVar26 = iVar29 - 1;
      if (local_150 != (undefined8 *)0x0) goto LAB_1480bd639;
    }
    if ((0 < iVar29) && (iVar29 == iVar25)) {
      piVar24 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar24 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar24) {
        local_2a8 = ZEXT416(-(uint)(0.0 < *(float *)(local_158 + 0x2f0)) &
                            (uint)(1.0 / *(float *)(local_158 + 0x2f0)));
        iVar29 = 0;
        do {
          uVar27 = *local_178;
          if ((int)uVar26 <= (int)*local_178) {
            uVar27 = uVar26;
          }
          if ((int)uVar27 < 1) {
            uVar27 = 0;
          }
          uVar28 = (ulonglong)uVar27;
          lVar18 = local_150[0x28];
          uVar23 = (ulonglong)(*(int *)(local_150 + 0x29) * uVar27);
          fVar32 = *(float *)(lVar18 + uVar23);
          fVar34 = *(float *)(lVar18 + 4 + uVar23);
          fVar16 = *(float *)(lVar18 + 8 + uVar23);
          local_178 = local_178 + local_168;
          FUN_144a928e2(&local_138,local_158 + 0x40);
          fVar35 = local_118 * fVar16 + local_128 * fVar34 + local_138 * fVar32 + local_108;
          fVar37 = fStack_114 * fVar16 + fStack_124 * fVar34 + fStack_134 * fVar32 + fStack_104;
          fVar39 = fStack_110 * fVar16 + fStack_120 * fVar34 + fStack_130 * fVar32 + fStack_100;
          fVar41 = fStack_10c * fVar16 + fStack_11c * fVar34 + fStack_12c * fVar32 + fStack_fc;
          local_2c8._4_4_ = fVar37;
          local_2c8._0_4_ = fVar37;
          fStack_2c0 = fVar41;
          fStack_2bc = fVar41;
          auVar19._4_8_ = local_2c8._8_8_;
          auVar19._0_4_ = fVar37;
          auVar30._0_8_ = auVar19._0_8_ << 0x20;
          auVar30._8_4_ = fVar39;
          auVar30._12_4_ = fVar41;
          local_2b8 = auVar30._8_8_;
          uStack_2b0 = CONCAT44(fVar41,fVar39);
          FUN_144a928e2(&local_138,local_158 + 0x140);
          fVar41 = fVar16 * local_118 + fVar34 * local_128 + fVar32 * local_138 + local_108;
          fVar33 = fVar16 * fStack_114 + fVar34 * fStack_124 + fVar32 * fStack_134 + fStack_104;
          fVar34 = fVar16 * fStack_110 + fVar34 * fStack_120 + fVar32 * fStack_130 + fStack_100;
          fVar32 = local_2a8._0_4_;
          lVar18 = local_150[0x1e];
          if (*(char *)((longlong)local_150 + 0x111) == '\x01') {
            auVar30 = pmovsxwd(local_2a8,*(undefined8 *)(lVar18 + uVar28 * 0x10));
            local_28c = (float)auVar30._0_4_ * 3.051851e-05;
            local_288 = (float)auVar30._4_4_ * 3.051851e-05;
            local_284 = (float)auVar30._8_4_ * 3.051851e-05;
            auVar30 = pmovsxwd(auVar30,*(undefined8 *)(lVar18 + 8 + uVar28 * 0x10));
            auVar31._0_4_ = (float)auVar30._0_4_ * 3.051851e-05;
            auVar31._4_4_ = (float)auVar30._4_4_ * 3.051851e-05;
            auVar31._8_4_ = (float)auVar30._8_4_ * 3.051851e-05;
            auVar31._12_4_ = (float)auVar30._12_4_ * 3.051851e-05;
          }
          else {
            auVar30 = pmovsxbd(local_2a8,*(undefined4 *)(lVar18 + uVar28 * 8));
            local_28c = (float)auVar30._0_4_ * 0.007874016;
            local_288 = (float)auVar30._4_4_ * 0.007874016;
            local_284 = (float)auVar30._8_4_ * 0.007874016;
            auVar30 = pmovsxbd(auVar30,*(undefined4 *)(lVar18 + 4 + uVar28 * 8));
            auVar31._0_4_ = (float)auVar30._0_4_ * 0.007874016;
            auVar31._4_4_ = (float)auVar30._4_4_ * 0.007874016;
            auVar31._8_4_ = (float)auVar30._8_4_ * 0.007874016;
            auVar31._12_4_ = (float)auVar30._12_4_ * 0.007874016;
          }
          local_274 = auVar31._0_4_;
          local_270 = auVar31._4_4_;
          local_26c = auVar31._8_4_;
          local_280 = auVar31._12_4_;
          local_278 = (local_274 * local_288 - local_28c * local_270) * local_280;
          local_27c = (local_26c * local_28c - local_274 * local_284) * local_280;
          local_280 = (local_270 * local_284 - local_26c * local_288) * local_280;
          FUN_144a928e2(&local_138,local_158 + 0xc0);
          FUN_1480be0f4(&local_28c,&local_138);
          pfVar1 = local_1a8 + local_1a0;
          *local_1a8 = fVar35;
          pfVar2 = local_198 + local_190;
          *local_198 = (float)local_2c8._0_4_;
          pfVar3 = local_188 + local_180;
          *local_188 = (float)local_2b8;
          pfVar4 = local_1d8 + local_1d0;
          *local_1d8 = (fVar35 - fVar41) * fVar32;
          pfVar5 = local_1c8 + local_1c0;
          *local_1c8 = (fVar37 - fVar33) * fVar32;
          pfVar6 = local_1b8 + local_1b0;
          *local_1b8 = (fVar39 - fVar34) * fVar32;
          pfVar7 = local_208 + local_200;
          *local_208 = local_274;
          pfVar8 = local_1f8 + local_1f0;
          *local_1f8 = local_270;
          pfVar9 = local_1e8 + local_1e0;
          *local_1e8 = local_26c;
          pfVar10 = local_238 + local_230;
          *local_238 = local_280;
          pfVar11 = local_228 + local_220;
          *local_228 = local_27c;
          pfVar12 = local_218 + local_210;
          *local_218 = local_278;
          pfVar13 = local_268 + local_260;
          *local_268 = local_28c;
          pfVar14 = local_258 + local_250;
          *local_258 = local_288;
          pfVar15 = local_248 + local_240;
          *local_248 = local_284;
          iVar29 = iVar29 + 1;
          piVar24 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar24 = (int *)(param_1 + 0x3c);
          }
          local_268 = pfVar13;
          local_258 = pfVar14;
          local_248 = pfVar15;
          local_238 = pfVar10;
          local_228 = pfVar11;
          local_218 = pfVar12;
          local_208 = pfVar7;
          local_1f8 = pfVar8;
          local_1e8 = pfVar9;
          local_1d8 = pfVar4;
          local_1c8 = pfVar5;
          local_1b8 = pfVar6;
          local_1a8 = pfVar1;
          local_198 = pfVar2;
          local_188 = pfVar3;
        } while (iVar29 < *piVar24);
      }
      goto LAB_1480be045;
    }
  }
  fVar41 = DAT_14c846338;
  fVar34 = DAT_14c846330._4_4_;
  fVar32 = (float)DAT_14c846330;
  FUN_144a928e2(&local_138,local_158 + 0x40);
  fVar33 = DAT_14c846338;
  fVar16 = DAT_14c846330._4_4_;
  fVar35 = fVar41 * local_118 + fVar34 * local_128 + fVar32 * local_138 + local_108;
  fVar37 = fVar41 * fStack_114 + fVar34 * fStack_124 + fVar32 * fStack_134 + fStack_104;
  fVar39 = fVar41 * fStack_110 + fVar34 * fStack_120 + fVar32 * fStack_130 + fStack_100;
  local_2b8 = CONCAT44(local_2b8._4_4_,(float)DAT_14c846330);
  FUN_144a928e2(&local_138,local_158 + 0xc0);
  fVar51 = local_128 * 0.0 + local_138;
  fVar52 = fStack_124 * 0.0 + fStack_134;
  fVar53 = fStack_120 * 0.0 + fStack_130;
  fVar32 = local_118 * 0.0;
  fVar34 = fStack_114 * 0.0;
  fVar41 = fStack_110 * 0.0;
  fVar36 = local_108 * 0.0;
  fVar38 = fStack_104 * 0.0;
  fVar40 = fStack_100 * 0.0;
  FUN_144a928e2(&local_138,local_158 + 0xc0);
  fVar42 = local_138 * 0.0 + local_128;
  fVar43 = fStack_134 * 0.0 + fStack_124;
  fVar44 = fStack_130 * 0.0 + fStack_120;
  fVar45 = local_118 * 0.0;
  fVar46 = fStack_114 * 0.0;
  fVar47 = fStack_110 * 0.0;
  fVar48 = local_108 * 0.0;
  fVar49 = fStack_104 * 0.0;
  fVar50 = fStack_100 * 0.0;
  FUN_144a928e2(&local_138,local_158 + 0xc0);
  piVar24 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar24 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar24) {
    fVar36 = fVar36 + fVar32 + fVar51;
    fVar38 = fVar38 + fVar34 + fVar52;
    fVar40 = fVar40 + fVar41 + fVar53;
    fVar34 = 1.0 / SQRT(fVar40 * fVar40 + fVar36 * fVar36 + fVar38 * fVar38);
    fVar48 = fVar48 + fVar45 + fVar42;
    fVar49 = fVar49 + fVar46 + fVar43;
    fVar50 = fVar50 + fVar47 + fVar44;
    fVar41 = 1.0 / SQRT(fVar50 * fVar50 + fVar48 * fVar48 + fVar49 * fVar49);
    local_2c8._0_4_ = local_108 * 0.0 + local_128 * 0.0 + local_138 * 0.0 + local_118;
    local_2c8._4_4_ = fStack_104 * 0.0 + fStack_124 * 0.0 + fStack_134 * 0.0 + fStack_114;
    fStack_2c0 = fStack_100 * 0.0 + fStack_120 * 0.0 + fStack_130 * 0.0 + fStack_110;
    fStack_2bc = fStack_fc * 0.0 + fStack_11c * 0.0 + fStack_12c * 0.0 + fStack_10c;
    fVar32 = 1.0 / SQRT(fStack_2c0 * fStack_2c0 +
                        (float)local_2c8._0_4_ * (float)local_2c8._0_4_ +
                        (float)local_2c8._4_4_ * (float)local_2c8._4_4_);
    iVar29 = 0;
    do {
      pfVar1 = local_1a8 + local_1a0;
      *local_1a8 = fVar35;
      pfVar2 = local_198 + local_190;
      *local_198 = fVar37;
      pfVar3 = local_188 + local_180;
      *local_188 = fVar39;
      pfVar4 = local_1d8 + local_1d0;
      *local_1d8 = (float)local_2b8;
      pfVar5 = local_1c8 + local_1c0;
      *local_1c8 = fVar16;
      pfVar6 = local_1b8 + local_1b0;
      *local_1b8 = fVar33;
      pfVar7 = local_208 + local_200;
      *local_208 = fVar32 * (float)local_2c8._0_4_;
      pfVar8 = local_1f8 + local_1f0;
      *local_1f8 = (float)local_2c8._4_4_ * fVar32;
      pfVar9 = local_1e8 + local_1e0;
      *local_1e8 = fStack_2c0 * fVar32;
      pfVar10 = local_238 + local_230;
      *local_238 = fVar41 * fVar48;
      pfVar11 = local_228 + local_220;
      *local_228 = fVar49 * fVar41;
      pfVar12 = local_218 + local_210;
      *local_218 = fVar50 * fVar41;
      pfVar13 = local_268 + local_260;
      *local_268 = fVar34 * fVar36;
      pfVar14 = local_258 + local_250;
      *local_258 = fVar38 * fVar34;
      pfVar15 = local_248 + local_240;
      *local_248 = fVar40 * fVar34;
      iVar29 = iVar29 + 1;
      piVar24 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar24 = (int *)(param_1 + 0x3c);
      }
      local_268 = pfVar13;
      local_258 = pfVar14;
      local_248 = pfVar15;
      local_238 = pfVar10;
      local_228 = pfVar11;
      local_218 = pfVar12;
      local_208 = pfVar7;
      local_1f8 = pfVar8;
      local_1e8 = pfVar9;
      local_1d8 = pfVar4;
      local_1c8 = pfVar5;
      local_1b8 = pfVar6;
      local_1a8 = pfVar1;
      local_198 = pfVar2;
      local_188 = pfVar3;
    } while (iVar29 < *piVar24);
  }
LAB_1480be045:
  if (local_150 != (undefined8 *)0x0) {
    LOCK();
    piVar24 = (int *)(local_150 + 1);
    *piVar24 = *piVar24 + -1;
    UNLOCK();
    if (*piVar24 == 0) {
      (**(code **)*local_150)(local_150,1);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480be0f4 FUN_1480be0f4 body=636 status=ok
// SIG undefined FUN_1480be0f4(void)

void FUN_1480be0f4(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = param_1[3];
  fVar10 = param_1[4];
  fVar5 = param_1[5];
  if (fVar5 * fVar5 + fVar6 * fVar6 + fVar10 * fVar10 <= 0.001) {
    param_1[0] = 1.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = 1.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    param_1[8] = 1.0;
    fVar1 = 1.0;
    fVar3 = 0.0;
    fVar2 = 0.0;
    fVar6 = 0.0;
    fVar10 = 1.0;
    fVar5 = 0.0;
    fVar11 = 1.0;
    fVar4 = 0.0;
    fVar9 = 0.0;
  }
  else {
    fVar9 = param_1[2];
    fVar11 = *param_1;
    fVar4 = param_1[1];
    fVar1 = param_1[8];
    fVar2 = param_1[7];
    fVar3 = param_1[6];
  }
  fVar7 = param_2[0xc] * 0.0 + fVar9 * param_2[8] + fVar4 * param_2[4] + fVar11 * *param_2;
  fVar8 = param_2[0xd] * 0.0 + fVar9 * param_2[9] + fVar4 * param_2[5] + fVar11 * param_2[1];
  fVar9 = param_2[0xe] * 0.0 + fVar9 * param_2[10] + fVar4 * param_2[6] + fVar11 * param_2[2];
  fVar11 = 1.0 / SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8);
  *param_1 = fVar11 * fVar7;
  param_1[1] = fVar8 * fVar11;
  param_1[2] = fVar9 * fVar11;
  fVar9 = param_2[0xc] * 0.0 + fVar5 * param_2[8] + fVar10 * param_2[4] + fVar6 * *param_2;
  fVar11 = param_2[0xd] * 0.0 + fVar5 * param_2[9] + fVar10 * param_2[5] + fVar6 * param_2[1];
  fVar6 = param_2[0xe] * 0.0 + fVar5 * param_2[10] + fVar10 * param_2[6] + fVar6 * param_2[2];
  fVar10 = 1.0 / SQRT(fVar6 * fVar6 + fVar9 * fVar9 + fVar11 * fVar11);
  param_1[3] = fVar10 * fVar9;
  param_1[4] = fVar11 * fVar10;
  param_1[5] = fVar6 * fVar10;
  fVar6 = param_2[0xc] * 0.0 + fVar1 * param_2[8] + fVar2 * param_2[4] + fVar3 * *param_2;
  fVar10 = param_2[0xd] * 0.0 + fVar1 * param_2[9] + fVar2 * param_2[5] + fVar3 * param_2[1];
  fVar5 = param_2[0xe] * 0.0 + fVar1 * param_2[10] + fVar2 * param_2[6] + fVar3 * param_2[2];
  fVar9 = 1.0 / SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar10 * fVar10);
  param_1[6] = fVar9 * fVar6;
  param_1[7] = fVar10 * fVar9;
  param_1[8] = fVar5 * fVar9;
  return;
}



// FUNCTION 1480be370 FUN_1480be370 body=31 status=ok
// SIG undefined FUN_1480be370(void)

undefined8 FUN_1480be370(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480be3aa FUN_1480be3aa body=29 status=ok
// SIG undefined FUN_1480be3aa(void)

bool FUN_1480be3aa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1480be3c8 FUN_1480be3c8 body=26 status=ok
// SIG undefined FUN_1480be3c8(void)

bool FUN_1480be3c8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1480be3e2 FUN_1480be3e2 body=93 status=ok
// SIG undefined FUN_1480be3e2(void)

void FUN_1480be3e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad89ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1480be440 FUN_1480be440 body=93 status=ok
// SIG undefined FUN_1480be440(void)

void FUN_1480be440(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad89ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1480be49e FUN_1480be49e body=126 status=ok
// SIG undefined FUN_1480be49e(void)

void FUN_1480be49e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad89ea0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480be50d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480be51c FUN_1480be51c body=140 status=ok
// SIG undefined FUN_1480be51c(void)

bool FUN_1480be51c(longlong param_1,undefined8 param_2)

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
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480be5aa FUN_1480be5aa body=5760 status=ok
// SIG undefined FUN_1480be5aa(void)

void FUN_1480be5aa(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong lVar18;
  double dVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  undefined8 *puVar22;
  char cVar23;
  uint uVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  int *piVar27;
  ulonglong uVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  int iVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  float fVar36;
  undefined1 auVar38 [12];
  double dVar37;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  undefined1 auVar50 [12];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  int iVar61;
  float fVar62;
  undefined1 auVar64 [12];
  double dVar63;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar66 [16];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined1 auStack_368 [36];
  float local_344;
  float local_340;
  float local_33c;
  undefined1 local_338 [8];
  float fStack_330;
  float fStack_32c;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  undefined1 local_2f8 [16];
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  undefined1 local_2d8 [16];
  longlong local_2c0;
  undefined4 local_2b8;
  char local_2b4;
  float *local_2b0;
  int local_2a8;
  float *local_2a0;
  int local_298;
  float *local_290;
  int local_288;
  float *local_280;
  int local_278;
  float *local_270;
  int local_268;
  float *local_260;
  int local_258;
  float *local_250;
  int local_248;
  float *local_240;
  int local_238;
  float *local_230;
  int local_228;
  float *local_220;
  int local_218;
  float *local_210;
  int local_208;
  float *local_200;
  int local_1f8;
  float *local_1f0;
  int local_1e8;
  float *local_1e0;
  int local_1d8;
  float *local_1d0;
  int local_1c8;
  float *local_1c0 [2];
  int local_1b0;
  float *local_1a8;
  int local_198;
  float *local_190;
  int local_180;
  int *local_178;
  undefined8 uStack_170;
  int local_168;
  undefined1 local_160 [8];
  longlong local_158;
  undefined8 *local_150;
  undefined1 local_148 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f0;
  undefined1 auVar65 [16];
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  FUN_1405c93a6(local_160,param_1);
  local_150 = (undefined8 *)0x0;
  puVar25 = (undefined8 *)FUN_1405c943a(local_158,local_148);
  puVar22 = local_150;
  puVar17 = local_150;
  if (local_150 != puVar25) {
    if (puVar25 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar25 + 1) = *(int *)(puVar25 + 1) + 1;
      UNLOCK();
    }
    puVar17 = puVar25;
    if (local_150 != (undefined8 *)0x0) {
      LOCK();
      piVar27 = (int *)(local_150 + 1);
      *piVar27 = *piVar27 + -1;
      UNLOCK();
      if (*piVar27 == 0) {
        puVar17 = (undefined8 *)*local_150;
        local_150 = puVar25;
        (*(code *)*puVar17)(puVar22,1);
        puVar17 = local_150;
      }
    }
  }
  local_150 = puVar17;
  local_178 = (int *)0x0;
  uStack_170 = 0;
  local_168 = 0;
  FUN_144a98d08(&local_178,param_1);
  FUN_1448a432c(local_1c0,param_1);
  FUN_144a76c20(&local_1f0,param_1);
  FUN_144a76c20(&local_1e0,param_1);
  FUN_144a76c20(&local_1d0,param_1);
  FUN_144a76c20(&local_220,param_1);
  FUN_144a76c20(&local_210,param_1);
  FUN_144a76c20(&local_200,param_1);
  FUN_144a76c20(&local_250,param_1);
  FUN_144a76c20(&local_240,param_1);
  FUN_144a76c20(&local_230,param_1);
  FUN_144a76c20(&local_280,param_1);
  FUN_144a76c20(&local_270,param_1);
  FUN_144a76c20(&local_260,param_1);
  FUN_144a76c20(&local_2b0,param_1);
  FUN_144a76c20(&local_2a0,param_1);
  FUN_144a76c20(&local_290,param_1);
  if (local_150 == (undefined8 *)0x0) {
    local_2c0 = 0;
    local_2b8 = 0;
    local_2b4 = '\0';
  }
  else {
    FUN_1461c3a4c(local_150 + 0x33,&local_2c0);
    if (((((local_150 != (undefined8 *)0x0) &&
          (FUN_1461c3a4c(local_150 + 0x33,&local_138), fVar84 = fStack_130, 2 < (int)fStack_130)) &&
         (local_150 != (undefined8 *)0x0)) &&
        (((local_150[0x28] != 0 &&
          (cVar23 = FUN_1461c3a34(local_150 + 0x23), puVar22 = local_150, cVar23 != '\0')) &&
         ((local_150 != (undefined8 *)0x0 &&
          ((0 < *(int *)((longlong)local_150 + 0x14c) && (local_150[0x1e] != 0)))))))) &&
       (((longlong *)local_150[0x1a] != (longlong *)0x0 &&
        ((((local_150[0x1c] != 0 &&
           (cVar23 = (**(code **)(*(longlong *)local_150[0x1a] + 0x58))(), cVar23 != '\0')) &&
          (cVar23 = (**(code **)(*(longlong *)puVar22[0x1c] + 0x58))(), cVar23 != '\0')) &&
         (0 < *(int *)((longlong)local_150 + 0x10c))))))) {
      piVar27 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar27 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar27) {
        iVar29 = (int)fVar84 / 3 + -1;
        iVar33 = 0;
        do {
          iVar61 = *local_178;
          if (iVar29 <= *local_178) {
            iVar61 = iVar29;
          }
          if (iVar61 < 1) {
            iVar61 = 0;
          }
          fVar84 = *local_190;
          fVar86 = *local_1a8;
          uVar35 = (ulonglong)(iVar61 * 3 + 2);
          uVar34 = (ulonglong)(uint)(iVar61 * 3);
          if (local_2b4 == '\x01') {
            uVar24 = *(uint *)(local_2c0 + uVar35 * 4);
            uVar30 = *(uint *)(local_2c0 + uVar34 * 4);
            uVar31 = *(uint *)(local_2c0 + 4 + uVar34 * 4);
          }
          else {
            uVar24 = (uint)*(ushort *)(local_2c0 + uVar35 * 2);
            uVar31 = (uint)*(ushort *)(local_2c0 + 2 + uVar34 * 2);
            uVar30 = (uint)*(ushort *)(local_2c0 + uVar34 * 2);
          }
          local_344 = *local_1c0[0];
          lVar18 = local_150[0x28];
          iVar16 = *(int *)(local_150 + 0x29);
          uVar32 = (ulonglong)(uVar30 * iVar16);
          uVar28 = (ulonglong)(uVar31 * iVar16);
          uVar26 = (ulonglong)(uVar24 * iVar16);
          fVar71 = *(float *)(lVar18 + uVar26) * fVar84 +
                   *(float *)(lVar18 + uVar28) * fVar86 + *(float *)(lVar18 + uVar32) * local_344;
          fVar70 = *(float *)(lVar18 + 4 + uVar26) * fVar84 +
                   *(float *)(lVar18 + 4 + uVar28) * fVar86 +
                   *(float *)(lVar18 + 4 + uVar32) * local_344;
          fVar78 = *(float *)(lVar18 + 8 + uVar26) * fVar84 +
                   *(float *)(lVar18 + 8 + uVar28) * fVar86 +
                   *(float *)(lVar18 + 8 + uVar32) * local_344;
          local_1c0[0] = local_1c0[0] + local_1b0;
          local_1a8 = local_1a8 + local_198;
          local_190 = local_190 + local_180;
          local_178 = local_178 + local_168;
          FUN_144a928e2(&local_138,local_158 + 0x40);
          local_2e8 = local_118 * fVar78 + local_128 * fVar70 + local_138 * fVar71 + local_108;
          fStack_2e4 = fStack_114 * fVar78 + fStack_124 * fVar70 + fStack_134 * fVar71 + fStack_104;
          fStack_2e0 = fStack_110 * fVar78 + fStack_120 * fVar70 + fStack_130 * fVar71 + fStack_100;
          fStack_2dc = fStack_10c * fVar78 + fStack_11c * fVar70 + fStack_12c * fVar71 + fStack_fc;
          FUN_144a928e2(&local_138,local_158 + 0x140);
          uVar26 = (ulonglong)(iVar61 * 3 + 1);
          if (local_2b4 == '\x01') {
            uVar24 = *(uint *)(local_2c0 + uVar35 * 4);
            uVar30 = *(uint *)(local_2c0 + uVar26 * 4);
            uVar31 = *(uint *)(local_2c0 + uVar34 * 4);
          }
          else {
            uVar24 = (uint)*(ushort *)(local_2c0 + uVar35 * 2);
            uVar30 = (uint)*(ushort *)(local_2c0 + uVar26 * 2);
            uVar31 = (uint)*(ushort *)(local_2c0 + uVar34 * 2);
          }
          fVar79 = fVar78 * local_118 + fVar70 * local_128 + fVar71 * local_138 + local_108;
          fVar80 = fVar78 * fStack_114 + fVar70 * fStack_124 + fVar71 * fStack_134 + fStack_104;
          fVar81 = fVar78 * fStack_110 + fVar70 * fStack_120 + fVar71 * fStack_130 + fStack_100;
          fVar70 = fVar78 * fStack_10c + fVar70 * fStack_11c + fVar71 * fStack_12c + fStack_fc;
          local_340 = *(float *)(local_158 + 0x2f0);
          lVar18 = local_150[0x1e];
          if (*(char *)((longlong)local_150 + 0x111) == '\x01') {
            auVar39 = pmovsxwd(ZEXT416((uint)local_340),
                               *(undefined8 *)(lVar18 + (ulonglong)uVar31 * 0x10));
            fVar71 = 3.051851e-05;
            fVar78 = 3.051851e-05;
            fVar72 = 3.051851e-05;
            auVar51._0_4_ = (float)auVar39._0_4_ * 3.051851e-05;
            auVar51._4_4_ = (float)auVar39._4_4_ * 3.051851e-05;
            auVar51._8_4_ = (float)auVar39._8_4_ * 3.051851e-05;
            auVar51._12_4_ = (float)auVar39._12_4_ * 0.0;
            auVar52._4_12_ = auVar51._4_12_;
            auVar52._0_4_ = auVar51._0_4_ * local_344;
            auVar39 = pmovsxwd(ZEXT416((uint)local_344),
                               *(undefined8 *)(lVar18 + (ulonglong)uVar30 * 0x10));
            fVar44 = (float)auVar39._8_4_ * 3.051851e-05 * fVar86 + auVar51._8_4_ * local_344;
            fVar49 = (float)auVar39._4_4_ * 3.051851e-05 * fVar86 + auVar51._4_4_ * local_344;
            fVar36 = (float)auVar39._0_4_ * 3.051851e-05 * fVar86 + auVar52._0_4_;
            auVar39 = pmovsxwd(auVar52,*(undefined8 *)(lVar18 + (ulonglong)uVar24 * 0x10));
            auVar50 = auVar39._0_12_;
          }
          else {
            auVar39 = pmovsxbd(ZEXT416((uint)local_340),
                               *(undefined4 *)(lVar18 + (ulonglong)uVar31 * 8));
            fVar71 = 0.007874016;
            fVar78 = 0.007874016;
            fVar72 = 0.007874016;
            auVar53._0_4_ = (float)auVar39._0_4_ * 0.007874016;
            auVar53._4_4_ = (float)auVar39._4_4_ * 0.007874016;
            auVar53._8_4_ = (float)auVar39._8_4_ * 0.007874016;
            auVar53._12_4_ = (float)auVar39._12_4_ * 0.0;
            auVar39 = pmovsxbd(auVar39,*(undefined4 *)(lVar18 + (ulonglong)uVar30 * 8));
            auVar54._4_12_ = auVar53._4_12_;
            auVar54._0_4_ = auVar53._0_4_ * local_344;
            fVar44 = (float)auVar39._8_4_ * 0.007874016 * fVar86 + auVar53._8_4_ * local_344;
            fVar49 = (float)auVar39._4_4_ * 0.007874016 * fVar86 + auVar53._4_4_ * local_344;
            fVar36 = (float)auVar39._0_4_ * 0.007874016 * fVar86 + auVar54._0_4_;
            auVar39 = pmovsxbd(auVar54,*(undefined4 *)(lVar18 + (ulonglong)uVar24 * 8));
            auVar50 = auVar39._0_12_;
          }
          fVar36 = (float)auVar50._0_4_ * fVar71 * fVar84 + fVar36;
          fVar49 = (float)auVar50._4_4_ * fVar78 * fVar84 + fVar49;
          fVar44 = (float)auVar50._8_4_ * fVar72 * fVar84 + fVar44;
          FUN_144a928e2(&local_138,local_158 + 0x40);
          fVar71 = fVar36 * local_138;
          fVar78 = fVar36 * fStack_134;
          fVar72 = fVar36 * fStack_130;
          fVar36 = fVar36 * fStack_12c;
          local_318 = fVar49 * local_128;
          fStack_314 = fVar49 * fStack_124;
          fStack_310 = fVar49 * fStack_120;
          fStack_30c = fVar49 * fStack_11c;
          fVar49 = fVar44 * local_118;
          fVar82 = fVar44 * fStack_114;
          fVar83 = fVar44 * fStack_110;
          fVar44 = fVar44 * fStack_10c;
          local_338._0_4_ = local_108 * 0.0;
          local_338._4_4_ = fStack_104 * 0.0;
          fStack_330 = fStack_100 * 0.0;
          fStack_32c = fStack_fc * 0.0;
          if (local_2b4 == '\x01') {
            uVar24 = *(uint *)(local_2c0 + uVar35 * 4);
            uVar30 = *(uint *)(local_2c0 + uVar26 * 4);
            uVar31 = *(uint *)(local_2c0 + uVar34 * 4);
          }
          else {
            uVar24 = (uint)*(ushort *)(local_2c0 + uVar35 * 2);
            uVar30 = (uint)*(ushort *)(local_2c0 + uVar26 * 2);
            uVar31 = (uint)*(ushort *)(local_2c0 + uVar34 * 2);
          }
          local_2d8 = ZEXT416((uint)fVar86);
          lVar18 = local_150[0x1e];
          uVar32 = (ulonglong)uVar31;
          uVar28 = (ulonglong)uVar30;
          if (*(char *)((longlong)local_150 + 0x111) == '\x01') {
            auVar39 = pmovsxwd(_local_338,*(undefined8 *)(lVar18 + uVar32 * 0x10));
            auVar40._0_4_ = (float)auVar39._0_4_ * 3.051851e-05;
            auVar40._4_4_ = (float)auVar39._4_4_ * 3.051851e-05;
            auVar40._8_4_ = (float)auVar39._8_4_ * 3.051851e-05;
            auVar40._12_4_ = (float)auVar39._12_4_ * 0.0;
            auVar41._8_8_ = auVar40._8_8_;
            auVar41._0_8_ = auVar41._8_8_;
            auVar39 = pmovsxwd(auVar41,*(undefined8 *)(lVar18 + 8 + uVar32 * 0x10));
            dVar37 = (double)((float)auVar39._0_4_ * 3.051851e-05);
            dVar46 = (double)((float)auVar39._12_4_ * 3.051851e-05);
            dVar19 = (double)((float)auVar39._8_4_ * 3.051851e-05);
            dVar45 = (double)((float)auVar39._4_4_ * 3.051851e-05);
            auVar59._0_8_ = (double)auVar40._0_4_ * dVar45;
            auVar59._8_8_ = 0;
            dVar63 = (double)auVar40._8_4_ * dVar37;
            auVar55._0_8_ = (double)auVar40._4_4_ * dVar19;
            auVar55._8_8_ = 0;
            dVar37 = (dVar37 * (double)auVar40._4_4_ - auVar59._0_8_) * dVar46;
            dVar19 = (dVar19 * (double)auVar40._0_4_ - dVar63) * dVar46;
            dVar46 = (dVar45 * (double)auVar40._8_4_ - auVar55._0_8_) * dVar46;
            auVar39 = pmovsxwd(auVar55,*(undefined8 *)(lVar18 + uVar28 * 0x10));
            fVar85 = (float)auVar39._0_4_ * 3.051851e-05;
            fVar87 = (float)auVar39._4_4_ * 3.051851e-05;
            local_2f8._8_4_ = (float)auVar39._8_4_ * 3.051851e-05;
            local_2f8._12_4_ = (float)auVar39._12_4_ * 0.0;
            auVar20._4_8_ = auVar39._8_8_;
            auVar20._0_4_ = fVar87;
            auVar56._0_8_ = auVar20._0_8_ << 0x20;
            auVar56._8_4_ = local_2f8._8_4_;
            auVar56._12_4_ = local_2f8._12_4_;
            local_2f8._0_8_ = auVar56._8_8_;
            auVar39 = pmovsxwd(auVar59,*(undefined8 *)(lVar18 + 8 + uVar28 * 0x10));
            fVar73 = (float)auVar39._0_4_ * 3.051851e-05;
            fVar75 = (float)auVar39._4_4_ * 3.051851e-05;
            fVar76 = (float)auVar39._8_4_ * 3.051851e-05;
            fVar77 = (float)auVar39._12_4_ * 3.051851e-05;
          }
          else {
            auVar39 = pmovsxbd(_local_338,*(undefined4 *)(lVar18 + uVar32 * 8));
            auVar42._0_4_ = (float)auVar39._0_4_ * 0.007874016;
            auVar42._4_4_ = (float)auVar39._4_4_ * 0.007874016;
            auVar42._8_4_ = (float)auVar39._8_4_ * 0.007874016;
            auVar42._12_4_ = (float)auVar39._12_4_ * 0.0;
            auVar39._8_8_ = auVar42._8_8_;
            auVar39._0_8_ = auVar39._8_8_;
            auVar39 = pmovsxbd(auVar39,*(undefined4 *)(lVar18 + 4 + uVar32 * 8));
            dVar37 = (double)((float)auVar39._0_4_ * 0.007874016);
            dVar46 = (double)((float)auVar39._12_4_ * 0.007874016);
            dVar19 = (double)((float)auVar39._8_4_ * 0.007874016);
            dVar45 = (double)((float)auVar39._4_4_ * 0.007874016);
            auVar60._0_8_ = (double)auVar42._0_4_ * dVar45;
            auVar60._8_8_ = 0;
            dVar63 = (double)auVar42._8_4_ * dVar37;
            auVar57._0_8_ = (double)auVar42._4_4_ * dVar19;
            auVar57._8_8_ = 0;
            dVar37 = (dVar37 * (double)auVar42._4_4_ - auVar60._0_8_) * dVar46;
            dVar19 = (dVar19 * (double)auVar42._0_4_ - dVar63) * dVar46;
            dVar46 = (dVar45 * (double)auVar42._8_4_ - auVar57._0_8_) * dVar46;
            auVar39 = pmovsxbd(auVar57,*(undefined4 *)(lVar18 + uVar28 * 8));
            fVar85 = (float)auVar39._0_4_ * 0.007874016;
            fVar87 = (float)auVar39._4_4_ * 0.007874016;
            local_2f8._8_4_ = (float)auVar39._8_4_ * 0.007874016;
            local_2f8._12_4_ = (float)auVar39._12_4_ * 0.0;
            auVar50._4_8_ = auVar39._8_8_;
            auVar50._0_4_ = fVar87;
            auVar58._0_8_ = auVar50._0_8_ << 0x20;
            auVar58._8_4_ = local_2f8._8_4_;
            auVar58._12_4_ = local_2f8._12_4_;
            local_2f8._0_8_ = auVar58._8_8_;
            auVar39 = pmovsxbd(auVar60,*(undefined4 *)(lVar18 + 4 + uVar28 * 8));
            fVar73 = (float)auVar39._0_4_ * 0.007874016;
            fVar75 = (float)auVar39._4_4_ * 0.007874016;
            fVar76 = (float)auVar39._8_4_ * 0.007874016;
            fVar77 = (float)auVar39._12_4_ * 0.007874016;
          }
          auVar65._8_8_ = 0;
          auVar65._0_8_ = dVar63;
          uVar28 = (ulonglong)uVar24;
          if (*(char *)((longlong)local_150 + 0x111) == '\0') {
            auVar39 = pmovsxbd(auVar39,*(undefined4 *)(lVar18 + uVar28 * 8));
            iVar61 = auVar39._12_4_;
            fVar88 = (float)auVar39._0_4_ * 0.007874016;
            fStack_304 = (float)auVar39._4_4_ * 0.007874016;
            fVar89 = (float)auVar39._8_4_ * 0.007874016;
            auVar39 = pmovsxbd(auVar65,*(undefined4 *)(lVar18 + 4 + uVar28 * 8));
            fVar62 = (float)auVar39._0_4_ * 0.007874016;
            fVar67 = (float)auVar39._4_4_ * 0.007874016;
            fVar68 = (float)auVar39._8_4_ * 0.007874016;
            fVar69 = (float)auVar39._12_4_ * 0.007874016;
          }
          else {
            auVar39 = pmovsxwd(auVar39,*(undefined8 *)(lVar18 + uVar28 * 0x10));
            iVar61 = auVar39._12_4_;
            fVar88 = (float)auVar39._0_4_ * 3.051851e-05;
            fStack_304 = (float)auVar39._4_4_ * 3.051851e-05;
            fVar89 = (float)auVar39._8_4_ * 3.051851e-05;
            auVar39 = pmovsxwd(auVar65,*(undefined8 *)(lVar18 + 8 + uVar28 * 0x10));
            fVar62 = (float)auVar39._0_4_ * 3.051851e-05;
            fVar67 = (float)auVar39._4_4_ * 3.051851e-05;
            fVar68 = (float)auVar39._8_4_ * 3.051851e-05;
            fVar69 = (float)auVar39._12_4_ * 3.051851e-05;
          }
          fStack_2fc = (float)iVar61 * 0.0;
          auVar66._4_4_ = fVar69;
          auVar66._0_4_ = fVar69;
          auVar66._8_4_ = fVar69;
          auVar66._12_4_ = fVar69;
          fVar74 = (fVar67 * fVar89 - fVar68 * fStack_304) * fVar69 * fVar84 +
                   (fVar75 * (float)local_2f8._0_4_ - fVar76 * fVar87) * fVar77 * fVar86 +
                   (float)dVar46 * local_344;
          fVar76 = (fVar68 * fVar88 - fVar62 * fVar89) * fVar69 * fVar84 +
                   (fVar76 * fVar85 - fVar73 * (float)local_2f8._0_4_) * fVar77 * fVar86 +
                   (float)dVar19 * local_344;
          fVar86 = (fVar62 * fStack_304 - fVar88 * fVar67) * fVar69 * fVar84 +
                   (fVar73 * fVar87 - fVar85 * fVar75) * fVar77 * fVar86 + (float)dVar37 * local_344
          ;
          local_33c = fVar84;
          local_328 = fVar79;
          fStack_324 = fVar80;
          fStack_320 = fVar81;
          fStack_31c = fVar70;
          local_308 = fStack_304;
          fStack_300 = fStack_2fc;
          FUN_144a928e2(&local_138,local_158 + 0x40);
          if (local_2b4 == '\x01') {
            uVar24 = *(uint *)(local_2c0 + uVar35 * 4);
            uVar30 = *(uint *)(local_2c0 + uVar26 * 4);
            uVar31 = *(uint *)(local_2c0 + uVar34 * 4);
          }
          else {
            uVar24 = (uint)*(ushort *)(local_2c0 + uVar35 * 2);
            uVar30 = (uint)*(ushort *)(local_2c0 + uVar26 * 2);
            uVar31 = (uint)*(ushort *)(local_2c0 + uVar34 * 2);
          }
          local_338._0_4_ = (float)local_338._0_4_ + fVar49 + fVar71 + local_318;
          fStack_314 = (float)local_338._4_4_ + fVar82 + fVar78 + fStack_314;
          fVar71 = fStack_330 + fVar83 + fVar72 + fStack_310;
          fStack_310 = fStack_32c + fVar44 + fVar36 + fStack_30c;
          auVar47._4_4_ = fStack_310;
          auVar47._0_4_ = fVar71;
          auVar47._8_4_ = fVar71;
          auVar47._12_4_ = fStack_310;
          auVar48._4_12_ = auVar47._4_12_;
          auVar21._4_4_ = fStack_2e4;
          auVar21._0_4_ = local_2e8;
          auVar21._8_4_ = fStack_2e0;
          auVar21._12_4_ = fStack_2dc;
          local_308 = fStack_2e4;
          fStack_300 = fStack_2dc;
          fStack_2fc = fStack_2dc;
          local_2f8._8_4_ = fStack_2e0;
          local_2f8._0_8_ = auVar21._8_8_;
          local_2f8._12_4_ = fStack_2dc;
          fVar78 = local_2e8 - local_328;
          fStack_324 = fStack_2e4 - fStack_324;
          fVar79 = fStack_2e0 - fStack_320;
          fStack_320 = fStack_2dc - fStack_31c;
          fVar70 = (float)(-(uint)(0.0 < local_340) & (uint)(1.0 / local_340));
          auVar48._0_4_ =
               SQRT(fVar71 * fVar71 +
                    (float)local_338._0_4_ * (float)local_338._0_4_ + fStack_314 * fStack_314);
          fVar80 = 1.0 / auVar48._0_4_;
          lVar18 = local_150[0x1e];
          if (*(char *)((longlong)local_150 + 0x111) == '\x01') {
            auVar39 = pmovsxwd(auVar48,*(undefined8 *)(lVar18 + 8 + (ulonglong)uVar31 * 0x10));
            fVar81 = (float)auVar39._0_4_ * 3.051851e-05;
            fVar72 = (float)auVar39._4_4_ * 3.051851e-05;
            fVar36 = (float)auVar39._8_4_ * 3.051851e-05;
            auVar39 = pmovsxwd(auVar66,*(undefined8 *)(lVar18 + 8 + (ulonglong)uVar30 * 0x10));
            auVar64._0_4_ = (float)auVar39._0_4_ * 3.051851e-05;
            auVar64._4_4_ = (float)auVar39._4_4_ * 3.051851e-05;
            auVar64._8_4_ = (float)auVar39._8_4_ * 3.051851e-05;
          }
          else {
            auVar39 = pmovsxbd(auVar48,*(undefined4 *)(lVar18 + 4 + (ulonglong)uVar31 * 8));
            fVar81 = (float)auVar39._0_4_ * 0.007874016;
            fVar72 = (float)auVar39._4_4_ * 0.007874016;
            fVar36 = (float)auVar39._8_4_ * 0.007874016;
            auVar39 = pmovsxbd(auVar66,*(undefined4 *)(lVar18 + 4 + (ulonglong)uVar30 * 8));
            auVar64._0_4_ = (float)auVar39._0_4_ * 0.007874016;
            auVar64._4_4_ = (float)auVar39._4_4_ * 0.007874016;
            auVar64._8_4_ = (float)auVar39._8_4_ * 0.007874016;
          }
          local_328 = fStack_324 * fVar70;
          local_318 = fStack_314 * fVar80;
          local_338._4_4_ = fStack_314;
          local_338._0_4_ = (float)local_338._0_4_ * fVar80;
          fStack_330 = fVar71;
          fStack_32c = fStack_310;
          fVar44 = local_108 * 0.0 + fVar86 * local_118 + fVar74 * local_138 + fVar76 * local_128;
          fVar49 = fStack_104 * 0.0 +
                   fVar86 * fStack_114 + fVar74 * fStack_134 + fVar76 * fStack_124;
          fVar82 = fStack_100 * 0.0 +
                   fVar86 * fStack_110 + fVar74 * fStack_130 + fVar76 * fStack_120;
          fVar83 = 1.0 / SQRT(fVar82 * fVar82 + fVar44 * fVar44 + fVar49 * fVar49);
          fVar86 = local_2d8._0_4_;
          auVar43._4_12_ = local_2d8._4_12_;
          auVar43._0_4_ = fVar86 * auVar64._0_4_ + fVar81 * local_344;
          if (*(char *)((longlong)local_150 + 0x111) == '\0') {
            auVar39 = pmovsxbd(auVar43,*(undefined4 *)(lVar18 + 4 + (ulonglong)uVar24 * 8));
            auVar38._0_4_ = (float)auVar39._0_4_ * 0.007874016;
            auVar38._4_4_ = (float)auVar39._4_4_ * 0.007874016;
            auVar38._8_4_ = (float)auVar39._8_4_ * 0.007874016;
          }
          else {
            auVar39 = pmovsxwd(auVar43,*(undefined8 *)(lVar18 + 8 + (ulonglong)uVar24 * 0x10));
            auVar38._0_4_ = (float)auVar39._0_4_ * 3.051851e-05;
            auVar38._4_4_ = (float)auVar39._4_4_ * 3.051851e-05;
            auVar38._8_4_ = (float)auVar39._8_4_ * 3.051851e-05;
          }
          fVar87 = auVar43._0_4_ + fVar84 * auVar38._0_4_;
          fVar72 = auVar64._4_4_ * fVar86 + fVar72 * local_344 + auVar38._4_4_ * fVar84;
          fVar84 = auVar64._8_4_ * fVar86 + fVar36 * local_344 + auVar38._8_4_ * fVar84;
          fStack_31c = fStack_320;
          fStack_30c = fStack_310;
          fStack_304 = local_308;
          FUN_144a928e2(&local_138,local_158 + 0x40);
          fVar86 = local_108 * 0.0 + fVar84 * local_118 + fVar72 * local_128 + fVar87 * local_138;
          fVar81 = fStack_104 * 0.0 +
                   fVar84 * fStack_114 + fVar72 * fStack_124 + fVar87 * fStack_134;
          fVar72 = fStack_100 * 0.0 +
                   fVar84 * fStack_110 + fVar72 * fStack_120 + fVar87 * fStack_130;
          fVar84 = 1.0 / SQRT(fVar72 * fVar72 + fVar86 * fVar86 + fVar81 * fVar81);
          pfVar1 = local_1f0 + local_1e8;
          *local_1f0 = local_2e8;
          pfVar2 = local_1e0 + local_1d8;
          *local_1e0 = local_308;
          pfVar3 = local_1d0 + local_1c8;
          *local_1d0 = (float)local_2f8._0_4_;
          pfVar4 = local_220 + local_218;
          *local_220 = fVar78 * fVar70;
          pfVar5 = local_210 + local_208;
          *local_210 = local_328;
          pfVar6 = local_200 + local_1f8;
          *local_200 = fVar79 * fVar70;
          pfVar7 = local_250 + local_248;
          *local_250 = fVar84 * fVar86;
          pfVar8 = local_240 + local_238;
          *local_240 = fVar81 * fVar84;
          pfVar9 = local_230 + local_228;
          *local_230 = fVar72 * fVar84;
          pfVar10 = local_280 + local_278;
          *local_280 = fVar83 * fVar44;
          pfVar11 = local_270 + local_268;
          *local_270 = fVar49 * fVar83;
          pfVar12 = local_260 + local_258;
          *local_260 = fVar82 * fVar83;
          pfVar13 = local_2b0 + local_2a8;
          *local_2b0 = (float)local_338._0_4_;
          pfVar14 = local_2a0 + local_298;
          *local_2a0 = local_318;
          pfVar15 = local_290 + local_288;
          *local_290 = fVar71 * fVar80;
          iVar33 = iVar33 + 1;
          piVar27 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar27 = (int *)(param_1 + 0x3c);
          }
          local_2b0 = pfVar13;
          local_2a0 = pfVar14;
          local_290 = pfVar15;
          local_280 = pfVar10;
          local_270 = pfVar11;
          local_260 = pfVar12;
          local_250 = pfVar7;
          local_240 = pfVar8;
          local_230 = pfVar9;
          local_220 = pfVar4;
          local_210 = pfVar5;
          local_200 = pfVar6;
          local_1f0 = pfVar1;
          local_1e0 = pfVar2;
          local_1d0 = pfVar3;
        } while (iVar33 < *piVar27);
      }
      goto LAB_1480bfb88;
    }
  }
  fVar70 = DAT_14c846338;
  fVar86 = DAT_14c846330._4_4_;
  fVar84 = (float)DAT_14c846330;
  FUN_144a928e2(&local_138,local_158 + 0x40);
  fVar71 = fVar70 * local_118 + fVar86 * local_128 + fVar84 * local_138 + local_108;
  fVar78 = fVar70 * fStack_114 + fVar86 * fStack_124 + fVar84 * fStack_134 + fStack_104;
  fVar70 = fVar70 * fStack_110 + fVar86 * fStack_120 + fVar84 * fStack_130 + fStack_100;
  FUN_144a928e2(&local_138,local_158 + 0x140);
  fVar86 = DAT_14c846338;
  fVar84 = (float)DAT_14c846330;
  local_344 = DAT_14c846330._4_4_;
  FUN_144a928e2(&local_138,local_158 + 0xc0);
  fVar89 = local_128 * 0.0 + local_138;
  fVar62 = fStack_124 * 0.0 + fStack_134;
  fVar67 = fStack_120 * 0.0 + fStack_130;
  fVar87 = local_118 * 0.0;
  fVar73 = fStack_114 * 0.0;
  fVar75 = fStack_110 * 0.0;
  fVar79 = local_108 * 0.0;
  fVar80 = fStack_104 * 0.0;
  fVar81 = fStack_100 * 0.0;
  FUN_144a928e2(&local_138,local_158 + 0xc0);
  fVar49 = local_138 * 0.0 + local_128;
  fVar82 = fStack_134 * 0.0 + fStack_124;
  fVar83 = fStack_130 * 0.0 + fStack_120;
  fVar72 = local_118 * 0.0;
  fVar36 = fStack_114 * 0.0;
  fVar44 = fStack_110 * 0.0;
  fVar76 = local_108 * 0.0;
  fVar77 = fStack_104 * 0.0;
  fVar85 = fStack_100 * 0.0;
  FUN_144a928e2(&local_138,local_158 + 0xc0);
  piVar27 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar27 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar27) {
    fVar79 = fVar79 + fVar87 + fVar89;
    fVar80 = fVar80 + fVar73 + fVar62;
    fVar81 = fVar81 + fVar75 + fVar67;
    fVar87 = 1.0 / SQRT(fVar81 * fVar81 + fVar79 * fVar79 + fVar80 * fVar80);
    fVar76 = fVar76 + fVar72 + fVar49;
    fVar77 = fVar77 + fVar36 + fVar82;
    fVar85 = fVar85 + fVar44 + fVar83;
    fVar82 = 1.0 / SQRT(fVar85 * fVar85 + fVar76 * fVar76 + fVar77 * fVar77);
    fVar36 = local_108 * 0.0 + local_128 * 0.0 + local_138 * 0.0 + local_118;
    fVar44 = fStack_104 * 0.0 + fStack_124 * 0.0 + fStack_134 * 0.0 + fStack_114;
    fVar49 = fStack_100 * 0.0 + fStack_120 * 0.0 + fStack_130 * 0.0 + fStack_110;
    local_338._0_4_ = fVar84;
    fVar72 = 1.0 / SQRT(fVar49 * fVar49 + fVar36 * fVar36 + fVar44 * fVar44);
    iVar29 = 0;
    do {
      pfVar1 = local_1f0 + local_1e8;
      *local_1f0 = fVar71;
      pfVar2 = local_1e0 + local_1d8;
      *local_1e0 = fVar78;
      pfVar3 = local_1d0 + local_1c8;
      *local_1d0 = fVar70;
      pfVar4 = local_220 + local_218;
      *local_220 = fVar84;
      pfVar5 = local_210 + local_208;
      *local_210 = local_344;
      pfVar6 = local_200 + local_1f8;
      *local_200 = fVar86;
      pfVar7 = local_250 + local_248;
      *local_250 = fVar72 * fVar36;
      pfVar8 = local_240 + local_238;
      *local_240 = fVar44 * fVar72;
      pfVar9 = local_230 + local_228;
      *local_230 = fVar49 * fVar72;
      pfVar10 = local_280 + local_278;
      *local_280 = fVar82 * fVar76;
      pfVar11 = local_270 + local_268;
      *local_270 = fVar77 * fVar82;
      pfVar12 = local_260 + local_258;
      *local_260 = fVar85 * fVar82;
      pfVar13 = local_2b0 + local_2a8;
      *local_2b0 = fVar87 * fVar79;
      pfVar14 = local_2a0 + local_298;
      *local_2a0 = fVar80 * fVar87;
      pfVar15 = local_290 + local_288;
      *local_290 = fVar81 * fVar87;
      iVar29 = iVar29 + 1;
      piVar27 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar27 = (int *)(param_1 + 0x3c);
      }
      local_2b0 = pfVar13;
      local_2a0 = pfVar14;
      local_290 = pfVar15;
      local_280 = pfVar10;
      local_270 = pfVar11;
      local_260 = pfVar12;
      local_250 = pfVar7;
      local_240 = pfVar8;
      local_230 = pfVar9;
      local_220 = pfVar4;
      local_210 = pfVar5;
      local_200 = pfVar6;
      local_1f0 = pfVar1;
      local_1e0 = pfVar2;
      local_1d0 = pfVar3;
    } while (iVar29 < *piVar27);
  }
LAB_1480bfb88:
  if (local_150 != (undefined8 *)0x0) {
    LOCK();
    piVar27 = (int *)(local_150 + 1);
    *piVar27 = *piVar27 + -1;
    UNLOCK();
    if (*piVar27 == 0) {
      (**(code **)*local_150)(local_150,1);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480bfc2c FUN_1480bfc2c body=1919 status=ok
// SIG undefined FUN_1480bfc2c(void)

void FUN_1480bfc2c(char *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  undefined1 auVar12 [16];
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  uint uVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  int *piVar32;
  uint uVar33;
  int iVar34;
  longlong lVar35;
  float fVar36;
  undefined1 auStack_268 [32];
  float *local_248;
  int local_240;
  float *local_238;
  int local_230;
  float *local_228;
  int local_220;
  undefined4 *local_218;
  int local_210;
  undefined8 *local_208;
  int local_200;
  undefined8 *local_1f8;
  int local_1f0;
  undefined4 *local_1e8;
  int local_1e0;
  undefined8 *local_1d8;
  int local_1d0;
  undefined8 *local_1c8;
  int local_1c0;
  undefined8 *local_1b8;
  int local_1b0;
  float *local_1a8;
  int local_1a0;
  float *local_198;
  int local_190;
  float *local_188;
  int local_180;
  uint *local_178;
  undefined8 uStack_170;
  int local_168;
  undefined1 local_160 [8];
  longlong local_158;
  undefined8 *local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [72];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_1405c93a6(local_160,param_1);
  local_150 = (undefined8 *)0x0;
  puVar30 = (undefined8 *)FUN_1405c943a(local_158,local_148);
  puVar2 = local_150;
  puVar13 = local_150;
  if (local_150 != puVar30) {
    if (puVar30 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar30 + 1) = *(int *)(puVar30 + 1) + 1;
      UNLOCK();
    }
    puVar13 = puVar30;
    if (local_150 != (undefined8 *)0x0) {
      LOCK();
      piVar32 = (int *)(local_150 + 1);
      *piVar32 = *piVar32 + -1;
      UNLOCK();
      if (*piVar32 == 0) {
        puVar13 = (undefined8 *)*local_150;
        local_150 = puVar30;
        (*(code *)*puVar13)(puVar2,1);
        puVar13 = local_150;
      }
    }
  }
  local_150 = puVar13;
  local_178 = (uint *)0x0;
  uStack_170 = 0;
  local_168 = 0;
  FUN_144a98d08(&local_178,param_1);
  FUN_144a76c20(&local_1a8,param_1);
  FUN_144a76c20(&local_198,param_1);
  FUN_144a76c20(&local_188,param_1);
  FUN_144a76c20(&local_1e8,param_1);
  FUN_144a76c20(&local_1d8,param_1);
  FUN_144a76c20(&local_1c8,param_1);
  FUN_144a76c20(&local_1b8,param_1);
  FUN_144a76c20(&local_218,param_1);
  FUN_144a76c20(&local_208,param_1);
  FUN_144a76c20(&local_1f8,param_1);
  FUN_144a76c20(&local_248,param_1);
  FUN_144a76c20(&local_238,param_1);
  FUN_144a76c20(&local_228,param_1);
  fVar18 = DAT_14c846338;
  fVar17 = DAT_14c846330._4_4_;
  fVar16 = (float)DAT_14c846330;
  if (*(int *)(local_158 + 0x3b8) < 1) {
    FUN_144a928e2(local_138,local_158 + 0x40);
    uVar28 = DAT_14c846358;
    uVar27 = DAT_14c846350._4_4_;
    uVar26 = (undefined4)DAT_14c846350;
    uVar25 = DAT_14c84634c;
    uVar24 = DAT_14c846348;
    uVar23 = DAT_14c846344;
    uVar22 = DAT_14c84633c._4_4_;
    FUN_144a928e2(local_138,local_158 + 0xc0);
    fVar21 = DAT_14c846338;
    fVar20 = DAT_14c846330._4_4_;
    fVar19 = (float)DAT_14c846330;
    piVar32 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar32 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar32) {
      iVar34 = 0;
      do {
        pfVar11 = local_1a8 + local_1a0;
        *local_1a8 = fVar16;
        pfVar3 = local_198 + local_190;
        *local_198 = fVar17;
        pfVar4 = local_188 + local_180;
        *local_188 = fVar18;
        puVar1 = local_1e8 + local_1e0;
        *local_1e8 = uVar22;
        puVar2 = (undefined8 *)((longlong)local_1d8 + (longlong)local_1d0 * 4);
        *(undefined4 *)local_1d8 = uVar23;
        puVar13 = (undefined8 *)((longlong)local_1c8 + (longlong)local_1c0 * 4);
        *(undefined4 *)local_1c8 = uVar24;
        puVar30 = (undefined8 *)((longlong)local_1b8 + (longlong)local_1b0 * 4);
        *(undefined4 *)local_1b8 = uVar25;
        puVar5 = local_218 + local_210;
        *local_218 = uVar26;
        puVar6 = (undefined8 *)((longlong)local_208 + (longlong)local_200 * 4);
        *(undefined4 *)local_208 = uVar27;
        puVar7 = (undefined8 *)((longlong)local_1f8 + (longlong)local_1f0 * 4);
        *(undefined4 *)local_1f8 = uVar28;
        pfVar8 = local_248 + local_240;
        *local_248 = fVar19;
        pfVar9 = local_238 + local_230;
        *local_238 = fVar20;
        pfVar10 = local_228 + local_220;
        *local_228 = fVar21;
        iVar34 = iVar34 + 1;
        piVar32 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar32 = (int *)(param_1 + 0x3c);
        }
        local_248 = pfVar8;
        local_238 = pfVar9;
        local_228 = pfVar10;
        local_218 = puVar5;
        local_208 = puVar6;
        local_1f8 = puVar7;
        local_1e8 = puVar1;
        local_1d8 = puVar2;
        local_1c8 = puVar13;
        local_1b8 = puVar30;
        local_1a8 = pfVar11;
        local_198 = pfVar3;
        local_188 = pfVar4;
      } while (iVar34 < *piVar32);
    }
  }
  else {
    piVar32 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar32 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar32) {
      uVar33 = *(int *)(local_158 + 0x3b8) - 1;
      iVar34 = 0;
      do {
        uVar29 = *local_178;
        if ((int)uVar33 <= (int)*local_178) {
          uVar29 = uVar33;
        }
        uVar31 = (ulonglong)uVar29;
        if ((int)uVar29 < 1) {
          uVar31 = 0;
        }
        lVar14 = *(longlong *)(local_158 + 0x3b0);
        lVar35 = uVar31 * 0x30;
        pfVar11 = (float *)(lVar14 + 0x10 + lVar35);
        fVar16 = *pfVar11;
        fVar17 = pfVar11[1];
        fVar18 = pfVar11[2];
        local_178 = local_178 + local_168;
        FUN_144a928e2(local_138,local_158 + 0x40);
        pfVar11 = (float *)(lVar14 + 0x10 + lVar35);
        fVar19 = *pfVar11;
        fVar20 = pfVar11[1];
        fVar21 = pfVar11[2];
        FUN_144a928e2(local_138,local_158 + 0x140);
        fVar36 = (float)(-(uint)(0.0 < *(float *)(local_158 + 0x2f0)) &
                        (uint)(1.0 / *(float *)(local_158 + 0x2f0)));
        auVar12 = *(undefined1 (*) [16])(lVar14 + 0x10 + lVar35);
        FUN_144a928e2(local_138,local_158 + 0x40);
        *local_1a8 = auVar12._0_4_;
        uVar15 = extractps(auVar12,1);
        *(undefined8 *)local_198 = uVar15;
        uVar15 = extractps(auVar12,2);
        *(undefined8 *)local_188 = uVar15;
        auVar12 = *(undefined1 (*) [16])(lVar14 + lVar35);
        *local_1e8 = auVar12._0_4_;
        uVar15 = extractps(auVar12,1);
        *local_1d8 = uVar15;
        uVar15 = extractps(auVar12,2);
        *local_1c8 = uVar15;
        uVar15 = extractps(auVar12,3);
        *local_1b8 = uVar15;
        auVar12 = *(undefined1 (*) [16])(lVar14 + 0x20 + lVar35);
        local_1e8 = local_1e8 + local_1e0;
        local_1d8 = (undefined8 *)((longlong)local_1d8 + (longlong)local_1d0 * 4);
        local_1c8 = (undefined8 *)((longlong)local_1c8 + (longlong)local_1c0 * 4);
        local_1b8 = (undefined8 *)((longlong)local_1b8 + (longlong)local_1b0 * 4);
        local_1a8 = local_1a8 + local_1a0;
        local_198 = local_198 + local_190;
        local_188 = local_188 + local_180;
        FUN_144a928e2(local_138,local_158 + 0xc0);
        puVar1 = local_218 + local_210;
        *local_218 = auVar12._0_4_;
        puVar2 = (undefined8 *)((longlong)local_208 + (longlong)local_200 * 4);
        uVar15 = extractps(auVar12,1);
        *local_208 = uVar15;
        puVar13 = (undefined8 *)((longlong)local_1f8 + (longlong)local_1f0 * 4);
        uVar15 = extractps(auVar12,2);
        *local_1f8 = uVar15;
        pfVar11 = local_248 + local_240;
        *local_248 = fVar36 * (fVar16 - fVar19);
        pfVar3 = local_238 + local_230;
        *local_238 = (fVar17 - fVar20) * fVar36;
        pfVar4 = local_228 + local_220;
        *local_228 = (fVar18 - fVar21) * fVar36;
        iVar34 = iVar34 + 1;
        piVar32 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar32 = (int *)(param_1 + 0x3c);
        }
        local_248 = pfVar11;
        local_238 = pfVar3;
        local_228 = pfVar4;
        local_218 = puVar1;
        local_208 = puVar2;
        local_1f8 = puVar13;
      } while (iVar34 < *piVar32);
    }
  }
  if (local_150 != (undefined8 *)0x0) {
    LOCK();
    piVar32 = (int *)(local_150 + 1);
    *piVar32 = *piVar32 + -1;
    UNLOCK();
    if (*piVar32 == 0) {
      (**(code **)*local_150)(local_150,1);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480c03ac FUN_1480c03ac body=2520 status=ok
// SIG undefined FUN_1480c03ac(void)

void FUN_1480c03ac(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 *puVar28;
  uint uVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  int *piVar32;
  uint uVar33;
  int iVar34;
  longlong lVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStack_258 [32];
  float *local_238;
  int local_230;
  float *local_228;
  int local_220;
  float *local_218;
  int local_210;
  float *local_208;
  int local_200;
  float *local_1f8;
  int local_1f0;
  float *local_1e8;
  int local_1e0;
  float *local_1d8;
  int local_1d0;
  float *local_1c8;
  int local_1c0;
  float *local_1b8;
  int local_1b0;
  float *local_1a8;
  int local_1a0;
  float *local_198;
  int local_190;
  float *local_188;
  int local_180;
  float *local_178;
  int local_170;
  uint *local_168;
  undefined8 uStack_160;
  int local_158;
  undefined1 local_150 [8];
  longlong local_148;
  undefined8 *local_140;
  undefined1 local_138 [16];
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_1405c93a6(local_150,param_1);
  local_140 = (undefined8 *)0x0;
  puVar30 = (undefined8 *)FUN_1405c943a(local_148,local_138);
  puVar28 = local_140;
  puVar14 = local_140;
  if (local_140 != puVar30) {
    if (puVar30 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar30 + 1) = *(int *)(puVar30 + 1) + 1;
      UNLOCK();
    }
    puVar14 = puVar30;
    if (local_140 != (undefined8 *)0x0) {
      LOCK();
      piVar32 = (int *)(local_140 + 1);
      *piVar32 = *piVar32 + -1;
      UNLOCK();
      if (*piVar32 == 0) {
        puVar14 = (undefined8 *)*local_140;
        local_140 = puVar30;
        (*(code *)*puVar14)(puVar28,1);
        puVar14 = local_140;
      }
    }
  }
  local_140 = puVar14;
  local_168 = (uint *)0x0;
  uStack_160 = 0;
  local_158 = 0;
  FUN_144a98d08(&local_168,param_1);
  FUN_144a76c20(&local_198,param_1);
  FUN_144a76c20(&local_188,param_1);
  FUN_144a76c20(&local_178,param_1);
  FUN_144a76c20(&local_1d8,param_1);
  FUN_144a76c20(&local_1c8,param_1);
  FUN_144a76c20(&local_1b8,param_1);
  FUN_144a76c20(&local_1a8,param_1);
  FUN_144a76c20(&local_208,param_1);
  FUN_144a76c20(&local_1f8,param_1);
  FUN_144a76c20(&local_1e8,param_1);
  FUN_144a76c20(&local_238,param_1);
  FUN_144a76c20(&local_228,param_1);
  FUN_144a76c20(&local_218,param_1);
  fVar25 = DAT_14c846338;
  fVar24 = DAT_14c846330._4_4_;
  fVar49 = (float)DAT_14c846330;
  if (*(int *)(local_148 + 0x3b8) < 1) {
    FUN_144a928e2(&local_128,local_148 + 0x40);
    fVar41 = DAT_14c846358;
    fVar40 = DAT_14c846350._4_4_;
    fVar39 = (float)DAT_14c846350;
    fVar38 = DAT_14c84634c;
    fVar37 = DAT_14c846348;
    fVar36 = DAT_14c846344;
    fVar27 = DAT_14c84633c._4_4_;
    fVar42 = fVar25 * local_108 + fVar24 * local_118 + fVar49 * local_128 + local_f8;
    fVar43 = fVar25 * fStack_104 + fVar24 * fStack_114 + fVar49 * fStack_124 + fStack_f4;
    fVar45 = fVar25 * fStack_100 + fVar24 * fStack_110 + fVar49 * fStack_120 + fStack_f0;
    fVar49 = *(float *)(local_148 + 0x2d0);
    fVar24 = *(float *)(local_148 + 0x2d4);
    fVar25 = *(float *)(local_148 + 0x2d8);
    fVar44 = *(float *)(local_148 + 0x2dc);
    FUN_144a928e2(&local_128,local_148 + 0xc0);
    fVar26 = DAT_14c846338;
    fVar48 = DAT_14c846330._4_4_;
    fVar46 = (float)DAT_14c846330;
    piVar32 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar32 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar32) {
      iVar34 = 0;
      do {
        pfVar13 = local_198 + local_190;
        *local_198 = fVar42;
        pfVar1 = local_188 + local_180;
        *local_188 = fVar43;
        pfVar2 = local_178 + local_170;
        *local_178 = fVar45;
        pfVar3 = local_1d8 + local_1d0;
        *local_1d8 = fVar49 * fVar38 * 1.0 + fVar44 * fVar27 + fVar24 * fVar37 * 1.0 +
                     fVar25 * fVar36 * -1.0;
        pfVar4 = local_1c8 + local_1c0;
        *local_1c8 = fVar49 * fVar37 * -1.0 + fVar44 * fVar36 + fVar24 * fVar38 * 1.0 +
                     fVar25 * fVar27 * 1.0;
        pfVar5 = local_1b8 + local_1b0;
        *local_1b8 = fVar49 * fVar36 * 1.0 + fVar44 * fVar37 + fVar24 * fVar27 * -1.0 +
                     fVar25 * fVar38 * 1.0;
        pfVar6 = local_1a8 + local_1a0;
        *local_1a8 = fVar49 * fVar27 * -1.0 + fVar44 * fVar38 + fVar24 * fVar36 * -1.0 +
                     fVar25 * fVar37 * -1.0;
        pfVar7 = local_208 + local_200;
        *local_208 = local_f8 * 0.0 + fVar41 * local_108 + fVar40 * local_118 + fVar39 * local_128;
        pfVar8 = local_1f8 + local_1f0;
        *local_1f8 = fStack_f4 * 0.0 +
                     fVar41 * fStack_104 + fVar40 * fStack_114 + fVar39 * fStack_124;
        pfVar9 = local_1e8 + local_1e0;
        *local_1e8 = fStack_f0 * 0.0 +
                     fVar41 * fStack_100 + fVar40 * fStack_110 + fVar39 * fStack_120;
        pfVar10 = local_238 + local_230;
        *local_238 = fVar46;
        pfVar11 = local_228 + local_220;
        *local_228 = fVar48;
        pfVar12 = local_218 + local_210;
        *local_218 = fVar26;
        iVar34 = iVar34 + 1;
        piVar32 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar32 = (int *)(param_1 + 0x3c);
        }
        local_238 = pfVar10;
        local_228 = pfVar11;
        local_218 = pfVar12;
        local_208 = pfVar7;
        local_1f8 = pfVar8;
        local_1e8 = pfVar9;
        local_1d8 = pfVar3;
        local_1c8 = pfVar4;
        local_1b8 = pfVar5;
        local_1a8 = pfVar6;
        local_198 = pfVar13;
        local_188 = pfVar1;
        local_178 = pfVar2;
      } while (iVar34 < *piVar32);
    }
  }
  else {
    piVar32 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar32 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar32) {
      uVar33 = *(int *)(local_148 + 0x3b8) - 1;
      iVar34 = 0;
      do {
        uVar29 = *local_168;
        if ((int)uVar33 <= (int)*local_168) {
          uVar29 = uVar33;
        }
        uVar31 = (ulonglong)uVar29;
        if ((int)uVar29 < 1) {
          uVar31 = 0;
        }
        lVar15 = *(longlong *)(local_148 + 0x3b0);
        lVar35 = uVar31 * 0x30;
        pfVar13 = (float *)(lVar15 + 0x10 + lVar35);
        fVar49 = *pfVar13;
        fVar24 = pfVar13[1];
        fVar25 = pfVar13[2];
        local_168 = local_168 + local_158;
        FUN_144a928e2(&local_128,local_148 + 0x40);
        fVar43 = fVar25 * local_108 + fVar24 * local_118 + fVar49 * local_128 + local_f8;
        fVar45 = fVar25 * fStack_104 + fVar24 * fStack_114 + fVar49 * fStack_124 + fStack_f4;
        fVar47 = fVar25 * fStack_100 + fVar24 * fStack_110 + fVar49 * fStack_120 + fStack_f0;
        pfVar13 = (float *)(lVar15 + 0x10 + lVar35);
        fVar49 = *pfVar13;
        fVar24 = pfVar13[1];
        fVar25 = pfVar13[2];
        FUN_144a928e2(&local_128,local_148 + 0x140);
        fVar39 = fVar25 * local_108 + fVar24 * local_118 + fVar49 * local_128 + local_f8;
        fVar40 = fVar25 * fStack_104 + fVar24 * fStack_114 + fVar49 * fStack_124 + fStack_f4;
        fVar41 = fVar25 * fStack_100 + fVar24 * fStack_110 + fVar49 * fStack_120 + fStack_f0;
        fVar42 = (float)(-(uint)(0.0 < *(float *)(local_148 + 0x2f0)) &
                        (uint)(1.0 / *(float *)(local_148 + 0x2f0)));
        pfVar13 = (float *)(lVar15 + 0x10 + lVar35);
        fVar49 = *pfVar13;
        fVar24 = pfVar13[1];
        fVar25 = pfVar13[2];
        FUN_144a928e2(&local_128,local_148 + 0x40);
        fVar44 = fVar25 * local_108 + fVar24 * local_118 + fVar49 * local_128 + local_f8;
        fVar46 = fVar25 * fStack_104 + fVar24 * fStack_114 + fVar49 * fStack_124 + fStack_f4;
        fVar48 = fVar25 * fStack_100 + fVar24 * fStack_110 + fVar49 * fStack_120 + fStack_f0;
        fVar49 = fVar25 * fStack_fc + fVar24 * fStack_10c + fVar49 * fStack_11c + fStack_ec;
        *local_198 = fVar44;
        auVar22._4_4_ = fVar46;
        auVar22._0_4_ = fVar44;
        auVar22._8_4_ = fVar48;
        auVar22._12_4_ = fVar49;
        uVar16 = extractps(auVar22,1);
        *(undefined8 *)local_188 = uVar16;
        auVar23._4_4_ = fVar46;
        auVar23._0_4_ = fVar44;
        auVar23._8_4_ = fVar48;
        auVar23._12_4_ = fVar49;
        uVar16 = extractps(auVar23,2);
        *(undefined8 *)local_178 = uVar16;
        pfVar13 = (float *)(lVar15 + lVar35);
        fVar49 = *pfVar13;
        fVar24 = pfVar13[1];
        fVar25 = pfVar13[2];
        fVar44 = pfVar13[3];
        fVar46 = *(float *)(local_148 + 0x2d0);
        fVar48 = *(float *)(local_148 + 0x2d4);
        fVar26 = *(float *)(local_148 + 0x2d8);
        fVar27 = *(float *)(local_148 + 0x2dc);
        fVar36 = fVar26 * fVar24 * -1.0 +
                 fVar48 * fVar25 * 1.0 + fVar46 * fVar44 * 1.0 + fVar27 * fVar49;
        fVar37 = fVar26 * fVar49 * 1.0 +
                 fVar48 * fVar44 * 1.0 + fVar46 * fVar25 * -1.0 + fVar27 * fVar24;
        fVar38 = fVar26 * fVar44 * 1.0 +
                 fVar48 * fVar49 * -1.0 + fVar46 * fVar24 * 1.0 + fVar27 * fVar25;
        fVar49 = fVar26 * fVar25 * -1.0 +
                 fVar48 * fVar24 * -1.0 + fVar46 * fVar49 * -1.0 + fVar27 * fVar44;
        *local_1d8 = fVar36;
        auVar17._4_4_ = fVar37;
        auVar17._0_4_ = fVar36;
        auVar17._8_4_ = fVar38;
        auVar17._12_4_ = fVar49;
        uVar16 = extractps(auVar17,1);
        *(undefined8 *)local_1c8 = uVar16;
        auVar18._4_4_ = fVar37;
        auVar18._0_4_ = fVar36;
        auVar18._8_4_ = fVar38;
        auVar18._12_4_ = fVar49;
        uVar16 = extractps(auVar18,2);
        *(undefined8 *)local_1b8 = uVar16;
        auVar19._4_4_ = fVar37;
        auVar19._0_4_ = fVar36;
        auVar19._8_4_ = fVar38;
        auVar19._12_4_ = fVar49;
        uVar16 = extractps(auVar19,3);
        *(undefined8 *)local_1a8 = uVar16;
        pfVar13 = (float *)(lVar15 + 0x20 + lVar35);
        fVar49 = *pfVar13;
        fVar24 = pfVar13[1];
        fVar25 = pfVar13[2];
        local_1d8 = local_1d8 + local_1d0;
        local_1c8 = local_1c8 + local_1c0;
        local_1b8 = local_1b8 + local_1b0;
        local_1a8 = local_1a8 + local_1a0;
        local_198 = local_198 + local_190;
        local_188 = local_188 + local_180;
        local_178 = local_178 + local_170;
        FUN_144a928e2(&local_128,local_148 + 0xc0);
        fVar44 = local_f8 * 0.0 + fVar25 * local_108 + fVar24 * local_118 + fVar49 * local_128;
        fVar46 = fStack_f4 * 0.0 + fVar25 * fStack_104 + fVar24 * fStack_114 + fVar49 * fStack_124;
        fVar48 = fStack_f0 * 0.0 + fVar25 * fStack_100 + fVar24 * fStack_110 + fVar49 * fStack_120;
        fVar49 = fStack_ec * 0.0 + fVar25 * fStack_fc + fVar24 * fStack_10c + fVar49 * fStack_11c;
        pfVar13 = local_208 + local_200;
        *local_208 = fVar44;
        pfVar1 = local_1f8 + local_1f0;
        auVar20._4_4_ = fVar46;
        auVar20._0_4_ = fVar44;
        auVar20._8_4_ = fVar48;
        auVar20._12_4_ = fVar49;
        uVar16 = extractps(auVar20,1);
        *(undefined8 *)local_1f8 = uVar16;
        pfVar2 = local_1e8 + local_1e0;
        auVar21._4_4_ = fVar46;
        auVar21._0_4_ = fVar44;
        auVar21._8_4_ = fVar48;
        auVar21._12_4_ = fVar49;
        uVar16 = extractps(auVar21,2);
        *(undefined8 *)local_1e8 = uVar16;
        pfVar3 = local_238 + local_230;
        *local_238 = fVar42 * (fVar43 - fVar39);
        pfVar4 = local_228 + local_220;
        *local_228 = (fVar45 - fVar40) * fVar42;
        pfVar5 = local_218 + local_210;
        *local_218 = (fVar47 - fVar41) * fVar42;
        iVar34 = iVar34 + 1;
        piVar32 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar32 = (int *)(param_1 + 0x3c);
        }
        local_238 = pfVar3;
        local_228 = pfVar4;
        local_218 = pfVar5;
        local_208 = pfVar13;
        local_1f8 = pfVar1;
        local_1e8 = pfVar2;
      } while (iVar34 < *piVar32);
    }
  }
  if (local_140 != (undefined8 *)0x0) {
    LOCK();
    piVar32 = (int *)(local_140 + 1);
    *piVar32 = *piVar32 + -1;
    UNLOCK();
    if (*piVar32 == 0) {
      (**(code **)*local_140)(local_140,1);
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480c0d86 FUN_1480c0d86 body=2994 status=ok
// SIG undefined FUN_1480c0d86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480c0d86(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float fVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  int *piVar22;
  longlong lVar23;
  uint uVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auStack_2f8 [32];
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float *local_298;
  int local_290;
  float *local_288;
  int local_280;
  float *local_278;
  int local_270;
  float *local_268;
  int local_260;
  float *local_258;
  int local_250;
  float *local_248;
  int local_240;
  float *local_238;
  int local_230;
  float *local_228;
  int local_220;
  float *local_218;
  int local_210;
  float *local_208;
  int local_200;
  float *local_1f8;
  int local_1f0;
  float *local_1e8;
  int local_1e0;
  float *local_1d8;
  int local_1d0;
  float *local_1c8;
  undefined8 uStack_1c0;
  int local_1b8;
  uint *local_1a8;
  undefined8 uStack_1a0;
  int local_198;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined1 local_160 [8];
  longlong local_158;
  undefined8 *local_150;
  undefined1 local_148 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  FUN_1405c93a6(local_160,param_1);
  local_150 = (undefined8 *)0x0;
  puVar20 = (undefined8 *)FUN_1405c943a(local_158,local_148);
  puVar18 = local_150;
  puVar15 = local_150;
  if (local_150 != puVar20) {
    if (puVar20 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
      UNLOCK();
    }
    puVar15 = puVar20;
    if (local_150 != (undefined8 *)0x0) {
      LOCK();
      piVar22 = (int *)(local_150 + 1);
      *piVar22 = *piVar22 + -1;
      UNLOCK();
      if (*piVar22 == 0) {
        puVar15 = (undefined8 *)*local_150;
        local_150 = puVar20;
        (*(code *)*puVar15)(puVar18,1);
        puVar15 = local_150;
      }
    }
  }
  local_150 = puVar15;
  local_198 = 0;
  local_1a8 = (uint *)0x0;
  uStack_1a0 = 0;
  FUN_144a98d08(&local_1a8,param_1);
  local_1b8 = 0;
  local_1c8 = (float *)0x0;
  uStack_1c0 = 0;
  FUN_144a98dce(&local_1c8,param_1);
  FUN_144a76c20(&local_1f8,param_1);
  FUN_144a76c20(&local_1e8,param_1);
  FUN_144a76c20(&local_1d8,param_1);
  FUN_144a76c20(&local_238,param_1);
  FUN_144a76c20(&local_228,param_1);
  FUN_144a76c20(&local_218,param_1);
  FUN_144a76c20(&local_208,param_1);
  FUN_144a76c20(&local_268,param_1);
  FUN_144a76c20(&local_258,param_1);
  FUN_144a76c20(&local_248,param_1);
  FUN_144a76c20(&local_298,param_1);
  FUN_144a76c20(&local_288,param_1);
  FUN_144a76c20(&local_278,param_1);
  fVar30 = DAT_14c846338;
  fVar27 = DAT_14c846330._4_4_;
  fVar14 = (float)DAT_14c846330;
  if (*(int *)(local_158 + 0x3b8) < 1) {
    FUN_144a928e2(&local_138,local_158 + 0x40);
    fVar42 = DAT_14c846358;
    fVar38 = DAT_14c846350._4_4_;
    fVar41 = (float)DAT_14c846350;
    fVar37 = DAT_14c84634c;
    fVar32 = DAT_14c846348;
    fVar31 = DAT_14c846344;
    fVar29 = DAT_14c84633c._4_4_;
    fVar40 = fVar30 * local_118 + fVar27 * local_128 + fVar14 * local_138 + local_108;
    fVar43 = fVar30 * fStack_114 + fVar27 * fStack_124 + fVar14 * fStack_134 + fStack_104;
    fVar44 = fVar30 * fStack_110 + fVar27 * fStack_120 + fVar14 * fStack_130 + fStack_100;
    fVar14 = *(float *)(local_158 + 0x2d0);
    fVar27 = *(float *)(local_158 + 0x2d4);
    fVar30 = *(float *)(local_158 + 0x2d8);
    fVar33 = *(float *)(local_158 + 0x2dc);
    FUN_144a928e2(&local_138,local_158 + 0xc0);
    fVar28 = DAT_14c846338;
    fVar26 = DAT_14c846330._4_4_;
    fVar39 = (float)DAT_14c846330;
    piVar22 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar22 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar22) {
      iVar25 = 0;
      do {
        pfVar13 = local_1f8 + local_1f0;
        *local_1f8 = fVar40;
        pfVar1 = local_1e8 + local_1e0;
        *local_1e8 = fVar43;
        pfVar2 = local_1d8 + local_1d0;
        *local_1d8 = fVar44;
        pfVar3 = local_238 + local_230;
        *local_238 = fVar14 * fVar37 * 1.0 + fVar33 * fVar29 + fVar27 * fVar32 * 1.0 +
                     fVar30 * fVar31 * -1.0;
        pfVar4 = local_228 + local_220;
        *local_228 = fVar14 * fVar32 * -1.0 + fVar33 * fVar31 + fVar27 * fVar37 * 1.0 +
                     fVar30 * fVar29 * 1.0;
        pfVar5 = local_218 + local_210;
        *local_218 = fVar14 * fVar31 * 1.0 + fVar33 * fVar32 + fVar27 * fVar29 * -1.0 +
                     fVar30 * fVar37 * 1.0;
        pfVar6 = local_208 + local_200;
        *local_208 = fVar14 * fVar29 * -1.0 + fVar33 * fVar37 + fVar27 * fVar31 * -1.0 +
                     fVar30 * fVar32 * -1.0;
        pfVar7 = local_268 + local_260;
        *local_268 = local_108 * 0.0 + fVar42 * local_118 + fVar38 * local_128 + fVar41 * local_138;
        pfVar8 = local_258 + local_250;
        *local_258 = fStack_104 * 0.0 +
                     fVar42 * fStack_114 + fVar38 * fStack_124 + fVar41 * fStack_134;
        pfVar9 = local_248 + local_240;
        *local_248 = fStack_100 * 0.0 +
                     fVar42 * fStack_110 + fVar38 * fStack_120 + fVar41 * fStack_130;
        pfVar10 = local_298 + local_290;
        *local_298 = fVar39;
        pfVar11 = local_288 + local_280;
        *local_288 = fVar26;
        pfVar12 = local_278 + local_270;
        *local_278 = fVar28;
        iVar25 = iVar25 + 1;
        piVar22 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar22 = (int *)(param_1 + 0x3c);
        }
        local_298 = pfVar10;
        local_288 = pfVar11;
        local_278 = pfVar12;
        local_268 = pfVar7;
        local_258 = pfVar8;
        local_248 = pfVar9;
        local_238 = pfVar3;
        local_228 = pfVar4;
        local_218 = pfVar5;
        local_208 = pfVar6;
        local_1f8 = pfVar13;
        local_1e8 = pfVar1;
        local_1d8 = pfVar2;
      } while (iVar25 < *piVar22);
    }
  }
  else {
    piVar22 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar22 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar22) {
      uVar24 = *(int *)(local_158 + 0x3b8) - 1;
      iVar25 = 0;
      do {
        uVar19 = *local_1a8;
        if ((int)uVar24 <= (int)*local_1a8) {
          uVar19 = uVar24;
        }
        uVar21 = (ulonglong)uVar19;
        if ((int)uVar19 < 1) {
          uVar21 = 0;
        }
        fVar14 = *local_1c8;
        lVar16 = *(longlong *)(local_158 + 0x3b0);
        lVar23 = uVar21 * 0x30;
        pfVar13 = (float *)(lVar16 + 0x10 + lVar23);
        fVar27 = *pfVar13;
        fVar30 = pfVar13[1];
        fVar33 = pfVar13[2];
        local_1c8 = local_1c8 + local_1b8;
        local_1a8 = local_1a8 + local_198;
        FUN_144a928e2(&local_138,local_158 + 0x140);
        fVar40 = fVar33 * local_118 + fVar30 * local_128 + fVar27 * local_138 + local_108;
        fVar41 = fVar33 * fStack_114 + fVar30 * fStack_124 + fVar27 * fStack_134 + fStack_104;
        fVar42 = fVar33 * fStack_110 + fVar30 * fStack_120 + fVar27 * fStack_130 + fStack_100;
        fStack_2b4 = fVar33 * fStack_10c + fVar30 * fStack_11c + fVar27 * fStack_12c + fStack_fc;
        pfVar13 = (float *)(lVar16 + 0x10 + lVar23);
        fVar27 = *pfVar13;
        fVar30 = pfVar13[1];
        fVar33 = pfVar13[2];
        local_2b8 = fVar42;
        fStack_2b0 = fVar42;
        fStack_2ac = fStack_2b4;
        local_2a8 = fVar41;
        fStack_2a4 = fVar41;
        fStack_2a0 = fStack_2b4;
        fStack_29c = fStack_2b4;
        FUN_144a928e2(&local_138,local_158 + 0x40);
        fVar49 = fVar33 * local_118 + fVar30 * local_128 + fVar27 * local_138 + local_108;
        fVar50 = fVar33 * fStack_114 + fVar30 * fStack_124 + fVar27 * fStack_134 + fStack_104;
        fVar51 = fVar33 * fStack_110 + fVar30 * fStack_120 + fVar27 * fStack_130 + fStack_100;
        pfVar13 = (float *)(lVar16 + lVar23);
        fVar27 = *pfVar13;
        fVar30 = pfVar13[1];
        fVar33 = pfVar13[2];
        fVar39 = pfVar13[3];
        fVar26 = *(float *)(local_158 + 0x2e0);
        fVar28 = *(float *)(local_158 + 0x2e4);
        fVar29 = *(float *)(local_158 + 0x2e8);
        fVar31 = *(float *)(local_158 + 0x2ec);
        local_178 = fVar29 * fVar30 * -1.0 +
                    fVar28 * fVar33 * 1.0 + fVar26 * fVar39 * 1.0 + fVar31 * fVar27;
        fStack_174 = fVar29 * fVar27 * 1.0 +
                     fVar28 * fVar39 * 1.0 + fVar26 * fVar33 * -1.0 + fVar31 * fVar30;
        fStack_170 = fVar29 * fVar39 * 1.0 +
                     fVar28 * fVar27 * -1.0 + fVar26 * fVar30 * 1.0 + fVar31 * fVar33;
        fStack_16c = fVar29 * fVar33 * -1.0 +
                     fVar28 * fVar30 * -1.0 + fVar26 * fVar27 * -1.0 + fVar31 * fVar39;
        pfVar13 = (float *)(lVar16 + lVar23);
        fVar27 = *pfVar13;
        fVar30 = pfVar13[1];
        fVar33 = pfVar13[2];
        fVar39 = pfVar13[3];
        fVar26 = *(float *)(local_158 + 0x2d0);
        fVar28 = *(float *)(local_158 + 0x2d4);
        fVar29 = *(float *)(local_158 + 0x2d8);
        fVar31 = *(float *)(local_158 + 0x2dc);
        local_188 = fVar29 * fVar30 * -1.0 +
                    fVar28 * fVar33 * 1.0 + fVar26 * fVar39 * 1.0 + fVar31 * fVar27;
        fStack_184 = fVar29 * fVar27 * 1.0 +
                     fVar28 * fVar39 * 1.0 + fVar26 * fVar33 * -1.0 + fVar31 * fVar30;
        fStack_180 = fVar29 * fVar39 * 1.0 +
                     fVar28 * fVar27 * -1.0 + fVar26 * fVar30 * 1.0 + fVar31 * fVar33;
        fStack_17c = fVar29 * fVar33 * -1.0 +
                     fVar28 * fVar30 * -1.0 + fVar26 * fVar27 * -1.0 + fVar31 * fVar39;
        pfVar13 = (float *)(lVar16 + 0x20 + lVar23);
        fVar27 = *pfVar13;
        fVar30 = pfVar13[1];
        fVar33 = pfVar13[2];
        FUN_144a928e2(&local_138,local_158 + 0x1c0);
        fVar46 = local_108 * 0.0 + fVar33 * local_118 + fVar30 * local_128 + fVar27 * local_138;
        fVar47 = fStack_104 * 0.0 + fVar33 * fStack_114 + fVar30 * fStack_124 + fVar27 * fStack_134;
        fVar48 = fStack_100 * 0.0 + fVar33 * fStack_110 + fVar30 * fStack_120 + fVar27 * fStack_130;
        fStack_2d0 = fStack_fc * 0.0 +
                     fVar33 * fStack_10c + fVar30 * fStack_11c + fVar27 * fStack_12c;
        pfVar13 = (float *)(lVar16 + 0x20 + lVar23);
        fVar30 = *pfVar13;
        fVar33 = pfVar13[1];
        fVar39 = pfVar13[2];
        local_2d8 = fVar47;
        fStack_2d4 = fVar47;
        fStack_2cc = fStack_2d0;
        local_2c8 = fVar48;
        fStack_2c4 = fStack_2d0;
        fStack_2c0 = fVar48;
        fStack_2bc = fStack_2d0;
        FUN_144a928e2(&local_138,local_158 + 0xc0);
        fVar26 = fVar30 * local_138;
        fVar28 = fVar30 * fStack_134;
        fVar30 = fVar30 * fStack_130;
        fVar31 = fVar33 * local_128;
        fVar32 = fVar33 * fStack_124;
        fVar33 = fVar33 * fStack_120;
        fVar37 = fVar39 * local_118;
        fVar38 = fVar39 * fStack_114;
        fVar39 = fVar39 * fStack_110;
        fVar43 = local_108 * 0.0;
        fVar44 = fStack_104 * 0.0;
        fVar45 = fStack_100 * 0.0;
        fVar49 = fVar49 - fVar40;
        fVar50 = fVar50 - fVar41;
        fVar51 = fVar51 - fVar42;
        fVar41 = fVar14 * fVar51 + local_2b8;
        fVar42 = fVar14 * fVar50 + local_2a8;
        FUN_144afe1e6(&local_138,&local_178,&local_188);
        fVar27 = local_138 * local_138 + fStack_134 * fStack_134;
        fVar29 = fStack_130 * fStack_130 + fStack_12c * fStack_12c;
        auVar34._0_4_ = fVar29 + fVar27;
        auVar34._4_4_ = fVar29 + fVar27;
        auVar34._8_4_ = fVar27 + fVar29;
        auVar34._12_4_ = fVar27 + fVar29;
        auVar35 = sqrtps(auVar34,auVar34);
        auVar35 = divps(_DAT_1499314a0,auVar35);
        auVar36._0_4_ = auVar35._0_4_ * local_138;
        auVar36._4_4_ = auVar35._4_4_ * fStack_134;
        auVar36._8_4_ = auVar35._8_4_ * fStack_130;
        auVar36._12_4_ = auVar35._12_4_ * fStack_12c;
        auVar35._4_4_ = -(uint)(1e-08 <= auVar34._4_4_);
        auVar35._0_4_ = -(uint)(1e-08 <= auVar34._0_4_);
        auVar35._8_4_ = -(uint)(1e-08 <= auVar34._8_4_);
        auVar35._12_4_ = -(uint)(1e-08 <= auVar34._12_4_);
        auVar35 = blendvps(_DAT_149932320,auVar36,auVar35);
        fVar27 = *(float *)(local_158 + 0x2f0);
        pfVar13 = local_1f8 + local_1f0;
        *local_1f8 = fVar14 * fVar49 + fVar40;
        pfVar1 = local_1e8 + local_1e0;
        *local_1e8 = fVar42;
        pfVar2 = local_1d8 + local_1d0;
        *local_1d8 = fVar41;
        pfVar3 = local_238 + local_230;
        *local_238 = auVar35._0_4_;
        pfVar4 = local_228 + local_220;
        uVar17 = extractps(auVar35,1);
        *(undefined8 *)local_228 = uVar17;
        pfVar5 = local_218 + local_210;
        uVar17 = extractps(auVar35,2);
        *(undefined8 *)local_218 = uVar17;
        pfVar6 = local_208 + local_200;
        uVar17 = extractps(auVar35,3);
        *(undefined8 *)local_208 = uVar17;
        pfVar7 = local_268 + local_260;
        *local_268 = ((fVar43 + fVar37 + fVar31 + fVar26) - fVar46) * fVar14 + fVar46;
        pfVar8 = local_258 + local_250;
        *local_258 = ((fVar44 + fVar38 + fVar32 + fVar28) - fVar47) * fVar14 + local_2d8;
        fVar27 = (float)(-(uint)(0.0 < fVar27) & (uint)(1.0 / fVar27));
        pfVar9 = local_248 + local_240;
        *local_248 = ((fVar45 + fVar39 + fVar33 + fVar30) - fVar48) * fVar14 + local_2c8;
        pfVar10 = local_298 + local_290;
        *local_298 = fVar27 * fVar49;
        pfVar11 = local_288 + local_280;
        *local_288 = fVar50 * fVar27;
        pfVar12 = local_278 + local_270;
        *local_278 = fVar51 * fVar27;
        iVar25 = iVar25 + 1;
        piVar22 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar22 = (int *)(param_1 + 0x3c);
        }
        local_298 = pfVar10;
        local_288 = pfVar11;
        local_278 = pfVar12;
        local_268 = pfVar7;
        local_258 = pfVar8;
        local_248 = pfVar9;
        local_238 = pfVar3;
        local_228 = pfVar4;
        local_218 = pfVar5;
        local_208 = pfVar6;
        local_1f8 = pfVar13;
        local_1e8 = pfVar1;
        local_1d8 = pfVar2;
      } while (iVar25 < *piVar22);
    }
  }
  if (local_150 != (undefined8 *)0x0) {
    LOCK();
    piVar22 = (int *)(local_150 + 1);
    *piVar22 = *piVar22 + -1;
    UNLOCK();
    if (*piVar22 == 0) {
      (**(code **)*local_150)(local_150,1);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480c193a FUN_1480c193a body=2531 status=ok
// SIG undefined FUN_1480c193a(void)

void FUN_1480c193a(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 *puVar28;
  uint uVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  int *piVar32;
  uint uVar33;
  int iVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auStack_258 [32];
  float *local_238;
  int local_230;
  float *local_228;
  int local_220;
  float *local_218;
  int local_210;
  float *local_208;
  int local_200;
  float *local_1f8;
  int local_1f0;
  float *local_1e8;
  int local_1e0;
  float *local_1d8;
  int local_1d0;
  float *local_1c8;
  int local_1c0;
  float *local_1b8;
  int local_1b0;
  float *local_1a8;
  int local_1a0;
  float *local_198;
  int local_190;
  float *local_188;
  int local_180;
  float *local_178;
  int local_170;
  uint *local_168;
  undefined8 uStack_160;
  int local_158;
  undefined1 local_150 [8];
  longlong local_148;
  undefined8 *local_140;
  undefined1 local_138 [16];
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_1405c93a6(local_150,param_1);
  local_140 = (undefined8 *)0x0;
  puVar30 = (undefined8 *)FUN_1405c943a(local_148,local_138);
  puVar28 = local_140;
  puVar14 = local_140;
  if (local_140 != puVar30) {
    if (puVar30 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar30 + 1) = *(int *)(puVar30 + 1) + 1;
      UNLOCK();
    }
    puVar14 = puVar30;
    if (local_140 != (undefined8 *)0x0) {
      LOCK();
      piVar32 = (int *)(local_140 + 1);
      *piVar32 = *piVar32 + -1;
      UNLOCK();
      if (*piVar32 == 0) {
        puVar14 = (undefined8 *)*local_140;
        local_140 = puVar30;
        (*(code *)*puVar14)(puVar28,1);
        puVar14 = local_140;
      }
    }
  }
  local_140 = puVar14;
  local_168 = (uint *)0x0;
  uStack_160 = 0;
  local_158 = 0;
  FUN_144a98d08(&local_168,param_1);
  FUN_144a76c20(&local_198,param_1);
  FUN_144a76c20(&local_188,param_1);
  FUN_144a76c20(&local_178,param_1);
  FUN_144a76c20(&local_1d8,param_1);
  FUN_144a76c20(&local_1c8,param_1);
  FUN_144a76c20(&local_1b8,param_1);
  FUN_144a76c20(&local_1a8,param_1);
  FUN_144a76c20(&local_208,param_1);
  FUN_144a76c20(&local_1f8,param_1);
  FUN_144a76c20(&local_1e8,param_1);
  FUN_144a76c20(&local_238,param_1);
  FUN_144a76c20(&local_228,param_1);
  FUN_144a76c20(&local_218,param_1);
  fVar25 = DAT_14c846338;
  fVar24 = DAT_14c846330._4_4_;
  fVar48 = (float)DAT_14c846330;
  if (*(int *)(local_148 + 0x3c0) < 1) {
    FUN_144a928e2(&local_128,local_148 + 0x40);
    fVar40 = DAT_14c846358;
    fVar39 = DAT_14c846350._4_4_;
    fVar38 = (float)DAT_14c846350;
    fVar37 = DAT_14c84634c;
    fVar36 = DAT_14c846348;
    fVar35 = DAT_14c846344;
    fVar27 = DAT_14c84633c._4_4_;
    fVar41 = fVar25 * local_108 + fVar24 * local_118 + fVar48 * local_128 + local_f8;
    fVar42 = fVar25 * fStack_104 + fVar24 * fStack_114 + fVar48 * fStack_124 + fStack_f4;
    fVar44 = fVar25 * fStack_100 + fVar24 * fStack_110 + fVar48 * fStack_120 + fStack_f0;
    fVar48 = *(float *)(local_148 + 0x2d0);
    fVar24 = *(float *)(local_148 + 0x2d4);
    fVar25 = *(float *)(local_148 + 0x2d8);
    fVar43 = *(float *)(local_148 + 0x2dc);
    FUN_144a928e2(&local_128,local_148 + 0xc0);
    fVar26 = DAT_14c846338;
    fVar47 = DAT_14c846330._4_4_;
    fVar45 = (float)DAT_14c846330;
    piVar32 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar32 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar32) {
      iVar34 = 0;
      do {
        pfVar13 = local_198 + local_190;
        *local_198 = fVar41;
        pfVar1 = local_188 + local_180;
        *local_188 = fVar42;
        pfVar2 = local_178 + local_170;
        *local_178 = fVar44;
        pfVar3 = local_1d8 + local_1d0;
        *local_1d8 = fVar48 * fVar37 * 1.0 + fVar43 * fVar27 + fVar24 * fVar36 * 1.0 +
                     fVar25 * fVar35 * -1.0;
        pfVar4 = local_1c8 + local_1c0;
        *local_1c8 = fVar48 * fVar36 * -1.0 + fVar43 * fVar35 + fVar24 * fVar37 * 1.0 +
                     fVar25 * fVar27 * 1.0;
        pfVar5 = local_1b8 + local_1b0;
        *local_1b8 = fVar48 * fVar35 * 1.0 + fVar43 * fVar36 + fVar24 * fVar27 * -1.0 +
                     fVar25 * fVar37 * 1.0;
        pfVar6 = local_1a8 + local_1a0;
        *local_1a8 = fVar48 * fVar27 * -1.0 + fVar43 * fVar37 + fVar24 * fVar35 * -1.0 +
                     fVar25 * fVar36 * -1.0;
        pfVar7 = local_208 + local_200;
        *local_208 = local_f8 * 0.0 + fVar40 * local_108 + fVar39 * local_118 + fVar38 * local_128;
        pfVar8 = local_1f8 + local_1f0;
        *local_1f8 = fStack_f4 * 0.0 +
                     fVar40 * fStack_104 + fVar39 * fStack_114 + fVar38 * fStack_124;
        pfVar9 = local_1e8 + local_1e0;
        *local_1e8 = fStack_f0 * 0.0 +
                     fVar40 * fStack_100 + fVar39 * fStack_110 + fVar38 * fStack_120;
        pfVar10 = local_238 + local_230;
        *local_238 = fVar45;
        pfVar11 = local_228 + local_220;
        *local_228 = fVar47;
        pfVar12 = local_218 + local_210;
        *local_218 = fVar26;
        iVar34 = iVar34 + 1;
        piVar32 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar32 = (int *)(param_1 + 0x3c);
        }
        local_238 = pfVar10;
        local_228 = pfVar11;
        local_218 = pfVar12;
        local_208 = pfVar7;
        local_1f8 = pfVar8;
        local_1e8 = pfVar9;
        local_1d8 = pfVar3;
        local_1c8 = pfVar4;
        local_1b8 = pfVar5;
        local_1a8 = pfVar6;
        local_198 = pfVar13;
        local_188 = pfVar1;
        local_178 = pfVar2;
      } while (iVar34 < *piVar32);
    }
  }
  else {
    piVar32 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar32 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar32) {
      uVar33 = *(int *)(local_148 + 0x3c0) - 1;
      iVar34 = 0;
      do {
        uVar29 = *local_168;
        if ((int)uVar33 <= (int)*local_168) {
          uVar29 = uVar33;
        }
        uVar31 = (ulonglong)uVar29;
        if ((int)uVar29 < 1) {
          uVar31 = 0;
        }
        lVar15 = *(longlong *)(local_148 + 0x3b0);
        uVar31 = (ulonglong)
                 ((uint)*(ushort *)(*(longlong *)(local_148 + 0x3c8) + uVar31 * 2) * 0x30);
        pfVar13 = (float *)(lVar15 + 0x10 + uVar31);
        fVar48 = *pfVar13;
        fVar24 = pfVar13[1];
        fVar25 = pfVar13[2];
        local_168 = local_168 + local_158;
        FUN_144a928e2(&local_128,local_148 + 0x40);
        fVar42 = fVar25 * local_108 + fVar24 * local_118 + fVar48 * local_128 + local_f8;
        fVar44 = fVar25 * fStack_104 + fVar24 * fStack_114 + fVar48 * fStack_124 + fStack_f4;
        fVar46 = fVar25 * fStack_100 + fVar24 * fStack_110 + fVar48 * fStack_120 + fStack_f0;
        pfVar13 = (float *)(lVar15 + 0x10 + uVar31);
        fVar48 = *pfVar13;
        fVar24 = pfVar13[1];
        fVar25 = pfVar13[2];
        FUN_144a928e2(&local_128,local_148 + 0x140);
        fVar38 = fVar25 * local_108 + fVar24 * local_118 + fVar48 * local_128 + local_f8;
        fVar39 = fVar25 * fStack_104 + fVar24 * fStack_114 + fVar48 * fStack_124 + fStack_f4;
        fVar40 = fVar25 * fStack_100 + fVar24 * fStack_110 + fVar48 * fStack_120 + fStack_f0;
        fVar41 = (float)(-(uint)(0.0 < *(float *)(local_148 + 0x2f0)) &
                        (uint)(1.0 / *(float *)(local_148 + 0x2f0)));
        pfVar13 = (float *)(lVar15 + 0x10 + uVar31);
        fVar48 = *pfVar13;
        fVar24 = pfVar13[1];
        fVar25 = pfVar13[2];
        FUN_144a928e2(&local_128,local_148 + 0x40);
        fVar43 = fVar25 * local_108 + fVar24 * local_118 + fVar48 * local_128 + local_f8;
        fVar45 = fVar25 * fStack_104 + fVar24 * fStack_114 + fVar48 * fStack_124 + fStack_f4;
        fVar47 = fVar25 * fStack_100 + fVar24 * fStack_110 + fVar48 * fStack_120 + fStack_f0;
        fVar48 = fVar25 * fStack_fc + fVar24 * fStack_10c + fVar48 * fStack_11c + fStack_ec;
        *local_198 = fVar43;
        auVar22._4_4_ = fVar45;
        auVar22._0_4_ = fVar43;
        auVar22._8_4_ = fVar47;
        auVar22._12_4_ = fVar48;
        uVar16 = extractps(auVar22,1);
        *(undefined8 *)local_188 = uVar16;
        auVar23._4_4_ = fVar45;
        auVar23._0_4_ = fVar43;
        auVar23._8_4_ = fVar47;
        auVar23._12_4_ = fVar48;
        uVar16 = extractps(auVar23,2);
        *(undefined8 *)local_178 = uVar16;
        pfVar13 = (float *)(lVar15 + uVar31);
        fVar48 = *pfVar13;
        fVar24 = pfVar13[1];
        fVar25 = pfVar13[2];
        fVar43 = pfVar13[3];
        fVar45 = *(float *)(local_148 + 0x2d0);
        fVar47 = *(float *)(local_148 + 0x2d4);
        fVar26 = *(float *)(local_148 + 0x2d8);
        fVar27 = *(float *)(local_148 + 0x2dc);
        fVar35 = fVar26 * fVar24 * -1.0 +
                 fVar47 * fVar25 * 1.0 + fVar45 * fVar43 * 1.0 + fVar27 * fVar48;
        fVar36 = fVar26 * fVar48 * 1.0 +
                 fVar47 * fVar43 * 1.0 + fVar45 * fVar25 * -1.0 + fVar27 * fVar24;
        fVar37 = fVar26 * fVar43 * 1.0 +
                 fVar47 * fVar48 * -1.0 + fVar45 * fVar24 * 1.0 + fVar27 * fVar25;
        fVar48 = fVar26 * fVar25 * -1.0 +
                 fVar47 * fVar24 * -1.0 + fVar45 * fVar48 * -1.0 + fVar27 * fVar43;
        *local_1d8 = fVar35;
        auVar17._4_4_ = fVar36;
        auVar17._0_4_ = fVar35;
        auVar17._8_4_ = fVar37;
        auVar17._12_4_ = fVar48;
        uVar16 = extractps(auVar17,1);
        *(undefined8 *)local_1c8 = uVar16;
        auVar18._4_4_ = fVar36;
        auVar18._0_4_ = fVar35;
        auVar18._8_4_ = fVar37;
        auVar18._12_4_ = fVar48;
        uVar16 = extractps(auVar18,2);
        *(undefined8 *)local_1b8 = uVar16;
        auVar19._4_4_ = fVar36;
        auVar19._0_4_ = fVar35;
        auVar19._8_4_ = fVar37;
        auVar19._12_4_ = fVar48;
        uVar16 = extractps(auVar19,3);
        *(undefined8 *)local_1a8 = uVar16;
        pfVar13 = (float *)(lVar15 + 0x20 + uVar31);
        fVar48 = *pfVar13;
        fVar24 = pfVar13[1];
        fVar25 = pfVar13[2];
        local_1d8 = local_1d8 + local_1d0;
        local_1c8 = local_1c8 + local_1c0;
        local_1b8 = local_1b8 + local_1b0;
        local_1a8 = local_1a8 + local_1a0;
        local_198 = local_198 + local_190;
        local_188 = local_188 + local_180;
        local_178 = local_178 + local_170;
        FUN_144a928e2(&local_128,local_148 + 0xc0);
        fVar43 = local_f8 * 0.0 + fVar25 * local_108 + fVar24 * local_118 + fVar48 * local_128;
        fVar45 = fStack_f4 * 0.0 + fVar25 * fStack_104 + fVar24 * fStack_114 + fVar48 * fStack_124;
        fVar47 = fStack_f0 * 0.0 + fVar25 * fStack_100 + fVar24 * fStack_110 + fVar48 * fStack_120;
        fVar48 = fStack_ec * 0.0 + fVar25 * fStack_fc + fVar24 * fStack_10c + fVar48 * fStack_11c;
        pfVar13 = local_208 + local_200;
        *local_208 = fVar43;
        pfVar1 = local_1f8 + local_1f0;
        auVar20._4_4_ = fVar45;
        auVar20._0_4_ = fVar43;
        auVar20._8_4_ = fVar47;
        auVar20._12_4_ = fVar48;
        uVar16 = extractps(auVar20,1);
        *(undefined8 *)local_1f8 = uVar16;
        pfVar2 = local_1e8 + local_1e0;
        auVar21._4_4_ = fVar45;
        auVar21._0_4_ = fVar43;
        auVar21._8_4_ = fVar47;
        auVar21._12_4_ = fVar48;
        uVar16 = extractps(auVar21,2);
        *(undefined8 *)local_1e8 = uVar16;
        pfVar3 = local_238 + local_230;
        *local_238 = fVar41 * (fVar42 - fVar38);
        pfVar4 = local_228 + local_220;
        *local_228 = (fVar44 - fVar39) * fVar41;
        pfVar5 = local_218 + local_210;
        *local_218 = (fVar46 - fVar40) * fVar41;
        iVar34 = iVar34 + 1;
        piVar32 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar32 = (int *)(param_1 + 0x3c);
        }
        local_238 = pfVar3;
        local_228 = pfVar4;
        local_218 = pfVar5;
        local_208 = pfVar13;
        local_1f8 = pfVar1;
        local_1e8 = pfVar2;
      } while (iVar34 < *piVar32);
    }
  }
  if (local_140 != (undefined8 *)0x0) {
    LOCK();
    piVar32 = (int *)(local_140 + 1);
    *piVar32 = *piVar32 + -1;
    UNLOCK();
    if (*piVar32 == 0) {
      (**(code **)*local_140)(local_140,1);
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480c231e FUN_1480c231e body=3004 status=ok
// SIG undefined FUN_1480c231e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480c231e(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float fVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  int *piVar22;
  uint uVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auStack_2f8 [32];
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float *local_298;
  int local_290;
  float *local_288;
  int local_280;
  float *local_278;
  int local_270;
  float *local_268;
  int local_260;
  float *local_258;
  int local_250;
  float *local_248;
  int local_240;
  float *local_238;
  int local_230;
  float *local_228;
  int local_220;
  float *local_218;
  int local_210;
  float *local_208;
  int local_200;
  float *local_1f8;
  int local_1f0;
  float *local_1e8;
  int local_1e0;
  float *local_1d8;
  int local_1d0;
  float *local_1c8;
  undefined8 uStack_1c0;
  int local_1b8;
  uint *local_1a8;
  undefined8 uStack_1a0;
  int local_198;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined1 local_160 [8];
  longlong local_158;
  undefined8 *local_150;
  undefined1 local_148 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  FUN_1405c93a6(local_160,param_1);
  local_150 = (undefined8 *)0x0;
  puVar20 = (undefined8 *)FUN_1405c943a(local_158,local_148);
  puVar18 = local_150;
  puVar15 = local_150;
  if (local_150 != puVar20) {
    if (puVar20 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
      UNLOCK();
    }
    puVar15 = puVar20;
    if (local_150 != (undefined8 *)0x0) {
      LOCK();
      piVar22 = (int *)(local_150 + 1);
      *piVar22 = *piVar22 + -1;
      UNLOCK();
      if (*piVar22 == 0) {
        puVar15 = (undefined8 *)*local_150;
        local_150 = puVar20;
        (*(code *)*puVar15)(puVar18,1);
        puVar15 = local_150;
      }
    }
  }
  local_150 = puVar15;
  local_198 = 0;
  local_1a8 = (uint *)0x0;
  uStack_1a0 = 0;
  FUN_144a98d08(&local_1a8,param_1);
  local_1b8 = 0;
  local_1c8 = (float *)0x0;
  uStack_1c0 = 0;
  FUN_144a98dce(&local_1c8,param_1);
  FUN_144a76c20(&local_1f8,param_1);
  FUN_144a76c20(&local_1e8,param_1);
  FUN_144a76c20(&local_1d8,param_1);
  FUN_144a76c20(&local_238,param_1);
  FUN_144a76c20(&local_228,param_1);
  FUN_144a76c20(&local_218,param_1);
  FUN_144a76c20(&local_208,param_1);
  FUN_144a76c20(&local_268,param_1);
  FUN_144a76c20(&local_258,param_1);
  FUN_144a76c20(&local_248,param_1);
  FUN_144a76c20(&local_298,param_1);
  FUN_144a76c20(&local_288,param_1);
  FUN_144a76c20(&local_278,param_1);
  fVar29 = DAT_14c846338;
  fVar26 = DAT_14c846330._4_4_;
  fVar14 = (float)DAT_14c846330;
  if (*(int *)(local_158 + 0x3c0) < 1) {
    FUN_144a928e2(&local_138,local_158 + 0x40);
    fVar41 = DAT_14c846358;
    fVar37 = DAT_14c846350._4_4_;
    fVar40 = (float)DAT_14c846350;
    fVar36 = DAT_14c84634c;
    fVar31 = DAT_14c846348;
    fVar30 = DAT_14c846344;
    fVar28 = DAT_14c84633c._4_4_;
    fVar39 = fVar29 * local_118 + fVar26 * local_128 + fVar14 * local_138 + local_108;
    fVar42 = fVar29 * fStack_114 + fVar26 * fStack_124 + fVar14 * fStack_134 + fStack_104;
    fVar43 = fVar29 * fStack_110 + fVar26 * fStack_120 + fVar14 * fStack_130 + fStack_100;
    fVar14 = *(float *)(local_158 + 0x2d0);
    fVar26 = *(float *)(local_158 + 0x2d4);
    fVar29 = *(float *)(local_158 + 0x2d8);
    fVar32 = *(float *)(local_158 + 0x2dc);
    FUN_144a928e2(&local_138,local_158 + 0xc0);
    fVar27 = DAT_14c846338;
    fVar25 = DAT_14c846330._4_4_;
    fVar38 = (float)DAT_14c846330;
    piVar22 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar22 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar22) {
      iVar24 = 0;
      do {
        pfVar13 = local_1f8 + local_1f0;
        *local_1f8 = fVar39;
        pfVar1 = local_1e8 + local_1e0;
        *local_1e8 = fVar42;
        pfVar2 = local_1d8 + local_1d0;
        *local_1d8 = fVar43;
        pfVar3 = local_238 + local_230;
        *local_238 = fVar14 * fVar36 * 1.0 + fVar32 * fVar28 + fVar26 * fVar31 * 1.0 +
                     fVar29 * fVar30 * -1.0;
        pfVar4 = local_228 + local_220;
        *local_228 = fVar14 * fVar31 * -1.0 + fVar32 * fVar30 + fVar26 * fVar36 * 1.0 +
                     fVar29 * fVar28 * 1.0;
        pfVar5 = local_218 + local_210;
        *local_218 = fVar14 * fVar30 * 1.0 + fVar32 * fVar31 + fVar26 * fVar28 * -1.0 +
                     fVar29 * fVar36 * 1.0;
        pfVar6 = local_208 + local_200;
        *local_208 = fVar14 * fVar28 * -1.0 + fVar32 * fVar36 + fVar26 * fVar30 * -1.0 +
                     fVar29 * fVar31 * -1.0;
        pfVar7 = local_268 + local_260;
        *local_268 = local_108 * 0.0 + fVar41 * local_118 + fVar37 * local_128 + fVar40 * local_138;
        pfVar8 = local_258 + local_250;
        *local_258 = fStack_104 * 0.0 +
                     fVar41 * fStack_114 + fVar37 * fStack_124 + fVar40 * fStack_134;
        pfVar9 = local_248 + local_240;
        *local_248 = fStack_100 * 0.0 +
                     fVar41 * fStack_110 + fVar37 * fStack_120 + fVar40 * fStack_130;
        pfVar10 = local_298 + local_290;
        *local_298 = fVar38;
        pfVar11 = local_288 + local_280;
        *local_288 = fVar25;
        pfVar12 = local_278 + local_270;
        *local_278 = fVar27;
        iVar24 = iVar24 + 1;
        piVar22 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar22 = (int *)(param_1 + 0x3c);
        }
        local_298 = pfVar10;
        local_288 = pfVar11;
        local_278 = pfVar12;
        local_268 = pfVar7;
        local_258 = pfVar8;
        local_248 = pfVar9;
        local_238 = pfVar3;
        local_228 = pfVar4;
        local_218 = pfVar5;
        local_208 = pfVar6;
        local_1f8 = pfVar13;
        local_1e8 = pfVar1;
        local_1d8 = pfVar2;
      } while (iVar24 < *piVar22);
    }
  }
  else {
    piVar22 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar22 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar22) {
      uVar23 = *(int *)(local_158 + 0x3c0) - 1;
      iVar24 = 0;
      do {
        uVar19 = *local_1a8;
        if ((int)uVar23 <= (int)*local_1a8) {
          uVar19 = uVar23;
        }
        uVar21 = (ulonglong)uVar19;
        if ((int)uVar19 < 1) {
          uVar21 = 0;
        }
        fVar14 = *local_1c8;
        lVar16 = *(longlong *)(local_158 + 0x3b0);
        uVar21 = (ulonglong)
                 ((uint)*(ushort *)(*(longlong *)(local_158 + 0x3c8) + uVar21 * 2) * 0x30);
        pfVar13 = (float *)(lVar16 + 0x10 + uVar21);
        fVar26 = *pfVar13;
        fVar29 = pfVar13[1];
        fVar32 = pfVar13[2];
        local_1c8 = local_1c8 + local_1b8;
        local_1a8 = local_1a8 + local_198;
        FUN_144a928e2(&local_138,local_158 + 0x140);
        fVar39 = fVar32 * local_118 + fVar29 * local_128 + fVar26 * local_138 + local_108;
        fVar40 = fVar32 * fStack_114 + fVar29 * fStack_124 + fVar26 * fStack_134 + fStack_104;
        fVar41 = fVar32 * fStack_110 + fVar29 * fStack_120 + fVar26 * fStack_130 + fStack_100;
        fStack_2b4 = fVar32 * fStack_10c + fVar29 * fStack_11c + fVar26 * fStack_12c + fStack_fc;
        pfVar13 = (float *)(lVar16 + 0x10 + uVar21);
        fVar26 = *pfVar13;
        fVar29 = pfVar13[1];
        fVar32 = pfVar13[2];
        local_2b8 = fVar41;
        fStack_2b0 = fVar41;
        fStack_2ac = fStack_2b4;
        local_2a8 = fVar40;
        fStack_2a4 = fVar40;
        fStack_2a0 = fStack_2b4;
        fStack_29c = fStack_2b4;
        FUN_144a928e2(&local_138,local_158 + 0x40);
        fVar48 = fVar32 * local_118 + fVar29 * local_128 + fVar26 * local_138 + local_108;
        fVar49 = fVar32 * fStack_114 + fVar29 * fStack_124 + fVar26 * fStack_134 + fStack_104;
        fVar50 = fVar32 * fStack_110 + fVar29 * fStack_120 + fVar26 * fStack_130 + fStack_100;
        pfVar13 = (float *)(lVar16 + uVar21);
        fVar26 = *pfVar13;
        fVar29 = pfVar13[1];
        fVar32 = pfVar13[2];
        fVar38 = pfVar13[3];
        fVar25 = *(float *)(local_158 + 0x2e0);
        fVar27 = *(float *)(local_158 + 0x2e4);
        fVar28 = *(float *)(local_158 + 0x2e8);
        fVar30 = *(float *)(local_158 + 0x2ec);
        local_178 = fVar28 * fVar29 * -1.0 +
                    fVar27 * fVar32 * 1.0 + fVar25 * fVar38 * 1.0 + fVar30 * fVar26;
        fStack_174 = fVar28 * fVar26 * 1.0 +
                     fVar27 * fVar38 * 1.0 + fVar25 * fVar32 * -1.0 + fVar30 * fVar29;
        fStack_170 = fVar28 * fVar38 * 1.0 +
                     fVar27 * fVar26 * -1.0 + fVar25 * fVar29 * 1.0 + fVar30 * fVar32;
        fStack_16c = fVar28 * fVar32 * -1.0 +
                     fVar27 * fVar29 * -1.0 + fVar25 * fVar26 * -1.0 + fVar30 * fVar38;
        pfVar13 = (float *)(lVar16 + uVar21);
        fVar26 = *pfVar13;
        fVar29 = pfVar13[1];
        fVar32 = pfVar13[2];
        fVar38 = pfVar13[3];
        fVar25 = *(float *)(local_158 + 0x2d0);
        fVar27 = *(float *)(local_158 + 0x2d4);
        fVar28 = *(float *)(local_158 + 0x2d8);
        fVar30 = *(float *)(local_158 + 0x2dc);
        local_188 = fVar28 * fVar29 * -1.0 +
                    fVar27 * fVar32 * 1.0 + fVar25 * fVar38 * 1.0 + fVar30 * fVar26;
        fStack_184 = fVar28 * fVar26 * 1.0 +
                     fVar27 * fVar38 * 1.0 + fVar25 * fVar32 * -1.0 + fVar30 * fVar29;
        fStack_180 = fVar28 * fVar38 * 1.0 +
                     fVar27 * fVar26 * -1.0 + fVar25 * fVar29 * 1.0 + fVar30 * fVar32;
        fStack_17c = fVar28 * fVar32 * -1.0 +
                     fVar27 * fVar29 * -1.0 + fVar25 * fVar26 * -1.0 + fVar30 * fVar38;
        pfVar13 = (float *)(lVar16 + 0x20 + uVar21);
        fVar26 = *pfVar13;
        fVar29 = pfVar13[1];
        fVar32 = pfVar13[2];
        FUN_144a928e2(&local_138,local_158 + 0x1c0);
        fVar45 = local_108 * 0.0 + fVar32 * local_118 + fVar29 * local_128 + fVar26 * local_138;
        fVar46 = fStack_104 * 0.0 + fVar32 * fStack_114 + fVar29 * fStack_124 + fVar26 * fStack_134;
        fVar47 = fStack_100 * 0.0 + fVar32 * fStack_110 + fVar29 * fStack_120 + fVar26 * fStack_130;
        fStack_2d0 = fStack_fc * 0.0 +
                     fVar32 * fStack_10c + fVar29 * fStack_11c + fVar26 * fStack_12c;
        pfVar13 = (float *)(lVar16 + 0x20 + uVar21);
        fVar29 = *pfVar13;
        fVar32 = pfVar13[1];
        fVar38 = pfVar13[2];
        local_2d8 = fVar46;
        fStack_2d4 = fVar46;
        fStack_2cc = fStack_2d0;
        local_2c8 = fVar47;
        fStack_2c4 = fStack_2d0;
        fStack_2c0 = fVar47;
        fStack_2bc = fStack_2d0;
        FUN_144a928e2(&local_138,local_158 + 0xc0);
        fVar25 = fVar29 * local_138;
        fVar27 = fVar29 * fStack_134;
        fVar29 = fVar29 * fStack_130;
        fVar30 = fVar32 * local_128;
        fVar31 = fVar32 * fStack_124;
        fVar32 = fVar32 * fStack_120;
        fVar36 = fVar38 * local_118;
        fVar37 = fVar38 * fStack_114;
        fVar38 = fVar38 * fStack_110;
        fVar42 = local_108 * 0.0;
        fVar43 = fStack_104 * 0.0;
        fVar44 = fStack_100 * 0.0;
        fVar48 = fVar48 - fVar39;
        fVar49 = fVar49 - fVar40;
        fVar50 = fVar50 - fVar41;
        fVar40 = fVar14 * fVar50 + local_2b8;
        fVar41 = fVar14 * fVar49 + local_2a8;
        FUN_144afe1e6(&local_138,&local_178,&local_188);
        fVar26 = local_138 * local_138 + fStack_134 * fStack_134;
        fVar28 = fStack_130 * fStack_130 + fStack_12c * fStack_12c;
        auVar33._0_4_ = fVar28 + fVar26;
        auVar33._4_4_ = fVar28 + fVar26;
        auVar33._8_4_ = fVar26 + fVar28;
        auVar33._12_4_ = fVar26 + fVar28;
        auVar34 = sqrtps(auVar33,auVar33);
        auVar34 = divps(_DAT_1499314a0,auVar34);
        auVar35._0_4_ = auVar34._0_4_ * local_138;
        auVar35._4_4_ = auVar34._4_4_ * fStack_134;
        auVar35._8_4_ = auVar34._8_4_ * fStack_130;
        auVar35._12_4_ = auVar34._12_4_ * fStack_12c;
        auVar34._4_4_ = -(uint)(1e-08 <= auVar33._4_4_);
        auVar34._0_4_ = -(uint)(1e-08 <= auVar33._0_4_);
        auVar34._8_4_ = -(uint)(1e-08 <= auVar33._8_4_);
        auVar34._12_4_ = -(uint)(1e-08 <= auVar33._12_4_);
        auVar34 = blendvps(_DAT_149932320,auVar35,auVar34);
        fVar26 = *(float *)(local_158 + 0x2f0);
        pfVar13 = local_1f8 + local_1f0;
        *local_1f8 = fVar14 * fVar48 + fVar39;
        pfVar1 = local_1e8 + local_1e0;
        *local_1e8 = fVar41;
        pfVar2 = local_1d8 + local_1d0;
        *local_1d8 = fVar40;
        pfVar3 = local_238 + local_230;
        *local_238 = auVar34._0_4_;
        pfVar4 = local_228 + local_220;
        uVar17 = extractps(auVar34,1);
        *(undefined8 *)local_228 = uVar17;
        pfVar5 = local_218 + local_210;
        uVar17 = extractps(auVar34,2);
        *(undefined8 *)local_218 = uVar17;
        pfVar6 = local_208 + local_200;
        uVar17 = extractps(auVar34,3);
        *(undefined8 *)local_208 = uVar17;
        pfVar7 = local_268 + local_260;
        *local_268 = ((fVar42 + fVar36 + fVar30 + fVar25) - fVar45) * fVar14 + fVar45;
        pfVar8 = local_258 + local_250;
        *local_258 = ((fVar43 + fVar37 + fVar31 + fVar27) - fVar46) * fVar14 + local_2d8;
        fVar26 = (float)(-(uint)(0.0 < fVar26) & (uint)(1.0 / fVar26));
        pfVar9 = local_248 + local_240;
        *local_248 = ((fVar44 + fVar38 + fVar32 + fVar29) - fVar47) * fVar14 + local_2c8;
        pfVar10 = local_298 + local_290;
        *local_298 = fVar26 * fVar48;
        pfVar11 = local_288 + local_280;
        *local_288 = fVar49 * fVar26;
        pfVar12 = local_278 + local_270;
        *local_278 = fVar50 * fVar26;
        iVar24 = iVar24 + 1;
        piVar22 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar22 = (int *)(param_1 + 0x3c);
        }
        local_298 = pfVar10;
        local_288 = pfVar11;
        local_278 = pfVar12;
        local_268 = pfVar7;
        local_258 = pfVar8;
        local_248 = pfVar9;
        local_238 = pfVar3;
        local_228 = pfVar4;
        local_218 = pfVar5;
        local_208 = pfVar6;
        local_1f8 = pfVar13;
        local_1e8 = pfVar1;
        local_1d8 = pfVar2;
      } while (iVar24 < *piVar22);
    }
  }
  if (local_150 != (undefined8 *)0x0) {
    LOCK();
    piVar22 = (int *)(local_150 + 1);
    *piVar22 = *piVar22 + -1;
    UNLOCK();
    if (*piVar22 == 0) {
      (**(code **)*local_150)(local_150,1);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480c2edc FUN_1480c2edc body=1938 status=ok
// SIG undefined FUN_1480c2edc(void)

void FUN_1480c2edc(char *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  undefined1 auVar12 [16];
  uint uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  int iVar30;
  undefined8 *puVar31;
  int *piVar32;
  int iVar33;
  ulonglong uVar34;
  int iVar35;
  float fVar36;
  undefined1 auStack_268 [32];
  float *local_248;
  int local_240;
  float *local_238;
  int local_230;
  float *local_228;
  int local_220;
  undefined4 *local_218;
  int local_210;
  undefined8 *local_208;
  int local_200;
  undefined8 *local_1f8;
  int local_1f0;
  undefined4 *local_1e8;
  int local_1e0;
  undefined8 *local_1d8;
  int local_1d0;
  undefined8 *local_1c8;
  int local_1c0;
  undefined8 *local_1b8;
  int local_1b0;
  float *local_1a8;
  int local_1a0;
  float *local_198;
  int local_190;
  float *local_188;
  int local_180;
  int *local_178;
  undefined8 uStack_170;
  int local_168;
  undefined1 local_160 [8];
  longlong local_158;
  undefined8 *local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [72];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_1405c93a6(local_160,param_1);
  local_150 = (undefined8 *)0x0;
  puVar31 = (undefined8 *)FUN_1405c943a(local_158,local_148);
  puVar2 = local_150;
  puVar14 = local_150;
  if (local_150 != puVar31) {
    if (puVar31 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar31 + 1) = *(int *)(puVar31 + 1) + 1;
      UNLOCK();
    }
    puVar14 = puVar31;
    if (local_150 != (undefined8 *)0x0) {
      LOCK();
      piVar32 = (int *)(local_150 + 1);
      *piVar32 = *piVar32 + -1;
      UNLOCK();
      if (*piVar32 == 0) {
        puVar14 = (undefined8 *)*local_150;
        local_150 = puVar31;
        (*(code *)*puVar14)(puVar2,1);
        puVar14 = local_150;
      }
    }
  }
  local_150 = puVar14;
  local_178 = (int *)0x0;
  uStack_170 = 0;
  local_168 = 0;
  FUN_144a98d08(&local_178,param_1);
  FUN_144a76c20(&local_1a8,param_1);
  FUN_144a76c20(&local_198,param_1);
  FUN_144a76c20(&local_188,param_1);
  FUN_144a76c20(&local_1e8,param_1);
  FUN_144a76c20(&local_1d8,param_1);
  FUN_144a76c20(&local_1c8,param_1);
  FUN_144a76c20(&local_1b8,param_1);
  FUN_144a76c20(&local_218,param_1);
  FUN_144a76c20(&local_208,param_1);
  FUN_144a76c20(&local_1f8,param_1);
  FUN_144a76c20(&local_248,param_1);
  FUN_144a76c20(&local_238,param_1);
  FUN_144a76c20(&local_228,param_1);
  fVar19 = DAT_14c846338;
  fVar18 = DAT_14c846330._4_4_;
  fVar17 = (float)DAT_14c846330;
  uVar13 = *(uint *)(local_158 + 0x3c0);
  iVar33 = ~uVar13 + *(int *)(local_158 + 0x3d0);
  if (iVar33 < 0) {
    FUN_144a928e2(local_138,local_158 + 0x40);
    uVar29 = DAT_14c846358;
    uVar28 = DAT_14c846350._4_4_;
    uVar27 = (undefined4)DAT_14c846350;
    uVar26 = DAT_14c84634c;
    uVar25 = DAT_14c846348;
    uVar24 = DAT_14c846344;
    uVar23 = DAT_14c84633c._4_4_;
    FUN_144a928e2(local_138,local_158 + 0xc0);
    fVar22 = DAT_14c846338;
    fVar21 = DAT_14c846330._4_4_;
    fVar20 = (float)DAT_14c846330;
    piVar32 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar32 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar32) {
      iVar33 = 0;
      do {
        pfVar11 = local_1a8 + local_1a0;
        *local_1a8 = fVar17;
        pfVar3 = local_198 + local_190;
        *local_198 = fVar18;
        pfVar4 = local_188 + local_180;
        *local_188 = fVar19;
        puVar1 = local_1e8 + local_1e0;
        *local_1e8 = uVar23;
        puVar2 = (undefined8 *)((longlong)local_1d8 + (longlong)local_1d0 * 4);
        *(undefined4 *)local_1d8 = uVar24;
        puVar14 = (undefined8 *)((longlong)local_1c8 + (longlong)local_1c0 * 4);
        *(undefined4 *)local_1c8 = uVar25;
        puVar31 = (undefined8 *)((longlong)local_1b8 + (longlong)local_1b0 * 4);
        *(undefined4 *)local_1b8 = uVar26;
        puVar5 = local_218 + local_210;
        *local_218 = uVar27;
        puVar6 = (undefined8 *)((longlong)local_208 + (longlong)local_200 * 4);
        *(undefined4 *)local_208 = uVar28;
        puVar7 = (undefined8 *)((longlong)local_1f8 + (longlong)local_1f0 * 4);
        *(undefined4 *)local_1f8 = uVar29;
        pfVar8 = local_248 + local_240;
        *local_248 = fVar20;
        pfVar9 = local_238 + local_230;
        *local_238 = fVar21;
        pfVar10 = local_228 + local_220;
        *local_228 = fVar22;
        iVar33 = iVar33 + 1;
        piVar32 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar32 = (int *)(param_1 + 0x3c);
        }
        local_248 = pfVar8;
        local_238 = pfVar9;
        local_228 = pfVar10;
        local_218 = puVar5;
        local_208 = puVar6;
        local_1f8 = puVar7;
        local_1e8 = puVar1;
        local_1d8 = puVar2;
        local_1c8 = puVar14;
        local_1b8 = puVar31;
        local_1a8 = pfVar11;
        local_198 = pfVar3;
        local_188 = pfVar4;
      } while (iVar33 < *piVar32);
    }
  }
  else {
    piVar32 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar32 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar32) {
      iVar35 = 0;
      do {
        iVar30 = *local_178;
        if (iVar33 <= *local_178) {
          iVar30 = iVar33;
        }
        if (iVar30 < 1) {
          iVar30 = 0;
        }
        lVar15 = *(longlong *)(local_158 + 0x3b0);
        uVar34 = (ulonglong)
                 ((uint)*(ushort *)
                         (*(longlong *)(local_158 + 0x3c8) + (longlong)(int)(iVar30 + uVar13) * 2) *
                 0x30);
        pfVar11 = (float *)(lVar15 + 0x10 + uVar34);
        fVar17 = *pfVar11;
        fVar18 = pfVar11[1];
        fVar19 = pfVar11[2];
        local_178 = local_178 + local_168;
        FUN_144a928e2(local_138,local_158 + 0x40);
        pfVar11 = (float *)(lVar15 + 0x10 + uVar34);
        fVar20 = *pfVar11;
        fVar21 = pfVar11[1];
        fVar22 = pfVar11[2];
        FUN_144a928e2(local_138,local_158 + 0x140);
        fVar36 = (float)(-(uint)(0.0 < *(float *)(local_158 + 0x2f0)) &
                        (uint)(1.0 / *(float *)(local_158 + 0x2f0)));
        auVar12 = *(undefined1 (*) [16])(lVar15 + 0x10 + uVar34);
        FUN_144a928e2(local_138,local_158 + 0x40);
        *local_1a8 = auVar12._0_4_;
        uVar16 = extractps(auVar12,1);
        *(undefined8 *)local_198 = uVar16;
        uVar16 = extractps(auVar12,2);
        *(undefined8 *)local_188 = uVar16;
        auVar12 = *(undefined1 (*) [16])(lVar15 + uVar34);
        *local_1e8 = auVar12._0_4_;
        uVar16 = extractps(auVar12,1);
        *local_1d8 = uVar16;
        uVar16 = extractps(auVar12,2);
        *local_1c8 = uVar16;
        uVar16 = extractps(auVar12,3);
        *local_1b8 = uVar16;
        auVar12 = *(undefined1 (*) [16])(lVar15 + 0x20 + uVar34);
        local_1e8 = local_1e8 + local_1e0;
        local_1d8 = (undefined8 *)((longlong)local_1d8 + (longlong)local_1d0 * 4);
        local_1c8 = (undefined8 *)((longlong)local_1c8 + (longlong)local_1c0 * 4);
        local_1b8 = (undefined8 *)((longlong)local_1b8 + (longlong)local_1b0 * 4);
        local_1a8 = local_1a8 + local_1a0;
        local_198 = local_198 + local_190;
        local_188 = local_188 + local_180;
        FUN_144a928e2(local_138,local_158 + 0xc0);
        puVar1 = local_218 + local_210;
        *local_218 = auVar12._0_4_;
        puVar2 = (undefined8 *)((longlong)local_208 + (longlong)local_200 * 4);
        uVar16 = extractps(auVar12,1);
        *local_208 = uVar16;
        puVar14 = (undefined8 *)((longlong)local_1f8 + (longlong)local_1f0 * 4);
        uVar16 = extractps(auVar12,2);
        *local_1f8 = uVar16;
        pfVar11 = local_248 + local_240;
        *local_248 = fVar36 * (fVar17 - fVar20);
        pfVar3 = local_238 + local_230;
        *local_238 = (fVar18 - fVar21) * fVar36;
        pfVar4 = local_228 + local_220;
        *local_228 = (fVar19 - fVar22) * fVar36;
        iVar35 = iVar35 + 1;
        piVar32 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar32 = (int *)(param_1 + 0x3c);
        }
        local_248 = pfVar11;
        local_238 = pfVar3;
        local_228 = pfVar4;
        local_218 = puVar1;
        local_208 = puVar2;
        local_1f8 = puVar14;
      } while (iVar35 < *piVar32);
    }
  }
  if (local_150 != (undefined8 *)0x0) {
    LOCK();
    piVar32 = (int *)(local_150 + 1);
    *piVar32 = *piVar32 + -1;
    UNLOCK();
    if (*piVar32 == 0) {
      (**(code **)*local_150)(local_150,1);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480c3670 FUN_1480c3670 body=2539 status=ok
// SIG undefined FUN_1480c3670(void)

void FUN_1480c3670(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  uint uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 *puVar29;
  int iVar30;
  undefined8 *puVar31;
  int *piVar32;
  int iVar33;
  ulonglong uVar34;
  int iVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStack_258 [32];
  float *local_238;
  int local_230;
  float *local_228;
  int local_220;
  float *local_218;
  int local_210;
  float *local_208;
  int local_200;
  float *local_1f8;
  int local_1f0;
  float *local_1e8;
  int local_1e0;
  float *local_1d8;
  int local_1d0;
  float *local_1c8;
  int local_1c0;
  float *local_1b8;
  int local_1b0;
  float *local_1a8;
  int local_1a0;
  float *local_198;
  int local_190;
  float *local_188;
  int local_180;
  float *local_178;
  int local_170;
  int *local_168;
  undefined8 uStack_160;
  int local_158;
  undefined1 local_150 [8];
  longlong local_148;
  undefined8 *local_140;
  undefined1 local_138 [16];
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_1405c93a6(local_150,param_1);
  local_140 = (undefined8 *)0x0;
  puVar31 = (undefined8 *)FUN_1405c943a(local_148,local_138);
  puVar29 = local_140;
  puVar15 = local_140;
  if (local_140 != puVar31) {
    if (puVar31 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar31 + 1) = *(int *)(puVar31 + 1) + 1;
      UNLOCK();
    }
    puVar15 = puVar31;
    if (local_140 != (undefined8 *)0x0) {
      LOCK();
      piVar32 = (int *)(local_140 + 1);
      *piVar32 = *piVar32 + -1;
      UNLOCK();
      if (*piVar32 == 0) {
        puVar15 = (undefined8 *)*local_140;
        local_140 = puVar31;
        (*(code *)*puVar15)(puVar29,1);
        puVar15 = local_140;
      }
    }
  }
  local_140 = puVar15;
  local_168 = (int *)0x0;
  uStack_160 = 0;
  local_158 = 0;
  FUN_144a98d08(&local_168,param_1);
  FUN_144a76c20(&local_198,param_1);
  FUN_144a76c20(&local_188,param_1);
  FUN_144a76c20(&local_178,param_1);
  FUN_144a76c20(&local_1d8,param_1);
  FUN_144a76c20(&local_1c8,param_1);
  FUN_144a76c20(&local_1b8,param_1);
  FUN_144a76c20(&local_1a8,param_1);
  FUN_144a76c20(&local_208,param_1);
  FUN_144a76c20(&local_1f8,param_1);
  FUN_144a76c20(&local_1e8,param_1);
  FUN_144a76c20(&local_238,param_1);
  FUN_144a76c20(&local_228,param_1);
  FUN_144a76c20(&local_218,param_1);
  fVar26 = DAT_14c846338;
  fVar25 = DAT_14c846330._4_4_;
  fVar49 = (float)DAT_14c846330;
  uVar14 = *(uint *)(local_148 + 0x3c0);
  iVar33 = ~uVar14 + *(int *)(local_148 + 0x3d0);
  if (iVar33 < 0) {
    FUN_144a928e2(&local_128,local_148 + 0x40);
    fVar41 = DAT_14c846358;
    fVar40 = DAT_14c846350._4_4_;
    fVar39 = (float)DAT_14c846350;
    fVar38 = DAT_14c84634c;
    fVar37 = DAT_14c846348;
    fVar36 = DAT_14c846344;
    fVar28 = DAT_14c84633c._4_4_;
    fVar42 = fVar26 * local_108 + fVar25 * local_118 + fVar49 * local_128 + local_f8;
    fVar43 = fVar26 * fStack_104 + fVar25 * fStack_114 + fVar49 * fStack_124 + fStack_f4;
    fVar45 = fVar26 * fStack_100 + fVar25 * fStack_110 + fVar49 * fStack_120 + fStack_f0;
    fVar49 = *(float *)(local_148 + 0x2d0);
    fVar25 = *(float *)(local_148 + 0x2d4);
    fVar26 = *(float *)(local_148 + 0x2d8);
    fVar44 = *(float *)(local_148 + 0x2dc);
    FUN_144a928e2(&local_128,local_148 + 0xc0);
    fVar27 = DAT_14c846338;
    fVar48 = DAT_14c846330._4_4_;
    fVar46 = (float)DAT_14c846330;
    piVar32 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar32 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar32) {
      iVar33 = 0;
      do {
        pfVar13 = local_198 + local_190;
        *local_198 = fVar42;
        pfVar1 = local_188 + local_180;
        *local_188 = fVar43;
        pfVar2 = local_178 + local_170;
        *local_178 = fVar45;
        pfVar3 = local_1d8 + local_1d0;
        *local_1d8 = fVar49 * fVar38 * 1.0 + fVar44 * fVar28 + fVar25 * fVar37 * 1.0 +
                     fVar26 * fVar36 * -1.0;
        pfVar4 = local_1c8 + local_1c0;
        *local_1c8 = fVar49 * fVar37 * -1.0 + fVar44 * fVar36 + fVar25 * fVar38 * 1.0 +
                     fVar26 * fVar28 * 1.0;
        pfVar5 = local_1b8 + local_1b0;
        *local_1b8 = fVar49 * fVar36 * 1.0 + fVar44 * fVar37 + fVar25 * fVar28 * -1.0 +
                     fVar26 * fVar38 * 1.0;
        pfVar6 = local_1a8 + local_1a0;
        *local_1a8 = fVar49 * fVar28 * -1.0 + fVar44 * fVar38 + fVar25 * fVar36 * -1.0 +
                     fVar26 * fVar37 * -1.0;
        pfVar7 = local_208 + local_200;
        *local_208 = local_f8 * 0.0 + fVar41 * local_108 + fVar40 * local_118 + fVar39 * local_128;
        pfVar8 = local_1f8 + local_1f0;
        *local_1f8 = fStack_f4 * 0.0 +
                     fVar41 * fStack_104 + fVar40 * fStack_114 + fVar39 * fStack_124;
        pfVar9 = local_1e8 + local_1e0;
        *local_1e8 = fStack_f0 * 0.0 +
                     fVar41 * fStack_100 + fVar40 * fStack_110 + fVar39 * fStack_120;
        pfVar10 = local_238 + local_230;
        *local_238 = fVar46;
        pfVar11 = local_228 + local_220;
        *local_228 = fVar48;
        pfVar12 = local_218 + local_210;
        *local_218 = fVar27;
        iVar33 = iVar33 + 1;
        piVar32 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar32 = (int *)(param_1 + 0x3c);
        }
        local_238 = pfVar10;
        local_228 = pfVar11;
        local_218 = pfVar12;
        local_208 = pfVar7;
        local_1f8 = pfVar8;
        local_1e8 = pfVar9;
        local_1d8 = pfVar3;
        local_1c8 = pfVar4;
        local_1b8 = pfVar5;
        local_1a8 = pfVar6;
        local_198 = pfVar13;
        local_188 = pfVar1;
        local_178 = pfVar2;
      } while (iVar33 < *piVar32);
    }
  }
  else {
    piVar32 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar32 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar32) {
      iVar35 = 0;
      do {
        iVar30 = *local_168;
        if (iVar33 <= *local_168) {
          iVar30 = iVar33;
        }
        if (iVar30 < 1) {
          iVar30 = 0;
        }
        lVar16 = *(longlong *)(local_148 + 0x3b0);
        uVar34 = (ulonglong)
                 ((uint)*(ushort *)
                         (*(longlong *)(local_148 + 0x3c8) + (longlong)(int)(iVar30 + uVar14) * 2) *
                 0x30);
        pfVar13 = (float *)(lVar16 + 0x10 + uVar34);
        fVar49 = *pfVar13;
        fVar25 = pfVar13[1];
        fVar26 = pfVar13[2];
        local_168 = local_168 + local_158;
        FUN_144a928e2(&local_128,local_148 + 0x40);
        fVar43 = fVar26 * local_108 + fVar25 * local_118 + fVar49 * local_128 + local_f8;
        fVar45 = fVar26 * fStack_104 + fVar25 * fStack_114 + fVar49 * fStack_124 + fStack_f4;
        fVar47 = fVar26 * fStack_100 + fVar25 * fStack_110 + fVar49 * fStack_120 + fStack_f0;
        pfVar13 = (float *)(lVar16 + 0x10 + uVar34);
        fVar49 = *pfVar13;
        fVar25 = pfVar13[1];
        fVar26 = pfVar13[2];
        FUN_144a928e2(&local_128,local_148 + 0x140);
        fVar39 = fVar26 * local_108 + fVar25 * local_118 + fVar49 * local_128 + local_f8;
        fVar40 = fVar26 * fStack_104 + fVar25 * fStack_114 + fVar49 * fStack_124 + fStack_f4;
        fVar41 = fVar26 * fStack_100 + fVar25 * fStack_110 + fVar49 * fStack_120 + fStack_f0;
        fVar42 = (float)(-(uint)(0.0 < *(float *)(local_148 + 0x2f0)) &
                        (uint)(1.0 / *(float *)(local_148 + 0x2f0)));
        pfVar13 = (float *)(lVar16 + 0x10 + uVar34);
        fVar49 = *pfVar13;
        fVar25 = pfVar13[1];
        fVar26 = pfVar13[2];
        FUN_144a928e2(&local_128,local_148 + 0x40);
        fVar44 = fVar26 * local_108 + fVar25 * local_118 + fVar49 * local_128 + local_f8;
        fVar46 = fVar26 * fStack_104 + fVar25 * fStack_114 + fVar49 * fStack_124 + fStack_f4;
        fVar48 = fVar26 * fStack_100 + fVar25 * fStack_110 + fVar49 * fStack_120 + fStack_f0;
        fVar49 = fVar26 * fStack_fc + fVar25 * fStack_10c + fVar49 * fStack_11c + fStack_ec;
        *local_198 = fVar44;
        auVar23._4_4_ = fVar46;
        auVar23._0_4_ = fVar44;
        auVar23._8_4_ = fVar48;
        auVar23._12_4_ = fVar49;
        uVar17 = extractps(auVar23,1);
        *(undefined8 *)local_188 = uVar17;
        auVar24._4_4_ = fVar46;
        auVar24._0_4_ = fVar44;
        auVar24._8_4_ = fVar48;
        auVar24._12_4_ = fVar49;
        uVar17 = extractps(auVar24,2);
        *(undefined8 *)local_178 = uVar17;
        pfVar13 = (float *)(lVar16 + uVar34);
        fVar49 = *pfVar13;
        fVar25 = pfVar13[1];
        fVar26 = pfVar13[2];
        fVar44 = pfVar13[3];
        fVar46 = *(float *)(local_148 + 0x2d0);
        fVar48 = *(float *)(local_148 + 0x2d4);
        fVar27 = *(float *)(local_148 + 0x2d8);
        fVar28 = *(float *)(local_148 + 0x2dc);
        fVar36 = fVar27 * fVar25 * -1.0 +
                 fVar48 * fVar26 * 1.0 + fVar46 * fVar44 * 1.0 + fVar28 * fVar49;
        fVar37 = fVar27 * fVar49 * 1.0 +
                 fVar48 * fVar44 * 1.0 + fVar46 * fVar26 * -1.0 + fVar28 * fVar25;
        fVar38 = fVar27 * fVar44 * 1.0 +
                 fVar48 * fVar49 * -1.0 + fVar46 * fVar25 * 1.0 + fVar28 * fVar26;
        fVar49 = fVar27 * fVar26 * -1.0 +
                 fVar48 * fVar25 * -1.0 + fVar46 * fVar49 * -1.0 + fVar28 * fVar44;
        *local_1d8 = fVar36;
        auVar18._4_4_ = fVar37;
        auVar18._0_4_ = fVar36;
        auVar18._8_4_ = fVar38;
        auVar18._12_4_ = fVar49;
        uVar17 = extractps(auVar18,1);
        *(undefined8 *)local_1c8 = uVar17;
        auVar19._4_4_ = fVar37;
        auVar19._0_4_ = fVar36;
        auVar19._8_4_ = fVar38;
        auVar19._12_4_ = fVar49;
        uVar17 = extractps(auVar19,2);
        *(undefined8 *)local_1b8 = uVar17;
        auVar20._4_4_ = fVar37;
        auVar20._0_4_ = fVar36;
        auVar20._8_4_ = fVar38;
        auVar20._12_4_ = fVar49;
        uVar17 = extractps(auVar20,3);
        *(undefined8 *)local_1a8 = uVar17;
        pfVar13 = (float *)(lVar16 + 0x20 + uVar34);
        fVar49 = *pfVar13;
        fVar25 = pfVar13[1];
        fVar26 = pfVar13[2];
        local_1d8 = local_1d8 + local_1d0;
        local_1c8 = local_1c8 + local_1c0;
        local_1b8 = local_1b8 + local_1b0;
        local_1a8 = local_1a8 + local_1a0;
        local_198 = local_198 + local_190;
        local_188 = local_188 + local_180;
        local_178 = local_178 + local_170;
        FUN_144a928e2(&local_128,local_148 + 0xc0);
        fVar44 = local_f8 * 0.0 + fVar26 * local_108 + fVar25 * local_118 + fVar49 * local_128;
        fVar46 = fStack_f4 * 0.0 + fVar26 * fStack_104 + fVar25 * fStack_114 + fVar49 * fStack_124;
        fVar48 = fStack_f0 * 0.0 + fVar26 * fStack_100 + fVar25 * fStack_110 + fVar49 * fStack_120;
        fVar49 = fStack_ec * 0.0 + fVar26 * fStack_fc + fVar25 * fStack_10c + fVar49 * fStack_11c;
        pfVar13 = local_208 + local_200;
        *local_208 = fVar44;
        pfVar1 = local_1f8 + local_1f0;
        auVar21._4_4_ = fVar46;
        auVar21._0_4_ = fVar44;
        auVar21._8_4_ = fVar48;
        auVar21._12_4_ = fVar49;
        uVar17 = extractps(auVar21,1);
        *(undefined8 *)local_1f8 = uVar17;
        pfVar2 = local_1e8 + local_1e0;
        auVar22._4_4_ = fVar46;
        auVar22._0_4_ = fVar44;
        auVar22._8_4_ = fVar48;
        auVar22._12_4_ = fVar49;
        uVar17 = extractps(auVar22,2);
        *(undefined8 *)local_1e8 = uVar17;
        pfVar3 = local_238 + local_230;
        *local_238 = fVar42 * (fVar43 - fVar39);
        pfVar4 = local_228 + local_220;
        *local_228 = (fVar45 - fVar40) * fVar42;
        pfVar5 = local_218 + local_210;
        *local_218 = (fVar47 - fVar41) * fVar42;
        iVar35 = iVar35 + 1;
        piVar32 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar32 = (int *)(param_1 + 0x3c);
        }
        local_238 = pfVar3;
        local_228 = pfVar4;
        local_218 = pfVar5;
        local_208 = pfVar13;
        local_1f8 = pfVar1;
        local_1e8 = pfVar2;
      } while (iVar35 < *piVar32);
    }
  }
  if (local_140 != (undefined8 *)0x0) {
    LOCK();
    piVar32 = (int *)(local_140 + 1);
    *piVar32 = *piVar32 + -1;
    UNLOCK();
    if (*piVar32 == 0) {
      (**(code **)*local_140)(local_140,1);
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480c405c FUN_1480c405c body=3015 status=ok
// SIG undefined FUN_1480c405c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480c405c(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float fVar14;
  uint uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  int *piVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auStack_2f8 [32];
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float *local_298;
  int local_290;
  float *local_288;
  int local_280;
  float *local_278;
  int local_270;
  float *local_268;
  int local_260;
  float *local_258;
  int local_250;
  float *local_248;
  int local_240;
  float *local_238;
  int local_230;
  float *local_228;
  int local_220;
  float *local_218;
  int local_210;
  float *local_208;
  int local_200;
  float *local_1f8;
  int local_1f0;
  float *local_1e8;
  int local_1e0;
  float *local_1d8;
  int local_1d0;
  float *local_1c8;
  undefined8 uStack_1c0;
  int local_1b8;
  int *local_1a8;
  undefined8 uStack_1a0;
  int local_198;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined1 local_160 [8];
  longlong local_158;
  undefined8 *local_150;
  undefined1 local_148 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  FUN_1405c93a6(local_160,param_1);
  local_150 = (undefined8 *)0x0;
  puVar21 = (undefined8 *)FUN_1405c943a(local_158,local_148);
  puVar19 = local_150;
  puVar16 = local_150;
  if (local_150 != puVar21) {
    if (puVar21 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
      UNLOCK();
    }
    puVar16 = puVar21;
    if (local_150 != (undefined8 *)0x0) {
      LOCK();
      piVar22 = (int *)(local_150 + 1);
      *piVar22 = *piVar22 + -1;
      UNLOCK();
      if (*piVar22 == 0) {
        puVar16 = (undefined8 *)*local_150;
        local_150 = puVar21;
        (*(code *)*puVar16)(puVar19,1);
        puVar16 = local_150;
      }
    }
  }
  local_150 = puVar16;
  local_198 = 0;
  local_1a8 = (int *)0x0;
  uStack_1a0 = 0;
  FUN_144a98d08(&local_1a8,param_1);
  local_1b8 = 0;
  local_1c8 = (float *)0x0;
  uStack_1c0 = 0;
  FUN_144a98dce(&local_1c8,param_1);
  FUN_144a76c20(&local_1f8,param_1);
  FUN_144a76c20(&local_1e8,param_1);
  FUN_144a76c20(&local_1d8,param_1);
  FUN_144a76c20(&local_238,param_1);
  FUN_144a76c20(&local_228,param_1);
  FUN_144a76c20(&local_218,param_1);
  FUN_144a76c20(&local_208,param_1);
  FUN_144a76c20(&local_268,param_1);
  FUN_144a76c20(&local_258,param_1);
  FUN_144a76c20(&local_248,param_1);
  FUN_144a76c20(&local_298,param_1);
  FUN_144a76c20(&local_288,param_1);
  FUN_144a76c20(&local_278,param_1);
  fVar30 = DAT_14c846338;
  fVar27 = DAT_14c846330._4_4_;
  fVar14 = (float)DAT_14c846330;
  uVar15 = *(uint *)(local_158 + 0x3c0);
  iVar25 = ~uVar15 + *(int *)(local_158 + 0x3d0);
  if (iVar25 < 0) {
    FUN_144a928e2(&local_138,local_158 + 0x40);
    fVar42 = DAT_14c846358;
    fVar38 = DAT_14c846350._4_4_;
    fVar41 = (float)DAT_14c846350;
    fVar37 = DAT_14c84634c;
    fVar32 = DAT_14c846348;
    fVar31 = DAT_14c846344;
    fVar29 = DAT_14c84633c._4_4_;
    fVar40 = fVar30 * local_118 + fVar27 * local_128 + fVar14 * local_138 + local_108;
    fVar43 = fVar30 * fStack_114 + fVar27 * fStack_124 + fVar14 * fStack_134 + fStack_104;
    fVar44 = fVar30 * fStack_110 + fVar27 * fStack_120 + fVar14 * fStack_130 + fStack_100;
    fVar14 = *(float *)(local_158 + 0x2d0);
    fVar27 = *(float *)(local_158 + 0x2d4);
    fVar30 = *(float *)(local_158 + 0x2d8);
    fVar33 = *(float *)(local_158 + 0x2dc);
    FUN_144a928e2(&local_138,local_158 + 0xc0);
    fVar28 = DAT_14c846338;
    fVar26 = DAT_14c846330._4_4_;
    fVar39 = (float)DAT_14c846330;
    piVar22 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar22 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar22) {
      iVar25 = 0;
      do {
        pfVar13 = local_1f8 + local_1f0;
        *local_1f8 = fVar40;
        pfVar1 = local_1e8 + local_1e0;
        *local_1e8 = fVar43;
        pfVar2 = local_1d8 + local_1d0;
        *local_1d8 = fVar44;
        pfVar3 = local_238 + local_230;
        *local_238 = fVar14 * fVar37 * 1.0 + fVar33 * fVar29 + fVar27 * fVar32 * 1.0 +
                     fVar30 * fVar31 * -1.0;
        pfVar4 = local_228 + local_220;
        *local_228 = fVar14 * fVar32 * -1.0 + fVar33 * fVar31 + fVar27 * fVar37 * 1.0 +
                     fVar30 * fVar29 * 1.0;
        pfVar5 = local_218 + local_210;
        *local_218 = fVar14 * fVar31 * 1.0 + fVar33 * fVar32 + fVar27 * fVar29 * -1.0 +
                     fVar30 * fVar37 * 1.0;
        pfVar6 = local_208 + local_200;
        *local_208 = fVar14 * fVar29 * -1.0 + fVar33 * fVar37 + fVar27 * fVar31 * -1.0 +
                     fVar30 * fVar32 * -1.0;
        pfVar7 = local_268 + local_260;
        *local_268 = local_108 * 0.0 + fVar42 * local_118 + fVar38 * local_128 + fVar41 * local_138;
        pfVar8 = local_258 + local_250;
        *local_258 = fStack_104 * 0.0 +
                     fVar42 * fStack_114 + fVar38 * fStack_124 + fVar41 * fStack_134;
        pfVar9 = local_248 + local_240;
        *local_248 = fStack_100 * 0.0 +
                     fVar42 * fStack_110 + fVar38 * fStack_120 + fVar41 * fStack_130;
        pfVar10 = local_298 + local_290;
        *local_298 = fVar39;
        pfVar11 = local_288 + local_280;
        *local_288 = fVar26;
        pfVar12 = local_278 + local_270;
        *local_278 = fVar28;
        iVar25 = iVar25 + 1;
        piVar22 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar22 = (int *)(param_1 + 0x3c);
        }
        local_298 = pfVar10;
        local_288 = pfVar11;
        local_278 = pfVar12;
        local_268 = pfVar7;
        local_258 = pfVar8;
        local_248 = pfVar9;
        local_238 = pfVar3;
        local_228 = pfVar4;
        local_218 = pfVar5;
        local_208 = pfVar6;
        local_1f8 = pfVar13;
        local_1e8 = pfVar1;
        local_1d8 = pfVar2;
      } while (iVar25 < *piVar22);
    }
  }
  else {
    piVar22 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar22 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar22) {
      iVar23 = 0;
      do {
        iVar20 = *local_1a8;
        if (iVar25 <= *local_1a8) {
          iVar20 = iVar25;
        }
        if (iVar20 < 1) {
          iVar20 = 0;
        }
        fVar14 = *local_1c8;
        lVar17 = *(longlong *)(local_158 + 0x3b0);
        uVar24 = (ulonglong)
                 ((uint)*(ushort *)
                         (*(longlong *)(local_158 + 0x3c8) + (longlong)(int)(iVar20 + uVar15) * 2) *
                 0x30);
        pfVar13 = (float *)(lVar17 + 0x10 + uVar24);
        fVar27 = *pfVar13;
        fVar30 = pfVar13[1];
        fVar33 = pfVar13[2];
        local_1c8 = local_1c8 + local_1b8;
        local_1a8 = local_1a8 + local_198;
        FUN_144a928e2(&local_138,local_158 + 0x140);
        fVar40 = fVar33 * local_118 + fVar30 * local_128 + fVar27 * local_138 + local_108;
        fVar41 = fVar33 * fStack_114 + fVar30 * fStack_124 + fVar27 * fStack_134 + fStack_104;
        fVar42 = fVar33 * fStack_110 + fVar30 * fStack_120 + fVar27 * fStack_130 + fStack_100;
        fStack_2b4 = fVar33 * fStack_10c + fVar30 * fStack_11c + fVar27 * fStack_12c + fStack_fc;
        pfVar13 = (float *)(lVar17 + 0x10 + uVar24);
        fVar27 = *pfVar13;
        fVar30 = pfVar13[1];
        fVar33 = pfVar13[2];
        local_2b8 = fVar42;
        fStack_2b0 = fVar42;
        fStack_2ac = fStack_2b4;
        local_2a8 = fVar41;
        fStack_2a4 = fVar41;
        fStack_2a0 = fStack_2b4;
        fStack_29c = fStack_2b4;
        FUN_144a928e2(&local_138,local_158 + 0x40);
        fVar49 = fVar33 * local_118 + fVar30 * local_128 + fVar27 * local_138 + local_108;
        fVar50 = fVar33 * fStack_114 + fVar30 * fStack_124 + fVar27 * fStack_134 + fStack_104;
        fVar51 = fVar33 * fStack_110 + fVar30 * fStack_120 + fVar27 * fStack_130 + fStack_100;
        pfVar13 = (float *)(lVar17 + uVar24);
        fVar27 = *pfVar13;
        fVar30 = pfVar13[1];
        fVar33 = pfVar13[2];
        fVar39 = pfVar13[3];
        fVar26 = *(float *)(local_158 + 0x2e0);
        fVar28 = *(float *)(local_158 + 0x2e4);
        fVar29 = *(float *)(local_158 + 0x2e8);
        fVar31 = *(float *)(local_158 + 0x2ec);
        local_178 = fVar29 * fVar30 * -1.0 +
                    fVar28 * fVar33 * 1.0 + fVar26 * fVar39 * 1.0 + fVar31 * fVar27;
        fStack_174 = fVar29 * fVar27 * 1.0 +
                     fVar28 * fVar39 * 1.0 + fVar26 * fVar33 * -1.0 + fVar31 * fVar30;
        fStack_170 = fVar29 * fVar39 * 1.0 +
                     fVar28 * fVar27 * -1.0 + fVar26 * fVar30 * 1.0 + fVar31 * fVar33;
        fStack_16c = fVar29 * fVar33 * -1.0 +
                     fVar28 * fVar30 * -1.0 + fVar26 * fVar27 * -1.0 + fVar31 * fVar39;
        pfVar13 = (float *)(lVar17 + uVar24);
        fVar27 = *pfVar13;
        fVar30 = pfVar13[1];
        fVar33 = pfVar13[2];
        fVar39 = pfVar13[3];
        fVar26 = *(float *)(local_158 + 0x2d0);
        fVar28 = *(float *)(local_158 + 0x2d4);
        fVar29 = *(float *)(local_158 + 0x2d8);
        fVar31 = *(float *)(local_158 + 0x2dc);
        local_188 = fVar29 * fVar30 * -1.0 +
                    fVar28 * fVar33 * 1.0 + fVar26 * fVar39 * 1.0 + fVar31 * fVar27;
        fStack_184 = fVar29 * fVar27 * 1.0 +
                     fVar28 * fVar39 * 1.0 + fVar26 * fVar33 * -1.0 + fVar31 * fVar30;
        fStack_180 = fVar29 * fVar39 * 1.0 +
                     fVar28 * fVar27 * -1.0 + fVar26 * fVar30 * 1.0 + fVar31 * fVar33;
        fStack_17c = fVar29 * fVar33 * -1.0 +
                     fVar28 * fVar30 * -1.0 + fVar26 * fVar27 * -1.0 + fVar31 * fVar39;
        pfVar13 = (float *)(lVar17 + 0x20 + uVar24);
        fVar27 = *pfVar13;
        fVar30 = pfVar13[1];
        fVar33 = pfVar13[2];
        FUN_144a928e2(&local_138,local_158 + 0x1c0);
        fVar46 = local_108 * 0.0 + fVar33 * local_118 + fVar30 * local_128 + fVar27 * local_138;
        fVar47 = fStack_104 * 0.0 + fVar33 * fStack_114 + fVar30 * fStack_124 + fVar27 * fStack_134;
        fVar48 = fStack_100 * 0.0 + fVar33 * fStack_110 + fVar30 * fStack_120 + fVar27 * fStack_130;
        fStack_2d0 = fStack_fc * 0.0 +
                     fVar33 * fStack_10c + fVar30 * fStack_11c + fVar27 * fStack_12c;
        pfVar13 = (float *)(lVar17 + 0x20 + uVar24);
        fVar30 = *pfVar13;
        fVar33 = pfVar13[1];
        fVar39 = pfVar13[2];
        local_2d8 = fVar47;
        fStack_2d4 = fVar47;
        fStack_2cc = fStack_2d0;
        local_2c8 = fVar48;
        fStack_2c4 = fStack_2d0;
        fStack_2c0 = fVar48;
        fStack_2bc = fStack_2d0;
        FUN_144a928e2(&local_138,local_158 + 0xc0);
        fVar26 = fVar30 * local_138;
        fVar28 = fVar30 * fStack_134;
        fVar30 = fVar30 * fStack_130;
        fVar31 = fVar33 * local_128;
        fVar32 = fVar33 * fStack_124;
        fVar33 = fVar33 * fStack_120;
        fVar37 = fVar39 * local_118;
        fVar38 = fVar39 * fStack_114;
        fVar39 = fVar39 * fStack_110;
        fVar43 = local_108 * 0.0;
        fVar44 = fStack_104 * 0.0;
        fVar45 = fStack_100 * 0.0;
        fVar49 = fVar49 - fVar40;
        fVar50 = fVar50 - fVar41;
        fVar51 = fVar51 - fVar42;
        fVar41 = fVar14 * fVar51 + local_2b8;
        fVar42 = fVar14 * fVar50 + local_2a8;
        FUN_144afe1e6(&local_138,&local_178,&local_188);
        fVar27 = local_138 * local_138 + fStack_134 * fStack_134;
        fVar29 = fStack_130 * fStack_130 + fStack_12c * fStack_12c;
        auVar34._0_4_ = fVar29 + fVar27;
        auVar34._4_4_ = fVar29 + fVar27;
        auVar34._8_4_ = fVar27 + fVar29;
        auVar34._12_4_ = fVar27 + fVar29;
        auVar35 = sqrtps(auVar34,auVar34);
        auVar35 = divps(_DAT_1499314a0,auVar35);
        auVar36._0_4_ = auVar35._0_4_ * local_138;
        auVar36._4_4_ = auVar35._4_4_ * fStack_134;
        auVar36._8_4_ = auVar35._8_4_ * fStack_130;
        auVar36._12_4_ = auVar35._12_4_ * fStack_12c;
        auVar35._4_4_ = -(uint)(1e-08 <= auVar34._4_4_);
        auVar35._0_4_ = -(uint)(1e-08 <= auVar34._0_4_);
        auVar35._8_4_ = -(uint)(1e-08 <= auVar34._8_4_);
        auVar35._12_4_ = -(uint)(1e-08 <= auVar34._12_4_);
        auVar35 = blendvps(_DAT_149932320,auVar36,auVar35);
        fVar27 = *(float *)(local_158 + 0x2f0);
        pfVar13 = local_1f8 + local_1f0;
        *local_1f8 = fVar14 * fVar49 + fVar40;
        pfVar1 = local_1e8 + local_1e0;
        *local_1e8 = fVar42;
        pfVar2 = local_1d8 + local_1d0;
        *local_1d8 = fVar41;
        pfVar3 = local_238 + local_230;
        *local_238 = auVar35._0_4_;
        pfVar4 = local_228 + local_220;
        uVar18 = extractps(auVar35,1);
        *(undefined8 *)local_228 = uVar18;
        pfVar5 = local_218 + local_210;
        uVar18 = extractps(auVar35,2);
        *(undefined8 *)local_218 = uVar18;
        pfVar6 = local_208 + local_200;
        uVar18 = extractps(auVar35,3);
        *(undefined8 *)local_208 = uVar18;
        pfVar7 = local_268 + local_260;
        *local_268 = ((fVar43 + fVar37 + fVar31 + fVar26) - fVar46) * fVar14 + fVar46;
        pfVar8 = local_258 + local_250;
        *local_258 = ((fVar44 + fVar38 + fVar32 + fVar28) - fVar47) * fVar14 + local_2d8;
        fVar27 = (float)(-(uint)(0.0 < fVar27) & (uint)(1.0 / fVar27));
        pfVar9 = local_248 + local_240;
        *local_248 = ((fVar45 + fVar39 + fVar33 + fVar30) - fVar48) * fVar14 + local_2c8;
        pfVar10 = local_298 + local_290;
        *local_298 = fVar27 * fVar49;
        pfVar11 = local_288 + local_280;
        *local_288 = fVar50 * fVar27;
        pfVar12 = local_278 + local_270;
        *local_278 = fVar51 * fVar27;
        iVar23 = iVar23 + 1;
        piVar22 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar22 = (int *)(param_1 + 0x3c);
        }
        local_298 = pfVar10;
        local_288 = pfVar11;
        local_278 = pfVar12;
        local_268 = pfVar7;
        local_258 = pfVar8;
        local_248 = pfVar9;
        local_238 = pfVar3;
        local_228 = pfVar4;
        local_218 = pfVar5;
        local_208 = pfVar6;
        local_1f8 = pfVar13;
        local_1e8 = pfVar1;
        local_1d8 = pfVar2;
      } while (iVar23 < *piVar22);
    }
  }
  if (local_150 != (undefined8 *)0x0) {
    LOCK();
    piVar22 = (int *)(local_150 + 1);
    *piVar22 = *piVar22 + -1;
    UNLOCK();
    if (*piVar22 == 0) {
      (**(code **)*local_150)(local_150,1);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480c4c24 FUN_1480c4c24 body=3773 status=ok
// SIG undefined FUN_1480c4c24(void)

void FUN_1480c4c24(char *param_1)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int *piVar7;
  undefined8 *puVar8;
  char *pcVar9;
  int iVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *puVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  undefined8 extraout_XMM0_Qa;
  undefined4 extraout_XMM0_Db;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar31 [12];
  undefined1 auVar30 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auStack_1a8 [32];
  float *local_188;
  int local_180;
  float *local_178;
  int local_170;
  float *local_168;
  int local_160;
  int *local_158;
  int local_150;
  uint *local_148;
  undefined8 uStack_140;
  int local_138;
  char *local_130;
  int *local_128 [2];
  int local_118;
  int *local_110;
  int local_100;
  int *local_f8;
  int local_e8;
  int local_d8;
  int iStack_d4;
  int local_d0;
  undefined1 local_c8 [8];
  longlong local_c0;
  undefined8 *local_b8;
  undefined1 local_b0 [16];
  ulonglong local_a0;
  undefined1 auVar29 [16];
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_1405c93a6(local_c8,param_1);
  local_b8 = (undefined8 *)0x0;
  puVar11 = (undefined8 *)FUN_1405c943a(local_c0,local_b0);
  puVar19 = local_b8;
  puVar8 = local_b8;
  if (local_b8 != puVar11) {
    if (puVar11 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
      UNLOCK();
    }
    puVar8 = puVar11;
    if (local_b8 != (undefined8 *)0x0) {
      LOCK();
      piVar16 = (int *)(local_b8 + 1);
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (*piVar16 == 0) {
        puVar8 = (undefined8 *)*local_b8;
        local_b8 = puVar11;
        (*(code *)*puVar8)(puVar19,1);
        puVar8 = local_b8;
      }
    }
  }
  local_b8 = puVar8;
  local_130 = param_1;
  FUN_1416b93de(local_128,param_1);
  local_d8 = 0;
  iStack_d4 = 0;
  uVar22 = 0;
  local_d0 = 0;
  local_138 = 0;
  local_148 = (uint *)0x0;
  uStack_140 = 0;
  FUN_144a98d08(&local_148,param_1);
  FUN_144a76cd4(&local_158,param_1);
  FUN_144a76c20(&local_188,param_1);
  FUN_144a76c20(&local_178,param_1);
  auVar30._0_8_ = FUN_144a76c20(&local_168,param_1);
  auVar30._8_8_ = extraout_XMM0_Qb;
  if (local_b8 != (undefined8 *)0x0) {
    if (*(int *)(local_b8 + 7) < 1) {
      piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar16 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar16) {
        lVar26 = 0;
        do {
          pcVar9 = local_130;
          auVar31 = auVar30._4_12_;
          piVar16 = local_128[0] + local_118;
          local_d8 = *local_128[0];
          piVar1 = local_110 + local_100;
          iStack_d4 = *local_110;
          piVar2 = local_f8 + local_e8;
          local_d0 = *local_f8;
          piVar7 = local_158 + local_150;
          *local_158 = 0;
          local_158 = piVar7;
          local_128[0] = piVar16;
          local_110 = piVar1;
          local_f8 = piVar2;
          if (local_d0 == -1) {
            if (*local_130 == '\0') {
              lVar15 = *(longlong *)(local_130 + 0x80) + 0x88;
            }
            else {
              lVar15 = *(longlong *)(local_130 + 0x58);
            }
            uVar22 = *(int *)(lVar15 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar15 + 4) = uVar22;
            fVar27 = (float)(uVar22 >> 9 | 0x3f800000) + -1.0;
            if (*local_130 == '\x01') {
              lVar15 = *(longlong *)(local_130 + 0x58);
            }
            else {
              lVar15 = *(longlong *)(local_130 + 0x80) + 0x88;
            }
            uVar22 = *(int *)(lVar15 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar15 + 4) = uVar22;
            fVar28 = (float)(uVar22 >> 9 | 0x3f800000) + -1.0;
            auVar31 = (undefined1  [12])0x0;
          }
          else {
            if (*local_130 == '\0') {
              plVar14 = (longlong *)(*(longlong *)(local_130 + 0x80) + 0x90);
            }
            else {
              plVar14 = *(longlong **)(local_130 + 0x60);
              if (*plVar14 == 0) {
                uVar13 = FUN_14153c902((longlong)*(int *)(local_130 + 0x3c) << 2,0);
                auVar29._8_8_ = extraout_XMM0_Qb_00;
                auVar29._0_8_ = extraout_XMM0_Qa;
                auVar31 = auVar29._4_12_;
                **(undefined8 **)(pcVar9 + 0x60) = uVar13;
                plVar14 = *(longlong **)(pcVar9 + 0x60);
              }
            }
            uVar22 = *(uint *)(*plVar14 + lVar26 * 4);
            *(uint *)(*plVar14 + lVar26 * 4) = uVar22 + 1;
            iVar20 = (local_d0 << 0x10 | uVar22) * 0x19660d;
            iVar10 = iVar20 + 0x3c6ef35f;
            iVar24 = (iStack_d4 * 0x19660d + 0x3c6ef35f) * iVar10 + local_d8 * 0x19660d;
            iVar25 = iVar24 + 0x3c6ef35f;
            iVar23 = iStack_d4 * 0x19660d + iVar10 * iVar25 + 0x3c6ef35f;
            iVar10 = iVar20 + iVar25 * iVar23 + 0x3c6ef35f;
            uVar22 = iVar10 * iVar23 + iVar24 + 0x3c6ef35f;
            fVar28 = (float)(uVar22 >> 8) * 5.9604645e-08;
            fVar27 = (float)(iVar10 * uVar22 + iVar23 >> 8) * 5.9604645e-08;
          }
          if (fVar28 < 0.0) {
            auVar30._0_4_ = sqrtf(fVar28);
            auVar30._4_4_ = extraout_XMM0_Db;
            auVar30._8_8_ = extraout_XMM0_Qb_01;
          }
          else {
            auVar30._0_4_ = SQRT(fVar28);
            auVar30._4_12_ = auVar31;
          }
          fVar28 = auVar30._0_4_;
          pfVar4 = local_188 + local_180;
          *local_188 = 1.0 - fVar28;
          pfVar5 = local_178 + local_170;
          *local_178 = (1.0 - fVar27) * fVar28;
          pfVar6 = local_168 + local_160;
          *local_168 = fVar27 * fVar28;
          lVar26 = lVar26 + 1;
          piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar16 = (int *)(param_1 + 0x3c);
          }
          local_188 = pfVar4;
          local_178 = pfVar5;
          local_168 = pfVar6;
        } while (lVar26 < *piVar16);
      }
      goto LAB_1480c5a6c;
    }
    uVar22 = *(int *)(local_b8 + 7) - 1;
    if ((*(byte *)(local_c0 + 0x328) & 0x20) != 0) {
      piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar16 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar16) {
        lVar26 = 0;
        do {
          pcVar9 = local_130;
          piVar16 = local_128[0] + local_118;
          local_d8 = *local_128[0];
          piVar1 = local_110 + local_100;
          iStack_d4 = *local_110;
          piVar2 = local_f8 + local_e8;
          local_d0 = *local_f8;
          puVar3 = local_148 + local_138;
          uVar17 = *local_148;
          if ((int)uVar22 <= (int)*local_148) {
            uVar17 = uVar22;
          }
          if ((int)uVar17 < 1) {
            uVar17 = 0;
          }
          iVar10 = 0;
          local_148 = puVar3;
          local_128[0] = piVar16;
          local_110 = piVar1;
          local_f8 = piVar2;
          if ((int)uVar17 < *(int *)(local_b8 + 0x4c)) {
            uVar12 = local_b8[0x4b];
            if ((uVar12 & 1) == 0) {
              iVar25 = *(int *)(uVar12 + 0x10 + (ulonglong)uVar17 * 0x40);
            }
            else {
              uVar12 = (longlong)local_b8 + ((longlong)uVar12 >> 0x18) + 600;
              iVar25 = *(int *)((ulonglong)uVar17 * 0x40 + 0x10 + uVar12);
            }
            iVar10 = 0;
            if (iVar25 != 0) {
              if (local_d0 == -1) {
                if (*local_130 == '\0') {
                  lVar15 = *(longlong *)(local_130 + 0x80) + 0x88;
                }
                else {
                  lVar15 = *(longlong *)(local_130 + 0x58);
                }
                uVar18 = *(int *)(lVar15 + 4) * 0xbb38435 + 0x3619636b;
                *(uint *)(lVar15 + 4) = uVar18;
                fVar27 = (float)(uVar18 >> 9 | 0x3f800000) + -1.0;
              }
              else {
                if (*local_130 == '\0') {
                  plVar14 = (longlong *)(*(longlong *)(local_130 + 0x80) + 0x90);
                }
                else {
                  plVar14 = *(longlong **)(local_130 + 0x60);
                  if (*plVar14 == 0) {
                    uVar13 = FUN_14153c902((longlong)*(int *)(local_130 + 0x3c) << 2,0);
                    **(undefined8 **)(pcVar9 + 0x60) = uVar13;
                    plVar14 = *(longlong **)(pcVar9 + 0x60);
                  }
                }
                uVar18 = *(uint *)(*plVar14 + lVar26 * 4);
                *(uint *)(*plVar14 + lVar26 * 4) = uVar18 + 1;
                iVar25 = (local_d0 << 0x10 | uVar18) * 0x19660d;
                iVar10 = iVar25 + 0x3c6ef35f;
                iVar23 = (iStack_d4 * 0x19660d + 0x3c6ef35f) * iVar10 + local_d8 * 0x19660d;
                iVar20 = iVar23 + 0x3c6ef35f;
                iVar10 = iStack_d4 * 0x19660d + iVar10 * iVar20 + 0x3c6ef35f;
                fVar27 = (float)((iVar25 + iVar20 * iVar10 + 0x3c6ef35f) * iVar10 + iVar23 +
                                 0x3c6ef35fU >> 8) * 5.9604645e-08;
              }
              pcVar9 = local_130;
              if (local_d0 == -1) {
                if (*local_130 == '\0') {
                  lVar15 = *(longlong *)(local_130 + 0x80) + 0x88;
                }
                else {
                  lVar15 = *(longlong *)(local_130 + 0x58);
                }
                uVar18 = *(int *)(lVar15 + 4) * 0xbb38435 + 0x3619636b;
                *(uint *)(lVar15 + 4) = uVar18;
                fVar28 = (float)(uVar18 >> 9 | 0x3f800000) + -1.0;
              }
              else {
                if (*local_130 == '\0') {
                  plVar14 = (longlong *)(*(longlong *)(local_130 + 0x80) + 0x90);
                }
                else {
                  plVar14 = *(longlong **)(local_130 + 0x60);
                  if (*plVar14 == 0) {
                    uVar13 = FUN_14153c902((longlong)*(int *)(local_130 + 0x3c) << 2,0);
                    **(undefined8 **)(pcVar9 + 0x60) = uVar13;
                    plVar14 = *(longlong **)(pcVar9 + 0x60);
                  }
                }
                uVar18 = *(uint *)(*plVar14 + lVar26 * 4);
                *(uint *)(*plVar14 + lVar26 * 4) = uVar18 + 1;
                iVar10 = (local_d0 << 0x10 | uVar18) * 0x19660d;
                iVar25 = iVar10 + 0x3c6ef35f;
                iVar23 = (iStack_d4 * 0x19660d + 0x3c6ef35f) * iVar25 + local_d8 * 0x19660d;
                iVar20 = iVar23 + 0x3c6ef35f;
                iVar25 = iStack_d4 * 0x19660d + iVar25 * iVar20 + 0x3c6ef35f;
                fVar28 = (float)((iVar10 + iVar20 * iVar25 + 0x3c6ef35f) * iVar25 + iVar23 +
                                 0x3c6ef35fU >> 8) * 5.9604645e-08;
              }
              lVar15 = uVar12 + (ulonglong)uVar17 * 0x40;
              iVar10 = (int)((float)*(int *)(lVar15 + 0x10) * fVar28);
              uVar12 = *(ulonglong *)(lVar15 + 8);
              uVar21 = lVar15 + 8 + ((longlong)uVar12 >> 0x18);
              if ((uVar12 & 1) == 0) {
                uVar21 = uVar12;
              }
              if (*(float *)(uVar21 + (longlong)iVar10 * 4) <= fVar27) {
                uVar12 = *(ulonglong *)(lVar15 + 0x18);
                uVar21 = lVar15 + 0x18 + ((longlong)uVar12 >> 0x18);
                if ((uVar12 & 1) == 0) {
                  uVar21 = uVar12;
                }
                iVar10 = *(int *)(uVar21 + (longlong)iVar10 * 4);
              }
              puVar19 = local_b8 + 2;
              if ((undefined8 *)local_b8[6] != (undefined8 *)0x0) {
                puVar19 = (undefined8 *)local_b8[6];
              }
              iVar10 = *(uint *)((longlong)puVar19 + (ulonglong)uVar17 * 0x1c + 4) / 3 + iVar10;
            }
          }
          pcVar9 = local_130;
          piVar16 = local_158 + local_150;
          *local_158 = iVar10;
          local_158 = piVar16;
          if (local_d0 == -1) {
            if (*local_130 == '\0') {
              lVar15 = *(longlong *)(local_130 + 0x80) + 0x88;
            }
            else {
              lVar15 = *(longlong *)(local_130 + 0x58);
            }
            uVar17 = *(int *)(lVar15 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar15 + 4) = uVar17;
            fVar27 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
            if (*local_130 == '\x01') {
              lVar15 = *(longlong *)(local_130 + 0x58);
            }
            else {
              lVar15 = *(longlong *)(local_130 + 0x80) + 0x88;
            }
            uVar17 = *(int *)(lVar15 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar15 + 4) = uVar17;
            fVar28 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
          }
          else {
            if (*local_130 == '\0') {
              plVar14 = (longlong *)(*(longlong *)(local_130 + 0x80) + 0x90);
            }
            else {
              plVar14 = *(longlong **)(local_130 + 0x60);
              if (*plVar14 == 0) {
                uVar13 = FUN_14153c902((longlong)*(int *)(local_130 + 0x3c) << 2,0);
                **(undefined8 **)(pcVar9 + 0x60) = uVar13;
                plVar14 = *(longlong **)(pcVar9 + 0x60);
              }
            }
            uVar17 = *(uint *)(*plVar14 + lVar26 * 4);
            *(uint *)(*plVar14 + lVar26 * 4) = uVar17 + 1;
            iVar10 = (local_d0 << 0x10 | uVar17) * 0x19660d;
            iVar20 = iVar10 + 0x3c6ef35f;
            iVar23 = (iStack_d4 * 0x19660d + 0x3c6ef35f) * iVar20 + local_d8 * 0x19660d;
            iVar25 = iVar23 + 0x3c6ef35f;
            iVar20 = iStack_d4 * 0x19660d + iVar20 * iVar25 + 0x3c6ef35f;
            iVar10 = iVar10 + iVar25 * iVar20 + 0x3c6ef35f;
            uVar17 = iVar10 * iVar20 + iVar23 + 0x3c6ef35f;
            fVar28 = (float)(uVar17 >> 8) * 5.9604645e-08;
            fVar27 = (float)(iVar10 * uVar17 + iVar20 >> 8) * 5.9604645e-08;
          }
          if (fVar28 < 0.0) {
            fVar28 = sqrtf(fVar28);
          }
          else {
            fVar28 = SQRT(fVar28);
          }
          pfVar4 = local_188 + local_180;
          *local_188 = 1.0 - fVar28;
          pfVar5 = local_178 + local_170;
          *local_178 = (1.0 - fVar27) * fVar28;
          pfVar6 = local_168 + local_160;
          *local_168 = fVar27 * fVar28;
          lVar26 = lVar26 + 1;
          piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar16 = (int *)(param_1 + 0x3c);
          }
          local_188 = pfVar4;
          local_178 = pfVar5;
          local_168 = pfVar6;
        } while (lVar26 < *piVar16);
      }
      goto LAB_1480c5a6c;
    }
  }
  piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar16 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar16) {
    lVar26 = 0;
    do {
      pcVar9 = local_130;
      piVar16 = local_128[0] + local_118;
      local_d8 = *local_128[0];
      piVar1 = local_110 + local_100;
      iStack_d4 = *local_110;
      piVar2 = local_f8 + local_e8;
      local_d0 = *local_f8;
      puVar3 = local_148 + local_138;
      uVar17 = *local_148;
      if ((int)uVar22 <= (int)*local_148) {
        uVar17 = uVar22;
      }
      uVar12 = (ulonglong)uVar17;
      if ((int)uVar17 < 1) {
        uVar12 = 0;
      }
      puVar19 = local_b8 + 2;
      if ((undefined8 *)local_b8[6] != (undefined8 *)0x0) {
        puVar19 = (undefined8 *)local_b8[6];
      }
      uVar17 = *(uint *)((longlong)puVar19 + uVar12 * 0x1c + 4);
      local_148 = puVar3;
      local_128[0] = piVar16;
      local_110 = piVar1;
      local_f8 = piVar2;
      if (local_d0 == -1) {
        if (*local_130 == '\0') {
          lVar15 = *(longlong *)(local_130 + 0x80) + 0x88;
        }
        else {
          lVar15 = *(longlong *)(local_130 + 0x58);
        }
        uVar18 = *(int *)(lVar15 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(lVar15 + 4) = uVar18;
        fVar27 = (float)(uVar18 >> 9 | 0x3f800000) + -1.0;
      }
      else {
        if (*local_130 == '\0') {
          plVar14 = (longlong *)(*(longlong *)(local_130 + 0x80) + 0x90);
        }
        else {
          plVar14 = *(longlong **)(local_130 + 0x60);
          if (*plVar14 == 0) {
            uVar13 = FUN_14153c902((longlong)*(int *)(local_130 + 0x3c) << 2,0);
            **(undefined8 **)(pcVar9 + 0x60) = uVar13;
            plVar14 = *(longlong **)(pcVar9 + 0x60);
          }
        }
        uVar18 = *(uint *)(*plVar14 + lVar26 * 4);
        *(uint *)(*plVar14 + lVar26 * 4) = uVar18 + 1;
        iVar10 = (local_d0 << 0x10 | uVar18) * 0x19660d;
        iVar25 = iVar10 + 0x3c6ef35f;
        iVar23 = (iStack_d4 * 0x19660d + 0x3c6ef35f) * iVar25 + local_d8 * 0x19660d;
        iVar20 = iVar23 + 0x3c6ef35f;
        iVar25 = iStack_d4 * 0x19660d + iVar25 * iVar20 + 0x3c6ef35f;
        fVar27 = (float)((iVar10 + iVar20 * iVar25 + 0x3c6ef35f) * iVar25 + iVar23 + 0x3c6ef35fU >>
                        8) * 5.9604645e-08;
      }
      pcVar9 = local_130;
      puVar19 = local_b8 + 2;
      if ((undefined8 *)local_b8[6] != (undefined8 *)0x0) {
        puVar19 = (undefined8 *)local_b8[6];
      }
      piVar16 = local_158 + local_150;
      *local_158 = (int)((float)*(uint *)((longlong)puVar19 + uVar12 * 0x1c + 8) * fVar27) +
                   uVar17 / 3;
      local_158 = piVar16;
      if (local_d0 == -1) {
        if (*local_130 == '\0') {
          lVar15 = *(longlong *)(local_130 + 0x80) + 0x88;
        }
        else {
          lVar15 = *(longlong *)(local_130 + 0x58);
        }
        uVar17 = *(int *)(lVar15 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(lVar15 + 4) = uVar17;
        fVar27 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
        if (*local_130 == '\x01') {
          lVar15 = *(longlong *)(local_130 + 0x58);
        }
        else {
          lVar15 = *(longlong *)(local_130 + 0x80) + 0x88;
        }
        uVar17 = *(int *)(lVar15 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(lVar15 + 4) = uVar17;
        fVar28 = (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
      }
      else {
        if (*local_130 == '\0') {
          plVar14 = (longlong *)(*(longlong *)(local_130 + 0x80) + 0x90);
        }
        else {
          plVar14 = *(longlong **)(local_130 + 0x60);
          if (*plVar14 == 0) {
            uVar13 = FUN_14153c902((longlong)*(int *)(local_130 + 0x3c) << 2,0);
            **(undefined8 **)(pcVar9 + 0x60) = uVar13;
            plVar14 = *(longlong **)(pcVar9 + 0x60);
          }
        }
        uVar17 = *(uint *)(*plVar14 + lVar26 * 4);
        *(uint *)(*plVar14 + lVar26 * 4) = uVar17 + 1;
        iVar10 = (local_d0 << 0x10 | uVar17) * 0x19660d;
        iVar20 = iVar10 + 0x3c6ef35f;
        iVar23 = (iStack_d4 * 0x19660d + 0x3c6ef35f) * iVar20 + local_d8 * 0x19660d;
        iVar25 = iVar23 + 0x3c6ef35f;
        iVar20 = iStack_d4 * 0x19660d + iVar20 * iVar25 + 0x3c6ef35f;
        iVar10 = iVar10 + iVar25 * iVar20 + 0x3c6ef35f;
        uVar17 = iVar10 * iVar20 + iVar23 + 0x3c6ef35f;
        fVar28 = (float)(uVar17 >> 8) * 5.9604645e-08;
        fVar27 = (float)(iVar10 * uVar17 + iVar20 >> 8) * 5.9604645e-08;
      }
      if (fVar28 < 0.0) {
        fVar28 = sqrtf(fVar28);
      }
      else {
        fVar28 = SQRT(fVar28);
      }
      pfVar4 = local_188 + local_180;
      *local_188 = 1.0 - fVar28;
      pfVar5 = local_178 + local_170;
      *local_178 = (1.0 - fVar27) * fVar28;
      pfVar6 = local_168 + local_160;
      *local_168 = fVar27 * fVar28;
      lVar26 = lVar26 + 1;
      piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar16 = (int *)(param_1 + 0x3c);
      }
      local_188 = pfVar4;
      local_178 = pfVar5;
      local_168 = pfVar6;
    } while (lVar26 < *piVar16);
  }
LAB_1480c5a6c:
  if (local_b8 != (undefined8 *)0x0) {
    LOCK();
    piVar16 = (int *)(local_b8 + 1);
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (*piVar16 == 0) {
      (**(code **)*local_b8)(local_b8,1);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480c5ae2 FUN_1480c5ae2 body=1645 status=ok
// SIG undefined FUN_1480c5ae2(void)

void FUN_1480c5ae2(char *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_148 [40];
  int *local_120;
  int local_118;
  char *local_110;
  int *local_108 [2];
  int local_f8;
  int *local_f0;
  int local_e0;
  int *local_d8;
  int local_c8;
  int local_b8;
  int iStack_b4;
  int local_b0;
  undefined1 local_a8 [8];
  longlong local_a0;
  undefined8 *local_98;
  undefined1 local_90 [16];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1405c93a6(local_a8,param_1);
  local_98 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)FUN_1405c943a(local_a0,local_90);
  puVar5 = local_98;
  puVar2 = local_98;
  if (local_98 != puVar7) {
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
      UNLOCK();
    }
    puVar2 = puVar7;
    if (local_98 != (undefined8 *)0x0) {
      LOCK();
      piVar11 = (int *)(local_98 + 1);
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (*piVar11 == 0) {
        puVar2 = (undefined8 *)*local_98;
        local_98 = puVar7;
        (*(code *)*puVar2)(puVar5,1);
        puVar2 = local_98;
      }
    }
  }
  local_98 = puVar2;
  local_110 = param_1;
  FUN_1416b93de(local_108,param_1);
  local_b8 = 0;
  iStack_b4 = 0;
  local_b0 = 0;
  FUN_144a76cd4(&local_120,param_1);
  if (local_98 == (undefined8 *)0x0) {
    fVar20 = 1.0;
  }
  else {
    if ((*(byte *)(local_a0 + 0x328) & 0x20) != 0) {
      piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar11 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar11) {
        lVar17 = 0;
        do {
          puVar5 = local_98;
          pcVar4 = local_110;
          piVar11 = local_108[0] + local_f8;
          local_b8 = *local_108[0];
          piVar12 = local_f0 + local_e0;
          iStack_b4 = *local_f0;
          piVar1 = local_d8 + local_c8;
          local_b0 = *local_d8;
          local_108[0] = piVar11;
          local_f0 = piVar12;
          local_d8 = piVar1;
          if (local_b0 == -1) {
            if (*local_110 == '\0') {
              lVar10 = *(longlong *)(local_110 + 0x80) + 0x88;
            }
            else {
              lVar10 = *(longlong *)(local_110 + 0x58);
            }
            uVar14 = *(int *)(lVar10 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar10 + 4) = uVar14;
            fVar20 = (float)(uVar14 >> 9 | 0x3f800000) + -1.0;
          }
          else {
            if (*local_110 == '\0') {
              plVar9 = (longlong *)(*(longlong *)(local_110 + 0x80) + 0x90);
            }
            else {
              plVar9 = *(longlong **)(local_110 + 0x60);
              if (*plVar9 == 0) {
                uVar8 = FUN_14153c902((longlong)*(int *)(local_110 + 0x3c) << 2,0);
                **(undefined8 **)(pcVar4 + 0x60) = uVar8;
                plVar9 = *(longlong **)(pcVar4 + 0x60);
              }
            }
            uVar14 = *(uint *)(*plVar9 + lVar17 * 4);
            *(uint *)(*plVar9 + lVar17 * 4) = uVar14 + 1;
            iVar15 = (local_b0 << 0x10 | uVar14) * 0x19660d;
            iVar13 = iVar15 + 0x3c6ef35f;
            iVar18 = (iStack_b4 * 0x19660d + 0x3c6ef35f) * iVar13 + local_b8 * 0x19660d;
            iVar6 = iVar18 + 0x3c6ef35f;
            iVar13 = iStack_b4 * 0x19660d + iVar13 * iVar6 + 0x3c6ef35f;
            fVar20 = (float)((iVar15 + iVar6 * iVar13 + 0x3c6ef35f) * iVar13 + iVar18 + 0x3c6ef35fU
                            >> 8) * 5.9604645e-08;
          }
          pcVar4 = local_110;
          if (local_b0 == -1) {
            if (*local_110 == '\0') {
              lVar10 = *(longlong *)(local_110 + 0x80) + 0x88;
            }
            else {
              lVar10 = *(longlong *)(local_110 + 0x58);
            }
            uVar14 = *(int *)(lVar10 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar10 + 4) = uVar14;
            fVar19 = (float)(uVar14 >> 9 | 0x3f800000) + -1.0;
          }
          else {
            if (*local_110 == '\0') {
              plVar9 = (longlong *)(*(longlong *)(local_110 + 0x80) + 0x90);
            }
            else {
              plVar9 = *(longlong **)(local_110 + 0x60);
              if (*plVar9 == 0) {
                uVar8 = FUN_14153c902((longlong)*(int *)(local_110 + 0x3c) << 2,0);
                **(undefined8 **)(pcVar4 + 0x60) = uVar8;
                plVar9 = *(longlong **)(pcVar4 + 0x60);
              }
            }
            uVar14 = *(uint *)(*plVar9 + lVar17 * 4);
            *(uint *)(*plVar9 + lVar17 * 4) = uVar14 + 1;
            iVar6 = (local_b0 << 0x10 | uVar14) * 0x19660d;
            iVar13 = iVar6 + 0x3c6ef35f;
            iVar18 = (iStack_b4 * 0x19660d + 0x3c6ef35f) * iVar13 + local_b8 * 0x19660d;
            iVar15 = iVar18 + 0x3c6ef35f;
            iVar13 = iStack_b4 * 0x19660d + iVar13 * iVar15 + 0x3c6ef35f;
            fVar19 = (float)((iVar6 + iVar15 * iVar13 + 0x3c6ef35f) * iVar13 + iVar18 + 0x3c6ef35fU
                            >> 8) * 5.9604645e-08;
          }
          iVar13 = (int)((float)*(int *)(puVar5 + 0x46) * fVar19);
          uVar3 = puVar5[0x45];
          uVar16 = (longlong)puVar5 + ((longlong)uVar3 >> 0x18) + 0x228;
          if ((uVar3 & 1) == 0) {
            uVar16 = uVar3;
          }
          if (*(float *)(uVar16 + (longlong)iVar13 * 4) <= fVar20) {
            uVar3 = puVar5[0x47];
            uVar16 = (longlong)puVar5 + ((longlong)uVar3 >> 0x18) + 0x238;
            if ((uVar3 & 1) == 0) {
              uVar16 = uVar3;
            }
            iVar13 = *(int *)(uVar16 + (longlong)iVar13 * 4);
          }
          piVar11 = local_120 + local_118;
          *local_120 = iVar13;
          lVar17 = lVar17 + 1;
          piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar12 = (int *)(param_1 + 0x3c);
          }
          local_120 = piVar11;
        } while (lVar17 < *piVar12);
      }
      goto LAB_1480c60ec;
    }
    fVar20 = (float)*(int *)(local_98 + 7);
  }
  piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar11 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar11) {
    lVar17 = 0;
    do {
      pcVar4 = local_110;
      piVar11 = local_108[0] + local_f8;
      local_b8 = *local_108[0];
      piVar12 = local_f0 + local_e0;
      iStack_b4 = *local_f0;
      piVar1 = local_d8 + local_c8;
      local_b0 = *local_d8;
      local_108[0] = piVar11;
      local_f0 = piVar12;
      local_d8 = piVar1;
      if (local_b0 == -1) {
        if (*local_110 == '\0') {
          lVar10 = *(longlong *)(local_110 + 0x80) + 0x88;
        }
        else {
          lVar10 = *(longlong *)(local_110 + 0x58);
        }
        uVar14 = *(int *)(lVar10 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(lVar10 + 4) = uVar14;
        fVar19 = (float)(uVar14 >> 9 | 0x3f800000) + -1.0;
      }
      else {
        if (*local_110 == '\0') {
          plVar9 = (longlong *)(*(longlong *)(local_110 + 0x80) + 0x90);
        }
        else {
          plVar9 = *(longlong **)(local_110 + 0x60);
          if (*plVar9 == 0) {
            uVar8 = FUN_14153c902((longlong)*(int *)(local_110 + 0x3c) << 2,0);
            **(undefined8 **)(pcVar4 + 0x60) = uVar8;
            plVar9 = *(longlong **)(pcVar4 + 0x60);
          }
        }
        uVar14 = *(uint *)(*plVar9 + lVar17 * 4);
        *(uint *)(*plVar9 + lVar17 * 4) = uVar14 + 1;
        iVar6 = (local_b0 << 0x10 | uVar14) * 0x19660d;
        iVar13 = iVar6 + 0x3c6ef35f;
        iVar18 = (iStack_b4 * 0x19660d + 0x3c6ef35f) * iVar13 + local_b8 * 0x19660d;
        iVar15 = iVar18 + 0x3c6ef35f;
        iVar13 = iStack_b4 * 0x19660d + iVar13 * iVar15 + 0x3c6ef35f;
        fVar19 = (float)((iVar6 + iVar15 * iVar13 + 0x3c6ef35f) * iVar13 + iVar18 + 0x3c6ef35fU >> 8
                        ) * 5.9604645e-08;
      }
      piVar11 = local_120 + local_118;
      *local_120 = (int)(fVar19 * fVar20);
      lVar17 = lVar17 + 1;
      piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar12 = (int *)(param_1 + 0x3c);
      }
      local_120 = piVar11;
    } while (lVar17 < *piVar12);
  }
LAB_1480c60ec:
  if (local_98 != (undefined8 *)0x0) {
    LOCK();
    piVar11 = (int *)(local_98 + 1);
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (*piVar11 == 0) {
      (**(code **)*local_98)(local_98,1);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480c6150 FUN_1480c6150 body=1837 status=ok
// SIG undefined FUN_1480c6150(void)

void FUN_1480c6150(char *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  longlong lVar21;
  float fVar22;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar25 [16];
  undefined1 auStack_158 [40];
  undefined4 *local_130;
  int local_128;
  char *local_120;
  int *local_118 [2];
  int local_108;
  int *local_100;
  int local_f0;
  int *local_e8;
  int local_d8;
  int local_c8;
  int iStack_c4;
  int local_c0;
  undefined1 local_b8 [8];
  longlong local_b0;
  undefined8 *local_a8;
  undefined1 local_a0 [16];
  ulonglong local_90;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [12];
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1405c93a6(local_b8,param_1);
  local_a8 = (undefined8 *)0x0;
  puVar9 = (undefined8 *)FUN_1405c943a(local_b0,local_a0);
  puVar7 = local_a8;
  puVar4 = local_a8;
  if (local_a8 != puVar9) {
    if (puVar9 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
      UNLOCK();
    }
    puVar4 = puVar9;
    if (local_a8 != (undefined8 *)0x0) {
      LOCK();
      piVar14 = (int *)(local_a8 + 1);
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (*piVar14 == 0) {
        puVar4 = (undefined8 *)*local_a8;
        local_a8 = puVar9;
        (*(code *)*puVar4)(puVar7,1);
        puVar4 = local_a8;
      }
    }
  }
  local_a8 = puVar4;
  local_120 = param_1;
  FUN_1416b93de(local_118,param_1);
  local_c8 = 0;
  iStack_c4 = 0;
  local_c0 = 0;
  auVar25._0_8_ = FUN_144a76cd4(&local_130,param_1);
  auVar25._8_8_ = extraout_XMM0_Qb;
  iVar17 = *(int *)(local_b0 + 0x32c);
  if (iVar17 < 1) {
    piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar14 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar14) {
      iVar17 = 0;
      do {
        piVar14 = local_118[0] + local_108;
        local_c8 = *local_118[0];
        piVar1 = local_100 + local_f0;
        iStack_c4 = *local_100;
        piVar2 = local_e8 + local_d8;
        local_c0 = *local_e8;
        puVar3 = local_130 + local_128;
        *local_130 = 0;
        iVar17 = iVar17 + 1;
        piVar19 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar19 = (int *)(param_1 + 0x3c);
        }
        local_130 = puVar3;
        local_118[0] = piVar14;
        local_100 = piVar1;
        local_e8 = piVar2;
      } while (iVar17 < *piVar19);
    }
  }
  else {
    lVar5 = *(longlong *)(local_b0 + 0x340);
    if ((local_a8 == (undefined8 *)0x0) || ((*(byte *)(local_b0 + 0x328) & 0x20) == 0)) {
      piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar14 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar14) {
        lVar21 = 0;
        do {
          pcVar6 = local_120;
          piVar14 = local_118[0] + local_108;
          local_c8 = *local_118[0];
          piVar1 = local_100 + local_f0;
          iStack_c4 = *local_100;
          piVar2 = local_e8 + local_d8;
          local_c0 = *local_e8;
          local_118[0] = piVar14;
          local_100 = piVar1;
          local_e8 = piVar2;
          if (local_c0 == -1) {
            if (*local_120 == '\0') {
              lVar12 = *(longlong *)(local_120 + 0x80) + 0x88;
            }
            else {
              lVar12 = *(longlong *)(local_120 + 0x58);
            }
            uVar16 = *(int *)(lVar12 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar12 + 4) = uVar16;
            fVar22 = (float)(uVar16 >> 9 | 0x3f800000) + -1.0;
          }
          else {
            if (*local_120 == '\0') {
              plVar11 = (longlong *)(*(longlong *)(local_120 + 0x80) + 0x90);
            }
            else {
              plVar11 = *(longlong **)(local_120 + 0x60);
              if (*plVar11 == 0) {
                uVar10 = FUN_14153c902((longlong)*(int *)(local_120 + 0x3c) << 2,0);
                **(undefined8 **)(pcVar6 + 0x60) = uVar10;
                plVar11 = *(longlong **)(pcVar6 + 0x60);
              }
            }
            uVar16 = *(uint *)(*plVar11 + lVar21 * 4);
            *(uint *)(*plVar11 + lVar21 * 4) = uVar16 + 1;
            iVar8 = (local_c0 << 0x10 | uVar16) * 0x19660d;
            iVar15 = iVar8 + 0x3c6ef35f;
            iVar20 = (iStack_c4 * 0x19660d + 0x3c6ef35f) * iVar15 + local_c8 * 0x19660d;
            iVar18 = iVar20 + 0x3c6ef35f;
            iVar15 = iStack_c4 * 0x19660d + iVar15 * iVar18 + 0x3c6ef35f;
            fVar22 = (float)((iVar8 + iVar18 * iVar15 + 0x3c6ef35f) * iVar15 + iVar20 + 0x3c6ef35fU
                            >> 8) * 5.9604645e-08;
          }
          puVar3 = local_130 + local_128;
          *local_130 = *(undefined4 *)(lVar5 + (longlong)(int)(fVar22 * (float)iVar17) * 4);
          lVar21 = lVar21 + 1;
          piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar14 = (int *)(param_1 + 0x3c);
          }
          local_130 = puVar3;
        } while (lVar21 < *piVar14);
      }
    }
    else {
      piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar14 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar14) {
        lVar21 = *(longlong *)(local_b0 + 0x350);
        lVar12 = 0;
        do {
          pcVar6 = local_120;
          auVar26 = auVar25._4_12_;
          piVar14 = local_118[0] + local_108;
          local_c8 = *local_118[0];
          piVar1 = local_100 + local_f0;
          iStack_c4 = *local_100;
          piVar2 = local_e8 + local_d8;
          local_c0 = *local_e8;
          local_118[0] = piVar14;
          local_100 = piVar1;
          local_e8 = piVar2;
          if (local_c0 == -1) {
            if (*local_120 == '\0') {
              lVar13 = *(longlong *)(local_120 + 0x80) + 0x88;
            }
            else {
              lVar13 = *(longlong *)(local_120 + 0x58);
            }
            uVar16 = *(int *)(lVar13 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar13 + 4) = uVar16;
            fVar22 = (float)(uVar16 >> 9 | 0x3f800000) + -1.0;
          }
          else {
            if (*local_120 == '\0') {
              plVar11 = (longlong *)(*(longlong *)(local_120 + 0x80) + 0x90);
            }
            else {
              plVar11 = *(longlong **)(local_120 + 0x60);
              if (*plVar11 == 0) {
                uVar10 = FUN_14153c902((longlong)*(int *)(local_120 + 0x3c) << 2,0);
                auVar23._8_8_ = extraout_XMM0_Qb_00;
                auVar23._0_8_ = extraout_XMM0_Qa;
                auVar26 = auVar23._4_12_;
                **(undefined8 **)(pcVar6 + 0x60) = uVar10;
                plVar11 = *(longlong **)(pcVar6 + 0x60);
              }
            }
            uVar16 = *(uint *)(*plVar11 + lVar12 * 4);
            *(uint *)(*plVar11 + lVar12 * 4) = uVar16 + 1;
            iVar18 = (local_c0 << 0x10 | uVar16) * 0x19660d;
            iVar15 = iVar18 + 0x3c6ef35f;
            iVar20 = (iStack_c4 * 0x19660d + 0x3c6ef35f) * iVar15 + local_c8 * 0x19660d;
            iVar8 = iVar20 + 0x3c6ef35f;
            iVar15 = iStack_c4 * 0x19660d + iVar15 * iVar8 + 0x3c6ef35f;
            fVar22 = (float)((iVar18 + iVar8 * iVar15 + 0x3c6ef35f) * iVar15 + iVar20 + 0x3c6ef35fU
                            >> 8) * 5.9604645e-08;
          }
          pcVar6 = local_120;
          if (local_c0 == -1) {
            if (*local_120 == '\0') {
              lVar13 = *(longlong *)(local_120 + 0x80) + 0x88;
            }
            else {
              lVar13 = *(longlong *)(local_120 + 0x58);
            }
            uVar16 = *(int *)(lVar13 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar13 + 4) = uVar16;
            auVar25 = ZEXT416((uint)((float)(uVar16 >> 9 | 0x3f800000) + -1.0));
          }
          else {
            if (*local_120 == '\0') {
              plVar11 = (longlong *)(*(longlong *)(local_120 + 0x80) + 0x90);
            }
            else {
              plVar11 = *(longlong **)(local_120 + 0x60);
              if (*plVar11 == 0) {
                uVar10 = FUN_14153c902((longlong)*(int *)(local_120 + 0x3c) << 2,0);
                auVar24._8_8_ = extraout_XMM0_Qb_01;
                auVar24._0_8_ = extraout_XMM0_Qa_00;
                auVar26 = auVar24._4_12_;
                **(undefined8 **)(pcVar6 + 0x60) = uVar10;
                plVar11 = *(longlong **)(pcVar6 + 0x60);
              }
            }
            uVar16 = *(uint *)(*plVar11 + lVar12 * 4);
            *(uint *)(*plVar11 + lVar12 * 4) = uVar16 + 1;
            iVar8 = (local_c0 << 0x10 | uVar16) * 0x19660d;
            iVar15 = iVar8 + 0x3c6ef35f;
            iVar20 = (iStack_c4 * 0x19660d + 0x3c6ef35f) * iVar15 + local_c8 * 0x19660d;
            iVar18 = iVar20 + 0x3c6ef35f;
            iVar15 = iStack_c4 * 0x19660d + iVar15 * iVar18 + 0x3c6ef35f;
            auVar25._0_4_ =
                 (float)((iVar8 + iVar18 * iVar15 + 0x3c6ef35f) * iVar15 + iVar20 + 0x3c6ef35fU >> 8
                        ) * 5.9604645e-08;
            auVar25._4_12_ = auVar26;
          }
          lVar13 = (longlong)(int)(fVar22 * (float)iVar17);
          if (*(float *)(lVar21 + 8 + lVar13 * 0x10) <= auVar25._0_4_) {
            lVar13 = (longlong)*(int *)(lVar13 * 0x10 + lVar21 + 0xc);
          }
          puVar3 = local_130 + local_128;
          *local_130 = *(undefined4 *)(lVar5 + (longlong)*(int *)(lVar5 + lVar13 * 4) * 4);
          lVar12 = lVar12 + 1;
          piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar14 = (int *)(param_1 + 0x3c);
          }
          local_130 = puVar3;
        } while (lVar12 < *piVar14);
      }
    }
  }
  if (local_a8 != (undefined8 *)0x0) {
    LOCK();
    piVar14 = (int *)(local_a8 + 1);
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    if (*piVar14 == 0) {
      (**(code **)*local_a8)(local_a8,1);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480c687e FUN_1480c687e body=753 status=ok
// SIG undefined FUN_1480c687e(void)

void FUN_1480c687e(byte *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  byte bVar14;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  int local_60;
  undefined1 local_58 [8];
  longlong local_50;
  undefined8 *local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1405c93a6(local_58,param_1);
  local_48 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)FUN_1405c943a(local_50,local_40);
  puVar6 = local_48;
  puVar3 = local_48;
  if (local_48 != puVar7) {
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
      UNLOCK();
    }
    puVar3 = puVar7;
    if (local_48 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_48 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        puVar3 = (undefined8 *)*local_48;
        local_48 = puVar7;
        (*(code *)*puVar3)(puVar6,1);
        puVar3 = local_48;
      }
    }
  }
  local_48 = puVar3;
  FUN_144a76cd4(&local_68,param_1);
  iVar8 = *(int *)(local_50 + 0x32c);
  if (iVar8 < 1) {
    pbVar9 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != 0) {
      pbVar9 = param_1 + 0x3c;
    }
    if (0 < *(int *)pbVar9) {
      iVar8 = 0;
      do {
        puVar2 = local_68 + local_60;
        *local_68 = 0;
        iVar8 = iVar8 + 1;
        pbVar9 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != 0) {
          pbVar9 = param_1 + 0x3c;
        }
        local_68 = puVar2;
      } while (iVar8 < *(int *)pbVar9);
    }
  }
  else {
    lVar4 = *(longlong *)(local_50 + 0x340);
    if ((local_48 == (undefined8 *)0x0) || ((*(byte *)(local_50 + 0x328) & 0x20) == 0)) {
      bVar14 = *param_1;
      lVar12 = *(longlong *)(param_1 + 0x80);
      pbVar9 = (byte *)(lVar12 + 0x40);
      if (bVar14 != 0) {
        pbVar9 = param_1 + 0x3c;
      }
      if (0 < *(int *)pbVar9) {
        iVar10 = 0;
        do {
          if ((bVar14 & 1) == 0) {
            lVar12 = lVar12 + 0x88;
          }
          else {
            lVar12 = *(longlong *)(param_1 + 0x58);
          }
          uVar13 = *(int *)(lVar12 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar12 + 4) = uVar13;
          puVar2 = local_68 + local_60;
          *local_68 = *(undefined4 *)
                       (lVar4 + (longlong)
                                (int)(((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * (float)iVar8) * 4
                       );
          iVar10 = iVar10 + 1;
          bVar14 = *param_1;
          lVar12 = *(longlong *)(param_1 + 0x80);
          pbVar9 = (byte *)(lVar12 + 0x40);
          if (bVar14 != 0) {
            pbVar9 = param_1 + 0x3c;
          }
          local_68 = puVar2;
        } while (iVar10 < *(int *)pbVar9);
      }
    }
    else {
      bVar14 = *param_1;
      lVar12 = *(longlong *)(param_1 + 0x80);
      pbVar9 = (byte *)(lVar12 + 0x40);
      if (bVar14 != 0) {
        pbVar9 = param_1 + 0x3c;
      }
      if (0 < *(int *)pbVar9) {
        lVar5 = *(longlong *)(local_50 + 0x350);
        iVar10 = 0;
        do {
          if ((bVar14 & 1) == 0) {
            lVar12 = lVar12 + 0x88;
          }
          else {
            lVar12 = *(longlong *)(param_1 + 0x58);
          }
          uVar13 = *(int *)(lVar12 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar12 + 4) = uVar13;
          if (*param_1 == 0) {
            lVar12 = *(longlong *)(param_1 + 0x80) + 0x88;
          }
          else {
            lVar12 = *(longlong *)(param_1 + 0x58);
          }
          uVar11 = *(int *)(lVar12 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar12 + 4) = uVar11;
          lVar12 = (longlong)(int)(((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * (float)iVar8);
          if (*(float *)(lVar5 + 8 + lVar12 * 0x10) <= (float)(uVar11 >> 9 | 0x3f800000) + -1.0) {
            lVar12 = (longlong)*(int *)(lVar12 * 0x10 + lVar5 + 0xc);
          }
          puVar2 = local_68 + local_60;
          *local_68 = *(undefined4 *)(lVar4 + (longlong)*(int *)(lVar4 + lVar12 * 4) * 4);
          iVar10 = iVar10 + 1;
          bVar14 = *param_1;
          lVar12 = *(longlong *)(param_1 + 0x80);
          pbVar9 = (byte *)(lVar12 + 0x40);
          if (bVar14 != 0) {
            pbVar9 = param_1 + 0x3c;
          }
          local_68 = puVar2;
        } while (iVar10 < *(int *)pbVar9);
      }
    }
  }
  if (local_48 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_48 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480c6b70 FUN_1480c6b70 body=1705 status=ok
// SIG undefined FUN_1480c6b70(void)

void FUN_1480c6b70(byte *param_1)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_128 [32];
  float *local_108;
  int local_100;
  float *local_f8;
  int local_f0;
  float *local_e8;
  int local_e0;
  int *local_d8;
  int local_d0;
  undefined1 local_c8 [8];
  int local_c0;
  undefined1 local_b8 [8];
  longlong local_b0;
  undefined8 *local_a8;
  undefined1 local_a0 [16];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1405c93a6(local_b8,param_1);
  local_a8 = (undefined8 *)0x0;
  puVar8 = (undefined8 *)FUN_1405c943a(local_b0,local_a0);
  puVar15 = local_a8;
  puVar7 = local_a8;
  if (local_a8 != puVar8) {
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
      UNLOCK();
    }
    puVar7 = puVar8;
    if (local_a8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_a8 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        puVar7 = (undefined8 *)*local_a8;
        local_a8 = puVar8;
        (*(code *)*puVar7)(puVar15,1);
        puVar7 = local_a8;
      }
    }
  }
  local_a8 = puVar7;
  FUN_144a76cd4(&local_d8,param_1);
  FUN_144a76c20(&local_108,param_1);
  FUN_144a76c20(&local_f8,param_1);
  FUN_144a76c20(&local_e8,param_1);
  if (local_a8 == (undefined8 *)0x0) {
    iVar17 = -1;
  }
  else {
    if ((*(byte *)(local_b0 + 0x328) & 0x20) != 0) {
      bVar11 = *param_1;
      lVar9 = *(longlong *)(param_1 + 0x80);
      pbVar16 = (byte *)(lVar9 + 0x40);
      if (bVar11 != 0) {
        pbVar16 = param_1 + 0x3c;
      }
      if (0 < *(int *)pbVar16) {
        iVar17 = 0;
        do {
          if (*(int *)(local_a8 + 0x46) == 0) {
            uVar12 = 0;
LAB_1480c6fbd:
            iVar19 = 0;
            if ((int)uVar12 < *(int *)(local_a8 + 0x4c)) {
              uVar18 = local_a8[0x4b];
              uVar10 = (ulonglong)uVar12;
              if ((uVar18 & 1) == 0) {
                iVar6 = *(int *)(uVar18 + 0x10 + uVar10 * 0x40);
              }
              else {
                uVar18 = (longlong)local_a8 + ((longlong)uVar18 >> 0x18) + 600;
                iVar6 = *(int *)(uVar10 * 0x40 + 0x10 + uVar18);
              }
              iVar19 = 0;
              if (iVar6 != 0) {
                if (*param_1 == 0) {
                  lVar9 = *(longlong *)(param_1 + 0x80) + 0x88;
                }
                else {
                  lVar9 = *(longlong *)(param_1 + 0x58);
                }
                uVar12 = *(int *)(lVar9 + 4) * 0xbb38435 + 0x3619636b;
                *(uint *)(lVar9 + 4) = uVar12;
                if (*param_1 == 0) {
                  lVar9 = *(longlong *)(param_1 + 0x80) + 0x88;
                }
                else {
                  lVar9 = *(longlong *)(param_1 + 0x58);
                }
                lVar20 = uVar10 * 0x40;
                lVar5 = uVar18 + lVar20;
                uVar13 = *(int *)(lVar9 + 4) * 0xbb38435 + 0x3619636b;
                *(uint *)(lVar9 + 4) = uVar13;
                iVar19 = (int)((float)*(int *)(uVar18 + 0x10 + lVar20) *
                              ((float)(uVar13 >> 9 | 0x3f800000) + -1.0));
                uVar18 = *(ulonglong *)(uVar18 + 8 + lVar20);
                uVar14 = ((longlong)uVar18 >> 0x18) + 8 + lVar5;
                if ((uVar18 & 1) == 0) {
                  uVar14 = uVar18;
                }
                if (*(float *)(uVar14 + (longlong)iVar19 * 4) <=
                    (float)(uVar12 >> 9 | 0x3f800000) + -1.0) {
                  uVar18 = *(ulonglong *)(lVar5 + 0x18);
                  uVar14 = lVar5 + 0x18 + ((longlong)uVar18 >> 0x18);
                  if ((uVar18 & 1) == 0) {
                    uVar14 = uVar18;
                  }
                  iVar19 = *(int *)(uVar14 + (longlong)iVar19 * 4);
                }
                puVar15 = local_a8 + 2;
                if ((undefined8 *)local_a8[6] != (undefined8 *)0x0) {
                  puVar15 = (undefined8 *)local_a8[6];
                }
                iVar19 = *(uint *)((longlong)puVar15 + uVar10 * 0x1c + 4) / 3 + iVar19;
              }
            }
          }
          else {
            if ((bVar11 & 1) == 0) {
              lVar9 = lVar9 + 0x88;
            }
            else {
              lVar9 = *(longlong *)(param_1 + 0x58);
            }
            uVar13 = *(int *)(lVar9 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar9 + 4) = uVar13;
            if (*param_1 == 0) {
              lVar9 = *(longlong *)(param_1 + 0x80) + 0x88;
            }
            else {
              lVar9 = *(longlong *)(param_1 + 0x58);
            }
            uVar12 = *(int *)(lVar9 + 4) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar9 + 4) = uVar12;
            uVar12 = (uint)((float)*(int *)(local_a8 + 0x46) *
                           ((float)(uVar12 >> 9 | 0x3f800000) + -1.0));
            uVar18 = local_a8[0x45];
            uVar10 = (longlong)local_a8 + ((longlong)uVar18 >> 0x18) + 0x228;
            if ((uVar18 & 1) == 0) {
              uVar10 = uVar18;
            }
            if (*(float *)(uVar10 + (longlong)(int)uVar12 * 4) <=
                (float)(uVar13 >> 9 | 0x3f800000) + -1.0) {
              uVar18 = local_a8[0x47];
              uVar10 = (longlong)local_a8 + ((longlong)uVar18 >> 0x18) + 0x238;
              if ((uVar18 & 1) == 0) {
                uVar10 = uVar18;
              }
              uVar12 = *(uint *)(uVar10 + (longlong)(int)uVar12 * 4);
            }
            if (-1 < (int)uVar12) goto LAB_1480c6fbd;
            iVar19 = 0;
          }
          *local_d8 = iVar19;
          if (*param_1 == 0) {
            lVar9 = *(longlong *)(param_1 + 0x80) + 0x88;
          }
          else {
            lVar9 = *(longlong *)(param_1 + 0x58);
          }
          uVar12 = *(int *)(lVar9 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar9 + 4) = uVar12;
          if (*param_1 == 0) {
            lVar9 = *(longlong *)(param_1 + 0x80) + 0x88;
          }
          else {
            lVar9 = *(longlong *)(param_1 + 0x58);
          }
          uVar13 = *(int *)(lVar9 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar9 + 4) = uVar13;
          fVar21 = (float)(uVar13 >> 9 | 0x3f800000) + -1.0;
          if (fVar21 < 0.0) {
            local_d8 = local_d8 + local_d0;
            fVar21 = sqrtf(fVar21);
          }
          else {
            fVar21 = SQRT(fVar21);
            local_d8 = local_d8 + local_d0;
          }
          fVar22 = (float)(uVar12 >> 9 | 0x3f800000) + -1.0;
          pfVar2 = local_108 + local_100;
          *local_108 = 1.0 - fVar21;
          pfVar3 = local_f8 + local_f0;
          *local_f8 = (1.0 - fVar22) * fVar21;
          pfVar4 = local_e8 + local_e0;
          *local_e8 = fVar22 * fVar21;
          iVar17 = iVar17 + 1;
          bVar11 = *param_1;
          lVar9 = *(longlong *)(param_1 + 0x80);
          pbVar16 = (byte *)(lVar9 + 0x40);
          if (bVar11 != 0) {
            pbVar16 = param_1 + 0x3c;
          }
          local_108 = pfVar2;
          local_f8 = pfVar3;
          local_e8 = pfVar4;
        } while (iVar17 < *(int *)pbVar16);
      }
      goto LAB_1480c6e2a;
    }
    FUN_1461c3a4c(local_a8 + 0x33,local_c8);
    iVar17 = local_c0 / 3 + -1;
  }
  bVar11 = *param_1;
  lVar9 = *(longlong *)(param_1 + 0x80);
  pbVar16 = (byte *)(lVar9 + 0x40);
  if (bVar11 != 0) {
    pbVar16 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar16) {
    iVar19 = 0;
    if (iVar17 < 1) {
      iVar17 = 0;
    }
    do {
      if ((bVar11 & 1) == 0) {
        lVar9 = lVar9 + 0x88;
      }
      else {
        lVar9 = *(longlong *)(param_1 + 0x58);
      }
      uVar12 = *(int *)(lVar9 + 4) * 0xbb38435 + 0x3619636b;
      *(uint *)(lVar9 + 4) = uVar12;
      *local_d8 = (int)(((float)(uVar12 >> 9 | 0x3f800000) + -1.0) * (float)(iVar17 + 1));
      if (*param_1 == 0) {
        lVar9 = *(longlong *)(param_1 + 0x80) + 0x88;
      }
      else {
        lVar9 = *(longlong *)(param_1 + 0x58);
      }
      uVar12 = *(int *)(lVar9 + 4) * 0xbb38435 + 0x3619636b;
      *(uint *)(lVar9 + 4) = uVar12;
      if (*param_1 == 0) {
        lVar9 = *(longlong *)(param_1 + 0x80) + 0x88;
      }
      else {
        lVar9 = *(longlong *)(param_1 + 0x58);
      }
      uVar13 = *(int *)(lVar9 + 4) * 0xbb38435 + 0x3619636b;
      *(uint *)(lVar9 + 4) = uVar13;
      fVar21 = (float)(uVar13 >> 9 | 0x3f800000) + -1.0;
      if (fVar21 < 0.0) {
        local_d8 = local_d8 + local_d0;
        fVar21 = sqrtf(fVar21);
      }
      else {
        fVar21 = SQRT(fVar21);
        local_d8 = local_d8 + local_d0;
      }
      fVar22 = (float)(uVar12 >> 9 | 0x3f800000) + -1.0;
      pfVar2 = local_108 + local_100;
      *local_108 = 1.0 - fVar21;
      pfVar3 = local_f8 + local_f0;
      *local_f8 = (1.0 - fVar22) * fVar21;
      pfVar4 = local_e8 + local_e0;
      *local_e8 = fVar22 * fVar21;
      iVar19 = iVar19 + 1;
      bVar11 = *param_1;
      lVar9 = *(longlong *)(param_1 + 0x80);
      pbVar16 = (byte *)(lVar9 + 0x40);
      if (bVar11 != 0) {
        pbVar16 = param_1 + 0x3c;
      }
      local_108 = pfVar2;
      local_f8 = pfVar3;
      local_e8 = pfVar4;
    } while (iVar19 < *(int *)pbVar16);
  }
LAB_1480c6e2a:
  if (local_a8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_a8 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_a8)(local_a8,1);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480c721a FUN_1480c721a body=1948 status=ok
// SIG undefined FUN_1480c721a(void)

void FUN_1480c721a(byte *param_1)

{
  int *piVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  byte bVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_128 [32];
  float *local_108;
  int local_100;
  float *local_f8;
  int local_f0;
  float *local_e8;
  int local_e0;
  int *local_d8;
  int local_d0;
  uint *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  undefined1 local_a8 [8];
  longlong local_a0;
  undefined8 *local_98;
  undefined1 local_90 [16];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1405c93a6(local_a8,param_1);
  local_98 = (undefined8 *)0x0;
  puVar8 = (undefined8 *)FUN_1405c943a(local_a0,local_90);
  puVar11 = local_98;
  puVar7 = local_98;
  if (local_98 != puVar8) {
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
      UNLOCK();
    }
    puVar7 = puVar8;
    if (local_98 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_98 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        puVar7 = (undefined8 *)*local_98;
        local_98 = puVar8;
        (*(code *)*puVar7)(puVar11,1);
        puVar7 = local_98;
      }
    }
  }
  local_98 = puVar7;
  local_c8 = (uint *)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  FUN_144a98d08(&local_c8,param_1);
  FUN_144a76cd4(&local_d8,param_1);
  FUN_144a76c20(&local_108,param_1);
  FUN_144a76c20(&local_f8,param_1);
  FUN_144a76c20(&local_e8,param_1);
  if (local_98 == (undefined8 *)0x0) {
    uVar18 = 0;
  }
  else {
    if (*(int *)(local_98 + 7) < 1) {
      pbVar10 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != 0) {
        pbVar10 = param_1 + 0x3c;
      }
      if (0 < *(int *)pbVar10) {
        iVar17 = 0;
        do {
          *local_d8 = 0;
          if (*param_1 == 0) {
            lVar9 = *(longlong *)(param_1 + 0x80) + 0x88;
          }
          else {
            lVar9 = *(longlong *)(param_1 + 0x58);
          }
          uVar18 = *(int *)(lVar9 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar9 + 4) = uVar18;
          if (*param_1 == 0) {
            lVar9 = *(longlong *)(param_1 + 0x80) + 0x88;
          }
          else {
            lVar9 = *(longlong *)(param_1 + 0x58);
          }
          uVar21 = *(int *)(lVar9 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar9 + 4) = uVar21;
          fVar22 = (float)(uVar21 >> 9 | 0x3f800000) + -1.0;
          if (fVar22 < 0.0) {
            local_d8 = local_d8 + local_d0;
            fVar22 = sqrtf(fVar22);
          }
          else {
            fVar22 = SQRT(fVar22);
            local_d8 = local_d8 + local_d0;
          }
          fVar23 = (float)(uVar18 >> 9 | 0x3f800000) + -1.0;
          pfVar3 = local_108 + local_100;
          *local_108 = 1.0 - fVar22;
          pfVar4 = local_f8 + local_f0;
          *local_f8 = (1.0 - fVar23) * fVar22;
          pfVar5 = local_e8 + local_e0;
          *local_e8 = fVar23 * fVar22;
          iVar17 = iVar17 + 1;
          pbVar10 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != 0) {
            pbVar10 = param_1 + 0x3c;
          }
          local_108 = pfVar3;
          local_f8 = pfVar4;
          local_e8 = pfVar5;
        } while (iVar17 < *(int *)pbVar10);
      }
      goto LAB_1480c7802;
    }
    uVar18 = *(int *)(local_98 + 7) - 1;
    if ((*(byte *)(local_a0 + 0x328) & 0x20) != 0) {
      bVar12 = *param_1;
      lVar9 = *(longlong *)(param_1 + 0x80);
      pbVar10 = (byte *)(lVar9 + 0x40);
      if (bVar12 != 0) {
        pbVar10 = param_1 + 0x3c;
      }
      if (0 < *(int *)pbVar10) {
        iVar17 = 0;
        do {
          uVar21 = *local_c8;
          if ((int)uVar18 <= (int)*local_c8) {
            uVar21 = uVar18;
          }
          if ((int)uVar21 < 1) {
            uVar21 = 0;
          }
          iVar16 = 0;
          if ((int)uVar21 < *(int *)(local_98 + 0x4c)) {
            uVar19 = local_98[0x4b];
            if ((uVar19 & 1) == 0) {
              iVar6 = *(int *)(uVar19 + 0x10 + (ulonglong)uVar21 * 0x40);
            }
            else {
              uVar19 = (longlong)local_98 + ((longlong)uVar19 >> 0x18) + 600;
              iVar6 = *(int *)((ulonglong)uVar21 * 0x40 + 0x10 + uVar19);
            }
            iVar16 = 0;
            if (iVar6 != 0) {
              if ((bVar12 & 1) == 0) {
                lVar9 = lVar9 + 0x88;
              }
              else {
                lVar9 = *(longlong *)(param_1 + 0x58);
              }
              uVar14 = *(int *)(lVar9 + 4) * 0xbb38435 + 0x3619636b;
              *(uint *)(lVar9 + 4) = uVar14;
              if (*param_1 == 0) {
                lVar9 = *(longlong *)(param_1 + 0x80) + 0x88;
              }
              else {
                lVar9 = *(longlong *)(param_1 + 0x58);
              }
              lVar20 = (ulonglong)uVar21 * 0x40;
              lVar2 = uVar19 + lVar20;
              uVar15 = *(int *)(lVar9 + 4) * 0xbb38435 + 0x3619636b;
              *(uint *)(lVar9 + 4) = uVar15;
              iVar16 = (int)((float)*(int *)(uVar19 + 0x10 + lVar20) *
                            ((float)(uVar15 >> 9 | 0x3f800000) + -1.0));
              uVar19 = *(ulonglong *)(uVar19 + 8 + lVar20);
              uVar13 = ((longlong)uVar19 >> 0x18) + 8 + lVar2;
              if ((uVar19 & 1) == 0) {
                uVar13 = uVar19;
              }
              if (*(float *)(uVar13 + (longlong)iVar16 * 4) <=
                  (float)(uVar14 >> 9 | 0x3f800000) + -1.0) {
                uVar19 = *(ulonglong *)(lVar2 + 0x18);
                uVar13 = lVar2 + 0x18 + ((longlong)uVar19 >> 0x18);
                if ((uVar19 & 1) == 0) {
                  uVar13 = uVar19;
                }
                iVar16 = *(int *)(uVar13 + (longlong)iVar16 * 4);
              }
              puVar11 = local_98 + 2;
              if ((undefined8 *)local_98[6] != (undefined8 *)0x0) {
                puVar11 = (undefined8 *)local_98[6];
              }
              iVar16 = *(uint *)((longlong)puVar11 + (ulonglong)uVar21 * 0x1c + 4) / 3 + iVar16;
            }
          }
          *local_d8 = iVar16;
          if (*param_1 == 0) {
            lVar9 = *(longlong *)(param_1 + 0x80) + 0x88;
          }
          else {
            lVar9 = *(longlong *)(param_1 + 0x58);
          }
          uVar21 = *(int *)(lVar9 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar9 + 4) = uVar21;
          if (*param_1 == 0) {
            lVar9 = *(longlong *)(param_1 + 0x80) + 0x88;
          }
          else {
            lVar9 = *(longlong *)(param_1 + 0x58);
          }
          uVar14 = *(int *)(lVar9 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar9 + 4) = uVar14;
          fVar22 = (float)(uVar14 >> 9 | 0x3f800000) + -1.0;
          if (fVar22 < 0.0) {
            local_d8 = local_d8 + local_d0;
            local_c8 = local_c8 + local_b8;
            fVar22 = sqrtf(fVar22);
          }
          else {
            fVar22 = SQRT(fVar22);
            local_d8 = local_d8 + local_d0;
            local_c8 = local_c8 + local_b8;
          }
          fVar23 = (float)(uVar21 >> 9 | 0x3f800000) + -1.0;
          pfVar3 = local_108 + local_100;
          *local_108 = 1.0 - fVar22;
          pfVar4 = local_f8 + local_f0;
          *local_f8 = (1.0 - fVar23) * fVar22;
          pfVar5 = local_e8 + local_e0;
          *local_e8 = fVar23 * fVar22;
          iVar17 = iVar17 + 1;
          bVar12 = *param_1;
          lVar9 = *(longlong *)(param_1 + 0x80);
          pbVar10 = (byte *)(lVar9 + 0x40);
          if (bVar12 != 0) {
            pbVar10 = param_1 + 0x3c;
          }
          local_108 = pfVar3;
          local_f8 = pfVar4;
          local_e8 = pfVar5;
        } while (iVar17 < *(int *)pbVar10);
      }
      goto LAB_1480c7802;
    }
  }
  bVar12 = *param_1;
  lVar9 = *(longlong *)(param_1 + 0x80);
  pbVar10 = (byte *)(lVar9 + 0x40);
  if (bVar12 != 0) {
    pbVar10 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar10) {
    iVar17 = 0;
    do {
      uVar21 = *local_c8;
      if ((int)uVar18 <= (int)*local_c8) {
        uVar21 = uVar18;
      }
      uVar19 = (ulonglong)uVar21;
      if ((int)uVar21 < 1) {
        uVar19 = 0;
      }
      puVar11 = local_98 + 2;
      if ((undefined8 *)local_98[6] != (undefined8 *)0x0) {
        puVar11 = (undefined8 *)local_98[6];
      }
      if ((bVar12 & 1) == 0) {
        lVar9 = lVar9 + 0x88;
      }
      else {
        lVar9 = *(longlong *)(param_1 + 0x58);
      }
      uVar21 = *(uint *)((longlong)puVar11 + uVar19 * 0x1c + 4);
      uVar14 = *(int *)(lVar9 + 4) * 0xbb38435 + 0x3619636b;
      *(uint *)(lVar9 + 4) = uVar14;
      puVar11 = local_98 + 2;
      if ((undefined8 *)local_98[6] != (undefined8 *)0x0) {
        puVar11 = (undefined8 *)local_98[6];
      }
      *local_d8 = (int)((float)*(uint *)((longlong)puVar11 + uVar19 * 0x1c + 8) *
                       ((float)(uVar14 >> 9 | 0x3f800000) + -1.0)) + uVar21 / 3;
      if (*param_1 == 0) {
        lVar9 = *(longlong *)(param_1 + 0x80) + 0x88;
      }
      else {
        lVar9 = *(longlong *)(param_1 + 0x58);
      }
      uVar21 = *(int *)(lVar9 + 4) * 0xbb38435 + 0x3619636b;
      *(uint *)(lVar9 + 4) = uVar21;
      if (*param_1 == 0) {
        lVar9 = *(longlong *)(param_1 + 0x80) + 0x88;
      }
      else {
        lVar9 = *(longlong *)(param_1 + 0x58);
      }
      uVar14 = *(int *)(lVar9 + 4) * 0xbb38435 + 0x3619636b;
      *(uint *)(lVar9 + 4) = uVar14;
      fVar22 = (float)(uVar14 >> 9 | 0x3f800000) + -1.0;
      if (fVar22 < 0.0) {
        local_d8 = local_d8 + local_d0;
        local_c8 = local_c8 + local_b8;
        fVar22 = sqrtf(fVar22);
      }
      else {
        fVar22 = SQRT(fVar22);
        local_d8 = local_d8 + local_d0;
        local_c8 = local_c8 + local_b8;
      }
      fVar23 = (float)(uVar21 >> 9 | 0x3f800000) + -1.0;
      pfVar3 = local_108 + local_100;
      *local_108 = 1.0 - fVar22;
      pfVar4 = local_f8 + local_f0;
      *local_f8 = (1.0 - fVar23) * fVar22;
      pfVar5 = local_e8 + local_e0;
      *local_e8 = fVar23 * fVar22;
      iVar17 = iVar17 + 1;
      bVar12 = *param_1;
      lVar9 = *(longlong *)(param_1 + 0x80);
      pbVar10 = (byte *)(lVar9 + 0x40);
      if (bVar12 != 0) {
        pbVar10 = param_1 + 0x3c;
      }
      local_108 = pfVar3;
      local_f8 = pfVar4;
      local_e8 = pfVar5;
    } while (iVar17 < *(int *)pbVar10);
  }
LAB_1480c7802:
  if (local_98 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_98 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_98)(local_98,1);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480c79b8 FUN_1480c79b8 body=773 status=ok
// SIG undefined FUN_1480c79b8(void)

void FUN_1480c79b8(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  char cVar10;
  int iVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  int local_110;
  undefined4 *local_108;
  int local_100;
  undefined4 *local_f8;
  int local_f0;
  int *local_e8;
  undefined8 uStack_e0;
  int local_d8;
  undefined1 local_d0 [8];
  longlong local_c8;
  undefined8 *local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [72];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1405c93a6(local_d0,param_1);
  local_c0 = (undefined8 *)0x0;
  puVar12 = (undefined8 *)FUN_1405c943a(local_c8,local_b8);
  puVar9 = local_c0;
  puVar7 = local_c0;
  if (local_c0 != puVar12) {
    if (puVar12 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
      UNLOCK();
    }
    puVar7 = puVar12;
    if (local_c0 != (undefined8 *)0x0) {
      LOCK();
      piVar14 = (int *)(local_c0 + 1);
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (*piVar14 == 0) {
        puVar7 = (undefined8 *)*local_c0;
        local_c0 = puVar12;
        (*(code *)*puVar7)(puVar9,1);
        puVar7 = local_c0;
      }
    }
  }
  local_c0 = puVar7;
  local_e8 = (int *)0x0;
  uStack_e0 = 0;
  local_d8 = 0;
  FUN_144a98d08(&local_e8,param_1);
  FUN_144a76c20(&local_118,param_1);
  FUN_144a76c20(&local_108,param_1);
  FUN_144a76c20(&local_f8,param_1);
  if ((((local_c0 == (undefined8 *)0x0) || (local_c0[0x28] == 0)) ||
      (cVar10 = FUN_1461c3a34(local_c0 + 0x23), cVar10 == '\0')) ||
     (*(int *)((longlong)local_c0 + 0x14c) < 1)) {
    uVar6 = DAT_14c846338;
    uVar5 = DAT_14c846330._4_4_;
    uVar4 = (undefined4)DAT_14c846330;
    FUN_144a928e2(local_a8,local_c8 + 0x40);
    piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar14 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar14) {
      iVar15 = 0;
      do {
        puVar1 = local_118 + local_110;
        *local_118 = uVar4;
        puVar2 = local_108 + local_100;
        *local_108 = uVar5;
        puVar3 = local_f8 + local_f0;
        *local_f8 = uVar6;
        iVar15 = iVar15 + 1;
        piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar14 = (int *)(param_1 + 0x3c);
        }
        local_118 = puVar1;
        local_108 = puVar2;
        local_f8 = puVar3;
      } while (iVar15 < *piVar14);
    }
  }
  else {
    piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar14 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar14) {
      iVar15 = *(int *)((longlong)local_c0 + 0x14c) + -1;
      iVar16 = 0;
      do {
        iVar11 = *local_e8;
        if (iVar15 <= *local_e8) {
          iVar11 = iVar15;
        }
        if (iVar11 < 1) {
          iVar11 = 0;
        }
        lVar8 = local_c0[0x28];
        uVar13 = (ulonglong)(uint)(iVar11 * *(int *)(local_c0 + 0x29));
        uVar4 = *(undefined4 *)(lVar8 + uVar13);
        uVar5 = *(undefined4 *)(lVar8 + 4 + uVar13);
        uVar6 = *(undefined4 *)(lVar8 + 8 + uVar13);
        local_e8 = local_e8 + local_d8;
        FUN_144a928e2(local_a8,local_c8 + 0x40);
        puVar1 = local_118 + local_110;
        *local_118 = uVar4;
        puVar2 = local_108 + local_100;
        *local_108 = uVar5;
        puVar3 = local_f8 + local_f0;
        *local_f8 = uVar6;
        iVar16 = iVar16 + 1;
        piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar14 = (int *)(param_1 + 0x3c);
        }
        local_118 = puVar1;
        local_108 = puVar2;
        local_f8 = puVar3;
      } while (iVar16 < *piVar14);
    }
  }
  if (local_c0 != (undefined8 *)0x0) {
    LOCK();
    piVar14 = (int *)(local_c0 + 1);
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    if (*piVar14 == 0) {
      (**(code **)*local_c0)(local_c0,1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480c7cbe FUN_1480c7cbe body=905 status=ok
// SIG undefined FUN_1480c7cbe(void)

void FUN_1480c7cbe(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 *puVar11;
  char cVar12;
  int iVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_148 [32];
  float *local_128;
  int local_120;
  float *local_118;
  int local_110;
  float *local_108;
  int local_100;
  int *local_f8;
  undefined8 uStack_f0;
  int local_e8;
  undefined1 local_e0 [8];
  longlong local_d8;
  undefined8 *local_d0;
  undefined1 local_c8 [16];
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
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1405c93a6(local_e0,param_1);
  local_d0 = (undefined8 *)0x0;
  puVar14 = (undefined8 *)FUN_1405c943a(local_d8,local_c8);
  puVar11 = local_d0;
  puVar6 = local_d0;
  if (local_d0 != puVar14) {
    if (puVar14 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
      UNLOCK();
    }
    puVar6 = puVar14;
    if (local_d0 != (undefined8 *)0x0) {
      LOCK();
      piVar16 = (int *)(local_d0 + 1);
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (*piVar16 == 0) {
        puVar6 = (undefined8 *)*local_d0;
        local_d0 = puVar14;
        (*(code *)*puVar6)(puVar11,1);
        puVar6 = local_d0;
      }
    }
  }
  local_d0 = puVar6;
  local_f8 = (int *)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  FUN_144a98d08(&local_f8,param_1);
  FUN_144a76c20(&local_128,param_1);
  FUN_144a76c20(&local_118,param_1);
  FUN_144a76c20(&local_108,param_1);
  if ((((local_d0 == (undefined8 *)0x0) || (local_d0[0x28] == 0)) ||
      (cVar12 = FUN_1461c3a34(local_d0 + 0x23), cVar12 == '\0')) ||
     (*(int *)((longlong)local_d0 + 0x14c) < 1)) {
    fVar5 = DAT_14c846338;
    fVar4 = DAT_14c846330._4_4_;
    fVar22 = (float)DAT_14c846330;
    FUN_144a928e2(&local_b8,local_d8 + 0x40);
    piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar16 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar16) {
      iVar17 = 0;
      do {
        pfVar1 = local_128 + local_120;
        *local_128 = fVar5 * local_98 + fVar4 * local_a8 + fVar22 * local_b8 + local_88;
        pfVar2 = local_118 + local_110;
        *local_118 = fVar5 * fStack_94 + fVar4 * fStack_a4 + fVar22 * fStack_b4 + fStack_84;
        pfVar3 = local_108 + local_100;
        *local_108 = fVar5 * fStack_90 + fVar4 * fStack_a0 + fVar22 * fStack_b0 + fStack_80;
        iVar17 = iVar17 + 1;
        piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar16 = (int *)(param_1 + 0x3c);
        }
        local_128 = pfVar1;
        local_118 = pfVar2;
        local_108 = pfVar3;
      } while (iVar17 < *piVar16);
    }
  }
  else {
    piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar16 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar16) {
      iVar17 = *(int *)((longlong)local_d0 + 0x14c) + -1;
      iVar18 = 0;
      do {
        iVar13 = *local_f8;
        if (iVar17 <= *local_f8) {
          iVar13 = iVar17;
        }
        if (iVar13 < 1) {
          iVar13 = 0;
        }
        lVar7 = local_d0[0x28];
        uVar15 = (ulonglong)(uint)(iVar13 * *(int *)(local_d0 + 0x29));
        fVar22 = *(float *)(lVar7 + uVar15);
        fVar4 = *(float *)(lVar7 + 4 + uVar15);
        fVar5 = *(float *)(lVar7 + 8 + uVar15);
        local_f8 = local_f8 + local_e8;
        FUN_144a928e2(&local_b8,local_d8 + 0x40);
        fVar19 = fVar5 * local_98 + fVar4 * local_a8 + fVar22 * local_b8 + local_88;
        fVar20 = fVar5 * fStack_94 + fVar4 * fStack_a4 + fVar22 * fStack_b4 + fStack_84;
        fVar21 = fVar5 * fStack_90 + fVar4 * fStack_a0 + fVar22 * fStack_b0 + fStack_80;
        fVar22 = fVar5 * fStack_8c + fVar4 * fStack_9c + fVar22 * fStack_ac + fStack_7c;
        pfVar1 = local_128 + local_120;
        *local_128 = fVar19;
        pfVar2 = local_118 + local_110;
        auVar9._4_4_ = fVar20;
        auVar9._0_4_ = fVar19;
        auVar9._8_4_ = fVar21;
        auVar9._12_4_ = fVar22;
        uVar8 = extractps(auVar9,1);
        *(undefined8 *)local_118 = uVar8;
        pfVar3 = local_108 + local_100;
        auVar10._4_4_ = fVar20;
        auVar10._0_4_ = fVar19;
        auVar10._8_4_ = fVar21;
        auVar10._12_4_ = fVar22;
        uVar8 = extractps(auVar10,2);
        *(undefined8 *)local_108 = uVar8;
        iVar18 = iVar18 + 1;
        piVar16 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar16 = (int *)(param_1 + 0x3c);
        }
        local_128 = pfVar1;
        local_118 = pfVar2;
        local_108 = pfVar3;
      } while (iVar18 < *piVar16);
    }
  }
  if (local_d0 != (undefined8 *)0x0) {
    LOCK();
    piVar16 = (int *)(local_d0 + 1);
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (*piVar16 == 0) {
      (**(code **)*local_d0)(local_d0,1);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480c8048 FUN_1480c8048 body=1194 status=ok
// SIG undefined FUN_1480c8048(void)

void FUN_1480c8048(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  char cVar19;
  int iVar20;
  uint uVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  int *piVar24;
  ulonglong uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  undefined1 auStack_198 [40];
  longlong local_170;
  undefined4 local_168;
  char local_164;
  float *local_160;
  int local_158;
  float *local_150;
  int local_148;
  float *local_140;
  int local_138;
  float *local_130 [2];
  int local_120;
  float *local_118;
  int local_108;
  float *local_100;
  int local_f0;
  int *local_e8;
  undefined8 uStack_e0;
  int local_d8;
  undefined1 local_d0 [8];
  longlong local_c8;
  undefined8 *local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  int local_a0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_1405c93a6(local_d0,param_1);
  local_c0 = (undefined8 *)0x0;
  puVar22 = (undefined8 *)FUN_1405c943a(local_c8,local_b8);
  puVar18 = local_c0;
  puVar16 = local_c0;
  if (local_c0 != puVar22) {
    if (puVar22 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
      UNLOCK();
    }
    puVar16 = puVar22;
    if (local_c0 != (undefined8 *)0x0) {
      LOCK();
      piVar24 = (int *)(local_c0 + 1);
      *piVar24 = *piVar24 + -1;
      UNLOCK();
      if (*piVar24 == 0) {
        puVar16 = (undefined8 *)*local_c0;
        local_c0 = puVar22;
        (*(code *)*puVar16)(puVar18,1);
        puVar16 = local_c0;
      }
    }
  }
  local_c0 = puVar16;
  local_e8 = (int *)0x0;
  uStack_e0 = 0;
  local_d8 = 0;
  FUN_144a98d08(&local_e8,param_1);
  FUN_1448a432c(local_130,param_1);
  FUN_144a76c20(&local_160,param_1);
  FUN_144a76c20(&local_150,param_1);
  FUN_144a76c20(&local_140,param_1);
  if (local_c0 == (undefined8 *)0x0) {
    local_170 = 0;
    local_168 = 0;
    local_164 = '\0';
  }
  else {
    FUN_1461c3a4c(local_c0 + 0x33,&local_170);
    if ((((local_c0 != (undefined8 *)0x0) && (FUN_1461c3a4c(local_c0 + 0x33,local_a8), 2 < local_a0)
         ) && (local_c0 != (undefined8 *)0x0)) &&
       (((local_c0[0x28] != 0 && (cVar19 = FUN_1461c3a34(local_c0 + 0x23), cVar19 != '\0')) &&
        (0 < *(int *)((longlong)local_c0 + 0x14c))))) {
      piVar24 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar24 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar24) {
        iVar26 = local_a0 / 3 + -1;
        iVar29 = 0;
        do {
          iVar20 = *local_e8;
          if (iVar26 <= *local_e8) {
            iVar20 = iVar26;
          }
          if (iVar20 < 1) {
            iVar20 = 0;
          }
          fVar4 = *local_100;
          fVar5 = *local_118;
          fVar6 = *local_130[0];
          uVar23 = (ulonglong)(iVar20 * 3 + 2);
          uVar25 = (ulonglong)(uint)(iVar20 * 3);
          if (local_164 == '\x01') {
            uVar21 = *(uint *)(local_170 + uVar23 * 4);
            uVar28 = *(uint *)(local_170 + uVar25 * 4);
            uVar27 = *(uint *)(local_170 + 4 + uVar25 * 4);
          }
          else {
            uVar21 = (uint)*(ushort *)(local_170 + uVar23 * 2);
            uVar27 = (uint)*(ushort *)(local_170 + 2 + uVar25 * 2);
            uVar28 = (uint)*(ushort *)(local_170 + uVar25 * 2);
          }
          lVar17 = local_c0[0x28];
          iVar20 = *(int *)(local_c0 + 0x29);
          uVar23 = (ulonglong)(uVar28 * iVar20);
          fVar7 = *(float *)(lVar17 + 8 + uVar23);
          fVar8 = *(float *)(lVar17 + 4 + uVar23);
          fVar9 = *(float *)(lVar17 + uVar23);
          uVar23 = (ulonglong)(uVar27 * iVar20);
          fVar10 = *(float *)(lVar17 + 8 + uVar23);
          fVar11 = *(float *)(lVar17 + 4 + uVar23);
          fVar12 = *(float *)(lVar17 + uVar23);
          uVar23 = (ulonglong)(uVar21 * iVar20);
          fVar13 = *(float *)(lVar17 + 8 + uVar23);
          fVar14 = *(float *)(lVar17 + 4 + uVar23);
          fVar15 = *(float *)(lVar17 + uVar23);
          local_130[0] = local_130[0] + local_120;
          local_118 = local_118 + local_108;
          local_100 = local_100 + local_f0;
          local_e8 = local_e8 + local_d8;
          FUN_144a928e2(local_a8,local_c8 + 0x40);
          pfVar1 = local_160 + local_158;
          *local_160 = fVar4 * fVar15 + fVar5 * fVar12 + fVar6 * fVar9;
          pfVar2 = local_150 + local_148;
          *local_150 = fVar14 * fVar4 + fVar11 * fVar5 + fVar8 * fVar6;
          pfVar3 = local_140 + local_138;
          *local_140 = fVar13 * fVar4 + fVar10 * fVar5 + fVar7 * fVar6;
          iVar29 = iVar29 + 1;
          piVar24 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar24 = (int *)(param_1 + 0x3c);
          }
          local_160 = pfVar1;
          local_150 = pfVar2;
          local_140 = pfVar3;
        } while (iVar29 < *piVar24);
      }
      goto LAB_1480c8495;
    }
  }
  fVar6 = DAT_14c846338;
  fVar5 = DAT_14c846330._4_4_;
  fVar4 = (float)DAT_14c846330;
  FUN_144a928e2(local_a8,local_c8 + 0x40);
  piVar24 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar24 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar24) {
    iVar26 = 0;
    do {
      pfVar1 = local_160 + local_158;
      *local_160 = fVar4;
      pfVar2 = local_150 + local_148;
      *local_150 = fVar5;
      pfVar3 = local_140 + local_138;
      *local_140 = fVar6;
      iVar26 = iVar26 + 1;
      piVar24 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar24 = (int *)(param_1 + 0x3c);
      }
      local_160 = pfVar1;
      local_150 = pfVar2;
      local_140 = pfVar3;
    } while (iVar26 < *piVar24);
  }
LAB_1480c8495:
  if (local_c0 != (undefined8 *)0x0) {
    LOCK();
    piVar24 = (int *)(local_c0 + 1);
    *piVar24 = *piVar24 + -1;
    UNLOCK();
    if (*piVar24 == 0) {
      (**(code **)*local_c0)(local_c0,1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480c84f4 FUN_1480c84f4 body=1330 status=ok
// SIG undefined FUN_1480c84f4(void)

void FUN_1480c84f4(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 *puVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  int *piVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_1a8 [40];
  longlong local_180;
  undefined4 local_178;
  char local_174;
  float *local_170;
  int local_168;
  float *local_160;
  int local_158;
  float *local_150;
  int local_148;
  float *local_140 [2];
  int local_130;
  float *local_128;
  int local_118;
  float *local_110;
  int local_100;
  int *local_f8;
  undefined8 uStack_f0;
  int local_e8;
  undefined1 local_e0 [8];
  longlong local_d8;
  undefined8 *local_d0;
  undefined1 local_c8 [16];
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
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_1405c93a6(local_e0,param_1);
  local_d0 = (undefined8 *)0x0;
  puVar13 = (undefined8 *)FUN_1405c943a(local_d8,local_c8);
  puVar9 = local_d0;
  puVar4 = local_d0;
  if (local_d0 != puVar13) {
    if (puVar13 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
      UNLOCK();
    }
    puVar4 = puVar13;
    if (local_d0 != (undefined8 *)0x0) {
      LOCK();
      piVar15 = (int *)(local_d0 + 1);
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (*piVar15 == 0) {
        puVar4 = (undefined8 *)*local_d0;
        local_d0 = puVar13;
        (*(code *)*puVar4)(puVar9,1);
        puVar4 = local_d0;
      }
    }
  }
  local_d0 = puVar4;
  local_f8 = (int *)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  FUN_144a98d08(&local_f8,param_1);
  FUN_1448a432c(local_140,param_1);
  FUN_144a76c20(&local_170,param_1);
  FUN_144a76c20(&local_160,param_1);
  FUN_144a76c20(&local_150,param_1);
  if (local_d0 == (undefined8 *)0x0) {
    local_180 = 0;
    local_178 = 0;
    local_174 = '\0';
  }
  else {
    FUN_1461c3a4c(local_d0 + 0x33,&local_180);
    if ((((local_d0 != (undefined8 *)0x0) &&
         (FUN_1461c3a4c(local_d0 + 0x33,&local_b8), fVar23 = fStack_b0, 2 < (int)fStack_b0)) &&
        (local_d0 != (undefined8 *)0x0)) &&
       (((local_d0[0x28] != 0 && (cVar10 = FUN_1461c3a34(local_d0 + 0x23), cVar10 != '\0')) &&
        (0 < *(int *)((longlong)local_d0 + 0x14c))))) {
      piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar15 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar15) {
        iVar18 = (int)fVar23 / 3 + -1;
        iVar21 = 0;
        do {
          iVar11 = *local_f8;
          if (iVar18 <= *local_f8) {
            iVar11 = iVar18;
          }
          if (iVar11 < 1) {
            iVar11 = 0;
          }
          fVar23 = *local_110;
          fVar24 = *local_128;
          uVar14 = (ulonglong)(iVar11 * 3 + 2);
          uVar17 = (ulonglong)(uint)(iVar11 * 3);
          if (local_174 == '\x01') {
            uVar12 = *(uint *)(local_180 + uVar14 * 4);
            uVar19 = *(uint *)(local_180 + uVar17 * 4);
            uVar16 = *(uint *)(local_180 + 4 + uVar17 * 4);
          }
          else {
            uVar12 = (uint)*(ushort *)(local_180 + uVar14 * 2);
            uVar16 = (uint)*(ushort *)(local_180 + 2 + uVar17 * 2);
            uVar19 = (uint)*(ushort *)(local_180 + uVar17 * 2);
          }
          fVar25 = *local_140[0];
          lVar5 = local_d0[0x28];
          iVar11 = *(int *)(local_d0 + 0x29);
          uVar20 = (ulonglong)(uVar19 * iVar11);
          uVar17 = (ulonglong)(uVar16 * iVar11);
          uVar14 = (ulonglong)(uVar12 * iVar11);
          fVar22 = fVar23 * *(float *)(lVar5 + uVar14) +
                   fVar24 * *(float *)(lVar5 + uVar17) + fVar25 * *(float *)(lVar5 + uVar20);
          fVar27 = *(float *)(lVar5 + 4 + uVar14) * fVar23 +
                   *(float *)(lVar5 + 4 + uVar17) * fVar24 + *(float *)(lVar5 + 4 + uVar20) * fVar25
          ;
          fVar23 = *(float *)(lVar5 + 8 + uVar14) * fVar23 +
                   *(float *)(lVar5 + 8 + uVar17) * fVar24 + *(float *)(lVar5 + 8 + uVar20) * fVar25
          ;
          local_140[0] = local_140[0] + local_130;
          local_128 = local_128 + local_118;
          local_110 = local_110 + local_100;
          local_f8 = local_f8 + local_e8;
          FUN_144a928e2(&local_b8,local_d8 + 0x40);
          fVar24 = fVar23 * local_98 + fVar27 * local_a8 + fVar22 * local_b8 + local_88;
          fVar25 = fVar23 * fStack_94 + fVar27 * fStack_a4 + fVar22 * fStack_b4 + fStack_84;
          fVar26 = fVar23 * fStack_90 + fVar27 * fStack_a0 + fVar22 * fStack_b0 + fStack_80;
          fVar23 = fVar23 * fStack_8c + fVar27 * fStack_9c + fVar22 * fStack_ac + fStack_7c;
          pfVar1 = local_170 + local_168;
          *local_170 = fVar24;
          pfVar2 = local_160 + local_158;
          auVar7._4_4_ = fVar25;
          auVar7._0_4_ = fVar24;
          auVar7._8_4_ = fVar26;
          auVar7._12_4_ = fVar23;
          uVar6 = extractps(auVar7,1);
          *(undefined8 *)local_160 = uVar6;
          pfVar3 = local_150 + local_148;
          auVar8._4_4_ = fVar25;
          auVar8._0_4_ = fVar24;
          auVar8._8_4_ = fVar26;
          auVar8._12_4_ = fVar23;
          uVar6 = extractps(auVar8,2);
          *(undefined8 *)local_150 = uVar6;
          iVar21 = iVar21 + 1;
          piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar15 = (int *)(param_1 + 0x3c);
          }
          local_170 = pfVar1;
          local_160 = pfVar2;
          local_150 = pfVar3;
        } while (iVar21 < *piVar15);
      }
      goto LAB_1480c89c7;
    }
  }
  fVar25 = DAT_14c846338;
  fVar24 = DAT_14c846330._4_4_;
  fVar23 = (float)DAT_14c846330;
  FUN_144a928e2(&local_b8,local_d8 + 0x40);
  piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar15 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar15) {
    iVar18 = 0;
    do {
      pfVar1 = local_170 + local_168;
      *local_170 = fVar25 * local_98 + fVar24 * local_a8 + fVar23 * local_b8 + local_88;
      pfVar2 = local_160 + local_158;
      *local_160 = fVar25 * fStack_94 + fVar24 * fStack_a4 + fVar23 * fStack_b4 + fStack_84;
      pfVar3 = local_150 + local_148;
      *local_150 = fVar25 * fStack_90 + fVar24 * fStack_a0 + fVar23 * fStack_b0 + fStack_80;
      iVar18 = iVar18 + 1;
      piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar15 = (int *)(param_1 + 0x3c);
      }
      local_170 = pfVar1;
      local_160 = pfVar2;
      local_150 = pfVar3;
    } while (iVar18 < *piVar15);
  }
LAB_1480c89c7:
  if (local_d0 != (undefined8 *)0x0) {
    LOCK();
    piVar15 = (int *)(local_d0 + 1);
    *piVar15 = *piVar15 + -1;
    UNLOCK();
    if (*piVar15 == 0) {
      (**(code **)*local_d0)(local_d0,1);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480c8a28 FUN_1480c8a28 body=3832 status=ok
// SIG undefined FUN_1480c8a28(void)

void FUN_1480c8a28(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 *puVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined8 *puVar23;
  char cVar24;
  uint uVar25;
  undefined8 *puVar26;
  int *piVar27;
  int iVar28;
  ulonglong uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  int iVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  int iVar50;
  undefined1 auVar41 [16];
  float fVar49;
  float fVar51;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar52;
  double dVar53;
  double dVar54;
  undefined1 in_XMM3 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined8 uVar62;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar63;
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined1 auStack_348 [36];
  float local_324;
  float local_320;
  float local_31c;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  undefined1 local_298 [16];
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  undefined1 local_278 [16];
  longlong local_260;
  undefined4 local_258;
  char local_254;
  float *local_250;
  int local_248;
  float *local_240;
  int local_238;
  float *local_230;
  int local_228;
  float *local_220;
  int local_218;
  float *local_210;
  int local_208;
  float *local_200;
  int local_1f8;
  float *local_1f0;
  int local_1e8;
  float *local_1e0;
  int local_1d8;
  float *local_1d0;
  int local_1c8;
  float *local_1c0 [2];
  int local_1b0;
  float *local_1a8;
  int local_198;
  float *local_190;
  int local_180;
  int *local_178;
  undefined8 uStack_170;
  int local_168;
  undefined1 local_160 [8];
  longlong local_158;
  undefined8 *local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [8];
  int local_130;
  ulonglong local_f0;
  undefined8 extraout_XMM0_Qb;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  FUN_1405c93a6(local_160,param_1);
  local_150 = (undefined8 *)0x0;
  puVar26 = (undefined8 *)FUN_1405c943a(local_158,local_148);
  puVar23 = local_150;
  puVar10 = local_150;
  if (local_150 != puVar26) {
    if (puVar26 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
      UNLOCK();
    }
    puVar10 = puVar26;
    if (local_150 != (undefined8 *)0x0) {
      LOCK();
      piVar27 = (int *)(local_150 + 1);
      *piVar27 = *piVar27 + -1;
      UNLOCK();
      if (*piVar27 == 0) {
        puVar10 = (undefined8 *)*local_150;
        local_150 = puVar26;
        (*(code *)*puVar10)(puVar23,1);
        puVar10 = local_150;
      }
    }
  }
  local_150 = puVar10;
  local_178 = (int *)0x0;
  uStack_170 = 0;
  local_168 = 0;
  FUN_144a98d08(&local_178,param_1);
  FUN_1448a432c(local_1c0,param_1);
  FUN_144a76c20(&local_1f0,param_1);
  FUN_144a76c20(&local_1e0,param_1);
  FUN_144a76c20(&local_1d0,param_1);
  FUN_144a76c20(&local_220,param_1);
  FUN_144a76c20(&local_210,param_1);
  FUN_144a76c20(&local_200,param_1);
  FUN_144a76c20(&local_250,param_1);
  FUN_144a76c20(&local_240,param_1);
  FUN_144a76c20(&local_230,param_1);
  if (local_150 == (undefined8 *)0x0) {
    local_260 = 0;
    local_258 = 0;
    local_254 = '\0';
  }
  else {
    FUN_1461c3a4c(local_150 + 0x33,&local_260);
    if ((((((local_150 != (undefined8 *)0x0) &&
           (FUN_1461c3a4c(local_150 + 0x33,local_138), puVar23 = local_150, 2 < local_130)) &&
          (local_150 != (undefined8 *)0x0)) &&
         ((local_150[0x1e] != 0 && ((longlong *)local_150[0x1a] != (longlong *)0x0)))) &&
        ((local_150[0x1c] != 0 &&
         ((cVar24 = (**(code **)(*(longlong *)local_150[0x1a] + 0x58))(), cVar24 != '\0' &&
          (cVar24 = (**(code **)(*(longlong *)puVar23[0x1c] + 0x58))(), cVar24 != '\0')))))) &&
       (0 < *(int *)((longlong)local_150 + 0x10c))) {
      piVar27 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar27 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar27) {
        iVar30 = local_130 / 3 + -1;
        iVar37 = 0;
        do {
          iVar28 = *local_178;
          if (iVar30 <= *local_178) {
            iVar28 = iVar30;
          }
          if (iVar28 < 1) {
            iVar28 = 0;
          }
          local_31c = *local_190;
          local_324 = *local_1a8;
          uVar35 = (ulonglong)(iVar28 * 3 + 2);
          uVar34 = (ulonglong)(uint)(iVar28 * 3);
          if (local_254 == '\x01') {
            uVar25 = *(uint *)(local_260 + uVar35 * 4);
            uVar31 = *(uint *)(local_260 + uVar34 * 4);
            uVar32 = *(uint *)(local_260 + 4 + uVar34 * 4);
          }
          else {
            uVar25 = (uint)*(ushort *)(local_260 + uVar35 * 2);
            uVar32 = (uint)*(ushort *)(local_260 + 2 + uVar34 * 2);
            uVar31 = (uint)*(ushort *)(local_260 + uVar34 * 2);
          }
          local_320 = *local_1c0[0];
          lVar11 = local_150[0x1e];
          if (*(char *)((longlong)local_150 + 0x111) == '\x01') {
            auVar39 = pmovsxwd(ZEXT416((uint)local_324),
                               *(undefined8 *)(lVar11 + (ulonglong)uVar31 * 0x10));
            auVar55._0_4_ = (float)auVar39._0_4_ * 3.051851e-05;
            auVar55._4_4_ = (float)auVar39._4_4_ * 3.051851e-05;
            auVar55._8_4_ = (float)auVar39._8_4_ * 3.051851e-05;
            auVar55._12_4_ = (float)auVar39._12_4_ * 0.0;
            auVar40._4_12_ = auVar55._4_12_;
            auVar40._0_4_ = auVar55._0_4_ * local_320;
            auVar39 = pmovsxwd(in_XMM3,*(undefined8 *)(lVar11 + (ulonglong)uVar32 * 0x10));
            fStack_2a4 = (float)auVar39._4_4_ * 3.051851e-05;
            fStack_2b0 = (float)auVar39._8_4_ * 3.051851e-05;
            fStack_29c = (float)auVar39._12_4_ * 0.0;
            auVar21._4_4_ = fStack_2b0;
            auVar21._0_4_ = fStack_2a4;
            auVar21._8_4_ = fStack_29c;
            auVar65._12_4_ = fStack_29c;
            auVar65._8_4_ = fStack_2b0;
            auVar65._0_8_ = auVar21._4_8_;
            auVar66._4_12_ = auVar65._4_12_;
            auVar66._0_4_ = fStack_2b0 * local_324 + auVar55._8_4_ * local_320;
            local_2a8 = fStack_2a4 * local_324 + auVar55._4_4_ * local_320;
            local_2b8 = (float)auVar39._0_4_ * 3.051851e-05 * local_324 + auVar40._0_4_;
            auVar39 = pmovsxwd(auVar40,*(undefined8 *)(lVar11 + (ulonglong)uVar25 * 0x10));
            iVar50 = auVar39._12_4_;
            fVar71 = (float)auVar39._0_4_ * 3.051851e-05;
            fVar73 = (float)auVar39._4_4_ * 3.051851e-05;
            fVar74 = (float)auVar39._8_4_ * 3.051851e-05;
          }
          else {
            auVar39 = pmovsxbd(ZEXT416((uint)local_324),
                               *(undefined4 *)(lVar11 + (ulonglong)uVar31 * 8));
            auVar68._0_4_ = (float)auVar39._0_4_ * 0.007874016;
            auVar68._4_4_ = (float)auVar39._4_4_ * 0.007874016;
            auVar68._8_4_ = (float)auVar39._8_4_ * 0.007874016;
            auVar68._12_4_ = (float)auVar39._12_4_ * 0.0;
            auVar55 = pmovsxbd(in_XMM3,*(undefined4 *)(lVar11 + (ulonglong)uVar32 * 8));
            auVar39._4_12_ = auVar68._4_12_;
            auVar39._0_4_ = auVar68._0_4_ * local_320;
            fStack_2a4 = (float)auVar55._4_4_ * 0.007874016;
            fStack_2b0 = (float)auVar55._8_4_ * 0.007874016;
            fStack_29c = (float)auVar55._12_4_ * 0.0;
            auVar22._4_4_ = fStack_2b0;
            auVar22._0_4_ = fStack_2a4;
            auVar22._8_4_ = fStack_29c;
            auVar67._12_4_ = fStack_29c;
            auVar67._8_4_ = fStack_2b0;
            auVar67._0_8_ = auVar22._4_8_;
            auVar66._4_12_ = auVar67._4_12_;
            auVar66._0_4_ = fStack_2b0 * local_324 + auVar68._8_4_ * local_320;
            local_2a8 = fStack_2a4 * local_324 + auVar68._4_4_ * local_320;
            local_2b8 = (float)auVar55._0_4_ * 0.007874016 * local_324 + auVar39._0_4_;
            auVar39 = pmovsxbd(auVar39,*(undefined4 *)(lVar11 + (ulonglong)uVar25 * 8));
            iVar50 = auVar39._12_4_;
            fVar71 = (float)auVar39._0_4_ * 0.007874016;
            fVar73 = (float)auVar39._4_4_ * 0.007874016;
            fVar74 = (float)auVar39._8_4_ * 0.007874016;
          }
          fVar75 = (float)iVar50 * 0.0;
          fStack_2b4 = fStack_2a4;
          fStack_2ac = fStack_29c;
          fStack_2a0 = fStack_29c;
          local_298 = auVar66;
          local_1c0[0] = local_1c0[0] + local_1b0;
          local_1a8 = local_1a8 + local_198;
          local_190 = local_190 + local_180;
          local_178 = local_178 + local_168;
          auVar41._0_8_ = FUN_144a928e2(local_138,local_158 + 0x40);
          auVar41._8_8_ = extraout_XMM0_Qb;
          uVar36 = (ulonglong)(iVar28 * 3 + 1);
          if (local_254 == '\x01') {
            uVar25 = *(uint *)(local_260 + uVar35 * 4);
            uVar31 = *(uint *)(local_260 + uVar36 * 4);
            uVar32 = *(uint *)(local_260 + uVar34 * 4);
          }
          else {
            uVar25 = (uint)*(ushort *)(local_260 + uVar35 * 2);
            uVar31 = (uint)*(ushort *)(local_260 + uVar36 * 2);
            uVar32 = (uint)*(ushort *)(local_260 + uVar34 * 2);
          }
          lVar11 = local_150[0x1e];
          uVar33 = (ulonglong)uVar32;
          uVar29 = (ulonglong)uVar31;
          if (*(char *)((longlong)local_150 + 0x111) == '\x01') {
            auVar39 = pmovsxwd(auVar41,*(undefined8 *)(lVar11 + uVar33 * 0x10));
            fVar49 = (float)auVar39._4_4_ * 3.051851e-05;
            fVar51 = (float)auVar39._12_4_ * 0.0;
            auVar56._4_4_ = fVar49;
            auVar56._0_4_ = fVar49;
            auVar56._8_4_ = fVar51;
            auVar56._12_4_ = fVar51;
            dVar12 = (double)((float)auVar39._0_4_ * 3.051851e-05);
            dVar53 = (double)((float)auVar39._8_4_ * 3.051851e-05);
            auVar39 = pmovsxwd(auVar56,*(undefined8 *)(lVar11 + 8 + uVar33 * 0x10));
            auVar57._12_4_ = (float)auVar39._12_4_ * 3.051851e-05;
            dVar14 = (double)((float)auVar39._0_4_ * 3.051851e-05);
            auVar57._4_4_ = auVar57._12_4_;
            auVar57._0_4_ = auVar57._12_4_;
            auVar57._8_4_ = auVar57._12_4_;
            uVar62 = auVar57._8_8_;
            dVar54 = (double)auVar57._12_4_;
            dVar64 = (double)((float)auVar39._8_4_ * 3.051851e-05);
            dVar13 = (double)((float)auVar39._4_4_ * 3.051851e-05);
            auVar42._0_8_ = (double)fVar49 * dVar64;
            auVar42._8_8_ = 0;
            dVar38 = (dVar14 * (double)fVar49 - dVar12 * dVar13) * dVar54;
            dVar12 = (dVar64 * dVar12 - dVar53 * dVar14) * dVar54;
            dVar54 = (dVar13 * dVar53 - auVar42._0_8_) * dVar54;
            auVar39 = pmovsxwd(auVar42,*(undefined8 *)(lVar11 + uVar29 * 0x10));
            fVar49 = (float)auVar39._0_4_ * 3.051851e-05;
            fVar51 = (float)auVar39._4_4_ * 3.051851e-05;
            fVar78 = (float)auVar39._8_4_ * 3.051851e-05;
            fVar79 = (float)auVar39._12_4_ * 0.0;
            auVar15._4_8_ = auVar39._8_8_;
            auVar15._0_4_ = fVar51;
            auVar43._0_8_ = auVar15._0_8_ << 0x20;
            auVar43._8_4_ = fVar78;
            auVar43._12_4_ = fVar79;
            local_2c8 = auVar43._8_8_;
            uStack_2c0 = CONCAT44(fVar79,fVar78);
            local_2f8._4_4_ = fVar51;
            local_2f8._0_4_ = fVar51;
            local_2f8._8_4_ = fVar79;
            local_2f8._12_4_ = fVar79;
            auVar39 = pmovsxwd(local_2f8,*(undefined8 *)(lVar11 + 8 + uVar29 * 0x10));
            fVar51 = (float)auVar39._0_4_ * 3.051851e-05;
            fVar78 = (float)auVar39._4_4_ * 3.051851e-05;
            fVar79 = (float)auVar39._8_4_ * 3.051851e-05;
            fVar85 = (float)auVar39._12_4_ * 3.051851e-05;
          }
          else {
            auVar39 = pmovsxbd(auVar41,*(undefined4 *)(lVar11 + uVar33 * 8));
            dVar12 = (double)((float)auVar39._0_4_ * 0.007874016);
            dVar53 = (double)((float)auVar39._8_4_ * 0.007874016);
            auVar68 = pmovsxbd(auVar66,*(undefined4 *)(lVar11 + 4 + uVar33 * 8));
            dVar38 = (double)((float)auVar39._4_4_ * 0.007874016);
            auVar58._12_4_ = (float)auVar68._12_4_ * 0.007874016;
            dVar14 = (double)((float)auVar68._0_4_ * 0.007874016);
            auVar58._4_4_ = auVar58._12_4_;
            auVar58._0_4_ = auVar58._12_4_;
            auVar58._8_4_ = auVar58._12_4_;
            uVar62 = auVar58._8_8_;
            dVar54 = (double)auVar58._12_4_;
            dVar64 = (double)((float)auVar68._8_4_ * 0.007874016);
            dVar13 = (double)((float)auVar68._4_4_ * 0.007874016);
            auVar44._0_8_ = dVar38 * dVar64;
            auVar44._8_8_ = 0;
            dVar38 = (dVar14 * dVar38 - dVar12 * dVar13) * dVar54;
            dVar12 = (dVar64 * dVar12 - dVar53 * dVar14) * dVar54;
            dVar54 = (dVar13 * dVar53 - auVar44._0_8_) * dVar54;
            auVar39 = pmovsxbd(auVar44,*(undefined4 *)(lVar11 + uVar29 * 8));
            fVar49 = (float)auVar39._0_4_ * 0.007874016;
            fVar51 = (float)auVar39._4_4_ * 0.007874016;
            fVar78 = (float)auVar39._8_4_ * 0.007874016;
            fVar79 = (float)auVar39._12_4_ * 0.0;
            auVar16._4_8_ = auVar39._8_8_;
            auVar16._0_4_ = fVar51;
            auVar45._0_8_ = auVar16._0_8_ << 0x20;
            auVar45._8_4_ = fVar78;
            auVar45._12_4_ = fVar79;
            local_2c8 = auVar45._8_8_;
            uStack_2c0 = CONCAT44(fVar79,fVar78);
            local_2f8._4_4_ = fVar51;
            local_2f8._0_4_ = fVar51;
            local_2f8._8_4_ = fVar79;
            local_2f8._12_4_ = fVar79;
            auVar39 = pmovsxbd(local_2f8,*(undefined4 *)(lVar11 + 4 + uVar29 * 8));
            fVar51 = (float)auVar39._0_4_ * 0.007874016;
            fVar78 = (float)auVar39._4_4_ * 0.007874016;
            fVar79 = (float)auVar39._8_4_ * 0.007874016;
            fVar85 = (float)auVar39._12_4_ * 0.007874016;
          }
          uVar29 = (ulonglong)uVar25;
          if (*(char *)((longlong)local_150 + 0x111) == '\0') {
            auVar39 = pmovsxbd(auVar39,*(undefined4 *)(lVar11 + uVar29 * 8));
            local_2e8 = (float)auVar39._0_4_ * 0.007874016;
            fStack_2e4 = (float)auVar39._4_4_ * 0.007874016;
            fStack_2e0 = (float)auVar39._8_4_ * 0.007874016;
            fStack_2dc = (float)auVar39._12_4_ * 0.0;
            auVar18._4_8_ = auVar39._8_8_;
            auVar18._0_4_ = fStack_2e4;
            auVar47._0_8_ = auVar18._0_8_ << 0x20;
            auVar47._8_4_ = fStack_2e0;
            auVar47._12_4_ = fStack_2dc;
            local_2d8 = auVar47._8_8_;
            uStack_2d0 = CONCAT44(fStack_2dc,fStack_2e0);
            local_318._4_4_ = fStack_2e4;
            local_318._0_4_ = fStack_2e4;
            local_318._8_4_ = fStack_2dc;
            local_318._12_4_ = fStack_2dc;
            auVar39 = pmovsxbd(local_318,*(undefined4 *)(lVar11 + 4 + uVar29 * 8));
            fVar80 = (float)auVar39._0_4_ * 0.007874016;
            fVar81 = (float)auVar39._4_4_ * 0.007874016;
            fVar82 = (float)auVar39._8_4_ * 0.007874016;
            fVar83 = (float)auVar39._12_4_ * 0.007874016;
          }
          else {
            auVar39 = pmovsxwd(auVar39,*(undefined8 *)(lVar11 + uVar29 * 0x10));
            local_2e8 = (float)auVar39._0_4_ * 3.051851e-05;
            fStack_2e4 = (float)auVar39._4_4_ * 3.051851e-05;
            fStack_2e0 = (float)auVar39._8_4_ * 3.051851e-05;
            fStack_2dc = (float)auVar39._12_4_ * 0.0;
            auVar17._4_8_ = auVar39._8_8_;
            auVar17._0_4_ = fStack_2e4;
            auVar46._0_8_ = auVar17._0_8_ << 0x20;
            auVar46._8_4_ = fStack_2e0;
            auVar46._12_4_ = fStack_2dc;
            local_2d8 = auVar46._8_8_;
            uStack_2d0 = CONCAT44(fStack_2dc,fStack_2e0);
            local_318._4_4_ = fStack_2e4;
            local_318._0_4_ = fStack_2e4;
            local_318._8_4_ = fStack_2dc;
            local_318._12_4_ = fStack_2dc;
            auVar39 = pmovsxwd(local_318,*(undefined8 *)(lVar11 + 8 + uVar29 * 0x10));
            fVar80 = (float)auVar39._0_4_ * 3.051851e-05;
            fVar81 = (float)auVar39._4_4_ * 3.051851e-05;
            fVar82 = (float)auVar39._8_4_ * 3.051851e-05;
            fVar83 = (float)auVar39._12_4_ * 3.051851e-05;
          }
          local_288 = fVar71;
          fStack_284 = fVar73;
          fStack_280 = fVar74;
          fStack_27c = fVar75;
          FUN_144a928e2(local_138,local_158 + 0x40);
          if (local_254 == '\x01') {
            uVar25 = *(uint *)(local_260 + uVar35 * 4);
            uVar31 = *(uint *)(local_260 + uVar36 * 4);
            uVar32 = *(uint *)(local_260 + uVar34 * 4);
          }
          else {
            uVar25 = (uint)*(ushort *)(local_260 + uVar35 * 2);
            uVar31 = (uint)*(ushort *)(local_260 + uVar36 * 2);
            uVar32 = (uint)*(ushort *)(local_260 + uVar34 * 2);
          }
          local_278._4_4_ = fVar73;
          local_278._0_4_ = fVar73;
          local_278._8_4_ = fVar75;
          local_278._12_4_ = fVar75;
          lVar11 = local_150[0x1e];
          if (*(char *)((longlong)local_150 + 0x111) == '\x01') {
            auVar39 = pmovsxwd(local_278,*(undefined8 *)(lVar11 + 8 + (ulonglong)uVar32 * 0x10));
            auVar48._0_4_ = (float)auVar39._0_4_ * 3.051851e-05;
            auVar48._4_4_ = (float)auVar39._4_4_ * 3.051851e-05;
            auVar48._8_4_ = (float)auVar39._8_4_ * 3.051851e-05;
            auVar48._12_4_ = (float)auVar39._12_4_ * 0.0;
            auVar19._4_8_ = uVar62;
            auVar19._0_4_ = auVar48._4_4_;
            auVar59._0_8_ = auVar19._0_8_ << 0x20;
            auVar59._8_4_ = auVar48._8_4_;
            auVar59._12_4_ = auVar48._12_4_;
            auVar60._8_8_ = auVar48._8_8_;
            auVar60._0_8_ = auVar59._8_8_;
            local_308._4_4_ = auVar48._4_4_;
            local_308._0_4_ = auVar48._4_4_;
            local_308._8_4_ = auVar48._12_4_;
            local_308._12_4_ = auVar48._12_4_;
            auVar39 = pmovsxwd(local_308,*(undefined8 *)(lVar11 + 8 + (ulonglong)uVar31 * 0x10));
            fVar75 = (float)auVar39._0_4_ * 3.051851e-05;
            fVar71 = (float)auVar39._4_4_ * 3.051851e-05;
            fVar69 = (float)auVar39._8_4_ * 3.051851e-05;
          }
          else {
            auVar39 = pmovsxbd(local_278,*(undefined4 *)(lVar11 + 4 + (ulonglong)uVar32 * 8));
            auVar48._0_4_ = (float)auVar39._0_4_ * 0.007874016;
            auVar48._4_4_ = (float)auVar39._4_4_ * 0.007874016;
            auVar48._8_4_ = (float)auVar39._8_4_ * 0.007874016;
            auVar48._12_4_ = (float)auVar39._12_4_ * 0.0;
            auVar20._4_8_ = uVar62;
            auVar20._0_4_ = auVar48._4_4_;
            auVar61._0_8_ = auVar20._0_8_ << 0x20;
            auVar61._8_4_ = auVar48._8_4_;
            auVar61._12_4_ = auVar48._12_4_;
            auVar60._8_8_ = auVar48._8_8_;
            auVar60._0_8_ = auVar61._8_8_;
            local_308._4_4_ = auVar48._4_4_;
            local_308._0_4_ = auVar48._4_4_;
            local_308._8_4_ = auVar48._12_4_;
            local_308._12_4_ = auVar48._12_4_;
            auVar39 = pmovsxbd(local_308,*(undefined4 *)(lVar11 + 4 + (ulonglong)uVar31 * 8));
            fVar75 = (float)auVar39._0_4_ * 0.007874016;
            fVar71 = (float)auVar39._4_4_ * 0.007874016;
            fVar69 = (float)auVar39._8_4_ * 0.007874016;
          }
          fVar63 = (float)dVar38 * local_320;
          fVar52 = (float)dVar12 * local_320;
          fVar72 = (float)dVar54 * local_320;
          fVar70 = (fVar51 * (float)local_2f8._0_4_ - fVar49 * fVar78) * fVar85 * local_324;
          fVar49 = (fVar79 * fVar49 - fVar51 * (float)local_2c8) * fVar85 * local_324;
          fVar51 = (fVar78 * (float)local_2c8 - fVar79 * (float)local_2f8._0_4_) * fVar85 *
                   local_324;
          fVar79 = (fVar80 * (float)local_318._0_4_ - local_2e8 * fVar81) * fVar83 * local_31c;
          fVar85 = (fVar82 * local_2e8 - fVar80 * (float)local_2d8) * fVar83 * local_31c;
          fVar78 = (fVar81 * (float)local_2d8 - fVar82 * (float)local_318._0_4_) * fVar83 *
                   local_31c;
          if (*(char *)((longlong)local_150 + 0x111) == '\0') {
            auVar39 = pmovsxbd(ZEXT416((uint)local_31c),
                               *(undefined4 *)(lVar11 + 4 + (ulonglong)uVar25 * 8));
            fVar80 = (float)auVar39._0_4_ * 0.007874016;
            fVar81 = (float)auVar39._4_4_ * 0.007874016;
            fVar82 = (float)auVar39._8_4_ * 0.007874016;
          }
          else {
            auVar39 = pmovsxwd(ZEXT416((uint)local_31c),
                               *(undefined8 *)(lVar11 + 8 + (ulonglong)uVar25 * 0x10));
            fVar80 = (float)auVar39._0_4_ * 3.051851e-05;
            fVar81 = (float)auVar39._4_4_ * 3.051851e-05;
            fVar82 = (float)auVar39._8_4_ * 3.051851e-05;
          }
          fVar83 = local_288 * local_31c + local_2b8;
          fVar76 = local_2a8 + fVar73 * local_31c;
          fVar84 = (float)local_298._0_4_ + fVar74 * local_31c;
          in_XMM3._4_12_ = auVar60._4_12_;
          in_XMM3._0_4_ = auVar60._0_4_ * local_320;
          fVar77 = (float)local_308._0_4_ * local_320;
          fVar73 = auVar48._0_4_ * local_320;
          fVar74 = fVar69 * local_324 + in_XMM3._0_4_;
          fVar71 = fVar71 * local_324;
          fVar75 = local_324 * fVar75;
          fVar82 = fVar82 * local_31c;
          fVar81 = fVar81 * local_31c;
          fVar80 = local_31c * fVar80;
          FUN_144a928e2(local_138,local_158 + 0x40);
          pfVar1 = local_250 + local_248;
          *local_250 = fVar80 + fVar75 + fVar73;
          pfVar2 = local_240 + local_238;
          *local_240 = fVar81 + fVar71 + fVar77;
          pfVar3 = local_230 + local_228;
          *local_230 = fVar82 + fVar74;
          pfVar4 = local_220 + local_218;
          *local_220 = fVar51 + fVar72 + fVar78;
          pfVar5 = local_210 + local_208;
          *local_210 = fVar49 + fVar52 + fVar85;
          pfVar6 = local_200 + local_1f8;
          *local_200 = fVar70 + fVar63 + fVar79;
          pfVar7 = local_1f0 + local_1e8;
          *local_1f0 = fVar83;
          pfVar8 = local_1e0 + local_1d8;
          *local_1e0 = fVar76;
          pfVar9 = local_1d0 + local_1c8;
          *local_1d0 = fVar84;
          iVar37 = iVar37 + 1;
          piVar27 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar27 = (int *)(param_1 + 0x3c);
          }
          local_250 = pfVar1;
          local_240 = pfVar2;
          local_230 = pfVar3;
          local_220 = pfVar4;
          local_210 = pfVar5;
          local_200 = pfVar6;
          local_1f0 = pfVar7;
          local_1e0 = pfVar8;
          local_1d0 = pfVar9;
        } while (iVar37 < *piVar27);
      }
      goto LAB_1480c987e;
    }
  }
  FUN_144a928e2(local_138,local_158 + 0xc0);
  FUN_144a928e2(local_138,local_158 + 0xc0);
  FUN_144a928e2(local_138,local_158 + 0xc0);
  piVar27 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar27 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar27) {
    iVar30 = 0;
    do {
      pfVar1 = local_250 + local_248;
      *local_250 = 0.0;
      pfVar2 = local_240 + local_238;
      *local_240 = 0.0;
      pfVar3 = local_230 + local_228;
      *local_230 = 1.0;
      pfVar4 = local_220 + local_218;
      *local_220 = 0.0;
      pfVar5 = local_210 + local_208;
      *local_210 = 1.0;
      pfVar6 = local_200 + local_1f8;
      *local_200 = 0.0;
      pfVar7 = local_1f0 + local_1e8;
      *local_1f0 = 1.0;
      pfVar8 = local_1e0 + local_1d8;
      *local_1e0 = 0.0;
      pfVar9 = local_1d0 + local_1c8;
      *local_1d0 = 0.0;
      iVar30 = iVar30 + 1;
      piVar27 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar27 = (int *)(param_1 + 0x3c);
      }
      local_250 = pfVar1;
      local_240 = pfVar2;
      local_230 = pfVar3;
      local_220 = pfVar4;
      local_210 = pfVar5;
      local_200 = pfVar6;
      local_1f0 = pfVar7;
      local_1e0 = pfVar8;
      local_1d0 = pfVar9;
    } while (iVar30 < *piVar27);
  }
LAB_1480c987e:
  if (local_150 != (undefined8 *)0x0) {
    LOCK();
    piVar27 = (int *)(local_150 + 1);
    *piVar27 = *piVar27 + -1;
    UNLOCK();
    if (*piVar27 == 0) {
      (**(code **)*local_150)(local_150,1);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480c9922 FUN_1480c9922 body=4450 status=ok
// SIG undefined FUN_1480c9922(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480c9922(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined8 *puVar14;
  char cVar15;
  uint uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  int iVar27;
  undefined1 auVar29 [12];
  double dVar28;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 in_XMM3 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [12];
  undefined1 in_XMM4 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  int iVar50;
  double dVar51;
  float fVar53;
  float fVar54;
  undefined1 auVar52 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auStack_2e8 [40];
  float local_2c0;
  float local_2bc;
  undefined1 local_2b8 [8];
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [16];
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  longlong local_260;
  undefined4 local_258;
  char local_254;
  float *local_250;
  int local_248;
  float *local_240;
  int local_238;
  float *local_230;
  int local_228;
  float *local_220;
  int local_218;
  float *local_210;
  int local_208;
  float *local_200;
  int local_1f8;
  float *local_1f0;
  int local_1e8;
  float *local_1e0;
  int local_1d8;
  float *local_1d0;
  int local_1c8;
  float *local_1c0 [2];
  int local_1b0;
  float *local_1a8;
  int local_198;
  float *local_190;
  int local_180;
  int *local_178;
  undefined8 uStack_170;
  int local_168;
  undefined1 local_160 [8];
  longlong local_158;
  undefined8 *local_150;
  undefined1 local_148 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  FUN_1405c93a6(local_160,param_1);
  local_150 = (undefined8 *)0x0;
  puVar17 = (undefined8 *)FUN_1405c943a(local_158,local_148);
  puVar14 = local_150;
  puVar10 = local_150;
  if (local_150 != puVar17) {
    if (puVar17 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
      UNLOCK();
    }
    puVar10 = puVar17;
    if (local_150 != (undefined8 *)0x0) {
      LOCK();
      piVar19 = (int *)(local_150 + 1);
      *piVar19 = *piVar19 + -1;
      UNLOCK();
      if (*piVar19 == 0) {
        puVar10 = (undefined8 *)*local_150;
        local_150 = puVar17;
        (*(code *)*puVar10)(puVar14,1);
        puVar10 = local_150;
      }
    }
  }
  local_150 = puVar10;
  local_178 = (int *)0x0;
  uStack_170 = 0;
  local_168 = 0;
  FUN_144a98d08(&local_178,param_1);
  FUN_1448a432c(local_1c0,param_1);
  FUN_144a76c20(&local_1f0,param_1);
  FUN_144a76c20(&local_1e0,param_1);
  FUN_144a76c20(&local_1d0,param_1);
  FUN_144a76c20(&local_220,param_1);
  FUN_144a76c20(&local_210,param_1);
  FUN_144a76c20(&local_200,param_1);
  FUN_144a76c20(&local_250,param_1);
  FUN_144a76c20(&local_240,param_1);
  FUN_144a76c20(&local_230,param_1);
  if (local_150 == (undefined8 *)0x0) {
    local_260 = 0;
    local_258 = 0;
    local_254 = '\0';
  }
  else {
    FUN_1461c3a4c(local_150 + 0x33,&local_260);
    if ((((((local_150 != (undefined8 *)0x0) &&
           (FUN_1461c3a4c(local_150 + 0x33,&local_138), fVar56 = fStack_130, puVar14 = local_150,
           2 < (int)fStack_130)) && (local_150 != (undefined8 *)0x0)) &&
         ((local_150[0x1e] != 0 && ((longlong *)local_150[0x1a] != (longlong *)0x0)))) &&
        ((local_150[0x1c] != 0 &&
         ((cVar15 = (**(code **)(*(longlong *)local_150[0x1a] + 0x58))(), cVar15 != '\0' &&
          (cVar15 = (**(code **)(*(longlong *)puVar14[0x1c] + 0x58))(), cVar15 != '\0')))))) &&
       (0 < *(int *)((longlong)local_150 + 0x10c))) {
      piVar19 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar19 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar19) {
        iVar20 = (int)fVar56 / 3 + -1;
        iVar27 = 0;
        do {
          iVar50 = *local_178;
          if (iVar20 <= *local_178) {
            iVar50 = iVar20;
          }
          if (iVar50 < 1) {
            iVar50 = 0;
          }
          local_2c0 = *local_190;
          fVar56 = *local_1a8;
          auVar52 = ZEXT416((uint)fVar56);
          uVar25 = (ulonglong)(iVar50 * 3 + 2);
          uVar24 = (ulonglong)(uint)(iVar50 * 3);
          if (local_254 == '\x01') {
            uVar16 = *(uint *)(local_260 + uVar25 * 4);
            uVar21 = *(uint *)(local_260 + uVar24 * 4);
            uVar22 = *(uint *)(local_260 + 4 + uVar24 * 4);
          }
          else {
            uVar16 = (uint)*(ushort *)(local_260 + uVar25 * 2);
            uVar22 = (uint)*(ushort *)(local_260 + 2 + uVar24 * 2);
            uVar21 = (uint)*(ushort *)(local_260 + uVar24 * 2);
          }
          local_2bc = *local_1c0[0];
          lVar11 = local_150[0x1e];
          if (*(char *)((longlong)local_150 + 0x111) == '\x01') {
            auVar30 = pmovsxwd(ZEXT416((uint)local_2c0),
                               *(undefined8 *)(lVar11 + (ulonglong)uVar21 * 0x10));
            auVar42._0_4_ = (float)auVar30._0_4_ * 3.051851e-05;
            auVar42._4_4_ = (float)auVar30._4_4_ * 3.051851e-05;
            auVar42._8_4_ = (float)auVar30._8_4_ * 3.051851e-05;
            auVar42._12_4_ = (float)auVar30._12_4_ * 0.0;
            auVar31._4_12_ = auVar42._4_12_;
            auVar31._0_4_ = auVar42._0_4_ * local_2bc;
            auVar30 = pmovsxwd(in_XMM3,*(undefined8 *)(lVar11 + (ulonglong)uVar22 * 0x10));
            fVar70 = (float)auVar30._8_4_ * 3.051851e-05 * fVar56 + auVar42._8_4_ * local_2bc;
            fVar64 = (float)auVar30._4_4_ * 3.051851e-05 * fVar56 + auVar42._4_4_ * local_2bc;
            fVar56 = (float)auVar30._0_4_ * 3.051851e-05 * fVar56 + auVar31._0_4_;
            auVar30 = pmovsxwd(auVar31,*(undefined8 *)(lVar11 + (ulonglong)uVar16 * 0x10));
            fVar61 = (float)auVar30._0_4_ * 3.051851e-05;
            fVar62 = (float)auVar30._4_4_ * 3.051851e-05;
            fVar63 = (float)auVar30._8_4_ * 3.051851e-05;
          }
          else {
            auVar30 = pmovsxbd(ZEXT416((uint)local_2c0),
                               *(undefined4 *)(lVar11 + (ulonglong)uVar21 * 8));
            fVar61 = (float)DAT_14a329b30;
            auVar32._0_4_ = (float)auVar30._0_4_ * fVar61;
            fVar62 = DAT_14a329b30._4_4_;
            auVar32._4_4_ = (float)auVar30._4_4_ * fVar62;
            fVar63 = DAT_14a329b30._8_4_;
            auVar32._8_4_ = (float)auVar30._8_4_ * fVar63;
            auVar32._12_4_ = (float)auVar30._12_4_ * DAT_14a329b30._12_4_;
            auVar42 = pmovsxbd(in_XMM3,*(undefined4 *)(lVar11 + (ulonglong)uVar22 * 8));
            auVar30._4_12_ = auVar32._4_12_;
            auVar30._0_4_ = auVar32._0_4_ * local_2bc;
            fVar70 = (float)auVar42._8_4_ * fVar63 * fVar56 + auVar32._8_4_ * local_2bc;
            fVar64 = (float)auVar42._4_4_ * fVar62 * fVar56 + auVar32._4_4_ * local_2bc;
            fVar56 = (float)auVar42._0_4_ * fVar61 * fVar56 + auVar30._0_4_;
            auVar30 = pmovsxbd(auVar30,*(undefined4 *)(lVar11 + (ulonglong)uVar16 * 8));
            fVar61 = (float)auVar30._0_4_ * fVar61;
            fVar62 = (float)auVar30._4_4_ * fVar62;
            fVar63 = (float)auVar30._8_4_ * fVar63;
            in_XMM4 = _DAT_14a329b30;
          }
          local_288 = auVar52;
          local_1c0[0] = local_1c0[0] + local_1b0;
          local_1a8 = local_1a8 + local_198;
          local_190 = local_190 + local_180;
          local_178 = local_178 + local_168;
          FUN_144a928e2(&local_138,local_158 + 0x40);
          uVar26 = (ulonglong)(iVar50 * 3 + 1);
          if (local_254 == '\x01') {
            uVar16 = *(uint *)(local_260 + uVar25 * 4);
            uVar21 = *(uint *)(local_260 + uVar26 * 4);
            uVar22 = *(uint *)(local_260 + uVar24 * 4);
          }
          else {
            uVar16 = (uint)*(ushort *)(local_260 + uVar25 * 2);
            uVar21 = (uint)*(ushort *)(local_260 + uVar26 * 2);
            uVar22 = (uint)*(ushort *)(local_260 + uVar24 * 2);
          }
          fVar56 = fVar61 * local_2c0 + fVar56;
          fVar64 = fVar64 + fVar62 * local_2c0;
          fVar70 = fVar70 + fVar63 * local_2c0;
          fVar61 = fVar56 * local_138;
          fVar62 = fVar56 * fStack_134;
          fVar63 = fVar56 * fStack_130;
          fVar56 = fVar56 * fStack_12c;
          local_278 = fVar64 * local_128;
          fStack_274 = fVar64 * fStack_124;
          fStack_270 = fVar64 * fStack_120;
          fStack_26c = fVar64 * fStack_11c;
          fVar64 = fVar70 * local_118;
          fVar71 = fVar70 * fStack_114;
          fVar72 = fVar70 * fStack_110;
          fVar70 = fVar70 * fStack_10c;
          local_2b8._0_4_ = local_108 * 0.0;
          local_2b8._4_4_ = fStack_104 * 0.0;
          fStack_2b0 = fStack_100 * 0.0;
          fStack_2ac = fStack_fc * 0.0;
          lVar11 = local_150[0x1e];
          uVar23 = (ulonglong)uVar22;
          uVar18 = (ulonglong)uVar21;
          auVar48._8_8_ = in_XMM4._8_8_;
          if (*(char *)((longlong)local_150 + 0x111) == '\x01') {
            auVar30 = pmovsxwd(_local_2b8,*(undefined8 *)(lVar11 + uVar23 * 0x10));
            auVar33._0_4_ = (float)auVar30._0_4_ * 3.051851e-05;
            auVar33._4_4_ = (float)auVar30._4_4_ * 3.051851e-05;
            auVar33._8_4_ = (float)auVar30._8_4_ * 3.051851e-05;
            auVar33._12_4_ = (float)auVar30._12_4_ * 0.0;
            auVar34._8_8_ = auVar33._8_8_;
            auVar34._0_8_ = auVar34._8_8_;
            auVar30 = pmovsxwd(auVar34,*(undefined8 *)(lVar11 + 8 + uVar23 * 0x10));
            fVar57 = 3.051851e-05;
            fVar58 = 3.051851e-05;
            fVar59 = 3.051851e-05;
            fVar60 = 3.051851e-05;
            dVar28 = (double)((float)auVar30._0_4_ * 3.051851e-05);
            dVar38 = (double)((float)auVar30._12_4_ * 3.051851e-05);
            dVar41 = (double)((float)auVar30._8_4_ * 3.051851e-05);
            dVar37 = (double)((float)auVar30._4_4_ * 3.051851e-05);
            auVar48._0_8_ = (double)auVar33._0_4_ * dVar37;
            dVar51 = (double)auVar33._8_4_ * dVar28;
            auVar43._0_8_ = (double)auVar33._4_4_ * dVar41;
            auVar43._8_8_ = 0;
            dVar28 = (dVar28 * (double)auVar33._4_4_ - auVar48._0_8_) * dVar38;
            dVar41 = (dVar41 * (double)auVar33._0_4_ - dVar51) * dVar38;
            dVar38 = (dVar37 * (double)auVar33._8_4_ - auVar43._0_8_) * dVar38;
            auVar30 = pmovsxwd(auVar43,*(undefined8 *)(lVar11 + uVar18 * 0x10));
            fVar65 = (float)auVar30._0_4_ * 3.051851e-05;
            fVar67 = (float)auVar30._4_4_ * 3.051851e-05;
            fVar68 = (float)auVar30._8_4_ * 3.051851e-05;
            fVar69 = (float)auVar30._12_4_ * 0.0;
            auVar12._4_8_ = auVar30._8_8_;
            auVar12._0_4_ = fVar67;
            auVar44._0_8_ = auVar12._0_8_ << 0x20;
            auVar44._8_4_ = fVar68;
            auVar44._12_4_ = fVar69;
            local_298 = auVar44._8_8_;
            uStack_290 = CONCAT44(fVar69,fVar68);
            auVar30 = pmovsxwd(auVar48,*(undefined8 *)(lVar11 + 8 + uVar18 * 0x10));
          }
          else {
            auVar30 = pmovsxbd(_local_2b8,*(undefined4 *)(lVar11 + uVar23 * 8));
            auVar35._0_4_ = (float)auVar30._0_4_ * 0.007874016;
            auVar35._4_4_ = (float)auVar30._4_4_ * 0.007874016;
            auVar35._8_4_ = (float)auVar30._8_4_ * 0.007874016;
            auVar35._12_4_ = (float)auVar30._12_4_ * 0.0;
            auVar36._8_8_ = auVar35._8_8_;
            auVar36._0_8_ = auVar36._8_8_;
            auVar30 = pmovsxbd(auVar36,*(undefined4 *)(lVar11 + 4 + uVar23 * 8));
            fVar57 = 0.007874016;
            fVar58 = 0.007874016;
            fVar59 = 0.007874016;
            fVar60 = 0.007874016;
            dVar28 = (double)((float)auVar30._0_4_ * 0.007874016);
            dVar38 = (double)((float)auVar30._12_4_ * 0.007874016);
            dVar41 = (double)((float)auVar30._8_4_ * 0.007874016);
            dVar37 = (double)((float)auVar30._4_4_ * 0.007874016);
            auVar49._0_8_ = (double)auVar35._0_4_ * dVar37;
            auVar49._8_8_ = auVar48._8_8_;
            dVar51 = (double)auVar35._8_4_ * dVar28;
            auVar45._0_8_ = (double)auVar35._4_4_ * dVar41;
            auVar45._8_8_ = 0;
            dVar28 = (dVar28 * (double)auVar35._4_4_ - auVar49._0_8_) * dVar38;
            dVar41 = (dVar41 * (double)auVar35._0_4_ - dVar51) * dVar38;
            dVar38 = (dVar37 * (double)auVar35._8_4_ - auVar45._0_8_) * dVar38;
            auVar30 = pmovsxbd(auVar45,*(undefined4 *)(lVar11 + uVar18 * 8));
            fVar65 = (float)auVar30._0_4_ * 0.007874016;
            fVar67 = (float)auVar30._4_4_ * 0.007874016;
            fVar68 = (float)auVar30._8_4_ * 0.007874016;
            fVar69 = (float)auVar30._12_4_ * 0.0;
            auVar13._4_8_ = auVar30._8_8_;
            auVar13._0_4_ = fVar67;
            auVar46._0_8_ = auVar13._0_8_ << 0x20;
            auVar46._8_4_ = fVar68;
            auVar46._12_4_ = fVar69;
            local_298 = auVar46._8_8_;
            uStack_290 = CONCAT44(fVar69,fVar68);
            auVar30 = pmovsxbd(auVar49,*(undefined4 *)(lVar11 + 4 + uVar18 * 8));
          }
          auVar52._0_8_ = dVar51;
          fVar57 = (float)auVar30._0_4_ * fVar57;
          fVar58 = (float)auVar30._4_4_ * fVar58;
          fVar59 = (float)auVar30._8_4_ * fVar59;
          fVar60 = (float)auVar30._12_4_ * fVar60;
          uVar18 = (ulonglong)uVar16;
          if (*(char *)((longlong)local_150 + 0x111) == '\0') {
            auVar30 = pmovsxbd(auVar30,*(undefined4 *)(lVar11 + uVar18 * 8));
            iVar50 = auVar30._12_4_;
            fVar73 = (float)auVar30._0_4_ * 0.007874016;
            fStack_2a4 = (float)auVar30._4_4_ * 0.007874016;
            fVar68 = (float)auVar30._8_4_ * 0.007874016;
            auVar52 = pmovsxbd(auVar52,*(undefined4 *)(lVar11 + 4 + uVar18 * 8));
            fVar69 = (float)auVar52._0_4_ * 0.007874016;
            fVar53 = (float)auVar52._4_4_ * 0.007874016;
            fVar54 = (float)auVar52._8_4_ * 0.007874016;
            fVar55 = (float)auVar52._12_4_ * 0.007874016;
          }
          else {
            auVar30 = pmovsxwd(auVar30,*(undefined8 *)(lVar11 + uVar18 * 0x10));
            iVar50 = auVar30._12_4_;
            fVar73 = (float)auVar30._0_4_ * 3.051851e-05;
            fStack_2a4 = (float)auVar30._4_4_ * 3.051851e-05;
            fVar68 = (float)auVar30._8_4_ * 3.051851e-05;
            auVar52 = pmovsxwd(auVar52,*(undefined8 *)(lVar11 + 8 + uVar18 * 0x10));
            fVar69 = (float)auVar52._0_4_ * 3.051851e-05;
            fVar53 = (float)auVar52._4_4_ * 3.051851e-05;
            fVar54 = (float)auVar52._8_4_ * 3.051851e-05;
            fVar55 = (float)auVar52._12_4_ * 3.051851e-05;
          }
          fStack_29c = (float)iVar50 * 0.0;
          auVar52 = ZEXT416((uint)local_2c0);
          fVar66 = (fVar53 * fVar68 - fVar54 * fStack_2a4) * fVar55 * local_2c0 +
                   (fVar58 * (float)local_298 - fVar59 * fVar67) * fVar60 * (float)local_288._0_4_ +
                   (float)dVar38 * local_2bc;
          fVar59 = (fVar54 * fVar73 - fVar69 * fVar68) * fVar55 * local_2c0 +
                   (fVar59 * fVar65 - fVar57 * (float)local_298) * fVar60 * (float)local_288._0_4_ +
                   (float)dVar41 * local_2bc;
          fVar57 = (fVar69 * fStack_2a4 - fVar73 * fVar53) * fVar55 * local_2c0 +
                   (fVar57 * fVar67 - fVar65 * fVar58) * fVar60 * (float)local_288._0_4_ +
                   (float)dVar28 * local_2bc;
          local_2a8 = fStack_2a4;
          fStack_2a0 = fStack_29c;
          FUN_144a928e2(&local_138,local_158 + 0x40);
          if (local_254 == '\x01') {
            uVar16 = *(uint *)(local_260 + uVar25 * 4);
            uVar21 = *(uint *)(local_260 + uVar26 * 4);
            uVar22 = *(uint *)(local_260 + uVar24 * 4);
          }
          else {
            uVar16 = (uint)*(ushort *)(local_260 + uVar25 * 2);
            uVar21 = (uint)*(ushort *)(local_260 + uVar26 * 2);
            uVar22 = (uint)*(ushort *)(local_260 + uVar24 * 2);
          }
          local_2b8._0_4_ = (float)local_2b8._0_4_ + fVar64 + fVar61 + local_278;
          fVar61 = (float)local_2b8._4_4_ + fVar71 + fVar62 + fStack_274;
          fVar62 = fStack_2b0 + fVar72 + fVar63 + fStack_270;
          fStack_2ac = fStack_2ac + fVar70 + fVar56 + fStack_26c;
          auVar39._4_4_ = fStack_2ac;
          auVar39._0_4_ = fVar62;
          auVar39._8_4_ = fVar62;
          auVar39._12_4_ = fStack_2ac;
          auVar40._4_12_ = auVar39._4_12_;
          auVar40._0_4_ =
               SQRT(fVar62 * fVar62 +
                    (float)local_2b8._0_4_ * (float)local_2b8._0_4_ + fVar61 * fVar61);
          fVar56 = 1.0 / auVar40._0_4_;
          lVar11 = local_150[0x1e];
          if (*(char *)((longlong)local_150 + 0x111) == '\x01') {
            auVar30 = pmovsxwd(auVar40,*(undefined8 *)(lVar11 + 8 + (ulonglong)uVar22 * 0x10));
            fVar63 = (float)auVar30._0_4_ * 3.051851e-05;
            fVar64 = (float)auVar30._4_4_ * 3.051851e-05;
            fVar70 = (float)auVar30._8_4_ * 3.051851e-05;
            auVar52 = pmovsxwd(auVar52,*(undefined8 *)(lVar11 + 8 + (ulonglong)uVar21 * 0x10));
            auVar47._0_4_ = (float)auVar52._0_4_ * 3.051851e-05;
            auVar47._4_4_ = (float)auVar52._4_4_ * 3.051851e-05;
            auVar47._8_4_ = (float)auVar52._8_4_ * 3.051851e-05;
          }
          else {
            auVar30 = pmovsxbd(auVar40,*(undefined4 *)(lVar11 + 4 + (ulonglong)uVar22 * 8));
            fVar63 = (float)auVar30._0_4_ * 0.007874016;
            fVar64 = (float)auVar30._4_4_ * 0.007874016;
            fVar70 = (float)auVar30._8_4_ * 0.007874016;
            auVar52 = pmovsxbd(auVar52,*(undefined4 *)(lVar11 + 4 + (ulonglong)uVar21 * 8));
            auVar47._0_4_ = (float)auVar52._0_4_ * 0.007874016;
            auVar47._4_4_ = (float)auVar52._4_4_ * 0.007874016;
            auVar47._8_4_ = (float)auVar52._8_4_ * 0.007874016;
          }
          local_2b8._4_4_ = fVar61;
          local_2b8._0_4_ = (float)local_2b8._0_4_ * fVar56;
          fStack_2b0 = fVar62;
          fVar71 = local_108 * 0.0 + fVar57 * local_118 + fVar66 * local_138 + fVar59 * local_128;
          fVar72 = fStack_104 * 0.0 +
                   fVar57 * fStack_114 + fVar66 * fStack_134 + fVar59 * fStack_124;
          fVar57 = fStack_100 * 0.0 +
                   fVar57 * fStack_110 + fVar66 * fStack_130 + fVar59 * fStack_120;
          fVar58 = 1.0 / SQRT(fVar57 * fVar57 + fVar71 * fVar71 + fVar72 * fVar72);
          if (*(char *)((longlong)local_150 + 0x111) == '\0') {
            auVar52 = pmovsxbd(ZEXT416((uint)local_2bc),
                               *(undefined4 *)(lVar11 + 4 + (ulonglong)uVar16 * 8));
            auVar29._0_4_ = (float)auVar52._0_4_ * 0.007874016;
            auVar29._4_4_ = (float)auVar52._4_4_ * 0.007874016;
            auVar29._8_4_ = (float)auVar52._8_4_ * 0.007874016;
          }
          else {
            auVar52 = pmovsxwd(ZEXT416((uint)local_2bc),
                               *(undefined8 *)(lVar11 + 8 + (ulonglong)uVar16 * 0x10));
            auVar29._0_4_ = (float)auVar52._0_4_ * 3.051851e-05;
            auVar29._4_4_ = (float)auVar52._4_4_ * 3.051851e-05;
            auVar29._8_4_ = (float)auVar52._8_4_ * 3.051851e-05;
          }
          fVar59 = (float)local_288._0_4_ * auVar47._0_4_ + fVar63 * local_2bc +
                   local_2c0 * auVar29._0_4_;
          fVar60 = auVar47._4_4_ * (float)local_288._0_4_ + fVar64 * local_2bc +
                   auVar29._4_4_ * local_2c0;
          fVar70 = auVar47._8_4_ * (float)local_288._0_4_ + fVar70 * local_2bc +
                   auVar29._8_4_ * local_2c0;
          FUN_144a928e2(&local_138,local_158 + 0x40);
          fVar63 = local_108 * 0.0 + fVar70 * local_118 + fVar60 * local_128 + fVar59 * local_138;
          fVar64 = fStack_104 * 0.0 +
                   fVar70 * fStack_114 + fVar60 * fStack_124 + fVar59 * fStack_134;
          fVar70 = fStack_100 * 0.0 +
                   fVar70 * fStack_110 + fVar60 * fStack_120 + fVar59 * fStack_130;
          fVar59 = SQRT(fVar70 * fVar70 + fVar63 * fVar63 + fVar64 * fVar64);
          in_XMM3 = ZEXT416((uint)fVar59);
          fVar59 = 1.0 / fVar59;
          in_XMM4 = ZEXT416((uint)(fVar59 * fVar63));
          pfVar1 = local_250 + local_248;
          *local_250 = fVar59 * fVar63;
          pfVar2 = local_240 + local_238;
          *local_240 = fVar64 * fVar59;
          pfVar3 = local_230 + local_228;
          *local_230 = fVar70 * fVar59;
          pfVar4 = local_220 + local_218;
          *local_220 = fVar58 * fVar71;
          pfVar5 = local_210 + local_208;
          *local_210 = fVar72 * fVar58;
          pfVar6 = local_200 + local_1f8;
          *local_200 = fVar57 * fVar58;
          pfVar7 = local_1f0 + local_1e8;
          *local_1f0 = (float)local_2b8._0_4_;
          pfVar8 = local_1e0 + local_1d8;
          *local_1e0 = fVar61 * fVar56;
          pfVar9 = local_1d0 + local_1c8;
          *local_1d0 = fVar62 * fVar56;
          iVar27 = iVar27 + 1;
          piVar19 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar19 = (int *)(param_1 + 0x3c);
          }
          local_250 = pfVar1;
          local_240 = pfVar2;
          local_230 = pfVar3;
          local_220 = pfVar4;
          local_210 = pfVar5;
          local_200 = pfVar6;
          local_1f0 = pfVar7;
          local_1e0 = pfVar8;
          local_1d0 = pfVar9;
        } while (iVar27 < *piVar19);
      }
      goto LAB_1480ca9e2;
    }
  }
  FUN_144a928e2(&local_138,local_158 + 0xc0);
  fVar65 = local_128 * 0.0 + local_138;
  fVar67 = fStack_124 * 0.0 + fStack_134;
  fVar68 = fStack_120 * 0.0 + fStack_130;
  fVar69 = local_118 * 0.0;
  fVar53 = fStack_114 * 0.0;
  fVar54 = fStack_110 * 0.0;
  fVar56 = local_108 * 0.0;
  fVar61 = fStack_104 * 0.0;
  fVar62 = fStack_100 * 0.0;
  FUN_144a928e2(&local_138,local_158 + 0xc0);
  fVar71 = local_138 * 0.0 + local_128;
  fVar72 = fStack_134 * 0.0 + fStack_124;
  fVar57 = fStack_130 * 0.0 + fStack_120;
  fVar58 = local_118 * 0.0;
  fVar59 = fStack_114 * 0.0;
  fVar60 = fStack_110 * 0.0;
  fVar63 = local_108 * 0.0;
  fVar64 = fStack_104 * 0.0;
  fVar70 = fStack_100 * 0.0;
  FUN_144a928e2(&local_138,local_158 + 0xc0);
  piVar19 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar19 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar19) {
    fVar56 = fVar56 + fVar69 + fVar65;
    fVar61 = fVar61 + fVar53 + fVar67;
    fVar62 = fVar62 + fVar54 + fVar68;
    fVar65 = 1.0 / SQRT(fVar62 * fVar62 + fVar56 * fVar56 + fVar61 * fVar61);
    fVar63 = fVar63 + fVar58 + fVar71;
    fVar64 = fVar64 + fVar59 + fVar72;
    fVar70 = fVar70 + fVar60 + fVar57;
    fVar59 = 1.0 / SQRT(fVar70 * fVar70 + fVar63 * fVar63 + fVar64 * fVar64);
    fVar72 = local_108 * 0.0 + local_128 * 0.0 + local_138 * 0.0 + local_118;
    fVar57 = fStack_104 * 0.0 + fStack_124 * 0.0 + fStack_134 * 0.0 + fStack_114;
    fVar58 = fStack_100 * 0.0 + fStack_120 * 0.0 + fStack_130 * 0.0 + fStack_110;
    fVar71 = 1.0 / SQRT(fVar58 * fVar58 + fVar72 * fVar72 + fVar57 * fVar57);
    iVar20 = 0;
    do {
      pfVar1 = local_250 + local_248;
      *local_250 = fVar71 * fVar72;
      pfVar2 = local_240 + local_238;
      *local_240 = fVar57 * fVar71;
      pfVar3 = local_230 + local_228;
      *local_230 = fVar58 * fVar71;
      pfVar4 = local_220 + local_218;
      *local_220 = fVar59 * fVar63;
      pfVar5 = local_210 + local_208;
      *local_210 = fVar64 * fVar59;
      pfVar6 = local_200 + local_1f8;
      *local_200 = fVar70 * fVar59;
      pfVar7 = local_1f0 + local_1e8;
      *local_1f0 = fVar65 * fVar56;
      pfVar8 = local_1e0 + local_1d8;
      *local_1e0 = fVar61 * fVar65;
      pfVar9 = local_1d0 + local_1c8;
      *local_1d0 = fVar62 * fVar65;
      iVar20 = iVar20 + 1;
      piVar19 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar19 = (int *)(param_1 + 0x3c);
      }
      local_250 = pfVar1;
      local_240 = pfVar2;
      local_230 = pfVar3;
      local_220 = pfVar4;
      local_210 = pfVar5;
      local_200 = pfVar6;
      local_1f0 = pfVar7;
      local_1e0 = pfVar8;
      local_1d0 = pfVar9;
    } while (iVar20 < *piVar19);
  }
LAB_1480ca9e2:
  if (local_150 != (undefined8 *)0x0) {
    LOCK();
    piVar19 = (int *)(local_150 + 1);
    *piVar19 = *piVar19 + -1;
    UNLOCK();
    if (*piVar19 == 0) {
      (**(code **)*local_150)(local_150,1);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480caa86 FUN_1480caa86 body=1465 status=ok
// SIG undefined FUN_1480caa86(void)

void FUN_1480caa86(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  float fVar21;
  undefined1 in_XMM2 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 in_XMM5 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auStack_1f8 [40];
  longlong local_1d0;
  undefined4 local_1c8;
  char local_1c4;
  float *local_1c0;
  int local_1b8;
  float *local_1b0;
  int local_1a8;
  float *local_1a0;
  int local_198;
  float *local_190 [2];
  int local_180;
  float *local_178;
  int local_168;
  float *local_160;
  int local_150;
  int *local_148;
  undefined8 uStack_140;
  int local_138;
  undefined1 local_130 [8];
  longlong local_128;
  undefined8 *local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [8];
  int local_100;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_1405c93a6(local_130,param_1);
  local_120 = (undefined8 *)0x0;
  puVar13 = (undefined8 *)FUN_1405c943a(local_128,local_118);
  puVar9 = local_120;
  puVar7 = local_120;
  if (local_120 != puVar13) {
    if (puVar13 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
      UNLOCK();
    }
    puVar7 = puVar13;
    if (local_120 != (undefined8 *)0x0) {
      LOCK();
      piVar15 = (int *)(local_120 + 1);
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (*piVar15 == 0) {
        puVar7 = (undefined8 *)*local_120;
        local_120 = puVar13;
        (*(code *)*puVar7)(puVar9,1);
        puVar7 = local_120;
      }
    }
  }
  local_120 = puVar7;
  local_148 = (int *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  FUN_144a98d08(&local_148,param_1);
  FUN_1448a432c(local_190,param_1);
  FUN_144a76c20(&local_1c0,param_1);
  FUN_144a76c20(&local_1b0,param_1);
  FUN_144a76c20(&local_1a0,param_1);
  if (local_120 == (undefined8 *)0x0) {
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c4 = '\0';
  }
  else {
    FUN_1461c3a4c(local_120 + 0x33,&local_1d0);
    if ((((((local_120 != (undefined8 *)0x0) &&
           (FUN_1461c3a4c(local_120 + 0x33,local_108), puVar9 = local_120, 2 < local_100)) &&
          (local_120 != (undefined8 *)0x0)) &&
         ((local_120[0x1e] != 0 && ((longlong *)local_120[0x1a] != (longlong *)0x0)))) &&
        ((local_120[0x1c] != 0 &&
         ((cVar10 = (**(code **)(*(longlong *)local_120[0x1a] + 0x58))(), cVar10 != '\0' &&
          (cVar10 = (**(code **)(*(longlong *)puVar9[0x1c] + 0x58))(), cVar10 != '\0')))))) &&
       (0 < *(int *)((longlong)local_120 + 0x10c))) {
      piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar15 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar15) {
        iVar16 = local_100 / 3 + -1;
        iVar20 = 0;
        do {
          iVar11 = *local_148;
          if (iVar16 <= *local_148) {
            iVar11 = iVar16;
          }
          if (iVar11 < 1) {
            iVar11 = 0;
          }
          fVar4 = *local_160;
          fVar5 = *local_178;
          uVar14 = (ulonglong)(iVar11 * 3 + 2);
          uVar19 = (ulonglong)(uint)(iVar11 * 3);
          if (local_1c4 == '\x01') {
            uVar12 = *(uint *)(local_1d0 + uVar14 * 4);
            uVar18 = *(uint *)(local_1d0 + uVar19 * 4);
            uVar17 = *(uint *)(local_1d0 + 4 + uVar19 * 4);
          }
          else {
            uVar12 = (uint)*(ushort *)(local_1d0 + uVar14 * 2);
            uVar17 = (uint)*(ushort *)(local_1d0 + 2 + uVar19 * 2);
            uVar18 = (uint)*(ushort *)(local_1d0 + uVar19 * 2);
          }
          fVar6 = *local_190[0];
          lVar8 = local_120[0x1e];
          if (*(char *)((longlong)local_120 + 0x111) == '\x01') {
            auVar22 = pmovsxwd(in_XMM2,*(undefined8 *)(lVar8 + 8 + (ulonglong)uVar18 * 0x10));
            auVar23._0_4_ = (float)auVar22._0_4_ * 3.051851e-05;
            auVar23._4_4_ = (float)auVar22._4_4_ * 3.051851e-05;
            auVar23._8_4_ = (float)auVar22._8_4_ * 3.051851e-05;
            auVar23._12_4_ = (float)auVar22._12_4_ * 0.0;
            auVar22 = pmovsxwd(in_XMM5,*(undefined8 *)(lVar8 + 8 + (ulonglong)uVar17 * 0x10));
            in_XMM5._0_4_ = (float)auVar22._0_4_ * 3.051851e-05;
            in_XMM5._4_4_ = (float)auVar22._4_4_ * 3.051851e-05;
            in_XMM5._8_4_ = (float)auVar22._8_4_ * 3.051851e-05;
            in_XMM5._12_4_ = (float)auVar22._12_4_ * 3.051851e-05;
            fVar25 = auVar23._4_4_;
            fVar24 = auVar23._8_4_;
          }
          else {
            auVar22 = pmovsxbd(in_XMM2,*(undefined4 *)(lVar8 + 4 + (ulonglong)uVar18 * 8));
            auVar23._0_4_ = (float)auVar22._0_4_ * 0.007874016;
            auVar23._4_4_ = (float)auVar22._4_4_ * 0.007874016;
            auVar23._8_4_ = (float)auVar22._8_4_ * 0.007874016;
            auVar23._12_4_ = (float)auVar22._12_4_ * 0.0;
            auVar22 = pmovsxbd(in_XMM5,*(undefined4 *)(lVar8 + 4 + (ulonglong)uVar17 * 8));
            in_XMM5._0_4_ = (float)auVar22._0_4_ * 0.007874016;
            in_XMM5._4_4_ = (float)auVar22._4_4_ * 0.007874016;
            in_XMM5._8_4_ = (float)auVar22._8_4_ * 0.007874016;
            in_XMM5._12_4_ = (float)auVar22._12_4_ * 0.007874016;
            fVar25 = auVar23._4_4_;
            fVar24 = auVar23._8_4_;
          }
          if (*(char *)((longlong)local_120 + 0x111) == '\0') {
            auVar22 = pmovsxbd(unaff_XMM11,*(undefined4 *)(lVar8 + 4 + (ulonglong)uVar12 * 8));
            unaff_XMM11._0_4_ = (float)auVar22._0_4_ * 0.007874016;
            unaff_XMM11._4_4_ = (float)auVar22._4_4_ * 0.007874016;
            unaff_XMM11._8_4_ = (float)auVar22._8_4_ * 0.007874016;
            unaff_XMM11._12_4_ = (float)auVar22._12_4_ * 0.007874016;
          }
          else {
            auVar22 = pmovsxwd(unaff_XMM11,*(undefined8 *)(lVar8 + 8 + (ulonglong)uVar12 * 0x10));
            unaff_XMM11._0_4_ = (float)auVar22._0_4_ * 3.051851e-05;
            unaff_XMM11._4_4_ = (float)auVar22._4_4_ * 3.051851e-05;
            unaff_XMM11._8_4_ = (float)auVar22._8_4_ * 3.051851e-05;
            unaff_XMM11._12_4_ = (float)auVar22._12_4_ * 3.051851e-05;
          }
          in_XMM2._4_12_ = auVar23._4_12_;
          in_XMM2._0_4_ = auVar23._0_4_ * fVar6;
          fVar27 = in_XMM5._8_4_;
          fVar26 = in_XMM5._4_4_;
          fVar21 = fVar5 * in_XMM5._0_4_ + in_XMM2._0_4_;
          local_190[0] = local_190[0] + local_180;
          local_178 = local_178 + local_168;
          local_160 = local_160 + local_150;
          local_148 = local_148 + local_138;
          FUN_144a928e2(local_108,local_128 + 0x40);
          pfVar1 = local_1c0 + local_1b8;
          *local_1c0 = fVar4 * unaff_XMM11._0_4_ + fVar21;
          pfVar2 = local_1b0 + local_1a8;
          *local_1b0 = unaff_XMM11._4_4_ * fVar4 + fVar26 * fVar5 + fVar25 * fVar6;
          pfVar3 = local_1a0 + local_198;
          *local_1a0 = unaff_XMM11._8_4_ * fVar4 + fVar27 * fVar5 + fVar24 * fVar6;
          iVar20 = iVar20 + 1;
          piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar15 = (int *)(param_1 + 0x3c);
          }
          local_1c0 = pfVar1;
          local_1b0 = pfVar2;
          local_1a0 = pfVar3;
        } while (iVar20 < *piVar15);
      }
      goto LAB_1480cafb3;
    }
  }
  FUN_144a928e2(local_108);
  piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar15 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar15) {
    iVar16 = 0;
    do {
      pfVar1 = local_1c0 + local_1b8;
      *local_1c0 = 0.0;
      pfVar2 = local_1b0 + local_1a8;
      *local_1b0 = 0.0;
      pfVar3 = local_1a0 + local_198;
      *local_1a0 = 1.0;
      iVar16 = iVar16 + 1;
      piVar15 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar15 = (int *)(param_1 + 0x3c);
      }
      local_1c0 = pfVar1;
      local_1b0 = pfVar2;
      local_1a0 = pfVar3;
    } while (iVar16 < *piVar15);
  }
LAB_1480cafb3:
  if (local_120 != (undefined8 *)0x0) {
    LOCK();
    piVar15 = (int *)(local_120 + 1);
    *piVar15 = *piVar15 + -1;
    UNLOCK();
    if (*piVar15 == 0) {
      (**(code **)*local_120)(local_120,1);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480cb040 FUN_1480cb040 body=1759 status=ok
// SIG undefined FUN_1480cb040(void)

void FUN_1480cb040(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auVar6 [12];
  undefined8 *puVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar25;
  float fVar26;
  undefined1 in_XMM2 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM5 [16];
  float fVar27;
  undefined1 unaff_XMM13 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_218 [40];
  longlong local_1f0;
  undefined4 local_1e8;
  char local_1e4;
  float *local_1e0;
  int local_1d8;
  float *local_1d0;
  int local_1c8;
  float *local_1c0;
  int local_1b8;
  float *local_1b0 [2];
  int local_1a0;
  float *local_198;
  int local_188;
  float *local_180;
  int local_170;
  int *local_168;
  undefined8 uStack_160;
  int local_158;
  undefined1 local_150 [8];
  longlong local_148;
  undefined8 *local_140;
  undefined1 local_138 [16];
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1405c93a6(local_150,param_1);
  local_140 = (undefined8 *)0x0;
  puVar11 = (undefined8 *)FUN_1405c943a(local_148,local_138);
  puVar7 = local_140;
  puVar4 = local_140;
  if (local_140 != puVar11) {
    if (puVar11 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
      UNLOCK();
    }
    puVar4 = puVar11;
    if (local_140 != (undefined8 *)0x0) {
      LOCK();
      piVar13 = (int *)(local_140 + 1);
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (*piVar13 == 0) {
        puVar4 = (undefined8 *)*local_140;
        local_140 = puVar11;
        (*(code *)*puVar4)(puVar7,1);
        puVar4 = local_140;
      }
    }
  }
  local_140 = puVar4;
  local_168 = (int *)0x0;
  uStack_160 = 0;
  local_158 = 0;
  FUN_144a98d08(&local_168,param_1);
  FUN_1448a432c(local_1b0,param_1);
  FUN_144a76c20(&local_1e0,param_1);
  FUN_144a76c20(&local_1d0,param_1);
  FUN_144a76c20(&local_1c0,param_1);
  if (local_140 == (undefined8 *)0x0) {
    local_1f0 = 0;
    local_1e8 = 0;
    local_1e4 = '\0';
  }
  else {
    FUN_1461c3a4c(local_140 + 0x33,&local_1f0);
    if ((((((local_140 != (undefined8 *)0x0) &&
           (FUN_1461c3a4c(local_140 + 0x33,&local_128), fVar27 = fStack_120, puVar7 = local_140,
           2 < (int)fStack_120)) && (local_140 != (undefined8 *)0x0)) &&
         ((local_140[0x1e] != 0 && ((longlong *)local_140[0x1a] != (longlong *)0x0)))) &&
        ((local_140[0x1c] != 0 &&
         ((cVar8 = (**(code **)(*(longlong *)local_140[0x1a] + 0x58))(), cVar8 != '\0' &&
          (cVar8 = (**(code **)(*(longlong *)puVar7[0x1c] + 0x58))(), cVar8 != '\0')))))) &&
       (0 < *(int *)((longlong)local_140 + 0x10c))) {
      piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar13 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar13) {
        iVar14 = (int)fVar27 / 3 + -1;
        iVar18 = 0;
        do {
          iVar9 = *local_168;
          if (iVar14 <= *local_168) {
            iVar9 = iVar14;
          }
          if (iVar9 < 1) {
            iVar9 = 0;
          }
          fVar27 = *local_180;
          fVar19 = *local_198;
          uVar12 = (ulonglong)(iVar9 * 3 + 2);
          uVar17 = (ulonglong)(uint)(iVar9 * 3);
          if (local_1e4 == '\x01') {
            uVar10 = *(uint *)(local_1f0 + uVar12 * 4);
            uVar16 = *(uint *)(local_1f0 + uVar17 * 4);
            uVar15 = *(uint *)(local_1f0 + 4 + uVar17 * 4);
          }
          else {
            uVar10 = (uint)*(ushort *)(local_1f0 + uVar12 * 2);
            uVar15 = (uint)*(ushort *)(local_1f0 + 2 + uVar17 * 2);
            uVar16 = (uint)*(ushort *)(local_1f0 + uVar17 * 2);
          }
          fVar20 = *local_1b0[0];
          lVar5 = local_140[0x1e];
          if (*(char *)((longlong)local_140 + 0x111) == '\x01') {
            auVar22 = pmovsxwd(in_XMM2,*(undefined8 *)(lVar5 + 8 + (ulonglong)uVar16 * 0x10));
            fVar21 = (float)auVar22._0_4_ * 3.051851e-05;
            fVar25 = (float)auVar22._4_4_ * 3.051851e-05;
            fVar26 = (float)auVar22._8_4_ * 3.051851e-05;
            auVar22 = pmovsxwd(in_XMM5,*(undefined8 *)(lVar5 + 8 + (ulonglong)uVar15 * 0x10));
            in_XMM5._0_4_ = (float)auVar22._0_4_ * 3.051851e-05;
            in_XMM5._4_4_ = (float)auVar22._4_4_ * 3.051851e-05;
            in_XMM5._8_4_ = (float)auVar22._8_4_ * 3.051851e-05;
            in_XMM5._12_4_ = (float)auVar22._12_4_ * 3.051851e-05;
          }
          else {
            auVar22 = pmovsxbd(in_XMM2,*(undefined4 *)(lVar5 + 4 + (ulonglong)uVar16 * 8));
            fVar21 = (float)auVar22._0_4_ * 0.007874016;
            fVar25 = (float)auVar22._4_4_ * 0.007874016;
            fVar26 = (float)auVar22._8_4_ * 0.007874016;
            auVar22 = pmovsxbd(in_XMM5,*(undefined4 *)(lVar5 + 4 + (ulonglong)uVar15 * 8));
            in_XMM5._0_4_ = (float)auVar22._0_4_ * 0.007874016;
            in_XMM5._4_4_ = (float)auVar22._4_4_ * 0.007874016;
            in_XMM5._8_4_ = (float)auVar22._8_4_ * 0.007874016;
            in_XMM5._12_4_ = (float)auVar22._12_4_ * 0.007874016;
          }
          if (*(char *)((longlong)local_140 + 0x111) == '\0') {
            auVar22 = pmovsxbd(unaff_XMM13,*(undefined4 *)(lVar5 + 4 + (ulonglong)uVar10 * 8));
            fVar28 = (float)auVar22._0_4_ * 0.007874016;
            fVar29 = (float)auVar22._4_4_ * 0.007874016;
            fVar30 = (float)auVar22._8_4_ * 0.007874016;
          }
          else {
            auVar22 = pmovsxwd(unaff_XMM13,*(undefined8 *)(lVar5 + 8 + (ulonglong)uVar10 * 0x10));
            fVar28 = (float)auVar22._0_4_ * 3.051851e-05;
            fVar29 = (float)auVar22._4_4_ * 3.051851e-05;
            fVar30 = (float)auVar22._8_4_ * 3.051851e-05;
          }
          fVar21 = fVar27 * fVar28 + fVar19 * in_XMM5._0_4_ + fVar21 * fVar20;
          fVar25 = fVar29 * fVar27 + in_XMM5._4_4_ * fVar19 + fVar25 * fVar20;
          fVar27 = fVar30 * fVar27 + in_XMM5._8_4_ * fVar19 + fVar26 * fVar20;
          local_1b0[0] = local_1b0[0] + local_1a0;
          local_198 = local_198 + local_188;
          local_180 = local_180 + local_170;
          local_168 = local_168 + local_158;
          FUN_144a928e2(&local_128,local_148 + 0x40);
          unaff_XMM13._0_4_ = fVar27 * local_108 + fVar25 * local_118 + fVar21 * local_128;
          unaff_XMM13._4_4_ = fVar27 * fStack_104 + fVar25 * fStack_114 + fVar21 * fStack_124;
          unaff_XMM13._8_4_ = fVar27 * fStack_100 + fVar25 * fStack_110 + fVar21 * fStack_120;
          unaff_XMM13._12_4_ = fVar27 * fStack_fc + fVar25 * fStack_10c + fVar21 * fStack_11c;
          fVar27 = local_f8 * 0.0 + unaff_XMM13._0_4_;
          fVar19 = fStack_f4 * 0.0 + unaff_XMM13._4_4_;
          fVar20 = fStack_f0 * 0.0 + unaff_XMM13._8_4_;
          fVar21 = fStack_ec * 0.0 + unaff_XMM13._12_4_;
          auVar22._4_4_ = fVar19;
          auVar22._0_4_ = fVar19;
          auVar22._8_4_ = fVar21;
          auVar22._12_4_ = fVar21;
          auVar6._4_8_ = auVar22._8_8_;
          auVar6._0_4_ = fVar19;
          auVar23._0_8_ = auVar6._0_8_ << 0x20;
          auVar23._8_4_ = fVar20;
          auVar23._12_4_ = fVar21;
          auVar24._12_4_ = fVar21;
          auVar24._8_4_ = fVar20;
          auVar24._0_8_ = auVar23._8_8_;
          fVar21 = 1.0 / SQRT(fVar20 * fVar20 + fVar27 * fVar27 + fVar19 * fVar19);
          in_XMM2._4_12_ = auVar24._4_12_;
          in_XMM2._0_4_ = fVar20 * fVar21;
          pfVar1 = local_1e0 + local_1d8;
          *local_1e0 = fVar21 * fVar27;
          pfVar2 = local_1d0 + local_1c8;
          *local_1d0 = fVar19 * fVar21;
          pfVar3 = local_1c0 + local_1b8;
          *local_1c0 = in_XMM2._0_4_;
          iVar18 = iVar18 + 1;
          piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar13 = (int *)(param_1 + 0x3c);
          }
          local_1e0 = pfVar1;
          local_1d0 = pfVar2;
          local_1c0 = pfVar3;
        } while (iVar18 < *piVar13);
      }
      goto LAB_1480cb681;
    }
  }
  FUN_144a928e2(&local_128,local_148 + 0xc0);
  piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar13 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar13) {
    fVar19 = local_f8 * 0.0 + local_118 * 0.0 + local_128 * 0.0 + local_108;
    fVar20 = fStack_f4 * 0.0 + fStack_114 * 0.0 + fStack_124 * 0.0 + fStack_104;
    fVar21 = fStack_f0 * 0.0 + fStack_110 * 0.0 + fStack_120 * 0.0 + fStack_100;
    fVar27 = 1.0 / SQRT(fVar21 * fVar21 + fVar19 * fVar19 + fVar20 * fVar20);
    iVar14 = 0;
    do {
      pfVar1 = local_1e0 + local_1d8;
      *local_1e0 = fVar27 * fVar19;
      pfVar2 = local_1d0 + local_1c8;
      *local_1d0 = fVar20 * fVar27;
      pfVar3 = local_1c0 + local_1b8;
      *local_1c0 = fVar21 * fVar27;
      iVar14 = iVar14 + 1;
      piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar13 = (int *)(param_1 + 0x3c);
      }
      local_1e0 = pfVar1;
      local_1d0 = pfVar2;
      local_1c0 = pfVar3;
    } while (iVar14 < *piVar13);
  }
LAB_1480cb681:
  if (local_140 != (undefined8 *)0x0) {
    LOCK();
    piVar13 = (int *)(local_140 + 1);
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (*piVar13 == 0) {
      (**(code **)*local_140)(local_140,1);
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480cb720 FUN_1480cb720 body=1785 status=ok
// SIG undefined FUN_1480cb720(void)

void FUN_1480cb720(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 *puVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  int *piVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_1f8 [40];
  longlong local_1d0;
  undefined4 local_1c8;
  char local_1c4;
  float *local_1c0;
  int local_1b8;
  float *local_1b0;
  int local_1a8;
  float *local_1a0;
  int local_198;
  float *local_190;
  int local_188;
  float *local_180;
  int local_178;
  float *local_170;
  int local_168;
  float *local_160 [2];
  int local_150;
  float *local_148;
  int local_138;
  float *local_130;
  int local_120;
  int *local_118;
  undefined8 uStack_110;
  int local_108;
  undefined1 local_100 [8];
  longlong local_f8;
  undefined8 *local_f0;
  undefined1 local_e8 [16];
  float local_d8;
  float fStack_d4;
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
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_1405c93a6(local_100,param_1);
  local_f0 = (undefined8 *)0x0;
  puVar16 = (undefined8 *)FUN_1405c943a(local_f8,local_e8);
  puVar12 = local_f0;
  puVar7 = local_f0;
  if (local_f0 != puVar16) {
    if (puVar16 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
    }
    puVar7 = puVar16;
    if (local_f0 != (undefined8 *)0x0) {
      LOCK();
      piVar18 = (int *)(local_f0 + 1);
      *piVar18 = *piVar18 + -1;
      UNLOCK();
      if (*piVar18 == 0) {
        puVar7 = (undefined8 *)*local_f0;
        local_f0 = puVar16;
        (*(code *)*puVar7)(puVar12,1);
        puVar7 = local_f0;
      }
    }
  }
  local_f0 = puVar7;
  local_118 = (int *)0x0;
  uStack_110 = 0;
  local_108 = 0;
  FUN_144a98d08(&local_118,param_1);
  FUN_1448a432c(local_160,param_1);
  FUN_144a76c20(&local_190,param_1);
  FUN_144a76c20(&local_180,param_1);
  FUN_144a76c20(&local_170,param_1);
  FUN_144a76c20(&local_1c0,param_1);
  FUN_144a76c20(&local_1b0,param_1);
  FUN_144a76c20(&local_1a0,param_1);
  if (local_f0 == (undefined8 *)0x0) {
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c4 = '\0';
  }
  else {
    FUN_1461c3a4c(local_f0 + 0x33,&local_1d0);
    if ((((local_f0 != (undefined8 *)0x0) &&
         (FUN_1461c3a4c(local_f0 + 0x33,&local_d8), fVar25 = fStack_d0, 2 < (int)fStack_d0)) &&
        (local_f0 != (undefined8 *)0x0)) &&
       (((local_f0[0x28] != 0 && (cVar13 = FUN_1461c3a34(local_f0 + 0x23), cVar13 != '\0')) &&
        (0 < *(int *)((longlong)local_f0 + 0x14c))))) {
      piVar18 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar18 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar18) {
        iVar21 = (int)fVar25 / 3 + -1;
        iVar24 = 0;
        do {
          iVar14 = *local_118;
          if (iVar21 <= *local_118) {
            iVar14 = iVar21;
          }
          if (iVar14 < 1) {
            iVar14 = 0;
          }
          fVar25 = *local_130;
          fVar27 = *local_148;
          uVar17 = (ulonglong)(iVar14 * 3 + 2);
          uVar20 = (ulonglong)(uint)(iVar14 * 3);
          if (local_1c4 == '\x01') {
            uVar15 = *(uint *)(local_1d0 + uVar17 * 4);
            uVar22 = *(uint *)(local_1d0 + uVar20 * 4);
            uVar19 = *(uint *)(local_1d0 + 4 + uVar20 * 4);
          }
          else {
            uVar15 = (uint)*(ushort *)(local_1d0 + uVar17 * 2);
            uVar19 = (uint)*(ushort *)(local_1d0 + 2 + uVar20 * 2);
            uVar22 = (uint)*(ushort *)(local_1d0 + uVar20 * 2);
          }
          fVar28 = *local_160[0];
          lVar8 = local_f0[0x28];
          iVar14 = *(int *)(local_f0 + 0x29);
          uVar23 = (ulonglong)(uVar22 * iVar14);
          uVar20 = (ulonglong)(uVar19 * iVar14);
          uVar17 = (ulonglong)(uVar15 * iVar14);
          fVar26 = fVar25 * *(float *)(lVar8 + uVar17) +
                   fVar27 * *(float *)(lVar8 + uVar20) + fVar28 * *(float *)(lVar8 + uVar23);
          fVar32 = *(float *)(lVar8 + 4 + uVar17) * fVar25 +
                   *(float *)(lVar8 + 4 + uVar20) * fVar27 + *(float *)(lVar8 + 4 + uVar23) * fVar28
          ;
          fVar27 = *(float *)(lVar8 + 8 + uVar17) * fVar25 +
                   *(float *)(lVar8 + 8 + uVar20) * fVar27 + *(float *)(lVar8 + 8 + uVar23) * fVar28
          ;
          local_160[0] = local_160[0] + local_150;
          local_148 = local_148 + local_138;
          local_130 = local_130 + local_120;
          local_118 = local_118 + local_108;
          FUN_144a928e2(&local_d8,local_f8 + 0x40);
          fVar28 = local_b8 * fVar27 + local_c8 * fVar32 + local_d8 * fVar26 + local_a8;
          fVar29 = fStack_b4 * fVar27 + fStack_c4 * fVar32 + fStack_d4 * fVar26 + fStack_a4;
          fVar30 = fStack_b0 * fVar27 + fStack_c0 * fVar32 + fStack_d0 * fVar26 + fStack_a0;
          fVar31 = fStack_ac * fVar27 + fStack_bc * fVar32 + fStack_cc * fVar26 + fStack_9c;
          FUN_144a928e2(&local_d8,local_f8 + 0x140);
          fVar25 = (float)(-(uint)(0.0 < *(float *)(local_f8 + 0x2f0)) &
                          (uint)(1.0 / *(float *)(local_f8 + 0x2f0)));
          pfVar1 = local_190 + local_188;
          *local_190 = fVar28;
          pfVar2 = local_180 + local_178;
          auVar10._4_4_ = fVar29;
          auVar10._0_4_ = fVar28;
          auVar10._8_4_ = fVar30;
          auVar10._12_4_ = fVar31;
          uVar9 = extractps(auVar10,1);
          *(undefined8 *)local_180 = uVar9;
          pfVar3 = local_170 + local_168;
          auVar11._4_4_ = fVar29;
          auVar11._0_4_ = fVar28;
          auVar11._8_4_ = fVar30;
          auVar11._12_4_ = fVar31;
          uVar9 = extractps(auVar11,2);
          *(undefined8 *)local_170 = uVar9;
          pfVar4 = local_1c0 + local_1b8;
          *local_1c0 = fVar25 * (fVar28 - (fVar27 * local_b8 + fVar32 * local_c8 + fVar26 * local_d8
                                          + local_a8));
          pfVar5 = local_1b0 + local_1a8;
          *local_1b0 = (fVar29 - (fVar27 * fStack_b4 + fVar32 * fStack_c4 + fVar26 * fStack_d4 +
                                 fStack_a4)) * fVar25;
          pfVar6 = local_1a0 + local_198;
          *local_1a0 = (fVar30 - (fVar27 * fStack_b0 + fVar32 * fStack_c0 + fVar26 * fStack_d0 +
                                 fStack_a0)) * fVar25;
          iVar24 = iVar24 + 1;
          piVar18 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar18 = (int *)(param_1 + 0x3c);
          }
          local_1c0 = pfVar4;
          local_1b0 = pfVar5;
          local_1a0 = pfVar6;
          local_190 = pfVar1;
          local_180 = pfVar2;
          local_170 = pfVar3;
        } while (iVar24 < *piVar18);
      }
      goto LAB_1480cbda6;
    }
  }
  fVar29 = DAT_14c846338;
  fVar28 = DAT_14c846330._4_4_;
  fVar25 = (float)DAT_14c846330;
  FUN_144a928e2(&local_d8,local_f8 + 0x40);
  FUN_144a928e2(&local_d8,local_f8 + 0x140);
  fVar30 = DAT_14c846338;
  fVar26 = DAT_14c846330._4_4_;
  fVar27 = (float)DAT_14c846330;
  piVar18 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar18 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar18) {
    iVar21 = 0;
    do {
      pfVar1 = local_190 + local_188;
      *local_190 = fVar29 * local_b8 + fVar28 * local_c8 + fVar25 * local_d8 + local_a8;
      pfVar2 = local_180 + local_178;
      *local_180 = fVar29 * fStack_b4 + fVar28 * fStack_c4 + fVar25 * fStack_d4 + fStack_a4;
      pfVar3 = local_170 + local_168;
      *local_170 = fVar29 * fStack_b0 + fVar28 * fStack_c0 + fVar25 * fStack_d0 + fStack_a0;
      pfVar4 = local_1c0 + local_1b8;
      *local_1c0 = fVar27;
      pfVar5 = local_1b0 + local_1a8;
      *local_1b0 = fVar26;
      pfVar6 = local_1a0 + local_198;
      *local_1a0 = fVar30;
      iVar21 = iVar21 + 1;
      piVar18 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar18 = (int *)(param_1 + 0x3c);
      }
      local_1c0 = pfVar4;
      local_1b0 = pfVar5;
      local_1a0 = pfVar6;
      local_190 = pfVar1;
      local_180 = pfVar2;
      local_170 = pfVar3;
    } while (iVar21 < *piVar18);
  }
LAB_1480cbda6:
  if (local_f0 != (undefined8 *)0x0) {
    LOCK();
    piVar18 = (int *)(local_f0 + 1);
    *piVar18 = *piVar18 + -1;
    UNLOCK();
    if (*piVar18 == 0) {
      (**(code **)*local_f0)(local_f0,1);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480cbe1a FUN_1480cbe1a body=138 status=ok
// SIG undefined FUN_1480cbe1a(void)

code * FUN_1480cbe1a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UvMappingBufferLength";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x23800000062;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480cbea4;
}



// FUNCTION 1480cbea4 FUN_1480cbea4 body=138 status=ok
// SIG undefined FUN_1480cbea4(void)

code * FUN_1480cbea4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UvMappingBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x23000000061;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480cbf2e;
}



// FUNCTION 1480cbf2e FUN_1480cbf2e body=138 status=ok
// SIG undefined FUN_1480cbf2e(void)

code * FUN_1480cbf2e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SystemLWCTile";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2200000005f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14646ac54;
}



// FUNCTION 1480cbfb8 FUN_1480cbfb8 body=138 status=ok
// SIG undefined FUN_1480cbfb8(void)

code * FUN_1480cbfb8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MeshBoundsWSExtents";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000005d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456fa2da;
}



// FUNCTION 1480cc042 FUN_1480cc042 body=138 status=ok
// SIG undefined FUN_1480cc042(void)

code * FUN_1480cc042(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PreSkinnedLocalBoundsExtents";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1e00000005b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456fa3ee;
}



// FUNCTION 1480cc0cc FUN_1480cc0cc body=138 status=ok
// SIG undefined FUN_1480cc0cc(void)

code * FUN_1480cc0cc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceDistanceFieldIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1cc00000058;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480cc156;
}



// FUNCTION 1480cc156 FUN_1480cc156 body=138 status=ok
// SIG undefined FUN_1480cc156(void)

code * FUN_1480cc156(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceWorldVelocity";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c000000056;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480cc1e0;
}



// FUNCTION 1480cc1e0 FUN_1480cc1e0 body=138 status=ok
// SIG undefined FUN_1480cc1e0(void)

code * FUN_1480cc1e0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InstancePreviousRotation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b000000055;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480cc26a;
}



// FUNCTION 1480cc26a FUN_1480cc26a body=138 status=ok
// SIG undefined FUN_1480cc26a(void)

code * FUN_1480cc26a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InstancePreviousTransformInverseTransposed";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x17000000054;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480cc2f4;
}



// FUNCTION 1480cc2f4 FUN_1480cc2f4 body=138 status=ok
// SIG undefined FUN_1480cc2f4(void)

code * FUN_1480cc2f4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InstancePreviousTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13000000053;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480cc37e;
}



// FUNCTION 1480cc37e FUN_1480cc37e body=138 status=ok
// SIG undefined FUN_1480cc37e(void)

code * FUN_1480cc37e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceRotation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12000000052;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456fa364;
}



// FUNCTION 1480cc408 FUN_1480cc408 body=138 status=ok
// SIG undefined FUN_1480cc408(void)

code * FUN_1480cc408(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000050;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480cc492;
}



// FUNCTION 1480cc492 FUN_1480cc492 body=138 status=ok
// SIG undefined FUN_1480cc492(void)

code * FUN_1480cc492(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InvDeltaSeconds";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x900000004f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480cc51c;
}



// FUNCTION 1480cc51c FUN_1480cc51c body=138 status=ok
// SIG undefined FUN_1480cc51c(void)

code * FUN_1480cc51c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FilteredAndUnfilteredSockets";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x880000004d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480cc5a6;
}



// FUNCTION 1480cc5a6 FUN_1480cc5a6 body=138 status=ok
// SIG undefined FUN_1480cc5a6(void)

code * FUN_1480cc5a6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SocketTransforms";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000004c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480cc630;
}



// FUNCTION 1480cc630 FUN_1480cc630 body=138 status=ok
// SIG undefined FUN_1480cc630(void)

code * FUN_1480cc630(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SocketCounts";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000004b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480cc6ba;
}



// FUNCTION 1480cc6ba FUN_1480cc6ba body=138 status=ok
// SIG undefined FUN_1480cc6ba(void)

code * FUN_1480cc6ba(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FilteredAndUnfilteredSections";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6800000049;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480cc744;
}



// FUNCTION 1480cc744 FUN_1480cc744 body=138 status=ok
// SIG undefined FUN_1480cc744(void)

code * FUN_1480cc744(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SectionInfos";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000048;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480cc7ce;
}



// FUNCTION 1480cc7ce FUN_1480cc7ce body=138 status=ok
// SIG undefined FUN_1480cc7ce(void)

code * FUN_1480cc7ce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SectionCounts";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14646acdc;
}



// FUNCTION 1480cc858 FUN_1480cc858 body=138 status=ok
// SIG undefined FUN_1480cc858(void)

code * FUN_1480cc858(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HasUniformSampling";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000044;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480cc8e2;
}



// FUNCTION 1480cc8e2 FUN_1480cc8e2 body=138 status=ok
// SIG undefined FUN_1480cc8e2(void)

code * FUN_1480cc8e2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000042;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480cc96c;
}



// FUNCTION 1480cc96c FUN_1480cc96c body=138 status=ok
// SIG undefined FUN_1480cc96c(void)

code * FUN_1480cc96c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UVBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000041;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480cc9f6;
}



// FUNCTION 1480cc9f6 FUN_1480cc9f6 body=138 status=ok
// SIG undefined FUN_1480cc9f6(void)

code * FUN_1480cc9f6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TangentBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000040;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480cca80;
}



// FUNCTION 1480cca80 FUN_1480cca80 body=138 status=ok
// SIG undefined FUN_1480cca80(void)

code * FUN_1480cca80(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000003f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480ccb0a;
}



// FUNCTION 1480ccb0a FUN_1480ccb0a body=138 status=ok
// SIG undefined FUN_1480ccb0a(void)

code * FUN_1480ccb0a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IndexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000003e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480ccb94;
}



// FUNCTION 1480ccb94 FUN_1480ccb94 body=138 status=ok
// SIG undefined FUN_1480ccb94(void)

code * FUN_1480ccb94(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HasColors";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x140000003d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480ccc1e;
}



// FUNCTION 1480ccc1e FUN_1480ccc1e body=138 status=ok
// SIG undefined FUN_1480ccc1e(void)

code * FUN_1480ccc1e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumUVs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000003c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480ccca8;
}



// FUNCTION 1480ccca8 FUN_1480ccca8 body=138 status=ok
// SIG undefined FUN_1480ccca8(void)

code * FUN_1480ccca8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumVertices";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000003b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480ccd32;
}



// FUNCTION 1480ccd32 FUN_1480ccd32 body=132 status=ok
// SIG undefined FUN_1480ccd32(void)

undefined1 * FUN_1480ccd32(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumTriangles";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1480ccdb6;
}



// FUNCTION 1480ccdba FUN_1480ccdba body=136 status=ok
// SIG undefined FUN_1480ccdba(void)

void FUN_1480ccdba(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x10 + lVar3),(longlong)iVar6 << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 1480cce42 FUN_1480cce42 body=62 status=ok
// SIG undefined FUN_1480cce42(void)

void FUN_1480cce42(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1480cce80(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1480cce80 FUN_1480cce80 body=93 status=ok
// SIG undefined FUN_1480cce80(void)

ulonglong FUN_1480cce80(uint param_1,uint param_2)

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



// FUNCTION 1480ccede FUN_1480ccede body=9 status=ok
// SIG undefined FUN_1480ccede(void)

void FUN_1480ccede(longlong param_1)

{
  FUN_14810c008(param_1 + 0x10);
  return;
}



// FUNCTION 1480ccee8 FUN_1480ccee8 body=29 status=ok
// SIG undefined FUN_1480ccee8(void)

undefined8 FUN_1480ccee8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480ccf06 FUN_1480ccf06 body=132 status=ok
// SIG undefined FUN_1480ccf06(void)

void FUN_1480ccf06(longlong param_1,int param_2)

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



// FUNCTION 1480ccf8c FUN_1480ccf8c body=376 status=ok
// SIG undefined FUN_1480ccf8c(void)

void FUN_1480ccf8c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1480cd106(local_18,local_20,local_28,local_30);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480cd106 FUN_1480cd106 body=122 status=ok
// SIG undefined FUN_1480cd106(void)

void FUN_1480cd106(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  uVar1 = FUN_145a78dcc();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 != 0) {
    if ((longlong)*(int *)(lVar2 + 0x68) != 0) {
      plVar3 = *(longlong **)(lVar2 + 0x60);
      lVar4 = (longlong)*(int *)(lVar2 + 0x68) << 4;
      do {
        if (*plVar3 == param_3) {
          if (plVar3 != (longlong *)0x0) goto LAB_1480cd16c;
          break;
        }
        plVar3 = plVar3 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
    plVar3 = (longlong *)FUN_1480cf2ec(lVar2 + 0x60);
    *plVar3 = param_3;
LAB_1480cd16c:
    plVar3[1] = param_4;
    *(int *)(lVar2 + 0xa0) = *(int *)(lVar2 + 0xa0) + 1;
  }
  return;
}



// FUNCTION 1480cd184 FUN_1480cd184 body=263 status=ok
// SIG undefined FUN_1480cd184(void)

undefined8 *
FUN_1480cd184(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = *(longlong *)(param_2 + 8);
  lVar1 = FUN_144a64e42();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar4 = lVar3 != 0;
    if (lVar3 != lVar1 && bVar4) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar4 = lVar3 != 0;
        if (lVar3 == lVar1) break;
      } while (lVar3 != 0);
    }
    if (bVar4) goto LAB_1480cd1b3;
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_1480cd1b3:
    param_1[2] = 0;
    param_1[4] = &PTR_LAB_14ad96130;
    param_1[5] = param_3;
    param_1[6] = param_4;
    pcVar2 = (code *)&LAB_1480d8d74;
    goto LAB_1480cd1d5;
  }
  lVar3 = *(longlong *)(param_2 + 8);
  lVar1 = FUN_144a49fc8();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar4 = lVar3 != 0;
    if (lVar3 != lVar1 && bVar4) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar4 = lVar3 != 0;
        if (lVar3 == lVar1) break;
      } while (lVar3 != 0);
    }
    if (!bVar4) goto LAB_1480cd27d;
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
LAB_1480cd27d:
    *param_1 = 0;
    param_1[2] = 0;
    return param_1;
  }
  param_1[2] = 0;
  param_1[4] = &PTR_LAB_14ad96150;
  param_1[5] = param_3;
  param_1[6] = param_4;
  pcVar2 = FUN_1480d8dd6;
LAB_1480cd1d5:
  *param_1 = pcVar2;
  return param_1;
}



// FUNCTION 1480cd28c FUN_1480cd28c body=168 status=ok
// SIG undefined FUN_1480cd28c(void)

undefined8 *
FUN_1480cd28c(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = *(longlong *)(param_2 + 8);
  lVar1 = FUN_1446dcc8c();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar3 = lVar2 != 0;
    if (lVar2 != lVar1 && bVar3) {
      do {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        bVar3 = lVar2 != 0;
        if (lVar2 == lVar1) break;
      } while (lVar2 != 0);
    }
    if (!bVar3) goto LAB_1480cd2f5;
  }
  else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_1480cd2f5;
  lVar2 = FUN_1457aacfc();
  if (*(longlong *)(param_2 + 0x70) == lVar2) {
    param_1[2] = 0;
    param_1[4] = &PTR_LAB_14ad96170;
    param_1[5] = param_3;
    param_1[6] = param_4;
    *param_1 = FUN_1480d8e80;
    return param_1;
  }
LAB_1480cd2f5:
  *param_1 = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1480cd334 FUN_1480cd334 body=168 status=ok
// SIG undefined FUN_1480cd334(void)

undefined8 *
FUN_1480cd334(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = *(longlong *)(param_2 + 8);
  lVar1 = FUN_1446dcc8c();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar3 = lVar2 != 0;
    if (lVar2 != lVar1 && bVar3) {
      do {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        bVar3 = lVar2 != 0;
        if (lVar2 == lVar1) break;
      } while (lVar2 != 0);
    }
    if (!bVar3) goto LAB_1480cd39d;
  }
  else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_1480cd39d;
  lVar2 = FUN_14068e11a();
  if (*(longlong *)(param_2 + 0x70) == lVar2) {
    param_1[2] = 0;
    param_1[4] = &PTR_LAB_14ad96190;
    param_1[5] = param_3;
    param_1[6] = param_4;
    *param_1 = FUN_1480d8f3a;
    return param_1;
  }
LAB_1480cd39d:
  *param_1 = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1480cd3dc FUN_1480cd3dc body=168 status=ok
// SIG undefined FUN_1480cd3dc(void)

undefined8 *
FUN_1480cd3dc(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = *(longlong *)(param_2 + 8);
  lVar1 = FUN_1446dcc8c();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar3 = lVar2 != 0;
    if (lVar2 != lVar1 && bVar3) {
      do {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        bVar3 = lVar2 != 0;
        if (lVar2 == lVar1) break;
      } while (lVar2 != 0);
    }
    if (!bVar3) goto LAB_1480cd445;
  }
  else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_1480cd445;
  lVar2 = FUN_1456aec84();
  if (*(longlong *)(param_2 + 0x70) == lVar2) {
    param_1[2] = 0;
    param_1[4] = &PTR_LAB_14ad961b0;
    param_1[5] = param_3;
    param_1[6] = param_4;
    *param_1 = FUN_1480d9008;
    return param_1;
  }
LAB_1480cd445:
  *param_1 = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1480cd484 FUN_1480cd484 body=215 status=ok
// SIG undefined FUN_1480cd484(void)

undefined8 *
FUN_1480cd484(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)(param_2 + 8);
  lVar1 = FUN_1446dcc8c();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar4 = lVar2 != 0;
    if (lVar2 != lVar1 && bVar4) {
      do {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        bVar4 = lVar2 != 0;
        if (lVar2 == lVar1) break;
      } while (lVar2 != 0);
    }
    if (!bVar4) goto LAB_1480cd4c9;
  }
  else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_1480cd4c9;
  lVar2 = FUN_140f8052a();
  if (*(longlong *)(param_2 + 0x70) == lVar2) {
    param_1[2] = 0;
    param_1[4] = &PTR_LAB_14ad961d0;
    param_1[5] = param_3;
    param_1[6] = param_4;
    pcVar3 = FUN_1480d90d6;
  }
  else {
    lVar2 = FUN_140bf8bc4();
    if (*(longlong *)(param_2 + 0x70) != lVar2) {
LAB_1480cd4c9:
      *param_1 = 0;
      param_1[2] = 0;
      return param_1;
    }
    param_1[2] = 0;
    param_1[4] = &PTR_LAB_14ad961f0;
    param_1[5] = param_3;
    param_1[6] = param_4;
    pcVar3 = FUN_1480d91ba;
  }
  *param_1 = pcVar3;
  return param_1;
}



// FUNCTION 1480cd55c FUN_1480cd55c body=168 status=ok
// SIG undefined FUN_1480cd55c(void)

undefined8 *
FUN_1480cd55c(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = *(longlong *)(param_2 + 8);
  lVar1 = FUN_1446dcc8c();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar3 = lVar2 != 0;
    if (lVar2 != lVar1 && bVar3) {
      do {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        bVar3 = lVar2 != 0;
        if (lVar2 == lVar1) break;
      } while (lVar2 != 0);
    }
    if (!bVar3) goto LAB_1480cd5c5;
  }
  else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_1480cd5c5;
  lVar2 = FUN_14068e11a();
  if (*(longlong *)(param_2 + 0x70) == lVar2) {
    param_1[2] = 0;
    param_1[4] = &PTR_LAB_14ad96210;
    param_1[5] = param_3;
    param_1[6] = param_4;
    *param_1 = FUN_1480d9264;
    return param_1;
  }
LAB_1480cd5c5:
  *param_1 = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1480cd604 FUN_1480cd604 body=680 status=ok
// SIG undefined FUN_1480cd604(void)

undefined8 *
FUN_1480cd604(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = *(longlong *)(param_2 + 8);
  lVar1 = FUN_144a7add4();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar4 = lVar3 != 0;
    if (lVar3 != lVar1 && bVar4) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar4 = lVar3 != 0;
        if (lVar3 == lVar1) break;
      } while (lVar3 != 0);
    }
    if (bVar4) goto LAB_1480cd633;
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_1480cd633:
    param_2 = *(longlong *)(param_2 + 0x70);
  }
  lVar3 = *(longlong *)(param_2 + 8);
  lVar1 = FUN_14475a8dc();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar4 = lVar3 != 0;
    if (lVar3 != lVar1 && bVar4) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar4 = lVar3 != 0;
        if (lVar3 == lVar1) break;
      } while (lVar3 != 0);
    }
    if (!bVar4) goto LAB_1480cd6ee;
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
LAB_1480cd6ee:
    lVar3 = *(longlong *)(param_2 + 8);
    lVar1 = FUN_140e98e1a();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (bVar4) goto LAB_1480cd706;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_1480cd706:
      param_1[2] = 0;
      param_1[4] = &PTR_LAB_14ad96250;
      param_1[5] = param_3;
      param_1[6] = param_4;
      pcVar2 = FUN_1480d93ea;
      goto LAB_1480cd675;
    }
    lVar3 = *(longlong *)(param_2 + 8);
    lVar1 = FUN_144a8cc30();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (bVar4) goto LAB_1480cd772;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_1480cd772:
      param_1[2] = 0;
      param_1[4] = &PTR_LAB_14ad96270;
      param_1[5] = param_3;
      param_1[6] = param_4;
      pcVar2 = FUN_1480d948e;
      goto LAB_1480cd675;
    }
    lVar3 = *(longlong *)(param_2 + 8);
    lVar1 = FUN_14093f0c0();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (bVar4) goto LAB_1480cd7de;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_1480cd7de:
      param_1[2] = 0;
      param_1[4] = &PTR_LAB_14ad96290;
      param_1[5] = param_3;
      param_1[6] = param_4;
      pcVar2 = FUN_1480d9532;
      goto LAB_1480cd675;
    }
    lVar3 = *(longlong *)(param_2 + 8);
    lVar1 = FUN_144a7452c();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (!bVar4) goto LAB_1480cd89e;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
LAB_1480cd89e:
      *param_1 = 0;
      param_1[2] = 0;
      return param_1;
    }
    param_1[2] = 0;
    param_1[4] = &PTR_LAB_14ad962b0;
    param_1[5] = param_3;
    param_1[6] = param_4;
    pcVar2 = FUN_1480d95d6;
    goto LAB_1480cd675;
  }
  param_1[2] = 0;
  param_1[4] = &PTR_LAB_14ad96230;
  param_1[5] = param_3;
  param_1[6] = param_4;
  pcVar2 = FUN_1480d9348;
LAB_1480cd675:
  *param_1 = pcVar2;
  return param_1;
}



// FUNCTION 1480cd8ac FUN_1480cd8ac body=248 status=ok
// SIG undefined FUN_1480cd8ac(void)

undefined8 * FUN_1480cd8ac(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = *(longlong *)(param_2 + 8);
  lVar1 = FUN_144a64e42();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar4 = lVar3 != 0;
    if (lVar3 != lVar1 && bVar4) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar4 = lVar3 != 0;
        if (lVar3 == lVar1) break;
      } while (lVar3 != 0);
    }
    if (bVar4) goto LAB_1480cd8d6;
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_1480cd8d6:
    param_1[2] = 0;
    param_1[4] = &PTR_LAB_14ad962f0;
    param_1[5] = param_3;
    puVar2 = &LAB_1480d971e;
    goto LAB_1480cd8f4;
  }
  lVar3 = *(longlong *)(param_2 + 8);
  lVar1 = FUN_144a49fc8();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar4 = lVar3 != 0;
    if (lVar3 != lVar1 && bVar4) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar4 = lVar3 != 0;
        if (lVar3 == lVar1) break;
      } while (lVar3 != 0);
    }
    if (!bVar4) goto LAB_1480cd996;
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
LAB_1480cd996:
    *param_1 = 0;
    param_1[2] = 0;
    return param_1;
  }
  param_1[2] = 0;
  param_1[4] = &PTR_LAB_14ad96310;
  param_1[5] = param_3;
  puVar2 = &LAB_1480d9776;
LAB_1480cd8f4:
  *param_1 = puVar2;
  return param_1;
}



// FUNCTION 1480cd9a4 FUN_1480cd9a4 body=157 status=ok
// SIG undefined FUN_1480cd9a4(void)

undefined8 * FUN_1480cd9a4(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = *(longlong *)(param_2 + 8);
  lVar1 = FUN_1446dcc8c();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar3 = lVar2 != 0;
    if (lVar2 != lVar1 && bVar3) {
      do {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        bVar3 = lVar2 != 0;
        if (lVar2 == lVar1) break;
      } while (lVar2 != 0);
    }
    if (!bVar3) goto LAB_1480cda08;
  }
  else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_1480cda08;
  lVar2 = FUN_1457aacfc();
  if (*(longlong *)(param_2 + 0x70) == lVar2) {
    param_1[2] = 0;
    param_1[4] = &PTR_LAB_14ad96330;
    param_1[5] = param_3;
    *param_1 = &LAB_1480d97ce;
    return param_1;
  }
LAB_1480cda08:
  *param_1 = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1480cda42 FUN_1480cda42 body=157 status=ok
// SIG undefined FUN_1480cda42(void)

undefined8 * FUN_1480cda42(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = *(longlong *)(param_2 + 8);
  lVar1 = FUN_1446dcc8c();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar3 = lVar2 != 0;
    if (lVar2 != lVar1 && bVar3) {
      do {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        bVar3 = lVar2 != 0;
        if (lVar2 == lVar1) break;
      } while (lVar2 != 0);
    }
    if (!bVar3) goto LAB_1480cdaa6;
  }
  else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_1480cdaa6;
  lVar2 = FUN_14068e11a();
  if (*(longlong *)(param_2 + 0x70) == lVar2) {
    param_1[2] = 0;
    param_1[4] = &PTR_LAB_14ad96350;
    param_1[5] = param_3;
    *param_1 = &LAB_1480d9830;
    return param_1;
  }
LAB_1480cdaa6:
  *param_1 = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1480cdae0 FUN_1480cdae0 body=157 status=ok
// SIG undefined FUN_1480cdae0(void)

undefined8 * FUN_1480cdae0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = *(longlong *)(param_2 + 8);
  lVar1 = FUN_1446dcc8c();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar3 = lVar2 != 0;
    if (lVar2 != lVar1 && bVar3) {
      do {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        bVar3 = lVar2 != 0;
        if (lVar2 == lVar1) break;
      } while (lVar2 != 0);
    }
    if (!bVar3) goto LAB_1480cdb44;
  }
  else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_1480cdb44;
  lVar2 = FUN_1456aec84();
  if (*(longlong *)(param_2 + 0x70) == lVar2) {
    param_1[2] = 0;
    param_1[4] = &PTR_LAB_14ad96370;
    param_1[5] = param_3;
    *param_1 = &LAB_1480d989c;
    return param_1;
  }
LAB_1480cdb44:
  *param_1 = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1480cdb7e FUN_1480cdb7e body=200 status=ok
// SIG undefined FUN_1480cdb7e(void)

undefined8 * FUN_1480cdb7e(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)(param_2 + 8);
  lVar1 = FUN_1446dcc8c();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar4 = lVar2 != 0;
    if (lVar2 != lVar1 && bVar4) {
      do {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        bVar4 = lVar2 != 0;
        if (lVar2 == lVar1) break;
      } while (lVar2 != 0);
    }
    if (!bVar4) goto LAB_1480cdbbe;
  }
  else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_1480cdbbe;
  lVar2 = FUN_140f8052a();
  if (*(longlong *)(param_2 + 0x70) == lVar2) {
    param_1[2] = 0;
    param_1[4] = &PTR_LAB_14ad96390;
    param_1[5] = param_3;
    puVar3 = &LAB_1480d9912;
  }
  else {
    lVar2 = FUN_140bf8bc4();
    if (*(longlong *)(param_2 + 0x70) != lVar2) {
LAB_1480cdbbe:
      *param_1 = 0;
      param_1[2] = 0;
      return param_1;
    }
    param_1[2] = 0;
    param_1[4] = &PTR_LAB_14ad963b0;
    param_1[5] = param_3;
    puVar3 = &LAB_1480d99c2;
  }
  *param_1 = puVar3;
  return param_1;
}



// FUNCTION 1480cdc46 FUN_1480cdc46 body=157 status=ok
// SIG undefined FUN_1480cdc46(void)

undefined8 * FUN_1480cdc46(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = *(longlong *)(param_2 + 8);
  lVar1 = FUN_1446dcc8c();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar3 = lVar2 != 0;
    if (lVar2 != lVar1 && bVar3) {
      do {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        bVar3 = lVar2 != 0;
        if (lVar2 == lVar1) break;
      } while (lVar2 != 0);
    }
    if (!bVar3) goto LAB_1480cdcaa;
  }
  else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_1480cdcaa;
  lVar2 = FUN_14068e11a();
  if (*(longlong *)(param_2 + 0x70) == lVar2) {
    param_1[2] = 0;
    param_1[4] = &PTR_LAB_14ad963d0;
    param_1[5] = param_3;
    *param_1 = FUN_1480d9a18;
    return param_1;
  }
LAB_1480cdcaa:
  *param_1 = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1480cdce4 FUN_1480cdce4 body=646 status=ok
// SIG undefined FUN_1480cdce4(void)

undefined8 * FUN_1480cdce4(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = *(longlong *)(param_2 + 8);
  lVar1 = FUN_144a7add4();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar4 = lVar3 != 0;
    if (lVar3 != lVar1 && bVar4) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar4 = lVar3 != 0;
        if (lVar3 == lVar1) break;
      } while (lVar3 != 0);
    }
    if (bVar4) goto LAB_1480cdd0e;
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_1480cdd0e:
    param_2 = *(longlong *)(param_2 + 0x70);
  }
  lVar3 = *(longlong *)(param_2 + 8);
  lVar1 = FUN_14475a8dc();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar4 = lVar3 != 0;
    if (lVar3 != lVar1 && bVar4) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar4 = lVar3 != 0;
        if (lVar3 == lVar1) break;
      } while (lVar3 != 0);
    }
    if (!bVar4) goto LAB_1480cddbc;
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
LAB_1480cddbc:
    lVar3 = *(longlong *)(param_2 + 8);
    lVar1 = FUN_140e98e1a();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (bVar4) goto LAB_1480cddd4;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_1480cddd4:
      param_1[2] = 0;
      param_1[4] = &PTR_LAB_14ad96410;
      param_1[5] = param_3;
      puVar2 = &LAB_1480d9b1e;
      goto LAB_1480cdd4c;
    }
    lVar3 = *(longlong *)(param_2 + 8);
    lVar1 = FUN_144a8cc30();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (bVar4) goto LAB_1480cde3c;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_1480cde3c:
      param_1[2] = 0;
      param_1[4] = &PTR_LAB_14ad96430;
      param_1[5] = param_3;
      puVar2 = &LAB_1480d9b72;
      goto LAB_1480cdd4c;
    }
    lVar3 = *(longlong *)(param_2 + 8);
    lVar1 = FUN_14093f0c0();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (bVar4) goto LAB_1480cdea4;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_1480cdea4:
      param_1[2] = 0;
      param_1[4] = &PTR_LAB_14ad96450;
      param_1[5] = param_3;
      puVar2 = &LAB_1480d9bc6;
      goto LAB_1480cdd4c;
    }
    lVar3 = *(longlong *)(param_2 + 8);
    lVar1 = FUN_144a7452c();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (!bVar4) goto LAB_1480cdf5c;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
LAB_1480cdf5c:
      *param_1 = 0;
      param_1[2] = 0;
      return param_1;
    }
    param_1[2] = 0;
    param_1[4] = &PTR_LAB_14ad96470;
    param_1[5] = param_3;
    puVar2 = &LAB_1480d9c1a;
    goto LAB_1480cdd4c;
  }
  param_1[2] = 0;
  param_1[4] = &PTR_LAB_14ad963f0;
  param_1[5] = param_3;
  puVar2 = &LAB_1480d9aca;
LAB_1480cdd4c:
  *param_1 = puVar2;
  return param_1;
}



// FUNCTION 1480cdf6a FUN_1480cdf6a body=148 status=ok
// SIG undefined FUN_1480cdf6a(void)

undefined8 * FUN_1480cdf6a(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = *(longlong *)(param_2 + 8);
  lVar1 = FUN_144a5ab96();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar3 = lVar2 != 0;
    if (lVar2 != lVar1 && bVar3) {
      do {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        bVar3 = lVar2 != 0;
        if (lVar2 == lVar1) break;
      } while (lVar2 != 0);
    }
    if (!bVar3) goto LAB_1480cdff3;
  }
  else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
LAB_1480cdff3:
    *param_1 = 0;
    param_1[2] = 0;
    return param_1;
  }
  param_1[2] = 0;
  param_1[4] = &PTR_LAB_14ad96490;
  param_1[5] = param_3;
  param_1[6] = param_2;
  *param_1 = &LAB_1480d9c6e;
  return param_1;
}



// FUNCTION 1480cdffe FUN_1480cdffe body=145 status=ok
// SIG undefined FUN_1480cdffe(void)

undefined8 FUN_1480cdffe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  undefined7 extraout_var;
  
  cVar2 = FUN_1481192e4();
  if ((((cVar2 != '\0') && (*(char *)(param_2 + 0x38) == *(char *)(param_1 + 0x38))) &&
      (*(longlong *)(param_1 + 0x40) == *(longlong *)(param_2 + 0x40))) &&
     (((*(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48) &&
       (*(int *)(param_2 + 0x68) == *(int *)(param_1 + 0x68))) &&
      ((cVar2 = FUN_1480dc9c1(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_1 + 0x60)),
       cVar2 != '\0' && (uVar3 = FUN_144a7afa6(param_2 + 0x78,param_1 + 0x78), (char)uVar3 != '\0'))
      )))) {
    lVar1 = *(longlong *)(param_1 + 0x98);
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
      uVar4 = extraout_var;
    }
    return CONCAT71(uVar4,*(longlong *)(param_2 + 0x98) == lVar1);
  }
  return 0;
}



// FUNCTION 1480ce090 FUN_1480ce090 body=159 status=ok
// SIG undefined FUN_1480ce090(void)

undefined4 FUN_1480ce090(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  uVar4 = FUN_1414db5a0();
  if ((char)uVar4 != '\0') {
    *(undefined1 *)(param_2 + 0x38) = *(undefined1 *)(param_1 + 0x38);
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    FUN_1447a122a(param_2 + 0x50,param_1 + 0x50);
    FUN_1480ce130(param_2 + 0x60,param_1 + 0x60);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_1 + 0x70);
    uVar1 = *(undefined4 *)(param_1 + 0x7c);
    uVar2 = *(undefined4 *)(param_1 + 0x80);
    uVar3 = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_2 + 0x7c) = uVar1;
    *(undefined4 *)(param_2 + 0x80) = uVar2;
    *(undefined4 *)(param_2 + 0x84) = uVar3;
    FUN_144a787a6(param_2 + 0x88,param_1 + 0x88);
    lVar5 = *(longlong *)(param_1 + 0x98);
    if (DAT_14c950c29 == '\x01') {
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar5 = *(longlong *)(param_1 + 0x98);
      }
    }
    *(longlong *)(param_2 + 0x98) = lVar5;
  }
  return uVar4;
}



// FUNCTION 1480ce130 FUN_1480ce130 body=88 status=ok
// SIG undefined FUN_1480ce130(void)

undefined8 * FUN_1480ce130(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1480dc9f0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1480ce188 FUN_1480ce188 body=184 status=ok
// SIG undefined FUN_1480ce188(void)

ulonglong FUN_1480ce188(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  if (0 < (longlong)*(int *)(param_1 + 0x48)) {
    piVar6 = (int *)(*(longlong *)(param_1 + 0x40) + 8);
    uVar3 = 0;
    do {
      if ((*(longlong *)(piVar6 + -2) == *param_2) && (*piVar6 == (int)param_2[1])) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      piVar6 = piVar6 + 0x20;
    } while ((longlong)*(int *)(param_1 + 0x48) != uVar3);
  }
  plVar4 = (longlong *)FUN_1480da2ae();
  *plVar4 = *param_2;
  *(int *)(plVar4 + 1) = (int)param_2[1];
  uVar5 = FUN_144741050(param_2 + 1);
  uVar2 = FUN_144a81174(uVar5);
  iVar1 = *(int *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = iVar1 + uVar2;
  if ((uint)(*(int *)(param_1 + 0x5c) - iVar1) < uVar2) {
    FUN_1447403be(param_1 + 0x50);
  }
  memset((void *)((longlong)iVar1 + *(longlong *)(param_1 + 0x50)),0,(longlong)(int)uVar2);
  *(int *)((longlong)plVar4 + 0xc) = iVar1;
  return (ulonglong)(*(int *)(param_1 + 0x48) - 1);
}



// FUNCTION 1480ce240 FUN_1480ce240 body=106 status=ok
// SIG undefined FUN_1480ce240(void)

void FUN_1480ce240(longlong param_1)

{
  if (*(char *)(param_1 + 0x140) == '\x01') {
    *(undefined1 *)(param_1 + 0x140) = 0;
  }
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_1480da3b5(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1480ce2bc FUN_1480ce2bc body=239 status=ok
// SIG undefined FUN_1480ce2bc(void)

void FUN_1480ce2bc(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Dst;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  memset(param_1,0,0x90);
  if (((undefined8 *)(param_2 + 0x70) != param_1) && (*(char *)(param_2 + 0xd0) == '\x01')) {
    puVar5 = (undefined8 *)(param_2 + 0x70);
    puVar6 = param_1;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  if (0 < *(int *)(param_2 + 0x58)) {
    plVar1 = param_1 + 0xe;
    iVar2 = *(int *)(param_2 + 0x48);
    *(int *)(param_1 + 0xf) = iVar2;
    if ((longlong)iVar2 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      FUN_1447808da(plVar1);
      _Dst = (void *)*plVar1;
    }
    lVar4 = 0;
    memset(_Dst,0,(longlong)iVar2 << 2);
    if (0 < *(int *)(param_2 + 0x48)) {
      lVar3 = 0x10;
      do {
        *(uint *)(*plVar1 + lVar4 * 4) =
             -(uint)(*(longlong *)(*(longlong *)(param_2 + 0x40) + lVar3 * 4) == 0) |
             *(uint *)(*(longlong *)(param_2 + 0x40) + -0x34 + lVar3 * 4) >> 2;
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x20;
      } while (lVar4 < *(int *)(param_2 + 0x48));
    }
    FUN_1447a122a(param_1 + 0x10,param_2 + 0x50);
    return;
  }
  return;
}



// FUNCTION 1480ce3ac FUN_1480ce3ac body=3031 status=ok
// SIG undefined FUN_1480ce3ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480ce3ac(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_128 [40];
  longlong local_100;
  undefined4 local_f8 [2];
  longlong local_f0;
  longlong local_e8;
  undefined4 local_e0 [2];
  longlong local_d8;
  longlong local_d0;
  undefined4 local_c8 [2];
  longlong local_c0;
  longlong local_b8;
  undefined4 local_b0 [2];
  longlong local_a8;
  longlong local_a0;
  undefined4 local_98 [2];
  longlong local_90;
  longlong local_88;
  undefined4 local_80 [2];
  longlong local_78;
  longlong local_70;
  undefined4 local_68 [2];
  longlong local_60;
  longlong local_58;
  undefined4 local_50 [2];
  longlong local_48;
  undefined8 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined8 *)(param_3 + 0x38) = 0;
  if (*param_2 == DAT_14cb391b8) {
    local_40 = (undefined8 *)0x0;
    local_38 = (ulonglong)local_38._4_4_ << 0x20;
    FUN_1446efa72(&local_40,0,2,0x10);
    *local_40 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_40[2] = lVar3;
    ppuVar2 = &PTR_FUN_14ad980a0;
LAB_1480ce451:
    local_38 = CONCAT44(local_38._4_4_,2);
    *local_40 = ppuVar2;
    local_40[3] = param_1;
  }
  else {
    if (*param_2 == DAT_14cb391c0) {
      local_40 = (undefined8 *)0x0;
      local_38 = (ulonglong)local_38._4_4_ << 0x20;
      FUN_1446efa72(&local_40,0,2,0x10);
      *local_40 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_40[2] = lVar3;
      ppuVar2 = &PTR_FUN_14ad98110;
      goto LAB_1480ce451;
    }
    FUN_1446ddc76(&local_48,"GetFloatProperty",1);
    if (*param_2 == local_48) {
      lVar4 = *(longlong *)(param_2[5] + 8);
      if ((longlong)*(int *)(param_1 + 0x68) != 0) {
        lVar3 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar3) == lVar4) {
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8 + lVar3);
            break;
          }
          lVar3 = lVar3 + 0x10;
        } while ((longlong)*(int *)(param_1 + 0x68) * 0x10 != lVar3);
      }
      local_40 = DAT_14cb420f0;
      if ((DAT_14cb420f0 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      local_38 = DAT_14cb420f8;
      local_58 = lVar4;
      local_50[0] = FUN_144830b78(local_50,&local_40);
      uVar1 = FUN_1480ce188(param_3,&local_58);
      local_40 = (undefined8 *)0x0;
      local_38 = local_38 & 0xffffffff00000000;
      FUN_1446efa72(&local_40,0,2,0x10);
      local_38 = CONCAT44(local_38._4_4_,2);
      *local_40 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_40[2] = lVar3;
      ppuVar2 = &PTR_FUN_14ad98180;
    }
    else {
      FUN_1446ddc76(&local_60,"GetVec2Property",1);
      if (*param_2 == local_60) {
        lVar4 = *(longlong *)(param_2[5] + 8);
        if ((longlong)*(int *)(param_1 + 0x68) != 0) {
          lVar3 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar3) == lVar4) {
              lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8 + lVar3);
              break;
            }
            lVar3 = lVar3 + 0x10;
          } while ((longlong)*(int *)(param_1 + 0x68) * 0x10 != lVar3);
        }
        local_40 = DAT_14cb42110;
        if ((DAT_14cb42110 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        local_38 = DAT_14cb42118;
        local_70 = lVar4;
        local_68[0] = FUN_144830b78(local_68,&local_40);
        uVar1 = FUN_1480ce188(param_3,&local_70);
        local_40 = (undefined8 *)0x0;
        local_38 = local_38 & 0xffffffff00000000;
        FUN_1446efa72(&local_40,0,2,0x10);
        local_38 = CONCAT44(local_38._4_4_,2);
        *local_40 = &PTR_LAB_14ad81180;
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar3 == 0) {
          LOCK();
          UNLOCK();
          lVar3 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_40[2] = lVar3;
        ppuVar2 = &PTR_FUN_14ad981f0;
      }
      else {
        FUN_1446ddc76(&local_78,"GetVec3Property",1);
        if (*param_2 == local_78) {
          lVar4 = *(longlong *)(param_2[5] + 8);
          if ((longlong)*(int *)(param_1 + 0x68) != 0) {
            lVar3 = 0;
            do {
              if (*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar3) == lVar4) {
                lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8 + lVar3);
                break;
              }
              lVar3 = lVar3 + 0x10;
            } while ((longlong)*(int *)(param_1 + 0x68) * 0x10 != lVar3);
          }
          local_40 = DAT_14cb42140;
          if ((DAT_14cb42140 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          local_38 = DAT_14cb42148;
          local_88 = lVar4;
          local_80[0] = FUN_144830b78(local_80,&local_40);
          uVar1 = FUN_1480ce188(param_3,&local_88);
          local_40 = (undefined8 *)0x0;
          local_38 = local_38 & 0xffffffff00000000;
          FUN_1446efa72(&local_40,0,2,0x10);
          local_38 = CONCAT44(local_38._4_4_,2);
          *local_40 = &PTR_LAB_14ad81180;
          LOCK();
          UNLOCK();
          lVar3 = DAT_14c758608 + 1;
          lVar4 = DAT_14c758608 + 1;
          if (lVar3 == 0) {
            LOCK();
            UNLOCK();
            lVar3 = DAT_14c758608 + 2;
            lVar4 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar4;
          local_40[2] = lVar3;
          ppuVar2 = &PTR_FUN_14ad98260;
        }
        else {
          FUN_1446ddc76(&local_90,"GetVec4Property",1);
          if (*param_2 == local_90) {
            lVar4 = *(longlong *)(param_2[5] + 8);
            if ((longlong)*(int *)(param_1 + 0x68) != 0) {
              lVar3 = 0;
              do {
                if (*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar3) == lVar4) {
                  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8 + lVar3);
                  break;
                }
                lVar3 = lVar3 + 0x10;
              } while ((longlong)*(int *)(param_1 + 0x68) * 0x10 != lVar3);
            }
            local_40 = DAT_14cb42160;
            if ((DAT_14cb42160 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c();
            }
            local_38 = DAT_14cb42168;
            local_a0 = lVar4;
            local_98[0] = FUN_144830b78(local_98,&local_40);
            uVar1 = FUN_1480ce188(param_3,&local_a0);
            local_40 = (undefined8 *)0x0;
            local_38 = local_38 & 0xffffffff00000000;
            FUN_1446efa72(&local_40,0,2,0x10);
            local_38 = CONCAT44(local_38._4_4_,2);
            *local_40 = &PTR_LAB_14ad81180;
            LOCK();
            UNLOCK();
            lVar3 = DAT_14c758608 + 1;
            lVar4 = DAT_14c758608 + 1;
            if (lVar3 == 0) {
              LOCK();
              UNLOCK();
              lVar3 = DAT_14c758608 + 2;
              lVar4 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar4;
            local_40[2] = lVar3;
            ppuVar2 = &PTR_FUN_14ad982d0;
          }
          else {
            FUN_1446ddc76(&local_a8,"GetColorProperty",1);
            if (*param_2 == local_a8) {
              lVar4 = *(longlong *)(param_2[5] + 8);
              if ((longlong)*(int *)(param_1 + 0x68) != 0) {
                lVar3 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar3) == lVar4) {
                    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8 + lVar3);
                    break;
                  }
                  lVar3 = lVar3 + 0x10;
                } while ((longlong)*(int *)(param_1 + 0x68) * 0x10 != lVar3);
              }
              local_40 = DAT_14cb42180;
              if ((DAT_14cb42180 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c();
              }
              local_38 = DAT_14cb42188;
              local_b8 = lVar4;
              local_b0[0] = FUN_144830b78(local_b0,&local_40);
              uVar1 = FUN_1480ce188(param_3,&local_b8);
              local_40 = (undefined8 *)0x0;
              local_38 = local_38 & 0xffffffff00000000;
              FUN_1446efa72(&local_40,0,2,0x10);
              local_38 = CONCAT44(local_38._4_4_,2);
              *local_40 = &PTR_LAB_14ad81180;
              LOCK();
              UNLOCK();
              lVar3 = DAT_14c758608 + 1;
              lVar4 = DAT_14c758608 + 1;
              if (lVar3 == 0) {
                LOCK();
                UNLOCK();
                lVar3 = DAT_14c758608 + 2;
                lVar4 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar4;
              local_40[2] = lVar3;
              ppuVar2 = &PTR_FUN_14ad98340;
            }
            else {
              FUN_1446ddc76(&local_c0,"GetPositionProperty",1);
              if (*param_2 == local_c0) {
                lVar4 = *(longlong *)(param_2[5] + 8);
                if ((longlong)*(int *)(param_1 + 0x68) != 0) {
                  lVar3 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar3) == lVar4) {
                      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8 + lVar3);
                      break;
                    }
                    lVar3 = lVar3 + 0x10;
                  } while ((longlong)*(int *)(param_1 + 0x68) * 0x10 != lVar3);
                }
                local_40 = DAT_14cb42130;
                if ((DAT_14cb42130 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
                  FUN_1456cec3c();
                }
                local_38 = _DAT_14cb42138;
                local_d0 = lVar4;
                local_c8[0] = FUN_144830b78(local_c8,&local_40);
                uVar1 = FUN_1480ce188(param_3,&local_d0);
                local_40 = (undefined8 *)0x0;
                local_38 = local_38 & 0xffffffff00000000;
                FUN_1446efa72(&local_40,0,2,0x10);
                local_38 = CONCAT44(local_38._4_4_,2);
                *local_40 = &PTR_LAB_14ad81180;
                LOCK();
                UNLOCK();
                lVar3 = DAT_14c758608 + 1;
                lVar4 = DAT_14c758608 + 1;
                if (lVar3 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar3 = DAT_14c758608 + 2;
                  lVar4 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar4;
                local_40[2] = lVar3;
                ppuVar2 = &PTR_FUN_14ad983b0;
              }
              else {
                FUN_1446ddc76(&local_d8,"GetIntProperty",1);
                if (*param_2 == local_d8) {
                  lVar4 = *(longlong *)(param_2[5] + 8);
                  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
                    lVar3 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar3) == lVar4) {
                        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8 + lVar3);
                        break;
                      }
                      lVar3 = lVar3 + 0x10;
                    } while ((longlong)*(int *)(param_1 + 0x68) * 0x10 != lVar3);
                  }
                  local_40 = DAT_14cb420d0;
                  if ((DAT_14cb420d0 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
                    FUN_1456cec3c();
                  }
                  local_38 = _DAT_14cb420d8;
                  local_e8 = lVar4;
                  local_e0[0] = FUN_144830b78(local_e0,&local_40);
                  uVar1 = FUN_1480ce188(param_3,&local_e8);
                  local_40 = (undefined8 *)0x0;
                  local_38 = local_38 & 0xffffffff00000000;
                  FUN_1446efa72(&local_40,0,2,0x10);
                  local_38 = CONCAT44(local_38._4_4_,2);
                  *local_40 = &PTR_LAB_14ad81180;
                  LOCK();
                  UNLOCK();
                  lVar3 = DAT_14c758608 + 1;
                  lVar4 = DAT_14c758608 + 1;
                  if (lVar3 == 0) {
                    LOCK();
                    UNLOCK();
                    lVar3 = DAT_14c758608 + 2;
                    lVar4 = DAT_14c758608 + 2;
                  }
                  DAT_14c758608 = lVar4;
                  local_40[2] = lVar3;
                  ppuVar2 = &PTR_FUN_14ad98420;
                }
                else {
                  FUN_1446ddc76(&local_f0,"GetBoolProperty",1);
                  if (*param_2 != local_f0) goto LAB_1480ce473;
                  lVar4 = *(longlong *)(param_2[5] + 8);
                  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
                    lVar3 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar3) == lVar4) {
                        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8 + lVar3);
                        break;
                      }
                      lVar3 = lVar3 + 0x10;
                    } while ((longlong)*(int *)(param_1 + 0x68) * 0x10 != lVar3);
                  }
                  local_40 = DAT_14cb420e0;
                  if ((DAT_14cb420e0 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
                    FUN_1456cec3c();
                  }
                  local_38 = DAT_14cb420e8;
                  local_100 = lVar4;
                  local_f8[0] = FUN_144830b78(local_f8,&local_40);
                  uVar1 = FUN_1480ce188(param_3,&local_100);
                  local_40 = (undefined8 *)0x0;
                  local_38 = local_38 & 0xffffffff00000000;
                  FUN_1446efa72(&local_40,0,2,0x10);
                  local_38 = CONCAT44(local_38._4_4_,2);
                  *local_40 = &PTR_LAB_14ad81180;
                  LOCK();
                  UNLOCK();
                  lVar3 = DAT_14c758608 + 1;
                  lVar4 = DAT_14c758608 + 1;
                  if (lVar3 == 0) {
                    LOCK();
                    UNLOCK();
                    lVar3 = DAT_14c758608 + 2;
                    lVar4 = DAT_14c758608 + 2;
                  }
                  DAT_14c758608 = lVar4;
                  local_40[2] = lVar3;
                  ppuVar2 = &PTR_FUN_14ad98490;
                }
              }
            }
          }
        }
      }
    }
    *local_40 = ppuVar2;
    *(undefined4 *)(local_40 + 3) = uVar1;
  }
  FUN_144a450dc(param_4,&local_40);
  FUN_1449db362(&local_40);
LAB_1480ce473:
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480cef84 FUN_1480cef84 body=91 status=ok
// SIG undefined FUN_1480cef84(void)

void FUN_1480cef84(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = *(undefined2 **)*param_2;
  }
  FUN_1480ddf58(param_2[3],puVar2);
  iVar3 = *(int *)(*param_2 + 0x30) + 3;
  iVar1 = *(int *)(*param_2 + 0x30) + 6;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  iVar3 = 1;
  if (1 < iVar1 >> 2) {
    iVar3 = iVar1 >> 2;
  }
  FUN_14809a84e(param_2,L"PropertyOffsets",iVar3);
  return;
}



// FUNCTION 1480cefe0 FUN_1480cefe0 body=780 status=ok
// SIG undefined FUN_1480cefe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480cefe0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar6;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar7 = lVar1 + 0x48;
    if (*(longlong *)(lVar1 + 0x50) != 0) {
      lVar7 = *(longlong *)(lVar1 + 0x50);
    }
    iVar4 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar1 + 0x58) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        lVar7 = *(longlong *)(lVar1 + 0x10) + (longlong)iVar4 * 0x140;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar4 * 0x140) == lVar2)
        goto LAB_1480cf03c;
        iVar4 = *(int *)(lVar7 + 0x130);
      } while (iVar4 != -1);
    }
  }
  lVar7 = 0;
LAB_1480cf03c:
  uVar5 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  uVar6 = (ulonglong)uVar5;
  FUN_1480ddff0();
  *(uint *)(param_2 + 0x50) = uVar5 + _DAT_14cb398e4;
  lVar1 = *(longlong *)(param_2 + 0x38);
  fVar8 = DAT_14c846338;
  fVar9 = DAT_14c846330._4_4_;
  fVar10 = (float)DAT_14c846330;
  if (*(char *)(lVar7 + 0x70) == '\x01') {
    fVar8 = (float)*(double *)(lVar7 + 0x40);
    fVar9 = (float)*(double *)(lVar7 + 0x38);
    fVar10 = (float)*(double *)(lVar7 + 0x30);
  }
  *(float *)(lVar1 + uVar6) = fVar10;
  *(float *)(lVar1 + 4 + uVar6) = fVar9;
  *(float *)(lVar1 + 8 + uVar6) = fVar8;
  *(uint *)(lVar1 + 0xc + uVar6) = (uint)*(byte *)(lVar7 + 0x70);
  fVar8 = DAT_14c84634c;
  fVar9 = DAT_14c846348;
  fVar10 = DAT_14c846344;
  fVar11 = DAT_14c84633c._4_4_;
  if (*(char *)(lVar7 + 0x70) == '\x01') {
    fVar8 = (float)*(double *)(lVar7 + 0x28);
    fVar9 = (float)*(double *)(lVar7 + 0x20);
    fVar10 = (float)*(double *)(lVar7 + 0x18);
    fVar11 = (float)*(double *)(lVar7 + 0x10);
  }
  *(float *)(lVar1 + 0x10 + uVar6) = fVar11;
  *(float *)(lVar1 + 0x14 + uVar6) = fVar10;
  *(float *)(lVar1 + 0x18 + uVar6) = fVar9;
  *(float *)(lVar1 + 0x1c + uVar6) = fVar8;
  fVar8 = DAT_14c846358;
  fVar9 = DAT_14c846350._4_4_;
  fVar10 = (float)DAT_14c846350;
  if (*(char *)(lVar7 + 0x70) == '\x01') {
    fVar8 = (float)*(double *)(lVar7 + 0x60);
    fVar9 = (float)*(double *)(lVar7 + 0x58);
    fVar10 = (float)*(double *)(lVar7 + 0x50);
  }
  *(float *)(lVar1 + 0x20 + uVar6) = fVar10;
  *(float *)(lVar1 + 0x24 + uVar6) = fVar9;
  *(float *)(lVar1 + 0x28 + uVar6) = fVar8;
  fVar8 = DAT_14c846338;
  fVar9 = DAT_14c846330._4_4_;
  fVar10 = (float)DAT_14c846330;
  if (*(char *)(lVar7 + 0xe0) == '\x01') {
    fVar8 = (float)*(double *)(lVar7 + 0xb0);
    fVar9 = (float)*(double *)(lVar7 + 0xa8);
    fVar10 = (float)*(double *)(lVar7 + 0xa0);
  }
  *(float *)(lVar1 + 0x30 + uVar6) = fVar10;
  *(float *)(lVar1 + 0x34 + uVar6) = fVar9;
  *(float *)(lVar1 + 0x38 + uVar6) = fVar8;
  *(uint *)(lVar1 + 0x3c + uVar6) = (uint)*(byte *)(lVar7 + 0xe0);
  fVar8 = DAT_14c84634c;
  fVar9 = DAT_14c846348;
  fVar10 = DAT_14c846344;
  fVar11 = DAT_14c84633c._4_4_;
  if (*(char *)(lVar7 + 0xe0) == '\x01') {
    fVar8 = (float)*(double *)(lVar7 + 0x98);
    fVar9 = (float)*(double *)(lVar7 + 0x90);
    fVar10 = (float)*(double *)(lVar7 + 0x88);
    fVar11 = (float)*(double *)(lVar7 + 0x80);
  }
  *(float *)(lVar1 + 0x40 + uVar6) = fVar11;
  *(float *)(lVar1 + 0x44 + uVar6) = fVar10;
  *(float *)(lVar1 + 0x48 + uVar6) = fVar9;
  *(float *)(lVar1 + 0x4c + uVar6) = fVar8;
  fVar8 = DAT_14c846358;
  fVar9 = DAT_14c846350._4_4_;
  fVar10 = (float)DAT_14c846350;
  if (*(char *)(lVar7 + 0xe0) == '\x01') {
    fVar8 = (float)*(double *)(lVar7 + 0xd0);
    fVar9 = (float)*(double *)(lVar7 + 200);
    fVar10 = (float)*(double *)(lVar7 + 0xc0);
  }
  *(float *)(lVar1 + 0x50 + uVar6) = fVar10;
  *(float *)(lVar1 + 0x54 + uVar6) = fVar9;
  *(float *)(lVar1 + 0x58 + uVar6) = fVar8;
  *(undefined8 *)(lVar1 + 0x60 + uVar6) = *(undefined8 *)(lVar7 + 0xf8);
  uVar5 = *(uint *)(lVar7 + 0x110);
  uVar3 = uVar5 + 3;
  if (-1 < (int)uVar5) {
    uVar3 = uVar5;
  }
  uVar5 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  *(uint *)(param_2 + 0x50) = uVar5 + (uVar3 & 0xfffffffc) * 4;
  memcpy((void *)(*(longlong *)(param_2 + 0x38) + (ulonglong)uVar5),*(void **)(lVar7 + 0x108),
         (ulonglong)(uint)(*(int *)(lVar7 + 0x110) << 2));
  return;
}



// FUNCTION 1480cf2ec FUN_1480cf2ec body=59 status=ok
// SIG undefined FUN_1480cf2ec(void)

longlong FUN_1480cf2ec(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1480de6a4(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_1480de69d(lVar2);
  return lVar2;
}



// FUNCTION 1480cf328 FUN_1480cf328 body=862 status=ok
// SIG undefined FUN_1480cf328(void)

void FUN_1480cf328(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  byte bVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_148 [40];
  float *local_120;
  int local_118;
  float *local_110;
  int local_108;
  float *local_100;
  int local_f8;
  float *local_f0;
  int local_e8;
  float *local_e0;
  int local_d8;
  float *local_d0;
  int local_c8;
  float *local_c0;
  int local_b8;
  float *local_b0;
  int local_a8;
  float *local_a0;
  int local_98;
  float *local_90;
  int local_88;
  int *local_80;
  int local_78;
  undefined1 local_70 [8];
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1480cf688(local_70,param_1);
  FUN_140126e42(&local_80,param_1);
  FUN_144a76c20(&local_b0,param_1);
  FUN_144a76c20(&local_a0,param_1);
  FUN_144a76c20(&local_90,param_1);
  FUN_144a76c20(&local_f0,param_1);
  FUN_144a76c20(&local_e0,param_1);
  FUN_144a76c20(&local_d0,param_1);
  FUN_144a76c20(&local_c0,param_1);
  FUN_144a76c20(&local_120,param_1);
  FUN_144a76c20(&local_110,param_1);
  FUN_144a76c20(&local_100,param_1);
  bVar11 = *(byte *)(local_68 + 0xd0);
  fVar15 = (float)DAT_14c846330;
  fVar16 = DAT_14c846330._4_4_;
  fVar17 = DAT_14c846338;
  fVar18 = DAT_14c84634c;
  fVar19 = DAT_14c846348;
  fVar20 = DAT_14c846344;
  fVar21 = DAT_14c84633c._4_4_;
  fVar22 = (float)DAT_14c846350;
  fVar23 = DAT_14c846350._4_4_;
  fVar24 = DAT_14c846358;
  if (bVar11 == 1) {
    fVar15 = (float)*(double *)(local_68 + 0x90);
    fVar16 = (float)*(double *)(local_68 + 0x98);
    fVar17 = (float)*(double *)(local_68 + 0xa0);
    fVar18 = (float)*(double *)(local_68 + 0x88);
    fVar19 = (float)*(double *)(local_68 + 0x80);
    fVar20 = (float)*(double *)(local_68 + 0x78);
    fVar21 = (float)*(double *)(local_68 + 0x70);
    fVar22 = (float)*(double *)(local_68 + 0xb0);
    fVar23 = (float)*(double *)(local_68 + 0xb8);
    fVar24 = (float)*(double *)(local_68 + 0xc0);
  }
  piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar13 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar13) {
    iVar12 = 0;
    do {
      piVar13 = local_80 + local_78;
      *local_80 = -(uint)bVar11;
      pfVar1 = local_b0 + local_a8;
      *local_b0 = fVar15;
      pfVar2 = local_a0 + local_98;
      *local_a0 = fVar16;
      pfVar3 = local_90 + local_88;
      *local_90 = fVar17;
      pfVar4 = local_f0 + local_e8;
      *local_f0 = fVar21;
      pfVar5 = local_e0 + local_d8;
      *local_e0 = fVar20;
      pfVar6 = local_d0 + local_c8;
      *local_d0 = fVar19;
      pfVar7 = local_c0 + local_b8;
      *local_c0 = fVar18;
      pfVar8 = local_120 + local_118;
      *local_120 = fVar22;
      pfVar9 = local_110 + local_108;
      *local_110 = fVar23;
      pfVar10 = local_100 + local_f8;
      *local_100 = fVar24;
      iVar12 = iVar12 + 1;
      piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar14 = (int *)(param_1 + 0x3c);
      }
      local_120 = pfVar8;
      local_110 = pfVar9;
      local_100 = pfVar10;
      local_f0 = pfVar4;
      local_e0 = pfVar5;
      local_d0 = pfVar6;
      local_c0 = pfVar7;
      local_b0 = pfVar1;
      local_a0 = pfVar2;
      local_90 = pfVar3;
      local_80 = piVar13;
    } while (iVar12 < *piVar14);
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480cf688 FUN_1480cf688 body=148 status=ok
// SIG undefined FUN_1480cf688(void)

void FUN_1480cf688(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 1480cf71c FUN_1480cf71c body=868 status=ok
// SIG undefined FUN_1480cf71c(void)

void FUN_1480cf71c(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  byte bVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_148 [40];
  float *local_120;
  int local_118;
  float *local_110;
  int local_108;
  float *local_100;
  int local_f8;
  float *local_f0;
  int local_e8;
  float *local_e0;
  int local_d8;
  float *local_d0;
  int local_c8;
  float *local_c0;
  int local_b8;
  float *local_b0;
  int local_a8;
  float *local_a0;
  int local_98;
  float *local_90;
  int local_88;
  int *local_80;
  int local_78;
  undefined1 local_70 [8];
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1480cf688(local_70,param_1);
  FUN_140126e42(&local_80,param_1);
  FUN_144a76c20(&local_b0,param_1);
  FUN_144a76c20(&local_a0,param_1);
  FUN_144a76c20(&local_90,param_1);
  FUN_144a76c20(&local_f0,param_1);
  FUN_144a76c20(&local_e0,param_1);
  FUN_144a76c20(&local_d0,param_1);
  FUN_144a76c20(&local_c0,param_1);
  FUN_144a76c20(&local_120,param_1);
  FUN_144a76c20(&local_110,param_1);
  FUN_144a76c20(&local_100,param_1);
  bVar11 = *(byte *)(local_68 + 0x140);
  fVar15 = (float)DAT_14c846330;
  fVar16 = DAT_14c846330._4_4_;
  fVar17 = DAT_14c846338;
  fVar18 = DAT_14c84634c;
  fVar19 = DAT_14c846348;
  fVar20 = DAT_14c846344;
  fVar21 = DAT_14c84633c._4_4_;
  fVar22 = (float)DAT_14c846350;
  fVar23 = DAT_14c846350._4_4_;
  fVar24 = DAT_14c846358;
  if (bVar11 == 1) {
    fVar15 = (float)*(double *)(local_68 + 0x100);
    fVar16 = (float)*(double *)(local_68 + 0x108);
    fVar17 = (float)*(double *)(local_68 + 0x110);
    fVar18 = (float)*(double *)(local_68 + 0xf8);
    fVar19 = (float)*(double *)(local_68 + 0xf0);
    fVar20 = (float)*(double *)(local_68 + 0xe8);
    fVar21 = (float)*(double *)(local_68 + 0xe0);
    fVar22 = (float)*(double *)(local_68 + 0x120);
    fVar23 = (float)*(double *)(local_68 + 0x128);
    fVar24 = (float)*(double *)(local_68 + 0x130);
  }
  piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar13 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar13) {
    iVar12 = 0;
    do {
      piVar13 = local_80 + local_78;
      *local_80 = -(uint)bVar11;
      pfVar1 = local_b0 + local_a8;
      *local_b0 = fVar15;
      pfVar2 = local_a0 + local_98;
      *local_a0 = fVar16;
      pfVar3 = local_90 + local_88;
      *local_90 = fVar17;
      pfVar4 = local_f0 + local_e8;
      *local_f0 = fVar21;
      pfVar5 = local_e0 + local_d8;
      *local_e0 = fVar20;
      pfVar6 = local_d0 + local_c8;
      *local_d0 = fVar19;
      pfVar7 = local_c0 + local_b8;
      *local_c0 = fVar18;
      pfVar8 = local_120 + local_118;
      *local_120 = fVar22;
      pfVar9 = local_110 + local_108;
      *local_110 = fVar23;
      pfVar10 = local_100 + local_f8;
      *local_100 = fVar24;
      iVar12 = iVar12 + 1;
      piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar14 = (int *)(param_1 + 0x3c);
      }
      local_120 = pfVar8;
      local_110 = pfVar9;
      local_100 = pfVar10;
      local_f0 = pfVar4;
      local_e0 = pfVar5;
      local_d0 = pfVar6;
      local_c0 = pfVar7;
      local_b0 = pfVar1;
      local_a0 = pfVar2;
      local_90 = pfVar3;
      local_80 = piVar13;
    } while (iVar12 < *piVar14);
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480cfa81 FUN_1480cfa81 body=331 status=ok
// SIG undefined FUN_1480cfa81(void)

void FUN_1480cfa81(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)*param_1)(param_1,&local_58);
  if ((longlong)local_50 != 0) {
    lVar6 = (longlong)local_50 * 0x28;
    puVar7 = (undefined4 *)(local_58 + 8);
    do {
      uVar4 = FUN_144741050(puVar7);
      cVar3 = FUN_14487ac36(uVar4);
      if (cVar3 != '\0') {
        if ((param_3 & 1) == 0) {
          local_68 = DAT_14cb3af60;
          local_60 = DAT_14cb3af68 + -1;
          if (DAT_14cb3af68 == 0) {
            local_60 = 0;
          }
          cVar3 = FUN_140122458(&local_68,*(undefined8 *)(puVar7 + -2));
          if (cVar3 != '\0') goto LAB_1480cfb79;
        }
        lVar1 = *(longlong *)(param_1[6] + (longlong)(int)puVar7[1] * 8);
        if (lVar1 != 0) {
          local_70 = *puVar7;
          local_78 = *(undefined8 *)(puVar7 + -2);
          pcVar2 = (code *)*param_2;
          plVar5 = (longlong *)param_2[2];
          if ((longlong *)param_2[2] == (longlong *)0x0) {
            plVar5 = param_2 + 4;
          }
          local_68 = lVar1;
          uVar4 = (**(code **)(*plVar5 + 8))();
          (*pcVar2)(uVar4,&local_78,&local_68);
        }
      }
LAB_1480cfb79:
      puVar7 = puVar7 + 10;
      lVar6 = lVar6 + -0x28;
    } while (lVar6 != 0);
  }
  if (*param_2 != 0) {
    plVar5 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480cfbcd FUN_1480cfbcd body=331 status=ok
// SIG undefined FUN_1480cfbcd(void)

void FUN_1480cfbcd(longlong param_1,undefined8 *param_2,longlong *param_3,uint param_4)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  int local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)*param_2)(param_2,&local_58);
  if ((longlong)local_50 != 0) {
    local_70 = param_3 + 4;
    lVar6 = (longlong)local_50 * 0x28;
    puVar7 = (undefined4 *)(local_58 + 8);
    do {
      uVar4 = FUN_144741050(puVar7);
      cVar3 = FUN_14487ac36(uVar4);
      if (cVar3 != '\0') {
        if ((param_4 & 1) == 0) {
          local_68 = DAT_14cb3af60;
          local_60 = DAT_14cb3af68 + -1;
          if (DAT_14cb3af68 == 0) {
            local_60 = 0;
          }
          cVar3 = FUN_140122458(&local_68,*(undefined8 *)(puVar7 + -2));
          if (cVar3 != '\0') goto LAB_1480cfcc5;
        }
        lVar1 = *(longlong *)(param_2[6] + (longlong)(int)puVar7[1] * 8);
        if (lVar1 != 0) {
          *(undefined4 *)(param_1 + 0x10) = *puVar7;
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(puVar7 + -2);
          *(longlong *)(param_1 + 0x18) = lVar1;
          pcVar2 = (code *)*param_3;
          plVar5 = (longlong *)param_3[2];
          if ((longlong *)param_3[2] == (longlong *)0x0) {
            plVar5 = local_70;
          }
          uVar4 = (**(code **)(*plVar5 + 8))();
          (*pcVar2)(uVar4,param_1);
        }
      }
LAB_1480cfcc5:
      puVar7 = puVar7 + 10;
      lVar6 = lVar6 + -0x28;
    } while (lVar6 != 0);
  }
  if (*param_3 != 0) {
    plVar5 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480cfd19 FUN_1480cfd19 body=926 status=ok
// SIG undefined FUN_1480cfd19(void)

void FUN_1480cfd19(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_238 [32];
  longlong local_218;
  int local_210;
  longlong local_208 [2];
  undefined8 local_1f8 [6];
  longlong local_1c8 [2];
  undefined8 local_1b8 [6];
  longlong local_188 [2];
  undefined8 local_178 [6];
  longlong local_148 [2];
  undefined8 local_138 [6];
  longlong local_108 [2];
  undefined8 local_f8 [6];
  longlong local_c8 [2];
  undefined8 local_b8 [6];
  longlong local_88 [2];
  undefined8 local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    plVar5 = *(longlong **)(param_1 + 0x28);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if ((((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 1) != 0)) &&
        (*(longlong *)(lVar2 + 0x28) != 0)) &&
       ((*(longlong *)(lVar2 + 0x10) != 0 &&
        ((*(uint *)(*(longlong *)(lVar2 + 0x10) + 8) >> 0x1e & 1) == 0)))) {
      local_88[0] = *param_2;
      local_78[0] = 0;
      if (local_88[0] != 0) {
        plVar3 = param_2 + 4;
        if ((longlong *)param_2[2] != (longlong *)0x0) {
          plVar3 = (longlong *)param_2[2];
        }
        (**(code **)*plVar3)(plVar3,local_78);
      }
      FUN_1480cfa81(*(undefined8 *)(param_1 + 0x40),local_88,param_3);
      local_c8[0] = *param_2;
      local_b8[0] = 0;
      if (local_c8[0] != 0) {
        plVar3 = param_2 + 4;
        if ((longlong *)param_2[2] != (longlong *)0x0) {
          plVar3 = (longlong *)param_2[2];
        }
        (**(code **)*plVar3)(plVar3,local_b8);
      }
      FUN_1480cfa81(*(longlong *)(lVar2 + 0x430) + 0x38,local_c8,param_3);
      local_108[0] = *param_2;
      local_f8[0] = 0;
      if (local_108[0] != 0) {
        plVar3 = param_2 + 4;
        if ((longlong *)param_2[2] != (longlong *)0x0) {
          plVar3 = (longlong *)param_2[2];
        }
        (**(code **)*plVar3)(plVar3,local_f8);
      }
      FUN_1480cfa81(*(longlong *)(lVar2 + 0x438) + 0x38,local_108,param_3);
      if ((longlong)*(int *)(param_1 + 0x110) != 0) {
        plVar7 = *(longlong **)(param_1 + 0x108);
        plVar6 = plVar7 + (longlong)*(int *)(param_1 + 0x110) * 2;
        plVar3 = param_2 + 4;
        do {
          lVar2 = (**(code **)(*(longlong *)*plVar7 + 0x68))();
          if ((lVar2 != 0) && (*(int *)(*plVar7 + 0xd4) != 4)) {
            local_148[0] = *param_2;
            local_138[0] = 0;
            if (local_148[0] != 0) {
              plVar4 = (longlong *)param_2[2];
              if ((longlong *)param_2[2] == (longlong *)0x0) {
                plVar4 = plVar3;
              }
              (**(code **)*plVar4)(plVar4,local_138);
            }
            FUN_1480cfa81(lVar2 + 0x1d8,local_148,param_3);
            local_188[0] = *param_2;
            local_178[0] = 0;
            if (local_188[0] != 0) {
              plVar4 = (longlong *)param_2[2];
              if ((longlong *)param_2[2] == (longlong *)0x0) {
                plVar4 = plVar3;
              }
              (**(code **)*plVar4)(plVar4,local_178);
            }
            FUN_1480cfa81(lVar2 + 0x480,local_188,param_3);
            FUN_144b356e0(lVar2,&local_218);
            if ((longlong)local_210 != 0) {
              lVar8 = (longlong)local_210 * 0x2a8;
              lVar2 = local_218 + 0x38;
              do {
                local_1c8[0] = *param_2;
                local_1b8[0] = 0;
                if (local_1c8[0] != 0) {
                  plVar4 = (longlong *)param_2[2];
                  if ((longlong *)param_2[2] == (longlong *)0x0) {
                    plVar4 = plVar3;
                  }
                  (**(code **)*plVar4)(plVar4,local_1b8);
                }
                FUN_1480cfa81(lVar2,local_1c8,param_3);
                lVar2 = lVar2 + 0x2a8;
                lVar8 = lVar8 + -0x2a8;
              } while (lVar8 != 0);
            }
            lVar2 = *plVar7;
            if (((*(longlong *)(lVar2 + 0x28) != 0) && (*(char *)(lVar2 + 0xd1) == '\x01')) &&
               (lVar2 = *(longlong *)(lVar2 + 0x18), lVar2 != 0)) {
              local_208[0] = *param_2;
              local_1f8[0] = 0;
              if (local_208[0] != 0) {
                plVar4 = (longlong *)param_2[2];
                if ((longlong *)param_2[2] == (longlong *)0x0) {
                  plVar4 = plVar3;
                }
                (**(code **)*plVar4)(plVar4,local_1f8);
                lVar2 = *(longlong *)(*plVar7 + 0x18);
              }
              FUN_1480cfa81(lVar2 + 0x78,local_208,param_3);
            }
          }
          plVar7 = plVar7 + 2;
        } while (plVar7 != plVar6);
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if (*param_2 != 0) {
    plVar5 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480d00b8 FUN_1480d00b8 body=1016 status=ok
// SIG undefined FUN_1480d00b8(void)

void FUN_1480d00b8(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_258 [32];
  longlong local_238;
  int local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined4 local_218 [2];
  undefined8 local_210;
  longlong local_208 [2];
  undefined8 local_1f8 [6];
  longlong local_1c8 [2];
  undefined8 local_1b8 [6];
  longlong local_188 [2];
  undefined8 local_178 [6];
  longlong local_148 [2];
  undefined8 local_138 [6];
  longlong local_108 [2];
  undefined8 local_f8 [6];
  longlong local_c8 [2];
  undefined8 local_b8 [6];
  longlong local_88 [2];
  undefined8 local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    plVar6 = *(longlong **)(param_1 + 0x28);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    if ((((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 1) != 0)) &&
        (*(longlong *)(lVar2 + 0x28) != 0)) &&
       ((*(longlong *)(lVar2 + 0x10) != 0 &&
        ((*(uint *)(*(longlong *)(lVar2 + 0x10) + 8) >> 0x1e & 1) == 0)))) {
      local_220 = 0;
      local_218[0] = FUN_144830b78(local_218,&DAT_14cb42160);
      local_210 = 0;
      local_228 = *(undefined8 *)(lVar2 + 0x10);
      local_88[0] = *param_2;
      local_78[0] = 0;
      if (local_88[0] != 0) {
        plVar3 = param_2 + 4;
        if ((longlong *)param_2[2] != (longlong *)0x0) {
          plVar3 = (longlong *)param_2[2];
        }
        (**(code **)*plVar3)(plVar3,local_78);
      }
      FUN_1480cfbcd(&local_228,*(undefined8 *)(param_1 + 0x40),local_88,param_3);
      local_c8[0] = *param_2;
      local_b8[0] = 0;
      if (local_c8[0] != 0) {
        plVar3 = param_2 + 4;
        if ((longlong *)param_2[2] != (longlong *)0x0) {
          plVar3 = (longlong *)param_2[2];
        }
        (**(code **)*plVar3)(plVar3,local_b8);
      }
      FUN_1480cfbcd(&local_228,*(longlong *)(lVar2 + 0x430) + 0x38,local_c8,param_3);
      local_108[0] = *param_2;
      local_f8[0] = 0;
      if (local_108[0] != 0) {
        plVar3 = param_2 + 4;
        if ((longlong *)param_2[2] != (longlong *)0x0) {
          plVar3 = (longlong *)param_2[2];
        }
        (**(code **)*plVar3)(plVar3,local_f8);
      }
      FUN_1480cfbcd(&local_228,*(longlong *)(lVar2 + 0x438) + 0x38,local_108,param_3);
      if ((longlong)*(int *)(param_1 + 0x110) != 0) {
        plVar8 = *(longlong **)(param_1 + 0x108);
        plVar5 = plVar8 + (longlong)*(int *)(param_1 + 0x110) * 2;
        plVar3 = param_2 + 4;
        do {
          lVar2 = (**(code **)(*(longlong *)*plVar8 + 0x68))();
          if ((lVar2 != 0) && (*(int *)(*plVar8 + 0xd4) != 4)) {
            local_228 = *(undefined8 *)(*plVar8 + 0x28);
            local_148[0] = *param_2;
            local_138[0] = 0;
            if (local_148[0] != 0) {
              plVar4 = (longlong *)param_2[2];
              if ((longlong *)param_2[2] == (longlong *)0x0) {
                plVar4 = plVar3;
              }
              (**(code **)*plVar4)(plVar4,local_138);
            }
            FUN_1480cfbcd(&local_228,lVar2 + 0x1d8,local_148,param_3);
            local_188[0] = *param_2;
            local_178[0] = 0;
            if (local_188[0] != 0) {
              plVar4 = (longlong *)param_2[2];
              if ((longlong *)param_2[2] == (longlong *)0x0) {
                plVar4 = plVar3;
              }
              (**(code **)*plVar4)(plVar4,local_178);
            }
            FUN_1480cfbcd(&local_228,lVar2 + 0x480,local_188,param_3);
            FUN_144b356e0(lVar2,&local_238);
            if ((longlong)local_230 != 0) {
              lVar2 = (longlong)local_230 * 0x2a8;
              lVar7 = local_238 + 0x38;
              do {
                local_1c8[0] = *param_2;
                local_1b8[0] = 0;
                if (local_1c8[0] != 0) {
                  plVar4 = (longlong *)param_2[2];
                  if ((longlong *)param_2[2] == (longlong *)0x0) {
                    plVar4 = plVar3;
                  }
                  (**(code **)*plVar4)(plVar4,local_1b8);
                }
                FUN_1480cfbcd(&local_228,lVar7,local_1c8,param_3);
                lVar7 = lVar7 + 0x2a8;
                lVar2 = lVar2 + -0x2a8;
              } while (lVar2 != 0);
            }
            lVar2 = *plVar8;
            if (((*(longlong *)(lVar2 + 0x28) != 0) && (*(char *)(lVar2 + 0xd1) == '\x01')) &&
               (lVar2 = *(longlong *)(lVar2 + 0x18), lVar2 != 0)) {
              local_208[0] = *param_2;
              local_1f8[0] = 0;
              if (local_208[0] != 0) {
                plVar4 = (longlong *)param_2[2];
                if ((longlong *)param_2[2] == (longlong *)0x0) {
                  plVar4 = plVar3;
                }
                (**(code **)*plVar4)(plVar4,local_1f8);
                lVar2 = *(longlong *)(*plVar8 + 0x18);
              }
              FUN_1480cfbcd(&local_228,lVar2 + 0x78,local_208,param_3);
            }
          }
          plVar8 = plVar8 + 2;
        } while (plVar8 != plVar5);
      }
    }
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
  }
  if (*param_2 != 0) {
    plVar6 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480d04b6 FUN_1480d04b6 body=75 status=ok
// SIG undefined FUN_1480d04b6(void)

void FUN_1480d04b6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1480d0502(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d0502 FUN_1480d0502 body=138 status=ok
// SIG undefined FUN_1480d0502(void)

void FUN_1480d0502(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  switchD_143c3d4dc::caseD_21();
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar1 = FUN_1448332aa(param_2,&DAT_14ad42464);
    if (iVar1 < 0x27) goto LAB_1480d055c;
  }
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_140077068(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
LAB_1480d055c:
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ad42464);
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d0594 FUN_1480d0594 body=102 status=ok
// SIG undefined FUN_1480d0594(void)

undefined4 FUN_1480d0594(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1414db5a0();
  if ((char)uVar1 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x38);
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(param_1 + 0x38);
      }
    }
    *(longlong *)(param_2 + 0x38) = lVar2;
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    FUN_1447a122a(param_2 + 0x50,param_1 + 0x50);
  }
  return uVar1;
}



// FUNCTION 1480d05fa FUN_1480d05fa body=89 status=ok
// SIG undefined FUN_1480d05fa(void)

undefined4 FUN_1480d05fa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_1481192e4();
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x38);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if ((*(longlong *)(param_2 + 0x38) == lVar1) &&
       (*(longlong *)(param_1 + 0x40) == *(longlong *)(param_2 + 0x40))) {
      return CONCAT31((int3)((uint)*(int *)(param_1 + 0x48) >> 8),
                      *(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48));
    }
  }
  return 0;
}



// FUNCTION 1480d065c FUN_1480d065c body=117 status=ok
// SIG undefined FUN_1480d065c(void)

undefined4 FUN_1480d065c(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  uVar1 = FUN_144830b78(param_2 + 4,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 4) = uVar1;
  param_2[5] = 0;
  param_2[6] = 0;
  FUN_1404e5848(param_2 + 1,param_3 + 0x1e8,param_1 + 0x40);
  return 1;
}



// FUNCTION 1480d06f4 FUN_1480d06f4 body=1149 status=ok
// SIG undefined FUN_1480d06f4(void)

void FUN_1480d06f4(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  byte bVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  float local_6c;
  float fStack_68;
  float local_64;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_2 + 0x48);
  if (*(int *)(lVar4 + 0x18) != *(int *)(lVar4 + 0x44)) {
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar14 = lVar4 + 0x48;
    if (*(longlong *)(lVar4 + 0x50) != 0) {
      lVar14 = *(longlong *)(lVar4 + 0x50);
    }
    iVar10 = *(int *)(lVar14 + (ulonglong)
                               (*(int *)(lVar4 + 0x58) - 1U &
                               (int)lVar5 + (int)((ulonglong)lVar5 >> 0x20) * 0x17) * 4);
    if (iVar10 != -1) {
      do {
        lVar14 = *(longlong *)(lVar4 + 0x10) + (longlong)iVar10 * 0x130;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar10 * 0x130) == lVar5)
        goto LAB_1480d0769;
        iVar10 = *(int *)(lVar14 + 0x120);
      } while (iVar10 != -1);
    }
  }
  lVar14 = 0;
LAB_1480d0769:
  uVar11 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  FUN_1480df128();
  puVar12 = (undefined8 *)((ulonglong)uVar11 + *(longlong *)(param_2 + 0x38));
  *(uint *)(param_2 + 0x50) = DAT_14cb39974 + uVar11;
  if (lVar14 == 0) {
    puVar12[0xc] = 0x800000000;
    puVar12[0xe] = 0;
    puVar12[0xf] = 0;
    puVar12[0x10] = 0;
    puVar12[0x11] = 0;
    puVar12[0x12] = 0;
    puVar12[0x13] = 0;
    puVar12[0x14] = 0;
    puVar12[0x15] = 0;
    puVar12[0x16] = 0;
    puVar12[0x17] = 0;
    puVar12[0x18] = DAT_14c84635c;
    puVar12[0x1c] = DAT_14c9c0de0;
    FUN_144b34a0e(param_2,&local_60);
    *(undefined4 *)(puVar12 + 0x1b) = local_58._0_4_;
    puVar12[0x1a] = local_60;
    bVar13 = 1;
    bVar17 = true;
LAB_1480d0a9c:
    *puVar12 = *(undefined8 *)(DAT_14ca8c008 + 0x48);
    puVar12[1] = *(undefined8 *)(DAT_14ca8c090 + 0x10);
    puVar12[2] = 0;
    puVar12[3] = 0;
    if (bVar13 == 0) goto LAB_1480d0aea;
  }
  else {
    if ((*(longlong *)(lVar14 + 0x10) == 0) || (*(longlong *)(lVar14 + 0x18) == 0)) {
      bVar15 = false;
    }
    else {
      bVar15 = *(longlong *)(lVar14 + 0x20) != 0;
    }
    if ((*(longlong *)(lVar14 + 0x38) == 0) || (*(longlong *)(lVar14 + 0x40) == 0)) {
      bVar16 = false;
    }
    else {
      bVar16 = *(longlong *)(lVar14 + 0x48) != 0;
    }
    if ((*(longlong *)(lVar14 + 0x60) == 0) || (*(longlong *)(lVar14 + 0x68) == 0)) {
      bVar17 = false;
    }
    else {
      bVar17 = *(longlong *)(lVar14 + 0x70) != 0;
    }
    if (bVar15 != false) {
      *puVar12 = *(undefined8 *)(lVar14 + 0x18);
      puVar12[1] = *(undefined8 *)(lVar14 + 0x20);
      uVar6 = *(undefined4 *)(lVar14 + 0x2c);
      uVar7 = *(undefined4 *)(lVar14 + 0x30);
      uVar8 = *(undefined4 *)(lVar14 + 0x34);
      *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(lVar14 + 0x28);
      *(undefined4 *)((longlong)puVar12 + 0x14) = uVar6;
      *(undefined4 *)(puVar12 + 3) = uVar7;
      *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar8;
    }
    if (bVar16 != false) {
      puVar12[4] = *(undefined8 *)(lVar14 + 0x40);
      puVar12[5] = *(undefined8 *)(lVar14 + 0x48);
      uVar6 = *(undefined4 *)(lVar14 + 0x54);
      uVar7 = *(undefined4 *)(lVar14 + 0x58);
      uVar8 = *(undefined4 *)(lVar14 + 0x5c);
      *(undefined4 *)(puVar12 + 6) = *(undefined4 *)(lVar14 + 0x50);
      *(undefined4 *)((longlong)puVar12 + 0x34) = uVar6;
      *(undefined4 *)(puVar12 + 7) = uVar7;
      *(undefined4 *)((longlong)puVar12 + 0x3c) = uVar8;
    }
    uVar11 = 0;
    if (bVar17) {
      puVar12[8] = *(undefined8 *)(lVar14 + 0x68);
      puVar12[9] = *(undefined8 *)(lVar14 + 0x70);
      uVar6 = *(undefined4 *)(lVar14 + 0x7c);
      uVar7 = *(undefined4 *)(lVar14 + 0x80);
      uVar8 = *(undefined4 *)(lVar14 + 0x84);
      *(undefined4 *)(puVar12 + 10) = *(undefined4 *)(lVar14 + 0x78);
      *(undefined4 *)((longlong)puVar12 + 0x54) = uVar6;
      *(undefined4 *)(puVar12 + 0xb) = uVar7;
      *(undefined4 *)((longlong)puVar12 + 0x5c) = uVar8;
      uVar11 = 4;
    }
    FUN_144b34a0e(param_2,&local_6c);
    local_50 = (double)local_64 * 65536.0;
    local_58 = (double)fStack_68 * 65536.0;
    local_60 = (double)local_6c * 65536.0;
    local_88 = *(undefined8 *)(lVar14 + 0xb0);
    local_80 = *(undefined8 *)(lVar14 + 0xb8);
    local_78 = *(undefined8 *)(lVar14 + 0xc0);
    FUN_1481f8bca(&local_60,&local_6c);
    *(uint *)(puVar12 + 0xc) = (uint)bVar15 + (uint)bVar16 * 2 | uVar11;
    *(uint *)((longlong)puVar12 + 100) = (uint)*(byte *)(lVar14 + 0x88);
    uVar9 = *(undefined8 *)(lVar14 + 0x94);
    puVar12[0xe] = *(undefined8 *)(lVar14 + 0x8c);
    puVar12[0xf] = uVar9;
    uVar9 = *(undefined8 *)(lVar14 + 0xa4);
    puVar12[0x10] = *(undefined8 *)(lVar14 + 0x9c);
    puVar12[0x11] = uVar9;
    dVar1 = *(double *)(lVar14 + 200);
    puVar12[0x12] = CONCAT44(fStack_68,local_6c);
    *(float *)(puVar12 + 0x13) = local_64;
    *(float *)((longlong)puVar12 + 0x9c) = (float)dVar1;
    dVar1 = *(double *)(lVar14 + 0xe8);
    dVar2 = *(double *)(lVar14 + 0xe0);
    dVar3 = *(double *)(lVar14 + 0xd8);
    *(float *)(puVar12 + 0x14) = (float)*(double *)(lVar14 + 0xd0);
    *(float *)((longlong)puVar12 + 0xa4) = (float)dVar3;
    *(float *)(puVar12 + 0x15) = (float)dVar2;
    *(float *)((longlong)puVar12 + 0xac) = (float)dVar1;
    dVar1 = *(double *)(lVar14 + 0x108);
    dVar2 = *(double *)(lVar14 + 0x100);
    dVar3 = *(double *)(lVar14 + 0xf8);
    *(float *)(puVar12 + 0x16) = (float)*(double *)(lVar14 + 0xf0);
    *(float *)((longlong)puVar12 + 0xb4) = (float)dVar3;
    *(float *)(puVar12 + 0x17) = (float)dVar2;
    *(float *)((longlong)puVar12 + 0xbc) = (float)dVar1;
    puVar12[0x18] = *(undefined8 *)(lVar14 + 0x110);
    puVar12[0x1c] = *(undefined8 *)(lVar14 + 0x118);
    bVar17 = (bool)(bVar17 ^ 1);
    FUN_144b34a0e(param_2,&local_60);
    *(undefined4 *)(puVar12 + 0x1b) = local_58._0_4_;
    puVar12[0x1a] = local_60;
    if (bVar15 == false) {
      bVar13 = bVar16 ^ 1;
      goto LAB_1480d0a9c;
    }
    if (bVar16 != false) goto LAB_1480d0aea;
  }
  puVar12[4] = *(undefined8 *)(DAT_14ca8c008 + 0x48);
  puVar12[5] = *(undefined8 *)(DAT_14ca8c090 + 0x10);
  puVar12[6] = 0;
  puVar12[7] = 0;
LAB_1480d0aea:
  if (bVar17) {
    puVar12[8] = *(undefined8 *)(DAT_14ca8c008 + 0x48);
    puVar12[9] = *(undefined8 *)(DAT_14ca8c090 + 0x10);
    puVar12[10] = 0;
    puVar12[0xb] = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480d0b72 FUN_1480d0b72 body=81 status=ok
// SIG undefined FUN_1480d0b72(void)

undefined8 *
FUN_1480d0b72(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &PTR_LAB_14ad8d778;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_4;
  FUN_1481fa3d8(param_1 + 2,8,8);
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_14ad8d768;
  param_1[9] = param_2;
  return param_1;
}



// FUNCTION 1480d0bc4 FUN_1480d0bc4 body=61 status=ok
// SIG undefined FUN_1480d0bc4(void)

undefined8 * FUN_1480d0bc4(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = &PTR_LAB_14ad8d778;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_3;
  FUN_1481fa3d8(param_1 + 2,8,8);
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 1480d0c02 FUN_1480d0c02 body=123 status=ok
// SIG undefined FUN_1480d0c02(void)

undefined8 FUN_1480d0c02(undefined8 param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14479d2ce();
  if ((((plVar1 != (longlong *)0x0) &&
       (lVar2 = (**(code **)(*plVar1 + 800))(plVar1,param_2), lVar2 != 0)) &&
      ((*(byte *)(lVar2 + 0xd0) & 4) != 0)) &&
     ((plVar1 = (longlong *)(**(code **)(*plVar1 + 0x388))(plVar1),
      -1 < (int)param_2 && plVar1 != (longlong *)0x0 && ((int)param_2 < (int)plVar1[1])))) {
    lVar2 = *(longlong *)(*plVar1 + (ulonglong)param_2 * 8);
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar2 != 0 && param_3 < *(int *)(lVar2 + 0xa8));
  }
  return 0;
}



// FUNCTION 1480d0c7e FUN_1480d0c7e body=48 status=ok
// SIG undefined FUN_1480d0c7e(void)

bool FUN_1480d0c7e(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 8) == param_3) && (cVar1 = FUN_14794e75a(param_1 + 0x48), cVar1 != '\0'))
  {
    return *(int *)(param_1 + 0xc) == param_4;
  }
  return false;
}



// FUNCTION 1480d0cae FUN_1480d0cae body=95 status=ok
// SIG undefined FUN_1480d0cae(void)

longlong FUN_1480d0cae(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_14479d2ce(param_1 + 0x48);
  if (plVar4 != (longlong *)0x0) {
    iVar1 = *(int *)(param_1 + 0xc);
    iVar2 = *(int *)(param_1 + 8);
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x388))(plVar4);
    if ((plVar4 != (longlong *)0x0 && -1 < (longlong)iVar2) && (iVar2 < (int)plVar4[1])) {
      lVar3 = *(longlong *)(*plVar4 + (longlong)iVar2 * 8);
      if (*(int *)(lVar3 + 0xa8) <= iVar1) {
        return 0;
      }
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 1480d0d0e FUN_1480d0d0e body=371 status=ok
// SIG undefined FUN_1480d0d0e(void)

undefined4 FUN_1480d0d0e(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  undefined8 *local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = FUN_1480d0cae();
  uVar1 = 0xffffffff;
  if (lVar2 != 0) {
    local_d0 = param_1 + 0x10;
    local_84 = param_3;
    local_78 = param_2;
    local_60 = param_4;
    local_58 = lVar2;
    if (*(char *)(lVar2 + 0xb0) == '\x01') {
      local_c8 = &local_58;
      local_50 = *(undefined8 *)(lVar2 + 0x28);
      local_c0 = *(undefined4 *)(param_1 + 0xc);
      local_80 = &local_d0;
      local_70 = &local_84;
      local_68 = &local_88;
      local_88 = 0xffffffff;
      local_b8 = *param_2;
      uStack_b0 = param_2[1];
      local_a8 = *(undefined4 *)param_2;
      uStack_a4 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_a0 = *(undefined4 *)(param_2 + 1);
      uStack_9c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_98 = 1;
      FUN_1480e00f6(*(undefined8 *)(param_1 + 0x18));
      uVar1 = local_88;
    }
    else {
      local_c8 = &local_58;
      local_50 = *(undefined8 *)(lVar2 + 0x28);
      local_c0 = *(undefined4 *)(param_1 + 0xc);
      local_80 = &local_d0;
      local_70 = &local_84;
      local_68 = &local_88;
      local_88 = 0xffffffff;
      local_b8 = *param_2;
      uStack_b0 = param_2[1];
      local_a8 = *(undefined4 *)param_2;
      uStack_a4 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_a0 = *(undefined4 *)(param_2 + 1);
      uStack_9c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_98 = 1;
      FUN_1480e0344(*(undefined8 *)(param_1 + 0x18));
      uVar1 = local_88;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1480d0e82 FUN_1480d0e82 body=193 status=ok
// SIG undefined FUN_1480d0e82(void)

undefined8 FUN_1480d0e82(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_1480d0cae();
  uVar2 = 0xffffffff;
  if (lVar1 != 0) {
    local_50 = param_1 + 0x10;
    local_38 = lVar1;
    if (*(char *)(lVar1 + 0xb0) == '\x01') {
      local_48 = &local_38;
      local_30 = *(undefined8 *)(lVar1 + 0x28);
      local_40 = *(undefined4 *)(param_1 + 0xc);
      uVar2 = FUN_1480d0f44(&local_50,param_2,param_3);
    }
    else {
      local_48 = &local_38;
      local_30 = *(undefined8 *)(lVar1 + 0x28);
      local_40 = *(undefined4 *)(param_1 + 0xc);
      uVar2 = FUN_1480d107e(&local_50,param_2,param_3);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d0f44 FUN_1480d0f44 body=313 status=ok
// SIG undefined FUN_1480d0f44(void)

undefined4 FUN_1480d0f44(longlong *param_1,double *param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined4 local_74;
  longlong *local_70;
  double *local_68;
  double *local_60;
  undefined8 local_58;
  double *local_50;
  undefined4 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_48 = &local_74;
  local_74 = 0xffffffff;
  dVar1 = param_2[3];
  dVar2 = param_2[2];
  local_80 = 1.0 / (dVar1 - param_2[1]);
  local_88 = 1.0 / (dVar2 - *param_2);
  local_68 = &local_88;
  local_90 = 1.0 - local_80 * dVar1;
  local_98 = 1.0 - local_88 * dVar2;
  local_60 = &local_98;
  local_a8 = (dVar1 + param_2[1]) * 0.5;
  local_b0 = (dVar2 + *param_2) * 0.5;
  local_50 = &local_b0;
  local_a0 = 0;
  local_70 = param_1;
  local_58 = param_3;
  FUN_1480e0592(*(undefined8 *)(*param_1 + 8),*param_1,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return local_74;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d107e FUN_1480d107e body=313 status=ok
// SIG undefined FUN_1480d107e(void)

undefined4 FUN_1480d107e(longlong *param_1,double *param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined4 local_74;
  longlong *local_70;
  double *local_68;
  double *local_60;
  undefined8 local_58;
  double *local_50;
  undefined4 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_48 = &local_74;
  local_74 = 0xffffffff;
  dVar1 = param_2[3];
  dVar2 = param_2[2];
  local_80 = 1.0 / (dVar1 - param_2[1]);
  local_88 = 1.0 / (dVar2 - *param_2);
  local_68 = &local_88;
  local_90 = 1.0 - local_80 * dVar1;
  local_98 = 1.0 - local_88 * dVar2;
  local_60 = &local_98;
  local_a8 = (dVar1 + param_2[1]) * 0.5;
  local_b0 = (dVar2 + *param_2) * 0.5;
  local_50 = &local_b0;
  local_a0 = 0;
  local_70 = param_1;
  local_58 = param_3;
  FUN_1480e0c20(*(undefined8 *)(*param_1 + 8),*param_1,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return local_74;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d11b8 FUN_1480d11b8 body=156 status=ok
// SIG undefined FUN_1480d11b8(void)

void FUN_1480d11b8(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined4 local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_1480d0cae();
  if (lVar1 != 0) {
    local_30 = param_1 + 0x10;
    local_28 = lVar1;
    if (*(char *)(lVar1 + 0xb0) == '\x01') {
      local_40 = &local_28;
      local_20 = *(undefined8 *)(lVar1 + 0x28);
      local_38 = *(undefined4 *)(param_1 + 0xc);
      FUN_1480d1256();
    }
    else {
      local_40 = &local_28;
      local_20 = *(undefined8 *)(lVar1 + 0x28);
      local_38 = *(undefined4 *)(param_1 + 0xc);
      FUN_1480d154a();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d1256 FUN_1480d1256 body=755 status=ok
// SIG undefined FUN_1480d1256(void)

void FUN_1480d1256(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 local_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  undefined1 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)local_138;
  iVar8 = (**(code **)(**(longlong **)(*param_1 + 8) + 0x50))();
  if (2 < iVar8) {
    iVar12 = 0;
    do {
      plVar2 = (longlong *)*param_1;
      uVar1 = *(uint *)(param_1 + 1);
      plVar3 = (longlong *)plVar2[1];
      uVar9 = (**(code **)(*plVar3 + 0x60))(plVar3,iVar12 * 3);
      lVar10 = *plVar2;
      lVar10 = (ulonglong)uVar9 * (ulonglong)*(uint *)(lVar10 + 0xa8) * 8 +
               *(longlong *)(lVar10 + 0x98);
      dVar5 = (double)*(float *)(lVar10 + 4 + (ulonglong)uVar1 * 8);
      dVar4 = (double)*(float *)(lVar10 + (ulonglong)uVar1 * 8);
      plVar2 = (longlong *)*param_1;
      uVar1 = *(uint *)(param_1 + 1);
      plVar3 = (longlong *)plVar2[1];
      local_e8 = dVar4;
      uStack_e0 = dVar5;
      uVar9 = (**(code **)(*plVar3 + 0x60))(plVar3,iVar12 * 3 + 1);
      lVar10 = *plVar2;
      lVar10 = (ulonglong)uVar9 * (ulonglong)*(uint *)(lVar10 + 0xa8) * 8 +
               *(longlong *)(lVar10 + 0x98);
      dVar6 = (double)*(float *)(lVar10 + 4 + (ulonglong)uVar1 * 8);
      dVar7 = (double)*(float *)(lVar10 + (ulonglong)uVar1 * 8);
      plVar2 = (longlong *)*param_1;
      uVar1 = *(uint *)(param_1 + 1);
      plVar3 = (longlong *)plVar2[1];
      local_d8 = dVar7;
      local_d0 = dVar6;
      uVar9 = (**(code **)(*plVar3 + 0x60))(plVar3,iVar12 * 3 + 2);
      lVar10 = *plVar2;
      lVar10 = (ulonglong)uVar9 * (ulonglong)*(uint *)(lVar10 + 0xa8) * 8 +
               *(longlong *)(lVar10 + 0x98);
      local_c0 = (double)*(float *)(lVar10 + 4 + (ulonglong)uVar1 * 8);
      local_c8 = (double)*(float *)(lVar10 + (ulonglong)uVar1 * 8);
      if (9.99999993922529e-09 <=
          ABS((local_c0 - dVar5) * (dVar7 - dVar4) - (local_c8 - dVar4) * (dVar6 - dVar5))) {
        local_108 = 0.0;
        dStack_100 = 0.0;
        local_118 = 0.0;
        uStack_110 = 0.0;
        local_f8 = 0;
        lVar10 = 0;
        bVar11 = false;
        do {
          if (bVar11) {
            dVar4 = *(double *)((longlong)&local_e8 + lVar10);
            dVar5 = *(double *)((longlong)&uStack_e0 + lVar10);
            if (dVar4 <= local_118) {
              local_118 = dVar4;
            }
            if (dVar5 <= uStack_110) {
              uStack_110 = dVar5;
            }
            if (local_108 <= dVar4) {
              local_108 = dVar4;
            }
            uVar13 = SUB84(dStack_100,0);
            uVar14 = (undefined4)((ulonglong)dStack_100 >> 0x20);
            if (dStack_100 <= dVar5) {
              uVar13 = SUB84(dVar5,0);
              uVar14 = (undefined4)((ulonglong)dVar5 >> 0x20);
            }
            dStack_100 = (double)CONCAT44(uVar14,uVar13);
          }
          else {
            local_108 = *(double *)((longlong)&local_e8 + lVar10);
            dStack_100 = *(double *)((longlong)&uStack_e0 + lVar10);
            local_118 = (double)CONCAT44(*(undefined4 *)((longlong)&local_e8 + lVar10 + 4),
                                         *(undefined4 *)((longlong)&local_e8 + lVar10));
            uStack_110 = (double)CONCAT44(*(undefined4 *)((longlong)&uStack_e0 + lVar10 + 4),
                                          *(undefined4 *)((longlong)&uStack_e0 + lVar10));
            local_f8 = 1;
          }
          lVar10 = lVar10 + 0x10;
          bVar11 = true;
        } while (lVar10 != 0x30);
        FUN_1481fa4a8(param_1[2],iVar12,&local_118);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar8 / 3);
  }
  if ((local_b0 ^ (ulonglong)local_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d154a FUN_1480d154a body=1332 status=ok
// SIG undefined FUN_1480d154a(void)

void FUN_1480d154a(longlong *param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  bool bVar13;
  uint uVar14;
  float fVar15;
  longlong lVar16;
  undefined1 local_168 [40];
  ulonglong local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  undefined1 local_118;
  double local_108 [7];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)local_168;
  iVar10 = (**(code **)(**(longlong **)(*param_1 + 8) + 0x50))();
  if (2 < iVar10) {
    local_140 = (ulonglong)(uint)(iVar10 / 3);
    iVar10 = 0;
    do {
      plVar3 = (longlong *)*param_1;
      uVar14 = *(uint *)(param_1 + 1);
      iVar9 = iVar10 * 3;
      plVar4 = (longlong *)plVar3[1];
      uVar11 = (**(code **)(*plVar4 + 0x60))(plVar4,iVar9);
      lVar16 = *plVar3;
      lVar16 = (ulonglong)uVar11 * (ulonglong)*(uint *)(lVar16 + 0xa8) * 4 +
               *(longlong *)(lVar16 + 0x98);
      uVar1 = *(ushort *)(lVar16 + 2 + (ulonglong)uVar14 * 4);
      uVar11 = (uint)uVar1 << 0xd;
      if ((uVar11 & 0xf800000) == 0xf800000) {
        fVar12 = (float)(uVar11 | 0x70000000);
      }
      else if ((uVar11 & 0xf800000) == 0) {
        fVar12 = (float)(uVar11 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar12 = (float)((uVar11 & 0xfffe000) + 0x38000000);
      }
      uVar2 = *(ushort *)(lVar16 + (ulonglong)uVar14 * 4);
      uVar14 = (uint)uVar2 << 0xd;
      if ((uVar14 & 0xf800000) == 0xf800000) {
        fVar15 = (float)(uVar14 | 0x70000000);
      }
      else if ((uVar14 & 0xf800000) == 0) {
        fVar15 = (float)(uVar14 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar15 = (float)((uVar14 & 0xfffe000) + 0x38000000);
      }
      dVar6 = (double)(float)((uint)fVar12 | (int)(short)uVar1 & 0x80000000U);
      dVar5 = (double)(float)((int)(short)uVar2 & 0x80000000U | (uint)fVar15);
      plVar3 = (longlong *)*param_1;
      uVar14 = *(uint *)(param_1 + 1);
      plVar4 = (longlong *)plVar3[1];
      local_108[0] = dVar5;
      local_108[1] = dVar6;
      uVar11 = (**(code **)(*plVar4 + 0x60))(plVar4,iVar9 + 1);
      lVar16 = *plVar3;
      lVar16 = (ulonglong)uVar11 * (ulonglong)*(uint *)(lVar16 + 0xa8) * 4 +
               *(longlong *)(lVar16 + 0x98);
      uVar1 = *(ushort *)(lVar16 + 2 + (ulonglong)uVar14 * 4);
      uVar11 = (uint)uVar1 << 0xd;
      if ((uVar11 & 0xf800000) == 0xf800000) {
        fVar12 = (float)(uVar11 | 0x70000000);
      }
      else if ((uVar11 & 0xf800000) == 0) {
        fVar12 = (float)(uVar11 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar12 = (float)((uVar11 & 0xfffe000) + 0x38000000);
      }
      uVar2 = *(ushort *)(lVar16 + (ulonglong)uVar14 * 4);
      uVar14 = (uint)uVar2 << 0xd;
      if ((uVar14 & 0xf800000) == 0xf800000) {
        fVar15 = (float)(uVar14 | 0x70000000);
      }
      else if ((uVar14 & 0xf800000) == 0) {
        fVar15 = (float)(uVar14 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar15 = (float)((uVar14 & 0xfffe000) + 0x38000000);
      }
      dVar7 = (double)(float)((uint)fVar12 | (int)(short)uVar1 & 0x80000000U);
      dVar8 = (double)(float)((int)(short)uVar2 & 0x80000000U | (uint)fVar15);
      plVar3 = (longlong *)*param_1;
      uVar14 = *(uint *)(param_1 + 1);
      plVar4 = (longlong *)plVar3[1];
      local_108[2] = dVar8;
      local_108[3] = dVar7;
      uVar11 = (**(code **)(*plVar4 + 0x60))(plVar4,iVar9 + 2);
      lVar16 = *plVar3;
      lVar16 = (ulonglong)uVar11 * (ulonglong)*(uint *)(lVar16 + 0xa8) * 4 +
               *(longlong *)(lVar16 + 0x98);
      uVar1 = *(ushort *)(lVar16 + 2 + (ulonglong)uVar14 * 4);
      uVar11 = (uint)uVar1 << 0xd;
      if ((uVar11 & 0xf800000) == 0xf800000) {
        fVar12 = (float)(uVar11 | 0x70000000);
      }
      else if ((uVar11 & 0xf800000) == 0) {
        fVar12 = (float)(uVar11 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar12 = (float)((uVar11 & 0xfffe000) + 0x38000000);
      }
      uVar2 = *(ushort *)(lVar16 + (ulonglong)uVar14 * 4);
      uVar14 = (uint)uVar2 << 0xd;
      if ((uVar14 & 0xf800000) == 0xf800000) {
        fVar15 = (float)(uVar14 | 0x70000000);
      }
      else if ((uVar14 & 0xf800000) == 0) {
        fVar15 = (float)(uVar14 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar15 = (float)((uVar14 & 0xfffe000) + 0x38000000);
      }
      local_108[5] = (double)(float)((uint)fVar12 | (int)(short)uVar1 & 0x80000000U);
      local_108[4] = (double)(float)((int)(short)uVar2 & 0x80000000U | (uint)fVar15);
      if (9.99999993922529e-09 <=
          ABS((local_108[5] - dVar6) * (dVar8 - dVar5) - (local_108[4] - dVar5) * (dVar7 - dVar6)))
      {
        local_128 = 0.0;
        dStack_120 = 0.0;
        local_138 = 0.0;
        dStack_130 = 0.0;
        local_118 = 0;
        lVar16 = 0;
        bVar13 = false;
        do {
          if (bVar13) {
            dVar5 = *(double *)((longlong)local_108 + lVar16);
            dVar6 = *(double *)((longlong)local_108 + lVar16 + 8);
            if (dVar5 <= local_138) {
              local_138 = dVar5;
            }
            if (dVar6 <= dStack_130) {
              dStack_130 = dVar6;
            }
            if (local_128 <= dVar5) {
              local_128 = dVar5;
            }
            if (dStack_120 <= dVar6) {
              dStack_120 = dVar6;
            }
          }
          else {
            local_128 = *(double *)((longlong)local_108 + lVar16);
            local_138 = *(double *)((longlong)local_108 + lVar16);
            dStack_130 = *(double *)((longlong)local_108 + lVar16 + 8);
            local_118 = 1;
            dStack_120 = *(double *)((longlong)local_108 + lVar16 + 8);
          }
          lVar16 = lVar16 + 0x10;
          bVar13 = true;
        } while (lVar16 != 0x30);
        FUN_1481fa4a8(param_1[2],iVar10,&local_138);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != (int)local_140);
  }
  if ((local_d0 ^ (ulonglong)local_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480d1a80 FUN_1480d1a80 body=60 status=ok
// SIG undefined FUN_1480d1a80(void)

void FUN_1480d1a80(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_1480da4cb(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1480d1abc FUN_1480d1abc body=239 status=ok
// SIG undefined FUN_1480d1abc(void)

void FUN_1480d1abc(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_c0 [168];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)puVar2 + 0xc) = 0x105;
  *puVar2 = &PTR_FUN_14ad96650;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[2] = &PTR_FUN_14a3d4750;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  puVar3 = puVar1;
  if ((puVar1 != puVar2) &&
     (*(undefined8 **)(param_1 + 0x38) = puVar2, puVar3 = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
    puVar3 = *(undefined8 **)(param_1 + 0x38);
  }
  local_c8 = 0;
  FUN_1481de5ba(local_c0,puVar3 + 2,0,0);
  FUN_1481fa6f2(param_1 + 0x10,local_c0);
  FUN_144a7fc42(local_c0);
  FUN_140308182(*(undefined8 *)(param_1 + 0x38),0);
  if ((local_18 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480d1bac FUN_1480d1bac body=17 status=ok
// SIG undefined FUN_1480d1bac(void)

bool FUN_1480d1bac(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x40)) {
    return false;
  }
  return *(int *)(param_1 + 0x44) < 1;
}



// FUNCTION 1480d1bbe FUN_1480d1bbe body=76 status=ok
// SIG undefined FUN_1480d1bbe(void)

void FUN_1480d1bbe(longlong param_1,ushort param_2)

{
  int *piVar1;
  
  if (((param_2 & 1) != 0) || ((param_2 >> 8 & 1) != 0)) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x40);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_1481fa6a2(param_1 + 0x10);
    }
  }
  if ((param_2 >> 8 & 1) != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x44);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_14392e120(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1480d1c0a FUN_1480d1c0a body=9 status=ok
// SIG undefined FUN_1480d1c0a(void)

bool FUN_1480d1c0a(longlong param_1)

{
  return *(longlong *)(param_1 + 8) != 0;
}



// FUNCTION 1480d1c24 FUN_1480d1c24 body=75 status=ok
// SIG undefined FUN_1480d1c24(void)

bool FUN_1480d1c24(undefined8 param_1,longlong *param_2)

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
      goto LAB_1480d1c5d;
    }
  }
  lVar2 = 0;
LAB_1480d1c5d:
  lVar1 = FUN_145b6c02a();
  return lVar2 == lVar1;
}



// FUNCTION 1480d1c75 FUN_1480d1c75 body=174 status=ok
// SIG undefined FUN_1480d1c75(void)

undefined8 FUN_1480d1c75(undefined8 param_1)

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
  uVar1 = FUN_145b6c02a();
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



// FUNCTION 1480d1d3a FUN_1480d1d3a body=202 status=ok
// SIG undefined FUN_1480d1d3a(void)

void FUN_1480d1d3a(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if ((longlong)*(int *)(param_1 + -8) != 0) {
    plVar9 = *(longlong **)(param_1 + -0x10);
    lVar8 = (longlong)*(int *)(param_1 + -8) << 3;
    do {
      lVar3 = *(longlong *)(*plVar9 + 0x10);
      lVar7 = FUN_145b6c02a();
      if (lVar3 == lVar7) {
        if (plVar9 == (longlong *)0x0) {
          return;
        }
        lVar8 = *plVar9;
        uVar1 = *(undefined2 *)(lVar8 + 0x104);
        uVar2 = *(undefined4 *)(lVar8 + 0x100);
        uVar4 = *(undefined8 *)(lVar8 + 0xf8);
        uVar5 = *(undefined8 *)(lVar8 + 0x98);
        uVar6 = *(undefined8 *)(lVar8 + 0xa0);
        FUN_140a31f5e(param_2 + 0x30);
        *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 3;
        *(undefined ***)(param_2 + 0x30) = &PTR_FUN_14ad8ea20;
        *(uint *)(param_2 + 0x40) = (uint)((char)uVar5 != '\x01') + (int)((ulonglong)uVar5 >> 0x20);
        *(uint *)(param_2 + 0x44) = (uint)((char)uVar6 == '\x01') + (int)((ulonglong)uVar6 >> 0x20);
        *(undefined8 *)(param_2 + 0x48) = uVar4;
        *(undefined4 *)(param_2 + 0x50) = uVar2;
        *(undefined2 *)(param_2 + 0x54) = uVar1;
        *(undefined1 *)(param_2 + 0x38) = 8;
        return;
      }
      plVar9 = plVar9 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 1480d1e04 FUN_1480d1e04 body=158 status=ok
// SIG undefined FUN_1480d1e04(void)

undefined8 FUN_1480d1e04(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14758501e(&local_68,param_1);
  local_40 = &PTR_FUN_14a475c08;
  local_30 = local_68;
  uStack_2c = uStack_64;
  uStack_28 = uStack_60;
  uStack_24 = uStack_5c;
  local_20 = local_58;
  local_50 = 2;
  local_48 = 2;
  local_78 = 0;
  local_38 = param_2;
  FUN_1475569d4(param_2,&local_50,&local_40,0xffffffff);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d1eae FUN_1480d1eae body=132 status=ok
// SIG undefined FUN_1480d1eae(void)

void FUN_1480d1eae(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x100);
  *(uint *)(param_1 + 0x100) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
    return;
  }
  return;
}



// FUNCTION 1480d1f98 FUN_1480d1f98 body=106 status=ok
// SIG undefined FUN_1480d1f98(void)

void FUN_1480d1f98(longlong param_1,longlong param_2)

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
  FUN_1475914c0(param_1 + 0xf8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d2004 FUN_1480d2004 body=95 status=ok
// SIG undefined FUN_1480d2004(void)

void FUN_1480d2004(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x100);
  }
  *(int *)(param_1 + 0x100) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0xf8);
  return;
}



// FUNCTION 1480d2064 FUN_1480d2064 body=211 status=ok
// SIG undefined FUN_1480d2064(void)

undefined8 * FUN_1480d2064(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  void *_Src;
  size_t _Size;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  local_50 = *(undefined4 *)(param_2 + 1);
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_2 + 3);
  _Size = (size_t)local_40;
  _Src = (void *)param_2[2];
  if (_Size == 0) {
    local_3c = 0;
  }
  else {
    FUN_1447a127e(&local_48,local_40,0);
    memcpy(local_48,_Src,_Size);
  }
  FUN_1480d2138(param_1,&local_58);
  *param_1 = &PTR_FUN_14ad8f040;
  FUN_1475b14f8(param_1 + 8,param_3);
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d2138 FUN_1480d2138 body=141 status=ok
// SIG undefined FUN_1480d2138(void)

undefined8 * FUN_1480d2138(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14ad909b0;
  param_1[4] = *param_2;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 1);
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],_Src,(longlong)iVar1);
  }
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1480d21c6 FUN_1480d21c6 body=128 status=ok
// SIG undefined FUN_1480d21c6(void)

void FUN_1480d21c6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 auStack_58 [47];
  byte local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)*param_4;
  cVar3 = FUN_140aef73c(param_1 + 0x40,param_2,&local_29);
  iVar2 = *(int *)(param_5 + 1);
  *(int *)(param_5 + 1) = iVar2 + 4;
  if ((uint)(*(int *)((longlong)param_5 + 0xc) - iVar2) < 4) {
    FUN_1447403be(param_5);
  }
  if (cVar3 != '\0') {
    iVar1 = -(uint)local_29;
  }
  *(int *)*param_5 = iVar1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d224c FUN_1480d224c body=75 status=ok
// SIG undefined FUN_1480d224c(void)

bool FUN_1480d224c(undefined8 param_1,longlong *param_2)

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
      goto LAB_1480d2280;
    }
  }
  lVar2 = 0;
LAB_1480d2280:
  lVar1 = FUN_140d48730();
  return lVar2 == lVar1;
}



// FUNCTION 1480d2298 FUN_1480d2298 body=40 status=ok
// SIG undefined FUN_1480d2298(void)

void FUN_1480d2298(undefined8 param_1)

{
  FUN_1476bb5f0(param_1,0,8,0,0,0);
  return;
}



// FUNCTION 1480d22c0 FUN_1480d22c0 body=110 status=ok
// SIG undefined FUN_1480d22c0(void)

void FUN_1480d22c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_140d48730();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) && (*(int *)(param_3 + 1) == 4)) {
      uVar3 = FUN_14757509a(param_2);
      iVar1 = *(int *)*param_3;
      lVar2 = FUN_1480e152c(uVar3,param_2 + 0x100);
      if (lVar2 != 0) {
        *(undefined1 *)(lVar2 + 0x69) = 1;
        *(bool *)(lVar2 + 0x68) = iVar1 != 0;
      }
    }
  }
  return;
}



// FUNCTION 1480d232e FUN_1480d232e body=329 status=ok
// SIG undefined FUN_1480d232e(void)

longlong FUN_1480d232e(longlong param_1,longlong param_2,longlong param_3)

{
  void *_Src;
  longlong lVar1;
  size_t _Size;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined4 local_190;
  void *local_188;
  int local_180;
  undefined4 local_17c;
  undefined **local_178 [6];
  longlong local_148;
  undefined1 local_138 [264];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (param_3 != 0) {
    lVar1 = FUN_140d48730();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_198 = *(undefined8 *)(param_1 + -0x20);
      local_190 = *(undefined4 *)(param_1 + -0x18);
      local_188 = (void *)0x0;
      local_180 = *(int *)(param_1 + -8);
      _Size = (size_t)local_180;
      _Src = *(void **)(param_1 + -0x10);
      if (_Size == 0) {
        local_17c = 0;
      }
      else {
        FUN_1447a127e(&local_188,local_180,0);
        memcpy(local_188,_Src,_Size);
      }
      FUN_1480d2064(local_178,&local_198,param_3 + 0x100);
      *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfe;
      FUN_1480e15b0(param_2,local_178);
      local_178[0] = &PTR_FUN_14ad8f040;
      FUN_140bb7e7c(local_138);
      local_178[0] = &PTR_FUN_14ad909b0;
      if (local_148 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1480d238c;
    }
  }
  *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfc | 2;
LAB_1480d238c:
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d2478 FUN_1480d2478 body=294 status=ok
// SIG undefined FUN_1480d2478(void)

undefined8 *
FUN_1480d2478(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  void *_Src;
  size_t _Size;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = *param_2;
  local_60 = *(undefined4 *)(param_2 + 1);
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_2 + 3);
  _Size = (size_t)local_50;
  _Src = (void *)param_2[2];
  if (_Size == 0) {
    local_4c = 0;
  }
  else {
    FUN_1447a127e(&local_58,local_50,0);
    memcpy(local_58,_Src,_Size);
  }
  FUN_1480d2138(param_1,&local_68);
  *param_1 = &PTR_FUN_14ad8f770;
  FUN_140737604(param_1 + 8,param_3);
  FUN_140737604(param_1 + 0x2a,param_4);
  FUN_140737604(param_1 + 0x4c,param_5);
  FUN_140737604(param_1 + 0x6e,param_6);
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d25a4 FUN_1480d25a4 body=75 status=ok
// SIG undefined FUN_1480d25a4(void)

bool FUN_1480d25a4(undefined8 param_1,longlong *param_2)

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
      goto LAB_1480d25d8;
    }
  }
  lVar2 = 0;
LAB_1480d25d8:
  lVar1 = FUN_145b3440a();
  return lVar2 == lVar1;
}



// FUNCTION 1480d25f0 FUN_1480d25f0 body=40 status=ok
// SIG undefined FUN_1480d25f0(void)

void FUN_1480d25f0(undefined8 param_1)

{
  FUN_1476bcfb6(param_1,0,8,0,0,0);
  return;
}



// FUNCTION 1480d2618 FUN_1480d2618 body=271 status=ok
// SIG undefined FUN_1480d2618(void)

void FUN_1480d2618(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  if (param_2 != 0) {
    lVar6 = FUN_145b3440a();
    if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) && (*(int *)(param_3 + 1) == 0x10)
       ) {
      puVar5 = (undefined4 *)*param_3;
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      uVar3 = puVar5[2];
      uVar4 = puVar5[3];
      uVar7 = FUN_14757509a(param_2);
      lVar6 = FUN_1480e1672(uVar7,param_2 + 0x100);
      if (lVar6 != 0) {
        *(undefined1 *)(lVar6 + 0x7c) = 1;
        *(undefined4 *)(lVar6 + 0x78) = uVar1;
      }
      lVar6 = FUN_1480e1672(uVar7,param_2 + 0x210);
      if (lVar6 != 0) {
        *(undefined1 *)(lVar6 + 0x7c) = 1;
        *(undefined4 *)(lVar6 + 0x78) = uVar2;
      }
      lVar6 = FUN_1480e1672(uVar7,param_2 + 800);
      if (lVar6 != 0) {
        *(undefined1 *)(lVar6 + 0x7c) = 1;
        *(undefined4 *)(lVar6 + 0x78) = uVar3;
      }
      lVar6 = FUN_1480e1672(uVar7,param_2 + 0x430);
      if (lVar6 != 0) {
        *(undefined1 *)(lVar6 + 0x7c) = 1;
        *(undefined4 *)(lVar6 + 0x78) = uVar4;
      }
    }
  }
  return;
}



// FUNCTION 1480d2728 FUN_1480d2728 body=328 status=ok
// SIG undefined FUN_1480d2728(void)

longlong FUN_1480d2728(longlong param_1,longlong param_2,longlong param_3)

{
  void *_Src;
  longlong lVar1;
  size_t _Size;
  undefined1 auStack_518 [32];
  longlong local_4f8;
  longlong local_4f0;
  undefined8 local_4e8;
  undefined4 local_4e0;
  void *local_4d8;
  int local_4d0;
  undefined4 local_4cc;
  undefined1 local_4c8 [1152];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_518;
  if (param_3 != 0) {
    lVar1 = FUN_145b3440a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_4e8 = *(undefined8 *)(param_1 + -0x20);
      local_4e0 = *(undefined4 *)(param_1 + -0x18);
      local_4d8 = (void *)0x0;
      local_4d0 = *(int *)(param_1 + -8);
      _Size = (size_t)local_4d0;
      _Src = *(void **)(param_1 + -0x10);
      if (_Size == 0) {
        local_4cc = 0;
      }
      else {
        FUN_1447a127e(&local_4d8,local_4d0,0);
        memcpy(local_4d8,_Src,_Size);
      }
      local_4f8 = param_3 + 800;
      local_4f0 = param_3 + 0x430;
      FUN_1480d2478(local_4c8,&local_4e8,param_3 + 0x100,param_3 + 0x210);
      *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfe;
      FUN_1480e16b0(param_2,local_4c8);
      FUN_1480d2872(local_4c8);
      goto LAB_1480d278b;
    }
  }
  *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfc | 2;
LAB_1480d278b:
  if ((local_48 ^ (ulonglong)auStack_518) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d2872 FUN_1480d2872 body=98 status=ok
// SIG undefined FUN_1480d2872(void)

void FUN_1480d2872(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad8f770;
  FUN_1404dbc70(param_1 + 0x6e);
  FUN_1404dbc70(param_1 + 0x4c);
  FUN_1404dbc70(param_1 + 0x2a);
  FUN_1404dbc70(param_1 + 8);
  *param_1 = &PTR_FUN_14ad909b0;
  if (param_1[6] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1480d28d4 FUN_1480d28d4 body=211 status=ok
// SIG undefined FUN_1480d28d4(void)

undefined8 * FUN_1480d28d4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  void *_Src;
  size_t _Size;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  local_50 = *(undefined4 *)(param_2 + 1);
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_2 + 3);
  _Size = (size_t)local_40;
  _Src = (void *)param_2[2];
  if (_Size == 0) {
    local_3c = 0;
  }
  else {
    FUN_1447a127e(&local_48,local_40,0);
    memcpy(local_48,_Src,_Size);
  }
  FUN_1480d2138(param_1,&local_58);
  *param_1 = &PTR_FUN_14ad8fd80;
  FUN_140737604(param_1 + 8,param_3);
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d29ac FUN_1480d29ac body=75 status=ok
// SIG undefined FUN_1480d29ac(void)

bool FUN_1480d29ac(undefined8 param_1,longlong *param_2)

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
      goto LAB_1480d29e0;
    }
  }
  lVar2 = 0;
LAB_1480d29e0:
  lVar1 = FUN_145a68000();
  return lVar2 == lVar1;
}



// FUNCTION 1480d29f8 FUN_1480d29f8 body=40 status=ok
// SIG undefined FUN_1480d29f8(void)

void FUN_1480d29f8(undefined8 param_1)

{
  FUN_1476be938(param_1,0,8,0,0,0);
  return;
}



// FUNCTION 1480d2a20 FUN_1480d2a20 body=121 status=ok
// SIG undefined FUN_1480d2a20(void)

void FUN_1480d2a20(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_145a68000();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) && (*(int *)(param_3 + 1) == 4)) {
      uVar3 = FUN_14757509a(param_2);
      uVar1 = *(undefined4 *)*param_3;
      lVar2 = FUN_1480e1672(uVar3,param_2 + 0x108);
      if (lVar2 != 0) {
        *(undefined1 *)(lVar2 + 0x7c) = 1;
        *(undefined4 *)(lVar2 + 0x78) = uVar1;
      }
    }
  }
  return;
}



// FUNCTION 1480d2a9a FUN_1480d2a9a body=329 status=ok
// SIG undefined FUN_1480d2a9a(void)

longlong FUN_1480d2a9a(longlong param_1,longlong param_2,longlong param_3)

{
  void *_Src;
  longlong lVar1;
  size_t _Size;
  undefined1 auStack_1c8 [40];
  undefined8 local_1a0;
  undefined4 local_198;
  void *local_190;
  int local_188;
  undefined4 local_184;
  undefined **local_180 [6];
  longlong local_150;
  undefined1 local_140 [272];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (param_3 != 0) {
    lVar1 = FUN_145a68000();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_1a0 = *(undefined8 *)(param_1 + -0x20);
      local_198 = *(undefined4 *)(param_1 + -0x18);
      local_190 = (void *)0x0;
      local_188 = *(int *)(param_1 + -8);
      _Size = (size_t)local_188;
      _Src = *(void **)(param_1 + -0x10);
      if (_Size == 0) {
        local_184 = 0;
      }
      else {
        FUN_1447a127e(&local_190,local_188,0);
        memcpy(local_190,_Src,_Size);
      }
      FUN_1480d28d4(local_180,&local_1a0,param_3 + 0x108);
      *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfe;
      FUN_1480e17c4(param_2,local_180);
      local_180[0] = &PTR_FUN_14ad8fd80;
      FUN_1404dbc70(local_140);
      local_180[0] = &PTR_FUN_14ad909b0;
      if (local_150 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1480d2af8;
    }
  }
  *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfc | 2;
LAB_1480d2af8:
  if ((local_30 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d2be4 FUN_1480d2be4 body=211 status=ok
// SIG undefined FUN_1480d2be4(void)

undefined8 * FUN_1480d2be4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  void *_Src;
  size_t _Size;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  local_50 = *(undefined4 *)(param_2 + 1);
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_2 + 3);
  _Size = (size_t)local_40;
  _Src = (void *)param_2[2];
  if (_Size == 0) {
    local_3c = 0;
  }
  else {
    FUN_1447a127e(&local_48,local_40,0);
    memcpy(local_48,_Src,_Size);
  }
  FUN_1480d2138(param_1,&local_58);
  *param_1 = &PTR_FUN_14ad903b0;
  FUN_1480d2cb8(param_1 + 8,param_3);
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d2cb8 FUN_1480d2cb8 body=314 status=ok
// SIG undefined FUN_1480d2cb8(void)

undefined8 * FUN_1480d2cb8(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  
  FUN_1475affea();
  *param_1 = &PTR_FUN_14a46eaf0;
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 0x50);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)(param_2 + 0x52);
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0x60);
  pvVar2 = *(void **)(param_2 + 0x58);
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_147539e5c(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined1 *)((longlong)param_1 + 0x6c) = *(undefined1 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0x78);
  pvVar2 = *(void **)(param_2 + 0x70);
  *(int *)(param_1 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0xe,iVar1,0);
    memcpy((void *)param_1[0xe],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return param_1;
}



// FUNCTION 1480d2df2 FUN_1480d2df2 body=111 status=ok
// SIG undefined FUN_1480d2df2(void)

void FUN_1480d2df2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = *(undefined4 *)*param_4;
  FUN_14752e8c0(param_1 + 0x40);
  iVar1 = *(int *)(param_5 + 1);
  *(int *)(param_5 + 1) = iVar1 + 4;
  if ((uint)(*(int *)((longlong)param_5 + 0xc) - iVar1) < 4) {
    FUN_1447403be(param_5);
  }
  *(undefined4 *)*param_5 = local_14;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d2e66 FUN_1480d2e66 body=75 status=ok
// SIG undefined FUN_1480d2e66(void)

bool FUN_1480d2e66(undefined8 param_1,longlong *param_2)

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
      goto LAB_1480d2e9a;
    }
  }
  lVar2 = 0;
LAB_1480d2e9a:
  lVar1 = FUN_145b3489c();
  return lVar2 == lVar1;
}



// FUNCTION 1480d2eb2 FUN_1480d2eb2 body=40 status=ok
// SIG undefined FUN_1480d2eb2(void)

void FUN_1480d2eb2(undefined8 param_1)

{
  FUN_1476bea8a(param_1,0,8,0,0,0);
  return;
}



// FUNCTION 1480d2eda FUN_1480d2eda body=107 status=ok
// SIG undefined FUN_1480d2eda(void)

void FUN_1480d2eda(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_145b3489c();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) && (*(int *)(param_3 + 1) == 4)) {
      uVar3 = FUN_14757509a(param_2);
      uVar1 = *(undefined4 *)*param_3;
      lVar2 = FUN_1480e1886(uVar3,param_2 + 0x100);
      if (lVar2 != 0) {
        *(undefined1 *)(lVar2 + 0x6c) = 1;
        *(undefined4 *)(lVar2 + 0x68) = uVar1;
      }
    }
  }
  return;
}



// FUNCTION 1480d2f46 FUN_1480d2f46 body=329 status=ok
// SIG undefined FUN_1480d2f46(void)

longlong FUN_1480d2f46(longlong param_1,longlong param_2,longlong param_3)

{
  void *_Src;
  longlong lVar1;
  size_t _Size;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined4 local_190;
  void *local_188;
  int local_180;
  undefined4 local_17c;
  undefined **local_178 [6];
  longlong local_148;
  undefined1 local_138 [264];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (param_3 != 0) {
    lVar1 = FUN_145b3489c();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_198 = *(undefined8 *)(param_1 + -0x20);
      local_190 = *(undefined4 *)(param_1 + -0x18);
      local_188 = (void *)0x0;
      local_180 = *(int *)(param_1 + -8);
      _Size = (size_t)local_180;
      _Src = *(void **)(param_1 + -0x10);
      if (_Size == 0) {
        local_17c = 0;
      }
      else {
        FUN_1447a127e(&local_188,local_180,0);
        memcpy(local_188,_Src,_Size);
      }
      FUN_1480d2be4(local_178,&local_198,param_3 + 0x100);
      *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfe;
      FUN_1480e190a(param_2,local_178);
      local_178[0] = &PTR_FUN_14ad903b0;
      FUN_14581ef76(local_138);
      local_178[0] = &PTR_FUN_14ad909b0;
      if (local_148 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1480d2fa4;
    }
  }
  *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfc | 2;
LAB_1480d2fa4:
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d3094 FUN_1480d3094 body=292 status=ok
// SIG undefined FUN_1480d3094(void)

undefined8 * FUN_1480d3094(undefined8 *param_1,undefined8 *param_2,longlong *param_3,int param_4)

{
  void *_Src;
  size_t _Size;
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = *param_2;
  local_58 = *(undefined4 *)(param_2 + 1);
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_2 + 3);
  _Size = (size_t)local_48;
  _Src = (void *)param_2[2];
  if (_Size == 0) {
    local_44 = 0;
  }
  else {
    FUN_1447a127e(&local_50,local_48,0);
    memcpy(local_50,_Src,_Size);
  }
  FUN_1480d2138(param_1,&local_60);
  *param_1 = &PTR_FUN_14ad91010;
  lVar1 = 0x40;
  do {
    FUN_1406ed278((longlong)param_1 + lVar1);
    lVar1 = lVar1 + 0x110;
  } while (lVar1 != 0x480);
  *(int *)(param_1 + 0x90) = param_4;
  if (0 < param_4) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      FUN_14753be88((longlong)param_1 + lVar2 + 0x40,*param_3 + lVar2);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x110;
    } while (lVar1 < *(int *)(param_1 + 0x90));
  }
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d31ba FUN_1480d31ba body=247 status=ok
// SIG undefined FUN_1480d31ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1480d31ba(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong *local_28;
  longlong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x480) == 3) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb393d8) {
      FUN_144b3d300(&DAT_14cb393d8);
      if (DAT_14cb393d8 == -1) {
        local_20 = DAT_14cb42130;
        if ((DAT_14cb42130 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        local_30 = &local_20;
        local_18 = _DAT_14cb42138;
        local_28 = &local_10;
        FUN_1480d32b2();
        atexit((_func_5014 *)&LAB_14392ec8c);
        _Init_thread_footer(&DAT_14cb393d8);
      }
    }
    *param_2 = DAT_14cb393c8;
    uVar1 = DAT_14cb393d0;
  }
  else {
    *param_2 = 0;
    uVar1 = 0;
  }
  *(undefined4 *)(param_2 + 1) = uVar1;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d32b2 FUN_1480d32b2 body=99 status=ok
// SIG undefined FUN_1480d32b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480d32b2(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  DAT_14cb393c8 = 0;
  lVar1 = *param_1;
  uVar2 = (ulonglong)(param_1[1] - lVar1) >> 4;
  DAT_14cb393d0 = (int)uVar2;
  if (DAT_14cb393d0 == 0) {
    _DAT_14cb393d4 = 0;
    return;
  }
  FUN_1480e19cc(&DAT_14cb393c8,uVar2 & 0xffffffff,0);
  FUN_1480e1a2e(DAT_14cb393c8,lVar1,uVar2 & 0xffffffff);
  return;
}



// FUNCTION 1480d331a FUN_1480d331a body=75 status=ok
// SIG undefined FUN_1480d331a(void)

bool FUN_1480d331a(undefined8 param_1,longlong *param_2)

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
      goto LAB_1480d334e;
    }
  }
  lVar2 = 0;
LAB_1480d334e:
  lVar1 = FUN_145b34e18();
  return lVar2 == lVar1;
}



// FUNCTION 1480d3366 FUN_1480d3366 body=72 status=ok
// SIG undefined FUN_1480d3366(void)

longlong FUN_1480d3366(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1476c1e68(param_1,0,8,0,0,0);
  *(undefined4 *)(lVar1 + 0x540) = *(undefined4 *)(param_1 + 0x130);
  FUN_14135c1a6(lVar1);
  return lVar1;
}



// FUNCTION 1480d33ae FUN_1480d33ae body=484 status=ok
// SIG undefined FUN_1480d33ae(void)

void FUN_1480d33ae(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  if (param_2 != 0) {
    lVar7 = FUN_145b34e18();
    if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
       ((longlong)*(int *)(param_2 + 0x540) * 4 == (longlong)*(int *)(param_3 + 1))) {
      uVar8 = FUN_14757509a(param_2);
      iVar4 = *(int *)(param_2 + 0x540);
      iVar5 = *(int *)(param_3 + 1);
      if (iVar5 == 8 && iVar4 == 2) {
        uVar1 = *(undefined4 *)*param_3;
        uVar9 = ((undefined4 *)*param_3)[1];
        lVar7 = FUN_1480e1672(uVar8,param_2 + 0x100);
        if (lVar7 != 0) {
          *(undefined1 *)(lVar7 + 0x7c) = 1;
          *(undefined4 *)(lVar7 + 0x78) = uVar1;
        }
        param_2 = param_2 + 0x210;
      }
      else if (iVar5 == 0xc && iVar4 == 3) {
        puVar6 = (undefined4 *)*param_3;
        uVar1 = *puVar6;
        uVar2 = puVar6[1];
        uVar9 = puVar6[2];
        lVar7 = FUN_1480e1672(uVar8,param_2 + 0x100);
        if (lVar7 != 0) {
          *(undefined1 *)(lVar7 + 0x7c) = 1;
          *(undefined4 *)(lVar7 + 0x78) = uVar1;
        }
        lVar7 = FUN_1480e1672(uVar8,param_2 + 0x210);
        if (lVar7 != 0) {
          *(undefined1 *)(lVar7 + 0x7c) = 1;
          *(undefined4 *)(lVar7 + 0x78) = uVar2;
        }
        param_2 = param_2 + 800;
      }
      else {
        if (iVar5 != 0x10 || iVar4 != 4) {
          return;
        }
        puVar6 = (undefined4 *)*param_3;
        uVar1 = *puVar6;
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        uVar9 = puVar6[3];
        lVar7 = FUN_1480e1672(uVar8,param_2 + 0x100);
        if (lVar7 != 0) {
          *(undefined1 *)(lVar7 + 0x7c) = 1;
          *(undefined4 *)(lVar7 + 0x78) = uVar1;
        }
        lVar7 = FUN_1480e1672(uVar8,param_2 + 0x210);
        if (lVar7 != 0) {
          *(undefined1 *)(lVar7 + 0x7c) = 1;
          *(undefined4 *)(lVar7 + 0x78) = uVar2;
        }
        lVar7 = FUN_1480e1672(uVar8,param_2 + 800);
        if (lVar7 != 0) {
          *(undefined1 *)(lVar7 + 0x7c) = 1;
          *(undefined4 *)(lVar7 + 0x78) = uVar3;
        }
        param_2 = param_2 + 0x430;
      }
      lVar7 = FUN_1480e1672(uVar8,param_2);
      if (lVar7 != 0) {
        *(undefined1 *)(lVar7 + 0x7c) = 1;
        *(undefined4 *)(lVar7 + 0x78) = uVar9;
      }
    }
  }
  return;
}



// FUNCTION 1480d3592 FUN_1480d3592 body=428 status=ok
// SIG undefined FUN_1480d3592(void)

longlong FUN_1480d3592(longlong param_1,longlong param_2,longlong param_3)

{
  void *_Src;
  uint uVar1;
  longlong lVar2;
  size_t _Size;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_518 [32];
  undefined8 local_4f8;
  undefined4 local_4f0;
  void *local_4e8;
  int local_4e0;
  undefined4 local_4dc;
  longlong local_4d8;
  undefined8 uStack_4d0;
  undefined1 local_4c8 [1160];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_518;
  if (param_3 != 0) {
    lVar2 = FUN_145b34e18();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      local_4d8 = 0;
      uStack_4d0 = 0;
      uVar5 = (ulonglong)*(uint *)(param_3 + 0x540);
      if (0 < (int)*(uint *)(param_3 + 0x540)) {
        lVar2 = param_3 + 0x100;
        lVar3 = 0;
        do {
          uVar5 = uStack_4d0;
          lVar4 = (longlong)(int)uStack_4d0;
          uVar1 = (int)uStack_4d0 + 1;
          uStack_4d0 = CONCAT44(uStack_4d0._4_4_,uVar1);
          if (uStack_4d0._4_4_ < uVar1) {
            FUN_1480e1a8e(&local_4d8,uVar5 & 0xffffffff);
          }
          FUN_140737604(lVar4 * 0x110 + local_4d8,lVar2);
          lVar3 = lVar3 + 1;
          uVar5 = (ulonglong)*(int *)(param_3 + 0x540);
          lVar2 = lVar2 + 0x110;
        } while (lVar3 < (longlong)uVar5);
      }
      local_4f8 = *(undefined8 *)(param_1 + -0x20);
      local_4f0 = *(undefined4 *)(param_1 + -0x18);
      local_4e8 = (void *)0x0;
      local_4e0 = *(int *)(param_1 + -8);
      _Size = (size_t)local_4e0;
      _Src = *(void **)(param_1 + -0x10);
      if (_Size == 0) {
        local_4dc = 0;
      }
      else {
        FUN_1447a127e(&local_4e8,local_4e0,0);
        memcpy(local_4e8,_Src,_Size);
      }
      FUN_1480d3094(local_4c8,&local_4f8,&local_4d8,uVar5 & 0xffffffff);
      *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfe;
      FUN_1480e1b22(param_2,local_4c8);
      FUN_1480d3740(local_4c8);
      FUN_145cd38e0(local_4d8,uStack_4d0 & 0xffffffff);
      if (local_4d8 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1480d35f4;
    }
  }
  *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfc | 2;
LAB_1480d35f4:
  if ((local_40 ^ (ulonglong)auStack_518) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1480d3740 FUN_1480d3740 body=86 status=ok
// SIG undefined FUN_1480d3740(void)

void FUN_1480d3740(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ad91010;
  lVar1 = 0x370;
  do {
    FUN_1404dbc70((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x110;
  } while (lVar1 != -0xd0);
  *param_1 = &PTR_FUN_14ad909b0;
  if (param_1[6] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1480d3c3a FUN_1480d3c3a body=319 status=ok
// SIG undefined FUN_1480d3c3a(void)

void FUN_1480d3c3a(char *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  uint *local_58;
  int local_50;
  uint *local_48;
  undefined8 uStack_40;
  int local_38;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140982196(local_28,param_1);
  local_48 = (uint *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_144a98d08(&local_48,param_1);
  FUN_144a76cd4(&local_58,param_1);
  piVar1 = (int *)(param_1 + 0x3c);
  piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar5 = piVar1;
  }
  if (*(int *)(local_20 + 0x290) < 1) {
    if (0 < *piVar5) {
      iVar6 = 0;
      do {
        puVar2 = local_58 + local_50;
        *local_58 = 0xffffffff;
        iVar6 = iVar6 + 1;
        piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar5 = piVar1;
        }
        local_58 = puVar2;
      } while (iVar6 < *piVar5);
    }
  }
  else if (0 < *piVar5) {
    uVar4 = *(int *)(local_20 + 0x290) - 1;
    iVar6 = 0;
    do {
      puVar2 = local_48 + local_38;
      uVar7 = *local_48;
      if ((int)uVar4 <= (int)*local_48) {
        uVar7 = uVar4;
      }
      uVar8 = (ulonglong)uVar7;
      if ((int)uVar7 < 1) {
        uVar8 = 0;
      }
      puVar3 = local_58 + local_50;
      *local_58 = (uint)*(ushort *)(*(longlong *)(local_20 + 0x298) + uVar8 * 2);
      iVar6 = iVar6 + 1;
      piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar5 = piVar1;
      }
      local_58 = puVar3;
      local_48 = puVar2;
    } while (iVar6 < *piVar5);
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480d3d7a FUN_1480d3d7a body=766 status=ok
// SIG undefined FUN_1480d3d7a(void)

void FUN_1480d3d7a(char *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int *piVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  float fVar17;
  undefined1 auStack_118 [32];
  uint *local_f8;
  int local_f0;
  char *local_e8;
  int *local_e0 [2];
  int local_d0;
  int *local_c8;
  int local_b8;
  int *local_b0;
  int local_a0;
  int local_90;
  int iStack_8c;
  int local_88;
  undefined1 local_80 [8];
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140982196(local_80,param_1);
  local_e8 = param_1;
  FUN_1416b93de(local_e0,param_1);
  local_90 = 0;
  iStack_8c = 0;
  local_88 = 0;
  FUN_144a76cd4(&local_f8,param_1);
  iVar8 = *(int *)(local_78 + 0x290);
  piVar1 = (int *)(param_1 + 0x3c);
  piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar11 = piVar1;
  }
  if (iVar8 < 1) {
    if (0 < *piVar11) {
      iVar8 = 0;
      do {
        puVar5 = local_f8 + local_f0;
        *local_f8 = 0xffffffff;
        iVar8 = iVar8 + 1;
        piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar11 = piVar1;
        }
        local_f8 = puVar5;
      } while (iVar8 < *piVar11);
    }
  }
  else if (0 < *piVar11) {
    lVar15 = 0;
    do {
      pcVar6 = local_e8;
      piVar11 = local_e0[0] + local_d0;
      local_90 = *local_e0[0];
      piVar3 = local_c8 + local_b8;
      iStack_8c = *local_c8;
      piVar4 = local_b0 + local_a0;
      local_88 = *local_b0;
      local_e0[0] = piVar11;
      local_c8 = piVar3;
      local_b0 = piVar4;
      if (local_88 == -1) {
        if (*local_e8 == '\0') {
          lVar12 = *(longlong *)(local_e8 + 0x80) + 0x88;
        }
        else {
          lVar12 = *(longlong *)(local_e8 + 0x58);
        }
        uVar14 = *(int *)(lVar12 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(lVar12 + 4) = uVar14;
        fVar17 = (float)(uVar14 >> 9 | 0x3f800000) + -1.0;
      }
      else {
        if (*local_e8 == '\0') {
          plVar10 = (longlong *)(*(longlong *)(local_e8 + 0x80) + 0x90);
        }
        else {
          plVar10 = *(longlong **)(local_e8 + 0x60);
          if (*plVar10 == 0) {
            uVar9 = FUN_14153c902((longlong)*(int *)(local_e8 + 0x3c) << 2,0);
            **(undefined8 **)(pcVar6 + 0x60) = uVar9;
            plVar10 = *(longlong **)(pcVar6 + 0x60);
          }
        }
        uVar14 = *(uint *)(*plVar10 + lVar15 * 4);
        *(uint *)(*plVar10 + lVar15 * 4) = uVar14 + 1;
        iVar7 = (local_88 << 0x10 | uVar14) * 0x19660d;
        iVar13 = iVar7 + 0x3c6ef35f;
        iVar16 = (iStack_8c * 0x19660d + 0x3c6ef35f) * iVar13 + local_90 * 0x19660d;
        iVar2 = iVar16 + 0x3c6ef35f;
        iVar13 = iStack_8c * 0x19660d + iVar13 * iVar2 + 0x3c6ef35f;
        fVar17 = (float)((iVar7 + iVar2 * iVar13 + 0x3c6ef35f) * iVar13 + iVar16 + 0x3c6ef35fU >> 8)
                 * 5.9604645e-08;
      }
      puVar5 = local_f8 + local_f0;
      *local_f8 = (uint)*(ushort *)
                         (*(longlong *)(local_78 + 0x298) +
                         (longlong)(int)(fVar17 * (float)iVar8) * 2);
      lVar15 = lVar15 + 1;
      piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar11 = piVar1;
      }
      local_f8 = puVar5;
    } while (lVar15 < *piVar11);
  }
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480d407a FUN_1480d407a body=472 status=ok
// SIG undefined FUN_1480d407a(void)

void FUN_1480d407a(char *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  uint *local_58;
  int local_50;
  uint *local_48;
  undefined8 uStack_40;
  int local_38;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140982196(local_28,param_1);
  local_48 = (uint *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_144a98d08(&local_48,param_1);
  FUN_144a76cd4(&local_58,param_1);
  if (*(int *)(local_20 + 0x294) < 1) {
    piVar4 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar4 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar4) {
      iVar5 = 0;
      do {
        puVar1 = local_58 + local_50;
        *local_58 = 0xffffffff;
        iVar5 = iVar5 + 1;
        piVar4 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar4 = (int *)(param_1 + 0x3c);
        }
        local_58 = puVar1;
      } while (iVar5 < *piVar4);
    }
  }
  else {
    uVar3 = *(int *)(local_20 + 0x294) - 1;
    piVar4 = (int *)(param_1 + 0x3c);
    piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar6 = piVar4;
    }
    if (*(int *)(local_20 + 0x290) == 0) {
      if (0 < *piVar6) {
        iVar5 = 0;
        do {
          puVar1 = local_48 + local_38;
          uVar7 = *local_48;
          if ((int)uVar3 <= (int)*local_48) {
            uVar7 = uVar3;
          }
          if ((int)uVar7 < 1) {
            uVar7 = 0;
          }
          puVar2 = local_58 + local_50;
          *local_58 = uVar7;
          iVar5 = iVar5 + 1;
          piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar6 = piVar4;
          }
          local_58 = puVar2;
          local_48 = puVar1;
        } while (iVar5 < *piVar6);
      }
    }
    else if (0 < *piVar6) {
      iVar5 = 0;
      do {
        puVar1 = local_48 + local_38;
        uVar7 = *local_48;
        if ((int)uVar3 <= (int)*local_48) {
          uVar7 = uVar3;
        }
        uVar8 = (ulonglong)uVar7;
        if ((int)uVar7 < 1) {
          uVar8 = 0;
        }
        puVar2 = local_58 + local_50;
        *local_58 = (uint)*(ushort *)
                           (*(longlong *)(local_20 + 0x298) +
                           (uVar8 + (longlong)*(int *)(local_20 + 0x290)) * 2);
        iVar5 = iVar5 + 1;
        piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar6 = piVar4;
        }
        local_58 = puVar2;
        local_48 = puVar1;
      } while (iVar5 < *piVar6);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480d4254 FUN_1480d4254 body=1378 status=ok
// SIG undefined FUN_1480d4254(void)

void FUN_1480d4254(char *param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int *piVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  float fVar18;
  undefined1 auStack_128 [32];
  uint *local_108;
  int local_100;
  char *local_f8;
  int *local_f0 [2];
  int local_e0;
  int *local_d8;
  int local_c8;
  int *local_c0;
  int local_b0;
  int local_a0;
  int iStack_9c;
  int local_98;
  undefined1 local_90 [8];
  longlong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_140982196(local_90,param_1);
  local_f8 = param_1;
  FUN_1416b93de(local_f0,param_1);
  local_a0 = 0;
  iStack_9c = 0;
  local_98 = 0;
  FUN_144a76cd4(&local_108,param_1);
  iVar15 = *(int *)(local_88 + 0x294);
  if (iVar15 < 1) {
    piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar10 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar10) {
      iVar15 = 0;
      do {
        puVar3 = local_108 + local_100;
        *local_108 = 0xffffffff;
        iVar15 = iVar15 + 1;
        piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar10 = (int *)(param_1 + 0x3c);
        }
        local_108 = puVar3;
      } while (iVar15 < *piVar10);
    }
  }
  else if (*(int *)(local_88 + 0x290) == 0) {
    uVar14 = *(uint *)(local_88 + 0x28c);
    piVar10 = (int *)(param_1 + 0x3c);
    piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar12 = piVar10;
    }
    iVar15 = ~(~uVar14 >> 0x1f) + iVar15;
    if (iVar15 < 0) {
      if (0 < *piVar12) {
        iVar15 = 0;
        do {
          puVar3 = local_108 + local_100;
          *local_108 = 0xffffffff;
          iVar15 = iVar15 + 1;
          piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar12 = piVar10;
          }
          local_108 = puVar3;
        } while (iVar15 < *piVar12);
      }
    }
    else if (0 < *piVar12) {
      lVar16 = 0;
      do {
        pcVar5 = local_f8;
        piVar12 = local_f0[0] + local_e0;
        local_a0 = *local_f0[0];
        piVar2 = local_d8 + local_c8;
        iStack_9c = *local_d8;
        piVar4 = local_c0 + local_b0;
        local_98 = *local_c0;
        local_f0[0] = piVar12;
        local_d8 = piVar2;
        local_c0 = piVar4;
        if (local_98 == -1) {
          if (*local_f8 == '\0') {
            lVar11 = *(longlong *)(local_f8 + 0x80) + 0x88;
          }
          else {
            lVar11 = *(longlong *)(local_f8 + 0x58);
          }
          uVar7 = *(int *)(lVar11 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar11 + 4) = uVar7;
          fVar18 = (float)(uVar7 >> 9 | 0x3f800000) + -1.0;
        }
        else {
          if (*local_f8 == '\0') {
            plVar9 = (longlong *)(*(longlong *)(local_f8 + 0x80) + 0x90);
          }
          else {
            plVar9 = *(longlong **)(local_f8 + 0x60);
            if (*plVar9 == 0) {
              uVar8 = FUN_14153c902((longlong)*(int *)(local_f8 + 0x3c) << 2,0);
              **(undefined8 **)(pcVar5 + 0x60) = uVar8;
              plVar9 = *(longlong **)(pcVar5 + 0x60);
            }
          }
          uVar7 = *(uint *)(*plVar9 + lVar16 * 4);
          *(uint *)(*plVar9 + lVar16 * 4) = uVar7 + 1;
          iVar6 = (local_98 << 0x10 | uVar7) * 0x19660d;
          iVar13 = iVar6 + 0x3c6ef35f;
          iVar17 = (iStack_9c * 0x19660d + 0x3c6ef35f) * iVar13 + local_a0 * 0x19660d;
          iVar1 = iVar17 + 0x3c6ef35f;
          iVar13 = iStack_9c * 0x19660d + iVar13 * iVar1 + 0x3c6ef35f;
          fVar18 = (float)((iVar6 + iVar1 * iVar13 + 0x3c6ef35f) * iVar13 + iVar17 + 0x3c6ef35fU >>
                          8) * 5.9604645e-08;
        }
        uVar7 = (uint)(fVar18 * (float)(iVar15 + 1));
        puVar3 = local_108 + local_100;
        *local_108 = (uVar14 == uVar7) + uVar7;
        lVar16 = lVar16 + 1;
        piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar12 = piVar10;
        }
        local_108 = puVar3;
      } while (lVar16 < *piVar12);
    }
  }
  else {
    piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar10 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar10) {
      lVar16 = 0;
      do {
        pcVar5 = local_f8;
        piVar10 = local_f0[0] + local_e0;
        local_a0 = *local_f0[0];
        piVar12 = local_d8 + local_c8;
        iStack_9c = *local_d8;
        piVar2 = local_c0 + local_b0;
        local_98 = *local_c0;
        local_f0[0] = piVar10;
        local_d8 = piVar12;
        local_c0 = piVar2;
        if (local_98 == -1) {
          if (*local_f8 == '\0') {
            lVar11 = *(longlong *)(local_f8 + 0x80) + 0x88;
          }
          else {
            lVar11 = *(longlong *)(local_f8 + 0x58);
          }
          uVar14 = *(int *)(lVar11 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar11 + 4) = uVar14;
          fVar18 = (float)(uVar14 >> 9 | 0x3f800000) + -1.0;
        }
        else {
          if (*local_f8 == '\0') {
            plVar9 = (longlong *)(*(longlong *)(local_f8 + 0x80) + 0x90);
          }
          else {
            plVar9 = *(longlong **)(local_f8 + 0x60);
            if (*plVar9 == 0) {
              uVar8 = FUN_14153c902((longlong)*(int *)(local_f8 + 0x3c) << 2,0);
              **(undefined8 **)(pcVar5 + 0x60) = uVar8;
              plVar9 = *(longlong **)(pcVar5 + 0x60);
            }
          }
          uVar14 = *(uint *)(*plVar9 + lVar16 * 4);
          *(uint *)(*plVar9 + lVar16 * 4) = uVar14 + 1;
          iVar6 = (local_98 << 0x10 | uVar14) * 0x19660d;
          iVar13 = iVar6 + 0x3c6ef35f;
          iVar17 = (iStack_9c * 0x19660d + 0x3c6ef35f) * iVar13 + local_a0 * 0x19660d;
          iVar1 = iVar17 + 0x3c6ef35f;
          iVar13 = iStack_9c * 0x19660d + iVar13 * iVar1 + 0x3c6ef35f;
          fVar18 = (float)((iVar6 + iVar1 * iVar13 + 0x3c6ef35f) * iVar13 + iVar17 + 0x3c6ef35fU >>
                          8) * 5.9604645e-08;
        }
        puVar3 = local_108 + local_100;
        *local_108 = (uint)*(ushort *)
                            (*(longlong *)(local_88 + 0x298) +
                            ((longlong)(int)(fVar18 * (float)iVar15) +
                            (longlong)*(int *)(local_88 + 0x290)) * 2);
        lVar16 = lVar16 + 1;
        piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar10 = (int *)(param_1 + 0x3c);
        }
        local_108 = puVar3;
      } while (lVar16 < *piVar10);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480d47b8 FUN_1480d47b8 body=506 status=ok
// SIG undefined FUN_1480d47b8(void)

void FUN_1480d47b8(char *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_88 [32];
  int *local_68;
  int local_60;
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140982196(local_38,param_1);
  local_58 = (int *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_1);
  FUN_140126e42(&local_68,param_1);
  lVar1 = FUN_14479d2ce(local_30);
  if (lVar1 != 0) {
    FUN_144a74fb4();
  }
  plVar2 = (longlong *)FUN_14479d2ce(local_30 + 0x50);
  lVar1 = FUN_14479d2ce(local_30);
  if (lVar1 != 0) {
    lVar3 = FUN_144a74fb4();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && (lVar3 = FUN_144a81888(lVar1), lVar3 != 0)) {
      FUN_1417c143e(lVar1,*(undefined4 *)(local_30 + 0x31c),0);
    }
  }
  lVar1 = *(longlong *)(local_30 + 0x60);
  if (lVar1 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(lVar1 + 8));
  }
  if (plVar2 == (longlong *)0x0) {
    piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar5 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar5) {
      iVar4 = 0;
      do {
        piVar5 = local_68 + local_60;
        *local_68 = 0;
        iVar4 = iVar4 + 1;
        piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar7 = (int *)(param_1 + 0x3c);
        }
        local_68 = piVar5;
      } while (iVar4 < *piVar7);
    }
  }
  else {
    lVar3 = (**(code **)(*plVar2 + 0x310))(plVar2);
    piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar5 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar5) {
      iVar4 = *(int *)(lVar3 + 0x28);
      iVar6 = 0;
      do {
        piVar5 = local_58 + local_48;
        piVar7 = local_68 + local_60;
        *local_68 = -(uint)(*local_58 < iVar4 && -1 < *local_58);
        iVar6 = iVar6 + 1;
        piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar8 = (int *)(param_1 + 0x3c);
        }
        local_68 = piVar7;
        local_58 = piVar5;
      } while (iVar6 < *piVar8);
    }
  }
  if (lVar1 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar1 + 8));
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480d49b4 FUN_1480d49b4 body=982 status=ok
// SIG undefined FUN_1480d49b4(void)

void FUN_1480d49b4(char *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  undefined8 uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  undefined1 auStack_128 [32];
  int *local_108;
  int local_100;
  char *local_f8;
  int *local_f0 [2];
  int local_e0;
  int *local_d8;
  int local_c8;
  int *local_c0;
  int local_b0;
  int local_a0;
  int iStack_9c;
  int local_98;
  undefined1 local_90 [8];
  longlong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_140982196(local_90,param_1);
  local_f8 = param_1;
  FUN_1416b93de(local_f0,param_1);
  local_a0 = 0;
  iStack_9c = 0;
  local_98 = 0;
  FUN_144a76cd4(&local_108,param_1);
  lVar4 = local_88;
  lVar8 = FUN_14479d2ce(local_88);
  if (lVar8 != 0) {
    FUN_144a74fb4();
  }
  plVar9 = (longlong *)FUN_14479d2ce(lVar4 + 0x50);
  lVar8 = FUN_14479d2ce();
  if (lVar8 != 0) {
    lVar10 = FUN_144a74fb4();
    if (((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8
          ) == lVar10 + 0x30)) && (lVar10 = FUN_144a81888(), lVar10 != 0)) {
      FUN_1417c143e(lVar8,*(undefined4 *)(lVar4 + 0x31c),0);
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x60);
  if (lVar4 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(lVar4 + 8));
  }
  uVar3 = *(uint *)(local_88 + 0x28c);
  if (plVar9 == (longlong *)0x0) {
    iVar14 = 0;
  }
  else {
    lVar8 = (**(code **)(*plVar9 + 0x310))(plVar9);
    iVar14 = ~(~uVar3 >> 0x1f) + *(int *)(lVar8 + 0x28);
    if (iVar14 < 0) {
      piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar11 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar11) {
        iVar14 = 0;
        do {
          piVar11 = local_108 + local_100;
          *local_108 = -1;
          iVar14 = iVar14 + 1;
          piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar13 = (int *)(param_1 + 0x3c);
          }
          local_108 = piVar11;
        } while (iVar14 < *piVar13);
      }
      goto LAB_1480d4d0b;
    }
  }
  piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar11 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar11) {
    lVar8 = 0;
    do {
      pcVar5 = local_f8;
      piVar11 = local_f0[0] + local_e0;
      local_a0 = *local_f0[0];
      piVar13 = local_d8 + local_c8;
      iStack_9c = *local_d8;
      piVar2 = local_c0 + local_b0;
      local_98 = *local_c0;
      local_f0[0] = piVar11;
      local_d8 = piVar13;
      local_c0 = piVar2;
      if (local_98 == -1) {
        if (*local_f8 == '\0') {
          lVar10 = *(longlong *)(local_f8 + 0x80) + 0x88;
        }
        else {
          lVar10 = *(longlong *)(local_f8 + 0x58);
        }
        uVar7 = *(int *)(lVar10 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(lVar10 + 4) = uVar7;
        fVar17 = (float)(uVar7 >> 9 | 0x3f800000) + -1.0;
      }
      else {
        if (*local_f8 == '\0') {
          plVar9 = (longlong *)(*(longlong *)(local_f8 + 0x80) + 0x90);
        }
        else {
          plVar9 = *(longlong **)(local_f8 + 0x60);
          if (*plVar9 == 0) {
            uVar12 = FUN_14153c902((longlong)*(int *)(local_f8 + 0x3c) << 2,0);
            **(undefined8 **)(pcVar5 + 0x60) = uVar12;
            plVar9 = *(longlong **)(pcVar5 + 0x60);
          }
        }
        uVar7 = *(uint *)(*plVar9 + lVar8 * 4);
        *(uint *)(*plVar9 + lVar8 * 4) = uVar7 + 1;
        iVar6 = (local_98 << 0x10 | uVar7) * 0x19660d;
        iVar15 = iVar6 + 0x3c6ef35f;
        iVar16 = (iStack_9c * 0x19660d + 0x3c6ef35f) * iVar15 + local_a0 * 0x19660d;
        iVar1 = iVar16 + 0x3c6ef35f;
        iVar15 = iStack_9c * 0x19660d + iVar15 * iVar1 + 0x3c6ef35f;
        fVar17 = (float)((iVar6 + iVar1 * iVar15 + 0x3c6ef35f) * iVar15 + iVar16 + 0x3c6ef35fU >> 8)
                 * 5.9604645e-08;
      }
      uVar7 = (uint)(fVar17 * (float)(iVar14 + 1));
      piVar11 = local_108 + local_100;
      *local_108 = (uVar3 == uVar7) + uVar7;
      lVar8 = lVar8 + 1;
      piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar13 = (int *)(param_1 + 0x3c);
      }
      local_108 = piVar11;
    } while (lVar8 < *piVar13);
  }
LAB_1480d4d0b:
  if (lVar4 != 0) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 8));
  }
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480d4d8c FUN_1480d4d8c body=164 status=ok
// SIG undefined FUN_1480d4d8c(void)

void FUN_1480d4d8c(char *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140982196(local_20,param_1);
  FUN_144a76cd4(&local_30);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    uVar2 = *(undefined4 *)(local_18 + 0x2b0);
    iVar4 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = uVar2;
      iVar4 = iVar4 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar4 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d4e32 FUN_1480d4e32 body=307 status=ok
// SIG undefined FUN_1480d4e32(void)

void FUN_1480d4e32(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 auStack_78 [32];
  int *local_58;
  int local_50;
  int *local_48;
  undefined8 uStack_40;
  int local_38;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140982196(local_28);
  local_48 = (int *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_144a98d08(&local_48,param_2);
  FUN_144a76cd4(&local_58,param_2);
  piVar1 = (int *)(param_2 + 0x3c);
  piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar4 = piVar1;
  }
  iVar3 = *(int *)(param_1 + 0xe0) + -1;
  if (*(int *)(param_1 + 0xe0) == 0) {
    if (0 < *piVar4) {
      iVar3 = 0;
      do {
        piVar4 = local_58 + local_50;
        *local_58 = -1;
        iVar3 = iVar3 + 1;
        piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar5 = piVar1;
        }
        local_58 = piVar4;
      } while (iVar3 < *piVar5);
    }
  }
  else if (0 < *piVar4) {
    iVar2 = *(int *)(local_20 + 0x2b8);
    iVar6 = 0;
    do {
      piVar4 = local_48 + local_38;
      iVar7 = *local_48;
      if (iVar3 <= *local_48) {
        iVar7 = iVar3;
      }
      if (iVar7 < 1) {
        iVar7 = 0;
      }
      piVar5 = local_58 + local_50;
      *local_58 = iVar7 + iVar2;
      iVar6 = iVar6 + 1;
      piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar8 = piVar1;
      }
      local_58 = piVar5;
      local_48 = piVar4;
    } while (iVar6 < *piVar8);
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480d4f66 FUN_1480d4f66 body=2202 status=ok
// SIG undefined FUN_1480d4f66(void)

void FUN_1480d4f66(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint *puVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float *pfVar11;
  longlong lVar12;
  undefined8 uVar13;
  bool bVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined4 uVar41;
  int *piVar42;
  uint uVar43;
  int iVar44;
  uint uVar45;
  longlong lVar46;
  int *piVar47;
  longlong lVar48;
  float fVar52;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined4 uVar53;
  undefined4 in_XMM2_Dc;
  float fVar54;
  undefined4 in_XMM2_Dd;
  float fVar55;
  undefined4 uVar56;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auStack_308 [40];
  double local_2e0;
  double local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined1 local_2b8 [16];
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  float *local_258;
  int local_250;
  float *local_248;
  int local_240;
  float *local_238;
  int local_230;
  float *local_228;
  int local_220;
  undefined8 *local_218;
  int local_210;
  undefined8 *local_208;
  int local_200;
  undefined8 *local_1f8;
  int local_1f0;
  float *local_1e8;
  int local_1e0;
  float *local_1d8;
  int local_1d0;
  float *local_1c8;
  int local_1c0;
  int *local_1b8;
  undefined8 uStack_1b0;
  int local_1a8;
  uint *local_198;
  undefined8 uStack_190;
  int local_188;
  undefined1 local_178 [8];
  longlong local_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  undefined8 uStack_f0;
  ulonglong local_e0;
  undefined8 extraout_XMM0_Qb;
  
  uVar56 = (undefined4)((ulonglong)param_4 >> 0x20);
  uVar53 = (undefined4)((ulonglong)param_3 >> 0x20);
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  FUN_140982196(local_178,param_1);
  local_188 = 0;
  local_198 = (uint *)0x0;
  uStack_190 = 0;
  FUN_144a98d08(&local_198,param_1);
  local_1a8 = 0;
  local_1b8 = (int *)0x0;
  uStack_1b0 = 0;
  FUN_144a76d88(&local_1b8,param_1);
  FUN_144a76c20(&local_1e8,param_1);
  FUN_144a76c20(&local_1d8,param_1);
  FUN_144a76c20(&local_1c8,param_1);
  FUN_144a76c20(&local_228,param_1);
  FUN_144a76c20(&local_218,param_1);
  FUN_144a76c20(&local_208,param_1);
  FUN_144a76c20(&local_1f8,param_1);
  FUN_144a76c20(&local_258,param_1);
  FUN_144a76c20(&local_248,param_1);
  FUN_144a76c20(&local_238);
  lVar48 = (ulonglong)*(uint *)(local_170 + 700) * 0x10;
  iVar44 = *(int *)(local_170 + 0x2c8 + lVar48);
  if (iVar44 < 1) {
    piVar42 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar42 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar42) {
      iVar44 = 0;
      do {
        fVar59 = DAT_14c846338;
        fVar52 = DAT_14c846330._4_4_;
        pfVar7 = local_1e8 + local_1e0;
        *local_1e8 = (float)DAT_14c846330;
        pfVar11 = local_1d8 + local_1d0;
        *local_1d8 = fVar52;
        pfVar1 = local_1c8 + local_1c0;
        *local_1c8 = fVar59;
        uVar41 = DAT_14c84634c;
        uVar56 = DAT_14c846348;
        uVar53 = DAT_14c846344;
        pfVar2 = local_228 + local_220;
        *local_228 = DAT_14c84633c._4_4_;
        puVar8 = (undefined8 *)((longlong)local_218 + (longlong)local_210 * 4);
        *(undefined4 *)local_218 = uVar53;
        puVar9 = (undefined8 *)((longlong)local_208 + (longlong)local_200 * 4);
        *(undefined4 *)local_208 = uVar56;
        puVar10 = (undefined8 *)((longlong)local_1f8 + (longlong)local_1f0 * 4);
        *(undefined4 *)local_1f8 = uVar41;
        fVar59 = DAT_14c846338;
        fVar52 = DAT_14c846330._4_4_;
        pfVar3 = local_258 + local_250;
        *local_258 = (float)DAT_14c846330;
        pfVar4 = local_248 + local_240;
        *local_248 = fVar52;
        pfVar5 = local_238 + local_230;
        *local_238 = fVar59;
        iVar44 = iVar44 + 1;
        piVar42 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar42 = (int *)(param_1 + 0x3c);
        }
        local_258 = pfVar3;
        local_248 = pfVar4;
        local_238 = pfVar5;
        local_228 = pfVar2;
        local_218 = puVar8;
        local_208 = puVar9;
        local_1f8 = puVar10;
        local_1e8 = pfVar7;
        local_1d8 = pfVar11;
        local_1c8 = pfVar1;
      } while (iVar44 < *piVar42);
    }
  }
  else {
    bVar14 = true;
    if (((local_220 < 1) && (local_210 < 1)) && (local_200 < 1)) {
      bVar14 = 0 < local_1f0;
    }
    dVar32 = *(double *)(local_170 + 0xf0);
    dVar33 = *(double *)(local_170 + 0xf8);
    dVar34 = *(double *)(local_170 + 0x100);
    dVar35 = *(double *)(local_170 + 0x110);
    dVar36 = *(double *)(local_170 + 0x118);
    dVar37 = *(double *)(local_170 + 0x120);
    dVar38 = *(double *)(local_170 + 0x130);
    dVar39 = *(double *)(local_170 + 0x138);
    dVar40 = *(double *)(local_170 + 0x140);
    local_2c8 = *(undefined4 *)(local_170 + 0x150);
    uStack_2c4 = *(undefined4 *)(local_170 + 0x154);
    uStack_2c0 = *(undefined4 *)(local_170 + 0x158);
    uStack_2bc = *(undefined4 *)(local_170 + 0x15c);
    local_2d8 = *(double *)(local_170 + 0x160);
    uStack_2d0 = *(undefined8 *)(local_170 + 0x168);
    if (bVar14) {
      local_168 = dVar32;
      dStack_160 = dVar33;
      local_158 = dVar34;
      uStack_150 = *(undefined8 *)(local_170 + 0x108);
      local_148 = dVar35;
      dStack_140 = dVar36;
      local_138 = dVar37;
      uStack_130 = *(undefined8 *)(local_170 + 0x128);
      local_128 = dVar38;
      dStack_120 = dVar39;
      local_118 = dVar40;
      uStack_110 = *(undefined8 *)(local_170 + 0x148);
      local_108 = local_2c8;
      uStack_104 = uStack_2c4;
      uStack_100 = uStack_2c0;
      uStack_fc = uStack_2bc;
      local_f8 = local_2d8;
      uStack_f0 = uStack_2d0;
      FUN_144a1c686(&local_168,0xe0000000);
      auVar49._0_8_ = FUN_141706d54(&local_168);
      auVar49._8_8_ = extraout_XMM0_Qb;
      auVar50._4_12_ = auVar49._4_12_;
      auVar50._0_4_ = (float)local_278;
      auVar21._4_4_ = uVar56;
      auVar21._0_4_ = (float)local_270;
      auVar21._8_4_ = in_XMM3_Dc;
      auVar21._12_4_ = in_XMM3_Dd;
      auVar51 = insertps(auVar50,auVar21,0x10);
      auVar17._4_4_ = uVar53;
      auVar17._0_4_ = (float)local_268;
      auVar17._8_4_ = in_XMM2_Dc;
      auVar17._12_4_ = in_XMM2_Dd;
      auVar51 = insertps(auVar51,auVar17,0x20);
      auVar51 = insertps(auVar51,ZEXT416((uint)(float)local_260),0x30);
    }
    else {
      auVar51._4_4_ = DAT_14c846344;
      auVar51._0_4_ = DAT_14c84633c._4_4_;
      auVar51._8_4_ = DAT_14c846348;
      auVar51._12_4_ = DAT_14c84634c;
    }
    piVar42 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar42 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar42) {
      uVar43 = iVar44 - 1;
      local_298 = auVar51._0_4_;
      local_2a8 = auVar51._4_4_;
      fVar52 = auVar51._8_4_;
      local_288 = auVar51._12_4_;
      dVar15 = (double)CONCAT44(uStack_2c4,local_2c8) * 0.0;
      dVar16 = (double)CONCAT44(uStack_2bc,uStack_2c0) * 0.0;
      local_2b8._8_4_ = SUB84(dVar16,0);
      local_2b8._0_8_ = dVar15;
      local_2b8._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      local_2e0 = local_2d8 * 0.0;
      iVar44 = 0;
      do {
        puVar6 = local_198 + local_188;
        uVar45 = *local_198;
        if ((int)uVar43 <= (int)*local_198) {
          uVar45 = uVar43;
        }
        if ((int)uVar45 < 1) {
          uVar45 = 0;
        }
        lVar12 = *(longlong *)(local_170 + lVar48 + 0x2c0);
        lVar46 = (ulonglong)uVar45 * 0x30;
        dVar16 = (double)*(float *)(lVar12 + 0x18 + lVar46);
        pfVar7 = (float *)(lVar12 + lVar46);
        fVar59 = *pfVar7;
        fVar61 = pfVar7[1];
        fVar62 = pfVar7[2];
        fVar64 = pfVar7[3];
        pfVar7 = (float *)(lVar12 + 0x10 + lVar46);
        pfVar11 = (float *)(lVar12 + 0x20 + lVar46);
        dVar23 = (double)pfVar7[1];
        dVar18 = (double)*pfVar7;
        dVar28 = (double)*(float *)(lVar12 + 0x28 + lVar46);
        dVar25 = (double)pfVar11[1];
        dVar26 = (double)*pfVar11;
        piVar42 = local_1b8 + local_1a8;
        if (*local_1b8 != 0) {
          dVar22 = dVar18 * dVar33;
          dVar19 = dVar18 * dVar34;
          dVar24 = dVar23 * dVar37;
          fVar57 = fVar61 * local_298;
          fVar58 = fVar59 * local_298;
          fVar54 = fVar59 * local_2a8;
          fVar55 = fVar61 * local_2a8;
          fVar60 = fVar59 * fVar52;
          fVar63 = fVar62 * fVar52;
          fVar59 = fVar61 * fVar52 * -1.0 +
                   fVar62 * local_2a8 * 1.0 + fVar64 * local_298 * 1.0 + local_288 * fVar59;
          fVar61 = fVar60 * 1.0 +
                   fVar64 * local_2a8 * 1.0 + fVar62 * local_298 * -1.0 + local_288 * fVar61;
          fVar62 = fVar64 * fVar52 * 1.0 + fVar54 * -1.0 + fVar57 * 1.0 + local_288 * fVar62;
          fVar64 = fVar63 * -1.0 + fVar55 * -1.0 + fVar58 * -1.0 + local_288 * fVar64;
          dVar20 = dVar26 * dVar33;
          dVar18 = dVar16 * dVar38 + dVar23 * dVar35 + dVar18 * dVar32 +
                   (double)CONCAT44(uStack_2c4,local_2c8);
          dVar23 = dVar16 * dVar39 + dVar23 * dVar36 + dVar22 +
                   (double)CONCAT44(uStack_2bc,uStack_2c0);
          dVar27 = dVar26 * dVar34;
          dVar22 = dVar25 * dVar37;
          dVar16 = dVar16 * dVar40 + dVar24 + dVar19 + local_2d8;
          dVar26 = dVar28 * dVar38 + dVar25 * dVar35 + dVar26 * dVar32 + dVar15;
          dVar25 = dVar28 * dVar39 + dVar25 * dVar36 + dVar20 + (double)local_2b8._8_8_;
          dVar28 = dVar28 * dVar40 + dVar22 + dVar27 + local_2e0;
        }
        pfVar7 = local_1e8 + local_1e0;
        *local_1e8 = (float)dVar18;
        pfVar11 = local_1d8 + local_1d0;
        *local_1d8 = (float)dVar23;
        pfVar1 = local_1c8 + local_1c0;
        *local_1c8 = (float)dVar16;
        pfVar2 = local_228 + local_220;
        *local_228 = fVar59;
        puVar8 = (undefined8 *)((longlong)local_218 + (longlong)local_210 * 4);
        auVar29._4_4_ = fVar61;
        auVar29._0_4_ = fVar59;
        auVar29._8_4_ = fVar62;
        auVar29._12_4_ = fVar64;
        uVar13 = extractps(auVar29,1);
        *local_218 = uVar13;
        puVar9 = (undefined8 *)((longlong)local_208 + (longlong)local_200 * 4);
        auVar30._4_4_ = fVar61;
        auVar30._0_4_ = fVar59;
        auVar30._8_4_ = fVar62;
        auVar30._12_4_ = fVar64;
        uVar13 = extractps(auVar30,2);
        *local_208 = uVar13;
        puVar10 = (undefined8 *)((longlong)local_1f8 + (longlong)local_1f0 * 4);
        auVar31._4_4_ = fVar61;
        auVar31._0_4_ = fVar59;
        auVar31._8_4_ = fVar62;
        auVar31._12_4_ = fVar64;
        uVar13 = extractps(auVar31,3);
        *local_1f8 = uVar13;
        pfVar3 = local_258 + local_250;
        *local_258 = (float)dVar26;
        pfVar4 = local_248 + local_240;
        *local_248 = (float)dVar25;
        pfVar5 = local_238 + local_230;
        *local_238 = (float)dVar28;
        iVar44 = iVar44 + 1;
        piVar47 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar47 = (int *)(param_1 + 0x3c);
        }
        fStack_2a4 = local_2a8;
        fStack_2a0 = local_2a8;
        fStack_29c = local_2a8;
        fStack_294 = local_298;
        fStack_290 = local_298;
        fStack_28c = local_298;
        fStack_284 = local_288;
        fStack_280 = local_288;
        fStack_27c = local_288;
        local_258 = pfVar3;
        local_248 = pfVar4;
        local_238 = pfVar5;
        local_228 = pfVar2;
        local_218 = puVar8;
        local_208 = puVar9;
        local_1f8 = puVar10;
        local_1e8 = pfVar7;
        local_1d8 = pfVar11;
        local_1c8 = pfVar1;
        local_1b8 = piVar42;
        local_198 = puVar6;
      } while (iVar44 < *piVar47);
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480d5802 FUN_1480d5802 body=755 status=ok
// SIG undefined FUN_1480d5802(void)

void FUN_1480d5802(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  longlong lVar16;
  float fVar17;
  undefined1 auStack_128 [32];
  int *local_108;
  int local_100;
  char *local_f8;
  int *local_f0 [2];
  int local_e0;
  int *local_d8;
  int local_c8;
  int *local_c0;
  int local_b0;
  int local_a0;
  int iStack_9c;
  int local_98;
  undefined1 local_90 [8];
  longlong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_140982196(local_90);
  local_f8 = param_2;
  FUN_1416b93de(local_f0,param_2);
  local_a0 = 0;
  iStack_9c = 0;
  local_98 = 0;
  FUN_144a76cd4(&local_108,param_2);
  iVar7 = *(int *)(param_1 + 0xe0);
  piVar1 = (int *)(param_2 + 0x3c);
  piVar14 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar14 = piVar1;
  }
  if (iVar7 == 0) {
    if (0 < *piVar14) {
      iVar7 = 0;
      do {
        piVar14 = local_108 + local_100;
        *local_108 = -1;
        iVar7 = iVar7 + 1;
        piVar10 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar10 = piVar1;
        }
        local_108 = piVar14;
      } while (iVar7 < *piVar10);
    }
  }
  else if (0 < *piVar14) {
    iVar4 = *(int *)(local_88 + 0x2b8);
    lVar16 = 0;
    do {
      pcVar5 = local_f8;
      piVar14 = local_f0[0] + local_e0;
      local_a0 = *local_f0[0];
      piVar10 = local_d8 + local_c8;
      iStack_9c = *local_d8;
      piVar3 = local_c0 + local_b0;
      local_98 = *local_c0;
      local_f0[0] = piVar14;
      local_d8 = piVar10;
      local_c0 = piVar3;
      if (local_98 == -1) {
        if (*local_f8 == '\0') {
          lVar11 = *(longlong *)(local_f8 + 0x80) + 0x88;
        }
        else {
          lVar11 = *(longlong *)(local_f8 + 0x58);
        }
        uVar13 = *(int *)(lVar11 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(lVar11 + 4) = uVar13;
        fVar17 = (float)(uVar13 >> 9 | 0x3f800000) + -1.0;
      }
      else {
        if (*local_f8 == '\0') {
          plVar9 = (longlong *)(*(longlong *)(local_f8 + 0x80) + 0x90);
        }
        else {
          plVar9 = *(longlong **)(local_f8 + 0x60);
          if (*plVar9 == 0) {
            uVar8 = FUN_14153c902((longlong)*(int *)(local_f8 + 0x3c) << 2,0);
            **(undefined8 **)(pcVar5 + 0x60) = uVar8;
            plVar9 = *(longlong **)(pcVar5 + 0x60);
          }
        }
        uVar13 = *(uint *)(*plVar9 + lVar16 * 4);
        *(uint *)(*plVar9 + lVar16 * 4) = uVar13 + 1;
        iVar6 = (local_98 << 0x10 | uVar13) * 0x19660d;
        iVar12 = iVar6 + 0x3c6ef35f;
        iVar15 = (iStack_9c * 0x19660d + 0x3c6ef35f) * iVar12 + local_a0 * 0x19660d;
        iVar2 = iVar15 + 0x3c6ef35f;
        iVar12 = iStack_9c * 0x19660d + iVar12 * iVar2 + 0x3c6ef35f;
        fVar17 = (float)((iVar6 + iVar2 * iVar12 + 0x3c6ef35f) * iVar12 + iVar15 + 0x3c6ef35fU >> 8)
                 * 5.9604645e-08;
      }
      piVar14 = local_108 + local_100;
      *local_108 = (int)(fVar17 * (float)iVar7) + iVar4;
      lVar16 = lVar16 + 1;
      piVar10 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar10 = piVar1;
      }
      local_108 = piVar14;
    } while (lVar16 < *piVar10);
  }
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480d5af6 FUN_1480d5af6 body=792 status=ok
// SIG undefined FUN_1480d5af6(void)

void FUN_1480d5af6(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int *piVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  float fVar19;
  undefined1 auStack_128 [32];
  uint *local_108;
  int local_100;
  char *local_f8;
  int *local_f0 [2];
  int local_e0;
  int *local_d8;
  int local_c8;
  int *local_c0;
  int local_b0;
  int local_a0;
  int iStack_9c;
  int local_98;
  undefined1 local_90 [8];
  longlong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_140982196(local_90);
  local_f8 = param_2;
  FUN_1416b93de(local_f0,param_2);
  local_a0 = 0;
  iStack_9c = 0;
  local_98 = 0;
  FUN_144a76cd4(&local_108,param_2);
  piVar1 = (int *)(param_2 + 0x3c);
  piVar13 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar13 = piVar1;
  }
  iVar10 = *(int *)(local_88 + 0x290);
  iVar15 = *(int *)(param_1 + 0xe0) + iVar10;
  if (iVar15 == 0 || SCARRY4(*(int *)(param_1 + 0xe0),iVar10) != iVar15 < 0) {
    if (0 < *piVar13) {
      iVar10 = 0;
      do {
        puVar5 = local_108 + local_100;
        *local_108 = 0xffffffff;
        iVar10 = iVar10 + 1;
        piVar13 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar13 = piVar1;
        }
        local_108 = puVar5;
      } while (iVar10 < *piVar13);
    }
  }
  else if (0 < *piVar13) {
    iVar6 = *(int *)(local_88 + 0x2b8);
    lVar18 = 0;
    do {
      pcVar7 = local_f8;
      piVar13 = local_f0[0] + local_e0;
      local_a0 = *local_f0[0];
      piVar3 = local_d8 + local_c8;
      iStack_9c = *local_d8;
      piVar4 = local_c0 + local_b0;
      local_98 = *local_c0;
      local_f0[0] = piVar13;
      local_d8 = piVar3;
      local_c0 = piVar4;
      if (local_98 == -1) {
        if (*local_f8 == '\0') {
          lVar14 = *(longlong *)(local_f8 + 0x80) + 0x88;
        }
        else {
          lVar14 = *(longlong *)(local_f8 + 0x58);
        }
        uVar9 = *(int *)(lVar14 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(lVar14 + 4) = uVar9;
        fVar19 = (float)(uVar9 >> 9 | 0x3f800000) + -1.0;
      }
      else {
        if (*local_f8 == '\0') {
          plVar12 = (longlong *)(*(longlong *)(local_f8 + 0x80) + 0x90);
        }
        else {
          plVar12 = *(longlong **)(local_f8 + 0x60);
          if (*plVar12 == 0) {
            uVar11 = FUN_14153c902((longlong)*(int *)(local_f8 + 0x3c) << 2,0);
            **(undefined8 **)(pcVar7 + 0x60) = uVar11;
            plVar12 = *(longlong **)(pcVar7 + 0x60);
          }
        }
        uVar9 = *(uint *)(*plVar12 + lVar18 * 4);
        *(uint *)(*plVar12 + lVar18 * 4) = uVar9 + 1;
        iVar8 = (local_98 << 0x10 | uVar9) * 0x19660d;
        iVar16 = iVar8 + 0x3c6ef35f;
        iVar17 = (iStack_9c * 0x19660d + 0x3c6ef35f) * iVar16 + local_a0 * 0x19660d;
        iVar2 = iVar17 + 0x3c6ef35f;
        iVar16 = iStack_9c * 0x19660d + iVar16 * iVar2 + 0x3c6ef35f;
        fVar19 = (float)((iVar8 + iVar2 * iVar16 + 0x3c6ef35f) * iVar16 + iVar17 + 0x3c6ef35fU >> 8)
                 * 5.9604645e-08;
      }
      iVar16 = (int)(fVar19 * (float)iVar15);
      if (iVar16 < iVar10) {
        uVar9 = (uint)*(ushort *)(*(longlong *)(local_88 + 0x298) + (longlong)iVar16 * 2);
      }
      else {
        uVar9 = iVar16 + (iVar6 - iVar10);
      }
      puVar5 = local_108 + local_100;
      *local_108 = uVar9;
      lVar18 = lVar18 + 1;
      piVar13 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar13 = piVar1;
      }
      local_108 = puVar5;
    } while (lVar18 < *piVar13);
  }
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480d5e10 FUN_1480d5e10 body=172 status=ok
// SIG undefined FUN_1480d5e10(void)

void FUN_1480d5e10(longlong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_58 [32];
  int *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140982196(local_28);
  FUN_144a76cd4(&local_38);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar1 = *(int *)(local_20 + 0x290);
    iVar2 = *(int *)(param_1 + 0xe0);
    iVar4 = 0;
    do {
      piVar3 = local_38 + local_30;
      *local_38 = iVar1 + iVar2;
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      local_38 = piVar3;
    } while (iVar4 < *piVar5);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d5ebe FUN_1480d5ebe body=358 status=ok
// SIG undefined FUN_1480d5ebe(void)

void FUN_1480d5ebe(longlong param_1,char *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 auStack_78 [32];
  uint *local_58;
  int local_50;
  int *local_48;
  undefined8 uStack_40;
  int local_38;
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140982196(local_30);
  local_48 = (int *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_144a98d08(&local_48,param_2);
  FUN_144a76cd4(&local_58,param_2);
  piVar1 = (int *)(param_2 + 0x3c);
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = piVar1;
  }
  iVar4 = *(int *)(local_28 + 0x290);
  iVar7 = *(int *)(param_1 + 0xe0) + iVar4;
  if (iVar7 == 0 || SCARRY4(*(int *)(param_1 + 0xe0),iVar4) != iVar7 < 0) {
    if (0 < *piVar5) {
      iVar4 = 0;
      do {
        puVar2 = local_58 + local_50;
        *local_58 = 0xffffffff;
        iVar4 = iVar4 + 1;
        piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar5 = piVar1;
        }
        local_58 = puVar2;
      } while (iVar4 < *piVar5);
    }
  }
  else if (0 < *piVar5) {
    iVar7 = *(int *)(local_28 + 0x2b8);
    iVar6 = 0;
    do {
      piVar5 = local_48 + local_38;
      iVar3 = *local_48;
      if (iVar3 < iVar4) {
        *local_58 = (uint)*(ushort *)(*(longlong *)(local_28 + 0x298) + (longlong)iVar3 * 2);
      }
      else {
        *local_58 = iVar3 + (iVar7 - iVar4);
      }
      local_58 = local_58 + local_50;
      iVar6 = iVar6 + 1;
      piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar8 = piVar1;
      }
      local_48 = piVar5;
    } while (iVar6 < *piVar8);
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480d6952 FUN_1480d6952 body=453 status=ok
// SIG undefined FUN_1480d6952(void)

void FUN_1480d6952(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  int local_f0;
  undefined4 *local_e8;
  int local_e0;
  undefined4 *local_d8;
  int local_d0;
  undefined4 *local_c8;
  int local_c0;
  undefined4 *local_b8;
  int local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140982196(local_40,param_1);
  iVar9 = 0;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_144a76d88(&local_58,param_1);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_144a98dce(&local_88,param_1);
  local_60 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_144a98dce(&local_70,param_1);
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_144a98dce(&local_a8,param_1);
  FUN_144a76cd4(&local_b8,param_1);
  FUN_144a76c20(&local_e8,param_1);
  FUN_144a76c20(&local_d8,param_1);
  FUN_144a76c20(&local_c8,param_1);
  FUN_140126e42(&local_f8,param_1);
  piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar8 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar8) {
    do {
      puVar1 = local_b8 + local_b0;
      *local_b8 = 0xffffffff;
      uVar7 = DAT_14c846338;
      uVar6 = DAT_14c846330._4_4_;
      puVar2 = local_e8 + local_e0;
      *local_e8 = (undefined4)DAT_14c846330;
      puVar3 = local_d8 + local_d0;
      *local_d8 = uVar6;
      puVar4 = local_c8 + local_c0;
      *local_c8 = uVar7;
      puVar5 = local_f8 + local_f0;
      *local_f8 = 0;
      iVar9 = iVar9 + 1;
      piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar8 = (int *)(param_1 + 0x3c);
      }
      local_f8 = puVar5;
      local_e8 = puVar2;
      local_d8 = puVar3;
      local_c8 = puVar4;
      local_b8 = puVar1;
    } while (iVar9 < *piVar8);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d6b18 FUN_1480d6b18 body=475 status=ok
// SIG undefined FUN_1480d6b18(void)

void FUN_1480d6b18(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  int local_100;
  undefined4 *local_f8;
  int local_f0;
  undefined4 *local_e8;
  int local_e0;
  undefined4 *local_d8;
  int local_d0;
  undefined4 *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_140982196(local_40,param_1);
  iVar9 = 0;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_144a76d88(&local_58,param_1);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_144a98dce(&local_88,param_1);
  local_60 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_144a98dce(&local_70,param_1);
  local_a8 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_144a98dce(&local_b8,param_1);
  local_90 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  FUN_144a98dce(&local_a0,param_1);
  FUN_144a76cd4(&local_c8,param_1);
  FUN_144a76c20(&local_f8,param_1);
  FUN_144a76c20(&local_e8,param_1);
  FUN_144a76c20(&local_d8,param_1);
  FUN_140126e42(&local_108,param_1);
  piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar8 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar8) {
    do {
      puVar1 = local_c8 + local_c0;
      *local_c8 = 0xffffffff;
      uVar7 = DAT_14c846338;
      uVar6 = DAT_14c846330._4_4_;
      puVar2 = local_f8 + local_f0;
      *local_f8 = (undefined4)DAT_14c846330;
      puVar3 = local_e8 + local_e0;
      *local_e8 = uVar6;
      puVar4 = local_d8 + local_d0;
      *local_d8 = uVar7;
      puVar5 = local_108 + local_100;
      *local_108 = 0;
      iVar9 = iVar9 + 1;
      piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar8 = (int *)(param_1 + 0x3c);
      }
      local_108 = puVar5;
      local_f8 = puVar2;
      local_e8 = puVar3;
      local_d8 = puVar4;
      local_c8 = puVar1;
    } while (iVar9 < *piVar8);
  }
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d6cf4 FUN_1480d6cf4 body=924 status=ok
// SIG undefined FUN_1480d6cf4(void)

void FUN_1480d6cf4(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined **ppuVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 == DAT_14cb39540) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb39548) {
    if (*(char *)(param_3 + 0x318) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb39550) {
    if (*(char *)(param_3 + 0x318) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb39558) {
    if (*(char *)(param_3 + 0x318) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb39560) {
    if (*(char *)(param_3 + 0x318) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb39568) {
    if ((*(longlong *)(param_3 + 800) != 0) && (*(int *)(*(longlong *)(param_3 + 800) + 300) != 0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb39570) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb39578) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
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
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14ad9de30;
  }
  else if (lVar1 == DAT_14cb39580) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
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
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14ad9dea0;
  }
  else {
    if (lVar1 != DAT_14cb39588) {
      if (lVar1 == DAT_14cb39590) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
      if (lVar1 == DAT_14cb39598) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
      if (lVar1 == DAT_14cb395a0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
      if (lVar1 == DAT_14cb395a8) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
      goto LAB_1480d6e01;
    }
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
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
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14ad9df10;
  }
  local_28 = 2;
  *local_30 = ppuVar2;
  local_30[3] = param_1;
  FUN_144a450dc(param_4,&local_30);
  FUN_1449db362(&local_30);
LAB_1480d6e01:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d7450 FUN_1480d7450 body=301 status=ok
// SIG undefined FUN_1480d7450(void)

void FUN_1480d7450(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  int local_70;
  undefined4 *local_68;
  int local_60;
  undefined4 *local_58;
  int local_50;
  undefined4 *local_48;
  int local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140982196(local_20,param_1);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_144a98d08(&local_38,param_1);
  FUN_144a76c20(&local_78,param_1);
  FUN_144a76c20(&local_68,param_1);
  FUN_144a76c20(&local_58,param_1);
  FUN_144a76c20(&local_48,param_1);
  piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar6 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar6) {
    iVar5 = 0;
    do {
      puVar1 = local_78 + local_70;
      *local_78 = 0x3f800000;
      puVar2 = local_68 + local_60;
      *local_68 = 0x3f800000;
      puVar3 = local_58 + local_50;
      *local_58 = 0x3f800000;
      puVar4 = local_48 + local_40;
      *local_48 = 0x3f800000;
      iVar5 = iVar5 + 1;
      piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar6 = (int *)(param_1 + 0x3c);
      }
      local_78 = puVar1;
      local_68 = puVar2;
      local_58 = puVar3;
      local_48 = puVar4;
    } while (iVar5 < *piVar6);
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d757e FUN_1480d757e body=266 status=ok
// SIG undefined FUN_1480d757e(void)

void FUN_1480d757e(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  int local_90;
  undefined4 *local_88;
  int local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar5 = 0;
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_144a98d08(&local_48,param_1);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_144a98d08(&local_68,param_1);
  FUN_140982196(local_78,param_1);
  FUN_144a76c20(&local_98,param_1);
  FUN_144a76c20(&local_88,param_1);
  piVar4 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar4 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar4) {
    do {
      uVar3 = DAT_14c84635c;
      puVar1 = local_98 + local_90;
      *local_98 = (int)DAT_14c84635c;
      puVar2 = local_88 + local_80;
      *local_88 = (int)((ulonglong)uVar3 >> 0x20);
      iVar5 = iVar5 + 1;
      piVar4 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar4 = (int *)(param_1 + 0x3c);
      }
      local_98 = puVar1;
      local_88 = puVar2;
    } while (iVar5 < *piVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d76ae FUN_1480d76ae body=169 status=ok
// SIG undefined FUN_1480d76ae(void)

void FUN_1480d76ae(longlong param_1,longlong param_2)

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
  *(uint *)(param_1 + 0x398) = *(uint *)(param_1 + 0x398) & 0xfffffffe | (uint)(local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d7764 FUN_1480d7764 body=166 status=ok
// SIG undefined FUN_1480d7764(void)

longlong *
FUN_1480d7764(longlong *param_1,longlong *param_2,undefined4 param_3,longlong *param_4,
             undefined1 param_5,undefined8 *param_6,undefined4 *param_7)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  plVar1 = (longlong *)*param_2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)(param_1 + 2) = param_3;
  plVar1 = (longlong *)*param_4;
  param_1[3] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 4) = (int)param_4[1];
  *(undefined1 *)(param_1 + 5) = param_5;
  uVar5 = param_6[1];
  *(undefined8 *)((longlong)param_1 + 0x2c) = *param_6;
  *(undefined8 *)((longlong)param_1 + 0x34) = uVar5;
  uVar2 = param_7[1];
  uVar3 = param_7[2];
  uVar4 = param_7[3];
  *(undefined4 *)((longlong)param_1 + 0x3c) = *param_7;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 9) = uVar4;
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if ((longlong *)*param_4 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_4 + 0x10))();
  }
  return param_1;
}



// FUNCTION 1480d780a FUN_1480d780a body=127 status=ok
// SIG undefined FUN_1480d780a(void)

undefined8 FUN_1480d780a(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x1e8) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x1e0);
    lVar4 = (longlong)*(int *)(param_1 + 0x1e8) << 3;
    do {
      iVar2 = (**(code **)(*(longlong *)*puVar3 + 0x10))();
      if ((iVar2 == param_2) ||
         ((param_2 == 0 &&
          (iVar2 = (**(code **)(*(longlong *)*puVar3 + 0x10))(), iVar2 == *(int *)(param_1 + 0x1f0))
          ))) {
        if (puVar3 == (undefined8 *)0x0) {
          return 0;
        }
        cVar1 = (**(code **)(*(longlong *)*puVar3 + 8))();
        if (cVar1 == '\0') {
          return 0;
        }
        return *puVar3;
      }
      puVar3 = puVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 1480d788a FUN_1480d788a body=128 status=ok
// SIG undefined FUN_1480d788a(void)

void FUN_1480d788a(longlong param_1,ulonglong param_2,int param_3,undefined4 param_4,
                  undefined4 param_5)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  local_28 = param_2;
  lVar2 = FUN_14810b26a(param_1 + 0xf0,uVar1 >> 0x10 ^ uVar1);
  *(int *)(lVar2 + 0x40) = *(int *)(lVar2 + 0x40) + param_3;
  *(undefined4 *)(lVar2 + 0x44) = param_4;
  *(undefined4 *)(lVar2 + 0x48) = param_5;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d790c FUN_1480d790c body=324 status=ok
// SIG undefined FUN_1480d790c(void)

undefined8 * FUN_1480d790c(uint *param_1,undefined8 *param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = *(longlong *)(param_1 + 2);
  uVar4 = param_1[4];
  lVar8 = (longlong)(int)uVar4;
  if (lVar8 != 0) {
    lVar6 = 0;
    puVar5 = (undefined8 *)0x0;
    do {
      puVar3 = *(undefined8 **)(lVar9 + lVar6);
      if (*(int *)(puVar3 + 4) + param_4 < *(uint *)(puVar3 + 3) >> 5) {
        puVar5 = puVar3;
      }
      lVar6 = lVar6 + 8;
    } while (lVar8 * 8 - lVar6 != 0);
    if (puVar5 != (undefined8 *)0x0) goto LAB_1480d7a17;
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  param_1[4] = uVar4 + 1;
  if (param_1[5] < uVar4 + 1) {
    FUN_1456bd870(param_1 + 2,uVar4);
    lVar9 = *(longlong *)(param_1 + 2);
  }
  *(undefined8 **)(lVar9 + lVar8 * 8) = puVar5;
  uVar4 = *param_1;
  if (*param_1 < param_4) {
    uVar4 = param_4;
  }
  uVar1 = (ulonglong)((uVar4 - 1) + (uint)(uVar4 == 0)) * 2 + 1;
  lVar9 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  if (param_1[8] == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = *(undefined2 **)(param_1 + 6);
  }
  FUN_14323d458(puVar5,param_3,puVar7,0x20,1 << ((byte)lVar9 & 0x1f),param_1[10],0,0,param_1[0xb]);
  param_1[0xc] = param_1[0xc] + *(int *)(puVar5 + 3);
LAB_1480d7a17:
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = puVar5;
  iVar2 = *(int *)(puVar5 + 4);
  *(int *)(param_2 + 1) = iVar2;
  *(uint *)(puVar5 + 4) = iVar2 + param_4;
  param_1[0xd] = param_1[0xd] + param_4 * 0x20;
  return param_2;
}



// FUNCTION 1480d7a50 FUN_1480d7a50 body=324 status=ok
// SIG undefined FUN_1480d7a50(void)

undefined8 * FUN_1480d7a50(uint *param_1,undefined8 *param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = *(longlong *)(param_1 + 2);
  uVar4 = param_1[4];
  lVar8 = (longlong)(int)uVar4;
  if (lVar8 != 0) {
    lVar6 = 0;
    puVar5 = (undefined8 *)0x0;
    do {
      puVar3 = *(undefined8 **)(lVar9 + lVar6);
      if (*(int *)(puVar3 + 4) + param_4 < *(uint *)(puVar3 + 3) >> 5) {
        puVar5 = puVar3;
      }
      lVar6 = lVar6 + 8;
    } while (lVar8 * 8 - lVar6 != 0);
    if (puVar5 != (undefined8 *)0x0) goto LAB_1480d7b5b;
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  param_1[4] = uVar4 + 1;
  if (param_1[5] < uVar4 + 1) {
    FUN_1456bd870(param_1 + 2,uVar4);
    lVar9 = *(longlong *)(param_1 + 2);
  }
  *(undefined8 **)(lVar9 + lVar8 * 8) = puVar5;
  uVar4 = *param_1;
  if (*param_1 < param_4) {
    uVar4 = param_4;
  }
  uVar1 = (ulonglong)((uVar4 - 1) + (uint)(uVar4 == 0)) * 2 + 1;
  lVar9 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  if (param_1[8] == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = *(undefined2 **)(param_1 + 6);
  }
  FUN_14323d458(puVar5,param_3,puVar7,0x20,1 << ((byte)lVar9 & 0x1f),param_1[10],0,0,param_1[0xb]);
  param_1[0xc] = param_1[0xc] + *(int *)(puVar5 + 3);
LAB_1480d7b5b:
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = puVar5;
  iVar2 = *(int *)(puVar5 + 4);
  *(int *)(param_2 + 1) = iVar2;
  *(uint *)(puVar5 + 4) = iVar2 + param_4;
  param_1[0xd] = param_1[0xd] + param_4 * 0x20;
  return param_2;
}



// FUNCTION 1480d7b94 FUN_1480d7b94 body=155 status=ok
// SIG undefined FUN_1480d7b94(void)

longlong FUN_1480d7b94(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar3 = param_1 + 0x128;
    if (*(longlong *)(param_1 + 0x130) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x130);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x138) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0xf0) + (longlong)iVar2 * 0x60;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar2 * 0x60) == param_2)
        goto LAB_1480d7ba4;
        iVar2 = *(int *)(lVar3 + 0x58);
      } while (iVar2 != -1);
    }
  }
  lVar3 = 0;
LAB_1480d7ba4:
  return lVar3 + 8;
}



// FUNCTION 1480d7c30 FUN_1480d7c30 body=8 status=ok
// SIG undefined FUN_1480d7c30(void)

longlong FUN_1480d7c30(longlong param_1)

{
  return param_1 + 400;
}



// FUNCTION 1480d7c38 FUN_1480d7c38 body=63 status=ok
// SIG undefined FUN_1480d7c38(void)

void FUN_1480d7c38(undefined4 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a7eae6();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  FUN_14804b320(param_1,lVar2 + 0xf8);
  return;
}



// FUNCTION 1480d7c78 FUN_1480d7c78 body=63 status=ok
// SIG undefined FUN_1480d7c78(void)

void FUN_1480d7c78(undefined4 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a7eae6();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  thunk_FUN_14804b3c7(param_1,lVar2 + 0xf8);
  return;
}



// FUNCTION 1480d7cb8 FUN_1480d7cb8 body=63 status=ok
// SIG undefined FUN_1480d7cb8(void)

void FUN_1480d7cb8(undefined4 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a7eae6();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  thunk_FUN_14804b403(param_1,lVar2 + 0xf8);
  return;
}


