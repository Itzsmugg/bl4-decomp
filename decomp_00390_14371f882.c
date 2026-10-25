// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14371f882 FUN_14371f882 body=29 status=ok
// SIG undefined FUN_14371f882(void)

undefined8 FUN_14371f882(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14371f8b4 FUN_14371f8b4 body=85 status=ok
// SIG undefined FUN_14371f8b4(void)

void FUN_14371f8b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aac1f10;
  return;
}



// FUNCTION 14371f90a FUN_14371f90a body=85 status=ok
// SIG undefined FUN_14371f90a(void)

void FUN_14371f90a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aac1f10;
  return;
}



// FUNCTION 14371f960 FUN_14371f960 body=118 status=ok
// SIG undefined FUN_14371f960(void)

void FUN_14371f960(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aac1f10;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014371f9c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14371f9d6 FUN_14371f9d6 body=81 status=ok
// SIG undefined FUN_14371f9d6(void)

void FUN_14371f9d6(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14371fa28 FUN_14371fa28 body=83 status=ok
// SIG undefined FUN_14371fa28(void)

undefined8 FUN_14371fa28(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14371fa7c FUN_14371fa7c body=29 status=ok
// SIG undefined FUN_14371fa7c(void)

undefined8 FUN_14371fa7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14371faae FUN_14371faae body=85 status=ok
// SIG undefined FUN_14371faae(void)

void FUN_14371faae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aac1f80;
  return;
}



// FUNCTION 14371fb04 FUN_14371fb04 body=85 status=ok
// SIG undefined FUN_14371fb04(void)

void FUN_14371fb04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aac1f80;
  return;
}



// FUNCTION 14371fb5a FUN_14371fb5a body=118 status=ok
// SIG undefined FUN_14371fb5a(void)

void FUN_14371fb5a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aac1f80;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014371fbc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14371fbd0 FUN_14371fbd0 body=81 status=ok
// SIG undefined FUN_14371fbd0(void)

void FUN_14371fbd0(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14371fc22 FUN_14371fc22 body=83 status=ok
// SIG undefined FUN_14371fc22(void)

undefined8 FUN_14371fc22(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14371fc76 FUN_14371fc76 body=29 status=ok
// SIG undefined FUN_14371fc76(void)

undefined8 FUN_14371fc76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14371fca8 FUN_14371fca8 body=85 status=ok
// SIG undefined FUN_14371fca8(void)

void FUN_14371fca8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aac1ff0;
  return;
}



// FUNCTION 14371fcfe FUN_14371fcfe body=85 status=ok
// SIG undefined FUN_14371fcfe(void)

void FUN_14371fcfe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aac1ff0;
  return;
}



// FUNCTION 14371fd54 FUN_14371fd54 body=118 status=ok
// SIG undefined FUN_14371fd54(void)

void FUN_14371fd54(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aac1ff0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014371fdbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14371fdd0 FUN_14371fdd0 body=16 status=ok
// SIG undefined FUN_14371fdd0(void)

undefined1 FUN_14371fdd0(void)

{
  FUN_14371fde0();
  return 1;
}



// FUNCTION 14371fde0 FUN_14371fde0 body=264 status=ok
// SIG undefined FUN_14371fde0(void)

void FUN_14371fde0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_60;
  code *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  code *local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0a7ec) {
    FUN_144b3d300(&DAT_14cb0a7ec);
    if (DAT_14cb0a7ec == -1) {
      DAT_14cb0a7e8 = *DAT_14cb09e90;
      _Init_thread_footer(&DAT_14cb0a7ec);
    }
  }
  if (DAT_14cb0a7e8 != *DAT_14cb09e90) {
    local_48 = 0;
    local_38 = &PTR_LAB_149e16f80;
    local_30 = FUN_14371feea;
    local_58[0] = FUN_140d11fbe;
    local_68 = 1;
    DAT_14cb0a7e8 = *DAT_14cb09e90;
    FUN_14014aede(&local_60,local_58,param_3,0);
    if (local_60 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_60 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_60)(local_60,1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14371feea FUN_14371feea body=86 status=ok
// SIG undefined FUN_14371feea(void)

void FUN_14371feea(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14080c2b4();
  FUN_145c1aaf2(local_70);
  FUN_145c1a9d0(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14371ff42 FUN_14371ff42 body=354 status=ok
// SIG undefined FUN_14371ff42(void)

void FUN_14371ff42(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_38 = 0;
  FUN_14570d169(&local_28,param_1[1],(int)param_1[2],param_1[3]);
  param_1 = (longlong *)*param_1;
  if (param_1 != &local_28) {
    lVar4 = *param_1;
    *param_1 = local_28;
    local_28 = 0;
    if (lVar4 == 0) goto LAB_143720055;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_28;
  if (local_28 != 0) {
    LOCK();
    puVar1 = (uint *)(local_28 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_28 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_28 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_143720055:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437200b0 FUN_1437200b0 body=29 status=ok
// SIG undefined FUN_1437200b0(void)

void FUN_1437200b0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1437200ce FUN_1437200ce body=57 status=ok
// SIG undefined FUN_1437200ce(void)

undefined8 * FUN_1437200ce(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14aac2060;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143720108 FUN_143720108 body=282 status=ok
// SIG undefined FUN_143720108(void)

undefined8 * FUN_143720108(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14371f534);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143720222 FUN_143720222 body=423 status=ok
// SIG undefined FUN_143720222(void)

void FUN_143720222(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  local_30 = 0;
  local_38 = 0;
  FUN_14570d169(&local_28,param_1[0x16],*(undefined4 *)(param_1 + 0x17),param_1[0x18]);
  plVar8 = (longlong *)param_1[0x15];
  if (plVar8 != &local_28) {
    lVar5 = *plVar8;
    *plVar8 = local_28;
    local_28 = 0;
    if (lVar5 == 0) goto LAB_143720351;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar5 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar5;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  lVar5 = local_28;
  if (local_28 != 0) {
    LOCK();
    puVar1 = (uint *)(local_28 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_28 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(local_28 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar5;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
LAB_143720351:
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437203ca FUN_1437203ca body=25 status=ok
// SIG undefined FUN_1437203ca(void)

void FUN_1437203ca(void)

{
  FUN_145e05f70();
  FUN_14170c56a(&DAT_14cb09f28);
  return;
}



// FUNCTION 1437203f0 FUN_1437203f0 body=31 status=ok
// SIG undefined FUN_1437203f0(void)

undefined8 FUN_1437203f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372041c FUN_14372041c body=48 status=ok
// SIG undefined FUN_14372041c(void)

void FUN_14372041c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14372044c FUN_14372044c body=154 status=ok
// SIG undefined FUN_14372044c(void)

undefined8 * FUN_14372044c(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = &PTR_LAB_14aac21e0;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[3] = 0;
  iVar1 = param_2[6];
  _Src = *(void **)(param_2 + 4);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
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
  param_1[5] = lVar6;
  return param_1;
}



// FUNCTION 143720502 FUN_143720502 body=114 status=ok
// SIG undefined FUN_143720502(void)

int FUN_143720502(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        cVar2 = FUN_144a7afa6(lVar4 + (longlong)iVar1 * 0x50,param_3);
        if (cVar2 != '\0') {
          return iVar1;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar4 + 0x48 + (longlong)iVar1 * 0x50);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 143720574 FUN_143720574 body=346 status=ok
// SIG undefined FUN_143720574(void)

void FUN_143720574(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143720606;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_143720606:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1437206ce FUN_1437206ce body=29 status=ok
// SIG undefined FUN_1437206ce(void)

undefined8 FUN_1437206ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143720700 FUN_143720700 body=93 status=ok
// SIG undefined FUN_143720700(void)

void FUN_143720700(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aac2420;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aac23b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14372075e FUN_14372075e body=93 status=ok
// SIG undefined FUN_14372075e(void)

void FUN_14372075e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aac2420;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aac23b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1437207bc FUN_1437207bc body=126 status=ok
// SIG undefined FUN_1437207bc(void)

void FUN_1437207bc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aac2420;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aac23b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014372082b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14372083a FUN_14372083a body=126 status=ok
// SIG undefined FUN_14372083a(void)

void FUN_14372083a(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
                  int param_5,int param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar4 = param_4[1];
  if ((longlong)(int)lVar4 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    lVar3 = *param_4;
    lVar5 = 0;
    do {
      FUN_1406f7d76(uVar2,*(undefined4 *)(lVar3 + lVar5));
      lVar5 = lVar5 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar5);
  }
  *(undefined4 *)(lVar1 + 0x38) = param_3;
  if ((param_5 < param_6) && (0 < *DAT_14cb0b150)) {
    *(int *)(lVar1 + 0x40) = param_5;
    *(int *)(lVar1 + 0x3c) = param_6;
  }
  return;
}



// FUNCTION 1437208b8 FUN_1437208b8 body=128 status=ok
// SIG undefined FUN_1437208b8(void)

undefined8
FUN_1437208b8(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,int param_5,
             int param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar4 = param_4[1];
  if ((longlong)(int)lVar4 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    lVar3 = *param_4;
    lVar5 = 0;
    do {
      FUN_1406f7d76(uVar2,*(undefined4 *)(lVar3 + lVar5));
      lVar5 = lVar5 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar5);
  }
  *(undefined4 *)(lVar1 + 0x38) = param_3;
  if ((param_5 < param_6) && (0 < *DAT_14cb0b150)) {
    *(int *)(lVar1 + 0x40) = param_5;
    *(int *)(lVar1 + 0x3c) = param_6;
  }
  return 1;
}



// FUNCTION 143720938 FUN_143720938 body=29 status=ok
// SIG undefined FUN_143720938(void)

undefined8 FUN_143720938(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372096a FUN_14372096a body=93 status=ok
// SIG undefined FUN_14372096a(void)

void FUN_14372096a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aac2500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aac2490;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1437209c8 FUN_1437209c8 body=93 status=ok
// SIG undefined FUN_1437209c8(void)

void FUN_1437209c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aac2500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aac2490;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143720a26 FUN_143720a26 body=126 status=ok
// SIG undefined FUN_143720a26(void)

void FUN_143720a26(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aac2500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aac2490;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143720a95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143720aae FUN_143720aae body=20 status=ok
// SIG undefined FUN_143720aae(void)

undefined1 FUN_143720aae(longlong param_1)

{
  FUN_14371c304(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143720ac2 FUN_143720ac2 body=282 status=ok
// SIG undefined FUN_143720ac2(void)

undefined8 * FUN_143720ac2(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14371f534);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143720bdc FUN_143720bdc body=126 status=ok
// SIG undefined FUN_143720bdc(void)

void FUN_143720bdc(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1449b3b46(param_1[0x15],3);
  *(int *)(param_1[0x15] + 0x40) = *(int *)(param_1[0x15] + 0x40) + -1;
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)puVar2 + 100);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (((*piVar1 == 0) && (*(int *)(puVar2 + 0xc) == 0)) && (*(int *)(puVar2 + 0xb) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143720c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143720c5a FUN_143720c5a body=77 status=ok
// SIG undefined FUN_143720c5a(void)

void FUN_143720c5a(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  FUN_1449b3b46(puVar2,1);
  *(int *)((longlong)puVar2 + 0x44) = *(int *)((longlong)puVar2 + 0x44) + -1;
  LOCK();
  piVar1 = (int *)((longlong)puVar2 + 100);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((((*piVar1 == 0) && (*(int *)(puVar2 + 0xc) == 0)) && (puVar2 != (undefined8 *)0x0)) &&
     (*(int *)(puVar2 + 0xb) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000143720ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,1);
    return;
  }
  return;
}



// FUNCTION 143720cb2 FUN_143720cb2 body=12 status=ok
// SIG undefined FUN_143720cb2(void)

void FUN_143720cb2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143720cbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143720cbe FUN_143720cbe body=29 status=ok
// SIG undefined FUN_143720cbe(void)

undefined8 FUN_143720cbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143720cdc FUN_143720cdc body=282 status=ok
// SIG undefined FUN_143720cdc(void)

undefined8 * FUN_143720cdc(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14371f534);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143720df6 FUN_143720df6 body=127 status=ok
// SIG undefined FUN_143720df6(void)

void FUN_143720df6(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  puVar2 = (undefined8 *)param_1[0x15];
  FUN_1449b3b46(puVar2,1);
  *(int *)((longlong)puVar2 + 0x44) = *(int *)((longlong)puVar2 + 0x44) + -1;
  LOCK();
  piVar1 = (int *)((longlong)puVar2 + 100);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((((*piVar1 == 0) && (*(int *)(puVar2 + 0xc) == 0)) && (puVar2 != (undefined8 *)0x0)) &&
     (*(int *)(puVar2 + 0xb) == 0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143720e6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143720ea8 FUN_143720ea8 body=29 status=ok
// SIG undefined FUN_143720ea8(void)

undefined8 FUN_143720ea8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143720f0c FUN_143720f0c body=29 status=ok
// SIG undefined FUN_143720f0c(void)

undefined8 FUN_143720f0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143720f50 FUN_143720f50 body=12 status=ok
// SIG undefined FUN_143720f50(void)

void FUN_143720f50(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143720f59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143720f5c FUN_143720f5c body=29 status=ok
// SIG undefined FUN_143720f5c(void)

undefined8 FUN_143720f5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143720fb4 FUN_143720fb4 body=12 status=ok
// SIG undefined FUN_143720fb4(void)

void FUN_143720fb4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143720fbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143720fc0 FUN_143720fc0 body=29 status=ok
// SIG undefined FUN_143720fc0(void)

undefined8 FUN_143720fc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143721010 FUN_143721010 body=29 status=ok
// SIG undefined FUN_143721010(void)

undefined8 FUN_143721010(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143721060 FUN_143721060 body=29 status=ok
// SIG undefined FUN_143721060(void)

undefined8 FUN_143721060(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437210a4 FUN_1437210a4 body=12 status=ok
// SIG undefined FUN_1437210a4(void)

void FUN_1437210a4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437210ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1437210b0 FUN_1437210b0 body=29 status=ok
// SIG undefined FUN_1437210b0(void)

undefined8 FUN_1437210b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143721108 FUN_143721108 body=12 status=ok
// SIG undefined FUN_143721108(void)

void FUN_143721108(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143721111. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143721114 FUN_143721114 body=29 status=ok
// SIG undefined FUN_143721114(void)

undefined8 FUN_143721114(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372117e FUN_14372117e body=12 status=ok
// SIG undefined FUN_14372117e(void)

void FUN_14372117e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143721187. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372118a FUN_14372118a body=29 status=ok
// SIG undefined FUN_14372118a(void)

undefined8 FUN_14372118a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437211a8 FUN_1437211a8 body=944 status=ok
// SIG undefined FUN_1437211a8(void)

void FUN_1437211a8(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_188 [32];
  longlong local_168;
  code *local_158 [2];
  undefined ***local_148;
  undefined **local_138;
  longlong local_130;
  code *local_118;
  int local_110;
  undefined ***local_108;
  undefined1 local_100 [8];
  undefined **local_f8;
  longlong local_f0;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar2 = *param_1;
  if (*(char *)(lVar2 + 0x5c) == '\0') {
    if ((*param_2 == 0) || (param_2[1] == 0)) {
      if (*(int *)(lVar2 + 0x60) != 0) {
        *(undefined1 *)(lVar2 + 0x5c) = 1;
      }
    }
    else {
      iVar4 = *(int *)(lVar2 + 0x10);
      iVar3 = *(int *)(lVar2 + 0x14);
      local_110 = iVar4 - iVar3;
      local_118 = (code *)0x0;
      local_108 = (undefined ***)0x0;
      local_40 = 0;
      local_38 = 0x800000000;
      if (8 < local_110) {
        FUN_14688b4f8(local_100);
        iVar4 = *(int *)(lVar2 + 0x10);
        iVar3 = *(int *)(lVar2 + 0x14);
      }
      if (iVar3 < iVar4) {
        lVar9 = (longlong)iVar3;
        do {
          FUN_1427d8b7a(&local_118,*(longlong *)(param_2[2] + lVar9 * 8) + 0x68,0,0xffffffffffffffff
                       );
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)(lVar2 + 0x10));
      }
      LOCK();
      *(int *)(lVar2 + 0x58) = *(int *)(lVar2 + 0x58) + 1;
      UNLOCK();
      iVar4 = 1;
      if (*(char *)(lVar2 + 0x660) != '\0') {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14cb0a4b0) {
          FUN_144b3d300(&DAT_14cb0a4b0,ThreadLocalStoragePointer,1);
          if (DAT_14cb0a4b0 == -1) {
            if (DAT_14c8407a8 == (longlong *)0x0) {
              FUN_1414b00ea();
            }
            DAT_14cb0a4a8 =
                 (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"s.AsyncLoadingPrecachePriority",1);
            _Init_thread_footer(&DAT_14cb0a4b0);
          }
        }
        lVar9 = DAT_14cb0b180;
        iVar4 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
          uVar8 = 0;
        }
        else if (iVar4 == 1) {
          DVar5 = FUN_140ad26c0();
          DVar6 = GetCurrentThreadId();
          uVar8 = (ulonglong)(DVar5 != DVar6);
        }
        else {
          uVar8 = 1;
        }
        bVar10 = *(int *)(lVar9 + uVar8 * 4) != 2;
        iVar4 = 2;
        if (!bVar10 && DAT_14cb0a4a8 != (longlong *)0x0) {
          iVar4 = (**(code **)(*DAT_14cb0a4a8 + 0xb0))
                            (DAT_14cb0a4a8,bVar10 || DAT_14cb0a4a8 == (longlong *)0x0,2);
          iVar3 = 4;
          if (iVar4 < 4) {
            iVar3 = iVar4;
          }
          iVar4 = 1;
          if (1 < iVar3) {
            iVar4 = iVar3;
          }
          iVar4 = iVar4 + 1;
        }
      }
      local_168 = lVar2 + 0x650;
      local_148 = (undefined ***)0x0;
      local_138 = &PTR_LAB_14aac2750;
      local_158[0] = (code *)&LAB_143721132;
      local_130 = lVar2;
      FUN_141713140(&local_118,lVar2 + 0x658,iVar4,local_158);
      if (local_158[0] != (code *)0x0) {
        pppuVar7 = local_148;
        if (local_148 == (undefined ***)0x0) {
          pppuVar7 = &local_138;
        }
        (*(code *)(*pppuVar7)[2])();
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      if (local_108 != (undefined ***)0x0) {
        LOCK();
        piVar1 = (int *)(local_108 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)**local_108)(local_108,1);
        }
      }
    }
  }
  local_108 = (undefined ***)0x0;
  local_f8 = &PTR_LAB_14aac27b0;
  local_118 = FUN_1437218bc;
  local_148 = (undefined ***)0x0;
  local_138 = &PTR_LAB_14aac2790;
  local_158[0] = FUN_1437215a2;
  *(undefined4 *)(lVar2 + 0x68) = 2;
  local_130 = lVar2;
  local_f0 = lVar2;
  FUN_140795136(lVar2 + 0x70,local_158);
  *(undefined4 *)(lVar2 + 0xb0) = 2;
  FUN_140795136(lVar2 + 0xc0,&local_118);
  if (local_158[0] != (code *)0x0) {
    pppuVar7 = local_148;
    if (local_148 == (undefined ***)0x0) {
      pppuVar7 = &local_138;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  if (local_118 != (code *)0x0) {
    pppuVar7 = local_108;
    if (local_108 == (undefined ***)0x0) {
      pppuVar7 = &local_f8;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143721578 FUN_143721578 body=12 status=ok
// SIG undefined FUN_143721578(void)

void FUN_143721578(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143721581. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143721584 FUN_143721584 body=29 status=ok
// SIG undefined FUN_143721584(void)

undefined8 FUN_143721584(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437215a2 FUN_1437215a2 body=720 status=ok
// SIG undefined FUN_1437215a2(void)

void FUN_1437215a2(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  longlong lVar11;
  undefined1 auStack_168 [32];
  code **local_148;
  code *local_138;
  undefined4 local_130;
  undefined ***local_128;
  undefined **local_118;
  longlong local_110;
  undefined **local_f8 [2];
  undefined ***local_e8;
  undefined **local_d8;
  ulonglong local_d0;
  longlong *local_a0;
  longlong local_80;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = *param_1;
  if (((*(char *)(lVar4 + 0x5c) == '\0') && (lVar5 = *param_2, lVar5 != 0)) && (param_2[1] != 0)) {
    puVar9 = *(undefined8 **)(lVar4 + 0x658);
    uVar3 = *(undefined4 *)(puVar9 + 1);
    uVar2 = *(undefined1 *)(puVar9 + 3);
    uVar6 = *puVar9;
    memset(local_f8,0,0x90);
    FUN_144869430(local_f8);
    local_68 = 0;
    local_f8[0] = &PTR_FUN_149e1ddc0;
    local_50 = 0x7fffffffffffffff;
    local_d0 = local_d0 | 1;
    local_60 = uVar6;
    local_58 = (ulonglong)CONCAT14(uVar2,uVar3);
    FUN_1449c2eca(local_f8,1);
    lVar11 = (longlong)*(int *)(lVar4 + 0x14);
    iVar8 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x14) < iVar8) {
      do {
        lVar7 = *(longlong *)(param_2[2] + lVar11 * 8);
        if (*(char *)(lVar7 + 0x290) == '\0') {
          local_138 = (code *)0x0;
          local_130 = 0;
          local_148 = &local_138;
          FUN_1437101b0(lVar7,local_f8,lVar5,0);
          if ((local_d0 & 0x200) != 0) {
            *(undefined1 *)(lVar4 + 0x661) = 1;
            if (*(int *)(lVar4 + 0x60) != 0) {
              *(undefined1 *)(lVar4 + 0x5c) = 1;
            }
            break;
          }
          iVar8 = *(int *)(lVar4 + 0x10);
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar8);
    }
    puVar9 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *puVar9 = 0;
    puVar9[1] = 0;
    *(undefined8 *)((longlong)puVar9 + 10) = 0;
    *(undefined8 *)((longlong)puVar9 + 0x12) = 0;
    if (puVar9 != (undefined8 *)0x0) {
      LOCK();
      *(int *)((longlong)puVar9 + 0xc) = *(int *)((longlong)puVar9 + 0xc) + 1;
      UNLOCK();
    }
    lVar5 = *(longlong *)(lVar4 + 0x658);
    *(undefined8 **)(lVar4 + 0x658) = puVar9;
    if (lVar5 != 0) {
      LOCK();
      piVar1 = (int *)(lVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        FUN_144716208(lVar5);
        FUN_1400020a8(lVar5);
      }
    }
    local_f8[0] = &PTR__purecall_149e35f70;
    if (local_a0 != (longlong *)0x0) {
      if (*local_a0 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_a0);
    }
    if (local_80 != 0) {
      if (*(longlong *)(local_80 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_80);
    }
  }
  FUN_1417f2398(lVar4);
  local_e8 = (undefined ***)0x0;
  local_d8 = &PTR_LAB_14aac27f0;
  local_f8[0] = (undefined **)&LAB_143722afa;
  lVar5 = param_2[4];
  local_128 = (undefined ***)0x0;
  local_118 = &PTR_LAB_14aac27d0;
  local_138 = FUN_1437219f4;
  *(undefined4 *)(lVar4 + 0x68) = *(undefined4 *)(lVar4 + 0x648);
  local_110 = lVar4;
  local_d0 = lVar4;
  FUN_140795136(lVar4 + 0x70,&local_138);
  *(int *)(lVar4 + 0xb0) = (int)lVar5;
  FUN_140795136(lVar4 + 0xc0,local_f8);
  if (local_138 != (code *)0x0) {
    pppuVar10 = local_128;
    if (local_128 == (undefined ***)0x0) {
      pppuVar10 = &local_118;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  if (local_f8[0] != (undefined **)0x0) {
    pppuVar10 = local_e8;
    if (local_e8 == (undefined ***)0x0) {
      pppuVar10 = &local_d8;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  if ((local_40 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143721892 FUN_143721892 body=12 status=ok
// SIG undefined FUN_143721892(void)

void FUN_143721892(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372189b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372189e FUN_14372189e body=29 status=ok
// SIG undefined FUN_14372189e(void)

undefined8 FUN_14372189e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437218bc FUN_1437218bc body=239 status=ok
// SIG undefined FUN_1437218bc(void)

void FUN_1437218bc(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_d8 [32];
  longlong local_b8 [2];
  longlong *local_a8;
  longlong local_98 [4];
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *param_1;
  FUN_1417f2398(lVar2);
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14aac2850;
  local_78[0] = &LAB_143722bea;
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  local_b8[0] = 0;
  local_a8 = (longlong *)0x0;
  *(undefined4 *)(lVar2 + 0x68) = 0;
  local_50 = lVar2;
  FUN_140795136(lVar2 + 0x70,local_b8);
  *(undefined4 *)(lVar2 + 0xb0) = uVar1;
  FUN_140795136(lVar2 + 0xc0,local_78);
  if (local_b8[0] != 0) {
    plVar3 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar3 = local_98;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_78[0] != (undefined1 *)0x0) {
    pppuVar4 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar4 = &local_58;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437219ca FUN_1437219ca body=12 status=ok
// SIG undefined FUN_1437219ca(void)

void FUN_1437219ca(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437219d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1437219d6 FUN_1437219d6 body=29 status=ok
// SIG undefined FUN_1437219d6(void)

undefined8 FUN_1437219d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437219f4 FUN_1437219f4 body=4285 status=ok
// SIG undefined FUN_1437219f4(void)

void FUN_1437219f4(longlong *param_1,longlong param_2)

{
  undefined1 **ppuVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong lVar8;
  char cVar9;
  DWORD DVar10;
  DWORD DVar11;
  int iVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined ***pppuVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined1 **ppuVar21;
  bool bVar22;
  undefined1 auStack_128 [32];
  int local_108;
  undefined4 local_100;
  wchar_t *local_f8;
  byte local_e9;
  longlong local_e8;
  int *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined1 *local_c8 [2];
  undefined ***local_b8;
  undefined **local_a8;
  longlong local_a0;
  undefined1 *local_88;
  longlong local_80;
  undefined ***pppuStack_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar5 = *param_1;
  uVar13 = FUN_14001cc68(0x308,0x10);
  FUN_14009016e(uVar13,~(-1 << ((byte)DAT_14c760da4 & 0x1f)),0);
  *(undefined8 *)(lVar5 + 0x640) = uVar13;
  FUN_14002049c(uVar13,1);
  lVar19 = (longlong)*(int *)(lVar5 + 0x14);
  if (*(int *)(lVar5 + 0x14) < *(int *)(lVar5 + 0x10)) {
    local_d0 = lVar5 + 0x100;
    local_d8 = lVar5 + 0x340;
    local_e0 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
    local_e8 = param_2;
    do {
      lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x10) + lVar19 * 8);
      if (*(char *)(lVar6 + 0x290) == '\0') {
        ppuVar21 = (undefined1 **)(local_d0 + lVar19 * 0x48);
        uVar13 = *(undefined8 *)(lVar5 + 0x640);
        local_108 = *(undefined4 *)(lVar6 + 0x10c);
        local_f8 = L"TangentsRHIBuffer";
        local_100 = 0x101;
        FUN_1402b31d8(lVar6 + 0x90,&local_88,uVar13,lVar6 + 0xd0);
        if (&local_88 == ppuVar21) {
LAB_143722406:
          puVar7 = local_88;
          if (local_88 != (undefined1 *)0x0) {
            LOCK();
            puVar2 = (uint *)(local_88 + 8);
            uVar3 = *puVar2;
            *puVar2 = *puVar2 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              puVar2 = (uint *)(local_88 + 8);
              LOCK();
              uVar3 = *puVar2;
              *puVar2 = *puVar2 | 0x40000000;
              UNLOCK();
              if ((uVar3 >> 0x1e & 1) == 0) {
                local_e9 = local_88[0xd];
                plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                plVar15[1] = (longlong)puVar7;
                plVar14 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c8;
                if ((local_e9 & 2) == 0) {
                  do {
                    *plVar15 = (longlong)plVar14;
                    LOCK();
                    bVar22 = plVar14 != DAT_14ca843c0;
                    plVar16 = plVar15;
                    if (bVar22) {
                      plVar14 = DAT_14ca843c0;
                      plVar16 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar16;
                    UNLOCK();
                  } while (bVar22);
                }
                else {
                  do {
                    *plVar15 = (longlong)plVar16;
                    LOCK();
                    bVar22 = plVar16 != DAT_14ca843c8;
                    plVar14 = plVar15;
                    if (bVar22) {
                      plVar16 = DAT_14ca843c8;
                      plVar14 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar14;
                    UNLOCK();
                  } while (bVar22);
                }
              }
            }
          }
        }
        else {
          puVar7 = *ppuVar21;
          *ppuVar21 = local_88;
          local_88 = (undefined1 *)0x0;
          if (puVar7 != (undefined1 *)0x0) {
            LOCK();
            puVar2 = (uint *)(puVar7 + 8);
            uVar3 = *puVar2;
            *puVar2 = *puVar2 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              puVar2 = (uint *)(puVar7 + 8);
              LOCK();
              uVar3 = *puVar2;
              *puVar2 = *puVar2 | 0x40000000;
              UNLOCK();
              if ((uVar3 >> 0x1e & 1) == 0) {
                local_e9 = puVar7[0xd];
                plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                plVar15[1] = (longlong)puVar7;
                plVar14 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c8;
                if ((local_e9 & 2) == 0) {
                  do {
                    *plVar15 = (longlong)plVar14;
                    LOCK();
                    bVar22 = plVar14 != DAT_14ca843c0;
                    plVar16 = plVar15;
                    if (bVar22) {
                      plVar14 = DAT_14ca843c0;
                      plVar16 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar16;
                    UNLOCK();
                  } while (bVar22);
                }
                else {
                  do {
                    *plVar15 = (longlong)plVar16;
                    LOCK();
                    bVar22 = plVar16 != DAT_14ca843c8;
                    plVar14 = plVar15;
                    if (bVar22) {
                      plVar16 = DAT_14ca843c8;
                      plVar14 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar14;
                    UNLOCK();
                  } while (bVar22);
                }
              }
            }
            goto LAB_143722406;
          }
        }
        local_108 = *(int *)(lVar6 + 0x108) * *(int *)(lVar6 + 0x10c);
        local_f8 = L"TexCoordRHIBuffer";
        local_100 = 0x101;
        FUN_1402b31d8(lVar6 + 0x90,&local_88,uVar13,lVar6 + 0xe0);
        ppuVar1 = ppuVar21 + 1;
        if (ppuVar1 == &local_88) {
LAB_143722264:
          puVar7 = local_88;
          if (local_88 != (undefined1 *)0x0) {
            LOCK();
            puVar2 = (uint *)(local_88 + 8);
            uVar3 = *puVar2;
            *puVar2 = *puVar2 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              puVar2 = (uint *)(local_88 + 8);
              LOCK();
              uVar3 = *puVar2;
              *puVar2 = *puVar2 | 0x40000000;
              UNLOCK();
              if ((uVar3 >> 0x1e & 1) == 0) {
                bVar4 = local_88[0xd];
                plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                plVar15[1] = (longlong)puVar7;
                plVar14 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c8;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar15 = (longlong)plVar14;
                    LOCK();
                    bVar22 = plVar14 != DAT_14ca843c0;
                    plVar16 = plVar15;
                    if (bVar22) {
                      plVar14 = DAT_14ca843c0;
                      plVar16 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar16;
                    UNLOCK();
                  } while (bVar22);
                }
                else {
                  do {
                    *plVar15 = (longlong)plVar16;
                    LOCK();
                    bVar22 = plVar16 != DAT_14ca843c8;
                    plVar14 = plVar15;
                    if (bVar22) {
                      plVar16 = DAT_14ca843c8;
                      plVar14 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar14;
                    UNLOCK();
                  } while (bVar22);
                }
              }
            }
          }
        }
        else {
          puVar7 = *ppuVar1;
          *ppuVar1 = local_88;
          local_88 = (undefined1 *)0x0;
          if (puVar7 != (undefined1 *)0x0) {
            LOCK();
            puVar2 = (uint *)(puVar7 + 8);
            uVar3 = *puVar2;
            *puVar2 = *puVar2 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              puVar2 = (uint *)(puVar7 + 8);
              LOCK();
              uVar3 = *puVar2;
              *puVar2 = *puVar2 | 0x40000000;
              UNLOCK();
              if ((uVar3 >> 0x1e & 1) == 0) {
                bVar4 = puVar7[0xd];
                plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                plVar15[1] = (longlong)puVar7;
                plVar14 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c8;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar15 = (longlong)plVar14;
                    LOCK();
                    bVar22 = plVar14 != DAT_14ca843c0;
                    plVar16 = plVar15;
                    if (bVar22) {
                      plVar14 = DAT_14ca843c0;
                      plVar16 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar16;
                    UNLOCK();
                  } while (bVar22);
                }
                else {
                  do {
                    *plVar15 = (longlong)plVar16;
                    LOCK();
                    bVar22 = plVar16 != DAT_14ca843c8;
                    plVar14 = plVar15;
                    if (bVar22) {
                      plVar16 = DAT_14ca843c8;
                      plVar14 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar14;
                    UNLOCK();
                  } while (bVar22);
                }
              }
            }
            goto LAB_143722264;
          }
        }
        local_108 = *(undefined4 *)(lVar6 + 0x14c);
        local_f8 = L"FPositionVertexBuffer";
        local_100 = 0x101;
        FUN_1402d9c44(lVar6 + 0x118,&local_88,uVar13,lVar6 + 0x138);
        ppuVar1 = ppuVar21 + 2;
        if (ppuVar1 == &local_88) {
LAB_1437225a8:
          puVar7 = local_88;
          if (local_88 != (undefined1 *)0x0) {
            LOCK();
            puVar2 = (uint *)(local_88 + 8);
            uVar3 = *puVar2;
            *puVar2 = *puVar2 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              puVar2 = (uint *)(local_88 + 8);
              LOCK();
              uVar3 = *puVar2;
              *puVar2 = *puVar2 | 0x40000000;
              UNLOCK();
              if ((uVar3 >> 0x1e & 1) == 0) {
                bVar4 = local_88[0xd];
                plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                plVar15[1] = (longlong)puVar7;
                plVar14 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c8;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar15 = (longlong)plVar14;
                    LOCK();
                    bVar22 = plVar14 != DAT_14ca843c0;
                    plVar16 = plVar15;
                    if (bVar22) {
                      plVar14 = DAT_14ca843c0;
                      plVar16 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar16;
                    UNLOCK();
                  } while (bVar22);
                }
                else {
                  do {
                    *plVar15 = (longlong)plVar16;
                    LOCK();
                    bVar22 = plVar16 != DAT_14ca843c8;
                    plVar14 = plVar15;
                    if (bVar22) {
                      plVar16 = DAT_14ca843c8;
                      plVar14 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar14;
                    UNLOCK();
                  } while (bVar22);
                }
              }
            }
          }
        }
        else {
          puVar7 = *ppuVar1;
          *ppuVar1 = local_88;
          local_88 = (undefined1 *)0x0;
          if (puVar7 != (undefined1 *)0x0) {
            LOCK();
            puVar2 = (uint *)(puVar7 + 8);
            uVar3 = *puVar2;
            *puVar2 = *puVar2 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              puVar2 = (uint *)(puVar7 + 8);
              LOCK();
              uVar3 = *puVar2;
              *puVar2 = *puVar2 | 0x40000000;
              UNLOCK();
              if ((uVar3 >> 0x1e & 1) == 0) {
                bVar4 = puVar7[0xd];
                plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                plVar15[1] = (longlong)puVar7;
                plVar14 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c8;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar15 = (longlong)plVar14;
                    LOCK();
                    bVar22 = plVar14 != DAT_14ca843c0;
                    plVar16 = plVar15;
                    if (bVar22) {
                      plVar14 = DAT_14ca843c0;
                      plVar16 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar16;
                    UNLOCK();
                  } while (bVar22);
                }
                else {
                  do {
                    *plVar15 = (longlong)plVar16;
                    LOCK();
                    bVar22 = plVar16 != DAT_14ca843c8;
                    plVar14 = plVar15;
                    if (bVar22) {
                      plVar16 = DAT_14ca843c8;
                      plVar14 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar14;
                    UNLOCK();
                  } while (bVar22);
                }
              }
            }
            goto LAB_1437225a8;
          }
        }
        local_108 = *(undefined4 *)(lVar6 + 0x18c);
        local_f8 = L"FColorVertexBuffer";
        local_100 = 0x101;
        FUN_14052b6e2(lVar6 + 0x158,&local_88,uVar13,lVar6 + 0x170);
        ppuVar1 = ppuVar21 + 3;
        if (ppuVar1 == &local_88) {
LAB_1437224d9:
          puVar7 = local_88;
          if (local_88 != (undefined1 *)0x0) {
            LOCK();
            puVar2 = (uint *)(local_88 + 8);
            uVar3 = *puVar2;
            *puVar2 = *puVar2 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              puVar2 = (uint *)(local_88 + 8);
              LOCK();
              uVar3 = *puVar2;
              *puVar2 = *puVar2 | 0x40000000;
              UNLOCK();
              if ((uVar3 >> 0x1e & 1) == 0) {
                bVar4 = local_88[0xd];
                plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                plVar15[1] = (longlong)puVar7;
                plVar14 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c8;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar15 = (longlong)plVar14;
                    LOCK();
                    bVar22 = plVar14 != DAT_14ca843c0;
                    plVar16 = plVar15;
                    if (bVar22) {
                      plVar14 = DAT_14ca843c0;
                      plVar16 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar16;
                    UNLOCK();
                  } while (bVar22);
                }
                else {
                  do {
                    *plVar15 = (longlong)plVar16;
                    LOCK();
                    bVar22 = plVar16 != DAT_14ca843c8;
                    plVar14 = plVar15;
                    if (bVar22) {
                      plVar16 = DAT_14ca843c8;
                      plVar14 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar14;
                    UNLOCK();
                  } while (bVar22);
                }
              }
            }
          }
        }
        else {
          puVar7 = *ppuVar1;
          *ppuVar1 = local_88;
          local_88 = (undefined1 *)0x0;
          if (puVar7 != (undefined1 *)0x0) {
            LOCK();
            puVar2 = (uint *)(puVar7 + 8);
            uVar3 = *puVar2;
            *puVar2 = *puVar2 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              puVar2 = (uint *)(puVar7 + 8);
              LOCK();
              uVar3 = *puVar2;
              *puVar2 = *puVar2 | 0x40000000;
              UNLOCK();
              if ((uVar3 >> 0x1e & 1) == 0) {
                bVar4 = puVar7[0xd];
                plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                plVar15[1] = (longlong)puVar7;
                plVar14 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c8;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar15 = (longlong)plVar14;
                    LOCK();
                    bVar22 = plVar14 != DAT_14ca843c0;
                    plVar16 = plVar15;
                    if (bVar22) {
                      plVar14 = DAT_14ca843c0;
                      plVar16 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar16;
                    UNLOCK();
                  } while (bVar22);
                }
                else {
                  do {
                    *plVar15 = (longlong)plVar16;
                    LOCK();
                    bVar22 = plVar16 != DAT_14ca843c8;
                    plVar14 = plVar15;
                    if (bVar22) {
                      plVar16 = DAT_14ca843c8;
                      plVar14 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar14;
                    UNLOCK();
                  } while (bVar22);
                }
              }
            }
            goto LAB_1437224d9;
          }
        }
        FUN_1417e9bbe(lVar6 + 0x198,&local_88,uVar13);
        ppuVar1 = ppuVar21 + 4;
        if (ppuVar1 == &local_88) {
LAB_143722195:
          puVar7 = local_88;
          if (local_88 != (undefined1 *)0x0) {
            LOCK();
            puVar2 = (uint *)(local_88 + 8);
            uVar3 = *puVar2;
            *puVar2 = *puVar2 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              puVar2 = (uint *)(local_88 + 8);
              LOCK();
              uVar3 = *puVar2;
              *puVar2 = *puVar2 | 0x40000000;
              UNLOCK();
              if ((uVar3 >> 0x1e & 1) == 0) {
                bVar4 = local_88[0xd];
                plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                plVar15[1] = (longlong)puVar7;
                plVar14 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c8;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar15 = (longlong)plVar14;
                    LOCK();
                    bVar22 = plVar14 != DAT_14ca843c0;
                    plVar16 = plVar15;
                    if (bVar22) {
                      plVar14 = DAT_14ca843c0;
                      plVar16 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar16;
                    UNLOCK();
                  } while (bVar22);
                }
                else {
                  do {
                    *plVar15 = (longlong)plVar16;
                    LOCK();
                    bVar22 = plVar16 != DAT_14ca843c8;
                    plVar14 = plVar15;
                    if (bVar22) {
                      plVar16 = DAT_14ca843c8;
                      plVar14 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar14;
                    UNLOCK();
                  } while (bVar22);
                }
              }
            }
          }
        }
        else {
          puVar7 = *ppuVar1;
          *ppuVar1 = local_88;
          local_88 = (undefined1 *)0x0;
          if (puVar7 != (undefined1 *)0x0) {
            LOCK();
            puVar2 = (uint *)(puVar7 + 8);
            uVar3 = *puVar2;
            *puVar2 = *puVar2 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              puVar2 = (uint *)(puVar7 + 8);
              LOCK();
              uVar3 = *puVar2;
              *puVar2 = *puVar2 | 0x40000000;
              UNLOCK();
              if ((uVar3 >> 0x1e & 1) == 0) {
                bVar4 = puVar7[0xd];
                plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                plVar15[1] = (longlong)puVar7;
                plVar14 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c8;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar15 = (longlong)plVar14;
                    LOCK();
                    bVar22 = plVar14 != DAT_14ca843c0;
                    plVar16 = plVar15;
                    if (bVar22) {
                      plVar14 = DAT_14ca843c0;
                      plVar16 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar16;
                    UNLOCK();
                  } while (bVar22);
                }
                else {
                  do {
                    *plVar15 = (longlong)plVar16;
                    LOCK();
                    bVar22 = plVar16 != DAT_14ca843c8;
                    plVar14 = plVar15;
                    if (bVar22) {
                      plVar16 = DAT_14ca843c8;
                      plVar14 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar14;
                    UNLOCK();
                  } while (bVar22);
                }
              }
            }
            goto LAB_143722195;
          }
        }
        FUN_1417e9bbe(lVar6 + 0x1d8,&local_88,uVar13);
        ppuVar1 = ppuVar21 + 6;
        if (ppuVar1 == &local_88) {
LAB_143722333:
          puVar7 = local_88;
          if (local_88 != (undefined1 *)0x0) {
            LOCK();
            puVar2 = (uint *)(local_88 + 8);
            uVar3 = *puVar2;
            *puVar2 = *puVar2 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              puVar2 = (uint *)(local_88 + 8);
              LOCK();
              uVar3 = *puVar2;
              *puVar2 = *puVar2 | 0x40000000;
              UNLOCK();
              if ((uVar3 >> 0x1e & 1) == 0) {
                bVar4 = local_88[0xd];
                plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                plVar15[1] = (longlong)puVar7;
                plVar14 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c8;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar15 = (longlong)plVar14;
                    LOCK();
                    bVar22 = plVar14 != DAT_14ca843c0;
                    plVar16 = plVar15;
                    if (bVar22) {
                      plVar14 = DAT_14ca843c0;
                      plVar16 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar16;
                    UNLOCK();
                  } while (bVar22);
                }
                else {
                  do {
                    *plVar15 = (longlong)plVar16;
                    LOCK();
                    bVar22 = plVar16 != DAT_14ca843c8;
                    plVar14 = plVar15;
                    if (bVar22) {
                      plVar16 = DAT_14ca843c8;
                      plVar14 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar14;
                    UNLOCK();
                  } while (bVar22);
                }
              }
            }
          }
        }
        else {
          puVar7 = *ppuVar1;
          *ppuVar1 = local_88;
          local_88 = (undefined1 *)0x0;
          if (puVar7 != (undefined1 *)0x0) {
            LOCK();
            puVar2 = (uint *)(puVar7 + 8);
            uVar3 = *puVar2;
            *puVar2 = *puVar2 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              puVar2 = (uint *)(puVar7 + 8);
              LOCK();
              uVar3 = *puVar2;
              *puVar2 = *puVar2 | 0x40000000;
              UNLOCK();
              if ((uVar3 >> 0x1e & 1) == 0) {
                bVar4 = puVar7[0xd];
                plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                plVar15[1] = (longlong)puVar7;
                plVar14 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c8;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar15 = (longlong)plVar14;
                    LOCK();
                    bVar22 = plVar14 != DAT_14ca843c0;
                    plVar16 = plVar15;
                    if (bVar22) {
                      plVar14 = DAT_14ca843c0;
                      plVar16 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar16;
                    UNLOCK();
                  } while (bVar22);
                }
                else {
                  do {
                    *plVar15 = (longlong)plVar16;
                    LOCK();
                    bVar22 = plVar16 != DAT_14ca843c8;
                    plVar14 = plVar15;
                    if (bVar22) {
                      plVar16 = DAT_14ca843c8;
                      plVar14 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar14;
                    UNLOCK();
                  } while (bVar22);
                }
              }
            }
            goto LAB_143722333;
          }
        }
        if (*(longlong *)(lVar6 + 0x218) != 0) {
          FUN_1417e9bbe(*(longlong *)(lVar6 + 0x218),&local_88,uVar13);
          ppuVar1 = ppuVar21 + 5;
          if (ppuVar1 == &local_88) {
LAB_143721eac:
            puVar7 = local_88;
            if (local_88 != (undefined1 *)0x0) {
              LOCK();
              puVar2 = (uint *)(local_88 + 8);
              uVar3 = *puVar2;
              *puVar2 = *puVar2 - 1;
              UNLOCK();
              if ((uVar3 & 0x3fffffff) == 1) {
                puVar2 = (uint *)(local_88 + 8);
                LOCK();
                uVar3 = *puVar2;
                *puVar2 = *puVar2 | 0x40000000;
                UNLOCK();
                if ((uVar3 >> 0x1e & 1) == 0) {
                  bVar4 = local_88[0xd];
                  plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar15[1] = (longlong)puVar7;
                  plVar14 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c8;
                  if ((bVar4 & 2) == 0) {
                    do {
                      *plVar15 = (longlong)plVar14;
                      LOCK();
                      bVar22 = plVar14 != DAT_14ca843c0;
                      plVar16 = plVar15;
                      if (bVar22) {
                        plVar14 = DAT_14ca843c0;
                        plVar16 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar16;
                      UNLOCK();
                    } while (bVar22);
                  }
                  else {
                    do {
                      *plVar15 = (longlong)plVar16;
                      LOCK();
                      bVar22 = plVar16 != DAT_14ca843c8;
                      plVar14 = plVar15;
                      if (bVar22) {
                        plVar16 = DAT_14ca843c8;
                        plVar14 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar14;
                      UNLOCK();
                    } while (bVar22);
                  }
                }
              }
            }
          }
          else {
            puVar7 = *ppuVar1;
            *ppuVar1 = local_88;
            local_88 = (undefined1 *)0x0;
            if (puVar7 != (undefined1 *)0x0) {
              LOCK();
              puVar2 = (uint *)(puVar7 + 8);
              uVar3 = *puVar2;
              *puVar2 = *puVar2 - 1;
              UNLOCK();
              if ((uVar3 & 0x3fffffff) == 1) {
                puVar2 = (uint *)(puVar7 + 8);
                LOCK();
                uVar3 = *puVar2;
                *puVar2 = *puVar2 | 0x40000000;
                UNLOCK();
                if ((uVar3 >> 0x1e & 1) == 0) {
                  bVar4 = puVar7[0xd];
                  plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar15[1] = (longlong)puVar7;
                  plVar14 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c8;
                  if ((bVar4 & 2) == 0) {
                    do {
                      *plVar15 = (longlong)plVar14;
                      LOCK();
                      bVar22 = plVar14 != DAT_14ca843c0;
                      plVar16 = plVar15;
                      if (bVar22) {
                        plVar14 = DAT_14ca843c0;
                        plVar16 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar16;
                      UNLOCK();
                    } while (bVar22);
                  }
                  else {
                    do {
                      *plVar15 = (longlong)plVar16;
                      LOCK();
                      bVar22 = plVar16 != DAT_14ca843c8;
                      plVar14 = plVar15;
                      if (bVar22) {
                        plVar16 = DAT_14ca843c8;
                        plVar14 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar14;
                      UNLOCK();
                    } while (bVar22);
                  }
                }
              }
              goto LAB_143721eac;
            }
          }
          FUN_1417e9bbe(*(longlong *)(lVar6 + 0x218) + 0x40,&local_88,uVar13);
          ppuVar1 = ppuVar21 + 7;
          if (ppuVar1 == &local_88) {
LAB_143721fab:
            puVar7 = local_88;
            if (local_88 != (undefined1 *)0x0) {
              LOCK();
              puVar2 = (uint *)(local_88 + 8);
              uVar3 = *puVar2;
              *puVar2 = *puVar2 - 1;
              UNLOCK();
              if ((uVar3 & 0x3fffffff) == 1) {
                puVar2 = (uint *)(local_88 + 8);
                LOCK();
                uVar3 = *puVar2;
                *puVar2 = *puVar2 | 0x40000000;
                UNLOCK();
                if ((uVar3 >> 0x1e & 1) == 0) {
                  bVar4 = local_88[0xd];
                  plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar15[1] = (longlong)puVar7;
                  plVar14 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c8;
                  if ((bVar4 & 2) == 0) {
                    do {
                      *plVar15 = (longlong)plVar14;
                      LOCK();
                      bVar22 = plVar14 != DAT_14ca843c0;
                      plVar16 = plVar15;
                      if (bVar22) {
                        plVar14 = DAT_14ca843c0;
                        plVar16 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar16;
                      UNLOCK();
                    } while (bVar22);
                  }
                  else {
                    do {
                      *plVar15 = (longlong)plVar16;
                      LOCK();
                      bVar22 = plVar16 != DAT_14ca843c8;
                      plVar14 = plVar15;
                      if (bVar22) {
                        plVar16 = DAT_14ca843c8;
                        plVar14 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar14;
                      UNLOCK();
                    } while (bVar22);
                  }
                }
              }
            }
          }
          else {
            puVar7 = *ppuVar1;
            *ppuVar1 = local_88;
            local_88 = (undefined1 *)0x0;
            if (puVar7 != (undefined1 *)0x0) {
              LOCK();
              puVar2 = (uint *)(puVar7 + 8);
              uVar3 = *puVar2;
              *puVar2 = *puVar2 - 1;
              UNLOCK();
              if ((uVar3 & 0x3fffffff) == 1) {
                puVar2 = (uint *)(puVar7 + 8);
                LOCK();
                uVar3 = *puVar2;
                *puVar2 = *puVar2 | 0x40000000;
                UNLOCK();
                if ((uVar3 >> 0x1e & 1) == 0) {
                  bVar4 = puVar7[0xd];
                  plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar15[1] = (longlong)puVar7;
                  plVar14 = DAT_14ca843c0;
                  plVar16 = DAT_14ca843c8;
                  if ((bVar4 & 2) == 0) {
                    do {
                      *plVar15 = (longlong)plVar14;
                      LOCK();
                      bVar22 = plVar14 != DAT_14ca843c0;
                      plVar16 = plVar15;
                      if (bVar22) {
                        plVar14 = DAT_14ca843c0;
                        plVar16 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar16;
                      UNLOCK();
                    } while (bVar22);
                  }
                  else {
                    do {
                      *plVar15 = (longlong)plVar16;
                      LOCK();
                      bVar22 = plVar16 != DAT_14ca843c8;
                      plVar14 = plVar15;
                      if (bVar22) {
                        plVar16 = DAT_14ca843c8;
                        plVar14 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar14;
                      UNLOCK();
                    } while (bVar22);
                  }
                }
              }
              goto LAB_143721fab;
            }
          }
          FUN_1417e9bbe(*(longlong *)(lVar6 + 0x218) + 0x80,&local_88,uVar13);
          ppuVar21 = ppuVar21 + 8;
          if (ppuVar21 != &local_88) {
            puVar7 = *ppuVar21;
            *ppuVar21 = local_88;
            local_88 = (undefined1 *)0x0;
            if (puVar7 == (undefined1 *)0x0) goto LAB_143721d15;
            LOCK();
            puVar2 = (uint *)(puVar7 + 8);
            uVar3 = *puVar2;
            *puVar2 = *puVar2 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              puVar2 = (uint *)(puVar7 + 8);
              LOCK();
              uVar3 = *puVar2;
              *puVar2 = *puVar2 | 0x40000000;
              UNLOCK();
              if ((uVar3 >> 0x1e & 1) == 0) {
                bVar4 = puVar7[0xd];
                plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                plVar15[1] = (longlong)puVar7;
                plVar14 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c8;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar15 = (longlong)plVar14;
                    LOCK();
                    bVar22 = plVar14 != DAT_14ca843c0;
                    plVar16 = plVar15;
                    if (bVar22) {
                      plVar14 = DAT_14ca843c0;
                      plVar16 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar16;
                    UNLOCK();
                  } while (bVar22);
                }
                else {
                  do {
                    *plVar15 = (longlong)plVar16;
                    LOCK();
                    bVar22 = plVar16 != DAT_14ca843c8;
                    plVar14 = plVar15;
                    if (bVar22) {
                      plVar16 = DAT_14ca843c8;
                      plVar14 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar14;
                    UNLOCK();
                  } while (bVar22);
                }
              }
            }
          }
          puVar7 = local_88;
          if (local_88 != (undefined1 *)0x0) {
            LOCK();
            puVar2 = (uint *)(local_88 + 8);
            uVar3 = *puVar2;
            *puVar2 = *puVar2 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              puVar2 = (uint *)(local_88 + 8);
              LOCK();
              uVar3 = *puVar2;
              *puVar2 = *puVar2 | 0x40000000;
              UNLOCK();
              if ((uVar3 >> 0x1e & 1) == 0) {
                bVar4 = local_88[0xd];
                plVar15 = (longlong *)FUN_14001cc68(0x10,8);
                plVar15[1] = (longlong)puVar7;
                plVar14 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c8;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar15 = (longlong)plVar14;
                    LOCK();
                    bVar22 = plVar14 != DAT_14ca843c0;
                    plVar16 = plVar15;
                    if (bVar22) {
                      plVar14 = DAT_14ca843c0;
                      plVar16 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar16;
                    UNLOCK();
                  } while (bVar22);
                }
                else {
                  do {
                    *plVar15 = (longlong)plVar16;
                    LOCK();
                    bVar22 = plVar16 != DAT_14ca843c8;
                    plVar14 = plVar15;
                    if (bVar22) {
                      plVar16 = DAT_14ca843c8;
                      plVar14 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar14;
                    UNLOCK();
                  } while (bVar22);
                }
              }
            }
          }
        }
LAB_143721d15:
        param_2 = local_e8;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14ca97070) &&
           (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1)) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          plVar14 = (longlong *)
                    (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
          if (plVar14 == (longlong *)0x0) {
            DAT_14ca97068 = 0;
          }
          else {
            DAT_14ca97068 = (**(code **)(*plVar14 + 0x68))(plVar14);
          }
          _Init_thread_footer(&DAT_14ca97070);
          param_2 = local_e8;
        }
        lVar8 = DAT_14ca97068;
        bVar22 = true;
        cVar9 = DAT_14ca96da8;
        if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
          iVar12 = *local_e0;
          if (iVar12 == 0x40000002) {
            cVar9 = '\x02';
            uVar17 = 0;
          }
          else {
            bVar22 = true;
            cVar9 = '\x02';
            if ((DAT_14c86a9f8 == '\x01') && (iVar12 != 2)) {
              if (iVar12 == 1) {
                DVar10 = FUN_140ad26c0();
                DVar11 = GetCurrentThreadId();
                bVar22 = DVar10 == DVar11;
                cVar9 = DAT_14ca96da8;
              }
              else {
                bVar22 = false;
              }
            }
            uVar17 = (ulonglong)(bVar22 ^ 1);
          }
          bVar22 = *(int *)(lVar8 + uVar17 * 4) != 0;
          param_2 = local_e8;
        }
        if ((((bVar22) && (cVar9 != '\0')) && (*(longlong *)(lVar6 + 0x50) != 0)) &&
           (0 < *(int *)(lVar6 + 0x10c))) {
          FUN_147d5f5b2(lVar19 * 0x60 + local_d8,*(undefined8 *)(lVar5 + 0x640));
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < *(int *)(lVar5 + 0x10));
  }
  local_88 = *(undefined1 **)(lVar5 + 0x640);
  local_80 = 0;
  pppuStack_78 = (undefined ***)0x0;
  FUN_1417b3222(&local_80,0x62);
  lVar19 = (longlong)*(int *)(lVar5 + 0x14);
  iVar12 = *(int *)(lVar5 + 0x10);
  if (*(int *)(lVar5 + 0x14) < iVar12) {
    puVar20 = (undefined8 *)(lVar5 + lVar19 * 0x48 + 0x140);
    do {
      lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x10) + lVar19 * 8);
      if (*(char *)(lVar6 + 0x290) == '\0') {
        FUN_143682114(lVar6 + 0x90,puVar20[-8],puVar20[-7],&local_88);
        FUN_14365520e(lVar6 + 0x118,puVar20[-6],&local_88);
        FUN_143668268(lVar6 + 0x158,puVar20[-5],&local_88);
        FUN_14365f5b8(lVar6 + 0x198,puVar20[-4],&local_88);
        FUN_14365f5b8(lVar6 + 0x1d8,puVar20[-2],&local_88);
        if (*(longlong *)(lVar6 + 0x218) != 0) {
          FUN_14365f5b8(*(longlong *)(lVar6 + 0x218),puVar20[-3],&local_88);
          FUN_14365f5b8(*(longlong *)(lVar6 + 0x218) + 0x40,puVar20[-1],&local_88);
          FUN_14365f5b8(*(longlong *)(lVar6 + 0x218) + 0x80,*puVar20,&local_88);
        }
        iVar12 = *(int *)(lVar5 + 0x10);
      }
      lVar19 = lVar19 + 1;
      puVar20 = puVar20 + 9;
    } while (lVar19 < iVar12);
  }
  if ((int)pppuStack_78 != 0) {
    (**(code **)(*DAT_14ca83900 + 0x148))(DAT_14ca83900,local_88,&local_80);
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  FUN_1447850c6(*(undefined8 *)(lVar5 + 0x640));
  pppuStack_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aac2830;
  local_88 = &LAB_143722b9a;
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_14aac2810;
  local_c8[0] = &LAB_143722b4a;
  *(undefined4 *)(lVar5 + 0x68) = 1;
  local_a0 = lVar5;
  local_60 = lVar5;
  FUN_140795136(lVar5 + 0x70,local_c8);
  *(undefined4 *)(lVar5 + 0xb0) = 1;
  FUN_140795136(lVar5 + 0xc0,&local_88);
  if (local_c8[0] != (undefined1 *)0x0) {
    pppuVar18 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar18 = &local_a8;
    }
    (*(code *)(*pppuVar18)[2])();
  }
  if (local_88 != (undefined1 *)0x0) {
    pppuVar18 = pppuStack_78;
    if (pppuStack_78 == (undefined ***)0x0) {
      pppuVar18 = &local_68;
    }
    (*(code *)(*pppuVar18)[2])();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143722ad0 FUN_143722ad0 body=12 status=ok
// SIG undefined FUN_143722ad0(void)

void FUN_143722ad0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143722ad9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143722adc FUN_143722adc body=29 status=ok
// SIG undefined FUN_143722adc(void)

undefined8 FUN_143722adc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143722b20 FUN_143722b20 body=12 status=ok
// SIG undefined FUN_143722b20(void)

void FUN_143722b20(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143722b29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143722b2c FUN_143722b2c body=29 status=ok
// SIG undefined FUN_143722b2c(void)

undefined8 FUN_143722b2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143722b70 FUN_143722b70 body=12 status=ok
// SIG undefined FUN_143722b70(void)

void FUN_143722b70(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143722b79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143722b7c FUN_143722b7c body=29 status=ok
// SIG undefined FUN_143722b7c(void)

undefined8 FUN_143722b7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143722bc0 FUN_143722bc0 body=12 status=ok
// SIG undefined FUN_143722bc0(void)

void FUN_143722bc0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143722bc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143722bcc FUN_143722bcc body=29 status=ok
// SIG undefined FUN_143722bcc(void)

undefined8 FUN_143722bcc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143722c10 FUN_143722c10 body=12 status=ok
// SIG undefined FUN_143722c10(void)

void FUN_143722c10(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143722c19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143722c1c FUN_143722c1c body=29 status=ok
// SIG undefined FUN_143722c1c(void)

undefined8 FUN_143722c1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143722c3a FUN_143722c3a body=29 status=ok
// SIG undefined FUN_143722c3a(void)

undefined8 FUN_143722c3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143722c6c FUN_143722c6c body=93 status=ok
// SIG undefined FUN_143722c6c(void)

void FUN_143722c6c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aac28e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aac2870;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143722cca FUN_143722cca body=93 status=ok
// SIG undefined FUN_143722cca(void)

void FUN_143722cca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aac28e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aac2870;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143722d28 FUN_143722d28 body=126 status=ok
// SIG undefined FUN_143722d28(void)

void FUN_143722d28(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aac28e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aac2870;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143722d97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143722dfe FUN_143722dfe body=12 status=ok
// SIG undefined FUN_143722dfe(void)

void FUN_143722dfe(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143722e07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143722e0a FUN_143722e0a body=29 status=ok
// SIG undefined FUN_143722e0a(void)

undefined8 FUN_143722e0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143722e34 FUN_143722e34 body=29 status=ok
// SIG undefined FUN_143722e34(void)

undefined8 FUN_143722e34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143722e66 FUN_143722e66 body=93 status=ok
// SIG undefined FUN_143722e66(void)

void FUN_143722e66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e1c150;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aac2a30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143722ec4 FUN_143722ec4 body=93 status=ok
// SIG undefined FUN_143722ec4(void)

void FUN_143722ec4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e1c150;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aac2a30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143722f22 FUN_143722f22 body=126 status=ok
// SIG undefined FUN_143722f22(void)

void FUN_143722f22(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e1c150;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aac2a30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143722f91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143722faa FUN_143722faa body=20 status=ok
// SIG undefined FUN_143722faa(void)

undefined1 FUN_143722faa(longlong param_1)

{
  FUN_143722fbe(param_1 + 0x18);
  return 1;
}



// FUNCTION 143722fbe FUN_143722fbe body=73 status=ok
// SIG undefined FUN_143722fbe(void)

void FUN_143722fbe(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x620));
  *(undefined1 *)(lVar1 + 0x648) = 1;
  FUN_1403d43ee(lVar1 + 0x650,0);
  if ((LPCRITICAL_SECTION)(lVar1 + 0x620) != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143722ff9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x620));
    return;
  }
  return;
}



// FUNCTION 143723008 FUN_143723008 body=29 status=ok
// SIG undefined FUN_143723008(void)

undefined8 FUN_143723008(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372303a FUN_14372303a body=93 status=ok
// SIG undefined FUN_14372303a(void)

void FUN_14372303a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aac2aa0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143723098 FUN_143723098 body=93 status=ok
// SIG undefined FUN_143723098(void)

void FUN_143723098(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aac2aa0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1437230f6 FUN_1437230f6 body=126 status=ok
// SIG undefined FUN_1437230f6(void)

void FUN_1437230f6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e063e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aac2aa0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143723165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143723174 FUN_143723174 body=32 status=ok
// SIG undefined FUN_143723174(void)

void FUN_143723174(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = FUN_146888610(param_2);
  FUN_147d5f9dc(uVar1,uVar2);
  return;
}



// FUNCTION 143723194 FUN_143723194 body=35 status=ok
// SIG undefined FUN_143723194(void)

undefined4 FUN_143723194(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = FUN_146888610(param_2);
  FUN_147d5f9dc(uVar1,uVar2);
  return 1;
}



// FUNCTION 1437231b8 FUN_1437231b8 body=133 status=ok
// SIG undefined FUN_1437231b8(void)

void FUN_1437231b8(void)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_30,7);
  local_30 = 0;
  local_28 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_30,5);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014372322e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x328))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 14372323e FUN_14372323e body=282 status=ok
// SIG undefined FUN_14372323e(void)

undefined8 * FUN_14372323e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14371f534);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143723358 FUN_143723358 body=279 status=ok
// SIG undefined FUN_143723358(void)

void FUN_143723358(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == 0) {
    local_38 = 0;
    local_30 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_38,7);
    local_38 = 0;
    local_30 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_38,5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  local_38 = 0;
  local_30 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_38,7);
  local_38 = 0;
  local_30 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_38,5);
  (**(code **)(*DAT_14ca83900 + 0x328))();
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372349d FUN_14372349d body=61 status=ok
// SIG undefined FUN_14372349d(void)

void FUN_14372349d(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1437234da FUN_1437234da body=261 status=ok
// SIG undefined FUN_1437234da(void)

void FUN_1437234da(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
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
    uVar5 = lVar4 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar7 & (uVar5 + uVar7) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1437235e0 FUN_1437235e0 body=440 status=ok
// SIG undefined FUN_1437235e0(void)

void FUN_1437235e0(longlong *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar3 = *param_2;
  lVar4 = *param_1;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar6 = *piVar1;
  if (iVar6 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar6 = *piVar1;
  }
  if ((iVar6 == 0x60000000) || (iVar6 == 0)) {
    *piVar1 = 0x40000002;
  }
  plVar8 = (longlong *)param_1[1];
  lVar7 = *plVar8;
  lVar12 = (longlong)iVar3 * 0x70;
  lVar13 = (longlong)*(int *)(lVar7 + lVar12);
  if (*(int *)(lVar7 + lVar12) < *(int *)(lVar7 + 4 + lVar12)) {
    lVar10 = lVar13 * 0xa8;
    do {
      lVar5 = **(longlong **)(lVar7 + 8 + lVar12);
      if (*(longlong *)(lVar5 + lVar10) != 0) {
        cVar2 = *(char *)(lVar5 + 0x84 + lVar10);
        if (cVar2 == '\x03') {
          lVar9 = *(longlong *)(lVar4 + 0x1f8);
          uVar11 = *(undefined4 *)(lVar4 + 0x200);
        }
        else if (cVar2 == '\x02') {
          lVar9 = *(longlong *)(lVar4 + 0x1e8);
          uVar11 = *(undefined4 *)(lVar4 + 0x1f0);
        }
        else if (cVar2 == '\x01') {
          uVar11 = 0x49;
          lVar9 = lVar4 + 0xc4;
        }
        else {
          uVar11 = 0xffffffff;
          lVar9 = 0;
        }
        FUN_1447acc2e(lVar5 + lVar10,lVar9,uVar11,lVar4 + 0x208,*(undefined1 *)param_1[2],
                      lVar7 + lVar12 + 0x20);
        plVar8 = (longlong *)param_1[1];
        if (*(char *)(lVar5 + 0x7b + lVar10) != *(char *)(lVar5 + 0x7a + lVar10)) {
          lVar7 = *plVar8 + lVar12;
          iVar3 = *(int *)(lVar7 + 0x18);
          *(uint *)(lVar7 + 0x18) = iVar3 + 1U;
          if (*(uint *)(lVar7 + 0x1c) < iVar3 + 1U) {
            FUN_1446f48e2((longlong *)(lVar7 + 0x10),iVar3);
          }
          *(int *)(*(longlong *)(lVar7 + 0x10) + (longlong)iVar3 * 4) = (int)lVar13;
          plVar8 = (longlong *)param_1[1];
        }
      }
      lVar13 = lVar13 + 1;
      lVar7 = *plVar8;
      lVar10 = lVar10 + 0xa8;
    } while (lVar13 < *(int *)(lVar7 + 4 + lVar12));
  }
  if ((iVar6 == 0x60000000) || (iVar6 == 0)) {
    *piVar1 = iVar6;
  }
  return;
}



// FUNCTION 143723798 FUN_143723798 body=222 status=ok
// SIG undefined FUN_143723798(void)

void FUN_143723798(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    uVar2 = (ulonglong)param_2 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x125) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar5 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar5,0x70,8);
  }
  return;
}



// FUNCTION 143723876 FUN_143723876 body=4481 status=ok
// SIG undefined FUN_143723876(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143723876(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 local_9c;
  code *local_98;
  code *local_90;
  undefined8 local_88;
  undefined **local_78;
  code *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1400b22c2(&local_98,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_98,&DAT_14cb09db0);
  if (cVar2 == '\0') {
    _DAT_14cb09db0 = 0;
    uRam000000014cb09db8 = 0;
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&DAT_14cb09dc0,L"FStaticMeshStaticLightingMesh_IntersectLightRay",1);
  local_98 = (code *)0x14a1e3c88;
  local_90 = (code *)CONCAT35(local_90._5_3_,10);
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb09dc8 = (ulonglong)uVar3;
  local_98 = (code *)0x0;
  local_90 = (code *)((ulonglong)local_90 & 0xffffffff00000000);
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_149e062c0;
  *(code **)(local_98 + 0x18) = FUN_14371977b;
  local_b8 = (code **)((ulonglong)local_b8._4_4_ << 0x20);
  FUN_14152bcb8(&DAT_14cb09dd0,L"ToggleShadowIndexBuffers",
                L"Render static meshes with an optimized shadow index buffer that minimizes unique vertices."
                ,&local_98);
  if ((int)local_90 == 0) {
LAB_1437239fc:
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
    goto LAB_1437239fc;
  }
  atexit(FUN_1437197d9);
  local_b8 = (code **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb09de0,L"r.PSOPrecache.StaticMeshComponentPSOPrecachePriority",
                &DAT_14cb09df0,
                L"Static Mesh component PSO precache priority level.\n 0. Static Mesh component\'s PSO precache requests are set to high priority (default)\n 1. Static Mesh component\'s PSO precache requests are set to highest priority"
               );
  atexit(FUN_14371981e);
  local_98 = (code *)0x0;
  local_90._0_4_ = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_14a1e1a40;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_14a1e19d0;
  *(code **)(local_98 + 0x18) = FUN_147d5b571;
  local_b8 = (code **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14156bb80(&DAT_14cb09df8,L"r.TogglePreCulledIndexBuffers",
                L"Toggles use of preculled index buffers from the command \'PreCullIndexBuffers\'",
                &local_98);
  if ((int)local_90 == 0) {
LAB_143723b17:
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
    goto LAB_143723b17;
  }
  atexit(FUN_143719863);
  local_98 = (code *)0x0;
  local_90._0_4_ = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_149e062c0;
  *(code **)(local_98 + 0x18) = FUN_1437198a8;
  local_b8 = (code **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14152bcb8(&DAT_14cb09e08,L"ToggleReversedIndexBuffers",
                L"Render static meshes with negative transform determinants using a reversed index buffer."
                ,&local_98);
  if ((int)local_90 == 0) {
LAB_143723bf5:
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
    goto LAB_143723bf5;
  }
  atexit(FUN_143719906);
  local_98 = (code *)0x0;
  local_90._0_4_ = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_14aac1ea0;
  local_9c = 1;
  local_b8 = (code **)CONCAT44(local_b8._4_4_,0x60);
  FUN_14078dbce(&DAT_14cb09e18,L"r.Nanite",&local_9c,L"Render static meshes using Nanite.");
  (**(code **)(*DAT_14cb09e20 + 200))(DAT_14cb09e20,&local_98);
  if ((int)local_90 == 0) {
LAB_143723cf2:
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
    goto LAB_143723cf2;
  }
  atexit(FUN_14371994b);
  local_98 = (code *)0x0;
  local_90._0_4_ = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_14aac1f10;
  uStack_b0 = CONCAT44(uStack_b0._4_4_,0x60);
  local_b8 = &local_98;
  FUN_141703554(&DAT_14cb09e30,L"r.Nanite.MaterialOverrides",&DAT_14c761bc8,
                L"Enable support for Nanite specific material overrides.");
  if ((int)local_90 == 0) {
LAB_143723dd1:
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
    goto LAB_143723dd1;
  }
  atexit(FUN_143719990);
  local_98 = (code *)0x0;
  local_90._0_4_ = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_14aac1f80;
  uStack_b0 = CONCAT44(uStack_b0._4_4_,0x60);
  local_b8 = &local_98;
  FUN_141703554(&DAT_14cb09e48,L"r.Nanite.ProxyRenderMode",&DAT_14cb09e40,
                L"Render proxy meshes if Nanite is unsupported.\n 0: Fall back to rendering Nanite proxy meshes if Nanite is unsupported. (default)\n 1: Disable rendering if Nanite is enabled on a mesh but is unsupported.\n 2: Disable rendering if Nanite is enabled on a mesh but is unsupported, except for static mesh editor toggle."
               );
  if ((int)local_90 == 0) {
LAB_143723eb0:
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
    goto LAB_143723eb0;
  }
  atexit(FUN_1437199d5);
  local_98 = (code *)0x0;
  local_90._0_4_ = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_149e00260;
  *(code **)(local_98 + 0x18) = FUN_143719a1a;
  local_b8 = (code **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_1415c7246(&DAT_14cb09e58,L"ToggleForceDefaultMaterial",
                L"Render all meshes with the default material.",&local_98);
  if ((int)local_90 == 0) {
LAB_143723f9c:
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
    goto LAB_143723f9c;
  }
  atexit(FUN_143719b79);
  local_98._0_4_ = 1;
  local_b8 = (code **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cb09e68,L"r.RayTracing.Geometry.StaticMeshes",&local_98,
                L"Include static meshes in ray tracing effects (default = 1 (static meshes enabled in ray tracing))"
               );
  atexit(FUN_143719bbe);
  local_98 = (code *)CONCAT44(local_98._4_4_,1);
  local_b8 = (code **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cb09e80,L"r.RayTracing.Geometry.StaticMeshes.WPO",&local_98,
                L"World position offset evaluation for static meshes with EvaluateWPO enabled in ray tracing effects.\n 0: static meshes with world position offset hidden in ray tracing.\n 1: static meshes with world position offset visible in ray tracing, WPO evaluation enabled (default).\n 2: static meshes with world position offset visible in ray tracing, WPO evaluation disabled."
               );
  atexit(FUN_143719c03);
  local_98 = (code *)0x0;
  local_90._0_4_ = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_14aac1ff0;
  FUN_141253d16(&DAT_14cb09e98,&local_98);
  if ((int)local_90 != 0) {
    if (local_98 == (code *)0x0) goto LAB_1437240d9;
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1437240d9:
  local_98._0_4_ = 1;
  local_b8 = (code **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cb09eb0,L"r.RayTracing.Geometry.StaticMeshes.WPO.Culling",&local_98,
                L"Enable culling for WPO evaluation for static meshes in ray tracing (default = 1 (Culling enabled))"
               );
  atexit(FUN_143719c48);
  local_98 = (code *)CONCAT44(local_98._4_4_,0x463b8000);
  local_b8 = (code **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_140a6b41e(&DAT_14cb09ec8,L"r.RayTracing.Geometry.StaticMeshes.WPO.CullingRadius",&local_98,
                L"Do not evaluate world position offset for static meshes outside of this radius in ray tracing effects (default = 12000 (120m))"
               );
  atexit(FUN_143719c8d);
  uStack_b0 = 0;
  uStack_a8 = 0;
  local_b8 = (code **)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aabe1f0,1,&PTR_FUN_14aabe1c0);
  DAT_14cb09f18 = 0;
  DAT_14cb09f20 = 0;
  atexit(FUN_14371acad);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_1437203ca;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cb09f90,6,&local_98);
  local_90 = FUN_145ef8032;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb0a0b0,&local_98);
  local_90 = FUN_145e05d00;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb0a1d8,&local_98);
  local_90 = FUN_1460abbd4;
  local_98 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb0a300,&local_98);
  local_98 = (code *)0x14aabe348;
  local_90._0_5_ = 9;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb0a8c0 = (ulonglong)uVar3;
  local_98 = (code *)0x14aabe352;
  local_90._0_5_ = 0xd;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb0a8c8 = (ulonglong)uVar3;
  local_98 = (code *)0x14aabe360;
  local_90._0_5_ = 0xc;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb0a8d0 = (ulonglong)uVar3;
  local_98 = (code *)0x14aabe36d;
  local_90 = (code *)CONCAT35(local_90._5_3_,0xd);
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb0a8d8 = (ulonglong)uVar3;
  local_b8 = (code **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb0a310,L"s.StreamableDelegateDelayFrames",&DAT_14c761ba8,
                L"Number of frames to delay StreamableManager delegates ");
  atexit(FUN_14371adaf);
  local_b8 = (code **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb0a320,L"s.StreamableFlushAllAsyncLoadRequestsOnWait",&DAT_14cb0a330,
                L"Flush async loading without a specific request ID when waiting on streamable handles."
               );
  atexit(FUN_14371adf4);
  local_b8 = (code **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb0a338,L"s.StreamableStripDebugNameInShipping",&DAT_14cb0a348,
                L"Whether to strip the bundle names DebugName when changing bundle. Saves memory when disabled, provides more debug information when enabled."
               );
  atexit(FUN_14371ae39);
  FUN_140056680(&DAT_14cb0a350,L"Preloading");
  atexit((_func_5014 *)&LAB_14371ae7e);
  FUN_140056680(&DAT_14cb0a360,L"LoadAssetList");
  atexit((_func_5014 *)&LAB_14371ae8f);
  FUN_140056680(&DAT_14cb0a370,L"CreateCombinedHandle");
  atexit((_func_5014 *)&LAB_14371aea0);
  uStack_a8 = 0;
  local_b8 = (code **)0x0;
  uStack_b0 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aabf000,1,0);
  local_b8 = (code **)CONCAT44(local_b8._4_4_,0x40);
  FUN_141471170(&DAT_14cb0a3b0,L"r.Streaming.NoRefLODBiasQualityLevel",&DAT_14c761bac,
                L"The quality level for the no-ref mesh streaming LOD bias");
  atexit(FUN_14371bfe7);
  uStack_b0 = 0;
  uStack_a8 = 0;
  local_b8 = (code **)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aabf700,1,&PTR_FUN_14aabf6d0);
  local_98._0_4_ = 1;
  local_b8._0_4_ = 0x40;
  FUN_14078dbce(&DAT_14cb0a3f0,L"r.Streaming.gbx.MeshesCountAsNeverStream",&local_98,
                L"When zero, the default behavior that subtracts streamed meshes from the available pool is disabled."
               );
  atexit(FUN_14371c1f0);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cb0a408,L"r.Streaming.DeferredRemoveDynamicInstances",&DAT_14c761bb0,
                L"Whether to defer removing components from the dynamic instance manager to avoid stalling the game thread on component deregistration."
               );
  atexit(FUN_14371c235);
  local_b8._0_4_ = 0;
  FUN_14153156c(&DAT_14cb0a418,L"r.Streaming.gbx.GbxAllowIncrementalUpdatesForcedCompletion",
                &DAT_14c761bb4,
                L"Allowing forced completion might cause hitches and spikes while processing incremental streaming."
               );
  atexit(FUN_14371c27a);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cb0a428,L"r.Streaming.gbx.MaxComponentsPerIncrementalUpdate",&DAT_14cb0a438,
                L"Maximum number of Components processed for incremental updates. Zero or negative value will process all components in one go."
               );
  atexit(FUN_14371c2bf);
  DAT_14cb0a918 = 0;
  _DAT_14cb0a920 = 0;
  _DAT_14cb0a928 = 2;
  atexit(FUN_14371c424);
  DAT_14cb0a930 = 0;
  _DAT_14cb0a938 = 0;
  _DAT_14cb0a940 = 2;
  atexit(FUN_14371c455);
  DAT_14cb0a8e8 = 0;
  _DAT_14cb0a8f0 = 0;
  _DAT_14cb0a8f8 = 2;
  atexit(FUN_14371c486);
  DAT_14cb0a900 = 0;
  _DAT_14cb0a908 = 0;
  _DAT_14cb0a910 = 2;
  atexit(FUN_14371c4b7);
  local_b8._0_4_ = 0;
  FUN_1415c789c(&DAT_14cb0a440,L"r.Streaming.FlushTimeOut",&DAT_14c761bb8,
                L"Time before we timeout when flushing streaming (default=3)");
  atexit(FUN_14371c530);
  local_98._0_4_ = 0;
  local_b8 = (code **)CONCAT44(local_b8._4_4_,1);
  FUN_14078dbce(&DAT_14cb0a450,L"r.Streaming.StressTest.ExtraAsyncLatency",&local_98,
                L"An extra latency in milliseconds for each async task when doing the stress test.")
  ;
  atexit(FUN_14371c575);
  uStack_a8 = 0;
  local_b8 = (code **)0x0;
  uStack_b0 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aac04e0,1,0);
  local_b8 = (code **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb0a488,L"r.Streaming.MaxReferenceChecksBeforeStreamOut",&DAT_14c761bc4,
                L"Number of times the engine wait for references to be released before forcing streamout. (default=2)"
               );
  atexit(FUN_14371cc0f);
  local_98._0_4_ = 1;
  local_b8 = (code **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cb0a4b8,L"r.Streaming.OverlapAssetAndLevelTicks",&local_98,
                L"Ticks render asset streaming info on a high priority task thread while ticking levels on GT"
               );
  atexit(FUN_14371d1c1);
  local_98._0_4_ = 0;
  local_b8 = (code **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cb0a4d0,L"r.Streaming.AllowFastForceResident",&local_98,
                L"Whether it is allowed to load in missing mips for fast-force-resident assets ASAP. Useful to accelerate force-resident process but risks disturbing streaming metric calculation. Fast-force-resident mips can\'t be sacrificed even when overbudget so use with caution."
               );
  atexit(FUN_14371d206);
  local_b8 = (code **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb0a4e8,L"r.Streaming.AllowParallelStreamingRenderAssets",&DAT_14cb0a4f8,
                L"Whether it is allowed to do UpdateStreamingRenderAssets with a ParallelFor to use more cores."
               );
  atexit(FUN_14371d24b);
  local_b8 = (code **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb0a500,L"r.Streaming.ParallelRenderAssetsNumWorkgroups",&DAT_14c761bbc,
                L"How many workgroups we want to use for ParellelRenderAsset updates. Splits the work up a bit more so we don\'t get as many waits. Though adds overhead to GameThread if too high."
               );
  atexit(FUN_14371d290);
  local_98._0_4_ = 0;
  local_b8 = (code **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cb0a510,L"r.Streaming.SyncStatesWhenBlocking",&local_98,
                L"If true, SyncStates will be called to fully update async states before flushing outstanding streaming requests. Used by Movie Render Queue to ensure all streaming requests are handled each frame to avoid pop-in."
               );
  atexit(FUN_14371d2d5);
  local_98._0_4_ = 1;
  local_b8 = (code **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cb0a528,L"r.Streaming.FlushDeferredMipLevelChangeCallbacksBeforeGC",&local_98
                ,L"Whether to flush deferred mip level change callbacks before GC.");
  atexit(FUN_14371d31a);
  local_b8 = (code **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb0a540,L"r.Streaming.EnableStrippingDuplicatePrimitiveComponent",
                &DAT_14c761bc0,
                L"Move UPrimitiveComponent from static instances to dynamic component manager when primitive is updated."
               );
  atexit(FUN_14371d35f);
  local_98._0_4_ = 1;
  local_b8 = (code **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cb0a550,L"r.Streaming.ProcessAddedRenderAssetsAfterAsyncWork",&local_98,
                L"Whether to call ProcessAddedRenderAssets in subsqequent UpdateResourceStreaming stages after Async work has completed."
               );
  atexit(FUN_14371d3a4);
  local_b8 = (code **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cb0a568,L"gbx.streaming.WaterInfoStreamingFactor",&DAT_14c761bcc,
                L"Lower values makes water info texture load less aggressively.");
  atexit(FUN_14371d3e9);
  local_98._0_4_ = 0;
  local_b8._0_4_ = 0x1040;
  FUN_14078dbce(&DAT_14cb0a630,L"r.Streaming.AmortizeCPUToGPUCopy",&local_98,
                L"If set and r.Streaming.MaxNumTexturesToStreamPerFrame > 0, limit the number of 2D textures streamed from CPU memory to GPU memory each frame"
               );
  atexit(FUN_14371e98e);
  local_98._0_4_ = 0;
  local_b8._0_4_ = 0x1040;
  FUN_14078dbce(&DAT_14cb0a648,L"r.Streaming.MaxNumTexturesToStreamPerFrame",&local_98,
                L"Maximum number of 2D textures allowed to stream from CPU memory to GPU memory each frame. <= 0 means no limit. This has no effect if r.Streaming.AmortizeCPUToGPUCopy is not set"
               );
  atexit(FUN_14371e9d3);
  local_98 = (code *)CONCAT44(local_98._4_4_,1);
  local_b8 = (code **)((ulonglong)local_b8._4_4_ << 0x20);
  FUN_14078dbce(&DAT_14cb0a660,L"r.Streaming.UseBackgroundThreadPool",&local_98,
                L"If true, use the background thread pool for mip calculations.");
  atexit(FUN_14371ea18);
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437249f8 FUN_1437249f8 body=69 status=ok
// SIG undefined FUN_1437249f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437249f8(void)

{
  _DAT_14cb0a958 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143724a3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a960,1);
  return;
}



// FUNCTION 143724a3d FUN_143724a3d body=69 status=ok
// SIG undefined FUN_143724a3d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143724a3d(void)

{
  _DAT_14cb0a968 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143724a7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a970,1);
  return;
}



// FUNCTION 143724a82 FUN_143724a82 body=2409 status=ok
// SIG undefined FUN_143724a82(void)

undefined8 FUN_143724a82(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  size_t _Size;
  ulonglong uVar5;
  undefined4 uVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong *plVar9;
  void *_Dst;
  longlong *plVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  int iVar19;
  ulonglong *puVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  void *_Src;
  undefined8 *puVar24;
  bool bVar25;
  undefined1 auStack_128 [32];
  code **local_108;
  uint local_100;
  code **local_f8;
  undefined1 local_f0;
  ulonglong *local_e8;
  longlong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  code *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint local_8c;
  undefined4 local_88;
  uint uStack_84;
  uint uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined8 local_78;
  ulonglong *local_70;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  uVar13 = local_78;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar21 = *(longlong *)(param_2 + 8);
  local_d8 = (ulonglong)*(uint *)(lVar21 + 0x70);
  lVar17 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (longlong)*(int *)(param_1 + 0x14) * 8);
  uStack_7a = *(undefined2 *)(lVar17 + 0x4c);
  uStack_80 = (uint)*(ushort *)(lVar17 + 0x4a);
  local_8c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_a8 = *(code **)(lVar21 + 0x88);
  local_88 = *(undefined4 *)(*(longlong *)(lVar21 + 0x50) + 0x10);
  local_78._6_2_ = SUB82(uVar13,6);
  local_78._0_6_ = CONCAT24(0xff00,(uint)*(byte *)(lVar21 + 0x84) << 0x18);
  uStack_84 = (uint)*(ushort *)(lVar17 + 0x48);
  uStack_7c = 1;
  local_78._0_3_ = CONCAT21(0x101,*(undefined1 *)(param_1 + 0xe));
  local_a0 = 1;
  local_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  local_68 = L"FinalizeMips";
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uVar6 = FUN_1431edf91(local_a8,0);
  local_70 = (ulonglong *)CONCAT44(local_70._4_4_,uVar6);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_a8);
  local_e8 = (ulonglong *)(param_1 + 0x20);
  if (local_e8 == &local_b0) {
LAB_143724c19:
    uVar23 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar12 = (uint *)(local_b0 + 8);
      uVar15 = *puVar12;
      *puVar12 = *puVar12 - 1;
      UNLOCK();
      if ((uVar15 & 0x3fffffff) == 1) {
        puVar12 = (uint *)(local_b0 + 8);
        LOCK();
        uVar15 = *puVar12;
        *puVar12 = *puVar12 | 0x40000000;
        UNLOCK();
        if ((uVar15 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_b0 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = uVar23;
          plVar14 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar14;
              LOCK();
              bVar25 = plVar14 != DAT_14ca843c0;
              plVar10 = plVar9;
              if (bVar25) {
                plVar14 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar25);
          }
          else {
            do {
              *plVar9 = (longlong)plVar10;
              LOCK();
              bVar25 = plVar10 != DAT_14ca843c8;
              plVar14 = plVar9;
              if (bVar25) {
                plVar10 = DAT_14ca843c8;
                plVar14 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar14;
              UNLOCK();
            } while (bVar25);
          }
        }
      }
    }
  }
  else {
    uVar23 = *local_e8;
    *local_e8 = local_b0;
    local_b0 = 0;
    if (uVar23 != 0) {
      LOCK();
      puVar12 = (uint *)(uVar23 + 8);
      uVar15 = *puVar12;
      *puVar12 = *puVar12 - 1;
      UNLOCK();
      if ((uVar15 & 0x3fffffff) == 1) {
        puVar12 = (uint *)(uVar23 + 8);
        LOCK();
        uVar15 = *puVar12;
        *puVar12 = *puVar12 | 0x40000000;
        UNLOCK();
        if ((uVar15 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(uVar23 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = uVar23;
          plVar14 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar14;
              LOCK();
              bVar25 = plVar14 != DAT_14ca843c0;
              plVar10 = plVar9;
              if (bVar25) {
                plVar14 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar25);
          }
          else {
            do {
              *plVar9 = (longlong)plVar10;
              LOCK();
              bVar25 = plVar10 != DAT_14ca843c8;
              plVar14 = plVar9;
              if (bVar25) {
                plVar10 = DAT_14ca843c8;
                plVar14 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar14;
              UNLOCK();
            } while (bVar25);
          }
        }
      }
      goto LAB_143724c19;
    }
  }
  local_b0 = local_b0 & 0xffffffffffffff00;
  lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar19 = *(int *)(lVar21 + 0xc60);
  puVar20 = local_e8;
  local_e0 = param_2;
  if (DAT_14c86a9fc == 0) {
    if (iVar19 != 2) {
      if (iVar19 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        bVar25 = DVar7 == DVar8;
      }
      else {
        bVar25 = iVar19 == 0x10;
      }
      puVar20 = local_e8;
      if (!bVar25) goto LAB_143724d09;
    }
  }
  else if (iVar19 != 0x10) {
LAB_143724d09:
    puVar20 = local_e8;
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar19 = *(int *)(lVar21 + 0xc60), iVar19 == 2))
      goto LAB_143724caf;
      if (iVar19 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_143724caf;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar12 = (uint *)*puVar2;
      if (puVar12 != (uint *)0x0) goto LAB_143725083;
      while( true ) {
        uVar15 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar15 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar15 | 1;
          __tlregdtor(&LAB_14372c6e3);
        }
        lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar11 = *(undefined4 **)(lVar21 + 0x310);
        *(undefined8 *)(lVar21 + 0x310) = 0;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar11 = 0xffffffff;
        *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        FUN_140217a48(puVar2);
        puVar12 = (uint *)*puVar2;
LAB_143725083:
        puVar24 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar18 = (uint *)(puVar24 + 0x18);
        uVar15 = puVar12[0x12];
        if (puVar18 <= puVar12 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
          LOCK();
          uVar3 = *puVar12;
          *puVar12 = *puVar12 + uVar15 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar15) != 0xffffffff) break;
          puVar12 = (uint *)*puVar2;
          *puVar12 = 0xffffffff;
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar2 = puVar12;
          puVar24 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar24 + 0x18);
          uVar15 = 0;
          if (puVar18 <= puVar12 + 0x4000) {
            uVar15 = 1;
            goto LAB_143725105;
          }
        }
      }
      uVar15 = uVar15 + 1;
LAB_143725105:
      *(uint **)(puVar12 + 0x10) = puVar18;
      puVar12[0x12] = uVar15;
      iVar19 = 0;
      FUN_1447247dc(puVar24,0);
      *puVar24 = &PTR_FUN_14aace588;
      puVar24[0x15] = local_e0;
      puVar24[0x16] = param_1;
      puVar24[0x17] = &local_b0;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar15 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
          uVar23 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
          iVar19 = 0;
        }
        else {
          uVar23 = 2;
        }
      }
      else {
        iVar19 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar23 = 5;
      }
      if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
      }
      puVar24[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar24[9] = puVar24;
      puVar24[10] = puVar24;
      lVar21 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar21 == 0) {
        uVar5 = 1;
        if ((char)uVar23 != '\x06') {
          uVar5 = uVar23;
        }
        uVar23 = uVar5;
        uVar13 = 0;
      }
      else {
        if ((char)uVar23 == '\x06') {
          uVar23 = *(ulonglong *)(lVar21 + 0x38) >> 0x3b;
        }
        uVar13 = *(undefined8 *)(lVar21 + 0x30);
      }
      puVar24[0xf] = uVar13;
      puVar24[0x10] = uVar23 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar24 + 0x1c) = iVar19;
      if (puVar24 == (undefined8 *)0x0) {
        local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
        UNLOCK();
        local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
        FUN_1447439e4(puVar24);
        LOCK();
        piVar1 = (int *)(puVar24 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar24)(puVar24,1);
        }
      }
    }
    else {
      uStack_98 = 0;
      uStack_94 = 0;
      local_88 = 0x4aace520;
      uStack_84 = 1;
      uStack_80 = (uint)param_2;
      uStack_7c = (undefined2)((ulonglong)param_2 >> 0x20);
      uStack_7a = (undefined2)((ulonglong)param_2 >> 0x30);
      local_a8 = FUN_14372c7c0;
      local_108 = &local_a8;
      local_78 = param_1;
      local_70 = &local_b0;
      FUN_14005a792(&DAT_14ca9a440,L"FCopySharedMipsForTexture2DArray",&DAT_14cb0b0c0);
      if (local_a8 != (code *)0x0) {
        plVar14 = (longlong *)CONCAT44(uStack_94,uStack_98);
        if ((longlong *)CONCAT44(uStack_94,uStack_98) == (longlong *)0x0) {
          plVar14 = (longlong *)&local_88;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
    }
    goto LAB_143724dc4;
  }
LAB_143724caf:
  lVar21 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x10);
  lVar17 = 0;
  if ((lVar21 != 0) && (*(char *)(lVar21 + 0x52) == '\x01')) {
    lVar17 = lVar21;
  }
  FUN_1406a1459(&DAT_14ca85100,lVar17,*puVar20);
LAB_143724dc4:
  puVar20 = local_e8;
  lVar21 = (longlong)*(int *)(param_1 + 0x14);
  iVar19 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x14) < iVar19) {
    lVar17 = param_1 + 0x28;
    lVar22 = param_1 + 0xb0;
    uVar23 = local_d8;
    local_d0 = lVar22;
    local_c8 = lVar17;
    local_c0 = param_1;
    do {
      lVar16 = *(longlong *)(param_1 + 0xa0);
      if (*(longlong *)(param_1 + 0xa0) == 0) {
        lVar16 = lVar17;
      }
      _Src = *(void **)(lVar16 + lVar21 * 8);
      lVar16 = *(longlong *)(param_1 + 0x128);
      if (*(longlong *)(param_1 + 0x128) == 0) {
        lVar16 = lVar22;
      }
      if (((_Src != (void *)0x0) && (_Size = *(size_t *)(lVar16 + lVar21 * 8), _Size != 0)) &&
         (uVar23 != 0)) {
        iVar19 = (int)lVar21 - *(int *)(param_1 + 0x14);
        uVar23 = 0;
        local_b8 = lVar21;
        do {
          local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
          local_f0 = 0;
          local_100 = 1;
          local_f8 = &local_a8;
          local_108._0_4_ = iVar19;
          _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x440))
                                   (DAT_14ca83900,&DAT_14ca85100,*puVar20,uVar23 & 0xffffffff);
          memcpy(_Dst,_Src,_Size);
          local_100 = local_100 & 0xffffff00;
          local_108 = (code **)CONCAT44(local_108._4_4_,iVar19);
          (**(code **)(*DAT_14ca83900 + 0x448))
                    (DAT_14ca83900,&DAT_14ca85100,*puVar20,uVar23 & 0xffffffff);
          uVar23 = uVar23 + 1;
          _Src = (void *)((longlong)_Src + _Size);
        } while (local_d8 != uVar23);
        iVar19 = *(int *)(local_c0 + 0x10);
        uVar23 = local_d8;
        lVar21 = local_b8;
        lVar17 = local_c8;
        lVar22 = local_d0;
        param_1 = local_c0;
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 < iVar19);
  }
  FUN_140eeef5c(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(int *)(param_1 + 0x134) != 0) {
    FUN_14372c9d0(param_1 + 0xb0);
  }
  puVar20 = local_e8;
  FUN_1404553ca(*(undefined8 *)(local_e0 + 8),*local_e8);
  uVar23 = *puVar20;
  if (uVar23 != 0) {
    *puVar20 = 0;
    LOCK();
    puVar12 = (uint *)(uVar23 + 8);
    uVar15 = *puVar12;
    *puVar12 = *puVar12 - 1;
    UNLOCK();
    if ((uVar15 & 0x3fffffff) == 1) {
      puVar12 = (uint *)(uVar23 + 8);
      LOCK();
      uVar15 = *puVar12;
      *puVar12 = *puVar12 | 0x40000000;
      UNLOCK();
      if ((uVar15 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(uVar23 + 0xd);
        plVar9 = (longlong *)FUN_14001cc68(0x10,8);
        plVar9[1] = uVar23;
        plVar14 = DAT_14ca843c0;
        plVar10 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar9 = (longlong)plVar14;
            LOCK();
            bVar25 = plVar14 != DAT_14ca843c0;
            plVar10 = plVar9;
            if (bVar25) {
              plVar14 = DAT_14ca843c0;
              plVar10 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar10;
            UNLOCK();
          } while (bVar25);
        }
        else {
          do {
            *plVar9 = (longlong)plVar10;
            LOCK();
            bVar25 = plVar10 != DAT_14ca843c8;
            plVar14 = plVar9;
            if (bVar25) {
              plVar10 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar25);
        }
      }
    }
  }
  *(undefined1 **)(param_1 + 0x18) = &DAT_200000002;
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return 0x200000001;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437253ec FUN_1437253ec body=1022 status=ok
// SIG undefined FUN_1437253ec(void)

undefined8 FUN_1437253ec(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  uint local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined2 *local_d8;
  undefined8 **local_d0;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined2 *local_a8;
  int local_a0;
  longlong local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar11 = *(longlong *)(param_2 + 8);
  if (((lVar11 == 0) || (*(longlong *)(lVar11 + 0x10) == 0)) ||
     (*(char *)(*(longlong *)(lVar11 + 0x10) + 0x52) != '\0')) {
    uVar8 = 0;
    goto LAB_143725431;
  }
  plVar10 = (longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    local_90 = (undefined8 *)0x0;
    FUN_1400021e4(lVar11 + 0x74,&local_a8);
    local_b8 = local_a8;
    if (local_a0 == 0) {
      local_b8 = &DAT_149dfb77a;
    }
    local_bc = *(undefined4 *)(param_1 + 0xb8);
    lVar11 = param_1 + 0x38;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar11 = *(longlong *)(param_1 + 0xb0);
    }
    uVar8 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x88);
    bVar4 = *(byte *)(param_1 + 0xe);
    uVar5 = *(undefined1 *)(param_1 + 0x30);
    local_c0 = *(undefined4 *)(param_1 + 0x28);
    uVar6 = *(undefined4 *)(param_1 + 0x2c);
    local_f0 = FUN_1431edf91(uVar8,lVar11 != 0);
    local_d0 = &local_90;
    local_d8 = local_b8;
    local_e0 = local_bc;
    local_100 = (uint)bVar4;
    local_108 = CONCAT31(local_108._1_3_,uVar5);
    local_f8 = uVar8;
    local_e8 = lVar11;
    (**(code **)(*DAT_14ca83900 + 0x1a8))(DAT_14ca83900,&local_98,local_c0,uVar6);
    if (plVar10 == &local_98) {
LAB_1437255eb:
      lVar11 = local_98;
      if (local_98 != 0) {
        LOCK();
        puVar1 = (uint *)(local_98 + 8);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_98 + 8);
          LOCK();
          uVar3 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar3 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(local_98 + 0xd);
            plVar7 = (longlong *)FUN_14001cc68(0x10,8);
            plVar7[1] = lVar11;
            plVar10 = DAT_14ca843c0;
            plVar9 = DAT_14ca843c8;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar7 = (longlong)plVar10;
                LOCK();
                bVar12 = plVar10 != DAT_14ca843c0;
                plVar9 = plVar7;
                if (bVar12) {
                  plVar10 = DAT_14ca843c0;
                  plVar9 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar9;
                UNLOCK();
              } while (bVar12);
            }
            else {
              do {
                *plVar7 = (longlong)plVar9;
                LOCK();
                bVar12 = plVar9 != DAT_14ca843c8;
                plVar10 = plVar7;
                if (bVar12) {
                  plVar9 = DAT_14ca843c8;
                  plVar10 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar10;
                UNLOCK();
              } while (bVar12);
            }
          }
        }
      }
    }
    else {
      lVar11 = *plVar10;
      *plVar10 = local_98;
      local_98 = 0;
      if (lVar11 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar11 + 8);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar11 + 8);
          LOCK();
          uVar3 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar3 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(lVar11 + 0xd);
            plVar7 = (longlong *)FUN_14001cc68(0x10,8);
            plVar7[1] = lVar11;
            plVar10 = DAT_14ca843c0;
            plVar9 = DAT_14ca843c8;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar7 = (longlong)plVar10;
                LOCK();
                bVar12 = plVar10 != DAT_14ca843c0;
                plVar9 = plVar7;
                if (bVar12) {
                  plVar10 = DAT_14ca843c0;
                  plVar9 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar9;
                UNLOCK();
              } while (bVar12);
            }
            else {
              do {
                *plVar7 = (longlong)plVar9;
                LOCK();
                bVar12 = plVar9 != DAT_14ca843c8;
                plVar10 = plVar7;
                if (bVar12) {
                  plVar9 = DAT_14ca843c8;
                  plVar10 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar10;
                UNLOCK();
              } while (bVar12);
            }
          }
        }
        goto LAB_1437255eb;
      }
    }
    if (local_a8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_90 != (undefined8 *)0x0) {
      LOCK();
      **(int **)(param_3 + 8) = **(int **)(param_3 + 8) + 1;
      UNLOCK();
      local_60 = *(undefined8 *)(param_3 + 8);
      local_78 = 0;
      local_68 = &PTR_LAB_14aace5a0;
      local_88 = &LAB_14372ca24;
      local_108 = 0xff;
      FUN_140e6df44(&local_b0);
      if (local_b0 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(local_b0 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*local_b0)(local_b0,1);
        }
      }
    }
    FUN_147d64bc2(param_1);
    *(undefined1 **)(param_1 + 0x18) = &DAT_100000001;
    if (local_90 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_90 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*local_90)(local_90,1);
      }
    }
  }
  else {
    FUN_1406a1459(&DAT_14ca85100);
    FUN_1404553ca(*(undefined8 *)(param_2 + 8),*plVar10);
    lVar11 = *plVar10;
    if (lVar11 != 0) {
      *plVar10 = 0;
      LOCK();
      puVar1 = (uint *)(lVar11 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar11 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar11 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar11;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar10;
              LOCK();
              bVar12 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar7;
              if (bVar12) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar12);
          }
          else {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar12 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar7;
              if (bVar12) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar12);
          }
        }
      }
    }
    *(undefined1 **)(param_1 + 0x18) = &DAT_200000002;
  }
  uVar8 = 1;
LAB_143725431:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1437257ec FUN_1437257ec body=922 status=ok
// SIG undefined FUN_1437257ec(void)

undefined8 FUN_1437257ec(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_a8 [32];
  uint local_88;
  longlong local_80;
  uint local_78;
  undefined8 local_70;
  undefined8 local_68;
  int local_54;
  longlong local_50;
  ulonglong local_48;
  
  lVar16 = DAT_14cb0b628;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(longlong *)(param_2 + 8) == 0) ||
      (lVar17 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x10), lVar17 == 0)) ||
     (*(char *)(lVar17 + 0x52) != '\0')) {
    uVar11 = 0;
    goto LAB_14372582c;
  }
  plVar13 = (longlong *)(param_1 + 0x20);
  lVar17 = *(longlong *)(param_1 + 0x20);
  if (lVar17 == 0) {
    lVar16 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (longlong)*(int *)(param_1 + 0x14) * 8);
    LOCK();
    **(int **)(param_4 + 8) = **(int **)(param_4 + 8) + 1;
    UNLOCK();
    local_70 = *(undefined8 *)(param_4 + 8);
    local_78 = (uint)*(ushort *)(lVar16 + 0x4a);
    local_80 = CONCAT44(local_80._4_4_,(uint)*(ushort *)(lVar16 + 0x48));
    local_88 = (uint)*(byte *)(param_1 + 0xe);
    (**(code **)(*DAT_14ca83900 + 0x418))(DAT_14ca83900,&local_50,&DAT_14ca85100);
    if (plVar13 == &local_50) {
LAB_143725969:
      lVar16 = local_50;
      if (local_50 != 0) {
        LOCK();
        puVar1 = (uint *)(local_50 + 8);
        uVar6 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar6 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_50 + 8);
          LOCK();
          uVar6 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar6 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(local_50 + 0xd);
            plVar9 = (longlong *)FUN_14001cc68(0x10,8);
            plVar9[1] = lVar16;
            plVar13 = DAT_14ca843c0;
            plVar10 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar9 = (longlong)plVar13;
                LOCK();
                bVar18 = plVar13 != DAT_14ca843c0;
                plVar10 = plVar9;
                if (bVar18) {
                  plVar13 = DAT_14ca843c0;
                  plVar10 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar10;
                UNLOCK();
              } while (bVar18);
            }
            else {
              do {
                *plVar9 = (longlong)plVar10;
                LOCK();
                bVar18 = plVar10 != DAT_14ca843c8;
                plVar13 = plVar9;
                if (bVar18) {
                  plVar10 = DAT_14ca843c8;
                  plVar13 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar13;
                UNLOCK();
              } while (bVar18);
            }
          }
        }
      }
    }
    else {
      lVar16 = *plVar13;
      *plVar13 = local_50;
      local_50 = 0;
      if (lVar16 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar16 + 8);
        uVar6 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar6 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar16 + 8);
          LOCK();
          uVar6 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar6 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar16 + 0xd);
            plVar9 = (longlong *)FUN_14001cc68(0x10,8);
            plVar9[1] = lVar16;
            plVar13 = DAT_14ca843c0;
            plVar10 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar9 = (longlong)plVar13;
                LOCK();
                bVar18 = plVar13 != DAT_14ca843c0;
                plVar10 = plVar9;
                if (bVar18) {
                  plVar13 = DAT_14ca843c0;
                  plVar10 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar10;
                UNLOCK();
              } while (bVar18);
            }
            else {
              do {
                *plVar9 = (longlong)plVar10;
                LOCK();
                bVar18 = plVar10 != DAT_14ca843c8;
                plVar13 = plVar9;
                if (bVar18) {
                  plVar10 = DAT_14ca843c8;
                  plVar13 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar13;
                UNLOCK();
              } while (bVar18);
            }
          }
        }
        goto LAB_143725969;
      }
    }
    uVar5 = 0;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar14 = 0;
    }
    else if (iVar3 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      uVar14 = (ulonglong)(DVar7 != DVar8);
      lVar17 = *plVar13;
    }
    else {
      uVar14 = 1;
    }
    local_54 = *(int *)(lVar16 + uVar14 * 4);
    (**(code **)(*DAT_14ca83900 + 0x420))(DAT_14ca83900,&DAT_14ca85100,lVar17,1);
    FUN_14112cad2(param_3);
    lVar16 = (longlong)*(int *)(param_1 + 0x14);
    uVar5 = 1;
    if (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x10)) {
      lVar17 = lVar16 * 0x30 + 0x24;
      do {
        lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x10) + lVar16 * 8);
        lVar15 = *(longlong *)(param_3 + 0x2d0);
        if (*(longlong *)(param_3 + 0x2d0) == 0) {
          lVar15 = param_3;
        }
        *(undefined1 *)(lVar15 + -0x14 + lVar17) =
             *(undefined1 *)(*(longlong *)(param_2 + 8) + 0x84);
        *(uint *)(lVar15 + -0x10 + lVar17) = (uint)*(ushort *)(lVar12 + 0x48);
        *(uint *)(lVar15 + -0xc + lVar17) = (uint)*(ushort *)(lVar12 + 0x4a);
        *(undefined8 *)(lVar15 + -0x1c + lVar17) = 0;
        local_80 = lVar15 + lVar17;
        local_70 = CONCAT71(local_70._1_7_,0 < local_54);
        local_68 = 0;
        local_78 = local_78 & 0xffffff00;
        local_88 = 1;
        uVar11 = (**(code **)(*DAT_14ca83900 + 0x430))
                           (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(param_1 + 0x20),
                            (int)lVar16 - *(int *)(param_1 + 0x14));
        *(undefined8 *)(lVar15 + -0x24 + lVar17) = uVar11;
        iVar3 = *(int *)(param_1 + 0x14);
        iVar4 = *(int *)(param_1 + 0x70);
        uVar6 = iVar4 + 1;
        *(uint *)(param_1 + 0x70) = uVar6;
        if (*(uint *)(param_1 + 0x74) < uVar6) {
          FUN_147d6b2e6(param_1 + 0x28);
        }
        lVar12 = *(longlong *)(param_1 + 0x68);
        if (*(longlong *)(param_1 + 0x68) == 0) {
          lVar12 = param_1 + 0x28;
        }
        *(int *)(lVar12 + (longlong)iVar4 * 4) = (int)lVar16 - iVar3;
        lVar16 = lVar16 + 1;
        lVar17 = lVar17 + 0x30;
      } while (lVar16 < *(int *)(param_1 + 0x10));
      uVar5 = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  uVar11 = 1;
