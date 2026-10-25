// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148145e84 FUN_148145e84 body=20 status=ok
// SIG undefined FUN_148145e84(void)

undefined1 FUN_148145e84(longlong param_1)

{
  FUN_148145e98(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148145e98 FUN_148145e98 body=579 status=ok
// SIG undefined FUN_148145e98(void)

void FUN_148145e98(longlong param_1,char *param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  PSRWLOCK SRWLock;
  int *piVar9;
  longlong *plVar10;
  undefined1 auStack_f8 [32];
  int *local_d8;
  int local_d0;
  int *local_c8;
  int local_c0;
  int *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  uint *local_98;
  undefined8 uStack_90;
  int local_88;
  int *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined1 local_60 [8];
  char *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14814458e(local_60);
  local_68 = 0;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  FUN_144a76d88(&local_78,param_2);
  local_88 = 0;
  local_98 = (uint *)0x0;
  uStack_90 = 0;
  FUN_144a98d08(&local_98,param_2);
  local_a8 = 0;
  local_b8 = (int *)0x0;
  uStack_b0 = 0;
  FUN_144a98d08(&local_b8,param_2);
  FUN_144a76cd4(&local_c8,param_2);
  FUN_144a76cd4(&local_d8);
  pcVar6 = local_58;
  if (local_58 == (char *)0x0) {
    plVar10 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_58 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar6 == '\0') {
      *pcVar6 = '\x01';
      FUN_14054c6c4(pcVar6 + 0x10);
    }
    plVar10 = (longlong *)(pcVar6 + 0x10);
  }
  piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar7 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar7) {
    iVar8 = 0;
    do {
      piVar7 = local_78 + local_68;
      puVar1 = local_98 + local_88;
      uVar4 = *local_98;
      piVar2 = local_b8 + local_a8;
      if (((int)uVar4 < 0 || *local_78 != 0) || ((int)plVar10[1] <= (int)uVar4)) {
        *local_c8 = 0;
        *local_d8 = 0;
      }
      else {
        iVar5 = *local_b8;
        LOCK();
        piVar9 = (int *)(*plVar10 + (ulonglong)uVar4 * 4);
        iVar3 = *piVar9;
        *piVar9 = *piVar9 + iVar5;
        UNLOCK();
        *local_c8 = iVar3;
        *local_d8 = iVar3 + iVar5;
      }
      local_c8 = local_c8 + local_c0;
      local_d8 = local_d8 + local_d0;
      iVar8 = iVar8 + 1;
      piVar9 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar9 = (int *)(param_2 + 0x3c);
      }
      local_b8 = piVar2;
      local_98 = puVar1;
      local_78 = piVar7;
    } while (iVar8 < *piVar9);
  }
  local_58[1] = local_58[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481460dc FUN_1481460dc body=29 status=ok
// SIG undefined FUN_1481460dc(void)

undefined8 FUN_1481460dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814610e FUN_14814610e body=93 status=ok
// SIG undefined FUN_14814610e(void)

void FUN_14814610e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbfe10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814616c FUN_14814616c body=93 status=ok
// SIG undefined FUN_14814616c(void)

void FUN_14814616c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbfe10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481461ca FUN_1481461ca body=126 status=ok
// SIG undefined FUN_1481461ca(void)

void FUN_1481461ca(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adbfe10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148146239. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148146252 FUN_148146252 body=20 status=ok
// SIG undefined FUN_148146252(void)

undefined1 FUN_148146252(longlong param_1)

{
  FUN_148146266(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148146266 FUN_148146266 body=586 status=ok
// SIG undefined FUN_148146266(void)

void FUN_148146266(longlong param_1,char *param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  PSRWLOCK SRWLock;
  int iVar11;
  longlong *plVar12;
  undefined1 auStack_f8 [32];
  int *local_d8;
  int local_d0;
  int *local_c8;
  int local_c0;
  int *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  uint *local_98;
  undefined8 uStack_90;
  int local_88;
  int *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined1 local_60 [8];
  char *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14814458e(local_60);
  local_68 = 0;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  FUN_144a76d88(&local_78,param_2);
  local_88 = 0;
  local_98 = (uint *)0x0;
  uStack_90 = 0;
  FUN_144a98d08(&local_98,param_2);
  local_a8 = 0;
  local_b8 = (int *)0x0;
  uStack_b0 = 0;
  FUN_144a98d08(&local_b8,param_2);
  FUN_144a76cd4(&local_c8,param_2);
  FUN_144a76cd4(&local_d8);
  pcVar7 = local_58;
  if (local_58 == (char *)0x0) {
    plVar12 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_58 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar7 == '\0') {
      *pcVar7 = '\x01';
      FUN_14054c6c4(pcVar7 + 0x10);
    }
    plVar12 = (longlong *)(pcVar7 + 0x10);
  }
  piVar9 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar9 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar9) {
    iVar11 = 0;
    do {
      piVar9 = local_78 + local_68;
      puVar1 = local_98 + local_88;
      uVar4 = *local_98;
      piVar2 = local_b8 + local_a8;
      if (((int)uVar4 < 0 || *local_78 != 0) || ((int)plVar12[1] <= (int)uVar4)) {
        *local_c8 = 0;
        *local_d8 = 0;
      }
      else {
        iVar5 = *local_b8;
        lVar6 = *plVar12;
        iVar8 = *(int *)(lVar6 + (ulonglong)uVar4 * 4);
        while (iVar5 < iVar8) {
          piVar10 = (int *)(lVar6 + (ulonglong)uVar4 * 4);
          LOCK();
          iVar3 = *piVar10;
          if (iVar8 == iVar3) {
            *piVar10 = iVar5;
            iVar3 = iVar8;
          }
          iVar8 = iVar3;
          UNLOCK();
        }
        *local_c8 = iVar8;
        *local_d8 = iVar5 + iVar8;
      }
      local_c8 = local_c8 + local_c0;
      local_d8 = local_d8 + local_d0;
      iVar11 = iVar11 + 1;
      piVar10 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar10 = (int *)(param_2 + 0x3c);
      }
      local_b8 = piVar2;
      local_98 = puVar1;
      local_78 = piVar9;
    } while (iVar11 < *piVar10);
  }
  local_58[1] = local_58[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481464b2 FUN_1481464b2 body=29 status=ok
// SIG undefined FUN_1481464b2(void)

undefined8 FUN_1481464b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481464e4 FUN_1481464e4 body=93 status=ok
// SIG undefined FUN_1481464e4(void)

void FUN_1481464e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbfe80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148146542 FUN_148146542 body=93 status=ok
// SIG undefined FUN_148146542(void)

void FUN_148146542(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbfe80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481465a0 FUN_1481465a0 body=126 status=ok
// SIG undefined FUN_1481465a0(void)

void FUN_1481465a0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adbfe80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014814660f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148146628 FUN_148146628 body=20 status=ok
// SIG undefined FUN_148146628(void)

undefined1 FUN_148146628(longlong param_1)

{
  FUN_14814663c(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14814663c FUN_14814663c body=586 status=ok
// SIG undefined FUN_14814663c(void)

void FUN_14814663c(longlong param_1,char *param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  PSRWLOCK SRWLock;
  int iVar11;
  longlong *plVar12;
  undefined1 auStack_f8 [32];
  int *local_d8;
  int local_d0;
  int *local_c8;
  int local_c0;
  int *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  uint *local_98;
  undefined8 uStack_90;
  int local_88;
  int *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined1 local_60 [8];
  char *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14814458e(local_60);
  local_68 = 0;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  FUN_144a76d88(&local_78,param_2);
  local_88 = 0;
  local_98 = (uint *)0x0;
  uStack_90 = 0;
  FUN_144a98d08(&local_98,param_2);
  local_a8 = 0;
  local_b8 = (int *)0x0;
  uStack_b0 = 0;
  FUN_144a98d08(&local_b8,param_2);
  FUN_144a76cd4(&local_c8,param_2);
  FUN_144a76cd4(&local_d8);
  pcVar7 = local_58;
  if (local_58 == (char *)0x0) {
    plVar12 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_58 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar7 == '\0') {
      *pcVar7 = '\x01';
      FUN_14054c6c4(pcVar7 + 0x10);
    }
    plVar12 = (longlong *)(pcVar7 + 0x10);
  }
  piVar9 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar9 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar9) {
    iVar11 = 0;
    do {
      piVar9 = local_78 + local_68;
      puVar1 = local_98 + local_88;
      uVar4 = *local_98;
      piVar2 = local_b8 + local_a8;
      if (((int)uVar4 < 0 || *local_78 != 0) || ((int)plVar12[1] <= (int)uVar4)) {
        *local_c8 = 0;
        *local_d8 = 0;
      }
      else {
        iVar5 = *local_b8;
        lVar6 = *plVar12;
        iVar8 = *(int *)(lVar6 + (ulonglong)uVar4 * 4);
        while (iVar8 < iVar5) {
          piVar10 = (int *)(lVar6 + (ulonglong)uVar4 * 4);
          LOCK();
          iVar3 = *piVar10;
          if (iVar8 == iVar3) {
            *piVar10 = iVar5;
            iVar3 = iVar8;
          }
          iVar8 = iVar3;
          UNLOCK();
        }
        *local_c8 = iVar8;
        *local_d8 = iVar5 + iVar8;
      }
      local_c8 = local_c8 + local_c0;
      local_d8 = local_d8 + local_d0;
      iVar11 = iVar11 + 1;
      piVar10 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar10 = (int *)(param_2 + 0x3c);
      }
      local_b8 = piVar2;
      local_98 = puVar1;
      local_78 = piVar9;
    } while (iVar11 < *piVar10);
  }
  local_58[1] = local_58[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148146888 FUN_148146888 body=958 status=ok
// SIG undefined FUN_148146888(void)

void FUN_148146888(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined4 local_1e0;
  undefined8 *local_1d8;
  undefined4 local_1d0;
  undefined8 *local_1c8;
  undefined4 local_1c0;
  code *local_1b8;
  undefined8 local_1a8;
  undefined **local_198;
  longlong local_190;
  undefined4 *local_188;
  undefined1 local_180;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined1 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  undefined8 local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x78) != *(int *)(lVar4 + 0xa4)) {
    lVar1 = param_1[1];
    lVar7 = lVar4 + 0xa8;
    if (*(longlong *)(lVar4 + 0xb0) != 0) {
      lVar7 = *(longlong *)(lVar4 + 0xb0);
    }
    iVar5 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar4 + 0xb8) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      do {
        lVar7 = *(longlong *)(lVar4 + 0x70) + (longlong)iVar5 * 0x40;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x70) + (longlong)iVar5 * 0x40) == lVar1) {
          if (((lVar7 + 8U & 0xfffffffffffffff7) != 0) &&
             (iVar5 = *(int *)(lVar7 + 0x28), iVar5 != 0)) {
            lVar4 = param_1[2];
            iVar3 = (int)param_1[3];
            if (*(int *)(lVar4 + 0x40) <= iVar3) {
              FUN_1481287aa(lVar4 + 0x38,(iVar3 - *(int *)(lVar4 + 0x40)) + 1);
              lVar4 = param_1[2];
              iVar3 = (int)param_1[3];
              iVar5 = *(int *)(lVar7 + 0x28);
            }
            puVar8 = (undefined4 *)((longlong)iVar3 * 8 + *(longlong *)(lVar4 + 0x38));
            local_50 = 0;
            local_44 = 2;
            local_80 = 0;
            local_74 = 2;
            local_100 = 0;
            local_f4 = 2;
            iVar3 = *(int *)(lVar7 + 0x34);
            uVar6 = 1;
            local_48 = 1;
            local_160 = *(undefined8 *)(lVar7 + 0x10);
            local_68 = 0;
            local_150 = 0x400;
            if (iVar3 == -1) {
              local_150 = 0x10;
            }
            local_78 = 1;
            local_f0 = 0xffffffffffffffff;
            local_e8 = 0xffffffff;
            local_d8 = 2;
            local_d0 = 0x80;
            local_c0 = 0;
            local_f8 = 1;
            local_170 = 0xffffffffffffffff;
            local_168 = 0xffffffff;
            local_158 = 2;
            local_154 = 0x80;
            local_14c = 0;
            local_140 = 0;
            if (iVar3 != -1) {
              lVar4 = param_1[4];
              local_58 = iVar3 << 2;
              local_48 = 2;
              local_60 = *(undefined8 *)(lVar4 + 0x58);
              local_54 = 4;
              local_78 = 2;
              local_128 = *(undefined8 *)(lVar4 + 0x60);
              local_b8 = 0xffffffffffffffff;
              local_b0 = 0xffffffff;
              local_a0 = 3;
              local_9c = 0x80000000f0;
              local_94 = 0;
              local_88 = 0;
              local_f8 = 2;
              local_138 = 0xffffffffffffffff;
              local_130 = 0xffffffff;
              local_120 = 3;
              local_11c = 0xf000000080;
              local_114 = 0;
              local_108 = 0;
              uVar6 = 2;
              local_a8 = local_128;
            }
            else {
              *puVar8 = *(undefined4 *)(lVar7 + 0x30);
              lVar4 = param_1[4];
            }
            uVar2 = *(undefined8 *)(lVar4 + 0x28);
            local_1c8 = &local_f0;
            local_1c0 = uVar6;
            local_e0 = local_160;
            local_d4 = local_150;
            local_70 = local_160;
            local_64 = iVar5;
            FUN_144760590(param_2,&local_1c8,0);
            local_190 = param_1[2];
            local_180 = *(int *)(lVar7 + 0x34) == -1;
            local_1a8 = 0;
            local_198 = &PTR_LAB_14adbfef0;
            local_1b8 = FUN_148146c48;
            local_1d8 = &local_70;
            local_1d0 = uVar6;
            local_188 = puVar8;
            FUN_1481c8e40(uVar2,param_2);
            local_1e8 = &local_170;
            local_1e0 = uVar6;
            FUN_144760590(param_2,&local_1e8,0);
            FUN_143a96774(uVar2,param_2);
            FUN_148128c50(&local_170);
            FUN_148128c50(&local_f0);
            if (local_50 != 0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        iVar5 = *(int *)(lVar7 + 0x38);
      } while (iVar5 != -1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148146c48 FUN_148146c48 body=62 status=ok
// SIG undefined FUN_148146c48(void)

void FUN_148146c48(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_148146cd8();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148146cba FUN_148146cba body=29 status=ok
// SIG undefined FUN_148146cba(void)

undefined8 FUN_148146cba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148146cd8 FUN_148146cd8 body=191 status=ok
// SIG undefined FUN_148146cd8(void)

void FUN_148146cd8(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 2) == '\0') {
    *(undefined4 *)param_1[1] = **(undefined4 **)(*param_2 + 0x10);
  }
  if (0 < (int)*(uint *)param_1[1]) {
    local_38 = (void *)0x0;
    uStack_30 = (ulonglong)*(uint *)param_1[1];
    FUN_1446f48e2(&local_38,0);
    memcpy(local_38,*(void **)*param_2,(longlong)*(int *)param_1[1] << 2);
    local_40 = (int)uStack_30 << 2;
    local_48 = local_38;
    uVar1 = FUN_148119ae4(*param_1);
    *(undefined4 *)(param_1[1] + 4) = uVar1;
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148146da8 FUN_148146da8 body=29 status=ok
// SIG undefined FUN_148146da8(void)

void FUN_148146da8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 148146dc6 FUN_148146dc6 body=29 status=ok
// SIG undefined FUN_148146dc6(void)

undefined8 FUN_148146dc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148146de4 FUN_148146de4 body=105 status=ok
// SIG undefined FUN_148146de4(void)

void FUN_148146de4(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_148146888(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_148146888(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148146e43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 148146e4e FUN_148146e4e body=239 status=ok
// SIG undefined FUN_148146e4e(void)

void FUN_148146e4e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_38 [32];
  longlong local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x78) != *(int *)(lVar1 + 0xa4)) {
    lVar2 = param_1[1];
    lVar4 = lVar1 + 0xa8;
    if (*(longlong *)(lVar1 + 0xb0) != 0) {
      lVar4 = *(longlong *)(lVar1 + 0xb0);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar1 + 0xb8) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(lVar1 + 0x70) + (longlong)iVar3 * 0x40;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x70) + (longlong)iVar3 * 0x40) == lVar2) {
          if (lVar4 + 8 != 0 && lVar4 != 0) {
            lVar1 = *(longlong *)(param_1[2] + 0x38);
            local_18 = (longlong)*(int *)(lVar1 + 4 + (longlong)(int)param_1[3] * 8) +
                       *(longlong *)(param_1[2] + 0x48);
            local_10 = *(undefined4 *)(lVar1 + (longlong)(int)param_1[3] * 8);
            FUN_14154f850(lVar4 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x38);
      } while (iVar3 != -1);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148146f4e FUN_148146f4e body=29 status=ok
// SIG undefined FUN_148146f4e(void)

void FUN_148146f4e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 148146f6c FUN_148146f6c body=29 status=ok
// SIG undefined FUN_148146f6c(void)

undefined8 FUN_148146f6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148146f8a FUN_148146f8a body=105 status=ok
// SIG undefined FUN_148146f8a(void)

void FUN_148146f8a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_148146e4e(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_148146e4e(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148146fe9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 148147016 FUN_148147016 body=105 status=ok
// SIG undefined FUN_148147016(void)

void FUN_148147016(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_145890a68(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_145890a68(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148147075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14814708a FUN_14814708a body=117 status=ok
// SIG undefined FUN_14814708a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14814708a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_145829b6c(_DAT_000000a8 + 0x70,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_145829b6c(param_1[0x15] + 0x70,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001481470f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 148147106 FUN_148147106 body=251 status=ok
// SIG undefined FUN_148147106(void)

void FUN_148147106(longlong param_1,char *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*param_2 == '\x01') && (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4))) {
    lVar1 = *param_3;
    lVar3 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xb0);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xb8) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x40;
        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x40) == lVar1) {
          if (lVar3 + 8 != 0 && lVar3 != 0) {
            local_20 = *(undefined8 *)(param_2 + 8);
            local_18 = *(undefined4 *)(param_2 + 0x10);
            FUN_143a23e20(lVar3 + 8,&DAT_14ca85100);
          }
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x38);
      } while (iVar2 != -1);
    }
  }
  if (*(longlong *)(param_2 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148147210 FUN_148147210 body=221 status=ok
// SIG undefined FUN_148147210(void)

void FUN_148147210(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
    lVar1 = *(longlong *)(param_2 + 0x10);
    lVar3 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xb0);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xb8) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x40;
        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x40) == lVar1) {
          if ((lVar3 + 8U & 0xfffffffffffffff7) != 0) {
            local_14 = *(undefined4 *)(lVar3 + 0x30);
            local_10 = &DAT_100000001;
            FUN_143a5e2ca(param_2,&local_14,*(undefined4 *)(lVar3 + 0x34));
          }
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x38);
      } while (iVar2 != -1);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481472ee FUN_1481472ee body=54 status=ok
// SIG undefined FUN_1481472ee(void)

void FUN_1481472ee(undefined8 param_1,undefined1 param_2,undefined8 param_3,longlong *param_4)

{
  FUN_148147d54(param_1,param_2,param_4);
  if ((longlong *)*param_4 == (longlong *)0x0 || (int)param_4[1] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148147320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_4 + 0x30))();
  return;
}



