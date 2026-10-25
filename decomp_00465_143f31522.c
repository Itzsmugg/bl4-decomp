// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143f31522 FUN_143f31522 body=20 status=ok
// SIG undefined FUN_143f31522(void)

undefined1 FUN_143f31522(longlong param_1)

{
  FUN_145a0590e(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143f31536 FUN_143f31536 body=29 status=ok
// SIG undefined FUN_143f31536(void)

undefined8 FUN_143f31536(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f31568 FUN_143f31568 body=93 status=ok
// SIG undefined FUN_143f31568(void)

void FUN_143f31568(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e8e10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4eb1c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f315c6 FUN_143f315c6 body=93 status=ok
// SIG undefined FUN_143f315c6(void)

void FUN_143f315c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e8e10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4eb1c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f31624 FUN_143f31624 body=126 status=ok
// SIG undefined FUN_143f31624(void)

void FUN_143f31624(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e8e10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4eb1c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f31693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f316c8 FUN_143f316c8 body=47 status=ok
// SIG undefined FUN_143f316c8(void)

undefined1 FUN_143f316c8(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    *(undefined1 *)(lVar1 + 0x18) = 0;
    if (*(int *)(lVar1 + 0x110) == 0) {
      *(undefined4 *)(lVar1 + 0x110) = 1;
      FUN_1415a26e8();
    }
  }
  return 1;
}



// FUNCTION 143f31744 FUN_143f31744 body=117 status=ok
// SIG undefined FUN_143f31744(void)

void FUN_143f31744(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4e81b0;
  *(undefined ***)(param_1 + 0x30) = &PTR_LAB_14b4e81d8;
  plVar1 = (longlong *)(param_1 + 0x58);
  if (*(int *)(param_1 + 0x60) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f317a3;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143f317a3:
  FUN_1457f3dec(param_1 + 0x10);
  return;
}



// FUNCTION 143f317ba FUN_143f317ba body=29 status=ok
// SIG undefined FUN_143f317ba(void)

undefined8 FUN_143f317ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f31824 FUN_143f31824 body=29 status=ok
// SIG undefined FUN_143f31824(void)

undefined8 FUN_143f31824(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f319c0 FUN_143f319c0 body=93 status=ok
// SIG undefined FUN_143f319c0(void)

void FUN_143f319c0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4eb850;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f31a1e FUN_143f31a1e body=93 status=ok
// SIG undefined FUN_143f31a1e(void)

void FUN_143f31a1e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4eb850;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f31a7c FUN_143f31a7c body=126 status=ok
// SIG undefined FUN_143f31a7c(void)

void FUN_143f31a7c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4eb850;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f31aeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f31b04 FUN_143f31b04 body=269 status=ok
// SIG undefined FUN_143f31b04(void)

undefined8 FUN_143f31b04(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143f31c0b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143f31c0b;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143f31c0b:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143f31bbf;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143f31c12(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143f31bbf;
    }
  }
  uVar6 = 0;
LAB_143f31bbf:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f31c12 FUN_143f31c12 body=377 status=ok
// SIG undefined FUN_143f31c12(void)

void FUN_143f31c12(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  
  lVar3 = *param_1;
  iVar2 = *(int *)(lVar3 + 0x1f8);
  if (iVar2 == 0) {
    uVar14 = 1;
    uVar10 = 0;
    iVar11 = 0;
    iVar4 = 0;
  }
  else {
    puVar8 = *(uint **)(lVar3 + 0x1f0);
    if (*(uint **)(lVar3 + 0x1f0) == (uint *)0x0) {
      puVar8 = (uint *)(lVar3 + 0x1e0);
    }
    uVar13 = *puVar8;
    if (uVar13 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar10 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar10;
      }
      iVar11 = 0;
      do {
        if (uVar14 == uVar10) {
          return;
        }
        iVar11 = iVar11 + 0x20;
        uVar13 = puVar8[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar10 = 0;
      iVar11 = 0;
    }
    uVar14 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar4 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      FUN_146068fdc(lVar3,*(undefined4 *)(*(longlong *)(lVar3 + 0x1d0) + (longlong)iVar4 * 0x20));
      uVar13 = ~(uint)uVar14 & uVar13;
      puVar8 = *(uint **)(lVar3 + 0x1f0);
      if (*(uint **)(lVar3 + 0x1f0) == (uint *)0x0) {
        puVar8 = (uint *)(lVar3 + 0x1e0);
      }
      iVar2 = *(int *)(lVar3 + 0x1f8);
      iVar4 = (int)uVar10;
      lVar12 = (longlong)iVar4;
      uVar5 = puVar8[lVar12] & uVar13;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) {
          return;
        }
        lVar9 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar5 = puVar8[lVar12 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar12 == lVar9) {
            return;
          }
        }
        uVar10 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar4 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar2);
  }
  return;
}



// FUNCTION 143f31d8c FUN_143f31d8c body=29 status=ok
// SIG undefined FUN_143f31d8c(void)

undefined8 FUN_143f31d8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f31dbe FUN_143f31dbe body=93 status=ok
// SIG undefined FUN_143f31dbe(void)

void FUN_143f31dbe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edcd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4eb8c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f31e1c FUN_143f31e1c body=93 status=ok
// SIG undefined FUN_143f31e1c(void)

void FUN_143f31e1c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edcd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4eb8c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f31e7a FUN_143f31e7a body=126 status=ok
// SIG undefined FUN_143f31e7a(void)

void FUN_143f31e7a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edcd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4eb8c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f31ee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f31f0a FUN_143f31f0a body=30 status=ok
// SIG undefined FUN_143f31f0a(void)

undefined1 FUN_143f31f0a(longlong param_1,int param_2,undefined4 param_3)

{
  if (param_2 < 0x18) {
    FUN_148a7dbb6(*(undefined8 *)(param_1 + 0x18),param_3);
  }
  return 1;
}



// FUNCTION 143f31f28 FUN_143f31f28 body=1571 status=ok
// SIG undefined FUN_143f31f28(void)

ulonglong FUN_143f31f28(longlong *param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_d8 [32];
  LARGE_INTEGER local_b8;
  undefined8 uStack_b0;
  LARGE_INTEGER local_a8;
  undefined8 local_a0;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = *param_1;
  uVar8 = FUN_140635a7c();
  plVar14 = (longlong *)(ulonglong)uVar8;
  uVar13 = *(uint *)(lVar3 + 0x50);
  if (*(uint *)(lVar3 + 0x50) < uVar8) {
    uVar13 = uVar8;
  }
  *(uint *)(lVar3 + 0x50) = uVar13;
  QueryPerformanceCounter(&local_a8);
  dVar4 = ((double)local_a8.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(lVar3 + 0x60);
  fVar20 = (float)FUN_14350c05a(0);
  bVar7 = FUN_14350bf76(0);
  iVar9 = FUN_1415b1ce8(lVar3);
  if ((iVar9 == 0x17) || ((bVar7 & (dVar4 < (double)fVar20 || fVar20 <= 0.0)) == 0)) {
    FUN_140635c46(0);
    *(undefined1 *)(lVar3 + 0x70) = 1;
    FUN_148a7e240(lVar3);
    *(undefined4 *)(lVar3 + 0x88) = 0;
    if (*(int *)(lVar3 + 0x8c) != 0) {
      FUN_14482f6fa(lVar3 + 0x80,0);
    }
    *(undefined4 *)(lVar3 + 0x98) = 0;
    if (*(int *)(lVar3 + 0x9c) == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      FUN_140cb0586(lVar3 + 0x90,0);
    }
  }
  else if (uVar8 == 0) {
    *(undefined4 *)(lVar3 + 0x88) = 0;
    if (*(int *)(lVar3 + 0x8c) != 0) {
      FUN_14482f6fa(lVar3 + 0x80,0);
    }
    *(undefined4 *)(lVar3 + 0x98) = 0;
    if (*(int *)(lVar3 + 0x9c) != 0) {
      FUN_140cb0586(lVar3 + 0x90,0);
    }
    uVar15 = 0;
    FUN_140635c46(0);
    *(undefined1 *)(lVar3 + 0x70) = 1;
    FUN_148a7e240(lVar3);
  }
  else {
    fVar21 = (float)(longlong)plVar14;
    fVar20 = fVar21 / (float)*(uint *)(lVar3 + 0x50);
    if (1.0 <= fVar20) {
      fVar20 = 1.0;
    }
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    uVar13 = (uint)((1.0 - fVar20) * 100.0);
    if (uVar13 != *(uint *)(lVar3 + 0x58)) {
      *(uint *)(lVar3 + 0x58) = uVar13;
      local_b8.QuadPart = 0;
      uStack_b0 = 0;
      lVar12 = 0xf;
      lVar11 = 0x1000000000;
      iVar9 = 0x10;
      uVar18 = uVar13;
      do {
        lVar11 = lVar11 + -0x100000000;
        *(undefined2 *)((longlong)&local_a8 + lVar12 * 2) =
             *(undefined2 *)(&DAT_149e01586 + (longlong)((int)uVar18 % 10) * 2);
        uVar19 = uVar18 + 9;
        lVar12 = lVar12 + -1;
        iVar9 = iVar9 + -1;
        uVar18 = (int)uVar18 / 10;
      } while (0x12 < uVar19);
      if ((int)uVar13 < 0) {
        iVar9 = (int)lVar12;
        lVar11 = (longlong)iVar9;
        *(undefined2 *)((longlong)&local_a8 + lVar11 * 2) = 0x2d;
      }
      else {
        lVar11 = lVar11 >> 0x20;
      }
      FUN_1400020e8(&local_b8,(longlong)&local_a8 + lVar11 * 2,0x10 - iVar9);
      FUN_140056680(&local_a8,L"TitleActivateCompilingShadersText");
      (**(code **)(**(longlong **)(lVar3 + 0x38) + 0x338))(*(longlong **)(lVar3 + 0x38),&local_a8);
      if (local_a8.QuadPart != 0) {
        FUN_1400020a8();
      }
      if (local_b8.QuadPart != 0) {
        FUN_1400020a8();
      }
      dVar5 = dVar4;
      if (1 < (int)uVar13) {
        QueryPerformanceCounter(&local_a8);
        dVar5 = ((double)local_a8.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(lVar3 + 0x68)
        ;
      }
      QueryPerformanceCounter(&local_a8);
      *(double *)(lVar3 + 0x68) = (double)local_a8.QuadPart * DAT_14c83f420 + 16777216.0;
      iVar10 = *(int *)(lVar3 + 0x50) - uVar8;
      iVar9 = *(int *)(lVar3 + 0x54);
      *(int *)(lVar3 + 0x54) = iVar10;
      iVar17 = *(int *)(lVar3 + 0x88);
      plVar14 = (longlong *)(longlong)iVar17;
      *(uint *)(lVar3 + 0x88) = iVar17 + 1U;
      if (*(uint *)(lVar3 + 0x8c) < iVar17 + 1U) {
        FUN_14475e4ac(lVar3 + 0x80,iVar17);
      }
      *(float *)(*(longlong *)(lVar3 + 0x80) + (longlong)plVar14 * 4) =
           (float)((double)(iVar10 - iVar9) / dVar5);
      iVar9 = *(int *)(lVar3 + 0x88);
      lVar11 = (longlong)iVar9;
      if (lVar11 == 0) {
        fVar20 = 0.0;
      }
      else {
        lVar12 = lVar11 * 4;
        fVar20 = 0.0;
        lVar16 = 0;
        fVar6 = 0.0;
        iVar17 = 0;
        do {
          fVar1 = *(float *)(*(longlong *)(lVar3 + 0x80) + lVar16 * 4);
          if ((uint)lVar16 < 10) {
            if (fVar20 <= fVar1) {
              fVar20 = fVar1;
            }
          }
          else {
            fVar6 = fVar6 + fVar1;
            iVar17 = iVar17 + 1;
          }
          lVar16 = lVar16 + 1;
          lVar12 = lVar12 + -4;
        } while (lVar12 != 0);
        if (0x13 < iVar9) {
          fVar1 = 0.0;
          iVar10 = 0;
          lVar12 = 10;
          do {
            fVar2 = *(float *)(*(longlong *)(lVar3 + 0x80) + lVar12 * 4);
            uVar8 = (uint)(fVar2 < fVar20 * 3.0 && fVar20 / 1.5 < fVar2);
            if ((-uVar8 & 1) != 0) {
              fVar1 = fVar1 + fVar2;
            }
            iVar10 = iVar10 + uVar8;
            lVar12 = lVar12 + 1;
          } while (lVar11 != lVar12);
          if (iVar10 == 0) {
            fVar6 = fVar6 / (float)iVar17;
          }
          else {
            fVar6 = fVar1 / (float)iVar10;
          }
          fVar1 = (float)iVar9 / 50.0 + -0.4;
          if (1.0 <= fVar1) {
            fVar1 = 1.0;
          }
          fVar20 = fVar20 + (fVar6 - fVar20) * fVar1;
        }
      }
      FUN_140056680(&local_a8);
      if (9 < (int)uVar13) {
        plVar14 = (longlong *)(lVar3 + 0x90);
        iVar9 = *(int *)(lVar3 + 0x98);
        uVar8 = iVar9 + 1;
        *(uint *)(lVar3 + 0x98) = uVar8;
        if (*(uint *)(lVar3 + 0x9c) < uVar8) {
          FUN_144941252(plVar14);
        }
        *(double *)(*plVar14 + (longlong)iVar9 * 8) = (double)(fVar21 / fVar20) + dVar4;
        if (uVar13 < 0x65) {
          uVar13 = 0x65 - uVar13;
          dVar5 = 0.0;
          lVar11 = 0;
          do {
            if ((SBORROW4(0,*(int *)(lVar3 + 0x98))) ||
               (uVar15 = (ulonglong)(*(int *)(lVar3 + 0x98) - 1) + lVar11, (int)uVar15 < 0)) {
              if ((int)lVar11 == 0) goto LAB_143f32348;
              uVar13 = -(int)lVar11;
              break;
            }
            dVar5 = dVar5 + *(double *)(*plVar14 + (uVar15 & 0xffffffff) * 8);
            lVar11 = lVar11 + -1;
          } while (-lVar11 != (ulonglong)uVar13);
          dVar5 = dVar5 / (double)(int)uVar13;
        }
        else {
LAB_143f32348:
          dVar5 = 0.0;
        }
        dVar4 = dVar5 - dVar4;
        if (dVar4 <= 1.0) {
          dVar4 = 1.0;
        }
        FUN_140002266(&local_b8,L"- Est Total: %5.1f sec, Remaining: %5.1f sec",dVar5,dVar4);
        if (local_a8.QuadPart != 0) {
          FUN_1400020a8();
        }
        local_a8 = local_b8;
        local_a0 = uStack_b0;
      }
      if (local_a8.QuadPart != 0) {
        FUN_1400020a8();
      }
    }
    FUN_140635c46(2);
    uVar15 = CONCAT71((int7)((ulonglong)plVar14 >> 8),1);
  }
  if ((local_80 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffff;
}



// FUNCTION 143f32556 FUN_143f32556 body=12 status=ok
// SIG undefined FUN_143f32556(void)

void FUN_143f32556(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143f3255f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143f32562 FUN_143f32562 body=29 status=ok
// SIG undefined FUN_143f32562(void)

undefined8 FUN_143f32562(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f32580 FUN_143f32580 body=64 status=ok
// SIG undefined FUN_143f32580(void)

undefined8 * FUN_143f32580(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ebb20;
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



// FUNCTION 143f325c4 FUN_143f325c4 body=81 status=ok
// SIG undefined FUN_143f325c4(void)

undefined8 FUN_143f325c4(longlong param_1)

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



// FUNCTION 143f3261a FUN_143f3261a body=89 status=ok
// SIG undefined FUN_143f3261a(void)

bool FUN_143f3261a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f32665;
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
LAB_143f32665:
  return lVar6 == param_2;
}



// FUNCTION 143f32690 FUN_143f32690 body=118 status=ok
// SIG undefined FUN_143f32690(void)

void FUN_143f32690(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4cdec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ebb20;
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



// FUNCTION 143f32706 FUN_143f32706 body=118 status=ok
// SIG undefined FUN_143f32706(void)

void FUN_143f32706(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4cdec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ebb20;
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



// FUNCTION 143f3277c FUN_143f3277c body=156 status=ok
// SIG undefined FUN_143f3277c(void)

void FUN_143f3277c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4cdec0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ebb20;
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
                    /* WARNING: Could not recover jumptable at 0x000143f32808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f32818 FUN_143f32818 body=118 status=ok
// SIG undefined FUN_143f32818(void)

void FUN_143f32818(longlong param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_3;
  FUN_143f32932(param_1 + 0x28,param_2,&local_1c);
  puVar2 = *(undefined8 **)(param_2 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f328a0 FUN_143f328a0 body=144 status=ok
// SIG undefined FUN_143f328a0(void)

ulonglong FUN_143f328a0(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_3;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar4 = 0;
  }
  else {
    FUN_143f32932(param_1 + 0x28,param_2,&local_1c);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  }
  plVar3 = *(longlong **)(param_2 + 8);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f32932 FUN_143f32932 body=140 status=ok
// SIG undefined FUN_143f32932(void)

void FUN_143f32932(longlong *param_1,longlong *param_2,int *param_3,char *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  iVar3 = *param_3;
  lVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  param_1 = (longlong *)*param_1;
  if ((((*param_4 != '\0') || (param_4[0x38] == '\0')) && (iVar3 != -1)) && (lVar4 != 0)) {
    *(int *)(param_1 + 6) = iVar3;
  }
  if (param_1[10] != 0) {
    FUN_14480f766(param_1[7] + 0xb8);
    param_1[10] = 0;
  }
  (**(code **)(*param_1 + 8))(param_1);
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
                    /* WARNING: Could not recover jumptable at 0x000143f329b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143f329be FUN_143f329be body=64 status=ok
// SIG undefined FUN_143f329be(void)

undefined8 * FUN_143f329be(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ebe30;
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



// FUNCTION 143f32a02 FUN_143f32a02 body=81 status=ok
// SIG undefined FUN_143f32a02(void)

undefined8 FUN_143f32a02(longlong param_1)

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



// FUNCTION 143f32a58 FUN_143f32a58 body=89 status=ok
// SIG undefined FUN_143f32a58(void)

bool FUN_143f32a58(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f32aa3;
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
LAB_143f32aa3:
  return lVar6 == param_2;
}



// FUNCTION 143f32ace FUN_143f32ace body=118 status=ok
// SIG undefined FUN_143f32ace(void)

void FUN_143f32ace(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ede20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ebe30;
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



// FUNCTION 143f32b44 FUN_143f32b44 body=118 status=ok
// SIG undefined FUN_143f32b44(void)

void FUN_143f32b44(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ede20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ebe30;
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



// FUNCTION 143f32bba FUN_143f32bba body=156 status=ok
// SIG undefined FUN_143f32bba(void)

void FUN_143f32bba(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4ede20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ebe30;
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
                    /* WARNING: Could not recover jumptable at 0x000143f32c46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f32c72 FUN_143f32c72 body=68 status=ok
// SIG undefined FUN_143f32c72(void)

ulonglong FUN_143f32c72(longlong param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined8 unaff_RSI;
  ulonglong uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((param_4 < 0x19) && (*(int *)(*(longlong *)(param_1 + 0x28) + 0x30) == param_2)) {
      FUN_148a7efa2(*(longlong *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
    }
  }
  return uVar1 & 0xffffffff;
}



// FUNCTION 143f32cb6 FUN_143f32cb6 body=64 status=ok
// SIG undefined FUN_143f32cb6(void)

undefined8 * FUN_143f32cb6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ebea0;
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



// FUNCTION 143f32cfa FUN_143f32cfa body=81 status=ok
// SIG undefined FUN_143f32cfa(void)

undefined8 FUN_143f32cfa(longlong param_1)

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



// FUNCTION 143f32d50 FUN_143f32d50 body=89 status=ok
// SIG undefined FUN_143f32d50(void)

bool FUN_143f32d50(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f32d9b;
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
LAB_143f32d9b:
  return lVar6 == param_2;
}



// FUNCTION 143f32dc6 FUN_143f32dc6 body=118 status=ok
// SIG undefined FUN_143f32dc6(void)

void FUN_143f32dc6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ebea0;
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



// FUNCTION 143f32e3c FUN_143f32e3c body=118 status=ok
// SIG undefined FUN_143f32e3c(void)

void FUN_143f32e3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ebea0;
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



// FUNCTION 143f32eb2 FUN_143f32eb2 body=156 status=ok
// SIG undefined FUN_143f32eb2(void)

void FUN_143f32eb2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ebea0;
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
                    /* WARNING: Could not recover jumptable at 0x000143f32f3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f32f5e FUN_143f32f5e body=52 status=ok
// SIG undefined FUN_143f32f5e(void)

undefined8 FUN_143f32f5e(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_148a7efa2(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143f32f92 FUN_143f32f92 body=1256 status=ok
// SIG undefined FUN_143f32f92(void)

void FUN_143f32f92(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong *plVar12;
  undefined ***pppuVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0;
  undefined8 *local_e8;
  int local_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined1 local_c8;
  undefined1 local_b9;
  longlong local_b8 [2];
  longlong *local_a8;
  longlong local_98 [4];
  undefined1 *local_78;
  undefined ***local_68;
  undefined **local_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = param_1;
  iVar7 = FUN_146815492(param_1,1,0,param_1 + 0x10);
  local_f0 = iVar7 == 1;
  local_b8[0] = 0;
  local_a8 = (longlong *)0x0;
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_14114e6dc(&local_e8,param_1 + 0x20);
  local_78 = (undefined1 *)0x0;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14b4ebf30;
  uStack_50 = local_f0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_14114e6dc(&local_48,&local_e8);
  local_78 = &LAB_143f33532;
  FUN_14170b918(&local_d8,local_b8);
  plVar6 = plStack_d0;
  local_c8 = 1;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
    UNLOCK();
  }
  puVar3 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar9 = (uint *)*puVar3;
  if (puVar9 != (uint *)0x0) goto LAB_143f33103;
LAB_143f33085:
  uVar11 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x318);
  if ((uVar11 & 1) == 0) {
    *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
             ) = uVar11 | 1;
    __tlregdtor(&LAB_143f335df);
  }
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar8 = *(undefined4 **)(lVar5 + 0x310);
  *(undefined8 *)(lVar5 + 0x310) = 0;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = _aligned_malloc(0x10000,0x10000);
  }
  *puVar8 = 0xffffffff;
  *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
  puVar8[0x12] = 0;
  *puVar3 = puVar8;
  FUN_140217a48(puVar3);
  puVar9 = (uint *)*puVar3;
LAB_143f33103:
  uVar14 = *(longlong *)(puVar9 + 0x10) + 0xf;
  uVar11 = puVar9[0x12];
  do {
    puVar15 = (undefined8 *)(uVar14 & 0xfffffffffffffff0);
    if (puVar15 + 0x22 <= puVar9 + 0x4000) {
      *(undefined8 **)(puVar9 + 0x10) = puVar15 + 0x22;
      puVar9[0x12] = uVar11 + 1;
      FUN_1447247dc(puVar15,0);
      *puVar15 = TGraphTask<TAsyncGraphTask<void>_>::vftable;
      puVar15[0x16] = local_78;
      puVar15[0x18] = local_68;
      local_68 = (undefined ***)0x0;
      *(undefined4 *)(puVar15 + 0x1c) = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar15 + 0xe4) = local_48._4_4_;
      *(undefined4 *)(puVar15 + 0x1d) = uStack_40;
      *(undefined4 *)((longlong)puVar15 + 0xec) = uStack_3c;
      puVar15[0x1a] = local_58;
      puVar15[0x1b] = CONCAT71(uStack_4f,uStack_50);
      if (local_78 != (undefined1 *)0x0) {
        local_78 = (undefined1 *)0x0;
      }
      puVar15[0x1e] = local_d8;
      puVar15[0x1f] = plStack_d0;
      local_d8 = 0;
      plStack_d0 = (longlong *)0x0;
      *(undefined1 *)(puVar15 + 0x20) = 0;
      *(undefined4 *)(puVar15 + 0x21) = 1;
      if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
      }
      puVar15[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar15[9] = puVar15;
      puVar15[10] = puVar15;
      lVar5 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar5 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(lVar5 + 0x30);
      }
      puVar15[0xf] = uVar10;
      puVar15[0x10] = 0xe80000527800b400;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = 3;
      if (puVar15 == (undefined8 *)0x0) {
        local_b9 = 1;
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
        UNLOCK();
        local_b9 = 1;
        FUN_1447439e4(puVar15);
        LOCK();
        piVar2 = (int *)(puVar15 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar15)(puVar15,1);
        }
      }
      plVar12 = plStack_d0;
      if (plStack_d0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_d0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_d0)(plStack_d0);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      if (local_78 != (undefined1 *)0x0) {
        pppuVar13 = &local_58;
        if (local_68 != (undefined ***)0x0) {
          pppuVar13 = local_68;
        }
        (*(code *)(*pppuVar13)[2])(pppuVar13);
      }
      if (local_b8[0] != 0) {
        plVar12 = local_a8;
        if (local_a8 == (longlong *)0x0) {
          plVar12 = local_98;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar6 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
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
      if (local_e0 != 0) {
        if (local_e8 == (undefined8 *)0x0) goto LAB_143f3340f;
        (**(code **)*local_e8)(local_e8,0);
        FUN_1446efa72(&local_e8,0,0,0x10);
        local_e0 = 0;
      }
      if (local_e8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
LAB_143f3340f:
      if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
    LOCK();
    uVar4 = *puVar9;
    *puVar9 = *puVar9 + uVar11 + 1;
    UNLOCK();
    if ((uVar4 ^ uVar11) != 0xffffffff) goto LAB_143f33085;
    puVar9 = (uint *)*puVar3;
    *puVar9 = 0xffffffff;
    *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
    puVar9[0x12] = 0;
    *puVar3 = puVar9;
    uVar14 = (longlong)puVar9 + 0x67;
    uVar11 = 0;
  } while( true );
}



// FUNCTION 143f33480 FUN_143f33480 body=5 status=ok
// SIG undefined FUN_143f33480(void)

longlong FUN_143f33480(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143f33486 FUN_143f33486 body=29 status=ok
// SIG undefined FUN_143f33486(void)

void FUN_143f33486(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143f334a4 FUN_143f334a4 body=141 status=ok
// SIG undefined FUN_143f334a4(void)

undefined8 * FUN_143f334a4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14b4ebf10;
  plVar1 = param_1 + 5;
  if (*(int *)(param_1 + 6) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f334f5;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143f334f5:
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f33564 FUN_143f33564 body=12 status=ok
// SIG undefined FUN_143f33564(void)

void FUN_143f33564(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143f3356d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143f33570 FUN_143f33570 body=111 status=ok
// SIG undefined FUN_143f33570(void)

undefined8 * FUN_143f33570(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14b4ebf30;
  plVar1 = param_1 + 2;
  if (*(int *)(param_1 + 3) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f335c1;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 3) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143f335c1:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f33606 FUN_143f33606 body=64 status=ok
// SIG undefined FUN_143f33606(void)

undefined8 * FUN_143f33606(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ec0a0;
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



// FUNCTION 143f3364a FUN_143f3364a body=81 status=ok
// SIG undefined FUN_143f3364a(void)

undefined8 FUN_143f3364a(longlong param_1)

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



// FUNCTION 143f336a0 FUN_143f336a0 body=89 status=ok
// SIG undefined FUN_143f336a0(void)

bool FUN_143f336a0(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f336eb;
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
LAB_143f336eb:
  return lVar6 == param_2;
}



// FUNCTION 143f33716 FUN_143f33716 body=118 status=ok
// SIG undefined FUN_143f33716(void)

void FUN_143f33716(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ede20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ec0a0;
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



// FUNCTION 143f3378c FUN_143f3378c body=118 status=ok
// SIG undefined FUN_143f3378c(void)

void FUN_143f3378c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ede20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ec0a0;
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



// FUNCTION 143f33802 FUN_143f33802 body=156 status=ok
// SIG undefined FUN_143f33802(void)

void FUN_143f33802(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4ede20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ec0a0;
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
                    /* WARNING: Could not recover jumptable at 0x000143f3388e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f338b8 FUN_143f338b8 body=66 status=ok
// SIG undefined FUN_143f338b8(void)

ulonglong FUN_143f338b8(longlong param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined8 unaff_RSI;
  ulonglong uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((param_4 < 0x19) && (*(int *)(*(longlong *)(param_1 + 0x28) + 0x30) == param_2)) {
      FUN_148a68598(*(undefined8 *)(param_1 + 0x30));
    }
  }
  return uVar1 & 0xffffffff;
}



// FUNCTION 143f338fa FUN_143f338fa body=64 status=ok
// SIG undefined FUN_143f338fa(void)

undefined8 * FUN_143f338fa(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ec110;
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



// FUNCTION 143f3393e FUN_143f3393e body=81 status=ok
// SIG undefined FUN_143f3393e(void)

undefined8 FUN_143f3393e(longlong param_1)

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



// FUNCTION 143f33994 FUN_143f33994 body=89 status=ok
// SIG undefined FUN_143f33994(void)

bool FUN_143f33994(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f339df;
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
LAB_143f339df:
  return lVar6 == param_2;
}



// FUNCTION 143f33a0a FUN_143f33a0a body=118 status=ok
// SIG undefined FUN_143f33a0a(void)

void FUN_143f33a0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ec110;
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



// FUNCTION 143f33a80 FUN_143f33a80 body=118 status=ok
// SIG undefined FUN_143f33a80(void)

void FUN_143f33a80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ec110;
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



// FUNCTION 143f33af6 FUN_143f33af6 body=156 status=ok
// SIG undefined FUN_143f33af6(void)

void FUN_143f33af6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ec110;
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
                    /* WARNING: Could not recover jumptable at 0x000143f33b82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f33b9c FUN_143f33b9c body=46 status=ok
// SIG undefined FUN_143f33b9c(void)

undefined8 FUN_143f33b9c(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_148a68598(*(undefined8 *)(param_1 + 0x30));
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143f33bca FUN_143f33bca body=64 status=ok
// SIG undefined FUN_143f33bca(void)

undefined8 * FUN_143f33bca(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ec180;
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



// FUNCTION 143f33c0e FUN_143f33c0e body=81 status=ok
// SIG undefined FUN_143f33c0e(void)

undefined8 FUN_143f33c0e(longlong param_1)

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



// FUNCTION 143f33c64 FUN_143f33c64 body=89 status=ok
// SIG undefined FUN_143f33c64(void)

bool FUN_143f33c64(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f33caf;
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
LAB_143f33caf:
  return lVar6 == param_2;
}



// FUNCTION 143f33cda FUN_143f33cda body=118 status=ok
// SIG undefined FUN_143f33cda(void)

void FUN_143f33cda(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ec1f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ec180;
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



// FUNCTION 143f33d50 FUN_143f33d50 body=118 status=ok
// SIG undefined FUN_143f33d50(void)

void FUN_143f33d50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ec1f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ec180;
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



// FUNCTION 143f33dc6 FUN_143f33dc6 body=156 status=ok
// SIG undefined FUN_143f33dc6(void)

void FUN_143f33dc6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4ec1f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ec180;
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
                    /* WARNING: Could not recover jumptable at 0x000143f33e52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f33e6e FUN_143f33e6e body=49 status=ok
// SIG undefined FUN_143f33e6e(void)

undefined8 FUN_143f33e6e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_143f33ea0(param_1 + 0x28,param_3);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143f33ea0 FUN_143f33ea0 body=390 status=ok
// SIG undefined FUN_143f33ea0(void)

void FUN_143f33ea0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *plStack_50;
  longlong *local_48 [2];
  undefined2 local_38 [2];
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *param_1;
  local_38[0] = 0x100;
  local_34 = 0x100000000;
  uStack_2c = 0x144;
  local_24 = 1;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  FUN_1402347c4(local_48,SUB84(((((double)CONCAT44(0x43300000,(int)*(undefined8 *)(param_2 + 8)) -
                                 4503599627370496.0) +
                                ((double)CONCAT44(0x45300000,
                                                  (int)((ulonglong)*(undefined8 *)(param_2 + 8) >>
                                                       0x20)) - 1.9342813113834067e+25)) /
                               (((double)CONCAT44(0x43300000,(int)*(undefined8 *)(param_2 + 0x10)) -
                                4503599627370496.0) +
                               ((double)CONCAT44(0x45300000,
                                                 (int)((ulonglong)*(undefined8 *)(param_2 + 0x10) >>
                                                      0x20)) - 1.9342813113834067e+25))) * 100.0,0),
                local_38,&local_58);
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
  plVar5 = local_48[0];
  if (*(code **)(*local_48[0] + 0x50) != FUN_144828418) {
    plVar5 = (longlong *)(**(code **)(*local_48[0] + 0x50))();
  }
  FUN_1447a1fc0(plVar5);
  pcVar4 = *(code **)(*local_48[0] + 0x28);
  if (pcVar4 == FUN_14482841c) {
    plVar5 = local_48[0] + 3;
    if (local_48[0][5] != 0) {
      plVar5 = (longlong *)(local_48[0][5] + 8);
    }
  }
  else if (pcVar4 == (code *)&LAB_14010c34c) {
    plVar5 = local_48[0] + 2;
  }
  else {
    plVar5 = (longlong *)(*pcVar4)(local_48[0]);
  }
  FUN_140056680(&local_58,L"TitleActivatePatchDownloadProgressText");
  (**(code **)(**(longlong **)(lVar3 + 0x38) + 0x338))
            (*(longlong **)(lVar3 + 0x38),&local_58,plVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f34028 FUN_143f34028 body=64 status=ok
// SIG undefined FUN_143f34028(void)

undefined8 * FUN_143f34028(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ec2b0;
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



// FUNCTION 143f3406c FUN_143f3406c body=81 status=ok
// SIG undefined FUN_143f3406c(void)

undefined8 FUN_143f3406c(longlong param_1)

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



// FUNCTION 143f340c2 FUN_143f340c2 body=89 status=ok
// SIG undefined FUN_143f340c2(void)

bool FUN_143f340c2(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f3410d;
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
LAB_143f3410d:
  return lVar6 == param_2;
}



// FUNCTION 143f34138 FUN_143f34138 body=118 status=ok
// SIG undefined FUN_143f34138(void)

void FUN_143f34138(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ec320;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ec2b0;
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



// FUNCTION 143f341ae FUN_143f341ae body=118 status=ok
// SIG undefined FUN_143f341ae(void)

void FUN_143f341ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ec320;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ec2b0;
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



// FUNCTION 143f34224 FUN_143f34224 body=156 status=ok
// SIG undefined FUN_143f34224(void)

void FUN_143f34224(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4ec320;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ec2b0;
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
                    /* WARNING: Could not recover jumptable at 0x000143f342b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f342c0 FUN_143f342c0 body=63 status=ok
// SIG undefined FUN_143f342c0(void)

void FUN_143f342c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_143f3435e(param_1 + 0x28);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f34300 FUN_143f34300 body=93 status=ok
// SIG undefined FUN_143f34300(void)

undefined8 FUN_143f34300(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_143f3435e(param_1 + 0x28,&local_10);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f3435e FUN_143f3435e body=226 status=ok
// SIG undefined FUN_143f3435e(void)

void FUN_143f3435e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  auVar2 = SEXT816(*param_2 / 10000000) * ZEXT816(0x8888888888888889);
  iVar4 = (int)(*param_2 / 10000000) + ((int)(auVar2._8_8_ >> 5) - (auVar2._12_4_ >> 0x1f)) * -0x3c;
  iVar3 = 0;
  if (0 < iVar4) {
    iVar3 = iVar4;
  }
  FUN_140002266(local_30,&DAT_149e063bc,iVar3);
  FUN_140056680(local_40,L"TitleActivateRebootProgressText");
  (**(code **)(**(longlong **)(lVar1 + 0x38) + 0x338))
            (*(longlong **)(lVar1 + 0x38),local_40,local_30);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f34442 FUN_143f34442 body=64 status=ok
// SIG undefined FUN_143f34442(void)

undefined8 * FUN_143f34442(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ec3d0;
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



// FUNCTION 143f34486 FUN_143f34486 body=81 status=ok
// SIG undefined FUN_143f34486(void)

undefined8 FUN_143f34486(longlong param_1)

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



// FUNCTION 143f344dc FUN_143f344dc body=89 status=ok
// SIG undefined FUN_143f344dc(void)

bool FUN_143f344dc(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f34527;
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
LAB_143f34527:
  return lVar6 == param_2;
}



// FUNCTION 143f34552 FUN_143f34552 body=118 status=ok
// SIG undefined FUN_143f34552(void)

void FUN_143f34552(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ec440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ec3d0;
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



// FUNCTION 143f345c8 FUN_143f345c8 body=118 status=ok
// SIG undefined FUN_143f345c8(void)

void FUN_143f345c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ec440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ec3d0;
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



// FUNCTION 143f3463e FUN_143f3463e body=156 status=ok
// SIG undefined FUN_143f3463e(void)

void FUN_143f3463e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4ec440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ec3d0;
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
                    /* WARNING: Could not recover jumptable at 0x000143f346ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f346e4 FUN_143f346e4 body=46 status=ok
// SIG undefined FUN_143f346e4(void)

undefined8 FUN_143f346e4(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_143f34712(param_1 + 0x28);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143f34712 FUN_143f34712 body=206 status=ok
// SIG undefined FUN_143f34712(void)

void FUN_143f34712(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  longlong *local_48 [2];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  local_38 = L"FailedToApplyPatch";
  local_30 = 0x12;
  FUN_1446e940c(local_4c,&local_38);
  local_38 = L"GbxOnlineLoginManagerTasks";
  local_30 = 0x1a;
  FUN_1446e940c(local_50,&local_38);
  local_38 = L"Failed to apply patch! Please retry later.";
  local_30 = 0x2a;
  FUN_140208c1e(local_48,local_50,local_4c,&local_38);
  (**(code **)(**(longlong **)(lVar1 + 0x38) + 0x348))(*(longlong **)(lVar1 + 0x38),local_48);
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f347e2 FUN_143f347e2 body=64 status=ok
// SIG undefined FUN_143f347e2(void)

undefined8 * FUN_143f347e2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ec530;
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



// FUNCTION 143f34826 FUN_143f34826 body=81 status=ok
// SIG undefined FUN_143f34826(void)

undefined8 FUN_143f34826(longlong param_1)

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



// FUNCTION 143f3487c FUN_143f3487c body=89 status=ok
// SIG undefined FUN_143f3487c(void)

bool FUN_143f3487c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f348c7;
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
LAB_143f348c7:
  return lVar6 == param_2;
}



// FUNCTION 143f348f2 FUN_143f348f2 body=118 status=ok
// SIG undefined FUN_143f348f2(void)

void FUN_143f348f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ec5a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ec530;
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



// FUNCTION 143f34968 FUN_143f34968 body=118 status=ok
// SIG undefined FUN_143f34968(void)

void FUN_143f34968(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ec5a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ec530;
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



// FUNCTION 143f349de FUN_143f349de body=156 status=ok
// SIG undefined FUN_143f349de(void)

void FUN_143f349de(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4ec5a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ec530;
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
                    /* WARNING: Could not recover jumptable at 0x000143f34a6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f34a84 FUN_143f34a84 body=46 status=ok
// SIG undefined FUN_143f34a84(void)

undefined8 FUN_143f34a84(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_143f34ab2(param_1 + 0x28);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143f34ab2 FUN_143f34ab2 body=289 status=ok
// SIG undefined FUN_143f34ab2(void)

void FUN_143f34ab2(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  longlong *local_48 [2];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  FUN_140056680(&local_38,&DAT_149dfb77a);
  FUN_140056680(local_48,L"FailedToDownloadPatch");
  plVar2 = *(longlong **)(lVar1 + 0x38);
  (**(code **)(*plVar2 + 0x338))(plVar2,local_48,&local_38);
  if (local_48[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_38 = L"FailedToDownloadPatch";
  local_30 = 0x15;
  FUN_1446e940c(local_4c,&local_38);
  local_38 = L"GbxOnlineLoginManagerTasks";
  local_30 = 0x1a;
  FUN_1446e940c(local_50,&local_38);
  local_38 = L"Failed to download patch! Please retry later.";
  local_30 = 0x2d;
  FUN_140208c1e(local_48,local_50,local_4c,&local_38);
  plVar2 = *(longlong **)(lVar1 + 0x38);
  (**(code **)(*plVar2 + 0x348))(plVar2,local_48);
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f34bd4 FUN_143f34bd4 body=64 status=ok
// SIG undefined FUN_143f34bd4(void)

undefined8 * FUN_143f34bd4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ec690;
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



// FUNCTION 143f34c18 FUN_143f34c18 body=81 status=ok
// SIG undefined FUN_143f34c18(void)

undefined8 FUN_143f34c18(longlong param_1)

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



// FUNCTION 143f34c6e FUN_143f34c6e body=89 status=ok
// SIG undefined FUN_143f34c6e(void)

bool FUN_143f34c6e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f34cb9;
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
LAB_143f34cb9:
  return lVar6 == param_2;
}



// FUNCTION 143f34ce4 FUN_143f34ce4 body=118 status=ok
// SIG undefined FUN_143f34ce4(void)

void FUN_143f34ce4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ec700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ec690;
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



// FUNCTION 143f34d5a FUN_143f34d5a body=118 status=ok
// SIG undefined FUN_143f34d5a(void)

void FUN_143f34d5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ec700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ec690;
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



// FUNCTION 143f34dd0 FUN_143f34dd0 body=156 status=ok
// SIG undefined FUN_143f34dd0(void)

void FUN_143f34dd0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4ec700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ec690;
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
                    /* WARNING: Could not recover jumptable at 0x000143f34e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f34e76 FUN_143f34e76 body=46 status=ok
// SIG undefined FUN_143f34e76(void)

undefined8 FUN_143f34e76(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1465818a0(*(undefined8 *)(param_1 + 0x28));
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143f34ea4 FUN_143f34ea4 body=78 status=ok
// SIG undefined FUN_143f34ea4(void)

undefined8 * FUN_143f34ea4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ec770;
  if (param_1[6] != 0) {
    FUN_1400020a8();
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



// FUNCTION 143f34ef6 FUN_143f34ef6 body=81 status=ok
// SIG undefined FUN_143f34ef6(void)

undefined8 FUN_143f34ef6(longlong param_1)

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



// FUNCTION 143f34f4c FUN_143f34f4c body=89 status=ok
// SIG undefined FUN_143f34f4c(void)

bool FUN_143f34f4c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f34f97;
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
LAB_143f34f97:
  return lVar6 == param_2;
}



// FUNCTION 143f34fc2 FUN_143f34fc2 body=192 status=ok
// SIG undefined FUN_143f34fc2(void)

void FUN_143f34fc2(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4ec7e0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4ec770;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  return;
}



// FUNCTION 143f35082 FUN_143f35082 body=192 status=ok
// SIG undefined FUN_143f35082(void)

void FUN_143f35082(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4ec7e0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4ec770;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  return;
}



// FUNCTION 143f35142 FUN_143f35142 body=231 status=ok
// SIG undefined FUN_143f35142(void)

void FUN_143f35142(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  longlong lVar3;
  undefined8 uVar4;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4ec7e0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b4ec770;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)lVar3;
  p_Var2->ContentionCount = (int)((ulonglong)lVar3 >> 0x20);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  p_Var2->Flags = (int)uVar4;
  p_Var2->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar4 >> 0x20);
  p_Var2->SpareWORD = (short)((ulonglong)uVar4 >> 0x30);
  p_Var2[1].Type = 0;
  p_Var2[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)&p_Var2[1].CriticalSection = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)&p_Var2[1].CriticalSection + 4) = 0;
  }
  else {
    FUN_1446dd670(p_Var2 + 1,iVar1,0);
    memcpy(*(void **)(p_Var2 + 1),_Src,(longlong)iVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f35217. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f3522a FUN_143f3522a body=63 status=ok
// SIG undefined FUN_143f3522a(void)

void FUN_143f3522a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_143f352c8(param_1 + 0x28);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f3526a FUN_143f3526a body=93 status=ok
// SIG undefined FUN_143f3526a(void)

undefined8 FUN_143f3526a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_143f352c8(param_1 + 0x28,&local_c);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f352c8 FUN_143f352c8 body=1343 status=ok
// SIG undefined FUN_143f352c8(void)

void FUN_143f352c8(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  wchar_t **local_78;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  longlong *local_60 [2];
  longlong *local_50;
  undefined4 local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *param_2;
  lVar2 = *param_1;
  if (iVar1 == 0) {
    lVar3 = (**(code **)(**(longlong **)(lVar2 + 0x38) + 0x180))();
    if (((lVar3 != 0) && (lVar3 = FUN_1400f6f32(lVar3), lVar3 != 0)) &&
       (lVar3 = *(longlong *)(lVar3 + 0x68), lVar3 != 0)) {
      FUN_140ceec26(lVar3,&local_50,*(undefined4 *)(lVar2 + 0x30));
      if (-1 < (short)local_50) {
        FUN_1446f470e(&local_40,L"SHIFT",1);
        local_78 = &local_40;
        FUN_141589eda(lVar3,local_60,&local_50,param_1 + 1);
      }
    }
    FUN_148a7df94(lVar2,1);
    *(undefined1 *)(lVar2 + 0x18) = 1;
    goto LAB_143f3575c;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
  local_50 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_48 = 0;
  switch(iVar1) {
  case 1:
    local_40 = L"RenameError_Blank";
    local_38 = 0x11;
    FUN_1446e940c(local_64,&local_40);
    local_40 = L"GbxOnlineLoginManagerTasks";
    local_38 = 0x1a;
    FUN_1446e940c(local_68,&local_40);
    local_40 = L"Name cannot be blank.";
    local_38 = 0x15;
    break;
  case 2:
    local_40 = L"RenameError_Taken";
    local_38 = 0x11;
    FUN_1446e940c(local_64,&local_40);
    local_40 = L"GbxOnlineLoginManagerTasks";
    local_38 = 0x1a;
    FUN_1446e940c(local_68,&local_40);
    local_40 = L"Name is already in use.";
    local_38 = 0x17;
    break;
  case 3:
    local_40 = L"RenameError_TooShort";
    local_38 = 0x14;
    FUN_1446e940c(local_64,&local_40);
    local_40 = L"GbxOnlineLoginManagerTasks";
    local_38 = 0x1a;
    FUN_1446e940c(local_68,&local_40);
    local_40 = L"Name is too short.";
    local_38 = 0x12;
    break;
  case 4:
    local_40 = L"RenameError_TooLong";
    local_38 = 0x13;
    FUN_1446e940c(local_64,&local_40);
    local_40 = L"GbxOnlineLoginManagerTasks";
    local_38 = 0x1a;
    FUN_1446e940c(local_68,&local_40);
    local_40 = L"Name is too long.";
    local_38 = 0x11;
    break;
  case 5:
    local_40 = L"RenameError_Invalid";
    local_38 = 0x13;
    FUN_1446e940c(local_64,&local_40);
    local_40 = L"GbxOnlineLoginManagerTasks";
    local_38 = 0x1a;
    FUN_1446e940c(local_68,&local_40);
    local_40 = L"Name is invalid.";
    local_38 = 0x10;
    break;
  case 6:
    local_40 = L"RenameError_Abusive";
    local_38 = 0x13;
    FUN_1446e940c(local_64,&local_40);
    local_40 = L"GbxOnlineLoginManagerTasks";
    local_38 = 0x1a;
    FUN_1446e940c(local_68,&local_40);
    local_40 = L"Name is not appropriate.";
    local_38 = 0x18;
    break;
  case 7:
    local_40 = L"RenameError_Disallowed";
    local_38 = 0x16;
    FUN_1446e940c(local_64,&local_40);
    local_40 = L"GbxOnlineLoginManagerTasks";
    local_38 = 0x1a;
    FUN_1446e940c(local_68,&local_40);
    local_40 = L"Name is not allowed.";
    local_38 = 0x14;
    break;
  case 8:
    local_40 = L"RenameError_InternalError";
    local_38 = 0x19;
    FUN_1446e940c(local_64,&local_40);
    local_40 = L"GbxOnlineLoginManagerTasks";
    local_38 = 0x1a;
    FUN_1446e940c(local_68,&local_40);
    local_40 = L"Internal system error, try again.";
    local_38 = 0x21;
    break;
  default:
    goto switchD_143f353f2_default;
  }
  FUN_140208c1e(local_60,local_68,local_64,&local_40);
  FUN_140008f88(&local_50,local_60);
  if (local_60[0] != (longlong *)0x0) {
    (**(code **)(*local_60[0] + 0x10))();
  }
switchD_143f353f2_default:
  FUN_148a7fec2(lVar2,param_1 + 1,&local_50);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
LAB_143f3575c:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f35808 FUN_143f35808 body=104 status=ok
// SIG undefined FUN_143f35808(void)

undefined8 * FUN_143f35808(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4ecb70;
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
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f35874 FUN_143f35874 body=81 status=ok
// SIG undefined FUN_143f35874(void)

undefined8 FUN_143f35874(longlong param_1)

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



// FUNCTION 143f358ca FUN_143f358ca body=89 status=ok
// SIG undefined FUN_143f358ca(void)

bool FUN_143f358ca(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f35915;
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
LAB_143f35915:
  return lVar6 == param_2;
}



// FUNCTION 143f35940 FUN_143f35940 body=143 status=ok
// SIG undefined FUN_143f35940(void)

void FUN_143f35940(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4c90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ecb70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f359d0 FUN_143f359d0 body=143 status=ok
// SIG undefined FUN_143f359d0(void)

void FUN_143f359d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4c90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ecb70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f35a60 FUN_143f35a60 body=181 status=ok
// SIG undefined FUN_143f35a60(void)

void FUN_143f35a60(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  _RTL_CRITICAL_SECTION *p_Var4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4c90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ecb70;
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
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  p_Var4 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var4;
  if (p_Var4 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var4->LockCount = p_Var4->LockCount + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f35b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f35b44 FUN_143f35b44 body=78 status=ok
// SIG undefined FUN_143f35b44(void)

undefined8 FUN_143f35b44(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    uVar1 = 0;
    if (0 < *(int *)(*(longlong *)(param_1 + 0x20) + 8)) {
      if (((param_4 == 0) || (uVar1 = 1, (param_4 & 4) != 0)) || (uVar1 = 2, (param_4 & 8) != 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x50) = uVar1;
      }
      FUN_1459d1ac0();
      uVar2 = 1;
    }
  }
  return uVar2;
}



// FUNCTION 143f35b92 FUN_143f35b92 body=64 status=ok
// SIG undefined FUN_143f35b92(void)

undefined8 * FUN_143f35b92(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ecdc0;
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



// FUNCTION 143f35bd6 FUN_143f35bd6 body=81 status=ok
// SIG undefined FUN_143f35bd6(void)

undefined8 FUN_143f35bd6(longlong param_1)

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



// FUNCTION 143f35c2e FUN_143f35c2e body=89 status=ok
// SIG undefined FUN_143f35c2e(void)

bool FUN_143f35c2e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f35c79;
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
LAB_143f35c79:
  return lVar6 == param_2;
}



// FUNCTION 143f35ca4 FUN_143f35ca4 body=118 status=ok
// SIG undefined FUN_143f35ca4(void)

void FUN_143f35ca4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edb80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ecdc0;
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



// FUNCTION 143f35d1a FUN_143f35d1a body=118 status=ok
// SIG undefined FUN_143f35d1a(void)

void FUN_143f35d1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edb80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ecdc0;
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



// FUNCTION 143f35d90 FUN_143f35d90 body=156 status=ok
// SIG undefined FUN_143f35d90(void)

void FUN_143f35d90(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edb80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ecdc0;
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
                    /* WARNING: Could not recover jumptable at 0x000143f35e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f35e2c FUN_143f35e2c body=104 status=ok
// SIG undefined FUN_143f35e2c(void)

void FUN_143f35e2c(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000143f35e79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143f35e8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 143f35e94 FUN_143f35e94 body=101 status=ok
// SIG undefined FUN_143f35e94(void)

ulonglong FUN_143f35e94(longlong param_1)

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
LAB_143f35eee:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_143f35eee;
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



// FUNCTION 143f35efa FUN_143f35efa body=64 status=ok
// SIG undefined FUN_143f35efa(void)

undefined8 * FUN_143f35efa(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ece30;
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



// FUNCTION 143f35f3e FUN_143f35f3e body=81 status=ok
// SIG undefined FUN_143f35f3e(void)

undefined8 FUN_143f35f3e(longlong param_1)

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



// FUNCTION 143f35f94 FUN_143f35f94 body=89 status=ok
// SIG undefined FUN_143f35f94(void)

bool FUN_143f35f94(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f35fdf;
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
LAB_143f35fdf:
  return lVar6 == param_2;
}



// FUNCTION 143f3600a FUN_143f3600a body=118 status=ok
// SIG undefined FUN_143f3600a(void)

void FUN_143f3600a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edf20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ece30;
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



// FUNCTION 143f36080 FUN_143f36080 body=118 status=ok
// SIG undefined FUN_143f36080(void)

void FUN_143f36080(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edf20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ece30;
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



// FUNCTION 143f360f6 FUN_143f360f6 body=156 status=ok
// SIG undefined FUN_143f360f6(void)

void FUN_143f360f6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edf20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ece30;
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
                    /* WARNING: Could not recover jumptable at 0x000143f36182. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f361c0 FUN_143f361c0 body=64 status=ok
// SIG undefined FUN_143f361c0(void)

undefined8 * FUN_143f361c0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ed0a0;
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



// FUNCTION 143f36204 FUN_143f36204 body=81 status=ok
// SIG undefined FUN_143f36204(void)

undefined8 FUN_143f36204(longlong param_1)

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



// FUNCTION 143f3625a FUN_143f3625a body=89 status=ok
// SIG undefined FUN_143f3625a(void)

bool FUN_143f3625a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f362a5;
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
LAB_143f362a5:
  return lVar6 == param_2;
}



// FUNCTION 143f362d0 FUN_143f362d0 body=118 status=ok
// SIG undefined FUN_143f362d0(void)

void FUN_143f362d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e3fb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ed0a0;
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



// FUNCTION 143f36346 FUN_143f36346 body=118 status=ok
// SIG undefined FUN_143f36346(void)

void FUN_143f36346(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e3fb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ed0a0;
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



// FUNCTION 143f363bc FUN_143f363bc body=156 status=ok
// SIG undefined FUN_143f363bc(void)

void FUN_143f363bc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e3fb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ed0a0;
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
                    /* WARNING: Could not recover jumptable at 0x000143f36448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f36486 FUN_143f36486 body=64 status=ok
// SIG undefined FUN_143f36486(void)

undefined8 * FUN_143f36486(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ed180;
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



// FUNCTION 143f364ca FUN_143f364ca body=81 status=ok
// SIG undefined FUN_143f364ca(void)

undefined8 FUN_143f364ca(longlong param_1)

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



// FUNCTION 143f36520 FUN_143f36520 body=89 status=ok
// SIG undefined FUN_143f36520(void)

bool FUN_143f36520(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f3656b;
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
LAB_143f3656b:
  return lVar6 == param_2;
}



// FUNCTION 143f36596 FUN_143f36596 body=118 status=ok
// SIG undefined FUN_143f36596(void)

void FUN_143f36596(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e3fb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ed180;
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



// FUNCTION 143f3660c FUN_143f3660c body=118 status=ok
// SIG undefined FUN_143f3660c(void)

void FUN_143f3660c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e3fb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ed180;
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



// FUNCTION 143f36682 FUN_143f36682 body=156 status=ok
// SIG undefined FUN_143f36682(void)

void FUN_143f36682(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e3fb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ed180;
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
                    /* WARNING: Could not recover jumptable at 0x000143f3670e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f3674c FUN_143f3674c body=64 status=ok
// SIG undefined FUN_143f3674c(void)

undefined8 * FUN_143f3674c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ed490;
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



// FUNCTION 143f36790 FUN_143f36790 body=81 status=ok
// SIG undefined FUN_143f36790(void)

undefined8 FUN_143f36790(longlong param_1)

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



// FUNCTION 143f367e8 FUN_143f367e8 body=89 status=ok
// SIG undefined FUN_143f367e8(void)

bool FUN_143f367e8(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f36833;
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
LAB_143f36833:
  return lVar6 == param_2;
}



// FUNCTION 143f3686a FUN_143f3686a body=118 status=ok
// SIG undefined FUN_143f3686a(void)

void FUN_143f3686a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ed500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ed490;
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



// FUNCTION 143f368e0 FUN_143f368e0 body=118 status=ok
// SIG undefined FUN_143f368e0(void)

void FUN_143f368e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4ed500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ed490;
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



// FUNCTION 143f36956 FUN_143f36956 body=156 status=ok
// SIG undefined FUN_143f36956(void)

void FUN_143f36956(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4ed500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ed490;
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
                    /* WARNING: Could not recover jumptable at 0x000143f369e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f369f2 FUN_143f369f2 body=104 status=ok
// SIG undefined FUN_143f369f2(void)

void FUN_143f369f2(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000143f36a3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143f36a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 143f36a5a FUN_143f36a5a body=101 status=ok
// SIG undefined FUN_143f36a5a(void)

ulonglong FUN_143f36a5a(longlong param_1)

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
LAB_143f36ab4:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_143f36ab4;
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



// FUNCTION 143f36ac2 FUN_143f36ac2 body=64 status=ok
// SIG undefined FUN_143f36ac2(void)

undefined8 * FUN_143f36ac2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ed9b0;
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



// FUNCTION 143f36b06 FUN_143f36b06 body=81 status=ok
// SIG undefined FUN_143f36b06(void)

undefined8 FUN_143f36b06(longlong param_1)

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



// FUNCTION 143f36b5c FUN_143f36b5c body=89 status=ok
// SIG undefined FUN_143f36b5c(void)

bool FUN_143f36b5c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f36ba7;
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
LAB_143f36ba7:
  return lVar6 == param_2;
}



// FUNCTION 143f36bd2 FUN_143f36bd2 body=118 status=ok
// SIG undefined FUN_143f36bd2(void)

void FUN_143f36bd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e3fb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ed9b0;
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



// FUNCTION 143f36c48 FUN_143f36c48 body=118 status=ok
// SIG undefined FUN_143f36c48(void)

void FUN_143f36c48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e3fb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ed9b0;
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



// FUNCTION 143f36cbe FUN_143f36cbe body=156 status=ok
// SIG undefined FUN_143f36cbe(void)

void FUN_143f36cbe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e3fb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ed9b0;
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
                    /* WARNING: Could not recover jumptable at 0x000143f36d4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f36d68 FUN_143f36d68 body=51 status=ok
// SIG undefined FUN_143f36d68(void)

undefined8 FUN_143f36d68(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_143f2d9a0(*(undefined8 *)(param_1 + 0x28),param_2 == '\0');
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143f36d9c FUN_143f36d9c body=64 status=ok
// SIG undefined FUN_143f36d9c(void)

undefined8 * FUN_143f36d9c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4eda90;
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



// FUNCTION 143f36de0 FUN_143f36de0 body=81 status=ok
// SIG undefined FUN_143f36de0(void)

undefined8 FUN_143f36de0(longlong param_1)

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



// FUNCTION 143f36e36 FUN_143f36e36 body=89 status=ok
// SIG undefined FUN_143f36e36(void)

bool FUN_143f36e36(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f36e81;
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
LAB_143f36e81:
  return lVar6 == param_2;
}



// FUNCTION 143f36eac FUN_143f36eac body=118 status=ok
// SIG undefined FUN_143f36eac(void)

void FUN_143f36eac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e3fb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4eda90;
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



// FUNCTION 143f36f22 FUN_143f36f22 body=118 status=ok
// SIG undefined FUN_143f36f22(void)

void FUN_143f36f22(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e3fb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4eda90;
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



// FUNCTION 143f36f98 FUN_143f36f98 body=156 status=ok
// SIG undefined FUN_143f36f98(void)

void FUN_143f36f98(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e3fb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4eda90;
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
                    /* WARNING: Could not recover jumptable at 0x000143f37024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f3706e FUN_143f3706e body=1073 status=ok
// SIG undefined FUN_143f3706e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f3706e(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  wchar_t *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446f470e(&DAT_14cb970c0,L"UNSET",1);
  local_60 = L"AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar1 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb970c8 = (ulonglong)uVar1;
  FUN_140056680(&DAT_14cb970d0,L"NoTravelStations");
  atexit((_func_5014 *)&LAB_143f1fd9c);
  DAT_14cb970e0 = 0;
  atexit((_func_5014 *)&LAB_143f1fdad);
  FUN_140056680(&DAT_14cb97160,L"GameplayEnded");
  atexit((_func_5014 *)&LAB_143f26f35);
  _DAT_14cb97170 = 0;
  DAT_14cb97178 = 0;
  _DAT_14cb97180 = 0;
  DAT_14cb97188 = 0;
  _DAT_14cb97190 = 0;
  _DAT_14cb97198 = 0;
  _DAT_14cb971a0 = 0;
  atexit(FUN_143f26f46);
  DAT_14cb971a8 = 0;
  _DAT_14cb971b0 = 0;
  DAT_14cb971b8 = 0;
  _DAT_14cb971c0 = 0;
  _DAT_14cb971c8 = 0;
  _DAT_14cb971d0 = 0;
  atexit(FUN_143f26f76);
  DAT_14cb971d8 = 0;
  _DAT_14cb971e0 = 0;
  atexit(FUN_143f26fa6);
  DAT_14cb971e8 = 0;
  DAT_14cb971f0 = 0;
  atexit((_func_5014 *)&LAB_143f26fd7);
  FUN_1446f470e(&DAT_14cb971f8,L"recentfriends",1);
  FUN_1446f470e(&DAT_14cb97200,L"partyleader",1);
  FUN_1446f470e(&DAT_14cb97208,L"shiftid",1);
  FUN_1446f470e(&DAT_14cb97210,L"platformid",1);
  FUN_1446f470e(&DAT_14cb97218,L"platformname",1);
  FUN_140056680(&DAT_14cb97220,L"invalidnetid");
  atexit((_func_5014 *)&LAB_143f285ed);
  local_60 = L"Online";
  local_58 = 6;
  FUN_1446e940c(local_64,&local_60);
  local_60 = L"OnlinePresence";
  local_58 = 0xe;
  FUN_1446e940c(local_68,&local_60);
  local_60 = L"Online";
  local_58 = 6;
  FUN_140208c1e(&DAT_14cb97230,local_68,local_64,&local_60);
  atexit((_func_5014 *)&LAB_143f2876f);
  local_60 = L"Offline";
  local_58 = 7;
  FUN_1446e940c(local_64,&local_60);
  local_60 = L"OnlinePresence";
  local_58 = 0xe;
  FUN_1446e940c(local_68,&local_60);
  local_60 = L"Offline";
  local_58 = 7;
  FUN_140208c1e(&DAT_14cb97240,local_68,local_64,&local_60);
  atexit((_func_5014 *)&LAB_143f28783);
  local_60 = L"Away";
  local_58 = 4;
  FUN_1446e940c(local_64,&local_60);
  local_60 = L"OnlinePresence";
  local_58 = 0xe;
  FUN_1446e940c(local_68,&local_60);
  local_60 = L"Away";
  local_58 = 4;
  FUN_140208c1e(&DAT_14cb97250,local_68,local_64,&local_60);
  atexit((_func_5014 *)&LAB_143f28797);
  local_60 = L"DoNotDisturb";
  local_58 = 0xc;
  FUN_1446e940c(local_64,&local_60);
  local_60 = L"OnlinePresence";
  local_58 = 0xe;
  FUN_1446e940c(local_68,&local_60);
  local_60 = L"Do Not Disturb";
  local_58 = 0xe;
  FUN_140208c1e(&DAT_14cb97260,local_68,local_64,&local_60);
  atexit((_func_5014 *)&LAB_143f287ab);
  local_60 = L"Chat";
  local_58 = 4;
  FUN_1446e940c(local_64,&local_60);
  local_60 = L"OnlinePresence";
  local_58 = 0xe;
  FUN_1446e940c(local_68,&local_60);
  local_60 = L"Chat";
  local_58 = 4;
  FUN_140208c1e(&DAT_14cb97270,local_68,local_64,&local_60);
  atexit((_func_5014 *)&LAB_143f287bf);
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f374a1 FUN_143f374a1 body=49 status=ok
// SIG undefined FUN_143f374a1(void)

void FUN_143f374a1(void)

{
  FUN_144760e21(DAT_14cb97470,DAT_14cb97478);
  if (DAT_14cb97470 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143f374f0 FUN_143f374f0 body=513 status=ok
// SIG undefined FUN_143f374f0(void)

void FUN_143f374f0(longlong *param_1,byte *param_2)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  byte bVar7;
  undefined8 *puVar8;
  byte bVar9;
  ConnectionStatus CVar10;
  undefined1 auStack_78 [32];
  longlong *local_58 [2];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = param_1[0x66];
  if (((lVar4 != 0) && (plVar5 = (longlong *)param_1[0x67], plVar5 != (longlong *)0x0)) &&
     (0 < (int)plVar5[1])) {
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    plVar6 = (longlong *)param_1[0x67];
    param_1[0x66] = 0;
    param_1[0x67] = 0;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    if ((char)param_1[100] == '\x01') {
      FUN_143f374f0(param_1,param_1 + 0x61);
    }
    FUN_1401cb356();
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    local_38 = lVar4;
    local_30 = plVar5;
    FUN_140d61352();
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  lVar4 = param_1[0x75];
  if (((lVar4 != 0) && (plVar5 = (longlong *)param_1[0x76], plVar5 != (longlong *)0x0)) &&
     (0 < (int)plVar5[1])) {
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    plVar6 = (longlong *)param_1[0x76];
    param_1[0x75] = 0;
    param_1[0x76] = 0;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    cVar3 = (char)param_1[0x74];
    if (cVar3 != *(char *)((longlong)param_1 + 0x3a1)) {
      *(char *)((longlong)param_1 + 0x3a1) = cVar3;
      CVar10 = 0;
      if ((byte)(cVar3 - 1U) < 3) {
        CVar10 = (byte)(cVar3 - 1U) + 1;
      }
      bifrost::network::setConnectionStatus(CVar10);
    }
    FUN_1401cb356();
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    local_48 = lVar4;
    local_40 = plVar5;
    FUN_140d61352();
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  bVar7 = *param_2;
  if (param_2[1] != bVar7) {
    param_2[1] = bVar7;
    pbVar2 = (byte *)(param_1 + 0x65);
    if (*(char *)((longlong)param_1 + 0x329) == '\x01') {
      bVar9 = *pbVar2;
    }
    else {
      bVar9 = 0;
    }
    if (pbVar2 == param_2) {
      bVar7 = *pbVar2;
    }
    else {
      *(byte *)(param_1 + 0x65) = bVar7;
      *(undefined1 *)((longlong)param_1 + 0x329) = 1;
    }
    if ((bVar7 != bVar9) && ((bVar7 & 1) == 0)) {
      (**(code **)(*param_1 + 0x3c0))(param_1,local_58,param_2);
      (**(code **)(*param_1 + 0x340))(param_1,local_58,0);
      if (local_58[0] != (longlong *)0x0) {
        (**(code **)(*local_58[0] + 0x10))();
      }
    }
    if (*param_2 == 1) {
      (**(code **)(*param_1 + 0x348))(param_1,0);
      puVar8 = (undefined8 *)(*param_1 + 0x3b8);
    }
    else {
      puVar8 = (undefined8 *)(*param_1 + 0x3b0);
    }
    (*(code *)*puVar8)(param_1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f376f2 FUN_143f376f2 body=52 status=ok
// SIG undefined FUN_143f376f2(void)

undefined8 FUN_143f376f2(longlong param_1)

{
  char cVar1;
  ConnectionStatus CVar2;
  
  cVar1 = *(char *)(param_1 + 0x3a0);
  if (cVar1 != *(char *)(param_1 + 0x3a1)) {
    *(char *)(param_1 + 0x3a1) = cVar1;
    CVar2 = 0;
    if ((byte)(cVar1 - 1U) < 3) {
      CVar2 = (byte)(cVar1 - 1U) + 1;
    }
    bifrost::network::setConnectionStatus(CVar2);
  }
  return 0;
}



// FUNCTION 143f37726 FUN_143f37726 body=127 status=ok
// SIG undefined FUN_143f37726(void)

undefined4 FUN_143f37726(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x3a8))(param_1,&local_28);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_148a7ae00();
  }
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f377a6 FUN_143f377a6 body=127 status=ok
// SIG undefined FUN_143f377a6(void)

undefined4 FUN_143f377a6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x3a8))(param_1,&local_28);
  uVar3 = 0;
  if (local_28 != 0) {
    uVar3 = FUN_148a7ae22();
  }
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f37826 FUN_143f37826 body=136 status=ok
// SIG undefined FUN_143f37826(void)

undefined4 FUN_143f37826(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x3a8))(param_1,&local_28);
  if ((local_28 == 0) || (*(longlong *)(local_28 + 0x50) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_146586100();
  }
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f378b0 FUN_143f378b0 body=995 status=ok
// SIG undefined FUN_143f378b0(void)

void FUN_143f378b0(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 auStack_318 [32];
  longlong *local_2f8;
  undefined4 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined2 *local_2d8;
  undefined1 *local_2d0;
  undefined1 *local_2c8;
  undefined1 **local_2c0;
  undefined1 *local_2b8;
  code *local_2b0;
  longlong local_2a0 [4];
  undefined1 local_280;
  undefined1 local_278 [32];
  undefined1 local_258 [32];
  byte local_238 [8];
  longlong local_230 [4];
  undefined1 local_210;
  undefined1 local_208 [32];
  undefined1 local_1e8 [40];
  longlong local_1c0 [4];
  undefined1 local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  undefined1 local_178 [32];
  byte local_158;
  undefined1 *local_150 [2];
  longlong local_140;
  undefined1 local_130 [32];
  byte local_110;
  undefined1 local_108 [32];
  longlong local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined1 local_c0 [152];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_318;
  lVar4 = (**(code **)(*param_1 + 0x2d0))();
  if (lVar4 != 0) {
    if (DAT_14cb5e538 == 0) {
      local_2c0 = local_150;
      local_150[0] = &LAB_1417c5d06;
      local_2b0 = FUN_14081d0ea;
      local_2b8 = &LAB_1417ad04a;
      local_2c8 = &LAB_1486a7af7;
      local_2d0 = &LAB_1464e1631;
      local_2d8 = &DAT_149e063b2;
      local_2e0 = 0;
      local_2e8 = 0x1000000c;
      local_2f0 = 8;
      local_2f8 = (longlong *)CONCAT44(local_2f8._4_4_,0x420);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
    }
    if (((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) == DAT_14cb5e538 + 0x30)) &&
       (0 < *(int *)(lVar4 + 0x40))) {
      lVar4 = **(longlong **)(lVar4 + 0x38);
      if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
        FUN_14689c22e(lVar4);
      }
      else if (lVar4 == 0) goto LAB_143f3790d;
      uVar1 = *(undefined4 *)(lVar4 + 0xe0);
      lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
      if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) {
        lVar5 = FUN_141028a6c();
        if (lVar5 != 0) {
          lVar5 = FUN_140d75dd6(lVar5,uVar1);
          if ((lVar5 != 0) && (*(char *)(lVar5 + 0x21) != '\0')) goto LAB_143f3790d;
        }
      }
      plVar6 = (longlong *)FUN_140773fe2();
      if (plVar6 != (longlong *)0x0) {
        uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
        lVar5 = (**(code **)(*plVar6 + 0x2d0))(plVar6,uVar1,uVar7);
        if (lVar5 != 0) {
          bVar3 = bifrost::NAT::canDetect();
          if (bVar3) {
            bifrost::NAT::detect(*(User **)(lVar5 + 0x2b8));
          }
          iVar2 = *(int *)(lVar5 + 0x36c);
          lVar5 = (longlong)iVar2;
          if (lVar5 == 1) {
            (**(code **)(*param_1 + 0x3f0))(param_1,lVar4);
          }
          if ((int)param_1[0x96] != iVar2) {
            *(int *)(param_1 + 0x96) = iVar2;
            local_2f8 = local_1c0;
            local_1a0 = 2;
            local_1c0[0] = lVar5;
            FUN_140d767d6(&local_198,&DAT_14c9a33a0,3,L"nat_type");
            if ((*(longlong *)(local_198 + 0x3c) == 0) || (*(char *)(local_198 + 0x38) < local_190))
            {
              local_2f8 = local_2a0;
              local_280 = 2;
              puVar8 = local_278;
              local_2a0[0] = lVar5;
              FUN_140d767d6(puVar8,&DAT_14c9a33a0,3,L"nat_type");
              bVar3 = false;
            }
            else {
              local_2f8 = local_230;
              local_210 = 2;
              puVar8 = local_208;
              local_230[0] = lVar5;
              FUN_140d767d6(puVar8,&DAT_14c9a33a0,3,L"nat_type");
              bVar3 = true;
            }
            FUN_140d76846(local_150,puVar8);
            FUN_14027c224(local_c0,local_150);
            FUN_14027c198(local_c0);
            FUN_1404eec70(local_d8,local_d0);
            if (local_d8 != 0) {
              FUN_1400020a8();
            }
            FUN_1404eecb3(local_e8,local_e0);
            if (local_e8 != 0) {
              FUN_1400020a8();
            }
            FUN_1404eec06(local_108);
            (*(code *)(&PTR_FUN_14a1842f0)[local_110])(local_130);
            if (local_140 != 0) {
              FUN_1400020a8();
            }
            if (bVar3) {
              puVar8 = local_1e8;
            }
            else {
              puVar8 = local_258;
            }
            (*(code *)(&PTR_FUN_14a1842f0)[(byte)puVar8[0x20]])(puVar8);
            if (*(longlong *)(puVar8 + -0x10) != 0) {
              FUN_1400020a8();
            }
            (*(code *)(&PTR_FUN_14a1842f0)[local_158])(local_178);
            if (local_188 != 0) {
              FUN_1400020a8();
            }
          }
        }
      }
    }
  }
LAB_143f3790d:
  if ((local_28 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f37c94 FUN_143f37c94 body=774 status=ok
// SIG undefined FUN_143f37c94(void)

void FUN_143f37c94(longlong *param_1,ulonglong param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  ulonglong uStack_b0;
  wchar_t *local_a0;
  undefined4 local_98;
  ulonglong local_94;
  undefined8 uStack_8c;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_5c [4];
  longlong *local_58 [2];
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a0 = L"教s潎伀N湯漀晦渀縀㸀";
  local_98 = 3;
  local_94 = local_94 & 0xffffffffffffff00;
  uVar3 = FUN_14001a6c0(&local_a0,1);
  if (uVar3 != param_2) {
    local_a0 = L"NoRemind";
    local_98 = 8;
    local_94 = local_94 & 0xffffffffffffff00;
    uVar3 = FUN_14001a6c0(&local_a0,1);
    if ((((uVar3 == param_2) && (lVar5 = (**(code **)(*param_1 + 0x180))(param_1), lVar5 != 0)) &&
        (*(longlong *)(lVar5 + 0x1f0) != 0)) &&
       (((lVar5 = FUN_141028a6c(), lVar5 != 0 && (lVar5 = FUN_140d75dd6(lVar5,param_3), lVar5 != 0))
        && (*(char *)(lVar5 + 0x21) == '\0')))) {
      *(undefined1 *)(lVar5 + 0x21) = 1;
      FUN_1459703e8(lVar5);
    }
    goto LAB_143f37ec4;
  }
  plVar4 = (longlong *)FUN_140a68038(1);
  if (plVar4 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x70))(plVar4,&local_48);
    if (local_48 != (longlong *)0x0) {
      local_a0 = L"NATHelpURL_Default";
      local_98 = 0x12;
      FUN_1446e940c(&local_b8,&local_a0);
      local_a0 = L"GbxOnlineSessionClient";
      local_98 = 0x16;
      FUN_1446e940c(local_5c,&local_a0);
      local_a0 = 
      L"https://support.gearboxsoftware.com/hc/en-us/articles/360033290092-General-Network-Troubleshooting"
      ;
      local_98 = 0x62;
      FUN_140208c1e(local_58,local_5c,&local_b8,&local_a0);
      plVar4 = local_48;
      local_a0 = (wchar_t *)((ulonglong)local_a0 & 0xffffff0000000000);
      local_94 = 0;
      uStack_8c = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_b8 = (undefined8 *)0x0;
      uStack_b0 = 0;
      plVar6 = local_58[0];
      local_98 = param_3;
      if (*(code **)(*local_58[0] + 0x50) != FUN_144828418) {
        plVar6 = (longlong *)(**(code **)(*local_58[0] + 0x50))();
      }
      FUN_1447a1fc0(plVar6);
      pcVar2 = *(code **)(*local_58[0] + 0x28);
      if (pcVar2 == FUN_14482841c) {
        plVar6 = local_58[0] + 3;
        if (local_58[0][5] != 0) {
          plVar6 = (longlong *)(local_58[0][5] + 8);
        }
      }
      else if (pcVar2 == (code *)&LAB_14010c34c) {
        plVar6 = local_58[0] + 2;
      }
      else {
        plVar6 = (longlong *)(*pcVar2)(local_58[0]);
      }
      (**(code **)(*plVar4 + 0x38))(plVar4,plVar6,&local_a0,&local_b8);
      if ((int)uStack_b0 == 0) {
LAB_143f37f4d:
        if (local_b8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_b8 != (undefined8 *)0x0) {
        (**(code **)*local_b8)(local_b8,0);
        FUN_1446efa72(&local_b8,0,0,0x10);
        uStack_b0 = uStack_b0 & 0xffffffff00000000;
        goto LAB_143f37f4d;
      }
      FUN_148a3c424(&local_a0);
      if (local_58[0] != (longlong *)0x0) {
        (**(code **)(*local_58[0] + 0x10))();
      }
    }
  }
  plVar4 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_40 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_143f37ec4:
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f37f9b FUN_143f37f9b body=66 status=ok
// SIG undefined FUN_143f37f9b(void)

void FUN_143f37f9b(void)

{
  if (DAT_14cb974b0 != -1) {
    if (DAT_14cb974a0 != 0) {
      FUN_1400020a8();
    }
    DAT_14cb974a0 = 0;
    DAT_14cb974a8 = 0;
    DAT_14cb974b0 = -1;
  }
  return;
}



// FUNCTION 143f37fde FUN_143f37fde body=182 status=ok
// SIG undefined FUN_143f37fde(void)

undefined4 FUN_143f37fde(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x3a8))(param_1,&local_30);
  uVar3 = 0;
  if ((local_30 != 0) && (*param_2 != 0)) {
    FUN_140b7124e();
    if (*(longlong *)(local_30 + 0x50) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_14625a7e8(*(longlong *)(local_30 + 0x50),local_40);
    }
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f380f4 FUN_143f380f4 body=42 status=ok
// SIG undefined FUN_143f380f4(void)

undefined8 FUN_143f380f4(undefined8 param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"%s.%s",&DAT_149dfb77a,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 143f3811e FUN_143f3811e body=47 status=ok
// SIG undefined FUN_143f3811e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f3811e(void)

{
  _DAT_14cb97540 = 0;
  if (DAT_14cb97538 != 0) {
    FUN_1400020a8();
  }
  FUN_1459740fc(&DAT_14cb974f8);
  return;
}



// FUNCTION 143f3814d FUN_143f3814d body=47 status=ok
// SIG undefined FUN_143f3814d(void)

void FUN_143f3814d(void)

{
  DAT_14cb97590 = 0;
  if (DAT_14cb97588 != 0) {
    FUN_1400020a8();
  }
  FUN_145d43c70(&DAT_14cb97548);
  return;
}



// FUNCTION 143f3817c FUN_143f3817c body=47 status=ok
// SIG undefined FUN_143f3817c(void)

void FUN_143f3817c(void)

{
  DAT_14cb975e0 = 0;
  if (DAT_14cb975d8 != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(&DAT_14cb97598);
  return;
}



// FUNCTION 143f381ab FUN_143f381ab body=49 status=ok
// SIG undefined FUN_143f381ab(void)

void FUN_143f381ab(void)

{
  FUN_144760e21(DAT_14cb975f0,DAT_14cb975f8);
  if (DAT_14cb975f0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143f381dc FUN_143f381dc body=47 status=ok
// SIG undefined FUN_143f381dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f381dc(void)

{
  _DAT_14cb97658 = 0;
  if (DAT_14cb97650 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&DAT_14cb97610);
  return;
}



// FUNCTION 143f3820c FUN_143f3820c body=786 status=ok
// SIG undefined FUN_143f3820c(void)

undefined8 * FUN_143f3820c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  int local_48;
  longlong *local_40;
  longlong *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_4 == '\0') {
    *param_1 = 0;
    iVar3 = *(int *)(param_2 + 1);
    pvVar1 = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar3;
    if ((longlong)iVar3 != 0) {
      FUN_1446dd670(param_1,iVar3,0);
      memcpy((void *)*param_1,pvVar1,(longlong)iVar3 * 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140474144(&local_50);
    iVar3 = local_48 + -1;
    if (local_48 == 0) {
      iVar3 = 0;
    }
    if (0 < iVar3) {
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
      } while (iVar3 != iVar5);
    }
    iVar3 = FUN_1457511aa(&DAT_14cb97610);
    lVar2 = (longlong)iVar3 * 0x28 + DAT_14cb97610;
    if (lVar2 == 0 || iVar3 == -1) {
      iVar3 = local_48 + -1;
      if (local_48 == 0) {
        iVar3 = 0;
      }
      if (0 < iVar3) {
        iVar5 = 0;
        do {
          iVar5 = iVar5 + 1;
        } while (iVar3 != iVar5);
      }
      FUN_140002266(&local_60,L"VaultHunter%u");
      puVar4 = local_60;
      if (local_58 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      iVar3 = local_58 + -1;
      if (local_58 == 0) {
        iVar3 = 0;
      }
      iVar5 = 0x10;
      if (iVar3 < 0x10) {
        iVar5 = iVar3;
      }
      if (iVar5 < 1) {
        iVar5 = 0;
      }
      FUN_14006620a(local_70,puVar4,iVar5);
      local_40 = &local_50;
      local_38 = local_70;
      FUN_140ac5c08(&DAT_14cb97610,&local_2c,&local_40,0);
      lVar2 = DAT_14cb97610;
      *param_1 = 0;
      iVar3 = *(int *)(lVar2 + 0x18 + (longlong)local_2c * 0x28);
      pvVar1 = *(void **)(lVar2 + 0x10 + (longlong)local_2c * 0x28);
      *(int *)(param_1 + 1) = iVar3;
      if ((longlong)iVar3 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar3,0);
        memcpy((void *)*param_1,pvVar1,(longlong)iVar3 * 2);
      }
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      *param_1 = 0;
      iVar3 = *(int *)(lVar2 + 0x18);
      pvVar1 = *(void **)(lVar2 + 0x10);
      *(int *)(param_1 + 1) = iVar3;
      if ((longlong)iVar3 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar3,0);
        memcpy((void *)*param_1,pvVar1,(longlong)iVar3 * 2);
      }
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f3857a FUN_143f3857a body=247 status=ok
// SIG undefined FUN_143f3857a(void)

undefined8 * FUN_143f3857a(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 2) = param_3;
  *(int *)((longlong)param_1 + 0x14) = param_4;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_4 == 0) {
    if (1 < DAT_14cb97678) {
      local_30 = &DAT_14cb97670;
      local_28 = &DAT_14cb97690;
      FUN_140ac5c08(param_1 + 4,local_1c,&local_30,0);
    }
    FUN_14101d2ea();
    if (1 < DAT_14cb977e8) {
      local_30 = &DAT_14cb977e0;
      local_28 = &DAT_14cb97770;
      FUN_140ac5c08(param_1 + 4,local_1c,&local_30,0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f38760 FUN_143f38760 body=505 status=ok
// SIG undefined FUN_143f38760(void)

void FUN_143f38760(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = *(longlong **)(param_1 + 0x3f8);
  if (plVar4 != (longlong *)0x0) {
    lVar3 = plVar4[8];
    if ((longlong)(int)lVar3 != 0) {
      lVar6 = plVar4[7];
      lVar7 = 0;
      do {
        FUN_1461bd540(param_1,*(undefined8 *)(lVar6 + lVar7),2);
        lVar7 = lVar7 + 0x10;
      } while ((longlong)(int)lVar3 * 0x10 != lVar7);
      plVar4 = *(longlong **)(param_1 + 0x3f8);
    }
    lVar3 = *plVar4;
    if ((lVar3 != 0) && ((longlong)(int)plVar4[0x17] != 0)) {
      lVar6 = 0;
      do {
        if (*(int *)(plVar4[0x16] + lVar6) == 0xb) {
          plVar4 = (longlong *)plVar4[1];
          local_58 = lVar3;
          local_50 = plVar4;
          if (plVar4 == (longlong *)0x0) {
            FUN_1461bd540(param_1,&local_58,2);
          }
          else {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            FUN_1461bd540(param_1,&local_58,2);
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
          }
          plVar4 = *(longlong **)(param_1 + 0x3f8);
          break;
        }
        lVar6 = lVar6 + 4;
      } while ((longlong)(int)plVar4[0x17] * 4 != lVar6);
    }
    uVar5 = FUN_148a9602b(*(undefined4 *)plVar4[0x16]);
    FUN_140056680(local_68,uVar5);
    FUN_1414f3eb8(&local_58,param_1 + 0x28,&DAT_14cb976e0,local_68);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1458291a6(param_1,&local_58,*(undefined8 *)(param_1 + 0x3f8));
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    plVar4 = *(longlong **)(param_1 + 0x400);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x400) = 0;
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
    FUN_146202586(param_1);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f3895a FUN_143f3895a body=854 status=ok
// SIG undefined FUN_143f3895a(void)

void FUN_143f3895a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_a8 [32];
  undefined8 **local_88;
  undefined4 local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_5c;
  undefined8 *local_58;
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x54) != 3) goto LAB_143f38abc;
  FUN_140b7090e(param_1,&local_40,param_2);
  if ((local_40 != 0) && (*(char *)(local_40 + 0x18) == '\0')) {
    local_48 = 0;
    iVar3 = *(int *)(param_1 + 0x78);
    if ((longlong)iVar3 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x70);
      lVar10 = 0;
      uVar8 = 0;
      do {
        if (*(char *)(*(longlong *)(lVar4 + lVar10) + 0x18) != '\0') {
          if ((int)uVar8 < iVar3 && -1 < (int)uVar8) {
            lVar10 = (ulonglong)(uVar8 & 0x7fffffff) * 0x10;
            puVar5 = *(undefined8 **)(lVar4 + lVar10);
            plVar9 = *(longlong **)(lVar4 + 8 + lVar10);
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
              UNLOCK();
            }
            if ((puVar5 != (undefined8 *)0x0) && (*(int *)((longlong)puVar5 + 0x14) == 0)) {
              local_58 = (undefined8 *)*puVar5;
              local_50 = (longlong *)puVar5[1];
              if (local_50 == (longlong *)0x0) {
                plVar11 = (longlong *)0x0;
              }
              else {
                LOCK();
                *(int *)(local_50 + 1) = (int)local_50[1] + 1;
                UNLOCK();
                plVar11 = local_50;
              }
              uVar7 = FUN_145ce2ae6(lVar10,&local_58);
              local_48 = FUN_14119d510(param_1,uVar7);
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar11 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
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
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              plVar11 = plVar9 + 1;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)*plVar11 == 0) {
                (**(code **)*plVar9)(plVar9);
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                }
              }
            }
          }
          break;
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((longlong)iVar3 << 4 != lVar10);
    }
    if (local_48 == 0) {
      if (0 < *(int *)(*(longlong *)(param_1 + 0x38) + 0x40)) {
        lVar4 = **(longlong **)(*(longlong *)(param_1 + 0x38) + 0x38);
        if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
          FUN_14689c22e(lVar4);
        }
        else if (lVar4 == 0) goto LAB_143f38a95;
        local_48 = FUN_14119d510(param_1,*(undefined4 *)(lVar4 + 0xe0));
        if (local_48 != 0) goto LAB_143f38ae2;
      }
    }
    else {
LAB_143f38ae2:
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      local_58 = (undefined8 *)0x0;
      local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
      FUN_1446efa72(&local_58,0,2,0x10);
      local_50 = (longlong *)CONCAT44(local_50._4_4_,2);
      *local_58 = &PTR_LAB_14b4f3a00;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_58[2] = lVar10;
      *local_58 = &PTR_FUN_14b4f0290;
      local_70 = *param_2;
      local_68 = (longlong *)param_2[1];
      if (local_68 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_68 + 1) = (int)local_68[1] + 1;
        UNLOCK();
        plVar9 = local_68;
      }
      local_5c = FUN_145829596(&PTR_FUN_14b4f0290,&local_70);
      local_74 = FUN_14119d564(param_1);
      local_88 = &local_58;
      FUN_148a96b86(uVar6,&local_48,&local_74,&local_5c);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar9 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      if ((int)local_50 != 0) {
        if (local_58 == (undefined8 *)0x0) goto LAB_143f38a95;
        (**(code **)*local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
      }
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143f38a95:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_38 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_143f38abc:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f38cb2 FUN_143f38cb2 body=16 status=ok
// SIG undefined FUN_143f38cb2(void)

int FUN_143f38cb2(longlong param_1)

{
  return (*(int *)(param_1 + 0x430) + *(int *)(param_1 + 0x78)) - *(int *)(param_1 + 0x45c);
}



// FUNCTION 143f38cc2 FUN_143f38cc2 body=918 status=ok
// SIG undefined FUN_143f38cc2(void)

void FUN_143f38cc2(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  void *_Src;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong local_d0;
  longlong *local_c8;
  longlong local_c0;
  int local_b8;
  longlong local_b0 [2];
  longlong local_a0;
  longlong local_90;
  void *local_80;
  uint local_78;
  longlong local_70 [2];
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(param_1 + 0x54) != 3) goto LAB_143f38d92;
  cVar9 = FUN_1414e62ca();
  if (cVar9 == '\0') goto LAB_143f38d92;
  FUN_140b7090e(param_1,&local_58,param_2);
  if ((local_58 != 0) && (0 < *(int *)(*(longlong *)(param_1 + 0x38) + 0x40))) {
    lVar5 = **(longlong **)(*(longlong *)(param_1 + 0x38) + 0x38);
    if ((DAT_14c950c29 == '\x01') && (lVar5 != 0)) {
      FUN_14689c22e(lVar5);
    }
    else if (lVar5 == 0) goto LAB_143f38d68;
    local_60 = FUN_14119d510(param_1,*(undefined4 *)(lVar5 + 0xe0));
    if (local_60 != 0) {
      if (*(longlong *)(param_1 + 0x60) == 0) {
        FUN_140056680(local_70,L"unset");
      }
      else {
        FUN_14119d664(*(longlong *)(param_1 + 0x60),local_70);
      }
      uVar4 = *(uint *)(param_3 + 1);
      if ((int)uVar4 < 2) {
        FUN_140056680(&local_80,L"unset");
      }
      else {
        local_80 = (void *)0x0;
        _Src = (void *)*param_3;
        local_78 = uVar4;
        FUN_1446dd670(&local_80,(ulonglong)uVar4,0);
        memcpy(local_80,_Src,(ulonglong)uVar4 * 2);
      }
      FUN_1414f3eb8(local_b0,param_1 + 0x28,&DAT_14cb97710,&local_80);
      plVar8 = local_50;
      local_d0 = local_58;
      local_c8 = local_50;
      if (local_50 == (longlong *)0x0) {
        FUN_148a96de4(param_1,&local_c0,&local_d0);
      }
      else {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        FUN_148a96de4(param_1,&local_c0);
        if (plVar8 != (longlong *)0x0) {
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
      }
      local_d4 = FUN_14119d564(param_1);
      FUN_145829440(local_b0,&local_d0,local_70);
      lVar5 = local_c0;
      lVar11 = (longlong)local_b8;
      if (lVar11 != 0) {
        lVar10 = 0;
        do {
          uVar6 = *(undefined8 *)(param_1 + 0x40);
          puVar7 = *(undefined8 **)(lVar5 + lVar10);
          local_e8 = *puVar7;
          plVar8 = (longlong *)puVar7[1];
          if (plVar8 == (longlong *)0x0) {
            local_e0 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            local_e0 = plVar8;
          }
          plVar2 = local_e0;
          local_d8 = FUN_145829596(puVar7,&local_e8);
          local_f8 = &local_d0;
          FUN_148a97058(uVar6,&local_60,&local_d4,&local_d8);
          if (plVar2 != (longlong *)0x0) {
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
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
          if (plVar8 != (longlong *)0x0) {
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
          lVar10 = lVar10 + 0x10;
        } while (lVar11 * 0x10 != lVar10);
      }
      if (local_d0 != 0) {
        FUN_1400020a8();
      }
      FUN_14101cee4(local_c0,local_b8);
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      if (local_b0[0] != 0) {
        FUN_1400020a8();
      }
      if (local_80 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143f38d68:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_50 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
LAB_143f38d92:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f3905a FUN_143f3905a body=285 status=ok
// SIG undefined FUN_143f3905a(void)

void FUN_143f3905a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined1 auStack_a8 [32];
  code **local_88;
  undefined8 local_78;
  longlong *local_70;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(param_1 + 0x54) == 3) &&
     (((*(longlong *)(param_1 + 0x158) == 0 || (*(longlong *)(param_1 + 0x160) == 0)) ||
      (*(int *)(*(longlong *)(param_1 + 0x160) + 8) < 1)))) {
    uVar3 = FUN_1401cb356();
    local_88 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14b4f0a60;
    local_68[0] = FUN_143f3f0ce;
    local_40 = param_1;
    FUN_1401cbba4(uVar3,&local_78,L"FGbxParty::UpdateCustomProperties",0);
    *(undefined8 *)(param_1 + 0x158) = local_78;
    local_78 = 0;
    plVar2 = *(longlong **)(param_1 + 0x160);
    *(longlong **)(param_1 + 0x160) = local_70;
    local_70 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_70 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))();
        }
      }
    }
    if (local_68[0] != (code *)0x0) {
      pppuVar4 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar4 = &local_48;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f39178 FUN_143f39178 body=5 status=ok
// SIG undefined FUN_143f39178(void)

undefined8 FUN_143f39178(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// FUNCTION 143f3917e FUN_143f3917e body=1090 status=ok
// SIG undefined FUN_143f3917e(void)

void FUN_143f3917e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_5c;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  undefined8 *local_38;
  int local_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)((longlong)param_1 + 0x54) != 2) goto LAB_143f3919c;
  if ((param_2 == 0) && (param_1[0xc] != 0)) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 3;
    (**(code **)(*param_1 + 0x90))(param_1,3);
    FUN_143f39a38(param_1[0xc]);
    if ((int)param_1[0xb] != *(int *)(param_1[0xc] + 0x50)) {
      *(int *)(param_1 + 0xb) = *(int *)(param_1[0xc] + 0x50);
      (**(code **)(*param_1 + 0x88))(param_1);
    }
    FUN_1461ffd70(param_1,0);
    lVar4 = param_1[0x6c];
    if (lVar4 != 0) {
      plVar3 = (longlong *)param_1[0x6d];
      local_48 = lVar4;
      local_40 = plVar3;
      if (plVar3 == (longlong *)0x0) {
        FUN_140b7090e(param_1,&local_38,&local_48);
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        FUN_140b7090e(param_1,&local_38);
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
      }
      if (local_38 == (undefined8 *)0x0) {
        local_48 = param_1[0x6c];
        local_40 = (longlong *)param_1[0x6d];
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        local_68 = 1;
        FUN_141647a44(param_1,local_58,&local_48,1);
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_50 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
        plVar3 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_40)(local_40);
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
      else if (*(char *)(local_38 + 3) == '\0') {
        *(undefined1 *)(local_38 + 3) = 1;
      }
      plVar3 = (longlong *)CONCAT44(uStack_2c,local_30);
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
      param_1[0x6c] = 0;
      plVar3 = (longlong *)param_1[0x6d];
      if (plVar3 != (longlong *)0x0) {
        param_1[0x6d] = 0;
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
    }
    if (0 < *(int *)(param_1[7] + 0x40)) {
      lVar4 = **(longlong **)(param_1[7] + 0x38);
      if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
        FUN_14689c22e(lVar4);
      }
      else if (lVar4 == 0) goto LAB_143f39555;
      local_48 = FUN_14119d510(param_1,*(undefined4 *)(lVar4 + 0xe0));
      if (local_48 != 0) {
        lVar4 = param_1[8];
        local_38 = (undefined8 *)0x0;
        local_30 = 0;
        FUN_1446efa72(&local_38,0,2,0x10);
        local_30 = 2;
        *local_38 = &PTR_LAB_14b4f3a70;
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
        local_38[2] = lVar6;
        *local_38 = &PTR_FUN_14b4f1110;
        local_38[3] = param_1;
        local_5c = FUN_14119d564(param_1);
        FUN_1461442d4(lVar4,&local_48,&local_5c,&local_38);
        if (local_30 != 0) {
          if (local_38 == (undefined8 *)0x0) goto LAB_143f39555;
          (**(code **)*local_38)(local_38,0);
          FUN_1446efa72(&local_38,0,0,0x10);
          local_30 = 0;
        }
        if (local_38 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  else {
    FUN_14101cee4(param_1[0xe],(int)param_1[0xf]);
    *(undefined4 *)(param_1 + 0xf) = 0;
    if (*(int *)((longlong)param_1 + 0x7c) != 0) {
      FUN_145a3b78c(param_1 + 0xe);
    }
    FUN_145a3b7bc(param_1);
    if (*(int *)((longlong)param_1 + 0x54) != 0) {
      *(undefined4 *)((longlong)param_1 + 0x54) = 0;
      (**(code **)(*param_1 + 0x90))(param_1,0);
    }
    if (param_1[0xc] != 0) {
      param_1[0xc] = 0;
      plVar3 = (longlong *)param_1[0xd];
      if (plVar3 != (longlong *)0x0) {
        param_1[0xd] = 0;
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
    }
  }
LAB_143f39555:
  if ((char)param_1[0x68] == '\x01') {
    FUN_145deef54(param_1 + 0x3a);
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  FUN_146583638(param_1);
  (**(code **)(*param_1 + 0x30))(param_1,param_2);
  if (param_2 == 0) {
    FUN_148a9743e(param_1);
  }
LAB_143f3919c:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f395c2 FUN_143f395c2 body=251 status=ok
// SIG undefined FUN_143f395c2(void)

void FUN_143f395c2(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != -1) && (lVar1 = *(longlong *)(param_1 + 0x60), lVar1 != 0)) {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    FUN_1446efa72(&local_38,0,3,0x10);
    local_30 = 3;
    *local_38 = &PTR_LAB_14b4edb10;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_38[2] = lVar3;
    *local_38 = &PTR_FUN_14b4f1430;
    local_38[3] = param_1;
    *(int *)(local_38 + 4) = param_2;
    FUN_143f3a7da(lVar1,param_2,&local_38);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_148a98090(param_1,param_2,0xe);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f396ca FUN_143f396ca body=876 status=ok
// SIG undefined FUN_143f396ca(void)

ulonglong FUN_143f396ca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  bool bVar15;
  longlong in_stack_00000028;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_70;
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  uStack_40 = 0;
  FUN_145e34e2c(in_stack_00000028 + 0x28);
  if ((int)uStack_40 == DAT_14cb97808) {
    if (1 < (int)uStack_40) {
      lVar7 = 0;
      while( true ) {
        uVar10 = *(ushort *)(local_48 + lVar7);
        uVar9 = (ulonglong)uVar10;
        uVar11 = *(ushort *)(DAT_14cb97800 + lVar7);
        if (uVar10 != uVar11) break;
        if (uVar10 == 0) goto LAB_143f39788;
LAB_143f3974b:
        lVar7 = lVar7 + 2;
      }
      if ((uVar11 | uVar10) < 0x80) {
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        uVar13 = (ulonglong)uVar11;
        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
        if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar13]) goto LAB_143f3974b;
      }
      if (uVar10 != uVar11) goto LAB_143f39859;
    }
LAB_143f39788:
    if ((*(int *)(param_1 + 0x54) == 2) && (*(char *)(param_1 + 0x340) == '\x01')) {
      FUN_141551f14(param_1 + 0x1d0,&local_58);
      FUN_141551f14(in_stack_00000028,&local_68);
      if (local_50 == local_60) {
        bVar15 = true;
        if (1 < local_50) {
          lVar7 = 0;
          while( true ) {
            uVar10 = *(ushort *)(local_58 + lVar7);
            uVar4 = (uint)uVar10;
            uVar11 = *(ushort *)(local_68 + lVar7);
            uVar12 = (uint)uVar11;
            if (uVar10 != uVar11) {
              if ((uVar11 | uVar10) < 0x80) {
                uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar10];
                uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar11];
                if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar11]) goto LAB_143f397fd;
              }
              iVar5 = uVar4 - uVar12;
              goto LAB_143f39837;
            }
            if (uVar10 == 0) break;
LAB_143f397fd:
            lVar7 = lVar7 + 2;
          }
          iVar5 = 0;
LAB_143f39837:
          bVar15 = iVar5 == 0;
        }
      }
      else {
        bVar15 = local_60 + local_50 == 1;
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (bVar15) {
        FUN_146583638(param_1);
        uVar9 = CONCAT71((int7)((ulonglong)&local_58 >> 8),1);
        if (*(longlong *)(param_1 + 0x60) != 0) goto LAB_143f3985b;
        uVar3 = *(undefined8 *)(param_1 + 0x48);
        plVar6 = (longlong *)FUN_14001cc68(0x70,0x10);
        plVar6[1] = (longlong)&DAT_100000001;
        *plVar6 = (longlong)&PTR_FUN_14b4f0c80;
        FUN_145c08d38(plVar6 + 2,*(undefined8 *)(param_1 + 0x38),uVar3);
        plVar6[2] = (longlong)&PTR_FUN_14b4ef690;
        plVar6[0xc] = 0;
        *(undefined4 *)(plVar6 + 0xd) = 0;
        if (plVar6 == (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x60) = 0x10;
          plVar14 = *(longlong **)(param_1 + 0x68);
          if (plVar14 != (longlong *)0x0) {
            *(undefined8 *)(param_1 + 0x68) = 0;
LAB_143f39935:
            LOCK();
            plVar1 = plVar14 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar14)(plVar14);
              LOCK();
              piVar2 = (int *)((longlong)plVar14 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
            }
            if (plVar6 != (longlong *)0x0) goto LAB_143f3997a;
          }
        }
        else {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          *(longlong **)(param_1 + 0x60) = plVar6 + 2;
          plVar14 = *(longlong **)(param_1 + 0x68);
          if (plVar6 == plVar14) {
            LOCK();
            plVar14 = plVar6 + 1;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)*plVar14 == 0) {
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
          else {
            *(longlong **)(param_1 + 0x68) = plVar6;
            if (plVar14 != (longlong *)0x0) goto LAB_143f39935;
          }
LAB_143f3997a:
          LOCK();
          plVar14 = plVar6 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
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
        uVar3 = *(undefined8 *)(param_1 + 0x60);
        local_78 = (undefined8 *)0x0;
        local_70 = 0;
        FUN_1446efa72(&local_78,0,3,0x10);
        local_70 = 3;
        *local_78 = &PTR_LAB_14b4edb10;
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar8 == 0) {
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        local_78[2] = lVar8;
        *local_78 = &PTR_FUN_14b4f10a0;
        local_78[3] = param_1;
        local_78[4] = &LAB_1414b9c40;
        FUN_14166d06a(uVar3,in_stack_00000028,&local_78);
        goto LAB_143f3985b;
      }
    }
  }
  else if (DAT_14cb97808 + (int)uStack_40 == 1) goto LAB_143f39788;
LAB_143f39859:
  uVar9 = 0;
LAB_143f3985b:
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 143f39a38 FUN_143f39a38 body=199 status=ok
// SIG undefined FUN_143f39a38(void)

void FUN_143f39a38(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 10) = 0;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x10))();
  if (plVar3 == (longlong *)0x0) {
    local_28 = (longlong *)0x0;
    plStack_20 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_28);
    if (local_28 != (longlong *)0x0) {
      lVar4 = (**(code **)(*local_28 + 0x380))(local_28,param_1[2]);
      if (lVar4 != 0) {
        if ((*(char *)(lVar4 + 0x12) != '\0') ||
           ((uVar5 = 2, *(char *)(lVar4 + 0x17) == '\x01' &&
            (uVar5 = 1, *(char *)(lVar4 + 0x18) == '\0')))) {
          uVar5 = 0;
        }
        *(undefined4 *)(param_1 + 10) = uVar5;
      }
    }
  }
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f39b00 FUN_143f39b00 body=76 status=ok
// SIG undefined FUN_143f39b00(void)

void FUN_143f39b00(longlong param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_148a98090(param_1,*(undefined4 *)(param_1 + 0x3e0),2);
    FUN_146583638(param_1);
    return;
  }
  if (*(int *)(param_1 + 0x54) == 2) {
    FUN_143f3917e(param_1,2);
    return;
  }
  return;
}



// FUNCTION 143f39b4c FUN_143f39b4c body=535 status=ok
// SIG undefined FUN_143f39b4c(void)

void FUN_143f39b4c(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)((longlong)param_1 + 0x54) == 3) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 4;
    (**(code **)(*param_1 + 0x90))(param_1,4);
    if (((param_1[0x2b] != 0) && (param_1[0x2c] != 0)) && (0 < *(int *)(param_1[0x2c] + 8))) {
      FUN_1401cb356();
      local_30 = param_1[0x2b];
      local_28 = param_1[0x2c];
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
        UNLOCK();
      }
      FUN_140d61352(&local_30);
      plVar2 = (longlong *)param_1[0x2c];
      param_1[0x2b] = 0;
      param_1[0x2c] = 0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
    }
    if (((param_1[0x2d] != 0) && (param_1[0x2e] != 0)) && (0 < *(int *)(param_1[0x2e] + 8))) {
      FUN_1401cb356();
      local_40 = param_1[0x2d];
      local_38 = param_1[0x2e];
      if (local_38 != 0) {
        LOCK();
        *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + 1;
        UNLOCK();
      }
      FUN_140d61352(&local_40);
      plVar2 = (longlong *)param_1[0x2e];
      param_1[0x2d] = 0;
      param_1[0x2e] = 0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
    }
    FUN_148a96856(param_1);
    lVar3 = param_1[8];
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,2,0x10);
    local_48 = 2;
    *local_50 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_50[2] = lVar5;
    *local_50 = &PTR_FUN_14b4f1260;
    local_50[3] = param_1;
    FUN_145e17336(lVar3,&local_50);
    if (local_48 != 0) {
      if (local_50 == (undefined8 *)0x0) goto LAB_143f39b68;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143f39b68:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f39d64 FUN_143f39d64 body=1476 status=ok
// SIG undefined FUN_143f39d64(void)

void FUN_143f39d64(longlong param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  wchar_t *pwVar5;
  uint uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  int *piVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  int local_d0;
  longlong local_c8 [4];
  longlong local_a8;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  int *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x3e0) != -1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
  }
  *(undefined4 *)(param_1 + 0x3e0) = param_2;
  FUN_1413f46f8(&local_90);
  if (local_90 == (longlong *)0x0) {
    iVar13 = 0xe;
  }
  else {
    cVar4 = FUN_1414e62ca(param_1);
    plVar10 = local_88;
    if (cVar4 == '\0') {
      pwVar5 = L"Disabled";
      if (param_3 != 0) {
        pwVar5 = L"";
      }
      pwVar8 = L"Enabled";
      if (param_3 != 1) {
        pwVar8 = pwVar5;
      }
      FUN_140056680(&local_50,pwVar8);
      (**(code **)(*local_90 + 0x30))(local_90,&local_70);
      plVar10 = (longlong *)&DAT_149dfb77a;
      if ((int)local_68 != 0) {
        plVar10 = local_70;
      }
      piVar9 = (int *)&DAT_149dfb77a;
      if (local_48 != 0) {
        piVar9 = local_50;
      }
      FUN_140002266(&local_60,L"%s %s",piVar9,plVar10);
      FUN_1414f3eb8(local_c8,param_1 + 0x28,&DAT_14cb976d0);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      if (local_70 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      iVar13 = *(int *)(param_1 + 0x78);
      if ((longlong)iVar13 == 0) {
LAB_143f3a13b:
        plVar10 = (longlong *)0x0;
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x70);
        plVar10 = (longlong *)0x0;
        lVar11 = 0;
        uVar6 = 0;
        do {
          if (*(char *)(*(longlong *)(lVar3 + lVar11) + 0x18) != '\0') {
            if (iVar13 <= (int)uVar6 || (int)uVar6 < 0) goto LAB_143f3a13b;
            lVar11 = (ulonglong)(uVar6 & 0x7fffffff) * 0x10;
            plVar12 = *(longlong **)(lVar3 + lVar11);
            plVar10 = *(longlong **)(lVar3 + 8 + lVar11);
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
            }
            if (plVar12 != (longlong *)0x0) {
              FUN_14155fbfe(param_1,CONCAT71((int7)(int3)((uint)iVar13 >> 8),1));
              local_60 = *plVar12;
              plVar12 = (longlong *)plVar12[1];
              if (plVar12 == (longlong *)0x0) {
                local_58 = (longlong *)0x0;
              }
              else {
                LOCK();
                *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                UNLOCK();
                local_58 = plVar12;
              }
              FUN_1458291a6(param_1,local_c8,&local_60);
              plVar1 = local_58;
              if (local_58 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_58 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_58)(local_58);
                  LOCK();
                  piVar9 = (int *)((longlong)plVar1 + 0xc);
                  *piVar9 = *piVar9 + -1;
                  UNLOCK();
                  if (*piVar9 == 0) {
                    (**(code **)(*plVar1 + 0x10))(plVar1);
                  }
                }
              }
              if (plVar12 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar12 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar12)(plVar12);
                  LOCK();
                  piVar9 = (int *)((longlong)plVar12 + 0xc);
                  *piVar9 = *piVar9 + -1;
                  UNLOCK();
                  if (*piVar9 == 0) {
                    (**(code **)(*plVar12 + 0x10))(plVar12);
                  }
                }
              }
              goto LAB_143f3a14d;
            }
            break;
          }
          uVar6 = uVar6 + 1;
          lVar11 = lVar11 + 0x10;
        } while ((longlong)iVar13 << 4 != lVar11);
      }
      FUN_148a98090(param_1,param_2,0xe);
LAB_143f3a14d:
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar10 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar9 = (int *)((longlong)plVar10 + 0xc);
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (*piVar9 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (local_c8[2] != 0) {
        FUN_1400020a8();
      }
      if (local_c8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_50 != (int *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143f3a1ae;
    }
    if (local_88 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_88 + 1) = (int)local_88[1] + 1;
      UNLOCK();
    }
    local_c8[0] = 0;
    local_c8[1] = 0;
    iVar13 = *(int *)(param_1 + 0x78);
    if ((longlong)iVar13 == 0) {
LAB_143f39faa:
      plVar12 = (longlong *)0x0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x70);
      plVar12 = (longlong *)0x0;
      lVar11 = 0;
      uVar6 = 0;
      do {
        if (*(char *)(*(longlong *)(lVar3 + lVar11) + 0x18) != '\0') {
          if (iVar13 <= (int)uVar6 || (int)uVar6 < 0) goto LAB_143f39faa;
          lVar7 = (ulonglong)(uVar6 & 0x7fffffff) * 0x10;
          lVar11 = *(longlong *)(lVar3 + lVar7);
          plVar12 = *(longlong **)(lVar3 + 8 + lVar7);
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
          }
          if (lVar11 != 0) {
            FUN_14101cdd4(lVar11 + 0x20,&DAT_14cb977e0,local_c8);
          }
          break;
        }
        uVar6 = uVar6 + 1;
        lVar11 = lVar11 + 0x10;
      } while ((longlong)iVar13 << 4 != lVar11);
    }
    FUN_140056680(&local_60,L"SplitscreenJoinBypass");
    local_70 = local_90;
    local_68 = plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_d8 = &local_60;
    local_d0 = param_3;
    FUN_14625a34a(param_1,&local_50,&local_70,local_c8);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_48 < 1) {
switchD_143f3a042_caseD_0:
      iVar13 = 0;
      if (local_90 != (longlong *)0x0) {
        pwVar5 = L"";
        if (param_3 == 0) {
          pwVar5 = L"Disabled";
        }
        pwVar8 = L"Enabled";
        if (param_3 != 1) {
          pwVar8 = pwVar5;
        }
        FUN_140056680(&local_60,pwVar8);
        local_80 = local_90;
        local_78 = plVar10;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        local_d8 = (longlong *)CONCAT71(local_d8._1_7_,1);
        FUN_148a98048(param_1,&local_80,local_c8,&local_60);
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        FUN_145c7d76c(param_1);
      }
    }
    else {
      iVar13 = *local_50;
      switch(iVar13) {
      case 0:
        goto switchD_143f3a042_caseD_0;
      case 1:
        iVar13 = 5;
        break;
      case 2:
        iVar13 = 6;
        break;
      case 3:
        iVar13 = 7;
        break;
      case 4:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
        break;
      case 5:
        iVar13 = 1;
        break;
      case 6:
      case 7:
      case 8:
        iVar13 = 8;
        break;
      default:
        iVar13 = 0xe;
      }
    }
    if (local_50 != (int *)0x0) {
      FUN_1400020a8();
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar12 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar9 = (int *)((longlong)plVar12 + 0xc);
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (*piVar9 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if (local_c8[0] != 0) {
      FUN_1400020a8();
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar10 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar9 = (int *)((longlong)plVar10 + 0xc);
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (*piVar9 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    if (iVar13 == 0) {
      FUN_143f395c2(param_1,param_2);
      goto LAB_143f3a1ae;
    }
  }
  FUN_148a98090(param_1,param_2,iVar13);
LAB_143f3a1ae:
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_88 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar9 = (int *)((longlong)local_88 + 0xc);
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f3a34c FUN_143f3a34c body=334 status=ok
// SIG undefined FUN_143f3a34c(void)

void FUN_143f3a34c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 != -1) && (param_1[0xc] != 0)) {
    FUN_1413f457a(param_1,&local_38,param_2);
    if ((local_38 != 0) && (*(int *)(local_38 + 0x10) != 3)) {
      *(undefined4 *)(local_38 + 0x10) = 3;
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    lVar3 = param_1[0xc];
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    local_40 = 3;
    *local_48 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_48[2] = lVar5;
    *local_48 = &PTR_FUN_14b4f13c0;
    local_48[3] = param_1;
    *(int *)(local_48 + 4) = param_2;
    FUN_143f3a4a6(lVar3,param_2,&local_48);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000143f3a48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x50))(param_1,param_2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f3a4a6 FUN_143f3a4a6 body=819 status=ok
// SIG undefined FUN_143f3a4a6(void)

void FUN_143f3a4a6(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  int *_Src;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int *piVar8;
  ulonglong uVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  byte bVar16;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  int *local_88;
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 *local_68;
  int local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar2 = *(int *)(param_1 + 0x20);
  lVar15 = (longlong)iVar2;
  if (lVar15 != 0) {
    piVar8 = *(int **)(param_1 + 0x18);
    bVar16 = *piVar8 == param_2;
    iVar10 = 0;
    iVar12 = 0;
    do {
      local_90 = (ulonglong)iVar12;
      iVar5 = iVar12 + 1;
      if (iVar12 + 1 < iVar2) {
        iVar5 = iVar2;
      }
      iVar13 = iVar12;
      uVar9 = local_90;
      do {
        uVar9 = uVar9 + 1;
        iVar14 = iVar5;
        if (lVar15 <= (longlong)uVar9) break;
        iVar13 = iVar13 + 1;
        iVar14 = iVar13;
      } while ((bool)(bVar16 & 1) == (piVar8[uVar9] == param_2));
      bVar11 = bVar16 ^ 1;
      if ((bVar16 & 1) == 0) {
        local_88 = piVar8;
        if (iVar10 != iVar12) {
          _Src = piVar8 + local_90;
          local_90._1_7_ = (int7)(int3)((uint)iVar12 >> 8);
          local_90 = CONCAT71(local_90._1_7_,bVar16) ^ 1;
          memmove(piVar8 + iVar10,_Src,(longlong)(iVar14 - iVar12) << 2);
          bVar11 = (byte)local_90;
        }
        iVar10 = iVar10 + (iVar14 - iVar12);
        piVar8 = local_88;
      }
      bVar16 = bVar11;
      iVar12 = iVar14;
    } while ((longlong)uVar9 < lVar15);
    *(int *)(param_1 + 0x20) = iVar10;
  }
  FUN_14595671e(param_1,&local_58,param_2);
  if (local_58 == 0) {
    if (((int)param_3[1] != 0) && (plVar3 = (longlong *)*param_3, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x60))(plVar3,0);
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    local_68 = (undefined8 *)0x0;
    local_60 = 0;
    FUN_1446efa72(&local_68,0,3,0x10);
    puVar6 = local_68;
    local_60 = 3;
    *local_68 = &PTR_LAB_14b4c34a0;
    local_68[1] = 0;
    *(undefined4 *)(local_68 + 2) = 0;
    FUN_14114e6dc(local_68 + 1,param_3);
    plVar3 = local_50;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar15 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar15 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar15;
    puVar6[3] = lVar7;
    *puVar6 = &PTR_FUN_14b4f2d60;
    puVar6[4] = param_1;
    puVar6[5] = FUN_148a9ab8e;
    local_78 = local_58;
    local_70 = local_50;
    local_80 = param_1;
    if (local_50 == (longlong *)0x0) {
      FUN_148a9aa4e(uVar4,&local_80,&local_78,&local_68);
    }
    else {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      FUN_148a9aa4e(uVar4,&local_80,&local_78,&local_68);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar8 = (int *)((longlong)plVar3 + 0xc);
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (*piVar8 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
    if (local_60 != 0) {
      if (local_68 == (undefined8 *)0x0) goto LAB_143f3a50d;
      (**(code **)*local_68)(local_68,0);
      FUN_1446efa72(&local_68,0,0,0x10);
      local_60 = 0;
    }
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143f3a50d:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar8 = (int *)((longlong)local_50 + 0xc);
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  puVar6 = (undefined8 *)*param_3;
  if ((int)param_3[1] != 0) {
    if (puVar6 == (undefined8 *)0x0) goto LAB_143f3a56f;
    (**(code **)*puVar6)(puVar6,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
    puVar6 = (undefined8 *)*param_3;
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143f3a56f:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f3a7da FUN_143f3a7da body=672 status=ok
// SIG undefined FUN_143f3a7da(void)

void FUN_143f3a7da(longlong param_1,int param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 *local_58;
  int local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = *(longlong *)(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 0x20);
  lVar9 = (longlong)iVar3;
  if (lVar9 != 0) {
    lVar8 = 0;
    do {
      if (*(int *)(lVar6 + lVar8) == param_2) goto LAB_143f3a845;
      lVar8 = lVar8 + 4;
    } while (lVar9 * 4 - lVar8 != 0);
  }
  *(uint *)(param_1 + 0x20) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
    FUN_1446f48e2((longlong *)(param_1 + 0x18),iVar3);
    lVar6 = *(longlong *)(param_1 + 0x18);
  }
  *(int *)(lVar6 + lVar9 * 4) = param_2;
LAB_143f3a845:
  FUN_14595671e(param_1,&local_48,param_2);
  if (local_48 == 0) {
    if (((int)param_3[1] != 0) && (plVar4 = (longlong *)*param_3, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x60))(plVar4,5);
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,4,0x10);
    puVar7 = local_58;
    local_50 = 4;
    *local_58 = &PTR_LAB_14b4f3470;
    *(int *)(local_58 + 1) = param_2;
    local_58[2] = 0;
    *(undefined4 *)(local_58 + 3) = 0;
    FUN_1459dad1c(local_58 + 2,param_3);
    plVar4 = local_40;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar7[4] = lVar9;
    *puVar7 = &PTR_FUN_14b4f3400;
    puVar7[5] = param_1;
    puVar7[6] = FUN_148a9a9d8;
    local_68 = local_48;
    local_60 = local_40;
    local_70 = param_1;
    if (local_40 == (longlong *)0x0) {
      FUN_148a9a898(uVar5,&local_70,&local_68,&local_58);
    }
    else {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      FUN_148a9a898(uVar5,&local_70,&local_68,&local_58);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
    if (local_50 != 0) {
      if (local_58 == (undefined8 *)0x0) goto LAB_143f3a87b;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143f3a87b:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  puVar7 = (undefined8 *)*param_3;
  if ((int)param_3[1] != 0) {
    if (puVar7 == (undefined8 *)0x0) goto LAB_143f3a8dd;
    (**(code **)*puVar7)(puVar7,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
    puVar7 = (undefined8 *)*param_3;
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143f3a8dd:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f3aa7c FUN_143f3aa7c body=525 status=ok
// SIG undefined FUN_143f3aa7c(void)

void FUN_143f3aa7c(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar5 = FUN_14119d564();
  if (iVar5 == param_2) {
    FUN_1411cb5f6(&local_38,param_3);
    FUN_1411cb5f6(local_48,param_4);
    plVar3 = local_30;
    iVar5 = *(int *)(param_1 + 0x78);
    if ((longlong)iVar5 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x70);
      lVar7 = 0;
      uVar6 = 0;
      do {
        if (*(char *)(*(longlong *)(lVar4 + lVar7) + 0x18) != '\0') {
          if ((int)uVar6 < iVar5 && -1 < (int)uVar6) {
            lVar7 = (ulonglong)(uVar6 & 0x7fffffff) * 0x10;
            local_58 = *(undefined8 *)(lVar4 + lVar7);
            plStack_50 = *(longlong **)(lVar4 + 8 + lVar7);
            if (plStack_50 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
              UNLOCK();
            }
            goto LAB_143f3ab51;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((longlong)iVar5 << 4 != lVar7);
    }
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
LAB_143f3ab51:
    if (local_38 == 0) {
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
    }
    else {
      local_78 = local_38;
      local_70 = local_30;
      if (local_30 == (longlong *)0x0) {
        FUN_140b7090e(param_1,&local_68,&local_78);
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        FUN_140b7090e(param_1,&local_68);
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
      }
    }
    FUN_148a98e82(param_1,&local_68,&local_58);
    plVar3 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f3ac8a FUN_143f3ac8a body=56 status=ok
// SIG undefined FUN_143f3ac8a(void)

undefined8 FUN_143f3ac8a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  if (uVar1 == *(uint *)(param_2 + 1)) {
    if ((int)uVar1 < 2) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
    iVar2 = wcscmp((wchar_t *)*param_1,(wchar_t *)*param_2);
    uVar3 = CONCAT44(extraout_var,iVar2);
  }
  else {
    iVar2 = *(uint *)(param_2 + 1) + uVar1 + -1;
  }
  return CONCAT71((int7)(uVar3 >> 8),iVar2 == 0);
}



// FUNCTION 143f3acc2 FUN_143f3acc2 body=302 status=ok
// SIG undefined FUN_143f3acc2(void)

void FUN_143f3acc2(undefined8 param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined8 *local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pwVar5 = L"";
  if (param_3 == 0) {
    pwVar5 = L"Disabled";
  }
  pwVar6 = L"Enabled";
  if (param_3 != 1) {
    pwVar6 = pwVar5;
  }
  FUN_140056680(local_48,pwVar6);
  param_2 = (undefined8 *)*param_2;
  if (*(int *)((longlong)param_2 + 0x14) == 1) {
    if (1 < DAT_14cb97688) {
      local_38 = &DAT_14cb97680;
      local_30 = local_48;
      FUN_140ac5c08(param_2 + 4,local_24,&local_38,0);
    }
  }
  else {
    local_38 = (undefined8 *)*param_2;
    plVar3 = (longlong *)param_2[1];
    local_30 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      uVar4 = FUN_145ce2ae6(param_2,&local_38);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      uVar4 = FUN_145ce2ae6();
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
    }
    FUN_1413f4416(param_1,uVar4,&DAT_14cb97680,local_48);
  }
  FUN_145c7d76c(param_1);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f3adf2 FUN_143f3adf2 body=248 status=ok
// SIG undefined FUN_143f3adf2(void)

void FUN_143f3adf2(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_148a96ac4();
  plVar1 = (longlong *)(param_1 + 8);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_148a8cba8(&local_28,plVar1);
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (local_28 != (longlong *)0x0 && local_20 != 0) {
    (**(code **)(*local_28 + 0x60))(local_28,7);
  }
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) goto LAB_143f3aec6;
    (**(code **)*local_28)(local_28,0);
    FUN_1446efa72(&local_28,0,0,0x10);
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143f3aec6:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f3aeec FUN_143f3aeec body=253 status=ok
// SIG undefined FUN_143f3aeec(void)

ulonglong FUN_143f3aeec(longlong param_1)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  longlong local_48 [3];
  ulonglong local_30;
  undefined7 uVar4;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_1 = param_1 + 0x28;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_1446f470e(&local_50,L"CUSTOMSEARCHINT2",1);
  cVar1 = FUN_145e34e2c(param_1,local_50,local_48);
  uVar4 = (undefined7)((ulonglong)&local_50 >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (cVar1 == '\0') {
    local_68 = 0;
    uStack_60 = 0;
    bVar2 = FUN_145e34e2c(param_1,DAT_14cb977f0,&local_68);
    bVar2 = 1 < (int)uStack_60 & bVar2;
    uVar3 = CONCAT71(uVar4,bVar2);
    if (bVar2 == 1) {
      FUN_1446f470e(&local_70,L"CUSTOMSEARCHINT2",1);
      FUN_145cba9f8(param_1,local_70,&local_68,0);
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f3afea FUN_143f3afea body=126 status=ok
// SIG undefined FUN_143f3afea(void)

void FUN_143f3afea(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,ulonglong param_6)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_4 == 2) {
    return;
  }
  if (((param_6 >> 0x20 != 0) && (uVar1 = (uint)param_6, -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0xd & 0x3fff8));
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == (int)(param_6 >> 0x20))) &&
       ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
      FUN_146583a54(param_1);
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_145947db0(param_1);
  return;
}



// FUNCTION 143f3b068 FUN_143f3b068 body=73 status=ok
// SIG undefined FUN_143f3b068(void)

void FUN_143f3b068(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_140773fe2();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x2d0))(plVar1,param_3,param_2);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000143f3b0a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      bifrost::experiences::invalidateCache(*(User **)(lVar2 + 0x2b8));
      return;
    }
  }
  return;
}



// FUNCTION 143f3b0b2 FUN_143f3b0b2 body=260 status=ok
// SIG undefined FUN_143f3b0b2(void)

longlong *
FUN_143f3b0b2(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  iVar4 = *(int *)(param_4 + 1);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (iVar4 != 0) {
    FUN_14475e67c(param_2);
    if ((longlong)*(int *)(param_4 + 1) != 0) {
      puVar6 = (undefined8 *)*param_4;
      lVar5 = (longlong)*(int *)(param_4 + 1) * 0x30;
      do {
        local_4c = 0;
        cVar1 = FUN_1418c0a1a(param_1,param_3,*puVar6,&local_4c);
        if (cVar1 == '\0') {
          iVar4 = (int)param_2[1];
          uVar3 = iVar4 + 1;
          *(uint *)(param_2 + 1) = uVar3;
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_143f3b1b8(puVar6,local_4c);
          iVar4 = (int)param_2[1];
          uVar3 = iVar4 + 1;
          *(uint *)(param_2 + 1) = uVar3;
        }
        if (*(uint *)((longlong)param_2 + 0xc) < uVar3) {
          FUN_1401c3474(param_2,iVar4);
        }
        *(undefined1 *)(*param_2 + (longlong)iVar4) = uVar2;
        puVar6 = puVar6 + 6;
        lVar5 = lVar5 + -0x30;
      } while (lVar5 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f3b1b8 FUN_143f3b1b8 body=71 status=ok
// SIG undefined FUN_143f3b1b8(void)

undefined8 FUN_143f3b1b8(longlong param_1,int param_2)

{
  undefined7 uVar1;
  
  uVar1 = (undefined7)
          ((ulonglong)
           ((longlong)&switchD_143f3b1d0::switchdataD_14b4f3d48 +
           (longlong)(int)(&switchD_143f3b1d0::switchdataD_14b4f3d48)[*(int *)(param_1 + 8) - 1]) >>
          8);
  switch(*(int *)(param_1 + 8)) {
  case 1:
    return CONCAT71(uVar1,*(int *)(param_1 + 0xc) == param_2);
  case 2:
    return CONCAT71(uVar1,*(int *)(param_1 + 0xc) != param_2);
  case 3:
    return CONCAT71(uVar1,*(int *)(param_1 + 0xc) < param_2);
  case 4:
    return CONCAT71(uVar1,*(int *)(param_1 + 0xc) <= param_2);
  case 5:
    return CONCAT71(uVar1,param_2 < *(int *)(param_1 + 0xc));
  case 6:
    return CONCAT71(uVar1,param_2 <= *(int *)(param_1 + 0xc));
  default:
    return 0;
  }
}



// FUNCTION 143f3b200 FUN_143f3b200 body=1774 status=ok
// SIG undefined FUN_143f3b200(void)

void FUN_143f3b200(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  int local_120;
  longlong *local_118;
  wchar_t *local_110;
  undefined4 local_108;
  longlong *local_100;
  wchar_t *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *plStack_d0;
  wchar_t *local_c8;
  undefined4 local_c0;
  wchar_t *local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  wchar_t *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  longlong local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (1 < *(int *)(param_2 + 8)) {
    local_d8 = 0;
    plStack_d0 = (longlong *)0x0;
    FUN_14047afda(&local_e8);
    cVar4 = FUN_14047b282(local_e8,&local_d8,0);
    if ((cVar4 != '\0') && (local_d8 != 0)) {
      local_f8 = L"parent_guid";
      local_f0 = 0xb;
      FUN_14047fa10(local_d8,&local_f8,param_1 + 2);
      local_100 = (longlong *)0x0;
      local_110 = L"matchmaking_requirements";
      local_108 = 0x18;
      FUN_140480164(local_d8,&local_110,&local_100);
      if ((local_100 != (longlong *)0x0) && (lVar13 = local_100[1], 0 < (longlong)(int)lVar13)) {
        lVar12 = 0;
LAB_143f3b2eb:
        plVar2 = *(longlong **)(*local_100 + lVar12 * 0x10);
        plVar3 = *(longlong **)(*local_100 + 8 + lVar12 * 0x10);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        if (plVar2 != (longlong *)0x0) {
          local_118 = (longlong *)0x0;
          (**(code **)(*plVar2 + 0x80))(plVar2,&local_118);
          if ((local_118 == (longlong *)0x0) || (*local_118 == 0)) goto LAB_143f3b337;
          plVar6 = (longlong *)FUN_145886900(param_1);
          plVar2 = local_118;
          if (*local_118 == 0) goto LAB_143f3b337;
          local_78 = 0;
          plStack_70 = (longlong *)0x0;
          local_88 = L"type";
          local_80 = 4;
          cVar4 = FUN_14047fa10(*local_118,&local_88,&local_78);
          if ((cVar4 != '\0') && (1 < (int)plStack_70)) {
            FUN_1446f470e(&local_98,local_78,1);
            *plVar6 = local_98;
          }
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = L"comparison_op";
          local_a0 = 0xd;
          cVar4 = FUN_14047fa10(*plVar2,&local_a8,&local_98);
          if ((cVar4 != '\0') && (1 < (int)uStack_90)) {
            lVar9 = 0;
            while( true ) {
              uVar7 = *(ushort *)(local_98 + lVar9);
              uVar8 = (ulonglong)uVar7;
              uVar10 = *(ushort *)((longlong)&DAT_14b4ef6c8 + lVar9);
              if (uVar7 != uVar10) break;
              if (uVar7 == 0) goto LAB_143f3b64b;
LAB_143f3b466:
              lVar9 = lVar9 + 2;
            }
            if ((uVar10 | uVar7) < 0x80) {
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar11 = (ulonglong)uVar10;
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar11]) goto LAB_143f3b466;
            }
            if (uVar7 != uVar10) {
              lVar9 = 0;
              goto LAB_143f3b49e;
            }
LAB_143f3b64b:
            uVar5 = 1;
            goto LAB_143f3b650;
          }
          goto LAB_143f3b654;
        }
        goto LAB_143f3b337;
      }
    }
LAB_143f3b70a:
    if (1 < *(int *)(param_3 + 8)) {
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      FUN_14047afda(&local_88,param_3);
      cVar4 = FUN_14047b282(local_88,&local_78,0);
      if (((cVar4 != '\0') && (local_78 != 0)) && ((longlong)(int)param_1[1] != 0)) {
        lVar13 = (longlong)(int)param_1[1] * 0x30;
        lVar12 = *param_1 + 0x20;
        do {
          if (1 < *(int *)(lVar12 + -8)) {
            local_98 = 0;
            uStack_90 = 0;
            local_128 = *(undefined8 *)(lVar12 + -0x10);
            local_120 = *(int *)(lVar12 + -8) + -1;
            cVar4 = FUN_14047fa10(local_78,&local_128,&local_98);
            if ((cVar4 != '\0') && (1 < (int)uStack_90)) {
              FUN_140009b9a(&local_a8,&local_98);
              FUN_140008f88(lVar12,&local_a8);
              if (local_a8 != (wchar_t *)0x0) {
                (**(code **)(*(longlong *)local_a8 + 0x10))();
              }
            }
            if (local_98 != 0) {
              FUN_1400020a8();
            }
          }
          lVar12 = lVar12 + 0x30;
          lVar13 = lVar13 + -0x30;
        } while (lVar13 != 0);
      }
      plVar2 = (longlong *)CONCAT44(uStack_7c,local_80);
      if (plVar2 != (longlong *)0x0) {
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
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      plVar2 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_70 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_70)(plStack_70);
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
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_e0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)local_e0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_e0 + 0x10))(local_e0);
        }
      }
    }
    plVar2 = plStack_d0;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_d0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_d0)(plStack_d0);
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
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143f3b49e:
  uVar7 = *(ushort *)(local_98 + lVar9);
  uVar8 = (ulonglong)uVar7;
  uVar10 = *(ushort *)((longlong)&DAT_14b4ef6ce + lVar9);
  if (uVar7 == uVar10) {
    if (uVar7 == 0) goto LAB_143f3b6e2;
LAB_143f3b4bc:
    lVar9 = lVar9 + 2;
    goto LAB_143f3b49e;
  }
  if ((uVar10 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    uVar11 = (ulonglong)uVar10;
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar11]) goto LAB_143f3b4bc;
  }
  if (uVar7 != uVar10) {
    lVar9 = 0;
    goto LAB_143f3b4f4;
  }
LAB_143f3b6e2:
  uVar5 = 2;
  goto LAB_143f3b650;
LAB_143f3b4f4:
  uVar7 = *(ushort *)(local_98 + lVar9);
  uVar8 = (ulonglong)uVar7;
  uVar10 = *(ushort *)((longlong)&DAT_149f095a2 + lVar9);
  if (uVar7 == uVar10) {
    if (uVar7 == 0) goto LAB_143f3b6ec;
LAB_143f3b512:
    lVar9 = lVar9 + 2;
    goto LAB_143f3b4f4;
  }
  if ((uVar10 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    uVar11 = (ulonglong)uVar10;
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar11]) goto LAB_143f3b512;
  }
  if (uVar7 != uVar10) {
    lVar9 = 0;
    goto LAB_143f3b54a;
  }
LAB_143f3b6ec:
  uVar5 = 5;
  goto LAB_143f3b650;
LAB_143f3b54a:
  uVar7 = *(ushort *)(local_98 + lVar9);
  uVar8 = (ulonglong)uVar7;
  uVar10 = *(ushort *)((longlong)&DAT_14b4ef6d4 + lVar9);
  if (uVar7 == uVar10) {
    if (uVar7 == 0) goto LAB_143f3b6f6;
LAB_143f3b568:
    lVar9 = lVar9 + 2;
    goto LAB_143f3b54a;
  }
  if ((uVar10 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    uVar11 = (ulonglong)uVar10;
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar11]) goto LAB_143f3b568;
  }
  if (uVar7 != uVar10) {
    lVar9 = 0;
    goto LAB_143f3b5a0;
  }
LAB_143f3b6f6:
  uVar5 = 6;
  goto LAB_143f3b650;
LAB_143f3b5a0:
  uVar7 = *(ushort *)(local_98 + lVar9);
  uVar8 = (ulonglong)uVar7;
  uVar10 = *(ushort *)((longlong)&DAT_149f095a8 + lVar9);
  if (uVar7 == uVar10) {
    if (uVar7 == 0) goto LAB_143f3b700;
LAB_143f3b5be:
    lVar9 = lVar9 + 2;
    goto LAB_143f3b5a0;
  }
  if ((uVar10 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    uVar11 = (ulonglong)uVar10;
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar11]) goto LAB_143f3b5be;
  }
  if (uVar7 != uVar10) {
    lVar9 = 0;
    goto LAB_143f3b5f6;
  }
LAB_143f3b700:
  uVar5 = 3;
  goto LAB_143f3b650;
LAB_143f3b5f6:
  uVar7 = *(ushort *)(local_98 + lVar9);
  uVar8 = (ulonglong)uVar7;
  uVar10 = *(ushort *)((longlong)&DAT_14b4ef6dc + lVar9);
  if (uVar7 == uVar10) {
    if (uVar7 == 0) goto LAB_143f3b644;
LAB_143f3b610:
    lVar9 = lVar9 + 2;
    goto LAB_143f3b5f6;
  }
  if ((uVar10 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    uVar11 = (ulonglong)uVar10;
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar11]) goto LAB_143f3b610;
  }
  uVar5 = 0;
  if (uVar7 != uVar10) goto LAB_143f3b650;
LAB_143f3b644:
  uVar5 = 4;
LAB_143f3b650:
  *(undefined4 *)(plVar6 + 1) = uVar5;
LAB_143f3b654:
  local_b8 = L"value";
  local_b0 = 5;
  FUN_14047faa2(*plVar2,&local_b8,(longlong)plVar6 + 0xc);
  local_c8 = L"description_key";
  local_c0 = 0xf;
  FUN_14047fa10(*plVar2,&local_c8,plVar6 + 2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_143f3b337:
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
  lVar12 = lVar12 + 1;
  if (lVar12 == (int)lVar13) goto LAB_143f3b70a;
  goto LAB_143f3b2eb;
}



// FUNCTION 143f3b8f0 FUN_143f3b8f0 body=2375 status=ok
// SIG undefined FUN_143f3b8f0(void)

void FUN_143f3b8f0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  void *local_1f0;
  longlong *local_1e8;
  wchar_t *local_1e0;
  undefined4 local_1d8;
  wchar_t *local_1d0;
  undefined4 local_1c8;
  double local_1c0;
  wchar_t *local_1b8;
  undefined4 local_1b0;
  longlong *local_1a8;
  undefined8 uStack_1a0;
  wchar_t *local_198;
  undefined4 local_190;
  undefined2 *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  void *local_168;
  ulonglong uStack_160;
  float local_158;
  longlong *local_148;
  wchar_t *local_140;
  undefined4 local_138;
  longlong *local_130;
  wchar_t *local_128;
  undefined4 local_120;
  longlong local_118 [2];
  wchar_t *local_108;
  undefined4 local_100;
  longlong local_f8 [2];
  wchar_t *local_e8;
  undefined4 local_e0;
  undefined2 *local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (1 < *(int *)(param_2 + 8)) {
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    FUN_14047afda(&local_88);
    cVar5 = FUN_147a4e706(local_88,&local_78,0);
    if (cVar5 != '\0') {
      if ((longlong)(int)uStack_70 != 0) {
        plVar8 = local_78 + (longlong)(int)uStack_70 * 2;
        local_1f8 = (longlong *)(param_1 + 0x20);
        plVar12 = local_78;
        local_1e8 = plVar8;
        do {
          if (*plVar12 != 0) {
            local_90 = (longlong *)0x0;
            (**(code **)(*(longlong *)*plVar12 + 0x80))((longlong *)*plVar12,&local_90);
            if ((local_90 != (longlong *)0x0) && (*local_90 != 0)) {
              local_c8 = (longlong *)0x0;
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c844850) &&
                 (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
              local_c0 = DAT_14c844840;
              if (DAT_14c844840 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
                  LOCK();
                  *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
                  UNLOCK();
                }
                else {
                  (**(code **)(*DAT_14c844840 + 8))();
                }
              }
              local_b8 = 0;
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c844850) &&
                 (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
              local_b0 = DAT_14c844840;
              if (DAT_14c844840 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
                  LOCK();
                  *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
                  UNLOCK();
                }
                else {
                  (**(code **)(*DAT_14c844840 + 8))();
                }
              }
              local_a8 = 0;
              local_a0 = 0;
              uStack_98 = 0;
              local_d8 = (undefined2 *)0x0;
              uStack_d0 = 0;
              local_e8 = L"name";
              local_e0 = 4;
              FUN_14047fa10(*local_90,&local_e8,&local_d8);
              puVar7 = &DAT_149dfb77a;
              if ((int)uStack_d0 != 0) {
                puVar7 = local_d8;
              }
              FUN_1446f470e(&local_178,puVar7,1);
              local_c8 = local_178;
              local_f8[0] = 0;
              local_f8[1] = 0;
              local_108 = L"display_name";
              local_100 = 0xc;
              FUN_14047fa10(*local_90,&local_108,local_f8);
              FUN_140009b9a(&local_178,local_f8);
              FUN_140008f88(&local_c0,&local_178);
              if (local_178 != (longlong *)0x0) {
                (**(code **)(*local_178 + 0x10))();
              }
              local_118[0] = 0;
              local_118[1] = 0;
              local_128 = L"display_desc";
              local_120 = 0xc;
              FUN_14047fa10(*local_90,&local_128,local_118);
              FUN_140009b9a(&local_178,local_118);
              FUN_140008f88(&local_b0,&local_178);
              if (local_178 != (longlong *)0x0) {
                (**(code **)(*local_178 + 0x10))();
              }
              local_130 = (longlong *)0x0;
              local_140 = L"modifiers";
              local_138 = 9;
              FUN_140480164(*local_90,&local_140,&local_130);
              if ((local_130 != (longlong *)0x0) &&
                 (lVar15 = local_130[1], (longlong)(int)lVar15 != 0)) {
                lVar11 = *local_130;
                lVar13 = 0;
                do {
                  if (*(longlong *)(lVar11 + lVar13) != 0) {
                    local_148 = (longlong *)0x0;
                    plVar8 = *(longlong **)(lVar11 + lVar13);
                    (**(code **)(*plVar8 + 0x80))(plVar8,&local_148);
                    if ((local_148 != (longlong *)0x0) && (*local_148 != 0)) {
                      local_168 = (void *)0x0;
                      uStack_160 = 0;
                      local_178 = (longlong *)0x0;
                      uStack_170 = 0.0;
                      local_158 = 1.0;
                      local_188 = (undefined2 *)0x0;
                      uStack_180 = 0;
                      local_198 = L"name";
                      local_190 = 4;
                      FUN_14047fa10(*local_148,&local_198,&local_188);
                      puVar7 = &DAT_149dfb77a;
                      if ((int)uStack_180 != 0) {
                        puVar7 = local_188;
                      }
                      FUN_1446f470e(&local_1a8,puVar7,1);
                      local_178 = local_1a8;
                      local_1a8 = (longlong *)0x0;
                      uStack_1a0 = 0;
                      local_1b8 = L"target_resolver_name";
                      local_1b0 = 0x14;
                      FUN_14047fa10(*local_148,&local_1b8,&local_1a8);
                      plVar8 = (longlong *)&DAT_149dfb77a;
                      if ((int)uStack_1a0 != 0) {
                        plVar8 = local_1a8;
                      }
                      FUN_1446f470e(&local_1c0,plVar8,1);
                      uStack_170 = local_1c0;
                      local_1d0 = L"effect_name";
                      local_1c8 = 0xb;
                      FUN_14047fa10(*local_148,&local_1d0,&local_168);
                      local_1e0 = L"value";
                      local_1d8 = 5;
                      FUN_146839452(*local_148,&local_1e0,&local_1c0);
                      uVar4 = uStack_98;
                      local_158 = (float)local_1c0;
                      lVar9 = (longlong)(int)uStack_98;
                      uVar6 = (int)uStack_98 + 1;
                      uStack_98 = CONCAT44(uStack_98._4_4_,uVar6);
                      if (uStack_98._4_4_ < uVar6) {
                        FUN_143f42c82(&local_a0,uVar4 & 0xffffffff);
                      }
                      puVar2 = (undefined4 *)(local_a0 + lVar9 * 0x28);
                      *puVar2 = (undefined4)local_178;
                      puVar2[1] = local_178._4_4_;
                      puVar2[2] = (undefined4)uStack_170;
                      puVar2[3] = uStack_170._4_4_;
                      *(undefined8 *)(puVar2 + 4) = 0;
                      lVar14 = (longlong)(int)uStack_160;
                      puVar2[6] = (int)uStack_160;
                      if (lVar14 == 0) {
                        puVar2[7] = 0;
                      }
                      else {
                        puVar10 = (undefined8 *)(local_a0 + lVar9 * 0x28 + 0x10);
                        local_1f0 = local_168;
                        FUN_1446dd670(puVar10,uStack_160 & 0xffffffff,0);
                        memcpy((void *)*puVar10,local_1f0,lVar14 * 2);
                      }
                      puVar2[8] = local_158;
                      if (local_1a8 != (longlong *)0x0) {
                        FUN_1400020a8();
                      }
                      if (local_188 != (undefined2 *)0x0) {
                        FUN_1400020a8();
                      }
                      if (local_168 != (void *)0x0) {
                        FUN_1400020a8();
                      }
                    }
                  }
                  lVar13 = lVar13 + 0x10;
                } while ((longlong)(int)lVar15 * 0x10 != lVar13);
              }
              iVar3 = *(int *)(param_1 + 0x28);
              *(uint *)(param_1 + 0x28) = iVar3 + 1U;
              if (*(uint *)(param_1 + 0x2c) < iVar3 + 1U) {
                FUN_143f42dee(local_1f8,iVar3);
              }
              lVar15 = *local_1f8;
              lVar11 = (longlong)iVar3 * 0x38;
              *(longlong **)(lVar15 + lVar11) = local_c8;
              *(longlong **)(lVar15 + 8 + lVar11) = local_c0;
              if (local_c0 != (longlong *)0x0) {
                (**(code **)(*local_c0 + 8))();
              }
              lVar15 = lVar15 + lVar11;
              *(undefined4 *)(lVar15 + 0x10) = local_b8;
              *(longlong **)(lVar15 + 0x18) = local_b0;
              if (local_b0 != (longlong *)0x0) {
                (**(code **)(*local_b0 + 8))();
              }
              uVar4 = uStack_98;
              lVar11 = local_a0;
              plVar8 = local_1e8;
              *(undefined4 *)(lVar15 + 0x20) = local_a8;
              *(undefined8 *)(lVar15 + 0x28) = 0;
              *(int *)(lVar15 + 0x30) = (int)uStack_98;
              if ((int)uStack_98 == 0) {
                *(undefined4 *)(lVar15 + 0x34) = 0;
              }
              else {
                FUN_143f2e0f0((undefined8 *)(lVar15 + 0x28),uStack_98 & 0xffffffff,0);
                FUN_143f2e237(*(undefined8 *)(lVar15 + 0x28),lVar11,uVar4 & 0xffffffff);
              }
              if (local_118[0] != 0) {
                FUN_1400020a8();
              }
              if (local_f8[0] != 0) {
                FUN_1400020a8();
              }
              if (local_d8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              FUN_143f2ded4(local_a0,uStack_98 & 0xffffffff);
              if (local_a0 != 0) {
                FUN_1400020a8();
              }
              if (local_b0 != (longlong *)0x0) {
                (**(code **)(*local_b0 + 0x10))();
              }
              if (local_c0 != (longlong *)0x0) {
                (**(code **)(*local_c0 + 0x10))();
              }
            }
          }
          plVar12 = plVar12 + 2;
        } while (plVar12 != plVar8);
      }
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_80 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
      }
    }
    FUN_14047c710(local_78,uStack_70 & 0xffffffff);
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f3c238 FUN_143f3c238 body=458 status=ok
// SIG undefined FUN_143f3c238(void)

longlong * FUN_143f3c238(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_141176278(0,&local_58);
  if ((longlong)(int)param_4[1] != 0) {
    lVar8 = *param_4;
    local_70 = (longlong)(int)param_4[1] * 0x168 + lVar8;
    do {
      if ((longlong)local_50 != 0) {
        lVar4 = (longlong)local_50 * 0x168 + local_58;
        lVar9 = local_58;
        do {
          iVar1 = *(int *)(lVar9 + 0x18);
          if (iVar1 == *(int *)(lVar8 + 0x40)) {
            if (1 < iVar1) {
              lVar5 = 0;
              while( true ) {
                uVar2 = *(ushort *)(*(longlong *)(lVar9 + 0x10) + lVar5);
                uVar3 = (ulonglong)uVar2;
                uVar6 = *(ushort *)(*(longlong *)(lVar8 + 0x38) + lVar5);
                if (uVar2 != uVar6) break;
                if (uVar2 == 0) goto LAB_143f3c31f;
LAB_143f3c2e4:
                lVar5 = lVar5 + 2;
              }
              if ((uVar6 | uVar2) < 0x80) {
                uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
                uVar7 = (ulonglong)uVar6;
                uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
                if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar7]) goto LAB_143f3c2e4;
              }
              if (uVar2 != uVar6) goto LAB_143f3c381;
            }
LAB_143f3c31f:
            FUN_143f3b0b2(param_1,&local_68,param_3,lVar9);
            if ((longlong)local_60 != 0) {
              lVar5 = 0;
              do {
                if (*(char *)(local_68 + lVar5) == '\0') goto LAB_143f3c377;
                lVar5 = lVar5 + 1;
              } while (local_60 != lVar5);
            }
            iVar1 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
              FUN_14581ec00(param_2,iVar1);
            }
            FUN_1411769de((longlong)iVar1 * 0x168 + *param_2,lVar9);
LAB_143f3c377:
            if (local_68 != 0) {
              FUN_1400020a8();
            }
          }
          else if (*(int *)(lVar8 + 0x40) + iVar1 == 1) goto LAB_143f3c31f;
LAB_143f3c381:
          lVar9 = lVar9 + 0x168;
        } while (lVar9 != lVar4);
      }
      FUN_1447a1747(0,0);
      lVar8 = lVar8 + 0x168;
    } while (lVar8 != local_70);
  }
  FUN_141175adb(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143f3c468 FUN_143f3c468 body=4 status=ok
// SIG undefined FUN_143f3c468(void)

undefined1 FUN_143f3c468(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x2c);
}



// FUNCTION 143f3c476 FUN_143f3c476 body=1729 status=ok
// SIG undefined FUN_143f3c476(void)

void FUN_143f3c476(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char *pcVar3;
  longlong *plVar4;
  double dVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  size_t _Size;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_94;
  longlong local_90;
  ulonglong local_88;
  double local_80;
  LARGE_INTEGER local_78;
  longlong *local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar7 = (**(code **)(*param_1 + 0x10))();
  if (cVar7 != '\0') goto LAB_143f3c50a;
  FUN_1446f470e(&local_78,L"WINDOWS",1);
  plVar10 = (longlong *)FUN_140272950(&local_78);
  if (param_1[7] == 0) {
    puVar12 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_FUN_14b4ef9d0;
    puVar12[3] = 0;
    puVar12[4] = 0;
    *(undefined8 *)((longlong)puVar12 + 0x25) = 0;
    plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar11[1] = (longlong)&DAT_100000001;
    *plVar11 = (longlong)&PTR_FUN_14b4f2350;
    plVar11[2] = (longlong)puVar12;
    if (puVar12 == (undefined8 *)0x0) {
      FUN_146584018(0,plVar10,param_1 + 1);
      if (plVar11 == (longlong *)0x0) goto LAB_143f3c9ca;
LAB_143f3caac:
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      bVar6 = false;
    }
    else {
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        puVar12[1] = puVar12;
        if ((longlong *)puVar12[2] != plVar11) {
          LOCK();
          *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
          UNLOCK();
          plVar4 = (longlong *)puVar12[2];
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))();
            }
          }
          puVar12[2] = plVar11;
        }
        LOCK();
        plVar4 = plVar11 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
        FUN_146584018(puVar12,plVar10,param_1 + 1);
        goto LAB_143f3caac;
      }
      puVar12[1] = puVar12;
      FUN_146584018(puVar12,plVar10,param_1 + 1);
LAB_143f3c9ca:
      bVar6 = true;
    }
    param_1[7] = (longlong)puVar12;
    plVar4 = (longlong *)param_1[8];
    if (plVar11 == plVar4) {
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar11 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar8 = *piVar1;
          UNLOCK();
          plVar4 = plVar11;
          goto joined_r0x000143f3cafa;
        }
      }
    }
    else {
      param_1[8] = (longlong)plVar11;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar8 = *piVar1;
          UNLOCK();
joined_r0x000143f3cafa:
          if (iVar8 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
    if (!bVar6) {
      LOCK();
      plVar4 = plVar11 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  cVar7 = (**(code **)(*(longlong *)param_1[7] + 8))();
  if (cVar7 == '\0') goto LAB_143f3c50a;
  iVar8 = (**(code **)(*(longlong *)param_1[7] + 0x10))();
  if (iVar8 != 0) {
    *(int *)(param_1 + 0x15) = (int)param_1[6];
    *(undefined4 *)((longlong)param_1 + 0xac) = 100;
    goto LAB_143f3c50a;
  }
  if (param_1[9] == 0) {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    local_78.s.HighPart = 0;
    local_78.s.LowPart = DAT_14c892fa0;
    plVar11 = (longlong *)(**(code **)(*plVar10 + 0x28))(plVar10,&local_78,param_1 + 3,0);
    param_1[9] = (longlong)plVar11;
    (**(code **)(*plVar11 + 0x98))(plVar11,1);
  }
  local_64 = 0;
  if (param_1[10] == 0) {
    (**(code **)(*plVar10 + 0x90))(plVar10,&local_78);
    plVar10 = local_70;
    if (local_70 == (longlong *)0x0) {
      ((LARGE_INTEGER *)(param_1 + 10))->QuadPart = (LONGLONG)local_78;
      plVar11 = (longlong *)param_1[0xb];
      if (plVar11 != (longlong *)0x0) {
        param_1[0xb] = 0;
LAB_143f3c9e7:
        LOCK();
        plVar10 = plVar11 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar8 = *piVar1;
          UNLOCK();
joined_r0x000143f3ca12:
          if (iVar8 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
      ((LARGE_INTEGER *)(param_1 + 10))->QuadPart = (LONGLONG)local_78;
      plVar11 = (longlong *)param_1[0xb];
      if (local_70 == plVar11) {
        LOCK();
        plVar11 = local_70 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar8 = *piVar1;
          UNLOCK();
          plVar11 = plVar10;
          goto joined_r0x000143f3ca12;
        }
      }
      else {
        param_1[0xb] = (longlong)local_70;
        if (plVar11 != (longlong *)0x0) goto LAB_143f3c9e7;
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_70 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
  }
  QueryPerformanceCounter(&local_78);
  iVar8 = (int)param_1[6];
  if ((double)((float)iVar8 / 1000.0) <
      ((double)local_78.QuadPart * DAT_14c83f420 + 16777216.0) - (double)param_1[0xc]) {
    if ((int)param_1[0xd] < *(int *)((longlong)param_1 + 0x2c)) {
      *(undefined1 *)param_1[0x11] = 0xff;
      *(undefined1 *)(param_1[0x11] + 1) = 0xff;
      *(char *)(param_1[0x11] + 2) = (char)param_1[0xd];
      QueryPerformanceCounter(&local_78);
      dVar5 = (double)local_78.QuadPart * DAT_14c83f420 + 16777216.0;
      local_80 = dVar5;
      memcpy((void *)((longlong)*(int *)((longlong)param_1 + 0x7c) + param_1[0x11]),&local_80,
             (longlong)(int)param_1[0x10]);
      (**(code **)(*(longlong *)param_1[10] + 0xa8))((longlong *)param_1[10],&local_78);
      plVar10 = (longlong *)(**(code **)(*(longlong *)param_1[7] + 0x18))();
      (**(code **)(*plVar10 + 0xa8))(plVar10,&local_88);
      if ((local_78.QuadPart == local_88) ||
         ((**(code **)(*(longlong *)param_1[10] + 0xa8))((longlong *)param_1[10],&local_90),
         local_90 == 0)) {
        plVar10 = (longlong *)param_1[10];
        plVar11 = (longlong *)(**(code **)(*(longlong *)param_1[7] + 0x18))();
        (**(code **)(*plVar11 + 0x60))(plVar11,&local_78);
        (**(code **)(*plVar10 + 0x58))(plVar10,&local_78);
        if (local_78.QuadPart != 0) {
          FUN_1400020a8();
        }
      }
      else {
        (**(code **)(*(longlong *)param_1[10] + 0xa8))((longlong *)param_1[10],&local_78);
        local_94 = 0;
        plVar10 = (longlong *)(**(code **)(*(longlong *)param_1[7] + 0x18))();
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_94);
        (**(code **)(*(longlong *)param_1[10] + 0x18))((longlong *)param_1[10],local_94);
      }
      (**(code **)(*(longlong *)param_1[10] + 0x28))((longlong *)param_1[10],(int)param_1[5]);
      local_a8 = param_1[10];
      (**(code **)(*(longlong *)param_1[9] + 0x50))
                ((longlong *)param_1[9],param_1[0x11],*(undefined4 *)((longlong)param_1 + 0x84),
                 &local_64);
      *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
      param_1[0xc] = (longlong)dVar5;
    }
    else {
      iVar9 = (int)param_1[0xf];
      if (0 < iVar9) {
        iVar8 = (int)(longlong)(((double)param_1[0xe] / (double)iVar9) * 1000.0);
      }
      *(int *)(param_1 + 0x15) = iVar8;
      *(int *)((longlong)param_1 + 0xac) =
           (int)((1.0 - (float)iVar9 / (float)(int)param_1[0xd]) * 100.0);
    }
  }
  while( true ) {
    local_a8 = param_1[10];
    local_a0 = 0;
    cVar7 = (**(code **)(*(longlong *)param_1[9] + 0x60))
                      ((longlong *)param_1[9],param_1[0x13],
                       *(undefined4 *)((longlong)param_1 + 0x84),&local_64);
    if ((cVar7 == '\0') || (local_64 < 1)) break;
    if ((((local_64 == *(int *)((longlong)param_1 + 0x84)) &&
         (pcVar3 = (char *)param_1[0x13], *pcVar3 == '\0')) && (pcVar3[1] == '\0')) &&
       ((int)param_1[0xd] - 1U == (uint)(byte)pcVar3[2])) {
      iVar8 = *(int *)((longlong)param_1 + 0x7c);
      _Size = (size_t)(int)param_1[0x10];
      iVar9 = memcmp(pcVar3 + iVar8 + _Size,(void *)(param_1[0x11] + (longlong)iVar8 + _Size),
                     (longlong)*(int *)((longlong)param_1 + 0x34));
      if (iVar9 == 0) {
        local_80 = 0.0;
        memcpy(&local_80,pcVar3 + iVar8,_Size);
        *(int *)(param_1 + 0xf) = (int)param_1[0xf] + 1;
        QueryPerformanceCounter(&local_78);
        param_1[0xe] = (longlong)
                       ((((double)local_78.QuadPart * DAT_14c83f420 + 16777216.0) - local_80) +
                       (double)param_1[0xe]);
        param_1[0xc] = 0;
      }
    }
  }
LAB_143f3c50a:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f3cb50 FUN_143f3cb50 body=890 status=ok
// SIG undefined FUN_143f3cb50(void)

undefined8 FUN_143f3cb50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined2 *puVar5;
  ushort uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ushort uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  longlong local_98;
  int local_90;
  undefined8 local_88;
  int local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar7 = 0;
  if (*(int *)(param_1 + 0x28) == 0) goto LAB_143f3cb8a;
  uVar7 = FUN_141546c72();
  FUN_145cc3404(uVar7,&local_98);
  if ((longlong)local_90 == 0) {
    uVar7 = 0;
    local_90 = 0;
  }
  else {
    lVar11 = local_98;
    do {
      if ((longlong)*(int *)(lVar11 + 0x118) != 0) {
        puVar8 = *(undefined8 **)(lVar11 + 0x110);
        puVar9 = puVar8 + (longlong)*(int *)(lVar11 + 0x118) * 2;
LAB_143f3cc2a:
        puVar5 = &DAT_149dfb77a;
        if (*(int *)(puVar8 + 1) != 0) {
          puVar5 = (undefined2 *)*puVar8;
        }
        lVar15 = 0;
        do {
          uVar13 = *(ushort *)((longlong)puVar5 + lVar15);
          uVar14 = (ulonglong)uVar13;
          uVar6 = *(ushort *)((longlong)&DAT_14b4f2468 + lVar15);
          if (uVar13 == uVar6) {
            if (uVar13 == 0) goto LAB_143f3cc98;
          }
          else {
            if (0x7f < (uVar6 | uVar13)) goto LAB_143f3cc73;
            uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
            uVar12 = (ulonglong)uVar6;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
            if ((&DAT_149e05da0)[uVar14] != (&DAT_149e05da0)[uVar12]) goto LAB_143f3cc73;
          }
          lVar15 = lVar15 + 2;
        } while( true );
      }
LAB_143f3cc84:
      lVar11 = lVar11 + 0x168;
    } while (lVar11 != (longlong)local_90 * 0x168 + local_98);
LAB_143f3cca8:
    uVar7 = 0;
  }
  goto LAB_143f3ceac;
LAB_143f3cc73:
  if (uVar13 == uVar6) {
LAB_143f3cc98:
    if ((lVar11 == 0) || (*(int *)(lVar11 + 0xd0) < 2)) goto LAB_143f3cca8;
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    FUN_14047afda(&local_b8,lVar11 + 200);
    uVar7 = 0;
    cVar4 = FUN_14047b282(local_b8,&local_a8,0);
    if ((cVar4 == '\0') || (local_a8 == 0)) goto LAB_143f3ce55;
    if ((longlong)*(int *)(param_1 + 0x28) == 0) {
      uVar7 = 0;
      goto LAB_143f3ce55;
    }
    puVar9 = *(undefined8 **)(param_1 + 0x20);
    puVar8 = puVar9 + (longlong)*(int *)(param_1 + 0x28) * 5;
    uVar7 = 0;
    goto LAB_143f3cd24;
  }
  puVar8 = puVar8 + 2;
  if (puVar8 == puVar9) goto LAB_143f3cc84;
  goto LAB_143f3cc2a;
LAB_143f3cd24:
  do {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = *puVar9;
    local_80 = *(int *)(puVar9 + 1) + -1;
    if (*(int *)(puVar9 + 1) == 0) {
      local_80 = 0;
    }
    cVar4 = FUN_14047fa10(local_a8,&local_88,&local_78);
    if ((cVar4 == '\0') || ((int)uStack_70 < 2)) {
      FUN_14658425b(&local_c8,puVar9);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      local_c8 = local_78;
      local_78 = 0;
      local_c0 = (int)uStack_70;
      local_bc = uStack_70._4_4_;
    }
    if (local_c0 == *(int *)(puVar9 + 4)) {
      if (1 < local_c0) {
        lVar11 = 0;
        while( true ) {
          uVar13 = *(ushort *)(local_c8 + lVar11);
          uVar6 = *(ushort *)(puVar9[3] + lVar11);
          if (uVar13 != uVar6) break;
          if (uVar13 == 0) goto LAB_143f3ce0c;
LAB_143f3cdb8:
          lVar11 = lVar11 + 2;
        }
        if ((uVar6 | uVar13) < 0x80) {
          if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[(uint)uVar6]) goto LAB_143f3cdb8;
          iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar13] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar6];
        }
        else {
          iVar10 = (uint)uVar13 - (uint)uVar6;
        }
        if (iVar10 != 0) goto LAB_143f3cdf7;
      }
    }
    else if (*(int *)(puVar9 + 4) + local_c0 != 1) {
LAB_143f3cdf7:
      iVar10 = local_c0 + -1;
      if (local_c0 == 0) {
        iVar10 = 0;
      }
      FUN_1402980a2(puVar9 + 3,local_c8,iVar10);
      uVar7 = 1;
    }
LAB_143f3ce0c:
    if (local_c8 != 0) {
      FUN_1400020a8(local_c8);
    }
    puVar9 = puVar9 + 5;
  } while (puVar9 != puVar8);
LAB_143f3ce55:
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b0 + 0x10))(local_b0);
      }
    }
  }
  plVar1 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_a0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
LAB_143f3ceac:
  FUN_141175adb(local_98,local_90);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
LAB_143f3cb8a:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 143f3cecc FUN_143f3cecc body=106 status=ok
// SIG undefined FUN_143f3cecc(void)

void FUN_143f3cecc(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(char *)(param_1 + 0x20) == '\x01') &&
     (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c))) {
    lVar2 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x68);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 0x70;
        if (*(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 0x70) == param_2) {
          if (lVar2 + 8 == 0 || lVar2 == 0) {
            return;
          }
          FUN_145daf526(param_1,lVar2 + 8);
          return;
        }
        iVar1 = *(int *)(lVar2 + 0x68);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 143f3d076 FUN_143f3d076 body=125 status=ok
// SIG undefined FUN_143f3d076(void)

undefined8 * FUN_143f3d076(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b4eff20;
  plVar1 = param_1 + 7;
  if (*(int *)(param_1 + 8) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f3d0c7;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143f3d0c7:
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f3d272 FUN_143f3d272 body=219 status=ok
// SIG undefined FUN_143f3d272(void)

void FUN_143f3d272(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4eddb0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4eff20;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_144a06ca8(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 << 2);
  }
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  FUN_145d545b6(puVar2 + 7,param_1 + 0x38);
  *(undefined2 *)(puVar2 + 9) = *(undefined2 *)(param_1 + 0x48);
  return;
}



// FUNCTION 143f3d34e FUN_143f3d34e body=219 status=ok
// SIG undefined FUN_143f3d34e(void)

void FUN_143f3d34e(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4eddb0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4eff20;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_144a06ca8(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 << 2);
  }
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  FUN_145d545b6(puVar2 + 7,param_1 + 0x38);
  *(undefined2 *)(puVar2 + 9) = *(undefined2 *)(param_1 + 0x48);
  return;
}



// FUNCTION 143f3d42a FUN_143f3d42a body=278 status=ok
// SIG undefined FUN_143f3d42a(void)

void FUN_143f3d42a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4eddb0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b4eff20;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_144a06ca8(&p_Var2->Flags,iVar1,0);
    memcpy(*(void **)&p_Var2->Flags,_Src,(longlong)iVar1 << 2);
  }
  p_Var2[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Flink = 0;
  FUN_145d545b6(&p_Var2[1].CriticalSection,param_1 + 0x38);
  *(undefined2 *)&p_Var2[1].ProcessLocksList.Blink = *(undefined2 *)(param_1 + 0x48);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f3d52a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f3d540 FUN_143f3d540 body=65 status=ok
// SIG undefined FUN_143f3d540(void)

void FUN_143f3d540(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143f3d69a(param_1 + 0x20,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f3d582 FUN_143f3d582 body=278 status=ok
// SIG undefined FUN_143f3d582(void)

undefined8 FUN_143f3d582(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143f3d692;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143f3d692;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143f3d692:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143f3d646;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143f3d69a(param_1 + 0x20,&local_2c);
      uVar6 = 1;
      goto LAB_143f3d646;
    }
  }
  uVar6 = 0;
LAB_143f3d646:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f3d69a FUN_143f3d69a body=200 status=ok
// SIG undefined FUN_143f3d69a(void)

void FUN_143f3d69a(longlong *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar2 = *param_2;
  if ((uVar2 != 0) &&
     ((lVar3 = *param_1, *(char *)((longlong)param_1 + 0x29) != '\0' ||
      ((uVar2 < 5 && ((0x1aU >> (uVar2 & 0x1f) & 1) != 0)))))) {
    lVar6 = param_1[2];
    if ((longlong)(int)lVar6 != 0) {
      lVar4 = param_1[1];
      lVar7 = 0;
      do {
        FUN_145ec8e38(lVar3,*(undefined4 *)(lVar4 + lVar7),0);
        lVar7 = lVar7 + 4;
      } while ((longlong)(int)lVar6 * 4 != lVar7);
    }
    if (((uVar2 < 5) && ((0x1aU >> (uVar2 & 0x1f) & 1) != 0)) &&
       (cVar1 = *(char *)(lVar3 + 0x408), *(undefined1 *)(lVar3 + 0x408) = 0, cVar1 != '\0')) {
      FUN_145e797e2(lVar3 + 0x288,0);
    }
  }
  plVar5 = (longlong *)param_1[3];
  if (plVar5 == (longlong *)0x0 || (int)param_1[4] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143f3d74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x60))(plVar5,uVar2);
  return;
}



// FUNCTION 143f3d762 FUN_143f3d762 body=111 status=ok
// SIG undefined FUN_143f3d762(void)

undefined8 * FUN_143f3d762(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b4effb0;
  plVar1 = param_1 + 6;
  if (*(int *)(param_1 + 7) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f3d7b3;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143f3d7b3:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f3d950 FUN_143f3d950 body=131 status=ok
// SIG undefined FUN_143f3d950(void)

void FUN_143f3d950(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4eddb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4effb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((longlong)puVar1 + 0x24) = uVar2;
  *(undefined4 *)(puVar1 + 5) = uVar3;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uVar4;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  FUN_14009d848(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 143f3d9d4 FUN_143f3d9d4 body=131 status=ok
// SIG undefined FUN_143f3d9d4(void)

void FUN_143f3d9d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4eddb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4effb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((longlong)puVar1 + 0x24) = uVar2;
  *(undefined4 *)(puVar1 + 5) = uVar3;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uVar4;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  FUN_14009d848(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 143f3da58 FUN_143f3da58 body=165 status=ok
// SIG undefined FUN_143f3da58(void)

void FUN_143f3da58(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  DWORD DVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4eddb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4effb0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  DVar2 = *(DWORD *)(param_1 + 0x24);
  DVar3 = *(DWORD *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->ContentionCount = DVar2;
  p_Var1->Flags = DVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar4;
  p_Var1->SpareWORD = (short)((uint)uVar4 >> 0x10);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  *(undefined4 *)&p_Var1[1].CriticalSection = 0;
  FUN_14009d848(p_Var1 + 1,param_1 + 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f3daee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f3dafe FUN_143f3dafe body=65 status=ok
// SIG undefined FUN_143f3dafe(void)

void FUN_143f3dafe(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143f3dc58(param_1 + 0x20,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f3db40 FUN_143f3db40 body=278 status=ok
// SIG undefined FUN_143f3db40(void)

undefined8 FUN_143f3db40(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143f3dc50;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143f3dc50;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143f3dc50:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143f3dc04;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143f3dc58(param_1 + 0x20,&local_2c);
      uVar6 = 1;
      goto LAB_143f3dc04;
    }
  }
  uVar6 = 0;
LAB_143f3dc04:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f3dc58 FUN_143f3dc58 body=70 status=ok
// SIG undefined FUN_143f3dc58(void)

void FUN_143f3dc58(undefined8 *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_2 == 0) {
    uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
  }
  FUN_145ec8e38(*param_1,*(undefined4 *)(param_1 + 1),uVar1);
  if ((longlong *)param_1[2] == (longlong *)0x0 || *(int *)(param_1 + 3) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143f3dc9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[2] + 0x60))();
  return;
}



// FUNCTION 143f3dc9e FUN_143f3dc9e body=77 status=ok
// SIG undefined FUN_143f3dc9e(void)

void FUN_143f3dc9e(longlong param_1,int param_2)

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



// FUNCTION 143f3dcec FUN_143f3dcec body=31 status=ok
// SIG undefined FUN_143f3dcec(void)

undefined8 FUN_143f3dcec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f3dd10 FUN_143f3dd10 body=64 status=ok
// SIG undefined FUN_143f3dd10(void)

undefined8 * FUN_143f3dd10(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f0090;
  plVar2 = (longlong *)param_1[5];
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



// FUNCTION 143f3dd64 FUN_143f3dd64 body=118 status=ok
// SIG undefined FUN_143f3dd64(void)

void FUN_143f3dd64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f0100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f0090;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f3ddda FUN_143f3ddda body=118 status=ok
// SIG undefined FUN_143f3ddda(void)

void FUN_143f3ddda(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f0100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f0090;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f3de50 FUN_143f3de50 body=156 status=ok
// SIG undefined FUN_143f3de50(void)

void FUN_143f3de50(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f0100;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f0090;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f3dedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f3df0c FUN_143f3df0c body=42 status=ok
// SIG undefined FUN_143f3df0c(void)

undefined8 FUN_143f3df0c(longlong param_1)

{
  if (((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x28) + 8))) {
    FUN_1418c0138(*(undefined8 *)(param_1 + 0x18));
  }
  return 1;
}



// FUNCTION 143f3df36 FUN_143f3df36 body=64 status=ok
// SIG undefined FUN_143f3df36(void)

undefined8 * FUN_143f3df36(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f0170;
  plVar2 = (longlong *)param_1[5];
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



// FUNCTION 143f3df8a FUN_143f3df8a body=118 status=ok
// SIG undefined FUN_143f3df8a(void)

void FUN_143f3df8a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f0170;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f3e000 FUN_143f3e000 body=118 status=ok
// SIG undefined FUN_143f3e000(void)

void FUN_143f3e000(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f0170;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f3e076 FUN_143f3e076 body=156 status=ok
// SIG undefined FUN_143f3e076(void)

void FUN_143f3e076(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f0170;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f3e102. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f3e11c FUN_143f3e11c body=20 status=ok
// SIG undefined FUN_143f3e11c(void)

undefined1 FUN_143f3e11c(longlong param_1)

{
  FUN_143f3e130(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f3e130 FUN_143f3e130 body=148 status=ok
// SIG undefined FUN_143f3e130(void)

void FUN_143f3e130(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((param_1[1] != 0) && (param_1[2] != 0)) && (0 < *(int *)(param_1[2] + 8))) {
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
    if ((*(int *)(*param_1 + 0x60) != 0) &&
       (plVar3 = *(longlong **)(*param_1 + 0x58), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x60))(plVar3,&local_28);
      plVar3 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_20 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_20)(plStack_20);
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
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f3e1c6 FUN_143f3e1c6 body=64 status=ok
// SIG undefined FUN_143f3e1c6(void)

undefined8 * FUN_143f3e1c6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f01e0;
  plVar2 = (longlong *)param_1[5];
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



// FUNCTION 143f3e21a FUN_143f3e21a body=126 status=ok
// SIG undefined FUN_143f3e21a(void)

void FUN_143f3e21a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438ab0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f01e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 143f3e298 FUN_143f3e298 body=126 status=ok
// SIG undefined FUN_143f3e298(void)

void FUN_143f3e298(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438ab0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f01e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 143f3e316 FUN_143f3e316 body=164 status=ok
// SIG undefined FUN_143f3e316(void)

void FUN_143f3e316(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b438ab0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f01e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f3e3aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}