LAB_14372582c:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 143725b88 FUN_143725b88 body=145 status=ok
// SIG undefined FUN_143725b88(void)

ulonglong FUN_143725b88(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(char *)(param_1 + 0x129) == '\x01') && (*(char *)(param_1 + 0x12a) == '\0')) {
    lVar3 = FUN_140083894();
    lVar4 = param_1 + 0x20;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x110);
    }
    iVar1 = *(int *)(param_1 + 0x118);
    if ((longlong)iVar1 != 0) {
      plVar2 = *(longlong **)(lVar3 + 0x30);
      lVar3 = 0;
      do {
        (**(code **)(*plVar2 + 0x118))(plVar2,*(undefined4 *)(lVar4 + lVar3));
        lVar3 = lVar3 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar3);
    }
  }
  FUN_1410eeb8a(param_1);
  *(undefined8 *)(param_1 + 0x18) = 0x200000004;
  return CONCAT71(0x2000000,*(undefined1 *)(param_1 + 0x129)) ^ 1;
}



// FUNCTION 143725c1a FUN_143725c1a body=408 status=ok
// SIG undefined FUN_143725c1a(void)

void FUN_143725c1a(longlong param_1,longlong param_2)

{
  DWORD DVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 *local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  DWORD local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(char *)(param_1 + 0x5c) == '\0') && (*(longlong **)(param_1 + 0x100) != (longlong *)0x0))
     && (*(longlong *)(param_2 + 8) != 0)) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x100) + 8))();
    iVar7 = *(int *)(param_1 + 0x14);
    iVar5 = 0;
    if ((*(byte *)(lVar2 + 2) & 0x80) == 0) {
      iVar5 = iVar7;
    }
    if (iVar7 < *(int *)(param_1 + 0x10)) {
      lVar9 = (longlong)iVar7;
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      lVar8 = lVar9 << 4;
      iVar7 = iVar7 - iVar5;
      do {
        lVar6 = DAT_14cb0b628;
        local_4c = 0xffffffff;
        iVar5 = *(int *)(lVar2 + 0xc60);
        if (iVar5 == 0x40000002) {
          uVar3 = 0;
        }
        else {
          bVar10 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar5 != 2)) {
            if (iVar5 == 1) {
              local_50 = FUN_140ad26c0();
              DVar1 = GetCurrentThreadId();
              bVar10 = local_50 == DVar1;
            }
            else {
              bVar10 = false;
            }
          }
          uVar3 = (ulonglong)(bVar10 ^ 1);
        }
        local_60 = 0 < *(int *)(lVar6 + uVar3 * 4);
        local_70 = &local_4c;
        local_58 = 0;
        local_68 = 0;
        local_78 = 1;
        uVar4 = (**(code **)(*DAT_14ca83900 + 0x430))
                          (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(param_1 + 0x100),iVar7);
        lVar6 = *(longlong *)(param_1 + 0x1f8);
        if (*(longlong *)(param_1 + 0x1f8) == 0) {
          lVar6 = param_1 + 0x108;
        }
        *(undefined8 *)(lVar6 + lVar8) = uVar4;
        lVar6 = *(longlong *)(param_1 + 0x1f8);
        if (*(longlong *)(param_1 + 0x1f8) == 0) {
          lVar6 = param_1 + 0x108;
        }
        *(undefined4 *)(lVar6 + 8 + lVar8) = local_4c;
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x10;
        iVar7 = iVar7 + 1;
      } while (lVar9 < *(int *)(param_1 + 0x10));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143725db4 FUN_143725db4 body=910 status=ok
