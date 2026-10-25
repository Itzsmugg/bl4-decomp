// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143e2359e FUN_143e2359e body=282 status=ok
// SIG undefined FUN_143e2359e(void)

undefined8 * FUN_143e2359e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143e232d2);
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



// FUNCTION 143e236b8 FUN_143e236b8 body=93 status=ok
// SIG undefined FUN_143e236b8(void)

void FUN_143e236b8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143e23472(param_1 + 0x15,param_1 + 0x2f);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e2370b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143e23716 FUN_143e23716 body=299 status=ok
// SIG undefined FUN_143e23716(void)

void FUN_143e23716(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xc0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x10;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_148964894(param_2,&local_70,param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e23842 FUN_143e23842 body=282 status=ok
// SIG undefined FUN_143e23842(void)

undefined8 * FUN_143e23842(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143e232d2);
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



// FUNCTION 143e2395c FUN_143e2395c body=110 status=ok
// SIG undefined FUN_143e2395c(void)

void FUN_143e2395c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143e23716(param_1 + 0x15,param_1 + 0x2f);
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e239c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143e239ca FUN_143e239ca body=299 status=ok
// SIG undefined FUN_143e239ca(void)

void FUN_143e239ca(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xc0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x10;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_148964d3e(param_2,&local_70,param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e23af6 FUN_143e23af6 body=282 status=ok
// SIG undefined FUN_143e23af6(void)

undefined8 * FUN_143e23af6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143e232d2);
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



// FUNCTION 143e23c10 FUN_143e23c10 body=93 status=ok
// SIG undefined FUN_143e23c10(void)

void FUN_143e23c10(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143e239ca(param_1 + 0x15,param_1 + 0x2f);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e23c63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143e23c6e FUN_143e23c6e body=168 status=ok
// SIG undefined FUN_143e23c6e(void)

longlong FUN_143e23c6e(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x800000000;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_2 + 4);
  lVar3 = FUN_14009d2a0();
  *(undefined2 *)(param_1 + 0x2a) = *(undefined2 *)(lVar3 + 0x114);
  lVar3 = FUN_14009d2a0();
  *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(lVar3 + 0x116);
  uVar1 = *(uint *)(param_2 + 1);
  _Src = (void *)*param_2;
  iVar2 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar2 + uVar1;
  if ((uint)(*(int *)(param_1 + 0x1c) - iVar2) < uVar1) {
    FUN_1475b3a76(param_1,iVar2);
  }
  else if (uVar1 == 0) {
    return param_1;
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar3 = param_1;
  }
  memcpy((void *)(lVar3 + (longlong)iVar2 * 2),_Src,(longlong)(int)uVar1 * 2);
  return param_1;
}



// FUNCTION 143e23d16 FUN_143e23d16 body=298 status=ok
// SIG undefined FUN_143e23d16(void)

undefined4 * FUN_143e23d16(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  iVar6 = param_3[0x26];
  uVar4 = iVar6 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar4) {
    uVar5 = 0x100;
    if (0x100 < uVar4) {
      uVar5 = uVar4;
    }
    param_1[0x27] = uVar5;
    FUN_14497ddce(param_1 + 0x1e,0);
    iVar6 = param_3[0x26];
  }
  param_1[0x26] = iVar6;
  if (iVar6 != 0) {
    memcpy(param_1 + 0x1e,param_3 + 0x1e,(ulonglong)(iVar6 + 0x1fU >> 3 & 0xfffffffc));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  iVar6 = param_3[0x30];
  uVar4 = iVar6 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar4) {
    uVar5 = 0x100;
    if (0x100 < uVar4) {
      uVar5 = uVar4;
    }
    param_1[0x31] = uVar5;
    FUN_14497ddce(param_1 + 0x28,0);
    iVar6 = param_3[0x30];
  }
  param_1[0x30] = iVar6;
  if (iVar6 != 0) {
    memcpy(param_1 + 0x28,param_3 + 0x28,(ulonglong)(iVar6 + 0x1fU >> 3 & 0xfffffffc));
  }
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 143e23e40 FUN_143e23e40 body=877 status=ok
// SIG undefined FUN_143e23e40(void)

void FUN_143e23e40(short *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  short *psVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  char local_135;
  int local_134;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  short *local_118;
  undefined8 local_110;
  short *local_108;
  longlong local_100;
  int local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  int local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar11 = *(longlong *)(param_1 + 100);
  local_135 = *(char *)(lVar11 + 0x270);
  local_108 = param_1 + 0xc;
  if (local_135 == '\0') {
    *(int *)(lVar11 + 0x264) = *(int *)(lVar11 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar11 + 0x264) = *(int *)(lVar11 + 0x264) + 1;
    UNLOCK();
  }
  local_110 = param_2;
  local_100 = lVar11;
  local_f8 = FUN_1403b8464(&local_108,0);
  local_134 = *(int *)(lVar11 + 0x10);
  psVar7 = param_1;
  if (local_f8 != local_134) {
    do {
      local_118 = psVar7;
      lVar11 = local_100;
      psVar7 = local_118;
      if (local_135 == '\0') {
        local_130 = *(longlong *)(*(longlong *)(local_100 + 0x60) + (longlong)local_f8 * 8);
        *(undefined4 *)(local_130 + 0x14) = 0;
      }
      else {
        local_130 = 0;
      }
      lVar12 = (longlong)local_f8;
      FUN_1475b4978(*(undefined8 *)(*(longlong *)(local_100 + 0x60) + lVar12 * 8),&local_d8,
                    local_118[4]);
      FUN_1475b4978(*(undefined8 *)(*(longlong *)(lVar11 + 0x60) + lVar12 * 8),&local_f0,psVar7[3]);
      lVar4 = *(longlong *)(*(longlong *)(lVar11 + 0x60) + lVar12 * 8);
      if (*(ushort *)(lVar4 + 0xc) != 0) {
        puVar10 = *(undefined8 **)(lVar4 + 0x28);
        lVar8 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
        do {
          if (*(short *)((longlong)puVar10 + 0x1e) == psVar7[2]) goto LAB_143e23f57;
          puVar10 = puVar10 + 4;
          lVar8 = lVar8 + -0x20;
        } while (lVar8 != 0);
      }
      puVar10 = (undefined8 *)0x0;
LAB_143e23f57:
      iVar1 = *(int *)(lVar4 + 0x14);
      if (iVar1 == 1) {
        AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
      }
      LOCK();
      *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
      UNLOCK();
      uVar5 = *puVar10;
      lVar4 = *(longlong *)(*(longlong *)(lVar11 + 0x60) + lVar12 * 8);
      if (*(ushort *)(lVar4 + 0xc) != 0) {
        puVar13 = *(undefined8 **)(lVar4 + 0x28);
        lVar8 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
        do {
          if (*(short *)((longlong)puVar13 + 0x1e) == psVar7[1]) goto LAB_143e23fa3;
          puVar13 = puVar13 + 4;
          lVar8 = lVar8 + -0x20;
        } while (lVar8 != 0);
      }
      puVar13 = (undefined8 *)0x0;
LAB_143e23fa3:
      iVar2 = *(int *)(lVar4 + 0x14);
      if (iVar2 == 1) {
        AcquireSRWLockShared((PSRWLOCK)(puVar13 + 1));
      }
      LOCK();
      *(int *)(puVar13 + 3) = *(int *)(puVar13 + 3) + 1;
      UNLOCK();
      uVar6 = *puVar13;
      lVar4 = *(longlong *)(*(longlong *)(lVar11 + 0x60) + lVar12 * 8);
      if (*(ushort *)(lVar4 + 0xc) != 0) {
        puVar9 = *(undefined8 **)(lVar4 + 0x28);
        lVar8 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
        do {
          if (*(short *)((longlong)puVar9 + 0x1e) == *psVar7) goto LAB_143e23ff2;
          puVar9 = puVar9 + 4;
          lVar8 = lVar8 + -0x20;
        } while (lVar8 != 0);
      }
      puVar9 = (undefined8 *)0x0;
LAB_143e23ff2:
      iVar3 = *(int *)(lVar4 + 0x14);
      if (iVar3 == 1) {
        local_128 = lVar11;
        local_120 = lVar12;
        AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
        lVar11 = local_128;
        lVar12 = local_120;
      }
      LOCK();
      *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
      UNLOCK();
      local_b0 = *puVar9;
      local_78 = local_f0;
      local_70 = local_e8;
      local_f0 = 0;
      local_68 = local_e0;
      local_60 = local_d8;
      local_58 = local_d0;
      local_50 = local_c8;
      local_148 = local_c8;
      local_150 = local_e0;
      local_158 = uVar5;
      local_c0 = puVar9;
      local_b8 = iVar3;
      local_a8 = puVar13;
      local_a0 = iVar2;
      local_98 = uVar6;
      local_90 = puVar10;
      local_88 = iVar1;
      local_80 = uVar5;
      FUN_143e241ae(local_110,*(undefined8 *)(*(longlong *)(lVar11 + 0x60) + lVar12 * 8));
      FUN_148965354(&local_c0);
      if (local_130 != 0) {
        *(undefined4 *)(local_130 + 0x14) = 1;
      }
      local_f8 = FUN_1403b8464(&local_108,local_f8 + 1);
      psVar7 = local_118;
    } while (local_f8 != local_134);
  }
  if (local_108 != (short *)0x0) {
    if (*(char *)(local_100 + 0x270) == '\0') {
      *(int *)(local_100 + 0x264) = *(int *)(local_100 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_100 + 0x264) = *(int *)(local_100 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e241ae FUN_143e241ae body=880 status=ok
// SIG undefined FUN_143e241ae(void)

void FUN_143e241ae(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7)

{
  undefined8 uVar1;
  double dVar2;
  ushort uVar3;
  short sVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  double dVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb8ab14) && (FUN_144b3d300(&DAT_14cb8ab14), DAT_14cb8ab14 == -1)) {
    plVar5 = (longlong *)FUN_145b7cfa4();
    lVar7 = plVar5[0x22];
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 1000))(plVar5);
      lVar7 = plVar5[0x22];
    }
    DAT_14cb8ab10 = *(undefined1 *)(lVar7 + 100);
    _Init_thread_footer(&DAT_14cb8ab14);
  }
  uVar3 = *(ushort *)(param_2 + 0xc);
  if (uVar3 == 0) {
    bVar11 = true;
    bVar12 = true;
  }
  else {
    lVar7 = *(longlong *)(param_2 + 0x28);
    lVar9 = (ulonglong)uVar3 << 5;
    lVar10 = lVar7;
    do {
      if (*(short *)(lVar10 + 0x1e) == *(short *)(param_1 + 0x2a)) goto LAB_143e24234;
      lVar10 = lVar10 + 0x20;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
    lVar10 = 0;
LAB_143e24234:
    bVar11 = lVar10 == 0;
    lVar10 = (ulonglong)uVar3 << 5;
    do {
      if (*(short *)(lVar7 + 0x1e) == *(short *)(param_1 + 0x2c)) goto LAB_143e24254;
      lVar7 = lVar7 + 0x20;
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != 0);
    lVar7 = 0;
LAB_143e24254:
    bVar12 = lVar7 == 0;
  }
  uVar3 = *(ushort *)(param_2 + 0xe);
  if ((ulonglong)uVar3 != 0) {
    uVar8 = 0;
    do {
      if (*(short *)(param_4 + 2 + uVar8 * 4) == *(short *)(param_1 + 0x28)) {
        if (param_6 == 0) {
          uVar15 = 0;
          uVar16 = 0;
        }
        else {
          uVar1 = *(undefined8 *)(param_6 + uVar8 * 8);
          uVar15 = (undefined4)uVar1;
          uVar16 = (undefined4)((ulonglong)uVar1 >> 0x20);
        }
        dVar13 = 1.0;
        if (param_7 != 0) {
          dVar13 = *(double *)(param_7 + uVar8 * 8);
        }
        dVar2 = *(double *)(param_5 + uVar8 * 8);
        fVar14 = (float)dVar13;
        lVar7 = *(longlong *)(param_1 + 0x10);
        if (*(longlong *)(param_1 + 0x10) == 0) {
          lVar7 = param_1;
        }
        if ((longlong)*(int *)(param_1 + 0x18) != 0) {
          sVar4 = *(short *)(param_3 + uVar8 * 2);
          lVar10 = 0;
          do {
            if (*(short *)(lVar7 + lVar10) == sVar4) {
              lVar7 = *(longlong *)(param_1 + 0x20);
              if (bVar11) {
                if (bVar12) {
                  plVar5 = (longlong *)(lVar7 + 0x28);
                  lVar10 = (longlong)*(int *)(lVar7 + 0x30);
                  uVar6 = *(int *)(lVar7 + 0x30) + 1;
                  *(uint *)(lVar7 + 0x30) = uVar6;
                  if (*(uint *)(lVar7 + 0x34) < uVar6) goto LAB_143e2437f;
                  goto LAB_143e243e8;
                }
                lVar10 = (longlong)*(int *)(lVar7 + 0x40);
                uVar6 = *(int *)(lVar7 + 0x40) + 1;
                *(uint *)(lVar7 + 0x40) = uVar6;
                if (*(uint *)(lVar7 + 0x44) < uVar6) {
                  FUN_1476987fe((longlong *)(lVar7 + 0x38));
                }
                lVar7 = *(longlong *)(lVar7 + 0x38);
                *(short *)(lVar7 + lVar10 * 0x28) = sVar4;
                *(double *)(lVar7 + 8 + lVar10 * 0x28) = dVar2;
                *(float *)(lVar7 + 0x10 + lVar10 * 0x28) = fVar14;
                *(ulonglong *)(lVar7 + 0x18 + lVar10 * 0x28) = CONCAT44(uVar16,uVar15);
              }
              else {
                plVar5 = (longlong *)(lVar7 + 0x38);
                lVar10 = (longlong)*(int *)(lVar7 + 0x40);
                uVar6 = *(int *)(lVar7 + 0x40) + 1;
                *(uint *)(lVar7 + 0x40) = uVar6;
                if (*(uint *)(lVar7 + 0x44) < uVar6) {
LAB_143e2437f:
                  FUN_1476987fe(plVar5);
                }
LAB_143e243e8:
                lVar7 = *plVar5;
                *(short *)(lVar7 + lVar10 * 0x28) = sVar4;
                *(double *)(lVar7 + 8 + lVar10 * 0x28) = dVar2;
                *(float *)(lVar7 + 0x10 + lVar10 * 0x28) = fVar14;
                *(undefined8 *)(lVar7 + 0x18 + lVar10 * 0x28) = 0;
              }
              *(undefined4 *)(lVar7 + 0x20 + lVar10 * 0x28) = 0xffffffff;
              *(undefined1 *)(lVar7 + 0x24 + lVar10 * 0x28) = 1;
              goto LAB_143e24455;
            }
            lVar10 = lVar10 + 2;
          } while ((longlong)*(int *)(param_1 + 0x18) * 2 != lVar10);
        }
        if (bVar11) {
          if (bVar12) {
            **(double **)(param_1 + 0x20) = dVar2 * (double)fVar14 + **(double **)(param_1 + 0x20);
            *(float *)(*(longlong *)(param_1 + 0x20) + 8) =
                 fVar14 + *(float *)(*(longlong *)(param_1 + 0x20) + 8);
          }
          else {
            *(double *)(*(longlong *)(param_1 + 0x20) + 0x10) =
                 (double)fVar14 * (dVar2 - (double)CONCAT44(uVar16,uVar15)) +
                 *(double *)(*(longlong *)(param_1 + 0x20) + 0x10);
          }
        }
        else {
          *(double *)(*(longlong *)(param_1 + 0x20) + 0x10) =
               dVar2 * (double)fVar14 + *(double *)(*(longlong *)(param_1 + 0x20) + 0x10);
        }
      }
LAB_143e24455:
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar3);
  }
  return;
}



// FUNCTION 143e2451e FUN_143e2451e body=282 status=ok
// SIG undefined FUN_143e2451e(void)

undefined8 * FUN_143e2451e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143e232d2);
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



// FUNCTION 143e24638 FUN_143e24638 body=110 status=ok
// SIG undefined FUN_143e24638(void)

void FUN_143e24638(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143e23e40(param_1 + 0x15,param_1 + 0x30);
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e2469c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143e246a6 FUN_143e246a6 body=298 status=ok
// SIG undefined FUN_143e246a6(void)

undefined4 * FUN_143e246a6(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  iVar6 = param_3[0x26];
  uVar4 = iVar6 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar4) {
    uVar5 = 0x100;
    if (0x100 < uVar4) {
      uVar5 = uVar4;
    }
    param_1[0x27] = uVar5;
    FUN_14497ddce(param_1 + 0x1e,0);
    iVar6 = param_3[0x26];
  }
  param_1[0x26] = iVar6;
  if (iVar6 != 0) {
    memcpy(param_1 + 0x1e,param_3 + 0x1e,(ulonglong)(iVar6 + 0x1fU >> 3 & 0xfffffffc));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  iVar6 = param_3[0x30];
  uVar4 = iVar6 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar4) {
    uVar5 = 0x100;
    if (0x100 < uVar4) {
      uVar5 = uVar4;
    }
    param_1[0x31] = uVar5;
    FUN_14497ddce(param_1 + 0x28,0);
    iVar6 = param_3[0x30];
  }
  param_1[0x30] = iVar6;
  if (iVar6 != 0) {
    memcpy(param_1 + 0x28,param_3 + 0x28,(ulonglong)(iVar6 + 0x1fU >> 3 & 0xfffffffc));
  }
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 143e247d0 FUN_143e247d0 body=727 status=ok
// SIG undefined FUN_143e247d0(void)

void FUN_143e247d0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  char local_10d;
  int local_10c;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong local_f0;
  int local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  int local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar3 = *(longlong *)(param_1 + 200);
  local_10d = *(char *)(lVar3 + 0x270);
  local_f8 = param_1 + 0x18;
  if (local_10d == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_100 = param_2;
  local_f0 = lVar3;
  local_e8 = FUN_1403b8464(&local_f8,0);
  local_10c = *(int *)(lVar3 + 0x10);
  if (local_e8 != local_10c) {
    do {
      lVar3 = local_f0;
      if (local_10d == '\0') {
        local_108 = *(longlong *)(*(longlong *)(local_f0 + 0x60) + (longlong)local_e8 * 8);
        *(undefined4 *)(local_108 + 0x14) = 0;
      }
      else {
        local_108 = 0;
      }
      lVar9 = (longlong)local_e8;
      FUN_1475b4978(*(undefined8 *)(*(longlong *)(local_f0 + 0x60) + lVar9 * 8),&local_c8,
                    *(undefined2 *)(param_1 + 8));
      FUN_1475b4978(*(undefined8 *)(*(longlong *)(lVar3 + 0x60) + lVar9 * 8),&local_e0,
                    *(undefined2 *)(param_1 + 6));
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + lVar9 * 8);
      if (*(ushort *)(lVar4 + 0xc) != 0) {
        puVar7 = *(undefined8 **)(lVar4 + 0x28);
        lVar6 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
        do {
          if (*(short *)((longlong)puVar7 + 0x1e) == *(short *)(param_1 + 4)) goto LAB_143e248df;
          puVar7 = puVar7 + 4;
          lVar6 = lVar6 + -0x20;
        } while (lVar6 != 0);
      }
      puVar7 = (undefined8 *)0x0;
LAB_143e248df:
      iVar1 = *(int *)(lVar4 + 0x14);
      if (iVar1 == 1) {
        AcquireSRWLockShared((PSRWLOCK)(puVar7 + 1));
      }
      LOCK();
      *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
      UNLOCK();
      uVar5 = *puVar7;
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + lVar9 * 8);
      if (*(ushort *)(lVar4 + 0xc) != 0) {
        puVar8 = *(undefined8 **)(lVar4 + 0x28);
        lVar6 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
        do {
          if (*(short *)((longlong)puVar8 + 0x1e) == *(short *)(param_1 + 2)) goto LAB_143e24929;
          puVar8 = puVar8 + 4;
          lVar6 = lVar6 + -0x20;
        } while (lVar6 != 0);
      }
      puVar8 = (undefined8 *)0x0;
LAB_143e24929:
      iVar2 = *(int *)(lVar4 + 0x14);
      if (iVar2 == 1) {
        AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
      }
      LOCK();
      *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
      UNLOCK();
      local_98 = *puVar8;
      local_b0 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x60) + lVar9 * 8) + 0x18);
      local_78 = local_e0;
      local_70 = local_d8;
      local_e0 = 0;
      local_68 = local_d0;
      local_60 = local_c8;
      local_58 = local_c0;
      local_c8 = 0;
      local_50 = local_b8;
      local_118 = local_b8;
      local_120 = local_d0;
      local_128 = uVar5;
      local_a8 = puVar8;
      local_a0 = iVar2;
      local_90 = puVar7;
      local_88 = iVar1;
      local_80 = uVar5;
      FUN_143e241ae(local_100,*(undefined8 *)(*(longlong *)(lVar3 + 0x60) + lVar9 * 8));
      FUN_14896564a(&local_b0);
      if (local_108 != 0) {
        *(undefined4 *)(local_108 + 0x14) = 1;
      }
      local_e8 = FUN_1403b8464(&local_f8,local_e8 + 1);
    } while (local_e8 != local_10c);
  }
  if (local_f8 != 0) {
    if (*(char *)(local_f0 + 0x270) == '\0') {
      *(int *)(local_f0 + 0x264) = *(int *)(local_f0 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_f0 + 0x264) = *(int *)(local_f0 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e24aa8 FUN_143e24aa8 body=282 status=ok
// SIG undefined FUN_143e24aa8(void)

undefined8 * FUN_143e24aa8(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143e232d2);
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



// FUNCTION 143e24bc2 FUN_143e24bc2 body=110 status=ok
// SIG undefined FUN_143e24bc2(void)

void FUN_143e24bc2(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143e247d0(param_1 + 0x15,param_1 + 0x30);
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e24c26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143e24c30 FUN_143e24c30 body=29 status=ok
// SIG undefined FUN_143e24c30(void)

undefined8 FUN_143e24c30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e24dcc FUN_143e24dcc body=109 status=ok
// SIG undefined FUN_143e24dcc(void)

void FUN_143e24dcc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b425a00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 143e24e3a FUN_143e24e3a body=109 status=ok
// SIG undefined FUN_143e24e3a(void)

void FUN_143e24e3a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b425a00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 143e24ea8 FUN_143e24ea8 body=142 status=ok
// SIG undefined FUN_143e24ea8(void)

void FUN_143e24ea8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a915ec0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b425a00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  p_Var1[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e24f27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e24f36 FUN_143e24f36 body=78 status=ok
// SIG undefined FUN_143e24f36(void)

void FUN_143e24f36(longlong param_1)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *(undefined4 *)(param_1 + 0x38);
  FUN_140e06640(*(longlong *)(param_1 + 0x20) + 0x38,param_1 + 0x28);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e24f86 FUN_143e24f86 body=288 status=ok
// SIG undefined FUN_143e24f86(void)

undefined8 FUN_143e24f86(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e250a0;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e250a0;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar7 = CONCAT44(uStack_24,local_28);
  }
  else {
LAB_143e250a0:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e25054;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      local_28 = *(undefined4 *)(param_1 + 0x38);
      FUN_140e06640(*(longlong *)(param_1 + 0x20) + 0x38,param_1 + 0x28);
      uVar6 = 1;
      goto LAB_143e25054;
    }
  }
  uVar6 = 0;
LAB_143e25054:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e250a8 FUN_143e250a8 body=74 status=ok
// SIG undefined FUN_143e250a8(void)

undefined8 * FUN_143e250a8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b425bd0;
  if (param_1[4] != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    param_1[4] = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e25270 FUN_143e25270 body=122 status=ok
// SIG undefined FUN_143e25270(void)

void FUN_143e25270(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b425bd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    FUN_1401924dc(lVar2);
    puVar1[4] = lVar2;
  }
  return;
}



// FUNCTION 143e252ea FUN_143e252ea body=122 status=ok
// SIG undefined FUN_143e252ea(void)

void FUN_143e252ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b425bd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    FUN_1401924dc(lVar2);
    puVar1[4] = lVar2;
  }
  return;
}



// FUNCTION 143e25364 FUN_143e25364 body=160 status=ok
// SIG undefined FUN_143e25364(void)

void FUN_143e25364(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b425bd0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    FUN_1401924dc(lVar2);
    p_Var1->EntryCount = (int)lVar2;
    p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e253f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e2541c FUN_143e2541c body=280 status=ok
// SIG undefined FUN_143e2541c(void)

undefined8 FUN_143e2541c(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143e2552e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e2552e;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143e2552e:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e254c7;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if ((*(longlong *)(param_1 + 0x20) != 0) &&
         ((*(uint *)(*(longlong *)(param_1 + 0x20) + 8) >> 0x1e & 1) == 0)) {
        FUN_14895ae6e();
      }
      goto LAB_143e254c7;
    }
  }
  uVar6 = 0;
LAB_143e254c7:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e25536 FUN_143e25536 body=29 status=ok
// SIG undefined FUN_143e25536(void)

undefined8 FUN_143e25536(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e25568 FUN_143e25568 body=85 status=ok
// SIG undefined FUN_143e25568(void)

void FUN_143e25568(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b425c40;
  return;
}



// FUNCTION 143e255be FUN_143e255be body=85 status=ok
// SIG undefined FUN_143e255be(void)

void FUN_143e255be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b425c40;
  return;
}



// FUNCTION 143e25614 FUN_143e25614 body=118 status=ok
// SIG undefined FUN_143e25614(void)

void FUN_143e25614(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a177500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b425c40;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e2567b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e25692 FUN_143e25692 body=19 status=ok
// SIG undefined FUN_143e25692(void)

undefined1 FUN_143e25692(undefined8 param_1,undefined8 param_2)

{
  FUN_143e256a6(param_2);
  return 1;
}



// FUNCTION 143e256a6 FUN_143e256a6 body=2665 status=ok
// SIG undefined FUN_143e256a6(void)

void FUN_143e256a6(wchar_t ******param_1)

{
  wchar_t wVar1;
  ushort uVar2;
  longlong *plVar3;
  wchar_t ***pppwVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  size_t sVar9;
  wchar_t *****pppppwVar10;
  wchar_t ****ppppwVar11;
  wchar_t ****ppppwVar12;
  ulonglong uVar13;
  wchar_t ******ppppppwVar14;
  short sVar15;
  wchar_t ****ppppwVar16;
  uint uVar17;
  char ******_SubStr;
  longlong *plVar18;
  undefined8 unaff_R13;
  undefined6 uVar19;
  wchar_t ******ppppppwVar20;
  undefined2 uVar21;
  int iVar23;
  undefined1 auStack_198 [32];
  undefined2 local_178;
  wchar_t *****local_170;
  wchar_t ****local_168;
  wchar_t ****local_160;
  wchar_t ****local_158;
  uint local_14c;
  wchar_t *****local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  ulonglong local_130;
  wchar_t *****local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong local_110;
  wchar_t ***local_100;
  int local_f8;
  wchar_t ****local_80;
  wchar_t ****local_78;
  uint local_70;
  char *****local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  undefined2 uVar22;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_68 = (char *****)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0xf;
  uVar19 = (undefined6)((ulonglong)unaff_R13 >> 0x10);
  if (*(int *)(param_1 + 1) < 1) {
    local_128 = (wchar_t *****)0x0;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = 0xf;
    sVar15 = -2;
    _SubStr = (char ******)0x0;
    ppppppwVar20 = (wchar_t ******)0x0;
    uVar13 = CONCAT62(uVar19,0xfffe);
  }
  else {
    pppppwVar10 = *param_1;
    FUN_140056680(&local_100,&DAT_149e060b2);
    pppwVar4 = local_100;
    ppppwVar11 = (wchar_t ****)&DAT_149dfb77a;
    ppppwVar12 = (wchar_t ****)local_100;
    if (local_f8 == 0) {
      ppppwVar12 = (wchar_t ****)&DAT_149dfb77a;
    }
    if (*(int *)(pppppwVar10 + 1) != 0) {
      ppppwVar11 = *pppppwVar10;
    }
    iVar6 = wcscmp((wchar_t *)ppppwVar11,(wchar_t *)ppppwVar12);
    if ((wchar_t ****)pppwVar4 != (wchar_t ****)0x0) {
      FUN_1400020a8(pppwVar4);
    }
    uVar13 = CONCAT62(uVar19,0xfffe);
    if (iVar6 == 0) {
      _SubStr = (char ******)0x0;
LAB_143e25a15:
      sVar15 = -2;
    }
    else {
      cVar5 = FUN_1405b43cc(*param_1);
      if (cVar5 == '\0') {
        if (*(int *)(*param_1 + 1) == 0) {
          ppppwVar11 = (wchar_t ****)&DAT_149dfb77a;
LAB_143e25809:
          local_170 = &local_80;
          local_80 = (wchar_t ****)0x0;
          sVar9 = wcslen((wchar_t *)ppppwVar11);
          local_148 = (wchar_t *****)((ulonglong)local_148 & 0xffffffff00000000);
          local_128 = (wchar_t *****)CONCAT44(local_128._4_4_,0x7fffffff);
          uVar13 = sVar9 & 0xffffffff;
          ppppwVar12 = ppppwVar11;
          do {
            iVar6 = (int)uVar13;
            if (iVar6 < 1) {
LAB_143e258e3:
              local_70 = (uint)local_148;
              uVar7 = (uint)local_148 + 1;
              uVar13 = (ulonglong)uVar7;
              if (uVar7 < 0x81) goto LAB_143e25900;
              FUN_1446efa72(local_170,0,uVar7,1);
              pppppwVar10 = (wchar_t *****)local_80;
              goto LAB_143e25902;
            }
            uVar2 = *(ushort *)ppppwVar12;
            uVar7 = (uint)uVar2;
            ppppwVar16 = (wchar_t ****)((longlong)ppppwVar12 + 2);
            uVar17 = iVar6 - 1;
            if ((uVar2 & 0xfc00) == 0xd800) {
              if (iVar6 == 1) {
                cVar5 = FUN_140024707(uVar7,&local_148,&local_128);
                if (cVar5 != '\0') goto LAB_143e258e3;
                break;
              }
              if ((*(ushort *)ppppwVar16 & 0xfc00) == 0xdc00) {
                uVar7 = (uint)uVar2 * 0x400 + (uint)*(ushort *)ppppwVar16 + 0xfca02400;
                ppppwVar16 = (wchar_t ****)((longlong)ppppwVar12 + 4);
                uVar17 = iVar6 - 2;
              }
            }
            cVar5 = FUN_140024707(uVar7,&local_148,&local_128);
            uVar13 = (ulonglong)uVar17;
            ppppwVar12 = ppppwVar16;
          } while (cVar5 != '\0');
          local_70 = 0xffffffff;
          uVar13 = 0;
LAB_143e25900:
          pppppwVar10 = (wchar_t *****)0x0;
LAB_143e25902:
          local_128 = (wchar_t *****)&local_100;
          if (pppppwVar10 != (wchar_t *****)0x0) {
            local_128 = pppppwVar10;
          }
          iVar6 = (int)sVar9 + 1;
          local_148 = (wchar_t *****)CONCAT44(local_148._4_4_,(int)uVar13);
          uVar13 = CONCAT62((int6)(uVar13 >> 0x10),0xfffe);
          local_78 = (wchar_t ****)local_128;
          do {
            if (iVar6 < 1) break;
            uVar2 = *(ushort *)ppppwVar11;
            uVar7 = (uint)uVar2;
            ppppwVar12 = (wchar_t ****)((longlong)ppppwVar11 + 2);
            iVar23 = iVar6 + -1;
            if ((uVar2 & 0xfc00) == 0xd800) {
              uVar19 = (undefined6)(uVar13 >> 0x10);
              if (iVar6 == 1) {
                FUN_1400247af(uVar7,&local_128,&local_148);
                uVar13 = CONCAT62(uVar19,0xfffe);
                break;
              }
              if ((*(ushort *)ppppwVar12 & 0xfc00) == 0xdc00) {
                uVar7 = (uint)uVar2 * 0x400 + (uint)*(ushort *)ppppwVar12 + 0xfca02400;
                ppppwVar12 = (wchar_t ****)((longlong)ppppwVar11 + 4);
                iVar23 = iVar6 + -2;
              }
              uVar13 = CONCAT62(uVar19,0xfffe);
            }
            iVar6 = iVar23;
            cVar5 = FUN_1400247af(uVar7,&local_128,&local_148);
            ppppwVar11 = ppppwVar12;
          } while (cVar5 != '\0');
        }
        else {
          ppppwVar11 = **param_1;
          local_80 = (wchar_t ****)0x0;
          if (ppppwVar11 != (wchar_t ****)0x0) goto LAB_143e25809;
          local_78 = (wchar_t ****)0x0;
          local_70 = 0;
        }
        FUN_1401d7cf8(&local_68,local_78);
        if ((wchar_t *****)local_80 != (wchar_t *****)0x0) {
          FUN_1400020a8();
        }
        _SubStr = &local_68;
        if (0xf < local_50) {
          _SubStr = (char ******)local_68;
        }
        goto LAB_143e25a15;
      }
      if (*(int *)(*param_1 + 1) == 0) {
        ppppwVar11 = (wchar_t ****)&DAT_149dfb77a;
      }
      else {
        ppppwVar11 = **param_1;
      }
      iVar6 = _wtoi((wchar_t *)ppppwVar11);
      sVar15 = (short)iVar6;
      _SubStr = (char ******)0x0;
    }
    local_128 = (wchar_t *****)0x0;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = 0xf;
    if (1 < *(int *)(param_1 + 1)) {
      pppppwVar10 = *param_1;
      FUN_140056680(&local_100,&DAT_149e060b2);
      pppwVar4 = local_100;
      ppppwVar11 = (wchar_t ****)&DAT_149dfb77a;
      ppppwVar12 = (wchar_t ****)local_100;
      if (local_f8 == 0) {
        ppppwVar12 = (wchar_t ****)&DAT_149dfb77a;
      }
      if (*(int *)(pppppwVar10 + 3) != 0) {
        ppppwVar11 = pppppwVar10[2];
      }
      iVar6 = wcscmp((wchar_t *)ppppwVar11,(wchar_t *)ppppwVar12);
      if ((wchar_t ****)pppwVar4 != (wchar_t ****)0x0) {
        FUN_1400020a8(pppwVar4);
      }
      if (iVar6 != 0) {
        cVar5 = FUN_1405b43cc(*param_1 + 2);
        if (cVar5 == '\0') {
          if (*(int *)(*param_1 + 3) == 0) {
            ppppwVar11 = (wchar_t ****)&DAT_149dfb77a;
LAB_143e25da5:
            local_168 = (wchar_t ****)&local_80;
            local_80 = (wchar_t ****)0x0;
            local_170 = (wchar_t *****)param_1;
            sVar9 = wcslen((wchar_t *)ppppwVar11);
            local_158 = (wchar_t ****)((ulonglong)local_158 & 0xffffffff00000000);
            local_148 = (wchar_t *****)CONCAT44(local_148._4_4_,0x7fffffff);
            uVar13 = sVar9 & 0xffffffff;
            ppppwVar12 = ppppwVar11;
            do {
              iVar6 = (int)uVar13;
              if (iVar6 < 1) {
LAB_143e25fde:
                local_70 = (uint)local_158;
                uVar7 = (uint)local_158 + 1;
                if (uVar7 < 0x81) goto LAB_143e25ff7;
                FUN_1446efa72(local_168,0,uVar7,1);
                pppppwVar10 = (wchar_t *****)local_80;
                goto LAB_143e25ff9;
              }
              uVar2 = *(ushort *)ppppwVar12;
              uVar7 = (uint)uVar2;
              ppppwVar16 = (wchar_t ****)((longlong)ppppwVar12 + 2);
              uVar17 = iVar6 - 1;
              if ((uVar2 & 0xfc00) == 0xd800) {
                if (iVar6 == 1) {
                  cVar5 = FUN_140024707(uVar7,&local_158,&local_148);
                  if (cVar5 != '\0') goto LAB_143e25fde;
                  break;
                }
                if ((*(ushort *)ppppwVar16 & 0xfc00) == 0xdc00) {
                  uVar7 = (uint)uVar2 * 0x400 + (uint)*(ushort *)ppppwVar16 + 0xfca02400;
                  uVar17 = iVar6 - 2;
                  ppppwVar16 = (wchar_t ****)((longlong)ppppwVar12 + 4);
                }
              }
              ppppwVar12 = ppppwVar16;
              cVar5 = FUN_140024707(uVar7,&local_158,&local_148);
              uVar13 = (ulonglong)uVar17;
            } while (cVar5 != '\0');
            local_70 = 0xffffffff;
            uVar7 = 0;
LAB_143e25ff7:
            pppppwVar10 = (wchar_t *****)0x0;
LAB_143e25ff9:
            local_148 = (wchar_t *****)&local_100;
            if (pppppwVar10 != (wchar_t *****)0x0) {
              local_148 = pppppwVar10;
            }
            iVar6 = (int)sVar9 + 1;
            local_158 = (wchar_t ****)CONCAT44(local_158._4_4_,uVar7);
            local_78 = (wchar_t ****)local_148;
            do {
              if (iVar6 < 1) break;
              uVar2 = *(ushort *)ppppwVar11;
              uVar7 = (uint)uVar2;
              ppppwVar12 = (wchar_t ****)((longlong)ppppwVar11 + 2);
              iVar23 = iVar6 + -1;
              if ((uVar2 & 0xfc00) == 0xd800) {
                if (iVar6 == 1) {
                  FUN_1400247af(uVar7,&local_148,&local_158);
                  break;
                }
                if ((*(ushort *)ppppwVar12 & 0xfc00) == 0xdc00) {
                  uVar7 = (uint)uVar2 * 0x400 + (uint)*(ushort *)ppppwVar12 + 0xfca02400;
                  ppppwVar12 = (wchar_t ****)((longlong)ppppwVar11 + 4);
                  iVar23 = iVar6 + -2;
                }
              }
              iVar6 = iVar23;
              cVar5 = FUN_1400247af(uVar7,&local_148,&local_158);
              ppppwVar11 = ppppwVar12;
            } while (cVar5 != '\0');
            uVar13 = CONCAT62((int6)((ulonglong)&local_148 >> 0x10),0xfffe);
            param_1 = (wchar_t ******)local_170;
          }
          else {
            ppppwVar11 = (*param_1)[2];
            local_80 = (wchar_t ****)0x0;
            if (ppppwVar11 != (wchar_t ****)0x0) goto LAB_143e25da5;
            local_78 = (wchar_t ****)0x0;
            local_70 = 0;
          }
          FUN_1401d7cf8(&local_128,local_78);
          if ((wchar_t *****)local_80 != (wchar_t *****)0x0) {
            FUN_1400020a8();
          }
          ppppppwVar20 = &local_128;
          if (0xf < local_110) {
            ppppppwVar20 = (wchar_t ******)local_128;
          }
          goto LAB_143e25b0e;
        }
        if (*(int *)(*param_1 + 3) == 0) {
          ppppwVar11 = (wchar_t ****)&DAT_149dfb77a;
        }
        else {
          ppppwVar11 = (*param_1)[2];
        }
        uVar7 = _wtoi((wchar_t *)ppppwVar11);
        uVar13 = (ulonglong)uVar7;
      }
    }
    ppppppwVar20 = (wchar_t ******)0x0;
  }
LAB_143e25b0e:
  local_148 = (wchar_t *****)0x0;
  uStack_140 = 0;
  local_138 = 0;
  local_130 = 0xf;
  uVar22 = 0xfffe;
  uVar21 = 0xfffe;
  if (*(int *)(param_1 + 1) < 3) {
LAB_143e25c24:
    plVar3 = DAT_14cb8a6f8;
    uVar21 = uVar22;
    ppppppwVar14 = (wchar_t ******)0x0;
    goto LAB_143e25c2d;
  }
  pppppwVar10 = *param_1;
  local_170 = (wchar_t *****)ppppppwVar20;
  FUN_140056680(&local_100,&DAT_149e060b2);
  ppppwVar11 = (wchar_t ****)&DAT_149dfb77a;
  ppppwVar12 = (wchar_t ****)local_100;
  if (local_f8 == 0) {
    ppppwVar12 = (wchar_t ****)&DAT_149dfb77a;
  }
  if (*(int *)(pppppwVar10 + 5) != 0) {
    ppppwVar11 = pppppwVar10[4];
  }
  iVar6 = wcscmp((wchar_t *)ppppwVar11,(wchar_t *)ppppwVar12);
  if ((wchar_t ****)local_100 != (wchar_t ****)0x0) {
    FUN_1400020a8(local_100);
  }
  if (iVar6 == 0) {
    ppppppwVar14 = (wchar_t ******)0x0;
    plVar3 = DAT_14cb8a6f8;
    ppppppwVar20 = (wchar_t ******)local_170;
    goto LAB_143e25c2d;
  }
  cVar5 = FUN_1405b43cc(*param_1 + 4);
  ppppppwVar20 = (wchar_t ******)local_170;
  if (cVar5 != '\0') {
    if (*(int *)(*param_1 + 5) == 0) {
      ppppwVar11 = (wchar_t ****)&DAT_149dfb77a;
    }
    else {
      ppppwVar11 = (*param_1)[4];
    }
    iVar6 = _wtoi((wchar_t *)ppppwVar11);
    uVar22 = (undefined2)iVar6;
    goto LAB_143e25c24;
  }
  if (*(int *)(*param_1 + 5) == 0) {
    ppppwVar11 = (wchar_t ****)&DAT_149dfb77a;
LAB_143e25cdc:
    local_80 = (wchar_t ****)0x0;
    local_168 = (wchar_t ****)CONCAT44(local_168._4_4_,(int)uVar13);
    local_160 = (wchar_t ****)&local_80;
    sVar9 = wcslen((wchar_t *)ppppwVar11);
    local_14c = 0;
    local_158 = (wchar_t ****)CONCAT44(local_158._4_4_,0x7fffffff);
    uVar13 = sVar9 & 0xffffffff;
    ppppwVar12 = ppppwVar11;
    do {
      iVar6 = (int)uVar13;
      if (iVar6 < 1) {
LAB_143e25e82:
        local_70 = local_14c;
        uVar7 = local_14c + 1;
        if (uVar7 < 0x81) goto LAB_143e25e9b;
        FUN_1446efa72(local_160,0,uVar7,1);
        pppppwVar10 = (wchar_t *****)local_80;
        goto LAB_143e25e9d;
      }
      wVar1 = *(wchar_t *)ppppwVar12;
      uVar7 = (uint)(ushort)wVar1;
      ppppwVar16 = (wchar_t ****)((longlong)ppppwVar12 + 2);
      uVar17 = iVar6 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar6 == 1) {
          cVar5 = FUN_140024707(uVar7,&local_14c,&local_158);
          if (cVar5 != '\0') goto LAB_143e25e82;
          break;
        }
        if (((ushort)*(wchar_t *)ppppwVar16 & 0xfc00) == 0xdc00) {
          uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*(wchar_t *)ppppwVar16 + 0xfca02400;
          uVar17 = iVar6 - 2;
          ppppwVar16 = (wchar_t ****)((longlong)ppppwVar12 + 4);
        }
      }
      ppppwVar12 = ppppwVar16;
      cVar5 = FUN_140024707(uVar7,&local_14c,&local_158);
      uVar13 = (ulonglong)uVar17;
    } while (cVar5 != '\0');
    local_70 = 0xffffffff;
    uVar7 = 0;
LAB_143e25e9b:
    pppppwVar10 = (wchar_t *****)0x0;
LAB_143e25e9d:
    local_158 = &local_100;
    if (pppppwVar10 != (wchar_t *****)0x0) {
      local_158 = (wchar_t ****)pppppwVar10;
    }
    iVar6 = (int)sVar9 + 1;
    local_14c = uVar7;
    local_78 = local_158;
    do {
      if (iVar6 < 1) break;
      wVar1 = *(wchar_t *)ppppwVar11;
      uVar7 = (uint)(ushort)wVar1;
      ppppwVar12 = (wchar_t ****)((longlong)ppppwVar11 + 2);
      iVar23 = iVar6 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar6 == 1) {
          FUN_1400247af(uVar7,&local_158,&local_14c);
          break;
        }
        if (((ushort)*(wchar_t *)ppppwVar12 & 0xfc00) == 0xdc00) {
          uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*(wchar_t *)ppppwVar12 + 0xfca02400;
          ppppwVar12 = (wchar_t ****)((longlong)ppppwVar11 + 4);
          iVar23 = iVar6 + -2;
        }
      }
      iVar6 = iVar23;
      ppppwVar11 = ppppwVar12;
      cVar5 = FUN_1400247af(uVar7,&local_158,&local_14c);
    } while (cVar5 != '\0');
    uVar13 = (ulonglong)local_168 & 0xffffffff;
  }
  else {
    ppppwVar11 = (*param_1)[4];
    local_80 = (wchar_t ****)0x0;
    if (ppppwVar11 != (wchar_t ****)0x0) goto LAB_143e25cdc;
    local_78 = (wchar_t ****)0x0;
    local_70 = 0;
  }
  ppppppwVar20 = (wchar_t ******)local_170;
  FUN_1401d7cf8(&local_148,local_78);
  if ((wchar_t *****)local_80 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  plVar3 = DAT_14cb8a6f8;
  ppppppwVar14 = &local_148;
  if (0xf < local_130) {
    ppppppwVar14 = (wchar_t ******)local_148;
  }
LAB_143e25c2d:
  while (plVar18 = plVar3, plVar18 != (longlong *)0x0) {
    plVar3 = (longlong *)plVar18[5];
    if (((sVar15 < 1) || ((short)plVar18[4] == sVar15)) &&
       ((_SubStr == (char ******)0x0 ||
        ((*(char *)_SubStr != '*' &&
         (pcVar8 = strstr((char *)plVar18[1],(char *)_SubStr), pcVar8 != (char *)0x0)))))) {
      local_178 = uVar21;
      (**(code **)(*plVar18 + 0x28))(plVar18,ppppppwVar20,uVar13 & 0xffffffff,ppppppwVar14);
    }
  }
  FUN_1401d9a90(&local_148);
  FUN_1401d9a90(&local_128);
  FUN_1401d9a90(&local_68);
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e26110 FUN_143e26110 body=191 status=ok
// SIG undefined FUN_143e26110(void)

void FUN_143e26110(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xf;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14b4257d8;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3a) = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x79) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x7b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0xffff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0xf;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x80;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0xf;
  *(undefined2 *)(param_1 + 0x21) = 0;
  param_1[0xb] = param_1;
  return;
}



// FUNCTION 143e261d0 FUN_143e261d0 body=29 status=ok
// SIG undefined FUN_143e261d0(void)

undefined8 FUN_143e261d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e26202 FUN_143e26202 body=85 status=ok
// SIG undefined FUN_143e26202(void)

void FUN_143e26202(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b425cb0;
  return;
}



// FUNCTION 143e26258 FUN_143e26258 body=85 status=ok
// SIG undefined FUN_143e26258(void)

void FUN_143e26258(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b425cb0;
  return;
}



// FUNCTION 143e262ae FUN_143e262ae body=118 status=ok
// SIG undefined FUN_143e262ae(void)

void FUN_143e262ae(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a177500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b425cb0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e26315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e2632c FUN_143e2632c body=19 status=ok
// SIG undefined FUN_143e2632c(void)

undefined1 FUN_143e2632c(undefined8 param_1,undefined8 param_2)

{
  FUN_143e26340(param_2);
  return 1;
}



// FUNCTION 143e26340 FUN_143e26340 body=1859 status=ok
// SIG undefined FUN_143e26340(void)

void FUN_143e26340(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  wchar_t wVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  size_t sVar8;
  uint uVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  ulonglong uVar12;
  uint uVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_188 [32];
  wchar_t *local_168;
  int local_160;
  longlong local_158;
  longlong *local_150;
  uint local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 *local_130;
  wchar_t *local_c0;
  wchar_t *local_b8;
  uint local_b0;
  wchar_t *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint3 local_88;
  undefined1 uStack_85;
  undefined2 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (0 < (int)param_1[1]) {
    _local_88 = 0x10100;
    local_84 = 0xffff;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_68 = 0xf;
    local_60 = 0;
    local_58 = '\0';
    local_50 = (undefined8 *)0x0;
    if ((int)param_1[1] != 1) {
      lVar15 = 1;
      lVar16 = 0x18;
      do {
        lVar4 = *param_1;
        FUN_140056680(&local_140,L"NoExpand");
        pwVar14 = local_140;
        pwVar11 = local_140;
        if (local_138 == 0) {
          pwVar11 = L"";
        }
        pwVar10 = L"";
        if (*(int *)(lVar4 + lVar16) != 0) {
          pwVar10 = *(wchar_t **)(lVar4 + -8 + lVar16);
        }
        iVar7 = wcscmp(pwVar10,pwVar11);
        if (pwVar14 != (wchar_t *)0x0) {
          FUN_1400020a8(pwVar14);
        }
        if (iVar7 == 0) {
          local_88 = (uint3)(ushort)local_88;
        }
        else {
          FUN_140056680(&local_140,L"LowEffort");
          pwVar14 = local_140;
          pwVar11 = local_140;
          if (local_138 == 0) {
            pwVar11 = L"";
          }
          pwVar10 = L"";
          if (*(int *)(lVar4 + lVar16) != 0) {
            pwVar10 = *(wchar_t **)(lVar4 + -8 + lVar16);
          }
          iVar7 = wcscmp(pwVar10,pwVar11);
          if (pwVar14 != (wchar_t *)0x0) {
            FUN_1400020a8(pwVar14);
          }
          if (iVar7 == 0) {
            _local_88 = CONCAT13(1,local_88);
          }
        }
        lVar15 = lVar15 + 1;
        lVar16 = lVar16 + 0x10;
      } while (lVar15 < (int)param_1[1]);
    }
    FUN_1467acba0(*param_1,&local_140,0);
    FUN_141173b16(&local_158,&local_140,&local_88,0);
    if (local_140 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_158 == 0) {
      FUN_1467acba0(*param_1,&local_168,0);
      pwVar14 = local_168;
      if (local_160 == 0) {
        pwVar14 = L"";
      }
      local_c0 = (wchar_t *)0x0;
      if (pwVar14 == (wchar_t *)0x0) {
        local_b8 = (wchar_t *)0x0;
        local_b0 = 0;
      }
      else {
        sVar8 = wcslen(pwVar14);
        local_144 = 0;
        local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,0x7fffffff);
        uVar12 = sVar8 & 0xffffffff;
        pwVar11 = pwVar14;
        do {
          iVar7 = (int)uVar12;
          if (iVar7 < 1) {
LAB_143e268cb:
            local_b0 = local_144;
            uVar9 = local_144 + 1;
            if (uVar9 < 0x81) goto LAB_143e268e8;
            FUN_1446efa72(&local_c0,0,uVar9,1);
            pwVar11 = local_c0;
            goto LAB_143e268ea;
          }
          wVar3 = *pwVar11;
          uVar9 = (uint)(ushort)wVar3;
          pwVar10 = pwVar11 + 1;
          uVar13 = iVar7 - 1;
          if ((wVar3 & 0xfc00U) == 0xd800) {
            if (iVar7 == 1) {
              cVar6 = FUN_140024707(uVar9,&local_144,&local_a8);
              if (cVar6 != '\0') goto LAB_143e268cb;
              break;
            }
            if (((ushort)*pwVar10 & 0xfc00) == 0xdc00) {
              uVar9 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar10 + 0xfca02400;
              uVar13 = iVar7 - 2;
              pwVar10 = pwVar11 + 2;
            }
          }
          pwVar11 = pwVar10;
          cVar6 = FUN_140024707(uVar9,&local_144,&local_a8);
          uVar12 = (ulonglong)uVar13;
        } while (cVar6 != '\0');
        local_b0 = 0xffffffff;
        uVar9 = 0;
LAB_143e268e8:
        pwVar11 = (wchar_t *)0x0;
LAB_143e268ea:
        local_b8 = (wchar_t *)&local_140;
        if (pwVar11 != (wchar_t *)0x0) {
          local_b8 = pwVar11;
        }
        iVar7 = (int)sVar8 + 1;
        local_144 = uVar9;
        local_a8 = local_b8;
        do {
          if (iVar7 < 1) break;
          wVar3 = *pwVar14;
          uVar9 = (uint)(ushort)wVar3;
          pwVar11 = pwVar14 + 1;
          iVar5 = iVar7 + -1;
          if ((wVar3 & 0xfc00U) == 0xd800) {
            if (iVar7 == 1) {
              FUN_1400247af(uVar9,&local_a8,&local_144);
              break;
            }
            if (((ushort)*pwVar11 & 0xfc00) == 0xdc00) {
              uVar9 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar11 + 0xfca02400;
              pwVar11 = pwVar14 + 2;
              iVar5 = iVar7 + -2;
            }
          }
          iVar7 = iVar5;
          pwVar14 = pwVar11;
          cVar6 = FUN_1400247af(uVar9,&local_a8,&local_144);
        } while (cVar6 != '\0');
      }
      pwVar14 = local_b8;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = (wchar_t *)0x0;
      uStack_a0 = 0;
      sVar8 = strlen((char *)local_b8);
      FUN_140cd1a74(&local_a8,pwVar14,sVar8);
      if (local_c0 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (local_168 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      lVar15 = FUN_14001cc68(0x110,0x10);
      FUN_143e26110(lVar15);
      cVar6 = FUN_143e1f778(lVar15,&local_a8,&local_88);
      if (((cVar6 != '\0') && (lVar16 = FUN_143e1f5ee(lVar15), lVar16 == 0)) &&
         (FUN_14895df2c(lVar15,&local_140), local_140 != (wchar_t *)0x0)) {
        FUN_1400020a8();
      }
      if (lVar15 != 0) {
        FUN_14026cb8e(lVar15);
        FUN_1400020a8(lVar15);
      }
      FUN_1401d9a90(&local_a8);
    }
    else {
      if ((*(longlong *)(local_158 + 0x10) != 0) &&
         (FUN_14895df2c(*(longlong *)(local_158 + 0x10),&local_140), local_140 != (wchar_t *)0x0)) {
        FUN_1400020a8();
      }
      local_138 = local_138 & 0xff000000;
      local_130 = (undefined8 *)0x0;
      local_140 = (wchar_t *)0x800010001;
      if (1 < (int)param_1[1]) {
        lVar15 = 1;
        lVar16 = 0x18;
        do {
          lVar4 = *param_1;
          FUN_140056680(&local_a8,L"Base85");
          pwVar14 = local_a8;
          pwVar11 = local_a8;
          if ((int)uStack_a0 == 0) {
            pwVar11 = L"";
          }
          pwVar10 = L"";
          if (*(int *)(lVar4 + lVar16) != 0) {
            pwVar10 = *(wchar_t **)(lVar4 + -8 + lVar16);
          }
          iVar7 = wcscmp(pwVar10,pwVar11);
          if (pwVar14 != (wchar_t *)0x0) {
            FUN_1400020a8(pwVar14);
          }
          if (iVar7 == 0) {
            local_140._0_4_ = CONCAT13(1,(uint3)local_140);
          }
          else {
            FUN_140056680(&local_a8,L"NoCompact");
            pwVar14 = local_a8;
            pwVar11 = local_a8;
            if ((int)uStack_a0 == 0) {
              pwVar11 = L"";
            }
            pwVar10 = L"";
            if (*(int *)(lVar4 + lVar16) != 0) {
              pwVar10 = *(wchar_t **)(lVar4 + -8 + lVar16);
            }
            iVar7 = wcscmp(pwVar10,pwVar11);
            if (pwVar14 != (wchar_t *)0x0) {
              FUN_1400020a8(pwVar14);
            }
            if (iVar7 == 0) {
              local_140._0_3_ = (uint3)(ushort)local_140;
            }
            else {
              FUN_140056680(&local_a8,L"PreferStrings");
              pwVar14 = local_a8;
              pwVar11 = local_a8;
              if ((int)uStack_a0 == 0) {
                pwVar11 = L"";
              }
              pwVar10 = L"";
              if (*(int *)(lVar4 + lVar16) != 0) {
                pwVar10 = *(wchar_t **)(lVar4 + -8 + lVar16);
              }
              iVar7 = wcscmp(pwVar10,pwVar11);
              if (pwVar14 != (wchar_t *)0x0) {
                FUN_1400020a8(pwVar14);
              }
              if (iVar7 == 0) {
                local_138 = CONCAT31(local_138._1_3_,1);
              }
              else {
                FUN_140056680(&local_a8,L"PreferBits");
                pwVar14 = local_a8;
                pwVar11 = local_a8;
                if ((int)uStack_a0 == 0) {
                  pwVar11 = L"";
                }
                pwVar10 = L"";
                if (*(int *)(lVar4 + lVar16) != 0) {
                  pwVar10 = *(wchar_t **)(lVar4 + -8 + lVar16);
                }
                iVar7 = wcscmp(pwVar10,pwVar11);
                if (pwVar14 != (wchar_t *)0x0) {
                  FUN_1400020a8(pwVar14);
                }
                if (iVar7 == 0) {
                  local_138._0_2_ = CONCAT11(1,(undefined1)local_138);
                }
              }
            }
          }
          lVar15 = lVar15 + 1;
          lVar16 = lVar16 + 0x10;
        } while (lVar15 < (int)param_1[1]);
      }
      local_a8 = (wchar_t *)0x0;
      uStack_a0 = 0;
      FUN_1409e3c80(local_158,&local_a8,&local_140);
      if (local_a8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if ((local_138._2_1_ == '\x01') && (local_130 != (undefined8 *)0x0)) {
        (**(code **)*local_130)(local_130,1);
      }
    }
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_150 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar2 = (int *)((longlong)local_150 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_150 + 0x10))(local_150);
        }
      }
    }
    if ((local_58 == '\x01') && (local_50 != (undefined8 *)0x0)) {
      (**(code **)*local_50)(local_50,1);
      local_50 = (undefined8 *)0x0;
    }
    FUN_1401d9a90(&local_80);
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e26c1e FUN_143e26c1e body=148 status=ok
// SIG undefined FUN_143e26c1e(void)

void FUN_143e26c1e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x88) & 0x10) == 0) {
    plVar3 = *(longlong **)(param_1 + 0x90);
    local_20 = *(undefined8 *)(param_1 + 0x70);
    local_18 = *(longlong **)(param_1 + 0x78);
    if (local_18 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = (int)local_18[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,param_2,&local_20);
    plVar3 = local_18;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_18)(local_18);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e26d10 FUN_143e26d10 body=68 status=ok
// SIG undefined FUN_143e26d10(void)

undefined8 * FUN_143e26d10(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b426b70;
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



// FUNCTION 143e26d70 FUN_143e26d70 body=105 status=ok
// SIG undefined FUN_143e26d70(void)

void FUN_143e26d70(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = DAT_14cb8aa48;
  lVar1 = *param_2;
  if ((longlong)DAT_14cb8aa30 != 0) {
    lVar3 = 0;
    do {
      if (*(longlong *)(DAT_14cb8aa28 + lVar3) == lVar1) {
        return;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)DAT_14cb8aa30 * 8 != lVar3);
  }
  lVar3 = (longlong)(int)DAT_14cb8aa48;
  DAT_14cb8aa48 = DAT_14cb8aa48 + 1;
  if (DAT_14cb8aa4c < DAT_14cb8aa48) {
    FUN_1447d05f2(&DAT_14cb8aa40,iVar2);
  }
  *(longlong *)(DAT_14cb8aa40 + lVar3 * 8) = lVar1;
  return;
}



// FUNCTION 143e26dfc FUN_143e26dfc body=29 status=ok
// SIG undefined FUN_143e26dfc(void)

undefined8 FUN_143e26dfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e26e24 FUN_143e26e24 body=68 status=ok
// SIG undefined FUN_143e26e24(void)

undefined8 * FUN_143e26e24(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b426d60;
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



// FUNCTION 143e26e68 FUN_143e26e68 body=96 status=ok
// SIG undefined FUN_143e26e68(void)

ulonglong FUN_143e26e68(longlong param_1)

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
LAB_143e26eab:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_143e26eab;
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



// FUNCTION 143e26ec8 FUN_143e26ec8 body=1191 status=ok
// SIG undefined FUN_143e26ec8(void)

/* WARNING: Removing unreachable block (ram,0x000143e27329) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_143e26ec8(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_d8 [39];
  undefined1 local_b1;
  undefined8 local_b0;
  char local_a8 [8];
  undefined8 local_a0;
  longlong *local_98;
  longlong local_90;
  undefined1 local_88;
  undefined4 local_80 [2];
  char local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar9 = DAT_14cb8aa58;
  if (DAT_14cb8aa58 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)FUN_140595974(0x12800,0);
    lVar6 = 0x7f;
    puVar11 = puVar9;
    do {
      puVar10 = puVar11 + 0x4a;
      *puVar11 = puVar10;
      lVar6 = lVar6 + -1;
      puVar11 = puVar10;
    } while (lVar6 != 0);
    *puVar10 = DAT_14cb8aa58;
    _DAT_14cb8aa60 = _DAT_14cb8aa60 + 0x80;
  }
  DAT_14cb8aa58 = (undefined8 *)*puVar9;
  _DAT_14cb8aa64 = _DAT_14cb8aa64 + 1;
  local_b1 = *(undefined1 *)(param_3 + 0xa0);
  lVar6 = *(longlong *)(param_3 + 0x48);
  if (lVar6 == 0) {
    local_b0 = *(undefined8 *)(param_3 + 0x38);
    FUN_1446dcdd4(local_a8);
    lVar6 = FUN_1448fdc6e(local_a8);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_3 + 0x48) = lVar6;
  }
  lVar12 = 0x30;
  if (*(char *)(param_3 + 0xa1) == '\x01') {
    lVar12 = 0;
  }
  lVar3 = *param_1 + lVar12;
  local_a8[0] = *(char *)(*param_1 + lVar12);
  if (local_a8[0] == '\x01') {
    local_a8[0] = '\x02';
    if (*(longlong *)(lVar3 + 8) == 0) {
      local_a0._0_4_ = 0;
      iVar5 = 0;
      uVar4 = (uint)local_a0;
    }
    else {
      uVar4 = *(uint *)(*(longlong *)(lVar3 + 8) + 0xc);
      local_a0 = (ulonglong)uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar5 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar13);
        }
        LOCK();
        iVar5 = *(int *)(lVar12 + 0x10);
        bVar14 = iVar5 == 0;
        if (bVar14) {
          *(int *)(lVar12 + 0x10) = iVar13;
          iVar5 = 0;
        }
        UNLOCK();
        uVar4 = (uint)local_a0;
        if (bVar14) {
          iVar5 = iVar13;
        }
      }
    }
    local_a0._0_4_ = uVar4;
    local_a0 = CONCAT44(iVar5,(uint)local_a0);
  }
  else if (local_a8[0] == '\x02') {
    local_a0 = *(undefined8 *)(lVar3 + 8);
  }
  else if (local_a8[0] == '\x03') {
    local_a0 = *(undefined8 *)(lVar3 + 8);
    local_98 = *(longlong **)(lVar3 + 0x10);
    if (local_98 == (longlong *)0x0) {
      local_90 = *(longlong *)(lVar3 + 0x18);
      local_88 = *(undefined1 *)(lVar3 + 0x20);
    }
    else {
      LOCK();
      *(int *)((longlong)local_98 + 0xc) = *(int *)((longlong)local_98 + 0xc) + 1;
      UNLOCK();
      local_90 = *(longlong *)(lVar3 + 0x18);
      local_88 = *(undefined1 *)(lVar3 + 0x20);
    }
  }
  local_80[0] = 0;
  if (*(int *)(lVar3 + 0x28) != 0) {
    uVar7 = FUN_1448174c4(local_80);
    FUN_1400e08b0(uVar7,DAT_14c9a3da0 + (longlong)*(int *)(lVar3 + 0x28) * 0x10 + -0x10);
  }
  local_78 = '\0';
  local_50[0] = 0;
  *puVar9 = &PTR_FUN_14b4256e8;
  FUN_14141da3a(puVar9 + 1,local_a8);
  *(undefined4 *)(puVar9 + 0xd) = *(undefined4 *)(param_3 + 0x50);
  puVar9[0x10] = 0;
  puVar9[0xe] = 0;
  puVar9[0xf] = 0;
  puVar9[0xe] = *(undefined8 *)(param_3 + 0x58);
  uVar7 = FUN_14477b664(*(undefined8 *)(param_3 + 0x60));
  uVar7 = FUN_14477b664(uVar7);
  puVar9[0xf] = uVar7;
  puVar9[0x10] = *(undefined8 *)(param_3 + 0x68);
  uVar7 = *(undefined8 *)(param_3 + 0x78);
  puVar9[0x11] = *(undefined8 *)(param_3 + 0x70);
  puVar9[0x12] = uVar7;
  puVar9[0x13] = *(undefined8 *)(param_3 + 0x80);
  *(undefined4 *)(puVar9 + 0x14) = *(undefined4 *)(param_3 + 0x88);
  puVar9[0x15] = 0;
  *(undefined4 *)(puVar9 + 0x16) = *(undefined4 *)(param_3 + 0x98);
  puVar9[0x17] = lVar6;
  *(undefined1 *)(puVar9 + 0x18) = local_b1;
  puVar9[0x46] = 0;
  puVar9[0x47] = 0x500000000;
  *(undefined1 *)((longlong)puVar9 + 0x244) = 0;
  *(undefined1 *)(puVar9 + 0x49) = 0;
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b426df0;
  plVar8[2] = (longlong)puVar9;
  FUN_1448173f8(local_50);
  if (local_78 != '\0') {
    if (local_78 == '\x01') {
      local_70 = 0;
    }
    else if ((local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
    local_78 = '\0';
  }
  FUN_1448173f8(local_80);
  if ((local_a8[0] == '\x03') && (local_98 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  lVar6 = *(longlong *)param_1[1];
  iVar5 = *(int *)(lVar6 + 0xb0);
  *(uint *)(lVar6 + 0xb0) = iVar5 + 1U;
  if (*(uint *)(lVar6 + 0xb4) < iVar5 + 1U) {
    FUN_1418a8e5a((longlong *)(lVar6 + 0xa8),iVar5);
  }
  lVar6 = *(longlong *)(lVar6 + 0xa8);
  *(undefined8 **)(lVar6 + (longlong)iVar5 * 0x10) = puVar9;
  *(longlong **)(lVar6 + 8 + (longlong)iVar5 * 0x10) = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e27388 FUN_143e27388 body=5 status=ok
// SIG undefined FUN_143e27388(void)

longlong FUN_143e27388(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143e2738e FUN_143e2738e body=12 status=ok
// SIG undefined FUN_143e2738e(void)

void FUN_143e2738e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e27397. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e2739a FUN_143e2739a body=29 status=ok
// SIG undefined FUN_143e2739a(void)

undefined8 FUN_143e2739a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e273de FUN_143e273de body=29 status=ok
// SIG undefined FUN_143e273de(void)

undefined8 FUN_143e273de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e273fb FUN_143e273fb body=3134 status=ok
// SIG undefined FUN_143e273fb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e273fb(void)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  char *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  _DAT_14cb8a5d8 = 0xffffffff;
  DAT_14cb8a5dc = 0;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar3 = FUN_140b10a34(&local_a8,&DAT_14cb8a5e0);
  if (cVar3 == '\0') {
    _DAT_14cb8a5e0 = 0;
    uRam000000014cb8a5e8 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cb8a5f0 = 0x47efffffe0000000;
  _DAT_14cb8a5f8 = 0x47efffffe0000000;
  _DAT_14cb8a600 = 0x47efffffe0000000;
  _DAT_14cb8a608 = 0x47efffffe0000000;
  _DAT_14cb8a610 = 0x47efffffe0000000;
  _DAT_14cb8a618 = 0x47efffffe0000000;
  _DAT_14cb8a620 = 0x47efffffe0000000;
  _DAT_14cb8a628 = 0x47efffffe0000000;
  local_a8 = "bone";
  iStack_a0 = 4;
  uStack_9c = uStack_9c & 0xffffff00;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "AssetRegistry";
  iStack_a0 = 0xd;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8a630 = (ulonglong)uVar4;
  _DAT_14cb8a63c = 0;
  FUN_14052b5e0(&DAT_14cb8a638,"PlayerAwareness",0);
  _DAT_14cb8a648 = "PlayerAwareness";
  local_a8 = (char *)0x99294fec15db08df;
  iStack_a0 = 0x8c1d6b4a;
  uStack_9c = 0x1924ee92;
  _DAT_14cb8a650 = 0x15db08df;
  uRam000000014cb8a654 = 0x99294fec;
  uRam000000014cb8a658 = 0x8c1d6b4a;
  uRam000000014cb8a65c = 0x1924ee92;
  FUN_141005458(&local_a8,0,L"GbxSequence",0);
  atexit((_func_5014 *)&LAB_143e1ada8);
  FUN_1446f470e(&DAT_14cb8a660,L"SequencerActor",1);
  FUN_1446f470e(&DAT_14cb8a668,L"GbxSequenceActorDefSpawner",1);
  FUN_1446f470e(&DAT_14cb8a670,L"GbxSequencePlayerLinker",1);
  local_a8 = (char *)CONCAT71(local_a8._1_7_,1);
  local_b8 = 0;
  FUN_140bd5914(&DAT_14cb8a678,L"gbx.GbxSequencePlayerPooling.Enabled",&local_a8,
                L"Whether the pooling for GbxSequencePlayers is enabled. 0 for disabled, non-zero for enabled."
               );
  atexit(FUN_143e1d26c);
  FUN_1462a3428(&DAT_14cb8a690,&LAB_143e1d37e,"levelsequenceactor",&DAT_14b3e7b50);
  atexit((_func_5014 *)&LAB_143e1d383);
  plVar5 = (longlong *)FUN_145d889d0();
  iVar1 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
    FUN_140ca86cc(plVar5,iVar1);
  }
  *(char **)(*plVar5 + (longlong)iVar1 * 8) = "levelsequenceactor";
  FUN_1462a3428(&DAT_14cb8a6c0,&LAB_143e1d3b7,"shotoriginactor",&DAT_14b3e7b50);
  atexit((_func_5014 *)&LAB_143e1d3bc);
  plVar5 = (longlong *)FUN_145d889d0();
  iVar1 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
    FUN_140ca86cc(plVar5,iVar1);
  }
  *(char **)(*plVar5 + (longlong)iVar1 * 8) = "shotoriginactor";
  local_a8 = "nexus";
  iStack_a0 = 5;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8a6f0 = (ulonglong)uVar4;
  local_a8 = (char *)0x0;
  iStack_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  iStack_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  *(longlong *)(local_a8 + 0x10) = lVar6;
  *(undefined ***)local_a8 = &PTR_FUN_14b425c40;
  local_b8 = 0;
  FUN_14156bb10(&DAT_14cb8a700,L"gbx.SerialNumbers.Report",
                L"Dump info about all Serial Number categories",&local_a8);
  if (iStack_a0 == 0) {
LAB_143e2779d:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    iStack_a0 = 0;
    goto LAB_143e2779d;
  }
  atexit(FUN_143e1d3f0);
  DAT_14cb8a720 = 0;
  _DAT_14cb8a728 = 0;
  atexit((_func_5014 *)&LAB_143e1f5a8);
  DAT_14cb8a750 = 0;
  DAT_14cb8a758 = 0;
  DAT_14cb8a730 = 0;
  _DAT_14cb8a738 = 0;
  _DAT_14cb8a75c = 0xffffffff00000080;
  DAT_14cb8a764 = 0;
  DAT_14cb8a770 = 0;
  DAT_14cb8a778 = 0;
  atexit(FUN_143e1f5b9);
  atexit((_func_5014 *)&LAB_143e1f5e2);
  local_a8 = (char *)0x0;
  iStack_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  iStack_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  *(longlong *)(local_a8 + 0x10) = lVar6;
  *(undefined ***)local_a8 = &PTR_FUN_14b425cb0;
  local_b8 = 0;
  FUN_14156bb10(&DAT_14cb8a780,L"gbx.SerialNumbers.Dump",
                L"Read, validate, and dump serial number details",&local_a8);
  if (iStack_a0 != 0) {
    if (local_a8 == (char *)0x0) goto LAB_143e278e5;
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    iStack_a0 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143e278e5:
  atexit(FUN_143e21a5a);
  local_a8 = "missions.explicit_activation";
  iStack_a0 = 0x1c;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8a790 = (ulonglong)uVar4;
  _DAT_14cb8a798 = 0;
  uRam000000014cb8a7a0 = 0;
  _DAT_14cb8a7a8 = 0;
  DAT_14cb8a7b0 = 0;
  uRam000000014cb8a7b8 = 0;
  FUN_1446ddda2(&DAT_14cb8a798,"allactivities",0);
  atexit((_func_5014 *)&LAB_143e21e2f);
  _DAT_14cb8a7c0 = 0;
  uRam000000014cb8a7c8 = 0;
  _DAT_14cb8a7d0 = 0;
  DAT_14cb8a7d8 = 0;
  uRam000000014cb8a7e0 = 0;
  FUN_1446ddda2(&DAT_14cb8a7c0,"serial",0);
  atexit((_func_5014 *)&LAB_143e21e40);
  _DAT_14cb8a7e8 = 0;
  uRam000000014cb8a7f0 = 0;
  _DAT_14cb8a7f8 = 0;
  DAT_14cb8a800 = 0;
  uRam000000014cb8a808 = 0;
  FUN_1446ddda2(&DAT_14cb8a7e8,"missionstate",0);
  atexit((_func_5014 *)&LAB_143e21e51);
  local_a8 = "__ms";
  iStack_a0 = 4;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8a810 = (ulonglong)uVar4;
  local_a8 = "timers";
  iStack_a0 = 6;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8a818 = (ulonglong)uVar4;
  local_a8 = "missions";
  iStack_a0 = 8;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8a820 = (ulonglong)uVar4;
  _DAT_14cb8a82c = 0;
  FUN_14052b5e0(&DAT_14cb8a828,"timer",0);
  _DAT_14cb8a838 = "timer";
  local_a8 = "Running";
  iStack_a0 = 7;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8a840 = (ulonglong)uVar4;
  local_a8 = "Finished";
  iStack_a0 = 8;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8a848 = (ulonglong)uVar4;
  local_a8 = "Inactive";
  iStack_a0 = 8;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8a850 = (ulonglong)uVar4;
  local_a8 = "Active";
  iStack_a0 = 6;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8a858 = (ulonglong)uVar4;
  local_a8 = "Inactive";
  iStack_a0 = 8;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8a860 = (ulonglong)uVar4;
  local_a8 = "Remove";
  iStack_a0 = 6;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8a868 = (ulonglong)uVar4;
  local_b8 = 1;
  FUN_14632447a(&DAT_14cb8a870,L"gbx.shared_progress.enable",1,
                L"If enabled, will go through all character saves to create shared progress part of the shared save and then enable the shared save/load pathway."
               );
  atexit(FUN_143e21ea2);
  local_b8 = 1;
  FUN_14627302a(&DAT_14cb8a880,L"gbx.shared_progress.use_override",0,
                L"Integer value used for overriding shared progression use when loading/saving a character. 0 = no override, 1 = override to using, 2 = override to not using"
               );
  atexit(FUN_143e21ee7);
  DAT_14cb8a8f0 = 0;
  uRam000000014cb8a8f8 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143e26c18;
  local_a8 = &DAT_14011fc1e;
  FUN_1460f70f4(&local_a8);
  atexit((_func_5014 *)&LAB_143e22003);
  local_a8 = "Aborted";
  iStack_a0 = 7;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8a980 = (ulonglong)uVar4;
  local_a8 = "SpeedOverride";
  iStack_a0 = 0xd;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8a988 = (ulonglong)uVar4;
  local_a8 = "DurationOverride";
  iStack_a0 = 0x10;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8a990 = (ulonglong)uVar4;
  local_a8 = "LaunchAngleOverride";
  iStack_a0 = 0x13;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8a998 = (ulonglong)uVar4;
  local_a8 = "TargetActor";
  iStack_a0 = 0xb;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8a9a0 = (ulonglong)uVar4;
  local_a8 = "TargetLocation";
  iStack_a0 = 0xe;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8a9a8 = (ulonglong)uVar4;
  _DAT_14cb8a9b8 = &LAB_143e222d4;
  _DAT_14cb8a9c0 = 0x4434147b;
  DAT_14cb8a9c4 = 1;
  DAT_14cb8a9b0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8a9b0;
  atexit((_func_5014 *)&LAB_143e222d9);
  local_a8 = "PlaySucceeded";
  iStack_a0 = 0xd;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8a9d0 = (ulonglong)uVar4;
  local_a8 = "PlayFailed";
  iStack_a0 = 10;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8a9d8 = (ulonglong)uVar4;
  local_a8 = "Aborted";
  iStack_a0 = 7;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8a9e0 = (ulonglong)uVar4;
  local_a8 = "Success";
  iStack_a0 = 7;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8a9e8 = (ulonglong)uVar4;
  local_a8 = "StopLooping";
  iStack_a0 = 0xb;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8a9f0 = (ulonglong)uVar4;
  local_a8 = "TriggerLoopCondition";
  iStack_a0 = 0x14;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8a9f8 = (ulonglong)uVar4;
  local_a8 = "Aborted";
  iStack_a0 = 7;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8aa00 = (ulonglong)uVar4;
  local_a8 = "SetQueryOwner";
  iStack_a0 = 0xd;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8aa20 = (ulonglong)uVar4;
  DAT_14cb8aa58 = 0;
  _DAT_14cb8aa60 = 0;
  DAT_14cb8aa68 = 0;
  _DAT_14cb8aa70 = 0;
  local_a8 = "MyComp";
  iStack_a0 = 6;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8aaa8 = (ulonglong)uVar4;
  local_a8 = "MyActor";
  iStack_a0 = 7;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8aab0 = (ulonglong)uVar4;
  local_a8 = "OtherActor";
  iStack_a0 = 10;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8aab8 = (ulonglong)uVar4;
  local_a8 = "OtherComp";
  iStack_a0 = 9;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8aac0 = (ulonglong)uVar4;
  local_a8 = "HitNormal";
  iStack_a0 = 9;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8aac8 = (ulonglong)uVar4;
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e2803c FUN_143e2803c body=260 status=ok
// SIG undefined FUN_143e2803c(void)

ulonglong FUN_143e2803c(longlong *param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [40];
  undefined4 local_80;
  undefined1 local_78 [40];
  undefined4 local_50;
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if ((*param_1 != 0) && ((int)param_1[1] - 1U < 0xfffffffe)) {
    local_a8[0] = 0;
    local_80 = 0;
    FUN_1456bb102(local_a8);
    local_78[0] = 0;
    local_50 = 0;
    uVar3 = FUN_144873cc0(param_1);
    FUN_144750e81(local_48,uVar3,local_a8);
    uVar2 = FUN_144a7fca4(local_48);
    uVar4 = (ulonglong)uVar2;
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
    FUN_144a5ac3a(local_a8);
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e28142 FUN_143e28142 body=96 status=ok
// SIG undefined FUN_143e28142(void)

undefined8 FUN_143e28142(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  wchar_t *pwStack_58;
  code *pcStack_50;
  undefined1 *puStack_48;
  code **ppcStack_40;
  code *pcStack_38;
  code *pcStack_30;
  code *pcStack_20;
  ulonglong uStack_18;
  
  if (((((*(int *)(param_1 + 0x6c) == 0) || (uVar1 = *(uint *)(param_1 + 0x68), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(param_1 + 0x6c))))) ||
     ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) {
    return 0;
  }
  if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
    lVar3 = *plVar6;
  }
  else {
    lVar3 = 0;
  }
  lVar3 = *(longlong *)(lVar3 + 0x40);
  if (lVar3 == 0) {
    return 0;
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(uint *)(lVar3 + 8) & 0x10) == 0) && (lVar5 = *(longlong *)(lVar3 + 0x20), lVar5 != 0)) &&
     (-1 < (short)*(undefined4 *)(lVar5 + 8))) {
    uVar1 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
      if (DAT_14cae8b20 == 0) {
        ppcStack_40 = &pcStack_20;
        pcStack_20 = (code *)&LAB_14355090c;
        pcStack_30 = FUN_14081d0ea;
        pcStack_38 = FUN_14081d0ea;
        puStack_48 = &LAB_147b8e16d;
        pcStack_50 = (code *)&LAB_140810a38;
        pwStack_58 = L"Engine";
        uStack_60 = 0x800000000;
        uStack_68 = 0x10000000;
        uStack_70 = 8;
        uStack_78 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar5 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        ppcStack_40 = &pcStack_20;
        pcStack_20 = FUN_1449e2820;
        pcStack_30 = FUN_14081d0ea;
        pcStack_38 = FUN_14081d0ea;
        puStack_48 = &LAB_1468c5283;
        pcStack_50 = FUN_142809da0;
        pwStack_58 = L"Engine";
        uStack_60 = 0x400000000;
        uStack_68 = 0x10000000;
        uStack_70 = 8;
        uStack_78 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar3 = *(longlong *)(lVar3 + 0x20);
      if (lVar3 != 0) {
        iVar2 = *(int *)(lVar5 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar2) ||
             (lVar7 = lVar3,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8)
             != lVar5 + 0x30)) {
            lVar7 = 0;
          }
        } while ((lVar7 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
        if (lVar7 != 0) {
          uVar4 = *(undefined8 *)(lVar7 + 0xc0);
          goto LAB_1447211c7;
        }
      }
    }
  }
  uVar4 = 0;
LAB_1447211c7:
  if ((uStack_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 143e281a2 FUN_143e281a2 body=49 status=ok
// SIG undefined FUN_143e281a2(void)

void FUN_143e281a2(void)

{
  FUN_140b47c46(DAT_14cb8ab38,DAT_14cb8ab40);
  if (DAT_14cb8ab38 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143e281d4 FUN_143e281d4 body=479 status=ok
// SIG undefined FUN_143e281d4(void)

longlong * FUN_143e281d4(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_4 + 0x1c) != 0) {
    uVar3 = *(uint *)(param_4 + 0x18);
    uVar5 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_143e28264;
    plVar7 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if (((plVar7 != (longlong *)0x0) &&
        ((((int)plVar7[2] == *(int *)(param_4 + 0x1c) && ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)
          ) && (lVar4 = *plVar7, lVar4 != 0)))) &&
       ((*(longlong *)(lVar4 + 0x88) != 0 && (*(longlong **)(lVar4 + 0x90) != (longlong *)0x0)))) {
      uVar5 = (**(code **)(**(longlong **)(lVar4 + 0x90) + 0x10))();
      goto LAB_143e28264;
    }
  }
  uVar5 = 0;
LAB_143e28264:
  FUN_141260192(uVar5,&local_40,&DAT_14cb8c380);
  if (local_40 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    local_60 = local_40;
    local_58 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    plVar6 = (longlong *)FUN_14001cc68(0xe0,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_14b428540;
    plVar7 = plVar6 + 2;
    FUN_145a250e8(plVar7,&local_60,param_1 + 8,param_4);
    local_50 = plVar7;
    local_48 = plVar6;
    FUN_1489790d4(&local_50,plVar7);
    plVar2 = local_48;
    *param_2 = (longlong)plVar7;
    param_2[1] = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_48 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_48)(local_48);
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
    plVar7 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_58 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_58)(local_58);
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
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_38 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e283b4 FUN_143e283b4 body=179 status=ok
// SIG undefined FUN_143e283b4(void)

longlong * FUN_143e283b4(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 200) != 0) {
    plVar5 = *(longlong **)(param_1 + 0xc0);
    lVar7 = (longlong)*(int *)(param_1 + 200) << 4;
    do {
      lVar3 = *plVar5;
      if (*(longlong *)(lVar3 + 0x18) == param_3) {
        if (plVar5 != (longlong *)0x0) {
          plVar5 = (longlong *)plVar5[1];
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          uVar6 = FUN_146505d4a();
          if ((lVar3 == 0) || (cVar4 = FUN_1448093f4(lVar3,uVar6), cVar4 == '\0')) {
            *param_2 = 0;
            param_2[1] = 0;
            if (plVar5 == (longlong *)0x0) {
              return param_2;
            }
          }
          else {
            *param_2 = lVar3;
            param_2[1] = (longlong)plVar5;
            if (plVar5 == (longlong *)0x0) {
              return param_2;
            }
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 != 0) {
            return param_2;
          }
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 != 0) {
            return param_2;
          }
          (**(code **)(*plVar5 + 0x10))(plVar5);
          return param_2;
        }
        break;
      }
      plVar5 = plVar5 + 2;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  FUN_146505d4a();
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 143e28468 FUN_143e28468 body=1038 status=ok
// SIG undefined FUN_143e28468(void)

undefined8 *
FUN_143e28468(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == (longlong *)0x0) {
LAB_143e284e9:
    lVar8 = 0;
  }
  else {
    if (DAT_14cb652c0 == 0) {
      local_60 = &local_40;
      local_40 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_1427b09ee;
      local_68 = &LAB_148715fe1;
      local_70 = FUN_146508b0f;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
    }
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,DAT_14cb652c0);
    if (plVar4 == (longlong *)0x0) goto LAB_143e284e9;
    if (DAT_14cb652c0 == 0) {
      local_60 = &local_40;
      local_40 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_1427b09ee;
      local_68 = &LAB_148715fe1;
      local_70 = FUN_146508b0f;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
    }
    plVar5 = (longlong *)FUN_144718840(plVar4,DAT_14cb652c0);
    if (plVar5 == (longlong *)0x0 || plVar4 == plVar5) goto LAB_143e284e9;
    lVar9 = (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar8 = param_3[1];
    if (lVar8 == 0) {
      uVar6 = FUN_140feeb70();
      lVar8 = FUN_14477b664(uVar6);
      param_3[1] = lVar8;
    }
    lVar7 = param_3[2];
    if (((lVar7 == 0) && (lVar7 = 0, lVar8 != 0)) && (*param_3 != 0)) {
      plVar4 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar3 == '\0')) {
        lVar7 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar7 = FUN_144aff482(uVar6,param_3);
      }
      param_3[2] = lVar7;
    }
    if (((*(byte *)(lVar9 + 0x20c) & 1) != 0) || ((longlong)*(int *)(lVar9 + 0x40) == 0))
    goto LAB_143e284e9;
    lVar8 = 0;
    lVar10 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar9 + 0x38) + lVar10);
      if (((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) &&
         (*(longlong *)(lVar2 + 0xa8) == lVar7)) {
        lVar8 = 0;
        if ((*(byte *)(lVar2 + 0x248) & 2) != 0) {
          lVar8 = lVar2;
        }
        break;
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)*(int *)(lVar9 + 0x40) * 8 != lVar10);
  }
  lVar9 = param_4[1];
  if (lVar9 == 0) {
    uVar6 = FUN_145cdcf34();
    lVar9 = FUN_14477b664(uVar6);
    param_4[1] = lVar9;
  }
  lVar7 = param_4[2];
  if (lVar7 == 0) {
    if ((lVar9 != 0) && (*param_4 != 0)) {
      plVar4 = *(longlong **)(lVar9 + 0xb8);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar3 == '\0')) {
        lVar7 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar7 = FUN_144aff482(uVar6,param_4);
      }
      param_4[2] = lVar7;
      goto LAB_143e28556;
    }
  }
  else {
LAB_143e28556:
    if ((lVar8 != 0) && (lVar7 != 0)) {
      FUN_143e283b4(lVar8,&local_40);
      if (local_40 != (code *)0x0) {
        FUN_14896f46c(local_40,param_1,&stack0x00000028);
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_38 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
        goto LAB_143e285bb;
      }
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_38 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
  }
  *param_1 = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
LAB_143e285bb:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143e28877 FUN_143e28877 body=41 status=ok
// SIG undefined FUN_143e28877(void)

void FUN_143e28877(void)

{
  DAT_14cb8ac50 = 0;
  if (DAT_14cb8ac48 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6783e();
  return;
}



// FUNCTION 143e288de FUN_143e288de body=75 status=ok
// SIG undefined FUN_143e288de(void)

void FUN_143e288de(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  
  *(undefined1 *)(param_1 + 0x80) = 0;
  iVar1 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar4 = 0;
    do {
      bVar3 = (**(code **)(**(longlong **)(lVar2 + 0x10 + lVar4) + 8))();
      *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) | bVar3;
      lVar4 = lVar4 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar4);
  }
  return;
}



// FUNCTION 143e2892a FUN_143e2892a body=593 status=ok
// SIG undefined FUN_143e2892a(void)

void FUN_143e2892a(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((*(longlong *)(param_1 + 0x60) != 0) && (*(int *)(param_1 + 0x5c) != 0)) &&
      (uVar3 = *(uint *)(param_1 + 0x58), -1 < (int)uVar3)) &&
     ((((int)uVar3 < DAT_14c9647dc &&
       (lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar10 != 0)) &&
      ((*(int *)(lVar10 + 0x10) == *(int *)(param_1 + 0x5c) &&
       (((*(uint *)(lVar10 + 8) & 0x10200000) == 0 &&
        (iVar4 = *(int *)(param_1 + 0x70), (longlong)iVar4 != 0)))))))) {
    lVar6 = *(longlong *)(param_1 + 0x68);
    lVar10 = lVar6 + 0x10;
    lVar13 = 0;
    do {
      if (*(longlong *)(lVar10 + lVar13) != 0) {
        if ((*(byte *)(param_1 + 0x30) & 2) == 0) {
          if (*(char *)(*(longlong *)(lVar10 + lVar13) + 0x375) != '\0') {
            uVar8 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))();
            local_88 = 0;
            uStack_80 = 0;
            uStack_6c = CONCAT31(uStack_6c._1_3_,0xff);
            uStack_70 = 0;
            local_78 = 0;
            FUN_14493679e(uVar8,&local_88,*(undefined8 *)(lVar10 + lVar13),1);
            puVar1 = (undefined8 *)(lVar6 + 0x28 + lVar13);
            *puVar1 = local_78;
            puVar1[1] = CONCAT44(uStack_6c,uStack_70);
            puVar2 = (undefined4 *)(lVar6 + 0x18 + lVar13);
            *puVar2 = (uint)local_88;
            puVar2[1] = local_88._4_4_;
            puVar2[2] = (undefined4)uStack_80;
            puVar2[3] = uStack_80._4_4_;
          }
        }
        else {
          uVar8 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))();
          puVar1 = (undefined8 *)(lVar10 + lVar13);
          puVar11 = (uint *)(puVar1 + 1);
          local_88 = 0;
          uStack_80 = 0;
          uStack_6c = CONCAT31(uStack_6c._1_3_,0xff);
          uStack_70 = 0;
          local_78 = 0;
          FUN_14493679e(uVar8,&local_88,*puVar1,0);
          *(undefined4 *)(puVar1 + 3) = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar1 + 0x1c) = local_78._4_4_;
          *(undefined4 *)(puVar1 + 4) = uStack_70;
          *(undefined4 *)((longlong)puVar1 + 0x24) = uStack_6c;
          *puVar11 = (uint)local_88;
          *(undefined4 *)((longlong)puVar1 + 0xc) = local_88._4_4_;
          *(undefined4 *)(puVar1 + 2) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_80._4_4_;
          plVar9 = (longlong *)puVar1[2];
          if (((((plVar9 != (longlong *)0x0) &&
                (iVar5 = *(int *)(lVar6 + 0x1c + lVar13), iVar5 != 0)) &&
               (uVar3 = *puVar11, -1 < (int)uVar3)) &&
              (((int)uVar3 < DAT_14c9647dc &&
               (lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar12 != 0)
               ))) && ((*(int *)(lVar12 + 0x10) == iVar5 &&
                       ((*(uint *)(lVar12 + 8) & 0x10200000) == 0)))) {
            if (*(code **)(*plVar9 + 0x10) == (code *)&LAB_1447a1f2e) {
              plVar9 = plVar9 + 0xd9;
            }
            else {
              plVar9 = (longlong *)(**(code **)(*plVar9 + 0x10))();
            }
            cVar7 = FUN_14486eb0e(plVar9,lVar6 + 0x18 + lVar13);
            if (cVar7 != '\0') goto LAB_143e28b60;
          }
          uVar8 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))();
          FUN_14036c7e6(uVar8,&local_88,*(undefined8 *)(lVar10 + lVar13));
          puVar1[3] = local_78;
          puVar1[4] = CONCAT44(uStack_6c,uStack_70);
          *puVar11 = (uint)local_88;
          *(undefined4 *)((longlong)puVar1 + 0xc) = local_88._4_4_;
          *(undefined4 *)(puVar1 + 2) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_80._4_4_;
          *(undefined1 *)(lVar6 + 0x88 + lVar13) = 1;
        }
      }
LAB_143e28b60:
      lVar13 = lVar13 + 0x90;
    } while ((longlong)iVar4 * 0x90 != lVar13);
  }
  FUN_1412d7b64(param_1);
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e28b7c FUN_143e28b7c body=416 status=ok
// SIG undefined FUN_143e28b7c(void)

longlong * FUN_143e28b7c(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = (longlong *)FUN_14001cc68(0x88,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b428c00;
  plVar5[7] = 0;
  plVar5[8] = 0;
  plVar5[0xb] = 0;
  plVar5[0xc] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  *(undefined4 *)((longlong)plVar5 + 0x44) = 0xffffffff;
  plVar5[9] = 0;
  plVar5[10] = 0;
  *(undefined4 *)(plVar5 + 0xb) = 2;
  *(undefined1 *)(plVar5 + 0xc) = 0;
  plVar5[2] = (longlong)&PTR_FUN_14b24d4d0;
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  plVar5[0xf] = 0;
  plVar5[0x10] = 0;
  if ((*(longlong *)(*(longlong *)(param_3 + 8) + 0x88) != 0) &&
     (plVar6 = *(longlong **)(*(longlong *)(param_3 + 8) + 0x90), plVar6 != (longlong *)0x0)) {
    plVar6 = (longlong *)(**(code **)(*plVar6 + 8))();
    if (plVar6 != (longlong *)0x0) {
      uVar7 = FUN_1403c7982();
      lVar8 = (**(code **)(*plVar6 + 0x288))(plVar6,uVar7);
      if (lVar8 != 0) {
        uVar7 = FUN_1403c7982();
        lVar9 = FUN_144718840(lVar8,uVar7);
        if (lVar8 != lVar9) goto LAB_143e28c6c;
      }
    }
  }
  lVar9 = 0;
LAB_143e28c6c:
  FUN_140c4b9d0(&local_50,lVar9);
  *(undefined4 *)(plVar5 + 0xd) = local_50;
  *(undefined4 *)((longlong)plVar5 + 0x6c) = uStack_4c;
  *(undefined4 *)(plVar5 + 0xe) = uStack_48;
  *(undefined4 *)((longlong)plVar5 + 0x74) = uStack_44;
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    lVar9 = (longlong)*(int *)(param_1 + 0x58) << 6;
    lVar8 = *(longlong *)(param_1 + 0x50) + 0x28;
    do {
      puVar10 = (undefined4 *)FUN_148970bc8(plVar5 + 0xf);
      uVar2 = *(undefined4 *)(lVar8 + -0xc);
      uVar3 = *(undefined4 *)(lVar8 + -8);
      uVar4 = *(undefined4 *)(lVar8 + -4);
      *puVar10 = *(undefined4 *)(lVar8 + -0x10);
      puVar10[1] = uVar2;
      puVar10[2] = uVar3;
      puVar10[3] = uVar4;
      uVar7 = FUN_14011c2be(lVar8);
      *(undefined8 *)(puVar10 + 4) = uVar7;
      lVar8 = lVar8 + 0x40;
      lVar9 = lVar9 + -0x40;
    } while (lVar9 != 0);
  }
  *param_2 = (longlong)(plVar5 + 2);
  param_2[1] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e28d1e FUN_143e28d1e body=918 status=ok
// SIG undefined FUN_143e28d1e(void)

void FUN_143e28d1e(longlong *param_1,char *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  bool bVar21;
  
  if ((*(int *)(param_2 + 0x10) != 0) && (*(int *)(param_2 + 0x14) != 0)) {
    if ((longlong)(int)param_1[0x14] != 0) {
      puVar8 = (uint *)param_1[0x13];
      lVar17 = (longlong)(int)param_1[0x14] * 0x48;
      do {
        cVar4 = FUN_14069eaf4(puVar8);
        if (cVar4 != '\0') {
          if (puVar8 != (uint *)0x0) goto LAB_143e28d99;
          break;
        }
        puVar8 = puVar8 + 0x12;
        lVar17 = lVar17 + -0x48;
      } while (lVar17 != 0);
    }
    if (*param_2 == '\0') {
      puVar8 = (uint *)FUN_148971272(param_1 + 0x13);
      if (*(longlong *)(param_2 + 8) == 0) {
        *puVar8 = 0;
        uVar7 = 0;
      }
      else {
        uVar7 = *(uint *)(*(longlong *)(param_2 + 8) + 0xc);
        *puVar8 = uVar7;
        if ((int)uVar7 < DAT_14c9647dc) {
          lVar17 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
        }
        else {
          lVar17 = 0;
        }
        uVar7 = *(uint *)(lVar17 + 0x10);
        if (*(uint *)(lVar17 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          uVar16 = DAT_14c964868 + 1;
          bVar21 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar21) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar16);
          }
          LOCK();
          uVar7 = *(uint *)(lVar17 + 0x10);
          bVar21 = uVar7 == 0;
          if (bVar21) {
            *(uint *)(lVar17 + 0x10) = uVar16;
            uVar7 = 0;
          }
          UNLOCK();
          if (bVar21) {
            uVar7 = uVar16;
          }
        }
      }
      puVar8[1] = uVar7;
      lVar17 = (longlong)(int)param_1[0xf] + 1;
      uVar7 = puVar8[0xe];
      uVar16 = (uint)lVar17;
      puVar8[0xe] = uVar16 + uVar7;
      if (puVar8[0xf] - uVar7 < uVar16) {
        FUN_14681508e(puVar8 + 2);
      }
      puVar9 = puVar8 + 2;
      if (*(uint **)(puVar8 + 0xc) != (uint *)0x0) {
        puVar9 = *(uint **)(puVar8 + 0xc);
      }
      memset(puVar9 + (int)uVar7,0,lVar17 * 4);
      if (puVar8 != (uint *)0x0) {
LAB_143e28d99:
        if (-1 < (int)param_1[0xf]) {
          bVar21 = false;
          uVar20 = 0;
LAB_143e28dad:
          do {
            uVar7 = 1 << ((byte)uVar20 & 0x1f);
            if ((0 < (int)(*(uint *)(param_2 + 0x10) & uVar7)) &&
               ((longlong)uVar20 < (longlong)(int)puVar8[0xe])) {
              puVar9 = *(uint **)(puVar8 + 0xc);
              if (*(uint **)(puVar8 + 0xc) == (uint *)0x0) {
                puVar9 = puVar8 + 2;
              }
              if (*param_2 == '\x01') {
                puVar9[uVar20] = puVar9[uVar20] & ~*(uint *)(param_2 + 0x14);
                puVar9 = *(uint **)(puVar8 + 0xc);
                if (*(uint **)(puVar8 + 0xc) == (uint *)0x0) {
                  puVar9 = puVar8 + 2;
                }
                if (puVar9[uVar20] == 0) {
                  puVar8[0x10] = puVar8[0x10] & ~uVar7;
                  (**(code **)(*param_1 + 0x70))
                            (param_1,*(undefined8 *)(param_2 + 8),uVar20 & 0xffffffff,*param_2);
                  if (puVar8[0x10] == 0) {
                    puVar8[0] = 0;
                    puVar8[1] = 0;
                    bVar21 = true;
                    bVar2 = (longlong)(int)param_1[0xf] <= (longlong)uVar20;
                    uVar20 = uVar20 + 1;
                    if (bVar2) goto LAB_143e28ea3;
                    goto LAB_143e28dad;
                  }
                }
              }
              else if ((*param_2 == '\0') &&
                      (uVar16 = puVar9[uVar20], puVar9[uVar20] = *(uint *)(param_2 + 0x14) | uVar16,
                      uVar16 == 0)) {
                puVar8[0x10] = puVar8[0x10] | uVar7;
                (**(code **)(*param_1 + 0x70))
                          (param_1,*(undefined8 *)(param_2 + 8),uVar20 & 0xffffffff,*param_2);
              }
            }
            bVar2 = (longlong)uVar20 < (longlong)(int)param_1[0xf];
            uVar20 = uVar20 + 1;
          } while (bVar2);
          if (bVar21) {
LAB_143e28ea3:
            iVar3 = (int)param_1[0x14];
            lVar17 = (longlong)iVar3;
            if (lVar17 != 0) {
              lVar1 = param_1[0x13];
              iVar12 = 0;
              bVar5 = FUN_14079e1ea(lVar1,0);
              iVar13 = 0;
              do {
                lVar10 = (longlong)iVar13;
                iVar18 = iVar13 + 1;
                if (iVar13 + 1 < iVar3) {
                  iVar18 = iVar3;
                }
                lVar19 = lVar1 + 0x48 + lVar10 * 0x48;
                iVar14 = iVar13;
                lVar11 = lVar10;
                do {
                  lVar11 = lVar11 + 1;
                  iVar15 = iVar18;
                  if (lVar17 <= lVar11) break;
                  bVar6 = FUN_14079e1ea(lVar19,0);
                  iVar14 = iVar14 + 1;
                  lVar19 = lVar19 + 0x48;
                  iVar15 = iVar14;
                } while ((bVar5 & 1) == bVar6);
                iVar18 = iVar15 - iVar13;
                if ((bVar5 & 1) == 0) {
                  if (iVar12 != iVar13) {
                    memmove((void *)(lVar1 + (longlong)iVar12 * 0x48),
                            (void *)(lVar1 + lVar10 * 0x48),(longlong)iVar18 * 0x48);
                  }
                  iVar12 = iVar12 + iVar18;
                }
                else {
                  FUN_145c3a5a7(lVar1 + lVar10 * 0x48,iVar18);
                }
                iVar13 = iVar15;
                bVar5 = bVar5 ^ 1;
              } while (lVar11 < lVar17);
              *(int *)(param_1 + 0x14) = iVar12;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143e290de FUN_143e290de body=624 status=ok
// SIG undefined FUN_143e290de(void)

undefined8 * FUN_143e290de(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined4 local_68;
  undefined1 local_60 [16];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar8 = param_3[1];
  plVar4 = (longlong *)param_3[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar7 = (**(code **)(*(longlong *)*param_3 + 0x18))();
  cVar5 = FUN_145a26a06(param_1,uVar7);
  local_48 = (longlong *)FUN_14001cc68(0x58,0x10);
  local_50 = local_48 + 2;
  local_48[1] = (longlong)&DAT_100000001;
  *local_48 = (longlong)&PTR_FUN_14b4292e0;
  local_48[3] = 0;
  local_48[4] = 0;
  *(undefined8 *)((longlong)local_48 + 0x24) = 0;
  *(undefined8 *)((longlong)local_48 + 0x2c) = 0;
  *(char *)(local_48 + 7) = cVar5 * '\x02';
  local_48[2] = (longlong)&PTR_FUN_14b429300;
  local_48[8] = lVar8;
  local_48[9] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_48[10] = 0;
  FUN_14897eca8();
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
  lVar8 = (**(code **)(*(longlong *)*param_3 + 0x18))();
  plVar4 = local_50;
  if (lVar8 == 0) {
    *(undefined4 *)(local_50 + 8) = 0;
    iVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar8 + 0xc);
    *(uint *)(local_50 + 8) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar6 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar6 = *(int *)(lVar8 + 0x10);
      bVar11 = iVar6 == 0;
      if (bVar11) {
        *(int *)(lVar8 + 0x10) = iVar10;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar6 = iVar10;
      }
    }
  }
  *(int *)((longlong)plVar4 + 0x44) = iVar6;
  uVar7 = (**(code **)(*(longlong *)*param_3 + 0x18))();
  local_70 = FUN_145a269e6;
  local_68 = 0;
  FUN_14655e8ae(local_60,&local_50);
  local_88 = *(undefined8 *)(param_1 + 0x10);
  uVar9 = FUN_14477b664(*(undefined8 *)(param_1 + 0x18));
  local_80 = FUN_14477b664(uVar9);
  local_78 = *(undefined8 *)(param_1 + 0x20);
  FUN_145c0a712(uVar7,&local_70,&local_88,local_60);
  plVar4 = local_48;
  *param_2 = local_50;
  param_2[1] = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
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
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143e29350 FUN_143e29350 body=863 status=ok
// SIG undefined FUN_143e29350(void)

undefined8 * FUN_143e29350(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  code ****ppppcVar13;
  bool bVar14;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  undefined4 local_70 [2];
  code ***local_68;
  undefined4 local_60;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar9 = (**(code **)(*(longlong *)*param_3 + 8))();
  local_98 = (longlong *)((ulonglong)local_98 & 0xffffffffffffff00);
  local_70[0] = 0;
  FUN_1456bb102(&local_98,uVar9);
  FUN_1448729ea(param_1 + 0x30,&local_68,&local_98);
  uVar7 = FUN_1405d5f74(&local_68);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppcVar13 = &local_68;
    if (0x18 < local_50) {
      ppppcVar13 = (code ****)local_68;
    }
    (*pcVar4)(ppppcVar13);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68);
  }
  FUN_1448173f8(local_70);
  if (((char)local_98 == '\x03') && (local_88 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_88 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  lVar10 = param_3[1];
  plVar5 = (longlong *)param_3[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  uVar9 = (**(code **)(*(longlong *)*param_3 + 0x18))();
  cVar6 = FUN_14655e9da(param_1,uVar9,uVar7);
  local_90 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_98 = local_90 + 2;
  local_90[1] = (longlong)&DAT_100000001;
  *local_90 = (longlong)&PTR_FUN_14b429400;
  local_90[3] = 0;
  local_90[4] = 0;
  *(undefined8 *)((longlong)local_90 + 0x24) = 0;
  *(undefined8 *)((longlong)local_90 + 0x2c) = 0;
  *(char *)(local_90 + 7) = cVar6 * '\x02';
  local_90[2] = (longlong)&PTR_FUN_14b429420;
  local_90[8] = lVar10;
  local_90[9] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_90[10] = 0;
  *(undefined4 *)(local_90 + 0xb) = uVar7;
  FUN_14897efa2();
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
  lVar10 = (**(code **)(*(longlong *)*param_3 + 0x18))();
  plVar5 = local_98;
  if (lVar10 == 0) {
    *(undefined4 *)(local_98 + 8) = 0;
    iVar8 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar10 + 0xc);
    *(uint *)(local_98 + 8) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar8 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar8 = *(int *)(lVar10 + 0x10);
      bVar14 = iVar8 == 0;
      if (bVar14) {
        *(int *)(lVar10 + 0x10) = iVar12;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar8 = iVar12;
      }
    }
  }
  *(int *)((longlong)plVar5 + 0x44) = iVar8;
  uVar9 = (**(code **)(*(longlong *)*param_3 + 0x18))();
  local_68 = (code ***)FUN_148972fe8;
  local_60 = 0;
  FUN_14655ea96(local_a8,&local_98);
  local_c0 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = FUN_14477b664(*(undefined8 *)(param_1 + 0x18));
  local_b8 = FUN_14477b664(uVar11);
  local_b0 = *(undefined8 *)(param_1 + 0x20);
  FUN_145c0a712(uVar9,&local_68,&local_c0,local_a8);
  plVar5 = local_90;
  *param_2 = local_98;
  param_2[1] = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_90)(local_90);
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
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143e296b0 FUN_143e296b0 body=2014 status=ok
// SIG undefined FUN_143e296b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_143e296b0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  float fVar13;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = (longlong *)(**(code **)(*(longlong *)*param_3 + 8))();
  if (plVar3 == (longlong *)0x0) {
LAB_143e298d1:
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
  }
  uVar4 = FUN_1403c7982();
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
  if (plVar3 == (longlong *)0x0) goto LAB_143e298d1;
  uVar4 = FUN_1403c7982();
  plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
  if ((plVar3 == plVar5 || plVar5 == (longlong *)0x0) ||
     (lVar6 = (**(code **)(*param_1 + 0x20))(param_1,param_3), lVar6 == 0)) goto LAB_143e298d1;
  uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5);
  local_78 = 0;
  uStack_70 = (longlong *)0x0;
  uStack_5c = CONCAT31(uStack_5c._1_3_,0xff);
  uStack_60 = 0;
  local_68 = 0;
  FUN_14493679e(uVar4,&local_78,lVar6,0);
  if ((((uStack_70 == (longlong *)0x0) || (local_78._4_4_ == 0)) || ((int)(uint)local_78 < 0)) ||
     (((DAT_14c9647dc <= (int)(uint)local_78 ||
       (lVar10 = (ulonglong)(((uint)local_78 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_78 >> 0x10) * 8), lVar10 == 0
       )) || ((*(int *)(lVar10 + 0x10) != local_78._4_4_ ||
              ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)))))) {
LAB_143e298f8:
    if ((char)param_1[2] == '\0') {
      local_58 = (longlong *)(**(code **)(*(longlong *)*param_3 + 0x10))();
      plVar7 = (longlong *)FUN_14897f2d9();
      plVar3 = plVar7 + 2;
      local_88 = plVar3;
      local_80 = plVar7;
      FUN_14897fc04(&local_88,plVar3);
      FUN_140c4b9d0(&local_58,plVar5);
      *(undefined4 *)(plVar7 + 0xb) = (undefined4)local_58;
      *(undefined4 *)((longlong)plVar7 + 0x5c) = local_58._4_4_;
      *(undefined4 *)(plVar7 + 0xc) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)plVar7 + 100) = uStack_50._4_4_;
      puVar11 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar6 + 8) != (undefined4 *)0x0) {
        puVar11 = *(undefined4 **)(lVar6 + 8);
      }
      if (DAT_14c947fe0 == 0) {
        lVar6 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar6);
        DAT_14c947fe0 = lVar6;
      }
      FUN_140045924(DAT_14c947fe0,&local_58,puVar11,1);
      if ((longlong *)plVar7[0xd] != local_58) {
        plVar7[0xf] = 0;
      }
      plVar7[0xd] = (longlong)local_58;
      *(undefined1 *)(plVar7 + 0x15) = *(undefined1 *)((longlong)param_1 + 0x11);
    }
    else {
      uVar4 = (**(code **)(*(longlong *)*param_3 + 0x10))();
      plVar7 = (longlong *)FUN_14001cc68(0xb0,0x10);
      plVar7[1] = (longlong)&DAT_100000001;
      *plVar7 = (longlong)&PTR_FUN_14b4295e0;
      plVar3 = plVar7 + 2;
      FUN_14898644e(plVar3,uVar4);
      plVar7[0xb] = 0;
      plVar7[0xc] = 0;
      plVar7[0xd] = 0;
      *(undefined4 *)(plVar7 + 0xe) = 10;
      plVar7[0xf] = 0;
      *(undefined2 *)(plVar7 + 0x10) = 0;
      plVar7[0x11] = 0;
      plVar7[0x12] = 0;
      *(undefined8 *)((longlong)plVar7 + 0x94) = 0;
      *(undefined8 *)((longlong)plVar7 + 0x9c) = 0;
      *(undefined1 *)((longlong)plVar7 + 0xa4) = 0xff;
      plVar7[2] = (longlong)&PTR_FUN_14b429600;
      *(undefined4 *)(plVar7 + 0x15) = 0;
      *(undefined1 *)((longlong)plVar7 + 0xac) = 0;
      local_88 = plVar3;
      local_80 = plVar7;
      FUN_14897fe6a(&local_88,plVar3);
      FUN_140c4b9d0(&local_58,plVar5);
      *(undefined4 *)(plVar7 + 0xb) = (undefined4)local_58;
      *(undefined4 *)((longlong)plVar7 + 0x5c) = local_58._4_4_;
      *(undefined4 *)(plVar7 + 0xc) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)plVar7 + 100) = uStack_50._4_4_;
      puVar11 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar6 + 8) != (undefined4 *)0x0) {
        puVar11 = *(undefined4 **)(lVar6 + 8);
      }
      if (DAT_14c947fe0 == 0) {
        lVar6 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar6);
        DAT_14c947fe0 = lVar6;
      }
      FUN_140045924(DAT_14c947fe0,&local_58,puVar11,1);
      if ((longlong *)plVar7[0xd] != local_58) {
        plVar7[0xf] = 0;
      }
      plVar7[0xd] = (longlong)local_58;
      lVar6 = param_1[3];
      fVar13 = *(float *)((longlong)param_1 + 0x14);
      if ((char)lVar6 != '\0') {
        fVar13 = fVar13 / 100.0;
      }
      *(float *)(plVar7 + 0x15) = fVar13;
      *(char *)((longlong)plVar7 + 0xac) = (char)lVar6;
    }
    *(char *)((longlong)plVar7 + 0x81) = (char)param_1[2];
    *param_2 = (longlong)plVar3;
    param_2[1] = (longlong)plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_143e29c87;
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    plVar3 = local_80;
    if (local_80 == (longlong *)0x0) goto LAB_143e29c87;
  }
  else {
    if (*(code **)(*uStack_70 + 0x10) == (code *)&LAB_1447a1f2e) {
      plVar3 = uStack_70 + 0xd9;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*uStack_70 + 0x10))();
    }
    cVar2 = FUN_14486eb0e(plVar3,&local_78);
    if (cVar2 == '\0') goto LAB_143e298f8;
    if ((uStack_70 == (longlong *)0x0) || (local_78._4_4_ == 0)) {
LAB_143e299a8:
      cVar2 = '\0';
    }
    else {
      cVar2 = '\0';
      if ((-1 < (int)(uint)local_78) && ((int)(uint)local_78 < DAT_14c9647dc)) {
        lVar6 = (ulonglong)(((uint)local_78 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_78 >> 0x10) * 8);
        if (((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == local_78._4_4_)) &&
           ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
          if (*(code **)(*uStack_70 + 0x10) == (code *)&LAB_1447a1f2e) {
            plVar3 = uStack_70 + 0xd9;
          }
          else {
            plVar3 = (longlong *)(**(code **)(*uStack_70 + 0x10))();
          }
          cVar2 = FUN_14486eb0e(plVar3,&local_78);
          if (cVar2 != '\0') {
            cVar2 = FUN_140b0b25e(param_1,&local_78);
            goto LAB_143e299aa;
          }
        }
        goto LAB_143e299a8;
      }
    }
LAB_143e299aa:
    if ((char)param_1[2] == '\0') {
      lVar6 = param_3[1];
      plVar5 = (longlong *)param_3[2];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      plVar8 = (longlong *)FUN_14001cc68(0xa0,0x10);
      plVar7 = plVar8 + 2;
      plVar8[1] = (longlong)&DAT_100000001;
      *plVar8 = (longlong)&PTR_FUN_14b429630;
      plVar8[3] = 0;
      plVar8[4] = 0;
      *(undefined8 *)((longlong)plVar8 + 0x24) = 0;
      *(undefined8 *)((longlong)plVar8 + 0x2c) = 0;
      *(byte *)(plVar8 + 7) = *(byte *)(plVar8 + 7) & 0xf0 | cVar2 * '\x02';
      plVar8[2] = (longlong)&PTR_FUN_14b429680;
      plVar8[8] = lVar6;
      plVar8[9] = (longlong)plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      plVar8[10] = 0;
      plVar8[0xb] = 0;
      plVar8[0xc] = 0;
      *(undefined4 *)(plVar8 + 0xd) = 10;
      plVar8[0xe] = 0;
      *(undefined2 *)(plVar8 + 0xf) = 0;
      *(uint *)(plVar8 + 0x10) = (uint)local_78;
      *(int *)((longlong)plVar8 + 0x84) = local_78._4_4_;
      *(undefined4 *)(plVar8 + 0x11) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)plVar8 + 0x8c) = uStack_70._4_4_;
      *(undefined4 *)(plVar8 + 0x12) = (undefined4)local_68;
      *(undefined4 *)((longlong)plVar8 + 0x94) = local_68._4_4_;
      *(undefined4 *)(plVar8 + 0x13) = uStack_60;
      *(undefined4 *)((longlong)plVar8 + 0x9c) = uStack_5c;
      plVar8[2] = (longlong)&PTR_FUN_14b429650;
      plVar3 = plVar8;
      if ((plVar7 == (longlong *)0x0) ||
         (((plVar8[3] != 0 && (plVar8[4] != 0)) && (0 < *(int *)(plVar8[4] + 8))))) {
        if (plVar8 == (longlong *)0x0) goto LAB_143e29ad6;
      }
      else {
        if (plVar8 == (longlong *)0x0) {
          _DAT_00000018 = 0x10;
          plVar12 = (longlong *)&DAT_00000020;
          plVar9 = _DAT_00000020;
          if (_DAT_00000020 != (longlong *)0x0) {
LAB_143e29e06:
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))();
            }
            *plVar12 = (longlong)plVar8;
            if (plVar8 != (longlong *)0x0) goto LAB_143e29aab;
          }
          goto LAB_143e29ad6;
        }
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        plVar8[3] = (longlong)plVar7;
        if ((longlong *)plVar8[4] != plVar8) {
          LOCK();
          *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
          UNLOCK();
          if ((longlong *)plVar8[4] != (longlong *)0x0) {
            plVar12 = plVar8 + 4;
            plVar9 = (longlong *)plVar8[4];
            goto LAB_143e29e06;
          }
          plVar8[4] = (longlong)plVar8;
        }
LAB_143e29aab:
        LOCK();
        plVar12 = plVar8 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
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
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar12 = plVar8 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          lVar6 = *plVar8;
LAB_143e29ad3:
          (**(code **)(lVar6 + 0x10))(plVar8);
        }
      }
    }
    else {
      lVar6 = param_3[1];
      plVar5 = (longlong *)param_3[2];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      plVar3 = (longlong *)FUN_14001cc68(0xa0,0x10);
      plVar7 = plVar3 + 2;
      plVar3[1] = (longlong)&DAT_100000001;
      *plVar3 = (longlong)&PTR_FUN_14b429710;
      plVar3[3] = 0;
      plVar3[4] = 0;
      *(undefined8 *)((longlong)plVar3 + 0x24) = 0;
      *(undefined8 *)((longlong)plVar3 + 0x2c) = 0;
      *(byte *)(plVar3 + 7) = *(byte *)(plVar3 + 7) & 0xf0 | cVar2 * '\x02';
      plVar3[2] = (longlong)&PTR_FUN_14b429680;
      plVar3[8] = lVar6;
      plVar3[9] = (longlong)plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      plVar3[10] = 0;
      plVar3[0xb] = 0;
      plVar3[0xc] = 0;
      *(undefined4 *)(plVar3 + 0xd) = 10;
      plVar3[0xe] = 0;
      *(undefined2 *)(plVar3 + 0xf) = 0;
      *(uint *)(plVar3 + 0x10) = (uint)local_78;
      *(int *)((longlong)plVar3 + 0x84) = local_78._4_4_;
      *(undefined4 *)(plVar3 + 0x11) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)plVar3 + 0x8c) = uStack_70._4_4_;
      *(undefined4 *)(plVar3 + 0x12) = (undefined4)local_68;
      *(undefined4 *)((longlong)plVar3 + 0x94) = local_68._4_4_;
      *(undefined4 *)(plVar3 + 0x13) = uStack_60;
      *(undefined4 *)((longlong)plVar3 + 0x9c) = uStack_5c;
      plVar3[2] = (longlong)&PTR_FUN_14b429730;
      local_58 = plVar7;
      uStack_50 = plVar3;
      FUN_1489804ee(&local_58,plVar7);
      plVar8 = uStack_50;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        if (uStack_50 != (longlong *)0x0) {
          LOCK();
          plVar12 = uStack_50 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*uStack_50)(uStack_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              lVar6 = *plVar8;
              goto LAB_143e29ad3;
            }
          }
        }
      }
    }
LAB_143e29ad6:
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar5 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    *param_2 = (longlong)plVar7;
    param_2[1] = (longlong)plVar3;
    if (plVar3 == (longlong *)0x0) goto LAB_143e29c87;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  LOCK();
  plVar5 = plVar3 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_143e29c87:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e29e90 FUN_143e29e90 body=1132 status=ok
// SIG undefined FUN_143e29e90(void)

longlong * FUN_143e29e90(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  byte bVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_98 [32];
  code *local_78;
  undefined4 local_70;
  undefined8 *local_68;
  int local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = (**(code **)(*(longlong *)*param_3 + 0x20))();
  if (lVar7 == 0) goto LAB_143e2a049;
  lVar9 = *(longlong *)(param_1 + 0x18);
  if (lVar9 == 0) {
    uVar8 = FUN_140feeb70();
    lVar9 = FUN_14477b664(uVar8);
    *(longlong *)(param_1 + 0x18) = lVar9;
  }
  lVar10 = *(longlong *)(param_1 + 0x20);
  if (lVar10 == 0) {
    if ((lVar9 == 0) || (*(longlong *)(param_1 + 0x10) == 0)) goto LAB_143e2a049;
    plVar12 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar12 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar5 == '\0')) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      goto LAB_143e2a049;
    }
    uVar8 = (**(code **)(*plVar12 + 0x110))(plVar12);
    lVar10 = FUN_144aff482(uVar8);
    *(longlong *)(param_1 + 0x20) = lVar10;
    if (lVar10 == 0) goto LAB_143e2a049;
  }
  lVar9 = (**(code **)(*(longlong *)*param_3 + 0x18))();
  if (*(longlong *)(lVar9 + 0xa8) == lVar10) goto LAB_143e2a049;
  if (((*(byte *)(lVar7 + 0x20c) & 1) == 0) && ((longlong)*(int *)(lVar7 + 0x40) != 0)) {
    lVar9 = 0;
    lVar13 = 0;
    do {
      lVar11 = *(longlong *)(*(longlong *)(lVar7 + 0x38) + lVar13);
      if (((lVar11 != 0) && ((*(uint *)(lVar11 + 8) >> 0x1e & 1) == 0)) &&
         (*(longlong *)(lVar11 + 0xa8) == lVar10)) {
        lVar9 = 0;
        if ((*(byte *)(lVar11 + 0x248) & 2) != 0) {
          lVar9 = lVar11;
        }
        break;
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)*(int *)(lVar7 + 0x40) * 8 != lVar13);
  }
  else {
    lVar9 = 0;
  }
  lVar13 = *(longlong *)(param_1 + 0x30);
  if (lVar13 == 0) {
    uVar8 = FUN_14110242a();
    lVar13 = FUN_14477b664(uVar8);
    *(longlong *)(param_1 + 0x30) = lVar13;
  }
  lVar11 = *(longlong *)(param_1 + 0x38);
  if (lVar11 == 0) {
    if ((lVar13 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
LAB_143e2a049:
      *param_2 = 0;
      param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
    }
    plVar12 = *(longlong **)(lVar13 + 0xb8);
    if ((plVar12 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar5 == '\0')) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      goto LAB_143e2a049;
    }
    uVar8 = (**(code **)(*plVar12 + 0x110))(plVar12);
    lVar11 = FUN_144aff482(uVar8,(longlong *)(param_1 + 0x28));
    *(longlong *)(param_1 + 0x38) = lVar11;
    if (lVar11 == 0) goto LAB_143e2a049;
  }
  if (lVar9 == 0) {
    cVar5 = '\0';
  }
  else {
    if ((longlong)*(int *)(lVar9 + 0x50) != 0) {
      plVar12 = *(longlong **)(lVar9 + 0x48);
      lVar13 = (longlong)*(int *)(lVar9 + 0x50) * 0x90;
      do {
        if (*plVar12 == lVar11) {
          if (plVar12 != (longlong *)0x0) {
            bVar14 = *(byte *)(plVar12 + 0x11) & 1;
            goto LAB_143e2a0bd;
          }
          break;
        }
        plVar12 = plVar12 + 0x12;
        lVar13 = lVar13 + -0x90;
      } while (lVar13 != 0);
    }
    bVar14 = 0;
LAB_143e2a0bd:
    cVar5 = (bVar14 ^ *(byte *)(param_1 + 0x40) ^ 1) * '\x02';
  }
  plVar12 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14b429930;
  local_58 = plVar12 + 2;
  uVar3 = *(undefined1 *)(param_1 + 0x40);
  plVar12[3] = 0;
  plVar12[4] = 0;
  *(undefined8 *)((longlong)plVar12 + 0x24) = 0;
  *(undefined8 *)((longlong)plVar12 + 0x2c) = 0;
  *(char *)(plVar12 + 7) = cVar5;
  plVar12[2] = (longlong)&PTR_FUN_14b429950;
  *(undefined1 *)(plVar12 + 8) = uVar3;
  plVar12[0xb] = 0;
  plVar12[0xc] = 0;
  plVar12[9] = 0;
  plVar12[10] = 0;
  local_50 = plVar12;
  FUN_148980b3a(&local_58);
  local_78 = FUN_145c5e806;
  local_70 = 0;
  FUN_14655ed1a(&local_68,&local_58);
  FUN_145a375e4(lVar7,&local_78,lVar10,&local_68);
  plVar12[10] = (longlong)local_78;
  if (local_60 != 0) {
    if (local_68 == (undefined8 *)0x0) goto LAB_143e2a1c5;
    (**(code **)*local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    local_60 = 0;
  }
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143e2a1c5:
  plVar12[9] = lVar11;
  *(undefined1 *)(plVar12 + 8) = *(undefined1 *)(param_1 + 0x40);
  if (lVar9 == 0) {
    *(undefined4 *)(plVar12 + 0xc) = 0;
    iVar6 = 0;
  }
  else {
    uVar4 = *(uint *)(lVar9 + 0xc);
    *(uint *)(plVar12 + 0xc) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
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
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
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
  *(int *)((longlong)plVar12 + 100) = iVar6;
  FUN_145c5e990(local_58,lVar9);
  plVar12 = local_50;
  *param_2 = (longlong)local_58;
  param_2[1] = (longlong)local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e2a2fe FUN_143e2a2fe body=712 status=ok
// SIG undefined FUN_143e2a2fe(void)

undefined8 * FUN_143e2a2fe(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  code *local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = (**(code **)(*(longlong *)*param_3 + 0x20))();
  if (lVar5 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
  }
  FUN_141260192(lVar5,&local_48,&DAT_14cb8c380);
  if (local_48 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    goto LAB_143e2a353;
  }
  lVar5 = param_3[1];
  plVar3 = (longlong *)param_3[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  cVar4 = FUN_14655ee46(param_1,&local_48);
  local_50 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_58 = local_50 + 2;
  local_50[1] = (longlong)&DAT_100000001;
  *local_50 = (longlong)&PTR_FUN_14b429d10;
  local_50[3] = 0;
  local_50[4] = 0;
  *(undefined8 *)((longlong)local_50 + 0x24) = 0;
  *(undefined8 *)((longlong)local_50 + 0x2c) = 0;
  *(char *)(local_50 + 7) = cVar4 * '\x02';
  local_50[2] = (longlong)&PTR_FUN_14b429d30;
  local_50[8] = 0;
  local_50[9] = 0;
  local_50[10] = lVar5;
  local_50[0xb] = (longlong)plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_14898191e();
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_14898191e();
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
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)local_58[7];
  local_58[6] = local_48;
  local_58[7] = (longlong)local_40;
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
  local_78 = FUN_148973ae2;
  local_70 = 0;
  FUN_14655ef44(local_68,&local_58);
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (lVar5 == 0) {
    uVar6 = FUN_145cd97be();
    lVar5 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x18) = lVar5;
  }
  lVar7 = *(longlong *)(param_1 + 0x20);
  if (((lVar7 == 0) && (lVar7 = 0, lVar5 != 0)) && (*(longlong *)(param_1 + 0x10) != 0)) {
    plVar3 = *(longlong **)(lVar5 + 0xb8);
    if (plVar3 == (longlong *)0x0) {
LAB_143e2a5c2:
      lVar7 = 0;
    }
    else {
      cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar4 == '\0') goto LAB_143e2a5c2;
      uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar7 = FUN_144aff482(uVar6,(longlong *)(param_1 + 0x10));
    }
    *(longlong *)(param_1 + 0x20) = lVar7;
  }
  FUN_145ab76ac(local_48,&local_78,lVar7,local_68);
  plVar3 = local_50;
  *param_2 = local_58;
  param_2[1] = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_50 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
LAB_143e2a353:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143e2a5c8 FUN_143e2a5c8 body=922 status=ok
// SIG undefined FUN_143e2a5c8(void)

longlong * FUN_143e2a5c8(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong ****pppplVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong ****pppplVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *****ppppplVar13;
  undefined1 auStack_d8 [32];
  code *local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [16];
  char local_98;
  undefined7 uStack_97;
  longlong ***local_90;
  longlong *local_88;
  undefined4 local_70 [2];
  longlong ****local_68;
  longlong *local_60;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar9 = (**(code **)(*(longlong *)*param_3 + 8))();
  local_98 = '\0';
  local_70[0] = 0;
  FUN_1456bb102(&local_98,uVar9);
  FUN_1448729ea(param_1 + 0x30,&local_68,&local_98);
  uVar8 = FUN_1405d5f74(&local_68);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppplVar13 = &local_68;
    if (0x18 < local_50) {
      ppppplVar13 = (longlong *****)local_68;
    }
    (*pcVar4)(ppppplVar13);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68);
  }
  FUN_1448173f8(local_70);
  if ((local_98 == '\x03') && (local_88 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_88 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  lVar10 = (**(code **)(*(longlong *)*param_3 + 0x20))();
  if (lVar10 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    goto LAB_143e2a702;
  }
  FUN_141260192(lVar10,&local_98,&DAT_14cb8c380);
  if (CONCAT71(uStack_97,local_98) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar10 = param_3[1];
    plVar5 = (longlong *)param_3[2];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    cVar7 = FUN_14655f070(param_1,&local_98,uVar8);
    local_60 = (longlong *)FUN_14001cc68(0x68,0x10);
    local_68 = (longlong ****)(local_60 + 2);
    local_60[1] = (longlong)&DAT_100000001;
    *local_60 = (longlong)&PTR_FUN_14b429dc0;
    local_60[3] = 0;
    local_60[4] = 0;
    *(undefined8 *)((longlong)local_60 + 0x24) = 0;
    *(undefined8 *)((longlong)local_60 + 0x2c) = 0;
    *(char *)(local_60 + 7) = cVar7 * '\x02';
    local_60[2] = (longlong)&PTR_FUN_14b429de0;
    local_60[8] = 0;
    local_60[9] = 0;
    local_60[10] = lVar10;
    local_60[0xb] = (longlong)plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    *(undefined4 *)(local_60 + 0xc) = uVar8;
    FUN_148981c98();
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    if ((longlong ****)local_90 != (longlong ****)0x0) {
      LOCK();
      *(int *)(local_90 + 1) = *(int *)(local_90 + 1) + 1;
      UNLOCK();
    }
    pppplVar6 = (longlong ****)local_68[7];
    local_68[6] = (longlong ***)CONCAT71(uStack_97,local_98);
    local_68[7] = local_90;
    if (pppplVar6 != (longlong ****)0x0) {
      LOCK();
      pppplVar3 = pppplVar6 + 1;
      *(int *)pppplVar3 = *(int *)pppplVar3 + -1;
      UNLOCK();
      if (*(int *)pppplVar3 == 0) {
        (*(code *)**pppplVar6)(pppplVar6);
        LOCK();
        piVar1 = (int *)((longlong)pppplVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*pppplVar6)[2])(pppplVar6);
        }
      }
    }
    uVar9 = CONCAT71(uStack_97,local_98);
    local_b8 = FUN_148973ba2;
    local_b0 = 0;
    FUN_14655f16c(local_a8,&local_68);
    lVar10 = *(longlong *)(param_1 + 0x18);
    if (lVar10 == 0) {
      uVar11 = FUN_145cd97be();
      lVar10 = FUN_14477b664(uVar11);
      *(longlong *)(param_1 + 0x18) = lVar10;
    }
    lVar12 = *(longlong *)(param_1 + 0x20);
    if (((lVar12 == 0) && (lVar12 = 0, lVar10 != 0)) && (*(longlong *)(param_1 + 0x10) != 0)) {
      plVar5 = *(longlong **)(lVar10 + 0xb8);
      if (plVar5 == (longlong *)0x0) {
LAB_143e2a95e:
        lVar12 = 0;
      }
      else {
        cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5);
        if (cVar7 == '\0') goto LAB_143e2a95e;
        uVar11 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar12 = FUN_144aff482(uVar11,(longlong *)(param_1 + 0x10));
      }
      *(longlong *)(param_1 + 0x20) = lVar12;
    }
    FUN_145ab76ac(uVar9,&local_b8,lVar12,local_a8);
    plVar5 = local_60;
    *param_2 = (longlong)local_68;
    param_2[1] = (longlong)local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_60 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_60)(local_60);
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
  }
  if ((longlong ****)local_90 != (longlong ****)0x0) {
    LOCK();
    pppplVar6 = (longlong ****)(local_90 + 1);
    *(int *)pppplVar6 = *(int *)pppplVar6 + -1;
    UNLOCK();
    if (*(int *)pppplVar6 == 0) {
      (*(code *)**local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*local_90)[2])(local_90);
      }
    }
  }
LAB_143e2a702:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e2a964 FUN_143e2a964 body=631 status=ok
// SIG undefined FUN_143e2a964(void)

undefined8 * FUN_143e2a964(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  code *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = param_3[1];
  plVar4 = (longlong *)param_3[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_40 = (longlong *)FUN_14001cc68(0x70,0x10);
  local_48 = local_40 + 2;
  *(byte *)(local_40 + 7) = *(byte *)(local_40 + 7) & 0xf0;
  local_40[1] = (longlong)&DAT_100000001;
  *local_40 = (longlong)&PTR_FUN_14b429e70;
  local_40[3] = 0;
  local_40[4] = 0;
  *(undefined8 *)((longlong)local_40 + 0x24) = 0;
  *(undefined8 *)((longlong)local_40 + 0x2c) = 0;
  local_40[2] = (longlong)&PTR_FUN_14b429e90;
  local_40[8] = lVar6;
  local_40[9] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_40[10] = 0;
  *(undefined1 *)(local_40 + 0xb) = 1;
  local_40[0xc] = 0;
  local_40[0xd] = 0;
  FUN_148982056();
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
  lVar6 = (**(code **)(*(longlong *)*param_3 + 0x18))();
  plVar4 = local_48;
  if (lVar6 == 0) {
    *(undefined4 *)(local_48 + 8) = 0;
    iVar5 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar6 + 0xc);
    *(uint *)(local_48 + 8) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar5 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar5 = *(int *)(lVar6 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar6 + 0x10) = iVar7;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar7;
      }
    }
  }
  plVar1 = local_48;
  *(int *)((longlong)plVar4 + 0x44) = iVar5;
  *(undefined1 *)(local_48 + 9) = *(undefined1 *)(param_1 + 0x30);
  plVar4 = (longlong *)*param_3;
  local_68 = FUN_141434f28;
  local_60 = 0;
  FUN_14655f298(&local_58);
  (**(code **)(*plVar4 + 0x60))(plVar4,&local_68,&local_58);
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_143e2ab14;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143e2ab14:
  plVar4 = local_40;
  *param_2 = plVar1;
  param_2[1] = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
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
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143e2abdc FUN_143e2abdc body=121 status=ok
// SIG undefined FUN_143e2abdc(void)

undefined8 FUN_143e2abdc(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((longlong)(int)param_1[6] != 0) {
    plVar3 = (longlong *)param_1[5];
    lVar2 = (longlong)(int)param_1[6] << 5;
    do {
      lVar1 = (**(code **)(*plVar3 + 8))(plVar3);
      if (lVar1 == 0) {
        return 0;
      }
      if (*(char *)(lVar1 + 0x30) != '\0') {
        return 0;
      }
      if (*(char *)(lVar1 + 0x31) != '\0') {
        return 0;
      }
      if (*(int *)(lVar1 + 0x6c) != 2) {
        return 0;
      }
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  if (((char)param_1[4] == '\x01') &&
     ((((lVar2 = (**(code **)(*param_1 + 8))(param_1), lVar2 == 0 ||
        (*(char *)(lVar2 + 0x30) != '\0')) || (*(char *)(lVar2 + 0x31) != '\0')) ||
      (*(int *)(lVar2 + 0x6c) != 2)))) {
    return 0;
  }
  return 1;
}



// FUNCTION 143e2ac56 FUN_143e2ac56 body=131 status=ok
// SIG undefined FUN_143e2ac56(void)

void FUN_143e2ac56(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((char)param_1[4] == '\x01') {
    lVar3 = (**(code **)(*param_1 + 8))(param_1);
    if ((lVar3 != 0) && (param_1[1] != 0)) {
      FUN_140ccfb62(lVar3);
      param_1[1] = 0;
    }
  }
  if ((longlong)(int)param_1[6] != 0) {
    plVar2 = (longlong *)param_1[5];
    lVar3 = (longlong)(int)param_1[6] << 5;
    do {
      lVar1 = (**(code **)(*plVar2 + 8))(plVar2);
      if ((lVar1 != 0) && (plVar2[1] != 0)) {
        FUN_140ccfb62(lVar1);
        plVar2[1] = 0;
      }
      plVar2 = plVar2 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 143e2acda FUN_143e2acda body=176 status=ok
// SIG undefined FUN_143e2acda(void)

void FUN_143e2acda(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (DAT_14c950c29 == '\x01') {
    if (*param_3 != 0) {
      FUN_1456cec3c();
      goto LAB_143e2ad18;
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(longlong *)(param_1 + 0x90) = param_3[1];
  }
  else {
LAB_143e2ad18:
    lVar2 = *param_3;
    *(longlong *)(param_1 + 0x88) = lVar2;
    plVar1 = (longlong *)param_3[1];
    *(longlong **)(param_1 + 0x90) = plVar1;
    if (plVar1 != (longlong *)0x0 && lVar2 != 0) {
      lVar2 = (**(code **)(*plVar1 + 8))();
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      goto LAB_143e2ad3f;
    }
  }
  lVar2 = 0;
LAB_143e2ad3f:
  *(longlong *)(param_1 + 0x40) = lVar2;
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  if (*(char *)(param_1 + 0x1e8) != '\x01') {
    *(undefined1 *)(param_1 + 0x1e8) = 1;
  }
  FUN_143e2ad8a(param_1);
  return;
}



// FUNCTION 143e2ad8a FUN_143e2ad8a body=218 status=ok
// SIG undefined FUN_143e2ad8a(void)

void FUN_143e2ad8a(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x1e8);
  if (cVar1 == '\x01') {
    FUN_140f3ddd8(param_1);
    cVar1 = FUN_143e2abdc(param_1 + 0x140);
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x1e8) != '\x02') {
        *(undefined1 *)(param_1 + 0x1e8) = 2;
      }
      FUN_140f3c9ba(param_1 + 0x140,param_1);
      cVar1 = *(char *)(param_1 + 0x1e8);
      goto LAB_143e2ade9;
    }
    if (*(char *)(param_1 + 0x1e8) != '\x03') {
      *(undefined1 *)(param_1 + 0x1e8) = 3;
    }
LAB_143e2aded:
    FUN_143e2aeb0(param_1);
    FUN_143e2b436(param_1);
    cVar1 = FUN_143e2abdc(param_1 + 0x140);
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x1e8) != '\x05') {
        *(undefined1 *)(param_1 + 0x1e8) = 5;
      }
      goto LAB_143e2ae45;
    }
    if (*(char *)(param_1 + 0x1e8) != '\x04') {
      *(undefined1 *)(param_1 + 0x1e8) = 4;
    }
    FUN_140f3c9ba(param_1 + 0x140,param_1);
    cVar1 = *(char *)(param_1 + 0x1e8);
  }
  else {
LAB_143e2ade9:
    if (cVar1 == '\x03') goto LAB_143e2aded;
  }
  if (cVar1 != '\x05') {
    return;
  }
LAB_143e2ae45:
  FUN_140e458c6(param_1);
  if (*(char *)(param_1 + 0x1e8) != '\x06') {
    *(undefined1 *)(param_1 + 0x1e8) = 6;
  }
  return;
}



// FUNCTION 143e2ae64 FUN_143e2ae64 body=75 status=ok
// SIG undefined FUN_143e2ae64(void)

void FUN_143e2ae64(longlong param_1)

{
  longlong lVar1;
  
  *(byte *)(param_1 + 0x248) = *(byte *)(param_1 + 0x248) | 1;
  FUN_143e2acda();
  if ((*(longlong *)(param_1 + 0x88) != 0) && (*(longlong **)(param_1 + 0x90) != (longlong *)0x0)) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))();
    if (lVar1 != 0) {
      FUN_146560712(lVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 143e2aeb0 FUN_143e2aeb0 body=1412 status=ok
// SIG undefined FUN_143e2aeb0(void)

void FUN_143e2aeb0(longlong param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  code *pcVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_188 [32];
  wchar_t *local_168;
  undefined4 local_160;
  undefined8 local_158;
  wchar_t *local_150;
  wchar_t *local_148;
  code *local_140;
  undefined1 *local_138;
  code **local_130;
  code *local_128;
  code *local_120;
  longlong local_110;
  code *local_108;
  undefined1 local_100 [8];
  code *local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined2 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  undefined8 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0xa8) + 0x40);
  if (lVar4 == 0) {
LAB_143e2b3ff:
    if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  plVar10 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x38) + 8);
  lVar4 = lVar4 * 0x28;
  do {
    if (((((*(int *)((longlong)plVar10 + -4) == 0) ||
          (uVar2 = *(uint *)(plVar10 + -1), (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2)) ||
        ((plVar9 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)((longlong)plVar10 + -4))))) ||
       (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 ||
        (pcVar5 = (code *)*plVar9, pcVar5 == (code *)0x0)))) {
      if (*plVar10 == 0) goto LAB_143e2b3ff;
      pcVar5 = (code *)FUN_140007850();
      cVar1 = (*(code *)PTR_FUN_14c758760)();
      if ((pcVar5 == (code *)0x0) || (cVar1 == '\0')) {
        if (pcVar5 == (code *)0x0) {
          plVar10[-1] = 0;
          goto LAB_143e2b3ff;
        }
        uVar2 = *(uint *)(pcVar5 + 0xc);
LAB_143e2afd0:
        *(uint *)(plVar10 + -1) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        iVar3 = *(int *)(lVar7 + 0x10);
        if (*(int *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          iVar11 = DAT_14c964868 + 1;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar12) {
            local_110 = CONCAT44(local_110._4_4_,iVar11);
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar11);
            iVar11 = (int)local_110;
          }
          LOCK();
          iVar3 = *(int *)(lVar7 + 0x10);
          bVar12 = iVar3 == 0;
          if (bVar12) {
            *(int *)(lVar7 + 0x10) = iVar11;
            iVar3 = 0;
          }
          UNLOCK();
          if (bVar12) {
            iVar3 = iVar11;
          }
        }
        *(int *)((longlong)plVar10 + -4) = iVar3;
      }
      else {
        uVar2 = *(uint *)(pcVar5 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) goto LAB_143e2afd0;
      }
      if ((*(uint *)(pcVar5 + 8) >> 0x1e & 1) != 0) goto LAB_143e2b3ff;
    }
    if (DAT_14c949118 == 0) {
      local_108 = FUN_140631fbe;
      lVar7 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar7;
      FUN_1446f470e(local_100,L"Class",1);
      local_130 = &local_108;
      local_138 = &LAB_146891e90;
      local_140 = (code *)&LAB_146273097;
      local_150 = L"Engine";
      local_148 = (wchar_t *)CONCAT44(local_148._4_4_,199);
      local_158 = 0x20;
      local_160 = 0x10000000;
      local_168._0_4_ = 8;
      FUN_14574b4b2(lVar7);
      local_110 = DAT_14c951858;
      DAT_14c949118 = lVar7;
      if (DAT_14c951858 == 0) {
        local_f8 = FUN_1449e2820;
        local_120 = FUN_14081d0ea;
        local_128 = FUN_14081d0ea;
        local_130 = &local_f8;
        local_138 = &LAB_1468c5283;
        local_140 = FUN_142809da0;
        local_148 = L"Engine";
        local_150 = (wchar_t *)0x400000000;
        local_158 = CONCAT44(local_158._4_4_,0x10000000);
        local_160 = 8;
        local_168._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar7 = DAT_14c949118;
      local_110 = DAT_14c951858;
      uVar6 = FUN_1449e2fb2();
      local_168 = L"Class";
      FUN_14574b446(uVar6,lVar7,local_110,L"/Script/CoreUObject");
    }
    if ((((*(int *)(*(longlong *)(pcVar5 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pcVar5 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
        (lVar7 = FUN_140fd15b6(), lVar7 == 0)) || (*(int *)(pcVar5 + 0x38) < *(int *)(lVar7 + 0x38))
       ) goto LAB_143e2b3ff;
    pcVar8 = (code *)0x0;
    if (*(longlong *)(*(longlong *)(pcVar5 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
        lVar7 + 0x30) {
      pcVar8 = pcVar5;
    }
    if ((pcVar8 == (code *)0x0) || (DAT_14c950c29 == '\0')) {
      if (pcVar8 == (code *)0x0) goto LAB_143e2b3ff;
    }
    else {
      FUN_1456cec3c();
    }
    lVar7 = FUN_140fd15b6();
    if (((lVar7 == 0) || (*(int *)(pcVar5 + 0x38) < *(int *)(lVar7 + 0x38))) ||
       (*(longlong *)(*(longlong *)(pcVar5 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
        lVar7 + 0x30)) goto LAB_143e2b3ff;
    lVar7 = FUN_140fd15b6();
    if ((lVar7 == 0) || (*(int *)(pcVar5 + 0x38) < *(int *)(lVar7 + 0x38))) {
      pcVar5 = (code *)0x0;
    }
    else if (*(longlong *)(*(longlong *)(pcVar5 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
             lVar7 + 0x30) {
      pcVar5 = (code *)0x0;
    }
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
    local_a8 = (longlong *)0x0;
    local_78 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    local_b8 = 0;
    local_c0 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_f8 = pcVar5;
    local_f0 = param_1;
    lVar7 = FUN_1402710dd(&local_f8);
    if (local_b8 != 0) {
      plVar9 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar9 = local_98;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (lVar7 == 0) goto LAB_143e2b3ff;
    FUN_143e34cc6(lVar7);
    iVar3 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
      FUN_1418aaab8((longlong *)(param_1 + 0x98),iVar3);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = lVar7;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar7);
    }
    plVar10 = plVar10 + 5;
    lVar4 = lVar4 + -0x28;
    if (lVar4 == 0) goto LAB_143e2b3ff;
  } while( true );
}



// FUNCTION 143e2b436 FUN_143e2b436 body=239 status=ok
// SIG undefined FUN_143e2b436(void)

void FUN_143e2b436(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined **local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = &PTR_FUN_14b42ae50;
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = *(longlong *)(param_1 + 0xa8);
  local_48 = param_1;
  if ((lVar2 != 0) && (iVar1 = *(int *)(lVar2 + 0x20), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(lVar2 + 0x18);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + 8 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_50);
      }
      lVar5 = lVar5 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar5);
  }
  iVar1 = *(int *)(param_1 + 0xa0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x98);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar2 + lVar5);
      if (lVar4 != 0) {
        FUN_143e34d4c(*(undefined8 *)(lVar4 + 0x10),&local_50);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  FUN_140f3e196(&local_50);
  FUN_140f3debe(param_1 + 0x140,param_1);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e2b526 FUN_143e2b526 body=66 status=ok
// SIG undefined FUN_143e2b526(void)

void FUN_143e2b526(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 0xe0) + 0x30))(param_1 + 0xe0);
    FUN_14101bc7a(param_1 + 0xe0,uVar1,param_2 + 0x30);
    return;
  }
  return;
}



// FUNCTION 143e2b568 FUN_143e2b568 body=60 status=ok
// SIG undefined FUN_143e2b568(void)

void FUN_143e2b568(longlong param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x98) + lVar2);
      if (*(int *)(lVar1 + 0x78) == param_2) {
        if (lVar1 == 0) {
          return;
        }
        FUN_1418ab220(lVar1,param_3);
        return;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0xa0) * 8 != lVar2);
  }
  return;
}



// FUNCTION 143e2b5a4 FUN_143e2b5a4 body=91 status=ok
// SIG undefined FUN_143e2b5a4(void)

longlong * FUN_143e2b5a4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = (*(longlong **)(param_1 + 0x10))[2];
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x2c);
    if (((-1 < (longlong)iVar1) &&
        (lVar2 = **(longlong **)(param_1 + 0x10), iVar1 < *(int *)(lVar2 + 0x30))) &&
       (lVar2 = (longlong)iVar1 * 0xa0 + *(longlong *)(lVar2 + 0x28), lVar2 != 0)) {
      lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x50);
      if (lVar4 != 0) {
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x48);
        lVar4 = lVar4 * 0x38;
        do {
          if (*(int *)(*plVar3 + 8) == *(int *)(lVar2 + 8)) {
            return plVar3;
          }
          plVar3 = plVar3 + 7;
          lVar4 = lVar4 + -0x38;
        } while (lVar4 != 0);
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 143e2b600 FUN_143e2b600 body=186 status=ok
// SIG undefined FUN_143e2b600(void)

undefined8 FUN_143e2b600(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  undefined4 *local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  bVar1 = *(byte *)(param_1 + 0x88);
  *(byte *)(param_1 + 0x88) = bVar1 | 2;
  local_38 = &local_6c;
  local_6c = 0xffffffff;
  local_58 = 0;
  local_48 = &PTR_LAB_14b42a350;
  local_68 = FUN_143e2dc58;
  local_40 = param_1;
  FUN_14103f5f0(param_1);
  FUN_143e2b6bc(param_1,param_1 + 0x24,param_2);
  uVar2 = FUN_145a2211e(param_1 + 0x40);
  uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),*(undefined1 *)(param_1 + 0x88)) &
          0xfffffffffffffffd;
  *(byte *)(param_1 + 0x88) = (byte)uVar3 | bVar1 & 2;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e2b6bc FUN_143e2b6bc body=166 status=ok
// SIG undefined FUN_143e2b6bc(void)

void FUN_143e2b6bc(longlong param_1,char *param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  while( true ) {
    if (*param_2 != '\x02') break;
    param_2 = (char *)FUN_143e2b762(2,*(undefined4 *)(param_2 + 4),param_3);
    if (param_2 == (char *)0x0) {
      FUN_143e2b600(param_1,param_3);
      return;
    }
  }
  if (*param_2 == '\x01') {
    lVar3 = **(longlong **)(param_3 + 0x10);
    iVar1 = *(int *)(param_2 + 4);
    uVar4 = 0xffffffff;
    if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar3 + 0x40))) {
      uVar4 = *(uint *)(*(longlong *)(lVar3 + 0x38) + (longlong)iVar1 * 4);
    }
    uVar2 = *(uint *)(param_1 + 0x2c);
    if (uVar2 != uVar4) {
      if (((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar3 + 0x30))) &&
         (lVar3 = (ulonglong)uVar2 * 0xa0 + *(longlong *)(lVar3 + 0x28), lVar3 != 0)) {
        FUN_1410bda94(param_1,lVar3,param_3);
      }
      *(uint *)(param_1 + 0x2c) = uVar4;
      FUN_143e2b7d4(param_1,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 143e2b762 FUN_143e2b762 body=113 status=ok
// SIG undefined FUN_143e2b762(void)

longlong FUN_143e2b762(undefined8 param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((((int)param_2 < 0) || (*(int *)(**(longlong **)(param_3 + 0x10) + 0x50) <= (int)param_2)) ||
     (lVar3 = (ulonglong)param_2 * 0x20 + *(longlong *)(**(longlong **)(param_3 + 0x10) + 0x48),
     lVar3 == 0)) {
    lVar3 = 0;
  }
  else {
    if ((longlong)*(int *)(lVar3 + 0x18) != 0) {
      lVar4 = *(longlong *)(lVar3 + 0x10);
      lVar5 = (longlong)*(int *)(lVar3 + 0x18) << 5;
      do {
        plVar1 = *(longlong **)(lVar4 + 8);
        if ((plVar1 != (longlong *)0x0) &&
           (cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_3), cVar2 != '\0')) {
          return lVar4;
        }
        lVar4 = lVar4 + 0x20;
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
    }
    lVar3 = lVar3 + 4;
  }
  return lVar3;
}



// FUNCTION 143e2b7d4 FUN_143e2b7d4 body=92 status=ok
// SIG undefined FUN_143e2b7d4(void)

void FUN_143e2b7d4(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(**(longlong **)(param_2 + 0x10) + 0x30))) &&
     (lVar2 = (longlong)iVar1 * 0xa0 + *(longlong *)(**(longlong **)(param_2 + 0x10) + 0x28),
     lVar2 != 0)) {
    FUN_141456240(param_1,lVar2,param_2);
    FUN_1410340ac(param_1,lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 143e2b830 FUN_143e2b830 body=251 status=ok
// SIG undefined FUN_143e2b830(void)

ulonglong FUN_143e2b830(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar1 = *param_2;
  lVar7 = *(longlong *)(param_1 + 0x10);
  if (lVar7 == 0) {
    uVar4 = FUN_14110242a();
    lVar7 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x10) = lVar7;
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (lVar5 == 0) {
    uVar3 = 0;
    if ((lVar7 == 0) || (*(longlong *)(param_1 + 8) == 0)) goto LAB_143e2b890;
    plVar6 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar6 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar2 == '\0')) {
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar6 + 0x110))(plVar6);
      lVar5 = FUN_144aff482(uVar4,(longlong *)(param_1 + 8));
      *(longlong *)(param_1 + 0x18) = lVar5;
      if (lVar5 != 0) goto LAB_143e2b855;
    }
  }
  else {
LAB_143e2b855:
    lVar7 = (longlong)*(int *)(lVar1 + 0x50);
    if (lVar7 != 0) {
      plVar6 = *(longlong **)(lVar1 + 0x48);
      lVar7 = lVar7 * 0x90;
      do {
        if (*plVar6 == lVar5) {
          if (plVar6 != (longlong *)0x0) {
            uVar3 = CONCAT71((int7)((ulonglong)lVar5 >> 8),(char)plVar6[0x11]) & 0xffffffffffffff01;
            goto LAB_143e2b890;
          }
          break;
        }
        plVar6 = plVar6 + 0x12;
        lVar7 = lVar7 + -0x90;
      } while (lVar7 != 0);
    }
  }
  uVar3 = 0;
LAB_143e2b890:
  if (*(char *)(param_1 + 0x20) != '\0') {
    if (*(char *)(param_1 + 0x20) == '\x01') {
      uVar3 = uVar3 ^ 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 143e2b92c FUN_143e2b92c body=137 status=ok
// SIG undefined FUN_143e2b92c(void)

undefined8 FUN_143e2b92c(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FUN_143e2b5a4(param_2);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x24) != 0)) {
    uVar1 = *(uint *)(lVar2 + 0x20);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(lVar2 + 0x24))) &&
       ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar2 = *plVar3;
      }
      else {
        lVar2 = 0;
      }
      if ((*(int *)(lVar2 + 0x54) != -1) && (lVar2 = *(longlong *)(lVar2 + 0x54), (int)lVar2 != -1))
      {
        return CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar2 == *(longlong *)(param_1 + 8));
      }
    }
  }
  return 0;
}



// FUNCTION 143e2b9b6 FUN_143e2b9b6 body=43 status=ok
// SIG undefined FUN_143e2b9b6(void)

ulonglong FUN_143e2b9b6(void)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 in_R9;
  
  lVar1 = FUN_143e2b5a4(in_R9);
  if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x28), lVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x89)) &
            0xffffffffffffff01;
  }
  return uVar2;
}



// FUNCTION 143e2b9e2 FUN_143e2b9e2 body=788 status=ok
// SIG undefined FUN_143e2b9e2(void)

void FUN_143e2b9e2(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  wchar_t *local_1a8;
  code *local_1a0;
  undefined1 *local_198;
  code **local_190;
  code *local_188;
  code *local_180;
  code *local_170;
  undefined4 local_168;
  undefined1 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined **local_68;
  undefined *local_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  uVar2 = 0;
  local_168 = 0;
  local_164 = 0;
  local_160 = 0;
  local_158 = 0x3002;
  local_150 = 0;
  local_118 = 0;
  local_110 = 0x200000000;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_e8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_e0 = DAT_14c8464f0;
  local_c8 = DAT_14c8464f0;
  local_c0 = 0;
  local_b8 = 0x3006;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_90 = (undefined4)DAT_14c8464e0;
  uStack_8c = DAT_14c8464e0._4_4_;
  uStack_88 = (undefined4)DAT_14c8464e8;
  uStack_84 = DAT_14c8464e8._4_4_;
  local_80 = DAT_14c8464f0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_d8 = local_f0;
  uStack_d0 = uStack_e8;
  FUN_1405c5fa2();
  local_60 = &DAT_14cb769e8;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = &PTR_FUN_14b0394b0;
  local_48 = 0x1000000;
  lVar3 = (**(code **)(*param_2 + 0xf8))(param_2);
  if (lVar3 != 0) {
    if (DAT_14cb56270 == 0) {
      local_190 = &local_170;
      local_170 = FUN_1449e2820;
      local_180 = FUN_14081d0ea;
      local_188 = FUN_1427b09ee;
      local_198 = &LAB_148630fef;
      local_1a0 = FUN_1464b6a91;
      local_1a8 = L"Engine";
      local_1b0 = 0;
      local_1b8 = 0x10004001;
      local_1c0 = 8;
      local_1c8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar4 = (longlong *)FUN_144718840(lVar3,DAT_14cb56270);
    if (plVar4 == (longlong *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*plVar4 + 0x40))(plVar4);
    }
  }
  uVar6 = (**(code **)(*param_2 + 0x140))(param_2,0);
  FUN_14095f044(&local_168,uVar6,uVar2,param_2);
  uVar5 = (**(code **)(*param_2 + 0xf8))(param_2);
  FUN_141857575(param_1,uVar5,&local_168);
  local_68 = (undefined **)&DAT_14a171d50;
  uVar1 = uStack_50 >> 0x20;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&local_58,0);
  }
  local_60 = (undefined *)0x0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e2bcf8 FUN_143e2bcf8 body=68 status=ok
// SIG undefined FUN_143e2bcf8(void)

undefined8 * FUN_143e2bcf8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b427af0;
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



// FUNCTION 143e2bd58 FUN_143e2bd58 body=300 status=ok
// SIG undefined FUN_143e2bd58(void)

void FUN_143e2bd58(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  longlong local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined *local_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_a8 = 0x3002;
  local_a0 = 0;
  local_68 = 0;
  local_60 = 0x200000000;
  FUN_1405c5fa2();
  local_50 = &DAT_14cb769e8;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = &PTR_FUN_14b0394b0;
  FUN_140f31ede(&local_c8,param_2);
  uVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  FUN_14870488e(param_1,uVar2,&local_c8);
  local_58 = (undefined **)&DAT_14a171d50;
  uVar1 = uStack_40 >> 0x20;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&local_48,0);
  }
  local_50 = (undefined *)0x0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e2be86 FUN_143e2be86 body=279 status=ok
// SIG undefined FUN_143e2be86(void)

void FUN_143e2be86(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  longlong local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined *local_48;
  longlong local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a0 = 0x3002;
  local_98 = 0;
  local_60 = 0;
  local_58 = 0x200000000;
  FUN_1405c5fa2();
  local_48 = &DAT_14cb769e8;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = &PTR_FUN_14b0394b0;
  FUN_14881ba04(&local_b8,param_2);
  FUN_148704960(param_1,&local_b8);
  local_50 = (undefined **)&DAT_14a171d50;
  uVar1 = uStack_38 >> 0x20;
  uStack_38 = uStack_38 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&local_40,0);
  }
  local_48 = (undefined *)0x0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e2bf9e FUN_143e2bf9e body=397 status=ok
// SIG undefined FUN_143e2bf9e(void)

void FUN_143e2bf9e(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined **local_60;
  undefined *local_58;
  longlong local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = 0;
  local_130 = 0x3002;
  local_128 = 0;
  local_f0 = 0;
  local_e8 = 0x200000000;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  local_c0 = (undefined4)DAT_14c8464e0;
  uStack_bc = DAT_14c8464e0._4_4_;
  uStack_b8 = (undefined4)DAT_14c8464e8;
  uStack_b4 = DAT_14c8464e8._4_4_;
  local_b0 = DAT_14c8464f0;
  local_a8 = (undefined4)DAT_14c8464e0;
  uStack_a4 = DAT_14c8464e0._4_4_;
  uStack_a0 = (undefined4)DAT_14c8464e8;
  uStack_9c = DAT_14c8464e8._4_4_;
  local_98 = DAT_14c8464f0;
  local_90 = (undefined4)DAT_14c8464e0;
  uStack_8c = DAT_14c8464e0._4_4_;
  uStack_88 = (undefined4)DAT_14c8464e8;
  uStack_84 = DAT_14c8464e8._4_4_;
  local_80 = DAT_14c8464f0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_1405c5fa2();
  local_58 = &DAT_14cb769e8;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = &PTR_FUN_14b0394b0;
  FUN_14187b2d4(&local_138,param_2);
  uVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  FUN_141857763(param_1,uVar2,&local_138);
  local_60 = (undefined **)&DAT_14a171d50;
  uVar1 = uStack_48 >> 0x20;
  uStack_48 = uStack_48 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&local_50,0);
  }
  local_58 = (undefined *)0x0;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e2c148 FUN_143e2c148 body=68 status=ok
// SIG undefined FUN_143e2c148(void)

undefined8 * FUN_143e2c148(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b427fc0;
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



// FUNCTION 143e2c1a8 FUN_143e2c1a8 body=733 status=ok
// SIG undefined FUN_143e2c1a8(void)

int FUN_143e2c1a8(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar5 = *(longlong **)(param_3 + 0x38);
  plVar6 = *(longlong **)(param_3 + 0x40);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  if (plVar5 == (longlong *)0x0) {
    iVar9 = -1;
  }
  else {
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    local_68 = 0;
    uStack_60._0_4_ = 0;
    local_78 = *(undefined4 *)(param_3 + 0x18);
    uStack_74 = *(undefined4 *)(param_3 + 0x1c);
    uStack_70 = *(undefined4 *)(param_3 + 0x20);
    uStack_6c = *(undefined4 *)(param_3 + 0x24);
    if (*(longlong *)(*param_1 + 8) == 0) {
      iVar9 = 0;
      uVar4 = (uint)uStack_60;
    }
    else {
      uVar4 = *(uint *)(*(longlong *)(*param_1 + 8) + 0xc);
      uStack_60 = (ulonglong)uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar9 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar9 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar9 = *(int *)(lVar11 + 0x10);
        bVar12 = iVar9 == 0;
        if (bVar12) {
          *(int *)(lVar11 + 0x10) = iVar10;
          iVar9 = 0;
        }
        UNLOCK();
        uVar4 = (uint)uStack_60;
        if (bVar12) {
          iVar9 = iVar10;
        }
      }
    }
    uStack_60._0_4_ = uVar4;
    plVar1 = plStack_50;
    uStack_60 = CONCAT44(iVar9,(uint)uStack_60);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_58 = plVar5;
    plVar8 = plVar6;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        puVar7 = (undefined8 *)*plStack_50;
        plStack_50 = plVar6;
        (*(code *)*puVar7)(plVar1);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar8 = plStack_50;
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          plVar8 = plStack_50;
        }
      }
    }
    plStack_50 = plVar8;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_98 = plVar5;
    local_90 = plVar6;
    (**(code **)(*plVar5 + 0x10))(plVar5,&local_88,&local_98,&local_78);
    plVar5 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = local_80;
    if (local_88 == 0) {
      iVar9 = -1;
    }
    else {
      *(byte *)(local_88 + 0x90) = *(byte *)(local_88 + 0x90) | 1;
      lVar11 = *(longlong *)param_1[1];
      if (local_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_80 + 1) = (int)local_80[1] + 1;
        UNLOCK();
      }
      iVar9 = *(int *)(lVar11 + 0xa0);
      *(uint *)(lVar11 + 0xa0) = iVar9 + 1U;
      if (*(uint *)(lVar11 + 0xa4) < iVar9 + 1U) {
        FUN_1404e3dee((longlong *)(lVar11 + 0x98),iVar9);
      }
      lVar11 = *(longlong *)(lVar11 + 0x98);
      *(longlong *)(lVar11 + (longlong)iVar9 * 0x10) = local_88;
      *(longlong **)(lVar11 + 8 + (longlong)iVar9 * 0x10) = plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
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
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_80 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
      }
    }
    plVar5 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_50)(plStack_50);
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar9;
}



// FUNCTION 143e2c4b0 FUN_143e2c4b0 body=29 status=ok
// SIG undefined FUN_143e2c4b0(void)

undefined8 FUN_143e2c4b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e2c4ce FUN_143e2c4ce body=68 status=ok
// SIG undefined FUN_143e2c4ce(void)

undefined8 * FUN_143e2c4ce(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b428700;
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



// FUNCTION 143e2c512 FUN_143e2c512 body=141 status=ok
// SIG undefined FUN_143e2c512(void)

void FUN_143e2c512(longlong param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  undefined1 auStack_38 [36];
  float local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_3 == '\x01') {
    local_14 = (float)FUN_1418a8fc2(param_1);
    local_14 = local_14 - *(float *)(param_1 + 0x80);
    FUN_1447cd2ec(param_1 + 0x98);
  }
  else if (param_3 == '\0') {
    uVar1 = FUN_1418a8fc2(param_1);
    *(undefined4 *)(param_1 + 0x80) = uVar1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e2c5b0 FUN_143e2c5b0 body=267 status=ok
// SIG undefined FUN_143e2c5b0(void)

void FUN_143e2c5b0(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_1410dec34();
  if (lVar2 != 0) {
    lVar3 = FUN_145860df8();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x70) + 8);
      puVar5 = &DAT_14c9485f0;
      if (puVar1 != (undefined4 *)0x0) {
        puVar5 = puVar1;
      }
      if (DAT_14c947fe0 == 0) {
        lVar3 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar3);
        DAT_14c947fe0 = lVar3;
      }
      FUN_140045924(DAT_14c947fe0,local_38,puVar5,1);
      uVar4 = FUN_148887a10(lVar2 + 0x198,local_38);
      if (*(longlong *)(param_1 + 0x80) != 0) {
        FUN_14480f766(uVar4);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_14897b292(param_1);
  *(undefined1 *)(param_1 + 0x7c) = 0;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e2c6bc FUN_143e2c6bc body=78 status=ok
// SIG undefined FUN_143e2c6bc(void)

void FUN_143e2c6bc(longlong param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
    if (*(char *)(param_1 + 0x7c) == '\x01') {
      *(undefined1 *)(param_1 + 0x7c) = 0;
      FUN_1447cd2ec(param_1 + 0xa0,0);
      FUN_14897b292(param_1);
      return;
    }
  }
  else if (param_3 == '\0') {
    FUN_14897abf2(param_1);
    return;
  }
  return;
}



// FUNCTION 143e2c710 FUN_143e2c710 body=68 status=ok
// SIG undefined FUN_143e2c710(void)

undefined8 * FUN_143e2c710(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b428c20;
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



// FUNCTION 143e2c770 FUN_143e2c770 body=169 status=ok
// SIG undefined FUN_143e2c770(void)

void FUN_143e2c770(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b428d10;
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
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143e2c7ee;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143e2c7ee:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e2c806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143e2c81a FUN_143e2c81a body=122 status=ok
// SIG undefined FUN_143e2c81a(void)

void FUN_143e2c81a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_143e2c869;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143e2c869:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e2c881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143e2c894 FUN_143e2c894 body=132 status=ok
// SIG undefined FUN_143e2c894(void)

undefined8 * FUN_143e2c894(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143e2c8e5;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143e2c8e5:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e2c918 FUN_143e2c918 body=122 status=ok
// SIG undefined FUN_143e2c918(void)

void FUN_143e2c918(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_143e2c967;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143e2c967:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e2c97f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143e2c992 FUN_143e2c992 body=132 status=ok
// SIG undefined FUN_143e2c992(void)

undefined8 * FUN_143e2c992(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143e2c9e3;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143e2c9e3:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e2ca16 FUN_143e2ca16 body=122 status=ok
// SIG undefined FUN_143e2ca16(void)

void FUN_143e2ca16(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_143e2ca65;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143e2ca65:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e2ca7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143e2ca90 FUN_143e2ca90 body=132 status=ok
// SIG undefined FUN_143e2ca90(void)

undefined8 * FUN_143e2ca90(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143e2cae1;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143e2cae1:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e2cb14 FUN_143e2cb14 body=68 status=ok
// SIG undefined FUN_143e2cb14(void)

undefined8 * FUN_143e2cb14(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4290d0;
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



// FUNCTION 143e2cb58 FUN_143e2cb58 body=68 status=ok
// SIG undefined FUN_143e2cb58(void)

undefined8 * FUN_143e2cb58(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b429180;
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



// FUNCTION 143e2cb9c FUN_143e2cb9c body=122 status=ok
// SIG undefined FUN_143e2cb9c(void)

void FUN_143e2cb9c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_143e2cbeb;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143e2cbeb:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e2cc03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143e2cc16 FUN_143e2cc16 body=68 status=ok
// SIG undefined FUN_143e2cc16(void)

undefined8 * FUN_143e2cc16(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b429270;
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



// FUNCTION 143e2cc5a FUN_143e2cc5a body=122 status=ok
// SIG undefined FUN_143e2cc5a(void)

void FUN_143e2cc5a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_143e2cca9;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143e2cca9:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e2ccc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143e2ccd4 FUN_143e2ccd4 body=132 status=ok
// SIG undefined FUN_143e2ccd4(void)

undefined8 * FUN_143e2ccd4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143e2cd25;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143e2cd25:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e2cd58 FUN_143e2cd58 body=122 status=ok
// SIG undefined FUN_143e2cd58(void)

void FUN_143e2cd58(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_143e2cda7;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143e2cda7:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e2cdbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143e2cdd2 FUN_143e2cdd2 body=132 status=ok
// SIG undefined FUN_143e2cdd2(void)

undefined8 * FUN_143e2cdd2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143e2ce23;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143e2ce23:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e2ce56 FUN_143e2ce56 body=167 status=ok
// SIG undefined FUN_143e2ce56(void)

undefined8 FUN_143e2ce56(longlong param_1)

{
  float fVar1;
  undefined7 uVar3;
  undefined8 uVar2;
  bool bVar4;
  undefined1 auStack_48 [40];
  float local_20;
  char local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14897fdf0(param_1,&local_20);
  if (local_1c != '\x01') {
switchD_143e2ce9a_default:
    uVar2 = 0;
    goto LAB_143e2cee0;
  }
  uVar3 = (undefined7)
          ((ulonglong)
           ((longlong)&switchD_143e2ce9a::switchdataD_14b42ac40 +
           (longlong)(int)(&switchD_143e2ce9a::switchdataD_14b42ac40)[*(byte *)(param_1 + 0x71) - 1]
           ) >> 8);
  switch((uint)*(byte *)(param_1 + 0x71)) {
  case 1:
    fVar1 = *(float *)(param_1 + 0x98);
    bVar4 = local_20 < *(float *)(param_1 + 0x98);
    break;
  case 2:
    bVar4 = local_20 < *(float *)(param_1 + 0x98);
    goto LAB_143e2cedd;
  case 3:
    fVar1 = *(float *)(param_1 + 0x98);
    bVar4 = fVar1 < local_20;
    break;
  case 4:
    bVar4 = *(float *)(param_1 + 0x98) < local_20;
LAB_143e2cedd:
    uVar2 = CONCAT71(uVar3,!bVar4);
    goto LAB_143e2cee0;
  default:
    goto switchD_143e2ce9a_default;
  }
  uVar2 = CONCAT71(uVar3,!bVar4 && fVar1 != local_20);
LAB_143e2cee0:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 143e2cf1a FUN_143e2cf1a body=122 status=ok
// SIG undefined FUN_143e2cf1a(void)

void FUN_143e2cf1a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_143e2cf69;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143e2cf69:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e2cf81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143e2cf94 FUN_143e2cf94 body=132 status=ok
// SIG undefined FUN_143e2cf94(void)

undefined8 * FUN_143e2cf94(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143e2cfe5;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143e2cfe5:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e2d024 FUN_143e2d024 body=122 status=ok
// SIG undefined FUN_143e2d024(void)

void FUN_143e2d024(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_143e2d073;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143e2d073:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e2d08b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143e2d09e FUN_143e2d09e body=132 status=ok
// SIG undefined FUN_143e2d09e(void)

undefined8 * FUN_143e2d09e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143e2d0ef;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143e2d0ef:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e2d122 FUN_143e2d122 body=122 status=ok
// SIG undefined FUN_143e2d122(void)

void FUN_143e2d122(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_143e2d171;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143e2d171:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e2d189. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143e2d19c FUN_143e2d19c body=132 status=ok
// SIG undefined FUN_143e2d19c(void)

undefined8 * FUN_143e2d19c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143e2d1ed;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143e2d1ed:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e2d220 FUN_143e2d220 body=122 status=ok
// SIG undefined FUN_143e2d220(void)

void FUN_143e2d220(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_143e2d26f;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143e2d26f:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e2d287. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143e2d29a FUN_143e2d29a body=132 status=ok
// SIG undefined FUN_143e2d29a(void)

undefined8 * FUN_143e2d29a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143e2d2eb;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143e2d2eb:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e2d31e FUN_143e2d31e body=132 status=ok
// SIG undefined FUN_143e2d31e(void)

undefined8 * FUN_143e2d31e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143e2d36f;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143e2d36f:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e2d3a2 FUN_143e2d3a2 body=68 status=ok
// SIG undefined FUN_143e2d3a2(void)

undefined8 * FUN_143e2d3a2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b429b40;
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



// FUNCTION 143e2d402 FUN_143e2d402 body=122 status=ok
// SIG undefined FUN_143e2d402(void)

void FUN_143e2d402(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_143e2d451;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143e2d451:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e2d469. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143e2d47c FUN_143e2d47c body=132 status=ok
// SIG undefined FUN_143e2d47c(void)

undefined8 * FUN_143e2d47c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143e2d4cd;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143e2d4cd:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e2d500 FUN_143e2d500 body=68 status=ok
// SIG undefined FUN_143e2d500(void)

undefined8 * FUN_143e2d500(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b429bf0;
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



// FUNCTION 143e2d560 FUN_143e2d560 body=122 status=ok
// SIG undefined FUN_143e2d560(void)

void FUN_143e2d560(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_143e2d5af;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143e2d5af:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e2d5c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143e2d5da FUN_143e2d5da body=132 status=ok
// SIG undefined FUN_143e2d5da(void)

undefined8 * FUN_143e2d5da(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143e2d62b;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143e2d62b:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e2d67a FUN_143e2d67a body=31 status=ok
// SIG undefined FUN_143e2d67a(void)

undefined8 FUN_143e2d67a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e2d734 FUN_143e2d734 body=85 status=ok
// SIG undefined FUN_143e2d734(void)

undefined8 * FUN_143e2d734(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42a000;
  plVar2 = (longlong *)param_1[6];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
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



// FUNCTION 143e2d78e FUN_143e2d78e body=81 status=ok
// SIG undefined FUN_143e2d78e(void)

undefined8 FUN_143e2d78e(longlong param_1)

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



// FUNCTION 143e2d7e4 FUN_143e2d7e4 body=89 status=ok
// SIG undefined FUN_143e2d7e4(void)

bool FUN_143e2d7e4(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143e2d82f;
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
LAB_143e2d82f:
  return lVar6 == param_2;
}



// FUNCTION 143e2d85a FUN_143e2d85a body=135 status=ok
// SIG undefined FUN_143e2d85a(void)

void FUN_143e2d85a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a8e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42a000;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143e2d8e2 FUN_143e2d8e2 body=135 status=ok
// SIG undefined FUN_143e2d8e2(void)

void FUN_143e2d8e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a8e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42a000;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143e2d96a FUN_143e2d96a body=173 status=ok
// SIG undefined FUN_143e2d96a(void)

void FUN_143e2d96a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b42a8e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42a000;
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
  lVar2 = *(longlong *)(param_1 + 0x30);
  p_Var1[1].Type = (short)lVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e2da07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e2da18 FUN_143e2da18 body=63 status=ok
// SIG undefined FUN_143e2da18(void)

void FUN_143e2da18(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  FUN_143e2dab6(param_1 + 0x28);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e2da58 FUN_143e2da58 body=93 status=ok
// SIG undefined FUN_143e2da58(void)

undefined8 FUN_143e2da58(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_143e2dab6(param_1 + 0x28,&local_9);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e2dab6 FUN_143e2dab6 body=93 status=ok
// SIG undefined FUN_143e2dab6(void)

void FUN_143e2dab6(longlong *param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if ((*param_2 == '\x01') && (plVar3 = (longlong *)param_1[1], plVar3 != (longlong *)0x0)) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    if (*param_1 != 0) {
      FUN_14604aaec();
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
                    /* WARNING: Could not recover jumptable at 0x000143e2db01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143e2db14 FUN_143e2db14 body=31 status=ok
// SIG undefined FUN_143e2db14(void)

undefined8 FUN_143e2db14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e2db34 FUN_143e2db34 body=31 status=ok
// SIG undefined FUN_143e2db34(void)

undefined8 FUN_143e2db34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e2dbd2 FUN_143e2dbd2 body=12 status=ok
// SIG undefined FUN_143e2dbd2(void)

void FUN_143e2dbd2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e2dbdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e2dbde FUN_143e2dbde body=29 status=ok
// SIG undefined FUN_143e2dbde(void)

undefined8 FUN_143e2dbde(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e2dbfc FUN_143e2dbfc body=19 status=ok
// SIG undefined FUN_143e2dbfc(void)

undefined1 FUN_143e2dbfc(undefined8 *param_1)

{
  FUN_143e2b600(*param_1);
  return 1;
}



// FUNCTION 143e2dc3a FUN_143e2dc3a body=29 status=ok
// SIG undefined FUN_143e2dc3a(void)

undefined8 FUN_143e2dc3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e2dc58 FUN_143e2dc58 body=91 status=ok
// SIG undefined FUN_143e2dc58(void)

undefined8 FUN_143e2dc58(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_1;
  uVar1 = *(uint *)param_1[1];
  uVar2 = *(uint *)(lVar3 + 0x2c);
  if (uVar2 != uVar1) {
    if (((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(**(longlong **)(param_2 + 0x10) + 0x30))) &&
       (lVar4 = (ulonglong)uVar2 * 0xa0 + *(longlong *)(**(longlong **)(param_2 + 0x10) + 0x28),
       lVar4 != 0)) {
      FUN_1410bda94(lVar3,lVar4,param_2);
    }
    *(uint *)(lVar3 + 0x2c) = uVar1;
    FUN_143e2b7d4(lVar3,param_2);
  }
  return 1;
}



// FUNCTION 143e2dcde FUN_143e2dcde body=29 status=ok
// SIG undefined FUN_143e2dcde(void)

undefined8 FUN_143e2dcde(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e2dcfc FUN_143e2dcfc body=64 status=ok
// SIG undefined FUN_143e2dcfc(void)

undefined4 FUN_143e2dcfc(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = param_1[1];
  uVar2 = (**(code **)(*(longlong *)*param_1 + 0x18))();
  if ((char)uVar2 != '\0') {
    FUN_143e2b6bc(lVar1,*param_1 + 0x30,param_2);
  }
  return uVar2;
}



// FUNCTION 143e2dd66 FUN_143e2dd66 body=29 status=ok
// SIG undefined FUN_143e2dd66(void)

undefined8 FUN_143e2dd66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e2dd84 FUN_143e2dd84 body=34 status=ok
// SIG undefined FUN_143e2dd84(void)

bool FUN_143e2dd84(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = FUN_143e2b5a4(param_2);
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(longlong *)(lVar1 + 0x28) == 0;
  }
  return bVar2;
}



// FUNCTION 143e2dda6 FUN_143e2dda6 body=68 status=ok
// SIG undefined FUN_143e2dda6(void)

undefined8 * FUN_143e2dda6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42a550;
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



// FUNCTION 143e2ddee FUN_143e2ddee body=83 status=ok
// SIG undefined FUN_143e2ddee(void)

undefined8 FUN_143e2ddee(longlong param_1)

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



// FUNCTION 143e2de5e FUN_143e2de5e body=2741 status=ok
// SIG undefined FUN_143e2de5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e2de5e(void)

{
  uint uVar1;
  undefined1 auStack_c8 [32];
  char *local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = "AssetRegistry";
  local_a0 = 0xd;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ab30 = (ulonglong)uVar1;
  _DAT_14cb8ab50 = &PTR_LAB_14b42a7b0;
  _DAT_14cb8ab58 = 0;
  uRam000000014cb8ab60 = 0;
  CoCreateGuid((GUID *)&DAT_14cb8ab58);
  _DAT_14cb8ab50 = &PTR_FUN_14b427890;
  local_a8 = "SkillParam";
  local_a0 = 10;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ab68 = (ulonglong)uVar1;
  local_a8 = "OldValue";
  local_a0 = 8;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ab70 = (ulonglong)uVar1;
  local_a8 = "NewValue";
  local_a0 = 8;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ab78 = (ulonglong)uVar1;
  local_a8 = "Op";
  local_a0 = 2;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ab80 = (ulonglong)uVar1;
  local_a8 = "Target";
  local_a0 = 6;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ab88 = (ulonglong)uVar1;
  _DAT_14cb8ab90 = 0x47efffffe0000000;
  _DAT_14cb8ab98 = 0x47efffffe0000000;
  _DAT_14cb8aba0 = 0x47efffffe0000000;
  _DAT_14cb8aba8 = 0x47efffffe0000000;
  _DAT_14cb8abb0 = 0x47efffffe0000000;
  _DAT_14cb8abb8 = 0x47efffffe0000000;
  _DAT_14cb8abc0 = 0x47efffffe0000000;
  _DAT_14cb8abc8 = 0x47efffffe0000000;
  local_a8 = "bone";
  local_a0 = 4;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "OnStarted";
  local_a0 = 9;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8abd0 = (ulonglong)uVar1;
  local_a8 = "OnStopped";
  local_a0 = 9;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8abd8 = (ulonglong)uVar1;
  local_a8 = "OnHeld";
  local_a0 = 6;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8abe0 = (ulonglong)uVar1;
  local_a8 = "OnTapped";
  local_a0 = 8;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8abe8 = (ulonglong)uVar1;
  local_a8 = "gbx_skill_library_component";
  local_a0 = 0x1b;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8abf0 = (ulonglong)uVar1;
  local_a8 = "GetEntryValue";
  local_a0 = 0xd;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8abf8 = (ulonglong)uVar1;
  DAT_14cb8ac60 = 0;
  uRam000000014cb8ac68 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143e2c70a;
  local_a8 = &DAT_14011fc1e;
  FUN_1460f788a(&local_a8);
  atexit((_func_5014 *)&LAB_143e288a0);
  _DAT_14cb8acf8 = &LAB_143e288a5;
  _DAT_14cb8ad00 = 0x4434128f;
  DAT_14cb8ad04 = 1;
  DAT_14cb8acf0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8acf0;
  atexit((_func_5014 *)&LAB_143e288aa);
  local_a8 = "InterpColor";
  local_a0 = 0xb;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ad10 = (ulonglong)uVar1;
  local_a8 = "InterpScalar";
  local_a0 = 0xc;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ad18 = (ulonglong)uVar1;
  local_a8 = "MaterialID";
  local_a0 = 10;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ad20 = (ulonglong)uVar1;
  local_a8 = "ResourcePool";
  local_a0 = 0xc;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ad28 = (ulonglong)uVar1;
  local_a8 = "GetCurrentValue";
  local_a0 = 0xf;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ad30 = (ulonglong)uVar1;
  local_a8 = "GetMaxValue";
  local_a0 = 0xb;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ad38 = (ulonglong)uVar1;
  local_a8 = "GetCurrentPercentage";
  local_a0 = 0x14;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ad40 = (ulonglong)uVar1;
  local_a8 = "SetCurrentValue";
  local_a0 = 0xf;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ad48 = (ulonglong)uVar1;
  local_a8 = "SetCurrentPercentage";
  local_a0 = 0x14;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ad50 = (ulonglong)uVar1;
  local_a8 = "RefillPercentage";
  local_a0 = 0x10;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ad58 = (ulonglong)uVar1;
  local_a8 = "DrainPercentage";
  local_a0 = 0xf;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ad60 = (ulonglong)uVar1;
  local_a8 = "DoTimerAction";
  local_a0 = 0xd;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ad68 = (ulonglong)uVar1;
  local_a8 = "TimerID";
  local_a0 = 7;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ad70 = (ulonglong)uVar1;
  local_a8 = "TimerAction";
  local_a0 = 0xb;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ad78 = (ulonglong)uVar1;
  local_a8 = "OnTimerStarted";
  local_a0 = 0xe;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ad80 = (ulonglong)uVar1;
  local_a8 = "OnTimerStopped";
  local_a0 = 0xe;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ad88 = (ulonglong)uVar1;
  local_a8 = "OnTimerCompleted";
  local_a0 = 0x10;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ad90 = (ulonglong)uVar1;
  local_a8 = "AdjustTimer";
  local_a0 = 0xb;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ad98 = (ulonglong)uVar1;
  local_a8 = "GetTimerStats";
  local_a0 = 0xd;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ada0 = (ulonglong)uVar1;
  _DAT_14cb8ada8 = 0;
  uRam000000014cb8adb0 = 0;
  _DAT_14cb8adb8 = 0;
  DAT_14cb8adc0 = 0;
  uRam000000014cb8adc8 = 0;
  FUN_1446ddda2(&DAT_14cb8ada8,&DAT_149e54500,0);
  atexit((_func_5014 *)&LAB_143e290bc);
  _DAT_14cb8add0 = 0;
  uRam000000014cb8add8 = 0;
  _DAT_14cb8ade0 = 0;
  DAT_14cb8ade8 = 0;
  uRam000000014cb8adf0 = 0;
  FUN_1446ddda2(&DAT_14cb8add0,"Value",0);
  atexit((_func_5014 *)&LAB_143e290cd);
  local_a8 = "Execute";
  local_a0 = 7;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8adf8 = (ulonglong)uVar1;
  local_a8 = "Stop";
  local_a0 = 4;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8ae00 = (ulonglong)uVar1;
  local_a8 = "Execute";
  local_a0 = 7;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8ae08 = (ulonglong)uVar1;
  local_a8 = "Stop";
  local_a0 = 4;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8ae10 = (ulonglong)uVar1;
  local_a8 = "SkillItemID";
  local_a0 = 0xb;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ae18 = (ulonglong)uVar1;
  local_a8 = "RandomSeed";
  local_a0 = 10;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ae20 = (ulonglong)uVar1;
  local_a8 = "StopCodes";
  local_a0 = 9;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ae28 = (ulonglong)uVar1;
  local_a8 = "Exec";
  local_a0 = 4;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ae30 = (ulonglong)uVar1;
  local_a8 = "Custom";
  local_a0 = 6;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8ae38 = (ulonglong)uVar1;
  local_a8 = "Primary";
  local_a0 = 7;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8ae40 = (ulonglong)uVar1;
  local_a8 = "Secondary";
  local_a0 = 9;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8ae48 = (ulonglong)uVar1;
  local_a8 = "Tertiary";
  local_a0 = 8;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8ae50 = (ulonglong)uVar1;
  local_a8 = "MarkInterruptible";
  local_a0 = 0x11;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8ae78 = (ulonglong)uVar1;
  local_a8 = "SkillScript";
  local_a0 = 0xb;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ae58 = (ulonglong)uVar1;
  local_a8 = "SkillDef";
  local_a0 = 8;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb8ae68 = (ulonglong)uVar1;
  local_a8 = "ActionID";
  local_a0 = 8;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ae60 = (ulonglong)uVar1;
  local_a8 = "ScriptID";
  local_a0 = 8;
  local_9c = 0;
  uVar1 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb8ae70 = (ulonglong)uVar1;
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e2e914 FUN_143e2e914 body=41 status=ok
// SIG undefined FUN_143e2e914(void)

void FUN_143e2e914(void)

{
  DAT_14cb8aed8 = 0;
  if (DAT_14cb8aed0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d678dc();
  return;
}



// FUNCTION 143e2e942 FUN_143e2e942 body=137 status=ok
// SIG undefined FUN_143e2e942(void)

void FUN_143e2e942(longlong param_1,undefined1 param_2,byte *param_3)

{
  char cVar1;
  longlong lVar2;
  byte bVar3;
  
  if (param_1 == 0) {
    bVar3 = 0;
    goto switchD_143e2e969_caseD_0;
  }
  bVar3 = 1;
  switch(param_2) {
  case 0:
    break;
  case 1:
    bVar3 = ~*(byte *)(param_1 + 0x248);
    goto LAB_143e2e9bd;
  case 2:
    bVar3 = *(byte *)(param_1 + 0x248);
LAB_143e2e9bd:
    bVar3 = bVar3 & 1;
    break;
  case 3:
    if ((*(byte *)(param_1 + 0x248) & 1) != 0) goto switchD_143e2e969_caseD_4;
    break;
  case 4:
switchD_143e2e969_caseD_4:
    *param_3 = 0;
    if (*(longlong *)(param_1 + 0x88) == 0) {
      return;
    }
    if (*(longlong **)(param_1 + 0x90) == (longlong *)0x0) {
      return;
    }
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 8))();
    if (lVar2 == 0) {
      return;
    }
    cVar1 = FUN_14124e3da(lVar2);
    if (cVar1 == '\0') {
      return;
    }
    break;
  default:
    goto switchD_143e2e969_default;
  }
switchD_143e2e969_caseD_0:
  *param_3 = bVar3;
switchD_143e2e969_default:
  return;
}



// FUNCTION 143e2e9cc FUN_143e2e9cc body=1586 status=ok
// SIG undefined FUN_143e2e9cc(void)

void FUN_143e2e9cc(char param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 ****ppppuVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  undefined8 ***local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 == '\0') {
    if (param_2 == (longlong *)0x0) goto LAB_143e2ecb4;
    if (DAT_14cb63988 == 0) {
      local_80 = &local_68;
      local_68 = FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_14081d0ea;
      local_88 = &LAB_1486f5f94;
      local_90 = (code *)&LAB_14106aa88;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10000000;
      local_b0 = 8;
      local_b8 = 0x250;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkill",&DAT_14cb63988,FUN_1464fe9ca);
    }
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14cb63988 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cb63988 + 0x38) * 8) !=
        DAT_14cb63988 + 0x30)) goto LAB_143e2ecb4;
    FUN_140c5894c(&local_68,param_5);
    FUN_14101bbec(param_2,param_4,&local_68);
  }
  else {
    if (param_1 == '\x01') {
      if (param_2 != (longlong *)0x0) {
        if (DAT_14cb652c0 == 0) {
          local_80 = &local_68;
          local_68 = FUN_1449e2820;
          local_70 = FUN_14081d0ea;
          local_78 = FUN_1427b09ee;
          local_88 = &LAB_148715fe1;
          local_90 = FUN_146508b0f;
          local_98 = L"Engine";
          local_a0 = 0;
          local_a8 = 0x10004001;
          local_b0 = 8;
          local_b8 = 0x28;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
        }
        plVar4 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,DAT_14cb652c0);
        if (plVar4 != (longlong *)0x0) {
          if (DAT_14cb652c0 == 0) {
            local_80 = &local_68;
            local_68 = FUN_1449e2820;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_1427b09ee;
            local_88 = &LAB_148715fe1;
            local_90 = FUN_146508b0f;
            local_98 = L"Engine";
            local_a0 = 0;
            local_a8 = 0x10004001;
            local_b0 = 8;
            local_b8 = 0x28;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
          }
          plVar5 = (longlong *)FUN_144718840(plVar4,DAT_14cb652c0);
          if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
            lVar8 = (**(code **)(*plVar5 + 0x10))(plVar5);
            lVar6 = param_3[1];
            if (lVar6 == 0) {
              uVar7 = FUN_140feeb70();
              lVar6 = FUN_14477b664(uVar7);
              param_3[1] = lVar6;
            }
            lVar9 = param_3[2];
            if (((lVar9 == 0) && (lVar9 = 0, lVar6 != 0)) && (*param_3 != 0)) {
              plVar4 = *(longlong **)(lVar6 + 0xb8);
              if ((plVar4 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar3 == '\0')) {
                lVar9 = 0;
              }
              else {
                uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
                lVar9 = FUN_144aff482(uVar7,param_3);
              }
              param_3[2] = lVar9;
            }
            if (((*(byte *)(lVar8 + 0x20c) & 1) == 0) && ((longlong)*(int *)(lVar8 + 0x40) != 0)) {
              lVar6 = 0;
              do {
                lVar1 = *(longlong *)(*(longlong *)(lVar8 + 0x38) + lVar6);
                if (((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) &&
                   (*(longlong *)(lVar1 + 0xa8) == lVar9)) {
                  if ((*(byte *)(lVar1 + 0x248) & 2) != 0) {
                    FUN_140c5894c(&local_68,param_5);
                    FUN_14101bbec(lVar1,param_4,&local_68);
                    goto LAB_143e2ec75;
                  }
                  break;
                }
                lVar6 = lVar6 + 8;
              } while ((longlong)*(int *)(lVar8 + 0x40) * 8 != lVar6);
            }
          }
        }
      }
      goto LAB_143e2ecb4;
    }
    if ((param_1 != '\x02') || (param_2 == (longlong *)0x0)) goto LAB_143e2ecb4;
    if (DAT_14cb652c0 == 0) {
      local_80 = &local_68;
      local_68 = FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_1427b09ee;
      local_88 = &LAB_148715fe1;
      local_90 = FUN_146508b0f;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10004001;
      local_b0 = 8;
      local_b8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
    }
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,DAT_14cb652c0);
    if (plVar4 == (longlong *)0x0) goto LAB_143e2ecb4;
    if (DAT_14cb652c0 == 0) {
      local_80 = &local_68;
      local_68 = FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_1427b09ee;
      local_88 = &LAB_148715fe1;
      local_90 = FUN_146508b0f;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10004001;
      local_b0 = 8;
      local_b8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
    }
    plVar5 = (longlong *)FUN_144718840(plVar4,DAT_14cb652c0);
    if (plVar5 == (longlong *)0x0 || plVar4 == plVar5) goto LAB_143e2ecb4;
    lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_140c5894c(&local_68,param_5);
    uVar7 = (**(code **)(*(longlong *)(lVar6 + 0x1a8) + 0x30))(lVar6 + 0x1a8,param_4);
    FUN_14101bc7a(lVar6 + 0x1a8,uVar7,&local_68);
  }
LAB_143e2ec75:
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar10 = (undefined8 ****)local_60[0];
    if (local_48 < 0x19) {
      ppppuVar10 = local_60;
    }
    (*pcVar2)(ppppuVar10);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
LAB_143e2ecb4:
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e2f022 FUN_143e2f022 body=3 status=ok
// SIG undefined FUN_143e2f022(void)

undefined8 FUN_143e2f022(void)

{
  return 0;
}



// FUNCTION 143e2f026 FUN_143e2f026 body=3 status=ok
// SIG undefined FUN_143e2f026(void)

undefined8 FUN_143e2f026(void)

{
  return 0;
}



// FUNCTION 143e2f034 FUN_143e2f034 body=405 status=ok
// SIG undefined FUN_143e2f034(void)

ulonglong FUN_143e2f034(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      local_40 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      local_40 = plVar5;
    }
    local_50 = param_2;
    local_48 = lVar4;
    FUN_140f360c6(lVar4,&local_38,&local_50);
    plVar1 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
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
    uVar6 = CONCAT71((int7)((ulonglong)plVar5 >> 8),local_38 != 0);
    if (local_38 != 0) {
      FUN_1489858e6(local_38 + 0x18,param_3);
      lVar4 = *param_3;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      plVar5 = *(longlong **)(lVar4 + 0x10);
      *(longlong *)(lVar4 + 8) = local_38;
      *(longlong **)(lVar4 + 0x10) = local_30;
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
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e2f1ca FUN_143e2f1ca body=466 status=ok
// SIG undefined FUN_143e2f1ca(void)

ulonglong FUN_143e2f1ca(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 8);
  local_44 = param_4;
  if (lVar5 == 0) {
    uVar8 = 0;
  }
  else {
    plVar6 = *(longlong **)(param_1 + 0x10);
    if (plVar6 == (longlong *)0x0) {
      local_60 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      local_60 = plVar6;
    }
    local_70 = param_2;
    local_68 = lVar5;
    FUN_140f360c6(lVar5,&local_58,&local_70);
    plVar1 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_60 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
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
    plVar1 = local_50;
    lVar5 = local_58;
    uVar8 = CONCAT71((int7)((ulonglong)plVar6 >> 8),local_58 != 0);
    if (local_58 != 0) {
      lVar7 = *param_3;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      iVar4 = *(int *)(lVar7 + 0x10);
      *(uint *)(lVar7 + 0x10) = iVar4 + 1U;
      if (*(uint *)(lVar7 + 0x14) < iVar4 + 1U) {
        FUN_140f36142((longlong *)(lVar7 + 8),iVar4);
      }
      lVar7 = *(longlong *)(lVar7 + 8);
      *(longlong *)(lVar7 + (longlong)iVar4 * 0x10) = lVar5;
      *(longlong **)(lVar7 + 8 + (longlong)iVar4 * 0x10) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
        UNLOCK();
        LOCK();
        plVar6 = plVar1 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      local_70 = CONCAT44(local_70._4_4_,iVar4);
      FUN_148985a0c(local_58 + 0x18,param_3,&local_70,&local_44);
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_50 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e2f39e FUN_143e2f39e body=3397 status=ok
// SIG undefined FUN_143e2f39e(void)

void FUN_143e2f39e(longlong param_1,longlong param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined4 *puVar22;
  longlong lVar23;
  undefined4 *puVar24;
  bool bVar25;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  uint local_68;
  int local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    lVar8 = FUN_140fd15b6();
    if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
       (lVar8 = *(longlong *)(param_2 + 0x28), lVar8 != 0)) {
      local_78 = param_1;
      if ((longlong)*(int *)(param_1 + 0x30) != 0) {
        lVar23 = *(longlong *)(param_1 + 0x28);
        lVar21 = (longlong)*(int *)(param_1 + 0x30) * 0x30;
        do {
          FUN_140df52d6(lVar8,&local_58);
          if (CONCAT44(iStack_54,local_58) != 0) {
            local_5c = 0;
            local_64 = 0;
            uStack_60 = 0;
            local_68 = *(uint *)(param_2 + 0xc);
            if ((int)local_68 < DAT_14c9647dc) {
              lVar19 = (ulonglong)((local_68 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_68 >> 0x10) * 8);
            }
            else {
              lVar19 = 0;
            }
            iVar7 = *(int *)(lVar19 + 0x10);
            if (*(int *)(lVar19 + 0x10) == 0) {
              LOCK();
              iVar7 = DAT_14c964868 + 1;
              UNLOCK();
              iVar16 = DAT_14c964868 + 1;
              bVar25 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar7;
              if (bVar25) {
                local_80 = (longlong *)CONCAT44(local_80._4_4_,iVar16);
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar16);
                iVar16 = (int)local_80;
              }
              LOCK();
              iVar7 = *(int *)(lVar19 + 0x10);
              bVar25 = iVar7 == 0;
              if (bVar25) {
                *(int *)(lVar19 + 0x10) = iVar16;
                iVar7 = 0;
              }
              UNLOCK();
              if (bVar25) {
                iVar7 = iVar16;
              }
            }
            uStack_60 = (undefined4)*(undefined8 *)(lVar23 + 0x28);
            local_5c = (undefined4)((ulonglong)*(undefined8 *)(lVar23 + 0x28) >> 0x20);
            local_64 = iVar7;
            (**(code **)(*(longlong *)CONCAT44(iStack_54,local_58) + 0x18))
                      ((longlong *)CONCAT44(iStack_54,local_58),lVar23);
          }
          plVar15 = (longlong *)CONCAT44(uStack_4c,local_50);
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            plVar20 = plVar15 + 1;
            *(int *)plVar20 = (int)*plVar20 + -1;
            UNLOCK();
            if ((int)*plVar20 == 0) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar2 = (int *)((longlong)plVar15 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
          lVar23 = lVar23 + 0x30;
          lVar21 = lVar21 + -0x30;
        } while (lVar21 != 0);
      }
      if ((longlong)*(int *)(local_78 + 0x40) != 0) {
        lVar21 = *(longlong *)(local_78 + 0x38);
        lVar23 = lVar21 + (longlong)*(int *)(local_78 + 0x40) * 0x28;
        do {
          uVar4 = local_50;
          uVar5 = uStack_4c;
          if (*(char *)(lVar21 + 0x24) == '\x01') {
            if ((*(byte *)(lVar8 + 0x248) & 1) == 0) goto LAB_143e2f5ae;
          }
          else if ((*(char *)(lVar21 + 0x24) != '\x02') || ((*(byte *)(lVar8 + 0x248) & 1) != 0)) {
LAB_143e2f5ae:
            uVar3 = *(uint *)(param_2 + 0xc);
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar19 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar19 = 0;
            }
            iVar7 = *(int *)(lVar19 + 0x10);
            if (*(int *)(lVar19 + 0x10) == 0) {
              LOCK();
              iVar7 = DAT_14c964868 + 1;
              UNLOCK();
              iVar16 = DAT_14c964868 + 1;
              bVar25 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar7;
              if (bVar25) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar16);
              }
              LOCK();
              iVar7 = *(int *)(lVar19 + 0x10);
              bVar25 = iVar7 == 0;
              if (bVar25) {
                *(int *)(lVar19 + 0x10) = iVar16;
                iVar7 = 0;
              }
              UNLOCK();
              if (bVar25) {
                iVar7 = iVar16;
              }
            }
            uVar11 = *(undefined8 *)(lVar21 + 0x1c);
            lVar19 = FUN_14105478e(lVar21);
            uVar5 = uStack_4c;
            uVar4 = local_50;
            if ((lVar19 != 0) && ((longlong)*(int *)(lVar8 + 0x50) != 0)) {
              plVar15 = (longlong *)(*(longlong *)(lVar8 + 0x48) + 0x20);
              lVar13 = (longlong)*(int *)(lVar8 + 0x50) * 0x90;
LAB_143e2f618:
              if (plVar15[-4] != lVar19) goto code_r0x000143e2f61e;
              if (plVar15 != (longlong *)&DAT_00000020) {
                local_50 = (undefined4)uVar11;
                uStack_4c = (undefined4)((ulonglong)uVar11 >> 0x20);
                if (*(char *)(lVar21 + 0x18) == '\x01') {
                  local_80 = plVar15 + 2;
                  local_58 = uVar3;
                  iStack_54 = iVar7;
                  FUN_1403350f6(local_80,&local_58);
                  iVar7 = (int)plVar15[3];
                  uVar4 = local_50;
                  uVar5 = uStack_4c;
                  if (0 < iVar7) {
                    lVar19 = 0;
                    bVar25 = false;
                    do {
                      while( true ) {
                        lVar13 = *local_80;
                        puVar1 = (uint *)(lVar13 + lVar19 * 0x10);
                        if ((((((*(longlong *)(lVar13 + 8 + lVar19 * 0x10) != 0) && (puVar1[1] != 0)
                               ) && (uVar3 = *puVar1, -1 < (int)uVar3)) &&
                             (((int)uVar3 < DAT_14c9647dc &&
                              (plVar20 = (longlong *)
                                         ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                                         *(longlong *)
                                          (DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                              plVar20 != (longlong *)0x0)))) &&
                            (*(uint *)(plVar20 + 2) == puVar1[1])) &&
                           (((*(uint *)(plVar20 + 1) >> 0x1c & 1) == 0 && (*plVar20 != 0)))) break;
                        iVar16 = iVar7 + ~(uint)lVar19;
                        if (iVar16 != 0) {
                          if (0 < iVar16) {
                            iVar16 = 1;
                          }
                          memmove(puVar1,(void *)(lVar13 + (longlong)(iVar7 - iVar16) * 0x10),
                                  (longlong)iVar16 << 4);
                          iVar7 = (int)plVar15[3];
                        }
                        iVar7 = iVar7 + -1;
                        *(int *)(plVar15 + 3) = iVar7;
                        bVar25 = true;
                        plVar20 = local_80;
                        if (iVar7 <= lVar19) goto LAB_143e2f856;
                      }
                      lVar19 = lVar19 + 1;
                    } while (lVar19 < iVar7);
                    plVar20 = local_80;
                    uVar4 = local_50;
                    uVar5 = uStack_4c;
                    if (bVar25) {
LAB_143e2f856:
                      FUN_1400bbcfc(plVar20);
                      uVar4 = local_50;
                      uVar5 = uStack_4c;
                    }
                  }
                }
                else if (*(char *)(lVar21 + 0x18) == '\0') {
                  local_58 = uVar3;
                  iStack_54 = iVar7;
                  FUN_1403350f6(plVar15,&local_58);
                  iVar7 = (int)plVar15[1];
                  uVar4 = local_50;
                  uVar5 = uStack_4c;
                  if (0 < iVar7) {
                    lVar19 = 0;
                    bVar25 = false;
                    do {
                      while( true ) {
                        lVar13 = *plVar15;
                        puVar1 = (uint *)(lVar13 + lVar19 * 0x10);
                        plVar20 = plVar15;
                        if ((((*(longlong *)(lVar13 + 8 + lVar19 * 0x10) != 0) && (puVar1[1] != 0))
                            && (uVar3 = *puVar1, -1 < (int)uVar3)) &&
                           ((((int)uVar3 < DAT_14c9647dc &&
                             (plVar18 = (longlong *)
                                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                                        *(longlong *)
                                         (DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                             plVar18 != (longlong *)0x0)) &&
                            ((*(uint *)(plVar18 + 2) == puVar1[1] &&
                             (((*(uint *)(plVar18 + 1) >> 0x1c & 1) == 0 && (*plVar18 != 0))))))))
                        break;
                        iVar16 = iVar7 + ~(uint)lVar19;
                        if (iVar16 != 0) {
                          if (0 < iVar16) {
                            iVar16 = 1;
                          }
                          memmove(puVar1,(void *)(lVar13 + (longlong)(iVar7 - iVar16) * 0x10),
                                  (longlong)iVar16 << 4);
                          iVar7 = (int)plVar15[1];
                        }
                        iVar7 = iVar7 + -1;
                        *(int *)(plVar15 + 1) = iVar7;
                        bVar25 = true;
                        if (iVar7 <= lVar19) goto LAB_143e2f856;
                      }
                      lVar19 = lVar19 + 1;
                    } while (lVar19 < iVar7);
                    uVar4 = local_50;
                    uVar5 = uStack_4c;
                    if (bVar25) goto LAB_143e2f856;
                  }
                }
              }
            }
          }
LAB_143e2f5a0:
          uStack_4c = uVar5;
          local_50 = uVar4;
          lVar21 = lVar21 + 0x28;
        } while (lVar21 != lVar23);
      }
      if ((longlong)*(int *)(local_78 + 0x50) != 0) {
        plVar15 = *(longlong **)(local_78 + 0x48);
        local_80 = plVar15 + (longlong)*(int *)(local_78 + 0x50) * 5;
        local_70 = lVar8 + 0x78;
        do {
          uVar3 = *(uint *)(param_2 + 0xc);
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar23 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar23 = 0;
          }
          iVar7 = *(int *)(lVar23 + 0x10);
          if (*(int *)(lVar23 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar16 = DAT_14c964868 + 1;
            bVar25 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar25) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar16);
            }
            LOCK();
            iVar7 = *(int *)(lVar23 + 0x10);
            bVar25 = iVar7 == 0;
            if (bVar25) {
              *(int *)(lVar23 + 0x10) = iVar16;
              iVar7 = 0;
            }
            UNLOCK();
            if (bVar25) {
              iVar7 = iVar16;
            }
          }
          lVar23 = plVar15[1];
          uVar11 = *(undefined8 *)((longlong)plVar15 + 0x1c);
          if (lVar23 == 0) {
            uVar9 = FUN_145c2bba6();
            lVar23 = FUN_14477b664(uVar9);
            plVar15[1] = lVar23;
          }
          lVar21 = plVar15[2];
          if (lVar21 == 0) {
            uVar4 = local_50;
            uVar5 = uStack_4c;
            if ((lVar23 != 0) && (*plVar15 != 0)) {
              plVar20 = *(longlong **)(lVar23 + 0xb8);
              if ((plVar20 == (longlong *)0x0) ||
                 (cVar6 = (**(code **)(*plVar20 + 0x108))(plVar20), cVar6 == '\0')) {
                plVar15[2] = 0;
                uVar4 = local_50;
                uVar5 = uStack_4c;
              }
              else {
                uVar9 = (**(code **)(*plVar20 + 0x110))(plVar20);
                lVar21 = FUN_144aff482(uVar9,plVar15);
                plVar15[2] = lVar21;
                uVar4 = local_50;
                uVar5 = uStack_4c;
                if (lVar21 != 0) goto LAB_143e2f937;
              }
            }
          }
          else {
LAB_143e2f937:
            lVar23 = plVar15[3];
            lVar21 = FUN_140fadb50(local_70,lVar21);
            uVar5 = uStack_4c;
            uVar4 = local_50;
            local_50 = (undefined4)uVar11;
            uStack_4c = (undefined4)((ulonglong)uVar11 >> 0x20);
            if ((char)lVar23 == '\0') {
              plVar20 = (longlong *)(lVar21 + 0x20);
              local_58 = uVar3;
              iStack_54 = iVar7;
              FUN_1403350f6(plVar20,&local_58);
              iVar7 = *(int *)(lVar21 + 0x28);
              uVar4 = local_50;
              uVar5 = uStack_4c;
              if (0 < iVar7) {
                lVar23 = 0;
                bVar25 = false;
                do {
                  while( true ) {
                    lVar19 = *plVar20;
                    puVar1 = (uint *)(lVar19 + lVar23 * 0x10);
                    if (((((*(longlong *)(lVar19 + 8 + lVar23 * 0x10) != 0) && (puVar1[1] != 0)) &&
                         (uVar3 = *puVar1, -1 < (int)uVar3)) &&
                        (((int)uVar3 < DAT_14c9647dc &&
                         (plVar18 = (longlong *)
                                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                         plVar18 != (longlong *)0x0)))) &&
                       ((*(uint *)(plVar18 + 2) == puVar1[1] &&
                        (((*(uint *)(plVar18 + 1) >> 0x1c & 1) == 0 && (*plVar18 != 0)))))) break;
                    iVar16 = iVar7 + ~(uint)lVar23;
                    if (iVar16 != 0) {
                      if (0 < iVar16) {
                        iVar16 = 1;
                      }
                      memmove(puVar1,(void *)(lVar19 + (longlong)(iVar7 - iVar16) * 0x10),
                              (longlong)iVar16 << 4);
                      iVar7 = *(int *)(lVar21 + 0x28);
                    }
                    iVar7 = iVar7 + -1;
                    *(int *)(lVar21 + 0x28) = iVar7;
                    bVar25 = true;
                    if (iVar7 <= lVar23) goto LAB_143e2fbe5;
                  }
                  lVar23 = lVar23 + 1;
                } while (lVar23 < iVar7);
LAB_143e2fbb8:
                uVar4 = local_50;
                uVar5 = uStack_4c;
                if (bVar25) {
LAB_143e2fbe5:
                  FUN_1400bbcfc(plVar20);
                  uVar4 = local_50;
                  uVar5 = uStack_4c;
                }
              }
            }
            else if ((char)lVar23 == '\x01') {
              plVar20 = (longlong *)(lVar21 + 0x30);
              local_58 = uVar3;
              iStack_54 = iVar7;
              FUN_1403350f6(plVar20,&local_58);
              iVar7 = *(int *)(lVar21 + 0x38);
              uVar4 = local_50;
              uVar5 = uStack_4c;
              if (0 < iVar7) {
                lVar23 = 0;
                bVar25 = false;
                do {
                  while( true ) {
                    lVar19 = *plVar20;
                    puVar1 = (uint *)(lVar19 + lVar23 * 0x10);
                    if ((((*(longlong *)(lVar19 + 8 + lVar23 * 0x10) != 0) && (puVar1[1] != 0)) &&
                        (uVar3 = *puVar1, -1 < (int)uVar3)) &&
                       ((((int)uVar3 < DAT_14c9647dc &&
                         (plVar18 = (longlong *)
                                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                         plVar18 != (longlong *)0x0)) &&
                        ((*(uint *)(plVar18 + 2) == puVar1[1] &&
                         (((*(uint *)(plVar18 + 1) >> 0x1c & 1) == 0 && (*plVar18 != 0))))))))
                    break;
                    iVar16 = iVar7 + ~(uint)lVar23;
                    if (iVar16 != 0) {
                      if (0 < iVar16) {
                        iVar16 = 1;
                      }
                      memmove(puVar1,(void *)(lVar19 + (longlong)(iVar7 - iVar16) * 0x10),
                              (longlong)iVar16 << 4);
                      iVar7 = *(int *)(lVar21 + 0x38);
                    }
                    iVar7 = iVar7 + -1;
                    *(int *)(lVar21 + 0x38) = iVar7;
                    bVar25 = true;
                    if (iVar7 <= lVar23) goto LAB_143e2fbe5;
                  }
                  lVar23 = lVar23 + 1;
                } while (lVar23 < iVar7);
                goto LAB_143e2fbb8;
              }
            }
          }
          uStack_4c = uVar5;
          local_50 = uVar4;
          plVar15 = plVar15 + 5;
        } while (plVar15 != local_80);
      }
      iVar7 = *(int *)(local_78 + 0x60);
      if ((longlong)iVar7 != 0) {
        lVar23 = *(longlong *)(local_78 + 0x58);
        lVar21 = 0;
        do {
          lVar19 = *(longlong *)(lVar23 + lVar21);
          if (lVar19 != 0) {
            local_58 = 0x4b42aec0;
            iStack_54 = 1;
            local_50 = (undefined4)lVar19;
            uStack_4c = (undefined4)((ulonglong)lVar19 >> 0x20);
            lVar19 = FUN_140f7dc1c(lVar8,&local_58);
            puVar10 = (undefined8 *)FUN_140e84b06(lVar19 + 0x50);
            *puVar10 = *(undefined8 *)(lVar23 + 0x1c + lVar21);
            *(undefined1 *)(puVar10 + 1) = *(undefined1 *)(lVar23 + 0x18 + lVar21);
            *(undefined1 *)(puVar10 + 4) = *(undefined1 *)(lVar23 + 0x19 + lVar21);
            if (*(int *)(puVar10 + 3) != 3) {
              FUN_1446efa72(puVar10 + 2,0,3,0x10);
              *(undefined4 *)(puVar10 + 3) = 3;
            }
            puVar10 = (undefined8 *)puVar10[2];
            *puVar10 = &PTR_LAB_14b42b3d0;
            LOCK();
            UNLOCK();
            lVar13 = DAT_14c758608 + 1;
            lVar19 = DAT_14c758608 + 1;
            if (lVar13 == 0) {
              LOCK();
              UNLOCK();
              lVar13 = DAT_14c758608 + 2;
              lVar19 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar19;
            puVar10[2] = lVar13;
            *puVar10 = &PTR_FUN_14b42b360;
            puVar10[3] = 0;
            uVar3 = *(uint *)(param_2 + 0xc);
            *(uint *)(puVar10 + 3) = uVar3;
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar19 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar19 = 0;
            }
            iVar16 = *(int *)(lVar19 + 0x10);
            if (*(int *)(lVar19 + 0x10) == 0) {
              LOCK();
              iVar16 = DAT_14c964868 + 1;
              UNLOCK();
              iVar17 = DAT_14c964868 + 1;
              bVar25 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar16;
              if (bVar25) {
                local_80 = (longlong *)CONCAT44(local_80._4_4_,iVar17);
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar17);
                iVar17 = (int)local_80;
              }
              LOCK();
              iVar16 = *(int *)(lVar19 + 0x10);
              bVar25 = iVar16 == 0;
              if (bVar25) {
                *(int *)(lVar19 + 0x10) = iVar17;
                iVar16 = 0;
              }
              UNLOCK();
              if (bVar25) {
                iVar16 = iVar17;
              }
            }
            *(int *)((longlong)puVar10 + 0x1c) = iVar16;
            puVar10[4] = FUN_140f86380;
          }
          lVar21 = lVar21 + 0x28;
        } while ((longlong)iVar7 * 0x28 != lVar21);
      }
      iVar7 = *(int *)(local_78 + 0x70);
      if ((longlong)iVar7 != 0) {
        lVar23 = *(longlong *)(local_78 + 0x68);
        lVar21 = 0;
        do {
          cVar6 = *(char *)(lVar23 + 0x10 + lVar21);
          if (cVar6 == '\x01') {
            if ((*(byte *)(lVar8 + 0x248) & 1) == 0) goto LAB_143e2fe2a;
          }
          else if ((cVar6 != '\x02') || ((*(byte *)(lVar8 + 0x248) & 1) != 0)) {
LAB_143e2fe2a:
            lVar19 = *(longlong *)(lVar23 + lVar21);
            if (lVar19 != 0) {
              uStack_4c = 0;
              iStack_54 = 0;
              local_50 = 0;
              local_58 = *(uint *)(param_2 + 0xc);
              if ((int)local_58 < DAT_14c9647dc) {
                lVar13 = (ulonglong)((local_58 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_58 >> 0x10) * 8);
              }
              else {
                lVar13 = 0;
              }
              iVar16 = *(int *)(lVar13 + 0x10);
              if (*(int *)(lVar13 + 0x10) == 0) {
                LOCK();
                iVar16 = DAT_14c964868 + 1;
                UNLOCK();
                iVar17 = DAT_14c964868 + 1;
                bVar25 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar16;
                if (bVar25) {
                  local_80 = (longlong *)CONCAT44(local_80._4_4_,iVar17);
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar17);
                  iVar17 = (int)local_80;
                }
                LOCK();
                iVar16 = *(int *)(lVar13 + 0x10);
                bVar25 = iVar16 == 0;
                if (bVar25) {
                  *(int *)(lVar13 + 0x10) = iVar17;
                  iVar16 = 0;
                }
                UNLOCK();
                if (bVar25) {
                  iVar16 = iVar17;
                }
              }
              uVar11 = *(undefined8 *)(lVar23 + 8 + lVar21);
              local_50 = (undefined4)uVar11;
              uStack_4c = (undefined4)((ulonglong)uVar11 >> 0x20);
              iStack_54 = iVar16;
              FUN_1458433da(lVar8,lVar19,&local_58);
            }
          }
          lVar21 = lVar21 + 0x18;
        } while ((longlong)iVar7 * 0x18 != lVar21);
      }
      if ((longlong)*(int *)(local_78 + 0x80) != 0) {
        puVar22 = *(undefined4 **)(local_78 + 0x78);
        puVar14 = puVar22 + (longlong)*(int *)(local_78 + 0x80) * 5;
        do {
          iVar7 = *(int *)(param_2 + 0x70);
          *(uint *)(param_2 + 0x70) = iVar7 + 1U;
          if (*(uint *)(param_2 + 0x74) < iVar7 + 1U) {
            FUN_146560c06((longlong *)(param_2 + 0x68),iVar7);
          }
          lVar23 = *(longlong *)(param_2 + 0x68);
          lVar8 = lVar23 + (longlong)iVar7 * 0x20;
          FUN_143e37f39(lVar8);
          puVar24 = (undefined4 *)((longlong)iVar7 * 0x20 + lVar23);
          *puVar24 = *puVar22;
          *(undefined8 *)(puVar24 + 1) = *(undefined8 *)(puVar22 + 1);
          if (puVar24[6] != 3) {
            FUN_1446efa72(puVar24 + 4,0,3,0x10);
            *(undefined4 *)(lVar8 + 0x18) = 3;
          }
          puVar10 = *(undefined8 **)(puVar24 + 4);
          *puVar10 = &PTR_LAB_149e020b0;
          LOCK();
          UNLOCK();
          lVar23 = DAT_14c758608 + 1;
          lVar8 = DAT_14c758608 + 1;
          if (lVar23 == 0) {
            LOCK();
            UNLOCK();
            lVar23 = DAT_14c758608 + 2;
            lVar8 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar8;
          puVar10[2] = lVar23;
          *puVar10 = &PTR_FUN_14b42b440;
          puVar10[4] = *(undefined8 *)(puVar22 + 3);
          puVar10[5] = 0;
          uVar3 = *(uint *)(param_2 + 0xc);
          *(uint *)(puVar10 + 5) = uVar3;
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          iVar7 = *(int *)(lVar8 + 0x10);
          if (iVar7 == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar16 = DAT_14c964868 + 1;
            bVar25 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar25) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar16);
            }
            LOCK();
            iVar7 = *(int *)(lVar8 + 0x10);
            bVar25 = iVar7 == 0;
            if (bVar25) {
              *(int *)(lVar8 + 0x10) = iVar16;
              iVar7 = 0;
            }
            UNLOCK();
            if (bVar25) {
              iVar7 = iVar16;
            }
            *(int *)((longlong)puVar10 + 0x2c) = iVar7;
            if (iVar7 != 0) goto LAB_143e3000e;
LAB_143e300a5:
            uVar11 = 0;
          }
          else {
            *(int *)((longlong)puVar10 + 0x2c) = iVar7;
LAB_143e3000e:
            uVar3 = *(uint *)(puVar10 + 5);
            if ((int)uVar3 < 0) goto LAB_143e300a5;
            uVar11 = 0;
            if ((int)uVar3 < DAT_14c9647dc) {
              puVar12 = (undefined8 *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
              if (((puVar12 == (undefined8 *)0x0) || (*(int *)(puVar12 + 2) != iVar7)) ||
                 ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_143e300a5;
              uVar11 = *puVar12;
            }
          }
          uVar11 = FUN_14477b072(uVar11);
          puVar10[3] = uVar11;
          puVar22 = puVar22 + 5;
        } while (puVar22 != puVar14);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000143e2f61e:
  plVar15 = plVar15 + 0x12;
  lVar13 = lVar13 + -0x90;
  if (lVar13 == 0) goto LAB_143e2f5a0;
  goto LAB_143e2f618;
}



// FUNCTION 143e300e4 FUN_143e300e4 body=1276 status=ok
// SIG undefined FUN_143e300e4(void)

void FUN_143e300e4(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_98 [36];
  int local_74;
  longlong local_70;
  uint local_68;
  int local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    lVar5 = FUN_140fd15b6();
    if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
       (lVar5 = *(longlong *)(param_2 + 0x28), lVar5 != 0)) {
      local_70 = param_1;
      if ((longlong)*(int *)(param_1 + 0x30) != 0) {
        lVar14 = *(longlong *)(param_1 + 0x28);
        lVar9 = (longlong)*(int *)(param_1 + 0x30) * 0x30;
        do {
          FUN_140df52d6(lVar5,&local_58,lVar14);
          if (local_58 != (longlong *)0x0) {
            local_5c = 0;
            local_64 = 0;
            uStack_60 = 0;
            local_68 = *(uint *)(param_2 + 0xc);
            if ((int)local_68 < DAT_14c9647dc) {
              lVar13 = (ulonglong)((local_68 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_68 >> 0x10) * 8);
            }
            else {
              lVar13 = 0;
            }
            iVar4 = *(int *)(lVar13 + 0x10);
            if (*(int *)(lVar13 + 0x10) == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              iVar11 = DAT_14c964868 + 1;
              bVar16 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar16) {
                local_74 = iVar11;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar11);
                iVar11 = local_74;
              }
              LOCK();
              iVar4 = *(int *)(lVar13 + 0x10);
              bVar16 = iVar4 == 0;
              if (bVar16) {
                *(int *)(lVar13 + 0x10) = iVar11;
                iVar4 = 0;
              }
              UNLOCK();
              if (bVar16) {
                iVar4 = iVar11;
              }
            }
            uStack_60 = (undefined4)*(undefined8 *)(lVar14 + 0x28);
            local_5c = (undefined4)((ulonglong)*(undefined8 *)(lVar14 + 0x28) >> 0x20);
            local_64 = iVar4;
            (**(code **)(*local_58 + 0x20))(local_58,lVar14,&local_68);
          }
          plVar7 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar15 = local_50 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
          lVar14 = lVar14 + 0x30;
          lVar9 = lVar9 + -0x30;
        } while (lVar9 != 0);
      }
      lVar14 = local_70;
      if ((longlong)*(int *)(local_70 + 0x40) != 0) {
        lVar13 = *(longlong *)(local_70 + 0x38);
        lVar9 = lVar13 + (longlong)*(int *)(local_70 + 0x40) * 0x28;
        do {
          if (*(char *)(lVar13 + 0x24) == '\x01') {
            if ((*(byte *)(lVar5 + 0x248) & 1) == 0) goto LAB_143e302ff;
          }
          else if ((*(char *)(lVar13 + 0x24) != '\x02') || ((*(byte *)(lVar5 + 0x248) & 1) != 0)) {
LAB_143e302ff:
            uVar2 = *(uint *)(param_2 + 0xc);
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar10 = 0;
            }
            if (*(int *)(lVar10 + 0x10) == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              iVar11 = DAT_14c964868 + 1;
              bVar16 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar16) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar11);
              }
              LOCK();
              if (*(int *)(lVar10 + 0x10) == 0) {
                *(int *)(lVar10 + 0x10) = iVar11;
              }
              UNLOCK();
              lVar14 = local_70;
            }
            lVar10 = FUN_14105478e(lVar13);
            if ((lVar10 != 0) && ((longlong)*(int *)(lVar5 + 0x50) != 0)) {
              plVar7 = *(longlong **)(lVar5 + 0x48);
              lVar12 = (longlong)*(int *)(lVar5 + 0x50) * 0x90;
              do {
                if (*plVar7 == lVar10) {
                  if (plVar7 == (longlong *)0x0) break;
                  if (*(char *)(lVar13 + 0x18) == '\0') {
                    lVar10 = 0x20;
                  }
                  else {
                    if (*(char *)(lVar13 + 0x18) != '\x01') break;
                    lVar10 = 0x30;
                  }
                  FUN_1401073f6((longlong)plVar7 + lVar10,param_2);
                  break;
                }
                plVar7 = plVar7 + 0x12;
                lVar12 = lVar12 + -0x90;
              } while (lVar12 != 0);
            }
          }
          lVar13 = lVar13 + 0x28;
        } while (lVar13 != lVar9);
      }
      if ((longlong)*(int *)(lVar14 + 0x50) != 0) {
        plVar15 = *(longlong **)(lVar14 + 0x48);
        plVar7 = plVar15 + (longlong)*(int *)(lVar14 + 0x50) * 5;
        do {
          uVar2 = *(uint *)(param_2 + 0xc);
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          if (*(int *)(lVar9 + 0x10) == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            iVar11 = DAT_14c964868 + 1;
            bVar16 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar16) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar11);
            }
            LOCK();
            if (*(int *)(lVar9 + 0x10) == 0) {
              *(int *)(lVar9 + 0x10) = iVar11;
            }
            UNLOCK();
            lVar14 = local_70;
          }
          lVar9 = plVar15[1];
          if (lVar9 == 0) {
            uVar6 = FUN_145c2bba6();
            lVar9 = FUN_14477b664(uVar6);
            plVar15[1] = lVar9;
          }
          lVar13 = plVar15[2];
          if (lVar13 == 0) {
            if ((lVar9 != 0) && (*plVar15 != 0)) {
              plVar8 = *(longlong **)(lVar9 + 0xb8);
              if ((plVar8 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 == '\0')) {
                plVar15[2] = 0;
              }
              else {
                uVar6 = (**(code **)(*plVar8 + 0x110))(plVar8);
                lVar13 = FUN_144aff482(uVar6,plVar15);
                plVar15[2] = lVar13;
                if (lVar13 != 0) goto LAB_143e30445;
              }
            }
          }
          else {
LAB_143e30445:
            if ((longlong)*(int *)(lVar5 + 0x80) != 0) {
              plVar8 = *(longlong **)(lVar5 + 0x78);
              lVar9 = (longlong)*(int *)(lVar5 + 0x80) * 0xb0;
              do {
                if (*plVar8 == lVar13) {
                  if (plVar8 == (longlong *)0x0) break;
                  if ((char)plVar15[3] == '\0') {
                    lVar9 = 0x20;
                  }
                  else {
                    if ((char)plVar15[3] != '\x01') break;
                    lVar9 = 0x30;
                  }
                  FUN_1401073f6((longlong)plVar8 + lVar9,param_2);
                  break;
                }
                plVar8 = plVar8 + 0x16;
                lVar9 = lVar9 + -0xb0;
              } while (lVar9 != 0);
            }
          }
          plVar15 = plVar15 + 5;
        } while (plVar15 != plVar7);
      }
      iVar4 = *(int *)(lVar14 + 0x70);
      if ((longlong)iVar4 != 0) {
        lVar14 = *(longlong *)(lVar14 + 0x68);
        lVar9 = 0;
        do {
          cVar3 = *(char *)(lVar14 + 0x10 + lVar9);
          if (cVar3 == '\x01') {
            if ((*(byte *)(lVar5 + 0x248) & 1) == 0) goto LAB_143e305bd;
          }
          else if ((cVar3 != '\x02') || ((*(byte *)(lVar5 + 0x248) & 1) != 0)) {
LAB_143e305bd:
            lVar13 = *(longlong *)(lVar14 + lVar9);
            if (lVar13 != 0) {
              FUN_1489741c8(lVar5,lVar13,param_2);
            }
          }
          lVar9 = lVar9 + 0x18;
        } while ((longlong)iVar4 * 0x18 != lVar9);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e305e1 FUN_143e305e1 body=41 status=ok
// SIG undefined FUN_143e305e1(void)

void FUN_143e305e1(void)

{
  DAT_14cb8b010 = 0;
  if (DAT_14cb8b008 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6797a();
  return;
}



// FUNCTION 143e3060f FUN_143e3060f body=41 status=ok
// SIG undefined FUN_143e3060f(void)

void FUN_143e3060f(void)

{
  DAT_14cb8b100 = 0;
  if (DAT_14cb8b0f8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d67a18();
  return;
}



// FUNCTION 143e3063d FUN_143e3063d body=41 status=ok
// SIG undefined FUN_143e3063d(void)

void FUN_143e3063d(void)

{
  DAT_14cb8b1f0 = 0;
  if (DAT_14cb8b1e8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d67ab6();
  return;
}



// FUNCTION 143e3066c FUN_143e3066c body=131 status=ok
// SIG undefined FUN_143e3066c(void)

undefined8 FUN_143e3066c(undefined8 *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    if ((longlong)*(int *)(param_1 + 1) != 0) {
      plVar2 = (longlong *)*param_1;
      lVar1 = (longlong)*(int *)(param_1 + 1) * 0xb0;
      do {
        if (*plVar2 == param_2) {
          if (plVar2 != (longlong *)0x0) {
            if (param_4 != '\0') goto LAB_143e306cb;
            FUN_1400bc8c2(plVar2 + 0x10,param_3);
            goto LAB_143e306da;
          }
          break;
        }
        plVar2 = plVar2 + 0x16;
        lVar1 = lVar1 + -0xb0;
      } while (lVar1 != 0);
    }
    if (param_4 != '\0') {
      plVar2 = (longlong *)FUN_140fadb50();
LAB_143e306cb:
      FUN_1400bc96c(plVar2 + 0x10,param_3);
LAB_143e306da:
      FUN_140de40cc(plVar2);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143e306f0 FUN_143e306f0 body=60 status=ok
// SIG undefined FUN_143e306f0(void)

void FUN_143e306f0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 1) != 0)) {
    plVar2 = (longlong *)*param_1;
    lVar1 = (longlong)*(int *)(param_1 + 1) * 0xb0;
    do {
      if (*plVar2 == param_2) {
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        FUN_1411b6136(plVar2,param_3);
        return;
      }
      plVar2 = plVar2 + 0x16;
      lVar1 = lVar1 + -0xb0;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 143e3072c FUN_143e3072c body=41 status=ok
// SIG undefined FUN_143e3072c(void)

void FUN_143e3072c(void)

{
  DAT_14cb8b2e8 = 0;
  if (DAT_14cb8b2e0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d67b54();
  return;
}



// FUNCTION 143e3075a FUN_143e3075a body=41 status=ok
// SIG undefined FUN_143e3075a(void)

void FUN_143e3075a(void)

{
  DAT_14cb8b3e0 = 0;
  if (DAT_14cb8b3d8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d67bf2();
  return;
}



// FUNCTION 143e30788 FUN_143e30788 body=1629 status=ok
// SIG undefined FUN_143e30788(void)

void FUN_143e30788(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  int local_88;
  undefined4 local_84;
  undefined **local_80;
  longlong *local_78;
  ulonglong uStack_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar9 = *(longlong *)(param_1 + 8);
  if (0 < *(int *)(lVar9 + 0xa0)) {
    lVar12 = 0;
    local_c8 = param_1;
    do {
      lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x98) + lVar12 * 8);
      if (lVar9 != 0) {
        if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
          *(int *)(lVar9 + 0x78) = (int)lVar12;
        }
        lVar13 = *(longlong *)(lVar9 + 0x10);
        if ((longlong)*(int *)(lVar13 + 0x3b8) != 0) {
          lVar14 = (longlong)*(int *)(lVar13 + 0x3b8) << 5;
          lVar19 = *(longlong *)(lVar13 + 0x3b0) + 8;
          do {
            FUN_141453bf6(param_1,lVar19);
            lVar19 = lVar19 + 0x20;
            lVar14 = lVar14 + -0x20;
          } while (lVar14 != 0);
        }
        local_90 = 0;
        local_88 = *(int *)(lVar13 + 0x3c8);
        uVar5 = *(undefined8 *)(lVar13 + 0x3c0);
        local_98 = lVar12;
        if (local_88 == 0) {
          local_84 = 0;
        }
        else {
          FUN_146507962(&local_90,local_88,0);
          FUN_1487151ea(local_90,uVar5);
        }
        FUN_141453442(param_1,&local_90);
        FUN_1414534b4(param_1,lVar13 + 0x3e0);
        if (((*(byte *)(param_1 + 0x10) & 1) != 0) && ((longlong)*(int *)(lVar13 + 0x3d8) != 0)) {
          lVar12 = *(longlong *)(lVar13 + 0x3d0);
          lVar14 = (longlong)*(int *)(lVar13 + 0x3d8) * 0x28;
          do {
            lVar19 = FUN_14108b142(lVar12);
            if ((lVar19 != 0) && ((*(byte *)(param_1 + 0x10) & 1) != 0)) {
              if (*(char *)(lVar19 + 0x68) == '\x01') {
                if ((*(longlong *)(*(longlong *)(param_1 + 8) + 0x88) == 0) ||
                   (plVar16 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x90),
                   plVar16 == (longlong *)0x0)) {
                  lVar10 = 0;
                }
                else {
                  lVar10 = (**(code **)(*plVar16 + 0x10))();
                }
                lVar19 = FUN_14598e21e(lVar10 + 0x1a8,lVar19);
                *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 8;
              }
              else if (*(char *)(lVar19 + 0x68) == '\0') {
                lVar19 = FUN_140dced4a(*(longlong *)(param_1 + 8) + 0xe0,lVar19);
              }
              else {
                lVar19 = 0;
              }
              *(byte *)(lVar19 + 0x78) = *(byte *)(lVar19 + 0x78) | 1;
            }
            lVar12 = lVar12 + 0x28;
            lVar14 = lVar14 + -0x28;
          } while (lVar14 != 0);
        }
        iVar8 = *(int *)(lVar13 + 0x448);
        if (iVar8 < 0) {
LAB_143e30dde:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar8);
        }
        if (*(int *)(lVar9 + 0x54) < iVar8) {
          FUN_146560c8c((longlong *)(lVar9 + 0x48));
          iVar8 = *(int *)(lVar13 + 0x448);
        }
        if (iVar8 != 0) {
          plVar16 = *(longlong **)(lVar13 + 0x440);
          local_b8 = plVar16 + (longlong)iVar8 * 3;
          local_b0 = (longlong *)(lVar9 + 0x48);
          local_a8 = lVar13;
          do {
            ppuVar6 = (undefined **)*plVar16;
            if (ppuVar6 != (undefined **)0x0) {
              plVar7 = (longlong *)plVar16[1];
              if (plVar7 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                UNLOCK();
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
              plVar1 = local_b0;
              iVar8 = *(int *)(lVar9 + 0x50);
              *(uint *)(lVar9 + 0x50) = iVar8 + 1U;
              local_80 = ppuVar6;
              local_78 = plVar7;
              if (*(uint *)(lVar9 + 0x54) < iVar8 + 1U) {
                FUN_14898a502(local_b0,iVar8);
              }
              FUN_1418a9e30((longlong)iVar8 * 0x38 + *plVar1,&local_80);
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
              if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
                lVar12 = (longlong)*(int *)(*plVar16 + 0x20);
                if (lVar12 != 0) {
                  lVar13 = *(longlong *)(*plVar16 + 0x18);
                  local_a0 = lVar12 * 0x38 + lVar13;
                  local_c0 = plVar16;
                  do {
                    local_80 = &PTR_FUN_14b42aee0;
                    local_78 = *(longlong **)(lVar13 + 0x10);
                    uStack_70 = (ulonglong)*(uint *)(lVar9 + 0x78);
                    local_68 = lVar13;
                    lVar12 = FUN_140f7dc1c(*(undefined8 *)(param_1 + 8),&local_80);
                    if ((longlong)*(int *)(lVar13 + 0x30) != 0) {
                      puVar15 = *(undefined8 **)(lVar13 + 0x28);
                      puVar17 = puVar15 + (longlong)*(int *)(lVar13 + 0x30) * 2;
                      do {
                        puVar11 = (undefined8 *)FUN_140e84b06(lVar12 + 0x50);
                        *puVar11 = *puVar15;
                        *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar15 + 1);
                        *(undefined1 *)(puVar11 + 4) = *(undefined1 *)((longlong)puVar15 + 9);
                        uVar3 = *(undefined4 *)(*local_c0 + 8);
                        if (*(int *)(puVar11 + 3) != 3) {
                          FUN_1446efa72(puVar11 + 2,0,3,0x10);
                          *(undefined4 *)(puVar11 + 3) = 3;
                        }
                        puVar11 = (undefined8 *)puVar11[2];
                        *puVar11 = &PTR_LAB_14b42b600;
                        *(undefined4 *)(puVar11 + 1) = uVar3;
                        LOCK();
                        UNLOCK();
                        lVar19 = DAT_14c758608 + 1;
                        lVar14 = DAT_14c758608 + 1;
                        if (lVar19 == 0) {
                          LOCK();
                          UNLOCK();
                          lVar19 = DAT_14c758608 + 2;
                          lVar14 = DAT_14c758608 + 2;
                        }
                        DAT_14c758608 = lVar14;
                        puVar11[2] = lVar19;
                        *puVar11 = &PTR_FUN_14b42b590;
                        puVar11[3] = 0;
                        uVar4 = *(uint *)(lVar9 + 0xc);
                        *(uint *)(puVar11 + 3) = uVar4;
                        if ((int)uVar4 < DAT_14c9647dc) {
                          lVar14 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
                        }
                        else {
                          lVar14 = 0;
                        }
                        iVar8 = *(int *)(lVar14 + 0x10);
                        if (*(int *)(lVar14 + 0x10) == 0) {
                          LOCK();
                          iVar8 = DAT_14c964868 + 1;
                          UNLOCK();
                          iVar18 = DAT_14c964868 + 1;
                          bVar21 = DAT_14c964868 < 1000;
                          DAT_14c964868 = iVar8;
                          if (bVar21) {
                            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                          0x23d,
                                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                          ,iVar18);
                          }
                          LOCK();
                          iVar8 = *(int *)(lVar14 + 0x10);
                          bVar21 = iVar8 == 0;
                          if (bVar21) {
                            *(int *)(lVar14 + 0x10) = iVar18;
                            iVar8 = 0;
                          }
                          UNLOCK();
                          if (bVar21) {
                            iVar8 = iVar18;
                          }
                        }
                        *(int *)((longlong)puVar11 + 0x1c) = iVar8;
                        puVar11[4] = FUN_14114504a;
                        puVar15 = puVar15 + 2;
                      } while (puVar15 != puVar17);
                    }
                    lVar13 = lVar13 + 0x38;
                    plVar16 = local_c0;
                    param_1 = local_c8;
                  } while (lVar13 != local_a0);
                }
              }
            }
            plVar16 = plVar16 + 3;
            lVar13 = local_a8;
          } while (plVar16 != local_b8);
        }
        iVar8 = *(int *)(lVar13 + 0x458);
        if (iVar8 < 0) goto LAB_143e30dde;
        plVar16 = (longlong *)(lVar9 + 0x58);
        if (*(int *)(lVar9 + 100) < iVar8) {
          FUN_146560cf8(plVar16);
          iVar8 = *(int *)(lVar13 + 0x458);
        }
        if (iVar8 != 0) {
          lVar12 = *(longlong *)(lVar13 + 0x450);
          lVar13 = 0;
          do {
            lVar14 = *(longlong *)(lVar12 + lVar13);
            if (lVar14 != 0) {
              plVar7 = *(longlong **)(lVar12 + 8 + lVar13);
              if (plVar7 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                UNLOCK();
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
              iVar18 = *(int *)(lVar9 + 0x60);
              *(uint *)(lVar9 + 0x60) = iVar18 + 1U;
              if (*(uint *)(lVar9 + 100) < iVar18 + 1U) {
                FUN_14898a7ec(plVar16,iVar18);
              }
              lVar10 = *plVar16;
              lVar20 = (longlong)iVar18 * 0x20;
              lVar19 = lVar10 + lVar20;
              *(longlong *)(lVar10 + lVar20) = lVar14;
              *(longlong **)(lVar10 + 8 + lVar20) = plVar7;
              if (plVar7 == (longlong *)0x0) {
                *(undefined8 *)(lVar19 + 0x10) = 0;
                *(undefined8 *)(lVar19 + 0x18) = 0;
              }
              else {
                LOCK();
                *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                UNLOCK();
                *(undefined8 *)(lVar19 + 0x10) = 0;
                *(undefined8 *)(lVar19 + 0x18) = 0;
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
            lVar13 = lVar13 + 0x18;
          } while ((longlong)iVar8 * 0x18 != lVar13);
        }
        lVar12 = local_98;
        param_1 = local_c8;
        lVar13 = (longlong)*(int *)(*(longlong *)(lVar9 + 0x10) + 0x268);
        if (lVar13 != 0) {
          lVar14 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x260);
          lVar19 = 0;
          do {
            plVar16 = *(longlong **)(lVar14 + lVar19);
            if (plVar16 != (longlong *)0x0) {
              (**(code **)(*plVar16 + 0x2a0))(plVar16,lVar9);
            }
            lVar19 = lVar19 + 8;
          } while (lVar13 * 8 != lVar19);
        }
      }
      lVar12 = lVar12 + 1;
      lVar9 = *(longlong *)(param_1 + 8);
    } while (lVar12 < *(int *)(lVar9 + 0xa0));
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e30de8 FUN_143e30de8 body=3745 status=ok
// SIG undefined FUN_143e30de8(void)

void FUN_143e30de8(longlong param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 **ppuVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *plVar21;
  uint uVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  longlong lVar25;
  int iVar26;
  undefined4 *puVar27;
  float fVar28;
  undefined1 auStack_418 [32];
  undefined8 **local_3f8;
  longlong local_3f0;
  longlong *local_3e8;
  ulonglong local_3e0;
  undefined8 *local_3d8;
  longlong *local_3d0;
  longlong *local_3c8;
  int local_3c0;
  int local_3bc;
  undefined1 local_3b8 [80];
  undefined1 *local_368;
  undefined8 local_360;
  undefined8 *local_358;
  undefined8 *local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_418;
  lVar6 = *(longlong *)(param_1 + 8);
  *(byte *)(lVar6 + 0x70) = (*(byte *)(lVar6 + 0x70) & 0xfe | *(byte *)(lVar6 + 0x248) & 1) ^ 1;
  local_368 = (undefined1 *)0x0;
  local_360 = 0xa00000000;
  lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x50);
  local_3f0 = param_1;
  if (lVar6 != 0) {
    lVar19 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
    lVar6 = lVar6 * 0x90;
    do {
      lVar16 = *(longlong *)(lVar19 + 0x78);
      if (lVar16 == 0) {
        *(byte *)(lVar19 + 0x88) =
             *(byte *)(lVar19 + 0x88) & 0xfd | *(byte *)(lVar19 + 0x88) >> 1 & 2;
      }
      else {
        lVar25 = *(longlong *)(param_1 + 8);
        if (*(int *)(lVar16 + 0x20) != 3) {
          FUN_1446efa72((longlong *)(lVar16 + 0x18),0,3,0x10);
          *(undefined4 *)(lVar16 + 0x20) = 3;
        }
        puVar24 = *(undefined8 **)(lVar16 + 0x18);
        *puVar24 = &PTR_LAB_14b42c990;
        *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(lVar19 + 0x50);
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 1;
        lVar16 = DAT_14c758608 + 1;
        if (lVar8 == 0) {
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 2;
          lVar16 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar16;
        puVar24[2] = lVar8;
        *puVar24 = &PTR_FUN_14b42b6e0;
        puVar24[3] = lVar25 + 0x48;
        puVar24[4] = FUN_140898224;
        *(byte *)(lVar19 + 0x88) =
             *(byte *)(lVar19 + 0x88) & 0xfd | *(byte *)(*(longlong *)(lVar19 + 0x78) + 0x28) & 2;
        param_1 = local_3f0;
      }
      if (*(int *)(lVar19 + 0x54) == -1) {
        lVar16 = (longlong)(int)local_360;
        uVar2 = (int)local_360 + 1;
        local_360 = CONCAT44(local_360._4_4_,uVar2);
        if (local_360._4_4_ < uVar2) {
          FUN_1418abc40(local_3b8);
        }
        puVar7 = local_368;
        if (local_368 == (undefined1 *)0x0) {
          puVar7 = local_3b8;
        }
        *(longlong *)(puVar7 + lVar16 * 8) = lVar19;
      }
      lVar19 = lVar19 + 0x90;
      lVar6 = lVar6 + -0x90;
    } while (lVar6 != 0);
  }
  plVar13 = (longlong *)(param_1 + 0x228);
  if (*(longlong **)(param_1 + 0x318) != (longlong *)0x0) {
    plVar13 = *(longlong **)(param_1 + 0x318);
  }
  if ((longlong)*(int *)(param_1 + 800) != 0) {
    plVar20 = plVar13 + (longlong)*(int *)(param_1 + 800) * 3;
    do {
      if (*plVar13 != 0) {
        lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x50);
        if (lVar6 != 0) {
          lVar19 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
          lVar25 = 0;
          lVar16 = 0;
          do {
            if (*(longlong *)(lVar19 + lVar25) == *plVar13) {
              lVar19 = lVar19 - lVar16;
              if (lVar19 == 0) break;
              local_358 = (undefined8 *)0x0;
              local_350 = (undefined8 *)((ulonglong)local_350 & 0xffffffff00000000);
              FUN_14114e6dc(&local_358,plVar13 + 1);
              FUN_140c6314c(lVar19 + 8);
              if ((int)local_350 != 0) {
                if (local_358 == (undefined8 *)0x0) break;
                (**(code **)*local_358)();
                FUN_1446efa72(&local_358,0,0,0x10);
                local_350 = (undefined8 *)((ulonglong)local_350 & 0xffffffff00000000);
              }
              if (local_358 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              break;
            }
            lVar16 = lVar16 + -0x90;
            lVar25 = lVar25 + 0x90;
          } while (-lVar16 != lVar6 * 0x90);
        }
      }
      plVar13 = plVar13 + 3;
    } while (plVar13 != plVar20);
  }
  puVar7 = local_368;
  if (local_368 == (undefined1 *)0x0) {
    puVar7 = local_3b8;
  }
  lVar6 = (longlong)(int)local_360;
  if (lVar6 != 0) {
    lVar19 = 0;
    do {
      if ((*(byte *)(*(longlong *)(*(longlong *)(puVar7 + lVar19) + 0x40) + 0x28) & 1) != 0) {
        FUN_1408983b2();
      }
      lVar19 = lVar19 + 8;
    } while (lVar6 * 8 != lVar19);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x70);
    *pbVar1 = *pbVar1 | 2;
    puVar24 = (undefined8 *)(param_1 + 0x18);
    iVar3 = *(int *)(param_1 + 0xc0);
    if (1 < (longlong)iVar3) {
      puVar17 = *(undefined8 **)(param_1 + 0xb8);
      if (*(undefined8 **)(param_1 + 0xb8) == (undefined8 *)0x0) {
        puVar17 = puVar24;
      }
      local_3d8 = puVar24;
      memset(local_348,0,0x2f0);
      local_350 = puVar17 + (longlong)iVar3 * 2 + -2;
      local_358 = puVar17;
      fVar28 = logf((float)iVar3);
      local_348[0] = (int)(longlong)(fVar28 + fVar28);
      ppuVar12 = &local_358;
      do {
        plVar20 = *ppuVar12;
        plVar9 = ppuVar12[1];
        iVar3 = *(int *)(ppuVar12 + 2);
        iVar4 = (int)((ulonglong)((longlong)plVar9 - (longlong)plVar20) >> 4);
        plVar18 = (longlong *)(ulonglong)(iVar4 + 1);
        plVar13 = plVar9;
        plVar21 = plVar20;
        plVar23 = plVar20;
        local_3f8 = ppuVar12;
        if (iVar3 != 0) {
LAB_143e311ae:
          if (8 < (int)(uint)plVar18) {
            local_3e0 = CONCAT44(local_3e0._4_4_,iVar3);
            uVar11 = (ulonglong)((uint)plVar18 >> 1);
            lVar6 = plVar21[uVar11 * 2];
            lVar19 = (plVar21 + uVar11 * 2)[1];
            lVar16 = plVar21[1];
            plVar21[uVar11 * 2] = *plVar21;
            (plVar21 + uVar11 * 2)[1] = lVar16;
            local_58._0_4_ = (int)lVar6;
            local_58._4_4_ = (int)((ulonglong)lVar6 >> 0x20);
            uStack_50._0_4_ = (undefined4)lVar19;
            uStack_50._4_4_ = (undefined4)((ulonglong)lVar19 >> 0x20);
            *(int *)plVar21 = (int)local_58;
            *(int *)((longlong)plVar21 + 4) = local_58._4_4_;
            *(undefined4 *)(plVar21 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)plVar21 + 0xc) = uStack_50._4_4_;
            plVar18 = plVar13 + 2;
            plVar23 = plVar21;
            local_3e8 = plVar13;
            local_3d0 = plVar20;
            local_3c8 = plVar9;
            local_58 = lVar6;
            uStack_50 = lVar19;
            do {
              plVar13 = local_3e8;
              plVar20 = plVar23 + 2;
              plVar9 = plVar23 + 2;
              do {
                plVar23 = plVar9;
                plVar10 = plVar20;
                if (plVar13 < plVar23) break;
                puVar27 = *(undefined4 **)(*plVar21 + 8);
                if (puVar27 == (undefined4 *)0x0) {
                  puVar27 = &DAT_14c9485f0;
                }
                if (DAT_14c947fe0 == 0) {
                  lVar6 = FUN_14001cc68(0x140,0x10);
                  FUN_1456b2032(lVar6);
                  DAT_14c947fe0 = lVar6;
                }
                FUN_140045924(DAT_14c947fe0,&local_58,puVar27,1);
                puVar27 = *(undefined4 **)(*plVar23 + 8);
                if (puVar27 == (undefined4 *)0x0) {
                  puVar27 = &DAT_14c9485f0;
                }
                if (DAT_14c947fe0 == 0) {
                  lVar6 = FUN_14001cc68(0x140,0x10);
                  FUN_1456b2032(lVar6);
                  DAT_14c947fe0 = lVar6;
                }
                FUN_140045924(DAT_14c947fe0,&local_3c0,puVar27,1);
                if ((int)local_58 == local_3c0) {
                  iVar3 = local_58._4_4_ - local_3bc;
                }
                else {
                  iVar3 = FUN_14002c2bd();
                }
                plVar20 = plVar10 + 2;
                plVar9 = plVar23 + 2;
              } while (-1 < iVar3);
              plVar20 = plVar18 + -4;
              do {
                plVar13 = plVar18;
                plVar9 = plVar20;
                plVar18 = plVar13 + -2;
                if (plVar18 <= plVar21) break;
                puVar27 = *(undefined4 **)(*plVar18 + 8);
                if (puVar27 == (undefined4 *)0x0) {
                  puVar27 = &DAT_14c9485f0;
                }
                if (DAT_14c947fe0 == 0) {
                  lVar6 = FUN_14001cc68(0x140,0x10);
                  FUN_1456b2032(lVar6);
                  DAT_14c947fe0 = lVar6;
                }
                FUN_140045924(DAT_14c947fe0,&local_58,puVar27,1);
                puVar27 = *(undefined4 **)(*plVar21 + 8);
                if (puVar27 == (undefined4 *)0x0) {
                  puVar27 = &DAT_14c9485f0;
                }
                if (DAT_14c947fe0 == 0) {
                  lVar6 = FUN_14001cc68(0x140,0x10);
                  FUN_1456b2032(lVar6);
                  DAT_14c947fe0 = lVar6;
                }
                FUN_140045924(DAT_14c947fe0,&local_3c0,puVar27,1);
                if ((int)local_58 == local_3c0) {
                  iVar3 = local_58._4_4_ - local_3bc;
                }
                else {
                  iVar3 = FUN_14002c2bd();
                }
                plVar20 = plVar9 + -2;
              } while (-1 < iVar3);
              if (plVar18 < plVar23) goto LAB_143e31423;
              lVar6 = *plVar23;
              lVar19 = plVar23[1];
              lVar16 = plVar13[-1];
              *plVar23 = *plVar18;
              plVar23[1] = lVar16;
              local_58._0_4_ = (int)lVar6;
              local_58._4_4_ = (int)((ulonglong)lVar6 >> 0x20);
              uStack_50._0_4_ = (undefined4)lVar19;
              uStack_50._4_4_ = (undefined4)((ulonglong)lVar19 >> 0x20);
              *(int *)plVar18 = (int)local_58;
              *(int *)((longlong)plVar13 + -0xc) = local_58._4_4_;
              *(undefined4 *)(plVar13 + -1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)plVar13 + -4) = uStack_50._4_4_;
              local_58 = lVar6;
              uStack_50 = lVar19;
            } while( true );
          }
          for (; ppuVar12 = local_3f8, plVar9 = plVar21, plVar20 = plVar21, plVar21 < plVar13;
              plVar13 = plVar13 + -2) {
            while (plVar20 = plVar20 + 2, plVar20 <= plVar13) {
              puVar27 = &DAT_14c9485f0;
              if (*(undefined4 **)(*plVar9 + 8) != (undefined4 *)0x0) {
                puVar27 = *(undefined4 **)(*plVar9 + 8);
              }
              if (DAT_14c947fe0 == 0) {
                lVar6 = FUN_14001cc68(0x140,0x10);
                FUN_1456b2032(lVar6);
                DAT_14c947fe0 = lVar6;
              }
              FUN_140045924(DAT_14c947fe0,&local_58,puVar27,1);
              puVar27 = *(undefined4 **)(*plVar20 + 8);
              if (puVar27 == (undefined4 *)0x0) {
                puVar27 = &DAT_14c9485f0;
              }
              if (DAT_14c947fe0 == 0) {
                lVar6 = FUN_14001cc68(0x140,0x10);
                FUN_1456b2032(lVar6);
                DAT_14c947fe0 = lVar6;
              }
              FUN_140045924(DAT_14c947fe0,&local_3c0,puVar27,1);
              if ((int)local_58 == local_3c0) {
                iVar3 = local_58._4_4_ - local_3bc;
              }
              else {
                iVar3 = FUN_14002c2bd();
              }
              if (iVar3 < 0) {
                plVar9 = plVar20;
              }
            }
            local_58 = *plVar9;
            uStack_50 = plVar9[1];
            lVar19 = local_58;
            lVar16 = uStack_50;
            lVar6 = plVar13[1];
            *plVar9 = *plVar13;
            plVar9[1] = lVar6;
            local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            *(int *)plVar13 = (int)local_58;
            *(int *)((longlong)plVar13 + 4) = local_58._4_4_;
            *(undefined4 *)(plVar13 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)plVar13 + 0xc) = uStack_50._4_4_;
            local_58 = lVar19;
            uStack_50 = lVar16;
          }
          goto LAB_143e31ba6;
        }
LAB_143e314fb:
        ppuVar12 = local_3f8;
        if ((int)plVar18 != 0) {
          uVar2 = (iVar4 - (iVar4 + -1 >> 0x1f)) + -1 >> 1;
          local_3e8 = plVar18;
          do {
            uVar11 = (ulonglong)uVar2;
            uVar22 = uVar2 * 2 + 1;
            local_3e0 = uVar11;
            if ((int)uVar22 < (int)plVar18) {
              do {
                uVar14 = uVar2 * 2 + 2;
                uVar2 = uVar22;
                if ((int)uVar14 < (int)plVar18) {
                  puVar27 = *(undefined4 **)(plVar23[(longlong)(int)uVar14 * 2] + 8);
                  if (puVar27 == (undefined4 *)0x0) {
                    puVar27 = &DAT_14c9485f0;
                  }
                  if (DAT_14c947fe0 == 0) {
                    lVar6 = FUN_14001cc68(0x140,0x10);
                    FUN_1456b2032(lVar6);
                    DAT_14c947fe0 = lVar6;
                  }
                  FUN_140045924(DAT_14c947fe0,&local_58,puVar27,1);
                  puVar27 = *(undefined4 **)(plVar23[(longlong)(int)uVar22 * 2] + 8);
                  if (puVar27 == (undefined4 *)0x0) {
                    puVar27 = &DAT_14c9485f0;
                  }
                  if (DAT_14c947fe0 == 0) {
                    lVar6 = FUN_14001cc68(0x140,0x10);
                    FUN_1456b2032(lVar6);
                    DAT_14c947fe0 = lVar6;
                  }
                  FUN_140045924(DAT_14c947fe0,&local_3c0,puVar27,1);
                  if ((int)local_58 == local_3c0) {
                    iVar3 = local_58._4_4_ - local_3bc;
                  }
                  else {
                    iVar3 = FUN_14002c2bd();
                  }
                  uVar2 = uVar14;
                  if (iVar3 < 0) {
                    uVar2 = uVar22;
                  }
                }
                puVar27 = *(undefined4 **)(plVar23[(longlong)(int)uVar11 * 2] + 8);
                if (puVar27 == (undefined4 *)0x0) {
                  puVar27 = &DAT_14c9485f0;
                }
                if (DAT_14c947fe0 == 0) {
                  lVar6 = FUN_14001cc68(0x140,0x10);
                  FUN_1456b2032(lVar6);
                  DAT_14c947fe0 = lVar6;
                }
                plVar13 = plVar23 + (longlong)(int)uVar2 * 2;
                FUN_140045924(DAT_14c947fe0,&local_58,puVar27,1);
                puVar27 = *(undefined4 **)(*plVar13 + 8);
                if (puVar27 == (undefined4 *)0x0) {
                  puVar27 = &DAT_14c9485f0;
                }
                if (DAT_14c947fe0 == 0) {
                  lVar6 = FUN_14001cc68(0x140,0x10);
                  FUN_1456b2032(lVar6);
                  DAT_14c947fe0 = lVar6;
                }
                FUN_140045924(DAT_14c947fe0,&local_3c0,puVar27,1);
                if ((int)local_58 == local_3c0) {
                  iVar3 = local_58._4_4_ - local_3bc;
                }
                else {
                  iVar3 = FUN_14002c2bd();
                }
                plVar18 = local_3e8;
                if (-1 < iVar3) break;
                plVar20 = plVar23 + (longlong)(int)uVar11 * 2;
                local_58 = *plVar20;
                uStack_50 = plVar20[1];
                lVar19 = local_58;
                lVar16 = uStack_50;
                lVar6 = plVar13[1];
                *plVar20 = *plVar13;
                plVar20[1] = lVar6;
                local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
                uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
                *(int *)plVar13 = (int)local_58;
                *(int *)((longlong)plVar13 + 4) = local_58._4_4_;
                *(undefined4 *)(plVar13 + 1) = (undefined4)uStack_50;
                *(undefined4 *)((longlong)plVar13 + 0xc) = uStack_50._4_4_;
                uVar22 = uVar2 * 2 + 1;
                uVar11 = (ulonglong)uVar2;
                local_58 = lVar19;
                uStack_50 = lVar16;
              } while ((int)uVar22 < (int)local_3e8);
            }
            uVar2 = (int)local_3e0 - 1;
          } while ((int)local_3e0 != 0);
          ppuVar12 = local_3f8;
          if (1 < (int)plVar18) {
            plVar13 = (longlong *)(((ulonglong)plVar18 & 0xffffffff) - 1);
            local_58 = *plVar23;
            uStack_50 = plVar23[1];
            lVar19 = local_58;
            lVar16 = uStack_50;
            lVar6 = (plVar23 + (longlong)plVar13 * 2)[1];
            *plVar23 = plVar23[(longlong)plVar13 * 2];
            plVar23[1] = lVar6;
            local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            plVar20 = plVar23 + (longlong)plVar13 * 2;
            *(int *)plVar20 = (int)local_58;
            *(int *)((longlong)plVar20 + 4) = local_58._4_4_;
            *(undefined4 *)(plVar20 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)plVar20 + 0xc) = uStack_50._4_4_;
            local_58 = lVar19;
            uStack_50 = lVar16;
            if ((int)plVar18 != 2) {
              do {
                iVar3 = 0;
                iVar15 = 1;
                local_3e8 = plVar13;
                iVar4 = 0;
                do {
                  iVar3 = iVar3 + 2;
                  iVar26 = iVar15;
                  if ((longlong)iVar3 < (longlong)local_3e8) {
                    puVar27 = *(undefined4 **)(plVar23[(longlong)iVar3 * 2] + 8);
                    if (puVar27 == (undefined4 *)0x0) {
                      puVar27 = &DAT_14c9485f0;
                    }
                    if (DAT_14c947fe0 == 0) {
                      lVar6 = FUN_14001cc68(0x140,0x10);
                      FUN_1456b2032(lVar6);
                      DAT_14c947fe0 = lVar6;
                    }
                    FUN_140045924(DAT_14c947fe0,&local_58,puVar27,1);
                    puVar27 = *(undefined4 **)(plVar23[(longlong)iVar15 * 2] + 8);
                    if (puVar27 == (undefined4 *)0x0) {
                      puVar27 = &DAT_14c9485f0;
                    }
                    if (DAT_14c947fe0 == 0) {
                      lVar6 = FUN_14001cc68(0x140,0x10);
                      FUN_1456b2032(lVar6);
                      DAT_14c947fe0 = lVar6;
                    }
                    FUN_140045924(DAT_14c947fe0,&local_3c0,puVar27,1);
                    if ((int)local_58 == local_3c0) {
                      iVar5 = local_58._4_4_ - local_3bc;
                    }
                    else {
                      iVar5 = FUN_14002c2bd();
                    }
                    iVar26 = iVar3;
                    if (iVar5 < 0) {
                      iVar26 = iVar15;
                    }
                  }
                  puVar27 = *(undefined4 **)(plVar23[(longlong)iVar4 * 2] + 8);
                  if (puVar27 == (undefined4 *)0x0) {
                    puVar27 = &DAT_14c9485f0;
                  }
                  if (DAT_14c947fe0 == 0) {
                    lVar6 = FUN_14001cc68(0x140,0x10);
                    FUN_1456b2032(lVar6);
                    DAT_14c947fe0 = lVar6;
                  }
                  plVar13 = plVar23 + (longlong)iVar26 * 2;
                  FUN_140045924(DAT_14c947fe0,&local_58,puVar27,1);
                  puVar27 = *(undefined4 **)(*plVar13 + 8);
                  if (puVar27 == (undefined4 *)0x0) {
                    puVar27 = &DAT_14c9485f0;
                  }
                  if (DAT_14c947fe0 == 0) {
                    lVar6 = FUN_14001cc68(0x140,0x10);
                    FUN_1456b2032(lVar6);
                    DAT_14c947fe0 = lVar6;
                  }
                  FUN_140045924(DAT_14c947fe0,&local_3c0,puVar27,1);
                  if ((int)local_58 == local_3c0) {
                    local_58._4_4_ = local_58._4_4_ - local_3bc;
                  }
                  else {
                    local_58._4_4_ = FUN_14002c2bd();
                  }
                  if (-1 < local_58._4_4_) break;
                  plVar20 = plVar23 + (longlong)iVar4 * 2;
                  lVar6 = *plVar20;
                  lVar19 = plVar20[1];
                  lVar16 = plVar13[1];
                  *plVar20 = *plVar13;
                  plVar20[1] = lVar16;
                  local_58._0_4_ = (int)lVar6;
                  local_58._4_4_ = (int)((ulonglong)lVar6 >> 0x20);
                  uStack_50._0_4_ = (undefined4)lVar19;
                  uStack_50._4_4_ = (undefined4)((ulonglong)lVar19 >> 0x20);
                  *(int *)plVar13 = (int)local_58;
                  *(int *)((longlong)plVar13 + 4) = local_58._4_4_;
                  *(undefined4 *)(plVar13 + 1) = (undefined4)uStack_50;
                  *(undefined4 *)((longlong)plVar13 + 0xc) = uStack_50._4_4_;
                  iVar3 = iVar26 * 2;
                  iVar15 = iVar26 * 2 + 1;
                  local_58 = lVar6;
                  uStack_50 = lVar19;
                  iVar4 = iVar26;
                } while ((longlong)iVar15 < (longlong)local_3e8);
                plVar13 = (longlong *)((longlong)local_3e8 + -1);
                local_58 = *plVar23;
                uStack_50 = plVar23[1];
                lVar19 = local_58;
                lVar16 = uStack_50;
                lVar6 = (plVar23 + (longlong)plVar13 * 2)[1];
                *plVar23 = plVar23[(longlong)plVar13 * 2];
                plVar23[1] = lVar6;
                local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
                uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
                plVar20 = plVar23 + (longlong)plVar13 * 2;
                *(int *)plVar20 = (int)local_58;
                *(int *)((longlong)plVar20 + 4) = local_58._4_4_;
                *(undefined4 *)(plVar20 + 1) = (undefined4)uStack_50;
                *(undefined4 *)((longlong)plVar20 + 0xc) = uStack_50._4_4_;
                ppuVar12 = local_3f8;
                local_58 = lVar19;
                uStack_50 = lVar16;
              } while ((longlong *)0x2 < local_3e8);
            }
          }
        }
LAB_143e31ba6:
        ppuVar12 = ppuVar12 + -3;
      } while (&local_358 <= ppuVar12);
      iVar3 = *(int *)(local_3f0 + 0xc0);
      param_1 = local_3f0;
      puVar24 = local_3d8;
    }
    if (*(undefined8 **)(param_1 + 0xb8) != (undefined8 *)0x0) {
      puVar24 = *(undefined8 **)(param_1 + 0xb8);
    }
    if (iVar3 != 0) {
      uVar11 = 1;
      lVar6 = 0;
      do {
        lVar19 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
        lVar25 = (longlong)*(int *)((longlong)puVar24 + lVar6 + 8) * 0x90;
        *(ulonglong *)(lVar19 + 0x58 + lVar25) = uVar11;
        lVar16 = *(longlong *)(param_1 + 8);
        if ((~*(byte *)(lVar16 + 0x70) & 3) == 0) {
          if ((*(byte *)(lVar19 + lVar25 + 0x88) & 1) == 0) {
            *(ulonglong *)(lVar16 + 0x58) = *(ulonglong *)(lVar16 + 0x58) & ~uVar11;
          }
          else {
            *(ulonglong *)(lVar16 + 0x58) = *(ulonglong *)(lVar16 + 0x58) | uVar11;
          }
        }
        uVar11 = uVar11 * 2;
        lVar6 = lVar6 + 0x10;
      } while ((longlong)iVar3 * 0x10 != lVar6);
    }
  }
  if (local_368 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143e31423:
  local_58 = *plVar21;
  uStack_50 = plVar21[1];
  lVar19 = local_58;
  lVar16 = uStack_50;
  lVar6 = plVar13[-1];
  *plVar21 = *plVar18;
  plVar21[1] = lVar6;
  local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(int *)plVar18 = (int)local_58;
  *(int *)((longlong)plVar13 + -0xc) = local_58._4_4_;
  *(undefined4 *)(plVar13 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)plVar13 + -4) = uStack_50._4_4_;
  iVar3 = (int)local_3e0 + -1;
  plVar13 = plVar13 + -4;
  local_58 = lVar19;
  uStack_50 = lVar16;
  if ((longlong)plVar9 - (longlong)local_3d0 < (longlong)local_3c8 - (longlong)plVar10) {
    ppuVar12 = local_3f8;
    if (plVar23 < local_3e8) {
      *local_3f8 = plVar23;
      local_3f8[1] = local_3e8;
      *(int *)(local_3f8 + 2) = iVar3;
      ppuVar12 = local_3f8 + 3;
    }
    plVar23 = plVar21;
    if (plVar18 <= plVar21 + 2) goto LAB_143e31ba6;
  }
  else {
    if (plVar21 + 2 < plVar18) {
      *local_3f8 = plVar21;
      local_3f8[1] = plVar13;
      *(int *)(local_3f8 + 2) = iVar3;
      local_3f8 = local_3f8 + 3;
    }
    ppuVar12 = local_3f8;
    plVar13 = local_3e8;
    plVar21 = plVar10;
    plVar9 = local_3e8;
    if (local_3e8 <= plVar23) goto LAB_143e31ba6;
  }
  local_3f8 = ppuVar12;
  iVar4 = (int)((ulonglong)((longlong)plVar9 - (longlong)plVar21) >> 4);
  plVar18 = (longlong *)(ulonglong)(iVar4 + 1);
  plVar20 = plVar21;
  plVar21 = plVar23;
  if (iVar3 == 0) goto LAB_143e314fb;
  goto LAB_143e311ae;
}



// FUNCTION 143e31c8a FUN_143e31c8a body=7044 status=ok
// SIG undefined FUN_143e31c8a(void)

void FUN_143e31c8a(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int *piVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  int *piVar19;
  longlong lVar20;
  uint *puVar21;
  longlong lVar22;
  int *piVar23;
  int *piVar24;
  uint *puVar25;
  uint *puVar26;
  undefined8 *puVar27;
  int *piVar28;
  longlong *plVar29;
  longlong *plVar30;
  int *piVar31;
  int *piVar32;
  longlong *_Src;
  longlong *_Src_00;
  ulonglong uVar33;
  longlong *plVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  int iVar38;
  int *piVar39;
  longlong *_Src_01;
  int *piVar40;
  int *piVar41;
  longlong *plVar42;
  uint uVar43;
  longlong *plVar44;
  bool bVar45;
  float fVar46;
  undefined1 auStack_428 [40];
  longlong *local_400;
  longlong *local_3f8;
  longlong local_3f0;
  ulonglong local_3e8;
  longlong *local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_428;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar20 = *(longlong *)(param_1 + 8);
    local_3f0 = param_1;
    if (*(int *)(lVar20 + 0x68) != 3) {
      FUN_1446efa72((longlong *)(lVar20 + 0x60));
      *(undefined4 *)(lVar20 + 0x68) = 3;
    }
    puVar27 = *(undefined8 **)(lVar20 + 0x60);
    *puVar27 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar22 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar22 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar22;
    puVar27[2] = lVar13;
    *puVar27 = &PTR_FUN_14b42a5e0;
    puVar27[3] = 0;
    if (lVar20 == 0) {
      iVar36 = 0;
    }
    else {
      uVar37 = *(uint *)(lVar20 + 0xc);
      *(uint *)(puVar27 + 3) = uVar37;
      if ((int)uVar37 < DAT_14c9647dc) {
        lVar20 = (ulonglong)((uVar37 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar37 >> 0x10) * 8);
      }
      else {
        lVar20 = 0;
      }
      iVar36 = *(int *)(lVar20 + 0x10);
      if (*(int *)(lVar20 + 0x10) == 0) {
        LOCK();
        iVar36 = DAT_14c964868 + 1;
        UNLOCK();
        iVar38 = DAT_14c964868 + 1;
        bVar45 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar36;
        if (bVar45) {
          FUN_140033559();
        }
        LOCK();
        iVar36 = *(int *)(lVar20 + 0x10);
        bVar45 = iVar36 == 0;
        if (bVar45) {
          *(int *)(lVar20 + 0x10) = iVar38;
          iVar36 = 0;
        }
        UNLOCK();
        if (bVar45) {
          iVar36 = iVar38;
        }
      }
    }
    *(int *)((longlong)puVar27 + 0x1c) = iVar36;
    puVar27[4] = &LAB_140c8534c;
    lVar20 = local_3f0 + 0xd8;
    iVar36 = *(int *)(local_3f0 + 0x220);
    if (1 < (longlong)iVar36) {
      lVar22 = *(longlong *)(local_3f0 + 0x218);
      if (*(longlong *)(local_3f0 + 0x218) == 0) {
        lVar22 = lVar20;
      }
      memset(local_338,0,0x2f0);
      local_340 = (longlong)iVar36 * 0x20 + lVar22 + -0x20;
      local_348 = lVar22;
      fVar46 = logf((float)iVar36);
      local_338[0] = (int)(longlong)(fVar46 + fVar46);
      plVar34 = &local_348;
      do {
        puVar16 = (uint *)*plVar34;
        puVar18 = (uint *)plVar34[1];
        iVar36 = (int)plVar34[2];
        iVar38 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar16) >> 5);
        uVar37 = iVar38 + 1;
        if (iVar36 != 0) {
LAB_143e31e15:
          if (8 < (int)uVar37) {
            uVar33 = (ulonglong)(uVar37 >> 1);
            uVar15 = *(undefined8 *)(puVar16 + uVar33 * 8);
            uVar1 = *(undefined8 *)(puVar16 + uVar33 * 8 + 2);
            uVar2 = *(undefined8 *)(puVar16 + uVar33 * 8 + 4);
            uVar3 = *(undefined8 *)(puVar16 + uVar33 * 8 + 4 + 2);
            uVar4 = *(undefined8 *)puVar16;
            uVar5 = *(undefined8 *)(puVar16 + 2);
            uVar6 = *(undefined8 *)(puVar16 + 6);
            *(undefined8 *)(puVar16 + uVar33 * 8 + 4) = *(undefined8 *)(puVar16 + 4);
            *(undefined8 *)(puVar16 + uVar33 * 8 + 4 + 2) = uVar6;
            *(undefined8 *)(puVar16 + uVar33 * 8) = uVar4;
            *(undefined8 *)(puVar16 + uVar33 * 8 + 2) = uVar5;
            *(undefined8 *)(puVar16 + 4) = uVar2;
            *(undefined8 *)(puVar16 + 6) = uVar3;
            *(undefined8 *)puVar16 = uVar15;
            *(undefined8 *)(puVar16 + 2) = uVar1;
            puVar14 = puVar18 + 8;
            puVar17 = puVar16;
            do {
              puVar17 = puVar17 + 8;
              if (puVar17 <= puVar18) {
                while (*puVar17 <= *puVar16) {
                  if (((*puVar16 == *puVar17) &&
                      ((puVar16[1] < puVar17[1] ||
                       ((puVar16[1] == puVar17[1] &&
                        ((puVar16[2] < puVar17[2] ||
                         ((puVar16[2] == puVar17[2] && (puVar16[3] < puVar17[3])))))))))) ||
                     (puVar17 = puVar17 + 8, puVar18 < puVar17)) break;
                }
              }
              puVar26 = puVar14 + -8;
              puVar21 = puVar14;
              if (puVar16 < puVar26) {
                do {
                  puVar21 = puVar14;
                  if (puVar14[-8] < *puVar16) break;
                  if (puVar14[-8] == *puVar16) {
                    if (puVar26[1] < puVar16[1]) break;
                    if (puVar26[1] == puVar16[1]) {
                      if (puVar26[2] < puVar16[2]) break;
                      if ((puVar26[2] == puVar16[2]) && (puVar26[3] < puVar16[3])) {
                        puVar21 = puVar26 + 8;
                        break;
                      }
                    }
                  }
                  puVar25 = puVar26 + -8;
                  puVar21 = puVar26;
                  puVar14 = puVar26;
                  puVar26 = puVar25;
                } while (puVar16 < puVar25);
              }
              puVar14 = puVar26;
              if (puVar14 < puVar17) goto LAB_143e31f39;
              uVar15 = *(undefined8 *)puVar17;
              uVar1 = *(undefined8 *)(puVar17 + 2);
              uVar2 = *(undefined8 *)(puVar17 + 4);
              uVar3 = *(undefined8 *)(puVar17 + 6);
              uVar4 = *(undefined8 *)puVar14;
              uVar5 = *(undefined8 *)(puVar14 + 2);
              uVar6 = *(undefined8 *)(puVar14 + 6);
              *(undefined8 *)(puVar17 + 4) = *(undefined8 *)(puVar14 + 4);
              *(undefined8 *)(puVar17 + 6) = uVar6;
              *(undefined8 *)puVar17 = uVar4;
              *(undefined8 *)(puVar17 + 2) = uVar5;
              *(undefined8 *)(puVar14 + 4) = uVar2;
              *(undefined8 *)(puVar14 + 6) = uVar3;
              *(undefined8 *)puVar14 = uVar15;
              *(undefined8 *)(puVar14 + 2) = uVar1;
            } while( true );
          }
          for (; puVar17 = puVar16, puVar14 = puVar16, puVar16 < puVar18; puVar18 = puVar18 + -8) {
            while (puVar14 = puVar14 + 8, puVar14 <= puVar18) {
              if ((*puVar17 < *puVar14) ||
                 ((*puVar17 <= *puVar14 &&
                  ((puVar17[1] < puVar14[1] ||
                   ((puVar17[1] == puVar14[1] &&
                    ((puVar17[2] < puVar14[2] ||
                     ((puVar17[2] == puVar14[2] && (puVar17[3] < puVar14[3])))))))))))) {
                puVar17 = puVar14;
              }
            }
            local_3d8 = *(undefined8 *)puVar17;
            uStack_3d0 = *(undefined8 *)(puVar17 + 2);
            local_3c8 = *(undefined8 *)(puVar17 + 4);
            uStack_3c0 = *(undefined8 *)(puVar17 + 6);
            uVar15 = *(undefined8 *)puVar18;
            uVar1 = *(undefined8 *)(puVar18 + 2);
            uVar2 = *(undefined8 *)(puVar18 + 6);
            *(undefined8 *)(puVar17 + 4) = *(undefined8 *)(puVar18 + 4);
            *(undefined8 *)(puVar17 + 6) = uVar2;
            *(undefined8 *)puVar17 = uVar15;
            *(undefined8 *)(puVar17 + 2) = uVar1;
            *(undefined8 *)(puVar18 + 4) = local_3c8;
            *(undefined8 *)(puVar18 + 6) = uStack_3c0;
            *(undefined8 *)puVar18 = local_3d8;
            *(undefined8 *)(puVar18 + 2) = uStack_3d0;
          }
          goto LAB_143e323c9;
        }
LAB_143e31ff0:
        if (uVar37 != 0) {
          iVar36 = (iVar38 - (iVar38 + -1 >> 0x1f)) + -1 >> 1;
          iVar38 = iVar36;
joined_r0x000143e32017:
          do {
            iVar11 = iVar36 * 2 + 1;
            if (iVar11 < (int)uVar37) {
              iVar35 = iVar36 * 2 + 2;
              if (iVar35 < (int)uVar37) {
                lVar22 = (longlong)iVar35;
                lVar13 = (longlong)iVar11;
                if ((puVar16[lVar22 * 8] < puVar16[lVar13 * 8]) ||
                   ((puVar16[lVar22 * 8] <= puVar16[lVar13 * 8] &&
                    ((puVar16[lVar22 * 8 + 1] < puVar16[lVar13 * 8 + 1] ||
                     ((puVar16[lVar22 * 8 + 1] == puVar16[lVar13 * 8 + 1] &&
                      ((puVar16[lVar22 * 8 + 2] < puVar16[lVar13 * 8 + 2] ||
                       ((puVar16[lVar22 * 8 + 2] == puVar16[lVar13 * 8 + 2] &&
                        (puVar16[lVar22 * 8 + 3] < puVar16[lVar13 * 8 + 3]))))))))))))
                goto LAB_143e32064;
              }
              else {
LAB_143e32064:
                lVar22 = (longlong)iVar11;
                iVar35 = iVar11;
              }
              puVar18 = puVar16 + (longlong)iVar36 * 8;
              puVar14 = puVar16 + lVar22 * 8;
              if ((puVar16[(longlong)iVar36 * 8] < puVar16[lVar22 * 8]) ||
                 ((puVar16[(longlong)iVar36 * 8] == puVar16[lVar22 * 8] &&
                  ((puVar18[1] < puVar14[1] ||
                   ((puVar18[1] == puVar14[1] &&
                    ((puVar18[2] < puVar14[2] ||
                     ((puVar18[2] == puVar14[2] && (puVar18[3] < puVar14[3])))))))))))) {
                local_3d8 = *(undefined8 *)puVar18;
                uStack_3d0 = *(undefined8 *)(puVar18 + 2);
                local_3c8 = *(undefined8 *)(puVar18 + 4);
                uStack_3c0 = *(undefined8 *)(puVar18 + 6);
                uVar15 = *(undefined8 *)puVar14;
                uVar1 = *(undefined8 *)(puVar14 + 2);
                uVar2 = *(undefined8 *)(puVar14 + 6);
                *(undefined8 *)(puVar18 + 4) = *(undefined8 *)(puVar14 + 4);
                *(undefined8 *)(puVar18 + 6) = uVar2;
                *(undefined8 *)puVar18 = uVar15;
                *(undefined8 *)(puVar18 + 2) = uVar1;
                *(undefined8 *)(puVar14 + 4) = local_3c8;
                *(undefined8 *)(puVar14 + 6) = uStack_3c0;
                *(undefined8 *)puVar14 = local_3d8;
                *(undefined8 *)(puVar14 + 2) = uStack_3d0;
                iVar36 = iVar35;
                goto joined_r0x000143e32017;
              }
            }
            bVar45 = iVar38 != 0;
            iVar36 = iVar38 + -1;
            iVar38 = iVar36;
          } while (bVar45);
          if (1 < (int)uVar37) {
            uVar33 = (ulonglong)uVar37 - 1;
            local_3d8 = *(undefined8 *)puVar16;
            uStack_3d0 = *(undefined8 *)(puVar16 + 2);
            local_3c8 = *(undefined8 *)(puVar16 + 4);
            uStack_3c0 = *(undefined8 *)(puVar16 + 6);
            uVar15 = *(undefined8 *)(puVar16 + uVar33 * 8);
            uVar1 = *(undefined8 *)(puVar16 + uVar33 * 8 + 2);
            uVar2 = *(undefined8 *)(puVar16 + uVar33 * 8 + 4 + 2);
            *(undefined8 *)(puVar16 + 4) = *(undefined8 *)(puVar16 + uVar33 * 8 + 4);
            *(undefined8 *)(puVar16 + 6) = uVar2;
            *(undefined8 *)puVar16 = uVar15;
            *(undefined8 *)(puVar16 + 2) = uVar1;
            *(undefined8 *)(puVar16 + uVar33 * 8 + 4) = local_3c8;
            *(undefined8 *)(puVar16 + uVar33 * 8 + 4 + 2) = uStack_3c0;
            *(undefined8 *)(puVar16 + uVar33 * 8) = local_3d8;
            *(undefined8 *)(puVar16 + uVar33 * 8 + 2) = uStack_3d0;
            if (uVar37 != 2) {
              do {
                iVar38 = 0;
                iVar36 = 1;
                iVar11 = 0;
                do {
                  iVar35 = iVar38 + 2;
                  lVar22 = (longlong)iVar35;
                  if (lVar22 < (longlong)uVar33) {
                    lVar13 = (longlong)iVar36;
                    if ((puVar16[lVar22 * 8] < puVar16[lVar13 * 8]) ||
                       ((puVar16[lVar22 * 8] <= puVar16[lVar13 * 8] &&
                        ((puVar16[lVar22 * 8 + 1] < puVar16[lVar13 * 8 + 1] ||
                         ((puVar16[lVar22 * 8 + 1] == puVar16[lVar13 * 8 + 1] &&
                          ((puVar16[lVar22 * 8 + 2] < puVar16[lVar13 * 8 + 2] ||
                           ((puVar16[lVar22 * 8 + 2] == puVar16[lVar13 * 8 + 2] &&
                            (puVar16[lVar22 * 8 + 3] < puVar16[lVar13 * 8 + 3]))))))))))))
                    goto LAB_143e321f2;
                  }
                  else {
LAB_143e321f2:
                    lVar22 = (longlong)iVar36;
                    iVar35 = iVar36;
                  }
                  puVar18 = puVar16 + (longlong)iVar11 * 8;
                  puVar14 = puVar16 + lVar22 * 8;
                  if ((puVar16[lVar22 * 8] <= puVar16[(longlong)iVar11 * 8]) &&
                     ((puVar16[(longlong)iVar11 * 8] != puVar16[lVar22 * 8] ||
                      ((puVar14[1] <= puVar18[1] &&
                       ((puVar18[1] != puVar14[1] ||
                        ((puVar14[2] <= puVar18[2] &&
                         ((puVar18[2] != puVar14[2] || (puVar14[3] <= puVar18[3])))))))))))) break;
                  uVar15 = *(undefined8 *)puVar18;
                  uVar1 = *(undefined8 *)(puVar18 + 2);
                  uVar2 = *(undefined8 *)(puVar18 + 4);
                  uVar3 = *(undefined8 *)(puVar18 + 6);
                  uVar4 = *(undefined8 *)puVar14;
                  uVar5 = *(undefined8 *)(puVar14 + 2);
                  uVar6 = *(undefined8 *)(puVar14 + 6);
                  *(undefined8 *)(puVar18 + 4) = *(undefined8 *)(puVar14 + 4);
                  *(undefined8 *)(puVar18 + 6) = uVar6;
                  *(undefined8 *)puVar18 = uVar4;
                  *(undefined8 *)(puVar18 + 2) = uVar5;
                  *(undefined8 *)(puVar14 + 4) = uVar2;
                  *(undefined8 *)(puVar14 + 6) = uVar3;
                  *(undefined8 *)puVar14 = uVar15;
                  *(undefined8 *)(puVar14 + 2) = uVar1;
                  iVar38 = iVar35 * 2;
                  iVar36 = iVar35 * 2 + 1;
                  iVar11 = iVar35;
                } while ((longlong)iVar36 < (longlong)uVar33);
                uVar12 = uVar33 - 1;
                local_3d8 = *(undefined8 *)puVar16;
                uStack_3d0 = *(undefined8 *)(puVar16 + 2);
                local_3c8 = *(undefined8 *)(puVar16 + 4);
                uStack_3c0 = *(undefined8 *)(puVar16 + 6);
                uVar15 = *(undefined8 *)(puVar16 + uVar12 * 8);
                uVar1 = *(undefined8 *)(puVar16 + uVar12 * 8 + 2);
                uVar2 = *(undefined8 *)(puVar16 + uVar12 * 8 + 4 + 2);
                *(undefined8 *)(puVar16 + 4) = *(undefined8 *)(puVar16 + uVar12 * 8 + 4);
                *(undefined8 *)(puVar16 + 6) = uVar2;
                *(undefined8 *)puVar16 = uVar15;
                *(undefined8 *)(puVar16 + 2) = uVar1;
                *(undefined8 *)(puVar16 + uVar12 * 8 + 4) = local_3c8;
                *(undefined8 *)(puVar16 + uVar12 * 8 + 4 + 2) = uStack_3c0;
                *(undefined8 *)(puVar16 + uVar12 * 8) = local_3d8;
                *(undefined8 *)(puVar16 + uVar12 * 8 + 2) = uStack_3d0;
                bVar45 = 2 < uVar33;
                uVar33 = uVar12;
              } while (bVar45);
            }
          }
        }
LAB_143e323c9:
        plVar34 = plVar34 + -3;
      } while (&local_348 <= plVar34);
      iVar36 = *(int *)(local_3f0 + 0x220);
    }
    if (*(longlong *)(local_3f0 + 0x218) != 0) {
      lVar20 = *(longlong *)(local_3f0 + 0x218);
    }
    if (iVar36 != 0) {
      lVar22 = 0;
      iVar38 = 0;
      do {
        lVar13 = *(longlong *)(lVar20 + 0x10 + lVar22);
        if (lVar13 != 0) {
          *(int *)(lVar13 + 0x34) = iVar38;
        }
        iVar38 = iVar38 + 1;
        lVar22 = lVar22 + 0x20;
      } while ((longlong)iVar36 * 0x20 != lVar22);
    }
    lVar20 = *(longlong *)(local_3f0 + 8);
    iVar36 = *(int *)(lVar20 + 0xb8);
    if (1 < (longlong)iVar36) {
      lVar20 = *(longlong *)(lVar20 + 0xb0);
      memset(local_338,0,0x2f0);
      local_340 = (longlong)iVar36 * 0x60 + lVar20 + -0x60;
      local_348 = lVar20;
      fVar46 = logf((float)iVar36);
      local_338[0] = (int)(longlong)(fVar46 + fVar46);
      plVar34 = &local_348;
      do {
        puVar18 = (uint *)*plVar34;
        puVar16 = (uint *)plVar34[1];
        iVar36 = (int)plVar34[2];
        iVar38 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar18) >> 5) * -0x55555555;
        uVar37 = iVar38 + 1;
        if (iVar36 != 0) {
LAB_143e324bc:
          if (8 < (int)uVar37) {
            puVar14 = puVar18 + (ulonglong)(uVar37 >> 1) * 0x18;
            puVar27 = &local_3d8;
            for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
              *puVar27 = *(undefined8 *)puVar14;
              puVar14 = puVar14 + 2;
              puVar27 = puVar27 + 1;
            }
            puVar14 = puVar18;
            puVar17 = puVar18 + (ulonglong)(uVar37 >> 1) * 0x18;
            for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
              *(undefined8 *)puVar17 = *(undefined8 *)puVar14;
              puVar14 = puVar14 + 2;
              puVar17 = puVar17 + 2;
            }
            puVar27 = &local_3d8;
            puVar14 = puVar18;
            for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
              *(undefined8 *)puVar14 = *puVar27;
              puVar27 = puVar27 + 1;
              puVar14 = puVar14 + 2;
            }
            puVar14 = puVar16 + 0x18;
            puVar17 = puVar18;
            do {
              puVar17 = puVar17 + 0x18;
              if (puVar17 <= puVar16) {
                while (*puVar17 <= *puVar18) {
                  if (((*puVar18 == *puVar17) &&
                      ((puVar18[1] < puVar17[1] ||
                       ((puVar18[1] == puVar17[1] &&
                        ((puVar18[2] < puVar17[2] ||
                         ((puVar18[2] == puVar17[2] && (puVar18[3] < puVar17[3])))))))))) ||
                     (puVar17 = puVar17 + 0x18, puVar16 < puVar17)) break;
                }
              }
              puVar26 = puVar14 + -0x18;
              puVar21 = puVar14;
              if (puVar18 < puVar26) {
                do {
                  puVar25 = puVar26;
                  puVar26 = puVar25;
                  puVar21 = puVar14;
                  if (puVar14[-0x18] < *puVar18) break;
                  if (puVar14[-0x18] == *puVar18) {
                    if (puVar25[1] < puVar18[1]) break;
                    if (puVar25[1] == puVar18[1]) {
                      if (puVar25[2] < puVar18[2]) break;
                      if ((puVar25[2] == puVar18[2]) && (puVar25[3] < puVar18[3])) {
                        puVar21 = puVar25 + 0x18;
                        break;
                      }
                    }
                  }
                  puVar26 = puVar25 + -0x18;
                  puVar14 = puVar25;
                  puVar21 = puVar25;
                } while (puVar18 < puVar26);
              }
              puVar14 = puVar26;
              lVar20 = 0xc;
              puVar26 = puVar18;
              puVar25 = puVar17;
              puVar27 = &local_3d8;
              if (puVar14 < puVar17) goto code_r0x000143e325d1;
              for (; lVar20 != 0; lVar20 = lVar20 + -1) {
                *puVar27 = *(undefined8 *)puVar25;
                puVar25 = puVar25 + 2;
                puVar27 = puVar27 + 1;
              }
              puVar26 = puVar14;
              puVar21 = puVar17;
              for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
                *(undefined8 *)puVar21 = *(undefined8 *)puVar26;
                puVar26 = puVar26 + 2;
                puVar21 = puVar21 + 2;
              }
              puVar27 = &local_3d8;
              puVar26 = puVar14;
              for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
                *(undefined8 *)puVar26 = *puVar27;
                puVar27 = puVar27 + 1;
                puVar26 = puVar26 + 2;
              }
            } while( true );
          }
          while (puVar17 = puVar18, puVar14 = puVar18, puVar18 < puVar16) {
            while (puVar14 = puVar14 + 0x18, puVar14 <= puVar16) {
              if ((*puVar17 < *puVar14) ||
                 ((*puVar17 <= *puVar14 &&
                  ((puVar17[1] < puVar14[1] ||
                   ((puVar17[1] == puVar14[1] &&
                    ((puVar17[2] < puVar14[2] ||
                     ((puVar17[2] == puVar14[2] && (puVar17[3] < puVar14[3])))))))))))) {
                puVar17 = puVar14;
              }
            }
            puVar14 = puVar16 + -0x18;
            puVar26 = puVar17;
            puVar27 = &local_3d8;
            for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
              *puVar27 = *(undefined8 *)puVar26;
              puVar26 = puVar26 + 2;
              puVar27 = puVar27 + 1;
            }
            puVar26 = puVar16;
            for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
              *(undefined8 *)puVar17 = *(undefined8 *)puVar26;
              puVar26 = puVar26 + 2;
              puVar17 = puVar17 + 2;
            }
            puVar27 = &local_3d8;
            puVar17 = puVar16;
            for (lVar20 = 0xc; puVar16 = puVar14, lVar20 != 0; lVar20 = lVar20 + -1) {
              *(undefined8 *)puVar17 = *puVar27;
              puVar27 = puVar27 + 1;
              puVar17 = puVar17 + 2;
            }
          }
          goto LAB_143e32a1d;
        }
LAB_143e32676:
        if (uVar37 != 0) {
          iVar38 = (iVar38 - (iVar38 + -1 >> 0x1f)) + -1 >> 1;
          iVar36 = iVar38;
joined_r0x000143e3269b:
          do {
            iVar11 = iVar36 * 2 + 1;
            if (iVar11 < (int)uVar37) {
              iVar35 = iVar36 * 2 + 2;
              if (iVar35 < (int)uVar37) {
                lVar22 = (longlong)iVar35;
                lVar20 = (longlong)iVar11;
                if ((puVar18[lVar22 * 0x18] < puVar18[lVar20 * 0x18]) ||
                   ((puVar18[lVar22 * 0x18] <= puVar18[lVar20 * 0x18] &&
                    ((puVar18[lVar22 * 0x18 + 1] < puVar18[lVar20 * 0x18 + 1] ||
                     ((puVar18[lVar22 * 0x18 + 1] == puVar18[lVar20 * 0x18 + 1] &&
                      ((puVar18[lVar22 * 0x18 + 2] < puVar18[lVar20 * 0x18 + 2] ||
                       ((puVar18[lVar22 * 0x18 + 2] == puVar18[lVar20 * 0x18 + 2] &&
                        (puVar18[lVar22 * 0x18 + 3] < puVar18[lVar20 * 0x18 + 3]))))))))))))
                goto LAB_143e326ea;
              }
              else {
LAB_143e326ea:
                lVar22 = (longlong)iVar11;
                iVar35 = iVar11;
              }
              puVar16 = puVar18 + (longlong)iVar36 * 0x18;
              puVar14 = puVar18 + lVar22 * 0x18;
              if ((puVar18[(longlong)iVar36 * 0x18] < puVar18[lVar22 * 0x18]) ||
                 ((puVar18[(longlong)iVar36 * 0x18] == puVar18[lVar22 * 0x18] &&
                  ((puVar16[1] < puVar14[1] ||
                   ((puVar16[1] == puVar14[1] &&
                    ((puVar16[2] < puVar14[2] ||
                     ((puVar16[2] == puVar14[2] && (puVar16[3] < puVar14[3])))))))))))) {
                puVar17 = puVar16;
                puVar27 = &local_3d8;
                for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
                  *puVar27 = *(undefined8 *)puVar17;
                  puVar17 = puVar17 + 2;
                  puVar27 = puVar27 + 1;
                }
                puVar17 = puVar14;
                for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
                  *(undefined8 *)puVar16 = *(undefined8 *)puVar17;
                  puVar17 = puVar17 + 2;
                  puVar16 = puVar16 + 2;
                }
                puVar27 = &local_3d8;
                for (lVar20 = 0xc; iVar36 = iVar35, lVar20 != 0; lVar20 = lVar20 + -1) {
                  *(undefined8 *)puVar14 = *puVar27;
                  puVar27 = puVar27 + 1;
                  puVar14 = puVar14 + 2;
                }
                goto joined_r0x000143e3269b;
              }
            }
            bVar45 = iVar38 != 0;
            iVar38 = iVar38 + -1;
            iVar36 = iVar38;
          } while (bVar45);
          if (1 < (int)uVar37) {
            puVar16 = puVar18;
            puVar27 = &local_3d8;
            for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
              *puVar27 = *(undefined8 *)puVar16;
              puVar16 = puVar16 + 2;
              puVar27 = puVar27 + 1;
            }
            puVar16 = puVar18 + ((ulonglong)uVar37 - 1) * 0x18;
            puVar14 = puVar18;
            for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
              *(undefined8 *)puVar14 = *(undefined8 *)puVar16;
              puVar16 = puVar16 + 2;
              puVar14 = puVar14 + 2;
            }
            puVar27 = &local_3d8;
            puVar16 = puVar18 + ((ulonglong)uVar37 - 1) * 0x18;
            for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
              *(undefined8 *)puVar16 = *puVar27;
              puVar27 = puVar27 + 1;
              puVar16 = puVar16 + 2;
            }
            uVar33 = (ulonglong)uVar37 - 1;
            if (uVar37 != 2) {
              do {
                iVar38 = 0;
                iVar36 = 1;
                iVar11 = 0;
                do {
                  iVar35 = iVar38 + 2;
                  lVar20 = (longlong)iVar35;
                  if (lVar20 < (longlong)uVar33) {
                    lVar22 = (longlong)iVar36;
                    if ((puVar18[lVar20 * 0x18] < puVar18[lVar22 * 0x18]) ||
                       ((puVar18[lVar20 * 0x18] <= puVar18[lVar22 * 0x18] &&
                        ((puVar18[lVar20 * 0x18 + 1] < puVar18[lVar22 * 0x18 + 1] ||
                         ((puVar18[lVar20 * 0x18 + 1] == puVar18[lVar22 * 0x18 + 1] &&
                          ((puVar18[lVar20 * 0x18 + 2] < puVar18[lVar22 * 0x18 + 2] ||
                           ((puVar18[lVar20 * 0x18 + 2] == puVar18[lVar22 * 0x18 + 2] &&
                            (puVar18[lVar20 * 0x18 + 3] < puVar18[lVar22 * 0x18 + 3]))))))))))))
                    goto LAB_143e3286d;
                  }
                  else {
LAB_143e3286d:
                    lVar20 = (longlong)iVar36;
                    iVar35 = iVar36;
                  }
                  puVar16 = puVar18 + (longlong)iVar11 * 0x18;
                  puVar14 = puVar18 + lVar20 * 0x18;
                  if ((puVar18[lVar20 * 0x18] <= puVar18[(longlong)iVar11 * 0x18]) &&
                     ((puVar18[(longlong)iVar11 * 0x18] != puVar18[lVar20 * 0x18] ||
                      ((puVar14[1] <= puVar16[1] &&
                       ((puVar16[1] != puVar14[1] ||
                        ((puVar14[2] <= puVar16[2] &&
                         ((puVar16[2] != puVar14[2] || (puVar14[3] <= puVar16[3])))))))))))) break;
                  puVar17 = puVar16;
                  puVar27 = &local_3d8;
                  for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
                    *puVar27 = *(undefined8 *)puVar17;
                    puVar17 = puVar17 + 2;
                    puVar27 = puVar27 + 1;
                  }
                  puVar17 = puVar14;
                  for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
                    *(undefined8 *)puVar16 = *(undefined8 *)puVar17;
                    puVar17 = puVar17 + 2;
                    puVar16 = puVar16 + 2;
                  }
                  puVar27 = &local_3d8;
                  for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
                    *(undefined8 *)puVar14 = *puVar27;
                    puVar27 = puVar27 + 1;
                    puVar14 = puVar14 + 2;
                  }
                  iVar38 = iVar35 * 2;
                  iVar36 = iVar35 * 2 + 1;
                  iVar11 = iVar35;
                } while ((longlong)iVar36 < (longlong)uVar33);
                puVar16 = puVar18;
                puVar27 = &local_3d8;
                for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
                  *puVar27 = *(undefined8 *)puVar16;
                  puVar16 = puVar16 + 2;
                  puVar27 = puVar27 + 1;
                }
                puVar16 = puVar18 + (uVar33 - 1) * 0x18;
                puVar14 = puVar18;
                for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
                  *(undefined8 *)puVar14 = *(undefined8 *)puVar16;
                  puVar16 = puVar16 + 2;
                  puVar14 = puVar14 + 2;
                }
                puVar27 = &local_3d8;
                puVar16 = puVar18 + (uVar33 - 1) * 0x18;
                for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
                  *(undefined8 *)puVar16 = *puVar27;
                  puVar27 = puVar27 + 1;
                  puVar16 = puVar16 + 2;
                }
                bVar45 = 2 < uVar33;
                uVar33 = uVar33 - 1;
              } while (bVar45);
            }
          }
        }
LAB_143e32a1d:
        plVar34 = plVar34 + -3;
      } while (&local_348 <= plVar34);
      lVar20 = *(longlong *)(local_3f0 + 8);
      iVar36 = *(int *)(lVar20 + 0xb8);
    }
    if (0 < iVar36) {
      plVar34 = (longlong *)0x0;
      do {
        lVar20 = *(longlong *)(lVar20 + 0xb0);
        lVar22 = (longlong)plVar34 * 0x60;
        plVar29 = (longlong *)(lVar20 + lVar22);
        *(int *)(lVar20 + 0x48 + lVar22) = (int)plVar34;
        iVar36 = *(int *)(lVar20 + 0x58 + lVar22);
        if (1 < (longlong)iVar36) {
          lVar20 = plVar29[10];
          local_400 = plVar29;
          local_3e0 = plVar34;
          memset(local_338,0,0x2f0);
          local_340 = lVar20 + (longlong)iVar36 * 0x28 + -0x28;
          local_348 = lVar20;
          fVar46 = logf((float)iVar36);
          local_338[0] = (int)(longlong)(fVar46 + fVar46);
          plVar34 = &local_348;
          do {
            piVar24 = (int *)*plVar34;
            piVar28 = (int *)plVar34[1];
            iVar36 = (int)plVar34[2];
            iVar38 = (int)((ulonglong)((longlong)piVar28 - (longlong)piVar24) >> 3) * -0x33333333;
            uVar37 = iVar38 + 1;
            piVar31 = piVar28;
            piVar40 = piVar24;
            local_3f8 = plVar34;
            if (iVar36 != 0) {
LAB_143e32b00:
              if (8 < (int)uVar37) {
                local_3e8 = CONCAT44(local_3e8._4_4_,iVar36);
                uVar33 = (ulonglong)(uVar37 >> 1);
                local_3b8 = *(undefined8 *)(piVar24 + uVar33 * 10 + 8);
                uVar15 = *(undefined8 *)(piVar24 + uVar33 * 10);
                uVar1 = *(undefined8 *)(piVar24 + uVar33 * 10 + 2);
                local_3c8 = *(undefined8 *)(piVar24 + uVar33 * 10 + 4);
                uStack_3c0 = *(undefined8 *)(piVar24 + uVar33 * 10 + 4 + 2);
                *(undefined8 *)(piVar24 + uVar33 * 10 + 8) = *(undefined8 *)(piVar24 + 8);
                uVar2 = *(undefined8 *)piVar24;
                uVar3 = *(undefined8 *)(piVar24 + 2);
                uVar4 = *(undefined8 *)(piVar24 + 6);
                *(undefined8 *)(piVar24 + uVar33 * 10 + 4) = *(undefined8 *)(piVar24 + 4);
                *(undefined8 *)(piVar24 + uVar33 * 10 + 4 + 2) = uVar4;
                *(undefined8 *)(piVar24 + uVar33 * 10) = uVar2;
                *(undefined8 *)(piVar24 + uVar33 * 10 + 2) = uVar3;
                *(undefined8 *)(piVar24 + 8) = local_3b8;
                local_3d8._0_4_ = (int)uVar15;
                local_3d8._4_4_ = (int)((ulonglong)uVar15 >> 0x20);
                uStack_3d0._0_4_ = (int)uVar1;
                uStack_3d0._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
                *(undefined8 *)(piVar24 + 4) = local_3c8;
                *(undefined8 *)(piVar24 + 6) = uStack_3c0;
                *piVar24 = (int)local_3d8;
                piVar24[1] = local_3d8._4_4_;
                piVar24[2] = (int)uStack_3d0;
                piVar24[3] = uStack_3d0._4_4_;
                piVar41 = piVar31 + 10;
                piVar23 = piVar24;
                local_3d8 = uVar15;
                uStack_3d0 = uVar1;
                do {
                  piVar8 = piVar23 + 10;
                  piVar32 = piVar23 + 10;
                  do {
                    piVar23 = piVar32;
                    piVar39 = piVar8;
                    if (piVar31 < piVar23) break;
                    if (*piVar24 == *piVar23) {
                      iVar36 = piVar24[1] - piVar23[1];
                    }
                    else {
                      iVar36 = FUN_14002c2bd();
                    }
                    piVar8 = piVar39 + 10;
                    piVar32 = piVar23 + 10;
                  } while (-1 < iVar36);
                  piVar8 = piVar41 + -0x14;
                  do {
                    piVar32 = piVar41;
                    piVar19 = piVar8;
                    piVar41 = piVar32 + -10;
                    if (piVar41 <= piVar24) break;
                    if (*piVar41 == *piVar24) {
                      iVar36 = piVar32[-9] - piVar24[1];
                    }
                    else {
                      iVar36 = FUN_14002c2bd();
                    }
                    piVar8 = piVar19 + -10;
                  } while (-1 < iVar36);
                  if (piVar41 < piVar23) goto LAB_143e32c3e;
                  local_3b8 = *(undefined8 *)(piVar23 + 8);
                  uVar15 = *(undefined8 *)piVar23;
                  uVar1 = *(undefined8 *)(piVar23 + 2);
                  local_3c8 = *(undefined8 *)(piVar23 + 4);
                  uStack_3c0 = *(undefined8 *)(piVar23 + 6);
                  *(undefined8 *)(piVar23 + 8) = *(undefined8 *)(piVar32 + -2);
                  uVar2 = *(undefined8 *)piVar41;
                  uVar3 = *(undefined8 *)(piVar32 + -8);
                  uVar4 = *(undefined8 *)(piVar32 + -4);
                  *(undefined8 *)(piVar23 + 4) = *(undefined8 *)(piVar32 + -6);
                  *(undefined8 *)(piVar23 + 6) = uVar4;
                  *(undefined8 *)piVar23 = uVar2;
                  *(undefined8 *)(piVar23 + 2) = uVar3;
                  *(undefined8 *)(piVar32 + -2) = local_3b8;
                  local_3d8._0_4_ = (int)uVar15;
                  local_3d8._4_4_ = (int)((ulonglong)uVar15 >> 0x20);
                  uStack_3d0._0_4_ = (int)uVar1;
                  uStack_3d0._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
                  *(undefined8 *)(piVar32 + -6) = local_3c8;
                  *(undefined8 *)(piVar32 + -4) = uStack_3c0;
                  *piVar41 = (int)local_3d8;
                  piVar32[-9] = local_3d8._4_4_;
                  piVar32[-8] = (int)uStack_3d0;
                  piVar32[-7] = uStack_3d0._4_4_;
                  local_3d8 = uVar15;
                  uStack_3d0 = uVar1;
                } while( true );
              }
              for (; plVar34 = local_3f8, piVar40 = piVar24, piVar28 = piVar24, piVar24 < piVar31;
                  piVar31 = piVar31 + -10) {
                while (piVar41 = piVar40, piVar28 = piVar28 + 10, piVar28 <= piVar31) {
                  if (*piVar41 == *piVar28) {
                    iVar36 = piVar41[1] - piVar28[1];
                  }
                  else {
                    iVar36 = FUN_14002c2bd();
                  }
                  piVar40 = piVar28;
                  if (-1 < iVar36) {
                    piVar40 = piVar41;
                  }
                }
                local_3b8 = *(undefined8 *)(piVar41 + 8);
                local_3d8 = *(undefined8 *)piVar41;
                uStack_3d0 = *(undefined8 *)(piVar41 + 2);
                local_3c8 = *(undefined8 *)(piVar41 + 4);
                uStack_3c0 = *(undefined8 *)(piVar41 + 6);
                uVar3 = local_3d8;
                uVar4 = uStack_3d0;
                *(undefined8 *)(piVar41 + 8) = *(undefined8 *)(piVar31 + 8);
                uVar15 = *(undefined8 *)piVar31;
                uVar1 = *(undefined8 *)(piVar31 + 2);
                uVar2 = *(undefined8 *)(piVar31 + 6);
                *(undefined8 *)(piVar41 + 4) = *(undefined8 *)(piVar31 + 4);
                *(undefined8 *)(piVar41 + 6) = uVar2;
                *(undefined8 *)piVar41 = uVar15;
                *(undefined8 *)(piVar41 + 2) = uVar1;
                *(undefined8 *)(piVar31 + 8) = local_3b8;
                local_3d8._4_4_ = (int)((ulonglong)local_3d8 >> 0x20);
                uStack_3d0._4_4_ = (int)((ulonglong)uStack_3d0 >> 0x20);
                *(undefined8 *)(piVar31 + 4) = local_3c8;
                *(undefined8 *)(piVar31 + 6) = uStack_3c0;
                *piVar31 = (int)local_3d8;
                piVar31[1] = local_3d8._4_4_;
                piVar31[2] = (int)uStack_3d0;
                piVar31[3] = uStack_3d0._4_4_;
                local_3d8 = uVar3;
                uStack_3d0 = uVar4;
              }
              goto LAB_143e330dd;
            }
LAB_143e32d39:
            plVar34 = local_3f8;
            if (uVar37 != 0) {
              iVar36 = (iVar38 - (iVar38 + -1 >> 0x1f)) + -1 >> 1;
              iVar38 = iVar36;
joined_r0x000143e32d5a:
              do {
                iVar11 = iVar36 * 2 + 1;
                if (iVar11 < (int)uVar37) {
                  iVar35 = iVar36 * 2 + 2;
                  if (iVar35 < (int)uVar37) {
                    if (piVar24[(longlong)iVar35 * 10] == piVar24[(longlong)iVar11 * 10]) {
                      iVar10 = piVar24[(longlong)iVar35 * 10 + 1] -
                               piVar24[(longlong)iVar11 * 10 + 1];
                    }
                    else {
                      iVar10 = FUN_14002c2bd();
                    }
                    if (-1 < iVar10) {
                      iVar11 = iVar35;
                    }
                  }
                  piVar31 = piVar24 + (longlong)iVar36 * 10;
                  piVar28 = piVar24 + (longlong)iVar11 * 10;
                  if (*piVar31 == *piVar28) {
                    iVar36 = piVar31[1] - piVar28[1];
                  }
                  else {
                    iVar36 = FUN_14002c2bd();
                  }
                  if (iVar36 < 0) {
                    local_3b8 = *(undefined8 *)(piVar31 + 8);
                    local_3d8 = *(undefined8 *)piVar31;
                    uStack_3d0 = *(undefined8 *)(piVar31 + 2);
                    local_3c8 = *(undefined8 *)(piVar31 + 4);
                    uStack_3c0 = *(undefined8 *)(piVar31 + 6);
                    uVar3 = local_3d8;
                    uVar4 = uStack_3d0;
                    *(undefined8 *)(piVar31 + 8) = *(undefined8 *)(piVar28 + 8);
                    uVar15 = *(undefined8 *)piVar28;
                    uVar1 = *(undefined8 *)(piVar28 + 2);
                    uVar2 = *(undefined8 *)(piVar28 + 6);
                    *(undefined8 *)(piVar31 + 4) = *(undefined8 *)(piVar28 + 4);
                    *(undefined8 *)(piVar31 + 6) = uVar2;
                    *(undefined8 *)piVar31 = uVar15;
                    *(undefined8 *)(piVar31 + 2) = uVar1;
                    *(undefined8 *)(piVar28 + 8) = local_3b8;
                    local_3d8._4_4_ = (int)((ulonglong)local_3d8 >> 0x20);
                    uStack_3d0._4_4_ = (int)((ulonglong)uStack_3d0 >> 0x20);
                    *(undefined8 *)(piVar28 + 4) = local_3c8;
                    *(undefined8 *)(piVar28 + 6) = uStack_3c0;
                    *piVar28 = (int)local_3d8;
                    piVar28[1] = local_3d8._4_4_;
                    piVar28[2] = (int)uStack_3d0;
                    piVar28[3] = uStack_3d0._4_4_;
                    iVar36 = iVar11;
                    local_3d8 = uVar3;
                    uStack_3d0 = uVar4;
                    goto joined_r0x000143e32d5a;
                  }
                }
                bVar45 = iVar38 != 0;
                iVar36 = iVar38 + -1;
                iVar38 = iVar36;
              } while (bVar45);
              plVar34 = local_3f8;
              if (1 < (int)uVar37) {
                uVar33 = (ulonglong)uVar37 - 1;
                local_3b8 = *(undefined8 *)(piVar24 + 8);
                local_3d8 = *(undefined8 *)piVar24;
                uStack_3d0 = *(undefined8 *)(piVar24 + 2);
                local_3c8 = *(undefined8 *)(piVar24 + 4);
                uStack_3c0 = *(undefined8 *)(piVar24 + 6);
                uVar5 = local_3c8;
                uVar6 = uStack_3c0;
                uVar3 = local_3d8;
                uVar4 = uStack_3d0;
                *(undefined8 *)(piVar24 + 8) = *(undefined8 *)(piVar24 + uVar33 * 10 + 8);
                uVar15 = *(undefined8 *)(piVar24 + uVar33 * 10);
                uVar1 = *(undefined8 *)(piVar24 + uVar33 * 10 + 2);
                uVar2 = *(undefined8 *)(piVar24 + uVar33 * 10 + 4 + 2);
                *(undefined8 *)(piVar24 + 4) = *(undefined8 *)(piVar24 + uVar33 * 10 + 4);
                *(undefined8 *)(piVar24 + 6) = uVar2;
                *(undefined8 *)piVar24 = uVar15;
                *(undefined8 *)(piVar24 + 2) = uVar1;
                *(undefined8 *)(piVar24 + uVar33 * 10 + 8) = local_3b8;
                local_3d8._4_4_ = (int)((ulonglong)local_3d8 >> 0x20);
                uStack_3d0._4_4_ = (int)((ulonglong)uStack_3d0 >> 0x20);
                local_3c8._4_4_ = (int)((ulonglong)local_3c8 >> 0x20);
                uStack_3c0._4_4_ = (int)((ulonglong)uStack_3c0 >> 0x20);
                piVar31 = piVar24 + uVar33 * 10 + 4;
                *piVar31 = (int)local_3c8;
                piVar31[1] = local_3c8._4_4_;
                piVar31[2] = (int)uStack_3c0;
                piVar31[3] = uStack_3c0._4_4_;
                piVar31 = piVar24 + uVar33 * 10;
                *piVar31 = (int)local_3d8;
                piVar31[1] = local_3d8._4_4_;
                piVar31[2] = (int)uStack_3d0;
                piVar31[3] = uStack_3d0._4_4_;
                local_3d8 = uVar3;
                uStack_3d0 = uVar4;
                local_3c8 = uVar5;
                uStack_3c0 = uVar6;
                if (uVar37 != 2) {
                  do {
                    iVar36 = 0;
                    iVar11 = 1;
                    iVar38 = 0;
                    do {
                      lVar20 = (longlong)(iVar36 + 2);
                      iVar35 = iVar11;
                      if (lVar20 < (longlong)uVar33) {
                        if (piVar24[lVar20 * 10] == piVar24[(longlong)iVar11 * 10]) {
                          iVar11 = piVar24[lVar20 * 10 + 1] - piVar24[(longlong)iVar11 * 10 + 1];
                        }
                        else {
                          iVar11 = FUN_14002c2bd();
                        }
                        if (-1 < iVar11) {
                          iVar35 = iVar36 + 2;
                        }
                      }
                      piVar31 = piVar24 + (longlong)iVar38 * 10;
                      piVar28 = piVar24 + (longlong)iVar35 * 10;
                      if (*piVar31 == *piVar28) {
                        iVar36 = piVar31[1] - piVar28[1];
                      }
                      else {
                        iVar36 = FUN_14002c2bd();
                      }
                      if (-1 < iVar36) break;
                      local_3b8 = *(undefined8 *)(piVar31 + 8);
                      uVar15 = *(undefined8 *)piVar31;
                      uVar1 = *(undefined8 *)(piVar31 + 2);
                      uVar2 = *(undefined8 *)(piVar31 + 4);
                      uVar3 = *(undefined8 *)(piVar31 + 6);
                      *(undefined8 *)(piVar31 + 8) = *(undefined8 *)(piVar28 + 8);
                      uVar4 = *(undefined8 *)piVar28;
                      uVar5 = *(undefined8 *)(piVar28 + 2);
                      uVar6 = *(undefined8 *)(piVar28 + 6);
                      *(undefined8 *)(piVar31 + 4) = *(undefined8 *)(piVar28 + 4);
                      *(undefined8 *)(piVar31 + 6) = uVar6;
                      *(undefined8 *)piVar31 = uVar4;
                      *(undefined8 *)(piVar31 + 2) = uVar5;
                      *(undefined8 *)(piVar28 + 8) = local_3b8;
                      local_3d8._0_4_ = (int)uVar15;
                      local_3d8._4_4_ = (int)((ulonglong)uVar15 >> 0x20);
                      uStack_3d0._0_4_ = (int)uVar1;
                      uStack_3d0._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
                      local_3c8._0_4_ = (int)uVar2;
                      local_3c8._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
                      uStack_3c0._0_4_ = (int)uVar3;
                      uStack_3c0._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
                      piVar28[4] = (int)local_3c8;
                      piVar28[5] = local_3c8._4_4_;
                      piVar28[6] = (int)uStack_3c0;
                      piVar28[7] = uStack_3c0._4_4_;
                      *piVar28 = (int)local_3d8;
                      piVar28[1] = local_3d8._4_4_;
                      piVar28[2] = (int)uStack_3d0;
                      piVar28[3] = uStack_3d0._4_4_;
                      iVar36 = iVar35 * 2;
                      iVar11 = iVar35 * 2 + 1;
                      local_3d8 = uVar15;
                      uStack_3d0 = uVar1;
                      local_3c8 = uVar2;
                      uStack_3c0 = uVar3;
                      iVar38 = iVar35;
                    } while ((longlong)iVar11 < (longlong)uVar33);
                    uVar12 = uVar33 - 1;
                    local_3b8 = *(undefined8 *)(piVar24 + 8);
                    local_3d8 = *(undefined8 *)piVar24;
                    uStack_3d0 = *(undefined8 *)(piVar24 + 2);
                    local_3c8 = *(undefined8 *)(piVar24 + 4);
                    uStack_3c0 = *(undefined8 *)(piVar24 + 6);
                    uVar5 = local_3c8;
                    uVar6 = uStack_3c0;
                    uVar3 = local_3d8;
                    uVar4 = uStack_3d0;
                    *(undefined8 *)(piVar24 + 8) = *(undefined8 *)(piVar24 + uVar12 * 10 + 8);
                    uVar15 = *(undefined8 *)(piVar24 + uVar12 * 10);
                    uVar1 = *(undefined8 *)(piVar24 + uVar12 * 10 + 2);
                    uVar2 = *(undefined8 *)(piVar24 + uVar12 * 10 + 4 + 2);
                    *(undefined8 *)(piVar24 + 4) = *(undefined8 *)(piVar24 + uVar12 * 10 + 4);
                    *(undefined8 *)(piVar24 + 6) = uVar2;
                    *(undefined8 *)piVar24 = uVar15;
                    *(undefined8 *)(piVar24 + 2) = uVar1;
                    *(undefined8 *)(piVar24 + uVar12 * 10 + 8) = local_3b8;
                    local_3d8._4_4_ = (int)((ulonglong)local_3d8 >> 0x20);
                    uStack_3d0._4_4_ = (int)((ulonglong)uStack_3d0 >> 0x20);
                    local_3c8._4_4_ = (int)((ulonglong)local_3c8 >> 0x20);
                    uStack_3c0._4_4_ = (int)((ulonglong)uStack_3c0 >> 0x20);
                    piVar31 = piVar24 + uVar12 * 10 + 4;
                    *piVar31 = (int)local_3c8;
                    piVar31[1] = local_3c8._4_4_;
                    piVar31[2] = (int)uStack_3c0;
                    piVar31[3] = uStack_3c0._4_4_;
                    piVar31 = piVar24 + uVar12 * 10;
                    *piVar31 = (int)local_3d8;
                    piVar31[1] = local_3d8._4_4_;
                    piVar31[2] = (int)uStack_3d0;
                    piVar31[3] = uStack_3d0._4_4_;
                    bVar45 = 2 < uVar33;
                    plVar34 = local_3f8;
                    uVar33 = uVar12;
                    local_3d8 = uVar3;
                    uStack_3d0 = uVar4;
                    local_3c8 = uVar5;
                    uStack_3c0 = uVar6;
                  } while (bVar45);
                }
              }
            }
LAB_143e330dd:
            plVar34 = plVar34 + -3;
          } while (&local_348 <= plVar34);
          iVar36 = (int)local_400[0xb];
          plVar34 = local_3e0;
          plVar29 = local_400;
        }
        if (0 < iVar36) {
          lVar20 = 0x24;
          lVar22 = 0;
          do {
            *(int *)(plVar29[10] + lVar20) = (int)lVar22;
            lVar22 = lVar22 + 1;
            lVar20 = lVar20 + 0x28;
          } while (lVar22 < (int)plVar29[0xb]);
        }
        plVar34 = (longlong *)((longlong)plVar34 + 1);
        lVar20 = *(longlong *)(local_3f0 + 8);
      } while ((longlong)plVar34 < (longlong)*(int *)(lVar20 + 0xb8));
    }
    iVar36 = *(int *)(lVar20 + 0x118);
    if (1 < (longlong)iVar36) {
      lVar20 = *(longlong *)(lVar20 + 0x110);
      memset(local_338,0,0x2f0);
      local_340 = (longlong)iVar36 * 0x88 + lVar20 + -0x88;
      local_348 = lVar20;
      fVar46 = logf((float)iVar36);
      local_338[0] = (int)(longlong)(fVar46 + fVar46);
      plVar34 = &local_348;
      do {
        _Src_00 = (longlong *)*plVar34;
        plVar29 = (longlong *)plVar34[1];
        iVar36 = (int)plVar34[2];
        iVar38 = (int)((ulonglong)((longlong)plVar29 - (longlong)_Src_00) >> 3) * -0xf0f0f0f;
        uVar33 = (ulonglong)(iVar38 + 1);
        plVar42 = _Src_00;
        plVar44 = plVar29;
        local_400 = plVar34;
        if (iVar36 != 0) {
LAB_143e331e7:
          if (8 < (int)(uint)uVar33) {
            local_3e8 = CONCAT44(local_3e8._4_4_,iVar36);
            local_3f8 = plVar44;
            local_3e0 = plVar42;
            memcpy(&local_3d8,_Src_00 + (ulonglong)((uint)uVar33 >> 1) * 0x11,0x88);
            memcpy(_Src_00 + (ulonglong)((uint)uVar33 >> 1) * 0x11,_Src_00,0x88);
            memcpy(_Src_00,&local_3d8,0x88);
            _Src_01 = plVar29 + 0x11;
            _Src = _Src_00;
            do {
              plVar34 = _Src + 0x11;
              plVar44 = _Src + 0x11;
              do {
                _Src = plVar44;
                plVar42 = plVar34;
                if (plVar29 < _Src) break;
                cVar9 = FUN_143e394d0(_Src_00,_Src);
                plVar34 = plVar42 + 0x11;
                plVar44 = _Src + 0x11;
              } while (cVar9 == '\0');
              plVar34 = _Src_01 + -0x22;
              do {
                plVar30 = _Src_01;
                plVar44 = plVar34;
                _Src_01 = plVar30 + -0x11;
                if (_Src_01 <= _Src_00) break;
                cVar9 = FUN_143e394d0(_Src_01,_Src_00);
                plVar34 = plVar44 + -0x11;
              } while (cVar9 == '\0');
              if (_Src_01 < _Src) goto LAB_143e332f7;
              memcpy(&local_3d8,_Src,0x88);
              memcpy(_Src,_Src_01,0x88);
              memcpy(_Src_01,&local_3d8,0x88);
            } while( true );
          }
          for (; plVar34 = local_400, plVar44 = _Src_00, plVar42 = _Src_00, _Src_00 < plVar29;
              plVar29 = plVar29 + -0x11) {
            while (plVar34 = plVar44, plVar42 = plVar42 + 0x11, plVar42 <= plVar29) {
              cVar9 = FUN_143e394d0(plVar34,plVar42);
              plVar44 = plVar42;
              if (cVar9 == '\0') {
                plVar44 = plVar34;
              }
            }
            memcpy(&local_3d8,plVar34,0x88);
            memcpy(plVar34,plVar29,0x88);
            memcpy(plVar29,&local_3d8,0x88);
          }
          goto LAB_143e336fc;
        }
LAB_143e333de:
        iVar36 = (int)uVar33;
        plVar34 = local_400;
        if (iVar36 != 0) {
          uVar37 = (iVar38 - (iVar38 + -1 >> 0x1f)) + -1 >> 1;
          do {
            uVar12 = (ulonglong)uVar37;
            local_3e8 = uVar12;
            while (uVar7 = uVar37 * 2 + 1, (int)uVar7 < iVar36) {
              uVar43 = uVar37 * 2 + 2;
              uVar37 = uVar7;
              if (((int)uVar43 < iVar36) &&
                 (cVar9 = FUN_143e394d0(_Src_00 + (longlong)(int)uVar43 * 0x11,
                                        _Src_00 + (longlong)(int)uVar7 * 0x11), cVar9 == '\0')) {
                uVar37 = uVar43;
              }
              plVar34 = _Src_00 + (longlong)(int)uVar12 * 0x11;
              cVar9 = FUN_143e394d0(plVar34);
              if (cVar9 == '\0') break;
              memcpy(&local_3d8,plVar34,0x88);
              memcpy(plVar34,_Src_00 + (longlong)(int)uVar37 * 0x11,0x88);
              memcpy(_Src_00 + (longlong)(int)uVar37 * 0x11,&local_3d8,0x88);
              uVar12 = (ulonglong)uVar37;
            }
            uVar37 = (int)local_3e8 - 1;
          } while ((int)local_3e8 != 0);
          plVar34 = local_400;
          if (1 < iVar36) {
            memcpy(&local_3d8,_Src_00,0x88);
            memcpy(_Src_00,_Src_00 + uVar33 + (uVar33 - 1) * 0x10 + -1,0x88);
            memcpy(_Src_00 + uVar33 + (uVar33 - 1) * 0x10 + -1,&local_3d8,0x88);
            plVar34 = local_400;
            uVar33 = uVar33 - 1;
            if (iVar36 != 2) {
              do {
                iVar36 = 0;
                iVar11 = 1;
                iVar38 = 0;
                do {
                  iVar36 = iVar36 + 2;
                  iVar35 = iVar11;
                  if (((longlong)iVar36 < (longlong)uVar33) &&
                     (cVar9 = FUN_143e394d0(_Src_00 + (longlong)iVar36 * 0x11,
                                            _Src_00 + (longlong)iVar11 * 0x11), cVar9 == '\0')) {
                    iVar35 = iVar36;
                  }
                  plVar29 = _Src_00 + (longlong)iVar38 * 0x11;
                  plVar34 = _Src_00 + (longlong)iVar35 * 0x11;
                  cVar9 = FUN_143e394d0(plVar29,plVar34);
                  if (cVar9 == '\0') break;
                  memcpy(&local_3d8,plVar29,0x88);
                  memcpy(plVar29,plVar34,0x88);
                  memcpy(plVar34,&local_3d8,0x88);
                  iVar36 = iVar35 * 2;
                  iVar11 = iVar35 * 2 + 1;
                  iVar38 = iVar35;
                } while ((longlong)iVar11 < (longlong)uVar33);
                memcpy(&local_3d8,_Src_00,0x88);
                memcpy(_Src_00,_Src_00 + uVar33 + (uVar33 - 1) * 0x10 + -1,0x88);
                memcpy(_Src_00 + uVar33 + (uVar33 - 1) * 0x10 + -1,&local_3d8,0x88);
                bVar45 = 2 < uVar33;
                plVar34 = local_400;
                uVar33 = uVar33 - 1;
              } while (bVar45);
            }
          }
        }
LAB_143e336fc:
        plVar34 = plVar34 + -3;
      } while (&local_348 <= plVar34);
      lVar20 = *(longlong *)(local_3f0 + 8);
      iVar36 = *(int *)(lVar20 + 0x118);
    }
    if (0 < iVar36) {
      lVar22 = 0x80;
      lVar13 = 0;
      do {
        *(int *)(*(longlong *)(lVar20 + 0x110) + lVar22) = (int)lVar13;
        lVar13 = lVar13 + 1;
        lVar20 = *(longlong *)(local_3f0 + 8);
        lVar22 = lVar22 + 0x88;
      } while (lVar13 < *(int *)(lVar20 + 0x118));
    }
    if ((*(byte *)(local_3f0 + 0x10) & 8) != 0) {
      uVar15 = 0;
      if (*(longlong *)(lVar20 + 0x88) != 0) {
        uVar15 = *(undefined8 *)(lVar20 + 0x90);
      }
      FUN_146234050(uVar15);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143e31f39:
  local_3d8 = *(undefined8 *)puVar16;
  uStack_3d0 = *(undefined8 *)(puVar16 + 2);
  local_3c8 = *(undefined8 *)(puVar16 + 4);
  uStack_3c0 = *(undefined8 *)(puVar16 + 6);
  uVar15 = *(undefined8 *)puVar14;
  uVar1 = *(undefined8 *)(puVar14 + 2);
  uVar2 = *(undefined8 *)(puVar14 + 6);
  *(undefined8 *)(puVar16 + 4) = *(undefined8 *)(puVar14 + 4);
  *(undefined8 *)(puVar16 + 6) = uVar2;
  *(undefined8 *)puVar16 = uVar15;
  *(undefined8 *)(puVar16 + 2) = uVar1;
  *(undefined8 *)(puVar14 + 4) = local_3c8;
  *(undefined8 *)(puVar14 + 6) = uStack_3c0;
  *(undefined8 *)puVar14 = local_3d8;
  *(undefined8 *)(puVar14 + 2) = uStack_3d0;
  iVar36 = iVar36 + -1;
  puVar21 = puVar21 + -0x10;
  if ((longlong)puVar21 - (longlong)puVar16 < (longlong)puVar18 - (longlong)puVar17) {
    if (puVar17 < puVar18) {
      *plVar34 = (longlong)puVar17;
      plVar34[1] = (longlong)puVar18;
      *(int *)(plVar34 + 2) = iVar36;
      plVar34 = plVar34 + 3;
    }
    if (puVar14 <= puVar16 + 8) goto LAB_143e323c9;
  }
  else {
    if (puVar16 + 8 < puVar14) {
      *plVar34 = (longlong)puVar16;
      plVar34[1] = (longlong)puVar21;
      *(int *)(plVar34 + 2) = iVar36;
      plVar34 = plVar34 + 3;
    }
    puVar21 = puVar18;
    puVar16 = puVar17;
    if (puVar18 <= puVar17) goto LAB_143e323c9;
  }
  iVar38 = (int)((ulonglong)((longlong)puVar21 - (longlong)puVar16) >> 5);
  uVar37 = iVar38 + 1;
  puVar18 = puVar21;
  if (iVar36 == 0) goto LAB_143e31ff0;
  goto LAB_143e31e15;
code_r0x000143e325d1:
  for (; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar27 = *(undefined8 *)puVar26;
    puVar26 = puVar26 + 2;
    puVar27 = puVar27 + 1;
  }
  puVar26 = puVar14;
  puVar25 = puVar18;
  for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
    *(undefined8 *)puVar25 = *(undefined8 *)puVar26;
    puVar26 = puVar26 + 2;
    puVar25 = puVar25 + 2;
  }
  puVar27 = &local_3d8;
  puVar26 = puVar14;
  for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
    *(undefined8 *)puVar26 = *puVar27;
    puVar27 = puVar27 + 1;
    puVar26 = puVar26 + 2;
  }
  iVar36 = iVar36 + -1;
  puVar21 = puVar21 + -0x30;
  if ((longlong)puVar21 - (longlong)puVar18 < (longlong)puVar16 - (longlong)puVar17) {
    if (puVar17 < puVar16) {
      *plVar34 = (longlong)puVar17;
      plVar34[1] = (longlong)puVar16;
      *(int *)(plVar34 + 2) = iVar36;
      plVar34 = plVar34 + 3;
    }
    if (puVar14 <= puVar18 + 0x18) goto LAB_143e32a1d;
  }
  else {
    if (puVar18 + 0x18 < puVar14) {
      *plVar34 = (longlong)puVar18;
      plVar34[1] = (longlong)puVar21;
      *(int *)(plVar34 + 2) = iVar36;
      plVar34 = plVar34 + 3;
    }
    puVar21 = puVar16;
    puVar18 = puVar17;
    if (puVar16 <= puVar17) goto LAB_143e32a1d;
  }
  iVar38 = (int)((ulonglong)((longlong)puVar21 - (longlong)puVar18) >> 5) * -0x55555555;
  uVar37 = iVar38 + 1;
  puVar16 = puVar21;
  if (iVar36 == 0) goto LAB_143e32676;
  goto LAB_143e324bc;
LAB_143e32c3e:
  local_3b8 = *(undefined8 *)(piVar24 + 8);
  local_3d8 = *(undefined8 *)piVar24;
  uStack_3d0 = *(undefined8 *)(piVar24 + 2);
  local_3c8 = *(undefined8 *)(piVar24 + 4);
  uStack_3c0 = *(undefined8 *)(piVar24 + 6);
  uVar3 = local_3d8;
  uVar4 = uStack_3d0;
  *(undefined8 *)(piVar24 + 8) = *(undefined8 *)(piVar32 + -2);
  uVar15 = *(undefined8 *)piVar41;
  uVar1 = *(undefined8 *)(piVar32 + -8);
  uVar2 = *(undefined8 *)(piVar32 + -4);
  *(undefined8 *)(piVar24 + 4) = *(undefined8 *)(piVar32 + -6);
  *(undefined8 *)(piVar24 + 6) = uVar2;
  *(undefined8 *)piVar24 = uVar15;
  *(undefined8 *)(piVar24 + 2) = uVar1;
  *(undefined8 *)(piVar32 + -2) = local_3b8;
  local_3d8._4_4_ = (int)((ulonglong)local_3d8 >> 0x20);
  uStack_3d0._4_4_ = (int)((ulonglong)uStack_3d0 >> 0x20);
  *(undefined8 *)(piVar32 + -6) = local_3c8;
  *(undefined8 *)(piVar32 + -4) = uStack_3c0;
  *piVar41 = (int)local_3d8;
  piVar32[-9] = local_3d8._4_4_;
  piVar32[-8] = (int)uStack_3d0;
  piVar32[-7] = uStack_3d0._4_4_;
  iVar36 = (int)local_3e8 + -1;
  piVar32 = piVar32 + -0x14;
  local_3d8 = uVar3;
  uStack_3d0 = uVar4;
  if ((longlong)piVar19 - (longlong)piVar40 < (longlong)piVar28 - (longlong)piVar39) {
    if (piVar23 < piVar31) {
      *local_3f8 = (longlong)piVar23;
      local_3f8[1] = (longlong)piVar31;
      *(int *)(local_3f8 + 2) = iVar36;
      local_3f8 = local_3f8 + 3;
    }
    plVar34 = local_3f8;
    piVar39 = piVar24;
    piVar28 = piVar19;
    if (piVar41 <= piVar24 + 10) goto LAB_143e330dd;
  }
  else {
    plVar34 = local_3f8;
    if (piVar24 + 10 < piVar41) {
      *local_3f8 = (longlong)piVar24;
      local_3f8[1] = (longlong)piVar32;
      *(int *)(local_3f8 + 2) = iVar36;
      plVar34 = local_3f8 + 3;
    }
    piVar24 = piVar23;
    piVar32 = piVar31;
    piVar28 = piVar31;
    if (piVar31 <= piVar23) goto LAB_143e330dd;
  }
  local_3f8 = plVar34;
  iVar38 = (int)((ulonglong)((longlong)piVar28 - (longlong)piVar39) >> 3) * -0x33333333;
  uVar37 = iVar38 + 1;
  piVar31 = piVar32;
  piVar40 = piVar39;
  if (iVar36 == 0) goto LAB_143e32d39;
  goto LAB_143e32b00;
LAB_143e332f7:
  memcpy(&local_3d8,_Src_00,0x88);
  memcpy(_Src_00,_Src_01,0x88);
  memcpy(_Src_01,&local_3d8,0x88);
  iVar36 = (int)local_3e8 + -1;
  plVar30 = plVar30 + -0x22;
  if ((longlong)plVar44 - (longlong)local_3e0 < (longlong)local_3f8 - (longlong)plVar42) {
    if (_Src < plVar29) {
      *local_400 = (longlong)_Src;
      local_400[1] = (longlong)plVar29;
      *(int *)(local_400 + 2) = iVar36;
      local_400 = local_400 + 3;
    }
    plVar34 = local_400;
    plVar42 = _Src_00;
    if (_Src_01 <= _Src_00 + 0x11) goto LAB_143e336fc;
  }
  else {
    plVar34 = local_400;
    if (_Src_00 + 0x11 < _Src_01) {
      *local_400 = (longlong)_Src_00;
      local_400[1] = (longlong)plVar30;
      *(int *)(local_400 + 2) = iVar36;
      plVar34 = local_400 + 3;
    }
    plVar30 = plVar29;
    _Src_00 = _Src;
    plVar44 = plVar29;
    if (plVar29 <= _Src) goto LAB_143e336fc;
  }
  local_400 = plVar34;
  iVar38 = (int)((ulonglong)((longlong)plVar44 - (longlong)plVar42) >> 3) * -0xf0f0f0f;
  uVar33 = (ulonglong)(iVar38 + 1);
  plVar29 = plVar30;
  if (iVar36 == 0) goto LAB_143e333de;
  goto LAB_143e331e7;
}



// FUNCTION 143e33834 FUN_143e33834 body=807 status=ok
// SIG undefined FUN_143e33834(void)

void FUN_143e33834(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 *local_50;
  ulonglong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar3 = FUN_14155b406();
    lVar4 = FUN_14477b664(uVar3);
    param_2[1] = lVar4;
  }
  lVar5 = param_2[2];
  if (lVar5 == 0) {
    if ((lVar4 == 0) || (*param_2 == 0)) goto LAB_143e33b0b;
    plVar8 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar8 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar2 == '\0')) {
      param_2[2] = 0;
      goto LAB_143e33b0b;
    }
    uVar3 = (**(code **)(*plVar8 + 0x110))(plVar8);
    lVar5 = FUN_144aff482(uVar3,param_2);
    param_2[2] = lVar5;
    if (lVar5 == 0) goto LAB_143e33b0b;
    lVar4 = param_2[1];
  }
  lVar6 = *(longlong *)(param_1 + 8);
  if (lVar4 == 0) {
    uVar3 = FUN_14155b406();
    lVar4 = FUN_14477b664(uVar3);
    param_2[1] = lVar4;
    lVar5 = param_2[2];
    if (((lVar5 == 0) && (lVar5 = 0, lVar4 != 0)) && (*param_2 != 0)) {
      plVar8 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar8 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar2 == '\0')) {
        lVar5 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar8 + 0x110))(plVar8);
        lVar5 = FUN_144aff482(uVar3,param_2);
      }
      param_2[2] = lVar5;
    }
  }
  lVar4 = (longlong)*(int *)(lVar6 + 0x180);
  if (lVar4 != 0) {
    plVar8 = *(longlong **)(lVar6 + 0x178);
    lVar4 = lVar4 << 4;
    do {
      lVar6 = (**(code **)(*(longlong *)*plVar8 + 8))();
      if (lVar6 == lVar5) {
        if (plVar8 != (longlong *)0x0) {
          lVar4 = *plVar8;
          local_50 = (undefined8 *)0x0;
          local_48 = local_48 & 0xffffffff00000000;
          FUN_14112f88e(&local_50,param_3);
          FUN_14112fa36(lVar4 + 0x18,local_58,&local_50);
          puVar7 = local_50;
          if ((int)local_48 == 0) goto LAB_143e33b06;
          if (local_50 == (undefined8 *)0x0) goto LAB_143e33b0b;
          (**(code **)*local_50)(local_50,0);
          FUN_1446efa72(&local_50,0,0,0x10);
          local_48 = local_48 & 0xffffffff00000000;
          puVar7 = local_50;
          goto LAB_143e33b06;
        }
        break;
      }
      plVar8 = plVar8 + 2;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar3 = FUN_14155b406();
    lVar4 = FUN_14477b664(uVar3);
    param_2[1] = lVar4;
  }
  local_50 = (undefined8 *)param_2[2];
  if (((local_50 == (undefined8 *)0x0) && (local_50 = (undefined8 *)0x0, lVar4 != 0)) &&
     (*param_2 != 0)) {
    plVar8 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar8 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar2 == '\0')) {
      local_50 = (undefined8 *)0x0;
    }
    else {
      uVar3 = (**(code **)(*plVar8 + 0x110))(plVar8);
      local_50 = (undefined8 *)FUN_144aff482(uVar3,param_2);
    }
    param_2[2] = (longlong)local_50;
  }
  local_48 = 0;
  local_40 = 0;
  FUN_14112f88e(&local_48,param_3);
  iVar1 = *(int *)(param_1 + 0x420);
  lVar4 = (longlong)iVar1;
  *(uint *)(param_1 + 0x420) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x424) < iVar1 + 1U) {
    FUN_14898ac88(param_1 + 0x328,iVar1);
  }
  lVar5 = param_1 + 0x328;
  if (*(longlong *)(param_1 + 0x418) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x418);
  }
  *(undefined8 **)(lVar5 + lVar4 * 0x18) = local_50;
  *(undefined8 *)(lVar5 + 8 + lVar4 * 0x18) = 0;
  *(undefined4 *)(lVar5 + 0x10 + lVar4 * 0x18) = 0;
  *(ulonglong *)(lVar5 + 8 + lVar4 * 0x18) = local_48;
  local_48 = 0;
  *(undefined4 *)(lVar5 + 0x10 + lVar4 * 0x18) = local_40;
  local_40 = 0;
  puVar7 = (undefined8 *)0x0;
LAB_143e33b06:
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143e33b0b:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e33b5c FUN_143e33b5c body=793 status=ok
// SIG undefined FUN_143e33b5c(void)

void FUN_143e33b5c(longlong param_1,longlong param_2,undefined8 **param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  longlong local_60;
  longlong *local_58;
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    puVar8 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar8 = *(undefined4 **)(param_2 + 8);
    }
    uVar4 = FUN_140d2f994(puVar8);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  uVar5 = FUN_1410b14ea();
  uStack_70 = FUN_14477b664(uVar5);
  lVar6 = FUN_1410b14ea();
  uVar5 = FUN_1410b14ea();
  FUN_1402d1bfa(&local_50,uVar5,uVar4);
  puVar9 = local_50;
  if (local_78 != local_50) {
    local_68 = 0;
  }
  local_78 = local_50;
  lVar7 = FUN_1410b14ea();
  if (lVar6 == 0) {
LAB_143e33c2f:
    lVar7 = lVar6;
  }
  else if (lVar7 == 0) {
    lVar7 = 0;
  }
  else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
           lVar7 + 0x30)) goto LAB_143e33c2f;
  if (uStack_70 != lVar7) {
    local_68 = 0;
  }
  uVar5 = FUN_14477b664(lVar7);
  uStack_70 = FUN_14477b664(uVar5);
  if (uStack_70 != 0 && puVar9 != (undefined8 *)0x0) {
    local_68 = uVar4;
  }
  FUN_1410b15be(uVar2,&local_60,&local_78);
  if (local_60 == 0) goto LAB_143e33dbc;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  if (&local_50 != param_3) {
    local_78 = (undefined8 *)0x0;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    puVar9 = (undefined8 *)0x0;
    if (*(int *)(param_3 + 1) == 0) {
      iVar10 = 0;
LAB_143e33e45:
      local_78 = (undefined8 *)0x0;
      local_50 = puVar9;
      local_48 = iVar10;
    }
    else {
      plVar3 = *param_3;
      iVar10 = 0;
      if (plVar3 == (longlong *)0x0) goto LAB_143e33e45;
      (**(code **)(*plVar3 + 0x40))(plVar3,&local_78);
      puVar9 = local_78;
      iVar10 = (int)uStack_70;
      local_78 = (undefined8 *)0x0;
      uStack_70 = uStack_70 & 0xffffffff00000000;
      if (local_48 != 0) {
        if (local_50 == (undefined8 *)0x0) goto LAB_143e33e45;
        (**(code **)*local_50)(local_50,0);
        FUN_1446efa72(&local_50,0,0,0x10);
        local_48 = 0;
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      local_50 = puVar9;
      local_48 = iVar10;
      if ((int)uStack_70 != 0) {
        if (local_78 == (undefined8 *)0x0) goto LAB_143e33d63;
        (**(code **)*local_78)(local_78,0);
        FUN_1446efa72(&local_78,0,0,0x10);
        uStack_70 = uStack_70 & 0xffffffff00000000;
      }
    }
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143e33d63:
  FUN_1411efcfe(local_60 + 0xb0,&local_78,&local_50);
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_143e33dbc;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143e33dbc:
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_58 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e33e76 FUN_143e33e76 body=554 status=ok
// SIG undefined FUN_143e33e76(void)

void FUN_143e33e76(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined8 *local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    puVar8 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar8 = *(undefined4 **)(param_2 + 8);
    }
    uVar4 = FUN_140d2f994(puVar8);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  uVar5 = FUN_1410b14ea();
  uStack_60 = FUN_14477b664(uVar5);
  lVar6 = FUN_1410b14ea();
  uVar5 = FUN_1410b14ea();
  FUN_1402d1bfa(&local_48,uVar5,uVar4);
  puVar3 = local_48;
  if (local_68 != local_48) {
    local_58 = 0;
  }
  local_68 = local_48;
  lVar7 = FUN_1410b14ea();
  if (lVar6 != 0) {
    if (lVar7 == 0) {
      lVar7 = 0;
      goto LAB_143e33f4f;
    }
    if ((*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
        lVar7 + 0x30)) goto LAB_143e33f4f;
  }
  lVar7 = lVar6;
LAB_143e33f4f:
  if (uStack_60 != lVar7) {
    local_58 = 0;
  }
  uVar5 = FUN_14477b664(lVar7);
  uStack_60 = FUN_14477b664(uVar5);
  if (uStack_60 != 0 && puVar3 != (undefined8 *)0x0) {
    local_58 = uVar4;
  }
  FUN_1410b15be(uVar2,&local_48,&local_68);
  if ((local_48 != (undefined8 *)0x0) && ((longlong)*(int *)(local_48 + 6) != 0)) {
    plVar9 = (longlong *)local_48[5];
    lVar6 = (longlong)*(int *)(local_48 + 6) * 0x68;
    do {
      if (*plVar9 == param_2) {
        if (plVar9 == (longlong *)0x0) break;
        local_68 = (undefined8 *)0x0;
        uStack_60 = uStack_60 & 0xffffffff00000000;
        FUN_14114e6dc(&local_68,param_3);
        FUN_140c6314c(plVar9 + 9,local_70,&local_68);
        if ((int)uStack_60 != 0) {
          if (local_68 == (undefined8 *)0x0) break;
          (**(code **)*local_68)(local_68,0);
          FUN_1446efa72(&local_68,0,0,0x10);
          uStack_60 = uStack_60 & 0xffffffff00000000;
        }
        if (local_68 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      plVar9 = plVar9 + 0xd;
      lVar6 = lVar6 + -0x68;
    } while (lVar6 != 0);
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_40 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e34104 FUN_143e34104 body=193 status=ok
// SIG undefined FUN_143e34104(void)

void FUN_143e34104(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1447210f0();
  }
  FUN_140cfc686(&local_28,uVar5);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_28 != 0) {
        FUN_143e341c6(local_28,param_1);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e341c6 FUN_143e341c6 body=1309 status=ok
// SIG undefined FUN_143e341c6(void)

void FUN_143e341c6(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_b8 [32];
  longlong local_98;
  uint local_90;
  int local_8c;
  uint *local_88;
  undefined8 uStack_80;
  int local_6c;
  uint *local_68;
  ulonglong uStack_60;
  undefined2 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((((*(int *)(param_1 + 0xc) == 0) || (uVar2 = *(uint *)(param_1 + 8), (int)uVar2 < 0)) ||
       (DAT_14c9647dc <= (int)uVar2)) ||
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(param_1 + 0xc))))) ||
     ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_143e3422a;
  if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
    lVar10 = *plVar7;
  }
  else {
    lVar10 = 0;
  }
  lVar10 = *(longlong *)(lVar10 + 0x38);
  if ((lVar10 == 0) || (*(longlong *)(param_2 + 0x90) == 0 || *(longlong *)(param_2 + 0x88) == 0))
  goto LAB_143e3422a;
  FUN_140cfc4c2(&local_68);
  local_58 = 0;
  iVar3 = FUN_140e5c0b0(param_1 + 0xc58,&local_68);
  *(undefined1 *)(*(longlong *)(param_1 + 0xc58) + 0x11 + (longlong)iVar3 * 0x18) = 1;
  local_88 = (uint *)0x0;
  uStack_80 = 0;
  local_98 = param_1;
  if ((*(longlong *)(param_2 + 0xa8) == 0) ||
     (*(char *)(*(longlong *)(param_2 + 0xa8) + 0xd0) != '\x01')) {
    iVar3 = *(int *)(lVar10 + 0x100);
    if ((longlong)iVar3 != 0) {
      lVar10 = *(longlong *)(lVar10 + 0xf8);
      lVar13 = 0;
      do {
        lVar5 = FUN_143e347a8(param_2,*(undefined8 *)(lVar10 + lVar13));
        if (lVar5 != 0) {
          uVar2 = *(uint *)(lVar5 + 0xc);
          if ((*(byte *)(lVar5 + 0xd0) & 1) == 0) {
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar5 = 0;
            }
            iVar11 = *(int *)(lVar5 + 0x10);
            if (*(int *)(lVar5 + 0x10) == 0) {
              LOCK();
              iVar11 = DAT_14c964868 + 1;
              UNLOCK();
              iVar8 = DAT_14c964868 + 1;
              bVar14 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar11;
              if (bVar14) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar8);
              }
              LOCK();
              iVar11 = *(int *)(lVar5 + 0x10);
              bVar14 = iVar11 == 0;
              if (bVar14) {
                *(int *)(lVar5 + 0x10) = iVar8;
                iVar11 = 0;
              }
              UNLOCK();
              if (bVar14) {
                iVar11 = iVar8;
              }
            }
            uVar9 = uStack_80;
            lVar5 = (longlong)(int)uStack_80;
            uVar4 = (int)uStack_80 + 1;
            uStack_80 = CONCAT44(uStack_80._4_4_,uVar4);
            if (uStack_80._4_4_ < uVar4) {
              FUN_145853fba(&local_88,uVar9 & 0xffffffff);
            }
            puVar12 = local_88 + lVar5 * 2;
          }
          else {
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar5 = 0;
            }
            iVar11 = *(int *)(lVar5 + 0x10);
            if (*(int *)(lVar5 + 0x10) == 0) {
              LOCK();
              iVar11 = DAT_14c964868 + 1;
              UNLOCK();
              iVar8 = DAT_14c964868 + 1;
              bVar14 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar11;
              if (bVar14) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar8);
              }
              LOCK();
              iVar11 = *(int *)(lVar5 + 0x10);
              bVar14 = iVar11 == 0;
              if (bVar14) {
                *(int *)(lVar5 + 0x10) = iVar8;
                iVar11 = 0;
              }
              UNLOCK();
              if (bVar14) {
                iVar11 = iVar8;
              }
            }
            uVar9 = uStack_80 & 0xffffffff;
            uVar4 = (int)uStack_80 + 1;
            uStack_80 = CONCAT44(uStack_80._4_4_,uVar4);
            if (uStack_80._4_4_ < uVar4) {
              FUN_145853fba(&local_88,uVar9);
            }
            puVar12 = local_88;
            memmove(local_88 + 2,local_88,uVar9 << 3);
          }
          *(ulonglong *)puVar12 = CONCAT44(iVar11,uVar2);
        }
        lVar13 = lVar13 + 8;
      } while ((longlong)iVar3 * 8 != lVar13);
    }
LAB_143e3455f:
    if ((0 < (int)uStack_80) ||
       ((*(longlong *)(param_2 + 0xa8) != 0 &&
        (*(char *)(*(longlong *)(param_2 + 0xa8) + 0xd0) == '\x02')))) {
      plVar7 = (longlong *)(local_98 + 0xcc8);
      local_8c = 0;
      if (param_2 == 0) {
        local_90 = 0;
        iVar3 = 0;
      }
      else {
        local_90 = *(uint *)(param_2 + 0xc);
        if ((int)local_90 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((local_90 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_90 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar3 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          iVar11 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar11);
          }
          LOCK();
          iVar3 = *(int *)(lVar10 + 0x10);
          bVar14 = iVar3 == 0;
          if (bVar14) {
            *(int *)(lVar10 + 0x10) = iVar11;
            iVar3 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar3 = iVar11;
          }
        }
      }
      local_68 = &local_90;
      local_8c = iVar3;
      FUN_146140658(plVar7,&local_6c,&local_68);
      lVar10 = *plVar7;
      local_68 = local_88;
      uStack_60 = uStack_80;
      puVar1 = (undefined8 *)(lVar10 + 8 + (longlong)local_6c * 0x20);
      puVar12 = (uint *)*puVar1;
      uVar9 = puVar1[1];
      puVar1 = (undefined8 *)(lVar10 + 8 + (longlong)local_6c * 0x20);
      *puVar1 = local_88;
      puVar1[1] = uStack_80;
      local_88 = puVar12;
      uStack_80 = uVar9;
    }
  }
  else {
    uVar6 = 0;
    if (*(longlong *)(param_2 + 0x88) != 0) {
      uVar6 = *(undefined8 *)(param_2 + 0x90);
    }
    plVar7 = (longlong *)FUN_145980ba4(uVar6);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      lVar10 = (**(code **)(*plVar7 + 0x2b8))(plVar7);
      if (lVar10 != 0) {
        plVar7 = *(longlong **)(lVar10 + 0x1de8);
      }
    }
    lVar10 = FUN_143e347a8(param_2,plVar7);
    if (lVar10 != 0) {
      uVar2 = *(uint *)(lVar10 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar3 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar11 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar11);
        }
        LOCK();
        iVar3 = *(int *)(lVar10 + 0x10);
        bVar14 = iVar3 == 0;
        if (bVar14) {
          *(int *)(lVar10 + 0x10) = iVar11;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar14) {
          iVar3 = iVar11;
        }
      }
      uVar9 = uStack_80;
      lVar10 = (longlong)(int)uStack_80;
      uVar4 = (int)uStack_80 + 1;
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar4);
      if (uStack_80._4_4_ < uVar4) {
        FUN_145853fba(&local_88,uVar9 & 0xffffffff);
      }
      *(ulonglong *)(local_88 + lVar10 * 2) = CONCAT44(iVar3,uVar2);
      goto LAB_143e3455f;
    }
  }
  if (local_88 != (uint *)0x0) {
    FUN_1400020a8();
  }
LAB_143e3422a:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e346e4 FUN_143e346e4 body=195 status=ok
// SIG undefined FUN_143e346e4(void)

void FUN_143e346e4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1447210f0();
  }
  FUN_140cfc686(&local_28,uVar5);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_28 != 0) {
        FUN_145bfd9ee(local_28,param_1);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e347a8 FUN_143e347a8 body=109 status=ok
// SIG undefined FUN_143e347a8(void)

longlong FUN_143e347a8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = FUN_141364a4a(param_2,&DAT_14cb8b4e8,2,0xffffffff), lVar1 != 0)) {
    lVar2 = FUN_145bbac16();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1412f04d6(lVar1,param_1);
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 143e34816 FUN_143e34816 body=677 status=ok
// SIG undefined FUN_143e34816(void)

longlong FUN_143e34816(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_141364a4a(param_2,&DAT_14cb8b4e0,2,0xffffffff);
  if (lVar4 != 0) {
    lVar5 = FUN_145b7dc70();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      local_48 = param_1;
      FUN_148988984((longlong *)(lVar4 + 0x68));
      if ((*(longlong *)(lVar4 + 0x68) != 0) && (*(longlong *)(lVar4 + 0x70) != 0)) {
        lVar5 = (**(code **)(*param_1 + 0x498))(param_1);
        *(byte *)(lVar4 + 0x89) =
             *(byte *)(lVar4 + 0x89) & 0xfe | *(longlong *)(lVar4 + 0x28) == lVar5;
        if (*(longlong *)(lVar4 + 0x68) == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = *(longlong **)(lVar4 + 0x70);
        }
        lVar5 = (**(code **)(*plVar8 + 0x10))();
        if (*(longlong *)(lVar4 + 0x68) == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = *(longlong **)(lVar4 + 0x70);
        }
        lVar6 = (**(code **)(*plVar8 + 8))();
        lVar7 = FUN_14001cc68(0x90,0x10);
        if (lVar6 == 0) {
          local_40._0_4_ = 0;
          iVar3 = 0;
          uVar1 = (uint)local_40;
        }
        else {
          uVar1 = *(uint *)(lVar6 + 0xc);
          local_40 = (ulonglong)uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar6 = 0;
          }
          iVar3 = *(int *)(lVar6 + 0x10);
          if (*(int *)(lVar6 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            iVar9 = DAT_14c964868 + 1;
            bVar10 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar10) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar9);
            }
            LOCK();
            iVar3 = *(int *)(lVar6 + 0x10);
            bVar10 = iVar3 == 0;
            if (bVar10) {
              *(int *)(lVar6 + 0x10) = iVar9;
              iVar3 = 0;
            }
            UNLOCK();
            uVar1 = (uint)local_40;
            if (bVar10) {
              iVar3 = iVar9;
            }
          }
        }
        local_40._0_4_ = uVar1;
        local_40 = CONCAT44(iVar3,(uint)local_40);
        FUN_1458c7cde(lVar7,&local_40,lVar5 + 0x1a8);
        lVar6 = *(longlong *)(lVar4 + 0x80);
        *(longlong *)(lVar4 + 0x80) = lVar7;
        if (lVar6 != 0) {
          FUN_145797fa4(lVar6);
          FUN_1400020a8(lVar6);
          lVar7 = *(longlong *)(lVar4 + 0x80);
        }
        if (((*(int *)(lVar7 + 0x68) == -1) || (*(int *)(lVar7 + 0x6c) == -1)) &&
           (*(int *)(lVar7 + 0x80) != 0)) {
          *(undefined1 *)(lVar4 + 0x88) = 1;
          lVar7 = *(longlong *)(lVar4 + 0x28);
          local_40 = lVar4;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar4);
          }
          FUN_1405f6d44(lVar7 + 0x16c8,&local_40);
        }
        FUN_1489889ee(lVar5 + 0x1e8,&local_40,lVar4);
        cVar2 = FUN_143e37aae(lVar4);
        if (cVar2 == '\0') {
          lVar5 = *(longlong *)(lVar4 + 0x28);
          local_40 = lVar4;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar4);
          }
          FUN_1405f6d44(lVar5 + 0x16c8,&local_40);
        }
      }
      goto LAB_143e34859;
    }
  }
  lVar4 = 0;
LAB_143e34859:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 143e34abc FUN_143e34abc body=127 status=ok
// SIG undefined FUN_143e34abc(void)

void FUN_143e34abc(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  GUID local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if ((((*(int *)(param_1 + 0x50) == 0 && *(int *)(param_1 + 0x4c) == 0) &&
       *(int *)(param_1 + 0x54) == 0) && *(int *)(param_1 + 0x58) == 0) &&
     (*(int *)(lVar1 + 0x30) == 0)) {
    local_38.Data1 = 0;
    local_38.Data2 = 0;
    local_38.Data3 = 0;
    local_38.Data4[0] = '\0';
    local_38.Data4[1] = '\0';
    local_38.Data4[2] = '\0';
    local_38.Data4[3] = '\0';
    local_38.Data4[4] = '\0';
    local_38.Data4[5] = '\0';
    local_38.Data4[6] = '\0';
    local_38.Data4[7] = '\0';
    CoCreateGuid(&local_38);
    *(ulong *)(param_1 + 0x4c) = local_38.Data1;
    *(undefined4 *)(param_1 + 0x50) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x54) = local_38.Data4._0_4_;
    *(undefined4 *)(param_1 + 0x58) = local_38.Data4._4_4_;
    lVar1 = *param_2;
  }
  *(int *)(lVar1 + 0x94) = *(int *)(lVar1 + 0x94) + 1;
  *(undefined1 *)(lVar1 + 0x98) = 1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e34b3c FUN_143e34b3c body=46 status=ok
// SIG undefined FUN_143e34b3c(void)

void FUN_143e34b3c(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x38))();
  if (lVar1 != 0) {
    FUN_1401073f6(lVar1 + 0x60,param_3);
    return;
  }
  return;
}



// FUNCTION 143e34b6a FUN_143e34b6a body=347 status=ok
// SIG undefined FUN_143e34b6a(void)

void FUN_143e34b6a(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined ***pppuVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = &local_88;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14b42bc10;
  local_78[0] = FUN_143e39f7a;
  (**(code **)(*param_1 + 0x18))(param_1,local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar6 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar6 = &local_58;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  lVar3 = local_88;
  lVar9 = (longlong)(int)uStack_80;
  if (lVar9 != 0) {
    lVar10 = 0;
    do {
      iVar1 = *(int *)(lVar3 + 4 + lVar10);
      if ((((iVar1 != 0) && (uVar2 = *(uint *)(lVar3 + lVar10), -1 < (int)uVar2)) &&
          ((int)uVar2 < DAT_14c9647dc)) &&
         (((plVar4 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar4 != (longlong *)0x0 && ((int)plVar4[2] == iVar1)) &&
          ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
          lVar8 = *plVar4;
        }
        else {
          lVar8 = 0;
        }
        if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
          lVar7 = *plVar4;
        }
        else {
          lVar7 = 0;
        }
        uVar5 = (**(code **)(*param_1 + 0x30))(param_1,lVar7);
        FUN_14101bc7a(param_1,uVar5,lVar8 + 0x30);
      }
      lVar10 = lVar10 + 8;
    } while (lVar9 * 8 != lVar10);
  }
  if (local_88 != 0) {
    FUN_1400020a8(local_88);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e34cc6 FUN_143e34cc6 body=134 status=ok
// SIG undefined FUN_143e34cc6(void)

void FUN_143e34cc6(longlong *param_1)

{
  longlong lVar1;
  
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar1 = param_1[4];
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
  }
  else {
    lVar1 = 0;
  }
  param_1[5] = lVar1;
  if ((*(longlong *)(lVar1 + 0x88) == 0) || (*(longlong **)(lVar1 + 0x90) == (longlong *)0x0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(**(longlong **)(lVar1 + 0x90) + 8))();
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
  }
  param_1[6] = lVar1;
  (**(code **)(*param_1 + 0x2a0))(param_1);
  *(byte *)((longlong)param_1 + 0x7c) = *(byte *)((longlong)param_1 + 0x7c) | 1;
  return;
}



// FUNCTION 143e34d4c FUN_143e34d4c body=253 status=ok
// SIG undefined FUN_143e34d4c(void)

void FUN_143e34d4c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x438);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x430);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar6);
  }
  iVar1 = *(int *)(param_1 + 0x3b8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x3b0);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + 8 + lVar6);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
      }
      lVar6 = lVar6 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar6);
  }
  if ((longlong)*(int *)(param_1 + 0x3c8) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x3c0);
    lVar2 = lVar6 + (longlong)*(int *)(param_1 + 0x3c8) * 0x28;
    do {
      lVar4 = FUN_145a184c8(lVar6);
      if (lVar4 != 0) {
        lVar4 = FUN_145a184c8(lVar6);
        iVar1 = *(int *)(lVar4 + 0x38);
        if ((longlong)iVar1 != 0) {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          lVar5 = 0;
          do {
            plVar3 = *(longlong **)(lVar4 + 8 + lVar5);
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
            }
            lVar5 = lVar5 + 0x20;
          } while ((longlong)iVar1 * 0x20 != lVar5);
        }
      }
      lVar6 = lVar6 + 0x28;
    } while (lVar6 != lVar2);
  }
  return;
}



// FUNCTION 143e34e4a FUN_143e34e4a body=182 status=ok
// SIG undefined FUN_143e34e4a(void)

void FUN_143e34e4a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  code *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if (lVar3 == param_2) {
    FUN_143e34f02(param_1);
    lVar3 = param_1[0xc];
    if ((longlong)(int)lVar3 != 0) {
      lVar1 = param_1[0xb];
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(lVar1 + 0x10 + lVar4);
        if (lVar2 != 0) {
          local_68 = 0;
          local_58 = &PTR_LAB_14b42a330;
          local_78[0] = FUN_143e2dbfc;
          local_50 = lVar2;
          FUN_14103f5f0(lVar2,local_78);
        }
        lVar4 = lVar4 + 0x20;
      } while ((longlong)(int)lVar3 * 0x20 != lVar4);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e34f02 FUN_143e34f02 body=124 status=ok
// SIG undefined FUN_143e34f02(void)

void FUN_143e34f02(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x50);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x48);
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar4 + 0x28 + lVar6) != 0) {
        FUN_14604aaec();
        *(undefined8 *)(lVar4 + 0x28 + lVar6) = 0;
        plVar5 = *(longlong **)(lVar4 + 0x30 + lVar6);
        if (plVar5 != (longlong *)0x0) {
          *(undefined8 *)(lVar4 + 0x30 + lVar6) = 0;
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
      lVar6 = lVar6 + 0x38;
    } while ((longlong)iVar3 * 0x38 - lVar6 != 0);
  }
  return;
}



// FUNCTION 143e34f7e FUN_143e34f7e body=317 status=ok
// SIG undefined FUN_143e34f7e(void)

undefined8 FUN_143e34f7e(longlong param_1,longlong param_2)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    if (DAT_14cb652c0 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148715fe1;
      local_50 = FUN_146508b0f;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
    }
    if (DAT_14cb652c0 == param_2) {
      if ((*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x88) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x90) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
      if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 143e35108 FUN_143e35108 body=325 status=ok
// SIG undefined FUN_143e35108(void)

undefined4 FUN_143e35108(longlong param_1,int param_2,longlong *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  longlong local_50;
  longlong *local_48;
  undefined8 *local_40;
  undefined1 local_38;
  undefined8 local_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x48);
    lVar6 = (longlong)*(int *)(param_1 + 0x50) * 0x38;
    do {
      if (*(int *)(*plVar3 + 8) == param_2) {
        if (plVar3 != (longlong *)0x0) {
          if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
            local_58 = *(undefined8 *)(param_1 + 0x20);
          }
          else {
            local_58 = 0;
          }
          local_40 = &local_a8;
          local_88 = 0;
          uStack_70 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          uStack_80 = 0x8000000000;
          local_78 = 0xffffffff;
          local_38 = 5;
          local_34 = 0xffffffff;
          pcVar1 = (code *)*param_3;
          plVar5 = param_3 + 4;
          if ((longlong *)param_3[2] != (longlong *)0x0) {
            plVar5 = (longlong *)param_3[2];
          }
          local_50 = param_1;
          local_48 = plVar3;
          uVar4 = (**(code **)(*plVar5 + 8))();
          uVar2 = (*pcVar1)(uVar4,&local_58);
          if ((int)local_34 != -1) {
            local_34 = 0xffffffff;
          }
          uStack_60 = uStack_60 & 0xffffffff00000000;
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          FUN_140333f4e(&local_a8);
          goto LAB_143e35164;
        }
        break;
      }
      plVar3 = plVar3 + 7;
      lVar6 = lVar6 + -0x38;
    } while (lVar6 != 0);
  }
  uVar2 = 0;
LAB_143e35164:
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 143e35272 FUN_143e35272 body=41 status=ok
// SIG undefined FUN_143e35272(void)

void FUN_143e35272(void)

{
  DAT_14cb8b598 = 0;
  if (DAT_14cb8b590 != 0) {
    FUN_1400020a8();
  }
  FUN_145d67c90();
  return;
}



// FUNCTION 143e352a0 FUN_143e352a0 body=41 status=ok
// SIG undefined FUN_143e352a0(void)

void FUN_143e352a0(void)

{
  DAT_14cb8b690 = 0;
  if (DAT_14cb8b688 != 0) {
    FUN_1400020a8();
  }
  FUN_145d67d2e();
  return;
}



// FUNCTION 143e352ce FUN_143e352ce body=413 status=ok
// SIG undefined FUN_143e352ce(void)

void FUN_143e352ce(undefined8 param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar3 = (longlong *)FUN_14114f501();
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
  lVar7 = param_3[1];
  if (lVar7 == 0) {
    uVar5 = FUN_145c2bba6();
    lVar7 = FUN_14477b664(uVar5);
    param_3[1] = lVar7;
  }
  lVar6 = param_3[2];
  if (((lVar6 == 0) && (lVar6 = 0, lVar7 != 0)) && (*param_3 != 0)) {
    plVar3 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar2 == '\0')) {
      lVar6 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar6 = FUN_144aff482(uVar5,param_3);
    }
    param_3[2] = lVar6;
  }
  lVar7 = param_2[1];
  if (lVar7 == 0) {
    uVar5 = FUN_140feeb70();
    lVar7 = FUN_14477b664(uVar5);
    param_2[1] = lVar7;
  }
  lVar8 = param_2[2];
  if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*param_2 != 0)) {
    plVar3 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar2 == '\0')) {
      lVar8 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar8 = FUN_144aff482(uVar5,param_2);
    }
    param_2[2] = lVar8;
  }
  if (((*(byte *)(lVar4 + 0x20c) & 1) == 0) && ((longlong)*(int *)(lVar4 + 0x40) != 0)) {
    lVar7 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + lVar7);
      if (((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) &&
         (*(longlong *)(lVar1 + 0xa8) == lVar8)) {
        if ((*(byte *)(lVar1 + 0x248) & 2) == 0) {
          return;
        }
        FUN_143e306f0(lVar1 + 0x78,lVar6,param_4);
        return;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)*(int *)(lVar4 + 0x40) * 8 != lVar7);
  }
  return;
}



// FUNCTION 143e3546c FUN_143e3546c body=158 status=ok
// SIG undefined FUN_143e3546c(void)

longlong * FUN_143e3546c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14898d5a0();
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_14898d680(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e3550e FUN_143e3550e body=2387 status=ok
// SIG undefined FUN_143e3550e(void)

void FUN_143e3550e(longlong param_1,ulonglong *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 ****ppppuVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  code *local_110;
  undefined1 *local_108;
  code **local_100;
  code *local_f8;
  code *local_f0;
  undefined8 ***local_e0 [3];
  ushort local_c8;
  byte local_c0;
  code *local_b8;
  undefined8 ***pppuStack_b0;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  ushort local_98;
  undefined4 local_90 [6];
  code *local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x4c);
  if ((((((iVar3 == 0) || (uVar4 = *(uint *)(*(longlong *)(param_1 + 0x40) + 0x48), (int)uVar4 < 0))
        || (DAT_14c9647dc <= (int)uVar4)) ||
       ((plVar15 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
        plVar15 == (longlong *)0x0 || ((int)plVar15[2] != iVar3)))) ||
      (lVar17 = *(longlong *)(param_1 + 0x48), (*(uint *)(plVar15 + 1) & 0x10200000) != 0)) ||
     (plVar15 = (longlong *)*plVar15, plVar15 == (longlong *)0x0)) goto LAB_143e3590b;
  if (DAT_14cac9ca8 == 0) {
    local_100 = &local_78;
    local_78 = FUN_141030f22;
    local_f0 = FUN_14081d0ea;
    local_f8 = FUN_14081d0ea;
    local_108 = &LAB_1478c0a72;
    local_110 = (code *)&LAB_1417b2375;
    local_118 = L"Engine";
    local_120 = 0x1000000000;
    local_128 = 0x10000004;
    local_130 = 8;
    local_138 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8);
  }
  if ((*(int *)(plVar15[2] + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar15[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
      != DAT_14cac9ca8 + 0x30)) goto LAB_143e3590b;
  if (DAT_14cb652c0 == 0) {
    local_100 = &local_78;
    local_78 = FUN_1449e2820;
    local_f0 = FUN_14081d0ea;
    local_f8 = FUN_1427b09ee;
    local_108 = &LAB_148715fe1;
    local_110 = FUN_146508b0f;
    local_118 = L"Engine";
    local_120 = 0;
    local_128 = 0x10004001;
    local_130 = 8;
    local_138 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0);
  }
  plVar15 = (longlong *)(**(code **)(*plVar15 + 0x288))(plVar15,DAT_14cb652c0);
  if (plVar15 == (longlong *)0x0) goto LAB_143e3590b;
  if (DAT_14cb652c0 == 0) {
    local_100 = &local_78;
    local_78 = FUN_1449e2820;
    local_f0 = FUN_14081d0ea;
    local_f8 = FUN_1427b09ee;
    local_108 = &LAB_148715fe1;
    local_110 = FUN_146508b0f;
    local_118 = L"Engine";
    local_120 = 0;
    local_128 = 0x10004001;
    local_130 = 8;
    local_138 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0);
  }
  plVar8 = (longlong *)FUN_144718840(plVar15,DAT_14cb652c0);
  if ((plVar8 == (longlong *)0x0 || plVar15 == plVar8) ||
     (lVar9 = FUN_14108b142(lVar17 + 0x98), lVar9 == 0)) goto LAB_143e3590b;
  local_78 = (code *)0x0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  lVar11 = *(longlong *)(lVar17 + 0x88);
  if (lVar11 == 0) {
    uVar10 = FUN_140feeb70();
    lVar11 = FUN_14477b664(uVar10);
    *(longlong *)(lVar17 + 0x88) = lVar11;
  }
  plVar15 = (longlong *)(lVar17 + 0x80);
  if (*(longlong *)(lVar17 + 0x90) == 0) {
    if ((lVar11 != 0) && (*plVar15 != 0)) {
      plVar5 = *(longlong **)(lVar11 + 0xb8);
      if ((plVar5 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
        *(undefined8 *)(lVar17 + 0x90) = 0;
      }
      else {
        uVar10 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar11 = FUN_144aff482(uVar10,plVar15);
        *(longlong *)(lVar17 + 0x90) = lVar11;
        if (lVar11 != 0) goto LAB_143e356a0;
      }
    }
    lVar17 = (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar11 = (**(code **)(*(longlong *)(lVar17 + 0x1a8) + 0x38))(lVar17 + 0x1a8,lVar9);
    lVar17 = lVar11 + 0x10;
    if (lVar11 == 0) {
      lVar17 = lVar9 + 0x30;
    }
    FUN_14034cca6(&local_b8,lVar17);
    FUN_1403719a4(&local_78,&local_b8);
LAB_143e3585d:
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_90[0] * 0x120));
    if (pcVar6 != (code *)0x0) {
      ppppuVar14 = (undefined8 ****)pppuStack_b0;
      if (local_98 < 0x19) {
        ppppuVar14 = &pppuStack_b0;
      }
      (*pcVar6)(ppppuVar14);
    }
    if (0x18 < local_98) {
      FUN_1400020a8(pppuStack_b0);
    }
  }
  else {
LAB_143e356a0:
    lVar12 = (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar11 = *(longlong *)(lVar17 + 0x88);
    if (lVar11 == 0) {
      uVar10 = FUN_140feeb70();
      lVar11 = FUN_14477b664(uVar10);
      *(longlong *)(lVar17 + 0x88) = lVar11;
    }
    lVar13 = *(longlong *)(lVar17 + 0x90);
    if (((lVar13 == 0) && (lVar13 = 0, lVar11 != 0)) && (*plVar15 != 0)) {
      plVar8 = *(longlong **)(lVar11 + 0xb8);
      if ((plVar8 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar7 == '\0')) {
        lVar13 = 0;
      }
      else {
        uVar10 = (**(code **)(*plVar8 + 0x110))(plVar8);
        lVar13 = FUN_144aff482(uVar10,plVar15);
      }
      *(longlong *)(lVar17 + 0x90) = lVar13;
    }
    if (((*(byte *)(lVar12 + 0x20c) & 1) == 0) && ((longlong)*(int *)(lVar12 + 0x40) != 0)) {
      lVar17 = 0;
      do {
        lVar11 = *(longlong *)(*(longlong *)(lVar12 + 0x38) + lVar17);
        if (((lVar11 != 0) && ((*(uint *)(lVar11 + 8) >> 0x1e & 1) == 0)) &&
           (*(longlong *)(lVar11 + 0xa8) == lVar13)) {
          if ((*(byte *)(lVar11 + 0x248) & 2) != 0) {
            FUN_14108b31e(lVar11,&local_b8,lVar9);
            FUN_1403719a4(&local_78,&local_b8);
            goto LAB_143e3585d;
          }
          break;
        }
        lVar17 = lVar17 + 8;
      } while ((longlong)*(int *)(lVar12 + 0x40) * 8 != lVar17);
    }
  }
  if (local_50 != 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x4c);
    if ((((iVar3 == 0) || (uVar4 = *(uint *)(*(longlong *)(param_1 + 0x40) + 0x48), (int)uVar4 < 0))
        || ((DAT_14c9647dc <= (int)uVar4 ||
            ((plVar15 = (longlong *)
                        ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
             plVar15 == (longlong *)0x0 || ((int)plVar15[2] != iVar3)))))) ||
       (((*(uint *)(plVar15 + 1) & 0x10200000) != 0 || (lVar17 = *plVar15, lVar17 == 0)))) {
LAB_143e35bc2:
      lVar17 = 0;
    }
    else {
      if (DAT_14cac9ca8 == 0) {
        local_100 = &local_b8;
        local_b8 = FUN_141030f22;
        local_f0 = FUN_14081d0ea;
        local_f8 = FUN_14081d0ea;
        local_108 = &LAB_1478c0a72;
        local_110 = (code *)&LAB_1417b2375;
        local_118 = L"Engine";
        local_120 = 0x1000000000;
        local_128 = 0x10000004;
        local_130 = 8;
        local_138 = 0x390;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30))
      goto LAB_143e35bc2;
    }
    local_b8 = (code *)((ulonglong)local_b8 & 0xffffffffffffff00);
    local_90[0] = 0;
    FUN_1456bb102(&local_b8,lVar17);
    FUN_1447c3578(&local_78,local_e0,&local_b8);
    lVar17 = FUN_14030a32e(local_e0);
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
    if (pcVar6 != (code *)0x0) {
      ppppuVar14 = local_e0;
      if (0x18 < local_c8) {
        ppppuVar14 = (undefined8 ****)local_e0[0];
      }
      (*pcVar6)(ppppuVar14);
    }
    if (0x18 < local_c8) {
      FUN_1400020a8(local_e0[0]);
    }
    FUN_1448173f8(local_90);
    if (((char)local_b8 == '\x03') &&
       (plVar15 = (longlong *)CONCAT44(uStack_a4,local_a8), plVar15 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
    }
    if (lVar17 != 0) {
      local_9c = *(undefined4 *)(param_1 + 0x58);
      pcVar6 = (code *)*param_2;
      pppuStack_b0 = (undefined8 ***)param_2[1];
      uStack_a4 = 0;
      uStack_a0 = 0x3f800000;
      local_98 = (ushort)*(byte *)(*(longlong *)(param_1 + 0x48) + 0x78) << 8;
      uVar4 = (uint)pppuStack_b0;
      uVar16 = 0;
      local_b8 = pcVar6;
      if ((uint)pppuStack_b0 == 0) {
LAB_143e35af4:
        if (uVar16 < (uint)pppuStack_b0) {
          while (lVar9 = FUN_14030a32e(pcVar6 + (longlong)(int)uVar16 * 0x38), lVar17 != lVar9) {
            uVar1 = uVar16 + 1;
            if ((uVar1 < uVar4) && (((byte)pcVar6[(longlong)(int)uVar1 * 0x38 + 0x34] & 1) != 0)) {
              uVar16 = uVar16 + 2;
              do {
                if (uVar4 == uVar16) goto LAB_143e358b4;
                lVar9 = (longlong)(int)uVar16;
                uVar1 = uVar16;
                uVar16 = uVar16 + 1;
              } while (((byte)pcVar6[lVar9 * 0x38 + 0x34] & 1) != 0);
            }
            uVar16 = uVar1;
            if (uVar4 <= uVar16) goto LAB_143e358b4;
          }
          local_a8 = uVar16;
          FUN_14023b10e(&local_b8,0x3f800000);
        }
      }
      else {
        do {
          if (((byte)pcVar6[(longlong)(int)uVar16 * 0x38 + 0x34] & 1) == 0) goto LAB_143e35af4;
          uVar16 = uVar16 + 1;
        } while ((uint)pppuStack_b0 != uVar16);
      }
    }
  }
LAB_143e358b4:
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar6 != (code *)0x0) {
    ppppuVar14 = (undefined8 ****)local_70[0];
    if (local_58 < 0x19) {
      ppppuVar14 = local_70;
    }
    (*pcVar6)(ppppuVar14);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
LAB_143e3590b:
  if ((local_40 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e35e62 FUN_143e35e62 body=301 status=ok
// SIG undefined FUN_143e35e62(void)

longlong * FUN_143e35e62(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_3[1];
  local_40 = (longlong *)param_3[2];
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  if (*(longlong *)(*param_3 + 0x30) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(longlong *)(*param_3 + 0x30) + 0x168);
  }
  plVar4 = (longlong *)FUN_14001cc68(0xa0,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b42c130;
  plVar1 = plVar4 + 2;
  FUN_14898e210(plVar1,uVar5,&local_48);
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_14898f0fe(&local_38,plVar1);
  plVar3 = local_30;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
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
    }
  }
  plVar1 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e35f92 FUN_143e35f92 body=41 status=ok
// SIG undefined FUN_143e35f92(void)

void FUN_143e35f92(void)

{
  DAT_14cb8b7a8 = 0;
  if (DAT_14cb8b7a0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d67dcc();
  return;
}



// FUNCTION 143e35ffa FUN_143e35ffa body=158 status=ok
// SIG undefined FUN_143e35ffa(void)

void FUN_143e35ffa(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *param_2, lVar2 != 0)) &&
      (*(char *)(lVar2 + 0xa0) == '\0')) && (1 < *(byte *)(*(longlong *)(lVar2 + 0x38) + 0x178))) {
    lVar2 = FUN_14105cc4c(lVar2,&DAT_14cb8ae58,0);
    if (lVar2 != 0) {
      lVar3 = FUN_140fd15b6();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        uVar1 = FUN_14088155e(*param_2,&DAT_14cb8ae60,0xffffffff);
        FUN_140f71b7a(lVar2,uVar1,param_1 + 0x38);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143e36098 FUN_143e36098 body=1274 status=ok
// SIG undefined FUN_143e36098(void)

void FUN_143e36098(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((*(longlong *)(param_1 + 0x50) != 0) && (lVar3 = *param_2, lVar3 != 0)) &&
     (*(char *)(lVar3 + 0xa0) == '\0')) {
    if (*(byte *)(*(longlong *)(lVar3 + 0x38) + 0x178) < 2) {
      local_70 = DAT_14c9ab250;
      uVar7 = FUN_14477b664(DAT_14c9ab258);
      local_68 = FUN_14477b664(uVar7);
      local_60 = DAT_14c9ab260;
      FUN_145856e46(lVar3,&local_58,&local_70);
      uVar2 = FUN_14088155e(*param_2,&DAT_14cb8ae70,0xffffffff);
      plVar5 = *(longlong **)(*param_2 + 0x38);
      if (plVar5 != (longlong *)0x0) {
        if (DAT_14cb652c0 == 0) {
          local_90 = &local_40;
          local_40 = FUN_1449e2820;
          local_80 = FUN_14081d0ea;
          local_88 = FUN_1427b09ee;
          local_98 = &LAB_148715fe1;
          local_a0 = FUN_146508b0f;
          local_a8 = L"Engine";
          local_b0 = 0;
          local_b8 = 0x10004001;
          local_c0 = 8;
          local_c8 = 0x28;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0);
        }
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,DAT_14cb652c0);
        if (plVar5 != (longlong *)0x0) {
          if (DAT_14cb652c0 == 0) {
            local_90 = &local_40;
            local_40 = FUN_1449e2820;
            local_80 = FUN_14081d0ea;
            local_88 = FUN_1427b09ee;
            local_98 = &LAB_148715fe1;
            local_a0 = FUN_146508b0f;
            local_a8 = L"Engine";
            local_b0 = 0;
            local_b8 = 0x10004001;
            local_c0 = 8;
            local_c8 = 0x28;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0);
          }
          plVar6 = (longlong *)FUN_144718840(plVar5,DAT_14cb652c0);
          if (plVar6 != (longlong *)0x0 && plVar5 != plVar6) {
            lVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
            if (local_50 == 0) {
              uVar7 = FUN_140feeb70();
              local_50 = FUN_14477b664(uVar7);
            }
            lVar4 = local_48;
            if (((local_48 == 0) && (lVar4 = 0, local_50 != 0)) && (local_58 != 0)) {
              plVar5 = *(longlong **)(local_50 + 0xb8);
              if ((plVar5 == (longlong *)0x0) ||
                 (cVar1 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar1 == '\0')) {
                lVar4 = 0;
                local_48 = lVar4;
              }
              else {
                uVar7 = (**(code **)(*plVar5 + 0x110))(plVar5);
                lVar4 = FUN_144aff482(uVar7,&local_58);
                local_48 = lVar4;
              }
            }
            if (((*(byte *)(lVar3 + 0x20c) & 1) == 0) && ((longlong)*(int *)(lVar3 + 0x40) != 0)) {
              lVar9 = 0;
              do {
                lVar8 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + lVar9);
                if (((lVar8 != 0) && ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0)) &&
                   (*(longlong *)(lVar8 + 0xa8) == lVar4)) {
                  if ((*(byte *)(lVar8 + 0x248) & 2) != 0) {
                    FUN_143e2b568(lVar8,uVar2,(undefined8 *)(param_1 + 0x50));
                  }
                  break;
                }
                lVar9 = lVar9 + 8;
              } while ((longlong)*(int *)(lVar3 + 0x40) * 8 != lVar9);
            }
          }
        }
      }
    }
    else {
      lVar3 = FUN_14105cc4c(lVar3,&DAT_14cb8ae58,0);
      if (lVar3 != 0) {
        lVar4 = FUN_140fd15b6();
        if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
           (lVar4 = *(longlong *)(lVar3 + 0x28), lVar4 != 0)) {
          lVar9 = *(longlong *)(param_1 + 0x40);
          if (lVar9 == 0) {
            uVar7 = FUN_14110242a();
            lVar9 = FUN_14477b664(uVar7);
            *(longlong *)(param_1 + 0x40) = lVar9;
          }
          lVar8 = *(longlong *)(param_1 + 0x48);
          if (lVar8 == 0) {
            if ((lVar9 == 0) || (*(longlong *)(param_1 + 0x38) == 0)) goto LAB_143e360d5;
            plVar5 = *(longlong **)(lVar9 + 0xb8);
            if ((plVar5 == (longlong *)0x0) ||
               (cVar1 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar1 == '\0')) {
              *(undefined8 *)(param_1 + 0x48) = 0;
              goto LAB_143e360d5;
            }
            uVar7 = (**(code **)(*plVar5 + 0x110))(plVar5);
            lVar8 = FUN_144aff482(uVar7,(longlong *)(param_1 + 0x38));
            *(longlong *)(param_1 + 0x48) = lVar8;
            if (lVar8 == 0) goto LAB_143e360d5;
          }
          if ((longlong)*(int *)(lVar4 + 0x50) != 0) {
            plVar5 = *(longlong **)(lVar4 + 0x48);
            lVar4 = (longlong)*(int *)(lVar4 + 0x50) * 0x90;
            do {
              if (*plVar5 == lVar8) {
                if (((plVar5 != (longlong *)0x0) && ((*(byte *)(plVar5 + 0x11) & 1) != 0)) &&
                   (lVar3 = FUN_1400796d0(*(undefined8 *)(lVar3 + 0x10),
                                          *(undefined8 *)(param_1 + 0x50),1), lVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_e8);
                }
                break;
              }
              plVar5 = plVar5 + 0x12;
              lVar4 = lVar4 + -0x90;
            } while (lVar4 != 0);
          }
        }
      }
    }
  }
LAB_143e360d5:
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e365b2 FUN_143e365b2 body=145 status=ok
// SIG undefined FUN_143e365b2(void)

void FUN_143e365b2(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_2;
  if (((lVar2 != 0) && (*(char *)(lVar2 + 0xa0) == '\0')) &&
     (1 < *(byte *)(*(longlong *)(lVar2 + 0x38) + 0x178))) {
    lVar2 = FUN_14105cc4c(lVar2,&DAT_14cb8ae58,0);
    if (lVar2 != 0) {
      lVar3 = FUN_140fd15b6();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        uVar1 = FUN_14088155e(*param_2,&DAT_14cb8ae60,0xffffffff);
        FUN_140f71b7a(lVar2,uVar1,&DAT_14cb8ae78);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143e36643 FUN_143e36643 body=41 status=ok
// SIG undefined FUN_143e36643(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e36643(void)

{
  _DAT_14cb8b4c8 = 0;
  if (DAT_14cb8b4c0 != 0) {
    FUN_1400020a8();
  }
  FUN_1461bda90();
  return;
}



// FUNCTION 143e3671e FUN_143e3671e body=1333 status=ok
// SIG undefined FUN_143e3671e(void)

void FUN_143e3671e(longlong *param_1)

{
  double *pdVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  byte bVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  double dVar13;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  longlong local_198;
  uint local_190;
  undefined4 uStack_18c;
  longlong local_188;
  longlong local_180;
  ulonglong *local_178;
  byte local_156;
  longlong local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (((*(byte *)(param_1 + 6) & 0x80) != 0) &&
     (cVar4 = (**(code **)(*param_1 + 0x310))(param_1,0), cVar4 != '\0')) {
    (**(code **)(*param_1 + 0x330))(param_1);
  }
  if ((*(uint *)(param_1 + 6) & 2) == 0) {
    if ((((*(uint *)(param_1 + 6) >> 0xc & 1) != 0) && (param_1[0xf] != 0)) &&
       ((int)param_1[7] == -1)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1c8);
    }
    if ((((*(byte *)(param_1 + 0x1a) & 2) != 0) && (param_1[0xf] != 0)) &&
       (bVar6 = *(byte *)((longlong)param_1 + 0xd1), bVar6 != 0)) {
      if ((bVar6 & 1) != 0) {
        local_188 = *(longlong *)(param_1[0xf] + 0x58);
        FUN_141239620(param_1,&local_180,2,0);
        plVar10 = (longlong *)*local_178 + 1;
        if ((longlong *)local_178[1] < plVar10) {
          if ((local_156 & 2) == 0) {
            (**(code **)(local_180 + 0x170))(&local_180,&local_188,8);
          }
          else {
            thunk_FUN_146821949(&local_180,&local_188);
          }
        }
        else {
          local_188 = *(longlong *)*local_178;
          *local_178 = (ulonglong)plVar10;
        }
        (**(code **)(*param_1 + 0x308))(param_1,&local_190,&local_180,0);
        lVar7 = *(longlong *)(*(longlong *)(param_1[5] + 0x58) + 0x300);
        if (&local_190 != (uint *)(param_1 + 0x10)) {
          param_1[0x10] = CONCAT44(uStack_18c,local_190);
          *(undefined1 *)(param_1 + 0x11) = 1;
        }
        param_1[0x12] = lVar7;
        *(undefined1 *)(param_1 + 0x13) = 0;
        *(byte *)((longlong)param_1 + 0xd1) = *(byte *)((longlong)param_1 + 0xd1) & 0xfe;
        FUN_1449daebe(&local_180);
        bVar6 = *(byte *)((longlong)param_1 + 0xd1);
      }
      if ((((bVar6 & 2) != 0) && (lVar7 = param_1[0xf], lVar7 != 0)) &&
         ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0)) {
        uVar5 = param_1[0x1b];
        if ((longlong)*(int *)(lVar7 + 200) != 0) {
          plVar10 = *(longlong **)(lVar7 + 0xc0);
          plVar12 = plVar10 + (longlong)*(int *)(lVar7 + 200) * 2;
          do {
            uVar2 = *(uint *)(*plVar10 + 0x34);
            if ((uVar5 >> ((ulonglong)uVar2 & 0x3f) & 1) != 0) {
              local_190 = uVar2;
              if ((longlong)(int)param_1[0x16] != 0) {
                plVar8 = (longlong *)param_1[0x15];
                lVar7 = (longlong)(int)param_1[0x16] * 0x48;
                do {
                  if (*(uint *)(*plVar8 + 0x34) == uVar2) {
                    if (plVar8 != (longlong *)0x0) {
                      FUN_141239620(param_1,&local_180,CONCAT71((int7)((ulonglong)*plVar8 >> 8),3),0
                                   );
                      FUN_14031d518(&local_180,&local_190);
                      lVar7 = (longlong)*(int *)(plVar8[2] + 0x10);
                      if (lVar7 != 0) {
                        local_198 = *(longlong *)(plVar8[2] + 8);
                        lVar9 = 0;
                        do {
                          plVar3 = *(longlong **)(local_198 + 8 + lVar9);
                          local_1a8 = 0;
                          (**(code **)(*plVar3 + 0xd8))(plVar3,&local_180,0);
                          lVar9 = lVar9 + 0x18;
                        } while (lVar7 * 0x18 != lVar9);
                      }
                      (**(code **)(*param_1 + 0x308))(param_1,&local_188,&local_180);
                      if (plVar8 + 4 != &local_188) {
                        plVar8[4] = local_188;
                        *(undefined1 *)(plVar8 + 5) = 1;
                      }
                      plVar8[6] = local_a8;
                      *(undefined1 *)(plVar8 + 7) = 0;
                      FUN_1449daebe(&local_180);
                      uVar5 = param_1[0x1b];
                    }
                    break;
                  }
                  plVar8 = plVar8 + 9;
                  lVar7 = lVar7 + -0x48;
                } while (lVar7 != 0);
              }
              uVar5 = uVar5 & ~(1L << ((byte)uVar2 & 0x3f));
              param_1[0x1b] = uVar5;
            }
            plVar10 = plVar10 + 2;
          } while (plVar10 != plVar12);
          bVar6 = *(byte *)((longlong)param_1 + 0xd1);
        }
        if (uVar5 == 0) {
          bVar6 = bVar6 & 0xfd;
          *(byte *)((longlong)param_1 + 0xd1) = bVar6;
        }
      }
      if ((((bVar6 & 4) != 0) && (lVar7 = param_1[0x17], lVar7 != 0)) && (param_1[0xf] != 0)) {
        FUN_141239620(param_1,&local_180,5,0);
        FUN_141131fa2(lVar7,param_1,&local_180,0);
        FUN_1449daebe(&local_180);
        *(byte *)((longlong)param_1 + 0xd1) = *(byte *)((longlong)param_1 + 0xd1) & 0xfb;
      }
    }
    if (((char)param_1[0x11] == '\x01') &&
       (dVar13 = *(double *)(*(longlong *)(param_1[5] + 0x58) + 0x300) - (double)param_1[0x12],
       (double)param_1[0x14] <= dVar13 && dVar13 != (double)param_1[0x14])) {
      *(undefined1 *)(param_1 + 0x13) = 1;
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    if ((char)param_1[0x13] == '\x01') {
      FUN_14097d6da(param_1,1);
    }
    lVar7 = param_1[0x16];
    if ((longlong)(int)lVar7 != 0) {
      lVar9 = param_1[0x15];
      lVar11 = 0;
      do {
        if ((*(char *)(lVar9 + 0x28 + lVar11) == '\x01') &&
           (dVar13 = *(double *)(*(longlong *)(param_1[5] + 0x58) + 0x300) -
                     *(double *)(lVar9 + 0x30 + lVar11), pdVar1 = (double *)(lVar9 + 0x40 + lVar11),
           *pdVar1 <= dVar13 && dVar13 != *pdVar1)) {
          *(undefined1 *)(lVar9 + 0x38 + lVar11) = 1;
          *(undefined1 *)(lVar9 + 0x28 + lVar11) = 0;
        }
        if (*(char *)(lVar9 + 0x38 + lVar11) == '\x01') {
          param_1[0x1b] =
               param_1[0x1b] | 1L << (*(byte *)(*(longlong *)(lVar9 + lVar11) + 0x34) & 0x3f);
          FUN_14097d6da(param_1,2);
        }
        lVar11 = lVar11 + 0x48;
      } while ((longlong)(int)lVar7 * 0x48 != lVar11);
    }
    lVar7 = param_1[0x17];
    if (lVar7 != 0) {
      if (((*(int *)(lVar7 + 0x68) != -1) && (*(int *)(lVar7 + 0x6c) != -1)) &&
         (1.0 < *(double *)(*(longlong *)(param_1[5] + 0x58) + 0x300) - *(double *)(lVar7 + 0x70)))
      {
        *(undefined1 *)(lVar7 + 0x88) = 1;
        *(undefined8 *)(lVar7 + 0x68) = 0xffffffffffffffff;
        lVar7 = param_1[0x17];
      }
      if (*(char *)(lVar7 + 0x88) == '\x01') {
        FUN_14097d6da(param_1,4);
      }
    }
    if ((param_1[0xf] == 0) && (param_1[0xe] != 0)) {
      FUN_1465609c4(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1c8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e36c8e FUN_143e36c8e body=1042 status=ok
// SIG undefined FUN_143e36c8e(void)

void FUN_143e36c8e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  longlong *local_48;
  longlong *local_40;
  code *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = param_2;
  if ((param_2 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    if (param_2 == (longlong *)0x0) goto LAB_143e36cf7;
  }
  else {
    FUN_1456cec3c(param_2);
  }
  if (DAT_14cb652c0 == 0) {
    local_60 = &local_38;
    local_38 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_1427b09ee;
    local_68 = &LAB_148715fe1;
    local_70 = FUN_146508b0f;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10004001;
    local_90 = 8;
    local_98 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
  }
  local_40 = (longlong *)FUN_144718840(param_2,DAT_14cb652c0);
  if (local_40 != (longlong *)0x0 && param_2 != (longlong *)0x0) {
    lVar7 = (**(code **)(*local_40 + 0x10))(local_40);
    plVar10 = (longlong *)0x0;
    if (*(longlong *)(lVar7 + 0x20) != 0) {
      plVar10 = *(longlong **)(lVar7 + 0x28);
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    lVar7 = FUN_1418aade0(uVar8);
    if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar7);
    }
    *(longlong *)(param_1 + 0x78) = lVar7;
    lVar7 = *(longlong *)(param_1 + 0x28);
    lVar9 = (**(code **)(*param_2 + 0x498))(param_2);
    if (lVar7 == 0 || lVar9 == 0) {
      *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0xfe;
    }
    else {
      iVar6 = *(int *)(lVar9 + 0x1d2c);
      iVar11 = *(int *)(lVar7 + 0x1d2c);
      *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0xfe | iVar6 == iVar11;
      if (iVar6 == iVar11) {
        lVar7 = *(longlong *)(param_1 + 0x78);
        if (*(int *)(lVar7 + 0x240) != 3) {
          FUN_1446efa72((longlong *)(lVar7 + 0x238),0,3,0x10);
          *(undefined4 *)(lVar7 + 0x240) = 3;
        }
        puVar4 = *(undefined8 **)(lVar7 + 0x238);
        *puVar4 = &PTR_LAB_14b42c6f0;
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
        puVar4[2] = lVar9;
        *puVar4 = &PTR_FUN_14b42c680;
        puVar4[3] = 0;
        if (param_1 == 0) {
          iVar6 = 0;
        }
        else {
          uVar3 = *(uint *)(param_1 + 0xc);
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
            iVar11 = DAT_14c964868 + 1;
            bVar12 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar6;
            if (bVar12) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar11);
            }
            LOCK();
            iVar6 = *(int *)(lVar7 + 0x10);
            bVar12 = iVar6 == 0;
            if (bVar12) {
              *(int *)(lVar7 + 0x10) = iVar11;
              iVar6 = 0;
            }
            UNLOCK();
            if (bVar12) {
              iVar6 = iVar11;
            }
          }
        }
        *(int *)((longlong)puVar4 + 0x1c) = iVar6;
        puVar4[4] = FUN_141239110;
      }
    }
    FUN_143e2ae64(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x68),&local_48);
    cVar5 = FUN_14655f3c4(*(longlong *)(param_1 + 0x78) + 0x140);
    if (cVar5 == '\0') {
      FUN_14097d744(param_1);
    }
    else {
      FUN_1458c763c(*(longlong *)(param_1 + 0x78) + 0x208,&local_38,param_1,FUN_14097d744);
    }
    lVar7 = *(longlong *)(param_1 + 0x78);
    if (*(longlong *)(lVar7 + 0x40) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_1447210f0();
    }
    FUN_140cfc686(&local_38,uVar8);
    if (local_30 != (longlong *)0x0) {
      iVar6 = (int)local_30[1];
      do {
        if (iVar6 == 0) {
          plVar10 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar11 = (int)local_30[1];
        bVar12 = iVar6 == iVar11;
        if (bVar12) {
          *(int *)(local_30 + 1) = iVar6 + 1;
          iVar11 = iVar6;
        }
        iVar6 = iVar11;
        UNLOCK();
        plVar10 = local_30;
      } while (!bVar12);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
      if (plVar10 != (longlong *)0x0) {
        if (local_38 != (code *)0x0) {
          FUN_145853f12(local_38,lVar7,param_1);
        }
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
    }
  }
LAB_143e36cf7:
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e37134 FUN_143e37134 body=166 status=ok
// SIG undefined FUN_143e37134(void)

void FUN_143e37134(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1434a87a2();
  if (((*(char *)(param_1 + 0x88) == '\x01') && (*(int *)(param_1 + 0x80) <= param_2)) &&
     (param_2 <= *(int *)(param_1 + 0x84))) {
    *(undefined1 *)(param_1 + 0x98) = 1;
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xb0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa8);
    lVar3 = 0;
    do {
      if (((*(char *)(lVar2 + 0x28 + lVar3) == '\x01') &&
          (*(int *)(lVar2 + 0x20 + lVar3) <= param_2)) &&
         (param_2 <= *(int *)(lVar2 + 0x24 + lVar3))) {
        *(undefined1 *)(lVar2 + 0x38 + lVar3) = 1;
        *(undefined1 *)(lVar2 + 0x28 + lVar3) = 0;
      }
      lVar3 = lVar3 + 0x48;
    } while ((longlong)iVar1 * 0x48 != lVar3);
  }
  lVar2 = *(longlong *)(param_1 + 0xb8);
  if (((lVar2 != 0) && (*(int *)(lVar2 + 0x68) <= param_2)) && (param_2 <= *(int *)(lVar2 + 0x6c)))
  {
    *(undefined1 *)(lVar2 + 0x88) = 1;
    *(undefined8 *)(lVar2 + 0x68) = 0xffffffffffffffff;
  }
  return;
}



// FUNCTION 143e371da FUN_143e371da body=1968 status=ok
// SIG undefined FUN_143e371da(void)

void FUN_143e371da(ulonglong param_1,longlong *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  byte bVar9;
  char cVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *****pppppuVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 *****pppppuVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 *_Dst;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong local_f0;
  byte local_e1;
  uint local_e0;
  uint local_dc;
  undefined8 ****local_d8;
  undefined8 ****local_d0;
  int local_c4;
  undefined8 ****local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  ushort local_a8;
  byte local_a0;
  ulonglong local_98 [3];
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(byte *)(param_2 + 0x1d) & 1) == 0) {
    if ((*(byte *)(param_2 + 0x1d) & 2) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
    }
    local_e1 = 0;
    puVar4 = (ulonglong *)param_2[1];
    pbVar1 = (byte *)*puVar4 + 1;
    if ((byte *)puVar4[1] < pbVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_e1,1);
    }
    else {
      local_e1 = *(byte *)*puVar4;
      *puVar4 = (ulonglong)pbVar1;
    }
    switch(local_e1) {
    case 1:
      *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 2;
      FUN_146560a1a(param_1);
      break;
    case 2:
      local_98[0] = 0;
      puVar5 = (ulonglong *)param_2[1];
      puVar4 = (ulonglong *)*puVar5 + 1;
      if ((ulonglong *)puVar5[1] < puVar4) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,local_98,8);
        }
        else {
          thunk_FUN_146821949(param_2,local_98);
        }
      }
      else {
        local_98[0] = *(ulonglong *)*puVar5;
        *puVar5 = (ulonglong)puVar4;
      }
      uVar21 = local_98[0];
      lVar12 = *(longlong *)(param_1 + 0x78);
      if (((lVar12 != 0) && ((*(uint *)(lVar12 + 8) >> 0x1e & 1) == 0)) &&
         (*(ulonglong *)(lVar12 + 0x58) != local_98[0])) {
        uVar16 = (ulonglong)*(uint *)(lVar12 + 0x50);
        if (-1 < (int)*(uint *)(lVar12 + 0x50)) {
          lVar19 = 0;
          do {
            uVar20 = 1L << ((byte)lVar19 & 0x3f);
            uVar11 = uVar20 & uVar21;
            if ((uVar11 != (*(ulonglong *)(lVar12 + 0x58) & uVar20)) && ((int)uVar16 != 0)) {
              lVar14 = *(longlong *)(lVar12 + 0x48);
              lVar17 = (longlong)(int)uVar16 * 0x90;
              do {
                if (*(ulonglong *)(lVar14 + 0x58) == uVar20) {
                  if (lVar14 != 0) {
                    if (uVar11 == 0) {
                      if ((*(byte *)(*(longlong *)(lVar14 + 0x40) + 0x28) & 1) == 0) {
                        FUN_14089845a(lVar14,0);
                      }
                      else if ((*(byte *)(lVar14 + 0x88) & 0x22) == 2) {
                        *(byte *)(lVar14 + 0x88) = *(byte *)(lVar14 + 0x88) & 0xdd;
                      }
                    }
                    else {
                      FUN_14089838e();
                    }
                  }
                  break;
                }
                lVar14 = lVar14 + 0x90;
                lVar17 = lVar17 + -0x90;
              } while (lVar17 != 0);
            }
            uVar16 = (ulonglong)*(int *)(lVar12 + 0x50);
            bVar8 = lVar19 < (longlong)uVar16;
            lVar19 = lVar19 + 1;
          } while (bVar8);
        }
        *(ulonglong *)(lVar12 + 0x58) = uVar21;
      }
      break;
    case 3:
      if ((*(longlong *)(param_1 + 0x78) != 0) &&
         ((*(uint *)(*(longlong *)(param_1 + 0x78) + 8) >> 0x1e & 1) == 0)) {
        (**(code **)(*param_2 + 0x188))(param_2,local_98);
        if ((longlong)*(int *)(param_1 + 0xb0) != 0) {
          plVar15 = *(longlong **)(param_1 + 0xa8);
          lVar12 = (longlong)*(int *)(param_1 + 0xb0) * 0x48;
          do {
            if (*(int *)(*plVar15 + 0x34) == (int)local_98[0]) {
              if (plVar15 != (longlong *)0x0) {
                lVar12 = (longlong)*(int *)(plVar15[2] + 0x10);
                if (lVar12 != 0) {
                  lVar19 = *(longlong *)(plVar15[2] + 8);
                  lVar12 = lVar12 * 0x18;
                  do {
                    plVar6 = *(longlong **)(lVar19 + 8);
                    local_f8 = 0;
                    (**(code **)(*plVar6 + 0xd8))
                              (plVar6,param_2,0,
                               (longlong)*(int *)((longlong)plVar6 + 0x44) + *plVar15);
                    if ((*(byte *)(lVar19 + 0x10) & 4) != 0) {
                      (**(code **)(*(longlong *)*plVar15 + 0x48))((longlong *)*plVar15,lVar19);
                    }
                    lVar19 = lVar19 + 0x18;
                    lVar12 = lVar12 + -0x18;
                  } while (lVar12 != 0);
                }
              }
              break;
            }
            plVar15 = plVar15 + 9;
            lVar12 = lVar12 + -0x48;
          } while (lVar12 != 0);
        }
      }
      break;
    case 4:
      lVar12 = *(longlong *)(param_1 + 0x78);
      if ((lVar12 != 0) && ((*(uint *)(lVar12 + 8) >> 0x1e & 1) == 0)) {
        local_dc = 0xffffffff;
        puVar4 = (ulonglong *)param_2[1];
        puVar2 = (uint *)*puVar4 + 1;
        if ((uint *)puVar4[1] < puVar2) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_dc,4);
          }
          else {
            FUN_14572512c(param_2,&local_dc);
          }
        }
        else {
          local_dc = *(uint *)*puVar4;
          *puVar4 = (ulonglong)puVar2;
        }
        if ((-1 < (int)local_dc) && ((int)local_dc < *(int *)(lVar12 + 0xb8))) {
          lVar12 = (ulonglong)local_dc * 0x60 + *(longlong *)(lVar12 + 0xb0);
          local_e0 = 0xffffffff;
          puVar4 = (ulonglong *)param_2[1];
          puVar2 = (uint *)*puVar4 + 1;
          if ((uint *)puVar4[1] < puVar2) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,&local_e0,4);
            }
            else {
              FUN_14572512c(param_2);
            }
          }
          else {
            local_e0 = *(uint *)*puVar4;
            *puVar4 = (ulonglong)puVar2;
          }
          if ((-1 < (int)local_e0) && ((int)local_e0 < *(int *)(lVar12 + 0x58))) {
            local_f0 = (ulonglong)local_e0 * 0x28 + *(longlong *)(lVar12 + 0x50);
            local_78 = 0;
            local_70 = 0;
            local_98[0] = 0;
            local_98[1] = 0;
            local_6c = 0xffffffff00000080;
            local_64 = 0;
            local_58 = 0;
            local_50 = 0;
            pppppuVar18 = (undefined8 *****)(lVar12 + 0x10);
            if (*(undefined8 ******)(lVar12 + 0x38) != (undefined8 *****)0x0) {
              pppppuVar18 = *(undefined8 ******)(lVar12 + 0x38);
            }
            if ((longlong)*(int *)(lVar12 + 0x40) != 0) {
              lVar12 = (longlong)*(int *)(lVar12 + 0x40) * 0xc;
              do {
                cVar10 = (**(code **)(*param_2 + 0x38))(param_2);
                if (cVar10 != '\0') goto LAB_143e37930;
                bVar3 = *(byte *)(pppppuVar18 + 1);
                uVar21 = (ulonglong)((uint)bVar3 * 0x120);
                local_a8 = (ushort)*(uint *)((longlong)&DAT_14c9a8510 + uVar21);
                pppppuVar13 = &local_c0;
                if (0x18 < local_a8) {
                  pppppuVar13 = (undefined8 *****)
                                FUN_14001cc68(*(uint *)((longlong)&DAT_14c9a8510 + uVar21) & 0xffff)
                  ;
                  local_c0 = pppppuVar13;
                }
                if (*(code **)((longlong)&DAT_14c9a85a8 + uVar21) == (code *)0x0) {
                  memset(pppppuVar13,0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar21));
                }
                else {
                  (**(code **)((longlong)&DAT_14c9a85a8 + uVar21))();
                }
                local_d8 = pppppuVar18;
                local_d0 = &local_c0;
                local_a0 = bVar3;
                FUN_140881f5a(local_98,&local_c4,&local_d8,0);
                uVar21 = local_98[0];
                lVar19 = (longlong)local_c4;
                pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
                if (pcVar7 != (code *)0x0) {
                  pppppuVar13 = &local_c0;
                  if (0x18 < local_a8) {
                    pppppuVar13 = (undefined8 *****)local_c0;
                  }
                  (*pcVar7)(pppppuVar13);
                }
                if (0x18 < local_a8) {
                  FUN_1400020a8(local_c0);
                }
                lVar19 = uVar21 + lVar19 * 0x38;
                _Dst = (undefined8 *)(lVar19 + 8);
                local_a8 = 0;
                local_a0 = 0;
                FUN_1403f5866();
                bVar9 = local_a0;
                bVar3 = *(byte *)(lVar19 + 0x28);
                if (local_a0 == bVar3) {
                  pppppuVar13 = &local_c0;
                  if (0x18 < local_a8) {
                    pppppuVar13 = (undefined8 *****)local_c0;
                  }
                  if (0x18 < *(ushort *)(lVar19 + 0x20)) {
                    _Dst = (undefined8 *)*_Dst;
                  }
                  pcVar7 = *(code **)((longlong)&DAT_14c9a85c0 + (ulonglong)((uint)local_a0 * 0x120)
                                     );
                  if (pcVar7 == (code *)0x0) {
                    memcpy(_Dst,pppppuVar13,
                           (longlong)
                           *(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)local_a0 * 0x120)))
                    ;
                  }
                  else {
                    (*pcVar7)();
                  }
                }
                pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
                if (pcVar7 != (code *)0x0) {
                  (*pcVar7)();
                }
                if (0x18 < local_a8) {
                  FUN_1400020a8();
                }
                if (bVar9 != bVar3) goto LAB_143e37930;
                pppppuVar18 = (undefined8 *****)((longlong)pppppuVar18 + 0xc);
                lVar12 = lVar12 + -0xc;
              } while (lVar12 != 0);
            }
            if (*(int *)(local_f0 + 0x18) == 0) {
              plVar15 = (longlong *)0x0;
            }
            else {
              plVar15 = *(longlong **)(local_f0 + 0x10);
            }
            (**(code **)(*plVar15 + 0x58))(plVar15,local_f0,local_98);
LAB_143e37930:
            local_50 = 0;
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            FUN_140333f4e(local_98);
          }
        }
      }
      break;
    case 5:
      lVar12 = *(longlong *)(param_1 + 0x78);
      if ((lVar12 != 0) && ((*(uint *)(lVar12 + 8) >> 0x1e & 1) == 0)) {
        FUN_148990d42(param_2,0,lVar12 + 0xe0);
      }
    }
  }
  else {
    lVar12 = 0;
    local_c0 = (undefined8 *****)0x0;
    local_b8 = 0x19100;
    local_b0 = 0;
    FUN_1458c7c49(param_2,&local_c0);
    local_d8 = local_c0;
    FUN_1446dcdd4(local_98);
    if (DAT_14cb8b8f8 != 0) {
      lVar12 = FUN_144837462(DAT_14cb8b8f8,local_98);
    }
    *(longlong *)(param_1 + 0x68) = lVar12;
    if (local_80 != 0) {
      FUN_1400020a8();
      lVar12 = *(longlong *)(param_1 + 0x68);
    }
    if ((lVar12 != 0) &&
       ((**(code **)(*param_2 + 400))(param_2,param_1 + 0x70), 1 < *(ulonglong *)(param_1 + 0x70)))
    {
      lVar12 = FUN_1465609c4(param_1);
      if (lVar12 == 0) {
        lVar19 = *(longlong *)(param_1 + 0x28);
        local_98[0] = param_1;
        if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(param_1);
        }
        FUN_1405f6d44(lVar19 + 0x16c8,local_98);
      }
      FUN_143e36c8e(param_1,lVar12);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e379a6 FUN_143e379a6 body=264 status=ok
// SIG undefined FUN_143e379a6(void)

void FUN_143e379a6(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 6) & 0x80) != 0) {
    cVar1 = (**(code **)(*param_1 + 0x310))(param_1,0);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x330))(param_1);
    }
  }
  if ((*(uint *)(param_1 + 6) & 2) == 0) {
    if (((((*(uint *)(param_1 + 6) >> 0xc & 1) != 0) && (param_1[0xd] != 0)) && (param_1[0xe] != 0))
       && ((int)param_1[7] == -1)) {
      FUN_143e37aae(param_1);
      return;
    }
    FUN_148988604(param_1);
    lVar2 = param_1[0x10];
    if (lVar2 != 0) {
      if (((*(int *)(lVar2 + 0x68) != -1) && (*(int *)(lVar2 + 0x6c) != -1)) &&
         (1.0 < *(double *)(*(longlong *)(param_1[5] + 0x58) + 0x300) - *(double *)(lVar2 + 0x70)))
      {
        *(undefined1 *)(lVar2 + 0x88) = 1;
        *(undefined8 *)(lVar2 + 0x68) = 0xffffffffffffffff;
        lVar2 = param_1[0x10];
      }
      if (*(char *)(lVar2 + 0x88) == '\x01') {
        *(undefined1 *)(param_1 + 0x11) = 1;
      }
    }
    if (((param_1[0xd] == 0) || (param_1[0xe] == 0)) && (param_1[0xf] != 0)) {
      lVar2 = FUN_1489886ac(param_1);
      if (lVar2 != 0) {
        FUN_148988700(param_1,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143e37aae FUN_143e37aae body=636 status=ok
// SIG undefined FUN_143e37aae(void)

undefined8 FUN_143e37aae(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  wchar_t *local_1a8;
  code *local_1a0;
  undefined1 *local_198;
  code **local_190;
  code *local_188;
  code *local_180;
  undefined1 local_170 [8];
  longlong local_168;
  code *local_160 [30];
  byte local_6c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((param_1[0xd] != 0) && ((longlong *)param_1[0xe] != (longlong *)0x0)) {
    lVar5 = (**(code **)(*(longlong *)param_1[0xe] + 8))();
    local_168 = lVar5;
    if (lVar5 != 0) {
      plVar2 = (longlong *)param_1[5];
      if (DAT_14cae8b20 == 0) {
        local_190 = local_160;
        local_160[0] = (code *)&LAB_14355090c;
        local_180 = FUN_14081d0ea;
        local_188 = FUN_14081d0ea;
        local_198 = &LAB_147b8e16d;
        local_1a0 = (code *)&LAB_140810a38;
        local_1a8 = L"Engine";
        local_1b0 = 0x800000000;
        local_1b8 = 0x10000000;
        local_1c0 = 8;
        local_1c8 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar3 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        local_190 = local_160;
        local_160[0] = FUN_1449e2820;
        local_180 = FUN_14081d0ea;
        local_188 = FUN_14081d0ea;
        local_198 = &LAB_1468c5283;
        local_1a0 = FUN_142809da0;
        local_1a8 = L"Engine";
        local_1b0 = 0x400000000;
        local_1b8 = 0x10000000;
        local_1c0 = 8;
        local_1c8 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar5 = *(longlong *)(lVar5 + 0x20);
      if (lVar5 == 0) {
        lVar7 = 0;
      }
      else {
        iVar1 = *(int *)(lVar3 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar1) ||
             (lVar7 = lVar5,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8)
             != lVar3 + 0x30)) {
            lVar7 = 0;
          }
        } while ((lVar7 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
      }
      cVar4 = (**(code **)(*plVar2 + 0x388))(plVar2,lVar7);
      if (cVar4 != '\0') {
        FUN_1449daf8c(local_160,param_1,0);
        local_6c = local_6c | 0x10;
        (**(code **)(local_160[0] + 0x150))(local_160,&local_168);
        (**(code **)(*param_1 + 0x308))(param_1,local_170,local_160,0);
        FUN_1449daebe(local_160);
        uVar6 = 1;
        goto LAB_143e37bc4;
      }
    }
  }
  uVar6 = 0;
LAB_143e37bc4:
  if ((local_28 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e37de2 FUN_143e37de2 body=58 status=ok
// SIG undefined FUN_143e37de2(void)

void FUN_143e37de2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x68) != 0) && (*(longlong **)(param_1 + 0x70) != (longlong *)0x0)) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))();
    FUN_148990d42(param_2,1,lVar1 + 0x1a8);
    return;
  }
  return;
}



// FUNCTION 143e37e4c FUN_143e37e4c body=60 status=ok
// SIG undefined FUN_143e37e4c(void)

void FUN_143e37e4c(longlong param_1,int param_2)

{
  longlong lVar1;
  
  FUN_1434a87a2();
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 0x68) <= param_2)) && (param_2 <= *(int *)(lVar1 + 0x6c)))
  {
    *(undefined1 *)(lVar1 + 0x88) = 1;
    *(undefined8 *)(lVar1 + 0x68) = 0xffffffffffffffff;
  }
  return;
}



// FUNCTION 143e37eba FUN_143e37eba body=68 status=ok
// SIG undefined FUN_143e37eba(void)

undefined8 * FUN_143e37eba(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42b0c0;
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



// FUNCTION 143e37f1a FUN_143e37f1a body=31 status=ok
// SIG undefined FUN_143e37f1a(void)

undefined8 FUN_143e37f1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e37f39 FUN_143e37f39 body=24 status=ok
// SIG undefined FUN_143e37f39(void)

void FUN_143e37f39(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  return;
}



// FUNCTION 143e37f52 FUN_143e37f52 body=31 status=ok
// SIG undefined FUN_143e37f52(void)

undefined8 FUN_143e37f52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e37f78 FUN_143e37f78 body=162 status=ok
// SIG undefined FUN_143e37f78(void)

void FUN_143e37f78(longlong *param_1,undefined8 param_2)

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
        goto LAB_143e38005;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_143e38005:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 143e38020 FUN_143e38020 body=29 status=ok
// SIG undefined FUN_143e38020(void)

undefined8 FUN_143e38020(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e381bc FUN_143e381bc body=93 status=ok
// SIG undefined FUN_143e381bc(void)

void FUN_143e381bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42c920;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42b4b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e3821a FUN_143e3821a body=93 status=ok
// SIG undefined FUN_143e3821a(void)

void FUN_143e3821a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42c920;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42b4b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e38278 FUN_143e38278 body=126 status=ok
// SIG undefined FUN_143e38278(void)

void FUN_143e38278(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b42c920;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42b4b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e382e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e382f6 FUN_143e382f6 body=66 status=ok
// SIG undefined FUN_143e382f6(void)

void FUN_143e382f6(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143e38452(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e3833a FUN_143e3833a body=279 status=ok
// SIG undefined FUN_143e3833a(void)

undefined8 FUN_143e3833a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e3844b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e3844b;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143e3844b:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e383ff;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143e38452(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_143e383ff;
    }
  }
  uVar6 = 0;
LAB_143e383ff:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e38452 FUN_143e38452 body=1592 status=ok
// SIG undefined FUN_143e38452(void)

void FUN_143e38452(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_2 != 0) {
    lVar2 = *param_1;
    plVar3 = *(longlong **)(*param_2 + 0x28);
    if ((plVar3 != (longlong *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(plVar3);
    }
    else if (plVar3 == (longlong *)0x0) goto LAB_143e3857a;
    if ((*(longlong *)(lVar2 + 0x20) != 0) &&
       (plVar4 = *(longlong **)(lVar2 + 0x28), plVar4 != (longlong *)0x0)) {
      uVar8 = (**(code **)(*plVar3 + 0x180))(plVar3);
      FUN_140cfc686(&local_60,uVar8);
      if (local_58 != (longlong *)0x0) {
        iVar5 = (int)local_58[1];
        do {
          if (iVar5 == 0) {
            plVar13 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar14 = (int)local_58[1];
          bVar16 = iVar5 == iVar14;
          if (bVar16) {
            *(int *)(local_58 + 1) = iVar5 + 1;
            iVar14 = iVar5;
          }
          iVar5 = iVar14;
          UNLOCK();
          plVar13 = local_58;
        } while (!bVar16);
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_58 + 0x10))();
        }
        lVar2 = local_60;
        if (plVar13 != (longlong *)0x0) {
          if ((local_60 != 0) && (lVar9 = (**(code **)(*plVar4 + 8))(plVar4), lVar9 != 0)) {
            FUN_140cfc4c2(&local_60,plVar4);
            local_50 = 0;
            iVar5 = FUN_140e5c0b0(lVar2 + 0xc58,&local_60);
            lVar11 = *(longlong *)(lVar2 + 0xc58) + (longlong)iVar5 * 0x18;
            if (*(char *)(lVar11 + 0x10) == '\x01') {
              uVar7 = *(uint *)(lVar9 + 0xc);
              local_60 = (ulonglong)uVar7;
              if ((int)uVar7 < DAT_14c9647dc) {
                lVar15 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
              }
              else {
                lVar15 = 0;
              }
              uVar6 = *(uint *)(lVar15 + 0x10);
              if (*(uint *)(lVar15 + 0x10) == 0) {
                LOCK();
                iVar5 = DAT_14c964868 + 1;
                UNLOCK();
                local_70 = (longlong *)CONCAT44(local_70._4_4_,DAT_14c964868 + 1);
                bVar16 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar5;
                if (bVar16) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                               );
                }
                LOCK();
                uVar6 = *(uint *)(lVar15 + 0x10);
                bVar16 = uVar6 == 0;
                if (bVar16) {
                  *(uint *)(lVar15 + 0x10) = (uint)local_70;
                  uVar6 = 0;
                }
                UNLOCK();
                uVar7 = (uint)local_60;
                if (bVar16) {
                  uVar6 = (uint)local_70;
                }
              }
              local_60._0_4_ = uVar7;
              local_60 = CONCAT44(uVar6,(uint)local_60);
              plVar10 = (longlong *)FUN_14898c7d6(lVar2 + 0xc78,uVar6 ^ (uint)local_60);
              if ((longlong)(int)plVar10[1] != 0) {
                lVar15 = 0;
                do {
                  iVar5 = *(int *)(*plVar10 + 4 + lVar15);
                  if (((((iVar5 != 0) && (uVar7 = *(uint *)(*plVar10 + lVar15), -1 < (int)uVar7)) &&
                       ((int)uVar7 < DAT_14c9647dc)) &&
                      ((plVar12 = (longlong *)
                                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
                       plVar12 != (longlong *)0x0 && ((int)plVar12[2] == iVar5)))) &&
                     (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 &&
                      ((*plVar12 != 0 && (*(longlong **)(*plVar12 + 0x28) == plVar3))))))
                  goto LAB_143e3856a;
                  lVar15 = lVar15 + 8;
                } while ((longlong)(int)plVar10[1] * 8 != lVar15);
              }
              lVar9 = FUN_143e34816(lVar9,plVar3);
              if (lVar9 != 0) {
                uVar7 = *(uint *)(lVar9 + 0xc);
                local_70 = (longlong *)(ulonglong)uVar7;
                if ((int)uVar7 < DAT_14c9647dc) {
                  lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
                }
                else {
                  lVar9 = 0;
                }
                uVar7 = *(uint *)(lVar9 + 0x10);
                if (*(uint *)(lVar9 + 0x10) == 0) {
                  LOCK();
                  iVar5 = DAT_14c964868 + 1;
                  UNLOCK();
                  uVar6 = DAT_14c964868 + 1;
                  bVar16 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar5;
                  if (bVar16) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                 );
                  }
                  LOCK();
                  uVar7 = *(uint *)(lVar9 + 0x10);
                  bVar16 = uVar7 == 0;
                  if (bVar16) {
                    *(uint *)(lVar9 + 0x10) = uVar6;
                    uVar7 = 0;
                  }
                  UNLOCK();
                  if (bVar16) {
                    uVar7 = uVar6;
                  }
                }
                iVar5 = (int)plVar10[1];
                *(uint *)(plVar10 + 1) = iVar5 + 1U;
                if (*(uint *)((longlong)plVar10 + 0xc) < iVar5 + 1U) {
                  FUN_14898ca2c(plVar10,iVar5);
                }
                *(ulonglong *)(*plVar10 + (longlong)iVar5 * 8) =
                     ((ulonglong)uVar7 << 0x20) + (longlong)local_70;
              }
            }
LAB_143e3856a:
            if (*(char *)(lVar11 + 0x11) == '\x01') {
              lVar9 = (**(code **)(*plVar4 + 0x10))(plVar4);
              if ((longlong)*(int *)(lVar9 + 0x40) != 0) {
                plVar10 = *(longlong **)(lVar9 + 0x38);
                plVar4 = plVar10 + *(int *)(lVar9 + 0x40);
                do {
                  lVar9 = *plVar10;
                  uVar6 = 0;
                  uVar7 = 0;
                  if (lVar9 != 0) {
                    uVar6 = *(uint *)(lVar9 + 0xc);
                    if ((int)uVar6 < DAT_14c9647dc) {
                      lVar11 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
                    }
                    else {
                      lVar11 = 0;
                    }
                    uVar7 = *(uint *)(lVar11 + 0x10);
                    if (*(uint *)(lVar11 + 0x10) == 0) {
                      LOCK();
                      iVar5 = DAT_14c964868 + 1;
                      UNLOCK();
                      local_70 = (longlong *)CONCAT44(local_70._4_4_,DAT_14c964868 + 1);
                      bVar16 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar5;
                      if (bVar16) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                     );
                      }
                      LOCK();
                      uVar7 = *(uint *)(lVar11 + 0x10);
                      bVar16 = uVar7 == 0;
                      if (bVar16) {
                        *(uint *)(lVar11 + 0x10) = (uint)local_70;
                        uVar7 = 0;
                      }
                      UNLOCK();
                      if (bVar16) {
                        uVar7 = (uint)local_70;
                      }
                    }
                  }
                  local_60 = CONCAT44(uVar7,uVar6);
                  iVar5 = FUN_141249bb4((longlong *)(lVar2 + 0xcc8),uVar7 ^ uVar6,&local_60);
                  if (iVar5 != -1) {
                    lVar11 = *(longlong *)(lVar2 + 0xcc8);
                    lVar15 = lVar11 + (longlong)iVar5 * 0x20;
                    if ((lVar15 != 0) &&
                       (local_70 = (longlong *)((longlong)iVar5 * 0x20 + lVar11 + 8),
                       local_70 != (longlong *)0x0)) {
                      if ((longlong)*(int *)(lVar15 + 0x10) != 0) {
                        lVar11 = 0;
                        do {
                          iVar5 = *(int *)(*(longlong *)(lVar15 + 8) + 4 + lVar11);
                          if ((((iVar5 != 0) &&
                               (uVar7 = *(uint *)(*(longlong *)(lVar15 + 8) + lVar11),
                               -1 < (int)uVar7)) && ((int)uVar7 < DAT_14c9647dc)) &&
                             (((plVar12 = (longlong *)
                                          ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                                          *(longlong *)
                                           (DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
                               plVar12 != (longlong *)0x0 && ((int)plVar12[2] == iVar5)) &&
                              (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 &&
                               ((*plVar12 != 0 && (*(longlong **)(*plVar12 + 0x28) == plVar3))))))))
                          goto LAB_143e38642;
                          lVar11 = lVar11 + 8;
                        } while ((longlong)*(int *)(lVar15 + 0x10) * 8 != lVar11);
                      }
                      lVar9 = FUN_143e347a8(lVar9,plVar3);
                      if (lVar9 != 0) {
                        uVar7 = *(uint *)(lVar9 + 0xc);
                        if ((int)uVar7 < DAT_14c9647dc) {
                          local_68 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
                        }
                        else {
                          local_68 = 0;
                        }
                        iVar5 = *(int *)(local_68 + 0x10);
                        if (*(int *)(local_68 + 0x10) == 0) {
                          LOCK();
                          iVar5 = DAT_14c964868 + 1;
                          UNLOCK();
                          iVar14 = DAT_14c964868 + 1;
                          bVar16 = DAT_14c964868 < 1000;
                          DAT_14c964868 = iVar5;
                          if (bVar16) {
                            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                          0x23d,
                                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                         );
                          }
                          LOCK();
                          iVar5 = *(int *)(local_68 + 0x10);
                          bVar16 = iVar5 == 0;
                          if (bVar16) {
                            *(int *)(local_68 + 0x10) = iVar14;
                            iVar5 = 0;
                          }
                          UNLOCK();
                          if (bVar16) {
                            iVar5 = iVar14;
                          }
                        }
                        local_68 = (longlong)*(int *)(lVar15 + 0x10);
                        uVar6 = *(int *)(lVar15 + 0x10) + 1;
                        *(uint *)(lVar15 + 0x10) = uVar6;
                        if (*(uint *)(lVar15 + 0x14) < uVar6) {
                          FUN_145853fba(local_70,local_68);
                        }
                        *(ulonglong *)(*local_70 + local_68 * 8) = CONCAT44(iVar5,uVar7);
                      }
                    }
                  }
LAB_143e38642:
                  plVar10 = plVar10 + 1;
                } while (plVar10 != plVar4);
              }
            }
          }
          LOCK();
          plVar3 = plVar13 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
      }
    }
  }
LAB_143e3857a:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e38a8c FUN_143e38a8c body=29 status=ok
// SIG undefined FUN_143e38a8c(void)

undefined8 FUN_143e38a8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e38c28 FUN_143e38c28 body=93 status=ok
// SIG undefined FUN_143e38c28(void)

void FUN_143e38c28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42c920;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42b520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e38c86 FUN_143e38c86 body=93 status=ok
// SIG undefined FUN_143e38c86(void)

void FUN_143e38c86(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42c920;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42b520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e38ce4 FUN_143e38ce4 body=126 status=ok
// SIG undefined FUN_143e38ce4(void)

void FUN_143e38ce4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b42c920;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42b520;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e38d53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e38d62 FUN_143e38d62 body=66 status=ok
// SIG undefined FUN_143e38d62(void)

void FUN_143e38d62(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143e38ebe(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e38da6 FUN_143e38da6 body=279 status=ok
// SIG undefined FUN_143e38da6(void)

undefined8 FUN_143e38da6(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e38eb7;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e38eb7;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143e38eb7:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e38e6b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143e38ebe(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_143e38e6b;
    }
  }
  uVar6 = 0;
LAB_143e38e6b:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e38ebe FUN_143e38ebe body=1458 status=ok
// SIG undefined FUN_143e38ebe(void)

void FUN_143e38ebe(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  char cVar15;
  undefined8 unaff_RBP;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  uint *puVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  int iVar26;
  bool bVar27;
  undefined1 auStack_a8 [43];
  char local_7d;
  int local_7c;
  uint *local_78;
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*param_2 != 0) {
    lVar23 = *param_1;
    plVar17 = *(longlong **)(*param_2 + 0x28);
    if ((plVar17 != (longlong *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(plVar17);
    }
    else if (plVar17 == (longlong *)0x0) goto LAB_143e3917e;
    if ((*(longlong *)(lVar23 + 0x20) != 0) &&
       (plVar3 = *(longlong **)(lVar23 + 0x28), plVar3 != (longlong *)0x0)) {
      uVar6 = (**(code **)(*plVar17 + 0x180))(plVar17);
      FUN_140cfc686(&local_58,uVar6);
      if (local_50 != (longlong *)0x0) {
        iVar4 = (int)local_50[1];
        do {
          if (iVar4 == 0) {
            plVar19 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar26 = (int)local_50[1];
          bVar27 = iVar4 == iVar26;
          if (bVar27) {
            *(int *)(local_50 + 1) = iVar4 + 1;
            iVar26 = iVar4;
          }
          iVar4 = iVar26;
          UNLOCK();
          plVar19 = local_50;
        } while (!bVar27);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))();
        }
        lVar23 = local_58;
        if (plVar19 != (longlong *)0x0) {
          local_68 = plVar17;
          local_60 = plVar19;
          if ((local_58 != 0) &&
             (lVar7 = (**(code **)(*plVar3 + 8))(plVar3), plVar17 = local_68, lVar7 != 0)) {
            uVar24 = *(uint *)(lVar7 + 0xc);
            if ((int)uVar24 < DAT_14c9647dc) {
              lVar13 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
            }
            else {
              lVar13 = 0;
            }
            uVar14 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),*(undefined1 *)(lVar7 + 0x61)) &
                     0xffffffffffffff01;
            uVar10 = *(uint *)(lVar13 + 0x10);
            if (*(uint *)(lVar13 + 0x10) == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              uVar21 = DAT_14c964868 + 1;
              bVar27 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar27) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar21);
              }
              LOCK();
              uVar10 = *(uint *)(lVar13 + 0x10);
              bVar27 = uVar10 == 0;
              if (bVar27) {
                *(uint *)(lVar13 + 0x10) = uVar21;
                uVar10 = 0;
              }
              UNLOCK();
              if (bVar27) {
                uVar10 = uVar21;
              }
            }
            cVar15 = (char)uVar14 + '\x03';
            local_58 = CONCAT44(uVar10,uVar24);
            iVar4 = FUN_140cfc7be((longlong *)(lVar23 + 0xc78),uVar24 ^ uVar10);
            if (iVar4 != -1) {
              lVar7 = *(longlong *)(lVar23 + 0xc78);
              if ((lVar7 + (longlong)iVar4 * 0x20 + 8U & 0xfffffffffffffff7) != 0) {
                lVar7 = lVar7 + (longlong)iVar4 * 0x20;
                if ((longlong)*(int *)(lVar7 + 0x10) != 0) {
                  lVar13 = (longlong)*(int *)(lVar7 + 0x10) << 3;
                  lVar25 = 1;
                  do {
                    iVar4 = *(int *)(*(longlong *)(lVar7 + 8) + -4 + lVar25 * 8);
                    if (((((iVar4 != 0) &&
                          (uVar24 = *(uint *)(*(longlong *)(lVar7 + 8) + -8 + lVar25 * 8),
                          -1 < (int)uVar24)) && ((int)uVar24 < DAT_14c9647dc)) &&
                        ((plVar19 = (longlong *)
                                    ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
                         plVar19 != (longlong *)0x0 && ((int)plVar19[2] == iVar4)))) &&
                       (((*(uint *)(plVar19 + 1) & 0x10200000) == 0 &&
                        (plVar19 = (longlong *)*plVar19, plVar19 != (longlong *)0x0)))) {
                      if (plVar19[0xd] == 0) {
                        plVar18 = (longlong *)0x0;
                      }
                      else {
                        plVar18 = (longlong *)plVar19[0xe];
                      }
                      if ((plVar18 == plVar3) && ((longlong *)plVar19[5] == plVar17)) {
                        (**(code **)(*plVar19 + 0x2b8))
                                  (plVar19,CONCAT71((int7)(uVar14 >> 8),cVar15) & 0xffffffff);
                        iVar4 = *(int *)(lVar7 + 0x10);
                        if (iVar4 != (int)lVar25) {
                          memmove((void *)(*(longlong *)(lVar7 + 8) + lVar25 * 8 + -8),
                                  (void *)(*(longlong *)(lVar7 + 8) + lVar25 * 8),
                                  (longlong)(iVar4 - (int)lVar25) << 3);
                          iVar4 = *(int *)(lVar7 + 0x10);
                        }
                        *(int *)(lVar7 + 0x10) = iVar4 + -1;
                        break;
                      }
                    }
                    lVar25 = lVar25 + 1;
                    lVar13 = lVar13 + -8;
                  } while (lVar13 != 0);
                }
              }
            }
            puVar20 = (uint *)(lVar23 + 0xcd8);
            iVar4 = *(int *)(lVar23 + 0xcf0);
            local_7d = cVar15;
            if (iVar4 == 0) {
              uVar14 = 1;
              uVar16 = 0;
              iVar26 = 0;
              iVar9 = 0;
            }
            else {
              puVar8 = *(uint **)(lVar23 + 0xce8);
              if (*(uint **)(lVar23 + 0xce8) == (uint *)0x0) {
                puVar8 = puVar20;
              }
              uVar24 = *puVar8;
              if (uVar24 == 0) {
                iVar26 = iVar4 + 0x1e;
                if (-1 < iVar4 + -1) {
                  iVar26 = iVar4 + -1;
                }
                uVar16 = 0;
                uVar14 = (ulonglong)(uint)(iVar26 >> 5);
                if (iVar26 >> 5 < 1) {
                  uVar14 = uVar16;
                }
                iVar26 = 0;
                do {
                  if (uVar14 == uVar16) goto LAB_143e3916f;
                  iVar26 = iVar26 + 0x20;
                  uVar24 = puVar8[uVar16 + 1];
                  uVar16 = uVar16 + 1;
                } while (uVar24 == 0);
              }
              else {
                uVar16 = 0;
                iVar26 = 0;
              }
              uVar14 = (ulonglong)(-uVar24 & uVar24);
              uVar2 = uVar14 * 2 + 1;
              lVar7 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                }
              }
              iVar9 = (iVar26 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
              if (iVar4 <= iVar9) {
                iVar9 = iVar4;
              }
            }
            if (iVar9 != iVar4) {
              uVar24 = 0xffffffff;
              local_70 = lVar23;
              iVar5 = iVar4;
              local_78 = puVar20;
              do {
                lVar7 = (longlong)
                        *(int *)(*(longlong *)(lVar23 + 0xcc8) + 0x10 + (longlong)iVar9 * 0x20);
                if (lVar7 != 0) {
                  lVar13 = *(longlong *)(lVar23 + 0xcc8) + (longlong)iVar9 * 0x20;
                  lVar25 = *(longlong *)(lVar13 + 8);
                  lVar7 = lVar7 << 3;
                  lVar22 = 1;
                  do {
                    iVar9 = *(int *)(lVar25 + -4 + lVar22 * 8);
                    local_7c = iVar26;
                    if ((((iVar9 != 0) &&
                         (uVar10 = *(uint *)(lVar25 + -8 + lVar22 * 8), -1 < (int)uVar10)) &&
                        ((int)uVar10 < DAT_14c9647dc)) &&
                       (((plVar17 = (longlong *)
                                    ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                         plVar17 != (longlong *)0x0 && ((int)plVar17[2] == iVar9)) &&
                        (((*(uint *)(plVar17 + 1) & 0x10200000) == 0 &&
                         ((plVar17 = (longlong *)*plVar17, plVar17 != (longlong *)0x0 &&
                          (lVar23 = plVar17[0xf], lVar23 != 0)))))))) {
                      plVar19 = (longlong *)0x0;
                      if (*(longlong *)(lVar23 + 0x88) != 0) {
                        plVar19 = *(longlong **)(lVar23 + 0x90);
                      }
                      if ((plVar19 == plVar3) && ((longlong *)plVar17[5] == local_68)) {
                        (**(code **)(*plVar17 + 0x2b8))
                                  (plVar17,CONCAT71((int7)((ulonglong)lVar7 >> 8),local_7d));
                        iVar26 = *(int *)(lVar13 + 0x10);
                        if (iVar26 != (int)lVar22) {
                          lVar23 = *(longlong *)(lVar13 + 8);
                          memmove((void *)(lVar23 + lVar22 * 8 + -8),(void *)(lVar23 + lVar22 * 8),
                                  (longlong)(iVar26 - (int)lVar22) << 3);
                          iVar26 = *(int *)(lVar13 + 0x10);
                        }
                        *(int *)(lVar13 + 0x10) = iVar26 + -1;
                        iVar5 = *(int *)(local_70 + 0xcf0);
                        puVar20 = local_78;
                        lVar23 = local_70;
                        iVar26 = local_7c;
                        break;
                      }
                    }
                    lVar22 = lVar22 + 1;
                    lVar7 = lVar7 + -8;
                    puVar20 = local_78;
                    lVar23 = local_70;
                  } while (lVar7 != 0);
                }
                uVar24 = uVar24 & ~(uint)uVar14;
                puVar8 = *(uint **)(lVar23 + 0xce8);
                if (*(uint **)(lVar23 + 0xce8) == (uint *)0x0) {
                  puVar8 = puVar20;
                }
                iVar9 = (int)uVar16;
                lVar7 = (longlong)iVar9;
                uVar10 = puVar8[lVar7] & uVar24;
                if (uVar10 == 0) {
                  iVar11 = iVar5 + 0x1e;
                  if (-1 < iVar5 + -1) {
                    iVar11 = iVar5 + -1;
                  }
                  iVar11 = iVar11 >> 5;
                  iVar26 = iVar26 + 0x20;
                  iVar12 = iVar11;
                  if (iVar11 < iVar9) {
                    iVar12 = iVar9;
                  }
                  if (iVar9 < iVar11) {
                    lVar13 = 0;
                    do {
                      uVar10 = puVar8[lVar7 + lVar13 + 1];
                      if (uVar10 != 0) {
                        uVar16 = (ulonglong)(iVar9 + (int)lVar13 + 1);
                        uVar24 = 0xffffffff;
                        goto LAB_143e39307;
                      }
                      iVar26 = iVar26 + 0x20;
                      lVar13 = lVar13 + 1;
                    } while (iVar12 - lVar7 != lVar13);
                    uVar24 = 0xffffffff;
                    iVar9 = iVar12;
                  }
                  uVar16 = (ulonglong)(iVar9 + 1);
                  puVar20 = local_78;
                  iVar9 = iVar5;
                }
                else {
LAB_143e39307:
                  uVar14 = (ulonglong)(-uVar10 & uVar10);
                  uVar2 = uVar14 * 2 + 1;
                  lVar7 = 0x3f;
                  if (uVar2 != 0) {
                    for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                    }
                  }
                  iVar9 = (iVar26 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
                  if (iVar5 <= iVar9) {
                    iVar9 = iVar5;
                  }
                }
              } while (iVar9 != iVar4);
            }
          }
LAB_143e3916f:
          plVar3 = local_60;
          LOCK();
          plVar17 = local_60 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
      }
    }
  }
LAB_143e3917e:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e39484 FUN_143e39484 body=31 status=ok
// SIG undefined FUN_143e39484(void)

undefined8 FUN_143e39484(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e394c0 FUN_143e394c0 body=15 status=ok
// SIG undefined FUN_143e394c0(void)

void FUN_143e394c0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return;
}



// FUNCTION 143e394d0 FUN_143e394d0 body=361 status=ok
// SIG undefined FUN_143e394d0(void)

uint FUN_143e394d0(longlong param_1,longlong param_2)

{
  wchar_t *pwVar1;
  uint uVar2;
  wchar_t *_Str1;
  longlong *plVar3;
  wchar_t *_Str2;
  wchar_t *pwVar4;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  int local_40;
  wchar_t *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(int *)(param_1 + 0xc) == 0) || (uVar2 = *(uint *)(param_1 + 8), (int)uVar2 < 0)) ||
     (DAT_14c9647dc <= (int)uVar2)) {
LAB_143e39548:
    FUN_140056680(&local_38,&DAT_149e01fe8);
  }
  else {
    plVar3 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar3 == (longlong *)0x0) || ((int)plVar3[2] != *(int *)(param_1 + 0xc))) ||
       (((*(uint *)(plVar3 + 1) & 0x10200000) != 0 || (*plVar3 == 0)))) goto LAB_143e39548;
    local_48 = *(wchar_t **)(*plVar3 + 0x18);
    FUN_1400021e4(&local_48,&local_38);
  }
  if (((*(int *)(param_2 + 0xc) != 0) && (uVar2 = *(uint *)(param_2 + 8), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_2 + 0xc))) &&
        ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (*plVar3 != 0)) {
      local_28 = *(undefined8 *)(*plVar3 + 0x18);
      FUN_1400021e4(&local_28,&local_48);
      goto LAB_143e395c9;
    }
  }
  FUN_140056680(&local_48,&DAT_149e01fe8);
LAB_143e395c9:
  pwVar4 = local_38;
  pwVar1 = local_48;
  _Str2 = local_48;
  if (local_40 == 0) {
    _Str2 = L"";
  }
  _Str1 = L"";
  if (local_30 != 0) {
    _Str1 = local_38;
  }
  uVar2 = wcscmp(_Str1,_Str2);
  if (pwVar1 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar1);
    pwVar4 = local_38;
  }
  if (pwVar4 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar4);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e3963a FUN_143e3963a body=68 status=ok
// SIG undefined FUN_143e3963a(void)

undefined8 * FUN_143e3963a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42b8c0;
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



// FUNCTION 143e3967e FUN_143e3967e body=156 status=ok
// SIG undefined FUN_143e3967e(void)

undefined8 * FUN_143e3967e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b42b950;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143e396e7;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143e396e7:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e3971a FUN_143e3971a body=68 status=ok
// SIG undefined FUN_143e3971a(void)

undefined8 * FUN_143e3971a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42b970;
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



// FUNCTION 143e3979a FUN_143e3979a body=29 status=ok
// SIG undefined FUN_143e3979a(void)

undefined8 FUN_143e3979a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e39936 FUN_143e39936 body=101 status=ok
// SIG undefined FUN_143e39936(void)

void FUN_143e39936(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42bba0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143e3999c FUN_143e3999c body=101 status=ok
// SIG undefined FUN_143e3999c(void)

void FUN_143e3999c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42bba0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143e39a02 FUN_143e39a02 body=134 status=ok
// SIG undefined FUN_143e39a02(void)

void FUN_143e39a02(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c7440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42bba0;
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
                    /* WARNING: Could not recover jumptable at 0x000143e39a79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e39a88 FUN_143e39a88 body=66 status=ok
// SIG undefined FUN_143e39a88(void)

void FUN_143e39a88(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143e39be4(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e39acc FUN_143e39acc body=279 status=ok
// SIG undefined FUN_143e39acc(void)

undefined8 FUN_143e39acc(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e39bdd;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e39bdd;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143e39bdd:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e39b91;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143e39be4(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_143e39b91;
    }
  }
  uVar6 = 0;
LAB_143e39b91:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e39be4 FUN_143e39be4 body=917 status=ok
// SIG undefined FUN_143e39be4(void)

void FUN_143e39be4(uint *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 ****ppppuVar9;
  longlong lVar10;
  uint *_Buf2;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  uint *puVar16;
  ushort uVar17;
  bool bVar18;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  uint local_a8;
  int iStack_a4;
  ushort local_90;
  byte local_88;
  char local_80;
  undefined1 local_78 [8];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((((param_1[1] == 0) || (uVar14 = *param_1, (int)uVar14 < 0)) || (DAT_14c9647dc <= (int)uVar14)
      ) || ((plVar8 = (longlong *)
                      ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
            plVar8 == (longlong *)0x0 || (*(uint *)(plVar8 + 2) != param_1[1]))))
  goto LAB_143e39ea2;
  lVar15 = *param_2;
  plVar2 = *(longlong **)(param_1 + 2);
  if ((*(uint *)(plVar8 + 1) & 0x10200000) != 0) goto LAB_143e39ea2;
  if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
    lVar13 = *plVar8;
  }
  else {
    lVar13 = 0;
  }
  lVar6 = (**(code **)(*plVar2 + 0x38))(plVar2,lVar13);
  lVar10 = lVar6 + 0x10;
  if (lVar6 == 0) {
    lVar10 = lVar13 + 0x30;
  }
  FUN_14034cca6(local_78,lVar10);
  local_b0 = 0;
  local_90 = 8;
  iStack_a4 = 0;
  if (lVar15 == 0) {
    local_a8 = 0;
    iVar5 = 0;
  }
  else {
    local_a8 = *(uint *)(lVar15 + 0xc);
    if ((int)local_a8 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((local_a8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_a8 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar5 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar18) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar5 = *(int *)(lVar15 + 0x10);
      bVar18 = iVar5 == 0;
      if (bVar18) {
        *(int *)(lVar15 + 0x10) = iVar12;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar18) {
        iVar5 = iVar12;
      }
    }
  }
  uVar17 = local_90;
  puVar16 = &local_a8;
  local_88 = 7;
  cVar4 = '\0';
  local_80 = '\a';
  if ((DAT_14c9a8cf4 & 0x20) != 0) {
    local_80 = cVar4;
  }
  uVar14 = 7;
  iStack_a4 = iVar5;
  if (local_50 == 7) {
    _Buf2 = puVar16;
    if (0x18 < local_90) {
      _Buf2 = (uint *)CONCAT44(iVar5,local_a8);
    }
    ppppuVar9 = local_70;
    if (0x18 < local_58) {
      ppppuVar9 = (undefined8 ****)local_70[0];
    }
    if (DAT_14c9a8dc0 == (code *)0x0) {
      iVar5 = memcmp(ppppuVar9,_Buf2,(longlong)DAT_14c9a8cf0);
      cVar4 = iVar5 == 0;
    }
    else {
      cVar4 = (*DAT_14c9a8dc0)();
      uVar14 = (uint)local_88;
      uVar17 = local_90;
    }
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar14 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < uVar17) {
      puVar16 = (uint *)CONCAT44(iStack_a4,local_a8);
    }
    (*pcVar3)(puVar16);
    uVar17 = local_90;
  }
  if (0x18 < uVar17) {
    FUN_1400020a8(CONCAT44(iStack_a4,local_a8));
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar9 = local_70;
    if (0x18 < local_58) {
      ppppuVar9 = (undefined8 ****)local_70[0];
    }
    (*pcVar3)(ppppuVar9);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
  if (cVar4 == '\0') goto LAB_143e39ea2;
  uVar14 = param_1[1];
  lVar15 = 0x30;
  if (uVar14 == 0) {
LAB_143e39edd:
    uVar7 = 0;
  }
  else {
    uVar1 = *param_1;
    uVar7 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         ((*(uint *)(plVar8 + 2) != uVar14 || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) {
        lVar15 = 0;
      }
      else {
        lVar15 = *plVar8;
      }
      lVar15 = lVar15 + 0x30;
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((puVar11 == (undefined8 *)0x0) || (*(uint *)(puVar11 + 2) != uVar14)) ||
         ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) goto LAB_143e39edd;
      uVar7 = *puVar11;
    }
  }
  uVar7 = (**(code **)(*plVar2 + 0x30))(plVar2,uVar7);
  FUN_14101bc7a(plVar2,uVar7,lVar15);
LAB_143e39ea2:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e39f7a FUN_143e39f7a body=259 status=ok
// SIG undefined FUN_143e39f7a(void)

void FUN_143e39f7a(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *_Buf1;
  longlong *plVar5;
  void *_Buf2;
  longlong lVar6;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_2 + 8);
  if ((int)uVar1 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar1) {
    return;
  }
  plVar5 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (plVar5 != (longlong *)0x0) {
    if ((int)plVar5[2] != *(int *)(param_2 + 0xc)) {
      return;
    }
    if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar6 = *plVar5;
      }
      else {
        lVar6 = 0;
      }
      if (*(byte *)(param_2 + 0x38) == *(byte *)(lVar6 + 0x58)) {
        if (*(ushort *)(lVar6 + 0x50) < 0x19) {
          _Buf2 = (void *)(lVar6 + 0x38);
        }
        else {
          _Buf2 = *(void **)(lVar6 + 0x38);
        }
        _Buf1 = (undefined8 *)(param_2 + 0x18);
        if (0x18 < *(ushort *)(param_2 + 0x30)) {
          _Buf1 = (undefined8 *)*_Buf1;
        }
        uVar4 = (ulonglong)((uint)*(byte *)(param_2 + 0x38) * 0x120);
        if (*(code **)(&DAT_14c9a85e0 + uVar4) == (code *)0x0) {
          iVar3 = memcmp(_Buf1,_Buf2,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
          if (iVar3 == 0) {
            return;
          }
        }
        else {
          cVar2 = (**(code **)(&DAT_14c9a85e0 + uVar4))();
          if (cVar2 != '\0') {
            return;
          }
        }
      }
      param_1 = (longlong *)*param_1;
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_14898cab2(param_1,iVar3);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar3 * 8) = *(undefined8 *)(param_2 + 8);
      return;
    }
    return;
  }
  return;
}



// FUNCTION 143e3a09c FUN_143e3a09c body=12 status=ok
// SIG undefined FUN_143e3a09c(void)

void FUN_143e3a09c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e3a0a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e3a0a8 FUN_143e3a0a8 body=29 status=ok
// SIG undefined FUN_143e3a0a8(void)

undefined8 FUN_143e3a0a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e3a0ea FUN_143e3a0ea body=12 status=ok
// SIG undefined FUN_143e3a0ea(void)

void FUN_143e3a0ea(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e3a0f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e3a0f6 FUN_143e3a0f6 body=29 status=ok
// SIG undefined FUN_143e3a0f6(void)

undefined8 FUN_143e3a0f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e3a23e FUN_143e3a23e body=29 status=ok
// SIG undefined FUN_143e3a23e(void)

undefined8 FUN_143e3a23e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