// FUNCTION 148147350 FUN_148147350 body=54 status=ok
// SIG undefined FUN_148147350(void)

undefined8 *
FUN_148147350(undefined8 param_1,undefined8 *param_2,longlong param_3,int *param_4,int param_5)

{
  *param_2 = 0;
  param_2[1] = 0;
  if (param_5 < *param_4) {
    FUN_144a83b10(param_2,*(undefined1 *)
                           ((longlong)param_5 + (longlong)param_4[1] + *(longlong *)(param_3 + 0x48)
                           ));
  }
  return param_2;
}



// FUNCTION 148147386 FUN_148147386 body=35 status=ok
// SIG undefined FUN_148147386(void)

undefined8 FUN_148147386(longlong param_1,longlong param_2)

{
  FUN_1447a122a(*(longlong *)(param_2 + 0x10) + 0x50,*(longlong *)(param_1 + 0x10) + 0x50);
  return 1;
}



// FUNCTION 1481473aa FUN_1481473aa body=58 status=ok
// SIG undefined FUN_1481473aa(void)

undefined8 FUN_1481473aa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  iVar2 = *(int *)(lVar1 + 0x58);
  if (iVar2 == *(int *)(*(longlong *)(param_1 + 0x10) + 0x58)) {
    if (iVar2 == 0) {
      uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
    else {
      iVar2 = memcmp(*(void **)(lVar1 + 0x50),*(void **)(*(longlong *)(param_1 + 0x10) + 0x50),
                     (longlong)iVar2);
      uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),iVar2 == 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1481473ea FUN_1481473ea body=145 status=ok
// SIG undefined FUN_1481473ea(void)

void FUN_1481473ea(longlong param_1,undefined8 *param_2,char *param_3)

{
  longlong lVar1;
  PSRWLOCK SRWLock;
  char *pcVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_3[1] == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (param_3 == (char *)0x0) {
      pcVar2 = (char *)(lVar1 + 0x50);
      SRWLock = (PSRWLOCK)0x0;
    }
    else {
      SRWLock = (PSRWLOCK)(param_3 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*param_3 == '\x01') {
        pcVar2 = param_3 + 0x10;
      }
      else {
        pcVar2 = (char *)(lVar1 + 0x50);
      }
    }
    *(undefined1 *)param_2 = 1;
    FUN_1447a122a(param_2 + 1,pcVar2);
    param_3[1] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148147461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared(SRWLock);
      return;
    }
  }
  return;
}



// FUNCTION 148147524 FUN_148147524 body=159 status=ok
// SIG undefined FUN_148147524(void)

void FUN_148147524(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    FUN_1400ee60a(*param_1 + 0x38,(longlong)param_1 + 0x2c);
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  }
  FUN_143a23c92(param_1);
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[1] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 1481475c4 FUN_1481475c4 body=191 status=ok
// SIG undefined FUN_1481475c4(void)

undefined8 *
FUN_1481475c4(longlong *param_1,ulonglong *param_2,undefined8 param_3,undefined2 *param_4,
             undefined8 param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar5 + 0x5b;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x2e0);
    puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar5 + 0x5b;
  }
  *param_2 = (ulonglong)puVar3;
  uVar1 = *param_4;
  uVar4 = FUN_144a8221e();
  FUN_148147684(puVar5,param_3,uVar4,uVar1,param_5);
  *puVar5 = &PTR_FUN_14adc00e0;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_14470e57a(param_1,iVar2);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x2c) = (int)param_1[1] + -1;
  return puVar5;
}



// FUNCTION 148147684 FUN_148147684 body=144 status=ok
// SIG undefined FUN_148147684(void)