// SIG undefined FUN_143725db4(void)

void FUN_143725db4(longlong param_1,longlong param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  uint local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  int local_e0;
  undefined2 *local_d8;
  undefined8 **local_d0;
  undefined2 *local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  undefined2 *local_a8;
  int local_a0;
  longlong local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(char *)(param_1 + 0x5c) != '\0') || (*(longlong *)(param_2 + 8) == 0)) goto LAB_1437260e1;
  lVar16 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (longlong)*(int *)(param_1 + 0x14) * 8);
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  iVar9 = *(int *)(param_1 + 0x200);
  if (0 < (longlong)iVar9) {
    lVar14 = param_1 + 0x108;
    if (*(longlong *)(param_1 + 0x1f8) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x1f8);
    }
    lVar15 = 0;
    do {
      *(undefined8 *)(param_1 + 0x208 + lVar15) = *(undefined8 *)(lVar14 + lVar15 * 2);
      lVar15 = lVar15 + 8;
    } while ((longlong)iVar9 * 8 != lVar15);
  }
  local_90 = (undefined8 *)0x0;
  FUN_1400021e4(*(longlong *)(param_2 + 8) + 0x74,&local_a8);
  local_c0 = local_a8;
  if (local_a0 == 0) {
    local_c0 = &DAT_149dfb77a;
  }
  bVar4 = *(byte *)(param_1 + 0xe);
  bVar5 = *(byte *)(param_1 + 0xd);
  uVar10 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x88);
  uVar6 = *(undefined1 *)(*(longlong *)(param_2 + 8) + 0x84);
  uVar7 = *(undefined2 *)(lVar16 + 0x4a);
  uVar8 = *(undefined2 *)(lVar16 + 0x48);
  lVar16 = param_1 + 0x208 + (longlong)*(int *)(param_1 + 0x14) * 8;
  local_b8 = (longlong *)(param_1 + 0x100);
  local_f0 = FUN_1431edf91(uVar10,lVar16 != 0);
  local_d0 = &local_90;
  local_d8 = local_c0;
  local_108 = CONCAT31(local_108._1_3_,uVar6);
  local_100 = (uint)bVar4;
  local_f8 = uVar10;
  local_e8 = lVar16;
  local_e0 = (uint)bVar4 - (uint)bVar5;
  (**(code **)(*DAT_14ca83900 + 0x1a8))(DAT_14ca83900,&local_98,uVar8,uVar7);
  if (local_b8 == &local_98) {
LAB_143725fe2:
    lVar16 = local_98;
    if (local_98 != 0) {
      LOCK();
      puVar1 = (uint *)(local_98 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_98 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_98 + 0xd);
          plVar11 = (longlong *)FUN_14001cc68(0x10,8);
          plVar11[1] = lVar16;
          plVar13 = DAT_14ca843c0;
          plVar12 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar11 = (longlong)plVar13;
              LOCK();
              bVar17 = plVar13 != DAT_14ca843c0;
              plVar12 = plVar11;
              if (bVar17) {
                plVar13 = DAT_14ca843c0;
                plVar12 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar12;
              UNLOCK();
            } while (bVar17);
          }
          else {
            do {
              *plVar11 = (longlong)plVar12;
              LOCK();
              bVar17 = plVar12 != DAT_14ca843c8;
              plVar13 = plVar11;
              if (bVar17) {
                plVar12 = DAT_14ca843c8;
                plVar13 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar13;
              UNLOCK();
            } while (bVar17);
          }
        }
      }
    }
  }
  else {
    lVar16 = *local_b8;
    *local_b8 = local_98;
    local_98 = 0;
    if (lVar16 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar16 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar16 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar16 + 0xd);
          plVar11 = (longlong *)FUN_14001cc68(0x10,8);
          plVar11[1] = lVar16;
          plVar13 = DAT_14ca843c0;
          plVar12 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar11 = (longlong)plVar13;
              LOCK();
              bVar17 = plVar13 != DAT_14ca843c0;
              plVar12 = plVar11;
              if (bVar17) {
                plVar13 = DAT_14ca843c0;
                plVar12 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar12;
              UNLOCK();
            } while (bVar17);
          }
          else {
            do {
              *plVar11 = (longlong)plVar12;
              LOCK();
              bVar17 = plVar12 != DAT_14ca843c8;
              plVar13 = plVar11;
              if (bVar17) {
                plVar12 = DAT_14ca843c8;
                plVar13 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar13;
              UNLOCK();
            } while (bVar17);
          }
        }
      }
      goto LAB_143725fe2;
    }
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_90 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    UNLOCK();
    local_78 = 0;
    local_68 = &PTR_LAB_14aace5e0;
    local_88 = &LAB_14372cb94;
    local_108 = 0xff;
    local_60 = param_1;
    FUN_140e6df44(&local_b0);
    if (local_b0 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_b0 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*local_b0)(local_b0,1);
      }
    }
    if (local_90 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_90 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*local_90)(local_90,1);
      }
    }
  }
