// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143543eba FUN_143543eba body=118 status=ok
// SIG undefined FUN_143543eba(void)

undefined8 * FUN_143543eba(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
  }
  return param_1;
}



// FUNCTION 143543f30 FUN_143543f30 body=198 status=ok
// SIG undefined FUN_143543f30(void)

void FUN_143543f30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  
  lVar6 = DAT_14cae4ff0;
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar9 = 0;
  }
  else if (iVar4 == 1) {
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    uVar9 = (ulonglong)(DVar7 != DVar8);
  }
  else {
    uVar9 = 1;
  }
  fVar3 = *(float *)(lVar6 + uVar9 * 4);
  if ((fVar3 != 0.0) || (NAN(fVar3))) {
    FUN_14000f986();
  }
  (**(code **)(**(longlong **)(param_1 + 0x270) + 0x30))
            (*(longlong **)(param_1 + 0x270),param_1 + 0xb0);
  plVar5 = *(longlong **)(param_1 + 0x278);
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
  FUN_144ae33c0(param_1 + 0xb0);
  return;
}



// FUNCTION 143543ff6 FUN_143543ff6 body=110 status=ok
// SIG undefined FUN_143543ff6(void)

undefined8 * FUN_143543ff6(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14354409c FUN_14354409c body=29 status=ok
// SIG undefined FUN_14354409c(void)

void FUN_14354409c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1435440ba FUN_1435440ba body=104 status=ok
// SIG undefined FUN_1435440ba(void)

undefined8 * FUN_1435440ba(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a975450;
  plVar3 = (longlong *)param_1[0x3f];
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
  FUN_144ae33c0(param_1 + 6);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143544122 FUN_143544122 body=282 status=ok
// SIG undefined FUN_143544122(void)

undefined8 * FUN_143544122(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143541375);
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



// FUNCTION 14354423c FUN_14354423c body=178 status=ok
// SIG undefined FUN_14354423c(void)

void FUN_14354423c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (param_1[0x16] == 0) {
    (**(code **)(*(longlong *)param_1[0x52] + 0x30))((longlong *)param_1[0x52],param_1 + 0x1a);
  }
  else {
    FUN_143543b08(param_1[0x16],param_1 + 0x1a,param_1 + 0x17);
  }
  plVar3 = (longlong *)param_1[0x53];
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
  FUN_144ae33c0(param_1 + 0x1a);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001435442e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1435442ee FUN_1435442ee body=945 status=ok
// SIG undefined FUN_1435442ee(void)

void FUN_1435442ee(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_248 [47];
  undefined1 local_219;
  LARGE_INTEGER local_218;
  undefined8 uStack_210;
  uint local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_58;
  longlong *plStack_50;
  undefined4 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar4 = *param_1;
  if (lVar4 == 0) goto LAB_14354435b;
  if (DAT_14c87e718 == '\0') {
    iVar3 = *(int *)(lVar4 + 0x1c);
    if ((2 < iVar3) && (bVar7 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar7 < 3)) {
      local_218.QuadPart = 0x20100000001;
      uStack_210 = 0x30100000101;
      local_208 = DAT_14c7585c8;
      local_204 = DAT_14c7585c8 | 0x200;
      local_200 = DAT_14c7585c8 | 0x100;
      local_1fc = DAT_14c7585c8 | 0x300;
      local_1f8 = 0;
      uStack_1f4 = 0x200;
      uStack_1f0 = 0x100;
      uStack_1ec = 0x300;
      if (*(byte *)((longlong)&local_218 + (ulonglong)(iVar3 - 3) * 4) == bVar7) goto LAB_143544693;
    }
    QueryPerformanceCounter(&local_218);
    uStack_210 = 0xffffffffffffffff;
    FUN_140056092(lVar4,&local_218);
  }
  else {
LAB_143544693:
    FUN_140082318(lVar4);
  }
LAB_14354435b:
  *(int *)(param_1 + 2) = (int)param_3[1];
  param_1[1] = *param_3;
  FUN_144b24618(&local_218,param_2);
  local_58 = *(undefined8 *)(param_2 + 0x1c0);
  plStack_50 = *(longlong **)(param_2 + 0x1c8);
  *(undefined8 *)(param_2 + 0x1c0) = 0;
  *(undefined8 *)(param_2 + 0x1c8) = 0;
  local_48 = *(undefined4 *)(param_2 + 0x1d0);
  puVar8 = (undefined8 *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,0x290,0x10);
  *puVar8 = UE::Tasks::Private::FTaskBase::vftable;
  puVar8[1] = &DAT_100000002;
  puVar8[2] = 0;
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  puVar8[6] = 0;
  puVar8[7] = 0x100000000;
  *(undefined1 *)(puVar8 + 8) = 1;
  puVar8[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0xe800000000000020;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0x100000000;
  *(undefined2 *)(puVar8 + 0x14) = 0;
  LOCK();
  bVar10 = *(char *)(puVar8 + 8) == '\x01';
  if (bVar10) {
    *(char *)(puVar8 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar10) {
    FUN_14008cdb0(puVar8 + 8);
  }
  *puVar8 = &PTR_FUN_14a975490;
  if (*(code **)(puVar8[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar8[0xe] + 0x18))(puVar8 + 0xe,puVar8 + 9);
  }
  puVar8[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar8[9] = puVar8;
  puVar8[10] = puVar8;
  lVar4 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar4 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar4 + 0x30);
  }
  puVar8[0xf] = uVar9;
  puVar8[0x10] = 0xc8000052a5d4be00;
  *(undefined4 *)((longlong)puVar8 + 0x1c) = 0;
  FUN_144b24618(puVar8 + 0x16,&local_218);
  puVar8[0x4e] = local_58;
  puVar8[0x4f] = plStack_50;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  *(undefined4 *)(puVar8 + 0x50) = local_48;
  *puVar8 = &PTR_FUN_14a975480;
  local_219 = 1;
  FUN_1447439e4(puVar8);
  puVar5 = (undefined8 *)*param_1;
  *param_1 = (longlong)puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar5 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  plVar6 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_144ae33c0(&local_218);
  if ((local_30 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435446a0 FUN_1435446a0 body=118 status=ok
// SIG undefined FUN_1435446a0(void)

undefined8 * FUN_1435446a0(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
  }
  return param_1;
}



// FUNCTION 143544716 FUN_143544716 body=198 status=ok
// SIG undefined FUN_143544716(void)

void FUN_143544716(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  
  lVar6 = DAT_14cae4ff0;
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar9 = 0;
  }
  else if (iVar4 == 1) {
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    uVar9 = (ulonglong)(DVar7 != DVar8);
  }
  else {
    uVar9 = 1;
  }
  fVar3 = *(float *)(lVar6 + uVar9 * 4);
  if ((fVar3 != 0.0) || (NAN(fVar3))) {
    FUN_14000f986();
  }
  (**(code **)(**(longlong **)(param_1 + 0x270) + 0x28))
            (*(longlong **)(param_1 + 0x270),param_1 + 0xb0);
  plVar5 = *(longlong **)(param_1 + 0x278);
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
  FUN_144ae33c0(param_1 + 0xb0);
  return;
}



// FUNCTION 1435447dc FUN_1435447dc body=110 status=ok
// SIG undefined FUN_1435447dc(void)

undefined8 * FUN_1435447dc(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143544882 FUN_143544882 body=29 status=ok
// SIG undefined FUN_143544882(void)

void FUN_143544882(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1435448a0 FUN_1435448a0 body=104 status=ok
// SIG undefined FUN_1435448a0(void)

undefined8 * FUN_1435448a0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a9754a0;
  plVar3 = (longlong *)param_1[0x3f];
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
  FUN_144ae33c0(param_1 + 6);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143544908 FUN_143544908 body=282 status=ok
// SIG undefined FUN_143544908(void)

undefined8 * FUN_143544908(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143541375);
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



// FUNCTION 143544a22 FUN_143544a22 body=178 status=ok
// SIG undefined FUN_143544a22(void)

void FUN_143544a22(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (param_1[0x16] == 0) {
    (**(code **)(*(longlong *)param_1[0x52] + 0x28))((longlong *)param_1[0x52],param_1 + 0x1a);
  }
  else {
    FUN_1435442ee(param_1[0x16],param_1 + 0x1a,param_1 + 0x17);
  }
  plVar3 = (longlong *)param_1[0x53];
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
  FUN_144ae33c0(param_1 + 0x1a);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143544ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143544ad4 FUN_143544ad4 body=58 status=ok
// SIG undefined FUN_143544ad4(void)

void FUN_143544ad4(longlong *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x000143544b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 143544b18 FUN_143544b18 body=12 status=ok
// SIG undefined FUN_143544b18(void)

void FUN_143544b18(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143544b21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143544b24 FUN_143544b24 body=62 status=ok
// SIG undefined FUN_143544b24(void)

undefined8 * FUN_143544b24(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_14a975550;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143544b62 FUN_143544b62 body=282 status=ok
// SIG undefined FUN_143544b62(void)

undefined8 * FUN_143544b62(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143541375);
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



// FUNCTION 143544c7c FUN_143544c7c body=131 status=ok
// SIG undefined FUN_143544c7c(void)

void FUN_143544c7c(undefined8 *param_1)

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
    param_1[0x15] = 0;
    (**(code **)*puVar2)(puVar2,1);
    puVar2 = (undefined8 *)param_1[0x15];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143544cf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143544cff FUN_143544cff body=33 status=ok
// SIG undefined FUN_143544cff(void)

void FUN_143544cff(undefined8 *param_1,int param_2)

{
  do {
    *param_1 = 0x7f7fffff7f7fffff;
    param_1[1] = 0xff7fffff7f7fffff;
    param_1[2] = &DAT_ff7fffffff7fffff;
    param_1 = param_1 + 3;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 143544d20 FUN_143544d20 body=3747 status=ok
// SIG undefined FUN_143544d20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143544d20(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined **ppuStack_c0;
  code *pcStack_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  code *local_90;
  undefined8 local_88;
  undefined **local_78;
  code *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  ppuStack_c0 = (undefined **)0x0;
  pcStack_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a920e10,1,&PTR_FUN_14a920de0);
  ppuStack_c0 = (undefined **)0x0;
  pcStack_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a921390,1,&PTR_FUN_14a921360);
  ppuStack_c0 = (undefined **)0x0;
  pcStack_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a921930,1,&PTR_FUN_14a921900);
  ppuStack_c0 = (undefined **)0x0;
  pcStack_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a921e90,1,&PTR_FUN_14a921e60);
  DAT_14cae49a0 = 0;
  DAT_14cae49a8 = 0;
  DAT_14cae4980 = 0;
  _DAT_14cae4988 = 0;
  _DAT_14cae49ac = 0xffffffff00000080;
  _DAT_14cae49b4 = 0;
  DAT_14cae49c0 = 0;
  DAT_14cae49c8 = 0;
  atexit(FUN_143533044);
  pcStack_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x0;
  ppuStack_c0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a923b90,1,0);
  ppuStack_c0 = (undefined **)0x0;
  pcStack_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a924160,1,&PTR_FUN_14a924130);
  ppuStack_c0 = (undefined **)0x0;
  pcStack_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9246f0,1,&PTR_FUN_14a9246c0);
  pcStack_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x0;
  ppuStack_c0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a924a80,1,0);
  FUN_1400b22c2(&local_98,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_98,&DAT_14cae4b18);
  if (cVar2 == '\0') {
    _DAT_14cae4b18 = 0;
    uRam000000014cae4b20 = 0;
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_98 = (code *)0x14a1e3c88;
  local_90 = (code *)CONCAT35(local_90._5_3_,10);
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cae4b28 = (ulonglong)uVar3;
  DAT_14cae70b8 = 1;
  DAT_14cae70c0._0_2_ = 0;
  DAT_14cae70c0._2_1_ = DAT_14cae70c0._2_1_ & 0xfe;
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_143540d12;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cae4b98,6,&local_98);
  local_90 = FUN_145e362c0;
  local_98 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14cae4c28,&local_98);
  local_90 = FUN_1405ed348;
  local_98 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14cae4cc0,&local_98);
  local_98 = (code *)0x0;
  local_90 = (code *)((ulonglong)local_90 & 0xffffffff00000000);
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
  *(longlong *)((longlong)local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_14a975070;
  local_9c = 1;
  local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,0x20);
  FUN_14078dbce(&DAT_14cae4cd0,L"r.InstancedStaticMeshes.GpuLod",&local_9c,
                L"Whether to enable GPU LOD selection on InstancedStaticMesh.");
  (**(code **)(*DAT_14cae4cd8 + 200))(DAT_14cae4cd8,&local_98);
  if ((int)local_90 != 0) {
    if (local_98 == (code *)0x0) goto LAB_1435450be;
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1435450be:
  atexit(FUN_1435332e8);
  local_98 = (code *)((ulonglong)local_98 & 0xffffffff00000000);
  local_c8 = (undefined1 *)((ulonglong)local_c8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cae4ce8,L"r.InstancedStaticMeshes.AllowCreateEmpty",&local_98,
                L"Whether to allow creation of empty ISMS.");
  atexit(FUN_14353332d);
  local_98._0_4_ = 0xffffffff;
  local_c8._0_4_ = 0x40;
  FUN_14078dbce(&DAT_14cae70a0,L"foliage.MinLOD",&local_98,
                L"Used to discard the top LODs for performance evaluation. -1: Disable all effects of this cvar."
               );
  atexit(FUN_143533372);
  local_98._0_4_ = 0;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae4d00,L"foliage.CullAllInVertexShader",&local_98,
                L"Debugging, if this is greater than 0, cull all instances in the vertex shader.");
  atexit(FUN_1435333b7);
  local_98._0_4_ = 1;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae4d18,L"r.RayTracing.Geometry.InstancedStaticMeshes",&local_98,
                L"Include static mesh instances in ray tracing effects (default = 1 (Instances enabled in ray tracing))"
               );
  atexit(FUN_1435333fc);
  local_98._0_4_ = 0;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae4d30,L"r.RayTracing.Geometry.InstancedStaticMeshes.MinLOD",&local_98,
                L"Clamps minimum LOD to this value (default = 0, highest resolution LOD may be used)"
               );
  atexit(FUN_143533441);
  local_98._0_4_ = 1;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae4d48,L"r.RayTracing.Geometry.InstancedStaticMeshes.Culling",&local_98,
                L"Enable culling for instances in ray tracing (default = 1 (Culling enabled))");
  atexit(FUN_143533486);
  local_98._0_4_ = 0x41a00000;
  local_c8._0_4_ = 0;
  FUN_140a6b41e(&DAT_14cae4d60,
                L"r.RayTracing.Geometry.InstancedStaticMeshes.CullClusterMaxRadiusMultiplier",
                &local_98,L"Multiplier for the maximum instance size (default = 20)");
  atexit(FUN_1435334cb);
  local_98._0_4_ = 0x461c4000;
  local_c8._0_4_ = 0;
  FUN_140a6b41e(&DAT_14cae4d78,L"r.RayTracing.Geometry.InstancedStaticMeshes.CullClusterRadius",
                &local_98,
                L"Ignore instances outside of this radius in ray tracing effects (default = 10000 (100m))"
               );
  atexit(FUN_143533510);
  local_98._0_4_ = 0x42480000;
  local_c8._0_4_ = 0;
  FUN_140a6b41e(&DAT_14cae4d90,
                L"r.RayTracing.Geometry.InstancedStaticMeshes.LowScaleRadiusThreshold",&local_98,
                L"Threshold that classifies instances as small (default = 50cm))");
  atexit(FUN_143533555);
  local_98._0_4_ = 0x447a0000;
  local_c8._0_4_ = 0;
  FUN_140a6b41e(&DAT_14cae4da8,L"r.RayTracing.Geometry.InstancedStaticMeshes.LowScaleCullRadius",
                &local_98,L"Cull radius for small instances (default = 1000 (10m))");
  atexit(FUN_14353359a);
  local_98._0_4_ = 0x40000000;
  local_c8._0_4_ = 0;
  FUN_140a6b41e(&DAT_14cae4dc0,L"r.RayTracing.Geometry.InstancedStaticMeshes.CullAngle",&local_98,
                L"Solid angle to test instance bounds against for culling (default 2 degrees)\n  -1 => use distance based culling"
               );
  atexit(FUN_1435335df);
  local_98._0_4_ = 0;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae4dd8,L"r.RayTracing.Geometry.InstancedStaticMeshes.EvaluateWPO",&local_98,
                L"Whether to evaluate WPO on instanced static meshes\n  0 - off (default)  1 - on for all with WPO -1 - on only for meshes with evaluate WPO enabled"
               );
  atexit(FUN_143533624);
  local_98._0_4_ = 0x43fa0000;
  local_c8._0_4_ = 0;
  FUN_140a6b41e(&DAT_14cae4df0,
                L"r.RayTracing.Geometry.InstancedStaticMeshes.SimulationClusterRadius",&local_98,
                L"Bucket instances based on distance to camera for simulating WPO (default = 500 (5m), disable if <= 0)"
               );
  atexit(FUN_143533669);
  local_98._0_4_ = 1;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae4e08,L"r.RayTracing.Geometry.InstancedStaticMeshes.SimulationCount",
                &local_98,
                L"Maximum number of instances to simulate per instanced static mesh, presently capped to 256"
               );
  atexit(FUN_1435336ae);
  local_98._0_4_ = 0;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae4e20,L"r.InstancedStaticMeshes.ForceRemoveAtSwap",&local_98,
                L"Force the RemoveAtSwap optimization when removing instances from an ISM.");
  atexit(FUN_1435336f3);
  local_98._0_4_ = 1;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae4e38,L"r.InstancedStaticMeshes.FetchInstanceCountFromScene",&local_98,
                L"Enables the data path that allows instance count to be fetched from the Scene rather than the Mesh Draw Commands (MDCs), which removes the need to re-cache MDCs when instance count changes."
               );
  atexit(FUN_143533738);
  local_c8 = (undefined1 *)((ulonglong)local_c8._4_4_ << 0x20);
  FUN_141471170(&DAT_14cae4e50,L"r.InstancedStaticMeshes.ConservativeBounds.Threshold",
                &DAT_14c76158c,
                L"Number of instances in an ISM before we start using conservative bounds. Set to -1 to disable conservative bounds."
               );
  atexit(FUN_14353377d);
  FUN_14118b488(&DAT_14cae4e60);
  _DAT_14cae4e60 = &PTR_FUN_14a973290;
  atexit((_func_5014 *)&LAB_1435337c2);
  _DAT_14cae4e70 = 0xffffffff;
  _DAT_14cae4e74 = 0x105;
  DAT_14cae4e76 = 0;
  _DAT_14cae4e78 = 0;
  DAT_14cae4e80 = 0;
  _DAT_14cae4e88 = 0;
  DAT_14cae4e68 = &PTR_FUN_14a9750e0;
  FUN_1463df59c();
  atexit(FUN_1435337ce);
  FUN_14574848a();
  DAT_14cae4e90 = &PTR_FUN_14a975140;
  FUN_145d29516();
  atexit(FUN_1435337fd);
  DAT_14cae4f38 = 0;
  _DAT_14cae4f40 = 0;
  _DAT_14cae4f48 = 2;
  atexit(FUN_14353382c);
  DAT_14cae4f50 = 0;
  _DAT_14cae4f58 = 0;
  _DAT_14cae4f60 = 2;
  atexit(FUN_14353385d);
  local_a8 = &LAB_1435341a6;
  local_b0 = &LAB_1408e123c;
  pcStack_b8 = FUN_1435344b0;
  ppuStack_c0 = (undefined **)FUN_143534e30;
  local_c8 = &LAB_143534e59;
  FUN_141585c60(&DAT_14cae4f68,L"FInstancedStaticMeshVertexFactory",
                L"/Engine/Private/LocalVertexFactory.ush",0x4f6de);
  atexit((_func_5014 *)&LAB_143534e94);
  local_98._0_4_ = 0;
  local_c8._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cae4fe0,L"r.InstanceUpdateTaskDebugDelay",&local_98,
                L"Instance update debug delay in seconds.");
  atexit(FUN_14353c7ac);
  local_98._0_4_ = 1;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae4ff8,L"r.InstanceData.ResetTrackingOnRegister",&local_98,
                L"Chicken switch to disable the new code to reset tracking & instance count during OnRegister, if this causes problems.\nTODO: Remove."
               );
  atexit(FUN_14353c7f1);
  local_98._0_4_ = 2;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae5010,L"r.InstanceData.MinInstanceCountToOptimize",&local_98,
                L"Minimum number of instances to perform optimized build for (if enabled), can be used to disable optimized build for small ISMs as there is some overhead from doing so."
               );
  atexit(FUN_14353c836);
  local_98 = (code *)((ulonglong)local_98._4_4_ << 0x20);
  local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,0x20);
  FUN_14078dbce(&DAT_14cae5028,L"r.InstanceDataManager.GbxAllowMaxDisplacementUpdates",&local_98,
                L"0: Do not allow MaxWorldPositionOffsetDisplacement usage to trigger updates to foliage instance scene data buffers \n1: Stock behavior"
               );
  atexit(FUN_14353c87b);
  pcStack_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x0;
  ppuStack_c0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9277f0,1,0);
  pcStack_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x0;
  ppuStack_c0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a927fb0,1,0);
  local_98 = (code *)0x149fca2ba;
  local_90._0_5_ = 0xd;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cae5090 = (ulonglong)uVar3;
  pcStack_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x0;
  ppuStack_c0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a928340,1,0);
  ppuStack_c0 = (undefined **)0x0;
  pcStack_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x2;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a928d60,1,&PTR_FUN_14a928d10);
  pcStack_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x0;
  ppuStack_c0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a929380,1,0);
  local_c8 = (undefined1 *)((ulonglong)local_c8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cae5110,L"r.gbx.ISM.ConvertPrimitiveCPD",&DAT_14c761590,
                L"If true, per-primitive CPD on an ISMC is automatically converted to instanced CPD when added to the batcher."
               );
  atexit(FUN_14353f301);
  ppuStack_c0 = (undefined **)0x0;
  pcStack_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x4;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a9298a0);
  ppuStack_c0 = (undefined **)0x0;
  pcStack_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x3;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a92adf0);
  pcStack_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x0;
  ppuStack_c0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a92b670,1,0);
  pcStack_b8 = (code *)0x0;
  local_c8 = (undefined1 *)0x0;
  ppuStack_c0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a92bdb0,1,0);
  pcStack_b8 = (code *)0x1;
  ppuStack_c0 = &PTR_FUN_14a92f110;
  local_c8 = (undefined1 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a92f130,1,0);
  local_98 = (code *)0x14a92f158;
  local_90._0_5_ = 0x15;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cae5328 = (ulonglong)uVar3;
  local_98 = (code *)0x14a92f16e;
  local_90._0_5_ = 0x15;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cae5330 = (ulonglong)uVar3;
  local_98 = (code *)0x14a92f184;
  local_90._0_5_ = 0x18;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cae5338 = (ulonglong)uVar3;
  local_98 = (code *)0x14a92f19d;
  local_90._0_5_ = 0x18;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cae5340 = (ulonglong)uVar3;
  local_98 = (code *)0x14a92f1b6;
  local_90._0_5_ = 0x1a;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cae5348 = (ulonglong)uVar3;
  local_98 = (code *)0x14a92f1d1;
  local_90._0_5_ = 0x1a;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cae5350 = (ulonglong)uVar3;
  local_98 = (code *)0x14a92f1ec;
  local_90._0_5_ = 0x1f;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cae5358 = (ulonglong)uVar3;
  local_98 = (code *)0x14a92f20c;
  local_90._0_5_ = 0x22;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cae7098 = (ulonglong)uVar3;
  pcStack_b8 = (code *)0x0;
  ppuStack_c0 = (undefined **)0x0;
  local_c8 = (undefined1 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a930650,1,0);
  pcStack_b8 = (code *)0x1;
  ppuStack_c0 = &PTR_FUN_14a9345e0;
  local_c8 = (undefined1 *)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a934630,1,&PTR_FUN_14a934600);
  pcStack_b8 = (code *)0x0;
  ppuStack_c0 = (undefined **)0x0;
  local_c8 = (undefined1 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a935d00,1,0);
  pcStack_b8 = (code *)0x1;
  ppuStack_c0 = &PTR_FUN_14a936ad0;
  local_c8 = (undefined1 *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a936af0,1,0);
  pcStack_b8 = (code *)0x3;
  ppuStack_c0 = &PTR_FUN_14a971960;
  local_c8 = (undefined1 *)0x3;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a971a40,1,&PTR_FUN_14a9719c0);
  local_98 = (code *)0x14a971a68;
  local_90._0_5_ = 0x13;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cae6e38 = (ulonglong)uVar3;
  local_98 = (code *)0x14a971a7c;
  local_90._0_5_ = 0x13;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cae6e40 = (ulonglong)uVar3;
  local_98 = (code *)0x14a971a90;
  local_90._0_5_ = 0x1b;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cae6e48 = (ulonglong)uVar3;
  local_98 = (code *)0x14a971aac;
  local_90._0_5_ = 0x12;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cae6e50 = (ulonglong)uVar3;
  local_98 = (code *)0x14a971abf;
  local_90 = (code *)CONCAT35(local_90._5_3_,0x26);
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cae6e58 = (ulonglong)uVar3;
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143545bc4 FUN_143545bc4 body=3243 status=ok
// SIG undefined FUN_143545bc4(void)

void FUN_143545bc4(longlong param_1,longlong param_2,longlong *param_3,double *param_4,
                  longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  DWORD DVar16;
  DWORD DVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 uVar21;
  undefined4 *puVar22;
  uint *puVar23;
  undefined ***pppuVar24;
  uint *puVar25;
  undefined1 *puVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  undefined1 auStack_1b8 [32];
  char **local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  longlong *local_178;
  longlong *local_170 [2];
  undefined1 local_160 [16];
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  longlong *local_148 [2];
  undefined8 local_138;
  longlong *local_130;
  longlong local_128 [3];
  longlong *local_110 [2];
  longlong *local_100 [2];
  ulonglong local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  wchar_t **local_b8;
  char **local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  wchar_t *local_98;
  undefined4 local_90;
  longlong *local_88 [2];
  char *local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  *param_3 = 0;
  *param_4 = 0.0;
  param_4[1] = 0.0;
  *param_5 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar8 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_14354626b;
    bVar8 = DAT_14c8442b8 & 1;
  }
  if (bVar8 != 0) goto LAB_14354626b;
  lVar18 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar18 == 0) {
    local_78 = "Blueprint";
    local_70 = 9;
    local_6c = 0;
    uVar14 = FUN_14001a6c0(&local_78,1);
    local_b8 = (wchar_t **)(ulonglong)uVar14;
    FUN_14276766e(&local_78);
    local_98 = L"BeginDrawCanvasToRenderTarget_InvalidWorldContextObject";
    local_90 = 0x37;
    FUN_1446e940c(&local_c8,&local_98);
    local_98 = L"KismetRenderingLibrary";
    local_90 = 0x16;
    FUN_1446e940c(local_100,&local_98);
    local_98 = L"BeginDrawCanvasToRenderTarget: WorldContextObject is not valid.";
    local_90 = 0x3f;
    FUN_140208c1e(&local_a8,local_100,&local_c8,&local_98);
    FUN_1427679d4(&local_78,local_d8,&local_a8);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_d0 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_d0 + 0x10))(local_d0);
        }
      }
    }
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  else {
    if (param_2 == 0) {
      local_78 = "Blueprint";
      local_70 = 9;
      local_6c = 0;
      uVar14 = FUN_14001a6c0(&local_78,1);
      local_f0 = (ulonglong)uVar14;
      FUN_14276766e(&local_78);
      if (param_1 == 0) {
        FUN_140056680(local_128,&DAT_149e01fe8);
      }
      else {
        local_128[0] = 0;
        local_128[1] = 0;
        FUN_1401031ac(param_1,0);
      }
      FUN_140233b1a(local_110,local_128);
      local_98 = L"BeginDrawCanvasToRenderTarget_InvalidTextureRenderTarget";
      local_90 = 0x38;
      FUN_1446e940c(local_14c,&local_98);
      local_98 = L"KismetRenderingLibrary";
      local_90 = 0x16;
      FUN_1446e940c(local_150,&local_98);
      local_98 = L"BeginDrawCanvasToRenderTarget[{0}]: TextureRenderTarget must be non-null.";
      local_90 = 0x49;
      FUN_140208c1e(local_148,local_150,local_14c,&local_98);
      FUN_14023409e(&local_138,local_148,1);
      local_98 = (wchar_t *)CONCAT44(local_98._4_4_,4);
      FUN_14023423e(local_88,local_110);
      local_b0 = &local_78;
      local_b8 = &local_98;
      FUN_14010d304(&local_a8);
      local_c8 = local_138;
      local_c0 = local_130;
      if (local_130 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_130 + 1) = (int)local_130[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_100,&local_c8,&local_a8);
      FUN_14007f2db(local_a8,local_a0);
      if (local_a8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_88[0] != (longlong *)0x0) {
        (**(code **)(*local_88[0] + 0x10))();
      }
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_130 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar1 = (int *)((longlong)local_130 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_130 + 0x10))(local_130);
          }
        }
      }
      if (local_110[0] != (longlong *)0x0) {
        (**(code **)(*local_110[0] + 0x10))();
      }
      puVar26 = local_e8;
    }
    else {
      lVar19 = FUN_1447b4020(param_2);
      if (lVar19 != 0) {
        FUN_147b99afc(lVar18);
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_2);
        }
        *param_5 = param_2;
        lVar19 = FUN_147da9cf6(lVar18);
        *param_3 = lVar19;
        iVar15 = *(int *)(param_2 + 0x144);
        *param_4 = (double)*(int *)(param_2 + 0x140);
        param_4[1] = (double)iVar15;
        lVar20 = FUN_1447b4020(param_2);
        uVar21 = FUN_14001cc68(0x120,0x10);
        lVar19 = lVar20 + 0x50;
        if (lVar20 == 0) {
          lVar19 = 0;
        }
        local_198 = (char **)CONCAT44(local_198._4_4_,(uint)*(byte *)(lVar18 + 0x150));
        local_188 = 0x3f800000;
        local_190 = 1;
        FUN_1401fac16(uVar21,lVar19,0,lVar18);
        uVar9 = DAT_14c8463d8;
        lVar18 = *param_3;
        uVar5 = *(undefined4 *)(param_2 + 0x140);
        uVar6 = *(undefined4 *)(param_2 + 0x144);
        *(undefined8 *)(lVar18 + 0x370) = DAT_14c8463d0;
        *(undefined8 *)(lVar18 + 0x378) = uVar9;
        uVar12 = DAT_14c8463e8._4_4_;
        uVar11 = (undefined4)DAT_14c8463e8;
        uVar10 = DAT_14c8463e0._4_4_;
        *(undefined4 *)(lVar18 + 0x380) = (undefined4)DAT_14c8463e0;
        *(undefined4 *)(lVar18 + 900) = uVar10;
        *(undefined4 *)(lVar18 + 0x388) = uVar11;
        *(undefined4 *)(lVar18 + 0x38c) = uVar12;
        *(undefined4 *)(lVar18 + 0x40) = uVar5;
        *(undefined4 *)(lVar18 + 0x44) = uVar6;
        *(undefined4 *)(lVar18 + 0x88) = uVar5;
        *(undefined4 *)(lVar18 + 0x8c) = uVar6;
        *(undefined8 *)(lVar18 + 0x2e8) = 0;
        *(undefined8 *)(lVar18 + 0x2e0) = uVar21;
        FUN_14007fbbc();
        lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        iVar15 = *(int *)(lVar18 + 0xc60);
        if (DAT_14c86a9fc == 0) {
          if (iVar15 == 2) goto LAB_1435463a9;
          if (iVar15 != 1) goto LAB_1435463a4;
          DVar16 = FUN_140ad26c0();
          DVar17 = GetCurrentThreadId();
          if (DVar16 == DVar17) goto LAB_1435463a9;
        }
        else {
LAB_1435463a4:
          if (iVar15 == 0x10) goto LAB_1435463a9;
        }
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar15 = *(int *)(lVar18 + 0xc60), iVar15 == 2)) {
LAB_1435463a9:
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_1b8);
          }
          if (iVar15 == 1) {
            DVar16 = FUN_140ad26c0();
            DVar17 = GetCurrentThreadId();
            if (DVar16 == DVar17) goto LAB_1435463a9;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar3 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar23 = (uint *)*puVar3;
          if (puVar23 != (uint *)0x0) goto LAB_14354653c;
          while( true ) {
            uVar14 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar14 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar14 | 1;
              __tlregdtor(&LAB_1435546e9);
            }
            lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar22 = *(undefined4 **)(lVar18 + 0x310);
            *(undefined8 *)(lVar18 + 0x310) = 0;
            if (puVar22 == (undefined4 *)0x0) {
              puVar22 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar22 = 0xffffffff;
            *(undefined4 **)(puVar22 + 0x10) = puVar22 + 0x16;
            puVar22[0x12] = 0;
            *puVar3 = puVar22;
            FUN_140217a48(puVar3);
            puVar23 = (uint *)*puVar3;
LAB_14354653c:
            puVar28 = (undefined8 *)(*(longlong *)(puVar23 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar25 = (uint *)(puVar28 + 0x16);
            uVar14 = puVar23[0x12];
            if (puVar25 <= puVar23 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar23 + 0x10) = puVar23 + 0x4000;
              LOCK();
              uVar4 = *puVar23;
              *puVar23 = *puVar23 + uVar14 + 1;
              UNLOCK();
              if ((uVar4 ^ uVar14) != 0xffffffff) break;
              puVar23 = (uint *)*puVar3;
              *puVar23 = 0xffffffff;
              *(uint **)(puVar23 + 0x10) = puVar23 + 0x16;
              puVar23[0x12] = 0;
              *puVar3 = puVar23;
              puVar28 = (undefined8 *)((longlong)puVar23 + 0x5fU & 0xfffffffffffffff8);
              puVar25 = (uint *)(puVar28 + 0x16);
              uVar14 = 0;
              if (puVar25 <= puVar23 + 0x4000) {
                uVar14 = 1;
                goto LAB_1435465bc;
              }
            }
          }
          uVar14 = uVar14 + 1;
LAB_1435465bc:
          *(uint **)(puVar23 + 0x10) = puVar25;
          puVar23[0x12] = uVar14;
          iVar15 = 0;
          FUN_1447247dc(puVar28,0);
          *puVar28 = &PTR_FUN_14a9b1a30;
          puVar28[0x15] = lVar20;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar14 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
              uVar27 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
              iVar15 = 0;
            }
            else {
              uVar27 = 2;
            }
          }
          else {
            iVar15 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar27 = 5;
          }
          if (*(code **)(puVar28[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar28[0xe] + 0x18))(puVar28 + 0xe,puVar28 + 9);
          }
          puVar28[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar28[9] = puVar28;
          puVar28[10] = puVar28;
          lVar18 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar18 == 0) {
            uVar13 = 1;
            if ((char)uVar27 != '\x06') {
              uVar13 = uVar27;
            }
            uVar27 = uVar13;
            uVar21 = 0;
          }
          else {
            if ((char)uVar27 == '\x06') {
              uVar27 = *(ulonglong *)(lVar18 + 0x38) >> 0x3b;
            }
            uVar21 = *(undefined8 *)(lVar18 + 0x30);
          }
          puVar28[0xf] = uVar21;
          puVar28[0x10] = uVar27 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar28 + 0x1c) = iVar15;
          if (puVar28 == (undefined8 *)0x0) {
            local_78 = (char *)CONCAT71(local_78._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar28 + 1) = *(int *)(puVar28 + 1) + 1;
            UNLOCK();
            local_78 = (char *)CONCAT71(local_78._1_7_,1);
            FUN_1447439e4(puVar28);
            LOCK();
            piVar1 = (int *)(puVar28 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar28)(puVar28,1);
            }
          }
        }
        else {
          local_198 = &local_78;
          local_68 = (undefined ***)0x0;
          local_58 = &PTR_LAB_14a9b1a10;
          local_78 = &LAB_143554a62;
          local_50 = lVar20;
          FUN_14005a792(&DAT_14ca9a440,L"FlushDeferredResourceUpdateCommand",&DAT_14cae8cac);
          if (local_78 != (char *)0x0) {
            pppuVar24 = local_68;
            if (local_68 == (undefined ***)0x0) {
              pppuVar24 = &local_58;
            }
            (*(code *)(*pppuVar24)[2])();
          }
        }
        goto LAB_14354626b;
      }
      local_78 = "Blueprint";
      local_70 = 9;
      local_6c = 0;
      uVar14 = FUN_14001a6c0(&local_78,1);
      local_f0 = (ulonglong)uVar14;
      FUN_14276766e(&local_78);
      if (param_1 == 0) {
        FUN_140056680(local_128,&DAT_149e01fe8);
      }
      else {
        local_128[0] = 0;
        local_128[1] = 0;
        FUN_1401031ac(param_1,0);
      }
      FUN_140233b1a(local_170,local_128);
      local_98 = L"BeginDrawCanvasToRenderTarget_ReleasedTextureRenderTarget";
      local_90 = 0x39;
      FUN_1446e940c(local_14c,&local_98);
      local_98 = L"KismetRenderingLibrary";
      local_90 = 0x16;
      FUN_1446e940c(local_150,&local_98);
      local_98 = L"BeginDrawCanvasToRenderTarget[{0}]: render target has been released.";
      local_90 = 0x44;
      FUN_140208c1e(local_148,local_150,local_14c,&local_98);
      FUN_14023409e(&local_180,local_148,1);
      local_98 = (wchar_t *)CONCAT44(local_98._4_4_,4);
      FUN_14023423e(local_88,local_170);
      local_b0 = &local_78;
      local_b8 = &local_98;
      FUN_14010d304(&local_a8);
      local_c8 = local_180;
      local_c0 = local_178;
      if (local_178 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_178 + 1) = (int)local_178[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_100,&local_c8,&local_a8);
      FUN_14007f2db(local_a8,local_a0);
      if (local_a8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_88[0] != (longlong *)0x0) {
        (**(code **)(*local_88[0] + 0x10))();
      }
      if (local_178 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_178 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_178)(local_178);
          LOCK();
          piVar1 = (int *)((longlong)local_178 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_178 + 0x10))(local_178);
          }
        }
      }
      if (local_170[0] != (longlong *)0x0) {
        (**(code **)(*local_170[0] + 0x10))();
      }
      puVar26 = local_160;
    }
    FUN_1427679d4(&local_78,puVar26,local_100);
    plVar7 = *(longlong **)(puVar26 + 8);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (local_100[0] != (longlong *)0x0) {
      (**(code **)(*local_100[0] + 0x10))();
    }
    if (local_148[0] != (longlong *)0x0) {
      (**(code **)(*local_148[0] + 0x10))();
    }
    if (local_128[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1427678c0(&local_78);
LAB_14354626b:
  if ((local_38 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14354688c FUN_14354688c body=2152 status=ok
// SIG undefined FUN_14354688c(void)

void FUN_14354688c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined ***pppuVar17;
  uint *puVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  undefined1 auStack_f8 [32];
  code **local_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  longlong *local_b0 [2];
  ulonglong local_a0;
  undefined1 local_98 [16];
  wchar_t *local_88;
  undefined4 local_80;
  code *local_78;
  uint local_70;
  uint local_6c;
  undefined4 uStack_68;
  uint local_64;
  code *local_60;
  undefined **local_58;
  longlong lStack_50;
  undefined4 uStack_48;
  undefined8 local_44;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar5 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_143546a33;
    bVar5 = DAT_14c8442b8 & 1;
  }
  if (bVar5 != 0) goto LAB_143546a33;
  lVar11 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar11 == 0) {
    local_78 = (code *)0x14a3c27ce;
    local_70 = 9;
    local_6c = local_6c & 0xffffff00;
    uVar7 = FUN_14001a6c0(&local_78,1);
    local_a0 = (ulonglong)uVar7;
    FUN_14276766e(&local_78);
    local_88 = L"EndDrawCanvasToRenderTarget_InvalidWorldContextObject";
    local_80 = 0x35;
    FUN_1446e940c(local_b4,&local_88);
    local_88 = L"KismetRenderingLibrary";
    local_80 = 0x16;
    FUN_1446e940c(local_b8,&local_88);
    local_88 = L"EndDrawCanvasToRenderTarget: WorldContextObject is not valid.";
    local_80 = 0x3d;
    FUN_140208c1e(local_b0,local_b8,local_b4,&local_88);
    puVar19 = local_c8;
  }
  else {
    lVar11 = FUN_147da9cf6(lVar11);
    if (*(longlong *)(lVar11 + 0x2e0) != 0) {
      FUN_14376e4da(*(longlong *)(lVar11 + 0x2e0),0);
      lVar12 = *(longlong *)(lVar11 + 0x2e0);
      if (lVar12 != 0) {
        FUN_14010ad76(lVar12);
        FUN_1400020a8(lVar12);
      }
      *(undefined8 *)(lVar11 + 0x2e0) = 0;
    }
    if (*param_2 != 0) {
      lVar12 = FUN_1447b4020();
      lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar8 = *(int *)(lVar11 + 0xc60);
      if (DAT_14c86a9fc == 0) {
        if (iVar8 != 2) {
          if (iVar8 != 1) goto LAB_143546adf;
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143546ae8;
          goto LAB_143546c5b;
        }
LAB_143546ae8:
        puVar13 = (undefined8 *)(**(code **)(*(longlong *)(lVar12 + 0x50) + 0x10))(lVar12 + 0x50);
        lVar11 = (**(code **)(*(longlong *)*puVar13 + 8))();
        if (*(byte *)(lVar11 + 0x31) < 2) {
          local_70 = DAT_14c9a52a0;
          local_78 = DAT_14c9a5298;
          local_6c = (uint)DAT_14c9a5298;
          uStack_68 = (undefined4)((ulonglong)DAT_14c9a5298 >> 0x20);
          local_64 = DAT_14c9a52a0;
          local_60 = DAT_14c9a5298;
          local_58 = (undefined **)(ulonglong)DAT_14c9a52a0;
          lStack_50 = 0x100000000;
          uStack_48 = 0;
          local_44 = 0x100000000;
          uVar16 = *(undefined8 *)(lVar12 + 0x10);
          puVar13 = (undefined8 *)(**(code **)(*(longlong *)(lVar12 + 0x50) + 0x10))(lVar12 + 0x50);
          FUN_1477f1eb1(&DAT_14ca85100,*puVar13,uVar16,&local_78);
        }
      }
      else {
LAB_143546adf:
        if (iVar8 == 0x10) goto LAB_143546ae8;
LAB_143546c5b:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar11 + 0xc60), iVar8 == 2))
          goto LAB_143546ae8;
          if (iVar8 == 1) {
            DVar9 = FUN_140ad26c0();
            DVar10 = GetCurrentThreadId();
            if (DVar9 == DVar10) goto LAB_143546ae8;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar13 = (undefined8 *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x308);
          puVar15 = (uint *)*puVar13;
          if (puVar15 != (uint *)0x0) goto LAB_143546da8;
          while( true ) {
            uVar7 = *(uint *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x318);
            if ((uVar7 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar7 | 1;
              __tlregdtor(&LAB_1435546e9);
            }
            lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar14 = *(undefined4 **)(lVar11 + 0x310);
            *(undefined8 *)(lVar11 + 0x310) = 0;
            if (puVar14 == (undefined4 *)0x0) {
              puVar14 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar14 = 0xffffffff;
            *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar13 = puVar14;
            FUN_140217a48(puVar13);
            puVar15 = (uint *)*puVar13;
LAB_143546da8:
            puVar20 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar20 + 0x16);
            uVar7 = puVar15[0x12];
            if (puVar18 <= puVar15 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
              LOCK();
              uVar3 = *puVar15;
              *puVar15 = *puVar15 + uVar7 + 1;
              UNLOCK();
              if ((uVar3 ^ uVar7) != 0xffffffff) break;
              puVar15 = (uint *)*puVar13;
              *puVar15 = 0xffffffff;
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
              puVar15[0x12] = 0;
              *puVar13 = puVar15;
              puVar20 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
              puVar18 = (uint *)(puVar20 + 0x16);
              uVar7 = 0;
              if (puVar18 <= puVar15 + 0x4000) {
                uVar7 = 1;
                goto LAB_143546e28;
              }
            }
          }
          uVar7 = uVar7 + 1;
LAB_143546e28:
          *(uint **)(puVar15 + 0x10) = puVar18;
          puVar15[0x12] = uVar7;
          iVar8 = 0;
          FUN_1447247dc(puVar20,0);
          *puVar20 = &PTR_FUN_14a9b1aa8;
          puVar20[0x15] = lVar12;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar7 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar7 < 2) {
              uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar7];
              iVar8 = 0;
            }
            else {
              uVar21 = 2;
            }
          }
          else {
            iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                    *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar21 = 5;
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
          lVar11 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar11 == 0) {
            uVar6 = 1;
            if ((char)uVar21 != '\x06') {
              uVar6 = uVar21;
            }
            uVar21 = uVar6;
            uVar16 = 0;
          }
          else {
            if ((char)uVar21 == '\x06') {
              uVar21 = *(ulonglong *)(lVar11 + 0x38) >> 0x3b;
            }
            uVar16 = *(undefined8 *)(lVar11 + 0x30);
          }
          puVar20[0xf] = uVar16;
          puVar20[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar20 + 0x1c) = iVar8;
          if (puVar20 == (undefined8 *)0x0) {
            local_78 = (code *)CONCAT71(local_78._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
            UNLOCK();
            local_78 = (code *)CONCAT71(local_78._1_7_,1);
            FUN_1447439e4(puVar20);
            LOCK();
            piVar2 = (int *)(puVar20 + 1);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)*puVar20)(puVar20,1);
            }
          }
        }
        else {
          local_d8 = &local_78;
          uStack_68 = 0;
          local_64 = 0;
          local_58 = &PTR_LAB_14a9b1a40;
          local_78 = FUN_143554c30;
          lStack_50 = lVar12;
          FUN_14005a792(&DAT_14ca9a440,L"CanvasRenderTargetResolveCommand",&DAT_14cae8cb0);
          if (local_78 != (code *)0x0) {
            pppuVar17 = (undefined ***)CONCAT44(local_64,uStack_68);
            if ((undefined ***)CONCAT44(local_64,uStack_68) == (undefined ***)0x0) {
              pppuVar17 = &local_58;
            }
            (*(code *)(*pppuVar17)[2])();
          }
        }
      }
      *param_2 = 0;
      goto LAB_143546a33;
    }
    local_78 = (code *)0x14a3c27ce;
    local_70 = 9;
    local_6c = local_6c & 0xffffff00;
    uVar7 = FUN_14001a6c0(&local_78,1);
    local_a0 = (ulonglong)uVar7;
    FUN_14276766e(&local_78);
    local_88 = L"EndDrawCanvasToRenderTarget_InvalidContext";
    local_80 = 0x2a;
    FUN_1446e940c(local_b4,&local_88);
    local_88 = L"KismetRenderingLibrary";
    local_80 = 0x16;
    FUN_1446e940c(local_b8,&local_88);
    local_88 = L"EndDrawCanvasToRenderTarget: Context must be valid.";
    local_80 = 0x33;
    FUN_140208c1e(local_b0,local_b8,local_b4,&local_88);
    puVar19 = local_98;
  }
  FUN_1427679d4(&local_78,puVar19,local_b0);
  plVar4 = *(longlong **)(puVar19 + 8);
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
  if (local_b0[0] != (longlong *)0x0) {
    (**(code **)(*local_b0[0] + 0x10))();
  }
  FUN_1427678c0(&local_78);
LAB_143546a33:
  if ((local_30 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435470f5 FUN_1435470f5 body=55 status=ok
// SIG undefined FUN_1435470f5(void)

void FUN_1435470f5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cae75b8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cae75b8 = FUN_14171c317(FUN_1417dafc3,uVar1,L"EDrawDebugTrace");
  }
  return;
}



// FUNCTION 14354712c FUN_14354712c body=55 status=ok
// SIG undefined FUN_14354712c(void)

void FUN_14354712c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cae75d0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cae75d0 = FUN_14171c317(FUN_1463e1a75,uVar1,L"EMoveComponentAction");
  }
  return;
}



// FUNCTION 143547163 FUN_143547163 body=55 status=ok
// SIG undefined FUN_143547163(void)

void FUN_143547163(void)

{
  undefined8 uVar1;
  
  if (DAT_14cae75e8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cae75e8 = FUN_14171c317(FUN_1463e1aa4,uVar1,L"EQuitPreference");
  }
  return;
}



// FUNCTION 14354719a FUN_14354719a body=55 status=ok
// SIG undefined FUN_14354719a(void)

void FUN_14354719a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cae7600 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cae7600 = FUN_14171c317(FUN_1463e1ad3,uVar1,L"EEditorPropertyValueState");
  }
  return;
}



// FUNCTION 1435471d2 FUN_1435471d2 body=1511 status=ok
// SIG undefined FUN_1435471d2(void)

bool FUN_1435471d2(undefined8 param_1,undefined8 param_2,double *param_3,longlong *param_4,
                  longlong param_5,longlong *param_6,longlong *param_7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_178 [32];
  longlong *local_158;
  undefined4 local_150;
  char **local_148;
  undefined1 *local_140;
  wchar_t *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined8 *local_120;
  undefined1 *local_118;
  code *local_110;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  uint local_e0;
  undefined1 local_dc;
  longlong local_d8;
  ulonglong uStack_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *(undefined4 *)(param_7 + 1) = 0;
  local_f8 = param_2;
  if (*(int *)((longlong)param_7 + 0xc) != 0) {
    FUN_140337ccc(param_7,0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cae8c38) && (FUN_144b3d300(), DAT_14cae8c38 == -1)) {
    local_c8 = "BoxOverlapComponents";
    local_c0 = CONCAT35(local_c0._5_3_,0x14);
    uVar3 = FUN_14001a6c0(&local_c8,1);
    DAT_14cae8c30 = (char *)(ulonglong)uVar3;
    _Init_thread_footer();
  }
  local_a4 = 0;
  local_c0 = 0;
  local_a0 = 0x101;
  local_78 = 0;
  local_70 = 0x800000000;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x400000000;
  local_b8 = 0;
  local_ac = 0;
  local_c8 = DAT_14cae8c30;
  local_b7 = 1;
  local_b5 = 0;
  local_a8 = 0;
  local_b4 = 0x1000000;
  local_b0 = 1;
  iVar2 = (int)param_6[1];
  if (0 < iVar2) {
    lVar9 = 0;
    do {
      uVar6 = local_50;
      lVar10 = *(longlong *)(*param_6 + lVar9 * 8);
      if (lVar10 != 0) {
        uVar1 = *(undefined4 *)(lVar10 + 0xc);
        lVar10 = (longlong)(int)local_50;
        uVar3 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar3);
        if (local_50._4_4_ < uVar3) {
          local_100 = param_1;
          FUN_1447de67e(local_68,uVar6 & 0xffffffff);
          param_1 = local_100;
        }
        puVar5 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar5 = local_68;
        }
        *(undefined4 *)(puVar5 + lVar10 * 4) = uVar1;
        iVar2 = (int)param_6[1];
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar2);
  }
  local_d8 = 0;
  uStack_d0 = 0;
  local_e0 = 0;
  local_dc = 0;
  if (0 < (int)param_4[1]) {
    lVar9 = 0;
    do {
      uVar3 = local_e0;
      if (DAT_14cacfd48 == (longlong *)0x0) {
        local_f0 = FUN_1449e2820;
        local_110 = FUN_14081d0ea;
        local_118 = &LAB_140eca530;
        local_128 = &LAB_1479b02e7;
        local_130 = &LAB_146063820;
        local_138 = L"Engine";
        local_140 = (undefined1 *)0x0;
        local_148 = (char **)CONCAT44(local_148._4_4_,0x10000006);
        local_150 = 8;
        local_158 = (longlong *)CONCAT44(local_158._4_4_,0x170);
        local_120 = &local_f0;
        local_100 = param_1;
        FUN_14081cfa3(L"/Script/Engine",L"CollisionProfile",&DAT_14cacfd48,&DAT_1479b02e6);
        param_1 = local_100;
      }
      plVar7 = DAT_14cacfd48;
      lVar10 = DAT_14cacfd48[0x22];
      if (lVar10 == 0) {
        (**(code **)(*DAT_14cacfd48 + 1000))(DAT_14cacfd48);
        lVar10 = plVar7[0x22];
      }
      if (DAT_14cacfd78 == '\0') {
        FUN_1416bf7d6(lVar10,0);
        DAT_14cacfd78 = '\x01';
      }
      if ((int)(uint)*(byte *)(*param_4 + lVar9) < *(int *)(lVar10 + 0x158)) {
        uVar4 = *(uint *)(*(longlong *)(lVar10 + 0x150) + (ulonglong)*(byte *)(*param_4 + lVar9) * 4
                         );
      }
      else {
        uVar4 = 0x21;
      }
      local_e0 = uVar3 | 1 << (uVar4 & 0x1f);
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < (int)param_4[1]);
  }
  lVar9 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar9 != 0) {
    local_e4 = (float)param_3[2];
    local_e8 = (float)param_3[1];
    local_f0 = (code *)CONCAT44((float)*param_3,1);
    local_138 = (wchar_t *)&local_e0;
    local_140 = &DAT_14cad0f10;
    local_148 = &local_c8;
    local_150 = DAT_14cad0ec4;
    local_158 = &local_d8;
    FUN_14052f4ca(lVar9,&local_f0,local_f8,&DAT_14c8463d0);
    uVar6 = uStack_d0 & 0xffffffff;
    if (0 < (int)uStack_d0) {
      lVar10 = 0x24;
      lVar9 = 0;
      do {
        if (((((*(int *)(local_d8 + lVar10) != 0) &&
              (uVar3 = *(uint *)(local_d8 + -4 + lVar10), -1 < (int)uVar3)) &&
             ((int)uVar3 < DAT_14c9647dc)) &&
            ((plVar7 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(local_d8 + lVar10))))) &&
           ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
          if (param_5 != 0) {
            if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
              lVar8 = *plVar7;
            }
            else {
              lVar8 = 0;
            }
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(param_5 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                 (longlong)*(int *)(param_5 + 0x38) * 8) != param_5 + 0x30)) goto LAB_1435476cd;
          }
          if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
            lVar8 = *plVar7;
          }
          else {
            lVar8 = 0;
          }
          iVar2 = (int)param_7[1];
          *(uint *)(param_7 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_7 + 0xc) < iVar2 + 1U) {
            FUN_140c43e06(param_7,iVar2);
          }
          *(longlong *)(*param_7 + (longlong)iVar2 * 8) = lVar8;
          uVar6 = uStack_d0 & 0xffffffff;
        }
LAB_1435476cd:
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 0x48;
      } while (lVar9 < (int)uVar6);
    }
  }
  lVar9 = param_7[1];
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0 < (int)lVar9;
}



// FUNCTION 1435477ba FUN_1435477ba body=924 status=ok
// SIG undefined FUN_1435477ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_1435477ba(int *param_1,undefined8 param_2,undefined8 param_3,double *param_4,
             undefined1 (*param_5) [16],undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 unaff_RBP;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_1c8 [32];
  double *local_1a8;
  int *local_1a0;
  undefined4 *local_198;
  undefined1 *local_190;
  double local_188;
  double dStack_180;
  undefined1 local_178 [16];
  undefined4 local_168;
  float local_164;
  float local_160;
  float local_15c;
  int local_158 [2];
  undefined1 local_150 [80];
  longlong local_100;
  longlong local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae8030) {
    FUN_144b3d300(&DAT_14cae8030);
    if (DAT_14cae8030 == -1) {
      FUN_1446f470e(&DAT_14cae8028,L"BoxTraceMultiForObjects",1);
      _Init_thread_footer(&DAT_14cae8030);
    }
  }
  local_1a8 = (double *)CONCAT71(local_1a8._1_7_,param_10);
  local_1a0 = param_1;
  FUN_14354be4f(local_150,DAT_14cae8028,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_7) & 0xffffffff,param_8);
  FUN_14354c173(local_158,param_6);
  if (local_158[0] != 0) {
    lVar10 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if (lVar10 != 0) {
      local_15c = (float)param_4[2];
      local_160 = (float)param_4[1];
      local_164 = (float)*param_4;
      local_168 = 1;
      auVar1 = *param_5;
      auVar11 = divpd(auVar1,_DAT_1499387d0);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *(double *)param_5[1];
      auVar12 = divpd(auVar12,_DAT_1499387d0);
      auVar11 = roundpd(auVar11,auVar11,3);
      auVar12 = roundpd(auVar12,auVar12,3);
      dVar7 = (auVar1._0_8_ - auVar11._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      dVar8 = (auVar1._8_8_ - auVar11._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar5 = (*(double *)param_5[1] - auVar12._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648
      ;
      dVar6 = (0.0 - auVar12._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar2 = sin(dVar7);
      dVar3 = sin(dVar8);
      dVar4 = sin(dVar5);
      sin(dVar6);
      dVar7 = cos(dVar7);
      dVar8 = cos(dVar8);
      dVar5 = cos(dVar5);
      cos(dVar6);
      dVar6 = dVar3 * dVar2 * dVar4 + dVar8 * dVar7 * dVar5;
      local_188 = dVar2 * dVar3 * dVar5 - dVar7 * dVar8 * dVar4;
      dStack_180 = -(dVar2 * dVar8 * dVar5) - dVar7 * dVar3 * dVar4;
      local_1a8 = &local_188;
      local_178._8_4_ = SUB84(dVar6,0);
      local_178._0_8_ = -(dVar8 * dVar2 * dVar4) + dVar3 * dVar7 * dVar5;
      local_178._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      local_1a0 = local_158;
      local_198 = &local_168;
      local_190 = local_150;
      uVar9 = FUN_1479b4672(lVar10,param_9,param_2,param_3);
      goto LAB_1435478d6;
    }
  }
  uVar9 = 0;
LAB_1435478d6:
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  if ((local_d0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143547b58 FUN_143547b58 body=992 status=ok
// SIG undefined FUN_143547b58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_143547b58(int *param_1,undefined8 param_2,undefined8 param_3,double *param_4,
             undefined1 (*param_5) [16],longlong param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 unaff_RBP;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_1e8 [32];
  double *local_1c8;
  int *local_1c0;
  undefined4 *local_1b8;
  undefined1 *local_1b0;
  double local_1a8;
  double dStack_1a0;
  undefined1 local_198 [16];
  undefined4 local_180;
  float local_17c;
  float local_178;
  float local_174;
  int local_170 [2];
  longlong local_168;
  ulonglong uStack_160;
  undefined1 local_150 [80];
  longlong local_100;
  longlong local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae8020) {
    FUN_144b3d300(&DAT_14cae8020);
    if (DAT_14cae8020 == -1) {
      FUN_1446f470e(&DAT_14cae8018,L"BoxTraceSingleForObjects",1);
      _Init_thread_footer(&DAT_14cae8020);
    }
  }
  local_1c8 = (double *)CONCAT71(local_1c8._1_7_,param_10);
  local_1c0 = param_1;
  FUN_14354be4f(local_150,DAT_14cae8018,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_7) & 0xffffffff,param_8);
  local_168 = 0;
  uStack_160 = (ulonglong)*(uint *)(param_6 + 8);
  if (*(uint *)(param_6 + 8) != 0) {
    FUN_140907c34(&local_168,0);
  }
  FUN_14354c173(local_170,param_6);
  if (local_170[0] != 0) {
    lVar10 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if (lVar10 != 0) {
      local_174 = (float)param_4[2];
      local_178 = (float)param_4[1];
      local_17c = (float)*param_4;
      local_180 = 1;
      auVar1 = *param_5;
      auVar11 = divpd(auVar1,_DAT_1499387d0);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *(double *)param_5[1];
      auVar12 = divpd(auVar12,_DAT_1499387d0);
      auVar11 = roundpd(auVar11,auVar11,3);
      auVar12 = roundpd(auVar12,auVar12,3);
      dVar7 = (auVar1._0_8_ - auVar11._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      dVar8 = (auVar1._8_8_ - auVar11._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar5 = (*(double *)param_5[1] - auVar12._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648
      ;
      dVar6 = (0.0 - auVar12._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar2 = sin(dVar7);
      dVar3 = sin(dVar8);
      dVar4 = sin(dVar5);
      sin(dVar6);
      dVar7 = cos(dVar7);
      dVar8 = cos(dVar8);
      dVar5 = cos(dVar5);
      cos(dVar6);
      dVar6 = dVar3 * dVar2 * dVar4 + dVar8 * dVar7 * dVar5;
      local_1a8 = dVar2 * dVar3 * dVar5 - dVar7 * dVar8 * dVar4;
      dStack_1a0 = -(dVar2 * dVar8 * dVar5) - dVar7 * dVar3 * dVar4;
      local_1c8 = &local_1a8;
      local_198._8_4_ = SUB84(dVar6,0);
      local_198._0_8_ = -(dVar8 * dVar2 * dVar4) + dVar3 * dVar7 * dVar5;
      local_198._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      local_1c0 = local_170;
      local_1b8 = &local_180;
      local_1b0 = local_150;
      uVar9 = FUN_1479b44ee(lVar10,param_9,param_2,param_3);
      goto LAB_143547ca3;
    }
  }
  uVar9 = 0;
LAB_143547ca3:
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  if ((local_d0 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143547f3a FUN_143547f3a body=1464 status=ok
// SIG undefined FUN_143547f3a(void)

bool FUN_143547f3a(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  longlong *param_5,longlong param_6,longlong *param_7,longlong *param_8)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_198 [32];
  longlong *local_178;
  undefined4 local_170;
  char **local_168;
  undefined1 *local_160;
  wchar_t *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined8 *local_140;
  undefined1 *local_138;
  code *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  uint local_110;
  undefined1 local_10c;
  longlong local_108;
  ulonglong uStack_100;
  char *local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined2 local_c8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined1 *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  *(undefined4 *)(param_8 + 1) = 0;
  local_128 = param_2;
  if (*(int *)((longlong)param_8 + 0xc) != 0) {
    FUN_140337ccc(param_8,0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cae8c48) && (FUN_144b3d300(), DAT_14cae8c48 == -1)) {
    local_f0 = "CapsuleOverlapComponents";
    local_e8 = CONCAT35(local_e8._5_3_,0x18);
    uVar3 = FUN_14001a6c0(&local_f0,1);
    DAT_14cae8c40 = (char *)(ulonglong)uVar3;
    _Init_thread_footer();
  }
  local_cc = 0;
  local_e8 = 0;
  local_c8 = 0x101;
  local_a0 = 0;
  local_98 = 0x800000000;
  local_80 = (undefined1 *)0x0;
  local_78 = 0x400000000;
  local_e0 = 0;
  local_d4 = 0;
  local_f0 = DAT_14cae8c40;
  local_df = 1;
  local_dd = 0;
  local_d0 = 0;
  local_dc = 0x1000000;
  local_d8 = 1;
  iVar2 = (int)param_7[1];
  if (0 < iVar2) {
    lVar9 = 0;
    do {
      uVar6 = local_78;
      lVar10 = *(longlong *)(*param_7 + lVar9 * 8);
      if (lVar10 != 0) {
        uVar1 = *(undefined4 *)(lVar10 + 0xc);
        lVar10 = (longlong)(int)local_78;
        uVar3 = (int)local_78 + 1;
        local_78 = CONCAT44(local_78._4_4_,uVar3);
        if (local_78._4_4_ < uVar3) {
          FUN_1447de67e(local_90,uVar6 & 0xffffffff);
        }
        puVar5 = local_80;
        if (local_80 == (undefined1 *)0x0) {
          puVar5 = local_90;
        }
        *(undefined4 *)(puVar5 + lVar10 * 4) = uVar1;
        iVar2 = (int)param_7[1];
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar2);
  }
  local_108 = 0;
  uStack_100 = 0;
  local_110 = 0;
  local_10c = 0;
  if (0 < (int)param_5[1]) {
    lVar9 = 0;
    do {
      uVar3 = local_110;
      if (DAT_14cacfd48 == (longlong *)0x0) {
        local_120 = FUN_1449e2820;
        local_130 = FUN_14081d0ea;
        local_138 = &LAB_140eca530;
        local_148 = &LAB_1479b02e7;
        local_150 = &LAB_146063820;
        local_158 = L"Engine";
        local_160 = (undefined1 *)0x0;
        local_168 = (char **)CONCAT44(local_168._4_4_,0x10000006);
        local_170 = 8;
        local_178 = (longlong *)CONCAT44(local_178._4_4_,0x170);
        local_140 = &local_120;
        FUN_14081cfa3(L"/Script/Engine",L"CollisionProfile",&DAT_14cacfd48,&DAT_1479b02e6);
      }
      plVar7 = DAT_14cacfd48;
      lVar10 = DAT_14cacfd48[0x22];
      if (lVar10 == 0) {
        (**(code **)(*DAT_14cacfd48 + 1000))(DAT_14cacfd48);
        lVar10 = plVar7[0x22];
      }
      if (DAT_14cacfd78 == '\0') {
        FUN_1416bf7d6(lVar10,0);
        DAT_14cacfd78 = '\x01';
      }
      if ((int)(uint)*(byte *)(*param_5 + lVar9) < *(int *)(lVar10 + 0x158)) {
        uVar4 = *(uint *)(*(longlong *)(lVar10 + 0x150) + (ulonglong)*(byte *)(*param_5 + lVar9) * 4
                         );
      }
      else {
        uVar4 = 0x21;
      }
      local_110 = uVar3 | 1 << (uVar4 & 0x1f);
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < (int)param_5[1]);
  }
  lVar9 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar9 != 0) {
    local_120 = (code *)CONCAT44(param_3,3);
    local_158 = (wchar_t *)&local_110;
    local_160 = &DAT_14cad0f10;
    local_168 = &local_f0;
    local_170 = DAT_14cad0ec4;
    local_178 = &local_108;
    local_118 = param_4;
    FUN_14052f4ca(lVar9,&local_120,local_128,&DAT_14c8463d0);
    uVar6 = uStack_100 & 0xffffffff;
    if (0 < (int)uStack_100) {
      lVar10 = 0x24;
      lVar9 = 0;
      do {
        if (((((*(int *)(local_108 + lVar10) != 0) &&
              (uVar3 = *(uint *)(local_108 + -4 + lVar10), -1 < (int)uVar3)) &&
             ((int)uVar3 < DAT_14c9647dc)) &&
            ((plVar7 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(local_108 + lVar10))))) &&
           ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
          if (param_6 != 0) {
            if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
              lVar8 = *plVar7;
            }
            else {
              lVar8 = 0;
            }
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(param_6 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                 (longlong)*(int *)(param_6 + 0x38) * 8) != param_6 + 0x30)) goto LAB_1435483ff;
          }
          if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
            lVar8 = *plVar7;
          }
          else {
            lVar8 = 0;
          }
          iVar2 = (int)param_8[1];
          *(uint *)(param_8 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_8 + 0xc) < iVar2 + 1U) {
            FUN_140c43e06(param_8,iVar2);
          }
          *(longlong *)(*param_8 + (longlong)iVar2 * 8) = lVar8;
          uVar6 = uStack_100 & 0xffffffff;
        }
LAB_1435483ff:
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 0x48;
      } while (lVar9 < (int)uVar6);
    }
  }
  lVar9 = param_8[1];
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0 < (int)lVar9;
}



// FUNCTION 1435484f4 FUN_1435484f4 body=452 status=ok
// SIG undefined FUN_1435484f4(void)

undefined4
FUN_1435484f4(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  int *local_100;
  undefined4 *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_d8 [2];
  undefined1 local_d0 [80];
  longlong local_80;
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae8050) {
    FUN_144b3d300(&DAT_14cae8050);
    if (DAT_14cae8050 == -1) {
      FUN_1446f470e(&DAT_14cae8048,L"CapsuleTraceMultiForObjects",1);
      _Init_thread_footer(&DAT_14cae8050);
    }
  }
  local_108 = (undefined8 *)CONCAT71(local_108._1_7_,param_10);
  local_100 = param_1;
  FUN_14354be4f(local_d0,DAT_14cae8048,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_7) & 0xffffffff,param_8);
  FUN_14354c173(local_d8,param_6);
  if (local_d8[0] != 0) {
    lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if (lVar2 != 0) {
      local_f8 = &local_e8;
      local_e8 = 3;
      local_e0 = param_5;
      local_108 = &DAT_14c8463d0;
      local_100 = local_d8;
      local_f0 = local_d0;
      local_e4 = param_4;
      uVar1 = FUN_1479b4672(lVar2,param_9,param_2,param_3);
      goto LAB_1435485c6;
    }
  }
  uVar1 = 0;
LAB_1435485c6:
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435486ba FUN_1435486ba body=452 status=ok
// SIG undefined FUN_1435486ba(void)

undefined4
FUN_1435486ba(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  int *local_100;
  undefined4 *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_d8 [2];
  undefined1 local_d0 [80];
  longlong local_80;
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae8040) {
    FUN_144b3d300(&DAT_14cae8040);
    if (DAT_14cae8040 == -1) {
      FUN_1446f470e(&DAT_14cae8038,L"CapsuleTraceSingleForObjects",1);
      _Init_thread_footer(&DAT_14cae8040);
    }
  }
  local_108 = (undefined8 *)CONCAT71(local_108._1_7_,param_10);
  local_100 = param_1;
  FUN_14354be4f(local_d0,DAT_14cae8038,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_7) & 0xffffffff,param_8);
  FUN_14354c173(local_d8,param_6);
  if (local_d8[0] != 0) {
    lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if (lVar2 != 0) {
      local_f8 = &local_e8;
      local_e8 = 3;
      local_e0 = param_5;
      local_108 = &DAT_14c8463d0;
      local_100 = local_d8;
      local_f0 = local_d0;
      local_e4 = param_4;
      uVar1 = FUN_1479b44ee(lVar2,param_9,param_2,param_3);
      goto LAB_14354878c;
    }
  }
  uVar1 = 0;
LAB_14354878c:
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143548880 FUN_143548880 body=1471 status=ok
// SIG undefined FUN_143548880(void)

bool FUN_143548880(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong param_4,
                  longlong *param_5,longlong *param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_1b8 [32];
  code **local_198;
  undefined4 local_190;
  char **local_188;
  uint *local_180;
  wchar_t *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  code **local_160;
  undefined1 *local_158;
  code *local_150;
  undefined8 *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  code *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  uint local_f0;
  undefined1 local_ec;
  longlong local_e8;
  ulonglong uStack_e0;
  char *local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined2 local_bf;
  undefined1 local_bd;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined2 local_a8;
  longlong local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  *(undefined4 *)(param_6 + 1) = 0;
  local_140 = param_2;
  if (*(int *)((longlong)param_6 + 0xc) != 0) {
    FUN_140337ccc(param_6,0);
  }
  if (param_1 != (longlong *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cae8c58) && (FUN_144b3d300(), DAT_14cae8c58 == -1)) {
      local_d0 = "ComponentOverlapComponents";
      local_c8 = CONCAT35(local_c8._5_3_,0x1a);
      uVar3 = FUN_14001a6c0(&local_d0,1);
      DAT_14cae8c50 = (char *)(ulonglong)uVar3;
      _Init_thread_footer();
    }
    local_ac = 0;
    local_c8 = 0;
    local_a8 = 0x101;
    local_80 = 0;
    local_78 = 0x800000000;
    local_60 = (undefined1 *)0x0;
    local_58 = 0x400000000;
    local_c0 = 0;
    local_b4 = 0;
    local_d0 = DAT_14cae8c50;
    local_bf = 1;
    local_bd = 0;
    local_b0 = 0;
    local_bc = 0x1000000;
    local_b8 = 1;
    local_50 = 0;
    iVar2 = (int)param_5[1];
    if (0 < iVar2) {
      lVar10 = 0;
      do {
        uVar6 = local_58;
        lVar9 = *(longlong *)(*param_5 + lVar10 * 8);
        if (lVar9 != 0) {
          uVar1 = *(undefined4 *)(lVar9 + 0xc);
          lVar9 = (longlong)(int)local_58;
          uVar3 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,uVar3);
          if (local_58._4_4_ < uVar3) {
            FUN_1447de67e(local_70,uVar6 & 0xffffffff);
          }
          puVar5 = local_60;
          if (local_60 == (undefined1 *)0x0) {
            puVar5 = local_70;
          }
          *(undefined4 *)(puVar5 + lVar9 * 4) = uVar1;
          iVar2 = (int)param_5[1];
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar2);
    }
    local_e8 = 0;
    uStack_e0 = 0;
    local_f0 = 0;
    local_ec = 0;
    if (0 < (int)param_3[1]) {
      lVar10 = 0;
      do {
        uVar3 = local_f0;
        if (DAT_14cacfd48 == (longlong *)0x0) {
          local_118 = FUN_1449e2820;
          local_150 = FUN_14081d0ea;
          local_158 = &LAB_140eca530;
          local_168 = &LAB_1479b02e7;
          local_170 = &LAB_146063820;
          local_178 = L"Engine";
          local_180 = (uint *)0x0;
          local_188 = (char **)CONCAT44(local_188._4_4_,0x10000006);
          local_190 = 8;
          local_198 = (code **)CONCAT44(local_198._4_4_,0x170);
          local_160 = &local_118;
          FUN_14081cfa3(L"/Script/Engine",L"CollisionProfile",&DAT_14cacfd48,&DAT_1479b02e6);
        }
        plVar7 = DAT_14cacfd48;
        lVar9 = DAT_14cacfd48[0x22];
        if (lVar9 == 0) {
          (**(code **)(*DAT_14cacfd48 + 1000))(DAT_14cacfd48);
          lVar9 = plVar7[0x22];
        }
        if (DAT_14cacfd78 == '\0') {
          FUN_1416bf7d6(lVar9,0);
          DAT_14cacfd78 = '\x01';
        }
        if ((int)(uint)*(byte *)(*param_3 + lVar10) < *(int *)(lVar9 + 0x158)) {
          uVar4 = *(uint *)(*(longlong *)(lVar9 + 0x150) +
                           (ulonglong)*(byte *)(*param_3 + lVar10) * 4);
        }
        else {
          uVar4 = 0x21;
        }
        local_f0 = uVar3 | 1 << (uVar4 & 0x1f);
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < (int)param_3[1]);
    }
    lVar10 = param_1[0x16];
    if (lVar10 == 0) {
      lVar10 = FUN_1448abda6(param_1);
    }
    local_118 = (code *)*local_140;
    uStack_110 = local_140[1];
    local_108 = local_140[2];
    uStack_100 = local_140[3];
    local_138 = local_140[4];
    uStack_130 = local_140[5];
    local_128 = local_140[6];
    local_190 = (**(code **)(*param_1 + 0x580))(param_1);
    local_180 = &local_f0;
    local_188 = &local_d0;
    local_198 = &local_118;
    FUN_143428d76(lVar10,&local_e8,param_1,&local_138);
    uVar6 = uStack_e0 & 0xffffffff;
    if (0 < (int)uStack_e0) {
      lVar9 = 0x24;
      lVar10 = 0;
      do {
        if (((((*(int *)(local_e8 + lVar9) != 0) &&
              (uVar3 = *(uint *)(local_e8 + -4 + lVar9), -1 < (int)uVar3)) &&
             ((int)uVar3 < DAT_14c9647dc)) &&
            ((plVar7 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(local_e8 + lVar9))))) &&
           ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
          if (param_4 != 0) {
            if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
              lVar8 = *plVar7;
            }
            else {
              lVar8 = 0;
            }
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(param_4 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                 (longlong)*(int *)(param_4 + 0x38) * 8) != param_4 + 0x30)) goto LAB_143548d5d;
          }
          if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
            lVar8 = *plVar7;
          }
          else {
            lVar8 = 0;
          }
          iVar2 = (int)param_6[1];
          *(uint *)(param_6 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_6 + 0xc) < iVar2 + 1U) {
            FUN_140c43e06(param_6,iVar2);
          }
          *(longlong *)(*param_6 + (longlong)iVar2 * 8) = lVar8;
          uVar6 = uStack_e0 & 0xffffffff;
        }
LAB_143548d5d:
        lVar10 = lVar10 + 1;
        lVar9 = lVar9 + 0x48;
      } while (lVar10 < (int)uVar6);
    }
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    if (local_60 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0 < (int)param_6[1];
}



// FUNCTION 143548e40 FUN_143548e40 body=259 status=ok
// SIG undefined FUN_143548e40(void)

void FUN_143548e40(longlong *param_1,double *param_2,double *param_3)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x520))(param_1,&local_68,1,0);
    dVar1 = (local_40 - local_58) * 0.5;
    dVar5 = (local_48 - local_60) * 0.5;
    dVar6 = (local_50 - local_68) * 0.5;
    *param_3 = dVar6;
    param_3[1] = dVar5;
    param_3[2] = dVar1;
    *param_2 = dVar6 + local_68;
    param_2[1] = dVar5 + local_60;
    param_2[2] = dVar1 + local_58;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
  }
  param_2[2] = DAT_14c8464f0;
  dVar1 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *param_2 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[1] = dVar1;
  param_3[2] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_3 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_3 + 4) = uVar2;
  *(undefined4 *)(param_3 + 1) = uVar3;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar4;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143548f46 FUN_143548f46 body=2309 status=ok
// SIG undefined FUN_143548f46(void)

void FUN_143548f46(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  float *pfVar8;
  longlong *_Src;
  undefined8 *puVar9;
  float *pfVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  float local_74;
  undefined8 local_70 [3];
  undefined8 local_58 [3];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_1468d96f0;
      local_90 = 0;
      local_98 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar3);
          if (cVar5 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_40);
            goto LAB_1435490ff;
          }
        }
        _Src = (longlong *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (_Src != &local_40) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_40,_Src,(int)plVar3[6]);
          }
          else {
            memcpy(&local_40,_Src,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar3[6]);
        local_98 = local_98 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_40,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_40,lVar4);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar9 = (undefined8 *)*puVar6;
        puVar6 = puVar9 + 2;
      } while ((longlong *)*puVar9 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar9[1];
    }
LAB_1435490ff:
    pbVar7 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_40);
      goto LAB_1435490ff;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_40);
      goto LAB_1435490ff;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_40);
      goto LAB_1435490ff;
    }
    local_40 = *(longlong *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
  }
  puVar6 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar3);
          if (cVar5 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,local_58);
            goto LAB_14354926f;
          }
        }
        puVar9 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar9 != local_58) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,local_58,puVar9,(int)plVar3[6]);
          }
          else {
            memcpy(local_58,puVar9,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar3[6]);
        local_98 = local_98 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,local_58,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,local_58,lVar4);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar12 = (undefined8 *)*puVar9;
        puVar9 = puVar12 + 2;
      } while ((longlong *)*puVar12 != plVar3);
      *puVar6 = puVar12[1];
    }
LAB_14354926f:
    pbVar7 = *(byte **)(param_2 + 0x20);
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_58);
      goto LAB_14354926f;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_58);
      goto LAB_14354926f;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_58);
      goto LAB_14354926f;
    }
    local_58[0] = *(undefined8 *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    puVar9 = (undefined8 *)0x0;
  }
  puVar12 = local_58;
  if (puVar9 != (undefined8 *)0x0) {
    puVar12 = puVar9;
  }
  *puVar6 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar3);
          if (cVar5 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,local_70);
            goto LAB_1435493eb;
          }
        }
        puVar9 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar9 != local_70) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,local_70,puVar9,(int)plVar3[6]);
          }
          else {
            memcpy(local_70,puVar9,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar3[6]);
        local_98 = local_98 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,local_70,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,local_70,lVar4);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar11 = (undefined8 *)*puVar9;
        puVar9 = puVar11 + 2;
      } while ((longlong *)*puVar11 != plVar3);
      *puVar6 = puVar11[1];
    }
LAB_1435493eb:
    pbVar7 = *(byte **)(param_2 + 0x20);
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_70);
      goto LAB_1435493eb;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_70);
      goto LAB_1435493eb;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_70);
      goto LAB_1435493eb;
    }
    local_70[0] = *(undefined8 *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    puVar9 = (undefined8 *)0x0;
  }
  puVar11 = local_70;
  if (puVar9 != (undefined8 *)0x0) {
    puVar11 = puVar9;
  }
  local_74 = 0.0;
  *puVar6 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar3);
          if (cVar5 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_74);
            goto LAB_1435495d6;
          }
        }
        pfVar10 = (float *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if ((pfVar10 != &local_74) && ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0)) {
          (**(code **)(*plVar3 + 0x100))(plVar3,&local_74,pfVar10,(int)plVar3[6]);
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar3[6]);
        local_98 = local_98 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_74,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_74,lVar4);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar9 = (undefined8 *)*puVar6;
        puVar6 = puVar9 + 2;
      } while ((longlong *)*puVar9 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar9[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_74);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_74);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_74);
    }
  }
LAB_1435495d6:
  lVar4 = local_40;
  pfVar10 = *(float **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_40 == 0) {
    puVar12[2] = DAT_14c8464f0;
    *puVar12 = DAT_14c8464e0;
    puVar12[1] = DAT_14c8464e8;
    puVar11[2] = DAT_14c8464f0;
    *puVar11 = DAT_14c8464e0;
    puVar11[1] = DAT_14c8464e8;
    fVar13 = 0.0;
  }
  else {
    puVar12[2] = *(undefined8 *)(local_40 + 0x170);
    uVar1 = *(undefined8 *)(lVar4 + 0x168);
    *puVar12 = *(undefined8 *)(lVar4 + 0x160);
    puVar12[1] = uVar1;
    puVar11[2] = *(undefined8 *)(lVar4 + 0x188);
    uVar1 = *(undefined8 *)(lVar4 + 0x180);
    *puVar11 = *(undefined8 *)(lVar4 + 0x178);
    puVar11[1] = uVar1;
    fVar13 = (float)*(double *)(lVar4 + 400);
  }
  pfVar8 = &local_74;
  if (pfVar10 != (float *)0x0) {
    pfVar8 = pfVar10;
  }
  *pfVar8 = fVar13;
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14354984c FUN_14354984c body=94 status=ok
// SIG undefined FUN_14354984c(void)

undefined8 FUN_14354984c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  if (*(int *)(param_1 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_1;
  }
  plVar1 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar2,1);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014354989a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar1 + 0xb8))(plVar1);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1435498aa FUN_1435498aa body=208 status=ok
// SIG undefined FUN_1435498aa(void)

longlong * FUN_1435498aa(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(param_1,&DAT_149e02088);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  plVar1 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar2,1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xc0))(plVar1,&local_28);
    if (&local_28 == param_1) {
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_28;
      *(undefined4 *)(param_1 + 1) = local_20;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14354997c FUN_14354997c body=513 status=ok
// SIG undefined FUN_14354997c(void)

undefined8 FUN_14354997c(uint *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar8 = 0;
  if ((((*(longlong *)(param_1 + 2) == 0) || (uVar8 = 0, param_1[1] == 0)) ||
      (uVar2 = *param_1, uVar8 = 0, (int)uVar2 < 0)) || (uVar8 = 0, DAT_14c9647dc <= (int)uVar2))
  goto LAB_143549b3f;
  plVar6 = (longlong *)
           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
  uVar8 = 0;
  if (((plVar6 == (longlong *)0x0) || (uVar8 = 0, *(uint *)(plVar6 + 2) != param_1[1])) ||
     ((uVar8 = 0, (*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (uVar8 = 0, *plVar6 == 0))))
  goto LAB_143549b3f;
  lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar6 + 0x10),*(longlong *)(param_1 + 2),1);
  uVar8 = 0;
  if (lVar3 == 0) goto LAB_143549b3f;
  if (param_1[1] == 0) {
LAB_143549b69:
    uVar8 = 0;
  }
  else {
    uVar2 = *param_1;
    uVar8 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar4 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar4 + 2) != param_1[1] || ((*(uint *)(puVar4 + 1) & 0x10200000) != 0))))
      goto LAB_143549b69;
      uVar8 = *puVar4;
    }
  }
  lVar3 = FUN_1402ad3be(DAT_14cb0d2b0,uVar8,1);
  uVar8 = 0;
  if (lVar3 == 0) goto LAB_143549b3f;
  if (*(longlong *)(lVar3 + 0x1f0) == 0) {
    plVar6 = (longlong *)(lVar3 + 0x458);
  }
  else {
    plVar6 = (longlong *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
  }
  lVar3 = *plVar6;
  local_48 = *(undefined8 *)param_1;
  local_40 = *(undefined8 *)(param_1 + 2);
  FUN_1437437dc(lVar3,&local_38);
  if (local_38 == 0) {
LAB_143549b65:
    lVar5 = 0;
  }
  else {
    uVar2 = (uint)local_38;
    if (*(int *)(lVar3 + 0x10) <= (int)(uVar2 & 0xffffff)) goto LAB_143549b65;
    lVar5 = lVar3 + 0x18;
    if (*(longlong *)(lVar3 + 0x28) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0x28);
    }
    if ((*(uint *)(lVar5 + (ulonglong)((uVar2 & 0xffffff) >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
    goto LAB_143549b65;
    lVar1 = *(longlong *)(lVar3 + 8);
    lVar7 = (ulonglong)(uVar2 & 0xffffff) * 0x70;
    lVar5 = lVar1 + lVar7;
    if (*(char *)(lVar1 + 1 + lVar7) == '\x04') {
      lVar5 = 0;
    }
    if (*(longlong *)(lVar1 + 0x60 + lVar7) != local_38) {
      lVar5 = 0;
    }
  }
  uVar8 = FUN_14084d52a(lVar3,lVar5);
LAB_143549b3f:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143549b7e FUN_143549b7e body=548 status=ok
// SIG undefined FUN_143549b7e(void)

float FUN_143549b7e(uint *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  fVar10 = 0.0;
  if ((((*(longlong *)(param_1 + 2) == 0) || (param_1[1] == 0)) ||
      (uVar2 = *param_1, (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143549d54;
  plVar8 = (longlong *)
           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
  if (((plVar8 == (longlong *)0x0) || (*(uint *)(plVar8 + 2) != param_1[1])) ||
     (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || (*plVar8 == 0)))) goto LAB_143549d54;
  lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar8 + 0x10),*(longlong *)(param_1 + 2),1);
  if (lVar3 == 0) goto LAB_143549d54;
  if (param_1[1] == 0) {
LAB_143549d7a:
    uVar5 = 0;
  }
  else {
    uVar2 = *param_1;
    uVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar6 + 2) != param_1[1] || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
      goto LAB_143549d7a;
      uVar5 = *puVar6;
    }
  }
  lVar3 = FUN_1402ad3be(DAT_14cb0d2b0,uVar5,1);
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      plVar8 = (longlong *)(lVar3 + 0x458);
    }
    else {
      plVar8 = (longlong *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    lVar3 = *plVar8;
    local_48 = *(undefined8 *)param_1;
    local_40 = *(undefined8 *)(param_1 + 2);
    FUN_1437437dc(lVar3,&local_38);
    fVar10 = -1.0;
    if (local_38 != 0) {
      uVar2 = (uint)local_38;
      if ((int)(uVar2 & 0xffffff) < *(int *)(lVar3 + 0x10)) {
        lVar7 = lVar3 + 0x18;
        if (*(longlong *)(lVar3 + 0x28) != 0) {
          lVar7 = *(longlong *)(lVar3 + 0x28);
        }
        if ((*(uint *)(lVar7 + (ulonglong)((uVar2 & 0xffffff) >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0
           ) {
          lVar7 = *(longlong *)(lVar3 + 8);
          lVar9 = (ulonglong)(uVar2 & 0xffffff) * 0x70;
          lVar4 = lVar7 + lVar9;
          if (((lVar4 != 0) && (*(longlong *)(lVar7 + 0x60 + lVar9) == local_38)) &&
             (cVar1 = *(char *)(lVar7 + 1 + lVar9), cVar1 != '\x04')) {
            if (cVar1 == '\x01') {
              fVar10 = (float)(*(double *)(lVar4 + 8) - *(double *)(lVar3 + 0x140));
            }
            else if (cVar1 == '\x03') {
              fVar10 = 0.0;
            }
            else {
              fVar10 = (float)*(double *)(lVar4 + 8);
            }
          }
        }
      }
    }
  }
LAB_143549d54:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return fVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143549da4 FUN_143549da4 body=505 status=ok
// SIG undefined FUN_143549da4(void)

undefined8 FUN_143549da4(uint *param_1)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 2) != 0) && (param_1[1] != 0)) {
    uVar2 = *param_1;
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143549f6b;
    plVar3 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
        ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (*plVar3 != 0)) {
      lVar4 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_1 + 2),1);
      if (lVar4 != 0) {
        if (param_1[1] == 0) {
LAB_143549f89:
          uVar5 = 0;
        }
        else {
          uVar2 = *param_1;
          uVar5 = 0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            puVar6 = (undefined8 *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((puVar6 == (undefined8 *)0x0) ||
               ((*(uint *)(puVar6 + 2) != param_1[1] || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))
               )) goto LAB_143549f89;
            uVar5 = *puVar6;
          }
        }
        lVar4 = FUN_1402ad3be(DAT_14cb0d2b0,uVar5,1);
        if (lVar4 != 0) {
          if (*(longlong *)(lVar4 + 0x1f0) == 0) {
            plVar3 = (longlong *)(lVar4 + 0x458);
          }
          else {
            plVar3 = (longlong *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
          }
          lVar4 = *plVar3;
          local_30 = *(undefined8 *)param_1;
          local_28 = *(undefined8 *)(param_1 + 2);
          FUN_1437437dc(lVar4,&local_20);
          if (local_20 != 0) {
            uVar2 = (uint)local_20;
            if ((int)(uVar2 & 0xffffff) < *(int *)(lVar4 + 0x10)) {
              lVar7 = lVar4 + 0x18;
              if (*(longlong *)(lVar4 + 0x28) != 0) {
                lVar7 = *(longlong *)(lVar4 + 0x28);
              }
              if ((*(uint *)(lVar7 + (ulonglong)((uVar2 & 0xffffff) >> 5) * 4) >> (uVar2 & 0x1f) & 1
                  ) != 0) {
                lVar4 = *(longlong *)(lVar4 + 8);
                lVar7 = (ulonglong)(uVar2 & 0xffffff) * 0x70;
                cVar1 = *(char *)(lVar4 + 1 + lVar7);
                uVar5 = CONCAT71((int7)((ulonglong)(lVar4 + lVar7) >> 8),
                                 (cVar1 != '\x02' && *(longlong *)(lVar4 + 0x60 + lVar7) == local_20
                                 ) && (lVar4 + lVar7 != 0 && cVar1 != '\x04'));
                goto LAB_143549f6b;
              }
            }
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_143549f6b:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143549f9e FUN_143549f9e body=505 status=ok
// SIG undefined FUN_143549f9e(void)

undefined8 FUN_143549f9e(uint *param_1)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 2) != 0) && (param_1[1] != 0)) {
    uVar2 = *param_1;
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14354a165;
    plVar3 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
        ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (*plVar3 != 0)) {
      lVar4 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_1 + 2),1);
      if (lVar4 != 0) {
        if (param_1[1] == 0) {
LAB_14354a183:
          uVar5 = 0;
        }
        else {
          uVar2 = *param_1;
          uVar5 = 0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            puVar6 = (undefined8 *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((puVar6 == (undefined8 *)0x0) ||
               ((*(uint *)(puVar6 + 2) != param_1[1] || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))
               )) goto LAB_14354a183;
            uVar5 = *puVar6;
          }
        }
        lVar4 = FUN_1402ad3be(DAT_14cb0d2b0,uVar5,1);
        if (lVar4 != 0) {
          if (*(longlong *)(lVar4 + 0x1f0) == 0) {
            plVar3 = (longlong *)(lVar4 + 0x458);
          }
          else {
            plVar3 = (longlong *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
          }
          lVar4 = *plVar3;
          local_30 = *(undefined8 *)param_1;
          local_28 = *(undefined8 *)(param_1 + 2);
          FUN_1437437dc(lVar4,&local_20);
          if (local_20 != 0) {
            uVar2 = (uint)local_20;
            if ((int)(uVar2 & 0xffffff) < *(int *)(lVar4 + 0x10)) {
              lVar7 = lVar4 + 0x18;
              if (*(longlong *)(lVar4 + 0x28) != 0) {
                lVar7 = *(longlong *)(lVar4 + 0x28);
              }
              if ((*(uint *)(lVar7 + (ulonglong)((uVar2 & 0xffffff) >> 5) * 4) >> (uVar2 & 0x1f) & 1
                  ) != 0) {
                lVar4 = *(longlong *)(lVar4 + 8);
                lVar7 = (ulonglong)(uVar2 & 0xffffff) * 0x70;
                cVar1 = *(char *)(lVar4 + 1 + lVar7);
                uVar5 = CONCAT71((int7)((ulonglong)(lVar4 + lVar7) >> 8),
                                 (cVar1 == '\x02' && *(longlong *)(lVar4 + 0x60 + lVar7) == local_20
                                 ) && (lVar4 + lVar7 != 0 && cVar1 != '\x04'));
                goto LAB_14354a165;
              }
            }
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_14354a165:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14354a198 FUN_14354a198 body=376 status=ok
// SIG undefined FUN_14354a198(void)

void FUN_14354a198(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(longlong *)(param_1 + 2) == 0) || (param_1[1] == 0)) ||
      (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14354a29e;
  plVar5 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (((plVar5 == (longlong *)0x0) || (*(uint *)(plVar5 + 2) != param_1[1])) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (*plVar5 == 0)))) goto LAB_14354a29e;
  lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_1 + 2),1);
  if (lVar2 == 0) goto LAB_14354a29e;
  if (param_1[1] == 0) {
LAB_14354a302:
    uVar3 = 0;
  }
  else {
    uVar1 = *param_1;
    uVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar4 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar4 + 2) != param_1[1] || ((*(uint *)(puVar4 + 1) & 0x10200000) != 0))))
      goto LAB_14354a302;
      uVar3 = *puVar4;
    }
  }
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,uVar3,1);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar2 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    uVar3 = *puVar4;
    local_30 = *(undefined8 *)param_1;
    local_28 = *(undefined8 *)(param_1 + 2);
    FUN_1437437dc(uVar3,&local_20);
    FUN_147d74288(uVar3,local_20);
  }
LAB_14354a29e:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14354a312 FUN_14354a312 body=346 status=ok
// SIG undefined FUN_14354a312(void)

undefined8 * FUN_14354a312(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_3[1] == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_3;
  }
  FUN_1446f470e(&local_38,puVar5,1);
  if (param_2 == 0) {
    uVar7 = 0;
    uVar4 = 0;
  }
  else {
    lVar3 = FUN_1400796d0(*(undefined8 *)(param_2 + 0x10),local_38,1);
    if ((lVar3 != 0) && (*(short *)(lVar3 + 0xb6) != 0)) {
      *param_1 = 0;
      goto LAB_14354a412;
    }
    uVar7 = *(uint *)(param_2 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    uVar4 = (ulonglong)*(uint *)(lVar3 + 0x10);
    if (*(uint *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar2 = *(uint *)(lVar3 + 0x10);
      bVar8 = uVar2 == 0;
      if (bVar8) {
        *(uint *)(lVar3 + 0x10) = uVar6;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar2 = uVar6;
      }
      uVar4 = (ulonglong)uVar2;
    }
  }
  local_48 = (ulonglong)uVar7 | uVar4 << 0x20;
  local_40 = local_38;
  FUN_14354a46e(param_1);
LAB_14354a412:
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14354a46e FUN_14354a46e body=432 status=ok
// SIG undefined FUN_14354a46e(void)

undefined8 * FUN_14354a46e(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  byte local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  if ((((*(longlong *)(param_2 + 2) == 0) || (param_2[1] == 0)) ||
      (uVar1 = *param_2, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14354a5e5;
  plVar5 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (((plVar5 == (longlong *)0x0) || (*(uint *)(plVar5 + 2) != param_2[1])) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (*plVar5 == 0)))) goto LAB_14354a5e5;
  lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_2 + 2),1);
  if (lVar2 == 0) goto LAB_14354a5e5;
  if (param_2[1] == 0) {
LAB_14354a60d:
    uVar3 = 0;
  }
  else {
    uVar1 = *param_2;
    uVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar4 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar4 + 2) != param_2[1] || ((*(uint *)(puVar4 + 1) & 0x10200000) != 0))))
      goto LAB_14354a60d;
      uVar3 = *puVar4;
    }
  }
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,uVar3,1);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar2 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    local_78 = *(undefined8 *)param_2;
    local_70 = *(undefined8 *)(param_2 + 2);
    local_38 = 2;
    FUN_14016fdb0(*puVar4,&local_80,&local_78);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_38])(&local_78);
    *param_1 = local_80;
  }
LAB_14354a5e5:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14354a620 FUN_14354a620 body=492 status=ok
// SIG undefined FUN_14354a620(void)

bool FUN_14354a620(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 2) != 0) && (param_1[1] != 0)) {
    uVar2 = *param_1;
    bVar1 = false;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14354a7da;
    plVar3 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
        ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (*plVar3 != 0)) {
      lVar4 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_1 + 2),1);
      if (lVar4 != 0) {
        if (param_1[1] == 0) {
LAB_14354a7f8:
          uVar5 = 0;
        }
        else {
          uVar2 = *param_1;
          uVar5 = 0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            puVar6 = (undefined8 *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((puVar6 == (undefined8 *)0x0) ||
               ((*(uint *)(puVar6 + 2) != param_1[1] || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))
               )) goto LAB_14354a7f8;
            uVar5 = *puVar6;
          }
        }
        lVar4 = FUN_1402ad3be(DAT_14cb0d2b0,uVar5,1);
        if (lVar4 != 0) {
          if (*(longlong *)(lVar4 + 0x1f0) == 0) {
            plVar3 = (longlong *)(lVar4 + 0x458);
          }
          else {
            plVar3 = (longlong *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
          }
          lVar4 = *plVar3;
          local_30 = *(undefined8 *)param_1;
          local_28 = *(undefined8 *)(param_1 + 2);
          FUN_1437437dc(lVar4,&local_20);
          if (local_20 != 0) {
            uVar2 = (uint)local_20;
            if ((int)(uVar2 & 0xffffff) < *(int *)(lVar4 + 0x10)) {
              lVar7 = lVar4 + 0x18;
              if (*(longlong *)(lVar4 + 0x28) != 0) {
                lVar7 = *(longlong *)(lVar4 + 0x28);
              }
              if ((*(uint *)(lVar7 + (ulonglong)((uVar2 & 0xffffff) >> 5) * 4) >> (uVar2 & 0x1f) & 1
                  ) != 0) {
                lVar4 = *(longlong *)(lVar4 + 8);
                lVar7 = (ulonglong)(uVar2 & 0xffffff) * 0x70;
                bVar1 = (lVar4 + lVar7 != 0 && *(char *)(lVar4 + 1 + lVar7) != '\x04') &&
                        *(longlong *)(lVar4 + 0x60 + lVar7) == local_20;
                goto LAB_14354a7da;
              }
            }
          }
        }
      }
    }
  }
  bVar1 = false;
LAB_14354a7da:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14354a80e FUN_14354a80e body=376 status=ok
// SIG undefined FUN_14354a80e(void)

void FUN_14354a80e(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(longlong *)(param_1 + 2) == 0) || (param_1[1] == 0)) ||
      (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14354a914;
  plVar5 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (((plVar5 == (longlong *)0x0) || (*(uint *)(plVar5 + 2) != param_1[1])) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (*plVar5 == 0)))) goto LAB_14354a914;
  lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_1 + 2),1);
  if (lVar2 == 0) goto LAB_14354a914;
  if (param_1[1] == 0) {
LAB_14354a978:
    uVar3 = 0;
  }
  else {
    uVar1 = *param_1;
    uVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar4 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar4 + 2) != param_1[1] || ((*(uint *)(puVar4 + 1) & 0x10200000) != 0))))
      goto LAB_14354a978;
      uVar3 = *puVar4;
    }
  }
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,uVar3,1);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar2 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    uVar3 = *puVar4;
    local_30 = *(undefined8 *)param_1;
    local_28 = *(undefined8 *)(param_1 + 2);
    FUN_1437437dc(uVar3,&local_20);
    FUN_147d7457e(uVar3,local_20);
  }
LAB_14354a914:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14354a988 FUN_14354a988 body=475 status=ok
// SIG undefined FUN_14354a988(void)

ulonglong FUN_14354a988(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,
                       undefined8 param_4,undefined1 param_5,undefined8 param_6,longlong param_7,
                       undefined1 param_8)

{
  longlong lVar1;
  undefined8 unaff_RBP;
  ulonglong uVar2;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  int *local_128;
  undefined1 *local_120;
  int local_114 [2];
  undefined1 local_109;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_c1;
  undefined1 local_c0 [80];
  longlong local_70;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae7ff0) {
    FUN_144b3d300(&DAT_14cae7ff0);
    if (DAT_14cae7ff0 == -1) {
      FUN_1446f470e(&DAT_14cae7fe8,L"LineTraceMultiForObjects",1);
      _Init_thread_footer(&DAT_14cae7ff0);
    }
  }
  local_148 = (undefined8 *)CONCAT71(local_148._1_7_,param_8);
  local_140 = param_1;
  FUN_14354be4f(local_c0,DAT_14cae7fe8,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff,param_6);
  FUN_14354c173(local_114,param_4);
  if (local_114[0] != 0) {
    lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if (lVar1 != 0) {
      local_e8 = *param_3;
      uStack_e0 = param_3[1];
      local_148 = &local_e8;
      local_d8 = param_3[2];
      local_108 = *param_2;
      uStack_104 = param_2[1];
      uStack_100 = param_2[2];
      uStack_fc = param_2[3];
      local_f8 = *(undefined8 *)(param_2 + 4);
      local_120 = &local_c1;
      local_130 = &DAT_14cad0f10;
      local_140 = CONCAT44(local_140._4_4_,DAT_14cad0ec4);
      local_138 = local_c0;
      local_128 = local_114;
      FUN_1401e2596(lVar1,param_7,&local_109);
      uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),0 < *(int *)(param_7 + 8));
      goto LAB_14354aacf;
    }
  }
  uVar2 = 0;
LAB_14354aacf:
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14354ab64 FUN_14354ab64 body=378 status=ok
// SIG undefined FUN_14354ab64(void)

undefined4
FUN_14354ab64(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  undefined1 auStack_f8 [32];
  int *local_d8;
  undefined1 *local_d0;
  int local_c8 [2];
  undefined1 local_c0 [80];
  longlong local_70;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae7fe0) {
    FUN_144b3d300(&DAT_14cae7fe0);
    if (DAT_14cae7fe0 == -1) {
      FUN_1446f470e(&DAT_14cae7fd8,L"LineTraceSingleForObjects",1);
      _Init_thread_footer(&DAT_14cae7fe0);
    }
  }
  local_d8 = (int *)CONCAT71(local_d8._1_7_,param_8);
  local_d0 = param_1;
  FUN_14354be4f(local_c0,DAT_14cae7fd8,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff,param_6);
  FUN_14354c173(local_c8,param_4);
  if (local_c8[0] != 0) {
    lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if (lVar2 != 0) {
      local_d8 = local_c8;
      local_d0 = local_c0;
      uVar1 = FUN_140526294(lVar2,param_7,param_2,param_3);
      goto LAB_14354ac4a;
    }
  }
  uVar1 = 0;
LAB_14354ac4a:
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14354ace0 FUN_14354ace0 body=1983 status=ok
// SIG undefined FUN_14354ace0(void)

longlong FUN_14354ace0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 *param_7,longlong *param_8,
                      undefined1 param_9,undefined1 param_10,undefined1 param_11)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  code *pcVar10;
  ulonglong uVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 uVar17;
  uint *puVar18;
  longlong lVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  int iVar23;
  undefined1 auStack_148 [32];
  wchar_t *local_128;
  undefined4 local_120;
  undefined8 local_118;
  wchar_t *local_110;
  wchar_t *local_108;
  code *local_100;
  undefined1 *local_f8;
  code **local_f0;
  code *local_e8;
  code *local_e0;
  longlong local_d0;
  uint *local_c8;
  longlong local_c0;
  longlong local_b8 [2];
  code *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  int local_90;
  undefined4 local_8c;
  code *local_88;
  undefined8 uStack_80;
  code *local_70;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1468636b2();
  FUN_1406fa324(param_1,param_2);
  FUN_1406fa324(param_1 + 0x10,param_3);
  FUN_14591fc3c(param_1 + 0x20,param_4);
  *(undefined1 *)(param_1 + 0x140) = param_9;
  *(undefined1 *)(param_1 + 0x141) = param_10;
  *(undefined1 *)(param_1 + 0x142) = param_11;
  plVar1 = (longlong *)(param_1 + 0x40);
  FUN_146863806(plVar1,param_5);
  local_c0 = param_1 + 0xf0;
  local_d0 = param_1;
  FUN_14686385e(local_c0,param_6);
  if ((longlong)*(int *)(param_7 + 1) != 0) {
    plVar20 = (longlong *)*param_7;
    lVar15 = (longlong)*(int *)(param_7 + 1) << 3;
    do {
      uVar22 = 0;
      uVar17 = 0;
      iVar12 = 0;
      uVar13 = 0;
      if (*plVar20 != 0) {
        FUN_1400021e4(plVar20,&local_88);
        pcVar10 = (code *)&DAT_149dfb77a;
        if ((int)uStack_80 != 0) {
          pcVar10 = local_88;
        }
        FUN_140056680(&local_a8,pcVar10);
        if (DAT_14c948f88 == 0) {
          local_68 = (code *)&DAT_1427db2a2;
          lVar16 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c948f88 = lVar16;
          FUN_1446f470e(local_b8,L"Struct",1);
          local_f0 = &local_68;
          local_f8 = &LAB_146891313;
          local_100 = FUN_146272f63;
          local_110 = L"Engine";
          local_108 = (wchar_t *)CONCAT44(local_108._4_4_,199);
          local_118 = 8;
          local_120 = 0x10000020;
          local_128._0_4_ = 8;
          FUN_14574b4b2(lVar16);
          DAT_14c948f88 = lVar16;
          if (DAT_14c927740 == 0) {
            local_98 = FUN_1449e2820;
            local_e0 = FUN_14081d0ea;
            local_e8 = FUN_14081d0ea;
            local_f0 = (code **)&local_98;
            local_f8 = &LAB_146856450;
            local_100 = FUN_1427b121c;
            local_108 = L"Engine";
            local_110 = (wchar_t *)0x0;
            local_118 = CONCAT44(local_118._4_4_,0x10000021);
            local_120 = 8;
            local_128._0_4_ = 0x28;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
          }
          lVar19 = DAT_14c948f88;
          lVar16 = DAT_14c927740;
          uVar6 = FUN_1400163b0();
          local_128 = L"Struct";
          FUN_14574b446(uVar6,lVar19,lVar16,L"/Script/CoreUObject");
        }
        local_128 = L"MakeARFilter should use ClassPaths, ClassNames is deprecated.";
        FUN_146891db8(&local_98,DAT_14c948f88,&local_a8,3);
        uVar13 = local_8c;
        iVar12 = local_90;
        uVar22 = (undefined4)local_98;
        uVar17 = local_98._4_4_;
        if (local_a8 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (local_88 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      iVar4 = *(int *)(local_d0 + 0x48);
      *(uint *)(local_d0 + 0x48) = iVar4 + 1U;
      if (*(uint *)(local_d0 + 0x4c) < iVar4 + 1U) {
        FUN_1401d5364(plVar1,iVar4);
      }
      lVar16 = *plVar1;
      lVar19 = (longlong)iVar4 * 0x10;
      *(undefined4 *)(lVar16 + lVar19) = uVar22;
      *(undefined4 *)(lVar16 + 4 + lVar19) = uVar17;
      *(int *)(lVar16 + 8 + lVar19) = iVar12;
      *(undefined4 *)(lVar16 + 0xc + lVar19) = uVar13;
      plVar20 = plVar20 + 1;
      lVar15 = lVar15 + -8;
    } while (lVar15 != 0);
  }
  puVar18 = (uint *)(param_8 + 2);
  iVar12 = (int)param_8[5];
  if (iVar12 == 0) {
    uVar11 = 1;
    uVar21 = 0;
    iVar23 = 0;
    iVar4 = 0;
  }
  else {
    puVar5 = (uint *)param_8[4];
    if ((uint *)param_8[4] == (uint *)0x0) {
      puVar5 = puVar18;
    }
    uVar14 = *puVar5;
    if (uVar14 == 0) {
      iVar4 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar4 = iVar12 + -1;
      }
      uVar21 = 0;
      uVar11 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar11 = uVar21;
      }
      iVar23 = 0;
      do {
        if (uVar11 == uVar21) goto LAB_14354b0fc;
        iVar23 = iVar23 + 0x20;
        uVar14 = puVar5[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar21 = 0;
      iVar23 = 0;
    }
    uVar11 = (ulonglong)(-uVar14 & uVar14);
    uVar2 = uVar11 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar4 = (iVar23 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar12 <= iVar4) {
      iVar4 = iVar12;
    }
  }
  if (iVar4 != iVar12) {
    uVar14 = 0xffffffff;
    local_c8 = puVar18;
    do {
      local_88 = (code *)0x0;
      uStack_80 = 0;
      if (*(longlong *)(*param_8 + (longlong)iVar4 * 0x10) != 0) {
        FUN_1400021e4(*param_8 + (longlong)iVar4 * 0x10,&local_98);
        pcVar10 = (code *)&DAT_149dfb77a;
        if (local_90 != 0) {
          pcVar10 = local_98;
        }
        FUN_140056680(local_b8,pcVar10);
        if (DAT_14c948f88 == 0) {
          local_70 = (code *)&DAT_1427db2a2;
          lVar15 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c948f88 = lVar15;
          FUN_1446f470e(&local_68,L"Struct",1);
          local_f0 = &local_70;
          local_f8 = &LAB_146891313;
          local_100 = FUN_146272f63;
          local_110 = L"Engine";
          local_108 = (wchar_t *)CONCAT44(local_108._4_4_,199);
          local_118 = 8;
          local_120 = 0x10000020;
          local_128._0_4_ = 8;
          FUN_14574b4b2(lVar15);
          DAT_14c948f88 = lVar15;
          if (DAT_14c927740 == 0) {
            local_a8 = FUN_1449e2820;
            local_e0 = FUN_14081d0ea;
            local_e8 = FUN_14081d0ea;
            local_f0 = &local_a8;
            local_f8 = &LAB_146856450;
            local_100 = FUN_1427b121c;
            local_108 = L"Engine";
            local_110 = (wchar_t *)0x0;
            local_118 = CONCAT44(local_118._4_4_,0x10000021);
            local_120 = 8;
            local_128._0_4_ = 0x28;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
          }
          lVar16 = DAT_14c948f88;
          lVar15 = DAT_14c927740;
          uVar6 = FUN_1400163b0();
          local_128 = L"Struct";
          FUN_14574b446(uVar6,lVar16,lVar15,L"/Script/CoreUObject");
        }
        local_128 = 
        L"MakeARFilter should use RecursiveClassPathsExclusionSet, RecursiveClassesExclusionSet is deprecated."
        ;
        FUN_146891db8(&local_a8,DAT_14c948f88,local_b8,3);
        local_88 = local_a8;
        uStack_80 = CONCAT44(uStack_9c,uStack_a0);
        if (local_b8[0] != 0) {
          FUN_1400020a8();
        }
        puVar18 = local_c8;
        if (local_98 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      FUN_144972254(local_c0,&local_98,&local_88,0);
      uVar14 = uVar14 & ~(uint)uVar11;
      puVar5 = (uint *)param_8[4];
      if ((uint *)param_8[4] == (uint *)0x0) {
        puVar5 = puVar18;
      }
      iVar3 = (int)param_8[5];
      iVar4 = (int)uVar21;
      lVar15 = (longlong)iVar4;
      uVar9 = puVar5[lVar15] & uVar14;
      if (uVar9 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar23 = iVar23 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar4) {
          iVar8 = iVar4;
        }
        if (iVar4 < iVar7) {
          lVar16 = 0;
          do {
            uVar9 = (puVar5 + lVar15 + 1)[lVar16];
            if (uVar9 != 0) {
              uVar21 = (ulonglong)(iVar4 + (int)lVar16 + 1);
              uVar14 = 0xffffffff;
              goto LAB_14354b207;
            }
            iVar23 = iVar23 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar8 - lVar15 != lVar16);
          uVar14 = 0xffffffff;
          iVar4 = iVar8;
        }
        uVar21 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_14354b207:
        uVar11 = (ulonglong)(-uVar9 & uVar9);
        uVar2 = uVar11 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar4 = (iVar23 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar12);
  }
LAB_14354b0fc:
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_d0;
}



// FUNCTION 14354b4a0 FUN_14354b4a0 body=1435 status=ok
// SIG undefined FUN_14354b4a0(void)

bool FUN_14354b4a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
                  longlong param_5,longlong *param_6,longlong *param_7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_188 [32];
  longlong *local_168;
  undefined4 local_160;
  char **local_158;
  undefined1 *local_150;
  wchar_t *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined8 *local_130;
  undefined1 *local_128;
  code *local_120;
  undefined8 local_118;
  undefined8 local_110;
  uint local_100;
  undefined1 local_fc;
  longlong local_f8;
  ulonglong uStack_f0;
  char *local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined2 local_cf;
  undefined1 local_cd;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  *(undefined4 *)(param_7 + 1) = 0;
  local_118 = param_2;
  if (*(int *)((longlong)param_7 + 0xc) != 0) {
    FUN_140337ccc(param_7,0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cae8c28) && (FUN_144b3d300(), DAT_14cae8c28 == -1)) {
    local_e0 = "SphereOverlapComponents";
    local_d8 = CONCAT35(local_d8._5_3_,0x17);
    uVar3 = FUN_14001a6c0(&local_e0,1);
    DAT_14cae8c20 = (char *)(ulonglong)uVar3;
    _Init_thread_footer();
  }
  local_bc = 0;
  local_d8 = 0;
  local_b8 = 0x101;
  local_90 = 0;
  local_88 = 0x800000000;
  local_70 = (undefined1 *)0x0;
  local_68 = 0x400000000;
  local_d0 = 0;
  local_c4 = 0;
  local_e0 = DAT_14cae8c20;
  local_cf = 1;
  local_cd = 0;
  local_c0 = 0;
  local_cc = 0x1000000;
  local_c8 = 1;
  iVar2 = (int)param_6[1];
  if (0 < iVar2) {
    lVar9 = 0;
    do {
      uVar6 = local_68;
      lVar10 = *(longlong *)(*param_6 + lVar9 * 8);
      if (lVar10 != 0) {
        uVar1 = *(undefined4 *)(lVar10 + 0xc);
        lVar10 = (longlong)(int)local_68;
        uVar3 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,uVar3);
        if (local_68._4_4_ < uVar3) {
          FUN_1447de67e(local_80,uVar6 & 0xffffffff);
        }
        puVar5 = local_70;
        if (local_70 == (undefined1 *)0x0) {
          puVar5 = local_80;
        }
        *(undefined4 *)(puVar5 + lVar10 * 4) = uVar1;
        iVar2 = (int)param_6[1];
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar2);
  }
  local_f8 = 0;
  uStack_f0 = 0;
  local_100 = 0;
  local_fc = 0;
  if (0 < (int)param_4[1]) {
    lVar9 = 0;
    do {
      uVar3 = local_100;
      if (DAT_14cacfd48 == (longlong *)0x0) {
        local_110 = FUN_1449e2820;
        local_120 = FUN_14081d0ea;
        local_128 = &LAB_140eca530;
        local_138 = &LAB_1479b02e7;
        local_140 = &LAB_146063820;
        local_148 = L"Engine";
        local_150 = (undefined1 *)0x0;
        local_158 = (char **)CONCAT44(local_158._4_4_,0x10000006);
        local_160 = 8;
        local_168 = (longlong *)CONCAT44(local_168._4_4_,0x170);
        local_130 = &local_110;
        FUN_14081cfa3(L"/Script/Engine",L"CollisionProfile",&DAT_14cacfd48,&DAT_1479b02e6);
      }
      plVar7 = DAT_14cacfd48;
      lVar10 = DAT_14cacfd48[0x22];
      if (lVar10 == 0) {
        (**(code **)(*DAT_14cacfd48 + 1000))(DAT_14cacfd48);
        lVar10 = plVar7[0x22];
      }
      if (DAT_14cacfd78 == '\0') {
        FUN_1416bf7d6(lVar10,0);
        DAT_14cacfd78 = '\x01';
      }
      if ((int)(uint)*(byte *)(*param_4 + lVar9) < *(int *)(lVar10 + 0x158)) {
        uVar4 = *(uint *)(*(longlong *)(lVar10 + 0x150) + (ulonglong)*(byte *)(*param_4 + lVar9) * 4
                         );
      }
      else {
        uVar4 = 0x21;
      }
      local_100 = uVar3 | 1 << (uVar4 & 0x1f);
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < (int)param_4[1]);
  }
  lVar9 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar9 != 0) {
    local_110 = (code *)CONCAT44(param_3,2);
    local_148 = (wchar_t *)&local_100;
    local_150 = &DAT_14cad0f10;
    local_158 = &local_e0;
    local_160 = DAT_14cad0ec4;
    local_168 = &local_f8;
    FUN_14052f4ca(lVar9,&local_110,local_118,&DAT_14c8463d0);
    uVar6 = uStack_f0 & 0xffffffff;
    if (0 < (int)uStack_f0) {
      lVar10 = 0x24;
      lVar9 = 0;
      do {
        if (((((*(int *)(local_f8 + lVar10) != 0) &&
              (uVar3 = *(uint *)(local_f8 + -4 + lVar10), -1 < (int)uVar3)) &&
             ((int)uVar3 < DAT_14c9647dc)) &&
            ((plVar7 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(local_f8 + lVar10))))) &&
           ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
          if (param_5 != 0) {
            if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
              lVar8 = *plVar7;
            }
            else {
              lVar8 = 0;
            }
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(param_5 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                 (longlong)*(int *)(param_5 + 0x38) * 8) != param_5 + 0x30)) goto LAB_14354b950;
          }
          if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
            lVar8 = *plVar7;
          }
          else {
            lVar8 = 0;
          }
          iVar2 = (int)param_7[1];
          *(uint *)(param_7 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_7 + 0xc) < iVar2 + 1U) {
            FUN_140c43e06(param_7,iVar2);
          }
          *(longlong *)(*param_7 + (longlong)iVar2 * 8) = lVar8;
          uVar6 = uStack_f0 & 0xffffffff;
        }
LAB_14354b950:
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 0x48;
      } while (lVar9 < (int)uVar6);
    }
  }
  lVar9 = param_7[1];
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0 < (int)lVar9;
}



// FUNCTION 14354ba3c FUN_14354ba3c body=438 status=ok
// SIG undefined FUN_14354ba3c(void)

undefined4
FUN_14354ba3c(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  int *local_100;
  undefined4 *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_d8 [2];
  undefined1 local_d0 [80];
  longlong local_80;
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae8010) {
    FUN_144b3d300(&DAT_14cae8010);
    if (DAT_14cae8010 == -1) {
      FUN_1446f470e(&DAT_14cae8008,L"SphereTraceMultiForObjects",1);
      _Init_thread_footer(&DAT_14cae8010);
    }
  }
  local_108 = (undefined8 *)CONCAT71(local_108._1_7_,param_9);
  local_100 = param_1;
  FUN_14354be4f(local_d0,DAT_14cae8008,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_6) & 0xffffffff,param_7);
  FUN_14354c173(local_d8,param_5);
  if (local_d8[0] != 0) {
    lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if (lVar2 != 0) {
      local_f8 = &local_e8;
      local_e8 = 2;
      local_108 = &DAT_14c8463d0;
      local_100 = local_d8;
      local_f0 = local_d0;
      local_e4 = param_4;
      uVar1 = FUN_1479b4672(lVar2,param_8,param_2,param_3);
      goto LAB_14354bb0e;
    }
  }
  uVar1 = 0;
LAB_14354bb0e:
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14354bbf4 FUN_14354bbf4 body=438 status=ok
// SIG undefined FUN_14354bbf4(void)

undefined4
FUN_14354bbf4(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  int *local_100;
  undefined4 *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_d8 [2];
  undefined1 local_d0 [80];
  longlong local_80;
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae8000) {
    FUN_144b3d300(&DAT_14cae8000);
    if (DAT_14cae8000 == -1) {
      FUN_1446f470e(&DAT_14cae7ff8,L"SphereTraceSingleForObjects",1);
      _Init_thread_footer(&DAT_14cae8000);
    }
  }
  local_108 = (undefined8 *)CONCAT71(local_108._1_7_,param_9);
  local_100 = param_1;
  FUN_14354be4f(local_d0,DAT_14cae7ff8,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_6) & 0xffffffff,param_7);
  FUN_14354c173(local_d8,param_5);
  if (local_d8[0] != 0) {
    lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if (lVar2 != 0) {
      local_f8 = &local_e8;
      local_e8 = 2;
      local_108 = &DAT_14c8463d0;
      local_100 = local_d8;
      local_f0 = local_d0;
      local_e4 = param_4;
      uVar1 = FUN_1479b44ee(lVar2,param_8,param_2,param_3);
      goto LAB_14354bcc6;
    }
  }
  uVar1 = 0;
LAB_14354bcc6:
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14354bdac FUN_14354bdac body=93 status=ok
// SIG undefined FUN_14354bdac(void)

void FUN_14354bdac(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1468fa302(param_2,local_20);
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14354be0a FUN_14354be0a body=69 status=ok
// SIG undefined FUN_14354be0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14354be0a(void)

{
  _DAT_14cae7f48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014354be4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae7f50,1);
  return;
}



// FUNCTION 14354be4f FUN_14354be4f body=803 status=ok
// SIG undefined FUN_14354be4f(void)

undefined8 *
FUN_14354be4f(undefined8 *param_1,undefined8 param_2,undefined1 param_3,longlong *param_4,
             char param_5,longlong param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 5) = 0x101;
  param_1[10] = 0;
  param_1[0xb] = 0x800000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0x400000000;
  *(undefined1 *)(param_1 + 2) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *param_1 = param_2;
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x1000000;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined1 *)((longlong)param_1 + 0x13) = 1;
  if (DAT_14caf84d0 == (longlong *)0x0) {
    local_70 = &local_50;
    local_50 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = (code *)&LAB_145a62952;
    local_78 = &LAB_147c8cd45;
    local_80 = &LAB_1461468ae;
    local_88 = L"Engine";
    local_90 = 0;
    local_98 = 0x10000006;
    local_a0 = 8;
    local_a8 = 0x218;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
  }
  plVar3 = DAT_14caf84d0;
  lVar6 = DAT_14caf84d0[0x22];
  if (lVar6 == 0) {
    (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
    lVar6 = plVar3[0x22];
  }
  *(byte *)((longlong)param_1 + 0x12) = *(byte *)(lVar6 + 0x14e) ^ 1;
  iVar4 = (int)param_4[1];
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(*param_4 + lVar6 * 8);
      if (lVar2 != 0) {
        uVar1 = *(undefined4 *)(lVar2 + 0xc);
        iVar4 = *(int *)(param_1 + 0xf);
        *(uint *)(param_1 + 0xf) = iVar4 + 1U;
        if (*(uint *)((longlong)param_1 + 0x7c) < iVar4 + 1U) {
          FUN_1447de67e(param_1 + 0xc,iVar4);
        }
        puVar5 = (undefined8 *)param_1[0xe];
        if ((undefined8 *)param_1[0xe] == (undefined8 *)0x0) {
          puVar5 = param_1 + 0xc;
        }
        *(undefined4 *)((longlong)puVar5 + (longlong)iVar4 * 4) = uVar1;
        iVar4 = (int)param_4[1];
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar4);
  }
  if (param_5 == '\x01' && param_6 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_70 = &local_50;
      local_50 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1478c0a72;
      local_80 = &LAB_1417b2375;
      local_88 = L"Engine";
      local_90 = 0x1000000000;
      local_98 = 0x10000004;
      local_a0 = 8;
      local_a8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    iVar4 = *(int *)(DAT_14cac9ca8 + 0x38);
    if ((*(int *)(*(longlong *)(param_6 + 0x10) + 0x38) < iVar4) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(param_6 + 0x10) + 0x30) + (longlong)iVar4 * 8) !=
        DAT_14cac9ca8 + 0x30)) {
      param_6 = *(longlong *)(param_6 + 0x20);
      if (param_6 != 0) {
        do {
          if ((iVar4 <= *(int *)(*(longlong *)(param_6 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_6 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
              DAT_14cac9ca8 + 0x30)) goto LAB_14354bfd6;
          param_6 = *(longlong *)(param_6 + 0x20);
        } while (param_6 != 0);
      }
    }
    else {
LAB_14354bfd6:
      uVar1 = *(undefined4 *)(param_6 + 0xc);
      iVar4 = *(int *)(param_1 + 0xf);
      *(uint *)(param_1 + 0xf) = iVar4 + 1U;
      if (*(uint *)((longlong)param_1 + 0x7c) < iVar4 + 1U) {
        FUN_1447de67e(param_1 + 0xc,iVar4);
      }
      puVar5 = param_1 + 0xc;
      if ((undefined8 *)param_1[0xe] != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)param_1[0xe];
      }
      *(undefined4 *)((longlong)puVar5 + (longlong)iVar4 * 4) = uVar1;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14354c173 FUN_14354c173 body=233 status=ok
// SIG undefined FUN_14354c173(void)

uint * FUN_14354c173(uint *param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = (ulonglong)*(uint *)(param_2 + 1);
  if (*(uint *)(param_2 + 1) == 0) {
    *(undefined1 *)(param_1 + 1) = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    FUN_140907c34(&local_48,0);
    if (0 < (int)param_2[1]) {
      lVar6 = 0;
      do {
        uVar2 = FUN_141302a0a(*(undefined1 *)(*param_2 + lVar6));
        *(undefined1 *)(local_48 + lVar6) = uVar2;
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)param_2[1]);
    }
    *(undefined1 *)(param_1 + 1) = 0;
    if (0 < (int)uStack_40) {
      lVar6 = 0;
      uVar4 = 0;
      do {
        bVar1 = *(byte *)(local_48 + lVar6);
        uVar5 = 1 << (bVar1 & 0x1f);
        puVar3 = (uint *)FUN_140bfa850();
        if ((*puVar3 >> (bVar1 & 0x1f) & 1) == 0) {
          uVar5 = 0;
        }
        uVar4 = uVar4 | uVar5;
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)uStack_40);
    }
  }
  *param_1 = uVar4;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14354c25d FUN_14354c25d body=69 status=ok
// SIG undefined FUN_14354c25d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14354c25d(void)

{
  _DAT_14cae80f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014354c29f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae8100,1);
  return;
}



// FUNCTION 14354c2a2 FUN_14354c2a2 body=69 status=ok
// SIG undefined FUN_14354c2a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14354c2a2(void)

{
  _DAT_14cae8110 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014354c2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae8118,1);
  return;
}



// FUNCTION 14354c2e7 FUN_14354c2e7 body=55 status=ok
// SIG undefined FUN_14354c2e7(void)

void FUN_14354c2e7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cae83f8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cae83f8 = FUN_14171c317(FUN_1463e6399,uVar1,L"EScreenOrientation");
  }
  return;
}



// FUNCTION 14354c31e FUN_14354c31e body=55 status=ok
// SIG undefined FUN_14354c31e(void)

void FUN_14354c31e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cae8410 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cae8410 = FUN_14171c317(FUN_1463e63ca,uVar1,L"EApplicationState");
  }
  return;
}



// FUNCTION 14354c356 FUN_14354c356 body=748 status=ok
// SIG undefined FUN_14354c356(void)

void FUN_14354c356(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_140dafe7a;
      local_50 = 0;
      local_58 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,local_38);
            goto LAB_14354c522;
          }
        }
        _Src = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,local_38,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(local_38,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,local_38,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,local_38,lVar5);
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
      FUN_14002ddda(uVar2,param_2,local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38[0] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_38);
    }
  }
LAB_14354c522:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (DAT_14cae84e8 != (longlong *)0x0) {
    (**(code **)(*DAT_14cae84e8 + 0x30))(DAT_14cae84e8,local_38);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14354c644 FUN_14354c644 body=739 status=ok
// SIG undefined FUN_14354c644(void)

void FUN_14354c644(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *_Src;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_20 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_1c = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
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
            goto LAB_14354c810;
          }
        }
        _Src = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_24) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_24,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_24,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
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
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_24 = (undefined4)uVar2;
      uStack_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
LAB_14354c810:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (DAT_14cae84e8 != (longlong *)0x0) {
    (**(code **)(*DAT_14cae84e8 + 0x28))(DAT_14cae84e8,local_24);
  }
  if ((CONCAT44(uStack_1c,uStack_20) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14354c94c FUN_14354c94c body=1629 status=ok
// SIG undefined FUN_14354c94c(void)

void FUN_14354c94c(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined1 local_31;
  undefined7 uStack_30;
  undefined1 uStack_29;
  
  uStack_30 = (undefined7)(DAT_14c707940 ^ (ulonglong)auStack_88);
  uStack_29 = (undefined1)((DAT_14c707940 ^ (ulonglong)auStack_88) >> 0x38);
  local_31 = 0;
  puVar8 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar2 = *(code **)(*plVar4 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar4 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar4);
          if (cVar6 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_31);
            goto LAB_14354cade;
          }
        }
        puVar10 = (undefined1 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar10 != &local_31) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_31,puVar10,(int)plVar4[6]);
          }
          else {
            memcpy(&local_31,puVar10,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = (undefined4)plVar4[6];
        local_68 = 0;
        FUN_1400746b0(plVar4,&local_31,lVar5,1);
      }
      else {
        (*pcVar2)(plVar4,&local_31,lVar5);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar7;
        puVar7 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar4);
      *puVar8 = puVar3[1];
    }
LAB_14354cade:
    pbVar9 = *(byte **)(param_2 + 0x20);
    puVar10 = *(undefined1 **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_31);
      goto LAB_14354cade;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_31);
      goto LAB_14354cade;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_31);
      goto LAB_14354cade;
    }
    uVar1 = *(undefined8 *)(pbVar9 + 1);
    pbVar9 = pbVar9 + 9;
    *(byte **)(param_2 + 0x20) = pbVar9;
    local_31 = (undefined1)uVar1;
    uStack_30 = (undefined7)((ulonglong)uVar1 >> 8);
    puVar10 = (undefined1 *)0x0;
  }
  puVar12 = &local_31;
  if (puVar10 != (undefined1 *)0x0) {
    puVar12 = puVar10;
  }
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  *puVar8 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar9 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar2 = *(code **)(*plVar4 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar4 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar4);
          if (cVar6 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_48);
            goto LAB_14354cc5f;
          }
        }
        puVar13 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar13 != &uStack_48) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_48,puVar13,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_48,puVar13,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = (undefined4)plVar4[6];
        local_68 = 0;
        FUN_1400746b0(plVar4,&uStack_48,lVar5,1);
      }
      else {
        (*pcVar2)(plVar4,&uStack_48,lVar5);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar7;
        puVar7 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar4);
      *puVar8 = puVar3[1];
    }
LAB_14354cc5f:
    pbVar9 = *(byte **)(param_2 + 0x20);
    puVar13 = *(undefined4 **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_48);
      goto LAB_14354cc5f;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_48);
      goto LAB_14354cc5f;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&uStack_48);
      goto LAB_14354cc5f;
    }
    uVar1 = *(undefined8 *)(pbVar9 + 1);
    pbVar9 = pbVar9 + 9;
    *(byte **)(param_2 + 0x20) = pbVar9;
    uStack_48 = (undefined4)uVar1;
    uStack_44 = (undefined4)((ulonglong)uVar1 >> 0x20);
    puVar13 = (undefined4 *)0x0;
  }
  puVar11 = &uStack_48;
  if (puVar13 != (undefined4 *)0x0) {
    puVar11 = puVar13;
  }
  local_4c = 0;
  *puVar8 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar9 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar2 = *(code **)(*plVar4 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar4 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar4);
          if (cVar6 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_4c);
            goto LAB_14354ce41;
          }
        }
        puVar13 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar13 != &local_4c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_4c,puVar13,(int)plVar4[6]);
          }
          else {
            memcpy(&local_4c,puVar13,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = (undefined4)plVar4[6];
        local_68 = 0;
        FUN_1400746b0(plVar4,&local_4c,lVar5,1);
      }
      else {
        (*pcVar2)(plVar4,&local_4c,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar7 = (undefined8 *)*puVar8;
        puVar8 = puVar7 + 2;
      } while ((longlong *)*puVar7 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar7[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_4c);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_4c);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
      local_4c = (undefined4)uVar1;
      uStack_48 = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_4c);
    }
  }
LAB_14354ce41:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (DAT_14cae84e8 != (longlong *)0x0) {
    puVar13 = &local_4c;
    if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
      puVar13 = *(undefined4 **)(param_2 + 0x38);
    }
    (**(code **)(*DAT_14cae84e8 + 0x20))(DAT_14cae84e8,puVar12,puVar11,puVar13);
  }
  if (CONCAT44(uStack_44,uStack_48) != 0) {
    FUN_1400020a8();
  }
  if ((CONCAT17(uStack_29,uStack_30) ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14354cfaa FUN_14354cfaa body=4357 status=ok
// SIG undefined FUN_14354cfaa(void)

void FUN_14354cfaa(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  byte *pbVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  char cVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  longlong **pplVar11;
  longlong **pplVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  int *_Src;
  longlong **pplVar15;
  undefined1 auStack_e8 [32];
  longlong **local_c8;
  longlong **local_c0;
  longlong *local_b8;
  code *local_b0;
  undefined4 *local_a0;
  longlong local_98 [2];
  longlong *local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined4 local_70;
  longlong *local_68;
  undefined4 local_60;
  int local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uStack_50 = 0;
  uStack_4c = 0;
  plVar1 = (longlong *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar2 = *(byte **)(param_2 + 0x20);
  local_a0 = param_3;
  if (pbVar2 == (byte *)0x0) {
    plVar13 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar13[3];
    if ((*(byte *)((longlong)plVar13 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar13 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar4 = *(code **)(*plVar13 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar13 + 0x88);
        if (pcVar4 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar4)(plVar13);
          if (cVar8 != '\0') {
            (**(code **)(*plVar13 + 0xa0))(plVar13,lVar5,&uStack_50);
            goto LAB_14354d190;
          }
        }
        puVar14 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar13 + 0x44));
        if (puVar14 != &uStack_50) {
          if ((*(byte *)((longlong)plVar13 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar13 + 0x100))(plVar13,&uStack_50,puVar14,(int)plVar13[6]);
          }
          else {
            memcpy(&uStack_50,puVar14,
                   (longlong)(int)plVar13[6] * (longlong)*(int *)((longlong)plVar13 + 0x34));
          }
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_c0 = (longlong **)CONCAT44(local_c0._4_4_,(int)plVar13[6]);
        local_c8 = (longlong **)((ulonglong)local_c8 & 0xffffffff00000000);
        FUN_1400746b0(plVar13,&uStack_50,lVar5,1);
      }
      else {
        (*pcVar4)(plVar13,&uStack_50,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar13);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&uStack_50);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&uStack_50);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      uStack_50 = (undefined4)uVar3;
      uStack_4c = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar4)(uVar3,param_2,&uStack_50);
    }
  }
LAB_14354d190:
  puVar14 = &uStack_50;
  if ((undefined4 *)*plVar1 != (undefined4 *)0x0) {
    puVar14 = (undefined4 *)*plVar1;
  }
  local_54 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_b8 = (longlong *)FUN_1446ddbd2();
      local_b0 = FUN_14067a048;
      local_c0 = (longlong **)0x0;
      local_c8 = (longlong **)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar13 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar13[3];
    if ((*(byte *)((longlong)plVar13 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar13 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar4 = *(code **)(*plVar13 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar13 + 0x88);
        if (pcVar4 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar4)(plVar13);
          if (cVar8 != '\0') {
            (**(code **)(*plVar13 + 0xa0))(plVar13,lVar5,&local_54);
            goto LAB_14354d378;
          }
        }
        _Src = (int *)(lVar5 + *(int *)((longlong)plVar13 + 0x44));
        if (_Src != &local_54) {
          if ((*(byte *)((longlong)plVar13 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar13 + 0x100))(plVar13,&local_54,_Src,(int)plVar13[6]);
          }
          else {
            memcpy(&local_54,_Src,
                   (longlong)(int)plVar13[6] * (longlong)*(int *)((longlong)plVar13 + 0x34));
          }
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_c0 = (longlong **)CONCAT44(local_c0._4_4_,(int)plVar13[6]);
        local_c8 = (longlong **)((ulonglong)local_c8 & 0xffffffff00000000);
        FUN_1400746b0(plVar13,&local_54,lVar5,1);
      }
      else {
        (*pcVar4)(plVar13,&local_54,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar13);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_54);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_54);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      local_54 = (int)uVar3;
      uStack_50 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_54);
    }
  }
LAB_14354d378:
  iVar7 = local_54;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
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
  local_68 = DAT_14c844840;
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
  local_60 = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar13 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar13[3];
    if ((*(byte *)((longlong)plVar13 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar13 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar4 = *(code **)(*plVar13 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar13 + 0x88);
        if (pcVar4 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar4)(plVar13);
          if (cVar8 != '\0') {
            (**(code **)(*plVar13 + 0xa0))(plVar13,lVar5,&local_68);
            goto LAB_14354d58b;
          }
        }
        pplVar15 = (longlong **)(lVar5 + *(int *)((longlong)plVar13 + 0x44));
        if (pplVar15 != &local_68) {
          if ((*(byte *)((longlong)plVar13 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar13 + 0x100))(plVar13,&local_68,pplVar15,(int)plVar13[6]);
          }
          else {
            memcpy(&local_68,pplVar15,
                   (longlong)(int)plVar13[6] * (longlong)*(int *)((longlong)plVar13 + 0x34));
          }
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_c0 = (longlong **)CONCAT44(local_c0._4_4_,(int)plVar13[6]);
        local_c8 = (longlong **)((ulonglong)local_c8 & 0xffffffff00000000);
        FUN_1400746b0(plVar13,&local_68,lVar5,1);
      }
      else {
        (*pcVar4)(plVar13,&local_68,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar13);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_68);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_68);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_68 = *(longlong **)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_68);
    }
  }
LAB_14354d58b:
  pplVar15 = &local_68;
  if ((longlong **)*plVar1 != (longlong **)0x0) {
    pplVar15 = (longlong **)*plVar1;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
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
  local_78 = DAT_14c844840;
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
  local_70 = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar13 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar13[3];
    if ((*(byte *)((longlong)plVar13 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar13 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar4 = *(code **)(*plVar13 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar13 + 0x88);
        if (pcVar4 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar4)(plVar13);
          if (cVar8 != '\0') {
            (**(code **)(*plVar13 + 0xa0))(plVar13,lVar5,&local_78);
            goto LAB_14354d788;
          }
        }
        pplVar11 = (longlong **)(lVar5 + *(int *)((longlong)plVar13 + 0x44));
        if (pplVar11 != &local_78) {
          if ((*(byte *)((longlong)plVar13 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar13 + 0x100))(plVar13,&local_78,pplVar11,(int)plVar13[6]);
          }
          else {
            memcpy(&local_78,pplVar11,
                   (longlong)(int)plVar13[6] * (longlong)*(int *)((longlong)plVar13 + 0x34));
          }
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_c0 = (longlong **)CONCAT44(local_c0._4_4_,(int)plVar13[6]);
        local_c8 = (longlong **)((ulonglong)local_c8 & 0xffffffff00000000);
        FUN_1400746b0(plVar13,&local_78,lVar5,1);
      }
      else {
        (*pcVar4)(plVar13,&local_78,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar13);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_78);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_78);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_78 = *(longlong **)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_78);
    }
  }
LAB_14354d788:
  pplVar11 = &local_78;
  if ((longlong **)*plVar1 != (longlong **)0x0) {
    pplVar11 = (longlong **)*plVar1;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
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
  local_88 = DAT_14c844840;
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
  local_80 = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar13 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar13[3];
    if ((*(byte *)((longlong)plVar13 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar13 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar4 = *(code **)(*plVar13 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar13 + 0x88);
        if (pcVar4 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar4)(plVar13);
          if (cVar8 != '\0') {
            (**(code **)(*plVar13 + 0xa0))(plVar13,lVar5,&local_88);
            goto LAB_14354d982;
          }
        }
        pplVar12 = (longlong **)(lVar5 + *(int *)((longlong)plVar13 + 0x44));
        if (pplVar12 != &local_88) {
          if ((*(byte *)((longlong)plVar13 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar13 + 0x100))(plVar13,&local_88,pplVar12,(int)plVar13[6]);
          }
          else {
            memcpy(&local_88,pplVar12,
                   (longlong)(int)plVar13[6] * (longlong)*(int *)((longlong)plVar13 + 0x34));
          }
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_c0 = (longlong **)CONCAT44(local_c0._4_4_,(int)plVar13[6]);
        local_c8 = (longlong **)((ulonglong)local_c8 & 0xffffffff00000000);
        FUN_1400746b0(plVar13,&local_88,lVar5,1);
      }
      else {
        (*pcVar4)(plVar13,&local_88,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar13);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_88);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_88);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_88 = *(longlong **)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_88);
    }
  }
LAB_14354d982:
  pplVar12 = &local_88;
  if ((longlong **)*plVar1 != (longlong **)0x0) {
    pplVar12 = (longlong **)*plVar1;
  }
  local_98[0] = 0;
  local_98[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_b8 = (longlong *)FUN_1446ddbd2();
      local_b0 = FUN_140dafe7a;
      local_c0 = (longlong **)0x0;
      local_c8 = (longlong **)0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar4 = *(code **)(*plVar1 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar1 + 0x88);
        if (pcVar4 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar4)(plVar1);
          if (cVar8 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar5,local_98);
            goto LAB_14354db48;
          }
        }
        plVar13 = (longlong *)(lVar5 + *(int *)((longlong)plVar1 + 0x44));
        if (plVar13 != local_98) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_98,plVar13,(int)plVar1[6]);
          }
          else {
            memcpy(local_98,plVar13,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_c0 = (longlong **)CONCAT44(local_c0._4_4_,(int)plVar1[6]);
        local_c8 = (longlong **)((ulonglong)local_c8 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,local_98,lVar5,1);
      }
      else {
        (*pcVar4)(plVar1,local_98,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,local_98);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,local_98);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_98[0] = *(longlong *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,local_98);
    }
  }
LAB_14354db48:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (DAT_14cae84e8 == (longlong *)0x0) {
    uVar9 = 0xffffffff;
  }
  else {
    local_b8 = local_98;
    local_c8 = pplVar11;
    local_c0 = pplVar12;
    uVar9 = (**(code **)(*DAT_14cae84e8 + 8))(DAT_14cae84e8,puVar14,iVar7 != 0,pplVar15);
  }
  *local_a0 = uVar9;
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14354e0b0 FUN_14354e0b0 body=1944 status=ok
// SIG undefined FUN_14354e0b0(void)

void FUN_14354e0b0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  char cVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  int *_Src;
  longlong *_Src_00;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  longlong local_58 [2];
  int local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_40 = 0;
  uStack_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
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
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_40);
            goto LAB_14354e26b;
          }
        }
        puVar11 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar11 != &uStack_40) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_40,puVar11,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_40,puVar11,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar4[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&uStack_40,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&uStack_40,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
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
      FUN_14002ddda(uVar2,param_2,&uStack_40);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_40);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_40 = (undefined4)uVar2;
      uStack_3c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_40);
    }
  }
LAB_14354e26b:
  puVar11 = &uStack_40;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar11 = *(undefined4 **)(param_2 + 0x38);
  }
  local_44 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_14067a048;
      local_70 = 0;
      local_78 = 0x28001;
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
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_44);
            goto LAB_14354e430;
          }
        }
        _Src = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_44) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_44,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_44,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar4[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_44,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_44,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
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
      FUN_14002ddda(uVar2,param_2,&local_44);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_44);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_44 = (int)uVar2;
      uStack_40 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_44);
    }
  }
LAB_14354e430:
  iVar7 = local_44;
  local_58[0] = 0;
  local_58[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_140dafe7a;
      local_70 = 0;
      local_78 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
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
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,local_58);
            goto LAB_14354e5ea;
          }
        }
        _Src_00 = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src_00 != local_58) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,local_58,_Src_00,(int)plVar4[6]);
          }
          else {
            memcpy(local_58,_Src_00,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar4[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,local_58,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,local_58,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
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
      FUN_14002ddda(uVar2,param_2,local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_58[0] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_58);
    }
  }
LAB_14354e5ea:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (DAT_14cae84e8 == (longlong *)0x0) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = (**(code **)(*DAT_14cae84e8 + 0x18))(DAT_14cae84e8,puVar11,iVar7 != 0,local_58);
  }
  *param_3 = uVar9;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14354e84a FUN_14354e84a body=1477 status=ok
// SIG undefined FUN_14354e84a(void)

void FUN_14354e84a(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  double dVar7;
  char cVar8;
  undefined8 *puVar9;
  int *_Src;
  longlong *_Src_00;
  undefined1 auVar10 [16];
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 local_70;
  undefined *local_68;
  code *local_60;
  longlong local_58 [3];
  int local_3c;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_3c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_60 = FUN_1405ebbb2;
      local_68 = &DAT_14c9520b8;
      local_70 = 0;
      local_78 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
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
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_3c);
            goto LAB_14354ea1e;
          }
        }
        _Src = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_3c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_3c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_3c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar4[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_3c,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_3c,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
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
      FUN_14002ddda(uVar2,param_2,&local_3c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_3c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_3c = (int)uVar2;
      uStack_38._0_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_3c);
    }
  }
LAB_14354ea1e:
  local_58[0] = 0;
  local_58[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_68 = (undefined *)FUN_1446ddbd2();
      local_60 = FUN_140dafe7a;
      local_70 = 0;
      local_78 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
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
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,local_58);
            goto LAB_14354ebd1;
          }
        }
        _Src_00 = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src_00 != local_58) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,local_58,_Src_00,(int)plVar4[6]);
          }
          else {
            memcpy(local_58,_Src_00,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar4[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,local_58,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,local_58,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
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
      FUN_14002ddda(uVar2,param_2,local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_58[0] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_58);
    }
  }
LAB_14354ebd1:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar7 = (double)local_3c;
  FUN_1402160b8(&uStack_38);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar7 * 10000000.0 + 0.5;
  auVar10 = roundpd(auVar10,auVar10,1);
  uStack_38 = CONCAT44(uStack_38._4_4_,(undefined4)uStack_38) + (longlong)auVar10._0_8_;
  if (DAT_14cae84e8 != (longlong *)0x0) {
    (**(code **)(*DAT_14cae84e8 + 0x18))(DAT_14cae84e8,&uStack_38,1,local_58);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14354ee10 FUN_14354ee10 body=3822 status=ok
// SIG undefined FUN_14354ee10(void)

void FUN_14354ee10(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  byte *pbVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  double dVar7;
  char cVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  int *_Src;
  longlong **pplVar11;
  longlong **pplVar12;
  longlong **pplVar13;
  longlong *plVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_e8 [32];
  longlong **local_c8;
  longlong **local_c0;
  longlong *local_b8;
  code *local_b0;
  longlong local_a8 [3];
  longlong *local_90;
  undefined4 local_88;
  longlong *local_80;
  undefined4 local_78;
  longlong *local_70;
  undefined4 local_68;
  int local_5c;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_5c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_b0 = FUN_1405ebbb2;
      local_b8 = (longlong *)&DAT_14c9520b8;
      local_c0 = (longlong **)0x0;
      local_c8 = (longlong **)0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar4 = *(code **)(*plVar1 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar1 + 0x88);
        if (pcVar4 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar4)(plVar1);
          if (cVar8 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar5,&local_5c);
            goto LAB_14354f014;
          }
        }
        _Src = (int *)(lVar5 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_5c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_5c,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_5c,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_c0 = (longlong **)CONCAT44(local_c0._4_4_,(int)plVar1[6]);
        local_c8 = (longlong **)((ulonglong)local_c8 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_5c,lVar5,1);
      }
      else {
        (*pcVar4)(plVar1,&local_5c,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_5c);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_5c);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      local_5c = (int)uVar3;
      uStack_58._0_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_5c);
    }
  }
LAB_14354f014:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
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
  local_70 = DAT_14c844840;
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
  local_68 = 0;
  plVar1 = (longlong *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar14 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar14[3];
    if ((*(byte *)((longlong)plVar14 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar14 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar4 = *(code **)(*plVar14 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar14 + 0x88);
        if (pcVar4 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar4)(plVar14);
          if (cVar8 != '\0') {
            (**(code **)(*plVar14 + 0xa0))(plVar14,lVar5,&local_70);
            goto LAB_14354f201;
          }
        }
        pplVar11 = (longlong **)(lVar5 + *(int *)((longlong)plVar14 + 0x44));
        if (pplVar11 != &local_70) {
          if ((*(byte *)((longlong)plVar14 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar14 + 0x100))(plVar14,&local_70,pplVar11,(int)plVar14[6]);
          }
          else {
            memcpy(&local_70,pplVar11,
                   (longlong)(int)plVar14[6] * (longlong)*(int *)((longlong)plVar14 + 0x34));
          }
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_c0 = (longlong **)CONCAT44(local_c0._4_4_,(int)plVar14[6]);
        local_c8 = (longlong **)((ulonglong)local_c8 & 0xffffffff00000000);
        FUN_1400746b0(plVar14,&local_70,lVar5,1);
      }
      else {
        (*pcVar4)(plVar14,&local_70,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar14);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_70);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_70);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_70 = *(longlong **)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_70);
    }
  }
LAB_14354f201:
  pplVar11 = &local_70;
  if ((longlong **)*plVar1 != (longlong **)0x0) {
    pplVar11 = (longlong **)*plVar1;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
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
  local_80 = DAT_14c844840;
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
  local_78 = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar14 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar14[3];
    if ((*(byte *)((longlong)plVar14 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar14 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar4 = *(code **)(*plVar14 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar14 + 0x88);
        if (pcVar4 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar4)(plVar14);
          if (cVar8 != '\0') {
            (**(code **)(*plVar14 + 0xa0))(plVar14,lVar5,&local_80);
            goto LAB_14354f3fb;
          }
        }
        pplVar12 = (longlong **)(lVar5 + *(int *)((longlong)plVar14 + 0x44));
        if (pplVar12 != &local_80) {
          if ((*(byte *)((longlong)plVar14 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar14 + 0x100))(plVar14,&local_80,pplVar12,(int)plVar14[6]);
          }
          else {
            memcpy(&local_80,pplVar12,
                   (longlong)(int)plVar14[6] * (longlong)*(int *)((longlong)plVar14 + 0x34));
          }
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_c0 = (longlong **)CONCAT44(local_c0._4_4_,(int)plVar14[6]);
        local_c8 = (longlong **)((ulonglong)local_c8 & 0xffffffff00000000);
        FUN_1400746b0(plVar14,&local_80,lVar5,1);
      }
      else {
        (*pcVar4)(plVar14,&local_80,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar14);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_80);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_80);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_80 = *(longlong **)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_80);
    }
  }
LAB_14354f3fb:
  pplVar12 = &local_80;
  if ((longlong **)*plVar1 != (longlong **)0x0) {
    pplVar12 = (longlong **)*plVar1;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
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
  local_90 = DAT_14c844840;
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
  local_88 = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar14 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar14[3];
    if ((*(byte *)((longlong)plVar14 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar14 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar4 = *(code **)(*plVar14 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar14 + 0x88);
        if (pcVar4 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar4)(plVar14);
          if (cVar8 != '\0') {
            (**(code **)(*plVar14 + 0xa0))(plVar14,lVar5,&local_90);
            goto LAB_14354f5f5;
          }
        }
        pplVar13 = (longlong **)(lVar5 + *(int *)((longlong)plVar14 + 0x44));
        if (pplVar13 != &local_90) {
          if ((*(byte *)((longlong)plVar14 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar14 + 0x100))(plVar14,&local_90,pplVar13,(int)plVar14[6]);
          }
          else {
            memcpy(&local_90,pplVar13,
                   (longlong)(int)plVar14[6] * (longlong)*(int *)((longlong)plVar14 + 0x34));
          }
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_c0 = (longlong **)CONCAT44(local_c0._4_4_,(int)plVar14[6]);
        local_c8 = (longlong **)((ulonglong)local_c8 & 0xffffffff00000000);
        FUN_1400746b0(plVar14,&local_90,lVar5,1);
      }
      else {
        (*pcVar4)(plVar14,&local_90,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar14);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_90);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_90);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_90 = *(longlong **)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_90);
    }
  }
LAB_14354f5f5:
  pplVar13 = &local_90;
  if ((longlong **)*plVar1 != (longlong **)0x0) {
    pplVar13 = (longlong **)*plVar1;
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_b8 = (longlong *)FUN_1446ddbd2();
      local_b0 = FUN_140dafe7a;
      local_c0 = (longlong **)0x0;
      local_c8 = (longlong **)0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar4 = *(code **)(*plVar1 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar1 + 0x88);
        if (pcVar4 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar4)(plVar1);
          if (cVar8 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar5,local_a8);
            goto LAB_14354f7bb;
          }
        }
        plVar14 = (longlong *)(lVar5 + *(int *)((longlong)plVar1 + 0x44));
        if (plVar14 != local_a8) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_a8,plVar14,(int)plVar1[6]);
          }
          else {
            memcpy(local_a8,plVar14,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_c0 = (longlong **)CONCAT44(local_c0._4_4_,(int)plVar1[6]);
        local_c8 = (longlong **)((ulonglong)local_c8 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,local_a8,lVar5,1);
      }
      else {
        (*pcVar4)(plVar1,local_a8,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,local_a8);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,local_a8);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_a8[0] = *(longlong *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,local_a8);
    }
  }
LAB_14354f7bb:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar7 = (double)local_5c;
  FUN_1402160b8(&uStack_58);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar7 * 10000000.0 + 0.5;
  auVar15 = roundpd(auVar15,auVar15,1);
  uStack_58 = CONCAT44(uStack_58._4_4_,(undefined4)uStack_58) + (longlong)auVar15._0_8_;
  if (DAT_14cae84e8 == (longlong *)0x0) {
    uVar9 = 0xffffffff;
  }
  else {
    local_b8 = local_a8;
    local_c8 = pplVar12;
    local_c0 = pplVar13;
    uVar9 = (**(code **)(*DAT_14cae84e8 + 8))(DAT_14cae84e8,&uStack_58,1,pplVar11);
  }
  *param_3 = uVar9;
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_90 != (longlong *)0x0) {
    (**(code **)(*local_90 + 0x10))();
  }
  if (local_80 != (longlong *)0x0) {
    (**(code **)(*local_80 + 0x10))();
  }
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x10))();
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14354fd0e FUN_14354fd0e body=55 status=ok
// SIG undefined FUN_14354fd0e(void)

void FUN_14354fd0e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cae8890 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cae8890 = FUN_14171c317(FUN_1463e6d47,uVar1,L"EImportanceWeight");
  }
  return;
}



// FUNCTION 14354fd45 FUN_14354fd45 body=49 status=ok
// SIG undefined FUN_14354fd45(void)

void FUN_14354fd45(void)

{
  FUN_144760e21(DAT_14cae8d10,DAT_14cae8d18);
  if (DAT_14cae8d10 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14354fd76 FUN_14354fd76 body=69 status=ok
// SIG undefined FUN_14354fd76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14354fd76(void)

{
  _DAT_14cae8950 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014354fdb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae8958,1);
  return;
}



// FUNCTION 14354fdbc FUN_14354fdbc body=1076 status=ok
// SIG undefined FUN_14354fdbc(void)

void FUN_14354fdbc(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 *puVar12;
  int *piVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStack_138 [36];
  int local_114;
  undefined8 local_110;
  ulonglong local_108;
  undefined1 local_100 [80];
  undefined1 *local_b0;
  undefined8 local_a8;
  char local_a0;
  undefined4 local_9c;
  uint local_98 [16];
  uint *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar10 = 0;
  local_58 = (uint *)0x0;
  local_50 = 0x400000000;
  local_b0 = (undefined1 *)0x0;
  local_a8 = 0x400000000;
  local_a0 = '\0';
  local_9c = param_1;
  iVar16 = (int)param_2[5];
  if (iVar16 == 0) {
    uVar19 = 1;
    iVar15 = 0;
    iVar6 = 0;
  }
  else {
    puVar5 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar5 = (uint *)(param_2 + 2);
    }
    uVar18 = *puVar5;
    if (uVar18 == 0) {
      iVar15 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar15 = iVar16 + -1;
      }
      uVar10 = 0;
      uVar19 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar19 = uVar10;
      }
      iVar15 = 0;
      do {
        if (uVar19 == uVar10) goto LAB_1435500e4;
        iVar15 = iVar15 + 0x20;
        uVar18 = puVar5[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar10 = 0;
      iVar15 = 0;
    }
    uVar19 = (ulonglong)(-uVar18 & uVar18);
    uVar1 = uVar19 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar6 = (iVar15 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar16 <= iVar6) {
      iVar6 = iVar16;
    }
  }
  if (iVar6 < iVar16) {
    uVar18 = 0xffffffff;
    local_110 = param_3;
    do {
      plVar9 = *(longlong **)(*param_2 + 8 + (longlong)iVar6 * 0x18);
      local_a0 = '\0';
      local_114 = iVar15;
      (**(code **)(*plVar9 + 8))(plVar9,local_100);
      uVar1 = local_50;
      if (local_a0 == '\x01') {
        lVar14 = *param_2;
        lVar17 = (longlong)(int)local_50;
        uVar4 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar4);
        local_108 = uVar10;
        if (local_50._4_4_ < uVar4) {
          FUN_145c6ea4e(local_98,uVar1 & 0xffffffff);
        }
        puVar5 = local_58;
        if (local_58 == (uint *)0x0) {
          puVar5 = local_98;
        }
        puVar5[lVar17 * 4] = *(uint *)((longlong)iVar6 * 0x18 + lVar14);
        *(longlong **)(puVar5 + lVar17 * 4 + 2) = plVar9;
        uVar10 = local_108;
      }
      uVar3 = local_110;
      uVar18 = uVar18 & ~(uint)uVar19;
      puVar5 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar5 = (uint *)(param_2 + 2);
      }
      iVar16 = (int)param_2[5];
      iVar6 = (int)uVar10;
      lVar14 = (longlong)iVar6;
      uVar4 = puVar5[lVar14] & uVar18;
      iVar15 = local_114;
      if (uVar4 == 0) {
        iVar7 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar7 = iVar16 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar6) {
          iVar8 = iVar6;
        }
        if (iVar7 <= iVar6) break;
        lVar17 = 0;
        while( true ) {
          iVar15 = iVar15 + 0x20;
          uVar4 = puVar5[lVar14 + lVar17 + 1];
          if (uVar4 != 0) break;
          lVar17 = lVar17 + 1;
          if (iVar8 - lVar14 == lVar17) goto LAB_143550004;
        }
        uVar10 = (ulonglong)(iVar6 + (int)lVar17 + 1);
        uVar18 = 0xffffffff;
      }
      uVar19 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar19 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar6 = (iVar15 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar16);
LAB_143550004:
    puVar5 = local_98;
    if (local_58 != (uint *)0x0) {
      puVar5 = local_58;
    }
    if ((longlong)(int)local_50 != 0) {
      puVar11 = puVar5 + (longlong)(int)local_50 * 4;
      do {
        puVar2 = *(undefined8 **)(puVar5 + 2);
        if ((int)param_2[9] != 0) {
          uVar18 = *puVar5;
          lVar14 = *param_2;
          plVar9 = (longlong *)param_2[8];
          if ((longlong *)param_2[8] == (longlong *)0x0) {
            plVar9 = param_2 + 7;
          }
          iVar16 = *(int *)((longlong)plVar9 + (longlong)(int)((int)param_2[9] - 1U & uVar18) * 4);
          while (iVar15 = iVar16, iVar15 != -1) {
            iVar16 = *(int *)(lVar14 + 0x10 + (longlong)iVar15 * 0x18);
            if (*(uint *)(lVar14 + (longlong)iVar15 * 0x18) == uVar18) {
              do {
                if (*(undefined8 **)(lVar14 + 8 + (longlong)iVar15 * 0x18) == puVar2) {
                  FUN_143555112(param_2);
                  lVar14 = *param_2;
                }
                do {
                  iVar15 = iVar16;
                  if (iVar15 == -1) goto LAB_1435500a9;
                  iVar16 = *(int *)(lVar14 + 0x10 + (longlong)iVar15 * 0x18);
                } while (*(uint *)(lVar14 + (longlong)iVar15 * 0x18) != uVar18);
              } while( true );
            }
          }
        }
LAB_1435500a9:
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        puVar5 = puVar5 + 4;
      } while (puVar5 != puVar11);
      if (0 < (int)local_50) {
        FUN_140b13540(&DAT_14cae8d10,uVar3,0);
      }
    }
  }
LAB_1435500e4:
  puVar12 = local_b0;
  if (local_b0 == (undefined1 *)0x0) {
    puVar12 = local_100;
  }
  if ((longlong)(int)local_a8 != 0) {
    piVar13 = (int *)(puVar12 + 8);
    lVar14 = (longlong)(int)local_a8 * 0x14;
    do {
      if ((((((*piVar13 != -1) && (piVar13[2] != 0)) && (uVar18 = piVar13[1], -1 < (int)uVar18)) &&
           (((int)uVar18 < DAT_14c9647dc &&
            (plVar9 = (longlong *)
                      ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
            plVar9 != (longlong *)0x0)))) &&
          (((int)plVar9[2] == piVar13[2] &&
           (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 &&
            (plVar9 = (longlong *)*plVar9, plVar9 != (longlong *)0x0)))))) &&
         (lVar17 = FUN_1400796d0(plVar9[2],*(undefined8 *)(piVar13 + -2),1), lVar17 != 0)) {
        (**(code **)(*plVar9 + 0x248))(plVar9,lVar17,piVar13);
      }
      piVar13 = piVar13 + 5;
      lVar14 = lVar14 + -0x14;
    } while (lVar14 != 0);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435501f1 FUN_1435501f1 body=69 status=ok
// SIG undefined FUN_1435501f1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435501f1(void)

{
  _DAT_14cae8990 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143550233. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae8998,1);
  return;
}



// FUNCTION 143550236 FUN_143550236 body=69 status=ok
// SIG undefined FUN_143550236(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143550236(void)

{
  _DAT_14cae89a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143550278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae89b0,1);
  return;
}



// FUNCTION 14355027b FUN_14355027b body=69 status=ok
// SIG undefined FUN_14355027b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14355027b(void)

{
  _DAT_14cae89c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435502bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae89c8,1);
  return;
}



// FUNCTION 1435502c0 FUN_1435502c0 body=69 status=ok
// SIG undefined FUN_1435502c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435502c0(void)

{
  _DAT_14cae89d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143550302. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae89e0,1);
  return;
}



// FUNCTION 143550305 FUN_143550305 body=69 status=ok
// SIG undefined FUN_143550305(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143550305(void)

{
  _DAT_14cae89f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143550347. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae89f8,1);
  return;
}



// FUNCTION 14355034a FUN_14355034a body=69 status=ok
// SIG undefined FUN_14355034a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14355034a(void)

{
  _DAT_14cae8a08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014355038c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae8a10,1);
  return;
}



// FUNCTION 14355038f FUN_14355038f body=69 status=ok
// SIG undefined FUN_14355038f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14355038f(void)

{
  _DAT_14cae8a20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435503d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae8a28,1);
  return;
}



// FUNCTION 1435503d4 FUN_1435503d4 body=69 status=ok
// SIG undefined FUN_1435503d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435503d4(void)

{
  _DAT_14cae8a38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143550416. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae8a40,1);
  return;
}



// FUNCTION 143550419 FUN_143550419 body=69 status=ok
// SIG undefined FUN_143550419(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143550419(void)

{
  _DAT_14cae8a50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014355045b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae8a58,1);
  return;
}



// FUNCTION 14355045e FUN_14355045e body=28 status=ok
// SIG undefined FUN_14355045e(void)

void FUN_14355045e(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = &PTR_FUN_14a9ad940;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_3;
  return;
}



// FUNCTION 14355047a FUN_14355047a body=195 status=ok
// SIG undefined FUN_14355047a(void)

void FUN_14355047a(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = *DAT_14cae8a18;
  param_1[2] = *DAT_14cae8a48;
  param_1[3] = *DAT_14cae8a60;
  if (0.0 < fVar4 / 100.0) {
    *param_1 = 0;
    param_1[1] = (int)(fVar4 / 100.0);
    param_1[4] = *DAT_14cae8a30;
    return;
  }
  fVar4 = *DAT_14cae89a0;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  param_1[1] = (int)(fVar4 / 100.0);
  switch(param_2) {
  case 1:
    piVar2 = DAT_14cae89b8;
    break;
  case 2:
    piVar2 = DAT_14cae89d0;
    break;
  case 3:
    piVar2 = DAT_14cae89e8;
    break;
  case 4:
    piVar2 = DAT_14cae8a00;
    break;
  default:
    goto switchD_143550502_default;
  }
  iVar3 = 2;
  if (*piVar2 < 2) {
    iVar3 = *piVar2;
  }
  iVar1 = 0;
  if (0 < iVar3) {
    iVar1 = iVar3;
  }
  *param_1 = iVar1;
switchD_143550502_default:
  return;
}



// FUNCTION 14355053e FUN_14355053e body=973 status=ok
// SIG undefined FUN_14355053e(void)

undefined8 FUN_14355053e(int *param_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 extraout_XMM0_Db;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  iVar2 = 1;
  if (1 < param_1[6]) {
    iVar2 = param_1[6];
  }
  fVar9 = (float)iVar2 * (float)param_1[7] * (float)param_1[7];
  if ((char)param_1[5] == '\x01') {
    if (*param_1 == 2) {
      uVar8 = 0;
      fVar5 = 1.0 / (float)param_1[8];
      goto LAB_143550598;
    }
    if (*param_1 == 1) {
      if (DAT_14cae8a74 == '\0') {
        cVar1 = FUN_14153841e(DAT_14c872ce0,L"Rendering.AutoScreenPercentage",
                              L"MinDisplayResolution",&DAT_14cae8a78,&DAT_14c872ce8);
        if ((((cVar1 == '\0') ||
             (cVar1 = FUN_14153841e(DAT_14c872ce0,L"Rendering.AutoScreenPercentage",
                                    L"MidDisplayResolution",&DAT_14cae8a80,&DAT_14c872ce8),
             cVar1 == '\0')) ||
            (cVar1 = FUN_14153841e(DAT_14c872ce0,L"Rendering.AutoScreenPercentage",
                                   L"MaxDisplayResolution",&DAT_14cae8a88,&DAT_14c872ce8),
            cVar1 == '\0')) ||
           (((cVar1 = FUN_14153841e(DAT_14c872ce0,L"Rendering.AutoScreenPercentage",
                                    L"MinRenderingResolution",&DAT_14cae8a7c,&DAT_14c872ce8),
             cVar1 == '\0' ||
             (cVar1 = FUN_14153841e(DAT_14c872ce0,L"Rendering.AutoScreenPercentage",
                                    L"MidRenderingResolution",&DAT_14cae8a84,&DAT_14c872ce8),
             cVar1 == '\0')) ||
            (cVar1 = FUN_14153841e(DAT_14c872ce0,L"Rendering.AutoScreenPercentage",
                                   L"MaxRenderingResolution",&DAT_14cae8a8c,&DAT_14c872ce8),
            cVar1 == '\0')))) {
          FUN_140033559(".\\Runtime/Engine/Private/LegacyScreenPercentageDriver.cpp",0x17d,
                        L"Failed to load Rendering.AutoScreenPercentage ini section.");
        }
        DAT_14cae8a74 = '\x01';
      }
      fVar5 = ABS(DAT_14cae8a78) * DAT_14cae8a78 * 1.7777778;
      if (fVar5 <= fVar9) {
        fVar3 = ABS(DAT_14cae8a88) * DAT_14cae8a88 * 1.7777778;
        if (fVar9 <= fVar3) {
          fVar7 = ABS(DAT_14cae8a80) * DAT_14cae8a80 * 1.7777778;
          fVar6 = ABS(DAT_14cae8a84) * DAT_14cae8a84 * 1.7777778;
          if (fVar9 <= fVar7) {
            fVar3 = ABS(DAT_14cae8a7c) * DAT_14cae8a7c * 1.7777778;
            fVar4 = fVar6;
          }
          else {
            fVar4 = ABS(DAT_14cae8a8c) * DAT_14cae8a8c * 1.7777778;
            fVar5 = fVar7;
            fVar7 = fVar3;
            fVar3 = fVar6;
          }
          fVar5 = (fVar9 - fVar5) / (fVar7 - fVar5);
          if (1.0 <= fVar5) {
            fVar5 = 1.0;
          }
          if (fVar5 <= 0.0) {
            fVar5 = 0.0;
          }
          fVar5 = (fVar4 - fVar3) * fVar5 + fVar3;
        }
        else {
          fVar5 = (ABS(DAT_14cae8a8c) * DAT_14cae8a8c * 1.7777778 * fVar9) / fVar3;
        }
      }
      else {
        fVar5 = (ABS(DAT_14cae8a7c) * DAT_14cae8a7c * 1.7777778 * fVar9) / fVar5;
      }
      fVar5 = (fVar5 * (float)param_1[4]) / fVar9;
      if (fVar5 < 0.0) {
        fVar5 = sqrtf(fVar5);
        uVar8 = extraout_XMM0_Db;
      }
      else {
        uVar8 = 0;
        fVar5 = SQRT(fVar5);
      }
      goto LAB_143550598;
    }
  }
  fVar5 = (float)param_1[1];
  uVar8 = 0;
LAB_143550598:
  fVar3 = ABS((float)param_1[3]) * (float)param_1[3] * 1.7777778;
  if (0.0 < fVar3) {
    fVar3 = fVar3 / fVar9;
    if (fVar3 < 0.0) {
      fVar3 = sqrtf(fVar3);
    }
    else {
      fVar3 = SQRT(fVar3);
    }
    if (fVar3 <= fVar5) {
      fVar5 = fVar3;
    }
  }
  fVar3 = ABS((float)param_1[2]) * (float)param_1[2] * 1.7777778;
  if (0.0 < fVar3) {
    fVar3 = fVar3 / fVar9;
    if (fVar3 < 0.0) {
      fVar3 = sqrtf(fVar3);
    }
    else {
      fVar3 = SQRT(fVar3);
    }
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
    if (fVar5 <= fVar3) {
      fVar5 = fVar3;
    }
  }
  return CONCAT44(uVar8,fVar5);
}



// FUNCTION 14355095f FUN_14355095f body=227 status=ok
// SIG undefined FUN_14355095f(void)

longlong FUN_14355095f(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  code *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cae8b20 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_14355090c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147b8e16d;
    local_40 = &LAB_140810a38;
    local_48 = L"Engine";
    local_50 = 0x800000000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x3f0;
    FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae8b20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143550a44 FUN_143550a44 body=3976 status=ok
// SIG undefined FUN_143550a44(void)

void FUN_143550a44(undefined ***param_1,undefined **param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined ***pppuVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined ***pppuVar13;
  longlong lVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  longlong lVar17;
  undefined1 auStack_308 [32];
  undefined4 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d0;
  wchar_t *local_2c8;
  code *local_2c0;
  undefined1 *local_2b8;
  code **local_2b0;
  code *local_2a8;
  code *local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_26c;
  undefined4 local_264;
  longlong local_258;
  undefined4 local_250;
  code *local_248;
  undefined8 uStack_240;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_21c;
  undefined4 local_214;
  longlong local_208;
  undefined4 local_200;
  undefined **local_1f8;
  undefined8 uStack_1f0;
  undefined ***local_1e8;
  undefined ****ppppuStack_1e0;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  undefined1 uStack_1c0;
  undefined7 local_1bf;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  uint uStack_1b0;
  longlong local_1a8 [2];
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188;
  undefined1 local_180;
  longlong local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_308;
  ppppuStack_1e0 = &local_1e8;
  local_1f8 = &PTR_FUN_149e37810;
  local_1e8 = &local_1f8;
  uStack_1f0 = param_2;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb60);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  if (((ulonglong)param_2[5] & 1) == 0) {
    if (((*(byte *)((longlong)param_2 + 0x29) & 1) != 0) &&
       ((pppuVar10 = param_1, ((ulonglong)param_2[5] & 4) != 0 ||
        ((*(byte *)((longlong)param_2 + 0x2b) & 2) != 0)))) {
LAB_143550b1c:
      pppuVar13 = pppuVar10;
      pppuVar10 = pppuVar13;
      if ((undefined ***)pppuVar13[4] != (undefined ***)0x0) goto code_r0x000143550b2b;
      goto LAB_143550b3c;
    }
  }
  else {
    iVar8 = FUN_1448332aa(param_2,&DAT_149e31250);
    if (iVar8 < 3) {
      local_1f8 = (undefined **)0x0;
      uStack_1f0 = (undefined **)0x0;
      local_1e8 = param_1;
      (**(code **)(*param_2 + 0x150))(param_2);
      FUN_147b94f0e(param_2,&local_1f8);
      uVar12 = (ulonglong)uStack_1f0 & 0xffffffff;
      if ((int)uStack_1f0 < 0) goto LAB_143551761;
      pppuVar10 = param_1 + 0x14;
      if (*(int *)((longlong)param_1 + 0xac) < (int)uStack_1f0) {
        FUN_1409edbf4(pppuVar10);
      }
      ppuVar16 = local_1f8;
      if ((int)uStack_1f0 != 0) {
        lVar17 = (longlong)(int)uStack_1f0;
        lVar14 = 0;
        do {
          puVar5 = *(undefined **)((longlong)ppuVar16 + lVar14);
          if ((puVar5 != (undefined *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
            FUN_1456cec3c(puVar5);
          }
          iVar8 = *(int *)(param_1 + 0x15);
          *(uint *)(param_1 + 0x15) = iVar8 + 1U;
          if (*(uint *)((longlong)param_1 + 0xac) < iVar8 + 1U) {
            FUN_140b51998(pppuVar10,iVar8);
          }
          (*pppuVar10)[iVar8] = puVar5;
          if (DAT_14c950c29 == 1 && puVar5 != (undefined *)0x0) {
            FUN_1456cec3c(puVar5);
          }
          lVar14 = lVar14 + 8;
        } while (lVar17 * 8 != lVar14);
      }
      goto joined_r0x0001435512e7;
    }
  }
  FUN_1409eda50(param_2,param_1 + 0x14);
  goto LAB_143550b72;
code_r0x000143550c92:
  pppuVar10 = (undefined ***)pppuVar13[4];
  if ((*(uint *)(pppuVar13 + 1) >> 0x1c & 1) == 0) goto LAB_143550c83;
  pppuVar10 = (undefined ***)FUN_142840154(pppuVar13);
LAB_143550ca3:
  if (pppuVar10 == (undefined ***)0x0) {
    pppuVar10 = (undefined ***)pppuVar13[4];
    goto LAB_143550c83;
  }
  *(byte *)((longlong)pppuVar10 + 0x2e) = *(byte *)((longlong)pppuVar10 + 0x2e) | 2;
  goto LAB_143550cb2;
code_r0x000143550b2b:
  pppuVar10 = (undefined ***)pppuVar13[4];
  if ((*(uint *)(pppuVar13 + 1) >> 0x1c & 1) == 0) goto LAB_143550b1c;
  pppuVar10 = (undefined ***)FUN_142840154(pppuVar13);
LAB_143550b3c:
  if (pppuVar10 == (undefined ***)0x0) {
    pppuVar10 = (undefined ***)pppuVar13[4];
    goto LAB_143550b1c;
  }
  local_1f8 = (undefined **)0x0;
  uStack_1f0 = (undefined **)0x0;
  uVar12 = (ulonglong)*(uint *)(param_1 + 0x15);
  if ((int)*(uint *)(param_1 + 0x15) < 0) {
LAB_143551761:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar12);
  }
  if (uVar12 != 0) {
    FUN_140c5c1ec(&local_1f8);
    if ((longlong)*(int *)(param_1 + 0x15) != 0) {
      ppuVar16 = param_1[0x14];
      ppuVar15 = ppuVar16 + *(int *)(param_1 + 0x15);
      do {
        puVar5 = *ppuVar16;
        if (puVar5 != (undefined *)0x0) {
          if (DAT_14cae8b20 == 0) {
            local_248 = (code *)&LAB_14355090c;
            local_2a0 = FUN_14081d0ea;
            local_2a8 = FUN_14081d0ea;
            local_2b0 = &local_248;
            local_2b8 = &LAB_147b8e16d;
            local_2c0 = (code *)&LAB_140810a38;
            local_2c8 = L"Engine";
            local_2d0 = 0x800000000;
            local_2d8 = 0x10000000;
            local_2e0 = 8;
            local_2e8 = 0x3f0;
            FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
          }
          lVar14 = DAT_14cae8b20;
          if (DAT_14c951858 == 0) {
            local_248 = FUN_1449e2820;
            local_2a0 = FUN_14081d0ea;
            local_2a8 = FUN_14081d0ea;
            local_2b0 = &local_248;
            local_2b8 = &LAB_1468c5283;
            local_2c0 = FUN_142809da0;
            local_2c8 = L"Engine";
            local_2d0 = 0x400000000;
            local_2d8 = 0x10000000;
            local_2e0 = 8;
            local_2e8 = 0x50;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          }
          pppuVar10 = *(undefined ****)(puVar5 + 0x20);
          if (pppuVar10 == (undefined ***)0x0) {
            pppuVar13 = (undefined ***)0x0;
          }
          else {
            iVar8 = *(int *)(lVar14 + 0x38);
            do {
              if ((*(int *)(pppuVar10[2] + 7) < iVar8) ||
                 (pppuVar13 = pppuVar10,
                 *(longlong *)(pppuVar10[2][6] + (longlong)iVar8 * 8) != lVar14 + 0x30)) {
                pppuVar13 = (undefined ***)0x0;
              }
            } while ((pppuVar13 == (undefined ***)0x0) &&
                    (pppuVar10 = (undefined ***)pppuVar10[4], pppuVar10 != (undefined ***)0x0));
          }
          if ((pppuVar13 == param_1) && ((*(uint *)(puVar5 + 8) & 0x40) == 0)) {
            puVar5 = *ppuVar16;
            lVar14 = (longlong)(int)uStack_1f0;
            uVar9 = (int)uStack_1f0 + 1;
            uStack_1f0 = (undefined **)CONCAT44(uStack_1f0._4_4_,uVar9);
            if (uStack_1f0._4_4_ < uVar9) {
              FUN_1447d05f2(&local_1f8);
            }
            local_1f8[lVar14] = puVar5;
          }
        }
        ppuVar16 = ppuVar16 + 1;
      } while (ppuVar16 != ppuVar15);
    }
  }
  FUN_147b94f0e(param_2,&local_1f8);
joined_r0x0001435512e7:
  if (local_1f8 != (undefined **)0x0) {
    FUN_1400020a8(local_1f8);
  }
LAB_143550b72:
  FUN_1417f6fc7(param_2,param_1 + 7);
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x19);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x1b) << 3,
             (longlong)*(int *)((longlong)param_1 + 0xdc) << 3);
  uVar7 = 0;
  if (((ulonglong)param_2[5] & 1) == 0) {
    uVar7 = *(undefined4 *)(param_1 + 0x1b);
  }
  local_1f8 = (undefined **)CONCAT44(local_1f8._4_4_,uVar7);
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1f8,4);
    }
    else {
      FUN_14572512c(param_2,&local_1f8);
    }
    uVar9 = (uint)local_1f8;
  }
  else {
    uVar9 = *(uint *)*puVar3;
    local_1f8 = (undefined **)CONCAT44(local_1f8._4_4_,uVar9);
    *puVar3 = (ulonglong)puVar1;
  }
  pppuVar10 = param_1 + 0x1a;
  if (uVar9 == 0) {
    if ((((ulonglong)param_2[5] & 1) != 0) &&
       (*(undefined4 *)(param_1 + 0x1b) = 0, *(int *)((longlong)param_1 + 0xdc) != 0)) {
      FUN_1463e7d0c(pppuVar10,0);
    }
  }
  else if ((((int)uVar9 < 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) ||
          ((0x200000 < uVar9 && (*(char *)((longlong)param_2 + 0x2b) < '\0')))) {
    FUN_14572541c(param_2);
  }
  else if (((ulonglong)param_2[5] & 1) == 0) {
    *(uint *)(param_1 + 0x1b) = uVar9;
    lVar14 = 0;
    lVar17 = 0;
    do {
      (**(code **)(*param_2 + 0x138))(param_2,(longlong)param_1[0x1a] + lVar14);
      lVar17 = lVar17 + 1;
      lVar14 = lVar14 + 8;
    } while (lVar17 < *(int *)(param_1 + 0x1b));
  }
  else {
    *(undefined4 *)(param_1 + 0x1b) = 0;
    if (*(uint *)((longlong)param_1 + 0xdc) != uVar9) {
      FUN_1463e7d0c(pppuVar10);
      if ((int)(uint)local_1f8 < 1) goto LAB_143550c12;
    }
    iVar8 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x1b);
      *(uint *)(param_1 + 0x1b) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xdc) < iVar2 + 1U) {
        FUN_147b950a4(pppuVar10,iVar2);
      }
      (*pppuVar10)[iVar2] = (undefined *)0x0;
      (**(code **)(*param_2 + 0x138))(param_2);
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)(uint)local_1f8);
  }
LAB_143550c12:
  if (((*(byte *)((longlong)param_2 + 0x2b) & 0x20) == 0) || (*(int *)(param_2 + 8) < 0x143)) {
    local_1f8 = (undefined **)0x0;
    (**(code **)(*param_2 + 0x150))(param_2);
  }
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x1e);
  if ((((ulonglong)param_2[5] & 1) != 0) &&
     (iVar8 = FUN_1448332aa(param_2,&DAT_149e3cb60), iVar8 < 3)) {
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1f8 = (undefined **)0x0;
    uStack_1f0 = (undefined **)0x0;
    uStack_1cc = 0x80;
    uStack_1c8 = 0xffffffff;
    local_1c4 = 0;
    uStack_1b8 = 0;
    uStack_1b7 = 0;
    uStack_1b0 = 0;
    local_228 = 0;
    local_220 = 0;
    local_248 = (code *)0x0;
    uStack_240 = 0;
    local_21c = 0xffffffff00000080;
    local_214 = 0;
    local_208 = 0;
    local_200 = 0;
    FUN_147b9512a(param_2);
    FUN_147b959b2(param_2,&local_248);
    puVar3 = (ulonglong *)param_2[1];
    if (puVar3[1] < *puVar3 + 4) {
      local_298 = local_298 & 0xffffffff00000000;
      (**(code **)(*param_2 + 0x170))(param_2,&local_298,4);
      if (1 < (uint)local_298) {
        FUN_14572541c(param_2);
      }
    }
    else {
      *puVar3 = *puVar3 + 4;
    }
    if (((ulonglong)param_2[5] & 1) == 0) {
      if (((ulonglong)param_2[5] & 4) != 0) {
        local_298 = (ulonglong)local_298._4_4_ << 0x20;
        puVar3 = (ulonglong *)param_2[1];
        if (puVar3[1] < *puVar3 + 4) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_298,4);
          }
          else {
            FUN_14572512c(param_2,&local_298);
          }
        }
        else {
          *puVar3 = *puVar3 + 4;
        }
      }
    }
    else {
      puVar3 = (ulonglong *)param_2[1];
      puVar4 = (undefined4 *)*puVar3 + 1;
      if ((undefined4 *)puVar3[1] < puVar4) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_298,4);
        }
        else {
          FUN_14572512c(param_2,&local_298);
        }
      }
      else {
        local_298 = CONCAT44(local_298._4_4_,*(undefined4 *)*puVar3);
        *puVar3 = (ulonglong)puVar4;
      }
      lVar14 = (**(code **)(*param_2 + 0x28))(param_2);
      (**(code **)(*param_2 + 0x1a0))(param_2,(local_298 & 0xffffffff) + lVar14);
    }
    if (*(int *)(param_2 + 8) < 0xfb) {
      (**(code **)(*param_2 + 0x150))(param_2,&local_298);
    }
    local_278 = 0;
    local_270 = 0;
    local_298 = 0;
    uStack_290 = 0;
    local_26c = 0xffffffff00000080;
    local_264 = 0;
    local_258 = 0;
    local_250 = 0;
    FUN_147b96244(param_2,&local_298);
    local_250 = 0;
    if (local_258 != 0) {
      FUN_1400020a8();
    }
    FUN_147b913dc(&local_298);
    local_200 = 0;
    if (local_208 != 0) {
      FUN_1400020a8();
    }
    FUN_147b91494(&local_248);
    uStack_1b0 = 0;
    if (CONCAT71(uStack_1b7,uStack_1b8) != 0) {
      FUN_1400020a8();
    }
    FUN_147b91630(&local_1f8);
  }
  if ((((ulonglong)param_1[1] & 0x10) == 0) && ((*(byte *)((longlong)param_2 + 0x29) & 1) != 0)) {
    *(byte *)((longlong)param_2 + 0x29) = *(byte *)((longlong)param_2 + 0x29) | 0x80;
    pppuVar10 = param_1;
LAB_143550c83:
    pppuVar13 = pppuVar10;
    pppuVar10 = pppuVar13;
    if ((undefined ***)pppuVar13[4] != (undefined ***)0x0) goto code_r0x000143550c92;
    goto LAB_143550ca3;
  }
LAB_143550cb2:
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x1f);
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x20);
  if ((((ulonglong)param_2[5] & 1) != 0) &&
     (iVar8 = FUN_1448332aa(param_2,&DAT_149e3cb60), iVar8 < 9)) {
    pppuVar10 = (undefined ***)FUN_14001cc68(0x1a0,0x10);
    FUN_147cab866(pppuVar10);
    FUN_147cab9f8(param_2,pppuVar10);
    local_1f8 = param_1[0x42];
    uStack_1f0 = param_1[0x43];
    local_1e8 = pppuVar10;
    FUN_147b968c6(param_1);
  }
  FUN_14010abd4(param_2,param_1 + 0x2e);
  puVar4 = *(undefined4 **)param_2[1];
  if (*(undefined4 **)((longlong)param_2[1] + 8) < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x30,4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar4 = *(undefined4 **)param_2[1];
  if (*(undefined4 **)((longlong)param_2[1] + 8) < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)((longlong)param_1 + 0x184),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x184) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar4 = *(undefined4 **)param_2[1];
  if (*(undefined4 **)((longlong)param_2[1] + 8) < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x31,4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x31) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar4 = *(undefined4 **)param_2[1];
  if (*(undefined4 **)((longlong)param_2[1] + 8) < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)((longlong)param_1 + 0x18c),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x18c) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x34) * 0x28,
             (longlong)*(int *)((longlong)param_1 + 0x1a4) * 0x28);
  uVar7 = 0;
  if (((ulonglong)param_2[5] & 1) == 0) {
    uVar7 = *(undefined4 *)(param_1 + 0x34);
  }
  local_1f8 = (undefined **)CONCAT44(local_1f8._4_4_,uVar7);
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1f8,4);
    }
    else {
      FUN_14572512c(param_2,&local_1f8);
    }
    uVar9 = (uint)local_1f8;
  }
  else {
    uVar9 = *(uint *)*puVar3;
    local_1f8 = (undefined **)CONCAT44(local_1f8._4_4_,uVar9);
    *puVar3 = (ulonglong)puVar1;
  }
  pppuVar10 = param_1 + 0x33;
  if (uVar9 == 0) {
    if (((ulonglong)param_2[5] & 1) != 0) {
      FUN_1403cd0ec(param_1[0x33],*(undefined4 *)(param_1 + 0x34));
      *(undefined4 *)(param_1 + 0x34) = 0;
      if (*(int *)((longlong)param_1 + 0x1a4) != 0) {
        FUN_147b9461c(pppuVar10,0);
      }
    }
  }
  else if ((((int)uVar9 < 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) ||
          ((0x66666 < uVar9 && (*(char *)((longlong)param_2 + 0x2b) < '\0')))) {
    FUN_14572541c(param_2);
  }
  else if (((ulonglong)param_2[5] & 1) == 0) {
    *(uint *)(param_1 + 0x34) = uVar9;
    lVar14 = 0;
    lVar17 = 0;
    do {
      FUN_147b9468c(param_2,(longlong)param_1[0x33] + lVar14);
      lVar17 = lVar17 + 1;
      lVar14 = lVar14 + 0x28;
    } while (lVar17 < *(int *)(param_1 + 0x34));
  }
  else {
    FUN_147b8e1a4(pppuVar10);
    if (0 < (int)(uint)local_1f8) {
      iVar8 = 0;
      do {
        uVar11 = FUN_147b94700(pppuVar10);
        FUN_147b9468c(param_2,uVar11);
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)(uint)local_1f8);
    }
  }
  puVar4 = *(undefined4 **)param_2[1];
  if (*(undefined4 **)((longlong)param_2[1] + 8) < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x35,4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x35) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_140119d96(param_2,param_1 + 0x36);
  puVar4 = *(undefined4 **)param_2[1];
  if (*(undefined4 **)((longlong)param_2[1] + 8) < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x3d,4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3d) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar4 = *(undefined4 **)param_2[1];
  if (*(undefined4 **)((longlong)param_2[1] + 8) < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)((longlong)param_1 + 0x1ec),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x1ec) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar4 = *(undefined4 **)param_2[1];
  if (*(undefined4 **)((longlong)param_2[1] + 8) < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x3e,4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3e) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_141733a16(param_2,param_1 + 0x3f);
  if (*(int *)(param_2 + 8) - 0xe0U < 0x2c) {
    uStack_1b8 = 0;
    uStack_1b7 = 0;
    uStack_1b0 = uStack_1b0 & 0xffffff00;
    uStack_1c8 = 0;
    local_1c4 = 0;
    uStack_1c0 = 0;
    local_1bf = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    local_1e8 = (undefined ***)0x0;
    ppppuStack_1e0 = (undefined ****)0x0;
    local_1f8 = (undefined **)0x0;
    uStack_1f0 = (undefined **)0x0;
    FUN_140056680(local_1a8,L"Uncategorized");
    local_198 = 0;
    uStack_194 = 0;
    uStack_190 = 0;
    uStack_18c = 50000;
    local_188 = 1;
    local_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    FUN_146875ac2(param_2,&local_1f8);
    if (local_168 != 0) {
      FUN_1400020a8();
    }
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    if (local_1a8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (((ulonglong)param_2[5] & 1) != 0) {
    bVar6 = *(byte *)((longlong)param_1 + 0x242);
    if ((*(byte *)((longlong)param_2 + 0x36) & 0x40) != 0) {
      bVar6 = bVar6 | 4;
      *(byte *)((longlong)param_1 + 0x242) = bVar6;
    }
    if (((bVar6 & 4) != 0) || ((*(byte *)((longlong)param_2 + 0x35) & 0x10) != 0)) {
      *(byte *)((longlong)param_1 + 0x242) = bVar6 | 2;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435519cd FUN_1435519cd body=69 status=ok
// SIG undefined FUN_1435519cd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435519cd(void)

{
  _DAT_14cae8b38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143551a0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae8b40,1);
  return;
}



// FUNCTION 143551a12 FUN_143551a12 body=69 status=ok
// SIG undefined FUN_143551a12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143551a12(void)

{
  _DAT_14cae8b48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143551a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae8b50,1);
  return;
}



// FUNCTION 143551a57 FUN_143551a57 body=69 status=ok
// SIG undefined FUN_143551a57(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143551a57(void)

{
  _DAT_14cae8b58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143551a99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae8b60,1);
  return;
}



// FUNCTION 143551a9c FUN_143551a9c body=69 status=ok
// SIG undefined FUN_143551a9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143551a9c(void)

{
  _DAT_14cae8b68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143551ade. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae8b70,1);
  return;
}



// FUNCTION 143551ae1 FUN_143551ae1 body=69 status=ok
// SIG undefined FUN_143551ae1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143551ae1(void)

{
  _DAT_14cae8b80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143551b23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae8b88,1);
  return;
}



// FUNCTION 143551b26 FUN_143551b26 body=69 status=ok
// SIG undefined FUN_143551b26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143551b26(void)

{
  _DAT_14cae8b98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143551b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae8ba0,1);
  return;
}



// FUNCTION 143551b6b FUN_143551b6b body=69 status=ok
// SIG undefined FUN_143551b6b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143551b6b(void)

{
  _DAT_14cae8ba8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143551bad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae8bb0,1);
  return;
}



// FUNCTION 143551bb0 FUN_143551bb0 body=49 status=ok
// SIG undefined FUN_143551bb0(void)

void FUN_143551bb0(void)

{
  FUN_144760e21(DAT_14cae8bb8,DAT_14cae8bc0);
  if (DAT_14cae8bb8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143551be1 FUN_143551be1 body=41 status=ok
// SIG undefined FUN_143551be1(void)

void FUN_143551be1(void)

{
  DAT_14cae8d08 = 0;
  if (DAT_14cae8d00 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6bf06();
  return;
}



// FUNCTION 143551c0a FUN_143551c0a body=58 status=ok
// SIG undefined FUN_143551c0a(void)

void FUN_143551c0a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
LAB_143551c0f:
  lVar2 = param_1;
  lVar1 = lVar2;
  if (*(longlong *)(lVar2 + 0x20) != 0) goto code_r0x000143551c1e;
  goto LAB_143551c29;
code_r0x000143551c1e:
  param_1 = *(longlong *)(lVar2 + 0x20);
  if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) != 0) {
    lVar1 = FUN_142840154(lVar2);
LAB_143551c29:
    if (lVar1 != 0) {
      return;
    }
    param_1 = *(longlong *)(lVar2 + 0x20);
  }
  goto LAB_143551c0f;
}



// FUNCTION 143551c44 FUN_143551c44 body=226 status=ok
// SIG undefined FUN_143551c44(void)

void FUN_143551c44(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_38 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  local_28.Data1 = 0;
  local_28.Data2 = 0;
  local_28.Data3 = 0;
  local_28.Data4[0] = '\0';
  local_28.Data4[1] = '\0';
  local_28.Data4[2] = '\0';
  local_28.Data4[3] = '\0';
  local_28.Data4[4] = '\0';
  local_28.Data4[5] = '\0';
  local_28.Data4[6] = '\0';
  local_28.Data4[7] = '\0';
  CoCreateGuid(&local_28);
  *(ulong *)(param_1 + 0x210) = local_28.Data1;
  *(undefined4 *)(param_1 + 0x214) = local_28._4_4_;
  *(undefined4 *)(param_1 + 0x218) = local_28.Data4._0_4_;
  *(undefined4 *)(param_1 + 0x21c) = local_28.Data4._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143551d28 FUN_143551d28 body=8 status=ok
// SIG undefined FUN_143551d28(void)

longlong FUN_143551d28(longlong param_1)

{
  return param_1 + 0x3b8;
}



// FUNCTION 143551d30 FUN_143551d30 body=560 status=ok
// SIG undefined FUN_143551d30(void)

void FUN_143551d30(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  void *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar6 = *(int *)(param_1 + 0xa8);
  if (iVar6 == 0) {
LAB_143551f31:
    if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  if (-1 < iVar6) {
    FUN_140c5c1ec(&local_58);
    iVar6 = *(int *)(param_1 + 0xa8);
    if (-1 < iVar6) {
      if ((int)uStack_60._4_4_ < iVar6) {
        FUN_140c5c1ec(&local_68);
      }
      uVar2 = uStack_50;
      lVar8 = *(longlong *)(param_1 + 0x2b0);
      if (lVar8 != 0) {
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447d05f2(&local_58,uVar2 & 0xffffffff);
        }
        *(longlong *)(local_58 + lVar7 * 8) = lVar8;
        if (*(longlong *)(param_1 + 0xc0) != 0) {
          FUN_14081b2ca(*(longlong *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x2b0));
        }
      }
      iVar6 = *(int *)(param_1 + 0xa8);
      if ((longlong)iVar6 != 0) {
        lVar8 = *(longlong *)(param_1 + 0xa0);
        lVar7 = 0;
        do {
          lVar1 = *(longlong *)(lVar8 + lVar7);
          if (((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) &&
             (*(longlong *)(param_1 + 0x2b0) != lVar1)) {
            cVar4 = FUN_140174dd2(lVar1);
            uVar3 = uStack_50;
            uVar2 = uStack_60;
            if (cVar4 == '\0') {
              lVar9 = (longlong)(int)uStack_50;
              uVar5 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
              if (uStack_50._4_4_ < uVar5) {
                FUN_1447d05f2(&local_58,uVar3 & 0xffffffff);
              }
              *(longlong *)(local_58 + lVar9 * 8) = lVar1;
            }
            else {
              lVar9 = (longlong)(int)(uint)uStack_60;
              uVar5 = (uint)uStack_60 + 1;
              uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
              if (uStack_60._4_4_ < uVar5) {
                FUN_1447d05f2(&local_68,uVar2 & 0xffffffff);
              }
              *(longlong *)((longlong)local_68 + lVar9 * 8) = lVar1;
              if (*(longlong *)(param_1 + 0xc0) != 0) {
                FUN_14081b2ca(*(longlong *)(param_1 + 0xc0),lVar1);
              }
            }
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar6 * 8 != lVar7);
      }
      uVar2 = uStack_50;
      lVar8 = (longlong)(int)(uint)uStack_60;
      if (lVar8 != 0) {
        iVar6 = (int)uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uStack_50 = CONCAT44(uStack_50._4_4_,(int)uStack_50 + (uint)uStack_60);
        if (uStack_50._4_4_ - iVar6 < (uint)uStack_60) {
          FUN_1447d05f2(&local_58,uVar2 & 0xffffffff);
        }
        memmove((void *)(lVar7 * 8 + local_58),local_68,lVar8 << 3);
        uStack_60 = uStack_60 & 0xffffffff00000000;
      }
      FUN_1407f1ff6(param_1 + 0xa0,&local_58);
      if (local_68 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      goto LAB_143551f31;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar6);
}



// FUNCTION 143551f62 FUN_143551f62 body=783 status=ok
// SIG undefined FUN_143551f62(void)

void FUN_143551f62(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  undefined *puVar12;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar5 = FUN_1400439fc(param_1,0,&local_21);
  plVar6 = param_1;
  if (cVar5 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
LAB_143551fa6:
  plVar10 = plVar6;
  plVar6 = plVar10;
  if ((longlong *)plVar10[4] != (longlong *)0x0) goto code_r0x000143551fb5;
  goto LAB_143551fc6;
code_r0x000143551fb5:
  plVar6 = (longlong *)plVar10[4];
  if ((*(uint *)(plVar10 + 1) >> 0x1c & 1) == 0) goto LAB_143551fa6;
  plVar6 = (longlong *)FUN_142840154(plVar10);
LAB_143551fc6:
  cVar5 = DAT_14c950c29;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)plVar10[4];
    goto LAB_143551fa6;
  }
  if (DAT_14cae8cc8 != DAT_14cae8cf4) {
    lVar2 = plVar6[3];
    uVar8 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar11 = (uint)lVar2 & 0xffff;
    puVar12 = &DAT_14cae8cf8;
    if (DAT_14cae8d00 != (undefined *)0x0) {
      puVar12 = DAT_14cae8d00;
    }
    iVar1 = *(int *)(puVar12 +
                    (ulonglong)
                    (DAT_14cae8d08 - 1U &
                    (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar11) +
                    (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar11 >> 4)) * 4);
    while (iVar1 != -1) {
      plVar6 = (longlong *)(DAT_14cae8cc0 + (longlong)iVar1 * 0x18);
      if (*plVar6 == lVar2) {
        if ((((plVar6 != (longlong *)0x0) && (uVar3 = plVar6[1], uVar3 >> 0x20 != 0)) &&
            (uVar8 = (uint)uVar3, -1 < (int)uVar8)) &&
           ((((int)uVar8 < DAT_14c9647dc &&
             (plVar6 = (longlong *)
                       ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0xd & 0x3fff8))),
             plVar6 != (longlong *)0x0)) &&
            (((int)plVar6[2] == (int)(uVar3 >> 0x20) && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0))
            )))) {
          lVar2 = *plVar6;
          plVar6 = param_1;
          if (lVar2 == 0 || DAT_14c950c29 != '\x01') {
            param_1[0x18] = lVar2;
            if (lVar2 != 0) goto LAB_143552238;
            goto LAB_1435520fc;
          }
          FUN_1456cec3c(lVar2);
          param_1[0x18] = lVar2;
          goto LAB_143552238;
        }
        break;
      }
      iVar1 = (int)plVar6[2];
    }
  }
  param_1[0x18] = 0;
LAB_1435520fc:
  lVar2 = param_1[4];
  if (cVar5 == '\x01' && lVar2 != 0) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x18] = lVar2;
  goto LAB_143552113;
LAB_143552238:
  plVar10 = plVar6;
  plVar6 = plVar10;
  if ((longlong *)plVar10[4] != (longlong *)0x0) goto code_r0x000143552247;
  goto LAB_143552258;
code_r0x000143552247:
  plVar6 = (longlong *)plVar10[4];
  if ((*(uint *)(plVar10 + 1) >> 0x1c & 1) == 0) goto LAB_143552238;
  plVar6 = (longlong *)FUN_142840154(plVar10);
LAB_143552258:
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)plVar10[4];
    goto LAB_143552238;
  }
  FUN_1406a129a(&DAT_14cae8cc0,plVar6[3]);
LAB_143552113:
  FUN_140b3a57a();
  if (param_1[0x56] != 0) goto LAB_143552181;
  plVar6 = (longlong *)param_1[0x14];
  if (*plVar6 == 0) {
LAB_143552178:
    lVar9 = 0;
  }
  else {
    lVar7 = FUN_14059e8cc();
    lVar2 = *plVar6;
    if (lVar2 == 0) goto LAB_143552178;
    lVar9 = 0;
    if ((lVar7 != 0) && (lVar4 = *(longlong *)(lVar2 + 0x10), lVar4 != 0)) {
      if ((*(int *)(lVar4 + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
          lVar7 + 0x30)) goto LAB_143552178;
      lVar9 = lVar2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
    }
  }
  param_1[0x56] = lVar9;
LAB_143552181:
  if (((param_1[0x19] == 0) || (*(int *)(param_1[0x19] + 0x214) == 0)) &&
     (*(undefined4 *)(param_1 + 0x25) = 0, *(int *)((longlong)param_1 + 300) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143552288 FUN_143552288 body=491 status=ok
// SIG undefined FUN_143552288(void)

ulonglong FUN_143552288(longlong param_1)

{
  ulonglong *puVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = local_38;
  if (((DAT_14c75ece4 != 0) && (DAT_14c761594 != 0)) &&
     (uVar6 = CONCAT71((int7)(local_38 >> 8),*(undefined1 *)(param_1 + 0x242)) & 0xffffffffffffffc0,
     cVar4 = (char)uVar6, uVar6 = CONCAT71((int7)(uVar6 >> 8),-cVar4), SBORROW1('\0',cVar4))) {
    puVar1 = (ulonglong *)(param_1 + 0xb0);
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (*(int *)(param_1 + 0xbc) < 0) {
      uVar6 = FUN_1409edbf4(puVar1,0);
    }
    local_48 = 0;
    uStack_40 = 0;
    if ((longlong)*(int *)(param_1 + 0xa8) < 1) {
      *(byte *)(param_1 + 0x242) = *(byte *)(param_1 + 0x242) | 0x40;
    }
    else {
      uVar7 = (longlong)*(int *)(param_1 + 0xa8) + 1;
      do {
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + -0x10 + uVar7 * 8);
        if (plVar3 == (longlong *)0x0) {
LAB_14355237e:
          iVar2 = *(int *)(param_1 + 0xb8);
          *(uint *)(param_1 + 0xb8) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0xbc) < iVar2 + 1U) {
            FUN_140b51998(puVar1,iVar2);
          }
          uVar6 = *puVar1;
          *(longlong **)(uVar6 + (longlong)iVar2 * 8) = plVar3;
          if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
            uVar6 = FUN_1456cec3c(plVar3);
          }
        }
        else {
          cVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
          uVar6 = uStack_40;
          if (cVar4 == '\0') {
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(plVar3);
            }
            goto LAB_14355237e;
          }
          lVar8 = (longlong)(int)uStack_40;
          uVar5 = (int)uStack_40 + 1;
          uStack_40 = CONCAT44(uStack_40._4_4_,uVar5);
          if (uStack_40._4_4_ < uVar5) {
            FUN_1447d05f2(&local_48,uVar6 & 0xffffffff);
          }
          *(longlong **)(local_48 + lVar8 * 8) = plVar3;
          uVar6 = local_48;
        }
        uVar7 = uVar7 - 1;
      } while (1 < uVar7);
      if ((int)uStack_40 != 0) {
        FUN_1446f470e(&local_50,L"ActorCluster",1);
        lVar8 = FUN_147b8e2b1(param_1,local_50);
        if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar8);
        }
        *(longlong *)(param_1 + 0xe0) = lVar8;
        FUN_147b8e37c(lVar8 + 0x28,&local_48);
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))();
      }
      *(byte *)(param_1 + 0x242) = *(byte *)(param_1 + 0x242) | 0x40;
      if (local_48 != 0) {
        uVar6 = FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143552474 FUN_143552474 body=8 status=ok
// SIG undefined FUN_143552474(void)

undefined8 FUN_143552474(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



// FUNCTION 14355247c FUN_14355247c body=769 status=ok
// SIG undefined FUN_14355247c(void)

void FUN_14355247c(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined1 auStack_2b8 [32];
  undefined2 *local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined2 *local_280;
  undefined2 *local_278;
  ulonglong *local_270;
  char local_268;
  undefined2 local_260 [256];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  cVar3 = *(char *)(param_1 + 0x3c8);
  iVar6 = param_2;
  if (cVar3 == '\0') {
    iVar4 = *(int *)(param_1 + 0x3cc);
    do {
      if (*(int *)(param_1 + 0xa8) <= iVar4) {
        *(undefined4 *)(param_1 + 0x3cc) = 0;
        *(undefined1 *)(param_1 + 0x3c8) = 1;
        iVar4 = 0;
        goto LAB_14355253b;
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar4 * 8);
      if ((plVar1 != (longlong *)0x0) && ((*(byte *)((longlong)plVar1 + 100) & 2) == 0)) {
        (**(code **)(*plVar1 + 0x478))();
        iVar4 = *(int *)(param_1 + 0x3cc);
      }
      iVar4 = iVar4 + 1;
      *(int *)(param_1 + 0x3cc) = iVar4;
    } while ((param_2 < 1) || (iVar6 = iVar6 + -1, iVar6 != 0));
  }
  else if (cVar3 == '\x02') {
LAB_1435526d0:
    if ((((*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x155) & 1) == 0) ||
        (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x30), lVar2 == 0)) ||
       (*(int *)(lVar2 + 0xa8) == 0)) {
LAB_143552741:
      *(undefined1 *)(param_1 + 0x3c8) = 3;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x3cc);
      do {
        if (*(int *)(param_1 + 0xa8) <= iVar4) goto LAB_143552741;
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar4 * 8);
        if ((lVar2 != 0) && (cVar3 = FUN_140940f38(lVar2), cVar3 == '\0')) {
          FUN_1405f107a(lVar2,1);
        }
        iVar4 = *(int *)(param_1 + 0x3cc) + 1;
        *(int *)(param_1 + 0x3cc) = iVar4;
      } while ((param_2 < 1) || (iVar6 = iVar6 + -1, iVar6 != 0));
    }
  }
  else if (cVar3 == '\x01') {
    iVar4 = *(int *)(param_1 + 0x3cc);
LAB_14355253b:
    do {
      if (*(int *)(param_1 + 0xa8) <= iVar4) {
        *(undefined4 *)(param_1 + 0x3cc) = 0;
        *(undefined1 *)(param_1 + 0x3c8) = 2;
        goto LAB_1435526d0;
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar4 * 8);
      if ((plVar1 != (longlong *)0x0) && ((*(byte *)((longlong)plVar1 + 100) & 2) == 0)) {
        FUN_1433b9fd2(plVar1);
        (**(code **)(*plVar1 + 0x480))(plVar1);
        if (((*(byte *)((longlong)plVar1 + 100) & 2) == 0) &&
           ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)) {
          local_298 = (undefined2 *)0x0;
          uStack_290 = 0;
          FUN_14005eb28(&local_298,0x80);
          local_268 = '\0';
          local_270 = local_60;
          local_288 = *(undefined8 *)(plVar1[2] + 0x18);
          local_280 = local_260;
          local_278 = local_260;
          FUN_14005eb5c(&local_288,&local_280);
          if (local_270 <= local_278 + 1) {
            FUN_140213274(&local_280,1);
          }
          *local_278 = 0x20;
          local_278 = local_278 + 1;
          FUN_144750bde(plVar1,0,&local_280);
          FUN_1400020e8(&local_298,local_280,
                        (ulonglong)((longlong)local_278 - (longlong)local_280) >> 1);
          if (local_268 == '\x01') {
            FUN_1400020a8(local_280);
          }
          puVar5 = &DAT_149dfb77a;
          if ((int)uStack_290 != 0) {
            puVar5 = local_298;
          }
          FUN_140033559(".\\Runtime/Engine/Private/Level.cpp",0x1025,
                        L"%s failed to route PostInitializeComponents. Please call Super::PostInitializeComponents() in your <className>::PostInitializeComponents() function."
                        ,puVar5);
          if (local_298 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      iVar4 = *(int *)(param_1 + 0x3cc) + 1;
      *(int *)(param_1 + 0x3cc) = iVar4;
    } while ((param_2 < 1) || (iVar6 = iVar6 + -1, iVar6 != 0));
  }
  if ((local_60[0] ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14355277e FUN_14355277e body=3203 status=ok
// SIG undefined FUN_14355277e(void)

void FUN_14355277e(longlong param_1,double *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  char cVar8;
  ulonglong uVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  double *pdVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  uint *puVar17;
  uint uVar18;
  uint *puVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  undefined1 auStack_e8 [32];
  undefined1 **local_c8;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  longlong local_98 [5];
  ulonglong local_70;
  
  cVar8 = (char)param_3;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar22 = *(longlong *)(param_1 + 0x160);
  if (lVar22 != 0) {
    dVar4 = *param_2;
    dVar5 = param_2[1];
    dVar6 = param_2[2];
    if ((((dVar4 != 0.0) || (NAN(dVar4))) || (dVar5 != 0.0)) ||
       (((NAN(dVar5) || (dVar6 != 0.0)) || (NAN(dVar6))))) {
      if (*(char *)(lVar22 + 8) == '\0') {
        if ((*(byte *)(param_1 + 0x241) & 0x20) != 0) {
          dVar6 = dVar6 - (double)*(int *)(param_1 + 0x230);
          dVar4 = (dVar4 - (double)*(int *)(param_1 + 0x228)) + *(double *)(lVar22 + 0x18);
          dVar5 = dVar5 - (double)*(int *)(param_1 + 0x22c);
          goto LAB_143552884;
        }
      }
      else if (cVar8 == '\0') {
        lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        iVar10 = *(int *)(lVar7 + 0xc60);
        if (DAT_14c86a9fc == 0) {
          if (iVar10 != 2) {
            if (iVar10 != 1) goto LAB_14355283a;
            DVar11 = FUN_140ad26c0();
            DVar12 = GetCurrentThreadId();
            if (DVar11 == DVar12) goto LAB_143552843;
            goto LAB_143552af3;
          }
        }
        else {
LAB_14355283a:
          if (iVar10 != 0x10) {
LAB_143552af3:
            if (DAT_14ca9a438 == '\0') {
              if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar7 + 0xc60), iVar10 == 2))
              goto LAB_143552843;
              if (iVar10 == 1) {
                DVar11 = FUN_140ad26c0();
                DVar12 = GetCurrentThreadId();
                if (DVar11 == DVar12) goto LAB_143552843;
              }
            }
            if (DAT_14ca9a43c == 0) {
              puVar2 = (undefined8 *)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
              puVar17 = (uint *)*puVar2;
              if (puVar17 != (uint *)0x0) goto LAB_143552bd1;
              do {
                uVar18 = *(uint *)(*(longlong *)
                                    ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8
                                    ) + 0x318);
                if ((uVar18 & 1) == 0) {
                  *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318) = uVar18 | 1;
                  __tlregdtor(&LAB_1435546e9);
                }
                lVar7 = *(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                puVar16 = *(undefined4 **)(lVar7 + 0x310);
                *(undefined8 *)(lVar7 + 0x310) = 0;
                if (puVar16 == (undefined4 *)0x0) {
                  puVar16 = _aligned_malloc(0x10000,0x10000);
                }
                *puVar16 = 0xffffffff;
                *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
                puVar16[0x12] = 0;
                *puVar2 = puVar16;
                FUN_140217a48(puVar2);
                puVar17 = (uint *)*puVar2;
LAB_143552bd1:
                uVar20 = *(longlong *)(puVar17 + 0x10) + 7;
                uVar18 = puVar17[0x12];
                while( true ) {
                  puVar21 = (undefined8 *)(uVar20 & 0xfffffffffffffff8);
                  if (puVar21 + 0x19 <= puVar17 + 0x4000) {
                    *(undefined8 **)(puVar17 + 0x10) = puVar21 + 0x19;
                    puVar17[0x12] = uVar18 + 1;
                    iVar10 = 0;
                    FUN_1447247dc(puVar21,0);
                    *puVar21 = &PTR_FUN_14a9b2070;
                    puVar21[0x15] = lVar22;
                    puVar21[0x16] = dVar4;
                    puVar21[0x17] = dVar5;
                    puVar21[0x18] = dVar6;
                    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                      uVar18 = DAT_14c7585c8 >> 10 & 3;
                      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar18 < 2) {
                        uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar18];
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
                                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                   ::
                                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                   ::vftable;
                    puVar21[9] = puVar21;
                    puVar21[10] = puVar21;
                    lVar22 = *(longlong *)
                              (*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x2b8);
                    if (lVar22 == 0) {
                      uVar9 = 1;
                      if ((char)uVar20 != '\x06') {
                        uVar9 = uVar20;
                      }
                      uVar20 = uVar9;
                      uVar15 = 0;
                    }
                    else {
                      if ((char)uVar20 == '\x06') {
                        uVar20 = *(ulonglong *)(lVar22 + 0x38) >> 0x3b;
                      }
                      uVar15 = *(undefined8 *)(lVar22 + 0x30);
                    }
                    puVar21[0xf] = uVar15;
                    puVar21[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
                    *(int *)((longlong)puVar21 + 0x1c) = iVar10;
                    if (puVar21 == (undefined8 *)0x0) {
                      local_b8 = (undefined1 *)CONCAT71(local_b8._1_7_,1);
                      FUN_1447439e4(0);
                    }
                    else {
                      LOCK();
                      *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
                      UNLOCK();
                      local_b8 = (undefined1 *)CONCAT71(local_b8._1_7_,1);
                      FUN_1447439e4(puVar21);
                      LOCK();
                      piVar1 = (int *)(puVar21 + 1);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)*puVar21)(puVar21,1);
                      }
                    }
                    goto LAB_1435528a7;
                  }
                  *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
                  LOCK();
                  uVar3 = *puVar17;
                  *puVar17 = *puVar17 + uVar18 + 1;
                  UNLOCK();
                  if ((uVar3 ^ uVar18) != 0xffffffff) break;
                  puVar17 = (uint *)*puVar2;
                  *puVar17 = 0xffffffff;
                  *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
                  puVar17[0x12] = 0;
                  *puVar2 = puVar17;
                  uVar20 = (longlong)puVar17 + 0x5f;
                  uVar18 = 0;
                }
              } while( true );
            }
            local_b8 = (undefined1 *)0x0;
            local_a8 = (longlong *)FUN_14001cc68(0x28,8);
            *local_a8 = (longlong)&PTR_LAB_14a9b2020;
            local_a8[1] = lVar22;
            local_a8[2] = (longlong)dVar4;
            local_a8[3] = (longlong)dVar5;
            local_a8[4] = (longlong)dVar6;
            if (local_a8 + 1 != (longlong *)0x0) {
              local_b8 = &LAB_1435551d6;
            }
            local_c8 = &local_b8;
            FUN_14005a792(&DAT_14ca9a440,L"ApplyWorldOffset_PLV",&DAT_14cae8cb4);
            if (local_b8 != (undefined1 *)0x0) {
              plVar14 = local_a8;
              if (local_a8 == (longlong *)0x0) {
                plVar14 = local_98;
              }
              (**(code **)(*plVar14 + 0x10))();
            }
            goto LAB_1435528a7;
          }
        }
LAB_143552843:
        dVar4 = dVar4 + *(double *)(lVar22 + 0x18);
LAB_143552884:
        *(double *)(lVar22 + 0x18) = dVar4;
        *(double *)(lVar22 + 0x20) = dVar5 + *(double *)(lVar22 + 0x20);
        *(double *)(lVar22 + 0x28) = dVar6 + *(double *)(lVar22 + 0x28);
      }
    }
  }
LAB_1435528a7:
  lVar22 = *(longlong *)(param_1 + 0x168);
  if (lVar22 == 0) goto LAB_143552991;
  dVar4 = *param_2;
  dVar5 = param_2[1];
  dVar6 = param_2[2];
  if (((((dVar4 == 0.0) && (!NAN(dVar4))) && (dVar5 == 0.0)) && ((!NAN(dVar5) && (dVar6 == 0.0))))
     && (!NAN(dVar6))) goto LAB_143552991;
  if (*(char *)(lVar22 + 8) == '\0') {
    if ((*(byte *)(param_1 + 0x241) & 0x20) == 0) goto LAB_143552991;
    dVar6 = dVar6 - (double)*(int *)(param_1 + 0x230);
    dVar4 = (dVar4 - (double)*(int *)(param_1 + 0x228)) + *(double *)(lVar22 + 0x18);
    dVar5 = dVar5 - (double)*(int *)(param_1 + 0x22c);
  }
  else {
    if (cVar8 != '\0') goto LAB_143552991;
    lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar10 = *(int *)(lVar7 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar10 != 2) {
        if (iVar10 != 1) goto LAB_14355291e;
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        if (DVar11 == DVar12) goto LAB_143552927;
        goto LAB_143552f46;
      }
    }
    else {
LAB_14355291e:
      if (iVar10 != 0x10) {
LAB_143552f46:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar7 + 0xc60), iVar10 == 2))
          goto LAB_143552927;
          if (iVar10 == 1) {
            DVar11 = FUN_140ad26c0();
            DVar12 = GetCurrentThreadId();
            if (DVar11 == DVar12) goto LAB_143552927;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar2 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar17 = (uint *)*puVar2;
          if (puVar17 != (uint *)0x0) goto LAB_143553024;
          while( true ) {
            uVar18 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar18 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar18 | 1;
              __tlregdtor(&LAB_1435546e9);
            }
            lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar16 = *(undefined4 **)(lVar7 + 0x310);
            *(undefined8 *)(lVar7 + 0x310) = 0;
            if (puVar16 == (undefined4 *)0x0) {
              puVar16 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar16 = 0xffffffff;
            *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar2 = puVar16;
            FUN_140217a48(puVar2);
            puVar17 = (uint *)*puVar2;
LAB_143553024:
            puVar21 = (undefined8 *)(*(longlong *)(puVar17 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar19 = (uint *)(puVar21 + 0x19);
            uVar18 = puVar17[0x12];
            if (puVar19 <= puVar17 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
              LOCK();
              uVar3 = *puVar17;
              *puVar17 = *puVar17 + uVar18 + 1;
              UNLOCK();
              if ((uVar3 ^ uVar18) != 0xffffffff) break;
              puVar17 = (uint *)*puVar2;
              *puVar17 = 0xffffffff;
              *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
              puVar17[0x12] = 0;
              *puVar2 = puVar17;
              puVar21 = (undefined8 *)((longlong)puVar17 + 0x5fU & 0xfffffffffffffff8);
              puVar19 = (uint *)(puVar21 + 0x19);
              uVar18 = 0;
              if (puVar19 <= puVar17 + 0x4000) {
                uVar18 = 1;
                goto LAB_1435530a4;
              }
            }
          }
          uVar18 = uVar18 + 1;
LAB_1435530a4:
          *(uint **)(puVar17 + 0x10) = puVar19;
          puVar17[0x12] = uVar18;
          iVar10 = 0;
          FUN_1447247dc(puVar21,0);
          *puVar21 = &PTR_FUN_14a9b20a0;
          puVar21[0x15] = lVar22;
          puVar21[0x16] = dVar4;
          puVar21[0x17] = dVar5;
          puVar21[0x18] = dVar6;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar18 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar18 < 2) {
              uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar18];
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
          lVar22 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar22 == 0) {
            uVar9 = 1;
            if ((char)uVar20 != '\x06') {
              uVar9 = uVar20;
            }
            uVar20 = uVar9;
            uVar15 = 0;
          }
          else {
            if ((char)uVar20 == '\x06') {
              uVar20 = *(ulonglong *)(lVar22 + 0x38) >> 0x3b;
            }
            uVar15 = *(undefined8 *)(lVar22 + 0x30);
          }
          puVar21[0xf] = uVar15;
          puVar21[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar21 + 0x1c) = iVar10;
          if (puVar21 == (undefined8 *)0x0) {
            local_b8 = (undefined1 *)CONCAT71(local_b8._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
            UNLOCK();
            local_b8 = (undefined1 *)CONCAT71(local_b8._1_7_,1);
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
          local_b8 = (undefined1 *)0x0;
          local_a8 = (longlong *)FUN_14001cc68(0x28,8);
          *local_a8 = (longlong)&PTR_LAB_14a9b2080;
          local_a8[1] = lVar22;
          local_a8[2] = (longlong)dVar4;
          local_a8[3] = (longlong)dVar5;
          local_a8[4] = (longlong)dVar6;
          if (local_a8 + 1 != (longlong *)0x0) {
            local_b8 = &LAB_143555410;
          }
          local_c8 = &local_b8;
          FUN_14005a792(&DAT_14ca9a440,L"ApplyWorldOffset_PLV",&DAT_14cae8cb8);
          if (local_b8 != (undefined1 *)0x0) {
            plVar14 = local_a8;
            if (local_a8 == (longlong *)0x0) {
              plVar14 = local_98;
            }
            (**(code **)(*plVar14 + 0x10))();
          }
        }
        goto LAB_143552991;
      }
    }
LAB_143552927:
    dVar4 = dVar4 + *(double *)(lVar22 + 0x18);
  }
  *(double *)(lVar22 + 0x18) = dVar4;
  *(double *)(lVar22 + 0x20) = dVar5 + *(double *)(lVar22 + 0x20);
  *(double *)(lVar22 + 0x28) = dVar6 + *(double *)(lVar22 + 0x28);
LAB_143552991:
  iVar10 = *(int *)(param_1 + 0xa8);
  if (0 < iVar10) {
    lVar22 = 0;
    do {
      plVar14 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + lVar22 * 8);
      if (plVar14 != (longlong *)0x0) {
        if ((cVar8 == '\0') ||
           (pdVar13 = (double *)&DAT_14c8464e0, -1 < *(char *)((longlong)plVar14 + 0x62))) {
          pdVar13 = param_2;
        }
        local_a8 = (longlong *)pdVar13[2];
        local_b8 = (undefined1 *)*pdVar13;
        uStack_b0 = *(undefined4 *)(pdVar13 + 1);
        uStack_ac = *(undefined4 *)((longlong)pdVar13 + 0xc);
        (**(code **)(*plVar14 + 0x3b0))(plVar14,&local_b8,param_3);
        iVar10 = *(int *)(param_1 + 0xa8);
      }
      lVar22 = lVar22 + 1;
    } while (lVar22 < iVar10);
  }
  if (0 < *(int *)(param_1 + 0xd8)) {
    lVar22 = 0;
    do {
      plVar14 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + lVar22 * 8);
      (**(code **)(*plVar14 + 0x458))(plVar14,param_2,param_3);
      lVar22 = lVar22 + 1;
    } while (lVar22 < *(int *)(param_1 + 0xd8));
  }
  if ((((*param_2 != 0.0) || (NAN(*param_2))) || (param_2[1] != 0.0)) ||
     (((NAN(param_2[1]) || (param_2[2] != 0.0)) || (NAN(param_2[2]))))) {
    plVar14 = (longlong *)FUN_140083894();
    (**(code **)(*plVar14 + 0x58))(plVar14,param_1,param_2);
  }
  FUN_147b972c6(param_1,*(undefined8 *)(param_1 + 0xc0),param_2,param_3);
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143553402 FUN_143553402 body=69 status=ok
// SIG undefined FUN_143553402(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143553402(void)

{
  _DAT_14cae8bd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143553444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae8bd8,1);
  return;
}



// FUNCTION 143553447 FUN_143553447 body=69 status=ok
// SIG undefined FUN_143553447(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143553447(void)

{
  _DAT_14cae8be8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143553489. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae8bf0,1);
  return;
}



// FUNCTION 1435534a8 FUN_1435534a8 body=119 status=ok
// SIG undefined FUN_1435534a8(void)

void FUN_1435534a8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  
  fVar7 = *(float *)(param_1 + 8) - *(float *)(param_2 + 100);
  *(float *)(param_1 + 8) = fVar7;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = *(undefined8 *)(param_1 + 0xc);
  *(bool *)(param_2 + 0x60) = fVar7 <= 0.0;
  if (fVar7 <= 0.0) {
    iVar2 = *(int *)(param_2 + 0x58);
    lVar6 = (longlong)iVar2;
    *(uint *)(param_2 + 0x58) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
      FUN_14579eadc(param_2,iVar2);
    }
    lVar5 = *(longlong *)(param_2 + 0x50);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      lVar5 = param_2;
    }
    *(undefined8 *)(lVar5 + lVar6 * 0x14) = uVar4;
    *(undefined4 *)(lVar5 + 8 + lVar6 * 0x14) = uVar1;
    *(undefined8 *)(lVar5 + 0xc + lVar6 * 0x14) = uVar3;
  }
  return;
}



// FUNCTION 143553520 FUN_143553520 body=137 status=ok
// SIG undefined FUN_143553520(void)

void FUN_143553520(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if (DAT_14cae8948 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    uVar6 = *(undefined8 *)(param_1 + 0xc);
    *(undefined1 *)(param_2 + 0x60) = 1;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    uVar6 = *(undefined8 *)(param_1 + 0xc);
    bVar7 = ((uint)DAT_14c872be0 & 1) != (uint)*(byte *)(param_1 + 8);
    *(bool *)(param_2 + 0x60) = bVar7;
    if (!bVar7) {
      return;
    }
  }
  iVar1 = *(int *)(param_2 + 0x58);
  lVar5 = (longlong)iVar1;
  *(uint *)(param_2 + 0x58) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar1 + 1U) {
    FUN_14579eadc(param_2,iVar1);
  }
  lVar2 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar2 = param_2;
  }
  *(undefined8 *)(lVar2 + lVar5 * 0x14) = uVar6;
  *(undefined4 *)(lVar2 + 8 + lVar5 * 0x14) = uVar4;
  *(undefined8 *)(lVar2 + 0xc + lVar5 * 0x14) = uVar3;
  return;
}



// FUNCTION 1435535aa FUN_1435535aa body=38 status=ok
// SIG undefined FUN_1435535aa(void)

undefined8 FUN_1435535aa(undefined8 param_1,int param_2)

{
  FUN_147b8ffd0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435535d0 FUN_1435535d0 body=40 status=ok
// SIG undefined FUN_1435535d0(void)

void FUN_1435535d0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140007850(param_1 + 8);
  FUN_147b8ff5a(param_1 + 0x148,uVar1);
  return;
}



// FUNCTION 1435535f8 FUN_1435535f8 body=38 status=ok
// SIG undefined FUN_1435535f8(void)

undefined8 FUN_1435535f8(undefined8 param_1,int param_2)

{
  FUN_147b8ffd0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14355361e FUN_14355361e body=981 status=ok
// SIG undefined FUN_14355361e(void)

void FUN_14355361e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  wchar_t *local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  longlong local_78;
  code *local_70;
  undefined1 local_68 [8];
  code *local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = FUN_140007850(param_1 + 8);
  if (lVar3 != 0) {
    if (DAT_14c949118 == 0) {
      local_70 = FUN_140631fbe;
      lVar4 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar4;
      FUN_1446f470e(local_68,L"Class",1);
      local_98 = &LAB_146891e90;
      local_a0 = (code *)&LAB_146273097;
      local_b0 = L"Engine";
      local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,199);
      local_b8 = 0x20;
      local_c0 = 0x10000000;
      local_c8._0_4_ = 8;
      local_90 = &local_70;
      FUN_14574b4b2(lVar4);
      DAT_14c949118 = lVar4;
      if (DAT_14c951858 == 0) {
        local_90 = &local_50;
        local_50 = FUN_1449e2820;
        local_80 = FUN_14081d0ea;
        local_88 = FUN_14081d0ea;
        local_98 = &LAB_1468c5283;
        local_a0 = FUN_142809da0;
        local_a8 = L"Engine";
        local_b0 = (wchar_t *)0x400000000;
        local_b8 = CONCAT44(local_b8._4_4_,0x10000000);
        local_c0 = 8;
        local_c8._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar2 = DAT_14c951858;
      lVar4 = DAT_14c949118;
      if (DAT_14c948f88 == 0) {
        local_60 = (code *)&DAT_1427db2a2;
        lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c948f88 = lVar5;
        FUN_1446f470e(local_58,L"Struct",1);
        local_98 = &LAB_146891313;
        local_a0 = FUN_146272f63;
        local_b0 = L"Engine";
        local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,199);
        local_b8 = 8;
        local_c0 = 0x10000020;
        local_c8._0_4_ = 8;
        local_90 = &local_60;
        FUN_14574b4b2(lVar5);
        DAT_14c948f88 = lVar5;
        if (DAT_14c927740 == 0) {
          local_90 = &local_50;
          local_50 = FUN_1449e2820;
          local_80 = FUN_14081d0ea;
          local_88 = FUN_14081d0ea;
          local_98 = &LAB_146856450;
          local_a0 = FUN_1427b121c;
          local_a8 = L"Engine";
          local_b0 = (wchar_t *)0x0;
          local_b8 = CONCAT44(local_b8._4_4_,0x10000021);
          local_c0 = 8;
          local_c8._0_4_ = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        lVar1 = DAT_14c948f88;
        lVar5 = DAT_14c927740;
        uVar6 = FUN_1400163b0();
        local_c8 = L"Struct";
        FUN_14574b446(uVar6,lVar1,lVar5,L"/Script/CoreUObject");
      }
      local_c8 = L"Class";
      FUN_14574b446(DAT_14c948f88,lVar4,lVar2,L"/Script/CoreUObject");
    }
    if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) {
      local_78 = lVar3;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar3);
      }
      goto LAB_14355369f;
    }
  }
  local_78 = 0;
LAB_14355369f:
  FUN_147b90042(param_1 + 0x148,&local_78);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143553a72 FUN_143553a72 body=1231 status=ok
// SIG undefined FUN_143553a72(void)

undefined4 FUN_143553a72(longlong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  int local_7c;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  int local_60;
  int local_5c;
  longlong local_58;
  ulonglong *puStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar11 = *param_2;
  local_7c = 0;
  plVar16 = (longlong *)*param_1;
  if ((int)plVar16[1] != *(int *)((longlong)plVar16 + 0x34)) {
    uVar13 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
    uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
    plVar14 = plVar16 + 7;
    if ((longlong *)plVar16[8] != (longlong *)0x0) {
      plVar14 = (longlong *)plVar16[8];
    }
    iVar6 = *(int *)((longlong)plVar14 +
                    (ulonglong)((int)plVar16[9] - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
    if (iVar6 != -1) {
      do {
        puVar1 = (ulonglong *)(*plVar16 + (longlong)iVar6 * 0x18);
        if (*puVar1 == uVar11) {
          puVar12 = puVar1 + 1;
          if (puVar12 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) goto LAB_143553d74;
          break;
        }
        iVar6 = (int)puVar1[2];
      } while (iVar6 != -1);
    }
  }
  lVar8 = FUN_14059e8cc();
  if ((*(int *)(*(longlong *)(uVar11 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(uVar11 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
      != lVar8 + 0x30)) {
    if (uVar11 == param_1[4]) {
      local_7c = -0x7fffffff;
      iVar6 = -0x7fffffff;
    }
    else {
      lVar8 = FUN_1414cbc9c();
      if ((*(int *)(*(longlong *)(uVar11 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar11 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) {
        iVar6 = 0;
        if ((*(longlong *)(uVar11 + 0x1c8) != 0) &&
           ((lVar8 = *(longlong *)(*(longlong *)(uVar11 + 0x1c8) + 0x120), iVar6 = 0, lVar8 != 0 &&
            (lVar8 = *(longlong *)(lVar8 + 0xa8), lVar8 != 0)))) {
          lVar19 = param_1[1];
          lVar9 = *(longlong *)(lVar19 + 0x50);
          lVar20 = lVar9;
          if (lVar9 == 0) {
            lVar20 = lVar19;
          }
          iVar6 = *(int *)(lVar19 + 0x58);
          lVar21 = (longlong)iVar6;
          if (lVar21 != 0) {
            lVar15 = 0;
            do {
              if (*(longlong *)(lVar20 + lVar15) == lVar8) {
                local_58 = 0;
                puStack_50 = (ulonglong *)0x0;
                lVar8 = 0;
                do {
                  local_68 = *(longlong *)(*(longlong *)(lVar20 + lVar8) + 0x18);
                  FUN_1400021e4(&local_68,&local_78);
                  iVar6 = (int)local_70;
                  iVar7 = ((int)local_70 == 0) + 4;
                  local_68 = local_78;
                  local_78 = 0;
                  local_60 = (int)local_70;
                  iVar4 = local_70._4_4_;
                  local_5c = local_70._4_4_;
                  local_70 = 0;
                  iVar18 = iVar7 + iVar6;
                  if (iVar18 < iVar6) {
                    /* WARNING: Subroutine does not return */
                    FUN_1456afac4(iVar7);
                  }
                  if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_1456afac4(iVar18);
                  }
                  if (iVar4 < iVar18) {
                    FUN_1446f8c06(&local_68);
                  }
                  FUN_1400020e8(&local_68,L" -> ",4);
                  iVar6 = local_60 + -1;
                  if (local_60 == 0) {
                    iVar6 = 0;
                  }
                  FUN_1400020e8(&local_58,local_68,iVar6);
                  if (local_68 != 0) {
                    FUN_1400020a8();
                  }
                  if (local_78 != 0) {
                    FUN_1400020a8();
                  }
                  lVar8 = lVar8 + 8;
                } while (lVar21 * 8 - lVar8 != 0);
                local_78 = *(longlong *)(uVar11 + 0x18);
                FUN_1400021e4(&local_78,&local_68);
                iVar6 = local_60 + -1;
                if (local_60 == 0) {
                  iVar6 = 0;
                }
                FUN_1400020e8(&local_58,local_68,iVar6);
                if (local_68 != 0) {
                  FUN_1400020a8();
                }
                if (local_58 != 0) {
                  FUN_1400020a8();
                }
                iVar6 = 0;
                goto LAB_143553c82;
              }
              lVar15 = lVar15 + 8;
            } while (lVar21 * 8 - lVar15 != 0);
          }
          *(uint *)(lVar19 + 0x58) = iVar6 + 1U;
          if (*(uint *)(lVar19 + 0x5c) < iVar6 + 1U) {
            FUN_147b917cc(lVar19,iVar6);
            lVar9 = *(longlong *)(lVar19 + 0x50);
          }
          if (lVar9 != 0) {
            lVar19 = lVar9;
          }
          *(ulonglong *)(lVar19 + lVar21 * 8) = uVar11;
          cVar5 = FUN_140940f38(lVar8);
          puVar2 = (undefined8 *)param_1[2];
          local_58 = lVar8;
          if (cVar5 == '\0') {
            pcVar3 = (code *)*puVar2;
            plVar16 = puVar2 + 4;
            if ((longlong *)puVar2[2] != (longlong *)0x0) {
              plVar16 = (longlong *)puVar2[2];
            }
            uVar10 = (**(code **)(*plVar16 + 8))();
            iVar6 = (*pcVar3)(uVar10,&local_58);
            iVar6 = iVar6 + 1;
            local_7c = iVar6;
          }
          else {
            pcVar3 = (code *)*puVar2;
            plVar16 = puVar2 + 4;
            if ((longlong *)puVar2[2] != (longlong *)0x0) {
              plVar16 = (longlong *)puVar2[2];
            }
            uVar10 = (**(code **)(*plVar16 + 8))();
            iVar6 = (*pcVar3)(uVar10,&local_58);
            iVar6 = iVar6 + -1;
            local_7c = iVar6;
          }
        }
      }
      else {
        local_7c = -0x7ffffffe;
        iVar6 = -0x7ffffffe;
      }
    }
  }
  else {
    iVar6 = 0;
    if (*(char *)param_1[3] == '\0') {
      local_7c = -0x80000000;
      *(char *)param_1[3] = '\x01';
      iVar6 = -0x80000000;
    }
  }
LAB_143553c82:
  lVar8 = *param_1;
  FUN_143553fd4(lVar8,&local_58);
  puVar1 = puStack_50;
  *puStack_50 = uVar11;
  *(int *)(puStack_50 + 1) = iVar6;
  *(undefined4 *)(puStack_50 + 2) = 0xffffffff;
  local_68 = CONCAT44(local_68._4_4_,(undefined4)local_58);
  uVar13 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
  uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
  uVar13 = uVar13 >> 0x10 ^ uVar13;
  local_88 = 0;
  cVar5 = FUN_1435540ba(lVar8,uVar13,puStack_50);
  if (cVar5 == '\0') {
    uVar17 = *(int *)(lVar8 + 8) - *(int *)(lVar8 + 0x34);
    if (uVar17 < 4) {
      iVar6 = 1;
    }
    else {
      uVar11 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
      lVar19 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar19 & 0x1f);
    }
    if (((int)uVar17 < 1) || (iVar6 <= *(int *)(lVar8 + 0x48))) {
      uVar13 = *(int *)(lVar8 + 0x48) - 1U & uVar13;
      *(uint *)((longlong)puVar1 + 0x14) = uVar13;
      lVar19 = *(longlong *)(lVar8 + 0x40);
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        lVar19 = lVar8 + 0x38;
      }
      *(undefined4 *)(puVar1 + 2) =
           *(undefined4 *)
            (lVar19 + ((longlong)*(int *)(lVar8 + 0x48) - 1U & (longlong)(int)uVar13) * 4);
      lVar19 = *(longlong *)(lVar8 + 0x40);
      if (*(longlong *)(lVar8 + 0x40) == 0) {
        lVar19 = lVar8 + 0x38;
      }
      *(undefined4 *)(lVar19 + ((longlong)*(int *)(lVar8 + 0x48) - 1U & (longlong)(int)uVar13) * 4)
           = (undefined4)local_68;
    }
    else {
      *(int *)(lVar8 + 0x48) = iVar6;
      FUN_1417dd91a(lVar8);
    }
  }
  puVar12 = (ulonglong *)&local_7c;
LAB_143553d74:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (int)*puVar12;
}



// FUNCTION 143553f44 FUN_143553f44 body=78 status=ok
// SIG undefined FUN_143553f44(void)

undefined8 * FUN_143553f44(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14a9b18a0;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 143553f92 FUN_143553f92 body=5 status=ok
// SIG undefined FUN_143553f92(void)

longlong FUN_143553f92(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143553f98 FUN_143553f98 body=29 status=ok
// SIG undefined FUN_143553f98(void)

void FUN_143553f98(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143553fb6 FUN_143553fb6 body=29 status=ok
// SIG undefined FUN_143553fb6(void)

undefined8 FUN_143553fb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143553fd4 FUN_143553fd4 body=230 status=ok
// SIG undefined FUN_143553fd4(void)

int * FUN_143553fd4(longlong *param_1,int *param_2)

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



// FUNCTION 1435540ba FUN_1435540ba body=152 status=ok
// SIG undefined FUN_1435540ba(void)

void FUN_1435540ba(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_147b918c0((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_143554123;
    }
  }
  uVar5 = 0;
LAB_143554123:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 143554152 FUN_143554152 body=1372 status=ok
// SIG undefined FUN_143554152(void)

void FUN_143554152(longlong *param_1,ulonglong *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [4];
  undefined8 *puVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  wchar_t *_Dest;
  byte bVar8;
  undefined8 *puVar9;
  undefined1 auStack_378 [32];
  undefined1 local_358;
  undefined4 local_350;
  undefined1 local_348;
  undefined1 local_340 [8];
  undefined1 local_338 [8];
  undefined1 local_330 [7];
  byte bStack_329;
  undefined8 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined2 local_314;
  undefined1 local_268 [16];
  undefined1 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined1 local_240 [7];
  undefined1 auStack_239 [5];
  undefined1 auStack_234 [3];
  undefined1 auStack_231 [5];
  byte abStack_22c [3];
  undefined1 uStack_229;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined8 local_20c;
  undefined4 local_204;
  undefined1 local_1f8;
  longlong lStack_175;
  undefined1 local_168 [4];
  byte local_164;
  undefined1 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ushort local_78;
  undefined8 local_70;
  ushort local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_378;
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)(*param_1 + 0x50) + 0x10))(*param_1 + 0x50);
  local_328 = *puVar5;
  lVar7 = 0x15;
  do {
    *(undefined1 (*) [16])(local_340 + lVar7 + 3) = (undefined1  [16])0x0;
    *(undefined4 *)(local_330 + lVar7 + 3) = 0xffffffff;
    (&bStack_329 + lVar7)[0] = 0;
    (&bStack_329 + lVar7)[1] = 0;
    lVar7 = lVar7 + 0x18;
  } while (lVar7 != 0xd5);
  local_254 = 0;
  local_268 = (undefined1  [16])0x0;
  local_258 = 0;
  local_250 = 0xffffffff;
  uStack_24c = 0xffffffff;
  uStack_248 = 0xffffffff;
  uStack_244 = 0xffffffff;
  _local_240 = 0;
  auStack_239._1_4_ = auStack_239._1_4_ & 0xffffff00;
  _auStack_234 = 0;
  auStack_231._1_3_ = 0;
  local_320 = 0;
  local_318 = 0xffffffff;
  local_314 = 0x100;
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)(*param_1 + 0x50) + 0x10))(*param_1 + 0x50);
  local_218 = *puVar5;
  local_228 = 0xffffffffffffffff;
  uStack_220 = 0xffffffff;
  local_210 = 1;
  local_20c = 0x100000000000;
  local_204 = 0;
  local_1f8 = 0;
  local_330._0_4_ = 1;
  local_338 = (undefined1  [8])&local_228;
  FUN_144760590(param_2,local_338,0);
  _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
  pwVar6 = _Dest + 8;
  if ((wchar_t *)param_2[1] < pwVar6) {
    FUN_140023dd8(param_2,0x12);
    _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
    pwVar6 = _Dest + 8;
  }
  *param_2 = (ulonglong)pwVar6;
  wcscpy(_Dest,L"ClearRT");
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar9 + 0x23;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x120);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar9 + 0x23;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_14a217b50;
  memcpy(puVar9 + 2,&local_328,0xe8);
  puVar9[0x1f] = 0;
  puVar9[0x20] = CONCAT44(_auStack_234,auStack_239._1_4_);
  *(uint *)((longlong)puVar9 + 0x107) = CONCAT31(auStack_231._1_3_,auStack_231[0]);
  puVar9[0x22] = _Dest;
  lVar7 = 0x11;
  do {
    *(undefined8 *)(local_240 + lVar7 + 7) = 0;
    *(undefined8 *)(auStack_234 + lVar7 + 3) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_229 + lVar7) = 0;
    lVar7 = lVar7 + 0x18;
  } while (lVar7 != 0xd1);
  local_168 = (undefined1  [4])0x0;
  local_164 = 0;
  lVar7 = 0xd9;
  do {
    *(undefined8 *)(local_240 + lVar7 + 7) = 0;
    *(undefined8 *)(auStack_234 + lVar7 + 3) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_229 + lVar7) = 0;
    lVar7 = lVar7 + 0x18;
  } while (lVar7 != 0x199);
  local_a0 = 0;
  local_70 = 0;
  local_68 = local_68 & 0xff;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = local_78 & 0xff00;
  lVar7 = 0x15;
  do {
    if (*(longlong *)(local_340 + lVar7 + 3) == 0) break;
    *(longlong *)(local_240 + lVar7 + 3) = *(longlong *)(local_340 + lVar7 + 3);
    bVar1 = *(byte *)((longlong)&local_328 + lVar7);
    bVar8 = bVar1 >> 2;
    auStack_231[lVar7 + 4] = bVar8;
    abStack_22c[lVar7] = bVar1 & 3;
    *(undefined4 *)(auStack_234 + lVar7 + 3) = *(undefined4 *)(local_330 + lVar7 + 3);
    *(uint *)(auStack_239 + lVar7 + 4) = (uint)(&bStack_329)[lVar7];
    local_168 = (undefined1  [4])((int)local_168 + 1);
    local_164 = local_164 | bVar8 == 2;
    lVar2 = *(longlong *)(local_338 + lVar7 + 3);
    if (lVar2 != 0) {
      local_a0 = 1;
      uVar3 = *(undefined8 *)(auStack_239 + lVar7 + 4);
      *(undefined8 *)((longlong)&lStack_175 + lVar7) = *(undefined8 *)(local_240 + lVar7 + 3);
      *(undefined8 *)(&stack0xfffffffffffffe93 + lVar7) = uVar3;
      *(undefined8 *)(local_168 + lVar7 + 3) = *(undefined8 *)(auStack_231 + lVar7 + 4);
      *(longlong *)((longlong)&lStack_175 + lVar7) = lVar2;
    }
    lVar7 = lVar7 + 0x18;
  } while (lVar7 != 0xd5);
  auVar4 = local_168;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_98 = ZEXT816(0);
  if (0 < (longlong)(int)local_168) {
    memcpy(param_2 + 0x15,&local_228,(longlong)(int)local_168 * 0x18);
  }
  *(undefined1 (*) [4])(param_2 + 0x14) = auVar4;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *(undefined1 *)((longlong)param_2 + 0x17a) = 0;
  *(undefined2 *)(param_2 + 0x2f) = 0;
  *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfc | 2;
  local_340._0_4_ = 0;
  local_348 = 0;
  local_350 = 0;
  local_358 = 0;
  FUN_140d1dede(param_2,1,1,param_1 + 1);
  if ((*(byte *)((longlong)param_2 + 0x17b) & 8) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,param_2,1);
    *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xf7;
  }
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar9 + 2;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x18);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar9 + 2;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_14a217b58;
  *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfd;
  *(undefined2 *)(param_2 + 0x2f) = 0;
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)(*param_1 + 0x50) + 0x10))(*param_1 + 0x50);
  local_218 = *puVar5;
  local_228 = 0xffffffffffffffff;
  uStack_220 = 0xffffffff;
  local_210 = 1;
  local_20c = 0x7000001000;
  local_204 = 0;
  local_1f8 = 0;
  local_330._0_4_ = 1;
  local_338 = (undefined1  [8])&local_228;
  FUN_144760590(param_2,local_338,0);
  if ((local_60 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435546c0 FUN_1435546c0 body=12 status=ok
// SIG undefined FUN_1435546c0(void)

void FUN_1435546c0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001435546c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1435546cc FUN_1435546cc body=29 status=ok
// SIG undefined FUN_1435546cc(void)

undefined8 FUN_1435546cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143554710 FUN_143554710 body=282 status=ok
// SIG undefined FUN_143554710(void)

undefined8 * FUN_143554710(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1435546e9);
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



// FUNCTION 14355482a FUN_14355482a body=105 status=ok
// SIG undefined FUN_14355482a(void)

void FUN_14355482a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143554152(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143554152(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014355486d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1435548aa FUN_1435548aa body=12 status=ok
// SIG undefined FUN_1435548aa(void)

void FUN_1435548aa(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001435548b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1435548b6 FUN_1435548b6 body=29 status=ok
// SIG undefined FUN_1435548b6(void)

undefined8 FUN_1435548b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435548d4 FUN_1435548d4 body=282 status=ok
// SIG undefined FUN_1435548d4(void)

undefined8 * FUN_1435548d4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1435546e9);
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



// FUNCTION 1435549ee FUN_1435549ee body=116 status=ok
// SIG undefined FUN_1435549ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435549ee(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14129010a(_DAT_000000a8 + 0x60,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14129010a(param_1[0x15] + 0x60,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143554a35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143554a78 FUN_143554a78 body=12 status=ok
// SIG undefined FUN_143554a78(void)

void FUN_143554a78(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143554a81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143554a84 FUN_143554a84 body=29 status=ok
// SIG undefined FUN_143554a84(void)

undefined8 FUN_143554a84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143554aa2 FUN_143554aa2 body=282 status=ok
// SIG undefined FUN_143554aa2(void)

undefined8 * FUN_143554aa2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1435546e9);
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



// FUNCTION 143554bbc FUN_143554bbc body=116 status=ok
// SIG undefined FUN_143554bbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143554bbc(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14129010a(_DAT_000000a8 + 0x60,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14129010a(param_1[0x15] + 0x60,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143554c03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143554c30 FUN_143554c30 body=190 status=ok
// SIG undefined FUN_143554c30(void)

void FUN_143554c30(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)(*param_1 + 0x50) + 0x10))(*param_1 + 0x50);
  lVar3 = (**(code **)(*(longlong *)*puVar2 + 8))();
  if (*(byte *)(lVar3 + 0x31) < 2) {
    local_58 = DAT_14c9a52a0;
    local_60 = DAT_14c9a5298;
    local_54 = DAT_14c9a5298;
    local_4c = DAT_14c9a52a0;
    local_48 = DAT_14c9a5298;
    local_40 = DAT_14c9a52a0;
    local_3c = 0;
    uStack_38 = 0;
    uStack_34 = 1;
    uStack_30 = 0;
    local_2c = 0x100000000;
    lVar3 = *param_1;
    uVar1 = *(undefined8 *)(lVar3 + 0x10);
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)(lVar3 + 0x50) + 0x10))(lVar3 + 0x50);
    FUN_1477f1eb1(param_2,*puVar2,uVar1,&local_60);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143554cfa FUN_143554cfa body=12 status=ok
// SIG undefined FUN_143554cfa(void)

void FUN_143554cfa(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143554d03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143554d06 FUN_143554d06 body=29 status=ok
// SIG undefined FUN_143554d06(void)

undefined8 FUN_143554d06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143554d24 FUN_143554d24 body=282 status=ok
// SIG undefined FUN_143554d24(void)

undefined8 * FUN_143554d24(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1435546e9);
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



// FUNCTION 143554e3e FUN_143554e3e body=238 status=ok
// SIG undefined FUN_143554e3e(void)

void FUN_143554e3e(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  puVar3 = (undefined8 *)
           (**(code **)(*(longlong *)(param_1[0x15] + 0x50) + 0x10))(param_1[0x15] + 0x50);
  lVar4 = (**(code **)(*(longlong *)*puVar3 + 8))();
  if (*(byte *)(lVar4 + 0x31) < 2) {
    local_58 = DAT_14c9a52a0;
    local_60 = DAT_14c9a5298;
    local_54 = DAT_14c9a5298;
    local_4c = DAT_14c9a52a0;
    local_48 = DAT_14c9a5298;
    local_40 = DAT_14c9a52a0;
    local_3c = 0;
    uStack_38 = 0;
    uStack_34 = 1;
    uStack_30 = 0;
    local_2c = 0x100000000;
    lVar4 = param_1[0x15];
    uVar2 = *(undefined8 *)(lVar4 + 0x10);
    puVar3 = (undefined8 *)(**(code **)(*(longlong *)(lVar4 + 0x50) + 0x10))(lVar4 + 0x50);
    FUN_1477f1eb1(&DAT_14ca85100,*puVar3,uVar2,&local_60);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143554f2e FUN_143554f2e body=58 status=ok
// SIG undefined FUN_143554f2e(void)

undefined8 FUN_143554f2e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = *param_2;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 143554f68 FUN_143554f68 body=127 status=ok
// SIG undefined FUN_143554f68(void)

undefined8 FUN_143554f68(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  
  param_1 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1447a1bd6(param_1,iVar2);
  }
  lVar3 = *param_1;
  lVar4 = (longlong)iVar2 * 0x10;
  puVar1 = (undefined8 *)(lVar3 + lVar4);
  *(undefined8 *)(lVar3 + lVar4) = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(lVar3 + 8 + lVar4) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  return 1;
}



// FUNCTION 143554fe8 FUN_143554fe8 body=55 status=ok
// SIG undefined FUN_143554fe8(void)

undefined8 FUN_143554fe8(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_1,iVar1);
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = uVar2;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 143555020 FUN_143555020 body=52 status=ok
// SIG undefined FUN_143555020(void)

undefined8 FUN_143555020(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2[1] + 0x20);
  }
  FUN_14686fb53(param_1,*param_2,uVar1,0);
  return param_1;
}



// FUNCTION 1435550a0 FUN_1435550a0 body=114 status=ok
// SIG undefined FUN_1435550a0(void)

void FUN_1435550a0(longlong *param_1,int param_2)

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



// FUNCTION 143555112 FUN_143555112 body=195 status=ok
// SIG undefined FUN_143555112(void)

void FUN_143555112(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint *puVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar8 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar8 == param_2) {
    piVar9 = (int *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      piVar9 = (int *)(*param_1 + (longlong)iVar8 * 0x18 + 0x10);
      iVar8 = *piVar9;
    } while (iVar8 != param_2);
  }
  *piVar9 = *(int *)(lVar1 + 0x10);
  lVar1 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar1 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar2 = (undefined4 *)(lVar1 + (longlong)param_2 * 0x18);
  *puVar2 = 0xffffffff;
  uVar7 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar7 = (undefined4)param_1[6];
  }
  puVar2[1] = uVar7;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar8 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar3 = (uint *)((longlong)plVar5 + (longlong)(iVar8 >> 5) * 4);
  *puVar3 = *puVar3 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 143555212 FUN_143555212 body=29 status=ok
// SIG undefined FUN_143555212(void)

void FUN_143555212(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143555230 FUN_143555230 body=29 status=ok
// SIG undefined FUN_143555230(void)

undefined8 FUN_143555230(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14355524e FUN_14355524e body=282 status=ok
// SIG undefined FUN_14355524e(void)

undefined8 * FUN_14355524e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1435546e9);
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



// FUNCTION 14355544c FUN_14355544c body=29 status=ok
// SIG undefined FUN_14355544c(void)

void FUN_14355544c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14355546a FUN_14355546a body=29 status=ok
// SIG undefined FUN_14355546a(void)

undefined8 FUN_14355546a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143555488 FUN_143555488 body=282 status=ok
// SIG undefined FUN_143555488(void)

undefined8 * FUN_143555488(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1435546e9);
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



// FUNCTION 14355564a FUN_14355564a body=3310 status=ok
// SIG undefined FUN_14355564a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14355564a(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a976d50,1,0);
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14cae7148);
  if (cVar1 == '\0') {
    _DAT_14cae7148 = 0;
    uRam000000014cae7150 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a97b130,1,&PTR_FUN_14a97b100);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a983160,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a983f50,1,0);
  local_60 = "AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cae75a8 = (ulonglong)uVar2;
  ppuStack_70 = &PTR_FUN_14a9a0d60;
  local_78 = 1;
  local_68 = 4;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9a0e10,1,&PTR_FUN_14a9a0de0);
  local_60 = "PropertyGetFailedWarning";
  local_58 = 0x18;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14cae7f30 = (ulonglong)uVar2;
  local_60 = "PropertySetFailedWarning";
  local_58 = 0x18;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14cae7f38 = (ulonglong)uVar2;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cae7f48,L"bp.BlamePrintString",&DAT_14cae7f40,
                L"When true, prints the Blueprint Asset and Function that generated calls to Print String. Useful for tracking down screen message spam."
               );
  atexit(FUN_14354be0a);
  local_60._0_4_ = 0x2d0;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cae80f8,L"r.MinYResolutionForUI",&local_60,
                L"Defines the smallest Y resolution we want to support in the UI (default is 720)");
  atexit(FUN_14354c25d);
  local_60._0_4_ = 0x168;
  local_78 = CONCAT44(local_78._4_4_,0x20);
  FUN_14078dbce(&DAT_14cae8110,L"r.MinYResolutionFor3DView",&local_60,
                L"Defines the smallest Y resolution we want to support in the 3D view");
  atexit(FUN_14354c2a2);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9a1e60,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9a6a40,1,0);
  local_68 = 2;
  ppuStack_70 = &PTR_FUN_14a9a8eb0;
  local_78 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9a8ef0,2,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9aaa20,1,0);
  _DAT_14cae85b8 = FUN_14068e11a;
  _DAT_14cae85c0 = FUN_1457ab7ee;
  _DAT_14cae85c8 = FUN_1457ab7ee;
  _DAT_14cae85d0 = FUN_146892264;
  _DAT_14cae85d8 = L"ConvertFVector3dToFVector3f";
  _DAT_14cae85e0 = L"ConvertFVector3fToFVector3d";
  _DAT_14cae85e8 = &LAB_147b8bdb3;
  _DAT_14cae85f0 = &LAB_147b8bdd0;
  _DAT_14cae85f8 = DAT_14cae8c60;
  _DAT_14cae8600 = FUN_1456aec84;
  _DAT_14cae8608 = FUN_146892368;
  _DAT_14cae8610 = FUN_146892368;
  _DAT_14cae8618 = FUN_1468922e6;
  _DAT_14cae8620 = L"ConvertFVector4dToFVector4f";
  _DAT_14cae8628 = L"ConvertFVector4fToFVector4d";
  _DAT_14cae8630 = &LAB_147b8bded;
  _DAT_14cae8638 = &LAB_147b8be14;
  _DAT_14cae8640 = &DAT_14cae85b8;
  _DAT_14cae8648 = FUN_1456aede4;
  _DAT_14cae8650 = FUN_14689246c;
  _DAT_14cae8658 = FUN_14689246c;
  _DAT_14cae8660 = FUN_1468923ea;
  _DAT_14cae8668 = L"ConvertFPlane4dToFPlane4f";
  _DAT_14cae8670 = L"ConvertFPlane4fToFPlane4d";
  _DAT_14cae8678 = &LAB_147b8be3b;
  _DAT_14cae8680 = &LAB_147b8be62;
  _DAT_14cae8688 = &DAT_14cae8600;
  _DAT_14cae8690 = FUN_1456aed04;
  _DAT_14cae8698 = FUN_146892570;
  _DAT_14cae86a0 = FUN_146892570;
  _DAT_14cae86a8 = FUN_1468924ee;
  _DAT_14cae86b0 = L"ConvertFQuat4dToFQuat4f";
  _DAT_14cae86b8 = L"ConvertFQuat4fToFQuat4d";
  _DAT_14cae86c0 = &LAB_147b8be89;
  _DAT_14cae86c8 = &LAB_147b8beb0;
  _DAT_14cae86d0 = &DAT_14cae8648;
  _DAT_14cae86d8 = FUN_14016b782;
  _DAT_14cae86e0 = FUN_146892674;
  _DAT_14cae86e8 = FUN_146892674;
  _DAT_14cae86f0 = FUN_1468925f2;
  _DAT_14cae86f8 = L"ConvertFRotator3dToFRotator3f";
  _DAT_14cae8700 = L"ConvertFRotator3fToFRotator3d";
  _DAT_14cae8708 = &LAB_147b8bed7;
  _DAT_14cae8710 = &LAB_147b8bef4;
  _DAT_14cae8718 = &DAT_14cae8690;
  _DAT_14cae8720 = FUN_140ce9674;
  _DAT_14cae8728 = FUN_146892778;
  _DAT_14cae8730 = FUN_146892778;
  _DAT_14cae8738 = FUN_1468926f6;
  _DAT_14cae8740 = L"ConvertFTransform3dToFTransform3f";
  _DAT_14cae8748 = L"ConvertFTransform3fToFTransform3d";
  _DAT_14cae8750 = &LAB_147b8bf11;
  _DAT_14cae8758 = &LAB_147b8bf49;
  _DAT_14cae8760 = &DAT_14cae86d8;
  _DAT_14cae8768 = FUN_1468927fa;
  _DAT_14cae8770 = FUN_1468928fe;
  _DAT_14cae8778 = FUN_1468928fe;
  _DAT_14cae8780 = FUN_14689287c;
  _DAT_14cae8788 = L"ConvertFMatrix44dToFMatrix44f";
  _DAT_14cae8790 = L"ConvertFMatrix44fToFMatrix44d";
  _DAT_14cae8798 = FUN_147b8bf84;
  _DAT_14cae87a0 = FUN_147b8bfe8;
  _DAT_14cae87a8 = &DAT_14cae8720;
  _DAT_14cae87b0 = FUN_1456aee64;
  _DAT_14cae87b8 = &LAB_147b8c042;
  _DAT_14cae87c0 = &LAB_147b8c042;
  _DAT_14cae87c8 = FUN_146892980;
  _DAT_14cae87d0 = L"ConvertFBox2dToFBox2f";
  _DAT_14cae87d8 = L"ConvertFBox2fToFBox2d";
  _DAT_14cae87e0 = &LAB_147b8c045;
  _DAT_14cae87e8 = &LAB_147b8c072;
  _DAT_14cae87f0 = &DAT_14cae8768;
  _DAT_14cae87f8 = FUN_1457aacfc;
  _DAT_14cae8800 = &LAB_147b8c042;
  _DAT_14cae8808 = &LAB_147b8c042;
  _DAT_14cae8810 = FUN_1468921e2;
  _DAT_14cae8818 = L"ConvertFVector2dToFVector2f";
  _DAT_14cae8820 = L"ConvertFVector2fToFVector2d";
  _DAT_14cae8828 = &LAB_147b8c09f;
  _DAT_14cae8830 = &LAB_147b8c0b2;
  _DAT_14cae8838 = &DAT_14cae87b0;
  _DAT_14cae8840 = FUN_146278d62;
  _DAT_14cae8848 = FUN_1468921e2;
  _DAT_14cae8850 = FUN_1457aacfc;
  _DAT_14cae8858 = FUN_1468921e2;
  _DAT_14cae8860 = L"ConvertFVector2dToFVector2f";
  _DAT_14cae8868 = L"ConvertFVector2fToFVector2d";
  _DAT_14cae8870 = &LAB_147b8c09f;
  _DAT_14cae8878 = &LAB_147b8c0b2;
  _DAT_14cae8880 = &DAT_14cae87f8;
  DAT_14cae8c60 = &DAT_14cae8840;
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14a9ac4e0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9ac530,1,&PTR_FUN_14a9ac500);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a9ac7f0);
  DAT_14cae8d10 = 0;
  _DAT_14cae8d18 = 0;
  _DAT_14cae8d20 = 2;
  atexit(FUN_14354fd45);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cae8950,L"LatentActions.GuaranteeNextTickDelay",&DAT_14cae8948,
                L"If true, latent actions delayed until next tick will guarantee the engine frame has advanced. If false, these would always run at the end of the same engine tick (default behavior prior to 5.5)."
               );
  atexit(FUN_14354fd76);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9acf80,1,&PTR_FUN_14a9acf50);
  local_60._0_4_ = 0x42c80000;
  local_78._0_4_ = 0x40;
  FUN_140a6b41e(&DAT_14cae8990,L"r.ScreenPercentage.Default",&local_60,&DAT_149dfb77a);
  atexit(FUN_1435501f1);
  local_60._0_4_ = 1;
  local_78._0_4_ = 0x40;
  FUN_14078dbce(&DAT_14cae89a8,L"r.ScreenPercentage.Default.Desktop.Mode",&local_60,&DAT_149dfb77a);
  atexit(FUN_143550236);
  local_60._0_4_ = 0;
  local_78._0_4_ = 0x40;
  FUN_14078dbce(&DAT_14cae89c0,L"r.ScreenPercentage.Default.Mobile.Mode",&local_60,&DAT_149dfb77a);
  atexit(FUN_14355027b);
  local_60._0_4_ = 0;
  local_78._0_4_ = 0x40;
  FUN_14078dbce(&DAT_14cae89d8,L"r.ScreenPercentage.Default.VR.Mode",&local_60,&DAT_149dfb77a);
  atexit(FUN_1435502c0);
  local_60._0_4_ = 0;
  local_78._0_4_ = 0x40;
  FUN_14078dbce(&DAT_14cae89f0,L"r.ScreenPercentage.Default.PathTracer.Mode",&local_60,
                &DAT_149dfb77a);
  atexit(FUN_143550305);
  local_60._0_4_ = 0;
  local_78._0_4_ = 0x40;
  FUN_140a6b41e(&DAT_14cae8a08,L"r.ScreenPercentage",&local_60,
                L"To render in lower resolution and upscale for better performance (combined up with the blenable post process setting).\n70 is a good value for low aliasing and performance, can be verified with \'show TestImage\'\nin percent, >0 and <=100, larger numbers are possible (supersampling) but the downsampling quality is improvable.<=0 compute the screen percentage is determined by r.ScreenPercentage.Default cvars."
               );
  atexit(FUN_14355034a);
  local_60._0_4_ = 0x3f800000;
  local_78._0_4_ = 0;
  FUN_140a6b41e(&DAT_14cae8a20,L"r.ScreenPercentage.Auto.PixelCountMultiplier",&local_60,
                &DAT_149dfb77a);
  atexit(FUN_14355038f);
  local_60._0_4_ = 0;
  local_78._0_4_ = 0;
  FUN_140a6b41e(&DAT_14cae8a38,L"r.ScreenPercentage.MinResolution",&local_60,
                L"Controls the absolute minimum number of rendered pixel.");
  atexit(FUN_1435503d4);
  local_60 = (char *)((ulonglong)local_60._4_4_ << 0x20);
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  FUN_140a6b41e(&DAT_14cae8a50,L"r.ScreenPercentage.MaxResolution",&local_60,
                L"Controls the absolute maximum number of rendered pixel before any upscaling such that doesn\'t go higher than the specified 16:9 resolution of this variable. For instance set this value to 1440 so that you are not rendering more than 2560x1440 = 3.6M pixels. This is useful to set this on PC in your project\'s DefaultEditor.ini so you are not rendering more pixel on PC in PIE that you would in average on console with your project specific dynamic resolution settings."
               );
  atexit(FUN_143550419);
  local_60 = &DAT_14a19662d;
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 5;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9af480,2,&PTR_FUN_14a9af3b0);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cae8b38,L"gc.ActorClusteringEnabled",&DAT_14c761594,
                L"Whether to allow levels to create actor clusters for GC.");
  atexit(FUN_1435519cd);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cae8b48,L"gc.ActorClusteringFixStalePointers",&DAT_14c761598,
                L"Enables fix for stale pointers.");
  atexit(FUN_143551a12);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cae8b58,L"s.OptimizeActorRegistration",&DAT_14c7615a4,
                L"Enables optimizations to actor component registration functions like PostRegisterAllComponents\n 0: Disable optimizations for legacy code that depends on redundant calls to registration functions\n 1: Enables optimizations and assumes the code is working properly\n 2: Enables optimization logic, but ensures it is working properly in non shipping builds"
               );
  atexit(FUN_143551a57);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cae8b68,L"s.RouteActorInitializationWorkUnitWeighting",&DAT_14c76159c,
                L"Weighting to apply to RouteActorInitialization when computing work units (relative to component init)"
               );
  atexit(FUN_143551a9c);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cae8b80,L"LevelStreaming.AllowIncrementalPreRegisterComponents",
                &DAT_14cae8b78,
                L"Whether to allow level streaming incremental pre-registration of actor components."
               );
  atexit(FUN_143551ae1);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cae8b98,L"LevelStreaming.AllowIncrementalPreUnregisterComponents",
                &DAT_14cae8b90,
                L"Whether to allow level streaming incremental pre-unregistration of actor components."
               );
  atexit(FUN_143551b26);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cae8ba8,L"LevelStreaming.IncrementalRegisterComponentsSortInterval",
                &DAT_14c7615a0,
                L"Interval in seconds between sorting of level actors by player proximity for component registration. Ignored if zero or less."
               );
  atexit(FUN_143551b6b);
  DAT_14cae8bb8 = 0;
  _DAT_14cae8bc0 = 0;
  _DAT_14cae8bc8 = 2;
  _DAT_14cae8bcc = 0;
  atexit(FUN_143551bb0);
  DAT_14cae8ce0 = 0;
  _DAT_14cae8ce8 = 0;
  DAT_14cae8cc0 = 0;
  _DAT_14cae8cc8 = 0;
  DAT_14cae8cec = 0x80;
  _DAT_14cae8cf0 = 0xffffffff;
  DAT_14cae8cf4 = 0;
  DAT_14cae8d00 = 0;
  DAT_14cae8d08 = 0;
  atexit(FUN_143551be1);
  local_60._0_4_ = 0x3e19999a;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cae8bd0,L"p.EncroachEpsilon",&local_60,
                L"Epsilon value used during encroachment checking for shape components\n0: use full sized shape. > 0: shrink shape size by this amount (world units)"
               );
  atexit(FUN_143553402);
  local_60 = (char *)CONCAT44(local_60._4_4_,1);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cae8be8,L"p.AllowDestroyNonNetworkActors",&local_60,
                L"When enabled, allows Clients in Networked Games to destroy non-networked actors (AActor::Role == ROLE_None). Does not change behavior on Servers or Standalone games."
               );
  atexit(FUN_143553447);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14355633c FUN_14355633c body=8462 status=ok
// SIG undefined FUN_14355633c(void)

void FUN_14355633c(longlong param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  longlong *plVar6;
  ushort *puVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong *plVar19;
  ulonglong *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong *plVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  uint uVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  uint *puVar32;
  bool bVar33;
  ushort *local_218;
  longlong *local_1f8;
  uint local_1ec;
  longlong *local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  uint local_1a8;
  uint local_1a0 [2];
  longlong local_198;
  longlong local_190;
  longlong local_188;
  uint *local_180;
  longlong *local_178;
  undefined ***local_170;
  undefined **local_168;
  undefined8 *local_160;
  uint *local_158;
  longlong *local_150;
  uint local_148;
  uint local_144;
  longlong local_140;
  longlong *local_138;
  uint local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  int local_110;
  undefined8 *local_108;
  int local_100;
  undefined2 local_c8;
  uint local_70;
  uint local_6c;
  byte local_68;
  uint local_64;
  byte local_60;
  uint local_5c;
  byte local_58;
  uint local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)&local_1f8;
  uVar9 = *(uint *)(param_1 + 0xc);
  if ((int)uVar9 < DAT_14c9647dc) {
    lVar17 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
  }
  else {
    lVar17 = 0;
  }
  if ((*(int *)(lVar17 + 0xc) == 0) && ((*(uint *)(lVar17 + 8) >> 0x18 & 1) == 0)) {
    local_1d8 = lVar17;
    local_1ec = FUN_141313e12(&DAT_14c9640e8,uVar9);
    local_1e0 = DAT_14c9640e8 + (longlong)(int)local_1ec * 0x50;
    lVar17 = DAT_14c9640e8 + (longlong)(int)local_1ec * 0x50;
    local_1e8 = (longlong *)(lVar17 + 8);
    if (*(int *)(lVar17 + 0x14) < 0x40) {
      FUN_14481578e(local_1e8,0x40);
    }
    local_190 = *(longlong *)(param_1 + 0x20);
    local_198 = local_1e0;
    lVar17 = local_190;
    local_1a0[0] = uVar9;
LAB_14355643a:
    lVar28 = lVar17;
    local_188 = lVar28;
    if (*(longlong *)(lVar28 + 0x20) != 0) goto code_r0x000143556449;
    goto LAB_14355645a;
  }
  goto LAB_14355840e;
code_r0x000143556449:
  lVar17 = *(longlong *)(lVar28 + 0x20);
  if ((*(uint *)(lVar28 + 8) >> 0x1c & 1) == 0) goto LAB_14355643a;
  local_188 = FUN_142840154(lVar28);
LAB_14355645a:
  if (local_188 == 0) {
    lVar17 = *(longlong *)(lVar28 + 0x20);
    goto LAB_14355643a;
  }
  local_1b0 = (longlong *)0x0;
  local_1a8 = 1;
  FUN_14010590e(&local_1b0,1,0);
  *local_1b0 = param_1;
  FUN_14002fb26(&local_140);
  FUN_14079e744(&local_1b0);
  local_138 = local_1b0;
  local_130 = local_1a8;
  local_c8 = 0x100;
  local_160 = (undefined8 *)0x0;
  local_168 = &PTR_FUN_14a9bb580;
  local_158 = local_1a0;
  local_150 = &local_140;
  local_180 = local_1a0;
  local_178 = &local_140;
  local_170 = &local_168;
  local_140 = DAT_14c948580;
  if ((longlong)local_100 != 0) {
    puVar30 = local_108;
    do {
      plVar19 = local_178;
      puVar5 = local_180;
      lVar28 = DAT_14c9640e8;
      plVar25 = (longlong *)*puVar30;
      lVar17 = *plVar25;
      if (lVar17 != 0) {
        uVar9 = *(uint *)(lVar17 + 0xc);
        if ((int)uVar9 < DAT_14c9647dc) {
          lVar27 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
        }
        else {
          lVar27 = 0;
        }
        if (*(uint *)(lVar27 + 0xc) != *local_180) {
          if ((*(uint *)(lVar27 + 8) & 0x1000000) == 0 && *(uint *)(lVar27 + 0xc) == 0) {
            if (DAT_14c9647bc < (int)uVar9) {
              cVar8 = FUN_147b9ba1e(local_180);
              lVar17 = *plVar25;
              if ((cVar8 != '\0') && ((*(uint *)(lVar17 + 8) & 0x1400) == 0)) {
                uVar9 = *(uint *)(lVar17 + 0xc);
                if ((int)uVar9 < DAT_14c9647dc) {
                  lVar28 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                }
                else {
                  lVar28 = 0;
                }
                if ((*(uint *)(lVar28 + 8) >> 0x1e & 1) == 0) {
                  FUN_143560a6a(puVar5,uVar9,lVar27,lVar17,plVar19);
                  goto LAB_1435566f5;
                }
              }
              local_70 = *(uint *)(lVar17 + 0xc);
              FUN_144aa221c(*(longlong *)(puVar5 + 2) + 0x28,&local_70);
            }
          }
          else {
            if ((*(uint *)(lVar27 + 8) >> 0x18 & 1) != 0) {
              lVar27 = lVar17;
            }
            local_70 = *(uint *)(lVar27 + 0xc);
            if ((int)local_70 < DAT_14c9647dc) {
              lVar17 = (ulonglong)((local_70 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_70 >> 0x10) * 8);
            }
            else {
              lVar17 = 0;
            }
            lVar17 = ~(longlong)*(int *)(lVar17 + 0xc) * 0x50;
            FUN_1449e3bb0(*(longlong *)(local_180 + 2) + 0x18,&local_70);
            FUN_1449e3bb0(lVar17 + lVar28 + 0x38,puVar5);
            lVar27 = (longlong)*(int *)(lVar17 + lVar28 + 0x20);
            if (lVar27 != 0) {
              lVar13 = *(longlong *)(lVar28 + 0x18 + lVar17);
              lVar15 = 0;
              do {
                local_144 = *(uint *)(lVar13 + lVar15);
                if (local_144 != *puVar5) {
                  FUN_1449e3bb0(*(longlong *)(puVar5 + 2) + 0x18,&local_144);
                }
                lVar15 = lVar15 + 4;
              } while (lVar27 * 4 != lVar15);
            }
            lVar27 = (longlong)*(int *)(lVar28 + lVar17 + 0x30);
            if (lVar27 != 0) {
              lVar17 = *(longlong *)(lVar28 + lVar17 + 0x28);
              lVar28 = 0;
              do {
                local_144 = *(uint *)(lVar17 + lVar28);
                FUN_1449e3bb0(*(longlong *)(puVar5 + 2) + 0x28,&local_144);
                lVar28 = lVar28 + 4;
              } while (lVar27 * 4 != lVar28);
            }
          }
        }
      }
LAB_1435566f5:
      puVar30 = puVar30 + 1;
    } while (puVar30 != local_108 + local_100);
  }
  uVar16 = (ulonglong)local_130;
  local_1f8 = local_138;
  do {
    if ((int)uVar16 != 0) {
      local_1d0 = local_1f8 + (int)uVar16;
      uVar18 = *(undefined8 *)(local_1f8[1] + 0x10);
      plVar25 = local_1f8;
      do {
        lVar17 = *plVar25;
        lVar28 = *(longlong *)(lVar17 + 0x10);
        lVar27 = *(longlong *)(lVar17 + 0x20);
        local_1c8 = uVar18;
        local_1c0 = plVar25;
        if ((*(byte *)(lVar28 + 0xd6) & 0x40) == 0) {
          FUN_1408a750e(lVar28,0);
        }
        plVar25 = local_178;
        puVar5 = local_180;
        lVar13 = DAT_14c9640e8;
        uVar16 = *(ulonglong *)(lVar28 + 0x1e8);
        *local_178 = lVar17;
        if (lVar28 != 0) {
          uVar9 = *(uint *)(lVar28 + 0xc);
          if ((int)uVar9 < DAT_14c9647dc) {
            lVar15 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
          }
          else {
            lVar15 = 0;
          }
          if (*(uint *)(lVar15 + 0xc) != *local_180) {
            if ((*(uint *)(lVar15 + 8) & 0x1000000) == 0 && *(uint *)(lVar15 + 0xc) == 0) {
              if (DAT_14c9647bc < (int)uVar9) {
                cVar8 = FUN_147b9ba1e(local_180,lVar28);
                if (cVar8 == '\0') {
                  uVar9 = *(uint *)(lVar28 + 0xc);
                }
                else {
                  uVar9 = *(uint *)(lVar28 + 0xc);
                  if ((*(uint *)(lVar28 + 8) & 0x1400) == 0) {
                    if ((int)uVar9 < DAT_14c9647dc) {
                      lVar13 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                    }
                    else {
                      lVar13 = 0;
                    }
                    if ((*(uint *)(lVar13 + 8) >> 0x1e & 1) == 0) {
                      FUN_143560a6a(puVar5,uVar9,lVar15,lVar28,plVar25);
                      goto LAB_1435569a5;
                    }
                  }
                }
                local_70 = uVar9;
                FUN_144aa221c(*(longlong *)(puVar5 + 2) + 0x28,&local_70);
              }
            }
            else {
              puVar32 = (uint *)(lVar28 + 0xc);
              if ((*(uint *)(lVar15 + 8) >> 0x18 & 1) == 0) {
                puVar32 = (uint *)(lVar15 + 0xc);
              }
              local_70 = *puVar32;
              if ((int)local_70 < DAT_14c9647dc) {
                lVar28 = (ulonglong)((local_70 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_70 >> 0x10) * 8);
              }
              else {
                lVar28 = 0;
              }
              lVar15 = ~(longlong)*(int *)(lVar28 + 0xc) * 0x50;
              FUN_1449e3bb0(*(longlong *)(local_180 + 2) + 0x18,&local_70);
              FUN_1449e3bb0(lVar13 + lVar15 + 0x38,puVar5);
              lVar28 = (longlong)*(int *)(lVar13 + lVar15 + 0x20);
              if (lVar28 != 0) {
                lVar21 = *(longlong *)(lVar13 + 0x18 + lVar15);
                lVar23 = 0;
                do {
                  local_144 = *(uint *)(lVar21 + lVar23);
                  if (local_144 != *puVar5) {
                    FUN_1449e3bb0(*(longlong *)(puVar5 + 2) + 0x18,&local_144);
                  }
                  lVar23 = lVar23 + 4;
                } while (lVar28 * 4 != lVar23);
              }
              lVar28 = (longlong)*(int *)(lVar13 + lVar15 + 0x30);
              if (lVar28 != 0) {
                lVar13 = *(longlong *)(lVar13 + lVar15 + 0x28);
                lVar15 = 0;
                do {
                  local_144 = *(uint *)(lVar13 + lVar15);
                  FUN_1449e3bb0(*(longlong *)(puVar5 + 2) + 0x28,&local_144);
                  lVar15 = lVar15 + 4;
                } while (lVar28 * 4 != lVar15);
              }
            }
          }
        }
LAB_1435569a5:
        plVar25 = local_178;
        puVar5 = local_180;
        lVar28 = DAT_14c9640e8;
        if (lVar27 != 0) {
          uVar9 = *(uint *)(lVar27 + 0xc);
          if ((int)uVar9 < DAT_14c9647dc) {
            lVar13 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
          }
          else {
            lVar13 = 0;
          }
          if (*(uint *)(lVar13 + 0xc) != *local_180) {
            if ((*(uint *)(lVar13 + 8) & 0x1000000) == 0 && *(uint *)(lVar13 + 0xc) == 0) {
              if (DAT_14c9647bc < (int)uVar9) {
                cVar8 = FUN_147b9ba1e(local_180,lVar27);
                if (cVar8 == '\0') {
                  uVar9 = *(uint *)(lVar27 + 0xc);
                }
                else {
                  uVar9 = *(uint *)(lVar27 + 0xc);
                  if ((*(uint *)(lVar27 + 8) & 0x1400) == 0) {
                    if ((int)uVar9 < DAT_14c9647dc) {
                      lVar28 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                    }
                    else {
                      lVar28 = 0;
                    }
                    if ((*(uint *)(lVar28 + 8) >> 0x1e & 1) == 0) {
                      FUN_143560a6a(puVar5,uVar9,lVar13,lVar27,plVar25);
                      goto LAB_143556b66;
                    }
                  }
                }
                local_70 = uVar9;
                FUN_144aa221c(*(longlong *)(puVar5 + 2) + 0x28,&local_70);
              }
            }
            else {
              puVar32 = (uint *)(lVar27 + 0xc);
              if ((*(uint *)(lVar13 + 8) >> 0x18 & 1) == 0) {
                puVar32 = (uint *)(lVar13 + 0xc);
              }
              local_70 = *puVar32;
              if ((int)local_70 < DAT_14c9647dc) {
                lVar27 = (ulonglong)((local_70 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_70 >> 0x10) * 8);
              }
              else {
                lVar27 = 0;
              }
              lVar13 = ~(longlong)*(int *)(lVar27 + 0xc) * 0x50;
              FUN_1449e3bb0(*(longlong *)(local_180 + 2) + 0x18,&local_70);
              FUN_1449e3bb0(lVar28 + lVar13 + 0x38,puVar5);
              lVar27 = (longlong)*(int *)(lVar28 + lVar13 + 0x20);
              if (lVar27 != 0) {
                lVar15 = *(longlong *)(lVar28 + 0x18 + lVar13);
                lVar21 = 0;
                do {
                  local_144 = *(uint *)(lVar15 + lVar21);
                  if (local_144 != *puVar5) {
                    FUN_1449e3bb0(*(longlong *)(puVar5 + 2) + 0x18,&local_144);
                  }
                  lVar21 = lVar21 + 4;
                } while (lVar27 * 4 != lVar21);
              }
              lVar27 = (longlong)*(int *)(lVar28 + lVar13 + 0x30);
              if (lVar27 != 0) {
                lVar28 = *(longlong *)(lVar28 + lVar13 + 0x28);
                lVar13 = 0;
                do {
                  local_144 = *(uint *)(lVar28 + lVar13);
                  FUN_1449e3bb0(*(longlong *)(puVar5 + 2) + 0x28,&local_144);
                  lVar13 = lVar13 + 4;
                } while (lVar27 * 4 != lVar13);
              }
            }
          }
        }
LAB_143556b66:
        if (1 < uVar16) {
          uVar11 = (ulonglong)((uint)uVar16 & 1);
          local_218 = (ushort *)(uVar16 & 0xfffffffffffffffe);
          lVar28 = lVar17;
          do {
            local_70 = CONCAT31(local_70._1_3_,(char)*local_218) & 0xffffff1f;
            local_6c = (uint)(*local_218 >> 5);
            local_68 = (byte)local_218[1] & 0x1f;
            local_64 = (uint)(local_218[1] >> 5);
            local_60 = (byte)local_218[2] & 0x1f;
            local_5c = (uint)(local_218[2] >> 5);
            local_58 = (byte)local_218[3] & 0x1f;
            local_54 = (uint)(local_218[3] >> 5);
            lVar27 = 0;
            do {
              plVar25 = local_178;
              puVar5 = local_180;
              lVar13 = DAT_14c9640e8;
              bVar1 = *(byte *)((longlong)&local_70 + lVar27);
              if (0x11 < bVar1) {
                FUN_14003046e(bVar1,lVar17);
                goto switchD_143556c27_caseD_0;
              }
              uVar9 = *(uint *)((longlong)&local_6c + lVar27);
              puVar12 = (ulonglong *)(lVar28 + (ulonglong)uVar9 * 8);
              puVar7 = local_218;
              switch(bVar1) {
              case 0:
                goto switchD_143556c27_caseD_0;
              case 1:
                lVar28 = lVar28 + (ulonglong)(uVar9 * 0x800 + 0x800) * 8;
                break;
              case 2:
                uVar16 = *puVar12;
                if (uVar16 != 0) {
                  uVar9 = *(uint *)(uVar16 + 0xc);
                  if ((int)uVar9 < DAT_14c9647dc) {
                    uVar22 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                  }
                  else {
                    uVar22 = 0;
                  }
                  if (*(uint *)(uVar22 + 0xc) != *local_180) {
                    if ((*(uint *)(uVar22 + 8) & 0x1000000) == 0 && *(uint *)(uVar22 + 0xc) == 0) {
                      if (DAT_14c9647bc < (int)uVar9) {
                        cVar8 = FUN_147b9ba1e(local_180);
                        uVar16 = *puVar12;
                        if ((cVar8 != '\0') && ((*(uint *)(uVar16 + 8) & 0x1400) == 0)) {
                          uVar9 = *(uint *)(uVar16 + 0xc);
                          if ((int)uVar9 < DAT_14c9647dc) {
                            lVar13 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                          }
                          else {
                            lVar13 = 0;
                          }
                          if ((*(uint *)(lVar13 + 8) >> 0x1e & 1) == 0) {
                            FUN_143560a6a(puVar5,uVar9,uVar22,uVar16,plVar25);
                            break;
                          }
                        }
                        lVar13 = *(longlong *)(puVar5 + 2);
                        local_144 = *(uint *)(uVar16 + 0xc);
LAB_14355809a:
                        FUN_144aa221c(lVar13 + 0x28,&local_144);
                      }
                    }
                    else {
                      if ((*(uint *)(uVar22 + 8) >> 0x18 & 1) != 0) {
                        uVar22 = uVar16;
                      }
                      local_144 = *(uint *)(uVar22 + 0xc);
                      if ((int)local_144 < DAT_14c9647dc) {
                        lVar15 = (ulonglong)((local_144 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_144 >> 0x10) * 8);
                      }
                      else {
                        lVar15 = 0;
                      }
                      lVar21 = ~(longlong)*(int *)(lVar15 + 0xc) * 0x50;
                      FUN_1449e3bb0(*(longlong *)(local_180 + 2) + 0x18,&local_144);
                      FUN_1449e3bb0(lVar13 + lVar21 + 0x38,puVar5);
                      lVar15 = (longlong)*(int *)(lVar13 + lVar21 + 0x20);
                      if (lVar15 != 0) {
                        lVar23 = *(longlong *)(lVar13 + 0x18 + lVar21);
                        lVar24 = 0;
                        do {
                          local_148 = *(uint *)(lVar23 + lVar24);
                          if (local_148 != *puVar5) {
                            FUN_1449e3bb0(*(longlong *)(puVar5 + 2) + 0x18,&local_148);
                          }
                          lVar24 = lVar24 + 4;
                        } while (lVar15 * 4 != lVar24);
                      }
                      lVar15 = (longlong)*(int *)(lVar13 + lVar21 + 0x30);
                      if (lVar15 != 0) {
                        lVar13 = *(longlong *)(lVar13 + lVar21 + 0x28);
                        lVar21 = 0;
                        do {
                          local_148 = *(uint *)(lVar13 + lVar21);
                          FUN_1449e3bb0(*(longlong *)(puVar5 + 2) + 0x28,&local_148);
                          lVar21 = lVar21 + 4;
                        } while (lVar15 * 4 != lVar21);
                      }
                    }
                  }
                }
                break;
              case 3:
                if ((longlong)(int)puVar12[1] != 0) {
                  plVar19 = (longlong *)*puVar12;
                  plVar25 = plVar19 + (int)puVar12[1];
                  do {
                    plVar6 = local_178;
                    puVar5 = local_180;
                    lVar15 = DAT_14c9640e8;
                    lVar13 = *plVar19;
                    if (lVar13 != 0) {
                      uVar9 = *(uint *)(lVar13 + 0xc);
                      if ((int)uVar9 < DAT_14c9647dc) {
                        lVar21 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                      }
                      else {
                        lVar21 = 0;
                      }
                      if (*(uint *)(lVar21 + 0xc) != *local_180) {
                        if ((*(uint *)(lVar21 + 8) & 0x1000000) == 0 && *(uint *)(lVar21 + 0xc) == 0
                           ) {
                          if (DAT_14c9647bc < (int)uVar9) {
                            cVar8 = FUN_147b9ba1e(local_180);
                            lVar13 = *plVar19;
                            if ((cVar8 != '\0') && ((*(uint *)(lVar13 + 8) & 0x1400) == 0)) {
                              uVar9 = *(uint *)(lVar13 + 0xc);
                              if ((int)uVar9 < DAT_14c9647dc) {
                                lVar15 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                                         *(longlong *)
                                          (DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                              }
                              else {
                                lVar15 = 0;
                              }
                              if ((*(uint *)(lVar15 + 8) >> 0x1e & 1) == 0) {
                                FUN_143560a6a(puVar5,uVar9,lVar21,lVar13,plVar6);
                                goto LAB_1435573fc;
                              }
                            }
                            local_144 = *(uint *)(lVar13 + 0xc);
                            FUN_144aa221c(*(longlong *)(puVar5 + 2) + 0x28,&local_144);
                          }
                        }
                        else {
                          if ((*(uint *)(lVar21 + 8) >> 0x18 & 1) != 0) {
                            lVar21 = lVar13;
                          }
                          local_144 = *(uint *)(lVar21 + 0xc);
                          if ((int)local_144 < DAT_14c9647dc) {
                            lVar13 = (ulonglong)((local_144 & 0xffff) * 0x18) +
                                     *(longlong *)
                                      (DAT_14c9647c8 + (ulonglong)(local_144 >> 0x10) * 8);
                          }
                          else {
                            lVar13 = 0;
                          }
                          lVar21 = ~(longlong)*(int *)(lVar13 + 0xc) * 0x50;
                          FUN_1449e3bb0(*(longlong *)(local_180 + 2) + 0x18,&local_144);
                          FUN_1449e3bb0(lVar15 + lVar21 + 0x38,puVar5);
                          lVar13 = (longlong)*(int *)(lVar15 + lVar21 + 0x20);
                          if (lVar13 != 0) {
                            lVar23 = *(longlong *)(lVar15 + 0x18 + lVar21);
                            lVar24 = 0;
                            do {
                              local_148 = *(uint *)(lVar23 + lVar24);
                              if (local_148 != *puVar5) {
                                FUN_1449e3bb0(*(longlong *)(puVar5 + 2) + 0x18,&local_148);
                              }
                              lVar24 = lVar24 + 4;
                            } while (lVar13 * 4 != lVar24);
                          }
                          lVar13 = (longlong)*(int *)(lVar15 + lVar21 + 0x30);
                          if (lVar13 != 0) {
                            lVar15 = *(longlong *)(lVar15 + lVar21 + 0x28);
                            lVar21 = 0;
                            do {
                              local_148 = *(uint *)(lVar15 + lVar21);
                              FUN_1449e3bb0(*(longlong *)(puVar5 + 2) + 0x28,&local_148);
                              lVar21 = lVar21 + 4;
                            } while (lVar13 * 4 != lVar21);
                          }
                        }
                      }
                    }
LAB_1435573fc:
                    plVar19 = plVar19 + 1;
                  } while (plVar19 != plVar25);
                }
                break;
              case 4:
                uVar16 = *(ulonglong *)(local_218 + 4);
                uVar9 = *(uint *)((uVar16 & 0xfffffffffffffffe) - 8);
                uVar26 = (int)puVar12[1] * uVar9;
                if (uVar26 != 0) {
                  uVar22 = *puVar12;
                  uVar31 = 0;
                  do {
                    FUN_14356116b(&local_180,(uVar16 & 0xfffffffffffffffe) + uVar11,uVar22 + uVar31)
                    ;
                    uVar31 = uVar31 + uVar9;
                  } while (uVar26 != uVar31);
                }
                goto LAB_14355749b;
              case 5:
                uVar26 = *(uint *)(local_218 + 4) >> 0x10;
                uVar9 = (int)puVar12[1] * uVar26;
                puVar7 = local_218 + 4;
                if (uVar9 != 0) {
                  plVar25 = (longlong *)
                            ((ulonglong)(*(uint *)(local_218 + 4) & 0xffff) * 8 + *puVar12);
                  plVar19 = plVar25 + uVar9;
                  local_1b8 = plVar19;
                  do {
                    plVar6 = local_178;
                    puVar5 = local_180;
                    lVar15 = DAT_14c9640e8;
                    lVar13 = *plVar25;
                    if (lVar13 != 0) {
                      uVar9 = *(uint *)(lVar13 + 0xc);
                      if ((int)uVar9 < DAT_14c9647dc) {
                        lVar21 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                      }
                      else {
                        lVar21 = 0;
                      }
                      if (*(uint *)(lVar21 + 0xc) != *local_180) {
                        if ((*(uint *)(lVar21 + 8) & 0x1000000) == 0 && *(uint *)(lVar21 + 0xc) == 0
                           ) {
                          if (DAT_14c9647bc < (int)uVar9) {
                            cVar8 = FUN_147b9ba1e(local_180);
                            lVar13 = *plVar25;
                            if ((cVar8 != '\0') && ((*(uint *)(lVar13 + 8) & 0x1400) == 0)) {
                              uVar9 = *(uint *)(lVar13 + 0xc);
                              if ((int)uVar9 < DAT_14c9647dc) {
                                lVar15 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                                         *(longlong *)
                                          (DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                              }
                              else {
                                lVar15 = 0;
                              }
                              if ((*(uint *)(lVar15 + 8) >> 0x1e & 1) == 0) {
                                FUN_143560a6a(puVar5,uVar9,lVar21,lVar13,plVar6);
                                goto LAB_14355716f;
                              }
                            }
                            local_144 = *(uint *)(lVar13 + 0xc);
                            FUN_144aa221c(*(longlong *)(puVar5 + 2) + 0x28,&local_144);
                          }
                        }
                        else {
                          if ((*(uint *)(lVar21 + 8) >> 0x18 & 1) != 0) {
                            lVar21 = lVar13;
                          }
                          local_144 = *(uint *)(lVar21 + 0xc);
                          if ((int)local_144 < DAT_14c9647dc) {
                            lVar13 = (ulonglong)((local_144 & 0xffff) * 0x18) +
                                     *(longlong *)
                                      (DAT_14c9647c8 + (ulonglong)(local_144 >> 0x10) * 8);
                          }
                          else {
                            lVar13 = 0;
                          }
                          lVar21 = ~(longlong)*(int *)(lVar13 + 0xc) * 0x50;
                          FUN_1449e3bb0(*(longlong *)(local_180 + 2) + 0x18,&local_144);
                          FUN_1449e3bb0(lVar15 + lVar21 + 0x38,puVar5);
                          lVar13 = (longlong)*(int *)(lVar15 + lVar21 + 0x20);
                          if (lVar13 != 0) {
                            lVar23 = *(longlong *)(lVar15 + 0x18 + lVar21);
                            lVar24 = 0;
                            do {
                              local_148 = *(uint *)(lVar23 + lVar24);
                              if (local_148 != *puVar5) {
                                FUN_1449e3bb0(*(longlong *)(puVar5 + 2) + 0x18,&local_148);
                              }
                              lVar24 = lVar24 + 4;
                            } while (lVar13 * 4 != lVar24);
                          }
                          lVar13 = (longlong)*(int *)(lVar15 + lVar21 + 0x30);
                          plVar19 = local_1b8;
                          if (lVar13 != 0) {
                            lVar15 = *(longlong *)(lVar15 + lVar21 + 0x28);
                            lVar21 = 0;
                            do {
                              local_148 = *(uint *)(lVar15 + lVar21);
                              FUN_1449e3bb0(*(longlong *)(puVar5 + 2) + 0x28,&local_148);
                              lVar21 = lVar21 + 4;
                              plVar19 = local_1b8;
                            } while (lVar13 * 4 != lVar21);
                          }
                        }
                      }
                    }
LAB_14355716f:
                    plVar25 = plVar25 + uVar26;
                  } while (plVar25 != plVar19);
                }
                break;
              case 6:
                puVar7 = local_218 + 4;
                uVar9 = (uint)puVar12[1];
                if ((0 < (int)uVar9) && (uVar9 != *(uint *)((longlong)puVar12 + 0x34))) {
                  uVar16 = *(ulonglong *)(local_218 + 4);
                  uVar26 = *(uint *)((uVar16 & 0xfffffffffffffffe) - 8);
                  uVar22 = *puVar12;
                  uVar31 = 0;
                  do {
                    puVar20 = (ulonglong *)puVar12[4];
                    if ((ulonglong *)puVar12[4] == (ulonglong *)0x0) {
                      puVar20 = puVar12 + 2;
                    }
                    if ((*(uint *)((longlong)puVar20 + (uVar31 >> 5) * 4) >> ((uint)uVar31 & 0x1f) &
                        1) != 0) {
                      FUN_14356116b(&local_180,(uVar16 & 0xfffffffffffffffe) + uVar11,uVar22);
                    }
                    uVar29 = (uint)uVar31 + 1;
                    uVar31 = (ulonglong)uVar29;
                    uVar22 = uVar22 + uVar26;
                  } while (uVar9 != uVar29);
                }
                break;
              case 7:
                if (((*(int *)((longlong)puVar12 + 0xc) != 0) &&
                    (uVar9 = (uint)puVar12[1], (int)uVar9 < DAT_14c9647dc && -1 < (int)uVar9)) &&
                   ((puVar20 = (ulonglong *)
                               ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
                    puVar20 != (ulonglong *)0x0 &&
                    (((int)puVar20[2] == *(int *)((longlong)puVar12 + 0xc) &&
                     (uVar16 = *puVar20, uVar16 != 0)))))) {
                  uVar9 = *(uint *)(uVar16 + 0xc);
                  if ((int)uVar9 < DAT_14c9647dc) {
                    lVar15 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                  }
                  else {
                    lVar15 = 0;
                  }
                  if (*(uint *)(lVar15 + 0xc) != *local_180) {
                    puVar32 = (uint *)(uVar16 + 0xc);
                    if ((*(uint *)(lVar15 + 8) & 0x1000000) == 0 && *(uint *)(lVar15 + 0xc) == 0) {
joined_r0x000143557c95:
                      if (DAT_14c9647bc < (int)uVar9) {
                        cVar8 = FUN_147b9ba1e(local_180,uVar16);
                        if (cVar8 == '\0') {
                          uVar9 = *puVar32;
                        }
                        else {
                          uVar9 = *(uint *)(uVar16 + 0xc);
                          if ((*(uint *)(uVar16 + 8) & 0x1400) == 0) {
                            if ((int)uVar9 < DAT_14c9647dc) {
                              lVar13 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)
                              ;
                            }
                            else {
                              lVar13 = 0;
                            }
                            if ((*(uint *)(lVar13 + 8) >> 0x1e & 1) == 0) {
                              FUN_143560a6a(puVar5,uVar9,lVar15,uVar16,plVar25);
                              break;
                            }
                          }
                        }
                        lVar13 = *(longlong *)(puVar5 + 2);
                        local_144 = uVar9;
                        goto LAB_14355809a;
                      }
                    }
                    else {
                      if ((*(uint *)(lVar15 + 8) >> 0x18 & 1) == 0) {
                        puVar32 = (uint *)(lVar15 + 0xc);
                      }
                      local_144 = *puVar32;
                      if ((int)local_144 < DAT_14c9647dc) {
                        lVar15 = (ulonglong)((local_144 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_144 >> 0x10) * 8);
                      }
                      else {
                        lVar15 = 0;
                      }
                      lVar21 = ~(longlong)*(int *)(lVar15 + 0xc) * 0x50;
                      FUN_1449e3bb0(*(longlong *)(local_180 + 2) + 0x18,&local_144);
                      FUN_1449e3bb0(lVar13 + lVar21 + 0x38,puVar5);
                      lVar15 = (longlong)*(int *)(lVar13 + lVar21 + 0x20);
                      if (lVar15 != 0) {
                        lVar23 = *(longlong *)(lVar13 + 0x18 + lVar21);
                        lVar24 = 0;
                        do {
                          local_148 = *(uint *)(lVar23 + lVar24);
                          if (local_148 != *puVar5) {
                            FUN_1449e3bb0(*(longlong *)(puVar5 + 2) + 0x18,&local_148);
                          }
                          lVar24 = lVar24 + 4;
                        } while (lVar15 * 4 != lVar24);
                      }
                      lVar15 = (longlong)*(int *)(lVar13 + lVar21 + 0x30);
                      if (lVar15 != 0) {
                        lVar13 = *(longlong *)(lVar13 + lVar21 + 0x28);
                        lVar21 = 0;
                        do {
                          local_148 = *(uint *)(lVar13 + lVar21);
                          FUN_1449e3bb0(*(longlong *)(puVar5 + 2) + 0x28,&local_148);
                          lVar21 = lVar21 + 4;
                        } while (lVar15 * 4 != lVar21);
                      }
                    }
                  }
                }
                break;
              case 8:
                if ((longlong)(int)puVar12[1] != 0) {
                  uVar16 = *puVar12;
                  uVar22 = (longlong)(int)puVar12[1] * 0x20 + uVar16;
                  do {
                    plVar25 = local_178;
                    puVar5 = local_180;
                    lVar13 = DAT_14c9640e8;
                    if ((((*(int *)(uVar16 + 0xc) != 0) &&
                         (uVar9 = *(uint *)(uVar16 + 8),
                         (int)uVar9 < DAT_14c9647dc && -1 < (int)uVar9)) &&
                        (plVar19 = (longlong *)
                                   ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
                        plVar19 != (longlong *)0x0)) &&
                       (((int)plVar19[2] == *(int *)(uVar16 + 0xc) &&
                        (lVar15 = *plVar19, lVar15 != 0)))) {
                      uVar9 = *(uint *)(lVar15 + 0xc);
                      if ((int)uVar9 < DAT_14c9647dc) {
                        lVar21 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                      }
                      else {
                        lVar21 = 0;
                      }
                      if (*(uint *)(lVar21 + 0xc) != *local_180) {
                        if ((*(uint *)(lVar21 + 8) & 0x1000000) == 0 && *(uint *)(lVar21 + 0xc) == 0
                           ) {
                          if (DAT_14c9647bc < (int)uVar9) {
                            cVar8 = FUN_147b9ba1e(local_180,lVar15);
                            if (cVar8 == '\0') {
                              uVar9 = *(uint *)(lVar15 + 0xc);
                            }
                            else {
                              uVar9 = *(uint *)(lVar15 + 0xc);
                              if ((*(uint *)(lVar15 + 8) & 0x1400) == 0) {
                                if ((int)uVar9 < DAT_14c9647dc) {
                                  lVar13 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                                           *(longlong *)
                                            (DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                                }
                                else {
                                  lVar13 = 0;
                                }
                                if ((*(uint *)(lVar13 + 8) >> 0x1e & 1) == 0) {
                                  FUN_143560a6a(puVar5,uVar9,lVar21,lVar15,plVar25);
                                  goto LAB_1435576e9;
                                }
                              }
                            }
                            local_144 = uVar9;
                            FUN_144aa221c(*(longlong *)(puVar5 + 2) + 0x28,&local_144);
                          }
                        }
                        else {
                          puVar32 = (uint *)(lVar15 + 0xc);
                          if ((*(uint *)(lVar21 + 8) >> 0x18 & 1) == 0) {
                            puVar32 = (uint *)(lVar21 + 0xc);
                          }
                          local_144 = *puVar32;
                          if ((int)local_144 < DAT_14c9647dc) {
                            lVar15 = (ulonglong)((local_144 & 0xffff) * 0x18) +
                                     *(longlong *)
                                      (DAT_14c9647c8 + (ulonglong)(local_144 >> 0x10) * 8);
                          }
                          else {
                            lVar15 = 0;
                          }
                          lVar21 = ~(longlong)*(int *)(lVar15 + 0xc) * 0x50;
                          FUN_1449e3bb0(*(longlong *)(local_180 + 2) + 0x18,&local_144);
                          FUN_1449e3bb0(lVar13 + lVar21 + 0x38,puVar5);
                          lVar15 = (longlong)*(int *)(lVar13 + lVar21 + 0x20);
                          if (lVar15 != 0) {
                            lVar23 = *(longlong *)(lVar13 + 0x18 + lVar21);
                            lVar24 = 0;
                            do {
                              local_148 = *(uint *)(lVar23 + lVar24);
                              if (local_148 != *puVar5) {
                                FUN_1449e3bb0(*(longlong *)(puVar5 + 2) + 0x18,&local_148);
                              }
                              lVar24 = lVar24 + 4;
                            } while (lVar15 * 4 != lVar24);
                          }
                          lVar15 = (longlong)*(int *)(lVar13 + lVar21 + 0x30);
                          if (lVar15 != 0) {
                            lVar13 = *(longlong *)(lVar13 + lVar21 + 0x28);
                            lVar21 = 0;
                            do {
                              local_148 = *(uint *)(lVar13 + lVar21);
                              FUN_1449e3bb0(*(longlong *)(puVar5 + 2) + 0x28,&local_148);
                              lVar21 = lVar21 + 4;
                            } while (lVar15 * 4 != lVar21);
                          }
                        }
                      }
                    }
LAB_1435576e9:
                    uVar16 = uVar16 + 0x20;
                  } while (uVar16 != uVar22);
                }
                break;
              case 9:
                plVar25 = (longlong *)*puVar12;
                plVar19 = (longlong *)(((longlong)plVar25 >> 0x18) + (longlong)puVar12);
                if (((ulonglong)plVar25 & 1) == 0) {
                  plVar19 = plVar25;
                }
                if ((longlong)(int)puVar12[1] != 0) {
                  plVar25 = plVar19 + (int)puVar12[1];
                  do {
                    plVar6 = local_178;
                    puVar5 = local_180;
                    lVar15 = DAT_14c9640e8;
                    lVar13 = *plVar19;
                    if (lVar13 != 0) {
                      uVar9 = *(uint *)(lVar13 + 0xc);
                      if ((int)uVar9 < DAT_14c9647dc) {
                        lVar21 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                      }
                      else {
                        lVar21 = 0;
                      }
                      if (*(uint *)(lVar21 + 0xc) != *local_180) {
                        if ((*(uint *)(lVar21 + 8) & 0x1000000) == 0 && *(uint *)(lVar21 + 0xc) == 0
                           ) {
                          if (DAT_14c9647bc < (int)uVar9) {
                            cVar8 = FUN_147b9ba1e(local_180);
                            lVar13 = *plVar19;
                            if ((cVar8 != '\0') && ((*(uint *)(lVar13 + 8) & 0x1400) == 0)) {
                              uVar9 = *(uint *)(lVar13 + 0xc);
                              if ((int)uVar9 < DAT_14c9647dc) {
                                lVar15 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                                         *(longlong *)
                                          (DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                              }
                              else {
                                lVar15 = 0;
                              }
                              if ((*(uint *)(lVar15 + 8) >> 0x1e & 1) == 0) {
                                FUN_143560a6a(puVar5,uVar9,lVar21,lVar13,plVar6);
                                goto LAB_143557ac2;
                              }
                            }
                            local_144 = *(uint *)(lVar13 + 0xc);
                            FUN_144aa221c(*(longlong *)(puVar5 + 2) + 0x28,&local_144);
                          }
                        }
                        else {
                          if ((*(uint *)(lVar21 + 8) >> 0x18 & 1) != 0) {
                            lVar21 = lVar13;
                          }
                          local_144 = *(uint *)(lVar21 + 0xc);
                          if ((int)local_144 < DAT_14c9647dc) {
                            lVar13 = (ulonglong)((local_144 & 0xffff) * 0x18) +
                                     *(longlong *)
                                      (DAT_14c9647c8 + (ulonglong)(local_144 >> 0x10) * 8);
                          }
                          else {
                            lVar13 = 0;
                          }
                          lVar21 = ~(longlong)*(int *)(lVar13 + 0xc) * 0x50;
                          FUN_1449e3bb0(*(longlong *)(local_180 + 2) + 0x18,&local_144);
                          FUN_1449e3bb0(lVar15 + lVar21 + 0x38,puVar5);
                          lVar13 = (longlong)*(int *)(lVar15 + lVar21 + 0x20);
                          if (lVar13 != 0) {
                            lVar23 = *(longlong *)(lVar15 + 0x18 + lVar21);
                            lVar24 = 0;
                            do {
                              local_148 = *(uint *)(lVar23 + lVar24);
                              if (local_148 != *puVar5) {
                                FUN_1449e3bb0(*(longlong *)(puVar5 + 2) + 0x18,&local_148);
                              }
                              lVar24 = lVar24 + 4;
                            } while (lVar13 * 4 != lVar24);
                          }
                          lVar13 = (longlong)*(int *)(lVar15 + lVar21 + 0x30);
                          if (lVar13 != 0) {
                            lVar15 = *(longlong *)(lVar15 + lVar21 + 0x28);
                            lVar21 = 0;
                            do {
                              local_148 = *(uint *)(lVar15 + lVar21);
                              FUN_1449e3bb0(*(longlong *)(puVar5 + 2) + 0x28,&local_148);
                              lVar21 = lVar21 + 4;
                            } while (lVar13 * 4 != lVar21);
                          }
                        }
                      }
                    }
LAB_143557ac2:
                    plVar19 = plVar19 + 1;
                  } while (plVar19 != plVar25);
                }
                break;
              case 10:
                uVar16 = *(ulonglong *)(local_218 + 4);
                uVar22 = *puVar12;
                uVar31 = ((longlong)uVar22 >> 0x18) + (longlong)puVar12;
                if ((uVar22 & 1) == 0) {
                  uVar31 = uVar22;
                }
                uVar9 = *(uint *)((uVar16 & 0xfffffffffffffffe) - 8);
                uVar26 = (int)puVar12[1] * uVar9;
                if (uVar26 != 0) {
                  uVar22 = 0;
                  do {
                    FUN_14356116b(&local_180,(uVar16 & 0xfffffffffffffffe) + uVar11,uVar31 + uVar22)
                    ;
                    uVar22 = uVar22 + uVar9;
                  } while (uVar26 != uVar22);
                }
                goto LAB_14355749b;
              case 0xb:
                uVar16 = *(ulonglong *)(local_218 + 4);
                uVar9 = *(uint *)((uVar16 & 0xfffffffffffffffe) - 8);
                uVar26 = *(byte *)((longlong)puVar12 + (ulonglong)uVar9) * uVar9;
                if (uVar26 != 0) {
                  uVar22 = 0;
                  do {
                    FUN_14356116b(&local_180,(uVar16 & 0xfffffffffffffffe) + uVar11,
                                  (longlong)puVar12 + uVar22);
                    uVar22 = uVar22 + uVar9;
                  } while (uVar26 != uVar22);
                }
LAB_14355749b:
                local_218 = local_218 + 4;
                puVar7 = local_218;
                break;
              case 0xc:
                (*(code *)**(undefined8 **)*puVar12)((undefined8 *)*puVar12,local_170);
                plVar25 = (longlong *)*puVar12;
                if (*(char *)((longlong)plVar25 + 0x11) == '\x01') {
                  if (((ulonglong)plVar25[1] < 9) && (*(byte *)(plVar25 + 2) < 4)) {
                    puVar12 = puVar12 + 1;
                  }
                  else {
                    puVar12 = (ulonglong *)puVar12[1];
                  }
                  (**(code **)(*plVar25 + 8))(plVar25,puVar12,local_170);
                }
                break;
              case 0xd:
                (**(code **)(local_218 + 4))(lVar17,local_170);
                goto switchD_143556c27_caseD_0;
              case 0xe:
                (*(code *)(&DAT_14c950070)[(int)uVar9])(lVar17,local_170);
                goto switchD_143556c27_caseD_0;
              case 0xf:
                (**(code **)(local_218 + 4))(puVar12,local_170);
                puVar7 = local_218 + 4;
                break;
              case 0x10:
                uVar16 = puVar12[1];
                if (uVar16 != 0) {
                  uVar9 = *(uint *)(uVar16 + 0xc);
                  if ((int)uVar9 < DAT_14c9647dc) {
                    lVar15 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                  }
                  else {
                    lVar15 = 0;
                  }
                  if (*(uint *)(lVar15 + 0xc) != *local_180) {
                    puVar32 = (uint *)(uVar16 + 0xc);
                    if ((*(uint *)(lVar15 + 8) & 0x1000000) == 0 && *(uint *)(lVar15 + 0xc) == 0)
                    goto joined_r0x000143557c95;
                    if ((*(uint *)(lVar15 + 8) >> 0x18 & 1) == 0) {
                      puVar32 = (uint *)(lVar15 + 0xc);
                    }
                    local_144 = *puVar32;
                    if ((int)local_144 < DAT_14c9647dc) {
                      lVar15 = (ulonglong)((local_144 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_144 >> 0x10) * 8);
                    }
                    else {
                      lVar15 = 0;
                    }
                    lVar21 = ~(longlong)*(int *)(lVar15 + 0xc) * 0x50;
                    FUN_1449e3bb0(*(longlong *)(local_180 + 2) + 0x18,&local_144);
                    FUN_1449e3bb0(lVar13 + lVar21 + 0x38,puVar5);
                    lVar15 = (longlong)*(int *)(lVar13 + lVar21 + 0x20);
                    if (lVar15 != 0) {
                      lVar23 = *(longlong *)(lVar13 + 0x18 + lVar21);
                      lVar24 = 0;
                      do {
                        local_148 = *(uint *)(lVar23 + lVar24);
                        if (local_148 != *puVar5) {
                          FUN_1449e3bb0(*(longlong *)(puVar5 + 2) + 0x18,&local_148);
                        }
                        lVar24 = lVar24 + 4;
                      } while (lVar15 * 4 != lVar24);
                    }
                    lVar15 = (longlong)*(int *)(lVar13 + lVar21 + 0x30);
                    if (lVar15 != 0) {
                      lVar13 = *(longlong *)(lVar13 + lVar21 + 0x28);
                      lVar21 = 0;
                      do {
                        local_148 = *(uint *)(lVar13 + lVar21);
                        FUN_1449e3bb0(*(longlong *)(puVar5 + 2) + 0x28,&local_148);
                        lVar21 = lVar21 + 4;
                      } while (lVar15 * 4 != lVar21);
                    }
                  }
                }
                break;
              case 0x11:
                if ((longlong)(int)puVar12[1] != 0) {
                  uVar22 = *puVar12;
                  uVar16 = uVar22 + (longlong)(int)puVar12[1] * 0x18;
                  do {
                    plVar25 = local_178;
                    puVar5 = local_180;
                    lVar15 = DAT_14c9640e8;
                    lVar13 = *(longlong *)(uVar22 + 8);
                    if (lVar13 != 0) {
                      uVar9 = *(uint *)(lVar13 + 0xc);
                      if ((int)uVar9 < DAT_14c9647dc) {
                        lVar21 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                      }
                      else {
                        lVar21 = 0;
                      }
                      if (*(uint *)(lVar21 + 0xc) != *local_180) {
                        if ((*(uint *)(lVar21 + 8) & 0x1000000) == 0 && *(uint *)(lVar21 + 0xc) == 0
                           ) {
                          if (DAT_14c9647bc < (int)uVar9) {
                            cVar8 = FUN_147b9ba1e(local_180,lVar13);
                            if (cVar8 == '\0') {
                              uVar9 = *(uint *)(lVar13 + 0xc);
                            }
                            else {
                              uVar9 = *(uint *)(lVar13 + 0xc);
                              if ((*(uint *)(lVar13 + 8) & 0x1400) == 0) {
                                if ((int)uVar9 < DAT_14c9647dc) {
                                  lVar15 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                                           *(longlong *)
                                            (DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                                }
                                else {
                                  lVar15 = 0;
                                }
                                if ((*(uint *)(lVar15 + 8) >> 0x1e & 1) == 0) {
                                  FUN_143560a6a(puVar5,uVar9,lVar21,lVar13,plVar25);
                                  goto LAB_143556e2c;
                                }
                              }
                            }
                            local_144 = uVar9;
                            FUN_144aa221c(*(longlong *)(puVar5 + 2) + 0x28,&local_144);
                          }
                        }
                        else {
                          puVar32 = (uint *)(lVar13 + 0xc);
                          if ((*(uint *)(lVar21 + 8) >> 0x18 & 1) == 0) {
                            puVar32 = (uint *)(lVar21 + 0xc);
                          }
                          local_144 = *puVar32;
                          if ((int)local_144 < DAT_14c9647dc) {
                            lVar13 = (ulonglong)((local_144 & 0xffff) * 0x18) +
                                     *(longlong *)
                                      (DAT_14c9647c8 + (ulonglong)(local_144 >> 0x10) * 8);
                          }
                          else {
                            lVar13 = 0;
                          }
                          lVar21 = ~(longlong)*(int *)(lVar13 + 0xc) * 0x50;
                          FUN_1449e3bb0(*(longlong *)(local_180 + 2) + 0x18,&local_144);
                          FUN_1449e3bb0(lVar15 + lVar21 + 0x38,puVar5);
                          lVar13 = (longlong)*(int *)(lVar15 + lVar21 + 0x20);
                          if (lVar13 != 0) {
                            lVar23 = *(longlong *)(lVar15 + 0x18 + lVar21);
                            lVar24 = 0;
                            do {
                              local_148 = *(uint *)(lVar23 + lVar24);
                              if (local_148 != *puVar5) {
                                FUN_1449e3bb0(*(longlong *)(puVar5 + 2) + 0x18,&local_148);
                              }
                              lVar24 = lVar24 + 4;
                            } while (lVar13 * 4 != lVar24);
                          }
                          lVar13 = (longlong)*(int *)(lVar15 + lVar21 + 0x30);
                          if (lVar13 != 0) {
                            lVar15 = *(longlong *)(lVar15 + lVar21 + 0x28);
                            lVar21 = 0;
                            do {
                              local_148 = *(uint *)(lVar15 + lVar21);
                              FUN_1449e3bb0(*(longlong *)(puVar5 + 2) + 0x28,&local_148);
                              lVar21 = lVar21 + 4;
                            } while (lVar13 * 4 != lVar21);
                          }
                        }
                      }
                    }
LAB_143556e2c:
                    uVar22 = uVar22 + 0x18;
                  } while (uVar22 != uVar16);
                }
              }
              local_218 = puVar7;
              lVar27 = lVar27 + 8;
            } while (lVar27 != 0x20);
            local_218 = local_218 + 4;
          } while( true );
        }
switchD_143556c27_caseD_0:
        uVar18 = *(undefined8 *)(local_1c0[2] + 0x10);
        plVar25 = local_1c0 + 1;
      } while (plVar25 != local_1d0);
    }
    if ((local_1f8 != (longlong *)0x0) && (local_1f8 != local_138)) {
      lVar17 = (longlong)local_110;
      uVar9 = (&DAT_14c949f00)[lVar17 * 0x50];
      if ((ulonglong)uVar9 < 0x20) {
        (&DAT_14c949f00)[lVar17 * 0x50] = uVar9 + 1;
        *(longlong **)(&DAT_14c949f08 + (ulonglong)uVar9 * 8 + lVar17 * 0x140) = local_1f8 + -1;
      }
      else {
        FUN_1400020a8();
      }
    }
    puVar14 = local_118;
    puVar30 = local_120;
    if (local_118 == (undefined8 *)0x0) {
      uVar16 = (ulonglong)((longlong)local_128 + (-8 - (longlong)local_120)) >> 3;
      if ((int)uVar16 == 0) break;
      uVar3 = *(undefined4 *)(local_128 + -1);
      uVar4 = *(undefined4 *)((longlong)local_128 + -4);
      lVar17 = 0;
      do {
        puVar14 = local_128 + lVar17;
        *(undefined4 *)puVar14 = uVar3;
        *(undefined4 *)((longlong)puVar14 + 4) = uVar4;
        *(undefined4 *)(puVar14 + 1) = uVar3;
        *(undefined4 *)((longlong)puVar14 + 0xc) = uVar4;
        lVar17 = lVar17 + 2;
      } while (lVar17 != 0x10);
      local_120 = (undefined8 *)FUN_1400305d2(&DAT_14c949ec0,local_110);
      *local_120 = 0;
      local_128 = local_120 + 1;
      puVar14 = puVar30;
      if (puVar30 == (undefined8 *)0x0) break;
    }
    else {
      local_118 = (undefined8 *)*local_118;
      uVar16 = 0x1ef;
    }
    local_1f8 = puVar14 + 1;
  } while( true );
  local_168 = &PTR_LAB_149eb0140;
  if (local_160 != (undefined8 *)0x0) {
    (**(code **)*local_160)(local_160,1);
  }
  lVar17 = local_1e0;
  *(uint *)(local_1d8 + 0xc) = ~local_1ec;
  do {
    uVar9 = *(uint *)(local_1d8 + 8);
    if ((uVar9 >> 0x18 & 1) != 0) break;
    LOCK();
    bVar33 = uVar9 == *(uint *)(local_1d8 + 8);
    if (bVar33) {
      *(uint *)(local_1d8 + 8) = uVar9 | 0x1000000;
    }
    UNLOCK();
  } while (!bVar33);
  iVar2 = *(int *)(local_1e0 + 0x10);
  iVar10 = 1;
  if (1 < DAT_14c75ecd4) {
    iVar10 = DAT_14c75ecd4;
  }
  if (iVar2 < iVar10) {
    if (iVar2 != 0) {
      lVar17 = *local_1e8;
      lVar28 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(lVar17 + lVar28) >> 0x10) * 8) + 0xc +
         (ulonglong)(*(uint *)(lVar17 + lVar28) & 0xffff) * 0x18) = 0;
        lVar28 = lVar28 + 4;
      } while ((longlong)iVar2 * 4 != lVar28);
    }
    FUN_140d631ae(&DAT_14c9640e8,local_1ec);
  }
  else {
    FUN_144958a06(*(undefined8 *)(local_1e0 + 8));
    FUN_144958a06(*(undefined8 *)(lVar17 + 0x18),*(undefined4 *)(lVar17 + 0x20));
    FUN_144958a06(*(undefined8 *)(lVar17 + 0x28),*(undefined4 *)(lVar17 + 0x30));
  }
  FUN_140ea1d7a(&local_140);
  if (local_1b0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14355840e:
  if ((local_50 ^ (ulonglong)&local_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143558452 FUN_143558452 body=14 status=ok
// SIG undefined FUN_143558452(void)

undefined8 * FUN_143558452(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0xa0);
  return param_2;
}



// FUNCTION 143558460 FUN_143558460 body=261 status=ok
// SIG undefined FUN_143558460(void)

longlong * FUN_143558460(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cae8e78 == 0) {
    local_30 = &local_18;
    local_18 = FUN_1449e2820;
    local_20 = &LAB_1457dfdaa;
    local_28 = &LAB_14637debc;
    local_38 = &LAB_147b97a51;
    local_40 = FUN_1417ddfba;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x1f0;
    FUN_14081cfa3(L"/Script/Engine",L"LevelStreamingLevelInstance",&DAT_14cae8e78,&DAT_147b97a50);
  }
  lVar1 = DAT_14cae8e78;
  *param_2 = DAT_14cae8e78;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14355858a FUN_14355858a body=4323 status=ok
// SIG undefined FUN_14355858a(void)

void FUN_14355858a(longlong param_1)

{
  code cVar1;
  void *_Src;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  undefined8 *puVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined4 uVar21;
  longlong *plVar22;
  uint **ppuVar23;
  longlong lVar24;
  longlong lVar25;
  undefined2 *puVar26;
  longlong lVar27;
  longlong *plVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined1 auStack_2e8 [32];
  undefined4 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  wchar_t *local_2a8;
  code *local_2a0;
  undefined1 *local_298;
  code **local_290;
  code *local_288;
  code *local_280;
  longlong *local_278;
  longlong local_270;
  ulonglong local_268;
  code **local_260;
  longlong local_258;
  undefined8 local_250;
  longlong local_248 [14];
  longlong local_1d8 [2];
  undefined2 *local_1c8;
  int local_1c0;
  char local_1b1;
  code *local_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  uint *local_188;
  uint local_180;
  undefined8 local_17c;
  int local_174;
  undefined4 local_170;
  longlong local_168;
  undefined4 local_160;
  code *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  uint *local_138;
  int local_130;
  undefined8 local_12c;
  int local_124;
  undefined4 local_120;
  longlong local_118;
  undefined4 local_110;
  longlong *local_d8;
  longlong lStack_d0;
  undefined1 local_c8;
  undefined2 local_c7;
  undefined8 local_c0;
  longlong lStack_b8;
  longlong *local_a8;
  longlong local_98 [5];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if (DAT_14cae8ea8 != '\0') goto LAB_1435595db;
  local_270 = param_1 + -0x30;
  DAT_14cae8ea8 = 1;
  if (*(int *)(param_1 + 0x60) == *(int *)(param_1 + 0x8c)) {
    if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) goto LAB_1435588fb;
  }
  else {
    local_260 = (code **)(param_1 + 0x58);
    local_138 = (uint *)0x0;
    local_130 = 0;
    local_158 = (code *)0x0;
    uStack_150 = (code *)0x0;
    local_12c = 0xffffffff00000080;
    local_124 = 0;
    if (&local_158 != local_260) {
      local_158 = *(code **)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      uStack_150 = (code *)CONCAT44(*(undefined4 *)(param_1 + 100),*(int *)(param_1 + 0x60));
      *(undefined8 *)(param_1 + 0x60) = 0;
      if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
        local_148 = *(undefined8 *)(param_1 + 0x68);
        uStack_140 = *(undefined8 *)(param_1 + 0x70);
      }
      local_138 = *(uint **)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = 0;
      local_130 = *(int *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x80) = 0;
      local_12c = CONCAT44(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x84));
      local_124 = *(int *)(param_1 + 0x8c);
      *(undefined8 *)(param_1 + 0x88) = 0xffffffff;
    }
    iVar18 = local_130;
    if (*(longlong *)(param_1 + 0x98) == 0) {
      local_120 = *(undefined4 *)(param_1 + 0x90);
    }
    local_118 = *(longlong *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = 0;
    local_110 = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xa0) = 0;
    if (local_130 == 0) {
      uVar17 = 1;
      uVar29 = 0;
      iVar5 = 0;
      iVar16 = 0;
    }
    else {
      puVar9 = local_138;
      if (local_138 == (uint *)0x0) {
        puVar9 = (uint *)&local_148;
      }
      uVar6 = *puVar9;
      if (uVar6 == 0) {
        iVar5 = local_130 + 0x1e;
        if (-1 < local_130 + -1) {
          iVar5 = local_130 + -1;
        }
        uVar29 = 0;
        uVar17 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar17 = uVar29;
        }
        iVar16 = 0;
        do {
          if (uVar17 == uVar29) goto LAB_1435588da;
          iVar16 = iVar16 + 0x20;
          uVar6 = puVar9[uVar29 + 1];
          uVar29 = uVar29 + 1;
        } while (uVar6 == 0);
      }
      else {
        uVar29 = 0;
        iVar16 = 0;
      }
      uVar17 = (ulonglong)(-uVar6 & uVar6);
      uVar30 = uVar17 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      iVar5 = (iVar16 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
      if (local_130 <= iVar5) {
        iVar5 = local_130;
      }
    }
    if (iVar5 != local_130) {
      local_278 = (longlong *)(param_1 + 0xa8);
      uVar6 = 0xffffffff;
      do {
        pcVar11 = local_158 + (longlong)iVar5 * 0x38;
        iVar5 = FUN_140a10c5a(local_278,
                              (int)((ulonglong)*(undefined8 *)(local_158 + (longlong)iVar5 * 0x38)
                                   >> 0x20) * 0x17 +
                              (int)*(undefined8 *)(local_158 + (longlong)iVar5 * 0x38),pcVar11);
        if (iVar5 == -1) {
          FUN_140d720d4(local_270,pcVar11);
        }
        else {
          FUN_14068195a(local_260,local_248 + 2,pcVar11,0);
        }
        uVar6 = uVar6 & ~(uint)uVar17;
        puVar9 = local_138;
        if (local_138 == (uint *)0x0) {
          puVar9 = (uint *)&local_148;
        }
        iVar5 = (int)uVar29;
        lVar24 = (longlong)iVar5;
        uVar14 = puVar9[lVar24] & uVar6;
        if (uVar14 == 0) {
          iVar12 = local_130 + 0x1e;
          if (-1 < local_130 + -1) {
            iVar12 = local_130 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar16 = iVar16 + 0x20;
          iVar13 = iVar12;
          if (iVar12 < iVar5) {
            iVar13 = iVar5;
          }
          if (iVar5 < iVar12) {
            lVar25 = 0;
            do {
              uVar14 = puVar9[lVar24 + lVar25 + 1];
              if (uVar14 != 0) {
                uVar29 = (ulonglong)(iVar5 + (int)lVar25 + 1);
                uVar6 = 0xffffffff;
                goto LAB_143558877;
              }
              iVar16 = iVar16 + 0x20;
              lVar25 = lVar25 + 1;
            } while (iVar13 - lVar24 != lVar25);
            uVar6 = 0xffffffff;
            iVar5 = iVar13;
          }
          uVar29 = (ulonglong)(iVar5 + 1);
          iVar5 = local_130;
        }
        else {
LAB_143558877:
          uVar17 = (ulonglong)(-uVar14 & uVar14);
          uVar30 = uVar17 * 2 + 1;
          lVar24 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          iVar5 = (iVar16 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
          if (local_130 <= iVar5) {
            iVar5 = local_130;
          }
        }
      } while (iVar5 != iVar18);
    }
LAB_1435588da:
    local_110 = 0;
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    FUN_1414be89a(&local_158);
LAB_1435588fb:
    if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
      local_278 = (longlong *)(param_1 + 8);
      local_188 = (uint *)0x0;
      local_180 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_17c = 0xffffffff00000080;
      local_174 = 0;
      if (&local_1a8 != local_278) {
        local_1a8 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(param_1 + 8) = 0;
        uStack_1a0 = CONCAT44(*(undefined4 *)(param_1 + 0x14),*(int *)(param_1 + 0x10));
        *(undefined8 *)(param_1 + 0x10) = 0;
        if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
          local_198 = *(undefined8 *)(param_1 + 0x18);
          uStack_190 = *(undefined8 *)(param_1 + 0x20);
        }
        local_188 = *(uint **)(param_1 + 0x28);
        *(undefined8 *)(param_1 + 0x28) = 0;
        local_180 = *(uint *)(param_1 + 0x30);
        *(undefined8 *)(param_1 + 0x30) = 0;
        local_17c = CONCAT44(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x34));
        local_174 = *(int *)(param_1 + 0x3c);
        *(undefined8 *)(param_1 + 0x38) = 0xffffffff;
      }
      uVar6 = local_180;
      if (*(longlong *)(param_1 + 0x48) == 0) {
        local_170 = *(undefined4 *)(param_1 + 0x40);
      }
      local_168 = *(longlong *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = 0;
      local_160 = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x50) = 0;
      if (local_180 == 0) {
        uVar30 = 1;
        uVar29 = 0;
        uVar17 = 0;
        iVar18 = 0;
      }
      else {
        puVar9 = local_188;
        if (local_188 == (uint *)0x0) {
          puVar9 = (uint *)&local_198;
        }
        uVar14 = *puVar9;
        if (uVar14 == 0) {
          iVar18 = local_180 + 0x1e;
          if (-1 < (int)(local_180 - 1)) {
            iVar18 = local_180 - 1;
          }
          uVar29 = 0;
          uVar17 = (ulonglong)(uint)(iVar18 >> 5);
          if (iVar18 >> 5 < 1) {
            uVar17 = uVar29;
          }
          iVar18 = 0;
          do {
            if (uVar17 == uVar29) goto LAB_143558c2f;
            iVar18 = iVar18 + 0x20;
            uVar14 = puVar9[uVar29 + 1];
            uVar29 = uVar29 + 1;
          } while (uVar14 == 0);
        }
        else {
          uVar29 = 0;
          iVar18 = 0;
        }
        uVar30 = (ulonglong)(-uVar14 & uVar14);
        uVar17 = uVar30 * 2 + 1;
        lVar24 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        uVar14 = (iVar18 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
        uVar17 = (ulonglong)uVar14;
        if ((int)local_180 <= (int)uVar14) {
          uVar17 = (ulonglong)local_180;
        }
      }
      if ((uint)uVar17 == local_180) {
LAB_143558c2f:
        uVar19 = (ulonglong)local_180;
      }
      else {
        uVar14 = 0xffffffff;
        do {
          plVar28 = *(longlong **)(local_1a8 + (longlong)(int)uVar17 * 0x18);
          if (plVar28 != (longlong *)0x0) {
            pcVar11 = (code *)(local_1a8 + (longlong)(int)uVar17 * 0x18);
            puVar7 = (undefined8 *)(**(code **)(*plVar28 + 0x10))();
            iVar5 = FUN_140a10c5a(param_1 + 0xa8,
                                  (int)((ulonglong)*puVar7 >> 0x20) * 0x17 + (int)*puVar7,puVar7);
            if (iVar5 == -1) {
              if ((*(longlong **)pcVar11 != (longlong *)0x0 & (byte)pcVar11[8]) == 1) {
                uVar8 = (**(code **)(**(longlong **)pcVar11 + 0x10))();
                FUN_140d720d4(local_270,uVar8);
              }
            }
            else {
              uStack_150 = pcVar11 + 8;
              local_158 = pcVar11;
              FUN_140a10f74(local_278,local_248 + 2,&local_158);
            }
          }
          uVar14 = uVar14 & ~(uint)uVar30;
          puVar9 = local_188;
          if (local_188 == (uint *)0x0) {
            puVar9 = (uint *)&local_198;
          }
          uVar19 = (ulonglong)local_180;
          iVar5 = (int)uVar29;
          lVar24 = (longlong)iVar5;
          uVar15 = puVar9[lVar24] & uVar14;
          if (uVar15 == 0) {
            iVar16 = local_180 + 0x1e;
            if (-1 < (int)(local_180 - 1)) {
              iVar16 = local_180 - 1;
            }
            iVar16 = iVar16 >> 5;
            iVar18 = iVar18 + 0x20;
            iVar12 = iVar16;
            if (iVar16 < iVar5) {
              iVar12 = iVar5;
            }
            if (iVar5 < iVar16) {
              lVar25 = 0;
              do {
                uVar15 = puVar9[lVar24 + lVar25 + 1];
                if (uVar15 != 0) {
                  uVar29 = (ulonglong)(iVar5 + (int)lVar25 + 1);
                  uVar14 = 0xffffffff;
                  goto LAB_143558b7f;
                }
                iVar18 = iVar18 + 0x20;
                lVar25 = lVar25 + 1;
              } while (iVar12 - lVar24 != lVar25);
              uVar14 = 0xffffffff;
              lVar24 = (longlong)iVar12;
            }
            uVar29 = lVar24 + 1U & 0xffffffff;
            uVar17 = uVar19;
          }
          else {
LAB_143558b7f:
            uVar30 = (ulonglong)(-uVar15 & uVar15);
            uVar17 = uVar30 * 2 + 1;
            lVar24 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            uVar15 = (iVar18 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
            uVar17 = (ulonglong)uVar15;
            if ((int)local_180 <= (int)uVar15) {
              uVar17 = uVar19;
            }
          }
        } while ((uint)uVar17 != uVar6);
      }
      iVar18 = (int)uVar19;
      if (iVar18 == 0) {
        uVar29 = 1;
        uVar30 = 0;
        uVar17 = 0;
        iVar5 = 0;
      }
      else {
        puVar9 = local_188;
        if (local_188 == (uint *)0x0) {
          puVar9 = (uint *)&local_198;
        }
        uVar6 = *puVar9;
        if (uVar6 == 0) {
          iVar5 = iVar18 + 0x1e;
          if (-1 < iVar18 + -1) {
            iVar5 = iVar18 + -1;
          }
          uVar30 = 0;
          uVar17 = (ulonglong)(uint)(iVar5 >> 5);
          if (iVar5 >> 5 < 1) {
            uVar17 = uVar30;
          }
          iVar5 = 0;
          do {
            if (uVar17 == uVar30) goto LAB_1435595af;
            iVar5 = iVar5 + 0x20;
            uVar6 = puVar9[uVar30 + 1];
            uVar30 = uVar30 + 1;
          } while (uVar6 == 0);
        }
        else {
          uVar30 = 0;
          iVar5 = 0;
        }
        uVar29 = (ulonglong)(-uVar6 & uVar6);
        uVar17 = uVar29 * 2 + 1;
        lVar24 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        uVar6 = (iVar5 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
        uVar17 = (ulonglong)uVar6;
        if (iVar18 <= (int)uVar6) {
          uVar17 = uVar19;
        }
      }
      if ((int)uVar17 != iVar18) {
        lVar24 = param_1 + 0xa8;
        uVar6 = 0xffffffff;
        local_268 = uVar19;
        local_258 = lVar24;
        do {
          lVar25 = local_1a8;
          local_260 = (code **)CONCAT44(local_260._4_4_,uVar6);
          plVar28 = *(longlong **)(local_1a8 + (longlong)(int)uVar17 * 0x18);
          if (plVar28 == (longlong *)0x0) {
            plVar28 = (longlong *)0x0;
LAB_143558d3b:
            lVar25 = (**(code **)(*plVar28 + 8))(plVar28);
            cVar2 = FUN_140a10ba2(local_270,plVar28);
            if ((cVar2 == '\0') && ((*(uint *)(lVar25 + 8) >> 0x1e & 1) == 0)) {
              uVar6 = *(uint *)(lVar25 + 0xc);
              if ((int)uVar6 < DAT_14c9647dc) {
                lVar25 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
              }
              else {
                lVar25 = 0;
              }
              if (((*(uint *)(lVar25 + 8) >> 0x1c & 1) == 0) &&
                 (lVar25 = (**(code **)(*plVar28 + 0x28))(plVar28), *(longlong *)(lVar25 + 8) != 0))
              {
                local_250 = (**(code **)(*plVar28 + 0x10))(plVar28);
                FUN_14068195a(lVar24,&local_158,local_250,0);
                lVar24 = (**(code **)(*plVar28 + 8))(plVar28);
                local_1b1 = '\0';
                lVar25 = (**(code **)(*plVar28 + 0x28))(plVar28);
                local_248[2] = *(longlong *)(lVar25 + 8);
                if (local_248[2] == 0) {
                  local_158 = (code *)0x0;
                  uStack_150 = (code *)0x0;
                }
                else {
                  FUN_1400021e4(local_248 + 2,&local_158);
                }
                FUN_140d2bdd2(&local_1c8,&local_158);
                if (local_158 != (code *)0x0) {
                  FUN_1400020a8();
                }
                lVar25 = FUN_1447210f0(lVar24);
                bVar3 = *(char *)(lVar25 + 0x152) - 1;
                uVar21 = 0;
                if (bVar3 < 6) {
                  uVar21 = *(undefined4 *)(&DAT_14a9bb8b8 + (ulonglong)bVar3 * 4);
                }
                local_278 = (longlong *)CONCAT44(local_278._4_4_,iVar5);
                puVar7 = (undefined8 *)(**(code **)(*plVar28 + 0x10))(plVar28);
                puVar26 = &DAT_149dfb77a;
                if (local_1c0 != 0) {
                  puVar26 = local_1c8;
                }
                local_2c8 = uVar21;
                FUN_140002266(local_1d8,L"%s_LevelInstance_%016llx_%d",puVar26,*puVar7);
                pcVar11 = (code *)FUN_1447210f0(lVar24);
                plVar20 = (longlong *)(*(longlong *)(lVar24 + 0x1c8) + 0x240);
                if (*(longlong *)(lVar24 + 0x1c8) == 0) {
                  plVar20 = &DAT_14c846480;
                }
                plVar22 = local_248 + 2;
                for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
                  *plVar22 = *plVar20;
                  plVar20 = plVar20 + 1;
                  plVar22 = plVar22 + 1;
                }
                lVar24 = (**(code **)(*plVar28 + 0x28))(plVar28);
                local_1b0 = *(code **)(lVar24 + 8);
                if (local_1b0 == (code *)0x0) {
                  local_248[0] = 0;
                  local_248[1] = 0;
                }
                else {
                  FUN_1400021e4(&local_1b0,local_248);
                }
                local_158 = pcVar11;
                FUN_14064b67c(&uStack_150,local_248);
                plVar20 = local_248 + 2;
                ppuVar23 = &local_138;
                for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
                  *ppuVar23 = (uint *)*plVar20;
                  plVar20 = plVar20 + 1;
                  ppuVar23 = ppuVar23 + 1;
                }
                local_d8 = (longlong *)0x0;
                lStack_d0 = 0;
                local_c8 = 0;
                local_c7 = 1;
                local_a8 = (longlong *)0x0;
                local_c0 = 0;
                lStack_b8 = 0;
                if (local_248[0] != 0) {
                  FUN_1400020a8();
                }
                local_d8 = local_1d8;
                (**(code **)(*plVar28 + 0x70))(plVar28,local_248);
                lVar24 = local_248[0];
                if (DAT_14c950c29 == '\x01') {
                  if (local_248[0] == 0) {
                    lVar24 = 0;
                  }
                  else {
                    FUN_1456cec3c();
                    lVar24 = local_248[0];
                  }
                }
                local_c8 = 1;
                cVar1 = pcVar11[0x152];
                lStack_d0 = lVar24;
                if ((cVar1 == (code)0x1) ||
                   (((byte)cVar1 < 7 && ((0x68U >> ((byte)cVar1 & 0x1f) & 1) != 0)))) {
                  uVar4 = (**(code **)(*plVar28 + 0x60))(plVar28);
                  local_c7 = CONCAT11(1,uVar4);
                }
                FUN_140d2b8ec(local_248,&local_158);
                local_1b1 = '\0';
                if (((local_158 == (code *)0x0) || ((int)(uint)local_148 < 2)) ||
                   (lVar25 = FUN_14355bb96(&local_158,&local_1b1), lVar25 == 0)) {
LAB_1435594e9:
                  lVar25 = 0;
                }
                else {
                  if (DAT_14cae8e78 == 0) {
                    local_1b0 = FUN_1449e2820;
                    local_280 = (code *)&LAB_1457dfdaa;
                    local_288 = (code *)&LAB_14637debc;
                    local_290 = &local_1b0;
                    local_298 = &LAB_147b97a51;
                    local_2a0 = FUN_1417ddfba;
                    local_2a8 = L"Engine";
                    local_2b0 = 0;
                    local_2b8 = 0x10000008;
                    local_2c0 = 0x10;
                    local_2c8 = 0x1f0;
                    FUN_14081cfa3(L"/Script/Engine",L"LevelStreamingLevelInstance",&DAT_14cae8e78,
                                  &DAT_147b97a50);
                  }
                  if ((*(int *)(*(longlong *)(lVar25 + 0x10) + 0x38) <
                       *(int *)(DAT_14cae8e78 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14cae8e78 + 0x38) * 8) != DAT_14cae8e78 + 0x30))
                  goto LAB_1435594e9;
                }
                if (local_1b1 == '\x01') {
                  puVar10 = (undefined8 *)(**(code **)(*plVar28 + 0x10))(plVar28);
                  *(undefined8 *)(lVar25 + 0x1c0) = *puVar10;
                  uVar8 = puVar10[2];
                  *(undefined8 *)(lVar25 + 0x1c8) = puVar10[1];
                  *(undefined8 *)(lVar25 + 0x1d0) = uVar8;
                  *(undefined8 *)(lVar25 + 0x1d8) = puVar10[3];
                  puVar7 = (undefined8 *)(lVar25 + 0x1e0);
                  if (puVar7 != puVar10 + 4) {
                    iVar18 = *(int *)(puVar10 + 5);
                    _Src = (void *)puVar10[4];
                    *(int *)(lVar25 + 0x1e8) = iVar18;
                    if (iVar18 == 0 && *(int *)(lVar25 + 0x1ec) == 0) {
                      *(undefined4 *)(lVar25 + 0x1ec) = 0;
                    }
                    else {
                      FUN_1446dd670(puVar7,iVar18);
                      if (iVar18 != 0) {
                        memcpy((void *)*puVar7,_Src,(longlong)iVar18 * 2);
                      }
                    }
                  }
                  puVar7 = (undefined8 *)(**(code **)(*plVar28 + 0x10))(plVar28);
                  iVar18 = (int)((ulonglong)*puVar7 >> 0x20) * 0x17 + (int)*puVar7;
                  *(float *)(lVar25 + 0x10c) =
                       (float)(iVar18 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0;
                  *(float *)(lVar25 + 0x110) =
                       (float)(iVar18 * -0x4b9b4d07 + 0x9d6f2492U >> 9 | 0x3f800000) + -1.0;
                  *(float *)(lVar25 + 0x114) =
                       (float)(iVar18 * 0x1c3c718d + 0xf50d3da5U >> 9 | 0x3f800000) + -1.0;
                  *(undefined4 *)(lVar25 + 0x118) = 0x3f800000;
                }
                else {
                  lVar25 = 0;
                }
                lVar24 = local_258;
                iVar5 = (int)local_278;
                if (local_248[0] != 0) {
                  FUN_1400020a8();
                }
                if (lStack_b8 != 0) {
                  plVar20 = local_a8;
                  if (local_a8 == (longlong *)0x0) {
                    plVar20 = local_98;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                }
                if (uStack_150 != (code *)0x0) {
                  FUN_1400020a8();
                }
                if (local_1d8[0] != 0) {
                  FUN_1400020a8();
                }
                if (local_1c8 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if (lVar25 == 0) {
                  FUN_140a10d6e(lVar24,local_250);
                }
                else {
                  lVar27 = *(longlong *)(param_1 + -0x10);
                  if (lVar27 == 0) {
LAB_14355950e:
                    lVar27 = 0;
                  }
                  else {
                    if (DAT_14cb10130 == 0) {
                      local_158 = FUN_140754f84;
                      local_280 = FUN_14081d0ea;
                      local_288 = FUN_14081d0ea;
                      local_290 = &local_158;
                      local_298 = &LAB_147da9a76;
                      local_2a0 = FUN_1409f3105;
                      local_2a8 = L"Engine";
                      local_2b0 = 0;
                      local_2b8 = 0x10000000;
                      local_2c0 = 8;
                      local_2c8 = 0x990;
                      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
                    }
                    if ((*(int *)(*(longlong *)(lVar27 + 0x10) + 0x38) <
                         *(int *)(DAT_14cb10130 + 0x38)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar27 + 0x10) + 0x30) +
                         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30))
                    goto LAB_14355950e;
                  }
                  bVar3 = *(byte *)(lVar27 + 0x152);
                  if ((((bVar3 == 1) || ((bVar3 < 7 && ((0x68U >> (bVar3 & 0x1f) & 1) != 0)))) &&
                      (cVar2 = FUN_140a10bfe(local_270,plVar28), cVar2 != '\0')) &&
                     (*(longlong *)(lVar25 + 0x178) != 0)) {
                    FUN_140193b00(local_270,lVar25);
                  }
                }
              }
            }
          }
          else {
            cVar2 = (**(code **)(*plVar28 + 0x18))();
            if (cVar2 != '\0') {
              puVar7 = (undefined8 *)(lVar25 + (longlong)(int)uVar17 * 0x18);
              puVar10 = (undefined8 *)(**(code **)(*(longlong *)*puVar7 + 0x10))();
              iVar18 = FUN_140a10c5a(lVar24,(int)((ulonglong)*puVar10 >> 0x20) * 0x17 +
                                            (int)*puVar10,puVar10);
              if (iVar18 == -1) {
                plVar28 = (longlong *)*puVar7;
                goto LAB_143558d3b;
              }
            }
          }
          uVar6 = (uint)local_260 & ~(uint)uVar29;
          puVar9 = local_188;
          if (local_188 == (uint *)0x0) {
            puVar9 = (uint *)&local_198;
          }
          iVar18 = (int)uVar30;
          lVar25 = (longlong)iVar18;
          uVar14 = puVar9[lVar25] & uVar6;
          if (uVar14 == 0) {
            iVar16 = local_180 + 0x1e;
            if (-1 < (int)(local_180 - 1)) {
              iVar16 = local_180 - 1;
            }
            iVar16 = iVar16 >> 5;
            iVar5 = iVar5 + 0x20;
            iVar12 = iVar16;
            if (iVar16 < iVar18) {
              iVar12 = iVar18;
            }
            if (iVar18 < iVar16) {
              lVar27 = 0;
              do {
                uVar14 = puVar9[lVar25 + lVar27 + 1];
                if (uVar14 != 0) {
                  uVar30 = (ulonglong)(iVar18 + (int)lVar27 + 1);
                  uVar6 = 0xffffffff;
                  goto LAB_14355931f;
                }
                iVar5 = iVar5 + 0x20;
                lVar27 = lVar27 + 1;
              } while (iVar12 - lVar25 != lVar27);
              uVar6 = 0xffffffff;
              iVar18 = iVar12;
            }
            uVar30 = (ulonglong)(iVar18 + 1);
            lVar24 = local_258;
            uVar14 = local_180;
          }
          else {
LAB_14355931f:
            uVar29 = (ulonglong)(-uVar14 & uVar14);
            uVar17 = uVar29 * 2 + 1;
            lVar25 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            uVar14 = (iVar5 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
            if ((int)local_180 <= (int)uVar14) {
              uVar14 = local_180;
            }
          }
          uVar17 = (ulonglong)uVar14;
        } while (uVar14 != (uint)local_268);
      }
LAB_1435595af:
      local_160 = 0;
      if (local_168 != 0) {
        FUN_1400020a8();
      }
      FUN_1414be826(&local_1a8);
    }
  }
  DAT_14cae8ea8 = '\0';
LAB_1435595db:
  if ((local_70 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14355967e FUN_14355967e body=1145 status=ok
// SIG undefined FUN_14355967e(void)

longlong * FUN_14355967e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_4f8 [32];
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  void *local_4c8;
  int local_4c0;
  undefined4 local_4bc;
  longlong local_4b8 [2];
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  void *local_498;
  int local_490;
  undefined2 *local_488;
  undefined2 *local_480;
  int local_478;
  int local_474;
  longlong local_470 [2];
  undefined2 *local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  void *local_448;
  int local_440;
  undefined4 local_43c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  if (param_1 != (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    plVar6 = param_1;
    do {
      if ((*(uint *)(plVar6 + 1) & 0x30) != 0) goto LAB_1435598ad;
      plVar6 = (longlong *)plVar6[4];
    } while (plVar6 != (longlong *)0x0);
  }
  lVar2 = param_1[4];
  if (lVar2 == 0) {
    plVar7 = (longlong *)0x0;
    goto LAB_1435598ad;
  }
  FUN_140d2bdd2(&local_460);
  FUN_1407ec8fc(local_470,lVar2 + 200,&local_460);
  if (local_460 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x2d0))(param_1,&local_460);
  FUN_1400021e4(&local_460,&local_4a8);
  FUN_140d2be42(&local_460);
  iVar1 = (int)local_458;
  iVar5 = ((int)local_458 == 0) + 1;
  local_480 = local_460;
  local_460 = (undefined2 *)0x0;
  local_478 = (int)local_458;
  iVar4 = local_458._4_4_;
  local_474 = local_458._4_4_;
  local_458 = (undefined2 *)0x0;
  iVar9 = iVar5 + iVar1;
  if (iVar9 < iVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9);
  }
  if (iVar4 < iVar9) {
    FUN_1446f8c06(&local_480);
  }
  FUN_1400020e8(&local_480,&DAT_149e065c6,1);
  if (local_460 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_4a4,local_4a8) != 0) {
    FUN_1400020a8();
  }
  FUN_140474144(&local_460,&local_480,local_470);
  puVar8 = local_460;
  if ((int)local_458 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_488,puVar8,1);
  if (local_460 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(lVar2 + 0x90);
  if ((longlong)iVar1 != 0) {
    lVar12 = *(longlong *)(lVar2 + 0x88);
    uVar11 = 0;
    do {
      plVar6 = *(longlong **)(lVar12 + uVar11);
      (**(code **)(*plVar6 + 0x2d0))(plVar6,&local_460);
      if (local_460 == local_488) {
        if ((int)(~uVar11 >> 3) != 0) {
          plVar7 = (longlong *)0x0;
          goto LAB_14355988c;
        }
        break;
      }
      uVar11 = uVar11 + 8;
    } while ((longlong)iVar1 * 8 != uVar11);
  }
  plVar7 = (longlong *)FUN_147b98ef0(lVar2,param_1[2]);
  puVar8 = *(undefined2 **)((longlong)param_1 + 0x54);
  if (*(undefined2 **)((longlong)param_1 + 0x54) == (undefined2 *)0x0) {
    (**(code **)(*param_1 + 0x2d0))(param_1,&local_460);
    puVar8 = local_460;
  }
  *(undefined2 **)((longlong)plVar7 + 0x54) = puVar8;
  FUN_1468707ca(local_4b8,(longlong)plVar7 + 0x54);
  FUN_147b9be9c(&local_460,&local_488,local_4b8);
  *local_458 = 0;
  FUN_1411e4208(&local_4a8,local_460);
  if ((char)local_448 == '\x01') {
    FUN_1400020a8(local_460);
  }
  if (local_4b8[0] != 0) {
    FUN_1400020a8();
  }
  pvVar3 = local_498;
  local_4d8 = local_4a8;
  uStack_4d4 = uStack_4a4;
  uStack_4d0 = uStack_4a0;
  uStack_4cc = uStack_49c;
  local_4c8 = (void *)0x0;
  local_4c0 = local_490;
  if ((longlong)local_490 == 0) {
    local_4bc = 0;
    local_458 = (undefined2 *)CONCAT44(uStack_4a4,local_4a8);
    uStack_450 = CONCAT44(uStack_49c,uStack_4a0);
    local_440 = 0;
LAB_143559a4a:
    local_448 = (void *)0x0;
    local_460 = (undefined2 *)0x0;
    local_43c = 0;
  }
  else {
    FUN_1446dd670(&local_4c8,local_490,0);
    memcpy(local_4c8,pvVar3,(longlong)local_490 * 2);
    pvVar3 = local_4c8;
    lVar12 = (longlong)local_4c0;
    local_460 = (undefined2 *)0x0;
    local_458 = (undefined2 *)CONCAT44(uStack_4d4,local_4d8);
    uStack_450 = CONCAT44(uStack_4cc,uStack_4d0);
    local_448 = (void *)0x0;
    local_440 = local_4c0;
    if (lVar12 == 0) goto LAB_143559a4a;
    FUN_1446dd670(&local_448,local_4c0,0);
    memcpy(local_448,pvVar3,lVar12 * 2);
  }
  if (local_4c8 != (void *)0x0) {
    FUN_1400020a8(local_4c8);
  }
  (**(code **)(*plVar7 + 0x2c8))(plVar7,&local_460);
  if (local_448 != (void *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*plVar7 + 0x2c0))(plVar7,0);
  FUN_14039914a(plVar7,0);
  plVar6 = param_1 + 0x10;
  plVar10 = plVar7 + 0x10;
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *plVar10 = *plVar6;
    plVar6 = plVar6 + 1;
    plVar10 = plVar10 + 1;
  }
  FUN_140831bbe(lVar2,plVar7);
  if (local_498 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14355988c:
  if (local_480 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_470[0] != 0) {
    FUN_1400020a8();
  }
LAB_1435598ad:
  if ((local_40 ^ (ulonglong)auStack_4f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar7;
}



// FUNCTION 143559af9 FUN_143559af9 body=69 status=ok
// SIG undefined FUN_143559af9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143559af9(void)

{
  _DAT_14cae8fc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143559b3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae8fc8,1);
  return;
}



// FUNCTION 143559b3e FUN_143559b3e body=69 status=ok
// SIG undefined FUN_143559b3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143559b3e(void)

{
  _DAT_14cae8fd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143559b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae8fd8,1);
  return;
}



// FUNCTION 143559b83 FUN_143559b83 body=69 status=ok
// SIG undefined FUN_143559b83(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143559b83(void)

{
  _DAT_14cae8fe8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143559bc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae8ff0,1);
  return;
}



// FUNCTION 143559bc8 FUN_143559bc8 body=69 status=ok
// SIG undefined FUN_143559bc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143559bc8(void)

{
  _DAT_14cae8ff8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143559c0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae9000,1);
  return;
}



// FUNCTION 143559c0d FUN_143559c0d body=69 status=ok
// SIG undefined FUN_143559c0d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143559c0d(void)

{
  _DAT_14cae9008 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143559c4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae9010,1);
  return;
}



// FUNCTION 143559c52 FUN_143559c52 body=69 status=ok
// SIG undefined FUN_143559c52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143559c52(void)

{
  _DAT_14cae9020 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143559c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae9028,1);
  return;
}



// FUNCTION 143559c98 FUN_143559c98 body=355 status=ok
// SIG undefined FUN_143559c98(void)

void FUN_143559c98(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  sbyte sVar9;
  longlong *plVar10;
  byte bVar11;
  longlong lVar12;
  undefined7 uVar8;
  
  if (param_2 != (longlong *)0x0) {
    if (*(char *)(param_1 + 8) == '\x01') {
      uVar8 = (undefined7)((ulonglong)unaff_RBX >> 8);
      uVar7 = CONCAT71(uVar8,1);
      (**(code **)(*param_2 + 0x2c0))(param_2,1);
      bVar11 = 0xfb;
      sVar9 = 2;
      if ((*(byte *)(param_2 + 0x1d) & 8) == 0) {
        uVar7 = CONCAT71(uVar8,*(undefined1 *)(param_1 + 9));
      }
    }
    else {
      uVar7 = 0;
      (**(code **)(*param_2 + 0x2c0))(param_2,0);
      bVar11 = 0xf7;
      sVar9 = 3;
    }
    FUN_14039914a(param_2,uVar7 & 0xffffffff);
    *(byte *)((longlong)param_2 + 0x10a) =
         (bVar11 & *(byte *)((longlong)param_2 + 0x10a)) + (*(char *)(param_1 + 10) << sVar9);
    plVar10 = param_2;
    do {
      if ((*(uint *)(plVar10 + 1) & 0x30) != 0) {
        return;
      }
      plVar10 = (longlong *)plVar10[4];
    } while (plVar10 != (longlong *)0x0);
    lVar3 = param_2[4];
    if (lVar3 != 0) {
      uVar4 = (**(code **)(*param_2 + 0x2d8))(param_2);
      uVar5 = (**(code **)(*param_2 + 0x2e0))(param_2);
      iVar6 = *(int *)(lVar3 + 0x238);
      if (0 < iVar6) {
        lVar12 = 0;
        do {
          iVar1 = *(int *)(*(longlong *)(lVar3 + 0x230) + 4 + lVar12 * 8);
          if ((((iVar1 != 0) &&
               (uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x230) + lVar12 * 8), -1 < (int)uVar2)) &&
              ((int)uVar2 < DAT_14c9647dc)) &&
             (((plVar10 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               plVar10 != (longlong *)0x0 && ((int)plVar10[2] == iVar1)) &&
              (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (*plVar10 != 0)))))) {
            FUN_147ca0828(*plVar10,param_2,uVar4,uVar5,*(undefined1 *)(param_1 + 10),
                          *(undefined1 *)(param_1 + 10),0xffffffff);
            iVar6 = *(int *)(lVar3 + 0x238);
          }
          lVar12 = lVar12 + 1;
        } while ((int)lVar12 < iVar6);
      }
    }
  }
  return;
}



// FUNCTION 143559dfc FUN_143559dfc body=527 status=ok
// SIG undefined FUN_143559dfc(void)

void FUN_143559dfc(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  bool bVar12;
  
  if ((((*(int *)(param_1 + 0x10) == 0) || (uVar9 = *(uint *)(param_1 + 0xc), (int)uVar9 < 0)) ||
      (DAT_14c9647dc <= (int)uVar9)) ||
     (((plVar5 = (longlong *)
                 ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
       plVar5 == (longlong *)0x0 || ((int)plVar5[2] != *(int *)(param_1 + 0x10))) ||
      (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (*plVar5 == 0)))))) {
    if (*(longlong *)(param_1 + 0x30) == 0) {
      uVar9 = 0;
      uVar7 = 0;
    }
    else {
      uVar9 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0xc);
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      uVar7 = (ulonglong)*(uint *)(lVar10 + 0x10);
      if (*(uint *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar3 = *(uint *)(lVar10 + 0x10);
        bVar12 = uVar3 == 0;
        if (bVar12) {
          *(uint *)(lVar10 + 0x10) = uVar6;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar12) {
          uVar3 = uVar6;
        }
        uVar7 = (ulonglong)uVar3;
      }
    }
    uVar8 = *(undefined4 *)(param_1 + 0x20);
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    uVar7 = (ulonglong)uVar9 | uVar7 << 0x20;
    *(undefined1 *)(param_2 + 0x60) = 1;
  }
  else {
    cVar2 = FUN_147b98722(param_1);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      uVar9 = 0;
      uVar7 = 0;
    }
    else {
      uVar9 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0xc);
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      uVar7 = (ulonglong)*(uint *)(lVar10 + 0x10);
      if (*(uint *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar3 = *(uint *)(lVar10 + 0x10);
        bVar12 = uVar3 == 0;
        if (bVar12) {
          *(uint *)(lVar10 + 0x10) = uVar6;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar12) {
          uVar3 = uVar6;
        }
        uVar7 = (ulonglong)uVar3;
      }
    }
    uVar8 = *(undefined4 *)(param_1 + 0x20);
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    *(char *)(param_2 + 0x60) = cVar2;
    if (cVar2 == '\0') {
      return;
    }
    uVar7 = (ulonglong)uVar9 | uVar7 << 0x20;
  }
  iVar1 = *(int *)(param_2 + 0x58);
  *(uint *)(param_2 + 0x58) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar1 + 1U) {
    FUN_14579eadc(param_2,iVar1);
  }
  lVar10 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar10 = param_2;
  }
  lVar4 = (longlong)iVar1;
  *(undefined8 *)(lVar10 + lVar4 * 0x14) = uVar11;
  *(undefined4 *)(lVar10 + 8 + lVar4 * 0x14) = uVar8;
  *(ulonglong *)(lVar10 + 0xc + lVar4 * 0x14) = uVar7;
  return;
}



// FUNCTION 14355a00c FUN_14355a00c body=2552 status=ok
// SIG undefined FUN_14355a00c(void)

void FUN_14355a00c(longlong *param_1,byte *param_2,undefined1 *param_3,ulonglong param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  undefined7 uVar17;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != (longlong *)0x0) {
    lVar12 = 0;
    plVar8 = param_1;
    do {
      if ((*(uint *)(plVar8 + 1) & 0x30) != 0) goto LAB_14355a056;
      plVar8 = (longlong *)plVar8[4];
    } while (plVar8 != (longlong *)0x0);
  }
  lVar12 = param_1[4];
LAB_14355a056:
  *param_2 = 0;
  *param_3 = 0;
  uVar17 = (undefined7)(param_4 >> 8);
  switch((char)param_1[0x21]) {
  case '\x01':
    cVar4 = *(char *)((longlong)param_1 + 0x109);
    if (cVar4 != '\0') {
      if (cVar4 != '\x01') {
        if (cVar4 != '\x02') break;
        goto LAB_14355a2ee;
      }
      FUN_144a3ada0(lVar12,param_1);
    }
  case '\x02':
    *param_3 = 1;
    break;
  default:
    break;
  case '\x04':
    if (*(int *)(lVar12 + 0x15c) == 0) {
      if (*(char *)(lVar12 + 0x758) != '\0') goto LAB_14355a358;
      plVar8 = (longlong *)FUN_14050fd64();
      cVar4 = (**(code **)(*plVar8 + 0x560))(plVar8,param_1[0x2f]);
      if (cVar4 != '\0') goto LAB_14355a358;
      bVar6 = 0;
    }
    else {
      plVar8 = (longlong *)FUN_14050fd64();
      (**(code **)(*plVar8 + 0x568))(plVar8,param_1[0x2f]);
LAB_14355a358:
      FUN_140191f3c(param_1,6);
      *(undefined1 *)(param_1 + 0x36) = 0;
      if ((char)param_1[0x34] == '\x01') {
        *(undefined1 *)(param_1 + 0x34) = 0;
      }
      bVar6 = 1;
      FUN_14039bbcc(param_1,1);
    }
    *param_2 = bVar6;
    break;
  case '\x05':
    cVar4 = *(char *)((longlong)param_1 + 0x109);
    if (cVar4 != '\0') {
      if (cVar4 == '\x02') {
        if ((param_1[0x2f] != 0) && (cVar4 = FUN_1403997f0(param_1), cVar4 == '\0')) {
          FUN_1408f4c78(param_1,lVar12);
        }
        uVar14 = CONCAT71(uVar17,1);
        uVar7 = 1;
        if ((*(byte *)((longlong)param_1 + 0x10a) & 4) == 0) {
          cVar4 = (**(code **)(*param_1 + 0x2f0))(param_1);
          uVar13 = 1;
          if (cVar4 == '\0') {
            uVar13 = FUN_1417f999a(lVar12);
            uVar14 = (ulonglong)uVar13;
            uVar13 = 0;
          }
        }
        else {
          uVar13 = 1;
        }
        if ((DAT_14c761470 != 0) && (bVar6 = *(char *)(lVar12 + 0x152) - 1, bVar6 < 6)) {
          uVar7 = *(uint *)(&DAT_14a9bb8d0 + (ulonglong)bVar6 * 4);
        }
        lVar9 = param_1[0x21];
        (**(code **)(*param_1 + 0x300))(param_1,lVar12,uVar14 & 0xffffffff,uVar7 | uVar13);
        if (((char)param_1[0x21] != '\x03') && (*param_3 = 1, (char)param_1[0x21] != (char)lVar9)) {
          *param_2 = 1;
        }
        if (param_1[0x2f] == 0) {
          FUN_1408f4c78(param_1,lVar12);
        }
        if ((char)param_1[0x21] != '\x03') {
          bVar6 = (**(code **)(*param_1 + 0x2e0))(param_1);
          *param_2 = *param_2 | bVar6;
        }
        break;
      }
      if (cVar4 != '\x03') break;
      FUN_140191f3c(param_1,4);
      goto LAB_14355a22c;
    }
    FUN_1408f4c78(param_1,lVar12);
    (**(code **)(*param_1 + 0x308))(param_1,0);
    FUN_1408f4c78(param_1,lVar12);
    goto LAB_14355a87a;
  case '\x06':
    lVar9 = param_1[0x2f];
    if (lVar9 == 0) break;
    if (*(char *)((longlong)param_1 + 0x109) == '\x02') {
      FUN_140191f3c(param_1,5);
      *param_2 = 1;
      *param_3 = 1;
      plVar8 = param_1;
      if ((*(byte *)(param_1 + 0x1d) & 0x40) == 0) {
        for (; plVar8 != (longlong *)0x0; plVar8 = (longlong *)plVar8[4]) {
          if ((*(uint *)(plVar8 + 1) & 0x30) != 0) goto switchD_14355a07d_caseD_3;
        }
        lVar12 = param_1[4];
        if ((lVar12 != 0) &&
           ((bVar6 = *(byte *)(lVar12 + 0x152), bVar6 == 1 ||
            ((bVar6 < 7 && ((0x68U >> (bVar6 & 0x1f) & 1) != 0)))))) {
          if (*(char *)(lVar12 + 0xd9) == '\x01') {
            bVar6 = *(byte *)(lVar12 + 0xd8);
          }
          else {
            if (DAT_14cae8fe0 == '\0') {
              if (((*(longlong *)(lVar12 + 0x30) == 0) ||
                  (lVar9 = *(longlong *)(*(longlong *)(lVar12 + 0x30) + 0x2b0), lVar9 == 0)) ||
                 (*(longlong *)(lVar9 + 0x3f0) == 0)) {
                bVar6 = 0;
              }
              else {
                bVar6 = FUN_14572a5ea();
              }
            }
            else {
              bVar6 = 1;
            }
            *(byte *)(lVar12 + 0xd8) = bVar6;
            *(undefined1 *)(lVar12 + 0xd9) = 1;
          }
          if ((bVar6 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
          }
        }
      }
      break;
    }
    local_54 = *(undefined4 *)((longlong)param_1 + 0x1a4);
    for (plVar8 = param_1; plVar8 != (longlong *)0x0; plVar8 = (longlong *)plVar8[4]) {
      if ((*(uint *)(plVar8 + 1) & 0x30) != 0) goto LAB_14355a40d;
    }
    lVar10 = param_1[4];
    if ((lVar10 == 0) ||
       ((bVar6 = *(byte *)(lVar10 + 0x152), bVar6 != 1 &&
        ((6 < bVar6 || ((0x68U >> (bVar6 & 0x1f) & 1) == 0)))))) {
LAB_14355a40d:
      if (*(code **)(*param_1 + 0x2a8) == (code *)&LAB_14485d52e) {
        uVar7 = FUN_14485d534(param_1,1);
      }
      else {
        uVar7 = (**(code **)(*param_1 + 0x2a8))(param_1,1);
      }
      uVar14 = (ulonglong)uVar7;
      plVar8 = param_1;
      if ((*(byte *)(param_1 + 0x1d) & 0x40) == 0) {
        for (; plVar8 != (longlong *)0x0; plVar8 = (longlong *)plVar8[4]) {
          if ((*(uint *)(plVar8 + 1) & 0x30) != 0) goto LAB_14355a48f;
        }
        lVar9 = param_1[4];
        if ((lVar9 != 0) &&
           ((bVar6 = *(byte *)(lVar9 + 0x152), bVar6 == 1 ||
            ((bVar6 < 7 && ((0x68U >> (bVar6 & 0x1f) & 1) != 0)))))) {
          if (*(char *)(lVar9 + 0xd9) == '\x01') {
            bVar6 = *(byte *)(lVar9 + 0xd8);
          }
          else {
            if (DAT_14cae8fe0 == '\0') {
              if (((*(longlong *)(lVar9 + 0x30) == 0) ||
                  (lVar10 = *(longlong *)(*(longlong *)(lVar9 + 0x30) + 0x2b0), lVar10 == 0)) ||
                 (*(longlong *)(lVar10 + 0x3f0) == 0)) {
                bVar6 = 0;
              }
              else {
                bVar6 = FUN_14572a5ea();
              }
            }
            else {
              bVar6 = 1;
            }
            *(byte *)(lVar9 + 0xd8) = bVar6;
            *(undefined1 *)(lVar9 + 0xd9) = 1;
          }
          if ((bVar6 & 1) != 0) {
            cVar4 = FUN_14049c81a(param_1,0);
            if (cVar4 != '\0') break;
            if ((*(char *)((longlong)param_1 + 0x199) == '\x01') && ((char)param_1[0x33] == '\0')) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
            }
          }
        }
      }
LAB_14355a48f:
      if ((char)uVar7 == '\0') break;
    }
    else {
      AcquireSRWLockShared((PSRWLOCK)(lVar10 + 0xe0));
      uVar14 = CONCAT71((int7)((ulonglong)lVar9 >> 8),*(undefined1 *)(lVar9 + 0x243)) &
               0xffffffffffffff0c;
      ReleaseSRWLockShared((PSRWLOCK)(lVar10 + 0xe0));
      if ((char)uVar14 != '\x04') {
        if ((((*(byte *)(param_1[0x2f] + 0x243) & 1) != 0) &&
            (lVar9 = *(longlong *)(*(longlong *)(param_1[0x2f] + 0x2b0) + 0x3f0), lVar9 != 0)) &&
           (cVar4 = FUN_147dc0c8c(lVar9,lVar10), cVar4 == '\0')) break;
        goto LAB_14355a40d;
      }
    }
    local_70 = (longlong *)(CONCAT44(local_70._4_4_,local_54) & 0xffffffff7fffffff);
    local_78 = param_4;
    local_68 = param_1;
    FUN_143786ffe(lVar12,param_1[0x2f],param_1 + 0x10,
                  (*(byte *)((longlong)param_1 + 0x10a) & 4) == 0);
    if ((*(byte *)(param_1[0x2f] + 0x240) & 0x20) == 0) break;
    FUN_1408f4c78(param_1,lVar12);
    plVar8 = *(longlong **)(lVar12 + 0x218);
    if (plVar8 != (longlong *)0x0) {
      uVar2 = *(undefined1 *)(param_1[0x2f] + 0x240);
      lVar9 = param_1[0x2f];
LAB_14355a50d:
      lVar10 = lVar9;
      lVar9 = lVar10;
      if (*(longlong *)(lVar10 + 0x20) != 0) goto code_r0x00014355a51c;
      goto LAB_14355a52f;
    }
    goto LAB_14355a7c2;
  case '\a':
    if (*(char *)((longlong)param_1 + 0x109) == '\x03') {
LAB_14355a2ee:
      uVar14 = CONCAT71(uVar17,1);
      uVar7 = 1;
      if ((*(byte *)((longlong)param_1 + 0x10a) & 4) == 0) {
        cVar4 = (**(code **)(*param_1 + 0x2f0))(param_1);
        uVar13 = 1;
        if (cVar4 == '\0') {
          uVar13 = FUN_1417f999a(lVar12);
          uVar14 = (ulonglong)uVar13;
          uVar13 = 0;
        }
      }
      else {
        uVar13 = 1;
      }
      if ((DAT_14c761470 != 0) && (bVar6 = *(char *)(lVar12 + 0x152) - 1, bVar6 < 6)) {
        uVar7 = *(uint *)(&DAT_14a9bb8d0 + (ulonglong)bVar6 * 4);
      }
      lVar9 = param_1[0x21];
      (**(code **)(*param_1 + 0x300))(param_1,lVar12,uVar14 & 0xffffffff,uVar7 | uVar13);
      if (((char)param_1[0x21] != '\x03') && (*param_3 = 1, (char)param_1[0x21] != (char)lVar9)) {
        *param_2 = 1;
      }
      if (param_1[0x2f] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
      }
      break;
    }
    if (*(char *)((longlong)param_1 + 0x109) != '\x02') break;
    FUN_140191f3c(param_1,8);
    *(undefined1 *)(param_1 + 0x36) = 0;
    if ((char)param_1[0x34] == '\x01') {
      *(undefined1 *)(param_1 + 0x34) = 0;
    }
    FUN_14039bbcc(param_1,0);
LAB_14355a22c:
    *param_2 = 1;
    break;
  case '\b':
    lVar9 = param_1[0x2f];
    if (lVar9 == 0) break;
    bVar6 = *(byte *)(lVar9 + 0x240);
    for (plVar8 = param_1; puVar15 = param_3, plVar8 != (longlong *)0x0;
        plVar8 = (longlong *)plVar8[4]) {
      if ((*(uint *)(plVar8 + 1) & 0x30) != 0) goto LAB_14355a163;
    }
    lVar10 = param_1[4];
    if ((lVar10 == 0) ||
       ((bVar1 = *(byte *)(lVar10 + 0x152), bVar1 != 1 &&
        ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))))) {
LAB_14355a163:
      cVar4 = (**(code **)(*param_1 + 0x2a8))(param_1,0);
      cVar5 = FUN_14039bea4(param_1);
      if (cVar5 == '\0') {
        if (cVar4 == '\0') break;
      }
      else {
        cVar5 = FUN_14049c81a(param_1,1);
        if (cVar4 != '\x01' || cVar5 != '\0') break;
      }
    }
    else {
      AcquireSRWLockShared((PSRWLOCK)(lVar10 + 0xe0));
      bVar1 = *(byte *)(lVar9 + 0x243);
      ReleaseSRWLockShared((PSRWLOCK)(lVar10 + 0xe0));
      if ((bVar1 & 0xc) != 8) goto LAB_14355a163;
    }
    uVar7 = *(uint *)((longlong)param_1 + 0x1a4);
    uVar13 = uVar7 & 0x7fffffff;
    uVar14 = (ulonglong)uVar13;
    cVar4 = (**(code **)(*param_1 + 0x2e8))(param_1);
    if ((cVar4 == '\0') && (*(byte *)(lVar12 + 0x152) < 7)) {
      uVar16 = CONCAT71((int7)((ulonglong)puVar15 >> 8),0x6a >> (*(byte *)(lVar12 + 0x152) & 0x1f));
    }
    else {
      uVar16 = 0;
    }
    local_78 = CONCAT44(local_78._4_4_,uVar7) & 0xffffffff7fffffff;
    local_70 = param_1;
    FUN_143787f6c(lVar12,param_1[0x2f],uVar16 & 0xffffffffffffff01,param_4);
    lVar9 = param_1[0x2f];
    if ((bVar6 & 0x20) != 0) {
      bVar6 = *(byte *)(lVar9 + 0x240);
      uVar3 = (undefined3)(uVar13 >> 8);
      uVar14 = (ulonglong)CONCAT31(uVar3,bVar6);
      if ((*(char *)(lVar9 + 0x241) < '\0' && (bVar6 & 0x20) == 0) &&
         (plVar8 = *(longlong **)(lVar12 + 0x218), plVar8 != (longlong *)0x0)) {
LAB_14355a6d4:
        lVar10 = lVar9;
        lVar9 = lVar10;
        if (*(longlong *)(lVar10 + 0x20) != 0) goto code_r0x00014355a6e3;
        goto LAB_14355a6f6;
      }
    }
    goto LAB_14355a7f5;
  }
  goto switchD_14355a07d_caseD_3;
code_r0x00014355a6e3:
  lVar9 = *(longlong *)(lVar10 + 0x20);
  if ((*(uint *)(lVar10 + 8) >> 0x1c & 1) == 0) goto LAB_14355a6d4;
  lVar9 = FUN_142840154(lVar10);
LAB_14355a6f6:
  if (lVar9 == 0) {
    lVar9 = *(longlong *)(lVar10 + 0x20);
    goto LAB_14355a6d4;
  }
  uVar14 = (ulonglong)CONCAT31(uVar3,bVar6) & 0xffffffffffffff01;
  local_50 = *(undefined8 *)(lVar9 + 0x18);
  (**(code **)(*plVar8 + 0x450))(plVar8,&local_50,lVar12,uVar14);
  lVar9 = param_1[0x2f];
LAB_14355a7f5:
  bVar6 = *(byte *)(lVar9 + 0x240);
  if (((bVar6 & 0x20) != 0) || ((*(byte *)(lVar9 + 0x242) & 8) != 0))
  goto switchD_14355a07d_caseD_3;
  if ((-1 < *(char *)(lVar9 + 0x241)) &&
     (plVar8 = *(longlong **)(lVar12 + 0x218), plVar8 != (longlong *)0x0)) {
LAB_14355a820:
    lVar10 = lVar9;
    lVar9 = lVar10;
    if (*(longlong *)(lVar10 + 0x20) != 0) goto code_r0x00014355a82f;
    goto LAB_14355a842;
  }
  goto LAB_14355a870;
code_r0x00014355a51c:
  lVar9 = *(longlong *)(lVar10 + 0x20);
  if ((*(uint *)(lVar10 + 8) >> 0x1c & 1) == 0) goto LAB_14355a50d;
  lVar9 = FUN_142840154(lVar10);
LAB_14355a52f:
  if (lVar9 == 0) {
    lVar9 = *(longlong *)(lVar10 + 0x20);
    goto LAB_14355a50d;
  }
  local_50 = *(undefined8 *)(lVar9 + 0x18);
  (**(code **)(*plVar8 + 0x448))
            (plVar8,&local_50,lVar12,(uint)CONCAT71((int7)(uVar14 >> 8),uVar2) & 0xffffff01);
LAB_14355a7c2:
  uVar11 = 7;
  goto LAB_14355a875;
code_r0x00014355a82f:
  lVar9 = *(longlong *)(lVar10 + 0x20);
  if ((*(uint *)(lVar10 + 8) >> 0x1c & 1) == 0) goto LAB_14355a820;
  lVar9 = FUN_142840154(lVar10);
LAB_14355a842:
  if (lVar9 == 0) {
    lVar9 = *(longlong *)(lVar10 + 0x20);
    goto LAB_14355a820;
  }
  local_50 = *(undefined8 *)(lVar9 + 0x18);
  (**(code **)(*plVar8 + 0x450))
            (plVar8,&local_50,lVar12,(uint)CONCAT71((int7)(uVar14 >> 8),bVar6) & 0xffffff01);
LAB_14355a870:
  uVar11 = 5;
LAB_14355a875:
  FUN_140191f3c(param_1,uVar11);
LAB_14355a87a:
  *param_2 = 1;
  *param_3 = 1;
switchD_14355a07d_caseD_3:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14355aa64 FUN_14355aa64 body=403 status=ok
// SIG undefined FUN_14355aa64(void)

void FUN_14355aa64(longlong *param_1,longlong param_2,longlong param_3)

{
  PSRWLOCK SRWLock;
  byte bVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar2 = *(longlong *)(param_2 + 0xc0);
  *(byte *)(param_2 + 0x242) =
       *(byte *)(param_2 + 0x242) & 0x7f | *(char *)((longlong)param_1 + 0x10a) * '\x02' & 0x80U;
  if (lVar2 != 0) {
    lVar5 = param_1[0x2f];
    if (lVar5 != 0) {
      SRWLock = (PSRWLOCK)(lVar2 + 0xe0);
      AcquireSRWLockShared(SRWLock);
      bVar1 = *(byte *)(lVar5 + 0x243);
      ReleaseSRWLockShared(SRWLock);
      if ((bVar1 & 0xc) == 4) goto LAB_14355ab2e;
      lVar5 = param_1[0x2f];
      AcquireSRWLockShared(SRWLock);
      if (lVar5 == 0) {
        ReleaseSRWLockShared(SRWLock);
      }
      else {
        bVar1 = *(byte *)(lVar5 + 0x243);
        ReleaseSRWLockShared(SRWLock);
        if ((bVar1 & 0xc) == 8) goto LAB_14355ab2e;
      }
    }
    (**(code **)(*param_1 + 0x308))(param_1,param_2);
    FUN_1447cd2ec(param_1 + 0x27,0);
  }
LAB_14355ab2e:
  FUN_14356787a(param_2);
  plVar4 = (longlong *)FUN_140083894();
  (**(code **)(*plVar4 + 0x48))(plVar4,param_2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1);
  if (cVar3 != '\0') {
    *(byte *)(param_2 + 0x241) = *(byte *)(param_2 + 0x241) | 0x80;
    if (0 < (longlong)(int)param_1[0xd]) {
      lVar5 = 0;
      do {
        plVar4 = (longlong *)(param_1[0xc] + lVar5);
        if (*plVar4 == *(longlong *)(param_3 + 0x18)) break;
        bVar6 = (longlong)(int)param_1[0xd] * 8 + -8 != lVar5;
        lVar5 = lVar5 + 8;
      } while (bVar6);
      *(byte *)(param_2 + 0x242) =
           *(byte *)(param_2 + 0x242) & 0xfe | *plVar4 == *(longlong *)(param_3 + 0x18);
    }
  }
  *(byte *)(param_2 + 0x242) = *(byte *)(param_2 + 0x242) | *(byte *)(param_1 + 0x1c);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x152) == '\x02')) {
    FUN_147dab550(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 14355abf8 FUN_14355abf8 body=3188 status=ok
// SIG undefined FUN_14355abf8(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_14355abf8(code ***param_1,code *****param_2,char param_3,int param_4)

{
  PSRWLOCK SRWLock;
  code ****ppppcVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  code ***pppcVar5;
  code ******ppppppcVar6;
  undefined8 *puVar7;
  char cVar8;
  undefined4 uVar9;
  code **ppcVar10;
  code ******ppppppcVar11;
  code ****ppppcVar12;
  code *******pppppppcVar13;
  code *******pppppppcVar14;
  code *******pppppppcVar15;
  code *****pppppcVar16;
  uint *puVar17;
  byte bVar18;
  code *****pppppcVar19;
  longlong lVar20;
  code **unaff_RDI;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  uint uVar26;
  bool bVar27;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  uint local_110;
  undefined8 local_108;
  ulonglong local_100;
  wchar_t *local_f8;
  code *local_f0;
  undefined1 *local_e8;
  code *******local_e0;
  code *local_d8;
  code *local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  code *****local_88;
  undefined8 local_80;
  code *******local_78;
  int local_70;
  undefined4 local_6c;
  code ******local_68;
  undefined1 local_5c [4];
  code *******local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(char *)(param_1 + 0x21) == '\x03') {
    uVar21 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    goto LAB_14355ad1e;
  }
  if (*(char *)(param_1 + 0x21) != '\x02') {
    bVar18 = *(byte *)((longlong)param_2 + 0x152);
    if ((bVar18 == 1) || ((bVar18 < 7 && ((0x68U >> (bVar18 & 0x1f) & 1) != 0)))) {
      iVar23 = *(int *)((longlong)param_1 + 0xe4);
      if (((longlong)iVar23 < 0) || (*(int *)(param_1 + 0xd) <= iVar23)) {
        (*(*param_1)[0x5a])(param_1,&local_68);
      }
      else {
        local_68 = (code ******)param_1[0xc][iVar23];
      }
      bVar27 = true;
    }
    else {
      (*(*param_1)[0x5a])(param_1,&local_68);
      bVar27 = false;
    }
    bVar18 = *(byte *)(param_1 + 0x1d);
    if ((bVar18 & 4) == 0) {
      ppcVar10 = param_1[0x2f];
      if (param_1[0x2f] != (code **)0x0) {
LAB_14355aca7:
        unaff_RDI = ppcVar10;
        ppcVar10 = unaff_RDI;
        if ((code **)unaff_RDI[4] != (code **)0x0) goto code_r0x00014355acb6;
        goto LAB_14355acc7;
      }
      ppppppcVar11 = (code ******)0x0;
      goto LAB_14355ace9;
    }
    ppppppcVar11 = (code ******)param_1[0x32];
    goto LAB_14355acf9;
  }
  goto LAB_14355ad1c;
code_r0x00014355ae96:
  iVar23 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_14355ae99:
  if (iVar23 == 0) {
LAB_14355b070:
    if (((ulonglong)pppcVar5[0x1d] & 1) == 0) {
      FUN_140191f3c(param_1,&DAT_149e05d02);
    }
    goto LAB_14355ad1c;
  }
LAB_14355ae15:
  ppppcVar12 = ppppcVar12 + 1;
  if (ppppcVar12 == ppppcVar1) goto LAB_14355aebe;
  goto LAB_14355add8;
code_r0x00014355afe5:
  pppppppcVar13 = (code *******)pppppppcVar15[4];
  if ((*(uint *)(pppppppcVar15 + 1) >> 0x1c & 1) != 0) {
    pppppppcVar13 = (code *******)FUN_142840154(pppppppcVar15);
LAB_14355aff9:
    if (pppppppcVar13 == (code *******)0x0) {
      pppppppcVar13 = (code *******)pppppppcVar15[4];
      goto LAB_14355afd6;
    }
    goto LAB_14355af4f;
  }
  goto LAB_14355afd6;
code_r0x00014355b0ce:
  pppppcVar16 = (code *****)pppppcVar19[4];
  if ((*(uint *)(pppppcVar19 + 1) >> 0x1c & 1) == 0) goto LAB_14355b0bf;
  pppppcVar16 = (code *****)FUN_142840154(pppppcVar19);
LAB_14355b0e0:
  if (pppppcVar16 == (code *****)0x0) {
    pppppcVar16 = (code *****)pppppcVar19[4];
    goto LAB_14355b0bf;
  }
  local_c0 = (code **)(CONCAT44(local_c0._4_4_,*(undefined4 *)((longlong)pppppcVar16 + 0x2c)) &
                      0xffffffff00100000);
  pppppcVar16 = param_2;
LAB_14355b0fd:
  pppppcVar19 = pppppcVar16;
  pppppcVar16 = pppppcVar19;
  if ((code *****)pppppcVar19[4] != (code *****)0x0) goto code_r0x00014355b10c;
  goto LAB_14355b11f;
code_r0x00014355b10c:
  pppppcVar16 = (code *****)pppppcVar19[4];
  if ((*(uint *)(pppppcVar19 + 1) >> 0x1c & 1) == 0) goto LAB_14355b0fd;
  pppppcVar16 = (code *****)FUN_142840154(pppppcVar19);
LAB_14355b11f:
  if (pppppcVar16 == (code *****)0x0) {
    pppppcVar16 = (code *****)pppppcVar19[4];
    goto LAB_14355b0fd;
  }
  FUN_1400021e4(&local_68,&local_78);
  FUN_147daa23a(&local_58,&local_78,param_2 + 0x19);
  if (local_78 != (code *******)0x0) {
    FUN_1400020a8();
  }
  pppppppcVar13 = local_58;
  if ((int)local_50 == 0) {
    pppppppcVar13 = (code *******)&DAT_149dfb77a;
  }
  uVar26 = (uint)local_c0;
  FUN_1446f470e(&local_80,pppppppcVar13,1);
  if (DAT_14c951858 == 0) {
    local_78 = (code *******)FUN_1449e2820;
    local_d0 = FUN_14081d0ea;
    local_d8 = FUN_14081d0ea;
    local_e0 = (code *******)&local_78;
    local_e8 = &LAB_1468c5283;
    local_f0 = FUN_142809da0;
    local_f8 = L"Engine";
    local_100 = 0x400000000;
    local_108 = CONCAT44(local_108._4_4_,0x10000000);
    local_110 = 8;
    local_118 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  local_110 = 0;
  local_118 = 0;
  lVar25 = FUN_140be85e0(DAT_14c951858,0,local_80,0);
  if ((param_4 != 1 && lVar25 != 0) && ((*(byte *)(lVar25 + 0x28) & 1) == 0)) {
    (**(code **)(*DAT_14cb0d2b0 + 0x378))();
  }
  if (local_58 != (code *******)0x0) {
    FUN_1400020a8();
  }
  uVar26 = uVar26 | 0x20000;
LAB_14355b01c:
  if (param_3 == '\0') goto LAB_14355ad1e;
  if (bVar27) {
    iVar23 = *(int *)((longlong)param_1 + 0xe4);
    if (((longlong)iVar23 < 0) || (*(int *)(param_1 + 0xd) <= iVar23)) goto LAB_14355b04e;
    if (iVar23 < *(int *)(param_1 + 0xf)) {
      local_88 = (code *****)param_1[0xe][iVar23];
      goto LAB_14355b052;
    }
    local_88 = (code *****)0x0;
LAB_14355b191:
    ppppppcVar11 = (code ******)&local_68;
  }
  else {
LAB_14355b04e:
    local_88 = *(code ******)((longlong)param_1 + 0x54);
LAB_14355b052:
    if (local_88 == (code *****)0x0) goto LAB_14355b191;
    ppppppcVar11 = &local_88;
  }
  FUN_1400021e4(ppppppcVar11,&local_78);
  FUN_14064b67c(&local_58,&local_78);
  if (local_78 != (code *******)0x0) {
    FUN_1400020a8();
  }
  local_78 = local_58;
  local_70 = (int)local_50;
  local_6c = local_50._4_4_;
  iVar23 = (int)local_50 + -1;
  if ((int)local_50 == 0) {
    iVar23 = 0;
  }
  local_98 = 0;
  local_90 = 0;
  local_50 = (undefined8 *)CONCAT44(local_50._4_4_,iVar23);
  FUN_1414176ea();
  FUN_140191f3c(param_1,3);
  for (pppcVar5 = param_1; pppcVar5 != (code ***)0x0; pppcVar5 = (code ***)pppcVar5[4]) {
    if (((ulonglong)pppcVar5[1] & 0x30) != 0) goto LAB_14355b25c;
  }
  ppcVar10 = param_1[4];
  if ((ppcVar10 != (code **)0x0) &&
     ((bVar18 = *(byte *)((longlong)ppcVar10 + 0x152), bVar18 == 1 ||
      ((bVar18 < 7 && ((0x68U >> (bVar18 & 0x1f) & 1) != 0)))))) {
    *(short *)((longlong)ppcVar10 + 0x75a) = *(short *)((longlong)ppcVar10 + 0x75a) + 1;
  }
LAB_14355b25c:
  if (param_2 == (code *****)0x0) {
    local_b8._0_4_ = 0;
    iVar23 = 0;
    uVar4 = (uint)local_b8;
  }
  else {
    uVar4 = *(uint *)((longlong)param_2 + 0xc);
    local_b8 = (code *******)(ulonglong)uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar25 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar25 = 0;
    }
    iVar23 = *(int *)(lVar25 + 0x10);
    if (*(int *)(lVar25 + 0x10) == 0) {
      LOCK();
      iVar23 = DAT_14c964868 + 1;
      UNLOCK();
      iVar24 = DAT_14c964868 + 1;
      bVar27 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar23;
      if (bVar27) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar24);
      }
      LOCK();
      iVar23 = *(int *)(lVar25 + 0x10);
      bVar27 = iVar23 == 0;
      if (bVar27) {
        *(int *)(lVar25 + 0x10) = iVar24;
        iVar23 = 0;
      }
      UNLOCK();
      uVar4 = (uint)local_b8;
      if (bVar27) {
        iVar23 = iVar24;
      }
    }
  }
  local_b8._0_4_ = uVar4;
  local_50 = &local_b8;
  local_b8 = (code *******)CONCAT44(iVar23,(uint)local_b8);
  local_58 = &local_68;
  FUN_140a1a788(&DAT_14cae8cc0,local_5c,&local_58,0);
  bVar18 = *(byte *)((longlong)param_2 + 0x152);
  uVar4 = (uint)((ulonglong)local_68 >> 0x10);
  uVar22 = (uint)local_68 & 0xffff;
  puVar17 = (uint *)FUN_140b19d32(&DAT_14cb108c8,
                                  ((uint)local_68 << 0x10 | uVar22) +
                                  (int)((ulonglong)local_68 >> 0x20) +
                                  (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar22 >> 4),&local_68);
  *puVar17 = (uint)bVar18;
  *(undefined8 *)((longlong)param_1 + 0xec) = local_98;
  *(undefined1 *)((longlong)param_1 + 0xf4) = local_90;
  uVar4 = DAT_14cae9018 + *(uint *)(param_1 + 10);
  uVar22 = 0x7fffffff;
  if (-1 < (int)((DAT_14cae9018 ^ uVar4) & (*(uint *)(param_1 + 10) ^ uVar4))) {
    uVar22 = uVar4;
  }
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,3,0x10);
  puVar7 = local_a8;
  local_a0 = 3;
  *local_a8 = &PTR_LAB_149e665f0;
  LOCK();
  UNLOCK();
  lVar20 = DAT_14c758608 + 1;
  lVar25 = DAT_14c758608 + 1;
  if (lVar20 == 0) {
    LOCK();
    UNLOCK();
    lVar20 = DAT_14c758608 + 2;
    lVar25 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar25;
  local_a8[2] = lVar20;
  *local_a8 = &PTR_FUN_14a9bb640;
  local_a8[3] = 0;
  iVar23 = 0;
  if (param_1 != (code ***)0x0) {
    uVar4 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_a8 + 3) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar25 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar25 = 0;
    }
    iVar23 = *(int *)(lVar25 + 0x10);
    if (*(int *)(lVar25 + 0x10) == 0) {
      LOCK();
      iVar23 = DAT_14c964868 + 1;
      UNLOCK();
      iVar24 = DAT_14c964868 + 1;
      bVar27 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar23;
      if (bVar27) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar24);
      }
      LOCK();
      iVar23 = *(int *)(lVar25 + 0x10);
      bVar27 = iVar23 == 0;
      if (bVar27) {
        *(int *)(lVar25 + 0x10) = iVar24;
        iVar23 = 0;
      }
      UNLOCK();
      if (bVar27) {
        iVar23 = iVar24;
      }
    }
  }
  *(int *)((longlong)puVar7 + 0x1c) = iVar23;
  puVar7[4] = FUN_140c43466;
  local_100 = local_100 & 0xffffffff00000000;
  local_108 = 0;
  local_118 = 0xffffffff;
  local_110 = uVar22;
  uVar9 = FUN_140b1a772(&local_98,local_68,&local_a8,uVar26);
  iVar23 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar23 + 1U;
  if (*(uint *)((longlong)param_1 + 0x104) < iVar23 + 1U) {
    FUN_1446f48e2(param_1 + 0x1f,iVar23);
  }
  *(undefined4 *)((longlong)param_1[0x1f] + (longlong)iVar23 * 4) = uVar9;
  if ((param_4 == 1) || ((cVar8 = (*(*param_1)[0x5e])(), param_4 != 2 && (cVar8 != '\0')))) {
    (*(code *)PTR_FUN_14c75b118)();
    local_b8 = (code *******)0x0;
    local_b0 = *(int *)(param_1 + 0x20);
    lVar25 = (longlong)local_b0;
    ppcVar10 = param_1[0x1f];
    if (lVar25 == 0) {
      local_ac = 0;
      iVar23 = 0;
    }
    else {
      FUN_144a06ca8(&local_b8,local_b0,0);
      memcpy(local_b8,ppcVar10,lVar25 << 2);
      iVar23 = local_b0;
    }
    if (DAT_14c948aa0 != (longlong *)0x0) {
      local_50 = (undefined8 *)CONCAT44(local_50._4_4_,iVar23);
      local_58 = local_b8;
      (**(code **)(*DAT_14c948aa0 + 0x60))(DAT_14c948aa0);
    }
    if (local_b8 != (code *******)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_78 != (code *******)0x0) {
    FUN_1400020a8();
  }
  goto LAB_14355ad1e;
code_r0x00014355acb6:
  ppcVar10 = (code **)unaff_RDI[4];
  if ((*(uint *)(unaff_RDI + 1) >> 0x1c & 1) == 0) goto LAB_14355aca7;
  ppcVar10 = (code **)FUN_142840154(unaff_RDI);
LAB_14355acc7:
  if (ppcVar10 == (code **)0x0) {
    ppcVar10 = (code **)unaff_RDI[4];
    goto LAB_14355aca7;
  }
  ppppppcVar11 = (code ******)ppcVar10[3];
  bVar18 = *(byte *)(param_1 + 0x1d);
LAB_14355ace9:
  param_1[0x32] = (code **)ppppppcVar11;
  *(byte *)(param_1 + 0x1d) = bVar18 | 4;
LAB_14355acf9:
  ppcVar10 = param_1[0x2f];
  uVar21 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if ((ppcVar10 != (code **)0x0) && (ppppppcVar11 == local_68)) goto LAB_14355ad1e;
  if (param_1[0x30] == (code **)0x0) {
    if (ppcVar10 != (code **)0x0) {
      SRWLock = (PSRWLOCK)(param_2 + 0x1c);
      AcquireSRWLockShared(SRWLock);
      bVar18 = *(byte *)((longlong)ppcVar10 + 0x243);
      ReleaseSRWLockShared(SRWLock);
      if ((bVar18 & 0xc) == 4) goto LAB_14355ad1c;
      ppcVar10 = param_1[0x2f];
      AcquireSRWLockShared(SRWLock);
      if (ppcVar10 == (code **)0x0) {
        ReleaseSRWLockShared(SRWLock);
      }
      else {
        bVar18 = *(byte *)((longlong)ppcVar10 + 0x243);
        ReleaseSRWLockShared(SRWLock);
        if ((bVar18 & 0xc) == 8) goto LAB_14355ad1c;
      }
    }
    ppppppcVar11 = local_68;
    if ((longlong)*(int *)(param_2 + 0x12) != 0) {
      ppppcVar12 = param_2[0x11];
      ppppcVar1 = ppppcVar12 + *(int *)(param_2 + 0x12);
LAB_14355add8:
      pppcVar5 = *ppppcVar12;
      if ((((pppcVar5 != param_1 && pppcVar5 != (code ***)0x0) &&
           ((*(byte *)(pppcVar5 + 0x21) & 0xfd) != 0)) &&
          ((*(byte *)(pppcVar5 + 0x21) != 1 || (1 < *(byte *)((longlong)pppcVar5 + 0x109))))) &&
         ((pppcVar5[6] == param_1[6] && (pppcVar5[7] == param_1[7])))) {
        iVar23 = *(int *)(pppcVar5 + 9);
        if (iVar23 == *(int *)(param_1 + 9)) {
          if (1 < iVar23) {
            local_c0 = param_1[8];
            lVar25 = 0;
            do {
              uVar2 = *(ushort *)((longlong)pppcVar5[8] + lVar25);
              uVar3 = *(ushort *)((longlong)local_c0 + lVar25);
              if (uVar2 == uVar3) {
                if (uVar2 == 0) break;
              }
              else {
                if (0x7f < (uVar3 | uVar2)) {
                  iVar23 = (uint)uVar2 - (uint)uVar3;
                  goto LAB_14355ae99;
                }
                if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3])
                goto code_r0x00014355ae96;
              }
              lVar25 = lVar25 + 2;
            } while( true );
          }
        }
        else if (*(int *)(param_1 + 9) + iVar23 != 1) goto LAB_14355ae15;
        goto LAB_14355b070;
      }
      goto LAB_14355ae15;
    }
LAB_14355aebe:
    if (DAT_14c951858 == 0) {
      local_e0 = (code *******)&local_58;
      local_58 = (code *******)FUN_1449e2820;
      local_d0 = FUN_14081d0ea;
      local_d8 = FUN_14081d0ea;
      local_e8 = &LAB_1468c5283;
      local_f0 = FUN_142809da0;
      local_f8 = L"Engine";
      local_100 = 0x400000000;
      local_108 = CONCAT44(local_108._4_4_,0x10000000);
      local_110 = 8;
      local_118 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    local_110 = 0x200000;
    local_118 = 0;
    pppppppcVar13 = (code *******)FUN_140be85e0(DAT_14c951858,0,ppppppcVar11,0);
    if (pppppppcVar13 != (code *******)0x0) {
      local_b8 = (code *******)&local_78;
      local_78 = (code *******)0x0;
      local_50 = &local_b8;
      local_58 = (code *******)FUN_143794c14;
      local_118 = 0;
      FUN_144a56f9f(pppppppcVar13,&local_58,0,0);
      pppppppcVar14 = local_78;
      if (local_78 != (code *******)0x0) {
LAB_14355af4f:
        if ((*(uint *)(pppppppcVar14 + 1) >> 0x1e & 1) == 0) {
          ppppppcVar11 = (code ******)param_1[0x2f];
          if ((ppppppcVar11 != (code ******)0x0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(ppppppcVar11);
          }
          ppppppcVar6 = pppppppcVar14[6];
          if (ppppppcVar6 != ppppppcVar11) {
            *(undefined1 *)((longlong)pppppppcVar14 + 0x152) =
                 *(undefined1 *)((longlong)param_2 + 0x152);
            if ((param_2 != (code *****)0x0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(param_2);
            }
            ppppppcVar6[0x18] = param_2;
            FUN_14355aa64(param_1,pppppppcVar14[6],pppppppcVar13);
          }
          goto LAB_14355ad1e;
        }
        goto LAB_14355ad1c;
      }
      pppppppcVar14 = (code *******)FUN_147dab1b4(pppppppcVar13,0);
      pppppppcVar13 = pppppppcVar14;
      if (pppppppcVar14 != (code *******)0x0) {
LAB_14355afd6:
        pppppppcVar15 = pppppppcVar13;
        pppppppcVar13 = pppppppcVar15;
        if ((code *******)pppppppcVar15[4] != (code *******)0x0) goto code_r0x00014355afe5;
        goto LAB_14355aff9;
      }
    }
    uVar26 = 0x20000;
    pppppcVar16 = param_2;
    if (*(char *)((longlong)param_2 + 0x152) == '\x03') {
LAB_14355b0bf:
      pppppcVar19 = pppppcVar16;
      pppppcVar16 = pppppcVar19;
      if ((code *****)pppppcVar19[4] != (code *****)0x0) goto code_r0x00014355b0ce;
      goto LAB_14355b0e0;
    }
    goto LAB_14355b01c;
  }
LAB_14355ad1c:
  uVar21 = 0;
LAB_14355ad1e:
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar21 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14355b86d FUN_14355b86d body=807 status=ok
// SIG undefined FUN_14355b86d(void)

void FUN_14355b86d(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  char *pcVar3;
  longlong *plVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  uint *puVar17;
  int iVar18;
  ulonglong uVar19;
  undefined1 auStack_b8 [32];
  char *local_98;
  uint *local_90;
  undefined4 local_84;
  longlong local_80;
  longlong *local_78;
  longlong local_70 [2];
  undefined2 *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
    lVar15 = 0;
    do {
      pcVar3 = *(char **)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar15);
      if (*(longlong *)(pcVar3 + 0x360) == param_1) {
        local_98 = pcVar3;
        if (((pcVar3 != (char *)0x0) && (*pcVar3 == '\x03')) &&
           ((longlong)*(int *)(pcVar3 + 0x2b8) != 0)) {
          plVar12 = *(longlong **)(pcVar3 + 0x2b0);
          local_78 = plVar12 + (longlong)*(int *)(pcVar3 + 0x2b8) * 2;
          local_80 = param_2;
          do {
            if ((*plVar12 != 0) &&
               (plVar4 = *(longlong **)(*plVar12 + 0x1b8), plVar4 != (longlong *)0x0)) {
              puVar17 = (uint *)(plVar4 + 2);
              iVar2 = (int)plVar4[5];
              if (iVar2 == 0) {
                uVar13 = 1;
                uVar19 = 0;
                iVar18 = 0;
                iVar7 = 0;
              }
              else {
                puVar6 = (uint *)plVar4[4];
                if ((uint *)plVar4[4] == (uint *)0x0) {
                  puVar6 = puVar17;
                }
                uVar14 = *puVar6;
                if (uVar14 == 0) {
                  iVar7 = iVar2 + 0x1e;
                  if (-1 < iVar2 + -1) {
                    iVar7 = iVar2 + -1;
                  }
                  uVar19 = 0;
                  uVar13 = (ulonglong)(uint)(iVar7 >> 5);
                  if (iVar7 >> 5 < 1) {
                    uVar13 = uVar19;
                  }
                  iVar18 = 0;
                  do {
                    if (uVar13 == uVar19) goto LAB_14355b9c6;
                    iVar18 = iVar18 + 0x20;
                    uVar14 = puVar6[uVar19 + 1];
                    uVar19 = uVar19 + 1;
                  } while (uVar14 == 0);
                }
                else {
                  uVar19 = 0;
                  iVar18 = 0;
                }
                uVar13 = (ulonglong)(-uVar14 & uVar14);
                uVar1 = uVar13 * 2 + 1;
                lVar15 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                  }
                }
                iVar7 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
                if (iVar2 <= iVar7) {
                  iVar7 = iVar2;
                }
              }
              if (iVar7 != iVar2) {
                uVar14 = 0xffffffff;
                iVar5 = iVar2;
                local_90 = puVar17;
                do {
                  if ((((*(byte *)(*plVar4 + (longlong)iVar7 * 0x40) & 1) != 0) &&
                      (lVar15 = *plVar4 + (longlong)iVar7 * 0x40, *(longlong *)(lVar15 + 0x10) == 0)
                      ) && (*(longlong *)(lVar15 + 0x18) == param_2)) {
                    local_84 = *(undefined4 *)(local_98 + 0x2c0);
                    FUN_1400021e4((undefined8 *)(lVar15 + 0x18),local_70);
                    FUN_147daa0c0(&local_60,local_70,local_84);
                    puVar11 = &DAT_149dfb77a;
                    if (local_58 != 0) {
                      puVar11 = local_60;
                    }
                    FUN_1446f470e(&local_50,puVar11,1);
                    *(undefined8 *)(lVar15 + 0x18) = local_50;
                    if (local_60 != (undefined2 *)0x0) {
                      FUN_1400020a8();
                    }
                    if (local_70[0] != 0) {
                      FUN_1400020a8();
                    }
                    iVar5 = (int)plVar4[5];
                    param_2 = local_80;
                    puVar17 = local_90;
                  }
                  uVar14 = uVar14 & ~(uint)uVar13;
                  puVar6 = (uint *)plVar4[4];
                  if ((uint *)plVar4[4] == (uint *)0x0) {
                    puVar6 = puVar17;
                  }
                  iVar7 = (int)uVar19;
                  lVar15 = (longlong)iVar7;
                  uVar8 = puVar6[lVar15] & uVar14;
                  if (uVar8 == 0) {
                    iVar9 = iVar5 + 0x1e;
                    if (-1 < iVar5 + -1) {
                      iVar9 = iVar5 + -1;
                    }
                    iVar9 = iVar9 >> 5;
                    iVar18 = iVar18 + 0x20;
                    iVar10 = iVar9;
                    if (iVar9 < iVar7) {
                      iVar10 = iVar7;
                    }
                    puVar17 = local_90;
                    if (iVar7 < iVar9) {
                      lVar16 = 0;
                      do {
                        uVar8 = puVar6[lVar15 + lVar16 + 1];
                        if (uVar8 != 0) {
                          uVar19 = (ulonglong)(iVar7 + (int)lVar16 + 1);
                          uVar14 = 0xffffffff;
                          goto LAB_14355ba8c;
                        }
                        iVar18 = iVar18 + 0x20;
                        lVar16 = lVar16 + 1;
                      } while (iVar10 - lVar15 != lVar16);
                      uVar14 = 0xffffffff;
                      iVar7 = iVar10;
                    }
                    uVar19 = (ulonglong)(iVar7 + 1);
                    iVar7 = iVar5;
                  }
                  else {
LAB_14355ba8c:
                    uVar13 = (ulonglong)(-uVar8 & uVar8);
                    uVar1 = uVar13 * 2 + 1;
                    lVar15 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                      }
                    }
                    iVar7 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
                    if (iVar5 <= iVar7) {
                      iVar7 = iVar5;
                    }
                  }
                } while (iVar7 != iVar2);
              }
            }
LAB_14355b9c6:
            plVar12 = plVar12 + 2;
          } while (plVar12 != local_78);
        }
        break;
      }
      lVar15 = lVar15 + 8;
    } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar15);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14355bb96 FUN_14355bb96 body=2562 status=ok
// SIG undefined FUN_14355bb96(void)

longlong * FUN_14355bb96(longlong *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  void *pvVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined8 uVar18;
  ulonglong *puVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  longlong *plVar23;
  ushort uVar24;
  int iVar25;
  longlong *plVar26;
  undefined2 *puVar27;
  undefined2 *puVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ushort uVar31;
  ulonglong uVar32;
  undefined1 auStack_568 [32];
  undefined8 local_548;
  undefined1 local_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined4 local_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  void *local_518;
  int local_510;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  void *local_4f8;
  int local_4f0;
  undefined2 *local_4e8;
  undefined2 *local_4e0;
  int local_4d8;
  undefined2 *local_4d0;
  uint local_4c8;
  int local_4c4;
  undefined2 *local_4c0;
  uint local_4b8;
  void *local_4b0;
  int local_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  void *local_488;
  int local_480 [256];
  ulonglong local_80 [8];
  
  local_80[0] = DAT_14c707940 ^ (ulonglong)auStack_568;
  FUN_140d2be42(&local_4b0,param_1 + 1);
  FUN_140d2bdd2(&local_4c0,param_1 + 1);
  lVar16 = param_1[0x11];
  if ((((lVar16 == 0) || (lVar15 = FUN_14129ec24(), lVar15 == 0)) ||
      (*(int *)(lVar16 + 0x38) < *(int *)(lVar15 + 0x38))) ||
     (lVar20 = param_1[0x11],
     lVar20 == 0 ||
     *(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) !=
     lVar15 + 0x30)) {
    lVar16 = FUN_14129ec24();
  }
  else {
    lVar16 = FUN_14129ec24();
    if (((lVar16 == 0) || (*(int *)(lVar20 + 0x38) < *(int *)(lVar16 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar20 + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) !=
        lVar16 + 0x30)) {
      lVar16 = 0;
    }
    else {
      lVar16 = param_1[0x11];
    }
  }
  iVar25 = *(int *)(*param_1 + 0xd0);
  uVar29 = (ulonglong)(iVar25 - 1);
  if (iVar25 == 0) {
    uVar29 = 0;
  }
  uVar21 = (uint)uVar29;
  if (0 < (int)uVar21) {
    puVar28 = &DAT_149dfb77a;
    if (iVar25 != 0) {
      puVar28 = *(undefined2 **)(*param_1 + 200);
    }
    puVar27 = &DAT_149dfb77a;
    if (local_4b8 != 0) {
      puVar27 = local_4c0;
    }
    lVar15 = 0;
    while( true ) {
      uVar31 = *(ushort *)((longlong)puVar27 + lVar15);
      uVar32 = (ulonglong)uVar31;
      uVar24 = *(ushort *)((longlong)puVar28 + lVar15);
      if (uVar31 != uVar24) break;
      if (uVar31 == 0) goto LAB_14355bce6;
LAB_14355bcb5:
      uVar29 = uVar29 - 1;
      if (uVar29 == 0) goto LAB_14355bce6;
      lVar15 = lVar15 + 2;
    }
    if ((uVar24 | uVar31) < 0x80) {
      uVar31 = (ushort)(byte)(&DAT_149e05da0)[uVar32];
      uVar30 = (ulonglong)uVar24;
      uVar24 = (ushort)(byte)(&DAT_149e05da0)[uVar30];
      if ((&DAT_149e05da0)[uVar32] == (&DAT_149e05da0)[uVar30]) goto LAB_14355bcb5;
    }
    if (uVar31 != uVar24) goto LAB_14355bd26;
LAB_14355bce6:
    uVar22 = local_4b8 - 1;
    if (local_4b8 == 0) {
      uVar22 = 0;
    }
    if ((int)uVar21 < (int)uVar22) {
      uVar22 = uVar21;
    }
    if (0 < (int)uVar22) {
      if (local_4b8 - uVar22 != 0) {
        memmove(local_4c0,local_4c0 + uVar22,(longlong)(int)(local_4b8 - uVar22) * 2);
      }
      local_4b8 = local_4b8 - uVar22;
    }
  }
LAB_14355bd26:
  pvVar13 = local_4b0;
  lVar15 = (longlong)local_4a8;
  local_4a0 = (longlong *)0x0;
  uStack_498 = (int *)CONCAT44(uStack_498._4_4_,local_4a8);
  FUN_1446dd670(&local_4a0,(uint)(lVar15 == 0) + local_4a8 + 1,0);
  if (lVar15 != 0) {
    memcpy(local_4a0,pvVar13,lVar15 * 2);
  }
  FUN_1400020e8(&local_4a0,&DAT_149e065c6,1);
  puVar28 = local_4c0;
  local_4c8 = (uint)uStack_498;
  if ((int)(uint)uStack_498 < 2) {
    local_4d0 = (undefined2 *)0x0;
    local_4c8 = local_4b8;
    lVar15 = (longlong)(int)local_4b8;
    if (lVar15 == 0) {
      local_4c4 = 0;
    }
    else {
      FUN_1446dd670(&local_4d0,local_4b8,0);
      memcpy(local_4d0,puVar28,lVar15 * 2);
    }
  }
  else {
    iVar25 = local_4b8 - 1;
    if (local_4b8 == 0) {
      iVar25 = 0;
    }
    local_4d0 = (undefined2 *)local_4a0;
    local_4c4 = uStack_498._4_4_;
    local_4a0 = (longlong *)0x0;
    uStack_498 = (int *)0x0;
    if ((int)(iVar25 + local_4c8) < (int)local_4c8) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar25);
    }
    if (local_4c4 < (int)(iVar25 + local_4c8)) {
      FUN_1446f8c06(&local_4d0);
    }
    FUN_1400020e8(&local_4d0,local_4c0,iVar25);
  }
  if (local_4a0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_140d2b8ec(&local_4e0,param_1);
  lVar15 = param_1[0x10];
  puVar28 = local_4e0;
  if (local_4d8 == 0) {
    puVar28 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_4e8,puVar28,1);
  if (lVar15 != 0) {
    lVar15 = (longlong)*(int *)(*param_1 + 0x90);
    if (lVar15 != 0) {
      plVar23 = *(longlong **)(*param_1 + 0x88);
      lVar15 = lVar15 << 3;
      do {
        plVar17 = (longlong *)*plVar23;
        if ((plVar17 != (longlong *)0x0) &&
           ((**(code **)(*plVar17 + 0x2d0))(plVar17,&local_4a0), local_4a0 == (longlong *)local_4e8)
           ) {
          if (plVar23 != (longlong *)0x0) {
            if (*(char *)((longlong)param_1 + 0x92) == '\x01') {
              bVar3 = *(byte *)(*param_1 + 0x152);
              if ((bVar3 != 1) &&
                 ((plVar17 = (longlong *)0x0, 6 < bVar3 || ((0x68U >> (bVar3 & 0x1f) & 1) == 0))))
              goto LAB_14355c233;
              plVar23 = (longlong *)*plVar23;
              if (plVar23 != (longlong *)0x0) {
                lVar20 = FUN_14129ec24();
                lVar15 = plVar23[2];
                iVar25 = *(int *)(lVar20 + 0x38);
                if (iVar25 <= *(int *)(lVar15 + 0x38)) {
                  plVar17 = (longlong *)0x0;
                  if ((*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar25 * 8) !=
                       lVar20 + 0x30) || (lVar15 != lVar16)) goto LAB_14355c233;
                  auVar9._8_8_ = -(ulonglong)
                                  (9.999999747378752e-05 <
                                  ABS((double)plVar23[0x15] - (double)param_1[9]));
                  auVar9._0_8_ = -(ulonglong)
                                  (9.999999747378752e-05 <
                                  ABS((double)plVar23[0x14] - (double)param_1[8]));
                  iVar14 = movmskpd((int)(lVar20 + 0x30),auVar9);
                  auVar7._8_8_ = -(ulonglong)
                                  (9.999999747378752e-05 <
                                  ABS((double)plVar23[0x17] - (double)param_1[0xb]));
                  auVar7._0_8_ = -(ulonglong)
                                  (9.999999747378752e-05 <
                                  ABS((double)plVar23[0x16] - (double)param_1[10]));
                  uVar21 = movmskpd((int)lVar15,auVar7);
                  if ((uVar21 & 0x3fffffff) == 0 && iVar14 == 0) {
                    lVar16 = -(ulonglong)
                              (9.999999747378752e-05 <
                              ABS((double)plVar23[0x11] - (double)param_1[5]));
                    auVar12._8_4_ = (int)lVar16;
                    auVar12._0_8_ =
                         -(ulonglong)
                          (9.999999747378752e-05 < ABS((double)plVar23[0x10] - (double)param_1[4]));
                    auVar12._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
                    uVar21 = movmskpd(iVar14,auVar12);
                    lVar16 = -(ulonglong)
                              (9.999999747378752e-05 <
                              ABS((double)plVar23[0x13] - (double)param_1[7]));
                    auVar11._8_4_ = (int)lVar16;
                    auVar11._0_8_ =
                         -(ulonglong)
                          (9.999999747378752e-05 < ABS((double)plVar23[0x12] - (double)param_1[6]));
                    auVar11._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
                    iVar14 = movmskpd(0,auVar11);
                    uVar22 = iVar14 << 2 | uVar21;
                    if (uVar22 != 0) {
                      auVar10._8_8_ =
                           -(ulonglong)
                            (9.999999747378752e-05 < ABS((double)plVar23[0x11] + (double)param_1[5])
                            );
                      auVar10._0_8_ =
                           -(ulonglong)
                            (9.999999747378752e-05 < ABS((double)plVar23[0x10] + (double)param_1[4])
                            );
                      uVar21 = movmskpd(uVar21,auVar10);
                      lVar16 = -(ulonglong)
                                (9.999999747378752e-05 <
                                ABS((double)plVar23[0x13] + (double)param_1[7]));
                      auVar8._8_4_ = (int)lVar16;
                      auVar8._0_8_ = -(ulonglong)
                                      (9.999999747378752e-05 <
                                      ABS((double)plVar23[0x12] + (double)param_1[6]));
                      auVar8._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
                      uVar22 = movmskpd(uVar22,auVar8);
                      if ((uVar22 & 0x3fffffff) != 0 || uVar21 != 0) goto LAB_14355c37e;
                    }
                    lVar16 = -(ulonglong)
                              (9.999999747378752e-05 <
                              ABS((double)plVar23[0x19] - (double)param_1[0xd]));
                    auVar6._8_4_ = (int)lVar16;
                    auVar6._0_8_ = -(ulonglong)
                                    (9.999999747378752e-05 <
                                    ABS((double)plVar23[0x18] - (double)param_1[0xc]));
                    auVar6._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
                    iVar14 = movmskpd(uVar21,auVar6);
                    lVar16 = -(ulonglong)
                              (9.999999747378752e-05 <
                              ABS((double)plVar23[0x1b] - (double)param_1[0xf]));
                    auVar5._8_4_ = (int)lVar16;
                    auVar5._0_8_ = -(ulonglong)
                                    (9.999999747378752e-05 <
                                    ABS((double)plVar23[0x1a] - (double)param_1[0xe]));
                    auVar5._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
                    uVar21 = movmskpd(0,auVar5);
                    if ((uVar21 & 0x3fffffff) == 0 && iVar14 == 0) {
                      *param_2 = 1;
                      (**(code **)(*plVar23 + 0x2c0))
                                (plVar23,CONCAT71((int7)(int3)((uint)iVar25 >> 8),1));
                      FUN_14039914a(plVar23,*(undefined1 *)((longlong)param_1 + 0x91));
                      plVar17 = plVar23;
                      if ((*(byte *)(plVar23 + 0x1d) & 1) != 0) {
                        *(byte *)(plVar23 + 0x1d) = *(byte *)(plVar23 + 0x1d) & 0xfe;
                      }
                      goto LAB_14355c233;
                    }
                  }
                }
              }
            }
LAB_14355c37e:
            plVar17 = (longlong *)0x0;
            goto LAB_14355c233;
          }
          break;
        }
        plVar23 = plVar23 + 1;
        lVar15 = lVar15 + -8;
      } while (lVar15 != 0);
    }
  }
  local_538 = 0;
  uStack_530 = 0;
  local_540 = 0;
  local_548 = 0;
  plVar17 = (longlong *)FUN_1417de24c(*param_1,lVar16,0,0x40);
  pcVar4 = (code *)param_1[0x14];
  if (pcVar4 != (code *)0x0) {
    plVar23 = param_1 + 0x18;
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
      plVar23 = (longlong *)param_1[0x16];
    }
    local_4a0 = plVar17;
    uVar18 = (**(code **)(*plVar23 + 8))();
    (*pcVar4)(uVar18,&local_4a0);
  }
  local_4a0 = (longlong *)local_480;
  local_488 = (void *)((ulonglong)local_488 & 0xffffffffffffff00);
  local_490 = local_80;
  uStack_498 = (int *)local_4a0;
  FUN_14005eb5c(&local_4e8,&local_4a0);
  if (local_490 <= (ulonglong *)((longlong)uStack_498 + 2)) {
    FUN_140213274(&local_4a0,1);
  }
  uVar21 = local_4b8;
  puVar27 = local_4c0;
  *(undefined2 *)uStack_498 = 0x2e;
  puVar28 = (undefined2 *)((longlong)uStack_498 + 2);
  iVar25 = local_4b8 - 1;
  if (local_4b8 == 0) {
    iVar25 = 0;
  }
  lVar16 = (longlong)iVar25;
  puVar19 = (ulonglong *)((longlong)uStack_498 + lVar16 * 2 + 2);
  uStack_498 = (int *)puVar28;
  if (local_490 <= puVar19) {
    FUN_140213274(&local_4a0,lVar16);
  }
  puVar28 = (undefined2 *)uStack_498;
  if (1 < uVar21) {
    memcpy(uStack_498,puVar27,lVar16 * 2);
    uStack_498 = (int *)(puVar28 + lVar16);
  }
  *(undefined2 *)uStack_498 = 0;
  FUN_1411e4208(&local_508,local_4a0);
  if ((char)local_488 == '\x01') {
    FUN_1400020a8(local_4a0);
  }
  pvVar13 = local_4f8;
  local_528 = local_508;
  uStack_524 = uStack_504;
  uStack_520 = uStack_500;
  uStack_51c = uStack_4fc;
  local_518 = (void *)0x0;
  local_510 = local_4f0;
  if ((longlong)local_4f0 == 0) {
    local_50c = 0;
    uStack_498 = (int *)CONCAT44(uStack_504,local_508);
    local_490 = (ulonglong *)CONCAT44(uStack_4fc,uStack_500);
    local_480[0] = 0;
  }
  else {
    FUN_1446dd670(&local_518,local_4f0,0);
    memcpy(local_518,pvVar13,(longlong)local_4f0 * 2);
    pvVar13 = local_518;
    lVar16 = (longlong)local_510;
    local_4a0 = (longlong *)0x0;
    uStack_498 = (int *)CONCAT44(uStack_524,local_528);
    local_490 = (ulonglong *)CONCAT44(uStack_51c,uStack_520);
    local_488 = (void *)0x0;
    local_480[0] = local_510;
    if (lVar16 != 0) {
      FUN_1446dd670(&local_488,local_510,0);
      memcpy(local_488,pvVar13,lVar16 * 2);
      goto LAB_14355c0ea;
    }
  }
  local_488 = (void *)0x0;
  local_4a0 = (longlong *)0x0;
  local_480[1] = 0;
LAB_14355c0ea:
  if (local_518 != (void *)0x0) {
    FUN_1400020a8(local_518);
  }
  (**(code **)(*plVar17 + 0x2c8))(plVar17,&local_4a0);
  if (local_488 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_140def630(&local_4a0);
  uVar1 = (&DAT_14c758c60)[(ulonglong)local_4a0 >> 8 & 0xff];
  uVar2 = (&DAT_14c758c60)[(ulonglong)local_4a0 & 0xff];
  *(undefined4 *)((longlong)plVar17 + 0x10c) = (&DAT_14c758c60)[(ulonglong)local_4a0 >> 0x10 & 0xff]
  ;
  *(undefined4 *)(plVar17 + 0x22) = uVar1;
  *(undefined4 *)((longlong)plVar17 + 0x114) = uVar2;
  *(float *)(plVar17 + 0x23) = (float)local_4a0._3_1_ * 0.003921569;
  (**(code **)(*plVar17 + 0x2c0))(plVar17,1);
  FUN_14039914a(plVar17,*(undefined1 *)((longlong)param_1 + 0x91));
  *(byte *)((longlong)plVar17 + 0x10a) = *(byte *)((longlong)plVar17 + 0x10a) & 0xfb;
  uVar21 = *(uint *)(plVar17 + 0x37);
  *(uint *)(plVar17 + 0x37) = uVar21 | 1;
  *(uint *)(plVar17 + 0x37) =
       (uVar21 & 0xfffffffd | 1) + (uint)*(byte *)((longlong)param_1 + 0x91) * 2;
  plVar23 = param_1 + 4;
  plVar26 = plVar17 + 0x10;
  for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
    *plVar26 = *plVar23;
    plVar23 = plVar23 + 1;
    plVar26 = plVar26 + 1;
  }
  puVar28 = local_4d0;
  if (local_4c8 == 0) {
    puVar28 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_4a0,puVar28,1);
  *(longlong **)((longlong)plVar17 + 0x54) = local_4a0;
  FUN_140831bbe(*param_1,plVar17);
  *param_2 = 1;
  if (local_4f8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14355c233:
  if (local_4e0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_4d0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_4c0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_4b0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_80[0] ^ (ulonglong)auStack_568) == DAT_14c707940) {
    return plVar17;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14355c599 FUN_14355c599 body=49 status=ok
// SIG undefined FUN_14355c599(void)

void FUN_14355c599(void)

{
  FUN_144760e21(DAT_14cae90c8,DAT_14cae90d0);
  if (DAT_14cae90c8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14355c5db FUN_14355c5db body=169 status=ok
// SIG undefined FUN_14355c5db(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14355c5db(void)

{
  _DAT_14cae9138 = 0;
  if (DAT_14cae9130 != 0) {
    FUN_1400020a8();
  }
  DAT_14cae90f8 = 0;
  if (DAT_14cae90fc != 0) {
    FUN_14472eb64(&DAT_14cae90f0,0);
  }
  _DAT_14cae9120 = 0xffffffff;
  _DAT_14cae9118 = 0;
  if (0x80 < DAT_14cae911c) {
    DAT_14cae911c = 0x80;
    FUN_1446efbd8(&DAT_14cae9100,0);
  }
  if (DAT_14cae9110 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cae90f0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14355c684 FUN_14355c684 body=342 status=ok
// SIG undefined FUN_14355c684(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14355c684(void)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  
  if (DAT_14cae9144 + DAT_14cae90e8 != 0 &&
      SCARRY4(DAT_14cae9144,DAT_14cae90e8) == DAT_14cae9144 + DAT_14cae90e8 < 0) {
    uVar5 = (ulonglong)DAT_14cae90d0;
    if (0 < (longlong)uVar5) {
      bVar7 = false;
      DAT_14cae90dc = DAT_14cae90dc + 1;
      do {
        lVar9 = uVar5 * 0x10 + -8;
        uVar6 = uVar5;
        while (((*(int *)(DAT_14cae90c8 + lVar9) != 0 &&
                (plVar1 = *(longlong **)(DAT_14cae90c8 + -8 + lVar9), plVar1 != (longlong *)0x0)) &&
               (cVar4 = (**(code **)(*plVar1 + 0x60))(), cVar4 != '\0'))) {
          lVar9 = lVar9 + -0x10;
          bVar2 = uVar6 < 2;
          uVar6 = uVar6 - 1;
          if (bVar2) {
            DAT_14cae90dc = DAT_14cae90dc + -1;
            if (bVar7) goto LAB_14355c71f;
            goto LAB_14355c798;
          }
        }
        uVar5 = uVar6 - 1;
        bVar7 = true;
      } while (1 < uVar6);
      DAT_14cae90dc = DAT_14cae90dc + -1;
LAB_14355c71f:
      iVar3 = DAT_14cae90d0;
      if (DAT_14cae90dc < 1) {
        if (0 < DAT_14cae90d0) {
          iVar8 = 0;
          do {
            if (((*(int *)(DAT_14cae90c8 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar1 = *(longlong **)(DAT_14cae90c8 + (longlong)iVar8 * 0x10),
                plVar1 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar1 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(&DAT_14cae90c8,iVar8);
              FUN_14005b248(&DAT_14cae90c8);
            }
            else {
              iVar8 = iVar8 + 1;
            }
          } while (iVar8 < DAT_14cae90d0);
        }
        _DAT_14cae90d8 = 2;
        if (2 < DAT_14cae90d0 * 2) {
          _DAT_14cae90d8 = DAT_14cae90d0 * 2;
        }
        if ((_DAT_14cae90d8 < iVar3) && (DAT_14cae90d4 != DAT_14cae90d0)) {
          FUN_14045812c(&DAT_14cae90c8);
        }
      }
    }
  }
LAB_14355c798:
  FUN_14355cd88();
  return;
}



// FUNCTION 14355c7f8 FUN_14355c7f8 body=1423 status=ok
// SIG undefined FUN_14355c7f8(void)

void FUN_14355c7f8(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  code *local_100;
  undefined1 *local_f8;
  code **local_f0;
  code *local_e8;
  code *local_e0;
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  code *local_b8;
  longlong **local_b0;
  code *local_a8;
  code **local_a0;
  longlong local_98 [2];
  uint local_88 [4];
  uint *local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_1 != 0) {
    DAT_14cae9144 = DAT_14cae9144 + 1;
    lVar6 = param_1;
LAB_14355c832:
    lVar7 = lVar6;
    lVar6 = lVar7;
    if (*(longlong *)(lVar7 + 0x20) != 0) goto code_r0x00014355c841;
    goto LAB_14355c852;
  }
  goto LAB_14355cbaf;
code_r0x00014355c841:
  lVar6 = *(longlong *)(lVar7 + 0x20);
  if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) == 0) goto LAB_14355c832;
  lVar6 = FUN_142840154(lVar7);
LAB_14355c852:
  if (lVar6 == 0) {
    local_d0 = 0;
    lVar6 = *(longlong *)(lVar7 + 0x20);
    goto LAB_14355c832;
  }
  local_d0 = lVar6;
  if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
    plVar17 = *(longlong **)(DAT_14cb0d2b0 + 0x1148);
    local_c8 = plVar17 + *(int *)(DAT_14cb0d2b0 + 0x1150);
    do {
      lVar6 = *(longlong *)(*plVar17 + 0x360);
      if (lVar6 != 0) {
        lVar7 = FUN_1405e677a(DAT_14cb0d2b0,lVar6);
        iVar2 = *(int *)(lVar7 + 0x2b8);
        if ((longlong)iVar2 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x2b0);
          lVar16 = 0;
          do {
            plVar3 = *(longlong **)(lVar7 + lVar16);
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x3b0))(plVar3,param_1);
            }
            lVar16 = lVar16 + 0x10;
          } while ((longlong)iVar2 * 0x10 != lVar16);
        }
        iVar2 = *(int *)(lVar6 + 0x90);
        if ((longlong)iVar2 != 0) {
          lVar7 = *(longlong *)(local_d0 + 0x18);
          lVar6 = *(longlong *)(lVar6 + 0x88);
          lVar16 = 0;
          do {
            plVar3 = *(longlong **)(lVar6 + lVar16);
            (**(code **)(*plVar3 + 0x2d0))(plVar3,local_98);
            if (local_98[0] == lVar7) {
              FUN_1447cd2ec(plVar3 + 0x29,0);
            }
            lVar16 = lVar16 + 8;
          } while ((longlong)iVar2 * 8 != lVar16);
        }
      }
      plVar17 = plVar17 + 1;
    } while (plVar17 != local_c8);
  }
  FUN_14090223e(param_1,1,1);
  lVar6 = param_1;
LAB_14355c970:
  lVar7 = lVar6;
  lVar6 = lVar7;
  if (*(longlong *)(lVar7 + 0x20) != 0) goto code_r0x00014355c97f;
  goto LAB_14355c990;
code_r0x00014355c97f:
  lVar6 = *(longlong *)(lVar7 + 0x20);
  if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) == 0) goto LAB_14355c970;
  lVar6 = FUN_142840154(lVar7);
LAB_14355c990:
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(lVar7 + 0x20);
    goto LAB_14355c970;
  }
  local_98[0] = *(longlong *)(lVar6 + 0x18);
  FUN_144869592(&DAT_14cae90f0,&local_a8,local_98,0);
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_c0 = local_98;
  if (DAT_14c951858 == 0) {
    local_a8 = FUN_1449e2820;
    local_e0 = FUN_14081d0ea;
    local_e8 = FUN_14081d0ea;
    local_f8 = &LAB_1468c5283;
    local_100 = FUN_142809da0;
    local_108 = L"Engine";
    local_110 = 0x400000000;
    local_118 = 0x10000000;
    local_120 = 8;
    local_128 = 0x50;
    local_f0 = &local_a8;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  iVar2 = *(int *)(DAT_14c951858 + 0x38);
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < iVar2) ||
     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
      DAT_14c951858 + 0x30)) {
    lVar6 = param_1;
    do {
      do {
        lVar7 = lVar6;
        lVar6 = *(longlong *)(lVar7 + 0x20);
      } while (*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar2);
    } while (*(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar2 * 8)
             != DAT_14c951858 + 0x30);
  }
  else {
    lVar7 = 0;
  }
  local_a0 = &local_b8;
  local_b8 = FUN_1435626b4;
  local_b0 = &local_c0;
  local_a8 = FUN_1449cc908;
  local_128 = 0x200000;
  uVar18 = 0;
  FUN_14482c30e(lVar7,&local_a8,CONCAT71((int7)((ulonglong)local_a0 >> 8),1),0);
  iVar2 = local_70;
  if (DAT_14c951760 == '\0') {
    if (local_70 == 0) {
      uVar15 = 1;
      iVar13 = 0;
      iVar5 = 0;
    }
    else {
      puVar8 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar8 = local_88;
      }
      uVar10 = *puVar8;
      if (uVar10 == 0) {
        iVar5 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar5 = local_70 + -1;
        }
        uVar18 = 0;
        uVar15 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar15 = uVar18;
        }
        iVar13 = 0;
        do {
          if (uVar15 == uVar18) goto LAB_14355cb30;
          iVar13 = iVar13 + 0x20;
          uVar10 = puVar8[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar10 == 0);
      }
      else {
        uVar18 = 0;
        iVar13 = 0;
      }
      uVar15 = (ulonglong)(-uVar10 & uVar10);
      uVar1 = uVar15 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = (iVar13 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
      if (local_70 <= iVar5) {
        iVar5 = local_70;
      }
    }
    if (iVar5 != local_70) {
      uVar10 = 0xffffffff;
      do {
        uVar4 = *(undefined8 *)(local_98[0] + (longlong)iVar5 * 0x10);
        uVar9 = FUN_146900b84();
        FUN_1468bbb78(uVar9,uVar4);
        FUN_147b99a18(uVar4);
        uVar10 = ~(uint)uVar15 & uVar10;
        puVar8 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar8 = local_88;
        }
        iVar5 = (int)uVar18;
        lVar6 = (longlong)iVar5;
        uVar14 = puVar8[lVar6] & uVar10;
        if (uVar14 == 0) {
          iVar11 = local_70 + 0x1e;
          if (-1 < local_70 + -1) {
            iVar11 = local_70 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar13 = iVar13 + 0x20;
          iVar12 = iVar11;
          if (iVar11 < iVar5) {
            iVar12 = iVar5;
          }
          if (iVar5 < iVar11) {
            lVar7 = 0;
            do {
              uVar14 = puVar8[lVar6 + lVar7 + 1];
              if (uVar14 != 0) {
                uVar18 = (ulonglong)(iVar5 + (int)lVar7 + 1);
                uVar10 = 0xffffffff;
                goto LAB_14355cc8f;
              }
              iVar13 = iVar13 + 0x20;
              lVar7 = lVar7 + 1;
            } while (iVar12 - lVar6 != lVar7);
            uVar10 = 0xffffffff;
            lVar6 = (longlong)iVar12;
          }
          uVar18 = lVar6 + 1U & 0xffffffff;
          iVar5 = local_70;
        }
        else {
LAB_14355cc8f:
          uVar15 = (ulonglong)(-uVar14 & uVar14);
          uVar1 = uVar15 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar5 = (iVar13 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if (local_70 <= iVar5) {
            iVar5 = local_70;
          }
        }
      } while (iVar5 != iVar2);
    }
LAB_14355cb30:
    *(undefined4 *)(param_1 + 0xa8) = 0;
    if (*(int *)(param_1 + 0xac) != 0) {
      FUN_1409edbf4(param_1 + 0xa0,0);
    }
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (*(int *)(param_1 + 0xbc) != 0) {
      FUN_1409edbf4(param_1 + 0xb0,0);
    }
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  FUN_143551c0a(param_1);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14090246c(local_98);
LAB_14355cbaf:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14355cd88 FUN_14355cd88 body=170 status=ok
// SIG undefined FUN_14355cd88(void)

void FUN_14355cd88(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (0 < DAT_14cae90e8) {
    lVar5 = 0;
    do {
      iVar1 = *(int *)(DAT_14cae90e0 + 4 + lVar5 * 8);
      if ((iVar1 == 0) || (uVar2 = *(uint *)(DAT_14cae90e0 + lVar5 * 8), (int)uVar2 < 0)) {
LAB_14355cdfd:
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        if ((int)uVar2 < DAT_14c9647dc) {
          puVar4 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if (((puVar4 == (undefined8 *)0x0) || (*(int *)(puVar4 + 2) != iVar1)) ||
             ((*(uint *)(puVar4 + 1) & 0x10200000) != 0)) goto LAB_14355cdfd;
          uVar3 = *puVar4;
        }
      }
      FUN_14355c7f8(uVar3);
      lVar5 = lVar5 + 1;
    } while (lVar5 < DAT_14cae90e8);
  }
  DAT_14cae90e8 = 0;
  if (DAT_14cae90ec != 0) {
    FUN_1417de576(&DAT_14cae90e0,0);
  }
  DAT_14cae9144 = 0;
  return;
}



// FUNCTION 14355ce32 FUN_14355ce32 body=3347 status=ok
// SIG undefined FUN_14355ce32(void)

void FUN_14355ce32(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong *puVar14;
  longlong *unaff_RBP;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  byte bVar18;
  ulonglong uVar19;
  longlong *unaff_R12;
  undefined1 auStack_238 [32];
  byte local_218;
  byte local_210;
  undefined4 local_208;
  undefined1 *local_200;
  undefined8 *local_1f8;
  ulonglong local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  byte local_1c5;
  undefined2 local_1c4;
  byte local_1c2;
  ulonglong local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  longlong local_198;
  undefined8 uStack_190;
  undefined1 local_184 [4];
  ulonglong *local_180;
  byte *local_178;
  longlong local_168;
  ulonglong uStack_160;
  undefined8 local_158 [2];
  longlong local_148;
  undefined4 local_140;
  uint local_13c;
  undefined4 uStack_138;
  int local_134;
  undefined1 local_130 [8];
  undefined1 *local_128;
  int local_120;
  longlong local_118;
  ulonglong uStack_110;
  undefined1 local_108 [16];
  longlong local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined4 uStack_e8;
  int local_e4;
  undefined1 local_e0 [8];
  undefined1 *local_d8;
  int local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 uStack_98;
  int local_94;
  undefined1 local_90 [8];
  undefined1 *local_88;
  int local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2b0);
  }
  bVar18 = *(byte *)(lVar16 + 0x39d);
  iVar4 = FUN_14490d72a(param_1);
  if ((iVar4 == 3) != ((bVar18 & 0x40) == 0)) {
    iVar4 = *(int *)(param_1 + 0x68c);
    if (iVar4 < 1) {
      if ((iVar4 != -1) && (uVar8 = (ulonglong)*(int *)(param_1 + 0x238), 0 < (longlong)uVar8)) {
        uVar19 = 0;
        do {
          iVar4 = *(int *)(*(longlong *)(param_1 + 0x230) + 4 + uVar19 * 8);
          if ((((iVar4 != 0) &&
               (uVar11 = *(uint *)(*(longlong *)(param_1 + 0x230) + uVar19 * 8), -1 < (int)uVar11))
              && ((int)uVar11 < DAT_14c9647dc)) &&
             (((plVar15 = (longlong *)
                          ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
               plVar15 != (longlong *)0x0 && ((int)plVar15[2] == iVar4)) &&
              (((*(uint *)(plVar15 + 1) & 0x10200000) == 0 &&
               ((*plVar15 != 0 && ((*(byte *)(*plVar15 + 0x5a0) & 8) != 0)))))))) {
            local_198 = 0;
            uStack_190 = 0;
            local_a8 = 0;
            local_a0 = 0;
            local_c8 = 0;
            uStack_c0 = 0;
            local_9c = 0x80;
            uStack_98 = 0xffffffff;
            local_94 = 0;
            local_88 = (undefined1 *)0x0;
            local_80 = 0;
            local_1f8 = param_2;
            if ((longlong)*(int *)(param_1 + 0x90) != 0) {
              unaff_RBP = *(longlong **)(param_1 + 0x88);
              plVar15 = unaff_RBP + *(int *)(param_1 + 0x90);
              unaff_R12 = &local_168;
              do {
                lVar16 = *unaff_RBP;
                if ((lVar16 != 0) && ((longlong)*(int *)(lVar16 + 0x128) != 0)) {
                  lVar12 = 0;
                  do {
                    lVar13 = *(longlong *)(*(longlong *)(lVar16 + 0x120) + lVar12);
                    if ((lVar13 != 0) && ((*(byte *)(lVar13 + 0x3d8) & 3) == 0)) {
                      lVar12 = (longlong)(int)uStack_190;
                      uVar11 = (int)uStack_190 + 1;
                      uStack_190 = CONCAT44(uStack_190._4_4_,uVar11);
                      local_118 = lVar16;
                      if (uStack_190._4_4_ < uVar11) {
                        FUN_147b9c1b6(&local_198);
                      }
                      param_2 = local_1f8;
                      *(longlong *)(local_198 + lVar12 * 8) = lVar16;
                      if (*(char *)(lVar13 + 0x3dc) != '\x03') {
                        FUN_147b9c23c(&local_c8,unaff_R12,&local_118);
                      }
                      break;
                    }
                    lVar12 = lVar12 + 8;
                  } while ((longlong)*(int *)(lVar16 + 0x128) * 8 != lVar12);
                }
                unaff_RBP = unaff_RBP + 1;
              } while (unaff_RBP != plVar15);
              uVar8 = (ulonglong)*(uint *)(param_1 + 0x238);
            }
            local_f8 = 0;
            local_f0 = 0;
            local_118 = 0;
            uStack_110 = 0;
            local_ec = 0x80;
            uStack_e8 = 0xffffffff;
            local_e4 = 0;
            local_d8 = (undefined1 *)0x0;
            local_d0 = 0;
            if (0 < (int)uVar8) {
              lVar16 = 0;
              local_200 = local_e0;
              do {
                iVar4 = *(int *)(*(longlong *)(param_1 + 0x230) + lVar16 * 8 + 4);
                if ((((iVar4 != 0) &&
                     (uVar11 = *(uint *)(*(longlong *)(param_1 + 0x230) + lVar16 * 8),
                     -1 < (int)uVar11)) && ((int)uVar11 < DAT_14c9647dc)) &&
                   (((plVar15 = (longlong *)
                                ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
                     plVar15 != (longlong *)0x0 && ((int)plVar15[2] == iVar4)) &&
                    (((*(uint *)(plVar15 + 1) & 0x10200000) == 0 &&
                     ((plVar15 = (longlong *)*plVar15, plVar15 != (longlong *)0x0 &&
                      ((*(byte *)(plVar15 + 0xb4) & 8) != 0)))))))) {
                  local_1b8 = 0;
                  uStack_1b0 = 0;
                  local_1a8 = 0;
                  if (param_2 == (undefined8 *)0x0) {
                    local_168 = 0;
                    uStack_160 = 0;
                    local_158[0] = 0;
                    (**(code **)(*plVar15 + 0x718))(plVar15,&local_1b8,&local_168);
                  }
                  else {
                    local_1a8 = param_2[2];
                    local_1b8 = *param_2;
                    uStack_1b0 = param_2[1];
                  }
                  local_148 = 0;
                  local_140 = 0;
                  local_168 = 0;
                  uStack_160 = 0;
                  local_13c = 0x80;
                  uStack_138 = 0xffffffff;
                  local_134 = 0;
                  local_128 = (undefined1 *)0x0;
                  local_120 = 0;
                  if (0 < (int)uStack_190) {
                    lVar12 = 0;
                    iVar4 = (int)uStack_190;
                    do {
                      local_1c0 = *(ulonglong *)(local_198 + lVar12 * 8);
                      local_1c4 = 0;
                      local_1c2 = 0;
                      if ((int)uStack_110 != local_e4) {
                        uVar11 = ((uint)(local_1c0 >> 0x14) & 0xffff ^ (uint)(local_1c0 >> 4)) *
                                 -0x7a143595;
                        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
                        puVar9 = local_d8;
                        if (local_d8 == (undefined1 *)0x0) {
                          puVar9 = local_e0;
                        }
                        iVar5 = *(int *)(puVar9 + (ulonglong)
                                                  (local_d0 - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4);
                        while (iVar5 != -1) {
                          puVar10 = (ulonglong *)(local_118 + (longlong)iVar5 * 0x18);
                          if (*puVar10 == local_1c0) {
                            puVar14 = puVar10 + 1;
                            if (puVar14 != (ulonglong *)0x0 && puVar10 != (ulonglong *)0x0) {
                              if (((char)*puVar14 == '\x01') &&
                                 (*(char *)((longlong)puVar10 + 9) != '\0')) goto LAB_14355d584;
                              local_1c2 = *(byte *)((longlong)puVar10 + 10);
                              local_1c4 = (undefined2)*puVar14;
                            }
                            break;
                          }
                          iVar5 = (int)puVar10[2];
                        }
                      }
                      if (0 < *(int *)(local_1c0 + 0x128)) {
                        lVar13 = 0;
                        do {
                          uVar8 = *(ulonglong *)(*(longlong *)(local_1c0 + 0x120) + lVar13 * 8);
                          if ((uVar8 != 0) && ((*(byte *)(uVar8 + 0x3d8) & 3) == 0)) {
                            if ((int)uStack_160 != local_134) {
                              uVar11 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) *
                                       -0x7a143595;
                              uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
                              puVar9 = local_128;
                              if (local_128 == (undefined1 *)0x0) {
                                puVar9 = local_130;
                              }
                              iVar4 = *(int *)(puVar9 + (ulonglong)
                                                        (local_120 - 1U & (uVar11 >> 0x10 ^ uVar11))
                                                        * 4);
                              while (iVar4 != -1) {
                                puVar10 = (ulonglong *)(local_168 + (longlong)iVar4 * 0x18);
                                if (*puVar10 == uVar8) {
                                  if ((puVar10 != (ulonglong *)0x0) &&
                                     (puVar10 + 1 != (ulonglong *)0x0)) {
                                    local_1c5 = (byte)puVar10[1];
                                    goto LAB_14355d49d;
                                  }
                                  break;
                                }
                                iVar4 = (int)puVar10[2];
                              }
                            }
                            local_1d8 = local_1a8;
                            local_1e8 = (undefined4)local_1b8;
                            uStack_1e4 = local_1b8._4_4_;
                            uStack_1e0 = (undefined4)uStack_1b0;
                            uStack_1dc = uStack_1b0._4_4_;
                            plVar15 = *(longlong **)(uVar8 + 0x3a8);
                            if (((plVar15 == (longlong *)0x0) ||
                                (cVar1 = (**(code **)(*plVar15 + 0x7c0))
                                                   (plVar15,&local_1e8,&local_1f0,&local_180),
                                cVar1 == '\0')) || ((float)local_1f0 < 0.0)) {
                              local_1c5 = false;
                            }
                            else {
                              local_1c5 = (float)local_1f0 <= 0.0;
                            }
                            local_180 = &local_1f0;
                            local_178 = &local_1c5;
                            local_1f0 = uVar8;
                            FUN_147b9c728(&local_168,local_184,&local_180);
LAB_14355d49d:
                            if ((local_1c5 & 1) != 0) {
                              if (*(byte *)(uVar8 + 0x3dc) < 5) {
                                bVar18 = *(byte *)(uVar8 + 0x3dc) << 3;
                                unaff_R12 = (longlong *)(0x100010100 >> (bVar18 & 0x3f));
                                unaff_RBP = (longlong *)(0x1010000L >> (bVar18 & 0x3f));
                                local_200 = (undefined1 *)(0x10100L >> (bVar18 & 0x3f));
                              }
                              else {
                                FUN_140033559(".\\Runtime/Engine/Private/LevelTick.cpp",0x1f7,
                                              L"Unsupported usage %i");
                              }
                              local_1c4 = CONCAT11(local_1c4._1_1_ | (byte)unaff_RBP,
                                                   (byte)local_1c4 | (byte)local_200);
                              local_1c2 = local_1c2 | (byte)unaff_R12;
                              local_180 = &local_1c0;
                              local_178 = (byte *)&local_1c4;
                              FUN_147b9cc22(&local_118,&local_1f0,&local_180);
                              if (((byte)local_1c4 & local_1c4._1_1_) != 0) break;
                            }
                          }
                          lVar13 = lVar13 + 1;
                        } while (lVar13 < *(int *)(local_1c0 + 0x128));
                        iVar4 = (int)uStack_190;
                      }
LAB_14355d584:
                      lVar12 = lVar12 + 1;
                    } while (lVar12 < iVar4);
                    local_120 = 0;
                    param_2 = local_1f8;
                    if (local_128 != (undefined1 *)0x0) {
                      FUN_1400020a8();
                      param_2 = local_1f8;
                    }
                  }
                  uVar8 = uStack_160 >> 0x20;
                  uStack_160 = uStack_160 & 0xffffffff00000000;
                  if ((int)uVar8 != 0) {
                    FUN_144727cd0(&local_168,0);
                  }
                  uStack_138 = 0xffffffff;
                  local_134 = 0;
                  local_140 = 0;
                  if (0x80 < local_13c) {
                    local_13c = 0x80;
                    FUN_1446efbd8(local_158,0);
                  }
                  if (local_148 != 0) {
                    FUN_1400020a8();
                  }
                  if (local_168 != 0) {
                    FUN_1400020a8();
                  }
                  uVar8 = (ulonglong)*(uint *)(param_1 + 0x238);
                }
                lVar16 = lVar16 + 1;
              } while ((int)lVar16 < (int)uVar8);
            }
            if (0 < (int)uStack_190) {
              lVar16 = 0;
              do {
                lVar12 = local_c8;
                plVar15 = *(longlong **)(local_198 + lVar16 * 8);
                if ((int)uStack_110 != local_e4) {
                  uVar11 = ((uint)((ulonglong)plVar15 >> 0x14) & 0xffff ^
                           (uint)((ulonglong)plVar15 >> 4)) * -0x7a143595;
                  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
                  puVar9 = local_d8;
                  if (local_d8 == (undefined1 *)0x0) {
                    puVar9 = local_e0;
                  }
                  iVar4 = *(int *)(puVar9 + (ulonglong)(local_d0 - 1U & (uVar11 >> 0x10 ^ uVar11)) *
                                            4);
                  while (iVar4 != -1) {
                    puVar10 = (ulonglong *)(local_118 + (longlong)iVar4 * 0x18);
                    if ((longlong *)*puVar10 == plVar15) goto LAB_14355d6ff;
                    iVar4 = (int)puVar10[2];
                  }
                }
                puVar10 = (ulonglong *)0x0;
LAB_14355d6ff:
                puVar14 = puVar10 + 1;
                if (puVar10 == (ulonglong *)0x0) {
                  puVar14 = (ulonglong *)0x0;
                }
                if ((int)uStack_c0 == local_94) {
                  iVar5 = -1;
                }
                else {
                  uVar11 = ((uint)((ulonglong)plVar15 >> 0x14) & 0xffff ^
                           (uint)((ulonglong)plVar15 >> 4)) * -0x7a143595;
                  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
                  puVar9 = local_88;
                  if (local_88 == (undefined1 *)0x0) {
                    puVar9 = local_90;
                  }
                  iVar4 = *(int *)(puVar9 + (ulonglong)(local_80 - 1U & (uVar11 >> 0x10 ^ uVar11)) *
                                            4);
                  while ((iVar5 = -1, iVar4 != -1 &&
                         (iVar5 = iVar4,
                         *(longlong **)(local_c8 + (longlong)iVar4 * 0x10) != plVar15))) {
                    iVar4 = *(int *)((longlong)iVar4 * 0x10 + local_c8 + 8);
                  }
                }
                uVar2 = (**(code **)(*plVar15 + 0x2d8))(plVar15);
                local_200 = (undefined1 *)CONCAT71(local_200._1_7_,uVar2);
                cVar1 = (**(code **)(*plVar15 + 0x2e0))(plVar15);
                bVar18 = *(byte *)((longlong)plVar15 + 0x10a);
                iVar4 = *(int *)((longlong)plVar15 + 0xe4);
                if ((puVar14 != (ulonglong *)0x0) ||
                   (iVar5 != -1 && (longlong)iVar5 * 0x10 + lVar12 != 0)) {
                  if (puVar14 == (ulonglong *)0x0) {
                    cVar3 = (**(code **)(*plVar15 + 0x2d8))(plVar15);
                    if (cVar3 != '\0') {
                      if (((*(float *)((longlong)plVar15 + 0x134) < 0.1) ||
                          ((double)*(float *)(plVar15 + 0x26) <
                           *(double *)(param_1 + 0x6d0) -
                           (double)*(float *)((longlong)plVar15 + 0x134))) &&
                         (0 < *(int *)(param_1 + 0x238))) {
                        *(float *)((longlong)plVar15 + 0x134) = (float)*(double *)(param_1 + 0x6d0);
                        (**(code **)(*plVar15 + 0x2c0))(plVar15,0);
                        FUN_14039914a(plVar15);
                      }
                    }
                  }
                  else {
                    (**(code **)(*plVar15 + 0x2c0))(plVar15,1);
                    FUN_14039914a(plVar15);
                    *(byte *)((longlong)plVar15 + 0x10a) =
                         *(byte *)((longlong)plVar15 + 0x10a) & 0xfb |
                         *(char *)((longlong)puVar14 + 1) << 2;
                  }
                  uVar6 = (**(code **)(*plVar15 + 0x2d8))(plVar15);
                  uVar7 = (**(code **)(*plVar15 + 0x2e0))(plVar15);
                  if (((((char)local_200 != (char)uVar6) || (cVar1 != (char)uVar7)) ||
                      ((((bVar18 ^ *(byte *)((longlong)plVar15 + 0x10a)) & 4) != 0 ||
                       (iVar4 != *(int *)((longlong)plVar15 + 0xe4))))) &&
                     (iVar4 = *(int *)(param_1 + 0x238), 0 < iVar4)) {
                    lVar12 = 0;
                    do {
                      iVar5 = *(int *)(*(longlong *)(param_1 + 0x230) + lVar12 * 8 + 4);
                      if (((iVar5 != 0) &&
                          (uVar11 = *(uint *)(*(longlong *)(param_1 + 0x230) + lVar12 * 8),
                          -1 < (int)uVar11)) &&
                         (((int)uVar11 < DAT_14c9647dc &&
                          ((((plVar17 = (longlong *)
                                        ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                                        *(longlong *)
                                         (DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
                             plVar17 != (longlong *)0x0 && ((int)plVar17[2] == iVar5)) &&
                            ((*(uint *)(plVar17 + 1) & 0x10200000) == 0)) && (*plVar17 != 0)))))) {
                        local_208 = *(undefined4 *)((longlong)plVar15 + 0xe4);
                        local_210 = (*(byte *)((longlong)plVar15 + 0x10a) & 8) >> 3;
                        local_218 = (*(byte *)((longlong)plVar15 + 0x10a) & 4) >> 2;
                        FUN_147ca0828(*plVar17,plVar15,uVar6,uVar7);
                        iVar4 = *(int *)(param_1 + 0x238);
                      }
                      lVar12 = lVar12 + 1;
                    } while ((int)lVar12 < iVar4);
                  }
                }
                lVar16 = lVar16 + 1;
              } while (lVar16 < (int)uStack_190);
            }
            local_d0 = 0;
            if (local_d8 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            uVar8 = uStack_110 >> 0x20;
            uStack_110 = uStack_110 & 0xffffffff00000000;
            if ((int)uVar8 != 0) {
              FUN_144727cd0(&local_118,0);
            }
            uStack_e8 = 0xffffffff;
            local_e4 = 0;
            local_f0 = 0;
            if (0x80 < local_ec) {
              local_ec = 0x80;
              FUN_1446efbd8(local_108,0);
            }
            if (local_f8 != 0) {
              FUN_1400020a8();
            }
            if (local_118 != 0) {
              FUN_1400020a8();
            }
            local_80 = 0;
            if (local_88 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            uVar8 = uStack_c0 >> 0x20;
            uStack_c0 = uStack_c0 & 0xffffffff00000000;
            if ((int)uVar8 != 0) {
              FUN_14474875a(&local_c8,0);
            }
            uStack_98 = 0xffffffff;
            local_94 = 0;
            local_a0 = 0;
            if (0x80 < local_9c) {
              local_9c = 0x80;
              FUN_1446efbd8(local_b8,0);
            }
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
            if (local_c8 != 0) {
              FUN_1400020a8();
            }
            if (local_198 != 0) {
              FUN_1400020a8();
            }
            break;
          }
          uVar19 = uVar19 + 1;
        } while (uVar8 != uVar19);
      }
    }
    else {
      *(int *)(param_1 + 0x68c) = iVar4 + -1;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14355db46 FUN_14355db46 body=69 status=ok
// SIG undefined FUN_14355db46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14355db46(void)

{
  _DAT_14cae9150 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014355db88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae9158,1);
  return;
}



// FUNCTION 14355db8b FUN_14355db8b body=69 status=ok
// SIG undefined FUN_14355db8b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14355db8b(void)

{
  _DAT_14cae9168 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014355dbcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae9170,1);
  return;
}



// FUNCTION 14355dbd0 FUN_14355dbd0 body=69 status=ok
// SIG undefined FUN_14355dbd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14355dbd0(void)

{
  _DAT_14cae9180 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014355dc12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae9188,1);
  return;
}



// FUNCTION 14355dc15 FUN_14355dc15 body=69 status=ok
// SIG undefined FUN_14355dc15(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14355dc15(void)

{
  _DAT_14cae9198 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014355dc57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae91a0,1);
  return;
}



// FUNCTION 14355dc6c FUN_14355dc6c body=467 status=ok
// SIG undefined FUN_14355dc6c(void)

void FUN_14355dc6c(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined1 local_70 [40];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *param_1;
  local_48 = 0;
  uStack_40 = 0;
  iVar3 = *(int *)(lVar4 + 0x2f8);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (iVar3 != 0) {
    FUN_1417970e8(&local_48);
    if ((longlong)*(int *)(lVar4 + 0x2f8) != 0) {
      plVar9 = *(longlong **)(lVar4 + 0x2f0);
      plVar2 = plVar9 + *(int *)(lVar4 + 0x2f8);
      do {
        uVar5 = uStack_40;
        lVar7 = *plVar9;
        if (lVar7 != 0) {
          lVar8 = lVar7;
          if ((*(byte *)(lVar7 + 0x9c) & 1) != 0) {
            do {
              if ((*(uint *)(lVar8 + 8) & 0x30) != 0) goto LAB_14355dd2b;
              plVar1 = (longlong *)(lVar8 + 0x20);
              lVar8 = *plVar1;
            } while (*plVar1 != 0);
            if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) {
              lVar8 = (longlong)(int)uStack_40;
              uVar6 = (int)uStack_40 + 1;
              uStack_40 = CONCAT44(uStack_40._4_4_,uVar6);
              if (uStack_40._4_4_ < uVar6) {
                FUN_1406ca8e4(&local_48,uVar5 & 0xffffffff);
              }
              *(longlong *)(local_48 + lVar8 * 8) = lVar7;
            }
          }
LAB_14355dd2b:
          *(byte *)(lVar7 + 0xb8) = *(byte *)(lVar7 + 0xb8) & 0xf9;
          *(undefined4 *)(lVar7 + 0x90) = 0xffffffff;
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar2);
    }
  }
  *(undefined4 *)(lVar4 + 0x2f8) = 0;
  if (*(int *)(lVar4 + 0x2fc) < 0) {
    FUN_1457b7e90(lVar4 + 0x2f0,0);
  }
  if (*(int *)(lVar4 + 0x2ec) < 0) {
    *(undefined4 *)(lVar4 + 0x2e8) = 0;
    FUN_1457b7e90(lVar4 + 0x2e0,0);
  }
  else {
    *(undefined4 *)(lVar4 + 0x2e8) = 0;
  }
  local_80 = local_48;
  local_78 = (int)uStack_40;
  FUN_1403379f8(local_70,*(undefined8 *)(lVar4 + 0x218),&local_80,1);
  lVar4 = local_48;
  lVar7 = (longlong)(int)uStack_40;
  if (lVar7 != 0) {
    lVar8 = 0;
    do {
      FUN_14342d574(*(undefined8 *)(lVar4 + lVar8));
      lVar8 = lVar8 + 8;
    } while (lVar7 * 8 != lVar8);
  }
  FUN_1417f2086(local_70);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14355de42 FUN_14355de42 body=7790 status=ok
// SIG undefined FUN_14355de42(void)

void FUN_14355de42(longlong *param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  char *pcVar2;
  ulonglong uVar3;
  void *_Src;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  DWORD DVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  DWORD DVar13;
  DWORD DVar14;
  undefined8 *puVar15;
  LPVOID lpTlsValue;
  ulonglong uVar16;
  longlong *plVar17;
  undefined8 uVar18;
  undefined4 *puVar19;
  uint *puVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  undefined ***pppuVar25;
  longlong *plVar26;
  uint *puVar27;
  undefined8 *puVar28;
  undefined4 uVar29;
  ulonglong uVar30;
  byte bVar31;
  char cVar32;
  undefined7 uVar34;
  longlong lVar33;
  longlong lVar35;
  undefined8 in_R11;
  int iVar36;
  ulonglong uVar37;
  uint uVar38;
  longlong *plVar39;
  bool bVar40;
  float fVar41;
  undefined8 uVar42;
  double dVar43;
  float fVar44;
  undefined1 auStack_188 [32];
  wchar_t **local_168;
  longlong *local_160;
  char local_152;
  byte local_151;
  undefined4 local_150;
  uint local_14c;
  uint local_148;
  int local_144;
  longlong local_140;
  ulonglong local_138;
  longlong *local_130;
  uint *local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined4 local_110;
  longlong *local_108;
  longlong local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  longlong *local_d8 [2];
  wchar_t *local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  undefined **local_a8;
  longlong *local_a0;
  ulonglong local_80;
  
  fVar44 = (float)param_3;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  DVar14 = DAT_14c758730;
  local_160 = param_1;
  if (DAT_14c758730 == 0xffffffff) {
    DVar14 = TlsAlloc();
    DVar13 = 0xffffffff;
    LOCK();
    bVar40 = DAT_14c758730 != 0xffffffff;
    DVar7 = DVar14;
    if (bVar40) {
      DVar13 = DAT_14c758730;
      DVar7 = DAT_14c758730;
    }
    DAT_14c758730 = DVar7;
    UNLOCK();
    if (bVar40) {
      TlsFree(DVar14);
      DVar14 = DVar13;
    }
  }
  plVar17 = local_160;
  puVar15 = TlsGetValue(DVar14);
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    DVar13 = GetCurrentThreadId();
    *(DWORD *)(puVar15 + 1) = DVar13;
    *puVar15 = &PTR_FUN_149e06328;
    puVar15[2] = 0;
    *(undefined4 *)(puVar15 + 3) = 1;
    *(undefined1 *)((longlong)puVar15 + 0x1c) = 0;
    FUN_140fddf04(puVar15);
    TlsSetValue(DVar14,puVar15);
  }
  *(int *)(puVar15 + 3) = *(int *)(puVar15 + 3) + 1;
  FUN_1448d508e(&DAT_14cb10838,plVar17,param_2,param_3);
  if (plVar17[0xf2] != 0) {
    FUN_14352fa12();
    FUN_14352fa12(plVar17[0xf2] + 0x70);
  }
  plVar26 = *(longlong **)(DAT_14cb0d2b0 + 0xfe0);
  if (plVar26 != (longlong *)0x0) {
    FUN_1405e677a(DAT_14cb0d2b0,plVar17);
    (**(code **)(*plVar26 + 0x180))(plVar26);
  }
  if (plVar17[6] == 0) {
    plVar17 = (longlong *)0x0;
  }
  else {
    plVar17 = *(longlong **)(plVar17[6] + 0x2b0);
  }
  uVar16 = (ulonglong)DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    DVar14 = TlsAlloc();
    uVar16 = (ulonglong)DVar14;
    uVar24 = 0xffffffff;
    LOCK();
    bVar40 = DAT_14c7585d0 != 0xffffffff;
    uVar21 = DVar14;
    if (bVar40) {
      uVar24 = DAT_14c7585d0;
      uVar21 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = uVar21;
    UNLOCK();
    if (bVar40) {
      TlsFree(DVar14);
      uVar16 = (ulonglong)uVar24;
    }
  }
  lpTlsValue = TlsGetValue((DWORD)uVar16);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_c8);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue((DWORD)uVar16,lpTlsValue);
  }
  local_108 = (longlong *)((longlong)lpTlsValue + 0x10);
  local_100 = *(longlong *)((longlong)lpTlsValue + 0x10);
  local_f8 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_f0 = '\0';
  local_e8 = *(longlong *)((longlong)lpTlsValue + 0x28);
  *(longlong ***)((longlong)lpTlsValue + 0x28) = &local_108;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  *(byte *)((longlong)local_160 + 0x153) = *(byte *)((longlong)local_160 + 0x153) | 4;
  uVar34 = (undefined7)(uVar16 >> 8);
  if (((((local_160[6] != 0) && (lVar33 = *(longlong *)(local_160[6] + 0x2b0), lVar33 != 0)) &&
       (*(longlong *)(lVar33 + 0x588) != 0)) && ((double)local_160[0xe1] <= (double)local_160[0xda])
      ) || (((*(byte *)((longlong)local_160 + 0x154) & 0x40) != 0 &&
            (iVar12 = FUN_14490d72a(local_160), iVar12 == 3)))) {
    uVar16 = CONCAT71(uVar34,1);
  }
  else {
    if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
      lVar33 = 0;
      do {
        lVar35 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar33);
        if (*(longlong **)(lVar35 + 0x360) == local_160) {
          if ((lVar35 != 0) && (uVar16 = CONCAT71(uVar34,1), (*(byte *)(lVar35 + 0x278) & 1) != 0))
          goto LAB_14355e033;
          break;
        }
        lVar33 = lVar33 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar33);
    }
    if (*(char *)((longlong)local_160 + 0x152) == '\x03') {
      uVar16 = CONCAT71((int7)(uVar16 >> 8),*(byte *)((longlong)local_160 + 0x155) >> 7);
    }
    else {
      uVar16 = 0;
    }
  }
LAB_14355e033:
  plVar26 = local_160;
  FUN_14485dd80(local_160 + 0x99,param_3);
  FUN_1447f69b6(plVar26 + 0x9c);
  lVar33 = plVar26[7];
  local_148 = (uint)uVar16;
  if ((((lVar33 != 0) && (lVar33 = *(longlong *)(lVar33 + 0xf0), lVar33 != 0)) &&
      (*(int *)(lVar33 + 0x134) == 1)) && (lVar33 = FUN_147d81b3a(DAT_14cb0d2b0), lVar33 == 0)) {
    local_c8 = L"ConnectionFailed";
    uStack_c0._0_4_ = 0x10;
    FUN_1446e940c(local_dc,&local_c8);
    local_c8 = L"Engine";
    uStack_c0._0_4_ = 6;
    FUN_1446e940c(local_e0,&local_c8);
    local_c8 = L"Your connection to the host has been lost.";
    uStack_c0._0_4_ = 0x2a;
    FUN_140208c1e(local_d8,local_e0,local_dc,&local_c8);
    puVar15 = (undefined8 *)FUN_1447a1f4a(local_d8);
    local_c8 = (wchar_t *)0x0;
    uVar24 = *(uint *)(puVar15 + 1);
    _Src = (void *)*puVar15;
    uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar24);
    if ((longlong)(int)uVar24 == 0) {
      uStack_c0 = (ulonglong)uVar24;
    }
    else {
      FUN_1446dd670(&local_c8,uVar24,0);
      memcpy(local_c8,_Src,(longlong)(int)uVar24 * 2);
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    local_168 = &local_c8;
    FUN_14375df44(DAT_14cb0d2b0,local_160,local_160[7],3);
    if (local_c8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    uVar16 = (ulonglong)local_148;
  }
  plVar26 = local_160;
  dVar43 = (double)local_160[0xe0] + (double)fVar44;
  local_160[0xe0] = (longlong)dVar43;
  local_160[0xdc] = (longlong)dVar43;
  bVar31 = (byte)uVar16;
  if (bVar31 == 0) {
    local_160[0xdd] = (longlong)((double)fVar44 + (double)local_160[0xdd]);
  }
  fVar41 = (float)(**(code **)(*plVar17 + 0x668))(plVar17);
  uVar42 = (**(code **)(*plVar17 + 0x670))(plVar17,fVar41 * fVar44,fVar44);
  plVar39 = local_160;
  fVar41 = (float)uVar42;
  *(float *)((longlong)plVar26 + 0x6f4) = fVar41;
  *(float *)(plVar26 + 0xde) = fVar44;
  plVar26[0xdb] = (longlong)((double)plVar26[0xdb] + (double)fVar41);
  if (DAT_14cadbee0 == '\x01') {
    *(byte *)(plVar26 + 0x12f) = bVar31;
    *(undefined1 *)((longlong)plVar26 + 0x979) = 0;
    *(float *)((longlong)plVar26 + 0x97c) = fVar41;
  }
  if (bVar31 == 0) {
    dVar43 = (double)fVar41 + (double)local_160[0xdf];
    local_160[0xdf] = (longlong)dVar43;
    local_160[0xda] = (longlong)dVar43;
    iVar12 = 1;
    if ((*(byte *)((longlong)local_160 + 0x155) & 4) == 0) {
      *(float *)(local_160 + 0x126) = *(float *)(local_160 + 0x126) + fVar41;
      iVar12 = param_2;
    }
  }
  else {
    iVar12 = 1;
    if ((*(byte *)((longlong)local_160 + 0x155) & 4) == 0) {
      iVar12 = param_2;
    }
  }
  if ((((*(byte *)((longlong)plVar17 + 0x39e) & 0x60) != 0) ||
      (lVar33 = FUN_1405e677a(DAT_14cb0d2b0), *(char *)(lVar33 + 0x88) == '\x01')) &&
     (DAT_14cad5900 == 0)) {
    (**(code **)(*DAT_14c948aa0 + 0x38))(DAT_14c948aa0,1,1,(double)(DAT_14c7614a0 / 1000.0));
  }
  if ((((int)plVar39[0xe2] == *(int *)((longlong)plVar39 + 0x71c)) &&
      (*(int *)((longlong)plVar39 + 0x714) == (int)plVar39[0xe4])) &&
     ((int)plVar39[0xe3] == *(int *)((longlong)plVar39 + 0x724))) {
    plVar39[0xe7] = DAT_14c8464f0;
    uVar6 = DAT_14c8464e8._4_4_;
    uVar5 = (undefined4)DAT_14c8464e8;
    uVar29 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(plVar39 + 0xe5) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)plVar39 + 0x72c) = uVar29;
    *(undefined4 *)(plVar39 + 0xe6) = uVar5;
    *(undefined4 *)((longlong)plVar39 + 0x734) = uVar6;
  }
  else {
    local_110 = *(undefined4 *)((longlong)plVar39 + 0x724);
    local_118 = *(undefined8 *)((longlong)plVar39 + 0x71c);
    FUN_14378b8ce(plVar39);
  }
  plVar17 = (longlong *)plVar39[0x2d];
  if (plVar17 != (longlong *)0x0) {
    (**(code **)(*plVar17 + 0x2a0))(plVar17,uVar42);
  }
  local_151 = iVar12 == 0 | bVar31;
  if (local_151 == 0) {
    local_150 = (undefined4)CONCAT71((int7)((ulonglong)plVar17 >> 8),1);
    if ((plVar39[7] != 0) && (lVar33 = *(longlong *)(plVar39[7] + 0xf0), lVar33 != 0)) {
      local_150 = (undefined4)CONCAT71((int7)((ulonglong)lVar33 >> 8),*(int *)(lVar33 + 0x134) == 3)
      ;
    }
  }
  else {
    local_150 = 0;
  }
  if (plVar39[0x3e] == 0) {
    local_130 = plVar39 + 0x8c;
  }
  else {
    local_130 = *(longlong **)(plVar39[0x3e] + 0xf8);
  }
  if ((char)local_150 != '\0') {
    FUN_144940c78(plVar39);
    FUN_1448d508e(&DAT_14cb10850,plVar39,iVar12,uVar42);
  }
  plVar17 = plVar39 + 0xb4;
  iVar10 = *(int *)((longlong)plVar39 + 0x5b4);
  *(int *)((longlong)plVar39 + 0x5b4) = iVar10 + 1;
  iVar36 = (int)plVar39[0xb5];
  uVar16 = (ulonglong)iVar36;
  if ((longlong)uVar16 < 1) {
    *(int *)((longlong)plVar39 + 0x5b4) = iVar10;
  }
  else {
    bVar40 = false;
    do {
      lVar33 = uVar16 * 0x10 + -8;
      uVar30 = uVar16;
      while (((*(int *)(*plVar17 + lVar33) != 0 &&
              (plVar26 = *(longlong **)(*plVar17 + -8 + lVar33), plVar26 != (longlong *)0x0)) &&
             (cVar8 = (**(code **)(*plVar26 + 0x60))(plVar26,uVar42), cVar8 != '\0'))) {
        lVar33 = lVar33 + -0x10;
        bVar4 = uVar30 < 2;
        uVar30 = uVar30 - 1;
        if (bVar4) {
          iVar10 = *(int *)((longlong)plVar39 + 0x5b4) + -1;
          *(int *)((longlong)plVar39 + 0x5b4) = iVar10;
          if (bVar40) goto LAB_14355e384;
          goto LAB_14355e3fd;
        }
      }
      uVar16 = uVar30 - 1;
      bVar40 = true;
    } while (1 < uVar30);
    iVar10 = *(int *)((longlong)plVar39 + 0x5b4) + -1;
    *(int *)((longlong)plVar39 + 0x5b4) = iVar10;
LAB_14355e384:
    if (iVar10 < 1) {
      iVar10 = (int)plVar39[0xb5];
      iVar36 = iVar10;
      if (0 < iVar10) {
        iVar22 = 0;
        do {
          if (((*(int *)(*plVar17 + 8 + (longlong)iVar22 * 0x10) == 0) ||
              (plVar26 = *(longlong **)(*plVar17 + (longlong)iVar22 * 0x10),
              plVar26 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(*plVar26 + 0x28))(), cVar8 != '\0')) {
            FUN_14005b288(plVar17,iVar22);
            FUN_14005b248(plVar17);
          }
          else {
            iVar22 = iVar22 + 1;
          }
          iVar36 = (int)plVar39[0xb5];
        } while (iVar22 < iVar36);
      }
      iVar22 = 2;
      if (2 < iVar36 * 2) {
        iVar22 = iVar36 * 2;
      }
      *(int *)(plVar39 + 0xb6) = iVar22;
      if ((iVar22 < iVar10) && (*(int *)((longlong)plVar39 + 0x5ac) != iVar36)) {
        FUN_14045812c(plVar17);
      }
    }
LAB_14355e3fd:
    iVar36 = (int)plVar39[0xb5];
  }
  if (iVar36 != 0) {
    lVar33 = 0;
    do {
      if ((*(int *)(*plVar17 + 8 + lVar33) != 0) && (*(longlong *)(*plVar17 + lVar33) != 0)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cae91d0) &&
           (FUN_144b3d300(&DAT_14cae91d0), DAT_14cae91d0 == -1)) {
          FUN_1446f470e(&DAT_14cae91c8,L"Media",1);
          _Init_thread_footer(&DAT_14cae91d0);
        }
        uVar18 = DAT_14cae91c8;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c874a20) &&
           (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
          FUN_145762954(&DAT_14c874628);
          DAT_14c874a18 = 1;
          atexit(FUN_14278de47);
          _Init_thread_footer(&DAT_14c874a20);
        }
        plVar17 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar18,&local_c8,0);
        if (plVar17 != (longlong *)0x0) {
          (**(code **)(*plVar17 + 0xf0))(plVar17);
        }
        break;
      }
      lVar33 = lVar33 + 0x10;
    } while ((longlong)iVar36 * 0x10 != lVar33);
  }
  iVar10 = (int)plVar39[0x35];
  local_144 = iVar12;
  if ((longlong)iVar10 != 0) {
    lVar33 = plVar39[0x34];
    lVar35 = 0;
    do {
      if ((*(char *)(lVar33 + lVar35) != '\0') &&
         (*(int *)(lVar33 + 0x30 + lVar35) != *(int *)(lVar33 + 0x5c + lVar35))) {
        uVar16 = 0;
        goto LAB_14355e4fc;
      }
      lVar35 = lVar35 + 0x78;
    } while ((longlong)iVar10 * 0x78 - lVar35 != 0);
    uVar16 = CONCAT71((int7)((ulonglong)in_R11 >> 8),1);
LAB_14355e4fc:
    if (0 < iVar10) {
      local_120 = plVar39 + 0x8b;
      lVar33 = 0;
      local_138 = 0;
      local_14c = (uint)uVar16;
      do {
        pcVar2 = (char *)(plVar39[0x34] + lVar33 * 0x78);
        local_152 = *pcVar2;
        local_128 = (uint *)(plVar39[0x34] + 0x38 + lVar33 * 0x78);
        local_c8 = (wchar_t *)0x0;
        uStack_c0 = 0;
        uVar24 = local_128[6];
        uVar37 = 0;
        uVar30 = 1;
        iVar10 = 0;
        uVar21 = 0;
        if (uVar24 != 0) {
          puVar20 = *(uint **)(pcVar2 + 0x48);
          if (*(uint **)(pcVar2 + 0x48) == (uint *)0x0) {
            puVar20 = local_128;
          }
          uVar21 = *puVar20;
          if (uVar21 == 0) {
            iVar10 = uVar24 + 0x1e;
            if (-1 < (int)(uVar24 - 1)) {
              iVar10 = uVar24 - 1;
            }
            uVar37 = 0;
            uVar30 = (ulonglong)(uint)(iVar10 >> 5);
            if (iVar10 >> 5 < 1) {
              uVar30 = 0;
            }
            iVar10 = 0;
            do {
              if (uVar30 == uVar37) goto LAB_14355ee55;
              iVar10 = iVar10 + 0x20;
              uVar21 = puVar20[uVar37 + 1];
              uVar37 = uVar37 + 1;
            } while (uVar21 == 0);
          }
          else {
            uVar37 = 0;
          }
          uVar30 = (ulonglong)(-uVar21 & uVar21);
          uVar3 = uVar30 * 2 + 1;
          lVar35 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar35 == 0; lVar35 = lVar35 + -1) {
            }
          }
          uVar21 = (iVar10 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
          if ((int)uVar24 <= (int)uVar21) {
            uVar21 = uVar24;
          }
        }
        if (uVar21 != uVar24) {
          uVar38 = 0xffffffff;
          uVar11 = uVar24;
          local_140 = lVar33;
          do {
            uVar3 = uStack_c0;
            lVar33 = *(longlong *)(*(longlong *)(pcVar2 + 0x28) + (longlong)(int)uVar21 * 0x10);
            if ((char)uVar16 == '\0') {
              if ((longlong)(int)plVar39[0x33] != 0) {
                lVar35 = 0;
                do {
                  if (*(longlong *)(plVar39[0x32] + lVar35) == lVar33) goto LAB_14355e607;
                  lVar35 = lVar35 + 8;
                } while ((longlong)(int)plVar39[0x33] * 8 != lVar35);
              }
            }
            else {
LAB_14355e607:
              if (lVar33 != 0) {
                lVar35 = (longlong)(int)uStack_c0;
                uVar21 = (int)uStack_c0 + 1;
                uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar21);
                if (uStack_c0._4_4_ < uVar21) {
                  FUN_1417de5d6(&local_c8,uVar3 & 0xffffffff);
                  uVar16 = (ulonglong)local_14c;
                }
                *(longlong *)(local_c8 + lVar35 * 4) = lVar33;
                uVar11 = *(uint *)(pcVar2 + 0x50);
                plVar39 = local_160;
              }
            }
            iVar12 = local_144;
            uVar38 = uVar38 & ~(uint)uVar30;
            puVar20 = *(uint **)(pcVar2 + 0x48);
            if (*(uint **)(pcVar2 + 0x48) == (uint *)0x0) {
              puVar20 = local_128;
            }
            iVar36 = (int)uVar37;
            lVar33 = (longlong)iVar36;
            uVar21 = puVar20[lVar33] & uVar38;
            if (uVar21 == 0) {
              iVar22 = uVar11 + 0x1e;
              if (-1 < (int)(uVar11 - 1)) {
                iVar22 = uVar11 - 1;
              }
              iVar22 = iVar22 >> 5;
              iVar10 = iVar10 + 0x20;
              iVar23 = iVar22;
              if (iVar22 < iVar36) {
                iVar23 = iVar36;
              }
              if (iVar36 < iVar22) {
                lVar35 = 0;
                do {
                  uVar21 = puVar20[lVar33 + lVar35 + 1];
                  if (uVar21 != 0) {
                    uVar37 = (ulonglong)(iVar36 + (int)lVar35 + 1);
                    uVar38 = 0xffffffff;
                    goto LAB_14355e6f2;
                  }
                  iVar10 = iVar10 + 0x20;
                  lVar35 = lVar35 + 1;
                } while (iVar23 - lVar33 != lVar35);
                uVar38 = 0xffffffff;
                lVar33 = (longlong)iVar23;
              }
              uVar37 = lVar33 + 1U & 0xffffffff;
              uVar16 = (ulonglong)local_14c;
              plVar39 = local_160;
              uVar21 = uVar11;
            }
            else {
LAB_14355e6f2:
              uVar30 = (ulonglong)(-uVar21 & uVar21);
              uVar3 = uVar30 * 2 + 1;
              lVar33 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                }
              }
              uVar21 = (iVar10 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
              if ((int)uVar11 <= (int)uVar21) {
                uVar21 = uVar11;
              }
            }
          } while (uVar21 != uVar24);
          lVar33 = local_140;
          if ((int)uStack_c0 != 0) {
            if (plVar39 == (longlong *)0x0) {
              uVar29 = 0xffffffff;
            }
            else {
              uVar29 = (undefined4)plVar39[0x36];
              FUN_140080e72(plVar39,local_140);
            }
            uVar24 = local_148;
            cVar8 = local_152;
            cVar32 = (char)local_148;
            if ((char)local_150 == '\0') {
              if (cVar32 != '\0') {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14cb0c040) &&
                   (FUN_144b3d300(&DAT_14cb0c040), DAT_14cb0c040 == -1)) {
                  FUN_145e17f72(&DAT_14cb0bff0);
                  atexit(FUN_14374ca90);
                  _Init_thread_footer(&DAT_14cb0c040);
                }
                local_168 = &local_c8;
                (**(code **)(DAT_14cb0bff0 + 0x20))(&DAT_14cb0bff0,plVar39,fVar41,3);
                if (cVar8 == '\0') {
                  local_168 = (wchar_t **)((ulonglong)local_168 & 0xffffffff00000000);
                  FUN_14373e0b4(plVar39,iVar12,1,uVar42);
                  local_168._0_4_ = 1;
                  FUN_14373e0b4(plVar39,iVar12,1,uVar42);
                  local_168._0_4_ = 2;
                  FUN_14373e0b4(plVar39,iVar12,1,uVar42);
                  local_168._0_4_ = 3;
                  FUN_14373e0b4(plVar39,iVar12,1,uVar42);
                  local_168 = (wchar_t **)CONCAT44(local_168._4_4_,4);
                  FUN_14373e0b4(plVar39,iVar12,1,uVar42);
                }
                goto LAB_14355eb5e;
              }
              if ((local_138 & 1) == 0) goto LAB_14355eb6e;
            }
            else {
              FUN_14037e650(plVar39,uVar42);
              *(undefined1 *)((longlong)plVar39 + 0x151) = 0;
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14cb0c040) &&
                 (FUN_144b3d300(&DAT_14cb0c040), DAT_14cb0c040 == -1)) {
                FUN_145e17f72(&DAT_14cb0bff0);
                atexit(FUN_14374ca90);
                _Init_thread_footer(&DAT_14cb0c040);
              }
              local_168 = &local_c8;
              (**(code **)(DAT_14cb0bff0 + 0x18))(&DAT_14cb0bff0,plVar39,fVar41,iVar12);
              if (cVar8 == '\0') {
                local_168 = (wchar_t **)((ulonglong)local_168 & 0xffffffff00000000);
                FUN_14373e0b4(plVar39,iVar12,0,uVar42);
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14cb0c040) &&
                   (FUN_144b3d300(&DAT_14cb0c040), DAT_14cb0c040 == -1)) {
                  FUN_145e17f72(&DAT_14cb0bff0);
                  atexit(FUN_14374ca90);
                  _Init_thread_footer(&DAT_14cb0c040);
                }
                (**(code **)(DAT_14cb0bff0 + 0x28))(&DAT_14cb0bff0,0,1);
                *(char *)((longlong)plVar39 + 0x151) = *(char *)((longlong)plVar39 + 0x151) + '\x01'
                ;
                *(byte *)((longlong)plVar39 + 0x153) = *(byte *)((longlong)plVar39 + 0x153) & 0xfb;
                FUN_143786fe8(plVar39);
                *(byte *)((longlong)plVar39 + 0x153) = *(byte *)((longlong)plVar39 + 0x153) | 4;
                local_168 = (wchar_t **)CONCAT44(local_168._4_4_,1);
                FUN_14373e0b4(plVar39,iVar12,0,uVar42);
              }
              else {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14cb0c040) &&
                   (FUN_144b3d300(&DAT_14cb0c040), DAT_14cb0c040 == -1)) {
                  FUN_145e17f72(&DAT_14cb0bff0);
                  atexit(FUN_14374ca90);
                  _Init_thread_footer(&DAT_14cb0c040);
                }
                (**(code **)(DAT_14cb0bff0 + 0x28))(&DAT_14cb0bff0,0,1);
                *(char *)((longlong)plVar39 + 0x151) = *(char *)((longlong)plVar39 + 0x151) + '\x01'
                ;
                *(byte *)((longlong)plVar39 + 0x153) = *(byte *)((longlong)plVar39 + 0x153) & 0xfb;
                FUN_143786fe8(plVar39);
                *(byte *)((longlong)plVar39 + 0x153) = *(byte *)((longlong)plVar39 + 0x153) | 4;
              }
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14cb0c040) &&
                 (FUN_144b3d300(&DAT_14cb0c040), DAT_14cb0c040 == -1)) {
                FUN_145e17f72(&DAT_14cb0bff0);
                atexit(FUN_14374ca90);
                _Init_thread_footer(&DAT_14cb0c040);
              }
              (**(code **)(DAT_14cb0bff0 + 0x28))(&DAT_14cb0bff0,1,1);
              *(char *)((longlong)plVar39 + 0x151) = *(char *)((longlong)plVar39 + 0x151) + '\x01';
              if (cVar8 == '\0') {
                local_168 = (wchar_t **)CONCAT44(local_168._4_4_,2);
                FUN_14373e0b4(plVar39,iVar12,0,uVar42);
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14cb0c040) &&
                   (FUN_144b3d300(&DAT_14cb0c040), DAT_14cb0c040 == -1)) {
                  FUN_145e17f72(&DAT_14cb0bff0);
                  atexit(FUN_14374ca90);
                  _Init_thread_footer(&DAT_14cb0c040);
                }
                (**(code **)(DAT_14cb0bff0 + 0x28))(&DAT_14cb0bff0,2,0);
                *(undefined1 *)((longlong)plVar39 + 0x151) = 3;
                local_168 = (wchar_t **)CONCAT44(local_168._4_4_,3);
                FUN_14373e0b4(plVar39,iVar12,0,uVar42);
              }
              else {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14cb0c040) &&
                   (FUN_144b3d300(&DAT_14cb0c040), DAT_14cb0c040 == -1)) {
                  FUN_145e17f72(&DAT_14cb0bff0);
                  atexit(FUN_14374ca90);
                  _Init_thread_footer(&DAT_14cb0c040);
                }
                (**(code **)(DAT_14cb0bff0 + 0x28))(&DAT_14cb0bff0,2,0);
                *(undefined1 *)((longlong)plVar39 + 0x151) = 3;
              }
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14cb0c040) &&
                 (FUN_144b3d300(&DAT_14cb0c040), DAT_14cb0c040 == -1)) {
                FUN_145e17f72(&DAT_14cb0bff0);
                atexit(FUN_14374ca90);
                _Init_thread_footer(&DAT_14cb0c040);
              }
              (**(code **)(DAT_14cb0bff0 + 0x28))(&DAT_14cb0bff0,3,1);
              *(char *)((longlong)plVar39 + 0x151) = *(char *)((longlong)plVar39 + 0x151) + '\x01';
              if (cVar8 == '\0') {
                local_168 = (wchar_t **)CONCAT44(local_168._4_4_,4);
                FUN_14373e0b4(plVar39,iVar12,0,uVar42);
              }
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14cb0c040) &&
                 (FUN_144b3d300(&DAT_14cb0c040), DAT_14cb0c040 == -1)) {
                FUN_145e17f72(&DAT_14cb0bff0);
                atexit(FUN_14374ca90);
                _Init_thread_footer(&DAT_14cb0c040);
              }
              (**(code **)(DAT_14cb0bff0 + 0x28))(&DAT_14cb0bff0,4);
              *(char *)((longlong)plVar39 + 0x151) = *(char *)((longlong)plVar39 + 0x151) + '\x01';
LAB_14355eb5e:
              if ((local_138 & 1) == 0) {
                if (cVar32 == '\0') {
LAB_14355eb6e:
                  FUN_140e65914(local_130,0,fVar41);
                  if (local_151 == 0) {
                    plVar17 = (longlong *)(plVar39[0x3e] + 0xf0);
                    if (plVar39[0x3e] == 0) {
                      plVar17 = local_120;
                    }
                    FUN_143743cda(*plVar17,uVar42);
                  }
                }
                local_168 = (wchar_t **)CONCAT44(local_168._4_4_,8);
                plVar17 = plVar39;
                FUN_14373e0b4(plVar39,iVar12,uVar24,uVar42);
                if ((((byte *)plVar39[0x12e] == (byte *)0x0) || ((*(byte *)plVar39[0x12e] & 1) == 0)
                    ) && (0 < (int)plVar39[0x47])) {
                  lVar33 = 0;
                  do {
                    plVar17 = (longlong *)plVar39[0x46];
                    iVar10 = *(int *)((longlong)plVar17 + lVar33 * 8 + 4);
                    if (iVar10 != 0) {
                      uVar24 = *(uint *)(plVar17 + lVar33);
                      plVar17 = (longlong *)(ulonglong)uVar24;
                      if ((-1 < (int)uVar24) && ((int)uVar24 < DAT_14c9647dc)) {
                        plVar17 = (longlong *)(ulonglong)(uVar24 >> 0x10);
                        plVar26 = (longlong *)
                                  ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (longlong)plVar17 * 8));
                        if (((plVar26 != (longlong *)0x0) &&
                            (((int)plVar26[2] == iVar10 &&
                             ((*(uint *)(plVar26 + 1) & 0x10200000) == 0)))) &&
                           (plVar26 = (longlong *)*plVar26, plVar26 != (longlong *)0x0)) {
                          if ((cVar32 == '\0') ||
                             (plVar17 = plVar26, cVar9 = FUN_14365031a(plVar26), cVar9 != '\0')) {
                            (**(code **)(*plVar26 + 0xe10))(plVar26,uVar42);
                            plVar17 = plVar26;
                          }
                          else if ((plVar26[0x89] != 0) &&
                                  (plVar17 = local_160, cVar9 = FUN_1479910b0(local_160),
                                  cVar9 != '\0')) {
                            plVar17 = (longlong *)plVar26[0x89];
                            (**(code **)(*plVar17 + 0x6a8))();
                          }
                        }
                      }
                    }
                    lVar33 = lVar33 + 1;
                    plVar39 = local_160;
                  } while ((int)lVar33 < (int)local_160[0x47]);
                }
                bVar31 = *(byte *)((longlong)plVar39 + 0x152);
                local_138 = CONCAT71((int7)((ulonglong)plVar17 >> 8),1);
                if ((bVar31 == 1) || ((bVar31 < 7 && ((0x68U >> (bVar31 & 0x1f) & 1) != 0)))) {
                  FUN_143788d76(plVar39);
                }
              }
              if ((char)local_150 == '\0') {
                if (cVar32 == '\x01' && cVar8 == '\0') {
                  local_168._0_4_ = 5;
                  FUN_14373e0b4(plVar39,iVar12,1,uVar42);
                  local_168 = (wchar_t **)CONCAT44(local_168._4_4_,6);
                  FUN_14373e0b4(plVar39,iVar12,1,uVar42);
                }
              }
              else {
                if (cVar8 == '\0') {
                  local_168 = (wchar_t **)CONCAT44(local_168._4_4_,5);
                  FUN_14373e0b4(plVar39,iVar12,0,uVar42);
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14cb0c040) &&
                     (FUN_144b3d300(&DAT_14cb0c040), DAT_14cb0c040 == -1)) {
                    FUN_145e17f72(&DAT_14cb0bff0);
                    atexit(FUN_14374ca90);
                    _Init_thread_footer(&DAT_14cb0c040);
                  }
                  (**(code **)(DAT_14cb0bff0 + 0x28))(&DAT_14cb0bff0,5,1);
                  *(char *)((longlong)plVar39 + 0x151) =
                       *(char *)((longlong)plVar39 + 0x151) + '\x01';
                  local_168 = (wchar_t **)CONCAT44(local_168._4_4_,6);
                  FUN_14373e0b4(plVar39,iVar12,0,uVar42);
                }
                else {
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14cb0c040) &&
                     (FUN_144b3d300(&DAT_14cb0c040), DAT_14cb0c040 == -1)) {
                    FUN_145e17f72(&DAT_14cb0bff0);
                    atexit(FUN_14374ca90);
                    _Init_thread_footer(&DAT_14cb0c040);
                  }
                  (**(code **)(DAT_14cb0bff0 + 0x28))(&DAT_14cb0bff0,5,1);
                  *(char *)((longlong)plVar39 + 0x151) =
                       *(char *)((longlong)plVar39 + 0x151) + '\x01';
                }
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14cb0c040) &&
                   (FUN_144b3d300(&DAT_14cb0c040), DAT_14cb0c040 == -1)) {
                  FUN_145e17f72(&DAT_14cb0bff0);
                  atexit(FUN_14374ca90);
                  _Init_thread_footer(&DAT_14cb0c040);
                }
                (**(code **)(DAT_14cb0bff0 + 0x28))(&DAT_14cb0bff0,6);
                *(char *)((longlong)plVar39 + 0x151) = *(char *)((longlong)plVar39 + 0x151) + '\x01'
                ;
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14cb0c040) &&
                   (FUN_144b3d300(&DAT_14cb0c040), DAT_14cb0c040 == -1)) {
                  FUN_145e17f72(&DAT_14cb0bff0);
                  atexit(FUN_14374ca90);
                  _Init_thread_footer(&DAT_14cb0c040);
                }
                (**(code **)(DAT_14cb0bff0 + 0x30))(&DAT_14cb0bff0);
              }
            }
            if (plVar39 != (longlong *)0x0) {
              FUN_140080e72(plVar39,uVar29);
            }
            uVar16 = (ulonglong)local_14c;
            lVar33 = local_140;
          }
        }
LAB_14355ee55:
        if (local_c8 != (wchar_t *)0x0) {
          FUN_1400020a8();
          uVar16 = (ulonglong)local_14c;
        }
        lVar33 = lVar33 + 1;
      } while (lVar33 < (int)plVar39[0x35]);
    }
  }
  if ((char)local_150 != '\0') {
    FUN_1448d508e(&DAT_14cb10868,plVar39,iVar12,uVar42);
    FUN_1404d823a(plVar39);
  }
  FUN_14485dd80(plVar39 + 0x9f,param_3);
  FUN_14485dd80(plVar39 + 0xa2,param_3);
  FUN_1447f69b6(plVar39 + 0xa5);
  uVar24 = local_148;
  plVar17 = (longlong *)plVar39[0x43];
  if (plVar17 != (longlong *)0x0) {
    (**(code **)(*plVar17 + 0x390))(plVar17,plVar39[0xda]);
  }
  if (((char)uVar24 == '\0') && (plVar17 = (longlong *)plVar39[0xc4], plVar17 != (longlong *)0x0)) {
    (**(code **)(*plVar17 + 0x18))(plVar17,plVar39,fVar41);
  }
  *(byte *)((longlong)plVar39 + 0x153) = *(byte *)((longlong)plVar39 + 0x153) & 0xfb;
  if (local_f0 == '\0') {
    local_f0 = '\x01';
    *(int *)(local_108 + 4) = (int)local_108[4] + -1;
    if (local_f8 != local_108[2]) {
      FUN_14004673c();
    }
    *local_108 = local_100;
    local_108[3] = local_e8;
    local_100 = 0;
  }
  FUN_143752a9a(DAT_14cb0d2b0);
  if ((*(byte *)((longlong)plVar39 + 0x155) & 8) != 0) {
    *(byte *)((longlong)plVar39 + 0x155) = *(byte *)((longlong)plVar39 + 0x155) & 0xf3 | 4;
  }
  if (*(int *)((longlong)plVar39 + 0x134) < 0) {
    *(undefined4 *)(plVar39 + 0x26) = 0;
    FUN_1447a8aa0(plVar39 + 0x25,0);
  }
  else {
    *(undefined4 *)(plVar39 + 0x26) = 0;
  }
  if (*(int *)((longlong)plVar39 + 0x144) < 0) {
    *(undefined4 *)(plVar39 + 0x28) = 0;
    FUN_147b9d124(plVar39 + 0x27);
  }
  else {
    *(undefined4 *)(plVar39 + 0x28) = 0;
  }
  plVar17 = *(longlong **)(DAT_14cb0d2b0 + 0xfe0);
  if (plVar17 != (longlong *)0x0) {
    uVar18 = FUN_1405e677a(DAT_14cb0d2b0,plVar39);
    (**(code **)(*plVar17 + 0x188))(plVar17,uVar18);
  }
  lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar10 = *(int *)(lVar33 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar10 != 2) {
      if (iVar10 == 1) {
        DVar14 = FUN_140ad26c0();
        DVar13 = GetCurrentThreadId();
        bVar40 = DVar14 == DVar13;
      }
      else {
        bVar40 = iVar10 == 0x10;
      }
      plVar39 = local_160;
      iVar12 = local_144;
      if (!bVar40) goto LAB_14355f456;
    }
  }
  else if (iVar10 != 0x10) {
LAB_14355f456:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar33 + 0xc60), iVar10 == 2))
      goto LAB_14355f38d;
      if (iVar10 == 1) {
        DVar14 = FUN_140ad26c0();
        DVar13 = GetCurrentThreadId();
        if (DVar14 == DVar13) goto LAB_14355f38d;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar15 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar20 = (uint *)*puVar15;
      if (puVar20 != (uint *)0x0) goto LAB_14355f674;
      while( true ) {
        uVar24 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar24 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar24 | 1;
          __tlregdtor(&LAB_143560338);
        }
        lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar19 = *(undefined4 **)(lVar33 + 0x310);
        *(undefined8 *)(lVar33 + 0x310) = 0;
        if (puVar19 == (undefined4 *)0x0) {
          puVar19 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar19 = 0xffffffff;
        *(undefined4 **)(puVar19 + 0x10) = puVar19 + 0x16;
        puVar19[0x12] = 0;
        *puVar15 = puVar19;
        FUN_140217a48(puVar15);
        puVar20 = (uint *)*puVar15;
LAB_14355f674:
        puVar28 = (undefined8 *)(*(longlong *)(puVar20 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar27 = (uint *)(puVar28 + 0x16);
        uVar24 = puVar20[0x12];
        if (puVar27 <= puVar20 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar20 + 0x10) = puVar20 + 0x4000;
          LOCK();
          uVar21 = *puVar20;
          *puVar20 = *puVar20 + uVar24 + 1;
          UNLOCK();
          if ((uVar21 ^ uVar24) != 0xffffffff) break;
          puVar20 = (uint *)*puVar15;
          *puVar20 = 0xffffffff;
          *(uint **)(puVar20 + 0x10) = puVar20 + 0x16;
          puVar20[0x12] = 0;
          *puVar15 = puVar20;
          puVar28 = (undefined8 *)((longlong)puVar20 + 0x5fU & 0xfffffffffffffff8);
          puVar27 = (uint *)(puVar28 + 0x16);
          uVar24 = 0;
          if (puVar27 <= puVar20 + 0x4000) {
            uVar24 = 1;
            goto LAB_14355f6f4;
          }
        }
      }
      uVar24 = uVar24 + 1;
LAB_14355f6f4:
      *(uint **)(puVar20 + 0x10) = puVar27;
      puVar20[0x12] = uVar24;
      iVar10 = 0;
      FUN_1447247dc(puVar28,0);
      plVar39 = local_160;
      *puVar28 = &PTR_FUN_14a9bb708;
      puVar28[0x15] = local_160;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar24 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar24 < 2) {
          uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar24];
          iVar10 = 0;
        }
        else {
          uVar16 = 2;
        }
      }
      else {
        iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar16 = 5;
      }
      if (*(code **)(puVar28[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar28[0xe] + 0x18))(puVar28 + 0xe,puVar28 + 9);
      }
      puVar28[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar28[9] = puVar28;
      puVar28[10] = puVar28;
      lVar33 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar33 == 0) {
        uVar30 = 1;
        if ((char)uVar16 != '\x06') {
          uVar30 = uVar16;
        }
        uVar16 = uVar30;
        uVar18 = 0;
      }
      else {
        if ((char)uVar16 == '\x06') {
          uVar16 = *(ulonglong *)(lVar33 + 0x38) >> 0x3b;
        }
        uVar18 = *(undefined8 *)(lVar33 + 0x30);
      }
      puVar28[0xf] = uVar18;
      puVar28[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar28 + 0x1c) = iVar10;
      if (puVar28 == (undefined8 *)0x0) {
        local_c8 = (wchar_t *)CONCAT71(local_c8._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar28 + 1) = *(int *)(puVar28 + 1) + 1;
        UNLOCK();
        local_c8 = (wchar_t *)CONCAT71(local_c8._1_7_,1);
        FUN_1447439e4(puVar28);
        LOCK();
        piVar1 = (int *)(puVar28 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar28)(puVar28,1);
        }
      }
    }
    else {
      local_168 = &local_c8;
      local_b8 = (undefined ***)0x0;
      local_a8 = &PTR_LAB_14a9bb6b0;
      local_c8 = L"譈䠁袋ސ";
      local_a0 = plVar39;
      FUN_14005a792(&DAT_14ca9a440,L"TickInGamePerfTrackersRT",&DAT_14cae92f8);
      if (local_c8 != (wchar_t *)0x0) {
        pppuVar25 = local_b8;
        if (local_b8 == (undefined ***)0x0) {
          pppuVar25 = &local_a8;
        }
        (*(code *)(*pppuVar25)[2])();
      }
    }
    goto LAB_14355f4fb;
  }
LAB_14355f38d:
  if (plVar39[0xf2] != 0) {
    FUN_14352fa12(plVar39[0xf2] + 0x38);
  }
LAB_14355f4fb:
  FUN_1448d508e(&DAT_14cb10808,plVar39,iVar12,uVar42);
  DVar14 = DAT_14c758730;
  if (DAT_14c758730 == 0xffffffff) {
    DVar14 = TlsAlloc();
    DVar13 = 0xffffffff;
    LOCK();
    bVar40 = DAT_14c758730 != 0xffffffff;
    DVar7 = DVar14;
    if (bVar40) {
      DVar13 = DAT_14c758730;
      DVar7 = DAT_14c758730;
    }
    DAT_14c758730 = DVar7;
    UNLOCK();
    if (bVar40) {
      TlsFree(DVar14);
      DVar14 = DVar13;
    }
  }
  puVar15 = TlsGetValue(DVar14);
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    DVar13 = GetCurrentThreadId();
    *(DWORD *)(puVar15 + 1) = DVar13;
    *puVar15 = &PTR_FUN_149e06328;
    puVar15[2] = 0;
    *(undefined4 *)(puVar15 + 3) = 1;
    *(undefined1 *)((longlong)puVar15 + 0x1c) = 0;
    FUN_140fddf04(puVar15);
    TlsSetValue(DVar14,puVar15);
  }
  *(int *)(puVar15 + 3) = *(int *)(puVar15 + 3) + -1;
  if (local_f0 == '\0') {
    local_f0 = '\x01';
    *(int *)(local_108 + 4) = (int)local_108[4] + -1;
    if (local_f8 != local_108[2]) {
      FUN_14004673c();
    }
    *local_108 = local_100;
    local_108[3] = local_e8;
  }
  if ((local_80 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14355fcb2 FUN_14355fcb2 body=334 status=ok
// SIG undefined FUN_14355fcb2(void)

void FUN_14355fcb2(longlong param_1)

{
  longlong *plVar1;
  void *_Dst;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  
  if ((longlong)*(int *)(param_1 + 0x198) != 0) {
    plVar9 = *(longlong **)(param_1 + 400);
    plVar1 = plVar9 + *(int *)(param_1 + 0x198);
    do {
      lVar3 = *plVar9;
      if (lVar3 != 0) {
        AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe0));
        bVar2 = *(byte *)(lVar3 + 0x243);
        ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe0));
        if ((bVar2 & 0xc) != 4) {
          iVar6 = *(int *)(lVar3 + 0xa8);
          uVar7 = (ulonglong)iVar6;
          if (2 < (longlong)uVar7) {
LAB_14355fd2b:
            lVar4 = *(longlong *)(lVar3 + 0xa0);
            uVar12 = 0;
            uVar8 = uVar7;
            do {
              iVar11 = (int)uVar12;
              if (*(longlong *)(lVar4 + -8 + uVar8 * 8) == 0) {
                uVar12 = (ulonglong)(iVar11 + 1);
              }
              else if (0 < iVar11) goto LAB_14355fd79;
              bVar5 = uVar8 < 4;
              uVar8 = uVar8 - 1;
              if (bVar5) {
                iVar11 = (int)uVar12;
                if (0 < iVar11) {
                  iVar10 = iVar6 - (iVar11 + 2);
                  if (iVar10 != 0) {
                    memmove((void *)(lVar4 + 0x10),(void *)(lVar4 + uVar12 * 8 + 0x10),
                            (longlong)iVar10 << 3);
                    iVar6 = *(int *)(lVar3 + 0xa8);
                  }
                  *(int *)(lVar3 + 0xa8) = iVar6 - iVar11;
                }
                break;
              }
            } while( true );
          }
        }
      }
LAB_14355fd5f:
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar1);
  }
  return;
LAB_14355fd79:
  if (iVar6 - iVar11 != (int)uVar8) {
    _Dst = (void *)(lVar4 + uVar8 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + uVar12 * 8),
            (longlong)((iVar6 - iVar11) - (int)uVar8) << 3);
    iVar6 = *(int *)(lVar3 + 0xa8);
  }
  uVar7 = uVar8 - 1;
  iVar6 = iVar6 - iVar11;
  *(int *)(lVar3 + 0xa8) = iVar6;
  if (uVar8 < 4) goto LAB_14355fd5f;
  goto LAB_14355fd2b;
}



// FUNCTION 14355fe00 FUN_14355fe00 body=141 status=ok
// SIG undefined FUN_14355fe00(void)

ulonglong FUN_14355fe00(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  ulonglong in_RAX;
  undefined7 uVar3;
  
  if (param_1 == 0) {
    in_RAX = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x152);
    if ((bVar1 == 1) || ((in_RAX = 0, bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
      uVar3 = (undefined7)(in_RAX >> 8);
      if (*(char *)(param_1 + 0xd9) == '\x01') {
        in_RAX = CONCAT71(uVar3,*(undefined1 *)(param_1 + 0xd8));
      }
      else {
        if (DAT_14cae8fe0 == '\0') {
          if (((*(longlong *)(param_1 + 0x30) == 0) ||
              (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2b0), lVar2 == 0)) ||
             (*(longlong *)(lVar2 + 0x3f0) == 0)) {
            in_RAX = 0;
          }
          else {
            in_RAX = FUN_14572a5ea();
          }
        }
        else {
          in_RAX = CONCAT71(uVar3,1);
        }
        *(char *)(param_1 + 0xd8) = (char)in_RAX;
        *(undefined1 *)(param_1 + 0xd9) = 1;
      }
    }
  }
  return in_RAX & 0xffffffffffffff01;
}



// FUNCTION 14355fea1 FUN_14355fea1 body=69 status=ok
// SIG undefined FUN_14355fea1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14355fea1(void)

{
  _DAT_14cae9298 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014355fee3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae92a0,1);
  return;
}



// FUNCTION 14355fee6 FUN_14355fee6 body=69 status=ok
// SIG undefined FUN_14355fee6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14355fee6(void)

{
  _DAT_14cae92b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014355ff28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae92b8,1);
  return;
}



// FUNCTION 14355ff2b FUN_14355ff2b body=69 status=ok
// SIG undefined FUN_14355ff2b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14355ff2b(void)

{
  _DAT_14cae92c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014355ff6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae92d0,1);
  return;
}



// FUNCTION 14355ff70 FUN_14355ff70 body=69 status=ok
// SIG undefined FUN_14355ff70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14355ff70(void)

{
  _DAT_14cae92e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014355ffb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae92e8,1);
  return;
}



// FUNCTION 14355ffb6 FUN_14355ffb6 body=753 status=ok
// SIG undefined FUN_14355ffb6(void)

void FUN_14355ffb6(longlong param_1)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58 [8];
  
  local_58[7] = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  if (*(byte *)(param_1 + 0xc) < 5) {
    FUN_147b9b3cc(param_1);
    if (*(int *)(DAT_14cae92c0 + 4) == 0) {
      uVar9 = 0;
    }
    else {
      uVar4 = (uint)*(byte *)(param_1 + 0xc);
      if (*(byte *)(param_1 + 0xc) == 5) {
        uVar4 = DAT_14c760db4;
      }
      uVar9 = 0;
      cVar3 = FUN_1449d9015(*(undefined2 *)(&DAT_14ca85070 + (longlong)(int)uVar4 * 2),0);
      if (cVar3 != '\0') {
        uVar9 = *(undefined8 *)(param_1 + 0x48);
      }
    }
    plVar8 = (longlong *)(param_1 + 0x10);
    uVar4 = (uint)*(byte *)(param_1 + 0xc);
    if (*(byte *)(param_1 + 0xc) == 5) {
      uVar4 = DAT_14c760db4;
    }
  }
  else {
    plVar8 = local_58;
    local_58[4] = 0;
    local_58[5] = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[6] = 0;
    uVar9 = 0;
    uVar4 = DAT_14c760db4;
  }
  FUN_1461f4cb7(uVar4,plVar8,uVar9,&local_d8);
  lVar5 = *(longlong *)(param_1 + 0x50);
  if (lVar5 == 0) {
    plVar8 = (longlong *)(param_1 + 0x50);
    lVar5 = FUN_145fcd0b4();
    local_e0 = 1;
    local_e8 = 2;
    (**(code **)(*DAT_14ca83900 + 0x138))
              (DAT_14ca83900,local_58,&local_d8,*(undefined8 *)(lVar5 + 0x48));
    if (plVar8 != local_58) {
      lVar5 = *plVar8;
      *plVar8 = local_58[0];
      local_58[0] = 0;
      if (lVar5 == 0) goto LAB_1435600ae;
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar5 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
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
    lVar5 = local_58[0];
    if (local_58[0] != 0) {
      LOCK();
      puVar1 = (uint *)(local_58[0] + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_58[0] + 8);
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_58[0] + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
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
  else if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
    (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,&DAT_14ca85100,lVar5,&local_d8);
    FUN_14002049c(&DAT_14ca85100,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,&DAT_14ca85100,lVar5,&local_d8);
  }
LAB_1435600ae:
  if ((local_58[7] ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435602a8 FUN_1435602a8 body=37 status=ok
// SIG undefined FUN_1435602a8(void)

void FUN_1435602a8(undefined8 param_1,undefined8 param_2)

{
  FUN_147b9b6a4(param_2);
  FUN_147b9b3cc(param_2);
  FUN_147b9b560(param_2);
  return;
}



// FUNCTION 1435602d4 FUN_1435602d4 body=48 status=ok
// SIG undefined FUN_1435602d4(void)

longlong FUN_1435602d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14034d9a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143560308 FUN_143560308 body=48 status=ok
// SIG undefined FUN_143560308(void)

longlong FUN_143560308(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143560360 FUN_143560360 body=367 status=ok
// SIG undefined FUN_143560360(void)

undefined8 * FUN_143560360(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_LAB_14a9bb500;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_14356041c;
  do {
    uVar2 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar2 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar2 | 1;
      __tlregdtor(&LAB_143560338);
    }
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar4 = *(undefined4 **)(lVar3 + 0x310);
    *(undefined8 *)(lVar3 + 0x310) = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar4 = 0xffffffff;
    *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    FUN_1467aa772(puVar1);
    puVar5 = (uint *)*puVar1;
LAB_14356041c:
    uVar6 = *(longlong *)(puVar5 + 0x10) + 7;
    while( true ) {
      puVar7 = (undefined8 *)(uVar6 & 0xfffffffffffffff8);
      if (puVar7 + 2 <= puVar5 + 0x4000) {
        *(undefined8 **)(puVar5 + 0x10) = puVar7 + 2;
        puVar5[0x12] = puVar5[0x12] + 1;
        *param_3 = puVar7;
        *puVar7 = *param_2;
        *param_2 = 0;
        *(undefined1 *)((longlong)puVar7 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_2 + 1);
        return param_1;
      }
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar2 = *puVar5;
      *puVar5 = *puVar5 + puVar5[0x12] + 1;
      UNLOCK();
      if ((uVar2 ^ puVar5[0x12]) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      uVar6 = (longlong)puVar5 + 0x5f;
    }
  } while( true );
}



// FUNCTION 1435604d0 FUN_1435604d0 body=238 status=ok
// SIG undefined FUN_1435604d0(void)

void FUN_1435604d0(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int *_Memory;
  int *piVar5;
  
  plVar2 = (longlong *)*param_2;
  puVar4 = (undefined8 *)*plVar2;
  if (puVar4 != (undefined8 *)0x0) {
    if (*(char *)((longlong)plVar2 + 0xc) == '\x01') {
      FUN_140031cf0(plVar2,(int)plVar2[1]);
      puVar4 = (undefined8 *)*plVar2;
      if (puVar4 == (undefined8 *)0x0) goto LAB_1435604f0;
    }
    LOCK();
    piVar5 = (int *)(puVar4 + 1);
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
LAB_1435604f0:
  if (plVar2 != (longlong *)0x0) {
    piVar5 = (int *)((ulonglong)plVar2 & 0xffffffffffff0000);
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      _Memory = piVar5;
      if (*(longlong *)(piVar5 + 0x10) - (longlong)piVar5 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143560338);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar3 + 0x310);
        *(int **)(lVar3 + 0x310) = piVar5;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00014356055b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 1435605be FUN_1435605be body=565 status=ok
// SIG undefined FUN_1435605be(void)

void FUN_1435605be(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  uint local_3c;
  ulonglong local_38;
  
  lVar8 = DAT_14c9640e8;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = *param_2;
  if (lVar5 != 0) {
    piVar2 = *(int **)(param_1 + 0x10);
    uVar1 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    if (*(int *)(lVar6 + 0xc) != *piVar2) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      if ((*(uint *)(lVar6 + 8) & 0x1000000) == 0 && *(int *)(lVar6 + 0xc) == 0) {
        if (DAT_14c9647bc < (int)uVar1) {
          cVar4 = FUN_147b9ba1e(piVar2);
          lVar5 = *param_2;
          if ((cVar4 != '\0') && ((*(uint *)(lVar5 + 8) & 0x1400) == 0)) {
            uVar1 = *(uint *)(lVar5 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar8 = 0;
            }
            if ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0) {
              local_48 = uVar3;
              FUN_143560a6a(piVar2,uVar1,lVar6);
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
            }
          }
          local_3c = *(uint *)(lVar5 + 0xc);
          FUN_144aa221c(*(longlong *)(piVar2 + 2) + 0x28);
        }
      }
      else {
        if ((*(uint *)(lVar6 + 8) >> 0x18 & 1) != 0) {
          lVar6 = lVar5;
        }
        local_3c = *(uint *)(lVar6 + 0xc);
        if ((int)local_3c < DAT_14c9647dc) {
          lVar5 = (ulonglong)((local_3c & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_3c >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        lVar7 = ~(longlong)*(int *)(lVar5 + 0xc) * 0x50;
        lVar5 = DAT_14c9640e8 + lVar7;
        FUN_1449e3bb0(*(longlong *)(piVar2 + 2) + 0x18,&local_3c);
        lVar6 = lVar8 + lVar7;
        FUN_1449e3bb0(lVar6 + 0x38,piVar2);
        lVar6 = (longlong)*(int *)(lVar6 + 0x20);
        if (lVar6 != 0) {
          lVar8 = *(longlong *)(lVar8 + 0x18 + lVar7);
          lVar7 = 0;
          do {
            local_40 = *(int *)(lVar8 + lVar7);
            if (local_40 != *piVar2) {
              FUN_1449e3bb0(*(longlong *)(piVar2 + 2) + 0x18,&local_40);
            }
            lVar7 = lVar7 + 4;
          } while (lVar6 * 4 != lVar7);
        }
        lVar8 = (longlong)*(int *)(lVar5 + 0x30);
        if (lVar8 != 0) {
          lVar5 = *(longlong *)(lVar5 + 0x28);
          lVar6 = 0;
          do {
            local_40 = *(int *)(lVar5 + lVar6);
            FUN_1449e3bb0(*(longlong *)(piVar2 + 2) + 0x28,&local_40);
            lVar6 = lVar6 + 4;
          } while (lVar8 * 4 != lVar6);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435607f6 FUN_1435607f6 body=626 status=ok
// SIG undefined FUN_1435607f6(void)

void FUN_1435607f6(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < (int)param_3) {
    uVar11 = (ulonglong)param_3;
    uVar8 = 0;
    local_68 = uVar11;
    local_60 = param_1;
    local_58 = param_2;
    do {
      lVar7 = DAT_14c9640e8;
      lVar6 = *(longlong *)(param_2 + uVar8 * 8);
      if (lVar6 != 0) {
        uVar1 = *(uint *)(lVar6 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        piVar2 = *(int **)(param_1 + 0x10);
        if (*(int *)(lVar10 + 0xc) != *piVar2) {
          uVar3 = *(undefined8 *)(param_1 + 0x18);
          if ((*(uint *)(lVar10 + 8) & 0x1000000) == 0 && *(int *)(lVar10 + 0xc) == 0) {
            if (DAT_14c9647bc < (int)uVar1) {
              cVar5 = FUN_147b9ba1e(piVar2);
              lVar6 = *(longlong *)(param_2 + uVar8 * 8);
              if ((cVar5 != '\0') && ((*(uint *)(lVar6 + 8) & 0x1400) == 0)) {
                uVar1 = *(uint *)(lVar6 + 0xc);
                if ((int)uVar1 < DAT_14c9647dc) {
                  lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                }
                else {
                  lVar7 = 0;
                }
                if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) {
                  local_78 = uVar3;
                  FUN_143560a6a(piVar2,uVar1,lVar10);
                  goto LAB_1435609fa;
                }
              }
              local_4c = *(uint *)(lVar6 + 0xc);
              FUN_144aa221c(*(longlong *)(piVar2 + 2) + 0x28,&local_4c);
            }
          }
          else {
            if ((*(uint *)(lVar10 + 8) >> 0x18 & 1) != 0) {
              lVar10 = lVar6;
            }
            local_4c = *(uint *)(lVar10 + 0xc);
            if ((int)local_4c < DAT_14c9647dc) {
              lVar6 = (ulonglong)((local_4c & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_4c >> 0x10) * 8);
            }
            else {
              lVar6 = 0;
            }
            lVar6 = ~(longlong)*(int *)(lVar6 + 0xc) * 0x50;
            FUN_1449e3bb0(*(longlong *)(piVar2 + 2) + 0x18,&local_4c);
            FUN_1449e3bb0(lVar7 + lVar6 + 0x38,piVar2);
            lVar10 = (longlong)*(int *)(lVar7 + lVar6 + 0x20);
            if (lVar10 != 0) {
              lVar4 = *(longlong *)(lVar7 + 0x18 + lVar6);
              lVar9 = 0;
              do {
                local_50 = *(int *)(lVar4 + lVar9);
                if (local_50 != *piVar2) {
                  FUN_1449e3bb0(*(longlong *)(piVar2 + 2) + 0x18,&local_50);
                }
                lVar9 = lVar9 + 4;
              } while (lVar10 * 4 != lVar9);
            }
            lVar10 = (longlong)*(int *)(lVar7 + lVar6 + 0x30);
            param_2 = local_58;
            param_1 = local_60;
            uVar11 = local_68;
            if (lVar10 != 0) {
              lVar6 = *(longlong *)(lVar7 + lVar6 + 0x28);
              lVar7 = 0;
              do {
                local_50 = *(int *)(lVar6 + lVar7);
                FUN_1449e3bb0(*(longlong *)(piVar2 + 2) + 0x28,&local_50);
                lVar7 = lVar7 + 4;
                param_2 = local_58;
                param_1 = local_60;
                uVar11 = local_68;
              } while (lVar10 * 4 != lVar7);
            }
          }
        }
      }
LAB_1435609fa:
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143560a6a FUN_143560a6a body=1792 status=ok
// SIG undefined FUN_143560a6a(void)

void FUN_143560a6a(int *param_1,int param_2,longlong param_3,longlong param_4,longlong param_5)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*param_1 == param_2) || (*(int *)(param_3 + 0xc) != 0)) ||
     (uVar4 = *(uint *)(param_4 + 0xc), (int)uVar4 <= DAT_14c9647bc)) goto LAB_143560ad8;
  if ((int)uVar4 < DAT_14c9647dc) {
    lVar3 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) goto LAB_143560ad8;
  **(longlong **)(param_5 + 0x18) = param_4;
  lVar3 = *(longlong *)(param_5 + 0x18) + 8;
  *(longlong *)(param_5 + 0x18) = lVar3;
  if (lVar3 == *(longlong *)(param_5 + 0x20) + 0xf80) {
    FUN_141715f94(param_5 + 0x18);
  }
  *(int *)(param_3 + 0xc) = *param_1;
  lVar3 = *(longlong *)(param_1 + 2);
  iVar1 = *(int *)(lVar3 + 0x10);
  *(uint *)(lVar3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(lVar3 + 0x14) < iVar1 + 1U) {
    FUN_1446f48e2((longlong *)(lVar3 + 8),iVar1);
  }
  *(int *)(*(longlong *)(lVar3 + 8) + (longlong)iVar1 * 4) = param_2;
  lVar3 = *(longlong *)(param_4 + 0x20);
  cVar2 = FUN_147b9ba1e(param_1,lVar3);
  lVar8 = DAT_14c9640e8;
  if (cVar2 == '\0') {
    lVar8 = *(longlong *)(param_1 + 2);
    local_4c = *(uint *)(lVar3 + 0xc);
LAB_143560bc1:
    FUN_144aa221c(lVar8 + 0x28,&local_4c);
  }
  else if (lVar3 != 0) {
    uVar4 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    if (*(int *)(lVar5 + 0xc) != *param_1) {
      if ((*(uint *)(lVar5 + 8) & 0x1000000) == 0 && *(int *)(lVar5 + 0xc) == 0) {
        if (DAT_14c9647bc < (int)uVar4) {
          cVar2 = FUN_147b9ba1e(param_1,lVar3);
          if (cVar2 == '\0') {
            uVar4 = *(uint *)(lVar3 + 0xc);
          }
          else {
            uVar4 = *(uint *)(lVar3 + 0xc);
            if ((*(uint *)(lVar3 + 8) & 0x1400) == 0) {
              if ((int)uVar4 < DAT_14c9647dc) {
                lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
              }
              else {
                lVar8 = 0;
              }
              if ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0) {
                local_58 = param_5;
                FUN_143560a6a(param_1,uVar4,lVar5,lVar3);
                goto LAB_143560d3f;
              }
            }
          }
          lVar8 = *(longlong *)(param_1 + 2);
          local_4c = uVar4;
          goto LAB_143560bc1;
        }
      }
      else {
        puVar7 = (uint *)(lVar3 + 0xc);
        if ((*(uint *)(lVar5 + 8) >> 0x18 & 1) == 0) {
          puVar7 = (uint *)(lVar5 + 0xc);
        }
        local_4c = *puVar7;
        if ((int)local_4c < DAT_14c9647dc) {
          lVar3 = (ulonglong)((local_4c & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_4c >> 0x10) * 8);
        }
        else {
          lVar3 = 0;
        }
        lVar5 = ~(longlong)*(int *)(lVar3 + 0xc) * 0x50;
        lVar6 = DAT_14c9640e8 + lVar5;
        FUN_1449e3bb0(*(longlong *)(param_1 + 2) + 0x18,&local_4c);
        lVar3 = lVar5 + 0x38 + lVar8;
        FUN_1449e3bb0(lVar3,param_1);
        lVar3 = (longlong)*(int *)(lVar3 + -0x18);
        if (lVar3 != 0) {
          lVar8 = *(longlong *)(lVar8 + 0x18 + lVar5);
          lVar5 = 0;
          do {
            local_50 = *(int *)(lVar8 + lVar5);
            if (local_50 != *param_1) {
              FUN_1449e3bb0(*(longlong *)(param_1 + 2) + 0x18,&local_50);
            }
            lVar5 = lVar5 + 4;
          } while (lVar3 * 4 != lVar5);
        }
        lVar3 = (longlong)*(int *)(lVar6 + 0x30);
        if (lVar3 != 0) {
          lVar8 = *(longlong *)(lVar6 + 0x28);
          lVar5 = 0;
          do {
            local_50 = *(int *)(lVar8 + lVar5);
            FUN_1449e3bb0(*(longlong *)(param_1 + 2) + 0x28,&local_50);
            lVar5 = lVar5 + 4;
          } while (lVar3 * 4 != lVar5);
        }
      }
    }
  }
LAB_143560d3f:
  lVar8 = DAT_14c9640e8;
  lVar3 = *(longlong *)(param_4 + 0x10);
  if ((*(byte *)(lVar3 + 0xd4) & 0x80) != 0) goto LAB_143560ad8;
  if (lVar3 != 0) {
    uVar4 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    if (*(int *)(lVar5 + 0xc) != *param_1) {
      if ((*(uint *)(lVar5 + 8) & 0x1000000) == 0 && *(int *)(lVar5 + 0xc) == 0) {
        if (DAT_14c9647bc < (int)uVar4) {
          cVar2 = FUN_147b9ba1e(param_1,lVar3);
          if (cVar2 == '\0') {
            uVar4 = *(uint *)(lVar3 + 0xc);
          }
          else {
            uVar4 = *(uint *)(lVar3 + 0xc);
            if ((*(uint *)(lVar3 + 8) & 0x1400) == 0) {
              if ((int)uVar4 < DAT_14c9647dc) {
                lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
              }
              else {
                lVar8 = 0;
              }
              if ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0) {
                local_58 = param_5;
                FUN_143560a6a(param_1,uVar4,lVar5,lVar3);
                goto LAB_143560ef9;
              }
            }
          }
          local_4c = uVar4;
          FUN_144aa221c(*(longlong *)(param_1 + 2) + 0x28,&local_4c);
        }
      }
      else {
        puVar7 = (uint *)(lVar3 + 0xc);
        if ((*(uint *)(lVar5 + 8) >> 0x18 & 1) == 0) {
          puVar7 = (uint *)(lVar5 + 0xc);
        }
        local_4c = *puVar7;
        if ((int)local_4c < DAT_14c9647dc) {
          lVar3 = (ulonglong)((local_4c & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_4c >> 0x10) * 8);
        }
        else {
          lVar3 = 0;
        }
        lVar5 = ~(longlong)*(int *)(lVar3 + 0xc) * 0x50;
        lVar6 = DAT_14c9640e8 + lVar5;
        FUN_1449e3bb0(*(longlong *)(param_1 + 2) + 0x18,&local_4c);
        lVar3 = lVar5 + 0x38 + lVar8;
        FUN_1449e3bb0(lVar3,param_1);
        lVar3 = (longlong)*(int *)(lVar3 + -0x18);
        if (lVar3 != 0) {
          lVar8 = *(longlong *)(lVar8 + 0x18 + lVar5);
          lVar5 = 0;
          do {
            local_50 = *(int *)(lVar8 + lVar5);
            if (local_50 != *param_1) {
              FUN_1449e3bb0(*(longlong *)(param_1 + 2) + 0x18,&local_50);
            }
            lVar5 = lVar5 + 4;
          } while (lVar3 * 4 != lVar5);
        }
        lVar3 = (longlong)*(int *)(lVar6 + 0x30);
        if (lVar3 != 0) {
          lVar8 = *(longlong *)(lVar6 + 0x28);
          lVar5 = 0;
          do {
            local_50 = *(int *)(lVar8 + lVar5);
            FUN_1449e3bb0(*(longlong *)(param_1 + 2) + 0x28,&local_50);
            lVar5 = lVar5 + 4;
          } while (lVar3 * 4 != lVar5);
        }
      }
    }
  }
LAB_143560ef9:
  lVar8 = DAT_14c9640e8;
  lVar3 = *(longlong *)(*(longlong *)(param_4 + 0x10) + 0x20);
  if (lVar3 != 0) {
    uVar4 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    if (*(int *)(lVar5 + 0xc) != *param_1) {
      if ((*(uint *)(lVar5 + 8) & 0x1000000) == 0 && *(int *)(lVar5 + 0xc) == 0) {
        if (DAT_14c9647bc < (int)uVar4) {
          cVar2 = FUN_147b9ba1e(param_1,lVar3);
          if (cVar2 == '\0') {
            uVar4 = *(uint *)(lVar3 + 0xc);
          }
          else {
            uVar4 = *(uint *)(lVar3 + 0xc);
            if ((*(uint *)(lVar3 + 8) & 0x1400) == 0) {
              if ((int)uVar4 < DAT_14c9647dc) {
                lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
              }
              else {
                lVar8 = 0;
              }
              if ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0) {
                local_58 = param_5;
                FUN_143560a6a(param_1,uVar4,lVar5,lVar3);
                goto LAB_143560ad8;
              }
            }
          }
          local_4c = uVar4;
          FUN_144aa221c(*(longlong *)(param_1 + 2) + 0x28,&local_4c);
        }
      }
      else {
        puVar7 = (uint *)(lVar3 + 0xc);
        if ((*(uint *)(lVar5 + 8) >> 0x18 & 1) == 0) {
          puVar7 = (uint *)(lVar5 + 0xc);
        }
        local_4c = *puVar7;
        if ((int)local_4c < DAT_14c9647dc) {
          lVar3 = (ulonglong)((local_4c & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_4c >> 0x10) * 8);
        }
        else {
          lVar3 = 0;
        }
        lVar6 = ~(longlong)*(int *)(lVar3 + 0xc) * 0x50;
        lVar3 = DAT_14c9640e8 + lVar6;
        FUN_1449e3bb0(*(longlong *)(param_1 + 2) + 0x18,&local_4c);
        lVar5 = lVar8 + lVar6;
        FUN_1449e3bb0(lVar5 + 0x38,param_1);
        lVar5 = (longlong)*(int *)(lVar5 + 0x20);
        if (lVar5 != 0) {
          lVar8 = *(longlong *)(lVar8 + 0x18 + lVar6);
          lVar6 = 0;
          do {
            local_50 = *(int *)(lVar8 + lVar6);
            if (local_50 != *param_1) {
              FUN_1449e3bb0(*(longlong *)(param_1 + 2) + 0x18,&local_50);
            }
            lVar6 = lVar6 + 4;
          } while (lVar5 * 4 != lVar6);
        }
        lVar8 = (longlong)*(int *)(lVar3 + 0x30);
        if (lVar8 != 0) {
          lVar3 = *(longlong *)(lVar3 + 0x28);
          lVar5 = 0;
          do {
            local_50 = *(int *)(lVar3 + lVar5);
            FUN_1449e3bb0(*(longlong *)(param_1 + 2) + 0x28,&local_50);
            lVar5 = lVar5 + 4;
          } while (lVar8 * 4 != lVar5);
        }
      }
    }
  }
LAB_143560ad8:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14356116b FUN_14356116b body=5288 status=ok
// SIG undefined FUN_14356116b(void)

void FUN_14356116b(undefined8 *param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int *piVar10;
  ushort *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ushort *puVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  longlong *plVar19;
  ulonglong *puVar20;
  ulonglong *puVar21;
  longlong *plVar22;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 *local_a0;
  ushort *local_98;
  ushort *local_90;
  ulonglong local_88;
  longlong local_80;
  longlong *local_78;
  int local_70;
  uint local_6c;
  byte local_68 [4];
  uint local_64;
  byte local_60;
  uint local_5c;
  byte local_58;
  uint local_54;
  byte local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = (ulonglong)((uint)param_2 & 1);
  local_98 = (ushort *)(param_2 & 0xfffffffffffffffe);
  local_a0 = param_1;
  local_80 = param_3;
  do {
    local_68[0] = (byte)*local_98 & 0x1f;
    local_64 = (uint)(*local_98 >> 5);
    local_60 = (byte)local_98[1] & 0x1f;
    local_5c = (uint)(local_98[1] >> 5);
    local_58 = (byte)local_98[2] & 0x1f;
    local_54 = (uint)(local_98[2] >> 5);
    local_50 = (byte)local_98[3] & 0x1f;
    local_4c = (uint)(local_98[3] >> 5);
    lVar6 = 0;
    do {
      puVar3 = local_a0;
      puVar15 = DAT_14c9640e8;
      uVar8 = (ulonglong)local_68[lVar6];
      if (0x11 < uVar8) {
LAB_1435625e1:
        FUN_143562614(uVar8);
        goto switchD_14356123d_caseD_0;
      }
      puVar21 = (ulonglong *)(param_3 + (ulonglong)*(uint *)((longlong)&local_64 + lVar6) * 8);
      puVar4 = local_98;
      switch(uVar8) {
      case 1:
        param_3 = param_3 + (ulonglong)(*(uint *)((longlong)&local_64 + lVar6) * 0x800 + 0x800) * 8;
        break;
      case 2:
        uVar8 = *puVar21;
        if (uVar8 != 0) {
          uVar17 = *(uint *)(uVar8 + 0xc);
          if ((int)uVar17 < DAT_14c9647dc) {
            uVar13 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
          }
          else {
            uVar13 = 0;
          }
          piVar10 = (int *)*local_a0;
          param_1 = puVar3;
          local_b0 = lVar6;
          local_a8 = param_3;
          if (*(int *)(uVar13 + 0xc) != *piVar10) {
            uVar2 = local_a0[1];
            if ((*(uint *)(uVar13 + 8) & 0x1000000) == 0 && *(int *)(uVar13 + 0xc) == 0) {
              if (DAT_14c9647bc < (int)uVar17) {
                cVar5 = FUN_147b9ba1e(piVar10);
                uVar8 = *puVar21;
                if ((cVar5 != '\0') && ((*(uint *)(uVar8 + 8) & 0x1400) == 0)) {
                  uVar17 = *(uint *)(uVar8 + 0xc);
                  if ((int)uVar17 < DAT_14c9647dc) {
                    lVar6 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
                  }
                  else {
                    lVar6 = 0;
                  }
                  if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) {
LAB_143562593:
                    local_b8 = uVar2;
                    FUN_143560a6a(piVar10,uVar17,uVar13,uVar8);
                    param_1 = local_a0;
                    lVar6 = local_b0;
                    param_3 = local_a8;
                    puVar4 = local_98;
                    break;
                  }
                }
                lVar6 = *(longlong *)(piVar10 + 2);
                local_6c = *(uint *)(uVar8 + 0xc);
LAB_1435625ad:
                FUN_144aa221c(lVar6 + 0x28,&local_6c);
                param_1 = local_a0;
                lVar6 = local_b0;
                param_3 = local_a8;
                puVar4 = local_98;
              }
            }
            else {
              if ((*(uint *)(uVar13 + 8) >> 0x18 & 1) != 0) {
                uVar13 = uVar8;
              }
              local_6c = *(uint *)(uVar13 + 0xc);
              if ((int)local_6c < DAT_14c9647dc) {
                lVar12 = (ulonglong)((local_6c & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_6c >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              uVar8 = ~(longlong)*(int *)(lVar12 + 0xc);
              FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_6c);
              FUN_1449e3bb0(puVar15 + uVar8 * 0x28 + 0x1c,piVar10);
              iVar1 = *(int *)(puVar15 + uVar8 * 0x28 + 0x10);
              if ((longlong)iVar1 != 0) {
                lVar6 = *(longlong *)(puVar15 + uVar8 * 0x28 + 0xc);
                lVar12 = 0;
                do {
                  local_70 = *(int *)(lVar6 + lVar12);
                  if (local_70 != *piVar10) {
                    FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_70);
                  }
                  lVar12 = lVar12 + 4;
                } while ((longlong)iVar1 * 4 != lVar12);
              }
              iVar1 = *(int *)(puVar15 + uVar8 * 0x28 + 0x18);
              lVar6 = local_b0;
              param_3 = local_a8;
              puVar4 = local_98;
              if ((longlong)iVar1 != 0) {
                lVar12 = *(longlong *)(puVar15 + uVar8 * 0x28 + 0x14);
                lVar7 = 0;
                do {
                  local_70 = *(int *)(lVar12 + lVar7);
                  FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x28,&local_70);
                  lVar7 = lVar7 + 4;
                  lVar6 = local_b0;
                  param_3 = local_a8;
                  puVar4 = local_98;
                } while ((longlong)iVar1 * 4 != lVar7);
              }
            }
          }
        }
        break;
      case 3:
        if ((longlong)(int)puVar21[1] != 0) {
          puVar11 = (ushort *)*puVar21;
          puVar15 = puVar11 + (longlong)(int)puVar21[1] * 4;
          local_b0 = lVar6;
          local_a8 = param_3;
          local_90 = puVar15;
          do {
            puVar4 = DAT_14c9640e8;
            lVar6 = *(longlong *)puVar11;
            if (lVar6 != 0) {
              uVar17 = *(uint *)(lVar6 + 0xc);
              if ((int)uVar17 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              piVar10 = (int *)*local_a0;
              if (*(int *)(lVar12 + 0xc) != *piVar10) {
                uVar2 = local_a0[1];
                if ((*(uint *)(lVar12 + 8) & 0x1000000) == 0 && *(int *)(lVar12 + 0xc) == 0) {
                  if (DAT_14c9647bc < (int)uVar17) {
                    cVar5 = FUN_147b9ba1e(piVar10);
                    lVar6 = *(longlong *)puVar11;
                    if ((cVar5 != '\0') && ((*(uint *)(lVar6 + 8) & 0x1400) == 0)) {
                      uVar17 = *(uint *)(lVar6 + 0xc);
                      if ((int)uVar17 < DAT_14c9647dc) {
                        lVar7 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
                      }
                      else {
                        lVar7 = 0;
                      }
                      if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) {
                        local_b8 = uVar2;
                        FUN_143560a6a(piVar10,uVar17,lVar12);
                        goto LAB_1435619bc;
                      }
                    }
                    local_6c = *(uint *)(lVar6 + 0xc);
                    FUN_144aa221c(*(longlong *)(piVar10 + 2) + 0x28,&local_6c);
                  }
                }
                else {
                  if ((*(uint *)(lVar12 + 8) >> 0x18 & 1) != 0) {
                    lVar12 = lVar6;
                  }
                  local_6c = *(uint *)(lVar12 + 0xc);
                  if ((int)local_6c < DAT_14c9647dc) {
                    lVar6 = (ulonglong)((local_6c & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_6c >> 0x10) * 8);
                  }
                  else {
                    lVar6 = 0;
                  }
                  uVar8 = ~(longlong)*(int *)(lVar6 + 0xc);
                  FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_6c);
                  FUN_1449e3bb0(puVar4 + uVar8 * 0x28 + 0x1c,piVar10);
                  iVar1 = *(int *)(puVar4 + uVar8 * 0x28 + 0x10);
                  if ((longlong)iVar1 != 0) {
                    lVar6 = *(longlong *)(puVar4 + uVar8 * 0x28 + 0xc);
                    lVar12 = 0;
                    do {
                      local_70 = *(int *)(lVar6 + lVar12);
                      if (local_70 != *piVar10) {
                        FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_70);
                      }
                      lVar12 = lVar12 + 4;
                    } while ((longlong)iVar1 * 4 != lVar12);
                  }
                  iVar1 = *(int *)(puVar4 + uVar8 * 0x28 + 0x18);
                  puVar15 = local_90;
                  if ((longlong)iVar1 != 0) {
                    lVar6 = *(longlong *)(puVar4 + uVar8 * 0x28 + 0x14);
                    lVar12 = 0;
                    do {
                      local_70 = *(int *)(lVar6 + lVar12);
                      FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x28,&local_70);
                      lVar12 = lVar12 + 4;
                      puVar15 = local_90;
                    } while ((longlong)iVar1 * 4 != lVar12);
                  }
                }
              }
            }
LAB_1435619bc:
            puVar11 = puVar11 + 4;
            param_1 = local_a0;
            lVar6 = local_b0;
            param_3 = local_a8;
            puVar4 = local_98;
          } while (puVar11 != puVar15);
        }
        break;
      case 4:
        puVar20 = (ulonglong *)(local_98 + 4);
        local_98 = local_98 + 4;
        uVar17 = *(uint *)((*puVar20 & 0xfffffffffffffffe) - 8);
        uVar16 = (int)puVar21[1] * uVar17;
        local_b0 = lVar6;
        local_a8 = param_3;
        puVar4 = local_98;
        if (uVar16 != 0) {
          lVar12 = (*puVar20 & 0xfffffffffffffffe) + local_88;
          uVar8 = *puVar21;
          uVar13 = 0;
          do {
            FUN_14356116b(param_1,lVar12,uVar8 + uVar13);
            uVar13 = uVar13 + uVar17;
            lVar6 = local_b0;
            param_3 = local_a8;
            puVar4 = local_98;
          } while (uVar16 != uVar13);
        }
        break;
      case 5:
        puVar18 = (uint *)(local_98 + 4);
        local_98 = local_98 + 4;
        uVar17 = *puVar18 >> 0x10;
        puVar15 = (ushort *)(ulonglong)uVar17;
        uVar17 = (int)puVar21[1] * uVar17;
        puVar4 = local_98;
        if (uVar17 != 0) {
          plVar22 = (longlong *)((ulonglong)(*puVar18 & 0xffff) * 8 + *puVar21);
          plVar19 = plVar22 + uVar17;
          local_b0 = lVar6;
          local_a8 = param_3;
          local_90 = puVar15;
          local_78 = plVar19;
          do {
            puVar4 = DAT_14c9640e8;
            lVar6 = *plVar22;
            if (lVar6 != 0) {
              uVar17 = *(uint *)(lVar6 + 0xc);
              if ((int)uVar17 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              piVar10 = (int *)*param_1;
              if (*(int *)(lVar12 + 0xc) != *piVar10) {
                uVar2 = param_1[1];
                if ((*(uint *)(lVar12 + 8) & 0x1000000) == 0 && *(int *)(lVar12 + 0xc) == 0) {
                  if (DAT_14c9647bc < (int)uVar17) {
                    cVar5 = FUN_147b9ba1e(piVar10);
                    lVar6 = *plVar22;
                    if ((cVar5 != '\0') && ((*(uint *)(lVar6 + 8) & 0x1400) == 0)) {
                      uVar17 = *(uint *)(lVar6 + 0xc);
                      if ((int)uVar17 < DAT_14c9647dc) {
                        lVar7 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
                      }
                      else {
                        lVar7 = 0;
                      }
                      if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) {
                        local_b8 = uVar2;
                        FUN_143560a6a(piVar10,uVar17,lVar12);
                        goto LAB_143561742;
                      }
                    }
                    local_6c = *(uint *)(lVar6 + 0xc);
                    FUN_144aa221c(*(longlong *)(piVar10 + 2) + 0x28,&local_6c);
                  }
                }
                else {
                  if ((*(uint *)(lVar12 + 8) >> 0x18 & 1) != 0) {
                    lVar12 = lVar6;
                  }
                  local_6c = *(uint *)(lVar12 + 0xc);
                  if ((int)local_6c < DAT_14c9647dc) {
                    lVar6 = (ulonglong)((local_6c & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_6c >> 0x10) * 8);
                  }
                  else {
                    lVar6 = 0;
                  }
                  uVar8 = ~(longlong)*(int *)(lVar6 + 0xc);
                  FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_6c);
                  FUN_1449e3bb0(puVar4 + uVar8 * 0x28 + 0x1c,piVar10);
                  iVar1 = *(int *)(puVar4 + uVar8 * 0x28 + 0x10);
                  if ((longlong)iVar1 != 0) {
                    lVar6 = *(longlong *)(puVar4 + uVar8 * 0x28 + 0xc);
                    lVar12 = 0;
                    do {
                      local_70 = *(int *)(lVar6 + lVar12);
                      if (local_70 != *piVar10) {
                        FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_70);
                      }
                      lVar12 = lVar12 + 4;
                    } while ((longlong)iVar1 * 4 != lVar12);
                  }
                  iVar1 = *(int *)(puVar4 + uVar8 * 0x28 + 0x18);
                  plVar19 = local_78;
                  param_1 = local_a0;
                  puVar15 = local_90;
                  if ((longlong)iVar1 != 0) {
                    lVar6 = *(longlong *)(puVar4 + uVar8 * 0x28 + 0x14);
                    lVar12 = 0;
                    do {
                      local_70 = *(int *)(lVar6 + lVar12);
                      FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x28,&local_70);
                      lVar12 = lVar12 + 4;
                      plVar19 = local_78;
                      param_1 = local_a0;
                      puVar15 = local_90;
                    } while ((longlong)iVar1 * 4 != lVar12);
                  }
                }
              }
            }
LAB_143561742:
            plVar22 = plVar22 + (longlong)puVar15;
            lVar6 = local_b0;
            param_3 = local_a8;
            puVar4 = local_98;
          } while (plVar22 != plVar19);
        }
        break;
      case 6:
        puVar4 = local_98 + 4;
        uVar17 = (uint)puVar21[1];
        if ((0 < (int)uVar17) && (uVar17 != *(uint *)((longlong)puVar21 + 0x34))) {
          uVar16 = *(uint *)((*(ulonglong *)(local_98 + 4) & 0xfffffffffffffffe) - 8);
          lVar12 = (*(ulonglong *)(local_98 + 4) & 0xfffffffffffffffe) + local_88;
          uVar8 = *puVar21;
          uVar13 = 0;
          local_b0 = lVar6;
          local_a8 = param_3;
          local_90 = puVar4;
          do {
            puVar20 = (ulonglong *)puVar21[4];
            if ((ulonglong *)puVar21[4] == (ulonglong *)0x0) {
              puVar20 = puVar21 + 2;
            }
            if ((*(uint *)((longlong)puVar20 + (uVar13 >> 5) * 4) >> ((uint)uVar13 & 0x1f) & 1) != 0
               ) {
              FUN_14356116b(local_a0,lVar12,uVar8);
            }
            uVar14 = (uint)uVar13 + 1;
            uVar13 = (ulonglong)uVar14;
            uVar8 = uVar8 + uVar16;
          } while (uVar17 != uVar14);
          local_98 = local_90;
          param_1 = local_a0;
          lVar6 = local_b0;
          param_3 = local_a8;
          puVar4 = local_98;
        }
        break;
      case 7:
        if (((*(int *)((longlong)puVar21 + 0xc) != 0) &&
            (uVar17 = (uint)puVar21[1], (int)uVar17 < DAT_14c9647dc && -1 < (int)uVar17)) &&
           ((puVar20 = (ulonglong *)
                       ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8)),
            puVar20 != (ulonglong *)0x0 &&
            (((int)puVar20[2] == *(int *)((longlong)puVar21 + 0xc) &&
             (uVar8 = *puVar20, local_b0 = lVar6, local_a8 = param_3, uVar8 != 0)))))) {
          uVar17 = *(uint *)(uVar8 + 0xc);
          if ((int)uVar17 < DAT_14c9647dc) {
            uVar13 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
          }
          else {
            uVar13 = 0;
          }
          piVar10 = (int *)*local_a0;
          param_1 = puVar3;
          if (*(int *)(uVar13 + 0xc) != *piVar10) {
            uVar2 = local_a0[1];
            puVar18 = (uint *)(uVar8 + 0xc);
            if ((*(uint *)(uVar13 + 8) & 0x1000000) == 0 && *(int *)(uVar13 + 0xc) == 0) {
joined_r0x0001435621ed:
              param_1 = puVar3;
              local_b0 = lVar6;
              local_a8 = param_3;
              if (DAT_14c9647bc < (int)uVar17) {
                cVar5 = FUN_147b9ba1e(piVar10,uVar8);
                if (cVar5 == '\0') {
                  uVar17 = *puVar18;
                }
                else {
                  uVar17 = *(uint *)(uVar8 + 0xc);
                  if ((*(uint *)(uVar8 + 8) & 0x1400) == 0) {
                    if ((int)uVar17 < DAT_14c9647dc) {
                      lVar6 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
                    }
                    else {
                      lVar6 = 0;
                    }
                    if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) goto LAB_143562593;
                  }
                }
                lVar6 = *(longlong *)(piVar10 + 2);
                local_6c = uVar17;
                goto LAB_1435625ad;
              }
            }
            else {
              if ((*(uint *)(uVar13 + 8) >> 0x18 & 1) == 0) {
                puVar18 = (uint *)(uVar13 + 0xc);
              }
              local_6c = *puVar18;
              if ((int)local_6c < DAT_14c9647dc) {
                lVar12 = (ulonglong)((local_6c & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_6c >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              uVar8 = ~(longlong)*(int *)(lVar12 + 0xc);
              FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_6c);
              FUN_1449e3bb0(puVar15 + uVar8 * 0x28 + 0x1c,piVar10);
              iVar1 = *(int *)(puVar15 + uVar8 * 0x28 + 0x10);
              if ((longlong)iVar1 != 0) {
                lVar6 = *(longlong *)(puVar15 + uVar8 * 0x28 + 0xc);
                lVar12 = 0;
                do {
                  local_70 = *(int *)(lVar6 + lVar12);
                  if (local_70 != *piVar10) {
                    FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_70);
                  }
                  lVar12 = lVar12 + 4;
                } while ((longlong)iVar1 * 4 != lVar12);
              }
              iVar1 = *(int *)(puVar15 + uVar8 * 0x28 + 0x18);
              lVar6 = local_b0;
              param_3 = local_a8;
              puVar4 = local_98;
              if ((longlong)iVar1 != 0) {
                lVar12 = *(longlong *)(puVar15 + uVar8 * 0x28 + 0x14);
                lVar7 = 0;
                do {
                  local_70 = *(int *)(lVar12 + lVar7);
                  FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x28,&local_70);
                  lVar7 = lVar7 + 4;
                  lVar6 = local_b0;
                  param_3 = local_a8;
                  puVar4 = local_98;
                } while ((longlong)iVar1 * 4 != lVar7);
              }
            }
          }
        }
        break;
      case 8:
        if ((longlong)(int)puVar21[1] != 0) {
          uVar8 = *puVar21;
          uVar13 = (longlong)(int)puVar21[1] * 0x20 + uVar8;
          local_b0 = lVar6;
          local_a8 = param_3;
          do {
            puVar15 = DAT_14c9640e8;
            if ((((*(int *)(uVar8 + 0xc) != 0) &&
                 (uVar17 = *(uint *)(uVar8 + 8), (int)uVar17 < DAT_14c9647dc && -1 < (int)uVar17))
                && (plVar19 = (longlong *)
                              ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8)),
                   plVar19 != (longlong *)0x0)) &&
               (((int)plVar19[2] == *(int *)(uVar8 + 0xc) && (lVar6 = *plVar19, lVar6 != 0)))) {
              uVar17 = *(uint *)(lVar6 + 0xc);
              if ((int)uVar17 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              piVar10 = (int *)*local_a0;
              if (*(int *)(lVar12 + 0xc) != *piVar10) {
                uVar2 = local_a0[1];
                if ((*(uint *)(lVar12 + 8) & 0x1000000) == 0 && *(int *)(lVar12 + 0xc) == 0) {
                  if (DAT_14c9647bc < (int)uVar17) {
                    cVar5 = FUN_147b9ba1e(piVar10,lVar6);
                    if (cVar5 == '\0') {
                      uVar17 = *(uint *)(lVar6 + 0xc);
                    }
                    else {
                      uVar17 = *(uint *)(lVar6 + 0xc);
                      if ((*(uint *)(lVar6 + 8) & 0x1400) == 0) {
                        if ((int)uVar17 < DAT_14c9647dc) {
                          lVar7 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
                        }
                        else {
                          lVar7 = 0;
                        }
                        if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) {
                          local_b8 = uVar2;
                          FUN_143560a6a(piVar10,uVar17,lVar12,lVar6);
                          goto LAB_143561c93;
                        }
                      }
                    }
                    local_6c = uVar17;
                    FUN_144aa221c(*(longlong *)(piVar10 + 2) + 0x28,&local_6c);
                  }
                }
                else {
                  puVar18 = (uint *)(lVar6 + 0xc);
                  if ((*(uint *)(lVar12 + 8) >> 0x18 & 1) == 0) {
                    puVar18 = (uint *)(lVar12 + 0xc);
                  }
                  local_6c = *puVar18;
                  if ((int)local_6c < DAT_14c9647dc) {
                    lVar6 = (ulonglong)((local_6c & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_6c >> 0x10) * 8);
                  }
                  else {
                    lVar6 = 0;
                  }
                  uVar9 = ~(longlong)*(int *)(lVar6 + 0xc);
                  FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_6c);
                  local_90 = puVar15;
                  FUN_1449e3bb0(puVar15 + uVar9 * 0x28 + 0x1c,piVar10);
                  iVar1 = *(int *)(puVar15 + uVar9 * 0x28 + 0x10);
                  if ((longlong)iVar1 != 0) {
                    lVar6 = *(longlong *)(local_90 + uVar9 * 0x28 + 0xc);
                    lVar12 = 0;
                    do {
                      local_70 = *(int *)(lVar6 + lVar12);
                      if (local_70 != *piVar10) {
                        FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_70);
                      }
                      lVar12 = lVar12 + 4;
                    } while ((longlong)iVar1 * 4 != lVar12);
                  }
                  iVar1 = *(int *)(local_90 + uVar9 * 0x28 + 0x18);
                  if ((longlong)iVar1 != 0) {
                    lVar6 = *(longlong *)(local_90 + uVar9 * 0x28 + 0x14);
                    lVar12 = 0;
                    do {
                      local_70 = *(int *)(lVar6 + lVar12);
                      FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x28,&local_70);
                      lVar12 = lVar12 + 4;
                    } while ((longlong)iVar1 * 4 != lVar12);
                  }
                }
              }
            }
LAB_143561c93:
            uVar8 = uVar8 + 0x20;
            param_1 = local_a0;
            lVar6 = local_b0;
            param_3 = local_a8;
            puVar4 = local_98;
          } while (uVar8 != uVar13);
        }
        break;
      case 9:
        puVar15 = (ushort *)*puVar21;
        puVar11 = (ushort *)(((longlong)puVar15 >> 0x18) + (longlong)puVar21);
        if (((ulonglong)puVar15 & 1) == 0) {
          puVar11 = puVar15;
        }
        if ((longlong)(int)puVar21[1] != 0) {
          puVar15 = puVar11 + (longlong)(int)puVar21[1] * 4;
          local_b0 = lVar6;
          local_a8 = param_3;
          local_90 = puVar15;
          do {
            puVar4 = DAT_14c9640e8;
            lVar6 = *(longlong *)puVar11;
            if (lVar6 != 0) {
              uVar17 = *(uint *)(lVar6 + 0xc);
              if ((int)uVar17 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              piVar10 = (int *)*param_1;
              if (*(int *)(lVar12 + 0xc) != *piVar10) {
                uVar2 = param_1[1];
                if ((*(uint *)(lVar12 + 8) & 0x1000000) == 0 && *(int *)(lVar12 + 0xc) == 0) {
                  if (DAT_14c9647bc < (int)uVar17) {
                    cVar5 = FUN_147b9ba1e(piVar10);
                    lVar6 = *(longlong *)puVar11;
                    if ((cVar5 != '\0') && ((*(uint *)(lVar6 + 8) & 0x1400) == 0)) {
                      uVar17 = *(uint *)(lVar6 + 0xc);
                      if ((int)uVar17 < DAT_14c9647dc) {
                        lVar7 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
                      }
                      else {
                        lVar7 = 0;
                      }
                      if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) {
                        local_b8 = uVar2;
                        FUN_143560a6a(piVar10,uVar17,lVar12);
                        goto LAB_14356204b;
                      }
                    }
                    local_6c = *(uint *)(lVar6 + 0xc);
                    FUN_144aa221c(*(longlong *)(piVar10 + 2) + 0x28,&local_6c);
                  }
                }
                else {
                  if ((*(uint *)(lVar12 + 8) >> 0x18 & 1) != 0) {
                    lVar12 = lVar6;
                  }
                  local_6c = *(uint *)(lVar12 + 0xc);
                  if ((int)local_6c < DAT_14c9647dc) {
                    lVar6 = (ulonglong)((local_6c & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_6c >> 0x10) * 8);
                  }
                  else {
                    lVar6 = 0;
                  }
                  uVar8 = ~(longlong)*(int *)(lVar6 + 0xc);
                  FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_6c);
                  FUN_1449e3bb0(puVar4 + uVar8 * 0x28 + 0x1c,piVar10);
                  iVar1 = *(int *)(puVar4 + uVar8 * 0x28 + 0x10);
                  if ((longlong)iVar1 != 0) {
                    lVar6 = *(longlong *)(puVar4 + uVar8 * 0x28 + 0xc);
                    lVar12 = 0;
                    do {
                      local_70 = *(int *)(lVar6 + lVar12);
                      if (local_70 != *piVar10) {
                        FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_70);
                      }
                      lVar12 = lVar12 + 4;
                    } while ((longlong)iVar1 * 4 != lVar12);
                  }
                  iVar1 = *(int *)(puVar4 + uVar8 * 0x28 + 0x18);
                  param_1 = local_a0;
                  puVar15 = local_90;
                  if ((longlong)iVar1 != 0) {
                    lVar6 = *(longlong *)(puVar4 + uVar8 * 0x28 + 0x14);
                    lVar12 = 0;
                    do {
                      local_70 = *(int *)(lVar6 + lVar12);
                      FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x28,&local_70);
                      lVar12 = lVar12 + 4;
                      param_1 = local_a0;
                      puVar15 = local_90;
                    } while ((longlong)iVar1 * 4 != lVar12);
                  }
                }
              }
            }
LAB_14356204b:
            puVar11 = puVar11 + 4;
            lVar6 = local_b0;
            param_3 = local_a8;
            puVar4 = local_98;
          } while (puVar11 != puVar15);
        }
        break;
      case 10:
        puVar20 = (ulonglong *)(local_98 + 4);
        local_98 = local_98 + 4;
        uVar8 = *puVar21;
        uVar13 = ((longlong)uVar8 >> 0x18) + (longlong)puVar21;
        if ((uVar8 & 1) == 0) {
          uVar13 = uVar8;
        }
        uVar17 = *(uint *)((*puVar20 & 0xfffffffffffffffe) - 8);
        uVar16 = (int)puVar21[1] * uVar17;
        local_b0 = lVar6;
        local_a8 = param_3;
        puVar4 = local_98;
        if (uVar16 != 0) {
          lVar12 = (*puVar20 & 0xfffffffffffffffe) + local_88;
          uVar8 = 0;
          do {
            FUN_14356116b(param_1,lVar12,uVar13 + uVar8);
            uVar8 = uVar8 + uVar17;
            lVar6 = local_b0;
            param_3 = local_a8;
            puVar4 = local_98;
          } while (uVar16 != uVar8);
        }
        break;
      case 0xb:
        puVar20 = (ulonglong *)(local_98 + 4);
        local_98 = local_98 + 4;
        uVar17 = *(uint *)((*puVar20 & 0xfffffffffffffffe) - 8);
        uVar16 = *(byte *)((longlong)puVar21 + (ulonglong)uVar17) * uVar17;
        local_b0 = lVar6;
        puVar4 = local_98;
        if (uVar16 != 0) {
          lVar12 = (*puVar20 & 0xfffffffffffffffe) + local_88;
          uVar8 = 0;
          do {
            FUN_14356116b(param_1,lVar12,(longlong)puVar21 + uVar8);
            uVar8 = uVar8 + uVar17;
            lVar6 = local_b0;
            puVar4 = local_98;
          } while (uVar16 != uVar8);
        }
        break;
      case 0xc:
        (*(code *)**(undefined8 **)*puVar21)((undefined8 *)*puVar21,param_1[2]);
        plVar19 = (longlong *)*puVar21;
        puVar4 = local_98;
        if (*(char *)((longlong)plVar19 + 0x11) == '\x01') {
          if (((ulonglong)plVar19[1] < 9) && (*(byte *)(plVar19 + 2) < 4)) {
            puVar21 = puVar21 + 1;
          }
          else {
            puVar21 = (ulonglong *)puVar21[1];
          }
          (**(code **)(*plVar19 + 8))(plVar19,puVar21,param_1[2]);
          puVar4 = local_98;
        }
        break;
      case 0xd:
        (**(code **)(local_98 + 4))(local_80,param_1[2]);
      case 0:
switchD_14356123d_caseD_0:
        if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      case 0xe:
        uVar8 = CONCAT71((int7)((ulonglong)
                                ((longlong)&switchD_14356123d::switchdataD_14a9bb994 +
                                (longlong)(int)(&switchD_14356123d::switchdataD_14a9bb994)[uVar8])
                               >> 8),0xe);
        goto LAB_1435625e1;
      case 0xf:
        puVar4 = local_98 + 4;
        (**(code **)(local_98 + 4))(puVar21,param_1[2]);
        break;
      case 0x10:
        uVar8 = puVar21[1];
        local_b0 = lVar6;
        local_a8 = param_3;
        if (uVar8 != 0) {
          uVar17 = *(uint *)(uVar8 + 0xc);
          if ((int)uVar17 < DAT_14c9647dc) {
            uVar13 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
          }
          else {
            uVar13 = 0;
          }
          piVar10 = (int *)*local_a0;
          param_1 = puVar3;
          if (*(int *)(uVar13 + 0xc) != *piVar10) {
            uVar2 = local_a0[1];
            puVar18 = (uint *)(uVar8 + 0xc);
            if ((*(uint *)(uVar13 + 8) & 0x1000000) == 0 && *(int *)(uVar13 + 0xc) == 0)
            goto joined_r0x0001435621ed;
            if ((*(uint *)(uVar13 + 8) >> 0x18 & 1) == 0) {
              puVar18 = (uint *)(uVar13 + 0xc);
            }
            local_6c = *puVar18;
            if ((int)local_6c < DAT_14c9647dc) {
              lVar12 = (ulonglong)((local_6c & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_6c >> 0x10) * 8);
            }
            else {
              lVar12 = 0;
            }
            uVar8 = ~(longlong)*(int *)(lVar12 + 0xc);
            FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_6c);
            FUN_1449e3bb0(puVar15 + uVar8 * 0x28 + 0x1c,piVar10);
            iVar1 = *(int *)(puVar15 + uVar8 * 0x28 + 0x10);
            if ((longlong)iVar1 != 0) {
              lVar6 = *(longlong *)(puVar15 + uVar8 * 0x28 + 0xc);
              lVar12 = 0;
              do {
                local_70 = *(int *)(lVar6 + lVar12);
                if (local_70 != *piVar10) {
                  FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_70);
                }
                lVar12 = lVar12 + 4;
              } while ((longlong)iVar1 * 4 != lVar12);
            }
            iVar1 = *(int *)(puVar15 + uVar8 * 0x28 + 0x18);
            lVar6 = local_b0;
            param_3 = local_a8;
            puVar4 = local_98;
            if ((longlong)iVar1 != 0) {
              lVar12 = *(longlong *)(puVar15 + uVar8 * 0x28 + 0x14);
              lVar7 = 0;
              do {
                local_70 = *(int *)(lVar12 + lVar7);
                FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x28,&local_70);
                lVar7 = lVar7 + 4;
                lVar6 = local_b0;
                param_3 = local_a8;
                puVar4 = local_98;
              } while ((longlong)iVar1 * 4 != lVar7);
            }
          }
        }
        break;
      case 0x11:
        if ((longlong)(int)puVar21[1] != 0) {
          puVar11 = (ushort *)*puVar21;
          puVar15 = puVar11 + (longlong)(int)puVar21[1] * 0xc;
          local_b0 = lVar6;
          local_a8 = param_3;
          local_90 = puVar15;
          do {
            puVar4 = DAT_14c9640e8;
            lVar6 = *(longlong *)(puVar11 + 4);
            if (lVar6 != 0) {
              uVar17 = *(uint *)(lVar6 + 0xc);
              if ((int)uVar17 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              piVar10 = (int *)*local_a0;
              if (*(int *)(lVar12 + 0xc) != *piVar10) {
                uVar2 = local_a0[1];
                if ((*(uint *)(lVar12 + 8) & 0x1000000) == 0 && *(int *)(lVar12 + 0xc) == 0) {
                  if (DAT_14c9647bc < (int)uVar17) {
                    cVar5 = FUN_147b9ba1e(piVar10,lVar6);
                    if (cVar5 == '\0') {
                      uVar17 = *(uint *)(lVar6 + 0xc);
                    }
                    else {
                      uVar17 = *(uint *)(lVar6 + 0xc);
                      if ((*(uint *)(lVar6 + 8) & 0x1400) == 0) {
                        if ((int)uVar17 < DAT_14c9647dc) {
                          lVar7 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
                        }
                        else {
                          lVar7 = 0;
                        }
                        if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) {
                          local_b8 = uVar2;
                          FUN_143560a6a(piVar10,uVar17,lVar12,lVar6);
                          goto LAB_143561432;
                        }
                      }
                    }
                    local_6c = uVar17;
                    FUN_144aa221c(*(longlong *)(piVar10 + 2) + 0x28,&local_6c);
                  }
                }
                else {
                  puVar18 = (uint *)(lVar6 + 0xc);
                  if ((*(uint *)(lVar12 + 8) >> 0x18 & 1) == 0) {
                    puVar18 = (uint *)(lVar12 + 0xc);
                  }
                  local_6c = *puVar18;
                  if ((int)local_6c < DAT_14c9647dc) {
                    lVar6 = (ulonglong)((local_6c & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_6c >> 0x10) * 8);
                  }
                  else {
                    lVar6 = 0;
                  }
                  uVar8 = ~(longlong)*(int *)(lVar6 + 0xc);
                  FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_6c);
                  FUN_1449e3bb0(puVar4 + uVar8 * 0x28 + 0x1c,piVar10);
                  iVar1 = *(int *)(puVar4 + uVar8 * 0x28 + 0x10);
                  if ((longlong)iVar1 != 0) {
                    lVar6 = *(longlong *)(puVar4 + uVar8 * 0x28 + 0xc);
                    lVar12 = 0;
                    do {
                      local_70 = *(int *)(lVar6 + lVar12);
                      if (local_70 != *piVar10) {
                        FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_70);
                      }
                      lVar12 = lVar12 + 4;
                    } while ((longlong)iVar1 * 4 != lVar12);
                  }
                  iVar1 = *(int *)(puVar4 + uVar8 * 0x28 + 0x18);
                  puVar15 = local_90;
                  if ((longlong)iVar1 != 0) {
                    lVar6 = *(longlong *)(puVar4 + uVar8 * 0x28 + 0x14);
                    lVar12 = 0;
                    do {
                      local_70 = *(int *)(lVar6 + lVar12);
                      FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x28,&local_70);
                      lVar12 = lVar12 + 4;
                      puVar15 = local_90;
                    } while ((longlong)iVar1 * 4 != lVar12);
                  }
                }
              }
            }
LAB_143561432:
            puVar11 = puVar11 + 0xc;
            param_1 = local_a0;
            lVar6 = local_b0;
            param_3 = local_a8;
            puVar4 = local_98;
          } while (puVar11 != puVar15);
        }
      }
      local_98 = puVar4;
      lVar6 = lVar6 + 8;
    } while (lVar6 != 0x20);
    local_98 = local_98 + 4;
  } while( true );
}



// FUNCTION 143562614 FUN_143562614 body=46 status=ok
// SIG undefined FUN_143562614(void)

void FUN_143562614(undefined1 param_1)

{
  FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/FastReferenceCollector.h",0x27c,
                L"Illegal GC struct member type %d at %d",param_1,0);
  return;
}



// FUNCTION 143562642 FUN_143562642 body=31 status=ok
// SIG undefined FUN_143562642(void)

undefined8 FUN_143562642(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435626b4 FUN_1435626b4 body=265 status=ok
// SIG undefined FUN_1435626b4(void)

ulonglong FUN_1435626b4(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  longlong local_28;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_19 = '\0';
  lVar3 = *param_2;
LAB_1435626da:
  lVar5 = lVar3;
  local_28 = lVar5;
  if (*(longlong *)(lVar5 + 0x20) != 0) goto code_r0x0001435626e9;
  goto LAB_1435626fa;
code_r0x0001435626e9:
  lVar3 = *(longlong *)(lVar5 + 0x20);
  if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) goto LAB_1435626da;
  local_28 = FUN_142840154(lVar5);
LAB_1435626fa:
  if (local_28 == 0) {
    lVar3 = *(longlong *)(lVar5 + 0x20);
    goto LAB_1435626da;
  }
  uVar4 = FUN_14096d82e(*param_1,&local_38,&local_28,&local_19);
  if (local_19 == '\0') {
    local_30 = &local_39;
    local_38 = FUN_1435627be;
    local_48 = 0x200000;
    lVar5 = 0;
    FUN_144a56f9f(local_28,&local_38,1,0);
    lVar3 = local_28;
    FUN_144757f48(local_28,0x40000000);
    uVar2 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    do {
      uVar2 = *(uint *)(lVar5 + 8);
      uVar4 = (ulonglong)uVar2;
      if ((uVar2 >> 0x15 & 1) != 0) break;
      LOCK();
      uVar1 = *(uint *)(lVar5 + 8);
      if (uVar2 == uVar1) {
        *(uint *)(lVar5 + 8) = uVar2 | 0x200000;
      }
      else {
        uVar4 = (ulonglong)uVar1;
      }
      UNLOCK();
    } while (uVar2 != uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435627be FUN_1435627be body=105 status=ok
// SIG undefined FUN_1435627be(void)

undefined8 FUN_1435627be(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = *param_2;
  FUN_14472eae2(lVar4,2);
  FUN_144757f48(lVar4,0x40000000);
  uVar2 = *(uint *)(lVar4 + 0xc);
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar4 = 0;
  }
  do {
    uVar2 = *(uint *)(lVar4 + 8);
    uVar3 = (ulonglong)uVar2;
    if ((uVar2 >> 0x15 & 1) != 0) break;
    LOCK();
    uVar1 = *(uint *)(lVar4 + 8);
    if (uVar2 == uVar1) {
      *(uint *)(lVar4 + 8) = uVar2 | 0x200000;
    }
    else {
      uVar3 = (ulonglong)uVar1;
    }
    UNLOCK();
  } while (uVar2 != uVar1);
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 143562828 FUN_143562828 body=184 status=ok
// SIG undefined FUN_143562828(void)

void FUN_143562828(undefined8 param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  iVar3 = *param_2;
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar6 = *piVar2;
  if (iVar6 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar6 = *piVar2;
  }
  if ((iVar6 == 0x60000000) || (iVar6 == 0)) {
    *piVar2 = 0x40000002;
  }
  lVar4 = *(longlong *)(DAT_14cae91b0 + (longlong)iVar3 * 8);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    if ((*(byte *)(lVar4 + 0x9c) & 1) != 0) {
      do {
        if ((*(uint *)(lVar5 + 8) & 0x30) != 0) goto LAB_14356289f;
        plVar1 = (longlong *)(lVar5 + 0x20);
        lVar5 = *plVar1;
      } while (*plVar1 != 0);
      if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
        FUN_14342d574(lVar4);
      }
    }
LAB_14356289f:
    *(byte *)(lVar4 + 0xb8) = *(byte *)(lVar4 + 0xb8) & 0xf9;
    *(undefined4 *)(lVar4 + 0x90) = 0xffffffff;
  }
  if ((iVar6 == 0x60000000) || (iVar6 == 0)) {
    *piVar2 = iVar6;
  }
  return;
}



// FUNCTION 143562904 FUN_143562904 body=12 status=ok
// SIG undefined FUN_143562904(void)

void FUN_143562904(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014356290d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143562910 FUN_143562910 body=29 status=ok
// SIG undefined FUN_143562910(void)

undefined8 FUN_143562910(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14356292e FUN_14356292e body=282 status=ok
// SIG undefined FUN_14356292e(void)

undefined8 * FUN_14356292e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143560338);
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



// FUNCTION 143562a48 FUN_143562a48 body=91 status=ok
// SIG undefined FUN_143562a48(void)

void FUN_143562a48(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (*(longlong *)(param_1[0x15] + 0x790) != 0) {
    FUN_14352fa12(*(longlong *)(param_1[0x15] + 0x790) + 0x38);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143562a99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143562aa3 FUN_143562aa3 body=1890 status=ok
// SIG undefined FUN_143562aa3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143562aa3(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9b2590,1,0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9b2d30,1,0);
  _DAT_14cae8d58 = 0x408f400000000000;
  _DAT_14cae8d60 = 0x408f400000000000;
  DAT_14cae8d68 = 0x408f400000000000;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9b3710,1,0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9b3e40,1,0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9b4550,1,0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9b4970,1,0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9b4cd0,1,0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9b53e0,1,0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9b5800,1,0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9b5f60,1,0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9b6360,1,0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9b6760,1,0);
  FUN_1446f470e(&DAT_14cae8eb0,L"LevelReset",1);
  FUN_1446f470e(&DAT_14cae8ed0,L"WorldOriginLocationChanged",1);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9b7360,1,0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9b7720,1,0);
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14cae8f10);
  if (cVar1 == '\0') {
    _DAT_14cae8f10 = 0;
    uRam000000014cae8f18 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_60 = "AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cae8f20 = (ulonglong)uVar2;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9b8ee0,1,0);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cae8fc0,
                L"LevelStreaming.DefaultAllowClientUseMakingInvisibleTransactionRequests",
                &DAT_14c7615a8,
                L"Flag combined with world support to use making invisible transaction requests to the server\nthat determines whether the client should wait for the server to acknowledge visibility update before making streaming levels invisible.\n0: Disable, 1: Enable"
               );
  atexit(FUN_143559af9);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cae8fd0,
                L"LevelStreaming.DefaultAllowClientUseMakingVisibleTransactionRequests",
                &DAT_14cae8fe0,
                L"Flag combined with world support to use making visible transaction requests to the server\nthat determines whether the client should wait for the server to acknowledge visibility update before making streaming levels visible.\n0: Disable, 1: Enable"
               );
  atexit(FUN_143559b3e);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cae8fe8,L"LevelStreaming.ShouldServerUseMakingVisibleTransactionRequest",
                &DAT_14c7615a9,
                L"Whether server should wait for client to acknowledge visibility update before treating streaming levels as visible by the client.\n0: Disable, 1: Enable"
               );
  atexit(FUN_143559b83);
  local_78._0_4_ = 4;
  FUN_14153156c(&DAT_14cae8ff8,L"LevelStreaming.ShouldReuseUnloadedButStillAroundLevels",
                &DAT_14c7615aa,
                L"Whether level streaming will reuse the unloaded levels that aren\'t GC\'d yet.\n0: Disable, 1: Enable"
               );
  atexit(FUN_143559bc8);
  local_78._0_4_ = 0;
  FUN_14153156c(&DAT_14cae9008,L"LevelStreaming.AllowIncrementalRemovalWhilePendingVisibility",
                &DAT_14c7615ab,
                L"Whether incremental removal of a streaming level can be done while there\'s a pending visible streaming level being processed.\n0: Disable, 1: Enable"
               );
  atexit(FUN_143559c0d);
  local_78._0_4_ = 0;
  FUN_141471170(&DAT_14cae9020,L"LevelStreaming.LevelStreamingPriorityBias",&DAT_14cae9018,
                L"PriorityBias added to level streaming priority when making async load requests");
  atexit(FUN_143559c52);
  _DAT_14cae9038 = &PTR_FUN_14a9bb620;
  DAT_14cae9060 = 0;
  DAT_14cae9068 = 0;
  DAT_14cae9040 = 0;
  _DAT_14cae9048 = 0;
  _DAT_14cae906c = 0xffffffff00000080;
  DAT_14cae9074 = 0;
  DAT_14cae9080 = 0;
  DAT_14cae9088 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9090);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cae9090,4000);
  DAT_14cae90b8 = 0;
  DAT_14cae90c0 = 0;
  atexit((_func_5014 *)&LAB_14355aa57);
  DAT_14cae90c8 = 0;
  _DAT_14cae90d0 = 0;
  _DAT_14cae90d8 = 2;
  atexit(FUN_14355c599);
  DAT_14cae90e0 = 0;
  _DAT_14cae90e8 = 0;
  atexit((_func_5014 *)&LAB_14355c5ca);
  DAT_14cae9110 = 0;
  _DAT_14cae9118 = 0;
  DAT_14cae90f0 = 0;
  _DAT_14cae90f8 = 0;
  _DAT_14cae911c = 0xffffffff00000080;
  DAT_14cae9124 = 0;
  DAT_14cae9130 = 0;
  _DAT_14cae9138 = 0;
  atexit(FUN_14355c5db);
  local_60._0_4_ = 1;
  local_78._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae9150,L"AllowAsyncRenderThreadUpdates",&local_60,
                L"Used to control async renderthread updates. Also gated on FApp::ShouldUseThreadingForPerformance()."
               );
  atexit(FUN_14355db46);
  local_60._0_4_ = 1;
  local_78._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae9168,L"AllowAsyncRenderThreadUpdatesDuringGamethreadUpdates",&local_60,
                L"If > 0 then we do the gamethread updates _while_ doing parallel updates.");
  atexit(FUN_14355db8b);
  local_60._0_4_ = 0;
  local_78._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae9180,L"AllowAsyncRenderThreadUpdatesEditorGameWorld",&local_60,
                L"Used to control async renderthread updates in an editor game world.");
  atexit(FUN_14355dbd0);
  local_60 = (char *)((ulonglong)local_60._4_4_ << 0x20);
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  FUN_14078dbce(&DAT_14cae9198,L"AllowAsyncRenderThreadUpdatesEditor",&local_60,
                L"Used to control async renderthread updates in the editor.");
  atexit(FUN_14355dc15);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9bada0,1,0);
  local_60 = "SMInstance";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cae9288 = (ulonglong)uVar2;
  DAT_14cae9290 = DAT_14cae9290 & 0xfffffff8 | 4;
  _DAT_14cae9294 = _DAT_14cae9294 & 0xfffff800 | 0x27;
  local_60 = (char *)((ulonglong)local_60 & 0xffffffff00000000);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cae9298,L"r.TexelDebugging",&local_60,
                L"Whether T + Left mouse click in the editor selects lightmap texels for debugging Lightmass.  Lightmass must be recompiled with ALLOW_LIGHTMAP_SAMPLE_DEBUGGING enabled for this to work."
               );
  atexit(FUN_14355fea1);
  local_60 = (char *)((ulonglong)local_60 & 0xffffffff00000000);
  local_78._0_4_ = 4;
  FUN_14078dbce(&DAT_14cae92b0,L"r.VirtualTexturedLightmaps",&local_60,
                L"Controls wether to stream the lightmaps using virtual texturing.\n 0: Disabled.\n 1: Enabled."
               );
  atexit(FUN_14355fee6);
  local_60 = (char *)((ulonglong)local_60 & 0xffffffff00000000);
  local_78._0_4_ = 0;
  FUN_14078dbce(&DAT_14cae92c8,L"r.IncludeNonVirtualTexturedLightmaps",&local_60,
                L"If \'r.VirtualTexturedLightmaps\' is enabled, controls whether non-VT lightmaps are generated/saved as well.\nIncluding non-VT lightmaps will constrain lightmap atlas size, which removes some of the benefit of VT lightmaps.\n 0: Not included.\n 1: Included."
               );
  atexit(FUN_14355ff2b);
  local_60 = (char *)((ulonglong)local_60 & 0xffffffff00000000);
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  FUN_14078dbce(&DAT_14cae92e0,L"r.VT.EnableLossyCompressLightmaps",&local_60,
                L"Enables lossy compression on virtual texture lightmaps. Lossy compression tends to have lower quality on lightmap textures, vs regular color textures."
               );
  atexit(FUN_14355ff70);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143563226 FUN_143563226 body=519 status=ok
// SIG undefined FUN_143563226(void)

void FUN_143563226(longlong param_1,undefined8 *param_2,undefined8 *param_3,double *param_4,
                  double *param_5)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[3];
  *(undefined8 *)(param_1 + 0x240) = param_2[2];
  *(undefined8 *)(param_1 + 0x248) = uVar5;
  *(undefined8 *)(param_1 + 0x230) = uVar3;
  *(undefined8 *)(param_1 + 0x238) = uVar4;
  uVar3 = param_3[1];
  *(undefined8 *)(param_1 + 0x250) = *param_3;
  *(undefined8 *)(param_1 + 600) = uVar3;
  *(undefined8 *)(param_1 + 0x260) = param_3[2];
  dVar1 = param_4[2] * param_5[2];
  dVar2 = param_4[1] * param_5[1];
  dVar6 = *param_4 * *param_5;
  *(double *)(param_1 + 0x268) = dVar6;
  *(double *)(param_1 + 0x270) = dVar2;
  *(double *)(param_1 + 0x278) = dVar1;
  dVar7 = param_5[1];
  *(double *)(param_1 + 0x280) = *param_5;
  *(double *)(param_1 + 0x288) = dVar7;
  *(double *)(param_1 + 0x290) = param_5[2];
  if (dVar6 <= 0.0) {
    *(undefined8 *)(param_1 + 0x268) = 0x3ff0000000000000;
    dVar6 = 1.0;
  }
  if (dVar2 <= 0.0) {
    *(undefined8 *)(param_1 + 0x270) = 0x3ff0000000000000;
    dVar2 = 1.0;
  }
  if (dVar1 <= 0.0) {
    *(undefined8 *)(param_1 + 0x278) = 0x3ff0000000000000;
    dVar1 = 1.0;
  }
  dVar7 = *(double *)(param_1 + 0x280);
  if (dVar7 <= 0.0) {
    *(double *)(param_1 + 0x280) = 1.0;
    dVar7 = 1.0;
  }
  dVar8 = *(double *)(param_1 + 0x288);
  if (dVar8 <= 0.0) {
    *(undefined8 *)(param_1 + 0x288) = 0x3ff0000000000000;
    dVar8 = 1.0;
  }
  dVar9 = *(double *)(param_1 + 0x290);
  if (dVar9 <= 0.0) {
    *(undefined8 *)(param_1 + 0x290) = 0x3ff0000000000000;
    dVar9 = 1.0;
  }
  if (dVar7 <= dVar6) {
    *(double *)(param_1 + 0x268) = dVar7 * 0.9998999834060669;
  }
  if (dVar8 <= dVar2) {
    *(double *)(param_1 + 0x270) = dVar8 * 0.9998999834060669;
  }
  if (dVar9 <= dVar1) {
    *(double *)(param_1 + 0x278) = dVar9 * 0.9998999834060669;
  }
  *(byte *)(param_1 + 0x22c) = *(byte *)(param_1 + 0x22c) | 2;
  return;
}



// FUNCTION 14356342d FUN_14356342d body=69 status=ok
// SIG undefined FUN_14356342d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14356342d(void)

{
  _DAT_14cae9498 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014356346f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae94a0,1);
  return;
}



// FUNCTION 143563472 FUN_143563472 body=1464 status=ok
// SIG undefined FUN_143563472(void)

void FUN_143563472(longlong *param_1,uint *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  wchar_t *local_198;
  code *local_190;
  undefined1 *local_188;
  code **local_180;
  code *local_178;
  code *local_170;
  undefined8 local_160;
  code *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  code *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8 [3];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar4 = FUN_144a3ff20(param_2);
  if (lVar4 != 0) goto LAB_143563861;
  uVar3 = param_2[6];
  if ((int)param_1[8] != *(int *)((longlong)param_1 + 0x6c)) {
    plVar8 = (longlong *)param_1[0xf];
    if ((longlong *)param_1[0xf] == (longlong *)0x0) {
      plVar8 = param_1 + 0xe;
    }
    uVar11 = *(uint *)((longlong)plVar8 + (ulonglong)((int)param_1[0x10] - 1U & uVar3) * 4);
    if (uVar11 != 0xffffffff) {
      do {
        puVar10 = (uint *)(param_1[7] + (longlong)(int)uVar11 * 0x18);
        if (*puVar10 == uVar3) {
          if (puVar10 + 2 != (uint *)0x0 && puVar10 != (uint *)0x0) {
            lVar4 = *(longlong *)(puVar10 + 2);
            if (lVar4 == 0) {
              *param_2 = 0;
              uVar3 = 0;
            }
            else {
              uVar3 = *(uint *)(lVar4 + 0xc);
              *param_2 = uVar3;
              if ((int)uVar3 < DAT_14c9647dc) {
                lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
              }
              else {
                lVar4 = 0;
              }
              uVar3 = *(uint *)(lVar4 + 0x10);
              if (*(uint *)(lVar4 + 0x10) == 0) {
                LOCK();
                iVar1 = DAT_14c964868 + 1;
                UNLOCK();
                uVar11 = DAT_14c964868 + 1;
                bVar13 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar1;
                if (bVar13) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar11);
                }
                LOCK();
                uVar3 = *(uint *)(lVar4 + 0x10);
                bVar13 = uVar3 == 0;
                if (bVar13) {
                  *(uint *)(lVar4 + 0x10) = uVar11;
                  uVar3 = 0;
                }
                UNLOCK();
                if (bVar13) {
                  uVar3 = uVar11;
                }
              }
            }
            param_2[1] = uVar3;
            goto LAB_143563861;
          }
          break;
        }
        uVar11 = puVar10[4];
      } while (uVar11 != 0xffffffff);
      if ((int)param_1[8] == *(int *)((longlong)param_1 + 0x6c)) goto LAB_1435634bf;
    }
    plVar8 = param_1 + 0xe;
    if ((longlong *)param_1[0xf] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[0xf];
    }
    uVar11 = *(uint *)((longlong)plVar8 + (ulonglong)((int)param_1[0x10] - 1U & uVar3) * 4);
    if (uVar11 != 0xffffffff) {
      lVar4 = param_1[7];
      uVar12 = uVar11;
      do {
        if (*(uint *)(lVar4 + (longlong)(int)uVar12 * 0x18) == uVar3) goto LAB_143563806;
        uVar12 = *(uint *)(lVar4 + (longlong)(int)uVar12 * 0x18 + 0x10);
      } while (uVar12 != 0xffffffff);
    }
  }
  goto LAB_1435634bf;
  while (uVar11 = puVar10[4], uVar11 != 0xffffffff) {
LAB_143563806:
    puVar10 = (uint *)(lVar4 + (longlong)(int)uVar11 * 0x18);
    if (*puVar10 == uVar3) goto LAB_143563856;
  }
  puVar10 = (uint *)0x0;
LAB_143563856:
  if (*(longlong *)(puVar10 + 2) != 0) goto LAB_143563861;
LAB_1435634bf:
  if (((int)uVar3 < (int)param_1[0x16]) && (*(char *)(param_1[0x15] + (longlong)(int)uVar3) != '\0')
     ) {
    if ((longlong)(int)param_1[0x12] != 0) {
      lVar4 = 0;
      do {
        if (*(uint *)(param_1[0x11] + lVar4) == uVar3) goto LAB_143563861;
        lVar4 = lVar4 + 4;
      } while ((longlong)(int)param_1[0x12] * 4 != lVar4);
    }
    if ((char)param_1[-0x43] == '\x03') {
      plVar8 = param_1 + -0x72;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_88 = 0x800000100;
      local_78 = (code *)0x0;
      local_68 = (longlong *)0x0;
      (**(code **)(*plVar8 + 0x658))(plVar8);
      local_e8 = local_68;
      local_f8 = local_78;
      local_128 = (undefined4)local_48;
      uStack_124 = local_48._4_4_;
      uStack_120 = uStack_40;
      uStack_11c = uStack_3c;
      local_138 = (undefined4)local_58;
      uStack_134 = local_58._4_4_;
      uStack_130 = (undefined4)uStack_50;
      uStack_12c = uStack_50._4_4_;
      local_148 = (undefined4)local_68;
      uStack_144 = local_68._4_4_;
      uStack_140 = uStack_60;
      uStack_13c = uStack_5c;
      local_158 = local_78;
      uStack_150 = uStack_70;
      uStack_14c = uStack_6c;
      local_78 = (code *)&LAB_14356934c;
      local_68 = (longlong *)0x0;
      local_58 = &PTR_LAB_14a9c4020;
      uStack_50 = plVar8;
      local_48 = param_2;
      uStack_f0 = uStack_70;
      uStack_ec = uStack_6c;
      uStack_c0 = uStack_40;
      uStack_bc = uStack_3c;
      uStack_e0 = uStack_60;
      uStack_dc = uStack_5c;
      if (local_f8 != (code *)0x0) {
        plVar7 = local_e8;
        if (local_e8 == (longlong *)0x0) {
          plVar7 = local_d8;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (DAT_14cae8b20 == 0) {
        local_180 = &local_158;
        local_158 = (code *)&LAB_14355090c;
        local_170 = FUN_14081d0ea;
        local_178 = FUN_14081d0ea;
        local_188 = &LAB_147b8e16d;
        local_190 = (code *)&LAB_140810a38;
        local_198 = L"Engine";
        local_1a0 = 0x800000000;
        local_1a8 = 0x10000000;
        local_1b0 = 8;
        local_1b8 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar4 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        local_180 = &local_158;
        local_158 = FUN_1449e2820;
        local_170 = FUN_14081d0ea;
        local_178 = FUN_14081d0ea;
        local_188 = &LAB_1468c5283;
        local_190 = FUN_142809da0;
        local_198 = L"Engine";
        local_1a0 = 0x400000000;
        local_1a8 = 0x10000000;
        local_1b0 = 8;
        local_1b8 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar5 = param_1[-0x6e];
      if (lVar5 == 0) {
        lVar9 = 0;
      }
      else {
        iVar1 = *(int *)(lVar4 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar1) ||
             (lVar9 = lVar5,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8)
             != lVar4 + 0x30)) {
            lVar9 = 0;
          }
        } while ((lVar9 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
      }
      uVar2 = *(undefined8 *)(lVar9 + 0xc0);
      (**(code **)(*param_1 + 0x38))(param_1,&local_158,param_2);
      uVar6 = (**(code **)(param_1[-0x72] + 0x660))(plVar8,param_2);
      lVar4 = FUN_141037e38(uVar2,uVar6,&local_158,&local_b8);
      FUN_147b9e128(&local_160);
      FUN_147b9e096(lVar4 + 0x20e,plVar8,local_160);
      (**(code **)(param_1[-0x72] + 0x670))(plVar8,param_2);
      if (local_78 != (code *)0x0) {
        plVar8 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar8 = &local_58;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
    }
  }
LAB_143563861:
  if ((local_38 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_144a3ff20(param_2);
  return;
}



// FUNCTION 143563a2c FUN_143563a2c body=140 status=ok
// SIG undefined FUN_143563a2c(void)

void FUN_143563a2c(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_147ba84d2(param_1 + 0x3c8,param_3);
  FUN_147b9e310(param_2 + 0x20e);
  lVar2 = *(longlong *)(param_1 + 0x418);
  iVar1 = *(int *)(param_1 + 0x420);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      if (*(int *)(lVar2 + lVar3) == param_3) {
        return;
      }
      lVar3 = lVar3 + 4;
    } while (lVar4 * 4 - lVar3 != 0);
  }
  *(uint *)(param_1 + 0x420) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x424) < iVar1 + 1U) {
    FUN_1446f48e2((longlong *)(param_1 + 0x418),iVar1);
    lVar2 = *(longlong *)(param_1 + 0x418);
  }
  *(int *)(lVar2 + lVar4 * 4) = param_3;
  return;
}



// FUNCTION 143563ab8 FUN_143563ab8 body=348 status=ok
// SIG undefined FUN_143563ab8(void)

void FUN_143563ab8(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar6 = *(int *)(param_1 + 0x488);
  if ((longlong)iVar6 != 0) {
    lVar5 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x480) + lVar5) == param_2) {
        return;
      }
      lVar5 = lVar5 + 4;
    } while ((longlong)iVar6 * 4 - lVar5 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x4a8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x4a0);
    lVar5 = (longlong)iVar1 * 4;
    lVar7 = 0;
    lVar8 = 0;
    do {
      if (*(int *)(lVar2 + lVar7 * 4) == param_2) {
        if ((uint)lVar7 != 0xffffffff) {
          memmove((void *)(lVar2 + (lVar8 >> 0x20) * 4),(void *)(lVar2 + (lVar8 >> 0x20) * 4 + 4),
                  (longlong)(int)(~(uint)lVar7 + iVar1) << 2);
          *(int *)(param_1 + 0x4a8) = *(int *)(param_1 + 0x4a8) + -1;
          iVar6 = *(int *)(param_1 + 0x488);
        }
        break;
      }
      lVar8 = lVar8 + 0x100000000;
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 0x488) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x48c) < iVar6 + 1U) {
    FUN_1446f48e2(param_1 + 0x480,iVar6);
  }
  *(int *)(*(longlong *)(param_1 + 0x480) + (longlong)iVar6 * 4) = param_2;
  iVar1 = *(int *)(param_1 + 0x498);
  iVar4 = param_2;
  if ((iVar1 <= param_2) &&
     (*(uint *)(param_1 + 0x498) = iVar1 + 1U, iVar4 = iVar1,
     *(uint *)(param_1 + 0x49c) < iVar1 + 1U)) {
    FUN_1446f48e2(param_1 + 0x490,iVar1);
  }
  *(int *)(*(longlong *)(param_1 + 0x490) + (longlong)iVar4 * 4) = iVar6;
  plVar3 = *(longlong **)(param_1 + 0x478);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143563c06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0xaf8))(plVar3,(longlong)param_2 * 0x60 + *(longlong *)(param_1 + 0x3b8),0)
  ;
  return;
}



// FUNCTION 143563c14 FUN_143563c14 body=642 status=ok
// SIG undefined FUN_143563c14(void)

void FUN_143563c14(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [12];
  uint local_9c;
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_9c = param_2;
  if ((((int)param_2 < 0) || (*(int *)(param_1 + 0x440) <= (int)param_2)) ||
     (*(char *)(*(longlong *)(param_1 + 0x438) + (ulonglong)param_2) != '\x01')) goto LAB_143563df3;
  if (*(int *)(param_1 + 0x4a8) == 0) {
    lVar3 = FUN_1447210f0(param_1);
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar4;
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    FUN_1446efa72(&local_98,0,3,0x10);
    puVar4 = local_98;
    local_90 = 3;
    *local_98 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_98[2] = lVar5;
    *local_98 = &PTR_FUN_14a9c4070;
    local_98[3] = 0;
    iVar7 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_98 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      iVar7 = *(int *)(lVar3 + 0x10);
      if (*(int *)(lVar3 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar7 = *(int *)(lVar3 + 0x10);
        bVar8 = iVar7 == 0;
        if (bVar8) {
          *(int *)(lVar3 + 0x10) = iVar6;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar7 = iVar6;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar7;
    puVar4[4] = FUN_143563e98;
    *(undefined4 *)(puVar4 + 5) = 0;
    local_88 = 0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,&local_98);
    local_48 = 1;
    FUN_14016fdb0(uVar2,local_a8,&local_88);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    if (local_90 != 0) {
      if (local_98 == (undefined8 *)0x0) goto LAB_143563de6;
      (**(code **)*local_98)(local_98,0);
      FUN_1446efa72(&local_98,0,0,0x10);
      local_90 = 0;
    }
    if (local_98 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143563de6:
  FUN_1449e3bb0(param_1 + 0x4a0,&local_9c);
LAB_143563df3:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143563e98 FUN_143563e98 body=440 status=ok
// SIG undefined FUN_143563e98(void)

void FUN_143563e98(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  uStack_60 = 0;
  iVar4 = *(int *)(param_1 + 0x4a8);
  if ((longlong)iVar4 == 0) {
    uVar9 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x4a0);
    lVar8 = 0;
    do {
      uVar9 = uStack_60;
      iVar7 = *(int *)(lVar6 + lVar8);
      lVar1 = *(longlong *)(param_1 + 0x490);
      lVar5 = (longlong)(int)uStack_60;
      uVar3 = (int)uStack_60 + 1;
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar3);
      if (uStack_60._4_4_ < uVar3) {
        FUN_1446f48e2(&local_68,uVar9 & 0xffffffff);
      }
      *(undefined4 *)(local_68 + lVar5 * 4) = *(undefined4 *)(lVar1 + (longlong)iVar7 * 4);
      lVar8 = lVar8 + 4;
    } while ((longlong)iVar4 * 4 != lVar8);
    uVar9 = uStack_60 & 0xffffffff;
  }
  FUN_144958a06(local_68,uVar9);
  if (0 < (longlong)(int)uStack_60) {
    uVar9 = (longlong)(int)uStack_60 + 1;
    do {
      uVar3 = *(uint *)(local_68 + -8 + uVar9 * 4);
      lVar6 = (longlong)(int)uVar3;
      if (lVar6 != -1) {
        plVar2 = *(longlong **)(param_1 + 0x478);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0xb68))(plVar2,uVar3);
        }
        iVar4 = *(int *)(param_1 + 0x488);
        iVar7 = ~uVar3 + iVar4;
        if (iVar7 != 0) {
          if (0 < iVar7) {
            iVar7 = 1;
          }
          memmove((void *)(*(longlong *)(param_1 + 0x480) + lVar6 * 4),
                  (void *)(*(longlong *)(param_1 + 0x480) + (longlong)(iVar4 - iVar7) * 4),
                  (longlong)iVar7 << 2);
          iVar4 = *(int *)(param_1 + 0x488);
        }
        *(int *)(param_1 + 0x488) = iVar4 + -1;
        FUN_14479f406(param_1 + 0x480);
        if ((int)uVar3 < *(int *)(param_1 + 0x488)) {
          *(uint *)(*(longlong *)(param_1 + 0x490) +
                   (longlong)*(int *)(*(longlong *)(param_1 + 0x480) + lVar6 * 4) * 4) = uVar3;
        }
      }
      uVar9 = uVar9 - 1;
    } while (1 < uVar9);
  }
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  if (*(int *)(param_1 + 0x4ac) < 0) {
    FUN_14481578e(param_1 + 0x4a0,0);
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143564051 FUN_143564051 body=59 status=ok
// SIG undefined FUN_143564051(void)

void FUN_143564051(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cae9508;
  if (DAT_14cae9508 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cae9508 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143564081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14356409a FUN_14356409a body=228 status=ok
// SIG undefined FUN_14356409a(void)

longlong FUN_14356409a(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cae9568 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1417de738;
    local_20 = &LAB_145893408;
    local_28 = &LAB_1458cbbd2;
    local_38 = &LAB_147ba21f1;
    local_40 = &LAB_1463e9233;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x2b8;
    FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae9568;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143564180 FUN_143564180 body=228 status=ok
// SIG undefined FUN_143564180(void)

longlong FUN_143564180(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cae9568 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1417de738;
    local_20 = &LAB_145893408;
    local_28 = &LAB_1458cbbd2;
    local_38 = &LAB_147ba21f1;
    local_40 = &LAB_1463e9233;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x2b8;
    FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae9568;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143564265 FUN_143564265 body=69 status=ok
// SIG undefined FUN_143564265(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143564265(void)

{
  _DAT_14cae9580 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435642a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae9588,1);
  return;
}



// FUNCTION 1435642aa FUN_1435642aa body=69 status=ok
// SIG undefined FUN_1435642aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435642aa(void)

{
  _DAT_14cae9598 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435642ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae95a0,1);
  return;
}



// FUNCTION 1435642ef FUN_1435642ef body=69 status=ok
// SIG undefined FUN_1435642ef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435642ef(void)

{
  _DAT_14cae95b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143564331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae95b8,1);
  return;
}



// FUNCTION 143564334 FUN_143564334 body=1018 status=ok
// SIG undefined FUN_143564334(void)

void FUN_143564334(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined **ppuVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110 [2];
  longlong local_100;
  int local_f8;
  longlong local_f0;
  int local_e8;
  longlong local_e0 [2];
  longlong local_d0;
  longlong local_b8;
  longlong local_a8;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined **local_78;
  int local_70;
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if ((((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x38), lVar3 != 0)) &&
      (lVar4 = *(longlong *)(lVar3 + 0xf0), lVar4 != 0)) &&
     ((*(int *)(lVar4 + 0x134) == 3 && ((*(byte *)(param_1 + 0x19) & 1) == 0)))) {
    lVar7 = param_1[6];
    if (lVar7 != 0) {
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(lVar7);
      }
      if (*(longlong *)(lVar4 + 0x30) == lVar7) goto LAB_1435646e2;
      lVar4 = *(longlong *)(lVar3 + 0xf0);
      if (0 < *(int *)(lVar4 + 0x50)) {
        lVar7 = 0;
        bVar2 = DAT_14c950c29;
        do {
          lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x48) + lVar7 * 8);
          lVar1 = param_1[6];
          if ((lVar1 != 0 & bVar2) == 1) {
            FUN_1456cec3c(lVar1);
            bVar2 = DAT_14c950c29;
          }
          if (*(longlong *)(lVar4 + 0x30) == lVar1) goto LAB_1435646e2;
          lVar7 = lVar7 + 1;
          lVar4 = *(longlong *)(lVar3 + 0xf0);
        } while (lVar7 < *(int *)(lVar4 + 0x50));
      }
    }
    FUN_140810d00(local_e0,0);
    FUN_14622068e(local_e0,L"DefaultPlayer",&DAT_14c872af8);
    (**(code **)(*param_1 + 0x330))(param_1,&local_f0);
    if (local_e8 - 2U < 0x7fffffff) {
      FUN_140002266(&local_78,L"Name=%s",local_f0);
      ppuVar5 = local_78;
      if (local_70 == 0) {
        ppuVar5 = (undefined **)&DAT_149dfb77a;
      }
      FUN_141556918(local_e0,ppuVar5);
      if (local_78 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
    local_118 = lVar3;
    (**(code **)(*param_1 + 0x338))(param_1,&local_100);
    if (local_f8 - 2U < 0x7fffffff) {
      FUN_140002266(&local_78,&DAT_149e0625e,local_100);
      ppuVar5 = local_78;
      if (local_70 == 0) {
        ppuVar5 = (undefined **)&DAT_149dfb77a;
      }
      FUN_141556918(local_e0,ppuVar5);
      if (local_78 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
    lVar3 = param_2[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar4 = *param_2;
      lVar7 = 0;
      do {
        puVar6 = &DAT_149dfb77a;
        if (*(int *)(lVar4 + 8 + lVar7) != 0) {
          puVar6 = *(undefined2 **)(lVar4 + lVar7);
        }
        FUN_140002266(&local_78,&DAT_149e0625e,puVar6);
        ppuVar5 = (undefined **)&DAT_149dfb77a;
        if (local_70 != 0) {
          ppuVar5 = local_78;
        }
        FUN_141556918(local_e0,ppuVar5);
        if (local_78 != (undefined **)0x0) {
          FUN_1400020a8();
        }
        lVar7 = lVar7 + 0x10;
      } while ((longlong)(int)lVar3 * 0x10 != lVar7);
    }
    (**(code **)(*param_1 + 0x350))(param_1,&local_78);
    FUN_141641396(local_e0,local_110,0);
    FUN_147ba22d0(*(undefined8 *)(local_118 + 0xf0),local_110,&local_78);
    *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
    if (local_110[0] != 0) {
      FUN_1400020a8();
    }
    local_78 = &PTR_FUN_14a5af930;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_78 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])();
    if (local_100 != 0) {
      FUN_1400020a8();
    }
    if (local_f0 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
    if (local_e0[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_1435646e2:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143564730 FUN_143564730 body=752 status=ok
// SIG undefined FUN_143564730(void)

void FUN_143564730(void)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  int iVar10;
  undefined2 *puVar11;
  longlong lVar12;
  uint uVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  longlong local_68;
  int local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  FUN_1400e6f4e();
  if (DAT_14cae99f8 == 0) {
    uVar15 = 1;
    uVar9 = 0;
    iVar10 = 0;
    iVar2 = 0;
  }
  else {
    puVar6 = &DAT_14cae99e0;
    if (DAT_14cae99f0 != (uint *)0x0) {
      puVar6 = DAT_14cae99f0;
    }
    uVar13 = *puVar6;
    if (uVar13 == 0) {
      iVar2 = DAT_14cae99f8 + 0x1e;
      if (-1 < DAT_14cae99f8 + -1) {
        iVar2 = DAT_14cae99f8 + -1;
      }
      uVar9 = 0;
      uVar15 = (ulonglong)(uint)(iVar2 >> 5);
      if (iVar2 >> 5 < 1) {
        uVar15 = uVar9;
      }
      iVar10 = 0;
      do {
        puVar14 = &DAT_149dfb77a;
        if (uVar15 == uVar9) goto LAB_1435649d6;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar6[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar9 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar2 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (DAT_14cae99f8 <= iVar2) {
      iVar2 = DAT_14cae99f8;
    }
  }
  if (iVar2 < DAT_14cae99f8) {
    uVar13 = 0xffffffff;
    puVar14 = &DAT_149dfb77a;
    do {
      lVar12 = (longlong)iVar2 * 0x48;
      local_90 = *(undefined8 *)(DAT_14cae99d0 + 0x38 + lVar12);
      local_98 = *(undefined8 *)(DAT_14cae99d0 + 0x30 + lVar12);
      local_a0 = *(undefined8 *)(DAT_14cae99d0 + 0x28 + lVar12);
      local_a8 = *(undefined2 **)(DAT_14cae99d0 + 0x18 + lVar12);
      FUN_140002266(&local_78,L"%f %f %f %f %f %f",*(undefined8 *)(DAT_14cae99d0 + 8 + lVar12),
                    *(undefined8 *)(DAT_14cae99d0 + 0x10 + lVar12));
      puVar8 = &DAT_149dfb77a;
      if (local_70 != 0) {
        puVar8 = local_78;
      }
      FUN_1400021e4(lVar12 + DAT_14cae99d0,&local_88);
      puVar11 = &DAT_149dfb77a;
      if (local_80 != 0) {
        puVar11 = local_88;
      }
      local_a8 = puVar8;
      FUN_140002266(&local_68,L"%s%s %s",puVar14,puVar11);
      iVar2 = local_60 + -1;
      if (local_60 == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(&local_58,local_68,iVar2);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar6 = DAT_14cae99f0;
      if (DAT_14cae99f0 == (uint *)0x0) {
        puVar6 = &DAT_14cae99e0;
      }
      iVar2 = (int)uVar9;
      lVar12 = (longlong)iVar2;
      uVar3 = puVar6[lVar12] & uVar13;
      if (uVar3 == 0) {
        iVar4 = DAT_14cae99f8 + 0x1e;
        if (-1 < DAT_14cae99f8 + -1) {
          iVar4 = DAT_14cae99f8 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar2) {
          iVar5 = iVar2;
        }
        if (iVar4 <= iVar2) break;
        lVar7 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar6[lVar12 + lVar7 + 1];
          if (uVar3 != 0) break;
          lVar7 = lVar7 + 1;
          if (iVar5 - lVar12 == lVar7) goto LAB_1435649c1;
        }
        uVar9 = (ulonglong)(iVar2 + (int)lVar7 + 1);
        uVar13 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar2 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      puVar14 = (undefined2 *)&DAT_14a9c3c40;
    } while (iVar2 < DAT_14cae99f8);
LAB_1435649c1:
    puVar14 = local_58;
    if ((int)uStack_50 != 0) goto LAB_1435649d6;
  }
  puVar14 = &DAT_149dfb77a;
LAB_1435649d6:
  FUN_142855b70(puVar14);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143564a21 FUN_143564a21 body=69 status=ok
// SIG undefined FUN_143564a21(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143564a21(void)

{
  _DAT_14cae95c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143564a63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae95c8,1);
  return;
}



// FUNCTION 143564a66 FUN_143564a66 body=122 status=ok
// SIG undefined FUN_143564a66(void)

void FUN_143564a66(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14062a740(param_1 + 0x120);
  local_20 = 0;
  local_28 = &local_38;
  local_30 = &LAB_1435693f2;
  local_38 = param_2;
  FUN_14603c95e(param_1 + 0x138);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143564ae2 FUN_143564ae2 body=989 status=ok
// SIG undefined FUN_143564ae2(void)

undefined8
FUN_143564ae2(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4,int param_5)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_1[6] != 0) && (0.0 < (double)param_1[0x12])) {
    uVar8 = 0;
    if ((param_3 == (longlong *)0x0) || ((double)param_1[0x13] <= 0.0)) goto LAB_143564e1f;
    cVar5 = (**(code **)(*param_1 + 0x358))(param_1,param_3,param_2,param_5);
    if ((cVar5 != '\0') && (-1 < *(int *)(param_2 + 0x288))) {
      uVar8 = 0;
      if ((-1 < *(int *)(param_2 + 0x28c)) &&
         ((uVar8 = 0, *(int *)(param_2 + 0x288) < *(int *)(param_2 + 0x290) &&
          (*(int *)(param_2 + 0x28c) < *(int *)(param_2 + 0x294))))) {
        lVar9 = *(longlong *)(param_1[6] + 0x448);
        if (lVar9 != 0) {
          uVar10 = *(uint *)(lVar9 + 0x2e58);
          if ((uVar10 & 8) != 0) {
            uVar8 = *(undefined8 *)(lVar9 + 0x3c8);
            *(undefined8 *)(param_2 + 0x2d0) = *(undefined8 *)(lVar9 + 0x3c0);
            *(undefined8 *)(param_2 + 0x2d8) = uVar8;
            fVar13 = *(float *)(*(longlong *)(param_1[6] + 0x448) + 0x3d0);
            if (1.0 <= fVar13) {
              fVar13 = 1.0;
            }
            if (fVar13 <= 0.0) {
              fVar13 = 0.0;
            }
            *(float *)(param_2 + 0x2dc) = fVar13;
            lVar9 = *(longlong *)(param_1[6] + 0x448);
            uVar10 = *(uint *)(lVar9 + 0x2e58);
          }
          if ((uVar10 & 0x20) != 0) {
            dVar1 = *(double *)(lVar9 + 1000);
            dVar2 = *(double *)(lVar9 + 0x3e0);
            *(float *)(param_2 + 0x2e0) = (float)*(double *)(lVar9 + 0x3d8);
            *(float *)(param_2 + 0x2e4) = (float)dVar2;
            *(float *)(param_2 + 0x2e8) = (float)dVar1;
            *(undefined4 *)(param_2 + 0x2ec) = 0x3f800000;
            uVar10 = *(uint *)(*(longlong *)(param_1[6] + 0x448) + 0x2e58);
          }
          *(byte *)(param_2 + 0x3f8) = (byte)(uVar10 >> 0xb) & 1;
        }
        lVar9 = DAT_14cb0d2b0;
        cVar5 = (**(code **)(*param_3 + 0x1d8))(param_3);
        if (((cVar5 != '\0') && (*(longlong **)(lVar9 + 0xfd0) != (longlong *)0x0)) &&
           (cVar5 = (**(code **)(**(longlong **)(lVar9 + 0xfd0) + 8))(), cVar5 != '\0')) {
          uVar6 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 0x28))
                            (*(longlong **)(DAT_14cb0d2b0 + 0xfd0),param_5 != -1,param_5);
          *(undefined4 *)(param_2 + 0x2f0) = uVar6;
        }
        iVar11 = 0;
        if (param_5 != -1) {
          iVar11 = param_5;
        }
        plVar3 = param_1 + 0x1a;
        if (0 < (iVar11 - (int)param_1[0x1b]) + 1) {
          FUN_145cbba38(plVar3);
        }
        lVar12 = (longlong)iVar11 * 0x38;
        lVar9 = *(longlong *)(*plVar3 + 8 + lVar12);
        if (lVar9 == 0) {
          lVar9 = (**(code **)(*param_1 + 0x180))(param_1);
          uVar10 = DAT_14c760db4;
          if (lVar9 != 0) {
            uVar10 = (uint)*(byte *)(lVar9 + 0x150);
          }
          FUN_1457e272a(*plVar3 + lVar12,uVar10);
          lVar9 = *(longlong *)(*plVar3 + 8 + lVar12);
        }
        *(longlong *)(param_2 + 0x2a0) = lVar9;
        uVar8 = (**(code **)(*(longlong *)param_1[6] + 0x6b8))();
        *(undefined8 *)(param_2 + 0x2a8) = uVar8;
        *(int *)(param_2 + 0x2b0) = (int)param_1[0x1c];
        *(undefined8 *)(param_2 + 0x2b8) = param_4;
        *(undefined8 *)(param_2 + 0x2c0) = 0;
        *(undefined8 *)(param_2 + 0x2c8) = 0x3f80000000000000;
        *(undefined4 *)(param_2 + 0x3d8) = *(undefined4 *)(param_1[6] + 0x494);
        *(int *)(param_2 + 0x2f4) = param_5;
        lVar9 = FUN_14093f908(param_1[6]);
        *(undefined4 *)(param_2 + 0x2f8) = *(undefined4 *)(lVar9 + 0x408);
        cVar5 = (**(code **)(*param_3 + 0x98))(param_3);
        uVar8 = 0xffffffffffffffff;
        if (cVar5 == '\0') {
          uVar6 = (**(code **)(*param_3 + 0x108))(param_3);
          uVar7 = (**(code **)(*param_3 + 0x100))(param_3);
          uVar8 = CONCAT44(uVar6,uVar7);
        }
        *(undefined8 *)(param_2 + 0x3d0) = uVar8;
        lVar9 = FUN_1447210f0(param_1[6]);
        uVar6 = *(undefined4 *)(lVar9 + 0x72c);
        uVar7 = *(undefined4 *)(lVar9 + 0x730);
        uVar4 = *(undefined4 *)(lVar9 + 0x734);
        *(undefined4 *)(param_2 + 0x3e0) = *(undefined4 *)(lVar9 + 0x728);
        *(undefined4 *)(param_2 + 0x3e4) = uVar6;
        *(undefined4 *)(param_2 + 1000) = uVar7;
        *(undefined4 *)(param_2 + 0x3ec) = uVar4;
        *(undefined8 *)(param_2 + 0x3f0) = *(undefined8 *)(lVar9 + 0x738);
        plVar3 = (longlong *)param_1[6];
        *(longlong **)(param_2 + 0x428) = plVar3;
        uVar6 = (**(code **)(*plVar3 + 0xed8))();
        *(undefined4 *)(param_2 + 0x430) = uVar6;
        lVar9 = FUN_140543396();
        if (lVar9 != 0) {
          *(uint *)(param_2 + 0x434) = ~*(uint *)(lVar9 + 0x58);
          *(undefined4 *)(param_2 + 0x438) = *(undefined4 *)(lVar9 + 0x5c);
          *(undefined4 *)(param_2 + 0x43c) = *(undefined4 *)(lVar9 + 0x60);
        }
        (**(code **)(*(longlong *)param_1[6] + 0xef0))((longlong *)param_1[6],&local_70);
        *(undefined8 *)(param_2 + 0x460) = local_50;
        *(undefined8 *)(param_2 + 0x468) = uStack_48;
        *(undefined8 *)(param_2 + 0x450) = local_60;
        *(undefined8 *)(param_2 + 0x458) = uStack_58;
        *(undefined4 *)(param_2 + 0x440) = local_70;
        *(undefined4 *)(param_2 + 0x444) = uStack_6c;
        *(undefined4 *)(param_2 + 0x448) = uStack_68;
        *(undefined4 *)(param_2 + 0x44c) = uStack_64;
        uVar8 = 1;
      }
      goto LAB_143564e1f;
    }
  }
  uVar8 = 0;
LAB_143564e1f:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 143564ec0 FUN_143564ec0 body=2036 status=ok
// SIG undefined FUN_143564ec0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_143564ec0(longlong *param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4,
                      longlong *param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1868 [32];
  undefined4 *local_1848;
  longlong *local_1838;
  undefined4 local_182c;
  undefined4 local_1828;
  undefined4 uStack_1824;
  undefined4 uStack_1820;
  undefined4 uStack_181c;
  undefined8 local_1818;
  undefined1 local_1808 [2088];
  longlong local_fe0;
  longlong local_f58;
  undefined4 local_f48;
  undefined4 uStack_f44;
  undefined4 uStack_f40;
  undefined4 uStack_f3c;
  undefined8 local_f38;
  undefined8 local_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  float local_f18;
  undefined4 local_edc;
  float fStack_ed8;
  undefined4 local_ed4;
  byte local_ea8;
  undefined4 local_ea0;
  undefined1 local_e98 [2088];
  longlong local_670;
  longlong local_5e8;
  undefined8 local_5b8 [12];
  char local_558;
  undefined8 local_548;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 local_4f8 [16];
  undefined8 local_478 [16];
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined1 local_3d0;
  undefined1 local_348;
  undefined8 local_338 [16];
  undefined1 local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  longlong local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined1 *local_238;
  undefined1 *puStack_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined8 uStack_127;
  byte local_11f;
  undefined8 local_11c;
  undefined8 local_114;
  ulonglong local_10c;
  undefined1 local_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined7 local_d7;
  undefined1 uStack_d0;
  undefined8 uStack_cf;
  undefined8 uStack_c0;
  undefined3 uStack_b8;
  undefined5 local_b5;
  undefined3 uStack_b0;
  undefined1 auStack_ad [29];
  ulonglong local_90;
  undefined8 uStack_48;
  
  uStack_48 = 0x143564ed6;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1868;
  local_508 = DAT_14c8464f0;
  local_518 = DAT_14c8464e0;
  uStack_510 = DAT_14c8464e8;
  puVar13 = &DAT_14c846400;
  puVar15 = local_4f8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar13 = &DAT_14c846400;
  puVar15 = local_478;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar15 = puVar15 + 1;
  }
  lVar10 = 0;
  local_3d0 = 0;
  local_348 = 0;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_2a8 = DAT_14c8464e0;
  uStack_2a0 = DAT_14c8464e8;
  local_298 = DAT_14c8464f0;
  local_290 = 0;
  uStack_288 = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_270 = 0;
  local_268 = 0xffffffff;
  local_260 = 0;
  uStack_258 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_240 = 0;
  local_238 = &DAT_3f8000003f800000;
  puStack_230 = &DAT_3f8000003f800000;
  local_228 = 0xffffffff00000000;
  local_220 = 0x42c80000;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_1bc = 0xffffffff00000080;
  local_1b4 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0xffffffff00000000;
  local_178 = 0;
  local_170 = 0;
  uStack_16c = 0x80;
  uStack_168 = 0xffffffff;
  uStack_164 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0xffffffffffffffff;
  local_140 = 0xbf8000003f800000;
  local_138 = 0;
  uStack_130 = 0;
  uStack_12f = 0;
  uStack_128 = 0;
  uStack_127 = 0;
  local_11f = 1;
  local_11c = 0x42b4000042b40000;
  local_10c = 0;
  local_114 = &DAT_3f8000003f800000;
  local_104 = 0;
  local_100 = 0xbf800000;
  uStack_fc = 0x3f800000;
  local_f8 = 0x3f800000;
  uStack_d0 = 0;
  uStack_cf = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  local_d7 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_b0 = 0;
  auStack_ad._0_8_ = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  local_b5 = 0;
  puVar13 = &DAT_14c846400;
  puVar15 = local_338;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar15 = puVar15 + 1;
  }
  local_2b8 = 1;
  local_1848 = (undefined4 *)CONCAT44(local_1848._4_4_,param_7);
  cVar5 = (**(code **)(*param_1 + 0x2c8))(param_1,&local_518,param_5,param_6);
  if (cVar5 != '\0') {
    FUN_1400e6e60(&local_f48);
    (**(code **)(*param_1 + 0x2b0))(param_1,&local_f48);
    local_208 = local_f38;
    local_218 = CONCAT44(uStack_f44,local_f48);
    uStack_210 = CONCAT44(uStack_f3c,uStack_f40);
    uStack_200 = local_f30;
    local_1f8 = uStack_f28;
    uStack_1f0 = uStack_f20;
    local_11f = local_ea8 >> 4 & 1;
    local_11c = CONCAT44(local_edc,local_f18);
    local_1838 = param_1;
    fVar21 = tanf(local_f18 * 0.017453292 * 0.5);
    fVar22 = tanf(fStack_ed8 * 0.5 * 0.017453292);
    plVar12 = local_1838;
    lVar10 = DAT_14cae9590;
    local_114 = (undefined1 *)CONCAT44(local_ed4,fVar21 / fVar22);
    local_10c = CONCAT71(local_10c._1_7_,local_ea8 >> 3) & 0xffffffffffffff01;
    uStack_fc = (undefined4)local_548;
    local_f8 = (undefined4)((ulonglong)local_548 >> 0x20);
    auStack_ad[5] = *(undefined1 *)(local_1838[6] + 0x950);
    iVar6 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    local_280 = param_2;
    if (iVar6 == 0x40000002) {
      uVar9 = 0;
    }
    else {
      bVar20 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar6 != 2)) {
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          bVar20 = DVar7 == DVar8;
        }
        else {
          bVar20 = false;
        }
      }
      uVar9 = (ulonglong)(bVar20 ^ 1);
    }
    if (*(int *)(lVar10 + uVar9 * 4) == 0) {
      auStack_ad[5] = 0;
    }
    if ((*(char *)(plVar12[6] + 0x4b8) == '\x01') && (auStack_ad[5] != '\x01')) {
      FUN_1402bef5c(plVar12[6],&local_f48,&local_1e8);
    }
    else {
      FUN_14177e0d0(&local_198);
    }
    lVar10 = FUN_14001cc68(0x30f0,0x10);
    FUN_144891fa0(lVar10,&local_518);
    param_3[2] = *(undefined8 *)(lVar10 + 0x10b0);
    uVar4 = *(undefined8 *)(lVar10 + 0x10a8);
    *param_3 = *(undefined8 *)(lVar10 + 0x10a0);
    param_3[1] = uVar4;
    *(undefined8 *)(param_4 + 4) = *(undefined8 *)(lVar10 + 0x10c8);
    uVar1 = *(undefined4 *)(lVar10 + 0x10bc);
    uVar2 = *(undefined4 *)(lVar10 + 0x10c0);
    uVar3 = *(undefined4 *)(lVar10 + 0x10c4);
    *param_4 = *(undefined4 *)(lVar10 + 0x10b8);
    param_4[1] = uVar1;
    param_4[2] = uVar2;
    param_4[3] = uVar3;
    if (local_558 == '\x01') {
      puVar13 = local_5b8;
      puVar15 = (undefined8 *)(lVar10 + 0x1110);
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar15 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar15 = puVar15 + 1;
      }
      *(undefined1 *)(lVar10 + 0x1170) = 1;
    }
    else if (*(char *)(lVar10 + 0x1170) == '\x01') {
      *(undefined1 *)(lVar10 + 0x1170) = 0;
    }
    iVar6 = *(int *)(param_2 + 0x10);
    *(uint *)(param_2 + 0x10) = iVar6 + 1U;
    if (*(uint *)(param_2 + 0x14) < iVar6 + 1U) {
      FUN_144928a2e((longlong *)(param_2 + 8),iVar6);
    }
    *(longlong *)(*(longlong *)(param_2 + 8) + (longlong)iVar6 * 8) = lVar10;
    local_1818 = local_f38;
    local_1828 = local_f48;
    uStack_1824 = uStack_f44;
    uStack_1820 = uStack_f40;
    uStack_181c = uStack_f3c;
    FUN_14102b2ba(lVar10);
    lVar11 = *(longlong *)(plVar12[6] + 0x448);
    if (lVar11 == 0) {
      plVar14 = (longlong *)0x0;
      plVar16 = (longlong *)0x0;
      plVar17 = (longlong *)0x0;
    }
    else {
      plVar14 = (longlong *)(lVar11 + 0x2e18);
      plVar16 = (longlong *)(lVar11 + 0x2e28);
      plVar17 = (longlong *)(lVar11 + 0x2e38);
      iVar6 = *(int *)(lVar11 + 0x2e30);
      if (0 < iVar6) {
        lVar18 = 0;
        lVar19 = 0;
        do {
          if (*(int *)(*plVar17 + lVar19 * 4) == 0) {
            FUN_14102cb1c(lVar10,*(longlong *)(lVar11 + 0x2e18) + lVar18,
                          *(undefined4 *)(*(longlong *)(lVar11 + 0x2e28) + lVar19 * 4));
            iVar6 = *(int *)(lVar11 + 0x2e30);
          }
          lVar19 = lVar19 + 1;
          lVar18 = lVar18 + 0x8c0;
          plVar12 = local_1838;
        } while (lVar19 < iVar6);
      }
    }
    FUN_14102cb1c(lVar10,local_e98,local_ea0);
    plVar12 = *(longlong **)(plVar12[6] + 0x448);
    if (plVar12 != (longlong *)0x0) {
      iVar6 = (int)plVar16[1];
      if (0 < iVar6) {
        lVar11 = 0;
        lVar18 = 0;
        do {
          if (*(int *)(*plVar17 + lVar18 * 4) == 1) {
            FUN_14102cb1c(lVar10,*plVar14 + lVar11,*(undefined4 *)(*plVar16 + lVar18 * 4));
            iVar6 = (int)plVar16[1];
          }
          lVar18 = lVar18 + 1;
          lVar11 = lVar11 + 0x8c0;
        } while (lVar18 < iVar6);
        plVar12 = *(longlong **)(local_1838[6] + 0x448);
      }
      (**(code **)(*plVar12 + 0x750))(plVar12,lVar10 + 0x2510);
    }
    lVar11 = DAT_14cb0d2b0;
    if ((((param_5 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*param_5 + 0x1d8))(param_5), cVar5 != '\0')) &&
        (*(longlong **)(lVar11 + 0xfd0) != (longlong *)0x0)) &&
       (cVar5 = (**(code **)(**(longlong **)(lVar11 + 0xfd0) + 8))(), cVar5 != '\0')) {
      FUN_144894d4c(local_1808);
      local_1848 = &local_182c;
      local_182c = 0x3f800000;
      cVar5 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 0x90))
                        (*(longlong **)(DAT_14cb0d2b0 + 0xfd0),local_1808,
                         *(undefined4 *)(lVar10 + 0x1dd0),*(undefined4 *)(lVar10 + 0x1dd4));
      if (cVar5 != '\0') {
        FUN_14102cb1c(lVar10,local_1808,local_182c);
      }
      if (local_f58 != 0) {
        FUN_1400020a8();
      }
      if (local_fe0 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_14102bfb4(lVar10,&local_518);
    if (0 < *(int *)(param_2 + 0x100)) {
      lVar11 = 0;
      lVar18 = 0;
      do {
        plVar12 = *(longlong **)(*(longlong *)(param_2 + 0xf8) + lVar11);
        (**(code **)(*plVar12 + 0x10))(plVar12,param_2,lVar10);
        lVar18 = lVar18 + 1;
        lVar11 = lVar11 + 0x10;
      } while (lVar18 < *(int *)(param_2 + 0x100));
    }
    if (local_558 == '\x01') {
      local_558 = '\0';
    }
    if (local_5e8 != 0) {
      FUN_1400020a8();
    }
    if (local_670 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_144891d70(&local_518);
  if ((local_90 ^ (ulonglong)auStack_1868) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar10;
}



// FUNCTION 1435656b6 FUN_1435656b6 body=554 status=ok
// SIG undefined FUN_1435656b6(void)

void FUN_1435656b6(longlong *param_1,wchar_t *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  size_t sVar4;
  undefined8 uVar5;
  int iVar6;
  wchar_t *pwVar7;
  int iVar8;
  wchar_t *pwVar9;
  undefined1 auStack_98 [40];
  wchar_t *local_70;
  wchar_t *local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_1448324a4(param_2,L"Binaries");
  if (lVar3 != 0) {
    pwVar7 = (wchar_t *)0x0;
    goto LAB_1435657b8;
  }
  FUN_140056680(&local_68);
  if (param_2 == (wchar_t *)0x0) {
LAB_1435658bb:
    pwVar7 = local_68;
    local_68 = (wchar_t *)0x0;
    iVar8 = (int)uStack_60;
  }
  else {
    sVar4 = wcslen(param_2);
    if ((int)sVar4 == 0) goto LAB_1435658bb;
    uStack_50._0_4_ = (int)uStack_60;
    iVar2 = (int)sVar4 + (uint)((int)uStack_60 == 0);
    local_58 = local_68;
    local_68 = (wchar_t *)0x0;
    iVar8 = uStack_60._4_4_;
    uStack_60 = 0;
    iVar6 = iVar2 + (int)uStack_50;
    if (iVar6 < (int)uStack_50) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar2);
    }
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar8 < iVar6) {
      FUN_1446f8c06(&local_58);
    }
    FUN_1400020e8(&local_58,param_2,sVar4 & 0xffffffff);
    iVar8 = (int)uStack_50;
    pwVar7 = local_58;
    local_58 = (wchar_t *)0x0;
    uStack_50 = 0;
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  param_2 = L"";
  if (iVar8 != 0) {
    param_2 = pwVar7;
  }
LAB_1435657b8:
  local_58 = (wchar_t *)0x0;
  uStack_50 = 0;
  cVar1 = FUN_140f7cb10(&local_58,param_2,0,0);
  if (cVar1 != '\0') {
    local_70 = local_58;
    if ((int)uStack_50 == 0) {
      local_70 = L"";
    }
    local_68 = (wchar_t *)0x0;
    uStack_60 = 0;
    cVar1 = FUN_146816ce0(&local_70,&local_68,0);
    if (cVar1 != '\0') {
      do {
        pwVar9 = L"";
        if ((int)uStack_60 != 0) {
          pwVar9 = local_68;
        }
        uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
        (**(code **)(param_1[5] + 8))(param_1 + 5,uVar5,pwVar9,param_3);
        cVar1 = FUN_146816ce0(&local_70,&local_68,0);
      } while (cVar1 != '\0');
    }
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (pwVar7 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435658e2 FUN_1435658e2 body=3956 status=ok
// SIG undefined FUN_1435658e2(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1435658e2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  code ***pppcVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined *puVar8;
  void *****pppppvVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  undefined2 *puVar13;
  longlong lVar14;
  void ****ppppvVar15;
  ushort uVar16;
  int iVar17;
  ushort uVar18;
  ulonglong uVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_bd8 [32];
  ulonglong local_bb8;
  undefined2 *local_bb0;
  undefined2 *local_ba8;
  undefined8 local_ba0;
  wchar_t *local_b98;
  undefined1 *local_b90;
  undefined1 *local_b88;
  void *****local_b80;
  undefined1 *local_b78;
  code *local_b70;
  uint local_b5c;
  longlong *local_b58;
  ulonglong uStack_b50;
  void ****local_b48;
  int local_b40;
  void *****local_b38;
  ulonglong uStack_b30;
  undefined8 local_b28;
  code ***local_b20;
  void *****local_b18;
  code *****pppppcStack_b10;
  ulonglong local_b08;
  undefined8 uStack_b00;
  undefined2 *local_af8;
  undefined2 *puStack_af0;
  undefined8 local_ae8;
  ulonglong uStack_ae0;
  undefined1 local_acc [4];
  code ****local_ac8;
  code *****pppppcStack_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  int local_aa8;
  undefined4 uStack_aa4;
  undefined4 uStack_aa0;
  undefined4 uStack_a9c;
  undefined2 *local_a98;
  undefined4 uStack_a90;
  undefined4 uStack_a8c;
  undefined4 uStack_a88;
  undefined4 uStack_a84;
  longlong local_a78;
  undefined4 local_a70;
  longlong local_1e0;
  longlong local_158;
  char local_c8;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_bd8;
  local_b28 = param_3;
  cVar6 = FUN_140988638(&local_b28,L"LISTMOVEBODY",1);
  if (cVar6 != '\0') goto LAB_14356629e;
  plVar1 = (longlong *)(param_1 - 0x28);
  cVar6 = FUN_140988638(&local_b28,L"r.LockView",1);
  if (cVar6 != '\0') {
    local_b38 = (void *****)0x0;
    uStack_b30 = 0;
    FUN_140056680(&local_b48,local_b28);
    if ((longlong)local_b40 != 0) {
      uVar10 = 0;
      do {
        if (*(short *)((longlong)local_b48 + uVar10) == 0x3b) {
          if ((int)(~uVar10 >> 1) != 0) {
            FUN_1403de9f2(&local_b48,&local_b38,&DAT_149e06120,1);
            goto LAB_143565aee;
          }
          break;
        }
        uVar10 = uVar10 + 2;
      } while ((longlong)local_b40 * 2 != uVar10);
    }
    uStack_b30 = CONCAT44(uStack_b30._4_4_,1);
    FUN_1447a1bd6(&local_b38,0);
    pppppvVar9 = local_b38;
    ppppvVar15 = local_b48;
    *local_b38 = (void ****)0x0;
    *(int *)(local_b38 + 1) = local_b40;
    if ((longlong)local_b40 == 0) {
      *(undefined4 *)((longlong)local_b38 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(local_b38,local_b40,0);
      memcpy(*pppppvVar9,ppppvVar15,(longlong)local_b40 * 2);
    }
LAB_143565aee:
    if (0 < (int)uStack_b30) {
      uVar7 = ((uint)((ulonglong)plVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar1 >> 4)) *
              -0x7a143595;
      local_b5c = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      local_b5c = local_b5c >> 0x10 ^ local_b5c;
      lVar20 = 0;
LAB_143565b6a:
      local_b58 = (longlong *)0x0;
      uStack_b50 = 0;
      local_a98 = &DAT_149dfb77a;
      local_aa8 = 0x49e01ea8;
      uStack_aa4 = 1;
      uStack_aa0 = 0x49e01f72;
      uStack_a9c = 1;
      local_ab8._0_4_ = 0x49e001d8;
      local_ab8._4_4_ = 1;
      uStack_ab0._0_4_ = 0x49e01e02;
      uStack_ab0._4_4_ = 1;
      local_bb8 = CONCAT71(local_bb8._1_7_,1);
      FUN_144a38a52(local_b38 + lVar20 * 2,&local_b58,&local_ab8);
      FUN_1400e6f4e();
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9a78);
      if (DAT_14cae9aa0 != plVar1) {
        DAT_14cae9aa0 = plVar1;
        if (DAT_14cae9a30 != DAT_14cae9a5c) {
          puVar8 = DAT_14cae9a68;
          if (DAT_14cae9a68 == (undefined *)0x0) {
            puVar8 = &DAT_14cae9a60;
          }
          iVar12 = *(int *)(puVar8 + (ulonglong)(DAT_14cae9a70 - 1U & local_b5c) * 4);
          while (iVar12 != -1) {
            lVar14 = DAT_14cae9a28 + (longlong)iVar12 * 0x50;
            if (*(longlong **)(DAT_14cae9a28 + (longlong)iVar12 * 0x50) == plVar1) {
              if ((undefined8 *)(lVar14 + 8) != (undefined8 *)0x0 && lVar14 != 0) {
                _DAT_14cae9aa8 = *(void ******)(lVar14 + 8);
                _DAT_14cae9ab0 = *(code ******)(lVar14 + 0x10);
                DAT_14cae9ab8 = *(ulonglong *)(lVar14 + 0x18);
                _DAT_14cae9ad8 = *(undefined8 *)(lVar14 + 0x38);
                _DAT_14cae9ae0 = *(ulonglong *)(lVar14 + 0x40);
                _DAT_14cae9ac8 = (undefined4)*(undefined8 *)(lVar14 + 0x28);
                uRam000000014cae9acc =
                     (undefined4)((ulonglong)*(undefined8 *)(lVar14 + 0x28) >> 0x20);
                _DAT_14cae9ad0 = (undefined4)*(undefined8 *)(lVar14 + 0x30);
                iRam000000014cae9ad4 = (int)((ulonglong)*(undefined8 *)(lVar14 + 0x30) >> 0x20);
                DAT_14cae9ac0 = (undefined4)*(undefined8 *)(lVar14 + 0x20);
                _DAT_14cae9ac4 = (undefined4)((ulonglong)*(undefined8 *)(lVar14 + 0x20) >> 0x20);
                goto LAB_143565cab;
              }
              break;
            }
            iVar12 = *(int *)(lVar14 + 0x48);
          }
        }
        uStack_aa4 = (undefined4)DAT_14c846508;
        uStack_aa0 = (undefined4)((ulonglong)DAT_14c846508 >> 0x20);
        local_ab8._4_4_ = (undefined4)DAT_14c8464f8;
        uStack_ab0._0_4_ = (int)((ulonglong)DAT_14c8464f8 >> 0x20);
        uStack_ab0._4_4_ = (undefined4)DAT_14c846500;
        local_aa8 = (int)((ulonglong)DAT_14c846500 >> 0x20);
        _DAT_14cae9aa8 = DAT_14c8464e0;
        _DAT_14cae9ab0 = DAT_14c8464e8;
        DAT_14cae9ab8 = DAT_14c8464f0;
        DAT_14cae9ac0 = 0x42b40000;
        _DAT_14cae9ad8 = DAT_14c846508;
        _DAT_14cae9ac4 = (undefined4)local_ab8;
        _DAT_14cae9ac8 = local_ab8._4_4_;
        uRam000000014cae9acc = (int)uStack_ab0;
        _DAT_14cae9ae0 = _DAT_14cae9ae0 & 0xffffffffffffff00;
        _DAT_14cae9ad0 = uStack_ab0._4_4_;
        iRam000000014cae9ad4 = local_aa8;
      }
LAB_143565cab:
      local_ae8 = _DAT_14cae9ad8;
      uStack_ae0 = _DAT_14cae9ae0;
      local_af8 = (undefined2 *)CONCAT44(uRam000000014cae9acc,_DAT_14cae9ac8);
      puStack_af0 = (undefined2 *)CONCAT44(iRam000000014cae9ad4,_DAT_14cae9ad0);
      uStack_b00 = CONCAT44(_DAT_14cae9ac4,DAT_14cae9ac0);
      local_b08 = DAT_14cae9ab8;
      local_b18 = _DAT_14cae9aa8;
      pppppcStack_b10 = _DAT_14cae9ab0;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9a78);
      local_ab8 = (void *****)CONCAT44(local_ab8._4_4_,(undefined4)local_ab8);
      uStack_ab0 = (code *****)CONCAT44(uStack_ab0._4_4_,(int)uStack_ab0);
      switch(uStack_b50 & 0xffffffff) {
      case 0:
        if ((char)uStack_ae0 == '\x01') {
          FUN_147ba6df2(&DAT_14cae9a20,plVar1);
          break;
        }
        FUN_1400e6e60(&local_ab8);
        (**(code **)(*plVar1 + 0x2b0))(plVar1,&local_ab8);
        local_b08 = CONCAT44(uStack_aa4,local_aa8);
        local_b18 = (void *****)CONCAT44(local_ab8._4_4_,(undefined4)local_ab8);
        pppppcStack_b10 = (code *****)CONCAT44(uStack_ab0._4_4_,(int)uStack_ab0);
        local_ae8 = CONCAT44(uStack_a8c,uStack_a90);
        local_af8 = (undefined2 *)CONCAT44(uStack_a9c,uStack_aa0);
        puStack_af0 = local_a98;
        uStack_b00 = CONCAT44(uStack_b00._4_4_,uStack_a88);
        goto LAB_1435660cb;
      case 1:
        puVar13 = &DAT_149dfb77a;
        if ((int)local_b58[1] != 0) {
          puVar13 = (undefined2 *)*local_b58;
        }
        lVar14 = 0;
        while( true ) {
          uVar16 = *(ushort *)((longlong)puVar13 + lVar14);
          uVar10 = (ulonglong)uVar16;
          uVar18 = *(ushort *)((longlong)&DAT_149e1423e + lVar14);
          if (uVar16 != uVar18) break;
          local_ab8 = (void *****)CONCAT44(local_ab8._4_4_,(undefined4)local_ab8);
          uStack_ab0 = (code *****)CONCAT44(uStack_ab0._4_4_,(int)uStack_ab0);
          if (uVar16 == 0) goto switchD_143565d09_caseD_2;
LAB_143565d40:
          lVar14 = lVar14 + 2;
        }
        if ((uVar18 | uVar16) < 0x80) {
          uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar19 = (ulonglong)uVar18;
          uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
          if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar19]) goto LAB_143565d40;
        }
        local_ab8 = (void *****)CONCAT44(local_ab8._4_4_,(undefined4)local_ab8);
        uStack_ab0 = (code *****)CONCAT44(uStack_ab0._4_4_,(int)uStack_ab0);
        if (uVar16 != uVar18) {
          puVar13 = &DAT_149dfb77a;
          if ((int)local_b58[1] != 0) {
            puVar13 = (undefined2 *)*local_b58;
          }
          FUN_1446f470e(&local_b20,puVar13,1);
          if (DAT_14cae99d8 == DAT_14cae9a04) goto LAB_143565e2f;
          uVar7 = (uint)((ulonglong)local_b20 >> 0x10);
          uVar11 = (uint)local_b20 & 0xffff;
          puVar8 = DAT_14cae9a10;
          if (DAT_14cae9a10 == (undefined *)0x0) {
            puVar8 = &DAT_14cae9a08;
          }
          iVar12 = *(int *)(puVar8 + (ulonglong)
                                     (DAT_14cae9a18 - 1U &
                                     (int)((ulonglong)local_b20 >> 0x20) +
                                     ((uint)local_b20 << 0x10 | uVar11) +
                                     (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar11 >> 4)) * 4);
          iVar17 = iVar12;
          if (iVar12 == -1) goto LAB_143565e2f;
          goto LAB_143565e10;
        }
        break;
      case 6:
        lVar14 = 8;
        bVar5 = 0;
        do {
          bVar4 = bVar5;
          bVar21 = *(uint *)((longlong)local_b58 + lVar14) < 2;
          lVar14 = lVar14 + 0x10;
          bVar5 = bVar4 | bVar21;
        } while (lVar14 != 0x68);
        local_ab8 = (void *****)CONCAT44(local_ab8._4_4_,(undefined4)local_ab8);
        uStack_ab0 = (code *****)CONCAT44(uStack_ab0._4_4_,(int)uStack_ab0);
        if ((bool)(bVar4 | bVar21)) break;
        FUN_147ba70fc(&local_b18,local_b58,6);
        goto LAB_143566101;
      case 7:
        lVar14 = 8;
        bVar5 = 0;
        do {
          bVar4 = bVar5;
          bVar21 = *(uint *)((longlong)local_b58 + lVar14) < 2;
          lVar14 = lVar14 + 0x10;
          bVar5 = bVar4 | bVar21;
        } while (lVar14 != 0x78);
        local_ab8 = (void *****)CONCAT44(local_ab8._4_4_,(undefined4)local_ab8);
        uStack_ab0 = (code *****)CONCAT44(uStack_ab0._4_4_,(int)uStack_ab0);
        if (!(bool)(bVar4 | bVar21)) {
          puVar13 = &DAT_149dfb77a;
          if ((int)local_b58[1] != 0) {
            puVar13 = (undefined2 *)*local_b58;
          }
          FUN_1446f470e(&local_ac8,puVar13,1);
          FUN_147ba70fc(&local_b18,local_b58 + 2,(int)uStack_b50 + -1);
          local_ab8 = &local_ac8;
          uStack_ab0 = (code *****)&local_b18;
          FUN_147ba7200(&local_b20,&local_ab8);
          goto LAB_143566101;
        }
      }
      goto switchD_143565d09_caseD_2;
    }
    goto LAB_143566266;
  }
  cVar6 = FUN_140988638(&local_b28,L"r.ResetViewState",1);
  if (cVar6 != '\0') {
    iVar12 = *(int *)(param_1 + 0xb0);
    if ((longlong)iVar12 != 0) {
      lVar20 = *(longlong *)(param_1 + 0xa8);
      lVar14 = 0;
      do {
        plVar1 = *(longlong **)(lVar20 + 8 + lVar14);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x38))();
        }
        lVar14 = lVar14 + 0x38;
      } while ((longlong)iVar12 * 0x38 - lVar14 != 0);
    }
    goto LAB_14356629e;
  }
  cVar6 = FUN_140988638(&local_b28,L"LISTAWAKEBODIES",1);
  if ((cVar6 != '\0') || (cVar6 = FUN_140988638(&local_b28,L"LISTSIMBODIES",1), cVar6 != '\0')) {
    (**(code **)(*plVar1 + 0x180))(plVar1);
    goto LAB_14356629e;
  }
  cVar6 = FUN_140988638(&local_b28,L"MOVECOMPTIMES",1);
  if (cVar6 != '\0') goto LAB_14356629e;
  cVar6 = FUN_140988638(&local_b28,L"LISTSKELMESHES",1);
  if (cVar6 != '\0') {
    local_a98 = (undefined2 *)0x0;
    uStack_a90 = 0;
    local_ab8._0_4_ = 0;
    local_ab8._4_4_ = 0;
    uStack_ab0._0_4_ = 0;
    uStack_ab0._4_4_ = 0;
    uStack_a8c = 0x80;
    uStack_a88 = 0xffffffff;
    uStack_a84 = 0;
    local_a78 = 0;
    local_a70 = 0;
    FUN_1463cfdf6(&local_b18,0x10,1,0);
    uVar10 = local_b08 & 0xffffffff;
    if ((-1 < (int)local_b08) && ((int)local_b08 < (int)pppppcStack_b10)) {
      do {
        local_b38 = local_b18[uVar10 & 0xffffffff];
        ppppvVar15 = local_b38[0xcb];
        if (ppppvVar15 == (void ****)0x0) {
          ppppvVar15 = local_b38[0xcc];
          if ((DAT_14c950c29 == '\x01') && (ppppvVar15 != (void ****)0x0)) goto LAB_143566671;
          if (ppppvVar15 != (void ****)0x0) goto LAB_1435664ec;
LAB_1435665d4:
          local_b48 = (void ****)0x0;
          pppppvVar9 = local_b38;
        }
        else {
          if (DAT_14c950c29 == '\x01') {
LAB_143566671:
            FUN_1456cec3c(ppppvVar15);
          }
LAB_1435664ec:
          if (DAT_14cb06da8 == 0) {
            local_ac8 = (code ****)FUN_1449e2820;
            local_b70 = FUN_14081d0ea;
            local_b78 = &LAB_1464003b0;
            local_b88 = &LAB_147d17bdf;
            local_b90 = &LAB_1417edf22;
            local_b98 = L"Engine";
            local_ba0 = 0;
            local_ba8 = (undefined2 *)CONCAT44(local_ba8._4_4_,0x10000000);
            local_bb0 = (undefined2 *)CONCAT44(local_bb0._4_4_,8);
            local_bb8 = CONCAT44(local_bb8._4_4_,0x588);
            local_b80 = &local_ac8;
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
          }
          if ((*(int *)(ppppvVar15[2] + 7) < *(int *)(DAT_14cb06da8 + 0x38)) ||
             (pppppvVar9 = local_b38, local_b48 = ppppvVar15,
             ppppvVar15[2][6][*(int *)(DAT_14cb06da8 + 0x38)] != (void *)(DAT_14cb06da8 + 0x30)))
          goto LAB_1435665d4;
        }
        for (; pppppvVar9 != (void *****)0x0; pppppvVar9 = pppppvVar9[4]) {
          if (((ulonglong)pppppvVar9[1] & 0x30) != 0) goto LAB_143566560;
        }
        local_ac8 = (code ****)&local_b48;
        pppppcStack_ac0 = (code *****)&local_b38;
        FUN_147ba8d6e(&local_ab8,&local_b58,&local_ac8);
LAB_143566560:
        uVar10 = (longlong)(int)local_b08;
        do {
          uVar19 = uVar10;
          uVar10 = uVar19 + 1;
          local_b08 = CONCAT44(local_b08._4_4_,(int)uVar10);
          if ((longlong)(int)pppppcStack_b10 <= (longlong)uVar10) break;
        } while (local_b18[uVar10] == (void ****)0x0);
      } while ((-2 < (longlong)uVar19) && ((int)uVar10 < (int)pppppcStack_b10));
    }
    if (local_b18 != (void *****)0x0) {
      FUN_1400020a8();
    }
    FUN_14793d058(&local_b18,0x10,1,0);
    uVar10 = local_b08 & 0xffffffff;
    if ((-1 < (int)local_b08) && ((int)local_b08 < (int)pppppcStack_b10)) {
      do {
        ppppvVar15 = local_b18[uVar10 & 0xffffffff];
        local_ac8 = (code ****)0x0;
        pppppcStack_ac0 = (code *****)0x0;
        FUN_147ba29e2(&local_ab8,ppppvVar15,&local_ac8);
        if ((ppppvVar15 != (void ****)0x0) && ((int)pppppcStack_ac0 != 0)) {
          (*(code *)(*ppppvVar15)[0x71])(ppppvVar15);
          if (0 < (int)pppppcStack_ac0) {
            lVar20 = 0;
            do {
              pppcVar3 = local_ac8[lVar20];
              if (pppcVar3[0x16] == (code **)0x0) {
                FUN_1448abda6(pppcVar3);
              }
              if ((*(int *)((longlong)pppcVar3 + 0x3d4) < 0) && (pppcVar3[0x16] == (code **)0x0)) {
                FUN_1448abda6(pppcVar3);
              }
              lVar20 = lVar20 + 1;
            } while (lVar20 < (int)pppppcStack_ac0);
          }
        }
        if (local_ac8 != (code ****)0x0) {
          FUN_1400020a8();
        }
        uVar10 = (longlong)(int)local_b08;
        do {
          uVar19 = uVar10;
          uVar10 = uVar19 + 1;
          local_b08 = CONCAT44(local_b08._4_4_,(int)uVar10);
          if ((longlong)(int)pppppcStack_b10 <= (longlong)uVar10) break;
        } while (local_b18[uVar10] == (void ****)0x0);
      } while ((-2 < (longlong)uVar19) && ((int)uVar10 < (int)pppppcStack_b10));
    }
    if (local_b18 != (void *****)0x0) {
      FUN_1400020a8();
    }
    local_a70 = 0;
    if (local_a78 != 0) {
      FUN_1400020a8();
    }
    FUN_147ba706e(&local_ab8);
    goto LAB_14356629e;
  }
  cVar6 = FUN_140988638(&local_b28,L"LISTPAWNCOMPONENTS",1);
  if (cVar6 == '\0') {
    cVar6 = FUN_140988638(&local_b28,L"EXEC",1);
    if (cVar6 == '\0') {
      cVar6 = FUN_140988638(&local_b28,L"TOGGLESTREAMINGVOLUMES",1);
      if (cVar6 == '\0') {
        lVar20 = *(longlong *)(param_1 + 0x50);
        if (lVar20 != 0) {
          cVar6 = (**(code **)(*(longlong *)(lVar20 + 0x38) + 8))
                            (lVar20 + 0x38,param_2,local_b28,param_4);
          if (cVar6 != '\0') goto LAB_14356629e;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_bd8);
      }
      FUN_147ba2bb2(plVar1,local_b28);
    }
    else {
      FUN_147ba2b36(plVar1,local_b28,param_4);
    }
    goto LAB_14356629e;
  }
  FUN_147ba2aca(&local_ab8);
  pppppvVar9 = (void *****)CONCAT44(local_ab8._4_4_,(undefined4)local_ab8);
  local_ab8 = pppppvVar9;
  uStack_ab0 = (code *****)CONCAT44(uStack_ab0._4_4_,(int)uStack_ab0);
  if (local_aa8 < (int)uStack_ab0 && -1 < local_aa8) {
    do {
      lVar20 = (longlong)local_aa8;
      do {
        lVar14 = lVar20;
        lVar20 = lVar14 + 1;
        local_aa8 = local_aa8 + 1;
        uStack_ab0 = (code *****)CONCAT44(uStack_ab0._4_4_,(int)uStack_ab0);
        if ((int)uStack_ab0 <= lVar20) goto LAB_143566294;
      } while (pppppvVar9[lVar20] == (void ****)0x0);
      uStack_ab0 = (code *****)CONCAT44(uStack_ab0._4_4_,(int)uStack_ab0);
    } while ((-2 < lVar14) &&
            (uStack_ab0 = (code *****)CONCAT44(uStack_ab0._4_4_,(int)uStack_ab0),
            local_aa8 < (int)uStack_ab0));
  }
  goto LAB_143566294;
  while (iVar17 = *(int *)(DAT_14cae99d0 + (longlong)iVar17 * 0x48 + 0x40), iVar17 != -1) {
LAB_143565e10:
    if (*(code ****)(DAT_14cae99d0 + (longlong)iVar17 * 0x48) == local_b20) goto LAB_143566013;
  }
LAB_143565e2f:
  FUN_1400e6e60(&local_ab8);
  (**(code **)(*plVar1 + 0x2b0))(plVar1,&local_ab8);
  local_b08 = CONCAT44(uStack_aa4,local_aa8);
  local_b18 = (void *****)CONCAT44(local_ab8._4_4_,(undefined4)local_ab8);
  pppppcStack_b10 = (code *****)CONCAT44(uStack_ab0._4_4_,(int)uStack_ab0);
  local_ae8 = CONCAT44(uStack_a8c,uStack_a90);
  local_af8 = (undefined2 *)CONCAT44(uStack_a9c,uStack_aa0);
  puStack_af0 = local_a98;
  uStack_b00 = CONCAT44(uStack_b00._4_4_,uStack_a88);
  local_ac8 = &local_b20;
  pppppcStack_ac0 = (code *****)&local_b18;
  FUN_147ba7200(local_acc,&local_ac8);
LAB_1435660cb:
  if (local_c8 == '\x01') {
    local_c8 = '\0';
  }
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if (local_1e0 != 0) {
    FUN_1400020a8();
  }
LAB_143566101:
  uStack_ae0 = CONCAT71(uStack_ae0._1_7_,1);
  local_ba0 = local_ae8;
  local_ba8 = puStack_af0;
  local_bb0 = local_af8;
  local_bb8 = local_b08;
  FUN_140002266(&local_ab8,L"%f %f %f %f %f %f",local_b18,pppppcStack_b10);
  pppppvVar9 = (void *****)&DAT_149dfb77a;
  if ((int)uStack_ab0 != 0) {
    pppppvVar9 = local_ab8;
  }
  FUN_142855b70(pppppvVar9);
  FUN_147ba77aa(plVar1,&local_b18);
  if (local_ab8 != (void *****)0x0) {
    FUN_1400020a8();
  }
switchD_143565d09_caseD_2:
  FUN_1447a1747(local_b58,uStack_b50 & 0xffffffff);
  if (local_b58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  lVar20 = lVar20 + 1;
  if ((int)uStack_b30 <= lVar20) goto LAB_14356625d;
  goto LAB_143565b6a;
  while (iVar12 = (int)plVar2[8], iVar12 != -1) {
LAB_143566013:
    plVar2 = (longlong *)(DAT_14cae99d0 + (longlong)iVar12 * 0x48);
    if ((code ***)*plVar2 == local_b20) {
      if (plVar2 != (longlong *)0x0) {
        uStack_a88 = (undefined4)plVar2[7];
        uStack_a84 = (undefined4)((ulonglong)plVar2[7] >> 0x20);
        local_a98 = (undefined2 *)plVar2[5];
        uStack_a90 = (undefined4)plVar2[6];
        uStack_a8c = (undefined4)((ulonglong)plVar2[6] >> 0x20);
        local_aa8 = (int)plVar2[3];
        uStack_aa4 = (undefined4)((ulonglong)plVar2[3] >> 0x20);
        uStack_aa0 = (undefined4)plVar2[4];
        uStack_a9c = (undefined4)((ulonglong)plVar2[4] >> 0x20);
        local_ab8._0_4_ = (undefined4)plVar2[1];
        local_ab8._4_4_ = (undefined4)((ulonglong)plVar2[1] >> 0x20);
        uStack_ab0._0_4_ = (int)plVar2[2];
        uStack_ab0._4_4_ = (undefined4)((ulonglong)plVar2[2] >> 0x20);
        goto LAB_143566216;
      }
      break;
    }
  }
  local_a98 = (undefined2 *)0x0;
  uStack_a90 = 0;
  uStack_a8c = 0;
  local_aa8 = 0;
  uStack_aa4 = 0;
  uStack_aa0 = 0;
  uStack_a9c = 0;
  local_ab8._0_4_ = 0;
  local_ab8._4_4_ = 0;
  uStack_ab0._0_4_ = 0;
  uStack_ab0._4_4_ = 0;
  uStack_a88 = 0;
  uStack_a84 = 0;
LAB_143566216:
  local_ae8 = CONCAT44(uStack_a84,uStack_a88);
  local_b18 = (void *****)CONCAT44(local_ab8._4_4_,(undefined4)local_ab8);
  pppppcStack_b10 = (code *****)CONCAT44(uStack_ab0._4_4_,(int)uStack_ab0);
  local_b08 = CONCAT44(uStack_aa4,local_aa8);
  uStack_b00 = CONCAT44(uStack_a9c,uStack_aa0);
  local_af8 = local_a98;
  puStack_af0 = (undefined2 *)CONCAT44(uStack_a8c,uStack_a90);
  local_ab8 = local_b18;
  uStack_ab0 = pppppcStack_b10;
  goto LAB_143566101;
LAB_14356625d:
  if (1 < (int)uStack_b30) {
    FUN_1400e6f4e();
    FUN_147ba6df2(&DAT_14cae9a20,plVar1);
  }
LAB_143566266:
  if (local_b48 != (void ****)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_b38,uStack_b30 & 0xffffffff);
  pppppvVar9 = local_b38;
LAB_143566294:
  if (pppppvVar9 != (void *****)0x0) {
    FUN_1400020a8();
  }
LAB_14356629e:
  if ((local_80 ^ (ulonglong)auStack_bd8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143566894 FUN_143566894 body=47 status=ok
// SIG undefined FUN_143566894(void)

void FUN_143566894(void)

{
  DAT_14cae96b0 = &PTR_FUN_14a9c40e0;
  FUN_144725486(&DAT_14cae96b0);
  FUN_1463e994c(&DAT_14cae96b0);
  return;
}



// FUNCTION 1435668d0 FUN_1435668d0 body=423 status=ok
// SIG undefined FUN_1435668d0(void)

undefined * FUN_1435668d0(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae97f0) {
    FUN_144b3d300(&DAT_14cae97f0);
    if (DAT_14cae97f0 == -1) {
      FUN_145db058c(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"LocalVFLooseParameters";
      local_78 = L"FLocalVertexFactoryLooseParameters";
      local_50 = 0x20;
      local_58 = 0x1e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cae9770,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143566a78);
      _Init_thread_footer(&DAT_14cae97f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cae9770;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143566a84 FUN_143566a84 body=1323 status=ok
// SIG undefined FUN_143566a84(void)

void FUN_143566a84(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,uint param_6,longlong *param_7,longlong param_8,
                  longlong param_9,longlong *param_10,longlong param_11)

{
  ushort uVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  bool bVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ushort *puVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_5c;
  undefined2 local_58;
  float local_54;
  float local_50;
  float local_4c;
  ulonglong local_48;
  uint uVar11;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = (**(code **)(*param_7 + 0x30))();
  if (((int)param_6 < 2) || ((*(uint *)(lVar6 + 0x28) & 0x4000) == 0)) {
    bVar5 = DAT_14ca96500;
    if (param_6 != 1) goto LAB_143566b12;
joined_r0x000143566f3f:
    if (bVar5 == 0) goto LAB_143566c98;
  }
  else if ((*(byte *)((longlong)&DAT_14ca814d0 +
                     (ulonglong)*(ushort *)(&DAT_14ca85070 + (ulonglong)param_6 * 2) * 0x3c + 6) &
           0x10) == 0) {
LAB_143566b12:
    if ((((int)param_6 < 3) || ((ulonglong)DAT_14ca85550 == 0xc)) ||
       (lVar6 = (ulonglong)DAT_14ca85550 * 0x3c,
       *(longlong *)(&DAT_14ca814b0 + lVar6) == DAT_14ca81490)) goto LAB_143566c98;
    if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar6 + 3) & 0x10) != 0) {
      bVar5 = *(byte *)((longlong)&DAT_14ca814c8 + lVar6 + 3) & 0x20;
      goto joined_r0x000143566f3f;
    }
  }
  if (param_9 == 0) {
    param_9 = param_7[0x41];
  }
  FUN_144a91e46();
  uVar14 = *(ulonglong *)(param_4 + 0xa0);
  uVar7 = param_4 + 0xa0 + ((longlong)uVar14 >> 0x18);
  if ((uVar14 & 1) == 0) {
    uVar7 = uVar14;
  }
  if (0 < (longlong)*(int *)(param_4 + 0xa8)) {
    lVar6 = 0;
    do {
      if (*(longlong *)(uVar7 + lVar6 * 4) == DAT_14cae9700) {
        uVar14 = *(ulonglong *)(param_4 + 0xb0);
        uVar7 = param_4 + 0xb0 + ((longlong)uVar14 >> 0x18);
        if ((uVar14 & 1) == 0) {
          uVar7 = uVar14;
        }
        puVar12 = (ushort *)(uVar7 + lVar6);
        goto LAB_143566c34;
      }
      lVar6 = lVar6 + 2;
    } while ((longlong)*(int *)(param_4 + 0xa8) * 2 != lVar6);
  }
  puVar12 = &DAT_14c9c45cc;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
    DAT_14c9c45cc = 0xffff;
    _Init_thread_footer(&DAT_14c9c45d0);
  }
LAB_143566c34:
  uVar1 = *puVar12;
  if (uVar1 != 0xffff) {
    puVar2 = (ulonglong *)*param_10;
    uVar14 = *puVar2;
    uVar7 = ((longlong)uVar14 >> 0x18) + (longlong)puVar2;
    if ((uVar14 & 1) == 0) {
      uVar7 = uVar14;
    }
    uVar11 = (uint)puVar2[1];
    uVar13 = 0;
    uVar15 = uVar11;
    if (8 < (int)uVar11) {
      uVar13 = 0;
      uVar16 = uVar11;
      do {
        uVar15 = uVar16 >> 1;
        if (*(ushort *)(uVar7 + (ulonglong)(uVar15 + uVar13) * 2) < uVar1) {
          uVar13 = uVar15 + uVar13 + (uVar16 & 1);
        }
        bVar4 = 0x11 < uVar16;
        uVar16 = uVar15;
      } while (bVar4);
    }
    uVar15 = uVar15 + uVar13 + 1;
    if ((int)uVar15 < (int)uVar11) {
      uVar11 = uVar15;
    }
    iVar10 = uVar11 - uVar13;
    if (iVar10 != 0 && (int)uVar13 <= (int)uVar11) {
      uVar14 = (ulonglong)uVar13;
      do {
        if (*(ushort *)(uVar7 + uVar14 * 2) == uVar1) {
          *(longlong *)(param_10[1] + (uVar14 & 0xffffffff) * 8) = param_9;
          break;
        }
        uVar14 = uVar14 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
LAB_143566c98:
  if ((*(byte *)(param_8 + 0x7d) & 1) != 0) {
    lVar6 = *(longlong *)(param_8 + 0x38);
    lVar8 = (**(code **)(*param_7 + 0x30))();
    if ((((int)param_6 < 2) || ((*(uint *)(lVar8 + 0x28) & 0x4000) == 0)) ||
       ((*(byte *)((longlong)&DAT_14ca814d0 +
                  (ulonglong)*(ushort *)(&DAT_14ca85070 + (ulonglong)param_6 * 2) * 0x3c + 6) & 0x10
        ) == 0)) {
      uVar3 = *(undefined8 *)(lVar6 + 0x10);
      uVar11 = *(uint *)(param_7 + 0x43);
      iVar10 = *(int *)(param_11 + 0x60);
      *(uint *)(param_11 + 0x60) = iVar10 + 1U;
      local_68 = param_4;
      if (*(uint *)(param_11 + 100) < iVar10 + 1U) {
        FUN_14744556c(param_11,iVar10);
      }
      lVar6 = *(longlong *)(param_11 + 0x58);
      if (*(longlong *)(param_11 + 0x58) == 0) {
        lVar6 = param_11;
      }
      *(uint *)(lVar6 + (longlong)iVar10 * 0xc) = uVar11 & 0xf;
      *(undefined8 *)(lVar6 + 4 + (longlong)iVar10 * 0xc) = uVar3;
      param_4 = local_68;
    }
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    if (param_2 == (longlong *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (**(code **)(*param_2 + 0x398))(param_2,param_7);
    }
    if (lVar6 == 0) {
      lVar6 = DAT_14cae96c8;
    }
    lVar8 = FUN_145fcd36a();
    uVar14 = *(ulonglong *)(param_4 + 0xa0);
    uVar7 = param_4 + 0xa0 + ((longlong)uVar14 >> 0x18);
    if ((uVar14 & 1) == 0) {
      uVar7 = uVar14;
    }
    if (0 < (longlong)*(int *)(param_4 + 0xa8)) {
      lVar9 = 0;
      do {
        if (*(longlong *)(uVar7 + lVar9 * 4) == *(longlong *)(lVar8 + 0x28)) {
          uVar14 = *(ulonglong *)(param_4 + 0xb0);
          uVar7 = param_4 + 0xb0 + ((longlong)uVar14 >> 0x18);
          if ((uVar14 & 1) == 0) {
            uVar7 = uVar14;
          }
          puVar12 = (ushort *)(uVar7 + lVar9);
          goto LAB_143566e82;
        }
        lVar9 = lVar9 + 2;
      } while ((longlong)*(int *)(param_4 + 0xa8) * 2 != lVar9);
    }
    puVar12 = &DAT_14c9c45cc;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
LAB_143566e82:
    uVar1 = *puVar12;
    if (uVar1 != 0xffff) {
      puVar2 = (ulonglong *)*param_10;
      uVar14 = *puVar2;
      uVar7 = ((longlong)uVar14 >> 0x18) + (longlong)puVar2;
      if ((uVar14 & 1) == 0) {
        uVar7 = uVar14;
      }
      uVar11 = (uint)puVar2[1];
      uVar13 = 0;
      uVar15 = uVar11;
      if (8 < (int)uVar11) {
        uVar13 = 0;
        uVar16 = uVar11;
        do {
          uVar15 = uVar16 >> 1;
          if (*(ushort *)(uVar7 + (ulonglong)(uVar15 + uVar13) * 2) < uVar1) {
            uVar13 = uVar15 + uVar13 + (uVar16 & 1);
          }
          bVar4 = 0x11 < uVar16;
          uVar16 = uVar15;
        } while (bVar4);
      }
      uVar15 = uVar15 + uVar13 + 1;
      if ((int)uVar15 < (int)uVar11) {
        uVar11 = uVar15;
      }
      iVar10 = uVar11 - uVar13;
      if (iVar10 != 0 && (int)uVar13 <= (int)uVar11) {
        uVar14 = (ulonglong)uVar13;
        do {
          if (*(ushort *)(uVar7 + uVar14 * 2) == uVar1) {
            *(longlong *)(param_10[1] + (uVar14 & 0xffffffff) * 8) = lVar6;
            break;
          }
          uVar14 = uVar14 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    if (*(short *)(param_1 + 8) != 0) {
      local_54 = *(float *)(param_8 + 0x74);
      local_50 = *(float *)(param_8 + 0x78);
      local_4c = local_50 - local_54;
      local_5c = *(undefined4 *)(param_1 + 4);
      local_58 = *(undefined2 *)(param_1 + 8);
      FUN_1471da628(param_10);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143566fb8 FUN_143566fb8 body=1760 status=ok
// SIG undefined FUN_143566fb8(void)

void FUN_143566fb8(byte param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6,uint param_7,longlong *param_8,char *param_9,
                  longlong *param_10,uint *param_11)

{
  ushort uVar1;
  bool bVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong *puVar9;
  ushort *puVar10;
  uint uVar11;
  void *_Dst;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  size_t _Size;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  wchar_t *local_a0;
  longlong *local_98;
  char *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  uint local_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((8 < param_1) || ((0x121U >> (param_1 & 0x1f) & 1) == 0)) goto LAB_143567162;
  bVar3 = *(byte *)((longlong)param_8 + 0x21c);
  local_50 = (uint)bVar3;
  uVar1 = *(ushort *)(param_2 + 0x10);
  if (uVar1 != 0) {
    lVar4 = *param_10;
    uVar13 = *(ulonglong *)(lVar4 + 0x30);
    uVar5 = lVar4 + 0x30 + ((longlong)uVar13 >> 0x18);
    if ((uVar13 & 1) == 0) {
      uVar5 = uVar13;
    }
    lVar6 = (longlong)*(int *)(lVar4 + 0x38);
    if (0 < lVar6) {
      iVar7 = *(int *)(lVar4 + 0x28);
      iVar8 = iVar7 + 0xe;
      if (-1 < iVar7 + 7) {
        iVar8 = iVar7 + 7;
      }
      _Dst = (void *)((ulonglong)
                      (uint)((iVar8 >> 3) +
                            (*(int *)(lVar4 + 8) + *(int *)(lVar4 + 0x18) + iVar7) * 8) +
                     param_10[1]);
      puVar9 = (ulonglong *)(uVar5 + 8);
      do {
        if (*(short *)(param_2 + 0xc) == (short)puVar9[-1]) {
          uVar13 = *puVar9;
          uVar5 = ((longlong)uVar13 >> 0x18) + (longlong)puVar9;
          if ((uVar13 & 1) == 0) {
            uVar5 = uVar13;
          }
          if (0 < (longlong)(int)puVar9[1]) {
            lVar4 = 0;
            goto LAB_1435672bd;
          }
          break;
        }
        _Dst = (void *)((longlong)_Dst + (ulonglong)*(ushort *)((longlong)puVar9 + -6));
        puVar9 = puVar9 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  goto LAB_143567022;
  while( true ) {
    _Dst = (void *)((longlong)_Dst + (ulonglong)*(ushort *)(uVar5 + 2 + lVar4 * 4));
    lVar4 = lVar4 + 1;
    if ((int)puVar9[1] == lVar4) break;
LAB_1435672bd:
    if (*(short *)(param_2 + 0xe) == *(short *)(uVar5 + lVar4 * 4)) {
      _Size = 4;
      if (uVar1 < 4) {
        _Size = (size_t)(uint)uVar1;
      }
      memcpy(_Dst,&local_50,_Size);
      uVar11 = (uint)uVar1 - (int)_Size;
      memset((void *)((longlong)_Dst + _Size),0,(longlong)(int)((int)uVar11 >> 0x1f & uVar11));
      bVar3 = *(byte *)((longlong)param_8 + 0x21c);
      break;
    }
  }
LAB_143567022:
  if ((bVar3 & 1) == 0) {
    local_88 = *(undefined8 *)(param_9 + 0x40);
    local_78 = param_11;
    local_80 = param_10;
    local_90 = param_9;
    local_98 = param_8;
    local_a0 = (wchar_t *)CONCAT44(local_a0._4_4_,param_7);
    FUN_143566a84(param_2,param_3);
  }
  else {
    FUN_147add92c(param_8);
    lVar4 = (**(code **)(*param_8 + 0x30))(param_8);
    if (((int)param_7 < 2) || ((*(uint *)(lVar4 + 0x28) & 0x4000) == 0)) {
      if (param_7 != 1) goto LAB_14356749f;
      if (DAT_14ca96500 != '\0') goto LAB_1435674e8;
    }
    else {
      if ((*(byte *)((longlong)&DAT_14ca814d0 +
                    (ulonglong)*(ushort *)(&DAT_14ca85070 + (ulonglong)param_7 * 2) * 0x3c + 6) &
          0x10) == 0) {
LAB_14356749f:
        if (((((int)param_7 < 3) || ((ulonglong)DAT_14ca85550 == 0xc)) ||
            (lVar4 = (ulonglong)DAT_14ca85550 * 0x3c,
            *(longlong *)(&DAT_14ca814b0 + lVar4) == DAT_14ca81490)) ||
           (((*(byte *)((longlong)&DAT_14ca814d8 + lVar4 + 3) & 0x10) != 0 &&
            ((*(byte *)((longlong)&DAT_14ca814c8 + lVar4 + 3) & 0x20) == 0)))) goto LAB_143567078;
      }
LAB_1435674e8:
      lVar4 = param_8[0x41];
      FUN_144a91e46();
      uVar13 = *(ulonglong *)(param_5 + 0xa0);
      uVar5 = param_5 + 0xa0 + ((longlong)uVar13 >> 0x18);
      if ((uVar13 & 1) == 0) {
        uVar5 = uVar13;
      }
      if (0 < (longlong)*(int *)(param_5 + 0xa8)) {
        lVar6 = 0;
        do {
          if (*(longlong *)(uVar5 + lVar6 * 4) == DAT_14cae9700) {
            uVar13 = *(ulonglong *)(param_5 + 0xb0);
            uVar5 = param_5 + 0xb0 + ((longlong)uVar13 >> 0x18);
            if ((uVar13 & 1) == 0) {
              uVar5 = uVar13;
            }
            puVar10 = (ushort *)(uVar5 + lVar6);
            goto LAB_1435675ab;
          }
          lVar6 = lVar6 + 2;
        } while ((longlong)*(int *)(param_5 + 0xa8) * 2 != lVar6);
      }
      puVar10 = &DAT_14c9c45cc;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1))
      {
        DAT_14c9c45cc = 0xffff;
        _Init_thread_footer(&DAT_14c9c45d0);
      }
LAB_1435675ab:
      uVar1 = *puVar10;
      if (uVar1 != 0xffff) {
        puVar9 = (ulonglong *)*param_10;
        uVar13 = *puVar9;
        uVar5 = ((longlong)uVar13 >> 0x18) + (longlong)puVar9;
        if ((uVar13 & 1) == 0) {
          uVar5 = uVar13;
        }
        uVar11 = (uint)puVar9[1];
        uVar13 = 0;
        uVar14 = uVar11;
        if (8 < (int)uVar11) {
          uVar13 = 0;
          uVar15 = (ulonglong)uVar11;
          uVar12 = uVar11;
          do {
            uVar15 = uVar15 >> 1;
            uVar14 = (uint)uVar15;
            uVar16 = uVar14 + (int)uVar13;
            if (*(ushort *)(uVar5 + (ulonglong)uVar16 * 2) < uVar1) {
              uVar13 = (ulonglong)(uVar16 + (uVar12 & 1));
            }
            bVar2 = 0x11 < uVar12;
            uVar12 = uVar14;
          } while (bVar2);
        }
        iVar7 = (int)uVar13;
        uVar14 = uVar14 + iVar7 + 1;
        if ((int)uVar14 < (int)uVar11) {
          uVar11 = uVar14;
        }
        iVar8 = uVar11 - iVar7;
        if (iVar8 != 0 && iVar7 <= (int)uVar11) {
          do {
            if (*(ushort *)(uVar5 + uVar13 * 2) == uVar1) {
              *(longlong *)(param_10[1] + (uVar13 & 0xffffffff) * 8) = lVar4;
              break;
            }
            uVar13 = uVar13 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
    }
  }
LAB_143567078:
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
      FUN_1413288e0(&DAT_14c926ca8);
      atexit(FUN_1427ac032);
      _Init_thread_footer(&DAT_14c926f30);
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cae97f0) && (FUN_144b3d300(&DAT_14cae97f0), DAT_14cae97f0 == -1)) {
    FUN_145db058c(&local_50);
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
    local_90 = "Unknown";
    local_98 = (longlong *)0x0;
    local_a0 = L"LocalVFLooseParameters";
    local_a8 = L"FLocalVertexFactoryLooseParameters";
    local_80 = (longlong *)CONCAT44(local_80._4_4_,0x20);
    local_88 = CONCAT44(local_88._4_4_,0x1e);
    local_78 = &local_50;
    FUN_140b49562(&DAT_14cae9770,1,1);
    if (CONCAT44(uStack_4c,local_50) != 0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_143566a78);
    _Init_thread_footer(&DAT_14cae97f0);
  }
  uVar13 = *(ulonglong *)(param_5 + 0xa0);
  uVar5 = param_5 + 0xa0 + ((longlong)uVar13 >> 0x18);
  if ((uVar13 & 1) == 0) {
    uVar5 = uVar13;
  }
  if (0 < (longlong)*(int *)(param_5 + 0xa8)) {
    lVar4 = 0;
    do {
      if (*(longlong *)(uVar5 + lVar4 * 4) == DAT_14cae9798) {
        uVar13 = *(ulonglong *)(param_5 + 0xb0);
        if ((uVar13 & 1) != 0) {
          uVar13 = ((longlong)uVar13 >> 0x18) + param_5 + 0xb0;
        }
        puVar10 = (ushort *)(uVar13 + lVar4);
        goto LAB_143567159;
      }
      lVar4 = lVar4 + 2;
    } while ((longlong)*(int *)(param_5 + 0xa8) * 2 != lVar4);
  }
  puVar10 = &DAT_14c9c45cc;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
    DAT_14c9c45cc = 0xffff;
    _Init_thread_footer(&DAT_14c9c45d0);
  }
LAB_143567159:
  uVar1 = *puVar10;
  if (uVar1 != 0xffff) {
    puVar9 = (ulonglong *)*param_10;
    uVar13 = *puVar9;
    uVar5 = ((longlong)uVar13 >> 0x18) + (longlong)puVar9;
    if ((uVar13 & 1) == 0) {
      uVar5 = uVar13;
    }
    uVar11 = (uint)puVar9[1];
    uVar12 = 0;
    uVar14 = uVar11;
    if (8 < (int)uVar11) {
      uVar12 = 0;
      uVar16 = uVar11;
      do {
        uVar14 = uVar16 >> 1;
        if (*(ushort *)(uVar5 + (ulonglong)(uVar14 + uVar12) * 2) < uVar1) {
          uVar12 = uVar14 + uVar12 + (uVar16 & 1);
        }
        bVar2 = 0x11 < uVar16;
        uVar16 = uVar14;
      } while (bVar2);
    }
    uVar14 = uVar14 + uVar12 + 1;
    if ((int)uVar14 < (int)uVar11) {
      uVar11 = uVar14;
    }
    iVar7 = uVar11 - uVar12;
    if (iVar7 != 0 && (int)uVar12 <= (int)uVar11) {
      uVar13 = (ulonglong)uVar12;
      do {
        if (*(ushort *)(uVar5 + uVar13 * 2) == uVar1) {
          *(longlong *)(param_10[1] + (uVar13 & 0xffffffff) * 8) = param_8[0x42];
          break;
        }
        uVar13 = uVar13 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
LAB_143567162:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143567699 FUN_143567699 body=41 status=ok
// SIG undefined FUN_143567699(void)

undefined * FUN_143567699(byte param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if ((param_1 < 9) && ((0x121U >> (param_1 & 0x1f) & 1) != 0)) {
    FUN_146179322();
    puVar1 = &DAT_14cae9640;
  }
  return puVar1;
}



// FUNCTION 1435676fa FUN_1435676fa body=69 status=ok
// SIG undefined FUN_1435676fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435676fa(void)

{
  _DAT_14cae9870 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014356773c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae9878,1);
  return;
}



// FUNCTION 14356773f FUN_14356773f body=69 status=ok
// SIG undefined FUN_14356773f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14356773f(void)

{
  _DAT_14cae9880 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143567781. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae9888,1);
  return;
}



// FUNCTION 143567784 FUN_143567784 body=69 status=ok
// SIG undefined FUN_143567784(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143567784(void)

{
  _DAT_14cae9898 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435677c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae98a0,1);
  return;
}



// FUNCTION 1435677c9 FUN_1435677c9 body=69 status=ok
// SIG undefined FUN_1435677c9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435677c9(void)

{
  _DAT_14cae98b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014356780b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae98b8,1);
  return;
}



// FUNCTION 14356780e FUN_14356780e body=69 status=ok
// SIG undefined FUN_14356780e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14356780e(void)

{
  _DAT_14cae98c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143567850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cae98d0,1);
  return;
}



// FUNCTION 14356787a FUN_14356787a body=1809 status=ok
// SIG undefined FUN_14356787a(void)

void FUN_14356787a(longlong param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  undefined8 *local_1d0;
  void *local_1c8;
  size_t local_1c0;
  int local_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  undefined8 local_1a0;
  int iStack_198;
  int iStack_194;
  undefined8 *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined8 uStack_167;
  undefined8 local_158;
  undefined8 *local_148;
  undefined8 *local_140;
  int local_134;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 **local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (((DAT_14cae9cdc < DAT_14cae9cb0) || (DAT_14cae9e14 < DAT_14cae9de8)) ||
     (DAT_14cae9c3c < DAT_14cae9c10)) {
    FUN_147ba4d6a(&local_188,param_1);
    if (((local_188._4_4_ == 0 && (int)local_188 == 0) && (int)uStack_180 == 0) &&
        uStack_180._4_4_ == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = FUN_147ba4ca6(param_1);
      local_128 = &local_1a0;
      local_1a0 = local_178;
      local_130 = &local_188;
      FUN_147bac164(lVar8 + 0x80,&local_148);
    }
    iVar5 = *(int *)(param_1 + 0xa8);
    if (0 < iVar5) {
      lVar15 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar15 * 8) != 0) {
          local_70 = (undefined8 **)0x0;
          local_68 = 0x1800000000;
          FUN_1448c0c58(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + lVar15 * 8),&local_130,0);
          if (0 < (int)local_68) {
            lVar13 = 0;
            do {
              ppuVar10 = local_70;
              if (local_70 == (undefined8 **)0x0) {
                ppuVar10 = &local_130;
              }
              puVar1 = ppuVar10[lVar13];
              FUN_147ba4e7c(&local_148,puVar1);
              if (0 < (int)local_140) {
                lVar14 = 0;
                lVar7 = 0;
                do {
                  if (lVar8 == 0) {
                    lVar8 = FUN_147ba4ca6(param_1);
                  }
                  uVar11 = FUN_147ba4fae(lVar8,(longlong)local_148 + lVar14);
                  FUN_147ba5046(uVar11,*(undefined8 *)((longlong)local_148 + lVar14 + 0x10));
                  lVar3 = *(longlong *)((longlong)local_148 + lVar14 + 0x10);
                  if (lVar3 != 0) {
                    FUN_147ba50d2(lVar3);
                    FUN_1400020a8(lVar3);
                  }
                  lVar7 = lVar7 + 1;
                  lVar14 = lVar14 + 0x18;
                } while (lVar7 < (int)local_140);
              }
              FUN_147ba512a(&local_1a0,puVar1);
              if (((local_1a0._4_4_ != 0 || (int)local_1a0 != 0) || iStack_198 != 0) ||
                  iStack_194 != 0) {
                local_1b8 = (int)local_1a0;
                iStack_1b4 = local_1a0._4_4_;
                iStack_1b0 = iStack_198;
                iStack_1ac = iStack_194;
                uVar6 = FUN_1447addd0(&local_1b8,0x10);
                puVar12 = (undefined4 *)FUN_147bac30a(lVar8 + 0x120,uVar6,&local_1b8);
                puVar1 = local_190;
                *puVar12 = *(undefined4 *)local_190;
                memcpy(puVar12 + 4,local_190 + 2,0x88);
                FUN_147ba8336(puVar12 + 0x26,puVar1 + 0x13);
                if (puVar1 != (undefined8 *)0x0) {
                  if (puVar1[0x13] != 0) {
                    FUN_1400020a8();
                  }
                  FUN_1400020a8(puVar1);
                }
              }
              if (local_148 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < (int)local_68);
          }
          if (local_70 != (undefined8 **)0x0) {
            FUN_1400020a8();
          }
          iVar5 = *(int *)(param_1 + 0xa8);
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < iVar5);
    }
    if ((longlong)*(int *)(param_1 + 0xd8) != 0) {
      puVar9 = *(undefined8 **)(param_1 + 0xd0);
      puVar1 = puVar9 + *(int *)(param_1 + 0xd8);
      do {
        plVar4 = (longlong *)*puVar9;
        (**(code **)(*plVar4 + 0x5b8))(plVar4);
        FUN_147ba4e7c(&local_130,plVar4);
        if (0 < (int)local_128) {
          lVar13 = 0;
          lVar15 = 0;
          do {
            if (lVar8 == 0) {
              lVar8 = FUN_147ba4ca6(param_1);
            }
            uVar11 = FUN_147ba4fae(lVar8,(longlong)local_130 + lVar13);
            FUN_147ba5046(uVar11,*(undefined8 *)((longlong)local_130 + lVar13 + 0x10));
            lVar7 = *(longlong *)((longlong)local_130 + lVar13 + 0x10);
            if (lVar7 != 0) {
              FUN_147ba50d2(lVar7);
              FUN_1400020a8(lVar7);
            }
            lVar15 = lVar15 + 1;
            lVar13 = lVar13 + 0x18;
          } while (lVar15 < (int)local_128);
        }
        if (local_130 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        puVar9 = puVar9 + 1;
      } while (puVar9 != puVar1);
    }
    if (*(longlong *)(param_1 + 0x220) != 0) {
      FUN_143567f9e();
    }
  }
  if ((DAT_14cae9d74 < DAT_14cae9d48) && (iVar5 = *(int *)(param_1 + 0xa8), 0 < iVar5)) {
    lVar8 = *(longlong *)(param_1 + 0x220);
    lVar15 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar15 * 8) != 0) {
        local_70 = (undefined8 **)0x0;
        local_68 = 0x1800000000;
        FUN_1448c0c58(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + lVar15 * 8),&local_130,0);
        if (0 < (int)local_68) {
          lVar13 = 0;
          do {
            ppuVar10 = local_70;
            if (local_70 == (undefined8 **)0x0) {
              ppuVar10 = &local_130;
            }
            puVar1 = ppuVar10[lVar13];
            if (puVar1 != (undefined8 *)0x0) {
              lVar7 = FUN_145898b94();
              if ((*(int *)(lVar7 + 0x38) <= *(int *)(puVar1[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(puVar1[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                  lVar7 + 0x30)) {
                FUN_147ba523c(&local_1a0,puVar1);
                if (((local_1a0._4_4_ != 0 || (int)local_1a0 != 0) || iStack_198 != 0) ||
                    iStack_194 != 0) {
                  if (lVar8 == 0) {
                    lVar8 = FUN_147ba4ca6(param_1);
                  }
                  local_158 = 0;
                  local_188 = 0;
                  uStack_180 = 0;
                  local_178 = 0;
                  uStack_170 = 0;
                  uStack_16f = 0;
                  uStack_168 = 0;
                  uStack_167 = 0;
                  local_140 = &local_188;
                  local_148 = &local_1a0;
                  FUN_147bac678(lVar8 + 0x170,&local_134);
                  lVar7 = (longlong)local_134;
                  local_1d8 = *(longlong *)(lVar8 + 0x170);
                  if (CONCAT71(uStack_16f,uStack_170) != 0) {
                    FUN_1400020a8();
                  }
                  if (uStack_180 != 0) {
                    FUN_1400020a8();
                  }
                  puVar1 = local_190;
                  lVar7 = lVar7 * 0x50;
                  puVar9 = (undefined8 *)(local_1d8 + lVar7 + 0x10);
                  *puVar9 = *local_190;
                  if (puVar9 != local_190) {
                    iVar5 = *(int *)(local_190 + 2);
                    pvVar2 = (void *)local_190[1];
                    *(int *)(local_1d8 + 0x20 + lVar7) = iVar5;
                    if (iVar5 == 0 && *(int *)(local_1d8 + 0x24 + lVar7) == 0) {
                      *(undefined4 *)(local_1d8 + lVar7 + 0x24) = 0;
                    }
                    else {
                      local_1d0 = (undefined8 *)(local_1d8 + lVar7 + 0x18);
                      local_1c8 = pvVar2;
                      local_1c0 = (longlong)iVar5;
                      FUN_1447a127e();
                      if ((int)local_1c0 != 0) {
                        memcpy((void *)*local_1d0,local_1c8,local_1c0);
                      }
                    }
                    iVar5 = *(int *)(puVar1 + 4);
                    pvVar2 = (void *)puVar1[3];
                    *(int *)(local_1d8 + 0x30 + lVar7) = iVar5;
                    if (iVar5 == 0 && *(int *)(local_1d8 + 0x34 + lVar7) == 0) {
                      *(undefined4 *)(local_1d8 + lVar7 + 0x34) = 0;
                    }
                    else {
                      local_1d0 = (undefined8 *)(local_1d8 + lVar7 + 0x28);
                      local_1c8 = pvVar2;
                      local_1c0 = (longlong)iVar5;
                      FUN_1447a127e();
                      if ((int)local_1c0 != 0) {
                        memcpy((void *)*local_1d0,local_1c8,local_1c0);
                      }
                    }
                  }
                  puVar9 = local_190;
                  *(undefined1 *)(local_1d8 + 0x38 + lVar7) = *(undefined1 *)(puVar1 + 5);
                  *(undefined8 *)(local_1d8 + 0x40 + lVar7) = puVar1[6];
                  if (local_190 != (undefined8 *)0x0) {
                    if (local_190[3] != 0) {
                      FUN_1400020a8();
                    }
                    if (puVar9[1] != 0) {
                      FUN_1400020a8();
                    }
                    FUN_1400020a8(puVar9);
                  }
                }
              }
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 < (int)local_68);
        }
        if (local_70 != (undefined8 **)0x0) {
          FUN_1400020a8();
        }
        iVar5 = *(int *)(param_1 + 0xa8);
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar5);
  }
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143567f8c FUN_143567f8c body=17 status=ok
// SIG undefined FUN_143567f8c(void)

void FUN_143567f8c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x98);
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



// FUNCTION 143567f9e FUN_143567f9e body=1131 status=ok
// SIG undefined FUN_143567f9e(void)

void FUN_143567f9e(longlong param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_f8 [36];
  undefined1 local_d4 [4];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x210) == '\0') {
    *(undefined1 *)(param_1 + 0x210) = 1;
    uVar15 = 0;
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_147ba60fc(&local_98,(*(int *)(param_1 + 0x38) - *(int *)(param_1 + 100)) / 0x1e + 1);
    puVar1 = (uint *)(param_1 + 0x40);
    iVar5 = *(int *)(param_1 + 0x58);
    uVar17 = 1;
    iVar13 = 0;
    iVar7 = 0;
    if (iVar5 != 0) {
      puVar11 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar11 = puVar1;
      }
      uVar16 = *puVar11;
      if (uVar16 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        uVar15 = 0;
        uVar17 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar17 = uVar15;
        }
        iVar13 = 0;
        do {
          if (uVar17 == uVar15) goto LAB_1435681c6;
          iVar13 = iVar13 + 0x20;
          uVar16 = puVar11[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar15 = 0;
      }
      uVar17 = (ulonglong)(-uVar16 & uVar16);
      uVar18 = uVar17 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar5 <= iVar7) {
        iVar7 = iVar5;
      }
    }
    if (iVar7 < iVar5) {
      uVar16 = 0xffffffff;
      do {
        FUN_147ba6051(&local_d0,*(longlong *)(param_1 + 0x30) + (longlong)iVar7 * 0x50 + 0x10);
        FUN_147bacf54(&local_98,local_d4,&local_d0);
        uVar16 = ~(uint)uVar17 & uVar16;
        puVar11 = *(uint **)(param_1 + 0x50);
        if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
          puVar11 = puVar1;
        }
        iVar5 = *(int *)(param_1 + 0x58);
        iVar7 = (int)uVar15;
        lVar14 = (longlong)iVar7;
        uVar8 = puVar11[lVar14] & uVar16;
        if (uVar8 == 0) {
          iVar9 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar9 = iVar5 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar10 = iVar9;
          if (iVar9 < iVar7) {
            iVar10 = iVar7;
          }
          if (iVar9 <= iVar7) break;
          lVar12 = 0;
          while( true ) {
            iVar13 = iVar13 + 0x20;
            uVar8 = puVar11[lVar14 + lVar12 + 1];
            if (uVar8 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar10 - lVar14 == lVar12) goto LAB_1435681c6;
          }
          uVar15 = (ulonglong)(iVar7 + (int)lVar12 + 1);
          uVar16 = 0xffffffff;
        }
        uVar17 = (ulonglong)(-uVar8 & uVar8);
        uVar18 = uVar17 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar5);
    }
LAB_1435681c6:
    FUN_147ba600c(param_1 + 0x218,(int)uStack_90 - local_64);
    FUN_147ba616a(param_1 + 0x218,(int)uStack_90 - local_64);
    iVar5 = *(int *)(param_1 + 0x58);
    if (iVar5 == 0) {
      uVar18 = 1;
      uVar15 = 0;
      iVar7 = 0;
      iVar13 = 0;
    }
    else {
      puVar11 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar11 = puVar1;
      }
      uVar16 = *puVar11;
      if (uVar16 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        uVar15 = 0;
        uVar17 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar17 = uVar15;
        }
        iVar7 = 0;
        do {
          if (uVar17 == uVar15) goto LAB_14356839f;
          iVar7 = iVar7 + 0x20;
          uVar16 = puVar11[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar15 = 0;
        iVar7 = 0;
      }
      uVar18 = (ulonglong)(-uVar16 & uVar16);
      uVar17 = uVar18 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar13 = (iVar7 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar5 <= iVar13) {
        iVar13 = iVar5;
      }
    }
    if (iVar13 < iVar5) {
      uVar16 = 0xffffffff;
      do {
        lVar14 = *(longlong *)(param_1 + 0x30) + (longlong)iVar13 * 0x50;
        FUN_147ba6051(&local_d0,lVar14 + 0x10);
        uVar4 = FUN_147bacdf9(&local_d0);
        iVar5 = FUN_147bad1e4(&local_98,uVar4,&local_d0);
        lVar12 = *(longlong *)(param_1 + 0x218);
        lVar6 = (longlong)iVar5 * 0x58;
        puVar2 = (undefined4 *)(lVar12 + 0x10 + lVar6);
        *puVar2 = local_d0;
        puVar2[1] = uStack_cc;
        puVar2[2] = uStack_c8;
        puVar2[3] = uStack_c4;
        puVar3 = (undefined8 *)(lVar12 + 0x20 + lVar6);
        *puVar3 = local_c0;
        puVar3[1] = uStack_b8;
        puVar3 = (undefined8 *)(lVar12 + 0x30 + lVar6);
        *puVar3 = local_b0;
        puVar3[1] = uStack_a8;
        *(undefined8 *)(lVar12 + 0x40 + lVar6) = local_a0;
        *(longlong *)(lVar14 + 0x40) = lVar6 + *(longlong *)(param_1 + 0x218);
        uVar16 = ~(uint)uVar18 & uVar16;
        puVar11 = *(uint **)(param_1 + 0x50);
        if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
          puVar11 = puVar1;
        }
        iVar5 = *(int *)(param_1 + 0x58);
        iVar13 = (int)uVar15;
        lVar14 = (longlong)iVar13;
        uVar8 = puVar11[lVar14] & uVar16;
        if (uVar8 == 0) {
          iVar9 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar9 = iVar5 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar10 = iVar9;
          if (iVar9 < iVar13) {
            iVar10 = iVar13;
          }
          if (iVar9 <= iVar13) break;
          lVar12 = 0;
          while( true ) {
            iVar7 = iVar7 + 0x20;
            uVar8 = puVar11[lVar14 + lVar12 + 1];
            if (uVar8 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar10 - lVar14 == lVar12) goto LAB_14356839f;
          }
          uVar15 = (ulonglong)(iVar13 + (int)lVar12 + 1);
          uVar16 = 0xffffffff;
        }
        uVar18 = (ulonglong)(-uVar8 & uVar8);
        uVar17 = uVar18 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar13 = (iVar7 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar13 < iVar5);
    }
LAB_14356839f:
    if ((longlong)*(int *)(param_1 + 0x220) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x218);
      lVar12 = (longlong)*(int *)(param_1 + 0x220) * 0x58;
      do {
        FUN_140308182(lVar14,0);
        lVar14 = lVar14 + 0x58;
        lVar12 = lVar12 + -0x58;
      } while (lVar12 != 0);
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_147baca3e(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14356840a FUN_14356840a body=48 status=ok
// SIG undefined FUN_14356840a(void)

void FUN_14356840a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14356843a FUN_14356843a body=104 status=ok
// SIG undefined FUN_14356843a(void)

void FUN_14356843a(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_147ba53a7(param_1,param_2 + 4);
  return;
}



// FUNCTION 1435684a2 FUN_1435684a2 body=1478 status=ok
// SIG undefined FUN_1435684a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435684a2(int *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar24 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar25 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStack_188 [44];
  int local_15c;
  longlong local_158;
  longlong local_150;
  int local_148;
  int local_144;
  longlong *local_140;
  int *local_138;
  longlong local_130;
  ulonglong local_128;
  ulonglong local_120;
  longlong local_118;
  longlong local_110;
  undefined1 local_108 [16];
  ulonglong local_f0;
  float fVar29;
  float fVar33;
  float fVar34;
  float fVar35;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  *(longlong *)(param_1 + 0xc) = (longlong)param_1[9] + (longlong)param_1[5];
  bVar6 = FUN_14743059b(DAT_14ca85550);
  if ((((DAT_14c873908 == 8) && (DAT_14c760db4 == 1)) &&
      (((bVar6 | DAT_14c760e14 & DAT_14ca964f0) & 1) == 0)) && (0 < param_1[8])) {
    uVar13 = (ulonglong)(uint)param_1[8] * 2;
    local_108 = (undefined1  [16])0x0;
    uVar11 = (uint)uVar13;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar13);
    }
    uVar1 = (ulonglong)(*param_1 + -1 + (uint)(*param_1 == 0)) * 2 + 1;
    local_130 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> local_130 == 0; local_130 = local_130 + -1) {
      }
    }
    uVar15 = (uint)local_130;
    local_15c = 0x40;
    FUN_144893a1c(local_108);
    uVar4 = local_108._8_4_;
    lVar19 = (longlong)(int)local_108._8_4_;
    local_108._8_4_ = local_108._8_4_ + uVar11;
    if ((uint)(local_108._12_4_ - uVar4) < uVar11) {
      FUN_1447403be(local_108);
    }
    local_140 = (longlong *)(param_1 + 6);
    local_15c = local_15c - (uVar15 ^ 0x3f);
    uVar11 = 0;
    local_138 = param_1;
    memset((void *)(lVar19 + local_108._0_8_),0,uVar13 & 0xffffffff);
    auVar23 = pmovsxwd(in_XMM4,0x200020002000200);
    auVar24 = pmovsxwd(in_XMM5,0x7c007c007c007c00);
    auVar25 = pmovsxbd(unaff_XMM9,0x1010101);
    auVar26 = pmovsxwd(unaff_XMM12,0x8000800080008000);
    iVar7 = 0;
    iVar5 = 0;
    do {
      local_148 = iVar5;
      local_144 = iVar7;
      local_120 = (ulonglong)uVar11;
      iVar7 = (int)local_130 - local_144;
      bVar6 = (byte)iVar7;
      uVar15 = 1 << (bVar6 & 0x1f);
      uVar10 = uVar15 << (bVar6 & 0x1f);
      local_128 = (ulonglong)uVar10;
      if ((int)uVar15 < 2) {
        uVar15 = 1;
      }
      local_110 = (longlong)(int)(uVar10 * 4);
      local_150 = (longlong)(int)uVar11;
      local_118 = (longlong)(int)(uVar10 * 8);
      local_158 = (longlong)local_148;
      lVar19 = 0;
      do {
        if (iVar7 != 0x1f) {
          lVar2 = *local_140;
          uVar14 = 0;
          do {
            lVar9 = (longlong)(int)(uVar14 << (bVar6 & 0x1f));
            uVar13 = 0;
            do {
              uVar8 = *(uint *)(lVar2 + local_150 + lVar9 * 4 + uVar13 * 4);
              uVar16 = uVar8 & 0x3f;
              uVar12 = uVar8 >> 6 & 0x1f;
              if (uVar12 == 0) {
                if (uVar16 == 0) {
                  uVar12 = 0xffffff90;
                  uVar16 = 0;
                }
                else {
                  uVar17 = 0x1f;
                  if (uVar16 != 0) {
                    for (; uVar16 >> uVar17 == 0; uVar17 = uVar17 - 1) {
                    }
                  }
                  uVar12 = (uVar17 ^ 0xffffffe0) + 0x1b;
                  uVar16 = uVar8 << (~(byte)uVar17 + 7 & 0x1f) & 0x3e;
                }
LAB_143568774:
                uVar12 = uVar16 * 0x20000 + uVar12 * 0x800000 + 0x38000000;
              }
              else {
                if (uVar12 != 0x1f) goto LAB_143568774;
                uVar12 = uVar16 << 0x11 | 0x7f800000;
              }
              uVar16 = uVar8 >> 0xb & 0x3f;
              uVar17 = uVar8 >> 0x11 & 0x1f;
              if (uVar17 == 0) {
                if (uVar16 == 0) {
                  uVar17 = 0xffffff90;
                  uVar16 = 0;
                }
                else {
                  uVar18 = 0x1f;
                  if (uVar16 != 0) {
                    for (; uVar16 >> uVar18 == 0; uVar18 = uVar18 - 1) {
                    }
                  }
                  uVar17 = (uVar18 ^ 0xffffffe0) + 0x1b;
                  uVar16 = (uVar8 >> 0xb) << (~(byte)uVar18 + 7 & 0x1f) & 0x3e;
                }
LAB_1435687db:
                uVar16 = uVar16 * 0x20000 + uVar17 * 0x800000 + 0x38000000;
              }
              else {
                if (uVar17 != 0x1f) goto LAB_1435687db;
                uVar16 = uVar16 << 0x11 | 0x7f800000;
              }
              uVar17 = uVar8 >> 0x16 & 0x1f;
              uVar18 = uVar8 >> 0x1b;
              if (uVar18 == 0x1f) {
                uVar8 = uVar17 << 0x11 | 0x7f800000;
              }
              else {
                if (uVar8 < 0x8000000) {
                  if (uVar17 == 0) {
                    uVar18 = 0xffffff90;
                    uVar17 = 0;
                  }
                  else {
                    uVar3 = 0x1f;
                    if (uVar17 != 0) {
                      for (; uVar17 >> uVar3 == 0; uVar3 = uVar3 - 1) {
                      }
                    }
                    uVar18 = (uVar3 ^ 0xffffffe0) + 0x1c;
                    uVar17 = (uVar8 >> 0x16) << (~(byte)uVar3 + 6 & 0x1f) & 0x1e;
                  }
                }
                uVar8 = uVar17 * 0x40000 + uVar18 * 0x800000 + 0x38000000;
              }
              auVar27._4_4_ = uVar16;
              auVar27._0_4_ = uVar12;
              auVar27._8_4_ = uVar8;
              auVar27._12_4_ = 0;
              auVar27 = pblendw(auVar27,(undefined1  [16])0x0,0xc0);
              auVar21 = auVar27 & _DAT_1499319a0;
              fVar29 = auVar21._0_4_;
              auVar30._0_4_ = (uint)fVar29 >> 0xd;
              fVar33 = auVar21._4_4_;
              auVar30._4_4_ = (uint)fVar33 >> 0xd;
              fVar34 = auVar21._8_4_;
              fVar35 = auVar21._12_4_;
              auVar30._8_4_ = (uint)fVar34 >> 0xd;
              auVar30._12_4_ = (uint)fVar35 >> 0xd;
              auVar21._0_4_ =
                   -(uint)((float)((uint)((uint)fVar29 < 0x38800000) * 0x38800000 |
                                  (uint)((uint)fVar29 >= 0x38800000) * (int)fVar29) == fVar29);
              auVar21._4_4_ =
                   -(uint)((float)((uint)((uint)fVar33 < 0x38800000) * 0x38800000 |
                                  (uint)((uint)fVar33 >= 0x38800000) * (int)fVar33) == fVar33);
              auVar21._8_4_ =
                   -(uint)((float)((uint)((uint)fVar34 < 0x38800000) * 0x38800000 |
                                  (uint)((uint)fVar34 >= 0x38800000) * (int)fVar34) == fVar34);
              auVar21._12_4_ =
                   -(uint)((float)((uint)((uint)fVar35 < 0x38800000) * 0x38800000 |
                                  (uint)((uint)fVar35 >= 0x38800000) * (int)fVar35) == fVar35);
              auVar31 = auVar30 & auVar25;
              auVar20._0_4_ = (int)(fVar29 + 0.5) + -0x3f000000;
              auVar20._4_4_ = (int)(fVar33 + 0.5) + -0x3f000000;
              auVar20._8_4_ = (int)(fVar34 + 0.5) + -0x3f000000;
              auVar20._12_4_ = (int)(fVar35 + 0.5) + -0x3f000000;
              auVar32._0_4_ = auVar31._0_4_ + (int)fVar29 + 0xc8000fffU >> 0xd;
              auVar32._4_4_ = auVar31._4_4_ + (int)fVar33 + 0xc8000fffU >> 0xd;
              auVar32._8_4_ = auVar31._8_4_ + (int)fVar34 + 0xc8000fffU >> 0xd;
              auVar32._12_4_ = auVar31._12_4_ + (int)fVar35 + 0xc8000fffU >> 0xd;
              auVar21 = blendvps(auVar20,auVar32,auVar21);
              auVar31._0_4_ =
                   -(uint)((float)((uint)((uint)fVar29 < 0x47800000) * 0x47800000 |
                                  (uint)((uint)fVar29 >= 0x47800000) * (int)fVar29) == fVar29);
              auVar31._4_4_ =
                   -(uint)((float)((uint)((uint)fVar33 < 0x47800000) * 0x47800000 |
                                  (uint)((uint)fVar33 >= 0x47800000) * (int)fVar33) == fVar33);
              auVar31._8_4_ =
                   -(uint)((float)((uint)((uint)fVar34 < 0x47800000) * 0x47800000 |
                                  (uint)((uint)fVar34 >= 0x47800000) * (int)fVar34) == fVar34);
              auVar31._12_4_ =
                   -(uint)((float)((uint)((uint)fVar35 < 0x47800000) * 0x47800000 |
                                  (uint)((uint)fVar35 >= 0x47800000) * (int)fVar35) == fVar35);
              auVar22._4_4_ = -(uint)NAN(auVar27._4_4_);
              auVar22._0_4_ = -(uint)NAN(auVar27._0_4_);
              auVar22._8_4_ = -(uint)NAN(auVar27._8_4_);
              auVar22._12_4_ = -(uint)NAN(auVar27._12_4_);
              auVar28._0_4_ = (int)auVar27._0_4_ >> 0x10;
              auVar28._4_4_ = (int)auVar27._4_4_ >> 0x10;
              auVar28._8_4_ = (int)auVar27._8_4_ >> 0x10;
              auVar28._12_4_ = (int)auVar27._12_4_ >> 0x10;
              auVar21 = auVar28 & auVar26 |
                        ((auVar30 & _DAT_149d47680 | auVar23) & auVar22 | auVar24) & auVar31 |
                        ~auVar31 & auVar21;
              auVar21 = packssdw(auVar21,auVar21);
              *(longlong *)(lVar9 * 8 + local_108._0_8_ + local_158 + uVar13 * 8) = auVar21._0_8_;
              uVar13 = uVar13 + 1;
            } while (uVar15 != uVar13);
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar15);
        }
        lVar19 = lVar19 + 1;
        local_150 = local_150 + local_110;
        local_158 = local_158 + local_118;
      } while (lVar19 != 6);
      uVar11 = uVar11 + uVar10 * 0x18;
      iVar7 = local_144 + 1;
      iVar5 = uVar10 * 0x30 + local_148;
    } while (local_144 + 1 != local_15c);
    if (local_140 == (longlong *)local_108) {
      if (local_108._0_8_ != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*local_140 != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(local_138 + 6) = local_108._0_8_;
      local_138[8] = local_108._8_4_;
      local_138[9] = local_108._12_4_;
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143568a6a FUN_143568a6a body=1333 status=ok
// SIG undefined FUN_143568a6a(void)

void FUN_143568a6a(longlong param_1,undefined4 param_2)

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
  undefined ***pppuVar12;
  uint *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar17 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_143568aaa;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_143568aaf;
      goto LAB_143568b0f;
    }
  }
  else {
LAB_143568aaa:
    if (iVar5 != 0x10) {
LAB_143568b0f:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar17 + 0xc60), iVar5 == 2)) {
LAB_143568f3f:
          if ((longlong)*(int *)(param_1 + 0x220) != 0) {
            lVar17 = *(longlong *)(param_1 + 0x218);
            lVar14 = (longlong)*(int *)(param_1 + 0x220) * 0x58;
            do {
              *(char *)(lVar17 + 0xc) = (char)param_2;
              if ((*(int *)(lVar17 + 8) != -1) && (DAT_14ca84d88 == '\x01')) {
                FUN_14355ffb6(lVar17);
              }
              lVar17 = lVar17 + 0x58;
              lVar14 = lVar14 + -0x58;
            } while (lVar14 != 0);
          }
          goto LAB_143568bb8;
        }
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_143568f3f;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar9 = (uint *)*puVar2;
        if (puVar9 != (uint *)0x0) goto LAB_143568c79;
        while( true ) {
          uVar11 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar11 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar11 | 1;
            __tlregdtor(&LAB_14356943b);
          }
          lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar8 = *(undefined4 **)(lVar17 + 0x310);
          *(undefined8 *)(lVar17 + 0x310) = 0;
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar8 = 0xffffffff;
          *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
          puVar8[0x12] = 0;
          *puVar2 = puVar8;
          FUN_140217a48(puVar2);
          puVar9 = (uint *)*puVar2;
LAB_143568c79:
          puVar15 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar13 = (uint *)(puVar15 + 0x17);
          uVar11 = puVar9[0x12];
          if (puVar13 <= puVar9 + 0x4000) break;
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
            puVar15 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
            puVar13 = (uint *)(puVar15 + 0x17);
            uVar11 = 0;
            if (puVar13 <= puVar9 + 0x4000) {
              uVar11 = 1;
              goto LAB_143568cf9;
            }
          }
        }
        uVar11 = uVar11 + 1;
LAB_143568cf9:
        *(uint **)(puVar9 + 0x10) = puVar13;
        puVar9[0x12] = uVar11;
        iVar5 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14a9c41d0;
        puVar15[0x15] = param_1 + 0x218;
        *(undefined4 *)(puVar15 + 0x16) = param_2;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar11 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar11 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar11];
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
        if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
        }
        puVar15[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar15[9] = puVar15;
        puVar15[10] = puVar15;
        lVar17 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar17 == 0) {
          uVar4 = 1;
          if ((char)uVar16 != '\x06') {
            uVar4 = uVar16;
          }
          uVar16 = uVar4;
          uVar10 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar17 + 0x38) >> 0x3b;
          }
          uVar10 = *(undefined8 *)(lVar17 + 0x30);
        }
        puVar15[0xf] = uVar10;
        puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar5;
        if (puVar15 == (undefined8 *)0x0) {
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar15);
          LOCK();
          piVar1 = (int *)(puVar15 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar15)(puVar15,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a9c4170;
        local_68[0] = FUN_143569566;
        local_40 = param_1 + 0x218;
        local_38 = param_2;
        FUN_14005a792(&DAT_14ca9a440,L"SetFeatureLevelAndInitialize",&DAT_14cae9bfc);
        if (local_68[0] != (code *)0x0) {
          pppuVar12 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar12 = &local_48;
          }
          (*(code *)(*pppuVar12)[2])();
        }
      }
      goto LAB_143568bb8;
    }
  }
LAB_143568aaf:
  if ((longlong)*(int *)(param_1 + 0x220) != 0) {
    lVar17 = *(longlong *)(param_1 + 0x218);
    lVar14 = (longlong)*(int *)(param_1 + 0x220) * 0x58;
    do {
      *(char *)(lVar17 + 0xc) = (char)param_2;
      if ((*(int *)(lVar17 + 8) != -1) && (DAT_14ca84d88 == '\x01')) {
        FUN_14355ffb6(lVar17);
      }
      lVar17 = lVar17 + 0x58;
      lVar14 = lVar14 + -0x58;
    } while (lVar14 != 0);
  }
LAB_143568bb8:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143568fd0 FUN_143568fd0 body=520 status=ok
// SIG undefined FUN_143568fd0(void)

void FUN_143568fd0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_2c8 [32];
  longlong local_2a8 [2];
  undefined2 *local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined2 *local_280;
  undefined2 *local_278;
  ulonglong *local_270;
  char local_268;
  undefined2 local_260 [256];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  FUN_1401b2056();
  local_2a8[0] = 0;
  local_2a8[1] = 0;
  iVar2 = *(int *)(param_1 + 0x398);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x390) + lVar3 * 8);
      if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1c8) != 0)) &&
         (*(char *)(*(longlong *)(lVar1 + 0x1c8) + 0x1fb) == '\0')) {
        local_298 = (undefined2 *)0x0;
        uStack_290 = 0;
        FUN_14005eb28(local_2a8 + 2,0x80);
        local_268 = '\0';
        local_270 = local_60;
        local_288 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x18);
        local_280 = local_260;
        local_278 = local_260;
        FUN_14005eb5c(&local_288,&local_280);
        if (local_270 <= local_278 + 1) {
          FUN_140213274(&local_280,1);
        }
        *local_278 = 0x20;
        local_278 = local_278 + 1;
        FUN_144750bde(lVar1,0,&local_280);
        FUN_1400020e8(local_2a8 + 2,local_280,
                      (ulonglong)((longlong)local_278 - (longlong)local_280) >> 1);
        if (local_268 == '\x01') {
          FUN_1400020a8(local_280);
        }
        puVar4 = &DAT_149dfb77a;
        if ((int)uStack_290 != 0) {
          puVar4 = local_298;
        }
        FUN_140002266(&local_280,&DAT_14a9c4016,puVar4);
        iVar2 = (int)local_278 + -1;
        if ((int)local_278 == 0) {
          iVar2 = 0;
        }
        FUN_1400020e8(local_2a8,local_280,iVar2);
        if (local_280 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_298 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        iVar2 = *(int *)(param_1 + 0x398);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
    if (local_2a8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60[0] ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435691da FUN_1435691da body=29 status=ok
// SIG undefined FUN_1435691da(void)

undefined8 FUN_1435691da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435691f8 FUN_1435691f8 body=48 status=ok
// SIG undefined FUN_1435691f8(void)

longlong FUN_1435691f8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14151ef9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143569228 FUN_143569228 body=48 status=ok
// SIG undefined FUN_143569228(void)

longlong FUN_143569228(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145cb2f98(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143569258 FUN_143569258 body=48 status=ok
// SIG undefined FUN_143569258(void)

longlong FUN_143569258(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_145cb2f98(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