undefined8 *
FUN_148147684(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined *local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &DAT_14cb3ac50;
  local_28 = *(longlong *)(param_3 + 0x48);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  local_38 = 0;
  local_20 = param_3;
  FUN_140068f1a(param_1,param_2,&local_30);
  *param_1 = &PTR_FUN_14adc0100;
  FUN_148147780(param_1 + 0x37,param_5);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148147716 FUN_148147716 body=105 status=ok
// SIG undefined FUN_148147716(void)

undefined8 * FUN_148147716(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14adc0100;
  lVar1 = 0x2b0;
  do {
    if (*(char *)((longlong)param_1 + lVar1) == '\x01') {
      *(undefined1 *)((longlong)param_1 + lVar1) = 0;
    }
    lVar1 = lVar1 + -0x38;
  } while (lVar1 != 0x240);
  lVar1 = 0x240;
  do {
    if (*(char *)((longlong)param_1 + lVar1) == '\x01') {
      *(undefined1 *)((longlong)param_1 + lVar1) = 0;
    }
    lVar1 = lVar1 + -0x38;
  } while (lVar1 != 0x1d0);
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148147780 FUN_148147780 body=258 status=ok
// SIG undefined FUN_148147780(void)

void FUN_148147780(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong lVar7;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  bVar6 = false;
  lVar7 = 0;
  do {
    *(undefined4 *)(param_1 + lVar7 * 7 + 5) = *(undefined4 *)(param_2 + lVar7 * 7 + 5);
    param_1[lVar7 * 7 + 4] = param_2[lVar7 * 7 + 4];
    uVar3 = (param_2 + lVar7 * 7 + 6)[1];
    param_1[lVar7 * 7 + 6] = param_2[lVar7 * 7 + 6];
    (param_1 + lVar7 * 7 + 6)[1] = uVar3;
    param_1[lVar7 * 7 + 8] = param_2[lVar7 * 7 + 8];
    cVar1 = *(char *)(param_2 + lVar7 * 7 + 10);
    *(char *)(param_1 + lVar7 * 7 + 10) = cVar1;
    if (cVar1 == '\x01') {
      param_1[lVar7 * 7 + 9] = param_2[lVar7 * 7 + 9];
    }
    lVar7 = 1;
    bVar2 = !bVar6;
    bVar6 = true;
  } while (bVar2);
  bVar6 = false;
  lVar7 = 0;
  do {
    *(undefined4 *)(param_1 + lVar7 * 7 + 0x13) = *(undefined4 *)(param_2 + lVar7 * 7 + 0x13);
    param_1[lVar7 * 7 + 0x12] = param_2[lVar7 * 7 + 0x12];
    uVar3 = (param_2 + lVar7 * 7 + 0x14)[1];
    param_1[lVar7 * 7 + 0x14] = param_2[lVar7 * 7 + 0x14];
    (param_1 + lVar7 * 7 + 0x14)[1] = uVar3;
    param_1[lVar7 * 7 + 0x16] = param_2[lVar7 * 7 + 0x16];
    cVar1 = *(char *)(param_2 + lVar7 * 7 + 0x18);
    *(char *)(param_1 + lVar7 * 7 + 0x18) = cVar1;
    if (cVar1 == '\x01') {
      param_1[lVar7 * 7 + 0x17] = param_2[lVar7 * 7 + 0x17];
    }
    lVar7 = 1;
    bVar2 = !bVar6;
    bVar6 = true;
  } while (bVar2);
  uVar3 = param_2[0x20];
  uVar4 = param_2[0x21];
  uVar5 = param_2[0x23];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = uVar5;
  param_1[0x20] = uVar3;
  param_1[0x21] = uVar4;
  return;
}



// FUNCTION 148147882 FUN_148147882 body=105 status=ok
// SIG undefined FUN_148147882(void)

undefined8 * FUN_148147882(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14adc0100;
  lVar1 = 0x2b0;
  do {
    if (*(char *)((longlong)param_1 + lVar1) == '\x01') {
      *(undefined1 *)((longlong)param_1 + lVar1) = 0;
    }
    lVar1 = lVar1 + -0x38;
  } while (lVar1 != 0x240);
  lVar1 = 0x240;
  do {
    if (*(char *)((longlong)param_1 + lVar1) == '\x01') {
      *(undefined1 *)((longlong)param_1 + lVar1) = 0;
    }
    lVar1 = lVar1 + -0x38;
  } while (lVar1 != 0x1d0);
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481478ec FUN_1481478ec body=214 status=ok
// SIG undefined FUN_1481478ec(void)

void FUN_1481478ec(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  undefined4 local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = param_1 + 0x20;
  local_70 = 2;
  FUN_144760590(param_2,&local_78,0);
  local_40 = *(undefined4 *)(param_1 + 0x100);
  uStack_3c = *(undefined4 *)(param_1 + 0x104);
  uStack_38 = *(undefined4 *)(param_1 + 0x108);
  uStack_34 = *(undefined4 *)(param_1 + 0x10c);
  local_30 = *(undefined8 *)(param_1 + 0x110);
  local_58 = 0;
  local_48 = &PTR_LAB_14adc0120;
  local_68 = FUN_1481479c4;
  local_80 = 2;
  local_88 = param_1;
  FUN_1481c8e40(*(undefined8 *)(param_1 + 0x118),param_2);
  local_98 = param_1 + 0x90;
  local_90 = 2;
  FUN_144760590(param_2,&local_98,0);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481479c4 FUN_1481479c4 body=62 status=ok
// SIG undefined FUN_1481479c4(void)

void FUN_1481479c4(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_148147a54();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148147a36 FUN_148147a36 body=29 status=ok
// SIG undefined FUN_148147a36(void)

undefined8 FUN_148147a36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148147a54 FUN_148147a54 body=293 status=ok
// SIG undefined FUN_148147a54(void)

void FUN_148147a54(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  size_t _Size;
  undefined4 uVar5;
  void *pvVar6;
  undefined1 auStack_b8 [32];
  void *local_98;
  undefined8 uStack_90;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uStack_90._0_4_ = **(int **)*param_2;
  _Size = (size_t)(int)uStack_90;
  local_98 = (void *)0x0;
  if ((longlong)_Size < 1) {
    uVar5 = 0;
    iVar4 = 0;
    pvVar6 = (void *)0x0;
  }
  else {
    uStack_90._4_4_ = 0;
    FUN_1447403be(&local_98,0);
    memcpy(local_98,*(void **)(*param_2 + 0x10),_Size);
    pvVar6 = local_98;
    iVar4 = (int)uStack_90;
    uVar5 = uStack_90._4_4_;
  }
  uVar1 = *param_1;
  local_98 = (void *)0x0;
  uStack_90 = 0;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  local_88[0] = (code *)0x0;
  local_78 = (undefined8 *)FUN_14001cc68(0x30,8);
  *local_78 = &PTR_LAB_14adc0140;
  local_78[1] = uVar1;
  local_78[2] = pvVar6;
  *(int *)(local_78 + 3) = iVar4;
  *(undefined4 *)((longlong)local_78 + 0x1c) = uVar5;
  local_78[4] = uVar2;
  local_78[5] = uVar3;
  if (local_78 + 1 != (undefined8 *)0x0) {
    local_88[0] = FUN_148147b7a;
  }
  FUN_1407461b0(1,local_88);
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148147b7a FUN_148147b7a body=52 status=ok
// SIG undefined FUN_148147b7a(void)

void FUN_148147b7a(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 3);
  if (lVar1 == 0) {
    return;
  }
  FUN_148147c10(param_1[4],*param_1,param_1 + 1);
  return;
}



// FUNCTION 148147bb8 FUN_148147bb8 body=29 status=ok
// SIG undefined FUN_148147bb8(void)

void FUN_148147bb8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 148147bd6 FUN_148147bd6 body=57 status=ok
// SIG undefined FUN_148147bd6(void)

undefined8 * FUN_148147bd6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14adc0140;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148147c10 FUN_148147c10 body=216 status=ok
// SIG undefined FUN_148147c10(void)

void FUN_148147c10(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x60);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x18);
        if (*plVar1 == param_2) {
          if (plVar1 == (longlong *)0x0) {
            return;
          }
          pcVar2 = (char *)plVar1[1];
          if (pcVar2 == (char *)0x0) {
            return;
          }
          lVar4 = *(longlong *)(param_1 + 0x10);
          AcquireSRWLockExclusive((PSRWLOCK)(pcVar2 + 8));
          if (*pcVar2 == '\0') {
            *pcVar2 = '\x01';
            FUN_1447a122a(pcVar2 + 0x10,lVar4 + 0x50);
          }
          FUN_1447a122a(pcVar2 + 0x10,param_3);
          pcVar2[1] = pcVar2[1] | *(byte *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148147ce1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ReleaseSRWLockExclusive((PSRWLOCK)(pcVar2 + 8));
          return;
        }
        iVar3 = (int)plVar1[2];
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 148147ce8 FUN_148147ce8 body=107 status=ok
// SIG undefined FUN_148147ce8(void)

undefined8 * FUN_148147ce8(undefined8 *param_1,longlong param_2,char *param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 != (char *)0x0) {
    *param_1 = (PSRWLOCK)(param_3 + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(param_3 + 8));
    if (*param_3 == '\x01') {
      FUN_1447a122a(param_2 + 0x50,param_3 + 0x10);
    }
    *param_3 = '\0';
    param_3[0x18] = '\0';
    param_3[0x19] = '\0';
    param_3[0x1a] = '\0';
    param_3[0x1b] = '\0';
    if (*(int *)(param_3 + 0x1c) != 0) {
      FUN_144893a1c(param_3 + 0x10,0);
    }
  }
  param_1[1] = param_2 + 0x50;
  return param_1;
}



// FUNCTION 148147d54 FUN_148147d54 body=1301 status=ok
// SIG undefined FUN_148147d54(void)

void FUN_148147d54(undefined8 param_1,longlong *param_2,undefined8 param_3)

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
  if (lVar1 == DAT_14cb3aa68) {
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
    ppuVar2 = &PTR_FUN_14adc0160;
  }
  else if (lVar1 == DAT_14cb3aa70) {
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
    ppuVar2 = &PTR_FUN_14adc01d0;
  }
  else if (lVar1 == DAT_14cb3aa78) {
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
    ppuVar2 = &PTR_FUN_14adc0240;
  }
  else if (lVar1 == DAT_14cb3aa80) {
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
    ppuVar2 = &PTR_FUN_14adc02b0;
  }
  else if (lVar1 == DAT_14cb3aa88) {
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
    ppuVar2 = &PTR_FUN_14adc0320;
  }
  else if (lVar1 == DAT_14cb3aa90) {
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
    ppuVar2 = &PTR_FUN_14adc0390;
  }
  else if (lVar1 == DAT_14cb3aa98) {
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
    ppuVar2 = &PTR_FUN_14adc0400;
  }
  else if (lVar1 == DAT_14cb3aaa0) {
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
    ppuVar2 = &PTR_FUN_14adc0470;
  }
  else {
    if (lVar1 != DAT_14cb3aaa8) goto LAB_148147e03;
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
    ppuVar2 = &PTR_FUN_14adc04e0;
  }
  local_28 = 2;
  *local_30 = ppuVar2;
  local_30[3] = param_1;
  FUN_144a450dc(param_3,&local_30);
  FUN_1449db362(&local_30);
LAB_148147e03:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814826a FUN_14814826a body=29 status=ok
// SIG undefined FUN_14814826a(void)

undefined8 FUN_14814826a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814829c FUN_14814829c body=93 status=ok
// SIG undefined FUN_14814829c(void)

void FUN_14814829c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0160;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481482fa FUN_1481482fa body=93 status=ok
// SIG undefined FUN_1481482fa(void)

void FUN_1481482fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0160;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148148358 FUN_148148358 body=126 status=ok
// SIG undefined FUN_148148358(void)

void FUN_148148358(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc0160;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481483c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481483e0 FUN_1481483e0 body=20 status=ok
// SIG undefined FUN_1481483e0(void)

undefined1 FUN_1481483e0(longlong param_1)

{
  FUN_1481483f4(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481483f4 FUN_1481483f4 body=240 status=ok
// SIG undefined FUN_1481483f4(void)

void FUN_1481483f4(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  PSRWLOCK SRWLock;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  int local_40;
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1481484e6(local_38);
  FUN_144a76cd4(&local_48);
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (local_30 == (char *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_30 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*local_30 == '\x01') {
      local_30 = local_30 + 0x10;
      goto LAB_14814845e;
    }
  }
  local_30 = (char *)(lVar3 + 0x50);
LAB_14814845e:
  piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar4 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar4) {
    uVar2 = *(undefined4 *)(local_30 + 8);
    iVar5 = 0;
    do {
      puVar1 = local_48 + local_40;
      *local_48 = uVar2;
      iVar5 = iVar5 + 1;
      piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar4 = (int *)(param_2 + 0x3c);
      }
      local_48 = puVar1;
    } while (iVar5 < *piVar4);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481484e6 FUN_1481484e6 body=148 status=ok
// SIG undefined FUN_1481484e6(void)

void FUN_1481484e6(int *param_1,char *param_2)

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



// FUNCTION 14814857a FUN_14814857a body=29 status=ok
// SIG undefined FUN_14814857a(void)

undefined8 FUN_14814857a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481485ac FUN_1481485ac body=93 status=ok
// SIG undefined FUN_1481485ac(void)

void FUN_1481485ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc01d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814860a FUN_14814860a body=93 status=ok
// SIG undefined FUN_14814860a(void)

void FUN_14814860a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc01d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148148668 FUN_148148668 body=126 status=ok
// SIG undefined FUN_148148668(void)

void FUN_148148668(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc01d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481486d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481486f0 FUN_1481486f0 body=20 status=ok
// SIG undefined FUN_1481486f0(void)

undefined1 FUN_1481486f0(longlong param_1)

{
  FUN_148148704(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148148704 FUN_148148704 body=312 status=ok
// SIG undefined FUN_148148704(void)

void FUN_148148704(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  PSRWLOCK SRWLock;
  int *piVar6;
  undefined1 auStack_88 [32];
  int *local_68;
  int local_60;
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1481484e6(local_38);
  local_58 = (int *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_2);
  FUN_140126e42(&local_68);
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (local_30 == (char *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_30 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*local_30 == '\x01') {
      local_30 = local_30 + 0x10;
      goto LAB_148148788;
    }
  }
  local_30 = (char *)(lVar3 + 0x50);
LAB_148148788:
  piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar4 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar4) {
    iVar2 = *(int *)(local_30 + 8);
    iVar5 = 0;
    do {
      piVar4 = local_58 + local_48;
      piVar1 = local_68 + local_60;
      *local_68 = -(uint)(*local_58 < iVar2 && -1 < *local_58);
      iVar5 = iVar5 + 1;
      piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar6 = (int *)(param_2 + 0x3c);
      }
      local_68 = piVar1;
      local_58 = piVar4;
    } while (iVar5 < *piVar6);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14814883e FUN_14814883e body=29 status=ok
// SIG undefined FUN_14814883e(void)

undefined8 FUN_14814883e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148148870 FUN_148148870 body=93 status=ok
// SIG undefined FUN_148148870(void)

void FUN_148148870(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0240;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481488ce FUN_1481488ce body=93 status=ok
// SIG undefined FUN_1481488ce(void)

void FUN_1481488ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0240;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814892c FUN_14814892c body=126 status=ok
// SIG undefined FUN_14814892c(void)

void FUN_14814892c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc0240;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014814899b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481489b4 FUN_1481489b4 body=20 status=ok
// SIG undefined FUN_1481489b4(void)

undefined1 FUN_1481489b4(longlong param_1)

{
  FUN_1481489c8(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481489c8 FUN_1481489c8 body=242 status=ok
// SIG undefined FUN_1481489c8(void)

void FUN_1481489c8(longlong param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  PSRWLOCK SRWLock;
  int *piVar5;
  undefined1 auStack_68 [32];
  int *local_48;
  int local_40;
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1481484e6(local_38);
  FUN_144a76cd4(&local_48);
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (local_30 == (char *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_30 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*local_30 == '\x01') {
      local_30 = local_30 + 0x10;
      goto LAB_148148a32;
    }
  }
  local_30 = (char *)(lVar2 + 0x50);
LAB_148148a32:
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar1 = *(int *)(local_30 + 8);
    iVar4 = 0;
    do {
      piVar3 = local_48 + local_40;
      *local_48 = iVar1 + -1;
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      local_48 = piVar3;
    } while (iVar4 < *piVar5);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148148abc FUN_148148abc body=29 status=ok
// SIG undefined FUN_148148abc(void)

undefined8 FUN_148148abc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148148aee FUN_148148aee body=93 status=ok
// SIG undefined FUN_148148aee(void)

void FUN_148148aee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc02b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148148b4c FUN_148148b4c body=93 status=ok
// SIG undefined FUN_148148b4c(void)

void FUN_148148b4c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc02b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148148baa FUN_148148baa body=126 status=ok
// SIG undefined FUN_148148baa(void)

void FUN_148148baa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc02b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148148c19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148148c32 FUN_148148c32 body=20 status=ok
// SIG undefined FUN_148148c32(void)

undefined1 FUN_148148c32(longlong param_1)

{
  FUN_148148c46(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148148c46 FUN_148148c46 body=382 status=ok
// SIG undefined FUN_148148c46(void)

void FUN_148148c46(longlong param_1,char *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  uint uVar5;
  int *piVar6;
  longlong *plVar7;
  PSRWLOCK SRWLock;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [32];
  uint *local_68;
  int local_60;
  uint *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1481484e6(local_38);
  local_58 = (uint *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_2);
  FUN_144a76cd4(&local_68,param_2);
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (local_30 == (char *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_30 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*local_30 == '\x01') {
      plVar7 = (longlong *)(local_30 + 0x10);
      goto LAB_148148cca;
    }
  }
  plVar7 = (longlong *)(lVar4 + 0x50);
LAB_148148cca:
  piVar1 = (int *)(param_2 + 0x3c);
  piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar6 = piVar1;
  }
  if ((int)plVar7[1] < 1) {
    if (0 < *piVar6) {
      iVar8 = 0;
      do {
        puVar2 = local_68 + local_60;
        *local_68 = 0;
        iVar8 = iVar8 + 1;
        piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar6 = piVar1;
        }
        local_68 = puVar2;
      } while (iVar8 < *piVar6);
    }
  }
  else if (0 < *piVar6) {
    uVar5 = (int)plVar7[1] - 1;
    iVar8 = 0;
    do {
      puVar2 = local_58 + local_48;
      uVar9 = *local_58;
      if ((int)uVar5 <= (int)*local_58) {
        uVar9 = uVar5;
      }
      uVar10 = (ulonglong)uVar9;
      if ((int)uVar9 < 1) {
        uVar10 = 0;
      }
      puVar3 = local_68 + local_60;
      *local_68 = (uint)*(byte *)(*plVar7 + uVar10);
      iVar8 = iVar8 + 1;
      piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar6 = piVar1;
      }
      local_68 = puVar3;
      local_58 = puVar2;
    } while (iVar8 < *piVar6);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148148dc6 FUN_148148dc6 body=29 status=ok
// SIG undefined FUN_148148dc6(void)

undefined8 FUN_148148dc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148148df8 FUN_148148df8 body=93 status=ok
// SIG undefined FUN_148148df8(void)

void FUN_148148df8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0320;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148148e56 FUN_148148e56 body=93 status=ok
// SIG undefined FUN_148148e56(void)

void FUN_148148e56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0320;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148148eb4 FUN_148148eb4 body=126 status=ok
// SIG undefined FUN_148148eb4(void)

void FUN_148148eb4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc0320;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148148f23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148148f3c FUN_148148f3c body=20 status=ok
// SIG undefined FUN_148148f3c(void)

undefined1 FUN_148148f3c(longlong param_1)

{
  FUN_148148f50(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148148f50 FUN_148148f50 body=185 status=ok
// SIG undefined FUN_148148f50(void)

void FUN_148148f50(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  PSRWLOCK SRWLock;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1481484e6(local_38);
  pcVar2 = local_30;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (local_30 == (char *)0x0) {
    pcVar2 = (char *)(lVar1 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_30 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar2 == '\0') {
      *pcVar2 = '\x01';
      FUN_1447a122a(pcVar2 + 0x10,lVar1 + 0x50);
    }
    pcVar2 = pcVar2 + 0x10;
  }
  pcVar2[8] = '\0';
  pcVar2[9] = '\0';
  pcVar2[10] = '\0';
  pcVar2[0xb] = '\0';
  if (*(int *)(pcVar2 + 0xc) < 0) {
    FUN_144893a1c(pcVar2,0);
  }
  local_30[1] = local_30[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814900a FUN_14814900a body=29 status=ok
// SIG undefined FUN_14814900a(void)

undefined8 FUN_14814900a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814903c FUN_14814903c body=93 status=ok
// SIG undefined FUN_14814903c(void)

void FUN_14814903c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0390;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814909a FUN_14814909a body=93 status=ok
// SIG undefined FUN_14814909a(void)

void FUN_14814909a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0390;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481490f8 FUN_1481490f8 body=126 status=ok
// SIG undefined FUN_1481490f8(void)

void FUN_1481490f8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc0390;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148149167. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148149180 FUN_148149180 body=20 status=ok
// SIG undefined FUN_148149180(void)

undefined1 FUN_148149180(longlong param_1)

{
  FUN_148149194(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148149194 FUN_148149194 body=262 status=ok
// SIG undefined FUN_148149194(void)

void FUN_148149194(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  longlong *plVar4;
  PSRWLOCK SRWLock;
  longlong lVar5;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [8];
  char *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1481484e6(local_40);
  local_58 = (int *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_2);
  pcVar3 = local_38;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (local_38 == (char *)0x0) {
    plVar4 = (longlong *)(lVar2 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_38 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar3 == '\0') {
      *pcVar3 = '\x01';
      FUN_1447a122a(pcVar3 + 0x10,lVar2 + 0x50);
    }
    plVar4 = (longlong *)(pcVar3 + 0x10);
  }
  lVar2 = plVar4[1];
  lVar5 = (longlong)(int)lVar2;
  iVar1 = *local_58;
  local_58 = local_58 + local_48;
  FUN_140393c76(plVar4,iVar1,1);
  if ((int)lVar2 < iVar1) {
    do {
      *(undefined1 *)(*plVar4 + lVar5) = 0;
      lVar5 = lVar5 + 1;
    } while (iVar1 != lVar5);
  }
  local_38[1] = local_38[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814929c FUN_14814929c body=29 status=ok
// SIG undefined FUN_14814929c(void)

undefined8 FUN_14814929c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481492ce FUN_1481492ce body=93 status=ok
// SIG undefined FUN_1481492ce(void)

void FUN_1481492ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0400;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814932c FUN_14814932c body=93 status=ok
// SIG undefined FUN_14814932c(void)

void FUN_14814932c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0400;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814938a FUN_14814938a body=126 status=ok
// SIG undefined FUN_14814938a(void)

void FUN_14814938a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc0400;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481493f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148149412 FUN_148149412 body=20 status=ok
// SIG undefined FUN_148149412(void)

undefined1 FUN_148149412(longlong param_1)

{
  FUN_148149426(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148149426 FUN_148149426 body=444 status=ok
// SIG undefined FUN_148149426(void)

void FUN_148149426(longlong param_1,byte *param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  longlong lVar7;
  PSRWLOCK SRWLock;
  int iVar8;
  byte *pbVar9;
  longlong *plVar10;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  uint *local_98;
  undefined8 uStack_90;
  int local_88;
  int *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined1 local_60 [8];
  char *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1481484e6(local_60);
  local_68 = 0;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  FUN_144a76d88(&local_78,param_2);
  local_88 = 0;
  local_98 = (uint *)0x0;
  uStack_90 = 0;
  FUN_144a98d08(&local_98,param_2);
  local_a8 = 0;
  local_b8 = (undefined1 *)0x0;
  uStack_b0 = 0;
  FUN_144a98d08(&local_b8,param_2);
  pcVar5 = local_58;
  lVar7 = *(longlong *)(param_1 + 0x10);
  if (local_58 == (char *)0x0) {
    plVar10 = (longlong *)(lVar7 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_58 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar5 == '\0') {
      *pcVar5 = '\x01';
      FUN_1447a122a(pcVar5 + 0x10,lVar7 + 0x50);
    }
    plVar10 = (longlong *)(pcVar5 + 0x10);
  }
  bVar6 = *param_2;
  lVar7 = *(longlong *)(param_2 + 0x80);
  pbVar9 = (byte *)(lVar7 + 0x40);
  if (bVar6 != 0) {
    pbVar9 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar9) {
    iVar8 = 0;
    do {
      puVar1 = local_98 + local_88;
      uVar4 = *local_98;
      puVar2 = local_b8 + (longlong)local_a8 * 4;
      piVar3 = local_78 + local_68;
      if ((-1 < (int)uVar4 && *local_78 == 0) && ((int)uVar4 < (int)plVar10[1])) {
        *(undefined1 *)(*plVar10 + (ulonglong)uVar4) = *local_b8;
        bVar6 = *param_2;
        lVar7 = *(longlong *)(param_2 + 0x80);
      }
      iVar8 = iVar8 + 1;
      pbVar9 = (byte *)(lVar7 + 0x40);
      if ((bVar6 & 1) != 0) {
        pbVar9 = param_2 + 0x3c;
      }
      local_b8 = puVar2;
      local_98 = puVar1;
      local_78 = piVar3;
    } while (iVar8 < *(int *)pbVar9);
  }
  local_58[1] = local_58[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481495e4 FUN_1481495e4 body=29 status=ok
// SIG undefined FUN_1481495e4(void)

undefined8 FUN_1481495e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148149616 FUN_148149616 body=93 status=ok
// SIG undefined FUN_148149616(void)

void FUN_148149616(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0470;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148149674 FUN_148149674 body=93 status=ok
// SIG undefined FUN_148149674(void)

void FUN_148149674(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0470;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481496d2 FUN_1481496d2 body=126 status=ok
// SIG undefined FUN_1481496d2(void)

void FUN_1481496d2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc0470;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148149741. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14814975a FUN_14814975a body=20 status=ok
// SIG undefined FUN_14814975a(void)

undefined1 FUN_14814975a(longlong param_1)

{
  FUN_14814976e(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14814976e FUN_14814976e body=426 status=ok
// SIG undefined FUN_14814976e(void)

void FUN_14814976e(longlong param_1,byte *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  longlong lVar7;
  byte *pbVar8;
  PSRWLOCK SRWLock;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  int local_98;
  int *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined1 local_70 [8];
  char *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1481484e6(local_70);
  local_78 = 0;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  FUN_144a76d88(&local_88,param_2);
  local_98 = 0;
  local_a8 = (undefined1 *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_2);
  pcVar5 = local_68;
  lVar7 = *(longlong *)(param_1 + 0x10);
  iVar9 = 0x7fffffff;
  if (0 < *(int *)(lVar7 + 0x4c)) {
    iVar9 = *(int *)(lVar7 + 0x4c);
  }
  local_b0 = param_1;
  if (local_68 == (char *)0x0) {
    plVar11 = (longlong *)(lVar7 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_68 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar5 == '\0') {
      *pcVar5 = '\x01';
      FUN_1447a122a(pcVar5 + 0x10,lVar7 + 0x50);
    }
    plVar11 = (longlong *)(pcVar5 + 0x10);
  }
  bVar6 = *param_2;
  lVar7 = *(longlong *)(param_2 + 0x80);
  pbVar8 = (byte *)(lVar7 + 0x40);
  if (bVar6 != 0) {
    pbVar8 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar8) {
    iVar10 = 0;
    do {
      piVar1 = local_88 + local_78;
      iVar4 = *local_88;
      puVar2 = local_a8 + (longlong)local_98 * 4;
      local_88 = piVar1;
      if (iVar4 == 0) {
        iVar4 = (int)plVar11[1];
        if (iVar4 < iVar9) {
          uVar3 = *local_a8;
          *(uint *)(plVar11 + 1) = iVar4 + 1U;
          local_a8 = puVar2;
          if (*(uint *)((longlong)plVar11 + 0xc) < iVar4 + 1U) {
            FUN_1447403be(plVar11,iVar4);
          }
          *(undefined1 *)(*plVar11 + (longlong)iVar4) = uVar3;
          bVar6 = *param_2;
          lVar7 = *(longlong *)(param_2 + 0x80);
          puVar2 = local_a8;
        }
      }
      local_a8 = puVar2;
      iVar10 = iVar10 + 1;
      pbVar8 = (byte *)(lVar7 + 0x40);
      if ((bVar6 & 1) != 0) {
        pbVar8 = param_2 + 0x3c;
      }
    } while (iVar10 < *(int *)pbVar8);
  }
  local_68[1] = local_68[1] | *(byte *)(local_b0 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14814991a FUN_14814991a body=29 status=ok
// SIG undefined FUN_14814991a(void)

undefined8 FUN_14814991a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814994c FUN_14814994c body=93 status=ok
// SIG undefined FUN_14814994c(void)

void FUN_14814994c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc04e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481499aa FUN_1481499aa body=93 status=ok
// SIG undefined FUN_1481499aa(void)

void FUN_1481499aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc04e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148149a08 FUN_148149a08 body=126 status=ok
// SIG undefined FUN_148149a08(void)

void FUN_148149a08(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc04e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148149a77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148149a90 FUN_148149a90 body=20 status=ok
// SIG undefined FUN_148149a90(void)

undefined1 FUN_148149a90(longlong param_1)

{
  FUN_148149aa4(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148149aa4 FUN_148149aa4 body=451 status=ok
// SIG undefined FUN_148149aa4(void)

void FUN_148149aa4(longlong param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  int *piVar5;
  PSRWLOCK SRWLock;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  int local_90;
  uint *local_88;
  int local_80;
  int *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined1 local_58 [8];
  char *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1481484e6(local_58);
  local_78 = (int *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_144a76d88(&local_78,param_2);
  FUN_144a76cd4(&local_88,param_2);
  FUN_140126e42(&local_98,param_2);
  pcVar4 = local_50;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (local_50 == (char *)0x0) {
    plVar7 = (longlong *)(lVar3 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_50 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar4 == '\0') {
      *pcVar4 = '\x01';
      FUN_1447a122a(pcVar4 + 0x10,lVar3 + 0x50);
    }
    plVar7 = (longlong *)(pcVar4 + 0x10);
  }
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar6 = 0;
    do {
      if (*local_78 == 0) {
        iVar2 = (int)plVar7[1];
        if ((longlong)iVar2 == 0) goto LAB_148149b82;
        bVar1 = *(byte *)(*plVar7 + -1 + (longlong)iVar2);
        *(int *)(plVar7 + 1) = iVar2 + -1;
        local_78 = local_78 + local_68;
        FUN_140b3f66e(plVar7);
        *local_88 = (uint)bVar1;
        *local_98 = 0xffffffff;
        local_98 = local_98 + local_90;
        local_88 = local_88 + local_80;
      }
      else {
LAB_148149b82:
        *local_88 = 0;
        *local_98 = 0;
        local_98 = local_98 + local_90;
        local_88 = local_88 + local_80;
        local_78 = local_78 + local_68;
      }
      iVar6 = iVar6 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
    } while (iVar6 < *piVar5);
  }
  local_50[1] = local_50[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148149c68 FUN_148149c68 body=958 status=ok
// SIG undefined FUN_148149c68(void)

void FUN_148149c68(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined4 local_1e0;
  undefined8 *local_1d8;
  undefined4 local_1d0;
  undefined8 *local_1c8;
  undefined4 local_1c0;
  code *local_1b8;
  undefined8 local_1a8;
  undefined **local_198;
  longlong local_190;
  undefined4 *local_188;
  undefined1 local_180;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined1 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  undefined8 local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x78) != *(int *)(lVar4 + 0xa4)) {
    lVar1 = param_1[1];
    lVar7 = lVar4 + 0xa8;
    if (*(longlong *)(lVar4 + 0xb0) != 0) {
      lVar7 = *(longlong *)(lVar4 + 0xb0);
    }
    iVar5 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar4 + 0xb8) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      do {
        lVar7 = *(longlong *)(lVar4 + 0x70) + (longlong)iVar5 * 0x40;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x70) + (longlong)iVar5 * 0x40) == lVar1) {
          if (((lVar7 + 8U & 0xfffffffffffffff7) != 0) &&
             (iVar5 = *(int *)(lVar7 + 0x28), iVar5 != 0)) {
            lVar4 = param_1[2];
            iVar3 = (int)param_1[3];
            if (*(int *)(lVar4 + 0x40) <= iVar3) {
              FUN_1481287aa(lVar4 + 0x38,(iVar3 - *(int *)(lVar4 + 0x40)) + 1);
              lVar4 = param_1[2];
              iVar3 = (int)param_1[3];
              iVar5 = *(int *)(lVar7 + 0x28);
            }
            puVar8 = (undefined4 *)((longlong)iVar3 * 8 + *(longlong *)(lVar4 + 0x38));
            local_50 = 0;
            local_44 = 2;
            local_80 = 0;
            local_74 = 2;
            local_100 = 0;
            local_f4 = 2;
            iVar3 = *(int *)(lVar7 + 0x34);
            uVar6 = 1;
            local_48 = 1;
            local_160 = *(undefined8 *)(lVar7 + 0x10);
            local_68 = 0;
            local_150 = 0x400;
            if (iVar3 == -1) {
              local_150 = 0x10;
            }
            local_78 = 1;
            local_f0 = 0xffffffffffffffff;
            local_e8 = 0xffffffff;
            local_d8 = 2;
            local_d0 = 0x80;
            local_c0 = 0;
            local_f8 = 1;
            local_170 = 0xffffffffffffffff;
            local_168 = 0xffffffff;
            local_158 = 2;
            local_154 = 0x80;
            local_14c = 0;
            local_140 = 0;
            if (iVar3 != -1) {
              lVar4 = param_1[4];
              local_58 = iVar3 << 2;
              local_48 = 2;
              local_60 = *(undefined8 *)(lVar4 + 0x58);
              local_54 = 4;
              local_78 = 2;
              local_128 = *(undefined8 *)(lVar4 + 0x60);
              local_b8 = 0xffffffffffffffff;
              local_b0 = 0xffffffff;
              local_a0 = 3;
              local_9c = 0x80000000f0;
              local_94 = 0;
              local_88 = 0;
              local_f8 = 2;
              local_138 = 0xffffffffffffffff;
              local_130 = 0xffffffff;
              local_120 = 3;
              local_11c = 0xf000000080;
              local_114 = 0;
              local_108 = 0;
              uVar6 = 2;
              local_a8 = local_128;
            }
            else {
              *puVar8 = *(undefined4 *)(lVar7 + 0x30);
              lVar4 = param_1[4];
            }
            uVar2 = *(undefined8 *)(lVar4 + 0x28);
            local_1c8 = &local_f0;
            local_1c0 = uVar6;
            local_e0 = local_160;
            local_d4 = local_150;
            local_70 = local_160;
            local_64 = iVar5;
            FUN_144760590(param_2,&local_1c8,0);
            local_190 = param_1[2];
            local_180 = *(int *)(lVar7 + 0x34) == -1;
            local_1a8 = 0;
            local_198 = &PTR_LAB_14adc0550;
            local_1b8 = FUN_14814a028;
            local_1d8 = &local_70;
            local_1d0 = uVar6;
            local_188 = puVar8;
            FUN_1481c8e40(uVar2,param_2);
            local_1e8 = &local_170;
            local_1e0 = uVar6;
            FUN_144760590(param_2,&local_1e8,0);
            FUN_143a96774(uVar2,param_2);
            FUN_148128c50(&local_170);
            FUN_148128c50(&local_f0);
            if (local_50 != 0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        iVar5 = *(int *)(lVar7 + 0x38);
      } while (iVar5 != -1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14814a028 FUN_14814a028 body=62 status=ok
// SIG undefined FUN_14814a028(void)

void FUN_14814a028(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_14814a0b8();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814a09a FUN_14814a09a body=29 status=ok
// SIG undefined FUN_14814a09a(void)

undefined8 FUN_14814a09a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814a0b8 FUN_14814a0b8 body=184 status=ok
// SIG undefined FUN_14814a0b8(void)

void FUN_14814a0b8(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 2) == '\0') {
    *(undefined4 *)param_1[1] = **(undefined4 **)(*param_2 + 0x10);
  }
  if (0 < (int)*(uint *)param_1[1]) {
    local_38 = (void *)0x0;
    uStack_30 = (ulonglong)*(uint *)param_1[1];
    FUN_1446f48e2(&local_38,0);
    memcpy(local_38,*(void **)*param_2,(longlong)*(int *)param_1[1]);
    local_40 = (int)uStack_30 << 2;
    local_48 = local_38;
    uVar1 = FUN_148119ae4(*param_1);
    *(undefined4 *)(param_1[1] + 4) = uVar1;
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814a182 FUN_14814a182 body=29 status=ok
// SIG undefined FUN_14814a182(void)

void FUN_14814a182(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14814a1a0 FUN_14814a1a0 body=29 status=ok
// SIG undefined FUN_14814a1a0(void)

undefined8 FUN_14814a1a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814a1be FUN_14814a1be body=105 status=ok
// SIG undefined FUN_14814a1be(void)

void FUN_14814a1be(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_148149c68(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_148149c68(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014814a21d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14814a228 FUN_14814a228 body=239 status=ok
// SIG undefined FUN_14814a228(void)

void FUN_14814a228(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_38 [32];
  longlong local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x78) != *(int *)(lVar1 + 0xa4)) {
    lVar2 = param_1[1];
    lVar4 = lVar1 + 0xa8;
    if (*(longlong *)(lVar1 + 0xb0) != 0) {
      lVar4 = *(longlong *)(lVar1 + 0xb0);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar1 + 0xb8) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(lVar1 + 0x70) + (longlong)iVar3 * 0x40;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x70) + (longlong)iVar3 * 0x40) == lVar2) {
          if (lVar4 + 8 != 0 && lVar4 != 0) {
            lVar1 = *(longlong *)(param_1[2] + 0x38);
            local_18 = (longlong)*(int *)(lVar1 + 4 + (longlong)(int)param_1[3] * 8) +
                       *(longlong *)(param_1[2] + 0x48);
            local_10 = *(undefined4 *)(lVar1 + (longlong)(int)param_1[3] * 8);
            FUN_143a23e20(lVar4 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x38);
      } while (iVar3 != -1);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14814a328 FUN_14814a328 body=29 status=ok
// SIG undefined FUN_14814a328(void)

void FUN_14814a328(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14814a346 FUN_14814a346 body=29 status=ok
// SIG undefined FUN_14814a346(void)

undefined8 FUN_14814a346(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814a364 FUN_14814a364 body=105 status=ok
// SIG undefined FUN_14814a364(void)

void FUN_14814a364(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14814a228(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14814a228(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014814a3c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14814a3ce FUN_14814a3ce body=306 status=ok
// SIG undefined FUN_14814a3ce(void)

undefined4 * FUN_14814a3ce(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14814a502(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar4 = FUN_14814a5e8(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14814a6da(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814a502 FUN_14814a502 body=230 status=ok
// SIG undefined FUN_14814a502(void)

int * FUN_14814a502(longlong *param_1,int *param_2)

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



// FUNCTION 14814a5e8 FUN_14814a5e8 body=128 status=ok
// SIG undefined FUN_14814a5e8(void)

undefined8 FUN_14814a5e8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14814a668((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14814a668 FUN_14814a668 body=114 status=ok
// SIG undefined FUN_14814a668(void)

void FUN_14814a668(longlong *param_1,int param_2)

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



// FUNCTION 14814a6da FUN_14814a6da body=447 status=ok
// SIG undefined FUN_14814a6da(void)

void FUN_14814a6da(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)((int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 14814a89a FUN_14814a89a body=34 status=ok
// SIG undefined FUN_14814a89a(void)

ulonglong FUN_14814a89a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1406f014a(*param_3);
  *(undefined1 *)*param_1 = uVar1;
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),*(undefined1 *)*param_1) ^ 1;
}



// FUNCTION 14814a8e6 FUN_14814a8e6 body=29 status=ok
// SIG undefined FUN_14814a8e6(void)

undefined8 FUN_14814a8e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814a904 FUN_14814a904 body=180 status=ok
// SIG undefined FUN_14814a904(void)

void FUN_14814a904(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  local_38 = param_1 + 1;
  FUN_14814a9ba(lVar2 + 0x70,&local_2c);
  lVar2 = *(longlong *)(lVar2 + 0x70);
  lVar6 = (longlong)local_2c * 0x40;
  cVar1 = *(char *)((longlong)param_1 + 0x1c);
  lVar4 = param_1[3];
  lVar3 = param_1[2];
  *(longlong *)(lVar2 + 8 + lVar6) = lVar3;
  *(undefined8 *)(lVar2 + 0x2c + lVar6) = 0xffffffff00000000;
  *(undefined4 *)(lVar2 + 0x34 + lVar6) = 0xffffffff;
  if (cVar1 == '\x01') {
    *(int *)(lVar2 + lVar6 + 0x2c) = (int)lVar4;
    uVar5 = FUN_1481c88ee(lVar3 + 0x38,param_2);
    *(undefined4 *)(lVar2 + lVar6 + 0x34) = uVar5;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814a9ba FUN_14814a9ba body=374 status=ok
// SIG undefined FUN_14814a9ba(void)

undefined4 * FUN_14814a9ba(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14814ab32(param_1,local_88);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  local_50 = 0xffffffffffffffff;
  *local_80 = *(undefined8 *)*param_3;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[5] = 0;
  local_80[6] = 0xffffffffffffffff;
  FUN_148147524(&local_78);
  *(undefined4 *)(local_80 + 7) = 0xffffffff;
  local_78 = CONCAT44(local_78._4_4_,local_88[0]);
  uVar7 = (int)((ulonglong)*local_80 >> 0x20) * 0x17 + (int)*local_80;
  cVar2 = FUN_14814ac18(param_1,uVar7,local_80,&local_78);
  uVar1 = (undefined4)local_78;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_80 + 0x3c) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_80 + 7) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = (undefined4)local_78;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14814ad38(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814ab32 FUN_14814ab32 body=229 status=ok
// SIG undefined FUN_14814ab32(void)

int * FUN_14814ab32(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 14814ac18 FUN_14814ac18 body=174 status=ok
// SIG undefined FUN_14814ac18(void)

undefined8 FUN_14814ac18(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x40);
        if (*(longlong *)(*param_1 + (longlong)iVar15 * 0x40) == *param_3) {
          FUN_148147524(puVar1 + 2);
          lVar8 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar9 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar10 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar11 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          lVar12 = param_3[4];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar13 = param_3[5];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x2c);
          *(longlong *)(puVar1 + 0xc) = param_3[6];
          puVar1[8] = (int)lVar12;
          puVar1[9] = uVar6;
          puVar1[10] = (int)lVar13;
          puVar1[0xb] = uVar7;
          puVar1[4] = (int)lVar10;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar11;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar8;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar9;
          puVar1[3] = uVar3;
          FUN_14814acc6(param_1,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = puVar1[0xe];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 14814acc6 FUN_14814acc6 body=114 status=ok
// SIG undefined FUN_14814acc6(void)

void FUN_14814acc6(longlong *param_1,int param_2)

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



// FUNCTION 14814ad38 FUN_14814ad38 body=450 status=ok
// SIG undefined FUN_14814ad38(void)

void FUN_14814ad38(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x40;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x3c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar7) =
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



// FUNCTION 14814af0c FUN_14814af0c body=29 status=ok
// SIG undefined FUN_14814af0c(void)

void FUN_14814af0c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14814af2a FUN_14814af2a body=29 status=ok
// SIG undefined FUN_14814af2a(void)

undefined8 FUN_14814af2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814af48 FUN_14814af48 body=105 status=ok
// SIG undefined FUN_14814af48(void)

void FUN_14814af48(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14814a904(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14814a904(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014814afa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14814afb2 FUN_14814afb2 body=102 status=ok
// SIG undefined FUN_14814afb2(void)

void FUN_14814afb2(longlong *param_1,longlong param_2)

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
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x40) == param_2) {
          FUN_14814b018(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x40 + *param_1 + 0x38);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14814b018 FUN_14814b018 body=123 status=ok
// SIG undefined FUN_14814b018(void)

void FUN_14814b018(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x40;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x3c + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x38 + lVar6 * 0x40);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x40 + 0x38);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x38);
  FUN_148147524(*param_1 + lVar2 + 8);
  FUN_14814acc6(param_1,param_2);
  return;
}



// FUNCTION 14814b0b2 FUN_14814b0b2 body=12 status=ok
// SIG undefined FUN_14814b0b2(void)

void FUN_14814b0b2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014814b0bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14814b0be FUN_14814b0be body=29 status=ok
// SIG undefined FUN_14814b0be(void)

undefined8 FUN_14814b0be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814b0dc FUN_14814b0dc body=117 status=ok
// SIG undefined FUN_14814b0dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14814b0dc(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14814afb2(_DAT_000000a8 + 0x70,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14814afb2(param_1[0x15] + 0x70,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014814b147. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14814b152 FUN_14814b152 body=102 status=ok
// SIG undefined FUN_14814b152(void)

void FUN_14814b152(longlong *param_1,longlong param_2)

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
          FUN_14814b1b8(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14814b1b8 FUN_14814b1b8 body=87 status=ok
// SIG undefined FUN_14814b1b8(void)

void FUN_14814b1b8(longlong *param_1,int param_2)

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
  FUN_14814a668();
  return;
}



// FUNCTION 14814b216 FUN_14814b216 body=251 status=ok
// SIG undefined FUN_14814b216(void)

void FUN_14814b216(longlong param_1,char *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*param_2 == '\x01') && (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4))) {
    lVar1 = *param_3;
    lVar3 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xb0);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xb8) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x40;
        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x40) == lVar1) {
          if (lVar3 + 8 != 0 && lVar3 != 0) {
            local_20 = *(undefined8 *)(param_2 + 8);
            local_18 = *(undefined4 *)(param_2 + 0x10);
            FUN_143a26aee(lVar3 + 8,&DAT_14ca85100);
          }
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x38);
      } while (iVar2 != -1);
    }
  }
  if (*(longlong *)(param_2 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14814b320 FUN_14814b320 body=221 status=ok
// SIG undefined FUN_14814b320(void)

void FUN_14814b320(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
    lVar1 = *(longlong *)(param_2 + 0x10);
    lVar3 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xb0);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xb8) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x40;
        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x40) == lVar1) {
          if ((lVar3 + 8U & 0xfffffffffffffff7) != 0) {
            local_14 = *(undefined4 *)(lVar3 + 0x30);
            local_10 = &DAT_100000001;
            FUN_143a5e2ca(param_2,&local_14,*(undefined4 *)(lVar3 + 0x34));
          }
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x38);
      } while (iVar2 != -1);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14814b3fe FUN_14814b3fe body=54 status=ok
// SIG undefined FUN_14814b3fe(void)

void FUN_14814b3fe(undefined8 param_1,undefined1 param_2,undefined8 param_3,longlong *param_4)

{
  FUN_14814be9c(param_1,param_2,param_4);
  if ((longlong *)*param_4 == (longlong *)0x0 || (int)param_4[1] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014814b430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_4 + 0x30))();
  return;
}



// FUNCTION 14814b460 FUN_14814b460 body=85 status=ok
// SIG undefined FUN_14814b460(void)

undefined8 *
FUN_14814b460(undefined8 param_1,undefined8 *param_2,longlong param_3,int *param_4,int param_5)

{
  byte bVar1;
  wchar_t *pwVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_5 < *param_4) {
    bVar1 = *(byte *)((longlong)param_5 + (longlong)param_4[1] + *(longlong *)(param_3 + 0x48));
    pwVar2 = L"False";
    if ((bVar1 & 1) != 0) {
      pwVar2 = L"True";
    }
    FUN_1400020e8(param_2,pwVar2,bVar1 & 1 ^ 5);
  }
  return param_2;
}



// FUNCTION 14814b4b6 FUN_14814b4b6 body=35 status=ok
// SIG undefined FUN_14814b4b6(void)

undefined8 FUN_14814b4b6(longlong param_1,longlong param_2)

{
  FUN_1447cd5a6(*(longlong *)(param_2 + 0x10) + 0x50,*(longlong *)(param_1 + 0x10) + 0x50);
  return 1;
}



// FUNCTION 14814b4da FUN_14814b4da body=58 status=ok
// SIG undefined FUN_14814b4da(void)

undefined8 FUN_14814b4da(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  iVar2 = *(int *)(lVar1 + 0x58);
  if (iVar2 == *(int *)(*(longlong *)(param_1 + 0x10) + 0x58)) {
    if (iVar2 == 0) {
      uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
    else {
      iVar2 = memcmp(*(void **)(lVar1 + 0x50),*(void **)(*(longlong *)(param_1 + 0x10) + 0x50),
                     (longlong)iVar2);
      uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),iVar2 == 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 14814b51a FUN_14814b51a body=145 status=ok
// SIG undefined FUN_14814b51a(void)

void FUN_14814b51a(longlong param_1,undefined8 *param_2,char *param_3)

{
  longlong lVar1;
  PSRWLOCK SRWLock;
  char *pcVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_3[1] == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (param_3 == (char *)0x0) {
      pcVar2 = (char *)(lVar1 + 0x50);
      SRWLock = (PSRWLOCK)0x0;
    }
    else {
      SRWLock = (PSRWLOCK)(param_3 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*param_3 == '\x01') {
        pcVar2 = param_3 + 0x10;
      }
      else {
        pcVar2 = (char *)(lVar1 + 0x50);
      }
    }
    *(undefined1 *)param_2 = 1;
    FUN_1447cd5a6(param_2 + 1,pcVar2);
    param_3[1] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014814b591. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared(SRWLock);
      return;
    }
  }
  return;
}



// FUNCTION 14814b654 FUN_14814b654 body=159 status=ok
// SIG undefined FUN_14814b654(void)

void FUN_14814b654(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    FUN_1400ee60a(*param_1 + 0x38,(longlong)param_1 + 0x2c);
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  }
  FUN_143a26960(param_1);
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[1] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 14814b6f4 FUN_14814b6f4 body=191 status=ok
// SIG undefined FUN_14814b6f4(void)

undefined8 *
FUN_14814b6f4(longlong *param_1,ulonglong *param_2,undefined8 param_3,undefined2 *param_4,
             undefined8 param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar5 + 0x5b;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x2e0);
    puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar5 + 0x5b;
  }
  *param_2 = (ulonglong)puVar3;
  uVar1 = *param_4;
  uVar4 = FUN_144a8221e();
  FUN_14814b7b4(puVar5,param_3,uVar4,uVar1,param_5);
  *puVar5 = &PTR_FUN_14adc0740;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_14470e57a(param_1,iVar2);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x2c) = (int)param_1[1] + -1;
  return puVar5;
}



// FUNCTION 14814b7b4 FUN_14814b7b4 body=144 status=ok
// SIG undefined FUN_14814b7b4(void)

undefined8 *
FUN_14814b7b4(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined *local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &DAT_14cb3ac60;
  local_28 = *(longlong *)(param_3 + 0x48);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  local_38 = 0;
  local_20 = param_3;
  FUN_140068f1a(param_1,param_2,&local_30);
  *param_1 = &PTR_FUN_14adc0760;
  FUN_14814b8b0(param_1 + 0x37,param_5);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814b846 FUN_14814b846 body=105 status=ok
// SIG undefined FUN_14814b846(void)

undefined8 * FUN_14814b846(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14adc0760;
  lVar1 = 0x2b0;
  do {
    if (*(char *)((longlong)param_1 + lVar1) == '\x01') {
      *(undefined1 *)((longlong)param_1 + lVar1) = 0;
    }
    lVar1 = lVar1 + -0x38;
  } while (lVar1 != 0x240);
  lVar1 = 0x240;
  do {
    if (*(char *)((longlong)param_1 + lVar1) == '\x01') {
      *(undefined1 *)((longlong)param_1 + lVar1) = 0;
    }
    lVar1 = lVar1 + -0x38;
  } while (lVar1 != 0x1d0);
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814b8b0 FUN_14814b8b0 body=258 status=ok
// SIG undefined FUN_14814b8b0(void)

void FUN_14814b8b0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong lVar7;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  bVar6 = false;
  lVar7 = 0;
  do {
    *(undefined4 *)(param_1 + lVar7 * 7 + 5) = *(undefined4 *)(param_2 + lVar7 * 7 + 5);
    param_1[lVar7 * 7 + 4] = param_2[lVar7 * 7 + 4];
    uVar3 = (param_2 + lVar7 * 7 + 6)[1];
    param_1[lVar7 * 7 + 6] = param_2[lVar7 * 7 + 6];
    (param_1 + lVar7 * 7 + 6)[1] = uVar3;
    param_1[lVar7 * 7 + 8] = param_2[lVar7 * 7 + 8];
    cVar1 = *(char *)(param_2 + lVar7 * 7 + 10);
    *(char *)(param_1 + lVar7 * 7 + 10) = cVar1;
    if (cVar1 == '\x01') {
      param_1[lVar7 * 7 + 9] = param_2[lVar7 * 7 + 9];
    }
    lVar7 = 1;
    bVar2 = !bVar6;
    bVar6 = true;
  } while (bVar2);
  bVar6 = false;
  lVar7 = 0;
  do {
    *(undefined4 *)(param_1 + lVar7 * 7 + 0x13) = *(undefined4 *)(param_2 + lVar7 * 7 + 0x13);
    param_1[lVar7 * 7 + 0x12] = param_2[lVar7 * 7 + 0x12];
    uVar3 = (param_2 + lVar7 * 7 + 0x14)[1];
    param_1[lVar7 * 7 + 0x14] = param_2[lVar7 * 7 + 0x14];
    (param_1 + lVar7 * 7 + 0x14)[1] = uVar3;
    param_1[lVar7 * 7 + 0x16] = param_2[lVar7 * 7 + 0x16];
    cVar1 = *(char *)(param_2 + lVar7 * 7 + 0x18);
    *(char *)(param_1 + lVar7 * 7 + 0x18) = cVar1;
    if (cVar1 == '\x01') {
      param_1[lVar7 * 7 + 0x17] = param_2[lVar7 * 7 + 0x17];
    }
    lVar7 = 1;
    bVar2 = !bVar6;
    bVar6 = true;
  } while (bVar2);
  uVar3 = param_2[0x20];
  uVar4 = param_2[0x21];
  uVar5 = param_2[0x23];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = uVar5;
  param_1[0x20] = uVar3;
  param_1[0x21] = uVar4;
  return;
}



// FUNCTION 14814b9b2 FUN_14814b9b2 body=105 status=ok
// SIG undefined FUN_14814b9b2(void)

undefined8 * FUN_14814b9b2(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14adc0760;
  lVar1 = 0x2b0;
  do {
    if (*(char *)((longlong)param_1 + lVar1) == '\x01') {
      *(undefined1 *)((longlong)param_1 + lVar1) = 0;
    }
    lVar1 = lVar1 + -0x38;
  } while (lVar1 != 0x240);
  lVar1 = 0x240;
  do {
    if (*(char *)((longlong)param_1 + lVar1) == '\x01') {
      *(undefined1 *)((longlong)param_1 + lVar1) = 0;
    }
    lVar1 = lVar1 + -0x38;
  } while (lVar1 != 0x1d0);
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814ba1c FUN_14814ba1c body=214 status=ok
// SIG undefined FUN_14814ba1c(void)

void FUN_14814ba1c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  undefined4 local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = param_1 + 0x20;
  local_70 = 2;
  FUN_144760590(param_2,&local_78,0);
  local_40 = *(undefined4 *)(param_1 + 0x100);
  uStack_3c = *(undefined4 *)(param_1 + 0x104);
  uStack_38 = *(undefined4 *)(param_1 + 0x108);
  uStack_34 = *(undefined4 *)(param_1 + 0x10c);
  local_30 = *(undefined8 *)(param_1 + 0x110);
  local_58 = 0;
  local_48 = &PTR_LAB_14adc0780;
  local_68 = FUN_14814baf4;
  local_80 = 2;
  local_88 = param_1;
  FUN_1481c8e40(*(undefined8 *)(param_1 + 0x118),param_2);
  local_98 = param_1 + 0x90;
  local_90 = 2;
  FUN_144760590(param_2,&local_98,0);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814baf4 FUN_14814baf4 body=62 status=ok
// SIG undefined FUN_14814baf4(void)

void FUN_14814baf4(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_14814bb84();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814bb66 FUN_14814bb66 body=29 status=ok
// SIG undefined FUN_14814bb66(void)

undefined8 FUN_14814bb66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814bb84 FUN_14814bb84 body=317 status=ok
// SIG undefined FUN_14814bb84(void)

void FUN_14814bb84(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = **(int **)*param_2;
  local_98 = 0;
  if (iVar1 < 1) {
    lVar9 = 0;
    iVar7 = 0;
    uVar8 = 0;
  }
  else {
    uStack_90._4_4_ = 0;
    uStack_90._0_4_ = iVar1;
    FUN_1401c3474(&local_98);
    lVar2 = *(longlong *)(*param_2 + 0x10);
    lVar6 = 0;
    do {
      *(uint *)(local_98 + lVar6 * 4) = -(uint)(*(char *)(lVar2 + lVar6) != '\0');
      lVar6 = lVar6 + 1;
      lVar9 = local_98;
      iVar7 = (int)uStack_90;
      uVar8 = uStack_90._4_4_;
    } while (iVar1 != (int)lVar6);
  }
  uVar3 = *param_1;
  local_98 = 0;
  uStack_90 = 0;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  local_88[0] = (code *)0x0;
  local_78 = (undefined8 *)FUN_14001cc68(0x30,8);
  *local_78 = &PTR_LAB_14adc07a0;
  local_78[1] = uVar3;
  local_78[2] = lVar9;
  *(int *)(local_78 + 3) = iVar7;
  *(undefined4 *)((longlong)local_78 + 0x1c) = uVar8;
  local_78[4] = uVar4;
  local_78[5] = uVar5;
  if (local_78 + 1 != (undefined8 *)0x0) {
    local_88[0] = FUN_14814bcc2;
  }
  FUN_1407461b0(1,local_88);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14814bcc2 FUN_14814bcc2 body=52 status=ok
// SIG undefined FUN_14814bcc2(void)

void FUN_14814bcc2(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 3);
  if (lVar1 == 0) {
    return;
  }
  FUN_14814bd58(param_1[4],*param_1,param_1 + 1);
  return;
}



// FUNCTION 14814bd00 FUN_14814bd00 body=29 status=ok
// SIG undefined FUN_14814bd00(void)

void FUN_14814bd00(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14814bd1e FUN_14814bd1e body=57 status=ok
// SIG undefined FUN_14814bd1e(void)

undefined8 * FUN_14814bd1e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14adc07a0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814bd58 FUN_14814bd58 body=216 status=ok
// SIG undefined FUN_14814bd58(void)

void FUN_14814bd58(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x60);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x18);
        if (*plVar1 == param_2) {
          if (plVar1 == (longlong *)0x0) {
            return;
          }
          pcVar2 = (char *)plVar1[1];
          if (pcVar2 == (char *)0x0) {
            return;
          }
          lVar4 = *(longlong *)(param_1 + 0x10);
          AcquireSRWLockExclusive((PSRWLOCK)(pcVar2 + 8));
          if (*pcVar2 == '\0') {
            *pcVar2 = '\x01';
            FUN_1447cd5a6(pcVar2 + 0x10,lVar4 + 0x50);
          }
          FUN_1447cd5a6(pcVar2 + 0x10,param_3);
          pcVar2[1] = pcVar2[1] | *(byte *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014814be29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ReleaseSRWLockExclusive((PSRWLOCK)(pcVar2 + 8));
          return;
        }
        iVar3 = (int)plVar1[2];
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 14814be30 FUN_14814be30 body=107 status=ok
// SIG undefined FUN_14814be30(void)

undefined8 * FUN_14814be30(undefined8 *param_1,longlong param_2,char *param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 != (char *)0x0) {
    *param_1 = (PSRWLOCK)(param_3 + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(param_3 + 8));
    if (*param_3 == '\x01') {
      FUN_1447cd5a6(param_2 + 0x50,param_3 + 0x10);
    }
    *param_3 = '\0';
    param_3[0x18] = '\0';
    param_3[0x19] = '\0';
    param_3[0x1a] = '\0';
    param_3[0x1b] = '\0';
    if (*(int *)(param_3 + 0x1c) != 0) {
      FUN_14475e67c(param_3 + 0x10,0);
    }
  }
  param_1[1] = param_2 + 0x50;
  return param_1;
}



// FUNCTION 14814be9c FUN_14814be9c body=1301 status=ok
// SIG undefined FUN_14814be9c(void)

void FUN_14814be9c(undefined8 param_1,longlong *param_2,undefined8 param_3)

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
  if (lVar1 == DAT_14cb3aa68) {
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
    ppuVar2 = &PTR_FUN_14adc07c0;
  }
  else if (lVar1 == DAT_14cb3aa70) {
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
    ppuVar2 = &PTR_FUN_14adc0830;
  }
  else if (lVar1 == DAT_14cb3aa78) {
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
    ppuVar2 = &PTR_FUN_14adc08a0;
  }
  else if (lVar1 == DAT_14cb3aa80) {
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
    ppuVar2 = &PTR_FUN_14adc0910;
  }
  else if (lVar1 == DAT_14cb3aa88) {
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
    ppuVar2 = &PTR_FUN_14adc0980;
  }
  else if (lVar1 == DAT_14cb3aa90) {
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
    ppuVar2 = &PTR_FUN_14adc09f0;
  }
  else if (lVar1 == DAT_14cb3aa98) {
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
    ppuVar2 = &PTR_FUN_14adc0a60;
  }
  else if (lVar1 == DAT_14cb3aaa0) {
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
    ppuVar2 = &PTR_FUN_14adc0ad0;
  }
  else {
    if (lVar1 != DAT_14cb3aaa8) goto LAB_14814bf4b;
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
    ppuVar2 = &PTR_FUN_14adc0b40;
  }
  local_28 = 2;
  *local_30 = ppuVar2;
  local_30[3] = param_1;
  FUN_144a450dc(param_3,&local_30);
  FUN_1449db362(&local_30);
LAB_14814bf4b:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814c3b2 FUN_14814c3b2 body=29 status=ok
// SIG undefined FUN_14814c3b2(void)

undefined8 FUN_14814c3b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814c3e4 FUN_14814c3e4 body=93 status=ok
// SIG undefined FUN_14814c3e4(void)

void FUN_14814c3e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc07c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814c442 FUN_14814c442 body=93 status=ok
// SIG undefined FUN_14814c442(void)

void FUN_14814c442(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc07c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814c4a0 FUN_14814c4a0 body=126 status=ok
// SIG undefined FUN_14814c4a0(void)

void FUN_14814c4a0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc07c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014814c50f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14814c528 FUN_14814c528 body=20 status=ok
// SIG undefined FUN_14814c528(void)

undefined1 FUN_14814c528(longlong param_1)

{
  FUN_14814c53c(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14814c53c FUN_14814c53c body=240 status=ok
// SIG undefined FUN_14814c53c(void)

void FUN_14814c53c(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  PSRWLOCK SRWLock;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  int local_40;
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14814c62e(local_38);
  FUN_144a76cd4(&local_48);
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (local_30 == (char *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_30 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*local_30 == '\x01') {
      local_30 = local_30 + 0x10;
      goto LAB_14814c5a6;
    }
  }
  local_30 = (char *)(lVar3 + 0x50);
LAB_14814c5a6:
  piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar4 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar4) {
    uVar2 = *(undefined4 *)(local_30 + 8);
    iVar5 = 0;
    do {
      puVar1 = local_48 + local_40;
      *local_48 = uVar2;
      iVar5 = iVar5 + 1;
      piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar4 = (int *)(param_2 + 0x3c);
      }
      local_48 = puVar1;
    } while (iVar5 < *piVar4);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14814c62e FUN_14814c62e body=148 status=ok
// SIG undefined FUN_14814c62e(void)

void FUN_14814c62e(int *param_1,char *param_2)

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



// FUNCTION 14814c6c2 FUN_14814c6c2 body=29 status=ok
// SIG undefined FUN_14814c6c2(void)

undefined8 FUN_14814c6c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814c6f4 FUN_14814c6f4 body=93 status=ok
// SIG undefined FUN_14814c6f4(void)

void FUN_14814c6f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0830;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814c752 FUN_14814c752 body=93 status=ok
// SIG undefined FUN_14814c752(void)

void FUN_14814c752(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0830;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814c7b0 FUN_14814c7b0 body=126 status=ok
// SIG undefined FUN_14814c7b0(void)

void FUN_14814c7b0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc0830;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014814c81f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14814c838 FUN_14814c838 body=20 status=ok
// SIG undefined FUN_14814c838(void)

undefined1 FUN_14814c838(longlong param_1)

{
  FUN_14814c84c(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14814c84c FUN_14814c84c body=312 status=ok
// SIG undefined FUN_14814c84c(void)

void FUN_14814c84c(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  PSRWLOCK SRWLock;
  int *piVar6;
  undefined1 auStack_88 [32];
  int *local_68;
  int local_60;
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14814c62e(local_38);
  local_58 = (int *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_2);
  FUN_140126e42(&local_68);
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (local_30 == (char *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_30 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*local_30 == '\x01') {
      local_30 = local_30 + 0x10;
      goto LAB_14814c8d0;
    }
  }
  local_30 = (char *)(lVar3 + 0x50);
LAB_14814c8d0:
  piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar4 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar4) {
    iVar2 = *(int *)(local_30 + 8);
    iVar5 = 0;
    do {
      piVar4 = local_58 + local_48;
      piVar1 = local_68 + local_60;
      *local_68 = -(uint)(*local_58 < iVar2 && -1 < *local_58);
      iVar5 = iVar5 + 1;
      piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar6 = (int *)(param_2 + 0x3c);
      }
      local_68 = piVar1;
      local_58 = piVar4;
    } while (iVar5 < *piVar6);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14814c986 FUN_14814c986 body=29 status=ok
// SIG undefined FUN_14814c986(void)

undefined8 FUN_14814c986(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814c9b8 FUN_14814c9b8 body=93 status=ok
// SIG undefined FUN_14814c9b8(void)

void FUN_14814c9b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc08a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814ca16 FUN_14814ca16 body=93 status=ok
// SIG undefined FUN_14814ca16(void)

void FUN_14814ca16(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc08a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814ca74 FUN_14814ca74 body=126 status=ok
// SIG undefined FUN_14814ca74(void)

void FUN_14814ca74(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc08a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014814cae3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14814cafc FUN_14814cafc body=20 status=ok
// SIG undefined FUN_14814cafc(void)

undefined1 FUN_14814cafc(longlong param_1)

{
  FUN_14814cb10(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14814cb10 FUN_14814cb10 body=242 status=ok
// SIG undefined FUN_14814cb10(void)

void FUN_14814cb10(longlong param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  PSRWLOCK SRWLock;
  int *piVar5;
  undefined1 auStack_68 [32];
  int *local_48;
  int local_40;
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14814c62e(local_38);
  FUN_144a76cd4(&local_48);
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (local_30 == (char *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_30 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*local_30 == '\x01') {
      local_30 = local_30 + 0x10;
      goto LAB_14814cb7a;
    }
  }
  local_30 = (char *)(lVar2 + 0x50);
LAB_14814cb7a:
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar1 = *(int *)(local_30 + 8);
    iVar4 = 0;
    do {
      piVar3 = local_48 + local_40;
      *local_48 = iVar1 + -1;
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      local_48 = piVar3;
    } while (iVar4 < *piVar5);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14814cc04 FUN_14814cc04 body=29 status=ok
// SIG undefined FUN_14814cc04(void)

undefined8 FUN_14814cc04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814cc36 FUN_14814cc36 body=93 status=ok
// SIG undefined FUN_14814cc36(void)

void FUN_14814cc36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0910;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814cc94 FUN_14814cc94 body=93 status=ok
// SIG undefined FUN_14814cc94(void)

void FUN_14814cc94(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0910;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814ccf2 FUN_14814ccf2 body=126 status=ok
// SIG undefined FUN_14814ccf2(void)

void FUN_14814ccf2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc0910;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014814cd61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14814cd7a FUN_14814cd7a body=20 status=ok
// SIG undefined FUN_14814cd7a(void)

undefined1 FUN_14814cd7a(longlong param_1)

{
  FUN_14814cd8e(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14814cd8e FUN_14814cd8e body=385 status=ok
// SIG undefined FUN_14814cd8e(void)

void FUN_14814cd8e(longlong param_1,char *param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  longlong *plVar7;
  PSRWLOCK SRWLock;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [32];
  int *local_68;
  int local_60;
  uint *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14814c62e(local_38);
  local_58 = (uint *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_2);
  FUN_140126e42(&local_68,param_2);
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (local_30 == (char *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_30 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*local_30 == '\x01') {
      plVar7 = (longlong *)(local_30 + 0x10);
      goto LAB_14814ce12;
    }
  }
  plVar7 = (longlong *)(lVar3 + 0x50);
LAB_14814ce12:
  piVar1 = (int *)(param_2 + 0x3c);
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = piVar1;
  }
  if ((int)plVar7[1] < 1) {
    if (0 < *piVar5) {
      iVar8 = 0;
      do {
        piVar5 = local_68 + local_60;
        *local_68 = 0;
        iVar8 = iVar8 + 1;
        piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar6 = piVar1;
        }
        local_68 = piVar5;
      } while (iVar8 < *piVar6);
    }
  }
  else if (0 < *piVar5) {
    uVar4 = (int)plVar7[1] - 1;
    iVar8 = 0;
    do {
      puVar2 = local_58 + local_48;
      uVar9 = *local_58;
      if ((int)uVar4 <= (int)*local_58) {
        uVar9 = uVar4;
      }
      uVar10 = (ulonglong)uVar9;
      if ((int)uVar9 < 1) {
        uVar10 = 0;
      }
      piVar5 = local_68 + local_60;
      *local_68 = -(uint)*(byte *)(*plVar7 + uVar10);
      iVar8 = iVar8 + 1;
      piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar6 = piVar1;
      }
      local_68 = piVar5;
      local_58 = puVar2;
    } while (iVar8 < *piVar6);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14814cf10 FUN_14814cf10 body=29 status=ok
// SIG undefined FUN_14814cf10(void)

undefined8 FUN_14814cf10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814cf42 FUN_14814cf42 body=93 status=ok
// SIG undefined FUN_14814cf42(void)

void FUN_14814cf42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0980;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814cfa0 FUN_14814cfa0 body=93 status=ok
// SIG undefined FUN_14814cfa0(void)

void FUN_14814cfa0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0980;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814cffe FUN_14814cffe body=126 status=ok
// SIG undefined FUN_14814cffe(void)

void FUN_14814cffe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc0980;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014814d06d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14814d086 FUN_14814d086 body=20 status=ok
// SIG undefined FUN_14814d086(void)

undefined1 FUN_14814d086(longlong param_1)

{
  FUN_14814d09a(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14814d09a FUN_14814d09a body=185 status=ok
// SIG undefined FUN_14814d09a(void)

void FUN_14814d09a(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  PSRWLOCK SRWLock;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14814c62e(local_38);
  pcVar2 = local_30;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (local_30 == (char *)0x0) {
    pcVar2 = (char *)(lVar1 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_30 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar2 == '\0') {
      *pcVar2 = '\x01';
      FUN_1447cd5a6(pcVar2 + 0x10,lVar1 + 0x50);
    }
    pcVar2 = pcVar2 + 0x10;
  }
  pcVar2[8] = '\0';
  pcVar2[9] = '\0';
  pcVar2[10] = '\0';
  pcVar2[0xb] = '\0';
  if (*(int *)(pcVar2 + 0xc) < 0) {
    FUN_14475e67c(pcVar2,0);
  }
  local_30[1] = local_30[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814d154 FUN_14814d154 body=29 status=ok
// SIG undefined FUN_14814d154(void)

undefined8 FUN_14814d154(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814d186 FUN_14814d186 body=93 status=ok
// SIG undefined FUN_14814d186(void)

void FUN_14814d186(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc09f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814d1e4 FUN_14814d1e4 body=93 status=ok
// SIG undefined FUN_14814d1e4(void)

void FUN_14814d1e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc09f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814d242 FUN_14814d242 body=126 status=ok
// SIG undefined FUN_14814d242(void)

void FUN_14814d242(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc09f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014814d2b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14814d2ca FUN_14814d2ca body=20 status=ok
// SIG undefined FUN_14814d2ca(void)

undefined1 FUN_14814d2ca(longlong param_1)

{
  FUN_14814d2de(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14814d2de FUN_14814d2de body=262 status=ok
// SIG undefined FUN_14814d2de(void)

void FUN_14814d2de(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  longlong *plVar4;
  PSRWLOCK SRWLock;
  longlong lVar5;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [8];
  char *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14814c62e(local_40);
  local_58 = (int *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_2);
  pcVar3 = local_38;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (local_38 == (char *)0x0) {
    plVar4 = (longlong *)(lVar2 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_38 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar3 == '\0') {
      *pcVar3 = '\x01';
      FUN_1447cd5a6(pcVar3 + 0x10,lVar2 + 0x50);
    }
    plVar4 = (longlong *)(pcVar3 + 0x10);
  }
  lVar2 = plVar4[1];
  lVar5 = (longlong)(int)lVar2;
  iVar1 = *local_58;
  local_58 = local_58 + local_48;
  FUN_144aa2a62(plVar4,iVar1,1);
  if ((int)lVar2 < iVar1) {
    do {
      *(undefined1 *)(*plVar4 + lVar5) = 0;
      lVar5 = lVar5 + 1;
    } while (iVar1 != lVar5);
  }
  local_38[1] = local_38[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814d3e6 FUN_14814d3e6 body=29 status=ok
// SIG undefined FUN_14814d3e6(void)

undefined8 FUN_14814d3e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814d418 FUN_14814d418 body=93 status=ok
// SIG undefined FUN_14814d418(void)

void FUN_14814d418(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0a60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814d476 FUN_14814d476 body=93 status=ok
// SIG undefined FUN_14814d476(void)

void FUN_14814d476(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0a60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814d4d4 FUN_14814d4d4 body=126 status=ok
// SIG undefined FUN_14814d4d4(void)

void FUN_14814d4d4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc0a60;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014814d543. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14814d55c FUN_14814d55c body=20 status=ok
// SIG undefined FUN_14814d55c(void)

undefined1 FUN_14814d55c(longlong param_1)

{
  FUN_14814d570(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14814d570 FUN_14814d570 body=449 status=ok
// SIG undefined FUN_14814d570(void)

void FUN_14814d570(longlong param_1,byte *param_2)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  longlong lVar7;
  PSRWLOCK SRWLock;
  int iVar8;
  byte *pbVar9;
  longlong *plVar10;
  undefined1 auStack_d8 [32];
  int *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  uint *local_98;
  undefined8 uStack_90;
  int local_88;
  int *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined1 local_60 [8];
  char *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14814c62e(local_60);
  local_68 = 0;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  FUN_144a76d88(&local_78,param_2);
  local_88 = 0;
  local_98 = (uint *)0x0;
  uStack_90 = 0;
  FUN_144a98d08(&local_98,param_2);
  local_a8 = 0;
  local_b8 = (int *)0x0;
  uStack_b0 = 0;
  FUN_144a76d88(&local_b8,param_2);
  pcVar5 = local_58;
  lVar7 = *(longlong *)(param_1 + 0x10);
  if (local_58 == (char *)0x0) {
    plVar10 = (longlong *)(lVar7 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_58 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar5 == '\0') {
      *pcVar5 = '\x01';
      FUN_1447cd5a6(pcVar5 + 0x10,lVar7 + 0x50);
    }
    plVar10 = (longlong *)(pcVar5 + 0x10);
  }
  bVar6 = *param_2;
  lVar7 = *(longlong *)(param_2 + 0x80);
  pbVar9 = (byte *)(lVar7 + 0x40);
  if (bVar6 != 0) {
    pbVar9 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar9) {
    iVar8 = 0;
    do {
      puVar1 = local_98 + local_88;
      uVar4 = *local_98;
      piVar2 = local_b8 + local_a8;
      piVar3 = local_78 + local_68;
      if ((-1 < (int)uVar4 && *local_78 == 0) && ((int)uVar4 < (int)plVar10[1])) {
        *(bool *)(*plVar10 + (ulonglong)uVar4) = *local_b8 != 0;
        bVar6 = *param_2;
        lVar7 = *(longlong *)(param_2 + 0x80);
      }
      iVar8 = iVar8 + 1;
      pbVar9 = (byte *)(lVar7 + 0x40);
      if ((bVar6 & 1) != 0) {
        pbVar9 = param_2 + 0x3c;
      }
      local_b8 = piVar2;
      local_98 = puVar1;
      local_78 = piVar3;
    } while (iVar8 < *(int *)pbVar9);
  }
  local_58[1] = local_58[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814d732 FUN_14814d732 body=29 status=ok
// SIG undefined FUN_14814d732(void)

undefined8 FUN_14814d732(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814d764 FUN_14814d764 body=93 status=ok
// SIG undefined FUN_14814d764(void)

void FUN_14814d764(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0ad0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814d7c2 FUN_14814d7c2 body=93 status=ok
// SIG undefined FUN_14814d7c2(void)

void FUN_14814d7c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0ad0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814d820 FUN_14814d820 body=126 status=ok
// SIG undefined FUN_14814d820(void)

void FUN_14814d820(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc0ad0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014814d88f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14814d8a8 FUN_14814d8a8 body=20 status=ok
// SIG undefined FUN_14814d8a8(void)

undefined1 FUN_14814d8a8(longlong param_1)

{
  FUN_14814d8bc(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14814d8bc FUN_14814d8bc body=432 status=ok
// SIG undefined FUN_14814d8bc(void)

void FUN_14814d8bc(longlong param_1,byte *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  longlong lVar7;
  byte *pbVar8;
  PSRWLOCK SRWLock;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  int *local_a8;
  undefined8 uStack_a0;
  int local_98;
  int *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined1 local_70 [8];
  char *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14814c62e(local_70);
  local_78 = 0;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  FUN_144a76d88(&local_88,param_2);
  local_98 = 0;
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  FUN_144a76d88(&local_a8,param_2);
  pcVar5 = local_68;
  lVar7 = *(longlong *)(param_1 + 0x10);
  iVar9 = 0x7fffffff;
  if (0 < *(int *)(lVar7 + 0x4c)) {
    iVar9 = *(int *)(lVar7 + 0x4c);
  }
  local_b0 = param_1;
  if (local_68 == (char *)0x0) {
    plVar11 = (longlong *)(lVar7 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_68 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar5 == '\0') {
      *pcVar5 = '\x01';
      FUN_1447cd5a6(pcVar5 + 0x10,lVar7 + 0x50);
    }
    plVar11 = (longlong *)(pcVar5 + 0x10);
  }
  bVar6 = *param_2;
  lVar7 = *(longlong *)(param_2 + 0x80);
  pbVar8 = (byte *)(lVar7 + 0x40);
  if (bVar6 != 0) {
    pbVar8 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar8) {
    iVar10 = 0;
    do {
      piVar1 = local_88 + local_78;
      iVar3 = *local_88;
      piVar2 = local_a8 + local_98;
      iVar4 = *local_a8;
      local_a8 = piVar2;
      local_88 = piVar1;
      if (iVar3 == 0) {
        iVar3 = (int)plVar11[1];
        if (iVar3 < iVar9) {
          *(uint *)(plVar11 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)plVar11 + 0xc) < iVar3 + 1U) {
            FUN_1401c3474(plVar11,iVar3);
          }
          *(bool *)(*plVar11 + (longlong)iVar3) = iVar4 != 0;
          bVar6 = *param_2;
          lVar7 = *(longlong *)(param_2 + 0x80);
        }
      }
      iVar10 = iVar10 + 1;
      pbVar8 = (byte *)(lVar7 + 0x40);
      if ((bVar6 & 1) != 0) {
        pbVar8 = param_2 + 0x3c;
      }
    } while (iVar10 < *(int *)pbVar8);
  }
  local_68[1] = local_68[1] | *(byte *)(local_b0 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14814da6e FUN_14814da6e body=29 status=ok
// SIG undefined FUN_14814da6e(void)

undefined8 FUN_14814da6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814daa0 FUN_14814daa0 body=93 status=ok
// SIG undefined FUN_14814daa0(void)

void FUN_14814daa0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0b40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814dafe FUN_14814dafe body=93 status=ok
// SIG undefined FUN_14814dafe(void)

void FUN_14814dafe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0b40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814db5c FUN_14814db5c body=126 status=ok
// SIG undefined FUN_14814db5c(void)

void FUN_14814db5c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc0b40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014814dbcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14814dbe4 FUN_14814dbe4 body=20 status=ok
// SIG undefined FUN_14814dbe4(void)

undefined1 FUN_14814dbe4(longlong param_1)

{
  FUN_14814dbf8(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14814dbf8 FUN_14814dbf8 body=454 status=ok
// SIG undefined FUN_14814dbf8(void)

void FUN_14814dbf8(longlong param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  int *piVar5;
  PSRWLOCK SRWLock;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  int local_90;
  int *local_88;
  int local_80;
  int *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined1 local_58 [8];
  char *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14814c62e(local_58);
  local_78 = (int *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_144a76d88(&local_78,param_2);
  FUN_140126e42(&local_88,param_2);
  FUN_140126e42(&local_98,param_2);
  pcVar4 = local_50;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (local_50 == (char *)0x0) {
    plVar7 = (longlong *)(lVar3 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_50 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar4 == '\0') {
      *pcVar4 = '\x01';
      FUN_1447cd5a6(pcVar4 + 0x10,lVar3 + 0x50);
    }
    plVar7 = (longlong *)(pcVar4 + 0x10);
  }
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar6 = 0;
    do {
      if (*local_78 == 0) {
        iVar2 = (int)plVar7[1];
        if ((longlong)iVar2 == 0) goto LAB_14814dcd6;
        bVar1 = *(byte *)(*plVar7 + -1 + (longlong)iVar2);
        *(int *)(plVar7 + 1) = iVar2 + -1;
        local_78 = local_78 + local_68;
        FUN_1403ed828(plVar7);
        *local_88 = -(uint)bVar1;
        *local_98 = 0xffffffff;
        local_98 = local_98 + local_90;
        local_88 = local_88 + local_80;
      }
      else {
LAB_14814dcd6:
        *local_88 = 0;
        *local_98 = 0;
        local_98 = local_98 + local_90;
        local_88 = local_88 + local_80;
        local_78 = local_78 + local_68;
      }
      iVar6 = iVar6 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
    } while (iVar6 < *piVar5);
  }
  local_50[1] = local_50[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14814ddc0 FUN_14814ddc0 body=958 status=ok
// SIG undefined FUN_14814ddc0(void)

void FUN_14814ddc0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined4 local_1e0;
  undefined8 *local_1d8;
  undefined4 local_1d0;
  undefined8 *local_1c8;
  undefined4 local_1c0;
  code *local_1b8;
  undefined8 local_1a8;
  undefined **local_198;
  longlong local_190;
  undefined4 *local_188;
  undefined1 local_180;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined1 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  undefined8 local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x78) != *(int *)(lVar4 + 0xa4)) {
    lVar1 = param_1[1];
    lVar7 = lVar4 + 0xa8;
    if (*(longlong *)(lVar4 + 0xb0) != 0) {
      lVar7 = *(longlong *)(lVar4 + 0xb0);
    }
    iVar5 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar4 + 0xb8) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      do {
        lVar7 = *(longlong *)(lVar4 + 0x70) + (longlong)iVar5 * 0x40;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x70) + (longlong)iVar5 * 0x40) == lVar1) {
          if (((lVar7 + 8U & 0xfffffffffffffff7) != 0) &&
             (iVar5 = *(int *)(lVar7 + 0x28), iVar5 != 0)) {
            lVar4 = param_1[2];
            iVar3 = (int)param_1[3];
            if (*(int *)(lVar4 + 0x40) <= iVar3) {
              FUN_1481287aa(lVar4 + 0x38,(iVar3 - *(int *)(lVar4 + 0x40)) + 1);
              lVar4 = param_1[2];
              iVar3 = (int)param_1[3];
              iVar5 = *(int *)(lVar7 + 0x28);
            }
            puVar8 = (undefined4 *)((longlong)iVar3 * 8 + *(longlong *)(lVar4 + 0x38));
            local_50 = 0;
            local_44 = 2;
            local_80 = 0;
            local_74 = 2;
            local_100 = 0;
            local_f4 = 2;
            iVar3 = *(int *)(lVar7 + 0x34);
            uVar6 = 1;
            local_48 = 1;
            local_160 = *(undefined8 *)(lVar7 + 0x10);
            local_68 = 0;
            local_150 = 0x400;
            if (iVar3 == -1) {
              local_150 = 0x10;
            }
            local_78 = 1;
            local_f0 = 0xffffffffffffffff;
            local_e8 = 0xffffffff;
            local_d8 = 2;
            local_d0 = 0x80;
            local_c0 = 0;
            local_f8 = 1;
            local_170 = 0xffffffffffffffff;
            local_168 = 0xffffffff;
            local_158 = 2;
            local_154 = 0x80;
            local_14c = 0;
            local_140 = 0;
            if (iVar3 != -1) {
              lVar4 = param_1[4];
              local_58 = iVar3 << 2;
              local_48 = 2;
              local_60 = *(undefined8 *)(lVar4 + 0x58);
              local_54 = 4;
              local_78 = 2;
              local_128 = *(undefined8 *)(lVar4 + 0x60);
              local_b8 = 0xffffffffffffffff;
              local_b0 = 0xffffffff;
              local_a0 = 3;
              local_9c = 0x80000000f0;
              local_94 = 0;
              local_88 = 0;
              local_f8 = 2;
              local_138 = 0xffffffffffffffff;
              local_130 = 0xffffffff;
              local_120 = 3;
              local_11c = 0xf000000080;
              local_114 = 0;
              local_108 = 0;
              uVar6 = 2;
              local_a8 = local_128;
            }
            else {
              *puVar8 = *(undefined4 *)(lVar7 + 0x30);
              lVar4 = param_1[4];
            }
            uVar2 = *(undefined8 *)(lVar4 + 0x28);
            local_1c8 = &local_f0;
            local_1c0 = uVar6;
            local_e0 = local_160;
            local_d4 = local_150;
            local_70 = local_160;
            local_64 = iVar5;
            FUN_144760590(param_2,&local_1c8,0);
            local_190 = param_1[2];
            local_180 = *(int *)(lVar7 + 0x34) == -1;
            local_1a8 = 0;
            local_198 = &PTR_LAB_14adc0bb0;
            local_1b8 = FUN_14814e180;
            local_1d8 = &local_70;
            local_1d0 = uVar6;
            local_188 = puVar8;
            FUN_1481c8e40(uVar2,param_2);
            local_1e8 = &local_170;
            local_1e0 = uVar6;
            FUN_144760590(param_2,&local_1e8,0);
            FUN_143a96774(uVar2,param_2);
            FUN_148128c50(&local_170);
            FUN_148128c50(&local_f0);
            if (local_50 != 0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        iVar5 = *(int *)(lVar7 + 0x38);
      } while (iVar5 != -1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14814e180 FUN_14814e180 body=62 status=ok
// SIG undefined FUN_14814e180(void)

void FUN_14814e180(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_14814e210();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814e1f2 FUN_14814e1f2 body=29 status=ok
// SIG undefined FUN_14814e1f2(void)

undefined8 FUN_14814e1f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814e210 FUN_14814e210 body=227 status=ok
// SIG undefined FUN_14814e210(void)

void FUN_14814e210(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 2) == '\0') {
    *(undefined4 *)param_1[1] = **(undefined4 **)(*param_2 + 0x10);
  }
  if (0 < (int)*(uint *)param_1[1]) {
    local_38 = 0;
    uStack_30 = (ulonglong)*(uint *)param_1[1];
    FUN_14814e2f4(&local_38);
    iVar1 = *(int *)param_1[1];
    if (iVar1 != 0) {
      lVar2 = *(longlong *)*param_2;
      lVar4 = 0;
      do {
        *(uint *)(local_38 + lVar4 * 4) = -(uint)(*(char *)(lVar2 + lVar4) != '\0');
        lVar4 = lVar4 + 1;
      } while (iVar1 != (int)lVar4);
    }
    local_40 = (int)uStack_30 << 2;
    local_48 = local_38;
    uVar3 = FUN_148119ae4(*param_1);
    *(undefined4 *)(param_1[1] + 4) = uVar3;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14814e2f4 FUN_14814e2f4 body=125 status=ok
// SIG undefined FUN_14814e2f4(void)

void FUN_14814e2f4(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 4;
    if (4 < uVar1) {
      uVar2 = (ulonglong)uVar1;
    }
  }
  else {
    uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar2 << 2,4);
  uVar3 = 0x7fffffff;
  if ((int)uVar1 <= (int)(uVar2 >> 2)) {
    uVar3 = uVar2 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  FUN_1446f8d3c(param_1,0,uVar3,4,4);
  return;
}



// FUNCTION 14814e382 FUN_14814e382 body=29 status=ok
// SIG undefined FUN_14814e382(void)

void FUN_14814e382(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14814e3a0 FUN_14814e3a0 body=29 status=ok
// SIG undefined FUN_14814e3a0(void)

undefined8 FUN_14814e3a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814e3be FUN_14814e3be body=105 status=ok
// SIG undefined FUN_14814e3be(void)

void FUN_14814e3be(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14814ddc0(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14814ddc0(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014814e41d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14814e428 FUN_14814e428 body=239 status=ok
// SIG undefined FUN_14814e428(void)

void FUN_14814e428(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_38 [32];
  longlong local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x78) != *(int *)(lVar1 + 0xa4)) {
    lVar2 = param_1[1];
    lVar4 = lVar1 + 0xa8;
    if (*(longlong *)(lVar1 + 0xb0) != 0) {
      lVar4 = *(longlong *)(lVar1 + 0xb0);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar1 + 0xb8) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(lVar1 + 0x70) + (longlong)iVar3 * 0x40;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x70) + (longlong)iVar3 * 0x40) == lVar2) {
          if (lVar4 + 8 != 0 && lVar4 != 0) {
            lVar1 = *(longlong *)(param_1[2] + 0x38);
            local_18 = (longlong)*(int *)(lVar1 + 4 + (longlong)(int)param_1[3] * 8) +
                       *(longlong *)(param_1[2] + 0x48);
            local_10 = *(undefined4 *)(lVar1 + (longlong)(int)param_1[3] * 8);
            FUN_143a26aee(lVar4 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x38);
      } while (iVar3 != -1);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14814e528 FUN_14814e528 body=29 status=ok
// SIG undefined FUN_14814e528(void)

void FUN_14814e528(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14814e546 FUN_14814e546 body=29 status=ok
// SIG undefined FUN_14814e546(void)

undefined8 FUN_14814e546(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814e564 FUN_14814e564 body=105 status=ok
// SIG undefined FUN_14814e564(void)

void FUN_14814e564(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14814e428(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14814e428(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014814e5c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14814e5ce FUN_14814e5ce body=306 status=ok
// SIG undefined FUN_14814e5ce(void)

undefined4 * FUN_14814e5ce(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14814e702(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar4 = FUN_14814e7e8(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14814e8da(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814e702 FUN_14814e702 body=230 status=ok
// SIG undefined FUN_14814e702(void)

int * FUN_14814e702(longlong *param_1,int *param_2)

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



// FUNCTION 14814e7e8 FUN_14814e7e8 body=128 status=ok
// SIG undefined FUN_14814e7e8(void)

undefined8 FUN_14814e7e8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14814e868((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14814e868 FUN_14814e868 body=114 status=ok
// SIG undefined FUN_14814e868(void)

void FUN_14814e868(longlong *param_1,int param_2)

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



// FUNCTION 14814e8da FUN_14814e8da body=447 status=ok
// SIG undefined FUN_14814e8da(void)

void FUN_14814e8da(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)((int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 14814ea9a FUN_14814ea9a body=34 status=ok
// SIG undefined FUN_14814ea9a(void)

ulonglong FUN_14814ea9a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1406f014a(*param_3);
  *(undefined1 *)*param_1 = uVar1;
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),*(undefined1 *)*param_1) ^ 1;
}



// FUNCTION 14814eae6 FUN_14814eae6 body=29 status=ok
// SIG undefined FUN_14814eae6(void)

undefined8 FUN_14814eae6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814eb04 FUN_14814eb04 body=180 status=ok
// SIG undefined FUN_14814eb04(void)

void FUN_14814eb04(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  local_38 = param_1 + 1;
  FUN_14814ebba(lVar2 + 0x70,&local_2c);
  lVar2 = *(longlong *)(lVar2 + 0x70);
  lVar6 = (longlong)local_2c * 0x40;
  cVar1 = *(char *)((longlong)param_1 + 0x1c);
  lVar4 = param_1[3];
  lVar3 = param_1[2];
  *(longlong *)(lVar2 + 8 + lVar6) = lVar3;
  *(undefined8 *)(lVar2 + 0x2c + lVar6) = 0xffffffff00000000;
  *(undefined4 *)(lVar2 + 0x34 + lVar6) = 0xffffffff;
  if (cVar1 == '\x01') {
    *(int *)(lVar2 + lVar6 + 0x2c) = (int)lVar4;
    uVar5 = FUN_1481c88ee(lVar3 + 0x38,param_2);
    *(undefined4 *)(lVar2 + lVar6 + 0x34) = uVar5;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814ebba FUN_14814ebba body=374 status=ok
// SIG undefined FUN_14814ebba(void)

undefined4 * FUN_14814ebba(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14814ed32(param_1,local_88);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  local_50 = 0xffffffffffffffff;
  *local_80 = *(undefined8 *)*param_3;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[5] = 0;
  local_80[6] = 0xffffffffffffffff;
  FUN_14814b654(&local_78);
  *(undefined4 *)(local_80 + 7) = 0xffffffff;
  local_78 = CONCAT44(local_78._4_4_,local_88[0]);
  uVar7 = (int)((ulonglong)*local_80 >> 0x20) * 0x17 + (int)*local_80;
  cVar2 = FUN_14814ee18(param_1,uVar7,local_80,&local_78);
  uVar1 = (undefined4)local_78;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_80 + 0x3c) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_80 + 7) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = (undefined4)local_78;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14814ef38(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814ed32 FUN_14814ed32 body=229 status=ok
// SIG undefined FUN_14814ed32(void)

int * FUN_14814ed32(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 14814ee18 FUN_14814ee18 body=174 status=ok
// SIG undefined FUN_14814ee18(void)

undefined8 FUN_14814ee18(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x40);
        if (*(longlong *)(*param_1 + (longlong)iVar15 * 0x40) == *param_3) {
          FUN_14814b654(puVar1 + 2);
          lVar8 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar9 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar10 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar11 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          lVar12 = param_3[4];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar13 = param_3[5];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x2c);
          *(longlong *)(puVar1 + 0xc) = param_3[6];
          puVar1[8] = (int)lVar12;
          puVar1[9] = uVar6;
          puVar1[10] = (int)lVar13;
          puVar1[0xb] = uVar7;
          puVar1[4] = (int)lVar10;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar11;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar8;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar9;
          puVar1[3] = uVar3;
          FUN_14814eec6(param_1,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = puVar1[0xe];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 14814eec6 FUN_14814eec6 body=114 status=ok
// SIG undefined FUN_14814eec6(void)

void FUN_14814eec6(longlong *param_1,int param_2)

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



// FUNCTION 14814ef38 FUN_14814ef38 body=450 status=ok
// SIG undefined FUN_14814ef38(void)

void FUN_14814ef38(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x40;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x3c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar7) =
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



// FUNCTION 14814f10c FUN_14814f10c body=29 status=ok
// SIG undefined FUN_14814f10c(void)

void FUN_14814f10c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14814f12a FUN_14814f12a body=29 status=ok
// SIG undefined FUN_14814f12a(void)

undefined8 FUN_14814f12a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814f148 FUN_14814f148 body=105 status=ok
// SIG undefined FUN_14814f148(void)

void FUN_14814f148(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14814eb04(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14814eb04(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014814f1a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14814f1b2 FUN_14814f1b2 body=102 status=ok
// SIG undefined FUN_14814f1b2(void)

void FUN_14814f1b2(longlong *param_1,longlong param_2)

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
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x40) == param_2) {
          FUN_14814f218(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x40 + *param_1 + 0x38);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14814f218 FUN_14814f218 body=123 status=ok
// SIG undefined FUN_14814f218(void)

void FUN_14814f218(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x40;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x3c + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x38 + lVar6 * 0x40);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x40 + 0x38);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x38);
  FUN_14814b654(*param_1 + lVar2 + 8);
  FUN_14814eec6(param_1,param_2);
  return;
}



// FUNCTION 14814f2b2 FUN_14814f2b2 body=12 status=ok
// SIG undefined FUN_14814f2b2(void)

void FUN_14814f2b2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014814f2bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14814f2be FUN_14814f2be body=29 status=ok
// SIG undefined FUN_14814f2be(void)

undefined8 FUN_14814f2be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814f2dc FUN_14814f2dc body=117 status=ok
// SIG undefined FUN_14814f2dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14814f2dc(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14814f1b2(_DAT_000000a8 + 0x70,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14814f1b2(param_1[0x15] + 0x70,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014814f347. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}