LAB_1437260e1:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143726144 FUN_143726144 body=487 status=ok
// SIG undefined FUN_143726144(void)

void FUN_143726144(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined ***pppuVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_94 [4];
  longlong local_90;
  code *local_88;
  ulonglong local_80;
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  LOCK();
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  UNLOCK();
  local_90 = 0;
  lVar9 = (longlong)*(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x10)) {
    lVar7 = lVar9 << 4;
    do {
      if (*(char *)(param_1 + 0x5c) == '\x01') break;
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + lVar9 * 8);
      if (*(char *)(lVar2 + 0x1b) == '\0') {
        if (*(int *)(param_1 + 0x60) != 0) {
          *(undefined1 *)(param_1 + 0x5c) = 1;
        }
      }
      else {
        bVar1 = *(byte *)(*(longlong *)(param_2 + 8) + 0x84);
        uVar8 = (ulonglong)((uint)bVar1 * 0x30);
        uVar4 = (((uint)*(ushort *)(lVar2 + 0x48) + *(uint *)((longlong)&DAT_14c87341c + uVar8)) - 1
                ) / *(uint *)((longlong)&DAT_14c87341c + uVar8);
        uVar3 = (((uint)*(ushort *)(lVar2 + 0x4a) + *(uint *)((longlong)&DAT_14c873420 + uVar8)) - 1
                ) / *(uint *)((longlong)&DAT_14c873420 + uVar8);
        if ((bVar1 & 0xfe) == 0x1e) {
          if (uVar4 < 3) {
            uVar4 = 2;
          }
          if (uVar3 < 3) {
            uVar3 = 2;
          }
        }
        local_80 = (ulonglong)(uVar3 * *(int *)((longlong)&DAT_14c873428 + uVar8) * uVar4);
        lVar5 = *(longlong *)(param_1 + 0x1f8);
        if (*(longlong *)(param_1 + 0x1f8) == 0) {
          lVar5 = param_1 + 0x108;
        }
        local_88 = *(code **)(lVar5 + lVar7);
        local_78 = (undefined ***)0x0;
        local_a8 = 0;
        FUN_146888ee0(local_94,&local_90,lVar2,&local_88);
      }
      lVar9 = lVar9 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar9 < *(int *)(param_1 + 0x10));
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aace600;
  local_88 = FUN_14372cbd0;
  local_60 = param_1;
  FUN_146888ff8(&local_90,param_1 + 0x280,(*(byte *)(param_1 + 0x289) | 0xfffffffe) << 0x1d,
                &local_88);
  if (local_88 != (code *)0x0) {
    pppuVar6 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar6 = &local_68;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  if (local_90 != 0) {
    (**(code **)(local_90 + -0x10))(local_90 + -0x10);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14372632c FUN_14372632c body=346 status=ok
// SIG undefined FUN_14372632c(void)

void FUN_14372632c(longlong param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_c8 [32];
  code *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  longlong local_80;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(longlong *)(param_1 + 0x280) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x280) + 0x14) != '\x03')) {
    local_48 = &PTR_LAB_14aace6e0;
    local_68[0] = &LAB_14372d102;
    local_88 = &PTR_LAB_14aace6c0;
    local_a8[0] = FUN_14372cefc;
  }
  else {
    *(byte *)(param_1 + 0x5d) = *(byte *)(param_1 + 0x5c) ^ 1;
    local_48 = &PTR_LAB_14aace6a0;
    local_68[0] = &LAB_14372ceac;
    local_88 = &PTR_LAB_14aace680;
    local_a8[0] = (code *)&LAB_14372ce5c;
  }
  local_58 = (undefined ***)0x0;
  local_98 = (undefined ***)0x0;
  *(undefined4 *)(param_1 + 0x68) = 2;
  local_80 = param_1;
  local_40 = param_1;
  FUN_1403223d2(param_1 + 0x70,local_a8);
  *(undefined4 *)(param_1 + 0xb0) = 1;
  FUN_1403223d2(param_1 + 0xc0,local_68);
  if (local_a8[0] != (code *)0x0) {
    pppuVar1 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar1 = &local_88;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_68[0] != (undefined1 *)0x0) {
    pppuVar1 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar1 = &local_48;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143726488 FUN_143726488 body=275 status=ok
// SIG undefined FUN_143726488(void)

void FUN_143726488(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_88 [16];
  byte *local_78;
  undefined1 local_69;
  undefined1 *local_68;
  byte **local_60;
  undefined *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FUN_146889328();
  }
  bVar3 = *(byte *)(param_1 + 0x288);
  if ((bVar3 & 1) == 0) {
    pbVar1 = (byte *)(param_1 + 0x288);
    do {
      if ((bVar3 & 2) == 0) {
        LOCK();
        bVar2 = *pbVar1;
        if (bVar3 == bVar2) {
          *pbVar1 = 2;
        }
        UNLOCK();
        if (bVar3 == bVar2) goto LAB_143726549;
      }
      else {
LAB_143726549:
        local_58 = &DAT_142743e10;
        local_68 = &LAB_142743e12;
        local_98 = 0x7ff0000000000000;
        local_78 = pbVar1;
        local_60 = &local_78;
        local_50 = &local_69;
        FUN_1456d3e9c(local_88,pbVar1,&local_68,&local_58);
      }
      bVar3 = *pbVar1;
    } while ((bVar3 & 1) == 0);
  }
  FUN_1417f38c6(param_1);
  FUN_14045530e(param_1,param_2);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14372659c FUN_14372659c body=468 status=ok
// SIG undefined FUN_14372659c(void)

void FUN_14372659c(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  uint local_48;
  uint local_40;
  uint local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(char *)(param_1 + 0x5c) == '\0') && (*param_2 != 0)) && (param_2[1] != 0)) {
    lVar4 = *(longlong *)(param_2[2] + (longlong)*(int *)(param_1 + 0x14) * 8);
    LOCK();
    *(undefined4 *)(param_1 + 0x58) = 1;
    UNLOCK();
    local_30 = param_1 + 0x58;
    plVar8 = (longlong *)(param_1 + 0x100);
    lVar5 = *(longlong *)(param_2[1] + 0x10);
    lVar9 = 0;
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x52) == '\0')) {
      lVar9 = lVar5;
    }
    local_38 = (uint)*(ushort *)(lVar4 + 0x4a);
    local_40 = (uint)*(ushort *)(lVar4 + 0x48);
    local_48 = (uint)*(byte *)(param_1 + 0xe);
    (**(code **)(*DAT_14ca83900 + 0x418))(DAT_14ca83900,&local_28,&DAT_14ca85100,lVar9);
    if (plVar8 != &local_28) {
      lVar4 = *plVar8;
      *plVar8 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_143726721;
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar10) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar10) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar4 = local_28;
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar10) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar10) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
  }
LAB_143726721:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143726772 FUN_143726772 body=276 status=ok
// SIG undefined FUN_143726772(void)

void FUN_143726772(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_88 [16];
  byte *local_78;
  undefined1 local_69;
  undefined1 *local_68;
  byte **local_60;
  undefined *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FUN_146889328();
  }
  bVar3 = *(byte *)(param_1 + 0x288);
  if ((bVar3 & 1) == 0) {
    pbVar1 = (byte *)(param_1 + 0x288);
    do {
      if ((bVar3 & 2) == 0) {
        LOCK();
        bVar2 = *pbVar1;
        if (bVar3 == bVar2) {
          *pbVar1 = 2;
        }
        UNLOCK();
        if (bVar3 == bVar2) goto LAB_143726834;
      }
      else {
LAB_143726834:
        local_58 = &DAT_142743e10;
        local_68 = &LAB_142743e12;
        local_98 = 0x7ff0000000000000;
        local_78 = pbVar1;
        local_60 = &local_78;
        local_50 = &local_69;
        FUN_1456d3e9c(local_88,pbVar1,&local_68,&local_58);
      }
      bVar3 = *pbVar1;
    } while ((bVar3 & 1) == 0);
  }
  FUN_147d64fda(param_1,param_2);
  FUN_14045530e(param_1,param_2);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143726888 FUN_143726888 body=960 status=ok
// SIG undefined FUN_143726888(void)

void FUN_143726888(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  ulonglong local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 uStack_84;
  uint local_7c;
  undefined4 local_78;
  ulonglong local_74;
  undefined4 local_6c;
  undefined1 local_68;
  undefined2 local_67;
  undefined1 local_65;
  undefined2 local_64;
  undefined4 local_60;
  wchar_t *local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(char *)(param_1 + 0x5c) != '\0') || (lVar5 = *(longlong *)(param_2 + 8), lVar5 == 0))
  goto LAB_143726b1d;
  if (*(longlong **)(lVar5 + 0x10) == (longlong *)0x0) {
LAB_1437268e3:
    plVar8 = (longlong *)(param_1 + 0x100);
    local_65 = *(undefined1 *)(lVar5 + 0x84);
    local_7c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_74 = (ulonglong)*(ushort *)(**(longlong **)(param_2 + 0x10) + 0x4a) << 0x20 |
               (ulonglong)*(ushort *)(**(longlong **)(param_2 + 0x10) + 0x48);
    local_48 = 0;
    uStack_40 = 0;
    local_68 = *(undefined1 *)(param_1 + 0xb);
    local_98 = *(ulonglong *)(lVar5 + 0x88) | 0x800000;
    local_50 = *(longlong *)(lVar5 + 0x98);
    local_64 = 0xff00;
    local_6c = 0x10001;
    local_67 = 1;
    local_90 = 1;
    local_78 = 0;
    local_8c = 0;
    uStack_84 = 0;
    local_58 = L"FTexture2DUpdate";
    local_60 = FUN_1431edf91(local_98,CONCAT71(0x14aac31,local_50 != 0));
    (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_a0,&DAT_14ca85100,&local_98);
    if (plVar8 == &local_a0) {
LAB_143726a2c:
      lVar5 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_a0 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_a0 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_a0 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar5;
            plVar8 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar9 = plVar8 != DAT_14ca843c0;
                plVar7 = plVar6;
                if (bVar9) {
                  plVar8 = DAT_14ca843c0;
                  plVar7 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar7;
                UNLOCK();
              } while (bVar9);
            }
            else {
              do {
                *plVar6 = (longlong)plVar7;
                LOCK();
                bVar9 = plVar7 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar9) {
                  plVar7 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar9);
            }
          }
        }
      }
    }
    else {
      lVar5 = *plVar8;
      *plVar8 = local_a0;
      local_a0 = 0;
      if (lVar5 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar5 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar5 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar5 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar5;
            plVar8 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar9 = plVar8 != DAT_14ca843c0;
                plVar7 = plVar6;
                if (bVar9) {
                  plVar8 = DAT_14ca843c0;
                  plVar7 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar7;
                UNLOCK();
              } while (bVar9);
            }
            else {
              do {
                *plVar6 = (longlong)plVar7;
                LOCK();
                bVar9 = plVar7 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar9) {
                  plVar7 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar9);
            }
          }
        }
        goto LAB_143726a2c;
      }
    }
    (**(code **)(*DAT_14ca83900 + 0x3a8))
              (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(param_1 + 0x100),
               *(undefined4 *)(param_1 + 0x10));
    (**(code **)(*DAT_14ca83900 + 0x3b0))
              (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(param_1 + 0x100),
               *(undefined4 *)(param_1 + 0x10));
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x10);
    lVar4 = 0;
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x52) == '\0')) {
      lVar4 = lVar5;
    }
    FUN_1406a1459(&DAT_14ca85100,lVar4,*(undefined8 *)(param_1 + 0x100));
  }
  else {
    lVar4 = (**(code **)(**(longlong **)(lVar5 + 0x10) + 8))();
    lVar5 = *(longlong *)(param_2 + 8);
    if ((*(byte *)(lVar4 + 2) & 0x80) == 0) goto LAB_1437268e3;
    lVar5 = *(longlong *)(lVar5 + 0x10);
    if (lVar5 == 0) {
      lVar5 = *(longlong *)(param_1 + 0x100);
      if (lVar5 != 0) {
        *(undefined8 *)(param_1 + 0x100) = 0;
LAB_143726b9b:
        LOCK();
        puVar1 = (uint *)(lVar5 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar5 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar5 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar5;
            plVar8 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar9 = plVar8 != DAT_14ca843c0;
                plVar7 = plVar6;
                if (bVar9) {
                  plVar8 = DAT_14ca843c0;
                  plVar7 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar7;
                UNLOCK();
              } while (bVar9);
            }
            else {
              do {
                *plVar6 = (longlong)plVar7;
                LOCK();
                bVar9 = plVar7 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar9) {
                  plVar7 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar9);
            }
          }
        }
      }
    }
    else {
      lVar4 = 0;
      if (*(char *)(lVar5 + 0x52) == '\0') {
        lVar4 = lVar5;
      }
      lVar5 = *(longlong *)(param_1 + 0x100);
      if (lVar5 != lVar4) {
        *(longlong *)(param_1 + 0x100) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        if (lVar5 != 0) goto LAB_143726b9b;
      }
    }
  }
  (**(code **)(*DAT_14ca83900 + 0x3a8))
            (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(param_1 + 0x100),
             *(undefined4 *)(param_1 + 0x14));
LAB_143726b1d:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143726c4a FUN_143726c4a body=315 status=ok
// SIG undefined FUN_143726c4a(void)

void FUN_143726c4a(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_88 [16];
  byte *local_78;
  undefined1 local_69;
  undefined1 *local_68;
  byte **local_60;
  undefined *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FUN_146889328();
  }
  bVar3 = *(byte *)(param_1 + 0x288);
  if ((bVar3 & 1) == 0) {
    pbVar1 = (byte *)(param_1 + 0x288);
    do {
      if ((bVar3 & 2) == 0) {
        LOCK();
        bVar2 = *pbVar1;
        if (bVar3 == bVar2) {
          *pbVar1 = 2;
        }
        UNLOCK();
        if (bVar3 == bVar2) goto LAB_143726d33;
      }
      else {
LAB_143726d33:
        local_58 = &DAT_142743e10;
        local_68 = &LAB_142743e12;
        local_98 = 0x7ff0000000000000;
        local_78 = pbVar1;
        local_60 = &local_78;
        local_50 = &local_69;
        FUN_1456d3e9c(local_88,pbVar1,&local_68,&local_58);
      }
      bVar3 = *pbVar1;
    } while ((bVar3 & 1) == 0);
  }
  FUN_147d64fda(param_1,param_2);
  if (*(longlong *)(param_1 + 0x100) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x3a8))
              (DAT_14ca83900,&DAT_14ca85100,*(longlong *)(param_1 + 0x100),
               *(undefined4 *)(param_1 + 0x10));
  }
  FUN_14045530e(param_1,param_2);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143726d86 FUN_143726d86 body=91 status=ok
// SIG undefined FUN_143726d86(void)

void FUN_143726d86(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((*(char *)(param_1 + 0x280) == '\x01') && (*param_2 != 0)) {
    lVar2 = FUN_140083894();
    if (0 < *(int *)(param_1 + 0x10)) {
      plVar1 = *(longlong **)(lVar2 + 0x30);
      iVar4 = 0;
      do {
        uVar3 = FUN_147d6dda0(*param_2,(uint)*(byte *)(param_1 + 0xc) + iVar4);
        (**(code **)(*plVar1 + 0x118))(plVar1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x10));
    }
  }
  return;
}



// FUNCTION 143726de2 FUN_143726de2 body=84 status=ok
// SIG undefined FUN_143726de2(void)

