// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14349762c FUN_14349762c body=93 status=ok
// SIG undefined FUN_14349762c(void)

void FUN_14349762c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a879340;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14349768a FUN_14349768a body=126 status=ok
// SIG undefined FUN_14349768a(void)

void FUN_14349768a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a879340;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434976f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143497714 FUN_143497714 body=23 status=ok
// SIG undefined FUN_143497714(void)

undefined1 FUN_143497714(longlong param_1)

{
  FUN_147d1d9b0(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  return 1;
}



// FUNCTION 143497756 FUN_143497756 body=29 status=ok
// SIG undefined FUN_143497756(void)

void FUN_143497756(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143497774 FUN_143497774 body=57 status=ok
// SIG undefined FUN_143497774(void)

undefined8 * FUN_143497774(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a8793b0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434977ae FUN_1434977ae body=282 status=ok
// SIG undefined FUN_1434977ae(void)

undefined8 * FUN_1434977ae(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14349623b);
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



// FUNCTION 1434978c8 FUN_1434978c8 body=122 status=ok
// SIG undefined FUN_1434978c8(void)

void FUN_1434978c8(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x15];
  iVar2 = *(int *)(param_1 + 0x18);
  *(undefined1 *)(lVar3 + 0x3a) = 1;
  FUN_1447cd5a6((longlong)iVar2 * 0x18 + *(longlong *)(lVar3 + 8),param_1 + 0x16);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143497938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14349796c FUN_14349796c body=29 status=ok
// SIG undefined FUN_14349796c(void)

void FUN_14349796c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14349798a FUN_14349798a body=57 status=ok
// SIG undefined FUN_14349798a(void)

undefined8 * FUN_14349798a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a879420;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434979c4 FUN_1434979c4 body=282 status=ok
// SIG undefined FUN_1434979c4(void)

undefined8 * FUN_1434979c4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14349623b);
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



// FUNCTION 143497ade FUN_143497ade body=122 status=ok
// SIG undefined FUN_143497ade(void)

void FUN_143497ade(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x15];
  iVar2 = *(int *)(param_1 + 0x18);
  *(undefined1 *)(lVar3 + 0x3a) = 1;
  FUN_1447cd5a6((longlong)iVar2 * 0x18 + *(longlong *)(lVar3 + 8),param_1 + 0x16);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143497b4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143497b58 FUN_143497b58 body=587 status=ok
// SIG undefined FUN_143497b58(void)

void FUN_143497b58(uint *param_1,ulonglong *param_2,undefined4 *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  uVar2 = *param_2;
  if ((uVar2 >> 0x20 == 0) || (uVar7 = (uint)uVar2, (int)uVar7 < 0)) goto LAB_143497c1a;
  if (DAT_14c9647dc <= (int)uVar7) goto LAB_143497c1a;
  uVar12 = (ulonglong)((uint)(uVar2 >> 0x10) & 0x7fff);
  lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar12 * 8);
  if (((lVar9 == 0) || (iVar8 = (int)(uVar2 >> 0x20), *(int *)(lVar9 + 0x10) != iVar8)) ||
     ((*(uint *)(lVar9 + 8) & 0x10200000) != 0)) goto LAB_143497c1a;
  if (((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
  goto LAB_143497c1a;
  plVar6 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (((plVar6 == (longlong *)0x0) || (*(uint *)(plVar6 + 2) != param_1[1])) ||
     ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) goto LAB_143497c1a;
  if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
    lVar9 = *plVar6;
  }
  else {
    lVar9 = 0;
  }
  FUN_1409b47b8();
  *(byte *)(lVar9 + 0x89e) = *(byte *)(lVar9 + 0x89e) & 0xf9 | 2;
  if (((((int)uVar7 < DAT_14c9647dc) &&
       (puVar11 = (undefined8 *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar12 * 8))
       , puVar11 != (undefined8 *)0x0)) && (*(int *)(puVar11 + 2) == iVar8)) &&
     ((*(uint *)(puVar11 + 1) & 0x10200000) == 0)) {
    plVar6 = (longlong *)*puVar11;
  }
  else {
    plVar6 = (longlong *)0x0;
  }
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x388))();
  if (plVar6 == (longlong *)0x0) goto LAB_143497c1a;
  lVar5 = plVar6[1];
  if (0 < (longlong)(int)lVar5) {
    lVar13 = 0x20;
    lVar10 = 0;
    iVar8 = DAT_14c7612f4;
    do {
      if (iVar8 < lVar10) {
        uVar4 = FUN_1433f2764(*(longlong *)(*plVar6 + lVar10 * 8) + 0x298,&local_58);
        *(undefined8 *)(*(longlong *)(lVar9 + 0x868) + lVar13) = uVar4;
        iVar8 = DAT_14c7612f4;
      }
      lVar10 = lVar10 + 1;
      lVar13 = lVar13 + 0x28;
    } while ((int)lVar5 != lVar10);
  }
  *(byte *)(lVar9 + 0x8a1) = *(byte *)(lVar9 + 0x8a1) | 0x10;
  if ((~*(byte *)(lVar9 + 0x9c) & 3) == 0) {
    bVar3 = *(byte *)(lVar9 + 0x9d);
    if ((bVar3 & 1) == 0) {
LAB_143497d50:
      *(byte *)(lVar9 + 0x9d) = bVar3 | 1;
      FUN_1401057d4(lVar9);
      FUN_14010586c(&DAT_14cad0140,lVar9);
    }
    else if (*(longlong *)(lVar9 + 0xb0) == 0) {
      lVar5 = FUN_1448abda6(lVar9);
      if (lVar5 == 0) {
        bVar3 = *(byte *)(lVar9 + 0x9d);
        goto LAB_143497d50;
      }
    }
  }
  if (*(longlong *)(lVar9 + 0x8a8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
LAB_143497c1a:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143497dde FUN_143497dde body=12 status=ok
// SIG undefined FUN_143497dde(void)

void FUN_143497dde(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143497de7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143497dea FUN_143497dea body=29 status=ok
// SIG undefined FUN_143497dea(void)

undefined8 FUN_143497dea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143497e07 FUN_143497e07 body=4013 status=ok
// SIG undefined FUN_143497e07(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143497e07(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined8 local_78;
  int iStack_70;
  uint uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = (undefined8 *)0x0;
  uStack_90 = (undefined **)0x0;
  local_88 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a864310,1,0);
  FUN_1400b22c2(&local_78,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_78,&DAT_14cad2048);
  if (cVar2 == '\0') {
    _DAT_14cad2048 = 0;
    uRam000000014cad2050 = 0;
  }
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_88 = 0;
  local_98 = (undefined8 *)0x0;
  uStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a865000,1,0);
  local_88 = 1;
  uStack_90 = &PTR_FUN_14a865be0;
  local_98 = (undefined8 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a865c00,1,0);
  local_78._0_4_ = 0x80;
  local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cad20c8,L"r.ReflectionCaptureResolution",&local_78,
                L"Set the resolution for all reflection capture cubemaps. Should be set via project\'s Render Settings. Must be power of 2. Defaults to 128.\n"
               );
  atexit(FUN_14348a692);
  local_78 = (wchar_t *)((ulonglong)local_78._4_4_ << 0x20);
  local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cad20e0,L"r.ReflectionCaptureUpdateEveryFrame",&local_78,
                L"When set, reflection captures will constantly be scheduled for update.\n");
  atexit(FUN_14348a6d7);
  DAT_14cad20f8 = 0;
  _DAT_14cad2100 = 0;
  atexit((_func_5014 *)&LAB_14348a71c);
  DAT_14cad2108 = 0;
  _DAT_14cad2110 = 0;
  atexit((_func_5014 *)&LAB_14348a72d);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cad2118);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cad2118,4000);
  atexit((_func_5014 *)&LAB_14348a73e);
  local_88 = 0;
  local_98 = (undefined8 *)0x0;
  uStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a866640,1,0);
  local_88 = 1;
  uStack_90 = &PTR_FUN_14a867700;
  local_98 = (undefined8 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a867720,1,0);
  local_78 = (wchar_t *)0x0;
  iStack_70 = 0;
  FUN_1446efa72(&local_78,0,2,0x10);
  iStack_70 = 2;
  *(undefined ***)local_78 = &PTR_LAB_149e170a0;
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
  *(longlong *)((longlong)local_78 + 0x10) = lVar4;
  *(undefined ***)local_78 = &PTR_FUN_14a879090;
  local_7c[0] = 1;
  local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_140bd5914(&DAT_14cad2190,L"r.VT.RVT.StreamingMips",local_7c,L"Enable streaming mips for RVT");
  (**(code **)(*DAT_14cad2198 + 200))(DAT_14cad2198,&local_78);
  if (iStack_70 == 0) {
LAB_1434980db:
    if (local_78 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    iStack_70 = 0;
    goto LAB_1434980db;
  }
  atexit(FUN_14348a783);
  local_78 = (wchar_t *)0x0;
  iStack_70 = 0;
  FUN_1446efa72(&local_78,0,2,0x10);
  iStack_70 = 2;
  *(undefined ***)local_78 = &PTR_LAB_149e170a0;
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
  *(longlong *)((longlong)local_78 + 0x10) = lVar4;
  *(undefined ***)local_78 = &PTR_FUN_14a879100;
  local_7c[0] = 0;
  local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_140bd5914(&DAT_14cad21a8,L"r.VT.RVT.StreamingMips.UseAlways",local_7c,
                L"Whenever streaming low mips are in use, only show the streaming mips and never show runtime generated pages.\n"
               );
  (**(code **)(*DAT_14cad21b0 + 200))(DAT_14cad21b0,&local_78);
  if (iStack_70 == 0) {
LAB_1434981ce:
    if (local_78 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    iStack_70 = 0;
    goto LAB_1434981ce;
  }
  atexit(FUN_14348a7c8);
  local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffffffffff00);
  local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_140bd5914(&DAT_14cad21c0,L"r.VT.RVT.VisLogManualInvalidations",&local_78,
                L"Outputs the RVT component invalidations and their bounds in the Visual Logger");
  atexit(FUN_14348a80d);
  local_88 = 1;
  uStack_90 = &PTR_FUN_14a8693d0;
  local_98 = (undefined8 *)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a869420,1,&PTR_FUN_14a8693f0);
  DAT_14cad2298 = 0;
  _DAT_14cad22a0 = 0;
  DAT_14cad2278 = 0;
  _DAT_14cad2280 = 0;
  _DAT_14cad22a4 = 0xffffffff00000080;
  DAT_14cad22ac = 0;
  DAT_14cad22b8 = 0;
  DAT_14cad22c0 = 0;
  atexit(FUN_14348a889);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cad22c8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cad22c8,4000);
  atexit((_func_5014 *)&LAB_14348a8b2);
  local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffffffffff00);
  local_98._0_4_ = 0x40;
  FUN_140bd5914(&DAT_14cad22f0,L"r.SceneCapture.OverrideOrthographicTilingValues",&local_78,
                L"Override defined orthographic values from SceneCaptureComponent2D - Ignored in Perspective mode."
               );
  atexit(FUN_14348a8c0);
  local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffffffffff00);
  local_98._0_4_ = 0x40;
  FUN_140bd5914(&DAT_14cad2308,L"r.SceneCapture.EnableOrthographicTiling",&local_78,
                L"Render the scene in n frames (i.e TileCount) - Ignored in Perspective mode, works only in Orthographic mode and when r.SceneCapture.OverrideOrthographicTilingValues is on."
               );
  atexit(FUN_14348a905);
  local_78._0_4_ = 4;
  local_98._0_4_ = 0x40;
  FUN_14078dbce(&DAT_14cad2320,L"r.SceneCapture.OrthographicNumXTiles",&local_78,
                L"Number of X tiles to render. Ignored in Perspective mode, works only in Orthographic mode and when r.SceneCapture.OverrideOrthographicTilingValues is on."
               );
  atexit(FUN_14348a94a);
  local_78 = (wchar_t *)CONCAT44(local_78._4_4_,4);
  local_98._0_4_ = 0x40;
  FUN_14078dbce(&DAT_14cad2338,L"r.SceneCapture.OrthographicNumYTiles",&local_78,
                L"Number of Y tiles to render. Ignored in Perspective mode, works only in Orthographic mode and when r.SceneCapture.OverrideOrthographicTilingValues is on."
               );
  atexit(FUN_14348a98f);
  local_78 = (wchar_t *)CONCAT71(local_78._1_7_,1);
  local_98._0_4_ = 0x40;
  FUN_140bd5914(&DAT_14cad2350,L"r.SceneCapture.CullByDetailMode",&local_78,
                L"Whether to prevent scene capture updates according to the current detail mode");
  atexit(FUN_14348a9d4);
  FUN_1446f470e(&DAT_14cad2370,L"DefaultSceneRoot",1);
  FUN_1446f470e(&DAT_14cad2378,L"Mobility",1);
  local_78 = L"InvalidMove";
  iStack_70 = 0xb;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"SceneComponent";
  iStack_70 = 0xe;
  FUN_1446e940c(local_80,&local_78);
  local_78 = L"move";
  iStack_70 = 4;
  FUN_140208c1e(&DAT_14cad2380,local_80,local_7c,&local_78);
  atexit((_func_5014 *)&LAB_14348af41);
  FUN_1446f470e(&DAT_14cad2390,L"PhysicsVolumeTrace",1);
  local_98._0_4_ = 0;
  FUN_14153156c(&DAT_14cad2398,L"s.CheckRootComponentReplicationOnAttachedChildren",&DAT_14c761428,
                L"Scene Component OnRep_AttachedChildren:\nfalse: fix up any children that are missing the parent, true: fixes up all children except non-replicated root components (default)"
               );
  atexit(FUN_14348af55);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cad23a8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cad23a8,4000);
  atexit((_func_5014 *)&LAB_14348afb4);
  local_98._0_4_ = 0;
  FUN_14153156c(&DAT_14cad23d8,L"p.LocalBoundsUseAttachParentBound",&DAT_14cad23d0,
                L"If enabled, Components with \'Use Attach Parent Bound\' will compute their local bounds based their parent\'s bounds"
               );
  atexit(FUN_14348bdb8);
  local_98 = (undefined8 *)((ulonglong)local_98._4_4_ << 0x20);
  FUN_141471170(&DAT_14cad23e8,L"p.SkipUpdateOverlapsOptimEnabled",&DAT_14c76142c,
                L"If enabled, we cache whether we need to call UpdateOverlaps on certain components"
               );
  atexit(FUN_14348bdfd);
  local_88 = 0;
  local_98 = (undefined8 *)0x0;
  uStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a86b360,1,0);
  local_78 = (wchar_t *)0xd29f11ecb6e31b1c;
  iStack_70 = 0x857e9f85;
  uStack_6c = 0x6f9970e2;
  _DAT_14cad2418 = 0xb6e31b1c;
  uRam000000014cad241c = 0xd29f11ec;
  uRam000000014cad2420 = 0x857e9f85;
  uRam000000014cad2424 = 0x6f9970e2;
  FUN_141005458(&local_78,1,L"ShapeComponentVer",0);
  atexit((_func_5014 *)&LAB_14348be96);
  local_78 = (wchar_t *)&DAT_14a19662d;
  iStack_70 = 4;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_78,1);
  DAT_14cad2438 = (ulonglong)uVar3;
  uStack_90 = &PTR_FUN_14a8757e0;
  local_98 = (undefined8 *)0x2;
  local_88 = 4;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8758b0,1,&PTR_FUN_14a875860);
  local_78._0_4_ = 1;
  local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cad2bd0,L"a.ParallelAnimEvaluation",&local_78,
                L"If 1, animation evaluation will be run across the task graph system. If 0, evaluation will run purely on the game thread"
               );
  atexit(FUN_14348c384);
  local_78._0_4_ = 1;
  local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cad2bb8,L"a.ParallelAnimUpdate",&local_78,
                L"If != 0, then we update animation blend tree, native update, asset players and montages (is possible) on worker threads."
               );
  atexit(FUN_14348c3c9);
  local_78._0_4_ = 0;
  local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cad2ba0,L"a.ForceParallelAnimUpdate",&local_78,
                L"If != 0, then we update animations on worker threads regardless of the setting on the project or anim blueprint."
               );
  atexit(FUN_14348c40e);
  local_78._0_4_ = 1;
  local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cad2870,L"a.ParallelAnimInterpolation",&local_78,
                L"If 1, animation interpolation will be run across the task graph system. If 0, interpolation will run purely on the game thread"
               );
  atexit(FUN_14348c453);
  local_78._0_4_ = 0;
  local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_140a6b41e(&DAT_14cad2888,L"CriticalPathStall.ParallelAnimation",&local_78,
                L"Sleep for the given time in each parallel animation task. Time is given in ms. This is a debug option used for critical path analysis and forcing a change in the critical path."
               );
  atexit(FUN_14348c498);
  local_78._0_4_ = 1;
  local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cad28a0,L"tick.HiPriSkinnedMeshes",&local_78,
                L"If > 0, then schedule the skinned component ticks in a tick group before other ticks."
               );
  atexit(FUN_14348c4dd);
  local_78._0_4_ = 1;
  local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cad28b8,L"a.CacheLocalSpaceBounds",&local_78,
                L"If 1 (default) local-space bounds are calculated and cached, otherwise worldspace bounds are built and cached (and inverse transformed to produce local bounds)."
               );
  atexit(FUN_14348c522);
  local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cad28d0,L"TaskGraph.TaskPriorities.ParallelAnimCompletionTaskHighPriority",
                &DAT_14c761430,
                L"Allows parallel anim completion tasks to take priority on the GT so further work (if needed) can be kicked off earlier."
               );
  atexit(FUN_14348c567);
  local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
  uStack_90._0_4_ = 0x200;
  FUN_1412c7f16(&DAT_14cad28e0,L"TaskGraph.TaskPriorities.ParallelAnimationEvaluationTask",
                L"Task and thread priority for FParallelAnimationEvaluationTask",0x400);
  atexit(FUN_14348c5ac);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cad2920);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cad2920,4000);
  DAT_14cad2948 = 0;
  _DAT_14cad2950 = 0;
  _DAT_14cad2958 = 2;
  atexit(FUN_14348c616);
  DAT_14cad2960 = 0;
  DAT_14cad2964 = 0;
  local_78._0_4_ = 0;
  local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cad2968,L"SpewAnimRateOptimization",&local_78,
                L"True to spew overall anim rate optimization tick rates.");
  atexit(FUN_14348dd7c);
  local_78 = (wchar_t *)CONCAT44(local_78._4_4_,1);
  local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cad2980,L"tick.AnimationDelaysEndGroup",&local_78,
                L"If > 0, then skeletal meshes that do not rely on physics simulation will set their animation end tick group to TG_PostPhysics."
               );
  atexit(FUN_14348e1d9);
  local_78._0_4_ = 0xca6d45d8;
  local_78._4_4_ = 0x8a134764;
  iStack_70 = 0x8acd5471;
  uStack_6c = 0x44620034;
  _DAT_14cad29a4 = 0xca6d45d8;
  uRam000000014cad29a8 = 0x8a134764;
  uRam000000014cad29ac = 0x8acd5471;
  uRam000000014cad29b0 = 0x44620034;
  FUN_141005458(&local_78,1,L"GbxSkinnedMeshCompVer",0);
  atexit((_func_5014 *)&LAB_143491bb0);
  local_98._0_4_ = 0x40;
  FUN_141471170(&DAT_14cad29b8,L"r.SkeletalMeshLODBias",&DAT_14cad29b4,
                L"LOD bias for skeletal meshes (does not affect animation editor viewports).");
  atexit(FUN_143491bbc);
  local_78._0_4_ = 1;
  local_98._0_4_ = 0;
  FUN_14078dbce(&DAT_14cad29c8,L"a.URO.Enable",&local_78,L"True to anim rate optimization.");
  atexit(FUN_143491c01);
  local_78._0_4_ = 0;
  local_98._0_4_ = 0;
  FUN_14078dbce(&DAT_14cad29e0,L"a.URO.Draw",&local_78,
                L"True to draw color coded boxes for anim rate.");
  atexit(FUN_143491c46);
  local_78._0_4_ = 1;
  local_98._0_4_ = 0;
  FUN_14078dbce(&DAT_14cad29f8,L"r.EnableMorphTargets",&local_78,L"Enable Morph Targets");
  atexit(FUN_143491c8b);
  local_78 = (wchar_t *)((ulonglong)local_78._4_4_ << 0x20);
  local_98._0_4_ = 0;
  FUN_14078dbce(&DAT_14cad2a10,L"a.VisualizeLODs",&local_78,L"Visualize SkelMesh LODs");
  atexit(FUN_143491cd0);
  local_98._0_4_ = 0;
  FUN_1415c789c(&DAT_14cad2a28,L"r.SkinnedMesh.UpdateBoundsNotifyStreamingRadiusChangeRatio",
                &DAT_14c761434,
                L"Update the streaming manager when the radius changes by more than this ratio since the last update. A negative value will disable the update."
               );
  atexit(FUN_143491d15);
  local_98 = (undefined8 *)((ulonglong)local_98._4_4_ << 0x20);
  FUN_14153156c(&DAT_14cad2a38,L"r.SkinnedMesh.ReleasePreviousLODInfoOnInitialization",
                &DAT_14c761438,
                L"Whether to flush the render thread (incurring a game thread stall) and clean existing LOD info when re-initializating."
               );
  atexit(FUN_143491d5a);
  local_78 = (wchar_t *)0x0;
  iStack_70 = 0;
  FUN_1446efa72(&local_78,0,2,0x10);
  iStack_70 = 2;
  *(undefined ***)local_78 = &PTR_LAB_149e170a0;
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
  *(longlong *)((longlong)local_78 + 0x10) = lVar4;
  *(undefined ***)local_78 = &PTR_FUN_14a879290;
  uStack_90 = (undefined **)((ulonglong)uStack_90._4_4_ << 0x20);
  local_98 = &local_78;
  FUN_141703554(&DAT_14cad2a48,L"r.SkinnedMesh.RenderNanite",&DAT_14c76143c,
                L"When true, allows skinned meshes to render as Nanite when enabled on the mesh (otherwise uses fallback mesh)."
               );
  if (iStack_70 != 0) {
    if (local_78 == (wchar_t *)0x0) goto LAB_143498b38;
    (*(code *)**(undefined8 **)local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    iStack_70 = 0;
  }
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_143498b38:
  atexit(FUN_143491d9f);
  local_98._0_4_ = 4;
  FUN_141471170(&DAT_14cad2a58,L"r.gbx.SkeletalMesh.PSOPrecacheProxyCreationStrategy",&DAT_14c761440
                ,
                L"-1: Previous Gbx behavior - no waiting at all ever allowed \n 0: Epic default behavior (always delay until PSOs are ready, ignores time limits) \n 1: Never allow SceneProxy creation delay when PSOs are still caching, respects time limits \n 2: Only allow SceneProxy creation delay when PSOs are still caching if a SceneProxy has never been created for this component, respects time limits \n"
               );
  atexit(FUN_143491de4);
  local_98._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14cad2a68,L"r.gbx.SkeletalMesh.PSOPrecacheProxyCreationDelayTimeLimit",
                &DAT_14c761444,
                L" >0: Max time in seconds that we allow to delay SceneProxy creation due to PSOs still being cached \n<=0: Mo limit"
               );
  atexit(FUN_143491e29);
  local_98._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14cad2a78,
                L"r.gbx.SkeletalMesh.PSOPrecacheProxyCreationDelayTimeLimit.GameCrititalComponents",
                &DAT_14c761448,
                L" >0: Max time in seconds that we allow to delay SceneProxy creation due to PSOs still being cached for game critical components \n<=0: Mo limit"
               );
  atexit(FUN_143491e6e);
  local_98._0_4_ = 4;
  FUN_141471170(&DAT_14cad2a88,L"r.gbx.SkeletalMesh.CustomMaterialSetAfterPSOPrecache",
                &DAT_14cad2be8,
                L" 0: Custom Material is assigned to component and Scene Proxy simultaneously (default)\n 1: Custom Material is assigned to component, but delay assignment to Scene Proxy until PSO precache completed \n"
               );
  atexit(FUN_143491eb3);
  DAT_14cad2ac0 = 0;
  DAT_14cad2ac8 = 0;
  DAT_14cad2aa0 = 0;
  _DAT_14cad2aa8 = 0;
  _DAT_14cad2acc = 0xffffffff00000080;
  DAT_14cad2ad4 = 0;
  DAT_14cad2ae0 = 0;
  DAT_14cad2ae8 = 0;
  atexit(FUN_143491ef8);
  local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffff00000000);
  local_98._0_4_ = 0;
  FUN_14078dbce(&DAT_14cad2af0,L"a.URO.ForceAnimRate",&local_78,
                L"Non-zero to force anim rate. 10 = eval anim every ten frames for those meshes that can do it. In some cases a frame is considered to be 30fps."
               );
  atexit(FUN_143491f21);
  local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffff00000000);
  local_98._0_4_ = 0;
  FUN_14078dbce(&DAT_14cad2b08,L"a.URO.ForceInterpolation",&local_78,
                L"Set to 1 to force interpolation");
  atexit(FUN_143491f66);
  local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffff00000000);
  local_98._0_4_ = 0;
  FUN_14078dbce(&DAT_14cad2b20,L"a.URO.DisableInterpolation",&local_78,
                L"Set to 1 to disable interpolation");
  atexit(FUN_143491fab);
  local_78 = (wchar_t *)CONCAT44(local_78._4_4_,0xffffffff);
  local_98 = (undefined8 *)((ulonglong)local_98._4_4_ << 0x20);
  FUN_14078dbce(&DAT_14cad2b58,L"r.MeshDeformerMaxLOD",&local_78,
                L"Don\'t apply MeshDeformers to SkinnedMeshs above this LOD.\nDefault is -1 (disabled).\n"
               );
  atexit(FUN_143493c8f);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143498db8 FUN_143498db8 body=55 status=ok
// SIG undefined FUN_143498db8(void)

void FUN_143498db8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad2c20 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad2c20 = FUN_14171c317(FUN_1463bd1d2,uVar1,L"ESkyAtmosphereTransformMode");
  }
  return;
}



// FUNCTION 143498df0 FUN_143498df0 body=1341 status=ok
// SIG undefined FUN_143498df0(void)

void FUN_143498df0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  longlong local_f8 [14];
  undefined1 local_88;
  undefined1 *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar13 = *(longlong *)(param_1 + 0x350);
  if (lVar13 == 0) goto LAB_143498f71;
  plVar14 = (longlong *)(param_1 + 0x240);
  plVar18 = local_f8 + 2;
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *plVar18 = *plVar14;
    plVar14 = plVar14 + 1;
    plVar18 = plVar18 + 1;
  }
  local_88 = *(undefined1 *)(param_1 + 0x2a8);
  uVar17 = CONCAT71((int7)((ulonglong)plVar14 >> 8),local_88);
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar12 + 0xc60);
  local_f8[0] = lVar13;
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_143498e6c;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_143498e71;
      goto LAB_143498ea3;
    }
  }
  else {
LAB_143498e6c:
    if (iVar5 != 0x10) {
LAB_143498ea3:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar12 + 0xc60), iVar5 == 2))
        goto LAB_143498e71;
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_143498e71;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar9 = (uint *)*puVar2;
        if (puVar9 != (uint *)0x0) goto LAB_14349903a;
        while( true ) {
          uVar11 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar11 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar11 | 1;
            __tlregdtor(&LAB_1434a3d89);
          }
          lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar8 = *(undefined4 **)(lVar13 + 0x310);
          *(undefined8 *)(lVar13 + 0x310) = 0;
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar8 = 0xffffffff;
          *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
          puVar8[0x12] = 0;
          *puVar2 = puVar8;
          FUN_140217a48(puVar2);
          puVar9 = (uint *)*puVar2;
LAB_14349903a:
          puVar16 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 0xfU & 0xfffffffffffffff0);
          puVar15 = (uint *)(puVar16 + 0x26);
          uVar11 = puVar9[0x12];
          if (puVar15 <= puVar9 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
            LOCK();
            uVar3 = *puVar9;
            *puVar9 = *puVar9 + uVar11 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar11) != 0xffffffff) break;
            puVar9 = (uint *)*puVar2;
            *puVar9 = 0xffffffff;
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
            puVar9[0x12] = 0;
            *puVar2 = puVar9;
            puVar16 = (undefined8 *)((longlong)puVar9 + 0x67U & 0xfffffffffffffff0);
            puVar15 = (uint *)(puVar16 + 0x26);
            uVar11 = 0;
            if (puVar15 <= puVar9 + 0x4000) {
              uVar11 = 1;
              goto LAB_1434990ba;
            }
          }
        }
        uVar11 = uVar11 + 1;
LAB_1434990ba:
        *(uint **)(puVar9 + 0x10) = puVar15;
        puVar9[0x12] = uVar11;
        iVar5 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14a8998c0;
        plVar14 = local_f8;
        plVar18 = puVar16 + 0x16;
        for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
          *plVar18 = *plVar14;
          plVar14 = plVar14 + 1;
          plVar18 = plVar18 + 1;
        }
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar11 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar11 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar11];
            iVar5 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar13 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar13 == 0) {
          uVar4 = 1;
          if ((char)uVar17 != '\x06') {
            uVar4 = uVar17;
          }
          uVar17 = uVar4;
          uVar10 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar13 + 0x38) >> 0x3b;
          }
          uVar10 = *(undefined8 *)(lVar13 + 0x30);
        }
        puVar16[0xf] = uVar10;
        puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar5;
        if (puVar16 == (undefined8 *)0x0) {
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_78[0] = (undefined1 *)0x0;
        local_68 = (longlong *)FUN_14001cc68(0x90,0x10);
        *local_68 = (longlong)&PTR_LAB_14a899840;
        plVar14 = local_f8;
        plVar18 = local_68 + 2;
        for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
          *plVar18 = *plVar14;
          plVar14 = plVar14 + 1;
          plVar18 = plVar18 + 1;
        }
        if (local_68 + 2 != (longlong *)0x0) {
          local_78[0] = &LAB_1434a3d2c;
        }
        local_108 = local_78;
        FUN_14005a792(&DAT_14ca9a440,L"FUpdateSkyAtmosphereSceneProxyTransformCommand",
                      &DAT_14cad3b5c);
        if (local_78[0] != (undefined1 *)0x0) {
          plVar14 = local_68;
          if (local_68 == (longlong *)0x0) {
            plVar14 = local_58;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      goto LAB_143498f71;
    }
  }
LAB_143498e71:
  FUN_140335f22(lVar13 + 0x10,local_f8 + 2,uVar17 & 0xffffffff);
LAB_143498f71:
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14349932e FUN_14349932e body=1280 status=ok
// SIG undefined FUN_14349932e(void)

void FUN_14349932e(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) & 0xfd;
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xf0;
  lVar14 = *(longlong *)(param_1 + 0x350);
  if (lVar14 == 0) goto LAB_143499494;
  lVar8 = *(longlong *)(param_1 + 0xb0);
  if (lVar8 == 0) {
    lVar8 = FUN_1448abda6(param_1);
    lVar14 = *(longlong *)(param_1 + 0x350);
  }
  (**(code **)(**(longlong **)(lVar8 + 0x218) + 0x2b8))(*(longlong **)(lVar8 + 0x218),lVar14);
  lVar14 = *(longlong *)(param_1 + 0x350);
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar8 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_1434993bc;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_1434993c1;
      goto LAB_1434993f2;
    }
LAB_1434993c1:
    if (lVar14 != 0) {
      FUN_1400020a8(lVar14);
    }
  }
  else {
LAB_1434993bc:
    if (iVar5 == 0x10) goto LAB_1434993c1;
LAB_1434993f2:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar8 + 0xc60), iVar5 == 2))
      goto LAB_1434993c1;
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if (DVar6 == DVar7) goto LAB_1434993c1;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar10 = (uint *)*puVar2;
      if (puVar10 != (uint *)0x0) goto LAB_143499555;
      while( true ) {
        uVar12 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar12 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar12 | 1;
          __tlregdtor(&LAB_1434a3d89);
        }
        lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar9 = *(undefined4 **)(lVar8 + 0x310);
        *(undefined8 *)(lVar8 + 0x310) = 0;
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar9 = 0xffffffff;
        *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
        puVar9[0x12] = 0;
        *puVar2 = puVar9;
        FUN_140217a48(puVar2);
        puVar10 = (uint *)*puVar2;
LAB_143499555:
        puVar17 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x16);
        uVar12 = puVar10[0x12];
        if (puVar15 <= puVar10 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
          LOCK();
          uVar3 = *puVar10;
          *puVar10 = *puVar10 + uVar12 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar12) != 0xffffffff) break;
          puVar10 = (uint *)*puVar2;
          *puVar10 = 0xffffffff;
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          puVar17 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x16);
          uVar12 = 0;
          if (puVar15 <= puVar10 + 0x4000) {
            uVar12 = 1;
            goto LAB_1434995d5;
          }
        }
      }
      uVar12 = uVar12 + 1;
LAB_1434995d5:
      *(uint **)(puVar10 + 0x10) = puVar15;
      puVar10[0x12] = uVar12;
      iVar5 = 0;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14a899940;
      puVar17[0x15] = lVar14;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar12 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
          uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
          iVar5 = 0;
        }
        else {
          uVar16 = 2;
        }
      }
      else {
        iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar16 = 5;
      }
      if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
      }
      puVar17[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar17[9] = puVar17;
      puVar17[10] = puVar17;
      lVar14 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar14 == 0) {
        uVar4 = 1;
        if ((char)uVar16 != '\x06') {
          uVar4 = uVar16;
        }
        uVar16 = uVar4;
        uVar11 = 0;
      }
      else {
        if ((char)uVar16 == '\x06') {
          uVar16 = *(ulonglong *)(lVar14 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar14 + 0x30);
      }
      puVar17[0xf] = uVar11;
      puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar5;
      if (puVar17 == (undefined8 *)0x0) {
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(puVar17);
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
    else {
      local_78 = local_68;
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14a8998d0;
      local_68[0] = &LAB_1434a3f4c;
      local_40 = lVar14;
      FUN_14005a792(&DAT_14ca9a440,L"FDestroySkyAtmosphereSceneProxyCommand",&DAT_14cad3b60);
      if (local_68[0] != (undefined1 *)0x0) {
        pppuVar13 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar13 = &local_48;
        }
        (*(code *)(*pppuVar13)[2])();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x350) = 0;
LAB_143499494:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143499830 FUN_143499830 body=749 status=ok
// SIG undefined FUN_143499830(void)

void FUN_143499830(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong local_78;
  int local_6c;
  longlong local_68;
  longlong local_60;
  int local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x218) != 0)) {
    local_78 = param_1;
    if (DAT_14cad2d40 != 0) {
      FUN_147a1849c(&local_60);
      uVar12 = (ulonglong)local_50;
      if ((-1 < (int)local_50) && ((int)local_50 < local_58)) {
        do {
          lVar10 = *(longlong *)(local_60 + (uVar12 & 0xffffffff) * 8);
          if ((*(longlong *)(lVar10 + 0xa8) != 0) &&
             (((lVar16 = FUN_1447210f0(), lVar10 != 0 && (lVar16 == local_78)) &&
              ((*(uint *)(lVar10 + 8) >> 0x1e & 1) == 0)))) {
            FUN_147a18508(lVar10);
          }
          uVar12 = (longlong)(int)local_50;
          do {
            uVar13 = uVar12;
            uVar12 = uVar13 + 1;
            local_50 = (uint)uVar12;
            if ((longlong)local_58 <= (longlong)uVar12) break;
          } while (*(longlong *)(local_60 + uVar12 * 8) == 0);
        } while ((-2 < (longlong)uVar13) && ((int)local_50 < local_58));
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    if (0 < DAT_14cad2db8) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad2d88);
      iVar3 = DAT_14cad2db8;
      plVar2 = DAT_14cad2db0;
      lVar16 = (longlong)DAT_14cad2db8;
      lVar10 = local_78;
      if (lVar16 != 0) {
        lVar10 = *DAT_14cad2db0;
        lVar8 = *(longlong *)(lVar10 + 0xb0);
        if (lVar8 == 0) {
          lVar8 = FUN_1448abda6(lVar10);
        }
        local_7c = 0;
        bVar5 = 0;
        if (lVar8 == local_78) {
          bVar5 = FUN_1414e0206(lVar10);
        }
        local_68 = -lVar16;
        iVar7 = 0;
        lVar10 = local_78;
        do {
          if (iVar7 + 1 < iVar3) {
            do {
              local_6c = iVar7;
              lVar8 = local_68 + local_6c;
              lVar15 = (longlong)local_6c + 2;
              bVar17 = true;
              lVar14 = -1;
              do {
                lVar1 = plVar2[lVar15 + -1];
                lVar9 = *(longlong *)(lVar1 + 0xb0);
                if (lVar9 == 0) {
                  lVar9 = FUN_1448abda6(lVar1);
                  lVar10 = local_78;
                }
                if (lVar9 == lVar10) {
                  bVar6 = FUN_1414e0206(lVar1);
                  lVar10 = local_78;
                  if (((bVar6 ^ bVar5) & 1) != 0) {
                    iVar7 = local_6c - (int)lVar14;
                    break;
                  }
                }
                else if ((bVar5 & 1) != 0) {
                  if (bVar17 == false) goto LAB_143499a11;
                  iVar7 = local_6c - (int)lVar14;
                  goto LAB_1434999a2;
                }
                bVar17 = lVar15 < lVar16;
                lVar14 = lVar14 + -1;
                lVar15 = lVar15 + 1;
                iVar7 = iVar3;
              } while (lVar8 != lVar14);
              bVar6 = bVar5 & 1;
              iVar4 = iVar7;
              iVar11 = local_6c;
              bVar5 = bVar17;
              if (bVar6 == 0) break;
              if (bVar17 == false) goto LAB_143499a11;
LAB_1434999a2:
              bVar5 = false;
              iVar4 = iVar7 + 1;
              iVar11 = iVar7;
            } while (iVar7 + 1 < iVar3);
          }
          else {
            if ((bVar5 & 1) != 0) break;
            iVar4 = iVar7 + 1;
            iVar11 = iVar7;
            bVar5 = false;
          }
          iVar7 = iVar4;
          if (local_7c != iVar11) {
            memmove(plVar2 + local_7c,plVar2 + iVar11,(longlong)(iVar7 - iVar11) << 3);
            lVar10 = local_78;
          }
          local_7c = local_7c + (iVar7 - iVar11);
          bVar17 = (bool)bVar5 != false;
          bVar5 = 1;
        } while (bVar17);
LAB_143499a11:
        DAT_14cad2db8 = local_7c;
      }
      FUN_14154eddc(lVar10,&DAT_14cad2db0,1);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad2d88);
    }
    if (0 < DAT_14cad2dc8) {
      FUN_14154eddc(local_78,&DAT_14cad2dc0,0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143499b1e FUN_143499b1e body=69 status=ok
// SIG undefined FUN_143499b1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143499b1e(void)

{
  _DAT_14cad2d30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143499b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2d38,1);
  return;
}



// FUNCTION 143499b63 FUN_143499b63 body=69 status=ok
// SIG undefined FUN_143499b63(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143499b63(void)

{
  _DAT_14cad2d48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143499ba5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2d50,1);
  return;
}



// FUNCTION 143499ba8 FUN_143499ba8 body=69 status=ok
// SIG undefined FUN_143499ba8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143499ba8(void)

{
  _DAT_14cad2d58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143499bea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2d60,1);
  return;
}



// FUNCTION 143499bed FUN_143499bed body=69 status=ok
// SIG undefined FUN_143499bed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143499bed(void)

{
  _DAT_14cad2d68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143499c2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2d70,1);
  return;
}



// FUNCTION 143499c32 FUN_143499c32 body=69 status=ok
// SIG undefined FUN_143499c32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143499c32(void)

{
  _DAT_14cad2d78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143499c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad2d80,1);
  return;
}



// FUNCTION 143499c78 FUN_143499c78 body=1101 status=ok
// SIG undefined FUN_143499c78(void)

void FUN_143499c78(longlong param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStack_138 [40];
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  uint local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined2 local_dc;
  undefined2 local_da;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined1 local_d4;
  undefined1 local_d3;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  int local_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar3 = (uint)*(byte *)(param_1 + 0xc);
  if (*(byte *)(param_1 + 0xc) == 5) {
    uVar3 = DAT_14c760db4;
  }
  if (((int)uVar3 < 3) && (DAT_14ca84dfb != '\x01')) goto LAB_143499cbd;
  FUN_145c221da(&local_a8,L"SkyTextureCube",*(undefined4 *)(param_1 + 0x50),
                *(undefined1 *)(param_1 + 0x58));
  local_d8 = *(undefined1 *)(param_1 + 0x54);
  local_d6 = local_76;
  local_108 = local_a8;
  local_d5 = local_75;
  local_d4 = local_74;
  local_e4 = local_84;
  local_dc = local_7c;
  local_da = local_7a;
  local_d7 = local_77;
  local_100 = uStack_a0;
  uStack_f8 = uStack_98;
  local_f0 = local_90;
  local_e8 = local_88;
  local_d3 = local_73;
  local_ec = local_8c;
  local_c0 = local_60;
  uStack_bc = uStack_5c;
  uStack_b8 = uStack_58;
  uStack_b4 = uStack_54;
  local_b0 = local_50;
  local_78 = local_d8;
  if (local_70 == 0) {
    puVar10 = &local_a8;
    local_70 = FUN_1431edf91(local_a8,CONCAT44(uStack_5c,local_60) != 0);
    lVar5 = *DAT_14ca83900;
  }
  else {
    lVar5 = *DAT_14ca83900;
    puVar10 = &local_108;
  }
  (**(code **)(lVar5 + 0x1a0))(DAT_14ca83900,&local_110,&DAT_14ca85100,puVar10);
  lVar5 = local_110;
  plVar9 = (longlong *)(param_1 + 0x60);
  if (plVar9 == &local_110) {
LAB_143499ee2:
    lVar5 = local_110;
    if (local_110 != 0) {
      LOCK();
      puVar1 = (uint *)(local_110 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_110 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_110 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = lVar5;
          plVar8 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar6 = plVar4;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar11 = plVar6 != DAT_14ca843c8;
              plVar8 = plVar4;
              if (bVar11) {
                plVar6 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    lVar5 = *plVar9;
  }
  else {
    lVar7 = *plVar9;
    *plVar9 = local_110;
    local_110 = 0;
    if (lVar7 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar7 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar7 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar7 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = lVar7;
          plVar8 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar6 = plVar4;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar11 = plVar6 != DAT_14ca843c8;
              plVar8 = plVar4;
              if (bVar11) {
                plVar6 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_143499ee2;
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x10);
  if (lVar7 != lVar5) {
    *(longlong *)(param_1 + 0x10) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    if (lVar7 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar7 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar7 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar7 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar7;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  local_a8 = 0x1010102;
  uStack_a0 = 0x7f7fffff00000000;
  uStack_98 = 0;
  local_90 = local_90 & 0xffffff00;
  lVar7 = FUN_1405d51a2();
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (lVar5 != lVar7) {
    *(longlong *)(param_1 + 0x18) = lVar7;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
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
          bVar2 = *(byte *)(lVar5 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
LAB_143499cbd:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14349a0f6 FUN_14349a0f6 body=1611 status=ok
// SIG undefined FUN_14349a0f6(void)

void FUN_14349a0f6(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong *plVar16;
  uint *puVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_108 [32];
  undefined1 **local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 *local_c8 [2];
  longlong *local_b8;
  longlong local_a8 [5];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar6 = *(longlong *)(param_1 + 0x4c8);
  if (lVar6 == 0) goto LAB_14349a334;
  fVar22 = *(float *)(param_1 + 0x2cc);
  uVar3 = *(undefined4 *)(param_1 + 0x2e4);
  fVar20 = (float)*(byte *)(param_1 + 0x2d3) * 0.003921569 * fVar22;
  fVar21 = (float)(&DAT_14c758c60)[*(byte *)(param_1 + 0x2d0)] * fVar22;
  fVar23 = (float)(&DAT_14c758c60)[*(byte *)(param_1 + 0x2d1)] * fVar22;
  fVar22 = fVar22 * (float)(&DAT_14c758c60)[*(byte *)(param_1 + 0x2d2)];
  uVar4 = *(undefined4 *)(param_1 + 0x2e8);
  local_d8 = *(undefined4 *)(param_1 + 0x310);
  uStack_d4 = *(undefined4 *)(param_1 + 0x314);
  uStack_d0 = *(undefined4 *)(param_1 + 0x318);
  uStack_cc = *(undefined4 *)(param_1 + 0x31c);
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = *(int *)(lVar7 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar9 != 2) {
      if (iVar9 != 1) goto LAB_14349a1f5;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_14349a1fa;
      goto LAB_14349a254;
    }
  }
  else {
LAB_14349a1f5:
    if (iVar9 != 0x10) {
LAB_14349a254:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar9 = *(int *)(lVar7 + 0xc60), iVar9 == 2))
        goto LAB_14349a1fa;
        if (iVar9 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          if (DVar10 == DVar11) goto LAB_14349a1fa;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar2;
        if (puVar13 != (uint *)0x0) goto LAB_14349a42d;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_1434a3d89);
          }
          lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar7 + 0x310);
          *(undefined8 *)(lVar7 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar2 = puVar12;
          FUN_140217a48(puVar2);
          puVar13 = (uint *)*puVar2;
LAB_14349a42d:
          puVar19 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar19 + 0x1b);
          uVar15 = puVar13[0x12];
          if (puVar17 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar5 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar5 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar2;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar2 = puVar13;
            puVar19 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar17 = (uint *)(puVar19 + 0x1b);
            uVar15 = 0;
            if (puVar17 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_14349a4ad;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_14349a4ad:
        *(uint **)(puVar13 + 0x10) = puVar17;
        puVar13[0x12] = uVar15;
        iVar9 = 0;
        FUN_1447247dc(puVar19,0);
        *puVar19 = &PTR_FUN_14a8999f8;
        puVar19[0x15] = lVar6;
        *(float *)(puVar19 + 0x16) = fVar22;
        *(float *)((longlong)puVar19 + 0xb4) = fVar23;
        *(float *)(puVar19 + 0x17) = fVar21;
        *(float *)((longlong)puVar19 + 0xbc) = fVar20;
        *(undefined4 *)(puVar19 + 0x18) = uVar3;
        *(undefined4 *)((longlong)puVar19 + 0xc4) = uVar4;
        *(undefined4 *)(puVar19 + 0x19) = local_d8;
        *(undefined4 *)((longlong)puVar19 + 0xcc) = uStack_d4;
        *(undefined4 *)(puVar19 + 0x1a) = uStack_d0;
        *(undefined4 *)((longlong)puVar19 + 0xd4) = uStack_cc;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar9 = 0;
          }
          else {
            uVar18 = 2;
          }
        }
        else {
          iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar18 = 5;
        }
        if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
        }
        puVar19[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar19[9] = puVar19;
        puVar19[10] = puVar19;
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar8 = 1;
          if ((char)uVar18 != '\x06') {
            uVar8 = uVar18;
          }
          uVar18 = uVar8;
          uVar14 = 0;
        }
        else {
          if ((char)uVar18 == '\x06') {
            uVar18 = *(ulonglong *)(lVar6 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar19[0xf] = uVar14;
        puVar19[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar19 + 0x1c) = iVar9;
        if (puVar19 == (undefined8 *)0x0) {
          local_c8[0] = (undefined1 *)CONCAT71(local_c8[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
          local_c8[0] = (undefined1 *)CONCAT71(local_c8[0]._1_7_,1);
          FUN_1447439e4(puVar19);
          LOCK();
          piVar1 = (int *)(puVar19 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar19)(puVar19,1);
          }
        }
      }
      else {
        local_c8[0] = (undefined1 *)0x0;
        local_b8 = (longlong *)FUN_14001cc68(0x38,8);
        *local_b8 = (longlong)&PTR_LAB_14a8999a0;
        local_b8[1] = lVar6;
        *(float *)(local_b8 + 2) = fVar22;
        *(float *)((longlong)local_b8 + 0x14) = fVar23;
        *(float *)(local_b8 + 3) = fVar21;
        *(float *)((longlong)local_b8 + 0x1c) = fVar20;
        *(undefined4 *)(local_b8 + 4) = uVar3;
        *(undefined4 *)((longlong)local_b8 + 0x24) = uVar4;
        *(undefined4 *)(local_b8 + 5) = local_d8;
        *(undefined4 *)((longlong)local_b8 + 0x2c) = uStack_d4;
        *(undefined4 *)(local_b8 + 6) = uStack_d0;
        *(undefined4 *)((longlong)local_b8 + 0x34) = uStack_cc;
        if (local_b8 + 1 != (longlong *)0x0) {
          local_c8[0] = &LAB_1434a4306;
        }
        local_e8 = local_c8;
        FUN_14005a792(&DAT_14ca9a440,L"FFastUpdateSkyLightCommand",&DAT_14cad3b68);
        if (local_c8[0] != (undefined1 *)0x0) {
          plVar16 = local_b8;
          if (local_b8 == (longlong *)0x0) {
            plVar16 = local_a8;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      goto LAB_14349a334;
    }
  }
LAB_14349a1fa:
  *(float *)(lVar6 + 0x144) = fVar22;
  *(float *)(lVar6 + 0x148) = fVar23;
  *(float *)(lVar6 + 0x14c) = fVar21;
  *(float *)(lVar6 + 0x150) = fVar20;
  *(undefined4 *)(lVar6 + 0x28) = uVar3;
  *(undefined4 *)(lVar6 + 0x2c) = uVar4;
  *(undefined4 *)(lVar6 + 0x11c) = local_d8;
  *(undefined4 *)(lVar6 + 0x120) = uStack_d4;
  *(undefined4 *)(lVar6 + 0x124) = uStack_d0;
  *(undefined4 *)(lVar6 + 0x128) = uStack_cc;
LAB_14349a334:
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14349a742 FUN_14349a742 body=1504 status=ok
// SIG undefined FUN_14349a742(void)

void FUN_14349a742(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  undefined ***pppuVar18;
  uint *puVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined1 auStack_d8 [32];
  undefined1 **local_b8;
  undefined1 *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar7 = *(longlong *)(param_1 + 0x4c8);
  if ((lVar7 == 0) ||
     (((*(longlong *)(param_1 + 0xb0) != 0 &&
       (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x218), lVar8 != 0)) &&
      (*(int *)(lVar8 + 8) < 2)))) goto LAB_14349a951;
  uVar3 = *(undefined4 *)(param_1 + 0x324);
  uVar4 = *(undefined4 *)(param_1 + 0x328);
  uVar5 = *(undefined4 *)(param_1 + 0x32c);
  uVar16 = *(uint *)(param_1 + 0x330);
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar10 = *(int *)(lVar8 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar10 != 2) {
      if (iVar10 != 1) goto LAB_14349a7ee;
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      if (DVar11 == DVar12) goto LAB_14349a7f7;
      goto LAB_14349a89e;
    }
  }
  else {
LAB_14349a7ee:
    if (iVar10 != 0x10) {
LAB_14349a89e:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar8 + 0xc60), iVar10 == 2))
        goto LAB_14349a7f7;
        if (iVar10 == 1) {
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          if (DVar11 == DVar12) goto LAB_14349a7f7;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar14 = (uint *)*puVar2;
        if (puVar14 != (uint *)0x0) goto LAB_14349aa2e;
        while( true ) {
          uVar17 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar17 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar17 | 1;
            __tlregdtor(&LAB_1434a3d89);
          }
          lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar13 = *(undefined4 **)(lVar8 + 0x310);
          *(undefined8 *)(lVar8 + 0x310) = 0;
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar13 = 0xffffffff;
          *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar2 = puVar13;
          FUN_140217a48(puVar2);
          puVar14 = (uint *)*puVar2;
LAB_14349aa2e:
          puVar21 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar19 = (uint *)(puVar21 + 0x18);
          uVar17 = puVar14[0x12];
          if (puVar19 <= puVar14 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
            LOCK();
            uVar6 = *puVar14;
            *puVar14 = *puVar14 + uVar17 + 1;
            UNLOCK();
            if ((uVar6 ^ uVar17) != 0xffffffff) break;
            puVar14 = (uint *)*puVar2;
            *puVar14 = 0xffffffff;
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar2 = puVar14;
            puVar21 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
            puVar19 = (uint *)(puVar21 + 0x18);
            uVar17 = 0;
            if (puVar19 <= puVar14 + 0x4000) {
              uVar17 = 1;
              goto LAB_14349aaae;
            }
          }
        }
        uVar17 = uVar17 + 1;
LAB_14349aaae:
        *(uint **)(puVar14 + 0x10) = puVar19;
        puVar14[0x12] = uVar17;
        iVar10 = 0;
        FUN_1447247dc(puVar21,0);
        *puVar21 = &PTR_FUN_14a899a78;
        puVar21[0x15] = lVar7;
        *(undefined4 *)(puVar21 + 0x16) = uVar3;
        *(undefined4 *)((longlong)puVar21 + 0xb4) = uVar4;
        *(undefined4 *)(puVar21 + 0x17) = uVar5;
        *(uint *)((longlong)puVar21 + 0xbc) = uVar16;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar16 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
            uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
            iVar10 = 0;
          }
          else {
            uVar20 = 2;
          }
        }
        else {
          iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar20 = 5;
        }
        if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
        }
        puVar21[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar21[9] = puVar21;
        puVar21[10] = puVar21;
        lVar7 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar7 == 0) {
          uVar9 = 1;
          if ((char)uVar20 != '\x06') {
            uVar9 = uVar20;
          }
          uVar20 = uVar9;
          uVar15 = 0;
        }
        else {
          if ((char)uVar20 == '\x06') {
            uVar20 = *(ulonglong *)(lVar7 + 0x38) >> 0x3b;
          }
          uVar15 = *(undefined8 *)(lVar7 + 0x30);
        }
        puVar21[0xf] = uVar15;
        puVar21[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar21 + 0x1c) = iVar10;
        if (puVar21 == (undefined8 *)0x0) {
          local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
          UNLOCK();
          local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
          FUN_1447439e4(puVar21);
          LOCK();
          piVar1 = (int *)(puVar21 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar21)(puVar21,1);
          }
        }
      }
      else {
        local_b8 = local_a8;
        local_98 = (undefined ***)0x0;
        local_88 = &PTR_LAB_14a899a10;
        local_a8[0] = &LAB_1434a451a;
        local_80 = lVar7;
        local_78 = uVar3;
        local_74 = uVar4;
        local_70 = uVar5;
        local_6c = uVar16;
        FUN_14005a792(&DAT_14ca9a440,L"FFastUpdateSkyLightOcclusionCommand",&DAT_14cad3b6c);
        if (local_a8[0] != (undefined1 *)0x0) {
          pppuVar18 = local_98;
          if (local_98 == (undefined ***)0x0) {
            pppuVar18 = &local_88;
          }
          (*(code *)(*pppuVar18)[2])();
        }
      }
      goto LAB_14349a951;
    }
  }
LAB_14349a7f7:
  *(undefined4 *)(lVar7 + 0xc4) = uVar3;
  *(undefined4 *)(lVar7 + 200) = uVar4;
  *(undefined4 *)(lVar7 + 0xcc) = uVar5;
  uVar3 = (&DAT_14c758c60)[uVar16 >> 8 & 0xff];
  uVar4 = (&DAT_14c758c60)[uVar16 & 0xff];
  *(undefined4 *)(lVar7 + 0xd0) =
       *(undefined4 *)((longlong)&DAT_14c758c60 + (ulonglong)(uVar16 >> 0xe & 0x3fc));
  *(undefined4 *)(lVar7 + 0xd4) = uVar3;
  *(undefined4 *)(lVar7 + 0xd8) = uVar4;
  *(float *)(lVar7 + 0xdc) = (float)(uVar16 >> 0x18) * 0.003921569;
LAB_14349a951:
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14349ad24 FUN_14349ad24 body=1280 status=ok
// SIG undefined FUN_14349ad24(void)

void FUN_14349ad24(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) & 0xfd;
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xf0;
  lVar14 = *(longlong *)(param_1 + 0x4c8);
  if (lVar14 == 0) goto LAB_14349ae8a;
  lVar8 = *(longlong *)(param_1 + 0xb0);
  if (lVar8 == 0) {
    lVar8 = FUN_1448abda6(param_1);
    lVar14 = *(longlong *)(param_1 + 0x4c8);
  }
  (**(code **)(**(longlong **)(lVar8 + 0x218) + 0x100))(*(longlong **)(lVar8 + 0x218),lVar14);
  lVar14 = *(longlong *)(param_1 + 0x4c8);
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar8 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_14349adb2;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_14349adb7;
      goto LAB_14349ade8;
    }
LAB_14349adb7:
    if (lVar14 != 0) {
      FUN_1400020a8(lVar14);
    }
  }
  else {
LAB_14349adb2:
    if (iVar5 == 0x10) goto LAB_14349adb7;
LAB_14349ade8:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar8 + 0xc60), iVar5 == 2))
      goto LAB_14349adb7;
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if (DVar6 == DVar7) goto LAB_14349adb7;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar10 = (uint *)*puVar2;
      if (puVar10 != (uint *)0x0) goto LAB_14349af4b;
      while( true ) {
        uVar12 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar12 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar12 | 1;
          __tlregdtor(&LAB_1434a3d89);
        }
        lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar9 = *(undefined4 **)(lVar8 + 0x310);
        *(undefined8 *)(lVar8 + 0x310) = 0;
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar9 = 0xffffffff;
        *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
        puVar9[0x12] = 0;
        *puVar2 = puVar9;
        FUN_140217a48(puVar2);
        puVar10 = (uint *)*puVar2;
LAB_14349af4b:
        puVar17 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x16);
        uVar12 = puVar10[0x12];
        if (puVar15 <= puVar10 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
          LOCK();
          uVar3 = *puVar10;
          *puVar10 = *puVar10 + uVar12 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar12) != 0xffffffff) break;
          puVar10 = (uint *)*puVar2;
          *puVar10 = 0xffffffff;
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          puVar17 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x16);
          uVar12 = 0;
          if (puVar15 <= puVar10 + 0x4000) {
            uVar12 = 1;
            goto LAB_14349afcb;
          }
        }
      }
      uVar12 = uVar12 + 1;
LAB_14349afcb:
      *(uint **)(puVar10 + 0x10) = puVar15;
      puVar10[0x12] = uVar12;
      iVar5 = 0;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14a899ab0;
      puVar17[0x15] = lVar14;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar12 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
          uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
          iVar5 = 0;
        }
        else {
          uVar16 = 2;
        }
      }
      else {
        iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar16 = 5;
      }
      if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
      }
      puVar17[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar17[9] = puVar17;
      puVar17[10] = puVar17;
      lVar14 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar14 == 0) {
        uVar4 = 1;
        if ((char)uVar16 != '\x06') {
          uVar4 = uVar16;
        }
        uVar16 = uVar4;
        uVar11 = 0;
      }
      else {
        if ((char)uVar16 == '\x06') {
          uVar16 = *(ulonglong *)(lVar14 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar14 + 0x30);
      }
      puVar17[0xf] = uVar11;
      puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar5;
      if (puVar17 == (undefined8 *)0x0) {
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(puVar17);
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
    else {
      local_78 = local_68;
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14a899a90;
      local_68[0] = &LAB_1434a47c2;
      local_40 = lVar14;
      FUN_14005a792(&DAT_14ca9a440,L"FDestroySkyLightCommand",&DAT_14cad3b70);
      if (local_68[0] != (undefined1 *)0x0) {
        pppuVar13 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar13 = &local_48;
        }
        (*(code *)(*pppuVar13)[2])();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x4c8) = 0;
LAB_14349ae8a:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14349b226 FUN_14349b226 body=1322 status=ok
// SIG undefined FUN_14349b226(void)

void FUN_14349b226(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar16;
  longlong *plVar17;
  uint *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  undefined1 auStack_c8 [32];
  undefined1 **local_a8;
  undefined1 *local_98 [2];
  longlong *local_88;
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = *(longlong *)(param_1 + 0x4c8);
  if (lVar5 == 0) goto LAB_14349b389;
  lVar7 = *(longlong *)(param_1 + 0x260);
  lVar8 = *(longlong *)(param_1 + 0x268);
  lVar4 = *(longlong *)(param_1 + 0x270);
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar10 = *(int *)(lVar6 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar10 != 2) {
      if (iVar10 != 1) goto LAB_14349b295;
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      if (DVar11 == DVar12) goto LAB_14349b29a;
      goto LAB_14349b2cb;
    }
  }
  else {
LAB_14349b295:
    if (iVar10 != 0x10) {
LAB_14349b2cb:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar6 + 0xc60), iVar10 == 2))
        goto LAB_14349b29a;
        if (iVar10 == 1) {
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          if (DVar11 == DVar12) goto LAB_14349b29a;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar14 = (uint *)*puVar2;
        if (puVar14 != (uint *)0x0) goto LAB_14349b464;
        while( true ) {
          uVar16 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar16 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar16 | 1;
            __tlregdtor(&LAB_1434a3d89);
          }
          lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar13 = *(undefined4 **)(lVar6 + 0x310);
          *(undefined8 *)(lVar6 + 0x310) = 0;
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar13 = 0xffffffff;
          *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar2 = puVar13;
          FUN_140217a48(puVar2);
          puVar14 = (uint *)*puVar2;
LAB_14349b464:
          puVar19 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar19 + 0x19);
          uVar16 = puVar14[0x12];
          if (puVar18 <= puVar14 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
            LOCK();
            uVar3 = *puVar14;
            *puVar14 = *puVar14 + uVar16 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar16) != 0xffffffff) break;
            puVar14 = (uint *)*puVar2;
            *puVar14 = 0xffffffff;
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar2 = puVar14;
            puVar19 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar19 + 0x19);
            uVar16 = 0;
            if (puVar18 <= puVar14 + 0x4000) {
              uVar16 = 1;
              goto LAB_14349b4e4;
            }
          }
        }
        uVar16 = uVar16 + 1;
LAB_14349b4e4:
        *(uint **)(puVar14 + 0x10) = puVar18;
        puVar14[0x12] = uVar16;
        iVar10 = 0;
        FUN_1447247dc(puVar19,0);
        *puVar19 = &PTR_FUN_14a899b20;
        puVar19[0x15] = lVar5;
        puVar19[0x16] = lVar7;
        puVar19[0x17] = lVar8;
        puVar19[0x18] = lVar4;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar16 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
            uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
            iVar10 = 0;
          }
          else {
            uVar20 = 2;
          }
        }
        else {
          iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar20 = 5;
        }
        if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
        }
        puVar19[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar19[9] = puVar19;
        puVar19[10] = puVar19;
        lVar5 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar5 == 0) {
          uVar9 = 1;
          if ((char)uVar20 != '\x06') {
            uVar9 = uVar20;
          }
          uVar20 = uVar9;
          uVar15 = 0;
        }
        else {
          if ((char)uVar20 == '\x06') {
            uVar20 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
          }
          uVar15 = *(undefined8 *)(lVar5 + 0x30);
        }
        puVar19[0xf] = uVar15;
        puVar19[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar19 + 0x1c) = iVar10;
        if (puVar19 == (undefined8 *)0x0) {
          local_98[0] = (undefined1 *)CONCAT71(local_98[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
          local_98[0] = (undefined1 *)CONCAT71(local_98[0]._1_7_,1);
          FUN_1447439e4(puVar19);
          LOCK();
          piVar1 = (int *)(puVar19 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar19)(puVar19,1);
          }
        }
      }
      else {
        local_98[0] = (undefined1 *)0x0;
        local_88 = (longlong *)FUN_14001cc68(0x28,8);
        *local_88 = (longlong)&PTR_LAB_14a899ac0;
        local_88[1] = lVar5;
        local_88[2] = lVar7;
        local_88[3] = lVar8;
        local_88[4] = lVar4;
        if (local_88 + 1 != (longlong *)0x0) {
          local_98[0] = &LAB_1434a496e;
        }
        local_a8 = local_98;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateSkyLightCapturePosition",&DAT_14cad3b74);
        if (local_98[0] != (undefined1 *)0x0) {
          plVar17 = local_88;
          if (local_88 == (longlong *)0x0) {
            plVar17 = local_78;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
      }
      goto LAB_14349b389;
    }
  }
LAB_14349b29a:
  *(longlong *)(lVar5 + 0x100) = lVar7;
  *(longlong *)(lVar5 + 0x108) = lVar8;
  *(longlong *)(lVar5 + 0x110) = lVar4;
LAB_14349b389:
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xfd;
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14349b752 FUN_14349b752 body=1700 status=ok
// SIG undefined FUN_14349b752(void)

void FUN_14349b752(longlong param_1,longlong param_2,longlong param_3,float param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong lVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  uint uVar17;
  longlong *plVar18;
  uint *puVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined1 auStack_e8 [32];
  code **local_c8;
  longlong local_c0;
  longlong local_b8;
  code *local_a8 [2];
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((((*(longlong *)(param_1 + 0xa8) == 0) ||
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) == 0)) &&
      ((*(byte *)(param_1 + 0x9c) & 1) != 0)) && (*(char *)(param_1 + 0x1fb) == '\0'))
  goto LAB_14349b982;
  if (*(longlong *)(param_1 + 0x2f8) == param_2) {
    lVar13 = *(longlong *)(param_1 + 0x3f8);
    if (lVar13 == param_3) {
      if ((*(float *)(param_1 + 0x3f4) == param_4) &&
         (!NAN(*(float *)(param_1 + 0x3f4)) && !NAN(param_4))) goto LAB_14349b982;
    }
    if (*(char *)(param_1 + 0x2f1) != '\x01') goto LAB_14349b982;
  }
  else {
    if (*(char *)(param_1 + 0x2f1) != '\x01') goto LAB_14349b982;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x2f8) = param_2;
    FUN_147a18508(param_1);
    lVar13 = *(longlong *)(param_1 + 0x3f8);
  }
  if (lVar13 != param_3) {
    if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_3);
    }
    *(longlong *)(param_1 + 0x3f8) = param_3;
    FUN_147a18b76(param_1);
  }
  if ((*(float *)(param_1 + 0x3f4) == param_4) &&
     (!NAN(*(float *)(param_1 + 0x3f4)) && !NAN(param_4))) goto LAB_14349b982;
  *(float *)(param_1 + 0x3f4) = param_4;
  lVar13 = *(longlong *)(param_1 + 0x4c8);
  if (lVar13 == 0) goto LAB_14349b982;
  lVar2 = param_1 + 0x360;
  lVar3 = param_1 + 0x410;
  lVar4 = param_1 + 0x3f0;
  lVar5 = param_1 + 0x4a0;
  param_1 = param_1 + 0x4a4;
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar10 = *(int *)(lVar8 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar10 == 2) goto LAB_14349bd2e;
    if (iVar10 != 1) goto LAB_14349b8a2;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 == DVar12) goto LAB_14349bd2e;
  }
  else {
LAB_14349b8a2:
    if (iVar10 == 0x10) goto LAB_14349bd2e;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar8 + 0xc60), iVar10 == 2)) {
LAB_14349bd2e:
      local_c8 = (code **)lVar4;
      local_c0 = lVar5;
      local_b8 = param_1;
      FUN_147a186b6(lVar13,param_4,lVar2,lVar3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_e8);
    }
    if (iVar10 == 1) {
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      if (DVar11 == DVar12) goto LAB_14349bd2e;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar6 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar15 = (uint *)*puVar6;
    if (puVar15 != (uint *)0x0) goto LAB_14349ba89;
    while( true ) {
      uVar17 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar17 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar17 | 1;
        __tlregdtor(&LAB_1434a3d89);
      }
      lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar14 = *(undefined4 **)(lVar8 + 0x310);
      *(undefined8 *)(lVar8 + 0x310) = 0;
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar14 = 0xffffffff;
      *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
      puVar14[0x12] = 0;
      *puVar6 = puVar14;
      FUN_140217a48(puVar6);
      puVar15 = (uint *)*puVar6;
LAB_14349ba89:
      puVar21 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar19 = (uint *)(puVar21 + 0x1c);
      uVar17 = puVar15[0x12];
      if (puVar19 <= puVar15 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
        LOCK();
        uVar7 = *puVar15;
        *puVar15 = *puVar15 + uVar17 + 1;
        UNLOCK();
        if ((uVar7 ^ uVar17) != 0xffffffff) break;
        puVar15 = (uint *)*puVar6;
        *puVar15 = 0xffffffff;
        *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
        puVar15[0x12] = 0;
        *puVar6 = puVar15;
        puVar21 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
        puVar19 = (uint *)(puVar21 + 0x1c);
        uVar17 = 0;
        if (puVar19 <= puVar15 + 0x4000) {
          uVar17 = 1;
          goto LAB_14349bb0b;
        }
      }
    }
    uVar17 = uVar17 + 1;
LAB_14349bb0b:
    *(uint **)(puVar15 + 0x10) = puVar19;
    puVar15[0x12] = uVar17;
    iVar10 = 0;
    FUN_1447247dc(puVar21,0);
    *puVar21 = &PTR_FUN_14a899b70;
    puVar21[0x15] = lVar2;
    puVar21[0x16] = lVar3;
    puVar21[0x17] = lVar4;
    puVar21[0x18] = lVar5;
    *(float *)(puVar21 + 0x19) = param_4;
    puVar21[0x1a] = lVar13;
    puVar21[0x1b] = param_1;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar17 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar17 < 2) {
        uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar17];
        iVar10 = 0;
      }
      else {
        uVar20 = 2;
      }
    }
    else {
      iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
               *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar20 = 5;
    }
    if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
    }
    puVar21[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar21[9] = puVar21;
    puVar21[10] = puVar21;
    lVar13 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar13 == 0) {
      uVar9 = 1;
      if ((char)uVar20 != '\x06') {
        uVar9 = uVar20;
      }
      uVar20 = uVar9;
      uVar16 = 0;
    }
    else {
      if ((char)uVar20 == '\x06') {
        uVar20 = *(ulonglong *)(lVar13 + 0x38) >> 0x3b;
      }
      uVar16 = *(undefined8 *)(lVar13 + 0x30);
    }
    puVar21[0xf] = uVar16;
    puVar21[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar21 + 0x1c) = iVar10;
    if (puVar21 == (undefined8 *)0x0) {
      local_a8[0] = (code *)CONCAT71(local_a8[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
      UNLOCK();
      local_a8[0] = (code *)CONCAT71(local_a8[0]._1_7_,1);
      FUN_1447439e4(puVar21);
      LOCK();
      piVar1 = (int *)(puVar21 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar21)(puVar21,1);
      }
    }
  }
  else {
    local_a8[0] = (code *)0x0;
    local_98 = (longlong *)FUN_14001cc68(0x40,8);
    *local_98 = (longlong)&PTR_LAB_14a899b30;
    local_98[1] = lVar2;
    local_98[2] = lVar3;
    local_98[3] = lVar4;
    local_98[4] = lVar5;
    *(float *)(local_98 + 5) = param_4;
    local_98[6] = lVar13;
    local_98[7] = param_1;
    if (local_98 + 1 != (longlong *)0x0) {
      local_a8[0] = FUN_1434a4b5c;
    }
    local_c8 = local_a8;
    FUN_14005a792(&DAT_14ca9a440,L"FUpdateSkyProxy",&DAT_14cad3b78);
    if (local_a8[0] != (code *)0x0) {
      plVar18 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar18 = local_88;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
  }
LAB_14349b982:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14349bdfc FUN_14349bdfc body=1188 status=ok
// SIG undefined FUN_14349bdfc(void)

void FUN_14349bdfc(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(param_1 + 0x4c8);
  if (lVar4 == 0) goto LAB_14349bf0a;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_14349be47;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14349be4c;
      goto LAB_14349be73;
    }
  }
  else {
LAB_14349be47:
    if (iVar7 != 0x10) {
LAB_14349be73:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
        goto LAB_14349be4c;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_14349be4c;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_14349bfcc;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_1434a3d89);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_14349bfcc:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x16);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x16);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_14349c04c;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_14349c04c:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14a899be0;
        puVar17[0x15] = lVar4;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar16 != '\x06') {
            uVar6 = uVar16;
          }
          uVar16 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a899b80;
        local_68[0] = &LAB_1434a4d6a;
        local_40 = lVar4;
        FUN_14005a792(&DAT_14ca9a440,L"GbxTriggerUpdateSkyLightCapture",&DAT_14cad3b7c);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_14349bf0a;
    }
  }
LAB_14349be4c:
  *(undefined1 *)(lVar4 + 0x140) = 1;
LAB_14349bf0a:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14349c2a2 FUN_14349c2a2 body=801 status=ok
// SIG undefined FUN_14349c2a2(void)

undefined1 (*) [16] FUN_14349c2a2(longlong param_1,undefined1 (*param_2) [16],double *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  dVar10 = (double)*(float *)(param_1 + 0x640);
  dVar7 = *param_3;
  dVar8 = param_3[1];
  dVar1 = param_3[2];
  dVar18 = param_3[8];
  dVar11 = param_3[9];
  dVar13 = param_3[10];
  dVar6 = dVar8 + dVar8;
  dVar3 = dVar1 + dVar1;
  dVar17 = dVar7 * (dVar7 + dVar7);
  dVar15 = (1.0 - (dVar1 * dVar3 + dVar8 * dVar6)) * dVar18;
  dVar16 = (1.0 - (dVar1 * dVar3 + dVar17)) * dVar11;
  dVar14 = (1.0 - (dVar17 + dVar8 * dVar6)) * dVar13;
  dVar1 = param_3[3];
  dVar17 = dVar3 * dVar1;
  dVar4 = (dVar7 + dVar7) * param_3[3];
  dVar1 = dVar6 * dVar1;
  dVar19 = (dVar6 * dVar7 + dVar17) * dVar18;
  dVar20 = (dVar3 * dVar8 + dVar4) * dVar11;
  dVar12 = (dVar1 + *param_3 * dVar3) * dVar13;
  dVar18 = (*param_3 * dVar3 - dVar1) * dVar18;
  dVar11 = (dVar6 * dVar7 - dVar17) * dVar11;
  dVar13 = (dVar3 * dVar8 - dVar4) * dVar13;
  dVar3 = DAT_14c8464e0 * dVar15;
  dVar4 = DAT_14c8464e8 * dVar11;
  dVar17 = DAT_14c8464f0 * dVar12;
  dVar6 = ABS(dVar10 * dVar12) + ABS(dVar10 * dVar11) + ABS(dVar10 * dVar15);
  dVar7 = ABS(dVar10 * dVar13) + ABS(dVar10 * dVar16) + ABS(dVar10 * dVar19);
  dVar21 = ABS(dVar14 * dVar10) + ABS(dVar20 * dVar10) + ABS(dVar18 * dVar10);
  dVar8 = DAT_14c8464e0 * dVar18;
  dVar9 = DAT_14c8464e8 * dVar20;
  dVar1 = DAT_14c8464f0 * dVar14;
  dVar12 = dVar12 * dVar12 + dVar11 * dVar11 + dVar15 * dVar15;
  dVar11 = dVar13 * dVar13 + dVar16 * dVar16 + dVar19 * dVar19;
  dVar18 = dVar14 * dVar14 + dVar20 * dVar20 + dVar18 * dVar18;
  if (dVar12 <= dVar11) {
    dVar12 = dVar11;
  }
  if (dVar12 <= dVar18) {
    dVar12 = dVar18;
  }
  dVar11 = param_3[4];
  dVar13 = DAT_14c8464f0 * dVar13 + DAT_14c8464e8 * dVar16 + DAT_14c8464e0 * dVar19 + param_3[5];
  dVar18 = param_3[6];
  if (dVar12 < 0.0) {
    dVar12 = sqrt(dVar12);
  }
  else {
    dVar12 = SQRT(dVar12);
  }
  dVar15 = SQRT(dVar7 * dVar7 + dVar21 * dVar21 + dVar6 * dVar6);
  dVar14 = dVar12 * dVar10;
  if (dVar15 <= dVar12 * dVar10) {
    dVar14 = dVar15;
  }
  auVar2._8_4_ = SUB84(dVar13,0);
  auVar2._0_8_ = dVar17 + dVar4 + dVar3 + dVar11;
  auVar2._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *param_2 = auVar2;
  *(double *)param_2[1] = dVar1 + dVar9 + dVar8 + dVar18;
  auVar5._8_4_ = SUB84(dVar7,0);
  auVar5._0_8_ = dVar6;
  auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(param_2[1] + 8) = auVar5;
  *(double *)(param_2[2] + 8) = dVar21;
  *(double *)param_2[3] = dVar14;
  return param_2;
}



// FUNCTION 14349c67a FUN_14349c67a body=297 status=ok
// SIG undefined FUN_14349c67a(void)

uint FUN_14349c67a(undefined4 param_1,double *param_2,double *param_3,double *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint in_EAX;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (((9.999999747378752e-05 < ABS(ABS(*param_4) - ABS(param_4[1]))) ||
      (9.999999747378752e-05 < ABS(ABS(*param_4) - ABS(param_4[2])))) ||
     (in_EAX = CONCAT31((int3)(in_EAX >> 8),1),
     9.999999747378752e-05 < ABS(ABS(param_4[1]) - ABS(param_4[2])))) {
    lVar8 = -(ulonglong)(9.999999747378752e-05 < ABS(param_2[1] - param_3[1]));
    auVar4._8_4_ = (int)lVar8;
    auVar4._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*param_2 - *param_3));
    auVar4._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
    uVar5 = movmskpd(in_EAX,auVar4);
    lVar8 = -(ulonglong)(9.999999747378752e-05 < ABS(param_2[3] - param_3[3]));
    auVar3._8_4_ = (int)lVar8;
    auVar3._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_2[2] - param_3[2]));
    auVar3._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
    iVar6 = movmskpd(param_1,auVar3);
    uVar7 = iVar6 << 2 | uVar5;
    if (uVar7 == 0) {
      in_EAX = 1;
    }
    else {
      auVar1._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_2[1] + param_3[1]));
      auVar1._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*param_2 + *param_3));
      iVar6 = movmskpd(uVar5,auVar1);
      auVar2._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_2[3] + param_3[3]));
      auVar2._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_2[2] + param_3[2]));
      uVar5 = movmskpd(uVar7,auVar2);
      in_EAX = (uint)((uVar5 & 0x3fffffff) == 0 && iVar6 == 0);
    }
  }
  return in_EAX;
}



// FUNCTION 14349c7a3 FUN_14349c7a3 body=55 status=ok
// SIG undefined FUN_14349c7a3(void)

void FUN_14349c7a3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad2e10 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad2e10 = FUN_14171c317(FUN_1463bd9db,uVar1,L"ESplinePointType");
  }
  return;
}



// FUNCTION 14349c7da FUN_14349c7da body=55 status=ok
// SIG undefined FUN_14349c7da(void)

void FUN_14349c7da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad2e28 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad2e28 = FUN_14171c317(FUN_1417c1bf9,uVar1,L"ESplineCoordinateSpace");
  }
  return;
}



// FUNCTION 14349c812 FUN_14349c812 body=7 status=ok
// SIG undefined FUN_14349c812(void)

undefined4 FUN_14349c812(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x628);
}



// FUNCTION 14349c81a FUN_14349c81a body=30 status=ok
// SIG undefined FUN_14349c81a(void)

int FUN_14349c81a(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x628);
  iVar2 = 1;
  if (1 < iVar1) {
    iVar2 = iVar1;
  }
  iVar2 = iVar2 + -1;
  if (*(char *)(param_1 + 0x695) != '\0') {
    iVar2 = iVar1;
  }
  return iVar2;
}



// FUNCTION 14349c838 FUN_14349c838 body=278 status=ok
// SIG undefined FUN_14349c838(void)

undefined8 FUN_14349c838(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar5;
  float fVar6;
  undefined1 in_XMM1 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar9 [16];
  
  lVar1 = *param_1;
  auVar9._4_12_ = in_XMM1._4_12_;
  fVar5 = in_XMM1._0_4_ / *(float *)(lVar1 + 0x68c);
  if ((char)param_1[1] == '\x01') {
    if ((longlong)*(int *)(lVar1 + 0x670) < 1) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = *(float *)(*(longlong *)(lVar1 + 0x668) + -0x14 +
                        (longlong)*(int *)(lVar1 + 0x670) * 0x14);
    }
    auVar9._0_4_ = fVar5 * fVar3;
    uVar4 = auVar9._0_8_;
  }
  else {
    uVar2 = *(byte *)(lVar1 + 0x695) ^ 1;
    fVar3 = (float)(int)(*(int *)(lVar1 + 0x628) - uVar2);
    if ((uVar2 != 0) || (*(char *)((longlong)param_1 + 9) != '\x01')) {
      uVar4 = FUN_147a1e56e(lVar1);
      return uVar4;
    }
    auVar9 = roundps(unaff_XMM7,ZEXT416((uint)fVar5),1);
    fVar6 = 0.0;
    if (0 < (longlong)*(int *)(lVar1 + 0x670)) {
      fVar6 = *(float *)(*(longlong *)(lVar1 + 0x668) + -0x14 +
                        (longlong)*(int *)(lVar1 + 0x670) * 0x14);
    }
    fVar5 = (float)FUN_1447c7e44(fVar5 * fVar3);
    uVar4 = FUN_147a1e56e(lVar1,~-(uint)(fVar5 < 0.0) & (uint)fVar5 |
                                (uint)(fVar3 + fVar5) & -(uint)(fVar5 < 0.0));
    auVar7._8_4_ = extraout_XMM0_Dc;
    auVar7._0_8_ = uVar4;
    auVar7._12_4_ = extraout_XMM0_Dd;
    auVar8._4_12_ = auVar7._4_12_;
    auVar8._0_4_ = (float)uVar4 + auVar9._0_4_ * fVar6;
    uVar4 = auVar8._0_8_;
  }
  return uVar4;
}



// FUNCTION 14349c94e FUN_14349c94e body=69 status=ok
// SIG undefined FUN_14349c94e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14349c94e(void)

{
  _DAT_14cad33c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014349c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad33d0,1);
  return;
}



// FUNCTION 14349c993 FUN_14349c993 body=69 status=ok
// SIG undefined FUN_14349c993(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14349c993(void)

{
  _DAT_14cad33d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014349c9d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad33e0,1);
  return;
}



// FUNCTION 14349c9d8 FUN_14349c9d8 body=1450 status=ok
// SIG undefined FUN_14349c9d8(void)

void FUN_14349c9d8(byte param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
                  undefined8 param_6,uint param_7,longlong *param_8,longlong param_9,
                  longlong *param_10,longlong param_11)

{
  ulonglong *puVar1;
  bool bVar2;
  ushort uVar3;
  undefined *puVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ushort *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  undefined1 auStack_148 [32];
  wchar_t *local_128;
  wchar_t *local_120;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined8 *local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  undefined4 auStack_b0 [26];
  ulonglong local_48;
  uint uVar10;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((8 < param_1) || ((0x121U >> (param_1 & 0x1f) & 1) == 0)) goto LAB_14349ccb9;
  if (param_3 == 0) {
    uVar10 = param_7;
    if (param_4 == 0) goto LAB_14349ca2e;
    uVar3 = FUN_144b2876a(param_4);
  }
  else {
    uVar10 = *(uint *)(param_3 + 8);
LAB_14349ca2e:
    uVar3 = *(ushort *)(&DAT_14ca85070 + (longlong)(int)uVar10 * 2);
  }
  bVar16 = DAT_14ca96500;
  if (param_7 != 1) {
    if ((int)param_7 < 3) {
      bVar16 = 0;
    }
    else {
      lVar7 = (ulonglong)uVar3 * 0x3c;
      bVar16 = 0;
      if ((*(longlong *)(&DAT_14ca814b0 + lVar7) != DAT_14ca81490) && (bVar16 = 0, uVar3 != 0xc)) {
        if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar7 + 3) & 0x10) == 0) {
          bVar16 = 1;
        }
        else {
          bVar16 = (*(byte *)((longlong)&DAT_14ca814c8 + lVar7 + 3) & 0x20) >> 5;
        }
      }
    }
  }
  if ((*(byte *)(param_9 + 0x7d) & 1) != 0) {
    lVar7 = *(longlong *)(param_9 + 0x38);
    lVar5 = (**(code **)(*param_8 + 0x30))(param_8);
    if ((((int)param_7 < 2) || ((*(uint *)(lVar5 + 0x28) & 0x4000) == 0)) ||
       ((*(byte *)((longlong)&DAT_14ca814d0 +
                  (ulonglong)*(ushort *)(&DAT_14ca85070 + (ulonglong)param_7 * 2) * 0x3c + 6) & 0x10
        ) == 0)) {
      local_d0 = *(undefined8 *)(lVar7 + 0x10);
      uVar10 = *(uint *)(param_8 + 0x43);
      iVar9 = *(int *)(param_11 + 0x60);
      *(uint *)(param_11 + 0x60) = iVar9 + 1U;
      if (*(uint *)(param_11 + 100) < iVar9 + 1U) {
        FUN_14744556c(param_11,iVar9);
      }
      lVar7 = *(longlong *)(param_11 + 0x58);
      if (*(longlong *)(param_11 + 0x58) == 0) {
        lVar7 = param_11;
      }
      *(uint *)(lVar7 + (longlong)iVar9 * 0xc) = uVar10 & 0xf;
      *(undefined8 *)(lVar7 + 4 + (longlong)iVar9 * 0xc) = local_d0;
    }
  }
  if (*(code **)(*param_8 + 0x30) == (code *)&LAB_144b223c6) {
    puVar4 = &DAT_14cad33e8;
  }
  else {
    puVar4 = (undefined *)(**(code **)(*param_8 + 0x30))();
  }
  bVar6 = 0;
  if ((1 < (int)param_7) && (bVar6 = 0, (*(uint *)(puVar4 + 0x28) & 0x4000) != 0)) {
    bVar6 = (*(byte *)((longlong)&DAT_14ca814d0 +
                      (ulonglong)*(ushort *)(&DAT_14ca85070 + (ulonglong)param_7 * 2) * 0x3c + 6) &
            0x10) >> 4;
  }
  if ((bVar6 | bVar16) == 1) {
    lVar7 = *(longlong *)(param_9 + 0x40);
    if (lVar7 == 0) {
      lVar7 = param_8[0x41];
    }
    if (DAT_14c846b14 == '\x01') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1))
      {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
      if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
        (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cae9758) && (FUN_144b3d300(&DAT_14cae9758), DAT_14cae9758 == -1)) {
      FUN_145fce420(&local_b8);
      local_e0 = 0;
      local_e8 = 0;
      local_f0 = 0;
      local_110 = "Unknown";
      local_118 = 0;
      local_120 = L"LocalVF";
      local_128 = L"FLocalVertexFactoryUniformShaderParameters";
      local_100 = 0x40;
      local_108 = 0x13;
      local_f8 = &local_b8;
      FUN_140b49562(&DAT_14cae96d8,1,1);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1435668c3);
      _Init_thread_footer(&DAT_14cae9758);
    }
    uVar13 = *(ulonglong *)(param_5 + 0xa0);
    uVar8 = param_5 + 0xa0 + ((longlong)uVar13 >> 0x18);
    if ((uVar13 & 1) == 0) {
      uVar8 = uVar13;
    }
    if (0 < (longlong)*(int *)(param_5 + 0xa8)) {
      lVar5 = 0;
      do {
        if (*(longlong *)(uVar8 + lVar5 * 4) == DAT_14cae9700) {
          uVar13 = *(ulonglong *)(param_5 + 0xb0);
          if ((uVar13 & 1) != 0) {
            uVar13 = ((longlong)uVar13 >> 0x18) + param_5 + 0xb0;
          }
          puVar11 = (ushort *)(uVar13 + lVar5);
          goto LAB_14349cc47;
        }
        lVar5 = lVar5 + 2;
      } while ((longlong)*(int *)(param_5 + 0xa8) * 2 != lVar5);
    }
    puVar11 = &DAT_14c9c45cc;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
LAB_14349cc47:
    uVar3 = *puVar11;
    if (uVar3 != 0xffff) {
      puVar1 = (ulonglong *)*param_10;
      uVar13 = *puVar1;
      uVar8 = ((longlong)uVar13 >> 0x18) + (longlong)puVar1;
      if ((uVar13 & 1) == 0) {
        uVar8 = uVar13;
      }
      uVar10 = (uint)puVar1[1];
      uVar12 = 0;
      uVar14 = uVar10;
      if (8 < (int)uVar10) {
        uVar12 = 0;
        uVar15 = uVar10;
        do {
          uVar14 = uVar15 >> 1;
          if (*(ushort *)(uVar8 + (ulonglong)(uVar14 + uVar12) * 2) < uVar3) {
            uVar12 = uVar14 + uVar12 + (uVar15 & 1);
          }
          bVar2 = 0x11 < uVar15;
          uVar15 = uVar14;
        } while (bVar2);
      }
      uVar14 = uVar14 + uVar12 + 1;
      if ((int)uVar14 < (int)uVar10) {
        uVar10 = uVar14;
      }
      iVar9 = uVar10 - uVar12;
      if (iVar9 != 0 && (int)uVar12 <= (int)uVar10) {
        uVar13 = (ulonglong)uVar12;
        do {
          if (*(ushort *)(uVar8 + uVar13 * 2) == uVar3) {
            *(longlong *)(param_10[1] + (uVar13 & 0xffffffff) * 8) = lVar7;
            break;
          }
          uVar13 = uVar13 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
  }
  if ((param_7 != 1 & bVar16) == 0) {
    lVar7 = *(longlong *)(param_9 + 0x30);
    lVar5 = 0xc;
    do {
      *(undefined4 *)((longlong)&local_c8 + lVar5 + 4) = 0;
      *(undefined4 *)((longlong)local_c0 + lVar5) = 0;
      *(undefined4 *)((longlong)local_c0 + lVar5 + 4) = 0;
      *(undefined4 *)((longlong)auStack_b0 + lVar5 + -8) = 0x3f800000;
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != 0x7c);
    local_c0[0] = 7;
    local_c8 = &local_b8;
    FUN_14066ba35(lVar7 + 0x8c0,&local_c8);
    local_c8 = (undefined8 *)CONCAT26(local_c8._6_2_,*(undefined6 *)(param_2 + 4));
    FUN_147a27f36(param_10,&local_c8,&local_b8);
  }
LAB_14349ccb9:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14349cf9c FUN_14349cf9c body=93 status=ok
// SIG undefined FUN_14349cf9c(void)

undefined8 * FUN_14349cf9c(byte param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x0;
  if ((param_1 < 9) && ((0x121U >> (param_1 & 0x1f) & 1) != 0)) {
    puVar1 = (undefined8 *)FUN_14001cc68(0xc,0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    FUN_1474409b8((longlong)puVar1 + 4,param_2,L"SplineParams",0);
  }
  return puVar1;
}



// FUNCTION 14349d006 FUN_14349d006 body=1537 status=ok
// SIG undefined FUN_14349d006(void)

void FUN_14349d006(longlong *param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_148 [32];
  undefined1 **local_128;
  longlong local_120;
  undefined1 local_118 [176];
  undefined1 *local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((DAT_14c761458 == 0) || ((*(byte *)((longlong)param_1 + 0x9c) & 2) == 0)) ||
     (param_1[0xb5] == 0)) {
    if (param_2 == '\0') {
      if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
        bVar5 = *(byte *)((longlong)param_1 + 0x9d);
        if ((bVar5 & 1) != 0) {
          if ((param_1[0x16] != 0) || (lVar9 = FUN_1448abda6(param_1), lVar9 != 0))
          goto LAB_14349d1fd;
          bVar5 = *(byte *)((longlong)param_1 + 0x9d);
        }
        *(byte *)((longlong)param_1 + 0x9d) = bVar5 | 1;
        FUN_1401057d4(param_1);
        FUN_14010586c(&DAT_14cad0140,param_1);
      }
    }
    else {
      FUN_1400ed49e(param_1);
    }
    goto LAB_14349d1fd;
  }
  if (param_2 == '\0') {
    FUN_1448c69c8(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x328))(param_1);
  }
  local_120 = param_1[0xb5];
  FUN_144961d36(param_1,local_118);
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar9 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14349d117;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14349d564;
      goto LAB_14349d120;
    }
  }
  else {
LAB_14349d117:
    if (iVar6 != 0x10) {
LAB_14349d120:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar9 + 0xc60), iVar6 == 2))
        goto LAB_14349d564;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_14349d564;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_14349d2dd;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_1434a3d89);
          }
          lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar9 + 0x310);
          *(undefined8 *)(lVar9 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_14349d2dd:
          puVar16 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar16 + 0x2c);
          uVar14 = puVar12[0x12];
          if (puVar15 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar2;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            puVar16 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar16 + 0x2c);
            uVar14 = 0;
            if (puVar15 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_14349d35d;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_14349d35d:
        *(uint **)(puVar12 + 0x10) = puVar15;
        puVar12[0x12] = uVar14;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14a899d28;
        memcpy(puVar16 + 0x15,&local_120,0xb8);
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar6 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar9 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar9 == 0) {
          uVar4 = 1;
          if ((char)uVar17 != '\x06') {
            uVar4 = uVar17;
          }
          uVar17 = uVar4;
          uVar13 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar9 + 0x30);
        }
        puVar16[0xf] = uVar13;
        puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_68[0] = (undefined1 *)0x0;
        plVar10 = (longlong *)FUN_14001cc68(0xc0,8);
        *plVar10 = (longlong)&PTR_LAB_14a899cd0;
        local_58 = plVar10;
        memcpy(plVar10 + 1,&local_120,0xb8);
        if (plVar10 != (longlong *)&DAT_fffffffffffffff8) {
          local_68[0] = &LAB_1434a5460;
        }
        local_128 = local_68;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateSplineParamsRTCommand",&DAT_14cad3b84);
        if (local_68[0] != (undefined1 *)0x0) {
          plVar10 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar10 = local_48;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      goto LAB_14349d1fd;
    }
  }
LAB_14349d564:
  FUN_147d4ff5d(local_120,local_118);
LAB_14349d1fd:
  *(undefined8 *)((longlong)param_1 + 0x7ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7f4) = 0;
  FUN_1406cc378(param_1);
  *(byte *)((longlong)param_1 + 0x845) = *(byte *)((longlong)param_1 + 0x845) & 0xfb;
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14349d608 FUN_14349d608 body=145 status=ok
// SIG undefined FUN_14349d608(void)

undefined8 FUN_14349d608(undefined8 param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14490dacc(param_1,1);
  if (((cVar1 == '\0') || (DAT_14c761950 != 1)) || (DAT_14cafb288 == 1)) {
    if (((param_3 != '\0') && (cVar1 = FUN_1449373d8(), cVar1 != '\0')) && (DAT_14c76145c != 0)) {
      uVar2 = FUN_14001cc68(0xb10,0x10);
      FUN_140c8968c(uVar2,param_2,param_1);
      return uVar2;
    }
    uVar2 = FUN_14001cc68(0xab0,0x10);
    FUN_1403302b6(uVar2,param_1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14349d6d3 FUN_14349d6d3 body=55 status=ok
// SIG undefined FUN_14349d6d3(void)

void FUN_14349d6d3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad3460 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad3460 = FUN_14171c317(FUN_1463bf0b2,uVar1,L"ESplineMeshAxis");
  }
  return;
}



// FUNCTION 14349d710 FUN_14349d710 body=669 status=ok
// SIG undefined FUN_14349d710(void)

void FUN_14349d710(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_24);
            goto LAB_14349d8cd;
          }
        }
        puVar9 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if ((puVar9 != &local_24) && ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0)) {
          (**(code **)(*plVar4 + 0x100))(plVar4,&local_24,puVar9,(int)plVar4[6]);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_40 = CONCAT44(local_40._4_4_,(int)plVar4[6]);
        local_48 = local_48 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_24,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_24,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
LAB_14349d8cd:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14349d9ae FUN_14349d9ae body=669 status=ok
// SIG undefined FUN_14349d9ae(void)

void FUN_14349d9ae(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_24);
            goto LAB_14349db6b;
          }
        }
        puVar9 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if ((puVar9 != &local_24) && ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0)) {
          (**(code **)(*plVar4 + 0x100))(plVar4,&local_24,puVar9,(int)plVar4[6]);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_40 = CONCAT44(local_40._4_4_,(int)plVar4[6]);
        local_48 = local_48 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_24,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_24,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
LAB_14349db6b:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14349dc4c FUN_14349dc4c body=669 status=ok
// SIG undefined FUN_14349dc4c(void)

void FUN_14349dc4c(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_24);
            goto LAB_14349de09;
          }
        }
        puVar9 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if ((puVar9 != &local_24) && ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0)) {
          (**(code **)(*plVar4 + 0x100))(plVar4,&local_24,puVar9,(int)plVar4[6]);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_40 = CONCAT44(local_40._4_4_,(int)plVar4[6]);
        local_48 = local_48 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_24,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_24,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
LAB_14349de09:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14349deea FUN_14349deea body=1442 status=ok
// SIG undefined FUN_14349deea(void)

void FUN_14349deea(longlong param_1,float param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  longlong *plVar15;
  uint *puVar16;
  float *pfVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  float fVar20;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  float local_60;
  longlong local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((*(float *)(param_1 + 0x69c) == param_2) &&
       (!NAN(*(float *)(param_1 + 0x69c)) && !NAN(param_2))) || (*(longlong *)(param_1 + 0xb0) == 0)
      ) || (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x218) == 0)) goto LAB_14349e0d7;
  *(float *)(param_1 + 0x69c) = param_2;
  if ((*(longlong *)(param_1 + 0x660) != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  else if (*(longlong *)(param_1 + 0x660) == 0) goto LAB_14349e0d7;
  if ((*(byte *)(param_1 + 0x675) & 0x10) == 0) {
    lVar4 = *(longlong *)(param_1 + 0x660);
    if ((lVar4 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar4);
    }
    pfVar17 = (float *)(lVar4 + 0x180);
  }
  else {
    pfVar17 = (float *)(param_1 + 0x69c);
  }
  fVar20 = *pfVar17;
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  lVar4 = *(longlong *)(param_1 + 0x5a8);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_14349dfd1;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14349dfd6;
      goto LAB_14349e01c;
    }
LAB_14349dfd6:
    if (lVar4 != 0) {
      *(float *)(lVar4 + 0xb4) = fVar20;
    }
  }
  else {
LAB_14349dfd1:
    if (iVar7 == 0x10) goto LAB_14349dfd6;
LAB_14349e01c:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
      goto LAB_14349dfd6;
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_14349dfd6;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_14349e1a7;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_1434a3d89);
        }
        lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar5 + 0x310);
        *(undefined8 *)(lVar5 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        FUN_140217a48(puVar2);
        puVar11 = (uint *)*puVar2;
LAB_14349e1a7:
        puVar18 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar16 = (uint *)(puVar18 + 0x17);
        uVar13 = puVar11[0x12];
        if (puVar16 <= puVar11 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
          LOCK();
          uVar3 = *puVar11;
          *puVar11 = *puVar11 + uVar13 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar13) != 0xffffffff) break;
          puVar11 = (uint *)*puVar2;
          *puVar11 = 0xffffffff;
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          puVar18 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x17);
          uVar13 = 0;
          if (puVar16 <= puVar11 + 0x4000) {
            uVar13 = 1;
            goto LAB_14349e227;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_14349e227:
      *(uint **)(puVar11 + 0x10) = puVar16;
      puVar11[0x12] = uVar13;
      iVar7 = 0;
      FUN_1447247dc(puVar18,0);
      *puVar18 = &PTR_FUN_14a899d98;
      *(float *)(puVar18 + 0x15) = fVar20;
      puVar18[0x16] = lVar4;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
          iVar7 = 0;
        }
        else {
          uVar19 = 2;
        }
      }
      else {
        iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar19 = 5;
      }
      if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
      }
      puVar18[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar18[9] = puVar18;
      puVar18[10] = puVar18;
      lVar4 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar4 == 0) {
        uVar6 = 1;
        if ((char)uVar19 != '\x06') {
          uVar6 = uVar19;
        }
        uVar19 = uVar6;
        uVar12 = 0;
      }
      else {
        if ((char)uVar19 == '\x06') {
          uVar19 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar4 + 0x30);
      }
      puVar18[0xf] = uVar12;
      puVar18[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar18 + 0x1c) = iVar7;
      if (puVar18 == (undefined8 *)0x0) {
        local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4();
      }
      else {
        LOCK();
        *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
        UNLOCK();
        local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4();
        LOCK();
        piVar1 = (int *)(puVar18 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar18)(puVar18,1);
        }
      }
    }
    else {
      local_98 = local_88;
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14a899d40;
      local_88[0] = &LAB_1434a58c8;
      local_60 = fVar20;
      local_58 = lVar4;
      FUN_14005a792(&DAT_14ca9a440,L"UpdateDFSelfShadowBiasCmd",&DAT_14cad3b88);
      if (local_88[0] != (undefined1 *)0x0) {
        pppuVar14 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar14 = &local_68;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
  }
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    plVar15 = (longlong *)0x0;
  }
  else {
    plVar15 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x218);
  }
  (**(code **)(*plVar15 + 0xb8))(plVar15,param_1);
LAB_14349e0d7:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14349e48e FUN_14349e48e body=1371 status=ok
// SIG undefined FUN_14349e48e(void)

void FUN_14349e48e(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined ***pppuVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 local_69;
  undefined8 local_68;
  undefined ***local_58;
  undefined **local_48;
  char local_40;
  longlong *local_38;
  ulonglong local_28;
  
  cVar7 = (char)param_2;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0x660) != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  else if (*(longlong *)(param_1 + 0x660) == 0) goto LAB_14349e62e;
  if (((*(longlong *)(param_1 + 0xb0) == 0) ||
      (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x218) == 0)) ||
     (plVar5 = *(longlong **)(param_1 + 0x5a8), plVar5 == (longlong *)0x0)) goto LAB_14349e62e;
  bVar4 = *(byte *)(param_1 + 0x66c);
  *(byte *)(param_1 + 0x66c) = bVar4 & 0xbf | cVar7 << 6;
  if (((*(byte *)((longlong)plVar5 + 0x74) & 8) != 0) || (((bVar4 & 0x40) == 0) != (bool)cVar7))
  goto LAB_14349e62e;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar10 = *(int *)(lVar6 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar10 != 2) {
      if (iVar10 != 1) goto LAB_14349e54f;
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      if (DVar11 == DVar12) goto LAB_14349e554;
      goto LAB_14349e594;
    }
  }
  else {
LAB_14349e54f:
    if (iVar10 != 0x10) {
LAB_14349e594:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar6 + 0xc60), iVar10 == 2))
        goto LAB_14349e554;
        if (iVar10 == 1) {
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          if (DVar11 == DVar12) goto LAB_14349e554;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar14 = (uint *)*puVar2;
        if (puVar14 != (uint *)0x0) goto LAB_14349e6ef;
        while( true ) {
          uVar16 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar16 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar16 | 1;
            __tlregdtor(&LAB_1434a3d89);
          }
          lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar13 = *(undefined4 **)(lVar6 + 0x310);
          *(undefined8 *)(lVar6 + 0x310) = 0;
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar13 = 0xffffffff;
          *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar2 = puVar13;
          FUN_140217a48(puVar2);
          puVar14 = (uint *)*puVar2;
LAB_14349e6ef:
          puVar20 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar20 + 0x17);
          uVar16 = puVar14[0x12];
          if (puVar18 <= puVar14 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
            LOCK();
            uVar3 = *puVar14;
            *puVar14 = *puVar14 + uVar16 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar16) != 0xffffffff) break;
            puVar14 = (uint *)*puVar2;
            *puVar14 = 0xffffffff;
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar2 = puVar14;
            puVar20 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar20 + 0x17);
            uVar16 = 0;
            if (puVar18 <= puVar14 + 0x4000) {
              uVar16 = 1;
              goto LAB_14349e76f;
            }
          }
        }
        uVar16 = uVar16 + 1;
LAB_14349e76f:
        *(uint **)(puVar14 + 0x10) = puVar18;
        puVar14[0x12] = uVar16;
        iVar10 = 0;
        FUN_1447247dc(puVar20,0);
        *puVar20 = &PTR_FUN_14a899e00;
        *(char *)(puVar20 + 0x15) = cVar7;
        uVar8 = (undefined4)local_68;
        *(undefined4 *)((longlong)puVar20 + 0xa9) = uVar8;
        *(undefined4 *)((longlong)puVar20 + 0xac) = local_68._3_4_;
        puVar20[0x16] = plVar5;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar16 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
            uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
            iVar10 = 0;
          }
          else {
            uVar19 = 2;
          }
        }
        else {
          iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar19 = 5;
        }
        if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
        }
        puVar20[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar20[9] = puVar20;
        puVar20[10] = puVar20;
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar9 = 1;
          if ((char)uVar19 != '\x06') {
            uVar9 = uVar19;
          }
          uVar19 = uVar9;
          uVar15 = 0;
        }
        else {
          if ((char)uVar19 == '\x06') {
            uVar19 = *(ulonglong *)(lVar6 + 0x38) >> 0x3b;
          }
          uVar15 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar20[0xf] = uVar15;
        puVar20[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar20 + 0x1c) = iVar10;
        if (puVar20 == (undefined8 *)0x0) {
          local_69 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
          local_69 = 1;
          FUN_1447439e4(puVar20);
          LOCK();
          piVar1 = (int *)(puVar20 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar20)(puVar20,1);
          }
        }
      }
      else {
        local_78 = &local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a899db0;
        local_68 = &LAB_1434a5a72;
        local_40 = cVar7;
        local_38 = plVar5;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateEvaluateWPORTCmd",&DAT_14cad3b8c);
        if (local_68 != (undefined1 *)0x0) {
          pppuVar17 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar17 = &local_48;
          }
          (*(code *)(*pppuVar17)[2])();
        }
      }
      goto LAB_14349e62e;
    }
  }
LAB_14349e554:
  (**(code **)(*plVar5 + 0x268))(plVar5,&DAT_14ca85100,param_2);
LAB_14349e62e:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14349e9ea FUN_14349e9ea body=234 status=ok
// SIG undefined FUN_14349e9ea(void)

longlong FUN_14349e9ea(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad3688 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144b223ce;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417963e0;
    local_38 = &LAB_147a2f4c9;
    local_40 = &LAB_1400ea6f8;
    local_48 = L"Engine";
    local_50 = 0x200000000000;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x720;
    FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad3688;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14349ead6 FUN_14349ead6 body=89 status=ok
// SIG undefined FUN_14349ead6(void)

undefined8 * FUN_14349ead6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147a3ad0e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 14349eb58 FUN_14349eb58 body=84 status=ok
// SIG undefined FUN_14349eb58(void)

void FUN_14349eb58(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  FUN_1479eda04();
  cVar1 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x460))(param_1 + -0x30);
  *(byte *)(param_1 + 0x6e) = *(byte *)(param_1 + 0x6e) & 0xbf | cVar1 << 6;
  plVar2 = DAT_14caca218;
  if (DAT_14caca220 == 0) {
    plVar2 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014349eba9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1 + -0x30);
  return;
}



// FUNCTION 14349ebac FUN_14349ebac body=152 status=ok
// SIG undefined FUN_14349ebac(void)

undefined8 FUN_14349ebac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x660);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
    lVar2 = *(longlong *)(param_1 + 0x660);
  }
  else if (lVar2 == 0) {
    return 0;
  }
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  if ((param_2 != 0) && (0 < (longlong)*(int *)(lVar2 + 0x1b8))) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x1b0) + lVar3 * 8);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x28) == param_2)) {
        return 1;
      }
      lVar3 = lVar3 + 1;
    } while (*(int *)(lVar2 + 0x1b8) != lVar3);
  }
  return 0;
}



// FUNCTION 14349ec44 FUN_14349ec44 body=69 status=ok
// SIG undefined FUN_14349ec44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14349ec44(void)

{
  _DAT_14cad36f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014349ec86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad36f8,1);
  return;
}



// FUNCTION 14349ec8e FUN_14349ec8e body=96 status=ok
// SIG undefined FUN_14349ec8e(void)

bool FUN_14349ec8e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x660);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    lVar2 = *(longlong *)(param_1 + 0x660);
  }
  else {
    lVar2 = lVar1;
    if (lVar1 == 0) goto LAB_14349ecc6;
  }
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
LAB_14349ecc6:
  return lVar1 != 0;
}



// FUNCTION 14349ecee FUN_14349ecee body=327 status=ok
// SIG undefined FUN_14349ecee(void)

bool FUN_14349ecee(longlong *param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  pcVar1 = *(code **)(*param_1 + 0xa80);
  if (pcVar1 == FUN_1401eace6) {
    pcVar1 = *(code **)(*param_1 + 0xae8);
    if (pcVar1 == (code *)&LAB_144b1d52c) {
      plVar3 = param_1 + 0xdd;
    }
    else {
      plVar3 = (longlong *)(*pcVar1)(param_1);
    }
    if (((longlong *)*plVar3 == (longlong *)0x0 || (int)plVar3[1] == 0) ||
       (cVar2 = (**(code **)(*(longlong *)*plVar3 + 0x30))(), cVar2 == '\0')) {
      lVar5 = param_1[0xcc];
      if ((lVar5 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar5);
        lVar5 = param_1[0xcc];
      }
      else if (lVar5 == 0) {
        return false;
      }
      if ((lVar5 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar5);
      }
      if (*(longlong *)(lVar5 + 0xe0) == 0) {
        return false;
      }
      lVar5 = param_1[0xcc];
      if ((lVar5 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar5);
      }
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0xe0) + 0x40);
    }
    else {
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0xae8))();
      if (*(int *)(puVar4 + 1) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)*puVar4;
      }
      lVar5 = (**(code **)(*plVar3 + 0x58))();
    }
  }
  else {
    lVar5 = (*pcVar1)(param_1);
  }
  if (lVar5 == 0) {
    return false;
  }
  return 0 < *(int *)(lVar5 + 0x70);
}



// FUNCTION 14349ee36 FUN_14349ee36 body=156 status=ok
// SIG undefined FUN_14349ee36(void)

ulonglong FUN_14349ee36(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x660);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
    lVar2 = *(longlong *)(param_1 + 0x660);
  }
  else if (lVar2 == 0) {
    return 0xffffffff;
  }
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  if (0 < (int)*(uint *)(lVar2 + 0x160)) {
    plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x158) + 8);
    uVar3 = 0;
    do {
      if (*plVar1 == param_2) {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 6;
    } while (*(uint *)(lVar2 + 0x160) != uVar3);
  }
  return 0xffffffff;
}



// FUNCTION 14349eed2 FUN_14349eed2 body=361 status=ok
// SIG undefined FUN_14349eed2(void)

ulonglong FUN_14349eed2(longlong *param_1,float param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)param_1[0xcc];
  bVar2 = plVar1 != (longlong *)0x0 & DAT_14c950c29;
  if (bVar2 == 1) {
    FUN_1456cec3c(plVar1);
  }
  else if (plVar1 == (longlong *)0x0) goto LAB_14349ef99;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cad3708) && (FUN_144b3d300(&DAT_14cad3708), DAT_14cad3708 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cad3700 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streaming.AllowFastForceResident",1);
    _Init_thread_footer(&DAT_14cad3708);
  }
  if (DAT_14cad3700 == (longlong *)0x0) {
    bVar2 = 0;
  }
  else {
    iVar3 = (**(code **)(*DAT_14cad3700 + 0xb0))();
    bVar2 = (iVar3 != 0) << 4;
  }
  *(byte *)((longlong)plVar1 + 0xbc) = *(byte *)((longlong)plVar1 + 0xbc) & 0xef | bVar2;
  (**(code **)(*plVar1 + 0x2a0))(plVar1);
  *(byte *)((longlong)plVar1 + 0xbc) = *(byte *)((longlong)plVar1 + 0xbc) & 0xdf;
  plVar1[8] = (longlong)((double)param_2 + DAT_14c866ff8);
  if (DAT_14cad39b0 == 0) {
    lVar4 = FUN_14001cc68(0x60,0x10);
    FUN_1461a8102(lVar4);
    DAT_14cad39b0 = lVar4;
  }
  param_1 = *(longlong **)(DAT_14cad39b0 + 0x30);
  bVar2 = (**(code **)(*param_1 + 0xa0))(param_1,plVar1);
LAB_14349ef99:
  return CONCAT71((int7)((ulonglong)param_1 >> 8),plVar1 != (longlong *)0x0 & bVar2) & 0xffffffff;
}



// FUNCTION 14349f03c FUN_14349f03c body=5 status=ok
// SIG undefined FUN_14349f03c(void)

undefined8 FUN_14349f03c(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// FUNCTION 14349f0a1 FUN_14349f0a1 body=69 status=ok
// SIG undefined FUN_14349f0a1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14349f0a1(void)

{
  _DAT_14cad3710 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014349f0e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3718,1);
  return;
}



// FUNCTION 14349f0e6 FUN_14349f0e6 body=601 status=ok
// SIG undefined FUN_14349f0e6(void)

longlong * FUN_14349f0e6(longlong *param_1,ulong *param_2)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int iVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  GUID local_48;
  byte local_32;
  byte local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140562eea(&local_32,param_1,0,&DAT_14c896044);
  if ((local_32 & 2) == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      iVar4 = FUN_1448332aa(param_1,&DAT_149e3cb60);
      if (iVar4 < 9) {
        local_48.Data1 = 0;
        local_48.Data2 = 0;
        local_48.Data3 = 0;
        local_48.Data4[0] = '\0';
        local_48.Data4[1] = '\0';
        local_48.Data4[2] = '\0';
        local_48.Data4[3] = '\0';
        local_48.Data4[4] = '\0';
        local_48.Data4[5] = '\0';
        local_48.Data4[6] = '\0';
        local_48.Data4[7] = '\0';
        CoCreateGuid(&local_48);
        *param_2 = local_48.Data1;
        param_2[1] = local_48._4_4_;
        param_2[2] = local_48.Data4._0_4_;
        param_2[3] = local_48.Data4._4_4_;
        puVar5 = (undefined8 *)FUN_14001cc68(0x38,0x10);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        *(undefined8 **)(param_2 + 8) = puVar5;
        FUN_147457ee8(puVar5,param_1);
        FUN_147457f64(*(longlong *)(param_2 + 8) + 8,param_1);
        goto LAB_14349f171;
      }
    }
    if (((param_1[0xd] != 0) && (*(longlong *)(param_1[0xd] + 0x10) != 0)) ||
       ((*(byte *)(param_1 + 5) & 2) != 0)) {
      FUN_1402ac1b3(param_1,param_2 + 4);
    }
    FUN_1402ac1b3(param_1,param_2);
  }
LAB_14349f171:
  if ((local_31 & 1) == 0) {
    lVar2 = *(longlong *)(param_2 + 0x10);
    if ((lVar2 == 0) || (*(int *)(lVar2 + 0x34) == 0)) {
      bVar7 = false;
    }
    else {
      bVar7 = *(int *)(lVar2 + 0x30) != 0;
    }
    local_48.Data1._0_1_ = bVar7;
    puVar3 = (ulonglong *)param_1[1];
    pcVar1 = (char *)*puVar3 + 1;
    if ((char *)puVar3[1] < pcVar1) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_48,1);
      cVar6 = (char)local_48.Data1;
    }
    else {
      cVar6 = *(char *)*puVar3;
      local_48.Data1._0_1_ = cVar6;
      *puVar3 = (ulonglong)pcVar1;
    }
    if (cVar6 != '\0') {
      if ((*(byte *)(param_1 + 5) & 1) == 0) {
        puVar5 = *(undefined8 **)(param_2 + 0x10);
        bVar7 = true;
      }
      else {
        puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        *(undefined4 *)(puVar5 + 1) = 0xffffffff;
        *(undefined2 *)((longlong)puVar5 + 0xc) = 0x105;
        *(undefined1 *)((longlong)puVar5 + 0xe) = 0;
        puVar5[2] = 0;
        *puVar5 = &PTR_FUN_14aa61a50;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        *(undefined1 *)(puVar5 + 7) = 1;
        *(undefined8 **)(param_2 + 0x10) = puVar5;
        bVar7 = true;
        if (((*(byte *)(param_1 + 5) & 1) != 0) && (DAT_14c872bf0 == '\0')) {
          bVar7 = DAT_14c761464 != 0;
        }
      }
      FUN_140564d22(puVar5,param_1,bVar7);
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        puVar5 = *(undefined8 **)(param_2 + 0x10);
        if ((*(int *)((longlong)puVar5 + 0x34) == 0) || (*(int *)(puVar5 + 6) == 0)) {
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5,1);
          }
          param_2[0x10] = 0;
          param_2[0x11] = 0;
        }
        else {
          FUN_140308182(puVar5,0);
        }
      }
    }
  }
  if (((local_32 & 1) == 0) &&
     ((*(byte *)((longlong)param_1 + 0x2b) & 2) == 0 &&
      (~*(byte *)((longlong)param_1 + 0x2b) & 0x28) != 0)) {
    FUN_147a3b14e(param_1,param_2 + 0xc);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14349f340 FUN_14349f340 body=69 status=ok
// SIG undefined FUN_14349f340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14349f340(void)

{
  _DAT_14cad3720 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014349f382. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3728,1);
  return;
}



// FUNCTION 14349f386 FUN_14349f386 body=794 status=ok
// SIG undefined FUN_14349f386(void)

void FUN_14349f386(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined4 *puVar14;
  
  if ((*(int *)(param_1 + 0x3d0) != -1) && (iVar10 = *(int *)(param_2 + 8), 0 < iVar10)) {
    uVar12 = 0;
    do {
      if (((param_4 >> (uVar12 & 0x1f) & 1) != 0) && ((longlong)*(int *)(param_1 + 0x5f0) != 0)) {
        puVar14 = *(undefined4 **)(param_1 + 0x5e8);
        puVar1 = puVar14 + (longlong)*(int *)(param_1 + 0x5f0) * 6;
        do {
          iVar10 = (int)param_5[1];
          iVar4 = (int)param_5[2];
          iVar6 = (iVar4 + 0x44) / 0x44;
          *(int *)(param_5 + 2) = iVar4 + 1;
          if (iVar10 < iVar6) {
            do {
              lVar8 = FUN_14001cc68(0x3fc0,0x10);
              lVar11 = 0;
              do {
                *(undefined8 *)(lVar8 + 0xa8 + lVar11) = 0;
                puVar2 = (undefined8 *)(lVar8 + 0xb8 + lVar11);
                *puVar2 = 0;
                puVar2[1] = 0;
                *(undefined8 *)(lVar8 + 200 + lVar11) = 0;
                *(undefined8 *)(lVar8 + 0xd0 + lVar11) = 0xffffffff;
                *(undefined8 *)(lVar8 + 0xd8 + lVar11) = 0xff0000ffffffff;
                *(undefined1 *)(lVar8 + 0xe0 + lVar11) = 0;
                *(undefined4 *)(lVar8 + 0xe4 + lVar11) = 0x40c00f07;
                pbVar3 = (byte *)(lVar8 + 0xe8 + lVar11);
                *pbVar3 = *pbVar3 & 0xfc;
                *(undefined1 **)(lVar8 + 0xb0 + lVar11) = &DAT_100000001;
                FUN_14470b9e0(lVar8 + lVar11,1);
                lVar11 = lVar11 + 0xf0;
              } while (lVar11 != 0x3fc0);
              iVar5 = (int)param_5[1];
              *(uint *)(param_5 + 1) = iVar5 + 1U;
              if (*(uint *)((longlong)param_5 + 0xc) < iVar5 + 1U) {
                FUN_14002baf6(param_5,iVar5);
              }
              *(longlong *)(*param_5 + (longlong)iVar5 * 8) = lVar8;
              iVar10 = iVar10 + 1;
            } while (iVar10 != iVar6);
          }
          lVar8 = *(longlong *)(*param_5 + (longlong)(iVar4 / 0x44) * 8);
          lVar13 = (ulonglong)(uint)(iVar4 % 0x44) * 0xf0;
          lVar11 = *(longlong *)(lVar8 + 0xa8 + lVar13);
          if (lVar11 == 0) {
            lVar11 = lVar13 + lVar8;
          }
          *(longlong *)(lVar11 + 0x18) = param_1 + 0x3a0;
          *(longlong *)(lVar8 + 0xb8 + lVar13) = param_1 + 0x3c8;
          *(undefined4 *)(lVar11 + 0x58) = *puVar14;
          *(int *)(lVar11 + 0x5c) = (int)puVar14[1] / 3;
          iVar10 = puVar14[2];
          *(int *)(lVar11 + 0x68) = iVar10;
          *(int *)(lVar11 + 0x6c) = iVar10 + puVar14[3] + -1;
          *(uint *)(lVar8 + 0xe4 + lVar13) =
               *(uint *)(lVar8 + 0xe4 + lVar13) & 0xfff03f3f | (*(byte *)(param_1 + 0x6b) & 1) << 6;
          uVar7 = (**(code **)(**(longlong **)(puVar14 + 4) + 0x2f0))();
          *(undefined8 *)(lVar8 + 0xc0 + lVar13) = uVar7;
          uVar9 = *(uint *)(lVar8 + 0xe4 + lVar13) & 0xffefffff |
                  (*(byte *)(param_1 + 0x652) ^ 1) << 0x14;
          *(uint *)(lVar8 + 0xe4 + lVar13) = uVar9;
          *(undefined1 *)(lVar8 + 0xde + lVar13) = 0;
          *(uint *)(lVar8 + 0xe4 + lVar13) =
               uVar9 & 0xffdfffff | (uint)((*(byte *)(param_1 + 0x6c) & 6) != 0) << 0x15;
          FUN_1436a14f8(param_5,uVar12,lVar13 + lVar8);
          puVar14 = puVar14 + 6;
        } while (puVar14 != puVar1);
        iVar10 = *(int *)(param_2 + 8);
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < iVar10);
  }
  return;
}



// FUNCTION 14349f6ac FUN_14349f6ac body=321 status=ok
// SIG undefined FUN_14349f6ac(void)

ulonglong * FUN_14349f6ac(longlong param_1,ulonglong *param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  param_2[1] = 0;
  param_2[2] = 0;
  cVar3 = FUN_14480c900(0,param_3);
  uVar9 = 0;
  uVar7 = 0;
  if (cVar3 != '\0') {
    uVar7 = *(uint *)(*(longlong *)(param_3 + 8) + 0x58) >> 0x13 & 4;
  }
  bVar4 = FUN_144914152(param_1,param_3);
  if (DAT_14c761ae8 - 1U < 3) {
    uVar9 = (uint)(*(byte *)(param_1 + 0x78) >> 1 & 0x20);
  }
  uVar6 = (*(byte *)(param_1 + 0x6e) & 8) << 4;
  uVar8 = *(uint *)(*(longlong *)(param_3 + 8) + 0x54);
  uVar5 = 2;
  if ((((uVar8 & 4) != 0) && ((short)uVar8 < 0)) &&
     ((*(uint *)(*(longlong *)(param_3 + 8) + 0x50) & 0x3000) == 0x3000)) {
    uVar5 = 2 - ((*(byte *)(param_1 + 0x6c) & 0x16) == 0);
  }
  cVar3 = *(char *)(param_1 + 0x82);
  bVar1 = *(byte *)(param_1 + 0x72);
  uVar2 = *(ulonglong *)(param_1 + 0x600);
  *param_2 = uVar2;
  if (((byte)(*(char *)(param_1 + 0x68) - 1U) < 2) || ((*(byte *)(param_1 + 0x78) & 0x10) != 0)) {
    if ((uVar2 & 0x200000000) == 0) goto LAB_14349f7b7;
  }
  else if ((uVar2 & 0x200000000) == 0 || (*(byte *)(param_1 + 0x75) & 200) == 0) {
LAB_14349f7b7:
    uVar8 = 0;
    goto LAB_14349f7ba;
  }
  uVar8 = ((uint)bVar4 << 3 & 0xffffff80 | uVar6) >> 3;
LAB_14349f7ba:
  *(uint *)(param_2 + 2) =
       (uint)bVar4 << 3 & 0xffffffef | uVar7 | uVar9 | uVar6 | uVar8 |
       uVar5 | (bVar1 & 1) << 0xe | (uint)(cVar3 != '\x01') << 0xd;
  return param_2;
}



// FUNCTION 14349f7fc FUN_14349f7fc body=249 status=ok
// SIG undefined FUN_14349f7fc(void)

void FUN_14349f7fc(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((*(int *)param_1[1] < *(int *)(*param_1 + 8)) &&
     (*(int *)param_1[3] < *(int *)(param_1[2] + 8))) {
    lVar3 = param_1[4];
    iVar2 = *(int *)(lVar3 + 0x5f0);
    *(uint *)(lVar3 + 0x5f0) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0x5f4) < iVar2 + 1U) {
      FUN_141326866(lVar3 + 0x5e8,iVar2);
    }
    puVar1 = (undefined4 *)(*(longlong *)(lVar3 + 0x5e8) + (longlong)iVar2 * 0x18);
    *puVar1 = *(undefined4 *)param_1[3];
    puVar1[1] = *(int *)(param_1[2] + 8) - *(int *)param_1[3];
    puVar1[2] = *(undefined4 *)param_1[1];
    puVar1[3] = *(int *)(*param_1 + 8) - *(int *)param_1[1];
    *(undefined8 *)(puVar1 + 4) = 0;
    plVar4 = *(longlong **)(lVar3 + 0x620);
    if (plVar4 != (longlong *)0x0) {
      iVar2 = *(int *)param_1[5];
      if (((-1 < (longlong)iVar2) && (iVar2 < (int)plVar4[1])) &&
         (lVar5 = *(longlong *)(*plVar4 + (longlong)iVar2 * 8), *(longlong *)(puVar1 + 4) = lVar5,
         lVar5 != 0)) goto LAB_14349f8d4;
    }
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(lVar3 + 0x610);
  }
LAB_14349f8d4:
  *(undefined4 *)param_1[1] = *(undefined4 *)(*param_1 + 8);
  *(undefined4 *)param_1[3] = *(undefined4 *)(param_1[2] + 8);
  return;
}



// FUNCTION 14349f8f5 FUN_14349f8f5 body=130 status=ok
// SIG undefined FUN_14349f8f5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14349f8f5(void)

{
  _DAT_14cad3778 = &PTR_LAB_149e668b0;
  if (DAT_14c948580 == 0) {
    _DAT_14cad3750 = &PTR_LAB_149e668b0;
  }
  else {
    if (DAT_14cad3781 != '\0') {
      FUN_14019e20a(DAT_14c948580,&DAT_14cad3778);
      DAT_14cad3781 = '\0';
      _DAT_14cad3750 = &PTR_LAB_149e668b0;
      if (DAT_14c948580 == 0) {
        DAT_14cad3781 = 0;
        return;
      }
    }
    _DAT_14cad3750 = &PTR_LAB_149e668b0;
    if (DAT_14cad3759 == '\x01') {
      FUN_14019e20a(DAT_14c948580,&DAT_14cad3750);
      DAT_14cad3759 = '\0';
    }
  }
  return;
}



// FUNCTION 14349f977 FUN_14349f977 body=59 status=ok
// SIG undefined FUN_14349f977(void)

void FUN_14349f977(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cad37b0;
  if (DAT_14cad37b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cad37b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014349f9a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14349f9b5 FUN_14349f9b5 body=1779 status=ok
// SIG undefined FUN_14349f9b5(void)

void FUN_14349f9b5(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined8 *puVar18;
  int iVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  bool bVar28;
  float fVar29;
  undefined1 auStack_3d8 [40];
  longlong *local_3b0;
  int local_3a4;
  undefined8 *local_3a0;
  longlong local_398;
  undefined8 uStack_390;
  longlong local_388;
  longlong local_380;
  uint local_378 [188];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  if (param_1 != 0) {
    local_398 = 0;
    uStack_390 = 0;
    FUN_1456cebd0(&local_388);
    uVar23 = (ulonglong)local_378[0];
    if ((-1 < (int)local_378[0]) && ((int)local_378[0] < (int)local_380)) {
      do {
        uVar24 = uStack_390;
        lVar1 = *(longlong *)(local_388 + (uVar23 & 0xffffffff) * 8);
        lVar17 = (longlong)(int)uStack_390;
        uVar9 = (int)uStack_390 + 1;
        uStack_390 = CONCAT44(uStack_390._4_4_,uVar9);
        if (uStack_390._4_4_ < uVar9) {
          FUN_1434a3c34(&local_398,uVar24 & 0xffffffff);
        }
        lVar17 = lVar17 * 0x20;
        *(undefined8 *)(local_398 + lVar17) = 0;
        *(undefined8 *)(local_398 + 8 + lVar17) = *(undefined8 *)(lVar1 + 0x18);
        puVar11 = (undefined8 *)(local_398 + 0x10 + lVar17);
        *puVar11 = 0;
        puVar11[1] = 0;
        lVar1 = *(longlong *)(lVar1 + 0xa8);
        if (lVar1 != 0) {
          puVar11 = (undefined8 *)(local_398 + lVar17);
          *puVar11 = *(undefined8 *)(lVar1 + 0x18);
          lVar1 = *(longlong *)(lVar1 + 0x10);
          if (lVar1 == 0) {
LAB_14349fb11:
            uVar12 = 0;
LAB_14349fb19:
            uVar14 = 0;
          }
          else {
            lVar17 = *(longlong *)(lVar1 + 0x20);
            if (lVar17 == 0) {
              uVar12 = *(undefined8 *)(lVar1 + 0x18);
              goto LAB_14349fb19;
            }
            if (*(longlong *)(lVar17 + 0x20) != 0) goto LAB_14349fb11;
            uVar12 = *(undefined8 *)(lVar17 + 0x18);
            uVar14 = *(undefined8 *)(lVar1 + 0x18);
          }
          puVar11[2] = uVar12;
          puVar11[3] = uVar14;
        }
        uVar23 = (longlong)(int)local_378[0];
        do {
          uVar24 = uVar23;
          uVar23 = uVar24 + 1;
          local_378[0] = (uint)uVar23;
          if ((longlong)(int)local_380 <= (longlong)uVar23) break;
        } while (*(longlong *)(local_388 + uVar23 * 8) == 0);
      } while ((-2 < (longlong)uVar24) && ((int)local_378[0] < (int)local_380));
    }
    if (local_388 != 0) {
      FUN_1400020a8();
    }
    lVar1 = local_398;
    iVar13 = (int)uStack_390;
    lVar17 = (longlong)(int)uStack_390;
    if (1 < lVar17) {
      memset(local_378,0,0x2f0);
      local_388 = lVar1;
      local_380 = lVar17 * 0x20 + lVar1 + -0x20;
      fVar29 = logf((float)iVar13);
      local_378[0] = (uint)(longlong)(fVar29 + fVar29);
      plVar16 = &local_388;
      do {
        puVar18 = (undefined8 *)*plVar16;
        puVar21 = (undefined8 *)plVar16[1];
        iVar13 = (int)plVar16[2];
        iVar10 = (int)((ulonglong)((longlong)puVar21 - (longlong)puVar18) >> 5);
        uVar9 = iVar10 + 1;
        puVar11 = puVar21;
        puVar27 = puVar18;
        local_3b0 = plVar16;
        if (iVar13 != 0) {
LAB_14349fbae:
          if (8 < (int)uVar9) {
            uVar23 = (ulonglong)(uVar9 >> 1);
            uVar12 = puVar18[uVar23 * 4];
            uVar14 = (puVar18 + uVar23 * 4)[1];
            local_78 = puVar18[uVar23 * 4 + 2];
            uStack_70 = (puVar18 + uVar23 * 4 + 2)[1];
            uVar2 = *puVar18;
            uVar3 = puVar18[1];
            uVar4 = puVar18[3];
            puVar18[uVar23 * 4 + 2] = puVar18[2];
            (puVar18 + uVar23 * 4 + 2)[1] = uVar4;
            puVar18[uVar23 * 4] = uVar2;
            (puVar18 + uVar23 * 4)[1] = uVar3;
            local_88._0_4_ = (undefined4)uVar12;
            local_88._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
            uStack_80._0_4_ = (undefined4)uVar14;
            uStack_80._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
            puVar18[2] = local_78;
            puVar18[3] = uStack_70;
            *(undefined4 *)puVar18 = (undefined4)local_88;
            *(undefined4 *)((longlong)puVar18 + 4) = local_88._4_4_;
            *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_80;
            *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_80._4_4_;
            puVar26 = puVar11 + 4;
            puVar22 = puVar18;
            local_3a4 = iVar13;
            local_3a0 = puVar27;
            local_88 = uVar12;
            uStack_80 = uVar14;
            do {
              puVar7 = puVar22 + 4;
              puVar25 = puVar22 + 4;
              do {
                puVar22 = puVar25;
                puVar27 = puVar7;
                if (puVar11 < puVar22) break;
                cVar8 = FUN_1434a3b2c(puVar18,puVar22);
                puVar7 = puVar27 + 4;
                puVar25 = puVar22 + 4;
              } while (cVar8 == '\0');
              puVar7 = puVar26 + -8;
              do {
                puVar25 = puVar26;
                puVar15 = puVar7;
                puVar26 = puVar25 + -4;
                if (puVar26 <= puVar18) break;
                cVar8 = FUN_1434a3b2c(puVar26,puVar18);
                puVar7 = puVar15 + -4;
              } while (cVar8 == '\0');
              if (puVar26 < puVar22) goto LAB_14349fcb7;
              uVar12 = *puVar22;
              uVar14 = puVar22[1];
              local_78 = puVar22[2];
              uStack_70 = puVar22[3];
              uVar2 = *puVar26;
              uVar3 = puVar25[-3];
              uVar4 = puVar25[-1];
              puVar22[2] = puVar25[-2];
              puVar22[3] = uVar4;
              *puVar22 = uVar2;
              puVar22[1] = uVar3;
              local_88._0_4_ = (undefined4)uVar12;
              local_88._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
              uStack_80._0_4_ = (undefined4)uVar14;
              uStack_80._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
              puVar25[-2] = local_78;
              puVar25[-1] = uStack_70;
              *(undefined4 *)puVar26 = (undefined4)local_88;
              *(undefined4 *)((longlong)puVar25 + -0x1c) = local_88._4_4_;
              *(undefined4 *)(puVar25 + -3) = (undefined4)uStack_80;
              *(undefined4 *)((longlong)puVar25 + -0x14) = uStack_80._4_4_;
              local_88 = uVar12;
              uStack_80 = uVar14;
            } while( true );
          }
          for (; plVar16 = local_3b0, puVar27 = puVar18, puVar21 = puVar18, puVar18 < puVar11;
              puVar11 = puVar11 + -4) {
            while (puVar26 = puVar27, puVar21 = puVar21 + 4, puVar21 <= puVar11) {
              cVar8 = FUN_1434a3b2c(puVar26,puVar21);
              puVar27 = puVar21;
              if (cVar8 == '\0') {
                puVar27 = puVar26;
              }
            }
            local_88 = *puVar26;
            uStack_80 = puVar26[1];
            local_78 = puVar26[2];
            uStack_70 = puVar26[3];
            uVar3 = local_88;
            uVar4 = uStack_80;
            uVar12 = *puVar11;
            uVar14 = puVar11[1];
            uVar2 = puVar11[3];
            puVar26[2] = puVar11[2];
            puVar26[3] = uVar2;
            *puVar26 = uVar12;
            puVar26[1] = uVar14;
            local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
            uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
            puVar11[2] = local_78;
            puVar11[3] = uStack_70;
            *(undefined4 *)puVar11 = (undefined4)local_88;
            *(undefined4 *)((longlong)puVar11 + 4) = local_88._4_4_;
            *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_80;
            *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_80._4_4_;
            local_88 = uVar3;
            uStack_80 = uVar4;
          }
          goto LAB_1434a007f;
        }
LAB_14349fda2:
        plVar16 = local_3b0;
        if (uVar9 != 0) {
          iVar13 = (iVar10 - (iVar10 + -1 >> 0x1f)) + -1 >> 1;
          iVar10 = iVar13;
joined_r0x00014349fdc3:
          do {
            iVar20 = iVar13 * 2 + 1;
            if (iVar20 < (int)uVar9) {
              iVar19 = iVar13 * 2 + 2;
              if ((iVar19 < (int)uVar9) &&
                 (cVar8 = FUN_1434a3b2c(puVar18 + (longlong)iVar19 * 4,
                                        puVar18 + (longlong)iVar20 * 4), cVar8 == '\0')) {
                iVar20 = iVar19;
              }
              puVar11 = puVar18 + (longlong)iVar13 * 4;
              puVar21 = puVar18 + (longlong)iVar20 * 4;
              cVar8 = FUN_1434a3b2c(puVar11,puVar21);
              if (cVar8 != '\0') {
                local_88 = *puVar11;
                uStack_80 = puVar11[1];
                local_78 = puVar11[2];
                uStack_70 = puVar11[3];
                uVar3 = local_88;
                uVar4 = uStack_80;
                uVar12 = *puVar21;
                uVar14 = puVar21[1];
                uVar2 = puVar21[3];
                puVar11[2] = puVar21[2];
                puVar11[3] = uVar2;
                *puVar11 = uVar12;
                puVar11[1] = uVar14;
                local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
                uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
                puVar21[2] = local_78;
                puVar21[3] = uStack_70;
                *(undefined4 *)puVar21 = (undefined4)local_88;
                *(undefined4 *)((longlong)puVar21 + 4) = local_88._4_4_;
                *(undefined4 *)(puVar21 + 1) = (undefined4)uStack_80;
                *(undefined4 *)((longlong)puVar21 + 0xc) = uStack_80._4_4_;
                iVar13 = iVar20;
                local_88 = uVar3;
                uStack_80 = uVar4;
                goto joined_r0x00014349fdc3;
              }
            }
            bVar28 = iVar10 != 0;
            iVar13 = iVar10 + -1;
            iVar10 = iVar13;
          } while (bVar28);
          plVar16 = local_3b0;
          if (1 < (int)uVar9) {
            uVar23 = (ulonglong)uVar9 - 1;
            local_88 = *puVar18;
            uStack_80 = puVar18[1];
            local_78 = puVar18[2];
            uStack_70 = puVar18[3];
            uVar5 = local_78;
            uVar6 = uStack_70;
            uVar3 = local_88;
            uVar4 = uStack_80;
            uVar12 = puVar18[uVar23 * 4];
            uVar14 = (puVar18 + uVar23 * 4)[1];
            uVar2 = (puVar18 + uVar23 * 4 + 2)[1];
            puVar18[2] = puVar18[uVar23 * 4 + 2];
            puVar18[3] = uVar2;
            *puVar18 = uVar12;
            puVar18[1] = uVar14;
            local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
            uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
            local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
            uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
            puVar11 = puVar18 + uVar23 * 4 + 2;
            *(undefined4 *)puVar11 = (undefined4)local_78;
            *(undefined4 *)((longlong)puVar11 + 4) = local_78._4_4_;
            *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_70;
            *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_70._4_4_;
            puVar11 = puVar18 + uVar23 * 4;
            *(undefined4 *)puVar11 = (undefined4)local_88;
            *(undefined4 *)((longlong)puVar11 + 4) = local_88._4_4_;
            *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_80;
            *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_80._4_4_;
            local_88 = uVar3;
            uStack_80 = uVar4;
            local_78 = uVar5;
            uStack_70 = uVar6;
            if (uVar9 != 2) {
              do {
                iVar13 = 0;
                iVar20 = 1;
                iVar10 = 0;
                do {
                  iVar13 = iVar13 + 2;
                  iVar19 = iVar20;
                  if (((longlong)iVar13 < (longlong)uVar23) &&
                     (cVar8 = FUN_1434a3b2c(puVar18 + (longlong)iVar13 * 4,
                                            puVar18 + (longlong)iVar20 * 4), cVar8 == '\0')) {
                    iVar19 = iVar13;
                  }
                  puVar11 = puVar18 + (longlong)iVar10 * 4;
                  puVar21 = puVar18 + (longlong)iVar19 * 4;
                  cVar8 = FUN_1434a3b2c(puVar11,puVar21);
                  if (cVar8 == '\0') break;
                  uVar12 = *puVar11;
                  uVar14 = puVar11[1];
                  uVar2 = puVar11[2];
                  uVar3 = puVar11[3];
                  uVar4 = *puVar21;
                  uVar5 = puVar21[1];
                  uVar6 = puVar21[3];
                  puVar11[2] = puVar21[2];
                  puVar11[3] = uVar6;
                  *puVar11 = uVar4;
                  puVar11[1] = uVar5;
                  local_88._0_4_ = (undefined4)uVar12;
                  local_88._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
                  uStack_80._0_4_ = (undefined4)uVar14;
                  uStack_80._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
                  local_78._0_4_ = (undefined4)uVar2;
                  local_78._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
                  uStack_70._0_4_ = (undefined4)uVar3;
                  uStack_70._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
                  *(undefined4 *)(puVar21 + 2) = (undefined4)local_78;
                  *(undefined4 *)((longlong)puVar21 + 0x14) = local_78._4_4_;
                  *(undefined4 *)(puVar21 + 3) = (undefined4)uStack_70;
                  *(undefined4 *)((longlong)puVar21 + 0x1c) = uStack_70._4_4_;
                  *(undefined4 *)puVar21 = (undefined4)local_88;
                  *(undefined4 *)((longlong)puVar21 + 4) = local_88._4_4_;
                  *(undefined4 *)(puVar21 + 1) = (undefined4)uStack_80;
                  *(undefined4 *)((longlong)puVar21 + 0xc) = uStack_80._4_4_;
                  iVar13 = iVar19 * 2;
                  iVar20 = iVar19 * 2 + 1;
                  local_88 = uVar12;
                  uStack_80 = uVar14;
                  local_78 = uVar2;
                  uStack_70 = uVar3;
                  iVar10 = iVar19;
                } while ((longlong)iVar20 < (longlong)uVar23);
                uVar24 = uVar23 - 1;
                local_88 = *puVar18;
                uStack_80 = puVar18[1];
                local_78 = puVar18[2];
                uStack_70 = puVar18[3];
                uVar5 = local_78;
                uVar6 = uStack_70;
                uVar3 = local_88;
                uVar4 = uStack_80;
                uVar12 = puVar18[uVar24 * 4];
                uVar14 = (puVar18 + uVar24 * 4)[1];
                uVar2 = (puVar18 + uVar24 * 4 + 2)[1];
                puVar18[2] = puVar18[uVar24 * 4 + 2];
                puVar18[3] = uVar2;
                *puVar18 = uVar12;
                puVar18[1] = uVar14;
                local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
                uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
                local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
                uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
                puVar11 = puVar18 + uVar24 * 4 + 2;
                *(undefined4 *)puVar11 = (undefined4)local_78;
                *(undefined4 *)((longlong)puVar11 + 4) = local_78._4_4_;
                *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_70;
                *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_70._4_4_;
                puVar11 = puVar18 + uVar24 * 4;
                *(undefined4 *)puVar11 = (undefined4)local_88;
                *(undefined4 *)((longlong)puVar11 + 4) = local_88._4_4_;
                *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_80;
                *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_80._4_4_;
                bVar28 = 2 < uVar23;
                plVar16 = local_3b0;
                uVar23 = uVar24;
                local_88 = uVar3;
                uStack_80 = uVar4;
                local_78 = uVar5;
                uStack_70 = uVar6;
              } while (bVar28);
            }
          }
        }
LAB_1434a007f:
        plVar16 = plVar16 + -3;
      } while (&local_388 <= plVar16);
    }
    if (local_398 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14349fcb7:
  local_88 = *puVar18;
  uStack_80 = puVar18[1];
  local_78 = puVar18[2];
  uStack_70 = puVar18[3];
  uVar3 = local_88;
  uVar4 = uStack_80;
  uVar12 = *puVar26;
  uVar14 = puVar25[-3];
  uVar2 = puVar25[-1];
  puVar18[2] = puVar25[-2];
  puVar18[3] = uVar2;
  *puVar18 = uVar12;
  puVar18[1] = uVar14;
  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  puVar25[-2] = local_78;
  puVar25[-1] = uStack_70;
  *(undefined4 *)puVar26 = (undefined4)local_88;
  *(undefined4 *)((longlong)puVar25 + -0x1c) = local_88._4_4_;
  *(undefined4 *)(puVar25 + -3) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)puVar25 + -0x14) = uStack_80._4_4_;
  iVar13 = local_3a4 + -1;
  puVar25 = puVar25 + -8;
  local_88 = uVar3;
  uStack_80 = uVar4;
  if ((longlong)puVar15 - (longlong)local_3a0 < (longlong)puVar21 - (longlong)puVar27) {
    plVar16 = local_3b0;
    if (puVar22 < puVar11) {
      *local_3b0 = (longlong)puVar22;
      local_3b0[1] = (longlong)puVar11;
      *(int *)(local_3b0 + 2) = iVar13;
      plVar16 = local_3b0 + 3;
    }
    puVar21 = puVar15;
    puVar27 = puVar18;
    if (puVar26 <= puVar18 + 4) goto LAB_1434a007f;
  }
  else {
    if (puVar18 + 4 < puVar26) {
      *local_3b0 = (longlong)puVar18;
      local_3b0[1] = (longlong)puVar25;
      *(int *)(local_3b0 + 2) = iVar13;
      local_3b0 = local_3b0 + 3;
    }
    plVar16 = local_3b0;
    puVar18 = puVar22;
    puVar21 = puVar11;
    puVar25 = puVar11;
    if (puVar11 <= puVar22) goto LAB_1434a007f;
  }
  local_3b0 = plVar16;
  iVar10 = (int)((ulonglong)((longlong)puVar21 - (longlong)puVar27) >> 5);
  uVar9 = iVar10 + 1;
  puVar11 = puVar25;
  if (iVar13 == 0) goto LAB_14349fda2;
  goto LAB_14349fbae;
}



// FUNCTION 1434a00a9 FUN_1434a00a9 body=69 status=ok
// SIG undefined FUN_1434a00a9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a00a9(void)

{
  _DAT_14cad37c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a00eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad37c8,1);
  return;
}



// FUNCTION 1434a00ee FUN_1434a00ee body=55 status=ok
// SIG undefined FUN_1434a00ee(void)

void FUN_1434a00ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad37d8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad37d8 = FUN_14171c317(FUN_1463bfff7,uVar1,L"EVolumetricCloudTracingMaxDistanceMode");
  }
  return;
}



// FUNCTION 1434a0125 FUN_1434a0125 body=63 status=ok
// SIG undefined FUN_1434a0125(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a0125(void)

{
  _DAT_14cad38b8 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14cad38c1 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14cad38b8);
    DAT_14cad38c1 = '\0';
  }
  return;
}



// FUNCTION 1434a0164 FUN_1434a0164 body=1280 status=ok
// SIG undefined FUN_1434a0164(void)

void FUN_1434a0164(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) & 0xfd;
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xf0;
  lVar14 = *(longlong *)(param_1 + 0x318);
  if (lVar14 == 0) goto LAB_1434a02ca;
  lVar8 = *(longlong *)(param_1 + 0xb0);
  if (lVar8 == 0) {
    lVar8 = FUN_1448abda6(param_1);
    lVar14 = *(longlong *)(param_1 + 0x318);
  }
  (**(code **)(**(longlong **)(lVar8 + 0x218) + 0x2e8))(*(longlong **)(lVar8 + 0x218),lVar14);
  lVar14 = *(longlong *)(param_1 + 0x318);
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar8 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_1434a01f2;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_1434a01f7;
      goto LAB_1434a0228;
    }
LAB_1434a01f7:
    if (lVar14 != 0) {
      FUN_1400020a8(lVar14);
    }
  }
  else {
LAB_1434a01f2:
    if (iVar5 == 0x10) goto LAB_1434a01f7;
LAB_1434a0228:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar8 + 0xc60), iVar5 == 2))
      goto LAB_1434a01f7;
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if (DVar6 == DVar7) goto LAB_1434a01f7;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar10 = (uint *)*puVar2;
      if (puVar10 != (uint *)0x0) goto LAB_1434a038b;
      while( true ) {
        uVar12 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar12 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar12 | 1;
          __tlregdtor(&LAB_1434a3d89);
        }
        lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar9 = *(undefined4 **)(lVar8 + 0x310);
        *(undefined8 *)(lVar8 + 0x310) = 0;
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar9 = 0xffffffff;
        *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
        puVar9[0x12] = 0;
        *puVar2 = puVar9;
        FUN_140217a48(puVar2);
        puVar10 = (uint *)*puVar2;
LAB_1434a038b:
        puVar17 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x16);
        uVar12 = puVar10[0x12];
        if (puVar15 <= puVar10 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
          LOCK();
          uVar3 = *puVar10;
          *puVar10 = *puVar10 + uVar12 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar12) != 0xffffffff) break;
          puVar10 = (uint *)*puVar2;
          *puVar10 = 0xffffffff;
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          puVar17 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x16);
          uVar12 = 0;
          if (puVar15 <= puVar10 + 0x4000) {
            uVar12 = 1;
            goto LAB_1434a040b;
          }
        }
      }
      uVar12 = uVar12 + 1;
LAB_1434a040b:
      *(uint **)(puVar10 + 0x10) = puVar15;
      puVar10[0x12] = uVar12;
      iVar5 = 0;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14a899f68;
      puVar17[0x15] = lVar14;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar12 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
          uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
          iVar5 = 0;
        }
        else {
          uVar16 = 2;
        }
      }
      else {
        iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar16 = 5;
      }
      if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
      }
      puVar17[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar17[9] = puVar17;
      puVar17[10] = puVar17;
      lVar14 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar14 == 0) {
        uVar4 = 1;
        if ((char)uVar16 != '\x06') {
          uVar4 = uVar16;
        }
        uVar16 = uVar4;
        uVar11 = 0;
      }
      else {
        if ((char)uVar16 == '\x06') {
          uVar16 = *(ulonglong *)(lVar14 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar14 + 0x30);
      }
      puVar17[0xf] = uVar11;
      puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar5;
      if (puVar17 == (undefined8 *)0x0) {
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(puVar17);
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
    else {
      local_78 = local_68;
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14a899ef0;
      local_68[0] = &LAB_1434a5f5e;
      local_40 = lVar14;
      FUN_14005a792(&DAT_14ca9a440,L"FDestroyVolumetricCloudSceneProxyCommand",&DAT_14cad3b94);
      if (local_68[0] != (undefined1 *)0x0) {
        pppuVar13 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar13 = &local_48;
        }
        (*(code *)(*pppuVar13)[2])();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x318) = 0;
LAB_1434a02ca:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434a0666 FUN_1434a0666 body=3314 status=ok
// SIG undefined FUN_1434a0666(void)

void FUN_1434a0666(longlong param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  wchar_t **ppwVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  int local_190;
  longlong local_180;
  longlong *local_178;
  longlong local_170;
  ulonglong local_168;
  uint *local_160;
  ulonglong local_158;
  uint *local_150;
  longlong local_148;
  uint local_13c;
  ulonglong local_138;
  longlong *local_130;
  longlong *local_128;
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong local_f8 [2];
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b0;
  longlong *local_a8;
  wchar_t **local_a0;
  ulonglong *local_98;
  longlong local_90;
  undefined4 local_88;
  wchar_t *local_80;
  wchar_t ***local_78;
  longlong *local_70 [2];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_c8 = 0;
  uStack_c0 = 0;
  lVar5 = FUN_147a34a5c();
  local_170 = param_1;
  if (lVar5 == 0) {
    FUN_145d343f2(param_1);
    *(undefined1 *)(param_1 + 0x98) = 1;
    lVar5 = (longlong)*(int *)(param_1 + 0xa8);
    if (lVar5 != 0) {
      plVar13 = *(longlong **)(param_1 + 0xa0);
      local_130 = plVar13 + lVar5;
      lVar10 = 0;
      do {
        if ((*(longlong *)((longlong)plVar13 + lVar10) != 0) &&
           (*(char *)(*(longlong *)((longlong)plVar13 + lVar10) + 0x98) == '\x02')) {
          *(undefined1 *)(param_1 + 0x98) = 2;
          break;
        }
        lVar10 = lVar10 + 8;
      } while (lVar5 * 8 != lVar10);
      local_178 = (longlong *)(param_1 + 0x30);
      local_148 = param_1 + 0x68;
      do {
        lVar5 = *plVar13;
        if (lVar5 != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad4a58);
          local_180 = lVar5;
          local_128 = plVar13;
          if (*(char *)(param_1 + 0x98) == '\x01') {
            uVar17 = *(uint *)(lVar5 + 0x58);
            if (uVar17 == 0) {
              uVar11 = 1;
              iVar14 = 0;
              uVar20 = 0;
              uVar4 = 0;
            }
            else {
              puVar6 = *(uint **)(lVar5 + 0x50);
              if (*(uint **)(lVar5 + 0x50) == (uint *)0x0) {
                puVar6 = (uint *)(lVar5 + 0x40);
              }
              uVar4 = *puVar6;
              if (uVar4 == 0) {
                iVar14 = uVar17 + 0x1e;
                if (-1 < (int)(uVar17 - 1)) {
                  iVar14 = uVar17 - 1;
                }
                uVar20 = 0;
                uVar11 = (ulonglong)(uint)(iVar14 >> 5);
                if (iVar14 >> 5 < 1) {
                  uVar11 = uVar20;
                }
                iVar14 = 0;
                do {
                  if (uVar11 == uVar20) goto LAB_1434a10d2;
                  iVar14 = iVar14 + 0x20;
                  uVar4 = puVar6[uVar20 + 1];
                  uVar20 = uVar20 + 1;
                } while (uVar4 == 0);
              }
              else {
                iVar14 = 0;
                uVar20 = 0;
              }
              uVar11 = (ulonglong)(-uVar4 & uVar4);
              uVar16 = uVar11 * 2 + 1;
              lVar10 = 0x3f;
              if (uVar16 != 0) {
                for (; uVar16 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                }
              }
              uVar4 = (iVar14 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
              if ((int)uVar17 <= (int)uVar4) {
                uVar4 = uVar17;
              }
            }
            if (uVar4 != uVar17) {
              uVar18 = 0xffffffff;
              local_158 = (ulonglong)uVar17;
              local_150 = (uint *)(lVar5 + 0x40);
              do {
                lVar10 = *(longlong *)(lVar5 + 0x30);
                ppwVar7 = (wchar_t **)FUN_14001cc68(0x88,0x10);
                ppwVar7[5] = (wchar_t *)0x0;
                *(undefined4 *)(ppwVar7 + 6) = 0;
                ppwVar7[1] = (wchar_t *)0x0;
                ppwVar7[2] = (wchar_t *)0x0;
                *(undefined8 *)((longlong)ppwVar7 + 0x34) = 0xffffffff00000080;
                *(undefined4 *)((longlong)ppwVar7 + 0x3c) = 0;
                ppwVar7[9] = (wchar_t *)0x0;
                *(undefined4 *)(ppwVar7 + 10) = 0;
                ppwVar7[0xb] = (wchar_t *)0x0;
                ppwVar7[0xc] = (wchar_t *)0x0;
                *(undefined4 *)(ppwVar7 + 0xd) = 0x7f7fffff;
                *(undefined2 *)((longlong)ppwVar7 + 0x6c) = 0x404;
                *ppwVar7 = (wchar_t *)&PTR_FUN_14a89a2c0;
                *(undefined1 *)(ppwVar7 + 0xe) = 0;
                ppwVar7[0xf] = (wchar_t *)0x0;
                ppwVar7[0x10] = (wchar_t *)0x0;
                lVar15 = *(longlong *)(lVar10 + 8 + (longlong)(int)uVar4 * 0x18);
                FUN_147a4367e(ppwVar7,lVar15 + 0x78);
                param_1 = local_170;
                lVar5 = local_180;
                cVar2 = *(char *)(lVar15 + 0x70);
                if (cVar2 != '\x02') {
                  *(char *)(ppwVar7 + 0xe) = cVar2;
                }
                local_90 = *(longlong *)(lVar10 + (longlong)(int)uVar4 * 0x18);
                local_a0 = ppwVar7;
                if (*(int *)(local_170 + 0x38) != *(int *)(local_170 + 100)) {
                  uVar17 = (uint)((ulonglong)local_90 >> 0x10);
                  uVar4 = (uint)local_90 & 0xffff;
                  lVar10 = *(longlong *)(local_170 + 0x70);
                  if (*(longlong *)(local_170 + 0x70) == 0) {
                    lVar10 = local_148;
                  }
                  iVar12 = *(int *)(lVar10 + (ulonglong)
                                             (*(int *)(local_170 + 0x78) - 1U &
                                             (int)((ulonglong)local_90 >> 0x20) +
                                             ((uint)local_90 << 0x10 | uVar4) +
                                             (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar4 >> 4)) * 4)
                  ;
                  if (iVar12 != -1) {
                    do {
                      plVar13 = (longlong *)(*local_178 + (longlong)iVar12 * 0x18);
                      if (*plVar13 == local_90) {
                        if ((plVar13 != (longlong *)0x0) &&
                           (plVar13 = plVar13 + 1, plVar13 != (longlong *)0x0)) {
                          puVar3 = (undefined8 *)*plVar13;
                          if (puVar3 != (undefined8 *)0x0) {
                            (**(code **)*puVar3)(puVar3,1);
                          }
                          *plVar13 = (longlong)ppwVar7;
                          goto LAB_1434a0cf4;
                        }
                        break;
                      }
                      iVar12 = (int)plVar13[2];
                    } while (iVar12 != -1);
                  }
                }
                local_80 = (wchar_t *)&local_90;
                local_78 = &local_a0;
                FUN_147a3a122(local_178,&local_b0,&local_80,0);
                lVar5 = local_180;
LAB_1434a0cf4:
                uVar18 = uVar18 & ~(uint)uVar11;
                puVar6 = *(uint **)(lVar5 + 0x50);
                if (*(uint **)(lVar5 + 0x50) == (uint *)0x0) {
                  puVar6 = local_150;
                }
                uVar17 = *(uint *)(lVar5 + 0x58);
                iVar12 = (int)uVar20;
                lVar10 = (longlong)iVar12;
                uVar4 = puVar6[lVar10] & uVar18;
                if (uVar4 == 0) {
                  iVar8 = uVar17 + 0x1e;
                  if (-1 < (int)(uVar17 - 1)) {
                    iVar8 = uVar17 - 1;
                  }
                  iVar8 = iVar8 >> 5;
                  iVar14 = iVar14 + 0x20;
                  iVar9 = iVar8;
                  if (iVar8 < iVar12) {
                    iVar9 = iVar12;
                  }
                  if (iVar12 < iVar8) {
                    lVar15 = 0;
                    do {
                      uVar4 = puVar6[lVar10 + lVar15 + 1];
                      if (uVar4 != 0) {
                        uVar20 = (ulonglong)(iVar12 + (int)lVar15 + 1);
                        uVar18 = 0xffffffff;
                        goto LAB_1434a0d70;
                      }
                      iVar14 = iVar14 + 0x20;
                      lVar15 = lVar15 + 1;
                    } while (iVar9 - lVar10 != lVar15);
                    uVar18 = 0xffffffff;
                    iVar12 = iVar9;
                  }
                  uVar20 = (ulonglong)(iVar12 + 1);
                  lVar5 = local_180;
                  param_1 = local_170;
                  uVar4 = uVar17;
                }
                else {
LAB_1434a0d70:
                  uVar11 = (ulonglong)(-uVar4 & uVar4);
                  uVar16 = uVar11 * 2 + 1;
                  lVar10 = 0x3f;
                  if (uVar16 != 0) {
                    for (; uVar16 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                    }
                  }
                  uVar4 = (iVar14 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
                  if ((int)uVar17 <= (int)uVar4) {
                    uVar4 = uVar17;
                  }
                }
              } while (uVar4 != (uint)local_158);
            }
          }
          else {
            local_160 = (uint *)(lVar5 + 0x40);
            uVar17 = *(uint *)(lVar5 + 0x58);
            uVar11 = (ulonglong)uVar17;
            if (*(char *)(lVar5 + 0x98) == '\x01') {
              if (uVar17 == 0) {
                uVar16 = 1;
                uVar20 = 0;
                iVar14 = 0;
                uVar4 = 0;
              }
              else {
                puVar6 = *(uint **)(lVar5 + 0x50);
                if (*(uint **)(lVar5 + 0x50) == (uint *)0x0) {
                  puVar6 = local_160;
                }
                uVar4 = *puVar6;
                if (uVar4 == 0) {
                  iVar14 = uVar17 + 0x1e;
                  if (-1 < (int)(uVar17 - 1)) {
                    iVar14 = uVar17 - 1;
                  }
                  uVar20 = 0;
                  uVar16 = (ulonglong)(uint)(iVar14 >> 5);
                  if (iVar14 >> 5 < 1) {
                    uVar16 = uVar20;
                  }
                  iVar14 = 0;
                  do {
                    if (uVar16 == uVar20) goto LAB_1434a10d2;
                    iVar14 = iVar14 + 0x20;
                    uVar4 = puVar6[uVar20 + 1];
                    uVar20 = uVar20 + 1;
                  } while (uVar4 == 0);
                }
                else {
                  uVar20 = 0;
                  iVar14 = 0;
                }
                uVar16 = (ulonglong)(-uVar4 & uVar4);
                uVar21 = uVar16 * 2 + 1;
                lVar10 = 0x3f;
                if (uVar21 != 0) {
                  for (; uVar21 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                  }
                }
                uVar4 = (iVar14 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
                if ((int)uVar17 <= (int)uVar4) {
                  uVar4 = uVar17;
                }
              }
              if (uVar4 != uVar17) {
                uVar17 = 0xffffffff;
                local_168 = uVar11;
                do {
                  local_150 = (uint *)CONCAT44(local_150._4_4_,iVar14);
                  lVar10 = *(longlong *)(lVar5 + 0x30);
                  local_158 = uVar20;
                  local_13c = uVar17;
                  local_138 = uVar16;
                  ppwVar7 = (wchar_t **)FUN_14001cc68(0x80,0x10);
                  ppwVar7[5] = (wchar_t *)0x0;
                  ppwVar7[6] = (wchar_t *)0x0;
                  ppwVar7[7] = (wchar_t *)0x0;
                  ppwVar7[8] = (wchar_t *)0x0;
                  ppwVar7[1] = (wchar_t *)0x0;
                  ppwVar7[2] = (wchar_t *)0x0;
                  ppwVar7[3] = (wchar_t *)0x0;
                  ppwVar7[4] = (wchar_t *)0x0;
                  ppwVar7[9] = (wchar_t *)0x0;
                  ppwVar7[10] = (wchar_t *)0x0;
                  ppwVar7[0xd] = (wchar_t *)0x0;
                  *(undefined4 *)((longlong)ppwVar7 + 0x34) = 0x80;
                  *(undefined4 *)(ppwVar7 + 7) = 0xffffffff;
                  ppwVar7[0xb] = (wchar_t *)0x0;
                  ppwVar7[0xc] = (wchar_t *)0x0;
                  *(undefined4 *)(ppwVar7 + 0xd) = 0x7f7fffff;
                  *(undefined2 *)((longlong)ppwVar7 + 0x6c) = 0x404;
                  *ppwVar7 = L"雠䜉\x01";
                  ppwVar7[0xe] = (wchar_t *)0x0;
                  ppwVar7[0xf] = (wchar_t *)0x0;
                  lVar5 = *(longlong *)(lVar10 + 8 + (longlong)(int)uVar4 * 0x18);
                  iVar14 = *(int *)(lVar5 + 0x80);
                  if ((longlong)iVar14 != 0) {
                    lVar15 = *(longlong *)(lVar5 + 0x78);
                    lVar19 = 0;
                    do {
                      LOCK();
                      UNLOCK();
                      local_190 = DAT_14c761474 + 1;
                      local_198 = 0;
                      DAT_14c761474 = DAT_14c761474 + 1;
                      FUN_1406507bc(ppwVar7,&local_80,*(undefined4 *)(lVar15 + lVar19),
                                    *(undefined4 *)(lVar15 + 4 + lVar19));
                      FUN_14045d156(ppwVar7,(ulonglong)local_80 & 0xffffffff,
                                    *(undefined1 *)(lVar5 + 0x70),1);
                      lVar19 = lVar19 + 8;
                    } while ((longlong)iVar14 * 8 != lVar19);
                  }
                  FUN_14045d2f8(ppwVar7,0);
                  uVar11 = local_138;
                  param_1 = local_170;
                  lVar5 = local_180;
                  local_90 = *(longlong *)(lVar10 + (longlong)(int)uVar4 * 0x18);
                  local_a0 = ppwVar7;
                  if (*(int *)(local_170 + 0x38) != *(int *)(local_170 + 100)) {
                    uVar17 = (uint)((ulonglong)local_90 >> 0x10);
                    uVar4 = (uint)local_90 & 0xffff;
                    lVar10 = *(longlong *)(local_170 + 0x70);
                    if (*(longlong *)(local_170 + 0x70) == 0) {
                      lVar10 = local_148;
                    }
                    iVar14 = *(int *)(lVar10 + (ulonglong)
                                               (*(int *)(local_170 + 0x78) - 1U &
                                               (int)((ulonglong)local_90 >> 0x20) +
                                               ((uint)local_90 << 0x10 | uVar4) +
                                               (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar4 >> 4)) *
                                               4);
                    if (iVar14 != -1) {
                      do {
                        plVar13 = (longlong *)(*local_178 + (longlong)iVar14 * 0x18);
                        if (*plVar13 == local_90) {
                          if ((plVar13 != (longlong *)0x0) &&
                             (plVar13 = plVar13 + 1, plVar13 != (longlong *)0x0)) {
                            puVar3 = (undefined8 *)*plVar13;
                            if (puVar3 != (undefined8 *)0x0) {
                              (**(code **)*puVar3)(puVar3,1);
                            }
                            *plVar13 = (longlong)ppwVar7;
                            goto LAB_1434a0fe2;
                          }
                          break;
                        }
                        iVar14 = (int)plVar13[2];
                      } while (iVar14 != -1);
                    }
                  }
                  local_80 = (wchar_t *)&local_90;
                  local_78 = &local_a0;
                  FUN_147a3a122(local_178,&local_b0,&local_80,0);
                  lVar5 = local_180;
LAB_1434a0fe2:
                  uVar17 = local_13c & ~(uint)uVar11;
                  puVar6 = *(uint **)(lVar5 + 0x50);
                  if (*(uint **)(lVar5 + 0x50) == (uint *)0x0) {
                    puVar6 = local_160;
                  }
                  uVar18 = *(uint *)(lVar5 + 0x58);
                  iVar12 = (int)local_158;
                  lVar10 = (longlong)iVar12;
                  uVar4 = puVar6[lVar10] & uVar17;
                  uVar20 = local_158;
                  iVar14 = (int)local_150;
                  if (uVar4 == 0) {
                    iVar8 = uVar18 + 0x1e;
                    if (-1 < (int)(uVar18 - 1)) {
                      iVar8 = uVar18 - 1;
                    }
                    iVar8 = iVar8 >> 5;
                    iVar14 = (int)local_150 + 0x20;
                    iVar9 = iVar8;
                    if (iVar8 < iVar12) {
                      iVar9 = iVar12;
                    }
                    if (iVar12 < iVar8) {
                      lVar15 = 0;
                      do {
                        uVar4 = puVar6[lVar10 + lVar15 + 1];
                        if (uVar4 != 0) {
                          uVar20 = (ulonglong)(iVar12 + (int)lVar15 + 1);
                          uVar17 = 0xffffffff;
                          goto LAB_1434a1069;
                        }
                        iVar14 = iVar14 + 0x20;
                        lVar15 = lVar15 + 1;
                      } while (iVar9 - lVar10 != lVar15);
                      uVar17 = 0xffffffff;
                      iVar12 = iVar9;
                    }
                    uVar20 = (ulonglong)(iVar12 + 1);
                    lVar5 = local_180;
                    uVar16 = local_138;
                    param_1 = local_170;
                    uVar4 = uVar18;
                  }
                  else {
LAB_1434a1069:
                    uVar16 = (ulonglong)(-uVar4 & uVar4);
                    uVar11 = uVar16 * 2 + 1;
                    lVar10 = 0x3f;
                    if (uVar11 != 0) {
                      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                      }
                    }
                    uVar4 = (iVar14 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
                    if ((int)uVar18 <= (int)uVar4) {
                      uVar4 = uVar18;
                    }
                  }
                } while (uVar4 != (uint)local_168);
              }
            }
            else {
              if (uVar17 == 0) {
                uVar16 = 1;
                uVar21 = 0;
                iVar14 = 0;
                uVar20 = 0;
              }
              else {
                puVar6 = *(uint **)(lVar5 + 0x50);
                if (*(uint **)(lVar5 + 0x50) == (uint *)0x0) {
                  puVar6 = local_160;
                }
                uVar4 = *puVar6;
                if (uVar4 == 0) {
                  iVar14 = uVar17 + 0x1e;
                  if (-1 < (int)(uVar17 - 1)) {
                    iVar14 = uVar17 - 1;
                  }
                  uVar21 = 0;
                  uVar20 = (ulonglong)(uint)(iVar14 >> 5);
                  if (iVar14 >> 5 < 1) {
                    uVar20 = uVar21;
                  }
                  iVar14 = 0;
                  do {
                    if (uVar20 == uVar21) goto LAB_1434a10d2;
                    iVar14 = iVar14 + 0x20;
                    uVar4 = puVar6[uVar21 + 1];
                    uVar21 = uVar21 + 1;
                  } while (uVar4 == 0);
                }
                else {
                  uVar21 = 0;
                  iVar14 = 0;
                }
                uVar16 = (ulonglong)(-uVar4 & uVar4);
                uVar20 = uVar16 * 2 + 1;
                lVar5 = 0x3f;
                if (uVar20 != 0) {
                  for (; uVar20 >> lVar5 == 0; lVar5 = lVar5 + -1) {
                  }
                }
                uVar4 = (iVar14 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
                uVar20 = (ulonglong)uVar4;
                if ((int)uVar17 <= (int)uVar4) {
                  uVar20 = uVar11;
                }
              }
              if ((uint)uVar20 != uVar17) {
                uVar17 = 0xffffffff;
                local_168 = uVar11;
                do {
                  lVar5 = *(longlong *)(local_180 + 0x30);
                  ppwVar7 = (wchar_t **)FUN_14001cc68(0x80,0x10);
                  ppwVar7[5] = (wchar_t *)0x0;
                  ppwVar7[6] = (wchar_t *)0x0;
                  ppwVar7[7] = (wchar_t *)0x0;
                  ppwVar7[8] = (wchar_t *)0x0;
                  ppwVar7[1] = (wchar_t *)0x0;
                  ppwVar7[2] = (wchar_t *)0x0;
                  ppwVar7[3] = (wchar_t *)0x0;
                  ppwVar7[4] = (wchar_t *)0x0;
                  ppwVar7[9] = (wchar_t *)0x0;
                  ppwVar7[10] = (wchar_t *)0x0;
                  ppwVar7[0xd] = (wchar_t *)0x0;
                  *(undefined4 *)((longlong)ppwVar7 + 0x34) = 0x80;
                  *(undefined4 *)(ppwVar7 + 7) = 0xffffffff;
                  ppwVar7[0xb] = (wchar_t *)0x0;
                  ppwVar7[0xc] = (wchar_t *)0x0;
                  *(undefined4 *)(ppwVar7 + 0xd) = 0x7f7fffff;
                  *(undefined2 *)((longlong)ppwVar7 + 0x6c) = 0x404;
                  *ppwVar7 = L"雠䜉\x01";
                  ppwVar7[0xe] = (wchar_t *)0x0;
                  ppwVar7[0xf] = (wchar_t *)0x0;
                  FUN_147a411ce(ppwVar7,*(longlong *)(lVar5 + 8 + (longlong)(int)uVar20 * 0x18) +
                                        0x70);
                  local_90 = *(longlong *)(lVar5 + (longlong)(int)uVar20 * 0x18);
                  local_a0 = ppwVar7;
                  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
                    uVar4 = (uint)((ulonglong)local_90 >> 0x10);
                    uVar18 = (uint)local_90 & 0xffff;
                    lVar5 = *(longlong *)(param_1 + 0x70);
                    if (*(longlong *)(param_1 + 0x70) == 0) {
                      lVar5 = local_148;
                    }
                    iVar12 = *(int *)(lVar5 + (ulonglong)
                                              (*(int *)(param_1 + 0x78) - 1U &
                                              (int)((ulonglong)local_90 >> 0x20) +
                                              ((uint)local_90 << 0x10 | uVar18) +
                                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar18 >> 4)) * 4)
                    ;
                    if (iVar12 != -1) {
                      do {
                        plVar13 = (longlong *)(*local_178 + (longlong)iVar12 * 0x18);
                        if (*plVar13 == local_90) {
                          if ((plVar13 != (longlong *)0x0) &&
                             (plVar13 = plVar13 + 1, plVar13 != (longlong *)0x0)) {
                            puVar3 = (undefined8 *)*plVar13;
                            if (puVar3 != (undefined8 *)0x0) {
                              (**(code **)*puVar3)(puVar3,1);
                            }
                            *plVar13 = (longlong)ppwVar7;
                            goto LAB_1434a1272;
                          }
                          break;
                        }
                        iVar12 = (int)plVar13[2];
                      } while (iVar12 != -1);
                    }
                  }
                  local_80 = (wchar_t *)&local_90;
                  local_78 = &local_a0;
                  FUN_147a3a122(local_178,&local_b0,&local_80,0);
LAB_1434a1272:
                  uVar17 = uVar17 & ~(uint)uVar16;
                  puVar6 = *(uint **)(local_180 + 0x50);
                  if (*(uint **)(local_180 + 0x50) == (uint *)0x0) {
                    puVar6 = local_160;
                  }
                  uVar4 = *(uint *)(local_180 + 0x58);
                  iVar12 = (int)uVar21;
                  lVar5 = (longlong)iVar12;
                  uVar18 = puVar6[lVar5] & uVar17;
                  if (uVar18 == 0) {
                    iVar8 = uVar4 + 0x1e;
                    if (-1 < (int)(uVar4 - 1)) {
                      iVar8 = uVar4 - 1;
                    }
                    iVar8 = iVar8 >> 5;
                    iVar14 = iVar14 + 0x20;
                    iVar9 = iVar8;
                    if (iVar8 < iVar12) {
                      iVar9 = iVar12;
                    }
                    if (iVar12 < iVar8) {
                      lVar10 = 0;
                      do {
                        uVar18 = puVar6[lVar5 + lVar10 + 1];
                        if (uVar18 != 0) {
                          uVar21 = (ulonglong)(iVar12 + (int)lVar10 + 1);
                          uVar17 = 0xffffffff;
                          goto LAB_1434a12f0;
                        }
                        iVar14 = iVar14 + 0x20;
                        lVar10 = lVar10 + 1;
                      } while (iVar9 - lVar5 != lVar10);
                      uVar17 = 0xffffffff;
                      iVar12 = iVar9;
                    }
                    uVar21 = (ulonglong)(iVar12 + 1);
                    param_1 = local_170;
                    uVar18 = uVar4;
                  }
                  else {
LAB_1434a12f0:
                    uVar16 = (ulonglong)(-uVar18 & uVar18);
                    uVar11 = uVar16 * 2 + 1;
                    lVar5 = 0x3f;
                    if (uVar11 != 0) {
                      for (; uVar11 >> lVar5 == 0; lVar5 = lVar5 + -1) {
                      }
                    }
                    uVar18 = (iVar14 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
                    if ((int)uVar4 <= (int)uVar18) {
                      uVar18 = uVar4;
                    }
                  }
                  uVar20 = (ulonglong)uVar18;
                } while (uVar18 != (uint)local_168);
              }
            }
          }
LAB_1434a10d2:
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad4a58);
          plVar13 = local_128;
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != local_130);
    }
  }
  else {
    if (param_2 != '\0') {
      local_f8[0] = 0;
      local_f8[1] = 0;
      FUN_1401031ac(lVar5,0,local_f8);
      FUN_140233b1a(local_e8,local_f8);
      local_80 = L"FoundLoopError";
      local_78._0_4_ = 0xe;
      FUN_1446e940c(local_11c,&local_80);
      local_80 = L"CompositeCurveTables";
      local_78._0_4_ = 0x14;
      FUN_1446e940c(local_120,&local_80);
      local_80 = L"Cyclic dependency found. Table {0} depends on itself. Please fix your data";
      local_78 = (wchar_t ***)CONCAT44(local_78._4_4_,0x4a);
      FUN_140208c1e(local_118,local_120,local_11c,&local_80);
      FUN_14023409e(&local_108,local_118,1);
      local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
      FUN_14023423e(local_70,local_e8);
      local_98 = local_60;
      local_a0 = &local_80;
      FUN_14010d304(&local_90);
      local_b0 = local_108;
      local_a8 = local_100;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_100 + 1) = (int)local_100[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_d8,&local_b0,&local_90);
      FUN_14007f2db(local_90,local_88);
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      param_1 = local_170;
      if (local_70[0] != (longlong *)0x0) {
        (**(code **)(*local_70[0] + 0x10))();
      }
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_100 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar1 = (int *)((longlong)local_100 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_100 + 0x10))(local_100);
          }
        }
      }
      if (local_e8[0] != (longlong *)0x0) {
        (**(code **)(*local_e8[0] + 0x10))();
      }
      if (local_118[0] != (longlong *)0x0) {
        (**(code **)(*local_118[0] + 0x10))();
      }
      if (local_f8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_d8[0] != (longlong *)0x0) {
        (**(code **)(*local_d8[0] + 0x10))();
      }
    }
    if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
      FUN_145d343f2(param_1);
    }
  }
  if ((local_60[0] ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434a135a FUN_1434a135a body=1896 status=ok
// SIG undefined FUN_1434a135a(void)

void FUN_1434a135a(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 auStack_168 [39];
  char local_141;
  longlong local_140;
  ulonglong local_138;
  undefined1 local_12c [4];
  undefined8 local_128;
  longlong *local_120;
  longlong *local_118 [2];
  undefined1 local_108 [12];
  undefined1 local_fc [4];
  longlong *local_f8 [2];
  undefined8 local_e8;
  longlong *local_e0;
  longlong local_d8 [2];
  longlong *local_c8 [2];
  longlong *local_b8 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *local_90;
  wchar_t **local_88;
  ulonglong *local_80;
  longlong local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_a8 = 0;
  uStack_a0 = 0;
  lVar5 = FUN_147a34e8e();
  local_140 = param_1;
  if (lVar5 == 0) {
    local_141 = param_2;
    FUN_140c2e1a0(local_108,param_1);
    FUN_140c2dfae(param_1);
    if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
      plVar16 = *(longlong **)(param_1 + 0xb0);
      plVar1 = plVar16 + *(int *)(param_1 + 0xb8);
      uVar10 = 0;
      do {
        while (local_138 = uVar10, plVar6 = (longlong *)*plVar16, plVar6 == (longlong *)0x0) {
LAB_1434a17b9:
          plVar16 = plVar16 + 1;
          uVar10 = local_138;
          if (plVar16 == plVar1) {
            if ((local_138 & 1) == 0) goto LAB_1434a1a8b;
            goto LAB_1434a18b2;
          }
        }
        lVar5 = *(longlong *)(param_1 + 0x28);
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
          param_1 = local_140;
        }
        if (plVar6[5] == lVar5) {
          plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2c0))(plVar6);
          iVar4 = (int)plVar6[5];
          param_1 = local_140;
          if (iVar4 == 0) {
            uVar10 = 1;
            uVar18 = 0;
            iVar17 = 0;
            iVar12 = 0;
          }
          else {
            puVar8 = (uint *)plVar6[4];
            if ((uint *)plVar6[4] == (uint *)0x0) {
              puVar8 = (uint *)(plVar6 + 2);
            }
            uVar11 = *puVar8;
            if (uVar11 == 0) {
              iVar12 = iVar4 + 0x1e;
              if (-1 < iVar4 + -1) {
                iVar12 = iVar4 + -1;
              }
              uVar18 = 0;
              uVar10 = (ulonglong)(uint)(iVar12 >> 5);
              if (iVar12 >> 5 < 1) {
                uVar10 = uVar18;
              }
              iVar17 = 0;
              do {
                if (uVar10 == uVar18) goto LAB_1434a17b9;
                iVar17 = iVar17 + 0x20;
                uVar11 = puVar8[uVar18 + 1];
                uVar18 = uVar18 + 1;
              } while (uVar11 == 0);
            }
            else {
              uVar18 = 0;
              iVar17 = 0;
            }
            uVar10 = (ulonglong)(-uVar11 & uVar11);
            uVar3 = uVar10 * 2 + 1;
            lVar5 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            iVar12 = (iVar17 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
            if (iVar4 <= iVar12) {
              iVar12 = iVar4;
            }
          }
          if (iVar12 < iVar4) {
            uVar11 = 0xffffffff;
            do {
              if (*(longlong *)(*plVar6 + 8 + (longlong)iVar12 * 0x18) != 0) {
                FUN_147a4966c(param_1,*(undefined8 *)(*plVar6 + (longlong)iVar12 * 0x18));
                iVar4 = (int)plVar6[5];
                param_1 = local_140;
              }
              uVar11 = uVar11 & ~(uint)uVar10;
              puVar8 = (uint *)plVar6[4];
              if ((uint *)plVar6[4] == (uint *)0x0) {
                puVar8 = (uint *)(plVar6 + 2);
              }
              iVar12 = (int)uVar18;
              lVar5 = (longlong)iVar12;
              uVar15 = puVar8[lVar5] & uVar11;
              if (uVar15 == 0) {
                iVar13 = iVar4 + 0x1e;
                if (-1 < iVar4 + -1) {
                  iVar13 = iVar4 + -1;
                }
                iVar13 = iVar13 >> 5;
                iVar14 = iVar13;
                if (iVar13 < iVar12) {
                  iVar14 = iVar12;
                }
                if (iVar13 <= iVar12) break;
                lVar9 = 0;
                while( true ) {
                  iVar17 = iVar17 + 0x20;
                  uVar15 = puVar8[lVar5 + lVar9 + 1];
                  if (uVar15 != 0) break;
                  lVar9 = lVar9 + 1;
                  if (iVar14 - lVar5 == lVar9) goto LAB_1434a17b9;
                }
                uVar18 = (ulonglong)(iVar12 + (int)lVar9 + 1);
                uVar11 = 0xffffffff;
              }
              uVar10 = (ulonglong)(-uVar15 & uVar15);
              uVar3 = uVar10 * 2 + 1;
              lVar5 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
                }
              }
              iVar12 = (iVar17 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
            } while (iVar12 < iVar4);
          }
          goto LAB_1434a17b9;
        }
        if (local_141 == '\0') goto LAB_1434a17b9;
        if (*(longlong *)(param_1 + 0x28) == 0) {
          FUN_1400b22c2(&local_68,"Missing row struct");
        }
        else {
          local_78 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18);
          FUN_1400021e4(&local_78,&local_68);
        }
        if (plVar6[5] == 0) {
          uVar7 = FUN_1400b22c2(&local_78,"Missing row struct");
        }
        else {
          local_88 = *(wchar_t ***)(plVar6[5] + 0x18);
          uVar7 = FUN_1400021e4(&local_88,&local_78);
        }
        if (local_78 != 0) {
          uVar7 = FUN_1400020a8();
        }
        if (local_68 != (wchar_t *)0x0) {
          uVar7 = FUN_1400020a8();
        }
        plVar16 = plVar16 + 1;
        param_1 = local_140;
        uVar10 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      } while (plVar16 != plVar1);
LAB_1434a18b2:
      local_68 = *(wchar_t **)(param_1 + 0x18);
      FUN_1400021e4(&local_68,local_d8);
      FUN_140233b1a(local_118,local_d8);
      local_68 = L"ParentsIncludesOtherRowStructError";
      local_60 = 0x22;
      FUN_1446e940c(local_fc,&local_68);
      local_68 = L"CompositeDataTables";
      local_60 = 0x13;
      FUN_1446e940c(local_12c,&local_68);
      local_68 = 
      L"Composite table \'{0}\' must have the same row struct as it\'s parent tables. See output log for list of invalid rows."
      ;
      local_60 = 0x73;
      FUN_140208c1e(local_f8,local_12c,local_fc,&local_68);
      FUN_14023409e(&local_128,local_f8,1);
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      FUN_14023423e(local_58,local_118);
      local_80 = &local_48;
      local_88 = &local_68;
      FUN_14010d304(&local_78);
      local_98 = local_128;
      local_90 = local_120;
      if (local_120 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_120 + 1) = (int)local_120[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_b8,&local_98,&local_78);
      FUN_14007f2db(local_78,local_70);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_58[0] != (longlong *)0x0) {
        (**(code **)(*local_58[0] + 0x10))();
      }
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_120 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar2 = (int *)((longlong)local_120 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_120 + 0x10))(local_120);
          }
        }
      }
      if (local_118[0] != (longlong *)0x0) {
        (**(code **)(*local_118[0] + 0x10))();
      }
      if (local_f8[0] != (longlong *)0x0) {
        (**(code **)(*local_f8[0] + 0x10))();
      }
      if (local_d8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_b8[0] != (longlong *)0x0) {
        (**(code **)(*local_b8[0] + 0x10))();
      }
    }
  }
  else {
    if (param_2 != '\0') {
      local_d8[0] = 0;
      local_d8[1] = 0;
      FUN_1401031ac(lVar5,0,local_d8);
      FUN_140233b1a(local_c8,local_d8);
      local_68 = L"FoundLoopError";
      local_60 = 0xe;
      FUN_1446e940c(local_108,&local_68);
      local_68 = L"CompositeDataTables";
      local_60 = 0x13;
      FUN_1446e940c(local_fc,&local_68);
      local_68 = L"Cyclic dependency found. Table {0} depends on itself. Please fix your data";
      local_60 = 0x4a;
      FUN_140208c1e(local_f8,local_fc,local_108,&local_68);
      FUN_14023409e(&local_e8,local_f8,1);
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      FUN_14023423e(local_58,local_c8);
      local_80 = &local_48;
      local_88 = &local_68;
      FUN_14010d304(&local_78);
      local_98 = local_e8;
      local_90 = local_e0;
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_b8,&local_98,&local_78);
      FUN_14007f2db(local_78,local_70);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_58[0] != (longlong *)0x0) {
        (**(code **)(*local_58[0] + 0x10))();
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
      if (local_c8[0] != (longlong *)0x0) {
        (**(code **)(*local_c8[0] + 0x10))();
      }
      if (local_f8[0] != (longlong *)0x0) {
        (**(code **)(*local_f8[0] + 0x10))();
      }
      if (local_d8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_b8[0] != (longlong *)0x0) {
        (**(code **)(*local_b8[0] + 0x10))();
      }
    }
    lVar5 = local_140;
    if (*(int *)(local_140 + 0x38) == *(int *)(local_140 + 100)) goto LAB_1434a1a95;
    FUN_140c2e1a0(local_108,local_140);
    FUN_140c2dfae(lVar5);
  }
LAB_1434a1a8b:
  FUN_140c2e340(local_108);
LAB_1434a1a95:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434a1ac3 FUN_1434a1ac3 body=69 status=ok
// SIG undefined FUN_1434a1ac3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a1ac3(void)

{
  _DAT_14cad3948 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a1b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3950,1);
  return;
}



// FUNCTION 1434a1b08 FUN_1434a1b08 body=69 status=ok
// SIG undefined FUN_1434a1b08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a1b08(void)

{
  _DAT_14cad3960 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a1b4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3968,1);
  return;
}



// FUNCTION 1434a1b92 FUN_1434a1b92 body=20 status=ok
// SIG undefined FUN_1434a1b92(void)

undefined8 FUN_1434a1b92(void)

{
  return CONCAT71((int7)(DAT_14cad39b0 + 1U >> 8),(DAT_14cad39b0 + 1U & 0xfffffffffffffffe) == 0);
}



// FUNCTION 1434a1ba6 FUN_1434a1ba6 body=22 status=ok
// SIG undefined FUN_1434a1ba6(void)

void FUN_1434a1ba6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  DAT_14cad39a8 = 1;
  return;
}



// FUNCTION 1434a1bbc FUN_1434a1bbc body=65 status=ok
// SIG undefined FUN_1434a1bbc(void)

void FUN_1434a1bbc(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x98))(param_1,0);
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
  DAT_14cad39a8 = 1;
  return;
}



// FUNCTION 1434a1bfe FUN_1434a1bfe body=941 status=ok
// SIG undefined FUN_1434a1bfe(void)

void FUN_1434a1bfe(longlong param_1,float param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  iVar6 = DAT_14cad3990 + DAT_14cad3980 + DAT_14cad39a0;
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  DAT_14cad3bb0 = 0;
  if (DAT_14cad3bb4 != iVar6) {
    FUN_1404dfa6e(&DAT_14cad3ba8);
  }
  uVar2 = DAT_14cad39a8;
  iVar6 = DAT_14cad3980;
  if (DAT_14cad3980 < 1) {
    if (DAT_14cad3990 < 1) {
      uVar12 = 0x44a00000;
      uVar13 = 0x44beae39;
      goto LAB_1434a1c70;
    }
    plVar4 = &DAT_14cad3988;
  }
  else {
    plVar4 = &DAT_14cad3978;
  }
  uVar12 = *(undefined4 *)(*plVar4 + 0x18);
  uVar13 = *(undefined4 *)(*plVar4 + 0x1c);
LAB_1434a1c70:
  DAT_14cad39a8 = 0;
  if (0 < DAT_14cad39a0) {
    lVar9 = 0;
    lVar8 = 0;
    do {
      uVar1 = *(undefined4 *)(DAT_14cad3998 + 0x18 + lVar9);
      FUN_1404df878(uVar1,DAT_14cad3998 + lVar9,uVar12,uVar13,uVar1,
                    *(undefined1 *)(DAT_14cad3998 + 0x20 + lVar9),
                    *(undefined4 *)(DAT_14cad3998 + 0x1c + lVar9),0);
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x28;
    } while (lVar8 < DAT_14cad39a0);
  }
  DAT_14cad39a8 = uVar2;
  if ((iVar6 < 2) || (cVar3 = (**(code **)(*DAT_14cb0d2b0 + 0x3c0))(DAT_14cb0d2b0,0), cVar3 == '\0')
     ) {
    fVar11 = 1.0;
  }
  else {
    fVar11 = 0.75;
  }
  iVar6 = DAT_14cad3990;
  if (0 < DAT_14cad3990) {
    lVar8 = 0;
    lVar10 = 0;
    lVar9 = DAT_14cad3988;
    do {
      if (*(char *)(lVar9 + 0x28 + lVar8) == '\0') {
        FUN_1404dfbb8(&DAT_14cad3ba8,lVar9 + lVar8,*(float *)(lVar9 + 0x18 + lVar8) * fVar11,
                      *(undefined4 *)(lVar9 + 0x1c + lVar8),*(undefined4 *)(lVar9 + 0x20 + lVar8),0,
                      *(undefined4 *)(lVar9 + 0x24 + lVar8),*(undefined8 *)(lVar9 + 0x2c + lVar8));
        lVar9 = DAT_14cad3988;
        iVar6 = DAT_14cad3990;
      }
      lVar10 = lVar10 + 1;
      lVar8 = lVar8 + 0x38;
    } while (lVar10 < iVar6);
  }
  if (0 < DAT_14cad3980) {
    lVar8 = 0;
    lVar10 = 0;
    lVar9 = DAT_14cad3978;
    iVar5 = DAT_14cad3980;
    do {
      if (*(char *)(lVar9 + 0x28 + lVar8) == '\0') {
        FUN_1404dfbb8(&DAT_14cad3ba8,lVar9 + lVar8,*(float *)(lVar9 + 0x18 + lVar8) * fVar11,
                      *(undefined4 *)(lVar9 + 0x1c + lVar8),*(undefined4 *)(lVar9 + 0x20 + lVar8),0,
                      *(undefined4 *)(lVar9 + 0x24 + lVar8),*(undefined8 *)(lVar9 + 0x2c + lVar8));
        lVar9 = DAT_14cad3978;
        iVar5 = DAT_14cad3980;
      }
      lVar10 = lVar10 + 1;
      lVar8 = lVar8 + 0x38;
      iVar6 = DAT_14cad3990;
    } while (lVar10 < iVar5);
  }
  if (0 < iVar6) {
    uVar7 = 0;
    do {
      lVar9 = (longlong)(int)uVar7 * 0x38;
      fVar11 = *(float *)(DAT_14cad3988 + 0x24 + lVar9) - param_2;
      *(float *)(DAT_14cad3988 + 0x24 + lVar9) = fVar11;
      if (fVar11 <= 0.0) {
        iVar6 = ~uVar7 + DAT_14cad3990;
        if (iVar6 != 0) {
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove((void *)(lVar9 + DAT_14cad3988),
                  (void *)((longlong)(DAT_14cad3990 - iVar6) * 0x38 + DAT_14cad3988),
                  (longlong)iVar6 * 0x38);
        }
        uVar7 = uVar7 - 1;
        DAT_14cad3990 = DAT_14cad3990 + -1;
        FUN_147a3bec8(&DAT_14cad3988);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < DAT_14cad3990);
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    if (0 < *(int *)(param_1 + 0x20)) {
      iVar6 = 0;
      do {
        if (iVar6 != 0) {
          FUN_14080c2b4();
        }
        if (0 < *(int *)(param_1 + 0x18)) {
          lVar9 = 0;
          do {
            plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + lVar9 * 8);
            (**(code **)(*plVar4 + 0x10))(plVar4,param_2,param_3);
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)(param_1 + 0x18));
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x20));
    }
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  return;
}



// FUNCTION 1434a1fac FUN_1434a1fac body=58 status=ok
// SIG undefined FUN_1434a1fac(void)

void FUN_1434a1fac(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + lVar2 * 8);
      (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 1434a1fe6 FUN_1434a1fe6 body=58 status=ok
// SIG undefined FUN_1434a1fe6(void)

void FUN_1434a1fe6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + lVar2 * 8);
      (**(code **)(*plVar1 + 0x50))(plVar1,param_2);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 1434a2020 FUN_1434a2020 body=167 status=ok
// SIG undefined FUN_1434a2020(void)

undefined8 FUN_1434a2020(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad39c0) {
    FUN_144b3d300(&DAT_14cad39c0);
    if (DAT_14cad39c0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cad39b8 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))
                     (DAT_14c8407a8,L"r.Streaming.gbx.GbxAllowIncrementalUpdatesForcedCompletion",1)
      ;
      _Init_thread_footer(&DAT_14cad39c0);
    }
  }
  if (DAT_14cad39b8 == (longlong *)0x0 || *(char *)(param_1 + 0x58) != '\0') {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a206b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*DAT_14cad39b8 + 0xa8))();
  return uVar1;
}



// FUNCTION 1434a20c8 FUN_1434a20c8 body=198 status=ok
// SIG undefined FUN_1434a20c8(void)

longlong * FUN_1434a20c8(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    if (DAT_14cad39b0 == 0) {
      lVar4 = FUN_14001cc68(0x60,0x10);
      FUN_1461a8102(lVar4);
      DAT_14cad39b0 = lVar4;
    }
    (**(code **)(**(longlong **)(DAT_14cad39b0 + 0x38) + 0xe0))
              (*(longlong **)(DAT_14cad39b0 + 0x38),param_1);
  }
  lVar4 = *param_2;
  *param_1 = lVar4;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
  lVar2 = param_2[3];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar3 = param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 3) = (int)lVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(int *)(param_1 + 4) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  if (lVar4 != 0) {
    if (DAT_14cad39b0 == 0) {
      lVar4 = FUN_14001cc68(0x60,0x10);
      FUN_1461a8102(lVar4);
      DAT_14cad39b0 = lVar4;
    }
    (**(code **)(**(longlong **)(DAT_14cad39b0 + 0x38) + 0xd8))
              (*(longlong **)(DAT_14cad39b0 + 0x38),param_1);
  }
  return param_1;
}



// FUNCTION 1434a218e FUN_1434a218e body=151 status=ok
// SIG undefined FUN_1434a218e(void)

longlong * FUN_1434a218e(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*param_1 != 0) {
    if (DAT_14cad39b0 == 0) {
      lVar2 = FUN_14001cc68(0x60,0x10);
      FUN_1461a8102(lVar2);
      DAT_14cad39b0 = lVar2;
    }
    (**(code **)(**(longlong **)(DAT_14cad39b0 + 0x38) + 0xe0))
              (*(longlong **)(DAT_14cad39b0 + 0x38),param_1);
  }
  *param_1 = *param_2;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x1c);
  *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
  *(undefined8 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = -0x100000000;
  return param_1;
}



// FUNCTION 1434a2226 FUN_1434a2226 body=1 status=ok
// SIG undefined FUN_1434a2226(void)

void FUN_1434a2226(void)

{
  return;
}



// FUNCTION 1434a2228 FUN_1434a2228 body=54 status=ok
// SIG undefined FUN_1434a2228(void)

void FUN_1434a2228(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(byte *)(param_1 + 0x84) & 2) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x6c8))();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 1434a225e FUN_1434a225e body=228 status=ok
// SIG undefined FUN_1434a225e(void)

longlong FUN_1434a225e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad3ae0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_147a36475;
    local_40 = &LAB_1463c0cc7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x428;
    FUN_14081cfa3(L"/Script/Engine",L"Controller",&DAT_14cad3ae0,FUN_1463c0ca0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad3ae0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434a2343 FUN_1434a2343 body=69 status=ok
// SIG undefined FUN_1434a2343(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a2343(void)

{
  _DAT_14cad3b10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a2385. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3b18,1);
  return;
}



// FUNCTION 1434a2388 FUN_1434a2388 body=69 status=ok
// SIG undefined FUN_1434a2388(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a2388(void)

{
  _DAT_14cad3b20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a23ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3b28,1);
  return;
}



// FUNCTION 1434a23cd FUN_1434a23cd body=69 status=ok
// SIG undefined FUN_1434a23cd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a23cd(void)

{
  _DAT_14cad3b38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a240f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3b40,1);
  return;
}



// FUNCTION 1434a242a FUN_1434a242a body=1488 status=ok
// SIG undefined FUN_1434a242a(void)

ulonglong FUN_1434a242a(longlong *param_1,longlong *param_2,double *param_3)

{
  longlong lVar1;
  double dVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  double *pdVar7;
  undefined8 unaff_RBP;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined1 auStack_1a8 [32];
  char **local_188;
  undefined1 *local_180;
  undefined4 *local_178;
  undefined8 local_170;
  undefined2 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  code **local_150;
  code *local_148;
  code *local_140;
  float local_138;
  undefined1 local_134 [4];
  code *local_130;
  double dStack_128;
  double local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  code *local_f8;
  double dStack_f0;
  double local_e8;
  char *local_e0;
  longlong local_d8;
  undefined1 local_d0;
  undefined2 local_cf;
  undefined1 local_cd;
  undefined2 local_cc;
  undefined1 local_ca;
  undefined2 local_c9;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (param_2 == (longlong *)0x0) {
    uVar8 = 0;
    goto LAB_1434a271b;
  }
  if (((((*param_3 == 0.0) && (!NAN(*param_3))) && (param_3[1] == 0.0)) &&
      ((!NAN(param_3[1]) && (param_3[2] == 0.0)))) && (!NAN(param_3[2]))) {
    (**(code **)(*param_1 + 0x588))(param_1,param_3,&local_e0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cad3b58) && (FUN_144b3d300(), DAT_14cad3b58 == -1)) {
    local_e0 = "LineOfSight";
    local_d8 = CONCAT35(local_d8._5_3_,0xb);
    uVar4 = FUN_14001a6c0(&local_e0,1);
    DAT_14cad3b50 = (char *)(ulonglong)uVar4;
    _Init_thread_footer();
  }
  local_bc = 0;
  local_b8 = 0x101;
  local_90 = 0;
  local_88 = 0x800000000;
  local_70 = 0;
  local_64 = 4;
  local_d0 = 1;
  local_c4 = 0;
  local_e0 = DAT_14cad3b50;
  local_cf = 1;
  local_cd = 0;
  local_c0 = 0;
  local_cc = 0;
  local_ca = 0;
  local_80 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_68 = 1;
  local_d8 = param_2[3];
  local_c9 = 0x101;
  if (param_1[0x7a] != 0) {
    local_7c = *(undefined4 *)(param_1[0x7a] + 0xc);
    local_68 = 2;
  }
  (**(code **)(*param_2 + 0x590))(param_2,&local_130);
  uVar5 = FUN_1447210f0(param_1);
  local_f8 = local_130;
  dStack_f0 = dStack_128;
  local_e8 = local_120;
  local_118 = *(undefined4 *)param_3;
  uStack_114 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_110 = *(undefined4 *)(param_3 + 1);
  uStack_10c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_108 = param_3[2];
  local_178 = &DAT_14cad0f08;
  local_180 = &DAT_14cad0f10;
  local_188 = &local_e0;
  cVar3 = FUN_140386a8e(uVar5,&local_118,&local_f8,3);
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (cVar3 != '\0') {
    if (DAT_14caf64b8 == 0) {
      local_f8 = FUN_141030f22;
      local_140 = FUN_14081d0ea;
      local_148 = FUN_142b4754c;
      local_158 = &LAB_147c45ce0;
      local_160 = &LAB_1463f1ff4;
      local_168 = &DAT_149e063b2;
      local_170 = 0x4000000000;
      local_178 = (undefined4 *)CONCAT44(local_178._4_4_,0x10000004);
      local_180 = (undefined1 *)CONCAT44(local_180._4_4_,8);
      local_188 = (char **)CONCAT44(local_188._4_4_,0x428);
      local_150 = &local_f8;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) !=
        DAT_14caf64b8 + 0x30)) {
      lVar1 = param_2[0x39];
      if (lVar1 != 0) {
        lVar6 = FUN_1400b5618();
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30)) goto LAB_1434a268e;
      }
    }
    else {
LAB_1434a268e:
      lVar1 = param_2[0x39];
      if (lVar1 == 0) {
        pdVar7 = (double *)&DAT_14c8464e0;
        uVar9 = (undefined4)DAT_14c8464f0;
        uVar10 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar9 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
        uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
        pdVar7 = (double *)(lVar1 + 0x260);
      }
      dVar2 = (double)CONCAT44(uVar10,uVar9) - param_3[2];
      fVar11 = (float)(dVar2 * dVar2 +
                      (*pdVar7 - *param_3) * (*pdVar7 - *param_3) +
                      (pdVar7[1] - param_3[1]) * (pdVar7[1] - param_3[1]));
      if (fVar11 <= 6.4e+07) {
        if (DAT_14caf64b8 == 0) {
          local_f8 = FUN_141030f22;
          local_140 = FUN_14081d0ea;
          local_148 = FUN_142b4754c;
          local_158 = &LAB_147c45ce0;
          local_160 = &LAB_1463f1ff4;
          local_168 = &DAT_149e063b2;
          local_170 = 0x4000000000;
          local_178 = (undefined4 *)CONCAT44(local_178._4_4_,0x10000004);
          local_180 = (undefined1 *)CONCAT44(local_180._4_4_,8);
          local_188 = (char **)CONCAT44(local_188._4_4_,0x428);
          local_150 = &local_f8;
          FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
        }
        if (*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) {
          if (fVar11 <= 4e+06) {
LAB_1434a279a:
            (**(code **)(*param_2 + 0x528))(param_2,local_134,&local_138);
            uVar5 = FUN_1447210f0(param_1);
            lVar1 = param_2[0x39];
            if (lVar1 == 0) {
              pdVar7 = (double *)&DAT_14c8464e0;
              uVar9 = (undefined4)DAT_14c8464f0;
              uVar10 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            }
            else {
              uVar9 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
              uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
              pdVar7 = (double *)(lVar1 + 0x260);
            }
            local_e8 = (double)local_138 + (double)CONCAT44(uVar10,uVar9);
            dStack_f0 = pdVar7[1] + 0.0;
            local_f8 = (code *)(*pdVar7 + 0.0);
            local_118 = *(undefined4 *)param_3;
            uStack_114 = *(undefined4 *)((longlong)param_3 + 4);
            uStack_110 = *(undefined4 *)(param_3 + 1);
            uStack_10c = *(undefined4 *)((longlong)param_3 + 0xc);
            local_108 = param_3[2];
            local_178 = &DAT_14cad0f08;
            local_180 = &DAT_14cad0f10;
            local_188 = &local_e0;
            uVar4 = FUN_140386a8e(uVar5,&local_118,&local_f8,3);
            uVar8 = (ulonglong)uVar4 ^ 1;
            goto LAB_1434a26f7;
          }
        }
        else if ((fVar11 <= 4e+06) ||
                (*(longlong *)
                  (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8)
                 == DAT_14caf64b8 + 0x30)) goto LAB_1434a279a;
      }
    }
    uVar8 = 0;
  }
LAB_1434a26f7:
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
LAB_1434a271b:
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1434a29fc FUN_1434a29fc body=476 status=ok
// SIG undefined FUN_1434a29fc(void)

void FUN_1434a29fc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double dVar9;
  double *pdVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  ulonglong local_40;
  longlong *plVar13;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong *)param_1[0x7a] != (longlong *)0x0 && (longlong *)param_1[0x7a] != param_2) {
    FUN_1413ef136(param_1);
  }
  if (param_2 != (longlong *)0x0) {
    if (param_2[0x78] != 0) {
      FUN_1413ef136();
    }
    (**(code **)(*param_2 + 0x6d0))(param_2,param_1);
    plVar13 = param_1;
    (**(code **)(*param_1 + 0x6b0))(param_1,param_2);
    uVar11 = SUB84(plVar13,0);
    dVar9 = (double)param_1[0x7a];
    lVar1 = *(longlong *)((longlong)dVar9 + 0x1c8);
    if (lVar1 == 0) {
      local_48 = DAT_14c846508;
      local_58 = (undefined4)DAT_14c8464f8;
      uStack_54 = DAT_14c8464f8._4_4_;
      uStack_50 = (undefined4)DAT_14c846500;
      uStack_4c = DAT_14c846500._4_4_;
    }
    else {
      dVar4 = *(double *)(lVar1 + 0x240);
      dVar5 = *(double *)(lVar1 + 0x248);
      dVar6 = *(double *)(lVar1 + 0x250);
      dVar7 = *(double *)(lVar1 + 600);
      pdVar10 = *(double **)(lVar1 + 0x228);
      local_78 = dVar4;
      uStack_70 = dVar5;
      local_68 = dVar6;
      uStack_60 = dVar7;
      if (pdVar10 == (double *)0x0) {
        uVar11 = 0x40;
        pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
        dVar9 = DAT_14c8463d8;
        *pdVar10 = DAT_14c8463d0;
        pdVar10[1] = dVar9;
        dVar9 = DAT_14c8463e8;
        pdVar10[2] = DAT_14c8463e0;
        pdVar10[3] = dVar9;
        dVar9 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar10[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar10[5] = dVar9;
        dVar9 = DAT_14c846508;
        pdVar10[6] = DAT_14c846508;
        *(double **)(lVar1 + 0x228) = pdVar10;
      }
      auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar10[1]);
      auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar10);
      auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar10[1]) >> 0x20);
      iVar8 = movmskpd(SUB84(dVar9,0),auVar2);
      auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar10[3]);
      auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar10[2]);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar10[3]) >> 0x20);
      uVar12 = movmskpd(uVar11,auVar3);
      if ((uVar12 & 0x3fffffff) != 0 || iVar8 != 0) {
        *(undefined4 *)(pdVar10 + 2) = (undefined4)local_68;
        *(undefined4 *)((longlong)pdVar10 + 0x14) = local_68._4_4_;
        *(undefined4 *)(pdVar10 + 3) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)pdVar10 + 0x1c) = uStack_60._4_4_;
        *(undefined4 *)pdVar10 = (undefined4)local_78;
        *(undefined4 *)((longlong)pdVar10 + 4) = local_78._4_4_;
        *(undefined4 *)(pdVar10 + 1) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)pdVar10 + 0xc) = uStack_70._4_4_;
        FUN_1448052ee(&local_78,&local_58);
        pdVar10[6] = local_48;
        pdVar10[4] = (double)CONCAT44(uStack_54,local_58);
        pdVar10[5] = (double)CONCAT44(uStack_4c,uStack_50);
      }
      local_48 = pdVar10[6];
      local_58 = *(undefined4 *)(pdVar10 + 4);
      uStack_54 = *(undefined4 *)((longlong)pdVar10 + 0x24);
      uStack_50 = *(undefined4 *)(pdVar10 + 5);
      uStack_4c = *(undefined4 *)((longlong)pdVar10 + 0x2c);
    }
    (**(code **)(*param_1 + 0x688))(param_1,&local_58,1);
    plVar13 = (longlong *)param_1[0x7a];
    (**(code **)(*plVar13 + 0x6f0))(plVar13);
    (**(code **)(*plVar13 + 0x6e8))(plVar13);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434a2bda FUN_1434a2bda body=139 status=ok
// SIG undefined FUN_1434a2bda(void)

void FUN_1434a2bda(longlong *param_1,longlong param_2)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (param_1[0x7a] == param_2) {
    FUN_1413ef136(param_1);
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    (**(code **)(*param_1 + 0x678))(param_1,DAT_14c893054);
    if (param_1[0x73] == 0) {
      FUN_140aeefbc(param_1,0,1);
      return;
    }
  }
  return;
}



// FUNCTION 1434a2c66 FUN_1434a2c66 body=108 status=ok
// SIG undefined FUN_1434a2c66(void)

void FUN_1434a2c66(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x688))();
  plVar1 = (longlong *)param_1[0x7a];
  if (plVar1 != (longlong *)0x0) {
    local_28 = *(undefined8 *)(param_2 + 4);
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    (**(code **)(*plVar1 + 0x730))(plVar1,&local_38,0);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434a2cf0 FUN_1434a2cf0 body=595 status=ok
// SIG undefined FUN_1434a2cf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1434a2cf0(longlong param_1,double *param_2,undefined1 (*param_3) [16],undefined1 *param_4)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double *pdVar21;
  uint unaff_ESI;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint in_R11D;
  int iVar25;
  longlong lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  
  *param_4 = 1;
  iVar24 = *(int *)(param_1 + 0x1f0);
  if (0 < iVar24) {
    dVar1 = *param_2;
    dVar2 = *param_2;
    dVar3 = param_2[1];
    dVar4 = param_2[1];
    dVar5 = param_2[2];
    dVar6 = param_2[2];
    auVar27 = *param_3 & _DAT_149931180;
    auVar28._8_4_ = auVar27._8_4_;
    auVar28._12_4_ = auVar27._12_4_;
    auVar28._0_8_ = auVar27._8_8_;
    dVar7 = *(double *)param_3[1];
    dVar8 = *(double *)param_3[1];
    pdVar21 = (double *)(param_1 + 0xe0);
    if (*(double **)(param_1 + 0x1e0) != (double *)0x0) {
      pdVar21 = *(double **)(param_1 + 0x1e0);
    }
    iVar23 = 0;
    do {
      dVar17 = (dVar5 * pdVar21[8] + dVar3 * pdVar21[4] + dVar1 * *pdVar21) - pdVar21[0xc];
      dVar18 = (dVar6 * pdVar21[9] + dVar4 * pdVar21[5] + dVar2 * pdVar21[1]) - pdVar21[0xd];
      dVar19 = (dVar5 * pdVar21[10] + dVar3 * pdVar21[6] + dVar1 * pdVar21[2]) - pdVar21[0xe];
      dVar20 = (dVar6 * pdVar21[0xb] + dVar4 * pdVar21[7] + dVar2 * pdVar21[3]) - pdVar21[0xf];
      dVar16 = auVar27._0_8_;
      dVar12 = ABS(pdVar21[8] * dVar7) + ABS(pdVar21[4]) * auVar28._0_8_ + ABS(*pdVar21) * dVar16;
      dVar13 = ABS(pdVar21[9] * dVar8) + ABS(pdVar21[5]) * auVar28._8_8_ + ABS(pdVar21[1]) * dVar16;
      dVar15 = ABS(pdVar21[10] * dVar7) + ABS(pdVar21[6]) * auVar28._0_8_ + ABS(pdVar21[2]) * dVar16
      ;
      dVar16 = ABS(pdVar21[0xb] * dVar8) +
               ABS(pdVar21[7]) * auVar28._8_8_ + ABS(pdVar21[3]) * dVar16;
      auVar9._8_8_ = -(ulonglong)(dVar13 < dVar18);
      auVar9._0_8_ = -(ulonglong)(dVar12 < dVar17);
      iVar25 = movmskpd(in_R11D,auVar9);
      auVar10._8_8_ = -(ulonglong)(dVar16 < dVar20);
      auVar10._0_8_ = -(ulonglong)(dVar15 < dVar19);
      uVar22 = movmskpd(unaff_ESI,auVar10);
      if ((uVar22 & 0x3fffffff) != 0 || iVar25 != 0) {
        *param_4 = 0;
        return 0;
      }
      lVar26 = -(ulonglong)(0.0 - dVar13 < dVar18);
      auVar14._8_4_ = (int)lVar26;
      auVar14._0_8_ = -(ulonglong)(0.0 - dVar12 < dVar17);
      auVar14._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
      in_R11D = movmskpd(iVar25,auVar14);
      auVar11._8_8_ = -(ulonglong)(0.0 - dVar16 < dVar20);
      auVar11._0_8_ = -(ulonglong)(0.0 - dVar15 < dVar19);
      iVar25 = movmskpd(0,auVar11);
      unaff_ESI = iVar25 << 2 | in_R11D;
      if (unaff_ESI != 0) {
        *param_4 = 0;
        iVar24 = *(int *)(param_1 + 0x1f0);
      }
      iVar23 = iVar23 + 4;
      pdVar21 = pdVar21 + 0x10;
    } while (iVar23 < iVar24);
  }
                    /* WARNING: Read-only address (ram,0x000149931180) is written */
  return 1;
}



// FUNCTION 1434a2f4e FUN_1434a2f4e body=48 status=ok
// SIG undefined FUN_1434a2f4e(void)

longlong FUN_1434a2f4e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x718;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434a2f9a FUN_1434a2f9a body=48 status=ok
// SIG undefined FUN_1434a2f9a(void)

longlong FUN_1434a2f9a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1413f439e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434a2fd8 FUN_1434a2fd8 body=38 status=ok
// SIG undefined FUN_1434a2fd8(void)

undefined8 FUN_1434a2fd8(undefined8 param_1,int param_2)

{
  FUN_140064e2c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434a3006 FUN_1434a3006 body=1793 status=ok
// SIG undefined FUN_1434a3006(void)

void FUN_1434a3006(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  undefined1 auStack_1d8 [32];
  float *local_1b8;
  double local_1b0;
  int local_1a8;
  undefined1 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  undefined1 local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  iVar10 = (int)param_2[1];
  if (0 < iVar10) {
    lVar9 = 0;
    do {
      if ((param_4 >> ((uint)lVar9 & 0x1f) & 1) != 0) {
        lVar8 = *(longlong *)(param_5 + 0x60);
        if (*(longlong *)(param_5 + 0x60) == 0) {
          lVar8 = param_5 + 0x50;
        }
        fVar16 = (float)*(byte *)(param_1 + 0x29f) * 0.003921569;
        if ((*(byte *)(param_1 + 0x6c) & 6) == 0) {
          fVar11 = *(float *)(&DAT_14a819f80 +
                             (ulonglong)((*(byte *)(param_1 + 0x6c) & 0x10) == 0) * 4);
        }
        else {
          fVar11 = 1.0;
        }
        lVar4 = *(longlong *)(*param_2 + lVar9 * 8);
        uVar5 = *(undefined8 *)(lVar8 + lVar9 * 8);
        fVar1 = (float)(&DAT_14c758c60)[*(byte *)(param_1 + 0x29e)];
        fVar2 = (float)(&DAT_14c758c60)[*(byte *)(param_1 + 0x29d)];
        fVar3 = (float)(&DAT_14c758c60)[*(byte *)(param_1 + 0x29c)];
        local_100 = powf(fVar11,2.2);
        local_f8 = fVar3 * local_100;
        local_fc = fVar2 * local_100;
        local_100 = fVar1 * local_100;
        dVar6 = *(double *)(lVar4 + 0x1058) - *(double *)(param_1 + 0x170);
        dVar15 = *(double *)(lVar4 + 0x1050) - *(double *)(param_1 + 0x168);
        dVar12 = *(double *)(lVar4 + 0x1048) - *(double *)(param_1 + 0x160);
        fVar11 = (float)(dVar6 * dVar6 + dVar12 * dVar12 + dVar15 * dVar15);
        local_f4 = fVar16;
        if ((*(float *)(param_1 + 0x274) * *(float *)(param_1 + 0x274) <= fVar11) &&
           (fVar11 <= *(float *)(param_1 + 0x270) * *(float *)(param_1 + 0x270))) {
          dVar6 = *(double *)(param_1 + 0x110);
          dVar12 = *(double *)(param_1 + 0x100);
          dVar15 = *(double *)(param_1 + 0x108);
          dVar13 = dVar6 * dVar6 + dVar12 * dVar12 + dVar15 * dVar15;
          if (((dVar13 != 1.0) ||
              (local_108 = dVar6, local_110 = dVar15, local_118 = dVar12, NAN(dVar13))) &&
             (local_108 = DAT_14c8464f0, local_110 = DAT_14c8464e8, local_118 = DAT_14c8464e0,
             9.99999993922529e-09 <= dVar13)) {
            dVar14 = 1.0 / SQRT(dVar13);
            local_108 = dVar6 * dVar14;
            local_110 = dVar15 * dVar14;
            local_118 = dVar12 * dVar14;
          }
          fVar16 = (float)SQRT(dVar13);
          dVar6 = *(double *)(param_1 + 0x130);
          dVar12 = *(double *)(param_1 + 0x128);
          dVar15 = *(double *)(param_1 + 0x120);
          dVar13 = dVar6 * dVar6 + dVar15 * dVar15 + dVar12 * dVar12;
          local_168 = SQRT(dVar13);
          if ((float)local_168 <= fVar16) {
            fVar16 = (float)local_168;
          }
          local_170 = *(double *)(param_1 + 0x150);
          local_178 = *(double *)(param_1 + 0x148);
          local_180 = *(double *)(param_1 + 0x140);
          dVar14 = local_170 * local_170 + local_180 * local_180 + local_178 * local_178;
          fVar11 = (float)SQRT(dVar14);
          if (fVar11 <= fVar16) {
            fVar16 = fVar11;
          }
          dVar7 = (double)fVar16;
          local_108 = local_108 * dVar7;
          local_110 = local_110 * dVar7;
          local_118 = local_118 * dVar7;
          if (((dVar13 != 1.0) ||
              (local_120 = dVar6, local_128 = dVar12, local_130 = dVar15, NAN(dVar13))) &&
             (local_120 = DAT_14c8464f0, local_128 = DAT_14c8464e8, local_130 = DAT_14c8464e0,
             9.99999993922529e-09 <= dVar13)) {
            dVar13 = 1.0 / local_168;
            local_120 = dVar6 * dVar13;
            local_128 = dVar12 * dVar13;
            local_130 = dVar15 * dVar13;
          }
          local_120 = local_120 * dVar7;
          local_128 = local_128 * dVar7;
          local_130 = local_130 * dVar7;
          if (((dVar14 != 1.0) ||
              (local_138 = local_170, local_140 = local_178, local_148 = local_180, NAN(dVar14))) &&
             (local_138 = DAT_14c8464f0, local_140 = DAT_14c8464e8, local_148 = DAT_14c8464e0,
             9.99999993922529e-09 <= dVar14)) {
            dVar6 = 1.0 / SQRT(dVar14);
            local_138 = local_170 * dVar6;
            local_140 = local_178 * dVar6;
            local_148 = local_180 * dVar6;
          }
          local_138 = local_138 * dVar7;
          local_140 = local_140 * dVar7;
          local_148 = local_148 * dVar7;
          local_1b0 = (double)*(float *)(param_1 + 0x2a0);
          iVar10 = (int)(*(float *)(param_1 + 0x2a0) * 0.25);
          if (0x3f < iVar10) {
            iVar10 = 0x40;
          }
          if (iVar10 < 0x11) {
            iVar10 = 0x10;
          }
          local_198 = *(undefined4 *)(param_1 + 0x2a4);
          local_188 = 0;
          local_190 = 0;
          local_1a0 = 0;
          local_1b8 = &local_100;
          local_1a8 = iVar10;
          local_160 = *(double *)(param_1 + 0x160);
          dStack_158 = *(double *)(param_1 + 0x168);
          local_150 = *(double *)(param_1 + 0x170);
          FUN_147cb7c40(uVar5,&local_160,&local_118,&local_130);
          local_198 = *(undefined4 *)(param_1 + 0x2a4);
          local_1b0 = (double)*(float *)(param_1 + 0x2a0);
          local_150 = *(double *)(param_1 + 0x170);
          local_160 = *(double *)(param_1 + 0x160);
          dStack_158 = *(double *)(param_1 + 0x168);
          local_188 = 0;
          local_190 = 0;
          local_1a0 = 0;
          local_1b8 = &local_100;
          local_1a8 = iVar10;
          FUN_147cb7c40(uVar5,&local_160,&local_118,&local_148);
          local_198 = *(undefined4 *)(param_1 + 0x2a4);
          local_1b0 = (double)*(float *)(param_1 + 0x2a0);
          local_150 = *(double *)(param_1 + 0x170);
          local_160 = *(double *)(param_1 + 0x160);
          dStack_158 = *(double *)(param_1 + 0x168);
          local_188 = 0;
          local_190 = 0;
          local_1a0 = 0;
          local_1b8 = &local_100;
          local_1a8 = iVar10;
          FUN_147cb7c40(uVar5,&local_160,&local_130,&local_148);
        }
        iVar10 = (int)param_2[1];
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar10);
  }
  if ((local_f0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434a3708 FUN_1434a3708 body=127 status=ok
// SIG undefined FUN_1434a3708(void)

undefined8 * FUN_1434a3708(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  
  if ((*(byte *)(param_1 + 0x298) & 1) == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = (*(byte *)(param_1 + 0x6c) & 6) == 0;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)((longlong)param_2 + 4) = 2;
  bVar2 = FUN_14480c900(param_1,param_3);
  uVar1 = (uint)bVar2 << 2 | 0x82;
  if (bVar3) {
    uVar1 = 0x82;
  }
  bVar2 = FUN_144914152(param_1,param_3);
  *(uint *)(param_2 + 2) = uVar1 + (uint)bVar2 * 8;
  return param_2;
}



// FUNCTION 1434a3874 FUN_1434a3874 body=692 status=ok
// SIG undefined FUN_1434a3874(void)

void FUN_1434a3874(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong *plVar19;
  bool bVar20;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  iVar6 = *(int *)(param_1 + 0x70);
  if (iVar6 == 0) {
    uVar14 = 1;
    uVar17 = 0;
    iVar8 = 0;
    iVar12 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x58);
    }
    uVar16 = *puVar7;
    if (uVar16 == 0) {
      iVar8 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar8 = iVar6 + -1;
      }
      uVar17 = 0;
      uVar14 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar14 = uVar17;
      }
      iVar12 = 0;
      do {
        if (uVar14 == uVar17) goto LAB_1434a3a27;
        iVar12 = iVar12 + 0x20;
        uVar16 = puVar7[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar12 = 0;
    }
    uVar14 = (ulonglong)(-uVar16 & uVar16);
    uVar2 = uVar14 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar8 = (iVar12 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar8) {
      iVar8 = iVar6;
    }
  }
  if (iVar8 != iVar6) {
    uVar16 = 0xffffffff;
    iVar5 = iVar6;
    do {
      plVar19 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x10 + (longlong)iVar8 * 0x28);
      if (((char)plVar19[4] == '\0') && ((longlong)(int)plVar19[1] != 0)) {
        lVar18 = *plVar19;
        lVar13 = (longlong)(int)plVar19[1] << 3;
        do {
          (**(code **)(*param_2 + 0x88))(param_2,lVar18,0,0);
          lVar18 = lVar18 + 8;
          lVar13 = lVar13 + -8;
        } while (lVar13 != 0);
        iVar5 = *(int *)(param_1 + 0x70);
      }
      uVar16 = uVar16 & ~(uint)uVar14;
      puVar7 = *(uint **)(param_1 + 0x68);
      if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x58);
      }
      iVar8 = (int)uVar17;
      lVar18 = (longlong)iVar8;
      uVar9 = puVar7[lVar18] & uVar16;
      if (uVar9 == 0) {
        iVar10 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar10 = iVar5 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar8) {
          iVar11 = iVar8;
        }
        if (iVar8 < iVar10) {
          lVar13 = 0;
          do {
            uVar9 = puVar7[lVar18 + lVar13 + 1];
            if (uVar9 != 0) {
              uVar17 = (ulonglong)(iVar8 + (int)lVar13 + 1);
              uVar16 = 0xffffffff;
              goto LAB_1434a39fe;
            }
            iVar12 = iVar12 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar11 - lVar18 != lVar13);
          uVar16 = 0xffffffff;
          iVar8 = iVar11;
        }
        uVar17 = (ulonglong)(iVar8 + 1);
        iVar8 = iVar5;
      }
      else {
LAB_1434a39fe:
        uVar14 = (ulonglong)(-uVar9 & uVar9);
        uVar2 = uVar14 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar8 = (iVar12 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar8) {
          iVar8 = iVar5;
        }
      }
    } while (iVar8 != iVar6);
  }
LAB_1434a3a27:
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    plVar19 = *(longlong **)(param_1 + 0x98);
    plVar15 = plVar19 + (longlong)*(int *)(param_1 + 0xa0) * 2;
    do {
      plVar3 = (longlong *)plVar19[1];
      if (plVar3 != (longlong *)0x0) {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_1434a3ad4;
          LOCK();
          iVar8 = (int)plVar3[1];
          bVar20 = iVar6 == iVar8;
          if (bVar20) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar8 = iVar6;
          }
          iVar6 = iVar8;
          UNLOCK();
        } while (!bVar20);
        plVar4 = (longlong *)*plVar19;
        if (((plVar4 != (longlong *)0x0) && ((char)plVar4[4] == '\0')) &&
           ((longlong)(int)plVar4[1] != 0)) {
          lVar18 = *plVar4;
          lVar13 = (longlong)(int)plVar4[1] << 3;
          do {
            (**(code **)(*param_2 + 0x88))(param_2,lVar18,0,0);
            lVar18 = lVar18 + 8;
            lVar13 = lVar13 + -8;
          } while (lVar13 != 0);
        }
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
LAB_1434a3ad4:
      plVar19 = plVar19 + 2;
    } while (plVar19 != plVar15);
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a3a46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 1434a3b2c FUN_1434a3b2c body=262 status=ok
// SIG undefined FUN_1434a3b2c(void)

uint FUN_1434a3b2c(int *param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140ba791a(param_2 + 4,&local_30);
  FUN_140ba791a(param_1 + 4,&local_40);
  puVar5 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar5 = local_30;
  }
  puVar4 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar4 = local_40;
  }
  lVar6 = 0;
  while( true ) {
    uVar1 = *(ushort *)((longlong)puVar4 + lVar6);
    uVar3 = (uint)uVar1;
    uVar2 = *(ushort *)((longlong)puVar5 + lVar6);
    uVar7 = (uint)uVar2;
    if (uVar1 != uVar2) break;
    if (uVar1 == 0) goto LAB_1434a3bd4;
LAB_1434a3ba9:
    lVar6 = lVar6 + 2;
  }
  if ((uVar2 | uVar1) < 0x80) {
    uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
    uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1434a3ba9;
  }
  if ((int)(uVar3 - uVar7) < 0) {
    if (*param_1 == *param_2) {
      uVar3 = param_1[1] - param_2[1];
    }
    else {
      uVar3 = FUN_14002c2bd(*param_1);
    }
    uVar3 = uVar3 >> 0x1f;
    goto LAB_1434a3bd6;
  }
LAB_1434a3bd4:
  uVar3 = 0;
LAB_1434a3bd6:
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434a3c34 FUN_1434a3c34 body=248 status=ok
// SIG undefined FUN_1434a3c34(void)

void FUN_1434a3c34(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1434a3d4e FUN_1434a3d4e body=29 status=ok
// SIG undefined FUN_1434a3d4e(void)

void FUN_1434a3d4e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1434a3d6c FUN_1434a3d6c body=29 status=ok
// SIG undefined FUN_1434a3d6c(void)

undefined8 FUN_1434a3d6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434a3db0 FUN_1434a3db0 body=282 status=ok
// SIG undefined FUN_1434a3db0(void)

undefined8 * FUN_1434a3db0(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1434a3d89);
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



// FUNCTION 1434a3eca FUN_1434a3eca body=129 status=ok
// SIG undefined FUN_1434a3eca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a3eca(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_140335f22(_DAT_000000b0 + 0x10,0xc0,DAT_00000120);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_140335f22(param_1[0x16] + 0x10,param_1 + 0x18,*(undefined1 *)(param_1 + 0x24));
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001434a3f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1434a3f64 FUN_1434a3f64 body=12 status=ok
// SIG undefined FUN_1434a3f64(void)

void FUN_1434a3f64(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001434a3f6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1434a3f70 FUN_1434a3f70 body=29 status=ok
// SIG undefined FUN_1434a3f70(void)

undefined8 FUN_1434a3f70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434a3f8e FUN_1434a3f8e body=282 status=ok
// SIG undefined FUN_1434a3f8e(void)

undefined8 * FUN_1434a3f8e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1434a3d89);
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



// FUNCTION 1434a40a8 FUN_1434a40a8 body=80 status=ok
// SIG undefined FUN_1434a40a8(void)

ulonglong FUN_1434a40a8(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = (ulonglong)DAT_14c7585c8;
  if (param_1[0x15] != 0) {
    uVar2 = FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001434a40ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)*param_1)(param_1,1);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1434a40f8 FUN_1434a40f8 body=52 status=ok
// SIG undefined FUN_1434a40f8(void)

void FUN_1434a40f8(undefined8 *param_1)

{
  FUN_147a186b6(param_1[5],*(undefined4 *)(param_1 + 4),*param_1,param_1[1],
                *(undefined4 *)(param_1 + 2),*(undefined4 *)(param_1 + 3),param_1[6]);
  return;
}



// FUNCTION 1434a4136 FUN_1434a4136 body=29 status=ok
// SIG undefined FUN_1434a4136(void)

void FUN_1434a4136(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1434a4154 FUN_1434a4154 body=29 status=ok
// SIG undefined FUN_1434a4154(void)

undefined8 FUN_1434a4154(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434a4172 FUN_1434a4172 body=282 status=ok
// SIG undefined FUN_1434a4172(void)

undefined8 * FUN_1434a4172(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1434a3d89);
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



// FUNCTION 1434a428c FUN_1434a428c body=121 status=ok
// SIG undefined FUN_1434a428c(void)

void FUN_1434a428c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_147a186b6(param_1[0x1a],*(undefined4 *)(param_1 + 0x19),param_1[0x15],param_1[0x16],
                *(undefined4 *)(param_1 + 0x17),*(undefined4 *)(param_1 + 0x18),param_1[0x1b]);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001434a42fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1434a4348 FUN_1434a4348 body=29 status=ok
// SIG undefined FUN_1434a4348(void)

void FUN_1434a4348(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1434a4366 FUN_1434a4366 body=29 status=ok
// SIG undefined FUN_1434a4366(void)

undefined8 FUN_1434a4366(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434a4384 FUN_1434a4384 body=282 status=ok
// SIG undefined FUN_1434a4384(void)

undefined8 * FUN_1434a4384(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1434a3d89);
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



// FUNCTION 1434a45aa FUN_1434a45aa body=12 status=ok
// SIG undefined FUN_1434a45aa(void)

void FUN_1434a45aa(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001434a45b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1434a45b6 FUN_1434a45b6 body=29 status=ok
// SIG undefined FUN_1434a45b6(void)

undefined8 FUN_1434a45b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434a45d4 FUN_1434a45d4 body=282 status=ok
// SIG undefined FUN_1434a45d4(void)

undefined8 * FUN_1434a45d4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1434a3d89);
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



// FUNCTION 1434a47da FUN_1434a47da body=12 status=ok
// SIG undefined FUN_1434a47da(void)

void FUN_1434a47da(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001434a47e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1434a47e6 FUN_1434a47e6 body=29 status=ok
// SIG undefined FUN_1434a47e6(void)

undefined8 FUN_1434a47e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434a4804 FUN_1434a4804 body=282 status=ok
// SIG undefined FUN_1434a4804(void)

undefined8 * FUN_1434a4804(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1434a3d89);
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



// FUNCTION 1434a491e FUN_1434a491e body=80 status=ok
// SIG undefined FUN_1434a491e(void)

ulonglong FUN_1434a491e(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = (ulonglong)DAT_14c7585c8;
  if (param_1[0x15] != 0) {
    uVar2 = FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001434a4964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)*param_1)(param_1,1);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1434a4992 FUN_1434a4992 body=29 status=ok
// SIG undefined FUN_1434a4992(void)

void FUN_1434a4992(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1434a49b0 FUN_1434a49b0 body=29 status=ok
// SIG undefined FUN_1434a49b0(void)

undefined8 FUN_1434a49b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434a49ce FUN_1434a49ce body=282 status=ok
// SIG undefined FUN_1434a49ce(void)

undefined8 * FUN_1434a49ce(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1434a3d89);
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



// FUNCTION 1434a4b5c FUN_1434a4b5c body=52 status=ok
// SIG undefined FUN_1434a4b5c(void)

void FUN_1434a4b5c(undefined8 *param_1)

{
  FUN_147a186b6(param_1[5],*(undefined4 *)(param_1 + 4),*param_1,param_1[1],
                *(undefined4 *)(param_1 + 2),*(undefined4 *)(param_1 + 3),param_1[6]);
  return;
}



// FUNCTION 1434a4b9a FUN_1434a4b9a body=29 status=ok
// SIG undefined FUN_1434a4b9a(void)

void FUN_1434a4b9a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1434a4bb8 FUN_1434a4bb8 body=29 status=ok
// SIG undefined FUN_1434a4bb8(void)

undefined8 FUN_1434a4bb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434a4bd6 FUN_1434a4bd6 body=282 status=ok
// SIG undefined FUN_1434a4bd6(void)

undefined8 * FUN_1434a4bd6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1434a3d89);
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



// FUNCTION 1434a4cf0 FUN_1434a4cf0 body=121 status=ok
// SIG undefined FUN_1434a4cf0(void)

void FUN_1434a4cf0(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_147a186b6(param_1[0x1a],*(undefined4 *)(param_1 + 0x19),param_1[0x15],param_1[0x16],
                *(undefined4 *)(param_1 + 0x17),*(undefined4 *)(param_1 + 0x18),param_1[0x1b]);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001434a4d5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1434a4d80 FUN_1434a4d80 body=12 status=ok
// SIG undefined FUN_1434a4d80(void)

void FUN_1434a4d80(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001434a4d89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1434a4d8c FUN_1434a4d8c body=29 status=ok
// SIG undefined FUN_1434a4d8c(void)

undefined8 FUN_1434a4d8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434a4daa FUN_1434a4daa body=282 status=ok
// SIG undefined FUN_1434a4daa(void)

undefined8 * FUN_1434a4daa(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1434a3d89);
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



// FUNCTION 1434a4f0c FUN_1434a4f0c body=29 status=ok
// SIG undefined FUN_1434a4f0c(void)

undefined8 FUN_1434a4f0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434a4f3e FUN_1434a4f3e body=85 status=ok
// SIG undefined FUN_1434a4f3e(void)

void FUN_1434a4f3e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a899bf0;
  return;
}



// FUNCTION 1434a4f94 FUN_1434a4f94 body=85 status=ok
// SIG undefined FUN_1434a4f94(void)

void FUN_1434a4f94(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a899bf0;
  return;
}



// FUNCTION 1434a4fea FUN_1434a4fea body=118 status=ok
// SIG undefined FUN_1434a4fea(void)

void FUN_1434a4fea(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a899bf0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434a5051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1434a5060 FUN_1434a5060 body=81 status=ok
// SIG undefined FUN_1434a5060(void)

void FUN_1434a5060(void)

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



// FUNCTION 1434a50b2 FUN_1434a50b2 body=83 status=ok
// SIG undefined FUN_1434a50b2(void)

undefined8 FUN_1434a50b2(void)

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



// FUNCTION 1434a5106 FUN_1434a5106 body=228 status=ok
// SIG undefined FUN_1434a5106(void)

void FUN_1434a5106(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_88 = 0x400000000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0xffffffff;
  local_3c = 0xff;
  local_3a = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_108 = &local_f8;
  FUN_1458895bc(param_1[1] + 0x90,*param_1,*(undefined4 *)((longlong)param_1 + 0x14),
                *(undefined1 *)(param_1 + 2));
  FUN_140ba0b60(*param_1,param_2,&local_f8);
  (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434a51f6 FUN_1434a51f6 body=12 status=ok
// SIG undefined FUN_1434a51f6(void)

void FUN_1434a51f6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001434a51ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1434a5202 FUN_1434a5202 body=29 status=ok
// SIG undefined FUN_1434a5202(void)

undefined8 FUN_1434a5202(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434a5220 FUN_1434a5220 body=282 status=ok
// SIG undefined FUN_1434a5220(void)

undefined8 * FUN_1434a5220(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1434a3d89);
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



// FUNCTION 1434a533a FUN_1434a533a body=292 status=ok
// SIG undefined FUN_1434a533a(void)

void FUN_1434a533a(undefined8 *param_1)

{
  int *piVar1;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  local_88 = 0x400000000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0xffffffff;
  local_3c = 0xff;
  local_3a = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_108 = &local_f8;
  FUN_1458895bc(param_1[0x16] + 0x90,param_1[0x15],*(undefined4 *)((longlong)param_1 + 0xbc),
                *(undefined1 *)(param_1 + 0x17));
  FUN_140ba0b60(param_1[0x15],&DAT_14ca85100,&local_f8);
  (**(code **)(*(longlong *)param_1[0x15] + 0x18))((longlong *)param_1[0x15],&DAT_14ca85100);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434a547a FUN_1434a547a body=29 status=ok
// SIG undefined FUN_1434a547a(void)

void FUN_1434a547a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1434a5498 FUN_1434a5498 body=29 status=ok
// SIG undefined FUN_1434a5498(void)

undefined8 FUN_1434a5498(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434a54b6 FUN_1434a54b6 body=282 status=ok
// SIG undefined FUN_1434a54b6(void)

undefined8 * FUN_1434a54b6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1434a3d89);
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



// FUNCTION 1434a55d0 FUN_1434a55d0 body=106 status=ok
// SIG undefined FUN_1434a55d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a55d0(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_147d4ff5d(_DAT_000000a8,0xb0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_147d4ff5d(param_1[0x15],param_1 + 0x16);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001434a5630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1434a563a FUN_1434a563a body=265 status=ok
// SIG undefined FUN_1434a563a(void)

void FUN_1434a563a(undefined4 *param_1,longlong param_2,int *param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 unaff_RBX;
  bool bVar2;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar1 = *param_4;
  if (*param_3 < (int)(*(longlong **)(param_1 + 2))[1]) {
    bVar2 = *(longlong *)(**(longlong **)(param_1 + 2) + 0x40 + (longlong)*param_3 * 0xa0) != 0;
  }
  else {
    bVar2 = false;
  }
  local_88 = 0x400000000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0xffffffff;
  local_3c = 0xff;
  local_3a = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_108 = &local_f8;
  FUN_1458895bc(param_2 + 0x90,0,*param_1,bVar2);
  local_108 = (undefined8 *)param_5;
  FUN_147ba2f38(DAT_14c760db4,0,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,
                &local_f8);
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434a5744 FUN_1434a5744 body=104 status=ok
// SIG undefined FUN_1434a5744(void)

void FUN_1434a5744(undefined8 *param_1)

{
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 100) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x66) = 0;
  param_1[0xd] = 0;
  param_1[0xb] = &PTR_FUN_14aa57ea0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = &PTR_FUN_14a3d4750;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x13] = 0;
  return;
}



// FUNCTION 1434a57ac FUN_1434a57ac body=282 status=ok
// SIG undefined FUN_1434a57ac(void)

void FUN_1434a57ac(int *param_1,longlong param_2,int *param_3,undefined1 *param_4,undefined8 param_5
                  )

{
  undefined1 uVar1;
  int iVar2;
  undefined8 unaff_RBX;
  bool bVar3;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar1 = *param_4;
  if (*param_3 < (int)(*(longlong **)(param_1 + 2))[1]) {
    bVar3 = *(longlong *)(**(longlong **)(param_1 + 2) + 0x40 + (longlong)*param_3 * 0xa0) != 0;
  }
  else {
    bVar3 = false;
  }
  iVar2 = *(int *)(param_2 + 0x108) + -1;
  if (*param_1 < *(int *)(param_2 + 0x108)) {
    iVar2 = *param_1;
  }
  local_88 = 0x400000000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0xffffffff;
  local_3c = 0xff;
  local_3a = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_108 = &local_f8;
  FUN_147d51df2(param_2 + 0x90,0,iVar2,bVar3);
  local_108 = (undefined8 *)param_5;
  FUN_147ba2f38(DAT_14c760db4,0,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,
                &local_f8);
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434a58e8 FUN_1434a58e8 body=12 status=ok
// SIG undefined FUN_1434a58e8(void)

void FUN_1434a58e8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001434a58f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1434a58f4 FUN_1434a58f4 body=29 status=ok
// SIG undefined FUN_1434a58f4(void)

undefined8 FUN_1434a58f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434a5912 FUN_1434a5912 body=282 status=ok
// SIG undefined FUN_1434a5912(void)

undefined8 * FUN_1434a5912(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1434a3d89);
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



// FUNCTION 1434a5a94 FUN_1434a5a94 body=12 status=ok
// SIG undefined FUN_1434a5a94(void)

void FUN_1434a5a94(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001434a5a9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1434a5aa0 FUN_1434a5aa0 body=29 status=ok
// SIG undefined FUN_1434a5aa0(void)

undefined8 FUN_1434a5aa0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434a5abe FUN_1434a5abe body=282 status=ok
// SIG undefined FUN_1434a5abe(void)

undefined8 * FUN_1434a5abe(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1434a3d89);
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



// FUNCTION 1434a5bd8 FUN_1434a5bd8 body=135 status=ok
// SIG undefined FUN_1434a5bd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a5bd8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434a5c55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*_DAT_000000b0 + 0x268))(_DAT_000000b0,&DAT_14ca85100,DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  (**(code **)(*(longlong *)param_1[0x16] + 0x268))
            ((longlong *)param_1[0x16],&DAT_14ca85100,*(undefined1 *)(param_1 + 0x15));
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001434a5c26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1434a5c60 FUN_1434a5c60 body=280 status=ok
// SIG undefined FUN_1434a5c60(void)

longlong * FUN_1434a5c60(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *param_2;
  lVar5 = (longlong)iVar1;
  lVar2 = *param_1;
  if (((lVar5 < 0) || (*(int *)(lVar2 + 0x628) <= iVar1)) ||
     (plVar7 = *(longlong **)(*(longlong *)(lVar2 + 0x620) + lVar5 * 8), plVar7 == (longlong *)0x0))
  {
    lVar6 = *(longlong *)(lVar2 + 0x660);
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
      lVar6 = *(longlong *)(lVar2 + 0x660);
LAB_1434a5cb8:
      if ((lVar6 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar6);
      }
      if (((-1 < iVar1) && (iVar1 < *(int *)(lVar6 + 0x160))) &&
         (plVar7 = *(longlong **)(*(longlong *)(lVar6 + 0x158) + lVar5 * 0x30),
         plVar7 != (longlong *)0x0)) goto LAB_1434a5ced;
    }
    else if (lVar6 != 0) goto LAB_1434a5cb8;
    plVar7 = (longlong *)0x0;
  }
  else {
LAB_1434a5ced:
    FUN_1400337aa(plVar7);
    cVar3 = FUN_1447e525e(lVar2,0);
    if ((cVar3 != '\0') && (DAT_14c761bc8 != 0)) {
      local_38 = 0;
      uStack_30 = 0;
      plVar4 = (longlong *)(**(code **)(*plVar7 + 0x360))(plVar7);
      if (plVar4 != (longlong *)0x0) {
        plVar7 = plVar4;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar7;
}



// FUNCTION 1434a5d7a FUN_1434a5d7a body=51 status=ok
// SIG undefined FUN_1434a5d7a(void)

void FUN_1434a5d7a(longlong *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434a5da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1434a5db8 FUN_1434a5db8 body=12 status=ok
// SIG undefined FUN_1434a5db8(void)

void FUN_1434a5db8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001434a5dc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1434a5dc4 FUN_1434a5dc4 body=29 status=ok
// SIG undefined FUN_1434a5dc4(void)

undefined8 FUN_1434a5dc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434a5de2 FUN_1434a5de2 body=282 status=ok
// SIG undefined FUN_1434a5de2(void)

undefined8 * FUN_1434a5de2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1434a3d89);
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



// FUNCTION 1434a5efc FUN_1434a5efc body=98 status=ok
// SIG undefined FUN_1434a5efc(void)

void FUN_1434a5efc(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)param_1[0x15] + 0x20))();
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001434a5f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1434a5f76 FUN_1434a5f76 body=12 status=ok
// SIG undefined FUN_1434a5f76(void)

void FUN_1434a5f76(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001434a5f7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1434a5f82 FUN_1434a5f82 body=29 status=ok
// SIG undefined FUN_1434a5f82(void)

undefined8 FUN_1434a5f82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434a5fa0 FUN_1434a5fa0 body=282 status=ok
// SIG undefined FUN_1434a5fa0(void)

undefined8 * FUN_1434a5fa0(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1434a3d89);
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



// FUNCTION 1434a60ba FUN_1434a60ba body=80 status=ok
// SIG undefined FUN_1434a60ba(void)

ulonglong FUN_1434a60ba(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = (ulonglong)DAT_14c7585c8;
  if (param_1[0x15] != 0) {
    uVar2 = FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001434a6100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)*param_1)(param_1,1);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1434a610a FUN_1434a610a body=3014 status=ok
// SIG undefined FUN_1434a610a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a610a(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **ppuStack_80;
  code *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  char *local_60;
  int local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_60,&DAT_14cad2bec);
  if (cVar2 == '\0') {
    _DAT_14cad2bec = 0;
    uRam000000014cad2bf4 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_78 = (code *)0x1;
  ppuStack_80 = &PTR_FUN_14a87c8c0;
  local_88 = (code *)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a87c910,2,&PTR_FUN_14a87c8e0);
  local_60 = (char *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *(undefined ***)local_60 = &PTR_LAB_14a1e1a40;
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
  *(longlong *)(local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_14a1e19d0;
  *(code **)(local_60 + 0x18) = FUN_147a183c8;
  local_88 = (code *)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14156bb80(&DAT_14cad2d30,L"r.SkylightRecapture",
                L"Updates all stationary and movable skylights, useful for debugging the capture pipeline"
                ,&local_60);
  if (local_58 == 0) {
LAB_1434a6274:
    if (local_60 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_1434a6274;
  }
  atexit(FUN_143499b1e);
  local_88 = (code *)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cad2d48,L"r.SkylightUpdateEveryFrame",&DAT_14cad2d40,
                L"Whether to update all skylights every frame.  Useful for debugging.");
  atexit(FUN_143499b63);
  local_88 = (code *)CONCAT44(local_88._4_4_,0x60);
  FUN_1415c789c(&DAT_14cad2d58,L"r.SkylightIntensityMultiplier",&DAT_14c76144c,
                L"Intensity scale on Stationary and Movable skylights.  This is useful to control overall lighting contrast in dynamically lit games with scalability levels which disable Ambient Occlusion.  For example, if medium quality disables SSAO and DFAO, reduce skylight intensity."
               );
  atexit(FUN_143499ba8);
  local_60 = (char *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *(undefined ***)local_60 = &PTR_LAB_149e170a0;
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
  *(longlong *)(local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_149e17030;
  *(code **)(local_60 + 0x18) = FUN_147a185a4;
  ppuStack_80 = (undefined **)CONCAT44(ppuStack_80._4_4_,0x40);
  local_88 = (code *)&local_60;
  FUN_141703554(&DAT_14cad2d68,L"r.SkyLight.RealTimeReflectionCapture",&DAT_14c761450,
                L"Make sure the sky light real time capture is not run on platform where it is considered out of budget. Cannot be changed at runtime."
               );
  if (local_58 == 0) {
LAB_1434a63c9:
    if (local_60 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_1434a63c9;
  }
  atexit(FUN_143499bed);
  local_88 = (code *)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cad2d78,L"r.SkyLight.CubemapMaxResolution",&DAT_14c761454,
                L"Force max resolution of skylight cubemap (default to -1: takes default property value of USkyLightComponent::CubeMapResolution)"
               );
  atexit(FUN_143499c32);
  DAT_14cad2db0 = 0;
  _DAT_14cad2db8 = 0;
  atexit((_func_5014 *)&LAB_14349a0c6);
  DAT_14cad2dc0 = 0;
  _DAT_14cad2dc8 = 0;
  atexit((_func_5014 *)&LAB_14349a0d7);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cad2d88);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cad2d88,4000);
  atexit((_func_5014 *)&LAB_14349a0e8);
  local_78 = (code *)0x0;
  local_88 = (code *)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a87df80,1,0);
  ppuStack_80 = &PTR_FUN_14a889120;
  local_78 = (code *)0x2;
  local_88 = (code *)0x3;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8891e0,2,&PTR_FUN_14a889160);
  DAT_14cad3298 = 0;
  DAT_14cad32a0 = DAT_14c8464e0;
  DAT_14cad32a8 = DAT_14c8464e8;
  DAT_14cad32b0 = DAT_14c8464f0;
  _DAT_14cad32b8 = DAT_14c8462d8;
  uRam000000014cad32c0 = DAT_14c8462e0;
  DAT_14cad32c8 = DAT_14c8462e8;
  DAT_14cad32d0 = DAT_14c8462d8;
  DAT_14cad32d8 = DAT_14c8462e0;
  DAT_14cad32e0 = DAT_14c8462e8;
  DAT_14cad32e8 = 2;
  DAT_14cad32f0 = 0;
  _DAT_14cad3300 = DAT_14c8463d0;
  uRam000000014cad3308 = DAT_14c8463d8;
  _DAT_14cad3310 = DAT_14c8463e0;
  uRam000000014cad3318 = DAT_14c8463e8;
  DAT_14cad3360 = 0;
  _DAT_14cad3350 = 0;
  uRam000000014cad3358 = 0;
  _DAT_14cad3340 = 0;
  uRam000000014cad3348 = 0;
  _DAT_14cad3330 = 0;
  uRam000000014cad3338 = 0;
  _DAT_14cad3320 = 0;
  uRam000000014cad3328 = 0;
  _DAT_14cad3370 = 0;
  _DAT_14cad3378 = (undefined4)DAT_14c846510;
  uRam000000014cad337c = DAT_14c846510._4_4_;
  uRam000000014cad3380 = (undefined4)DAT_14c846518;
  uRam000000014cad3384 = DAT_14c846518._4_4_;
  DAT_14cad3388 = DAT_14c846520;
  _DAT_14cad3390 = 0;
  uRam000000014cad3398 = 0;
  _DAT_14cad33a0 = 0;
  uRam000000014cad33a8 = 0;
  _DAT_14cad33b0 = 0;
  uRam000000014cad33b8 = 0;
  DAT_14cad33c0 = 0;
  local_88 = (code *)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cad33c8,L"r.SplineMesh.NoRecreateProxy",&DAT_14c761458,
                L"Optimization. If true, spline mesh proxies will not be recreated every time they are changed. They are simply updated."
               );
  atexit(FUN_14349c94e);
  local_60 = (char *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *(undefined ***)local_60 = &PTR_LAB_149e170a0;
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
  *(longlong *)(local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_14a899bf0;
  ppuStack_80 = (undefined **)((ulonglong)ppuStack_80 & 0xffffffff00000000);
  local_88 = (code *)&local_60;
  FUN_141703554(&DAT_14cad33d8,L"r.SplineMesh.RenderNanite",&DAT_14c76145c,
                L"When true, allows spline meshes to render as Nanite when enabled on the mesh (otherwise uses fallback mesh)."
               );
  if (local_58 == 0) {
LAB_1434a6698:
    if (local_60 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_1434a6698;
  }
  atexit(FUN_14349c993);
  local_68 = &LAB_14370c23a;
  local_70 = &LAB_1417f15d4;
  local_78 = FUN_14349c9d8;
  ppuStack_80 = (undefined **)&LAB_14349cf83;
  local_88 = FUN_14349cf9c;
  FUN_141585c60(&DAT_14cad33e8,L"FSplineMeshVertexFactory",L"/Engine/Private/LocalVertexFactory.ush"
                ,0x66be);
  atexit((_func_5014 *)&LAB_14349cff9);
  local_78 = (code *)0x1;
  ppuStack_80 = &PTR_FUN_14a88c8d0;
  local_88 = (code *)0x2;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a88c940,1,&PTR_FUN_14a88c8f0);
  local_78 = (code *)0x0;
  local_88 = (code *)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a88d2b0,1,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = (code *)0x0;
  local_88 = (code *)0x4;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8903d0,1,&PTR_FUN_14a890330);
  local_88._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14cad36f0,L"r.KeepPreCulledIndicesThreshold",&DAT_14c761460,&DAT_149dfb77a);
  atexit(FUN_14349ec44);
  local_88._0_4_ = 0x60;
  FUN_141471170(&DAT_14cad3710,L"r.KeepOverrideVertexColorsOnCPU",&DAT_14c761464,
                L"Keeps a CPU copy of override vertex colors.  May be required for some blueprints / object spawning."
               );
  atexit(FUN_14349f0a1);
  local_60 = (char *)CONCAT44(local_60._4_4_,1);
  local_88._0_4_ = 0;
  FUN_14078dbce(&DAT_14cad3720,L"r.RayTracing.Geometry.Text",&local_60,
                L"Include text meshes in ray tracing effects (default = 1 (text meshes enabled in ray tracing))"
               );
  atexit(FUN_14349f340);
  local_60 = (char *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *(undefined ***)local_60 = &PTR_LAB_14a1e1a40;
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
  *(longlong *)(local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_14a1e19d0;
  *(code **)(local_60 + 0x18) = FUN_14349f9b5;
  local_88 = (code *)((ulonglong)local_88._4_4_ << 0x20);
  FUN_14156bb80(&DAT_14cad37c0,L"gbx.ListTextRenderComp",
                L"Will list all currently loaded text render components and their owner",&local_60);
  if (local_58 != 0) {
    if (local_60 == (char *)0x0) goto LAB_1434a6915;
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_1434a6915:
  atexit(FUN_1434a00a9);
  ppuStack_80 = &PTR_FUN_14a893410;
  local_88 = (code *)0x0;
  local_78 = (code *)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a893430,2,0);
  local_78 = (code *)0x0;
  local_88 = (code *)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a894260,1,0);
  local_78 = (code *)0x0;
  local_88 = (code *)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a894770,1,0);
  local_78 = (code *)0x0;
  local_88 = (code *)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a894d00,1,0);
  local_60 = "Immediate";
  local_58 = 9;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  _DAT_14cad3940 = (ulonglong)uVar3;
  local_60 = "EndOfFrameUpdate";
  local_58 = 0x10;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cad3ba0 = (ulonglong)uVar3;
  local_60 = (char *)((ulonglong)local_60 & 0xffffffff00000000);
  local_88._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14cad3948,L"r.MeshStreaming",&local_60,
                L"When enabled mesh LODs will stream in based on what is visible on screen.");
  atexit(FUN_1434a1ac3);
  local_88 = (code *)CONCAT44(local_88._4_4_,0x24);
  FUN_141471170(&DAT_14cad3960,L"r.Nanite.CoarseMeshStreaming",&DAT_14cad3970,
                L"Generates 2 Nanite coarse mesh LODs and dynamically streams in the higher quality LOD depending on TLAS usage of the proxy.\n"
               );
  atexit(FUN_1434a1b08);
  DAT_14cad3ba8 = 0;
  _DAT_14cad3bb0 = 0;
  atexit((_func_5014 *)&LAB_1434a1b4d);
  DAT_14cad3978 = 0;
  _DAT_14cad3980 = 0;
  atexit((_func_5014 *)&LAB_1434a1b5e);
  DAT_14cad3988 = 0;
  _DAT_14cad3990 = 0;
  atexit((_func_5014 *)&LAB_1434a1b6f);
  DAT_14cad3998 = 0;
  _DAT_14cad39a0 = 0;
  atexit((_func_5014 *)&LAB_1434a1b80);
  local_60 = "bone";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&DAT_14cad39d8,L"ClientSetLocation",1);
  FUN_1446f470e(&DAT_14cad39e8,L"ClientSetRotation",1);
  FUN_1446f470e(&DAT_14cad3a68,L"ReceiveInstigatedAnyDamage",1);
  FUN_1446f470e(&DAT_14cad3a78,L"ReceivePossess",1);
  FUN_1446f470e(&DAT_14cad3a88,L"ReceiveUnPossess",1);
  local_78 = (code *)0x0;
  local_88 = (code *)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a8976d0,1,0);
  local_88 = (code *)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cad3b10,L"Controller.AlwaysNotifyClientOnControllerChange",&DAT_14c76146c,
                L"If true, OnRep_Controller and NotifyControllerChanged are always called on the client when a pawn\'s controller changes.\nIf false, use backward compatible controller notification logic that does not handle networking properly."
               );
  atexit(FUN_1434a2343);
  local_88 = (code *)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cad3b20,L"Controller.InvalidControlRotationMagnitude",&DAT_14c761468,
                L"If any component of an FRotator passed to SetControlRotation is larger than this magnitude, ignore the value. Huge values are usually from uninitialized variables and can cause NaN/Inf to propagate later."
               );
  atexit(FUN_1434a2388);
  local_88 = (code *)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cad3b38,L"Controller.IsPushBased",&DAT_14cad3b30,
                L"If true, AController\'s replicated properties will use push-based networking, and will therefore need to be marked dirty when changed."
               );
  atexit(FUN_1434a23cd);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434a6cd4 FUN_1434a6cd4 body=69 status=ok
// SIG undefined FUN_1434a6cd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a6cd4(void)

{
  _DAT_14cad3bf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a6d16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3bf8,1);
  return;
}



// FUNCTION 1434a6d19 FUN_1434a6d19 body=69 status=ok
// SIG undefined FUN_1434a6d19(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a6d19(void)

{
  _DAT_14cad3c00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a6d5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3c08,1);
  return;
}



// FUNCTION 1434a6d5e FUN_1434a6d5e body=69 status=ok
// SIG undefined FUN_1434a6d5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a6d5e(void)

{
  _DAT_14cad3c10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a6da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3c18,1);
  return;
}



// FUNCTION 1434a6da3 FUN_1434a6da3 body=69 status=ok
// SIG undefined FUN_1434a6da3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a6da3(void)

{
  _DAT_14cad3c20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a6de5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3c28,1);
  return;
}



// FUNCTION 1434a6de8 FUN_1434a6de8 body=69 status=ok
// SIG undefined FUN_1434a6de8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a6de8(void)

{
  _DAT_14cad3c30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a6e2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3c38,1);
  return;
}



// FUNCTION 1434a6e2d FUN_1434a6e2d body=69 status=ok
// SIG undefined FUN_1434a6e2d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a6e2d(void)

{
  _DAT_14cad3c40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a6e6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3c48,1);
  return;
}



// FUNCTION 1434a6e72 FUN_1434a6e72 body=69 status=ok
// SIG undefined FUN_1434a6e72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a6e72(void)

{
  _DAT_14cad3c50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a6eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3c58,1);
  return;
}



// FUNCTION 1434a6eb7 FUN_1434a6eb7 body=69 status=ok
// SIG undefined FUN_1434a6eb7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a6eb7(void)

{
  _DAT_14cad3c60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a6ef9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3c68,1);
  return;
}



// FUNCTION 1434a6efc FUN_1434a6efc body=69 status=ok
// SIG undefined FUN_1434a6efc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a6efc(void)

{
  _DAT_14cad3c70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a6f3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3c78,1);
  return;
}



// FUNCTION 1434a6f41 FUN_1434a6f41 body=69 status=ok
// SIG undefined FUN_1434a6f41(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a6f41(void)

{
  _DAT_14cad3c80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a6f83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3c88,1);
  return;
}



// FUNCTION 1434a6f86 FUN_1434a6f86 body=69 status=ok
// SIG undefined FUN_1434a6f86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a6f86(void)

{
  _DAT_14cad3c90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a6fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3c98,1);
  return;
}



// FUNCTION 1434a6fcb FUN_1434a6fcb body=69 status=ok
// SIG undefined FUN_1434a6fcb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a6fcb(void)

{
  _DAT_14cad3ca0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a700d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3ca8,1);
  return;
}



// FUNCTION 1434a7010 FUN_1434a7010 body=69 status=ok
// SIG undefined FUN_1434a7010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a7010(void)

{
  _DAT_14cad3cb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a7052. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3cb8,1);
  return;
}



// FUNCTION 1434a7055 FUN_1434a7055 body=69 status=ok
// SIG undefined FUN_1434a7055(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a7055(void)

{
  _DAT_14cad3cc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a7097. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3cc8,1);
  return;
}



// FUNCTION 1434a709a FUN_1434a709a body=69 status=ok
// SIG undefined FUN_1434a709a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a709a(void)

{
  _DAT_14cad3cd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a70dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3cd8,1);
  return;
}



// FUNCTION 1434a70df FUN_1434a70df body=69 status=ok
// SIG undefined FUN_1434a70df(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a70df(void)

{
  _DAT_14cad3ce0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a7121. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3ce8,1);
  return;
}



// FUNCTION 1434a7124 FUN_1434a7124 body=69 status=ok
// SIG undefined FUN_1434a7124(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a7124(void)

{
  _DAT_14cad3cf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a7166. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3cf8,1);
  return;
}



// FUNCTION 1434a7169 FUN_1434a7169 body=69 status=ok
// SIG undefined FUN_1434a7169(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a7169(void)

{
  _DAT_14cad3d00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a71ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3d08,1);
  return;
}



// FUNCTION 1434a71ae FUN_1434a71ae body=69 status=ok
// SIG undefined FUN_1434a71ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a71ae(void)

{
  _DAT_14cad3d10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a71f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3d18,1);
  return;
}



// FUNCTION 1434a71f3 FUN_1434a71f3 body=69 status=ok
// SIG undefined FUN_1434a71f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a71f3(void)

{
  _DAT_14cad3d20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a7235. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad3d28,1);
  return;
}



// FUNCTION 1434a7268 FUN_1434a7268 body=161 status=ok
// SIG undefined FUN_1434a7268(void)

undefined8 * FUN_1434a7268(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = FUN_145f97960();
  if (lVar3 == 0) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 6;
    FUN_147a4d72e(param_1,6,0);
    puVar2 = (undefined8 *)*param_1;
    *puVar2 = 0x447a000000000000;
    puVar2[1] = 0x4500000043000000;
    puVar2[2] = 0x4580000043800000;
    puVar2[3] = 0x4600000044000000;
    puVar2[4] = 0x4680000044800000;
    puVar2[5] = 0x45000000;
  }
  else {
    *param_1 = 0;
    iVar1 = *(int *)(lVar3 + 0x38);
    _Src = *(void **)(lVar3 + 0x30);
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147a4d72e(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
    }
  }
  return param_1;
}



// FUNCTION 1434a7309 FUN_1434a7309 body=378 status=ok
// SIG undefined FUN_1434a7309(void)

float FUN_1434a7309(char *param_1,char *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = *(float *)(param_2 + 4);
  fVar3 = *(float *)(param_1 + 4);
  fVar6 = fVar2 - fVar3;
  if (fVar6 <= 0.0) {
    fVar5 = *(float *)(param_1 + 8);
  }
  else if (*param_1 == '\x01') {
    if (param_3 < fVar2) {
      param_2 = param_1;
    }
    fVar5 = *(float *)(param_2 + 8);
  }
  else {
    fVar4 = (param_3 - fVar3) / fVar6;
    fVar5 = *(float *)(param_1 + 8);
    fVar1 = *(float *)(param_2 + 8);
    if (*param_1 == '\0') {
      fVar5 = fVar4 * (fVar1 - fVar5) + fVar5;
    }
    else if (((byte)param_1[2] < 2) && ((param_2[2] & 0xfdU) == 0)) {
      fVar2 = *(float *)(param_1 + 0x14) * fVar6 * 0.33333334 + fVar5;
      fVar3 = fVar1 - fVar6 * *(float *)(param_2 + 0xc) * 0.33333334;
      fVar6 = (fVar3 - fVar2) * fVar4 + fVar2;
      fVar5 = (fVar2 - fVar5) * fVar4 + fVar5;
      fVar5 = (fVar6 - fVar5) * fVar4 + fVar5;
      fVar5 = (((((fVar1 - fVar3) * fVar4 + fVar3) - fVar6) * fVar4 + fVar6) - fVar5) * fVar4 +
              fVar5;
    }
    else {
      fVar5 = (float)FUN_147a3e1e7(fVar5,fVar3,*(undefined4 *)(param_1 + 0x14),
                                   *(undefined4 *)(param_1 + 0x18),param_1[2],fVar1,fVar2,
                                   *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),
                                   param_2[2],param_3);
    }
  }
  return fVar5;
}



// FUNCTION 1434a7483 FUN_1434a7483 body=192 status=ok
// SIG undefined FUN_1434a7483(void)

void FUN_1434a7483(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14a89f470;
  puVar1[5] = &PTR_FUN_14a89f720;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0x7f7fffff;
  *(undefined2 *)((longlong)puVar1 + 0x9c) = 0x404;
  puVar1[6] = &DAT_14a176f00;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  return;
}



// FUNCTION 1434a7543 FUN_1434a7543 body=258 status=ok
// SIG undefined FUN_1434a7543(void)

void FUN_1434a7543(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = (undefined8 *)*param_1;
  *puVar2 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar2 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar2;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar2 = &PTR_FUN_14a89ff60;
  puVar2[5] = &PTR_FUN_14a8a0210;
  lVar3 = 0;
  do {
    *(undefined8 *)((longlong)puVar2 + lVar3 + 0x58) = 0;
    *(undefined4 *)((longlong)puVar2 + lVar3 + 0x60) = 0;
    puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + 0x38);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)puVar2 + lVar3 + 100) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar2 + lVar3 + 0x6c) = 0;
    *(undefined8 *)((longlong)puVar2 + lVar3 + 0x78) = 0;
    *(undefined4 *)((longlong)puVar2 + lVar3 + 0x80) = 0;
    puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + 0x88);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)puVar2 + lVar3 + 0x98) = 0x7f7fffff;
    *(undefined2 *)((longlong)puVar2 + lVar3 + 0x9c) = 0x404;
    *(undefined **)((longlong)puVar2 + lVar3 + 0x30) = &DAT_14a176f00;
    puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + 0xa0);
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar3 = lVar3 + 0x80;
  } while (lVar3 != 0x200);
  puVar2[0x46] = 0x3f80000000000000;
  puVar2[0x47] = &DAT_3f8000003f800000;
  puVar2[0x48] = 0;
  *(undefined4 *)(puVar2 + 0x49) = 0x3f800000;
  return;
}



// FUNCTION 1434a7646 FUN_1434a7646 body=5 status=ok
// SIG undefined FUN_1434a7646(void)

longlong FUN_1434a7646(longlong param_1)

{
  return param_1 + 0x70;
}



// FUNCTION 1434a764b FUN_1434a764b body=61 status=ok
// SIG undefined FUN_1434a764b(void)

void FUN_1434a764b(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = &DAT_14cad4630;
  lVar3 = -0x300;
  do {
    if (plVar2[-4] != 0) {
      plVar1 = (longlong *)plVar2[-2];
      if ((longlong *)plVar2[-2] == (longlong *)0x0) {
        plVar1 = plVar2;
      }
      (**(code **)(*plVar1 + 0x10))();
    }
    plVar2 = plVar2 + -8;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 1434a7688 FUN_1434a7688 body=61 status=ok
// SIG undefined FUN_1434a7688(void)

void FUN_1434a7688(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = &DAT_14cad4930;
  lVar3 = -0x300;
  do {
    if (plVar2[-4] != 0) {
      plVar1 = (longlong *)plVar2[-2];
      if ((longlong *)plVar2[-2] == (longlong *)0x0) {
        plVar1 = plVar2;
      }
      (**(code **)(*plVar1 + 0x10))();
    }
    plVar2 = plVar2 + -8;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 1434a76c5 FUN_1434a76c5 body=55 status=ok
// SIG undefined FUN_1434a76c5(void)

void FUN_1434a76c5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad49b8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad49b8 = FUN_14171c317(FUN_1463c1e7c,uVar1,L"ECurveTableMode");
  }
  return;
}



// FUNCTION 1434a76fc FUN_1434a76fc body=69 status=ok
// SIG undefined FUN_1434a76fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a76fc(void)

{
  _DAT_14cad49f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a773e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad4a00,1);
  return;
}



// FUNCTION 1434a7741 FUN_1434a7741 body=41 status=ok
// SIG undefined FUN_1434a7741(void)

void FUN_1434a7741(void)

{
  DAT_14cad4a50 = 0;
  if (DAT_14cad4a48 != 0) {
    FUN_1400020a8();
  }
  FUN_145d633b6();
  return;
}



// FUNCTION 1434a778a FUN_1434a778a body=160 status=ok
// SIG undefined FUN_1434a778a(void)

longlong FUN_1434a778a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100))) {
    uVar2 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar3 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x70);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x78) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar2 << 0x13 | uVar2) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar4 != -1) {
      while (plVar1 = (longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 0x18),
            *plVar1 != param_2) {
        iVar4 = (int)plVar1[2];
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
        return plVar1[1];
      }
    }
  }
  return 0;
}



// FUNCTION 1434a782a FUN_1434a782a body=102 status=ok
// SIG undefined FUN_1434a782a(void)

ulonglong FUN_1434a782a(longlong *param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  undefined4 uVar3;
  
  if (*param_1 != 0) {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    plVar1 = (longlong *)FUN_1434a778a(*param_1,param_1[1],param_4,1);
    if (param_3 != (undefined4 *)0x0 && plVar1 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar1 + 0x88))(plVar1,param_2,0);
      *param_3 = uVar3;
      goto LAB_1434a7882;
    }
  }
  uVar2 = 0;
LAB_1434a7882:
  return uVar2 & 0xffffffff;
}



// FUNCTION 1434a7893 FUN_1434a7893 body=69 status=ok
// SIG undefined FUN_1434a7893(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a7893(void)

{
  _DAT_14cad4ae8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a78d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad4af0,1);
  return;
}



// FUNCTION 1434a78d8 FUN_1434a78d8 body=69 status=ok
// SIG undefined FUN_1434a78d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a78d8(void)

{
  _DAT_14cad4b00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a791a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad4b08,1);
  return;
}



// FUNCTION 1434a791d FUN_1434a791d body=69 status=ok
// SIG undefined FUN_1434a791d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a791d(void)

{
  _DAT_14cad4b18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a795f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad4b20,1);
  return;
}



// FUNCTION 1434a7962 FUN_1434a7962 body=69 status=ok
// SIG undefined FUN_1434a7962(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a7962(void)

{
  _DAT_14cad4b30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a79a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad4b38,1);
  return;
}



// FUNCTION 1434a79a7 FUN_1434a79a7 body=69 status=ok
// SIG undefined FUN_1434a79a7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a79a7(void)

{
  _DAT_14cad4b40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a79e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad4b48,1);
  return;
}



// FUNCTION 1434a79ec FUN_1434a79ec body=69 status=ok
// SIG undefined FUN_1434a79ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a79ec(void)

{
  _DAT_14cad4b50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a7a2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad4b58,1);
  return;
}



// FUNCTION 1434a7a31 FUN_1434a7a31 body=69 status=ok
// SIG undefined FUN_1434a7a31(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a7a31(void)

{
  _DAT_14cad4b60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a7a73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad4b68,1);
  return;
}



// FUNCTION 1434a7a76 FUN_1434a7a76 body=69 status=ok
// SIG undefined FUN_1434a7a76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a7a76(void)

{
  _DAT_14cad4b78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a7ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad4b80,1);
  return;
}



// FUNCTION 1434a7abb FUN_1434a7abb body=69 status=ok
// SIG undefined FUN_1434a7abb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a7abb(void)

{
  _DAT_14cad4b88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a7afd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad4b90,1);
  return;
}



// FUNCTION 1434a7b00 FUN_1434a7b00 body=69 status=ok
// SIG undefined FUN_1434a7b00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a7b00(void)

{
  _DAT_14cad4b98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a7b42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad4ba0,1);
  return;
}



// FUNCTION 1434a7b45 FUN_1434a7b45 body=69 status=ok
// SIG undefined FUN_1434a7b45(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a7b45(void)

{
  _DAT_14cad4ba8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a7b87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad4bb0,1);
  return;
}



// FUNCTION 1434a7b8a FUN_1434a7b8a body=69 status=ok
// SIG undefined FUN_1434a7b8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a7b8a(void)

{
  _DAT_14cad4bc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a7bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad4bc8,1);
  return;
}



// FUNCTION 1434a7bcf FUN_1434a7bcf body=69 status=ok
// SIG undefined FUN_1434a7bcf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434a7bcf(void)

{
  _DAT_14cad4bd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434a7c11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad4bd8,1);
  return;
}



// FUNCTION 1434a7c14 FUN_1434a7c14 body=199 status=ok
// SIG undefined FUN_1434a7c14(void)

undefined1 FUN_1434a7c14(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined1 uVar6;
  
  puVar4 = *(undefined8 **)(param_1 + 0x58);
  if (puVar4 == (undefined8 *)0x0) {
    uVar6 = 0;
    if ((~*(uint *)(param_1 + 0x30) & 0x11) != 0) {
      return 0;
    }
  }
  else {
    uVar6 = 0;
    bVar5 = 0;
    while (bVar2 = *(byte *)((longlong)puVar4 + 0xf4), (bVar2 & 1) != 0) {
      if ((bVar2 & 2) != 0) {
        puVar3 = puVar4;
        if ((bVar2 & 0x20) != 0) {
          do {
            if ((*(byte *)((longlong)puVar3 + 0xf4) & 1) == 0) goto LAB_1434a7c9f;
          } while ((-1 < (char)*(byte *)((longlong)puVar3 + 0xf4)) &&
                  (plVar1 = puVar3 + 0x19, puVar3 = (undefined8 *)*plVar1,
                  (undefined8 *)*plVar1 != (undefined8 *)0x0));
        }
        *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 1;
        bVar2 = *(byte *)((longlong)puVar4 + 0xf4);
      }
      if ((bVar2 & 4) != 0) {
        uVar6 = *(undefined1 *)((longlong)puVar4 + 0xf6);
      }
      bVar5 = bVar5 | (bVar2 & 4) >> 2;
      *(undefined8 *)(param_1 + 0x58) = puVar4[0x19];
      (**(code **)*puVar4)(puVar4,1);
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      puVar4 = *(undefined8 **)(param_1 + 0x58);
      if (puVar4 == (undefined8 *)0x0) break;
    }
LAB_1434a7c9f:
    if ((~*(uint *)(param_1 + 0x30) & 0x11) != 0) {
      if (bVar5 == 0) {
        return 0;
      }
      *param_2 = uVar6;
      return 1;
    }
  }
  FUN_140cef0f4(param_1,0,uVar6);
  return 0;
}



// FUNCTION 1434a7cdc FUN_1434a7cdc body=841 status=ok
// SIG undefined FUN_1434a7cdc(void)

void FUN_1434a7cdc(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined1 auStack_88 [39];
  undefined1 local_61;
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(char *)(param_2 + 0xe8) < '\0') &&
     (lVar18 = *(longlong *)(param_1 + 0x28), (*(byte *)(lVar18 + 0xa4) & 2) == 0)) {
    if (*(longlong *)(lVar18 + 0x68) == 0) {
LAB_1434a7d58:
      lVar20 = 0;
    }
    else {
      lVar17 = FUN_1413dbcfa();
      lVar18 = *(longlong *)(lVar18 + 0x68);
      if (lVar18 == 0) goto LAB_1434a7d58;
      lVar20 = 0;
      if ((lVar17 != 0) && (lVar3 = *(longlong *)(lVar18 + 0x10), lVar3 != 0)) {
        if (*(int *)(lVar3 + 0x38) < *(int *)(lVar17 + 0x38)) goto LAB_1434a7d58;
        lVar20 = 0;
        if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8) ==
            lVar17 + 0x30) {
          lVar20 = lVar18;
        }
      }
    }
    FUN_1435af744(lVar20,param_2);
    if ((*(byte *)(param_2 + 0x29) & 2) == 0) goto LAB_1434a7d6c;
    uVar21 = 0x33;
  }
  else {
LAB_1434a7d6c:
    if ((*(byte *)(*(longlong *)(param_1 + 0x28) + 0xa4) & 2) == 0) {
      bVar2 = *(byte *)(param_2 + 0xe8);
    }
    else {
      bVar2 = *(byte *)(param_2 + 0xe8);
      if ((*(uint *)(param_1 + 0x30) & 0x20) != 0) {
        if ((bVar2 & 0x50) != 0x10 && (bVar2 & 2) != 0) {
          *(uint *)(param_1 + 0x30) =
               (*(uint *)(param_1 + 0x30) & 0xfffffffb) +
               (uint)(*(char *)(param_2 + 0xea) == '\x01') * 4;
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
        }
        goto LAB_1434a800b;
      }
    }
    if (((bVar2 & 8) == 0) ||
       (*(int *)(param_2 + 0xe4) ==
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x1410) +
                (longlong)*(int *)(param_1 + 0x34) * 4) + 1)) {
      cVar15 = FUN_1434a803e(param_1,param_2,param_3);
      if ((*(byte *)(param_2 + 0x29) & 2) == 0) {
        if (cVar15 == '\0') {
          do {
            puVar22 = *(undefined8 **)(param_1 + 0x50);
            if ((puVar22 == (undefined8 *)0x0) ||
               (*(int *)((longlong)puVar22 + 0xe4) !=
                *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x1410) +
                        (longlong)*(int *)(param_1 + 0x34) * 4) + 1)) break;
            *(undefined8 *)(param_1 + 0x50) = puVar22[0x19];
            *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
            puVar22[0x19] = 0;
            local_61 = 0;
            cVar15 = FUN_1434a803e(param_1,puVar22,&local_61);
            if ((*(byte *)(param_2 + 0x29) & 2) != 0) {
              uVar21 = 0x37;
              goto LAB_1434a7fd5;
            }
            (**(code **)*puVar22)(puVar22,1);
          } while (cVar15 == '\0');
        }
        goto LAB_1434a800b;
      }
      uVar21 = 0x36;
    }
    else {
      if ((*(byte *)(param_2 + 0xe9) & 2) != 0) {
        *param_3 = 1;
      }
      puVar22 = (undefined8 *)(param_1 + 0x50);
      if (*(longlong *)(param_1 + 0x50) != 0) {
        lVar18 = *(longlong *)(param_1 + 0x50);
        do {
          if (*(int *)(param_2 + 0xe4) == *(int *)(lVar18 + 0xe4)) goto LAB_1434a800b;
          if (*(int *)(param_2 + 0xe4) < *(int *)(lVar18 + 0xe4)) break;
          plVar1 = (longlong *)(lVar18 + 200);
          puVar22 = (undefined8 *)(lVar18 + 200);
          lVar18 = *plVar1;
        } while (*plVar1 != 0);
      }
      puVar19 = (undefined8 *)FUN_14001cc68(0xf0,0x10);
      FUN_14689986c(puVar19,param_2);
      *puVar19 = &PTR_FUN_14a8a34c0;
      uVar4 = *(undefined4 *)(param_2 + 0xc4);
      uVar5 = *(undefined4 *)(param_2 + 200);
      uVar6 = *(undefined4 *)(param_2 + 0xcc);
      uVar7 = *(undefined4 *)(param_2 + 0xd0);
      uVar8 = *(undefined4 *)(param_2 + 0xd4);
      uVar9 = *(undefined4 *)(param_2 + 0xd8);
      uVar10 = *(undefined4 *)(param_2 + 0xdc);
      uVar11 = *(undefined4 *)(param_2 + 0xdb);
      uVar12 = *(undefined4 *)(param_2 + 0xdf);
      uVar13 = *(undefined4 *)(param_2 + 0xe3);
      uVar14 = *(undefined4 *)(param_2 + 0xe7);
      *(undefined4 *)(puVar19 + 0x18) = *(undefined4 *)(param_2 + 0xc0);
      *(undefined4 *)((longlong)puVar19 + 0xc4) = uVar4;
      *(undefined4 *)(puVar19 + 0x19) = uVar5;
      *(undefined4 *)((longlong)puVar19 + 0xcc) = uVar6;
      *(undefined4 *)(puVar19 + 0x1a) = uVar7;
      *(undefined4 *)((longlong)puVar19 + 0xd4) = uVar8;
      *(undefined4 *)(puVar19 + 0x1b) = uVar9;
      *(undefined4 *)((longlong)puVar19 + 0xdc) = uVar10;
      *(undefined4 *)((longlong)puVar19 + 0xdb) = uVar11;
      *(undefined4 *)((longlong)puVar19 + 0xdf) = uVar12;
      *(undefined4 *)((longlong)puVar19 + 0xe3) = uVar13;
      *(undefined4 *)((longlong)puVar19 + 0xe7) = uVar14;
      puVar19[0x19] = *puVar22;
      *puVar22 = puVar19;
      iVar16 = *(int *)(param_1 + 0x48) + 1;
      *(int *)(param_1 + 0x48) = iVar16;
      lVar18 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x288);
      if ((DAT_14c950c29 == '\x01') && (lVar18 != 0)) {
        FUN_1456cec3c(lVar18);
        iVar16 = *(int *)(param_1 + 0x48);
      }
      FUN_1435a834a(lVar18,DAT_14caf3218,(longlong)iVar16);
      if (*(int *)(param_1 + 0x48) < 0x200) goto LAB_1434a800b;
      FUN_14572541c(param_2);
      uVar21 = 0x35;
    }
  }
LAB_1434a7fd5:
  FUN_1459b235e(local_60,uVar21);
  FUN_147a47702(param_2 + 0xb8,local_60);
  if (local_38 != 0) {
    (**(code **)(local_38 + -0x10))(local_38 + -0x10);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_1434a800b:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434a803e FUN_1434a803e body=1871 status=ok
// SIG undefined FUN_1434a803e(void)

undefined8 FUN_1434a803e(longlong *param_1,longlong param_2,char *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint3 uVar6;
  bool bVar7;
  byte bVar8;
  undefined8 *puVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  char *pcVar12;
  undefined8 uVar13;
  int iVar14;
  char *pcVar15;
  longlong lVar16;
  undefined7 uVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 auStack_88 [32];
  longlong local_68 [3];
  longlong local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  bVar8 = *(byte *)(param_2 + 0xe8);
  if ((bVar8 & 8) != 0) {
    *(undefined4 *)(*(longlong *)(param_1[5] + 0x1410) + (longlong)*(int *)(param_2 + 0xd8) * 4) =
         *(undefined4 *)(param_2 + 0xe4);
    bVar8 = *(byte *)(param_2 + 0xe8);
  }
  pcVar15 = param_3;
  lVar19 = param_2;
  if ((bVar8 & 0x10) == 0) goto LAB_1434a840d;
  puVar9 = (undefined8 *)param_1[0xc];
  if ((bVar8 & 0x20) == 0) {
    if (puVar9 == (undefined8 *)0x0) {
LAB_1434a81ad:
      *param_3 = '\x01';
      puVar9 = (undefined8 *)param_1[0xc];
      if (puVar9 == (undefined8 *)0x0) {
LAB_1434a81db:
        lVar19 = 0;
        goto LAB_1434a83a7;
      }
      if ((*(byte *)(puVar9 + 0x1d) & 8) == 0) {
        (**(code **)*puVar9)(puVar9,1);
        param_1[0xc] = 0;
        goto LAB_1434a81db;
      }
      if ((*(byte *)(param_2 + 0xe8) & 8) != 0) {
        FUN_14572541c(param_2);
        uVar13 = 0x39;
        goto LAB_1434a86c1;
      }
    }
    else {
      iVar2 = *(int *)(param_2 + 0xe4);
      iVar14 = *(int *)((longlong)puVar9 + 0xe4) + 1;
      uVar6 = (uint3)((uint)iVar14 >> 8);
      pcVar15 = (char *)(ulonglong)CONCAT31(uVar6,iVar2 == iVar14);
      bVar1 = *(byte *)(puVar9 + 0x1d);
      if ((((bVar1 & 0x40) != 0) ||
          (pcVar15 = (char *)((ulonglong)uVar6 << 8),
          iVar2 != iVar14 && ((bVar1 & 8) != 0 || iVar2 != *(int *)((longlong)puVar9 + 0xe4)))) ||
         (((bVar1 ^ bVar8) & 8) != 0)) goto LAB_1434a81ad;
      if (-1 < (char)bVar8) {
        uVar4 = *(ulonglong *)(param_2 + 0xa8);
        pcVar15 = (char *)(*(longlong *)(param_2 + 0xa0) - uVar4);
        if (pcVar15 != (char *)0x0 && (longlong)uVar4 <= *(longlong *)(param_2 + 0xa0)) {
          FUN_14170c41e(puVar9,(longlong)(int)(uVar4 >> 3) + *(longlong *)(param_2 + 0x90));
          bVar8 = *(byte *)(param_2 + 0xe8);
          if ((char)bVar8 < '\0') goto LAB_1434a814f;
        }
        if (((bVar8 < 0x40) && ((*(byte *)(param_2 + 0xe9) & 2) == 0)) &&
           ((*(int *)(param_2 + 0xa0) - *(int *)(param_2 + 0xa8) & 7U) != 0)) {
          FUN_14572541c(param_2);
          uVar13 = 0x3b;
          goto LAB_1434a86c1;
        }
      }
LAB_1434a814f:
      *(undefined4 *)(param_1[0xc] + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
      if ((*(byte *)(param_2 + 0xe8) & 0x40) == 0) {
        pwVar11 = L"Received Partial Bunch.";
        goto LAB_1434a834e;
      }
      FUN_140056680(local_68,L"Completed Partial Bunch.");
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      if (*(char *)(param_2 + 0xe8) < '\0') {
        FUN_14572541c(param_2);
        uVar13 = 0x3c;
        goto LAB_1434a86c1;
      }
      lVar19 = param_1[0xc];
      *(byte *)(lVar19 + 0xe8) = *(byte *)(lVar19 + 0xe8) | 0x40;
      *(byte *)(param_1[0xc] + 0xe8) =
           *(byte *)(param_1[0xc] + 0xe8) & 0xfd | *(byte *)(param_2 + 0xe8) & 2;
      *(undefined1 *)(param_1[0xc] + 0xea) = *(undefined1 *)(param_2 + 0xea);
      *(byte *)(param_1[0xc] + 0xe8) =
           *(byte *)(param_1[0xc] + 0xe8) & 0xfb | *(byte *)(param_2 + 0xe8) & 4;
      *(byte *)(param_1[0xc] + 0xe9) =
           *(byte *)(param_1[0xc] + 0xe9) & 0xfe | *(byte *)(param_2 + 0xe9) & 1;
LAB_1434a836b:
      lVar10 = param_1[0xc];
      if (lVar10 == 0) goto LAB_1434a83a7;
      if (((*(byte *)(param_1[5] + 0xa4) & 0x10) == 0) &&
         ((longlong)DAT_14c761488 < *(longlong *)(lVar10 + 0xa0) + 7 >> 3)) {
        FUN_14572541c(param_2);
        uVar13 = 0x3d;
        goto LAB_1434a86c1;
      }
      bVar7 = false;
LAB_1434a83a9:
      if (((*param_3 != '\0') || (bVar7 || (*(byte *)(param_2 + 0xe9) & 2) == 0)) ||
         ((*(byte *)(param_1[5] + 0xa4) & 2) != 0)) {
LAB_1434a840d:
        if (lVar19 == 0) goto LAB_1434a85c9;
        lVar10 = *(longlong *)(param_1[5] + 0x58);
        if (lVar10 == 0) {
LAB_1434a84cb:
          pcVar12 = (char *)0x0;
        }
        else {
          if (*(int *)(lVar10 + 0x220) == *(int *)(lVar10 + 0x24c)) {
LAB_1434a84cf:
            pcVar12 = (char *)0x0;
            if ((DAT_00000024 & 2) == 0) goto LAB_1434a8510;
          }
          else {
            lVar5 = param_1[8];
            uVar3 = (uint)((ulonglong)lVar5 >> 0x10);
            uVar18 = (uint)lVar5 & 0xffff;
            lVar16 = lVar10 + 0x250;
            if (*(longlong *)(lVar10 + 600) != 0) {
              lVar16 = *(longlong *)(lVar10 + 600);
            }
            uVar3 = *(uint *)(lVar16 + (ulonglong)
                                       (*(int *)(lVar10 + 0x260) - 1U &
                                       (int)((ulonglong)lVar5 >> 0x20) +
                                       ((uint)lVar5 << 0x10 | uVar18) +
                                       (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar18 >> 4)) * 4);
            pcVar15 = (char *)(ulonglong)uVar3;
            if (uVar3 == 0xffffffff) goto LAB_1434a84cf;
            uVar18 = uVar3;
            do {
              lVar16 = *(longlong *)(lVar10 + 0x218) + (longlong)(int)uVar18 * 0x80;
              if (*(longlong *)(*(longlong *)(lVar10 + 0x218) + (longlong)(int)uVar18 * 0x80) ==
                  lVar5) goto LAB_1434a84c4;
              uVar18 = *(uint *)(lVar16 + 0x78);
            } while (uVar18 != 0xffffffff);
            lVar16 = 0;
LAB_1434a84c4:
            if ((*(byte *)(lVar16 + 0x24) & 2) == 0) goto LAB_1434a84cb;
            if (uVar3 != 0xffffffff) {
              do {
                pcVar15 = (char *)((longlong)(int)pcVar15 * 0x80);
                pcVar12 = pcVar15 + *(longlong *)(lVar10 + 0x218);
                if (*(longlong *)(pcVar15 + *(longlong *)(lVar10 + 0x218)) == lVar5)
                goto LAB_1434a8507;
                pcVar15 = (char *)(ulonglong)*(uint *)(pcVar12 + 0x78);
              } while (*(uint *)(pcVar12 + 0x78) != 0xffffffff);
            }
            pcVar12 = (char *)0x0;
          }
LAB_1434a8507:
          pcVar12 = (char *)(ulonglong)((pcVar12[0x24] & 4U) >> 2);
        }
LAB_1434a8510:
        if ((*(byte *)(lVar19 + 0xe8) & 1) != 0) {
          if (((char)pcVar12 == '\0') &&
             (((int)param_1[7] != -1 || (*(int *)((longlong)param_1 + 0x3c) != -1)))) {
            FUN_14572541c(param_2);
            uVar13 = 0x3e;
            goto LAB_1434a86c1;
          }
          *(undefined4 *)(param_1 + 7) = *(undefined4 *)(lVar19 + 0xc0);
          *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0xc0);
          *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 1;
        }
        uVar3 = *(uint *)(param_1 + 6);
        uVar17 = (undefined7)((ulonglong)pcVar15 >> 8);
        if ((char)pcVar12 == '\0' && (uVar3 & 0x1001) == 0) {
          if ((*(byte *)(lVar19 + 0xe8) & 8) != 0) {
            FUN_14572541c(param_2);
            uVar13 = 0x3f;
            goto LAB_1434a86c1;
          }
          if ((*(byte *)(param_1[5] + 0xa4) & 2) == 0) goto LAB_1434a85be;
          *(uint *)(param_1 + 6) = uVar3 | 0x20;
        }
        else {
          if ((uVar3 & 2) == 0) {
            (**(code **)(*param_1 + 0x2c8))(param_1,lVar19);
          }
          if ((*(byte *)(lVar19 + 0xe8) & 2) != 0) {
            *(uint *)(param_1 + 6) =
                 (*(uint *)(param_1 + 6) & 0xfffffffb) +
                 (uint)(*(char *)(lVar19 + 0xea) == '\x01') * 4;
            FUN_140cef0f4(param_1,0,CONCAT71(uVar17,*(undefined1 *)(lVar19 + 0xea)));
            uVar13 = 1;
            goto LAB_1434a85cb;
          }
        }
      }
      else {
        *(byte *)(lVar10 + 0xe9) = *(byte *)(lVar10 + 0xe9) | 2;
        FUN_1435b0e52(*(undefined8 *)(param_1[5] + 0x68),param_1[0xc]);
        lVar10 = param_1[0xc];
        if ((*(byte *)(lVar10 + 0x29) & 2) == 0) {
          pcVar15 = (char *)0x0;
          FUN_1400ec332(lVar10,lVar10,0,*(undefined8 *)(lVar10 + 0xa0));
          *(byte *)(param_1[0xc] + 0xe9) = *(byte *)(param_1[0xc] + 0xe9) & 0xfd;
          goto LAB_1434a840d;
        }
        FUN_1459b235e(local_68,0x33);
        FUN_147a47702(param_1[0xc] + 0xb8,local_68);
LAB_1434a86dc:
        if (local_40 != 0) {
          (**(code **)(local_40 + -0x10))(local_40 + -0x10);
        }
        if (local_50 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  else {
    if (puVar9 == (undefined8 *)0x0) {
LAB_1434a81f5:
      puVar9 = (undefined8 *)FUN_14001cc68(0xf0,0x10);
      lVar19 = 0;
      pcVar15 = (char *)0x0;
      FUN_1448fcc30(puVar9,0,0,0);
      *puVar9 = &PTR_FUN_14a8a34c0;
      *(undefined4 *)(puVar9 + 0x18) = *(undefined4 *)(param_2 + 0xc0);
      puVar9[0x19] = *(undefined8 *)(param_2 + 200);
      puVar9[0x1a] = *(undefined8 *)(param_2 + 0xd0);
      *(undefined4 *)(puVar9 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
      *(undefined8 *)((longlong)puVar9 + 0xdc) = *(undefined8 *)(param_2 + 0xdc);
      *(undefined4 *)((longlong)puVar9 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
      *(undefined1 *)(puVar9 + 0x1d) = *(undefined1 *)(param_2 + 0xe8);
      *(byte *)((longlong)puVar9 + 0xe9) =
           *(byte *)(param_2 + 0xe9) & 7 | *(byte *)((longlong)puVar9 + 0xe9) & 0xf8;
      *(undefined1 *)((longlong)puVar9 + 0xea) = *(undefined1 *)(param_2 + 0xea);
      puVar9[0x16] = *(undefined8 *)(param_2 + 0xb0);
      puVar9[0x15] = 0;
      param_1[0xc] = (longlong)puVar9;
      if (puVar9 != (undefined8 *)0x0) {
        if (-1 < *(char *)(param_2 + 0xe8)) {
          uVar4 = *(ulonglong *)(param_2 + 0xa8);
          pcVar15 = (char *)(*(longlong *)(param_2 + 0xa0) - uVar4);
          if (pcVar15 != (char *)0x0 && (longlong)uVar4 <= *(longlong *)(param_2 + 0xa0)) {
            if ((((ulonglong)pcVar15 & 7) == 0) || ((*(byte *)(param_2 + 0xe9) & 2) != 0)) {
              FUN_14170c41e(puVar9,(longlong)(int)(uVar4 >> 3) + *(longlong *)(param_2 + 0x90));
              pwVar11 = L"Received new partial bunch.";
              goto LAB_1434a834e;
            }
            FUN_14572541c(param_2);
            uVar13 = 0x3a;
            goto LAB_1434a86c1;
          }
        }
        pwVar11 = L"Received New partial bunch. It only contained NetGUIDs.";
LAB_1434a834e:
        FUN_140056680(local_68,pwVar11);
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
        lVar19 = 0;
        goto LAB_1434a836b;
      }
LAB_1434a83a7:
      bVar7 = true;
      lVar10 = 0;
      goto LAB_1434a83a9;
    }
    if ((*(byte *)(puVar9 + 0x1d) & 0x48) != 8) {
      (**(code **)*puVar9)(puVar9,1);
      param_1[0xc] = 0;
      goto LAB_1434a81f5;
    }
    if ((bVar8 & 8) != 0) {
      FUN_14572541c(param_2);
      uVar13 = 0x38;
LAB_1434a86c1:
      FUN_1459b235e(local_68,uVar13);
      FUN_147a47702(param_2 + 0xb8,local_68);
      goto LAB_1434a86dc;
    }
LAB_1434a85be:
    *param_3 = '\x01';
  }
LAB_1434a85c9:
  uVar13 = 0;
LAB_1434a85cb:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 1434a87a2 FUN_1434a87a2 body=76 status=ok
// SIG undefined FUN_1434a87a2(void)

void FUN_1434a87a2(longlong param_1,int param_2)

{
  longlong lVar1;
  
  for (lVar1 = *(longlong *)(param_1 + 0x58); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 200)) {
    if ((*(int *)(lVar1 + 0xf0) == param_2) && ((*(byte *)(lVar1 + 0xf4) & 1) == 0)) {
      FUN_14358c6a4(*(undefined8 *)(param_1 + 0x28),lVar1,0,0);
    }
  }
  return;
}



// FUNCTION 1434a87ee FUN_1434a87ee body=2297 status=ok
// SIG undefined FUN_1434a87ee(void)

void FUN_1434a87ee(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_c8;
  longlong local_b8;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  byte local_99;
  undefined8 local_98;
  ulonglong auStack_90 [2];
  longlong local_80;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar2 = *(longlong *)(param_1 + 0x28);
  if ((lVar2 == 0) || (*(char *)(param_1 + 0x68) != '\x01')) {
LAB_1434a8874:
    cVar7 = (**(code **)(*param_2 + 0x38))(param_2);
    if (cVar7 == '\0') {
      plVar13 = param_2 + 0x17;
      bVar6 = false;
      bVar12 = false;
      while ((*(longlong *)(param_1 + 0x28) != 0 &&
             (*(int *)(*(longlong *)(param_1 + 0x28) + 0x134) != 1))) {
        local_99 = 0;
        puVar3 = (ulonglong *)param_2[1];
        pbVar1 = (byte *)*puVar3 + 1;
        if ((byte *)puVar3[1] < pbVar1) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_99,1);
        }
        else {
          local_99 = *(byte *)*puVar3;
          *puVar3 = (ulonglong)pbVar1;
        }
        if ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0) break;
        lVar2 = param_2[0x15];
        switch(local_99) {
        case 0x10:
          if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0xf0) == 0) {
            local_e8 = plVar13;
            FUN_1463c28ee(param_2,&local_e0);
            plVar13 = local_e8;
            if (-1 < (int)local_e0 && (*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
              uVar9 = (ulonglong)local_e0 & 0xffffffff;
              if (((int)local_e0 < *(int *)(*(longlong *)(param_1 + 0x28) + 0x13f8)) &&
                 (lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x13f0),
                 *(longlong *)(lVar14 + uVar9 * 8) != 0)) {
                lVar11 = FUN_1414cbbb6();
                lVar14 = *(longlong *)(lVar14 + uVar9 * 8);
                plVar13 = local_e8;
                if ((lVar14 != 0) &&
                   ((((lVar11 != 0 && (lVar10 = *(longlong *)(lVar14 + 0x10), lVar10 != 0)) &&
                     (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
                    ((*(longlong *)
                       (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
                      lVar11 + 0x30 && (lVar11 = *(longlong *)(lVar14 + 0x68), lVar11 != 0)))))) {
                  lVar10 = *(longlong *)(param_1 + 0x28);
                  lVar4 = *(longlong *)(lVar10 + 0x30);
                  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
                    FUN_1456cec3c();
                    lVar11 = *(longlong *)(lVar14 + 0x68);
                    lVar10 = *(longlong *)(param_1 + 0x28);
                  }
                  if (lVar11 == lVar4) {
                    FUN_1459b235e(&local_98,0x44);
                    FUN_143587ad8(lVar10,&local_98);
                    if (local_70 != 0) {
                      (**(code **)(local_70 + -0x10))(local_70 + -0x10);
                    }
                    plVar13 = local_e8;
                    if (local_80 != 0) {
                      FUN_1400020a8();
                      plVar13 = local_e8;
                    }
                  }
                  else {
                    plVar8 = *(longlong **)(lVar10 + 0x30);
                    plVar13 = local_e8;
                    if (plVar8 != (longlong *)0x0) {
                      (**(code **)(*plVar8 + 0xd48))(plVar8,lVar14);
                      plVar13 = local_e8;
                    }
                  }
                }
              }
            }
          }
          break;
        default:
          plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x2f8);
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x18))();
          }
          break;
        case 0x13:
          local_98 = (longlong *)0x0;
          auStack_90[0] = 0;
          FUN_14021219d(param_2,&local_98);
          bVar12 = bVar6;
          if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
            bVar6 = true;
            bVar12 = true;
          }
          goto LAB_1434a8a1c;
        case 0x14:
          local_98 = (longlong *)0x0;
          auStack_90[0] = 0;
          FUN_147a4e780(param_2,&local_e0,&local_98);
          if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
            lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58);
            lVar11 = *(longlong *)(lVar14 + 0x1a8);
            if ((lVar11 == 0) ||
               (plVar8 = *(longlong **)(lVar11 + 0x1f0), plVar8 == (longlong *)0x0)) {
              if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
                lVar11 = 0;
                do {
                  lVar10 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar11);
                  if ((*(longlong *)(lVar10 + 0x230) != 0) &&
                     (*(longlong *)(*(longlong *)(lVar10 + 0x230) + 0x30) == lVar14)) {
                    if ((lVar10 != 0) &&
                       (plVar8 = *(longlong **)(lVar10 + 0x2a8), plVar8 != (longlong *)0x0))
                    goto LAB_1434a8da5;
                    break;
                  }
                  lVar11 = lVar11 + 8;
                } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar11);
              }
            }
            else {
LAB_1434a8da5:
              (**(code **)(*plVar8 + 0x388))
                        (plVar8,*(longlong *)(param_1 + 0x28),(ulonglong)local_e0 & 0xff);
            }
          }
          goto LAB_1434a8a1c;
        case 0x16:
          cVar7 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x3c0))();
          if (cVar7 == '\0') {
            FUN_147a47988(param_1,param_2);
          }
          else {
            uVar5 = *(undefined8 *)(param_1 + 0x28);
            local_e8 = plVar13;
            FUN_1459b235e(&local_98,0x4b);
            FUN_143587ad8(uVar5,&local_98);
            if (local_70 != 0) {
              (**(code **)(local_70 + -0x10))(local_70 + -0x10);
            }
            plVar13 = local_e8;
            if (local_80 != 0) {
              FUN_1400020a8();
              plVar13 = local_e8;
            }
          }
          break;
        case 0x17:
          local_98 = (longlong *)0x0;
          auStack_90[0] = 0;
          FUN_14021219d(param_2,&local_98);
          if (((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) && (1 < (int)auStack_90[0])) {
            FUN_1435882d6(*(undefined8 *)(param_1 + 0x28),&local_98);
          }
          if (local_98 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          bVar6 = true;
          bVar12 = true;
          break;
        case 0x18:
          local_98 = (longlong *)0x0;
          auStack_90[0] = 0;
          FUN_147a4e7ce(param_2,&local_e0,&local_98);
          plVar8 = local_98;
          if ((byte)local_e0 < 2 && (*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
            local_b0 = (void *)0x0;
            lVar14 = (longlong)(int)auStack_90[0];
            local_a8 = (int)auStack_90[0];
            if (lVar14 == 0) {
              local_a4 = 0;
              local_e8 = plVar13;
            }
            else {
              local_e8 = plVar13;
              FUN_1446dd670(&local_b0,auStack_90[0] & 0xffffffff,0);
              memcpy(local_b0,plVar8,lVar14 * 2);
            }
            FUN_147bdd1d2(*(undefined8 *)(param_1 + 0x28),(ulonglong)local_e0 & 0xff,&local_b0);
            plVar13 = local_e8;
          }
LAB_1434a8a1c:
          if (local_98 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          break;
        case 0x1d:
          local_98 = (longlong *)0x0;
          FUN_147a4e81c(param_2,&local_98);
          if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
            lVar14 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x840);
            if (lVar14 != 0) {
              FUN_146f46352(lVar14,local_98,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x1d2c))
              ;
            }
          }
          break;
        case 0x1e:
          local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
          local_98 = (longlong *)0x0;
          FUN_147a4e85a(param_2,&local_e0,&local_98);
          if (((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) &&
             (lVar14 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x840),
             lVar14 != 0)) {
            FUN_146f463b8(lVar14,(ulonglong)local_e0 & 0xffffffff,local_98);
          }
        }
        if (((longlong)(int)lVar2 == param_2[0x15]) &&
           ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0)) {
          switch(local_99) {
          case 0:
            FUN_147a47ce8(param_2);
            break;
          case 1:
            FUN_147a47d52(param_2);
            break;
          case 2:
            local_98 = (longlong *)((ulonglong)local_98 & 0xffff000000000000);
            local_e0 = param_2;
            FUN_147a4c3ae(&local_e0,&local_98);
            FUN_147a4c3ee(&local_e0,(longlong)&local_98 + 4);
            break;
          case 3:
            FUN_147a47dd2(param_2);
            break;
          case 4:
            local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
            local_98 = param_2;
            FUN_147a4c430(&local_98,&local_e0);
            break;
          case 5:
            FUN_147a47e24(param_2);
            break;
          case 6:
            FUN_147a47ea6(param_2);
            break;
          default:
            uVar5 = *(undefined8 *)(param_1 + 0x28);
            FUN_1459b235e(&local_98,0x45);
            FUN_143587ad8(uVar5,&local_98);
            goto LAB_1434a9026;
          case 9:
          case 0x15:
          case 0x19:
            break;
          case 10:
            FUN_147a47ef8(param_2);
            break;
          case 0xc:
          case 0xd:
            local_98 = (longlong *)0x0;
            auStack_90[0] = 0;
            FUN_1402ac1b3(param_2,&local_98);
            break;
          case 0xf:
            local_e0 = (longlong *)((ulonglong)local_e0._4_4_ << 0x20);
            local_98 = param_2;
            FUN_147a4c57e(&local_98,&local_e0);
            break;
          case 0x10:
            local_e0 = (longlong *)((ulonglong)local_e0._4_4_ << 0x20);
            local_98 = param_2;
            FUN_147a4c5be(&local_98,&local_e0);
            break;
          case 0x11:
            FUN_147a47f72(param_2);
            break;
          case 0x12:
            FUN_147a47fc4(param_2);
            break;
          case 0x17:
            FUN_147a4803a(param_2);
            break;
          case 0x18:
            FUN_147a4808c(param_2);
            break;
          case 0x1a:
            FUN_147a480ee(param_2);
            break;
          case 0x1b:
            local_98 = (longlong *)0x0;
            (**(code **)(*param_2 + 400))(param_2,&local_98);
            break;
          case 0x1c:
            FUN_147a48168(param_2);
            break;
          case 0x1d:
            local_98 = (longlong *)0x0;
            local_e0 = param_2;
            FUN_147a4c652(&local_e0,&local_98);
            break;
          case 0x1e:
            local_98 = (longlong *)((ulonglong)local_98 & 0xffffffff00000000);
            auStack_90[0] = 0;
            local_e0 = param_2;
            FUN_147a4c694(&local_e0,&local_98);
            FUN_147a4c6d4(&local_e0,auStack_90);
          }
        }
        if ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0) {
          FUN_1459b235e(&local_98,0x47);
          FUN_147a47702(plVar13,&local_98);
          if (local_70 != 0) {
            (**(code **)(local_70 + -0x10))(local_70 + -0x10);
          }
          if (local_80 != 0) {
            FUN_1400020a8();
          }
          bVar12 = true;
          bVar6 = bVar12;
        }
        cVar7 = (**(code **)(*param_2 + 0x38))(param_2);
        if ((cVar7 != '\0') || (bVar12)) break;
      }
    }
    if (((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) ||
       (lVar2 = *(longlong *)(param_1 + 0x28), lVar2 == 0)) goto LAB_1434a8894;
    FUN_1459b235e(&local_e0,0x46);
    FUN_147a481b9(&local_98,param_2 + 0x17,&local_e0);
    FUN_143587ad8(lVar2,&local_98);
    if (local_70 != 0) {
      (**(code **)(local_70 + -0x10))(local_70 + -0x10);
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    if (local_b8 != 0) {
      (**(code **)(local_b8 + -0x10))(local_b8 + -0x10);
    }
  }
  else {
    if ((8 < param_2[0x14]) && (*(char *)param_2[0x12] == '\0')) {
      cVar7 = ((char *)param_2[0x12])[1];
      *(byte *)((longlong)param_2 + 0x2a) =
           (cVar7 != '\x01') * '\x02' | *(byte *)((longlong)param_2 + 0x2a) & 0xfd;
      *(bool *)(*(longlong *)(param_1 + 0x28) + 0x158) = cVar7 != '\x01';
      *(undefined1 *)(param_1 + 0x68) = 0;
      goto LAB_1434a8874;
    }
    FUN_1459b235e(&local_98,0x43);
    FUN_143587ad8(lVar2,&local_98);
LAB_1434a9026:
    local_c8 = local_80;
    if (local_70 != 0) {
      (**(code **)(local_70 + -0x10))(local_70 + -0x10);
      local_c8 = local_80;
    }
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
LAB_1434a8894:
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434a90e8 FUN_1434a90e8 body=384 status=ok
// SIG undefined FUN_1434a90e8(void)

undefined8 * FUN_1434a90e8(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *(uint *)(param_1 + 0x78);
  if ((longlong)(int)uVar3 < 1) {
    if (*(int *)(param_1 + 0x4c) < (int)(((*(uint *)(param_3 + 0xf4) >> 2 & 1) != 0) + 0x1ff)) {
      if ((*(byte *)(param_3 + 0x29) & 2) == 0) {
        FUN_1408f10c6(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
      }
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      FUN_1459b235e(local_58,0x48);
      FUN_143587ad8(uVar6,local_58);
      if (local_30 != 0) {
        (**(code **)(local_30 + -0x10))(local_30 + -0x10);
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1434a91f2;
    }
  }
  else if (0x7fff < uVar3) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x134) = 1;
    goto LAB_1434a91f2;
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x78) = uVar3 + 1;
  if (*(uint *)(param_1 + 0x7c) < uVar3 + 1) {
    FUN_147a4e8b8(plVar1,uVar3);
  }
  lVar5 = *plVar1;
  lVar7 = (longlong)(int)uVar3 * 0x18;
  puVar2 = (undefined8 *)(lVar5 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar5 + 0x10 + lVar7) = 0;
  lVar5 = *plVar1;
  puVar2 = (undefined8 *)(lVar5 + lVar7);
  iVar4 = *(int *)(lVar5 + 8 + lVar7);
  uVar3 = (uint)(*(longlong *)(param_3 + 0xa0) + 7U >> 3);
  *(uint *)(lVar5 + 8 + lVar7) = iVar4 + uVar3;
  if ((uint)(*(int *)(lVar5 + 0xc + lVar7) - iVar4) < uVar3) {
    FUN_1447403be(puVar2);
  }
  memcpy((void *)*puVar2,*(void **)(param_3 + 0x90),*(longlong *)(param_3 + 0xa0) + 7 >> 3);
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_3 + 0xa0);
LAB_1434a91f2:
  *param_2 = 0xffffffffffffffff;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434a926e FUN_1434a926e body=1057 status=ok
// SIG undefined FUN_1434a926e(void)

void FUN_1434a926e(longlong *param_1)

{
  void *_Dst;
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_1f8 [40];
  longlong *local_1d0;
  undefined1 local_1c8 [24];
  longlong local_1b0;
  longlong local_1a0;
  undefined **local_198 [5];
  byte local_16f;
  byte local_16e;
  longlong *local_140;
  longlong local_120;
  longlong local_110;
  longlong local_108;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  longlong local_b4;
  undefined8 local_ac;
  undefined1 local_a4;
  byte local_a3;
  undefined1 local_a2;
  longlong local_a0;
  undefined8 uStack_98;
  longlong local_90;
  undefined8 uStack_88;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (((*(byte *)(param_1 + 6) & 0x80) != 0) &&
     (cVar3 = (**(code **)(*param_1 + 0x310))(param_1,0), cVar3 != '\0')) {
    (**(code **)(*param_1 + 0x330))(param_1);
  }
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    lVar6 = param_1[0xb];
    if (lVar6 != 0) {
      iVar4 = 0;
      lVar5 = lVar6;
      do {
        iVar4 = iVar4 + (~*(uint *)(lVar5 + 0xf4) & 1);
        lVar5 = *(longlong *)(lVar5 + 200);
      } while (lVar5 != 0);
      if (iVar4 < 9) {
        do {
          if (((*(byte *)(lVar6 + 0xf4) & 1) == 0) &&
             (1.0 < *(double *)(*(longlong *)(param_1[5] + 0x58) + 0x300) -
                    *(double *)(lVar6 + 0xd8))) {
            FUN_14358c6a4(param_1[5],lVar6,0,0);
          }
          lVar6 = *(longlong *)(lVar6 + 200);
        } while (lVar6 != 0);
      }
    }
  }
  else {
    local_1d0 = param_1 + 0xe;
    do {
      if (((int)param_1[0xf] < 1) || ((*(byte *)(param_1 + 6) & 2) != 0)) break;
      lVar6 = param_1[5];
      FUN_144a679e2(local_198,*(undefined8 *)(lVar6 + 0x68),
                    (longlong)((*(int *)(lVar6 + 0xa0) * 8 - *(int *)(lVar6 + 0x130)) + -0x235));
      local_d0 = 0;
      local_c0 = 0;
      local_b8 = *(undefined4 *)((longlong)param_1 + 0x34);
      local_b4 = param_1[8];
      local_ac = 0;
      local_a3 = local_a3 & 0xf8;
      local_a2 = 0;
      local_70 = 0;
      local_68 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_64 = 4;
      local_16e = local_16e & 0xfd | *(char *)(param_1[5] + 0x158) * '\x02';
      if (0x1fe < *(int *)((longlong)param_1 + 0x4c)) {
        local_16f = local_16f | 2;
        for (lVar6 = local_110; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x88)) {
          *(byte *)(lVar6 + 0x29) = *(byte *)(lVar6 + 0x29) | 2;
        }
      }
      local_198[0] = &PTR_FUN_14a8a39a0;
      local_a4 = 0x10;
      local_c8 = param_1;
      if ((local_16f & 2) == 0) {
        FUN_1401177fa(local_198,*(undefined8 *)*local_1d0,
                      *(undefined4 *)((undefined8 *)*local_1d0 + 2));
        if ((local_16f & 2) != 0) {
          lVar6 = param_1[5];
          FUN_1459b235e(local_1c8,0x49);
          FUN_143587ad8(lVar6,local_1c8);
          if (local_1a0 != 0) {
            (**(code **)(local_1a0 + -0x10))(local_1a0 + -0x10);
          }
          if (local_1b0 != 0) {
            FUN_1400020a8();
          }
          goto LAB_1434a94a2;
        }
        FUN_1408f10c6(param_1,local_1c8,local_198,1);
        _Dst = (void *)param_1[0xe];
        iVar4 = 1;
        FUN_145978927(_Dst,1);
        if ((int)param_1[0xf] != 1) {
          memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)((int)param_1[0xf] + -1) * 0x18);
          iVar4 = (int)param_1[0xf];
        }
        *(int *)(param_1 + 0xf) = iVar4 + -1;
        FUN_147a4e94c(local_1d0);
        bVar1 = true;
      }
      else {
LAB_1434a94a2:
        bVar1 = false;
      }
      local_198[0] = &PTR_FUN_14a8a3730;
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      local_198[0] = &PTR_FUN_149e37560;
      if (local_108 != 0) {
        FUN_1400020a8();
      }
      plVar2 = local_140;
      local_198[0] = &PTR__purecall_149e35f70;
      if (local_140 != (longlong *)0x0) {
        if (*local_140 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar2);
      }
      lVar6 = local_120;
      if (local_120 != 0) {
        if (*(longlong *)(local_120 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar6);
      }
    } while (bVar1);
  }
  if ((local_60 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434a9690 FUN_1434a9690 body=813 status=ok
// SIG undefined FUN_1434a9690(void)

undefined8 FUN_1434a9690(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  longlong lVar3;
  void *_Src;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_1c8 [32];
  void **local_1a8;
  undefined1 local_1a0 [8];
  void *local_198;
  int local_190;
  undefined4 local_18c;
  undefined1 local_182;
  undefined1 local_181;
  undefined **local_180;
  ulonglong *local_178;
  longlong *local_128;
  longlong local_108;
  longlong local_f0;
  undefined8 local_e0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined5 uStack_a0;
  undefined3 local_9b;
  undefined5 uStack_98;
  undefined8 uStack_93;
  byte local_8b;
  undefined1 local_8a;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if ((((*(byte *)(param_1 + 6) & 2) == 0) && ((*(uint *)(param_1[5] + 0x134) & 0xfffffffe) == 2))
     && (*(int *)(param_2 + 0xc) != 0)) {
    uVar2 = *(uint *)(param_2 + 8);
    uVar4 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1434a97f0;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) &&
        (((int)plVar5[2] == *(int *)(param_2 + 0xc) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))
        ) && (lVar3 = *plVar5, lVar3 != 0)) {
      FUN_144a679e2(&local_180,*(undefined8 *)(param_1[5] + 0x68),0);
      local_180 = &PTR_FUN_14a8a3730;
      uStack_98 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      local_9b = 0;
      local_8b = local_8b & 0xf8;
      local_8a = 0;
      local_58 = 0;
      local_50 = 0x400000000;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      uStack_93 = 0x1000000000000000;
      local_181 = 0x16;
      if (local_178[1] < *local_178 + 1) {
        FUN_14011736e(&local_180,&local_181,1);
      }
      else {
        *local_178 = *local_178 + 1;
      }
      local_182 = *(undefined1 *)(param_2 + 0x48);
      puVar1 = (undefined1 *)*local_178 + 1;
      if ((undefined1 *)local_178[1] < puVar1) {
        (*(code *)local_180[0x2e])(&local_180,&local_182,1);
      }
      else {
        local_182 = *(undefined1 *)*local_178;
        *local_178 = (ulonglong)puVar1;
      }
      plVar5 = *(longlong **)(param_1[5] + 0x68);
      local_198 = (void *)0x0;
      local_190 = *(int *)(param_2 + 0x38);
      lVar6 = (longlong)local_190;
      _Src = *(void **)(param_2 + 0x30);
      if (lVar6 == 0) {
        local_18c = 0;
      }
      else {
        FUN_1446dd670(&local_198,local_190,0);
        memcpy(local_198,_Src,lVar6 * 2);
      }
      local_1a8 = &local_198;
      (**(code **)(*plVar5 + 0x2a0))(plVar5,&local_180,lVar3,*(undefined8 *)(param_2 + 0x28));
      (**(code **)(*param_1 + 0x308))(param_1,local_1a0,&local_180,0);
      local_180 = &PTR_FUN_14a8a3730;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      local_180 = &PTR_FUN_149e37560;
      if (local_f0 != 0) {
        FUN_1400020a8();
      }
      local_180 = &PTR__purecall_149e35f70;
      if (local_128 != (longlong *)0x0) {
        if (*local_128 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_128);
      }
      uVar4 = local_e0;
      if (local_108 != 0) {
        if (*(longlong *)(local_108 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_108);
      }
      goto LAB_1434a97f0;
    }
  }
  uVar4 = 0;
LAB_1434a97f0:
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434a99be FUN_1434a99be body=296 status=ok
// SIG undefined FUN_1434a99be(void)

undefined8 FUN_1434a99be(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 unaff_RBP;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144b25d80(&local_30,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x68));
  uVar3 = FUN_1414df1a6(param_1,param_2);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    if (*(longlong *)(param_1 + 0x28) == 0) {
      uVar5 = 0;
    }
    else {
      if ((char)param_2 == '\x01') {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x58);
        if (plVar1 == (longlong *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar2 = (**(code **)(*plVar1 + 0x3c0))();
          uVar4 = (ulonglong)uVar2;
          if ((char)uVar2 == '\0') {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x58);
            (**(code **)(*plVar1 + 0x470))(plVar1,*(undefined8 *)(param_1 + 0x68));
          }
          FUN_141089d6e(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x58),
                        *(undefined8 *)(param_1 + 0x68));
        }
        uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
        if (DAT_14caf2748 < 1) {
          uVar5 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 & DAT_14caf2745);
        }
      }
      else {
        uVar5 = 0;
      }
      FUN_140744940(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x68));
    }
    FUN_140c692ee(param_1,uVar5 & 0xffffffff);
    *(undefined4 *)(param_1 + 0x168) = 0;
    if (*(int *)(param_1 + 0x16c) != 0) {
      FUN_140c6998c(param_1 + 0x160,0);
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (local_30 != 0) {
    *(undefined8 *)(local_30 + 0x1d38) = 0;
    *(undefined8 *)(local_30 + 0x1d40) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434a9ae8 FUN_1434a9ae8 body=1479 status=ok
// SIG undefined FUN_1434a9ae8(void)

void FUN_1434a9ae8(longlong param_1,uint param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  int *piVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  int local_78;
  uint local_74;
  uint *local_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  for (lVar19 = *(longlong *)(param_1 + 0x58); lVar19 != 0; lVar19 = *(longlong *)(lVar19 + 200)) {
    if ((*(uint *)(lVar19 + 0xf0) == param_2) && ((*(byte *)(lVar19 + 0xf4) & 1) == 0)) {
      FUN_14358c6a4(*(undefined8 *)(param_1 + 0x28),lVar19,0,0);
    }
  }
  iVar6 = *(int *)(param_1 + 0xd0);
  if (iVar6 == 0) {
    uVar21 = 1;
    uVar16 = 0;
    iVar13 = 0;
    iVar8 = 0;
  }
  else {
    puVar12 = *(uint **)(param_1 + 200);
    if (*(uint **)(param_1 + 200) == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 0xb8);
    }
    uVar17 = *puVar12;
    if (uVar17 == 0) {
      iVar13 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar13 = iVar6 + -1;
      }
      uVar16 = 0;
      uVar21 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar21 = uVar16;
      }
      iVar13 = 0;
      do {
        if (uVar21 == uVar16) goto LAB_1434a9f20;
        iVar13 = iVar13 + 0x20;
        uVar17 = puVar12[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar16 = 0;
      iVar13 = 0;
    }
    uVar21 = (ulonglong)(-uVar17 & uVar17);
    uVar2 = uVar21 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar8 = (iVar13 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar8) {
      iVar8 = iVar6;
    }
  }
  if (iVar8 < iVar6) {
    uVar17 = 0xffffffff;
    local_70 = (uint *)(param_1 + 0xb8);
    local_68 = param_1;
    do {
      lVar19 = *(longlong *)(*(longlong *)(local_68 + 0xa8) + 8 + (longlong)iVar8 * 0x20);
      local_78 = iVar13;
      local_74 = uVar17;
      local_60 = uVar16;
      if (((*(longlong *)(lVar19 + 0x48) != 0) ||
          (((((*(int *)(lVar19 + 0xdc) != 0 && (uVar17 = *(uint *)(lVar19 + 0xd8), -1 < (int)uVar17)
              ) && ((int)uVar17 < DAT_14c9647dc)) &&
            ((plVar18 = (longlong *)
                        ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8)),
             plVar18 != (longlong *)0x0 && ((int)plVar18[2] == *(int *)(lVar19 + 0xdc))))) &&
           (((*(uint *)(plVar18 + 1) & 0x10200000) == 0 && (*plVar18 != 0)))))) &&
         ((((*(longlong *)(lVar19 + 0x40) != 0 &&
            ((*(byte *)(*(longlong *)(lVar19 + 0x20) + 0x20) & 0x10) == 0)) &&
           (*(int *)(*(longlong *)(lVar19 + 0x20) + 0x30) != 0)) &&
          ((*(longlong *)(lVar19 + 0x30) != 0 &&
           (local_80 = *(longlong *)(*(longlong *)(lVar19 + 0x30) + 8), local_80 != 0)))))) {
        *(int *)(local_80 + 0x18) = *(int *)(local_80 + 0x18) + -1;
        iVar6 = *(int *)(local_80 + 4);
        iVar13 = *(int *)(local_80 + 8);
        if (iVar6 < iVar13) {
          do {
            lVar19 = (longlong)(iVar6 % 0x20) * 0x20;
            if (((*(char *)(local_80 + 0x48 + lVar19) == '\0') &&
                (piVar20 = (int *)(lVar19 + local_80 + 0x30), *piVar20 <= (int)param_2)) &&
               ((int)param_2 <= piVar20[1])) {
              *(undefined1 *)(piVar20 + 6) = 1;
              *(int *)(local_80 + 0xc) = *(int *)(local_80 + 0xc) + 1;
              iVar13 = *(int *)(local_80 + 8);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar13);
        }
        lVar19 = (longlong)*(int *)(local_80 + 0x438);
        if (0 < (longlong)*(int *)(local_80 + 0x438)) {
          do {
            lVar22 = lVar19 + -1;
            puVar15 = (undefined8 *)(lVar22 * 0x28 + *(longlong *)(local_80 + 0x430));
            iVar6 = 0;
            puVar14 = puVar15;
            do {
              while( true ) {
                puVar14 = (undefined8 *)*puVar14;
                if (puVar14 == (undefined8 *)0x0) goto LAB_1434a9e5b;
                if ((int)param_2 <= *(int *)((longlong)puVar14 + 0x1c)) break;
                *puVar15 = *puVar14;
                iVar6 = *(int *)(puVar14 + 4);
                plVar18 = (longlong *)puVar14[2];
                if (plVar18 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plVar18 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plVar18)(plVar18);
                    LOCK();
                    piVar20 = (int *)((longlong)plVar18 + 0xc);
                    *piVar20 = *piVar20 + -1;
                    UNLOCK();
                    if (*piVar20 == 0) {
                      (**(code **)(*plVar18 + 0x10))(plVar18);
                    }
                  }
                }
                FUN_1400020a8(puVar14);
                puVar14 = puVar15;
              }
            } while ((int)param_2 < *(int *)(puVar14 + 3));
            if ((iVar6 != 0) && (puVar14[1] != 0)) {
              *(int *)(puVar14[1] + 0x18) = iVar6;
            }
            puVar7 = (undefined8 *)(lVar22 * 0x10 + *(longlong *)(local_80 + 0x490));
            uVar3 = puVar14[1];
            lVar4 = puVar14[2];
            if (lVar4 != 0) {
              LOCK();
              *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
              UNLOCK();
            }
            plVar18 = (longlong *)puVar7[1];
            *puVar7 = uVar3;
            puVar7[1] = lVar4;
            if (plVar18 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar18 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar18)(plVar18);
                LOCK();
                piVar20 = (int *)((longlong)plVar18 + 0xc);
                *piVar20 = *piVar20 + -1;
                UNLOCK();
                if (*piVar20 == 0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18);
                }
              }
            }
            do {
              puVar7 = (undefined8 *)*puVar14;
              plVar18 = (longlong *)puVar14[2];
              if (plVar18 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar18 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar18)(plVar18);
                  LOCK();
                  piVar20 = (int *)((longlong)plVar18 + 0xc);
                  *piVar20 = *piVar20 + -1;
                  UNLOCK();
                  if (*piVar20 == 0) {
                    (**(code **)(*plVar18 + 0x10))(plVar18);
                  }
                }
              }
              FUN_1400020a8(puVar14);
              puVar14 = puVar7;
            } while (puVar7 != (undefined8 *)0x0);
            *puVar15 = 0;
LAB_1434a9e5b:
            bVar5 = 1 < lVar19;
            lVar19 = lVar22;
          } while (bVar5);
        }
      }
      uVar17 = local_74 & ~(uint)uVar21;
      puVar12 = *(uint **)(local_68 + 200);
      if (*(uint **)(local_68 + 200) == (uint *)0x0) {
        puVar12 = local_70;
      }
      iVar6 = *(int *)(local_68 + 0xd0);
      iVar8 = (int)local_60;
      lVar19 = (longlong)iVar8;
      uVar9 = puVar12[lVar19] & uVar17;
      uVar16 = local_60;
      iVar13 = local_78;
      param_1 = local_68;
      if (uVar9 == 0) {
        iVar10 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar10 = iVar6 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar8) {
          iVar11 = iVar8;
        }
        if (iVar10 <= iVar8) break;
        lVar22 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar9 = puVar12[lVar19 + lVar22 + 1];
          if (uVar9 != 0) break;
          lVar22 = lVar22 + 1;
          if (iVar11 - lVar19 == lVar22) goto LAB_1434a9f20;
        }
        uVar17 = 0xffffffff;
        uVar16 = (ulonglong)(iVar8 + (int)lVar22 + 1);
      }
      uVar21 = (ulonglong)(-uVar9 & uVar9);
      uVar2 = uVar21 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar8 = (iVar13 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar6);
  }
LAB_1434a9f20:
  if (*(int *)(param_1 + 0x200) != *(int *)(param_1 + 0x22c)) {
    lVar19 = param_1 + 0x230;
    if (*(longlong *)(param_1 + 0x238) != 0) {
      lVar19 = *(longlong *)(param_1 + 0x238);
    }
    uVar17 = *(uint *)(lVar19 + (ulonglong)(*(int *)(param_1 + 0x240) - 1U & (int)param_2 % 0x40) *
                                4);
    if (uVar17 != 0xffffffff) {
      do {
        puVar12 = (uint *)(*(longlong *)(param_1 + 0x1f8) + (longlong)(int)uVar17 * 0x28);
        if (*puVar12 == (int)param_2 % 0x40) {
          if (((puVar12 + 2 != (uint *)0x0 && puVar12 != (uint *)0x0) && (puVar12[2] == param_2)) &&
             (0 < (int)puVar12[6])) {
            plVar18 = (longlong *)(param_1 + 0x1a8);
            lVar19 = 0;
            do {
              uVar17 = *(uint *)(*(longlong *)(puVar12 + 4) + lVar19 * 4);
              if (*(int *)(param_1 + 0x1b0) != *(int *)(param_1 + 0x1dc)) {
                lVar22 = *(longlong *)(param_1 + 0x1e8);
                if (*(longlong *)(param_1 + 0x1e8) == 0) {
                  lVar22 = param_1 + 0x1e0;
                }
                iVar6 = *(int *)(lVar22 + (ulonglong)(*(int *)(param_1 + 0x1f0) - 1U & uVar17) * 4);
                if (iVar6 != -1) {
                  do {
                    lVar22 = *plVar18 + (longlong)iVar6 * 0x10;
                    if (*(uint *)(*plVar18 + (longlong)iVar6 * 0x10) == uVar17) {
                      if (lVar22 != 0) goto LAB_1434aa06c;
                      break;
                    }
                    iVar6 = *(int *)(lVar22 + 8);
                  } while (iVar6 != -1);
                }
              }
              local_58 = *(longlong *)(puVar12 + 4) + lVar19 * 4;
              local_88 = 0;
              FUN_1407932ac(plVar18,&local_4c,uVar17,&local_58);
              lVar22 = *plVar18 + (longlong)local_4c * 0x10;
LAB_1434aa06c:
              *(undefined4 *)(lVar22 + 4) = 0xffffffff;
              lVar19 = lVar19 + 1;
            } while ((int)lVar19 < (int)puVar12[6]);
          }
          break;
        }
        uVar17 = puVar12[8];
      } while (uVar17 != 0xffffffff);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434aa0b0 FUN_1434aa0b0 body=2901 status=ok
// SIG undefined FUN_1434aa0b0(void)

void FUN_1434aa0b0(longlong *param_1,longlong *param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar24;
  int iVar25;
  bool bVar26;
  undefined4 uVar27;
  undefined1 auStack_238 [32];
  undefined4 local_218;
  undefined4 local_210;
  undefined4 local_208;
  undefined8 local_200;
  wchar_t *local_1f8;
  code *local_1f0;
  undefined1 *local_1e8;
  undefined ***local_1e0;
  code *local_1d8;
  code *local_1d0;
  uint local_1bc;
  ulonglong local_1b8;
  int local_1ac;
  longlong local_1a8;
  undefined1 local_1a0 [8];
  undefined **local_198 [5];
  byte local_16f;
  byte local_16e;
  longlong *local_140;
  longlong local_120;
  longlong local_110;
  longlong local_108;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  longlong local_b4;
  undefined8 local_ac;
  undefined1 local_a4;
  byte local_a3;
  undefined1 local_a2;
  longlong local_a0;
  undefined8 uStack_98;
  longlong local_90;
  undefined8 uStack_88;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  uint uVar23;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (*(longlong *)(param_1[5] + 0x58) == 0) {
    bVar26 = param_2 != (longlong *)0x0;
  }
  else {
    bVar26 = param_2 != (longlong *)0x0;
    if ((bVar26) && (*(longlong *)(*(longlong *)(param_1[5] + 0x58) + 0x1a8) != 0)) {
      if (DAT_14cae8b20 == 0) {
        local_1e0 = local_198;
        local_198[0] = (undefined **)&LAB_14355090c;
        local_1d0 = FUN_14081d0ea;
        local_1d8 = FUN_14081d0ea;
        local_1e8 = &LAB_147b8e16d;
        local_1f0 = (code *)&LAB_140810a38;
        local_1f8 = L"Engine";
        local_200 = 0x800000000;
        local_208 = 0x10000000;
        local_210 = 8;
        local_218 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      if (DAT_14c951858 == 0) {
        local_1e0 = local_198;
        local_198[0] = (undefined **)FUN_1449e2820;
        local_1d0 = FUN_14081d0ea;
        local_1d8 = FUN_14081d0ea;
        local_1e8 = &LAB_1468c5283;
        local_1f0 = FUN_142809da0;
        local_1f8 = L"Engine";
        local_200 = 0x400000000;
        local_208 = 0x10000000;
        local_210 = 8;
        local_218 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      bVar26 = true;
    }
  }
  if ((bVar26) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[0xd] = (longlong)param_2;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xbf;
  lVar6 = (longlong)*(int *)((longlong)param_1 + 0x34);
  if (((-1 < lVar6) &&
      (lVar13 = param_1[5], *(int *)((longlong)param_1 + 0x34) < *(int *)(lVar13 + 0x1428))) &&
     (iVar25 = *(int *)(*(longlong *)(lVar13 + 0x1420) + lVar6 * 4), 0 < iVar25)) {
    iVar16 = *(int *)(*(longlong *)(lVar13 + 0x1400) + lVar6 * 4);
    *(int *)(*(longlong *)(lVar13 + 0x1400) + lVar6 * 4) = iVar25 + -1;
    local_1bc = param_3;
    do {
      lVar6 = param_1[5];
      lVar13 = (longlong)*(int *)((longlong)param_1 + 0x34);
      if (iVar16 < *(int *)(*(longlong *)(lVar6 + 0x1420) + lVar13 * 4)) goto LAB_1434aa403;
      FUN_144a679e2(local_198,*(undefined8 *)(lVar6 + 0x68),
                    (longlong)((*(int *)(lVar6 + 0xa0) * 8 - *(int *)(lVar6 + 0x130)) + -0x235));
      local_198[0] = &PTR_FUN_14a8a3730;
      local_d0 = 0;
      local_c0 = 0;
      local_b8 = *(undefined4 *)((longlong)param_1 + 0x34);
      local_b4 = param_1[8];
      local_a4 = 0;
      local_ac = 0;
      local_a3 = local_a3 & 0xf8;
      local_a2 = 0;
      local_70 = 0;
      local_68 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_64 = 4;
      local_16e = local_16e & 0xfd | *(char *)(param_1[5] + 0x158) * '\x02';
      if (0x1fe < *(int *)((longlong)param_1 + 0x4c)) {
        local_16f = local_16f | 2;
        for (lVar6 = local_110; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x88)) {
          *(byte *)(lVar6 + 0x29) = *(byte *)(lVar6 + 0x29) | 2;
        }
      }
      bVar10 = local_16f;
      local_c8 = param_1;
      if ((local_16f & 2) == 0) {
        local_a4 = 0x10;
        (**(code **)(*param_1 + 0x308))(param_1,local_1a0,local_198,0);
        piVar1 = (int *)(*(longlong *)(param_1[5] + 0x1420) +
                        (longlong)*(int *)((longlong)param_1 + 0x34) * 4);
        *piVar1 = *piVar1 + 1;
      }
      else {
        FUN_140033559(".\\Runtime/Engine/Private/DataChannel.cpp",0xae2,
                      L"SetChannelActor failed. Overflow while sending reliable bunch synchronization."
                     );
      }
      local_198[0] = &PTR_FUN_14a8a3730;
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      local_198[0] = &PTR_FUN_149e37560;
      if (local_108 != 0) {
        FUN_1400020a8();
      }
      plVar8 = local_140;
      local_198[0] = &PTR__purecall_149e35f70;
      if (local_140 != (longlong *)0x0) {
        if (*local_140 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar8);
      }
      lVar6 = local_120;
      if (local_120 != 0) {
        if (*(longlong *)(local_120 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar6);
      }
    } while ((bVar10 & 2) == 0);
    lVar6 = param_1[5];
    lVar13 = (longlong)*(int *)((longlong)param_1 + 0x34);
LAB_1434aa403:
    *(int *)(*(longlong *)(lVar6 + 0x1400) + lVar13 * 4) = iVar16;
    *(undefined4 *)
     (*(longlong *)(param_1[5] + 0x1420) + (longlong)*(int *)((longlong)param_1 + 0x34) * 4) = 0;
    param_2 = (longlong *)param_1[0xd];
    param_3 = local_1bc;
  }
  if (param_2 == (longlong *)0x0) goto LAB_1434aa74e;
  uVar27 = (**(code **)(*param_2 + 0x630))(param_2);
  *(undefined4 *)(param_1 + 0x34) = uVar27;
  lVar6 = param_1[5];
  lVar13 = param_1[0xd];
  param_1[0x33] = *(longlong *)(*(longlong *)(lVar6 + 0x58) + 0x300);
  if (lVar13 == 0) {
    uVar24 = 0;
    uVar12 = 0;
  }
  else {
    uVar24 = *(uint *)(lVar13 + 0xc);
    if ((int)uVar24 < DAT_14c9647dc) {
      lVar19 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
    }
    else {
      lVar19 = 0;
    }
    uVar12 = *(uint *)(lVar19 + 0x10);
    if (*(uint *)(lVar19 + 0x10) == 0) {
      LOCK();
      iVar25 = DAT_14c964868 + 1;
      UNLOCK();
      uVar20 = DAT_14c964868 + 1;
      bVar26 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar25;
      if (bVar26) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar20);
      }
      LOCK();
      uVar12 = *(uint *)(lVar19 + 0x10);
      bVar26 = uVar12 == 0;
      if (bVar26) {
        *(uint *)(lVar19 + 0x10) = uVar20;
        uVar12 = 0;
      }
      UNLOCK();
      if (bVar26) {
        uVar12 = uVar20;
      }
    }
  }
  plVar8 = (longlong *)(lVar6 + 0x1458);
  if (*(int *)(lVar6 + 0x148c) == 0) {
    iVar25 = *(int *)(lVar6 + 0x1460);
    *(int *)(lVar6 + 0x1460) = iVar25 + 1;
    if (*(int *)(lVar6 + 0x1464) == iVar25) {
      FUN_14482b872(plVar8,iVar25);
    }
    uVar20 = *(uint *)(lVar6 + 0x1480);
    uVar14 = (ulonglong)uVar20;
    if (uVar20 == 0) {
      iVar16 = -1;
    }
    else {
      iVar16 = uVar20 + 0x1e;
      if (-1 < (int)(uVar20 - 1)) {
        iVar16 = uVar20 - 1;
      }
      iVar16 = iVar16 >> 5;
    }
    lVar19 = lVar6 + 0x1468;
    iVar11 = uVar20 + 1;
    uVar23 = uVar20 + 0x1f;
    if (-1 < (int)uVar20) {
      uVar23 = uVar20;
    }
    iVar22 = (int)uVar23 >> 5;
    if (iVar22 == iVar16) {
      *(int *)(lVar6 + 0x1480) = iVar11;
    }
    else {
      if (*(int *)(lVar6 + 0x1484) <= (int)uVar20) {
        local_1bc = param_3;
        local_1b8 = uVar14;
        local_1ac = iVar22;
        local_1a8 = lVar19;
        if (uVar20 + 0x20 < 0xa0) {
          iVar16 = 0x80;
        }
        else {
          uVar20 = uVar20 + 0x20 >> 5;
          if (*(int *)(lVar6 + 0x1484) + 0x1fU < 0xa0) {
            uVar23 = 4;
            if (4 < uVar20) {
              uVar23 = uVar20;
            }
          }
          else {
            uVar23 = uVar20 + (uVar20 * 3 >> 3) + 0x10;
          }
          uVar9 = (ulonglong)(uVar23 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar5 = (uint)(uVar9 + 0xf);
              if (uVar23 < 0x1ffd) {
                uVar9 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar9 + 0xf >> 4]];
              }
              else {
                uVar15 = (ulonglong)(uVar5 & 0xfffffff0);
                if (uVar15 < 0x7ff1) {
                  bVar10 = (&DAT_14c841e00)[uVar5 >> 4];
                  uVar17 = 0x32;
                  if (0x32 < bVar10) {
                    uVar17 = (ulonglong)bVar10;
                  }
                  uVar21 = 0x32 - (ulonglong)bVar10;
                  do {
                    uVar9 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar21 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar21 & 0xffffffff] & 0xf) == 0) goto LAB_1434aa971;
                    lVar19 = uVar17 + 1 + uVar21;
                    uVar21 = uVar21 - 1;
                  } while (lVar19 != 0x33);
                }
                uVar9 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar9 = (ulonglong)DAT_14c841df8;
                }
                uVar9 = -uVar9 & (uVar15 + uVar9) - 1;
              }
            }
            else {
              uVar9 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar9,0);
              uVar14 = (ulonglong)*(uint *)(lVar6 + 0x1480);
            }
          }
LAB_1434aa971:
          iVar11 = (int)(uVar9 >> 2);
          iVar16 = -0x20;
          if ((int)uVar20 <= iVar11) {
            iVar16 = iVar11 << 5;
          }
        }
        lVar19 = local_1a8;
        *(int *)(lVar6 + 0x1484) = iVar16;
        FUN_1446efbd8(local_1a8,uVar14);
        iVar11 = *(int *)(lVar6 + 0x1480) + 1;
        uVar14 = local_1b8;
        param_3 = local_1bc;
        iVar22 = local_1ac;
      }
      iVar16 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar16 = iVar11;
      }
      *(int *)(lVar6 + 0x1480) = iVar11;
      if (iVar11 % 0x20 != 0) {
        lVar7 = *(longlong *)(lVar6 + 0x1478);
        if (*(longlong *)(lVar6 + 0x1478) == 0) {
          lVar7 = lVar19;
        }
        bVar10 = -(char)(iVar11 % 0x20);
        *(uint *)(lVar7 + (longlong)(iVar16 >> 5) * 4) =
             (uint)(*(int *)(lVar7 + (longlong)(iVar16 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar7 = (longlong)iVar25;
    if (*(longlong *)(lVar6 + 0x1478) != 0) {
      lVar19 = *(longlong *)(lVar6 + 0x1478);
    }
    bVar10 = (byte)uVar14 & 0x1f;
    puVar2 = (uint *)(lVar19 + (longlong)iVar22 * 4);
    *puVar2 = *puVar2 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    iVar25 = *(int *)(lVar6 + 0x1488);
    lVar7 = (longlong)iVar25;
    iVar16 = *(int *)(*(longlong *)(lVar6 + 0x1458) + 4 + lVar7 * 0x18);
    *(int *)(lVar6 + 0x1488) = iVar16;
    iVar11 = *(int *)(lVar6 + 0x148c) + -1;
    *(int *)(lVar6 + 0x148c) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*(longlong *)(lVar6 + 0x1458) + (longlong)iVar16 * 0x18) = 0xffffffff;
    }
  }
  lVar19 = lVar6 + 0x1468;
  if (*(longlong *)(lVar6 + 0x1478) != 0) {
    lVar19 = *(longlong *)(lVar6 + 0x1478);
  }
  iVar16 = iVar25 + 0x1f;
  if (-1 < iVar25) {
    iVar16 = iVar25;
  }
  puVar2 = (uint *)(lVar19 + (longlong)(iVar16 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar25 & 0x1f);
  iVar16 = 1;
  plVar18 = (longlong *)(*(longlong *)(lVar6 + 0x1458) + lVar7 * 0x18);
  *plVar18 = CONCAT44(uVar12,uVar24);
  plVar18[1] = (longlong)param_1;
  *(undefined4 *)(plVar18 + 2) = 0xffffffff;
  uVar20 = *(int *)(lVar6 + 0x1460) - *(int *)(lVar6 + 0x148c);
  if ((uVar20 != 0) && (uVar20 != 1)) {
    lVar19 = lVar6 + 0x1490;
    if (*(longlong *)(lVar6 + 0x1498) != 0) {
      lVar19 = *(longlong *)(lVar6 + 0x1498);
    }
    iVar11 = *(int *)(lVar19 + (ulonglong)(*(int *)(lVar6 + 0x14a0) - 1U & (uVar12 ^ uVar24)) * 4);
    if (iVar11 != -1) {
      do {
        plVar3 = (longlong *)(*plVar8 + (longlong)iVar11 * 0x18);
        if (*plVar3 == CONCAT44(uVar12,uVar24)) {
          uVar27 = *(undefined4 *)((longlong)plVar18 + 4);
          lVar19 = plVar18[1];
          uVar4 = *(undefined4 *)((longlong)plVar18 + 0xc);
          *(int *)plVar3 = (int)*plVar18;
          *(undefined4 *)((longlong)plVar3 + 4) = uVar27;
          *(int *)(plVar3 + 1) = (int)lVar19;
          *(undefined4 *)((longlong)plVar3 + 0xc) = uVar4;
          FUN_140744af6(plVar8,iVar25,1);
          goto LAB_1434aa646;
        }
        iVar11 = (int)plVar3[2];
      } while (iVar11 != -1);
    }
  }
  if (3 < uVar20) {
    uVar14 = (ulonglong)(uVar20 & 0xfffffffe) + 0xf;
    lVar19 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar16 = 1 << ((byte)lVar19 & 0x1f);
  }
  if (((int)uVar20 < 1) || (iVar16 <= *(int *)(lVar6 + 0x14a0))) {
    uVar12 = *(int *)(lVar6 + 0x14a0) - 1U & (uVar12 ^ uVar24);
    *(uint *)((longlong)plVar18 + 0x14) = uVar12;
    lVar19 = *(longlong *)(lVar6 + 0x1498);
    if (*(longlong *)(lVar6 + 0x1498) == 0) {
      lVar19 = lVar6 + 0x1490;
    }
    *(undefined4 *)(plVar18 + 2) =
         *(undefined4 *)
          (lVar19 + ((longlong)*(int *)(lVar6 + 0x14a0) - 1U & (longlong)(int)uVar12) * 4);
    lVar19 = *(longlong *)(lVar6 + 0x1498);
    if (*(longlong *)(lVar6 + 0x1498) == 0) {
      lVar19 = lVar6 + 0x1490;
    }
    *(int *)(lVar19 + ((longlong)*(int *)(lVar6 + 0x14a0) - 1U & (longlong)(int)uVar12) * 4) =
         iVar25;
  }
  else {
    *(int *)(lVar6 + 0x14a0) = iVar16;
    FUN_1417c3780(plVar8);
  }
LAB_1434aa646:
  plVar8 = *(longlong **)(lVar6 + 0x14a8);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x2a0))(plVar8,lVar13,param_1);
  }
  if ((param_3 & 1) == 0) {
    lVar6 = param_1[0xd];
    plVar8 = (longlong *)FUN_140a478a2(param_1,lVar6,0);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)FUN_140a47a08(param_1,lVar6,1);
    }
    lVar6 = *plVar8;
    plVar8 = (longlong *)plVar8[1];
    if (plVar8 == (longlong *)0x0) {
      param_1[0x13] = lVar6;
      plVar18 = (longlong *)param_1[0x14];
      if (plVar18 != (longlong *)0x0) {
        param_1[0x14] = 0;
LAB_1434aa6d5:
        LOCK();
        plVar8 = plVar18 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar25 = *piVar1;
          UNLOCK();
joined_r0x0001434aa70d:
          if (iVar25 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      param_1[0x13] = lVar6;
      plVar18 = (longlong *)param_1[0x14];
      if (plVar8 == plVar18) {
        LOCK();
        plVar18 = plVar8 + 1;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)*plVar18 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar25 = *piVar1;
          UNLOCK();
          plVar18 = plVar8;
          goto joined_r0x0001434aa70d;
        }
      }
      else {
        param_1[0x14] = (longlong)plVar8;
        if (plVar18 != (longlong *)0x0) goto LAB_1434aa6d5;
      }
    }
  }
  if ((param_3 & 2) == 0) {
    FUN_140b952ca(*(undefined8 *)(*(longlong *)(param_1[5] + 0x58) + 0x858),param_1[0xd]);
    FUN_14096bbf8(*(undefined8 *)(*(longlong *)(param_1[5] + 0x58) + 0x858),param_1[0xd]);
  }
LAB_1434aa74e:
  if ((local_60 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434aac2a FUN_1434aac2a body=12581 status=ok
// SIG undefined FUN_1434aac2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434aac2a(longlong *param_1,longlong *param_2)

{
  char *pcVar1;
  LARGE_INTEGER *pLVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  undefined1 uVar11;
  byte bVar12;
  byte bVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  LARGE_INTEGER LVar18;
  LARGE_INTEGER *pLVar19;
  int *piVar20;
  undefined8 uVar21;
  longlong lVar22;
  LARGE_INTEGER LVar23;
  int iVar24;
  int iVar25;
  longlong *plVar26;
  longlong lVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  int iVar31;
  ulonglong *puVar32;
  uint uVar33;
  undefined *puVar34;
  int iVar35;
  longlong *plVar36;
  int *piVar37;
  ulonglong uVar38;
  LARGE_INTEGER *pLVar39;
  bool bVar40;
  undefined1 auVar41 [16];
  undefined1 auStack_3f8 [32];
  LARGE_INTEGER *local_3d8;
  LARGE_INTEGER *local_3d0;
  LARGE_INTEGER *local_3c8;
  LARGE_INTEGER *pLStack_3c0;
  wchar_t *local_3b8;
  code *local_3b0;
  undefined1 *local_3a8;
  LARGE_INTEGER *local_3a0;
  code *local_398;
  code *local_390;
  byte local_381;
  longlong *local_380;
  ulonglong local_378;
  longlong *local_370;
  uint local_364;
  longlong *local_360;
  undefined4 local_354;
  longlong *local_350;
  LARGE_INTEGER local_348;
  longlong *local_340;
  LARGE_INTEGER *local_338;
  undefined4 local_32c;
  ulonglong local_328;
  undefined8 local_320;
  undefined8 local_318;
  longlong local_310;
  undefined8 local_308;
  LARGE_INTEGER local_300;
  int local_2f8;
  byte local_2d7;
  longlong *local_2a8;
  longlong local_288;
  longlong local_270;
  longlong local_260;
  longlong local_258;
  undefined8 local_250;
  longlong local_248;
  uint local_23c;
  longlong local_238;
  LARGE_INTEGER local_230;
  LARGE_INTEGER local_228;
  LARGE_INTEGER local_220;
  LARGE_INTEGER local_218;
  LARGE_INTEGER local_210;
  longlong *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  longlong *plStack_1e8;
  undefined1 local_1e0;
  undefined8 local_1d8;
  longlong *plStack_1d0;
  LARGE_INTEGER local_1c8;
  LARGE_INTEGER *pLStack_1c0;
  undefined8 local_1b8;
  longlong lStack_1b0;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  LARGE_INTEGER *local_188;
  undefined8 uStack_180;
  byte local_178;
  LARGE_INTEGER *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined2 local_148;
  longlong local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  LARGE_INTEGER local_128;
  LARGE_INTEGER *pLStack_120;
  longlong local_110;
  longlong local_100;
  longlong *local_d0;
  longlong local_b0;
  LARGE_INTEGER local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  if ((*(byte *)(param_1 + 6) & 0x20) != 0) goto LAB_1434ad8e4;
  QueryPerformanceCounter(&local_128);
  LVar18 = local_128;
  local_23c = 0;
  if (param_1[0xd] == 0) {
    if ((*(byte *)(param_2 + 0x1d) & 1) != 0) {
      local_128.QuadPart = 0;
      uVar14 = (**(code **)(**(longlong **)(param_1[5] + 0x68) + 0x2c0))
                         (*(longlong **)(param_1[5] + 0x68),param_2,param_1,&local_128);
      if (((LARGE_INTEGER *)local_128.QuadPart == (LARGE_INTEGER *)0x0) ||
         (((((LARGE_INTEGER *)(local_128.QuadPart + 8))->s).LowPart >> 0x1e & 1) != 0)) {
        if (((char)uVar14 == '\0') &&
           (((~*(byte *)(param_2 + 0x1d) & 10) == 0 &&
            (cVar9 = (**(code **)(*param_2 + 0x38))(param_2), cVar9 != '\0')))) {
          FUN_1434aa0b0(param_1,0,0);
          goto LAB_1434ad863;
        }
      }
      else if ((DAT_14c761624 != '\x01') || ((*(byte *)(local_128.QuadPart + 0x61) & 1) == 0)) {
        uVar11 = 0;
        local_354 = uVar14;
        if ((DAT_14c761484 != 0) && ((*(byte *)(param_2 + 0x1d) & 2) != 0)) {
          uVar11 = (**(code **)(*param_2 + 0x38))(param_2,local_128.QuadPart,0);
        }
        local_348.s = LVar18.s;
        FUN_1434aa0b0(param_1,local_128.QuadPart,uVar11);
        (**(code **)(*param_1 + 0x350))(param_1,param_1[0xd],param_2);
        local_23c = local_23c | 2;
        lVar17 = param_1[0xd];
        *(int *)(lVar17 + 0x78) = (int)param_1[0xf];
        FUN_14020a6cc(lVar17 + 0x70,1);
        goto LAB_1434aaca4;
      }
      *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 0x20;
      if ((*(byte *)(param_1[5] + 0xa4) & 2) == 0) {
        FUN_147a4829a(param_1[5],(longlong)param_1 + 0x34);
      }
    }
  }
  else {
    local_348.s = local_128.s;
    local_354 = 0;
LAB_1434aaca4:
    bVar12 = *(byte *)(param_2 + 0x1d);
    bVar8 = (**(code **)(*param_1 + 0x348))(param_1);
    if ((bVar12 & 4) >> 2 != bVar8) {
      (**(code **)(*param_1 + 0x340))(param_1,(bVar12 & 4) != 0);
    }
    lVar17 = (**(code **)(*(longlong *)param_1[0xd] + 0x498))();
    if (param_1[5] == lVar17) {
LAB_1434aad3f:
      local_23c = local_23c | 1;
    }
    else if (lVar17 != 0) {
      if (DAT_14cabf8e8 == 0) {
        local_128.QuadPart = (LONGLONG)FUN_144ae7c60;
        local_390 = FUN_14081d0ea;
        local_398 = (code *)&LAB_14637144c;
        local_3a0 = &local_128;
        local_3a8 = &LAB_147861001;
        local_3b0 = (code *)&LAB_145acec30;
        local_3b8 = L"Engine";
        pLStack_3c0 = (LARGE_INTEGER *)0x0;
        local_3c8 = (LARGE_INTEGER *)CONCAT44(local_3c8._4_4_,0x1000000c);
        local_3d0 = (LARGE_INTEGER *)CONCAT44(local_3d0._4_4_,8);
        local_3d8 = (LARGE_INTEGER *)CONCAT44(local_3d8._4_4_,0x1df0);
        FUN_14081cfa3(L"/Script/Engine",L"ChildConnection",&DAT_14cabf8e8,&DAT_147861000);
      }
      if ((*(int *)(DAT_14cabf8e8 + 0x38) <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cabf8e8 + 0x38) * 8) == DAT_14cabf8e8 + 0x30)) {
        lVar27 = param_1[5];
        if ((lVar27 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar27);
        }
        if (*(longlong *)(lVar17 + 0x1de8) == lVar27) goto LAB_1434aad3f;
      }
    }
    local_23c = (local_23c & 0xffffff9f) + (*(byte *)((longlong)param_2 + 0xe9) & 4) * 8 +
                (*(uint *)(param_1 + 0x12) & 0x20) * 2;
    cVar9 = (**(code **)(*param_2 + 0x38))(param_2);
    local_370 = param_1;
    if (cVar9 == '\0') {
      local_380 = param_2 + 0x17;
      local_340 = param_1 + 0x2c;
      local_350 = &local_248;
LAB_1434aaf51:
      if ((param_1[5] != 0) && (*(int *)(param_1[5] + 0x134) != 1)) {
        bVar8 = 0;
        FUN_1448fcc30(&local_300,param_2[0x16],0,0);
        cVar9 = (**(code **)(**(longlong **)(param_1[5] + 0x58) + 0x3c0))();
        bVar12 = *(byte *)((longlong)param_2 + 0x29);
        if ((bVar12 & 2) == 0) {
          uVar30 = param_2[0x15];
          if ((longlong)uVar30 < param_2[0x14]) {
            bVar8 = *(byte *)(param_2[0x12] + (longlong)(int)(uVar30 >> 3)) >> ((byte)uVar30 & 7);
            param_2[0x15] = uVar30 + 1;
          }
          else {
            FUN_1405d09b8(param_2,1);
            bVar12 = *(byte *)((longlong)param_2 + 0x29);
            bVar8 = 0;
          }
        }
        if ((bVar12 & 2) != 0) {
          uVar21 = 0x4f;
          goto LAB_1434ab648;
        }
        uVar30 = param_2[0x15];
        if (param_2[0x14] <= (longlong)uVar30) {
          FUN_1405d09b8(param_2,1);
          if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) goto LAB_1434ab04c;
          uVar21 = 0x50;
          goto LAB_1434ab648;
        }
        bVar12 = *(byte *)(param_2[0x12] + (longlong)(int)(uVar30 >> 3));
        param_2[0x15] = uVar30 + 1;
        if ((bVar12 >> ((uint)uVar30 & 7) & 1) == 0) {
LAB_1434ab04c:
          local_228.QuadPart = 0;
          local_230.QuadPart = 0;
          plVar36 = *(longlong **)(param_1[5] + 0x68);
          if (DAT_14c927740 == 0) {
            local_128.QuadPart = (LONGLONG)FUN_1449e2820;
            local_390 = FUN_14081d0ea;
            local_398 = FUN_14081d0ea;
            local_3a0 = &local_128;
            local_3a8 = &LAB_146856450;
            local_3b0 = FUN_1427b121c;
            local_3b8 = L"Engine";
            pLStack_3c0 = (LARGE_INTEGER *)0x0;
            local_3c8 = (LARGE_INTEGER *)CONCAT44(local_3c8._4_4_,0x10000021);
            local_3d0 = (LARGE_INTEGER *)CONCAT44(local_3d0._4_4_,8);
            local_3d8 = (LARGE_INTEGER *)CONCAT44(local_3d8._4_4_,0x28);
            FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
          }
          local_3d8 = &local_228;
          (**(code **)(*plVar36 + 0x2a8))(plVar36,param_2);
          if ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0) {
            FUN_14572541c(param_2);
            uVar21 = 0x51;
            goto LAB_1434ab648;
          }
          cVar10 = (**(code **)(*param_2 + 0x38))();
          LVar18 = local_230;
          if (cVar10 != '\0') {
            FUN_14572541c(param_2);
            uVar21 = 0x52;
            goto LAB_1434ab648;
          }
          if ((LARGE_INTEGER *)local_230.QuadPart == (LARGE_INTEGER *)0x0) goto LAB_1434ab4f7;
          if (DAT_14cac9ca8 == 0) {
            local_128.QuadPart = (LONGLONG)FUN_141030f22;
            local_390 = FUN_14081d0ea;
            local_398 = FUN_14081d0ea;
            local_3a0 = &local_128;
            local_3a8 = &LAB_1478c0a72;
            local_3b0 = (code *)&LAB_1417b2375;
            local_3b8 = L"Engine";
            pLStack_3c0 = (LARGE_INTEGER *)0x1000000000;
            local_3c8 = (LARGE_INTEGER *)CONCAT44(local_3c8._4_4_,0x10000004);
            local_3d0 = (LARGE_INTEGER *)CONCAT44(local_3d0._4_4_,8);
            local_3d8 = (LARGE_INTEGER *)CONCAT44(local_3d8._4_4_,0x390);
            FUN_14081cfa3(L"/Script/Engine",L"Actor");
          }
          LVar23 = local_230;
          if ((*(int *)(DAT_14cac9ca8 + 0x38) <=
               *(int *)(((LARGE_INTEGER *)(LVar18.QuadPart + 0x10))->QuadPart + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(((LARGE_INTEGER *)(LVar18.QuadPart + 0x10))->QuadPart + 0x30) +
               (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
            FUN_14572541c(param_2);
            uVar21 = 0x53;
            goto LAB_1434ab648;
          }
          if ((LARGE_INTEGER *)local_230.QuadPart != (LARGE_INTEGER *)0x0) {
            if (DAT_14cad00c8 == 0) {
              local_128.QuadPart = (LONGLONG)FUN_144a7958c;
              local_390 = FUN_14081d0ea;
              local_398 = FUN_14081d0ea;
              local_3a0 = &local_128;
              local_3a8 = &LAB_1479b7a0c;
              local_3b0 = (code *)&LAB_1463b464e;
              local_3b8 = L"Engine";
              pLStack_3c0 = (LARGE_INTEGER *)0x0;
              local_3c8 = (LARGE_INTEGER *)CONCAT44(local_3c8._4_4_,0x10000005);
              local_3d0 = (LARGE_INTEGER *)CONCAT44(local_3d0._4_4_,8);
              local_3d8 = (LARGE_INTEGER *)CONCAT44(local_3d8._4_4_,0x110);
              FUN_14081cfa3(L"/Script/Engine",L"ActorComponent");
            }
            LVar18 = local_230;
            if ((*(int *)(((LARGE_INTEGER *)(LVar23.QuadPart + 0x10))->QuadPart + 0x38) <
                 *(int *)(DAT_14cad00c8 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(((LARGE_INTEGER *)(LVar23.QuadPart + 0x10))->QuadPart + 0x30) +
                 (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) != DAT_14cad00c8 + 0x30))
            goto LAB_1434ab4f7;
            pLVar19 = (LARGE_INTEGER *)param_1[0xd];
            if (DAT_14c951858 == 0) {
              local_128.QuadPart = (LONGLONG)FUN_1449e2820;
              local_390 = FUN_14081d0ea;
              local_398 = FUN_14081d0ea;
              local_3a0 = &local_128;
              local_3a8 = &LAB_1468c5283;
              local_3b0 = FUN_142809da0;
              local_3b8 = L"Engine";
              pLStack_3c0 = (LARGE_INTEGER *)0x400000000;
              local_3c8 = (LARGE_INTEGER *)CONCAT44(local_3c8._4_4_,0x10000000);
              local_3d0 = (LARGE_INTEGER *)CONCAT44(local_3d0._4_4_,8);
              local_3d8 = (LARGE_INTEGER *)CONCAT44(local_3d8._4_4_,0x50);
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package");
            }
            if ((*(int *)(pLVar19[2].QuadPart + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(pLVar19[2].QuadPart + 0x30) +
                 (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30)) {
              do {
                LVar18 = (LARGE_INTEGER)((LARGE_INTEGER *)(LVar18.QuadPart + 0x20))->QuadPart;
              } while ((LARGE_INTEGER *)LVar18.QuadPart != pLVar19 &&
                       (LARGE_INTEGER *)LVar18.QuadPart != (LARGE_INTEGER *)0x0);
              bVar40 = pLVar19 == (LARGE_INTEGER *)0x0 ||
                       (LARGE_INTEGER *)LVar18.QuadPart != (LARGE_INTEGER *)0x0;
            }
            else {
              if (pLVar19 != (LARGE_INTEGER *)LVar18.QuadPart) {
LAB_1434ab4b3:
                LVar23 = LVar18;
                LVar18 = LVar23;
                if ((LARGE_INTEGER *)((LARGE_INTEGER *)(LVar23.QuadPart + 0x20))->QuadPart !=
                    (LARGE_INTEGER *)0x0) goto code_r0x0001434ab4c2;
                goto LAB_1434ab4d4;
              }
              bVar40 = false;
            }
            goto LAB_1434ab4df;
          }
          goto LAB_1434ab4f7;
        }
        LVar18.QuadPart = ((LARGE_INTEGER *)(param_1 + 0xd))->QuadPart;
        goto LAB_1434ab599;
      }
    }
LAB_1434aad96:
    local_a8.QuadPart = 0;
    local_a0 = 0x1000000000;
    iVar16 = (int)param_1[0x1a];
    if (iVar16 == 0) {
      uVar30 = 1;
      uVar38 = 0;
      iVar35 = 0;
      iVar31 = 0;
    }
    else {
      pLVar19 = (LARGE_INTEGER *)param_1[0x19];
      if ((LARGE_INTEGER *)param_1[0x19] == (LARGE_INTEGER *)0x0) {
        pLVar19 = (LARGE_INTEGER *)(param_1 + 0x17);
      }
      uVar33 = (pLVar19->s).LowPart;
      if (uVar33 == 0) {
        iVar35 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar35 = iVar16 + -1;
        }
        uVar38 = 0;
        uVar30 = (ulonglong)(uint)(iVar35 >> 5);
        if (iVar35 >> 5 < 1) {
          uVar30 = uVar38;
        }
        iVar35 = 0;
        do {
          if (uVar30 == uVar38) goto LAB_1434ad828;
          iVar35 = iVar35 + 0x20;
          uVar33 = *(uint *)((longlong)pLVar19 + uVar38 * 4 + 4);
          uVar38 = uVar38 + 1;
        } while (uVar33 == 0);
      }
      else {
        uVar38 = 0;
        iVar35 = 0;
      }
      uVar30 = (ulonglong)(-uVar33 & uVar33);
      uVar3 = uVar30 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar31 = (iVar35 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar16 <= iVar31) {
        iVar31 = iVar16;
      }
    }
    if (iVar31 < iVar16) {
      local_360 = param_1 + 0x15;
      uVar33 = 0xffffffff;
      local_338 = (LARGE_INTEGER *)(param_1 + 0x17);
      do {
        local_380 = (longlong *)CONCAT44(local_380._4_4_,iVar35);
        lVar17 = *local_360;
        lVar27 = *(longlong *)(lVar17 + 8 + (longlong)iVar31 * 0x20);
        plVar36 = *(longlong **)(lVar27 + 0x48);
        if (plVar36 == (longlong *)0x0) {
          if (((((*(int *)(lVar27 + 0xdc) == 0) ||
                (uVar15 = *(uint *)(lVar27 + 0xd8), (int)uVar15 < 0)) ||
               (DAT_14c9647dc <= (int)uVar15)) ||
              ((plVar26 = (longlong *)
                          ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
               plVar26 == (longlong *)0x0 || ((int)plVar26[2] != *(int *)(lVar27 + 0xdc))))) ||
             (((*(uint *)(plVar26 + 1) & 0x10200000) != 0 ||
              ((*plVar26 == 0 || ((*(uint *)(*plVar26 + 8) >> 0x1e & 1) != 0))))))
          goto LAB_1434ad4ab;
          if ((*(uint *)(plVar26 + 1) & 0x10200000) == 0) goto LAB_1434ad363;
        }
        else if ((*(uint *)(plVar36 + 1) >> 0x1e & 1) == 0) {
LAB_1434ad363:
          if ((*(longlong *)
                (*(longlong *)(*(longlong *)(*(longlong *)(lVar27 + 0x58) + 0x28) + 0x58) + 0xf0) !=
               0) && (uVar15 = *(uint *)(lVar27 + 0xc), (uVar15 & 8) != 0)) {
            if ((plVar36 == (longlong *)0x0) &&
               ((((*(int *)(lVar27 + 0xdc) == 0 ||
                  (uVar5 = *(uint *)(lVar27 + 0xd8), (int)uVar5 < 0)) ||
                 (DAT_14c9647dc <= (int)uVar5)) ||
                (((plVar36 = (longlong *)
                             ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                  plVar36 == (longlong *)0x0 || ((int)plVar36[2] != *(int *)(lVar27 + 0xdc))) ||
                 (((*(uint *)(plVar36 + 1) & 0x10200000) != 0 ||
                  (plVar36 = (longlong *)*plVar36, plVar36 == (longlong *)0x0)))))))) {
              plVar36 = (longlong *)0x0;
            }
            else {
              (**(code **)(*plVar36 + 0x218))(plVar36);
              uVar15 = *(uint *)(lVar27 + 0xc);
              plVar36 = *(longlong **)(lVar27 + 0x48);
            }
            *(uint *)(lVar27 + 0xc) = uVar15 & 0xfffffff7;
          }
          if (((plVar36 != (longlong *)0x0) ||
              (((*(int *)(lVar27 + 0xdc) != 0 &&
                (uVar15 = *(uint *)(lVar27 + 0xd8), -1 < (int)uVar15)) &&
               ((((int)uVar15 < DAT_14c9647dc &&
                 (((puVar28 = (undefined8 *)
                              ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
                   puVar28 != (undefined8 *)0x0 &&
                   (*(int *)(puVar28 + 2) == *(int *)(lVar27 + 0xdc))) &&
                  ((*(uint *)(puVar28 + 1) & 0x10200000) == 0)))) &&
                (plVar36 = (longlong *)*puVar28, plVar36 != (longlong *)0x0)))))) &&
             (((*(uint *)(plVar36 + 1) >> 0x1e & 1) == 0 &&
              (((((*(longlong *)(lVar27 + 0x50) == 0 ||
                  (plVar26 = *(longlong **)(*(longlong *)(lVar27 + 0x50) + 0x58),
                  plVar26 == (longlong *)0x0)) ||
                 (cVar9 = (**(code **)(*plVar26 + 0x3f8))(), cVar9 == '\0')) &&
                ((*(longlong *)(lVar27 + 0x58) == 0 ||
                 (*(int *)(*(longlong *)(lVar27 + 0x58) + 0x100) < 1)))) &&
               ((FUN_1400f5d32(*(undefined8 *)(lVar27 + 0x20),**(undefined8 **)(lVar27 + 0x30),
                               plVar36), (*(uint *)(plVar36 + 1) >> 0x1e & 1) == 0 &&
                (*(code **)(*plVar36 + 0x220) != (code *)0x144aff47c)))))))) {
            (**(code **)(*plVar36 + 0x220))(plVar36);
          }
        }
        else {
LAB_1434ad4ab:
          cVar9 = (**(code **)(**(longlong **)(local_370[5] + 0x58) + 0x3c0))();
          uVar3 = local_a0;
          if (cVar9 == '\0') {
            LVar18 = *(LARGE_INTEGER *)(*(longlong *)(lVar17 + (longlong)iVar31 * 0x20 + 8) + 0xd8);
            lVar17 = (longlong)(int)local_a0;
            uVar15 = (int)local_a0 + 1;
            local_a0 = CONCAT44(local_a0._4_4_,uVar15);
            if (local_a0._4_4_ < uVar15) {
              FUN_1457a2cc6(&local_128,uVar3 & 0xffffffff);
            }
            LVar23 = local_a8;
            if ((LARGE_INTEGER *)local_a8.QuadPart == (LARGE_INTEGER *)0x0) {
              LVar23.QuadPart = (LONGLONG)&local_128;
            }
            *(LARGE_INTEGER *)(LVar23.QuadPart + lVar17 * 8) = LVar18;
            FUN_140c69f9a(local_360,iVar31);
          }
        }
        param_1 = local_370;
        uVar33 = uVar33 & ~(uint)uVar30;
        pLVar19 = (LARGE_INTEGER *)local_370[0x19];
        if ((LARGE_INTEGER *)local_370[0x19] == (LARGE_INTEGER *)0x0) {
          pLVar19 = local_338;
        }
        iVar16 = (int)local_370[0x1a];
        iVar31 = (int)uVar38;
        lVar17 = (longlong)iVar31;
        uVar15 = *(uint *)((longlong)pLVar19 + lVar17 * 4) & uVar33;
        iVar35 = (int)local_380;
        if (uVar15 == 0) {
          iVar24 = iVar16 + 0x1e;
          if (-1 < iVar16 + -1) {
            iVar24 = iVar16 + -1;
          }
          iVar24 = iVar24 >> 5;
          iVar25 = iVar24;
          if (iVar24 < iVar31) {
            iVar25 = iVar31;
          }
          if (iVar24 <= iVar31) break;
          lVar27 = 0;
          while( true ) {
            iVar35 = iVar35 + 0x20;
            uVar15 = *(uint *)((longlong)pLVar19 + lVar27 * 4 + lVar17 * 4 + 4);
            if (uVar15 != 0) break;
            lVar27 = lVar27 + 1;
            if (iVar25 - lVar17 == lVar27) goto LAB_1434ad673;
          }
          uVar38 = (ulonglong)(iVar31 + (int)lVar27 + 1);
          uVar33 = 0xffffffff;
        }
        uVar30 = (ulonglong)(-uVar15 & uVar15);
        uVar3 = uVar30 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar31 = (iVar35 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      } while (iVar31 < iVar16);
LAB_1434ad673:
      if (0 < (int)local_a0) {
        uVar21 = *(undefined8 *)(*(longlong *)(local_370[5] + 0x58) + 0x858);
        local_300.QuadPart = (LONGLONG)&local_128;
        if ((LARGE_INTEGER *)local_a8.QuadPart != (LARGE_INTEGER *)0x0) {
          local_300 = local_a8;
        }
        local_2f8 = (int)local_a0;
        lVar17 = local_370[0xd];
        if ((lVar17 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar17);
LAB_1434ad6d8:
          uVar33 = *(uint *)(lVar17 + 0xc);
          if ((int)uVar33 < DAT_14c9647dc) {
            lVar17 = (ulonglong)((uVar33 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8);
          }
          else {
            lVar17 = 0;
          }
          iVar16 = *(int *)(lVar17 + 0x10);
          if (*(int *)(lVar17 + 0x10) == 0) {
            LOCK();
            iVar16 = DAT_14c964868 + 1;
            UNLOCK();
            iVar35 = DAT_14c964868 + 1;
            bVar40 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar16;
            if (bVar40) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar35);
            }
            LOCK();
            iVar16 = *(int *)(lVar17 + 0x10);
            bVar40 = iVar16 == 0;
            if (bVar40) {
              *(int *)(lVar17 + 0x10) = iVar35;
              iVar16 = 0;
            }
            UNLOCK();
            if (bVar40) {
              iVar16 = iVar35;
            }
          }
          uVar29 = CONCAT44(iVar16,uVar33);
        }
        else {
          if (lVar17 != 0) goto LAB_1434ad6d8;
          uVar29 = 0;
        }
        FUN_1403cc6be(uVar21,uVar29,&local_300,param_1);
      }
    }
LAB_1434ad828:
    if ((char)local_354 == '\x01' && (longlong *)param_1[0xd] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0xd] + 0x420))();
    }
    LVar18 = local_348;
    if ((LARGE_INTEGER *)local_a8.QuadPart != (LARGE_INTEGER *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1434ad863:
  cVar9 = (**(code **)(**(longlong **)(param_1[5] + 0x58) + 0x3c0))();
  if ((cVar9 == '\0') && (0.0 < DAT_14caf2160)) {
    QueryPerformanceCounter(&local_128);
    lVar17 = local_128.QuadPart - (longlong)LVar18;
    auVar41._8_4_ = (int)((ulonglong)lVar17 >> 0x20);
    auVar41._0_8_ = lVar17;
    auVar41._12_4_ = 0x45300000;
    *(float *)(*(longlong *)(param_1[5] + 0x58) + 0x8c0) =
         (float)((((double)CONCAT44(0x43300000,(int)lVar17) - 4503599627370496.0) +
                 (auVar41._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0) +
         *(float *)(*(longlong *)(param_1[5] + 0x58) + 0x8c0);
  }
LAB_1434ad8e4:
  if ((local_60 ^ (ulonglong)auStack_3f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x0001434ab4c2:
  LVar18.QuadPart = ((LARGE_INTEGER *)(LVar23.QuadPart + 0x20))->QuadPart;
  if (((((LARGE_INTEGER *)(LVar23.QuadPart + 8))->s).LowPart >> 0x1c & 1) == 0) goto LAB_1434ab4b3;
  LVar18.QuadPart = FUN_142840154();
LAB_1434ab4d4:
  if ((LARGE_INTEGER *)LVar18.QuadPart == (LARGE_INTEGER *)0x0) {
    LVar18.QuadPart = ((LARGE_INTEGER *)(LVar23.QuadPart + 0x20))->QuadPart;
    goto LAB_1434ab4b3;
  }
  bVar40 = (LARGE_INTEGER *)LVar18.QuadPart == pLVar19;
LAB_1434ab4df:
  if ((bVar40) || (cVar9 != '\x01')) {
LAB_1434ab4f7:
    if (cVar9 == '\0') {
      bVar12 = *(byte *)((longlong)param_2 + 0x29);
      if ((bVar12 & 2) == 0) {
        uVar30 = param_2[0x15];
        if (param_2[0x14] <= (longlong)uVar30) {
          FUN_1405d09b8(param_2,1);
          bVar12 = *(byte *)((longlong)param_2 + 0x29);
          goto LAB_1434ab583;
        }
        bVar40 = (*(byte *)(param_2[0x12] + (longlong)(int)(uVar30 >> 3)) >> ((uint)uVar30 & 7) & 1)
                 != 0;
        param_2[0x15] = uVar30 + 1;
      }
      else {
LAB_1434ab583:
        bVar40 = false;
      }
      if ((bVar12 & 2) != 0) {
        uVar21 = 0x56;
        goto LAB_1434ab648;
      }
      LVar18 = local_230;
      if (bVar40) goto LAB_1434ab599;
      uVar33 = (**(code **)(*param_2 + 0x48))(param_2);
      if ((uVar33 < 0x1e) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) {
LAB_1434ac383:
        local_238 = 0;
        local_1c8.QuadPart = 0;
        plVar36 = *(longlong **)(param_1[5] + 0x68);
        if (DAT_14c927740 == 0) {
          local_128.QuadPart = (LONGLONG)FUN_1449e2820;
          local_390 = FUN_14081d0ea;
          local_398 = FUN_14081d0ea;
          local_3a0 = &local_128;
          local_3a8 = &LAB_146856450;
          local_3b0 = FUN_1427b121c;
          local_3b8 = L"Engine";
          pLStack_3c0 = (LARGE_INTEGER *)0x0;
          local_3c8 = (LARGE_INTEGER *)CONCAT44(local_3c8._4_4_,0x10000021);
          local_3d0 = (LARGE_INTEGER *)CONCAT44(local_3d0._4_4_,8);
          local_3d8 = (LARGE_INTEGER *)CONCAT44(local_3d8._4_4_,0x28);
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        local_3d8 = &local_1c8;
        (**(code **)(*plVar36 + 0x2a8))(plVar36,param_2);
        lVar17 = local_238;
        if ((LARGE_INTEGER *)local_1c8.QuadPart != (LARGE_INTEGER *)0x0) {
          if (local_238 == 0) {
LAB_1434ac41c:
            bVar12 = 1;
            if (((LARGE_INTEGER *)local_230.QuadPart == (LARGE_INTEGER *)0x0) &&
               ((*(byte *)(param_1[5] + 0xa4) & 2) == 0)) {
              FUN_14572541c(param_2);
              uVar21 = 0x57;
              goto LAB_1434ab648;
            }
            lVar17 = 0;
          }
          else {
            if (DAT_14c949118 == 0) {
              local_220.QuadPart = (LONGLONG)FUN_140631fbe;
              lVar27 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
              DAT_14c949118 = lVar27;
              FUN_1446f470e(&local_218,L"Class",1);
              local_3a0 = &local_220;
              local_3a8 = &LAB_146891e90;
              local_3b0 = (code *)&LAB_146273097;
              pLStack_3c0 = (LARGE_INTEGER *)0x149e2b68a;
              local_3b8 = (wchar_t *)CONCAT44(local_3b8._4_4_,199);
              local_3c8 = (LARGE_INTEGER *)&DAT_00000020;
              local_3d0 = (LARGE_INTEGER *)CONCAT44(local_3d0._4_4_,0x10000000);
              local_3d8._0_4_ = 8;
              FUN_14574b4b2(lVar27);
              DAT_14c949118 = lVar27;
              if (DAT_14c951858 == 0) {
                local_128.QuadPart = (LONGLONG)FUN_1449e2820;
                local_390 = FUN_14081d0ea;
                local_398 = FUN_14081d0ea;
                local_3a0 = &local_128;
                local_3a8 = &LAB_1468c5283;
                local_3b0 = FUN_142809da0;
                local_3b8 = L"Engine";
                pLStack_3c0 = (LARGE_INTEGER *)0x400000000;
                local_3c8 = (LARGE_INTEGER *)CONCAT44(local_3c8._4_4_,0x10000000);
                local_3d0 = (LARGE_INTEGER *)CONCAT44(local_3d0._4_4_,8);
                local_3d8._0_4_ = 0x50;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              }
              lVar27 = DAT_14c949118;
              if (DAT_14c948f88 == 0) {
                local_210.QuadPart = (LONGLONG)&DAT_1427db2a2;
                lVar22 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                DAT_14c948f88 = lVar22;
                FUN_1446f470e(&local_1c8,L"Struct",1);
                local_3a0 = &local_210;
                local_3a8 = &LAB_146891313;
                local_3b0 = FUN_146272f63;
                pLStack_3c0 = (LARGE_INTEGER *)0x149e2b68a;
                local_3b8 = (wchar_t *)CONCAT44(local_3b8._4_4_,199);
                local_3c8 = (LARGE_INTEGER *)&DAT_00000008;
                local_3d0 = (LARGE_INTEGER *)CONCAT44(local_3d0._4_4_,0x10000020);
                local_3d8._0_4_ = 8;
                FUN_14574b4b2(lVar22);
                DAT_14c948f88 = lVar22;
                if (DAT_14c927740 == 0) {
                  local_128.QuadPart = (LONGLONG)FUN_1449e2820;
                  local_390 = FUN_14081d0ea;
                  local_398 = FUN_14081d0ea;
                  local_3a0 = &local_128;
                  local_3a8 = &LAB_146856450;
                  local_3b0 = FUN_1427b121c;
                  local_3b8 = L"Engine";
                  pLStack_3c0 = (LARGE_INTEGER *)0x0;
                  local_3c8 = (LARGE_INTEGER *)CONCAT44(local_3c8._4_4_,0x10000021);
                  local_3d0 = (LARGE_INTEGER *)CONCAT44(local_3d0._4_4_,8);
                  local_3d8._0_4_ = 0x28;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                }
                lVar6 = DAT_14c948f88;
                lVar22 = DAT_14c927740;
                uVar21 = FUN_1400163b0();
                local_3d8 = (LARGE_INTEGER *)0x149e6bce8;
                FUN_14574b446(uVar21,lVar6,lVar22,L"/Script/CoreUObject");
              }
              local_3d8 = (LARGE_INTEGER *)0x149e6ee30;
              FUN_14574b446(DAT_14c948f88,lVar27);
              param_1 = local_370;
            }
            if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30))
            goto LAB_1434ac41c;
            if (DAT_14c927740 == 0) {
              local_128.QuadPart = (LONGLONG)FUN_1449e2820;
              local_390 = FUN_14081d0ea;
              local_398 = FUN_14081d0ea;
              local_3a0 = &local_128;
              local_3a8 = &LAB_146856450;
              local_3b0 = FUN_1427b121c;
              local_3b8 = L"Engine";
              pLStack_3c0 = (LARGE_INTEGER *)0x0;
              local_3c8 = (LARGE_INTEGER *)CONCAT44(local_3c8._4_4_,0x10000021);
              local_3d0 = (LARGE_INTEGER *)CONCAT44(local_3d0._4_4_,8);
              local_3d8 = (LARGE_INTEGER *)CONCAT44(local_3d8._4_4_,0x28);
              FUN_14081cfa3(L"/Script/CoreUObject",L"Object");
            }
            if (lVar17 == DAT_14c927740) {
              FUN_14572541c(param_2);
              uVar21 = 0x58;
              goto LAB_1434ab648;
            }
            if (DAT_14cac9ca8 == 0) {
              local_128.QuadPart = (LONGLONG)FUN_141030f22;
              local_390 = FUN_14081d0ea;
              local_398 = FUN_14081d0ea;
              local_3a0 = &local_128;
              local_3a8 = &LAB_1478c0a72;
              local_3b0 = (code *)&LAB_1417b2375;
              local_3b8 = L"Engine";
              pLStack_3c0 = (LARGE_INTEGER *)0x1000000000;
              local_3c8 = (LARGE_INTEGER *)CONCAT44(local_3c8._4_4_,0x10000004);
              local_3d0 = (LARGE_INTEGER *)CONCAT44(local_3d0._4_4_,8);
              local_3d8 = (LARGE_INTEGER *)CONCAT44(local_3d8._4_4_,0x390);
              FUN_14081cfa3(L"/Script/Engine",L"Actor");
              if (DAT_14cac9ca8 != 0) goto LAB_1434ac78d;
            }
            else {
LAB_1434ac78d:
              if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(lVar17 + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
                  DAT_14cac9ca8 + 0x30)) {
                FUN_14572541c(param_2);
                uVar21 = 0x59;
                goto LAB_1434ab648;
              }
            }
            bVar12 = 0;
          }
          LVar23 = (LARGE_INTEGER)((LARGE_INTEGER *)(param_1 + 0xd))->QuadPart;
          local_128 = LVar23;
          uVar33 = (**(code **)(*param_2 + 0x48))(param_2);
          if (uVar33 < 0x12) goto LAB_1434ac61d;
          bVar13 = *(byte *)((longlong)param_2 + 0x29);
          bVar40 = true;
          if ((bVar13 & 2) == 0) {
            uVar30 = param_2[0x15];
            if ((longlong)uVar30 < param_2[0x14]) {
              bVar4 = *(byte *)(param_2[0x12] + (longlong)(int)(uVar30 >> 3));
              param_2[0x15] = uVar30 + 1;
              bVar40 = (bVar4 >> ((uint)uVar30 & 7) & 1) == 0;
            }
            else {
              FUN_1405d09b8(param_2,1);
              bVar13 = *(byte *)((longlong)param_2 + 0x29);
            }
          }
          if ((bVar13 & 2) != 0) {
            LVar18.QuadPart = 0;
            goto LAB_1434ab599;
          }
          if (bVar40) {
            (**(code **)(*param_2 + 0x150))(param_2,&local_128);
            if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
              LVar23 = local_128;
              if ((LARGE_INTEGER *)local_230.QuadPart == (LARGE_INTEGER *)0x0 &&
                  (LARGE_INTEGER *)local_128.QuadPart == (LARGE_INTEGER *)0x0) {
                LVar23 = (LARGE_INTEGER)((LARGE_INTEGER *)(param_1 + 0xd))->QuadPart;
                local_128 = LVar23;
              }
              goto LAB_1434ac61d;
            }
LAB_1434ac639:
            LVar18.QuadPart = 0;
          }
          else {
LAB_1434ac61d:
            if ((bool)(bVar12 & (LARGE_INTEGER *)local_230.QuadPart == (LARGE_INTEGER *)0x0)) {
              if ((*(byte *)(param_1[5] + 0xa4) & 2) != 0) goto LAB_1434ac639;
            }
            else {
              LVar18 = local_230;
              if ((LARGE_INTEGER *)local_230.QuadPart != (LARGE_INTEGER *)0x0) goto LAB_1434ab599;
            }
            local_3c8 = (LARGE_INTEGER *)0x0;
            pLStack_3c0 = (LARGE_INTEGER *)0x0;
            local_3d0 = (LARGE_INTEGER *)((ulonglong)local_3d0 & 0xffffffffffffff00);
            local_3d8 = (LARGE_INTEGER *)0x0;
            local_230.QuadPart = FUN_140584627(LVar23.QuadPart,lVar17,0);
            (**(code **)(*(longlong *)param_1[0xd] + 0x2d8))
                      ((longlong *)param_1[0xd],local_230.QuadPart);
            FUN_1435af248(*(undefined8 *)(*(longlong *)(param_1[5] + 0x58) + 0x1b8),&local_228);
            LVar18 = local_230;
            if (((LARGE_INTEGER *)local_230.QuadPart != (LARGE_INTEGER *)0x0) &&
               (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(local_230.QuadPart);
            }
            iVar16 = (int)param_1[0x2d];
            *(uint *)(param_1 + 0x2d) = iVar16 + 1U;
            if (*(uint *)((longlong)param_1 + 0x16c) < iVar16 + 1U) {
              FUN_140845902(local_340,iVar16);
            }
            ((LARGE_INTEGER *)(*local_340 + (longlong)iVar16 * 8))->QuadPart = (LONGLONG)LVar18;
            if (((LARGE_INTEGER *)LVar18.QuadPart != (LARGE_INTEGER *)0x0) && (DAT_14c950c29 != 0))
            {
              FUN_1456cec3c(LVar18.QuadPart);
            }
            LVar18 = local_230;
            if (local_228.QuadPart != 0) {
              FUN_140325a06(*(longlong *)(*(longlong *)(param_1[5] + 0x58) + 0x1b8) + 0xa8,
                            &local_1c8);
              LVar18 = local_230;
            }
          }
          goto LAB_1434ab599;
        }
        bVar40 = false;
      }
      else {
        uVar30 = param_2[0x15];
        if (param_2[0x14] <= (longlong)uVar30) {
          FUN_1405d09b8(param_2,1);
          goto LAB_1434ac383;
        }
        bVar12 = *(byte *)(param_2[0x12] + (longlong)(int)(uVar30 >> 3));
        param_2[0x15] = uVar30 + 1;
        if ((bVar12 >> ((uint)uVar30 & 7) & 1) == 0) goto LAB_1434ac383;
        puVar32 = (ulonglong *)param_2[1];
        pcVar1 = (char *)*puVar32 + 1;
        if ((char *)puVar32[1] < pcVar1) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_128);
          uVar11 = local_128.s.LowPart._0_1_;
        }
        else {
          uVar11 = *(char *)*puVar32;
          *puVar32 = (ulonglong)pcVar1;
        }
        local_238 = 0;
        bVar40 = uVar11 == '\x01';
      }
      bVar7 = true;
      if ((LARGE_INTEGER *)local_230.QuadPart != (LARGE_INTEGER *)0x0) {
        if ((param_1[5] != 0) && (*(longlong *)(param_1[5] + 0x58) != 0)) {
          FUN_1435a0250();
        }
        local_1c8 = local_230;
        if (((LARGE_INTEGER *)local_230.QuadPart != (LARGE_INTEGER *)0x0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(local_230.QuadPart);
        }
        local_128.QuadPart = (LONGLONG)&local_1c8;
        FUN_1432619ce(local_340,&local_128);
        if ((param_1[5] != 0) && (lVar17 = *(longlong *)(param_1[5] + 0x58), lVar17 != 0)) {
          FUN_14098f3d0(lVar17,local_230.QuadPart);
        }
        if (!bVar40) {
          (**(code **)(*(longlong *)param_1[0xd] + 0x2e0))
                    ((longlong *)param_1[0xd],local_230.QuadPart);
          (**(code **)(*(longlong *)local_230 + 0x228))();
          LVar18 = local_230;
          FUN_144757f48(local_230.QuadPart,0x40000000);
          uVar33 = *(uint *)(LVar18.QuadPart + 0xc);
          if ((int)uVar33 < DAT_14c9647dc) {
            lVar17 = (ulonglong)((uVar33 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8);
          }
          else {
            lVar17 = 0;
          }
          do {
            uVar33 = *(uint *)(lVar17 + 8);
            if ((uVar33 >> 0x15 & 1) != 0) break;
            LOCK();
            bVar40 = uVar33 == *(uint *)(lVar17 + 8);
            if (bVar40) {
              *(uint *)(lVar17 + 8) = uVar33 | 0x200000;
            }
            UNLOCK();
          } while (!bVar40);
        }
      }
      goto LAB_1434ab682;
    }
    LVar18 = local_230;
    if ((LARGE_INTEGER *)local_230.QuadPart == (LARGE_INTEGER *)0x0) {
      FUN_14572541c(param_2);
      uVar21 = 0x55;
      goto LAB_1434ab648;
    }
LAB_1434ab599:
    bVar7 = false;
  }
  else {
    FUN_14572541c(param_2);
    uVar21 = 0x54;
LAB_1434ab648:
    FUN_1459b235e(&local_128,uVar21);
    FUN_147a47702(local_380,&local_128);
    if (local_100 != 0) {
      (**(code **)(local_100 + -0x10))(local_100 + -0x10);
    }
    if (local_110 != 0) {
      FUN_1400020a8();
    }
    bVar7 = false;
LAB_1434ab682:
    LVar18.QuadPart = 0;
  }
  if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
    if (bVar7) {
      FUN_1400904d6(&local_300,param_2);
      goto LAB_1434ab6aa;
    }
    local_1c8.QuadPart = local_1c8.QuadPart & 0xffffffff00000000;
    (**(code **)(*param_2 + 0x188))(param_2,&local_1c8);
    if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
      FUN_1400904d6(&local_300,param_2);
    }
    else {
      FUN_1459b235e(&local_128,0x5b);
      FUN_147a47702(local_380,&local_128);
      if (local_100 != 0) {
        (**(code **)(local_100 + -0x10))(local_100 + -0x10);
      }
      if (local_110 != 0) {
        FUN_1400020a8();
      }
      LVar18.QuadPart = 0;
    }
  }
  else {
    FUN_1459b235e(&local_128,0x5a);
    FUN_147a47702(local_380,&local_128);
    if (local_100 != 0) {
      (**(code **)(local_100 + -0x10))(local_100 + -0x10);
    }
    if (local_110 != 0) {
      FUN_1400020a8();
    }
LAB_1434ab6aa:
    LVar18.QuadPart = 0;
  }
  if ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0) {
    lVar17 = param_1[5];
    if ((*(byte *)(lVar17 + 0xa4) & 2) != 0) {
      *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 0x20;
      local_300.QuadPart = (LONGLONG)&PTR_FUN_149e73df0;
      if (local_248 != 0) {
        (**(code **)(local_248 + -0x10))(local_248 + -0x10);
      }
      local_300.QuadPart = (LONGLONG)&PTR_FUN_149e37220;
      if (local_270 != 0) {
        FUN_1400020a8();
      }
      local_300.QuadPart = (LONGLONG)&PTR__purecall_149e35f70;
      if (local_2a8 != (longlong *)0x0) {
        if (*local_2a8 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_2a8);
      }
      if (local_288 != 0) {
        if (*(longlong *)(local_288 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_288);
      }
      goto LAB_1434aad96;
    }
    FUN_1459b235e(&local_1c8,0x4e);
    FUN_147a481b9(&local_128,local_380,&local_1c8);
    FUN_143587ad8(lVar17,&local_128);
    if (local_100 != 0) {
      (**(code **)(local_100 + -0x10))(local_100 + -0x10);
    }
    LVar18 = local_348;
    if (local_110 != 0) {
      FUN_1400020a8();
    }
    lVar17 = CONCAT44(uStack_19c,uStack_1a0);
    if (lVar17 != 0) {
      (**(code **)(lVar17 + -0x10))(lVar17 + -0x10);
    }
    if (lStack_1b0 != 0) {
      FUN_1400020a8();
    }
    local_300.QuadPart = (LONGLONG)&PTR_FUN_149e73df0;
    if (local_248 != 0) {
      (**(code **)(local_248 + -0x10))(local_248 + -0x10);
    }
    local_300.QuadPart = (LONGLONG)&PTR_FUN_149e37220;
    if (local_270 != 0) {
      FUN_1400020a8();
    }
    local_300.QuadPart = (LONGLONG)&PTR__purecall_149e35f70;
    if (local_2a8 != (longlong *)0x0) {
      if (*local_2a8 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_2a8);
    }
    goto LAB_1434adac6;
  }
  if (local_260 == 0) goto LAB_1434abbd8;
  if (((LARGE_INTEGER *)LVar18.QuadPart == (LARGE_INTEGER *)0x0) ||
     (((((LARGE_INTEGER *)(LVar18.QuadPart + 8))->s).LowPart >> 0x1e & 1) != 0)) {
    if ((param_1[0xd] == 0) || ((*(uint *)(param_1[0xd] + 8) >> 0x1e & 1) != 0)) {
      *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 0x20;
    }
    goto LAB_1434abbd8;
  }
  pLVar19 = (LARGE_INTEGER *)FUN_140a478a2(param_1,LVar18.QuadPart);
  if (pLVar19 == (LARGE_INTEGER *)0x0) {
    pLVar19 = (LARGE_INTEGER *)FUN_140a47a08(param_1,LVar18.QuadPart);
  }
  lVar17 = pLVar19->QuadPart;
  pLVar39 = *(LARGE_INTEGER **)(lVar17 + 0x48);
  local_338 = pLVar19;
  if ((pLVar39 != (LARGE_INTEGER *)0x0) ||
     ((((((*(int *)(lVar17 + 0xdc) != 0 && (uVar33 = *(uint *)(lVar17 + 0xd8), -1 < (int)uVar33)) &&
         ((int)uVar33 < DAT_14c9647dc)) &&
        ((plVar36 = (longlong *)
                    ((ulonglong)((uVar33 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8)),
         plVar36 != (longlong *)0x0 && ((int)plVar36[2] == *(int *)(lVar17 + 0xdc))))) &&
       ((*(uint *)(plVar36 + 1) & 0x10200000) == 0)) &&
      (pLVar39 = (LARGE_INTEGER *)*plVar36, pLVar39 != (LARGE_INTEGER *)0x0)))) {
    plVar36 = *(longlong **)(*(longlong *)(lVar17 + 0x50) + 0x58);
    local_308 = *(undefined8 *)(*(longlong *)(lVar17 + 0x50) + 0x68);
    uVar11 = (**(code **)(*plVar36 + 0x3c0))(plVar36);
    local_360 = (longlong *)CONCAT71(local_360._1_7_,uVar11);
    local_381 = 0 < *DAT_14cad54d0;
    local_32c = (undefined4)plVar36[0xa4];
    piVar20 = (int *)FUN_140575224(plVar36[0x39],*(undefined8 *)(lVar17 + 0x40));
    if (piVar20 != (int *)0x0) {
      local_318 = *(undefined8 *)(lVar17 + 0x20);
      local_220.QuadPart = local_220.QuadPart & 0xffffffffffffff00;
      uVar21 = **(undefined8 **)(lVar17 + 0x30);
      if ((bVar8 & 1) == 0) {
        local_364 = 0;
        local_320 = uVar21;
LAB_1434ab9d3:
        lVar27 = *(longlong *)(lVar17 + 0x58);
        lVar22 = *(longlong *)(lVar27 + 0x28);
        if ((*(byte *)(lVar22 + 0xa4) & 2) == 0) {
          LVar18.QuadPart = 0;
        }
        else {
          lVar6 = *(longlong *)(lVar17 + 0x40);
          local_128.QuadPart = 0;
          pLStack_120 = (LARGE_INTEGER *)0x0;
          if (DAT_14c873400 == -0x662bf3f &&
              ((DAT_14c8733f8 == 0 && DAT_14c8733f4 == 0) && DAT_14c8733fc == 0)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c87e490) && (FUN_144b3d300(&DAT_14c87e490), DAT_14c87e490 == -1))
            {
              FUN_1446f470e(&local_1c8,L"Unused custom version",1);
              _DAT_14c87e468 = 0;
              uRam000000014c87e470 = 0xf99d40c100000000;
              _DAT_14c87e478 = 0x100000000;
              _DAT_14c87e480 = 0;
              DAT_14c87e488 = local_1c8;
              _Init_thread_footer(&DAT_14c87e490);
            }
            piVar37 = (int *)&DAT_14c87e468;
LAB_1434acdff:
            if ((uint)piVar37[4] < 0xf) goto LAB_1434ace0a;
            FUN_14010318a(lVar6,&local_1c8,0);
            if (local_128.QuadPart != 0) {
              FUN_1400020a8();
            }
            local_128 = local_1c8;
            pLStack_120 = pLStack_1c0;
            (**(code **)(*DAT_14cb0d2b0 + 0x480))
                      (DAT_14cb0d2b0,*(undefined8 *)(lVar27 + 0x28),&local_128);
            iVar16 = DAT_14cad4bf8 + -1;
            if (DAT_14cad4bf8 == 0) {
              iVar16 = 0;
            }
            FUN_1400020e8(&local_128,DAT_14cad4bf0,iVar16);
          }
          else {
            if ((longlong)*(int *)(lVar22 + 0x1440) != 0) {
              piVar37 = *(int **)(lVar22 + 0x1438);
              lVar22 = (longlong)*(int *)(lVar22 + 0x1440) * 0x28;
              do {
                if (((*piVar37 == DAT_14c8733f4) && (piVar37[1] == DAT_14c8733f8)) &&
                   ((piVar37[2] == DAT_14c8733fc && (piVar37[3] == DAT_14c873400)))) {
                  if (piVar37 != (int *)0x0) goto LAB_1434acdff;
                  break;
                }
                piVar37 = piVar37 + 10;
                lVar22 = lVar22 + -0x28;
              } while (lVar22 != 0);
            }
LAB_1434ace0a:
            local_1c8 = *(LARGE_INTEGER *)(lVar6 + 0x18);
            FUN_1400021e4(&local_1c8,&local_210);
            FUN_144a7dea0(&local_1c8,&local_210,&DAT_14cad4bf0);
            if (local_128.QuadPart != 0) {
              FUN_1400020a8();
            }
            local_128 = local_1c8;
            pLStack_120 = pLStack_1c0;
            local_1c8.QuadPart = 0;
            pLStack_1c0 = (LARGE_INTEGER *)0x0;
            if ((undefined **)local_210.QuadPart != (undefined **)0x0) {
              FUN_1400020a8();
            }
          }
          FUN_147be7a80(*(undefined8 *)(*(longlong *)(lVar27 + 0x28) + 0x68),&local_1c8);
          pLVar19 = pLStack_1c0;
          LVar18 = local_1c8;
          if (pLStack_1c0 != (LARGE_INTEGER *)0x0) {
            LOCK();
            pLVar2 = pLStack_1c0 + 1;
            (pLVar2->s).LowPart = (pLVar2->s).LowPart - 1;
            UNLOCK();
            if ((pLVar2->s).LowPart == 0) {
              (**(code **)*(_struct_19 *)pLStack_1c0)(pLStack_1c0);
              LOCK();
              piVar37 = (int *)((longlong)pLVar19 + 0xc);
              *piVar37 = *piVar37 + -1;
              UNLOCK();
              if (*piVar37 == 0) {
                (**(code **)(pLVar19->QuadPart + 0x10))(pLVar19);
              }
            }
          }
          if ((LARGE_INTEGER *)local_128.QuadPart != (LARGE_INTEGER *)0x0) {
            FUN_1400020a8();
          }
        }
        FUN_1448fcc30(&local_128,local_250,0,0);
        local_210.QuadPart = (LONGLONG)&PTR_FUN_14a8a89c0;
        local_1f0 = 0;
        plStack_1e8 = (longlong *)0x0;
        local_200 = 0;
        uStack_1f8 = 0;
        local_1e0 = 0;
        local_1d8 = 0;
        plStack_1d0 = (longlong *)0x0;
        lVar27 = local_260;
        local_208 = plVar36;
        if (local_260 != local_258) {
          local_381 = local_381 & ((byte)local_360 ^ 1);
          local_310 = lVar17 + 0x78;
          local_378 = 0;
LAB_1434abc98:
          do {
            if ((*(byte *)(*(longlong *)(*(longlong *)(lVar17 + 0x58) + 0x28) + 0xa4) & 2) != 0) {
              if ((LARGE_INTEGER *)LVar18.QuadPart != (LARGE_INTEGER *)0x0) {
                local_1c8.QuadPart = (ulonglong)(uint)local_1c8.s.HighPart << 0x20;
                lVar27 = (*(code *)*(LARGE_INTEGER *)(local_300.QuadPart + 0x180))
                                   (&local_300,&local_1c8);
                if ((local_2d7 & 2) != 0) break;
                lVar27 = (longlong)(int)local_1c8.s.LowPart;
                if ((int)local_1c8.s.LowPart <
                    (int)(((LARGE_INTEGER *)(LVar18.QuadPart + 0x20))->s).LowPart) {
                  lVar22 = ((LARGE_INTEGER *)(LVar18.QuadPart + 0x18))->QuadPart;
                  if (*(int *)(lVar22 + 4 + lVar27 * 0x14) != 0) {
                    puVar32 = (ulonglong *)FUN_147a4897e(piVar20);
                    if (puVar32 == (ulonglong *)0x0) {
                      lVar22 = lVar22 + lVar27 * 0x14;
                      if (*(char *)(lVar22 + 0x12) == '\0') {
                        *(undefined1 *)(lVar22 + 0x12) = 1;
                      }
                      goto LAB_1434abd1e;
                    }
                    goto LAB_1434abdd0;
                  }
                  lVar27 = FUN_14572541c(&local_300);
                  break;
                }
              }
              lVar27 = FUN_14572541c(&local_300);
              break;
            }
            local_1c8.QuadPart = (ulonglong)(uint)local_1c8.s.HighPart << 0x20;
            (*(code *)*(LARGE_INTEGER *)(local_300.QuadPart + 0x180))(&local_300,&local_1c8);
            if ((local_2d7 & 2) != 0) {
              uVar21 = 0x5c;
LAB_1434ac9ff:
              FUN_1459b235e(&local_1c8,uVar21);
              FUN_147a47702(local_350,&local_1c8);
              lVar22 = CONCAT44(uStack_19c,uStack_1a0);
              lVar27 = 0;
              if (lVar22 != 0) {
LAB_1434aca21:
                lVar27 = (**(code **)(lVar22 + -0x10))(lVar22 + -0x10);
              }
joined_r0x0001434ac94b:
              if (lStack_1b0 != 0) {
                lVar27 = FUN_1400020a8();
              }
              break;
            }
            piVar37 = piVar20;
            if (piVar20[10] + *piVar20 < (int)local_1c8.s.LowPart) {
              FUN_14572541c(&local_300);
              uVar21 = 0x5d;
              goto LAB_1434ac9ff;
            }
            do {
              iVar16 = *piVar37;
              if ((iVar16 <= (int)local_1c8.s.LowPart) &&
                 ((int)local_1c8.s.LowPart < iVar16 + piVar37[10])) {
                puVar32 = (ulonglong *)
                          ((longlong)(int)(local_1c8.s.LowPart - iVar16) * 0x18 +
                          *(longlong *)(piVar37 + 8));
                goto LAB_1434abdd0;
              }
              piVar37 = *(int **)(piVar37 + 2);
            } while (piVar37 != (int *)0x0);
LAB_1434abd1e:
            puVar32 = (ulonglong *)0x0;
LAB_1434abdd0:
            local_218.s.LowPart = 0;
            (*(code *)*(LARGE_INTEGER *)(local_300.QuadPart + 0x188))(&local_300,&local_218);
            if ((local_2d7 & 2) != 0) {
              FUN_1459b235e(&local_1c8,0x5e);
              FUN_147a47702(local_350,&local_1c8);
              lVar22 = CONCAT44(uStack_19c,uStack_1a0);
              lVar27 = 0;
              if (lVar22 != 0) {
                lVar27 = (**(code **)(lVar22 + -0x10))(lVar22 + -0x10);
              }
              goto joined_r0x0001434ac94b;
            }
            FUN_1400904d6(&local_128,&local_300);
            if ((local_2d7 & 2) != 0) {
              FUN_1459b235e(&local_1c8,0x5f);
              FUN_147a47702(local_350,&local_1c8);
              lVar22 = CONCAT44(uStack_19c,uStack_1a0);
              if (lVar22 == 0) {
                lVar27 = 0;
                goto joined_r0x0001434ac94b;
              }
              goto LAB_1434aca21;
            }
            if ((puVar32 == (ulonglong *)0x0) || ((char)puVar32[2] != '\0')) {
              lVar27 = local_260;
              if (local_260 == local_258) break;
              goto LAB_1434abc98;
            }
            uVar30 = *puVar32;
            if (uVar30 != 0 && (uVar30 & 1) == 0) {
              puVar34 = *(undefined **)(uVar30 + 8);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c952a58) &&
                 (local_328 = uVar30, FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
                local_3c8 = (LARGE_INTEGER *)FUN_1446ddbd2();
                pLStack_3c0 = (LARGE_INTEGER *)FUN_1403a682c;
                local_3d0 = (LARGE_INTEGER *)0x0;
                local_3d8 = (LARGE_INTEGER *)0x108001;
                FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
                atexit(FUN_142818c9e);
                _Init_thread_footer(&DAT_14c952a58);
              }
              if (DAT_14c952a10 == 0) {
                bVar40 = puVar34 != (undefined *)0x0;
                if (puVar34 != &DAT_14c952a08 && bVar40) {
                  do {
                    puVar34 = *(undefined **)(puVar34 + 0x30);
                    bVar40 = puVar34 != (undefined *)0x0;
                    if (puVar34 == &DAT_14c952a08) break;
                  } while (puVar34 != (undefined *)0x0);
                }
                if (bVar40) goto LAB_1434ac049;
                goto LAB_1434abe7c;
              }
              if ((*(ulonglong *)(puVar34 + 0x18) & DAT_14c952a10) == 0) goto LAB_1434abe7c;
LAB_1434ac049:
              if ((byte)local_360 == '\0') {
                if ((*(uint *)(lVar17 + 0xc) & 8) == 0) {
                  *(uint *)(lVar17 + 0xc) = *(uint *)(lVar17 + 0xc) | 8;
                  plVar36 = *(longlong **)(lVar17 + 0x48);
                  if ((plVar36 != (longlong *)0x0) ||
                     ((((*(int *)(lVar17 + 0xdc) != 0 &&
                        (uVar33 = *(uint *)(lVar17 + 0xd8), -1 < (int)uVar33)) &&
                       ((int)uVar33 < DAT_14c9647dc)) &&
                      (((plVar36 = (longlong *)
                                   ((ulonglong)((uVar33 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8)),
                        plVar36 != (longlong *)0x0 && ((int)plVar36[2] == *(int *)(lVar17 + 0xdc)))
                       && (((*(uint *)(plVar36 + 1) & 0x10200000) == 0 &&
                           (plVar36 = (longlong *)*plVar36, plVar36 != (longlong *)0x0)))))))) {
                    (**(code **)(*plVar36 + 0x210))();
                  }
                }
                uStack_180 = 0;
                uStack_198 = 0;
                uStack_194 = 0;
                uStack_190 = 0;
                local_1b8 = 0;
                lStack_1b0 = 0;
                local_1c8.QuadPart = 0;
                local_158 = 0;
                uStack_150 = 0;
                local_168 = 0;
                uStack_160 = 0;
                local_148 = 0xffff;
                local_140 = 0;
                uStack_138 = 0;
                local_130 = 0;
                local_1a8 = local_308;
                pLStack_1c0 = &local_128;
                local_188 = &local_210;
                lVar27 = *(longlong *)(lVar17 + 0x50);
                uStack_1a0 = (undefined4)lVar27;
                uStack_19c = (undefined4)((ulonglong)lVar27 >> 0x20);
                local_178 = *(byte *)(lVar27 + 0xa4) >> 1 & 1;
                local_170 = pLVar39;
                cVar9 = FUN_143691b38(local_318,local_320);
                if (cVar9 == '\0') {
                  *(undefined1 *)(puVar32 + 2) = 1;
                }
                else {
                  local_364 = local_364 & 0xff;
                  if (uStack_180._3_1_ != '\0') {
                    local_364 = 1;
                  }
                  if (uStack_180._4_1_ == '\x01') {
                    local_220.s.LowPart._0_1_ = 1;
                  }
                }
                if (local_140 != 0) {
                  FUN_1400020a8();
                }
                goto LAB_1434ac1e9;
              }
LAB_1434ac9b5:
              local_378 = 0;
              goto LAB_1434aba9a;
            }
LAB_1434abe7c:
            if (((*puVar32 & 1) == 0) || (uVar30 = *puVar32 & 0xfffffffffffffffe, uVar30 == 0))
            goto LAB_1434ac9b5;
            lVar22 = FUN_140010bca();
            lVar27 = *(longlong *)(uVar30 + 0x10);
            if ((*(int *)(lVar27 + 0x38) < *(int *)(lVar22 + 0x38)) ||
               (bVar40 = false,
               *(longlong *)(*(longlong *)(lVar27 + 0x30) + (longlong)*(int *)(lVar22 + 0x38) * 8)
               != lVar22 + 0x30)) goto LAB_1434ac9b5;
            local_218.s.LowPart = local_218.s.LowPart & 0xffffff00;
            local_1a8 = 0;
            uStack_1a0 = 0;
            local_1c8.QuadPart = 0;
            pLStack_1c0 = (LARGE_INTEGER *)0x0;
            uStack_19c = 0x80;
            uStack_198 = 0xffffffff;
            uStack_194 = 0;
            local_188 = (LARGE_INTEGER *)0x0;
            uStack_180 = uStack_180 & 0xffffffff00000000;
            local_3c8 = &local_1c8;
            local_3d0 = &local_218;
            local_3d8 = (LARGE_INTEGER *)CONCAT71(local_3d8._1_7_,local_381);
            cVar9 = FUN_1434b298a(lVar17,&local_128);
            if (cVar9 == '\0') {
              local_378 = 0;
            }
            else if (local_218.s.LowPart._0_1_ == '\x01') {
              iVar16 = *(int *)(lVar17 + 0x80);
              *(uint *)(lVar17 + 0x80) = iVar16 + 1U;
              if (*(uint *)(lVar17 + 0x84) < iVar16 + 1U) {
                FUN_147a4fe6e(local_310,iVar16);
              }
              local_3d0 = &local_1c8;
              local_3d8 = (LARGE_INTEGER *)CONCAT44(local_3d8._4_4_,local_32c);
              uVar21 = FUN_147a4fda2((longlong)iVar16 * 0x78 + *(longlong *)(lVar17 + 0x78),puVar32)
              ;
              local_220.s.LowPart._0_1_ = 1;
              *(byte *)(lVar17 + 0xc) = *(byte *)(lVar17 + 0xc) | 4;
              local_364 = (uint)CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
              bVar40 = true;
            }
            else {
              uVar33 = pLVar39[1].s.LowPart & 0x40000000;
              bVar40 = uVar33 == 0;
              local_378 = (ulonglong)(byte)((byte)(uVar33 >> 0x1e) | (byte)local_378);
            }
            uStack_180 = uStack_180 & 0xffffffff00000000;
            if (local_188 != (LARGE_INTEGER *)0x0) {
              FUN_1400020a8();
            }
            FUN_14041fb7c(&local_1c8);
            if (!bVar40) goto LAB_1434aba9a;
LAB_1434ac1e9:
            lVar27 = local_260;
          } while (local_260 != local_258);
        }
        if (local_220.s.LowPart._0_1_ == '\x01') {
          lVar27 = FUN_1434b31e0(lVar17);
        }
        local_378 = CONCAT71((int7)((ulonglong)lVar27 >> 8),1);
        if (((*(byte *)(lVar17 + 0xc) & 8) != 0) && ((pLVar39[1].s.LowPart >> 0x1a & 1) != 0)) {
          (**(code **)(pLVar39->QuadPart + 0x298))(pLVar39);
        }
LAB_1434aba9a:
        plVar36 = plStack_1d0;
        local_210.QuadPart = (LONGLONG)&PTR_FUN_14a8a89c0;
        if (plStack_1d0 != (longlong *)0x0) {
          LOCK();
          plVar26 = plStack_1d0 + 1;
          *(int *)plVar26 = (int)*plVar26 + -1;
          UNLOCK();
          if ((int)*plVar26 == 0) {
            (**(code **)*plStack_1d0)(plStack_1d0);
            LOCK();
            piVar20 = (int *)((longlong)plVar36 + 0xc);
            *piVar20 = *piVar20 + -1;
            UNLOCK();
            if (*piVar20 == 0) {
              (**(code **)(*plVar36 + 0x10))(plVar36);
            }
          }
        }
        plVar36 = plStack_1e8;
        if (plStack_1e8 != (longlong *)0x0) {
          LOCK();
          plVar26 = plStack_1e8 + 1;
          *(int *)plVar26 = (int)*plVar26 + -1;
          UNLOCK();
          if ((int)*plVar26 == 0) {
            (**(code **)*plStack_1e8)(plStack_1e8);
            LOCK();
            piVar20 = (int *)((longlong)plVar36 + 0xc);
            *piVar20 = *piVar20 + -1;
            UNLOCK();
            if (*piVar20 == 0) {
              (**(code **)(*plVar36 + 0x10))(plVar36);
            }
          }
        }
        local_128.QuadPart = (LONGLONG)&PTR_FUN_149e73df0;
        if (local_70 != 0) {
          (**(code **)(local_70 + -0x10))(local_70 + -0x10);
        }
        local_128.QuadPart = (LONGLONG)&PTR_FUN_149e37220;
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        plVar36 = local_d0;
        local_128.QuadPart = (LONGLONG)&PTR__purecall_149e35f70;
        if (local_d0 != (longlong *)0x0) {
          if (*local_d0 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(plVar36);
        }
        lVar17 = local_b0;
        if (local_b0 != 0) {
          if (*(longlong *)(local_b0 + 0x40) != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(lVar17);
        }
        param_1 = local_370;
        if ((local_378 & 1) != 0) {
          if ((local_370[0xd] == 0) || ((*(uint *)(local_370[0xd] + 8) >> 0x1e & 1) != 0)) {
            *(byte *)(local_370 + 6) = *(byte *)(local_370 + 6) | 0x20;
            local_300.QuadPart = (LONGLONG)&PTR_FUN_149e73df0;
            if (local_248 != 0) {
              (**(code **)(local_248 + -0x10))(local_248 + -0x10);
            }
            local_300.QuadPart = (LONGLONG)&PTR_FUN_149e37220;
            if (local_270 != 0) {
              FUN_1400020a8();
            }
            local_300.QuadPart = (LONGLONG)&PTR__purecall_149e35f70;
            if (local_2a8 != (longlong *)0x0) {
              if (*local_2a8 != 0) {
                FUN_1400020a8();
              }
              FUN_1400020a8(local_2a8);
            }
            if (local_288 != 0) {
              if (*(longlong *)(local_288 + 0x40) != 0) {
                FUN_1400020a8();
              }
              FUN_1400020a8(local_288);
              param_1 = local_370;
            }
            goto LAB_1434aad96;
          }
          if ((local_364 & 1) != 0) {
            local_128 = *local_338;
            FUN_14066d0c6(*(longlong *)(local_370[5] + 0x58) + 0x620,&local_1c8);
          }
          goto LAB_1434abbd8;
        }
      }
      else if ((byte)local_360 == '\0') {
        local_320 = uVar21;
        if ((*(uint *)(lVar17 + 0xc) & 8) == 0) {
          *(uint *)(lVar17 + 0xc) = *(uint *)(lVar17 + 0xc) | 8;
          plVar26 = *(longlong **)(lVar17 + 0x48);
          if ((plVar26 != (longlong *)0x0) ||
             ((((*(int *)(lVar17 + 0xdc) != 0 &&
                (uVar33 = *(uint *)(lVar17 + 0xd8), -1 < (int)uVar33)) &&
               (((int)uVar33 < DAT_14c9647dc &&
                (((plVar26 = (longlong *)
                             ((ulonglong)((uVar33 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8)),
                  plVar26 != (longlong *)0x0 && ((int)plVar26[2] == *(int *)(lVar17 + 0xdc))) &&
                 ((*(uint *)(plVar26 + 1) & 0x10200000) == 0)))))) &&
              (plVar26 = (longlong *)*plVar26, plVar26 != (longlong *)0x0)))) {
            (**(code **)(*plVar26 + 0x210))();
          }
        }
        bVar12 = (**(code **)(*plVar36 + 0x420))(plVar36,pLVar39);
        local_128.QuadPart = local_128.QuadPart & 0xffffffffffffff00;
        local_3b8 = (wchar_t *)CONCAT44(local_3b8._4_4_,local_23c >> 5 & 2 | (uint)bVar12);
        pLStack_3c0 = &local_220;
        local_3c8 = &local_128;
        local_3d8 = pLVar39;
        local_3d0 = &local_300;
        uVar21 = FUN_14368f8e4(local_318,*(undefined8 *)(lVar17 + 0x58));
        if ((char)uVar21 != '\0') {
          local_364 = (uint)CONCAT71((int7)((ulonglong)uVar21 >> 8),local_128.s.LowPart._0_1_);
          goto LAB_1434ab9d3;
        }
      }
    }
  }
  param_1 = local_370;
  lVar17 = local_370[5];
  if ((*(byte *)(lVar17 + 0xa4) & 2) == 0) {
    FUN_1459b235e(&local_128,0x4d);
    FUN_143587ad8(lVar17,&local_128);
    if (local_100 != 0) {
      (**(code **)(local_100 + -0x10))(local_100 + -0x10);
    }
    LVar18 = local_348;
    if (local_110 != 0) {
      FUN_1400020a8();
    }
    local_300.QuadPart = (LONGLONG)&PTR_FUN_149e73df0;
    if (local_248 != 0) {
      (**(code **)(local_248 + -0x10))(local_248 + -0x10);
    }
    local_300.QuadPart = (LONGLONG)&PTR_FUN_149e37220;
    if (local_270 != 0) {
      FUN_1400020a8();
    }
    local_300.QuadPart = (LONGLONG)&PTR__purecall_149e35f70;
    if (local_2a8 != (longlong *)0x0) {
      if (*local_2a8 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_2a8);
      param_1 = local_370;
    }
LAB_1434adac6:
    if (local_288 != 0) {
      if (*(longlong *)(local_288 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_288);
      param_1 = local_370;
    }
    goto LAB_1434ad863;
  }
  *(byte *)(local_370 + 6) = *(byte *)(local_370 + 6) | 0x20;
LAB_1434abbd8:
  local_300.QuadPart = (LONGLONG)&PTR_FUN_149e73df0;
  if (local_248 != 0) {
    (**(code **)(local_248 + -0x10))(local_248 + -0x10);
  }
  local_300.QuadPart = (LONGLONG)&PTR_FUN_149e37220;
  if (local_270 != 0) {
    FUN_1400020a8();
  }
  plVar36 = local_2a8;
  local_300.QuadPart = (LONGLONG)&PTR__purecall_149e35f70;
  if (local_2a8 != (longlong *)0x0) {
    if (*local_2a8 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar36);
  }
  lVar17 = local_288;
  if (local_288 != 0) {
    if (*(longlong *)(local_288 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar17);
  }
  cVar9 = (**(code **)(*param_2 + 0x38))(param_2);
  if (cVar9 != '\0') goto LAB_1434aad96;
  goto LAB_1434aaf51;
}



// FUNCTION 1434add50 FUN_1434add50 body=1710 status=ok
// SIG undefined FUN_1434add50(void)

void FUN_1434add50(LARGE_INTEGER param_1,longlong *param_2)

{
  ushort *puVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  char cVar15;
  uint uVar16;
  uint *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  uint uVar25;
  float fVar26;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  undefined1 local_9c [4];
  undefined8 local_98;
  ushort local_8a;
  LARGE_INTEGER local_88;
  longlong *local_80;
  longlong local_70;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(byte *)(param_1.QuadPart + 0x30) & 0x60) != 0) goto LAB_1434ae184;
  local_58 = 0;
  uStack_50 = 0;
  cVar15 = (**(code **)(**(longlong **)(*(longlong *)(param_1.QuadPart + 0x28) + 0x58) + 0x3c0))();
  if (cVar15 == '\0') {
    if ((*(byte *)((longlong)param_2 + 0xe9) & 1) != 0) {
      local_8a = 0;
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (ushort *)*puVar4 + 1;
      if ((ushort *)puVar4[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_8a,2);
        }
        else {
          FUN_1457251a8(param_2,&local_8a);
        }
      }
      else {
        local_8a = *(ushort *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      if ((int)uStack_50._4_4_ < (int)(uint)local_8a) {
        FUN_147a4f300(&local_58);
      }
      if (local_8a != 0) {
        uVar19 = *(undefined8 *)
                  (*(longlong *)(*(longlong *)(param_1.QuadPart + 0x28) + 0x58) + 0x1b8);
        local_a8 = param_1.QuadPart + 0x110;
        local_b0 = param_1.QuadPart + 600;
        uVar25 = 0;
        do {
          local_98 = 0;
          (**(code **)(*param_2 + 400))(param_2,&local_98);
          cVar15 = FUN_140574998(uVar19);
          if (cVar15 != '\0') {
            puVar17 = (uint *)FUN_1400fcfc4(uVar19,&local_98);
            uVar14 = uStack_50;
            if (puVar17 == (uint *)0x0) {
              FUN_14572541c(param_2);
              uVar19 = 0x4c;
              goto LAB_1434addc9;
            }
            if ((((puVar17[1] == 0) || (uVar16 = *puVar17, (int)uVar16 < 0)) ||
                (DAT_14c9647dc <= (int)uVar16)) ||
               (((plVar20 = (longlong *)
                            ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
                 plVar20 == (longlong *)0x0 || (*(uint *)(plVar20 + 2) != puVar17[1])) ||
                (((*(uint *)(plVar20 + 1) & 0x10200000) != 0 || (lVar5 = *plVar20, lVar5 == 0))))))
            {
              FUN_140325a06(local_a8,&local_88,&local_98,0);
              lVar5 = *(longlong *)(param_1.QuadPart + 0x28);
              local_88 = param_1;
              if ((param_1.QuadPart != 0) && (DAT_14c950c29 != '\0')) {
                FUN_1456cec3c(param_1.QuadPart);
              }
              FUN_1405f6d44(lVar5 + 0x16c8,&local_88);
              FUN_147be95f4(uVar19,&local_88,local_98);
              FUN_147a4f3e6(local_b0,local_9c,&local_88);
              plVar20 = local_80;
              if (local_80 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_80 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_80)(local_80);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar20 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar20 + 0x10))(plVar20);
                  }
                }
              }
            }
            else {
              lVar21 = (longlong)(int)uStack_50;
              uVar16 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar16);
              if (uStack_50._4_4_ < uVar16) {
                FUN_147a4f360(&local_58,uVar14 & 0xffffffff);
              }
              *(undefined8 *)(local_58 + lVar21 * 0x10) = local_98;
              *(longlong *)(local_58 + 8 + lVar21 * 0x10) = lVar5;
            }
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 < local_8a);
      }
    }
    if ((*(longlong *)(param_1.QuadPart + 0x68) == 0) && ((*(byte *)(param_2 + 0x1d) & 1) != 0)) {
      lVar5 = param_2[0x15];
      (**(code **)(*param_2 + 400))(param_2,param_1.QuadPart + 0x70);
      param_2[0x15] = lVar5;
      plVar20 = *(longlong **)(param_1.QuadPart + 0x28);
      if ((*(byte *)((longlong)plVar20 + 0xa4) & 2) != 0) {
        (**(code **)(*plVar20 + 0x3c8))(plVar20,param_1.QuadPart);
      }
    }
    if ((*(int *)(param_1.QuadPart + 0x118) <= *(int *)(param_1.QuadPart + 0x144)) &&
       (*(int *)(param_1.QuadPart + 0x100) < 1)) {
      lVar5 = *(longlong *)(param_1.QuadPart + 0x28);
      lVar21 = *(longlong *)(param_1.QuadPart + 0x70);
      if (*(int *)(lVar5 + 0x1588) != *(int *)(lVar5 + 0x15b4)) {
        lVar24 = lVar5 + 0x15b8;
        if (*(longlong *)(lVar5 + 0x15c0) != 0) {
          lVar24 = *(longlong *)(lVar5 + 0x15c0);
        }
        iVar23 = *(int *)(lVar24 + (ulonglong)
                                   (*(int *)(lVar5 + 0x15c8) - 1U &
                                   (int)lVar21 + (int)((ulonglong)lVar21 >> 0x20) * 0x17) * 4);
        if (iVar23 != -1) {
          do {
            if (*(longlong *)(*(longlong *)(lVar5 + 0x1580) + (longlong)iVar23 * 0x20) == lVar21)
            goto LAB_1434ae206;
            iVar23 = *(int *)((longlong)iVar23 * 0x20 + *(longlong *)(lVar5 + 0x1580) + 0x18);
          } while (iVar23 != -1);
        }
      }
      cVar15 = (**(code **)(**(longlong **)(lVar5 + 0x58) + 0x400))();
      if (cVar15 == '\0') {
        plVar20 = *(longlong **)(*(longlong *)(param_1.QuadPart + 0x28) + 0x58);
        cVar15 = (**(code **)(*plVar20 + 0x3c0))(plVar20);
        fVar26 = 0.0;
        if (cVar15 == '\0') {
          fVar26 = DAT_14caf2160;
        }
        if ((fVar26 <= 0.0) || (*(float *)(plVar20 + 0x118) <= fVar26)) goto LAB_1434ae164;
      }
    }
LAB_1434ae206:
    if (*(int *)(param_1.QuadPart + 0x100) == 0) {
      QueryPerformanceCounter(&local_88);
      *(double *)(param_1.QuadPart + 0x108) = (double)local_88.QuadPart * DAT_14c83f420 + 16777216.0
      ;
      *(byte *)(param_1.QuadPart + 0x90) = *(byte *)(param_1.QuadPart + 0x90) & 0x7f;
    }
    puVar18 = (undefined8 *)FUN_14001cc68(0xf0,0x10);
    FUN_14689986c(puVar18,param_2);
    *puVar18 = &PTR_FUN_14a8a34c0;
    uVar6 = *(undefined4 *)((longlong)param_2 + 0xc4);
    lVar5 = param_2[0x19];
    uVar7 = *(undefined4 *)((longlong)param_2 + 0xcc);
    lVar21 = param_2[0x1a];
    uVar8 = *(undefined4 *)((longlong)param_2 + 0xd4);
    lVar24 = param_2[0x1b];
    uVar9 = *(undefined4 *)((longlong)param_2 + 0xdc);
    uVar10 = *(undefined4 *)((longlong)param_2 + 0xdb);
    uVar11 = *(undefined4 *)((longlong)param_2 + 0xdf);
    uVar12 = *(undefined4 *)((longlong)param_2 + 0xe3);
    uVar13 = *(undefined4 *)((longlong)param_2 + 0xe7);
    *(int *)(puVar18 + 0x18) = (int)param_2[0x18];
    *(undefined4 *)((longlong)puVar18 + 0xc4) = uVar6;
    *(int *)(puVar18 + 0x19) = (int)lVar5;
    *(undefined4 *)((longlong)puVar18 + 0xcc) = uVar7;
    *(int *)(puVar18 + 0x1a) = (int)lVar21;
    *(undefined4 *)((longlong)puVar18 + 0xd4) = uVar8;
    *(int *)(puVar18 + 0x1b) = (int)lVar24;
    *(undefined4 *)((longlong)puVar18 + 0xdc) = uVar9;
    *(undefined4 *)((longlong)puVar18 + 0xdb) = uVar10;
    *(undefined4 *)((longlong)puVar18 + 0xdf) = uVar11;
    *(undefined4 *)((longlong)puVar18 + 0xe3) = uVar12;
    *(undefined4 *)((longlong)puVar18 + 0xe7) = uVar13;
    iVar23 = *(int *)(param_1.QuadPart + 0x100);
    *(uint *)(param_1.QuadPart + 0x100) = iVar23 + 1U;
    if (*(uint *)(param_1.QuadPart + 0x104) < iVar23 + 1U) {
      FUN_147a4f8d4(param_1.QuadPart + 0xf8,iVar23);
    }
    *(undefined8 **)(*(longlong *)(param_1.QuadPart + 0xf8) + (longlong)iVar23 * 8) = puVar18;
    lVar5 = *(longlong *)(param_1.QuadPart + 0x28);
    local_88 = param_1;
    if ((param_1.QuadPart != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1.QuadPart);
    }
    FUN_1405f6d44(lVar5 + 0x16c8,&local_88);
    lVar5 = *(longlong *)(param_1.QuadPart + 0x28);
    if (*(longlong *)(lVar5 + 0x68) != 0) {
      lVar21 = FUN_1413dbcfa();
      plVar20 = *(longlong **)(lVar5 + 0x68);
      if (((plVar20 != (longlong *)0x0) && (lVar21 != 0)) && (lVar5 = plVar20[2], lVar5 != 0)) {
        iVar23 = *(int *)(lVar21 + 0x38);
        if ((iVar23 <= *(int *)(lVar5 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar23 * 8) == lVar21 + 0x30)) {
          (**(code **)(*plVar20 + 0x348))
                    (plVar20,param_1.QuadPart + 0x70,CONCAT71((int7)(int3)((uint)iVar23 >> 8),1));
        }
      }
    }
    lVar21 = local_58;
    lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1.QuadPart + 0x28) + 0x58) + 0x1b8);
    if (lVar5 != 0) {
      lVar24 = (longlong)(int)uStack_50;
      if (lVar24 != 0) {
        lVar22 = 0;
        do {
          FUN_147be95f4(lVar5,&local_88,*(undefined8 *)(lVar21 + lVar22),
                        *(undefined8 *)(lVar21 + 8 + lVar22));
          FUN_147a4f3e6(param_1.QuadPart + 600,&local_98,&local_88);
          plVar20 = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_80 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_80)(local_80);
              LOCK();
              piVar3 = (int *)((longlong)plVar20 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
              }
            }
          }
          lVar22 = lVar22 + 0x10;
        } while (lVar24 * 0x10 != lVar22);
      }
    }
  }
  else if ((*(byte *)((longlong)param_2 + 0xe9) & 1) == 0) {
LAB_1434ae164:
    FUN_1434aac2a(param_1.QuadPart,param_2);
  }
  else {
    FUN_14572541c(param_2);
    uVar19 = 0x4a;
LAB_1434addc9:
    FUN_1459b235e(&local_88,uVar19);
    FUN_147a47702(param_2 + 0x17,&local_88);
    if (local_60 != 0) {
      (**(code **)(local_60 + -0x10))(local_60 + -0x10);
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
LAB_1434ae184:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434ae400 FUN_1434ae400 body=11406 status=ok
// SIG undefined FUN_1434ae400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1434ae400(longlong *param_1)

{
  uint *puVar1;
  float fVar2;
  double dVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  DWORD DVar9;
  char cVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined4 uVar14;
  int iVar15;
  DWORD dwTlsIndex;
  DWORD DVar16;
  longlong lVar17;
  undefined8 uVar18;
  LPVOID lpTlsValue;
  longlong *plVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  int iVar22;
  int *piVar23;
  undefined ***pppuVar24;
  uint *puVar25;
  undefined **ppuVar26;
  undefined *puVar27;
  uint uVar28;
  wchar_t *pwVar29;
  ulonglong uVar30;
  undefined8 uVar31;
  ulonglong uVar32;
  char *pcVar33;
  char *pcVar34;
  int iVar35;
  undefined8 *puVar36;
  longlong lVar37;
  undefined8 *puVar38;
  int iVar39;
  ulonglong uVar40;
  longlong lVar41;
  uint uVar42;
  int iVar43;
  longlong lVar44;
  int iVar45;
  uint uVar46;
  uint uVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  ulonglong uVar50;
  char *pcVar51;
  longlong *plVar52;
  bool bVar53;
  undefined1 auStack_3d8 [32];
  uint local_3b8;
  ulonglong *local_3b0;
  undefined4 local_3a8;
  undefined8 local_3a0;
  wchar_t *local_398;
  code *local_390;
  undefined1 *local_388;
  undefined8 *local_380;
  undefined1 *local_378;
  code *local_370;
  char local_359;
  longlong *local_358;
  byte local_349;
  uint *local_348;
  longlong *local_340;
  longlong *local_338;
  void *local_330;
  longlong local_328;
  uint local_31c;
  longlong *local_318;
  ulonglong local_310;
  undefined8 local_308;
  char *local_300;
  char *local_2f8;
  undefined8 *local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  char local_2d8;
  undefined8 local_2d0;
  uint local_2c4;
  longlong local_2c0;
  undefined *local_2b8;
  undefined1 *local_2b0;
  undefined ***local_2a8;
  undefined **local_2a0;
  char *local_298;
  undefined8 *local_290;
  int local_288;
  undefined **local_280 [5];
  byte local_257;
  byte local_256;
  longlong *local_228;
  longlong local_208;
  longlong local_1f8;
  longlong local_1f0;
  ulonglong local_1e0;
  undefined8 local_1c8;
  undefined **local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  longlong local_19c;
  undefined8 local_194;
  byte local_18c;
  byte local_18b;
  undefined1 local_18a;
  longlong local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  int local_140;
  longlong *local_f0;
  longlong local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  *(undefined2 *)((longlong)param_1 + 0x192) = 0;
  lVar17 = FUN_1447210f0(param_1[0xd]);
  if (lVar17 != 0) {
    lVar37 = param_1[5];
    uVar47 = *(uint *)(lVar37 + 0xa4) & 4;
    if (uVar47 == 0) {
      _DAT_14cad5404 = _DAT_14cad5404 + 1;
    }
    uVar42 = *(uint *)(param_1 + 6);
    if (((uVar42 >> 8 & 1) == 0) || (*(char *)(lVar37 + 0x16c0) != '\0')) {
      uVar46 = *(uint *)(param_1 + 0x12);
      if ((uVar46 & 4) == 0) {
        if ((uVar46 & 0x40) != 0) goto LAB_1434ae66a;
        plVar52 = param_1 + 0xd;
        lVar41 = *plVar52;
        if ((*(uint *)(lVar41 + 8) >> 0x1e & 1) == 0) {
          uVar28 = *(uint *)(lVar41 + 0xc);
          if ((int)uVar28 < DAT_14c9647dc) {
            lVar44 = (ulonglong)((uVar28 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8);
          }
          else {
            lVar44 = 0;
          }
          if ((*(uint *)(lVar44 + 8) >> 0x1c & 1) == 0) {
            if ((uVar42 >> 9 & 1) != 0) {
              if (0 < *(int *)((longlong)param_1 + 0x4c)) goto LAB_1434ae66a;
              *(uint *)(param_1 + 6) = uVar42 & 0xfffffdff;
            }
            if ((DAT_14cad58f8 == '\x01') &&
               (((lVar41 == 0 ||
                 ((bVar11 = *(byte *)(lVar41 + 0x65) & 0x18, bVar11 != 8 && (bVar11 != 0x10)))) &&
                ((uVar46 >> 8 & 1) == 0)))) goto LAB_1434ae66a;
            if (*(longlong *)(lVar17 + 0x30) == 0) {
              lVar41 = 0;
            }
            else {
              lVar41 = *(longlong *)(*(longlong *)(lVar17 + 0x30) + 0x2b0);
            }
            if (((int)param_1[7] == -1) || (*(int *)(lVar41 + 0x570) < 1)) {
              local_358 = (longlong *)((ulonglong)local_358 & 0xffffffff00000000);
            }
            else {
              uVar14 = (**(code **)(*param_1 + 0x348))(param_1);
              local_358 = (longlong *)CONCAT44(local_358._4_4_,uVar14);
              (**(code **)(*param_1 + 0x340))(param_1,0);
              lVar37 = param_1[5];
            }
            FUN_144a679e2(local_280,*(undefined8 *)(lVar37 + 0x68),
                          (longlong)
                          ((*(int *)(lVar37 + 0xa0) * 8 - *(int *)(lVar37 + 0x130)) + -0x235));
            local_280[0] = &PTR_FUN_14a8a3730;
            local_1b8 = 0;
            local_1a8 = 0;
            local_1a0 = *(undefined4 *)((longlong)param_1 + 0x34);
            local_19c = param_1[8];
            local_18c = 0;
            local_194 = 0;
            local_18b = local_18b & 0xf8;
            local_18a = 0;
            local_158 = 0;
            local_150 = 0x400000000;
            local_178 = 0;
            uStack_170 = 0;
            local_188 = 0;
            uStack_180 = 0;
            lVar37 = param_1[5];
            local_256 = local_256 & 0xfd | *(char *)(lVar37 + 0x158) * '\x02';
            if ((0x1fe < *(int *)((longlong)param_1 + 0x4c)) &&
               (local_257 = local_257 | 2, local_1f8 != 0)) {
              do {
                *(byte *)(local_1f8 + 0x29) = *(byte *)(local_1f8 + 0x29) | 2;
                local_1f8 = *(longlong *)(local_1f8 + 0x88);
              } while (local_1f8 != 0);
              lVar37 = param_1[5];
            }
            local_2b0 = local_168;
            local_2b8 = *(undefined **)(*(longlong *)(lVar37 + 0x58) + 0x838);
            local_2a0 = local_1c0;
            local_298 = "ReplicateActor";
            local_338 = plVar52;
            local_2a8 = local_280;
            local_1c0 = &local_2b8;
            local_1b0 = param_1;
            if ((local_257 & 2) == 0) {
              if (DAT_14caf2978 == 0) {
                local_380 = &local_148;
                local_148 = (undefined **)FUN_1449e2820;
                local_370 = FUN_14081d0ea;
                local_378 = &LAB_141737a50;
                local_388 = &LAB_147be51cb;
                local_390 = FUN_1463edbe8;
                local_398 = L"Engine";
                local_3a0 = 0;
                local_3a8 = 0x10000000;
                local_3b0 = (ulonglong *)CONCAT44(local_3b0._4_4_,8);
                local_3b8 = 0x80;
                FUN_14081cfa3(L"/Script/Engine",L"NetworkSubsystem",&DAT_14caf2978,&DAT_147be51ca);
              }
              lVar37 = DAT_14caf2978;
              if ((DAT_14caf2978 == 0) || (DAT_14c950c29 == 0)) {
                if (DAT_14caf2978 != 0) goto LAB_1434ae80b;
LAB_1434b0cbe:
                lVar41 = 0;
              }
              else {
                FUN_1456cec3c(DAT_14caf2978);
                plVar52 = local_338;
                if (DAT_14caf2978 == 0) {
                  local_380 = &local_148;
                  local_148 = (undefined **)FUN_1449e2820;
                  local_370 = FUN_14081d0ea;
                  local_378 = &LAB_141737a50;
                  local_388 = &LAB_147be51cb;
                  local_390 = FUN_1463edbe8;
                  local_398 = L"Engine";
                  local_3a0 = 0;
                  local_3a8 = 0x10000000;
                  local_3b0 = (ulonglong *)CONCAT44(local_3b0._4_4_,8);
                  local_3b8 = 0x80;
                  FUN_14081cfa3(L"/Script/Engine",L"NetworkSubsystem",&DAT_14caf2978,&DAT_147be51ca)
                  ;
                  plVar52 = local_338;
                  if (DAT_14caf2978 != 0) goto LAB_1434ae80b;
                  lVar41 = 0;
                }
                else {
LAB_1434ae80b:
                  if (*(int *)(lVar37 + 0x38) < *(int *)(DAT_14caf2978 + 0x38)) goto LAB_1434b0cbe;
                  lVar41 = 0;
                  if (*(longlong *)
                       (*(longlong *)(lVar37 + 0x30) + (longlong)*(int *)(DAT_14caf2978 + 0x38) * 8)
                      == DAT_14caf2978 + 0x30) {
                    lVar41 = lVar37;
                  }
                }
              }
              DAT_14cad5408 = FUN_1448a6f9c(lVar17 + 0x870,lVar41);
              local_31c = *(uint *)(param_1 + 0x12);
              *(uint *)(param_1 + 0x12) = local_31c | 4;
              FUN_144b25d80(&local_2c0,param_1[5]);
              local_2c4 = 0;
              if (*(char *)(param_1[5] + 0x16c0) == '\0' && (int)param_1[7] != -1) {
                if (((*(uint *)(param_1 + 0x12) & 1) == 0) && ((*(byte *)(param_1 + 6) & 1) != 0)) {
                  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) | 1;
                  iVar35 = (int)param_1[0x1a];
                  if (iVar35 == 0) {
                    uVar50 = 1;
                    uVar30 = 0;
                    iVar39 = 0;
                    iVar45 = 0;
                  }
                  else {
                    puVar25 = (uint *)param_1[0x19];
                    if ((uint *)param_1[0x19] == (uint *)0x0) {
                      puVar25 = (uint *)(param_1 + 0x17);
                    }
                    uVar42 = *puVar25;
                    if (uVar42 == 0) {
                      iVar45 = iVar35 + 0x1e;
                      if (-1 < iVar35 + -1) {
                        iVar45 = iVar35 + -1;
                      }
                      uVar30 = 0;
                      uVar50 = (ulonglong)(uint)(iVar45 >> 5);
                      if (iVar45 >> 5 < 1) {
                        uVar50 = uVar30;
                      }
                      iVar39 = 0;
                      do {
                        if (uVar50 == uVar30) goto LAB_1434ae98c;
                        iVar39 = iVar39 + 0x20;
                        uVar42 = puVar25[uVar30 + 1];
                        uVar30 = uVar30 + 1;
                      } while (uVar42 == 0);
                    }
                    else {
                      uVar30 = 0;
                      iVar39 = 0;
                    }
                    uVar50 = (ulonglong)(-uVar42 & uVar42);
                    uVar32 = uVar50 * 2 + 1;
                    lVar37 = 0x3f;
                    if (uVar32 != 0) {
                      for (; uVar32 >> lVar37 == 0; lVar37 = lVar37 + -1) {
                      }
                    }
                    iVar45 = (iVar39 - ((uint)lVar37 ^ 0x3f)) + 0x3e;
                    if (iVar35 <= iVar45) {
                      iVar45 = iVar35;
                    }
                  }
                  if (iVar45 < iVar35) {
                    uVar42 = 0xffffffff;
                    do {
                      lVar37 = *(longlong *)(param_1[0x15] + 8 + (longlong)iVar45 * 0x20);
                      if ((*(longlong *)(lVar37 + 0x48) != 0) ||
                         ((((((*(int *)(lVar37 + 0xdc) != 0 &&
                              (uVar46 = *(uint *)(lVar37 + 0xd8), -1 < (int)uVar46)) &&
                             ((int)uVar46 < DAT_14c9647dc)) &&
                            ((plVar52 = (longlong *)
                                        ((ulonglong)((uVar46 & 0xffff) * 0x18) +
                                        *(longlong *)
                                         (DAT_14c9647c8 + (ulonglong)(uVar46 >> 0x10) * 8)),
                             plVar52 != (longlong *)0x0 &&
                             ((int)plVar52[2] == *(int *)(lVar37 + 0xdc))))) &&
                           ((*(uint *)(plVar52 + 1) & 0x10200000) == 0)) && (*plVar52 != 0)))) {
                        puVar4 = *(undefined1 **)(*(longlong *)(lVar37 + 0x30) + 8);
                        if (puVar4 != (undefined1 *)0x0) {
                          *puVar4 = 1;
                        }
                        *(byte *)(lVar37 + 0xc) = *(byte *)(lVar37 + 0xc) | 2;
                        iVar35 = (int)param_1[0x1a];
                      }
                      uVar42 = uVar42 & ~(uint)uVar50;
                      puVar25 = (uint *)param_1[0x19];
                      if ((uint *)param_1[0x19] == (uint *)0x0) {
                        puVar25 = (uint *)(param_1 + 0x17);
                      }
                      iVar45 = (int)uVar30;
                      lVar37 = (longlong)iVar45;
                      uVar46 = puVar25[lVar37] & uVar42;
                      if (uVar46 == 0) {
                        iVar43 = iVar35 + 0x1e;
                        if (-1 < iVar35 + -1) {
                          iVar43 = iVar35 + -1;
                        }
                        iVar43 = iVar43 >> 5;
                        iVar22 = iVar43;
                        if (iVar43 < iVar45) {
                          iVar22 = iVar45;
                        }
                        if (iVar43 <= iVar45) break;
                        lVar41 = 0;
                        while( true ) {
                          iVar39 = iVar39 + 0x20;
                          uVar46 = puVar25[lVar37 + lVar41 + 1];
                          if (uVar46 != 0) break;
                          lVar41 = lVar41 + 1;
                          if (iVar22 - lVar37 == lVar41) goto LAB_1434ae98c;
                        }
                        uVar30 = (ulonglong)(iVar45 + (int)lVar41 + 1);
                        uVar42 = 0xffffffff;
                      }
                      uVar50 = (ulonglong)(-uVar46 & uVar46);
                      uVar32 = uVar50 * 2 + 1;
                      lVar37 = 0x3f;
                      if (uVar32 != 0) {
                        for (; uVar32 >> lVar37 == 0; lVar37 = lVar37 + -1) {
                        }
                      }
                      iVar45 = (iVar39 - ((uint)lVar37 ^ 0x3f)) + 0x3e;
                    } while (iVar45 < iVar35);
                  }
                }
              }
              else {
                local_2c4 = 2;
                if (*(char *)(param_1[5] + 0x16c0) == '\x02') {
                  local_2c4 = ~*(uint *)(param_1 + 6) >> 0xc & 2;
                }
                local_18c = local_18c & 0xeb | (*(byte *)(*plVar52 + 0x60) & 1) << 2 | 0x10;
              }
LAB_1434ae98c:
              lVar37 = (**(code **)(*(longlong *)param_1[0xd] + 0x498))();
              plVar52 = local_338;
              if (param_1[5] == lVar37) {
                bVar53 = true;
              }
              else if (lVar37 == 0) {
                bVar53 = false;
              }
              else {
                if (DAT_14cabf8e8 == 0) {
                  local_380 = &local_148;
                  local_148 = (undefined **)FUN_144ae7c60;
                  local_370 = FUN_14081d0ea;
                  local_378 = &LAB_14637144c;
                  local_388 = &LAB_147861001;
                  local_390 = (code *)&LAB_145acec30;
                  local_398 = L"Engine";
                  local_3a0 = 0;
                  local_3a8 = 0x1000000c;
                  local_3b0 = (ulonglong *)CONCAT44(local_3b0._4_4_,8);
                  local_3b8 = 0x1df0;
                  FUN_14081cfa3(L"/Script/Engine",L"ChildConnection",&DAT_14cabf8e8,&DAT_147861000);
                }
                plVar52 = local_338;
                if ((*(int *)(*(longlong *)(lVar37 + 0x10) + 0x38) < *(int *)(DAT_14cabf8e8 + 0x38))
                   || (*(longlong *)
                        (*(longlong *)(*(longlong *)(lVar37 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14cabf8e8 + 0x38) * 8) != DAT_14cabf8e8 + 0x30)) {
                  bVar53 = false;
                }
                else {
                  lVar41 = param_1[5];
                  if ((lVar41 != 0 & DAT_14c950c29) == 1) {
                    FUN_1456cec3c(lVar41);
                  }
                  bVar53 = *(longlong *)(lVar37 + 0x1de8) == lVar41;
                }
              }
              uVar46 = local_2c4 & 0xfffffffe | (uint)bVar53;
              uVar42 = local_2c4 & 2;
              local_2c4 = uVar46;
              if ((uVar42 != 0) && ((*(byte *)((longlong)param_1 + 0x31) & 0x10) != 0)) {
                (**(code **)(**(longlong **)(param_1[5] + 0x68) + 0x2c0))
                          (*(longlong **)(param_1[5] + 0x68),local_280,param_1,plVar52);
                (**(code **)(*(longlong *)param_1[0xd] + 0x3f0))((longlong *)param_1[0xd],local_280)
                ;
                uVar18 = FUN_140959f3c(param_1[0xd],local_1b0);
                local_358 = (longlong *)
                            CONCAT44(local_358._4_4_,(int)CONCAT71((int7)((ulonglong)uVar18 >> 8),1)
                                    );
              }
              plVar19 = local_358;
              local_328 = *plVar52;
              local_359 = *(char *)(local_328 + 0x68);
              lVar37 = local_328;
              cVar10 = local_359;
              if ((local_359 == '\x02') && ((local_2c4 & 1) == 0)) {
                uVar42 = 0;
                if ((*(byte *)(local_328 + 99) & 8) != 0) {
                  *(undefined1 *)(local_328 + 0x68) = 1;
                  lVar37 = *plVar52;
                  cVar10 = *(char *)(lVar37 + 0x68);
                  goto LAB_1434aeaa2;
                }
              }
              else {
LAB_1434aeaa2:
                uVar42 = (uint)(cVar10 == '\x01') << 2;
              }
              local_2c4 = (local_2c4 & 0xffffffe3) + uVar47 * 4 |
                          (*(uint *)(lVar37 + 0x158) & 2) << 2 | uVar42;
              plVar52 = *(longlong **)(lVar17 + 0x38);
              uVar47 = 0;
              if (plVar52 != (longlong *)0x0) {
                if (*(code **)(*plVar52 + 0x3c0) == (code *)&LAB_1448ff5f6) {
                  if (plVar52[0x1e] != 0) {
LAB_1434b0cf0:
                    if (*(longlong **)(lVar17 + 0x108) != (longlong *)0x0) {
                      bVar11 = (**(code **)(**(longlong **)(lVar17 + 0x108) + 0x3c0))();
                      uVar47 = (uint)bVar11 << 0xb;
                    }
                  }
                }
                else {
                  cVar10 = (**(code **)(*plVar52 + 0x3c0))();
                  if (cVar10 == '\0') goto LAB_1434b0cf0;
                }
              }
              uVar47 = local_2c4 & 0xfffff6ff | uVar47;
              uVar42 = (*(uint *)(param_1[5] + 0xa4) & 8) << 5;
              local_2c4 = uVar42 | uVar47;
              if ((((*(char *)(*(longlong *)(param_1[0x13] + 0x20) + 0x20) < '\0') &&
                   (lVar17 = *(longlong *)(param_1[0x13] + 0x30), lVar17 != 0)) &&
                  (lVar17 = *(longlong *)(lVar17 + 8), lVar17 != 0)) &&
                 (lVar17 = *(longlong *)(lVar17 + 0x20), lVar17 != 0)) {
                local_2c4 = uVar42 | uVar47 & 0xffff | *(int *)(lVar17 + 0x70) << 0x10;
              }
              dwTlsIndex = DAT_14c7585d0;
              if (DAT_14c7585d0 == 0xffffffff) {
                dwTlsIndex = TlsAlloc();
                DVar16 = 0xffffffff;
                LOCK();
                bVar53 = DAT_14c7585d0 != 0xffffffff;
                DVar9 = dwTlsIndex;
                if (bVar53) {
                  DVar16 = DAT_14c7585d0;
                  DVar9 = DAT_14c7585d0;
                }
                DAT_14c7585d0 = DVar9;
                UNLOCK();
                plVar19 = local_358;
                if (bVar53) {
                  TlsFree(dwTlsIndex);
                  dwTlsIndex = DVar16;
                  plVar19 = local_358;
                }
              }
              uVar30 = (ulonglong)plVar19 & 0xffffffff;
              lpTlsValue = TlsGetValue(dwTlsIndex);
              if (lpTlsValue == (LPVOID)0x0) {
                lpTlsValue = (LPVOID)FUN_140036a08(&local_148);
                FUN_140fddf04(lpTlsValue);
                TlsSetValue(dwTlsIndex,lpTlsValue);
              }
              local_2f0 = (undefined8 *)((longlong)lpTlsValue + 0x10);
              local_2e8 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
              local_2e0 = *(longlong *)((longlong)lpTlsValue + 0x20);
              local_2d8 = '\0';
              local_2d0 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
              *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_2f0;
              *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
              cVar10 = FUN_144b236d8(param_1[0x13],local_2c4);
              uVar47 = local_2c4;
              if ((cVar10 == '\0') || (DAT_14cad4bb8 != '\0')) {
                lVar17 = param_1[0x13];
                FUN_144a679e2(&local_148,local_1c8,0x2000);
                bVar11 = FUN_1434b4272(lVar17,local_280,uVar47,&local_148);
                local_148 = &PTR_FUN_149e37560;
                if (local_b8 != 0) {
                  FUN_1400020a8();
                }
                local_148 = &PTR__purecall_149e35f70;
                if (local_f0 != (longlong *)0x0) {
                  if (*local_f0 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_1400020a8(local_f0);
                }
                if (local_d0 != 0) {
                  if (*(longlong *)(local_d0 + 0x40) != 0) {
                    FUN_1400020a8();
                  }
                  FUN_1400020a8(local_d0);
                  uVar30 = (ulonglong)local_358 & 0xffffffff;
                }
                uVar30 = CONCAT71((int7)(uVar30 >> 8),(byte)uVar30 | bVar11);
              }
              plVar19 = local_338;
              plVar52 = (longlong *)*local_338;
              if (*(char *)((longlong)plVar52 + 99) < '\0') {
                local_290 = (undefined8 *)CONCAT44(local_290._4_4_,local_2c4);
                uVar50 = (ulonglong)
                         ((uint)((local_2c4 & 0x14) == 4) << 0xb |
                         (local_2c4 & 2) + ((uint)((local_2c4 & 1) == 0) | local_2c4 & 4) * 4) + 5 |
                         (ulonglong)((local_2c4 & 4) << 3 ^ 0x20);
                if ((local_2c4 & 0xc) == 0) {
LAB_1434b083d:
                  uVar50 = uVar50 & 0xffffffffffffefff;
                }
                else {
                  if ((local_2c4 & 0x10) != 0) {
                    uVar50 = uVar50 | 0x40;
                    goto LAB_1434b083d;
                  }
                  uVar50 = uVar50 | 0x1040;
                }
                uVar32 = 0x400;
                if ((local_2c4 & 0x10) == 0) {
                  uVar32 = 0x2000;
                }
                local_80 = ((uint)((local_2c4 & 3) != 0) << 7 | (uint)((local_2c4 & 0x11) != 0) << 9
                           ) | uVar32 | uVar50 | 0x4100;
                DAT_14cad4be8 = 0;
                local_3b8 = local_2c4;
                _DAT_14cad4be0 = plVar52;
                local_3b0 = &local_80;
                bVar11 = FUN_1447b4d5c(param_1,uVar50,plVar52 + 0x42);
                lVar17 = (longlong)*(int *)(param_1[0xd] + 0x228);
                plVar19 = local_338;
                if (lVar17 != 0) {
                  plVar52 = *(longlong **)(param_1[0xd] + 0x220);
                  local_340 = plVar52 + lVar17 * 5;
                  do {
                    uVar50 = local_80;
                    uVar47 = *(uint *)(plVar52 + 2);
                    bVar53 = (local_80 >> ((ulonglong)uVar47 & 0x3f) & 1) != 0;
                    if (uVar47 == 0x10) {
                      local_310 = *(ulonglong *)(param_1[5] + 0x30);
                      local_348 = (uint *)CONCAT71(local_348._1_7_,(local_80 & 0x10000) != 0);
                      FUN_147a48382(DAT_14cad5408 + 0x30,&local_148,plVar52[1]);
                      if (0 < (longlong)local_140 && (char)local_348 == '\0') {
                        local_348 = DAT_14c997f10;
                        local_308 = CONCAT44(local_308._4_4_,(int)(uVar50 >> 10)) &
                                    0xffffffff00000001;
                        uVar32 = 0;
                        do {
                          puVar25 = (uint *)local_148[uVar32];
                          bVar53 = SUB41(((uint)uVar50 & 4) >> 2,0);
                          if ((DAT_14c997f08 != puVar25) &&
                             (bVar53 = local_308._0_1_, DAT_14c997f10 != puVar25)) {
                            if ((longlong)*(int *)(local_310 + 0x680) != 0) {
                              uVar40 = 0;
                              do {
                                if (*(uint **)(*(longlong *)(local_310 + 0x678) + uVar40) == puVar25
                                   ) {
                                  bVar53 = (~uVar40 & 0x7fffffff8) != 0;
                                  goto LAB_1434b0ef5;
                                }
                                uVar40 = uVar40 + 8;
                              } while ((longlong)*(int *)(local_310 + 0x680) * 8 != uVar40);
                            }
                            bVar53 = false;
                          }
LAB_1434b0ef5:
                          uVar32 = uVar32 + 1;
                        } while ((uVar32 < (ulonglong)(longlong)local_140) && (bVar53 == false));
                      }
                      if (bVar53 != false) goto LAB_1434b0f5e;
                    }
                    else if ((local_80 & 1L << ((byte)uVar47 & 0x3f)) != 0) {
LAB_1434b0f5e:
                      plVar19 = (longlong *)*plVar52;
                      if (plVar19 == (longlong *)0x0) {
                        DAT_14cad4be8 = 0;
                        bVar12 = DAT_0000009c;
                      }
                      else {
                        DAT_14cad4be8 = *(byte *)((longlong)plVar19 + 0x9c) >> 6 & 1;
                        bVar12 = *(byte *)((longlong)plVar19 + 0x9c);
                      }
                      _DAT_14cad4be0 = plVar19;
                      if ((bVar12 & 0x40) == 0) {
                        bVar12 = (**(code **)(*plVar19 + 0x2d0))
                                           (plVar19,param_1,local_280,&local_290);
                      }
                      else {
                        local_3b8 = (uint)local_290;
                        local_3b0 = &local_80;
                        bVar12 = FUN_1447b4d5c(param_1);
                      }
                      _DAT_14cad4be0 = (longlong *)param_1[0xd];
                      DAT_14cad4be8 = 0;
                      bVar13 = FUN_14009cd08(param_1,plVar19,local_280,
                                             (ulonglong)local_290 & 0xffffffff);
                      bVar11 = bVar11 | bVar12 | bVar13;
                    }
                    plVar52 = plVar52 + 5;
                    plVar19 = local_338;
                  } while (plVar52 != local_340);
                }
              }
              else {
                bVar11 = (**(code **)(*plVar52 + 0x2d0))(plVar52,param_1,local_280,&local_2c4);
              }
              bVar11 = (byte)uVar30 | bVar11;
              DAT_14cad4be8 = 0;
              if (*(char *)(param_1[5] + 0x16c0) == '\0') {
                local_358 = (longlong *)
                            CONCAT44(local_358._4_4_,(int)CONCAT71((int7)(uVar30 >> 8),bVar11));
                plVar52 = (longlong *)FUN_144b25bc6(param_1[5],*plVar19);
                if (plVar52 != (longlong *)0x0) {
                  iVar35 = (int)param_1[0x1a];
                  if (iVar35 == 0) {
                    uVar50 = 1;
                    uVar30 = 0;
                    iVar39 = 0;
                    iVar45 = 0;
                  }
                  else {
                    puVar25 = (uint *)param_1[0x19];
                    if ((uint *)param_1[0x19] == (uint *)0x0) {
                      puVar25 = (uint *)(param_1 + 0x17);
                    }
                    uVar47 = *puVar25;
                    if (uVar47 == 0) {
                      iVar45 = iVar35 + 0x1e;
                      if (-1 < iVar35 + -1) {
                        iVar45 = iVar35 + -1;
                      }
                      uVar30 = 0;
                      uVar50 = (ulonglong)(uint)(iVar45 >> 5);
                      if (iVar45 >> 5 < 1) {
                        uVar50 = uVar30;
                      }
                      iVar39 = 0;
                      do {
                        if (uVar50 == uVar30) goto LAB_1434af0cd;
                        iVar39 = iVar39 + 0x20;
                        uVar47 = puVar25[uVar30 + 1];
                        uVar30 = uVar30 + 1;
                      } while (uVar47 == 0);
                    }
                    else {
                      uVar30 = 0;
                      iVar39 = 0;
                    }
                    uVar50 = (ulonglong)(-uVar47 & uVar47);
                    uVar32 = uVar50 * 2 + 1;
                    lVar17 = 0x3f;
                    if (uVar32 != 0) {
                      for (; uVar32 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                      }
                    }
                    iVar45 = (iVar39 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                    if (iVar35 <= iVar45) {
                      iVar45 = iVar35;
                    }
                  }
                  if (iVar45 < iVar35) {
                    uVar47 = 0xffffffff;
                    do {
                      if ((int)plVar52[1] != *(int *)((longlong)plVar52 + 0x34)) {
                        lVar17 = **(longlong **)(param_1[0x15] + 8 + (longlong)iVar45 * 0x20);
                        plVar19 = (longlong *)plVar52[8];
                        if ((longlong *)plVar52[8] == (longlong *)0x0) {
                          plVar19 = plVar52 + 7;
                        }
                        iVar45 = *(int *)((longlong)plVar19 +
                                         ((longlong)
                                          ((int)((ulonglong)lVar17 >> 0x20) * 0x17 + (int)lVar17) &
                                         (longlong)(int)plVar52[9] - 1U) * 4);
                        if (iVar45 != -1) {
LAB_1434aefd4:
                          plVar21 = (longlong *)(*plVar52 + (longlong)iVar45 * 0x18);
                          if (*plVar21 != lVar17) goto code_r0x0001434aefe4;
                          iVar35 = *(int *)((longlong)plVar19 +
                                           (longlong)*(int *)((longlong)plVar21 + 0x14) * 4);
                          if (iVar35 == iVar45) {
                            piVar23 = (int *)((longlong)plVar19 +
                                             (longlong)*(int *)((longlong)plVar21 + 0x14) * 4);
                          }
                          else {
                            do {
                              piVar23 = (int *)(*plVar52 + (longlong)iVar35 * 0x18 + 0x10);
                              iVar35 = *piVar23;
                            } while (iVar35 != iVar45);
                          }
                          *piVar23 = (int)plVar21[2];
                          FUN_1434b88c2(plVar52,iVar45,1);
                          iVar35 = (int)param_1[0x1a];
                        }
                      }
LAB_1434af01d:
                      uVar47 = uVar47 & ~(uint)uVar50;
                      puVar25 = (uint *)param_1[0x19];
                      if ((uint *)param_1[0x19] == (uint *)0x0) {
                        puVar25 = (uint *)(param_1 + 0x17);
                      }
                      iVar45 = (int)uVar30;
                      lVar17 = (longlong)iVar45;
                      uVar42 = puVar25[lVar17] & uVar47;
                      if (uVar42 == 0) {
                        iVar43 = iVar35 + 0x1e;
                        if (-1 < iVar35 + -1) {
                          iVar43 = iVar35 + -1;
                        }
                        iVar43 = iVar43 >> 5;
                        iVar22 = iVar43;
                        if (iVar43 < iVar45) {
                          iVar22 = iVar45;
                        }
                        if (iVar43 <= iVar45) break;
                        lVar37 = 0;
                        while( true ) {
                          iVar39 = iVar39 + 0x20;
                          uVar42 = (puVar25 + lVar17 + 1)[lVar37];
                          if (uVar42 != 0) break;
                          lVar37 = lVar37 + 1;
                          if (iVar22 - lVar17 == lVar37) goto LAB_1434af0cd;
                        }
                        uVar30 = (ulonglong)(iVar45 + (int)lVar37 + 1);
                        uVar47 = 0xffffffff;
                      }
                      uVar50 = (ulonglong)(-uVar42 & uVar42);
                      uVar32 = uVar50 * 2 + 1;
                      lVar17 = 0x3f;
                      if (uVar32 != 0) {
                        for (; uVar32 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                        }
                      }
                      iVar45 = (iVar39 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                    } while (iVar45 < iVar35);
                  }
                }
LAB_1434af0cd:
                local_c8 = (undefined8 *)0x0;
                local_c0 = 0x1000000000;
                FUN_144b25f72(*(undefined8 *)(*(longlong *)(param_1[5] + 0x58) + 0x858),&local_80,
                              param_1[0xd]);
                if ((local_78 == (longlong *)0x0) ||
                   (*(short *)((longlong)param_1 + 0x94) == (short)local_80)) {
                  local_330 = (void *)0x0;
                }
                else {
                  *(short *)((longlong)param_1 + 0x94) = (short)local_80;
                  if ((longlong)(int)local_78[1] == 0) {
                    local_330 = (void *)0x0;
                  }
                  else {
                    puVar38 = (undefined8 *)*local_78;
                    puVar48 = (undefined8 *)((longlong)puVar38 + (longlong)(int)local_78[1] * 0xc);
                    local_330 = (void *)0x0;
                    do {
                      uVar50 = FUN_1409ca440();
                      uVar30 = local_c0;
                      if ((uVar50 != 0) &&
                         ((int)param_1[0x16] != *(int *)((longlong)param_1 + 0xdc))) {
                        uVar47 = ((uint)(uVar50 >> 0x14) & 0xffff ^ (uint)(uVar50 >> 4)) *
                                 -0x7a143595;
                        uVar47 = (uVar47 >> 0xd ^ uVar47) * -0x3d4d51cb;
                        plVar19 = (longlong *)param_1[0x1d];
                        if ((longlong *)param_1[0x1d] == (longlong *)0x0) {
                          plVar19 = param_1 + 0x1c;
                        }
                        iVar35 = *(int *)((longlong)plVar19 +
                                         (ulonglong)
                                         ((int)param_1[0x1e] - 1U & (uVar47 >> 0x10 ^ uVar47)) * 4);
                        if (iVar35 != -1) {
                          lVar17 = param_1[0x15];
                          do {
                            lVar37 = lVar17 + (longlong)iVar35 * 0x20;
                            if (*(ulonglong *)(lVar17 + (longlong)iVar35 * 0x20) == uVar50) {
                              puVar36 = (undefined8 *)(lVar37 + 8);
                              if (puVar36 != (undefined8 *)0x0 && lVar37 != 0) {
                                cVar10 = *(char *)((longlong)puVar38 + 10) == '\x01';
                                lVar17 = (longlong)(int)local_c0;
                                uVar47 = (int)local_c0 + 1;
                                local_c0 = CONCAT44(local_c0._4_4_,uVar47);
                                local_318 = plVar52;
                                if (local_c0._4_4_ < uVar47) {
                                  local_340 = (longlong *)CONCAT71(local_340._1_7_,cVar10);
                                  FUN_1457a2cc6(&local_148,uVar30 & 0xffffffff);
                                  cVar10 = (char)local_340;
                                }
                                puVar20 = local_c8;
                                if (local_c8 == (undefined8 *)0x0) {
                                  puVar20 = &local_148;
                                }
                                puVar20[lVar17] = *puVar38;
                                local_290 = *(undefined8 **)*puVar36;
                                if (local_290 != (undefined8 *)0x0) {
                                  uVar18 = FUN_14011a5d2(local_280,&local_290,'\x02' - cVar10);
                                  local_18c = local_18c | 0x10;
                                  local_330 = (void *)CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
                                }
                                FUN_140441966(*puVar36);
                                FUN_147a4f9cc(param_1 + 0x15,uVar50);
                                plVar52 = local_318;
                              }
                              break;
                            }
                            iVar35 = *(int *)(lVar37 + 0x18);
                          } while (iVar35 != -1);
                        }
                      }
                      puVar38 = (undefined8 *)((longlong)puVar38 + 0xc);
                    } while (puVar38 != puVar48);
                  }
                  if ((int)local_c0 != 0) {
                    uVar18 = *(undefined8 *)(*(longlong *)(param_1[5] + 0x58) + 0x858);
                    local_290 = local_c8;
                    if (local_c8 == (undefined8 *)0x0) {
                      local_290 = &local_148;
                    }
                    local_288 = (int)local_c0;
                    lVar17 = param_1[0xd];
                    if ((lVar17 != 0 & DAT_14c950c29) == 1) {
                      FUN_1456cec3c(lVar17);
LAB_1434b0947:
                      uVar47 = *(uint *)(lVar17 + 0xc);
                      if ((int)uVar47 < DAT_14c9647dc) {
                        lVar17 = (ulonglong)((uVar47 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar47 >> 0x10) * 8);
                      }
                      else {
                        lVar17 = 0;
                      }
                      iVar35 = *(int *)(lVar17 + 0x10);
                      if (*(int *)(lVar17 + 0x10) == 0) {
                        LOCK();
                        iVar35 = DAT_14c964868 + 1;
                        UNLOCK();
                        iVar45 = DAT_14c964868 + 1;
                        bVar53 = DAT_14c964868 < 1000;
                        DAT_14c964868 = iVar35;
                        if (bVar53) {
                          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                        0x23d,
                                        L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                        ,iVar45);
                        }
                        LOCK();
                        iVar35 = *(int *)(lVar17 + 0x10);
                        bVar53 = iVar35 == 0;
                        if (bVar53) {
                          *(int *)(lVar17 + 0x10) = iVar45;
                          iVar35 = 0;
                        }
                        UNLOCK();
                        if (bVar53) {
                          iVar35 = iVar45;
                        }
                      }
                    }
                    else {
                      uVar47 = 0;
                      iVar35 = 0;
                      if (lVar17 != 0) goto LAB_1434b0947;
                    }
                    FUN_147bd785c(uVar18,CONCAT44(iVar35,uVar47),&local_290,param_1);
                    bVar53 = (longlong)local_c0 < 0;
                    local_c0 = local_c0 & 0xffffffff00000000;
                    if (bVar53) {
                      FUN_147a4fa6c(&local_148,0);
                    }
                  }
                }
                uVar30 = 0;
                local_340 = param_1 + 0x15;
                local_348 = (uint *)(param_1 + 0x17);
                iVar35 = (int)param_1[0x1a];
                if (iVar35 == 0) {
                  uVar50 = 1;
                  iVar45 = 0;
                  iVar39 = 0;
                }
                else {
                  puVar25 = (uint *)param_1[0x19];
                  if ((uint *)param_1[0x19] == (uint *)0x0) {
                    puVar25 = local_348;
                  }
                  uVar47 = *puVar25;
                  if (uVar47 == 0) {
                    iVar45 = iVar35 + 0x1e;
                    if (-1 < iVar35 + -1) {
                      iVar45 = iVar35 + -1;
                    }
                    uVar30 = 0;
                    uVar50 = (ulonglong)(uint)(iVar45 >> 5);
                    if (iVar45 >> 5 < 1) {
                      uVar50 = uVar30;
                    }
                    iVar45 = 0;
                    do {
                      if (uVar50 == uVar30) goto LAB_1434af799;
                      iVar45 = iVar45 + 0x20;
                      uVar47 = puVar25[uVar30 + 1];
                      uVar30 = uVar30 + 1;
                    } while (uVar47 == 0);
                  }
                  else {
                    uVar30 = 0;
                    iVar45 = 0;
                  }
                  uVar50 = (ulonglong)(-uVar47 & uVar47);
                  uVar32 = uVar50 * 2 + 1;
                  lVar17 = 0x3f;
                  if (uVar32 != 0) {
                    for (; uVar32 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                    }
                  }
                  iVar39 = (iVar45 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                  if (iVar35 <= iVar39) {
                    iVar39 = iVar35;
                  }
                }
                if (iVar39 < iVar35) {
                  uVar47 = 0xffffffff;
                  local_318 = plVar52;
                  do {
                    lVar17 = *local_340;
                    lVar37 = *(longlong *)(lVar17 + 8 + (longlong)iVar39 * 0x20);
                    uVar32 = *(ulonglong *)(lVar37 + 0xd8);
                    if ((((uVar32 >> 0x20 == 0) || (uVar42 = (uint)uVar32, (int)uVar42 < 0)) ||
                        (DAT_14c9647dc <= (int)uVar42)) ||
                       (((lVar41 = (ulonglong)((uVar42 & 0xffff) * 0x18) +
                                   *(longlong *)
                                    (DAT_14c9647c8 + (ulonglong)((uint)(uVar32 >> 0xd) & 0x3fff8)),
                         lVar41 == 0 || (*(int *)(lVar41 + 0x10) != (int)(uVar32 >> 0x20))) ||
                        ((*(uint *)(lVar41 + 8) & 0x10200000) != 0)))) {
                      local_310 = CONCAT44(local_310._4_4_,iVar45);
                      local_308 = uVar30;
                      if (param_1[0x13] == lVar37) {
                        param_1[0x13] = 0;
                        plVar52 = (longlong *)param_1[0x14];
                        if (plVar52 != (longlong *)0x0) {
                          param_1[0x14] = 0;
                          LOCK();
                          plVar19 = plVar52 + 1;
                          *(int *)plVar19 = (int)*plVar19 + -1;
                          UNLOCK();
                          if ((int)*plVar19 == 0) {
                            (**(code **)*plVar52)(plVar52);
                            LOCK();
                            piVar23 = (int *)((longlong)plVar52 + 0xc);
                            *piVar23 = *piVar23 + -1;
                            UNLOCK();
                            if (*piVar23 == 0) {
                              (**(code **)(*plVar52 + 0x10))(plVar52);
                            }
                          }
                        }
                      }
                      uVar30 = local_c0;
                      lVar37 = (longlong)(int)local_c0;
                      uVar42 = (int)local_c0 + 1;
                      local_c0 = CONCAT44(local_c0._4_4_,uVar42);
                      if (local_c0._4_4_ < uVar42) {
                        FUN_1457a2cc6(&local_148,uVar30 & 0xffffffff);
                      }
                      puVar38 = (undefined8 *)(lVar17 + (longlong)iVar39 * 0x20 + 8);
                      puVar48 = local_c8;
                      if (local_c8 == (undefined8 *)0x0) {
                        puVar48 = &local_148;
                      }
                      puVar48[lVar37] = uVar32;
                      local_290 = *(undefined8 **)*puVar38;
                      if (local_290 != (undefined8 *)0x0) {
                        uVar18 = FUN_14011a5d2(local_280,&local_290,0);
                        local_18c = local_18c | 0x10;
                        local_330 = (void *)CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
                      }
                      FUN_140441966(*puVar38);
                      FUN_140c69f9a(local_340,iVar39);
                      iVar35 = (int)param_1[0x1a];
                      uVar30 = local_308;
                      iVar45 = (int)local_310;
                    }
                    uVar47 = uVar47 & ~(uint)uVar50;
                    puVar25 = (uint *)param_1[0x19];
                    if ((uint *)param_1[0x19] == (uint *)0x0) {
                      puVar25 = local_348;
                    }
                    iVar39 = (int)uVar30;
                    lVar17 = (longlong)iVar39;
                    uVar42 = puVar25[lVar17] & uVar47;
                    plVar52 = local_318;
                    if (uVar42 == 0) {
                      iVar43 = iVar35 + 0x1e;
                      if (-1 < iVar35 + -1) {
                        iVar43 = iVar35 + -1;
                      }
                      iVar43 = iVar43 >> 5;
                      iVar22 = iVar43;
                      if (iVar43 < iVar39) {
                        iVar22 = iVar39;
                      }
                      if (iVar43 <= iVar39) break;
                      lVar37 = 0;
                      while( true ) {
                        iVar45 = iVar45 + 0x20;
                        uVar42 = (puVar25 + lVar17 + 1)[lVar37];
                        if (uVar42 != 0) break;
                        lVar37 = lVar37 + 1;
                        if (iVar22 - lVar17 == lVar37) goto LAB_1434af799;
                      }
                      uVar30 = (ulonglong)(iVar39 + (int)lVar37 + 1);
                      uVar47 = 0xffffffff;
                    }
                    uVar50 = (ulonglong)(-uVar42 & uVar42);
                    uVar32 = uVar50 * 2 + 1;
                    lVar17 = 0x3f;
                    if (uVar32 != 0) {
                      for (; uVar32 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                      }
                    }
                    iVar39 = (iVar45 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                  } while (iVar39 < iVar35);
                }
LAB_1434af799:
                if (plVar52 != (longlong *)0x0) {
                  iVar35 = (int)plVar52[5];
                  if (iVar35 == 0) {
                    uVar30 = 1;
                    uVar50 = 0;
                    iVar39 = 0;
                    iVar45 = 0;
                  }
                  else {
                    puVar25 = (uint *)plVar52[4];
                    if ((uint *)plVar52[4] == (uint *)0x0) {
                      puVar25 = (uint *)(plVar52 + 2);
                    }
                    uVar47 = *puVar25;
                    if (uVar47 == 0) {
                      iVar45 = iVar35 + 0x1e;
                      if (-1 < iVar35 + -1) {
                        iVar45 = iVar35 + -1;
                      }
                      uVar50 = 0;
                      uVar30 = (ulonglong)(uint)(iVar45 >> 5);
                      if (iVar45 >> 5 < 1) {
                        uVar30 = uVar50;
                      }
                      iVar39 = 0;
                      do {
                        if (uVar30 == uVar50) goto LAB_1434af96f;
                        iVar39 = iVar39 + 0x20;
                        uVar47 = puVar25[uVar50 + 1];
                        uVar50 = uVar50 + 1;
                      } while (uVar47 == 0);
                    }
                    else {
                      uVar50 = 0;
                      iVar39 = 0;
                    }
                    uVar30 = (ulonglong)(-uVar47 & uVar47);
                    uVar32 = uVar30 * 2 + 1;
                    lVar17 = 0x3f;
                    if (uVar32 != 0) {
                      for (; uVar32 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                      }
                    }
                    iVar45 = (iVar39 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                    if (iVar35 <= iVar45) {
                      iVar45 = iVar35;
                    }
                  }
                  if (iVar45 < iVar35) {
                    uVar47 = 0xffffffff;
                    do {
                      lVar17 = *plVar52;
                      lVar37 = (longlong)iVar45;
                      iVar45 = *(int *)(lVar17 + 0xc + lVar37 * 0x18);
                      if ((((iVar45 == 0) ||
                           (uVar42 = *(uint *)(lVar17 + lVar37 * 0x18 + 8), (int)uVar42 < 0)) ||
                          ((DAT_14c9647dc <= (int)uVar42 ||
                           (((lVar41 = (ulonglong)((uVar42 & 0xffff) * 0x18) +
                                       *(longlong *)
                                        (DAT_14c9647c8 + (ulonglong)(uVar42 >> 0x10) * 8),
                             lVar41 == 0 || (*(int *)(lVar41 + 0x10) != iVar45)) ||
                            ((*(uint *)(lVar41 + 8) & 0x10200000) != 0)))))) &&
                         (local_290 = *(undefined8 **)(lVar17 + lVar37 * 0x18),
                         local_290 != (undefined8 *)0x0)) {
                        pppuVar24 = local_280;
                        FUN_14011a5d2(pppuVar24,&local_290,0);
                        local_18c = local_18c | 0x10;
                        iVar35 = (int)plVar52[5];
                        local_330 = (void *)CONCAT71((int7)((ulonglong)pppuVar24 >> 8),1);
                      }
                      uVar47 = uVar47 & ~(uint)uVar30;
                      puVar25 = (uint *)plVar52[4];
                      if ((uint *)plVar52[4] == (uint *)0x0) {
                        puVar25 = (uint *)(plVar52 + 2);
                      }
                      iVar45 = (int)uVar50;
                      lVar17 = (longlong)iVar45;
                      uVar42 = puVar25[lVar17] & uVar47;
                      if (uVar42 == 0) {
                        iVar43 = iVar35 + 0x1e;
                        if (-1 < iVar35 + -1) {
                          iVar43 = iVar35 + -1;
                        }
                        iVar43 = iVar43 >> 5;
                        iVar22 = iVar43;
                        if (iVar43 < iVar45) {
                          iVar22 = iVar45;
                        }
                        if (iVar43 <= iVar45) break;
                        lVar37 = 0;
                        while( true ) {
                          iVar39 = iVar39 + 0x20;
                          uVar42 = (puVar25 + lVar17 + 1)[lVar37];
                          if (uVar42 != 0) break;
                          lVar37 = lVar37 + 1;
                          if (iVar22 - lVar17 == lVar37) goto LAB_1434af96f;
                        }
                        uVar50 = (ulonglong)(iVar45 + (int)lVar37 + 1);
                        uVar47 = 0xffffffff;
                      }
                      uVar30 = (ulonglong)(-uVar42 & uVar42);
                      uVar32 = uVar30 * 2 + 1;
                      lVar17 = 0x3f;
                      if (uVar32 != 0) {
                        for (; uVar32 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                        }
                      }
                      iVar45 = (iVar39 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                    } while (iVar45 < iVar35);
                  }
LAB_1434af96f:
                  FUN_1403cbda0(param_1[5] + 0x15d0,param_1[0xd]);
                }
                bVar11 = (byte)local_358;
                if ((int)local_c0 != 0) {
                  uVar18 = *(undefined8 *)(*(longlong *)(param_1[5] + 0x58) + 0x858);
                  local_290 = local_c8;
                  if (local_c8 == (undefined8 *)0x0) {
                    local_290 = &local_148;
                  }
                  local_288 = (int)local_c0;
                  lVar17 = param_1[0xd];
                  if ((lVar17 != 0 & DAT_14c950c29) == 1) {
                    FUN_1456cec3c(lVar17);
LAB_1434af9f0:
                    uVar47 = *(uint *)(lVar17 + 0xc);
                    if ((int)uVar47 < DAT_14c9647dc) {
                      lVar17 = (ulonglong)((uVar47 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar47 >> 0x10) * 8);
                    }
                    else {
                      lVar17 = 0;
                    }
                    iVar35 = *(int *)(lVar17 + 0x10);
                    if (iVar35 == 0) {
                      LOCK();
                      iVar35 = DAT_14c964868 + 1;
                      UNLOCK();
                      iVar45 = DAT_14c964868 + 1;
                      bVar53 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar35;
                      if (bVar53) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,iVar45);
                      }
                      LOCK();
                      iVar35 = *(int *)(lVar17 + 0x10);
                      bVar53 = iVar35 == 0;
                      if (bVar53) {
                        *(int *)(lVar17 + 0x10) = iVar45;
                        iVar35 = 0;
                      }
                      UNLOCK();
                      if (bVar53) {
                        iVar35 = iVar45;
                      }
                      bVar11 = (byte)local_358;
                    }
                    uVar31 = CONCAT44(iVar35,uVar47);
                  }
                  else {
                    if (lVar17 != 0) goto LAB_1434af9f0;
                    uVar31 = 0;
                  }
                  FUN_1403cc6be(uVar18,uVar31,&local_290,param_1);
                }
                if (local_c8 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
                uVar30 = 0;
                if (((bVar11 | (byte)local_330) & 1) != 0) {
                  (**(code **)(*param_1 + 0x308))(param_1,&local_148,local_280,1);
                  iVar35 = (int)param_1[0x1a];
                  if (iVar35 == 0) {
                    uVar50 = 1;
                    iVar45 = 0;
                    iVar39 = 0;
                  }
                  else {
                    puVar25 = (uint *)param_1[0x19];
                    if ((uint *)param_1[0x19] == (uint *)0x0) {
                      puVar25 = local_348;
                    }
                    uVar47 = *puVar25;
                    if (uVar47 == 0) {
                      iVar45 = iVar35 + 0x1e;
                      if (-1 < iVar35 + -1) {
                        iVar45 = iVar35 + -1;
                      }
                      uVar30 = 0;
                      uVar50 = (ulonglong)(uint)(iVar45 >> 5);
                      if (iVar45 >> 5 < 1) {
                        uVar50 = uVar30;
                      }
                      iVar45 = 0;
                      do {
                        if (uVar50 == uVar30) goto LAB_1434aff33;
                        iVar45 = iVar45 + 0x20;
                        uVar47 = puVar25[uVar30 + 1];
                        uVar30 = uVar30 + 1;
                      } while (uVar47 == 0);
                    }
                    else {
                      uVar30 = 0;
                      iVar45 = 0;
                    }
                    uVar50 = (ulonglong)(-uVar47 & uVar47);
                    uVar32 = uVar50 * 2 + 1;
                    lVar17 = 0x3f;
                    if (uVar32 != 0) {
                      for (; uVar32 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                      }
                    }
                    iVar39 = (iVar45 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                    if (iVar35 <= iVar39) {
                      iVar39 = iVar35;
                    }
                  }
                  if (iVar39 < iVar35) {
                    uVar47 = 0xffffffff;
                    do {
                      local_318 = (longlong *)CONCAT44(local_318._4_4_,uVar47);
                      local_308 = CONCAT44(local_308._4_4_,iVar45);
                      lVar17 = *(longlong *)(*local_340 + 8 + (longlong)iVar39 * 0x20);
                      local_310 = uVar50;
                      if ((*(longlong *)(lVar17 + 0x48) != 0) ||
                         (((*(int *)(lVar17 + 0xdc) != 0 &&
                           (uVar47 = *(uint *)(lVar17 + 0xd8), -1 < (int)uVar47)) &&
                          ((((int)uVar47 < DAT_14c9647dc &&
                            ((plVar52 = (longlong *)
                                        ((ulonglong)((uVar47 & 0xffff) * 0x18) +
                                        *(longlong *)
                                         (DAT_14c9647c8 + (ulonglong)(uVar47 >> 0x10) * 8)),
                             plVar52 != (longlong *)0x0 &&
                             ((int)plVar52[2] == *(int *)(lVar17 + 0xdc))))) &&
                           (((*(uint *)(plVar52 + 1) & 0x10200000) == 0 && (*plVar52 != 0)))))))) {
                        bVar53 = true;
                        if ((*(byte *)(*(longlong *)(lVar17 + 0x58) + 0x31) & 2) == 0) {
                          if ((uint)local_148 == -1) {
                            bVar53 = local_148._4_4_ == -1;
                          }
                          else {
                            bVar53 = false;
                          }
                        }
                        if ((*(longlong *)(lVar17 + 0x30) != 0) &&
                           (pcVar51 = *(char **)(*(longlong *)(lVar17 + 0x30) + 8),
                           pcVar51 != (char *)0x0)) {
                          if (bVar53) {
                            iVar35 = *(int *)(pcVar51 + 8);
                            if (*(int *)(pcVar51 + 4) < iVar35) {
                              uVar47 = iVar35 + 0x1e;
                              if (-1 < (int)(iVar35 - 1U)) {
                                uVar47 = iVar35 - 1U;
                              }
                              lVar17 = (longlong)(int)((iVar35 - (uVar47 & 0xffffffe0)) + -1) * 0x20
                              ;
                              if (*(int *)(pcVar51 + lVar17 + 0x30) == -1) {
                                pcVar33 = pcVar51 + lVar17 + 0x30;
                                pcVar33[0] = -1;
                                pcVar33[1] = -1;
                                pcVar33[2] = -1;
                                pcVar33[3] = -1;
                                pcVar33[4] = -1;
                                pcVar33[5] = -1;
                                pcVar33[6] = -1;
                                pcVar33[7] = -1;
                                pcVar33 = pcVar51 + lVar17 + 0x40;
                                pcVar33[0] = '\0';
                                pcVar33[1] = '\0';
                                pcVar33[2] = '\0';
                                pcVar33[3] = '\0';
                                if (*(int *)(pcVar51 + lVar17 + 0x44) != 0) {
                                  FUN_1448759c8(pcVar51 + lVar17 + 0x38,0);
                                }
                                pcVar51[lVar17 + 0x48] = '\0';
                                *(int *)(pcVar51 + 8) = *(int *)(pcVar51 + 8) + -1;
                              }
                            }
                          }
                          else {
                            iVar35 = *(int *)(pcVar51 + 4);
                            iVar45 = *(int *)(pcVar51 + 8);
                            if (iVar35 < iVar45) {
                              pcVar33 = pcVar51 + 0x30;
                              local_358 = (longlong *)(pcVar51 + 0x440);
                              local_349 = local_18c;
                              bVar11 = local_18c;
                              local_300 = pcVar33;
                              local_2f8 = pcVar51;
                              do {
                                lVar17 = (longlong)(iVar35 % 0x20) * 0x20;
                                if (*(int *)(pcVar33 + lVar17) == -1) {
                                  pcVar34 = pcVar33 + lVar17;
                                  *(undefined ***)pcVar34 = local_148;
                                  if (((bVar11 & 0x10) == 0) && (*pcVar51 == '\0')) {
                                    iVar45 = *(int *)(pcVar51 + 0x448);
                                    *(uint *)(pcVar51 + 0x448) = iVar45 + 1U;
                                    ppuVar26 = local_148;
                                    if (*(uint *)(pcVar51 + 0x44c) < iVar45 + 1U) {
                                      FUN_1417c4578(local_358,iVar45);
                                      ppuVar26 = *(undefined ***)pcVar34;
                                    }
                                    lVar17 = *local_358;
                                    lVar37 = (longlong)iVar45 * 0x20;
                                    *(undefined ***)(lVar17 + lVar37) = ppuVar26;
                                    *(undefined8 *)(lVar17 + 8 + lVar37) = 0;
                                    iVar45 = *(int *)(pcVar34 + 0x10);
                                    local_330 = *(void **)(pcVar34 + 8);
                                    *(int *)(lVar17 + 0x10 + lVar37) = iVar45;
                                    if ((longlong)iVar45 == 0) {
                                      *(undefined4 *)(lVar17 + lVar37 + 0x14) = 0;
                                    }
                                    else {
                                      puVar48 = (undefined8 *)(lVar37 + lVar17 + 8);
                                      FUN_140817052(puVar48,iVar45,0);
                                      memcpy((void *)*puVar48,local_330,(longlong)iVar45 * 2);
                                    }
                                    *(char *)(lVar17 + lVar37 + 0x18) = pcVar34[0x18];
                                    iVar45 = *(int *)(local_2f8 + 8);
                                    pcVar33 = local_300;
                                    pcVar51 = local_2f8;
                                    bVar11 = local_349;
                                  }
                                }
                                iVar35 = iVar35 + 1;
                              } while (iVar35 < iVar45);
                            }
                          }
                          if ((longlong)*(int *)(pcVar51 + 0x438) != 0) {
                            puVar38 = *(undefined8 **)(pcVar51 + 0x430);
                            puVar48 = puVar38 + (longlong)*(int *)(pcVar51 + 0x438) * 5;
                            do {
                              puVar20 = (undefined8 *)*puVar38;
                              puVar36 = puVar38;
                              while (puVar49 = puVar20, puVar49 != (undefined8 *)0x0) {
                                if (*(int *)(puVar49 + 3) == -1) {
                                  if (bVar53) {
                                    *puVar36 = *puVar49;
                                    plVar52 = (longlong *)puVar49[2];
                                    if (plVar52 != (longlong *)0x0) {
                                      LOCK();
                                      plVar19 = plVar52 + 1;
                                      *(int *)plVar19 = (int)*plVar19 + -1;
                                      UNLOCK();
                                      if ((int)*plVar19 == 0) {
                                        (**(code **)*plVar52)(plVar52);
                                        LOCK();
                                        piVar23 = (int *)((longlong)plVar52 + 0xc);
                                        *piVar23 = *piVar23 + -1;
                                        UNLOCK();
                                        if (*piVar23 == 0) {
                                          (**(code **)(*plVar52 + 0x10))(plVar52);
                                        }
                                      }
                                    }
                                    FUN_1400020a8(puVar49);
                                    puVar49 = puVar36;
                                  }
                                  else {
                                    puVar49[3] = local_148;
                                    puVar38[3] = local_148;
                                  }
                                }
                                puVar36 = puVar49;
                                puVar20 = (undefined8 *)*puVar49;
                              }
                              puVar38 = puVar38 + 5;
                            } while (puVar38 != puVar48);
                          }
                        }
                      }
                      uVar47 = (uint)local_318 & ~(uint)local_310;
                      puVar25 = (uint *)param_1[0x19];
                      if ((uint *)param_1[0x19] == (uint *)0x0) {
                        puVar25 = local_348;
                      }
                      iVar35 = (int)param_1[0x1a];
                      iVar39 = (int)uVar30;
                      lVar17 = (longlong)iVar39;
                      uVar42 = puVar25[lVar17] & uVar47;
                      iVar45 = (int)local_308;
                      if (uVar42 == 0) {
                        iVar43 = iVar35 + 0x1e;
                        if (-1 < iVar35 + -1) {
                          iVar43 = iVar35 + -1;
                        }
                        iVar43 = iVar43 >> 5;
                        iVar22 = iVar43;
                        if (iVar43 < iVar39) {
                          iVar22 = iVar39;
                        }
                        if (iVar43 <= iVar39) break;
                        lVar37 = 0;
                        while( true ) {
                          iVar45 = iVar45 + 0x20;
                          uVar42 = puVar25[lVar17 + lVar37 + 1];
                          if (uVar42 != 0) break;
                          lVar37 = lVar37 + 1;
                          if (iVar22 - lVar17 == lVar37) goto LAB_1434aff33;
                        }
                        uVar30 = (ulonglong)(iVar39 + (int)lVar37 + 1);
                        uVar47 = 0xffffffff;
                      }
                      uVar50 = (ulonglong)(-uVar42 & uVar42);
                      uVar32 = uVar50 * 2 + 1;
                      lVar17 = 0x3f;
                      if (uVar32 != 0) {
                        for (; uVar32 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                        }
                      }
                      iVar39 = (iVar45 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                    } while (iVar39 < iVar35);
                  }
LAB_1434aff33:
                  if (0 < (int)param_1[0x4a]) {
                    if ((int)(uint)local_148 <= local_148._4_4_) {
                      plVar52 = param_1 + 0x3f;
                      plVar19 = param_1 + 0x46;
                      local_340 = param_1 + 0x41;
                      uVar47 = (uint)local_148;
                      do {
                        uVar42 = (int)uVar47 % 0x40;
                        iVar35 = (int)param_1[0x40];
                        iVar45 = *(int *)((longlong)param_1 + 0x22c);
                        if (iVar35 != iVar45) {
                          plVar21 = (longlong *)param_1[0x47];
                          if ((longlong *)param_1[0x47] == (longlong *)0x0) {
                            plVar21 = plVar19;
                          }
                          uVar46 = *(uint *)((longlong)plVar21 +
                                            (ulonglong)((int)param_1[0x48] - 1U & uVar42) * 4);
                          if (uVar46 != 0xffffffff) {
                            do {
                              puVar25 = (uint *)(*plVar52 + (longlong)(int)uVar46 * 0x28);
                              if (*puVar25 == uVar42) {
                                if (puVar25 != (uint *)0x0) goto LAB_1434b04be;
                                break;
                              }
                              uVar46 = puVar25[8];
                            } while (uVar46 != 0xffffffff);
                          }
                        }
                        if (iVar45 == 0) {
                          *(int *)(param_1 + 0x40) = iVar35 + 1;
                          if (*(int *)((longlong)param_1 + 0x204) == iVar35) {
                            FUN_140549c28(plVar52,iVar35);
                          }
                          iVar45 = (int)param_1[0x44];
                          if (iVar45 == 0) {
                            iVar39 = -1;
                          }
                          else {
                            iVar39 = iVar45 + 0x1e;
                            if (-1 < iVar45 + -1) {
                              iVar39 = iVar45 + -1;
                            }
                            iVar39 = iVar39 >> 5;
                          }
                          iVar43 = iVar45 + 1;
                          iVar22 = iVar45 + 0x1f;
                          if (-1 < iVar45) {
                            iVar22 = iVar45;
                          }
                          if (iVar22 >> 5 == iVar39) {
                            *(int *)(param_1 + 0x44) = iVar43;
                          }
                          else {
                            if (*(int *)((longlong)param_1 + 0x224) <= iVar45) {
                              uVar46 = iVar45 + 0x20;
                              local_348 = (uint *)(ulonglong)uVar46;
                              iVar39 = iVar45;
                              if (uVar46 < 0xa0) {
                                iVar43 = 0x80;
                              }
                              else {
                                uVar46 = uVar46 >> 5;
                                local_348 = (uint *)(ulonglong)uVar46;
                                if (*(int *)((longlong)param_1 + 0x224) + 0x1fU < 0xa0) {
                                  uVar28 = 4;
                                  if (4 < uVar46) {
                                    uVar28 = uVar46;
                                  }
                                }
                                else {
                                  uVar28 = uVar46 + (uVar46 * 3 >> 3) + 0x10;
                                }
                                uVar30 = (ulonglong)(uVar28 * 4);
                                if (DAT_14c872d28 != (longlong *)0x0) {
                                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                                    uVar46 = (uint)(uVar30 + 0xf);
                                    if (uVar28 < 0x1ffd) {
                                      uVar30 = (ulonglong)
                                               (ushort)(&DAT_14c841d90)
                                                       [0x32 - (byte)(&DAT_14c841e00)
                                                                     [uVar30 + 0xf >> 4]];
                                    }
                                    else {
                                      uVar50 = (ulonglong)(uVar46 & 0xfffffff0);
                                      if (uVar50 < 0x7ff1) {
                                        bVar11 = (&DAT_14c841e00)[uVar46 >> 4];
                                        uVar32 = 0x32;
                                        if (0x32 < bVar11) {
                                          uVar32 = (ulonglong)bVar11;
                                        }
                                        uVar40 = 0x32 - (ulonglong)bVar11;
                                        do {
                                          uVar30 = (ulonglong)
                                                   (ushort)(&DAT_14c841d90)[uVar40 & 0xffffffff];
                                          if (((&DAT_14c841d90)[uVar40 & 0xffffffff] & 0xf) == 0)
                                          goto LAB_1434b0683;
                                          lVar17 = uVar32 + 1 + uVar40;
                                          uVar40 = uVar40 - 1;
                                        } while (lVar17 != 0x33);
                                      }
                                      uVar30 = (ulonglong)DAT_14c841df8;
                                      if (DAT_14c841df8 < 0x11) {
                                        uVar30 = 0x10;
                                      }
                                      uVar30 = -uVar30 & (uVar50 + uVar30) - 1;
                                    }
                                  }
                                  else {
                                    uVar30 = (**(code **)(*DAT_14c872d28 + 0x60))
                                                       (DAT_14c872d28,uVar30,0);
                                    iVar39 = (int)param_1[0x44];
                                  }
                                }
LAB_1434b0683:
                                iVar15 = (int)(uVar30 >> 2);
                                iVar43 = iVar15 << 5;
                                if (iVar15 < (int)local_348) {
                                  iVar43 = -0x20;
                                }
                              }
                              *(int *)((longlong)param_1 + 0x224) = iVar43;
                              FUN_1446efbd8(local_340,iVar39);
                              iVar43 = (int)param_1[0x44] + 1;
                            }
                            iVar39 = iVar43 + 0x1f;
                            if (-1 < iVar43) {
                              iVar39 = iVar43;
                            }
                            *(int *)(param_1 + 0x44) = iVar43;
                            if (iVar43 % 0x20 != 0) {
                              plVar21 = (longlong *)param_1[0x43];
                              if ((longlong *)param_1[0x43] == (longlong *)0x0) {
                                plVar21 = local_340;
                              }
                              bVar11 = -(char)(iVar43 % 0x20);
                              *(uint *)((longlong)plVar21 + (longlong)(iVar39 >> 5) * 4) =
                                   (uint)(*(int *)((longlong)plVar21 + (longlong)(iVar39 >> 5) * 4)
                                         << (bVar11 & 0x1f)) >> (bVar11 & 0x1f);
                            }
                          }
                          lVar17 = (longlong)iVar35;
                          plVar21 = (longlong *)param_1[0x43];
                          if ((longlong *)param_1[0x43] == (longlong *)0x0) {
                            plVar21 = local_340;
                          }
                          bVar11 = (byte)iVar45 & 0x1f;
                          puVar25 = (uint *)((longlong)plVar21 + (longlong)(iVar22 >> 5) * 4);
                          *puVar25 = *puVar25 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
                        }
                        else {
                          iVar35 = (int)param_1[0x45];
                          lVar17 = (longlong)iVar35;
                          iVar39 = *(int *)(param_1[0x3f] + 4 + lVar17 * 0x28);
                          *(int *)(param_1 + 0x45) = iVar39;
                          *(int *)((longlong)param_1 + 0x22c) = iVar45 + -1;
                          if (iVar45 + -1 != 0) {
                            *(undefined4 *)(param_1[0x3f] + (longlong)iVar39 * 0x28) = 0xffffffff;
                          }
                        }
                        plVar21 = (longlong *)param_1[0x43];
                        if ((longlong *)param_1[0x43] == (longlong *)0x0) {
                          plVar21 = local_340;
                        }
                        iVar45 = iVar35 + 0x1f;
                        if (-1 < iVar35) {
                          iVar45 = iVar35;
                        }
                        puVar25 = (uint *)((longlong)plVar21 + (longlong)(iVar45 >> 5) * 4);
                        *puVar25 = *puVar25 | 1 << ((byte)iVar35 & 0x1f);
                        puVar25 = (uint *)(param_1[0x3f] + lVar17 * 0x28);
                        *puVar25 = uVar42;
                        puVar25[2] = 0xffffffff;
                        puVar25[4] = 0;
                        puVar25[5] = 0;
                        puVar25[6] = 0;
                        puVar25[7] = 0;
                        puVar25[8] = 0xffffffff;
                        uVar46 = (int)param_1[0x40] - *(int *)((longlong)param_1 + 0x22c);
                        if ((uVar46 != 0) && (uVar46 != 1)) {
                          plVar21 = (longlong *)param_1[0x47];
                          if ((longlong *)param_1[0x47] == (longlong *)0x0) {
                            plVar21 = plVar19;
                          }
                          uVar28 = *(uint *)((longlong)plVar21 +
                                            (ulonglong)((int)param_1[0x48] - 1U & uVar42) * 4);
                          if (uVar28 != 0xffffffff) {
                            do {
                              puVar1 = (uint *)(*plVar52 + (longlong)(int)uVar28 * 0x28);
                              if (*puVar1 == uVar42) {
                                if (*(longlong *)(puVar1 + 4) != 0) {
                                  FUN_1400020a8();
                                }
                                uVar42 = *puVar25;
                                uVar46 = puVar25[1];
                                uVar28 = puVar25[2];
                                uVar5 = puVar25[3];
                                uVar6 = puVar25[5];
                                uVar7 = puVar25[6];
                                uVar8 = puVar25[7];
                                puVar1[4] = puVar25[4];
                                puVar1[5] = uVar6;
                                puVar1[6] = uVar7;
                                puVar1[7] = uVar8;
                                *puVar1 = uVar42;
                                puVar1[1] = uVar46;
                                puVar1[2] = uVar28;
                                puVar1[3] = uVar5;
                                FUN_147a4f95a(plVar52,iVar35);
                                goto LAB_1434b049d;
                              }
                              uVar28 = puVar1[8];
                            } while (uVar28 != 0xffffffff);
                          }
                        }
                        if (uVar46 < 4) {
                          iVar45 = 1;
                        }
                        else {
                          uVar30 = (ulonglong)(uVar46 & 0xfffffffe) + 0xf;
                          lVar17 = 0x3f;
                          if (uVar30 != 0) {
                            for (; uVar30 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                            }
                          }
                          iVar45 = 1 << ((byte)lVar17 & 0x1f);
                        }
                        if (((int)uVar46 < 1) || (iVar45 <= (int)param_1[0x48])) {
                          uVar42 = (int)param_1[0x48] - 1U & uVar42;
                          puVar25[9] = uVar42;
                          plVar21 = (longlong *)param_1[0x47];
                          if ((longlong *)param_1[0x47] == (longlong *)0x0) {
                            plVar21 = plVar19;
                          }
                          puVar25[8] = *(uint *)((longlong)plVar21 +
                                                ((longlong)(int)param_1[0x48] - 1U &
                                                (longlong)(int)uVar42) * 4);
                          plVar21 = (longlong *)param_1[0x47];
                          if ((longlong *)param_1[0x47] == (longlong *)0x0) {
                            plVar21 = plVar19;
                          }
                          *(int *)((longlong)plVar21 +
                                  ((longlong)(int)param_1[0x48] - 1U & (longlong)(int)uVar42) * 4) =
                               iVar35;
                        }
                        else {
                          *(int *)(param_1 + 0x48) = iVar45;
                          FUN_1417c3f86(plVar52);
                        }
LAB_1434b049d:
                        puVar25 = (uint *)(*plVar52 + (longlong)iVar35 * 0x28);
LAB_1434b04be:
                        if (puVar25[2] != uVar47) {
                          uVar42 = puVar25[6];
                          if ((int)uVar42 < 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_1456afac4(uVar42);
                          }
                          puVar25[6] = 0;
                          if (puVar25[7] != uVar42) {
                            FUN_14481578e(puVar25 + 4);
                          }
                        }
                        puVar25[2] = uVar47;
                        uVar42 = *(uint *)(param_1 + 0x4a);
                        if ((longlong)(int)uVar42 != 0) {
                          uVar46 = puVar25[6];
                          puVar25[6] = uVar46 + uVar42;
                          if (puVar25[7] - uVar46 < uVar42) {
                            FUN_1446f48e2(puVar25 + 4,uVar46);
                          }
                          memcpy((void *)((longlong)(int)uVar46 * 4 + *(longlong *)(puVar25 + 4)),
                                 (void *)param_1[0x49],(longlong)(int)uVar42 << 2);
                        }
                        bVar53 = (int)uVar47 < local_148._4_4_;
                        uVar47 = uVar47 + 1;
                      } while (bVar53);
                    }
                  }
                  plVar52 = local_338;
                  uVar30 = local_1e0;
                  if ((*(byte *)(*local_338 + 0x60) & 1) != 0) {
                    lVar17 = param_1[5];
                    iVar35 = *(int *)(lVar17 + 0x88);
                    *(uint *)(lVar17 + 0x88) = iVar35 + 1U;
                    if (*(uint *)(lVar17 + 0x8c) < iVar35 + 1U) {
                      FUN_140b51998((longlong *)(lVar17 + 0x80),iVar35);
                    }
                    lVar37 = *plVar52;
                    *(longlong *)(*(longlong *)(lVar17 + 0x80) + (longlong)iVar35 * 8) = lVar37;
                    uVar30 = local_1e0;
                    if ((lVar37 != 0 & DAT_14c950c29) == 1) {
                      FUN_1456cec3c();
                      uVar30 = local_1e0;
                    }
                  }
                }
                *(undefined4 *)(param_1 + 0x4a) = 0;
                if (*(int *)((longlong)param_1 + 0x254) != 0) {
                  FUN_14481578e(param_1 + 0x49,0);
                }
                dVar3 = *(double *)(*(longlong *)(param_1[5] + 0x58) + 0x300);
                param_1[0x11] = (longlong)dVar3;
                fVar2 = *(float *)(param_1 + 0x34);
                if (0.0 < fVar2) {
                  uVar47 = rand();
                  dVar3 = dVar3 + (double)fVar2 +
                          (double)(((float)(uVar47 & 0x7fff) / 32767.0) * fVar2 * 0.5);
                }
                param_1[0x33] = (longlong)dVar3;
                if (local_2d8 == '\0') {
                  local_2d8 = '\x01';
                  *(int *)(local_2f0 + 4) = *(int *)(local_2f0 + 4) + -1;
                  if (local_2e0 != local_2f0[2]) {
                    FUN_14004673c();
                  }
                  *local_2f0 = local_2e8;
                  local_2f0[3] = local_2d0;
                  local_2e8 = 0;
                }
                *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xfd;
                lVar17 = *(longlong *)(*(longlong *)(param_1[5] + 0x58) + 0x288);
                if ((DAT_14c950c29 == 1) && (lVar17 != 0)) {
                  FUN_1456cec3c(lVar17);
                }
                FUN_1435a83f8(lVar17,DAT_14caf3198,(longlong)(uVar30 + 7) >> 3);
                uVar47 = local_31c;
              }
              else {
                if ((bVar11 & 1) != 0) {
                  (**(code **)(*param_1 + 0x308))(param_1,&local_148,local_280,1);
                }
                uVar47 = local_31c;
                if (local_2d8 == '\0') {
                  local_2d8 = '\x01';
                  *(int *)(local_2f0 + 4) = *(int *)(local_2f0 + 4) + -1;
                  if (local_2e0 != local_2f0[2]) {
                    FUN_14004673c();
                  }
                  *local_2f0 = local_2e8;
                  local_2f0[3] = local_2d0;
                  local_2e8 = 0;
                }
                uVar30 = (ulonglong)(bVar11 & 1);
              }
              if (local_2d8 == '\0') {
                local_2d8 = '\x01';
                *(int *)(local_2f0 + 4) = *(int *)(local_2f0 + 4) + -1;
                if (local_2e0 != local_2f0[2]) {
                  FUN_14004673c();
                }
                *local_2f0 = local_2e8;
                local_2f0[3] = local_2d0;
              }
              lVar17 = local_328;
              if (local_359 != *(char *)(local_328 + 0x68)) {
                uVar50 = *(ulonglong *)(local_328 + 0x28);
                if (uVar50 < 0xffffffff00000000) {
                  plVar52 = DAT_14c9980d0;
                  if (DAT_14c9980d8 == 0) {
                    plVar52 = (longlong *)0x0;
                  }
                  (**(code **)(*plVar52 + 0x58))(plVar52,local_328,uVar50,4);
                  uVar47 = local_31c;
                }
                else {
                  uVar42 = (uint)uVar50;
                  if ((-1 < (int)uVar42) && ((int)uVar42 < DAT_14c998088)) {
                    puVar27 = &DAT_14c998070;
                    if (DAT_14c998080 != (undefined *)0x0) {
                      puVar27 = DAT_14c998080;
                    }
                    if ((*(uint *)(puVar27 + ((uint)(uVar50 >> 3) & 0xffffffc)) >> (uVar42 & 0x1f) &
                        1) != 0) {
                      lVar37 = DAT_14c998060 + (ulonglong)(uVar42 & 0x7fffffff) * 0x68;
                      puVar25 = *(uint **)(lVar37 + 0x18);
                      if (*(uint **)(lVar37 + 0x18) == (uint *)0x0) {
                        puVar25 = (uint *)(lVar37 + 8);
                      }
                      *puVar25 = *puVar25 | 0x10;
                      *(byte *)(lVar37 + 0x60) = *(byte *)(lVar37 + 0x60) | 1;
                    }
                  }
                }
                if ((local_359 == '\x02') && ((*(byte *)(lVar17 + 99) & 8) != 0)) {
                  *(undefined1 *)(lVar17 + 0x68) = 2;
                }
              }
              if (local_2c0 != 0) {
                *(undefined8 *)(local_2c0 + 0x1d38) = 0;
                *(undefined8 *)(local_2c0 + 0x1d40) = 0;
              }
              *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) & 0xfffffffb | uVar47 & 4;
              DAT_14cad5408 = 0;
            }
            else {
              uVar30 = 0;
            }
            local_2a8[0x18] = local_2a0;
            local_280[0] = &PTR_FUN_14a8a3730;
            if (local_158 != 0) {
              FUN_1400020a8();
            }
            if (local_178 != 0) {
              FUN_1400020a8();
            }
            if (local_188 != 0) {
              FUN_1400020a8();
            }
            local_280[0] = &PTR_FUN_149e37560;
            if (local_1f0 != 0) {
              FUN_1400020a8();
            }
            local_280[0] = &PTR__purecall_149e35f70;
            if (local_228 != (longlong *)0x0) {
              if (*local_228 != 0) {
                FUN_1400020a8();
              }
              FUN_1400020a8(local_228);
            }
            if (local_208 != 0) {
              if (*(longlong *)(local_208 + 0x40) != 0) {
                FUN_1400020a8();
              }
              FUN_1400020a8(local_208);
            }
            goto LAB_1434ae66d;
          }
        }
        *(uint *)(param_1 + 0x12) = uVar46 | 0x40;
        param_1[0x13] = 0;
        plVar52 = (longlong *)param_1[0x14];
        if (plVar52 != (longlong *)0x0) {
          param_1[0x14] = 0;
          LOCK();
          plVar19 = plVar52 + 1;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)*plVar19 == 0) {
            (**(code **)*plVar52)(plVar52);
            LOCK();
            piVar23 = (int *)((longlong)plVar52 + 0xc);
            *piVar23 = *piVar23 + -1;
            UNLOCK();
            if (*piVar23 == 0) {
              (**(code **)(*plVar52 + 0x10))(plVar52);
            }
          }
        }
        (**(code **)(*param_1 + 0x2c0))(param_1,&local_148);
        ppuVar26 = local_148;
        if (local_140 == 0) {
          ppuVar26 = (undefined **)&DAT_149dfb77a;
        }
        pwVar29 = L"ReplicateActor called with PendingKill Actor! %s";
      }
      else {
        (**(code **)(*param_1 + 0x2c0))(param_1,&local_148);
        ppuVar26 = local_148;
        if (local_140 == 0) {
          ppuVar26 = (undefined **)&DAT_149dfb77a;
        }
        pwVar29 = L"ReplicateActor called while already replicating! %s";
      }
      FUN_140002266(local_280,pwVar29,ppuVar26);
      if (local_148 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (local_280[0] != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1434ae66a:
  uVar30 = 0;
LAB_1434ae66d:
  if ((local_70 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar30;
code_r0x0001434aefe4:
  iVar45 = (int)plVar21[2];
  if (iVar45 == -1) goto LAB_1434af01d;
  goto LAB_1434aefd4;
}



// FUNCTION 1434b1092 FUN_1434b1092 body=592 status=ok
// SIG undefined FUN_1434b1092(void)

void FUN_1434b1092(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  uint *puVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar11 = *(uint *)(param_1 + 0x30);
  if ((uVar11 & 0x84) == 0) {
    iVar2 = *(int *)(param_1 + 0xd0);
    if (iVar2 == 0) {
      uVar8 = 1;
      uVar6 = 0;
      iVar7 = 0;
      iVar3 = 0;
    }
    else {
      puVar9 = *(uint **)(param_1 + 200);
      if (*(uint **)(param_1 + 200) == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 0xb8);
      }
      uVar4 = *puVar9;
      if (uVar4 == 0) {
        iVar3 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar3 = iVar2 + -1;
        }
        uVar6 = 0;
        uVar8 = (ulonglong)(uint)(iVar3 >> 5);
        if (iVar3 >> 5 < 1) {
          uVar8 = uVar6;
        }
        iVar7 = 0;
        do {
          if (uVar8 == uVar6) goto LAB_1434b1271;
          iVar7 = iVar7 + 0x20;
          uVar4 = puVar9[uVar6 + 1];
          uVar6 = uVar6 + 1;
        } while (uVar4 == 0);
      }
      else {
        uVar6 = 0;
        iVar7 = 0;
      }
      uVar8 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar8 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar3 = (iVar7 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar3) {
        iVar3 = iVar2;
      }
    }
    if (iVar3 < iVar2) {
      uVar11 = 0xffffffff;
      do {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 8 + (longlong)iVar3 * 0x20);
        if ((*(longlong *)(lVar5 + 0x48) != 0) ||
           (((((*(int *)(lVar5 + 0xdc) != 0 && (uVar4 = *(uint *)(lVar5 + 0xd8), -1 < (int)uVar4))
              && ((int)uVar4 < DAT_14c9647dc)) &&
             ((plVar14 = (longlong *)
                         ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
              plVar14 != (longlong *)0x0 && ((int)plVar14[2] == *(int *)(lVar5 + 0xdc))))) &&
            (((*(uint *)(plVar14 + 1) & 0x10200000) == 0 && (*plVar14 != 0)))))) {
          *(byte *)(lVar5 + 0xc) = *(byte *)(lVar5 + 0xc) & 0xfe;
          iVar2 = *(int *)(param_1 + 0xd0);
        }
        uVar11 = uVar11 & ~(uint)uVar8;
        puVar9 = *(uint **)(param_1 + 200);
        if (*(uint **)(param_1 + 200) == (uint *)0x0) {
          puVar9 = (uint *)(param_1 + 0xb8);
        }
        iVar3 = (int)uVar6;
        lVar5 = (longlong)iVar3;
        uVar4 = puVar9[lVar5] & uVar11;
        if (uVar4 == 0) {
          iVar12 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar12 = iVar2 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar13 = iVar12;
          if (iVar12 < iVar3) {
            iVar13 = iVar3;
          }
          if (iVar12 <= iVar3) break;
          lVar10 = 0;
          while( true ) {
            iVar7 = iVar7 + 0x20;
            uVar4 = puVar9[lVar5 + lVar10 + 1];
            if (uVar4 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar13 - lVar5 == lVar10) goto LAB_1434b126d;
          }
          uVar6 = (ulonglong)(iVar3 + (int)lVar10 + 1);
          uVar11 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar4 & uVar4);
        uVar1 = uVar8 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar3 = (iVar7 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
      } while (iVar3 < iVar2);
LAB_1434b126d:
      uVar11 = *(uint *)(param_1 + 0x30);
    }
LAB_1434b1271:
    *(uint *)(param_1 + 0x30) = uVar11 & 0xfffffe7f | 0x80;
    lVar5 = *(longlong *)(param_1 + 0x28);
    local_38 = param_1;
    if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_1405f6d44(lVar5 + 0x16c8,&local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434b12e4 FUN_1434b12e4 body=138 status=ok
// SIG undefined FUN_1434b12e4(void)

int FUN_1434b12e4(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                 longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_3[0x14];
  FUN_1403f2c2c();
  local_2c = *(undefined4 *)(param_5 + 0xa0);
  (**(code **)(*param_3 + 0x188))(param_3);
  lVar2 = param_3[0x14];
  (**(code **)(*param_3 + 0x178))
            (param_3,*(undefined8 *)(param_5 + 0x90),*(undefined8 *)(param_5 + 0xa0));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (int)lVar2 - (int)lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434b1370 FUN_1434b1370 body=289 status=ok
// SIG undefined FUN_1434b1370(void)

int FUN_1434b1370(longlong param_1,longlong *param_2,int *param_3,longlong param_4,longlong param_5,
                 longlong param_6,char param_7)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_2[0x14];
  if ((*(byte *)(*(longlong *)(param_1 + 0x28) + 0xa4) & 2) == 0 || param_7 != '\0') {
    uVar2 = *(undefined4 *)(param_4 + 8);
    iVar3 = *param_3 + param_3[10] + 1;
  }
  else {
    uVar2 = 0xffffffff;
    if (0 < (longlong)*(int *)(param_5 + 0x20)) {
      piVar4 = (int *)(*(longlong *)(param_5 + 0x18) + 4);
      lVar5 = 0;
      do {
        if (*piVar4 == *(int *)(param_4 + 0xc)) {
          uVar2 = (undefined4)lVar5;
          break;
        }
        lVar5 = lVar5 + 1;
        piVar4 = piVar4 + 5;
      } while (*(int *)(param_5 + 0x20) != lVar5);
    }
    FUN_147be7c12(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x68),param_5,uVar2);
    iVar3 = 2;
    if (2 < *(int *)(param_5 + 0x20)) {
      iVar3 = *(int *)(param_5 + 0x20);
    }
  }
  FUN_14278fd38(param_2,uVar2,iVar3);
  local_34 = *(undefined4 *)(param_6 + 0xa0);
  (**(code **)(*param_2 + 0x188))(param_2,&local_34);
  (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(param_6 + 0x90),local_34);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (int)param_2[0x14] - (int)lVar1;
}



// FUNCTION 1434b1492 FUN_1434b1492 body=1012 status=ok
// SIG undefined FUN_1434b1492(void)

undefined8 * FUN_1434b1492(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  byte bVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong *puVar19;
  bool bVar20;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  longlong *local_70;
  undefined8 *local_68;
  longlong *local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar10 = (undefined8 *)0x0;
  if ((*(byte *)(*(longlong *)(param_1 + 0x28) + 0xa4) & 2) == 0) goto LAB_1434b14c0;
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x68);
  FUN_14010318a(uVar16,&local_58,0);
  (**(code **)(*DAT_14cb0d2b0 + 0x480))(DAT_14cb0d2b0,*(undefined8 *)(param_1 + 0x28),&local_58,0);
  puVar15 = (undefined8 *)(ulonglong)(DAT_14cad4bf8 - 1);
  if (DAT_14cad4bf8 == 0) {
    puVar15 = puVar10;
  }
  FUN_1400020e8(&local_58,DAT_14cad4bf0,puVar15);
  FUN_147be7a80(uVar7,&local_68,&local_58);
  if (local_68 == (undefined8 *)0x0) {
    lVar9 = FUN_140575224(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x1c8),uVar16);
    puVar10 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined4 *)(puVar10 + 2) = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    *(undefined1 *)(puVar10 + 5) = 1;
    plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar3 = local_60;
    plVar11[1] = (longlong)&DAT_100000001;
    *plVar11 = (longlong)&PTR_FUN_14a3e1d90;
    plVar11[2] = (longlong)puVar10;
    local_68 = puVar10;
    if (plVar11 == local_60) {
      plVar8 = local_60;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar11 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar5 = *piVar1;
          UNLOCK();
          plVar3 = plVar11;
          goto joined_r0x0001434b1655;
        }
      }
    }
    else {
      plVar8 = plVar11;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_60 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          puVar10 = (undefined8 *)*local_60;
          local_60 = plVar11;
          (*(code *)*puVar10)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar5 = *piVar1;
          UNLOCK();
joined_r0x0001434b1655:
          plVar8 = local_60;
          if (iVar5 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            plVar8 = local_60;
          }
        }
      }
    }
    local_60 = plVar8;
    iVar14 = 0;
    iVar5 = local_50 + -1;
    if (local_50 == 0) {
      iVar5 = 0;
    }
    FUN_1402980a2(local_68,local_58,iVar5);
    for (; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 8)) {
      if ((longlong)*(int *)(lVar9 + 0x28) != 0) {
        puVar19 = *(ulonglong **)(lVar9 + 0x20);
        puVar4 = puVar19 + (longlong)*(int *)(lVar9 + 0x28) * 3;
        do {
          uVar17 = *puVar19;
          if (uVar17 == 0 || (uVar17 & 1) != 0) {
LAB_1434b16b3:
            bVar13 = 0;
          }
          else {
            lVar18 = *(longlong *)(uVar17 + 8);
            lVar12 = FUN_1446ddbd2();
            if (*(ulonglong *)(lVar12 + 8) == 0) {
              bVar20 = lVar18 != 0;
              if (lVar18 != lVar12 && bVar20) {
                do {
                  lVar18 = *(longlong *)(lVar18 + 0x30);
                  bVar20 = lVar18 != 0;
                  if (lVar18 == lVar12) break;
                } while (lVar18 != 0);
              }
              if (bVar20) goto LAB_1434b176a;
              goto LAB_1434b16b3;
            }
            if ((*(ulonglong *)(lVar18 + 0x18) & *(ulonglong *)(lVar12 + 8)) == 0)
            goto LAB_1434b16b3;
LAB_1434b176a:
            lVar18 = *(longlong *)(uVar17 + 8);
            lVar12 = FUN_1446dcc8c();
            if (*(ulonglong *)(lVar12 + 8) == 0) {
              bVar20 = lVar18 != 0;
              if (lVar18 != lVar12 && bVar20) {
                do {
                  lVar18 = *(longlong *)(lVar18 + 0x30);
                  bVar20 = lVar18 != 0;
                  if (lVar18 == lVar12) break;
                } while (lVar18 != 0);
              }
              if (bVar20) goto LAB_1434b1786;
              goto LAB_1434b16b3;
            }
            if ((*(ulonglong *)(lVar18 + 0x18) & *(ulonglong *)(lVar12 + 8)) == 0)
            goto LAB_1434b16b3;
LAB_1434b1786:
            bVar13 = (*(byte *)(*(longlong *)(uVar17 + 0x70) + 0xb2) & 0x10) >> 4;
          }
          uVar17 = *puVar19 & 0xfffffffffffffffe;
          if (uVar17 == 0 || (*puVar19 & 1) == 0) {
LAB_1434b16e0:
            if (bVar13 != 0) {
LAB_1434b16e4:
              uVar17 = *puVar19;
              if ((uVar17 & 1) == 0) {
                if (uVar17 != 0) {
                  puVar10 = (undefined8 *)(uVar17 + 0x20);
                  goto LAB_1434b16f7;
                }
                uVar16 = 0;
              }
              else {
                puVar10 = (undefined8 *)((uVar17 & 0xfffffffffffffffe) + 0x18);
LAB_1434b16f7:
                uVar16 = *puVar10;
              }
              plVar3 = local_68 + 3;
              iVar5 = *(int *)(local_68 + 4);
              lVar18 = (longlong)iVar5;
              *(uint *)(local_68 + 4) = iVar5 + 1U;
              if (*(uint *)((longlong)local_68 + 0x24) < iVar5 + 1U) {
                FUN_14747c382(plVar3,iVar5);
              }
              lVar12 = *plVar3;
              uVar6 = *(undefined4 *)((longlong)puVar19 + 0xc);
              *(int *)(lVar12 + lVar18 * 0x14) = iVar14;
              iVar14 = iVar14 + 1;
              *(undefined4 *)(lVar12 + 4 + lVar18 * 0x14) = uVar6;
              *(undefined8 *)(lVar12 + 8 + lVar18 * 0x14) = uVar16;
              *(undefined2 *)(lVar12 + 0x10 + lVar18 * 0x14) = 0x100;
              *(undefined1 *)(lVar12 + 0x12 + lVar18 * 0x14) = 0;
            }
          }
          else {
            lVar12 = FUN_140010bca();
            lVar18 = *(longlong *)(uVar17 + 0x10);
            if (*(int *)(lVar18 + 0x38) < *(int *)(lVar12 + 0x38)) goto LAB_1434b16e0;
            if (*(longlong *)(*(longlong *)(lVar18 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8)
                == lVar12 + 0x30 || bVar13 != 0) goto LAB_1434b16e4;
          }
          puVar19 = puVar19 + 3;
        } while (puVar19 != puVar4);
      }
    }
    local_78 = local_68;
    local_70 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    FUN_147be7b06(uVar7,&local_58,&local_78);
  }
  plVar3 = local_60;
  puVar10 = local_68;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_60 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_1434b14c0:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return puVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434b1887 FUN_1434b1887 body=180 status=ok
// SIG undefined FUN_1434b1887(void)

void FUN_1434b1887(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((lVar1 != 0) &&
     ((lVar3 = *(longlong *)(lVar1 + 0xf0), lVar3 != 0 ||
      ((0 < *(int *)(lVar1 + 0x100) && (lVar3 = **(longlong **)(lVar1 + 0xf8), lVar3 != 0)))))) {
    plVar2 = *(longlong **)(lVar3 + 0x68);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c872ef8) {
      FUN_144b3d300(&DAT_14c872ef8);
      if (DAT_14c872ef8 == -1) {
        FUN_1459825b0(&DAT_14c872ee0);
        atexit(FUN_1427868a5);
        _Init_thread_footer(&DAT_14c872ef8);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001434b18df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x318))(plVar2,&DAT_14c872ee0);
    return;
  }
  return;
}



// FUNCTION 1434b193b FUN_1434b193b body=69 status=ok
// SIG undefined FUN_1434b193b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434b193b(void)

{
  _DAT_14cad5410 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434b197d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5418,1);
  return;
}



// FUNCTION 1434b1980 FUN_1434b1980 body=1968 status=ok
// SIG undefined FUN_1434b1980(void)

void FUN_1434b1980(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  uint uVar4;
  longlong lVar5;
  int *piVar6;
  longlong **pplVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  ulonglong *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong *puVar26;
  int iVar27;
  bool bVar28;
  float fVar29;
  undefined1 auStack_3c8 [32];
  longlong *local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_37c;
  int local_374;
  longlong local_368;
  undefined4 local_360;
  longlong *local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined4 uStack_344;
  uint local_340;
  int local_33c;
  int local_338;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  lVar5 = *(longlong *)(param_1 + 0x38);
  if ((lVar5 != 0) &&
     ((*(longlong *)(lVar5 + 0xf0) != 0 ||
      ((0 < *(int *)(lVar5 + 0x100) && (**(longlong **)(lVar5 + 0xf8) != 0)))))) {
    local_388 = 0;
    local_380 = 0;
    local_3a8 = (longlong *)0x0;
    uStack_3a0 = 0;
    local_37c = 0xffffffff00000080;
    local_374 = 0;
    local_368 = 0;
    local_360 = 0;
    FUN_147a4c716();
    if (local_33c < *(int *)(CONCAT44(uStack_344,local_348) + 0x18)) {
      do {
        uVar24 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(*local_358 + 8 + (longlong)local_33c * 0x18) + 0x68)
                  + 0x10);
        while (local_58 = uVar24, uVar24 != 0) {
          lVar5 = FUN_14043ab18();
          uVar8 = local_58;
          if ((*(int *)(*(longlong *)(uVar24 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar24 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_1434b1ab7;
          uVar24 = *(ulonglong *)(local_58 + 0x40);
        }
        uVar8 = 0;
LAB_1434b1ab7:
        uVar4 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        piVar6 = (int *)FUN_147a4c7c6(&local_3a8,uVar4 >> 0x10 ^ uVar4,&local_58);
        *piVar6 = *piVar6 + 1;
        local_340 = ~local_350._4_4_ & local_340;
        lVar5 = CONCAT44(uStack_344,local_348);
        lVar17 = *(longlong *)(lVar5 + 0x10);
        if (*(longlong *)(lVar5 + 0x10) == 0) {
          lVar17 = lVar5;
        }
        local_33c = *(int *)(lVar5 + 0x18);
        lVar22 = (longlong)(int)local_350;
        uVar4 = local_340 & *(uint *)(lVar17 + lVar22 * 4);
        if (uVar4 == 0) {
          iVar20 = local_33c + 0x1e;
          if (-1 < local_33c + -1) {
            iVar20 = local_33c + -1;
          }
          iVar27 = iVar20 >> 5;
          if (iVar20 >> 5 < (int)local_350) {
            iVar27 = (int)local_350;
          }
          iVar20 = (int)local_350 + 1;
          lVar25 = 0;
          do {
            local_350 = (longlong *)CONCAT44(local_350._4_4_,iVar20 + (int)lVar25);
            local_338 = local_338 + 0x20;
            if (iVar27 - lVar22 == lVar25) goto LAB_1434b1bb1;
            uVar4 = *(uint *)(lVar17 + lVar22 * 4 + 4 + lVar25 * 4);
            local_340 = 0xffffffff;
            lVar25 = lVar25 + 1;
          } while (uVar4 == 0);
        }
        local_350 = (longlong *)CONCAT44(-uVar4 & uVar4,(int)local_350);
        uVar24 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
        lVar17 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar20 = (local_338 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar20 < local_33c) {
          local_33c = iVar20;
        }
LAB_1434b1bb1:
      } while (local_33c < *(int *)(lVar5 + 0x18));
    }
    if (local_374 < (int)uStack_3a0) {
      FUN_147a4cd94(&local_3a8);
      plVar2 = local_3a8;
      uVar4 = (int)uStack_3a0 - local_374;
      if (1 < (int)uVar4) {
        memset(&local_348,0,0x2f0);
        local_358 = plVar2;
        local_350 = plVar2 + (ulonglong)uVar4 * 3 + -3;
        fVar29 = logf((float)(int)uVar4);
        local_348 = (int)(longlong)(fVar29 + fVar29);
        pplVar7 = &local_358;
        do {
          puVar10 = (ulonglong *)*pplVar7;
          puVar14 = (ulonglong *)pplVar7[1];
          iVar20 = *(int *)(pplVar7 + 2);
          iVar27 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar10) >> 3) * -0x55555555;
          uVar4 = iVar27 + 1;
          puVar13 = puVar10;
          puVar23 = puVar14;
          if (iVar20 != 0) {
LAB_1434b1c73:
            if (8 < (int)uVar4) {
              uVar18 = (ulonglong)(uVar4 >> 1);
              uVar24 = puVar10[uVar18 * 3 + 2];
              uVar8 = puVar10[uVar18 * 3];
              uVar1 = (puVar10 + uVar18 * 3)[1];
              puVar10[uVar18 * 3 + 2] = puVar10[2];
              uVar11 = puVar10[1];
              puVar10[uVar18 * 3] = *puVar10;
              (puVar10 + uVar18 * 3)[1] = uVar11;
              puVar10[2] = uVar24;
              *puVar10 = uVar8;
              puVar10[1] = uVar1;
              puVar19 = puVar14 + 3;
              puVar9 = puVar10;
              do {
                puVar3 = puVar9 + 3;
                puVar15 = puVar9 + 3;
                do {
                  puVar9 = puVar15;
                  puVar12 = puVar3;
                  if (puVar14 < puVar9) break;
                  puVar3 = puVar12 + 3;
                  puVar15 = puVar9 + 3;
                } while ((int)puVar9[1] <= (int)puVar10[1]);
                puVar3 = puVar19 + -6;
                do {
                  puVar15 = puVar19;
                  puVar26 = puVar3;
                  puVar19 = puVar15 + -3;
                  if (puVar19 <= puVar10) break;
                  puVar3 = puVar26 + -3;
                } while ((int)puVar10[1] <= (int)puVar15[-2]);
                if (puVar19 < puVar9) goto LAB_1434b1d5f;
                uVar24 = puVar9[2];
                uVar8 = *puVar9;
                uVar1 = puVar9[1];
                puVar9[2] = puVar15[-1];
                uVar11 = puVar15[-2];
                *puVar9 = *puVar19;
                puVar9[1] = uVar11;
                puVar15[-1] = uVar24;
                *puVar19 = uVar8;
                puVar15[-2] = uVar1;
              } while( true );
            }
            for (; puVar23 = puVar10, puVar13 = puVar10, puVar10 < puVar14; puVar14 = puVar14 + -3)
            {
              while (puVar19 = puVar23, puVar13 = puVar13 + 3, puVar13 <= puVar14) {
                puVar23 = puVar13;
                if ((int)puVar13[1] <= (int)puVar19[1]) {
                  puVar23 = puVar19;
                }
              }
              local_48 = puVar19[2];
              local_58 = *puVar19;
              uStack_50 = puVar19[1];
              uVar8 = local_58;
              uVar1 = uStack_50;
              puVar19[2] = puVar14[2];
              uVar24 = puVar14[1];
              *puVar19 = *puVar14;
              puVar19[1] = uVar24;
              puVar14[2] = local_48;
              local_58._4_4_ = (undefined4)(local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)(uStack_50 >> 0x20);
              *(undefined4 *)puVar14 = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar14 + 4) = local_58._4_4_;
              *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_50._4_4_;
              local_58 = uVar8;
              uStack_50 = uVar1;
            }
            goto LAB_1434b20f3;
          }
LAB_1434b1e2e:
          if (uVar4 != 0) {
            iVar20 = (iVar27 - (iVar27 + -1 >> 0x1f)) + -1 >> 1;
            iVar27 = iVar20;
joined_r0x0001434b1e51:
            do {
              iVar16 = iVar20 * 2 + 1;
              if (iVar16 < (int)uVar4) {
                iVar21 = iVar20 * 2 + 2;
                if ((iVar21 < (int)uVar4) &&
                   ((int)puVar10[(longlong)iVar16 * 3 + 1] <= (int)puVar10[(longlong)iVar21 * 3 + 1]
                   )) {
                  iVar16 = iVar21;
                }
                if ((int)puVar10[(longlong)iVar20 * 3 + 1] < (int)puVar10[(longlong)iVar16 * 3 + 1])
                {
                  puVar14 = puVar10 + (longlong)iVar20 * 3;
                  puVar13 = puVar10 + (longlong)iVar16 * 3;
                  local_48 = puVar14[2];
                  local_58 = *puVar14;
                  uStack_50 = puVar14[1];
                  uVar8 = local_58;
                  uVar1 = uStack_50;
                  puVar14[2] = puVar13[2];
                  uVar24 = puVar13[1];
                  *puVar14 = *puVar13;
                  puVar14[1] = uVar24;
                  puVar13[2] = local_48;
                  local_58._4_4_ = (undefined4)(local_58 >> 0x20);
                  uStack_50._4_4_ = (undefined4)(uStack_50 >> 0x20);
                  *(undefined4 *)puVar13 = (undefined4)local_58;
                  *(undefined4 *)((longlong)puVar13 + 4) = local_58._4_4_;
                  *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_50;
                  *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_50._4_4_;
                  iVar20 = iVar16;
                  local_58 = uVar8;
                  uStack_50 = uVar1;
                  goto joined_r0x0001434b1e51;
                }
              }
              bVar28 = iVar27 != 0;
              iVar20 = iVar27 + -1;
              iVar27 = iVar20;
            } while (bVar28);
            if (1 < (int)uVar4) {
              uVar11 = (ulonglong)uVar4 - 1;
              local_48 = puVar10[2];
              local_58 = *puVar10;
              uStack_50 = puVar10[1];
              uVar8 = local_58;
              uVar1 = uStack_50;
              puVar10[2] = puVar10[uVar11 * 3 + 2];
              uVar24 = (puVar10 + uVar11 * 3)[1];
              *puVar10 = puVar10[uVar11 * 3];
              puVar10[1] = uVar24;
              puVar10[uVar11 * 3 + 2] = local_48;
              local_58._4_4_ = (undefined4)(local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)(uStack_50 >> 0x20);
              puVar14 = puVar10 + uVar11 * 3;
              *(undefined4 *)puVar14 = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar14 + 4) = local_58._4_4_;
              *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_50._4_4_;
              local_58 = uVar8;
              uStack_50 = uVar1;
              if (uVar4 != 2) {
                do {
                  iVar20 = 0;
                  iVar16 = 1;
                  iVar27 = 0;
                  do {
                    iVar20 = iVar20 + 2;
                    iVar21 = iVar16;
                    if (((longlong)iVar20 < (longlong)uVar11) &&
                       ((int)puVar10[(longlong)iVar16 * 3 + 1] <=
                        (int)puVar10[(longlong)iVar20 * 3 + 1])) {
                      iVar21 = iVar20;
                    }
                    if ((int)puVar10[(longlong)iVar21 * 3 + 1] <=
                        (int)puVar10[(longlong)iVar27 * 3 + 1]) break;
                    puVar14 = puVar10 + (longlong)iVar27 * 3;
                    puVar13 = puVar10 + (longlong)iVar21 * 3;
                    uVar24 = puVar14[2];
                    uVar8 = *puVar14;
                    uVar1 = puVar14[1];
                    puVar14[2] = puVar13[2];
                    uVar18 = puVar13[1];
                    *puVar14 = *puVar13;
                    puVar14[1] = uVar18;
                    puVar13[2] = uVar24;
                    *puVar13 = uVar8;
                    puVar13[1] = uVar1;
                    iVar20 = iVar21 * 2;
                    iVar16 = iVar21 * 2 + 1;
                    iVar27 = iVar21;
                  } while ((longlong)iVar16 < (longlong)uVar11);
                  uVar24 = uVar11 - 1;
                  local_48 = puVar10[2];
                  local_58 = *puVar10;
                  uStack_50 = puVar10[1];
                  uVar1 = local_58;
                  uVar18 = uStack_50;
                  puVar10[2] = puVar10[uVar24 * 3 + 2];
                  uVar8 = (puVar10 + uVar24 * 3)[1];
                  *puVar10 = puVar10[uVar24 * 3];
                  puVar10[1] = uVar8;
                  puVar10[uVar24 * 3 + 2] = local_48;
                  local_58._4_4_ = (undefined4)(local_58 >> 0x20);
                  uStack_50._4_4_ = (undefined4)(uStack_50 >> 0x20);
                  puVar14 = puVar10 + uVar24 * 3;
                  *(undefined4 *)puVar14 = (undefined4)local_58;
                  *(undefined4 *)((longlong)puVar14 + 4) = local_58._4_4_;
                  *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_50;
                  *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_50._4_4_;
                  bVar28 = 2 < uVar11;
                  uVar11 = uVar24;
                  local_58 = uVar1;
                  uStack_50 = uVar18;
                } while (bVar28);
              }
            }
          }
LAB_1434b20f3:
          pplVar7 = pplVar7 + -3;
        } while (&local_358 <= pplVar7);
      }
    }
    FUN_147a4cbb8(&local_3a8);
    local_360 = 0;
    if (local_368 != 0) {
      FUN_1400020a8();
    }
    FUN_147a4cefa(&local_3a8);
  }
  if ((local_40 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1434b1d5f:
  local_48 = puVar10[2];
  local_58 = *puVar10;
  uStack_50 = puVar10[1];
  uVar8 = local_58;
  uVar1 = uStack_50;
  puVar10[2] = puVar15[-1];
  uVar24 = puVar15[-2];
  *puVar10 = *puVar19;
  puVar10[1] = uVar24;
  puVar15[-1] = local_48;
  local_58._4_4_ = (undefined4)(local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)(uStack_50 >> 0x20);
  *(undefined4 *)puVar19 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar15 + -0x14) = local_58._4_4_;
  *(undefined4 *)(puVar15 + -2) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar15 + -0xc) = uStack_50._4_4_;
  iVar20 = iVar20 + -1;
  puVar15 = puVar15 + -6;
  local_58 = uVar8;
  uStack_50 = uVar1;
  if ((longlong)puVar26 - (longlong)puVar13 < (longlong)puVar23 - (longlong)puVar12) {
    if (puVar9 < puVar14) {
      *pplVar7 = (longlong *)puVar9;
      pplVar7[1] = (longlong *)puVar14;
      *(int *)(pplVar7 + 2) = iVar20;
      pplVar7 = pplVar7 + 3;
    }
    puVar12 = puVar10;
    if (puVar19 <= puVar10 + 3) goto LAB_1434b20f3;
  }
  else {
    if (puVar10 + 3 < puVar19) {
      *pplVar7 = (longlong *)puVar10;
      pplVar7[1] = (longlong *)puVar15;
      *(int *)(pplVar7 + 2) = iVar20;
      pplVar7 = pplVar7 + 3;
    }
    puVar10 = puVar9;
    puVar15 = puVar14;
    puVar26 = puVar14;
    if (puVar14 <= puVar9) goto LAB_1434b20f3;
  }
  iVar27 = (int)((ulonglong)((longlong)puVar26 - (longlong)puVar12) >> 3) * -0x55555555;
  uVar4 = iVar27 + 1;
  puVar13 = puVar12;
  puVar14 = puVar15;
  puVar23 = puVar26;
  if (iVar20 == 0) goto LAB_1434b1e2e;
  goto LAB_1434b1c73;
}



// FUNCTION 1434b2131 FUN_1434b2131 body=69 status=ok
// SIG undefined FUN_1434b2131(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434b2131(void)

{
  _DAT_14cad5420 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434b2173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5428,1);
  return;
}



// FUNCTION 1434b2176 FUN_1434b2176 body=460 status=ok
// SIG undefined FUN_1434b2176(void)

void FUN_1434b2176(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  longlong lVar15;
  
  lVar15 = *(longlong *)(param_1 + 0x38);
  if ((lVar15 != 0) &&
     ((lVar10 = *(longlong *)(lVar15 + 0xf0), lVar10 != 0 ||
      ((0 < *(int *)(lVar15 + 0x100) && (lVar10 = **(longlong **)(lVar15 + 0xf8), lVar10 != 0))))))
  {
    plVar3 = *(longlong **)(*(longlong *)(lVar10 + 0x58) + 0x858);
    iVar2 = (int)plVar3[5];
    if (iVar2 == 0) {
      uVar8 = 1;
      uVar11 = 0;
      iVar12 = 0;
      iVar5 = 0;
    }
    else {
      puVar13 = (uint *)plVar3[4];
      if ((uint *)plVar3[4] == (uint *)0x0) {
        puVar13 = (uint *)(plVar3 + 2);
      }
      uVar9 = *puVar13;
      if (uVar9 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        uVar11 = 0;
        uVar8 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar8 = uVar11;
        }
        iVar12 = 0;
        do {
          if (uVar8 == uVar11) {
            return;
          }
          iVar12 = iVar12 + 0x20;
          uVar9 = puVar13[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar11 = 0;
        iVar12 = 0;
      }
      uVar8 = (ulonglong)(-uVar9 & uVar9);
      uVar1 = uVar8 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar5 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar5) {
        iVar5 = iVar2;
      }
    }
    if (iVar5 < iVar2) {
      iVar14 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar14 = iVar2 + -1;
      }
      iVar14 = iVar14 >> 5;
      uVar9 = 0xffffffff;
      do {
        puVar4 = *(undefined8 **)(*plVar3 + (longlong)iVar5 * 0x18);
        if (*(int *)(puVar4 + 7) != *(int *)((longlong)puVar4 + 100)) {
          FUN_140aeefbc(*puVar4,0,CONCAT71((int7)(uVar11 >> 8),1));
          return;
        }
        uVar9 = uVar9 & ~(uint)uVar8;
        puVar13 = (uint *)plVar3[4];
        if ((uint *)plVar3[4] == (uint *)0x0) {
          puVar13 = (uint *)(plVar3 + 2);
        }
        iVar5 = (int)uVar11;
        lVar15 = (longlong)iVar5;
        uVar6 = puVar13[lVar15] & uVar9;
        if (uVar6 == 0) {
          iVar7 = iVar14;
          if (iVar14 < iVar5) {
            iVar7 = iVar5;
          }
          if (iVar14 <= iVar5) {
            return;
          }
          lVar10 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar6 = puVar13[lVar15 + lVar10 + 1];
            if (uVar6 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar7 - lVar15 == lVar10) {
              return;
            }
          }
          uVar11 = (ulonglong)(iVar5 + (int)lVar10 + 1);
          uVar9 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar8 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar5 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      } while (iVar5 < iVar2);
    }
  }
  return;
}



// FUNCTION 1434b2342 FUN_1434b2342 body=69 status=ok
// SIG undefined FUN_1434b2342(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434b2342(void)

{
  _DAT_14cad5430 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434b2384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5438,1);
  return;
}



// FUNCTION 1434b2387 FUN_1434b2387 body=55 status=ok
// SIG undefined FUN_1434b2387(void)

void FUN_1434b2387(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad5468 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad5468 = FUN_14171c317(FUN_1463c2155,uVar1,L"FDataDrivenCVarType");
  }
  return;
}



// FUNCTION 1434b23be FUN_1434b23be body=69 status=ok
// SIG undefined FUN_1434b23be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434b23be(void)

{
  _DAT_14cad54a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434b2400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad54b0,1);
  return;
}



// FUNCTION 1434b2403 FUN_1434b2403 body=69 status=ok
// SIG undefined FUN_1434b2403(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434b2403(void)

{
  _DAT_14cad54c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434b2445. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad54c8,1);
  return;
}



// FUNCTION 1434b2448 FUN_1434b2448 body=69 status=ok
// SIG undefined FUN_1434b2448(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434b2448(void)

{
  _DAT_14cad54d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434b248a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad54e0,1);
  return;
}



// FUNCTION 1434b248d FUN_1434b248d body=69 status=ok
// SIG undefined FUN_1434b248d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434b248d(void)

{
  _DAT_14cad54f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434b24cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad54f8,1);
  return;
}



// FUNCTION 1434b24d2 FUN_1434b24d2 body=69 status=ok
// SIG undefined FUN_1434b24d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1434b24d2(void)

{
  _DAT_14cad5500 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001434b2514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cad5508,1);
  return;
}


