// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1481a8868 FUN_1481a8868 body=93 status=ok
// SIG undefined FUN_1481a8868(void)

void FUN_1481a8868(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde8c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a88c6 FUN_1481a88c6 body=93 status=ok
// SIG undefined FUN_1481a88c6(void)

void FUN_1481a88c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde8c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a8924 FUN_1481a8924 body=126 status=ok
// SIG undefined FUN_1481a8924(void)

void FUN_1481a8924(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adde8c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a8993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a89aa FUN_1481a89aa body=19 status=ok
// SIG undefined FUN_1481a89aa(void)

undefined1 FUN_1481a89aa(undefined8 param_1,undefined8 param_2)

{
  FUN_1481a89be(param_2);
  return 1;
}



// FUNCTION 1481a89be FUN_1481a89be body=551 status=ok
// SIG undefined FUN_1481a89be(void)

void FUN_1481a89be(char *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  float *local_90;
  int local_88;
  float *local_80;
  int local_78;
  float *local_70;
  int local_68;
  float *local_60;
  int local_58;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1481938a0(local_50,param_1);
  FUN_144a76c20(&local_60,param_1);
  FUN_144a76c20(&local_70,param_1);
  FUN_144a76c20(&local_80,param_1);
  FUN_144a76c20(&local_90);
  cVar1 = FUN_144729dda(local_48);
  if (cVar1 == '\0') {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        *local_70 = 0.0;
        *local_80 = 0.0;
        *local_90 = 1.0;
        local_60 = local_60 + local_58;
        local_70 = local_70 + local_68;
        local_80 = local_80 + local_78;
        local_90 = local_90 + local_88;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  else {
    fVar4 = (float)FUN_147a27760(local_48 + 0x200);
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        FUN_1481a86c4(local_48,&local_a8,*local_60 * fVar4);
        *local_70 = (float)local_a8;
        *local_80 = (float)local_a0;
        *local_90 = (float)local_98;
        local_60 = local_60 + local_58;
        local_70 = local_70 + local_68;
        local_80 = local_80 + local_78;
        local_90 = local_90 + local_88;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481a8d7e FUN_1481a8d7e body=29 status=ok
// SIG undefined FUN_1481a8d7e(void)

undefined8 FUN_1481a8d7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481a8db0 FUN_1481a8db0 body=93 status=ok
// SIG undefined FUN_1481a8db0(void)

void FUN_1481a8db0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde930;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a8e0e FUN_1481a8e0e body=93 status=ok
// SIG undefined FUN_1481a8e0e(void)

void FUN_1481a8e0e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde930;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a8e6c FUN_1481a8e6c body=126 status=ok
// SIG undefined FUN_1481a8e6c(void)

void FUN_1481a8e6c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adde930;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a8edb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a8ef2 FUN_1481a8ef2 body=19 status=ok
// SIG undefined FUN_1481a8ef2(void)

undefined1 FUN_1481a8ef2(undefined8 param_1,undefined8 param_2)

{
  FUN_1481a8f06(param_2);
  return 1;
}



// FUNCTION 1481a8f06 FUN_1481a8f06 body=1086 status=ok
// SIG undefined FUN_1481a8f06(void)

void FUN_1481a8f06(char *param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_128 [40];
  double local_100;
  double local_f8;
  double local_f0;
  float *local_e8;
  int local_e0;
  float *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  float local_b4;
  undefined1 local_b0 [8];
  longlong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1481938a0(local_b0,param_1);
  FUN_1481a214e(&local_b4,param_1);
  FUN_144a76c20(&local_c8,param_1);
  FUN_144a76c20(&local_d8,param_1);
  FUN_144a76c20(&local_e8,param_1);
  cVar2 = FUN_144729dda(local_a8);
  if (cVar2 == '\0') {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      iVar4 = 0;
      do {
        dVar6 = *(double *)(local_a8 + 0xd0) * 0.0 +
                *(double *)(local_a8 + 0x90) * 0.0 + *(double *)(local_a8 + 0x70) * 0.0 +
                *(double *)(local_a8 + 0xb0);
        dVar7 = *(double *)(local_a8 + 0xd8) * 0.0 +
                *(double *)(local_a8 + 0x98) * 0.0 + *(double *)(local_a8 + 0x78) * 0.0 +
                *(double *)(local_a8 + 0xb8);
        dVar8 = *(double *)(local_a8 + 0x80) * 0.0 + *(double *)(local_a8 + 0xa0) * 0.0 +
                *(double *)(local_a8 + 0xc0) + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar5 = 1.0 / SQRT(dVar8 * dVar8 + dVar6 * dVar6 + dVar7 * dVar7);
        *local_c8 = (float)(dVar5 * dVar6);
        *local_d8 = (float)(dVar7 * dVar5);
        *local_e8 = (float)(dVar8 * dVar5);
        local_c8 = local_c8 + local_c0;
        local_d8 = local_d8 + local_d0;
        local_e8 = local_e8 + local_e0;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  else {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      fVar1 = *(float *)(local_a8 + 0x298);
      iVar4 = 0;
      do {
        FUN_1481a7c82(local_a8,&local_100,local_b4 * fVar1);
        dVar6 = local_f0 * *(double *)(local_a8 + 0xb0) +
                local_f8 * *(double *)(local_a8 + 0x90) + local_100 * *(double *)(local_a8 + 0x70) +
                *(double *)(local_a8 + 0xd0) * 0.0;
        dVar7 = local_f0 * *(double *)(local_a8 + 0xb8) +
                local_f8 * *(double *)(local_a8 + 0x98) + local_100 * *(double *)(local_a8 + 0x78) +
                *(double *)(local_a8 + 0xd8) * 0.0;
        dVar5 = local_100 * *(double *)(local_a8 + 0x80) + local_f8 * *(double *)(local_a8 + 0xa0) +
                local_f0 * *(double *)(local_a8 + 0xc0) + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar8 = 1.0 / SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7);
        *local_c8 = (float)(dVar8 * dVar6);
        *local_d8 = (float)(dVar7 * dVar8);
        *local_e8 = (float)(dVar5 * dVar8);
        local_c8 = local_c8 + local_c0;
        local_d8 = local_d8 + local_d0;
        local_e8 = local_e8 + local_e0;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481a9346 FUN_1481a9346 body=29 status=ok
// SIG undefined FUN_1481a9346(void)

undefined8 FUN_1481a9346(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481a9378 FUN_1481a9378 body=93 status=ok
// SIG undefined FUN_1481a9378(void)

void FUN_1481a9378(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde9a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a93d6 FUN_1481a93d6 body=93 status=ok
// SIG undefined FUN_1481a93d6(void)

void FUN_1481a93d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde9a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a9434 FUN_1481a9434 body=126 status=ok
// SIG undefined FUN_1481a9434(void)

void FUN_1481a9434(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adde9a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a94a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a94ba FUN_1481a94ba body=19 status=ok
// SIG undefined FUN_1481a94ba(void)

undefined1 FUN_1481a94ba(undefined8 param_1,undefined8 param_2)

{
  FUN_1481a94ce(param_2);
  return 1;
}



// FUNCTION 1481a94ce FUN_1481a94ce body=1121 status=ok
// SIG undefined FUN_1481a94ce(void)

void FUN_1481a94ce(char *param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_128 [32];
  double local_108;
  double local_100;
  double local_f8;
  float *local_f0;
  int local_e8;
  float *local_e0;
  int local_d8;
  float *local_d0;
  int local_c8;
  float *local_c0;
  int local_b8;
  undefined1 local_b0 [8];
  longlong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1481938a0(local_b0,param_1);
  FUN_144a76c20(&local_c0,param_1);
  FUN_144a76c20(&local_d0,param_1);
  FUN_144a76c20(&local_e0,param_1);
  FUN_144a76c20(&local_f0,param_1);
  cVar2 = FUN_144729dda(local_a8);
  if (cVar2 == '\0') {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      iVar4 = 0;
      do {
        dVar7 = *(double *)(local_a8 + 0xd0) * 0.0 +
                *(double *)(local_a8 + 0x90) * 0.0 + *(double *)(local_a8 + 0x70) * 0.0 +
                *(double *)(local_a8 + 0xb0);
        dVar8 = *(double *)(local_a8 + 0xd8) * 0.0 +
                *(double *)(local_a8 + 0x98) * 0.0 + *(double *)(local_a8 + 0x78) * 0.0 +
                *(double *)(local_a8 + 0xb8);
        dVar6 = *(double *)(local_a8 + 0x80) * 0.0 + *(double *)(local_a8 + 0xa0) * 0.0 +
                *(double *)(local_a8 + 0xc0) + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar5 = 1.0 / SQRT(dVar6 * dVar6 + dVar7 * dVar7 + dVar8 * dVar8);
        *local_d0 = (float)(dVar5 * dVar7);
        *local_e0 = (float)(dVar8 * dVar5);
        *local_f0 = (float)(dVar6 * dVar5);
        local_d0 = local_d0 + local_c8;
        local_c0 = local_c0 + local_b8;
        local_e0 = local_e0 + local_d8;
        local_f0 = local_f0 + local_e8;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  else {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      fVar1 = *(float *)(local_a8 + 0x298);
      iVar4 = 0;
      do {
        FUN_1481a7c82(local_a8,&local_108,*local_c0 * fVar1);
        dVar6 = local_f8 * *(double *)(local_a8 + 0xb0) +
                local_100 * *(double *)(local_a8 + 0x90) + local_108 * *(double *)(local_a8 + 0x70)
                + *(double *)(local_a8 + 0xd0) * 0.0;
        dVar7 = local_f8 * *(double *)(local_a8 + 0xb8) +
                local_100 * *(double *)(local_a8 + 0x98) + local_108 * *(double *)(local_a8 + 0x78)
                + *(double *)(local_a8 + 0xd8) * 0.0;
        dVar5 = local_108 * *(double *)(local_a8 + 0x80) + local_100 * *(double *)(local_a8 + 0xa0)
                + local_f8 * *(double *)(local_a8 + 0xc0) + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar8 = 1.0 / SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7);
        *local_d0 = (float)(dVar8 * dVar6);
        *local_e0 = (float)(dVar7 * dVar8);
        *local_f0 = (float)(dVar5 * dVar8);
        local_c0 = local_c0 + local_b8;
        local_d0 = local_d0 + local_c8;
        local_e0 = local_e0 + local_d8;
        local_f0 = local_f0 + local_e8;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481a9ac8 FUN_1481a9ac8 body=29 status=ok
// SIG undefined FUN_1481a9ac8(void)

undefined8 FUN_1481a9ac8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481a9afa FUN_1481a9afa body=93 status=ok
// SIG undefined FUN_1481a9afa(void)

void FUN_1481a9afa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addea10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a9b58 FUN_1481a9b58 body=93 status=ok
// SIG undefined FUN_1481a9b58(void)

void FUN_1481a9b58(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addea10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a9bb6 FUN_1481a9bb6 body=126 status=ok
// SIG undefined FUN_1481a9bb6(void)

void FUN_1481a9bb6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addea10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a9c25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a9c3c FUN_1481a9c3c body=19 status=ok
// SIG undefined FUN_1481a9c3c(void)

undefined1 FUN_1481a9c3c(undefined8 param_1,undefined8 param_2)

{
  FUN_1481a9c50(param_2);
  return 1;
}



// FUNCTION 1481a9c50 FUN_1481a9c50 body=1091 status=ok
// SIG undefined FUN_1481a9c50(void)

void FUN_1481a9c50(char *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_128 [40];
  double local_100;
  double local_f8;
  double local_f0;
  float *local_e8;
  int local_e0;
  float *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  float local_b4;
  undefined1 local_b0 [8];
  longlong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1481938a0(local_b0,param_1);
  FUN_1481a214e(&local_b4,param_1);
  FUN_144a76c20(&local_c8,param_1);
  FUN_144a76c20(&local_d8,param_1);
  FUN_144a76c20(&local_e8,param_1);
  cVar1 = FUN_144729dda(local_a8);
  if (cVar1 == '\0') {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        dVar6 = *(double *)(local_a8 + 0xd0) * 0.0 +
                *(double *)(local_a8 + 0x90) * 0.0 + *(double *)(local_a8 + 0x70) * 0.0 +
                *(double *)(local_a8 + 0xb0);
        dVar7 = *(double *)(local_a8 + 0xd8) * 0.0 +
                *(double *)(local_a8 + 0x98) * 0.0 + *(double *)(local_a8 + 0x78) * 0.0 +
                *(double *)(local_a8 + 0xb8);
        dVar8 = *(double *)(local_a8 + 0x80) * 0.0 + *(double *)(local_a8 + 0xa0) * 0.0 +
                *(double *)(local_a8 + 0xc0) + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar5 = 1.0 / SQRT(dVar8 * dVar8 + dVar6 * dVar6 + dVar7 * dVar7);
        *local_c8 = (float)(dVar5 * dVar6);
        *local_d8 = (float)(dVar7 * dVar5);
        *local_e8 = (float)(dVar8 * dVar5);
        local_c8 = local_c8 + local_c0;
        local_d8 = local_d8 + local_d0;
        local_e8 = local_e8 + local_e0;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  else {
    fVar4 = (float)FUN_147a27760(local_a8 + 0x200);
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        FUN_1481a86c4(local_a8,&local_100,local_b4 * fVar4);
        dVar6 = local_f0 * *(double *)(local_a8 + 0xb0) +
                local_f8 * *(double *)(local_a8 + 0x90) + local_100 * *(double *)(local_a8 + 0x70) +
                *(double *)(local_a8 + 0xd0) * 0.0;
        dVar7 = local_f0 * *(double *)(local_a8 + 0xb8) +
                local_f8 * *(double *)(local_a8 + 0x98) + local_100 * *(double *)(local_a8 + 0x78) +
                *(double *)(local_a8 + 0xd8) * 0.0;
        dVar5 = local_100 * *(double *)(local_a8 + 0x80) + local_f8 * *(double *)(local_a8 + 0xa0) +
                local_f0 * *(double *)(local_a8 + 0xc0) + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar8 = 1.0 / SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7);
        *local_c8 = (float)(dVar8 * dVar6);
        *local_d8 = (float)(dVar7 * dVar8);
        *local_e8 = (float)(dVar5 * dVar8);
        local_c8 = local_c8 + local_c0;
        local_d8 = local_d8 + local_d0;
        local_e8 = local_e8 + local_e0;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481aa094 FUN_1481aa094 body=29 status=ok
// SIG undefined FUN_1481aa094(void)

undefined8 FUN_1481aa094(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481aa0c6 FUN_1481aa0c6 body=93 status=ok
// SIG undefined FUN_1481aa0c6(void)

void FUN_1481aa0c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addea80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481aa124 FUN_1481aa124 body=93 status=ok
// SIG undefined FUN_1481aa124(void)

void FUN_1481aa124(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addea80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481aa182 FUN_1481aa182 body=126 status=ok
// SIG undefined FUN_1481aa182(void)

void FUN_1481aa182(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addea80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481aa1f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481aa208 FUN_1481aa208 body=19 status=ok
// SIG undefined FUN_1481aa208(void)

undefined1 FUN_1481aa208(undefined8 param_1,undefined8 param_2)

{
  FUN_1481aa21c(param_2);
  return 1;
}



// FUNCTION 1481aa21c FUN_1481aa21c body=1126 status=ok
// SIG undefined FUN_1481aa21c(void)

void FUN_1481aa21c(char *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_128 [32];
  double local_108;
  double local_100;
  double local_f8;
  float *local_f0;
  int local_e8;
  float *local_e0;
  int local_d8;
  float *local_d0;
  int local_c8;
  float *local_c0;
  int local_b8;
  undefined1 local_b0 [8];
  longlong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1481938a0(local_b0,param_1);
  FUN_144a76c20(&local_c0,param_1);
  FUN_144a76c20(&local_d0,param_1);
  FUN_144a76c20(&local_e0,param_1);
  FUN_144a76c20(&local_f0,param_1);
  cVar1 = FUN_144729dda(local_a8);
  if (cVar1 == '\0') {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        dVar7 = *(double *)(local_a8 + 0xd0) * 0.0 +
                *(double *)(local_a8 + 0x90) * 0.0 + *(double *)(local_a8 + 0x70) * 0.0 +
                *(double *)(local_a8 + 0xb0);
        dVar8 = *(double *)(local_a8 + 0xd8) * 0.0 +
                *(double *)(local_a8 + 0x98) * 0.0 + *(double *)(local_a8 + 0x78) * 0.0 +
                *(double *)(local_a8 + 0xb8);
        dVar6 = *(double *)(local_a8 + 0x80) * 0.0 + *(double *)(local_a8 + 0xa0) * 0.0 +
                *(double *)(local_a8 + 0xc0) + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar5 = 1.0 / SQRT(dVar6 * dVar6 + dVar7 * dVar7 + dVar8 * dVar8);
        *local_d0 = (float)(dVar5 * dVar7);
        *local_e0 = (float)(dVar8 * dVar5);
        *local_f0 = (float)(dVar6 * dVar5);
        local_d0 = local_d0 + local_c8;
        local_c0 = local_c0 + local_b8;
        local_e0 = local_e0 + local_d8;
        local_f0 = local_f0 + local_e8;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  else {
    fVar4 = (float)FUN_147a27760(local_a8 + 0x200);
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        FUN_1481a86c4(local_a8,&local_108,*local_c0 * fVar4);
        dVar6 = local_f8 * *(double *)(local_a8 + 0xb0) +
                local_100 * *(double *)(local_a8 + 0x90) + local_108 * *(double *)(local_a8 + 0x70)
                + *(double *)(local_a8 + 0xd0) * 0.0;
        dVar7 = local_f8 * *(double *)(local_a8 + 0xb8) +
                local_100 * *(double *)(local_a8 + 0x98) + local_108 * *(double *)(local_a8 + 0x78)
                + *(double *)(local_a8 + 0xd8) * 0.0;
        dVar5 = local_108 * *(double *)(local_a8 + 0x80) + local_100 * *(double *)(local_a8 + 0xa0)
                + local_f8 * *(double *)(local_a8 + 0xc0) + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar8 = 1.0 / SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7);
        *local_d0 = (float)(dVar8 * dVar6);
        *local_e0 = (float)(dVar7 * dVar8);
        *local_f0 = (float)(dVar5 * dVar8);
        local_c0 = local_c0 + local_b8;
        local_d0 = local_d0 + local_c8;
        local_e0 = local_e0 + local_d8;
        local_f0 = local_f0 + local_e8;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481aa81c FUN_1481aa81c body=29 status=ok
// SIG undefined FUN_1481aa81c(void)

undefined8 FUN_1481aa81c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481aa84e FUN_1481aa84e body=93 status=ok
// SIG undefined FUN_1481aa84e(void)

void FUN_1481aa84e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addeaf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481aa8ac FUN_1481aa8ac body=93 status=ok
// SIG undefined FUN_1481aa8ac(void)

void FUN_1481aa8ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addeaf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481aa90a FUN_1481aa90a body=126 status=ok
// SIG undefined FUN_1481aa90a(void)

void FUN_1481aa90a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addeaf0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481aa979. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481aa990 FUN_1481aa990 body=19 status=ok
// SIG undefined FUN_1481aa990(void)

undefined1 FUN_1481aa990(undefined8 param_1,undefined8 param_2)

{
  FUN_1481aa9a4(param_2);
  return 1;
}



// FUNCTION 1481aa9a4 FUN_1481aa9a4 body=510 status=ok
// SIG undefined FUN_1481aa9a4(void)

void FUN_1481aa9a4(char *param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float *local_68;
  int local_60;
  float local_54;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1481938a0(local_50,param_1);
  FUN_1481a214e(&local_54,param_1);
  FUN_144a76c20(&local_68,param_1);
  FUN_144a76c20(&local_78,param_1);
  FUN_144a76c20(&local_88);
  cVar2 = FUN_144729dda(local_48);
  if (cVar2 == '\0') {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      iVar4 = 0;
      do {
        *local_68 = 0.0;
        *local_78 = 1.0;
        *local_88 = 0.0;
        local_68 = local_68 + local_60;
        local_78 = local_78 + local_70;
        local_88 = local_88 + local_80;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  else {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      fVar1 = *(float *)(local_48 + 0x298);
      iVar4 = 0;
      do {
        FUN_1481aaba4(local_48,&local_a0,local_54 * fVar1);
        *local_68 = (float)local_a0;
        *local_78 = (float)local_98;
        *local_88 = (float)local_90;
        local_68 = local_68 + local_60;
        local_78 = local_78 + local_70;
        local_88 = local_88 + local_80;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481aaba4 FUN_1481aaba4 body=243 status=ok
// SIG undefined FUN_1481aaba4(void)

double * FUN_1481aaba4(undefined8 param_1,double *param_2)

{
  double dVar1;
  undefined1 auStack_58 [40];
  double local_30;
  double dStack_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1481933a4(param_1,&local_30);
  dVar1 = local_20 * local_20 + local_30 * local_30 + dStack_28 * dStack_28;
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    if (dVar1 < 9.99999993922529e-09) {
      param_2[2] = DAT_14c8464f0;
      dVar1 = DAT_14c8464e8;
      *param_2 = DAT_14c8464e0;
      param_2[1] = dVar1;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
    dVar1 = 1.0 / SQRT(dVar1);
    *param_2 = local_30 * dVar1;
    param_2[1] = dStack_28 * dVar1;
    param_2[2] = local_20 * dVar1;
  }
  else {
    param_2[2] = local_20;
    *param_2 = local_30;
    param_2[1] = dStack_28;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481aac9a FUN_1481aac9a body=29 status=ok
// SIG undefined FUN_1481aac9a(void)

undefined8 FUN_1481aac9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481aaccc FUN_1481aaccc body=93 status=ok
// SIG undefined FUN_1481aaccc(void)

void FUN_1481aaccc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addeb60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481aad2a FUN_1481aad2a body=93 status=ok
// SIG undefined FUN_1481aad2a(void)

void FUN_1481aad2a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addeb60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481aad88 FUN_1481aad88 body=126 status=ok
// SIG undefined FUN_1481aad88(void)

void FUN_1481aad88(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addeb60;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481aadf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481aae0e FUN_1481aae0e body=19 status=ok
// SIG undefined FUN_1481aae0e(void)

undefined1 FUN_1481aae0e(undefined8 param_1,undefined8 param_2)

{
  FUN_1481aae22(param_2);
  return 1;
}



// FUNCTION 1481aae22 FUN_1481aae22 body=546 status=ok
// SIG undefined FUN_1481aae22(void)

void FUN_1481aae22(char *param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  float *local_90;
  int local_88;
  float *local_80;
  int local_78;
  float *local_70;
  int local_68;
  float *local_60;
  int local_58;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1481938a0(local_50,param_1);
  FUN_144a76c20(&local_60,param_1);
  FUN_144a76c20(&local_70,param_1);
  FUN_144a76c20(&local_80,param_1);
  FUN_144a76c20(&local_90);
  cVar2 = FUN_144729dda(local_48);
  if (cVar2 == '\0') {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      iVar4 = 0;
      do {
        *local_70 = 0.0;
        *local_80 = 1.0;
        *local_90 = 0.0;
        local_60 = local_60 + local_58;
        local_70 = local_70 + local_68;
        local_80 = local_80 + local_78;
        local_90 = local_90 + local_88;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  else {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      fVar1 = *(float *)(local_48 + 0x298);
      iVar4 = 0;
      do {
        FUN_1481aaba4(local_48,&local_a8,*local_60 * fVar1);
        *local_70 = (float)local_a8;
        *local_80 = (float)local_a0;
        *local_90 = (float)local_98;
        local_60 = local_60 + local_58;
        local_70 = local_70 + local_68;
        local_80 = local_80 + local_78;
        local_90 = local_90 + local_88;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481ab1de FUN_1481ab1de body=29 status=ok
// SIG undefined FUN_1481ab1de(void)

undefined8 FUN_1481ab1de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481ab210 FUN_1481ab210 body=93 status=ok
// SIG undefined FUN_1481ab210(void)

void FUN_1481ab210(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addebd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481ab26e FUN_1481ab26e body=93 status=ok
// SIG undefined FUN_1481ab26e(void)

void FUN_1481ab26e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addebd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481ab2cc FUN_1481ab2cc body=126 status=ok
// SIG undefined FUN_1481ab2cc(void)

void FUN_1481ab2cc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addebd0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481ab33b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481ab352 FUN_1481ab352 body=19 status=ok
// SIG undefined FUN_1481ab352(void)

undefined1 FUN_1481ab352(undefined8 param_1,undefined8 param_2)

{
  FUN_1481ab366(param_2);
  return 1;
}



// FUNCTION 1481ab366 FUN_1481ab366 body=515 status=ok
// SIG undefined FUN_1481ab366(void)

void FUN_1481ab366(char *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float *local_68;
  int local_60;
  float local_54;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1481938a0(local_50,param_1);
  FUN_1481a214e(&local_54,param_1);
  FUN_144a76c20(&local_68,param_1);
  FUN_144a76c20(&local_78,param_1);
  FUN_144a76c20(&local_88);
  cVar1 = FUN_144729dda(local_48);
  if (cVar1 == '\0') {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        *local_68 = 0.0;
        *local_78 = 1.0;
        *local_88 = 0.0;
        local_68 = local_68 + local_60;
        local_78 = local_78 + local_70;
        local_88 = local_88 + local_80;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  else {
    fVar4 = (float)FUN_147a27760(local_48 + 0x200);
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        FUN_1481ab56a(local_48,&local_a0,local_54 * fVar4);
        *local_68 = (float)local_a0;
        *local_78 = (float)local_98;
        *local_88 = (float)local_90;
        local_68 = local_68 + local_60;
        local_78 = local_78 + local_70;
        local_88 = local_88 + local_80;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481ab56a FUN_1481ab56a body=277 status=ok
// SIG undefined FUN_1481ab56a(void)

double * FUN_1481ab56a(longlong param_1,double *param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uVar4 = FUN_140753fde(param_1 + 0x248,param_3);
  FUN_140754464(param_1 + 0x200,&local_38,uVar4,&DAT_14c8464e0);
  dVar1 = (double)CONCAT44(uStack_34,local_38);
  dVar2 = (double)CONCAT44(uStack_2c,uStack_30);
  dVar5 = local_28 * local_28 + dVar1 * dVar1 + dVar2 * dVar2;
  if ((dVar5 != 1.0) || (NAN(dVar5))) {
    if (9.99999993922529e-09 <= dVar5) {
      dVar5 = 1.0 / SQRT(dVar5);
      *param_2 = dVar1 * dVar5;
      param_2[1] = dVar2 * dVar5;
      param_2[2] = local_28 * dVar5;
      goto LAB_1481ab60f;
    }
    param_2[2] = DAT_14c8464f0;
    uVar3 = (undefined4)DAT_14c8464e0;
    uStack_34 = DAT_14c8464e0._4_4_;
    uStack_30 = (undefined4)DAT_14c8464e8;
    uStack_2c = DAT_14c8464e8._4_4_;
  }
  else {
    param_2[2] = local_28;
    uVar3 = local_38;
  }
  *(undefined4 *)param_2 = uVar3;
  *(undefined4 *)((longlong)param_2 + 4) = uStack_34;
  *(undefined4 *)(param_2 + 1) = uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_2c;
LAB_1481ab60f:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ab680 FUN_1481ab680 body=29 status=ok
// SIG undefined FUN_1481ab680(void)

undefined8 FUN_1481ab680(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481ab6b2 FUN_1481ab6b2 body=93 status=ok
// SIG undefined FUN_1481ab6b2(void)

void FUN_1481ab6b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addec40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481ab710 FUN_1481ab710 body=93 status=ok
// SIG undefined FUN_1481ab710(void)

void FUN_1481ab710(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addec40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481ab76e FUN_1481ab76e body=126 status=ok
// SIG undefined FUN_1481ab76e(void)

void FUN_1481ab76e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addec40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481ab7dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481ab7f4 FUN_1481ab7f4 body=19 status=ok
// SIG undefined FUN_1481ab7f4(void)

undefined1 FUN_1481ab7f4(undefined8 param_1,undefined8 param_2)

{
  FUN_1481ab808(param_2);
  return 1;
}



// FUNCTION 1481ab808 FUN_1481ab808 body=551 status=ok
// SIG undefined FUN_1481ab808(void)

void FUN_1481ab808(char *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  float *local_90;
  int local_88;
  float *local_80;
  int local_78;
  float *local_70;
  int local_68;
  float *local_60;
  int local_58;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1481938a0(local_50,param_1);
  FUN_144a76c20(&local_60,param_1);
  FUN_144a76c20(&local_70,param_1);
  FUN_144a76c20(&local_80,param_1);
  FUN_144a76c20(&local_90);
  cVar1 = FUN_144729dda(local_48);
  if (cVar1 == '\0') {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        *local_70 = 0.0;
        *local_80 = 1.0;
        *local_90 = 0.0;
        local_60 = local_60 + local_58;
        local_70 = local_70 + local_68;
        local_80 = local_80 + local_78;
        local_90 = local_90 + local_88;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  else {
    fVar4 = (float)FUN_147a27760(local_48 + 0x200);
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        FUN_1481ab56a(local_48,&local_a8,*local_60 * fVar4);
        *local_70 = (float)local_a8;
        *local_80 = (float)local_a0;
        *local_90 = (float)local_98;
        local_60 = local_60 + local_58;
        local_70 = local_70 + local_68;
        local_80 = local_80 + local_78;
        local_90 = local_90 + local_88;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481abbc8 FUN_1481abbc8 body=29 status=ok
// SIG undefined FUN_1481abbc8(void)

undefined8 FUN_1481abbc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481abbfa FUN_1481abbfa body=93 status=ok
// SIG undefined FUN_1481abbfa(void)

void FUN_1481abbfa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addecb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481abc58 FUN_1481abc58 body=93 status=ok
// SIG undefined FUN_1481abc58(void)

void FUN_1481abc58(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addecb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481abcb6 FUN_1481abcb6 body=126 status=ok
// SIG undefined FUN_1481abcb6(void)

void FUN_1481abcb6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addecb0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481abd25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481abd3c FUN_1481abd3c body=19 status=ok
// SIG undefined FUN_1481abd3c(void)

undefined1 FUN_1481abd3c(undefined8 param_1,undefined8 param_2)

{
  FUN_1481abd50(param_2);
  return 1;
}



// FUNCTION 1481abd50 FUN_1481abd50 body=1083 status=ok
// SIG undefined FUN_1481abd50(void)

void FUN_1481abd50(char *param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_128 [40];
  double local_100;
  double local_f8;
  double local_f0;
  float *local_e8;
  int local_e0;
  float *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  float local_b4;
  undefined1 local_b0 [8];
  longlong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1481938a0(local_b0,param_1);
  FUN_1481a214e(&local_b4,param_1);
  FUN_144a76c20(&local_c8,param_1);
  FUN_144a76c20(&local_d8,param_1);
  FUN_144a76c20(&local_e8,param_1);
  cVar2 = FUN_144729dda(local_a8);
  if (cVar2 == '\0') {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      iVar4 = 0;
      do {
        dVar6 = *(double *)(local_a8 + 0xd0) * 0.0 +
                *(double *)(local_a8 + 0xb0) * 0.0 +
                *(double *)(local_a8 + 0x70) * 0.0 + *(double *)(local_a8 + 0x90);
        dVar7 = *(double *)(local_a8 + 0xd8) * 0.0 +
                *(double *)(local_a8 + 0xb8) * 0.0 +
                *(double *)(local_a8 + 0x78) * 0.0 + *(double *)(local_a8 + 0x98);
        dVar8 = *(double *)(local_a8 + 0x80) * 0.0 + *(double *)(local_a8 + 0xa0) +
                *(double *)(local_a8 + 0xc0) * 0.0 + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar5 = 1.0 / SQRT(dVar8 * dVar8 + dVar6 * dVar6 + dVar7 * dVar7);
        *local_c8 = (float)(dVar5 * dVar6);
        *local_d8 = (float)(dVar7 * dVar5);
        *local_e8 = (float)(dVar8 * dVar5);
        local_c8 = local_c8 + local_c0;
        local_d8 = local_d8 + local_d0;
        local_e8 = local_e8 + local_e0;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  else {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      fVar1 = *(float *)(local_a8 + 0x298);
      iVar4 = 0;
      do {
        FUN_1481aaba4(local_a8,&local_100,local_b4 * fVar1);
        dVar6 = local_f0 * *(double *)(local_a8 + 0xb0) +
                local_f8 * *(double *)(local_a8 + 0x90) + local_100 * *(double *)(local_a8 + 0x70) +
                *(double *)(local_a8 + 0xd0) * 0.0;
        dVar7 = local_f0 * *(double *)(local_a8 + 0xb8) +
                local_f8 * *(double *)(local_a8 + 0x98) + local_100 * *(double *)(local_a8 + 0x78) +
                *(double *)(local_a8 + 0xd8) * 0.0;
        dVar5 = local_100 * *(double *)(local_a8 + 0x80) + local_f8 * *(double *)(local_a8 + 0xa0) +
                local_f0 * *(double *)(local_a8 + 0xc0) + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar8 = 1.0 / SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7);
        *local_c8 = (float)(dVar8 * dVar6);
        *local_d8 = (float)(dVar7 * dVar8);
        *local_e8 = (float)(dVar5 * dVar8);
        local_c8 = local_c8 + local_c0;
        local_d8 = local_d8 + local_d0;
        local_e8 = local_e8 + local_e0;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481ac18c FUN_1481ac18c body=29 status=ok
// SIG undefined FUN_1481ac18c(void)

undefined8 FUN_1481ac18c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481ac1be FUN_1481ac1be body=93 status=ok
// SIG undefined FUN_1481ac1be(void)

void FUN_1481ac1be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14added20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481ac21c FUN_1481ac21c body=93 status=ok
// SIG undefined FUN_1481ac21c(void)

void FUN_1481ac21c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14added20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481ac27a FUN_1481ac27a body=126 status=ok
// SIG undefined FUN_1481ac27a(void)

void FUN_1481ac27a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14added20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481ac2e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481ac300 FUN_1481ac300 body=19 status=ok
// SIG undefined FUN_1481ac300(void)

undefined1 FUN_1481ac300(undefined8 param_1,undefined8 param_2)

{
  FUN_1481ac314(param_2);
  return 1;
}



// FUNCTION 1481ac314 FUN_1481ac314 body=1121 status=ok
// SIG undefined FUN_1481ac314(void)

void FUN_1481ac314(char *param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_128 [32];
  double local_108;
  double local_100;
  double local_f8;
  float *local_f0;
  int local_e8;
  float *local_e0;
  int local_d8;
  float *local_d0;
  int local_c8;
  float *local_c0;
  int local_b8;
  undefined1 local_b0 [8];
  longlong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1481938a0(local_b0,param_1);
  FUN_144a76c20(&local_c0,param_1);
  FUN_144a76c20(&local_d0,param_1);
  FUN_144a76c20(&local_e0,param_1);
  FUN_144a76c20(&local_f0,param_1);
  cVar2 = FUN_144729dda(local_a8);
  if (cVar2 == '\0') {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      iVar4 = 0;
      do {
        dVar7 = *(double *)(local_a8 + 0xd0) * 0.0 +
                *(double *)(local_a8 + 0xb0) * 0.0 +
                *(double *)(local_a8 + 0x70) * 0.0 + *(double *)(local_a8 + 0x90);
        dVar8 = *(double *)(local_a8 + 0xd8) * 0.0 +
                *(double *)(local_a8 + 0xb8) * 0.0 +
                *(double *)(local_a8 + 0x78) * 0.0 + *(double *)(local_a8 + 0x98);
        dVar6 = *(double *)(local_a8 + 0x80) * 0.0 + *(double *)(local_a8 + 0xa0) +
                *(double *)(local_a8 + 0xc0) * 0.0 + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar5 = 1.0 / SQRT(dVar6 * dVar6 + dVar7 * dVar7 + dVar8 * dVar8);
        *local_d0 = (float)(dVar5 * dVar7);
        *local_e0 = (float)(dVar8 * dVar5);
        *local_f0 = (float)(dVar6 * dVar5);
        local_d0 = local_d0 + local_c8;
        local_c0 = local_c0 + local_b8;
        local_e0 = local_e0 + local_d8;
        local_f0 = local_f0 + local_e8;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  else {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      fVar1 = *(float *)(local_a8 + 0x298);
      iVar4 = 0;
      do {
        FUN_1481aaba4(local_a8,&local_108,*local_c0 * fVar1);
        dVar6 = local_f8 * *(double *)(local_a8 + 0xb0) +
                local_100 * *(double *)(local_a8 + 0x90) + local_108 * *(double *)(local_a8 + 0x70)
                + *(double *)(local_a8 + 0xd0) * 0.0;
        dVar7 = local_f8 * *(double *)(local_a8 + 0xb8) +
                local_100 * *(double *)(local_a8 + 0x98) + local_108 * *(double *)(local_a8 + 0x78)
                + *(double *)(local_a8 + 0xd8) * 0.0;
        dVar5 = local_108 * *(double *)(local_a8 + 0x80) + local_100 * *(double *)(local_a8 + 0xa0)
                + local_f8 * *(double *)(local_a8 + 0xc0) + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar8 = 1.0 / SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7);
        *local_d0 = (float)(dVar8 * dVar6);
        *local_e0 = (float)(dVar7 * dVar8);
        *local_f0 = (float)(dVar5 * dVar8);
        local_c0 = local_c0 + local_b8;
        local_d0 = local_d0 + local_c8;
        local_e0 = local_e0 + local_d8;
        local_f0 = local_f0 + local_e8;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481ac90e FUN_1481ac90e body=29 status=ok
// SIG undefined FUN_1481ac90e(void)

undefined8 FUN_1481ac90e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481ac940 FUN_1481ac940 body=93 status=ok
// SIG undefined FUN_1481ac940(void)

void FUN_1481ac940(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14added90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481ac99e FUN_1481ac99e body=93 status=ok
// SIG undefined FUN_1481ac99e(void)

void FUN_1481ac99e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14added90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481ac9fc FUN_1481ac9fc body=126 status=ok
// SIG undefined FUN_1481ac9fc(void)

void FUN_1481ac9fc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14added90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481aca6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481aca82 FUN_1481aca82 body=19 status=ok
// SIG undefined FUN_1481aca82(void)

undefined1 FUN_1481aca82(undefined8 param_1,undefined8 param_2)

{
  FUN_1481aca96(param_2);
  return 1;
}



// FUNCTION 1481aca96 FUN_1481aca96 body=1088 status=ok
// SIG undefined FUN_1481aca96(void)

void FUN_1481aca96(char *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_128 [40];
  double local_100;
  double local_f8;
  double local_f0;
  float *local_e8;
  int local_e0;
  float *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  float local_b4;
  undefined1 local_b0 [8];
  longlong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1481938a0(local_b0,param_1);
  FUN_1481a214e(&local_b4,param_1);
  FUN_144a76c20(&local_c8,param_1);
  FUN_144a76c20(&local_d8,param_1);
  FUN_144a76c20(&local_e8,param_1);
  cVar1 = FUN_144729dda(local_a8);
  if (cVar1 == '\0') {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        dVar6 = *(double *)(local_a8 + 0xd0) * 0.0 +
                *(double *)(local_a8 + 0xb0) * 0.0 +
                *(double *)(local_a8 + 0x70) * 0.0 + *(double *)(local_a8 + 0x90);
        dVar7 = *(double *)(local_a8 + 0xd8) * 0.0 +
                *(double *)(local_a8 + 0xb8) * 0.0 +
                *(double *)(local_a8 + 0x78) * 0.0 + *(double *)(local_a8 + 0x98);
        dVar8 = *(double *)(local_a8 + 0x80) * 0.0 + *(double *)(local_a8 + 0xa0) +
                *(double *)(local_a8 + 0xc0) * 0.0 + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar5 = 1.0 / SQRT(dVar8 * dVar8 + dVar6 * dVar6 + dVar7 * dVar7);
        *local_c8 = (float)(dVar5 * dVar6);
        *local_d8 = (float)(dVar7 * dVar5);
        *local_e8 = (float)(dVar8 * dVar5);
        local_c8 = local_c8 + local_c0;
        local_d8 = local_d8 + local_d0;
        local_e8 = local_e8 + local_e0;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  else {
    fVar4 = (float)FUN_147a27760(local_a8 + 0x200);
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        FUN_1481ab56a(local_a8,&local_100,local_b4 * fVar4);
        dVar6 = local_f0 * *(double *)(local_a8 + 0xb0) +
                local_f8 * *(double *)(local_a8 + 0x90) + local_100 * *(double *)(local_a8 + 0x70) +
                *(double *)(local_a8 + 0xd0) * 0.0;
        dVar7 = local_f0 * *(double *)(local_a8 + 0xb8) +
                local_f8 * *(double *)(local_a8 + 0x98) + local_100 * *(double *)(local_a8 + 0x78) +
                *(double *)(local_a8 + 0xd8) * 0.0;
        dVar5 = local_100 * *(double *)(local_a8 + 0x80) + local_f8 * *(double *)(local_a8 + 0xa0) +
                local_f0 * *(double *)(local_a8 + 0xc0) + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar8 = 1.0 / SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7);
        *local_c8 = (float)(dVar8 * dVar6);
        *local_d8 = (float)(dVar7 * dVar8);
        *local_e8 = (float)(dVar5 * dVar8);
        local_c8 = local_c8 + local_c0;
        local_d8 = local_d8 + local_d0;
        local_e8 = local_e8 + local_e0;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481aced8 FUN_1481aced8 body=29 status=ok
// SIG undefined FUN_1481aced8(void)

undefined8 FUN_1481aced8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481acf0a FUN_1481acf0a body=93 status=ok
// SIG undefined FUN_1481acf0a(void)

void FUN_1481acf0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addee00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481acf68 FUN_1481acf68 body=93 status=ok
// SIG undefined FUN_1481acf68(void)

void FUN_1481acf68(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addee00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481acfc6 FUN_1481acfc6 body=126 status=ok
// SIG undefined FUN_1481acfc6(void)

void FUN_1481acfc6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addee00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481ad035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481ad04c FUN_1481ad04c body=19 status=ok
// SIG undefined FUN_1481ad04c(void)

undefined1 FUN_1481ad04c(undefined8 param_1,undefined8 param_2)

{
  FUN_1481ad060(param_2);
  return 1;
}



// FUNCTION 1481ad060 FUN_1481ad060 body=1126 status=ok
// SIG undefined FUN_1481ad060(void)

void FUN_1481ad060(char *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_128 [32];
  double local_108;
  double local_100;
  double local_f8;
  float *local_f0;
  int local_e8;
  float *local_e0;
  int local_d8;
  float *local_d0;
  int local_c8;
  float *local_c0;
  int local_b8;
  undefined1 local_b0 [8];
  longlong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1481938a0(local_b0,param_1);
  FUN_144a76c20(&local_c0,param_1);
  FUN_144a76c20(&local_d0,param_1);
  FUN_144a76c20(&local_e0,param_1);
  FUN_144a76c20(&local_f0,param_1);
  cVar1 = FUN_144729dda(local_a8);
  if (cVar1 == '\0') {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        dVar7 = *(double *)(local_a8 + 0xd0) * 0.0 +
                *(double *)(local_a8 + 0xb0) * 0.0 +
                *(double *)(local_a8 + 0x70) * 0.0 + *(double *)(local_a8 + 0x90);
        dVar8 = *(double *)(local_a8 + 0xd8) * 0.0 +
                *(double *)(local_a8 + 0xb8) * 0.0 +
                *(double *)(local_a8 + 0x78) * 0.0 + *(double *)(local_a8 + 0x98);
        dVar6 = *(double *)(local_a8 + 0x80) * 0.0 + *(double *)(local_a8 + 0xa0) +
                *(double *)(local_a8 + 0xc0) * 0.0 + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar5 = 1.0 / SQRT(dVar6 * dVar6 + dVar7 * dVar7 + dVar8 * dVar8);
        *local_d0 = (float)(dVar5 * dVar7);
        *local_e0 = (float)(dVar8 * dVar5);
        *local_f0 = (float)(dVar6 * dVar5);
        local_d0 = local_d0 + local_c8;
        local_c0 = local_c0 + local_b8;
        local_e0 = local_e0 + local_d8;
        local_f0 = local_f0 + local_e8;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  else {
    fVar4 = (float)FUN_147a27760(local_a8 + 0x200);
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        FUN_1481ab56a(local_a8,&local_108,*local_c0 * fVar4);
        dVar6 = local_f8 * *(double *)(local_a8 + 0xb0) +
                local_100 * *(double *)(local_a8 + 0x90) + local_108 * *(double *)(local_a8 + 0x70)
                + *(double *)(local_a8 + 0xd0) * 0.0;
        dVar7 = local_f8 * *(double *)(local_a8 + 0xb8) +
                local_100 * *(double *)(local_a8 + 0x98) + local_108 * *(double *)(local_a8 + 0x78)
                + *(double *)(local_a8 + 0xd8) * 0.0;
        dVar5 = local_108 * *(double *)(local_a8 + 0x80) + local_100 * *(double *)(local_a8 + 0xa0)
                + local_f8 * *(double *)(local_a8 + 0xc0) + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar8 = 1.0 / SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7);
        *local_d0 = (float)(dVar8 * dVar6);
        *local_e0 = (float)(dVar7 * dVar8);
        *local_f0 = (float)(dVar5 * dVar8);
        local_c0 = local_c0 + local_b8;
        local_d0 = local_d0 + local_c8;
        local_e0 = local_e0 + local_d8;
        local_f0 = local_f0 + local_e8;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481ad660 FUN_1481ad660 body=29 status=ok
// SIG undefined FUN_1481ad660(void)

undefined8 FUN_1481ad660(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481ad692 FUN_1481ad692 body=93 status=ok
// SIG undefined FUN_1481ad692(void)

void FUN_1481ad692(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addee70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481ad6f0 FUN_1481ad6f0 body=93 status=ok
// SIG undefined FUN_1481ad6f0(void)

void FUN_1481ad6f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addee70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481ad74e FUN_1481ad74e body=126 status=ok
// SIG undefined FUN_1481ad74e(void)

void FUN_1481ad74e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addee70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481ad7bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481ad7d4 FUN_1481ad7d4 body=19 status=ok
// SIG undefined FUN_1481ad7d4(void)

undefined1 FUN_1481ad7d4(undefined8 param_1,undefined8 param_2)

{
  FUN_1481ad7e8(param_2);
  return 1;
}



// FUNCTION 1481ad7e8 FUN_1481ad7e8 body=510 status=ok
// SIG undefined FUN_1481ad7e8(void)

void FUN_1481ad7e8(char *param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float *local_68;
  int local_60;
  float local_54;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1481938a0(local_50,param_1);
  FUN_1481a214e(&local_54,param_1);
  FUN_144a76c20(&local_68,param_1);
  FUN_144a76c20(&local_78,param_1);
  FUN_144a76c20(&local_88);
  cVar2 = FUN_144729dda(local_48);
  if (cVar2 == '\0') {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      iVar4 = 0;
      do {
        *local_68 = -1.0;
        *local_78 = 0.0;
        *local_88 = 0.0;
        local_68 = local_68 + local_60;
        local_78 = local_78 + local_70;
        local_88 = local_88 + local_80;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  else {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      fVar1 = *(float *)(local_48 + 0x298);
      iVar4 = 0;
      do {
        FUN_1481ad9e8(local_48,&local_a0,local_54 * fVar1);
        *local_68 = (float)local_a0;
        *local_78 = (float)local_98;
        *local_88 = (float)local_90;
        local_68 = local_68 + local_60;
        local_78 = local_78 + local_70;
        local_88 = local_88 + local_80;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481ad9e8 FUN_1481ad9e8 body=368 status=ok
// SIG undefined FUN_1481ad9e8(void)

double * FUN_1481ad9e8(undefined8 param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1481a4b78(param_1,&local_98);
  dVar1 = local_90 * DAT_14c8462a0 - DAT_14c846298 * local_88;
  dVar1 = dVar1 + dVar1;
  dVar4 = local_98 * DAT_14c846298 - DAT_14c846290 * local_90;
  dVar4 = dVar4 + dVar4;
  dVar3 = local_80 * dVar4 + DAT_14c8462a0;
  dVar5 = local_88 * DAT_14c846290 - DAT_14c8462a0 * local_98;
  dVar5 = dVar5 + dVar5;
  dVar2 = local_80 * dVar5 + DAT_14c846298;
  *param_2 = (local_90 * dVar4 - dVar5 * local_88) + dVar1 * local_80 + DAT_14c846290;
  param_2[1] = (local_88 * dVar1 - dVar4 * local_98) + dVar2;
  param_2[2] = (local_98 * dVar5 - dVar1 * local_90) + dVar3;
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481adb5a FUN_1481adb5a body=29 status=ok
// SIG undefined FUN_1481adb5a(void)

undefined8 FUN_1481adb5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481adb8c FUN_1481adb8c body=93 status=ok
// SIG undefined FUN_1481adb8c(void)

void FUN_1481adb8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addeee0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481adbea FUN_1481adbea body=93 status=ok
// SIG undefined FUN_1481adbea(void)

void FUN_1481adbea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addeee0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481adc48 FUN_1481adc48 body=126 status=ok
// SIG undefined FUN_1481adc48(void)

void FUN_1481adc48(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addeee0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481adcb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481adcce FUN_1481adcce body=19 status=ok
// SIG undefined FUN_1481adcce(void)

undefined1 FUN_1481adcce(undefined8 param_1,undefined8 param_2)

{
  FUN_1481adce2(param_2);
  return 1;
}



// FUNCTION 1481adce2 FUN_1481adce2 body=546 status=ok
// SIG undefined FUN_1481adce2(void)

void FUN_1481adce2(char *param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  float *local_90;
  int local_88;
  float *local_80;
  int local_78;
  float *local_70;
  int local_68;
  float *local_60;
  int local_58;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1481938a0(local_50,param_1);
  FUN_144a76c20(&local_60,param_1);
  FUN_144a76c20(&local_70,param_1);
  FUN_144a76c20(&local_80,param_1);
  FUN_144a76c20(&local_90);
  cVar2 = FUN_144729dda(local_48);
  if (cVar2 == '\0') {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      iVar4 = 0;
      do {
        *local_70 = -1.0;
        *local_80 = 0.0;
        *local_90 = 0.0;
        local_60 = local_60 + local_58;
        local_70 = local_70 + local_68;
        local_80 = local_80 + local_78;
        local_90 = local_90 + local_88;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  else {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      fVar1 = *(float *)(local_48 + 0x298);
      iVar4 = 0;
      do {
        FUN_1481ad9e8(local_48,&local_a8,*local_60 * fVar1);
        *local_70 = (float)local_a8;
        *local_80 = (float)local_a0;
        *local_90 = (float)local_98;
        local_60 = local_60 + local_58;
        local_70 = local_70 + local_68;
        local_80 = local_80 + local_78;
        local_90 = local_90 + local_88;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481ae09e FUN_1481ae09e body=29 status=ok
// SIG undefined FUN_1481ae09e(void)

undefined8 FUN_1481ae09e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481ae0d0 FUN_1481ae0d0 body=93 status=ok
// SIG undefined FUN_1481ae0d0(void)

void FUN_1481ae0d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addef50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481ae12e FUN_1481ae12e body=93 status=ok
// SIG undefined FUN_1481ae12e(void)

void FUN_1481ae12e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addef50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481ae18c FUN_1481ae18c body=126 status=ok
// SIG undefined FUN_1481ae18c(void)

void FUN_1481ae18c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addef50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481ae1fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481ae212 FUN_1481ae212 body=19 status=ok
// SIG undefined FUN_1481ae212(void)

undefined1 FUN_1481ae212(undefined8 param_1,undefined8 param_2)

{
  FUN_1481ae226(param_2);
  return 1;
}



// FUNCTION 1481ae226 FUN_1481ae226 body=515 status=ok
// SIG undefined FUN_1481ae226(void)

void FUN_1481ae226(char *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float *local_68;
  int local_60;
  float local_54;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1481938a0(local_50,param_1);
  FUN_1481a214e(&local_54,param_1);
  FUN_144a76c20(&local_68,param_1);
  FUN_144a76c20(&local_78,param_1);
  FUN_144a76c20(&local_88);
  cVar1 = FUN_144729dda(local_48);
  if (cVar1 == '\0') {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        *local_68 = -1.0;
        *local_78 = 0.0;
        *local_88 = 0.0;
        local_68 = local_68 + local_60;
        local_78 = local_78 + local_70;
        local_88 = local_88 + local_80;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  else {
    fVar4 = (float)FUN_147a27760(local_48 + 0x200);
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        FUN_1481ae42a(local_48,&local_a0,local_54 * fVar4);
        *local_68 = (float)local_a0;
        *local_78 = (float)local_98;
        *local_88 = (float)local_90;
        local_68 = local_68 + local_60;
        local_78 = local_78 + local_70;
        local_88 = local_88 + local_80;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481ae42a FUN_1481ae42a body=368 status=ok
// SIG undefined FUN_1481ae42a(void)

double * FUN_1481ae42a(undefined8 param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1481a57a2(param_1,&local_98);
  dVar1 = local_90 * DAT_14c8462a0 - DAT_14c846298 * local_88;
  dVar1 = dVar1 + dVar1;
  dVar4 = local_98 * DAT_14c846298 - DAT_14c846290 * local_90;
  dVar4 = dVar4 + dVar4;
  dVar3 = local_80 * dVar4 + DAT_14c8462a0;
  dVar5 = local_88 * DAT_14c846290 - DAT_14c8462a0 * local_98;
  dVar5 = dVar5 + dVar5;
  dVar2 = local_80 * dVar5 + DAT_14c846298;
  *param_2 = (local_90 * dVar4 - dVar5 * local_88) + dVar1 * local_80 + DAT_14c846290;
  param_2[1] = (local_88 * dVar1 - dVar4 * local_98) + dVar2;
  param_2[2] = (local_98 * dVar5 - dVar1 * local_90) + dVar3;
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ae59c FUN_1481ae59c body=29 status=ok
// SIG undefined FUN_1481ae59c(void)

undefined8 FUN_1481ae59c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481ae5ce FUN_1481ae5ce body=93 status=ok
// SIG undefined FUN_1481ae5ce(void)

void FUN_1481ae5ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addefc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481ae62c FUN_1481ae62c body=93 status=ok
// SIG undefined FUN_1481ae62c(void)

void FUN_1481ae62c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addefc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481ae68a FUN_1481ae68a body=126 status=ok
// SIG undefined FUN_1481ae68a(void)

void FUN_1481ae68a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addefc0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481ae6f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481ae710 FUN_1481ae710 body=19 status=ok
// SIG undefined FUN_1481ae710(void)

undefined1 FUN_1481ae710(undefined8 param_1,undefined8 param_2)

{
  FUN_1481ae724(param_2);
  return 1;
}



// FUNCTION 1481ae724 FUN_1481ae724 body=551 status=ok
// SIG undefined FUN_1481ae724(void)

void FUN_1481ae724(char *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  float *local_90;
  int local_88;
  float *local_80;
  int local_78;
  float *local_70;
  int local_68;
  float *local_60;
  int local_58;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1481938a0(local_50,param_1);
  FUN_144a76c20(&local_60,param_1);
  FUN_144a76c20(&local_70,param_1);
  FUN_144a76c20(&local_80,param_1);
  FUN_144a76c20(&local_90);
  cVar1 = FUN_144729dda(local_48);
  if (cVar1 == '\0') {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        *local_70 = -1.0;
        *local_80 = 0.0;
        *local_90 = 0.0;
        local_60 = local_60 + local_58;
        local_70 = local_70 + local_68;
        local_80 = local_80 + local_78;
        local_90 = local_90 + local_88;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  else {
    fVar4 = (float)FUN_147a27760(local_48 + 0x200);
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        FUN_1481ae42a(local_48,&local_a8,*local_60 * fVar4);
        *local_70 = (float)local_a8;
        *local_80 = (float)local_a0;
        *local_90 = (float)local_98;
        local_60 = local_60 + local_58;
        local_70 = local_70 + local_68;
        local_80 = local_80 + local_78;
        local_90 = local_90 + local_88;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481aeae4 FUN_1481aeae4 body=29 status=ok
// SIG undefined FUN_1481aeae4(void)

undefined8 FUN_1481aeae4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481aeb16 FUN_1481aeb16 body=93 status=ok
// SIG undefined FUN_1481aeb16(void)

void FUN_1481aeb16(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf030;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481aeb74 FUN_1481aeb74 body=93 status=ok
// SIG undefined FUN_1481aeb74(void)

void FUN_1481aeb74(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf030;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481aebd2 FUN_1481aebd2 body=126 status=ok
// SIG undefined FUN_1481aebd2(void)

void FUN_1481aebd2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addf030;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481aec41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481aec58 FUN_1481aec58 body=19 status=ok
// SIG undefined FUN_1481aec58(void)

undefined1 FUN_1481aec58(undefined8 param_1,undefined8 param_2)

{
  FUN_1481aec6c(param_2);
  return 1;
}



// FUNCTION 1481aec6c FUN_1481aec6c body=1083 status=ok
// SIG undefined FUN_1481aec6c(void)

void FUN_1481aec6c(char *param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_128 [40];
  double local_100;
  double local_f8;
  double local_f0;
  float *local_e8;
  int local_e0;
  float *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  float local_b4;
  undefined1 local_b0 [8];
  longlong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1481938a0(local_b0,param_1);
  FUN_1481a214e(&local_b4,param_1);
  FUN_144a76c20(&local_c8,param_1);
  FUN_144a76c20(&local_d8,param_1);
  FUN_144a76c20(&local_e8,param_1);
  cVar2 = FUN_144729dda(local_a8);
  if (cVar2 == '\0') {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      iVar4 = 0;
      do {
        dVar6 = *(double *)(local_a8 + 0xd0) * 0.0 +
                *(double *)(local_a8 + 0xb0) * 0.0 +
                (*(double *)(local_a8 + 0x90) * 0.0 - *(double *)(local_a8 + 0x70));
        dVar7 = *(double *)(local_a8 + 0xd8) * 0.0 +
                *(double *)(local_a8 + 0xb8) * 0.0 +
                (*(double *)(local_a8 + 0x98) * 0.0 - *(double *)(local_a8 + 0x78));
        dVar8 = (*(double *)(local_a8 + 0xa0) * 0.0 - *(double *)(local_a8 + 0x80)) +
                *(double *)(local_a8 + 0xc0) * 0.0 + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar5 = 1.0 / SQRT(dVar8 * dVar8 + dVar6 * dVar6 + dVar7 * dVar7);
        *local_c8 = (float)(dVar5 * dVar6);
        *local_d8 = (float)(dVar7 * dVar5);
        *local_e8 = (float)(dVar8 * dVar5);
        local_c8 = local_c8 + local_c0;
        local_d8 = local_d8 + local_d0;
        local_e8 = local_e8 + local_e0;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  else {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      fVar1 = *(float *)(local_a8 + 0x298);
      iVar4 = 0;
      do {
        FUN_1481ad9e8(local_a8,&local_100,local_b4 * fVar1);
        dVar6 = local_f0 * *(double *)(local_a8 + 0xb0) +
                local_f8 * *(double *)(local_a8 + 0x90) + local_100 * *(double *)(local_a8 + 0x70) +
                *(double *)(local_a8 + 0xd0) * 0.0;
        dVar7 = local_f0 * *(double *)(local_a8 + 0xb8) +
                local_f8 * *(double *)(local_a8 + 0x98) + local_100 * *(double *)(local_a8 + 0x78) +
                *(double *)(local_a8 + 0xd8) * 0.0;
        dVar5 = local_100 * *(double *)(local_a8 + 0x80) + local_f8 * *(double *)(local_a8 + 0xa0) +
                local_f0 * *(double *)(local_a8 + 0xc0) + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar8 = 1.0 / SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7);
        *local_c8 = (float)(dVar8 * dVar6);
        *local_d8 = (float)(dVar7 * dVar8);
        *local_e8 = (float)(dVar5 * dVar8);
        local_c8 = local_c8 + local_c0;
        local_d8 = local_d8 + local_d0;
        local_e8 = local_e8 + local_e0;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481af0a8 FUN_1481af0a8 body=29 status=ok
// SIG undefined FUN_1481af0a8(void)

undefined8 FUN_1481af0a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481af0da FUN_1481af0da body=93 status=ok
// SIG undefined FUN_1481af0da(void)

void FUN_1481af0da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf0a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481af138 FUN_1481af138 body=93 status=ok
// SIG undefined FUN_1481af138(void)

void FUN_1481af138(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf0a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481af196 FUN_1481af196 body=126 status=ok
// SIG undefined FUN_1481af196(void)

void FUN_1481af196(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addf0a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481af205. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481af21c FUN_1481af21c body=19 status=ok
// SIG undefined FUN_1481af21c(void)

undefined1 FUN_1481af21c(undefined8 param_1,undefined8 param_2)

{
  FUN_1481af230(param_2);
  return 1;
}



// FUNCTION 1481af230 FUN_1481af230 body=1121 status=ok
// SIG undefined FUN_1481af230(void)

void FUN_1481af230(char *param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_128 [32];
  double local_108;
  double local_100;
  double local_f8;
  float *local_f0;
  int local_e8;
  float *local_e0;
  int local_d8;
  float *local_d0;
  int local_c8;
  float *local_c0;
  int local_b8;
  undefined1 local_b0 [8];
  longlong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1481938a0(local_b0,param_1);
  FUN_144a76c20(&local_c0,param_1);
  FUN_144a76c20(&local_d0,param_1);
  FUN_144a76c20(&local_e0,param_1);
  FUN_144a76c20(&local_f0,param_1);
  cVar2 = FUN_144729dda(local_a8);
  if (cVar2 == '\0') {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      iVar4 = 0;
      do {
        dVar7 = *(double *)(local_a8 + 0xd0) * 0.0 +
                *(double *)(local_a8 + 0xb0) * 0.0 +
                (*(double *)(local_a8 + 0x90) * 0.0 - *(double *)(local_a8 + 0x70));
        dVar8 = *(double *)(local_a8 + 0xd8) * 0.0 +
                *(double *)(local_a8 + 0xb8) * 0.0 +
                (*(double *)(local_a8 + 0x98) * 0.0 - *(double *)(local_a8 + 0x78));
        dVar6 = (*(double *)(local_a8 + 0xa0) * 0.0 - *(double *)(local_a8 + 0x80)) +
                *(double *)(local_a8 + 0xc0) * 0.0 + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar5 = 1.0 / SQRT(dVar6 * dVar6 + dVar7 * dVar7 + dVar8 * dVar8);
        *local_d0 = (float)(dVar5 * dVar7);
        *local_e0 = (float)(dVar8 * dVar5);
        *local_f0 = (float)(dVar6 * dVar5);
        local_d0 = local_d0 + local_c8;
        local_c0 = local_c0 + local_b8;
        local_e0 = local_e0 + local_d8;
        local_f0 = local_f0 + local_e8;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  else {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      fVar1 = *(float *)(local_a8 + 0x298);
      iVar4 = 0;
      do {
        FUN_1481ad9e8(local_a8,&local_108,*local_c0 * fVar1);
        dVar6 = local_f8 * *(double *)(local_a8 + 0xb0) +
                local_100 * *(double *)(local_a8 + 0x90) + local_108 * *(double *)(local_a8 + 0x70)
                + *(double *)(local_a8 + 0xd0) * 0.0;
        dVar7 = local_f8 * *(double *)(local_a8 + 0xb8) +
                local_100 * *(double *)(local_a8 + 0x98) + local_108 * *(double *)(local_a8 + 0x78)
                + *(double *)(local_a8 + 0xd8) * 0.0;
        dVar5 = local_108 * *(double *)(local_a8 + 0x80) + local_100 * *(double *)(local_a8 + 0xa0)
                + local_f8 * *(double *)(local_a8 + 0xc0) + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar8 = 1.0 / SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7);
        *local_d0 = (float)(dVar8 * dVar6);
        *local_e0 = (float)(dVar7 * dVar8);
        *local_f0 = (float)(dVar5 * dVar8);
        local_c0 = local_c0 + local_b8;
        local_d0 = local_d0 + local_c8;
        local_e0 = local_e0 + local_d8;
        local_f0 = local_f0 + local_e8;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481af82a FUN_1481af82a body=29 status=ok
// SIG undefined FUN_1481af82a(void)

undefined8 FUN_1481af82a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481af85c FUN_1481af85c body=93 status=ok
// SIG undefined FUN_1481af85c(void)

void FUN_1481af85c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf110;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481af8ba FUN_1481af8ba body=93 status=ok
// SIG undefined FUN_1481af8ba(void)

void FUN_1481af8ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf110;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481af918 FUN_1481af918 body=126 status=ok
// SIG undefined FUN_1481af918(void)

void FUN_1481af918(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addf110;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481af987. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481af99e FUN_1481af99e body=19 status=ok
// SIG undefined FUN_1481af99e(void)

undefined1 FUN_1481af99e(undefined8 param_1,undefined8 param_2)

{
  FUN_1481af9b2(param_2);
  return 1;
}



// FUNCTION 1481af9b2 FUN_1481af9b2 body=1088 status=ok
// SIG undefined FUN_1481af9b2(void)

void FUN_1481af9b2(char *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_128 [40];
  double local_100;
  double local_f8;
  double local_f0;
  float *local_e8;
  int local_e0;
  float *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  float local_b4;
  undefined1 local_b0 [8];
  longlong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1481938a0(local_b0,param_1);
  FUN_1481a214e(&local_b4,param_1);
  FUN_144a76c20(&local_c8,param_1);
  FUN_144a76c20(&local_d8,param_1);
  FUN_144a76c20(&local_e8,param_1);
  cVar1 = FUN_144729dda(local_a8);
  if (cVar1 == '\0') {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        dVar6 = *(double *)(local_a8 + 0xd0) * 0.0 +
                *(double *)(local_a8 + 0xb0) * 0.0 +
                (*(double *)(local_a8 + 0x90) * 0.0 - *(double *)(local_a8 + 0x70));
        dVar7 = *(double *)(local_a8 + 0xd8) * 0.0 +
                *(double *)(local_a8 + 0xb8) * 0.0 +
                (*(double *)(local_a8 + 0x98) * 0.0 - *(double *)(local_a8 + 0x78));
        dVar8 = (*(double *)(local_a8 + 0xa0) * 0.0 - *(double *)(local_a8 + 0x80)) +
                *(double *)(local_a8 + 0xc0) * 0.0 + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar5 = 1.0 / SQRT(dVar8 * dVar8 + dVar6 * dVar6 + dVar7 * dVar7);
        *local_c8 = (float)(dVar5 * dVar6);
        *local_d8 = (float)(dVar7 * dVar5);
        *local_e8 = (float)(dVar8 * dVar5);
        local_c8 = local_c8 + local_c0;
        local_d8 = local_d8 + local_d0;
        local_e8 = local_e8 + local_e0;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  else {
    fVar4 = (float)FUN_147a27760(local_a8 + 0x200);
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        FUN_1481ae42a(local_a8,&local_100,local_b4 * fVar4);
        dVar6 = local_f0 * *(double *)(local_a8 + 0xb0) +
                local_f8 * *(double *)(local_a8 + 0x90) + local_100 * *(double *)(local_a8 + 0x70) +
                *(double *)(local_a8 + 0xd0) * 0.0;
        dVar7 = local_f0 * *(double *)(local_a8 + 0xb8) +
                local_f8 * *(double *)(local_a8 + 0x98) + local_100 * *(double *)(local_a8 + 0x78) +
                *(double *)(local_a8 + 0xd8) * 0.0;
        dVar5 = local_100 * *(double *)(local_a8 + 0x80) + local_f8 * *(double *)(local_a8 + 0xa0) +
                local_f0 * *(double *)(local_a8 + 0xc0) + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar8 = 1.0 / SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7);
        *local_c8 = (float)(dVar8 * dVar6);
        *local_d8 = (float)(dVar7 * dVar8);
        *local_e8 = (float)(dVar5 * dVar8);
        local_c8 = local_c8 + local_c0;
        local_d8 = local_d8 + local_d0;
        local_e8 = local_e8 + local_e0;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481afdf4 FUN_1481afdf4 body=29 status=ok
// SIG undefined FUN_1481afdf4(void)

undefined8 FUN_1481afdf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481afe26 FUN_1481afe26 body=93 status=ok
// SIG undefined FUN_1481afe26(void)

void FUN_1481afe26(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf180;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481afe84 FUN_1481afe84 body=93 status=ok
// SIG undefined FUN_1481afe84(void)

void FUN_1481afe84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf180;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481afee2 FUN_1481afee2 body=126 status=ok
// SIG undefined FUN_1481afee2(void)

void FUN_1481afee2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addf180;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481aff51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481aff68 FUN_1481aff68 body=19 status=ok
// SIG undefined FUN_1481aff68(void)

undefined1 FUN_1481aff68(undefined8 param_1,undefined8 param_2)

{
  FUN_1481aff7c(param_2);
  return 1;
}



// FUNCTION 1481aff7c FUN_1481aff7c body=1126 status=ok
// SIG undefined FUN_1481aff7c(void)

void FUN_1481aff7c(char *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_128 [32];
  double local_108;
  double local_100;
  double local_f8;
  float *local_f0;
  int local_e8;
  float *local_e0;
  int local_d8;
  float *local_d0;
  int local_c8;
  float *local_c0;
  int local_b8;
  undefined1 local_b0 [8];
  longlong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1481938a0(local_b0,param_1);
  FUN_144a76c20(&local_c0,param_1);
  FUN_144a76c20(&local_d0,param_1);
  FUN_144a76c20(&local_e0,param_1);
  FUN_144a76c20(&local_f0,param_1);
  cVar1 = FUN_144729dda(local_a8);
  if (cVar1 == '\0') {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        dVar7 = *(double *)(local_a8 + 0xd0) * 0.0 +
                *(double *)(local_a8 + 0xb0) * 0.0 +
                (*(double *)(local_a8 + 0x90) * 0.0 - *(double *)(local_a8 + 0x70));
        dVar8 = *(double *)(local_a8 + 0xd8) * 0.0 +
                *(double *)(local_a8 + 0xb8) * 0.0 +
                (*(double *)(local_a8 + 0x98) * 0.0 - *(double *)(local_a8 + 0x78));
        dVar6 = (*(double *)(local_a8 + 0xa0) * 0.0 - *(double *)(local_a8 + 0x80)) +
                *(double *)(local_a8 + 0xc0) * 0.0 + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar5 = 1.0 / SQRT(dVar6 * dVar6 + dVar7 * dVar7 + dVar8 * dVar8);
        *local_d0 = (float)(dVar5 * dVar7);
        *local_e0 = (float)(dVar8 * dVar5);
        *local_f0 = (float)(dVar6 * dVar5);
        local_d0 = local_d0 + local_c8;
        local_c0 = local_c0 + local_b8;
        local_e0 = local_e0 + local_d8;
        local_f0 = local_f0 + local_e8;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  else {
    fVar4 = (float)FUN_147a27760(local_a8 + 0x200);
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        FUN_1481ae42a(local_a8,&local_108,*local_c0 * fVar4);
        dVar6 = local_f8 * *(double *)(local_a8 + 0xb0) +
                local_100 * *(double *)(local_a8 + 0x90) + local_108 * *(double *)(local_a8 + 0x70)
                + *(double *)(local_a8 + 0xd0) * 0.0;
        dVar7 = local_f8 * *(double *)(local_a8 + 0xb8) +
                local_100 * *(double *)(local_a8 + 0x98) + local_108 * *(double *)(local_a8 + 0x78)
                + *(double *)(local_a8 + 0xd8) * 0.0;
        dVar5 = local_108 * *(double *)(local_a8 + 0x80) + local_100 * *(double *)(local_a8 + 0xa0)
                + local_f8 * *(double *)(local_a8 + 0xc0) + *(double *)(local_a8 + 0xe0) * 0.0;
        dVar8 = 1.0 / SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7);
        *local_d0 = (float)(dVar8 * dVar6);
        *local_e0 = (float)(dVar7 * dVar8);
        *local_f0 = (float)(dVar5 * dVar8);
        local_c0 = local_c0 + local_b8;
        local_d0 = local_d0 + local_c8;
        local_e0 = local_e0 + local_d8;
        local_f0 = local_f0 + local_e8;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481b057c FUN_1481b057c body=29 status=ok
// SIG undefined FUN_1481b057c(void)

undefined8 FUN_1481b057c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481b05ae FUN_1481b05ae body=93 status=ok
// SIG undefined FUN_1481b05ae(void)

void FUN_1481b05ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf1f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481b060c FUN_1481b060c body=93 status=ok
// SIG undefined FUN_1481b060c(void)

void FUN_1481b060c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf1f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481b066a FUN_1481b066a body=126 status=ok
// SIG undefined FUN_1481b066a(void)

void FUN_1481b066a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addf1f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481b06d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481b06f0 FUN_1481b06f0 body=19 status=ok
// SIG undefined FUN_1481b06f0(void)

undefined1 FUN_1481b06f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1481b0704(param_2);
  return 1;
}



// FUNCTION 1481b0704 FUN_1481b0704 body=508 status=ok
// SIG undefined FUN_1481b0704(void)

void FUN_1481b0704(char *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float *local_68;
  int local_60;
  float local_54;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1481938a0(local_50,param_1);
  FUN_1481a214e(&local_54,param_1);
  FUN_144a76c20(&local_68,param_1);
  FUN_144a76c20(&local_78,param_1);
  FUN_144a76c20(&local_88,param_1);
  cVar5 = FUN_144729dda(local_48);
  fVar4 = DAT_14c846338;
  fVar3 = DAT_14c846330._4_4_;
  fVar2 = (float)DAT_14c846330;
  piVar1 = (int *)(param_1 + 0x3c);
  piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar6 = piVar1;
  }
  if (cVar5 == '\0') {
    if (0 < *piVar6) {
      iVar7 = 0;
      do {
        *local_68 = fVar2;
        *local_78 = fVar3;
        *local_88 = fVar4;
        local_68 = local_68 + local_60;
        local_78 = local_78 + local_70;
        local_88 = local_88 + local_80;
        iVar7 = iVar7 + 1;
        piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar6 = piVar1;
        }
      } while (iVar7 < *piVar6);
    }
  }
  else if (0 < *piVar6) {
    fVar2 = *(float *)(local_48 + 0x298);
    iVar7 = 0;
    do {
      FUN_1481933a4(local_48,&local_a0,local_54 * fVar2);
      *local_68 = (float)local_a0;
      *local_78 = (float)local_98;
      *local_88 = (float)local_90;
      local_68 = local_68 + local_60;
      local_78 = local_78 + local_70;
      local_88 = local_88 + local_80;
      iVar7 = iVar7 + 1;
      piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar6 = piVar1;
      }
    } while (iVar7 < *piVar6);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481b0902 FUN_1481b0902 body=29 status=ok
// SIG undefined FUN_1481b0902(void)

undefined8 FUN_1481b0902(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481b0934 FUN_1481b0934 body=93 status=ok
// SIG undefined FUN_1481b0934(void)

void FUN_1481b0934(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf260;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481b0992 FUN_1481b0992 body=93 status=ok
// SIG undefined FUN_1481b0992(void)

void FUN_1481b0992(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf260;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481b09f0 FUN_1481b09f0 body=126 status=ok
// SIG undefined FUN_1481b09f0(void)

void FUN_1481b09f0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addf260;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481b0a5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481b0a76 FUN_1481b0a76 body=19 status=ok
// SIG undefined FUN_1481b0a76(void)

undefined1 FUN_1481b0a76(undefined8 param_1,undefined8 param_2)

{
  FUN_1481b0a8a(param_2);
  return 1;
}



// FUNCTION 1481b0a8a FUN_1481b0a8a body=548 status=ok
// SIG undefined FUN_1481b0a8a(void)

void FUN_1481b0a8a(char *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  float *local_90;
  int local_88;
  float *local_80;
  int local_78;
  float *local_70;
  int local_68;
  float *local_60;
  int local_58;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1481938a0(local_50,param_1);
  FUN_144a76c20(&local_60,param_1);
  FUN_144a76c20(&local_70,param_1);
  FUN_144a76c20(&local_80,param_1);
  FUN_144a76c20(&local_90,param_1);
  cVar5 = FUN_144729dda(local_48);
  fVar4 = DAT_14c846338;
  fVar3 = DAT_14c846330._4_4_;
  fVar2 = (float)DAT_14c846330;
  piVar1 = (int *)(param_1 + 0x3c);
  piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar6 = piVar1;
  }
  if (cVar5 == '\0') {
    if (0 < *piVar6) {
      iVar7 = 0;
      do {
        *local_70 = fVar2;
        *local_80 = fVar3;
        *local_90 = fVar4;
        local_60 = local_60 + local_58;
        local_70 = local_70 + local_68;
        local_80 = local_80 + local_78;
        local_90 = local_90 + local_88;
        iVar7 = iVar7 + 1;
        piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar6 = piVar1;
        }
      } while (iVar7 < *piVar6);
    }
  }
  else if (0 < *piVar6) {
    fVar2 = *(float *)(local_48 + 0x298);
    iVar7 = 0;
    do {
      FUN_1481933a4(local_48,&local_a8,*local_60 * fVar2);
      *local_70 = (float)local_a8;
      *local_80 = (float)local_a0;
      *local_90 = (float)local_98;
      local_60 = local_60 + local_58;
      local_70 = local_70 + local_68;
      local_80 = local_80 + local_78;
      local_90 = local_90 + local_88;
      iVar7 = iVar7 + 1;
      piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar6 = piVar1;
      }
    } while (iVar7 < *piVar6);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481b0e48 FUN_1481b0e48 body=29 status=ok
// SIG undefined FUN_1481b0e48(void)

undefined8 FUN_1481b0e48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481b0e7a FUN_1481b0e7a body=93 status=ok
// SIG undefined FUN_1481b0e7a(void)

void FUN_1481b0e7a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf2d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481b0ed8 FUN_1481b0ed8 body=93 status=ok
// SIG undefined FUN_1481b0ed8(void)

void FUN_1481b0ed8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf2d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481b0f36 FUN_1481b0f36 body=126 status=ok
// SIG undefined FUN_1481b0f36(void)

void FUN_1481b0f36(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addf2d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481b0fa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481b0fbc FUN_1481b0fbc body=19 status=ok
// SIG undefined FUN_1481b0fbc(void)

undefined1 FUN_1481b0fbc(undefined8 param_1,undefined8 param_2)

{
  FUN_1481b0fd0(param_2);
  return 1;
}



// FUNCTION 1481b0fd0 FUN_1481b0fd0 body=585 status=ok
// SIG undefined FUN_1481b0fd0(void)

void FUN_1481b0fd0(char *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  undefined4 uVar9;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined4 uStack_ac;
  double local_a8;
  double local_a0;
  float *local_98;
  int local_90;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float local_64;
  undefined1 local_60 [8];
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1481938a0(local_60,param_1);
  FUN_1481a214e(&local_64,param_1);
  FUN_144a76c20(&local_78,param_1);
  FUN_144a76c20(&local_88,param_1);
  FUN_144a76c20(&local_98,param_1);
  cVar5 = FUN_144729dda(local_58);
  fVar3 = DAT_14c846338;
  fVar2 = DAT_14c846330._4_4_;
  fVar8 = (float)DAT_14c846330;
  piVar1 = (int *)(param_1 + 0x3c);
  if (cVar5 == '\0') {
    piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar6 = piVar1;
    }
    if (0 < *piVar6) {
      iVar7 = 0;
      do {
        *local_78 = fVar8;
        *local_88 = fVar2;
        *local_98 = fVar3;
        local_78 = local_78 + local_70;
        local_88 = local_88 + local_80;
        local_98 = local_98 + local_90;
        iVar7 = iVar7 + 1;
        piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar6 = piVar1;
        }
      } while (iVar7 < *piVar6);
    }
  }
  else {
    fVar8 = (float)FUN_147a27760(local_58 + 0x200);
    piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar6 = piVar1;
    }
    if (0 < *piVar6) {
      iVar7 = 0;
      do {
        lVar4 = local_58;
        local_b0 = 0;
        uVar9 = FUN_140753fde(local_58 + 0x248,local_64 * fVar8,&local_b0);
        FUN_140754464(lVar4 + 0x200,&local_b0,uVar9,&DAT_14c8464e0);
        *local_78 = (float)(double)CONCAT44(uStack_ac,local_b0);
        *local_88 = (float)local_a8;
        *local_98 = (float)local_a0;
        local_78 = local_78 + local_70;
        local_88 = local_88 + local_80;
        local_98 = local_98 + local_90;
        iVar7 = iVar7 + 1;
        piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar6 = piVar1;
        }
      } while (iVar7 < *piVar6);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481b121a FUN_1481b121a body=29 status=ok
// SIG undefined FUN_1481b121a(void)

undefined8 FUN_1481b121a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481b124c FUN_1481b124c body=93 status=ok
// SIG undefined FUN_1481b124c(void)

void FUN_1481b124c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf340;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481b12aa FUN_1481b12aa body=93 status=ok
// SIG undefined FUN_1481b12aa(void)

void FUN_1481b12aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf340;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481b1308 FUN_1481b1308 body=126 status=ok
// SIG undefined FUN_1481b1308(void)

void FUN_1481b1308(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addf340;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481b1377. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481b138e FUN_1481b138e body=19 status=ok
// SIG undefined FUN_1481b138e(void)

undefined1 FUN_1481b138e(undefined8 param_1,undefined8 param_2)

{
  FUN_1481b13a2(param_2);
  return 1;
}



// FUNCTION 1481b13a2 FUN_1481b13a2 body=625 status=ok
// SIG undefined FUN_1481b13a2(void)

void FUN_1481b13a2(char *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  undefined4 uVar9;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  double local_b0;
  double local_a8;
  float *local_a0;
  int local_98;
  float *local_90;
  int local_88;
  float *local_80;
  int local_78;
  float *local_70;
  int local_68;
  undefined1 local_60 [8];
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1481938a0(local_60,param_1);
  FUN_144a76c20(&local_70,param_1);
  FUN_144a76c20(&local_80,param_1);
  FUN_144a76c20(&local_90,param_1);
  FUN_144a76c20(&local_a0,param_1);
  cVar5 = FUN_144729dda(local_58);
  fVar3 = DAT_14c846338;
  fVar2 = DAT_14c846330._4_4_;
  fVar8 = (float)DAT_14c846330;
  piVar1 = (int *)(param_1 + 0x3c);
  if (cVar5 == '\0') {
    piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar6 = piVar1;
    }
    if (0 < *piVar6) {
      iVar7 = 0;
      do {
        *local_80 = fVar8;
        *local_90 = fVar2;
        *local_a0 = fVar3;
        local_70 = local_70 + local_68;
        local_80 = local_80 + local_78;
        local_90 = local_90 + local_88;
        local_a0 = local_a0 + local_98;
        iVar7 = iVar7 + 1;
        piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar6 = piVar1;
        }
      } while (iVar7 < *piVar6);
    }
  }
  else {
    fVar8 = (float)FUN_147a27760(local_58 + 0x200);
    piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar6 = piVar1;
    }
    if (0 < *piVar6) {
      iVar7 = 0;
      do {
        lVar4 = local_58;
        local_b8 = 0;
        uVar9 = FUN_140753fde(local_58 + 0x248,*local_70 * fVar8,&local_b8);
        FUN_140754464(lVar4 + 0x200,&local_b8,uVar9,&DAT_14c8464e0);
        *local_80 = (float)(double)CONCAT44(uStack_b4,local_b8);
        *local_90 = (float)local_b0;
        *local_a0 = (float)local_a8;
        local_70 = local_70 + local_68;
        local_80 = local_80 + local_78;
        local_90 = local_90 + local_88;
        local_a0 = local_a0 + local_98;
        iVar7 = iVar7 + 1;
        piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar6 = piVar1;
        }
      } while (iVar7 < *piVar6);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481b17ac FUN_1481b17ac body=29 status=ok
// SIG undefined FUN_1481b17ac(void)

undefined8 FUN_1481b17ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481b17de FUN_1481b17de body=93 status=ok
// SIG undefined FUN_1481b17de(void)

void FUN_1481b17de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf3b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481b183c FUN_1481b183c body=93 status=ok
// SIG undefined FUN_1481b183c(void)

void FUN_1481b183c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf3b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481b189a FUN_1481b189a body=126 status=ok
// SIG undefined FUN_1481b189a(void)

void FUN_1481b189a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addf3b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481b1909. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481b1920 FUN_1481b1920 body=19 status=ok
// SIG undefined FUN_1481b1920(void)

undefined1 FUN_1481b1920(undefined8 param_1,undefined8 param_2)

{
  FUN_1481b1934(param_2);
  return 1;
}



// FUNCTION 1481b1934 FUN_1481b1934 body=852 status=ok
// SIG undefined FUN_1481b1934(void)

void FUN_1481b1934(char *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_128 [40];
  double local_100;
  double local_f8;
  double local_f0;
  float *local_e8;
  int local_e0;
  float *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  float local_b4;
  undefined1 local_b0 [8];
  longlong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1481938a0(local_b0,param_1);
  FUN_1481a214e(&local_b4,param_1);
  FUN_144a76c20(&local_c8,param_1);
  FUN_144a76c20(&local_d8,param_1);
  FUN_144a76c20(&local_e8,param_1);
  cVar5 = FUN_144729dda(local_a8);
  fVar4 = DAT_14c846338;
  fVar3 = DAT_14c846330._4_4_;
  fVar2 = (float)DAT_14c846330;
  piVar1 = (int *)(param_1 + 0x3c);
  piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar6 = piVar1;
  }
  if (cVar5 == '\0') {
    if (0 < *piVar6) {
      iVar7 = 0;
      do {
        *local_c8 = fVar2;
        *local_d8 = fVar3;
        *local_e8 = fVar4;
        local_c8 = local_c8 + local_c0;
        local_d8 = local_d8 + local_d0;
        local_e8 = local_e8 + local_e0;
        iVar7 = iVar7 + 1;
        piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar6 = piVar1;
        }
      } while (iVar7 < *piVar6);
    }
  }
  else if (0 < *piVar6) {
    fVar2 = *(float *)(local_a8 + 0x298);
    iVar7 = 0;
    do {
      FUN_1481933a4(local_a8,&local_100,local_b4 * fVar2);
      dVar9 = local_f0 * *(double *)(local_a8 + 0xb0) +
              local_f8 * *(double *)(local_a8 + 0x90) + local_100 * *(double *)(local_a8 + 0x70) +
              *(double *)(local_a8 + 0xd0) * 0.0;
      dVar10 = local_f0 * *(double *)(local_a8 + 0xb8) +
               local_f8 * *(double *)(local_a8 + 0x98) + local_100 * *(double *)(local_a8 + 0x78) +
               *(double *)(local_a8 + 0xd8) * 0.0;
      dVar8 = local_100 * *(double *)(local_a8 + 0x80) + local_f8 * *(double *)(local_a8 + 0xa0) +
              local_f0 * *(double *)(local_a8 + 0xc0) + *(double *)(local_a8 + 0xe0) * 0.0;
      dVar11 = 1.0 / SQRT(dVar8 * dVar8 + dVar9 * dVar9 + dVar10 * dVar10);
      *local_c8 = (float)(dVar11 * dVar9);
      *local_d8 = (float)(dVar10 * dVar11);
      *local_e8 = (float)(dVar8 * dVar11);
      local_c8 = local_c8 + local_c0;
      local_d8 = local_d8 + local_d0;
      local_e8 = local_e8 + local_e0;
      iVar7 = iVar7 + 1;
      piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar6 = piVar1;
      }
    } while (iVar7 < *piVar6);
  }
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481b1c8a FUN_1481b1c8a body=29 status=ok
// SIG undefined FUN_1481b1c8a(void)

undefined8 FUN_1481b1c8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481b1cbc FUN_1481b1cbc body=93 status=ok
// SIG undefined FUN_1481b1cbc(void)

void FUN_1481b1cbc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf420;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481b1d1a FUN_1481b1d1a body=93 status=ok
// SIG undefined FUN_1481b1d1a(void)

void FUN_1481b1d1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf420;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481b1d78 FUN_1481b1d78 body=126 status=ok
// SIG undefined FUN_1481b1d78(void)

void FUN_1481b1d78(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addf420;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481b1de7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481b1dfe FUN_1481b1dfe body=19 status=ok
// SIG undefined FUN_1481b1dfe(void)

undefined1 FUN_1481b1dfe(undefined8 param_1,undefined8 param_2)

{
  FUN_1481b1e12(param_2);
  return 1;
}



// FUNCTION 1481b1e12 FUN_1481b1e12 body=892 status=ok
// SIG undefined FUN_1481b1e12(void)

void FUN_1481b1e12(char *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_128 [32];
  double local_108;
  double local_100;
  double local_f8;
  float *local_f0;
  int local_e8;
  float *local_e0;
  int local_d8;
  float *local_d0;
  int local_c8;
  float *local_c0;
  int local_b8;
  undefined1 local_b0 [8];
  longlong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1481938a0(local_b0,param_1);
  FUN_144a76c20(&local_c0,param_1);
  FUN_144a76c20(&local_d0,param_1);
  FUN_144a76c20(&local_e0,param_1);
  FUN_144a76c20(&local_f0,param_1);
  cVar5 = FUN_144729dda(local_a8);
  fVar4 = DAT_14c846338;
  fVar3 = DAT_14c846330._4_4_;
  fVar2 = (float)DAT_14c846330;
  piVar1 = (int *)(param_1 + 0x3c);
  piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar6 = piVar1;
  }
  if (cVar5 == '\0') {
    if (0 < *piVar6) {
      iVar7 = 0;
      do {
        *local_d0 = fVar2;
        *local_e0 = fVar3;
        *local_f0 = fVar4;
        local_c0 = local_c0 + local_b8;
        local_d0 = local_d0 + local_c8;
        local_e0 = local_e0 + local_d8;
        local_f0 = local_f0 + local_e8;
        iVar7 = iVar7 + 1;
        piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar6 = piVar1;
        }
      } while (iVar7 < *piVar6);
    }
  }
  else if (0 < *piVar6) {
    fVar2 = *(float *)(local_a8 + 0x298);
    iVar7 = 0;
    do {
      FUN_1481933a4(local_a8,&local_108,*local_c0 * fVar2);
      dVar9 = local_f8 * *(double *)(local_a8 + 0xb0) +
              local_100 * *(double *)(local_a8 + 0x90) + local_108 * *(double *)(local_a8 + 0x70) +
              *(double *)(local_a8 + 0xd0) * 0.0;
      dVar10 = local_f8 * *(double *)(local_a8 + 0xb8) +
               local_100 * *(double *)(local_a8 + 0x98) + local_108 * *(double *)(local_a8 + 0x78) +
               *(double *)(local_a8 + 0xd8) * 0.0;
      dVar8 = local_108 * *(double *)(local_a8 + 0x80) + local_100 * *(double *)(local_a8 + 0xa0) +
              local_f8 * *(double *)(local_a8 + 0xc0) + *(double *)(local_a8 + 0xe0) * 0.0;
      dVar11 = 1.0 / SQRT(dVar8 * dVar8 + dVar9 * dVar9 + dVar10 * dVar10);
      *local_d0 = (float)(dVar11 * dVar9);
      *local_e0 = (float)(dVar10 * dVar11);
      *local_f0 = (float)(dVar8 * dVar11);
      local_c0 = local_c0 + local_b8;
      local_d0 = local_d0 + local_c8;
      local_e0 = local_e0 + local_d8;
      local_f0 = local_f0 + local_e8;
      iVar7 = iVar7 + 1;
      piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar6 = piVar1;
      }
    } while (iVar7 < *piVar6);
  }
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481b2328 FUN_1481b2328 body=29 status=ok
// SIG undefined FUN_1481b2328(void)

undefined8 FUN_1481b2328(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481b235a FUN_1481b235a body=93 status=ok
// SIG undefined FUN_1481b235a(void)

void FUN_1481b235a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf490;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481b23b8 FUN_1481b23b8 body=93 status=ok
// SIG undefined FUN_1481b23b8(void)

void FUN_1481b23b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf490;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481b2416 FUN_1481b2416 body=126 status=ok
// SIG undefined FUN_1481b2416(void)

void FUN_1481b2416(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addf490;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481b2485. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481b249c FUN_1481b249c body=19 status=ok
// SIG undefined FUN_1481b249c(void)

undefined1 FUN_1481b249c(undefined8 param_1,undefined8 param_2)

{
  FUN_1481b24b0(param_2);
  return 1;
}



// FUNCTION 1481b24b0 FUN_1481b24b0 body=954 status=ok
// SIG undefined FUN_1481b24b0(void)

void FUN_1481b24b0(char *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_138 [40];
  double local_110;
  double local_108;
  double local_100;
  float *local_f8;
  int local_f0;
  float *local_e8;
  int local_e0;
  float *local_d8;
  int local_d0;
  float local_c4;
  undefined1 local_c0 [8];
  longlong local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1481938a0(local_c0,param_1);
  FUN_1481a214e(&local_c4,param_1);
  FUN_144a76c20(&local_d8,param_1);
  FUN_144a76c20(&local_e8,param_1);
  FUN_144a76c20(&local_f8,param_1);
  cVar5 = FUN_144729dda(local_b8);
  fVar3 = DAT_14c846338;
  fVar2 = DAT_14c846330._4_4_;
  fVar8 = (float)DAT_14c846330;
  piVar1 = (int *)(param_1 + 0x3c);
  if (cVar5 == '\0') {
    piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar6 = piVar1;
    }
    if (0 < *piVar6) {
      iVar7 = 0;
      do {
        *local_d8 = fVar8;
        *local_e8 = fVar2;
        *local_f8 = fVar3;
        local_d8 = local_d8 + local_d0;
        local_e8 = local_e8 + local_e0;
        local_f8 = local_f8 + local_f0;
        iVar7 = iVar7 + 1;
        piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar6 = piVar1;
        }
      } while (iVar7 < *piVar6);
    }
  }
  else {
    fVar8 = (float)FUN_147a27760(local_b8 + 0x200);
    piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar6 = piVar1;
    }
    if (0 < *piVar6) {
      iVar7 = 0;
      do {
        lVar4 = local_b8;
        local_110 = (double)((ulonglong)local_110 & 0xffffffff00000000);
        uVar9 = FUN_140753fde(local_b8 + 0x248,local_c4 * fVar8,&local_110);
        FUN_140754464(lVar4 + 0x200,&local_110,uVar9,&DAT_14c8464e0);
        dVar10 = local_100 * *(double *)(local_b8 + 0xb0) +
                 local_108 * *(double *)(local_b8 + 0x90) + local_110 * *(double *)(local_b8 + 0x70)
                 + *(double *)(local_b8 + 0xd0) * 0.0;
        dVar11 = local_100 * *(double *)(local_b8 + 0xb8) +
                 local_108 * *(double *)(local_b8 + 0x98) + local_110 * *(double *)(local_b8 + 0x78)
                 + *(double *)(local_b8 + 0xd8) * 0.0;
        local_100 = local_110 * *(double *)(local_b8 + 0x80) +
                    local_108 * *(double *)(local_b8 + 0xa0) +
                    local_100 * *(double *)(local_b8 + 0xc0) + *(double *)(local_b8 + 0xe0) * 0.0;
        local_110 = 1.0 / SQRT(local_100 * local_100 + dVar10 * dVar10 + dVar11 * dVar11);
        local_100 = local_100 * local_110;
        local_108 = dVar11 * local_110;
        local_110 = local_110 * dVar10;
        *local_d8 = (float)local_110;
        *local_e8 = (float)local_108;
        *local_f8 = (float)local_100;
        local_d8 = local_d8 + local_d0;
        local_e8 = local_e8 + local_e0;
        local_f8 = local_f8 + local_f0;
        iVar7 = iVar7 + 1;
        piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar6 = piVar1;
        }
      } while (iVar7 < *piVar6);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481b286c FUN_1481b286c body=29 status=ok
// SIG undefined FUN_1481b286c(void)

undefined8 FUN_1481b286c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481b289e FUN_1481b289e body=93 status=ok
// SIG undefined FUN_1481b289e(void)

void FUN_1481b289e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf500;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481b28fc FUN_1481b28fc body=93 status=ok
// SIG undefined FUN_1481b28fc(void)

void FUN_1481b28fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf500;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481b295a FUN_1481b295a body=126 status=ok
// SIG undefined FUN_1481b295a(void)

void FUN_1481b295a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addf500;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481b29c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481b29e0 FUN_1481b29e0 body=19 status=ok
// SIG undefined FUN_1481b29e0(void)

undefined1 FUN_1481b29e0(undefined8 param_1,undefined8 param_2)

{
  FUN_1481b29f4(param_2);
  return 1;
}



// FUNCTION 1481b29f4 FUN_1481b29f4 body=994 status=ok
// SIG undefined FUN_1481b29f4(void)

void FUN_1481b29f4(char *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_138 [32];
  double local_118;
  double local_110;
  double local_108;
  float *local_100;
  int local_f8;
  float *local_f0;
  int local_e8;
  float *local_e0;
  int local_d8;
  float *local_d0;
  int local_c8;
  undefined1 local_c0 [8];
  longlong local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1481938a0(local_c0,param_1);
  FUN_144a76c20(&local_d0,param_1);
  FUN_144a76c20(&local_e0,param_1);
  FUN_144a76c20(&local_f0,param_1);
  FUN_144a76c20(&local_100,param_1);
  cVar5 = FUN_144729dda(local_b8);
  fVar3 = DAT_14c846338;
  fVar2 = DAT_14c846330._4_4_;
  fVar8 = (float)DAT_14c846330;
  piVar1 = (int *)(param_1 + 0x3c);
  if (cVar5 == '\0') {
    piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar6 = piVar1;
    }
    if (0 < *piVar6) {
      iVar7 = 0;
      do {
        *local_e0 = fVar8;
        *local_f0 = fVar2;
        *local_100 = fVar3;
        local_d0 = local_d0 + local_c8;
        local_e0 = local_e0 + local_d8;
        local_f0 = local_f0 + local_e8;
        local_100 = local_100 + local_f8;
        iVar7 = iVar7 + 1;
        piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar6 = piVar1;
        }
      } while (iVar7 < *piVar6);
    }
  }
  else {
    fVar8 = (float)FUN_147a27760(local_b8 + 0x200);
    piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar6 = piVar1;
    }
    if (0 < *piVar6) {
      iVar7 = 0;
      do {
        lVar4 = local_b8;
        local_118 = (double)((ulonglong)local_118 & 0xffffffff00000000);
        uVar9 = FUN_140753fde(local_b8 + 0x248,*local_d0 * fVar8,&local_118);
        FUN_140754464(lVar4 + 0x200,&local_118,uVar9,&DAT_14c8464e0);
        dVar10 = local_108 * *(double *)(local_b8 + 0xb0) +
                 local_110 * *(double *)(local_b8 + 0x90) + local_118 * *(double *)(local_b8 + 0x70)
                 + *(double *)(local_b8 + 0xd0) * 0.0;
        dVar11 = local_108 * *(double *)(local_b8 + 0xb8) +
                 local_110 * *(double *)(local_b8 + 0x98) + local_118 * *(double *)(local_b8 + 0x78)
                 + *(double *)(local_b8 + 0xd8) * 0.0;
        local_108 = local_118 * *(double *)(local_b8 + 0x80) +
                    local_110 * *(double *)(local_b8 + 0xa0) +
                    local_108 * *(double *)(local_b8 + 0xc0) + *(double *)(local_b8 + 0xe0) * 0.0;
        local_118 = 1.0 / SQRT(local_108 * local_108 + dVar10 * dVar10 + dVar11 * dVar11);
        local_108 = local_108 * local_118;
        local_110 = dVar11 * local_118;
        local_118 = local_118 * dVar10;
        *local_e0 = (float)local_118;
        *local_f0 = (float)local_110;
        *local_100 = (float)local_108;
        local_d0 = local_d0 + local_c8;
        local_e0 = local_e0 + local_d8;
        local_f0 = local_f0 + local_e8;
        local_100 = local_100 + local_f8;
        iVar7 = iVar7 + 1;
        piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar6 = piVar1;
        }
      } while (iVar7 < *piVar6);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481b2f70 FUN_1481b2f70 body=29 status=ok
// SIG undefined FUN_1481b2f70(void)

undefined8 FUN_1481b2f70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481b2fa2 FUN_1481b2fa2 body=93 status=ok
// SIG undefined FUN_1481b2fa2(void)

void FUN_1481b2fa2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf570;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481b3000 FUN_1481b3000 body=93 status=ok
// SIG undefined FUN_1481b3000(void)

void FUN_1481b3000(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf570;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481b305e FUN_1481b305e body=126 status=ok
// SIG undefined FUN_1481b305e(void)

void FUN_1481b305e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addf570;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481b30cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481b30e4 FUN_1481b30e4 body=19 status=ok
// SIG undefined FUN_1481b30e4(void)

undefined1 FUN_1481b30e4(undefined8 param_1,undefined8 param_2)

{
  FUN_1481b30f8(param_2);
  return 1;
}



// FUNCTION 1481b30f8 FUN_1481b30f8 body=490 status=ok
// SIG undefined FUN_1481b30f8(void)

void FUN_1481b30f8(char *param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_e8 [36];
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8 [24];
  undefined4 *local_a0;
  int local_98;
  undefined4 *local_90 [2];
  int local_80;
  undefined4 *local_78;
  int local_68;
  undefined4 *local_60;
  int local_50;
  undefined1 local_48 [8];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1481938a0(local_48,param_1);
  FUN_1405f76c0(local_90,param_1);
  FUN_144a76c20(&local_a0,param_1);
  cVar2 = FUN_144729dda(local_40);
  piVar1 = (int *)(param_1 + 0x3c);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = piVar1;
  }
  if (cVar2 == '\0') {
    if (0 < *piVar3) {
      iVar4 = 0;
      do {
        *local_a0 = 0;
        local_60 = local_60 + local_50;
        local_78 = local_78 + local_68;
        local_90[0] = local_90[0] + local_80;
        local_a0 = local_a0 + local_98;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = piVar1;
        }
      } while (iVar4 < *piVar3);
    }
  }
  else if (0 < *piVar3) {
    iVar4 = 0;
    do {
      local_bc = *local_60;
      local_c0 = *local_78;
      local_c4 = *local_90[0];
      local_90[0] = local_90[0] + local_80;
      local_78 = local_78 + local_68;
      local_60 = local_60 + local_50;
      FUN_144b38fb2(local_40 + 0x1d0,local_b8,&local_c4);
      uVar5 = FUN_1481b32e4(local_40,local_b8);
      *local_a0 = uVar5;
      local_a0 = local_a0 + local_98;
      iVar4 = iVar4 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = piVar1;
      }
    } while (iVar4 < *piVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481b32e4 FUN_1481b32e4 body=460 status=ok
// SIG undefined FUN_1481b32e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1481b32e4(longlong param_1,double *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  dVar10 = *param_2 - *(double *)(param_1 + 400);
  dVar11 = param_2[1] - *(double *)(param_1 + 0x198);
  dVar6 = param_2[2] - *(double *)(param_1 + 0x1a0);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x1b0);
  dVar2 = -*(double *)(param_1 + 0x170);
  dVar3 = -*(double *)(param_1 + 0x178);
  dVar8 = *(double *)(param_1 + 0x180) * -1.0;
  dVar9 = *(double *)(param_1 + 0x188) * 1.0;
  dVar12 = dVar10 * dVar8 - dVar2 * dVar6;
  dVar4 = dVar11 * dVar2 - dVar10 * dVar3;
  dVar5 = dVar6 * dVar3 - dVar11 * dVar8;
  dVar5 = dVar5 + dVar5;
  dVar12 = dVar12 + dVar12;
  dVar4 = dVar4 + dVar4;
  auVar7 = divpd(_DAT_149934d80,auVar1);
  local_78 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar7._0_8_) *
             ((dVar4 * dVar3 - dVar12 * dVar8) + dVar9 * dVar5 + dVar10);
  dStack_70 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar7._8_8_) *
              (*(double *)(param_1 + 0x170) * dVar4 + dVar8 * dVar5 + dVar9 * dVar12 + dVar11);
  local_68 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x1c0))) &
                     (ulonglong)(1.0 / *(double *)(param_1 + 0x1c0))) *
             (dVar9 * dVar4 + dVar6 + (dVar12 * dVar2 - dVar5 * dVar3));
  FUN_14819347e();
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b34b2 FUN_1481b34b2 body=29 status=ok
// SIG undefined FUN_1481b34b2(void)

undefined8 FUN_1481b34b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481b34e4 FUN_1481b34e4 body=93 status=ok
// SIG undefined FUN_1481b34e4(void)

void FUN_1481b34e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf5e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481b3542 FUN_1481b3542 body=93 status=ok
// SIG undefined FUN_1481b3542(void)

void FUN_1481b3542(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addf5e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481b35a0 FUN_1481b35a0 body=126 status=ok
// SIG undefined FUN_1481b35a0(void)

void FUN_1481b35a0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addf5e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481b360f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481b3626 FUN_1481b3626 body=19 status=ok
// SIG undefined FUN_1481b3626(void)

undefined1 FUN_1481b3626(undefined8 param_1,undefined8 param_2)

{
  FUN_1481b363a(param_2);
  return 1;
}



// FUNCTION 1481b363a FUN_1481b363a body=590 status=ok
// SIG undefined FUN_1481b363a(void)

void FUN_1481b363a(char *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_108 [44];
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [24];
  float *local_b8;
  int local_b0;
  undefined4 *local_a8 [2];
  int local_98;
  undefined4 *local_90;
  int local_80;
  undefined4 *local_78;
  int local_68;
  undefined1 local_60 [8];
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1481938a0(local_60,param_1);
  FUN_1405f76c0(local_a8,param_1);
  FUN_144a76c20(&local_b8,param_1);
  cVar1 = FUN_144729dda(local_58);
  if (cVar1 == '\0') {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        *local_b8 = 0.0;
        local_78 = local_78 + local_68;
        local_90 = local_90 + local_80;
        local_a8[0] = local_a8[0] + local_98;
        local_b8 = local_b8 + local_b0;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  else {
    if ((longlong)*(int *)(local_58 + 0x208) < 1) {
      fVar5 = 1.0;
    }
    else {
      fVar5 = *(float *)(*(longlong *)(local_58 + 0x200) + -0x58 +
                        (longlong)*(int *)(local_58 + 0x208) * 0x58);
    }
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        local_d4 = *local_78;
        local_d8 = *local_90;
        local_dc = *local_a8[0];
        local_a8[0] = local_a8[0] + local_98;
        local_90 = local_90 + local_80;
        local_78 = local_78 + local_68;
        FUN_144b38fb2(local_58 + 0x1d0,local_d0,&local_dc);
        fVar4 = (float)FUN_1481b388a(local_58,local_d0);
        *local_b8 = fVar4 / fVar5;
        local_b8 = local_b8 + local_b0;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481b388a FUN_1481b388a body=483 status=ok
// SIG undefined FUN_1481b388a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1481b388a(longlong param_1,double *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  double local_78;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar10 = *param_2 - *(double *)(param_1 + 400);
  dVar11 = param_2[1] - *(double *)(param_1 + 0x198);
  dVar6 = param_2[2] - *(double *)(param_1 + 0x1a0);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x1b0);
  dVar2 = -*(double *)(param_1 + 0x170);
  dVar3 = -*(double *)(param_1 + 0x178);
  dVar8 = *(double *)(param_1 + 0x180) * -1.0;
  dVar9 = *(double *)(param_1 + 0x188) * 1.0;
  dVar12 = dVar10 * dVar8 - dVar2 * dVar6;
  dVar4 = dVar11 * dVar2 - dVar10 * dVar3;
  dVar5 = dVar6 * dVar3 - dVar11 * dVar8;
  dVar5 = dVar5 + dVar5;
  dVar12 = dVar12 + dVar12;
  dVar4 = dVar4 + dVar4;
  auVar7 = divpd(_DAT_149934d80,auVar1);
  local_88 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar7._0_8_) *
             ((dVar4 * dVar3 - dVar12 * dVar8) + dVar9 * dVar5 + dVar10);
  dStack_80 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar7._8_8_) *
              (*(double *)(param_1 + 0x170) * dVar4 + dVar8 * dVar5 + dVar9 * dVar12 + dVar11);
  local_78 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x1c0))) &
                     (ulonglong)(1.0 / *(double *)(param_1 + 0x1c0))) *
             (dVar9 * dVar4 + dVar6 + (dVar12 * dVar2 - dVar5 * dVar3));
  FUN_14040e062(param_1 + 0x200,&local_88,local_68,local_64);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b3a6e FUN_1481b3a6e body=29 status=ok
// SIG undefined FUN_1481b3a6e(void)

undefined8 FUN_1481b3a6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481b3aa6 FUN_1481b3aa6 body=29 status=ok
// SIG undefined FUN_1481b3aa6(void)

bool FUN_1481b3aa6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1481b3ac4 FUN_1481b3ac4 body=26 status=ok
// SIG undefined FUN_1481b3ac4(void)

bool FUN_1481b3ac4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1481b3ade FUN_1481b3ade body=24 status=ok
// SIG undefined FUN_1481b3ade(void)

bool FUN_1481b3ade(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1481b3af6 FUN_1481b3af6 body=93 status=ok
// SIG undefined FUN_1481b3af6(void)

void FUN_1481b3af6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14addf650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481b3b54 FUN_1481b3b54 body=93 status=ok
// SIG undefined FUN_1481b3b54(void)

void FUN_1481b3b54(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14addf650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481b3bb2 FUN_1481b3bb2 body=126 status=ok
// SIG undefined FUN_1481b3bb2(void)

void FUN_1481b3bb2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addf650;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481b3c21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481b3c30 FUN_1481b3c30 body=40 status=ok
// SIG undefined FUN_1481b3c30(void)

void FUN_1481b3c30(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001481b3c55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1481b3c58 FUN_1481b3c58 body=140 status=ok
// SIG undefined FUN_1481b3c58(void)

bool FUN_1481b3c58(longlong param_1,undefined8 param_2)

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



// FUNCTION 1481b3ce6 FUN_1481b3ce6 body=154 status=ok
// SIG undefined FUN_1481b3ce6(void)

void FUN_1481b3ce6(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1481b3d80();
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
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cb3d7a8;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x150;
  return;
}



// FUNCTION 1481b3d80 FUN_1481b3d80 body=258 status=ok
// SIG undefined FUN_1481b3d80(void)

void FUN_1481b3d80(void)

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
              0x110) < DAT_14cb3d828) {
    FUN_144b3d300(&DAT_14cb3d828);
    if (DAT_14cb3d828 == -1) {
      FUN_1481b3e84(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x39;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb3d7a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a70f0e);
      _Init_thread_footer(&DAT_14cb3d828);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b3e84 FUN_1481b3e84 body=226 status=ok
// SIG undefined FUN_1481b3e84(void)

longlong * FUN_1481b3e84(longlong *param_1)

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
  pcVar13 = FUN_1481b3f68;
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



// FUNCTION 1481b3f68 FUN_1481b3f68 body=136 status=ok
// SIG undefined FUN_1481b3f68(void)

code * FUN_1481b3f68(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SplineRotationsLUT";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14000000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481b3ff0;
}



// FUNCTION 1481b3ff0 FUN_1481b3ff0 body=136 status=ok
// SIG undefined FUN_1481b3ff0(void)

code * FUN_1481b3ff0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SplineScalesLUT";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13800000046;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481b4078;
}



// FUNCTION 1481b4078 FUN_1481b4078 body=136 status=ok
// SIG undefined FUN_1481b4078(void)

code * FUN_1481b4078(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SplinePositionsLUT";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13000000045;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481b4100;
}



// FUNCTION 1481b4100 FUN_1481b4100 body=136 status=ok
// SIG undefined FUN_1481b4100(void)

code * FUN_1481b4100(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12800000043;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481b4188;
}



// FUNCTION 1481b4188 FUN_1481b4188 body=136 status=ok
// SIG undefined FUN_1481b4188(void)

code * FUN_1481b4188(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvSplineDistanceStep";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12400000042;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481b4210;
}



// FUNCTION 1481b4210 FUN_1481b4210 body=136 status=ok
// SIG undefined FUN_1481b4210(void)

code * FUN_1481b4210(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SplineDistanceStep";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12000000041;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481b4298;
}



// FUNCTION 1481b4298 FUN_1481b4298 body=136 status=ok
// SIG undefined FUN_1481b4298(void)

code * FUN_1481b4298(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SplineLength";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11c00000040;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481b4320;
}



// FUNCTION 1481b4320 FUN_1481b4320 body=136 status=ok
// SIG undefined FUN_1481b4320(void)

code * FUN_1481b4320(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DefaultUpVector";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1100000003f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481b43a8;
}



// FUNCTION 1481b43a8 FUN_1481b43a8 body=136 status=ok
// SIG undefined FUN_1481b43a8(void)

code * FUN_1481b43a8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SplineTransformRotation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000003e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481b4430;
}



// FUNCTION 1481b4430 FUN_1481b4430 body=136 status=ok
// SIG undefined FUN_1481b4430(void)

code * FUN_1481b4430(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SplineTransformInverseTranspose";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000003d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481b44b8;
}



// FUNCTION 1481b44b8 FUN_1481b44b8 body=136 status=ok
// SIG undefined FUN_1481b44b8(void)

code * FUN_1481b44b8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SplineTransformInverse";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000003c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481b4540;
}



// FUNCTION 1481b4540 FUN_1481b4540 body=136 status=ok
// SIG undefined FUN_1481b4540(void)

code * FUN_1481b4540(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SplineTransformRotationMat";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000003b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481b45c8;
}



// FUNCTION 1481b45c8 FUN_1481b45c8 body=130 status=ok
// SIG undefined FUN_1481b45c8(void)

undefined1 * FUN_1481b45c8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SplineTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1481b464a;
}



// FUNCTION 1481b464e FUN_1481b464e body=306 status=ok
// SIG undefined FUN_1481b464e(void)

undefined4 * FUN_1481b464e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1481b4782(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar4 = FUN_1481b4868(param_1,uVar9,local_40,&local_4c);
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
      FUN_1481b495a(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b4782 FUN_1481b4782 body=230 status=ok
// SIG undefined FUN_1481b4782(void)

int * FUN_1481b4782(longlong *param_1,int *param_2)

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



// FUNCTION 1481b4868 FUN_1481b4868 body=128 status=ok
// SIG undefined FUN_1481b4868(void)

undefined8 FUN_1481b4868(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1481b48e8((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1481b48e8 FUN_1481b48e8 body=114 status=ok
// SIG undefined FUN_1481b48e8(void)

void FUN_1481b48e8(longlong *param_1,int param_2)

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



// FUNCTION 1481b495a FUN_1481b495a body=447 status=ok
// SIG undefined FUN_1481b495a(void)

void FUN_1481b495a(longlong *param_1)

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



// FUNCTION 1481b4b1a FUN_1481b4b1a body=102 status=ok
// SIG undefined FUN_1481b4b1a(void)

void FUN_1481b4b1a(longlong *param_1,longlong param_2)

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
          FUN_1481b4b80(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1481b4b80 FUN_1481b4b80 body=87 status=ok
// SIG undefined FUN_1481b4b80(void)

void FUN_1481b4b80(longlong *param_1,int param_2)

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
  FUN_1481b48e8();
  return;
}



// FUNCTION 1481b4bd8 FUN_1481b4bd8 body=108 status=ok
// SIG undefined FUN_1481b4bd8(void)

void FUN_1481b4bd8(longlong *param_1,longlong param_2)

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
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x1a0) == param_2) {
          FUN_1481b4c44(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x1a0 + *param_1 + 400);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1481b4c44 FUN_1481b4c44 body=104 status=ok
// SIG undefined FUN_1481b4c44(void)

void FUN_1481b4c44(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x194 + (longlong)param_2 * 0x1a0);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 400 + lVar5 * 0x1a0);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x1a0 + 400);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x1a0 + 400);
  FUN_1481b4cac();
  return;
}



// FUNCTION 1481b4cac FUN_1481b4cac body=105 status=ok
// SIG undefined FUN_1481b4cac(void)

void FUN_1481b4cac(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x1a0;
  FUN_143a6b780(lVar1 + lVar2 + 0x10);
  FUN_140038ae8(lVar1 + lVar2 + 0x170);
  FUN_140038ae8(lVar1 + lVar2 + 0x158);
  FUN_140038ae8(lVar1 + lVar2 + 0x140);
  FUN_1481b4d16(param_1,param_2);
  return;
}



// FUNCTION 1481b4d16 FUN_1481b4d16 body=122 status=ok
// SIG undefined FUN_1481b4d16(void)

void FUN_1481b4d16(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1a0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1a0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1a0 + 4) = uVar5;
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



// FUNCTION 1481b4d90 FUN_1481b4d90 body=189 status=ok
// SIG undefined FUN_1481b4d90(void)

longlong FUN_1481b4d90(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x1a0;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x1a0) == *param_3) {
          if (lVar3 != 0) goto LAB_1481b4e30;
          break;
        }
        iVar1 = *(int *)(lVar3 + 400);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1481b4e4e(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x1a0 + *param_1;
LAB_1481b4e30:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 0x10;
}



// FUNCTION 1481b4e4e FUN_1481b4e4e body=281 status=ok
// SIG undefined FUN_1481b4e4e(void)

undefined4 * FUN_1481b4e4e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_1481b4f68(param_1,local_48);
  FUN_1481b51b2(param_4,local_40);
  *(undefined4 *)(local_40 + 400) = 0xffffffff;
  cVar1 = FUN_1481b5056(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x194) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 400) =
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
      FUN_1481b533e(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b4f68 FUN_1481b4f68 body=237 status=ok
// SIG undefined FUN_1481b4f68(void)

int * FUN_1481b4f68(longlong *param_1,int *param_2)

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
      FUN_1481b511e(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x1a0);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x1a0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1a0 + *param_1;
  return param_2;
}



// FUNCTION 1481b5056 FUN_1481b5056 body=200 status=ok
// SIG undefined FUN_1481b5056(void)

undefined8 FUN_1481b5056(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x1a0);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x1a0) == *param_3) {
          FUN_143a6b780((longlong)_Dst + 0x10);
          FUN_140038ae8((longlong)_Dst + 0x170);
          FUN_140038ae8((longlong)_Dst + 0x158);
          FUN_140038ae8((longlong)_Dst + 0x140);
          memmove(_Dst,param_3,400);
          FUN_1481b4d16(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 400);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1481b511e FUN_1481b511e body=146 status=ok
// SIG undefined FUN_1481b511e(void)

void FUN_1481b511e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1a0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1a0)) {
      uVar5 = uVar4 / 0x1a0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1a0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1481b51b2 FUN_1481b51b2 body=186 status=ok
// SIG undefined FUN_1481b51b2(void)

undefined8 * FUN_1481b51b2(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [304];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  memset(local_1b8,0,0x180);
  *param_2 = *(undefined8 *)*param_1;
  FUN_1481b526e(param_2 + 2,local_1b8);
  FUN_143a6b780(local_1b8);
  FUN_140038ae8(local_58);
  FUN_140038ae8(local_70);
  FUN_140038ae8(local_88);
  if ((local_38 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b526e FUN_1481b526e body=207 status=ok
// SIG undefined FUN_1481b526e(void)

void * FUN_1481b526e(void *param_1,void *param_2)

{
  longlong lVar1;
  
  memcpy(param_1,param_2,300);
  lVar1 = *(longlong *)((longlong)param_2 + 0x130);
  *(longlong *)((longlong)param_1 + 0x130) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = *(longlong *)((longlong)param_2 + 0x138);
  *(longlong *)((longlong)param_1 + 0x138) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)((longlong)param_1 + 0x140) = *(undefined4 *)((longlong)param_2 + 0x140);
  lVar1 = *(longlong *)((longlong)param_2 + 0x148);
  *(longlong *)((longlong)param_1 + 0x148) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = *(longlong *)((longlong)param_2 + 0x150);
  *(longlong *)((longlong)param_1 + 0x150) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)((longlong)param_1 + 0x158) = *(undefined4 *)((longlong)param_2 + 0x158);
  lVar1 = *(longlong *)((longlong)param_2 + 0x160);
  *(longlong *)((longlong)param_1 + 0x160) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = *(longlong *)((longlong)param_2 + 0x168);
  *(longlong *)((longlong)param_1 + 0x168) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)((longlong)param_1 + 0x170) = *(undefined4 *)((longlong)param_2 + 0x170);
  return param_1;
}



// FUNCTION 1481b533e FUN_1481b533e body=456 status=ok
// SIG undefined FUN_1481b533e(void)

void FUN_1481b533e(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x1a0;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x194 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 400 + lVar7) =
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



// FUNCTION 1481b5522 FUN_1481b5522 body=29 status=ok
// SIG undefined FUN_1481b5522(void)

bool FUN_1481b5522(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1481b5540 FUN_1481b5540 body=26 status=ok
// SIG undefined FUN_1481b5540(void)

bool FUN_1481b5540(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1481b555a FUN_1481b555a body=93 status=ok
// SIG undefined FUN_1481b555a(void)

void FUN_1481b555a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14addf900;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481b55b8 FUN_1481b55b8 body=93 status=ok
// SIG undefined FUN_1481b55b8(void)

void FUN_1481b55b8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14addf900;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481b5616 FUN_1481b5616 body=126 status=ok
// SIG undefined FUN_1481b5616(void)

void FUN_1481b5616(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14addf900;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481b5685. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481b5694 FUN_1481b5694 body=140 status=ok
// SIG undefined FUN_1481b5694(void)

bool FUN_1481b5694(longlong param_1,undefined8 param_2)

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



// FUNCTION 1481b5722 FUN_1481b5722 body=138 status=ok
// SIG undefined FUN_1481b5722(void)

code * FUN_1481b5722(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bSubImageBlend";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000019;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ec8414;
}



// FUNCTION 1481b57ac FUN_1481b57ac body=138 status=ok
// SIG undefined FUN_1481b57ac(void)

code * FUN_1481b57ac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Alignment";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000017;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464723f6;
}



// FUNCTION 1481b5836 FUN_1481b5836 body=179 status=ok
// SIG undefined FUN_1481b5836(void)

void FUN_1481b5836(longlong *param_1,char *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  longlong lVar5;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*param_2 == '\x01') {
    *(uint *)(param_1 + 1) =
         (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)*(int *)(param_2 + 0x30));
    iVar2 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar2 + 1;
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar2 * 8);
    *param_1 = lVar5;
    lVar5 = lVar5 + (longlong)(int)param_1[1] * (longlong)*(int *)(param_2 + 0x44) * 4;
  }
  else {
    puVar3 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar3;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar3 + 1;
    uVar4 = uVar1 & 0x7fff;
    if (uVar4 == 0x7fff) {
      *param_1 = (longlong)param_1 + 0xc;
      *(undefined4 *)(param_1 + 1) = 0;
      return;
    }
    lVar5 = (ulonglong)(uVar4 * *(int *)(*(longlong *)(param_2 + 0x80) + 0x80)) +
            *(longlong *)(*(longlong *)(param_2 + 0x80) + 0x70);
    *param_1 = lVar5;
    *(undefined4 *)(param_1 + 1) = 1;
    lVar5 = lVar5 + (longlong)*(int *)(*(longlong *)(param_2 + 0x80) + 0x4c) * 4;
  }
  *param_1 = lVar5;
  return;
}



// FUNCTION 1481b58ea FUN_1481b58ea body=1060 status=ok
// SIG undefined FUN_1481b58ea(void)

undefined8 FUN_1481b58ea(longlong param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  float fVar11;
  ulonglong uVar12;
  float fVar13;
  undefined1 auStack_d8 [32];
  double *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  double local_80;
  double local_78;
  undefined8 local_70;
  double local_68;
  double local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar6 = *(longlong **)(param_1 + 8);
  uVar9 = (ulonglong)*(uint *)(param_1 + 0x10);
  param_4 = param_4 * 3;
  lVar7 = *plVar6;
  lVar8 = plVar6[1];
  cVar2 = *(char *)((longlong)plVar6 + 0x14);
  if (cVar2 == '\x01') {
    uVar10 = *(uint *)(lVar8 + (longlong)param_4 * 4);
  }
  else {
    uVar10 = (uint)*(ushort *)(lVar8 + (longlong)param_4 * 2);
  }
  cVar3 = *(char *)(lVar7 + 0x110);
  uVar12 = (ulonglong)*(uint *)(lVar7 + 0x108);
  lVar7 = *(longlong *)(lVar7 + 0xf8);
  if (cVar3 == '\x01') {
    lVar1 = lVar7 + uVar10 * uVar12 * 8;
    fVar13 = *(float *)(lVar1 + uVar9 * 8);
    fVar11 = *(float *)(lVar1 + 4 + uVar9 * 8);
  }
  else {
    lVar1 = lVar7 + uVar10 * uVar12 * 4;
    uVar4 = *(ushort *)(lVar1 + 2 + uVar9 * 4);
    uVar10 = (uint)uVar4 << 0xd;
    if ((uVar10 & 0xf800000) == 0xf800000) {
      fVar11 = (float)(uVar10 | 0x70000000);
    }
    else if ((uVar10 & 0xf800000) == 0) {
      fVar11 = (float)(uVar10 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar11 = (float)((uVar10 & 0xfffe000) + 0x38000000);
    }
    uVar5 = *(ushort *)(lVar1 + uVar9 * 4);
    uVar10 = (uint)uVar5 << 0xd;
    if ((uVar10 & 0xf800000) == 0xf800000) {
      fVar13 = (float)(uVar10 | 0x70000000);
    }
    else if ((uVar10 & 0xf800000) == 0) {
      fVar13 = (float)(uVar10 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar13 = (float)((uVar10 & 0xfffe000) + 0x38000000);
    }
    fVar11 = (float)((uint)fVar11 | (int)(short)uVar4 & 0x80000000U);
    fVar13 = (float)((int)(short)uVar5 & 0x80000000U | (uint)fVar13);
  }
  local_90 = (double)fVar11;
  local_98 = (double)fVar13;
  local_88 = 0;
  if (cVar2 == '\0') {
    uVar10 = (uint)*(ushort *)(lVar8 + (longlong)(param_4 + 1) * 2);
  }
  else {
    uVar10 = *(uint *)(lVar8 + (longlong)(param_4 + 1) * 4);
  }
  if (cVar3 == '\0') {
    lVar1 = lVar7 + uVar10 * uVar12 * 4;
    uVar4 = *(ushort *)(lVar1 + 2 + uVar9 * 4);
    uVar10 = (uint)uVar4 << 0xd;
    if ((uVar10 & 0xf800000) == 0xf800000) {
      fVar11 = (float)(uVar10 | 0x70000000);
    }
    else if ((uVar10 & 0xf800000) == 0) {
      fVar11 = (float)(uVar10 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar11 = (float)((uVar10 & 0xfffe000) + 0x38000000);
    }
    uVar5 = *(ushort *)(lVar1 + uVar9 * 4);
    uVar10 = (uint)uVar5 << 0xd;
    if ((uVar10 & 0xf800000) == 0xf800000) {
      fVar13 = (float)(uVar10 | 0x70000000);
    }
    else if ((uVar10 & 0xf800000) == 0) {
      fVar13 = (float)(uVar10 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar13 = (float)((uVar10 & 0xfffe000) + 0x38000000);
    }
    fVar11 = (float)((uint)fVar11 | (int)(short)uVar4 & 0x80000000U);
    fVar13 = (float)((int)(short)uVar5 & 0x80000000U | (uint)fVar13);
  }
  else {
    lVar1 = lVar7 + uVar10 * uVar12 * 8;
    fVar13 = *(float *)(lVar1 + uVar9 * 8);
    fVar11 = *(float *)(lVar1 + 4 + uVar9 * 8);
  }
  local_78 = (double)fVar11;
  local_80 = (double)fVar13;
  local_70 = 0;
  if (cVar2 == '\0') {
    uVar10 = (uint)*(ushort *)(lVar8 + (longlong)(param_4 + 2) * 2);
  }
  else {
    uVar10 = *(uint *)(lVar8 + (longlong)(param_4 + 2) * 4);
  }
  if (cVar3 == '\0') {
    lVar7 = lVar7 + uVar12 * uVar10 * 4;
    uVar4 = *(ushort *)(lVar7 + 2 + uVar9 * 4);
    uVar10 = (uint)uVar4 << 0xd;
    if ((uVar10 & 0xf800000) == 0xf800000) {
      fVar11 = (float)(uVar10 | 0x70000000);
    }
    else if ((uVar10 & 0xf800000) == 0) {
      fVar11 = (float)(uVar10 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar11 = (float)((uVar10 & 0xfffe000) + 0x38000000);
    }
    uVar5 = *(ushort *)(lVar7 + uVar9 * 4);
    uVar10 = (uint)uVar5 << 0xd;
    if ((uVar10 & 0xf800000) == 0xf800000) {
      fVar13 = (float)(uVar10 | 0x70000000);
    }
    else if ((uVar10 & 0xf800000) == 0) {
      fVar13 = (float)(uVar10 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar13 = (float)((uVar10 & 0xfffe000) + 0x38000000);
    }
    fVar11 = (float)((uint)fVar11 | (int)(short)uVar4 & 0x80000000U);
    fVar13 = (float)((int)(short)uVar5 & 0x80000000U | (uint)fVar13);
  }
  else {
    lVar7 = lVar7 + uVar12 * uVar10 * 8;
    fVar13 = *(float *)(lVar7 + uVar9 * 8);
    fVar11 = *(float *)(lVar7 + 4 + uVar9 * 8);
  }
  local_b8 = &local_68;
  local_60 = (double)fVar11;
  local_68 = (double)fVar13;
  local_58 = 0;
  local_b0 = *param_3;
  uStack_a8 = param_3[1];
  local_a0 = 0;
  FUN_14276f93e(param_2,&local_b0,&local_98,&local_80);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b5d10 FUN_1481b5d10 body=390 status=ok
// SIG undefined FUN_1481b5d10(void)

bool FUN_1481b5d10(longlong param_1,longlong param_2,double *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  double *pdVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int local_58 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar9 = 0;
    do {
      lVar7 = (longlong)*(int *)(lVar2 + lVar9) * 0x30;
      pdVar6 = (double *)(*(longlong *)(param_2 + 0x18) + 0x10 + lVar7);
      if ((((*param_3 < *pdVar6 || *param_3 == *pdVar6) &&
           (pdVar6 = (double *)(*(longlong *)(param_2 + 0x18) + lVar7),
           *pdVar6 < param_3[2] || *pdVar6 == param_3[2])) &&
          (param_3[1] < pdVar6[3] || param_3[1] == pdVar6[3])) &&
         ((pdVar6[1] < param_3[3] || pdVar6[1] == param_3[3] &&
          (cVar4 = FUN_1481b5e98(param_4), cVar4 == '\0')))) goto LAB_1481b5e90;
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar1 * 4 != lVar9);
  }
  uVar5 = FUN_1481fa93a(param_1,param_3,local_58);
  bVar10 = true;
  if (0 < (int)uVar5) {
    local_88 = *param_4;
    uStack_80 = param_4[1];
    local_78 = *(undefined4 *)(param_4 + 2);
    uStack_74 = *(undefined4 *)((longlong)param_4 + 0x14);
    uStack_70 = *(undefined4 *)(param_4 + 3);
    uStack_6c = *(undefined4 *)((longlong)param_4 + 0x1c);
    local_68 = param_4[4];
    cVar4 = FUN_1481b5d10((longlong)local_58[0] * 0x50 + *(longlong *)(param_2 + 8),param_2,param_3)
    ;
    if (cVar4 == '\0') {
LAB_1481b5e90:
      bVar10 = false;
    }
    else {
      uVar3 = 1;
      do {
        uVar8 = uVar3;
        if (uVar5 == uVar8) break;
        local_88 = *param_4;
        uStack_80 = param_4[1];
        local_78 = *(undefined4 *)(param_4 + 2);
        uStack_74 = *(undefined4 *)((longlong)param_4 + 0x14);
        uStack_70 = *(undefined4 *)(param_4 + 3);
        uStack_6c = *(undefined4 *)((longlong)param_4 + 0x1c);
        local_68 = param_4[4];
        cVar4 = FUN_1481b5d10((longlong)local_58[uVar8] * 0x50 + *(longlong *)(param_2 + 8),param_2,
                              param_3,&local_88);
        uVar3 = uVar8 + 1;
      } while (cVar4 != '\0');
      bVar10 = uVar5 <= uVar8;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar10;
}



// FUNCTION 1481b5e98 FUN_1481b5e98 body=196 status=ok
// SIG undefined FUN_1481b5e98(void)

undefined8 FUN_1481b5e98(undefined8 *param_1,undefined4 param_2)

{
  float fVar1;
  double *pdVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1481b58ea(*param_1,&local_38,param_1[1],param_2);
  dVar4 = local_38;
  if (dStack_30 <= local_38) {
    dVar4 = dStack_30;
  }
  if (local_28 <= dVar4) {
    dVar4 = local_28;
  }
  fVar1 = *(float *)param_1[2];
  uVar3 = CONCAT71((int7)((ulonglong)param_1[2] >> 8),1);
  if ((double)-fVar1 < dVar4) {
    dVar4 = local_38;
    if (local_38 <= dStack_30) {
      dVar4 = dStack_30;
    }
    if (dVar4 <= local_28) {
      dVar4 = local_28;
    }
    if (dVar4 < (double)(fVar1 + 1.0)) {
      *(undefined4 *)param_1[3] = param_2;
      pdVar2 = (double *)param_1[4];
      pdVar2[2] = local_28;
      *pdVar2 = local_38;
      pdVar2[1] = dStack_30;
      uVar3 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b5f5e FUN_1481b5f5e body=391 status=ok
// SIG undefined FUN_1481b5f5e(void)

bool FUN_1481b5f5e(longlong param_1,longlong param_2,double *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  double *pdVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar9 = 0;
    do {
      lVar7 = (longlong)*(int *)(lVar2 + lVar9) * 0x30;
      pdVar6 = (double *)(*(longlong *)(param_2 + 0x18) + 0x10 + lVar7);
      if ((((*param_3 < *pdVar6 || *param_3 == *pdVar6) &&
           (pdVar6 = (double *)(*(longlong *)(param_2 + 0x18) + lVar7),
           *pdVar6 < param_3[2] || *pdVar6 == param_3[2])) &&
          (param_3[1] < pdVar6[3] || param_3[1] == pdVar6[3])) &&
         ((pdVar6[1] < param_3[3] || pdVar6[1] == param_3[3] &&
          (cVar4 = FUN_1481b60e6(param_4), cVar4 == '\0')))) goto LAB_1481b60df;
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar1 * 4 != lVar9);
  }
  uVar5 = FUN_1481fa93a(param_1,param_3,local_58);
  bVar10 = true;
  if (0 < (int)uVar5) {
    local_88 = *param_4;
    uStack_80 = param_4[1];
    local_78 = *(undefined4 *)(param_4 + 2);
    uStack_74 = *(undefined4 *)((longlong)param_4 + 0x14);
    uStack_70 = *(undefined4 *)(param_4 + 3);
    uStack_6c = *(undefined4 *)((longlong)param_4 + 0x1c);
    local_68 = *(undefined4 *)(param_4 + 4);
    uStack_64 = *(undefined4 *)((longlong)param_4 + 0x24);
    uStack_60 = *(undefined4 *)(param_4 + 5);
    uStack_5c = *(undefined4 *)((longlong)param_4 + 0x2c);
    cVar4 = FUN_1481b5f5e((longlong)local_58[0] * 0x50 + *(longlong *)(param_2 + 8),param_2,param_3)
    ;
    if (cVar4 == '\0') {
LAB_1481b60df:
      bVar10 = false;
    }
    else {
      uVar3 = 1;
      do {
        uVar8 = uVar3;
        if (uVar5 == uVar8) break;
        local_88 = *param_4;
        uStack_80 = param_4[1];
        local_78 = *(undefined4 *)(param_4 + 2);
        uStack_74 = *(undefined4 *)((longlong)param_4 + 0x14);
        uStack_70 = *(undefined4 *)(param_4 + 3);
        uStack_6c = *(undefined4 *)((longlong)param_4 + 0x1c);
        local_68 = *(undefined4 *)(param_4 + 4);
        uStack_64 = *(undefined4 *)((longlong)param_4 + 0x24);
        uStack_60 = *(undefined4 *)(param_4 + 5);
        uStack_5c = *(undefined4 *)((longlong)param_4 + 0x2c);
        cVar4 = FUN_1481b5f5e((longlong)local_58[uVar8] * 0x50 + *(longlong *)(param_2 + 8),param_2,
                              param_3,&local_88);
        uVar3 = uVar8 + 1;
      } while (cVar4 != '\0');
      bVar10 = uVar5 <= uVar8;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar10;
}



// FUNCTION 1481b60e6 FUN_1481b60e6 body=1338 status=ok
// SIG undefined FUN_1481b60e6(void)

uint FUN_1481b60e6(longlong *param_1,int param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  char cVar5;
  ushort uVar6;
  ushort uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  double *pdVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  float fVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_138 [32];
  double *local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  double local_e0;
  double local_d8;
  undefined8 local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar8 = *(longlong **)(*param_1 + 8);
  uVar14 = (ulonglong)*(uint *)(*param_1 + 0x10);
  iVar12 = param_2 * 3;
  lVar9 = *plVar8;
  lVar10 = plVar8[1];
  cVar4 = *(char *)((longlong)plVar8 + 0x14);
  if (cVar4 == '\x01') {
    uVar13 = *(uint *)(lVar10 + (longlong)iVar12 * 4);
  }
  else {
    uVar13 = (uint)*(ushort *)(lVar10 + (longlong)iVar12 * 2);
  }
  cVar5 = *(char *)(lVar9 + 0x110);
  uVar16 = (ulonglong)*(uint *)(lVar9 + 0x108);
  lVar9 = *(longlong *)(lVar9 + 0xf8);
  if (cVar5 == '\x01') {
    lVar1 = lVar9 + uVar13 * uVar16 * 8;
    fVar20 = *(float *)(lVar1 + uVar14 * 8);
    fVar18 = *(float *)(lVar1 + 4 + uVar14 * 8);
  }
  else {
    lVar1 = lVar9 + uVar13 * uVar16 * 4;
    uVar6 = *(ushort *)(lVar1 + 2 + uVar14 * 4);
    uVar13 = (uint)uVar6 << 0xd;
    if ((uVar13 & 0xf800000) == 0xf800000) {
      fVar18 = (float)(uVar13 | 0x70000000);
    }
    else if ((uVar13 & 0xf800000) == 0) {
      fVar18 = (float)(uVar13 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar18 = (float)((uVar13 & 0xfffe000) + 0x38000000);
    }
    uVar7 = *(ushort *)(lVar1 + uVar14 * 4);
    uVar13 = (uint)uVar7 << 0xd;
    if ((uVar13 & 0xf800000) == 0xf800000) {
      fVar20 = (float)(uVar13 | 0x70000000);
    }
    else if ((uVar13 & 0xf800000) == 0) {
      fVar20 = (float)(uVar13 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar20 = (float)((uVar13 & 0xfffe000) + 0x38000000);
    }
    fVar18 = (float)((uint)fVar18 | (int)(short)uVar6 & 0x80000000U);
    fVar20 = (float)((int)(short)uVar7 & 0x80000000U | (uint)fVar20);
  }
  if (cVar4 == '\0') {
    uVar13 = (uint)*(ushort *)(lVar10 + (longlong)(iVar12 + 1) * 2);
  }
  else {
    uVar13 = *(uint *)(lVar10 + (longlong)(iVar12 + 1) * 4);
  }
  if (cVar5 == '\0') {
    lVar1 = lVar9 + uVar13 * uVar16 * 4;
    uVar6 = *(ushort *)(lVar1 + 2 + uVar14 * 4);
    uVar13 = (uint)uVar6 << 0xd;
    if ((uVar13 & 0xf800000) == 0xf800000) {
      fVar19 = (float)(uVar13 | 0x70000000);
    }
    else if ((uVar13 & 0xf800000) == 0) {
      fVar19 = (float)(uVar13 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar19 = (float)((uVar13 & 0xfffe000) + 0x38000000);
    }
    uVar7 = *(ushort *)(lVar1 + uVar14 * 4);
    uVar13 = (uint)uVar7 << 0xd;
    if ((uVar13 & 0xf800000) == 0xf800000) {
      fVar21 = (float)(uVar13 | 0x70000000);
    }
    else if ((uVar13 & 0xf800000) == 0) {
      fVar21 = (float)(uVar13 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar21 = (float)((uVar13 & 0xfffe000) + 0x38000000);
    }
    fVar19 = (float)((uint)fVar19 | (int)(short)uVar6 & 0x80000000U);
    fVar21 = (float)((int)(short)uVar7 & 0x80000000U | (uint)fVar21);
  }
  else {
    lVar1 = lVar9 + uVar13 * uVar16 * 8;
    fVar21 = *(float *)(lVar1 + uVar14 * 8);
    fVar19 = *(float *)(lVar1 + 4 + uVar14 * 8);
  }
  if (cVar4 == '\0') {
    uVar13 = (uint)*(ushort *)(lVar10 + (longlong)(iVar12 + 2) * 2);
  }
  else {
    uVar13 = *(uint *)(lVar10 + (longlong)(iVar12 + 2) * 4);
  }
  if (cVar5 == '\0') {
    lVar9 = lVar9 + uVar16 * uVar13 * 4;
    uVar6 = *(ushort *)(lVar9 + 2 + uVar14 * 4);
    uVar13 = (uint)uVar6 << 0xd;
    if ((uVar13 & 0xf800000) == 0xf800000) {
      fVar15 = (float)(uVar13 | 0x70000000);
    }
    else if ((uVar13 & 0xf800000) == 0) {
      fVar15 = (float)(uVar13 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar15 = (float)((uVar13 & 0xfffe000) + 0x38000000);
    }
    uVar7 = *(ushort *)(lVar9 + uVar14 * 4);
    uVar13 = (uint)uVar7 << 0xd;
    if ((uVar13 & 0xf800000) == 0xf800000) {
      fVar17 = (float)(uVar13 | 0x70000000);
    }
    else if ((uVar13 & 0xf800000) == 0) {
      fVar17 = (float)(uVar13 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar17 = (float)((uVar13 & 0xfffe000) + 0x38000000);
    }
    fVar15 = (float)((uint)fVar15 | (int)(short)uVar6 & 0x80000000U);
    fVar17 = (float)((int)(short)uVar7 & 0x80000000U | (uint)fVar17);
  }
  else {
    lVar9 = lVar9 + uVar16 * uVar13 * 8;
    fVar17 = *(float *)(lVar9 + uVar14 * 8);
    fVar15 = *(float *)(lVar9 + 4 + uVar14 * 8);
  }
  dVar2 = *(double *)param_1[1];
  dVar3 = ((double *)param_1[1])[1];
  local_f8 = *(double *)param_1[2];
  local_f0 = ((double *)param_1[2])[1];
  dStack_c0 = dVar3 * (double)fVar15 + local_f0;
  local_c8 = dVar2 * (double)fVar17 + local_f8;
  local_d8 = dVar3 * (double)fVar19 + local_f0;
  local_e0 = dVar2 * (double)fVar21 + local_f8;
  local_f0 = dVar3 * (double)fVar18 + local_f0;
  local_f8 = dVar2 * (double)fVar20 + local_f8;
  uVar13 = FUN_1481b6622(&local_f8,&local_e0);
  if ((char)uVar13 != '\0') {
    local_d0 = 0;
    local_e8 = 0;
    local_100 = 0;
    local_118 = &local_e0;
    local_110 = (double)fVar20;
    local_108 = (double)fVar18;
    local_f8 = (double)fVar21;
    local_f0 = (double)fVar19;
    local_e0 = (double)fVar17;
    local_d8 = (double)fVar15;
    FUN_14276f93e(&local_c8,param_1[4]);
    pdVar11 = (double *)param_1[3];
    pdVar11[2] = local_b8;
    *pdVar11 = local_c8;
    pdVar11[1] = dStack_c0;
    *(int *)param_1[5] = param_2;
  }
  if ((local_b0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar13 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b6622 FUN_1481b6622 body=633 status=ok
// SIG undefined FUN_1481b6622(void)

bool FUN_1481b6622(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double *pdVar15;
  ulonglong uVar16;
  bool bVar17;
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
  undefined1 auStack_f8 [32];
  double local_d8 [5];
  double local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = *param_2;
  dVar4 = param_2[1];
  dVar5 = *param_1;
  dVar6 = param_1[1];
  uVar19 = (undefined4)((ulonglong)dVar6 >> 0x20);
  uVar26 = (undefined4)((ulonglong)dVar4 >> 0x20);
  uVar18 = SUB84(dVar6,0);
  uVar20 = uVar19;
  if (dVar4 <= dVar6) {
    uVar18 = SUB84(dVar4,0);
    uVar20 = uVar26;
  }
  uVar27 = (undefined4)((ulonglong)dVar2 >> 0x20);
  if (dVar2 <= (double)CONCAT44(uVar20,uVar18)) {
    uVar18 = SUB84(dVar2,0);
    uVar20 = uVar27;
  }
  uVar21 = (undefined4)((ulonglong)dVar5 >> 0x20);
  uVar23 = (undefined4)((ulonglong)dVar3 >> 0x20);
  uVar22 = SUB84(dVar5,0);
  uVar25 = uVar21;
  if (dVar3 <= dVar5) {
    uVar22 = SUB84(dVar3,0);
    uVar25 = uVar23;
  }
  uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (dVar1 <= (double)CONCAT44(uVar25,uVar22)) {
    uVar22 = SUB84(dVar1,0);
    uVar25 = uVar24;
  }
  if ((double)CONCAT44(uVar25,uVar22) <= (double)CONCAT44(uVar20,uVar18)) {
    uVar22 = uVar18;
    uVar25 = uVar20;
  }
  if ((double)CONCAT44(uVar25,uVar22) < 1.0 || (double)CONCAT44(uVar25,uVar22) == 1.0) {
    uVar18 = SUB84(dVar5,0);
    if (dVar5 <= dVar3) {
      uVar18 = SUB84(dVar3,0);
      uVar21 = uVar23;
    }
    if ((double)CONCAT44(uVar21,uVar18) <= dVar1) {
      uVar18 = SUB84(dVar1,0);
      uVar21 = uVar24;
    }
    uVar20 = SUB84(dVar6,0);
    if (dVar6 <= dVar4) {
      uVar20 = SUB84(dVar4,0);
      uVar19 = uVar26;
    }
    if ((double)CONCAT44(uVar19,uVar20) <= dVar2) {
      uVar20 = SUB84(dVar2,0);
      uVar19 = uVar27;
    }
    if ((double)CONCAT44(uVar19,uVar20) <= (double)CONCAT44(uVar21,uVar18)) {
      uVar18 = uVar20;
      uVar21 = uVar19;
    }
    if (0.0 < (double)CONCAT44(uVar21,uVar18) || (double)CONCAT44(uVar21,uVar18) == 0.0) {
      pdVar15 = local_d8 + 1;
      local_d8[0] = dVar1 - dVar3;
      local_d8[1] = dVar2 - dVar4;
      local_d8[2] = dVar5 - dVar1;
      local_d8[3] = dVar6 - dVar2;
      local_d8[4] = dVar3 - dVar5;
      local_b0 = dVar4 - dVar6;
      uVar16 = 0;
      bVar17 = false;
      do {
        dVar7 = pdVar15[-1];
        uVar26 = (undefined4)((ulonglong)dVar7 >> 0x20);
        dVar8 = *pdVar15;
        dVar9 = -dVar8;
        uVar18 = (undefined4)((ulonglong)dVar9 >> 0x20);
        dVar10 = dVar7 - dVar8;
        uVar20 = SUB84(dVar8,0);
        uVar19 = uVar18;
        if (dVar7 <= dVar9) {
          uVar20 = SUB84(dVar7,0);
          uVar19 = uVar26;
        }
        if (dVar10 <= (double)CONCAT44(uVar19,uVar20)) {
          uVar20 = SUB84(dVar10,0);
          uVar19 = (undefined4)((ulonglong)dVar10 >> 0x20);
        }
        uVar27 = 0;
        uVar21 = 0;
        if ((double)CONCAT44(uVar19,uVar20) <= 0.0) {
          uVar27 = uVar20;
          uVar21 = uVar19;
        }
        dVar11 = dVar2 * dVar7 - dVar1 * dVar8;
        dVar12 = dVar4 * dVar7 - dVar3 * dVar8;
        dVar13 = dVar6 * dVar7 - dVar8 * dVar5;
        dVar14 = dVar13;
        if (dVar13 <= dVar12) {
          dVar14 = dVar12;
        }
        if (dVar14 <= dVar11) {
          dVar14 = dVar11;
        }
        if (dVar14 <= (double)CONCAT44(uVar21,uVar27) && (double)CONCAT44(uVar21,uVar27) != dVar14)
        break;
        uVar20 = SUB84(dVar8,0);
        if (dVar9 <= dVar7) {
          uVar20 = SUB84(dVar7,0);
          uVar18 = uVar26;
        }
        dVar7 = (double)CONCAT44(uVar18,uVar20);
        if ((double)CONCAT44(uVar18,uVar20) <= dVar10) {
          dVar7 = dVar10;
        }
        dVar8 = 0.0;
        if (0.0 <= dVar7) {
          dVar8 = dVar7;
        }
        if (dVar12 <= dVar13) {
          dVar13 = dVar12;
        }
        if (dVar11 <= dVar13) {
          dVar13 = dVar11;
        }
        if (dVar8 < dVar13) break;
        bVar17 = 1 < uVar16;
        uVar16 = uVar16 + 1;
        pdVar15 = pdVar15 + 2;
      } while (uVar16 != 3);
      goto LAB_1481b66f3;
    }
  }
  bVar17 = false;
LAB_1481b66f3:
  if ((DAT_14c707940 ^ (ulonglong)auStack_f8 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar17;
}