void FUN_143726de2(longlong param_1,undefined8 param_2)

{
  FUN_147d64fda();
  if (*(longlong *)(param_1 + 0x100) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x3a8))
              (DAT_14ca83900,&DAT_14ca85100,*(longlong *)(param_1 + 0x100),
               *(undefined4 *)(param_1 + 0x10));
  }
  FUN_14045530e(param_1,param_2);
  FUN_143726d86(param_1,param_2);
  return;
}



// FUNCTION 143726e36 FUN_143726e36 body=81 status=ok
// SIG undefined FUN_143726e36(void)

void FUN_143726e36(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if (puVar2 != param_2) {
    *(undefined8 **)(param_1 + 0x28) = param_2;
    if (param_2 != (undefined8 *)0x0) {
      *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x30) = param_3;
  *(undefined4 *)(param_1 + 0x34) = param_4;
  return;
}



// FUNCTION 143726e88 FUN_143726e88 body=641 status=ok
// SIG undefined FUN_143726e88(void)

void FUN_143726e88(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined ***pppuVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8 [2];
  undefined ***local_b8;
  undefined **local_a8;
  longlong local_a0;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = *(longlong *)(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x120) == 0) {
    lVar7 = param_1 + 0x110;
  }
  iVar1 = *(int *)(param_1 + 0x128);
  if ((longlong)iVar1 != 0) {
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(lVar7 + lVar6);
      if (((int)plVar2[3] == 0) &&
         (*(uint *)((longlong)plVar2 + 0x1c) == (uint)(*(int *)(param_2 + 0x20) != 2))) {
        (**(code **)(*plVar2 + 8))(plVar2,param_2,param_1 + 0x130);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  local_60 = param_1;
  if (*(char *)(param_1 + 0x5c) == '\0') {
    lVar7 = param_1 + 0x110;
    if (*(longlong *)(param_1 + 0x120) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x120);
    }
    if ((longlong)*(int *)(param_1 + 0x128) != 0) {
      lVar6 = 0;
      do {
        if (*(int *)(*(longlong *)(lVar7 + lVar6) + 0x18) == 0) {
          iVar1 = *(int *)(*(longlong *)(lVar7 + lVar6) + 0x1c);
          if (iVar1 == 0) {
            uVar5 = 2;
          }
          else {
            uVar5 = 1;
            if (iVar1 != 1) goto LAB_143726f53;
          }
          local_78 = (undefined ***)0x0;
          local_68 = &PTR_LAB_14aacedb0;
          local_88[0] = &LAB_143730314;
          uVar3 = FUN_140ee0ca8(param_1);
          local_a8 = &PTR_LAB_14aaced90;
          local_c8[0] = &LAB_1437302c4;
          goto LAB_143727076;
        }
LAB_143726f53:
        lVar6 = lVar6 + 8;
      } while ((longlong)*(int *)(param_1 + 0x128) * 8 != lVar6);
    }
    if (*(int *)(*(longlong *)(param_1 + 0x108) + 0x18) == 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x108) + 0x1c);
      if (iVar1 == 0) {
        uVar5 = 2;
      }
      else {
        if (iVar1 != 1) goto LAB_143726f69;
        uVar5 = 1;
      }
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14aacedf0;
      local_88[0] = &LAB_1437303b4;
      uVar3 = FUN_140ee0ca8(param_1);
      local_a8 = &PTR_LAB_14aacedd0;
      local_c8[0] = &LAB_143730364;
LAB_143727076:
      *(undefined4 *)(param_1 + 0x68) = uVar5;
      local_a0 = param_1;
      goto LAB_14372707c;
    }
  }
LAB_143726f69:
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined1 *)(param_1 + 0x5c) = 1;
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aacee10;
  local_88[0] = &LAB_143730404;
  uVar3 = FUN_140ee0ca8(param_1);
  local_c8[0] = (undefined1 *)0x0;
  *(undefined4 *)(param_1 + 0x68) = 0;
LAB_14372707c:
  local_b8 = (undefined ***)0x0;
  FUN_141294ca8(param_1 + 0x70,local_c8);
  *(undefined4 *)(param_1 + 0xb0) = uVar3;
  FUN_141294ca8(param_1 + 0xc0,local_88);
  if (local_c8[0] != (undefined1 *)0x0) {
    pppuVar4 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar4 = &local_a8;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if (local_88[0] != (undefined1 *)0x0) {
    pppuVar4 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar4 = &local_68;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372710a FUN_14372710a body=670 status=ok
// SIG undefined FUN_14372710a(void)

void FUN_14372710a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte bVar6;
  undefined ***pppuVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  longlong local_90;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x108) + 8))
                    (*(longlong **)(param_1 + 0x108),param_2,param_1 + 0x180,param_1 + 0x130);
  if ((cVar2 == '\0') && (*(int *)(param_1 + 0x60) != 0)) {
    *(undefined1 *)(param_1 + 0x5c) = 1;
  }
  bVar6 = *(byte *)(param_1 + 0x5c);
  local_50 = param_1;
  if ((bVar6 == 0) && (*(int *)(*(longlong *)(param_1 + 0x108) + 0x18) == 0)) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x108) + 0x1c);
    if (iVar1 == 0) {
      uVar9 = 2;
    }
    else {
      if (iVar1 != 1) goto LAB_143727173;
      uVar9 = 1;
    }
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14aacee50;
    local_78[0] = &LAB_1437304a4;
    uVar4 = FUN_140ee0ca8(param_1);
    local_98 = &PTR_LAB_14aacee30;
    local_b8[0] = &LAB_143730454;
LAB_143727319:
    *(undefined4 *)(param_1 + 0x68) = uVar9;
    local_90 = param_1;
  }
  else {
LAB_143727173:
    uVar3 = *(uint *)(param_1 + 0x14);
    if ((int)uVar3 < *(int *)(param_1 + 0x10)) {
      do {
        if (((int)uVar3 < 0) || (*(int *)(param_1 + 0x458) <= (int)uVar3)) {
LAB_1437271a6:
          if (*(int *)(param_1 + 0x60) != 0) {
            *(undefined1 *)(param_1 + 0x5c) = 1;
          }
        }
        else {
          lVar5 = *(longlong *)(param_1 + 0x450);
          if (*(longlong *)(param_1 + 0x450) == 0) {
            lVar5 = param_1 + 0x180;
          }
          if (*(longlong *)(lVar5 + (ulonglong)uVar3 * 0x30) == 0) goto LAB_1437271a6;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < *(int *)(param_1 + 0x10));
      bVar6 = *(byte *)(param_1 + 0x5c);
    }
    if ((bVar6 & 1) == 0) {
      lVar5 = param_1 + 0x110;
      if (*(longlong *)(param_1 + 0x120) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x120);
      }
      if ((longlong)*(int *)(param_1 + 0x128) != 0) {
        lVar8 = 0;
        do {
          if (*(int *)(*(longlong *)(lVar5 + lVar8) + 0x18) == 1) {
            iVar1 = *(int *)(*(longlong *)(lVar5 + lVar8) + 0x1c);
            if (iVar1 == 0) {
              uVar9 = 2;
            }
            else {
              uVar9 = 1;
              if (iVar1 != 1) goto LAB_1437271ff;
            }
            local_68 = (undefined ***)0x0;
            local_58 = &PTR_LAB_14aacee90;
            local_78[0] = &LAB_143730544;
            uVar4 = FUN_140ee0ca8(param_1);
            local_98 = &PTR_LAB_14aacee70;
            local_b8[0] = &LAB_1437304f4;
            goto LAB_143727319;
          }
LAB_1437271ff:
          lVar8 = lVar8 + 8;
        } while ((longlong)*(int *)(param_1 + 0x128) * 8 != lVar8);
      }
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      *(undefined1 *)(param_1 + 0x5c) = 1;
    }
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14aaceeb0;
    local_78[0] = &LAB_143730594;
    uVar4 = FUN_140ee0ca8(param_1);
    local_b8[0] = (undefined1 *)0x0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  local_a8 = (undefined ***)0x0;
  FUN_141294ca8(param_1 + 0x70,local_b8);
  *(undefined4 *)(param_1 + 0xb0) = uVar4;
  FUN_141294ca8(param_1 + 0xc0,local_78);
  if (local_b8[0] != (undefined1 *)0x0) {
    pppuVar7 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar7 = &local_98;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  if (local_78[0] != (undefined1 *)0x0) {
    pppuVar7 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar7 = &local_58;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437273aa FUN_1437273aa body=751 status=ok
// SIG undefined FUN_1437273aa(void)

void FUN_1437273aa(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined ***pppuVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined1 *local_c8 [2];
  undefined ***local_b8;
  undefined **local_a8;
  longlong local_a0;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar9 = param_1 + 0x110;
  lVar6 = *(longlong *)(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x120) == 0) {
    lVar6 = lVar9;
  }
  iVar1 = *(int *)(param_1 + 0x128);
  if ((longlong)iVar1 != 0) {
    lVar8 = 0;
    do {
      plVar2 = *(longlong **)(lVar6 + lVar8);
      if (((int)plVar2[3] == 1) &&
         (*(uint *)((longlong)plVar2 + 0x1c) == (uint)(*(int *)(param_2 + 0x20) != 2))) {
        local_d8 = param_1 + 0x130;
        uVar4 = (**(code **)(*plVar2 + 0x10))
                          (plVar2,param_2,*(undefined4 *)(param_1 + 0x100),param_1 + 0x180);
        *(undefined4 *)(param_1 + 0x100) = uVar4;
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
  }
  bVar3 = *(byte *)(param_1 + 0x5c);
  local_60 = param_1;
  if (bVar3 == 0) {
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (*(longlong *)(param_1 + 0x120) == 0) {
      lVar6 = lVar9;
    }
    if ((longlong)*(int *)(param_1 + 0x128) != 0) {
      lVar8 = 0;
      do {
        if (*(int *)(*(longlong *)(lVar6 + lVar8) + 0x18) == 1) {
          iVar1 = *(int *)(*(longlong *)(lVar6 + lVar8) + 0x1c);
          if (iVar1 == 0) {
            uVar4 = 2;
          }
          else {
            uVar4 = 1;
            if (iVar1 != 1) goto LAB_143727491;
          }
          local_78 = (undefined ***)0x0;
          local_68 = &PTR_LAB_14aaceef0;
          local_88[0] = &LAB_143730634;
          uVar5 = FUN_140ee0ca8(param_1);
          local_a8 = &PTR_LAB_14aaceed0;
          local_c8[0] = &LAB_1437305e4;
          goto LAB_143727624;
        }
LAB_143727491:
        lVar8 = lVar8 + 8;
      } while ((longlong)*(int *)(param_1 + 0x128) * 8 != lVar8);
    }
  }
  if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 0x10)) {
    if (*(int *)(param_1 + 0x60) != 0) {
      *(undefined1 *)(param_1 + 0x5c) = 1;
      goto LAB_1437274b9;
    }
    bVar3 = *(byte *)(param_1 + 0x5c);
  }
  if ((bVar3 & 1) == 0) {
    if (*(longlong *)(param_1 + 0x120) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x120);
    }
    if ((longlong)*(int *)(param_1 + 0x128) != 0) {
      lVar6 = 0;
      do {
        if (*(int *)(*(longlong *)(lVar9 + lVar6) + 0x18) == 2) {
          iVar1 = *(int *)(*(longlong *)(lVar9 + lVar6) + 0x1c);
          if (iVar1 == 0) {
            uVar4 = 2;
          }
          else {
            uVar4 = 1;
            if (iVar1 != 1) goto LAB_14372753e;
          }
          *(undefined1 *)(param_1 + 0x460) = 1;
          local_78 = (undefined ***)0x0;
          local_68 = &PTR_LAB_14aacef30;
          local_88[0] = &LAB_1437306d4;
          uVar5 = FUN_140ee0ca8(param_1);
          local_a8 = &PTR_LAB_14aacef10;
          local_c8[0] = &DAT_143730684;
LAB_143727624:
          *(undefined4 *)(param_1 + 0x68) = uVar4;
          local_a0 = param_1;
          goto LAB_14372762a;
        }
LAB_14372753e:
        lVar6 = lVar6 + 8;
      } while ((longlong)*(int *)(param_1 + 0x128) * 8 != lVar6);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
  }
LAB_1437274b9:
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aacef50;
  local_88[0] = &LAB_143730724;
  uVar5 = FUN_140ee0ca8(param_1);
  local_c8[0] = (undefined1 *)0x0;
  *(undefined4 *)(param_1 + 0x68) = 0;
LAB_14372762a:
  local_b8 = (undefined ***)0x0;
  FUN_141294ca8(param_1 + 0x70,local_c8);
  *(undefined4 *)(param_1 + 0xb0) = uVar5;
  FUN_141294ca8(param_1 + 0xc0,local_88);
  if (local_c8[0] != (undefined1 *)0x0) {
    pppuVar7 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar7 = &local_a8;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  if (local_88[0] != (undefined1 *)0x0) {
    pppuVar7 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar7 = &local_68;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143727e20 FUN_143727e20 body=599 status=ok
// SIG undefined FUN_143727e20(void)

void FUN_143727e20(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined ***pppuVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  longlong local_c8 [2];
  longlong *local_b8;
  longlong local_a8 [4];
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar5 = param_1 + 0x110;
  lVar10 = *(longlong *)(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x120) == 0) {
    lVar10 = lVar5;
  }
  iVar4 = *(int *)(param_1 + 0x128);
  if ((longlong)iVar4 == 0) {
LAB_143727f03:
    FUN_14105bda6(lVar5);
    if (*(longlong **)(param_1 + 0x108) == (longlong *)0x0) goto LAB_143727fff;
    iVar4 = *(int *)(param_2 + 0x20);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x20))();
    if (uVar2 == (iVar4 != 2)) {
      (**(code **)(**(longlong **)(param_1 + 0x108) + 0x18))
                (*(longlong **)(param_1 + 0x108),param_1 + 0x130);
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x20))();
    if (iVar4 == 0) {
      iVar8 = 2;
    }
    else {
      if (iVar4 != 1) {
        puVar1 = *(undefined8 **)(param_1 + 0x108);
        if (puVar1 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x108) = 0;
          (**(code **)*puVar1)(puVar1,1);
        }
        *(undefined4 *)(param_1 + 0x458) = 0;
        if (*(int *)(param_1 + 0x45c) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
        }
        goto LAB_143727fff;
      }
      iVar8 = 1;
    }
    local_68 = &PTR_LAB_14aacf110;
    local_88[0] = &LAB_143730be2;
  }
  else {
    lVar9 = 0;
    iVar8 = 0;
    local_d0 = lVar5;
    do {
      iVar3 = *(int *)(param_2 + 0x20);
      uVar2 = (**(code **)(**(longlong **)(lVar10 + lVar9) + 0x38))();
      if (uVar2 == (iVar3 != 2)) {
        (**(code **)(**(longlong **)(lVar10 + lVar9) + 0x30))
                  (*(longlong **)(lVar10 + lVar9),param_1 + 0x130);
      }
      iVar3 = (**(code **)(**(longlong **)(lVar10 + lVar9) + 0x38))();
      if (iVar3 == 1) {
        iVar8 = 1;
      }
      else if (iVar3 == 0) {
        iVar8 = 2;
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar4 * 8 != lVar9);
    lVar5 = local_d0;
    if (iVar8 == 0) goto LAB_143727f03;
    local_68 = &PTR_LAB_14aacf0f0;
    local_88[0] = &LAB_143730b92;
  }
  local_78 = (undefined ***)0x0;
  local_c8[0] = 0;
  local_b8 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  local_60 = param_1;
  FUN_141294ca8(param_1 + 0x70,local_c8);
  *(int *)(param_1 + 0xb0) = iVar8;
  FUN_141294ca8(param_1 + 0xc0,local_88);
  if (local_c8[0] != 0) {
    plVar6 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar6 = local_a8;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (local_88[0] != (undefined1 *)0x0) {
    pppuVar7 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar7 = &local_68;
    }
    (*(code *)(*pppuVar7)[2])();
  }
LAB_143727fff:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143728094 FUN_143728094 body=161 status=ok
// SIG undefined FUN_143728094(void)

void FUN_143728094(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined1 *)(param_1 + 0x5c) = 1;
  }
  if (*(char *)(param_1 + 0x460) == '\x01') {
    plVar1 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar1[1] = 0;
    *plVar1 = (longlong)&PTR_FUN_14aacf130;
    plVar1[2] = param_1;
    if (param_1 != 0) {
      LOCK();
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      UNLOCK();
    }
    if (DAT_14c8442c0 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143728104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*DAT_14c8442c0 + 0x18))(DAT_14c8442c0,plVar1,3);
      return;
    }
    FUN_147d65fd2(plVar1 + 2);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014372812a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143728135 FUN_143728135 body=69 status=ok
// SIG undefined FUN_143728135(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143728135(void)

{
  _DAT_14cb0a9e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143728177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a9e8,1);
  return;
}



// FUNCTION 14372817a FUN_14372817a body=69 status=ok
// SIG undefined FUN_14372817a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14372817a(void)

{
  _DAT_14cb0b128 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437281bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0b130,1);
  return;
}



// FUNCTION 1437281bf FUN_1437281bf body=69 status=ok
// SIG undefined FUN_1437281bf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437281bf(void)

{
  _DAT_14cb0b0e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143728201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0b0e8,1);
  return;
}



// FUNCTION 143728204 FUN_143728204 body=69 status=ok
// SIG undefined FUN_143728204(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143728204(void)

{
  _DAT_14cb0b0c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143728246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0b0d0,1);
  return;
}



// FUNCTION 143728249 FUN_143728249 body=69 status=ok
// SIG undefined FUN_143728249(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143728249(void)

{
  _DAT_14cb0a9f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014372828b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a9f8,1);
  return;
}



// FUNCTION 14372828e FUN_14372828e body=69 status=ok
// SIG undefined FUN_14372828e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14372828e(void)

{
  _DAT_14cb0b0f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437282d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0b100,1);
  return;
}



// FUNCTION 1437282d3 FUN_1437282d3 body=69 status=ok
// SIG undefined FUN_1437282d3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437282d3(void)

{
  _DAT_14cb0b1a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143728315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0b1b0,1);
  return;
}



// FUNCTION 143728318 FUN_143728318 body=69 status=ok
// SIG undefined FUN_143728318(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143728318(void)

{
  _DAT_14cb0b1c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014372835a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0b1c8,1);
  return;
}



// FUNCTION 14372835d FUN_14372835d body=69 status=ok
// SIG undefined FUN_14372835d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14372835d(void)

{
  _DAT_14cb0aa08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014372839f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0aa10,1);
  return;
}



// FUNCTION 1437283a2 FUN_1437283a2 body=69 status=ok
// SIG undefined FUN_1437283a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437283a2(void)

{
  _DAT_14cb0aa20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437283e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0aa28,1);
  return;
}



// FUNCTION 1437283e7 FUN_1437283e7 body=69 status=ok
// SIG undefined FUN_1437283e7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437283e7(void)

{
  _DAT_14cb0aa38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143728429. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0aa40,1);
  return;
}



// FUNCTION 14372842c FUN_14372842c body=69 status=ok
// SIG undefined FUN_14372842c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14372842c(void)

{
  _DAT_14cb0aa50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014372846e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0aa58,1);
  return;
}



// FUNCTION 143728471 FUN_143728471 body=69 status=ok
// SIG undefined FUN_143728471(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143728471(void)

{
  _DAT_14cb0aa68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437284b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0aa70,1);
  return;
}



// FUNCTION 1437284b6 FUN_1437284b6 body=69 status=ok
// SIG undefined FUN_1437284b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437284b6(void)

{
  _DAT_14cb0aa80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437284f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0aa88,1);
  return;
}



// FUNCTION 1437284fb FUN_1437284fb body=69 status=ok
// SIG undefined FUN_1437284fb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437284fb(void)

{
  _DAT_14cb0aa98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014372853d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0aaa0,1);
  return;
}



// FUNCTION 143728540 FUN_143728540 body=69 status=ok
// SIG undefined FUN_143728540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143728540(void)

{
  _DAT_14cb0aab0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143728582. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0aab8,1);
  return;
}



// FUNCTION 143728585 FUN_143728585 body=69 status=ok
// SIG undefined FUN_143728585(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143728585(void)

{
  _DAT_14cb0aac8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437285c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0aad0,1);
  return;
}



// FUNCTION 1437285ca FUN_1437285ca body=69 status=ok
// SIG undefined FUN_1437285ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437285ca(void)

{
  _DAT_14cb0aae0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014372860c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0aae8,1);
  return;
}



// FUNCTION 14372860f FUN_14372860f body=69 status=ok
// SIG undefined FUN_14372860f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14372860f(void)

{
  _DAT_14cb0aaf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143728651. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ab00,1);
  return;
}



// FUNCTION 143728654 FUN_143728654 body=69 status=ok
// SIG undefined FUN_143728654(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143728654(void)

{
  _DAT_14cb0ab10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143728696. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ab18,1);
  return;
}



// FUNCTION 143728699 FUN_143728699 body=69 status=ok
// SIG undefined FUN_143728699(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143728699(void)

{
  _DAT_14cb0ab28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437286db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ab30,1);
  return;
}



// FUNCTION 1437286de FUN_1437286de body=69 status=ok
// SIG undefined FUN_1437286de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437286de(void)

{
  _DAT_14cb0ab40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143728720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ab48,1);
  return;
}



// FUNCTION 143728723 FUN_143728723 body=69 status=ok
// SIG undefined FUN_143728723(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143728723(void)

{
  _DAT_14cb0b110 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143728765. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0b118,1);
  return;
}



// FUNCTION 143728768 FUN_143728768 body=69 status=ok
// SIG undefined FUN_143728768(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143728768(void)

{
  _DAT_14cb0b190 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437287aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0b198,1);
  return;
}



// FUNCTION 1437287ad FUN_1437287ad body=69 status=ok
// SIG undefined FUN_1437287ad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437287ad(void)

{
  _DAT_14cb0b140 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437287ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0b148,1);
  return;
}



// FUNCTION 1437287f2 FUN_1437287f2 body=69 status=ok
// SIG undefined FUN_1437287f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437287f2(void)

{
  _DAT_14cb0ab58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143728834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ab60,1);
  return;
}



// FUNCTION 143728837 FUN_143728837 body=69 status=ok
// SIG undefined FUN_143728837(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143728837(void)

{
  _DAT_14cb0ab70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143728879. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ab78,1);
  return;
}



// FUNCTION 14372887c FUN_14372887c body=69 status=ok
// SIG undefined FUN_14372887c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14372887c(void)

{
  _DAT_14cb0b158 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437288be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0b160,1);
  return;
}



// FUNCTION 1437288c1 FUN_1437288c1 body=69 status=ok
// SIG undefined FUN_1437288c1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437288c1(void)

{
  _DAT_14cb0ab88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143728903. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ab90,1);
  return;
}



// FUNCTION 143728906 FUN_143728906 body=69 status=ok
// SIG undefined FUN_143728906(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143728906(void)

{
  _DAT_14cb0aba0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143728948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0aba8,1);
  return;
}



// FUNCTION 14372894b FUN_14372894b body=69 status=ok
// SIG undefined FUN_14372894b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14372894b(void)

{
  _DAT_14cb0b170 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014372898d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0b178,1);
  return;
}



// FUNCTION 143728990 FUN_143728990 body=69 status=ok
// SIG undefined FUN_143728990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143728990(void)

{
  _DAT_14cb0abb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437289d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0abc0,1);
  return;
}



// FUNCTION 1437289d5 FUN_1437289d5 body=69 status=ok
// SIG undefined FUN_1437289d5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437289d5(void)

{
  _DAT_14cb0abd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143728a17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0abd8,1);
  return;
}



// FUNCTION 143728a1a FUN_143728a1a body=69 status=ok
// SIG undefined FUN_143728a1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143728a1a(void)

{
  _DAT_14cb0abe8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143728a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0abf0,1);
  return;
}



// FUNCTION 143728a5f FUN_143728a5f body=69 status=ok
// SIG undefined FUN_143728a5f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143728a5f(void)

{
  _DAT_14cb0ac00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143728aa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ac08,1);
  return;
}



// FUNCTION 143728aa4 FUN_143728aa4 body=69 status=ok
// SIG undefined FUN_143728aa4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143728aa4(void)

{
  _DAT_14cb0ac18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143728ae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ac20,1);
  return;
}



// FUNCTION 143728aea FUN_143728aea body=751 status=ok
// SIG undefined FUN_143728aea(void)

void FUN_143728aea(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined ***pppuVar4;
  undefined4 uVar5;
  undefined1 auStack_378 [32];
  undefined1 *local_358 [2];
  undefined ***local_348;
  undefined **local_338;
  longlong local_330;
  undefined1 *local_318 [2];
  undefined ***local_308;
  undefined **local_2f8;
  longlong local_2f0;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_378;
  local_48 = 0;
  local_40 = 0xf00000000;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x100) + 8))
                    (*(longlong **)(param_1 + 0x100),param_2,local_318,param_1 + 0x110);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((cVar2 == '\0') && (*(int *)(param_1 + 0x60) != 0)) {
    *(undefined1 *)(param_1 + 0x5c) = 1;
  }
  if (*(char *)(param_1 + 0x5c) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x100);
    if ((int)plVar1[3] == 1) {
      iVar3 = 2;
      uVar5 = 2;
      if (*(int *)((longlong)plVar1 + 0x1c) != 0) {
        if (*(int *)((longlong)plVar1 + 0x1c) != 1) goto LAB_143728da7;
        uVar5 = 1;
      }
      local_308 = (undefined ***)0x0;
      local_2f8 = &PTR_LAB_14aacf240;
      local_318[0] = &LAB_143730e6e;
      local_2f0 = param_1;
      if (plVar1 != (longlong *)0x0) {
        iVar3 = (**(code **)(*plVar1 + 0x20))();
        iVar3 = (iVar3 != 1) + 1;
      }
      local_338 = &PTR_LAB_14aacf220;
      local_358[0] = &LAB_143730e1e;
    }
    else {
      if ((int)plVar1[3] != 0) {
LAB_143728da7:
        FUN_143728dda(param_1,param_2);
        goto LAB_143728db2;
      }
      iVar3 = 2;
      uVar5 = 2;
      if (*(int *)((longlong)plVar1 + 0x1c) != 0) {
        if (*(int *)((longlong)plVar1 + 0x1c) != 1) goto LAB_143728da7;
        uVar5 = 1;
      }
      local_308 = (undefined ***)0x0;
      local_2f8 = &PTR_LAB_14aacf200;
      local_318[0] = &LAB_143730dce;
      local_2f0 = param_1;
      if (plVar1 != (longlong *)0x0) {
        iVar3 = (**(code **)(*plVar1 + 0x20))();
        iVar3 = (iVar3 != 1) + 1;
      }
      local_338 = &PTR_LAB_14aacf1e0;
      local_358[0] = &LAB_143730d7e;
    }
    local_348 = (undefined ***)0x0;
    *(undefined4 *)(param_1 + 0x68) = uVar5;
    local_330 = param_1;
    FUN_141294ca8(param_1 + 0x70,local_358);
    *(int *)(param_1 + 0xb0) = iVar3;
    FUN_141294ca8(param_1 + 0xc0,local_318);
  }
  else {
    local_308 = (undefined ***)0x0;
    local_2f8 = &PTR_LAB_14aacf260;
    local_318[0] = &LAB_143730ebe;
    if (*(longlong **)(param_1 + 0x100) == (longlong *)0x0) {
      iVar3 = 2;
      local_2f0 = param_1;
    }
    else {
      local_2f0 = param_1;
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x20))();
      iVar3 = (iVar3 != 1) + 1;
    }
    local_358[0] = (undefined1 *)0x0;
    local_348 = (undefined ***)0x0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_141294ca8(param_1 + 0x70,local_358);
    *(int *)(param_1 + 0xb0) = iVar3;
    FUN_141294ca8(param_1 + 0xc0,local_318);
  }
  if (local_358[0] != (undefined1 *)0x0) {
    pppuVar4 = local_348;
    if (local_348 == (undefined ***)0x0) {
      pppuVar4 = &local_338;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if (local_318[0] != (undefined1 *)0x0) {
    pppuVar4 = local_308;
    if (local_308 == (undefined ***)0x0) {
      pppuVar4 = &local_2f8;
    }
    (*(code *)(*pppuVar4)[2])();
  }
LAB_143728db2:
  if ((local_30 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143728dda FUN_143728dda body=416 status=ok
// SIG undefined FUN_143728dda(void)

void FUN_143728dda(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined ***pppuVar4;
  undefined4 uVar5;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  longlong local_80;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x10))
                    (*(longlong **)(param_1 + 0x100),param_2,param_1 + 0x110);
  if (cVar2 == '\0') {
    if (*(int *)(param_1 + 0x60) != 0) {
      *(undefined1 *)(param_1 + 0x5c) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x5e) = 1;
  }
  plVar1 = *(longlong **)(param_1 + 0x100);
  if ((*(char *)(param_1 + 0x5c) == '\0') && ((int)plVar1[3] == 1)) {
    iVar3 = 2;
    uVar5 = 2;
    if (*(int *)((longlong)plVar1 + 0x1c) != 0) {
      if (*(int *)((longlong)plVar1 + 0x1c) != 1) goto LAB_143728f2f;
      uVar5 = 1;
    }
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14aacf2a0;
    local_68[0] = &LAB_143730f5e;
    local_40 = param_1;
    if (plVar1 != (longlong *)0x0) {
      iVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
      iVar3 = (iVar3 != 1) + 1;
    }
    local_98 = (undefined ***)0x0;
    local_88 = &PTR_LAB_14aacf280;
    local_a8[0] = &LAB_143730f0e;
    *(undefined4 *)(param_1 + 0x68) = uVar5;
    local_80 = param_1;
    FUN_141294ca8(param_1 + 0x70,local_a8);
    *(int *)(param_1 + 0xb0) = iVar3;
    FUN_141294ca8(param_1 + 0xc0,local_68);
    if (local_a8[0] != (undefined1 *)0x0) {
      pppuVar4 = local_98;
      if (local_98 == (undefined ***)0x0) {
        pppuVar4 = &local_88;
      }
      (*(code *)(*pppuVar4)[2])();
    }
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar4 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar4 = &local_48;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  else {
LAB_143728f2f:
    if (plVar1 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x100) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_c8);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143728f94 FUN_143728f94 body=367 status=ok
// SIG undefined FUN_143728f94(void)

void FUN_143728f94(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined4 uVar5;
  undefined1 auStack_d8 [32];
  longlong local_b8 [2];
  longlong *local_a8;
  longlong local_98 [4];
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong **)(param_1 + 0x100) != (longlong *)0x0) {
    iVar2 = *(int *)(param_2 + 0x20);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x20))();
    if (uVar1 == (iVar2 != 2)) {
      (**(code **)(**(longlong **)(param_1 + 0x100) + 0x18))
                (*(longlong **)(param_1 + 0x100),param_1 + 0x110);
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x20))();
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    else {
      if (iVar2 != 1) {
        if (*(longlong *)(param_1 + 0x100) != 0) {
          *(undefined8 *)(param_1 + 0x100) = 0;
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_d8);
        }
        goto LAB_1437290f7;
      }
      uVar5 = 1;
    }
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14aacf2c0;
    local_78[0] = &LAB_143730fae;
    local_b8[0] = 0;
    local_a8 = (longlong *)0x0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    local_50 = param_1;
    FUN_141294ca8(param_1 + 0x70,local_b8);
    *(undefined4 *)(param_1 + 0xb0) = uVar5;
    FUN_141294ca8(param_1 + 0xc0,local_78);
    if (local_b8[0] != 0) {
      plVar3 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar3 = local_98;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_78[0] != (undefined1 *)0x0) {
      pppuVar4 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar4 = &local_58;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
LAB_1437290f7:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143729120 FUN_143729120 body=2486 status=ok
// SIG undefined FUN_143729120(void)

undefined8 FUN_143729120(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  longlong *plVar18;
  uint uVar19;
  longlong lVar20;
  uint *puVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  undefined8 *puVar27;
  bool bVar28;
  undefined1 auStack_148 [32];
  code **local_128;
  int local_120;
  int local_118;
  longlong local_110;
  longlong local_100;
  int local_f4;
  int local_f0;
  int local_ec;
  ulonglong *local_e8;
  longlong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  code *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  uint local_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined8 local_98;
  ulonglong *local_90;
  wchar_t *local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  uVar17 = local_98;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar23 = *(longlong *)(param_2 + 8);
  bVar5 = *(byte *)(lVar23 + 0x84);
  lVar20 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (longlong)*(int *)(param_1 + 0x14) * 8);
  uStack_9c = *(undefined2 *)(lVar20 + 0x4c);
  uStack_a0 = (uint)*(ushort *)(lVar20 + 0x4a);
  local_ac = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_c8 = *(code **)(lVar23 + 0x88);
  local_a8 = *(uint *)(*(longlong *)(lVar23 + 0x50) + 0x10);
  local_80 = 0;
  if (DAT_14ca84e1a != '\0') {
    local_80 = param_1 + 0x28;
  }
  local_98._6_2_ = SUB82(uVar17,6);
  local_98._0_6_ = CONCAT24(0xff00,(uint)bVar5 << 0x18);
  uStack_a4 = (uint)*(ushort *)(lVar20 + 0x48);
  uStack_9a = 1;
  local_98._0_3_ = CONCAT21(0x201,*(undefined1 *)(param_1 + 0xe));
  uStack_c0 = 1;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  local_88 = L"FinalizeMips";
  local_78 = 0;
  uStack_70 = 0;
  local_100 = param_2;
  uVar10 = FUN_1431edf91(local_c8,CONCAT11((char)((ushort)uStack_9c >> 8),local_80 != 0));
  local_90 = (ulonglong *)CONCAT44(local_90._4_4_,uVar10);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_d0,&DAT_14ca85100,&local_c8);
  puVar1 = (ulonglong *)(param_1 + 0x20);
  if (puVar1 == &local_d0) {
LAB_1437292b6:
    uVar24 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      puVar16 = (uint *)(local_d0 + 8);
      uVar19 = *puVar16;
      *puVar16 = *puVar16 - 1;
      UNLOCK();
      if ((uVar19 & 0x3fffffff) == 1) {
        puVar16 = (uint *)(local_d0 + 8);
        LOCK();
        uVar19 = *puVar16;
        *puVar16 = *puVar16 | 0x40000000;
        UNLOCK();
        if ((uVar19 >> 0x1e & 1) == 0) {
          bVar6 = *(byte *)(local_d0 + 0xd);
          plVar13 = (longlong *)FUN_14001cc68(0x10,8);
          plVar13[1] = uVar24;
          plVar18 = DAT_14ca843c0;
          plVar14 = DAT_14ca843c8;
          if ((bVar6 & 2) == 0) {
            do {
              *plVar13 = (longlong)plVar18;
              LOCK();
              bVar28 = plVar18 != DAT_14ca843c0;
              plVar14 = plVar13;
              if (bVar28) {
                plVar18 = DAT_14ca843c0;
                plVar14 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar14;
              UNLOCK();
            } while (bVar28);
          }
          else {
            do {
              *plVar13 = (longlong)plVar14;
              LOCK();
              bVar28 = plVar14 != DAT_14ca843c8;
              plVar18 = plVar13;
              if (bVar28) {
                plVar14 = DAT_14ca843c8;
                plVar18 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar18;
              UNLOCK();
            } while (bVar28);
          }
        }
      }
    }
  }
  else {
    uVar24 = *puVar1;
    *puVar1 = local_d0;
    local_d0 = 0;
    if (uVar24 != 0) {
      LOCK();
      puVar16 = (uint *)(uVar24 + 8);
      uVar19 = *puVar16;
      *puVar16 = *puVar16 - 1;
      UNLOCK();
      if ((uVar19 & 0x3fffffff) == 1) {
        puVar16 = (uint *)(uVar24 + 8);
        LOCK();
        uVar19 = *puVar16;
        *puVar16 = *puVar16 | 0x40000000;
        UNLOCK();
        if ((uVar19 >> 0x1e & 1) == 0) {
          bVar6 = *(byte *)(uVar24 + 0xd);
          plVar13 = (longlong *)FUN_14001cc68(0x10,8);
          plVar13[1] = uVar24;
          plVar18 = DAT_14ca843c0;
          plVar14 = DAT_14ca843c8;
          if ((bVar6 & 2) == 0) {
            do {
              *plVar13 = (longlong)plVar18;
              LOCK();
              bVar28 = plVar18 != DAT_14ca843c0;
              plVar14 = plVar13;
              if (bVar28) {
                plVar18 = DAT_14ca843c0;
                plVar14 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar14;
              UNLOCK();
            } while (bVar28);
          }
          else {
            do {
              *plVar13 = (longlong)plVar14;
              LOCK();
              bVar28 = plVar14 != DAT_14ca843c8;
              plVar18 = plVar13;
              if (bVar28) {
                plVar14 = DAT_14ca843c8;
                plVar18 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar18;
              UNLOCK();
            } while (bVar28);
          }
        }
      }
      goto LAB_1437292b6;
    }
  }
  local_d0 = local_d0 & 0xffffffffffffff00;
  lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar22 = *(int *)(lVar23 + 0xc60);
  local_e8 = puVar1;
  if (DAT_14c86a9fc == 0) {
    if (iVar22 != 2) {
      if (iVar22 != 1) goto LAB_143729342;
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      if (DVar11 == DVar12) goto LAB_143729347;
      goto LAB_143729392;
    }
  }
  else {
LAB_143729342:
    if (iVar22 != 0x10) {
LAB_143729392:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar22 = *(int *)(lVar23 + 0xc60), iVar22 == 2))
        goto LAB_143729347;
        if (iVar22 == 1) {
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          if (DVar11 == DVar12) goto LAB_143729347;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar3 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar16 = (uint *)*puVar3;
        if (puVar16 != (uint *)0x0) goto LAB_14372978a;
        while( true ) {
          uVar19 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar19 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar19 | 1;
            __tlregdtor(&LAB_14372c6e3);
          }
          lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar15 = *(undefined4 **)(lVar23 + 0x310);
          *(undefined8 *)(lVar23 + 0x310) = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar3 = puVar15;
          FUN_140217a48(puVar3);
          puVar16 = (uint *)*puVar3;
LAB_14372978a:
          puVar27 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar21 = (uint *)(puVar27 + 0x18);
          uVar19 = puVar16[0x12];
          if (puVar21 <= puVar16 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar4 = *puVar16;
            *puVar16 = *puVar16 + uVar19 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar19) != 0xffffffff) break;
            puVar16 = (uint *)*puVar3;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar3 = puVar16;
            puVar27 = (undefined8 *)((longlong)puVar16 + 0x5fU & 0xfffffffffffffff8);
            puVar21 = (uint *)(puVar27 + 0x18);
            uVar19 = 0;
            if (puVar21 <= puVar16 + 0x4000) {
              uVar19 = 1;
              goto LAB_14372980c;
            }
          }
        }
        uVar19 = uVar19 + 1;
LAB_14372980c:
        *(uint **)(puVar16 + 0x10) = puVar21;
        puVar16[0x12] = uVar19;
        iVar22 = 0;
        FUN_1447247dc(puVar27,0);
        *puVar27 = &PTR_FUN_14aacf338;
        puVar27[0x15] = local_100;
        puVar27[0x16] = param_1;
        puVar27[0x17] = &local_d0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar19 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar19 < 2) {
            uVar24 = (ulonglong)(byte)(&DAT_149e38edc)[uVar19];
            iVar22 = 0;
          }
          else {
            uVar24 = 2;
          }
        }
        else {
          iVar22 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar24 = 5;
        }
        if (*(code **)(puVar27[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar27[0xe] + 0x18))(puVar27 + 0xe,puVar27 + 9);
        }
        puVar27[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar27[9] = puVar27;
        puVar27[10] = puVar27;
        lVar23 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar23 == 0) {
          uVar9 = 1;
          if ((char)uVar24 != '\x06') {
            uVar9 = uVar24;
          }
          uVar24 = uVar9;
          uVar17 = 0;
        }
        else {
          if ((char)uVar24 == '\x06') {
            uVar24 = *(ulonglong *)(lVar23 + 0x38) >> 0x3b;
          }
          uVar17 = *(undefined8 *)(lVar23 + 0x30);
        }
        puVar27[0xf] = uVar17;
        puVar27[0x10] = uVar24 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar27 + 0x1c) = iVar22;
        if (puVar27 == (undefined8 *)0x0) {
          local_c8 = (code *)CONCAT71(local_c8._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar27 + 1) = *(int *)(puVar27 + 1) + 1;
          UNLOCK();
          local_c8 = (code *)CONCAT71(local_c8._1_7_,1);
          FUN_1447439e4(puVar27);
          LOCK();
          piVar2 = (int *)(puVar27 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar27)(puVar27,1);
          }
        }
      }
      else {
        uStack_b8 = 0;
        uStack_b4 = 0;
        local_a8 = 0x4aacf2e0;
        uStack_a4 = 1;
        uStack_a0 = (uint)local_100;
        uStack_9c = (undefined2)((ulonglong)local_100 >> 0x20);
        uStack_9a = (undefined2)((ulonglong)local_100 >> 0x30);
        local_c8 = FUN_143730ffe;
        local_128 = &local_c8;
        local_98 = param_1;
        local_90 = &local_d0;
        FUN_14005a792(&DAT_14ca9a440,L"FCopySharedMipsForTexture3D",&DAT_14cb0b0c4);
        if (local_c8 != (code *)0x0) {
          puVar16 = (uint *)CONCAT44(uStack_b4,uStack_b8);
          if ((uint *)CONCAT44(uStack_b4,uStack_b8) == (uint *)0x0) {
            puVar16 = &local_a8;
          }
          (**(code **)(*(longlong *)puVar16 + 0x10))();
        }
      }
      goto LAB_14372945a;
    }
  }
