// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148867bf8 FUN_148867bf8 body=126 status=ok
// SIG undefined FUN_148867bf8(void)

void FUN_148867bf8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b403b80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b403b10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148867c67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148867c76 FUN_148867c76 body=48 status=ok
// SIG undefined FUN_148867c76(void)

void FUN_148867c76(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148867ca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148867ca6 FUN_148867ca6 body=163 status=ok
// SIG undefined FUN_148867ca6(void)

bool FUN_148867ca6(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
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



// FUNCTION 148867d4c FUN_148867d4c body=110 status=ok
// SIG undefined FUN_148867d4c(void)

void FUN_148867d4c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x10;
    if (0x10 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x8c)) {
    *(int *)(param_1 + 0x8c) = (int)uVar2;
    FUN_145983304(param_1,*(undefined4 *)(param_1 + 0x88),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 148867dba FUN_148867dba body=643 status=ok
// SIG undefined FUN_148867dba(void)

void FUN_148867dba(longlong param_1,longlong *param_2,longlong param_3)

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
        iVar2 = *(int *)(param_3 + 0x88);
        *(uint *)(param_3 + 0x88) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0x8c) < iVar2 + 1U) {
          FUN_145983282(param_3,iVar2);
        }
        lVar7 = *(longlong *)(param_3 + 0x80);
        if (*(longlong *)(param_3 + 0x80) == 0) {
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
        FUN_148867dba(uVar4,&local_168,param_3);
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



// FUNCTION 14886803e FUN_14886803e body=336 status=ok
// SIG undefined FUN_14886803e(void)

void FUN_14886803e(longlong param_1,undefined8 param_2,longlong param_3)

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
        iVar3 = *(int *)(param_3 + 0x88);
        *(uint *)(param_3 + 0x88) = iVar3 + 1U;
        if (*(uint *)(param_3 + 0x8c) < iVar3 + 1U) {
          FUN_145983282(param_3,iVar3);
        }
        lVar5 = *(longlong *)(param_3 + 0x80);
        if (*(longlong *)(param_3 + 0x80) == 0) {
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



// FUNCTION 148868190 FUN_148868190 body=772 status=ok
// SIG undefined FUN_148868190(void)

void FUN_148868190(longlong param_1,longlong *param_2,longlong param_3)

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
LAB_1488682b4:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_1488682cc;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_1488682b4;
LAB_1488682cc:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = *(int *)(param_3 + 0x88);
          *(uint *)(param_3 + 0x88) = iVar2 + 1U;
          if (*(uint *)(param_3 + 0x8c) < iVar2 + 1U) {
            FUN_145983282(param_3,iVar2);
          }
          lVar8 = *(longlong *)(param_3 + 0x80);
          if (*(longlong *)(param_3 + 0x80) == 0) {
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
        FUN_148868190(uVar4,&local_168,param_3);
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



// FUNCTION 148868496 FUN_148868496 body=29 status=ok
// SIG undefined FUN_148868496(void)

undefined8 FUN_148868496(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488684ce FUN_1488684ce body=29 status=ok
// SIG undefined FUN_1488684ce(void)

bool FUN_1488684ce(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488684ec FUN_1488684ec body=26 status=ok
// SIG undefined FUN_1488684ec(void)

bool FUN_1488684ec(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148868506 FUN_148868506 body=24 status=ok
// SIG undefined FUN_148868506(void)

bool FUN_148868506(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14886851e FUN_14886851e body=93 status=ok
// SIG undefined FUN_14886851e(void)

void FUN_14886851e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b403bf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14886857c FUN_14886857c body=93 status=ok
// SIG undefined FUN_14886857c(void)

void FUN_14886857c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b403bf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488685da FUN_1488685da body=126 status=ok
// SIG undefined FUN_1488685da(void)

void FUN_1488685da(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b403bf0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148868649. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148868658 FUN_148868658 body=35 status=ok
// SIG undefined FUN_148868658(void)

void FUN_148868658(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148868677. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 14886867c FUN_14886867c body=142 status=ok
// SIG undefined FUN_14886867c(void)

bool FUN_14886867c(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(lVar2);
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



// FUNCTION 14886870c FUN_14886870c body=107 status=ok
// SIG undefined FUN_14886870c(void)

void FUN_14886870c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1469006c0(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 148868778 FUN_148868778 body=132 status=ok
// SIG undefined FUN_148868778(void)

void FUN_148868778(longlong param_1,int param_2)

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



// FUNCTION 1488687fe FUN_1488687fe body=31 status=ok
// SIG undefined FUN_1488687fe(void)

undefined8 FUN_1488687fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148868838 FUN_148868838 body=29 status=ok
// SIG undefined FUN_148868838(void)

bool FUN_148868838(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148868856 FUN_148868856 body=93 status=ok
// SIG undefined FUN_148868856(void)

void FUN_148868856(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403cd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b403c60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488688b4 FUN_1488688b4 body=93 status=ok
// SIG undefined FUN_1488688b4(void)

void FUN_1488688b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403cd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b403c60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148868912 FUN_148868912 body=126 status=ok
// SIG undefined FUN_148868912(void)

void FUN_148868912(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b403cd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b403c60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148868981. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148868990 FUN_148868990 body=40 status=ok
// SIG undefined FUN_148868990(void)

void FUN_148868990(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488689b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1488689b8 FUN_1488689b8 body=152 status=ok
// SIG undefined FUN_1488689b8(void)

bool FUN_1488689b8(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 148868a54 FUN_148868a54 body=31 status=ok
// SIG undefined FUN_148868a54(void)

undefined8 FUN_148868a54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148868a8e FUN_148868a8e body=29 status=ok
// SIG undefined FUN_148868a8e(void)

bool FUN_148868a8e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148868aac FUN_148868aac body=93 status=ok
// SIG undefined FUN_148868aac(void)

void FUN_148868aac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403b80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b403d40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148868b0a FUN_148868b0a body=93 status=ok
// SIG undefined FUN_148868b0a(void)

void FUN_148868b0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403b80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b403d40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148868b68 FUN_148868b68 body=126 status=ok
// SIG undefined FUN_148868b68(void)

void FUN_148868b68(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b403b80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b403d40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148868bd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148868be6 FUN_148868be6 body=48 status=ok
// SIG undefined FUN_148868be6(void)

void FUN_148868be6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148868c13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148868c16 FUN_148868c16 body=163 status=ok
// SIG undefined FUN_148868c16(void)

bool FUN_148868c16(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
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



// FUNCTION 148868cba FUN_148868cba body=132 status=ok
// SIG undefined FUN_148868cba(void)

void FUN_148868cba(longlong param_1,int param_2)

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



// FUNCTION 148868d40 FUN_148868d40 body=62 status=ok
// SIG undefined FUN_148868d40(void)

void FUN_148868d40(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148868d7e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 148868d7e FUN_148868d7e body=93 status=ok
// SIG undefined FUN_148868d7e(void)

ulonglong FUN_148868d7e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 148868ddc FUN_148868ddc body=62 status=ok
// SIG undefined FUN_148868ddc(void)

void FUN_148868ddc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148868e1a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 148868e1a FUN_148868e1a body=93 status=ok
// SIG undefined FUN_148868e1a(void)

ulonglong FUN_148868e1a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 148868e78 FUN_148868e78 body=145 status=ok
// SIG undefined FUN_148868e78(void)

void FUN_148868e78(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x40;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e04];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x40,4);
  }
  uVar2 = 0x7fffffff;
  if (3 < (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 148868f0a FUN_148868f0a body=25 status=ok
// SIG undefined FUN_148868f0a(void)

void FUN_148868f0a(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b162fc0;
  lVar1 = *(longlong *)(param_1 + 0x30);
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



// FUNCTION 148868f24 FUN_148868f24 body=29 status=ok
// SIG undefined FUN_148868f24(void)

undefined8 FUN_148868f24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148868f42 FUN_148868f42 body=25 status=ok
// SIG undefined FUN_148868f42(void)

void FUN_148868f42(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b1629f0;
  lVar1 = *(longlong *)(param_1 + 0x30);
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



// FUNCTION 148868f5c FUN_148868f5c body=29 status=ok
// SIG undefined FUN_148868f5c(void)

undefined8 FUN_148868f5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148868f7a FUN_148868f7a body=25 status=ok
// SIG undefined FUN_148868f7a(void)

void FUN_148868f7a(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b162a30;
  lVar1 = *(longlong *)(param_1 + 0x30);
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



// FUNCTION 148868f94 FUN_148868f94 body=29 status=ok
// SIG undefined FUN_148868f94(void)

undefined8 FUN_148868f94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148868fb2 FUN_148868fb2 body=341 status=ok
// SIG undefined FUN_148868fb2(void)

undefined4 * FUN_148868fb2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_148869108(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[1] = *puVar1;
  local_40[2] = puVar1[1];
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1488691ee(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_1488692ea(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148869108 FUN_148869108 body=229 status=ok
// SIG undefined FUN_148869108(void)

int * FUN_148869108(longlong *param_1,int *param_2)

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



// FUNCTION 1488691ee FUN_1488691ee body=137 status=ok
// SIG undefined FUN_1488691ee(void)

undefined8 FUN_1488691ee(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_148869278((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 148869278 FUN_148869278 body=114 status=ok
// SIG undefined FUN_148869278(void)

void FUN_148869278(longlong *param_1,int param_2)

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



// FUNCTION 1488692ea FUN_1488692ea body=477 status=ok
// SIG undefined FUN_1488692ea(void)

void FUN_1488692ea(longlong *param_1)

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



// FUNCTION 1488694c8 FUN_1488694c8 body=132 status=ok
// SIG undefined FUN_1488694c8(void)

void FUN_1488694c8(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x20) == param_2) {
          FUN_14886954c(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14886954c FUN_14886954c body=90 status=ok
// SIG undefined FUN_14886954c(void)

void FUN_14886954c(longlong *param_1,int param_2)

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
  FUN_148869278();
  return;
}



// FUNCTION 1488695a6 FUN_1488695a6 body=67 status=ok
// SIG undefined FUN_1488695a6(void)

void FUN_1488695a6(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14583543c(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1488692ea(param_1);
    return;
  }
  FUN_1488695ea(param_1);
  FUN_14583543c(param_1,0);
  return;
}



// FUNCTION 1488695ea FUN_1488695ea body=322 status=ok
// SIG undefined FUN_1488695ea(void)

void FUN_1488695ea(longlong *param_1)

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



// FUNCTION 14886972e FUN_14886972e body=175 status=ok
// SIG undefined FUN_14886972e(void)

void FUN_14886972e(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_1488697b7;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1488697b7:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1488697de FUN_1488697de body=189 status=ok
// SIG undefined FUN_1488697de(void)

void FUN_1488697de(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_14886986d;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14886986d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14886989c FUN_14886989c body=175 status=ok
// SIG undefined FUN_14886989c(void)

void FUN_14886989c(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_148869925;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148869925:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14886994c FUN_14886994c body=164 status=ok
// SIG undefined FUN_14886994c(void)

void FUN_14886994c(longlong *param_1,undefined8 param_2)

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
        goto LAB_1488699cc;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1488699cc:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1488699f0 FUN_1488699f0 body=147 status=ok
// SIG undefined FUN_1488699f0(void)

void FUN_1488699f0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148869a84 FUN_148869a84 body=164 status=ok
// SIG undefined FUN_148869a84(void)

void FUN_148869a84(longlong *param_1,undefined8 param_2)

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
        goto LAB_148869b04;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148869b04:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148869b28 FUN_148869b28 body=25 status=ok
// SIG undefined FUN_148869b28(void)

void FUN_148869b28(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b162ec0;
  lVar1 = *(longlong *)(param_1 + 0x30);
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



// FUNCTION 148869b42 FUN_148869b42 body=29 status=ok
// SIG undefined FUN_148869b42(void)

undefined8 FUN_148869b42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148869b60 FUN_148869b60 body=29 status=ok
// SIG undefined FUN_148869b60(void)

undefined8 FUN_148869b60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148869b98 FUN_148869b98 body=29 status=ok
// SIG undefined FUN_148869b98(void)

bool FUN_148869b98(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148869bb6 FUN_148869bb6 body=26 status=ok
// SIG undefined FUN_148869bb6(void)

bool FUN_148869bb6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148869bd0 FUN_148869bd0 body=24 status=ok
// SIG undefined FUN_148869bd0(void)

bool FUN_148869bd0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148869be8 FUN_148869be8 body=93 status=ok
// SIG undefined FUN_148869be8(void)

void FUN_148869be8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b403e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148869c46 FUN_148869c46 body=93 status=ok
// SIG undefined FUN_148869c46(void)

void FUN_148869c46(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b403e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148869ca4 FUN_148869ca4 body=126 status=ok
// SIG undefined FUN_148869ca4(void)

void FUN_148869ca4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b403e30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148869d13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148869d22 FUN_148869d22 body=35 status=ok
// SIG undefined FUN_148869d22(void)

void FUN_148869d22(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148869d41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148869d46 FUN_148869d46 body=142 status=ok
// SIG undefined FUN_148869d46(void)

bool FUN_148869d46(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(lVar2);
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



// FUNCTION 148869dd6 FUN_148869dd6 body=112 status=ok
// SIG undefined FUN_148869dd6(void)

void FUN_148869dd6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 148869e46 FUN_148869e46 body=147 status=ok
// SIG undefined FUN_148869e46(void)

void FUN_148869e46(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148869eda FUN_148869eda body=24 status=ok
// SIG undefined FUN_148869eda(void)

void FUN_148869eda(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148869eee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148869ef2 FUN_148869ef2 body=114 status=ok
// SIG undefined FUN_148869ef2(void)

void FUN_148869ef2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 148869f64 FUN_148869f64 body=86 status=ok
// SIG undefined FUN_148869f64(void)

void FUN_148869f64(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 148869fba FUN_148869fba body=132 status=ok
// SIG undefined FUN_148869fba(void)

void FUN_148869fba(longlong param_1,int param_2)

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



// FUNCTION 14886a040 FUN_14886a040 body=133 status=ok
// SIG undefined FUN_14886a040(void)

void FUN_14886a040(longlong param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar3 = param_1;
  }
  _Dst = (void *)((longlong)(int)param_2 * 0x20 + lVar3);
  FUN_148666db2(_Dst,1);
  iVar1 = *(int *)(param_1 + 0x108);
  iVar4 = ~param_2 + iVar1;
  if (iVar4 != 0) {
    iVar2 = 1;
    if (iVar4 < 1) {
      iVar2 = iVar4;
    }
    memmove(_Dst,(void *)(lVar3 + (longlong)(iVar1 - iVar2) * 0x20),(longlong)iVar2 << 5);
    iVar1 = *(int *)(param_1 + 0x108);
  }
  *(int *)(param_1 + 0x108) = iVar1 + -1;
  return;
}



// FUNCTION 14886a0c6 FUN_14886a0c6 body=73 status=ok
// SIG undefined FUN_14886a0c6(void)

void FUN_14886a0c6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14886a110(*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c));
  if (iVar1 == *(int *)(param_1 + 0x10c)) {
    return;
  }
  *(int *)(param_1 + 0x10c) = iVar1;
  FUN_148666f56(param_1,*(undefined4 *)(param_1 + 0x108),iVar1,0x20);
  return;
}



// FUNCTION 14886a110 FUN_14886a110 body=108 status=ok
// SIG undefined FUN_14886a110(void)

ulonglong FUN_14886a110(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x7fffffffffffe00U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,0);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 14886a1c2 FUN_14886a1c2 body=66 status=ok
// SIG undefined FUN_14886a1c2(void)

void FUN_14886a1c2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4042a0;
  FUN_140bd765a(param_1 + 0xd,0,0);
  plVar2 = (longlong *)param_1[0xe];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1412218b2(param_1);
  return;
}



// FUNCTION 14886a20a FUN_14886a20a body=1399 status=ok
// SIG undefined FUN_14886a20a(void)

void FUN_14886a20a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_238 [32];
  undefined8 *local_218;
  undefined8 *local_210;
  undefined8 local_208;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  longlong local_1e8 [5];
  longlong local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong local_198;
  longlong *local_190;
  undefined8 local_188;
  undefined8 local_180;
  longlong local_170;
  longlong *local_168;
  undefined8 *local_160;
  uint local_158;
  uint local_154;
  longlong local_150;
  longlong *local_148;
  undefined8 local_140;
  undefined8 local_138 [12];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined8 local_cc;
  undefined8 local_b8 [12];
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_4f;
  undefined8 local_4c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar15 = *(longlong *)(param_1 + 0x48);
  local_140 = param_4;
  lVar7 = FUN_1405f939e();
  if (((lVar7 != 0) && (*(char *)(lVar15 + 0x38) == '\x01')) &&
     (cVar5 = FUN_140e50f4a(lVar7), cVar5 == '\0')) {
    cVar5 = FUN_1404fa388(param_1 + 0x68);
    if (cVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_238);
    }
    goto LAB_14886a538;
  }
  FUN_14026e798(&local_150,param_2);
  if (local_150 != 0) {
    local_160 = (undefined8 *)0x0;
    uVar10 = *(uint *)(lVar15 + 0xa8);
    uVar9 = *(undefined8 *)(lVar15 + 0xa0);
    if (uVar10 == 0) {
      local_154 = 0;
      uVar10 = 0;
LAB_14886a2f2:
      local_158 = uVar10 + 1;
      if (local_154 < local_158) {
        FUN_144796b16(&local_160,uVar10);
      }
      lVar7 = (longlong)(int)uVar10;
      local_160[lVar7 * 0x10] = 0;
      (local_160 + lVar7 * 0x10)[1] = 0;
      puVar11 = local_160 + lVar7 * 0x10 + 2;
      *(undefined4 *)puVar11 = 0;
      *(undefined4 *)((longlong)puVar11 + 4) = 0;
      *(undefined4 *)(puVar11 + 1) = 0;
      *(undefined4 *)((longlong)puVar11 + 0xc) = 0x3ff00000;
      local_160[lVar7 * 0x10 + 4] = 0;
      (local_160 + lVar7 * 0x10 + 4)[1] = 0;
      local_160[lVar7 * 0x10 + 6] = 0;
      (local_160 + lVar7 * 0x10 + 6)[1] = 0;
      puVar11 = local_160 + lVar7 * 0x10 + 8;
      *(undefined4 *)puVar11 = 0;
      *(undefined4 *)((longlong)puVar11 + 4) = 0x3ff00000;
      *(undefined4 *)(puVar11 + 1) = 0;
      *(undefined4 *)((longlong)puVar11 + 0xc) = 0x3ff00000;
      local_160[lVar7 * 0x10 + 10] = 0x3ff0000000000000;
      (local_160 + lVar7 * 0x10 + 10)[1] = 0;
      local_160[lVar7 * 0x10 + 0xc] = 0x3f800000;
      *(undefined2 *)(local_160 + lVar7 * 0x10 + 0xd) = 0;
      *(undefined8 *)((longlong)local_160 + lVar7 * 0x80 + 0x6c) = 0;
    }
    else {
      local_158 = uVar10;
      FUN_140d27400(&local_160,uVar10,0);
      FUN_144796a68(local_160,uVar9,uVar10);
      uVar10 = local_158;
      if (*(int *)(lVar15 + 0xa8) == 0) goto LAB_14886a2f2;
    }
    lVar15 = lVar15 + 0x40;
    local_170 = local_150;
    local_168 = local_148;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_148 + 1) = (int)local_148[1] + 1;
      UNLOCK();
    }
    lVar8 = FUN_140206ee8(lVar15,&local_170);
    uVar9 = local_140;
    lVar7 = local_150;
    if (lVar8 != 0) {
      if (*(char *)(lVar8 + 0x40) == '\x01') {
        local_218 = local_b8;
        puVar11 = local_160;
        puVar13 = local_218;
        for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        local_58 = *(undefined4 *)(local_160 + 0xc);
        local_54 = *(undefined4 *)((longlong)local_160 + 100);
        local_50 = *(undefined1 *)(local_160 + 0xd);
        local_4f = *(undefined1 *)((longlong)local_160 + 0x69);
        local_4c = *(undefined8 *)((longlong)local_160 + 0x6c);
        FUN_1400b22c2(local_1e8,"GbxAudioEmitterBodyNode");
        local_210 = (undefined8 *)0x0;
        FUN_14071b0f2(lVar7,&local_1b8,local_1e8,uVar9);
        if (local_1e8[0] != 0) {
          FUN_1400020a8();
        }
        lVar7 = local_1b8;
        if (local_1b8 != 0) {
          local_198 = local_150;
          local_190 = local_148;
          if (local_148 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_148 + 1) = (int)local_148[1] + 1;
            UNLOCK();
          }
          uVar9 = FUN_140206ee8(lVar15,&local_198);
          local_218 = (undefined8 *)((ulonglong)local_218 & 0xffffffff00000000);
          FUN_14084a448(lVar7,&local_188,uVar9,param_2);
          local_188 = 0;
          local_180 = 0xffffffffffffffff;
          FUN_144904532(local_1b8,&local_160);
        }
        FUN_144a61ac8(&local_1b8);
      }
      else {
        local_210 = local_138;
        puVar11 = local_160;
        puVar13 = local_210;
        for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        local_d8 = *(undefined4 *)(local_160 + 0xc);
        local_d4 = *(undefined4 *)((longlong)local_160 + 100);
        local_d0 = *(undefined1 *)(local_160 + 0xd);
        local_cf = *(undefined1 *)((longlong)local_160 + 0x69);
        local_cc = *(undefined8 *)((longlong)local_160 + 0x6c);
        FUN_1412bd664(local_1e8,lVar15);
        local_208 = 0;
        local_218 = (undefined8 *)CONCAT71(local_218._1_7_,1);
        FUN_141504178(&local_1b8,param_2,local_1e8,&local_140);
        if ((longlong *)(param_1 + 0x68) != &local_1b8) {
          *(longlong *)(param_1 + 0x68) = local_1b8;
          local_1b8 = 0;
          plVar12 = *(longlong **)(param_1 + 0x70);
          *(longlong **)(param_1 + 0x70) = local_1b0;
          local_1b0 = (longlong *)0x0;
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))();
            }
          }
        }
        *(undefined4 *)(param_1 + 0x78) = local_1a8;
        *(undefined4 *)(param_1 + 0x7c) = uStack_1a4;
        *(undefined4 *)(param_1 + 0x80) = uStack_1a0;
        *(undefined4 *)(param_1 + 0x84) = uStack_19c;
        if (local_1b0 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_1b0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_1b0 + 0x10))();
          }
        }
        if ((local_1c0 != 0) && ((DAT_14cb26569 & 1) != 0)) {
          FUN_1400848c0(*(undefined8 *)(local_1c0 + 0x50));
        }
        plVar12 = *(longlong **)(param_1 + 0x70);
        bVar3 = true;
        if (plVar12 == (longlong *)0x0) {
LAB_14886a6ee:
          plVar14 = (longlong *)0x0;
LAB_14886a6f0:
          if (local_148 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_148 + 1) = (int)local_148[1] + 1;
            UNLOCK();
          }
          plVar12 = local_148;
          lVar15 = local_150;
          if (!bVar3) {
            LOCK();
            plVar2 = plVar14 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
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
        }
        else {
          iVar6 = (int)plVar12[1];
          do {
            if (iVar6 == 0) goto LAB_14886a6ee;
            LOCK();
            iVar4 = (int)plVar12[1];
            bVar16 = iVar6 == iVar4;
            if (bVar16) {
              *(int *)(plVar12 + 1) = iVar6 + 1;
              iVar4 = iVar6;
            }
            iVar6 = iVar4;
            UNLOCK();
          } while (!bVar16);
          lVar15 = *(longlong *)(param_1 + 0x68);
          if (lVar15 == 0) {
            bVar3 = false;
            plVar14 = plVar12;
            goto LAB_14886a6f0;
          }
        }
        local_1f8 = *(undefined4 *)(param_1 + 0x78);
        uStack_1f4 = *(undefined4 *)(param_1 + 0x7c);
        uStack_1f0 = *(undefined4 *)(param_1 + 0x80);
        uStack_1ec = *(undefined4 *)(param_1 + 0x84);
        FUN_1404fa4f6(lVar15,local_1e8);
        if (local_1e8[0] != 0) {
          FUN_144904532(local_1e8[0],&local_160);
        }
        FUN_144a61ac8(local_1e8);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar12 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
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
    }
    if (local_160 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_148 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_148 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_148)(local_148);
      LOCK();
      piVar1 = (int *)((longlong)local_148 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_148 + 0x10))(local_148);
      }
    }
  }
LAB_14886a538:
  if ((local_38 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14886a7a0 FUN_14886a7a0 body=507 status=ok
// SIG undefined FUN_14886a7a0(void)

void FUN_14886a7a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x38) == '\x01') {
    uVar8 = FUN_1405f939e(param_1);
    cVar6 = FUN_140e50f4a(uVar8);
    if (cVar6 == '\0') {
      cVar6 = FUN_1404fa388(param_1 + 0x68);
      if (cVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
      }
      goto LAB_14886a98a;
    }
  }
  FUN_14026e798(&local_50,param_2);
  if (local_50 != 0) {
    plVar10 = *(longlong **)(param_1 + 0x70);
    bVar4 = true;
    if (plVar10 == (longlong *)0x0) {
LAB_14886a837:
      plVar10 = (longlong *)0x0;
LAB_14886a83a:
      if (local_48 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
        UNLOCK();
      }
      lVar9 = local_50;
      plVar11 = local_48;
      if (!bVar4) {
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
    }
    else {
      iVar7 = (int)plVar10[1];
      do {
        if (iVar7 == 0) goto LAB_14886a837;
        LOCK();
        iVar5 = (int)plVar10[1];
        bVar12 = iVar7 == iVar5;
        if (bVar12) {
          *(int *)(plVar10 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar12);
      lVar9 = *(longlong *)(param_1 + 0x68);
      plVar11 = plVar10;
      if (lVar9 == 0) {
        bVar4 = false;
        goto LAB_14886a83a;
      }
    }
    local_68 = *(undefined4 *)(param_1 + 0x78);
    uStack_64 = *(undefined4 *)(param_1 + 0x7c);
    uStack_60 = *(undefined4 *)(param_1 + 0x80);
    uStack_5c = *(undefined4 *)(param_1 + 0x84);
    FUN_1404fa4f6(lVar9,&local_58);
    if (local_58 != 0) {
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      local_90 = lVar9;
      local_88 = plVar11;
      uVar8 = FUN_140206ee8(lVar3 + 0x70,&local_90);
      local_98 = 0;
      FUN_14084a448(local_58,&local_80,uVar8,param_2);
      local_80 = 0;
      local_78 = 0xffffffffffffffff;
    }
    FUN_144a61ac8(&local_58);
    FUN_140bd765a((longlong *)(param_1 + 0x68),0,0);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar11 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_48 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
LAB_14886a98a:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14886a9bc FUN_14886a9bc body=432 status=ok
// SIG undefined FUN_14886a9bc(void)

void FUN_14886a9bc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 8) == 0) goto LAB_14886aa31;
  uVar3 = *param_2;
  lVar7 = *(longlong *)(param_1 + 0x18);
  if (lVar7 == 0) {
    uVar6 = FUN_140067708();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x18) = lVar7;
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  lVar8 = *(longlong *)(param_1 + 0x20);
  if (lVar8 == 0) {
    if ((lVar7 != 0) && (*plVar1 != 0)) {
      plVar4 = *(longlong **)(lVar7 + 0xb8);
      if (plVar4 != (longlong *)0x0) {
        cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
        if (cVar5 != '\0') {
          uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar8 = FUN_144aff482(uVar6,plVar1);
          *(longlong *)(param_1 + 0x20) = lVar8;
          if (lVar8 != 0) {
            lVar7 = *(longlong *)(param_1 + 0x18);
            goto LAB_14886aa0d;
          }
          goto LAB_14886ab5b;
        }
      }
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
LAB_14886ab5b:
    local_38 = 0;
  }
  else {
LAB_14886aa0d:
    if (lVar7 == 0) {
      uVar6 = FUN_140067708(lVar8);
      lVar7 = FUN_14477b664(uVar6);
      *(longlong *)(param_1 + 0x18) = lVar7;
      lVar8 = *(longlong *)(param_1 + 0x20);
      if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*plVar1 != 0)) {
        plVar4 = *(longlong **)(lVar7 + 0xb8);
        if (plVar4 == (longlong *)0x0) {
LAB_14886ab69:
          lVar8 = 0;
        }
        else {
          cVar5 = (**(code **)(*plVar4 + 0x108))();
          if (cVar5 == '\0') goto LAB_14886ab69;
          uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar8 = FUN_144aff482(uVar6,plVar1);
        }
        *(longlong *)(param_1 + 0x20) = lVar8;
      }
    }
    FUN_1415a48ac(lVar8,&local_38);
  }
  FUN_147f7be92(uVar3,*(undefined8 *)(param_1 + 8),&local_38);
LAB_14886aa31:
  plVar1 = (longlong *)param_2[1];
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar1 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886ab6e FUN_14886ab6e body=124 status=ok
// SIG undefined FUN_14886ab6e(void)

void FUN_14886ab6e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(char *)(param_1 + 0x28) == '\x01') && (*(longlong *)(param_1 + 8) != 0)) {
    local_18 = 0;
    FUN_147f7be92(*param_2);
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
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886abec FUN_14886abec body=263 status=ok
// SIG undefined FUN_14886abec(void)

void FUN_14886abec(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar7 = *(longlong *)(param_1 + 0x10);
  if (lVar7 == 0) {
    uVar6 = FUN_1405b1a32();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x10) = lVar7;
  }
  plVar1 = (longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if ((lVar7 == 0) || (*plVar1 == 0)) goto LAB_14886ac82;
    plVar3 = *(longlong **)(lVar7 + 0xb8);
    if (plVar3 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar5 != '\0') {
        uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar7 = FUN_144aff482(uVar6,plVar1);
        *(longlong *)(param_1 + 0x18) = lVar7;
        if (lVar7 == 0) goto LAB_14886ac82;
        goto LAB_14886ace3;
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
LAB_14886ace3:
    local_30 = plVar1;
    FUN_14887157a(*param_2 + 0x210);
  }
LAB_14886ac82:
  puVar4 = (undefined8 *)param_2[1];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar2 = (int *)((longlong)puVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886ad0e FUN_14886ad0e body=54 status=ok
// SIG undefined FUN_14886ad0e(void)

void FUN_14886ad0e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_1470e4986();
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb7e010);
  FUN_144983130(lVar1 + 8,param_1 + 0x38);
  return;
}



// FUNCTION 14886ad44 FUN_14886ad44 body=22 status=ok
// SIG undefined FUN_14886ad44(void)

undefined8 FUN_14886ad44(undefined8 param_1,undefined8 param_2)

{
  FUN_141418bc0();
  return param_2;
}



// FUNCTION 14886ad5a FUN_14886ad5a body=138 status=ok
// SIG undefined FUN_14886ad5a(void)

void FUN_14886ad5a(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_3;
  if (-1 < (int)param_3) {
    uVar2 = *(uint *)(param_1 + 0x80);
    if ((int)param_3 <= (int)uVar2) {
      plVar1 = (longlong *)(param_1 + 0x78);
      *(uint *)(param_1 + 0x80) = uVar2 + 1;
      if (*(uint *)(param_1 + 0x84) <= uVar2) {
        FUN_14475e4ac(plVar1);
      }
      memmove((void *)(*plVar1 + uVar3 * 4 + 4),(void *)(*plVar1 + uVar3 * 4),
              (ulonglong)(uVar2 - param_3) << 2);
      *(undefined4 *)(*plVar1 + uVar3 * 4) = 0;
    }
  }
  FUN_14886ade4(param_1,param_2,uVar3);
  return;
}



// FUNCTION 14886ade4 FUN_14886ade4 body=128 status=ok
// SIG undefined FUN_14886ade4(void)

void FUN_14886ade4(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x5c) < iVar1 + 1U) {
    FUN_1446f84a2(param_1 + 0x50,iVar1);
  }
  lVar2 = (longlong)param_3;
  memmove((void *)(*(longlong *)(param_1 + 0x50) + lVar2 * 8 + 8),
          (void *)(*(longlong *)(param_1 + 0x50) + lVar2 * 8),
          (ulonglong)(uint)(iVar1 - param_3) << 3);
  *(undefined8 *)(*(longlong *)(param_1 + 0x50) + lVar2 * 8) = *param_2;
  FUN_1407fecba(param_1 + 0x60,*(undefined4 *)(param_1 + 0x58),1);
  if (param_3 <= *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  }
  return;
}



// FUNCTION 14886ae64 FUN_14886ae64 body=160 status=ok
// SIG undefined FUN_14886ae64(void)

void FUN_14886ae64(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x58) << 3;
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x50) + lVar2 * 8) == *param_2) {
        uVar1 = (uint)lVar2;
        if ((-1 < (int)uVar1) && (iVar3 = *(int *)(param_1 + 0x80), (int)uVar1 < iVar3)) {
          if (iVar3 - 1U != uVar1) {
            memmove((void *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar1 & 0x7fffffff) * 4),
                    (void *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar1 & 0x7fffffff) * 4 + 4
                            ),(longlong)(int)((iVar3 - 1U) - uVar1) << 2);
            iVar3 = *(int *)(param_1 + 0x80);
          }
          *(int *)(param_1 + 0x80) = iVar3 + -1;
          FUN_1401fef06(param_1 + 0x78);
        }
        break;
      }
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  FUN_14886af04(param_1,param_2);
  return;
}



// FUNCTION 14886af04 FUN_14886af04 body=193 status=ok
// SIG undefined FUN_14886af04(void)

void FUN_14886af04(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar5 = (longlong)iVar1 << 3;
    uVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x50) + uVar4 * 8) == *param_2) {
        uVar3 = (uint)uVar4;
        if ((int)uVar3 < 0) {
          return;
        }
        if ((int)uVar3 < *(int *)(param_1 + 0x68)) {
          FUN_14886bb68(param_1 + 0x60,uVar4 & 0xffffffff);
          iVar1 = *(int *)(param_1 + 0x58);
        }
        if (iVar1 <= (int)uVar3) {
          return;
        }
        if (iVar1 - 1U != uVar3) {
          memmove((void *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar3 & 0x7fffffff) * 8),
                  (void *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar3 & 0x7fffffff) * 8 + 8),
                  (longlong)(int)(~uVar3 + iVar1) << 3);
          iVar1 = *(int *)(param_1 + 0x58);
        }
        iVar1 = iVar1 + -1;
        *(int *)(param_1 + 0x58) = iVar1;
        iVar2 = *(int *)(param_1 + 0x4c);
        if ((int)uVar3 < iVar2) {
          iVar2 = iVar2 + -1;
          *(int *)(param_1 + 0x4c) = iVar2;
        }
        if (iVar2 < 1 || iVar2 < iVar1) {
          return;
        }
        iVar2 = 1;
        if (1 < iVar1) {
          iVar2 = iVar1;
        }
        *(int *)(param_1 + 0x4c) = iVar2 + -1;
        return;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 14886afc6 FUN_14886afc6 body=403 status=ok
// SIG undefined FUN_14886afc6(void)

void FUN_14886afc6(longlong param_1,undefined8 param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_128 [32];
  undefined1 local_108 [16];
  undefined1 local_f8 [56];
  undefined1 local_c0 [64];
  undefined1 *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_14886b15a();
  local_80 = (undefined1 *)0x0;
  local_78 = 0x1000000000;
  iVar2 = *(int *)(param_1 + 0x80);
  FUN_14097f3c8(local_c0,iVar2,1);
  fVar7 = 0.0;
  if (0 < (longlong)iVar2) {
    lVar3 = 0;
    do {
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x78) + lVar3 * 4);
      puVar4 = local_80;
      if (local_80 == (undefined1 *)0x0) {
        puVar4 = local_c0;
      }
      fVar7 = fVar7 + fVar1;
      *(float *)(puVar4 + lVar3 * 4) = fVar1;
      lVar3 = lVar3 + 1;
    } while (iVar2 != lVar3);
  }
  if (0 < (int)local_78) {
    lVar6 = 0;
    lVar3 = 0;
    do {
      puVar4 = local_80;
      if (local_80 == (undefined1 *)0x0) {
        puVar4 = local_c0;
      }
      FUN_140002266(local_108,L"  Probability %f %%",
                    (double)((*(float *)(puVar4 + lVar3 * 4) / fVar7) * 100.0));
      FUN_1470ed5e8(local_f8,local_108);
      lVar5 = FUN_1470e53c2(param_2,*(longlong *)(param_1 + 0x50) + lVar6);
      FUN_1403719a4(lVar5 + 8,local_f8);
      FUN_144a2da94(local_f8);
      lVar3 = lVar3 + 1;
      lVar6 = lVar6 + 8;
    } while (lVar3 < (int)local_78);
  }
  if (local_80 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886b15a FUN_14886b15a body=441 status=ok
// SIG undefined FUN_14886b15a(void)

void FUN_14886b15a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_90 [16];
  longlong local_80;
  int local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1470e4986();
  FUN_1400021e4(param_1 + 0x44,local_90);
  FUN_1470ed5e8(&local_80,local_90);
  lVar3 = FUN_1470e53c2(param_2,&DAT_14cb7e060);
  FUN_1403719a4(lVar3 + 8,&local_80);
  FUN_144a2da94(&local_80);
  local_a8 = 0;
  uStack_a0 = 0;
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    lVar4 = (longlong)*(int *)(param_1 + 0x58) << 3;
    bVar2 = true;
    do {
      if (!bVar2) {
        FUN_1400020e8(&local_a8,&DAT_149e19f34,2);
      }
      FUN_1400021e4(lVar3,&local_80);
      iVar1 = local_78 + -1;
      if (local_78 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(&local_a8,local_80,iVar1);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 8;
      bVar2 = false;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  FUN_1470ed5e8(&local_80,&local_a8);
  lVar3 = FUN_1470e53c2(param_2,&DAT_14cb7e068);
  FUN_1403719a4(lVar3 + 8,&local_80);
  FUN_144a2da94(&local_80);
  iVar1 = *(int *)(param_1 + 0x4c);
  local_c0 = 0;
  if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x58))) {
    local_c0 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar1 * 8);
  }
  FUN_1400021e4(&local_c0,local_b8);
  FUN_1470ed5e8(&local_80,local_b8);
  lVar3 = FUN_1470e53c2(param_2,&DAT_14cb7e070);
  FUN_1403719a4(lVar3 + 8,&local_80);
  FUN_144a2da94(&local_80);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886b314 FUN_14886b314 body=210 status=ok
// SIG undefined FUN_14886b314(void)

bool FUN_14886b314(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar2 = FUN_14479d2ce(param_1 + 8);
  if (lVar2 == 0) {
LAB_14886b359:
    lVar2 = 0;
  }
  else {
    lVar3 = FUN_1446f4bba();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_14886b359;
  }
  if (param_2 != 0) {
    lVar3 = FUN_14479d2ce(param_2 + 8);
    if (lVar3 != 0) {
      lVar4 = FUN_1446f4bba();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) goto LAB_14886b394;
    }
  }
  lVar3 = 0;
LAB_14886b394:
  if (lVar2 == lVar3) {
    if (lVar2 == 0) {
      bVar5 = true;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x10);
      lVar4 = *(longlong *)(param_2 + 0x10);
      if (lVar3 != 0 && lVar4 != 0) {
        uVar1 = FUN_14470ec92(lVar2,lVar3,lVar4,param_3);
        return (bool)uVar1;
      }
      bVar5 = lVar3 == lVar4;
    }
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}



// FUNCTION 14886b3e6 FUN_14886b3e6 body=407 status=ok
// SIG undefined FUN_14886b3e6(void)

undefined4 FUN_14886b3e6(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [40];
  undefined **local_140 [29];
  longlong local_58;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar3 = FUN_1463b3fac();
  local_140[0] = (undefined **)CONCAT44(local_140[0]._4_4_,*(undefined4 *)(param_2 + 8));
  uVar2 = FUN_1468ec2ac(local_140,*(undefined8 *)(lVar3 + 0x18));
  if ((char)uVar2 != '\0') {
    FUN_14133a832(local_140);
    FUN_14047320e(lVar3,param_3,local_140,0);
    if ((local_58 != 0) && (*(longlong *)(local_58 + 0x10) != 0)) {
      local_178 = 0;
      uStack_170 = 0;
      local_180 = 0;
      local_188 = 0;
      plVar4 = (longlong *)FUN_14092d672(DAT_14c951640,*(longlong *)(local_58 + 0x10),0,0);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x408))(plVar4,local_168);
        FUN_14886b9f0(param_1,local_168);
        FUN_1448eac94(local_168);
        FUN_1449b16b6(lVar3,*(undefined8 *)(param_1 + 0x10),local_140,1);
        FUN_144757f48(plVar4,0x40000000);
        uVar1 = *(uint *)((longlong)plVar4 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar3 = 0;
        }
        do {
          uVar1 = *(uint *)(lVar3 + 8);
          if ((uVar1 >> 0x15 & 1) != 0) break;
          LOCK();
          bVar5 = uVar1 == *(uint *)(lVar3 + 8);
          if (bVar5) {
            *(uint *)(lVar3 + 8) = uVar1 | 0x200000;
          }
          UNLOCK();
        } while (!bVar5);
      }
    }
    local_140[0] = &PTR_FUN_14a544ad0;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    FUN_140595d6e(local_140);
  }
  if ((local_30 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14886b57e FUN_14886b57e body=466 status=ok
// SIG undefined FUN_14886b57e(void)

undefined8
FUN_14886b57e(longlong param_1,undefined8 **param_2,longlong param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = FUN_14479d2ce(param_1 + 8);
  if (lVar3 != 0) {
    lVar4 = FUN_1446f4bba();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      FUN_1414d7078(lVar3,local_58);
      FUN_140ba791a(local_58,&local_80);
      if (&local_80 == param_2) {
        if (local_80 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_2 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        *param_2 = local_80;
        local_80 = (undefined8 *)0x0;
        *(undefined4 *)(param_2 + 1) = (undefined4)local_78;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_78._4_4_;
      }
      lVar4 = *(longlong *)(param_1 + 0x10);
      if (lVar4 != 0) {
        uVar1 = *(undefined8 *)(param_3 + 0x10);
        uVar5 = FUN_14479d2ce(param_3 + 8);
        FUN_1468fbe3e(&local_80,uVar5,uVar1);
        bVar2 = FUN_144729dda(&local_78);
        if ((bVar2 & local_70 != 0) == 0) {
          local_88 = 0;
          FUN_14485c47a(&local_88,lVar3);
          uVar1 = local_88;
          (*(code *)local_80[8])(&local_80);
          local_78 = uVar1;
          (*(code *)*local_80)(&local_80);
        }
        local_98 = param_6;
        local_a0 = param_5;
        local_90 = 1;
        local_a8 = param_4;
        FUN_1446df618(lVar3,param_2,lVar4,local_70);
        FUN_1448eac94(&local_80);
      }
      goto LAB_14886b5f5;
    }
  }
  FUN_1400020e8(param_2,L"SceneComponentInstanceData()",0x1c);
LAB_14886b5f5:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886b752 FUN_14886b752 body=414 status=ok
// SIG undefined FUN_14886b752(void)

undefined8
FUN_14886b752(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined2 *puVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  undefined8 local_2b0;
  longlong *local_2a8;
  undefined1 local_2a0;
  longlong local_298 [5];
  undefined8 local_270;
  undefined2 *local_268;
  undefined2 *local_260;
  ulonglong *local_258;
  char local_250;
  undefined2 local_248 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  pwVar3 = wcschr((wchar_t *)*param_2,L'(');
  if (pwVar3 != (wchar_t *)0x0) {
    local_268 = local_248;
    local_250 = '\0';
    local_258 = &local_48;
    local_260 = local_268;
    FUN_1449668a2(&local_268,*param_2,(ulonglong)((longlong)pwVar3 - *param_2) >> 1);
    *local_260 = 0;
    puVar2 = local_268;
    uVar4 = FUN_1446f4bba();
    local_2b8 = 0;
    lVar5 = FUN_140277cc4(uVar4,puVar2,2,0);
    if (lVar5 != 0) {
      FUN_1446e6d0e(local_298,lVar5);
      FUN_14886b8f2(param_1,local_298);
      FUN_1448eac94(local_298);
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (lVar1 != 0) {
        local_270 = *(undefined8 *)(lVar5 + 0x18);
        FUN_1400021e4(&local_270,local_298);
        local_2b0 = param_5;
        local_2b8 = CONCAT44(local_2b8._4_4_,param_3);
        local_2a0 = 1;
        local_2a8 = local_298;
        lVar5 = FUN_14115911a(lVar5,pwVar3,lVar1,param_4);
        *param_2 = lVar5;
        if (local_298[0] != 0) {
          FUN_1400020a8();
        }
        if (local_250 == '\x01') {
          FUN_1400020a8(local_268);
        }
        uVar4 = 1;
        goto LAB_14886b815;
      }
    }
    if (local_250 == '\x01') {
      FUN_1400020a8(local_268);
    }
  }
  uVar4 = 0;
LAB_14886b815:
  if ((local_48 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886b8f2 FUN_14886b8f2 body=189 status=ok
// SIG undefined FUN_14886b8f2(void)

ulonglong FUN_14886b8f2(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_1 != param_2) {
    lVar2 = (**(code **)(*param_2 + 0x20))(param_2);
    if (lVar2 != 0) {
      lVar3 = FUN_1446f4bba();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        lVar3 = FUN_1463b3fac();
        if ((lVar3 != 0) &&
           ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
             lVar3 + 0x30)))) {
          cVar1 = (**(code **)(*param_2 + 8))(param_2);
          if (cVar1 != '\0') {
            (**(code **)(*param_1 + 0x48))(param_1);
            param_1[1] = param_2[1];
            param_1[2] = param_2[2];
            *(char *)(param_1 + 4) = (char)param_2[4];
            *(undefined1 *)(param_2 + 4) = 0;
            (**(code **)(*param_2 + 0x48))(param_2);
            goto LAB_14886b942;
          }
        }
        uVar4 = 0;
        goto LAB_14886b942;
      }
    }
    FUN_144aa17a4(param_1);
  }
LAB_14886b942:
  return uVar4 & 0xffffffff;
}



// FUNCTION 14886b9b0 FUN_14886b9b0 body=63 status=ok
// SIG undefined FUN_14886b9b0(void)

undefined8 * FUN_14886b9b0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  cVar2 = FUN_144729dda();
  if ((cVar2 == '\0') || (lVar1 = *(longlong *)(param_1 + 0x10), lVar1 == 0)) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    uVar4 = *(undefined4 *)(lVar1 + 0x40);
  }
  *param_2 = uVar3;
  *(undefined4 *)(param_2 + 1) = uVar4;
  return param_2;
}



// FUNCTION 14886b9f0 FUN_14886b9f0 body=148 status=ok
// SIG undefined FUN_14886b9f0(void)

void FUN_14886b9f0(void)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_14886b8f2();
  if (cVar1 == '\0') {
    lVar2 = FUN_1463b3fac();
    local_18 = *(undefined8 *)(lVar2 + 0x18);
    FUN_1400021e4(&local_18,&local_28);
    puVar3 = local_28;
    if (local_20 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/StructOnScope.h",0x105,
                  L"Initialize of %s failed",puVar3);
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14886ba8c FUN_14886ba8c body=52 status=ok
// SIG undefined FUN_14886ba8c(void)

void FUN_14886ba8c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = 0;
  return;
}



// FUNCTION 14886bac0 FUN_14886bac0 body=22 status=ok
// SIG undefined FUN_14886bac0(void)

undefined8 FUN_14886bac0(undefined8 param_1,undefined8 param_2)

{
  FUN_140ac35f2();
  return param_2;
}



// FUNCTION 14886bad6 FUN_14886bad6 body=114 status=ok
// SIG undefined FUN_14886bad6(void)

void FUN_14886bad6(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = &DAT_14c9a6308;
  if (0 < *(int *)(param_1 + 0x58)) {
    puVar3 = (undefined8 *)(param_1 + 0x50);
  }
  uVar1 = *(uint *)(puVar3 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar1) {
      FUN_1446f84a2(param_2,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 8 + *param_2),(void *)*puVar3,(longlong)(int)uVar1 << 3);
    return;
  }
  return;
}



// FUNCTION 14886bb48 FUN_14886bb48 body=31 status=ok
// SIG undefined FUN_14886bb48(void)

void FUN_14886bb48(longlong *param_1)

{
  FUN_140c481e6();
                    /* WARNING: Could not recover jumptable at 0x00014886bb60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa8))(param_1);
  return;
}



// FUNCTION 14886bb68 FUN_14886bb68 body=80 status=ok
// SIG undefined FUN_14886bb68(void)

void FUN_14886bb68(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x38 + *param_1);
  FUN_144a2da94(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x38),(longlong)(int)(~param_2 + iVar1) * 0x38);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_1488708fe(param_1);
  return;
}



// FUNCTION 14886bbb8 FUN_14886bbb8 body=1278 status=ok
// SIG undefined FUN_14886bbb8(void)

void FUN_14886bbb8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  wchar_t *pwVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  undefined2 *local_e0;
  undefined2 *local_d8;
  int local_d0;
  undefined2 *local_c8;
  int local_c0;
  undefined2 *local_b8;
  int local_b0;
  undefined2 *local_a8;
  int local_a0;
  longlong local_98;
  undefined1 local_90 [16];
  undefined2 *local_80;
  undefined8 local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1470e49a6();
  plVar1 = (longlong *)(param_1 + 0x68);
  FUN_1400021e4(plVar1,local_90);
  FUN_1470ed5e8(&local_80,local_90);
  lVar3 = FUN_1470e53c2(param_2,&DAT_14cb7e078);
  FUN_1403719a4(lVar3 + 8,&local_80);
  FUN_144a2da94(&local_80);
  lVar3 = *(longlong *)(param_1 + 0x48);
  if ((longlong)*(int *)(lVar3 + 0x58) != 0) {
    lVar11 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar3 + 0x50) + lVar11) == *plVar1) {
        plVar4 = (longlong *)FUN_144a7be76(param_1);
        if (plVar4 == (longlong *)0x0) {
          pwVar9 = L"No Owner!";
          goto LAB_14886bc67;
        }
        uVar5 = FUN_140437988();
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar5);
        if (plVar4 != (longlong *)0x0) {
          uVar5 = FUN_140437988();
          plVar6 = (longlong *)FUN_144718840(plVar4,uVar5);
          if (plVar6 != (longlong *)0x0 && plVar4 != plVar6) {
            plVar4 = (longlong *)(**(code **)(*plVar6 + 0x18))(plVar6);
            iVar2 = (int)plVar4[1];
            if ((longlong)iVar2 == 0) goto LAB_14886bdf1;
            lVar11 = *plVar4;
            lVar7 = 0;
            goto LAB_14886bddb;
          }
        }
        lVar3 = FUN_144a7be76(param_1);
        if (lVar3 == 0) {
          FUN_140056680(&local_a8,&DAT_149e01fe8);
        }
        else {
          local_80 = *(undefined2 **)(lVar3 + 0x18);
          FUN_1400021e4(&local_80,&local_a8);
        }
        puVar12 = local_a8;
        if (local_a0 == 0) {
          puVar12 = &DAT_149dfb77a;
        }
        FUN_140002266(&local_80,L"Owner \'%s\' does not implement IGbxActorStateOwner!",puVar12);
        local_b8 = local_80;
        if ((undefined2 **)(param_2 + 0x28) == &local_80) goto LAB_14886bedc;
        if (*(longlong *)(param_2 + 0x28) != 0) {
          FUN_1400020a8();
        }
        *(undefined2 **)(param_2 + 0x28) = local_80;
        local_80 = (undefined2 *)0x0;
        *(undefined4 *)(param_2 + 0x30) = (undefined4)local_78;
        *(undefined4 *)(param_2 + 0x34) = local_78._4_4_;
        local_78 = 0;
        goto LAB_14886bd9a;
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)*(int *)(lVar3 + 0x58) * 8 != lVar11);
  }
  pwVar9 = L"CurrentState is not valid!";
LAB_14886bc67:
  FUN_14020fad6(param_2 + 0x28,pwVar9);
  goto LAB_14886bc6f;
  while (lVar7 = lVar7 + 0x88, (longlong)iVar2 * 0x88 != lVar7) {
LAB_14886bddb:
    if (*(longlong *)(lVar11 + 0x68 + lVar7) == *(longlong *)(lVar3 + 0x44)) {
      uVar8 = (int)(lVar7 >> 3) * -0xf0f0f0f;
      if ((-1 < (int)uVar8) && ((int)uVar8 < iVar2)) {
        lVar3 = (ulonglong)(uVar8 & 0x7fffffff) * 0x88;
        local_98 = *(longlong *)(lVar11 + 0x78 + lVar3);
        if (local_98 == *plVar1) goto LAB_14886bc6f;
        FUN_1400021e4(plVar1,&local_a8);
        puVar12 = &DAT_149dfb77a;
        if (local_a0 != 0) {
          puVar12 = local_a8;
        }
        FUN_1400021e4(&local_98,&local_b8);
        puVar10 = &DAT_149dfb77a;
        if (local_b0 != 0) {
          puVar10 = local_b8;
        }
        FUN_1400021e4(lVar11 + lVar3 + 0x68,&local_c8);
        puVar14 = &DAT_149dfb77a;
        if (local_c0 != 0) {
          puVar14 = local_c8;
        }
        lVar3 = FUN_144a7be76(param_1);
        if (lVar3 == 0) {
          FUN_140056680(&local_d8,&DAT_149e01fe8);
        }
        else {
          local_80 = *(undefined2 **)(lVar3 + 0x18);
          FUN_1400021e4(&local_80,&local_d8);
        }
        puVar13 = local_d8;
        if (local_d0 == 0) {
          puVar13 = &DAT_149dfb77a;
        }
        local_e8 = puVar10;
        local_e0 = puVar12;
        FUN_140002266(&local_80,L"Owner \'%s\' StateMachine \'%s\' State is \'%s\', not \'%s\'!",
                      puVar13,puVar14);
        if ((undefined2 **)(param_2 + 0x28) == &local_80) {
          if (local_80 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_2 + 0x28) != 0) {
            FUN_1400020a8();
          }
          *(undefined2 **)(param_2 + 0x28) = local_80;
          local_80 = (undefined2 *)0x0;
          *(undefined4 *)(param_2 + 0x30) = (undefined4)local_78;
          *(undefined4 *)(param_2 + 0x34) = local_78._4_4_;
          local_78 = 0;
        }
        if (local_d8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_14886bff5;
      }
      break;
    }
  }
LAB_14886bdf1:
  FUN_1400021e4((longlong *)(lVar3 + 0x44),&local_a8);
  puVar12 = local_a8;
  if (local_a0 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  lVar3 = FUN_144a7be76(param_1);
  if (lVar3 == 0) {
    FUN_140056680(&local_b8,&DAT_149e01fe8);
  }
  else {
    local_80 = *(undefined2 **)(lVar3 + 0x18);
    FUN_1400021e4(&local_80,&local_b8);
  }
  puVar10 = local_b8;
  if (local_b0 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_80,L"Owner \'%s\' has no StateMachine \'%s\'!",puVar10,puVar12);
  local_c8 = local_80;
  if ((undefined2 **)(param_2 + 0x28) == &local_80) {
LAB_14886bff5:
    if (local_c8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined2 **)(param_2 + 0x28) = local_80;
    local_80 = (undefined2 *)0x0;
    *(undefined4 *)(param_2 + 0x30) = (undefined4)local_78;
    *(undefined4 *)(param_2 + 0x34) = local_78._4_4_;
    local_78 = 0;
  }
LAB_14886bedc:
  if (local_b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_14886bd9a:
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_14886bc6f:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14886c0b8 FUN_14886c0b8 body=172 status=ok
// SIG undefined FUN_14886c0b8(void)

void FUN_14886c0b8(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_145c05cec();
  if ((*param_3 == param_1[0xd]) && (0 < (int)param_1[0x21])) {
    uVar2 = FUN_14479d2ce(param_1[8] + 0x48);
    plVar4 = param_1 + 0x10;
    if ((longlong *)param_1[0x20] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x20];
    }
    if ((longlong)(int)param_1[0x21] != 0) {
      lVar5 = (longlong)(int)param_1[0x21] << 4;
      do {
        lVar3 = FUN_14479d2ce(plVar4);
        if (lVar3 != 0) {
          uVar1 = (**(code **)(*param_1 + 0x98))(param_1);
          *(undefined1 *)(param_2 + 0xc) = uVar1;
          (**(code **)(*param_2 + 0x78))(param_2,uVar2,lVar3,plVar4[1]);
        }
        plVar4 = plVar4 + 2;
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != 0);
    }
  }
  return;
}



// FUNCTION 14886c164 FUN_14886c164 body=166 status=ok
// SIG undefined FUN_14886c164(void)

void FUN_14886c164(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*param_3 == *(longlong *)(param_1 + 0x68)) && (0 < *(int *)(param_1 + 0x108))) {
    uVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 0x40) + 0x48);
    lVar4 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x100);
    }
    if ((longlong)*(int *)(param_1 + 0x108) != 0) {
      lVar3 = (longlong)*(int *)(param_1 + 0x108) << 4;
      do {
        lVar2 = FUN_14479d2ce(lVar4);
        if (lVar2 != 0) {
          (**(code **)(*param_2 + 0x80))(param_2,uVar1,lVar2,*(undefined8 *)(lVar4 + 8));
        }
        lVar4 = lVar4 + 0x10;
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != 0);
    }
  }
  FUN_145a1be3c(param_1,param_2,param_3);
  return;
}



// FUNCTION 14886c270 FUN_14886c270 body=411 status=ok
// SIG undefined FUN_14886c270(void)

void FUN_14886c270(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
    local_50 = 0;
    FUN_14485c47a(&local_50,param_3);
    plVar3 = param_1 + 0xd;
    plVar4 = (longlong *)param_1[0x1d];
    if ((longlong *)param_1[0x1d] == (longlong *)0x0) {
      plVar4 = plVar3;
    }
    uStack_48 = param_4;
    if ((longlong)(int)param_1[0x1e] == 0) {
      iVar6 = 0;
    }
    else {
      lVar5 = (longlong)(int)param_1[0x1e] << 4;
      do {
        if (plVar4[1] == uStack_48) {
          cVar1 = FUN_14038330a(plVar4,&local_50);
          if (cVar1 != '\0') goto LAB_14886c3cd;
        }
        plVar4 = plVar4 + 2;
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != 0);
      iVar6 = (int)param_1[0x1e];
    }
    *(uint *)(param_1 + 0x1e) = iVar6 + 1U;
    if (*(uint *)((longlong)param_1 + 0xf4) < iVar6 + 1U) {
      FUN_148872330(plVar3,iVar6);
    }
    if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x1d];
    }
    plVar3 = plVar3 + (longlong)iVar6 * 2;
    *(undefined4 *)plVar3 = (undefined4)local_50;
    *(undefined4 *)((longlong)plVar3 + 4) = local_50._4_4_;
    *(undefined4 *)(plVar3 + 1) = (undefined4)uStack_48;
    *(undefined4 *)((longlong)plVar3 + 0xc) = uStack_48._4_4_;
    if (param_2 != (longlong *)0x0) {
      lVar5 = param_1[9];
      uVar2 = FUN_14069ce7c();
      plVar3 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar2);
      if (plVar3 != (longlong *)0x0) {
        uVar2 = FUN_14069ce7c();
        plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
        if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
          uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
          local_58 = *(undefined1 *)(lVar5 + 0x42);
          local_60 = *(undefined1 *)(lVar5 + 0x41);
          local_68 = *(undefined1 *)(lVar5 + 0x40);
          FUN_140b50f46(uVar2,param_4,*(undefined4 *)(lVar5 + 0x38),*(undefined4 *)(lVar5 + 0x3c));
        }
      }
    }
  }
LAB_14886c3cd:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886c40c FUN_14886c40c body=197 status=ok
// SIG undefined FUN_14886c40c(void)

void FUN_14886c40c(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_14485c47a(&local_38,param_3);
  local_30 = param_4;
  iVar1 = FUN_14886c4d2(param_1 + 0x68,&local_38);
  if ((param_2 != (longlong *)0x0) && (iVar1 != 0)) {
    uVar2 = FUN_14069ce7c();
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_14069ce7c();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
        uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_147f5dea2(uVar2,param_4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886c4d2 FUN_14886c4d2 body=234 status=ok
// SIG undefined FUN_14886c4d2(void)

undefined8 FUN_14886c4d2(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar6 = param_1;
  }
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    lVar7 = (longlong)*(int *)(param_1 + 0x88) << 4;
    iVar3 = 1;
    lVar4 = 0;
    do {
      if ((*(longlong *)(lVar6 + 8) == *(longlong *)(param_2 + 8)) &&
         (cVar1 = FUN_14038330a(lVar6,param_2), cVar1 != '\0')) {
        if (iVar3 == 0) {
          return 0;
        }
        iVar2 = *(int *)(param_1 + 0x88);
        iVar3 = iVar2 - iVar3;
        if (iVar3 != 0) {
          iVar5 = 1;
          if (iVar3 < 1) {
            iVar5 = iVar3;
          }
          lVar6 = *(longlong *)(param_1 + 0x80);
          if (*(longlong *)(param_1 + 0x80) == 0) {
            lVar6 = param_1;
          }
          memmove((void *)((lVar4 >> 0x20) * 0x10 + lVar6),
                  (void *)((longlong)(iVar2 - iVar5) * 0x10 + lVar6),(longlong)iVar5 << 4);
          iVar2 = *(int *)(param_1 + 0x88);
        }
        *(int *)(param_1 + 0x88) = iVar2 + -1;
        FUN_1488723ae(param_1);
        return 1;
      }
      lVar6 = lVar6 + 0x10;
      lVar4 = lVar4 + 0x100000000;
      iVar3 = iVar3 + 1;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  return 0;
}



// FUNCTION 14886c5bc FUN_14886c5bc body=67 status=ok
// SIG undefined FUN_14886c5bc(void)

undefined8 FUN_14886c5bc(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014886c5df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x50) + 0x10))(lVar1 + 0x50);
    return uVar2;
  }
  lVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
  }
  return uVar2;
}



// FUNCTION 14886c600 FUN_14886c600 body=53 status=ok
// SIG undefined FUN_14886c600(void)

undefined8 * FUN_14886c600(longlong *param_1,undefined8 *param_2)

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



// FUNCTION 14886c640 FUN_14886c640 body=1107 status=ok
// SIG undefined FUN_14886c640(void)

longlong * FUN_14886c640(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_1a8 [32];
  ulonglong local_188;
  undefined1 local_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar5 = *(longlong *)(param_1 + 0x198);
  if (lVar5 == 0) {
LAB_14886c67d:
    lVar5 = FUN_145b7a3c4();
    if (lVar5 != 0) goto LAB_14886c68a;
  }
  else {
    lVar4 = FUN_144a6c4d8();
    if (lVar5 == lVar4) goto LAB_14886c67d;
LAB_14886c68a:
    if ((*(uint *)(lVar5 + 0xd4) & 0x2000001) == 0) {
      uVar6 = FUN_140566488();
      cVar3 = FUN_144a7ff9e(lVar5,uVar6);
      if (cVar3 != '\0') {
        *(byte *)(param_2 + 0x32) = *(byte *)(param_2 + 0x32) | 4;
        local_188 = param_2;
        plVar7 = (longlong *)FUN_141137228(*(undefined8 *)(param_2 + 0x80),lVar5,0,0);
        plVar8 = (longlong *)0x0;
        if (plVar7 == (longlong *)0x0) goto LAB_14886c699;
        lVar5 = FUN_145b7a3c4();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30)) {
          if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_14886ca49:
            lVar9 = 0;
          }
          else {
            lVar4 = FUN_14045ceca();
            lVar5 = *(longlong *)(param_1 + 0x10);
            if (lVar5 == 0) goto LAB_14886ca49;
            lVar9 = 0;
            if ((lVar4 != 0) && (lVar2 = *(longlong *)(lVar5 + 0x10), lVar2 != 0)) {
              if (*(int *)(lVar2 + 0x38) < *(int *)(lVar4 + 0x38)) goto LAB_14886ca49;
              lVar9 = 0;
              if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
                  == lVar4 + 0x30) {
                lVar9 = lVar5;
              }
            }
          }
          FUN_14886ca94(plVar7,lVar9);
        }
        uVar6 = FUN_140437988();
        plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
        if (plVar8 != (longlong *)0x0) {
          uVar6 = (**(code **)(*plVar8 + 0x18))(plVar8);
          FUN_14078a36a(uVar6,plVar8);
          FUN_140851e80(&local_118,plVar7);
          FUN_1470d6d82(&local_c8,&local_118,1);
          if (local_d0 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_d0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_d0 + 0x10))();
            }
          }
          if (CONCAT44(uStack_fc,uStack_100) != 0) {
            FUN_1400020a8();
          }
          FUN_140851e80(&local_118,*(undefined8 *)(param_1 + 0x10));
          FUN_1409080e2(&local_c8,&local_118,1);
          if (local_d0 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_d0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_d0 + 0x10))();
            }
          }
          if (CONCAT44(uStack_fc,uStack_100) != 0) {
            FUN_1400020a8();
          }
          FUN_140851e80(&local_118,*(undefined8 *)(param_2 + 0x88));
          FUN_1409080e2(&local_c8,&local_118,1);
          if (local_d0 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_d0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_d0 + 0x10))();
            }
          }
          if (CONCAT44(uStack_fc,uStack_100) != 0) {
            FUN_1400020a8();
          }
          FUN_14078ab28(uVar6,&local_c8);
          FUN_1401eddde(&local_c8);
        }
        uVar6 = FUN_140566488();
        plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
        if (plVar8 != (longlong *)0x0) {
          plVar8 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8);
          if ((plVar8 != (longlong *)0x0) && (plVar8[8] != param_1)) {
            (**(code **)(*plVar8 + 0x18))(plVar8);
            FUN_14160e0aa(plVar8,param_1,plVar7,0);
          }
        }
        local_c8 = *(undefined8 *)(param_2 + 0x90);
        uStack_c0 = *(undefined8 *)(param_2 + 0x98);
        local_b8 = *(undefined8 *)(param_2 + 0xa0);
        uStack_b0 = *(undefined8 *)(param_2 + 0xa8);
        local_a8 = *(double *)(param_2 + 0xb0);
        dStack_a0 = *(double *)(param_2 + 0xb8);
        local_98 = *(double *)(param_2 + 0xc0);
        dStack_90 = *(double *)(param_2 + 200);
        lVar5 = plVar7[0x39];
        if (lVar5 == 0) {
          local_78 = 0x3ff0000000000000;
          local_88 = 0x3ff0000000000000;
          uStack_80 = 0x3ff0000000000000;
        }
        else {
          local_88 = *(undefined8 *)(lVar5 + 0x280);
          uStack_80 = *(undefined8 *)(lVar5 + 0x288);
          local_78 = *(undefined8 *)(lVar5 + 0x290);
        }
        uStack_70 = 0;
        if (*(char *)(param_2 + 0xf0) == '\x01') {
          local_128 = DAT_14c8464f0;
          local_138 = DAT_14c8464e0;
          uStack_130 = DAT_14c8464e8;
          local_148 = DAT_14c8464f0;
          local_158 = DAT_14c8464e0;
          uStack_150 = DAT_14c8464e8;
          local_188 = local_188 & 0xffffffffffffff00;
          (**(code **)(*plVar7 + 800))(plVar7,1,&local_138,&local_158);
          local_178 = local_a8 + 0.0;
          dStack_170 = dStack_a0 + 0.0;
          local_168 = (local_148 - local_128) + local_98;
          dStack_90 = dStack_90 + 0.0;
          local_118 = (undefined4)local_c8;
          uStack_114 = local_c8._4_4_;
          uStack_110 = (undefined4)uStack_c0;
          uStack_10c = uStack_c0._4_4_;
          local_108 = (undefined4)local_b8;
          uStack_104 = local_b8._4_4_;
          uStack_100 = (undefined4)uStack_b0;
          uStack_fc = uStack_b0._4_4_;
          local_180 = 0;
          local_188 = 0;
          local_a8 = local_178;
          dStack_a0 = dStack_170;
          local_98 = local_168;
          FUN_141507c90(plVar7,&local_178,&local_118,0);
        }
        local_188 = local_188 & 0xffffffffffffff00;
        FUN_14113775c(plVar7,&local_c8,1,0);
        plVar8 = plVar7;
        goto LAB_14886c699;
      }
    }
  }
  plVar8 = (longlong *)0x0;
LAB_14886c699:
  if (*(longlong *)(param_2 + 0x40) != 0) {
    plVar7 = (longlong *)(param_2 + 0x60);
    if (*(longlong **)(param_2 + 0x50) != (longlong *)0x0) {
      plVar7 = *(longlong **)(param_2 + 0x50);
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_38 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return plVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886ca94 FUN_14886ca94 body=590 status=ok
// SIG undefined FUN_14886ca94(void)

void FUN_14886ca94(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x3a8) = param_2;
    if (param_2 != 0) goto LAB_14886cad2;
LAB_14886cbde:
    plVar4 = (longlong *)FUN_14001cc68(0x230);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_FUN_14b405a40;
    plVar5 = plVar4 + 2;
    memset(plVar5,0,0x220);
    FUN_1411c3dfa(plVar5);
    local_30 = plVar5;
    local_28 = plVar4;
    FUN_1488724fa(&local_30,plVar5);
    if (plVar4 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x3b0) = 0x10;
      plVar5 = *(longlong **)(param_1 + 0x3b8);
      if (plVar5 == (longlong *)0x0) goto LAB_14886cb7f;
      *(undefined8 *)(param_1 + 0x3b8) = 0;
LAB_14886cc87:
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 != 0) goto LAB_14886cb7f;
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      plVar4 = plVar5;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0x3b0) = plVar5;
      plVar5 = *(longlong **)(param_1 + 0x3b8);
      if (plVar4 != plVar5) {
        *(longlong **)(param_1 + 0x3b8) = plVar4;
        if (plVar5 == (longlong *)0x0) goto LAB_14886cb7f;
        goto LAB_14886cc87;
      }
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) goto LAB_14886cb7f;
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
    }
    if (iVar2 != 0) goto LAB_14886cb7f;
    lVar3 = *plVar4;
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x3a8) = param_2;
LAB_14886cad2:
    lVar3 = FUN_1411675e0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) != lVar3 + 0x30)) goto LAB_14886cbde;
    (**(code **)(**(longlong **)(param_2 + 0x30) + 200))(*(longlong **)(param_2 + 0x30),&local_30);
    plVar4 = local_28;
    if (local_28 == (longlong *)0x0) {
      *(longlong **)(param_1 + 0x3b0) = local_30;
      plVar5 = *(longlong **)(param_1 + 0x3b8);
      if (plVar5 == (longlong *)0x0) goto LAB_14886cb7f;
      *(undefined8 *)(param_1 + 0x3b8) = 0;
LAB_14886cb62:
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 != 0) goto LAB_14886cb7f;
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      plVar4 = plVar5;
    }
    else {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0x3b0) = local_30;
      plVar5 = *(longlong **)(param_1 + 0x3b8);
      if (local_28 != plVar5) {
        *(longlong **)(param_1 + 0x3b8) = local_28;
        if (plVar5 == (longlong *)0x0) goto LAB_14886cb7f;
        goto LAB_14886cb62;
      }
      LOCK();
      plVar5 = local_28 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) goto LAB_14886cb7f;
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
    }
    if (iVar2 != 0) goto LAB_14886cb7f;
    lVar3 = *plVar4;
  }
  (**(code **)(lVar3 + 0x10))(plVar4);
LAB_14886cb7f:
  plVar5 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886ccf8 FUN_14886ccf8 body=91 status=ok
// SIG undefined FUN_14886ccf8(void)

undefined8 * FUN_14886ccf8(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = *(undefined8 *)(param_1 + -0x20);
  plVar4 = *(longlong **)(param_1 + -0x18);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
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
  }
  return param_2;
}



// FUNCTION 14886cd60 FUN_14886cd60 body=75 status=ok
// SIG undefined FUN_14886cd60(void)

longlong FUN_14886cd60(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if ((lVar1 != 0) && (lVar1 = FUN_144aa8ebc(lVar1), lVar1 != 0)) {
    lVar2 = FUN_14045ceca();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14886cdac FUN_14886cdac body=310 status=ok
// SIG undefined FUN_14886cdac(void)

longlong FUN_14886cdac(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) goto LAB_14886cdcb;
  plVar4 = (longlong *)FUN_14001cc68(0x230);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b405a40;
  plVar5 = plVar4 + 2;
  memset(plVar5,0,0x220);
  FUN_1411c3dfa(plVar5);
  local_30 = plVar5;
  local_28 = plVar4;
  FUN_1488724fa(&local_30,plVar5);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x20);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
LAB_14886ce7d:
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x00014886cea8:
        if (iVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x18) = plVar5;
    plVar5 = *(longlong **)(param_1 + 0x20);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar5 = plVar4;
        goto joined_r0x00014886cea8;
      }
    }
    else {
      *(longlong **)(param_1 + 0x20) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_14886ce7d;
    }
  }
  plVar5 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
LAB_14886cdcb:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886cefc FUN_14886cefc body=48 status=ok
// SIG undefined FUN_14886cefc(void)

undefined8 * FUN_14886cefc(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*(longlong *)(lVar1 + 0x50) + 0x18))(lVar1 + 0x50,param_2);
  }
  return param_2;
}



// FUNCTION 14886cf2c FUN_14886cf2c body=120 status=ok
// SIG undefined FUN_14886cf2c(void)

void FUN_14886cf2c(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  longlong local_50;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14886cfa6(local_68,param_1 + 0x18);
  FUN_14042b1ec(param_2,local_68,1);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886cfa6 FUN_14886cfa6 body=345 status=ok
// SIG undefined FUN_14886cfa6(void)

undefined8 * FUN_14886cfa6(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0;
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    if (lVar2 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      goto LAB_14886d0aa;
    }
  }
  FUN_1400bbfc4(&local_48,lVar2);
  *(undefined4 *)(param_1 + 1) = local_48;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_44;
  *(undefined4 *)(param_1 + 2) = uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_3c;
  if (param_1 + 1 == (undefined8 *)&local_48) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1[3] = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 4) = local_30;
    *(undefined4 *)((longlong)param_1 + 0x24) = local_2c;
  }
  cVar3 = (*(code *)PTR_FUN_14c758760)();
  if (cVar3 != '\0') {
    uVar1 = *(uint *)(lVar2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
      *param_1 = 0;
      goto LAB_14886d0aa;
    }
  }
  FUN_14485c47a(param_1,lVar2);
LAB_14886d0aa:
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886d114 FUN_14886d114 body=109 status=ok
// SIG undefined FUN_14886d114(void)

void FUN_14886d114(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && ((longlong)(int)param_1[0x2b] != 0)) {
    plVar2 = (longlong *)param_1[0x2a];
    lVar3 = (longlong)(int)param_1[0x2b] << 4;
    do {
      if (*plVar2 != 0) {
        lVar1 = FUN_14045cd5e();
        if (lVar1 == param_2) {
                    /* WARNING: Could not recover jumptable at 0x00014886d17e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x80))(param_1,plVar2);
          return;
        }
      }
      plVar2 = plVar2 + 2;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14886d182 FUN_14886d182 body=375 status=ok
// SIG undefined FUN_14886d182(void)

longlong FUN_14886d182(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_2 + 8) != 0) {
    lVar5 = FUN_14045cd5e();
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_68 = 0;
    if (lVar5 == 0) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
    }
    else {
      FUN_1400bbfc4(&local_58,lVar5);
      uStack_80 = CONCAT44(uStack_54,local_58);
      local_78 = CONCAT44(uStack_4c,uStack_50);
      if (uStack_70 != 0) {
        FUN_1400020a8();
      }
      uStack_70 = CONCAT44(uStack_44,local_48);
      local_68 = CONCAT44(uStack_3c,uStack_40);
      cVar4 = (*(code *)PTR_FUN_14c758760)();
      if (cVar4 != '\0') {
        uVar1 = *(uint *)(lVar5 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
          local_88 = 0;
          goto LAB_14886d270;
        }
      }
      FUN_14485c47a(&local_88,lVar5);
    }
LAB_14886d270:
    cVar4 = FUN_144a7afa6(param_2 + 8,&uStack_80);
    if (uStack_70 != 0) {
      FUN_1400020a8();
    }
    if (cVar4 != '\0') goto LAB_14886d2d2;
    iVar2 = *(int *)(param_1 + 0x158);
    if ((longlong)iVar2 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x150);
      lVar6 = 0;
      do {
        lVar3 = *(longlong *)(lVar5 + lVar6);
        if ((lVar3 != 0) && (param_1 = FUN_14886d182(lVar3,param_2), param_1 != 0))
        goto LAB_14886d2d2;
        lVar6 = lVar6 + 0x10;
      } while ((longlong)iVar2 * 0x10 != lVar6);
    }
  }
  param_1 = 0;
LAB_14886d2d2:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14886d2fa FUN_14886d2fa body=105 status=ok
// SIG undefined FUN_14886d2fa(void)

void FUN_14886d2fa(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_14581868e();
  cVar1 = FUN_1448093f4(param_2,uVar2);
  if ((param_3 != 0) && (cVar1 != '\0')) {
    lVar3 = FUN_144a6c4d8();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      FUN_14160e0aa(param_1,param_2,param_3,0);
      return;
    }
  }
  return;
}



// FUNCTION 14886d364 FUN_14886d364 body=159 status=ok
// SIG undefined FUN_14886d364(void)

undefined8 * FUN_14886d364(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = &DAT_14cb7e0e8;
  *(undefined1 *)(param_1 + 1) = 0;
  iVar1 = DAT_14cb7e110;
  lVar3 = (longlong)(int)DAT_14cb7e110;
  if (0 < lVar3) {
    puVar2 = DAT_14cb7e108;
    if (DAT_14cb7e108 == (undefined8 *)0x0) {
      puVar2 = &DAT_14cb7e0e8;
    }
    lVar4 = 0;
    do {
      if (*(longlong *)((longlong)puVar2 + lVar4) == *param_2) {
        *(undefined1 *)(param_1 + 1) = 1;
        return param_1;
      }
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 - lVar4 != 0);
  }
  DAT_14cb7e110 = DAT_14cb7e110 + 1;
  if (DAT_14cb7e114 < DAT_14cb7e110) {
    FUN_148872cfa(&DAT_14cb7e0e8,iVar1);
  }
  puVar2 = &DAT_14cb7e0e8;
  if (DAT_14cb7e108 != (undefined8 *)0x0) {
    puVar2 = DAT_14cb7e108;
  }
  puVar2[lVar3] = *param_2;
  return param_1;
}



// FUNCTION 14886d404 FUN_14886d404 body=152 status=ok
// SIG undefined FUN_14886d404(void)

void FUN_14886d404(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = *(undefined8 *)(param_1 + 0x80);
  FUN_1400021e4(&local_78,local_70);
  FUN_1470ed5e8(local_60,local_70);
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb7e118);
  FUN_1403719a4(lVar1 + 8,local_60);
  FUN_144a2da94(local_60);
  FUN_147f573da(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886d4a6 FUN_14886d4a6 body=65 status=ok
// SIG undefined FUN_14886d4a6(void)

void FUN_14886d4a6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb7e120);
  FUN_144983130(lVar1 + 8,param_1 + 0x80);
  FUN_147f573da(param_1,param_2);
  return;
}



// FUNCTION 14886d4e8 FUN_14886d4e8 body=102 status=ok
// SIG undefined FUN_14886d4e8(void)

undefined8 * FUN_14886d4e8(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_145781132(param_1,0x14,0);
  return param_1;
}



// FUNCTION 14886d54e FUN_14886d54e body=400 status=ok
// SIG undefined FUN_14886d54e(void)

void FUN_14886d54e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  uint local_58;
  undefined2 local_40;
  undefined1 local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = *(undefined8 *)(param_1 + 0x90);
  FUN_1400021e4(&local_78,local_70);
  FUN_1470ed5e8(&local_60,local_70);
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb7e128);
  FUN_1403719a4(lVar2 + 8,&local_60);
  FUN_144a2da94(&local_60);
  local_60 = 0;
  local_40 = 4;
  local_58 = 0;
  local_38 = 2;
  local_30 = (byte)~DAT_14c9a8754 >> 4 & 2;
  cVar1 = FUN_144a43716(param_1 + 0x100);
  FUN_144a2da94(&local_60);
  if (cVar1 == '\0') {
    lVar2 = FUN_1470e53c2(param_2,&DAT_14cb7e130);
    FUN_144983130(lVar2 + 8,param_1 + 0xf8);
  }
  if (*(byte *)(param_1 + 0x130) == 1) {
    local_60 = 0;
    local_40 = 4;
    local_30 = (DAT_14c9a8634 & 0x20) == 0;
    local_38 = 1;
    local_58 = (uint)*(byte *)(param_1 + 0x130);
    lVar2 = FUN_1470e53c2(param_2,&DAT_14cb7e138);
    FUN_1403719a4(lVar2 + 8,&local_60);
    FUN_144a2da94(&local_60);
  }
  if (*(char *)(param_1 + 0x170) == '\x01') {
    lVar2 = FUN_1470e53c2(param_2,&DAT_14cb7e140);
    FUN_144983130(lVar2 + 8,param_1 + 0x138);
  }
  FUN_147f573da(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886d6f2 FUN_14886d6f2 body=206 status=ok
// SIG undefined FUN_14886d6f2(void)

void FUN_14886d6f2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  
  plVar1 = (longlong *)0x0;
  if (*param_2 != 0) {
    plVar1 = (longlong *)param_2[1];
  }
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x18))();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_144a75eb4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      uVar3 = (**(code **)(*plVar1 + 0x5f0))(plVar1);
      goto LAB_14886d748;
    }
  }
  uVar3 = 0;
LAB_14886d748:
  FUN_14886d7c0(param_1,uVar3);
  fVar4 = (float)FUN_1407766ee(param_1);
  if (((*(char *)(param_1 + 0x719) == '\x01') && (*(char *)(param_1 + 0x718) == '\x01')) &&
     ((*(float *)(param_1 + 0x720) <= 0.0 ||
      (fVar4 - *(float *)(param_1 + 0x71c) <= *(float *)(param_1 + 0x720))))) {
    uVar5 = FUN_1407766ee(param_1);
    if (*(char *)(param_1 + 0x718) != '\0') {
      *(undefined4 *)(param_1 + 0x71c) = uVar5;
    }
    *(undefined4 *)(param_1 + 0x720) = 0;
    *(undefined2 *)(param_1 + 0x718) = 0x100;
  }
  return;
}



// FUNCTION 14886d7c0 FUN_14886d7c0 body=452 status=ok
// SIG undefined FUN_14886d7c0(void)

void FUN_14886d7c0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  if (param_2 != 0) {
    lVar3 = param_1 + 0xd8;
    lVar5 = *(longlong *)(param_1 + 0x6d8);
    if (*(longlong *)(param_1 + 0x6d8) == 0) {
      lVar5 = lVar3;
    }
    iVar4 = *(int *)(param_1 + 0x6e0);
    if ((longlong)iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      uVar6 = 0;
      do {
        lVar2 = FUN_14479d2ce(lVar5 + uVar6);
        if (lVar2 == param_2) {
          iVar1 = (int)(uVar6 >> 6) * -0x55555555;
          iVar4 = *(int *)(param_1 + 0x6e0);
          if ((iVar1 < 0) || (iVar4 <= iVar1)) goto LAB_14886d914;
          goto LAB_14886d855;
        }
        uVar6 = uVar6 + 0xc0;
      } while ((longlong)iVar4 * 0xc0 != uVar6);
      iVar4 = *(int *)(param_1 + 0x6e0);
    }
LAB_14886d914:
    *(uint *)(param_1 + 0x6e0) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x6e4) < iVar4 + 1U) {
      FUN_148873b66(lVar3,iVar4);
    }
    if (*(longlong *)(param_1 + 0x6d8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x6d8);
    }
    FUN_14573cd82((longlong)iVar4 * 0xc0 + lVar3,param_2);
    iVar1 = iVar4;
LAB_14886d855:
    iVar4 = *(int *)(param_1 + 0x700);
    *(int *)(param_1 + 0x704) = iVar4;
    *(int *)(param_1 + 0x700) = iVar1;
    if ((*(char *)(param_1 + 0x755) != '\x01') || (iVar4 != iVar1)) {
      *(undefined1 *)(param_1 + 0x7d9) = 1;
    }
    uVar7 = FUN_1407766ee(param_1);
    *(undefined4 *)(param_1 + 0x708) = uVar7;
    uVar7 = FUN_1407766ee(param_1);
    if (*(char *)(param_1 + 0x7cc) != '\0') {
      *(undefined4 *)(param_1 + 2000) = uVar7;
    }
    *(undefined4 *)(param_1 + 0x7d4) = 0;
    *(undefined2 *)(param_1 + 0x7cc) = 0x100;
    uVar7 = FUN_1407766ee(param_1);
    if (*(char *)(param_1 + 0x6f4) == '\0') {
      *(undefined4 *)(param_1 + 0x6f8) = uVar7;
    }
    *(undefined4 *)(param_1 + 0x6fc) = 0;
    *(undefined2 *)(param_1 + 0x6f4) = 0x101;
    uVar7 = FUN_1407766ee(param_1);
    if (*(char *)(param_1 + 0x7dc) == '\0') {
      *(undefined4 *)(param_1 + 0x7e0) = uVar7;
    }
    *(undefined4 *)(param_1 + 0x7e4) = 0;
    *(undefined2 *)(param_1 + 0x7dc) = 0x101;
  }
  return;
}



// FUNCTION 14886d984 FUN_14886d984 body=639 status=ok
// SIG undefined FUN_14886d984(void)

void FUN_14886d984(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400021e4(param_1 + 0x80,local_70);
    FUN_1470ed5e8(local_60,local_70);
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb7e20c);
    FUN_1403719a4(lVar1 + 8,local_60);
    FUN_144a2da94(local_60);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400021e4(param_1 + 0x88,local_80);
    FUN_1470ed5e8(local_60,local_80);
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb7e214);
    FUN_1403719a4(lVar1 + 8,local_60);
    FUN_144a2da94(local_60);
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400021e4(param_1 + 0x90,local_90);
    FUN_1470ed5e8(local_60,local_90);
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb7e21c);
    FUN_1403719a4(lVar1 + 8,local_60);
    FUN_144a2da94(local_60);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400021e4(param_1 + 0x98,local_a0);
    FUN_1470ed5e8(local_60,local_a0);
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb7e224);
    FUN_1403719a4(lVar1 + 8,local_60);
    FUN_144a2da94(local_60);
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400021e4(param_1 + 0xa0,local_b0);
    FUN_1470ed5e8(local_60,local_b0);
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb7e22c);
    FUN_1403719a4(lVar1 + 8,local_60);
    FUN_144a2da94(local_60);
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400021e4(param_1 + 0xa8,local_c0);
    FUN_1470ed5e8(local_60,local_c0);
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb7e234);
    FUN_1403719a4(lVar1 + 8,local_60);
    FUN_144a2da94(local_60);
  }
  FUN_147f573da(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886dc04 FUN_14886dc04 body=247 status=ok
// SIG undefined FUN_14886dc04(void)

undefined8 FUN_14886dc04(undefined8 param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [40];
  undefined4 local_50;
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[0] = 0;
  local_50 = 0;
  FUN_1456bb102(local_78);
  FUN_1447c3578(param_1,local_48,local_78);
  lVar2 = FUN_14030a32e(local_48);
  if (lVar2 != 0) {
    lVar3 = FUN_140363886();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) goto LAB_14886dc7c;
  }
  lVar2 = 0;
LAB_14886dc7c:
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar5 = local_48;
    if (0x18 < local_30) {
      pppuVar5 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar5);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  FUN_144a5ac3a(local_78);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x3a0);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886dcfc FUN_14886dcfc body=145 status=ok
// SIG undefined FUN_14886dcfc(void)

void FUN_14886dcfc(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_141811562();
  lVar2 = *(longlong *)(param_1 + 0x210);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x48);
    uVar1 = *(undefined1 *)(lVar3 + 0x3e1);
    uVar4 = FUN_14479d2ce(param_1 + 0x230);
    uVar5 = FUN_14479d2ce(param_1 + 0x220);
    uVar6 = FUN_14479d2ce(param_1 + 0x228);
    FUN_148876492(lVar2,uVar6,uVar5,uVar4,1,uVar1);
    *(undefined1 *)(*(longlong *)(param_1 + 0x210) + 0xdc) = *(undefined1 *)(lVar3 + 0x3e0);
  }
  return;
}



// FUNCTION 14886dd8e FUN_14886dd8e body=266 status=ok
// SIG undefined FUN_14886dd8e(void)

undefined8 FUN_14886dd8e(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 ****ppppuVar5;
  undefined1 auStack_78 [32];
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14181152e();
  if (*(longlong *)(param_1 + 0x210) == 0) {
    uVar4 = 2;
  }
  else {
    cVar3 = FUN_147f4e66c(param_1);
    if (cVar3 == '\0') {
      if (*(char *)(*(longlong *)(param_1 + 0x210) + 0xf8) == '\x01') {
        *(undefined1 *)(*(longlong *)(param_1 + 0x210) + 0xf8) = 0;
      }
    }
    else {
      FUN_1418114a2(param_1,local_58,0);
      FUN_144a7b7fe(local_58,&local_30);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar1 != (code *)0x0) {
        ppppuVar5 = local_58;
        if (0x18 < local_40) {
          ppppuVar5 = (undefined8 ****)local_58[0];
        }
        (*pcVar1)(ppppuVar5);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(local_58[0]);
      }
      lVar2 = *(longlong *)(param_1 + 0x210);
      *(undefined8 *)(lVar2 + 0xf0) = local_20;
      *(undefined4 *)(lVar2 + 0xe0) = local_30;
      *(undefined4 *)(lVar2 + 0xe4) = uStack_2c;
      *(undefined4 *)(lVar2 + 0xe8) = uStack_28;
      *(undefined4 *)(lVar2 + 0xec) = uStack_24;
      *(undefined1 *)(lVar2 + 0xf8) = 1;
    }
    uVar4 = FUN_148877d32(*(undefined8 *)(param_1 + 0x210));
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886de9a FUN_14886de9a body=42 status=ok
// SIG undefined FUN_14886de9a(void)

void FUN_14886de9a(longlong param_1)

{
  FUN_1416454c0();
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FUN_148876a5c();
    return;
  }
  return;
}



// FUNCTION 14886dec4 FUN_14886dec4 body=109 status=ok
// SIG undefined FUN_14886dec4(void)

undefined8 * FUN_14886dec4(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FUN_148876b8e(*(longlong *)(param_1 + 0x210),param_2);
    if (*(char *)(param_2 + 4) != '\0') {
      return param_2;
    }
    if (DAT_14c9a85d0 != (code *)0x0) {
      puVar1 = param_2;
      if (0x18 < *(ushort *)(param_2 + 3)) {
        puVar1 = (undefined8 *)*param_2;
      }
      (*DAT_14c9a85d0)(puVar1);
    }
    if (0x18 < *(ushort *)(param_2 + 3)) {
      FUN_1400020a8(*param_2);
    }
  }
  FUN_1418114a2(param_1,param_2,param_3);
  return param_2;
}



// FUNCTION 14886df32 FUN_14886df32 body=233 status=ok
// SIG undefined FUN_14886df32(void)

void FUN_14886df32(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined2 local_40;
  undefined1 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = *(undefined8 *)(param_1 + 0x80);
  local_60 = 0;
  local_40 = 8;
  local_38 = 0x12;
  local_30 = 0x12;
  if ((DAT_14c9a9954 & 0x20) != 0) {
    local_30 = 0;
  }
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb7e23c);
  FUN_1403719a4(lVar1 + 8,&local_60);
  FUN_144a2da94(&local_60);
  local_60 = 0;
  local_40 = 4;
  local_58 = CONCAT44(local_58._4_4_,(uint)*(byte *)(param_1 + 0x98));
  local_30 = (DAT_14c9a8634 & 0x20) == 0;
  local_38 = 1;
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb7e244);
  FUN_1403719a4(lVar1 + 8,&local_60);
  FUN_144a2da94(&local_60);
  FUN_147f573da(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886e01c FUN_14886e01c body=56 status=ok
// SIG undefined FUN_14886e01c(void)

undefined8 * FUN_14886e01c(undefined8 *param_1)

{
  FUN_140e48d86();
  *param_1 = &PTR_FUN_14b0c9610;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0x99) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  return param_1;
}



// FUNCTION 14886e054 FUN_14886e054 body=147 status=ok
// SIG undefined FUN_14886e054(void)

void FUN_14886e054(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  uint local_50;
  undefined2 local_38;
  undefined1 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  local_38 = 4;
  local_50 = (uint)*(byte *)(param_1 + 0xa8);
  local_28 = (DAT_14c9a8634 & 0x20) == 0;
  local_30 = 1;
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb7e254);
  FUN_1403719a4(lVar1 + 8,&local_58);
  FUN_144a2da94(&local_58);
  FUN_147f573da(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886e0ee FUN_14886e0ee body=57 status=ok
// SIG undefined FUN_14886e0ee(void)

undefined8 FUN_14886e0ee(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = FUN_140343d7a();
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x48);
    cVar2 = FUN_1418ae580(lVar3,lVar1 + 0x80);
    if (*(char *)(lVar1 + 0xa8) != cVar2) {
      return 2;
    }
  }
  return 0;
}



// FUNCTION 14886e128 FUN_14886e128 body=25 status=ok
// SIG undefined FUN_14886e128(void)

char FUN_14886e128(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x88))();
  return (cVar1 != '\x02') * '\x02';
}



// FUNCTION 14886e141 FUN_14886e141 body=474 status=ok
// SIG undefined FUN_14886e141(void)

undefined8 * FUN_14886e141(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  double local_98;
  undefined8 local_90;
  int iStack_88;
  undefined4 uStack_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 0x10))(param_2);
    if (lVar2 != 0) {
      fVar6 = (float)FUN_140f8608e(lVar2);
      fVar7 = (float)FUN_1458aebfa(lVar2);
      local_98 = (double)fVar6;
      FUN_140002266(&local_90,L"Total: %.1f%% (%.1f/%.1f)",(double)((fVar7 * 100.0) / fVar6),
                    (double)fVar7);
      if (&local_90 == param_1) {
        if (CONCAT44(local_90._4_4_,(undefined4)local_90) != 0) {
          FUN_1400020a8();
        }
      }
      else {
        *(undefined4 *)param_1 = (undefined4)local_90;
        *(undefined4 *)((longlong)param_1 + 4) = local_90._4_4_;
        *(int *)(param_1 + 1) = iStack_88;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_84;
      }
      iVar1 = *(int *)(lVar2 + 0x40);
      if (1 < (longlong)iVar1) {
        FUN_140002184(param_1,0x20);
        lVar3 = 0;
        do {
          lVar5 = *(longlong *)(lVar2 + 0x38) + lVar3;
          fVar6 = (float)FUN_1405583ce(lVar5);
          fVar7 = (float)FUN_14055830e(lVar5);
          fVar8 = (float)FUN_14055848a(lVar5);
          local_98 = (double)fVar6;
          FUN_140002266(&local_90,L"[%.1f%% (%.1f/%.1f)]",(double)(fVar8 * 100.0),(double)fVar7);
          iVar4 = iStack_88 + -1;
          if (iStack_88 == 0) {
            iVar4 = 0;
          }
          FUN_1400020e8(param_1,CONCAT44(local_90._4_4_,(undefined4)local_90),iVar4);
          if (CONCAT44(local_90._4_4_,(undefined4)local_90) != 0) {
            FUN_1400020a8();
          }
          lVar3 = lVar3 + 0x88;
        } while ((longlong)iVar1 * 0x88 != lVar3);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886e31c FUN_14886e31c body=338 status=ok
// SIG undefined FUN_14886e31c(void)

void FUN_14886e31c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  float fVar4;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_1486b396c();
  FUN_1401cfad2(uVar1,local_70,*(undefined1 *)(param_1 + 0x80));
  FUN_1470ed5e8(local_60,local_70);
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb7e25c);
  FUN_1403719a4(lVar2 + 8,local_60);
  FUN_144a2da94(local_60);
  if ((*(byte *)(param_1 + 0xb0) & 0xfe) == 2) {
    fVar4 = (float)FUN_144a7ecd0(param_1 + 0x90);
    pwVar3 = L"less";
    if (*(char *)(param_1 + 0xc0) == '\x01') {
      pwVar3 = L"more";
    }
    FUN_140002266(local_80,L"%.1f%% or %s",(double)(fVar4 * 100.0),pwVar3);
    FUN_1470ed5e8(local_60,local_80);
    lVar2 = FUN_1470e53c2(param_2,&DAT_14cb7e264);
    FUN_1403719a4(lVar2 + 8,local_60);
    FUN_144a2da94(local_60);
  }
  else {
    lVar2 = FUN_1470e53c2(param_2,&DAT_14cb7e264);
    FUN_144983130(lVar2 + 8,param_1 + 0x88);
  }
  FUN_147f573da(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886e470 FUN_14886e470 body=517 status=ok
// SIG undefined FUN_14886e470(void)

void FUN_14886e470(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  void **ppvVar5;
  longlong lVar6;
  void **ppvVar7;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = FUN_144a7be76();
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_144a7b040();
    uVar4 = FUN_144718840(lVar3,uVar4);
  }
  FUN_14886e141(&local_60,uVar4);
  lVar3 = FUN_1470e53c2(param_2,&DAT_14cb7e264);
  pvVar2 = local_60;
  ppvVar7 = (void **)(lVar3 + 0x40);
  if (*(byte *)(lVar3 + 0x60) == 8) {
    if (ppvVar7 != &local_60) {
      *(int *)(lVar3 + 0x48) = local_58;
      if (local_58 == 0 && *(int *)(lVar3 + 0x4c) == 0) {
        *(undefined4 *)(lVar3 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(ppvVar7,local_58);
        if (local_58 != 0) {
          memcpy(*ppvVar7,pvVar2,(longlong)local_58 * 2);
        }
      }
    }
    goto LAB_14886e62c;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(lVar3 + 0x60) * 0x120))
  ;
  if (pcVar1 != (code *)0x0) {
    ppvVar5 = ppvVar7;
    if (0x18 < *(ushort *)(lVar3 + 0x58)) {
      ppvVar5 = *(void ***)(lVar3 + 0x40);
    }
    (*pcVar1)(ppvVar5);
  }
  if (0x18 < *(ushort *)(lVar3 + 0x58)) {
    FUN_1400020a8(*ppvVar7);
  }
  pvVar2 = local_60;
  local_50 = (void *)0x0;
  local_48 = local_58;
  if ((longlong)local_58 == 0) {
    local_44 = 0;
    *(undefined2 *)(lVar3 + 0x58) = 0x10;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined4 *)(lVar3 + 0x48) = 0;
LAB_14886e614:
    *(undefined4 *)(lVar3 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_58,0);
    memcpy(local_50,pvVar2,(longlong)local_58 * 2);
    pvVar2 = local_50;
    lVar6 = (longlong)local_48;
    *(undefined2 *)(lVar3 + 0x58) = 0x10;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(int *)(lVar3 + 0x48) = local_48;
    if (lVar6 == 0) goto LAB_14886e614;
    FUN_1446dd670(ppvVar7,local_48,0);
    memcpy(*ppvVar7,pvVar2,lVar6 * 2);
  }
  *(undefined1 *)(lVar3 + 0x60) = 8;
  if (local_50 != (void *)0x0) {
    FUN_1400020a8(local_50);
  }
LAB_14886e62c:
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_147f574a0(param_1,param_2);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886e676 FUN_14886e676 body=247 status=ok
// SIG undefined FUN_14886e676(void)

undefined8 FUN_14886e676(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_6b8 [40];
  undefined1 local_690 [816];
  undefined4 local_360 [46];
  undefined1 local_2a8 [632];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_6b8;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar1 == DAT_14c892b68) {
    lVar3 = FUN_140c483a2();
    if (lVar3 != 0) {
      local_360[0] = *(undefined4 *)(param_2 + 8);
      cVar2 = FUN_1468ec2ac(local_360,*(undefined8 *)(lVar3 + 0x18));
      if (cVar2 != '\0') {
        FUN_140c49d16(local_360);
        FUN_140c49d16(local_690);
        FUN_14047320e(lVar3,param_3,local_360,local_690);
        FUN_143c4a622(param_1,local_2a8);
        FUN_14105cfcc(local_690);
        FUN_14105cfcc(local_360);
        uVar4 = 1;
        goto LAB_14886e745;
      }
    }
  }
  uVar4 = 0;
LAB_14886e745:
  if ((local_30 ^ (ulonglong)auStack_6b8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886e76e FUN_14886e76e body=307 status=ok
// SIG undefined FUN_14886e76e(void)

void FUN_14886e76e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_40;
  undefined1 local_38;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400021e4(param_1,local_70);
  FUN_1470ed5e8(&local_60,local_70);
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb7e274);
  FUN_1403719a4(lVar2 + 8,&local_60);
  FUN_144a2da94(&local_60);
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb7e284);
  FUN_144983130(lVar2 + 8,param_1 + 8);
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    lVar2 = FUN_1470e53c2(param_2,&DAT_14cb7e28c);
    FUN_144983130(lVar2 + 8,param_1 + 0x78);
  }
  local_60 = 0;
  local_40 = 4;
  local_58 = 0;
  local_38 = 3;
  local_30 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  cVar1 = FUN_144a43716(param_1 + 0x48);
  FUN_144a2da94(&local_60);
  if (cVar1 == '\0') {
    lVar2 = FUN_1470e53c2(param_2,&DAT_14cb7e27c);
    FUN_144983130(lVar2 + 8,param_1 + 0x40);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886e8a6 FUN_14886e8a6 body=80 status=ok
// SIG undefined FUN_14886e8a6(void)

void FUN_14886e8a6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb7e26c);
  FUN_144983130(lVar1 + 8,param_1 + 0x80);
  FUN_14886e76e(param_1 + 0xb8,param_2);
  FUN_147f573da(param_1,param_2);
  return;
}



// FUNCTION 14886e8f6 FUN_14886e8f6 body=2209 status=ok
// SIG undefined FUN_14886e8f6(void)

void FUN_14886e8f6(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  float *pfVar2;
  byte bVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  float *pfVar13;
  uint uVar14;
  undefined8 ****ppppuVar15;
  undefined8 *puVar16;
  float fVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined1 auStack_248 [40];
  undefined1 local_220 [28];
  undefined1 local_204 [4];
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 ***local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  ushort local_1e0;
  undefined2 local_1d8;
  undefined1 local_1d0;
  char local_1c8;
  undefined1 local_1a8 [32];
  char local_188;
  undefined8 local_170 [9];
  undefined1 local_128;
  undefined7 uStack_127;
  ushort local_110;
  byte local_108;
  undefined1 local_100 [40];
  undefined4 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar10 = *(longlong *)(param_1 + 0x48);
  local_128 = 2;
  local_170[0] = FUN_144a7be76();
  FUN_144a7bec8(param_1,&local_1f8);
  local_100[0] = 0;
  local_d8 = 0;
  FUN_144a7bf34(local_100,&local_1f8,local_170,&local_128);
  plVar11 = (longlong *)CONCAT44(uStack_1ec,local_1f0);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  puVar12 = &local_128;
  FUN_1447c3578(lVar10 + 0x80,puVar12,local_100);
  uVar19 = (undefined4)DAT_14c8464f8;
  uVar20 = (undefined4)((ulonglong)DAT_14c8464f8 >> 0x20);
  uVar23 = (undefined4)DAT_14c846500;
  uVar24 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
  uVar21 = uVar19;
  uVar22 = uVar20;
  uVar25 = uVar23;
  uVar27 = uVar24;
  if (((*(longlong *)(param_1 + 0xe0) != 0) &&
      (cVar5 = FUN_144729dda(param_1 + 0xd8), cVar5 != '\0')) &&
     (plVar11 = *(longlong **)(param_1 + 0xe0), plVar11 != (longlong *)0x0)) {
    uVar9 = FUN_140343d7a(param_1);
    lVar6 = *(longlong *)(lVar10 + 0xb8);
    if (lVar6 == DAT_14cb72618) {
      local_204[0] = 0;
    }
    else if ((lVar6 == DAT_14cb72620) || ((lVar6 != DAT_14cb72628 && (lVar6 != DAT_14cb725f8)))) {
      local_204[0] = 1;
    }
    else {
      local_204[0] = 2;
    }
    local_200 = 0;
    local_1fc = 0;
    FUN_14070d2c0(local_170,&local_128,local_204,uVar9);
    cVar5 = FUN_1456ca660(local_170);
    if (cVar5 != '\0') {
      if (*(code **)(*plVar11 + 0x10) == (code *)&LAB_144944cea) {
        plVar11 = plVar11 + 0xe1;
      }
      else {
        plVar11 = (longlong *)(**(code **)(*plVar11 + 0x10))(plVar11);
      }
      lVar6 = FUN_144a782da(plVar11,lVar10 + 0xb8);
      if ((lVar6 != 0) && (FUN_14186d5a6(lVar6,&local_1f8,local_170), local_188 == '\x01')) {
        FUN_1448052ee(local_1a8,local_220);
        puVar16 = (undefined8 *)FUN_1407726b2(lVar6);
        uVar19 = (undefined4)*puVar16;
        uVar20 = (undefined4)((ulonglong)*puVar16 >> 0x20);
        uVar23 = (undefined4)puVar16[1];
        uVar24 = (undefined4)((ulonglong)puVar16[1] >> 0x20);
        uVar21 = (int)local_220._0_8_;
        uVar22 = SUB84(local_220._0_8_,4);
        uVar25 = (int)local_220._8_8_;
        uVar27 = SUB84(local_220._8_8_,4);
      }
    }
  }
  FUN_1447c3578(lVar10 + 0xc0,&local_1f8,local_100);
  FUN_144a7ecd0(&local_1f8);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_1d8 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar15 = &local_1f8;
    if (0x18 < local_1e0) {
      ppppuVar15 = (undefined8 ****)local_1f8;
    }
    (*pcVar4)(ppppuVar15);
  }
  if (0x18 < local_1e0) {
    FUN_1400020a8(local_1f8);
  }
  FUN_1447c3578(lVar10 + 0xf8,&local_1f8,local_100);
  fVar17 = (float)FUN_144a7ecd0(&local_1f8);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_1d8 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar15 = &local_1f8;
    if (0x18 < local_1e0) {
      ppppuVar15 = (undefined8 ****)local_1f8;
    }
    (*pcVar4)(ppppuVar15);
  }
  if (0x18 < local_1e0) {
    FUN_1400020a8(local_1f8);
  }
  dVar18 = (double)FUN_144719204((double)CONCAT44(uVar24,uVar23) + (double)fVar17,0x4076800000000000
                                );
  dVar18 = (double)(~-(ulonglong)(dVar18 < 0.0) & (ulonglong)dVar18 |
                   (ulonglong)(dVar18 + 360.0) & -(ulonglong)(dVar18 < 0.0));
  dVar18 = (double)FUN_144719204((double)CONCAT44(uVar27,uVar25) -
                                 (double)(float)(double)(~-(ulonglong)(180.0 < dVar18) &
                                                         (ulonglong)dVar18 |
                                                        (ulonglong)(dVar18 + -360.0) &
                                                        -(ulonglong)(180.0 < dVar18)),
                                 0x4076800000000000);
  dVar18 = (double)(~-(ulonglong)(dVar18 < 0.0) & (ulonglong)dVar18 |
                   (ulonglong)(dVar18 + 360.0) & -(ulonglong)(dVar18 < 0.0));
  fVar26 = ABS((float)(double)(~-(ulonglong)(180.0 < dVar18) & (ulonglong)dVar18 |
                              (ulonglong)(dVar18 + -360.0) & -(ulonglong)(180.0 < dVar18)));
  lVar6 = FUN_1470e53c2(param_2,&DAT_14cb7e26c);
  bVar3 = *(byte *)(lVar6 + 0x60);
  puVar16 = (undefined8 *)(lVar6 + 0x40);
  if (bVar3 == local_108) {
    if (local_110 < 0x19) {
      puVar12 = &local_128;
    }
    else {
      puVar12 = (undefined1 *)CONCAT71(uStack_127,local_128);
    }
    if (0x18 < *(ushort *)(lVar6 + 0x58)) {
      puVar16 = *(undefined8 **)(lVar6 + 0x40);
    }
    uVar8 = (ulonglong)((uint)bVar3 * 0x120);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar8);
    if (pcVar4 == (code *)0x0) {
      memcpy(puVar16,puVar12,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
    }
    else {
      (*pcVar4)(puVar16);
    }
  }
  else {
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
    if (pcVar4 != (code *)0x0) {
      puVar7 = puVar16;
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        puVar7 = *(undefined8 **)(lVar6 + 0x40);
      }
      (*pcVar4)(puVar7);
    }
    if (0x18 < *(ushort *)(lVar6 + 0x58)) {
      FUN_1400020a8(*puVar16);
    }
    uVar14 = (uint)local_108;
    *(ushort *)(lVar6 + 0x58) = local_110;
    puVar7 = puVar16;
    if (0x18 < local_110) {
      puVar7 = (undefined8 *)FUN_14001cc68(local_110,0);
      *puVar16 = puVar7;
      puVar12 = (undefined1 *)CONCAT71(uStack_127,local_128);
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar14 * 0x120));
    if (pcVar4 == (code *)0x0) {
      memcpy(puVar7,puVar12,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar14 * 0x120)));
    }
    else {
      (*pcVar4)(puVar7,puVar12);
    }
    *(byte *)(lVar6 + 0x60) = local_108;
  }
  local_1f8 = (undefined8 ***)0x0;
  local_1d8 = 4;
  local_1f0 = 0;
  local_1d0 = 3;
  local_1c8 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  cVar5 = FUN_144a43716(lVar10 + 0x100);
  FUN_144a2da94(&local_1f8);
  if (cVar5 == '\0') {
    lVar6 = FUN_1470e53c2(param_2,&DAT_14cb7e27c);
    pfVar2 = (float *)(lVar6 + 0x40);
    if (*(byte *)(lVar6 + 0x60) == 3) {
      *pfVar2 = fVar17;
    }
    else {
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
      if (pcVar4 != (code *)0x0) {
        pfVar13 = pfVar2;
        if (0x18 < *(ushort *)(lVar6 + 0x58)) {
          pfVar13 = *(float **)(lVar6 + 0x40);
        }
        (*pcVar4)(pfVar13);
      }
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)pfVar2);
      }
      *(undefined2 *)(lVar6 + 0x58) = 4;
      *(float *)(lVar6 + 0x40) = fVar17;
      *(undefined1 *)(lVar6 + 0x60) = 3;
    }
  }
  lVar6 = FUN_1470e53c2(param_2,&DAT_14cb7e294);
  pfVar2 = (float *)(lVar6 + 0x40);
  if (*(byte *)(lVar6 + 0x60) == 3) {
    *pfVar2 = fVar26;
  }
  else {
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
    if (pcVar4 != (code *)0x0) {
      pfVar13 = pfVar2;
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        pfVar13 = *(float **)(lVar6 + 0x40);
      }
      (*pcVar4)(pfVar13);
    }
    if (0x18 < *(ushort *)(lVar6 + 0x58)) {
      FUN_1400020a8(*(undefined8 *)pfVar2);
    }
    *(undefined2 *)(lVar6 + 0x58) = 4;
    *(float *)(lVar6 + 0x40) = fVar26;
    *(undefined1 *)(lVar6 + 0x60) = 3;
  }
  if (*(longlong *)(lVar10 + 0xb8) != DAT_14cb72618) {
    dVar18 = (double)FUN_144719204(CONCAT44(uVar20,uVar19),0x4076800000000000);
    dVar18 = (double)(~-(ulonglong)(dVar18 < 0.0) & (ulonglong)dVar18 |
                     (ulonglong)(dVar18 + 360.0) & -(ulonglong)(dVar18 < 0.0));
    dVar18 = (double)FUN_144719204((double)CONCAT44(uVar22,uVar21) -
                                   (double)(float)(double)(~-(ulonglong)(180.0 < dVar18) &
                                                           (ulonglong)dVar18 |
                                                          (ulonglong)(dVar18 + -360.0) &
                                                          -(ulonglong)(180.0 < dVar18)),
                                   0x4076800000000000);
    dVar18 = (double)(~-(ulonglong)(dVar18 < 0.0) & (ulonglong)dVar18 |
                     (ulonglong)(dVar18 + 360.0) & -(ulonglong)(dVar18 < 0.0));
    fVar17 = ABS((float)(double)(~-(ulonglong)(180.0 < dVar18) & (ulonglong)dVar18 |
                                (ulonglong)(dVar18 + -360.0) & -(ulonglong)(180.0 < dVar18)));
    lVar10 = FUN_1470e53c2(param_2,&DAT_14cb7e29c);
    pfVar2 = (float *)(lVar10 + 0x40);
    if (*(byte *)(lVar10 + 0x60) == 3) {
      *pfVar2 = fVar17;
    }
    else {
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar10 + 0x60) * 0x120));
      if (pcVar4 != (code *)0x0) {
        pfVar13 = pfVar2;
        if (0x18 < *(ushort *)(lVar10 + 0x58)) {
          pfVar13 = *(float **)(lVar10 + 0x40);
        }
        (*pcVar4)(pfVar13);
      }
      if (0x18 < *(ushort *)(lVar10 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)pfVar2);
      }
      *(undefined2 *)(lVar10 + 0x58) = 4;
      *(float *)(lVar10 + 0x40) = fVar17;
      *(undefined1 *)(lVar10 + 0x60) = 3;
    }
  }
  FUN_147f574a0(param_1,param_2);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_108 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (local_110 < 0x19) {
      puVar12 = &local_128;
    }
    else {
      puVar12 = (undefined1 *)CONCAT71(uStack_127,local_128);
    }
    (*pcVar4)(puVar12);
  }
  if (0x18 < local_110) {
    FUN_1400020a8(CONCAT71(uStack_127,local_128));
  }
  FUN_144a5ac3a(local_100);
  if ((local_d0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14886f198 FUN_14886f198 body=256 status=ok
// SIG undefined FUN_14886f198(void)

void FUN_14886f198(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  undefined2 local_40;
  undefined1 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = *(undefined8 *)(param_1 + 0x80);
  uVar1 = FUN_14477b664(*(undefined8 *)(param_1 + 0x88));
  local_70 = FUN_14477b664(uVar1);
  local_68 = *(undefined8 *)(param_1 + 0x90);
  FUN_14886f29a(&local_60,&local_78);
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb7e2ac);
  FUN_1403719a4(lVar2 + 8,&local_60);
  FUN_144a2da94(&local_60);
  local_60 = 0;
  local_40 = 4;
  local_58 = (uint)*(byte *)(param_1 + 0x98);
  local_30 = (DAT_14c9a8634 & 0x20) == 0;
  local_38 = 1;
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb7e2b4);
  FUN_1403719a4(lVar2 + 8,&local_60);
  FUN_144a2da94(&local_60);
  FUN_147f573da(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886f29a FUN_14886f29a body=157 status=ok
// SIG undefined FUN_14886f29a(void)

undefined8 * FUN_14886f29a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  local_40 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  local_38 = FUN_14477b664(uVar1);
  local_30 = param_2[2];
  *(undefined2 *)(param_1 + 4) = 0x18;
  FUN_14151bf7c(param_1 + 1,&local_40);
  *(undefined1 *)(param_1 + 5) = 0x1d;
  uVar2 = 0x1d;
  if ((DAT_14c9aa5b4 & 0x20) != 0) {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 6) = uVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886f34e FUN_14886f34e body=247 status=ok
// SIG undefined FUN_14886f34e(void)

undefined8 FUN_14886f34e(undefined8 param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [40];
  undefined4 local_50;
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[0] = 0;
  local_50 = 0;
  FUN_1456bb102(local_78);
  FUN_1447c3578(param_1,local_48,local_78);
  lVar2 = FUN_14030a32e(local_48);
  if (lVar2 != 0) {
    lVar3 = FUN_140363886();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) goto LAB_14886f3c6;
  }
  lVar2 = 0;
LAB_14886f3c6:
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar5 = local_48;
    if (0x18 < local_30) {
      pppuVar5 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar5);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  FUN_144a5ac3a(local_78);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x3a0);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886f446 FUN_14886f446 body=920 status=ok
// SIG undefined FUN_14886f446(void)

void FUN_14886f446(longlong param_1)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 ***pppuVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined1 local_d9;
  undefined1 local_d8 [40];
  undefined4 local_b0;
  undefined8 **local_a8;
  longlong *local_a0;
  ushort local_90;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140cad146();
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x48);
    local_d9 = 2;
    local_e8 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_a8);
    local_d8[0] = 0;
    local_b0 = 0;
    FUN_144a7bf34(local_d8,&local_a8,&local_e8,&local_d9);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a0 + 0x10))();
      }
    }
    FUN_1447c3578(lVar3 + 0x160,&local_a8,local_d8);
    uVar10 = FUN_144a7ecd0(&local_a8);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppuVar9 = &local_a8;
      if (0x18 < local_90) {
        pppuVar9 = (undefined8 ***)local_a8;
      }
      (*pcVar4)(pppuVar9);
    }
    if (0x18 < local_90) {
      FUN_1400020a8(local_a8);
    }
    FUN_144a5ac3a(local_d8);
    local_d9 = 2;
    local_e8 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_a8);
    local_d8[0] = 0;
    local_b0 = 0;
    FUN_144a7bf34(local_d8,&local_a8,&local_e8,&local_d9);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a0 + 0x10))();
      }
    }
    FUN_1447c3578(lVar3 + 0x128,&local_a8,local_d8);
    uVar11 = FUN_144a7ecd0(&local_a8);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppuVar9 = &local_a8;
      if (0x18 < local_90) {
        pppuVar9 = (undefined8 ***)local_a8;
      }
      (*pcVar4)(pppuVar9);
    }
    if (0x18 < local_90) {
      FUN_1400020a8(local_a8);
    }
    FUN_144a5ac3a(local_d8);
    local_d9 = 2;
    local_e8 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_a8);
    local_d8[0] = 0;
    local_b0 = 0;
    FUN_144a7bf34(local_d8,&local_a8,&local_e8,&local_d9);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a0 + 0x10))();
      }
    }
    FUN_1447c3578(lVar3 + 0x198,&local_a8,local_d8);
    uVar12 = FUN_144a7ecd0(&local_a8);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppuVar9 = &local_a8;
      if (0x18 < local_90) {
        pppuVar9 = (undefined8 ***)local_a8;
      }
      (*pcVar4)(pppuVar9);
    }
    if (0x18 < local_90) {
      FUN_1400020a8(local_a8);
    }
    FUN_144a5ac3a(local_d8);
    uVar5 = *(undefined8 *)(param_1 + 0xd8);
    uVar2 = *(undefined1 *)(lVar3 + 0x1d0);
    uVar6 = FUN_14479d2ce(param_1 + 0xf8);
    uVar7 = FUN_14479d2ce(param_1 + 0xe8);
    uVar8 = FUN_14479d2ce(param_1 + 0xf0);
    local_f8 = 0;
    local_f0 = uVar2;
    FUN_148876492(uVar5,uVar8,uVar7,uVar6);
    *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 200) = uVar10;
    *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 0xcc) = uVar11;
    *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 0xd0) = uVar12;
  }
  if ((local_80 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886f806 FUN_14886f806 body=95 status=ok
// SIG undefined FUN_14886f806(void)

undefined8 * FUN_14886f806(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_148876c0a(*(longlong *)(param_1 + 0xd8),param_2);
    if (*(char *)(param_2 + 4) != '\0') {
      return param_2;
    }
    if (DAT_14c9a85d0 != (code *)0x0) {
      puVar1 = param_2;
      if (0x18 < *(ushort *)(param_2 + 3)) {
        puVar1 = (undefined8 *)*param_2;
      }
      (*DAT_14c9a85d0)(puVar1);
    }
    if (0x18 < *(ushort *)(param_2 + 3)) {
      FUN_1400020a8(*param_2);
    }
  }
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  return param_2;
}



// FUNCTION 14886f866 FUN_14886f866 body=200 status=ok
// SIG undefined FUN_14886f866(void)

void FUN_14886f866(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 auStack_50 [3];
  undefined2 local_38;
  undefined1 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  auStack_50[0] = 0;
  local_38 = 8;
  FUN_14485c47a(auStack_50,*(undefined8 *)(param_1 + 0x80));
  local_30 = 6;
  local_28 = 6;
  if ((DAT_14c9a8bd4 & 0x20) != 0) {
    local_28 = 0;
  }
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb7e2bc);
  FUN_1403719a4(lVar1 + 8,&local_58);
  FUN_144a2da94(&local_58);
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb7e2c4);
  FUN_144983130(lVar1 + 8,param_1 + 0x88);
  FUN_147f573da(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886f930 FUN_14886f930 body=215 status=ok
// SIG undefined FUN_14886f930(void)

void FUN_14886f930(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  uint local_50;
  undefined2 local_38;
  undefined1 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb7e2f8);
  FUN_144983130(lVar1 + 8,param_1 + 0x80);
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb7e300);
  FUN_144983130(lVar1 + 8,param_1 + 0xb8);
  local_58 = 0;
  local_38 = 4;
  local_50 = (uint)*(byte *)(param_1 + 0xf1);
  local_28 = (DAT_14c9a8634 & 0x20) == 0;
  local_30 = 1;
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb7e308);
  FUN_1403719a4(lVar1 + 8,&local_58);
  FUN_144a2da94(&local_58);
  FUN_147f573da(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14886fa18 FUN_14886fa18 body=265 status=ok
// SIG undefined FUN_14886fa18(void)

void FUN_14886fa18(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  uVar2 = *(undefined4 *)(param_1 + 0xd8);
  lVar4 = FUN_1470e53c2(param_2,&DAT_14cb7e310);
  puVar1 = (undefined8 *)(lVar4 + 0x40);
  if (*(byte *)(lVar4 + 0x60) == 2) {
    *(undefined4 *)puVar1 = uVar2;
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar4 + 0x60) * 0x120));
    if (pcVar3 != (code *)0x0) {
      puVar5 = puVar1;
      if (0x18 < *(ushort *)(lVar4 + 0x58)) {
        puVar5 = *(undefined8 **)(lVar4 + 0x40);
      }
      (*pcVar3)(puVar5);
    }
    if (0x18 < *(ushort *)(lVar4 + 0x58)) {
      FUN_1400020a8(*puVar1);
    }
    *(undefined2 *)(lVar4 + 0x58) = 4;
    *(undefined4 *)(lVar4 + 0x40) = uVar2;
    *(undefined1 *)(lVar4 + 0x60) = 2;
  }
  uVar2 = *(undefined4 *)(param_1 + 0xdc);
  lVar4 = FUN_1470e53c2(param_2,&DAT_14cb7e318);
  puVar1 = (undefined8 *)(lVar4 + 0x40);
  if (*(byte *)(lVar4 + 0x60) == 2) {
    *(undefined4 *)puVar1 = uVar2;
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar4 + 0x60) * 0x120));
    if (pcVar3 != (code *)0x0) {
      puVar5 = puVar1;
      if (0x18 < *(ushort *)(lVar4 + 0x58)) {
        puVar5 = *(undefined8 **)(lVar4 + 0x40);
      }
      (*pcVar3)(puVar5);
    }
    if (0x18 < *(ushort *)(lVar4 + 0x58)) {
      FUN_1400020a8(*puVar1);
    }
    *(undefined2 *)(lVar4 + 0x58) = 4;
    *(undefined4 *)(lVar4 + 0x40) = uVar2;
    *(undefined1 *)(lVar4 + 0x60) = 2;
  }
  FUN_147f574a0(param_1,param_2);
  return;
}



// FUNCTION 14886fb28 FUN_14886fb28 body=69 status=ok
// SIG undefined FUN_14886fb28(void)

ulonglong FUN_14886fb28(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0xd8);
    if ((cVar1 != '\0') && (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0)) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x40))();
      uVar3 = (ulonglong)uVar2 ^ 1;
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14886fb6e FUN_14886fb6e body=74 status=ok
// SIG undefined FUN_14886fb6e(void)

undefined8 FUN_14886fb6e(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  
  if ((((param_3 != '\x04') && (*(longlong *)(param_1 + 0xe0) != 0)) &&
      (cVar1 = FUN_144729dda(param_1 + 0xd8), cVar1 != '\0')) &&
     ((*(longlong **)(param_1 + 0xe0) != (longlong *)0x0 &&
      (cVar1 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x40))(), cVar1 != '\0')))) {
    return 0;
  }
  return 1;
}



// FUNCTION 14886fbb8 FUN_14886fbb8 body=381 status=ok
// SIG undefined FUN_14886fbb8(void)

void FUN_14886fbb8(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  undefined1 auStack_88 [40];
  code **local_60;
  longlong local_58;
  undefined1 *local_50;
  code ***local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != (longlong *)0x0) {
    uVar3 = FUN_1407725cc();
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_1407725cc();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
        lVar2 = *(longlong *)(param_1 + 0x48);
        if (*(int *)(lVar2 + 0x198) == 1) {
          pcVar6 = FUN_14186d510;
          pcVar9 = FUN_146545d40;
        }
        else {
          if (*(int *)(lVar2 + 0x198) != 0) goto LAB_14886fc22;
          pcVar6 = FUN_1413d8066;
          pcVar9 = FUN_14134c034;
        }
        if (param_3 != '\0') {
          pcVar9 = pcVar6;
        }
        local_40 = pcVar9;
        if (*(code **)(*plVar5 + 0x10) == (code *)&LAB_144944cea) {
          plVar5 = plVar5 + 0xe1;
        }
        else {
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5);
        }
        if (*(char *)(lVar2 + 0x1c0) == '\x01') {
          uVar1 = *(uint *)(lVar2 + 0x1a8);
          if ((ulonglong)uVar1 != 0) {
            lVar8 = 0;
            do {
              lVar7 = FUN_144a782da(plVar5,*(longlong *)(lVar2 + 0x1a0) + lVar8);
              if (lVar7 != 0) {
                (*pcVar9)(lVar7,param_1 + 0xe0);
              }
              lVar8 = lVar8 + 8;
            } while ((ulonglong)uVar1 << 3 != lVar8);
          }
        }
        else {
          local_60 = &local_40;
          local_48 = &local_60;
          local_50 = &LAB_143d5fcf4;
          local_58 = param_1;
          FUN_1400b7536(plVar5);
        }
      }
    }
  }
LAB_14886fc22:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14886fd3a FUN_14886fd3a body=908 status=ok
// SIG undefined FUN_14886fd3a(void)

void FUN_14886fd3a(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  wchar_t *_Str;
  undefined1 auStack_2d8 [32];
  undefined1 local_2b8 [16];
  undefined8 local_2a8;
  longlong local_2a0;
  undefined4 local_298;
  undefined2 local_280;
  undefined1 local_278;
  undefined1 local_270;
  undefined8 *local_268;
  undefined8 *local_260;
  ulonglong *local_258;
  char local_250;
  undefined8 local_248;
  undefined8 local_240 [63];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  lVar3 = FUN_1470e53c2(param_2,&DAT_14cb7e320);
  FUN_144983130(lVar3 + 8,param_1 + 0x80);
  local_268 = &local_248;
  local_250 = '\0';
  local_258 = &local_48;
  local_260 = local_268;
  switch(*(undefined1 *)(param_1 + 0xb8)) {
  case 0:
    uVar1 = *(uint *)(param_1 + 200);
    uVar4 = (ulonglong)uVar1;
    if (uVar1 == 0) {
      local_260 = local_240;
      local_248 = 0x65006e006f004e;
    }
    else if (0 < (int)uVar1) {
      lVar3 = 0;
      do {
        iVar2 = (int)uVar4;
        if (lVar3 != 0) {
          if (local_258 <= (ulonglong *)((longlong)local_260 + 4)) {
            FUN_140213274(&local_268,2);
          }
          *(undefined4 *)local_260 = 0x20002c;
          local_260 = (undefined8 *)((longlong)local_260 + 4);
          iVar2 = *(int *)(param_1 + 200);
        }
        if (lVar3 < iVar2) {
          local_2a8 = *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + lVar3 * 8);
        }
        else {
          local_2a8 = 0;
        }
        FUN_1400021e4(&local_2a8,&local_2a0);
        FUN_140c540b4(&local_2a0,L"RotationChannel.",0x10,1);
        FUN_1449668a2(&local_268,local_2a0);
        if (local_2a0 != 0) {
          FUN_1400020a8();
        }
        lVar3 = lVar3 + 1;
        uVar4 = (ulonglong)*(int *)(param_1 + 200);
      } while (lVar3 < (longlong)uVar4);
    }
    goto LAB_14886fe3b;
  case 1:
    _Str = L"NoBodyRotationAllowed";
    break;
  case 2:
    _Str = L"FullBody";
    break;
  case 3:
    _Str = L"AimOffsetsOnly";
    break;
  case 4:
    _Str = L"FullBodyWithAim";
    break;
  case 5:
    _Str = L"None";
    break;
  default:
    _Str = L"Custom";
  }
  wcslen(_Str);
  FUN_1449668a2(&local_268,_Str);
LAB_14886fe3b:
  *(undefined2 *)local_260 = 0;
  FUN_140056680(local_2b8,local_268);
  FUN_1470ed5e8(&local_2a0,local_2b8);
  lVar3 = FUN_1470e53c2(param_2,&DAT_14cb7e328);
  FUN_1403719a4(lVar3 + 8,&local_2a0);
  FUN_144a2da94(&local_2a0);
  if (*(char *)(param_1 + 0x1d8) == '\x01') {
    uVar5 = FUN_1470e5326(param_2,&DAT_14cb7e338);
    FUN_14886e76e(param_1 + 0xe0,uVar5);
  }
  if (*(char *)(param_1 + 0x261) == '\x01') {
    local_2a0 = 0;
    local_280 = 4;
    local_298 = 1;
    local_270 = (DAT_14c9a8634 & 0x20) == 0;
    local_278 = 1;
    lVar3 = FUN_1470e53c2(param_2,&DAT_14cb7e348);
    FUN_1403719a4(lVar3 + 8,&local_2a0);
    FUN_144a2da94(&local_2a0);
  }
  if (((*(char *)(param_1 + 0x2a0) == '\x01') && (DAT_14cb72618 != 0)) &&
     ((longlong)*(int *)(param_1 + 200) != 0)) {
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xc0) + lVar3) == DAT_14cb72618) {
        lVar3 = FUN_1470e53c2(param_2,&DAT_14cb7e340);
        FUN_144983130(lVar3 + 8,param_1 + 0x268);
        break;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(param_1 + 200) * 8 != lVar3);
  }
  FUN_147f573da(param_1,param_2);
  if (local_250 == '\x01') {
    FUN_1400020a8(local_268);
  }
  if ((local_48 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488700c8 FUN_1488700c8 body=1471 status=ok
// SIG undefined FUN_1488700c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488700c8(longlong param_1,undefined8 param_2)

{
  float *pfVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  void *_Src;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  double *pdVar12;
  longlong *plVar13;
  float *pfVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 ****ppppuVar17;
  double *pdVar18;
  int iVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auStack_1c8 [40];
  void *local_1a0;
  longlong local_198;
  longlong *local_190;
  undefined8 local_188;
  void *local_180;
  int local_178;
  double local_170;
  double local_168;
  void *local_158;
  int local_150;
  undefined4 uStack_14c;
  undefined1 local_108 [32];
  char local_e8;
  undefined8 ***local_d8 [3];
  ushort local_c0;
  byte local_b8;
  undefined1 local_b0 [40];
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if ((*(int *)(param_1 + 0x220) != 0) && (*(longlong *)(param_1 + 0xf0) != 0)) {
    lVar10 = *(longlong *)(param_1 + 0x48);
    cVar9 = FUN_144729dda(param_1 + 0xe8);
    if ((cVar9 != '\0') && (plVar3 = *(longlong **)(param_1 + 0xf0), plVar3 != (longlong *)0x0)) {
      if (*(code **)(*plVar3 + 0x10) != (code *)&LAB_144944cea) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
      local_170 = (double)CONCAT71(local_170._1_7_,2);
      local_d8[0] = (undefined8 ***)FUN_144a7be76(param_1);
      FUN_144a7bec8(param_1,&local_158);
      local_b0[0] = 0;
      local_88 = 0;
      FUN_144a7bf34(local_b0,&local_158,local_d8,&local_170);
      plVar13 = (longlong *)CONCAT44(uStack_14c,local_150);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar13 + 0x10))();
        }
      }
      FUN_140343d7a(param_1);
      FUN_1447c3578(lVar10 + 0x80,local_d8,local_b0);
      local_188 = FUN_1470e5326(param_2,&DAT_14cb7e350);
      auVar8 = _DAT_1499387d0;
      pdVar18 = (double *)(param_1 + 0xf8);
      if (*(double **)(param_1 + 0x218) != (double *)0x0) {
        pdVar18 = *(double **)(param_1 + 0x218);
      }
      if ((longlong)*(int *)(param_1 + 0x220) != 0) {
        local_190 = plVar3 + 0xe1;
        lVar10 = (longlong)*(int *)(param_1 + 0x220) * 0x60;
        dVar5 = (double)DAT_1499387d0;
        dVar6 = DAT_1499387d0._8_8_;
        do {
          cVar9 = FUN_1456ca660(pdVar18 + 3);
          local_198 = lVar10;
          if (cVar9 == '\0') {
LAB_14887037e:
            local_1a0 = (void *)0x0;
            iVar19 = 0;
          }
          else {
            plVar13 = local_190;
            if (*(code **)(*plVar3 + 0x10) != (code *)&LAB_144944cea) {
              plVar13 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3);
            }
            lVar10 = FUN_144a782da(plVar13,pdVar18);
            if (lVar10 == 0) goto LAB_14887037e;
            FUN_14186d5a6(lVar10,&local_158,pdVar18 + 3);
            if (local_e8 == '\x01') {
              FUN_1448052ee(local_108,&local_170);
              pdVar12 = (double *)FUN_1407726b2(lVar10);
              auVar21._8_8_ = pdVar12[1] - local_168;
              auVar21._0_8_ = *pdVar12 - local_170;
              auVar22 = divpd(auVar21,auVar8);
              auVar22 = roundpd(auVar22,auVar22,3);
              dVar25 = (*pdVar12 - local_170) - auVar22._0_8_ * dVar5;
              dVar26 = (pdVar12[1] - local_168) - auVar22._8_8_ * dVar6;
              auVar27._0_8_ = dVar25 + dVar5;
              auVar27._8_8_ = dVar26 + dVar6;
              auVar23._8_8_ = -(ulonglong)(0.0 <= dVar26);
              auVar23._0_8_ = -(ulonglong)(0.0 <= dVar25);
              auVar22._8_8_ = dVar26;
              auVar22._0_8_ = dVar25;
              auVar22 = blendvpd(auVar27,auVar22,auVar23);
              auVar24._8_8_ = -(ulonglong)(180.0 < auVar22._8_8_);
              auVar24._0_8_ = -(ulonglong)(180.0 < auVar22._0_8_);
              auVar7._8_8_ = auVar22._8_8_ + -360.0;
              auVar7._0_8_ = auVar22._0_8_ + -360.0;
              auVar22 = blendvpd(auVar22,auVar7,auVar24);
              FUN_140002266(&local_180,L"Y=%0.02f, P=%0.02f",auVar22._8_8_,auVar22._0_8_);
              iVar19 = local_178;
              local_1a0 = local_180;
            }
            else {
              iVar19 = 0;
              local_1a0 = (void *)0x0;
            }
          }
          local_170 = *pdVar18;
          lVar11 = FUN_1470e53c2(local_188,&local_170);
          puVar16 = (undefined8 *)(lVar11 + 0x40);
          if (*(byte *)(lVar11 + 0x60) == 8) {
            *(int *)(lVar11 + 0x48) = iVar19;
            if (*(int *)(lVar11 + 0x4c) == 0 && iVar19 == 0) {
              *(undefined4 *)(lVar11 + 0x4c) = 0;
              lVar10 = local_198;
            }
            else {
              FUN_1446dd670(puVar16,iVar19);
              lVar10 = local_198;
              if (iVar19 != 0) {
                memcpy((void *)*puVar16,local_1a0,(longlong)iVar19 * 2);
              }
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                               (ulonglong)((uint)*(byte *)(lVar11 + 0x60) * 0x120));
            if (pcVar4 != (code *)0x0) {
              puVar15 = puVar16;
              if (0x18 < *(ushort *)(lVar11 + 0x58)) {
                puVar15 = *(undefined8 **)(lVar11 + 0x40);
              }
              (*pcVar4)(puVar15);
            }
            if (0x18 < *(ushort *)(lVar11 + 0x58)) {
              FUN_1400020a8(*puVar16);
            }
            local_158 = (void *)0x0;
            local_150 = iVar19;
            if (iVar19 == 0) {
              uStack_14c = 0;
              *(undefined2 *)(lVar11 + 0x58) = 0x10;
              *(undefined8 *)(lVar11 + 0x40) = 0;
              *(undefined4 *)(lVar11 + 0x48) = 0;
LAB_1488705b7:
              *(undefined4 *)(lVar11 + 0x4c) = 0;
            }
            else {
              FUN_1446dd670(&local_158,iVar19,0);
              memcpy(local_158,local_1a0,(longlong)iVar19 * 2);
              _Src = local_158;
              lVar10 = (longlong)local_150;
              *(undefined2 *)(lVar11 + 0x58) = 0x10;
              *(undefined8 *)(lVar11 + 0x40) = 0;
              *(int *)(lVar11 + 0x48) = local_150;
              if (lVar10 == 0) goto LAB_1488705b7;
              FUN_1446dd670(puVar16,local_150,0);
              memcpy((void *)*puVar16,_Src,lVar10 * 2);
            }
            lVar10 = local_198;
            *(undefined1 *)(lVar11 + 0x60) = 8;
            if (local_158 != (void *)0x0) {
              FUN_1400020a8(local_158);
            }
          }
          if (local_1a0 != (void *)0x0) {
            FUN_1400020a8();
          }
          pdVar18 = pdVar18 + 0xc;
          lVar10 = lVar10 + -0x60;
        } while (lVar10 != 0);
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b8 * 0x120));
      if (pcVar4 != (code *)0x0) {
        ppppuVar17 = local_d8;
        if (0x18 < local_c0) {
          ppppuVar17 = (undefined8 ****)local_d8[0];
        }
        (*pcVar4)(ppppuVar17);
      }
      if (0x18 < local_c0) {
        FUN_1400020a8(local_d8[0]);
      }
      FUN_144a5ac3a(local_b0);
    }
  }
  if (*(char *)(param_1 + 0x264) == '\x01') {
    fVar28 = *(float *)(param_1 + 0x260);
    fVar20 = (float)FUN_141236616(param_1);
    fVar28 = fVar28 - fVar20;
    fVar20 = 0.0;
    if (0.0 <= fVar28) {
      fVar20 = fVar28;
    }
    lVar10 = FUN_1470e53c2(param_2,&DAT_14cb7e358);
    pfVar1 = (float *)(lVar10 + 0x40);
    if (*(byte *)(lVar10 + 0x60) == 3) {
      *pfVar1 = fVar20;
    }
    else {
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar10 + 0x60) * 0x120));
      if (pcVar4 != (code *)0x0) {
        pfVar14 = pfVar1;
        if (0x18 < *(ushort *)(lVar10 + 0x58)) {
          pfVar14 = *(float **)(lVar10 + 0x40);
        }
        (*pcVar4)(pfVar14);
      }
      if (0x18 < *(ushort *)(lVar10 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)pfVar1);
      }
      *(undefined2 *)(lVar10 + 0x58) = 4;
      *(float *)(lVar10 + 0x40) = fVar20;
      *(undefined1 *)(lVar10 + 0x60) = 3;
    }
  }
  FUN_147f574a0(param_1,param_2);
  if ((local_80 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148870688 FUN_148870688 body=38 status=ok
// SIG undefined FUN_148870688(void)

undefined8 FUN_148870688(undefined8 param_1,int param_2)

{
  FUN_14886a1c2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488706b3 FUN_1488706b3 body=250 status=ok
// SIG undefined FUN_1488706b3(void)

longlong *
FUN_1488706b3(longlong *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4,
             ulonglong *param_5,longlong param_6)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_4 != param_5 && param_2 != param_3) {
    do {
      uVar2 = *param_2;
      if (uVar2 < *param_4) {
        iVar1 = *(int *)(param_6 + 0x28);
        *(uint *)(param_6 + 0x28) = iVar1 + 1U;
        if (*(uint *)(param_6 + 0x2c) < iVar1 + 1U) {
          FUN_1488707ae(param_6,iVar1);
        }
        lVar3 = *(longlong *)(param_6 + 0x20);
        if (*(longlong *)(param_6 + 0x20) == 0) {
          lVar3 = param_6;
        }
        *(ulonglong *)(lVar3 + (longlong)iVar1 * 8) = uVar2;
        param_2 = param_2 + 1;
      }
      else {
        param_2 = param_2 + (uVar2 <= *param_4);
        param_4 = param_4 + 1;
      }
    } while (param_2 != param_3 && param_4 != param_5);
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    uVar2 = *param_2;
    iVar1 = *(int *)(param_6 + 0x28);
    *(uint *)(param_6 + 0x28) = iVar1 + 1U;
    if (*(uint *)(param_6 + 0x2c) < iVar1 + 1U) {
      FUN_1488707ae(param_6,iVar1);
    }
    lVar3 = *(longlong *)(param_6 + 0x20);
    if (*(longlong *)(param_6 + 0x20) == 0) {
      lVar3 = param_6;
    }
    *(ulonglong *)(lVar3 + (longlong)iVar1 * 8) = uVar2;
  }
  *param_1 = param_6;
  return param_1;
}



// FUNCTION 1488707ae FUN_1488707ae body=110 status=ok
// SIG undefined FUN_1488707ae(void)

void FUN_1488707ae(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_14887081e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14887081e FUN_14887081e body=132 status=ok
// SIG undefined FUN_14887081e(void)

void FUN_14887081e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 1488708a2 FUN_1488708a2 body=92 status=ok
// SIG undefined FUN_1488708a2(void)

void FUN_1488708a2(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x38 + *param_1);
  FUN_1408a47eb(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x38 + (longlong)_Dst),(longlong)iVar2 * 0x38);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1488708fe FUN_1488708fe body=63 status=ok
// SIG undefined FUN_1488708fe(void)

void FUN_1488708fe(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14887093e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 14887093e FUN_14887093e body=109 status=ok
// SIG undefined FUN_14887093e(void)

ulonglong FUN_14887093e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x38) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x38,8);
      uVar1 = uVar1 / 0x38;
    }
  }
  return uVar1;
}



// FUNCTION 1488709ac FUN_1488709ac body=68 status=ok
// SIG undefined FUN_1488709ac(void)

undefined8 * FUN_1488709ac(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b405780;
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



// FUNCTION 1488709f4 FUN_1488709f4 body=81 status=ok
// SIG undefined FUN_1488709f4(void)

undefined8 FUN_1488709f4(longlong param_1)

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



// FUNCTION 148870a4c FUN_148870a4c body=89 status=ok
// SIG undefined FUN_148870a4c(void)

bool FUN_148870a4c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148870a97;
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
LAB_148870a97:
  return lVar6 == param_2;
}



// FUNCTION 148870aa6 FUN_148870aa6 body=118 status=ok
// SIG undefined FUN_148870aa6(void)

void FUN_148870aa6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b405f40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b405780;
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



// FUNCTION 148870b1c FUN_148870b1c body=118 status=ok
// SIG undefined FUN_148870b1c(void)

void FUN_148870b1c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b405f40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b405780;
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



// FUNCTION 148870b92 FUN_148870b92 body=156 status=ok
// SIG undefined FUN_148870b92(void)

void FUN_148870b92(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b405f40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b405780;
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
                    /* WARNING: Could not recover jumptable at 0x000148870c1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148870c2e FUN_148870c2e body=98 status=ok
// SIG undefined FUN_148870c2e(void)

void FUN_148870c2e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148870c77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148870c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148870c96 FUN_148870c96 body=81 status=ok
// SIG undefined FUN_148870c96(void)

undefined8 FUN_148870c96(longlong param_1)

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



// FUNCTION 148870cee FUN_148870cee body=89 status=ok
// SIG undefined FUN_148870cee(void)

bool FUN_148870cee(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148870d39;
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
LAB_148870d39:
  return lVar6 == param_2;
}



// FUNCTION 148870d64 FUN_148870d64 body=118 status=ok
// SIG undefined FUN_148870d64(void)

void FUN_148870d64(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4057f0;
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



// FUNCTION 148870dda FUN_148870dda body=118 status=ok
// SIG undefined FUN_148870dda(void)

void FUN_148870dda(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4057f0;
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



// FUNCTION 148870e50 FUN_148870e50 body=156 status=ok
// SIG undefined FUN_148870e50(void)

void FUN_148870e50(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4057f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148870edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148870eec FUN_148870eec body=98 status=ok
// SIG undefined FUN_148870eec(void)

void FUN_148870eec(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148870f35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148870f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148870f4e FUN_148870f4e body=68 status=ok
// SIG undefined FUN_148870f4e(void)

undefined8 * FUN_148870f4e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b405860;
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



// FUNCTION 148870f96 FUN_148870f96 body=81 status=ok
// SIG undefined FUN_148870f96(void)

undefined8 FUN_148870f96(longlong param_1)

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



// FUNCTION 148870fee FUN_148870fee body=89 status=ok
// SIG undefined FUN_148870fee(void)

bool FUN_148870fee(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148871039;
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
LAB_148871039:
  return lVar6 == param_2;
}



// FUNCTION 148871064 FUN_148871064 body=118 status=ok
// SIG undefined FUN_148871064(void)

void FUN_148871064(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b405860;
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



// FUNCTION 1488710da FUN_1488710da body=118 status=ok
// SIG undefined FUN_1488710da(void)

void FUN_1488710da(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b405860;
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



// FUNCTION 148871150 FUN_148871150 body=156 status=ok
// SIG undefined FUN_148871150(void)

void FUN_148871150(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b405860;
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
                    /* WARNING: Could not recover jumptable at 0x0001488711dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488711ec FUN_1488711ec body=94 status=ok
// SIG undefined FUN_1488711ec(void)

void FUN_1488711ec(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148871234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014887123f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 14887124a FUN_14887124a body=68 status=ok
// SIG undefined FUN_14887124a(void)

undefined8 * FUN_14887124a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4058d0;
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



// FUNCTION 148871292 FUN_148871292 body=81 status=ok
// SIG undefined FUN_148871292(void)

undefined8 FUN_148871292(longlong param_1)

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



// FUNCTION 1488712ea FUN_1488712ea body=89 status=ok
// SIG undefined FUN_1488712ea(void)

bool FUN_1488712ea(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148871335;
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
LAB_148871335:
  return lVar6 == param_2;
}



// FUNCTION 148871360 FUN_148871360 body=118 status=ok
// SIG undefined FUN_148871360(void)

void FUN_148871360(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4058d0;
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



// FUNCTION 1488713d6 FUN_1488713d6 body=118 status=ok
// SIG undefined FUN_1488713d6(void)

void FUN_1488713d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4058d0;
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



// FUNCTION 14887144c FUN_14887144c body=156 status=ok
// SIG undefined FUN_14887144c(void)

void FUN_14887144c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4058d0;
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
                    /* WARNING: Could not recover jumptable at 0x0001488714d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488714e8 FUN_1488714e8 body=97 status=ok
// SIG undefined FUN_1488714e8(void)

void FUN_1488714e8(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148871530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014887153f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 14887154a FUN_14887154a body=48 status=ok
// SIG undefined FUN_14887154a(void)

void FUN_14887154a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 14887157a FUN_14887157a body=279 status=ok
// SIG undefined FUN_14887157a(void)

void FUN_14887157a(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar13 = (longlong)(int)uVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar4 = FUN_148871692(param_2,lVar2);
    uVar11 = 0;
    uVar8 = 0;
    do {
      uVar6 = (ulonglong)uVar8;
      uVar3 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar1) {
        uVar3 = uVar1;
      }
      lVar12 = lVar2 + 0x18 + uVar6 * 0x18;
      uVar9 = uVar8;
      uVar7 = uVar6;
      do {
        uVar7 = uVar7 + 1;
        uVar10 = uVar3;
        if (lVar13 <= (longlong)uVar7) break;
        bVar5 = FUN_148871692(param_2,lVar12);
        uVar9 = uVar9 + 1;
        lVar12 = lVar12 + 0x18;
        uVar10 = uVar9;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (uVar11 != uVar8) {
          memmove((void *)(lVar2 + (longlong)(int)uVar11 * 0x18),(void *)(lVar2 + uVar6 * 0x18),
                  (longlong)(int)(uVar10 - uVar8) * 0x18);
        }
        uVar11 = uVar11 + (uVar10 - uVar8);
      }
      uVar8 = uVar10;
      bVar4 = bVar4 ^ 1;
    } while ((longlong)uVar7 < lVar13);
    *(uint *)(param_1 + 1) = uVar11;
  }
  return;
}



// FUNCTION 148871692 FUN_148871692 body=185 status=ok
// SIG undefined FUN_148871692(void)

void FUN_148871692(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)*param_1;
  if (param_2[1] == 0) {
    uVar4 = FUN_1405b1a32();
    uVar4 = FUN_14477b664(uVar4);
    param_2[1] = uVar4;
  }
  lVar5 = puVar1[1];
  if (lVar5 == 0) {
    lVar5 = FUN_1405b1a32();
  }
  uVar4 = *puVar1;
  uVar6 = FUN_14477b664(lVar5);
  local_38 = uVar4;
  uVar2 = FUN_144a7891a(uVar6);
  local_40 = *param_2;
  uVar4 = param_2[1];
  uVar3 = FUN_144a7891a(uVar4);
  local_58 = uVar6;
  local_50 = &local_38;
  FUN_144a789b8(uVar3,uVar4,&local_40,uVar2);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14887174c FUN_14887174c body=125 status=ok
// SIG undefined FUN_14887174c(void)

void FUN_14887174c(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = (int)uVar4;
    FUN_14866b752(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488717ca FUN_1488717ca body=125 status=ok
// SIG undefined FUN_1488717ca(void)

void FUN_1488717ca(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = (int)uVar4;
    FUN_14866c5c8(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14887184c FUN_14887184c body=81 status=ok
// SIG undefined FUN_14887184c(void)

undefined8 FUN_14887184c(longlong param_1)

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



// FUNCTION 1488718a4 FUN_1488718a4 body=89 status=ok
// SIG undefined FUN_1488718a4(void)

bool FUN_1488718a4(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1488718ef;
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
LAB_1488718ef:
  return lVar6 == param_2;
}



// FUNCTION 1488718fe FUN_1488718fe body=118 status=ok
// SIG undefined FUN_1488718fe(void)

void FUN_1488718fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c85c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4059b0;
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



// FUNCTION 148871974 FUN_148871974 body=156 status=ok
// SIG undefined FUN_148871974(void)

void FUN_148871974(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c85c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4059b0;
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
                    /* WARNING: Could not recover jumptable at 0x000148871a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148871a10 FUN_148871a10 body=98 status=ok
// SIG undefined FUN_148871a10(void)

void FUN_148871a10(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148871a59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148871a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148871a72 FUN_148871a72 body=142 status=ok
// SIG undefined FUN_148871a72(void)

void FUN_148871a72(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0xcc)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x18)) {
        uVar4 = uVar3 / 0x18 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xcc) = (int)uVar4;
    FUN_14866959a(param_1,param_2,uVar4,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148871b02 FUN_148871b02 body=110 status=ok
// SIG undefined FUN_148871b02(void)

void FUN_148871b02(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_148871b72(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148871b72 FUN_148871b72 body=132 status=ok
// SIG undefined FUN_148871b72(void)

void FUN_148871b72(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 148871bf6 FUN_148871bf6 body=116 status=ok
// SIG undefined FUN_148871bf6(void)

void FUN_148871bf6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 148871c6a FUN_148871c6a body=125 status=ok
// SIG undefined FUN_148871c6a(void)

void FUN_148871c6a(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = (int)uVar4;
    FUN_148668ef2(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148871ce8 FUN_148871ce8 body=326 status=ok
// SIG undefined FUN_148871ce8(void)

undefined4 *
FUN_148871ce8(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148871e30(param_1,local_50);
  uVar5 = *param_3;
  *local_48 = uVar5;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_148871f16(param_1,uVar3,local_48,&local_54);
  uVar1 = local_54;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_148872012(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148871e30 FUN_148871e30 body=229 status=ok
// SIG undefined FUN_148871e30(void)

int * FUN_148871e30(longlong *param_1,int *param_2)

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



// FUNCTION 148871f16 FUN_148871f16 body=138 status=ok
// SIG undefined FUN_148871f16(void)

void FUN_148871f16(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_148871fa0(param_1,*param_4);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_148871f81;
        }
        iVar3 = (int)plVar2[1];
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_148871f81:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 148871fa0 FUN_148871fa0 body=114 status=ok
// SIG undefined FUN_148871fa0(void)

void FUN_148871fa0(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 148872012 FUN_148872012 body=477 status=ok
// SIG undefined FUN_148872012(void)

void FUN_148872012(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
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



// FUNCTION 1488721f0 FUN_1488721f0 body=98 status=ok
// SIG undefined FUN_1488721f0(void)

void FUN_1488721f0(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x28 + *param_1);
  FUN_1401b95a9(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x28),(longlong)iVar2 * 0x28);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148872252 FUN_148872252 body=132 status=ok
// SIG undefined FUN_148872252(void)

void FUN_148872252(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x10) == param_2) {
          FUN_1488722d6(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1488722d6 FUN_1488722d6 body=90 status=ok
// SIG undefined FUN_1488722d6(void)

void FUN_1488722d6(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_148871fa0();
  return;
}



// FUNCTION 148872330 FUN_148872330 body=125 status=ok
// SIG undefined FUN_148872330(void)

void FUN_148872330(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = (int)uVar4;
    FUN_14866e6dc(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488723ae FUN_1488723ae body=73 status=ok
// SIG undefined FUN_1488723ae(void)

void FUN_1488723ae(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488723f8(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  if (iVar1 == *(int *)(param_1 + 0x8c)) {
    return;
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  FUN_14866e6dc(param_1,*(undefined4 *)(param_1 + 0x88),iVar1,0x10);
  return;
}



// FUNCTION 1488723f8 FUN_1488723f8 body=108 status=ok
// SIG undefined FUN_1488723f8(void)

ulonglong FUN_1488723f8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 148872464 FUN_148872464 body=110 status=ok
// SIG undefined FUN_148872464(void)

void FUN_148872464(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x10;
    if (0x10 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x8c)) {
    *(int *)(param_1 + 0x8c) = (int)uVar2;
    FUN_140ff42b6(param_1,*(undefined4 *)(param_1 + 0x88),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 1488724d2 FUN_1488724d2 body=9 status=ok
// SIG undefined FUN_1488724d2(void)

void FUN_1488724d2(longlong param_1)

{
  FUN_1403d7c6c(param_1 + 0x10);
  return;
}



// FUNCTION 1488724dc FUN_1488724dc body=29 status=ok
// SIG undefined FUN_1488724dc(void)

undefined8 FUN_1488724dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488724fa FUN_1488724fa body=158 status=ok
// SIG undefined FUN_1488724fa(void)

void FUN_1488724fa(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14887256c;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14887256c;
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
LAB_14887256c:
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
                    /* WARNING: Could not recover jumptable at 0x00014887258c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148872598 FUN_148872598 body=31 status=ok
// SIG undefined FUN_148872598(void)

undefined8 FUN_148872598(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488725d6 FUN_1488725d6 body=93 status=ok
// SIG undefined FUN_1488725d6(void)

void FUN_1488725d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b405ad0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b405a60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148872634 FUN_148872634 body=93 status=ok
// SIG undefined FUN_148872634(void)

void FUN_148872634(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b405ad0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b405a60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148872692 FUN_148872692 body=126 status=ok
// SIG undefined FUN_148872692(void)

void FUN_148872692(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b405ad0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b405a60;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148872701. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148872710 FUN_148872710 body=20 status=ok
// SIG undefined FUN_148872710(void)

undefined8 FUN_148872710(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 148872726 FUN_148872726 body=31 status=ok
// SIG undefined FUN_148872726(void)

undefined8 FUN_148872726(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148872764 FUN_148872764 body=93 status=ok
// SIG undefined FUN_148872764(void)

void FUN_148872764(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b405bb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b405b40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1488727c2 FUN_1488727c2 body=93 status=ok
// SIG undefined FUN_1488727c2(void)

void FUN_1488727c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b405bb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b405b40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148872820 FUN_148872820 body=126 status=ok
// SIG undefined FUN_148872820(void)

void FUN_148872820(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b405bb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b405b40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014887288f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14887289e FUN_14887289e body=20 status=ok
// SIG undefined FUN_14887289e(void)

undefined8 FUN_14887289e(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 1488728b4 FUN_1488728b4 body=119 status=ok
// SIG undefined FUN_1488728b4(void)

void FUN_1488728b4(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_14887292c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14887292c FUN_14887292c body=141 status=ok
// SIG undefined FUN_14887292c(void)

void FUN_14887292c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,0x10);
  return;
}



// FUNCTION 1488729ba FUN_1488729ba body=96 status=ok
// SIG undefined FUN_1488729ba(void)

void FUN_1488729ba(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 148872a1a FUN_148872a1a body=132 status=ok
// SIG undefined FUN_148872a1a(void)

void FUN_148872a1a(longlong param_1,int param_2)

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



// FUNCTION 148872aa0 FUN_148872aa0 body=124 status=ok
// SIG undefined FUN_148872aa0(void)

void FUN_148872aa0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    uVar5 = 0;
    do {
      cVar4 = FUN_148872b1c(lVar2 + uVar5,param_2);
      if (cVar4 != '\0') {
        if ((int)(~uVar5 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar5 = uVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != uVar5);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148872a1a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
  return;
}



// FUNCTION 148872b1c FUN_148872b1c body=53 status=ok
// SIG undefined FUN_148872b1c(void)

ulonglong FUN_148872b1c(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 148872b52 FUN_148872b52 body=62 status=ok
// SIG undefined FUN_148872b52(void)

void FUN_148872b52(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148872b90(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 148872b90 FUN_148872b90 body=93 status=ok
// SIG undefined FUN_148872b90(void)

ulonglong FUN_148872b90(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 148872bee FUN_148872bee body=268 status=ok
// SIG undefined FUN_148872bee(void)

void FUN_148872bee(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar4 = FUN_148872b1c(lVar2,*param_2);
    iVar10 = 0;
    iVar7 = 0;
    do {
      lVar11 = (longlong)iVar7;
      iVar3 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      lVar12 = lVar2 + 8 + lVar11 * 8;
      iVar8 = iVar7;
      lVar6 = lVar11;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar3;
        if (lVar13 <= lVar6) break;
        bVar5 = FUN_148872b1c(lVar12,*param_2);
        iVar8 = iVar8 + 1;
        lVar12 = lVar12 + 8;
        iVar9 = iVar8;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (iVar10 != iVar7) {
          memmove((void *)(lVar2 + (longlong)iVar10 * 8),(void *)(lVar2 + lVar11 * 8),
                  (longlong)(iVar9 - iVar7) << 3);
        }
        iVar10 = iVar10 + (iVar9 - iVar7);
      }
      iVar7 = iVar9;
      bVar4 = bVar4 ^ 1;
    } while (lVar6 < lVar13);
    *(int *)(param_1 + 1) = iVar10;
  }
  return;
}



// FUNCTION 148872cfa FUN_148872cfa body=116 status=ok
// SIG undefined FUN_148872cfa(void)

void FUN_148872cfa(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x2c) = (int)uVar4;
    FUN_148872d70(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148872d70 FUN_148872d70 body=133 status=ok
// SIG undefined FUN_148872d70(void)

void FUN_148872d70(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 148872df6 FUN_148872df6 body=338 status=ok
// SIG undefined FUN_148872df6(void)

void FUN_148872df6(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar1 = (int)param_1[1];
  lVar9 = (longlong)iVar1;
  if (lVar9 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar6 = *(longlong *)*param_2;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar7 = 0;
    iVar10 = 0;
    bVar5 = *plVar2 == lVar6;
    do {
      lVar8 = (longlong)iVar10;
      lVar6 = lVar8;
      iVar11 = iVar10;
      iVar4 = iVar10 + 1;
      if (iVar10 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      do {
        lVar6 = lVar6 + 1;
        iVar12 = iVar4;
        if (lVar9 <= lVar6) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        iVar12 = iVar11 + 1;
        iVar11 = iVar12;
      } while (bVar5 == (plVar2[lVar6] == lVar3));
      if (!bVar5) {
        if (iVar7 != iVar10) {
          memmove(plVar2 + iVar7,plVar2 + lVar8,(longlong)(iVar12 - iVar10) << 3);
        }
        iVar7 = iVar7 + (iVar12 - iVar10);
      }
      iVar10 = iVar12;
      bVar5 = (bool)(bVar5 ^ 1);
    } while (lVar6 < lVar9);
    *(int *)(param_1 + 1) = iVar7;
  }
  return;
}



// FUNCTION 148872f48 FUN_148872f48 body=1186 status=ok
// SIG undefined FUN_148872f48(void)

void FUN_148872f48(longlong param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  uint uVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  float fVar14;
  undefined1 auStack_3a8 [36];
  int local_384;
  longlong *local_380;
  longlong *local_378;
  undefined2 *local_370;
  int local_368;
  undefined2 *local_360;
  int local_358;
  undefined8 local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar14 = logf((float)(int)param_2);
    local_338[0] = (undefined4)(longlong)(fVar14 + fVar14);
    local_380 = &local_348;
    do {
      plVar7 = (longlong *)*local_380;
      local_384 = (int)local_380[2];
      iVar11 = (int)((ulonglong)(local_380[1] - (longlong)plVar7) >> 3);
      plVar13 = (longlong *)local_380[1];
      if (local_384 != 0) {
LAB_148873026:
        local_378 = plVar13;
        plVar3 = local_378;
        plVar13 = local_378;
        if (8 < (int)(iVar11 + 1U)) {
          uVar4 = iVar11 + 1U >> 1;
          lVar9 = plVar7[uVar4];
          plVar7[uVar4] = *plVar7;
          *plVar7 = lVar9;
          plVar6 = local_378 + 1;
          plVar12 = plVar7;
LAB_14887304a:
          plVar12 = plVar12 + 1;
          if (plVar12 <= plVar3) goto code_r0x000148873057;
          goto LAB_148873119;
        }
        for (; plVar6 = plVar7, plVar3 = plVar7, plVar7 < plVar13; plVar13 = plVar13 + -1) {
          while (plVar3 = plVar3 + 1, plVar3 <= plVar13) {
            lVar9 = *plVar6;
            local_370 = *(undefined2 **)(*plVar3 + 0x18);
            FUN_1400021e4(&local_370,&local_360);
            local_350 = *(undefined8 *)(lVar9 + 0x18);
            FUN_1400021e4(&local_350,&local_370);
            puVar5 = local_360;
            if (local_358 == 0) {
              puVar5 = &DAT_149dfb77a;
            }
            puVar8 = local_370;
            if (local_368 == 0) {
              puVar8 = &DAT_149dfb77a;
            }
            lVar9 = 0;
            while( true ) {
              uVar1 = *(ushort *)((longlong)puVar8 + lVar9);
              uVar4 = (uint)uVar1;
              uVar2 = *(ushort *)((longlong)puVar5 + lVar9);
              uVar10 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14887334d;
                }
                iVar11 = uVar4 - uVar10;
                goto LAB_14887337f;
              }
              if (uVar1 == 0) break;
LAB_14887334d:
              lVar9 = lVar9 + 2;
            }
            iVar11 = 0;
LAB_14887337f:
            if (local_370 != (undefined2 *)0x0) {
              FUN_1400020a8(local_370);
            }
            if (local_360 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (iVar11 < 0) {
              plVar6 = plVar3;
            }
          }
          lVar9 = *plVar6;
          *plVar6 = *plVar13;
          *plVar13 = lVar9;
        }
        goto LAB_1488733ca;
      }
LAB_1488732b6:
      FUN_1488733eb(plVar7);
LAB_1488733ca:
      local_380 = local_380 + -3;
    } while (&local_348 <= local_380);
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000148873057:
  lVar9 = *plVar7;
  local_370 = *(undefined2 **)(*plVar12 + 0x18);
  FUN_1400021e4(&local_370,&local_360);
  local_350 = *(undefined8 *)(lVar9 + 0x18);
  FUN_1400021e4(&local_350,&local_370);
  puVar5 = local_360;
  if (local_358 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  puVar8 = local_370;
  if (local_368 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  lVar9 = 0;
  while( true ) {
    uVar1 = *(ushort *)((longlong)puVar8 + lVar9);
    uVar4 = (uint)uVar1;
    uVar2 = *(ushort *)((longlong)puVar5 + lVar9);
    uVar10 = (uint)uVar2;
    if (uVar1 != uVar2) {
      if ((uVar2 | uVar1) < 0x80) {
        uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1488730c3;
      }
      iVar11 = uVar4 - uVar10;
      goto LAB_1488730f5;
    }
    if (uVar1 == 0) break;
LAB_1488730c3:
    lVar9 = lVar9 + 2;
  }
  iVar11 = 0;
LAB_1488730f5:
  if (local_370 != (undefined2 *)0x0) {
    FUN_1400020a8(local_370);
  }
  if (local_360 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (-1 < iVar11) goto LAB_14887304a;
LAB_148873119:
  do {
    plVar13 = plVar6;
    plVar6 = plVar13 + -1;
    if (plVar6 <= plVar7) break;
    lVar9 = *plVar6;
    local_370 = *(undefined2 **)(*plVar7 + 0x18);
    FUN_1400021e4(&local_370,&local_360);
    local_350 = *(undefined8 *)(lVar9 + 0x18);
    FUN_1400021e4(&local_350,&local_370);
    puVar5 = local_360;
    if (local_358 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    puVar8 = local_370;
    if (local_368 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    lVar9 = 0;
    while( true ) {
      uVar1 = *(ushort *)((longlong)puVar8 + lVar9);
      uVar10 = (uint)uVar1;
      uVar2 = *(ushort *)((longlong)puVar5 + lVar9);
      uVar4 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148873196;
        }
        iVar11 = uVar10 - uVar4;
        goto LAB_1488731ca;
      }
      if (uVar1 == 0) break;
LAB_148873196:
      lVar9 = lVar9 + 2;
    }
    iVar11 = 0;
LAB_1488731ca:
    if (local_370 != (undefined2 *)0x0) {
      FUN_1400020a8(local_370);
    }
    if (local_360 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  } while (-1 < iVar11);
  if (plVar12 <= plVar6) {
    lVar9 = *plVar12;
    *plVar12 = *plVar6;
    *plVar6 = lVar9;
    goto LAB_14887304a;
  }
  lVar9 = *plVar7;
  *plVar7 = *plVar6;
  plVar13[-1] = lVar9;
  local_384 = local_384 + -1;
  plVar13 = plVar13 + -2;
  if ((longlong)plVar13 - (longlong)plVar7 < (longlong)local_378 - (longlong)plVar12) {
    if (plVar12 < plVar3) {
      *local_380 = (longlong)plVar12;
      local_380[1] = (longlong)plVar3;
      *(int *)(local_380 + 2) = local_384;
      local_380 = local_380 + 3;
    }
    if (plVar6 <= plVar7 + 1) goto LAB_1488733ca;
  }
  else {
    if (plVar7 + 1 < plVar6) {
      *local_380 = (longlong)plVar7;
      local_380[1] = (longlong)plVar13;
      *(int *)(local_380 + 2) = local_384;
      local_380 = local_380 + 3;
    }
    plVar7 = plVar12;
    plVar13 = plVar3;
    if (plVar3 <= plVar12) goto LAB_1488733ca;
  }
  iVar11 = (int)((ulonglong)((longlong)plVar13 - (longlong)plVar7) >> 3);
  local_378 = plVar13;
  if (local_384 == 0) goto LAB_1488732b6;
  goto LAB_148873026;
}



// FUNCTION 1488733eb FUN_1488733eb body=1170 status=ok
// SIG undefined FUN_1488733eb(void)

void FUN_1488733eb(undefined8 *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined2 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong uVar5;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    uVar4 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    do {
      uVar5 = (ulonglong)uVar4;
      local_78 = uVar5;
      while (uVar11 = uVar4 * 2 + 1, (int)uVar11 < (int)param_2) {
        uVar14 = uVar4 * 2 + 2;
        uVar4 = uVar11;
        if ((int)uVar14 < (int)param_2) {
          lVar9 = param_1[(int)uVar14];
          local_70 = *(undefined2 **)(param_1[(int)uVar11] + 0x18);
          FUN_1400021e4(&local_70,&local_60);
          local_50 = *(undefined8 *)(lVar9 + 0x18);
          FUN_1400021e4(&local_50,&local_70);
          puVar6 = local_60;
          if (local_58 == 0) {
            puVar6 = &DAT_149dfb77a;
          }
          puVar8 = local_70;
          if (local_68 == 0) {
            puVar8 = &DAT_149dfb77a;
          }
          lVar9 = 0;
          while( true ) {
            uVar1 = *(ushort *)((longlong)puVar8 + lVar9);
            uVar4 = (uint)uVar1;
            uVar2 = *(ushort *)((longlong)puVar6 + lVar9);
            uVar10 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1488734d2;
              }
              iVar13 = uVar4 - uVar10;
              goto LAB_14887350a;
            }
            if (uVar1 == 0) break;
LAB_1488734d2:
            lVar9 = lVar9 + 2;
          }
          iVar13 = 0;
LAB_14887350a:
          if (local_70 != (undefined2 *)0x0) {
            FUN_1400020a8(local_70);
          }
          if (local_60 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          uVar4 = uVar14;
          if (iVar13 < 0) {
            uVar4 = uVar11;
          }
        }
        iVar13 = (int)uVar5;
        lVar9 = param_1[iVar13];
        local_70 = *(undefined2 **)(param_1[(int)uVar4] + 0x18);
        FUN_1400021e4(&local_70,&local_60);
        local_50 = *(undefined8 *)(lVar9 + 0x18);
        FUN_1400021e4(&local_50,&local_70);
        puVar6 = local_60;
        if (local_58 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        puVar8 = local_70;
        if (local_68 == 0) {
          puVar8 = &DAT_149dfb77a;
        }
        lVar9 = 0;
        while( true ) {
          uVar1 = *(ushort *)((longlong)puVar8 + lVar9);
          uVar14 = (uint)uVar1;
          uVar2 = *(ushort *)((longlong)puVar6 + lVar9);
          uVar11 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1488735a3;
            }
            iVar12 = uVar14 - uVar11;
            goto LAB_1488735d7;
          }
          if (uVar1 == 0) break;
LAB_1488735a3:
          lVar9 = lVar9 + 2;
        }
        iVar12 = 0;
LAB_1488735d7:
        if (local_70 != (undefined2 *)0x0) {
          FUN_1400020a8(local_70);
        }
        if (local_60 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (-1 < iVar12) break;
        uVar3 = param_1[iVar13];
        param_1[iVar13] = param_1[(int)uVar4];
        param_1[(int)uVar4] = uVar3;
        uVar5 = (ulonglong)uVar4;
      }
      uVar4 = (int)local_78 - 1;
    } while ((int)local_78 != 0);
    if (1 < (int)param_2) {
      uVar5 = (ulonglong)param_2;
      uVar3 = *param_1;
      *param_1 = param_1[uVar5 - 1];
      param_1[uVar5 - 1] = uVar3;
      if (param_2 != 2) {
        do {
          uVar17 = uVar5 - 1;
          iVar7 = 1;
          iVar13 = 0;
          iVar12 = 0;
          do {
            iVar13 = iVar13 + 2;
            iVar16 = iVar7;
            if ((longlong)iVar13 < (longlong)uVar17) {
              lVar9 = param_1[iVar13];
              local_70 = *(undefined2 **)(param_1[iVar7] + 0x18);
              FUN_1400021e4(&local_70,&local_60);
              local_50 = *(undefined8 *)(lVar9 + 0x18);
              FUN_1400021e4(&local_50,&local_70);
              puVar6 = local_60;
              if (local_58 == 0) {
                puVar6 = &DAT_149dfb77a;
              }
              puVar8 = local_70;
              if (local_68 == 0) {
                puVar8 = &DAT_149dfb77a;
              }
              lVar9 = 0;
              while( true ) {
                uVar1 = *(ushort *)((longlong)puVar8 + lVar9);
                uVar11 = (uint)uVar1;
                uVar2 = *(ushort *)((longlong)puVar6 + lVar9);
                uVar4 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1488736e5;
                  }
                  iVar15 = uVar11 - uVar4;
                  goto LAB_14887371d;
                }
                if (uVar1 == 0) break;
LAB_1488736e5:
                lVar9 = lVar9 + 2;
              }
              iVar15 = 0;
LAB_14887371d:
              if (local_70 != (undefined2 *)0x0) {
                FUN_1400020a8(local_70);
              }
              if (local_60 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              iVar16 = iVar13;
              if (iVar15 < 0) {
                iVar16 = iVar7;
              }
            }
            lVar9 = param_1[iVar12];
            local_70 = *(undefined2 **)(param_1[iVar16] + 0x18);
            FUN_1400021e4(&local_70,&local_60);
            local_50 = *(undefined8 *)(lVar9 + 0x18);
            FUN_1400021e4(&local_50,&local_70);
            puVar6 = local_60;
            if (local_58 == 0) {
              puVar6 = &DAT_149dfb77a;
            }
            puVar8 = local_70;
            if (local_68 == 0) {
              puVar8 = &DAT_149dfb77a;
            }
            lVar9 = 0;
            while( true ) {
              uVar1 = *(ushort *)((longlong)puVar8 + lVar9);
              uVar4 = (uint)uVar1;
              uVar2 = *(ushort *)((longlong)puVar6 + lVar9);
              uVar11 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1488737b6;
                }
                iVar13 = uVar4 - uVar11;
                goto LAB_1488737e9;
              }
              if (uVar1 == 0) break;
LAB_1488737b6:
              lVar9 = lVar9 + 2;
            }
            iVar13 = 0;
LAB_1488737e9:
            if (local_70 != (undefined2 *)0x0) {
              FUN_1400020a8(local_70);
            }
            if (local_60 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (-1 < iVar13) break;
            uVar3 = param_1[iVar12];
            param_1[iVar12] = param_1[iVar16];
            param_1[iVar16] = uVar3;
            iVar13 = iVar16 * 2;
            iVar7 = iVar16 * 2 + 1;
            iVar12 = iVar16;
          } while ((longlong)iVar7 < (longlong)uVar17);
          uVar3 = *param_1;
          *param_1 = param_1[uVar5 - 2];
          param_1[uVar5 - 2] = uVar3;
          uVar5 = uVar17;
        } while (2 < uVar17);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


