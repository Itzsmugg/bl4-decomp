// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148252666 FUN_148252666 body=24 status=ok
// SIG undefined FUN_148252666(void)

bool FUN_148252666(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14825267e FUN_14825267e body=101 status=ok
// SIG undefined FUN_14825267e(void)

void FUN_14825267e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae69bb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1482526e4 FUN_1482526e4 body=101 status=ok
// SIG undefined FUN_1482526e4(void)

void FUN_1482526e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae69bb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14825274a FUN_14825274a body=134 status=ok
// SIG undefined FUN_14825274a(void)

void FUN_14825274a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae69bb0;
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
                    /* WARNING: Could not recover jumptable at 0x0001482527c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1482527d0 FUN_1482527d0 body=52 status=ok
// SIG undefined FUN_1482527d0(void)

void FUN_1482527d0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148252801. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return;
}



// FUNCTION 148252804 FUN_148252804 body=162 status=ok
// SIG undefined FUN_148252804(void)

bool FUN_148252804(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 1482528a8 FUN_1482528a8 body=132 status=ok
// SIG undefined FUN_1482528a8(void)

void FUN_1482528a8(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x28) == param_2) {
          FUN_14825292c(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x28 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14825292c FUN_14825292c body=87 status=ok
// SIG undefined FUN_14825292c(void)

void FUN_14825292c(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_148252366();
  return;
}



// FUNCTION 148252984 FUN_148252984 body=29 status=ok
// SIG undefined FUN_148252984(void)

undefined8 FUN_148252984(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482529bc FUN_1482529bc body=29 status=ok
// SIG undefined FUN_1482529bc(void)

bool FUN_1482529bc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1482529da FUN_1482529da body=26 status=ok
// SIG undefined FUN_1482529da(void)

bool FUN_1482529da(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1482529f4 FUN_1482529f4 body=24 status=ok
// SIG undefined FUN_1482529f4(void)

bool FUN_1482529f4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148252a0c FUN_148252a0c body=101 status=ok
// SIG undefined FUN_148252a0c(void)

void FUN_148252a0c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae69c20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148252a72 FUN_148252a72 body=101 status=ok
// SIG undefined FUN_148252a72(void)

void FUN_148252a72(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae69c20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148252ad8 FUN_148252ad8 body=134 status=ok
// SIG undefined FUN_148252ad8(void)

void FUN_148252ad8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae69c20;
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
                    /* WARNING: Could not recover jumptable at 0x000148252b4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148252b5e FUN_148252b5e body=39 status=ok
// SIG undefined FUN_148252b5e(void)

void FUN_148252b5e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148252b81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148252b86 FUN_148252b86 body=146 status=ok
// SIG undefined FUN_148252b86(void)

bool FUN_148252b86(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
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



// FUNCTION 148252c1a FUN_148252c1a body=367 status=ok
// SIG undefined FUN_148252c1a(void)

void FUN_148252c1a(longlong *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *_Dst;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  longlong *plVar19;
  int iVar20;
  
  iVar3 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar3 != 0) {
    uVar4 = *(uint *)(param_1 + 1);
    iVar13 = uVar4 - iVar3;
    iVar12 = iVar13;
    if ((int)param_1[6] != -1) {
      lVar6 = *param_1;
      iVar14 = (int)param_1[6];
      uVar16 = uVar4;
      do {
        iVar5 = *(int *)(lVar6 + 4 + (longlong)iVar14 * 0x28);
        if (iVar14 < iVar13) {
          puVar1 = (undefined8 *)(lVar6 + (longlong)iVar14 * 0x28);
          plVar19 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar19 = param_1 + 2;
          }
          puVar11 = (undefined8 *)(lVar6 + 0x28 + (longlong)(int)(uVar16 - 1) * 0x28);
          uVar15 = uVar16;
          do {
            puVar17 = puVar11;
            uVar16 = uVar15 - 1;
            uVar18 = uVar15 + 0x1e;
            if (-1 < (int)uVar16) {
              uVar18 = uVar16;
            }
            puVar11 = puVar17 + -5;
            uVar15 = uVar16;
          } while ((*(uint *)((longlong)plVar19 + (longlong)((int)uVar18 >> 5) * 4) >>
                    (uVar16 & 0x1f) & 1) == 0);
          uVar7 = puVar17[-5];
          uVar8 = puVar17[-4];
          uVar9 = puVar17[-3];
          uVar10 = puVar17[-2];
          puVar1[4] = puVar17[-1];
          puVar1[2] = uVar9;
          puVar1[3] = uVar10;
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          plVar19 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar19 = param_1 + 2;
          }
          iVar20 = iVar14 + 0x1f;
          if (-1 < iVar14) {
            iVar20 = iVar14;
          }
          puVar2 = (uint *)((longlong)plVar19 + (longlong)(iVar20 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)iVar14 & 0x1f);
        }
        iVar14 = iVar5;
      } while (iVar5 != -1);
      iVar14 = (int)param_1[1] - uVar4;
      if (iVar14 != 0) {
        _Dst = (void *)((longlong)iVar13 * 0x28 + *param_1);
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 0x28),(longlong)iVar14 * 0x28);
        iVar12 = (int)param_1[1] - iVar3;
      }
    }
    *(int *)(param_1 + 1) = iVar12;
    FUN_144a6134a(param_1 + 2,iVar13,iVar3);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_140549ad6(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148252d8a FUN_148252d8a body=977 status=ok
// SIG undefined FUN_148252d8a(void)

undefined8
FUN_148252d8a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_488 [39];
  undefined1 local_461;
  code *local_460;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined2 local_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined4 local_430;
  undefined1 local_42c;
  undefined8 local_428;
  undefined4 local_420;
  undefined4 local_418;
  undefined1 local_414;
  undefined8 local_410;
  undefined4 local_408;
  undefined4 local_400;
  undefined1 local_3fc;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined2 local_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined1 local_3d0 [488];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  longlong *local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c4;
  undefined1 local_1c0 [16];
  undefined4 local_1b0;
  undefined1 local_1ac;
  undefined1 local_1a8 [16];
  undefined2 local_198;
  undefined1 local_190 [112];
  undefined4 local_120;
  undefined1 local_11c;
  undefined1 local_118 [16];
  undefined1 local_108;
  undefined4 local_f0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_a8;
  undefined2 local_a0;
  undefined1 local_98 [48];
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_488;
  FUN_147775908(local_3d0);
  plVar3 = local_1d0;
  local_a8 = 1;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  if (local_1d0 != (longlong *)0x0) {
    local_1d0 = (longlong *)0x0;
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
  local_3e8 = CONCAT11(1,*param_4);
  local_3e0 = 0;
  uStack_3d8 = 0;
  local_a0 = local_3e8;
  local_1e8 = param_3;
  FUN_144a450dc(local_98,&local_3e0);
  FUN_1449db362(&local_3e0);
  local_108 = param_4[8];
  local_68 = param_4[0x78];
  local_af = param_4[9];
  local_400 = *(undefined4 *)(param_4 + 4);
  local_3fc = 1;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_11c = 1;
  local_120 = local_400;
  FUN_144a450dc(local_118,&local_3f8);
  FUN_1449db362(&local_3f8);
  local_414 = param_4[0x4c];
  local_418 = *(undefined4 *)(param_4 + 0x48);
  local_410 = 0;
  local_408 = 0;
  FUN_140a52b3c(&local_410,param_4 + 0x50);
  local_1c4 = local_414;
  local_1c8 = local_418;
  FUN_144a450dc(local_1c0,&local_410);
  FUN_1449db362(&local_410);
  local_42c = param_4[100];
  local_430 = *(undefined4 *)(param_4 + 0x60);
  local_428 = 0;
  local_420 = 0;
  FUN_140a52b3c(&local_428,param_4 + 0x68);
  local_1ac = local_42c;
  local_1b0 = local_430;
  FUN_144a450dc(local_1a8,&local_428);
  FUN_1449db362(&local_428);
  local_448 = CONCAT11(1,param_4[0x40]);
  local_440 = 0;
  uStack_438 = 0;
  local_198 = local_448;
  FUN_144a450dc(local_190,&local_440);
  FUN_1449db362(&local_440);
  local_f0 = *(undefined4 *)(param_4 + 0xc);
  local_b8 = *(undefined8 *)(param_4 + 0x80);
  local_b0 = param_4[0x88];
  local_460 = FUN_14776a9fc;
  local_458 = 0x290;
  uVar4 = FUN_147775b26(local_3d0,param_2,&local_460);
  local_460 = FUN_14773d7da;
  local_458 = 0;
  uVar4 = FUN_147775c1c(uVar4,param_2,&local_460);
  local_460 = FUN_14776acd6;
  local_458 = 0x290;
  uVar4 = FUN_147775d12(uVar4,param_2,&local_460);
  local_460 = (code *)&LAB_14776adfc;
  local_458 = 0x290;
  uVar4 = FUN_147775e08(uVar4,param_2,&local_460);
  local_460 = FUN_14776aff6;
  local_458 = 0x290;
  uVar4 = FUN_147775efe(uVar4,param_2,&local_460);
  local_460 = FUN_14776b16a;
  local_458 = 0x290;
  uVar4 = FUN_147775ff4(uVar4,param_2,&local_460);
  local_460 = FUN_14776b416;
  local_458 = 0x290;
  uVar4 = FUN_1477760ea(uVar4,param_2,&local_460);
  local_460 = FUN_14776b53a;
  local_458 = 0x290;
  uVar4 = FUN_1477761e0(uVar4,param_2,&local_460);
  FUN_1482531d0(&local_460,&local_461);
  FUN_14825315c(&local_460,param_1,uVar4);
  plVar3 = (longlong *)CONCAT44(uStack_454,local_458);
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
  FUN_14777634a(local_3d0);
  if ((local_60 ^ (ulonglong)auStack_488) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825315c FUN_14825315c body=115 status=ok
// SIG undefined FUN_14825315c(void)

longlong * FUN_14825315c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_1477785f6(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1482531d0 FUN_1482531d0 body=282 status=ok
// SIG undefined FUN_1482531d0(void)

longlong * FUN_1482531d0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_1482532eb();
  plVar4 = plVar3 + 2;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_14825361c(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14825327d;
    param_1[1] = 0;
LAB_148253247:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14825327d;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_14825327d;
      goto LAB_148253247;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14825327d;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_14825327d:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x8c0;
  FUN_140a52e78(*param_1,"TileViewT<ItemType>","Runtime\\UMG\\Public\\Components/ListViewBase.h",
                0x126);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482532eb FUN_1482532eb body=158 status=ok
// SIG undefined FUN_1482532eb(void)

undefined8 * FUN_1482532eb(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x8d0);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14ae69cc0;
  memset(puVar1 + 2,0,0x8c0);
  FUN_14770f42c(puVar1 + 2,1);
  *(undefined1 *)(puVar1 + 0x117) = 1;
  puVar1[2] = &PTR_FUN_14ae69ce0;
  puVar1[0x4f] = &PTR_FUN_14ae69fb0;
  puVar1[0x9d] = &PTR_FUN_14ae69fd0;
  puVar1[0x9f] = &PTR_LAB_14ae69ff0;
  *(undefined1 *)(puVar1 + 0x118) = 1;
  return puVar1;
}



// FUNCTION 148253394 FUN_148253394 body=29 status=ok
// SIG undefined FUN_148253394(void)

undefined8 FUN_148253394(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482533b2 FUN_1482533b2 body=38 status=ok
// SIG undefined FUN_1482533b2(void)

undefined8 FUN_1482533b2(undefined8 param_1,int param_2)

{
  FUN_14771303e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482533d8 FUN_1482533d8 body=343 status=ok
// SIG undefined FUN_1482533d8(void)

undefined8 FUN_1482533d8(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(char *)(param_1 + 0x8b0) == '\x01') && ((byte)(*param_4 - 1U) < 2)) &&
     (plVar1 = *(longlong **)(param_1 + 0x8a0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1,&local_48);
    if (0 < (int)uStack_40) {
      if (*(int *)(param_1 + 0x718) == *(int *)(param_1 + 0x744)) {
        plVar1 = *(longlong **)(param_1 + 0x8a0);
        if (plVar1 == (longlong *)0x0) {
          local_48 = (undefined8 *)0x0;
          uStack_40 = uStack_40 & 0xffffffff00000000;
        }
        else {
          (**(code **)(*plVar1 + 8))(plVar1,&local_48);
        }
        uVar2 = *local_48;
        FUN_147706086(param_1,uVar2,1);
        FUN_14776a48a(param_1,uVar2,*(undefined4 *)(param_4 + 4));
      }
      else {
        local_48 = (undefined8 *)0x0;
        uStack_40 = 0;
        FUN_14776a2ae(param_1,&local_48);
        uVar2 = *local_48;
        FUN_147706086(param_1,uVar2,1);
        FUN_14776a48a(param_1,uVar2,*(undefined4 *)(param_4 + 4));
        if (local_48 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x8b0) = 1;
  FUN_14697d592(param_1,param_2,param_3,param_4);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148253530 FUN_148253530 body=26 status=ok
// SIG undefined FUN_148253530(void)

void FUN_148253530(longlong param_1)

{
  FUN_146af4042();
  *(undefined1 *)(param_1 + 0x859) = 0;
  return;
}



// FUNCTION 14825354a FUN_14825354a body=49 status=ok
// SIG undefined FUN_14825354a(void)

void FUN_14825354a(longlong param_1,longlong param_2)

{
  char cVar1;
  
  FUN_146af551c();
  if (*(char *)(param_2 + 100) == '\x01') {
    cVar1 = FUN_140591fd6(param_1);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x2f8) = 1;
    }
  }
  return;
}



// FUNCTION 14825357c FUN_14825357c body=158 status=ok
// SIG undefined FUN_14825357c(void)

char * FUN_14825357c(longlong param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146af58ae();
  if ((*param_2 == '\x01') && (cVar2 = FUN_140591fd6(param_1), cVar2 != '\0')) {
    *(undefined1 *)(param_1 + 0x8b0) = 0;
    local_20 = *(longlong *)(param_1 + 0x10);
    if (local_20 == 0) {
      local_20 = 0;
      local_28 = 0;
    }
    else {
      iVar3 = *(int *)(local_20 + 8);
      local_28 = 0;
      do {
        if (iVar3 == 0) {
          local_20 = 0;
          goto LAB_1482535dc;
        }
        LOCK();
        iVar1 = *(int *)(local_20 + 8);
        bVar4 = iVar3 == iVar1;
        if (bVar4) {
          *(int *)(local_20 + 8) = iVar3 + 1;
          iVar1 = iVar3;
        }
        iVar3 = iVar1;
        UNLOCK();
      } while (!bVar4);
      local_28 = *(undefined8 *)(param_1 + 8);
    }
LAB_1482535dc:
    FUN_140592b68(param_2,&local_28,CONCAT71((int7)((ulonglong)local_28 >> 8),2),0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14825361c FUN_14825361c body=167 status=ok
// SIG undefined FUN_14825361c(void)

void FUN_14825361c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148253697;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148253697;
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
LAB_148253697:
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
                    /* WARNING: Could not recover jumptable at 0x0001482536b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1482536c4 FUN_1482536c4 body=720 status=ok
// SIG undefined FUN_1482536c4(void)

undefined8
FUN_1482536c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_448 [39];
  undefined1 local_421;
  code *local_420;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 local_408;
  undefined1 local_404;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined1 local_3f0 [424];
  undefined8 local_248;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined4 local_110;
  undefined1 local_10c;
  undefined1 local_108 [32];
  undefined1 local_e8;
  undefined1 local_b7;
  undefined8 local_b0;
  undefined1 local_80;
  undefined1 local_7c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_448;
  FUN_14777966c(local_3f0);
  plVar3 = local_1b8;
  local_80 = 1;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  if (local_1b8 != (longlong *)0x0) {
    local_1b8 = (longlong *)0x0;
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
  local_e8 = *(undefined1 *)(param_4 + 1);
  local_b7 = *(undefined1 *)((longlong)param_4 + 5);
  local_408 = *param_4;
  local_404 = 1;
  local_400 = 0;
  uStack_3f8 = 0;
  local_10c = 1;
  local_1d0 = param_3;
  local_110 = local_408;
  FUN_144a450dc(local_108,&local_400);
  FUN_1449db362(&local_400);
  local_7c = *(undefined1 *)((longlong)param_4 + 6);
  local_248 = *(undefined8 *)(param_4 + 2);
  local_b0 = *(undefined8 *)(param_4 + 4);
  local_420 = FUN_14776a9fc;
  local_418 = 0x290;
  uVar4 = FUN_1477798c4(local_3f0,param_2,&local_420);
  local_420 = FUN_14776acd6;
  local_418 = 0x290;
  uVar4 = FUN_1477799ba(uVar4,param_2,&local_420);
  local_420 = (code *)&LAB_14776adfc;
  local_418 = 0x290;
  uVar4 = FUN_147779ab0(uVar4,param_2,&local_420);
  local_420 = FUN_14773d7da;
  local_418 = 0;
  uVar4 = FUN_147779ba6(uVar4,param_2,&local_420);
  local_420 = FUN_14776aff6;
  local_418 = 0x290;
  uVar4 = FUN_147779c9c(uVar4,param_2,&local_420);
  local_420 = FUN_14776b16a;
  local_418 = 0x290;
  uVar4 = FUN_147779d92(uVar4,param_2,&local_420);
  local_420 = FUN_14776b416;
  local_418 = 0x290;
  uVar4 = FUN_147779e88(uVar4,param_2,&local_420);
  local_420 = FUN_14776b53a;
  local_418 = 0x290;
  uVar4 = FUN_147779f7e(uVar4,param_2,&local_420);
  local_420 = (code *)&LAB_14777a16a;
  local_418 = 0x290;
  uVar4 = FUN_14777a074(uVar4,param_2,&local_420);
  local_420 = FUN_14777a26e;
  local_418 = 0x290;
  uVar4 = FUN_14777a178(uVar4,param_2,&local_420);
  FUN_148253a0a(&local_420,&local_421);
  FUN_148253996(&local_420,param_1,uVar4);
  plVar3 = (longlong *)CONCAT44(uStack_414,local_418);
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
  FUN_14777a39a(local_3f0);
  if ((local_50 ^ (ulonglong)auStack_448) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148253996 FUN_148253996 body=115 status=ok
// SIG undefined FUN_148253996(void)

longlong * FUN_148253996(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_1477811ae(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 148253a0a FUN_148253a0a body=400 status=ok
// SIG undefined FUN_148253a0a(void)

undefined8 * FUN_148253a0a(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x9a0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ae6a0e0;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x990);
  FUN_14777bf06(plVar4);
  plVar3[2] = (longlong)&PTR_FUN_14ae6a100;
  plVar3[0x4f] = (longlong)&PTR_FUN_14ae6a3f0;
  plVar3[0x9d] = (longlong)&PTR_FUN_14ae6a410;
  plVar3[0x9f] = (longlong)&PTR_LAB_14ae6a430;
  *(undefined1 *)(plVar3 + 0x132) = 1;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_148253dec(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_148253b2d;
    param_1[1] = 0;
LAB_148253af7:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_148253b2d;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_148253b2d;
      goto LAB_148253af7;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148253b2d;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_148253b2d:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x990;
  FUN_140a52e78(*param_1,"TreeViewT<ItemType>","Runtime\\UMG\\Public\\Components/ListViewBase.h",
                0x14e);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148253b9c FUN_148253b9c body=9 status=ok
// SIG undefined FUN_148253b9c(void)

void FUN_148253b9c(longlong param_1)

{
  FUN_14777d418(param_1 + 0x10);
  return;
}



// FUNCTION 148253ba6 FUN_148253ba6 body=29 status=ok
// SIG undefined FUN_148253ba6(void)

undefined8 FUN_148253ba6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148253bc4 FUN_148253bc4 body=38 status=ok
// SIG undefined FUN_148253bc4(void)

undefined8 FUN_148253bc4(undefined8 param_1,int param_2)

{
  FUN_14777d418();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148253bea FUN_148253bea body=280 status=ok
// SIG undefined FUN_148253bea(void)

undefined8 FUN_148253bea(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(char *)(param_1 + 0x980) == '\x01') && ((byte)(*param_4 - 1U) < 2)) &&
     (plVar1 = *(longlong **)(param_1 + 0x958), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1,&local_40);
    if (0 < local_38) {
      if (*(int *)(param_1 + 0x718) == *(int *)(param_1 + 0x744)) {
        plVar1 = *(longlong **)(param_1 + 0x958);
        if (plVar1 == (longlong *)0x0) {
          local_40 = (longlong *)0x0;
          local_38 = 0;
        }
        else {
          (**(code **)(*plVar1 + 8))(plVar1,&local_40);
        }
        lVar2 = *local_40;
      }
      else {
        if (*(char *)(param_1 + 0x858) != '\x01') goto LAB_148253c77;
        lVar2 = *(longlong *)(param_1 + 0x760);
      }
      if (lVar2 != 0) {
        FUN_147706086(param_1,lVar2,1);
        FUN_14776a48a(param_1,lVar2,*(undefined4 *)(param_4 + 4));
      }
    }
  }
LAB_148253c77:
  *(undefined1 *)(param_1 + 0x980) = 1;
  FUN_14697d592(param_1,param_2,param_3,param_4);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148253d04 FUN_148253d04 body=49 status=ok
// SIG undefined FUN_148253d04(void)

void FUN_148253d04(longlong param_1,longlong param_2)

{
  char cVar1;
  
  FUN_146af551c();
  if (*(char *)(param_2 + 100) == '\x01') {
    cVar1 = FUN_140591fd6(param_1);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x2f8) = 1;
    }
  }
  return;
}



// FUNCTION 148253d36 FUN_148253d36 body=158 status=ok
// SIG undefined FUN_148253d36(void)

char * FUN_148253d36(longlong param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146af58ae();
  if ((*param_2 == '\x01') && (cVar2 = FUN_140591fd6(param_1), cVar2 != '\0')) {
    *(undefined1 *)(param_1 + 0x980) = 0;
    local_20 = *(longlong *)(param_1 + 0x10);
    if (local_20 == 0) {
      local_20 = 0;
      local_28 = 0;
    }
    else {
      iVar3 = *(int *)(local_20 + 8);
      local_28 = 0;
      do {
        if (iVar3 == 0) {
          local_20 = 0;
          goto LAB_148253d96;
        }
        LOCK();
        iVar1 = *(int *)(local_20 + 8);
        bVar4 = iVar3 == iVar1;
        if (bVar4) {
          *(int *)(local_20 + 8) = iVar3 + 1;
          iVar1 = iVar3;
        }
        iVar3 = iVar1;
        UNLOCK();
      } while (!bVar4);
      local_28 = *(undefined8 *)(param_1 + 8);
    }
LAB_148253d96:
    FUN_140592b68(param_2,&local_28,CONCAT71((int7)((ulonglong)local_28 >> 8),2),0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148253dd6 FUN_148253dd6 body=22 status=ok
// SIG undefined FUN_148253dd6(void)

undefined8 FUN_148253dd6(undefined8 param_1,undefined8 param_2)

{
  FUN_146af5b3a();
  return param_2;
}



// FUNCTION 148253dec FUN_148253dec body=167 status=ok
// SIG undefined FUN_148253dec(void)

void FUN_148253dec(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148253e67;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148253e67;
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
LAB_148253e67:
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
                    /* WARNING: Could not recover jumptable at 0x000148253e87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148253e94 FUN_148253e94 body=31 status=ok
// SIG undefined FUN_148253e94(void)

undefined8 FUN_148253e94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148253ed0 FUN_148253ed0 body=93 status=ok
// SIG undefined FUN_148253ed0(void)

void FUN_148253ed0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae6a520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148253f2e FUN_148253f2e body=126 status=ok
// SIG undefined FUN_148253f2e(void)

void FUN_148253f2e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6a520;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148253f9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148253fac FUN_148253fac body=21 status=ok
// SIG undefined FUN_148253fac(void)

undefined8 FUN_148253fac(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148253fc2 FUN_148253fc2 body=103 status=ok
// SIG undefined FUN_148253fc2(void)

void FUN_148253fc2(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145a7a888();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14825402a(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825402a FUN_14825402a body=76 status=ok
// SIG undefined FUN_14825402a(void)

void FUN_14825402a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145a7a888();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14825403e;
    }
  }
  lVar2 = 0;
LAB_14825403e:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 148254076 FUN_148254076 body=207 status=ok
// SIG undefined FUN_148254076(void)

int FUN_148254076(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 148254146 FUN_148254146 body=76 status=ok
// SIG undefined FUN_148254146(void)

void FUN_148254146(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145994eea();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14825415a;
    }
  }
  lVar2 = 0;
LAB_14825415a:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 148254192 FUN_148254192 body=31 status=ok
// SIG undefined FUN_148254192(void)

undefined8 FUN_148254192(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482541cc FUN_1482541cc body=93 status=ok
// SIG undefined FUN_1482541cc(void)

void FUN_1482541cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6bc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6a590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14825422a FUN_14825422a body=93 status=ok
// SIG undefined FUN_14825422a(void)

void FUN_14825422a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6bc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6a590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148254288 FUN_148254288 body=126 status=ok
// SIG undefined FUN_148254288(void)

void FUN_148254288(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ae6bc70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6a590;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001482542f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148254306 FUN_148254306 body=38 status=ok
// SIG undefined FUN_148254306(void)

void FUN_148254306(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148254329. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14825432c FUN_14825432c body=132 status=ok
// SIG undefined FUN_14825432c(void)

void FUN_14825432c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1482543b2 FUN_1482543b2 body=208 status=ok
// SIG undefined FUN_1482543b2(void)

int FUN_1482543b2(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar4 = *(int *)(param_1 + 1);
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    piVar1 = (int *)*param_1;
    iVar3 = 0;
    bVar10 = *piVar1 == *(int *)*param_2;
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
      } while (bVar10 == (piVar1[lVar6] == *(int *)*param_2));
      if (bVar10 == false) {
        if (iVar3 != iVar7) {
          memmove(piVar1 + iVar3,piVar1 + iVar7,(longlong)(iVar9 - iVar7) << 2);
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



// FUNCTION 148254482 FUN_148254482 body=118 status=ok
// SIG undefined FUN_148254482(void)

ulonglong FUN_148254482(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482544fa FUN_1482544fa body=132 status=ok
// SIG undefined FUN_1482544fa(void)

void FUN_1482544fa(longlong param_1,int param_2)

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



// FUNCTION 148254580 FUN_148254580 body=272 status=ok
// SIG undefined FUN_148254580(void)

int FUN_148254580(longlong *param_1,undefined8 *param_2)

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
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  iVar12 = 0;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar4 = FUN_148254690(lVar2,*param_2);
    iVar12 = 0;
    iVar7 = 0;
    do {
      lVar10 = (longlong)iVar7;
      iVar3 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      lVar11 = lVar2 + 8 + lVar10 * 8;
      iVar8 = iVar7;
      lVar6 = lVar10;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar3;
        if (lVar13 <= lVar6) break;
        bVar5 = FUN_148254690(lVar11,*param_2);
        iVar8 = iVar8 + 1;
        lVar11 = lVar11 + 8;
        iVar9 = iVar8;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (iVar12 != iVar7) {
          memmove((void *)(lVar2 + (longlong)iVar12 * 8),(void *)(lVar2 + lVar10 * 8),
                  (longlong)(iVar9 - iVar7) << 3);
        }
        iVar12 = iVar12 + (iVar9 - iVar7);
      }
      iVar7 = iVar9;
      bVar4 = bVar4 ^ 1;
    } while (lVar6 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
    iVar12 = iVar1 - iVar12;
  }
  return iVar12;
}



// FUNCTION 148254690 FUN_148254690 body=53 status=ok
// SIG undefined FUN_148254690(void)

ulonglong FUN_148254690(int *param_1,int *param_2)

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



// FUNCTION 1482546c6 FUN_1482546c6 body=62 status=ok
// SIG undefined FUN_1482546c6(void)

void FUN_1482546c6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_143af238c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 148254704 FUN_148254704 body=73 status=ok
// SIG undefined FUN_148254704(void)

undefined8 * FUN_148254704(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14825474e FUN_14825474e body=32 status=ok
// SIG undefined FUN_14825474e(void)

undefined8 FUN_14825474e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FObjectFinder");
  return param_2;
}



// FUNCTION 14825476e FUN_14825476e body=29 status=ok
// SIG undefined FUN_14825476e(void)

undefined8 FUN_14825476e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482547a6 FUN_1482547a6 body=29 status=ok
// SIG undefined FUN_1482547a6(void)

bool FUN_1482547a6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1482547c4 FUN_1482547c4 body=26 status=ok
// SIG undefined FUN_1482547c4(void)

bool FUN_1482547c4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1482547de FUN_1482547de body=24 status=ok
// SIG undefined FUN_1482547de(void)

bool FUN_1482547de(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1482547f6 FUN_1482547f6 body=101 status=ok
// SIG undefined FUN_1482547f6(void)

void FUN_1482547f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5981a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6a620;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14825485c FUN_14825485c body=101 status=ok
// SIG undefined FUN_14825485c(void)

void FUN_14825485c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5981a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6a620;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1482548c2 FUN_1482548c2 body=134 status=ok
// SIG undefined FUN_1482548c2(void)

void FUN_1482548c2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a5981a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6a620;
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
                    /* WARNING: Could not recover jumptable at 0x000148254939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148254948 FUN_148254948 body=42 status=ok
// SIG undefined FUN_148254948(void)

void FUN_148254948(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014825496f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148254972 FUN_148254972 body=154 status=ok
// SIG undefined FUN_148254972(void)

bool FUN_148254972(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 148254a0e FUN_148254a0e body=29 status=ok
// SIG undefined FUN_148254a0e(void)

undefined8 FUN_148254a0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148254a46 FUN_148254a46 body=29 status=ok
// SIG undefined FUN_148254a46(void)

bool FUN_148254a46(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148254a64 FUN_148254a64 body=26 status=ok
// SIG undefined FUN_148254a64(void)

bool FUN_148254a64(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148254a7e FUN_148254a7e body=24 status=ok
// SIG undefined FUN_148254a7e(void)

bool FUN_148254a7e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148254a96 FUN_148254a96 body=101 status=ok
// SIG undefined FUN_148254a96(void)

void FUN_148254a96(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ed0600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6a690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148254afc FUN_148254afc body=101 status=ok
// SIG undefined FUN_148254afc(void)

void FUN_148254afc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ed0600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6a690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148254b62 FUN_148254b62 body=134 status=ok
// SIG undefined FUN_148254b62(void)

void FUN_148254b62(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149ed0600;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6a690;
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
                    /* WARNING: Could not recover jumptable at 0x000148254bd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148254be8 FUN_148254be8 body=68 status=ok
// SIG undefined FUN_148254be8(void)

void FUN_148254be8(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148254c29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3);
  return;
}



// FUNCTION 148254c2c FUN_148254c2c body=178 status=ok
// SIG undefined FUN_148254c2c(void)

bool FUN_148254c2c(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar3 = local_48;
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
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148254ce0 FUN_148254ce0 body=29 status=ok
// SIG undefined FUN_148254ce0(void)

undefined8 FUN_148254ce0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148254d18 FUN_148254d18 body=29 status=ok
// SIG undefined FUN_148254d18(void)

bool FUN_148254d18(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148254d36 FUN_148254d36 body=26 status=ok
// SIG undefined FUN_148254d36(void)

bool FUN_148254d36(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148254d50 FUN_148254d50 body=24 status=ok
// SIG undefined FUN_148254d50(void)

bool FUN_148254d50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148254d68 FUN_148254d68 body=101 status=ok
// SIG undefined FUN_148254d68(void)

void FUN_148254d68(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6bc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6a700;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148254dce FUN_148254dce body=101 status=ok
// SIG undefined FUN_148254dce(void)

void FUN_148254dce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6bc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6a700;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148254e34 FUN_148254e34 body=134 status=ok
// SIG undefined FUN_148254e34(void)

void FUN_148254e34(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ae6bc70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6a700;
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
                    /* WARNING: Could not recover jumptable at 0x000148254eab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148254eba FUN_148254eba body=42 status=ok
// SIG undefined FUN_148254eba(void)

void FUN_148254eba(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148254ee1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148254ee4 FUN_148254ee4 body=154 status=ok
// SIG undefined FUN_148254ee4(void)

bool FUN_148254ee4(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 148254f80 FUN_148254f80 body=365 status=ok
// SIG undefined FUN_148254f80(void)

undefined8 * FUN_148254f80(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar6 = (longlong *)FUN_14001cc68(0x280);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ae6a770;
  plVar7 = plVar6 + 2;
  memset(plVar7,0,0x270);
  FUN_140a53f9a(plVar7);
  plVar6[2] = (longlong)&PTR_FUN_14ae6a790;
  uVar5 = DAT_14c8463f8._4_4_;
  uVar4 = (undefined4)DAT_14c8463f8;
  uVar3 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(plVar6 + 0x4e) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)plVar6 + 0x274) = uVar3;
  *(undefined4 *)(plVar6 + 0x4f) = uVar4;
  *(undefined4 *)((longlong)plVar6 + 0x27c) = uVar5;
  local_30 = plVar7;
  local_28 = plVar6;
  FUN_14825517a(&local_30,plVar7);
  if (plVar6 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar7 = (longlong *)param_1[1];
    if (plVar7 == (longlong *)0x0) goto LAB_148255080;
    param_1[1] = 0;
LAB_14825504a:
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_148255080;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar6 = plVar7;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *param_1 = plVar7;
    plVar7 = (longlong *)param_1[1];
    if (plVar6 != plVar7) {
      param_1[1] = plVar6;
      if (plVar7 == (longlong *)0x0) goto LAB_148255080;
      goto LAB_14825504a;
    }
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_148255080;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_148255080:
  plVar7 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_28 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  local_38 = 0x270;
  FUN_140a52e78(*param_1,"SVisualAttachmentBox",
                ".\\../Plugins/Runtime/CommonUI/Source/CommonUI/Private/CommonVisualAttachment.cpp",
                0x2a);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482550ee FUN_1482550ee body=45 status=ok
// SIG undefined FUN_1482550ee(void)

void FUN_1482550ee(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149f14520;
  FUN_140cc7538(param_1 + 0x208);
  FUN_140c057ec(param_1 + 0x10);
  return;
}



// FUNCTION 14825511c FUN_14825511c body=29 status=ok
// SIG undefined FUN_14825511c(void)

undefined8 FUN_14825511c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14825513a FUN_14825513a body=63 status=ok
// SIG undefined FUN_14825513a(void)

undefined8 * FUN_14825513a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f14520;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14825517a FUN_14825517a body=167 status=ok
// SIG undefined FUN_14825517a(void)

void FUN_14825517a(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1482551f5;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1482551f5;
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
LAB_1482551f5:
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
                    /* WARNING: Could not recover jumptable at 0x000148255215. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148255222 FUN_148255222 body=29 status=ok
// SIG undefined FUN_148255222(void)

undefined8 FUN_148255222(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14825525a FUN_14825525a body=29 status=ok
// SIG undefined FUN_14825525a(void)

bool FUN_14825525a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148255278 FUN_148255278 body=26 status=ok
// SIG undefined FUN_148255278(void)

bool FUN_148255278(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148255292 FUN_148255292 body=24 status=ok
// SIG undefined FUN_148255292(void)

bool FUN_148255292(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1482552aa FUN_1482552aa body=101 status=ok
// SIG undefined FUN_1482552aa(void)

void FUN_1482552aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6a9d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148255310 FUN_148255310 body=101 status=ok
// SIG undefined FUN_148255310(void)

void FUN_148255310(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6a9d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148255376 FUN_148255376 body=134 status=ok
// SIG undefined FUN_148255376(void)

void FUN_148255376(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6a9d0;
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
                    /* WARNING: Could not recover jumptable at 0x0001482553ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1482553fc FUN_1482553fc body=52 status=ok
// SIG undefined FUN_1482553fc(void)

void FUN_1482553fc(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014825542d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return;
}



// FUNCTION 148255430 FUN_148255430 body=162 status=ok
// SIG undefined FUN_148255430(void)

bool FUN_148255430(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 1482554d4 FUN_1482554d4 body=1311 status=ok
// SIG undefined FUN_1482554d4(void)

void FUN_1482554d4(longlong param_1,int param_2,uint param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  code *local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = FUN_148255b76;
  local_60 = 0;
  FUN_1482559f4(local_58,param_1);
  FUN_14697ef1e(param_1,local_48,0,local_58);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  plVar5 = *(longlong **)(param_1 + 0x298);
  iVar13 = (int)plVar5[1];
  if (0 < iVar13) {
    iVar3 = *(int *)(param_1 + 0x2d0);
    if (param_2 == 0) {
      if (0 < iVar3) {
        iVar13 = iVar3;
      }
      *(int *)(param_1 + 0x2d0) = iVar13 + -1;
      uVar6 = *(undefined8 *)(param_1 + 0x288);
      plVar11 = *(longlong **)(param_1 + 0x290);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      uVar7 = *(undefined8 *)(param_1 + 0x278);
      lVar8 = *(longlong *)(param_1 + 0x280);
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      plVar10 = *(longlong **)(param_1 + 0x290);
      *(undefined8 *)(param_1 + 0x288) = uVar7;
      *(longlong *)(param_1 + 0x290) = lVar8;
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
      uVar7 = *(undefined8 *)(param_1 + 0x268);
      lVar8 = *(longlong *)(param_1 + 0x270);
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      plVar10 = *(longlong **)(param_1 + 0x280);
      *(undefined8 *)(param_1 + 0x278) = uVar7;
      *(longlong *)(param_1 + 0x280) = lVar8;
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
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      plVar10 = *(longlong **)(param_1 + 0x270);
      *(undefined8 *)(param_1 + 0x268) = uVar6;
      *(longlong **)(param_1 + 0x270) = plVar11;
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
      uVar9 = *(uint *)(param_1 + 0x2d0);
      if ((int)*(uint *)(param_1 + 0x2d0) < 1) {
        uVar4 = *(uint *)(*(longlong *)(param_1 + 0x298) + 8);
        uVar9 = 1;
        if (1 < (int)uVar4) {
          uVar9 = uVar4;
        }
      }
      uVar6 = *(undefined8 *)(param_1 + 0x268);
      if (*(int *)(param_1 + 0x2a8) == 0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = *(longlong **)(param_1 + 0x2a0);
      }
      (**(code **)(*plVar10 + 0x58))
                (plVar10,local_78,*(undefined8 *)(*plVar5 + -8 + (ulonglong)uVar9 * 8));
      FUN_148255bf6(uVar6,local_78);
      lVar8 = *(longlong *)(param_1 + 0x268);
      fVar14 = *(float *)(*(longlong *)(param_1 + 0x278) + 0x14) + *(float *)(param_1 + 0x2d8);
      *(float *)(lVar8 + 0x14) = fVar14;
      *(undefined2 *)(lVar8 + 0x34) = 0;
      *(float *)(lVar8 + 0x30) = fVar14;
    }
    else {
      iVar12 = 0;
      if (iVar3 + 1 < iVar13) {
        iVar12 = iVar3 + 1;
      }
      *(int *)(param_1 + 0x2d0) = iVar12;
      uVar6 = *(undefined8 *)(param_1 + 0x268);
      plVar11 = *(longlong **)(param_1 + 0x270);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      uVar7 = *(undefined8 *)(param_1 + 0x278);
      lVar8 = *(longlong *)(param_1 + 0x280);
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      plVar10 = *(longlong **)(param_1 + 0x270);
      *(undefined8 *)(param_1 + 0x268) = uVar7;
      *(longlong *)(param_1 + 0x270) = lVar8;
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
      uVar7 = *(undefined8 *)(param_1 + 0x288);
      lVar8 = *(longlong *)(param_1 + 0x290);
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      plVar10 = *(longlong **)(param_1 + 0x280);
      *(undefined8 *)(param_1 + 0x278) = uVar7;
      *(longlong *)(param_1 + 0x280) = lVar8;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)();
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))();
          }
        }
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      plVar10 = *(longlong **)(param_1 + 0x290);
      *(undefined8 *)(param_1 + 0x288) = uVar6;
      *(longlong **)(param_1 + 0x290) = plVar11;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)();
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))();
          }
        }
      }
      iVar13 = *(int *)(param_1 + 0x2d0) + 1;
      plVar10 = (longlong *)0x0;
      uVar6 = *(undefined8 *)(param_1 + 0x288);
      if (*(int *)(*(longlong *)(param_1 + 0x298) + 8) <= iVar13) {
        iVar13 = 0;
      }
      if (*(int *)(param_1 + 0x2a8) != 0) {
        plVar10 = *(longlong **)(param_1 + 0x2a0);
      }
      (**(code **)(*plVar10 + 0x58))
                (plVar10,local_88,*(undefined8 *)(*plVar5 + (longlong)iVar13 * 8));
      FUN_148255bf6(uVar6,local_88);
      lVar8 = *(longlong *)(param_1 + 0x288);
      fVar14 = *(float *)(*(longlong *)(param_1 + 0x278) + 0x14) + *(float *)(param_1 + 0x2dc);
      *(float *)(lVar8 + 0x14) = fVar14;
      *(undefined2 *)(lVar8 + 0x34) = 0;
      *(float *)(lVar8 + 0x30) = fVar14;
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar11 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  if (param_3 != 0xffffffff) {
    *(uint *)(param_1 + 0x2d0) = param_3;
    uVar6 = *(undefined8 *)(param_1 + 0x278);
    if (*(int *)(param_1 + 0x2a8) == 0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = *(longlong **)(param_1 + 0x2a0);
    }
    (**(code **)(*plVar11 + 0x58))
              (plVar11,local_98,*(undefined8 *)(*plVar5 + (ulonglong)param_3 * 8));
    FUN_148255bf6(uVar6,local_98);
  }
  FUN_148255df0(param_1);
  FUN_148255f28(param_1);
  lVar8 = *(longlong *)(param_1 + 0x278);
  *(undefined2 *)(lVar8 + 0x34) = 1;
  *(bool *)(lVar8 + 0x36) = *(float *)(lVar8 + 0x44) != 0.0;
  *(undefined4 *)(lVar8 + 0x30) = *(undefined4 *)(lVar8 + 0x2c);
  *(undefined4 *)(lVar8 + 0x18) = 0x3f800000;
  lVar8 = *(longlong *)(param_1 + 0x288);
  *(undefined2 *)(lVar8 + 0x34) = 1;
  *(bool *)(lVar8 + 0x36) = *(float *)(lVar8 + 0x44) != 0.0;
  *(undefined4 *)(lVar8 + 0x30) = *(undefined4 *)(lVar8 + 0x2c);
  *(undefined4 *)(lVar8 + 0x18) = 0x3f800000;
  lVar8 = *(longlong *)(param_1 + 0x268);
  *(undefined2 *)(lVar8 + 0x34) = 1;
  *(bool *)(lVar8 + 0x36) = *(float *)(lVar8 + 0x44) != 0.0;
  *(undefined4 *)(lVar8 + 0x30) = *(undefined4 *)(lVar8 + 0x2c);
  *(undefined4 *)(lVar8 + 0x18) = 0x3f800000;
  if ((*(int *)(param_1 + 0x2b8) != 0) &&
     (plVar5 = *(longlong **)(param_1 + 0x2b0), plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x60))(plVar5,*(undefined4 *)(param_1 + 0x2d0));
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482559f4 FUN_1482559f4 body=386 status=ok
// SIG undefined FUN_1482559f4(void)

longlong * FUN_1482559f4(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148255b05:
    *puVar5 = &PTR_LAB_149ed0600;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14ae6aa40;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148255b05;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149ed0600;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14ae6aa40;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148255b76 FUN_148255b76 body=128 status=ok
// SIG undefined FUN_148255b76(void)

undefined1 FUN_148255b76(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
  FUN_148256662(*(undefined8 *)(param_1 + 0x268),param_3);
  FUN_148256662(*(undefined8 *)(param_1 + 0x278),param_3);
  FUN_148256662(*(undefined8 *)(param_1 + 0x288),param_3);
  uVar1 = 1;
  if ((((*(char *)(*(longlong *)(param_1 + 0x278) + 0x34) == '\0') &&
       (*(char *)(*(longlong *)(param_1 + 0x278) + 0x36) == '\0')) &&
      (*(char *)(*(longlong *)(param_1 + 0x268) + 0x34) == '\0')) &&
     ((*(char *)(*(longlong *)(param_1 + 0x268) + 0x36) == '\0' &&
      (*(char *)(*(longlong *)(param_1 + 0x288) + 0x34) == '\0')))) {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x288) + 0x36);
  }
  return uVar1;
}



// FUNCTION 148255bf6 FUN_148255bf6 body=504 status=ok
// SIG undefined FUN_148255bf6(void)

void FUN_148255bf6(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_328 [32];
  undefined1 *local_308;
  undefined1 local_2f1;
  undefined1 local_2f0 [8];
  longlong *local_2e8;
  undefined2 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  longlong *local_2b8;
  undefined1 local_2b0 [552];
  undefined2 local_88;
  undefined1 local_80 [80];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_328;
  FUN_148219a90(local_2b0);
  local_2d8 = 0x100;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_88 = 0x100;
  FUN_144a450dc(local_80,&local_2d0);
  FUN_1449db362(&local_2d0);
  FUN_14825692e(local_2b0,param_1);
  FUN_1482569e8(local_2b0,param_2);
  local_308 = &local_2f1;
  FUN_14821a2da(local_2f0,"SFxWidget","Runtime\\WidgetCarousel\\Public\\SWidgetCarousel.h",0xbd);
  FUN_148219b6e(local_2f0,&local_2c0,local_2b0);
  plVar3 = local_2b8;
  if (local_2b8 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = local_2c0;
    plVar4 = *(longlong **)(param_1 + 0x50);
    if (plVar4 == (longlong *)0x0) goto LAB_148255cd2;
    *(undefined8 *)(param_1 + 0x50) = 0;
LAB_148255db6:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_148255cd2;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_2b8 + 1) = (int)local_2b8[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x48) = local_2c0;
    plVar4 = *(longlong **)(param_1 + 0x50);
    if (local_2b8 != plVar4) {
      *(longlong **)(param_1 + 0x50) = local_2b8;
      if (plVar4 == (longlong *)0x0) goto LAB_148255cd2;
      goto LAB_148255db6;
    }
    LOCK();
    plVar4 = local_2b8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148255cd2;
    (**(code **)*local_2b8)(local_2b8);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar3;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_148255cd2:
  if (local_2b8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2b8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2b8)(local_2b8);
      LOCK();
      piVar1 = (int *)((longlong)local_2b8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2b8 + 0x10))(local_2b8);
      }
    }
  }
  if (local_2e8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2e8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2e8)(local_2e8);
      LOCK();
      piVar1 = (int *)((longlong)local_2e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2e8 + 0x10))(local_2e8);
      }
    }
  }
  FUN_148219be2(local_2b0);
  plVar3 = *(longlong **)(param_2 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148255df0 FUN_148255df0 body=311 status=ok
// SIG undefined FUN_148255df0(void)

void FUN_148255df0(longlong param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  *(undefined4 *)(*(longlong *)(param_1 + 0x268) + 0x1c) = *(undefined4 *)(param_1 + 0x2d8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x268) + 0x20) = *(undefined4 *)(param_1 + 0x2dc);
  *(float *)(*(longlong *)(param_1 + 0x268) + 0x24) =
       *(float *)(param_1 + 0x2d8) + *(float *)(param_1 + 0x2e0);
  *(float *)(*(longlong *)(param_1 + 0x268) + 0x28) =
       *(float *)(param_1 + 0x2d8) + *(float *)(param_1 + 0x2e4);
  uVar1 = *(undefined4 *)(param_1 + 0x2d8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x268) + 0x2c) = uVar1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x1c) = uVar1;
  fVar2 = *(float *)(param_1 + 0x2dc);
  *(float *)(*(longlong *)(param_1 + 0x288) + 0x20) = fVar2;
  *(float *)(*(longlong *)(param_1 + 0x288) + 0x24) = fVar2 + *(float *)(param_1 + 0x2e0);
  *(float *)(*(longlong *)(param_1 + 0x288) + 0x28) =
       *(float *)(param_1 + 0x2dc) + *(float *)(param_1 + 0x2e4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x2c) = *(undefined4 *)(param_1 + 0x2dc);
  *(undefined4 *)(*(longlong *)(param_1 + 0x278) + 0x1c) = *(undefined4 *)(param_1 + 0x2d8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x278) + 0x20) = *(undefined4 *)(param_1 + 0x2dc);
  *(undefined4 *)(*(longlong *)(param_1 + 0x278) + 0x24) = *(undefined4 *)(param_1 + 0x2e0);
  *(undefined4 *)(*(longlong *)(param_1 + 0x278) + 0x28) = *(undefined4 *)(param_1 + 0x2e4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x278) + 0x2c) = 0;
  return;
}



// FUNCTION 148255f28 FUN_148255f28 body=978 status=ok
// SIG undefined FUN_148255f28(void)

void FUN_148255f28(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_478 [32];
  undefined1 *local_458;
  undefined1 local_441;
  undefined1 local_440 [8];
  longlong *local_438;
  undefined8 local_428;
  longlong *local_420;
  undefined8 local_418;
  longlong *local_410;
  undefined8 local_408;
  longlong *local_400;
  undefined8 local_3f8;
  longlong *local_3f0;
  undefined8 local_3e8;
  longlong *local_3e0;
  undefined1 local_3d8 [88];
  undefined1 local_380 [88];
  undefined1 local_328 [88];
  undefined1 local_2d0 [440];
  undefined1 local_118 [8];
  undefined1 local_110 [208];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_478;
  FUN_146977a00(*(undefined8 *)(param_1 + 0x2c0));
  FUN_146a24608(*(undefined8 *)(param_1 + 0x2c0),local_118,0xffffffff);
  FUN_140a504fe(local_2d0);
  FUN_140a4fdf2(local_328,0);
  local_408 = *(undefined8 *)(*(longlong *)(param_1 + 0x268) + 0x48);
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x268) + 0x50);
  if (plVar4 == (longlong *)0x0) {
    local_400 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_400 = plVar4;
  }
  uVar7 = FUN_140a4fd40(local_328,&local_408);
  uVar7 = FUN_140a5058c(local_2d0,uVar7);
  FUN_140a4fdf2(local_380,0);
  local_418 = *(undefined8 *)(*(longlong *)(param_1 + 0x288) + 0x48);
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x288) + 0x50);
  if (plVar5 == (longlong *)0x0) {
    local_410 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_410 = plVar5;
  }
  uVar8 = FUN_140a4fd40(local_380,&local_418);
  uVar7 = FUN_140a5058c(uVar7,uVar8);
  FUN_140a4fdf2(local_3d8,0);
  local_428 = *(undefined8 *)(*(longlong *)(param_1 + 0x278) + 0x48);
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x278) + 0x50);
  if (plVar6 == (longlong *)0x0) {
    local_420 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    local_420 = plVar6;
  }
  uVar8 = FUN_140a4fd40(local_3d8,&local_428);
  uVar7 = FUN_140a5058c(uVar7,uVar8);
  local_458 = &local_441;
  FUN_140a536a8(local_440,"SOverlay","Runtime\\WidgetCarousel\\Public\\SWidgetCarousel.h",0x27b);
  FUN_140a4ff16(local_440,&local_3f8,uVar7);
  local_3e8 = local_3f8;
  local_3e0 = local_3f0;
  if (local_3f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_3f0 + 1) = (int)local_3f0[1] + 1;
    UNLOCK();
  }
  FUN_140a4fe8e(local_110,&local_3e8);
  plVar3 = local_3e0;
  if (local_3e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_3e0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_3e0)(local_3e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_3f0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_3f0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_3f0)(local_3f0);
      LOCK();
      piVar2 = (int *)((longlong)local_3f0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_3f0 + 0x10))(local_3f0);
      }
    }
  }
  if (local_438 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_438 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_438)(local_438);
      LOCK();
      piVar2 = (int *)((longlong)local_438 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_438 + 0x10))(local_438);
      }
    }
  }
  plVar3 = local_420;
  if (local_420 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_420 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_420)(local_420);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
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
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_1415b5e50(local_3d8);
  plVar6 = local_410;
  if (local_410 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_410 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_410)(local_410);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  FUN_1415b5e50(local_380);
  plVar5 = local_400;
  if (local_400 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_400 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_400)(local_400);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  FUN_1415b5e50(local_328);
  FUN_1415b5e16(local_2d0);
  FUN_146a071ac(local_118);
  if ((local_40 ^ (ulonglong)auStack_478) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482562fc FUN_1482562fc body=64 status=ok
// SIG undefined FUN_1482562fc(void)

undefined8 * FUN_1482562fc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ae6aa40;
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



// FUNCTION 148256340 FUN_148256340 body=81 status=ok
// SIG undefined FUN_148256340(void)

undefined8 FUN_148256340(longlong param_1)

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



// FUNCTION 148256398 FUN_148256398 body=89 status=ok
// SIG undefined FUN_148256398(void)

bool FUN_148256398(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1482563e3;
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
LAB_1482563e3:
  return lVar6 == param_2;
}



// FUNCTION 14825640e FUN_14825640e body=118 status=ok
// SIG undefined FUN_14825640e(void)

void FUN_14825640e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ed0600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6aa40;
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



// FUNCTION 148256484 FUN_148256484 body=118 status=ok
// SIG undefined FUN_148256484(void)

void FUN_148256484(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ed0600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6aa40;
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



// FUNCTION 1482564fa FUN_1482564fa body=156 status=ok
// SIG undefined FUN_1482564fa(void)

void FUN_1482564fa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149ed0600;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6aa40;
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
                    /* WARNING: Could not recover jumptable at 0x000148256586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148256596 FUN_148256596 body=103 status=ok
// SIG undefined FUN_148256596(void)

ulonglong FUN_148256596(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar8) {
        uVar6 = (**(code **)(param_1 + 0x28))
                          ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
        return (ulonglong)uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001482565fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 1482565fe FUN_1482565fe body=100 status=ok
// SIG undefined FUN_1482565fe(void)

ulonglong FUN_1482565fe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148256657:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148256657;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 148256662 FUN_148256662 body=265 status=ok
// SIG undefined FUN_148256662(void)

void FUN_148256662(longlong param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = param_2;
  if (*(char *)(param_1 + 0x34) == '\x01') {
    local_48 = param_1 + 0x14;
    uVar1 = FUN_14825676c(param_1,&local_3c,param_1 + 0x30,param_1 + 0x38);
    *(undefined1 *)(param_1 + 0x34) = uVar1;
  }
  else if (*(char *)(param_1 + 0x35) == '\x01') {
    local_48 = param_1 + 0x14;
    uVar1 = FUN_14825676c(param_1,&local_3c,param_1 + 0x30,param_1 + 0x3c);
    *(undefined1 *)(param_1 + 0x35) = uVar1;
  }
  if (*(char *)(param_1 + 0x36) == '\x01') {
    local_48 = param_1 + 0x10;
    uVar1 = FUN_14825676c(param_1,&local_3c,param_1 + 0x18,param_1 + 0x44);
    *(undefined1 *)(param_1 + 0x36) = uVar1;
    local_2c = *(undefined4 *)(param_1 + 0x10);
    local_38 = &DAT_3f8000003f800000;
    local_30 = 0x3f800000;
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_140a5c650(*(longlong *)(param_1 + 0x48) + 0x240,*(longlong *)(param_1 + 0x48),&local_38);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825676c FUN_14825676c body=449 status=ok
// SIG undefined FUN_14825676c(void)

bool FUN_14825676c(longlong param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  float extraout_XMM0_Da;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_80;
  longlong *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  fVar7 = *param_5 - *param_3;
  if (*(char *)(param_1 + 0x35) == '\0') {
    fVar5 = *param_4 * *param_2;
  }
  else {
    if (*(float *)(param_1 + 0x40) + 0.0001 < ABS(fVar7)) {
      FUN_14285ff8c(param_1 + 0x58);
      local_80 = *(undefined8 *)(param_1 + 0x48);
      plVar4 = *(longlong **)(param_1 + 0x50);
      if (plVar4 == (longlong *)0x0) {
        local_78 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        local_78 = plVar4;
      }
      local_88 = 1;
      FUN_14692f4ee(param_1 + 0x58,&local_80,0,0);
      plVar1 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_78 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
    FUN_14692f614(param_1 + 0x58);
    fVar5 = extraout_XMM0_Da;
    if (extraout_XMM0_Da <= 0.1) {
      fVar5 = 0.1;
    }
    fVar5 = fVar5 * *param_4 * *param_2;
  }
  if (ABS(fVar7) < ABS(fVar5)) {
    fVar6 = *param_3;
  }
  else {
    fVar6 = (float)(~-(uint)(0.0 < fVar7) & (uint)fVar5 | (uint)-fVar5 & -(uint)(0.0 < fVar7)) +
            *param_5;
  }
  *param_5 = fVar6;
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return ABS(fVar5) <= ABS(fVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825692e FUN_14825692e body=163 status=ok
// SIG undefined FUN_14825692e(void)

longlong FUN_14825692e(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148256a42(local_58);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a51be2(&local_30,local_58);
  *(undefined1 *)(param_1 + 0x210) = local_38;
  *(undefined4 *)(param_1 + 0x200) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x204) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x208) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x20c) = uStack_40._4_4_;
  FUN_144a450dc(param_1 + 0x218,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482569e8 FUN_1482569e8 body=90 status=ok
// SIG undefined FUN_1482569e8(void)

longlong FUN_1482569e8(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x278);
  *(undefined8 *)(param_1 + 0x270) = uVar3;
  *(longlong *)(param_1 + 0x278) = lVar4;
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
  return param_1;
}



// FUNCTION 148256a42 FUN_148256a42 body=380 status=ok
// SIG undefined FUN_148256a42(void)

longlong * FUN_148256a42(longlong *param_1,undefined8 *param_2)

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
LAB_148256b4c:
    *puVar3 = &PTR_LAB_149f04fc0;
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
    *puVar3 = &PTR_FUN_14ae6aae0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = &LAB_1482569d2;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148256b4c;
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
    *puVar3 = &PTR_LAB_149f04fc0;
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
    *puVar3 = &PTR_FUN_14ae6aae0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_1482569d2;
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



// FUNCTION 148256bbe FUN_148256bbe body=64 status=ok
// SIG undefined FUN_148256bbe(void)

undefined8 * FUN_148256bbe(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ae6aae0;
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



// FUNCTION 148256c02 FUN_148256c02 body=81 status=ok
// SIG undefined FUN_148256c02(void)

undefined8 FUN_148256c02(longlong param_1)

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



// FUNCTION 148256c5a FUN_148256c5a body=89 status=ok
// SIG undefined FUN_148256c5a(void)

bool FUN_148256c5a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148256ca5;
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
LAB_148256ca5:
  return lVar6 == param_2;
}



// FUNCTION 148256cd0 FUN_148256cd0 body=118 status=ok
// SIG undefined FUN_148256cd0(void)

void FUN_148256cd0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04fc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6aae0;
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



// FUNCTION 148256d46 FUN_148256d46 body=118 status=ok
// SIG undefined FUN_148256d46(void)

void FUN_148256d46(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04fc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6aae0;
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



// FUNCTION 148256dbc FUN_148256dbc body=156 status=ok
// SIG undefined FUN_148256dbc(void)

void FUN_148256dbc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f04fc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6aae0;
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
                    /* WARNING: Could not recover jumptable at 0x000148256e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148256e58 FUN_148256e58 body=99 status=ok
// SIG undefined FUN_148256e58(void)

undefined8 FUN_148256e58(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148256ea8:
    (**(code **)(param_1 + 0x28))(0,param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148256ea8;
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
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18),param_2);
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
  return param_2;
}



// FUNCTION 148256ebc FUN_148256ebc body=136 status=ok
// SIG undefined FUN_148256ebc(void)

ulonglong FUN_148256ebc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148256f23:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148256f23;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4,local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 148256f46 FUN_148256f46 body=282 status=ok
// SIG undefined FUN_148256f46(void)

longlong * FUN_148256f46(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_148257061();
  plVar4 = plVar3 + 2;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_148257242(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_148256ff3;
    param_1[1] = 0;
LAB_148256fbd:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_148256ff3;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_148256ff3;
      goto LAB_148256fbd;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148256ff3;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_148256ff3:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x2f0;
  FUN_140a52e78(*param_1,"SWidgetCarousel<UPanelSlot*>",
                ".\\../Plugins/Runtime/CommonUI/Source/CommonUI/Private/CommonWidgetCarousel.cpp",
                0x95);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148257061 FUN_148257061 body=158 status=ok
// SIG undefined FUN_148257061(void)

undefined8 * FUN_148257061(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x300);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14ae6ab50;
  memset(puVar1 + 2,0,0x2f0);
  FUN_140a55f88(puVar1 + 2);
  puVar1[2] = &PTR_FUN_14ae6ab70;
  puVar1[0x56] = 0;
  *(undefined4 *)(puVar1 + 0x57) = 0;
  puVar1[0x58] = 0;
  *(undefined4 *)(puVar1 + 0x59) = 0;
  puVar1[0x4f] = 0;
  puVar1[0x50] = 0;
  puVar1[0x51] = 0;
  puVar1[0x52] = 0;
  puVar1[0x53] = 0;
  puVar1[0x54] = 0;
  puVar1[0x5a] = 0;
  puVar1[0x5b] = 0;
  return puVar1;
}



// FUNCTION 14825710a FUN_14825710a body=29 status=ok
// SIG undefined FUN_14825710a(void)

undefined8 FUN_14825710a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148257128 FUN_148257128 body=38 status=ok
// SIG undefined FUN_148257128(void)

undefined8 FUN_148257128(undefined8 param_1,int param_2)

{
  FUN_14825714e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14825714e FUN_14825714e body=243 status=ok
// SIG undefined FUN_14825714e(void)

void FUN_14825714e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae6ab70;
  plVar3 = (longlong *)param_1[0x59];
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
  FUN_1449db362(param_1 + 0x56);
  FUN_1449db362(param_1 + 0x54);
  plVar3 = (longlong *)param_1[0x52];
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
  plVar3 = (longlong *)param_1[0x50];
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
  plVar3 = (longlong *)param_1[0x4e];
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
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 148257242 FUN_148257242 body=167 status=ok
// SIG undefined FUN_148257242(void)

void FUN_148257242(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1482572bd;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1482572bd;
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
LAB_1482572bd:
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
                    /* WARNING: Could not recover jumptable at 0x0001482572dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1482572ea FUN_1482572ea body=29 status=ok
// SIG undefined FUN_1482572ea(void)

undefined8 FUN_1482572ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148257322 FUN_148257322 body=29 status=ok
// SIG undefined FUN_148257322(void)

bool FUN_148257322(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148257340 FUN_148257340 body=26 status=ok
// SIG undefined FUN_148257340(void)

bool FUN_148257340(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14825735a FUN_14825735a body=24 status=ok
// SIG undefined FUN_14825735a(void)

bool FUN_14825735a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14825737e FUN_14825737e body=101 status=ok
// SIG undefined FUN_14825737e(void)

void FUN_14825737e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6ae20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6adb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1482573e4 FUN_1482573e4 body=101 status=ok
// SIG undefined FUN_1482573e4(void)

void FUN_1482573e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6ae20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6adb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14825744a FUN_14825744a body=134 status=ok
// SIG undefined FUN_14825744a(void)

void FUN_14825744a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ae6ae20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6adb0;
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
                    /* WARNING: Could not recover jumptable at 0x0001482574c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1482574d0 FUN_1482574d0 body=52 status=ok
// SIG undefined FUN_1482574d0(void)

undefined8 FUN_1482574d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3);
  return param_2;
}



// FUNCTION 148257504 FUN_148257504 body=206 status=ok
// SIG undefined FUN_148257504(void)

bool FUN_148257504(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar5 = local_38;
  }
  else {
    lVar5 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar4 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar4,local_48,param_2);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
  }
  if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482575d6 FUN_1482575d6 body=29 status=ok
// SIG undefined FUN_1482575d6(void)

undefined8 FUN_1482575d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14825760e FUN_14825760e body=29 status=ok
// SIG undefined FUN_14825760e(void)

bool FUN_14825760e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14825762c FUN_14825762c body=26 status=ok
// SIG undefined FUN_14825762c(void)

bool FUN_14825762c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148257646 FUN_148257646 body=24 status=ok
// SIG undefined FUN_148257646(void)

bool FUN_148257646(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14825765e FUN_14825765e body=101 status=ok
// SIG undefined FUN_14825765e(void)

void FUN_14825765e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6ae90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1482576c4 FUN_1482576c4 body=101 status=ok
// SIG undefined FUN_1482576c4(void)

void FUN_1482576c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6ae90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14825772a FUN_14825772a body=134 status=ok
// SIG undefined FUN_14825772a(void)

void FUN_14825772a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e35290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6ae90;
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
                    /* WARNING: Could not recover jumptable at 0x0001482577a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1482577b0 FUN_1482577b0 body=42 status=ok
// SIG undefined FUN_1482577b0(void)

void FUN_1482577b0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001482577d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1482577da FUN_1482577da body=154 status=ok
// SIG undefined FUN_1482577da(void)

bool FUN_1482577da(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 148257876 FUN_148257876 body=2431 status=ok
// SIG undefined FUN_148257876(void)

void FUN_148257876(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined1 auStack_298 [32];
  undefined1 *local_278;
  undefined1 local_261;
  undefined8 local_260;
  longlong *local_258;
  undefined8 local_248;
  longlong *local_240;
  undefined8 local_238;
  longlong *local_230;
  undefined1 *local_228;
  undefined1 *puStack_220;
  undefined1 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_298;
  FUN_14825844e(param_1 + 0x2a0,param_2 + 0x1a8);
  FUN_140146ccc((longlong *)(param_1 + 0x2b0),param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  if ((*(longlong **)(param_2 + 0x1d8) != (longlong *)0x0 && *(int *)(param_2 + 0x1e0) != 0) &&
     (cVar4 = (**(code **)(**(longlong **)(param_2 + 0x1d8) + 0x30))(), cVar4 != '\0')) {
    if (*(int *)(param_2 + 0x1e0) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_2 + 0x1d8);
    }
    uVar8 = (**(code **)(*plVar6 + 0x58))();
    *(undefined4 *)(param_2 + 0x1d0) = uVar8;
  }
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_2 + 0x1d0);
  if ((*(longlong **)(param_2 + 0x1f0) != (longlong *)0x0 && *(int *)(param_2 + 0x1f8) != 0) &&
     (cVar4 = (**(code **)(**(longlong **)(param_2 + 0x1f0) + 0x30))(), cVar4 != '\0')) {
    if (*(int *)(param_2 + 0x1f8) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_2 + 0x1f0);
    }
    uVar8 = (**(code **)(*plVar6 + 0x58))();
    *(undefined4 *)(param_2 + 0x1e8) = uVar8;
  }
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_2 + 0x1e8);
  if ((*(longlong **)(param_2 + 0x208) != (longlong *)0x0 && *(int *)(param_2 + 0x210) != 0) &&
     (cVar4 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0x30))(), cVar4 != '\0')) {
    if (*(int *)(param_2 + 0x210) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_2 + 0x208);
    }
    uVar8 = (**(code **)(*plVar6 + 0x58))();
    *(undefined4 *)(param_2 + 0x200) = uVar8;
  }
  *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_2 + 0x200);
  if ((*(longlong **)(param_2 + 0x220) != (longlong *)0x0 && *(int *)(param_2 + 0x228) != 0) &&
     (cVar4 = (**(code **)(**(longlong **)(param_2 + 0x220) + 0x30))(), cVar4 != '\0')) {
    if (*(int *)(param_2 + 0x228) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_2 + 0x220);
    }
    uVar8 = (**(code **)(*plVar6 + 0x58))();
    *(undefined4 *)(param_2 + 0x218) = uVar8;
  }
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_2 + 0x218);
  if ((*(longlong **)(param_2 + 0x238) != (longlong *)0x0 && *(int *)(param_2 + 0x240) != 0) &&
     (cVar4 = (**(code **)(**(longlong **)(param_2 + 0x238) + 0x30))(), cVar4 != '\0')) {
    if (*(int *)(param_2 + 0x240) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_2 + 0x238);
    }
    uVar8 = (**(code **)(*plVar6 + 0x58))();
    *(undefined4 *)(param_2 + 0x230) = uVar8;
  }
  *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_2 + 0x230);
  if ((*(longlong **)(param_2 + 0x250) != (longlong *)0x0 && *(int *)(param_2 + 600) != 0) &&
     (cVar4 = (**(code **)(**(longlong **)(param_2 + 0x250) + 0x30))(), cVar4 != '\0')) {
    if (*(int *)(param_2 + 600) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_2 + 0x250);
    }
    uVar8 = (**(code **)(*plVar6 + 0x58))();
    *(undefined4 *)(param_2 + 0x248) = uVar8;
  }
  *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_2 + 0x248);
  plVar5 = (longlong *)FUN_14001cc68(0xd0,0x10);
  FUN_1482581f6(plVar5);
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ae6af00;
  plVar6[2] = (longlong)plVar5;
  if ((plVar5 != (longlong *)0x0) &&
     (((*plVar5 == 0 || (plVar5[1] == 0)) || (*(int *)(plVar5[1] + 8) < 1)))) {
    if (plVar6 == (longlong *)0x0) {
      *plVar5 = (longlong)plVar5;
      plVar7 = (longlong *)plVar5[1];
      if (plVar7 != (longlong *)0x0) {
LAB_148257bb3:
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        plVar5[1] = (longlong)plVar6;
        if (plVar6 != (longlong *)0x0) goto LAB_1482580f9;
      }
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      *plVar5 = (longlong)plVar5;
      if ((longlong *)plVar5[1] != plVar6) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar5[1];
        if (plVar7 != (longlong *)0x0) goto LAB_148257bb3;
        plVar5[1] = (longlong)plVar6;
      }
LAB_1482580f9:
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
    }
  }
  *(longlong **)(param_1 + 0x268) = plVar5;
  plVar5 = *(longlong **)(param_1 + 0x270);
  if (plVar6 == plVar5) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000148257bed:
        if (iVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x270) = plVar6;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar6 = plVar5;
        goto joined_r0x000148257bed;
      }
    }
  }
  plVar5 = (longlong *)FUN_14001cc68(0xd0,0x10);
  FUN_1482581f6(plVar5);
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ae6af00;
  plVar6[2] = (longlong)plVar5;
  if ((plVar5 != (longlong *)0x0) &&
     (((*plVar5 == 0 || (plVar5[1] == 0)) || (*(int *)(plVar5[1] + 8) < 1)))) {
    if (plVar6 == (longlong *)0x0) {
      *plVar5 = (longlong)plVar5;
      plVar7 = (longlong *)plVar5[1];
      if (plVar7 != (longlong *)0x0) {
LAB_148257c9e:
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        plVar5[1] = (longlong)plVar6;
        if (plVar6 != (longlong *)0x0) goto LAB_148258134;
      }
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      *plVar5 = (longlong)plVar5;
      if ((longlong *)plVar5[1] != plVar6) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar5[1];
        if (plVar7 != (longlong *)0x0) goto LAB_148257c9e;
        plVar5[1] = (longlong)plVar6;
      }
LAB_148258134:
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
    }
  }
  *(longlong **)(param_1 + 0x278) = plVar5;
  plVar5 = *(longlong **)(param_1 + 0x280);
  if (plVar6 == plVar5) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000148257cd8:
        if (iVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x280) = plVar6;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar6 = plVar5;
        goto joined_r0x000148257cd8;
      }
    }
  }
  plVar5 = (longlong *)FUN_14001cc68(0xd0,0x10);
  FUN_1482581f6(plVar5);
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14ae6af00;
  plVar6[2] = (longlong)plVar5;
  if ((plVar5 != (longlong *)0x0) &&
     (((*plVar5 == 0 || (plVar5[1] == 0)) || (*(int *)(plVar5[1] + 8) < 1)))) {
    if (plVar6 == (longlong *)0x0) {
      *plVar5 = (longlong)plVar5;
      plVar7 = (longlong *)plVar5[1];
      if (plVar7 != (longlong *)0x0) {
LAB_148257d89:
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        plVar5[1] = (longlong)plVar6;
        if (plVar6 != (longlong *)0x0) goto LAB_14825816b;
      }
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      *plVar5 = (longlong)plVar5;
      if ((longlong *)plVar5[1] != plVar6) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar5[1];
        if (plVar7 != (longlong *)0x0) goto LAB_148257d89;
        plVar5[1] = (longlong)plVar6;
      }
LAB_14825816b:
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
    }
  }
  *(longlong **)(param_1 + 0x288) = plVar5;
  plVar5 = *(longlong **)(param_1 + 0x290);
  if (plVar6 == plVar5) {
    if (plVar6 == (longlong *)0x0) goto LAB_148257dcd;
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_148257dcd;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    *(longlong **)(param_1 + 0x290) = plVar6;
    if (plVar5 == (longlong *)0x0) goto LAB_148257dcd;
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_148257dcd;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar6 = plVar5;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_148257dcd:
  lVar3 = *(longlong *)(param_1 + 0x278);
  *(undefined4 *)(lVar3 + 0x10) = 0x3f800000;
  lVar3 = *(longlong *)(lVar3 + 0x48);
  local_228 = &DAT_3f8000003f800000;
  puStack_220 = &DAT_3f8000003f800000;
  local_218 = 1;
  local_210 = 0;
  uStack_208 = 0;
  FUN_140a5c650(lVar3 + 0x240,lVar3,&local_228);
  FUN_1449db362(&local_210);
  *(undefined4 *)(*(longlong *)(param_1 + 0x278) + 0x14) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x278) + 0x38) = *(undefined4 *)(param_1 + 0x2d4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x278) + 0x44) = *(undefined4 *)(param_1 + 0x2e8);
  lVar3 = *(longlong *)(param_1 + 0x268);
  *(undefined4 *)(lVar3 + 0x10) = 0x3f800000;
  lVar3 = *(longlong *)(lVar3 + 0x48);
  local_228 = &DAT_3f8000003f800000;
  puStack_220 = &DAT_3f8000003f800000;
  local_218 = 1;
  local_210 = 0;
  uStack_208 = 0;
  FUN_140a5c650(lVar3 + 0x240,lVar3,&local_228);
  FUN_1449db362(&local_210);
  *(undefined4 *)(*(longlong *)(param_1 + 0x268) + 0x14) = *(undefined4 *)(param_1 + 0x2d8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x268) + 0x38) = *(undefined4 *)(param_1 + 0x2d4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x268) + 0x44) = *(undefined4 *)(param_1 + 0x2e8);
  lVar3 = *(longlong *)(param_1 + 0x288);
  *(undefined4 *)(lVar3 + 0x10) = 0x3f800000;
  lVar3 = *(longlong *)(lVar3 + 0x48);
  local_228 = &DAT_3f8000003f800000;
  puStack_220 = &DAT_3f8000003f800000;
  local_218 = 1;
  local_210 = 0;
  uStack_208 = 0;
  FUN_140a5c650(lVar3 + 0x240,lVar3,&local_228);
  FUN_1449db362(&local_210);
  *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x14) = *(undefined4 *)(param_1 + 0x2dc);
  *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x38) = *(undefined4 *)(param_1 + 0x2d4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x44) = *(undefined4 *)(param_1 + 0x2e8);
  FUN_140a5296a(&local_228);
  local_278 = &local_261;
  FUN_140a541dc(&local_260,"SHorizontalBox","Runtime\\WidgetCarousel\\Public\\SWidgetCarousel.h",
                0x1eb);
  if (local_258 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_258 + 1) = (int)local_258[1] + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2c0) = local_260;
  *(longlong **)(param_1 + 0x2c8) = local_258;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  FUN_140a50ec6(&local_260,&local_248,&local_228);
  local_238 = local_248;
  local_230 = local_240;
  if (local_240 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_240 + 1) = (int)local_240[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x1e0,&local_238);
  plVar6 = local_230;
  if (local_230 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_230 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_230)(local_230);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_240 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_240 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_240)(local_240);
      LOCK();
      piVar1 = (int *)((longlong)local_240 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_240 + 0x10))(local_240);
      }
    }
  }
  if (local_258 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_258 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_258)(local_258);
      LOCK();
      piVar1 = (int *)((longlong)local_258 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_258 + 0x10))(local_258);
      }
    }
  }
  FUN_145ab33da(&local_228);
  FUN_14823a90e(param_1);
  if ((*(int *)(param_1 + 0x2b8) != 0) &&
     (plVar6 = *(longlong **)(param_1 + 0x2b0), plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x60))(plVar6,*(undefined4 *)(param_1 + 0x2d0));
  }
  if ((local_70 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482581f6 FUN_1482581f6 body=598 status=ok
// SIG undefined FUN_1482581f6(void)

undefined8 * FUN_1482581f6(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_338 [32];
  undefined1 *local_318;
  undefined1 local_301;
  undefined1 local_300 [8];
  longlong *local_2f8;
  undefined2 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  longlong *local_2c8;
  undefined1 local_2c0 [552];
  undefined2 local_98;
  undefined1 local_90 [80];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_338;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f800000bf800000;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x3d4ccccdbd4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x33) = 0;
  *(undefined4 *)(param_1 + 7) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 8) = 0x3d4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x40000000;
  puVar1 = param_1 + 0xb;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_14285ff5a(puVar1);
  *(undefined1 *)(param_1 + 0x19) = DAT_14c96b238;
  FUN_148219a90(local_2c0);
  local_2e8 = 0x100;
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_98 = 0x100;
  FUN_144a450dc(local_90,&local_2e0);
  FUN_1449db362(&local_2e0);
  local_318 = &local_301;
  FUN_14821a2da(local_300,"SFxWidget","Runtime\\WidgetCarousel\\Public\\SWidgetCarousel.h",0x3c);
  FUN_148219b6e(local_300,&local_2d0,local_2c0);
  plVar2 = local_2c8;
  if (local_2c8 == (longlong *)0x0) {
    param_1[9] = local_2d0;
    plVar5 = (longlong *)param_1[10];
    if (plVar5 == (longlong *)0x0) goto LAB_148258309;
    param_1[10] = 0;
LAB_148258414:
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_148258309;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar3 = (int *)((longlong)plVar5 + 0xc);
    *piVar3 = *piVar3 + -1;
    iVar4 = *piVar3;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_2c8 + 1) = (int)local_2c8[1] + 1;
    UNLOCK();
    param_1[9] = local_2d0;
    plVar5 = (longlong *)param_1[10];
    if (local_2c8 != plVar5) {
      param_1[10] = local_2c8;
      if (plVar5 == (longlong *)0x0) goto LAB_148258309;
      goto LAB_148258414;
    }
    LOCK();
    plVar5 = local_2c8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_148258309;
    (**(code **)*local_2c8)(local_2c8);
    LOCK();
    piVar3 = (int *)((longlong)plVar2 + 0xc);
    *piVar3 = *piVar3 + -1;
    iVar4 = *piVar3;
    UNLOCK();
    plVar5 = plVar2;
  }
  if (iVar4 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_148258309:
  if (local_2c8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2c8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_2c8)(local_2c8);
      LOCK();
      piVar3 = (int *)((longlong)local_2c8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_2c8 + 0x10))(local_2c8);
      }
    }
  }
  if (local_2f8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2f8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_2f8)(local_2f8);
      LOCK();
      piVar3 = (int *)((longlong)local_2f8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_2f8 + 0x10))(local_2f8);
      }
    }
  }
  FUN_148219be2(local_2c0);
  FUN_14285ff5a(local_2c0);
  FUN_146980d02(puVar1,local_2c0);
  FUN_1402bc42a(local_2c0);
  local_318 = (undefined1 *)((ulonglong)local_318 & 0xffffffffffffff00);
  FUN_14692f186(puVar1,local_2c0,0x3dcccccd,0x3f000000);
  if ((local_40 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825844e FUN_14825844e body=130 status=ok
// SIG undefined FUN_14825844e(void)

void FUN_14825844e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482584d2 FUN_1482584d2 body=41 status=ok
// SIG undefined FUN_1482584d2(void)

void FUN_1482584d2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_14825851a(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 1482584fc FUN_1482584fc body=29 status=ok
// SIG undefined FUN_1482584fc(void)

undefined8 FUN_1482584fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14825851a FUN_14825851a body=92 status=ok
// SIG undefined FUN_14825851a(void)

void FUN_14825851a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1402bc42a(param_1 + 0x58);
  plVar3 = *(longlong **)(param_1 + 0x50);
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
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014825856a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148258576 FUN_148258576 body=128 status=ok
// SIG undefined FUN_148258576(void)

void FUN_148258576(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = *param_1;
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 0x10;
    } while (lVar5 << 4 != uVar4);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1469e5f1c(param_1,iVar1);
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + lVar5 * 0x10) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(lVar3 + 8 + lVar5 * 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1482585f6 FUN_1482585f6 body=132 status=ok
// SIG undefined FUN_1482585f6(void)

void FUN_1482585f6(longlong param_1,int param_2)

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



// FUNCTION 14825867c FUN_14825867c body=132 status=ok
// SIG undefined FUN_14825867c(void)

void FUN_14825867c(longlong param_1,int param_2)

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



// FUNCTION 148258702 FUN_148258702 body=118 status=ok
// SIG undefined FUN_148258702(void)

ulonglong FUN_148258702(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825877a FUN_14825877a body=62 status=ok
// SIG undefined FUN_14825877a(void)

void FUN_14825877a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1482587b8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 1482587b8 FUN_1482587b8 body=93 status=ok
// SIG undefined FUN_1482587b8(void)

ulonglong FUN_1482587b8(uint param_1,uint param_2)

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



// FUNCTION 148258816 FUN_148258816 body=175 status=ok
// SIG undefined FUN_148258816(void)

void FUN_148258816(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_14825889f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14825889f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1482588c6 FUN_1482588c6 body=229 status=ok
// SIG undefined FUN_1482588c6(void)

longlong * FUN_1482588c6(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1405535de(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar4 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          *(undefined8 *)(lVar4 + 8 + lVar5) = *(undefined8 *)(lVar2 + 8 + lVar5);
          lVar3 = *(longlong *)(lVar2 + 0x10 + lVar5);
          *(longlong *)(lVar4 + 0x10 + lVar5) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar4 + 0x18 + lVar5) = *(undefined8 *)(lVar2 + 0x18 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x20;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 1482589ac FUN_1482589ac body=386 status=ok
// SIG undefined FUN_1482589ac(void)

longlong * FUN_1482589ac(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148258abd:
    *puVar5 = &PTR_LAB_14ae6bc70;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14ae6b160;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148258abd;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14ae6bc70;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14ae6b160;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 148258b2e FUN_148258b2e body=64 status=ok
// SIG undefined FUN_148258b2e(void)

undefined8 * FUN_148258b2e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ae6b160;
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



// FUNCTION 148258b72 FUN_148258b72 body=81 status=ok
// SIG undefined FUN_148258b72(void)

undefined8 FUN_148258b72(longlong param_1)

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



// FUNCTION 148258bca FUN_148258bca body=89 status=ok
// SIG undefined FUN_148258bca(void)

bool FUN_148258bca(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148258c15;
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
LAB_148258c15:
  return lVar6 == param_2;
}



// FUNCTION 148258c40 FUN_148258c40 body=118 status=ok
// SIG undefined FUN_148258c40(void)

void FUN_148258c40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6bc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6b160;
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



// FUNCTION 148258cb6 FUN_148258cb6 body=118 status=ok
// SIG undefined FUN_148258cb6(void)

void FUN_148258cb6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6bc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6b160;
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



// FUNCTION 148258d2c FUN_148258d2c body=156 status=ok
// SIG undefined FUN_148258d2c(void)

void FUN_148258d2c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ae6bc70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6b160;
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
                    /* WARNING: Could not recover jumptable at 0x000148258db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148258dc8 FUN_148258dc8 body=104 status=ok
// SIG undefined FUN_148258dc8(void)

void FUN_148258dc8(longlong param_1)

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
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148258e15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148258e26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148258e30 FUN_148258e30 body=101 status=ok
// SIG undefined FUN_148258e30(void)

ulonglong FUN_148258e30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148258e8a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148258e8a;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 148258e95 FUN_148258e95 body=73 status=ok
// SIG undefined FUN_148258e95(void)

void FUN_148258e95(longlong param_1,int param_2)

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



// FUNCTION 148258ede FUN_148258ede body=29 status=ok
// SIG undefined FUN_148258ede(void)

undefined8 FUN_148258ede(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148258f16 FUN_148258f16 body=29 status=ok
// SIG undefined FUN_148258f16(void)

bool FUN_148258f16(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148258f34 FUN_148258f34 body=26 status=ok
// SIG undefined FUN_148258f34(void)

bool FUN_148258f34(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148258f4e FUN_148258f4e body=24 status=ok
// SIG undefined FUN_148258f4e(void)

bool FUN_148258f4e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148258f66 FUN_148258f66 body=101 status=ok
// SIG undefined FUN_148258f66(void)

void FUN_148258f66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6b1d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148258fcc FUN_148258fcc body=101 status=ok
// SIG undefined FUN_148258fcc(void)

void FUN_148258fcc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6b1d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148259032 FUN_148259032 body=134 status=ok
// SIG undefined FUN_148259032(void)

void FUN_148259032(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e35290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6b1d0;
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
                    /* WARNING: Could not recover jumptable at 0x0001482590a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1482590b8 FUN_1482590b8 body=42 status=ok
// SIG undefined FUN_1482590b8(void)

void FUN_1482590b8(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001482590df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1482590e2 FUN_1482590e2 body=154 status=ok
// SIG undefined FUN_1482590e2(void)

bool FUN_1482590e2(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 14825917e FUN_14825917e body=29 status=ok
// SIG undefined FUN_14825917e(void)

undefined8 FUN_14825917e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482591b6 FUN_1482591b6 body=29 status=ok
// SIG undefined FUN_1482591b6(void)

bool FUN_1482591b6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1482591d4 FUN_1482591d4 body=26 status=ok
// SIG undefined FUN_1482591d4(void)

bool FUN_1482591d4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1482591ee FUN_1482591ee body=24 status=ok
// SIG undefined FUN_1482591ee(void)

bool FUN_1482591ee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148259206 FUN_148259206 body=101 status=ok
// SIG undefined FUN_148259206(void)

void FUN_148259206(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a83c0e0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ae6b240;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14825926c FUN_14825926c body=101 status=ok
// SIG undefined FUN_14825926c(void)

void FUN_14825926c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a83c0e0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ae6b240;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1482592d2 FUN_1482592d2 body=134 status=ok
// SIG undefined FUN_1482592d2(void)

void FUN_1482592d2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a83c0e0;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6b240;
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
                    /* WARNING: Could not recover jumptable at 0x000148259349. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148259358 FUN_148259358 body=39 status=ok
// SIG undefined FUN_148259358(void)

void FUN_148259358(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014825937c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,*(undefined1 *)(param_1 + 8),
             *(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148259380 FUN_148259380 body=149 status=ok
// SIG undefined FUN_148259380(void)

bool FUN_148259380(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,*(undefined1 *)(param_1 + 8));
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



// FUNCTION 148259416 FUN_148259416 body=29 status=ok
// SIG undefined FUN_148259416(void)

undefined8 FUN_148259416(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14825944e FUN_14825944e body=29 status=ok
// SIG undefined FUN_14825944e(void)

bool FUN_14825944e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14825946c FUN_14825946c body=26 status=ok
// SIG undefined FUN_14825946c(void)

bool FUN_14825946c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148259486 FUN_148259486 body=24 status=ok
// SIG undefined FUN_148259486(void)

bool FUN_148259486(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14825949e FUN_14825949e body=101 status=ok
// SIG undefined FUN_14825949e(void)

void FUN_14825949e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6bc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6b2b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148259504 FUN_148259504 body=101 status=ok
// SIG undefined FUN_148259504(void)

void FUN_148259504(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6bc70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6b2b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14825956a FUN_14825956a body=134 status=ok
// SIG undefined FUN_14825956a(void)

void FUN_14825956a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ae6bc70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6b2b0;
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
                    /* WARNING: Could not recover jumptable at 0x0001482595e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1482595f0 FUN_1482595f0 body=42 status=ok
// SIG undefined FUN_1482595f0(void)

void FUN_1482595f0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148259617. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 14825961a FUN_14825961a body=154 status=ok
// SIG undefined FUN_14825961a(void)

bool FUN_14825961a(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 1482596b6 FUN_1482596b6 body=29 status=ok
// SIG undefined FUN_1482596b6(void)

undefined8 FUN_1482596b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482596ee FUN_1482596ee body=29 status=ok
// SIG undefined FUN_1482596ee(void)

bool FUN_1482596ee(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14825970c FUN_14825970c body=26 status=ok
// SIG undefined FUN_14825970c(void)

bool FUN_14825970c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148259726 FUN_148259726 body=24 status=ok
// SIG undefined FUN_148259726(void)

bool FUN_148259726(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14825973e FUN_14825973e body=101 status=ok
// SIG undefined FUN_14825973e(void)

void FUN_14825973e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6b320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1482597a4 FUN_1482597a4 body=101 status=ok
// SIG undefined FUN_1482597a4(void)

void FUN_1482597a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6b320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14825980a FUN_14825980a body=134 status=ok
// SIG undefined FUN_14825980a(void)

void FUN_14825980a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6b320;
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
                    /* WARNING: Could not recover jumptable at 0x000148259881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148259890 FUN_148259890 body=52 status=ok
// SIG undefined FUN_148259890(void)

void FUN_148259890(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001482598c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return;
}



// FUNCTION 1482598c4 FUN_1482598c4 body=162 status=ok
// SIG undefined FUN_1482598c4(void)

bool FUN_1482598c4(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 148259968 FUN_148259968 body=500 status=ok
// SIG undefined FUN_148259968(void)

longlong FUN_148259968(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  wchar_t *_Str1;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar7 = *(uint *)(param_1 + 1);
  local_70 = param_2;
  if ((int)uVar7 < 1) {
    uVar8 = 0;
  }
  else {
    lVar2 = *param_1;
    uVar8 = 0;
    local_68 = param_3;
    local_60 = param_1;
    do {
      uVar1 = (uVar7 >> 1) + uVar8;
      lVar9 = (ulonglong)uVar1 * 0x30;
      FUN_140056680(&local_58,local_70);
      pwVar6 = local_58;
      pwVar5 = local_58;
      if (local_50 == 0) {
        pwVar5 = L"";
      }
      _Str1 = L"";
      if (*(int *)(lVar2 + 8 + lVar9) != 0) {
        _Str1 = *(wchar_t **)(lVar2 + lVar9);
      }
      iVar4 = wcscmp(_Str1,pwVar5);
      if (iVar4 < 0) {
        uVar8 = uVar1 + (uVar7 & 1);
      }
      if (pwVar6 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar6);
      }
      param_1 = local_60;
      bVar3 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar3);
    uVar7 = *(uint *)(local_60 + 1);
    param_3 = local_68;
    if ((int)uVar8 < (int)uVar7) {
      lVar2 = *local_60;
      lVar9 = (ulonglong)uVar8 * 0x30;
      FUN_140056680(&local_58,local_70);
      pwVar6 = L"";
      if (*(int *)(lVar2 + 8 + lVar9) != 0) {
        pwVar6 = *(wchar_t **)(lVar2 + lVar9);
      }
      pwVar5 = L"";
      if (local_50 != 0) {
        pwVar5 = local_58;
      }
      iVar4 = wcscmp(pwVar5,pwVar6);
      param_3 = local_68;
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8(local_58);
      }
      if (-1 < iVar4) {
        lVar9 = lVar9 + *param_1;
        FUN_14010f8af(lVar9,1);
        goto LAB_148259af6;
      }
      uVar7 = *(uint *)(param_1 + 1);
    }
  }
  *(uint *)(param_1 + 1) = uVar7 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar7) {
    FUN_140234572(param_1,uVar7);
  }
  lVar9 = (ulonglong)uVar8 * 0x30;
  memmove((void *)(*param_1 + lVar9 + 0x30),(void *)(*param_1 + lVar9),
          (ulonglong)(uVar7 - uVar8) * 0x30);
  lVar9 = lVar9 + *param_1;
LAB_148259af6:
  FUN_140056680(lVar9,local_70);
  *(undefined4 *)(lVar9 + 0x10) = 4;
  FUN_14023423e(lVar9 + 0x20,param_3);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar9 + 0x10;
}



// FUNCTION 148259b5e FUN_148259b5e body=495 status=ok
// SIG undefined FUN_148259b5e(void)

void FUN_148259b5e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  wchar_t *_Str1;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar10 = *(uint *)(param_1 + 1);
  if ((int)uVar10 < 1) {
    uVar9 = 0;
  }
  else {
    lVar2 = *param_1;
    uVar9 = 0;
    local_68 = param_2;
    local_60 = param_1;
    do {
      uVar1 = (uVar10 >> 1) + uVar9;
      lVar8 = (ulonglong)uVar1 * 0x30;
      FUN_140056680(&local_58,L"ActionName");
      pwVar7 = local_58;
      pwVar6 = local_58;
      if (local_50 == 0) {
        pwVar6 = L"";
      }
      _Str1 = L"";
      if (*(int *)(lVar2 + 8 + lVar8) != 0) {
        _Str1 = *(wchar_t **)(lVar2 + lVar8);
      }
      iVar5 = wcscmp(_Str1,pwVar6);
      if (iVar5 < 0) {
        uVar9 = uVar1 + (uVar10 & 1);
      }
      if (pwVar7 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar7);
      }
      param_1 = local_60;
      bVar4 = 1 < uVar10;
      uVar10 = uVar10 >> 1;
    } while (bVar4);
    uVar10 = *(uint *)(local_60 + 1);
    param_2 = local_68;
    if ((int)uVar9 < (int)uVar10) {
      lVar2 = *local_60;
      lVar8 = (ulonglong)uVar9 * 0x30;
      FUN_140056680(&local_58,L"ActionName");
      pwVar7 = L"";
      if (*(int *)(lVar2 + 8 + lVar8) != 0) {
        pwVar7 = *(wchar_t **)(lVar2 + lVar8);
      }
      pwVar6 = L"";
      if (local_50 != 0) {
        pwVar6 = local_58;
      }
      iVar5 = wcscmp(pwVar6,pwVar7);
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8(local_58);
      }
      if (-1 < iVar5) {
        lVar8 = lVar8 + *param_1;
        FUN_14010f8af(lVar8,1);
        param_2 = local_68;
        goto LAB_148259cf8;
      }
      uVar10 = *(uint *)(param_1 + 1);
      param_2 = local_68;
    }
  }
  *(uint *)(param_1 + 1) = uVar10 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar10) {
    FUN_140234572(param_1,uVar10);
  }
  lVar8 = (ulonglong)uVar9 * 0x30;
  memmove((void *)(*param_1 + lVar8 + 0x30),(void *)(*param_1 + lVar8),
          (ulonglong)(uVar10 - uVar9) * 0x30);
  lVar8 = lVar8 + *param_1;
LAB_148259cf8:
  FUN_140056680(lVar8,L"ActionName");
  *(undefined4 *)(lVar8 + 0x10) = 4;
  plVar3 = (longlong *)*param_2;
  *(longlong **)(lVar8 + 0x20) = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(int *)(lVar8 + 0x28) = (int)param_2[1];
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148259d52 FUN_148259d52 body=218 status=ok
// SIG undefined FUN_148259d52(void)

LPCRITICAL_SECTION FUN_148259d52(LPCRITICAL_SECTION param_1,undefined8 param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ae6ba10;
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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6b3e0;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  FUN_14485c47a(&(p_Var1->ProcessLocksList).Blink,param_2);
  *(code **)&p_Var1->EntryCount = FUN_14823fc52;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 148259e2c FUN_148259e2c body=29 status=ok
// SIG undefined FUN_148259e2c(void)

undefined8 FUN_148259e2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148259e64 FUN_148259e64 body=29 status=ok
// SIG undefined FUN_148259e64(void)

bool FUN_148259e64(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148259e82 FUN_148259e82 body=26 status=ok
// SIG undefined FUN_148259e82(void)

bool FUN_148259e82(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148259e9c FUN_148259e9c body=24 status=ok
// SIG undefined FUN_148259e9c(void)

bool FUN_148259e9c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148259eb4 FUN_148259eb4 body=93 status=ok
// SIG undefined FUN_148259eb4(void)

void FUN_148259eb4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6ba10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6b3e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148259f12 FUN_148259f12 body=93 status=ok
// SIG undefined FUN_148259f12(void)

void FUN_148259f12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6ba10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6b3e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148259f70 FUN_148259f70 body=126 status=ok
// SIG undefined FUN_148259f70(void)

void FUN_148259f70(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ae6ba10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6b3e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148259fdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148259fee FUN_148259fee body=58 status=ok
// SIG undefined FUN_148259fee(void)

void FUN_148259fee(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014825a025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14825a028 FUN_14825a028 body=199 status=ok
// SIG undefined FUN_14825a028(void)

bool FUN_14825a028(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_50 = param_6;
    local_58 = param_5;
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825a0f2 FUN_14825a0f2 body=29 status=ok
// SIG undefined FUN_14825a0f2(void)

undefined8 FUN_14825a0f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14825a12a FUN_14825a12a body=29 status=ok
// SIG undefined FUN_14825a12a(void)

bool FUN_14825a12a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14825a148 FUN_14825a148 body=26 status=ok
// SIG undefined FUN_14825a148(void)

bool FUN_14825a148(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14825a162 FUN_14825a162 body=24 status=ok
// SIG undefined FUN_14825a162(void)

bool FUN_14825a162(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14825a17a FUN_14825a17a body=93 status=ok
// SIG undefined FUN_14825a17a(void)

void FUN_14825a17a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6b450;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14825a1d8 FUN_14825a1d8 body=93 status=ok
// SIG undefined FUN_14825a1d8(void)

void FUN_14825a1d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6b450;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14825a236 FUN_14825a236 body=126 status=ok
// SIG undefined FUN_14825a236(void)

void FUN_14825a236(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ae6b4c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6b450;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014825a2a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14825a2b4 FUN_14825a2b4 body=40 status=ok
// SIG undefined FUN_14825a2b4(void)

void FUN_14825a2b4(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014825a2d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14825a2dc FUN_14825a2dc body=152 status=ok
// SIG undefined FUN_14825a2dc(void)

bool FUN_14825a2dc(longlong param_1,undefined8 param_2)

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



// FUNCTION 14825a378 FUN_14825a378 body=243 status=ok
// SIG undefined FUN_14825a378(void)

undefined8 * FUN_14825a378(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_2 != (longlong *)0x0 && (int)param_2[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14cb44c80,CONCAT71(uVar5,1));
      plVar1 = (longlong *)*param_2;
      if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
        local_28 = 0;
      }
      else {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
      }
      *param_1 = local_28;
      uVar3 = DAT_14cb44c88;
      lVar6 = (longlong)(int)DAT_14cb44c88;
      DAT_14cb44c88 = DAT_14cb44c88 + 1;
      if (DAT_14cb44c8c < DAT_14cb44c88) {
        FUN_1447a71f6(&DAT_14cb44c80,uVar3);
      }
      lVar2 = DAT_14cb44c80;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cb44c80 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14825a46c FUN_14825a46c body=29 status=ok
// SIG undefined FUN_14825a46c(void)

undefined8 FUN_14825a46c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14825a4a4 FUN_14825a4a4 body=29 status=ok
// SIG undefined FUN_14825a4a4(void)

bool FUN_14825a4a4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14825a4c2 FUN_14825a4c2 body=26 status=ok
// SIG undefined FUN_14825a4c2(void)

bool FUN_14825a4c2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14825a4dc FUN_14825a4dc body=24 status=ok
// SIG undefined FUN_14825a4dc(void)

bool FUN_14825a4dc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14825a500 FUN_14825a500 body=93 status=ok
// SIG undefined FUN_14825a500(void)

void FUN_14825a500(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6b5a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6b530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14825a55e FUN_14825a55e body=93 status=ok
// SIG undefined FUN_14825a55e(void)

void FUN_14825a55e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6b5a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6b530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14825a5bc FUN_14825a5bc body=126 status=ok
// SIG undefined FUN_14825a5bc(void)

void FUN_14825a5bc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ae6b5a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6b530;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014825a62b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14825a63a FUN_14825a63a body=40 status=ok
// SIG undefined FUN_14825a63a(void)

void FUN_14825a63a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014825a65f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14825a662 FUN_14825a662 body=152 status=ok
// SIG undefined FUN_14825a662(void)

bool FUN_14825a662(longlong param_1,undefined8 param_2)

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



// FUNCTION 14825a6fe FUN_14825a6fe body=29 status=ok
// SIG undefined FUN_14825a6fe(void)

undefined8 FUN_14825a6fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14825a736 FUN_14825a736 body=29 status=ok
// SIG undefined FUN_14825a736(void)

bool FUN_14825a736(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14825a754 FUN_14825a754 body=26 status=ok
// SIG undefined FUN_14825a754(void)

bool FUN_14825a754(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14825a76e FUN_14825a76e body=24 status=ok
// SIG undefined FUN_14825a76e(void)

bool FUN_14825a76e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14825a786 FUN_14825a786 body=93 status=ok
// SIG undefined FUN_14825a786(void)

void FUN_14825a786(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae6b610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}