LAB_143729347:
  lVar23 = *(longlong *)(*(longlong *)(local_100 + 8) + 0x10);
  lVar20 = 0;
  if ((lVar23 != 0) && (*(char *)(lVar23 + 0x52) == '\x02')) {
    lVar20 = lVar23;
  }
  FUN_1406a1459(&DAT_14ca85100,lVar20,*puVar1);
LAB_14372945a:
  if (DAT_14ca84e1a == '\0') {
    lVar23 = (longlong)*(int *)(param_1 + 0x14);
    iVar22 = *(int *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x14) < iVar22) {
      uVar24 = (ulonglong)((uint)bVar5 * 0x30);
      local_d8 = (ulonglong)*(uint *)((longlong)&DAT_14c87341c + uVar24);
      iVar7 = *(int *)((longlong)&DAT_14c873420 + uVar24);
      local_ec = *(int *)((longlong)&DAT_14c873428 + uVar24);
      local_f0 = *(uint *)((longlong)&DAT_14c87341c + uVar24) - 1;
      local_f4 = iVar7 + -1;
      local_e0 = param_1;
      do {
        lVar20 = *(longlong *)(param_1 + 0x30 + lVar23 * 8);
        if (lVar20 != 0) {
          lVar8 = *(longlong *)(*(longlong *)(local_100 + 0x10) + lVar23 * 8);
          local_c8 = (code *)0x0;
          uStack_c0 = 0;
          uStack_bc = 0;
          uStack_b8 = 0;
          uStack_b4 = 0;
          uStack_b0 = (uint)*(ushort *)(lVar8 + 0x48);
          local_ac = (uint)*(ushort *)(lVar8 + 0x4a);
          local_a8 = (uint)*(ushort *)(lVar8 + 0x4c);
          iVar22 = ((int)(uStack_b0 + local_f0) / (int)local_d8) * local_ec;
          iVar25 = ((int)(local_ac + local_f4) / iVar7) * iVar22;
          iVar26 = (int)lVar23 - *(int *)(param_1 + 0x14);
          uVar17 = *(undefined8 *)(param_1 + 0x20);
          if (DAT_14ca85169 == '\0') {
            FUN_14002049c(&DAT_14ca85100,
                          CONCAT71((uint7)((ulonglong)
                                           ((longlong)(int)(local_ac + local_f4) % (longlong)iVar7)
                                          >> 8) & 0xffffff,1));
            local_128 = &local_c8;
            local_120 = iVar22;
            local_118 = iVar25;
            local_110 = lVar20;
            (**(code **)(*DAT_14ca83900 + 0x220))(DAT_14ca83900,&DAT_14ca85100,uVar17,iVar26);
            param_1 = local_e0;
            FUN_14002049c(&DAT_14ca85100,0);
          }
          else {
            local_128 = &local_c8;
            local_120 = iVar22;
            local_118 = iVar25;
            local_110 = lVar20;
            (**(code **)(*DAT_14ca83900 + 0x220))(DAT_14ca83900,&DAT_14ca85100,uVar17,iVar26);
          }
          iVar22 = *(int *)(param_1 + 0x10);
        }
        lVar23 = lVar23 + 1;
      } while (lVar23 < iVar22);
    }
  }
  puVar1 = local_e8;
  lVar23 = -0x78;
  do {
    if (*(longlong *)(param_1 + 0xa8 + lVar23) != 0) {
      FUN_1400020a8();
      *(undefined8 *)(param_1 + 0xa8 + lVar23) = 0;
    }
    *(undefined8 *)(param_1 + 0x120 + lVar23) = 0;
    lVar23 = lVar23 + 8;
  } while (lVar23 != 0);
  FUN_1404553ca(*(undefined8 *)(local_100 + 8),*puVar1);
  uVar24 = *puVar1;
  if (uVar24 != 0) {
    *puVar1 = 0;
    LOCK();
    puVar16 = (uint *)(uVar24 + 8);
    uVar19 = *puVar16;
    *puVar16 = *puVar16 - 1;
    UNLOCK();
    if ((uVar19 & 0x3fffffff) == 1) {
      puVar16 = (uint *)(uVar24 + 8);
      LOCK();
      uVar19 = *puVar16;
      *puVar16 = *puVar16 | 0x40000000;
      UNLOCK();
      if ((uVar19 >> 0x1e & 1) == 0) {
        bVar5 = *(byte *)(uVar24 + 0xd);
        plVar13 = (longlong *)FUN_14001cc68(0x10,8);
        plVar13[1] = uVar24;
        plVar18 = DAT_14ca843c0;
        plVar14 = DAT_14ca843c8;
        if ((bVar5 & 2) == 0) {
          do {
            *plVar13 = (longlong)plVar18;
            LOCK();
            bVar28 = plVar18 != DAT_14ca843c0;
            plVar14 = plVar13;
            if (bVar28) {
              plVar18 = DAT_14ca843c0;
              plVar14 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar14;
            UNLOCK();
          } while (bVar28);
        }
        else {
          do {
            *plVar13 = (longlong)plVar14;
            LOCK();
            bVar28 = plVar14 != DAT_14ca843c8;
            plVar18 = plVar13;
            if (bVar28) {
              plVar14 = DAT_14ca843c8;
              plVar18 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar18;
            UNLOCK();
          } while (bVar28);
        }
      }
    }
  }
  *(undefined1 **)(param_1 + 0x18) = &DAT_200000002;
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return 0x200000001;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143729adc FUN_143729adc body=416 status=ok
// SIG undefined FUN_143729adc(void)

void FUN_143729adc(longlong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  undefined1 param_5,undefined1 param_6,longlong *param_7)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 **ppuVar4;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446f470e(&local_50,param_2,1);
  local_60 = &local_50;
  FUN_147d69068(param_1,&local_44,&local_60);
  lVar1 = *param_1 + (longlong)local_44 * 0x60;
  ppuVar4 = (undefined8 **)(lVar1 + 8);
  FUN_140056680(&local_60,param_2);
  if (ppuVar4 == &local_60) {
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*ppuVar4 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    *ppuVar4 = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar1 + 0x10) = local_58;
    *(undefined4 *)(lVar1 + 0x14) = local_54;
  }
  *(undefined8 *)(lVar1 + 0x18) = local_50;
  plVar2 = (longlong *)*param_3;
  plVar3 = *(longlong **)(lVar1 + 0x20);
  if (plVar3 != plVar2) {
    *(longlong **)(lVar1 + 0x20) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(lVar1 + 0x28) = (int)param_3[1];
  plVar2 = (longlong *)*param_4;
  plVar3 = *(longlong **)(lVar1 + 0x30);
  if (plVar3 != plVar2) {
    *(longlong **)(lVar1 + 0x30) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(lVar1 + 0x38) = (int)param_4[1];
  *(undefined1 *)(lVar1 + 0x40) = param_5;
  *(undefined1 *)(lVar1 + 0x41) = 1;
  *(undefined1 *)(lVar1 + 0x42) = param_6;
  plVar2 = (longlong *)*param_7;
  plVar3 = *(longlong **)(lVar1 + 0x48);
  if (plVar3 != plVar2) {
    *(longlong **)(lVar1 + 0x48) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(lVar1 + 0x50) = (int)param_7[1];
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143729c8e FUN_143729c8e body=41 status=ok
// SIG undefined FUN_143729c8e(void)

void FUN_143729c8e(void)

{
  DAT_14cb0adf0 = 0;
  if (DAT_14cb0ade8 != 0) {
    FUN_1400020a8();
  }
  FUN_14615324a();
  return;
}



// FUNCTION 143729cb8 FUN_143729cb8 body=3741 status=ok
// SIG undefined FUN_143729cb8(void)

longlong * FUN_143729cb8(longlong param_1,code *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  code *pcVar11;
  longlong *plVar12;
  longlong lVar13;
  uint *puVar14;
  undefined8 uVar15;
  byte bVar16;
  int iVar17;
  ulonglong uVar18;
  longlong *plVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined1 uVar26;
  ulonglong uVar27;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  wchar_t *local_148;
  code *local_140;
  undefined1 *local_138;
  code **local_130;
  code *local_128;
  code *local_120;
  undefined1 local_109;
  ulonglong local_108;
  undefined8 local_100;
  ulonglong local_f8;
  uint *local_f0;
  undefined1 local_e1;
  longlong local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar26 = *(undefined1 *)(param_1 + 0xb8);
  *(undefined1 *)(param_1 + 0xb8) = 1;
  if (param_2 != (code *)0x0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != (code *)0x0) {
    FUN_1456cec3c(param_2);
  }
  if ((param_2 != (code *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar7 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    uVar7 = uVar7 >> 0x10 ^ uVar7;
    lVar13 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar13 = param_1 + 0x40;
    }
    bVar16 = DAT_14c950c29;
    for (iVar20 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & uVar7) * 4);
        iVar20 != -1; iVar20 = *(int *)(*plVar1 + 0x10 + (longlong)iVar20 * 0x18)) {
      if ((param_2 != (code *)0x0) && ((bVar16 & 1) != 0)) {
        FUN_1456cec3c(param_2);
        bVar16 = DAT_14c950c29;
      }
      pcVar11 = *(code **)(*plVar1 + (longlong)iVar20 * 0x18);
      if (((bVar16 & 1) != 0) && (pcVar11 != (code *)0x0)) {
        FUN_1456cec3c(pcVar11);
        bVar16 = DAT_14c950c29;
      }
      if ((param_2 != (code *)0x0) && ((bVar16 & 1) != 0)) {
        FUN_1456cec3c(param_2);
        bVar16 = DAT_14c950c29;
      }
      if (pcVar11 == param_2) {
        if ((param_2 != (code *)0x0) && ((bVar16 & 1) != 0)) {
          FUN_1456cec3c(param_2);
          bVar16 = DAT_14c950c29;
        }
        if ((param_2 != (code *)0x0) && ((bVar16 & 1) != 0)) {
          FUN_1456cec3c(param_2);
          bVar16 = DAT_14c950c29;
        }
        if ((param_2 != (code *)0x0) && ((bVar16 & 1) != 0)) {
          FUN_1456cec3c(param_2);
          bVar16 = DAT_14c950c29;
        }
        if ((param_2 != (code *)0x0) && ((bVar16 & 1) != 0)) {
          FUN_1456cec3c(param_2);
        }
        if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x3c)) goto LAB_14372a34a;
        lVar13 = param_1 + 0x40;
        if (*(longlong *)(param_1 + 0x48) != 0) {
          lVar13 = *(longlong *)(param_1 + 0x48);
        }
        iVar20 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & uVar7) * 4);
        if (iVar20 == -1) goto LAB_14372a34a;
        plVar12 = (longlong *)0x0;
        bVar16 = DAT_14c950c29;
        goto LAB_143729e63;
      }
    }
  }
  if (((param_2 != (code *)0x0) && (((byte)param_2[0xd4] & 1) == 0)) &&
     (pcVar11 = (code *)(**(code **)(*(longlong *)param_2 + 0x358))(param_2), pcVar11 == param_2)) {
    local_e0 = *(longlong *)(param_2 + 0x18);
    FUN_1400021e4(&local_e0,&local_d8);
    pcVar11 = local_d8;
    if ((int)local_d0 == 0) {
      pcVar11 = (code *)&DAT_149dfb77a;
    }
    FUN_14089e62a(&local_e1,L"Initializing Subsystem %s",pcVar11);
    if (local_d8 != (code *)0x0) {
      FUN_1400020a8();
    }
    plVar12 = *(longlong **)(param_2 + 0x110);
    if (plVar12 == (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2 + 1000))(param_2);
      plVar12 = *(longlong **)(param_2 + 0x110);
    }
    cVar6 = (**(code **)(*plVar12 + 0x2a0))(plVar12,*(undefined8 *)(param_1 + 0xb0));
    if (cVar6 != '\0') {
      uVar15 = *(undefined8 *)(param_1 + 0xb0);
      FUN_14058b40c(uVar15,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                   );
      local_88 = (longlong *)0x0;
      local_58 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      lStack_98 = 0;
      local_d8 = param_2;
      local_d0 = uVar15;
      plVar12 = (longlong *)FUN_1402710dd(&local_d8);
      if (lStack_98 != 0) {
        plVar19 = local_88;
        if (local_88 == (longlong *)0x0) {
          plVar19 = local_78;
        }
        (**(code **)(*plVar19 + 0x10))();
      }
      if (plVar12 != (longlong *)0x0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c(plVar12);
      }
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_2);
      }
      local_109 = uVar26;
      if (*(int *)(param_1 + 0x3c) == 0) {
        uVar7 = *(uint *)(param_1 + 0x10);
        uVar27 = (ulonglong)uVar7;
        *(uint *)(param_1 + 0x10) = uVar7 + 1;
        if (*(uint *)(param_1 + 0x14) == uVar7) {
          FUN_14482b872(plVar1,uVar7);
        }
        iVar20 = *(int *)(param_1 + 0x30);
        if (iVar20 == 0) {
          iVar8 = -1;
        }
        else {
          iVar8 = iVar20 + 0x1e;
          if (-1 < iVar20 + -1) {
            iVar8 = iVar20 + -1;
          }
          iVar8 = iVar8 >> 5;
        }
        lVar25 = param_1 + 0x18;
        iVar17 = iVar20 + 1;
        iVar22 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar22 = iVar20;
        }
        if (iVar22 >> 5 == iVar8) {
          *(int *)(param_1 + 0x30) = iVar17;
        }
        else {
          if (*(int *)(param_1 + 0x34) <= iVar20) {
            iVar8 = iVar20;
            local_108 = uVar27;
            if (iVar20 + 0x20U < 0xa0) {
              iVar17 = 0x80;
            }
            else {
              uVar7 = iVar20 + 0x20U >> 5;
              if (*(int *)(param_1 + 0x34) + 0x1fU < 0xa0) {
                uVar9 = 4;
                if (4 < uVar7) {
                  uVar9 = uVar7;
                }
              }
              else {
                uVar9 = uVar7 + (uVar7 * 3 >> 3) + 0x10;
              }
              uVar27 = (ulonglong)(uVar9 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar23 = (uint)(uVar27 + 0xf);
                  if (uVar9 < 0x1ffd) {
                    uVar27 = (ulonglong)
                             (ushort)(&DAT_14c841d90)
                                     [0x32 - (byte)(&DAT_14c841e00)[uVar27 + 0xf >> 4]];
                  }
                  else {
                    uVar18 = (ulonglong)(uVar23 & 0xfffffff0);
                    if (uVar18 < 0x7ff1) {
                      bVar16 = (&DAT_14c841e00)[uVar23 >> 4];
                      uVar21 = 0x32;
                      if (0x32 < bVar16) {
                        uVar21 = (ulonglong)bVar16;
                      }
                      uVar24 = 0x32 - (ulonglong)bVar16;
                      do {
                        uVar27 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar24 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar24 & 0xffffffff] & 0xf) == 0) goto LAB_14372a9b9;
                        lVar13 = uVar21 + 1 + uVar24;
                        uVar24 = uVar24 - 1;
                      } while (lVar13 != 0x33);
                    }
                    uVar27 = 0x10;
                    if (0x10 < DAT_14c841df8) {
                      uVar27 = (ulonglong)DAT_14c841df8;
                    }
                    uVar27 = -uVar27 & (uVar18 + uVar27) - 1;
                  }
                }
                else {
                  uVar27 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar27,0);
                  iVar8 = *(int *)(param_1 + 0x30);
                }
              }
LAB_14372a9b9:
              iVar10 = (int)(uVar27 >> 2);
              iVar17 = -0x20;
              if ((int)uVar7 <= iVar10) {
                iVar17 = iVar10 << 5;
              }
            }
            *(int *)(param_1 + 0x34) = iVar17;
            FUN_1446efbd8(lVar25,iVar8);
            iVar17 = *(int *)(param_1 + 0x30) + 1;
            uVar27 = local_108;
          }
          iVar8 = iVar17 + 0x1f;
          if (-1 < iVar17) {
            iVar8 = iVar17;
          }
          *(int *)(param_1 + 0x30) = iVar17;
          if (iVar17 % 0x20 != 0) {
            lVar13 = *(longlong *)(param_1 + 0x28);
            if (*(longlong *)(param_1 + 0x28) == 0) {
              lVar13 = lVar25;
            }
            bVar16 = -(char)(iVar17 % 0x20);
            *(uint *)(lVar13 + (longlong)(iVar8 >> 5) * 4) =
                 (uint)(*(int *)(lVar13 + (longlong)(iVar8 >> 5) * 4) << (bVar16 & 0x1f)) >>
                 (bVar16 & 0x1f);
          }
        }
        lVar13 = (longlong)(int)uVar27;
        if (*(longlong *)(param_1 + 0x28) != 0) {
          lVar25 = *(longlong *)(param_1 + 0x28);
        }
        bVar16 = (byte)iVar20 & 0x1f;
        puVar14 = (uint *)(lVar25 + (longlong)(iVar22 >> 5) * 4);
        *puVar14 = *puVar14 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
      }
      else {
        uVar27 = (ulonglong)*(uint *)(param_1 + 0x38);
        lVar13 = (longlong)(int)*(uint *)(param_1 + 0x38);
        iVar20 = *(int *)(*(longlong *)(param_1 + 8) + 4 + lVar13 * 0x18);
        *(int *)(param_1 + 0x38) = iVar20;
        iVar8 = *(int *)(param_1 + 0x3c) + -1;
        *(int *)(param_1 + 0x3c) = iVar8;
        if (iVar8 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar20 * 0x18) = 0xffffffff;
        }
      }
      iVar20 = (int)uVar27;
      lVar25 = param_1 + 0x18;
      if (*(longlong *)(param_1 + 0x28) != 0) {
        lVar25 = *(longlong *)(param_1 + 0x28);
      }
      iVar8 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar8 = iVar20;
      }
      puVar14 = (uint *)(lVar25 + (longlong)(iVar8 >> 5) * 4);
      *puVar14 = *puVar14 | 1 << ((byte)uVar27 & 0x1f);
      puVar2 = (ulonglong *)(*(longlong *)(param_1 + 8) + lVar13 * 0x18);
      *puVar2 = (ulonglong)param_2;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      bVar16 = DAT_14c950c29;
      puVar2[1] = (ulonglong)plVar12;
      if ((~bVar16 & 1) == 0 && plVar12 != (longlong *)0x0) {
        FUN_1456cec3c(plVar12);
        bVar16 = DAT_14c950c29;
      }
      *(undefined4 *)(puVar2 + 2) = 0xffffffff;
      uVar18 = *puVar2;
      if (((bVar16 & 1) != 0) && (uVar18 != 0)) {
        FUN_1456cec3c(uVar18);
      }
      uVar7 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      uVar7 = uVar7 >> 0x10 ^ uVar7;
      iVar20 = *(int *)(param_1 + 0x10);
      iVar8 = *(int *)(param_1 + 0x3c);
      iVar17 = iVar20;
      if (iVar20 - iVar8 != 1) {
        uVar18 = *puVar2;
        if ((DAT_14c950c29 == 1) && (uVar18 != 0)) {
          FUN_1456cec3c(uVar18);
          iVar20 = *(int *)(param_1 + 0x10);
          iVar8 = *(int *)(param_1 + 0x3c);
        }
        iVar17 = iVar8;
        if (iVar20 != iVar8) {
          lVar13 = param_1 + 0x40;
          if (*(longlong *)(param_1 + 0x48) != 0) {
            lVar13 = *(longlong *)(param_1 + 0x48);
          }
          iVar22 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & uVar7) * 4);
          iVar17 = iVar20;
          bVar16 = DAT_14c950c29;
          if (iVar22 != -1) {
            do {
              if (((bVar16 & 1) != 0) && (uVar18 != 0)) {
                local_108 = uVar27;
                FUN_1456cec3c(uVar18);
                uVar27 = local_108;
                bVar16 = DAT_14c950c29;
              }
              lVar13 = (longlong)iVar22;
              uVar21 = *(ulonglong *)(*plVar1 + lVar13 * 0x18);
              if (((bVar16 & 1) != 0) && (uVar21 != 0)) {
                local_108 = uVar27;
                local_100 = uVar18;
                FUN_1456cec3c(uVar21);
                uVar27 = local_108;
                uVar18 = local_100;
                bVar16 = DAT_14c950c29;
              }
              if (((bVar16 & 1) != 0) && (uVar18 != 0)) {
                local_108 = uVar27;
                local_100 = uVar18;
                FUN_1456cec3c(uVar18);
                uVar27 = local_108;
                uVar18 = local_100;
                bVar16 = DAT_14c950c29;
              }
              if (uVar21 == uVar18) {
                uVar4 = *(undefined4 *)((longlong)puVar2 + 4);
                uVar18 = puVar2[1];
                uVar5 = *(undefined4 *)((longlong)puVar2 + 0xc);
                puVar3 = (undefined4 *)(*plVar1 + lVar13 * 0x18);
                *puVar3 = (int)*puVar2;
                puVar3[1] = uVar4;
                puVar3[2] = (int)uVar18;
                puVar3[3] = uVar5;
                FUN_147d6c2a6(plVar1,uVar27 & 0xffffffff);
                goto LAB_14372a491;
              }
              iVar22 = *(int *)(*plVar1 + 0x10 + lVar13 * 0x18);
            } while (iVar22 != -1);
            iVar8 = *(int *)(param_1 + 0x3c);
            iVar17 = *(int *)(param_1 + 0x10);
          }
        }
      }
      uVar9 = iVar17 - iVar8;
      iVar20 = 1;
      if (3 < uVar9) {
        uVar18 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
        lVar13 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar20 = 1 << ((byte)lVar13 & 0x1f);
      }
      if (((int)uVar9 < 1) || (iVar20 <= *(int *)(param_1 + 0x50))) {
        uVar7 = *(int *)(param_1 + 0x50) - 1U & uVar7;
        *(uint *)((longlong)puVar2 + 0x14) = uVar7;
        lVar13 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar13 = param_1 + 0x40;
        }
        *(undefined4 *)(puVar2 + 2) =
             *(undefined4 *)
              (lVar13 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)(int)uVar7) * 4);
        lVar13 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar13 = param_1 + 0x40;
        }
        *(int *)(lVar13 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)(int)uVar7) * 4) =
             (int)uVar27;
      }
      else {
        *(int *)(param_1 + 0x50) = iVar20;
        FUN_140792024(plVar1);
      }
