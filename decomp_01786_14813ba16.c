// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14813ba16 FUN_14813ba16 body=93 status=ok
// SIG undefined FUN_14813ba16(void)

void FUN_14813ba16(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbef10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813ba74 FUN_14813ba74 body=126 status=ok
// SIG undefined FUN_14813ba74(void)

void FUN_14813ba74(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbef10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014813bae3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14813bafc FUN_14813bafc body=20 status=ok
// SIG undefined FUN_14813bafc(void)

undefined1 FUN_14813bafc(longlong param_1)

{
  FUN_14813bb10(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14813bb10 FUN_14813bb10 body=280 status=ok
// SIG undefined FUN_14813bb10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14813bb10(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  PSRWLOCK SRWLock;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [8];
  char *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14813ad3c(local_40);
  local_58 = (int *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_2);
  pcVar6 = local_38;
  lVar7 = *(longlong *)(param_1 + 0x10);
  if (local_38 == (char *)0x0) {
    plVar8 = (longlong *)(lVar7 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_38 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar6 == '\0') {
      *pcVar6 = '\x01';
      FUN_14785c646(pcVar6 + 0x10,lVar7 + 0x50);
    }
    plVar8 = (longlong *)(pcVar6 + 0x10);
  }
  iVar2 = (int)plVar8[1];
  iVar3 = *local_58;
  local_58 = local_58 + local_48;
  FUN_14813bc2a(plVar8,iVar3,1);
  uVar5 = _DAT_14c846348;
  uVar4 = ram0x00014c846340;
  if (iVar2 < iVar3) {
    local_68 = ram0x00014c846340;
    uStack_60 = _DAT_14c846348;
    lVar7 = (longlong)iVar3 - (longlong)iVar2;
    lVar9 = (longlong)iVar2 << 4;
    do {
      local_68._0_4_ = (undefined4)uVar4;
      local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_60._0_4_ = (undefined4)uVar5;
      uStack_60._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar1 = (undefined4 *)(*plVar8 + lVar9);
      *puVar1 = (undefined4)local_68;
      puVar1[1] = local_68._4_4_;
      puVar1[2] = (undefined4)uStack_60;
      puVar1[3] = uStack_60._4_4_;
      lVar9 = lVar9 + 0x10;
      lVar7 = lVar7 + -1;
      local_68 = uVar4;
      uStack_60 = uVar5;
    } while (lVar7 != 0);
  }
  local_38[1] = local_38[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14813bc2a FUN_14813bc2a body=78 status=ok
// SIG undefined FUN_14813bc2a(void)

void FUN_14813bc2a(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146ed4f5e();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146ed4fe4();
      return;
    }
  }
  return;
}



// FUNCTION 14813bc7a FUN_14813bc7a body=29 status=ok
// SIG undefined FUN_14813bc7a(void)

undefined8 FUN_14813bc7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813bcac FUN_14813bcac body=93 status=ok
// SIG undefined FUN_14813bcac(void)

void FUN_14813bcac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbef80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813bd0a FUN_14813bd0a body=93 status=ok
// SIG undefined FUN_14813bd0a(void)

void FUN_14813bd0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbef80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813bd68 FUN_14813bd68 body=126 status=ok
// SIG undefined FUN_14813bd68(void)

void FUN_14813bd68(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbef80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014813bdd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14813bdf0 FUN_14813bdf0 body=20 status=ok
// SIG undefined FUN_14813bdf0(void)

undefined1 FUN_14813bdf0(longlong param_1)

{
  FUN_14813be04(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14813be04 FUN_14813be04 body=635 status=ok
// SIG undefined FUN_14813be04(void)

void FUN_14813be04(longlong param_1,byte *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  char *pcVar11;
  byte bVar12;
  int iVar13;
  byte *pbVar14;
  PSRWLOCK SRWLock;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  undefined8 uStack_f0;
  int local_e8;
  undefined4 *local_e0;
  undefined8 uStack_d8;
  int local_d0;
  undefined4 *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  undefined4 *local_b0;
  undefined8 uStack_a8;
  int local_a0;
  uint *local_98;
  undefined8 uStack_90;
  int local_88;
  int *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined1 local_60 [8];
  char *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14813ad3c(local_60);
  local_68 = 0;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  FUN_144a76d88(&local_78,param_2);
  local_88 = 0;
  local_98 = (uint *)0x0;
  uStack_90 = 0;
  FUN_144a98d08(&local_98,param_2);
  local_e8 = 0;
  local_f8 = (undefined4 *)0x0;
  uStack_f0 = 0;
  FUN_144a98dce(&local_f8,param_2);
  local_d0 = 0;
  local_e0 = (undefined4 *)0x0;
  uStack_d8 = 0;
  FUN_144a98dce(&local_e0,param_2);
  local_b8 = 0;
  local_c8 = (undefined4 *)0x0;
  uStack_c0 = 0;
  FUN_144a98dce(&local_c8,param_2);
  local_a0 = 0;
  local_b0 = (undefined4 *)0x0;
  uStack_a8 = 0;
  FUN_144a98dce(&local_b0,param_2);
  pcVar11 = local_58;
  lVar15 = *(longlong *)(param_1 + 0x10);
  if (local_58 == (char *)0x0) {
    plVar17 = (longlong *)(lVar15 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_58 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar11 == '\0') {
      *pcVar11 = '\x01';
      FUN_14785c646(pcVar11 + 0x10,lVar15 + 0x50);
    }
    plVar17 = (longlong *)(pcVar11 + 0x10);
  }
  bVar12 = *param_2;
  lVar15 = *(longlong *)(param_2 + 0x80);
  pbVar14 = (byte *)(lVar15 + 0x40);
  if (bVar12 != 0) {
    pbVar14 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar14) {
    iVar13 = 0;
    do {
      puVar1 = local_98 + local_88;
      uVar10 = *local_98;
      puVar2 = local_b0 + local_a0;
      uVar7 = *local_b0;
      puVar3 = local_c8 + local_b8;
      uVar8 = *local_c8;
      puVar4 = local_e0 + local_d0;
      uVar9 = *local_e0;
      puVar5 = local_f8 + local_e8;
      piVar6 = local_78 + local_68;
      if ((-1 < (int)uVar10 && *local_78 == 0) && ((int)uVar10 < (int)plVar17[1])) {
        lVar15 = *plVar17;
        lVar16 = (ulonglong)uVar10 * 0x10;
        *(undefined4 *)(lVar15 + lVar16) = *local_f8;
        *(undefined4 *)(lVar15 + 4 + lVar16) = uVar9;
        *(undefined4 *)(lVar15 + 8 + lVar16) = uVar8;
        *(undefined4 *)(lVar15 + 0xc + lVar16) = uVar7;
        bVar12 = *param_2;
        lVar15 = *(longlong *)(param_2 + 0x80);
      }
      iVar13 = iVar13 + 1;
      pbVar14 = (byte *)(lVar15 + 0x40);
      if ((bVar12 & 1) != 0) {
        pbVar14 = param_2 + 0x3c;
      }
      local_f8 = puVar5;
      local_e0 = puVar4;
      local_c8 = puVar3;
      local_b0 = puVar2;
      local_98 = puVar1;
      local_78 = piVar6;
    } while (iVar13 < *(int *)pbVar14);
  }
  local_58[1] = local_58[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14813c080 FUN_14813c080 body=29 status=ok
// SIG undefined FUN_14813c080(void)

undefined8 FUN_14813c080(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813c0b2 FUN_14813c0b2 body=93 status=ok
// SIG undefined FUN_14813c0b2(void)

void FUN_14813c0b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbeff0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813c110 FUN_14813c110 body=93 status=ok
// SIG undefined FUN_14813c110(void)

void FUN_14813c110(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbeff0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813c16e FUN_14813c16e body=126 status=ok
// SIG undefined FUN_14813c16e(void)

void FUN_14813c16e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbeff0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014813c1dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14813c1f6 FUN_14813c1f6 body=20 status=ok
// SIG undefined FUN_14813c1f6(void)

undefined1 FUN_14813c1f6(longlong param_1)

{
  FUN_14813c20a(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14813c20a FUN_14813c20a body=668 status=ok
// SIG undefined FUN_14813c20a(void)

void FUN_14813c20a(longlong param_1,byte *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  byte bVar12;
  longlong lVar13;
  byte *pbVar14;
  PSRWLOCK SRWLock;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined8 uStack_110;
  int local_108;
  undefined4 *local_100;
  undefined8 uStack_f8;
  int local_f0;
  undefined4 *local_e8;
  undefined8 uStack_e0;
  int local_d8;
  undefined4 *local_d0;
  undefined8 uStack_c8;
  int local_c0;
  int *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  undefined1 local_a0 [8];
  char *local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_14813ad3c(local_a0);
  local_a8 = 0;
  local_b8 = (int *)0x0;
  uStack_b0 = 0;
  FUN_144a76d88(&local_b8,param_2);
  local_108 = 0;
  local_118 = (undefined4 *)0x0;
  uStack_110 = 0;
  FUN_144a98dce(&local_118,param_2);
  local_f0 = 0;
  local_100 = (undefined4 *)0x0;
  uStack_f8 = 0;
  FUN_144a98dce(&local_100,param_2);
  local_d8 = 0;
  local_e8 = (undefined4 *)0x0;
  uStack_e0 = 0;
  FUN_144a98dce(&local_e8,param_2);
  local_c0 = 0;
  local_d0 = (undefined4 *)0x0;
  uStack_c8 = 0;
  FUN_144a98dce(&local_d0,param_2);
  pcVar10 = local_98;
  lVar13 = *(longlong *)(param_1 + 0x10);
  iVar15 = 0x7fffffff;
  if (0 < *(int *)(lVar13 + 0x4c)) {
    iVar15 = *(int *)(lVar13 + 0x4c);
  }
  if (local_98 == (char *)0x0) {
    plVar17 = (longlong *)(lVar13 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_98 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar10 == '\0') {
      *pcVar10 = '\x01';
      FUN_14785c646(pcVar10 + 0x10,lVar13 + 0x50);
    }
    plVar17 = (longlong *)(pcVar10 + 0x10);
  }
  bVar12 = *param_2;
  lVar13 = *(longlong *)(param_2 + 0x80);
  pbVar14 = (byte *)(lVar13 + 0x40);
  if (bVar12 != 0) {
    pbVar14 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar14) {
    iVar16 = 0;
    do {
      piVar1 = local_b8 + local_a8;
      iVar9 = *local_b8;
      puVar2 = local_d0 + local_c0;
      uVar5 = *local_d0;
      puVar3 = local_e8 + local_d8;
      uVar6 = *local_e8;
      puVar4 = local_100 + local_f0;
      uVar7 = *local_100;
      puVar11 = local_118 + local_108;
      local_100 = puVar4;
      local_e8 = puVar3;
      local_d0 = puVar2;
      local_b8 = piVar1;
      if (iVar9 == 0) {
        iVar9 = (int)plVar17[1];
        if (iVar9 < iVar15) {
          uVar8 = *local_118;
          *(uint *)(plVar17 + 1) = iVar9 + 1U;
          local_118 = puVar11;
          if (*(uint *)((longlong)plVar17 + 0xc) < iVar9 + 1U) {
            FUN_146ed4f5e(plVar17,iVar9);
          }
          lVar13 = *plVar17;
          lVar18 = (longlong)iVar9 * 0x10;
          *(undefined4 *)(lVar13 + lVar18) = uVar8;
          *(undefined4 *)(lVar13 + 4 + lVar18) = uVar7;
          *(undefined4 *)(lVar13 + 8 + lVar18) = uVar6;
          *(undefined4 *)(lVar13 + 0xc + lVar18) = uVar5;
          bVar12 = *param_2;
          lVar13 = *(longlong *)(param_2 + 0x80);
          puVar11 = local_118;
        }
      }
      local_118 = puVar11;
      iVar16 = iVar16 + 1;
      pbVar14 = (byte *)(lVar13 + 0x40);
      if ((bVar12 & 1) != 0) {
        pbVar14 = param_2 + 0x3c;
      }
    } while (iVar16 < *(int *)pbVar14);
  }
  local_98[1] = local_98[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14813c4a8 FUN_14813c4a8 body=29 status=ok
// SIG undefined FUN_14813c4a8(void)

undefined8 FUN_14813c4a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813c4da FUN_14813c4da body=93 status=ok
// SIG undefined FUN_14813c4da(void)

void FUN_14813c4da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbf060;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813c538 FUN_14813c538 body=93 status=ok
// SIG undefined FUN_14813c538(void)

void FUN_14813c538(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbf060;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813c596 FUN_14813c596 body=126 status=ok
// SIG undefined FUN_14813c596(void)

void FUN_14813c596(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbf060;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014813c605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14813c61e FUN_14813c61e body=20 status=ok
// SIG undefined FUN_14813c61e(void)

undefined1 FUN_14813c61e(longlong param_1)

{
  FUN_14813c632(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14813c632 FUN_14813c632 body=875 status=ok
// SIG undefined FUN_14813c632(void)

void FUN_14813c632(longlong param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  int *piVar12;
  longlong lVar13;
  PSRWLOCK SRWLock;
  int iVar14;
  longlong *plVar15;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  int local_130;
  undefined4 *local_128;
  int local_120;
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
  char *local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_14813ad3c(local_d0);
  local_e8 = (int *)0x0;
  uStack_e0 = 0;
  local_d8 = 0;
  FUN_144a76d88(&local_e8,param_2);
  FUN_144a76c20(&local_128,param_2);
  FUN_144a76c20(&local_118,param_2);
  FUN_144a76c20(&local_108,param_2);
  FUN_144a76c20(&local_f8,param_2);
  FUN_140126e42(&local_138,param_2);
  pcVar11 = local_c8;
  uVar10 = DAT_14c84634c;
  uVar9 = DAT_14c846348;
  uVar8 = DAT_14c846344;
  uVar7 = DAT_14c84633c._4_4_;
  lVar6 = *(longlong *)(param_1 + 0x10);
  if (local_c8 == (char *)0x0) {
    plVar15 = (longlong *)(lVar6 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_c8 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar11 == '\0') {
      *pcVar11 = '\x01';
      FUN_14785c646(pcVar11 + 0x10,lVar6 + 0x50);
    }
    plVar15 = (longlong *)(pcVar11 + 0x10);
  }
  piVar12 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar12 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar12) {
    iVar14 = 0;
    do {
      if (*local_e8 == 0) {
        iVar5 = (int)plVar15[1];
        if ((longlong)iVar5 == 0) goto LAB_14813c7a1;
        lVar6 = *plVar15;
        lVar13 = (longlong)iVar5 * 0x10;
        uVar1 = *(undefined4 *)(lVar6 + -0x10 + lVar13);
        uVar2 = *(undefined4 *)(lVar6 + -0xc + lVar13);
        uVar3 = *(undefined4 *)(lVar6 + -8 + lVar13);
        uVar4 = *(undefined4 *)(lVar6 + -4 + lVar13);
        *(int *)(plVar15 + 1) = iVar5 + -1;
        local_e8 = local_e8 + local_d8;
        FUN_146ed4fe4(plVar15);
        *local_128 = uVar1;
        *local_118 = uVar2;
        *local_108 = uVar3;
        *local_f8 = uVar4;
        *local_138 = 0xffffffff;
        local_138 = local_138 + local_130;
        local_128 = local_128 + local_120;
        local_118 = local_118 + local_110;
        local_108 = local_108 + local_100;
        local_f8 = local_f8 + local_f0;
      }
      else {
LAB_14813c7a1:
        *local_128 = uVar7;
        *local_118 = uVar8;
        *local_108 = uVar9;
        *local_f8 = uVar10;
        *local_138 = 0;
        local_138 = local_138 + local_130;
        local_128 = local_128 + local_120;
        local_118 = local_118 + local_110;
        local_108 = local_108 + local_100;
        local_f8 = local_f8 + local_f0;
        local_e8 = local_e8 + local_d8;
      }
      iVar14 = iVar14 + 1;
      piVar12 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar12 = (int *)(param_2 + 0x3c);
      }
    } while (iVar14 < *piVar12);
  }
  local_c8[1] = local_c8[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_c0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14813c99e FUN_14813c99e body=958 status=ok
// SIG undefined FUN_14813c99e(void)

void FUN_14813c99e(longlong *param_1,undefined8 param_2)

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
            local_198 = &PTR_LAB_14adbf0d0;
            local_1b8 = FUN_14813cd5e;
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



// FUNCTION 14813cd5e FUN_14813cd5e body=62 status=ok
// SIG undefined FUN_14813cd5e(void)

void FUN_14813cd5e(undefined8 param_1,undefined4 *param_2)

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
  FUN_14813cdee();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14813cdd0 FUN_14813cdd0 body=29 status=ok
// SIG undefined FUN_14813cdd0(void)

undefined8 FUN_14813cdd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813cdee FUN_14813cdee body=191 status=ok
// SIG undefined FUN_14813cdee(void)

void FUN_14813cdee(undefined8 *param_1,longlong *param_2)

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
    FUN_146ed4f5e(&local_38,0);
    memcpy(local_38,*(void **)*param_2,(longlong)*(int *)param_1[1] << 4);
    local_40 = (int)uStack_30 << 4;
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



// FUNCTION 14813cebe FUN_14813cebe body=29 status=ok
// SIG undefined FUN_14813cebe(void)

void FUN_14813cebe(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14813cedc FUN_14813cedc body=29 status=ok
// SIG undefined FUN_14813cedc(void)

undefined8 FUN_14813cedc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813cefa FUN_14813cefa body=105 status=ok
// SIG undefined FUN_14813cefa(void)

void FUN_14813cefa(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14813c99e(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14813c99e(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014813cf59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14813cf64 FUN_14813cf64 body=239 status=ok
// SIG undefined FUN_14813cf64(void)

void FUN_14813cf64(longlong *param_1)

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
            FUN_143a1c09e(lVar4 + 8);
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



// FUNCTION 14813d064 FUN_14813d064 body=29 status=ok
// SIG undefined FUN_14813d064(void)

void FUN_14813d064(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14813d082 FUN_14813d082 body=29 status=ok
// SIG undefined FUN_14813d082(void)

undefined8 FUN_14813d082(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813d0a0 FUN_14813d0a0 body=105 status=ok
// SIG undefined FUN_14813d0a0(void)

void FUN_14813d0a0(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14813cf64(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14813cf64(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014813d0ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14813d13e FUN_14813d13e body=306 status=ok
// SIG undefined FUN_14813d13e(void)

undefined4 * FUN_14813d13e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14813d272(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar4 = FUN_14813d358(param_1,uVar9,local_40,&local_4c);
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
      FUN_14813d44a(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14813d272 FUN_14813d272 body=230 status=ok
// SIG undefined FUN_14813d272(void)

int * FUN_14813d272(longlong *param_1,int *param_2)

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



// FUNCTION 14813d358 FUN_14813d358 body=128 status=ok
// SIG undefined FUN_14813d358(void)

undefined8 FUN_14813d358(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14813d3d8((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14813d3d8 FUN_14813d3d8 body=114 status=ok
// SIG undefined FUN_14813d3d8(void)

void FUN_14813d3d8(longlong *param_1,int param_2)

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



// FUNCTION 14813d44a FUN_14813d44a body=447 status=ok
// SIG undefined FUN_14813d44a(void)

void FUN_14813d44a(longlong *param_1)

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



// FUNCTION 14813d60a FUN_14813d60a body=34 status=ok
// SIG undefined FUN_14813d60a(void)

ulonglong FUN_14813d60a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1406f014a(*param_3);
  *(undefined1 *)*param_1 = uVar1;
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),*(undefined1 *)*param_1) ^ 1;
}



// FUNCTION 14813d656 FUN_14813d656 body=29 status=ok
// SIG undefined FUN_14813d656(void)

undefined8 FUN_14813d656(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813d674 FUN_14813d674 body=180 status=ok
// SIG undefined FUN_14813d674(void)

void FUN_14813d674(longlong *param_1,undefined8 param_2)

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
  FUN_14813d72a(lVar2 + 0x70,&local_2c);
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



// FUNCTION 14813d72a FUN_14813d72a body=374 status=ok
// SIG undefined FUN_14813d72a(void)

undefined4 * FUN_14813d72a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14813d8a2(param_1,local_88);
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
  FUN_148139d72(&local_78);
  *(undefined4 *)(local_80 + 7) = 0xffffffff;
  local_78 = CONCAT44(local_78._4_4_,local_88[0]);
  uVar7 = (int)((ulonglong)*local_80 >> 0x20) * 0x17 + (int)*local_80;
  cVar2 = FUN_14813d988(param_1,uVar7,local_80,&local_78);
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
      FUN_14813daa8(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14813d8a2 FUN_14813d8a2 body=229 status=ok
// SIG undefined FUN_14813d8a2(void)

int * FUN_14813d8a2(longlong *param_1,int *param_2)

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



// FUNCTION 14813d988 FUN_14813d988 body=174 status=ok
// SIG undefined FUN_14813d988(void)

undefined8 FUN_14813d988(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_148139d72(puVar1 + 2);
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
          FUN_14813da36(param_1,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = puVar1[0xe];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 14813da36 FUN_14813da36 body=114 status=ok
// SIG undefined FUN_14813da36(void)

void FUN_14813da36(longlong *param_1,int param_2)

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



// FUNCTION 14813daa8 FUN_14813daa8 body=450 status=ok
// SIG undefined FUN_14813daa8(void)

void FUN_14813daa8(longlong *param_1)

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



// FUNCTION 14813dc7c FUN_14813dc7c body=29 status=ok
// SIG undefined FUN_14813dc7c(void)

void FUN_14813dc7c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14813dc9a FUN_14813dc9a body=29 status=ok
// SIG undefined FUN_14813dc9a(void)

undefined8 FUN_14813dc9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813dcb8 FUN_14813dcb8 body=105 status=ok
// SIG undefined FUN_14813dcb8(void)

void FUN_14813dcb8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14813d674(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14813d674(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014813dd17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14813dd22 FUN_14813dd22 body=102 status=ok
// SIG undefined FUN_14813dd22(void)

void FUN_14813dd22(longlong *param_1,longlong param_2)

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
          FUN_14813dd88(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x40 + *param_1 + 0x38);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14813dd88 FUN_14813dd88 body=123 status=ok
// SIG undefined FUN_14813dd88(void)

void FUN_14813dd88(longlong *param_1,int param_2)

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
  FUN_148139d72(*param_1 + lVar2 + 8);
  FUN_14813da36(param_1,param_2);
  return;
}



// FUNCTION 14813de22 FUN_14813de22 body=12 status=ok
// SIG undefined FUN_14813de22(void)

void FUN_14813de22(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014813de2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14813de2e FUN_14813de2e body=29 status=ok
// SIG undefined FUN_14813de2e(void)

undefined8 FUN_14813de2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813de4c FUN_14813de4c body=117 status=ok
// SIG undefined FUN_14813de4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14813de4c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14813dd22(_DAT_000000a8 + 0x70,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14813dd22(param_1[0x15] + 0x70,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014813deb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14813dec2 FUN_14813dec2 body=102 status=ok
// SIG undefined FUN_14813dec2(void)

void FUN_14813dec2(longlong *param_1,longlong param_2)

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
          FUN_14813df28(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14813df28 FUN_14813df28 body=87 status=ok
// SIG undefined FUN_14813df28(void)

void FUN_14813df28(longlong *param_1,int param_2)

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
  FUN_14813d3d8();
  return;
}



// FUNCTION 14813df86 FUN_14813df86 body=251 status=ok
// SIG undefined FUN_14813df86(void)

void FUN_14813df86(longlong param_1,char *param_2,longlong *param_3)

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
            FUN_143a1ecfc(lVar3 + 8,&DAT_14ca85100);
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



// FUNCTION 14813e090 FUN_14813e090 body=221 status=ok
// SIG undefined FUN_14813e090(void)

void FUN_14813e090(longlong param_1,longlong param_2)

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



// FUNCTION 14813e16e FUN_14813e16e body=54 status=ok
// SIG undefined FUN_14813e16e(void)

void FUN_14813e16e(undefined8 param_1,undefined1 param_2,undefined8 param_3,longlong *param_4)

{
  FUN_14813ec44(param_1,param_2,param_4);
  if ((longlong *)*param_4 == (longlong *)0x0 || (int)param_4[1] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014813e1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_4 + 0x30))();
  return;
}



// FUNCTION 14813e202 FUN_14813e202 body=135 status=ok
// SIG undefined FUN_14813e202(void)

undefined8 *
FUN_14813e202(undefined8 param_1,undefined8 *param_2,longlong param_3,int *param_4,int param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_5 < *param_4) {
    lVar3 = (longlong)param_4[1] + *(longlong *)(param_3 + 0x48);
    lVar2 = (longlong)param_5 * 0x40;
    puVar1 = (undefined4 *)(lVar2 + lVar3);
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar3);
    local_48 = *puVar1;
    uStack_44 = puVar1[1];
    uStack_40 = puVar1[2];
    uStack_3c = puVar1[3];
    puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar3);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar3);
    local_28 = *puVar1;
    uStack_24 = puVar1[1];
    uStack_20 = puVar1[2];
    uStack_1c = puVar1[3];
    FUN_148142394(&local_58,param_2);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14813e28a FUN_14813e28a body=35 status=ok
// SIG undefined FUN_14813e28a(void)

undefined8 FUN_14813e28a(longlong param_1,longlong param_2)

{
  FUN_140491812(*(longlong *)(param_2 + 0x10) + 0x50,*(longlong *)(param_1 + 0x10) + 0x50);
  return 1;
}



// FUNCTION 14813e2d6 FUN_14813e2d6 body=145 status=ok
// SIG undefined FUN_14813e2d6(void)

void FUN_14813e2d6(longlong param_1,undefined8 *param_2,char *param_3)

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
    FUN_140491812(param_2 + 1,pcVar2);
    param_3[1] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014813e34d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared(SRWLock);
      return;
    }
  }
  return;
}



// FUNCTION 14813e410 FUN_14813e410 body=159 status=ok
// SIG undefined FUN_14813e410(void)

void FUN_14813e410(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    FUN_1400ee60a(*param_1 + 0x38,(longlong)param_1 + 0x2c);
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  }
  FUN_143a1eb6e(param_1);
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



// FUNCTION 14813e4b0 FUN_14813e4b0 body=191 status=ok
// SIG undefined FUN_14813e4b0(void)

undefined8 *
FUN_14813e4b0(longlong *param_1,ulonglong *param_2,undefined8 param_3,undefined2 *param_4,
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
  FUN_14813e570(puVar5,param_3,uVar4,uVar1,param_5);
  *puVar5 = &PTR_FUN_14adbf2c0;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_14470e57a(param_1,iVar2);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x2c) = (int)param_1[1] + -1;
  return puVar5;
}



// FUNCTION 14813e570 FUN_14813e570 body=144 status=ok
// SIG undefined FUN_14813e570(void)

undefined8 *
FUN_14813e570(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined *local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &DAT_14cb3ac30;
  local_28 = *(longlong *)(param_3 + 0x48);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  local_38 = 0;
  local_20 = param_3;
  FUN_140068f1a(param_1,param_2,&local_30);
  *param_1 = &PTR_FUN_14adbf2e0;
  FUN_14813e66c(param_1 + 0x37,param_5);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14813e602 FUN_14813e602 body=105 status=ok
// SIG undefined FUN_14813e602(void)

undefined8 * FUN_14813e602(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14adbf2e0;
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



// FUNCTION 14813e66c FUN_14813e66c body=258 status=ok
// SIG undefined FUN_14813e66c(void)

void FUN_14813e66c(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 14813e76e FUN_14813e76e body=105 status=ok
// SIG undefined FUN_14813e76e(void)

undefined8 * FUN_14813e76e(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14adbf2e0;
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



// FUNCTION 14813e7d8 FUN_14813e7d8 body=214 status=ok
// SIG undefined FUN_14813e7d8(void)

void FUN_14813e7d8(longlong param_1,undefined8 param_2)

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
  local_48 = &PTR_LAB_14adbf300;
  local_68 = FUN_14813e8b0;
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



// FUNCTION 14813e8b0 FUN_14813e8b0 body=62 status=ok
// SIG undefined FUN_14813e8b0(void)

void FUN_14813e8b0(undefined8 param_1,undefined4 *param_2)

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
  FUN_14813e940();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14813e922 FUN_14813e922 body=29 status=ok
// SIG undefined FUN_14813e922(void)

undefined8 FUN_14813e922(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813e940 FUN_14813e940 body=297 status=ok
// SIG undefined FUN_14813e940(void)

void FUN_14813e940(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined1 auStack_b8 [32];
  void *local_98;
  undefined8 uStack_90;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uStack_90._0_4_ = **(int **)*param_2;
  lVar5 = (longlong)(int)uStack_90;
  local_98 = (void *)0x0;
  if (lVar5 < 1) {
    uVar6 = 0;
    iVar4 = 0;
    pvVar7 = (void *)0x0;
  }
  else {
    uStack_90._4_4_ = 0;
    FUN_140491d2e(&local_98,0);
    memcpy(local_98,*(void **)(*param_2 + 0x10),lVar5 << 6);
    pvVar7 = local_98;
    iVar4 = (int)uStack_90;
    uVar6 = uStack_90._4_4_;
  }
  uVar1 = *param_1;
  local_98 = (void *)0x0;
  uStack_90 = 0;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  local_88[0] = (code *)0x0;
  local_78 = (undefined8 *)FUN_14001cc68(0x30,8);
  *local_78 = &PTR_LAB_14adbf320;
  local_78[1] = uVar1;
  local_78[2] = pvVar7;
  *(int *)(local_78 + 3) = iVar4;
  *(undefined4 *)((longlong)local_78 + 0x1c) = uVar6;
  local_78[4] = uVar2;
  local_78[5] = uVar3;
  if (local_78 + 1 != (undefined8 *)0x0) {
    local_88[0] = FUN_14813ea6a;
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



// FUNCTION 14813ea6a FUN_14813ea6a body=52 status=ok
// SIG undefined FUN_14813ea6a(void)

void FUN_14813ea6a(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 3);
  if (lVar1 == 0) {
    return;
  }
  FUN_14813eb00(param_1[4],*param_1,param_1 + 1);
  return;
}



// FUNCTION 14813eaa8 FUN_14813eaa8 body=29 status=ok
// SIG undefined FUN_14813eaa8(void)

void FUN_14813eaa8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14813eac6 FUN_14813eac6 body=57 status=ok
// SIG undefined FUN_14813eac6(void)

undefined8 * FUN_14813eac6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14adbf320;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813eb00 FUN_14813eb00 body=216 status=ok
// SIG undefined FUN_14813eb00(void)

void FUN_14813eb00(longlong param_1,longlong param_2,undefined8 param_3)

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
            FUN_140491812(pcVar2 + 0x10,lVar4 + 0x50);
          }
          FUN_140491812(pcVar2 + 0x10,param_3);
          pcVar2[1] = pcVar2[1] | *(byte *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014813ebd1. Too many branches */
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



// FUNCTION 14813ebd8 FUN_14813ebd8 body=107 status=ok
// SIG undefined FUN_14813ebd8(void)

undefined8 * FUN_14813ebd8(undefined8 *param_1,longlong param_2,char *param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 != (char *)0x0) {
    *param_1 = (PSRWLOCK)(param_3 + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(param_3 + 8));
    if (*param_3 == '\x01') {
      FUN_140491812(param_2 + 0x50,param_3 + 0x10);
    }
    *param_3 = '\0';
    param_3[0x18] = '\0';
    param_3[0x19] = '\0';
    param_3[0x1a] = '\0';
    param_3[0x1b] = '\0';
    if (*(int *)(param_3 + 0x1c) != 0) {
      FUN_14491ce3c(param_3 + 0x10,0);
    }
  }
  param_1[1] = param_2 + 0x50;
  return param_1;
}



// FUNCTION 14813ec44 FUN_14813ec44 body=1301 status=ok
// SIG undefined FUN_14813ec44(void)

void FUN_14813ec44(undefined8 param_1,longlong *param_2,undefined8 param_3)

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
    ppuVar2 = &PTR_FUN_14adbf340;
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
    ppuVar2 = &PTR_FUN_14adbf3b0;
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
    ppuVar2 = &PTR_FUN_14adbf420;
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
    ppuVar2 = &PTR_FUN_14adbf490;
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
    ppuVar2 = &PTR_FUN_14adbf500;
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
    ppuVar2 = &PTR_FUN_14adbf570;
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
    ppuVar2 = &PTR_FUN_14adbf5e0;
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
    ppuVar2 = &PTR_FUN_14adbf650;
  }
  else {
    if (lVar1 != DAT_14cb3aaa8) goto LAB_14813ecf3;
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
    ppuVar2 = &PTR_FUN_14adbf6c0;
  }
  local_28 = 2;
  *local_30 = ppuVar2;
  local_30[3] = param_1;
  FUN_144a450dc(param_3,&local_30);
  FUN_1449db362(&local_30);
LAB_14813ecf3:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14813f15a FUN_14813f15a body=29 status=ok
// SIG undefined FUN_14813f15a(void)

undefined8 FUN_14813f15a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813f18c FUN_14813f18c body=93 status=ok
// SIG undefined FUN_14813f18c(void)

void FUN_14813f18c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbf340;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813f1ea FUN_14813f1ea body=93 status=ok
// SIG undefined FUN_14813f1ea(void)

void FUN_14813f1ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbf340;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813f248 FUN_14813f248 body=126 status=ok
// SIG undefined FUN_14813f248(void)

void FUN_14813f248(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbf340;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014813f2b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14813f2d0 FUN_14813f2d0 body=20 status=ok
// SIG undefined FUN_14813f2d0(void)

undefined1 FUN_14813f2d0(longlong param_1)

{
  FUN_14813f2e4(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14813f2e4 FUN_14813f2e4 body=240 status=ok
// SIG undefined FUN_14813f2e4(void)

void FUN_14813f2e4(longlong param_1,char *param_2)

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
  FUN_14813f3d6(local_38);
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
      goto LAB_14813f34e;
    }
  }
  local_30 = (char *)(lVar3 + 0x50);
LAB_14813f34e:
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



// FUNCTION 14813f3d6 FUN_14813f3d6 body=148 status=ok
// SIG undefined FUN_14813f3d6(void)

void FUN_14813f3d6(int *param_1,char *param_2)

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



// FUNCTION 14813f46a FUN_14813f46a body=29 status=ok
// SIG undefined FUN_14813f46a(void)

undefined8 FUN_14813f46a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813f49c FUN_14813f49c body=93 status=ok
// SIG undefined FUN_14813f49c(void)

void FUN_14813f49c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbf3b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813f4fa FUN_14813f4fa body=93 status=ok
// SIG undefined FUN_14813f4fa(void)

void FUN_14813f4fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbf3b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813f558 FUN_14813f558 body=126 status=ok
// SIG undefined FUN_14813f558(void)

void FUN_14813f558(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbf3b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014813f5c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14813f5e0 FUN_14813f5e0 body=20 status=ok
// SIG undefined FUN_14813f5e0(void)

undefined1 FUN_14813f5e0(longlong param_1)

{
  FUN_14813f5f4(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14813f5f4 FUN_14813f5f4 body=312 status=ok
// SIG undefined FUN_14813f5f4(void)

void FUN_14813f5f4(longlong param_1,char *param_2)

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
  FUN_14813f3d6(local_38);
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
      goto LAB_14813f678;
    }
  }
  local_30 = (char *)(lVar3 + 0x50);
LAB_14813f678:
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



// FUNCTION 14813f72e FUN_14813f72e body=29 status=ok
// SIG undefined FUN_14813f72e(void)

undefined8 FUN_14813f72e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813f760 FUN_14813f760 body=93 status=ok
// SIG undefined FUN_14813f760(void)

void FUN_14813f760(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbf420;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813f7be FUN_14813f7be body=93 status=ok
// SIG undefined FUN_14813f7be(void)

void FUN_14813f7be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbf420;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813f81c FUN_14813f81c body=126 status=ok
// SIG undefined FUN_14813f81c(void)

void FUN_14813f81c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbf420;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014813f88b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14813f8a4 FUN_14813f8a4 body=20 status=ok
// SIG undefined FUN_14813f8a4(void)

undefined1 FUN_14813f8a4(longlong param_1)

{
  FUN_14813f8b8(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14813f8b8 FUN_14813f8b8 body=242 status=ok
// SIG undefined FUN_14813f8b8(void)

void FUN_14813f8b8(longlong param_1,char *param_2)

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
  FUN_14813f3d6(local_38);
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
      goto LAB_14813f922;
    }
  }
  local_30 = (char *)(lVar2 + 0x50);
LAB_14813f922:
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



// FUNCTION 14813f9ac FUN_14813f9ac body=29 status=ok
// SIG undefined FUN_14813f9ac(void)

undefined8 FUN_14813f9ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813f9de FUN_14813f9de body=93 status=ok
// SIG undefined FUN_14813f9de(void)

void FUN_14813f9de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbf490;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813fa3c FUN_14813fa3c body=93 status=ok
// SIG undefined FUN_14813fa3c(void)

void FUN_14813fa3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbf490;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813fa9a FUN_14813fa9a body=126 status=ok
// SIG undefined FUN_14813fa9a(void)

void FUN_14813fa9a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbf490;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014813fb09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14813fb22 FUN_14813fb22 body=20 status=ok
// SIG undefined FUN_14813fb22(void)

undefined1 FUN_14813fb22(longlong param_1)

{
  FUN_14813fb36(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14813fb36 FUN_14813fb36 body=1990 status=ok
// SIG undefined FUN_14813fb36(void)

void FUN_14813fb36(longlong param_1,char *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  longlong lVar33;
  undefined4 uVar34;
  uint uVar35;
  int *piVar36;
  longlong *plVar37;
  PSRWLOCK SRWLock;
  int iVar38;
  uint uVar39;
  longlong lVar40;
  undefined1 auStack_218 [32];
  undefined4 *local_1f8;
  int local_1f0;
  undefined4 *local_1e8;
  int local_1e0;
  undefined4 *local_1d8;
  int local_1d0;
  undefined4 *local_1c8;
  int local_1c0;
  undefined4 *local_1b8;
  int local_1b0;
  undefined4 *local_1a8;
  int local_1a0;
  undefined4 *local_198;
  int local_190;
  undefined4 *local_188;
  int local_180;
  undefined4 *local_178;
  int local_170;
  undefined4 *local_168;
  int local_160;
  undefined4 *local_158;
  int local_150;
  undefined4 *local_148;
  int local_140;
  undefined4 *local_138;
  int local_130;
  undefined4 *local_128;
  int local_120;
  undefined4 *local_118;
  int local_110;
  undefined4 *local_108;
  int local_100;
  uint *local_f8;
  undefined8 uStack_f0;
  int local_e8;
  undefined1 local_e0 [8];
  char *local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_14813f3d6(local_e0);
  local_f8 = (uint *)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  FUN_144a98d08(&local_f8,param_2);
  FUN_144a76c20(&local_1f8,param_2);
  FUN_144a76c20(&local_1e8,param_2);
  FUN_144a76c20(&local_1d8,param_2);
  FUN_144a76c20(&local_1c8,param_2);
  FUN_144a76c20(&local_1b8,param_2);
  FUN_144a76c20(&local_1a8,param_2);
  FUN_144a76c20(&local_198,param_2);
  FUN_144a76c20(&local_188,param_2);
  FUN_144a76c20(&local_178,param_2);
  FUN_144a76c20(&local_168,param_2);
  FUN_144a76c20(&local_158,param_2);
  FUN_144a76c20(&local_148,param_2);
  FUN_144a76c20(&local_138,param_2);
  FUN_144a76c20(&local_128,param_2);
  FUN_144a76c20(&local_118,param_2);
  FUN_144a76c20(&local_108,param_2);
  lVar33 = *(longlong *)(param_1 + 0x10);
  if (local_d8 == (char *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_d8 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*local_d8 == '\x01') {
      plVar37 = (longlong *)(local_d8 + 0x10);
      goto LAB_14813fcff;
    }
  }
  plVar37 = (longlong *)(lVar33 + 0x50);
LAB_14813fcff:
  uVar34 = DAT_14c84628c;
  uVar32 = DAT_14c846288;
  uVar31 = DAT_14c846284;
  uVar30 = DAT_14c846280;
  uVar29 = DAT_14c84627c;
  uVar28 = DAT_14c846278;
  uVar27 = DAT_14c846274;
  uVar26 = DAT_14c846270;
  uVar25 = DAT_14c84626c;
  uVar24 = DAT_14c846268;
  uVar23 = DAT_14c846264;
  uVar22 = DAT_14c846260;
  uVar21 = DAT_14c846258._4_4_;
  uVar20 = (undefined4)DAT_14c846258;
  uVar19 = DAT_14c846254;
  uVar18 = DAT_14c846250;
  if ((int)plVar37[1] < 1) {
    piVar36 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar36 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar36) {
      iVar38 = 0;
      do {
        puVar2 = local_1f8 + local_1f0;
        *local_1f8 = uVar18;
        puVar3 = local_1e8 + local_1e0;
        *local_1e8 = uVar19;
        puVar4 = local_1d8 + local_1d0;
        *local_1d8 = uVar20;
        puVar5 = local_1c8 + local_1c0;
        *local_1c8 = uVar21;
        puVar6 = local_1b8 + local_1b0;
        *local_1b8 = uVar22;
        puVar7 = local_1a8 + local_1a0;
        *local_1a8 = uVar23;
        puVar8 = local_198 + local_190;
        *local_198 = uVar24;
        puVar9 = local_188 + local_180;
        *local_188 = uVar25;
        puVar10 = local_178 + local_170;
        *local_178 = uVar26;
        puVar11 = local_168 + local_160;
        *local_168 = uVar27;
        puVar12 = local_158 + local_150;
        *local_158 = uVar28;
        puVar13 = local_148 + local_140;
        *local_148 = uVar29;
        puVar14 = local_138 + local_130;
        *local_138 = uVar30;
        puVar15 = local_128 + local_120;
        *local_128 = uVar31;
        puVar16 = local_118 + local_110;
        *local_118 = uVar32;
        puVar17 = local_108 + local_100;
        *local_108 = uVar34;
        iVar38 = iVar38 + 1;
        piVar36 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar36 = (int *)(param_2 + 0x3c);
        }
        local_1f8 = puVar2;
        local_1e8 = puVar3;
        local_1d8 = puVar4;
        local_1c8 = puVar5;
        local_1b8 = puVar6;
        local_1a8 = puVar7;
        local_198 = puVar8;
        local_188 = puVar9;
        local_178 = puVar10;
        local_168 = puVar11;
        local_158 = puVar12;
        local_148 = puVar13;
        local_138 = puVar14;
        local_128 = puVar15;
        local_118 = puVar16;
        local_108 = puVar17;
      } while (iVar38 < *piVar36);
    }
  }
  else {
    piVar36 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar36 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar36) {
      uVar35 = (int)plVar37[1] - 1;
      iVar38 = 0;
      do {
        puVar1 = local_f8 + local_e8;
        uVar39 = *local_f8;
        if ((int)uVar35 <= (int)*local_f8) {
          uVar39 = uVar35;
        }
        if ((int)uVar39 < 1) {
          uVar39 = 0;
        }
        lVar33 = *plVar37;
        lVar40 = (ulonglong)uVar39 * 0x40;
        uVar18 = *(undefined4 *)(lVar33 + 4 + lVar40);
        uVar19 = *(undefined4 *)(lVar33 + 8 + lVar40);
        uVar20 = *(undefined4 *)(lVar33 + 0xc + lVar40);
        uVar21 = *(undefined4 *)(lVar33 + 0x10 + lVar40);
        uVar22 = *(undefined4 *)(lVar33 + 0x14 + lVar40);
        uVar23 = *(undefined4 *)(lVar33 + 0x18 + lVar40);
        uVar24 = *(undefined4 *)(lVar33 + 0x1c + lVar40);
        uVar25 = *(undefined4 *)(lVar33 + 0x20 + lVar40);
        uVar26 = *(undefined4 *)(lVar33 + 0x24 + lVar40);
        uVar27 = *(undefined4 *)(lVar33 + 0x28 + lVar40);
        uVar28 = *(undefined4 *)(lVar33 + 0x2c + lVar40);
        uVar29 = *(undefined4 *)(lVar33 + 0x30 + lVar40);
        uVar30 = *(undefined4 *)(lVar33 + 0x34 + lVar40);
        uVar31 = *(undefined4 *)(lVar33 + 0x38 + lVar40);
        uVar32 = *(undefined4 *)(lVar33 + 0x3c + lVar40);
        puVar2 = local_1f8 + local_1f0;
        *local_1f8 = *(undefined4 *)(lVar33 + lVar40);
        puVar3 = local_1e8 + local_1e0;
        *local_1e8 = uVar18;
        puVar4 = local_1d8 + local_1d0;
        *local_1d8 = uVar19;
        puVar5 = local_1c8 + local_1c0;
        *local_1c8 = uVar20;
        puVar6 = local_1b8 + local_1b0;
        *local_1b8 = uVar21;
        puVar7 = local_1a8 + local_1a0;
        *local_1a8 = uVar22;
        puVar8 = local_198 + local_190;
        *local_198 = uVar23;
        puVar9 = local_188 + local_180;
        *local_188 = uVar24;
        puVar10 = local_178 + local_170;
        *local_178 = uVar25;
        puVar11 = local_168 + local_160;
        *local_168 = uVar26;
        puVar12 = local_158 + local_150;
        *local_158 = uVar27;
        puVar13 = local_148 + local_140;
        *local_148 = uVar28;
        puVar14 = local_138 + local_130;
        *local_138 = uVar29;
        puVar15 = local_128 + local_120;
        *local_128 = uVar30;
        puVar16 = local_118 + local_110;
        *local_118 = uVar31;
        puVar17 = local_108 + local_100;
        *local_108 = uVar32;
        iVar38 = iVar38 + 1;
        piVar36 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar36 = (int *)(param_2 + 0x3c);
        }
        local_1f8 = puVar2;
        local_1e8 = puVar3;
        local_1d8 = puVar4;
        local_1c8 = puVar5;
        local_1b8 = puVar6;
        local_1a8 = puVar7;
        local_198 = puVar8;
        local_188 = puVar9;
        local_178 = puVar10;
        local_168 = puVar11;
        local_158 = puVar12;
        local_148 = puVar13;
        local_138 = puVar14;
        local_128 = puVar15;
        local_118 = puVar16;
        local_108 = puVar17;
        local_f8 = puVar1;
      } while (iVar38 < *piVar36);
    }
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_d0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481402fe FUN_1481402fe body=29 status=ok
// SIG undefined FUN_1481402fe(void)

undefined8 FUN_1481402fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148140330 FUN_148140330 body=93 status=ok
// SIG undefined FUN_148140330(void)

void FUN_148140330(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbf500;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814038e FUN_14814038e body=93 status=ok
// SIG undefined FUN_14814038e(void)

void FUN_14814038e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbf500;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481403ec FUN_1481403ec body=126 status=ok
// SIG undefined FUN_1481403ec(void)

void FUN_1481403ec(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbf500;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014814045b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148140474 FUN_148140474 body=20 status=ok
// SIG undefined FUN_148140474(void)

undefined1 FUN_148140474(longlong param_1)

{
  FUN_148140488(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148140488 FUN_148140488 body=185 status=ok
// SIG undefined FUN_148140488(void)

void FUN_148140488(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  PSRWLOCK SRWLock;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14813f3d6(local_38);
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
      FUN_140491812(pcVar2 + 0x10,lVar1 + 0x50);
    }
    pcVar2 = pcVar2 + 0x10;
  }
  pcVar2[8] = '\0';
  pcVar2[9] = '\0';
  pcVar2[10] = '\0';
  pcVar2[0xb] = '\0';
  if (*(int *)(pcVar2 + 0xc) < 0) {
    FUN_14491ce3c(pcVar2,0);
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



// FUNCTION 148140542 FUN_148140542 body=29 status=ok
// SIG undefined FUN_148140542(void)

undefined8 FUN_148140542(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148140574 FUN_148140574 body=93 status=ok
// SIG undefined FUN_148140574(void)

void FUN_148140574(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbf570;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481405d2 FUN_1481405d2 body=93 status=ok
// SIG undefined FUN_1481405d2(void)

void FUN_1481405d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbf570;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148140630 FUN_148140630 body=126 status=ok
// SIG undefined FUN_148140630(void)

void FUN_148140630(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbf570;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014814069f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481406b8 FUN_1481406b8 body=20 status=ok
// SIG undefined FUN_1481406b8(void)

undefined1 FUN_1481406b8(longlong param_1)

{
  FUN_1481406cc(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481406cc FUN_1481406cc body=374 status=ok
// SIG undefined FUN_1481406cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1481406cc(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  longlong lVar15;
  longlong *plVar16;
  PSRWLOCK SRWLock;
  longlong lVar17;
  undefined1 auStack_c8 [32];
  int *local_a8;
  undefined8 uStack_a0;
  int local_98;
  undefined1 local_88 [8];
  char *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14813f3d6(local_88);
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  FUN_144a98d08(&local_a8,param_2);
  pcVar14 = local_80;
  lVar15 = *(longlong *)(param_1 + 0x10);
  if (local_80 == (char *)0x0) {
    plVar16 = (longlong *)(lVar15 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_80 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar14 == '\0') {
      *pcVar14 = '\x01';
      FUN_140491812(pcVar14 + 0x10,lVar15 + 0x50);
    }
    plVar16 = (longlong *)(pcVar14 + 0x10);
  }
  iVar3 = (int)plVar16[1];
  iVar4 = *local_a8;
  local_a8 = local_a8 + local_98;
  FUN_140491ce0(plVar16,iVar4,1);
  uVar13 = _DAT_14c846288;
  uVar12 = _DAT_14c846280;
  uVar11 = _DAT_14c846278;
  uVar10 = _DAT_14c846270;
  uVar9 = _DAT_14c846268;
  uVar8 = _DAT_14c846260;
  uVar7 = DAT_14c846258;
  uVar6 = _DAT_14c846250;
  if (iVar3 < iVar4) {
    local_48 = _DAT_14c846280;
    uStack_40 = _DAT_14c846288;
    local_58 = _DAT_14c846270;
    uStack_50 = _DAT_14c846278;
    local_68 = _DAT_14c846260;
    uStack_60 = _DAT_14c846268;
    local_78 = _DAT_14c846250;
    uStack_70 = DAT_14c846258;
    lVar15 = (longlong)iVar4 - (longlong)iVar3;
    lVar17 = (longlong)iVar3 << 6;
    do {
      lVar5 = *plVar16;
      local_78._0_4_ = (undefined4)uVar6;
      local_78._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_70._0_4_ = (undefined4)uVar7;
      uStack_70._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x30 + lVar17);
      *puVar2 = uVar12;
      puVar2[1] = uVar13;
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar17);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar17);
      *puVar2 = uVar8;
      puVar2[1] = uVar9;
      puVar1 = (undefined4 *)(lVar5 + lVar17);
      *puVar1 = (undefined4)local_78;
      puVar1[1] = local_78._4_4_;
      puVar1[2] = (undefined4)uStack_70;
      puVar1[3] = uStack_70._4_4_;
      lVar17 = lVar17 + 0x40;
      lVar15 = lVar15 + -1;
      local_78 = uVar6;
      uStack_70 = uVar7;
    } while (lVar15 != 0);
  }
  local_80[1] = local_80[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148140844 FUN_148140844 body=29 status=ok
// SIG undefined FUN_148140844(void)

undefined8 FUN_148140844(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148140876 FUN_148140876 body=93 status=ok
// SIG undefined FUN_148140876(void)

void FUN_148140876(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbf5e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481408d4 FUN_1481408d4 body=93 status=ok
// SIG undefined FUN_1481408d4(void)

void FUN_1481408d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbf5e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148140932 FUN_148140932 body=126 status=ok
// SIG undefined FUN_148140932(void)

void FUN_148140932(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbf5e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481409a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481409ba FUN_1481409ba body=20 status=ok
// SIG undefined FUN_1481409ba(void)

undefined1 FUN_1481409ba(longlong param_1)

{
  FUN_1481409ce(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481409ce FUN_1481409ce body=622 status=ok
// SIG undefined FUN_1481409ce(void)

void FUN_1481409ce(longlong param_1,byte *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  byte *pbVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  int *piVar10;
  longlong *plVar11;
  longlong lVar12;
  uint *puVar13;
  longlong *plVar14;
  undefined1 local_2a8 [32];
  PSRWLOCK local_288;
  longlong local_280;
  uint *local_278;
  undefined8 uStack_270;
  int local_268;
  int *local_258;
  undefined8 uStack_250;
  int local_248;
  undefined1 local_238 [8];
  char *local_230;
  undefined4 local_228 [4];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e0 [2];
  undefined4 local_1d0 [92];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_2a8;
  FUN_14813f3d6(local_238);
  lVar7 = 0;
  local_248 = 0;
  local_258 = (int *)0x0;
  uStack_250 = 0;
  FUN_144a76d88(&local_258,param_2);
  local_268 = 0;
  local_278 = (uint *)0x0;
  uStack_270 = 0;
  FUN_144a98d08(&local_278,param_2);
  do {
    *(undefined8 *)((longlong)local_1e0 + lVar7) = 0;
    *(undefined8 *)((longlong)local_1e0 + lVar7 + 8) = 0;
    *(undefined4 *)((longlong)local_1d0 + lVar7) = 0;
    lVar7 = lVar7 + 0x18;
  } while (lVar7 != 0x180);
  lVar7 = 0;
  do {
    FUN_144a98dce((longlong)local_1e0 + lVar7,param_2);
    pcVar4 = local_230;
    lVar7 = lVar7 + 0x18;
  } while (lVar7 != 0x180);
  lVar7 = *(longlong *)(param_1 + 0x10);
  local_280 = param_1;
  if (local_230 == (char *)0x0) {
    plVar14 = (longlong *)(lVar7 + 0x50);
    local_288 = (PSRWLOCK)0x0;
  }
  else {
    local_288 = (PSRWLOCK)(local_230 + 8);
    AcquireSRWLockExclusive(local_288);
    if (*pcVar4 == '\0') {
      *pcVar4 = '\x01';
      FUN_140491812(pcVar4 + 0x10,lVar7 + 0x50);
    }
    plVar14 = (longlong *)(pcVar4 + 0x10);
  }
  bVar6 = *param_2;
  lVar7 = *(longlong *)(param_2 + 0x80);
  pbVar5 = (byte *)(lVar7 + 0x40);
  if (bVar6 != 0) {
    pbVar5 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar5) {
    iVar9 = 0;
    piVar10 = local_258;
    puVar13 = local_278;
    do {
      local_278 = puVar13 + local_268;
      uVar2 = *puVar13;
      plVar11 = local_1e0;
      uVar8 = 0;
      do {
        puVar3 = (undefined4 *)*plVar11;
        *plVar11 = (longlong)(puVar3 + (int)plVar11[2]);
        local_228[(uVar8 >> 2 & 0x3fffffff) * 4 + (ulonglong)((uint)uVar8 & 3)] = *puVar3;
        uVar8 = uVar8 + 1;
        plVar11 = plVar11 + 3;
      } while (uVar8 != 0x10);
      local_258 = piVar10 + local_248;
      if (((*piVar10 == 0) && (-1 < (int)uVar2)) && ((int)uVar2 < (int)plVar14[1])) {
        lVar7 = *plVar14;
        lVar12 = (ulonglong)uVar2 * 0x40;
        puVar1 = (undefined8 *)(lVar7 + 0x30 + lVar12);
        *puVar1 = local_1f8;
        puVar1[1] = uStack_1f0;
        puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar12);
        *puVar1 = local_208;
        puVar1[1] = uStack_200;
        puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar12);
        *puVar1 = local_218;
        puVar1[1] = uStack_210;
        puVar3 = (undefined4 *)(lVar7 + lVar12);
        *puVar3 = local_228[0];
        puVar3[1] = local_228[1];
        puVar3[2] = local_228[2];
        puVar3[3] = local_228[3];
        bVar6 = *param_2;
        lVar7 = *(longlong *)(param_2 + 0x80);
      }
      iVar9 = iVar9 + 1;
      pbVar5 = (byte *)(lVar7 + 0x40);
      if ((bVar6 & 1) != 0) {
        pbVar5 = param_2 + 0x3c;
      }
      piVar10 = local_258;
      puVar13 = local_278;
    } while (iVar9 < *(int *)pbVar5);
  }
  local_230[1] = local_230[1] | *(byte *)(local_280 + 0x18);
  if (local_288 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_288);
  }
  if ((local_60 ^ (ulonglong)local_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148140c3e FUN_148140c3e body=29 status=ok
// SIG undefined FUN_148140c3e(void)

undefined8 FUN_148140c3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148140c70 FUN_148140c70 body=93 status=ok
// SIG undefined FUN_148140c70(void)

void FUN_148140c70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbf650;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148140cce FUN_148140cce body=93 status=ok
// SIG undefined FUN_148140cce(void)

void FUN_148140cce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbf650;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148140d2c FUN_148140d2c body=126 status=ok
// SIG undefined FUN_148140d2c(void)

void FUN_148140d2c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbf650;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148140d9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148140db4 FUN_148140db4 body=20 status=ok
// SIG undefined FUN_148140db4(void)

undefined1 FUN_148140db4(longlong param_1)

{
  FUN_148140dc8(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148140dc8 FUN_148140dc8 body=593 status=ok
// SIG undefined FUN_148140dc8(void)

void FUN_148140dc8(longlong param_1,byte *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  byte bVar6;
  byte *pbVar7;
  PSRWLOCK SRWLock;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 local_288 [40];
  longlong local_260;
  int *local_258;
  undefined8 uStack_250;
  int local_248;
  undefined1 local_238 [8];
  char *local_230;
  undefined4 local_228 [4];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e0 [2];
  undefined4 local_1d0 [92];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_288;
  FUN_14813f3d6(local_238);
  local_258 = (int *)0x0;
  uStack_250 = 0;
  local_248 = 0;
  FUN_144a76d88(&local_258,param_2);
  lVar9 = 0;
  do {
    *(undefined8 *)((longlong)local_1e0 + lVar9) = 0;
    *(undefined8 *)((longlong)local_1e0 + lVar9 + 8) = 0;
    *(undefined4 *)((longlong)local_1d0 + lVar9) = 0;
    lVar9 = lVar9 + 0x18;
  } while (lVar9 != 0x180);
  lVar9 = 0;
  do {
    FUN_144a98dce((longlong)local_1e0 + lVar9,param_2);
    pcVar5 = local_230;
    lVar9 = lVar9 + 0x18;
  } while (lVar9 != 0x180);
  lVar9 = *(longlong *)(param_1 + 0x10);
  iVar8 = 0x7fffffff;
  if (0 < *(int *)(lVar9 + 0x4c)) {
    iVar8 = *(int *)(lVar9 + 0x4c);
  }
  local_260 = param_1;
  if (local_230 == (char *)0x0) {
    plVar13 = (longlong *)(lVar9 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_230 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar5 == '\0') {
      *pcVar5 = '\x01';
      FUN_140491812(pcVar5 + 0x10,lVar9 + 0x50);
    }
    plVar13 = (longlong *)(pcVar5 + 0x10);
  }
  bVar6 = *param_2;
  lVar9 = *(longlong *)(param_2 + 0x80);
  pbVar7 = (byte *)(lVar9 + 0x40);
  if (bVar6 != 0) {
    pbVar7 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar7) {
    iVar12 = 0;
    do {
      piVar1 = local_258 + local_248;
      iVar3 = *local_258;
      uVar11 = 0;
      plVar10 = local_1e0;
      do {
        puVar4 = (undefined4 *)*plVar10;
        *plVar10 = (longlong)(puVar4 + (int)plVar10[2]);
        local_228[(uVar11 >> 2 & 0x3fffffff) * 4 + (ulonglong)((uint)uVar11 & 3)] = *puVar4;
        uVar11 = uVar11 + 1;
        plVar10 = plVar10 + 3;
      } while (uVar11 != 0x10);
      local_258 = piVar1;
      if (iVar3 == 0) {
        iVar3 = (int)plVar13[1];
        if (iVar3 < iVar8) {
          *(uint *)(plVar13 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)plVar13 + 0xc) < iVar3 + 1U) {
            FUN_140491d2e(plVar13,iVar3);
          }
          lVar9 = *plVar13;
          lVar14 = (longlong)iVar3 * 0x40;
          puVar2 = (undefined8 *)(lVar9 + 0x30 + lVar14);
          *puVar2 = local_1f8;
          puVar2[1] = uStack_1f0;
          puVar2 = (undefined8 *)(lVar9 + 0x20 + lVar14);
          *puVar2 = local_208;
          puVar2[1] = uStack_200;
          puVar2 = (undefined8 *)(lVar9 + 0x10 + lVar14);
          *puVar2 = local_218;
          puVar2[1] = uStack_210;
          puVar4 = (undefined4 *)(lVar9 + lVar14);
          *puVar4 = local_228[0];
          puVar4[1] = local_228[1];
          puVar4[2] = local_228[2];
          puVar4[3] = local_228[3];
          bVar6 = *param_2;
          lVar9 = *(longlong *)(param_2 + 0x80);
        }
      }
      iVar12 = iVar12 + 1;
      pbVar7 = (byte *)(lVar9 + 0x40);
      if ((bVar6 & 1) != 0) {
        pbVar7 = param_2 + 0x3c;
      }
    } while (iVar12 < *(int *)pbVar7);
  }
  local_230[1] = local_230[1] | *(byte *)(local_260 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_60 ^ (ulonglong)local_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14814101a FUN_14814101a body=29 status=ok
// SIG undefined FUN_14814101a(void)

undefined8 FUN_14814101a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814104c FUN_14814104c body=93 status=ok
// SIG undefined FUN_14814104c(void)

void FUN_14814104c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbf6c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481410aa FUN_1481410aa body=93 status=ok
// SIG undefined FUN_1481410aa(void)

void FUN_1481410aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbf6c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148141108 FUN_148141108 body=126 status=ok
// SIG undefined FUN_148141108(void)

void FUN_148141108(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbf6c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148141177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148141190 FUN_148141190 body=20 status=ok
// SIG undefined FUN_148141190(void)

undefined1 FUN_148141190(longlong param_1)

{
  FUN_1481411a4(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481411a4 FUN_1481411a4 body=2690 status=ok
// SIG undefined FUN_1481411a4(void)

void FUN_1481411a4(longlong param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  int *piVar12;
  longlong lVar13;
  PSRWLOCK SRWLock;
  int iVar14;
  longlong *plVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 *local_218;
  int local_210;
  undefined4 *local_208;
  int local_200;
  undefined4 *local_1f8;
  int local_1f0;
  undefined4 *local_1e8;
  int local_1e0;
  undefined4 *local_1d8;
  int local_1d0;
  undefined4 *local_1c8;
  int local_1c0;
  undefined4 *local_1b8;
  int local_1b0;
  undefined4 *local_1a8;
  int local_1a0;
  undefined4 *local_198;
  int local_190;
  undefined4 *local_188;
  int local_180;
  undefined4 *local_178;
  int local_170;
  undefined4 *local_168;
  int local_160;
  undefined4 *local_158;
  int local_150;
  undefined4 *local_148;
  int local_140;
  undefined4 *local_138;
  int local_130;
  undefined4 *local_128;
  int local_120;
  undefined4 *local_118;
  int local_110;
  int *local_108;
  undefined8 uStack_100;
  int local_f8;
  undefined1 local_f0 [8];
  char *local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  FUN_14813f3d6(local_f0);
  local_108 = (int *)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  FUN_144a76d88(&local_108,param_2);
  FUN_144a76c20(&local_208,param_2);
  FUN_144a76c20(&local_1f8,param_2);
  FUN_144a76c20(&local_1e8,param_2);
  FUN_144a76c20(&local_1d8,param_2);
  FUN_144a76c20(&local_1c8,param_2);
  FUN_144a76c20(&local_1b8,param_2);
  FUN_144a76c20(&local_1a8,param_2);
  FUN_144a76c20(&local_198,param_2);
  FUN_144a76c20(&local_188,param_2);
  FUN_144a76c20(&local_178,param_2);
  FUN_144a76c20(&local_168,param_2);
  FUN_144a76c20(&local_158,param_2);
  FUN_144a76c20(&local_148,param_2);
  FUN_144a76c20(&local_138,param_2);
  FUN_144a76c20(&local_128,param_2);
  FUN_144a76c20(&local_118,param_2);
  FUN_140126e42(&local_218,param_2);
  pcVar11 = local_e8;
  uVar10 = DAT_14c84628c;
  uVar9 = DAT_14c846288;
  uVar8 = DAT_14c846284;
  uVar7 = DAT_14c846280;
  uVar6 = DAT_14c84627c;
  uVar5 = DAT_14c846278;
  uVar4 = DAT_14c846274;
  uVar3 = DAT_14c846270;
  uVar22 = DAT_14c846268;
  local_21c = DAT_14c84626c;
  lVar2 = *(longlong *)(param_1 + 0x10);
  local_284 = DAT_14c846250;
  local_288 = DAT_14c846254;
  local_28c = (undefined4)DAT_14c846258;
  local_290 = DAT_14c846258._4_4_;
  local_294 = DAT_14c846260;
  local_298 = DAT_14c846264;
  if (local_e8 == (char *)0x0) {
    plVar15 = (longlong *)(lVar2 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_e8 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar11 == '\0') {
      *pcVar11 = '\x01';
      FUN_140491812(pcVar11 + 0x10,lVar2 + 0x50);
    }
    plVar15 = (longlong *)(pcVar11 + 0x10);
  }
  piVar12 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar12 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar12) {
    iVar14 = 0;
    uVar16 = local_284;
    uVar17 = local_288;
    uVar18 = local_28c;
    uVar19 = local_290;
    uVar20 = local_294;
    uVar21 = local_298;
    do {
      if (*local_108 == 0) {
        iVar1 = (int)plVar15[1];
        if ((longlong)iVar1 == 0) goto LAB_1481414c3;
        lVar2 = *plVar15;
        lVar13 = (longlong)iVar1 * 0x40;
        local_280 = *(undefined4 *)(lVar2 + -0x40 + lVar13);
        local_27c = *(undefined4 *)(lVar2 + -0x3c + lVar13);
        local_278 = *(undefined4 *)(lVar2 + -0x38 + lVar13);
        local_274 = *(undefined4 *)(lVar2 + -0x34 + lVar13);
        local_270 = *(undefined4 *)(lVar2 + -0x30 + lVar13);
        local_26c = *(undefined4 *)(lVar2 + -0x2c + lVar13);
        local_264 = *(undefined4 *)(lVar2 + -0x28 + lVar13);
        local_25c = *(undefined4 *)(lVar2 + -0x24 + lVar13);
        local_254 = *(undefined4 *)(lVar2 + -0x20 + lVar13);
        local_24c = *(undefined4 *)(lVar2 + -0x1c + lVar13);
        local_244 = *(undefined4 *)(lVar2 + -0x18 + lVar13);
        local_23c = *(undefined4 *)(lVar2 + -0x14 + lVar13);
        local_234 = *(undefined4 *)(lVar2 + -0x10 + lVar13);
        local_22c = *(undefined4 *)(lVar2 + -0xc + lVar13);
        local_228 = *(undefined4 *)(lVar2 + -8 + lVar13);
        local_220 = *(undefined4 *)(lVar2 + -4 + lVar13);
        *(int *)(plVar15 + 1) = iVar1 + -1;
        local_268 = uVar10;
        local_260 = uVar9;
        local_258 = uVar8;
        local_250 = uVar7;
        local_248 = uVar6;
        local_240 = uVar5;
        local_238 = uVar4;
        local_230 = uVar3;
        local_224 = uVar22;
        local_108 = local_108 + local_f8;
        FUN_146faaad4(plVar15);
        *local_208 = local_280;
        *local_1f8 = local_27c;
        *local_1e8 = local_278;
        *local_1d8 = local_274;
        *local_1c8 = local_270;
        *local_1b8 = local_26c;
        *local_1a8 = local_264;
        *local_198 = local_25c;
        *local_188 = local_254;
        *local_178 = local_24c;
        *local_168 = local_244;
        *local_158 = local_23c;
        *local_148 = local_234;
        *local_138 = local_22c;
        *local_128 = local_228;
        *local_118 = local_220;
        *local_218 = 0xffffffff;
        uVar16 = local_284;
        uVar17 = local_288;
        uVar18 = local_28c;
        uVar19 = local_290;
        uVar20 = local_294;
        uVar21 = local_298;
        uVar22 = local_224;
        local_218 = local_218 + local_210;
        local_208 = local_208 + local_200;
        local_1f8 = local_1f8 + local_1f0;
        local_1e8 = local_1e8 + local_1e0;
        local_1d8 = local_1d8 + local_1d0;
        local_1c8 = local_1c8 + local_1c0;
        local_1b8 = local_1b8 + local_1b0;
        local_1a8 = local_1a8 + local_1a0;
        local_198 = local_198 + local_190;
        local_188 = local_188 + local_180;
        local_178 = local_178 + local_170;
        local_168 = local_168 + local_160;
        local_158 = local_158 + local_150;
        local_148 = local_148 + local_140;
        local_138 = local_138 + local_130;
        local_128 = local_128 + local_120;
        local_118 = local_118 + local_110;
      }
      else {
LAB_1481414c3:
        *local_208 = uVar16;
        *local_1f8 = uVar17;
        *local_1e8 = uVar18;
        *local_1d8 = uVar19;
        *local_1c8 = uVar20;
        *local_1b8 = uVar21;
        *local_1a8 = uVar22;
        *local_198 = local_21c;
        *local_188 = uVar3;
        *local_178 = uVar4;
        *local_168 = uVar5;
        *local_158 = uVar6;
        *local_148 = uVar7;
        *local_138 = uVar8;
        *local_128 = uVar9;
        *local_118 = uVar10;
        *local_218 = 0;
        local_218 = local_218 + local_210;
        local_208 = local_208 + local_200;
        local_1f8 = local_1f8 + local_1f0;
        local_1e8 = local_1e8 + local_1e0;
        local_1d8 = local_1d8 + local_1d0;
        local_1c8 = local_1c8 + local_1c0;
        local_1b8 = local_1b8 + local_1b0;
        local_1a8 = local_1a8 + local_1a0;
        local_198 = local_198 + local_190;
        local_188 = local_188 + local_180;
        local_178 = local_178 + local_170;
        local_168 = local_168 + local_160;
        local_158 = local_158 + local_150;
        local_148 = local_148 + local_140;
        local_138 = local_138 + local_130;
        local_128 = local_128 + local_120;
        local_118 = local_118 + local_110;
        local_108 = local_108 + local_f8;
      }
      iVar14 = iVar14 + 1;
      piVar12 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar12 = (int *)(param_2 + 0x3c);
      }
    } while (iVar14 < *piVar12);
  }
  local_e8[1] = local_e8[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_e0 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148141c28 FUN_148141c28 body=958 status=ok
// SIG undefined FUN_148141c28(void)

void FUN_148141c28(longlong *param_1,undefined8 param_2)

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
            local_198 = &PTR_LAB_14adbf730;
            local_1b8 = FUN_148141fe8;
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



// FUNCTION 148141fe8 FUN_148141fe8 body=62 status=ok
// SIG undefined FUN_148141fe8(void)

void FUN_148141fe8(undefined8 param_1,undefined4 *param_2)

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
  FUN_148142078();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814205a FUN_14814205a body=29 status=ok
// SIG undefined FUN_14814205a(void)

undefined8 FUN_14814205a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148142078 FUN_148142078 body=191 status=ok
// SIG undefined FUN_148142078(void)

void FUN_148142078(undefined8 *param_1,longlong *param_2)

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
    FUN_140491d2e(&local_38,0);
    memcpy(local_38,*(void **)*param_2,(longlong)*(int *)param_1[1] << 6);
    local_40 = (int)uStack_30 << 6;
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



// FUNCTION 148142148 FUN_148142148 body=29 status=ok
// SIG undefined FUN_148142148(void)

void FUN_148142148(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 148142166 FUN_148142166 body=29 status=ok
// SIG undefined FUN_148142166(void)

undefined8 FUN_148142166(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148142184 FUN_148142184 body=105 status=ok
// SIG undefined FUN_148142184(void)

void FUN_148142184(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_148141c28(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_148141c28(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001481421e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1481421ee FUN_1481421ee body=239 status=ok
// SIG undefined FUN_1481421ee(void)

void FUN_1481421ee(longlong *param_1)

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
            FUN_143a1ecfc(lVar4 + 8);
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



// FUNCTION 1481422ee FUN_1481422ee body=29 status=ok
// SIG undefined FUN_1481422ee(void)

void FUN_1481422ee(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14814230c FUN_14814230c body=29 status=ok
// SIG undefined FUN_14814230c(void)

undefined8 FUN_14814230c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814232a FUN_14814232a body=105 status=ok
// SIG undefined FUN_14814232a(void)

void FUN_14814232a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1481421ee(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1481421ee(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148142389. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 148142394 FUN_148142394 body=108 status=ok
// SIG undefined FUN_148142394(void)

void FUN_148142394(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = 0;
  do {
    lVar3 = 0;
    do {
      pwVar1 = L", %f";
      if ((int)lVar3 == 0 && (int)lVar2 == 0) {
        pwVar1 = L"%f";
      }
      FUN_1407c8b48(param_2,pwVar1,(double)*(float *)(param_1 + lVar3 * 4));
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
    lVar2 = lVar2 + 1;
    param_1 = param_1 + 0x10;
  } while (lVar2 != 4);
  return;
}



// FUNCTION 148142400 FUN_148142400 body=79 status=ok
// SIG undefined FUN_148142400(void)

undefined8 FUN_148142400(longlong param_1,longlong param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  do {
    if (param_3 == 0) {
      return 1;
    }
    lVar6 = 0;
    lVar4 = param_1;
    lVar5 = param_2;
    do {
      lVar3 = 0;
      do {
        fVar2 = *(float *)(lVar4 + lVar3 * 4);
        pfVar1 = (float *)(lVar5 + lVar3 * 4);
        if ((fVar2 != *pfVar1) || (NAN(fVar2) || NAN(*pfVar1))) {
          return 0;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != 4);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
      lVar4 = lVar4 + 0x10;
    } while (lVar6 != 4);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
    param_3 = param_3 + -1;
  } while( true );
}



// FUNCTION 148142450 FUN_148142450 body=306 status=ok
// SIG undefined FUN_148142450(void)

undefined4 * FUN_148142450(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_148142584(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar4 = FUN_14814266a(param_1,uVar9,local_40,&local_4c);
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
      FUN_14814275c(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148142584 FUN_148142584 body=230 status=ok
// SIG undefined FUN_148142584(void)

int * FUN_148142584(longlong *param_1,int *param_2)

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



// FUNCTION 14814266a FUN_14814266a body=128 status=ok
// SIG undefined FUN_14814266a(void)

undefined8 FUN_14814266a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1481426ea((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1481426ea FUN_1481426ea body=114 status=ok
// SIG undefined FUN_1481426ea(void)

void FUN_1481426ea(longlong *param_1,int param_2)

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



// FUNCTION 14814275c FUN_14814275c body=447 status=ok
// SIG undefined FUN_14814275c(void)

void FUN_14814275c(longlong *param_1)

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



// FUNCTION 14814291c FUN_14814291c body=34 status=ok
// SIG undefined FUN_14814291c(void)

ulonglong FUN_14814291c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1406f014a(*param_3);
  *(undefined1 *)*param_1 = uVar1;
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),*(undefined1 *)*param_1) ^ 1;
}



// FUNCTION 148142968 FUN_148142968 body=29 status=ok
// SIG undefined FUN_148142968(void)

undefined8 FUN_148142968(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148142986 FUN_148142986 body=180 status=ok
// SIG undefined FUN_148142986(void)

void FUN_148142986(longlong *param_1,undefined8 param_2)

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
  FUN_148142a3c(lVar2 + 0x70,&local_2c);
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



// FUNCTION 148142a3c FUN_148142a3c body=374 status=ok
// SIG undefined FUN_148142a3c(void)

undefined4 * FUN_148142a3c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_148142bb4(param_1,local_88);
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
  FUN_14813e410(&local_78);
  *(undefined4 *)(local_80 + 7) = 0xffffffff;
  local_78 = CONCAT44(local_78._4_4_,local_88[0]);
  uVar7 = (int)((ulonglong)*local_80 >> 0x20) * 0x17 + (int)*local_80;
  cVar2 = FUN_148142c9a(param_1,uVar7,local_80,&local_78);
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
      FUN_148142dba(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148142bb4 FUN_148142bb4 body=229 status=ok
// SIG undefined FUN_148142bb4(void)

int * FUN_148142bb4(longlong *param_1,int *param_2)

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



// FUNCTION 148142c9a FUN_148142c9a body=174 status=ok
// SIG undefined FUN_148142c9a(void)

undefined8 FUN_148142c9a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14813e410(puVar1 + 2);
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
          FUN_148142d48(param_1,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = puVar1[0xe];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 148142d48 FUN_148142d48 body=114 status=ok
// SIG undefined FUN_148142d48(void)

void FUN_148142d48(longlong *param_1,int param_2)

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



// FUNCTION 148142dba FUN_148142dba body=450 status=ok
// SIG undefined FUN_148142dba(void)

void FUN_148142dba(longlong *param_1)

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



// FUNCTION 148142f8e FUN_148142f8e body=29 status=ok
// SIG undefined FUN_148142f8e(void)

void FUN_148142f8e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 148142fac FUN_148142fac body=29 status=ok
// SIG undefined FUN_148142fac(void)

undefined8 FUN_148142fac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148142fca FUN_148142fca body=105 status=ok
// SIG undefined FUN_148142fca(void)

void FUN_148142fca(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_148142986(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_148142986(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148143029. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 148143034 FUN_148143034 body=102 status=ok
// SIG undefined FUN_148143034(void)

void FUN_148143034(longlong *param_1,longlong param_2)

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
          FUN_14814309a(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x40 + *param_1 + 0x38);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14814309a FUN_14814309a body=123 status=ok
// SIG undefined FUN_14814309a(void)

void FUN_14814309a(longlong *param_1,int param_2)

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
  FUN_14813e410(*param_1 + lVar2 + 8);
  FUN_148142d48(param_1,param_2);
  return;
}



// FUNCTION 148143134 FUN_148143134 body=12 status=ok
// SIG undefined FUN_148143134(void)

void FUN_148143134(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014814313d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 148143140 FUN_148143140 body=29 status=ok
// SIG undefined FUN_148143140(void)

undefined8 FUN_148143140(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814315e FUN_14814315e body=117 status=ok
// SIG undefined FUN_14814315e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14814315e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_148143034(_DAT_000000a8 + 0x70,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_148143034(param_1[0x15] + 0x70,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001481431c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1481431d4 FUN_1481431d4 body=102 status=ok
// SIG undefined FUN_1481431d4(void)

void FUN_1481431d4(longlong *param_1,longlong param_2)

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
          FUN_14814323a(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14814323a FUN_14814323a body=87 status=ok
// SIG undefined FUN_14814323a(void)

void FUN_14814323a(longlong *param_1,int param_2)

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
  FUN_1481426ea();
  return;
}



// FUNCTION 148143292 FUN_148143292 body=221 status=ok
// SIG undefined FUN_148143292(void)

void FUN_148143292(longlong param_1,longlong param_2)

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



// FUNCTION 148143370 FUN_148143370 body=77 status=ok
// SIG undefined FUN_148143370(void)

void FUN_148143370(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  
  FUN_148143c10(param_1,param_2,param_4);
  if (((int)param_4[1] != 0) && ((longlong *)*param_4 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*param_4 + 0x30))();
    if (cVar1 != '\0') {
      return;
    }
  }
  FUN_148144126(param_1,param_2,param_4);
  return;
}



// FUNCTION 1481433e4 FUN_1481433e4 body=53 status=ok
// SIG undefined FUN_1481433e4(void)

undefined8 *
FUN_1481433e4(undefined8 param_1,undefined8 *param_2,longlong param_3,int *param_4,int param_5)

{
  *param_2 = 0;
  param_2[1] = 0;
  if (param_5 < *param_4) {
    FUN_144a83b10(param_2,*(undefined4 *)
                           ((longlong)param_4[1] + *(longlong *)(param_3 + 0x48) +
                           (longlong)param_5 * 4));
  }
  return param_2;
}



// FUNCTION 14814341a FUN_14814341a body=35 status=ok
// SIG undefined FUN_14814341a(void)

undefined8 FUN_14814341a(longlong param_1,longlong param_2)

{
  FUN_14054c6c4(*(longlong *)(param_2 + 0x10) + 0x50,*(longlong *)(param_1 + 0x10) + 0x50);
  return 1;
}



// FUNCTION 14814343e FUN_14814343e body=62 status=ok
// SIG undefined FUN_14814343e(void)

undefined8 FUN_14814343e(longlong param_1,longlong param_2)

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
                     (longlong)iVar2 << 2);
      uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),iVar2 == 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 14814347c FUN_14814347c body=191 status=ok
// SIG undefined FUN_14814347c(void)

undefined8 *
FUN_14814347c(longlong *param_1,ulonglong *param_2,undefined8 param_3,undefined2 *param_4,
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
  FUN_14814353c(puVar5,param_3,uVar4,uVar1,param_5);
  *puVar5 = &PTR_FUN_14adbf930;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_14470e57a(param_1,iVar2);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x2c) = (int)param_1[1] + -1;
  return puVar5;
}



// FUNCTION 14814353c FUN_14814353c body=144 status=ok
// SIG undefined FUN_14814353c(void)

undefined8 *
FUN_14814353c(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined *local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &DAT_14cb3ac40;
  local_28 = *(longlong *)(param_3 + 0x48);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  local_38 = 0;
  local_20 = param_3;
  FUN_140068f1a(param_1,param_2,&local_30);
  *param_1 = &PTR_FUN_14adbf950;
  FUN_148143638(param_1 + 0x37,param_5);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481435ce FUN_1481435ce body=105 status=ok
// SIG undefined FUN_1481435ce(void)

undefined8 * FUN_1481435ce(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14adbf950;
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



// FUNCTION 148143638 FUN_148143638 body=258 status=ok
// SIG undefined FUN_148143638(void)

void FUN_148143638(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 14814373a FUN_14814373a body=105 status=ok
// SIG undefined FUN_14814373a(void)

undefined8 * FUN_14814373a(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14adbf950;
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



// FUNCTION 1481437a4 FUN_1481437a4 body=214 status=ok
// SIG undefined FUN_1481437a4(void)

void FUN_1481437a4(longlong param_1,undefined8 param_2)

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
  local_48 = &PTR_LAB_14adbf970;
  local_68 = FUN_14814387c;
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



// FUNCTION 14814387c FUN_14814387c body=62 status=ok
// SIG undefined FUN_14814387c(void)

void FUN_14814387c(undefined8 param_1,undefined4 *param_2)

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
  FUN_14814390c();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481438ee FUN_1481438ee body=29 status=ok
// SIG undefined FUN_1481438ee(void)

undefined8 FUN_1481438ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814390c FUN_14814390c body=297 status=ok
// SIG undefined FUN_14814390c(void)

void FUN_14814390c(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined1 auStack_b8 [32];
  void *local_98;
  undefined8 uStack_90;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uStack_90._0_4_ = **(int **)*param_2;
  lVar5 = (longlong)(int)uStack_90;
  local_98 = (void *)0x0;
  if (lVar5 < 1) {
    uVar6 = 0;
    iVar4 = 0;
    pvVar7 = (void *)0x0;
  }
  else {
    uStack_90._4_4_ = 0;
    FUN_1446f48e2(&local_98,0);
    memcpy(local_98,*(void **)(*param_2 + 0x10),lVar5 << 2);
    pvVar7 = local_98;
    iVar4 = (int)uStack_90;
    uVar6 = uStack_90._4_4_;
  }
  uVar1 = *param_1;
  local_98 = (void *)0x0;
  uStack_90 = 0;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  local_88[0] = (code *)0x0;
  local_78 = (undefined8 *)FUN_14001cc68(0x30,8);
  *local_78 = &PTR_LAB_14adbf990;
  local_78[1] = uVar1;
  local_78[2] = pvVar7;
  *(int *)(local_78 + 3) = iVar4;
  *(undefined4 *)((longlong)local_78 + 0x1c) = uVar6;
  local_78[4] = uVar2;
  local_78[5] = uVar3;
  if (local_78 + 1 != (undefined8 *)0x0) {
    local_88[0] = FUN_148143a36;
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



// FUNCTION 148143a36 FUN_148143a36 body=52 status=ok
// SIG undefined FUN_148143a36(void)

void FUN_148143a36(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 3);
  if (lVar1 == 0) {
    return;
  }
  FUN_148143acc(param_1[4],*param_1,param_1 + 1);
  return;
}



// FUNCTION 148143a74 FUN_148143a74 body=29 status=ok
// SIG undefined FUN_148143a74(void)

void FUN_148143a74(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 148143a92 FUN_148143a92 body=57 status=ok
// SIG undefined FUN_148143a92(void)

undefined8 * FUN_148143a92(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14adbf990;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148143acc FUN_148143acc body=216 status=ok
// SIG undefined FUN_148143acc(void)

void FUN_148143acc(longlong param_1,longlong param_2,undefined8 param_3)

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
            FUN_14054c6c4(pcVar2 + 0x10,lVar4 + 0x50);
          }
          FUN_14054c6c4(pcVar2 + 0x10,param_3);
          pcVar2[1] = pcVar2[1] | *(byte *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148143b9d. Too many branches */
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



// FUNCTION 148143ba4 FUN_148143ba4 body=107 status=ok
// SIG undefined FUN_148143ba4(void)

undefined8 * FUN_148143ba4(undefined8 *param_1,longlong param_2,char *param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 != (char *)0x0) {
    *param_1 = (PSRWLOCK)(param_3 + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(param_3 + 8));
    if (*param_3 == '\x01') {
      FUN_14054c6c4(param_2 + 0x50,param_3 + 0x10);
    }
    *param_3 = '\0';
    param_3[0x18] = '\0';
    param_3[0x19] = '\0';
    param_3[0x1a] = '\0';
    param_3[0x1b] = '\0';
    if (*(int *)(param_3 + 0x1c) != 0) {
      FUN_14481578e(param_3 + 0x10,0);
    }
  }
  param_1[1] = param_2 + 0x50;
  return param_1;
}



// FUNCTION 148143c10 FUN_148143c10 body=1301 status=ok
// SIG undefined FUN_148143c10(void)

void FUN_148143c10(undefined8 param_1,longlong *param_2,undefined8 param_3)

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
    ppuVar2 = &PTR_FUN_14adbf9b0;
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
    ppuVar2 = &PTR_FUN_14adbfa20;
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
    ppuVar2 = &PTR_FUN_14adbfa90;
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
    ppuVar2 = &PTR_FUN_14adbfb00;
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
    ppuVar2 = &PTR_FUN_14adbfb70;
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
    ppuVar2 = &PTR_FUN_14adbfbe0;
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
    ppuVar2 = &PTR_FUN_14adbfc50;
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
    ppuVar2 = &PTR_FUN_14adbfcc0;
  }
  else {
    if (lVar1 != DAT_14cb3aaa8) goto LAB_148143cbf;
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
    ppuVar2 = &PTR_FUN_14adbfd30;
  }
  local_28 = 2;
  *local_30 = ppuVar2;
  local_30[3] = param_1;
  FUN_144a450dc(param_3,&local_30);
  FUN_1449db362(&local_30);
LAB_148143cbf:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148144126 FUN_148144126 body=490 status=ok
// SIG undefined FUN_148144126(void)

void FUN_148144126(undefined8 param_1,longlong *param_2,undefined8 param_3)

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
  if (lVar1 == DAT_14cb3aab0) {
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
    ppuVar2 = &PTR_FUN_14adbfda0;
  }
  else if (lVar1 == DAT_14cb3aab8) {
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
    ppuVar2 = &PTR_FUN_14adbfe10;
  }
  else {
    if (lVar1 != DAT_14cb3aac0) goto LAB_1481441d5;
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
    ppuVar2 = &PTR_FUN_14adbfe80;
  }
  local_28 = 2;
  *local_30 = ppuVar2;
  local_30[3] = param_1;
  FUN_144a450dc(param_3,&local_30);
  FUN_1449db362(&local_30);
LAB_1481441d5:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148144312 FUN_148144312 body=29 status=ok
// SIG undefined FUN_148144312(void)

undefined8 FUN_148144312(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148144344 FUN_148144344 body=93 status=ok
// SIG undefined FUN_148144344(void)

void FUN_148144344(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbf9b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481443a2 FUN_1481443a2 body=93 status=ok
// SIG undefined FUN_1481443a2(void)

void FUN_1481443a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbf9b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148144400 FUN_148144400 body=126 status=ok
// SIG undefined FUN_148144400(void)

void FUN_148144400(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbf9b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014814446f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148144488 FUN_148144488 body=20 status=ok
// SIG undefined FUN_148144488(void)

undefined1 FUN_148144488(longlong param_1)

{
  FUN_14814449c(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14814449c FUN_14814449c body=240 status=ok
// SIG undefined FUN_14814449c(void)

void FUN_14814449c(longlong param_1,char *param_2)

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
  FUN_14814458e(local_38);
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
      goto LAB_148144506;
    }
  }
  local_30 = (char *)(lVar3 + 0x50);
LAB_148144506:
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



// FUNCTION 14814458e FUN_14814458e body=148 status=ok
// SIG undefined FUN_14814458e(void)

void FUN_14814458e(int *param_1,char *param_2)

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



// FUNCTION 148144622 FUN_148144622 body=29 status=ok
// SIG undefined FUN_148144622(void)

undefined8 FUN_148144622(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148144654 FUN_148144654 body=93 status=ok
// SIG undefined FUN_148144654(void)

void FUN_148144654(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbfa20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481446b2 FUN_1481446b2 body=93 status=ok
// SIG undefined FUN_1481446b2(void)

void FUN_1481446b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbfa20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148144710 FUN_148144710 body=126 status=ok
// SIG undefined FUN_148144710(void)

void FUN_148144710(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbfa20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014814477f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148144798 FUN_148144798 body=20 status=ok
// SIG undefined FUN_148144798(void)

undefined1 FUN_148144798(longlong param_1)

{
  FUN_1481447ac(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481447ac FUN_1481447ac body=312 status=ok
// SIG undefined FUN_1481447ac(void)

void FUN_1481447ac(longlong param_1,char *param_2)

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
  FUN_14814458e(local_38);
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
      goto LAB_148144830;
    }
  }
  local_30 = (char *)(lVar3 + 0x50);
LAB_148144830:
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



// FUNCTION 1481448e6 FUN_1481448e6 body=29 status=ok
// SIG undefined FUN_1481448e6(void)

undefined8 FUN_1481448e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148144918 FUN_148144918 body=93 status=ok
// SIG undefined FUN_148144918(void)

void FUN_148144918(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbfa90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148144976 FUN_148144976 body=93 status=ok
// SIG undefined FUN_148144976(void)

void FUN_148144976(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbfa90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481449d4 FUN_1481449d4 body=126 status=ok
// SIG undefined FUN_1481449d4(void)

void FUN_1481449d4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbfa90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148144a43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148144a5c FUN_148144a5c body=20 status=ok
// SIG undefined FUN_148144a5c(void)

undefined1 FUN_148144a5c(longlong param_1)

{
  FUN_148144a70(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148144a70 FUN_148144a70 body=242 status=ok
// SIG undefined FUN_148144a70(void)

void FUN_148144a70(longlong param_1,char *param_2)

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
  FUN_14814458e(local_38);
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
      goto LAB_148144ada;
    }
  }
  local_30 = (char *)(lVar2 + 0x50);
LAB_148144ada:
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



// FUNCTION 148144b64 FUN_148144b64 body=29 status=ok
// SIG undefined FUN_148144b64(void)

undefined8 FUN_148144b64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148144b96 FUN_148144b96 body=93 status=ok
// SIG undefined FUN_148144b96(void)

void FUN_148144b96(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbfb00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148144bf4 FUN_148144bf4 body=93 status=ok
// SIG undefined FUN_148144bf4(void)

void FUN_148144bf4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbfb00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148144c52 FUN_148144c52 body=126 status=ok
// SIG undefined FUN_148144c52(void)

void FUN_148144c52(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbfb00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148144cc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148144cda FUN_148144cda body=20 status=ok
// SIG undefined FUN_148144cda(void)

undefined1 FUN_148144cda(longlong param_1)

{
  FUN_148144cee(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148144cee FUN_148144cee body=381 status=ok
// SIG undefined FUN_148144cee(void)

void FUN_148144cee(longlong param_1,char *param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  uint uVar5;
  int *piVar6;
  longlong *plVar7;
  PSRWLOCK SRWLock;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  int local_60;
  uint *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14814458e(local_38);
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
      goto LAB_148144d72;
    }
  }
  plVar7 = (longlong *)(lVar4 + 0x50);
LAB_148144d72:
  piVar1 = (int *)(param_2 + 0x3c);
  piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar6 = piVar1;
  }
  if ((int)plVar7[1] < 1) {
    if (0 < *piVar6) {
      iVar8 = 0;
      do {
        puVar3 = local_68 + local_60;
        *local_68 = 0;
        iVar8 = iVar8 + 1;
        piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar6 = piVar1;
        }
        local_68 = puVar3;
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
      *local_68 = *(undefined4 *)(*plVar7 + uVar10 * 4);
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



// FUNCTION 148144e6c FUN_148144e6c body=29 status=ok
// SIG undefined FUN_148144e6c(void)

undefined8 FUN_148144e6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148144e9e FUN_148144e9e body=93 status=ok
// SIG undefined FUN_148144e9e(void)

void FUN_148144e9e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbfb70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148144efc FUN_148144efc body=93 status=ok
// SIG undefined FUN_148144efc(void)

void FUN_148144efc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbfb70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148144f5a FUN_148144f5a body=126 status=ok
// SIG undefined FUN_148144f5a(void)

void FUN_148144f5a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbfb70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148144fc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148144fe2 FUN_148144fe2 body=20 status=ok
// SIG undefined FUN_148144fe2(void)

undefined1 FUN_148144fe2(longlong param_1)

{
  FUN_148144ff6(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148144ff6 FUN_148144ff6 body=185 status=ok
// SIG undefined FUN_148144ff6(void)

void FUN_148144ff6(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  PSRWLOCK SRWLock;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14814458e(local_38);
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
      FUN_14054c6c4(pcVar2 + 0x10,lVar1 + 0x50);
    }
    pcVar2 = pcVar2 + 0x10;
  }
  pcVar2[8] = '\0';
  pcVar2[9] = '\0';
  pcVar2[10] = '\0';
  pcVar2[0xb] = '\0';
  if (*(int *)(pcVar2 + 0xc) < 0) {
    FUN_14481578e(pcVar2,0);
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



// FUNCTION 1481450b0 FUN_1481450b0 body=29 status=ok
// SIG undefined FUN_1481450b0(void)

undefined8 FUN_1481450b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481450e2 FUN_1481450e2 body=93 status=ok
// SIG undefined FUN_1481450e2(void)

void FUN_1481450e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbfbe0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148145140 FUN_148145140 body=93 status=ok
// SIG undefined FUN_148145140(void)

void FUN_148145140(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbfbe0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814519e FUN_14814519e body=126 status=ok
// SIG undefined FUN_14814519e(void)

void FUN_14814519e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbfbe0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014814520d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148145226 FUN_148145226 body=20 status=ok
// SIG undefined FUN_148145226(void)

undefined1 FUN_148145226(longlong param_1)

{
  FUN_14814523a(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14814523a FUN_14814523a body=265 status=ok
// SIG undefined FUN_14814523a(void)

void FUN_14814523a(longlong param_1,undefined8 param_2)

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
  FUN_14814458e(local_40);
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
      FUN_14054c6c4(pcVar3 + 0x10,lVar2 + 0x50);
    }
    plVar4 = (longlong *)(pcVar3 + 0x10);
  }
  lVar2 = plVar4[1];
  lVar5 = (longlong)(int)lVar2;
  iVar1 = *local_58;
  local_58 = local_58 + local_48;
  FUN_144a127d2(plVar4,iVar1,1);
  if ((int)lVar2 < iVar1) {
    do {
      *(undefined4 *)(*plVar4 + lVar5 * 4) = 0;
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



// FUNCTION 148145344 FUN_148145344 body=29 status=ok
// SIG undefined FUN_148145344(void)

undefined8 FUN_148145344(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148145376 FUN_148145376 body=93 status=ok
// SIG undefined FUN_148145376(void)

void FUN_148145376(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbfc50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481453d4 FUN_1481453d4 body=93 status=ok
// SIG undefined FUN_1481453d4(void)

void FUN_1481453d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbfc50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148145432 FUN_148145432 body=126 status=ok
// SIG undefined FUN_148145432(void)

void FUN_148145432(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbfc50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481454a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481454ba FUN_1481454ba body=20 status=ok
// SIG undefined FUN_1481454ba(void)

undefined1 FUN_1481454ba(longlong param_1)

{
  FUN_1481454ce(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481454ce FUN_1481454ce body=444 status=ok
// SIG undefined FUN_1481454ce(void)

void FUN_1481454ce(longlong param_1,byte *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
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
  undefined4 *local_b8;
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
  local_b8 = (undefined4 *)0x0;
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
      FUN_14054c6c4(pcVar5 + 0x10,lVar7 + 0x50);
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
      puVar2 = local_b8 + local_a8;
      piVar3 = local_78 + local_68;
      if ((-1 < (int)uVar4 && *local_78 == 0) && ((int)uVar4 < (int)plVar10[1])) {
        *(undefined4 *)(*plVar10 + (ulonglong)uVar4 * 4) = *local_b8;
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



// FUNCTION 14814568c FUN_14814568c body=29 status=ok
// SIG undefined FUN_14814568c(void)

undefined8 FUN_14814568c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481456be FUN_1481456be body=93 status=ok
// SIG undefined FUN_1481456be(void)

void FUN_1481456be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbfcc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814571c FUN_14814571c body=93 status=ok
// SIG undefined FUN_14814571c(void)

void FUN_14814571c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbfcc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14814577a FUN_14814577a body=126 status=ok
// SIG undefined FUN_14814577a(void)

void FUN_14814577a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbfcc0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481457e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148145802 FUN_148145802 body=20 status=ok
// SIG undefined FUN_148145802(void)

undefined1 FUN_148145802(longlong param_1)

{
  FUN_148145816(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148145816 FUN_148145816 body=425 status=ok
// SIG undefined FUN_148145816(void)

void FUN_148145816(longlong param_1,byte *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  byte bVar6;
  longlong lVar7;
  byte *pbVar8;
  PSRWLOCK SRWLock;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  undefined4 *local_a8;
  undefined8 uStack_a0;
  int local_98;
  int *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined1 local_70 [8];
  char *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14814458e(local_70);
  local_78 = 0;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  FUN_144a76d88(&local_88,param_2);
  local_98 = 0;
  local_a8 = (undefined4 *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_2);
  pcVar4 = local_68;
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
    if (*pcVar4 == '\0') {
      *pcVar4 = '\x01';
      FUN_14054c6c4(pcVar4 + 0x10,lVar7 + 0x50);
    }
    plVar11 = (longlong *)(pcVar4 + 0x10);
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
      iVar2 = *local_88;
      puVar5 = local_a8 + local_98;
      local_88 = piVar1;
      if (iVar2 == 0) {
        iVar2 = (int)plVar11[1];
        if (iVar2 < iVar9) {
          uVar3 = *local_a8;
          *(uint *)(plVar11 + 1) = iVar2 + 1U;
          local_a8 = puVar5;
          if (*(uint *)((longlong)plVar11 + 0xc) < iVar2 + 1U) {
            FUN_1446f48e2(plVar11,iVar2);
          }
          *(undefined4 *)(*plVar11 + (longlong)iVar2 * 4) = uVar3;
          bVar6 = *param_2;
          lVar7 = *(longlong *)(param_2 + 0x80);
          puVar5 = local_a8;
        }
      }
      local_a8 = puVar5;
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



// FUNCTION 1481459c0 FUN_1481459c0 body=29 status=ok
// SIG undefined FUN_1481459c0(void)

undefined8 FUN_1481459c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481459f2 FUN_1481459f2 body=93 status=ok
// SIG undefined FUN_1481459f2(void)

void FUN_1481459f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbfd30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148145a50 FUN_148145a50 body=93 status=ok
// SIG undefined FUN_148145a50(void)

void FUN_148145a50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbfd30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148145aae FUN_148145aae body=126 status=ok
// SIG undefined FUN_148145aae(void)

void FUN_148145aae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbfd30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148145b1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148145b36 FUN_148145b36 body=20 status=ok
// SIG undefined FUN_148145b36(void)

undefined1 FUN_148145b36(longlong param_1)

{
  FUN_148145b4a(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148145b4a FUN_148145b4a body=450 status=ok
// SIG undefined FUN_148145b4a(void)

void FUN_148145b4a(longlong param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  char *pcVar4;
  int *piVar5;
  PSRWLOCK SRWLock;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  int local_90;
  undefined4 *local_88;
  int local_80;
  int *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined1 local_58 [8];
  char *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14814458e(local_58);
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
      FUN_14054c6c4(pcVar4 + 0x10,lVar3 + 0x50);
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
        iVar1 = (int)plVar7[1];
        if ((longlong)iVar1 == 0) goto LAB_148145c28;
        uVar2 = *(undefined4 *)(*plVar7 + -4 + (longlong)iVar1 * 4);
        *(int *)(plVar7 + 1) = iVar1 + -1;
        local_78 = local_78 + local_68;
        FUN_14479f406(plVar7);
        *local_88 = uVar2;
        *local_98 = 0xffffffff;
        local_98 = local_98 + local_90;
        local_88 = local_88 + local_80;
      }
      else {
LAB_148145c28:
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



// FUNCTION 148145d0e FUN_148145d0e body=29 status=ok
// SIG undefined FUN_148145d0e(void)

undefined8 FUN_148145d0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148145d40 FUN_148145d40 body=93 status=ok
// SIG undefined FUN_148145d40(void)

void FUN_148145d40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbfda0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148145d9e FUN_148145d9e body=93 status=ok
// SIG undefined FUN_148145d9e(void)

void FUN_148145d9e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbfda0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148145dfc FUN_148145dfc body=126 status=ok
// SIG undefined FUN_148145dfc(void)

void FUN_148145dfc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbfda0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148145e6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}


