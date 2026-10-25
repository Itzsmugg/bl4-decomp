// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1498baeb0 FUN_1498baeb0 body=126 status=ok
// SIG undefined FUN_1498baeb0(void)

void FUN_1498baeb0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beeb180;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498baf1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498baf38 FUN_1498baf38 body=20 status=ok
// SIG undefined FUN_1498baf38(void)

undefined1 FUN_1498baf38(longlong param_1)

{
  FUN_1498baf4c(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498baf4c FUN_1498baf4c body=234 status=ok
// SIG undefined FUN_1498baf4c(void)

void FUN_1498baf4c(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  int local_40;
  int *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14017991c(local_28);
  FUN_144a76cd4(&local_38,param_2);
  FUN_144a76c20(&local_48,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      piVar3 = local_38 + local_30;
      iVar4 = *local_38 - *(int *)(param_1 + 0x290);
      uVar7 = 0;
      if (-2 < iVar4) {
        uVar5 = iVar4 + 1;
        if ((int)uVar5 < *(int *)(local_20 + 0x88)) {
          uVar7 = *(undefined4 *)(*(longlong *)(local_20 + 0x80) + (ulonglong)uVar5 * 4);
        }
      }
      puVar1 = local_48 + local_40;
      *local_48 = uVar7;
      iVar2 = iVar2 + 1;
      piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar6 = (int *)(param_2 + 0x3c);
      }
      local_48 = puVar1;
      local_38 = piVar3;
    } while (iVar2 < *piVar6);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498bb038 FUN_1498bb038 body=165 status=ok
// SIG undefined FUN_1498bb038(void)

void FUN_1498bb038(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeb1f0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498bb0de FUN_1498bb0de body=165 status=ok
// SIG undefined FUN_1498bb0de(void)

void FUN_1498bb0de(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeb260;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498bb184 FUN_1498bb184 body=29 status=ok
// SIG undefined FUN_1498bb184(void)

undefined8 FUN_1498bb184(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498bb1b6 FUN_1498bb1b6 body=93 status=ok
// SIG undefined FUN_1498bb1b6(void)

void FUN_1498bb1b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb1f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498bb214 FUN_1498bb214 body=93 status=ok
// SIG undefined FUN_1498bb214(void)

void FUN_1498bb214(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb1f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498bb272 FUN_1498bb272 body=126 status=ok
// SIG undefined FUN_1498bb272(void)

void FUN_1498bb272(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beeb1f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498bb2e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498bb2fa FUN_1498bb2fa body=20 status=ok
// SIG undefined FUN_1498bb2fa(void)

undefined1 FUN_1498bb2fa(longlong param_1)

{
  FUN_1498bb30e(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498bb30e FUN_1498bb30e body=1071 status=ok
// SIG undefined FUN_1498bb30e(void)

void FUN_1498bb30e(longlong param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_f8 [40];
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
  float *local_80;
  int local_78;
  float *local_70;
  int local_68;
  float *local_60;
  int local_58;
  float *local_50;
  int local_48;
  float *local_40;
  int local_38;
  int local_2c;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14017991c(local_28);
  FUN_1498b5b4a(&local_2c,param_2);
  FUN_144a76c20(&local_60,param_2);
  FUN_144a76c20(&local_50,param_2);
  FUN_144a76c20(&local_40,param_2);
  FUN_144a76c20(&local_a0,param_2);
  FUN_144a76c20(&local_90,param_2);
  FUN_144a76c20(&local_80,param_2);
  FUN_144a76c20(&local_70,param_2);
  FUN_144a76c20(&local_d0,param_2);
  FUN_144a76c20(&local_c0,param_2);
  FUN_144a76c20(&local_b0,param_2);
  piVar10 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar10 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar10) {
    iVar9 = 0;
    do {
      fVar15 = DAT_14c846338;
      fVar14 = DAT_14c846330._4_4_;
      iVar11 = local_2c - *(int *)(param_1 + 0x290);
      if (iVar11 < -1) {
LAB_1498bb5b1:
        *local_60 = (float)DAT_14c846330;
        *local_50 = fVar14;
        *local_40 = fVar15;
        fVar8 = DAT_14c84634c;
        fVar15 = DAT_14c846348;
        fVar14 = DAT_14c846344;
        *local_a0 = DAT_14c84633c._4_4_;
        *local_90 = fVar14;
        *local_80 = fVar15;
        *local_70 = fVar8;
        *local_d0 = 1.0;
        fVar15 = 1.0;
        fVar14 = 1.0;
      }
      else {
        uVar12 = iVar11 + 1;
        if (*(int *)(local_20 + 0x158) <= (int)uVar12) goto LAB_1498bb5b1;
        lVar6 = *(longlong *)(local_20 + 0x150);
        lVar7 = (ulonglong)uVar12 * 0x18;
        dVar3 = *(double *)(lVar6 + 0x10 + lVar7);
        dVar4 = *(double *)(lVar6 + 8 + lVar7);
        *local_60 = (float)*(double *)(lVar6 + lVar7);
        *local_50 = (float)dVar4;
        *local_40 = (float)dVar3;
        lVar6 = *(longlong *)(local_20 + 0x160);
        lVar13 = (ulonglong)uVar12 * 0x20;
        dVar3 = *(double *)(lVar6 + 0x18 + lVar13);
        dVar4 = *(double *)(lVar6 + 0x10 + lVar13);
        dVar5 = *(double *)(lVar6 + 8 + lVar13);
        *local_a0 = (float)*(double *)(lVar6 + lVar13);
        *local_90 = (float)dVar5;
        *local_80 = (float)dVar4;
        *local_70 = (float)dVar3;
        lVar6 = *(longlong *)(local_20 + 0x170);
        fVar14 = (float)*(double *)(lVar6 + 0x10 + lVar7);
        fVar15 = (float)*(double *)(lVar6 + 8 + lVar7);
        *local_d0 = (float)*(double *)(lVar6 + lVar7);
      }
      local_40 = local_40 + local_38;
      local_50 = local_50 + local_48;
      local_60 = local_60 + local_58;
      local_70 = local_70 + local_68;
      local_80 = local_80 + local_78;
      local_90 = local_90 + local_88;
      local_a0 = local_a0 + local_98;
      local_d0 = local_d0 + local_c8;
      pfVar1 = local_c0 + local_b8;
      *local_c0 = fVar15;
      pfVar2 = local_b0 + local_a8;
      *local_b0 = fVar14;
      iVar9 = iVar9 + 1;
      piVar10 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar10 = (int *)(param_2 + 0x3c);
      }
      local_c0 = pfVar1;
      local_b0 = pfVar2;
    } while (iVar9 < *piVar10);
  }
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498bb73e FUN_1498bb73e body=29 status=ok
// SIG undefined FUN_1498bb73e(void)

undefined8 FUN_1498bb73e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498bb770 FUN_1498bb770 body=93 status=ok
// SIG undefined FUN_1498bb770(void)

void FUN_1498bb770(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb260;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498bb7ce FUN_1498bb7ce body=93 status=ok
// SIG undefined FUN_1498bb7ce(void)

void FUN_1498bb7ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb260;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498bb82c FUN_1498bb82c body=126 status=ok
// SIG undefined FUN_1498bb82c(void)

void FUN_1498bb82c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beeb260;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498bb89b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498bb8b4 FUN_1498bb8b4 body=20 status=ok
// SIG undefined FUN_1498bb8b4(void)

undefined1 FUN_1498bb8b4(longlong param_1)

{
  FUN_1498bb8c8(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498bb8c8 FUN_1498bb8c8 body=1088 status=ok
// SIG undefined FUN_1498bb8c8(void)

void FUN_1498bb8c8(longlong param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_f8 [32];
  float *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  float *local_b8;
  int local_b0;
  float *local_a8;
  int local_a0;
  float *local_98;
  int local_90;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float *local_68;
  int local_60;
  float *local_58;
  int local_50;
  float *local_48;
  int local_40;
  int *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14017991c(local_28);
  FUN_144a76cd4(&local_38,param_2);
  FUN_144a76c20(&local_68,param_2);
  FUN_144a76c20(&local_58,param_2);
  FUN_144a76c20(&local_48,param_2);
  FUN_144a76c20(&local_a8,param_2);
  FUN_144a76c20(&local_98,param_2);
  FUN_144a76c20(&local_88,param_2);
  FUN_144a76c20(&local_78,param_2);
  FUN_144a76c20(&local_d8,param_2);
  FUN_144a76c20(&local_c8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  piVar10 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar10 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar10) {
    iVar9 = 0;
    do {
      fVar16 = DAT_14c846338;
      fVar15 = DAT_14c846330._4_4_;
      piVar10 = local_38 + local_30;
      iVar11 = *local_38 - *(int *)(param_1 + 0x290);
      if (iVar11 < -1) {
LAB_1498bbb7f:
        *local_68 = (float)DAT_14c846330;
        *local_58 = fVar15;
        *local_48 = fVar16;
        fVar8 = DAT_14c84634c;
        fVar16 = DAT_14c846348;
        fVar15 = DAT_14c846344;
        *local_a8 = DAT_14c84633c._4_4_;
        *local_98 = fVar15;
        *local_88 = fVar16;
        *local_78 = fVar8;
        *local_d8 = 1.0;
        fVar16 = 1.0;
        fVar15 = 1.0;
      }
      else {
        uVar12 = iVar11 + 1;
        if (*(int *)(local_20 + 0x158) <= (int)uVar12) goto LAB_1498bbb7f;
        lVar6 = *(longlong *)(local_20 + 0x150);
        lVar7 = (ulonglong)uVar12 * 0x18;
        dVar3 = *(double *)(lVar6 + 0x10 + lVar7);
        dVar4 = *(double *)(lVar6 + 8 + lVar7);
        *local_68 = (float)*(double *)(lVar6 + lVar7);
        *local_58 = (float)dVar4;
        *local_48 = (float)dVar3;
        lVar6 = *(longlong *)(local_20 + 0x160);
        lVar14 = (ulonglong)uVar12 * 0x20;
        dVar3 = *(double *)(lVar6 + 0x18 + lVar14);
        dVar4 = *(double *)(lVar6 + 0x10 + lVar14);
        dVar5 = *(double *)(lVar6 + 8 + lVar14);
        *local_a8 = (float)*(double *)(lVar6 + lVar14);
        *local_98 = (float)dVar5;
        *local_88 = (float)dVar4;
        *local_78 = (float)dVar3;
        lVar6 = *(longlong *)(local_20 + 0x170);
        fVar15 = (float)*(double *)(lVar6 + 0x10 + lVar7);
        fVar16 = (float)*(double *)(lVar6 + 8 + lVar7);
        *local_d8 = (float)*(double *)(lVar6 + lVar7);
      }
      local_48 = local_48 + local_40;
      local_58 = local_58 + local_50;
      local_68 = local_68 + local_60;
      local_78 = local_78 + local_70;
      local_88 = local_88 + local_80;
      local_98 = local_98 + local_90;
      local_a8 = local_a8 + local_a0;
      local_d8 = local_d8 + local_d0;
      pfVar1 = local_c8 + local_c0;
      *local_c8 = fVar16;
      pfVar2 = local_b8 + local_b0;
      *local_b8 = fVar15;
      iVar9 = iVar9 + 1;
      piVar13 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar13 = (int *)(param_2 + 0x3c);
      }
      local_c8 = pfVar1;
      local_b8 = pfVar2;
      local_38 = piVar10;
    } while (iVar9 < *piVar13);
  }
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498bbd0a FUN_1498bbd0a body=165 status=ok
// SIG undefined FUN_1498bbd0a(void)

void FUN_1498bbd0a(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeb2d0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498bbdb0 FUN_1498bbdb0 body=165 status=ok
// SIG undefined FUN_1498bbdb0(void)

void FUN_1498bbdb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeb340;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498bbe56 FUN_1498bbe56 body=29 status=ok
// SIG undefined FUN_1498bbe56(void)

undefined8 FUN_1498bbe56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498bbe88 FUN_1498bbe88 body=93 status=ok
// SIG undefined FUN_1498bbe88(void)

void FUN_1498bbe88(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb2d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498bbee6 FUN_1498bbee6 body=93 status=ok
// SIG undefined FUN_1498bbee6(void)

void FUN_1498bbee6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb2d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498bbf44 FUN_1498bbf44 body=126 status=ok
// SIG undefined FUN_1498bbf44(void)

void FUN_1498bbf44(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beeb2d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498bbfb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498bbfcc FUN_1498bbfcc body=20 status=ok
// SIG undefined FUN_1498bbfcc(void)

undefined1 FUN_1498bbfcc(longlong param_1)

{
  FUN_1498bbfe0(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498bbfe0 FUN_1498bbfe0 body=347 status=ok
// SIG undefined FUN_1498bbfe0(void)

void FUN_1498bbfe0(longlong param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_88 [40];
  float *local_60;
  int local_58;
  float *local_50;
  int local_48;
  float *local_40;
  int local_38;
  int local_2c;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14017991c(local_28);
  FUN_1498b5b4a(&local_2c,param_2);
  FUN_144a76c20(&local_60,param_2);
  FUN_144a76c20(&local_50,param_2);
  FUN_144a76c20(&local_40,param_2);
  piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar6 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar6) {
    iVar5 = 0;
    do {
      iVar7 = local_2c - *(int *)(param_1 + 0x290);
      fVar10 = DAT_14c846338;
      fVar11 = DAT_14c846330._4_4_;
      fVar12 = (float)DAT_14c846330;
      if ((-2 < iVar7) && (uVar8 = iVar7 + 1, (int)uVar8 < *(int *)(local_20 + 0x188))) {
        lVar4 = *(longlong *)(local_20 + 0x180);
        uVar9 = (ulonglong)uVar8;
        fVar10 = (float)*(double *)(lVar4 + 0x10 + uVar9 * 0x18);
        fVar11 = (float)*(double *)(lVar4 + 8 + uVar9 * 0x18);
        fVar12 = (float)*(double *)(lVar4 + uVar9 * 0x18);
      }
      pfVar1 = local_60 + local_58;
      *local_60 = fVar12;
      pfVar2 = local_50 + local_48;
      *local_50 = fVar11;
      pfVar3 = local_40 + local_38;
      *local_40 = fVar10;
      iVar5 = iVar5 + 1;
      piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar6 = (int *)(param_2 + 0x3c);
      }
      local_60 = pfVar1;
      local_50 = pfVar2;
      local_40 = pfVar3;
    } while (iVar5 < *piVar6);
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498bc13c FUN_1498bc13c body=29 status=ok
// SIG undefined FUN_1498bc13c(void)

undefined8 FUN_1498bc13c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498bc16e FUN_1498bc16e body=93 status=ok
// SIG undefined FUN_1498bc16e(void)

void FUN_1498bc16e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb340;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498bc1cc FUN_1498bc1cc body=93 status=ok
// SIG undefined FUN_1498bc1cc(void)

void FUN_1498bc1cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb340;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498bc22a FUN_1498bc22a body=126 status=ok
// SIG undefined FUN_1498bc22a(void)

void FUN_1498bc22a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beeb340;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498bc299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498bc2b2 FUN_1498bc2b2 body=20 status=ok
// SIG undefined FUN_1498bc2b2(void)

undefined1 FUN_1498bc2b2(longlong param_1)

{
  FUN_1498bc2c6(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498bc2c6 FUN_1498bc2c6 body=364 status=ok
// SIG undefined FUN_1498bc2c6(void)

void FUN_1498bc2c6(longlong param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_88 [32];
  float *local_68;
  int local_60;
  float *local_58;
  int local_50;
  float *local_48;
  int local_40;
  int *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14017991c(local_28);
  FUN_144a76cd4(&local_38,param_2);
  FUN_144a76c20(&local_68,param_2);
  FUN_144a76c20(&local_58,param_2);
  FUN_144a76c20(&local_48,param_2);
  piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar6 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar6) {
    iVar5 = 0;
    do {
      piVar6 = local_38 + local_30;
      iVar7 = *local_38 - *(int *)(param_1 + 0x290);
      fVar11 = DAT_14c846338;
      fVar12 = DAT_14c846330._4_4_;
      fVar13 = (float)DAT_14c846330;
      if ((-2 < iVar7) && (uVar8 = iVar7 + 1, (int)uVar8 < *(int *)(local_20 + 0x188))) {
        lVar4 = *(longlong *)(local_20 + 0x180);
        uVar9 = (ulonglong)uVar8;
        fVar11 = (float)*(double *)(lVar4 + 0x10 + uVar9 * 0x18);
        fVar12 = (float)*(double *)(lVar4 + 8 + uVar9 * 0x18);
        fVar13 = (float)*(double *)(lVar4 + uVar9 * 0x18);
      }
      pfVar1 = local_68 + local_60;
      *local_68 = fVar13;
      pfVar2 = local_58 + local_50;
      *local_58 = fVar12;
      pfVar3 = local_48 + local_40;
      *local_48 = fVar11;
      iVar5 = iVar5 + 1;
      piVar10 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar10 = (int *)(param_2 + 0x3c);
      }
      local_68 = pfVar1;
      local_58 = pfVar2;
      local_48 = pfVar3;
      local_38 = piVar6;
    } while (iVar5 < *piVar10);
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498bc434 FUN_1498bc434 body=165 status=ok
// SIG undefined FUN_1498bc434(void)

void FUN_1498bc434(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeb3b0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498bc4da FUN_1498bc4da body=165 status=ok
// SIG undefined FUN_1498bc4da(void)

void FUN_1498bc4da(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeb420;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498bc580 FUN_1498bc580 body=29 status=ok
// SIG undefined FUN_1498bc580(void)

undefined8 FUN_1498bc580(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498bc5b2 FUN_1498bc5b2 body=93 status=ok
// SIG undefined FUN_1498bc5b2(void)

void FUN_1498bc5b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb3b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498bc610 FUN_1498bc610 body=93 status=ok
// SIG undefined FUN_1498bc610(void)

void FUN_1498bc610(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb3b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498bc66e FUN_1498bc66e body=126 status=ok
// SIG undefined FUN_1498bc66e(void)

void FUN_1498bc66e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beeb3b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498bc6dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498bc6f6 FUN_1498bc6f6 body=20 status=ok
// SIG undefined FUN_1498bc6f6(void)

undefined1 FUN_1498bc6f6(longlong param_1)

{
  FUN_1498bc70a(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498bc70a FUN_1498bc70a body=217 status=ok
// SIG undefined FUN_1498bc70a(void)

void FUN_1498bc70a(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  int local_38;
  int local_2c;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14017991c(local_28);
  FUN_1498b5b4a(&local_2c,param_2);
  FUN_144a76cd4(&local_40,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      iVar4 = local_2c - *(int *)(param_1 + 0x290);
      uVar6 = 0;
      if (-2 < iVar4) {
        uVar5 = iVar4 + 1;
        if ((int)uVar5 < *(int *)(local_20 + 0x98)) {
          uVar6 = *(undefined4 *)(*(longlong *)(local_20 + 0x90) + (ulonglong)uVar5 * 4);
        }
      }
      puVar1 = local_40 + local_38;
      *local_40 = uVar6;
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar3 = (int *)(param_2 + 0x3c);
      }
      local_40 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498bc7e4 FUN_1498bc7e4 body=29 status=ok
// SIG undefined FUN_1498bc7e4(void)

undefined8 FUN_1498bc7e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498bc816 FUN_1498bc816 body=93 status=ok
// SIG undefined FUN_1498bc816(void)

void FUN_1498bc816(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb420;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498bc874 FUN_1498bc874 body=93 status=ok
// SIG undefined FUN_1498bc874(void)

void FUN_1498bc874(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb420;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498bc8d2 FUN_1498bc8d2 body=126 status=ok
// SIG undefined FUN_1498bc8d2(void)

void FUN_1498bc8d2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beeb420;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498bc941. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498bc95a FUN_1498bc95a body=20 status=ok
// SIG undefined FUN_1498bc95a(void)

undefined1 FUN_1498bc95a(longlong param_1)

{
  FUN_1498bc96e(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498bc96e FUN_1498bc96e body=234 status=ok
// SIG undefined FUN_1498bc96e(void)

void FUN_1498bc96e(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  int local_40;
  int *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14017991c(local_28);
  FUN_144a76cd4(&local_38,param_2);
  FUN_144a76cd4(&local_48,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      piVar3 = local_38 + local_30;
      iVar4 = *local_38 - *(int *)(param_1 + 0x290);
      uVar7 = 0;
      if (-2 < iVar4) {
        uVar5 = iVar4 + 1;
        if ((int)uVar5 < *(int *)(local_20 + 0x98)) {
          uVar7 = *(undefined4 *)(*(longlong *)(local_20 + 0x90) + (ulonglong)uVar5 * 4);
        }
      }
      puVar1 = local_48 + local_40;
      *local_48 = uVar7;
      iVar2 = iVar2 + 1;
      piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar6 = (int *)(param_2 + 0x3c);
      }
      local_48 = puVar1;
      local_38 = piVar3;
    } while (iVar2 < *piVar6);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498bca5a FUN_1498bca5a body=165 status=ok
// SIG undefined FUN_1498bca5a(void)

void FUN_1498bca5a(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeb490;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498bcb00 FUN_1498bcb00 body=165 status=ok
// SIG undefined FUN_1498bcb00(void)

void FUN_1498bcb00(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeb500;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498bcba6 FUN_1498bcba6 body=29 status=ok
// SIG undefined FUN_1498bcba6(void)

undefined8 FUN_1498bcba6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498bcbd8 FUN_1498bcbd8 body=93 status=ok
// SIG undefined FUN_1498bcbd8(void)

void FUN_1498bcbd8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb490;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498bcc36 FUN_1498bcc36 body=93 status=ok
// SIG undefined FUN_1498bcc36(void)

void FUN_1498bcc36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb490;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498bcc94 FUN_1498bcc94 body=126 status=ok
// SIG undefined FUN_1498bcc94(void)

void FUN_1498bcc94(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beeb490;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498bcd03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498bcd1c FUN_1498bcd1c body=20 status=ok
// SIG undefined FUN_1498bcd1c(void)

undefined1 FUN_1498bcd1c(longlong param_1)

{
  FUN_1498bcd30(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498bcd30 FUN_1498bcd30 body=2092 status=ok
// SIG undefined FUN_1498bcd30(void)

void FUN_1498bcd30(longlong param_1,char *param_2)

{
  uint uVar1;
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
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  longlong lVar25;
  int *piVar26;
  int iVar27;
  ulonglong uVar28;
  int iVar29;
  ulonglong uVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  undefined1 auStack_1d8 [40];
  undefined4 *local_1b0;
  int local_1a8;
  undefined4 *local_1a0;
  int local_198;
  undefined4 *local_190;
  int local_188;
  float *local_180;
  int local_178;
  float *local_170;
  int local_168;
  float *local_160;
  int local_158;
  float *local_150;
  int local_148;
  float *local_140;
  int local_138;
  float *local_130;
  int local_128;
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
  float *local_80;
  int local_78;
  float *local_70;
  int local_68;
  float *local_60;
  int local_58;
  float *local_50;
  int local_48;
  float *local_40;
  int local_38;
  int local_2c;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_14017991c(local_28);
  FUN_1498b5b4a(&local_2c,param_2);
  FUN_144a76c20(&local_60,param_2);
  FUN_144a76c20(&local_50,param_2);
  FUN_144a76c20(&local_40,param_2);
  FUN_144a76c20(&local_90,param_2);
  FUN_144a76c20(&local_80,param_2);
  FUN_144a76c20(&local_70,param_2);
  FUN_144a76c20(&local_c0,param_2);
  FUN_144a76c20(&local_b0,param_2);
  FUN_144a76c20(&local_a0,param_2);
  FUN_144a76c20(&local_f0,param_2);
  FUN_144a76c20(&local_e0,param_2);
  FUN_144a76c20(&local_d0,param_2);
  FUN_144a76c20(&local_120,param_2);
  FUN_144a76c20(&local_110,param_2);
  FUN_144a76c20(&local_100,param_2);
  FUN_144a76c20(&local_150,param_2);
  FUN_144a76c20(&local_140,param_2);
  FUN_144a76c20(&local_130,param_2);
  FUN_144a76c20(&local_180,param_2);
  FUN_144a76c20(&local_170,param_2);
  FUN_144a76c20(&local_160,param_2);
  FUN_144a76c20(&local_190,param_2);
  FUN_144a76c20(&local_1a0,param_2);
  FUN_144a76c20(&local_1b0);
  piVar26 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar26 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar26) {
    iVar27 = 0;
    do {
      iVar29 = local_2c - *(int *)(param_1 + 0x290);
      uVar1 = iVar29 + 1;
      uVar28 = (ulonglong)uVar1;
      fVar31 = DAT_14c846338;
      fVar33 = DAT_14c846330._4_4_;
      fVar35 = (float)DAT_14c846330;
      if ((-2 < iVar29) && ((int)uVar1 < *(int *)(local_20 + 0xb8))) {
        lVar25 = *(longlong *)(local_20 + 0xb0);
        fVar31 = (float)*(double *)(lVar25 + 0x10 + uVar28 * 0x18);
        fVar33 = (float)*(double *)(lVar25 + 8 + uVar28 * 0x18);
        fVar35 = (float)*(double *)(lVar25 + uVar28 * 0x18);
      }
      pfVar2 = local_60 + local_58;
      *local_60 = fVar35;
      pfVar3 = local_50 + local_48;
      *local_50 = fVar33;
      pfVar4 = local_40 + local_38;
      *local_40 = fVar31;
      fVar31 = DAT_14c846338;
      fVar33 = DAT_14c846330._4_4_;
      fVar35 = (float)DAT_14c846330;
      if ((-2 < iVar29) && ((int)uVar1 < *(int *)(local_20 + 200))) {
        lVar25 = *(longlong *)(local_20 + 0xc0);
        fVar31 = (float)*(double *)(lVar25 + 0x10 + uVar28 * 0x18);
        fVar33 = (float)*(double *)(lVar25 + 8 + uVar28 * 0x18);
        fVar35 = (float)*(double *)(lVar25 + uVar28 * 0x18);
      }
      pfVar5 = local_90 + local_88;
      *local_90 = fVar35;
      pfVar6 = local_80 + local_78;
      *local_80 = fVar33;
      pfVar7 = local_70 + local_68;
      *local_70 = fVar31;
      fVar31 = DAT_14c846338;
      fVar33 = DAT_14c846330._4_4_;
      fVar35 = (float)DAT_14c846330;
      if ((-2 < iVar29) && ((int)uVar1 < *(int *)(local_20 + 0xd8))) {
        lVar25 = *(longlong *)(local_20 + 0xd0);
        fVar31 = (float)*(double *)(lVar25 + 0x10 + uVar28 * 0x18);
        fVar33 = (float)*(double *)(lVar25 + 8 + uVar28 * 0x18);
        fVar35 = (float)*(double *)(lVar25 + uVar28 * 0x18);
      }
      pfVar8 = local_c0 + local_b8;
      *local_c0 = fVar35;
      pfVar9 = local_b0 + local_a8;
      *local_b0 = fVar33;
      pfVar10 = local_a0 + local_98;
      *local_a0 = fVar31;
      fVar31 = DAT_14c846338;
      fVar33 = DAT_14c846330._4_4_;
      fVar35 = (float)DAT_14c846330;
      if ((-2 < iVar29) && ((int)uVar1 < *(int *)(local_20 + 0xe8))) {
        lVar25 = *(longlong *)(local_20 + 0xe0);
        fVar31 = (float)*(double *)(lVar25 + 0x10 + uVar28 * 0x18);
        fVar33 = (float)*(double *)(lVar25 + 8 + uVar28 * 0x18);
        fVar35 = (float)*(double *)(lVar25 + uVar28 * 0x18);
      }
      pfVar11 = local_f0 + local_e8;
      *local_f0 = fVar35;
      pfVar12 = local_e0 + local_d8;
      *local_e0 = fVar33;
      pfVar13 = local_d0 + local_c8;
      *local_d0 = fVar31;
      fVar31 = DAT_14c846338;
      fVar33 = DAT_14c846330._4_4_;
      fVar35 = (float)DAT_14c846330;
      if ((-2 < iVar29) && ((int)uVar1 < *(int *)(local_20 + 0xf8))) {
        lVar25 = *(longlong *)(local_20 + 0xf0);
        fVar31 = (float)*(double *)(lVar25 + 0x10 + uVar28 * 0x18);
        fVar33 = (float)*(double *)(lVar25 + 8 + uVar28 * 0x18);
        fVar35 = (float)*(double *)(lVar25 + uVar28 * 0x18);
      }
      pfVar14 = local_120 + local_118;
      *local_120 = fVar35;
      pfVar15 = local_110 + local_108;
      *local_110 = fVar33;
      pfVar16 = local_100 + local_f8;
      *local_100 = fVar31;
      fVar31 = DAT_14c846338;
      fVar33 = DAT_14c846330._4_4_;
      fVar35 = (float)DAT_14c846330;
      if ((-2 < iVar29) && ((int)uVar1 < *(int *)(local_20 + 0x108))) {
        lVar25 = *(longlong *)(local_20 + 0x100);
        uVar30 = (ulonglong)uVar1;
        fVar31 = (float)*(double *)(lVar25 + 0x10 + uVar30 * 0x18);
        fVar33 = (float)*(double *)(lVar25 + 8 + uVar30 * 0x18);
        fVar35 = (float)*(double *)(lVar25 + uVar30 * 0x18);
      }
      pfVar17 = local_150 + local_148;
      *local_150 = fVar35;
      pfVar18 = local_140 + local_138;
      *local_140 = fVar33;
      pfVar19 = local_130 + local_128;
      *local_130 = fVar31;
      fVar31 = DAT_14c846338;
      fVar33 = DAT_14c846330._4_4_;
      fVar35 = (float)DAT_14c846330;
      if ((-2 < iVar29) && ((int)uVar1 < *(int *)(local_20 + 0x118))) {
        lVar25 = *(longlong *)(local_20 + 0x110);
        fVar31 = (float)*(double *)(lVar25 + 0x10 + uVar28 * 0x18);
        fVar33 = (float)*(double *)(lVar25 + 8 + uVar28 * 0x18);
        fVar35 = (float)*(double *)(lVar25 + uVar28 * 0x18);
      }
      pfVar20 = local_180 + local_178;
      *local_180 = fVar35;
      pfVar21 = local_170 + local_168;
      *local_170 = fVar33;
      pfVar22 = local_160 + local_158;
      *local_160 = fVar31;
      if (iVar29 < -1) {
        *local_190 = 0;
        *local_1a0 = 0;
        uVar34 = 0;
        local_1a0 = local_1a0 + local_198;
        local_190 = local_190 + local_188;
      }
      else {
        uVar32 = 0;
        uVar34 = 0;
        if ((int)uVar1 < *(int *)(local_20 + 0x128)) {
          uVar34 = *(undefined4 *)(*(longlong *)(local_20 + 0x120) + uVar28 * 4);
        }
        puVar23 = local_190 + local_188;
        *local_190 = uVar34;
        if ((int)uVar1 < *(int *)(local_20 + 0x138)) {
          uVar32 = *(undefined4 *)(*(longlong *)(local_20 + 0x130) + uVar28 * 4);
        }
        puVar24 = local_1a0 + local_198;
        *local_1a0 = uVar32;
        uVar34 = 0;
        local_1a0 = puVar24;
        local_190 = puVar23;
        if ((int)uVar1 < *(int *)(local_20 + 0x148)) {
          uVar34 = *(undefined4 *)(*(longlong *)(local_20 + 0x140) + uVar28 * 4);
        }
      }
      puVar23 = local_1b0 + local_1a8;
      *local_1b0 = uVar34;
      iVar27 = iVar27 + 1;
      piVar26 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar26 = (int *)(param_2 + 0x3c);
      }
      local_1b0 = puVar23;
      local_180 = pfVar20;
      local_170 = pfVar21;
      local_160 = pfVar22;
      local_150 = pfVar17;
      local_140 = pfVar18;
      local_130 = pfVar19;
      local_120 = pfVar14;
      local_110 = pfVar15;
      local_100 = pfVar16;
      local_f0 = pfVar11;
      local_e0 = pfVar12;
      local_d0 = pfVar13;
      local_c0 = pfVar8;
      local_b0 = pfVar9;
      local_a0 = pfVar10;
      local_90 = pfVar5;
      local_80 = pfVar6;
      local_70 = pfVar7;
      local_60 = pfVar2;
      local_50 = pfVar3;
      local_40 = pfVar4;
    } while (iVar27 < *piVar26);
  }
  if ((local_18 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498bd55e FUN_1498bd55e body=29 status=ok
// SIG undefined FUN_1498bd55e(void)

undefined8 FUN_1498bd55e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498bd590 FUN_1498bd590 body=93 status=ok
// SIG undefined FUN_1498bd590(void)

void FUN_1498bd590(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb500;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498bd5ee FUN_1498bd5ee body=93 status=ok
// SIG undefined FUN_1498bd5ee(void)

void FUN_1498bd5ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb500;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498bd64c FUN_1498bd64c body=126 status=ok
// SIG undefined FUN_1498bd64c(void)

void FUN_1498bd64c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beeb500;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498bd6bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498bd6d4 FUN_1498bd6d4 body=20 status=ok
// SIG undefined FUN_1498bd6d4(void)

undefined1 FUN_1498bd6d4(longlong param_1)

{
  FUN_1498bd6e8(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498bd6e8 FUN_1498bd6e8 body=2112 status=ok
// SIG undefined FUN_1498bd6e8(void)

void FUN_1498bd6e8(longlong param_1,char *param_2)

{
  uint uVar1;
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
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  longlong lVar25;
  int *piVar26;
  int iVar27;
  ulonglong uVar28;
  int *piVar29;
  int iVar30;
  ulonglong uVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  undefined1 auStack_1d8 [32];
  undefined4 *local_1b8;
  int local_1b0;
  undefined4 *local_1a8;
  int local_1a0;
  undefined4 *local_198;
  int local_190;
  float *local_188;
  int local_180;
  float *local_178;
  int local_170;
  float *local_168;
  int local_160;
  float *local_158;
  int local_150;
  float *local_148;
  int local_140;
  float *local_138;
  int local_130;
  float *local_128;
  int local_120;
  float *local_118;
  int local_110;
  float *local_108;
  int local_100;
  float *local_f8;
  int local_f0;
  float *local_e8;
  int local_e0;
  float *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  float *local_b8;
  int local_b0;
  float *local_a8;
  int local_a0;
  float *local_98;
  int local_90;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float *local_68;
  int local_60;
  float *local_58;
  int local_50;
  float *local_48;
  int local_40;
  int *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_14017991c(local_28);
  FUN_144a76cd4(&local_38,param_2);
  FUN_144a76c20(&local_68,param_2);
  FUN_144a76c20(&local_58,param_2);
  FUN_144a76c20(&local_48,param_2);
  FUN_144a76c20(&local_98,param_2);
  FUN_144a76c20(&local_88,param_2);
  FUN_144a76c20(&local_78,param_2);
  FUN_144a76c20(&local_c8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  FUN_144a76c20(&local_a8,param_2);
  FUN_144a76c20(&local_f8,param_2);
  FUN_144a76c20(&local_e8,param_2);
  FUN_144a76c20(&local_d8,param_2);
  FUN_144a76c20(&local_128,param_2);
  FUN_144a76c20(&local_118,param_2);
  FUN_144a76c20(&local_108,param_2);
  FUN_144a76c20(&local_158,param_2);
  FUN_144a76c20(&local_148,param_2);
  FUN_144a76c20(&local_138,param_2);
  FUN_144a76c20(&local_188,param_2);
  FUN_144a76c20(&local_178,param_2);
  FUN_144a76c20(&local_168,param_2);
  FUN_144a76c20(&local_198,param_2);
  FUN_144a76c20(&local_1a8,param_2);
  FUN_144a76c20(&local_1b8);
  piVar26 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar26 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar26) {
    iVar27 = 0;
    do {
      piVar26 = local_38 + local_30;
      iVar30 = *local_38 - *(int *)(param_1 + 0x290);
      uVar1 = iVar30 + 1;
      uVar28 = (ulonglong)uVar1;
      fVar32 = DAT_14c846338;
      fVar34 = DAT_14c846330._4_4_;
      fVar36 = (float)DAT_14c846330;
      if ((-2 < iVar30) && ((int)uVar1 < *(int *)(local_20 + 0xb8))) {
        lVar25 = *(longlong *)(local_20 + 0xb0);
        fVar32 = (float)*(double *)(lVar25 + 0x10 + uVar28 * 0x18);
        fVar34 = (float)*(double *)(lVar25 + 8 + uVar28 * 0x18);
        fVar36 = (float)*(double *)(lVar25 + uVar28 * 0x18);
      }
      pfVar2 = local_68 + local_60;
      *local_68 = fVar36;
      pfVar3 = local_58 + local_50;
      *local_58 = fVar34;
      pfVar4 = local_48 + local_40;
      *local_48 = fVar32;
      fVar32 = DAT_14c846338;
      fVar34 = DAT_14c846330._4_4_;
      fVar36 = (float)DAT_14c846330;
      if ((-2 < iVar30) && ((int)uVar1 < *(int *)(local_20 + 200))) {
        lVar25 = *(longlong *)(local_20 + 0xc0);
        fVar32 = (float)*(double *)(lVar25 + 0x10 + uVar28 * 0x18);
        fVar34 = (float)*(double *)(lVar25 + 8 + uVar28 * 0x18);
        fVar36 = (float)*(double *)(lVar25 + uVar28 * 0x18);
      }
      pfVar5 = local_98 + local_90;
      *local_98 = fVar36;
      pfVar6 = local_88 + local_80;
      *local_88 = fVar34;
      pfVar7 = local_78 + local_70;
      *local_78 = fVar32;
      fVar32 = DAT_14c846338;
      fVar34 = DAT_14c846330._4_4_;
      fVar36 = (float)DAT_14c846330;
      if ((-2 < iVar30) && ((int)uVar1 < *(int *)(local_20 + 0xd8))) {
        lVar25 = *(longlong *)(local_20 + 0xd0);
        fVar32 = (float)*(double *)(lVar25 + 0x10 + uVar28 * 0x18);
        fVar34 = (float)*(double *)(lVar25 + 8 + uVar28 * 0x18);
        fVar36 = (float)*(double *)(lVar25 + uVar28 * 0x18);
      }
      pfVar8 = local_c8 + local_c0;
      *local_c8 = fVar36;
      pfVar9 = local_b8 + local_b0;
      *local_b8 = fVar34;
      pfVar10 = local_a8 + local_a0;
      *local_a8 = fVar32;
      fVar32 = DAT_14c846338;
      fVar34 = DAT_14c846330._4_4_;
      fVar36 = (float)DAT_14c846330;
      if ((-2 < iVar30) && ((int)uVar1 < *(int *)(local_20 + 0xe8))) {
        lVar25 = *(longlong *)(local_20 + 0xe0);
        fVar32 = (float)*(double *)(lVar25 + 0x10 + uVar28 * 0x18);
        fVar34 = (float)*(double *)(lVar25 + 8 + uVar28 * 0x18);
        fVar36 = (float)*(double *)(lVar25 + uVar28 * 0x18);
      }
      pfVar11 = local_f8 + local_f0;
      *local_f8 = fVar36;
      pfVar12 = local_e8 + local_e0;
      *local_e8 = fVar34;
      pfVar13 = local_d8 + local_d0;
      *local_d8 = fVar32;
      fVar32 = DAT_14c846338;
      fVar34 = DAT_14c846330._4_4_;
      fVar36 = (float)DAT_14c846330;
      if ((-2 < iVar30) && ((int)uVar1 < *(int *)(local_20 + 0xf8))) {
        lVar25 = *(longlong *)(local_20 + 0xf0);
        fVar32 = (float)*(double *)(lVar25 + 0x10 + uVar28 * 0x18);
        fVar34 = (float)*(double *)(lVar25 + 8 + uVar28 * 0x18);
        fVar36 = (float)*(double *)(lVar25 + uVar28 * 0x18);
      }
      pfVar14 = local_128 + local_120;
      *local_128 = fVar36;
      pfVar15 = local_118 + local_110;
      *local_118 = fVar34;
      pfVar16 = local_108 + local_100;
      *local_108 = fVar32;
      fVar32 = DAT_14c846338;
      fVar34 = DAT_14c846330._4_4_;
      fVar36 = (float)DAT_14c846330;
      if ((-2 < iVar30) && ((int)uVar1 < *(int *)(local_20 + 0x108))) {
        lVar25 = *(longlong *)(local_20 + 0x100);
        uVar31 = (ulonglong)uVar1;
        fVar32 = (float)*(double *)(lVar25 + 0x10 + uVar31 * 0x18);
        fVar34 = (float)*(double *)(lVar25 + 8 + uVar31 * 0x18);
        fVar36 = (float)*(double *)(lVar25 + uVar31 * 0x18);
      }
      pfVar17 = local_158 + local_150;
      *local_158 = fVar36;
      pfVar18 = local_148 + local_140;
      *local_148 = fVar34;
      pfVar19 = local_138 + local_130;
      *local_138 = fVar32;
      fVar32 = DAT_14c846338;
      fVar34 = DAT_14c846330._4_4_;
      fVar36 = (float)DAT_14c846330;
      if ((-2 < iVar30) && ((int)uVar1 < *(int *)(local_20 + 0x118))) {
        lVar25 = *(longlong *)(local_20 + 0x110);
        fVar32 = (float)*(double *)(lVar25 + 0x10 + uVar28 * 0x18);
        fVar34 = (float)*(double *)(lVar25 + 8 + uVar28 * 0x18);
        fVar36 = (float)*(double *)(lVar25 + uVar28 * 0x18);
      }
      pfVar20 = local_188 + local_180;
      *local_188 = fVar36;
      pfVar21 = local_178 + local_170;
      *local_178 = fVar34;
      pfVar22 = local_168 + local_160;
      *local_168 = fVar32;
      if (iVar30 < -1) {
        *local_198 = 0;
        *local_1a8 = 0;
        uVar35 = 0;
        local_1a8 = local_1a8 + local_1a0;
        local_198 = local_198 + local_190;
      }
      else {
        uVar33 = 0;
        uVar35 = 0;
        if ((int)uVar1 < *(int *)(local_20 + 0x128)) {
          uVar35 = *(undefined4 *)(*(longlong *)(local_20 + 0x120) + uVar28 * 4);
        }
        puVar23 = local_198 + local_190;
        *local_198 = uVar35;
        if ((int)uVar1 < *(int *)(local_20 + 0x138)) {
          uVar33 = *(undefined4 *)(*(longlong *)(local_20 + 0x130) + uVar28 * 4);
        }
        puVar24 = local_1a8 + local_1a0;
        *local_1a8 = uVar33;
        uVar35 = 0;
        local_1a8 = puVar24;
        local_198 = puVar23;
        if ((int)uVar1 < *(int *)(local_20 + 0x148)) {
          uVar35 = *(undefined4 *)(*(longlong *)(local_20 + 0x140) + uVar28 * 4);
        }
      }
      puVar23 = local_1b8 + local_1b0;
      *local_1b8 = uVar35;
      iVar27 = iVar27 + 1;
      piVar29 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar29 = (int *)(param_2 + 0x3c);
      }
      local_1b8 = puVar23;
      local_188 = pfVar20;
      local_178 = pfVar21;
      local_168 = pfVar22;
      local_158 = pfVar17;
      local_148 = pfVar18;
      local_138 = pfVar19;
      local_128 = pfVar14;
      local_118 = pfVar15;
      local_108 = pfVar16;
      local_f8 = pfVar11;
      local_e8 = pfVar12;
      local_d8 = pfVar13;
      local_c8 = pfVar8;
      local_b8 = pfVar9;
      local_a8 = pfVar10;
      local_98 = pfVar5;
      local_88 = pfVar6;
      local_78 = pfVar7;
      local_68 = pfVar2;
      local_58 = pfVar3;
      local_48 = pfVar4;
      local_38 = piVar26;
    } while (iVar27 < *piVar29);
  }
  if ((local_18 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498bdf2a FUN_1498bdf2a body=165 status=ok
// SIG undefined FUN_1498bdf2a(void)

void FUN_1498bdf2a(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeb570;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498bdfd0 FUN_1498bdfd0 body=165 status=ok
// SIG undefined FUN_1498bdfd0(void)

void FUN_1498bdfd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeb5e0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498be076 FUN_1498be076 body=29 status=ok
// SIG undefined FUN_1498be076(void)

undefined8 FUN_1498be076(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498be0a8 FUN_1498be0a8 body=93 status=ok
// SIG undefined FUN_1498be0a8(void)

void FUN_1498be0a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb570;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498be106 FUN_1498be106 body=93 status=ok
// SIG undefined FUN_1498be106(void)

void FUN_1498be106(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb570;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498be164 FUN_1498be164 body=126 status=ok
// SIG undefined FUN_1498be164(void)

void FUN_1498be164(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beeb570;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498be1d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498be1ec FUN_1498be1ec body=20 status=ok
// SIG undefined FUN_1498be1ec(void)

undefined1 FUN_1498be1ec(longlong param_1)

{
  FUN_1498be200(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498be200 FUN_1498be200 body=1027 status=ok
// SIG undefined FUN_1498be200(void)

void FUN_1498be200(longlong param_1,char *param_2)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  undefined4 *puVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  ulonglong uVar15;
  int iVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined1 auStack_108 [40];
  undefined4 *local_e0;
  int local_d8;
  undefined4 *local_d0;
  int local_c8;
  float *local_c0;
  int local_b8;
  float *local_b0;
  int local_a8;
  float *local_a0;
  int local_98;
  float *local_90;
  int local_88;
  float *local_80;
  int local_78;
  float *local_70;
  int local_68;
  float *local_60;
  int local_58;
  float *local_50;
  int local_48;
  float *local_40;
  int local_38;
  int local_2c;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14017991c(local_28);
  FUN_1498b5b4a(&local_2c,param_2);
  FUN_144a76c20(&local_60,param_2);
  FUN_144a76c20(&local_50,param_2);
  FUN_144a76c20(&local_40,param_2);
  FUN_144a76c20(&local_90,param_2);
  FUN_144a76c20(&local_80,param_2);
  FUN_144a76c20(&local_70,param_2);
  FUN_144a76c20(&local_c0,param_2);
  FUN_144a76c20(&local_b0,param_2);
  FUN_144a76c20(&local_a0,param_2);
  FUN_144a76c20(&local_d0,param_2);
  FUN_144a76c20(&local_e0,param_2);
  piVar14 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar14 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar14) {
    iVar13 = 0;
    do {
      iVar16 = local_2c - *(int *)(param_1 + 0x290);
      uVar1 = iVar16 + 1;
      uVar15 = (ulonglong)uVar1;
      fVar17 = DAT_14c846338;
      fVar19 = DAT_14c846330._4_4_;
      fVar21 = (float)DAT_14c846330;
      if ((-2 < iVar16) && ((int)uVar1 < *(int *)(local_20 + 0xb8))) {
        lVar12 = *(longlong *)(local_20 + 0xb0);
        fVar17 = (float)*(double *)(lVar12 + 0x10 + uVar15 * 0x18);
        fVar19 = (float)*(double *)(lVar12 + 8 + uVar15 * 0x18);
        fVar21 = (float)*(double *)(lVar12 + uVar15 * 0x18);
      }
      pfVar2 = local_60 + local_58;
      *local_60 = fVar21;
      pfVar3 = local_50 + local_48;
      *local_50 = fVar19;
      pfVar4 = local_40 + local_38;
      *local_40 = fVar17;
      fVar17 = DAT_14c846338;
      fVar19 = DAT_14c846330._4_4_;
      fVar21 = (float)DAT_14c846330;
      if ((-2 < iVar16) && ((int)uVar1 < *(int *)(local_20 + 0xe8))) {
        lVar12 = *(longlong *)(local_20 + 0xe0);
        fVar17 = (float)*(double *)(lVar12 + 0x10 + uVar15 * 0x18);
        fVar19 = (float)*(double *)(lVar12 + 8 + uVar15 * 0x18);
        fVar21 = (float)*(double *)(lVar12 + uVar15 * 0x18);
      }
      pfVar5 = local_90 + local_88;
      *local_90 = fVar21;
      pfVar6 = local_80 + local_78;
      *local_80 = fVar19;
      pfVar7 = local_70 + local_68;
      *local_70 = fVar17;
      fVar17 = DAT_14c846338;
      fVar19 = DAT_14c846330._4_4_;
      fVar21 = (float)DAT_14c846330;
      if ((-2 < iVar16) && ((int)uVar1 < *(int *)(local_20 + 0x108))) {
        lVar12 = *(longlong *)(local_20 + 0x100);
        fVar17 = (float)*(double *)(lVar12 + 0x10 + uVar15 * 0x18);
        fVar19 = (float)*(double *)(lVar12 + 8 + uVar15 * 0x18);
        fVar21 = (float)*(double *)(lVar12 + uVar15 * 0x18);
      }
      pfVar8 = local_c0 + local_b8;
      *local_c0 = fVar21;
      pfVar9 = local_b0 + local_a8;
      *local_b0 = fVar19;
      pfVar10 = local_a0 + local_98;
      *local_a0 = fVar17;
      if (iVar16 < -1) {
        *local_d0 = 0;
        uVar18 = 0;
        local_d0 = local_d0 + local_c8;
      }
      else {
        uVar18 = 0;
        uVar20 = 0;
        if ((int)uVar1 < *(int *)(local_20 + 0x128)) {
          uVar20 = *(undefined4 *)(*(longlong *)(local_20 + 0x120) + uVar15 * 4);
        }
        puVar11 = local_d0 + local_c8;
        *local_d0 = uVar20;
        local_d0 = puVar11;
        if ((int)uVar1 < *(int *)(local_20 + 0x148)) {
          uVar18 = *(undefined4 *)(*(longlong *)(local_20 + 0x140) + uVar15 * 4);
        }
      }
      puVar11 = local_e0 + local_d8;
      *local_e0 = uVar18;
      iVar13 = iVar13 + 1;
      piVar14 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar14 = (int *)(param_2 + 0x3c);
      }
      local_e0 = puVar11;
      local_c0 = pfVar8;
      local_b0 = pfVar9;
      local_a0 = pfVar10;
      local_90 = pfVar5;
      local_80 = pfVar6;
      local_70 = pfVar7;
      local_60 = pfVar2;
      local_50 = pfVar3;
      local_40 = pfVar4;
    } while (iVar13 < *piVar14);
  }
  if ((local_18 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498be604 FUN_1498be604 body=29 status=ok
// SIG undefined FUN_1498be604(void)

undefined8 FUN_1498be604(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498be636 FUN_1498be636 body=93 status=ok
// SIG undefined FUN_1498be636(void)

void FUN_1498be636(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb5e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498be694 FUN_1498be694 body=93 status=ok
// SIG undefined FUN_1498be694(void)

void FUN_1498be694(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb5e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498be6f2 FUN_1498be6f2 body=126 status=ok
// SIG undefined FUN_1498be6f2(void)

void FUN_1498be6f2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beeb5e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498be761. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498be77a FUN_1498be77a body=20 status=ok
// SIG undefined FUN_1498be77a(void)

undefined1 FUN_1498be77a(longlong param_1)

{
  FUN_1498be78e(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498be78e FUN_1498be78e body=1047 status=ok
// SIG undefined FUN_1498be78e(void)

void FUN_1498be78e(longlong param_1,char *param_2)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  undefined4 *puVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  ulonglong uVar15;
  int *piVar16;
  int iVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  int local_e0;
  undefined4 *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  float *local_b8;
  int local_b0;
  float *local_a8;
  int local_a0;
  float *local_98;
  int local_90;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float *local_68;
  int local_60;
  float *local_58;
  int local_50;
  float *local_48;
  int local_40;
  int *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14017991c(local_28);
  FUN_144a76cd4(&local_38,param_2);
  FUN_144a76c20(&local_68,param_2);
  FUN_144a76c20(&local_58,param_2);
  FUN_144a76c20(&local_48,param_2);
  FUN_144a76c20(&local_98,param_2);
  FUN_144a76c20(&local_88,param_2);
  FUN_144a76c20(&local_78,param_2);
  FUN_144a76c20(&local_c8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  FUN_144a76c20(&local_a8,param_2);
  FUN_144a76c20(&local_d8,param_2);
  FUN_144a76c20(&local_e8,param_2);
  piVar14 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar14 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar14) {
    iVar13 = 0;
    do {
      piVar14 = local_38 + local_30;
      iVar17 = *local_38 - *(int *)(param_1 + 0x290);
      uVar1 = iVar17 + 1;
      uVar15 = (ulonglong)uVar1;
      fVar18 = DAT_14c846338;
      fVar20 = DAT_14c846330._4_4_;
      fVar22 = (float)DAT_14c846330;
      if ((-2 < iVar17) && ((int)uVar1 < *(int *)(local_20 + 0xb8))) {
        lVar12 = *(longlong *)(local_20 + 0xb0);
        fVar18 = (float)*(double *)(lVar12 + 0x10 + uVar15 * 0x18);
        fVar20 = (float)*(double *)(lVar12 + 8 + uVar15 * 0x18);
        fVar22 = (float)*(double *)(lVar12 + uVar15 * 0x18);
      }
      pfVar2 = local_68 + local_60;
      *local_68 = fVar22;
      pfVar3 = local_58 + local_50;
      *local_58 = fVar20;
      pfVar4 = local_48 + local_40;
      *local_48 = fVar18;
      fVar18 = DAT_14c846338;
      fVar20 = DAT_14c846330._4_4_;
      fVar22 = (float)DAT_14c846330;
      if ((-2 < iVar17) && ((int)uVar1 < *(int *)(local_20 + 0xe8))) {
        lVar12 = *(longlong *)(local_20 + 0xe0);
        fVar18 = (float)*(double *)(lVar12 + 0x10 + uVar15 * 0x18);
        fVar20 = (float)*(double *)(lVar12 + 8 + uVar15 * 0x18);
        fVar22 = (float)*(double *)(lVar12 + uVar15 * 0x18);
      }
      pfVar5 = local_98 + local_90;
      *local_98 = fVar22;
      pfVar6 = local_88 + local_80;
      *local_88 = fVar20;
      pfVar7 = local_78 + local_70;
      *local_78 = fVar18;
      fVar18 = DAT_14c846338;
      fVar20 = DAT_14c846330._4_4_;
      fVar22 = (float)DAT_14c846330;
      if ((-2 < iVar17) && ((int)uVar1 < *(int *)(local_20 + 0x108))) {
        lVar12 = *(longlong *)(local_20 + 0x100);
        fVar18 = (float)*(double *)(lVar12 + 0x10 + uVar15 * 0x18);
        fVar20 = (float)*(double *)(lVar12 + 8 + uVar15 * 0x18);
        fVar22 = (float)*(double *)(lVar12 + uVar15 * 0x18);
      }
      pfVar8 = local_c8 + local_c0;
      *local_c8 = fVar22;
      pfVar9 = local_b8 + local_b0;
      *local_b8 = fVar20;
      pfVar10 = local_a8 + local_a0;
      *local_a8 = fVar18;
      if (iVar17 < -1) {
        *local_d8 = 0;
        uVar19 = 0;
        local_d8 = local_d8 + local_d0;
      }
      else {
        uVar19 = 0;
        uVar21 = 0;
        if ((int)uVar1 < *(int *)(local_20 + 0x128)) {
          uVar21 = *(undefined4 *)(*(longlong *)(local_20 + 0x120) + uVar15 * 4);
        }
        puVar11 = local_d8 + local_d0;
        *local_d8 = uVar21;
        local_d8 = puVar11;
        if ((int)uVar1 < *(int *)(local_20 + 0x148)) {
          uVar19 = *(undefined4 *)(*(longlong *)(local_20 + 0x140) + uVar15 * 4);
        }
      }
      puVar11 = local_e8 + local_e0;
      *local_e8 = uVar19;
      iVar13 = iVar13 + 1;
      piVar16 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar16 = (int *)(param_2 + 0x3c);
      }
      local_e8 = puVar11;
      local_c8 = pfVar8;
      local_b8 = pfVar9;
      local_a8 = pfVar10;
      local_98 = pfVar5;
      local_88 = pfVar6;
      local_78 = pfVar7;
      local_68 = pfVar2;
      local_58 = pfVar3;
      local_48 = pfVar4;
      local_38 = piVar14;
    } while (iVar13 < *piVar16);
  }
  if ((local_18 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498beba6 FUN_1498beba6 body=165 status=ok
// SIG undefined FUN_1498beba6(void)

void FUN_1498beba6(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeb650;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498bec4c FUN_1498bec4c body=165 status=ok
// SIG undefined FUN_1498bec4c(void)

void FUN_1498bec4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beeb6c0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498becf2 FUN_1498becf2 body=29 status=ok
// SIG undefined FUN_1498becf2(void)

undefined8 FUN_1498becf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498bed24 FUN_1498bed24 body=93 status=ok
// SIG undefined FUN_1498bed24(void)

void FUN_1498bed24(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb650;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498bed82 FUN_1498bed82 body=93 status=ok
// SIG undefined FUN_1498bed82(void)

void FUN_1498bed82(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb650;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498bede0 FUN_1498bede0 body=126 status=ok
// SIG undefined FUN_1498bede0(void)

void FUN_1498bede0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beeb650;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498bee4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498bee68 FUN_1498bee68 body=20 status=ok
// SIG undefined FUN_1498bee68(void)

undefined1 FUN_1498bee68(longlong param_1)

{
  FUN_1498bee7c(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498bee7c FUN_1498bee7c body=1027 status=ok
// SIG undefined FUN_1498bee7c(void)

void FUN_1498bee7c(longlong param_1,char *param_2)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  undefined4 *puVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  ulonglong uVar15;
  int iVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined1 auStack_108 [40];
  undefined4 *local_e0;
  int local_d8;
  undefined4 *local_d0;
  int local_c8;
  float *local_c0;
  int local_b8;
  float *local_b0;
  int local_a8;
  float *local_a0;
  int local_98;
  float *local_90;
  int local_88;
  float *local_80;
  int local_78;
  float *local_70;
  int local_68;
  float *local_60;
  int local_58;
  float *local_50;
  int local_48;
  float *local_40;
  int local_38;
  int local_2c;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14017991c(local_28);
  FUN_1498b5b4a(&local_2c,param_2);
  FUN_144a76c20(&local_60,param_2);
  FUN_144a76c20(&local_50,param_2);
  FUN_144a76c20(&local_40,param_2);
  FUN_144a76c20(&local_90,param_2);
  FUN_144a76c20(&local_80,param_2);
  FUN_144a76c20(&local_70,param_2);
  FUN_144a76c20(&local_c0,param_2);
  FUN_144a76c20(&local_b0,param_2);
  FUN_144a76c20(&local_a0,param_2);
  FUN_144a76c20(&local_d0,param_2);
  FUN_144a76c20(&local_e0,param_2);
  piVar14 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar14 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar14) {
    iVar13 = 0;
    do {
      iVar16 = local_2c - *(int *)(param_1 + 0x290);
      uVar1 = iVar16 + 1;
      uVar15 = (ulonglong)uVar1;
      fVar17 = DAT_14c846338;
      fVar19 = DAT_14c846330._4_4_;
      fVar21 = (float)DAT_14c846330;
      if ((-2 < iVar16) && ((int)uVar1 < *(int *)(local_20 + 0xb8))) {
        lVar12 = *(longlong *)(local_20 + 0xb0);
        fVar17 = (float)*(double *)(lVar12 + 0x10 + uVar15 * 0x18);
        fVar19 = (float)*(double *)(lVar12 + 8 + uVar15 * 0x18);
        fVar21 = (float)*(double *)(lVar12 + uVar15 * 0x18);
      }
      pfVar2 = local_60 + local_58;
      *local_60 = fVar21;
      pfVar3 = local_50 + local_48;
      *local_50 = fVar19;
      pfVar4 = local_40 + local_38;
      *local_40 = fVar17;
      fVar17 = DAT_14c846338;
      fVar19 = DAT_14c846330._4_4_;
      fVar21 = (float)DAT_14c846330;
      if ((-2 < iVar16) && ((int)uVar1 < *(int *)(local_20 + 0xe8))) {
        lVar12 = *(longlong *)(local_20 + 0xe0);
        fVar17 = (float)*(double *)(lVar12 + 0x10 + uVar15 * 0x18);
        fVar19 = (float)*(double *)(lVar12 + 8 + uVar15 * 0x18);
        fVar21 = (float)*(double *)(lVar12 + uVar15 * 0x18);
      }
      pfVar5 = local_90 + local_88;
      *local_90 = fVar21;
      pfVar6 = local_80 + local_78;
      *local_80 = fVar19;
      pfVar7 = local_70 + local_68;
      *local_70 = fVar17;
      fVar17 = DAT_14c846338;
      fVar19 = DAT_14c846330._4_4_;
      fVar21 = (float)DAT_14c846330;
      if ((-2 < iVar16) && ((int)uVar1 < *(int *)(local_20 + 0x108))) {
        lVar12 = *(longlong *)(local_20 + 0x100);
        fVar17 = (float)*(double *)(lVar12 + 0x10 + uVar15 * 0x18);
        fVar19 = (float)*(double *)(lVar12 + 8 + uVar15 * 0x18);
        fVar21 = (float)*(double *)(lVar12 + uVar15 * 0x18);
      }
      pfVar8 = local_c0 + local_b8;
      *local_c0 = fVar21;
      pfVar9 = local_b0 + local_a8;
      *local_b0 = fVar19;
      pfVar10 = local_a0 + local_98;
      *local_a0 = fVar17;
      if (iVar16 < -1) {
        *local_d0 = 0;
        uVar18 = 0;
        local_d0 = local_d0 + local_c8;
      }
      else {
        uVar18 = 0;
        uVar20 = 0;
        if ((int)uVar1 < *(int *)(local_20 + 0x128)) {
          uVar20 = *(undefined4 *)(*(longlong *)(local_20 + 0x120) + uVar15 * 4);
        }
        puVar11 = local_d0 + local_c8;
        *local_d0 = uVar20;
        local_d0 = puVar11;
        if ((int)uVar1 < *(int *)(local_20 + 0x148)) {
          uVar18 = *(undefined4 *)(*(longlong *)(local_20 + 0x140) + uVar15 * 4);
        }
      }
      puVar11 = local_e0 + local_d8;
      *local_e0 = uVar18;
      iVar13 = iVar13 + 1;
      piVar14 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar14 = (int *)(param_2 + 0x3c);
      }
      local_e0 = puVar11;
      local_c0 = pfVar8;
      local_b0 = pfVar9;
      local_a0 = pfVar10;
      local_90 = pfVar5;
      local_80 = pfVar6;
      local_70 = pfVar7;
      local_60 = pfVar2;
      local_50 = pfVar3;
      local_40 = pfVar4;
    } while (iVar13 < *piVar14);
  }
  if ((local_18 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498bf280 FUN_1498bf280 body=29 status=ok
// SIG undefined FUN_1498bf280(void)

undefined8 FUN_1498bf280(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498bf2b2 FUN_1498bf2b2 body=93 status=ok
// SIG undefined FUN_1498bf2b2(void)

void FUN_1498bf2b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb6c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498bf310 FUN_1498bf310 body=93 status=ok
// SIG undefined FUN_1498bf310(void)

void FUN_1498bf310(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14beeb6c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1498bf36e FUN_1498bf36e body=126 status=ok
// SIG undefined FUN_1498bf36e(void)

void FUN_1498bf36e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beeb6c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498bf3dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498bf3f6 FUN_1498bf3f6 body=20 status=ok
// SIG undefined FUN_1498bf3f6(void)

undefined1 FUN_1498bf3f6(longlong param_1)

{
  FUN_1498bf40a(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498bf40a FUN_1498bf40a body=1047 status=ok
// SIG undefined FUN_1498bf40a(void)

void FUN_1498bf40a(longlong param_1,char *param_2)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  undefined4 *puVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  ulonglong uVar15;
  int *piVar16;
  int iVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  int local_e0;
  undefined4 *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  float *local_b8;
  int local_b0;
  float *local_a8;
  int local_a0;
  float *local_98;
  int local_90;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float *local_68;
  int local_60;
  float *local_58;
  int local_50;
  float *local_48;
  int local_40;
  int *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14017991c(local_28);
  FUN_144a76cd4(&local_38,param_2);
  FUN_144a76c20(&local_68,param_2);
  FUN_144a76c20(&local_58,param_2);
  FUN_144a76c20(&local_48,param_2);
  FUN_144a76c20(&local_98,param_2);
  FUN_144a76c20(&local_88,param_2);
  FUN_144a76c20(&local_78,param_2);
  FUN_144a76c20(&local_c8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  FUN_144a76c20(&local_a8,param_2);
  FUN_144a76c20(&local_d8,param_2);
  FUN_144a76c20(&local_e8,param_2);
  piVar14 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar14 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar14) {
    iVar13 = 0;
    do {
      piVar14 = local_38 + local_30;
      iVar17 = *local_38 - *(int *)(param_1 + 0x290);
      uVar1 = iVar17 + 1;
      uVar15 = (ulonglong)uVar1;
      fVar18 = DAT_14c846338;
      fVar20 = DAT_14c846330._4_4_;
      fVar22 = (float)DAT_14c846330;
      if ((-2 < iVar17) && ((int)uVar1 < *(int *)(local_20 + 0xb8))) {
        lVar12 = *(longlong *)(local_20 + 0xb0);
        fVar18 = (float)*(double *)(lVar12 + 0x10 + uVar15 * 0x18);
        fVar20 = (float)*(double *)(lVar12 + 8 + uVar15 * 0x18);
        fVar22 = (float)*(double *)(lVar12 + uVar15 * 0x18);
      }
      pfVar2 = local_68 + local_60;
      *local_68 = fVar22;
      pfVar3 = local_58 + local_50;
      *local_58 = fVar20;
      pfVar4 = local_48 + local_40;
      *local_48 = fVar18;
      fVar18 = DAT_14c846338;
      fVar20 = DAT_14c846330._4_4_;
      fVar22 = (float)DAT_14c846330;
      if ((-2 < iVar17) && ((int)uVar1 < *(int *)(local_20 + 0xe8))) {
        lVar12 = *(longlong *)(local_20 + 0xe0);
        fVar18 = (float)*(double *)(lVar12 + 0x10 + uVar15 * 0x18);
        fVar20 = (float)*(double *)(lVar12 + 8 + uVar15 * 0x18);
        fVar22 = (float)*(double *)(lVar12 + uVar15 * 0x18);
      }
      pfVar5 = local_98 + local_90;
      *local_98 = fVar22;
      pfVar6 = local_88 + local_80;
      *local_88 = fVar20;
      pfVar7 = local_78 + local_70;
      *local_78 = fVar18;
      fVar18 = DAT_14c846338;
      fVar20 = DAT_14c846330._4_4_;
      fVar22 = (float)DAT_14c846330;
      if ((-2 < iVar17) && ((int)uVar1 < *(int *)(local_20 + 0x108))) {
        lVar12 = *(longlong *)(local_20 + 0x100);
        fVar18 = (float)*(double *)(lVar12 + 0x10 + uVar15 * 0x18);
        fVar20 = (float)*(double *)(lVar12 + 8 + uVar15 * 0x18);
        fVar22 = (float)*(double *)(lVar12 + uVar15 * 0x18);
      }
      pfVar8 = local_c8 + local_c0;
      *local_c8 = fVar22;
      pfVar9 = local_b8 + local_b0;
      *local_b8 = fVar20;
      pfVar10 = local_a8 + local_a0;
      *local_a8 = fVar18;
      if (iVar17 < -1) {
        *local_d8 = 0;
        uVar19 = 0;
        local_d8 = local_d8 + local_d0;
      }
      else {
        uVar19 = 0;
        uVar21 = 0;
        if ((int)uVar1 < *(int *)(local_20 + 0x128)) {
          uVar21 = *(undefined4 *)(*(longlong *)(local_20 + 0x120) + uVar15 * 4);
        }
        puVar11 = local_d8 + local_d0;
        *local_d8 = uVar21;
        local_d8 = puVar11;
        if ((int)uVar1 < *(int *)(local_20 + 0x148)) {
          uVar19 = *(undefined4 *)(*(longlong *)(local_20 + 0x140) + uVar15 * 4);
        }
      }
      puVar11 = local_e8 + local_e0;
      *local_e8 = uVar19;
      iVar13 = iVar13 + 1;
      piVar16 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar16 = (int *)(param_2 + 0x3c);
      }
      local_e8 = puVar11;
      local_c8 = pfVar8;
      local_b8 = pfVar9;
      local_a8 = pfVar10;
      local_98 = pfVar5;
      local_88 = pfVar6;
      local_78 = pfVar7;
      local_68 = pfVar2;
      local_58 = pfVar3;
      local_48 = pfVar4;
      local_38 = piVar14;
    } while (iVar13 < *piVar16);
  }
  if ((local_18 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498bf822 FUN_1498bf822 body=138 status=ok
// SIG undefined FUN_1498bf822(void)

code * FUN_1498bf822(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LastSpawnedPointID";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc800000059;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498bf8ac;
}



// FUNCTION 1498bf8ac FUN_1498bf8ac body=138 status=ok
// SIG undefined FUN_1498bf8ac(void)

code * FUN_1498bf8ac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BoundsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000057;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498bf936;
}



// FUNCTION 1498bf936 FUN_1498bf936 body=138 status=ok
// SIG undefined FUN_1498bf936(void)

code * FUN_1498bf936(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TransformScaleBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb800000056;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14676ee58;
}



// FUNCTION 1498bf9c0 FUN_1498bf9c0 body=138 status=ok
// SIG undefined FUN_1498bf9c0(void)

code * FUN_1498bf9c0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TransformTranslationBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa800000054;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498bfa4a;
}



// FUNCTION 1498bfa4a FUN_1498bfa4a body=138 status=ok
// SIG undefined FUN_1498bfa4a(void)

code * FUN_1498bfa4a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IncomingTimeBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000052;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498bfad4;
}



// FUNCTION 1498bfad4 FUN_1498bfad4 body=138 status=ok
// SIG undefined FUN_1498bfad4(void)

code * FUN_1498bfad4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IncomingMass2Buffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9800000051;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145aa8a3e;
}



// FUNCTION 1498bfb5e FUN_1498bfb5e body=138 status=ok
// SIG undefined FUN_1498bfb5e(void)

code * FUN_1498bfb5e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IncomingAngularVelocity2Buffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x880000004f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498bfbe8;
}



// FUNCTION 1498bfbe8 FUN_1498bfbe8 body=138 status=ok
// SIG undefined FUN_1498bfbe8(void)

code * FUN_1498bfbe8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IncomingAngularVelocity1Buffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000004e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498bfc72;
}



// FUNCTION 1498bfc72 FUN_1498bfc72 body=138 status=ok
// SIG undefined FUN_1498bfc72(void)

code * FUN_1498bfc72(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IncomingVelocity2Buffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x780000004d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498bfcfc;
}



// FUNCTION 1498bfcfc FUN_1498bfcfc body=138 status=ok
// SIG undefined FUN_1498bfcfc(void)

code * FUN_1498bfcfc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IncomingVelocity1Buffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000004c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498bfd86;
}



// FUNCTION 1498bfd86 FUN_1498bfd86 body=138 status=ok
// SIG undefined FUN_1498bfd86(void)

code * FUN_1498bfd86(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IncomingNormalBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x680000004b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145aa89b4;
}



// FUNCTION 1498bfe10 FUN_1498bfe10 body=138 status=ok
// SIG undefined FUN_1498bfe10(void)

code * FUN_1498bfe10(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IncomingLocationBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000049;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498bfe9a;
}



// FUNCTION 1498bfe9a FUN_1498bfe9a body=138 status=ok
// SIG undefined FUN_1498bfe9a(void)

code * FUN_1498bfe9a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498bff24;
}



// FUNCTION 1498bff24 FUN_1498bff24 body=138 status=ok
// SIG undefined FUN_1498bff24(void)

code * FUN_1498bff24(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SurfaceTypeBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000046;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498bffae;
}



// FUNCTION 1498bffae FUN_1498bffae body=138 status=ok
// SIG undefined FUN_1498bffae(void)

code * FUN_1498bffae(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RestitutionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000045;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145aa892a;
}



// FUNCTION 1498c0038 FUN_1498c0038 body=138 status=ok
// SIG undefined FUN_1498c0038(void)

code * FUN_1498c0038(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DensityBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000043;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c00c2;
}



// FUNCTION 1498c00c2 FUN_1498c00c2 body=138 status=ok
// SIG undefined FUN_1498c00c2(void)

code * FUN_1498c00c2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SolverIDBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000042;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c014c;
}



// FUNCTION 1498c014c FUN_1498c014c body=138 status=ok
// SIG undefined FUN_1498c014c(void)

code * FUN_1498c014c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VolumeBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000041;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c01d6;
}



// FUNCTION 1498c01d6 FUN_1498c01d6 body=138 status=ok
// SIG undefined FUN_1498c01d6(void)

code * FUN_1498c01d6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ExtentMaxBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000040;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14676eee0;
}



// FUNCTION 1498c0260 FUN_1498c0260 body=138 status=ok
// SIG undefined FUN_1498c0260(void)

code * FUN_1498c0260(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VelocityBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000003e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c02ea;
}



// FUNCTION 1498c02ea FUN_1498c02ea body=132 status=ok
// SIG undefined FUN_1498c02ea(void)

undefined1 * FUN_1498c02ea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1498c036e;
}



// FUNCTION 1498c0372 FUN_1498c0372 body=189 status=ok
// SIG undefined FUN_1498c0372(void)

longlong FUN_1498c0372(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0xd0;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0xd0) == *param_3) {
          if (lVar3 != 0) goto LAB_1498c0412;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0xc0);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1498c0430(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0xd0 + *param_1;
LAB_1498c0412:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 0x10;
}



// FUNCTION 1498c0430 FUN_1498c0430 body=363 status=ok
// SIG undefined FUN_1498c0430(void)

undefined4 * FUN_1498c0430(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_1498c059c(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  *(undefined4 *)(local_40 + 6) = 0;
  *(undefined4 *)((longlong)local_40 + 0x34) = 0;
  *(undefined4 *)(local_40 + 7) = 0;
  *(undefined4 *)((longlong)local_40 + 0x3c) = 0x3ff00000;
  local_40[8] = 0;
  local_40[9] = 0;
  local_40[10] = 0;
  local_40[0xb] = 0;
  *(undefined4 *)(local_40 + 0xc) = 0;
  *(undefined4 *)((longlong)local_40 + 100) = 0x3ff00000;
  *(undefined4 *)(local_40 + 0xd) = 0;
  *(undefined4 *)((longlong)local_40 + 0x6c) = 0x3ff00000;
  local_40[0xe] = 0x3ff0000000000000;
  local_40[0xf] = 0;
  local_40[0x10] = 0;
  local_40[0x11] = 0;
  local_40[0x12] = 0;
  local_40[0x13] = 0;
  local_40[0x14] = 0;
  local_40[0x15] = 0;
  local_40[0x16] = 0;
  local_40[0x17] = 0;
  *(undefined4 *)(local_40 + 0x18) = 0xffffffff;
  cVar1 = FUN_1498c068a(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0xc4) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x18) =
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
      FUN_1498c079c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c059c FUN_1498c059c body=237 status=ok
// SIG undefined FUN_1498c059c(void)

int * FUN_1498c059c(longlong *param_1,int *param_2)

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
      FUN_1471dad4a(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xd0);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xd0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xd0 + *param_1;
  return param_2;
}



// FUNCTION 1498c068a FUN_1498c068a body=151 status=ok
// SIG undefined FUN_1498c068a(void)

undefined8 FUN_1498c068a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0xd0);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0xd0) == *param_3) {
          memmove(_Dst,param_3,0xc0);
          FUN_1498c0722(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0xc0);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1498c0722 FUN_1498c0722 body=122 status=ok
// SIG undefined FUN_1498c0722(void)

void FUN_1498c0722(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xd0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xd0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xd0 + 4) = uVar5;
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



// FUNCTION 1498c079c FUN_1498c079c body=456 status=ok
// SIG undefined FUN_1498c079c(void)

void FUN_1498c079c(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0xd0;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc4 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc0 + lVar7) =
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



// FUNCTION 1498c0966 FUN_1498c0966 body=108 status=ok
// SIG undefined FUN_1498c0966(void)

void FUN_1498c0966(longlong *param_1,longlong param_2)

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
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0xd0) == param_2) {
          FUN_1498c09d2(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0xd0 + *param_1 + 0xc0);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1498c09d2 FUN_1498c09d2 body=104 status=ok
// SIG undefined FUN_1498c09d2(void)

void FUN_1498c09d2(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc4 + (longlong)param_2 * 0xd0);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0xc0 + lVar5 * 0xd0);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0xd0 + 0xc0);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0xd0 + 0xc0);
  FUN_1498c0722();
  return;
}



// FUNCTION 1498c0a3a FUN_1498c0a3a body=117 status=ok
// SIG undefined FUN_1498c0a3a(void)

void FUN_1498c0a3a(longlong *param_1)

{
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 1498c0ab0 FUN_1498c0ab0 body=29 status=ok
// SIG undefined FUN_1498c0ab0(void)

undefined8 FUN_1498c0ab0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498c0ae8 FUN_1498c0ae8 body=29 status=ok
// SIG undefined FUN_1498c0ae8(void)

bool FUN_1498c0ae8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1498c0b06 FUN_1498c0b06 body=26 status=ok
// SIG undefined FUN_1498c0b06(void)

bool FUN_1498c0b06(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1498c0b20 FUN_1498c0b20 body=24 status=ok
// SIG undefined FUN_1498c0b20(void)

bool FUN_1498c0b20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1498c0b38 FUN_1498c0b38 body=93 status=ok
// SIG undefined FUN_1498c0b38(void)

void FUN_1498c0b38(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14beebbc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498c0b96 FUN_1498c0b96 body=93 status=ok
// SIG undefined FUN_1498c0b96(void)

void FUN_1498c0b96(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14beebbc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498c0bf4 FUN_1498c0bf4 body=126 status=ok
// SIG undefined FUN_1498c0bf4(void)

void FUN_1498c0bf4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beebbc0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498c0c63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498c0c72 FUN_1498c0c72 body=40 status=ok
// SIG undefined FUN_1498c0c72(void)

void FUN_1498c0c72(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001498c0c97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1498c0c9a FUN_1498c0c9a body=140 status=ok
// SIG undefined FUN_1498c0c9a(void)

bool FUN_1498c0c9a(longlong param_1,undefined8 param_2)

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



// FUNCTION 1498c0d28 FUN_1498c0d28 body=151 status=ok
// SIG undefined FUN_1498c0d28(void)

void FUN_1498c0d28(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1498c0dc0();
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
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc30e98;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x80;
  return;
}



// FUNCTION 1498c0dc0 FUN_1498c0dc0 body=258 status=ok
// SIG undefined FUN_1498c0dc0(void)

void FUN_1498c0dc0(void)

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
              0x110) < DAT_14cc30f18) {
    FUN_144b3d300(&DAT_14cc30f18);
    if (DAT_14cc30f18 == -1) {
      FUN_1498c0ec4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0xbd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc30e98,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144687266);
      _Init_thread_footer(&DAT_14cc30f18);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c0ec4 FUN_1498c0ec4 body=226 status=ok
// SIG undefined FUN_1498c0ec4(void)

longlong * FUN_1498c0ec4(longlong *param_1)

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
  pcVar13 = FUN_1498c0fa8;
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



// FUNCTION 1498c0fa8 FUN_1498c0fa8 body=136 status=ok
// SIG undefined FUN_1498c0fa8(void)

code * FUN_1498c0fa8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ElementTransforms";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x78000000c9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c1030;
}



// FUNCTION 1498c1030 FUN_1498c1030 body=136 status=ok
// SIG undefined FUN_1498c1030(void)

code * FUN_1498c1030(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BoundsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000000c8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c10b8;
}



// FUNCTION 1498c10b8 FUN_1498c10b8 body=136 status=ok
// SIG undefined FUN_1498c10b8(void)

code * FUN_1498c10b8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrevWorldInverseTransformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x68000000c7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c1140;
}



// FUNCTION 1498c1140 FUN_1498c1140 body=136 status=ok
// SIG undefined FUN_1498c1140(void)

code * FUN_1498c1140(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WorldInverseTransformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000000c6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c11c8;
}



// FUNCTION 1498c11c8 FUN_1498c11c8 body=136 status=ok
// SIG undefined FUN_1498c11c8(void)

code * FUN_1498c11c8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrevWorldTransformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x58000000c5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c1250;
}



// FUNCTION 1498c1250 FUN_1498c1250 body=136 status=ok
// SIG undefined FUN_1498c1250(void)

code * FUN_1498c1250(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WorldTransformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000000c4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c12d8;
}



// FUNCTION 1498c12d8 FUN_1498c12d8 body=136 status=ok
// SIG undefined FUN_1498c12d8(void)

code * FUN_1498c12d8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RootTransform_Scale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000c3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c1360;
}



// FUNCTION 1498c1360 FUN_1498c1360 body=136 status=ok
// SIG undefined FUN_1498c1360(void)

code * FUN_1498c1360(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RootTransform_Rotation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000c2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c13e8;
}



// FUNCTION 1498c13e8 FUN_1498c13e8 body=136 status=ok
// SIG undefined FUN_1498c13e8(void)

code * FUN_1498c13e8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RootTransform_Translation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000c1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c1470;
}



// FUNCTION 1498c1470 FUN_1498c1470 body=136 status=ok
// SIG undefined FUN_1498c1470(void)

code * FUN_1498c1470(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumPieces";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c000000c0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c14f8;
}



// FUNCTION 1498c14f8 FUN_1498c14f8 body=136 status=ok
// SIG undefined FUN_1498c14f8(void)

code * FUN_1498c14f8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BoundsMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000bf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c1580;
}



// FUNCTION 1498c1580 FUN_1498c1580 body=130 status=ok
// SIG undefined FUN_1498c1580(void)

undefined1 * FUN_1498c1580(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BoundsMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xbe;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1498c1602;
}



// FUNCTION 1498c1606 FUN_1498c1606 body=181 status=ok
// SIG undefined FUN_1498c1606(void)

longlong FUN_1498c1606(longlong *param_1,uint param_2,longlong *param_3)

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
          if (lVar3 != 0) goto LAB_1498c169e;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1498c16bc(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_1498c169e:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1498c16bc FUN_1498c16bc body=277 status=ok
// SIG undefined FUN_1498c16bc(void)

undefined4 * FUN_1498c16bc(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_1498c17d2(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_1498c18b8(param_1,param_3,local_40,local_48);
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
      FUN_1498c19b4(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c17d2 FUN_1498c17d2 body=229 status=ok
// SIG undefined FUN_1498c17d2(void)

int * FUN_1498c17d2(longlong *param_1,int *param_2)

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



// FUNCTION 1498c18b8 FUN_1498c18b8 body=137 status=ok
// SIG undefined FUN_1498c18b8(void)

undefined8 FUN_1498c18b8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1498c1942((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1498c1942 FUN_1498c1942 body=114 status=ok
// SIG undefined FUN_1498c1942(void)

void FUN_1498c1942(longlong *param_1,int param_2)

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



// FUNCTION 1498c19b4 FUN_1498c19b4 body=450 status=ok
// SIG undefined FUN_1498c19b4(void)

void FUN_1498c19b4(longlong *param_1)

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



// FUNCTION 1498c1b78 FUN_1498c1b78 body=102 status=ok
// SIG undefined FUN_1498c1b78(void)

void FUN_1498c1b78(longlong *param_1,longlong param_2)

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
          FUN_1498c1bde(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1498c1bde FUN_1498c1bde body=90 status=ok
// SIG undefined FUN_1498c1bde(void)

void FUN_1498c1bde(longlong *param_1,int param_2)

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
  FUN_1498c1942();
  return;
}



// FUNCTION 1498c1c38 FUN_1498c1c38 body=194 status=ok
// SIG undefined FUN_1498c1c38(void)

void FUN_1498c1c38(longlong *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (*param_2 == '\x01') {
    *(uint *)(param_1 + 2) =
         (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)*(int *)(param_2 + 0x30));
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = lVar4;
    iVar5 = (int)param_1[2] * *(int *)(param_2 + 0x44);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar3 = uVar1 & 0x7fff;
    *(uint *)(param_1 + 2) = (uint)(uVar1 >> 0xf);
    lVar4 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar1 < 0) {
      lVar4 = (ulonglong)(uVar3 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70);
    }
    else {
      iVar5 = **(int **)(lVar4 + 0x20);
      lVar6 = 0;
      if (iVar5 <= (int)uVar3) {
        do {
          uVar3 = uVar3 - iVar5;
          iVar5 = (*(int **)(lVar4 + 0x20))[lVar6 + 1];
          lVar6 = lVar6 + 1;
        } while (iVar5 <= (int)uVar3);
      }
      lVar4 = (longlong)(int)uVar3 + *(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar6 * 8);
    }
    *param_1 = lVar4;
    iVar5 = (uint)(uVar1 >> 0xf) * *(int *)(*(longlong *)(param_2 + 0x80) + 0x4c);
  }
  lVar4 = lVar4 + (longlong)iVar5 * 4;
  *param_1 = lVar4;
  param_1[1] = lVar4;
  return;
}



// FUNCTION 1498c1cfa FUN_1498c1cfa body=194 status=ok
// SIG undefined FUN_1498c1cfa(void)

void FUN_1498c1cfa(longlong *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (*param_2 == '\x01') {
    *(uint *)(param_1 + 2) =
         (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)*(int *)(param_2 + 0x30));
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = lVar4;
    iVar5 = (int)param_1[2] * *(int *)(param_2 + 0x44);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar3 = uVar1 & 0x7fff;
    *(uint *)(param_1 + 2) = (uint)(uVar1 >> 0xf);
    lVar4 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar1 < 0) {
      lVar4 = (ulonglong)(uVar3 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70);
    }
    else {
      iVar5 = **(int **)(lVar4 + 0x20);
      lVar6 = 0;
      if (iVar5 <= (int)uVar3) {
        do {
          uVar3 = uVar3 - iVar5;
          iVar5 = (*(int **)(lVar4 + 0x20))[lVar6 + 1];
          lVar6 = lVar6 + 1;
        } while (iVar5 <= (int)uVar3);
      }
      lVar4 = (longlong)(int)uVar3 + *(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar6 * 8);
    }
    *param_1 = lVar4;
    iVar5 = (uint)(uVar1 >> 0xf) * *(int *)(*(longlong *)(param_2 + 0x80) + 0x4c);
  }
  lVar4 = lVar4 + (longlong)iVar5 * 4;
  *param_1 = lVar4;
  param_1[1] = lVar4;
  return;
}



// FUNCTION 1498c1dbc FUN_1498c1dbc body=194 status=ok
// SIG undefined FUN_1498c1dbc(void)

void FUN_1498c1dbc(longlong *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (*param_2 == '\x01') {
    *(uint *)(param_1 + 2) =
         (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)*(int *)(param_2 + 0x30));
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = lVar4;
    iVar5 = (int)param_1[2] * *(int *)(param_2 + 0x44);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar3 = uVar1 & 0x7fff;
    *(uint *)(param_1 + 2) = (uint)(uVar1 >> 0xf);
    lVar4 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar1 < 0) {
      lVar4 = (ulonglong)(uVar3 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70);
    }
    else {
      iVar5 = **(int **)(lVar4 + 0x20);
      lVar6 = 0;
      if (iVar5 <= (int)uVar3) {
        do {
          uVar3 = uVar3 - iVar5;
          iVar5 = (*(int **)(lVar4 + 0x20))[lVar6 + 1];
          lVar6 = lVar6 + 1;
        } while (iVar5 <= (int)uVar3);
      }
      lVar4 = (longlong)(int)uVar3 + *(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar6 * 8);
    }
    *param_1 = lVar4;
    iVar5 = (uint)(uVar1 >> 0xf) * *(int *)(*(longlong *)(param_2 + 0x80) + 0x4c);
  }
  lVar4 = lVar4 + (longlong)iVar5 * 4;
  *param_1 = lVar4;
  param_1[1] = lVar4;
  return;
}



// FUNCTION 1498c1e7e FUN_1498c1e7e body=154 status=ok
// SIG undefined FUN_1498c1e7e(void)

void FUN_1498c1e7e(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1498c1f18();
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
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc30f20;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x450;
  return;
}



// FUNCTION 1498c1f18 FUN_1498c1f18 body=258 status=ok
// SIG undefined FUN_1498c1f18(void)

void FUN_1498c1f18(void)

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
              0x110) < DAT_14cc30fa0) {
    FUN_144b3d300(&DAT_14cc30fa0);
    if (DAT_14cc30fa0 == -1) {
      FUN_1498c201c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderInstanceParameters";
      local_38 = 0;
      local_50 = 0x450;
      local_58 = 0x28;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc30f20,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144687449);
      _Init_thread_footer(&DAT_14cc30fa0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c201c FUN_1498c201c body=226 status=ok
// SIG undefined FUN_1498c201c(void)

longlong * FUN_1498c201c(longlong *param_1)

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
  pcVar13 = FUN_1498c2100;
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



// FUNCTION 1498c2100 FUN_1498c2100 body=136 status=ok
// SIG undefined FUN_1498c2100(void)

code * FUN_1498c2100(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x44000000034;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c2188;
}



// FUNCTION 1498c2188 FUN_1498c2188 body=136 status=ok
// SIG undefined FUN_1498c2188(void)

code * FUN_1498c2188(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FieldTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x24000000033;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0x20;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c2210;
}



// FUNCTION 1498c2210 FUN_1498c2210 body=136 status=ok
// SIG undefined FUN_1498c2210(void)

code * FUN_1498c2210(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TargetCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x23c00000032;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c2298;
}



// FUNCTION 1498c2298 FUN_1498c2298 body=136 status=ok
// SIG undefined FUN_1498c2298(void)

code * FUN_1498c2298(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClipmapCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x23800000031;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c2320;
}



// FUNCTION 1498c2320 FUN_1498c2320 body=136 status=ok
// SIG undefined FUN_1498c2320(void)

code * FUN_1498c2320(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClipmapExponent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x23400000030;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c23a8;
}



// FUNCTION 1498c23a8 FUN_1498c23a8 body=136 status=ok
// SIG undefined FUN_1498c23a8(void)

code * FUN_1498c23a8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClipmapResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2300000002f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c2430;
}



// FUNCTION 1498c2430 FUN_1498c2430 body=136 status=ok
// SIG undefined FUN_1498c2430(void)

code * FUN_1498c2430(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClipmapDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x22c0000002e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c24b8;
}



// FUNCTION 1498c24b8 FUN_1498c24b8 body=136 status=ok
// SIG undefined FUN_1498c24b8(void)

code * FUN_1498c24b8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClipmapCenter";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2200000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c2540;
}



// FUNCTION 1498c2540 FUN_1498c2540 body=136 status=ok
// SIG undefined FUN_1498c2540(void)

code * FUN_1498c2540(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClipmapBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2100000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c25c8;
}



// FUNCTION 1498c25c8 FUN_1498c25c8 body=136 status=ok
// SIG undefined FUN_1498c25c8(void)

code * FUN_1498c25c8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TargetMappings";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0x20;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c2650;
}



// FUNCTION 1498c2650 FUN_1498c2650 body=130 status=ok
// SIG undefined FUN_1498c2650(void)

undefined1 * FUN_1498c2650(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bClipmapAvailable";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x29;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1498c26d2;
}



// FUNCTION 1498c26d6 FUN_1498c26d6 body=258 status=ok
// SIG undefined FUN_1498c26d6(void)

void FUN_1498c26d6(void)

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
              0x110) < DAT_14cc31028) {
    FUN_144b3d300(&DAT_14cc31028);
    if (DAT_14cc31028 == -1) {
      FUN_1498c27da(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderGlobalParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x21;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc30fa8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144687455);
      _Init_thread_footer(&DAT_14cc31028);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c27da FUN_1498c27da body=226 status=ok
// SIG undefined FUN_1498c27da(void)

longlong * FUN_1498c27da(longlong *param_1)

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
  pcVar13 = FUN_1498c28be;
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



// FUNCTION 1498c28be FUN_1498c28be body=136 status=ok
// SIG undefined FUN_1498c28be(void)

code * FUN_1498c28be(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TimeSeconds";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000025;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c2946;
}



// FUNCTION 1498c2946 FUN_1498c2946 body=136 status=ok
// SIG undefined FUN_1498c2946(void)

code * FUN_1498c2946(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TargetsOffsets";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c29ce;
}



// FUNCTION 1498c29ce FUN_1498c29ce body=136 status=ok
// SIG undefined FUN_1498c29ce(void)

code * FUN_1498c29ce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NodesOffsets";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000023;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c2a56;
}



// FUNCTION 1498c2a56 FUN_1498c2a56 body=130 status=ok
// SIG undefined FUN_1498c2a56(void)

undefined1 * FUN_1498c2a56(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NodesParams";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x22;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1498c2ad8;
}



// FUNCTION 1498c2ae0 FUN_1498c2ae0 body=36 status=ok
// SIG undefined FUN_1498c2ae0(void)

undefined8 FUN_1498c2ae0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1498c2b20 FUN_1498c2b20 body=93 status=ok
// SIG undefined FUN_1498c2b20(void)

void FUN_1498c2b20(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14beebee0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498c2b7e FUN_1498c2b7e body=123 status=ok
// SIG undefined FUN_1498c2b7e(void)

void FUN_1498c2b7e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beebee0;
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



// FUNCTION 1498c2bfa FUN_1498c2bfa body=21 status=ok
// SIG undefined FUN_1498c2bfa(void)

undefined8 FUN_1498c2bfa(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498c2c58 FUN_1498c2c58 body=131 status=ok
// SIG undefined FUN_1498c2c58(void)

undefined8 * FUN_1498c2c58(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_14beed320;
  param_1[2] = 0;
  iVar1 = (int)param_2[1];
  lVar2 = *param_2;
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1498c4804(param_1 + 2,iVar1,0);
    FUN_1498c4876(param_1[2],lVar2,iVar1);
  }
  FUN_1498c47c9(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1498c2cdc FUN_1498c2cdc body=3218 status=ok
// SIG undefined FUN_1498c2cdc(void)

void FUN_1498c2cdc(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 param_6,longlong *param_7)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  byte bVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  longlong ****pppplVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 *puVar19;
  longlong *plVar20;
  longlong *plVar21;
  bool bVar22;
  longlong *plVar23;
  undefined *****pppppuVar24;
  bool bVar25;
  undefined1 auStack_328 [40];
  longlong ***local_300;
  longlong *local_2f8;
  longlong *local_2f0;
  longlong *local_2e8;
  undefined4 local_2e0;
  undefined1 local_2dc [4];
  undefined ****local_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined **local_2c0;
  byte local_2b8;
  char local_238;
  undefined1 local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined **local_218 [17];
  char local_190;
  longlong ***local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  byte local_140;
  undefined **local_138;
  longlong lStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong local_f0;
  longlong lStack_e8;
  ulonglong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [40];
  undefined5 local_a0;
  undefined3 uStack_9b;
  undefined5 uStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar13 = FUN_14479d2ce(param_2 + 0x14);
  if (lVar13 == 0) goto LAB_1498c2d15;
  lVar14 = FUN_145bb40cc();
  if (((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(lVar14 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8)
       != lVar14 + 0x30)) || (*(char *)(lVar13 + 0x108) != '\0')) goto LAB_1498c2d15;
  param_7[0x2b] = *(longlong *)(param_5 + 8);
  uVar11 = *param_5;
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  uVar6 = param_5[5];
  uVar7 = param_5[6];
  uVar8 = param_5[7];
  *(undefined4 *)(param_7 + 0x29) = param_5[4];
  *(undefined4 *)((longlong)param_7 + 0x14c) = uVar6;
  *(undefined4 *)(param_7 + 0x2a) = uVar7;
  *(undefined4 *)((longlong)param_7 + 0x154) = uVar8;
  *(undefined4 *)(param_7 + 0x27) = uVar11;
  *(undefined4 *)((longlong)param_7 + 0x13c) = uVar3;
  *(undefined4 *)(param_7 + 0x28) = uVar4;
  *(undefined4 *)((longlong)param_7 + 0x144) = uVar5;
  param_7[0x2c] = *(longlong *)(param_5 + 10);
  *(undefined4 *)(param_7 + 0x2d) = param_5[0xc];
  FUN_1447bdcfc(param_7 + 0x2e,param_5 + 0xe);
  local_300 = (longlong ***)(param_7 + 0x30);
  FUN_140415652(local_300,param_5 + 0x12);
  uVar2 = *(undefined8 *)((longlong)param_5 + 0x75);
  param_7[0x35] = *(longlong *)(param_5 + 0x1c);
  *(undefined8 *)((longlong)param_7 + 0x1ad) = uVar2;
  local_190 = '\0';
  plVar20 = param_7 + 0x27;
  plVar21 = param_7 + 0x2c;
  plVar23 = param_7 + 0x35;
  if ((longlong)*(int *)(param_1 + 0x18) == 0) {
LAB_1498c328f:
    local_128 = (undefined4)param_7[0x24];
    local_138 = (undefined **)param_7[0x22];
    lStack_130 = param_7[0x23];
    uStack_124 = (undefined4)*(undefined8 *)((longlong)param_7 + 0x124);
    uStack_120 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_7 + 0x124) >> 0x20);
    uStack_11c = (undefined4)*(undefined8 *)((longlong)param_7 + 300);
    uStack_118 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_7 + 300) >> 0x20);
    local_110 = *plVar20;
    uStack_108 = plVar20[1];
    local_100 = (undefined4)plVar20[2];
    uStack_fc = *(undefined4 *)((longlong)plVar20 + 0x14);
    uStack_f8 = (undefined4)plVar20[3];
    uStack_f4 = *(undefined4 *)((longlong)plVar20 + 0x1c);
    local_f0 = plVar20[4];
    FUN_144a3f8b4(&lStack_e8,plVar21);
    FUN_144b1f2a6(local_c8,local_300);
    local_a0 = (undefined5)*plVar23;
    uStack_9b = (undefined3)*(undefined8 *)((longlong)plVar23 + 5);
    uStack_98 = (undefined5)((ulonglong)*(undefined8 *)((longlong)plVar23 + 5) >> 0x18);
    local_50 = local_50 | 3;
    local_90 = &PTR_FUN_14beed8e0;
    iVar12 = (int)param_7[1];
    *(uint *)(param_7 + 1) = iVar12 + 1U;
    if (*(uint *)((longlong)param_7 + 0xc) < iVar12 + 1U) {
      FUN_140ac5684(param_7,iVar12);
    }
    lVar14 = *param_7;
    lVar17 = (longlong)iVar12 * 0xf0;
    plVar20 = (longlong *)(lVar14 + lVar17);
    *(undefined4 *)(plVar20 + 4) = uStack_118;
    plVar20[2] = CONCAT44(uStack_124,local_128);
    plVar20[3] = CONCAT44(uStack_11c,uStack_120);
    *plVar20 = (longlong)local_138;
    plVar20[1] = lStack_130;
    plVar20[9] = local_f0;
    *(undefined4 *)(plVar20 + 7) = local_100;
    *(undefined4 *)((longlong)plVar20 + 0x3c) = uStack_fc;
    *(undefined4 *)(plVar20 + 8) = uStack_f8;
    *(undefined4 *)((longlong)plVar20 + 0x44) = uStack_f4;
    *(undefined4 *)(plVar20 + 5) = (undefined4)local_110;
    *(undefined4 *)((longlong)plVar20 + 0x2c) = local_110._4_4_;
    *(undefined4 *)(plVar20 + 6) = (undefined4)uStack_108;
    *(undefined4 *)((longlong)plVar20 + 0x34) = uStack_108._4_4_;
    plVar20[10] = lStack_e8;
    *(undefined4 *)(plVar20 + 0xb) = (undefined4)local_e0;
    plVar20[0xc] = 0;
    plVar20[0xc] = local_d8;
    local_d8 = 0;
    *(undefined4 *)(plVar20 + 0xd) = (undefined4)local_d0;
    *(undefined4 *)((longlong)plVar20 + 0x6c) = local_d0._4_4_;
    local_d0 = 0;
    FUN_144b1f34a(plVar20 + 0xe,local_c8);
    plVar20[0x13] = CONCAT35(uStack_9b,local_a0);
    *(ulonglong *)((longlong)plVar20 + 0x9d) = CONCAT53(uStack_98,uStack_9b);
    lVar13 = lVar14 + lVar17;
    *(byte *)(lVar13 + 0xe8) = *(byte *)(lVar13 + 0xe8) & 0xfc | 2;
    FUN_144adeb48((undefined4 *)(lVar13 + 0xa8));
    if ((local_50 & 1) != 0) {
      lVar14 = lVar14 + lVar17;
      *(byte *)(lVar14 + 0xe8) = *(byte *)(lVar14 + 0xe8) | 1;
      *(byte *)(lVar14 + 0xe8) = *(byte *)(lVar14 + 0xe8) & 0xfd | local_50 & 2;
      *(undefined8 *)(lVar13 + 0xd8) = local_60;
      *(undefined8 *)(lVar13 + 0xe0) = uStack_58;
      *(undefined8 *)(lVar13 + 200) = local_70;
      *(undefined8 *)(lVar13 + 0xd0) = uStack_68;
      *(undefined8 *)(lVar13 + 0xb8) = local_80;
      *(undefined8 *)(lVar13 + 0xc0) = uStack_78;
      *(undefined4 *)(lVar13 + 0xa8) = (undefined4)local_90;
      *(undefined4 *)(lVar13 + 0xac) = local_90._4_4_;
      *(undefined4 *)(lVar13 + 0xb0) = uStack_88;
      *(undefined4 *)(lVar13 + 0xb4) = uStack_84;
      local_50 = local_50 & 0xfe;
    }
    if ((local_50 & 1) != 0) {
      pppplVar16 = (longlong ****)&local_90;
      if ((local_50 & 2) == 0) {
        pppplVar16 = (longlong ****)local_90;
      }
      local_50 = local_50 & 0xfe;
      (*(code *)**pppplVar16)(pppplVar16,0);
      if ((local_50 & 2) == 0) {
        FUN_1400020a8(local_90);
      }
    }
    FUN_144adeafa(&local_110);
  }
  else {
    puVar19 = *(undefined4 **)(param_1 + 0x10);
    lVar13 = (longlong)*(int *)(param_1 + 0x18) * 0x98;
    bVar22 = false;
    local_2f8 = param_7 + 0x2c;
    local_2f0 = param_7 + 0x27;
    local_2e8 = param_7 + 0x35;
    do {
      if (*(longlong *)(puVar19 + 0x22) == 0) {
        bVar25 = false;
      }
      else {
        bVar25 = *(longlong *)(*(longlong *)(puVar19 + 0x22) + 0x40) != 0;
      }
      iVar12 = param_5[9];
      if (SBORROW4(0,iVar12)) {
        piVar15 = param_5 + 1;
        if (param_5[8] == 0) {
          piVar15 = param_5 + 4;
        }
        iVar12 = *piVar15;
      }
      bVar22 = (bool)(bVar22 | bVar25);
      uVar1 = *(undefined1 *)((longlong)puVar19 + 0x93);
      local_138 = (undefined **)CONCAT44(local_138._4_4_,iVar12);
      cVar9 = FUN_1400a246c(puVar19,&local_138);
      if ((cVar9 != '\0') && (*(longlong *)(puVar19 + 0x22) != 0)) {
        if (puVar19 != &local_228) {
          if (local_190 == '\x01') {
            local_218[0] = &PTR_FUN_14beed308;
            FUN_1459becf2();
          }
          local_228 = *puVar19;
          uStack_224 = puVar19[1];
          uStack_220 = puVar19[2];
          uStack_21c = puVar19[3];
          FUN_1498c48c2(local_218,puVar19 + 4);
          local_190 = '\x01';
        }
        break;
      }
      puVar19 = puVar19 + 0x26;
      lVar13 = lVar13 + -0x98;
    } while (lVar13 != 0);
    plVar23 = local_2e8;
    plVar20 = local_2f0;
    uVar11 = DAT_14cb39270;
    plVar21 = local_2f8;
    if (!bVar22) goto LAB_1498c328f;
    lVar13 = FUN_1404155e4(param_7,DAT_14cb39270);
    if (lVar13 == 0) {
      local_2d8 = (undefined ****)&PTR_FUN_14beed8f0;
      local_238 = local_190;
      if (local_190 == '\x01') {
        local_2d0 = local_228;
        uStack_2cc = uStack_224;
        uStack_2c8 = uStack_220;
        uStack_2c4 = uStack_21c;
        FUN_1498c48c2();
      }
      local_140 = local_140 & 0xfe;
      local_230 = uVar1;
      FUN_1498c5002(&local_180);
      local_128 = (undefined4)param_7[0x24];
      local_138 = (undefined **)param_7[0x22];
      lStack_130 = param_7[0x23];
      uStack_124 = (undefined4)*(undefined8 *)((longlong)param_7 + 0x124);
      uStack_120 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_7 + 0x124) >> 0x20);
      uStack_11c = (undefined4)*(undefined8 *)((longlong)param_7 + 300);
      uStack_118 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_7 + 300) >> 0x20);
      local_f0 = plVar20[4];
      local_110 = *plVar20;
      uStack_108 = plVar20[1];
      local_100 = (undefined4)plVar20[2];
      uStack_fc = *(undefined4 *)((longlong)plVar20 + 0x14);
      uStack_f8 = (undefined4)plVar20[3];
      uStack_f4 = *(undefined4 *)((longlong)plVar20 + 0x1c);
      FUN_144a3f8b4(&lStack_e8,local_2f8);
      FUN_144b1f2a6(local_c8,local_300);
      local_a0 = (undefined5)*plVar23;
      uStack_9b = (undefined3)*(undefined8 *)((longlong)plVar23 + 5);
      uStack_98 = (undefined5)((ulonglong)*(undefined8 *)((longlong)plVar23 + 5) >> 0x18);
      bVar10 = local_50 & 0xfc;
      local_50 = bVar10 + 2;
      if ((local_140 & 1) != 0) {
        local_50 = bVar10 | local_140 & 2 | 1;
        local_60 = local_150;
        uStack_58 = uStack_148;
        local_70 = local_160;
        uStack_68 = uStack_158;
        local_80 = local_170;
        uStack_78 = uStack_168;
        local_90 = (undefined **)local_180;
        uStack_88 = (undefined4)uStack_178;
        uStack_84 = uStack_178._4_4_;
        local_140 = local_140 & 0xfe;
      }
      iVar12 = (int)param_7[1];
      *(uint *)(param_7 + 1) = iVar12 + 1U;
      local_300 = (longlong ***)&local_180;
      if (*(uint *)((longlong)param_7 + 0xc) < iVar12 + 1U) {
        FUN_140ac5684(param_7,iVar12);
      }
      lVar14 = *param_7;
      lVar17 = (longlong)iVar12 * 0xf0;
      plVar20 = (longlong *)(lVar14 + lVar17);
      *(undefined4 *)(plVar20 + 4) = uStack_118;
      plVar20[2] = CONCAT44(uStack_124,local_128);
      plVar20[3] = CONCAT44(uStack_11c,uStack_120);
      *plVar20 = (longlong)local_138;
      plVar20[1] = lStack_130;
      plVar20[9] = local_f0;
      *(undefined4 *)(plVar20 + 7) = local_100;
      *(undefined4 *)((longlong)plVar20 + 0x3c) = uStack_fc;
      *(undefined4 *)(plVar20 + 8) = uStack_f8;
      *(undefined4 *)((longlong)plVar20 + 0x44) = uStack_f4;
      *(undefined4 *)(plVar20 + 5) = (undefined4)local_110;
      *(undefined4 *)((longlong)plVar20 + 0x2c) = local_110._4_4_;
      *(undefined4 *)(plVar20 + 6) = (undefined4)uStack_108;
      *(undefined4 *)((longlong)plVar20 + 0x34) = uStack_108._4_4_;
      plVar20[10] = lStack_e8;
      *(undefined4 *)(plVar20 + 0xb) = (undefined4)local_e0;
      plVar20[0xc] = 0;
      plVar20[0xc] = local_d8;
      local_d8 = 0;
      *(undefined4 *)(plVar20 + 0xd) = (undefined4)local_d0;
      *(undefined4 *)((longlong)plVar20 + 0x6c) = local_d0._4_4_;
      local_d0 = 0;
      FUN_144b1f34a(plVar20 + 0xe,local_c8);
      plVar20[0x13] = CONCAT35(uStack_9b,local_a0);
      *(ulonglong *)((longlong)plVar20 + 0x9d) = CONCAT53(uStack_98,uStack_9b);
      lVar13 = lVar14 + lVar17;
      *(byte *)(lVar13 + 0xe8) = *(byte *)(lVar13 + 0xe8) & 0xfc | 2;
      FUN_144adeb48((undefined4 *)(lVar13 + 0xa8));
      if ((local_50 & 1) != 0) {
        lVar14 = lVar14 + lVar17;
        *(byte *)(lVar14 + 0xe8) = *(byte *)(lVar14 + 0xe8) | 1;
        *(byte *)(lVar14 + 0xe8) = *(byte *)(lVar14 + 0xe8) & 0xfd | local_50 & 2;
        *(undefined8 *)(lVar13 + 0xd8) = local_60;
        *(undefined8 *)(lVar13 + 0xe0) = uStack_58;
        *(undefined8 *)(lVar13 + 200) = local_70;
        *(undefined8 *)(lVar13 + 0xd0) = uStack_68;
        *(undefined8 *)(lVar13 + 0xb8) = local_80;
        *(undefined8 *)(lVar13 + 0xc0) = uStack_78;
        *(undefined4 *)(lVar13 + 0xa8) = (undefined4)local_90;
        *(undefined4 *)(lVar13 + 0xac) = local_90._4_4_;
        *(undefined4 *)(lVar13 + 0xb0) = uStack_88;
        *(undefined4 *)(lVar13 + 0xb4) = uStack_84;
        local_50 = local_50 & 0xfe;
      }
      if ((local_50 & 1) != 0) {
        pppplVar16 = (longlong ****)&local_90;
        if ((local_50 & 2) == 0) {
          pppplVar16 = (longlong ****)local_90;
        }
        local_50 = local_50 & 0xfe;
        (*(code *)**pppplVar16)(pppplVar16,0);
        if ((local_50 & 2) == 0) {
          FUN_1400020a8(local_90);
        }
      }
      FUN_144adeafa(&local_110);
      if ((local_140 & 1) != 0) {
        if ((local_140 & 2) == 0) {
          local_300 = local_180;
        }
        local_140 = local_140 & 0xfe;
        (*(code *)**local_300)(local_300,0);
        if ((local_140 & 2) == 0) {
          FUN_1400020a8(local_180);
        }
      }
      local_2d8 = (undefined ****)&PTR_FUN_14beed8f0;
      if (local_238 == '\x01') {
        local_2c0 = &PTR_FUN_14beed308;
        FUN_1459becf2();
      }
      uStack_118 = 0;
      uStack_114 = 0;
      lStack_130 = 0;
      local_100 = 0;
      uStack_f4 = 0;
      local_f0 = 0;
      lStack_e8 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_e0 = 0;
      local_138 = &PTR_FUN_14beed928;
      local_128 = 0;
      uStack_124 = 0;
      uStack_120 = 0;
      uStack_11c = 0;
      uStack_fc = 0x80;
      uStack_f8 = 0xffffffff;
      FUN_1457adc9c(&local_128,&local_2d8,param_4,0);
      local_2e0 = uVar11;
      local_2b8 = local_2b8 & 0xfe;
      FUN_1498c507a(&local_2d8,&local_138);
      local_180 = (longlong ***)&local_2e0;
      uStack_178 = &local_2d8;
      FUN_147f8b212(param_7 + 2,local_2dc,&local_180,0);
      if ((local_2b8 & 1) != 0) {
        pppppuVar24 = &local_2d8;
        if ((local_2b8 & 2) == 0) {
          pppppuVar24 = (undefined *****)local_2d8;
        }
        local_2b8 = local_2b8 & 0xfe;
        (*(code *)**pppppuVar24)(pppppuVar24,0);
        if ((local_2b8 & 2) == 0) {
          FUN_1400020a8(local_2d8);
        }
      }
      local_138 = &PTR_FUN_14beed928;
      local_e0 = local_e0 & 0xffffffff00000000;
      if (lStack_e8 != 0) {
        FUN_1400020a8();
      }
      FUN_140149fc2(&local_128);
    }
    else {
      uVar11 = FUN_1447addd0(param_4,0x10);
      iVar12 = FUN_140f5cb3a(lVar13 + 0x10,uVar11,param_4);
      if (iVar12 == -1) {
        local_2d8 = (undefined ****)&PTR_FUN_14beed8f0;
        local_238 = local_190;
        if (local_190 == '\x01') {
          local_2d0 = local_228;
          uStack_2cc = uStack_224;
          uStack_2c8 = uStack_220;
          uStack_2c4 = uStack_21c;
          FUN_1498c48c2();
        }
        local_140 = local_140 & 0xfe;
        local_230 = uVar1;
        FUN_1498c5002(&local_180);
        local_128 = (undefined4)param_7[0x24];
        local_138 = (undefined **)param_7[0x22];
        lStack_130 = param_7[0x23];
        uStack_124 = (undefined4)*(undefined8 *)((longlong)param_7 + 0x124);
        uStack_120 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_7 + 0x124) >> 0x20);
        uStack_11c = (undefined4)*(undefined8 *)((longlong)param_7 + 300);
        uStack_118 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_7 + 300) >> 0x20);
        local_f0 = plVar20[4];
        local_110 = *plVar20;
        uStack_108 = plVar20[1];
        local_100 = (undefined4)plVar20[2];
        uStack_fc = *(undefined4 *)((longlong)plVar20 + 0x14);
        uStack_f8 = (undefined4)plVar20[3];
        uStack_f4 = *(undefined4 *)((longlong)plVar20 + 0x1c);
        FUN_144a3f8b4(&lStack_e8,local_2f8);
        FUN_144b1f2a6(local_c8,local_300);
        local_a0 = (undefined5)*plVar23;
        uStack_9b = (undefined3)*(undefined8 *)((longlong)plVar23 + 5);
        uStack_98 = (undefined5)((ulonglong)*(undefined8 *)((longlong)plVar23 + 5) >> 0x18);
        bVar10 = local_50 & 0xfc;
        local_50 = bVar10 + 2;
        if ((local_140 & 1) != 0) {
          local_50 = bVar10 | local_140 & 2 | 1;
          local_60 = local_150;
          uStack_58 = uStack_148;
          local_70 = local_160;
          uStack_68 = uStack_158;
          local_80 = local_170;
          uStack_78 = uStack_168;
          local_90 = (undefined **)local_180;
          uStack_88 = (undefined4)uStack_178;
          uStack_84 = uStack_178._4_4_;
          local_140 = local_140 & 0xfe;
        }
        iVar12 = (int)param_7[1];
        *(uint *)(param_7 + 1) = iVar12 + 1U;
        local_300 = (longlong ***)&local_180;
        if (*(uint *)((longlong)param_7 + 0xc) < iVar12 + 1U) {
          FUN_140ac5684(param_7,iVar12);
        }
        lVar14 = *param_7;
        lVar17 = (longlong)iVar12 * 0xf0;
        lVar18 = lVar17 + 0x70 + lVar14;
        *(undefined4 *)(lVar18 + -0x50) = uStack_118;
        *(ulonglong *)(lVar18 + -0x60) = CONCAT44(uStack_124,local_128);
        *(ulonglong *)(lVar18 + -0x58) = CONCAT44(uStack_11c,uStack_120);
        *(undefined ***)(lVar18 + -0x70) = local_138;
        *(longlong *)(lVar18 + -0x68) = lStack_130;
        *(longlong *)(lVar18 + -0x28) = local_f0;
        *(undefined4 *)(lVar18 + -0x38) = local_100;
        *(undefined4 *)(lVar18 + -0x34) = uStack_fc;
        *(undefined4 *)(lVar18 + -0x30) = uStack_f8;
        *(undefined4 *)(lVar18 + -0x2c) = uStack_f4;
        *(undefined4 *)(lVar18 + -0x48) = (undefined4)local_110;
        *(undefined4 *)(lVar18 + -0x44) = local_110._4_4_;
        *(undefined4 *)(lVar18 + -0x40) = (undefined4)uStack_108;
        *(undefined4 *)(lVar18 + -0x3c) = uStack_108._4_4_;
        *(longlong *)(lVar18 + -0x20) = lStack_e8;
        *(undefined4 *)(lVar18 + -0x18) = (undefined4)local_e0;
        *(undefined8 *)(lVar18 + -0x10) = 0;
        *(longlong *)(lVar18 + -0x10) = local_d8;
        local_d8 = 0;
        *(undefined4 *)(lVar18 + -8) = (undefined4)local_d0;
        *(undefined4 *)(lVar18 + -4) = local_d0._4_4_;
        local_d0 = 0;
        FUN_144b1f34a(lVar18,local_c8);
        *(ulonglong *)(lVar18 + 0x28) = CONCAT35(uStack_9b,local_a0);
        *(ulonglong *)(lVar18 + 0x2d) = CONCAT53(uStack_98,uStack_9b);
        puVar19 = (undefined4 *)(lVar17 + 0xa8 + lVar14);
        *(byte *)(puVar19 + 0x10) = *(byte *)(puVar19 + 0x10) & 0xfc | 2;
        FUN_144adeb48(puVar19);
        if ((local_50 & 1) != 0) {
          lVar14 = lVar14 + lVar17;
          *(byte *)(lVar14 + 0xe8) = *(byte *)(lVar14 + 0xe8) | 1;
          *(byte *)(lVar14 + 0xe8) = *(byte *)(lVar14 + 0xe8) & 0xfd | local_50 & 2;
          *(undefined8 *)(puVar19 + 0xc) = local_60;
          *(undefined8 *)(puVar19 + 0xe) = uStack_58;
          *(undefined8 *)(puVar19 + 8) = local_70;
          *(undefined8 *)(puVar19 + 10) = uStack_68;
          *(undefined8 *)(puVar19 + 4) = local_80;
          *(undefined8 *)(puVar19 + 6) = uStack_78;
          *puVar19 = (undefined4)local_90;
          puVar19[1] = local_90._4_4_;
          puVar19[2] = uStack_88;
          puVar19[3] = uStack_84;
          local_50 = local_50 & 0xfe;
        }
        if ((local_50 & 1) != 0) {
          pppplVar16 = (longlong ****)&local_90;
          if ((local_50 & 2) == 0) {
            pppplVar16 = (longlong ****)local_90;
          }
          local_50 = local_50 & 0xfe;
          (*(code *)**pppplVar16)(pppplVar16,0);
          if ((local_50 & 2) == 0) {
            FUN_1400020a8(local_90);
          }
        }
        FUN_144adeafa(&local_110);
        if ((local_140 & 1) != 0) {
          if ((local_140 & 2) == 0) {
            local_300 = local_180;
          }
          local_140 = local_140 & 0xfe;
          (*(code *)**local_300)(local_300,0);
          if ((local_140 & 2) == 0) {
            FUN_1400020a8(local_180);
          }
        }
        local_2d8 = (undefined ****)&PTR_FUN_14beed8f0;
        if (local_238 == '\x01') {
          local_2c0 = &PTR_FUN_14beed308;
          FUN_1459becf2();
        }
        FUN_1457adc9c(lVar13 + 0x10,&local_138,param_4,0);
      }
    }
  }
  if (local_190 == '\x01') {
    local_218[0] = &PTR_FUN_14beed308;
    FUN_1459becf2();
  }
LAB_1498c2d15:
  if ((local_48 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498c3970 FUN_1498c3970 body=87 status=ok
// SIG undefined FUN_1498c3970(void)

longlong FUN_1498c3970(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 800))();
  if (lVar1 != 0) {
    lVar2 = FUN_145bb3fe2();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_1498c3989;
  }
  lVar1 = 0;
LAB_1498c3989:
  (**(code **)(*param_1 + 0x318))(param_1,lVar1);
  return lVar1;
}



// FUNCTION 1498c39e6 FUN_1498c39e6 body=75 status=ok
// SIG undefined FUN_1498c39e6(void)

bool FUN_1498c39e6(undefined8 param_1,longlong *param_2)

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
      goto LAB_1498c3a1f;
    }
  }
  lVar2 = 0;
LAB_1498c3a1f:
  lVar1 = FUN_145bb3fe2();
  return lVar2 == lVar1;
}



// FUNCTION 1498c3a32 FUN_1498c3a32 body=78 status=ok
// SIG undefined FUN_1498c3a32(void)

longlong FUN_1498c3a32(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1498c3a80();
  lVar2 = FUN_1498c3b2f(lVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  *(longlong *)(lVar1 + 0x178) = lVar2;
  *(undefined1 *)(lVar1 + 0x120) = 1;
  *(byte *)(lVar1 + 0x124) = *(byte *)(lVar1 + 0x124) | 0xc;
  return lVar1;
}



// FUNCTION 1498c3a80 FUN_1498c3a80 body=174 status=ok
// SIG undefined FUN_1498c3a80(void)

undefined8 FUN_1498c3a80(undefined8 param_1)

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
  uVar1 = FUN_145bb3fe2();
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



// FUNCTION 1498c3b2f FUN_1498c3b2f body=174 status=ok
// SIG undefined FUN_1498c3b2f(void)

undefined8 FUN_1498c3b2f(undefined8 param_1)

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
  uVar1 = FUN_14110c9fe();
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



// FUNCTION 1498c3bde FUN_1498c3bde body=158 status=ok
// SIG undefined FUN_1498c3bde(void)

undefined8 FUN_1498c3bde(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 1498c3c7e FUN_1498c3c7e body=462 status=ok
// SIG undefined FUN_1498c3c7e(void)

void FUN_1498c3c7e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  int local_90;
  undefined4 local_8c;
  undefined **local_88;
  byte local_80;
  longlong local_78;
  ulonglong uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_60 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar1 == 0) {
    local_90 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar10 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar10);
      if (lVar3 != 0) {
        lVar8 = FUN_145bb3fe2();
        if ((((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
            ((*(byte *)(lVar3 + 0xc0) & 1) != 0)) && (*(longlong *)(lVar3 + 0x178) != 0)) {
          puVar9 = (undefined4 *)FUN_1498c3e4e(&local_68);
          uVar4 = *(undefined4 *)(lVar3 + 0x9c);
          uVar5 = *(undefined4 *)(lVar3 + 0xa0);
          uVar6 = *(undefined4 *)(lVar3 + 0xa4);
          *puVar9 = *(undefined4 *)(lVar3 + 0x98);
          puVar9[1] = uVar4;
          puVar9[2] = uVar5;
          puVar9[3] = uVar6;
          FUN_1498c3e8c(puVar9 + 4,lVar3 + 0x100);
        }
      }
      uVar7 = uStack_60;
      lVar3 = local_68;
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar1 * 8 != lVar10);
    local_90 = (int)uStack_60;
    local_98 = 0;
    if ((int)uStack_60 != 0) {
      FUN_1498c4804(&local_98,uStack_60 & 0xffffffff,0);
      FUN_1498c4876(local_98,lVar3,uVar7 & 0xffffffff);
      goto LAB_1498c3cd5;
    }
  }
  local_98 = 0;
  local_8c = 0;
LAB_1498c3cd5:
  FUN_1498c2c58(&local_88,&local_98);
  uVar7 = uStack_70;
  lVar2 = local_78;
  local_78 = 0;
  uStack_70 = 0;
  FUN_140a31f5e(param_2 + 0x30);
  *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 3;
  *(undefined ***)(param_2 + 0x30) = &PTR_FUN_14beed320;
  *(longlong *)(param_2 + 0x40) = lVar2;
  *(ulonglong *)(param_2 + 0x48) = uVar7;
  *(byte *)(param_2 + 0x38) = local_80 | 8;
  local_88 = &PTR_FUN_14beed320;
  FUN_1498c47c9(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  *(undefined2 *)(param_2 + 0x10) = 10000;
  FUN_1498c47c9(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c3e4e FUN_1498c3e4e body=62 status=ok
// SIG undefined FUN_1498c3e4e(void)

longlong FUN_1498c3e4e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1498c50f0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x98 + *param_1;
  FUN_1498c50e1(lVar2);
  return lVar2;
}



// FUNCTION 1498c3e8c FUN_1498c3e8c body=108 status=ok
// SIG undefined FUN_1498c3e8c(void)

longlong FUN_1498c3e8c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  FUN_1481e36c2(param_1 + 0x20,param_2 + 0x20);
  lVar4 = *(longlong *)(param_2 + 0x78);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_14689c22e();
      lVar4 = *(longlong *)(param_2 + 0x78);
    }
  }
  *(longlong *)(param_1 + 0x78) = lVar4;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x84) = *(undefined1 *)(param_2 + 0x84);
  return param_1;
}



// FUNCTION 1498c3f52 FUN_1498c3f52 body=131 status=ok
// SIG undefined FUN_1498c3f52(void)

void FUN_1498c3f52(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x118);
  *(uint *)(param_1 + 0x118) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x11c) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0x110),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
    return;
  }
  return;
}



// FUNCTION 1498c3fd6 FUN_1498c3fd6 body=106 status=ok
// SIG undefined FUN_1498c3fd6(void)

void FUN_1498c3fd6(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0x110);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c4042 FUN_1498c4042 body=95 status=ok
// SIG undefined FUN_1498c4042(void)

void FUN_1498c4042(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x118);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x110) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0x110) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x118);
  }
  *(int *)(param_1 + 0x118) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0x110);
  return;
}



// FUNCTION 1498c40ae FUN_1498c40ae body=66 status=ok
// SIG undefined FUN_1498c40ae(void)

void FUN_1498c40ae(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x10);
    lVar3 = (longlong)*(int *)(param_1 + 0x18) << 3;
    do {
      if (*plVar2 != 0) {
        uVar1 = FUN_145bb3fe2();
        FUN_144a7ca96(plVar2,uVar1);
      }
      plVar2 = plVar2 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1498c40f4 FUN_1498c40f4 body=156 status=ok
// SIG undefined FUN_1498c40f4(void)

byte FUN_1498c40f4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 == 0) {
    bVar4 = 1;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x10);
    bVar4 = 1;
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if (lVar3 != 0) {
        lVar5 = FUN_145bb3fe2();
        if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
           (((*(byte *)(lVar3 + 0xc0) & 2) != 0 || (*(char *)(lVar3 + 0x180) == '\x01')))) {
          bVar4 = 0;
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    bVar4 = 0;
  }
  else {
    bVar4 = (*(byte *)(param_1 + -0x97) ^ 1) & bVar4;
  }
  return bVar4;
}



// FUNCTION 1498c4190 FUN_1498c4190 body=132 status=ok
// SIG undefined FUN_1498c4190(void)

uint FUN_1498c4190(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x10);
    uVar5 = 0xffffffff;
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if (lVar3 != 0) {
        lVar4 = FUN_145bb3fe2();
        if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
            (*(char *)(lVar3 + 0x181) == '\x01')) &&
           ((int)uVar5 < (int)(uint)*(byte *)(lVar3 + 0x182))) {
          uVar5 = (uint)*(byte *)(lVar3 + 0x182);
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return uVar5;
}



// FUNCTION 1498c423c FUN_1498c423c body=57 status=ok
// SIG undefined FUN_1498c423c(void)

undefined8 * FUN_1498c423c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14beed308;
  FUN_1459becf2(param_1 + 4);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1498c4276 FUN_1498c4276 body=74 status=ok
// SIG undefined FUN_1498c4276(void)

undefined8 * FUN_1498c4276(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14beed320;
  FUN_1498c47c9(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1498c42c6 FUN_1498c42c6 body=57 status=ok
// SIG undefined FUN_1498c42c6(void)

void FUN_1498c42c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc310c8 == 0) {
    uVar1 = FUN_14596ef09();
    DAT_14cc310c8 = FUN_140002ddd(FUN_14676f25d,uVar1,L"MovieSceneNiagaraCacheSectionTemplate");
  }
  return;
}



// FUNCTION 1498c4334 FUN_1498c4334 body=63 status=ok
// SIG undefined FUN_1498c4334(void)

undefined1 FUN_1498c4334(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1498c3e8c(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 1498c439c FUN_1498c439c body=59 status=ok
// SIG undefined FUN_1498c439c(void)

undefined8 FUN_1498c439c(longlong *param_1)

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



// FUNCTION 1498c43e8 FUN_1498c43e8 body=51 status=ok
// SIG undefined FUN_1498c43e8(void)

void FUN_1498c43e8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *param_2 = &PTR_FUN_14beed308;
    FUN_1459becf2(param_2 + 4);
    *(undefined1 *)(param_2 + 0x11) = 0;
  }
  return;
}



// FUNCTION 1498c446c FUN_1498c446c body=38 status=ok
// SIG undefined FUN_1498c446c(void)

void FUN_1498c446c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x98);
  FUN_145d5dc3e((longlong)param_2 + 0x10);
  return;
}



// FUNCTION 1498c44cc FUN_1498c44cc body=78 status=ok
// SIG undefined FUN_1498c44cc(void)

undefined1 FUN_1498c44cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_1498c3e8c(param_2,param_3);
      param_3 = param_3 + 0x98;
      param_2 = param_2 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1498c4542 FUN_1498c4542 body=59 status=ok
// SIG undefined FUN_1498c4542(void)

undefined8 FUN_1498c4542(longlong *param_1)

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



// FUNCTION 1498c458e FUN_1498c458e body=52 status=ok
// SIG undefined FUN_1498c458e(void)

void FUN_1498c458e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14beed308;
    FUN_1459becf2(param_2 + 0x30);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 1498c4662 FUN_1498c4662 body=68 status=ok
// SIG undefined FUN_1498c4662(void)

undefined1 FUN_1498c4662(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1498c476a(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1498c46ce FUN_1498c46ce body=59 status=ok
// SIG undefined FUN_1498c46ce(void)

undefined8 FUN_1498c46ce(longlong *param_1)

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



// FUNCTION 1498c476a FUN_1498c476a body=95 status=ok
// SIG undefined FUN_1498c476a(void)

undefined8 * FUN_1498c476a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1498c47c9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1498c4804(param_1,iVar1);
      FUN_1498c4876(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1498c47c9 FUN_1498c47c9 body=58 status=ok
// SIG undefined FUN_1498c47c9(void)

void FUN_1498c47c9(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x30;
    do {
      *(undefined ***)(param_1 + -0x20) = &PTR_FUN_14beed308;
      FUN_1459becf2(param_1);
      param_1 = param_1 + 0x98;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1498c4804 FUN_1498c4804 body=114 status=ok
// SIG undefined FUN_1498c4804(void)

void FUN_1498c4804(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x98,8);
    iVar2 = (int)(uVar1 / 0x98);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x98,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1498c4876 FUN_1498c4876 body=76 status=ok
// SIG undefined FUN_1498c4876(void)

void FUN_1498c4876(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      uVar1 = *(undefined4 *)(param_2 + -0xc);
      uVar2 = *(undefined4 *)(param_2 + -8);
      uVar3 = *(undefined4 *)(param_2 + -4);
      *(undefined4 *)(param_1 + -0x10) = *(undefined4 *)(param_2 + -0x10);
      *(undefined4 *)(param_1 + -0xc) = uVar1;
      *(undefined4 *)(param_1 + -8) = uVar2;
      *(undefined4 *)(param_1 + -4) = uVar3;
      FUN_1498c48c2(param_1,param_2);
      param_1 = param_1 + 0x98;
      param_2 = param_2 + 0x98;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1498c48c2 FUN_1498c48c2 body=122 status=ok
// SIG undefined FUN_1498c48c2(void)

undefined8 * FUN_1498c48c2(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = &PTR_FUN_14a4b25c8;
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0x18);
  *param_1 = &PTR_FUN_14beed308;
  FUN_148070d3a(param_1 + 4,param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x78);
  param_1[0xf] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  *(undefined1 *)((longlong)param_1 + 0x84) = *(undefined1 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
  return param_1;
}



// FUNCTION 1498c493e FUN_1498c493e body=62 status=ok
// SIG undefined FUN_1498c493e(void)

void FUN_1498c493e(undefined8 *param_1)

{
  if (*(char *)(param_1 + 4) == '\x01') {
    *param_1 = &PTR_FUN_14beed320;
    FUN_1498c47c9(param_1[2],*(undefined4 *)(param_1 + 3));
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 1498c497c FUN_1498c497c body=34 status=ok
// SIG undefined FUN_1498c497c(void)

undefined8 FUN_1498c497c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1498c499e FUN_1498c499e body=86 status=ok
// SIG undefined FUN_1498c499e(void)

undefined8 * FUN_1498c499e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14beed8f0;
  if (*(char *)(param_1 + 0x14) == '\x01') {
    param_1[3] = &PTR_FUN_14beed308;
    FUN_1459becf2(param_1 + 7);
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1498c49f4 FUN_1498c49f4 body=1034 status=ok
// SIG undefined FUN_1498c49f4(void)

void FUN_1498c49f4(longlong param_1,float param_2,ulonglong param_3,longlong param_4,
                  undefined8 *param_5)

{
  double dVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  undefined1 auVar13 [16];
  float fVar14;
  double dVar15;
  undefined1 unaff_XMM10 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  double dVar19;
  
  uVar7 = (uint)((char)*param_5 != '\x01') + (int)((ulonglong)*param_5 >> 0x20);
  iVar4 = (uint)((char)param_5[1] == '\x01') + (int)((ulonglong)param_5[1] >> 0x20);
  iVar6 = (int)((ulonglong)param_4 >> 0x20);
  lVar9 = param_4 >> 0x20;
  if (*(char *)((longlong)param_5 + 0x94) == '\x01') {
    iVar3 = iVar4 - uVar7;
    param_2 = (float)(((double)(lVar9 * iVar3) +
                      (double)((ulonglong)(double)iVar6 & 0x8000000000000000)) /
                     (double)(int)param_4);
  }
  else {
    iVar3 = iVar4 - uVar7;
  }
  dVar1 = (double)(int)param_4;
  dVar12 = (double)iVar6;
  uVar5 = iVar4 - 1;
  uVar8 = param_3;
  if ((int)uVar5 <= (int)(uint)param_3) {
    if (0.0 <= (float)(param_3 >> 0x20)) {
      uVar8 = (ulonglong)uVar5;
    }
    if (uVar5 != (uint)param_3) {
      uVar8 = (ulonglong)uVar5;
    }
    param_3 = uVar8 & 0xffffffff;
  }
  iVar6 = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc);
  uVar5 = (uint)param_3;
  if ((int)uVar5 <= (int)uVar7) {
    if ((float)(uVar8 >> 0x20) <= 0.0) {
      uVar8 = (ulonglong)uVar7;
    }
    if (uVar7 != uVar5) {
      uVar8 = (ulonglong)uVar7;
    }
    uVar5 = (uint)uVar8;
  }
  fVar18 = (float)(uVar8 >> 0x20);
  auVar16 = roundps(unaff_XMM10,ZEXT416((uint)fVar18),1);
  fVar11 = param_2 - (float)(((double)(iVar6 * lVar9) +
                             (double)((ulonglong)dVar12 & 0x8000000000000000)) / dVar1);
  fVar18 = (fVar18 - auVar16._0_4_) + 0.5 + -0.5;
  auVar13 = ZEXT416((uint)fVar18);
  if (0.99999994 <= fVar18) {
    auVar13 = ZEXT416(0x3f7fffff);
  }
  if (auVar13._0_4_ <= 0.0) {
    auVar2._12_4_ = 0;
    auVar2._0_12_ = auVar13._4_12_;
    auVar13 = auVar2 << 0x20;
  }
  if (ABS(*(float *)(param_1 + 0x14)) <= 1e-08) {
    dVar10 = 1.0;
  }
  else {
    dVar10 = (double)*(float *)(param_1 + 0x14);
  }
  dVar10 = dVar10 * ((double)auVar13._0_4_ + (double)(int)((uVar5 - uVar7) + (int)auVar16._0_4_));
  auVar16._8_8_ = 0;
  auVar16._0_8_ = dVar10;
  auVar16 = roundpd(auVar16,auVar16,1);
  dVar19 = auVar16._0_8_;
  dVar10 = dVar10 - dVar19;
  if (2147483647.0 <= dVar19) {
    dVar19 = 2147483647.0;
  }
  if (dVar19 <= -2147483648.0) {
    dVar19 = -2147483648.0;
  }
  fVar18 = (float)dVar10;
  if (0.99999994 <= fVar18) {
    fVar18 = 0.99999994;
  }
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  fVar18 = fVar18 + 0.5 + -0.5;
  if (0.99999994 <= fVar18) {
    fVar18 = 0.99999994;
  }
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  if (0.0 < fVar11) {
    dVar15 = ((double)param_2 * dVar1) / dVar12;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = dVar15;
    auVar16 = roundpd(auVar13,auVar13,1);
    dVar10 = auVar16._0_8_;
    dVar15 = dVar15 - dVar10;
    iVar4 = (int)dVar15;
    fVar14 = (float)dVar15 - (float)iVar4;
    fVar17 = fVar14;
    if (0.99999994 <= fVar14) {
      fVar17 = 0.99999994;
    }
    fVar17 = (float)(~-(uint)(0.0 < fVar14) & (uint)fVar14 | (uint)fVar17 & -(uint)(0.0 < fVar14)) +
             0.5 + -0.5;
    if (2147483647.0 <= dVar10) {
      dVar10 = 2147483647.0;
    }
    if (0.99999994 <= fVar17) {
      fVar17 = 0.99999994;
    }
    if (dVar10 <= -2147483648.0) {
      dVar10 = -2147483648.0;
    }
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    if (((int)(fVar17 + 0.5) + (int)dVar10 + iVar4 + 1 < iVar6 + iVar3) ||
       (0.0001 < ABS(((float)(((double)(*(int *)(param_1 + 8) * lVar9) +
                              (double)((ulonglong)dVar12 & 0x8000000000000000)) / dVar1) +
                     (float)(((double)((int)dVar19 * lVar9) + (double)fVar18 * dVar12) / dVar1)) -
                     fVar11))) {
      FUN_1447c7e44();
    }
  }
  return;
}



// FUNCTION 1498c4dfe FUN_1498c4dfe body=34 status=ok
// SIG undefined FUN_1498c4dfe(void)

undefined8 FUN_1498c4dfe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1498c4e20 FUN_1498c4e20 body=42 status=ok
// SIG undefined FUN_1498c4e20(void)

undefined8 * FUN_1498c4e20(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1439f4d04(param_3);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 3;
  *param_2 = &PTR_FUN_14beed918;
  *(undefined1 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 1498c4e4a FUN_1498c4e4a body=34 status=ok
// SIG undefined FUN_1498c4e4a(void)

undefined8 FUN_1498c4e4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1498c4e82 FUN_1498c4e82 body=78 status=ok
// SIG undefined FUN_1498c4e82(void)

undefined8 * FUN_1498c4e82(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14beed928;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1 + 2);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1498c4ed2 FUN_1498c4ed2 body=36 status=ok
// SIG undefined FUN_1498c4ed2(void)

undefined8 FUN_1498c4ed2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1498c4f12 FUN_1498c4f12 body=93 status=ok
// SIG undefined FUN_1498c4f12(void)

void FUN_1498c4f12(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14beed940;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498c4f70 FUN_1498c4f70 body=123 status=ok
// SIG undefined FUN_1498c4f70(void)

void FUN_1498c4f70(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beed940;
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



// FUNCTION 1498c4fec FUN_1498c4fec body=21 status=ok
// SIG undefined FUN_1498c4fec(void)

undefined8 FUN_1498c4fec(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498c5002 FUN_1498c5002 body=120 status=ok
// SIG undefined FUN_1498c5002(void)

void FUN_1498c5002(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar6 = (undefined8 *)FUN_14001cc68(0xb0,8);
  *param_1 = puVar6;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar6;
  }
  *param_1 = &PTR_FUN_14beed8f0;
  cVar2 = *(char *)(param_2 + 0xa0);
  *(char *)(param_1 + 0x14) = cVar2;
  if (cVar2 == '\x01') {
    uVar3 = *(undefined4 *)(param_2 + 0xc);
    uVar4 = *(undefined4 *)(param_2 + 0x10);
    uVar5 = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
    *(undefined4 *)(param_1 + 2) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
    FUN_1498c48c2(param_1 + 3,param_2 + 0x18);
  }
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0xa8);
  return;
}



// FUNCTION 1498c507a FUN_1498c507a body=103 status=ok
// SIG undefined FUN_1498c507a(void)

void FUN_1498c507a(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 4);
  *(byte *)(param_1 + 4) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_LAB_14acc1bc8;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *param_1 = &PTR_FUN_14beed928;
  FUN_1409e67a4(param_1 + 2,param_2 + 0x10);
  return;
}



// FUNCTION 1498c50e1 FUN_1498c50e1 body=15 status=ok
// SIG undefined FUN_1498c50e1(void)

void FUN_1498c50e1(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_145d5dc3e(param_1 + 2);
  return;
}



// FUNCTION 1498c50f0 FUN_1498c50f0 body=146 status=ok
// SIG undefined FUN_1498c50f0(void)

void FUN_1498c50f0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x98,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x98)) {
      uVar5 = uVar4 / 0x98 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x98,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1498c518e FUN_1498c518e body=36 status=ok
// SIG undefined FUN_1498c518e(void)

undefined8 FUN_1498c518e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1498c51ce FUN_1498c51ce body=93 status=ok
// SIG undefined FUN_1498c51ce(void)

void FUN_1498c51ce(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14beede20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498c522c FUN_1498c522c body=123 status=ok
// SIG undefined FUN_1498c522c(void)

void FUN_1498c522c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beede20;
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



// FUNCTION 1498c52a8 FUN_1498c52a8 body=21 status=ok
// SIG undefined FUN_1498c52a8(void)

undefined8 FUN_1498c52a8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498c52be FUN_1498c52be body=31 status=ok
// SIG undefined FUN_1498c52be(void)

bool FUN_1498c52be(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x38))();
  return 0 < iVar1;
}



// FUNCTION 1498c52de FUN_1498c52de body=138 status=ok
// SIG undefined FUN_1498c52de(void)

undefined8 * FUN_1498c52de(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_28,"AvfMedia",1);
  uVar1 = FUN_144a52528();
  plVar2 = (longlong *)FUN_1405f3750(uVar1,local_28,0);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c536a FUN_1498c536a body=151 status=ok
// SIG undefined FUN_1498c536a(void)

undefined8 FUN_1498c536a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = L"MediaPlayerDisplayName";
  local_30 = 0x16;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"FAvfMediaFactoryModule";
  local_30 = 0x16;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(param_2,local_40,local_3c,L"Apple AV Foundation");
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c5402 FUN_1498c5402 body=120 status=ok
// SIG undefined FUN_1498c5402(void)

undefined8 * FUN_1498c5402(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc31158) {
    FUN_144b3d300(&DAT_14cc31158);
    if (DAT_14cc31158 == -1) {
      FUN_1446f470e(&DAT_14cc31150,L"AvfMedia",1);
      _Init_thread_footer(&DAT_14cc31158);
    }
  }
  *param_2 = DAT_14cc31150;
  return param_2;
}



// FUNCTION 1498c54a0 FUN_1498c54a0 body=1582 status=ok
// SIG undefined FUN_1498c54a0(void)

undefined8
FUN_1498c54a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  ushort uVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined1 local_134 [4];
  longlong *local_130 [2];
  undefined8 local_120;
  longlong *local_118;
  longlong *local_110 [2];
  undefined1 local_fc [4];
  wchar_t *local_f8 [2];
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  longlong local_b8 [2];
  undefined2 *local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_a8 = (undefined2 *)0x0;
  uStack_a0 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  FUN_140056680(&local_60,&DAT_149e3579e);
  local_140 = 0;
  local_148 = 0;
  cVar4 = FUN_1407cdbc6(param_2,&local_60,local_b8 + 2,local_b8);
  if (local_60 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (cVar4 == '\0') {
    uVar7 = 0;
    if (param_5 == (longlong *)0x0) goto LAB_1498c5621;
    local_60 = L"NoSchemeFound";
    local_58 = 0xd;
    FUN_1446e940c(&local_70,&local_60);
    local_60 = L"FAvfMediaFactoryModule";
    local_58 = 0x16;
    FUN_1446e940c(&local_80,&local_60);
    FUN_140208bae(&local_60,&local_80,&local_70,L"No URI scheme found");
    iVar3 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
      FUN_14001d63e(param_5,iVar3);
    }
    FUN_14023423e((longlong)iVar3 * 0x10 + *param_5,&local_60);
    local_f8[0] = local_60;
  }
  else {
    cVar4 = FUN_144a23846(param_1 + 0x30,local_b8 + 2);
    if (cVar4 != '\0') {
      puVar5 = local_a8;
      if ((int)uStack_a0 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      lVar6 = 0;
      while( true ) {
        uVar8 = *(ushort *)((longlong)puVar5 + lVar6);
        uVar9 = (ulonglong)uVar8;
        uVar10 = *(ushort *)((longlong)&DAT_14a8e6a18 + lVar6);
        if (uVar8 != uVar10) break;
        if (uVar8 == 0) goto LAB_1498c58a7;
LAB_1498c5872:
        lVar6 = lVar6 + 2;
      }
      if ((uVar10 | uVar8) < 0x80) {
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        uVar11 = (ulonglong)uVar10;
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_1498c5872;
      }
      uVar7 = 0x50;
      if (uVar8 != uVar10) goto LAB_1498c5621;
LAB_1498c58a7:
      FUN_144a06df0(local_c8,local_b8,0);
      cVar4 = FUN_144a23846(param_1 + 0x10,local_c8);
      if (cVar4 == '\0') {
        if (param_5 != (longlong *)0x0) {
          FUN_140009b9a(local_110,local_c8);
          local_60 = L"ExtensionNotSupported";
          local_58 = 0x15;
          FUN_1446e940c(local_fc,&local_60);
          local_60 = L"FAvfMediaFactoryModule";
          local_58 = 0x16;
          FUN_1446e940c(local_134,&local_60);
          FUN_140208bae(local_130,local_134,local_fc,L"The file extension \'{0}\' is not supported")
          ;
          FUN_14023409e(&local_120,local_130,1);
          local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
          FUN_14023423e(local_50,local_110);
          local_78 = &local_40;
          local_80 = &local_60;
          FUN_14010d304(&local_70);
          local_90 = local_120;
          local_88 = local_118;
          if (local_118 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_118 + 1) = (int)local_118[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_f8,&local_90,&local_70);
          FUN_14007f2db(local_70,local_68);
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          if (local_50[0] != (longlong *)0x0) {
            (**(code **)(*local_50[0] + 0x10))();
          }
          if (local_118 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_118 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_118)(local_118);
              LOCK();
              piVar2 = (int *)((longlong)local_118 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_118 + 0x10))(local_118);
              }
            }
          }
          if (local_110[0] != (longlong *)0x0) {
            (**(code **)(*local_110[0] + 0x10))();
          }
          iVar3 = (int)param_5[1];
          *(uint *)(param_5 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
            FUN_14001d63e(param_5,iVar3);
          }
          FUN_14023423e((longlong)iVar3 * 0x10 + *param_5,local_f8);
          if (local_f8[0] != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_f8[0] + 0x10))();
          }
          if (local_130[0] != (longlong *)0x0) {
            (**(code **)(*local_130[0] + 0x10))();
          }
        }
        if (local_c8[0] != (longlong *)0x0) {
          FUN_1400020a8();
        }
        uVar7 = 0;
      }
      else {
        if (local_c8[0] != (longlong *)0x0) {
          FUN_1400020a8();
        }
        uVar7 = 0x50;
      }
      goto LAB_1498c5621;
    }
    uVar7 = 0;
    if (param_5 == (longlong *)0x0) goto LAB_1498c5621;
    FUN_140009b9a(local_d8,local_b8 + 2);
    local_60 = L"SchemeNotSupported";
    local_58 = 0x12;
    FUN_1446e940c(local_130,&local_60);
    local_60 = L"FAvfMediaFactoryModule";
    local_58 = 0x16;
    FUN_1446e940c(local_fc,&local_60);
    FUN_140208bae(local_f8,local_fc,local_130,L"The URI scheme \'{0}\' is not supported");
    FUN_14023409e(&local_e8,local_f8,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,local_d8);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_e8;
    local_88 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_90,&local_70);
    FUN_14007f2db(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)local_e0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_e0 + 0x10))(local_e0);
        }
      }
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    iVar3 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
      FUN_14001d63e(param_5,iVar3);
    }
    FUN_14023423e((longlong)iVar3 * 0x10 + *param_5,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
  }
  uVar7 = 0;
  if (local_f8[0] != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_f8[0] + 0x10))();
  }
LAB_1498c5621:
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1498c5ad0 FUN_1498c5ad0 body=43 status=ok
// SIG undefined FUN_1498c5ad0(void)

undefined8 FUN_1498c5ad0(undefined8 param_1,int param_2)

{
  FUN_145dc3db8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1498c5b04 FUN_1498c5b04 body=26 status=ok
// SIG undefined FUN_1498c5b04(void)

void FUN_1498c5b04(undefined8 param_1)

{
  FUN_1401c3ca6();
  FUN_1498c5b1e(param_1);
  return;
}



// FUNCTION 1498c5b1e FUN_1498c5b1e body=1034 status=ok
// SIG undefined FUN_1498c5b1e(void)

void FUN_1498c5b1e(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined1 local_f0;
  longlong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  longlong local_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar6 = *(longlong *)(param_1 + 0xa8);
  if (lVar6 == 0) goto LAB_1498c5b57;
  local_c0 = FUN_147814168();
  plVar5 = (longlong *)FUN_14494321d(0x38);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14beee910;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  *(undefined4 *)(plVar5 + 6) = 0xffffffff;
  *(undefined1 *)((longlong)plVar5 + 0x35) = 1;
  if (plVar5 == (longlong *)0x0) {
    local_e0 = param_1 + 0x128;
    *(undefined8 *)(param_1 + 0x128) = 0x10;
    plVar9 = *(longlong **)(param_1 + 0x130);
    if (plVar9 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x130) = 0;
LAB_1498c5c18:
      local_e0 = param_1 + 0x128;
      LOCK();
      plVar3 = plVar9 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      if (plVar5 != (longlong *)0x0) goto LAB_1498c5c93;
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_e0 = param_1 + 0x128;
    *(longlong **)(param_1 + 0x128) = plVar5 + 2;
    plVar9 = *(longlong **)(param_1 + 0x130);
    if (plVar5 == plVar9) {
      LOCK();
      plVar9 = plVar5 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x130) = plVar5;
      if (plVar9 != (longlong *)0x0) goto LAB_1498c5c18;
    }
LAB_1498c5c93:
    LOCK();
    plVar9 = plVar5 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  FUN_14485c47a(*(undefined8 *)(param_1 + 0x128),lVar6);
  *(undefined4 *)(*(longlong *)(param_1 + 0x128) + 8) = *(undefined4 *)(param_1 + 0x110);
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  local_80 = FUN_144a3a302();
  if ((local_80 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_80);
  }
  FUN_1478ba3d6(lVar6,&local_80,&local_78,0);
  if ((longlong)(int)uStack_70 != 0) {
    plVar5 = local_78 + (int)uStack_70;
    local_d8 = (longlong *)(param_1 + 0x118);
    plVar9 = local_78;
    local_d0 = plVar5;
    do {
      plVar3 = (longlong *)*plVar9;
      if (plVar3 != (longlong *)0x0) {
        lVar6 = FUN_144a3a302();
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30)) {
          local_98 = (undefined8 *)0x0;
          uStack_90 = 0;
          (**(code **)(*plVar3 + 0x790))(plVar3,&local_98,0);
          if ((longlong)(int)uStack_90 != 0) {
            local_c8 = local_98 + (int)uStack_90;
            puVar10 = local_98;
            do {
              local_a8 = 0;
              uStack_a0 = 0;
              local_f0 = 1;
              local_f8 = 3;
              (**(code **)(*(longlong *)*puVar10 + 0x310))((longlong *)*puVar10,&local_a8,4,1);
              lVar6 = local_a8;
              lVar8 = (longlong)(int)uStack_a0;
              if (lVar8 != 0) {
                lVar11 = 0;
                do {
                  lVar4 = *(longlong *)(lVar6 + lVar11);
                  if (lVar4 != 0) {
                    lVar7 = FUN_145869788();
                    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                         (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
                      local_b0 = 0;
                      FUN_14485c47a(&local_b0,lVar4);
                      iVar2 = *(int *)(param_1 + 0x120);
                      *(uint *)(param_1 + 0x120) = iVar2 + 1U;
                      if (*(uint *)(param_1 + 0x124) < iVar2 + 1U) {
                        FUN_147818b9c(local_d8,iVar2);
                      }
                      *(undefined8 *)(*local_d8 + (longlong)iVar2 * 8) = local_b0;
                      local_b8 = lVar4;
                      if (DAT_14c950c29 == '\x01') {
                        FUN_14689c22e(lVar4);
                      }
                      FUN_147814264(local_c0,local_e0);
                    }
                  }
                  lVar11 = lVar11 + 8;
                } while (lVar8 * 8 != lVar11);
              }
              if (local_a8 != 0) {
                FUN_1400020a8(local_a8);
              }
              puVar10 = puVar10 + 1;
              plVar5 = local_d0;
            } while (puVar10 != local_c8);
          }
          if (local_98 != (undefined8 *)0x0) {
            FUN_1400020a8(local_98);
          }
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar5);
  }
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8(local_78);
  }
LAB_1498c5b57:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498c5f2a FUN_1498c5f2a body=32 status=ok
// SIG undefined FUN_1498c5f2a(void)

void FUN_1498c5f2a(undefined8 param_1,undefined4 param_2)

{
  FUN_1498c5f4a();
  FUN_1401c3216(param_1,param_2);
  return;
}



// FUNCTION 1498c5f4a FUN_1498c5f4a body=199 status=ok
// SIG undefined FUN_1498c5f4a(void)

void FUN_1498c5f4a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    uVar3 = FUN_147814168();
    iVar1 = *(int *)(param_1 + 0x120);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x118);
      lVar5 = 0;
      do {
        local_48 = *(undefined8 *)(lVar2 + lVar5);
        lVar4 = FUN_14479d2ce(&local_48);
        if (lVar4 != 0) {
          local_50 = lVar4;
          if (DAT_14c950c29 == '\x01') {
            FUN_14689c22e(lVar4);
          }
          FUN_1478143e0(uVar3,param_1 + 0x128,&local_50);
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c6012 FUN_1498c6012 body=45 status=ok
// SIG undefined FUN_1498c6012(void)

longlong FUN_1498c6012(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d5dcc2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498c6040 FUN_1498c6040 body=36 status=ok
// SIG undefined FUN_1498c6040(void)

undefined8 FUN_1498c6040(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1498c6080 FUN_1498c6080 body=93 status=ok
// SIG undefined FUN_1498c6080(void)

void FUN_1498c6080(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14beee860;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498c60de FUN_1498c60de body=123 status=ok
// SIG undefined FUN_1498c60de(void)

void FUN_1498c60de(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beee860;
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



// FUNCTION 1498c615a FUN_1498c615a body=21 status=ok
// SIG undefined FUN_1498c615a(void)

undefined8 FUN_1498c615a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498c6170 FUN_1498c6170 body=1 status=ok
// SIG undefined FUN_1498c6170(void)

void FUN_1498c6170(void)

{
  return;
}



// FUNCTION 1498c6172 FUN_1498c6172 body=34 status=ok
// SIG undefined FUN_1498c6172(void)

undefined8 FUN_1498c6172(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1498c6194 FUN_1498c6194 body=8 status=ok
// SIG undefined FUN_1498c6194(void)

void FUN_1498c6194(undefined2 param_1)

{
  FUN_144b73960(param_1);
  return;
}



// FUNCTION 1498c619c FUN_1498c619c body=76 status=ok
// SIG undefined FUN_1498c619c(void)

void FUN_1498c619c(undefined8 *param_1,longlong param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_144b70e30(*param_1);
  FUN_144b70780(*param_1,param_2 + (longlong)*piVar1 * -8 +
                         (longlong)piVar1[1] * (longlong)*param_3 * -8,1);
  return;
}



// FUNCTION 1498c61e8 FUN_1498c61e8 body=65 status=ok
// SIG undefined FUN_1498c61e8(void)

void FUN_1498c61e8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
  return;
}