LAB_14372a491:
      plVar12[5] = param_1;
      (**(code **)(*plVar12 + 0x2a8))(plVar12,param_1);
      uVar7 = *(uint *)(param_1 + 0x80);
      if (uVar7 == 0) {
        uVar18 = 1;
        uVar27 = 0;
        local_100 = (ulonglong)local_100._4_4_ << 0x20;
        uVar9 = 0;
      }
      else {
        puVar14 = *(uint **)(param_1 + 0x78);
        if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
          puVar14 = (uint *)(param_1 + 0x68);
        }
        uVar9 = *puVar14;
        if (uVar9 == 0) {
          iVar20 = uVar7 + 0x1e;
          if (-1 < (int)(uVar7 - 1)) {
            iVar20 = uVar7 - 1;
          }
          uVar27 = 0;
          uVar18 = (ulonglong)(uint)(iVar20 >> 5);
          if (iVar20 >> 5 < 1) {
            uVar18 = uVar27;
          }
          local_100 = local_100 & 0xffffffff00000000;
          do {
            if (uVar18 == uVar27) goto LAB_14372a554;
            local_100 = CONCAT44(local_100._4_4_,(int)local_100 + 0x20);
            uVar9 = puVar14[uVar27 + 1];
            uVar27 = uVar27 + 1;
          } while (uVar9 == 0);
        }
        else {
          uVar27 = 0;
          local_100 = (ulonglong)local_100._4_4_ << 0x20;
        }
        uVar18 = (ulonglong)(-uVar9 & uVar9);
        uVar21 = uVar18 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar9 = ((int)local_100 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if ((int)uVar7 <= (int)uVar9) {
          uVar9 = uVar7;
        }
      }
      if (uVar9 != uVar7) {
        uVar23 = 0xffffffff;
        uVar21 = DAT_14c950d78;
        local_f8 = (ulonglong)uVar7;
        local_f0 = (uint *)(param_1 + 0x68);
        do {
          puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x58) + (longlong)(int)uVar9 * 0x18);
          uVar24 = *puVar2;
          if (uVar21 == 0) {
            local_d8 = FUN_1449e2820;
            local_120 = FUN_14081d0ea;
            local_128 = FUN_14081d0ea;
            local_130 = &local_d8;
            local_138 = &LAB_1468b50ee;
            local_140 = FUN_1427f23a3;
            local_148 = L"Engine";
            local_150 = 0;
            local_158 = 0x10004001;
            local_160 = 8;
            local_168 = 0x28;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
            uVar21 = DAT_14c950d78;
            if (DAT_14c950d78 != 0) goto LAB_14372a5ae;
            uVar21 = 0;
LAB_14372a5c8:
            uVar24 = *puVar2;
            if ((uVar24 != 0) &&
               ((*(int *)(uVar24 + 0x38) <= *(int *)(param_2 + 0x38) &&
                (local_108 = uVar21,
                *(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(uVar24 + 0x38) * 8)
                == uVar24 + 0x30)))) {
LAB_14372a5fb:
              plVar1 = (longlong *)puVar2[1];
              iVar20 = (int)plVar1[1];
              *(uint *)(plVar1 + 1) = iVar20 + 1U;
              if (*(uint *)((longlong)plVar1 + 0xc) < iVar20 + 1U) {
                FUN_14019835c(plVar1,iVar20);
              }
              *(longlong **)(*plVar1 + (longlong)iVar20 * 8) = plVar12;
              local_108 = DAT_14c950d78;
              uVar21 = local_108;
            }
          }
          else {
LAB_14372a5ae:
            if ((*(int *)(uVar24 + 0x38) < *(int *)(uVar21 + 0x38)) ||
               (*(longlong *)(*(longlong *)(uVar24 + 0x30) + (longlong)*(int *)(uVar21 + 0x38) * 8)
                != uVar21 + 0x30)) goto LAB_14372a5c8;
            uVar24 = *puVar2;
            if ((uVar24 != 0) && ((*(byte *)(uVar24 + 0xd5) & 0x40) != 0)) {
              if (uVar21 == 0) {
                local_d8 = FUN_1449e2820;
                local_120 = FUN_14081d0ea;
                local_128 = FUN_14081d0ea;
                local_130 = &local_d8;
                local_138 = &LAB_1468b50ee;
                local_140 = FUN_1427f23a3;
                local_148 = L"Engine";
                local_150 = 0;
                local_158 = 0x10004001;
                local_160 = 8;
                local_168 = 0x28;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
                uVar21 = DAT_14c950d78;
              }
              if (uVar21 != uVar24) {
                pcVar11 = param_2;
                do {
                  if (0 < (longlong)*(int *)(pcVar11 + 0x1e0)) {
                    lVar13 = 0;
                    do {
                      lVar25 = *(longlong *)(*(longlong *)(pcVar11 + 0x1d8) + lVar13);
                      if (((lVar25 != 0) && (*(int *)(uVar24 + 0x38) <= *(int *)(lVar25 + 0x38))) &&
                         (local_108 = uVar21,
                         *(longlong *)
                          (*(longlong *)(lVar25 + 0x30) + (longlong)*(int *)(uVar24 + 0x38) * 8) ==
                         uVar24 + 0x30)) goto LAB_14372a5fb;
                      lVar13 = lVar13 + 0x10;
                    } while ((longlong)*(int *)(pcVar11 + 0x1e0) * 0x10 != lVar13);
                  }
                  pcVar11 = *(code **)(pcVar11 + 0x40);
                } while (pcVar11 != (code *)0x0);
              }
            }
          }
          local_108 = uVar21;
          uVar23 = uVar23 & ~(uint)uVar18;
          puVar14 = *(uint **)(param_1 + 0x78);
          if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
            puVar14 = local_f0;
          }
          uVar7 = *(uint *)(param_1 + 0x80);
          iVar20 = (int)uVar27;
          lVar13 = (longlong)iVar20;
          uVar9 = puVar14[lVar13] & uVar23;
          if (uVar9 == 0) {
            iVar8 = uVar7 + 0x1e;
            if (-1 < (int)(uVar7 - 1)) {
              iVar8 = uVar7 - 1;
            }
            iVar8 = iVar8 >> 5;
            local_100 = CONCAT44(local_100._4_4_,(int)local_100 + 0x20);
            iVar17 = iVar8;
            if (iVar8 < iVar20) {
              iVar17 = iVar20;
            }
            if (iVar20 < iVar8) {
              lVar25 = 0;
              do {
                uVar9 = puVar14[lVar13 + lVar25 + 1];
                if (uVar9 != 0) {
                  uVar27 = (ulonglong)(iVar20 + (int)lVar25 + 1);
                  uVar23 = 0xffffffff;
                  goto LAB_14372a75d;
                }
                local_100 = CONCAT44(local_100._4_4_,(int)local_100 + 0x20);
                lVar25 = lVar25 + 1;
              } while (iVar17 - lVar13 != lVar25);
              uVar23 = 0xffffffff;
              iVar20 = iVar17;
            }
            uVar27 = (ulonglong)(iVar20 + 1);
            uVar9 = uVar7;
          }
          else {
LAB_14372a75d:
            uVar18 = (ulonglong)(-uVar9 & uVar9);
            uVar21 = uVar18 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            uVar9 = ((int)local_100 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
            if ((int)uVar7 <= (int)uVar9) {
              uVar9 = uVar7;
            }
          }
          uVar21 = local_108;
        } while (uVar9 != (uint)local_f8);
      }
LAB_14372a554:
      lVar13 = FUN_1407bb686();
      uVar15 = FUN_1407bb416();
      FUN_1407bb482(uVar15,*(undefined8 *)(lVar13 + 0x10));
      uVar26 = local_109;
      goto LAB_14372a34c;
    }
    lVar13 = FUN_1407bb686();
    uVar15 = FUN_1407bb416();
    FUN_1407bb482(uVar15,*(undefined8 *)(lVar13 + 0x10));
  }
LAB_14372a34a:
  plVar12 = (longlong *)0x0;
  goto LAB_14372a34c;
  while (iVar20 = *(int *)(*plVar1 + 0x10 + lVar13 * 0x18), iVar20 != -1) {
LAB_143729e63:
    if ((param_2 != (code *)0x0) && ((bVar16 & 1) != 0)) {
      FUN_1456cec3c(param_2);
      bVar16 = DAT_14c950c29;
    }
    lVar13 = (longlong)iVar20;
    pcVar11 = *(code **)(*plVar1 + lVar13 * 0x18);
    if (((bVar16 & 1) != 0) && (pcVar11 != (code *)0x0)) {
      FUN_1456cec3c(pcVar11);
      bVar16 = DAT_14c950c29;
    }
    if ((param_2 != (code *)0x0) && ((bVar16 & 1) != 0)) {
      FUN_1456cec3c(param_2);
      bVar16 = DAT_14c950c29;
    }
    if (pcVar11 == param_2) {
      lVar13 = *plVar1 + lVar13 * 0x18;
      if (lVar13 == 0) goto LAB_14372a34a;
      plVar12 = *(longlong **)(lVar13 + 8);
      if (((bVar16 & 1) != 0) && (plVar12 != (longlong *)0x0)) {
        FUN_1456cec3c(plVar12);
      }
      break;
    }
  }
LAB_14372a34c:
  *(undefined1 *)(param_1 + 0xb8) = uVar26;
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return plVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372ab58 FUN_14372ab58 body=195 status=ok
// SIG undefined FUN_14372ab58(void)

void FUN_14372ab58(undefined4 *param_1)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
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
  undefined8 local_58;
  code *local_48 [2];
  undefined8 *local_38;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = *(undefined8 *)(param_1 + 0xc);
  local_88 = *param_1;
  uStack_84 = param_1[1];
  uStack_80 = param_1[2];
  uStack_7c = param_1[3];
  local_78 = param_1[4];
  uStack_74 = param_1[5];
  uStack_70 = param_1[6];
  uStack_6c = param_1[7];
  local_68 = param_1[8];
  uStack_64 = param_1[9];
  uStack_60 = param_1[10];
  uStack_5c = param_1[0xb];
  local_48[0] = (code *)0x0;
  local_38 = (undefined8 *)FUN_14001cc68(0x40,8);
  *local_38 = &PTR_LAB_14aacf350;
  local_38[7] = local_58;
  *(undefined4 *)(local_38 + 5) = local_68;
  *(undefined4 *)((longlong)local_38 + 0x2c) = uStack_64;
  *(undefined4 *)(local_38 + 6) = uStack_60;
  *(undefined4 *)((longlong)local_38 + 0x34) = uStack_5c;
  *(undefined4 *)(local_38 + 3) = local_78;
  *(undefined4 *)((longlong)local_38 + 0x1c) = uStack_74;
  *(undefined4 *)(local_38 + 4) = uStack_70;
  *(undefined4 *)((longlong)local_38 + 0x24) = uStack_6c;
  *(undefined4 *)(local_38 + 1) = local_88;
  *(undefined4 *)((longlong)local_38 + 0xc) = uStack_84;
  *(undefined4 *)(local_38 + 2) = uStack_80;
  *(undefined4 *)((longlong)local_38 + 0x14) = uStack_7c;
  if (local_38 + 1 != (undefined8 *)0x0) {
    local_48[0] = FUN_1437312d8;
  }
  FUN_1434130f2(local_48);
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372ac1c FUN_14372ac1c body=1078 status=ok
// SIG undefined FUN_14372ac1c(void)

void FUN_14372ac1c(longlong param_1,longlong param_2,float param_3,undefined1 param_4,
                  undefined1 param_5,float param_6,longlong *param_7,float param_8,float param_9)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  float fVar14;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  float local_e4;
  undefined1 local_e0;
  undefined1 local_df;
  longlong local_d8;
  int local_d0;
  undefined4 local_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b0;
  longlong *local_a8;
  undefined4 *local_a0;
  int local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_b0 = param_2;
  if (param_2 != 0) {
    if (((param_6 != 0.0) || (NAN(param_6))) && ((param_3 != 0.0 || (NAN(param_3))))) {
      iVar8 = (int)param_7[1];
      if (iVar8 != 0) {
        uVar7 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        if (iVar8 < 2) {
          iVar9 = 0;
        }
        else {
          lVar10 = 1;
          lVar11 = 0;
          do {
            lVar4 = *param_7;
            if (param_8 <= *(float *)(lVar4 + 0x28 + lVar11)) {
              lVar12 = (longlong)(int)uStack_c0;
              uVar7 = (int)uStack_c0 + 1;
              uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar7);
              if (uStack_c0._4_4_ < uVar7) {
                FUN_147a759b8(&local_c8);
              }
              lVar1 = local_c8;
              plVar13 = *(longlong **)(lVar4 + lVar11);
              *(longlong **)(local_c8 + lVar12 * 0x18) = plVar13;
              if (plVar13 != (longlong *)0x0) {
                (**(code **)(*plVar13 + 8))();
              }
              lVar1 = lVar1 + lVar12 * 0x18;
              *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(lVar4 + 8 + lVar11);
              *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(lVar4 + 0x10 + lVar11);
              iVar8 = (int)param_7[1];
            }
            lVar10 = lVar10 + 1;
            lVar11 = lVar11 + 0x18;
          } while (lVar10 < iVar8);
          iVar9 = (int)uStack_c0;
          uVar7 = uStack_c0._4_4_;
        }
        plVar13 = (longlong *)((longlong)(iVar8 + -1) * 0x18 + *param_7);
        uStack_c0 = CONCAT44(uStack_c0._4_4_,iVar9 + 1U);
        if (uVar7 < iVar9 + 1U) {
          FUN_147a759b8(&local_c8);
        }
        plVar2 = (longlong *)(local_c8 + (longlong)iVar9 * 0x18);
        plVar5 = (longlong *)*plVar13;
        *plVar2 = (longlong)plVar5;
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 8))();
        }
        uVar6 = uStack_c0;
        lVar10 = local_c8;
        *(int *)(plVar2 + 1) = (int)plVar13[1];
        *(int *)(plVar2 + 2) = (int)plVar13[2];
        if ((longlong)(int)uStack_c0 == 0) {
          local_d8 = 0;
          local_cc = 0;
          local_d0 = 0;
        }
        else {
          lVar11 = 0;
          do {
            fVar3 = *(float *)(local_c8 + 0x10 + lVar11);
            fVar14 = param_6;
            if (fVar3 <= param_6) {
              fVar14 = fVar3;
            }
            *(float *)(local_c8 + 0x10 + lVar11) = (fVar14 - param_8) + param_9;
            lVar11 = lVar11 + 0x18;
          } while ((longlong)(int)uStack_c0 * 0x18 != lVar11);
          local_f8 = 0;
          uStack_f0._0_4_ = (int)uStack_c0;
          FUN_1479d7102(&local_f8,uStack_c0 & 0xffffffff,0);
          FUN_1479d7175(local_f8,lVar10,uVar6 & 0xffffffff);
          local_d8 = local_f8;
          local_cc = uStack_f0._4_4_;
          local_d0 = (int)uStack_f0;
        }
        local_e8 = 0;
        local_df = param_5;
        local_f8 = 0;
        uStack_f0 = 0;
        local_e4 = param_3;
        local_e0 = param_4;
        FUN_1458791db(0,0);
        if (local_f8 != 0) {
          FUN_1400020a8();
        }
        local_a8 = &local_b0;
        local_a0 = &local_e8;
        FUN_147d6cb20((longlong *)(param_1 + 0x18),&local_94);
        lVar10 = *(longlong *)(param_1 + 0x18);
        FUN_1458791db(local_d8,local_d0);
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
        plVar13 = (longlong *)(lVar10 + (longlong)local_94 * 0x30 + 0x18);
        iVar8 = FUN_147d68846(plVar13);
        plVar13 = (longlong *)((longlong)iVar8 * 0x18 + *plVar13);
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c844850) {
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
        plVar5 = DAT_14c844840;
        plVar2 = (longlong *)*plVar13;
        if (plVar2 != DAT_14c844840) {
          *plVar13 = (longlong)DAT_14c844840;
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 8))();
          }
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
        *(undefined4 *)(plVar13 + 1) = DAT_14c844848;
        *(float *)(plVar13 + 2) = (param_6 - param_8) + param_9;
        FUN_1458791db(local_c8,uStack_c0 & 0xffffffff);
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372b054 FUN_14372b054 body=1012 status=ok
// SIG undefined FUN_14372b054(void)

void FUN_14372b054(longlong *param_1,longlong param_2,int *param_3,int *param_4)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  undefined1 auStack_2b8 [32];
  undefined8 *local_298;
  int local_28c;
  double local_288;
  double local_280;
  longlong local_278 [8];
  undefined4 local_234;
  undefined1 local_1c0;
  undefined1 local_1be;
  undefined4 local_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if ((longlong)(int)param_1[1] != 0) {
    lVar7 = 0;
    do {
      if ((*(int *)(*param_1 + 8 + lVar7) != 0) && (*(longlong *)(*param_1 + lVar7) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_2b8);
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)param_1[1] * 0x10 != lVar7);
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (*(longlong *)(DAT_14cb0d2b0 + 0xd0) != 0) {
    fVar9 = (float)FUN_140324d4e();
    (**(code **)(**(longlong **)(param_2 + 0x58) + 0x28))(*(longlong **)(param_2 + 0x58),local_278);
    local_28c = (int)(fVar9 * 1.1);
    if (*(char *)((longlong)param_3 + 9) == '\x01') {
      iVar1 = *param_3;
      if ((-1 < (longlong)iVar1) && (iVar1 < param_3[6])) {
        plVar4 = (longlong *)(*(longlong *)(param_3 + 4) + (longlong)iVar1 * 0x18);
        plVar5 = (longlong *)*plVar4;
        if (*(code **)(*plVar5 + 0x50) != FUN_144828418) {
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x50))();
        }
        FUN_1447a1fc0(plVar5);
        plVar5 = (longlong *)*plVar4;
        pcVar2 = *(code **)(*plVar5 + 0x28);
        if (pcVar2 == FUN_14482841c) {
          plVar6 = plVar5 + 3;
          if (plVar5[5] != 0) {
            plVar6 = (longlong *)(plVar5[5] + 8);
          }
        }
        else if (pcVar2 == (code *)&LAB_14010c34c) {
          plVar6 = plVar5 + 2;
        }
        else {
          plVar6 = (longlong *)(*pcVar2)(plVar5);
        }
        if (1 < (int)plVar6[1]) {
          iVar1 = param_4[3];
          param_4[3] = iVar1 + -0x18;
          local_280 = (double)(iVar1 + -0x18);
          local_288 = (double)((param_4[2] - *param_4) / 2 + *param_4);
          local_298 = &DAT_149e1e2f8;
          FUN_140114bb6(local_278,&local_288,plVar4,*(undefined8 *)(DAT_14cb0d2b0 + 0xd0));
          local_234 = 0x3dcccccd;
          local_1be = 1;
          local_1c0 = 1;
          local_1bc = 0;
          uStack_1b8 = 0;
          uStack_1b4 = 0;
          uStack_1b0 = 0x3f800000;
          (**(code **)(local_278[0] + 0x18))(local_278,param_2);
          if (*(int *)(param_2 + 0xac) == 1) {
            FUN_14376e4da(param_2,0);
          }
          *(float *)(param_1 + 0xd) = (float)local_28c + *(float *)(param_1 + 0xd);
          FUN_140b2399e(local_278);
        }
      }
    }
    else {
      lVar7 = (longlong)param_3[6];
      if (0 < lVar7) {
        fVar9 = (float)local_28c;
        uVar8 = lVar7 + 1;
        lVar7 = lVar7 * 0x18;
        do {
          lVar7 = lVar7 + -0x18;
          lVar3 = *(longlong *)(param_3 + 4);
          plVar4 = *(longlong **)(lVar3 + lVar7);
          if (*(code **)(*plVar4 + 0x50) != FUN_144828418) {
            plVar4 = (longlong *)(**(code **)(*plVar4 + 0x50))();
          }
          plVar5 = (longlong *)(lVar3 + lVar7);
          FUN_1447a1fc0(plVar4);
          plVar4 = (longlong *)*plVar5;
          pcVar2 = *(code **)(*plVar4 + 0x28);
          if (pcVar2 == FUN_14482841c) {
            plVar6 = plVar4 + 3;
            if (plVar4[5] != 0) {
              plVar6 = (longlong *)(plVar4[5] + 8);
            }
          }
          else if (pcVar2 == (code *)&LAB_14010c34c) {
            plVar6 = plVar4 + 2;
          }
          else {
            plVar6 = (longlong *)(*pcVar2)(plVar4);
          }
          if (1 < (int)plVar6[1]) {
            local_280 = (double)param_4[3];
            local_288 = (double)((param_4[2] - *param_4) / 2 + *param_4);
            local_298 = &DAT_149e1e2f8;
            FUN_140114bb6(local_278,&local_288,plVar5,*(undefined8 *)(DAT_14cb0d2b0 + 0xd0));
            local_234 = 0x3dcccccd;
            local_1be = 1;
            local_1c0 = 1;
            local_1bc = 0;
            uStack_1b8 = 0;
            uStack_1b4 = 0;
            uStack_1b0 = 0x3f800000;
            (**(code **)(local_278[0] + 0x18))(local_278,param_2);
            if (*(int *)(param_2 + 0xac) == 1) {
              FUN_14376e4da(param_2,0);
            }
            param_4[3] = param_4[3] - local_28c;
            *(float *)(param_1 + 0xd) = *(float *)(param_1 + 0xd) + fVar9;
            FUN_140b2399e(local_278);
          }
          uVar8 = uVar8 - 1;
        } while (1 < uVar8);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14372b470 FUN_14372b470 body=481 status=ok
// SIG undefined FUN_14372b470(void)

undefined8 FUN_14372b470(longlong param_1,float param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  undefined2 local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x18);
  local_58 = param_1 + 0x28;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_1449c0562(&local_60);
  }
  local_88 = local_50;
  iStack_84 = iStack_4c;
  local_80 = local_48;
  local_7c = local_44;
  local_98 = local_60;
  local_90 = local_58;
  local_68 = 0;
  local_a0 = plVar1;
  local_78 = plVar1;
  local_70 = plVar1;
  if (iStack_4c < *(int *)(local_58 + 0x18)) {
    fVar6 = -1.0;
    uVar4 = 0;
    do {
      lVar3 = *local_a0;
      lVar5 = (longlong)iStack_84 * 0x30;
      iVar2 = *(int *)(lVar3 + 8 + lVar5);
      if (iVar2 == *(int *)(lVar3 + 0x20 + lVar5) + -1) {
        FUN_147d6c9f8(local_78);
        local_68 = CONCAT11(local_68._1_1_,1);
      }
      else {
        lVar3 = lVar3 + lVar5;
        if (*(float *)(*(longlong *)(lVar3 + 0x18) + 0x28 + (longlong)iVar2 * 0x18) <= param_2) {
          *(int *)(lVar3 + 8) = iVar2 + 1;
        }
        if (fVar6 < *(float *)(lVar3 + 0xc)) {
          uVar4 = *(undefined8 *)(*local_a0 + (longlong)iStack_84 * 0x30);
          fVar6 = *(float *)(lVar3 + 0xc);
        }
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (iStack_84 < *(int *)(local_90 + 0x18));
    if (((local_68 & 1) != 0) && (local_68._1_1_ == '\x01')) {
      FUN_147d6ce26(local_70,(int)local_70[1] - *(int *)((longlong)local_70 + 0x34));
    }
  }
  else {
    uVar4 = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372b652 FUN_14372b652 body=3787 status=ok
// SIG undefined FUN_14372b652(void)

void FUN_14372b652(longlong *param_1,undefined8 param_2,int *param_3,undefined4 param_4)

{
  ulonglong uVar1;
  float fVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  size_t sVar7;
  longlong *plVar8;
  longlong *plVar9;
  wchar_t **ppwVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  wchar_t *pwVar17;
  longlong lVar18;
  undefined8 uVar19;
  uint *puVar20;
  longlong *plVar21;
  uint uVar22;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  undefined8 local_190;
  undefined8 local_180;
  longlong local_178;
  uint local_170;
  int local_16c;
  int *local_168;
  longlong *local_160;
  uint *local_158;
  ulonglong local_150;
  ulonglong local_148;
  wchar_t *local_140;
  undefined4 local_138;
  wchar_t *local_130;
  ulonglong uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  int local_e0;
  int local_dc;
  longlong local_d8;
  ulonglong uStack_d0;
  wchar_t *local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((longlong)(int)param_1[1] != 0) {
    lVar23 = 0;
    do {
      if ((*(int *)(*param_1 + 8 + lVar23) != 0) && (*(longlong *)(*param_1 + lVar23) != 0)) {
        lVar23 = FUN_14372b470(param_1,param_4);
        if ((lVar23 == 0) || ((int)param_1[4] == *(int *)((longlong)param_1 + 0x4c)))
        goto LAB_14372b803;
        plVar21 = param_1 + 10;
        if ((longlong *)param_1[0xb] != (longlong *)0x0) {
          plVar21 = (longlong *)param_1[0xb];
        }
        iVar5 = *(int *)((longlong)plVar21 +
                        (ulonglong)
                        ((int)param_1[0xc] - 1U &
                        (int)lVar23 + (int)((ulonglong)lVar23 >> 0x20) * 0x17) * 4);
        if (iVar5 == -1) goto LAB_14372b803;
        goto LAB_14372b7d5;
      }
      lVar23 = lVar23 + 0x10;
    } while ((longlong)(int)param_1[1] * 0x10 != lVar23);
  }
  if ((((*(uint *)(DAT_14cb0d2b0 + 0xc3c) & 3) == 1) && (*(longlong *)(DAT_14cb0d2b0 + 0xd0) != 0))
     && (0 < (param_3[3] - param_3[1]) * (param_3[2] - *param_3))) {
    local_180 = param_2;
    FUN_147d68902(param_2,param_3);
    puVar20 = (uint *)(param_1 + 5);
    local_c8 = (wchar_t *)0x0;
    uStack_c0 = 0;
    iVar5 = (int)param_1[8];
    local_160 = param_1;
    if (iVar5 == 0) {
      uVar26 = 1;
      uVar25 = 0;
      iVar24 = 0;
      iVar12 = 0;
    }
    else {
      puVar11 = (uint *)param_1[7];
      if ((uint *)param_1[7] == (uint *)0x0) {
        puVar11 = puVar20;
      }
      uVar22 = *puVar11;
      if (uVar22 == 0) {
        iVar24 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar24 = iVar5 + -1;
        }
        uVar25 = 0;
        uVar26 = (ulonglong)(uint)(iVar24 >> 5);
        if (iVar24 >> 5 < 1) {
          uVar26 = uVar25;
        }
        iVar24 = 0;
        do {
          if (uVar26 == uVar25) goto LAB_14372c306;
          iVar24 = iVar24 + 0x20;
          uVar22 = puVar11[uVar25 + 1];
          uVar25 = uVar25 + 1;
        } while (uVar22 == 0);
      }
      else {
        uVar25 = 0;
        iVar24 = 0;
      }
      uVar26 = (ulonglong)(-uVar22 & uVar22);
      uVar1 = uVar26 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      iVar12 = (iVar24 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
      if (iVar5 <= iVar12) {
        iVar12 = iVar5;
      }
    }
    if (iVar12 < iVar5) {
      uVar22 = 0xffffffff;
      local_168 = param_3;
      local_158 = puVar20;
      do {
        if (*(char *)(param_1[3] + 0x10 + (longlong)iVar12 * 0x30) == '\0') {
          lVar23 = param_1[3] + (longlong)iVar12 * 0x30;
          lVar18 = lVar23 + 8;
          local_170 = uVar22;
          local_16c = iVar24;
          local_150 = uVar26;
          FUN_14005eb28(&local_c8,0x100);
          plVar21 = *(longlong **)(lVar23 + 0x18);
          plVar9 = (longlong *)*plVar21;
          local_178 = lVar18;
          if (*(code **)(*plVar9 + 0x50) != FUN_144828418) {
            plVar9 = (longlong *)(**(code **)(*plVar9 + 0x50))();
          }
          FUN_1447a1fc0(plVar9);
          plVar9 = (longlong *)*plVar21;
          pcVar3 = *(code **)(*plVar9 + 0x28);
          local_148 = uVar25;
          if (pcVar3 == FUN_14482841c) {
            ppwVar10 = (wchar_t **)(plVar9 + 3);
            if (plVar9[5] != 0) {
              ppwVar10 = (wchar_t **)(plVar9[5] + 8);
            }
          }
          else if (pcVar3 == (code *)&LAB_14010c34c) {
            ppwVar10 = (wchar_t **)(plVar9 + 2);
          }
          else {
            ppwVar10 = (wchar_t **)(*pcVar3)(plVar9);
          }
          if (&local_c8 != ppwVar10) {
            uVar22 = *(uint *)(ppwVar10 + 1);
            pwVar17 = *ppwVar10;
            uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar22);
            if (uVar22 == 0 && uStack_c0._4_4_ == 0) {
              uStack_c0 = (ulonglong)uVar22;
            }
            else {
              FUN_1446dd670(&local_c8,uVar22);
              if (uVar22 != 0) {
                memcpy(local_c8,pwVar17,(longlong)(int)uVar22 * 2);
              }
            }
          }
          plVar9 = (longlong *)(local_178 + 0x10);
          fVar2 = *(float *)(plVar21 + 2);
          fVar27 = 0.0;
          if (1 < *(int *)(local_178 + 0x18)) {
            lVar23 = 1;
            lVar18 = 0x18;
            do {
              lVar4 = *plVar9;
              plVar21 = *(longlong **)(lVar4 + lVar18);
              if (*(code **)(*plVar21 + 0x50) != FUN_144828418) {
                plVar21 = (longlong *)(**(code **)(*plVar21 + 0x50))();
              }
              FUN_1447a1fc0(plVar21);
              plVar21 = *(longlong **)(lVar4 + lVar18);
              pcVar3 = *(code **)(*plVar21 + 0x28);
              if (pcVar3 == FUN_14482841c) {
                plVar8 = plVar21 + 3;
                if (plVar21[5] != 0) {
                  plVar8 = (longlong *)(plVar21[5] + 8);
                }
              }
              else if (pcVar3 == (code *)&LAB_14010c34c) {
                plVar8 = plVar21 + 2;
              }
              else {
                plVar8 = (longlong *)(*pcVar3)(plVar21);
              }
              iVar5 = (int)plVar8[1] + -1;
              if ((int)plVar8[1] == 0) {
                iVar5 = 0;
              }
              FUN_1400020e8(&local_c8,*plVar8,iVar5);
              lVar23 = lVar23 + 1;
              lVar18 = lVar18 + 0x18;
            } while (lVar23 < *(int *)(local_178 + 0x18));
            fVar27 = *(float *)(lVar4 + -8 + lVar18) - fVar2;
          }
          while( true ) {
            local_190 = CONCAT44(local_190._4_4_,0xffffffff);
            local_198 = (longlong *)((ulonglong)local_198 & 0xffffffff00000000);
            iVar5 = FUN_1447ee042(&local_c8,&DAT_14aac9860,2,1);
            if (iVar5 < 0) break;
            iVar24 = (int)uStack_c0 + -1;
            if ((int)uStack_c0 == 0) {
              iVar24 = 0;
            }
            pwVar17 = L"";
            if ((int)uStack_c0 != 0) {
              pwVar17 = local_c8;
            }
            iVar12 = (iVar24 - iVar5) + -2;
            if (iVar24 <= iVar12) {
              iVar12 = iVar24;
            }
            if (iVar12 < 1) {
              iVar12 = 0;
            }
            FUN_140056680(&local_d8,
                          (longlong)pwVar17 + ((longlong)iVar24 * 2 - (ulonglong)(uint)(iVar12 * 2))
                         );
            iVar24 = (int)uStack_c0 + -1;
            pwVar17 = local_c8;
            if ((int)uStack_c0 == 0) {
              iVar24 = 0;
              pwVar17 = L"";
            }
            if (iVar5 < iVar24) {
              iVar24 = iVar5;
            }
            if (iVar24 < 1) {
              iVar24 = 0;
            }
            FUN_14006620a(&local_f8,pwVar17,iVar24);
            iVar5 = (int)local_f0;
            iVar12 = ((int)local_f0 == 0) + 1;
            local_e8 = local_f8;
            local_f8 = (longlong *)0x0;
            local_e0 = (int)local_f0;
            iVar24 = local_f0._4_4_;
            local_dc = local_f0._4_4_;
            local_f0 = 0;
            iVar14 = iVar12 + iVar5;
            if (iVar14 < iVar5) goto LAB_14372c5c3;
            if (iVar14 < 0) goto LAB_14372c5bc;
            if (iVar24 < iVar14) {
              FUN_1446f8c06(&local_e8);
            }
            FUN_140002184(&local_e8,10);
            FUN_1401c7f3e(&local_130,&local_e8,&local_d8);
            if (local_c8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            local_c8 = local_130;
            uStack_c0 = uStack_128;
            local_130 = (wchar_t *)0x0;
            uStack_128 = 0;
            if (local_e8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_f8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_d8 != 0) {
              FUN_1400020a8();
            }
          }
          local_190 = CONCAT44(local_190._4_4_,0xffffffff);
          local_198 = (longlong *)((ulonglong)local_198 & 0xffffffff00000000);
          iVar5 = FUN_1447ee042(&local_c8,&DAT_149e01ff8,2,1);
          while (-1 < iVar5) {
            iVar24 = (int)uStack_c0 + -1;
            if ((int)uStack_c0 == 0) {
              iVar24 = 0;
            }
            pwVar17 = L"";
            if ((int)uStack_c0 != 0) {
              pwVar17 = local_c8;
            }
            iVar12 = (iVar24 - iVar5) + -2;
            if (iVar24 <= iVar12) {
              iVar12 = iVar24;
            }
            if (iVar12 < 1) {
              iVar12 = 0;
            }
            FUN_140056680(&local_d8,
                          (longlong)pwVar17 + ((longlong)iVar24 * 2 - (ulonglong)(uint)(iVar12 * 2))
                         );
            iVar24 = (int)uStack_c0 + -1;
            pwVar17 = local_c8;
            if ((int)uStack_c0 == 0) {
              iVar24 = 0;
              pwVar17 = L"";
            }
            if (iVar5 < iVar24) {
              iVar24 = iVar5;
            }
            if (iVar24 < 1) {
              iVar24 = 0;
            }
            FUN_14006620a(&local_f8,pwVar17,iVar24);
            iVar5 = (int)local_f0;
            iVar12 = ((int)local_f0 == 0) + 1;
            local_e8 = local_f8;
            local_f8 = (longlong *)0x0;
            local_e0 = (int)local_f0;
            iVar24 = local_f0._4_4_;
            local_dc = local_f0._4_4_;
            local_f0 = 0;
            iVar14 = iVar12 + iVar5;
            if (iVar14 < iVar5) {
LAB_14372c5c3:
              local_f0 = 0;
              local_f8 = (longlong *)0x0;
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar12);
            }
            if (iVar14 < 0) {
LAB_14372c5bc:
              local_f0 = 0;
              local_f8 = (longlong *)0x0;
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar14);
            }
            if (iVar24 < iVar14) {
              FUN_1446f8c06(&local_e8);
            }
            FUN_140002184(&local_e8,10);
            FUN_1401c7f3e(&local_130,&local_e8,&local_d8);
            if (local_c8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            local_c8 = local_130;
            uStack_c0 = uStack_128;
            local_130 = (wchar_t *)0x0;
            uStack_128 = 0;
            if (local_e8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_f8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_d8 != 0) {
              FUN_1400020a8();
            }
            local_190 = CONCAT44(local_190._4_4_,0xffffffff);
            local_198 = (longlong *)((ulonglong)local_198 & 0xffffffff00000000);
            iVar5 = FUN_1447ee042(&local_c8,&DAT_149e01ff8,2,1);
          }
          iVar5 = (int)uStack_c0 + -1;
          if ((int)uStack_c0 == 0) {
            iVar5 = 0;
          }
          local_d8 = 0;
          uStack_d0 = 0;
          local_110 = *(longlong *)(DAT_14cb0d2b0 + 0xd0);
          local_130 = (wchar_t *)0x0;
          uStack_128 = (ulonglong)(uint)(float)(local_168[2] - *local_168);
          local_120 = 0x3ff0000000000000;
          local_118 = 0x3ff0000000000000;
          if ((local_110 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c();
          }
          local_108 = 0;
          uStack_100 = 0;
          local_140 = L"";
          if ((int)uStack_c0 != 0) {
            local_140 = local_c8;
          }
          uVar6 = 0;
          if (local_140 != (wchar_t *)0x0) {
            sVar7 = wcslen(local_140);
            uVar6 = (int)sVar7;
          }
          local_190 = 0;
          local_198 = &local_d8;
          local_138 = uVar6;
          FUN_14376f6ae(local_180,&local_130,0,&local_140);
          lVar23 = local_178;
          FUN_1458791db(*(undefined8 *)(local_178 + 0x10),*(undefined4 *)(local_178 + 0x18));
          *(undefined4 *)(lVar23 + 0x18) = 0;
          if (*(int *)(lVar23 + 0x1c) != 0) {
            FUN_147a75946(plVar9,0);
          }
          if (0 < (int)uStack_d0) {
            fVar28 = 0.0;
            lVar23 = 0;
            lVar18 = 0;
            do {
              iVar24 = FUN_147d68846(plVar9);
              plVar21 = (longlong *)((longlong)iVar24 * 0x18 + *plVar9);
              FUN_140009b9a(&local_e8,local_d8 + lVar23);
              FUN_140008f88(plVar21,&local_e8);
              if (local_e8 != (longlong *)0x0) {
                (**(code **)(*local_e8 + 0x10))();
              }
              *(float *)(plVar21 + 2) = fVar2 + fVar28;
              plVar8 = (longlong *)*plVar21;
              if (*(code **)(*plVar8 + 0x50) != FUN_144828418) {
                plVar8 = (longlong *)(**(code **)(*plVar8 + 0x50))();
              }
              FUN_1447a1fc0(plVar8);
              plVar21 = (longlong *)*plVar21;
              pcVar3 = *(code **)(*plVar21 + 0x28);
              if (pcVar3 == FUN_14482841c) {
                plVar8 = plVar21 + 3;
                if (plVar21[5] != 0) {
                  plVar8 = (longlong *)(plVar21[5] + 8);
                }
              }
              else if (pcVar3 == (code *)&LAB_14010c34c) {
                plVar8 = plVar21 + 2;
              }
              else {
                plVar8 = (longlong *)(*pcVar3)(plVar21);
              }
              iVar24 = 0;
              if ((int)plVar8[1] != 0) {
                iVar24 = (int)plVar8[1] + -1;
              }
              fVar28 = fVar28 + (float)iVar24 * (fVar27 / (float)iVar5);
              lVar18 = lVar18 + 1;
              lVar23 = lVar23 + 0x20;
            } while (lVar18 < (int)uStack_d0);
          }
          iVar5 = FUN_147d68846(plVar9);
          plVar21 = (longlong *)((longlong)iVar5 * 0x18 + *plVar9);
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
          uVar25 = local_148;
          param_1 = local_160;
          plVar8 = DAT_14c844840;
          plVar9 = (longlong *)*plVar21;
          if (plVar9 != DAT_14c844840) {
            *plVar21 = (longlong)DAT_14c844840;
            if (plVar8 != (longlong *)0x0) {
              (**(code **)(*plVar8 + 8))();
            }
            if (plVar9 != (longlong *)0x0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
          *(undefined4 *)(plVar21 + 1) = DAT_14c844848;
          *(float *)(plVar21 + 2) = fVar2 + fVar27;
          *(undefined1 *)(local_178 + 8) = 1;
          FUN_147d6ce84(local_d8,uStack_d0 & 0xffffffff);
          if (local_d8 != 0) {
            FUN_1400020a8();
          }
          iVar5 = (int)param_1[8];
          puVar20 = local_158;
          uVar26 = local_150;
          iVar24 = local_16c;
          uVar22 = local_170;
        }
        param_3 = local_168;
        uVar22 = uVar22 & ~(uint)uVar26;
        puVar11 = (uint *)param_1[7];
        if ((uint *)param_1[7] == (uint *)0x0) {
          puVar11 = puVar20;
        }
        iVar12 = (int)uVar25;
        lVar23 = (longlong)iVar12;
        uVar13 = puVar11[lVar23] & uVar22;
        if (uVar13 == 0) {
          iVar14 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar14 = iVar5 + -1;
          }
          iVar14 = iVar14 >> 5;
          iVar15 = iVar14;
          if (iVar14 < iVar12) {
            iVar15 = iVar12;
          }
          if (iVar14 <= iVar12) break;
          lVar18 = 0;
          while( true ) {
            iVar24 = iVar24 + 0x20;
            uVar13 = puVar11[lVar23 + lVar18 + 1];
            if (uVar13 != 0) break;
            lVar18 = lVar18 + 1;
            if (iVar15 - lVar23 == lVar18) goto LAB_14372c2ef;
          }
          uVar25 = (ulonglong)(iVar12 + (int)lVar18 + 1);
          uVar22 = 0xffffffff;
        }
        uVar26 = (ulonglong)(-uVar13 & uVar13);
        uVar1 = uVar26 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iVar12 = (iVar24 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
      } while (iVar12 < iVar5);
LAB_14372c2ef:
      if (local_c8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_14372c306:
    lVar23 = FUN_14372b470(param_1,param_4);
    if (lVar23 != 0) {
      if ((int)param_1[4] != *(int *)((longlong)param_1 + 0x4c)) {
        plVar21 = param_1 + 10;
        if ((longlong *)param_1[0xb] != (longlong *)0x0) {
          plVar21 = (longlong *)param_1[0xb];
        }
        iVar5 = *(int *)((longlong)plVar21 +
                        (ulonglong)
                        ((int)param_1[0xc] - 1U &
                        (int)lVar23 + (int)((ulonglong)lVar23 >> 0x20) * 0x17) * 4);
        if (iVar5 != -1) {
          do {
            if (*(longlong *)(param_1[3] + (longlong)iVar5 * 0x30) == lVar23) break;
            iVar5 = *(int *)(param_1[3] + (longlong)iVar5 * 0x30 + 0x28);
          } while (iVar5 != -1);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_1b8);
    }
    if (*(int *)((longlong)param_1 + 0xa4) < (int)param_1[0xf]) {
      puVar20 = (uint *)(param_1 + 0x10);
      iVar5 = (int)param_1[0x13];
      if (iVar5 == 0) {
        uVar26 = 1;
        uVar25 = 0;
        iVar12 = 0;
        iVar24 = 0;
      }
      else {
        puVar11 = (uint *)param_1[0x12];
        if ((uint *)param_1[0x12] == (uint *)0x0) {
          puVar11 = puVar20;
        }
        uVar22 = *puVar11;
        if (uVar22 == 0) {
          iVar24 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar24 = iVar5 + -1;
          }
          uVar25 = 0;
          uVar26 = (ulonglong)(uint)(iVar24 >> 5);
          if (iVar24 >> 5 < 1) {
            uVar26 = uVar25;
          }
          iVar12 = 0;
          do {
            if (uVar26 == uVar25) goto LAB_14372b721;
            iVar12 = iVar12 + 0x20;
            uVar22 = puVar11[uVar25 + 1];
            uVar25 = uVar25 + 1;
          } while (uVar22 == 0);
        }
        else {
          uVar25 = 0;
          iVar12 = 0;
        }
        uVar26 = (ulonglong)(-uVar22 & uVar22);
        uVar1 = uVar26 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iVar24 = (iVar12 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar24) {
          iVar24 = iVar5;
        }
      }
      if (iVar24 != iVar5) {
        uVar22 = 0xffffffff;
        uVar19 = local_180;
        iVar14 = iVar5;
        do {
          lVar23 = *(longlong *)(param_1[0xe] + 8 + (longlong)iVar24 * 0x20);
          if (lVar23 != 0) {
            FUN_14372b054(param_1,uVar19,lVar23,param_3);
            iVar14 = (int)param_1[0x13];
            uVar19 = local_180;
          }
          uVar22 = uVar22 & ~(uint)uVar26;
          puVar11 = (uint *)param_1[0x12];
          if ((uint *)param_1[0x12] == (uint *)0x0) {
            puVar11 = puVar20;
          }
          iVar24 = (int)uVar25;
          lVar23 = (longlong)iVar24;
          uVar13 = puVar11[lVar23] & uVar22;
          if (uVar13 == 0) {
            iVar15 = iVar14 + 0x1e;
            if (-1 < iVar14 + -1) {
              iVar15 = iVar14 + -1;
            }
            iVar15 = iVar15 >> 5;
            iVar12 = iVar12 + 0x20;
            iVar16 = iVar15;
            if (iVar15 < iVar24) {
              iVar16 = iVar24;
            }
            if (iVar24 < iVar15) {
              lVar18 = 0;
              do {
                uVar13 = puVar11[lVar23 + lVar18 + 1];
                if (uVar13 != 0) {
                  uVar25 = (ulonglong)(iVar24 + (int)lVar18 + 1);
                  uVar22 = 0xffffffff;
                  goto LAB_14372c568;
                }
                iVar12 = iVar12 + 0x20;
                lVar18 = lVar18 + 1;
              } while (iVar16 - lVar23 != lVar18);
              uVar22 = 0xffffffff;
              iVar24 = iVar16;
            }
            uVar25 = (ulonglong)(iVar24 + 1);
            uVar19 = local_180;
            param_1 = local_160;
            iVar24 = iVar14;
          }
          else {
LAB_14372c568:
            uVar26 = (ulonglong)(-uVar13 & uVar13);
            uVar1 = uVar26 * 2 + 1;
            lVar23 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
              }
            }
            iVar24 = (iVar12 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
            if (iVar14 <= iVar24) {
              iVar24 = iVar14;
            }
          }
        } while (iVar24 != iVar5);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xd) = 0;
    }
  }
LAB_14372b721:
  if ((local_b0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar5 = *(int *)(param_1[3] + (longlong)iVar5 * 0x30 + 0x28), iVar5 != -1) {
LAB_14372b7d5:
    if (*(longlong *)(param_1[3] + (longlong)iVar5 * 0x30) == lVar23) break;
  }
LAB_14372b803:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_1b8);
}



// FUNCTION 14372c5cb FUN_14372c5cb body=169 status=ok
// SIG undefined FUN_14372c5cb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14372c5cb(void)

{
  _DAT_14cb0ae80 = 0;
  if (DAT_14cb0ae78 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb0ae40 = 0;
  if (DAT_14cb0ae44 != 0) {
    FUN_14472eb64(&DAT_14cb0ae38,0);
  }
  _DAT_14cb0ae68 = 0xffffffff;
  _DAT_14cb0ae60 = 0;
  if (0x80 < DAT_14cb0ae64) {
    DAT_14cb0ae64 = 0x80;
    FUN_1446efbd8(&DAT_14cb0ae48,0);
  }
  if (DAT_14cb0ae58 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb0ae38 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14372c674 FUN_14372c674 body=69 status=ok
// SIG undefined FUN_14372c674(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14372c674(void)

{
  _DAT_14cb0ae88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014372c6b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ae90,1);
  return;
}



// FUNCTION 14372c7c0 FUN_14372c7c0 body=67 status=ok
// SIG undefined FUN_14372c7c0(void)

void FUN_14372c7c0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_1 + 8) + 0x10);
  lVar2 = 0;
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x52) == '\x01')) {
    lVar2 = lVar1;
  }
  FUN_1406a1459(param_2,lVar2,*(undefined8 *)(param_1[1] + 0x20));
  *(undefined1 *)param_1[2] = 1;
  return;
}



// FUNCTION 14372c80e FUN_14372c80e body=12 status=ok
// SIG undefined FUN_14372c80e(void)

void FUN_14372c80e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372c817. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372c81a FUN_14372c81a body=29 status=ok
// SIG undefined FUN_14372c81a(void)

undefined8 FUN_14372c81a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372c838 FUN_14372c838 body=282 status=ok
// SIG undefined FUN_14372c838(void)

undefined8 * FUN_14372c838(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14372c6e3);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14372c952 FUN_14372c952 body=126 status=ok
// SIG undefined FUN_14372c952(void)

void FUN_14372c952(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1[0x15] + 8) + 0x10);
  lVar3 = 0;
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x52) == '\x01')) {
    lVar3 = lVar2;
  }
  FUN_1406a1459(&DAT_14ca85100,lVar3,*(undefined8 *)(param_1[0x16] + 0x20));
  *(undefined1 *)param_1[0x17] = 1;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014372c9c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14372c9d0 FUN_14372c9d0 body=83 status=ok
// SIG undefined FUN_14372c9d0(void)

void FUN_14372c9d0(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
    if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x78),
              (longlong)*(int *)((longlong)param_1 + 0x80) << 3);
      FUN_1446efa72((longlong)param_1 + 0x78,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 14372ca42 FUN_14372ca42 body=29 status=ok
// SIG undefined FUN_14372ca42(void)

undefined8 FUN_14372ca42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372ca60 FUN_14372ca60 body=85 status=ok
// SIG undefined FUN_14372ca60(void)

void FUN_14372ca60(longlong *param_1,char *param_2)

{
  char cVar1;
  longlong lVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  longlong *plVar4;
  
  cVar1 = *param_2;
  lVar2 = *param_1;
  LOCK();
  *(int *)param_1[1] = *(int *)param_1[1] + -1;
  UNLOCK();
  if (cVar1 == '\x01') {
    *(undefined1 *)(lVar2 + 0x129) = 1;
  }
  if (*(int *)param_1[1] != 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[2];
  plVar4 = param_1 + 6;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014372cab2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3);
  return;
}



// FUNCTION 14372cab6 FUN_14372cab6 body=114 status=ok
// SIG undefined FUN_14372cab6(void)

undefined8 * FUN_14372cab6(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *param_2 = puVar5;
  *puVar5 = &PTR_FUN_14aace5c0;
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
  *(undefined4 *)(puVar5 + 3) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar5[4] = lVar1;
  puVar5[6] = 0;
  if (lVar1 != 0) {
    puVar6 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar6)(puVar6,puVar5 + 6);
  }
  return puVar5 + 2;
}



// FUNCTION 14372cb2e FUN_14372cb2e body=29 status=ok
// SIG undefined FUN_14372cb2e(void)

void FUN_14372cb2e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14372cb4c FUN_14372cb4c body=71 status=ok
// SIG undefined FUN_14372cb4c(void)

undefined8 * FUN_14372cb4c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aace5c0;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372cbb2 FUN_14372cbb2 body=29 status=ok
// SIG undefined FUN_14372cbb2(void)

undefined8 FUN_14372cbb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372cbd0 FUN_14372cbd0 body=87 status=ok
// SIG undefined FUN_14372cbd0(void)

void FUN_14372cbd0(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  LOCK();
  *(int *)(lVar2 + 0x58) = *(int *)(lVar2 + 0x58) + -1;
  UNLOCK();
  if (((*(longlong *)(lVar2 + 0x280) != 0) &&
      (*(char *)(*(longlong *)(lVar2 + 0x280) + 0x14) != '\0')) && (*(int *)(lVar2 + 0x60) != 0)) {
    *(undefined1 *)(lVar2 + 0x5c) = 1;
  }
  LOCK();
  bVar1 = *(byte *)(lVar2 + 0x288);
  *(byte *)(lVar2 + 0x288) = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    FUN_1447458da(lVar2 + 0x288,0xffffffff);
  }
  FUN_1449b3b46(lVar2,0);
  return;
}



// FUNCTION 14372cc32 FUN_14372cc32 body=12 status=ok
// SIG undefined FUN_14372cc32(void)

void FUN_14372cc32(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372cc3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372cc3e FUN_14372cc3e body=29 status=ok
// SIG undefined FUN_14372cc3e(void)

undefined8 FUN_14372cc3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372cc5c FUN_14372cc5c body=279 status=ok
// SIG undefined FUN_14372cc5c(void)

void FUN_14372cc5c(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  longlong local_80;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *param_1;
  FUN_1417f37ae(lVar1);
  FUN_143726144(lVar1,param_2);
  *(byte *)(lVar1 + 0x5d) = *(byte *)(lVar1 + 0x5c) ^ 1;
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14aace660;
  local_68[0] = &LAB_14372ce0c;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14aace640;
  local_a8[0] = &LAB_14372cdbc;
  *(undefined4 *)(lVar1 + 0x68) = 2;
  local_80 = lVar1;
  local_40 = lVar1;
  FUN_1403223d2(lVar1 + 0x70,local_a8);
  *(undefined4 *)(lVar1 + 0xb0) = 1;
  FUN_1403223d2(lVar1 + 0xc0,local_68);
  if (local_a8[0] != (undefined1 *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (local_68[0] != (undefined1 *)0x0) {
    pppuVar2 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar2 = &local_48;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372cd92 FUN_14372cd92 body=12 status=ok
// SIG undefined FUN_14372cd92(void)

void FUN_14372cd92(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372cd9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372cd9e FUN_14372cd9e body=29 status=ok
// SIG undefined FUN_14372cd9e(void)

undefined8 FUN_14372cd9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372cde2 FUN_14372cde2 body=12 status=ok
// SIG undefined FUN_14372cde2(void)

void FUN_14372cde2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372cdeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372cdee FUN_14372cdee body=29 status=ok
// SIG undefined FUN_14372cdee(void)

undefined8 FUN_14372cdee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372ce32 FUN_14372ce32 body=12 status=ok
// SIG undefined FUN_14372ce32(void)

void FUN_14372ce32(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372ce3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372ce3e FUN_14372ce3e body=29 status=ok
// SIG undefined FUN_14372ce3e(void)

undefined8 FUN_14372ce3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372ce82 FUN_14372ce82 body=12 status=ok
// SIG undefined FUN_14372ce82(void)

void FUN_14372ce82(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372ce8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372ce8e FUN_14372ce8e body=29 status=ok
// SIG undefined FUN_14372ce8e(void)

undefined8 FUN_14372ce8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372ced2 FUN_14372ced2 body=12 status=ok
// SIG undefined FUN_14372ced2(void)

void FUN_14372ced2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372cedb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372cede FUN_14372cede body=29 status=ok
// SIG undefined FUN_14372cede(void)

undefined8 FUN_14372cede(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372cefc FUN_14372cefc body=444 status=ok
// SIG undefined FUN_14372cefc(void)

void FUN_14372cefc(longlong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  undefined ***pppuVar5;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_e8 [16];
  byte *local_d8;
  undefined1 local_c9;
  code *local_c8;
  byte **local_c0;
  undefined ***local_b8;
  undefined **local_a8;
  longlong local_a0;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar3 = *param_1;
  bVar4 = *(byte *)(lVar3 + 0x288);
  if ((bVar4 & 1) == 0) {
    pbVar1 = (byte *)(lVar3 + 0x288);
    do {
      if ((bVar4 & 2) == 0) {
        LOCK();
        bVar2 = *pbVar1;
        if (bVar4 == bVar2) {
          *pbVar1 = 2;
        }
        UNLOCK();
        if (bVar4 == bVar2) goto LAB_14372d061;
      }
      else {
LAB_14372d061:
        local_88 = &DAT_142743e10;
        local_c8 = (code *)&LAB_142743e12;
        local_f8 = 0x7ff0000000000000;
        local_d8 = pbVar1;
        local_c0 = &local_d8;
        local_80 = &local_c9;
        FUN_1456d3e9c(local_e8,pbVar1,&local_c8,&local_88);
      }
      bVar4 = *pbVar1;
    } while ((bVar4 & 1) == 0);
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aace720;
  local_88 = &LAB_14372d2a4;
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_14aace700;
  local_c8 = FUN_14372d152;
  *(undefined4 *)(lVar3 + 0x68) = 2;
  local_a0 = lVar3;
  local_60 = lVar3;
  FUN_1403223d2(lVar3 + 0x70,&local_c8);
  *(undefined4 *)(lVar3 + 0xb0) = 1;
  FUN_1403223d2(lVar3 + 0xc0,&local_88);
  if (local_c8 != (code *)0x0) {
    pppuVar5 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar5 = &local_a8;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if (local_88 != (undefined1 *)0x0) {
    pppuVar5 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar5 = &local_68;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14372d0e4 FUN_14372d0e4 body=29 status=ok
// SIG undefined FUN_14372d0e4(void)

undefined8 FUN_14372d0e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372d134 FUN_14372d134 body=29 status=ok
// SIG undefined FUN_14372d134(void)

undefined8 FUN_14372d134(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372d152 FUN_14372d152 body=264 status=ok
// SIG undefined FUN_14372d152(void)

void FUN_14372d152(longlong *param_1)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  longlong local_90;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *param_1;
  FUN_143725db4(lVar1);
  FUN_1417f38c6(lVar1);
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14aace760;
  local_78[0] = &LAB_14372d362;
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_14aace740;
  local_b8[0] = FUN_14372d2f4;
  *(undefined4 *)(lVar1 + 0x68) = 1;
  local_90 = lVar1;
  local_50 = lVar1;
  FUN_1403223d2(lVar1 + 0x70,local_b8);
  *(undefined4 *)(lVar1 + 0xb0) = 1;
  FUN_1403223d2(lVar1 + 0xc0,local_78);
  if (local_b8[0] != (code *)0x0) {
    pppuVar2 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar2 = &local_98;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (local_78[0] != (undefined1 *)0x0) {
    pppuVar2 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar2 = &local_58;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372d27a FUN_14372d27a body=12 status=ok
// SIG undefined FUN_14372d27a(void)

void FUN_14372d27a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372d283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372d286 FUN_14372d286 body=29 status=ok
// SIG undefined FUN_14372d286(void)

undefined8 FUN_14372d286(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372d2ca FUN_14372d2ca body=12 status=ok
// SIG undefined FUN_14372d2ca(void)

void FUN_14372d2ca(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372d2d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372d2d6 FUN_14372d2d6 body=29 status=ok
// SIG undefined FUN_14372d2d6(void)

undefined8 FUN_14372d2d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372d2f4 FUN_14372d2f4 body=37 status=ok
// SIG undefined FUN_14372d2f4(void)

void FUN_14372d2f4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_1406a141e(uVar1);
  FUN_14045530e(uVar1,param_2);
  return;
}



// FUNCTION 14372d338 FUN_14372d338 body=12 status=ok
// SIG undefined FUN_14372d338(void)

void FUN_14372d338(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372d341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372d344 FUN_14372d344 body=29 status=ok
// SIG undefined FUN_14372d344(void)

undefined8 FUN_14372d344(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372d388 FUN_14372d388 body=12 status=ok
// SIG undefined FUN_14372d388(void)

void FUN_14372d388(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372d391. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372d394 FUN_14372d394 body=29 status=ok
// SIG undefined FUN_14372d394(void)

undefined8 FUN_14372d394(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372d3b2 FUN_14372d3b2 body=256 status=ok
// SIG undefined FUN_14372d3b2(void)

void FUN_14372d3b2(longlong *param_1)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  longlong local_90;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *param_1;
  FUN_14372659c(lVar1);
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14aace7c0;
  local_78[0] = &LAB_14372d66e;
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_14aace7a0;
  local_b8[0] = FUN_14372d4fc;
  *(undefined4 *)(lVar1 + 0x68) = 1;
  local_90 = lVar1;
  local_50 = lVar1;
  FUN_1403223d2(lVar1 + 0x70,local_b8);
  *(undefined4 *)(lVar1 + 0xb0) = 1;
  FUN_1403223d2(lVar1 + 0xc0,local_78);
  if (local_b8[0] != (code *)0x0) {
    pppuVar2 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar2 = &local_98;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (local_78[0] != (undefined1 *)0x0) {
    pppuVar2 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar2 = &local_58;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372d4d2 FUN_14372d4d2 body=12 status=ok
// SIG undefined FUN_14372d4d2(void)

void FUN_14372d4d2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372d4db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372d4de FUN_14372d4de body=29 status=ok
// SIG undefined FUN_14372d4de(void)

undefined8 FUN_14372d4de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372d4fc FUN_14372d4fc body=296 status=ok
// SIG undefined FUN_14372d4fc(void)

void FUN_14372d4fc(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined1 auStack_c8 [32];
  code *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  longlong local_80;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *param_1;
  (**(code **)(*DAT_14ca83900 + 0x420))
            (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(lVar1 + 0x100),1);
  FUN_143725c1a(lVar1,param_2);
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14aace800;
  local_68[0] = &LAB_14372d8c8;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14aace7e0;
  local_a8[0] = FUN_14372d6be;
  *(undefined4 *)(lVar1 + 0x68) = 2;
  local_80 = lVar1;
  local_40 = lVar1;
  FUN_1403223d2(lVar1 + 0x70,local_a8);
  *(undefined4 *)(lVar1 + 0xb0) = 1;
  FUN_1403223d2(lVar1 + 0xc0,local_68);
  if (local_a8[0] != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (local_68[0] != (undefined1 *)0x0) {
    pppuVar2 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar2 = &local_48;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372d644 FUN_14372d644 body=12 status=ok
// SIG undefined FUN_14372d644(void)

void FUN_14372d644(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372d64d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372d650 FUN_14372d650 body=29 status=ok
// SIG undefined FUN_14372d650(void)

undefined8 FUN_14372d650(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372d694 FUN_14372d694 body=12 status=ok
// SIG undefined FUN_14372d694(void)

void FUN_14372d694(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372d69d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372d6a0 FUN_14372d6a0 body=29 status=ok
// SIG undefined FUN_14372d6a0(void)

undefined8 FUN_14372d6a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372d6be FUN_14372d6be body=449 status=ok
// SIG undefined FUN_14372d6be(void)

void FUN_14372d6be(longlong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  undefined ***pppuVar5;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_e8 [16];
  byte *local_d8;
  undefined1 local_c9;
  code *local_c8;
  byte **local_c0;
  undefined ***local_b8;
  undefined **local_a8;
  longlong local_a0;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar3 = *param_1;
  FUN_143726144(lVar3);
  bVar4 = *(byte *)(lVar3 + 0x288);
  if ((bVar4 & 1) == 0) {
    pbVar1 = (byte *)(lVar3 + 0x288);
    do {
      if ((bVar4 & 2) == 0) {
        LOCK();
        bVar2 = *pbVar1;
        if (bVar4 == bVar2) {
          *pbVar1 = 2;
        }
        UNLOCK();
        if (bVar4 == bVar2) goto LAB_14372d828;
      }
      else {
LAB_14372d828:
        local_88 = &DAT_142743e10;
        local_c8 = (code *)&LAB_142743e12;
        local_f8 = 0x7ff0000000000000;
        local_d8 = pbVar1;
        local_c0 = &local_d8;
        local_80 = &local_c9;
        FUN_1456d3e9c(local_e8,pbVar1,&local_c8,&local_88);
      }
      bVar4 = *pbVar1;
    } while ((bVar4 & 1) == 0);
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aace840;
  local_88 = &LAB_14372d986;
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_14aace820;
  local_c8 = FUN_14372d918;
  *(undefined4 *)(lVar3 + 0x68) = 1;
  local_a0 = lVar3;
  local_60 = lVar3;
  FUN_1403223d2(lVar3 + 0x70,&local_c8);
  *(undefined4 *)(lVar3 + 0xb0) = 1;
  FUN_1403223d2(lVar3 + 0xc0,&local_88);
  if (local_c8 != (code *)0x0) {
    pppuVar5 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar5 = &local_a8;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if (local_88 != (undefined1 *)0x0) {
    pppuVar5 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar5 = &local_68;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14372d89e FUN_14372d89e body=12 status=ok
// SIG undefined FUN_14372d89e(void)

void FUN_14372d89e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372d8a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372d8aa FUN_14372d8aa body=29 status=ok
// SIG undefined FUN_14372d8aa(void)

undefined8 FUN_14372d8aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372d8ee FUN_14372d8ee body=12 status=ok
// SIG undefined FUN_14372d8ee(void)

void FUN_14372d8ee(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372d8f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372d8fa FUN_14372d8fa body=29 status=ok
// SIG undefined FUN_14372d8fa(void)

undefined8 FUN_14372d8fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372d918 FUN_14372d918 body=37 status=ok
// SIG undefined FUN_14372d918(void)

void FUN_14372d918(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_147d64fda(uVar1);
  FUN_14045530e(uVar1,param_2);
  return;
}



// FUNCTION 14372d95c FUN_14372d95c body=12 status=ok
// SIG undefined FUN_14372d95c(void)

void FUN_14372d95c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372d965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372d968 FUN_14372d968 body=29 status=ok
// SIG undefined FUN_14372d968(void)

undefined8 FUN_14372d968(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372d9ac FUN_14372d9ac body=12 status=ok
// SIG undefined FUN_14372d9ac(void)

void FUN_14372d9ac(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372d9b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372d9b8 FUN_14372d9b8 body=29 status=ok
// SIG undefined FUN_14372d9b8(void)

undefined8 FUN_14372d9b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372d9d6 FUN_14372d9d6 body=271 status=ok
// SIG undefined FUN_14372d9d6(void)

void FUN_14372d9d6(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined1 auStack_c8 [32];
  code *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  longlong local_80;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *param_1;
  FUN_143726888(lVar1);
  FUN_143725c1a(lVar1,param_2);
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14aace8a0;
  local_68[0] = &LAB_14372dc78;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14aace880;
  local_a8[0] = FUN_14372db2e;
  *(undefined4 *)(lVar1 + 0x68) = 2;
  local_80 = lVar1;
  local_40 = lVar1;
  FUN_1403223d2(lVar1 + 0x70,local_a8);
  *(undefined4 *)(lVar1 + 0xb0) = 1;
  FUN_1403223d2(lVar1 + 0xc0,local_68);
  if (local_a8[0] != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (local_68[0] != (undefined1 *)0x0) {
    pppuVar2 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar2 = &local_48;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372db04 FUN_14372db04 body=12 status=ok
// SIG undefined FUN_14372db04(void)

void FUN_14372db04(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372db0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372db10 FUN_14372db10 body=29 status=ok
// SIG undefined FUN_14372db10(void)

undefined8 FUN_14372db10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372db2e FUN_14372db2e body=257 status=ok
// SIG undefined FUN_14372db2e(void)

void FUN_14372db2e(longlong *param_1)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined1 auStack_c8 [32];
  code *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  longlong local_80;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *param_1;
  FUN_143726144(lVar1);
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14aace8e0;
  local_68[0] = &LAB_14372deca;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14aace8c0;
  local_a8[0] = FUN_14372dcc8;
  *(undefined4 *)(lVar1 + 0x68) = 2;
  local_80 = lVar1;
  local_40 = lVar1;
  FUN_1403223d2(lVar1 + 0x70,local_a8);
  *(undefined4 *)(lVar1 + 0xb0) = 1;
  FUN_1403223d2(lVar1 + 0xc0,local_68);
  if (local_a8[0] != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (local_68[0] != (undefined1 *)0x0) {
    pppuVar2 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar2 = &local_48;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14372dc4e FUN_14372dc4e body=12 status=ok
// SIG undefined FUN_14372dc4e(void)

void FUN_14372dc4e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372dc57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372dc5a FUN_14372dc5a body=29 status=ok
// SIG undefined FUN_14372dc5a(void)

undefined8 FUN_14372dc5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372dc9e FUN_14372dc9e body=12 status=ok
// SIG undefined FUN_14372dc9e(void)

void FUN_14372dc9e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372dca7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372dcaa FUN_14372dcaa body=29 status=ok
// SIG undefined FUN_14372dcaa(void)

undefined8 FUN_14372dcaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372dcc8 FUN_14372dcc8 body=441 status=ok
// SIG undefined FUN_14372dcc8(void)

void FUN_14372dcc8(longlong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  undefined ***pppuVar5;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_e8 [16];
  byte *local_d8;
  undefined1 local_c9;
  code *local_c8;
  byte **local_c0;
  undefined ***local_b8;
  undefined **local_a8;
  longlong local_a0;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar3 = *param_1;
  bVar4 = *(byte *)(lVar3 + 0x288);
  if ((bVar4 & 1) == 0) {
    pbVar1 = (byte *)(lVar3 + 0x288);
    do {
      if ((bVar4 & 2) == 0) {
        LOCK();
        bVar2 = *pbVar1;
        if (bVar4 == bVar2) {
          *pbVar1 = 2;
        }
        UNLOCK();
        if (bVar4 == bVar2) goto LAB_14372de2a;
      }
      else {
LAB_14372de2a:
        local_88 = &DAT_142743e10;
        local_c8 = (code *)&LAB_142743e12;
        local_f8 = 0x7ff0000000000000;
        local_d8 = pbVar1;
        local_c0 = &local_d8;
        local_80 = &local_c9;
        FUN_1456d3e9c(local_e8,pbVar1,&local_c8,&local_88);
      }
      bVar4 = *pbVar1;
    } while ((bVar4 & 1) == 0);
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14aace920;
  local_88 = &LAB_14372dfae;
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_14aace900;
  local_c8 = FUN_14372df1a;
  *(undefined4 *)(lVar3 + 0x68) = 1;
  local_a0 = lVar3;
  local_60 = lVar3;
  FUN_1403223d2(lVar3 + 0x70,&local_c8);
  *(undefined4 *)(lVar3 + 0xb0) = 1;
  FUN_1403223d2(lVar3 + 0xc0,&local_88);
  if (local_c8 != (code *)0x0) {
    pppuVar5 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar5 = &local_a8;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if (local_88 != (undefined1 *)0x0) {
    pppuVar5 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar5 = &local_68;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14372dea0 FUN_14372dea0 body=12 status=ok
// SIG undefined FUN_14372dea0(void)

void FUN_14372dea0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372dea9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14372deac FUN_14372deac body=29 status=ok
// SIG undefined FUN_14372deac(void)

undefined8 FUN_14372deac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14372def0 FUN_14372def0 body=12 status=ok
// SIG undefined FUN_14372def0(void)

void FUN_14372def0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014372def9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}


