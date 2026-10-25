// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1436621ec FUN_1436621ec body=29 status=ok
// SIG undefined FUN_1436621ec(void)

undefined8 FUN_1436621ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14366220a FUN_14366220a body=282 status=ok
// SIG undefined FUN_14366220a(void)

undefined8 * FUN_14366220a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14365fa42);
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



// FUNCTION 143662324 FUN_143662324 body=150 status=ok
// SIG undefined FUN_143662324(void)

void FUN_143662324(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = param_1[0x15];
  if (*(uint *)(param_1 + 0x16) != (uint)*(byte *)(lVar2 + 0x80)) {
    *(char *)(lVar2 + 0x80) = (char)*(uint *)(param_1 + 0x16);
    if (*(longlong *)(lVar2 + 0x218) != 0) {
      (**(code **)(**(longlong **)(lVar2 + 0x210) + 0x4c0))();
      (**(code **)(**(longlong **)(lVar2 + 0x210) + 0x4b8))
                (*(longlong **)(lVar2 + 0x210),*(undefined8 *)(lVar2 + 0x218),8);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436623af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1436623ba FUN_1436623ba body=78 status=ok
// SIG undefined FUN_1436623ba(void)

void FUN_1436623ba(longlong *param_1)

{
  *(char *)(*param_1 + 0x82) = (char)param_1[1];
  if (param_1[3] != 0) {
    (**(code **)(*(longlong *)param_1[2] + 0x4c0))();
                    /* WARNING: Could not recover jumptable at 0x0001436623fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[2] + 0x4b8))((longlong *)param_1[2],param_1[3],8);
    return;
  }
  return;
}



// FUNCTION 143662412 FUN_143662412 body=29 status=ok
// SIG undefined FUN_143662412(void)

void FUN_143662412(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143662430 FUN_143662430 body=29 status=ok
// SIG undefined FUN_143662430(void)

undefined8 FUN_143662430(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14366244e FUN_14366244e body=282 status=ok
// SIG undefined FUN_14366244e(void)

undefined8 * FUN_14366244e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14365fa42);
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



// FUNCTION 143662568 FUN_143662568 body=136 status=ok
// SIG undefined FUN_143662568(void)

void FUN_143662568(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1[0x15] + 0x82) = *(undefined1 *)(param_1 + 0x16);
  if (param_1[0x18] != 0) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x4c0))();
    (**(code **)(*(longlong *)param_1[0x17] + 0x4b8))((longlong *)param_1[0x17],param_1[0x18],8);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436625e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14366261c FUN_14366261c body=12 status=ok
// SIG undefined FUN_14366261c(void)

void FUN_14366261c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143662625. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143662628 FUN_143662628 body=29 status=ok
// SIG undefined FUN_143662628(void)

undefined8 FUN_143662628(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143662646 FUN_143662646 body=282 status=ok
// SIG undefined FUN_143662646(void)

undefined8 * FUN_143662646(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14365fa42);
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



// FUNCTION 143662760 FUN_143662760 body=96 status=ok
// SIG undefined FUN_143662760(void)

void FUN_143662760(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  plVar2 = *(longlong **)(param_1[0x15] + 0x210);
  (**(code **)(*plVar2 + 0x278))(plVar2,*(undefined8 *)(param_1[0x15] + 0x218),0);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436627b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1436627c0 FUN_1436627c0 body=110 status=ok
// SIG undefined FUN_1436627c0(void)

void FUN_1436627c0(longlong *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*param_1 + 0x75);
  if ((bVar1 >> 2 & 1) == *(byte *)(param_1 + 1)) {
    return;
  }
  *(byte *)(*param_1 + 0x75) = bVar1 & 0xfb | *(byte *)(param_1 + 1) << 2;
  if (param_1[3] != 0) {
    (**(code **)(*(longlong *)param_1[2] + 0x4c0))();
    (**(code **)(*(longlong *)param_1[2] + 0x4b8))((longlong *)param_1[2],param_1[3],8);
  }
                    /* WARNING: Could not recover jumptable at 0x000143662827. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x230))();
  return;
}



// FUNCTION 143662838 FUN_143662838 body=29 status=ok
// SIG undefined FUN_143662838(void)

void FUN_143662838(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143662856 FUN_143662856 body=29 status=ok
// SIG undefined FUN_143662856(void)

undefined8 FUN_143662856(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143662874 FUN_143662874 body=282 status=ok
// SIG undefined FUN_143662874(void)

undefined8 * FUN_143662874(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14365fa42);
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



// FUNCTION 14366298e FUN_14366298e body=176 status=ok
// SIG undefined FUN_14366298e(void)

void FUN_14366298e(undefined8 *param_1)

{
  int *piVar1;
  byte bVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  bVar2 = *(byte *)(param_1[0x15] + 0x75);
  if ((bVar2 >> 2 & 1) != *(byte *)(param_1 + 0x16)) {
    *(byte *)(param_1[0x15] + 0x75) = bVar2 & 0xfb | *(byte *)(param_1 + 0x16) << 2;
    if (param_1[0x18] != 0) {
      (**(code **)(*(longlong *)param_1[0x17] + 0x4c0))();
      (**(code **)(*(longlong *)param_1[0x17] + 0x4b8))((longlong *)param_1[0x17],param_1[0x18],8);
    }
    (**(code **)(*(longlong *)param_1[0x15] + 0x230))();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143662a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143662a5e FUN_143662a5e body=12 status=ok
// SIG undefined FUN_143662a5e(void)

void FUN_143662a5e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143662a67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143662a6a FUN_143662a6a body=29 status=ok
// SIG undefined FUN_143662a6a(void)

undefined8 FUN_143662a6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143662a88 FUN_143662a88 body=282 status=ok
// SIG undefined FUN_143662a88(void)

undefined8 * FUN_143662a88(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14365fa42);
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



// FUNCTION 143662bea FUN_143662bea body=814 status=ok
// SIG undefined FUN_143662bea(void)

void FUN_143662bea(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  lVar2 = *param_1;
  if (*(longlong *)(lVar2 + 0x220) != param_1[1]) {
    *(longlong *)(lVar2 + 0x220) = param_1[1];
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cafe1e8) {
      FUN_144b3d300(&DAT_14cafe1e8);
      if (DAT_14cafe1e8 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar6 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"r.gbx.ProjectMaskedDigistructEnable",1);
        if (plVar6 == (longlong *)0x0) {
          DAT_14cafe1e0 = 0;
        }
        else {
          DAT_14cafe1e0 = (**(code **)(*plVar6 + 0x68))(plVar6);
        }
        _Init_thread_footer(&DAT_14cafe1e8);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cafe1f0) {
      FUN_144b3d300(&DAT_14cafe1f0);
      lVar3 = DAT_14cafe1e0;
      if (DAT_14cafe1f0 == -1) {
        iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
          uVar7 = 0;
        }
        else if (iVar1 == 1) {
          DVar4 = FUN_140ad26c0();
          DVar5 = GetCurrentThreadId();
          uVar7 = (ulonglong)(DVar4 != DVar5);
        }
        else {
          uVar7 = 1;
        }
        DAT_14cafe1ec = *(int *)(lVar3 + uVar7 * 4) != 0;
        _Init_thread_footer(&DAT_14cafe1f0);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cafe200) {
      FUN_144b3d300(&DAT_14cafe200);
      if (DAT_14cafe200 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar6 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"r.gbx.ProjectTranslucencyDigistructEnable",1);
        if (plVar6 == (longlong *)0x0) {
          DAT_14cafe1f8 = 0;
        }
        else {
          DAT_14cafe1f8 = (**(code **)(*plVar6 + 0x68))(plVar6);
        }
        _Init_thread_footer(&DAT_14cafe200);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cafe208) {
      FUN_144b3d300(&DAT_14cafe208);
      lVar3 = DAT_14cafe1f8;
      if (DAT_14cafe208 == -1) {
        iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
          uVar7 = 0;
        }
        else if (iVar1 == 1) {
          DVar4 = FUN_140ad26c0();
          DVar5 = GetCurrentThreadId();
          uVar7 = (ulonglong)(DVar4 != DVar5);
        }
        else {
          uVar7 = 1;
        }
        DAT_14cafe204 = *(int *)(lVar3 + uVar7 * 4) != 0;
        _Init_thread_footer(&DAT_14cafe208);
      }
    }
    if ((*(longlong *)(lVar2 + 0x218) != 0) &&
       ((DAT_14cafe1ec != '\0' || (DAT_14cafe204 == '\x01')))) {
      (**(code **)(**(longlong **)(lVar2 + 0x210) + 0x4c0))();
                    /* WARNING: Could not recover jumptable at 0x000143662cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(lVar2 + 0x210) + 0x4b8))
                (*(longlong **)(lVar2 + 0x210),*(undefined8 *)(lVar2 + 0x218),8);
      return;
    }
  }
  return;
}



// FUNCTION 143662f28 FUN_143662f28 body=12 status=ok
// SIG undefined FUN_143662f28(void)

void FUN_143662f28(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143662f31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143662f34 FUN_143662f34 body=29 status=ok
// SIG undefined FUN_143662f34(void)

undefined8 FUN_143662f34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143662f52 FUN_143662f52 body=282 status=ok
// SIG undefined FUN_143662f52(void)

undefined8 * FUN_143662f52(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14365fa42);
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



// FUNCTION 14366306c FUN_14366306c body=91 status=ok
// SIG undefined FUN_14366306c(void)

void FUN_14366306c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143662bea(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143662bea(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436630a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1436630c8 FUN_1436630c8 body=814 status=ok
// SIG undefined FUN_1436630c8(void)

void FUN_1436630c8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  lVar2 = *param_1;
  if (*(longlong *)(lVar2 + 0x228) != param_1[1]) {
    *(longlong *)(lVar2 + 0x228) = param_1[1];
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cafe218) {
      FUN_144b3d300(&DAT_14cafe218);
      if (DAT_14cafe218 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar6 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"r.gbx.ProjectMaskedDigistructEnable",1);
        if (plVar6 == (longlong *)0x0) {
          DAT_14cafe210 = 0;
        }
        else {
          DAT_14cafe210 = (**(code **)(*plVar6 + 0x68))(plVar6);
        }
        _Init_thread_footer(&DAT_14cafe218);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cafe220) {
      FUN_144b3d300(&DAT_14cafe220);
      lVar3 = DAT_14cafe210;
      if (DAT_14cafe220 == -1) {
        iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
          uVar7 = 0;
        }
        else if (iVar1 == 1) {
          DVar4 = FUN_140ad26c0();
          DVar5 = GetCurrentThreadId();
          uVar7 = (ulonglong)(DVar4 != DVar5);
        }
        else {
          uVar7 = 1;
        }
        DAT_14cafe21c = *(int *)(lVar3 + uVar7 * 4) != 0;
        _Init_thread_footer(&DAT_14cafe220);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cafe230) {
      FUN_144b3d300(&DAT_14cafe230);
      if (DAT_14cafe230 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar6 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"r.gbx.ProjectTranslucencyDigistructEnable",1);
        if (plVar6 == (longlong *)0x0) {
          DAT_14cafe228 = 0;
        }
        else {
          DAT_14cafe228 = (**(code **)(*plVar6 + 0x68))(plVar6);
        }
        _Init_thread_footer(&DAT_14cafe230);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cafe238) {
      FUN_144b3d300(&DAT_14cafe238);
      lVar3 = DAT_14cafe228;
      if (DAT_14cafe238 == -1) {
        iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
          uVar7 = 0;
        }
        else if (iVar1 == 1) {
          DVar4 = FUN_140ad26c0();
          DVar5 = GetCurrentThreadId();
          uVar7 = (ulonglong)(DVar4 != DVar5);
        }
        else {
          uVar7 = 1;
        }
        DAT_14cafe234 = *(int *)(lVar3 + uVar7 * 4) != 0;
        _Init_thread_footer(&DAT_14cafe238);
      }
    }
    if ((*(longlong *)(lVar2 + 0x218) != 0) &&
       ((DAT_14cafe21c != '\0' || (DAT_14cafe234 == '\x01')))) {
      (**(code **)(**(longlong **)(lVar2 + 0x210) + 0x4c0))();
                    /* WARNING: Could not recover jumptable at 0x0001436631ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(lVar2 + 0x210) + 0x4b8))
                (*(longlong **)(lVar2 + 0x210),*(undefined8 *)(lVar2 + 0x218),8);
      return;
    }
  }
  return;
}



// FUNCTION 143663406 FUN_143663406 body=12 status=ok
// SIG undefined FUN_143663406(void)

void FUN_143663406(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014366340f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143663412 FUN_143663412 body=29 status=ok
// SIG undefined FUN_143663412(void)

undefined8 FUN_143663412(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143663430 FUN_143663430 body=282 status=ok
// SIG undefined FUN_143663430(void)

undefined8 * FUN_143663430(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14365fa42);
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



// FUNCTION 14366354a FUN_14366354a body=91 status=ok
// SIG undefined FUN_14366354a(void)

void FUN_14366354a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1436630c8(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1436630c8(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143663586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1436635f2 FUN_1436635f2 body=547 status=ok
// SIG undefined FUN_1436635f2(void)

longlong * FUN_1436635f2(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
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
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 143663816 FUN_143663816 body=2904 status=ok
// SIG undefined FUN_143663816(void)

void FUN_143663816(longlong param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  void *_Src;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  undefined2 *puVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM10_Qa;
  undefined4 unaff_XMM12_Da;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM13_Da;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM15_Da;
  undefined4 unaff_XMM15_Db;
  undefined1 auStack_5a8 [32];
  undefined8 local_588;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  double local_560;
  double local_558;
  undefined8 local_550;
  undefined1 local_548 [8];
  undefined2 *local_540;
  int local_538;
  undefined2 *local_530;
  int local_528;
  undefined4 local_524;
  undefined2 *local_520;
  int local_518;
  int local_514;
  undefined2 *local_510;
  undefined8 local_508;
  ulonglong *local_500;
  char local_4f8;
  undefined2 local_4f0 [138];
  undefined1 local_3db [747];
  ulonglong local_f0 [22];
  
  local_f0[0] = DAT_14c707940 ^ (ulonglong)auStack_5a8;
  plVar5 = *(longlong **)(param_1 + 0xa8);
  puVar9 = (undefined8 *)FUN_14047ac8c();
  iVar8 = *(int *)(puVar9 + 1);
  lVar14 = (longlong)iVar8;
  local_510 = (undefined2 *)0x0;
  _Src = (void *)*puVar9;
  local_508 = (undefined2 *)CONCAT44(local_508._4_4_,iVar8);
  FUN_1446dd670(&local_510,(uint)(lVar14 == 0) + iVar8 + 10,0);
  if (lVar14 != 0) {
    memcpy(local_510,_Src,lVar14 * 2);
  }
  FUN_1400020e8(&local_510,L"Profiling/",10);
  iVar8 = (int)local_508;
  iVar7 = ((int)local_508 == 0) + 0xf;
  local_520 = local_510;
  local_510 = (undefined2 *)0x0;
  local_518 = (int)local_508;
  iVar13 = local_508._4_4_;
  local_514 = local_508._4_4_;
  local_508 = (undefined2 *)0x0;
  iVar11 = iVar7 + iVar8;
  if (iVar11 < iVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  if (iVar11 < 0) {
LAB_14366433f:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  if (iVar13 < iVar11) {
    FUN_1446f8c06(&local_520);
  }
  FUN_1401aebe8(&local_520,L"LevelStreaming",0xe);
  if (local_510 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar10 = (longlong *)FUN_14054d1d4();
  puVar12 = &DAT_149dfb77a;
  if (local_518 != 0) {
    puVar12 = local_520;
  }
  (**(code **)(*plVar10 + 0x58))(plVar10,puVar12,1);
  FUN_1402160b8(local_548);
  FUN_14047ad2e(local_548,&local_540,L"%Y%m%d_%H%M%S");
  puVar12 = &DAT_149dfb77a;
  if (local_538 != 0) {
    puVar12 = local_540;
  }
  FUN_140002266(&local_510,L"LevelStreaming_(%s).tsv",puVar12);
  iVar8 = local_518;
  puVar12 = local_520;
  iVar13 = (int)local_508 + -1;
  if ((int)local_508 == 0) {
    iVar13 = 0;
  }
  lVar14 = (longlong)local_518;
  iVar7 = iVar13 + 1 + (uint)(lVar14 == 0);
  local_530 = (undefined2 *)0x0;
  local_528 = local_518;
  if (iVar7 == 0 && local_518 == 0) {
    local_524 = 0;
  }
  else {
    iVar11 = iVar7 + local_518;
    if (iVar7 < 0) goto LAB_14366433f;
    FUN_1446dd670(&local_530,iVar11,0);
    if (iVar8 != 0) {
      memcpy(local_530,puVar12,lVar14 * 2);
    }
  }
  FUN_1401aebe8(&local_530,local_510,iVar13);
  if (local_510 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_540 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar10 = (longlong *)FUN_14054d1d4();
  puVar12 = local_530;
  if (local_528 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  plVar10 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10,puVar12,0);
  if (plVar10 != (longlong *)0x0) {
    local_510 = local_4f0;
    local_4f8 = '\0';
    local_500 = local_f0;
    memcpy(local_510,
           "NameOnDisk\tNameInMemory\tTimeQueuedForLoadingMS\tTimeLoadingMS\tTimeQueuedForAddToWorldMS\tTimeAddingToWorldMS\tTimeInWorldS\tTimeQueuedForRemoveFromWorldMS\tTimeRemovingFromWorldMS\tStreamInDistance_Cell\tStreamInDistance_Content\tStreamInSourceLocation\tCellBounds\tContentBounds\tbIsHLOD"
           ,0x115);
    local_508 = (undefined2 *)local_3db;
    (**(code **)(*plVar5 + 0x2f0))(plVar5,&local_510);
    (**(code **)(*plVar10 + 0x170))(plVar10,local_510,(longlong)((int)local_508 - (int)local_510));
    (**(code **)(*plVar10 + 0x170))(plVar10,&DAT_149dfc0af,1);
    local_508 = local_510;
    iVar8 = (int)plVar5[0x16];
    if (0 < iVar8) {
      lVar14 = 0;
      uVar16 = 0;
      do {
        lVar6 = plVar5[0x15];
        if (*(char *)(lVar6 + 0x131 + lVar14) == '\x01') {
          FUN_14001b87a(lVar6 + lVar14,&local_510);
          if (local_500 <= (ulonglong *)((longlong)local_508 + 1)) {
            FUN_1402134d6(&local_510,1);
          }
          *(undefined1 *)local_508 = 9;
          lVar15 = lVar14 + 8 + lVar6;
          local_508 = (undefined2 *)((longlong)local_508 + 1);
          FUN_14001b87a(lVar15,&local_510);
          cVar4 = *(char *)(lVar15 + 0x80);
          if (cVar4 == '\x01') {
            local_558 = *(double *)(lVar6 + 0x80 + lVar14);
          }
          if (local_500 <= (ulonglong *)((longlong)local_508 + 1)) {
            FUN_1402134d6(&local_510,1);
          }
          puVar1 = (undefined1 *)((longlong)local_508 + 1);
          *(undefined1 *)local_508 = 9;
          local_508 = (undefined2 *)puVar1;
          if (cVar4 != '\0') {
            FUN_140850d22(&local_510,&DAT_14aa5a41c,local_558 * 1000.0);
          }
          cVar4 = *(char *)(lVar6 + 0x98 + lVar14);
          if (cVar4 == '\x01') {
            uVar3 = *(undefined8 *)(lVar6 + 0x90 + lVar14);
            unaff_XMM12_Da = (undefined4)uVar3;
            unaff_XMM12_Db = (undefined4)((ulonglong)uVar3 >> 0x20);
          }
          if (local_500 <= (ulonglong *)((longlong)local_508 + 1)) {
            FUN_1402134d6(&local_510,1);
          }
          puVar1 = (undefined1 *)((longlong)local_508 + 1);
          *(undefined1 *)local_508 = 9;
          local_508 = (undefined2 *)puVar1;
          if (cVar4 != '\0') {
            FUN_140850d22(&local_510,&DAT_14aa5a41c,
                          (double)CONCAT44(unaff_XMM12_Db,unaff_XMM12_Da) * 1000.0);
          }
          cVar4 = *(char *)(lVar6 + 0xa8 + lVar14);
          if (cVar4 == '\x01') {
            uVar3 = *(undefined8 *)(lVar6 + 0xa0 + lVar14);
            unaff_XMM14_Da = (undefined4)uVar3;
            unaff_XMM14_Db = (undefined4)((ulonglong)uVar3 >> 0x20);
          }
          if (local_500 <= (ulonglong *)((longlong)local_508 + 1)) {
            FUN_1402134d6(&local_510,1);
          }
          puVar1 = (undefined1 *)((longlong)local_508 + 1);
          *(undefined1 *)local_508 = 9;
          local_508 = (undefined2 *)puVar1;
          if (cVar4 != '\0') {
            FUN_140850d22(&local_510,&DAT_14aa5a41c,
                          (double)CONCAT44(unaff_XMM14_Db,unaff_XMM14_Da) * 1000.0);
          }
          cVar4 = *(char *)(lVar6 + 0xb8 + lVar14);
          if (cVar4 == '\x01') {
            uVar3 = *(undefined8 *)(lVar6 + 0xb0 + lVar14);
            unaff_XMM13_Da = (undefined4)uVar3;
            unaff_XMM13_Db = (undefined4)((ulonglong)uVar3 >> 0x20);
          }
          if (local_500 <= (ulonglong *)((longlong)local_508 + 1)) {
            FUN_1402134d6(&local_510,1);
          }
          puVar1 = (undefined1 *)((longlong)local_508 + 1);
          *(undefined1 *)local_508 = 9;
          local_508 = (undefined2 *)puVar1;
          if (cVar4 != '\0') {
            FUN_140850d22(&local_510,&DAT_14aa5a41c,
                          (double)CONCAT44(unaff_XMM13_Db,unaff_XMM13_Da) * 1000.0);
          }
          cVar4 = *(char *)(lVar6 + 200 + lVar14);
          if (cVar4 == '\x01') {
            unaff_XMM10_Qa = *(undefined8 *)(lVar6 + 0xc0 + lVar14);
          }
          if (local_500 <= (ulonglong *)((longlong)local_508 + 1)) {
            FUN_1402134d6(&local_510,1);
          }
          puVar1 = (undefined1 *)((longlong)local_508 + 1);
          *(undefined1 *)local_508 = 9;
          local_508 = (undefined2 *)puVar1;
          if (cVar4 != '\0') {
            FUN_140850d22(&local_510,&DAT_14aa5a41c,unaff_XMM10_Qa);
          }
          cVar4 = *(char *)(lVar6 + 0xd8 + lVar14);
          if (cVar4 == '\x01') {
            uVar3 = *(undefined8 *)(lVar6 + 0xd0 + lVar14);
            unaff_XMM15_Da = (undefined4)uVar3;
            unaff_XMM15_Db = (undefined4)((ulonglong)uVar3 >> 0x20);
          }
          if (local_500 <= (ulonglong *)((longlong)local_508 + 1)) {
            FUN_1402134d6(&local_510,1);
          }
          puVar1 = (undefined1 *)((longlong)local_508 + 1);
          *(undefined1 *)local_508 = 9;
          local_508 = (undefined2 *)puVar1;
          if (cVar4 != '\0') {
            FUN_140850d22(&local_510,&DAT_14aa5a41c,
                          (double)CONCAT44(unaff_XMM15_Db,unaff_XMM15_Da) * 1000.0);
          }
          cVar4 = *(char *)(lVar6 + 0xe8 + lVar14);
          if (cVar4 == '\x01') {
            local_560 = *(double *)(lVar6 + 0xe0 + lVar14);
          }
          if (local_500 <= (ulonglong *)((longlong)local_508 + 1)) {
            FUN_1402134d6(&local_510,1);
          }
          puVar1 = (undefined1 *)((longlong)local_508 + 1);
          *(undefined1 *)local_508 = 9;
          local_508 = (undefined2 *)puVar1;
          if (cVar4 != '\0') {
            FUN_140850d22(&local_510,&DAT_14aa5a41c,local_560 * 1000.0);
          }
          cVar4 = *(char *)(lVar6 + 0xf8 + lVar14);
          if (cVar4 == '\x01') {
            unaff_XMM9_Qa = *(undefined8 *)(lVar6 + 0xf0 + lVar14);
          }
          if (local_500 <= (ulonglong *)((longlong)local_508 + 1)) {
            FUN_1402134d6(&local_510,1);
          }
          puVar1 = (undefined1 *)((longlong)local_508 + 1);
          *(undefined1 *)local_508 = 9;
          local_508 = (undefined2 *)puVar1;
          if (cVar4 != '\0') {
            FUN_140850d22(&local_510,&DAT_14aa5a41c,unaff_XMM9_Qa);
          }
          cVar4 = *(char *)(lVar6 + 0x108 + lVar14);
          if (cVar4 == '\x01') {
            unaff_XMM8_Qa = *(undefined8 *)(lVar6 + 0x100 + lVar14);
          }
          if (local_500 <= (ulonglong *)((longlong)local_508 + 1)) {
            FUN_1402134d6(&local_510,1);
          }
          puVar1 = (undefined1 *)((longlong)local_508 + 1);
          *(undefined1 *)local_508 = 9;
          local_508 = (undefined2 *)puVar1;
          if (cVar4 != '\0') {
            FUN_140850d22(&local_510,&DAT_14aa5a41c,unaff_XMM8_Qa);
          }
          cVar4 = *(char *)(lVar6 + 0x128 + lVar14);
          if (cVar4 == '\x01') {
            unaff_XMM6_Qa = *(undefined8 *)(lVar6 + 0x110 + lVar14);
            unaff_XMM7_Qa = *(undefined8 *)(lVar6 + 0x118 + lVar14);
            local_550 = *(undefined8 *)(lVar6 + 0x120 + lVar14);
          }
          if (local_500 <= (ulonglong *)((longlong)local_508 + 1)) {
            FUN_1402134d6(&local_510,1);
          }
          puVar1 = (undefined1 *)((longlong)local_508 + 1);
          *(undefined1 *)local_508 = 9;
          local_508 = (undefined2 *)puVar1;
          if (cVar4 != '\0') {
            local_588 = local_550;
            FUN_140850d22(&local_510,"%.0f,%.0f,%.0f",unaff_XMM6_Qa,unaff_XMM7_Qa);
          }
          if (local_500 <= (ulonglong *)((longlong)local_508 + 1)) {
            FUN_1402134d6(&local_510,1);
          }
          puVar1 = (undefined1 *)((longlong)local_508 + 1);
          *(undefined1 *)local_508 = 9;
          local_508 = (undefined2 *)puVar1;
          if (*(char *)(lVar6 + 0x40 + lVar14) != '\0') {
            puVar2 = (undefined4 *)(lVar6 + 0x30 + lVar14);
            local_578 = *puVar2;
            uStack_574 = puVar2[1];
            uStack_570 = puVar2[2];
            uStack_56c = puVar2[3];
            puVar9 = (undefined8 *)(lVar6 + 0x20 + lVar14);
            local_588 = *puVar9;
            uStack_580 = *(undefined4 *)(puVar9 + 1);
            uStack_57c = *(undefined4 *)((longlong)puVar9 + 0xc);
            FUN_140850d22(&local_510,"%.0f,%.0f,%.0f,%.0f,%.0f,%.0f",
                          *(undefined8 *)(lVar6 + 0x10 + lVar14),
                          *(undefined8 *)(lVar6 + 0x18 + lVar14));
          }
          if (local_500 <= (ulonglong *)((longlong)local_508 + 1)) {
            FUN_1402134d6(&local_510,1);
          }
          puVar1 = (undefined1 *)((longlong)local_508 + 1);
          *(undefined1 *)local_508 = 9;
          local_508 = (undefined2 *)puVar1;
          if (*(char *)(lVar6 + 0x78 + lVar14) != '\0') {
            puVar2 = (undefined4 *)(lVar6 + 0x68 + lVar14);
            local_578 = *puVar2;
            uStack_574 = puVar2[1];
            uStack_570 = puVar2[2];
            uStack_56c = puVar2[3];
            puVar9 = (undefined8 *)(lVar6 + 0x58 + lVar14);
            local_588 = *puVar9;
            uStack_580 = *(undefined4 *)(puVar9 + 1);
            uStack_57c = *(undefined4 *)((longlong)puVar9 + 0xc);
            FUN_140850d22(&local_510,"%.0f,%.0f,%.0f,%.0f,%.0f,%.0f",
                          *(undefined8 *)(lVar6 + 0x48 + lVar14),
                          *(undefined8 *)(lVar6 + 0x50 + lVar14));
          }
          if (local_500 <= (ulonglong *)((longlong)local_508 + 1)) {
            FUN_1402134d6(&local_510,1);
          }
          *(undefined1 *)local_508 = 9;
          local_508 = (undefined2 *)((longlong)local_508 + 1);
          FUN_140850d22(&local_510,&DAT_149dfc0ac,*(undefined1 *)(lVar6 + 0x130 + lVar14));
          (**(code **)(*plVar5 + 0x2f8))(plVar5,&local_510,uVar16 & 0xffffffff);
          (**(code **)(*plVar10 + 0x170))
                    (plVar10,local_510,(longlong)((int)local_508 - (int)local_510));
          (**(code **)(*plVar10 + 0x170))(plVar10,&DAT_149dfc0af,1);
          local_508 = local_510;
          iVar8 = (int)plVar5[0x16];
        }
        uVar16 = uVar16 + 1;
        lVar14 = lVar14 + 0x138;
      } while ((longlong)uVar16 < (longlong)iVar8);
    }
    (**(code **)(*plVar5 + 0x2e0))(plVar5);
    if (local_4f8 == '\x01') {
      FUN_1400020a8(local_510);
    }
    (**(code **)*plVar10)(plVar10,1);
  }
  if (local_530 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_520 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0[0] ^ (ulonglong)auStack_5a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143664370 FUN_143664370 body=110 status=ok
// SIG undefined FUN_143664370(void)

undefined8 * FUN_143664370(undefined8 *param_1,int param_2)

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



// FUNCTION 1436643de FUN_1436643de body=29 status=ok
// SIG undefined FUN_1436643de(void)

undefined8 FUN_1436643de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143664410 FUN_143664410 body=85 status=ok
// SIG undefined FUN_143664410(void)

void FUN_143664410(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa5a450;
  return;
}



// FUNCTION 143664466 FUN_143664466 body=85 status=ok
// SIG undefined FUN_143664466(void)

void FUN_143664466(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa5a450;
  return;
}



// FUNCTION 1436644bc FUN_1436644bc body=118 status=ok
// SIG undefined FUN_1436644bc(void)

void FUN_1436644bc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa5a450;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143664523. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14366453a FUN_14366453a body=19 status=ok
// SIG undefined FUN_14366453a(void)

undefined1 FUN_14366453a(undefined8 param_1,undefined8 param_2)

{
  FUN_14366454e(param_2);
  return 1;
}



// FUNCTION 14366454e FUN_14366454e body=270 status=ok
// SIG undefined FUN_14366454e(void)

void FUN_14366454e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  lVar3 = param_1[1];
  puVar4 = &DAT_149dfb77a;
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    iVar5 = 1;
    lVar7 = 0;
    do {
      if ((char)iVar5 == '\0') {
        FUN_1400020e8(&local_58,&DAT_149e001d8,1);
      }
      iVar1 = *(int *)(lVar2 + 8 + lVar7);
      iVar5 = 0;
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = iVar5;
      }
      FUN_1400020e8(&local_58,*(undefined8 *)(lVar2 + lVar7),iVar6);
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar7);
    puVar4 = local_58;
    if ((int)uStack_50 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
  }
  FUN_141369f9a(puVar4,L"size=",local_5c);
  puVar4 = &DAT_149dfb77a;
  if ((int)uStack_50 != 0) {
    puVar4 = local_58;
  }
  FUN_14170b16c(puVar4,L"report=",local_60);
  FUN_147cbd6b6();
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14366465e FUN_14366465e body=29 status=ok
// SIG undefined FUN_14366465e(void)

undefined8 FUN_14366465e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143664690 FUN_143664690 body=85 status=ok
// SIG undefined FUN_143664690(void)

void FUN_143664690(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa5a4e0;
  return;
}



// FUNCTION 1436646e6 FUN_1436646e6 body=85 status=ok
// SIG undefined FUN_1436646e6(void)

void FUN_1436646e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa5a4e0;
  return;
}



// FUNCTION 14366473c FUN_14366473c body=118 status=ok
// SIG undefined FUN_14366473c(void)

void FUN_14366473c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14aa5a4e0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001436647a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1436647b8 FUN_1436647b8 body=16 status=ok
// SIG undefined FUN_1436647b8(void)

undefined1 FUN_1436647b8(void)

{
  FUN_147cbd6b6();
  return 1;
}



// FUNCTION 1436647c8 FUN_1436647c8 body=29 status=ok
// SIG undefined FUN_1436647c8(void)

undefined8 FUN_1436647c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436647fa FUN_1436647fa body=85 status=ok
// SIG undefined FUN_1436647fa(void)

void FUN_1436647fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa5a550;
  return;
}



// FUNCTION 143664850 FUN_143664850 body=85 status=ok
// SIG undefined FUN_143664850(void)

void FUN_143664850(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa5a550;
  return;
}



// FUNCTION 1436648a6 FUN_1436648a6 body=118 status=ok
// SIG undefined FUN_1436648a6(void)

void FUN_1436648a6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14aa5a550;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014366490d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143664922 FUN_143664922 body=16 status=ok
// SIG undefined FUN_143664922(void)

undefined1 FUN_143664922(void)

{
  FUN_147cbd6b6();
  return 1;
}



// FUNCTION 143664932 FUN_143664932 body=29 status=ok
// SIG undefined FUN_143664932(void)

undefined8 FUN_143664932(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143664964 FUN_143664964 body=85 status=ok
// SIG undefined FUN_143664964(void)

void FUN_143664964(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa5a5c0;
  return;
}



// FUNCTION 1436649ba FUN_1436649ba body=85 status=ok
// SIG undefined FUN_1436649ba(void)

void FUN_1436649ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa5a5c0;
  return;
}



// FUNCTION 143664a10 FUN_143664a10 body=118 status=ok
// SIG undefined FUN_143664a10(void)

void FUN_143664a10(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14aa5a5c0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143664a77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143664a86 FUN_143664a86 body=19 status=ok
// SIG undefined FUN_143664a86(void)

void FUN_143664a86(void)

{
  FUN_147cbd6b6();
  FUN_14365d472();
  return;
}



// FUNCTION 143664a9a FUN_143664a9a body=21 status=ok
// SIG undefined FUN_143664a9a(void)

undefined1 FUN_143664a9a(void)

{
  FUN_147cbd6b6();
  FUN_14365d472();
  return 1;
}



// FUNCTION 143664aaf FUN_143664aaf body=5017 status=ok
// SIG undefined FUN_143664aaf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143664aaf(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  uint local_64;
  char *local_60;
  code *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14aa4dd00;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14aa4dd20);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa4e4d0,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa4ec30,1,0);
  FUN_1446f470e(&DAT_14cafa5e8,L"GbxServerSetDetailMode",1);
  FUN_1446f470e(&DAT_14cafa678,L"ReceiveCopyProperties",1);
  FUN_1446f470e(&DAT_14cafa688,L"ReceiveOverrideWith",1);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa508e0,1,0);
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14cafa734);
  if (cVar1 == '\0') {
    _DAT_14cafa734 = 0;
    uRam000000014cafa73c = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa51320,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa51a60,1,0);
  DAT_14cafa798 = 0x800000014aa51a88;
  local_60 = (char *)CONCAT44(local_60._4_4_,0x1b);
  DAT_14cafa7a0 = FUN_14577453c();
  DAT_14cafa7a4 = 1;
  _DAT_14cafeeb8 = 0xffffffff;
  _DAT_14cafeebc = 0x105;
  DAT_14cafeebe = 0;
  _DAT_14cafeec0 = &PTR_FUN_14aa581e0;
  _DAT_14cafeec8 = 0;
  uRam000000014cafeed0 = 0;
  _DAT_14cafeed5 = 0;
  uRam000000014cafeed8 = 0;
  DAT_14cafeee0 = 0;
  uRam000000014cafeee8 = 0;
  DAT_14cafeef0 = 0;
  lVar3 = 0x68;
  do {
    *(undefined ***)(lVar3 + 0x14cafee90) = &PTR_FUN_14aa581e0;
    *(undefined8 *)(lVar3 + 0x14cafee98) = 0;
    *(undefined8 *)(lVar3 + 0x14cafeea0) = 0;
    *(undefined8 *)(lVar3 + 0x14cafeea5) = 0;
    *(undefined8 *)((longlong)&DAT_14cafeeb0 + lVar3) = 0;
    *(undefined8 *)(&DAT_14cafeeb8 + lVar3) = 0;
    (&DAT_14cafeec0)[lVar3] = 0;
    lVar3 = lVar3 + 0x38;
  } while (lVar3 != 0x1b8);
  _DAT_14caff048 = &PTR_FUN_14aa581e0;
  _DAT_14caff050 = 0;
  uRam000000014caff058 = 0;
  _DAT_14caff05d = 0;
  uRam000000014caff060 = 0;
  DAT_14caff068 = 0;
  uRam000000014caff070 = 0;
  DAT_14caff078 = 0;
  _DAT_14caff080 = &PTR_FUN_14aa581e0;
  _DAT_14caff088 = 0;
  uRam000000014caff090 = 0;
  _DAT_14caff095 = 0;
  uRam000000014caff098 = 0;
  DAT_14caff0a0 = 0;
  uRam000000014caff0a8 = 0;
  DAT_14caff0b0 = 0;
  DAT_14caff0c8 = 0;
  _DAT_14caff0d0 = 0;
  DAT_14caff0d8 = 0;
  DAT_14caff0dc = 5;
  DAT_14cafeeb0 = &PTR_FUN_14aa59780;
  FUN_1463fc096();
  atexit(FUN_14365633c);
  local_58 = FUN_145f0c70c;
  local_60 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cafa8c0,&local_60);
  local_58 = FUN_145f37c64;
  local_60 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cafa9e8,&local_60);
  local_58 = FUN_145e62ddc;
  local_60 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cafab10,&local_60);
  local_58 = FUN_145e63346;
  local_60 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cafac38,&local_60);
  local_58 = FUN_145e9a98a;
  local_60 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cafad60,&local_60);
  local_60 = "AssetRegistry";
  local_58._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cafad70 = (ulonglong)uVar2;
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa524b0,1,0);
  local_60 = "Directory";
  local_58._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cafad90 = (ulonglong)uVar2;
  local_60 = "Collection";
  local_58._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cafad98 = (ulonglong)uVar2;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cafada0,L"p.PrimitiveComponent.ReplicatePhysicsObject",&DAT_14c761944,
                L"When a primitive component has no BodyInstance, allow replication based on PhysicsObject\n"
               );
  atexit(FUN_1436579bb);
  DAT_14cafe240 = 0;
  local_60 = "SMInstance";
  local_58 = (code *)CONCAT35(local_58._5_3_,10);
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cafadb0 = (ulonglong)uVar2;
  local_60 = (char *)((ulonglong)local_60 & 0xffffffffffffff00);
  local_88._0_4_ = 0x40;
  FUN_140bd5914(&DAT_14cafadb8,L"r.Shadow.GbxDisableShadowOnLowEnd",&local_60,
                L"Whether objects with \'Disable Shadow On LowEnd\' setting should stop casting shadows. Enabling this can be useful in improving performances on lower graphical scalability settings."
               );
  atexit(FUN_14365890e);
  local_60 = (char *)((ulonglong)local_60 & 0xffffffffffffff00);
  local_88._0_4_ = 0x40;
  FUN_140bd5914(&DAT_14cafadd0,L"r.Shadow.GbxDisableSkeletalMeshShadowOnLowEnd",&local_60,
                L"Whether objects with \'Disable SkeletalMesh Shadow On LowEnd\' setting should stop casting shadows. Enabling this can be useful in improving performances on lower graphical scalability settings."
               );
  atexit(FUN_143658953);
  local_60 = (char *)((ulonglong)local_60 & 0xffffffff00000000);
  local_88._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14cafade8,L"r.Shadow.ForceSingleSampleShadowingFromStationary",&local_60,
                L"Whether to force all components to act as if they have bSingleSampleShadowFromStationaryLights enabled.  Useful for scalability when dynamic shadows are disabled."
               );
  atexit(FUN_143658998);
  local_60 = (char *)0x0;
  local_58 = (code *)((ulonglong)local_58 & 0xffffffff00000000);
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58._0_4_ = 2;
  *(undefined ***)local_60 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  *(longlong *)(local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_14aa59c30;
  local_64 = local_64 & 0xffffff00;
  local_88 = CONCAT44(local_88._4_4_,0x20);
  FUN_140bd5914(&DAT_14cafae00,L"r.OptimizedWPO.AffectNonNaniteShaderSelection",&local_64,
                L"Whether the per primitive WPO flag should affect shader selection for non-nanite primitives. It increase the chance of selecting the position only depth VS at the cost of updating cached draw commands whenever the WPO flag changes."
               );
  (**(code **)(*DAT_14cafae08 + 200))(DAT_14cafae08,&local_60);
  if ((int)local_58 == 0) {
LAB_1436650c6:
    if (local_60 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58._0_4_ = 0;
    goto LAB_1436650c6;
  }
  atexit(FUN_1436589dd);
  local_60 = (char *)((ulonglong)local_60 & 0xffffffff00000000);
  local_88._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14cafae18,L"r.Shadow.CacheWPOPrimitives",&local_60,
                L"Whether primitives whose materials use World Position Offset should be considered movable for cached shadowmaps.\nEnablings this gives more correct, but slower whole scene shadows from materials that use WPO."
               );
  atexit(FUN_143658a22);
  local_60 = (char *)0x0;
  local_58._0_4_ = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58._0_4_ = 2;
  *(undefined ***)local_60 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  *(longlong *)(local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_14aa59ca0;
  local_64 = 2;
  local_88 = CONCAT44(local_88._4_4_,0x20);
  FUN_14078dbce(&DAT_14cafae30,L"r.Velocity.EnableVertexDeformation",&local_64,
                L"Enables materials with World Position Offset and/or World Displacement to output velocities during velocity pass even when the actor has not moved. \n0=Off, 1=On, 2=Auto(Default). \nAuto setting is off if r.VelocityOutputPass=2, or else on. \nWhen r.VelocityOutputPass=2 this can incur a performance cost due to additional draw calls."
               );
  (**(code **)(*DAT_14cafae38 + 200))(DAT_14cafae38,&local_60);
  if ((int)local_58 == 0) {
LAB_1436651f2:
    if (local_60 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58._0_4_ = 0;
    goto LAB_1436651f2;
  }
  atexit(FUN_143658a67);
  local_60 = (char *)0x0;
  local_58._0_4_ = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58._0_4_ = 2;
  *(undefined ***)local_60 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  *(longlong *)(local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_14aa59d10;
  local_64 = 0;
  local_88 = CONCAT44(local_88._4_4_,0x20);
  FUN_14078dbce(&DAT_14cafae48,L"r.Velocity.ForceOutput",&local_64,
                L"Force velocity output on all primitives.\nThis can incur a performance cost unless r.VelocityOutputPass=1.\nBut it can be useful for testing where velocity output isn\'t being enabled as expected.\n0: Disabled (default)\n1: Enabled"
               );
  (**(code **)(*DAT_14cafae50 + 200))(DAT_14cafae50,&local_60);
  if ((int)local_58 == 0) {
LAB_1436652e8:
    if (local_60 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58._0_4_ = 0;
    goto LAB_1436652e8;
  }
  atexit(FUN_143658aac);
  local_60 = (char *)((ulonglong)local_60 & 0xffffffff00000000);
  local_88._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cafae60,L"r.ApproximateOcclusionQueries",&local_60,
                L"Batch occlusion for a static and skeletal mesh even if there are movable.In general it\'s more beneficial to batch occlusion queires for all meshes"
               );
  atexit(FUN_143658af1);
  local_88._0_4_ = 0x20;
  FUN_14153156c(&DAT_14cafae78,L"r.Visibility.DynamicMeshElements.Parallel",&DAT_14c761945,
                L"Enables parallel processing of the gather dynamic mesh elements visibility phase."
               );
  atexit(FUN_143658b36);
  local_88 = CONCAT44(local_88._4_4_,0x24);
  FUN_14153156c(&DAT_14cafae88,L"r.CustomColor",&DAT_14cafe420,
                L"Whether to render custom color or not");
  atexit(FUN_143658b7b);
  _DAT_14caff0e8 = 0xffffffff;
  _DAT_14caff0ec = 0x105;
  DAT_14caff0ee = 0;
  _DAT_14caff0f0 = 0x9b;
  _DAT_14caff0f8 = 0;
  DAT_14caff100 = 0;
  _DAT_14caff108 = 0;
  uRam000000014caff110 = 0;
  DAT_14caff0e0 = &PTR_FUN_14aa5a0f0;
  FUN_1463fc0de();
  atexit(FUN_14365a6f9);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa53e00,1,0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cafaf48,L"health.logHealthSnapshot",&DAT_14c761948,L"Log health snapshot)\n")
  ;
  atexit(FUN_14365a728);
  DAT_14cafaf58 = 0;
  DAT_14cafaf60 = 0;
  atexit(FUN_14365a76d);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa54940,1,0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cafaf88,L"LevelStreaming.Profiling.Enabled.Shipping",&DAT_14cafaf98,
                L"Whether to enable the LevelStreamingProfilingSubsystem automatically.");
  atexit(FUN_14365aebe);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cafafa0,L"LevelStreaming.Profiling.StartAutomatically",&DAT_14cafafb0,
                L"Whether to start recording level streaminge events as soon as the subsystem is created."
               );
  atexit(FUN_14365af03);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cafafb8,L"LevelStreaming.Profiling.LateStreamingDistanceSquared",
                &DAT_14cafafc8,
                L"The squared distance (e.g. from world partition cell bounds) below which a level is considered to have streamed in late."
               );
  atexit(FUN_14365af48);
  local_60 = (char *)0x0;
  local_58._0_4_ = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58._0_4_ = 2;
  *(undefined ***)local_60 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  *(longlong *)(local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_14aa5a450;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cafb058,L"mallocleak.start",
                L"Starts tracking allocations. Args -report=[secs] -size=[filter]",&local_60);
  if ((int)local_58 == 0) {
LAB_1436655d8:
    if (local_60 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58._0_4_ = 0;
    goto LAB_1436655d8;
  }
  atexit(FUN_14365d612);
  local_60 = (char *)0x0;
  local_58._0_4_ = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58._0_4_ = 2;
  *(undefined ***)local_60 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  *(longlong *)(local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_14aa5a4e0;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14cafb068,L"mallocleak.stop",L"Stops tracking allocations",&local_60);
  if ((int)local_58 == 0) {
LAB_1436656b9:
    if (local_60 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58._0_4_ = 0;
    goto LAB_1436656b9;
  }
  atexit(FUN_14365d657);
  local_60 = (char *)0x0;
  local_58._0_4_ = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58._0_4_ = 2;
  *(undefined ***)local_60 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  *(longlong *)(local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_14aa5a550;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14cafb078,L"mallocleak.clear",L"Clears recorded allocation info",&local_60);
  if ((int)local_58 == 0) {
LAB_143665793:
    if (local_60 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58._0_4_ = 0;
    goto LAB_143665793;
  }
  atexit(FUN_14365d69c);
  local_60 = (char *)0x0;
  local_58._0_4_ = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58._0_4_ = 2;
  *(undefined ***)local_60 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  *(longlong *)(local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_14aa5a5c0;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14cafb088,L"mallocleak.report",L"Writes malloc leak reports ",&local_60);
  if ((int)local_58 != 0) {
    if (local_60 == (char *)0x0) goto LAB_14366587b;
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58._0_4_ = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_14366587b:
  atexit(FUN_14365d6e1);
  ppuStack_80 = &PTR_FUN_14aa56170;
  local_78 = 4;
  local_88 = 7;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14aa561f0);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cafb1a0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cafb1a0,4000);
  atexit((_func_5014 *)&LAB_14365d802);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa566d0,1,0);
  local_88._0_4_ = 4;
  FUN_1463e9db8(&DAT_14cafb1e0,L"r.ProxyLODMeshReductionModule",L"ProxyLODMeshReduction",
                L"Name of the Proxy LOD reduction module to choose. If blank it chooses any that exist.\n"
               );
  atexit(FUN_14365d810);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cafb210);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cafb210,4000);
  atexit((_func_5014 *)&LAB_14365d855);
  local_60 = (char *)((ulonglong)local_60 & 0xffffffff00000000);
  local_88._0_4_ = 4;
  FUN_14078dbce(&DAT_14cafb238,L"r.PSOPrecache.GlobalShaders",&local_60,
                L"Precache global shaders during startup (disable(0) - only compute shaders(1) - all global shaders(2).\nNote: r.PSOPrecache.GlobalShaders == 2 is only supported when IsDynamicShaderPreloadingEnabled is enabled."
               );
  atexit(FUN_14365d863);
  local_88._0_4_ = 4;
  FUN_141471170(&DAT_14cafb250,L"r.PSOPrecache.Components",&DAT_14c76194c,
                L"Precache all possible used PSOs by components during Postload (default 1 if PSOPrecaching is enabled)."
               );
  atexit(FUN_14365d8a8);
  local_88._0_4_ = 4;
  FUN_141471170(&DAT_14cafb268,L"r.PSOPrecache.Resources",&DAT_14cafb260,
                L"Precache all possible used PSOs by resources during Postload (default 0 if PSOPrecaching is enabled)."
               );
  atexit(FUN_14365d8ed);
  local_88._0_4_ = 4;
  FUN_141471170(&DAT_14cafb278,L"r.PSOPrecache.ProxyCreationWhenPSOReady",&DAT_14c761950,
                L"Delay the component proxy creation when the requested PSOs for precaching are still compiling.\n 0: always create regardless of PSOs status (default)\n 1: delay the creation of the render proxy depending on the specific strategy controlled by r.PSOPrecache.ProxyCreationDelayStrategy\n"
               );
  atexit(FUN_14365d932);
  local_88._0_4_ = 4;
  FUN_141471170(&DAT_14cafb290,L"r.PSOPrecache.ProxyCreationDelayStrategy",&DAT_14cafb288,
                L"Control the component proxy creation strategy when the requested PSOs for precaching are still compiling. Ignored if r.PSOPrecache.ProxyCreationWhenPSOReady = 0.\n 0: delay creation until PSOs are ready (default)\n 1: create a proxy using the default material until PSOs are ready. Currently implemented for static and skinned meshes - Niagara components will delay creation instead"
               );
  atexit(FUN_14365d977);
  local_88._0_4_ = 4;
  FUN_141471170(&DAT_14cafb2a0,L"r.PSOPrecache.DrawnComponentBoostStrategy",&DAT_14cafb2b0,
                L"Increase priority of queued precache PSOs which are also required by the component for rendering.\n0 do not increase priority of drawn PSOs (default)\n1 if the component has been rendered then increase the priority of it\'s PSO precache requests. (this requires r.PSOPrecache.ProxyCreationDelayStrategy == 1.)"
               );
  atexit(FUN_14365d9bc);
  local_88._0_4_ = 0;
  FUN_141471170(&DAT_14cafb2b8,L"r.PSOPrecache.Mode",&DAT_14cafb2b4,
                L" 0: Full PSO (default)\n 1: Preload shaders\n");
  atexit(FUN_14365da01);
  local_88._0_4_ = 4;
  FUN_141471170(&DAT_14cafb2c8,L"r.PSOPrecache.UseBackgroundThreadForCollection",&DAT_14c761954,
                L"Use background threads for PSO precache data collection on the mesh pass processors.\n"
               );
  atexit(FUN_14365dacc);
  local_88._0_4_ = 0;
  FUN_14153156c(&DAT_14cafb2d8,L"r.PSOPrecache.ShaderPreloadFilterUniqueRequest",&DAT_14c761958,
                L"Perf improvement (reduce contention on r/w lock). When kicking preload shaders job, only request one preload request per shaderIndex inside the same ShaderMapResource.\n"
               );
  atexit(FUN_14365db11);
  InitializeSRWLock((PSRWLOCK)&DAT_14cafb2e8);
  DAT_14cafb320 = 0;
  _DAT_14cafb328 = 0;
  DAT_14cafb2f0 = 0;
  uRam000000014cafb2f8 = 0;
  DAT_14cafb300 = 0;
  uRam000000014cafb308 = 0;
  _DAT_14cafb32c = 0xffffffff00000080;
  _DAT_14cafb334 = 0;
  DAT_14cafb340 = 0;
  _DAT_14cafb348 = 0;
  DAT_14cafb350 = 0;
  atexit((_func_5014 *)&LAB_14365ddc1);
  local_88._0_4_ = 4;
  FUN_141471170(&DAT_14cafb360,L"r.PSOPrecache.Validation",&DAT_14cafb358,
                L"Validate whether runtime PSOs are correctly precached and optionally track information per pass type, vertex factory and cache hit state.\n 0: disabled (default)\n 1: lightweight tracking (counter stats)\n 2: full tracking (counter stats by vertex factory, mesh pass type) and detailed logging on PSO misses in development builds\n"
               );
  atexit(FUN_14365eb43);
  DAT_14cafb370 = 0;
  _DAT_14cafb378 = 0;
  atexit((_func_5014 *)&LAB_14365eb88);
  local_88._0_4_ = 4;
  FUN_141707242(&DAT_14cafb380,L"r.PSOPrecache.BreakOnMaterialName",&DAT_14cafb370,
                L"Debug break when PSO precaching the requested material.\nUse in combination with r.PSOPrecache.BreakOnPassName to break only on a certain PSO Collector Pass name.\n"
               );
  atexit(FUN_14365eb99);
  DAT_14cafb390 = 0;
  uRam000000014cafb398 = 0;
  atexit((_func_5014 *)&LAB_14365ebde);
  local_88._0_4_ = 4;
  FUN_141707242(&DAT_14cafb3a0,L"r.PSOPrecache.BreakOnPassName",&DAT_14cafb390,
                L"Debug break when PSO precaching the material set with r.PSOPrecache.BreakOnMaterialName and the given PSO Collector Pass name.\n"
               );
  atexit(FUN_14365ebef);
  DAT_14cafb3b0 = 0;
  _DAT_14cafb3b8 = 0;
  atexit((_func_5014 *)&LAB_14365ec34);
  local_88 = CONCAT44(local_88._4_4_,4);
  FUN_141707242(&DAT_14cafb3c0,L"r.PSOPrecache.BreakOnShaderHash",&DAT_14cafb3b0,
                L"Debug break when PSO precaching the requested shader hash.\n");
  atexit(FUN_14365ec45);
  FUN_14587fc50(&DAT_14cafb3d0);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cafc000);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cafc000,4000);
  FUN_1463fc030(&DAT_14cafc028);
  atexit(FUN_14365ed54);
  FUN_14587fc50(&DAT_14cafc0a0);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cafccd0,4000);
  FUN_1463fc030(&DAT_14cafccf8);
  atexit(FUN_14365ed86);
  FUN_14587fc50(&DAT_14cafcd70);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cafd9a0,4000);
  FUN_1463fc030(&DAT_14cafd9c8);
  atexit(FUN_14365edb8);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143665e4c FUN_143665e4c body=69 status=ok
// SIG undefined FUN_143665e4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143665e4c(void)

{
  _DAT_14caff118 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143665e8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff120,1);
  return;
}



// FUNCTION 143665e91 FUN_143665e91 body=69 status=ok
// SIG undefined FUN_143665e91(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143665e91(void)

{
  _DAT_14caff130 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143665ed3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff138,1);
  return;
}



// FUNCTION 143665ed6 FUN_143665ed6 body=4088 status=ok
// SIG undefined FUN_143665ed6(void)

void FUN_143665ed6(LPCRITICAL_SECTION param_1,longlong param_2,uint param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  HANDLE *ppvVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  longlong *plVar25;
  longlong *plVar26;
  uint *puVar27;
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar28;
  undefined8 *puVar29;
  longlong lVar30;
  longlong *plVar31;
  longlong *plVar32;
  int iVar33;
  uint uVar34;
  longlong *plVar35;
  LPCRITICAL_SECTION p_Var36;
  ulonglong uVar37;
  longlong *plVar38;
  longlong lVar39;
  longlong *plVar40;
  longlong lVar41;
  ulonglong uVar42;
  bool bVar43;
  float fVar44;
  undefined1 auStack_3d8 [32];
  undefined1 local_3b8;
  ulonglong local_3a8;
  undefined8 local_3a0;
  longlong local_398;
  uint local_38c;
  longlong local_388;
  LPCRITICAL_SECTION local_380;
  LPCRITICAL_SECTION local_378;
  undefined4 local_370;
  undefined1 local_369;
  uint *local_368;
  undefined8 uStack_360;
  longlong local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  uint *local_340;
  undefined *local_338 [94];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  local_380 = param_1 + 1;
  local_358 = 0;
  uStack_350 = 0;
  iVar22 = param_1[1].LockCount;
  iVar11 = iVar22 - param_1[2].RecursionCount;
  local_38c = param_3;
  local_378 = param_1;
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  iVar18 = iVar22;
  if (iVar11 != 0) {
    FUN_1472c16f4(&local_358,iVar11);
    iVar22 = local_378[1].LockCount;
    iVar18 = local_378[2].RecursionCount;
  }
  iVar22 = iVar22 - iVar18;
  local_368 = (uint *)0x0;
  uStack_360 = 0;
  if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar22);
  }
  if (iVar22 != 0) {
    FUN_147cd0c1a(&local_368);
  }
  lpCriticalSection = local_378;
  EnterCriticalSection(local_378);
  local_3a0 = &lpCriticalSection[1].OwningThread;
  iVar22 = *(int *)&lpCriticalSection[2].DebugInfo;
  uVar37 = 1;
  uVar42 = 0;
  iVar11 = 0;
  iVar18 = 0;
  p_Var36 = local_380;
  local_388 = param_2;
  if (iVar22 != 0) {
    ppvVar21 = (HANDLE *)lpCriticalSection[1].SpinCount;
    if ((HANDLE *)lpCriticalSection[1].SpinCount == (HANDLE *)0x0) {
      ppvVar21 = local_3a0;
    }
    uVar34 = *(uint *)ppvVar21;
    if (uVar34 == 0) {
      iVar11 = iVar22 + 0x1e;
      if (-1 < iVar22 + -1) {
        iVar11 = iVar22 + -1;
      }
      uVar42 = 0;
      uVar37 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar37 = 0;
      }
      iVar11 = 0;
      do {
        if (uVar37 == uVar42) {
          local_3a8 = 0;
          goto LAB_143666031;
        }
        iVar11 = iVar11 + 0x20;
        uVar34 = *(uint *)((longlong)ppvVar21 + uVar42 * 4 + 4);
        uVar42 = uVar42 + 1;
      } while (uVar34 == 0);
    }
    else {
      uVar42 = 0;
    }
    uVar37 = (ulonglong)(-uVar34 & uVar34);
    uVar3 = uVar37 * 2 + 1;
    lVar30 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar30 == 0; lVar30 = lVar30 + -1) {
      }
    }
    iVar18 = (iVar11 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
    if (iVar22 <= iVar18) {
      iVar18 = iVar22;
    }
  }
  local_3a8 = 0;
  if (iVar18 != iVar22) {
    uVar34 = 0xffffffff;
    local_3a8 = 0;
    do {
      uVar9 = uStack_350;
      uVar3 = uStack_360;
      p_Var7 = p_Var36->DebugInfo;
      lVar41 = (longlong)iVar18;
      lVar30 = *(longlong *)(&p_Var7->Type + lVar41 * 0xc);
      lVar24 = *(longlong *)(lVar30 + 0x90);
      if (lVar24 != 0) {
        local_398 = CONCAT44(local_398._4_4_,iVar11);
        LOCK();
        *(int *)(lVar24 + 8) = *(int *)(lVar24 + 8) + 1;
        UNLOCK();
        if (*(int *)(&p_Var7->CriticalSection + lVar41 * 3) == 0) {
          uVar6 = *(undefined8 *)(lVar30 + 0x58);
          lVar39 = (longlong)(int)uStack_350;
          uVar12 = (int)uStack_350 + 1;
          uStack_350 = CONCAT44(uStack_350._4_4_,uVar12);
          uVar19 = *(undefined4 *)(lVar30 + 0x60);
          if (uStack_350._4_4_ < uVar12) {
            local_370 = *(undefined4 *)(lVar30 + 0x60);
            FUN_1471b2712(&local_358,uVar9 & 0xffffffff);
            p_Var36 = local_380;
            uVar19 = local_370;
          }
          lVar39 = lVar39 * 0x20;
          *(longlong *)(local_358 + lVar39) = lVar24;
          LOCK();
          *(int *)(lVar24 + 8) = *(int *)(lVar24 + 8) + 1;
          UNLOCK();
          *(undefined4 *)(local_358 + 8 + lVar39) = 0;
          *(undefined8 *)(local_358 + 0x10 + lVar39) = uVar6;
          *(undefined4 *)(local_358 + 0x18 + lVar39) = uVar19;
          local_3a8 = (ulonglong)
                      (uint)((int)local_3a8 +
                            *(int *)((longlong)&p_Var7->CriticalSection + lVar41 * 0x18 + 4));
          *(undefined8 *)(lVar30 + 0x38) = DAT_14c867d10;
          lpCriticalSection = local_378;
        }
        else {
          lVar41 = (longlong)(int)uStack_360;
          uVar12 = (int)uStack_360 + 1;
          uStack_360 = CONCAT44(uStack_360._4_4_,uVar12);
          if (uStack_360._4_4_ < uVar12) {
            FUN_147cd0c7a(&local_368,uVar3 & 0xffffffff);
            p_Var36 = local_380;
          }
          *(longlong *)(local_368 + lVar41 * 2) = lVar30;
        }
        puVar27 = (uint *)(lVar24 + 8);
        LOCK();
        uVar12 = *puVar27;
        *puVar27 = *puVar27 - 1;
        UNLOCK();
        iVar11 = (int)local_398;
        if ((uVar12 & 0x3fffffff) == 1) {
          LOCK();
          uVar12 = *puVar27;
          *puVar27 = *puVar27 | 0x40000000;
          UNLOCK();
          if ((uVar12 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(lVar24 + 0xd);
            plVar13 = (longlong *)FUN_14001cc68(0x10,8);
            plVar13[1] = lVar24;
            plVar15 = DAT_14ca843c0;
            plVar14 = DAT_14ca843c8;
            p_Var36 = local_380;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar13 = (longlong)plVar15;
                LOCK();
                bVar43 = plVar15 != DAT_14ca843c0;
                plVar14 = plVar13;
                if (bVar43) {
                  plVar15 = DAT_14ca843c0;
                  plVar14 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar14;
                UNLOCK();
              } while (bVar43);
              lpCriticalSection = local_378;
              iVar11 = (int)local_398;
            }
            else {
              do {
                *plVar13 = (longlong)plVar14;
                LOCK();
                bVar43 = plVar14 != DAT_14ca843c8;
                plVar15 = plVar13;
                if (bVar43) {
                  plVar14 = DAT_14ca843c8;
                  plVar15 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar15;
                UNLOCK();
              } while (bVar43);
            }
          }
        }
      }
      uVar34 = uVar34 & ~(uint)uVar37;
      ppvVar21 = (HANDLE *)lpCriticalSection[1].SpinCount;
      if ((HANDLE *)lpCriticalSection[1].SpinCount == (HANDLE *)0x0) {
        ppvVar21 = local_3a0;
      }
      iVar22 = *(int *)&lpCriticalSection[2].DebugInfo;
      iVar18 = (int)uVar42;
      lVar30 = (longlong)iVar18;
      uVar12 = *(uint *)((longlong)ppvVar21 + lVar30 * 4) & uVar34;
      if (uVar12 == 0) {
        iVar20 = iVar22 + 0x1e;
        if (-1 < iVar22 + -1) {
          iVar20 = iVar22 + -1;
        }
        iVar20 = iVar20 >> 5;
        iVar33 = iVar20;
        if (iVar20 < iVar18) {
          iVar33 = iVar18;
        }
        if (iVar20 <= iVar18) break;
        lVar24 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar12 = *(uint *)((longlong)ppvVar21 + lVar24 * 4 + lVar30 * 4 + 4);
          if (uVar12 != 0) break;
          lVar24 = lVar24 + 1;
          if (iVar33 - lVar30 == lVar24) goto LAB_143666031;
        }
        uVar42 = (ulonglong)(iVar18 + (int)lVar24 + 1);
        uVar34 = 0xffffffff;
      }
      uVar37 = (ulonglong)(-uVar12 & uVar12);
      uVar3 = uVar37 * 2 + 1;
      lVar30 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      iVar18 = (iVar11 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
    } while (iVar18 < iVar22);
  }
LAB_143666031:
  FUN_147cd0a92(p_Var36);
  lpCriticalSection[3].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  puVar27 = local_368;
  iVar22 = *(int *)(DAT_14caff128 + 4);
  iVar11 = (int)uStack_360;
  if (iVar22 < 1) {
    if ((longlong)(int)uStack_360 != 0) {
      puVar27 = local_368 + (longlong)(int)uStack_360 * 2;
      puVar28 = local_368;
      do {
        lVar30 = *(longlong *)puVar28;
        lVar24 = *(longlong *)(lVar30 + 0x90);
        if (lVar24 != 0) {
          LOCK();
          *(int *)(lVar24 + 8) = *(int *)(lVar24 + 8) + 1;
          UNLOCK();
        }
        uVar6 = *(undefined8 *)(lVar30 + 0x58);
        uVar19 = *(undefined4 *)(lVar30 + 0x60);
        lVar41 = (longlong)(int)uStack_350;
        uVar34 = (int)uStack_350 + 1;
        uStack_350 = CONCAT44(uStack_350._4_4_,uVar34);
        if (uStack_350._4_4_ < uVar34) {
          FUN_1471b2712(&local_358);
        }
        *(longlong *)(local_358 + lVar41 * 0x20) = lVar24;
        if (lVar24 != 0) {
          LOCK();
          *(int *)(lVar24 + 8) = *(int *)(lVar24 + 8) + 1;
          UNLOCK();
        }
        lVar41 = local_358 + lVar41 * 0x20;
        *(undefined4 *)(lVar41 + 8) = 1;
        *(undefined8 *)(lVar41 + 0x10) = uVar6;
        *(undefined4 *)(lVar41 + 0x18) = uVar19;
        *(undefined8 *)(lVar30 + 0x38) = DAT_14c867d10;
        local_3a8 = (ulonglong)
                    (uint)((int)local_3a8 + *(int *)(*(longlong *)(lVar30 + 0x90) + 0x20));
        if (lVar24 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar24 + 8);
          uVar34 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar34 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar24 + 8);
            LOCK();
            uVar34 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar34 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)(lVar24 + 0xd);
              plVar13 = (longlong *)FUN_14001cc68(0x10);
              plVar13[1] = lVar24;
              plVar15 = DAT_14ca843c0;
              plVar14 = DAT_14ca843c8;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar13 = (longlong)plVar15;
                  LOCK();
                  bVar43 = plVar15 != DAT_14ca843c0;
                  plVar14 = plVar13;
                  if (bVar43) {
                    plVar15 = DAT_14ca843c0;
                    plVar14 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar14;
                  UNLOCK();
                } while (bVar43);
              }
              else {
                do {
                  *plVar13 = (longlong)plVar14;
                  LOCK();
                  bVar43 = plVar14 != DAT_14ca843c8;
                  plVar15 = plVar13;
                  if (bVar43) {
                    plVar14 = DAT_14ca843c8;
                    plVar15 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar15;
                  UNLOCK();
                } while (bVar43);
              }
            }
          }
        }
        puVar28 = puVar28 + 2;
      } while (puVar28 != puVar27);
    }
  }
  else {
    lVar30 = (longlong)(int)uStack_360;
    local_398 = CONCAT44(local_398._4_4_,iVar22);
    if (1 < lVar30) {
      memset(local_338,0,0x2f0);
      local_348 = puVar27;
      local_340 = puVar27 + lVar30 * 2 + -2;
      fVar44 = logf((float)iVar11);
      local_338[0] = (undefined *)CONCAT44(local_338[0]._4_4_,(int)(longlong)(fVar44 + fVar44));
      plVar15 = &local_348;
      do {
        plVar13 = (longlong *)*plVar15;
        plVar31 = (longlong *)plVar15[1];
        iVar22 = (int)plVar15[2];
        iVar11 = (int)((ulonglong)((longlong)plVar31 - (longlong)plVar13) >> 3);
        uVar37 = (ulonglong)(iVar11 + 1);
        plVar25 = plVar13;
        plVar26 = plVar13;
        plVar14 = plVar31;
        if (iVar22 != 0) {
LAB_1436660ed:
          if (8 < (int)(uint)uVar37) {
            uVar34 = (uint)uVar37 >> 1;
            lVar30 = plVar26[uVar34];
            plVar26[uVar34] = *plVar26;
            *plVar26 = lVar30;
            plVar35 = plVar14 + 1;
            plVar13 = plVar26;
            do {
              plVar10 = plVar13 + 1;
              plVar32 = plVar13 + 1;
              do {
                plVar13 = plVar32;
                plVar40 = plVar10;
                if (plVar14 < plVar13) break;
                plVar10 = plVar40 + 1;
                plVar32 = plVar13 + 1;
              } while (*(ulonglong *)(*plVar13 + 0x38) <= *(ulonglong *)(*plVar26 + 0x38));
              plVar10 = plVar35 + -2;
              do {
                plVar32 = plVar35;
                plVar38 = plVar10;
                plVar35 = plVar32 + -1;
                if (plVar35 <= plVar26) break;
                plVar10 = plVar38 + -1;
              } while (*(ulonglong *)(*plVar26 + 0x38) <= *(ulonglong *)(*plVar35 + 0x38));
              if (plVar35 < plVar13) goto LAB_14366617e;
              lVar30 = *plVar13;
              *plVar13 = *plVar35;
              *plVar35 = lVar30;
            } while( true );
          }
          if (plVar26 < plVar14) {
            do {
              plVar13 = plVar26;
              if (plVar26 + 1 <= plVar14) {
                lVar30 = *plVar26;
                plVar31 = plVar26 + 1;
                do {
                  lVar24 = *plVar31;
                  plVar25 = plVar31;
                  if (*(ulonglong *)(*plVar31 + 0x38) <= *(ulonglong *)(lVar30 + 0x38)) {
                    lVar24 = lVar30;
                    plVar25 = plVar13;
                  }
                  plVar13 = plVar25;
                  plVar31 = plVar31 + 1;
                  lVar30 = lVar24;
                } while (plVar31 <= plVar14);
              }
              lVar30 = *plVar13;
              *plVar13 = *plVar14;
              *plVar14 = lVar30;
              plVar14 = plVar14 + -1;
            } while (plVar26 < plVar14);
          }
          goto LAB_1436663b0;
        }
LAB_143666212:
        iVar22 = (int)uVar37;
        if (iVar22 != 0) {
          iVar11 = (iVar11 - (iVar11 + -1 >> 0x1f)) + -1 >> 1;
          iVar18 = iVar11;
joined_r0x000143666239:
          do {
            iVar20 = iVar11 * 2 + 1;
            if (iVar20 < iVar22) {
              iVar33 = iVar11 * 2 + 2;
              if ((iVar33 < iVar22) &&
                 (*(ulonglong *)(plVar13[iVar20] + 0x38) <= *(ulonglong *)(plVar13[iVar33] + 0x38)))
              {
                iVar20 = iVar33;
              }
              lVar30 = plVar13[iVar11];
              if (*(ulonglong *)(lVar30 + 0x38) < *(ulonglong *)(plVar13[iVar20] + 0x38)) {
                plVar13[iVar11] = plVar13[iVar20];
                plVar13[iVar20] = lVar30;
                iVar11 = iVar20;
                goto joined_r0x000143666239;
              }
            }
            bVar43 = iVar18 != 0;
            iVar11 = iVar18 + -1;
            iVar18 = iVar11;
          } while (bVar43);
          if (1 < iVar22) {
            lVar30 = *plVar13;
            *plVar13 = plVar13[uVar37 - 1];
            plVar13[uVar37 - 1] = lVar30;
            if (iVar22 != 2) {
              do {
                uVar42 = uVar37 - 1;
                iVar22 = 0;
                iVar18 = 1;
                iVar11 = 0;
                do {
                  iVar22 = iVar22 + 2;
                  iVar20 = iVar18;
                  if (((longlong)iVar22 < (longlong)uVar42) &&
                     (*(ulonglong *)(plVar13[iVar18] + 0x38) <=
                      *(ulonglong *)(plVar13[iVar22] + 0x38))) {
                    iVar20 = iVar22;
                  }
                  lVar30 = plVar13[iVar11];
                  if (*(ulonglong *)(plVar13[iVar20] + 0x38) <= *(ulonglong *)(lVar30 + 0x38))
                  break;
                  plVar13[iVar11] = plVar13[iVar20];
                  plVar13[iVar20] = lVar30;
                  iVar22 = iVar20 * 2;
                  iVar18 = iVar20 * 2 + 1;
                  iVar11 = iVar20;
                } while ((longlong)iVar18 < (longlong)uVar42);
                lVar30 = *plVar13;
                *plVar13 = plVar13[uVar37 - 2];
                plVar13[uVar37 - 2] = lVar30;
                uVar37 = uVar42;
              } while (2 < uVar42);
            }
          }
        }
LAB_1436663b0:
        plVar15 = plVar15 + -3;
      } while (&local_348 <= plVar15);
      iVar22 = (int)local_398;
    }
    if ((int)uStack_360 != 0) {
      ppvVar21 = (HANDLE *)(local_368 + (longlong)(int)uStack_360 * 2);
      iVar11 = 0;
      puVar27 = local_368;
      local_3a0 = ppvVar21;
      do {
        uVar37 = uStack_350;
        lVar30 = *(longlong *)puVar27;
        iVar18 = *(int *)(lVar30 + 0x50);
        lVar24 = *(longlong *)(lVar30 + 0x90);
        if (lVar24 != 0) {
          LOCK();
          *(int *)(lVar24 + 8) = *(int *)(lVar24 + 8) + 1;
          UNLOCK();
        }
        uVar6 = *(undefined8 *)(lVar30 + 0x58);
        uVar19 = *(undefined4 *)(lVar30 + 0x60);
        lVar41 = (longlong)(int)uStack_350;
        uVar34 = (int)uStack_350 + 1;
        uStack_350 = CONCAT44(uStack_350._4_4_,uVar34);
        if (uStack_350._4_4_ < uVar34) {
          FUN_1471b2712(&local_358,uVar37 & 0xffffffff);
          ppvVar21 = local_3a0;
          iVar22 = (int)local_398;
        }
        *(longlong *)(local_358 + lVar41 * 0x20) = lVar24;
        if (lVar24 != 0) {
          LOCK();
          *(int *)(lVar24 + 8) = *(int *)(lVar24 + 8) + 1;
          UNLOCK();
        }
        lVar41 = local_358 + lVar41 * 0x20;
        *(undefined4 *)(lVar41 + 8) = 1;
        *(undefined8 *)(lVar41 + 0x10) = uVar6;
        *(undefined4 *)(lVar41 + 0x18) = uVar19;
        *(undefined8 *)(lVar30 + 0x38) = DAT_14c867d10;
        local_3a8 = (ulonglong)
                    (uint)((int)local_3a8 + *(int *)(*(longlong *)(lVar30 + 0x90) + 0x20));
        if (lVar24 != 0) {
          LOCK();
          puVar28 = (uint *)(lVar24 + 8);
          uVar34 = *puVar28;
          *puVar28 = *puVar28 - 1;
          UNLOCK();
          if ((uVar34 & 0x3fffffff) == 1) {
            puVar28 = (uint *)(lVar24 + 8);
            LOCK();
            uVar34 = *puVar28;
            *puVar28 = *puVar28 | 0x40000000;
            UNLOCK();
            if ((uVar34 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)(lVar24 + 0xd);
              plVar13 = (longlong *)FUN_14001cc68(0x10,8);
              plVar13[1] = lVar24;
              plVar15 = DAT_14ca843c0;
              plVar14 = DAT_14ca843c8;
              ppvVar21 = local_3a0;
              iVar22 = (int)local_398;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar13 = (longlong)plVar15;
                  LOCK();
                  bVar43 = plVar15 != DAT_14ca843c0;
                  plVar14 = plVar13;
                  if (bVar43) {
                    plVar15 = DAT_14ca843c0;
                    plVar14 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar14;
                  UNLOCK();
                } while (bVar43);
              }
              else {
                do {
                  *plVar13 = (longlong)plVar14;
                  LOCK();
                  bVar43 = plVar14 != DAT_14ca843c8;
                  plVar15 = plVar13;
                  if (bVar43) {
                    plVar14 = DAT_14ca843c8;
                    plVar15 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar15;
                  UNLOCK();
                } while (bVar43);
              }
            }
          }
        }
        iVar11 = iVar11 + iVar18;
      } while ((iVar11 <= iVar22) && (puVar27 = puVar27 + 2, (HANDLE *)puVar27 != ppvVar21));
    }
  }
  lVar30 = local_388;
  if ((int)local_3a8 == 0) {
    uVar37 = 0;
  }
  else {
    uVar12 = (((int)local_3a8 + DAT_14ca84f04) - 1) / DAT_14ca84f04;
    uVar34 = DAT_14ca84f04;
    if (DAT_14ca84e48 <= DAT_14ca84f04) {
      uVar34 = DAT_14ca84e48;
    }
    local_340 = (uint *)CONCAT44(local_340._4_4_,0x90008);
    uVar23 = DAT_14ca84e48;
    if (uVar12 < DAT_14ca84e48) {
      uVar23 = uVar12;
    }
    local_338[0] = (undefined *)0x0;
    local_348 = (uint *)CONCAT44(uVar23 + (uVar23 == 0),uVar34 + (uVar34 == 0));
    uVar37 = *(longlong *)(local_388 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar42 = uVar37 + 0x150;
    if (*(ulonglong *)(local_388 + 0x78) < uVar42) {
      plVar15 = (longlong *)(local_388 + 0x70);
      FUN_140023dd8(plVar15,0x160);
      uVar37 = *plVar15 + 0xfU & 0xfffffffffffffff0;
      uVar42 = uVar37 + 0x150;
    }
    *(ulonglong *)(lVar30 + 0x70) = uVar42;
    FUN_1456bd266(uVar37,L"SkinnedGeometry.BLASSharedScratchBuffer",&local_348,0);
    iVar22 = *(int *)(lVar30 + 400);
    *(uint *)(lVar30 + 400) = iVar22 + 1U;
    if (*(uint *)(lVar30 + 0x194) < iVar22 + 1U) {
      FUN_144737178(lVar30 + 0x188,iVar22);
    }
    *(ulonglong *)(*(longlong *)(lVar30 + 0x188) + (longlong)iVar22 * 8) = uVar37;
    *(int *)(uVar37 + 0x7c) = *(int *)(lVar30 + 400) + -1;
  }
  puVar2 = (ulonglong *)(lVar30 + 0x70);
  puVar29 = (undefined8 *)(*(longlong *)(lVar30 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar17 = puVar29 + 4;
  if (*(undefined8 **)(lVar30 + 0x78) < puVar17) {
    FUN_140023dd8(puVar2,0x30);
    puVar29 = (undefined8 *)(*puVar2 + 0xf & 0xfffffffffffffff0);
    puVar17 = puVar29 + 4;
  }
  *(undefined8 **)(lVar30 + 0x70) = puVar17;
  *puVar29 = &PTR_FUN_14aa684e0;
  puVar29[2] = 0;
  *(undefined4 *)(puVar29 + 3) = 0x400;
  iVar22 = *(int *)(lVar30 + 0xa0);
  *(uint *)(lVar30 + 0xa0) = iVar22 + 1U;
  if (*(uint *)(lVar30 + 0xa4) < iVar22 + 1U) {
    FUN_1448cfae8(lVar30 + 0x98,iVar22);
  }
  *(undefined8 **)(*(longlong *)(lVar30 + 0x98) + (longlong)iVar22 * 8) = puVar29;
  puVar29[2] = uVar37;
  *(undefined4 *)(puVar29 + 3) = 0x400;
  puVar8 = *(ulonglong **)(lVar30 + 0x18);
  uVar12 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  uVar34 = *(uint *)((longlong)puVar8 + 0x17c);
  if (uVar34 != uVar12) {
    *(uint *)((longlong)puVar8 + 0x17c) = uVar12;
    puVar16 = (undefined8 *)(*puVar8 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar16 + 3;
    if ((undefined8 *)puVar8[1] < puVar17) {
      FUN_140023dd8(puVar8,0x20);
      puVar16 = (undefined8 *)(*puVar8 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar16 + 3;
    }
    *puVar8 = (ulonglong)puVar17;
    *(int *)(puVar8 + 0xc) = (int)puVar8[0xc] + 1;
    *(undefined8 **)puVar8[6] = puVar16;
    puVar8[6] = (ulonglong)(puVar16 + 1);
    uVar19 = *(undefined4 *)((longlong)puVar8 + 0x17c);
    puVar16[1] = 0;
    *puVar16 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar16 + 2) = uVar19;
  }
  uVar12 = local_38c;
  iVar22 = (int)uStack_350;
  if ((int)uStack_350 != 0) {
    local_398 = local_358;
    local_3a8 = CONCAT44(local_3a8._4_4_,uStack_350._4_4_);
    local_358 = 0;
    uStack_350 = 0;
    local_3a0 = (HANDLE *)(CONCAT44(local_3a0._4_4_,local_38c) | 0x10);
    FUN_147cd0d1e();
    FUN_140069376(lVar30);
    uVar19 = (undefined4)local_3a8;
    if ((uVar12 & 4) == 0) {
      if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
         ((DAT_14ca84e6a == '\x01' &&
          (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (local_38c & 2) != 0)))))) {
        local_3a0 = (HANDLE *)((ulonglong)local_3a0 & 0xfffffffffffffff9 | 4);
      }
      puVar16 = (undefined8 *)(*(longlong *)(local_388 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar17 = puVar16 + 0x3a;
      if (*(undefined8 **)(local_388 + 0x78) < puVar17) {
        FUN_140023dd8(puVar2,0x1d8);
        puVar16 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
        puVar17 = puVar16 + 0x3a;
      }
      *puVar2 = (ulonglong)puVar17;
      local_340 = DAT_14cb001a0;
      if (DAT_14cb001a0 != (uint *)0x0) {
        LOCK();
        DAT_14cb001a0[2] = DAT_14cb001a0[2] + 1;
        UNLOCK();
      }
      local_338[0] = &DAT_14cb00158;
      local_3b8 = 1;
      local_348 = (uint *)(puVar29 + 2);
      FUN_140068f1a(puVar16,&local_369,&local_348,(ulonglong)local_3a0 & 0xffffffff);
      *puVar16 = &PTR_FUN_14aa68510;
      puVar16[0x37] = local_398;
      *(int *)(puVar16 + 0x38) = iVar22;
      *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar19;
      puVar16[0x39] = uVar37;
    }
    else {
      if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
         ((DAT_14ca84e99 & 1) != 0)) {
        local_3a0 = (HANDLE *)((ulonglong)local_3a0 & 0xfffffffffffffff9 | 2);
      }
      else if (DAT_14c760ddc == 2 && (local_38c & 2) != 0) {
        local_3a0 = (HANDLE *)((ulonglong)local_3a0 & 0xffffffff0000fffd);
      }
      puVar16 = (undefined8 *)(*(longlong *)(local_388 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar17 = puVar16 + 0x3b;
      if (*(undefined8 **)(local_388 + 0x78) < puVar17) {
        FUN_140023dd8(puVar2,0x1e0);
        puVar16 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
        puVar17 = puVar16 + 0x3b;
      }
      *(undefined8 **)(local_388 + 0x70) = puVar17;
      uVar5 = *(undefined4 *)(local_388 + 0x660);
      local_340 = DAT_14cb001a0;
      if (DAT_14cb001a0 != (uint *)0x0) {
        LOCK();
        DAT_14cb001a0[2] = DAT_14cb001a0[2] + 1;
        UNLOCK();
      }
      local_338[0] = &DAT_14cb00158;
      local_3b8 = 1;
      local_348 = (uint *)(puVar29 + 2);
      FUN_140068f1a(puVar16,&local_369,&local_348,(ulonglong)local_3a0 & 0xffffffff);
      puVar16[0x37] = local_398;
      *(int *)(puVar16 + 0x38) = iVar22;
      *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar19;
      puVar16[0x39] = uVar37;
      *puVar16 = &PTR_FUN_14aa684f0;
      *(undefined4 *)(puVar16 + 0x3a) = uVar5;
    }
    lVar30 = local_388;
    iVar22 = *(int *)(local_388 + 0x170);
    *(uint *)(local_388 + 0x170) = iVar22 + 1U;
    if (*(uint *)(local_388 + 0x174) < iVar22 + 1U) {
      FUN_14470e57a(local_388 + 0x168,iVar22);
    }
    *(undefined8 **)(*(longlong *)(lVar30 + 0x168) + (longlong)iVar22 * 8) = puVar16;
    *(int *)((longlong)puVar16 + 0x2c) = *(int *)(lVar30 + 0x170) + -1;
    FUN_140069100(lVar30,puVar16);
    FUN_141538e31(0,0);
  }
  if (*(uint *)((longlong)puVar8 + 0x17c) != uVar34) {
    *(uint *)((longlong)puVar8 + 0x17c) = uVar34;
    puVar29 = (undefined8 *)(*puVar8 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar29 + 3;
    if ((undefined8 *)puVar8[1] < puVar17) {
      FUN_140023dd8(puVar8,0x20);
      puVar29 = (undefined8 *)(*puVar8 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar29 + 3;
    }
    *puVar8 = (ulonglong)puVar17;
    *(int *)(puVar8 + 0xc) = (int)puVar8[0xc] + 1;
    *(undefined8 **)puVar8[6] = puVar29;
    puVar8[6] = (ulonglong)(puVar29 + 1);
    uVar19 = *(undefined4 *)((longlong)puVar8 + 0x17c);
    puVar29[1] = 0;
    *puVar29 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar29 + 2) = uVar19;
  }
  if (local_368 != (uint *)0x0) {
    FUN_1400020a8();
  }
  FUN_141538e31(local_358,uStack_350 & 0xffffffff);
  if (local_358 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14366617e:
  lVar30 = *plVar26;
  *plVar26 = *plVar35;
  *plVar35 = lVar30;
  iVar22 = iVar22 + -1;
  plVar32 = plVar32 + -2;
  if ((longlong)plVar38 - (longlong)plVar25 < (longlong)plVar31 - (longlong)plVar40) {
    if (plVar13 < plVar14) {
      *plVar15 = (longlong)plVar13;
      plVar15[1] = (longlong)plVar14;
      *(int *)(plVar15 + 2) = iVar22;
      plVar15 = plVar15 + 3;
    }
    plVar13 = plVar26;
    plVar31 = plVar38;
    if (plVar35 <= plVar26 + 1) goto LAB_1436663b0;
  }
  else {
    if (plVar26 + 1 < plVar35) {
      *plVar15 = (longlong)plVar26;
      plVar15[1] = (longlong)plVar32;
      *(int *)(plVar15 + 2) = iVar22;
      plVar15 = plVar15 + 3;
    }
    plVar26 = plVar40;
    plVar32 = plVar14;
    plVar31 = plVar14;
    if (plVar14 <= plVar13) goto LAB_1436663b0;
  }
  iVar11 = (int)((ulonglong)((longlong)plVar31 - (longlong)plVar26) >> 3);
  uVar37 = (ulonglong)(iVar11 + 1);
  plVar25 = plVar26;
  plVar26 = plVar13;
  plVar14 = plVar32;
  if (iVar22 == 0) goto LAB_143666212;
  goto LAB_1436660ed;
}



// FUNCTION 143666ecf FUN_143666ecf body=55 status=ok
// SIG undefined FUN_143666ecf(void)

void FUN_143666ecf(void)

{
  undefined8 uVar1;
  
  if (DAT_14caff170 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caff170 = FUN_14171c317(FUN_1463fc2e5,uVar1,L"EClearSceneOptions");
  }
  return;
}



// FUNCTION 143666f06 FUN_143666f06 body=55 status=ok
// SIG undefined FUN_143666f06(void)

void FUN_143666f06(void)

{
  undefined8 uVar1;
  
  if (DAT_14caff188 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caff188 = FUN_14171c317(FUN_1463fc314,uVar1,L"ECompositingSampleCount");
  }
  return;
}



// FUNCTION 143666f3d FUN_143666f3d body=55 status=ok
// SIG undefined FUN_143666f3d(void)

void FUN_143666f3d(void)

{
  undefined8 uVar1;
  
  if (DAT_14caff1a0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caff1a0 = FUN_14171c317(FUN_1463fc343,uVar1,L"ECustomDepthStencil");
  }
  return;
}



// FUNCTION 143666f74 FUN_143666f74 body=55 status=ok
// SIG undefined FUN_143666f74(void)

void FUN_143666f74(void)

{
  undefined8 uVar1;
  
  if (DAT_14caff1b8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caff1b8 = FUN_14171c317(FUN_1463fc372,uVar1,L"EEarlyZPass");
  }
  return;
}



// FUNCTION 143666fab FUN_143666fab body=55 status=ok
// SIG undefined FUN_143666fab(void)

void FUN_143666fab(void)

{
  undefined8 uVar1;
  
  if (DAT_14caff1d0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caff1d0 = FUN_14171c317(FUN_1463fc3a1,uVar1,L"EVelocityOutputPass");
  }
  return;
}



// FUNCTION 143666fe2 FUN_143666fe2 body=55 status=ok
// SIG undefined FUN_143666fe2(void)

void FUN_143666fe2(void)

{
  undefined8 uVar1;
  
  if (DAT_14caff1e8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caff1e8 = FUN_14171c317(FUN_1463fc3d0,uVar1,L"EVertexDeformationOutputsVelocity");
  }
  return;
}



// FUNCTION 143667019 FUN_143667019 body=55 status=ok
// SIG undefined FUN_143667019(void)

void FUN_143667019(void)

{
  undefined8 uVar1;
  
  if (DAT_14caff200 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caff200 = FUN_14171c317(FUN_1463fc3ff,uVar1,L"EAlphaChannelMode");
  }
  return;
}



// FUNCTION 143667050 FUN_143667050 body=55 status=ok
// SIG undefined FUN_143667050(void)

void FUN_143667050(void)

{
  undefined8 uVar1;
  
  if (DAT_14caff218 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caff218 = FUN_14171c317(FUN_1463fc42e,uVar1,L"EAutoExposureMethodUI");
  }
  return;
}



// FUNCTION 143667087 FUN_143667087 body=55 status=ok
// SIG undefined FUN_143667087(void)

void FUN_143667087(void)

{
  undefined8 uVar1;
  
  if (DAT_14caff230 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caff230 = FUN_14171c317(FUN_1463fc45d,uVar1,L"EDefaultBackBufferPixelFormat");
  }
  return;
}



// FUNCTION 1436670be FUN_1436670be body=55 status=ok
// SIG undefined FUN_1436670be(void)

void FUN_1436670be(void)

{
  undefined8 uVar1;
  
  if (DAT_14caff248 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caff248 = FUN_14171c317(FUN_1463fc48c,uVar1,L"EFixedFoveationLevels");
  }
  return;
}



// FUNCTION 1436670f5 FUN_1436670f5 body=55 status=ok
// SIG undefined FUN_1436670f5(void)

void FUN_1436670f5(void)

{
  undefined8 uVar1;
  
  if (DAT_14caff260 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caff260 = FUN_14171c317(FUN_1463fc4bb,uVar1,L"EMobileAntiAliasingMethod");
  }
  return;
}



// FUNCTION 14366712c FUN_14366712c body=55 status=ok
// SIG undefined FUN_14366712c(void)

void FUN_14366712c(void)

{
  undefined8 uVar1;
  
  if (DAT_14caff278 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caff278 = FUN_14171c317(FUN_1463fc4ea,uVar1,L"EMobileFloatPrecisionMode");
  }
  return;
}



// FUNCTION 143667163 FUN_143667163 body=55 status=ok
// SIG undefined FUN_143667163(void)

void FUN_143667163(void)

{
  undefined8 uVar1;
  
  if (DAT_14caff290 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caff290 = FUN_14171c317(FUN_1463fc519,uVar1,L"EMobileShadingPath");
  }
  return;
}



// FUNCTION 14366719a FUN_14366719a body=55 status=ok
// SIG undefined FUN_14366719a(void)

void FUN_14366719a(void)

{
  undefined8 uVar1;
  
  if (DAT_14caff2a8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caff2a8 = FUN_14171c317(FUN_1463fc548,uVar1,L"ELightFunctionAtlasPixelFormat");
  }
  return;
}



// FUNCTION 1436671d1 FUN_1436671d1 body=55 status=ok
// SIG undefined FUN_1436671d1(void)

void FUN_1436671d1(void)

{
  undefined8 uVar1;
  
  if (DAT_14caff2c0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caff2c0 = FUN_14171c317(FUN_1463fc577,uVar1,L"EShaderCompressionFormat");
  }
  return;
}



// FUNCTION 143667208 FUN_143667208 body=55 status=ok
// SIG undefined FUN_143667208(void)

void FUN_143667208(void)

{
  undefined8 uVar1;
  
  if (DAT_14caff2d8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caff2d8 = FUN_14171c317(FUN_1463fc5a6,uVar1,L"ELumenSoftwareTracingMode");
  }
  return;
}



// FUNCTION 14366723f FUN_14366723f body=55 status=ok
// SIG undefined FUN_14366723f(void)

void FUN_14366723f(void)

{
  undefined8 uVar1;
  
  if (DAT_14caff2f0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caff2f0 = FUN_14171c317(FUN_1463fc5d5,uVar1,L"ELumenRayLightingMode");
  }
  return;
}



// FUNCTION 143667276 FUN_143667276 body=55 status=ok
// SIG undefined FUN_143667276(void)

void FUN_143667276(void)

{
  undefined8 uVar1;
  
  if (DAT_14caff308 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caff308 = FUN_14171c317(FUN_1463fc604,uVar1,L"ELumenScreenTracingSource");
  }
  return;
}



// FUNCTION 1436672ad FUN_1436672ad body=55 status=ok
// SIG undefined FUN_1436672ad(void)

void FUN_1436672ad(void)

{
  undefined8 uVar1;
  
  if (DAT_14caff320 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caff320 = FUN_14171c317(FUN_1463fc633,uVar1,L"EWorkingColorSpace");
  }
  return;
}



// FUNCTION 1436672e4 FUN_1436672e4 body=69 status=ok
// SIG undefined FUN_1436672e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436672e4(void)

{
  _DAT_14caff360 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143667326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff368,1);
  return;
}



// FUNCTION 143667329 FUN_143667329 body=599 status=ok
// SIG undefined FUN_143667329(void)

float * FUN_143667329(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  fVar1 = param_2[1];
  fVar2 = *param_2;
  dVar7 = pow((double)param_2[2] + -0.33,4.0);
  dVar8 = pow((double)fVar1 + -0.33,4.0);
  dVar9 = pow((double)fVar2 + -0.33,4.0);
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  fVar3 = *param_2;
  dVar10 = pow(ABS((double)fVar1 + -0.8),3.0);
  dVar11 = pow(ABS((double)fVar2 + -0.8),3.0);
  dVar12 = pow(ABS((double)fVar3 + -0.8),3.0);
  fVar4 = param_3[2];
  fVar5 = param_3[1];
  fVar6 = param_3[3];
  *param_1 = ((float)(dVar9 * 100.0 + 3.5) / (float)(dVar12 * 7.0 + (1.85 - (double)fVar3))) *
             *param_3;
  param_1[1] = ((float)(dVar8 * 100.0 + 3.5) / (float)(dVar11 * 7.0 + (1.85 - (double)fVar2))) *
               fVar5;
  param_1[2] = ((float)(dVar7 * 100.0 + 3.5) / (float)(dVar10 * 7.0 + (1.85 - (double)fVar1))) *
               fVar4;
  param_1[3] = fVar6;
  return param_1;
}



// FUNCTION 143667580 FUN_143667580 body=1992 status=ok
// SIG undefined FUN_143667580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143667580(undefined8 *param_1,uint param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  float *pfVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar30;
  float fVar32;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar34;
  undefined1 auVar28 [16];
  undefined1 unaff_XMM13 [16];
  undefined1 auVar35 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar36 [16];
  undefined1 unaff_XMM15 [16];
  undefined1 auVar37 [16];
  undefined1 auStack_578 [32];
  float local_558;
  float local_554;
  double local_550;
  double local_548;
  float local_53c;
  float local_538;
  float local_534;
  ulonglong local_530;
  ulonglong local_528;
  undefined8 *local_520;
  longlong local_518;
  ulonglong local_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  float local_4dc [8];
  undefined8 local_4bc [121];
  ulonglong local_f0;
  uint uVar29;
  uint uVar31;
  uint uVar33;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_578;
  uVar8 = param_2 * 2 - 1;
  fVar1 = param_3[1];
  fVar19 = *param_3;
  dVar13 = pow((double)param_3[2] + -0.33,4.0);
  dVar14 = pow((double)fVar1 + -0.33,4.0);
  dVar15 = pow((double)fVar19 + -0.33,4.0);
  if ((int)uVar8 < 1) {
    lVar6 = (longlong)(int)-(param_2 * -2 >> 1);
    *(undefined4 *)((longlong)&uStack_4f0 + lVar6 * 0x10 + 4) = 0;
    local_4f8 = (&local_4f8)[lVar6 * 2];
    uStack_4f0 = (&uStack_4f0)[lVar6 * 2];
  }
  else {
    local_538 = (float)(dVar14 * 100.0 + 3.5);
    iVar4 = param_2 * 2 + -2;
    lVar6 = (ulonglong)(0x14 < (int)uVar8) * 4;
    fVar1 = *(float *)(&DAT_14aa5aa88 + lVar6);
    fVar19 = (fVar1 + fVar1) / (float)iVar4;
    local_510 = (ulonglong)uVar8;
    uVar5 = (ulonglong)(param_2 * 2 + 2 & 0xfffffffc);
    lVar9 = local_510 - 1;
    auVar21._8_4_ = (int)lVar9;
    auVar21._0_8_ = lVar9;
    auVar21._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
    uVar2 = *(undefined4 *)(&DAT_14aa5aa90 + lVar6);
    auVar23 = pmovsxbq(ZEXT816(0x4010000000000000),0x302);
    auVar37 = pmovsxbq(unaff_XMM15,0x100);
    auVar36 = pmovsxbd(unaff_XMM14,0x3020100);
    puVar7 = local_4bc;
    auVar18 = pmovsxbq(ZEXT416((uint)local_538),0x404);
    auVar35 = pmovsxbd(unaff_XMM13,0x4040404);
    do {
      auVar16 = pblendw(auVar36,_DAT_1499827c0,0xaa);
      auVar26._0_4_ = auVar36._0_4_ >> 0x10;
      uVar29 = auVar36._4_4_;
      auVar26._4_4_ = uVar29 >> 0x10;
      uVar31 = auVar36._8_4_;
      uVar33 = auVar36._12_4_;
      auVar26._8_4_ = uVar31 >> 0x10;
      auVar26._12_4_ = uVar33 >> 0x10;
      auVar27 = pblendw(auVar26,_DAT_14aa5aaa0,0xaa);
      fVar25 = ((auVar27._0_4_ - 5.497642e+11) + auVar16._0_4_) * fVar19 + -fVar1;
      fVar30 = ((auVar27._4_4_ - 5.497642e+11) + auVar16._4_4_) * fVar19 + -fVar1;
      fVar32 = ((auVar27._8_4_ - 5.497642e+11) + auVar16._8_4_) * fVar19 + -fVar1;
      fVar34 = ((auVar27._12_4_ - 5.497642e+11) + auVar16._12_4_) * fVar19 + -fVar1;
      auVar17._4_4_ = -(uint)(fVar30 < 0.0);
      auVar17._0_4_ = -(uint)(fVar25 < 0.0);
      auVar17._8_4_ = -(uint)(fVar32 < 0.0);
      auVar17._12_4_ = -(uint)(fVar34 < 0.0);
      auVar24._4_4_ = fVar1;
      auVar24._0_4_ = fVar1;
      auVar24._8_4_ = fVar1;
      auVar24._12_4_ = fVar1;
      auVar16._4_4_ = -fVar1;
      auVar16._0_4_ = -fVar1;
      auVar16._8_4_ = -fVar1;
      auVar16._12_4_ = -fVar1;
      auVar16 = blendvps(auVar24,auVar16,auVar17);
      auVar28._0_4_ = ABS(fVar25 * fVar25) * auVar16._0_4_;
      auVar28._4_4_ = ABS(fVar30 * fVar30) * auVar16._4_4_;
      auVar28._8_4_ = ABS(fVar32 * fVar32) * auVar16._8_4_;
      auVar28._12_4_ = ABS(fVar34 * fVar34) * auVar16._12_4_;
      lVar6 = SUB168(auVar21 ^ _DAT_149931e80,0);
      auVar27._4_4_ = uVar2;
      auVar27._0_4_ = uVar2;
      auVar27._8_4_ = uVar2;
      auVar27._12_4_ = uVar2;
      auVar16 = divps(auVar28,auVar27);
      if ((bool)(~(lVar6 < SUB168(auVar37 ^ _DAT_149931e80,0)) & 1)) {
        *(int *)(puVar7 + -6) = auVar16._0_4_;
      }
      if (SUB168(auVar37 ^ _DAT_149931e80,8) <= SUB168(auVar21 ^ _DAT_149931e80,8)) {
        uVar3 = extractps(auVar16,1);
        puVar7[-4] = uVar3;
      }
      if ((longlong)(auVar23._0_8_ ^ DAT_149931e80) <= lVar6) {
        uVar3 = extractps(auVar16,2);
        puVar7[-2] = uVar3;
        uVar3 = extractps(auVar16,3);
        *puVar7 = uVar3;
      }
      lVar6 = auVar37._8_8_;
      auVar37._0_8_ = auVar37._0_8_ + auVar18._0_8_;
      auVar37._8_8_ = lVar6 + auVar18._8_8_;
      lVar6 = auVar23._8_8_;
      auVar23._0_8_ = auVar23._0_8_ + auVar18._0_8_;
      auVar23._8_8_ = lVar6 + auVar18._8_8_;
      auVar36._0_4_ = auVar36._0_4_ + auVar35._0_4_;
      auVar36._4_4_ = uVar29 + auVar35._4_4_;
      auVar36._8_4_ = uVar31 + auVar35._8_4_;
      auVar36._12_4_ = uVar33 + auVar35._12_4_;
      puVar7 = puVar7 + 8;
      uVar5 = uVar5 - 4;
    } while (uVar5 != 0);
    uVar5 = (ulonglong)(uVar8 >> 1);
    puVar7 = &local_4f8 + uVar5 * 2;
    *(undefined4 *)((longlong)&uStack_4f0 + uVar5 * 0x10 + 4) = 0;
    local_554 = param_5 * 10.0;
    local_534 = 1.0 / (float)(dVar13 * 100.0 + 3.5);
    local_538 = 1.0 / local_538;
    local_558 = 1.0 / (float)(dVar15 * 100.0 + 3.5);
    local_518 = (longlong)iVar4;
    pfVar11 = (float *)&local_4f8;
    uVar10 = 0;
    local_53c = uStack_4f0._4_4_;
    local_530 = (ulonglong)uVar8;
    local_528 = (ulonglong)(param_2 * 2);
    local_520 = param_1;
    do {
      fVar19 = local_534;
      fVar25 = 0.0;
      fVar30 = 0.0;
      fVar1 = local_53c;
      if (uVar10 != 0) {
        fVar1 = pfVar11[3];
        fVar30 = ABS(fVar1 - pfVar11[-1]);
      }
      if ((longlong)uVar10 < local_518) {
        fVar25 = ABS(fVar1 - pfVar11[7]);
      }
      uVar10 = uVar10 + 1;
      fVar22 = (fVar30 + fVar25) * 0.5;
      fVar25 = *param_4;
      fVar30 = param_4[1];
      fVar32 = param_4[2];
      fVar20 = (float)((uint)fVar1 | DAT_1499319e0) * local_554;
      fVar34 = (fVar20 / fVar32) / local_534;
      fVar1 = param_3[2];
      local_550 = (double)param_3[1];
      local_548 = (double)*param_3;
      fVar12 = expf(fVar34);
      dVar13 = exp((double)fVar34 / 3.0);
      fVar34 = local_538;
      dVar13 = ((dVar13 + (double)fVar12) / (double)(fVar32 * fVar19)) * 0.039788734167814255;
      if (dVar13 <= 0.0) {
        dVar13 = 0.0;
      }
      fVar19 = (fVar20 / fVar30) / local_538;
      fVar32 = expf(fVar19);
      dVar14 = exp((double)fVar19 / 3.0);
      fVar19 = local_558;
      dVar14 = ((dVar14 + (double)fVar32) / (double)(fVar30 * fVar34)) * 0.039788734167814255;
      if (dVar14 <= 0.0) {
        dVar14 = 0.0;
      }
      dVar14 = dVar14 * local_550;
      fVar32 = (fVar20 / fVar25) / local_558;
      fVar30 = expf(fVar32);
      dVar15 = exp((double)fVar32 / 3.0);
      dVar15 = ((dVar15 + (double)fVar30) / (double)(fVar25 * fVar19)) * 0.039788734167814255;
      if (dVar15 <= 0.0) {
        dVar15 = 0.0;
      }
      *pfVar11 = (float)(dVar15 * local_548) * fVar22;
      pfVar11[1] = (float)dVar14 * fVar22;
      pfVar11[2] = (float)(dVar13 * (double)fVar1) * fVar22;
      pfVar11 = pfVar11 + 4;
    } while (local_510 != uVar10);
    uVar10 = (ulonglong)((int)local_528 - 2);
    lVar6 = 0;
    do {
      fVar1 = *(float *)((longlong)&uStack_4f0 + lVar6 + 4);
      *(float *)((longlong)&uStack_4f0 + lVar6 + 4) = fVar1 + fVar1;
      lVar6 = lVar6 + 0x10;
    } while (uVar10 * 0x10 + 0x10 != lVar6);
    local_508 = *puVar7;
    uStack_500 = (&uStack_4f0)[uVar5 * 2];
    if ((int)local_530 != 1) {
      uVar5 = uVar5 + 1;
      do {
        *puVar7 = puVar7[-2];
        puVar7[1] = puVar7[-1];
        puVar7 = puVar7 + -2;
        uVar5 = uVar5 - 1;
      } while (1 < uVar5);
    }
    local_4f8 = local_508;
    uStack_4f0 = uStack_500;
    fVar1 = 0.0;
    lVar6 = 0;
    fVar19 = 0.0;
    fVar25 = 0.0;
    do {
      fVar1 = fVar1 + *(float *)((longlong)&local_4f8 + lVar6);
      fVar19 = fVar19 + *(float *)((longlong)&local_4f8 + lVar6 + 4);
      fVar25 = fVar25 + *(float *)((longlong)&uStack_4f0 + lVar6);
      lVar6 = lVar6 + 0x10;
    } while (uVar10 * 0x10 + 0x10 != lVar6);
    lVar6 = 0;
    do {
      *(float *)((longlong)&local_4f8 + lVar6) = *(float *)((longlong)&local_4f8 + lVar6) / fVar1;
      *(float *)((longlong)&local_4f8 + lVar6 + 4) =
           *(float *)((longlong)&local_4f8 + lVar6 + 4) / fVar19;
      *(float *)((longlong)&uStack_4f0 + lVar6) = *(float *)((longlong)&uStack_4f0 + lVar6) / fVar25
      ;
      lVar6 = lVar6 + 0x10;
      param_1 = local_520;
    } while (uVar10 * 0x10 + 0x10 != lVar6);
  }
  *param_1 = local_4f8;
  param_1[1] = uStack_4f0;
  uVar8 = param_2 - 1;
  if (uVar8 != 0) {
    lVar6 = 0;
    do {
      uVar3 = (&uStack_4f0)[(ulonglong)param_2 * 2];
      puVar7 = (undefined8 *)((longlong)param_1 + lVar6 + 0x10);
      *puVar7 = (&local_4f8)[(ulonglong)param_2 * 2];
      puVar7[1] = uVar3;
      lVar6 = lVar6 + 0x10;
      param_2 = param_2 + 1;
    } while ((ulonglong)uVar8 << 4 != lVar6);
  }
  if ((local_f0 ^ (ulonglong)auStack_578) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143667d49 FUN_143667d49 body=1132 status=ok
// SIG undefined FUN_143667d49(void)

void FUN_143667d49(longlong param_1,uint param_2,undefined8 param_3,float param_4,float *param_5,
                  float *param_6,float param_7,float *param_8)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  DWORD DVar11;
  DWORD DVar12;
  ulonglong uVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  lVar10 = DAT_14caff370;
  iVar6 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar6 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar6 == 2)) {
    uVar13 = 0;
  }
  else if (iVar6 == 1) {
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    uVar13 = (ulonglong)(DVar11 != DVar12);
  }
  else {
    uVar13 = 1;
  }
  fVar23 = 1.0 / (param_7 / 0.1);
  if (*(int *)(lVar10 + uVar13 * 4) == 1) {
    fVar23 = fVar23 * 0.1;
  }
  fVar18 = param_5[1];
  fVar2 = *param_5;
  dVar7 = pow((double)param_5[2] + -0.33,4.0);
  dVar8 = pow((double)fVar18 + -0.33,4.0);
  dVar9 = pow((double)fVar2 + -0.33,4.0);
  if (param_2 != 0) {
    pfVar14 = (float *)(param_1 + 0xc);
    uVar13 = 0;
    do {
      fVar19 = (float)(uVar13 & 0xffffffff) * (1.0 / (float)param_2) * 50.0 * fVar23;
      fVar18 = *param_6;
      fVar2 = param_6[1];
      fVar16 = param_6[2];
      fVar20 = fVar23 * 0.59999996 + fVar19;
      fVar3 = param_5[2];
      fVar21 = fVar20 * -(float)(dVar7 * 100.0 + 3.5);
      fVar4 = param_5[1];
      fVar5 = *param_5;
      fVar15 = expf(fVar21 / fVar16);
      fVar16 = expf(fVar21 / (fVar16 * 3.0));
      fVar22 = fVar20 * -(float)(dVar8 * 100.0 + 3.5);
      fVar21 = expf(fVar22 / fVar2);
      fVar22 = expf(fVar22 / (fVar2 * 3.0));
      fVar20 = fVar20 * -(float)(dVar9 * 100.0 + 3.5);
      fVar17 = expf(fVar20 / fVar18);
      fVar20 = expf(fVar20 / (fVar18 * 3.0));
      fVar18 = param_8[2];
      fVar2 = param_8[1];
      pfVar14[-3] = (fVar20 * 3.0 + fVar17) * fVar5 * 0.25 * *param_8;
      pfVar14[-2] = (fVar22 * 3.0 + fVar21) * fVar4 * 0.25 * fVar2;
      pfVar14[-1] = (fVar16 * 3.0 + fVar15) * fVar3 * 0.25 * fVar18;
      fVar18 = expf(-fVar19 * param_4);
      *pfVar14 = fVar18;
      uVar13 = uVar13 + 1;
      pfVar14 = pfVar14 + 4;
    } while (param_2 != uVar13);
  }
  puVar1 = (undefined8 *)(param_1 + (ulonglong)(param_2 - 1) * 0x10);
  *puVar1 = 0;
  puVar1[1] = 0x3f80000000000000;
  return;
}



// FUNCTION 1436681b6 FUN_1436681b6 body=178 status=ok
// SIG undefined FUN_1436681b6(void)

void FUN_1436681b6(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x30),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = (undefined4 *)(param_1 + 0x34);
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *puVar2 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014366822d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
    return;
  }
  FUN_14572512c(param_2,puVar2);
  return;
}



// FUNCTION 143668268 FUN_143668268 body=99 status=ok
// SIG undefined FUN_143668268(void)

void FUN_143668268(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    iVar1 = *(int *)(param_3 + 0x10);
    lVar3 = (longlong)iVar1;
    *(uint *)(param_3 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
      FUN_14742d27e((longlong *)(param_3 + 8),iVar1);
    }
    lVar2 = *(longlong *)(param_3 + 8);
    *(undefined8 *)(lVar2 + lVar3 * 0x18) = *(undefined8 *)(param_1 + 0x10);
    *(longlong *)(lVar2 + 8 + lVar3 * 0x18) = param_2;
    *(undefined1 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0;
  }
  return;
}



// FUNCTION 1436682cc FUN_1436682cc body=87 status=ok
// SIG undefined FUN_1436682cc(void)

void FUN_1436682cc(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(param_2 + 0x10);
    lVar3 = (longlong)iVar1;
    *(uint *)(param_2 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x14) < iVar1 + 1U) {
      FUN_14742d27e((longlong *)(param_2 + 8),iVar1);
    }
    lVar2 = *(longlong *)(param_2 + 8);
    *(undefined8 *)(lVar2 + lVar3 * 0x18) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(lVar2 + 8 + lVar3 * 0x18) = 0;
    *(undefined1 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0;
  }
  return;
}



// FUNCTION 143668324 FUN_143668324 body=773 status=ok
// SIG undefined FUN_143668324(void)

void FUN_143668324(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  ulonglong *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  longlong local_50;
  ulonglong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = L"FColorVertexBuffer";
  local_68 = (ulonglong *)CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x34));
  local_60 = 0x101;
  FUN_14052b6e2(param_1,local_48,param_2,param_1 + 0x18);
  uVar10 = local_48[0];
  puVar1 = (ulonglong *)(param_1 + 0x10);
  if (puVar1 == local_48) {
LAB_1436683f6:
    uVar10 = local_48[0];
    if (local_48[0] != 0) {
      LOCK();
      puVar2 = (uint *)(local_48[0] + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_48[0] + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_48[0] + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = uVar10;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
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
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
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
    uVar10 = *puVar1;
  }
  else {
    uVar5 = *puVar1;
    *puVar1 = local_48[0];
    local_48[0] = 0;
    if (uVar5 != 0) {
      LOCK();
      puVar2 = (uint *)(uVar5 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(uVar5 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(uVar5 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = uVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
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
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
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
      goto LAB_1436683f6;
    }
  }
  if ((uVar10 != 0) &&
     ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 6) & 0x10) != 0)) {
    if ((*(byte *)(uVar10 + 0x28) & 0x10) == 0) {
      local_48[0]._0_3_ = 0x12500;
    }
    else {
      local_48[0]._0_3_ = 0x40000;
    }
    local_48[0] = (ulonglong)(uint3)local_48[0];
    local_48[1] = 0;
    local_68 = local_48;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_50,param_2);
    plVar9 = (longlong *)(param_1 + 0x20);
    if (plVar9 != &local_50) {
      lVar6 = *plVar9;
      *plVar9 = local_50;
      local_50 = 0;
      if (lVar6 == 0) goto LAB_1436685a1;
      LOCK();
      puVar2 = (uint *)(lVar6 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar6 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar6 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar6;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
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
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
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
    lVar6 = local_50;
    if (local_50 != 0) {
      LOCK();
      puVar2 = (uint *)(local_50 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_50 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_50 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar6;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
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
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
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
LAB_1436685a1:
  if ((local_48[2] ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14366862a FUN_14366862a body=729 status=ok
// SIG undefined FUN_14366862a(void)

void FUN_14366862a(longlong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  void *_Src;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined **local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_59;
  void *local_58;
  undefined8 local_50;
  undefined *local_48;
  longlong local_40;
  undefined *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((int)param_1[0x12] - 1U < 2) {
    local_58 = (void *)0x0;
    uVar2 = *(uint *)(param_1 + 0x14);
    _Src = (void *)param_1[0x13];
    local_50 = CONCAT44(local_50._4_4_,uVar2);
    if ((longlong)(int)uVar2 == 0) {
      local_50 = (ulonglong)uVar2;
    }
    else {
      FUN_1446dd670(&local_58,uVar2,0);
      memcpy(local_58,_Src,(longlong)(int)uVar2 * 2);
    }
    FUN_140069376(param_2);
    puVar1 = (ulonglong *)(param_2 + 0x70);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 0x39;
    if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
      FUN_140023dd8(puVar1,0x1d0);
      puVar5 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar5 + 0x39;
    }
    *puVar1 = (ulonglong)puVar4;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c9e1d98) {
      FUN_144b3d300(&DAT_14c9e1d98);
      if (DAT_14c9e1d98 == -1) {
        FUN_14596f92a(&local_48);
        local_70 = 0;
        local_80 = 0;
        local_a0 = "Unknown";
        local_b0 = 0;
        uStack_a8 = 0;
        local_b8 = L"FEmptyShaderParameters";
        local_78 = 0;
        local_90 = 0x10;
        local_98 = 0x7a6;
        local_88 = &local_48;
        FUN_140b49562(&DAT_14c9e1d18,0,1);
        if (local_48 != (undefined *)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_14367bd9d);
        _Init_thread_footer(&DAT_14c9e1d98);
      }
    }
    local_48 = &DAT_14caffe90;
    local_40 = DAT_14c9e1d60;
    if (DAT_14c9e1d60 != 0) {
      LOCK();
      *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
      UNLOCK();
    }
    local_38 = &DAT_14c9e1d18;
    local_b8 = (wchar_t *)((ulonglong)local_b8 & 0xffffffffffffff00);
    FUN_140068f1a(puVar5,&local_59,&local_48,0x10);
    *puVar5 = &PTR_FUN_14aa68630;
    puVar5[0x37] = local_58;
    local_58 = (void *)0x0;
    *(undefined4 *)(puVar5 + 0x38) = (undefined4)local_50;
    *(undefined4 *)((longlong)puVar5 + 0x1c4) = local_50._4_4_;
    local_50 = 0;
    *puVar5 = &PTR_FUN_14aa68610;
    iVar3 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar3 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar3 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar3 * 8) = puVar5;
    *(int *)((longlong)puVar5 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_143204634(param_2,puVar5);
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143668904 FUN_143668904 body=538 status=ok
// SIG undefined FUN_143668904(void)

void FUN_143668904(longlong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  char *local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined **local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_39;
  undefined *local_38;
  longlong local_30;
  undefined *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x28))();
  if ((*(uint *)(param_1 + 0x12) | 2) == 3) {
    FUN_140069376(param_2);
    puVar1 = (ulonglong *)(param_2 + 0x70);
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 0x38;
    if (*(undefined8 **)(param_2 + 0x78) < puVar3) {
      FUN_140023dd8(puVar1,0x1c8);
      puVar4 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar3 = puVar4 + 0x38;
    }
    *puVar1 = (ulonglong)puVar3;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c9e1d98) {
      FUN_144b3d300(&DAT_14c9e1d98);
      if (DAT_14c9e1d98 == -1) {
        FUN_14596f92a(&local_38);
        local_50 = 0;
        local_60 = 0;
        local_80 = "Unknown";
        local_90 = 0;
        uStack_88 = 0;
        local_98 = L"FEmptyShaderParameters";
        local_58 = 0;
        local_70 = 0x10;
        local_78 = 0x7a6;
        local_68 = &local_38;
        FUN_140b49562(&DAT_14c9e1d18,0,1);
        if (local_38 != (undefined *)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_14367bd9d);
        _Init_thread_footer(&DAT_14c9e1d98);
      }
    }
    local_38 = &DAT_14caffea0;
    local_30 = DAT_14c9e1d60;
    if (DAT_14c9e1d60 != 0) {
      LOCK();
      *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
      UNLOCK();
    }
    local_28 = &DAT_14c9e1d18;
    local_98 = (wchar_t *)((ulonglong)local_98 & 0xffffffffffffff00);
    FUN_140068f1a(puVar4,&local_39,&local_38,0x10);
    *puVar4 = &PTR_FUN_14aa68650;
    iVar2 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar2 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar2 * 8) = puVar4;
    *(int *)((longlong)puVar4 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_143204634(param_2,puVar4);
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143668b20 FUN_143668b20 body=1596 status=ok
// SIG undefined FUN_143668b20(void)

void FUN_143668b20(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  void *pvVar6;
  longlong *plVar7;
  void *_Dst;
  longlong *plVar8;
  longlong *plVar9;
  size_t sVar10;
  longlong *plVar11;
  void *_Src;
  char *_Str;
  uint *puVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  uint local_74;
  byte local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  ulonglong local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caff388) && (FUN_144b3d300(&DAT_14caff388), DAT_14caff388 == -1)) {
    DAT_14caff378 = 0x800000014aa61b30;
    local_98 = CONCAT44(local_98._4_4_,0x1d);
    DAT_14caff380 = FUN_14577453c();
    DAT_14caff384 = '\x01';
    _Init_thread_footer(&DAT_14caff388);
  }
  uVar4 = *(uint *)(param_1 + 0x30);
  uVar13 = uVar4 << 2;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 1;
  local_84 = 0;
  uStack_7c = 0;
  local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_70 = 0;
  local_6c = 0;
  local_68 = L"MorphData";
  local_60 = 0;
  uStack_58 = 0;
  if ((longlong)DAT_14caff378 < 0) {
    _Str = (char *)(DAT_14caff378 & 0x7fffffffffffffff);
    if (DAT_14caff384 == '\x01') {
      puVar12 = &local_b8;
      FUN_1446f470e(puVar12,_Str,1);
    }
    else {
      local_b8._0_2_ = SUB82(_Str,0);
      local_b8._2_1_ = (char)((ulonglong)_Str >> 0x10);
      local_b8._3_1_ = (undefined1)((ulonglong)_Str >> 0x18);
      uStack_b4 = (undefined4)((ulonglong)_Str >> 0x20);
      if (_Str == (char *)0x0) {
        uStack_b0 = 0;
      }
      else {
        sVar10 = strlen(_Str);
        uStack_b0 = (undefined4)sVar10;
      }
      puVar12 = (uint *)&local_a0;
      FUN_14001c09c(puVar12,&local_b8,1);
    }
    DAT_14caff378 = (ulonglong)*puVar12;
    local_60 = CONCAT44(DAT_14caff380,*puVar12);
    uStack_58 = 0;
    if ((local_70 & 1) == 0) goto LAB_143668be9;
    local_b8._0_2_ = 0;
    local_b8._2_1_ = 0;
    local_b8._3_1_ = 0;
    uStack_b4 = 0;
    uStack_b0 = 0x100000;
  }
  else {
    local_60 = DAT_14caff378 & 0xffffffff | (ulonglong)DAT_14caff380 << 0x20;
LAB_143668be9:
    uStack_58 = 0;
    local_b8._0_2_ = (undefined2)uVar13;
    local_b8._2_1_ = (char)(uVar13 >> 0x10);
    local_b8._3_1_ = (undefined1)(uVar13 >> 0x18);
    uStack_b4 = 4;
    uStack_b0 = 0x10111;
    if ((uVar4 & 0x3fffffff) == 0) {
      FUN_14570b4be(param_2,&local_98,0x10111,4);
    }
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_c0 = &local_98;
    local_c8 = (undefined2 *)CONCAT44(local_c8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_b8);
    *(undefined4 *)(local_a0 + 0x18) = 0x70;
    FUN_14002049c(param_2,0);
  }
  else {
    local_c0 = &local_98;
    local_c8 = (undefined2 *)CONCAT44(local_c8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_b8);
    *(undefined4 *)(local_a0 + 0x18) = 0x70;
  }
  plVar11 = (longlong *)(param_1 + 0x10);
  if (plVar11 == &local_a0) {
LAB_143668d1e:
    lVar5 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar12 = (uint *)(local_a0 + 8);
      uVar4 = *puVar12;
      *puVar12 = *puVar12 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar12 = (uint *)(local_a0 + 8);
        LOCK();
        uVar4 = *puVar12;
        *puVar12 = *puVar12 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_a0 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar14 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar14) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar14 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar14) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
  }
  else {
    lVar5 = *plVar11;
    *plVar11 = local_a0;
    local_a0 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar12 = (uint *)(lVar5 + 8);
      uVar4 = *puVar12;
      *puVar12 = *puVar12 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar12 = (uint *)(lVar5 + 8);
        LOCK();
        uVar4 = *puVar12;
        *puVar12 = *puVar12 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar5 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar14 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar14) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar14 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar14) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
      goto LAB_143668d1e;
    }
  }
  lVar5 = *plVar11;
  cVar3 = *(char *)(param_2 + 0x69);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,1);
  }
  puVar1 = (ulonglong *)(param_1 + 0x28);
  local_c8 = (undefined2 *)CONCAT44(local_c8._4_4_,uVar13);
  local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,1);
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar5,0);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,0);
  }
  pvVar6 = (void *)*puVar1;
  _Src = (void *)(((longlong)pvVar6 >> 0x18) + (longlong)puVar1);
  if (((ulonglong)pvVar6 & 1) == 0) {
    _Src = pvVar6;
  }
  memcpy(_Dst,_Src,(ulonglong)uVar13);
  lVar5 = *plVar11;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
  }
  local_b8._0_2_ = 0;
  local_b8._3_1_ = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uVar4 = *(uint *)(*plVar11 + 0x28);
  local_b8._2_1_ = '\x04';
  if (((uVar4 & 0x10) == 0) && (local_b8._2_1_ = '\x02', (uVar4 >> 0x10 & 1) == 0)) {
    local_b8._2_1_ = ((byte)(uVar4 >> 0xd) & 1) * '\x02' + '\x01';
  }
  local_c8 = (undefined2 *)&local_b8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar11 = (longlong *)(param_1 + 0x18);
  if (plVar11 != &local_a0) {
    lVar5 = *plVar11;
    *plVar11 = local_a0;
    local_a0 = 0;
    if (lVar5 == 0) goto LAB_143668f67;
    LOCK();
    puVar12 = (uint *)(lVar5 + 8);
    uVar4 = *puVar12;
    *puVar12 = *puVar12 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      puVar12 = (uint *)(lVar5 + 8);
      LOCK();
      uVar4 = *puVar12;
      *puVar12 = *puVar12 | 0x40000000;
      UNLOCK();
      if ((uVar4 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar5 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar11 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar11;
            LOCK();
            bVar14 = plVar11 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar14) {
              plVar11 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar14);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar14 = plVar9 != DAT_14ca843c8;
            plVar11 = plVar8;
            if (bVar14) {
              plVar9 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar14);
        }
      }
    }
  }
  lVar5 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar12 = (uint *)(local_a0 + 8);
    uVar4 = *puVar12;
    *puVar12 = *puVar12 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      puVar12 = (uint *)(local_a0 + 8);
      LOCK();
      uVar4 = *puVar12;
      *puVar12 = *puVar12 | 0x40000000;
      UNLOCK();
      if ((uVar4 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_a0 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar11 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar11;
            LOCK();
            bVar14 = plVar11 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar14) {
              plVar11 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar14);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar14 = plVar9 != DAT_14ca843c8;
            plVar11 = plVar8;
            if (bVar14) {
              plVar9 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar14);
        }
      }
    }
  }
LAB_143668f67:
  if (*(char *)(param_1 + 0x8f) == '\x01') {
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_14024fde8(puVar1,0);
    }
    *(undefined1 *)(param_1 + 0x8c) = 0;
  }
  *(undefined1 *)(param_1 + 0x8e) = 1;
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14366915d FUN_14366915d body=69 status=ok
// SIG undefined FUN_14366915d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366915d(void)

{
  _DAT_14caff390 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366919f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff398,1);
  return;
}



// FUNCTION 1436691b2 FUN_1436691b2 body=69 status=ok
// SIG undefined FUN_1436691b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436691b2(void)

{
  _DAT_14caff430 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436691f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff438,1);
  return;
}



// FUNCTION 1436691f7 FUN_1436691f7 body=69 status=ok
// SIG undefined FUN_1436691f7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436691f7(void)

{
  _DAT_14caff440 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143669239. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff448,1);
  return;
}



// FUNCTION 14366923c FUN_14366923c body=219 status=ok
// SIG undefined FUN_14366923c(void)

void FUN_14366923c(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_68 [40];
  short local_40 [4];
  undefined2 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = (**(code **)(*param_2 + 0x2a8))(param_2,*(undefined1 *)((longlong)param_2 + 0xc1));
  iVar2 = (**(code **)(*param_2 + 0x2a8))(param_2,*(undefined1 *)((longlong)param_2 + 0xc2));
  if (iVar2 - iVar1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    FUN_147cd1d90(param_1 + 0xa8,local_40);
    *local_38 = 0xffff;
    *(longlong **)(local_38 + 4) = param_2;
    *(int *)(local_38 + 8) = iVar2 - iVar1;
    *(undefined8 *)(local_38 + 0xc) = 0;
    *(undefined4 *)(local_38 + 0x10) = 0;
    *(short *)(*(longlong *)(param_1 + 0xa8) + (longlong)local_40[0] * 0x28) = local_40[0];
    *(int *)(param_2 + 0x17) = (int)local_40[0];
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14366932c FUN_14366932c body=1138 status=ok
// SIG undefined FUN_14366932c(void)

void FUN_14366932c(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  uint *local_80;
  longlong local_78;
  LPCRITICAL_SECTION local_70;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_52;
  undefined2 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar2 = (**(code **)(*param_2 + 0x2a8))(param_2,*(undefined1 *)((longlong)param_2 + 0xc1));
  iVar3 = (**(code **)(*param_2 + 0x2a8))(param_2,*(undefined1 *)((longlong)param_2 + 0xc2));
  if (iVar3 == iVar2) goto LAB_14366937d;
  local_70 = (LPCRITICAL_SECTION)(param_1 + 0x10);
  EnterCriticalSection(local_70);
  local_78 = (longlong)(int)param_2[0x17] * 0x28 + *(longlong *)(param_1 + 0xa8);
  local_88 = (longlong *)(param_1 + 0x160);
  if (*(int *)(param_1 + 0x168) != *(int *)(param_1 + 0x194)) {
    uVar4 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    lVar5 = param_1 + 0x198;
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x1a0);
    }
    iVar2 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x1a8) - 1U & uVar4) * 4);
    if (iVar2 != -1) {
      do {
        lVar5 = *local_88 + (longlong)iVar2 * 0x60;
        if (*(longlong **)(*local_88 + (longlong)iVar2 * 0x60) == param_2) {
          local_60 = (longlong *)(lVar5 + 8);
          if (local_60 != (longlong *)0x0 && lVar5 != 0) {
            uVar6 = 0;
            if (*(int *)(param_1 + 0x118) == *(int *)(param_1 + 0x144)) goto LAB_1436694e9;
            lVar11 = param_1 + 0x148;
            if (*(longlong *)(param_1 + 0x150) != 0) {
              lVar11 = *(longlong *)(param_1 + 0x150);
            }
            iVar2 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0x158) - 1U & uVar4) * 4);
            if (iVar2 == -1) goto LAB_1436694e9;
            goto LAB_1436694cc;
          }
          break;
        }
        iVar2 = *(int *)(lVar5 + 0x58);
      } while (iVar2 != -1);
    }
  }
  goto LAB_143669592;
  while (iVar2 = *(int *)(lVar11 + 0x58), iVar2 != -1) {
LAB_1436694cc:
    lVar11 = *(longlong *)(param_1 + 0x110) + (longlong)iVar2 * 0x60;
    if (*(longlong **)(*(longlong *)(param_1 + 0x110) + (longlong)iVar2 * 0x60) == param_2)
    goto LAB_1436694eb;
  }
LAB_1436694e9:
  lVar11 = 0;
LAB_1436694eb:
  plVar12 = (longlong *)(lVar11 + 8);
  if (lVar11 == 0) {
    plVar12 = (longlong *)0x0;
  }
  local_80 = (uint *)(lVar5 + 0x18);
  iVar2 = *(int *)(lVar5 + 0x30);
  uVar16 = 1;
  iVar17 = 0;
  iVar3 = 0;
  if (iVar2 != 0) {
    puVar9 = *(uint **)(lVar5 + 0x28);
    if (*(uint **)(lVar5 + 0x28) == (uint *)0x0) {
      puVar9 = local_80;
    }
    uVar4 = *puVar9;
    if (uVar4 == 0) {
      iVar3 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar3 = iVar2 + -1;
      }
      uVar6 = 0;
      uVar16 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar16 = uVar6;
      }
      iVar17 = 0;
      do {
        if (uVar16 == uVar6) goto LAB_143669592;
        iVar17 = iVar17 + 0x20;
        uVar4 = puVar9[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar6 = 0;
    }
    uVar16 = (ulonglong)(-uVar4 & uVar4);
    uVar1 = uVar16 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar3 = (iVar17 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 != iVar2) {
    local_68 = plVar12 + 7;
    uVar4 = 0xffffffff;
    iVar15 = iVar2;
    do {
      uVar1 = *(ulonglong *)(*local_60 + (longlong)iVar3 * 0x10);
      if ((plVar12 != (longlong *)0x0) && ((int)plVar12[1] != *(int *)((longlong)plVar12 + 0x34))) {
        uVar7 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        plVar8 = (longlong *)plVar12[8];
        if ((longlong *)plVar12[8] == (longlong *)0x0) {
          plVar8 = local_68;
        }
        iVar3 = *(int *)((longlong)plVar8 +
                        (ulonglong)((int)plVar12[9] - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
        if (iVar3 != -1) {
          do {
            if (*(ulonglong *)(*plVar12 + (longlong)iVar3 * 0x10) == uVar1) goto LAB_1436696dc;
            iVar3 = *(int *)((longlong)iVar3 * 0x10 + *plVar12 + 8);
          } while (iVar3 != -1);
        }
      }
      *(byte *)(uVar1 + 0x2d3) = *(byte *)(uVar1 + 0x2d3) & 0xfe;
      iVar15 = *(int *)(lVar5 + 0x30);
LAB_1436696dc:
      uVar4 = uVar4 & ~(uint)uVar16;
      puVar9 = *(uint **)(lVar5 + 0x28);
      if (*(uint **)(lVar5 + 0x28) == (uint *)0x0) {
        puVar9 = local_80;
      }
      iVar3 = (int)uVar6;
      lVar11 = (longlong)iVar3;
      uVar7 = puVar9[lVar11] & uVar4;
      if (uVar7 == 0) {
        iVar13 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar13 = iVar15 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar14 = iVar13;
        if (iVar13 < iVar3) {
          iVar14 = iVar3;
        }
        if (iVar3 < iVar13) {
          lVar10 = 0;
          do {
            uVar7 = puVar9[lVar11 + lVar10 + 1];
            if (uVar7 != 0) {
              uVar6 = (ulonglong)(iVar3 + (int)lVar10 + 1);
              uVar4 = 0xffffffff;
              goto LAB_143669752;
            }
            iVar17 = iVar17 + 0x20;
            lVar10 = lVar10 + 1;
          } while (iVar14 - lVar11 != lVar10);
          uVar4 = 0xffffffff;
          lVar11 = (longlong)iVar14;
        }
        uVar6 = lVar11 + 1U & 0xffffffff;
        iVar3 = iVar15;
      }
      else {
LAB_143669752:
        uVar16 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar16 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar3 = (iVar17 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar15 <= iVar3) {
          iVar3 = iVar15;
        }
      }
    } while (iVar3 != iVar2);
  }
LAB_143669592:
  FUN_147cd1e76(local_88,param_2);
  FUN_147cd1e76(param_1 + 0x110,param_2);
  if (*(int *)(local_78 + 0x20) != 0) {
    *(longlong *)(param_1 + 0x200) =
         *(longlong *)(param_1 + 0x200) - (ulonglong)*(uint *)(local_78 + 0x10);
    if (*(int *)(local_78 + 0x20) - 3U < 3) {
      *(longlong *)(param_1 + 0x208) =
           *(longlong *)(param_1 + 0x208) - (ulonglong)*(uint *)(local_78 + 0x10);
    }
    local_52 = (undefined2)param_2[0x17];
    local_50 = &local_52;
    FUN_147cd202a(param_1 + 0xe0);
  }
  FUN_147cd20fe(param_1 + 0xa8,(int)param_2[0x17]);
  *(undefined4 *)(param_2 + 0x17) = 0xffffffff;
  LeaveCriticalSection(local_70);
LAB_14366937d:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436697a0 FUN_1436697a0 body=1611 status=ok
// SIG undefined FUN_1436697a0(void)

void FUN_1436697a0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int local_9c;
  uint local_94;
  ulonglong local_90;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  iVar5 = *(int *)(param_1 + 0x138);
  if (iVar5 == 0) {
    uVar21 = 1;
    uVar15 = 0;
    iVar14 = 0;
    iVar8 = 0;
  }
  else {
    puVar17 = *(uint **)(param_1 + 0x130);
    if (*(uint **)(param_1 + 0x130) == (uint *)0x0) {
      puVar17 = (uint *)(param_1 + 0x120);
    }
    uVar16 = *puVar17;
    if (uVar16 == 0) {
      iVar14 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar14 = iVar5 + -1;
      }
      uVar15 = 0;
      uVar12 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar12 = uVar15;
      }
      iVar14 = 0;
      do {
        if (uVar12 == uVar15) goto LAB_143669c44;
        iVar14 = iVar14 + 0x20;
        uVar16 = puVar17[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar15 = 0;
      iVar14 = 0;
    }
    uVar21 = (ulonglong)(-uVar16 & uVar16);
    uVar12 = uVar21 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar8 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar8) {
      iVar8 = iVar5;
    }
  }
  if (iVar5 <= iVar8) {
LAB_143669c44:
    FUN_147cd3644(param_1 + 0x110);
    if (0 < *(int *)(param_1 + 0xe8)) {
      uVar16 = 0;
      do {
        lVar13 = (longlong)(int)uVar16;
        lVar18 = (longlong)*(short *)(*(longlong *)(param_1 + 0xe0) + lVar13 * 2);
        iVar5 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x20 + lVar18 * 0x28);
        if (iVar5 - 1U < 5) {
          lVar18 = *(longlong *)(param_1 + 0xa8) + lVar18 * 0x28;
          plVar3 = *(longlong **)(lVar18 + 8);
          switch(iVar5) {
          case 1:
            cVar4 = (**(code **)(*plVar3 + 0x2c8))(plVar3,*(undefined1 *)((longlong)plVar3 + 0xc2));
            if (cVar4 != '\0') {
              FUN_1400980f0(*(undefined8 *)(lVar18 + 8),0,0);
              *(undefined4 *)(lVar18 + 0x20) = 2;
            }
            break;
          case 2:
            FUN_1400980f0(plVar3,0,0);
            if (*(char *)((longlong)plVar3 + 0xc5) == *(char *)((longlong)plVar3 + 0xc6)) {
              *(undefined4 *)(lVar18 + 0x20) = 3;
              *(longlong *)(param_1 + 0x208) =
                   *(longlong *)(param_1 + 0x208) + (ulonglong)*(uint *)(lVar18 + 0x10);
            }
            break;
          case 4:
            (**(code **)(*plVar3 + 0x2c0))(plVar3,*(undefined1 *)((longlong)plVar3 + 0xc1));
            FUN_1400980f0(*(undefined8 *)(lVar18 + 8),0,0);
            *(undefined4 *)(lVar18 + 0x20) = 5;
            break;
          case 5:
            FUN_1400980f0(plVar3,0,0);
            if (*(char *)((longlong)plVar3 + 0xc5) == *(char *)((longlong)plVar3 + 0xc6)) {
              *(undefined4 *)(lVar18 + 0x20) = 0;
              iVar5 = *(int *)(param_1 + 0xe8);
              if (~uVar16 + iVar5 != 0) {
                memmove((void *)(*(longlong *)(param_1 + 0xe0) + lVar13 * 2),
                        (void *)(*(longlong *)(param_1 + 0xe0) + lVar13 * 2 + 2),
                        (longlong)(int)(~uVar16 + iVar5) * 2);
                iVar5 = *(int *)(param_1 + 0xe8);
              }
              *(int *)(param_1 + 0xe8) = iVar5 + -1;
              FUN_146cb447a(param_1 + 0xe0);
              uVar16 = uVar16 - 1;
              *(longlong *)(param_1 + 0x208) =
                   *(longlong *)(param_1 + 0x208) - (ulonglong)*(uint *)(lVar18 + 0x10);
            }
          }
        }
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < *(int *)(param_1 + 0xe8));
    }
                    /* WARNING: Could not recover jumptable at 0x000143669ddb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    return;
  }
  uVar16 = 0xffffffff;
LAB_14366988e:
  if (*(int *)(param_1 + 0x168) != *(int *)(param_1 + 0x194)) {
    lVar18 = *(longlong *)(param_1 + 0x110);
    lVar19 = (longlong)iVar8 * 0x60;
    uVar12 = *(ulonglong *)(lVar18 + lVar19);
    uVar9 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    lVar13 = *(longlong *)(param_1 + 0x1a0);
    if (*(longlong *)(param_1 + 0x1a0) == 0) {
      lVar13 = param_1 + 0x198;
    }
    iVar5 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x1a8) - 1U & (uVar9 >> 0x10 ^ uVar9))
                              * 4);
    if (iVar5 != -1) {
      lVar13 = *(longlong *)(param_1 + 0x160);
      do {
        lVar1 = lVar13 + (longlong)iVar5 * 0x60;
        if (*(ulonglong *)(lVar13 + (longlong)iVar5 * 0x60) == uVar12) {
          if (lVar1 + 8 != 0 && lVar1 != 0) {
            lVar13 = lVar18 + lVar19;
            puVar17 = (uint *)(lVar18 + lVar19 + 0x18);
            iVar5 = *(int *)(lVar18 + lVar19 + 0x30);
            if (iVar5 == 0) {
              uVar20 = 1;
              local_90 = 0;
              local_9c = 0;
              iVar8 = 0;
              goto LAB_143669a09;
            }
            puVar6 = *(uint **)(lVar13 + 0x28);
            if (*(uint **)(lVar13 + 0x28) == (uint *)0x0) {
              puVar6 = puVar17;
            }
            uVar9 = *puVar6;
            if (uVar9 != 0) {
              local_90 = 0;
              local_9c = 0;
              goto LAB_1436699cc;
            }
            iVar8 = iVar5 + 0x1e;
            if (-1 < iVar5 + -1) {
              iVar8 = iVar5 + -1;
            }
            local_90 = 0;
            uVar20 = (ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              uVar20 = local_90;
            }
            local_9c = 0;
            goto LAB_1436699b0;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x58);
      } while (iVar5 != -1);
    }
  }
  goto LAB_143669a27;
  while( true ) {
    local_9c = local_9c + 0x20;
    uVar9 = puVar6[local_90 + 1];
    local_90 = local_90 + 1;
    if (uVar9 != 0) break;
LAB_1436699b0:
    if (uVar20 == local_90) goto LAB_143669a12;
  }
LAB_1436699cc:
  uVar20 = (ulonglong)(-uVar9 & uVar9);
  uVar2 = uVar20 * 2 + 1;
  lVar18 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  iVar8 = (local_9c - ((uint)lVar18 ^ 0x3f)) + 0x3e;
  if (iVar5 <= iVar8) {
    iVar8 = iVar5;
  }
LAB_143669a09:
  if (iVar8 != iVar5) {
    local_94 = 0xffffffff;
    do {
      FUN_147cca89e(lVar1 + 8,*(undefined8 *)(*(longlong *)(lVar13 + 8) + (longlong)iVar8 * 0x10));
      local_94 = ~(uint)uVar20 & local_94;
      puVar6 = *(uint **)(lVar13 + 0x28);
      if (*(uint **)(lVar13 + 0x28) == (uint *)0x0) {
        puVar6 = puVar17;
      }
      iVar7 = *(int *)(lVar13 + 0x30);
      iVar8 = (int)local_90;
      lVar18 = (longlong)iVar8;
      uVar9 = puVar6[lVar18] & local_94;
      if (uVar9 == 0) {
        iVar10 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar10 = iVar7 + -1;
        }
        iVar10 = iVar10 >> 5;
        local_9c = local_9c + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar8) {
          iVar11 = iVar8;
        }
        if (iVar8 < iVar10) {
          lVar19 = 0;
          do {
            uVar9 = puVar6[lVar18 + lVar19 + 1];
            if (uVar9 != 0) {
              local_90 = (ulonglong)(iVar8 + (int)lVar19 + 1);
              local_94 = 0xffffffff;
              goto LAB_143669b9d;
            }
            local_9c = local_9c + 0x20;
            lVar19 = lVar19 + 1;
          } while (iVar11 - lVar18 != lVar19);
          local_94 = 0xffffffff;
          lVar18 = (longlong)iVar11;
        }
        local_90 = lVar18 + 1;
        iVar8 = iVar7;
      }
      else {
LAB_143669b9d:
        uVar20 = (ulonglong)(-uVar9 & uVar9);
        uVar2 = uVar20 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar8 = (local_9c - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar7 <= iVar8) {
          iVar8 = iVar7;
        }
      }
    } while (iVar8 != iVar5);
  }
LAB_143669a12:
  if (*(int *)(lVar1 + 0x10) == *(int *)(lVar1 + 0x3c)) {
    FUN_147cd1e76((longlong *)(param_1 + 0x160),uVar12);
  }
LAB_143669a27:
  uVar16 = uVar16 & ~(uint)uVar21;
  puVar17 = *(uint **)(param_1 + 0x130);
  if (*(uint **)(param_1 + 0x130) == (uint *)0x0) {
    puVar17 = (uint *)(param_1 + 0x120);
  }
  iVar5 = *(int *)(param_1 + 0x138);
  iVar8 = (int)uVar15;
  lVar18 = (longlong)iVar8;
  uVar9 = puVar17[lVar18] & uVar16;
  if (uVar9 == 0) {
    iVar7 = iVar5 + 0x1e;
    if (-1 < iVar5 + -1) {
      iVar7 = iVar5 + -1;
    }
    iVar7 = iVar7 >> 5;
    iVar10 = iVar7;
    if (iVar7 < iVar8) {
      iVar10 = iVar8;
    }
    if (iVar7 <= iVar8) goto LAB_143669c44;
    lVar13 = 0;
    while( true ) {
      iVar14 = iVar14 + 0x20;
      uVar9 = puVar17[lVar18 + lVar13 + 1];
      if (uVar9 != 0) break;
      lVar13 = lVar13 + 1;
      if (iVar10 - lVar18 == lVar13) goto LAB_143669c44;
    }
    uVar15 = (ulonglong)(iVar8 + (int)lVar13 + 1);
    uVar16 = 0xffffffff;
  }
  uVar21 = (ulonglong)(-uVar9 & uVar9);
  uVar12 = uVar21 * 2 + 1;
  lVar18 = 0x3f;
  if (uVar12 != 0) {
    for (; uVar12 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  iVar8 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
  if (iVar5 <= iVar8) goto LAB_143669c44;
  goto LAB_14366988e;
}



// FUNCTION 143669dec FUN_143669dec body=3336 status=ok
// SIG undefined FUN_143669dec(void)

void FUN_143669dec(longlong param_1)

{
  LPCRITICAL_SECTION p_Var1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort *puVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  short *psVar10;
  int iVar11;
  uint *puVar12;
  longlong *plVar13;
  int iVar14;
  short *psVar15;
  short *psVar16;
  ushort *puVar17;
  longlong lVar18;
  uint uVar19;
  short *psVar20;
  short *psVar21;
  ushort *puVar22;
  ulonglong uVar23;
  ushort *puVar24;
  int iVar25;
  short *psVar26;
  ushort *puVar27;
  longlong lVar28;
  ulonglong uVar29;
  ushort *puVar30;
  ushort *puVar31;
  int iVar32;
  int iVar33;
  ushort *puVar34;
  uint *puVar35;
  ulonglong uVar36;
  longlong lVar37;
  uint uVar38;
  ushort *puVar39;
  longlong lVar40;
  ushort *puVar41;
  bool bVar42;
  float fVar43;
  undefined1 auStack_3a8 [40];
  longlong *local_380;
  longlong *local_378;
  ulonglong local_370;
  LPCRITICAL_SECTION local_368;
  uint *local_360;
  longlong local_358;
  undefined8 uStack_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  p_Var1 = (LPCRITICAL_SECTION)(param_1 + 0x10);
  EnterCriticalSection(p_Var1);
  *(longlong *)(param_1 + 0x210) = *(longlong *)(param_1 + 0x210) + 1;
  plVar13 = (longlong *)(param_1 + 0x48);
  local_358 = 0;
  uStack_350 = 0;
  iVar14 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x7c);
  if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar14);
  }
  if (iVar14 != 0) {
    FUN_140ca8596();
  }
  puVar35 = (uint *)(param_1 + 0x58);
  iVar14 = *(int *)(param_1 + 0x70);
  local_368 = p_Var1;
  if (iVar14 == 0) {
    uVar36 = 1;
    uVar23 = 0;
    iVar25 = 0;
    iVar33 = 0;
  }
  else {
    puVar12 = *(uint **)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
      puVar12 = puVar35;
    }
    uVar38 = *puVar12;
    if (uVar38 == 0) {
      iVar25 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar25 = iVar14 + -1;
      }
      local_370 = 0;
      uVar29 = (ulonglong)(uint)(iVar25 >> 5);
      if (iVar25 >> 5 < 1) {
        uVar29 = local_370;
      }
      uVar23 = 0;
      iVar25 = 0;
      do {
        if (uVar29 == uVar23) goto LAB_14366a045;
        iVar25 = iVar25 + 0x20;
        uVar38 = puVar12[uVar23 + 1];
        uVar23 = uVar23 + 1;
      } while (uVar38 == 0);
    }
    else {
      uVar23 = 0;
      iVar25 = 0;
    }
    uVar36 = (ulonglong)(-uVar38 & uVar38);
    uVar29 = uVar36 * 2 + 1;
    lVar40 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar40 == 0; lVar40 = lVar40 + -1) {
      }
    }
    iVar33 = (iVar25 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar33) {
      iVar33 = iVar14;
    }
  }
  if (iVar33 < iVar14) {
    local_380 = (longlong *)(param_1 + 0xb8);
    uVar38 = 0xffffffff;
    local_370 = 0;
    local_378 = plVar13;
    local_360 = puVar35;
    do {
      uVar29 = uStack_350;
      sVar2 = *(short *)(*plVar13 + (longlong)iVar33 * 0xc);
      uVar19 = (uint)sVar2;
      if ((-1 < sVar2) && ((int)uVar19 < *(int *)(param_1 + 0xd0))) {
        plVar8 = *(longlong **)(param_1 + 200);
        if (*(longlong **)(param_1 + 200) == (longlong *)0x0) {
          plVar8 = local_380;
        }
        if ((*(uint *)((longlong)plVar8 + (ulonglong)(uVar19 >> 5) * 4) >> (uVar19 & 0x1f) & 1) != 0
           ) {
          lVar9 = (longlong)(int)uVar19;
          lVar40 = *(longlong *)(param_1 + 0xa8);
          *(undefined8 *)(lVar40 + 0x18 + lVar9 * 0x28) = *(undefined8 *)(param_1 + 0x210);
          if (*(int *)(lVar40 + 0x20 + lVar9 * 0x28) == 0) {
            uVar19 = *(uint *)(lVar40 + lVar9 * 0x28 + 0x10);
            lVar40 = (longlong)(int)uStack_350;
            uVar7 = (int)uStack_350 + 1;
            uStack_350 = CONCAT44(uStack_350._4_4_,uVar7);
            if (uStack_350._4_4_ < uVar7) {
              FUN_1405b572a(&local_358,uVar29 & 0xffffffff);
            }
            local_370 = local_370 + uVar19;
            *(short *)(local_358 + lVar40 * 2) = sVar2;
            puVar35 = local_360;
            plVar13 = local_378;
          }
        }
      }
      uVar38 = uVar38 & ~(uint)uVar36;
      puVar12 = *(uint **)(param_1 + 0x68);
      if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
        puVar12 = puVar35;
      }
      iVar14 = *(int *)(param_1 + 0x70);
      iVar33 = (int)uVar23;
      lVar40 = (longlong)iVar33;
      uVar19 = puVar12[lVar40] & uVar38;
      if (uVar19 == 0) {
        iVar11 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar11 = iVar14 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar32 = iVar11;
        if (iVar11 < iVar33) {
          iVar32 = iVar33;
        }
        if (iVar11 <= iVar33) break;
        lVar9 = 0;
        while( true ) {
          iVar25 = iVar25 + 0x20;
          uVar19 = puVar12[lVar40 + lVar9 + 1];
          if (uVar19 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar32 - lVar40 == lVar9) goto LAB_14366a045;
        }
        uVar23 = (ulonglong)(iVar33 + (int)lVar9 + 1);
        uVar38 = 0xffffffff;
      }
      uVar36 = (ulonglong)(-uVar19 & uVar19);
      uVar29 = uVar36 * 2 + 1;
      lVar40 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar40 == 0; lVar40 = lVar40 + -1) {
        }
      }
      iVar33 = (iVar25 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
    } while (iVar33 < iVar14);
  }
  else {
    local_370 = 0;
  }
LAB_14366a045:
  FUN_147ccabdc(plVar13);
  if (DAT_14caff450 == 1) {
    FUN_147ccac4a(param_1);
  }
  else if (DAT_14caff450 == 2) {
    FUN_147ccadc2(param_1);
  }
  else {
    local_378 = (longlong *)((longlong)DAT_14c761960 * 0x100000);
    if (local_378 < (longlong *)(*(longlong *)(param_1 + 0x200) + local_370)) {
      iVar14 = *(int *)(param_1 + 0xe8);
      if (1 < (longlong)iVar14) {
        lVar40 = *(longlong *)(param_1 + 0xe0);
        memset(local_338,0,0x2f0);
        local_340 = lVar40 + (longlong)iVar14 * 2 + -2;
        local_348 = lVar40;
        fVar43 = logf((float)iVar14);
        local_338[0] = (int)(longlong)(fVar43 + fVar43);
        plVar13 = &local_348;
        do {
          psVar16 = (short *)*plVar13;
          psVar10 = (short *)plVar13[1];
          iVar14 = (int)plVar13[2];
          iVar25 = (int)((ulonglong)((longlong)psVar10 - (longlong)psVar16) >> 1);
          uVar38 = iVar25 + 1;
          if (iVar14 != 0) {
LAB_14366a11b:
            if (8 < (int)uVar38) {
              sVar2 = *(short *)((longlong)psVar16 + (ulonglong)(uVar38 & 0xfffffffe));
              *(short *)((longlong)psVar16 + (ulonglong)(uVar38 & 0xfffffffe)) = *psVar16;
              *psVar16 = sVar2;
              psVar15 = psVar16;
              psVar26 = psVar10 + 1;
              do {
                psVar15 = psVar15 + 1;
                if (psVar15 <= psVar10) {
                  lVar9 = *(longlong *)(param_1 + 0xa8);
                  lVar40 = lVar9 + (longlong)*psVar16 * 0x28;
                  uVar23 = *(ulonglong *)(lVar40 + 0x18);
                  do {
                    uVar29 = *(ulonglong *)(lVar9 + 0x18 + (longlong)*psVar15 * 0x28);
                    if (uVar23 == uVar29) {
                      if (*(uint *)(lVar9 + (longlong)*psVar15 * 0x28 + 0x10) <
                          *(uint *)(lVar40 + 0x10)) break;
                    }
                    else if (uVar23 < uVar29) break;
                    psVar15 = psVar15 + 1;
                  } while (psVar15 <= psVar10);
                }
                psVar21 = psVar26 + -1;
                if (psVar16 < psVar21) {
                  lVar9 = *(longlong *)(param_1 + 0xa8);
                  lVar40 = lVar9 + (longlong)*psVar16 * 0x28;
                  uVar23 = *(ulonglong *)(lVar40 + 0x18);
                  do {
                    psVar20 = psVar21;
                    uVar29 = *(ulonglong *)(lVar9 + 0x18 + (longlong)psVar26[-1] * 0x28);
                    psVar21 = psVar20;
                    if (uVar29 == uVar23) {
                      if (*(uint *)(lVar40 + 0x10) <
                          *(uint *)(lVar9 + (longlong)psVar26[-1] * 0x28 + 0x10)) break;
                    }
                    else if (uVar29 < uVar23) {
                      psVar26 = psVar20 + 1;
                      break;
                    }
                    psVar21 = psVar20 + -1;
                    psVar26 = psVar20;
                  } while (psVar16 < psVar21);
                }
                if (psVar21 < psVar15) goto LAB_14366a1fb;
                sVar2 = *psVar15;
                *psVar15 = *psVar21;
                *psVar21 = sVar2;
                psVar26 = psVar21;
              } while( true );
            }
            if (psVar16 < psVar10) {
              do {
                psVar15 = psVar16;
                if (psVar16 + 1 <= psVar10) {
                  lVar40 = *(longlong *)(param_1 + 0xa8);
                  psVar26 = psVar16;
                  psVar21 = psVar16 + 1;
                  do {
                    uVar23 = *(ulonglong *)(lVar40 + 0x18 + (longlong)*psVar21 * 0x28);
                    uVar29 = *(ulonglong *)(lVar40 + 0x18 + (longlong)*psVar26 * 0x28);
                    bVar42 = uVar29 < uVar23;
                    if (uVar29 == uVar23) {
                      bVar42 = *(uint *)(lVar40 + (longlong)*psVar21 * 0x28 + 0x10) <
                               *(uint *)(lVar40 + (longlong)*psVar26 * 0x28 + 0x10);
                    }
                    psVar15 = psVar21;
                    if (!bVar42) {
                      psVar15 = psVar26;
                    }
                    psVar21 = psVar21 + 1;
                    psVar26 = psVar15;
                  } while (psVar21 <= psVar10);
                }
                sVar2 = *psVar15;
                *psVar15 = *psVar10;
                *psVar10 = sVar2;
                psVar10 = psVar10 + -1;
              } while (psVar16 < psVar10);
            }
            goto LAB_14366a509;
          }
LAB_14366a283:
          if (uVar38 != 0) {
            iVar14 = (iVar25 - (iVar25 + -1 >> 0x1f)) + -1 >> 1;
            iVar25 = iVar14;
joined_r0x00014366a2a9:
            do {
              iVar33 = iVar14 * 2 + 1;
              if (iVar33 < (int)uVar38) {
                iVar11 = iVar14 * 2 + 2;
                lVar40 = *(longlong *)(param_1 + 0xa8);
                if (iVar11 < (int)uVar38) {
                  uVar23 = *(ulonglong *)(lVar40 + 0x18 + (longlong)psVar16[iVar33] * 0x28);
                  uVar29 = *(ulonglong *)(lVar40 + 0x18 + (longlong)psVar16[iVar11] * 0x28);
                  bVar42 = uVar29 < uVar23;
                  if (uVar29 == uVar23) {
                    bVar42 = *(uint *)(lVar40 + (longlong)psVar16[iVar33] * 0x28 + 0x10) <
                             *(uint *)(lVar40 + (longlong)psVar16[iVar11] * 0x28 + 0x10);
                  }
                  if (!bVar42) {
                    iVar33 = iVar11;
                  }
                }
                sVar2 = psVar16[iVar14];
                sVar3 = psVar16[iVar33];
                uVar23 = *(ulonglong *)(lVar40 + 0x18 + (longlong)sVar3 * 0x28);
                uVar29 = *(ulonglong *)(lVar40 + 0x18 + (longlong)sVar2 * 0x28);
                if (uVar29 == uVar23) {
                  if (*(uint *)(lVar40 + (longlong)sVar3 * 0x28 + 0x10) <
                      *(uint *)(lVar40 + (longlong)sVar2 * 0x28 + 0x10)) {
LAB_14366a348:
                    psVar16[iVar14] = sVar3;
                    psVar16[iVar33] = sVar2;
                    iVar14 = iVar33;
                    goto joined_r0x00014366a2a9;
                  }
                }
                else if (uVar29 < uVar23) goto LAB_14366a348;
              }
              bVar42 = iVar25 != 0;
              iVar14 = iVar25 + -1;
              iVar25 = iVar14;
            } while (bVar42);
            if (1 < (int)uVar38) {
              uVar23 = (ulonglong)uVar38;
              sVar2 = *psVar16;
              *psVar16 = psVar16[uVar23 - 1];
              psVar16[uVar23 - 1] = sVar2;
              if (uVar38 != 2) {
                do {
                  uVar29 = uVar23 - 1;
                  iVar14 = 0;
                  iVar33 = 1;
                  iVar25 = 0;
                  do {
                    iVar14 = iVar14 + 2;
                    lVar40 = *(longlong *)(param_1 + 0xa8);
                    iVar11 = iVar33;
                    if ((longlong)iVar14 < (longlong)uVar29) {
                      uVar36 = *(ulonglong *)(lVar40 + 0x18 + (longlong)psVar16[iVar33] * 0x28);
                      uVar5 = *(ulonglong *)(lVar40 + 0x18 + (longlong)psVar16[iVar14] * 0x28);
                      bVar42 = uVar5 < uVar36;
                      if (uVar5 == uVar36) {
                        bVar42 = *(uint *)(lVar40 + (longlong)psVar16[iVar33] * 0x28 + 0x10) <
                                 *(uint *)(lVar40 + (longlong)psVar16[iVar14] * 0x28 + 0x10);
                      }
                      if (!bVar42) {
                        iVar11 = iVar14;
                      }
                    }
                    sVar2 = psVar16[iVar25];
                    sVar3 = psVar16[iVar11];
                    uVar36 = *(ulonglong *)(lVar40 + 0x18 + (longlong)sVar3 * 0x28);
                    uVar5 = *(ulonglong *)(lVar40 + 0x18 + (longlong)sVar2 * 0x28);
                    if (uVar5 == uVar36) {
                      if (*(uint *)(lVar40 + (longlong)sVar2 * 0x28 + 0x10) <=
                          *(uint *)(lVar40 + (longlong)sVar3 * 0x28 + 0x10)) break;
                    }
                    else if (uVar36 <= uVar5) break;
                    psVar16[iVar25] = sVar3;
                    psVar16[iVar11] = sVar2;
                    iVar14 = iVar11 * 2;
                    iVar33 = iVar11 * 2 + 1;
                    iVar25 = iVar11;
                  } while ((longlong)iVar33 < (longlong)uVar29);
                  sVar2 = *psVar16;
                  *psVar16 = psVar16[uVar23 - 2];
                  psVar16[uVar23 - 2] = sVar2;
                  uVar23 = uVar29;
                } while (2 < uVar29);
              }
            }
          }
LAB_14366a509:
          plVar13 = plVar13 + -3;
        } while (&local_348 <= plVar13);
        iVar14 = *(int *)(param_1 + 0xe8);
      }
      if (iVar14 != 0) {
        psVar10 = *(short **)(param_1 + 0xe0);
        lVar40 = *(longlong *)(param_1 + 0xa8);
        lVar9 = *(longlong *)(param_1 + 0x210);
        if (*(longlong *)(lVar40 + 0x18 + (longlong)*psVar10 * 0x28) != lVar9) {
          psVar16 = psVar10 + iVar14;
          lVar28 = lVar40 + (longlong)*psVar10 * 0x28;
          do {
            if (*(int *)(lVar28 + 0x20) == 3) {
              *(undefined4 *)(lVar28 + 0x20) = 4;
              lVar40 = *(longlong *)(param_1 + 0x200) - (ulonglong)*(uint *)(lVar28 + 0x10);
              *(longlong *)(param_1 + 0x200) = lVar40;
              if (((longlong *)(lVar40 + local_370) <= local_378) || (psVar10 + 1 == psVar16))
              break;
              lVar40 = *(longlong *)(param_1 + 0xa8);
              lVar9 = *(longlong *)(param_1 + 0x210);
            }
            else if (psVar10 + 1 == psVar16) break;
            psVar10 = psVar10 + 1;
            lVar28 = lVar40 + (longlong)*psVar10 * 0x28;
          } while (*(longlong *)(lVar28 + 0x18) != lVar9);
        }
      }
    }
    lVar40 = local_358;
    iVar14 = (int)uStack_350;
    if (1 < (int)uStack_350 && local_378 < (longlong *)(local_370 + *(longlong *)(param_1 + 0x200)))
    {
      uVar23 = uStack_350 & 0xffffffff;
      memset(local_338,0,0x2f0);
      local_348 = lVar40;
      local_340 = lVar40 + uVar23 * 2 + -2;
      fVar43 = logf((float)iVar14);
      local_338[0] = (int)(longlong)(fVar43 + fVar43);
      plVar13 = &local_348;
      do {
        puVar17 = (ushort *)*plVar13;
        puVar22 = (ushort *)plVar13[1];
        iVar14 = (int)plVar13[2];
        iVar25 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar17) >> 1);
        uVar23 = (ulonglong)(iVar25 + 1);
        puVar30 = puVar22;
        puVar39 = puVar17;
        local_380 = plVar13;
        if (iVar14 != 0) {
LAB_14366a652:
          puVar27 = puVar17;
          if (8 < (int)(uint)uVar23) {
            uVar23 = (ulonglong)((uint)uVar23 & 0xfffffffe);
            uVar4 = *(ushort *)((longlong)puVar27 + uVar23);
            *(ushort *)((longlong)puVar27 + uVar23) = *puVar27;
            *puVar27 = uVar4;
            puVar34 = puVar30 + 1;
            puVar17 = puVar27;
            do {
              puVar6 = puVar17 + 1;
              puVar31 = puVar17 + 1;
              do {
                puVar41 = puVar31;
                puVar17 = puVar6;
                if (puVar30 < puVar17) break;
                puVar6 = puVar17 + 1;
                puVar31 = puVar41 + 1;
              } while (*(uint *)(*(longlong *)(param_1 + 0xa8) + 0x10 +
                                (longlong)(short)*puVar17 * 0x28) <=
                       *(uint *)(*(longlong *)(param_1 + 0xa8) + 0x10 +
                                (longlong)(short)*puVar27 * 0x28));
              puVar6 = puVar34 + -2;
              do {
                puVar31 = puVar34;
                puVar24 = puVar6;
                puVar34 = puVar31 + -1;
                if (puVar34 <= puVar27) break;
                puVar6 = puVar24 + -1;
              } while (*(uint *)(*(longlong *)(param_1 + 0xa8) + 0x10 +
                                (longlong)(short)*puVar27 * 0x28) <=
                       *(uint *)(*(longlong *)(param_1 + 0xa8) + 0x10 +
                                (longlong)(short)*puVar34 * 0x28));
              if (puVar34 < puVar17) goto LAB_14366a719;
              uVar4 = *puVar17;
              *puVar17 = *puVar34;
              *puVar34 = uVar4;
            } while( true );
          }
          if (puVar27 < puVar30) {
            do {
              puVar17 = puVar27;
              if (puVar27 + 1 <= puVar30) {
                uVar23 = (ulonglong)*puVar27;
                puVar22 = puVar27 + 1;
                do {
                  bVar42 = *(uint *)(*(longlong *)(param_1 + 0xa8) + 0x10 +
                                    (longlong)(short)*puVar22 * 0x28) <=
                           *(uint *)(*(longlong *)(param_1 + 0xa8) + 0x10 +
                                    (longlong)(short)uVar23 * 0x28);
                  uVar29 = (longlong)(short)*puVar22;
                  if (bVar42) {
                    uVar29 = (longlong)(short)uVar23;
                  }
                  uVar23 = uVar29 & 0xffffffff;
                  if (!bVar42) {
                    puVar17 = puVar22;
                  }
                  puVar22 = puVar22 + 1;
                } while (puVar22 <= puVar30);
              }
              uVar4 = *puVar17;
              *puVar17 = *puVar30;
              *puVar30 = uVar4;
              puVar30 = puVar30 + -1;
            } while (puVar27 < puVar30);
          }
          goto LAB_14366a9c3;
        }
LAB_14366a7c2:
        iVar14 = (int)uVar23;
        if (iVar14 != 0) {
          iVar25 = (iVar25 - (iVar25 + -1 >> 0x1f)) + -1 >> 1;
          iVar33 = iVar25;
joined_r0x00014366a7e9:
          do {
            iVar11 = iVar25 * 2 + 1;
            if (iVar11 < iVar14) {
              iVar32 = iVar25 * 2 + 2;
              lVar40 = *(longlong *)(param_1 + 0xa8);
              if ((iVar32 < iVar14) &&
                 (*(uint *)(lVar40 + 0x10 + (longlong)(short)puVar17[iVar11] * 0x28) <=
                  *(uint *)(lVar40 + 0x10 + (longlong)(short)puVar17[iVar32] * 0x28))) {
                iVar11 = iVar32;
              }
              uVar4 = puVar17[iVar25];
              if (*(uint *)(lVar40 + 0x10 + (longlong)(short)uVar4 * 0x28) <
                  *(uint *)(lVar40 + 0x10 + (longlong)(short)puVar17[iVar11] * 0x28)) {
                puVar17[iVar25] = puVar17[iVar11];
                puVar17[iVar11] = uVar4;
                iVar25 = iVar11;
                goto joined_r0x00014366a7e9;
              }
            }
            bVar42 = iVar33 != 0;
            iVar25 = iVar33 + -1;
            iVar33 = iVar25;
          } while (bVar42);
          if (1 < iVar14) {
            uVar4 = *puVar17;
            *puVar17 = puVar17[uVar23 - 1];
            puVar17[uVar23 - 1] = uVar4;
            if (iVar14 != 2) {
              do {
                uVar29 = uVar23 - 1;
                iVar14 = 0;
                iVar33 = 1;
                iVar25 = 0;
                do {
                  iVar14 = iVar14 + 2;
                  lVar40 = *(longlong *)(param_1 + 0xa8);
                  iVar11 = iVar33;
                  if (((longlong)iVar14 < (longlong)uVar29) &&
                     (*(uint *)(lVar40 + 0x10 + (longlong)(short)puVar17[iVar33] * 0x28) <=
                      *(uint *)(lVar40 + 0x10 + (longlong)(short)puVar17[iVar14] * 0x28))) {
                    iVar11 = iVar14;
                  }
                  uVar4 = puVar17[iVar25];
                  if (*(uint *)(lVar40 + 0x10 + (longlong)(short)puVar17[iVar11] * 0x28) <=
                      *(uint *)(lVar40 + 0x10 + (longlong)(short)uVar4 * 0x28)) break;
                  puVar17[iVar25] = puVar17[iVar11];
                  puVar17[iVar11] = uVar4;
                  iVar14 = iVar11 * 2;
                  iVar33 = iVar11 * 2 + 1;
                  iVar25 = iVar11;
                } while ((longlong)iVar33 < (longlong)uVar29);
                uVar4 = *puVar17;
                *puVar17 = puVar17[uVar23 - 2];
                puVar17[uVar23 - 2] = uVar4;
                uVar23 = uVar29;
              } while (2 < uVar29);
            }
          }
        }
LAB_14366a9c3:
        plVar13 = local_380 + -3;
      } while (&local_348 <= plVar13);
    }
    lVar40 = local_358;
    if ((int)uStack_350 != 0) {
      lVar28 = (longlong)(int)uStack_350;
      lVar9 = *(longlong *)(param_1 + 0x200);
      lVar37 = 0;
      plVar13 = local_378;
      do {
        lVar18 = (longlong)*(short *)(lVar40 + lVar37);
        if (plVar13 < (longlong *)
                      ((ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa8) + 0x10 + lVar18 * 0x28) +
                      lVar9)) break;
        lVar9 = *(longlong *)(param_1 + 0xa8) + lVar18 * 0x28;
        *(undefined4 *)(lVar9 + 0x20) = 1;
        iVar14 = *(int *)(param_1 + 0xe8);
        *(uint *)(param_1 + 0xe8) = iVar14 + 1U;
        if (*(uint *)(param_1 + 0xec) < iVar14 + 1U) {
          FUN_1405b572a(param_1 + 0xe0,iVar14);
          plVar13 = local_378;
        }
        *(undefined2 *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar14 * 2) =
             *(undefined2 *)(lVar40 + lVar37);
        lVar9 = (ulonglong)*(uint *)(lVar9 + 0x10) + *(longlong *)(param_1 + 0x200);
        *(longlong *)(param_1 + 0x200) = lVar9;
        lVar37 = lVar37 + 2;
      } while (lVar28 * 2 != lVar37);
    }
  }
  p_Var1 = local_368;
  if (local_358 != 0) {
    FUN_1400020a8(local_358);
  }
  LeaveCriticalSection(p_Var1);
  if ((local_48 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14366a1fb:
  sVar2 = *psVar16;
  *psVar16 = *psVar21;
  *psVar21 = sVar2;
  iVar14 = iVar14 + -1;
  psVar26 = psVar26 + -2;
  if ((longlong)psVar26 - (longlong)psVar16 < (longlong)psVar10 - (longlong)psVar15) {
    if (psVar15 < psVar10) {
      *plVar13 = (longlong)psVar15;
      plVar13[1] = (longlong)psVar10;
      *(int *)(plVar13 + 2) = iVar14;
      plVar13 = plVar13 + 3;
    }
    if (psVar21 <= psVar16 + 1) goto LAB_14366a509;
  }
  else {
    if (psVar16 + 1 < psVar21) {
      *plVar13 = (longlong)psVar16;
      plVar13[1] = (longlong)psVar26;
      *(int *)(plVar13 + 2) = iVar14;
      plVar13 = plVar13 + 3;
    }
    psVar26 = psVar10;
    psVar16 = psVar15;
    if (psVar10 <= psVar15) goto LAB_14366a509;
  }
  iVar25 = (int)((ulonglong)((longlong)psVar26 - (longlong)psVar16) >> 1);
  uVar38 = iVar25 + 1;
  psVar10 = psVar26;
  if (iVar14 == 0) goto LAB_14366a283;
  goto LAB_14366a11b;
LAB_14366a719:
  uVar4 = *puVar27;
  *puVar27 = *puVar34;
  *puVar34 = uVar4;
  iVar14 = iVar14 + -1;
  puVar31 = puVar31 + -2;
  if ((longlong)puVar24 - (longlong)puVar39 < (longlong)puVar22 - (longlong)puVar41) {
    if (puVar17 < puVar30) {
      *local_380 = (longlong)puVar17;
      local_380[1] = (longlong)puVar30;
      *(int *)(local_380 + 2) = iVar14;
      local_380 = local_380 + 3;
    }
    puVar17 = puVar27;
    puVar22 = puVar24;
    if (puVar34 <= puVar27 + 1) goto LAB_14366a9c3;
  }
  else {
    if (puVar27 + 1 < puVar34) {
      *local_380 = (longlong)puVar27;
      local_380[1] = (longlong)puVar31;
      *(int *)(local_380 + 2) = iVar14;
      local_380 = local_380 + 3;
    }
    puVar27 = puVar41;
    puVar31 = puVar30;
    puVar22 = puVar30;
    if (puVar30 <= puVar17) goto LAB_14366a9c3;
  }
  iVar25 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar27) >> 1);
  uVar23 = (ulonglong)(iVar25 + 1);
  puVar30 = puVar31;
  puVar39 = puVar27;
  if (iVar14 == 0) goto LAB_14366a7c2;
  goto LAB_14366a652;
}



// FUNCTION 14366aaf6 FUN_14366aaf6 body=69 status=ok
// SIG undefined FUN_14366aaf6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366aaf6(void)

{
  _DAT_14caff460 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366ab38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff468,1);
  return;
}



// FUNCTION 14366ab3b FUN_14366ab3b body=69 status=ok
// SIG undefined FUN_14366ab3b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366ab3b(void)

{
  _DAT_14caff478 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366ab7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff480,1);
  return;
}



// FUNCTION 14366ab80 FUN_14366ab80 body=69 status=ok
// SIG undefined FUN_14366ab80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366ab80(void)

{
  _DAT_14caff490 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366abc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff498,1);
  return;
}



// FUNCTION 14366abc5 FUN_14366abc5 body=69 status=ok
// SIG undefined FUN_14366abc5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366abc5(void)

{
  _DAT_14caff4a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366ac07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff4b0,1);
  return;
}



// FUNCTION 14366ac0a FUN_14366ac0a body=69 status=ok
// SIG undefined FUN_14366ac0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366ac0a(void)

{
  _DAT_14caff4b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366ac4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff4c0,1);
  return;
}



// FUNCTION 14366ac4f FUN_14366ac4f body=69 status=ok
// SIG undefined FUN_14366ac4f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366ac4f(void)

{
  _DAT_14caff4d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366ac91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff4d8,1);
  return;
}



// FUNCTION 14366ac94 FUN_14366ac94 body=69 status=ok
// SIG undefined FUN_14366ac94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366ac94(void)

{
  _DAT_14caff4e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366acd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff4f0,1);
  return;
}



// FUNCTION 14366acd9 FUN_14366acd9 body=69 status=ok
// SIG undefined FUN_14366acd9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366acd9(void)

{
  _DAT_14caff500 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366ad1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff508,1);
  return;
}



// FUNCTION 14366ad1e FUN_14366ad1e body=69 status=ok
// SIG undefined FUN_14366ad1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366ad1e(void)

{
  _DAT_14caff510 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366ad60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff518,1);
  return;
}



// FUNCTION 14366ad63 FUN_14366ad63 body=69 status=ok
// SIG undefined FUN_14366ad63(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366ad63(void)

{
  _DAT_14caff528 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366ada5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff530,1);
  return;
}



// FUNCTION 14366ada8 FUN_14366ada8 body=7 status=ok
// SIG undefined FUN_14366ada8(void)

undefined1 FUN_14366ada8(void)

{
  return DAT_14caff4f8;
}



// FUNCTION 14366adaf FUN_14366adaf body=11 status=ok
// SIG undefined FUN_14366adaf(void)

bool FUN_14366adaf(void)

{
  return DAT_14c761968 != 0;
}



// FUNCTION 14366adba FUN_14366adba body=215 status=ok
// SIG undefined FUN_14366adba(void)

undefined8 * FUN_14366adba(longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  param_2[1] = 0;
  param_2[2] = 0;
  cVar2 = FUN_14480c900(0,param_3);
  uVar5 = 0x81;
  if (cVar2 != '\0') {
    uVar5 = *(uint *)(*(longlong *)(param_3 + 8) + 0x60) >> 0x14 & 4 | 0x81;
  }
  bVar3 = FUN_144914152(param_1,param_3);
  uVar4 = 0;
  if ((DAT_14c761968 != 0) && (uVar4 = 0, DAT_14c761ae8 - 1U < 3)) {
    uVar4 = (uint)(*(byte *)(param_1 + 0x78) >> 1 & 0x20);
  }
  cVar2 = *(char *)(param_1 + 0x82);
  *param_2 = *(undefined8 *)(param_1 + 0x98);
  uVar6 = 0x10;
  if ((1 < (byte)(*(char *)(param_1 + 0x68) - 1U)) && ((*(byte *)(param_1 + 0x78) & 0x10) == 0)) {
    bVar1 = *(byte *)(param_1 + 0x75);
    if (bVar1 < 0x40) {
      uVar6 = (uint)bVar1 + (uint)bVar1 & 0x10;
    }
  }
  *(uint *)(param_2 + 2) =
       uVar5 | uVar4 | (bVar3 & 0x1d) << 3 | (uint)(cVar2 != '\x01') << 0xd | uVar6;
  return param_2;
}



// FUNCTION 14366ae94 FUN_14366ae94 body=1416 status=ok
// SIG undefined FUN_14366ae94(void)

void FUN_14366ae94(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [32];
  code **local_88;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  int local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14366aedc;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14366aee5;
      goto LAB_14366afac;
    }
  }
  else {
LAB_14366aedc:
    if (iVar6 != 0x10) {
LAB_14366afac:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_14366aee5;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_14366aee5;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_14366b113;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143679e2b);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_14366b113:
          puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x17);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
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
            puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar15 + 0x17);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_14366b193;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_14366b193:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14aa68898;
        puVar15[0x15] = param_1;
        *(int *)(puVar15 + 0x16) = param_2;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar15[0xf] = uVar11;
        puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar6;
        if (puVar15 == (undefined8 *)0x0) {
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
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
        local_88 = local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14aa68840;
        local_78[0] = FUN_14367cfd0;
        local_50 = param_1;
        local_48 = param_2;
        FUN_14005a792(&DAT_14ca9a440,L"CmdSetWPODisableDistance",&DAT_14cb001ec);
        if (local_78[0] != (code *)0x0) {
          pppuVar13 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar13 = &local_58;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_14366b04e;
    }
  }
LAB_14366aee5:
  iVar6 = *(int *)(param_1 + 0x2ac);
  if (iVar6 != param_2) {
    *(int *)(param_1 + 0x2ac) = param_2;
    (**(code **)(**(longlong **)(param_1 + 0x210) + 0x4c0))
              (*(longlong **)(param_1 + 0x210),*(undefined8 *)(param_1 + 0x218));
    (**(code **)(**(longlong **)(param_1 + 0x210) + 0x4b8))
              (*(longlong **)(param_1 + 0x210),*(undefined8 *)(param_1 + 0x218),8);
    if (param_2 == 0 || iVar6 == 0) {
      if (DAT_14cad8310 == 0) {
        FUN_1446f470e(local_78,L"Renderer",1);
        uVar11 = FUN_144a52528();
        DAT_14cad8310 = FUN_14493e38c(uVar11,local_78[0]);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
  }
LAB_14366b04e:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14366b43e FUN_14366b43e body=1889 status=ok
// SIG undefined FUN_14366b43e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_14366b43e(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             char param_5)

{
  undefined8 *puVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char cVar13;
  byte bVar14;
  uint uVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong lVar18;
  float *pfVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ushort uVar23;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  uint uVar29;
  longlong *plVar30;
  ulonglong uVar31;
  double dVar32;
  double dVar35;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStack_108 [32];
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1409222be(param_1,param_3);
  *param_1 = &PTR_FUN_14aa62b80;
  lVar18 = param_3[0xcb];
  if (lVar18 == 0) {
    lVar18 = param_3[0xcc];
    if ((DAT_14c950c29 & lVar18 != 0) == 0) goto LAB_14366b4cc;
  }
  else if (DAT_14c950c29 != 1) goto LAB_14366b4cc;
  FUN_1456cec3c(lVar18);
LAB_14366b4cc:
  param_1[0x59] = lVar18;
  uVar16 = (**(code **)(*param_3 + 0xa80))(param_3);
  param_1[0x5a] = uVar16;
  param_1[0x5b] = param_4;
  param_1[0x5c] = param_3[0x115];
  *(undefined4 *)(param_1 + 0x5d) = 0xf1508490;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0xfcc24bb9;
  *(undefined4 *)(param_1 + 0x5e) = 0xa9f277b3;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0x1af766f0;
  param_1[0x5f] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined2 *)((longlong)param_1 + 0x304) = 1;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  *(byte *)((longlong)param_1 + 0x77) = *(byte *)((longlong)param_1 + 0x77) | 4;
  bVar14 = *(byte *)((longlong)param_1 + 0x75);
  *(byte *)((longlong)param_1 + 0x75) = bVar14 | 2;
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  *(byte *)((longlong)param_1 + 0x73) = *(byte *)((longlong)param_1 + 0x73) | 0x80;
  *(byte *)((longlong)param_1 + 0x74) = *(byte *)((longlong)param_1 + 0x74) & 0xfe;
  if ((param_3 != (longlong *)0x0) && ((*(byte *)((longlong)param_3 + 0x89f) & 2) != 0)) {
    *(byte *)((longlong)param_1 + 0x75) = bVar14 | 0x82;
  }
  local_e8 = param_3;
  plVar17 = (longlong *)(**(code **)(*(longlong *)param_1[0x59] + 0x308))();
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = plVar17[2];
  local_d0 = (undefined4)plVar17[3];
  FUN_144a39936(plVar17);
  uVar15 = *(uint *)(plVar17 + 1);
  *(short *)(param_1 + 0x60) = (short)uVar15;
  lVar18 = (longlong)(int)((longlong *)param_1[0x5b])[1];
  uVar29 = 0;
  if (lVar18 < 1) {
    uVar20 = 0;
  }
  else {
    lVar25 = 0;
    uVar20 = 0;
    do {
      uVar7 = *(uint *)(*(longlong *)(*(longlong *)param_1[0x5b] + lVar25 * 8) + 0x15c);
      if (uVar20 < uVar7) {
        uVar20 = uVar7;
      }
      lVar25 = lVar25 + 1;
    } while (lVar18 != lVar25);
  }
  *(short *)((longlong)param_1 + 0x302) = (short)uVar20;
  FUN_14017c08a(param_1 + 0x61,uVar15 & 0xffff,1);
  *(undefined1 *)(param_1 + 0x65) = 0;
  auVar12 = _DAT_149935300;
  auVar11 = _DAT_149934d80;
  if (*(short *)(param_1 + 0x60) == 0) {
    iVar24 = 7;
  }
  else {
    uVar21 = 0;
    do {
      uVar23 = 0xffff;
      if ((longlong)uVar21 < (longlong)(int)plVar17[1]) {
        uVar23 = *(ushort *)(*plVar17 + 8 + uVar21 * 0xc);
      }
      iVar24 = 0;
      uVar26 = uVar21 & 0xffffffff;
      do {
        if ((int)uVar26 == 0) goto LAB_14366b6aa;
        uVar15 = *(uint *)(plVar17[4] + 8 + (longlong)(int)uVar26 * 0xc);
        uVar26 = (ulonglong)uVar15;
        iVar24 = iVar24 + 1;
      } while (uVar15 != 0xffffffff);
      iVar24 = -1;
LAB_14366b6aa:
      *(uint *)(param_1[0x61] + uVar21 * 4) = iVar24 << 0x10 | (uint)uVar23;
      if (param_5 == '\0') {
        lVar18 = uVar21 * 0x60;
        *(undefined1 (*) [16])(local_c8 + 0x40 + lVar18) = auVar11;
        puVar1 = (undefined8 *)(local_c8 + 0x50 + lVar18);
        *puVar1 = 0x3ff0000000000000;
        puVar1[1] = 0;
        dVar3 = *(double *)(local_c8 + lVar18);
        dVar4 = ((double *)(local_c8 + lVar18))[1];
        pdVar2 = (double *)(local_c8 + 0x10 + lVar18);
        dVar5 = *pdVar2;
        dVar6 = pdVar2[1];
        dVar32 = dVar5 * dVar5 + dVar3 * dVar3;
        dVar35 = dVar6 * dVar6 + dVar4 * dVar4;
        auVar33._0_8_ = dVar32 + dVar35;
        auVar33._8_8_ = dVar32 + dVar35;
        uVar31 = -(ulonglong)(1e-08 <= auVar33._8_8_);
        auVar34 = sqrtpd(auVar33,auVar33);
        auVar36 = divpd(auVar11,auVar34);
        auVar37._0_8_ = auVar36._0_8_ * dVar5;
        auVar37._8_8_ = auVar36._8_8_ * dVar6;
        uVar26 = (ulonglong)(dVar4 * auVar36._8_8_) & uVar31;
        auVar34._8_4_ = (int)uVar31;
        auVar34._0_8_ = -(ulonglong)(1e-08 <= auVar33._0_8_);
        auVar34._12_4_ = (int)(uVar31 >> 0x20);
        auVar34 = blendvpd(auVar12,auVar37,auVar34);
        auVar10._8_4_ = (int)uVar26;
        auVar10._0_8_ = (ulonglong)(dVar3 * auVar36._0_8_) & -(ulonglong)(1e-08 <= auVar33._0_8_);
        auVar10._12_4_ = (int)(uVar26 >> 0x20);
        *(undefined1 (*) [16])(local_c8 + lVar18) = auVar10;
        *(undefined1 (*) [16])(local_c8 + 0x10 + lVar18) = auVar34;
      }
      else if ((*(char *)(param_1 + 0x65) == '\0') &&
              (lVar18 = uVar21 * 0x60,
              0.0001 < ABS((float)(*(double *)(local_c8 + 0x40 + lVar18) *
                                   *(double *)(local_c8 + 0x48 + lVar18) *
                                  *(double *)(local_c8 + 0x50 + lVar18)) + -1.0))) {
        *(undefined1 *)(param_1 + 0x65) = 1;
      }
      uVar21 = uVar21 + 1;
      uVar29 = (uint)*(ushort *)(param_1 + 0x60);
    } while (uVar21 < *(ushort *)(param_1 + 0x60));
    iVar24 = (*(byte *)(param_1 + 0x65) & 1) * 3 + 7;
  }
  plVar17 = param_1 + 99;
  uVar29 = uVar29 * iVar24;
  uVar15 = *(uint *)(param_1 + 100);
  if (uVar29 - uVar15 == 0 || (int)uVar29 < (int)uVar15) {
    if (uVar29 < uVar15) {
      *(uint *)(param_1 + 100) = uVar29;
      FUN_1401fef06(plVar17);
    }
  }
  else {
    *(uint *)(param_1 + 100) = uVar29;
    if (*(int *)((longlong)param_1 + 0x324) - uVar15 < uVar29 - uVar15) {
      FUN_14475e4ac(plVar17);
    }
  }
  plVar30 = local_e8;
  if (*(short *)(param_1 + 0x60) != 0) {
    pfVar19 = (float *)(*plVar17 + 0x24);
    lVar18 = 0x50;
    uVar21 = 0;
    do {
      dVar3 = *(double *)(local_c8 + -0x48 + lVar18);
      dVar4 = *(double *)(local_c8 + -0x40 + lVar18);
      dVar5 = *(double *)(local_c8 + -0x38 + lVar18);
      dVar6 = *(double *)(local_c8 + -0x30 + lVar18);
      dVar32 = *(double *)(local_c8 + -0x28 + lVar18);
      dVar35 = *(double *)(local_c8 + -0x20 + lVar18);
      pfVar19[-9] = (float)*(double *)(local_c8 + -0x50 + lVar18);
      pfVar19[-8] = (float)dVar3;
      pfVar19[-7] = (float)dVar4;
      pfVar19[-6] = (float)dVar5;
      pfVar19[-5] = (float)dVar6;
      pfVar19[-4] = (float)dVar32;
      pfVar19[-3] = (float)dVar35;
      if (*(char *)(param_1 + 0x65) == '\x01') {
        dVar3 = *(double *)(local_c8 + -8 + lVar18);
        dVar4 = *(double *)(local_c8 + lVar18);
        pfVar19[-2] = (float)*(double *)(local_c8 + -0x10 + lVar18);
        pfVar19[-1] = (float)dVar3;
        *pfVar19 = (float)dVar4;
      }
      uVar21 = uVar21 + 1;
      lVar18 = lVar18 + 0x60;
      pfVar19 = (float *)((longlong)pfVar19 + (ulonglong)(uint)(iVar24 << 2));
    } while (uVar21 < *(ushort *)(param_1 + 0x60));
  }
  lVar18 = **(longlong **)param_1[0x5b];
  lVar25 = (**(code **)(*(longlong *)param_1[0x59] + 0x318))((longlong *)param_1[0x59],0);
  local_e0 = param_1 + 0x53;
  FUN_14008bf44(local_e0,*(undefined4 *)(lVar18 + 0x18),1);
  if (0 < *(int *)(lVar18 + 0x18)) {
    lVar22 = 0x14;
    lVar27 = 0;
    lVar28 = 0;
    do {
      lVar8 = *(longlong *)(lVar18 + 0x10);
      lVar9 = *local_e0;
      uVar23 = *(ushort *)(lVar8 + lVar27);
      uVar15 = (uint)uVar23;
      *(uint *)(lVar9 + -0x40 + lVar22 * 4) = (uint)uVar23;
      *(byte *)(lVar9 + lVar22 * 4) =
           *(byte *)(lVar9 + lVar22 * 4) & 0xf7 | *(char *)(lVar8 + 0xd + lVar27) << 3;
      if (lVar28 < *(int *)(lVar25 + 0x10)) {
        cVar13 = (**(code **)(*(longlong *)param_1[0x59] + 0x328))
                           ((longlong *)param_1[0x59],
                            *(undefined4 *)(*(longlong *)(lVar25 + 8) + lVar28 * 4));
        if (cVar13 == '\0') {
          uVar15 = *(uint *)(lVar9 + -0x40 + lVar22 * 4);
        }
        else {
          *(undefined4 *)(lVar9 + -0x40 + lVar22 * 4) =
               *(undefined4 *)(*(longlong *)(lVar25 + 8) + lVar28 * 4);
          uVar15 = (**(code **)(*(longlong *)param_1[0x59] + 0x330))();
          uVar29 = *(uint *)(lVar9 + -0x40 + lVar22 * 4);
          if ((int)uVar29 < (int)uVar15) {
            uVar15 = uVar29;
          }
          if ((int)uVar15 < 1) {
            uVar15 = 0;
          }
          *(uint *)(lVar9 + -0x40 + lVar22 * 4) = uVar15;
        }
      }
      if ((int)uVar15 < (int)*(uint *)(param_1 + 0x55)) {
        uVar15 = *(uint *)(param_1 + 0x55);
      }
      *(uint *)(param_1 + 0x55) = uVar15;
      iVar24 = *(int *)(lVar9 + -0x40 + lVar22 * 4);
      if (((longlong)iVar24 < 0) || ((int)(*(longlong **)(plVar30[0x115] + 8))[1] <= iVar24)) {
        bVar14 = 0;
      }
      else {
        bVar14 = *(char *)(**(longlong **)(plVar30[0x115] + 8) + (longlong)iVar24) << 2;
      }
      *(byte *)(lVar9 + lVar22 * 4) = *(byte *)(lVar9 + lVar22 * 4) & 0xfb | bVar14;
      plVar17 = (longlong *)(**(code **)(*plVar30 + 0x610))(plVar30);
      if ((plVar17 == (longlong *)0x0) || (DAT_14cb0a8e0 == '\0')) {
LAB_14366ba1a:
        if (plVar17 != (longlong *)0x0) goto LAB_14366ba1f;
LAB_14366ba46:
        if ((*(byte *)(lVar9 + lVar22 * 4) & 4) == 0) {
          FUN_14003fbd6();
          plVar17 = DAT_14caea080;
        }
        else {
          plVar17 = *(longlong **)(DAT_14cb0d2b0 + 0x4c0);
        }
      }
      else {
        uVar15 = (**(code **)(*plVar17 + 0x408))(plVar17);
        if (uVar15 < 2) {
          FUN_14003fbd6();
          plVar17 = DAT_14caea080;
          goto LAB_14366ba1a;
        }
LAB_14366ba1f:
        cVar13 = (**(code **)(*plVar17 + 0x340))(plVar17,0);
        if ((cVar13 == '\0') ||
           (cVar13 = (**(code **)(*plVar17 + 0x340))(plVar17,0x12), cVar13 == '\0'))
        goto LAB_14366ba46;
      }
      uVar16 = (**(code **)(*plVar17 + 0x2f0))(plVar17);
      *(undefined8 *)(lVar9 + -0x48 + lVar22 * 4) = uVar16;
      lVar28 = lVar28 + 1;
      lVar22 = lVar22 + 0x18;
      lVar27 = lVar27 + 0xf8;
      plVar30 = local_e8;
    } while (lVar28 < *(int *)(lVar18 + 0x18));
  }
  FUN_144ae871a(param_1,0);
  *(byte *)((longlong)param_1 + 0x76) = *(byte *)((longlong)param_1 + 0x76) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 700) = 0x80;
  *(char *)((longlong)param_1 + 700) = (*(char *)((longlong)plVar30 + 0x1fb) != '\0') * ' ' + -0x60;
  *(byte *)((longlong)param_1 + 0x2bd) = *(byte *)((longlong)param_1 + 0x2bd) & 0xf7;
  *(byte *)((longlong)param_1 + 0x6f) = *(byte *)((longlong)param_1 + 0x6f) | 4;
  FUN_1403fc26e(param_1);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14366bba0 FUN_14366bba0 body=240 status=ok
// SIG undefined FUN_14366bba0(void)

undefined8 * FUN_14366bba0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_144ae9578(*(undefined8 *)(param_1 + 0x2e0),param_3,param_1 + 0x180);
  param_2[1] = 0;
  param_2[2] = 0;
  cVar2 = FUN_14480c900(param_1,param_3);
  uVar5 = 0x81;
  if (cVar2 != '\0') {
    uVar5 = *(uint *)(*(longlong *)(param_3 + 8) + 0x60) >> 0x14 & 4 | 0x81;
  }
  bVar3 = FUN_144914152(param_1,param_3);
  uVar4 = 0;
  if ((DAT_14c761968 != 0) && (uVar4 = 0, DAT_14c761ae8 - 1U < 3)) {
    uVar4 = (uint)(*(byte *)(param_1 + 0x78) >> 1 & 0x20);
  }
  cVar2 = *(char *)(param_1 + 0x82);
  *param_2 = *(undefined8 *)(param_1 + 0x98);
  uVar6 = 0x10;
  if ((1 < (byte)(*(char *)(param_1 + 0x68) - 1U)) && ((*(byte *)(param_1 + 0x78) & 0x10) == 0)) {
    bVar1 = *(byte *)(param_1 + 0x75);
    if (bVar1 < 0x40) {
      uVar6 = (uint)bVar1 + (uint)bVar1 & 0x10;
    }
  }
  *(uint *)(param_2 + 2) =
       uVar5 | uVar4 | (bVar3 & 0x1d) << 3 | (uint)(cVar2 != '\x01') << 0xd | uVar6;
  return param_2;
}



// FUNCTION 14366bc90 FUN_14366bc90 body=1744 status=ok
// SIG undefined FUN_14366bc90(void)

longlong * FUN_14366bc90(longlong param_1,longlong *param_2,char param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong *plVar11;
  undefined *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  byte bVar16;
  byte bVar17;
  undefined1 *puVar18;
  int iVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined1 auStack_618 [47];
  char local_5e9;
  longlong local_5e8;
  longlong local_5e0;
  longlong local_5d8;
  ushort local_5ca;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined1 local_5a9;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_590;
  longlong local_588;
  undefined8 uStack_580;
  undefined1 local_570 [1280];
  undefined1 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_618;
  local_5e9 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb001f8) && (FUN_144b3d300(&DAT_14cb001f8), DAT_14cb001f8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar13 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Nanite.ForceEnableMeshes",1);
    if (plVar13 == (longlong *)0x0) {
      DAT_14cb001f0 = 0;
    }
    else {
      DAT_14cb001f0 = (**(code **)(*plVar13 + 0x68))(plVar13);
    }
    _Init_thread_footer(&DAT_14cb001f8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb00200) &&
     (FUN_144b3d300(&DAT_14cb00200), lVar22 = DAT_14cb001f0, DAT_14cb00200 == -1)) {
    if (DAT_14cb001f0 == 0) {
      DAT_14cb001fc = false;
    }
    else {
      iVar19 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar19 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar19 == 2)) {
        uVar15 = 0;
      }
      else if (iVar19 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        uVar15 = (ulonglong)(DVar9 != DVar10);
      }
      else {
        uVar15 = 1;
      }
      DAT_14cb001fc = *(int *)(lVar22 + uVar15 * 4) != 0;
    }
    _Init_thread_footer(&DAT_14cb00200);
  }
  *(byte *)(param_2 + 0x1f) = *(byte *)(param_2 + 0x1f) & 0xfe;
  plVar13 = param_2 + 2;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  if (*(int *)((longlong)param_2 + 0xe4) < 0) {
    FUN_147cd488e(plVar13,0);
  }
  if (param_1 != 0) {
    FUN_147ccc595(local_570,param_1);
    puVar18 = local_70;
    if (local_70 == (undefined1 *)0x0) {
      puVar18 = local_570;
    }
    if ((longlong)local_68 != 0) {
      local_5d8 = (longlong)local_68 * 0x28;
      lVar22 = 0;
      iVar19 = 0;
      local_5e8 = param_1;
      do {
        iVar2 = (int)param_2[0x1c];
        lVar20 = (longlong)iVar2;
        *(uint *)(param_2 + 0x1c) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xe4) < iVar2 + 1U) {
          FUN_144ae8bb8(plVar13,iVar2);
        }
        plVar11 = (longlong *)param_2[0x1a];
        if ((longlong *)param_2[0x1a] == (longlong *)0x0) {
          plVar11 = plVar13;
        }
        plVar21 = plVar11 + lVar20 * 6;
        FUN_144b26f1b(plVar21,1);
        plVar11[lVar20 * 6 + 1] = *(longlong *)(puVar18 + lVar22 + 8);
        *(int *)(plVar11 + lVar20 * 6 + 2) = iVar19;
        plVar14 = *(longlong **)(puVar18 + lVar22);
        bVar7 = *(byte *)((longlong)plVar11 + lVar20 * 0x30 + 0x14);
        plVar11[lVar20 * 6] = (longlong)plVar14;
        *(byte *)((longlong)plVar11 + lVar20 * 0x30 + 0x14) =
             bVar7 & 0xfd | (plVar14 == (longlong *)0x0) * '\x02';
        puVar1 = (undefined4 *)(puVar18 + lVar22 + 0x14);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        plVar11 = plVar11 + lVar20 * 6 + 4;
        *(undefined4 *)plVar11 = *puVar1;
        *(undefined4 *)((longlong)plVar11 + 4) = uVar3;
        *(undefined4 *)(plVar11 + 1) = uVar4;
        *(undefined4 *)((longlong)plVar11 + 0xc) = uVar5;
        if (plVar14 == (longlong *)0x0) {
          FUN_14003fbd6();
          plVar14 = DAT_14caea080;
          *plVar21 = (longlong)DAT_14caea080;
        }
        local_5a8 = 0;
        uStack_5a0 = 0;
        plVar11 = (longlong *)(**(code **)(*plVar14 + 0x2c0))(plVar14,&local_5a8);
        uVar8 = (**(code **)(*(longlong *)*plVar21 + 0x408))();
        local_5a9 = 0;
        local_5c8 = 0;
        uStack_5c0 = 0;
        lVar20 = (**(code **)(*plVar11 + 0x2d0))(plVar11,&local_5c8);
        bVar7 = *(byte *)((longlong)plVar21 + 0x15);
        *(byte *)((longlong)plVar21 + 0x14) =
             *(byte *)((longlong)plVar21 + 0x14) & 0x7f | *(char *)(lVar20 + 0x460) * '\x02' & 0x80U
        ;
        bVar16 = *(byte *)(lVar20 + 0x460) >> 4 & 2;
        *(byte *)((longlong)plVar21 + 0x15) = bVar7 & 0xfd | bVar16;
        bVar17 = *(byte *)(lVar20 + 0x460) >> 2 & 4;
        *(byte *)((longlong)plVar21 + 0x15) = bVar7 & 0xf9 | bVar16 | bVar17;
        *(byte *)((longlong)plVar21 + 0x15) =
             bVar7 & 0xf8 | bVar16 | bVar17 | *(byte *)(lVar20 + 0x460) >> 7;
        local_588 = 0;
        uStack_580 = 0;
        if (*(code **)(*plVar11 + 0x2d0) == (code *)&LAB_14470b6e8) {
          puVar12 = (undefined *)plVar11[0x18];
          if (puVar12 == (undefined *)0x0) {
            puVar12 = &DAT_14caea5a0;
          }
        }
        else {
          puVar12 = (undefined *)(**(code **)(*plVar11 + 0x2d0))(plVar11,&local_588);
        }
        *(byte *)((longlong)plVar21 + 0x14) =
             *(byte *)((longlong)plVar21 + 0x14) & 0xdf |
             (byte)(*(uint *)(puVar12 + 0x468) >> 0x17) & 0x20;
        local_588 = 0;
        uStack_580 = 0;
        if (*(code **)(*plVar11 + 0x2d0) == (code *)&LAB_14470b6e8) {
          puVar12 = (undefined *)plVar11[0x18];
          if (puVar12 == (undefined *)0x0) {
            puVar12 = &DAT_14caea5a0;
          }
        }
        else {
          puVar12 = (undefined *)(**(code **)(*plVar11 + 0x2d0))(plVar11,&local_588);
        }
        *(byte *)((longlong)plVar21 + 0x14) =
             *(byte *)((longlong)plVar21 + 0x14) & 0xfb |
             (byte)(*(uint *)(puVar12 + 0x468) >> 10) & 4;
        cVar6 = (**(code **)(*plVar11 + 0x550))(plVar11);
        *(byte *)((longlong)plVar21 + 0x14) =
             (1 < uVar8) << 3 | cVar6 << 6 | *(byte *)((longlong)plVar21 + 0x14) & 0xb7;
        (**(code **)(*plVar11 + 0x410))(plVar11,&local_5ca);
        *(byte *)((longlong)plVar21 + 0x14) =
             *(byte *)((longlong)plVar21 + 0x14) & 0xef | (byte)(local_5ca >> 6) & 0x10;
        if (local_5e9 == '\0') {
          local_5e0 = lVar22;
          cVar6 = FUN_144b24cd0(plVar11,&local_5a9,0x12);
          lVar22 = local_5e0;
          *(byte *)((longlong)plVar21 + 0x15) =
               *(byte *)((longlong)plVar21 + 0x15) & 0xf7 | cVar6 << 3;
          bVar7 = FUN_144b24cd0(plVar11,&local_5a9,0);
        }
        else {
          bVar7 = (**(code **)(*plVar11 + 0x340))(plVar11,0x12);
          *(byte *)((longlong)plVar21 + 0x15) =
               *(byte *)((longlong)plVar21 + 0x15) & 0xf7 | (bVar7 ^ 1) << 3;
          bVar7 = (**(code **)(*plVar11 + 0x340))(plVar11,0);
          bVar7 = bVar7 ^ 1;
        }
        *(byte *)((longlong)plVar21 + 0x15) =
             *(byte *)((longlong)plVar21 + 0x15) & 0xf7 |
             ((*(byte *)((longlong)plVar21 + 0x15) & 8) >> 3 | bVar7) << 3;
        if (uVar8 == 1) {
          *(byte *)(param_2 + 0x1f) = *(byte *)(param_2 + 0x1f) | 2;
        }
        if ((*(byte *)((longlong)plVar11 + 0x1d7) & 4) != 0) {
          *(byte *)(param_2 + 0x1f) = *(byte *)(param_2 + 0x1f) | 4;
        }
        bVar7 = *(byte *)((longlong)plVar21 + 0x14);
        bVar17 = ((*(byte *)((longlong)plVar21 + 0x15) | bVar7) >> 3 | bVar7 >> 4) & 1;
        bVar16 = bVar7 & 0xfe | bVar17;
        *(byte *)((longlong)plVar21 + 0x14) = bVar16;
        bVar7 = *(byte *)(param_2 + 0x1f);
        if (((bVar7 & 1) == 0 & bVar17) == 1) {
          lVar20 = *(longlong *)(local_5e8 + 0x658);
          if (lVar20 == 0) {
            lVar20 = *(longlong *)(local_5e8 + 0x660);
            if ((DAT_14c950c29 & lVar20 != 0) != 0) goto LAB_14366c208;
          }
          else if (DAT_14c950c29 == 1) {
LAB_14366c208:
            FUN_1456cec3c(lVar20);
          }
          local_590 = *(undefined8 *)(lVar20 + 0x18);
          FUN_1400021e4(&local_590,&local_588);
          if (&local_588 == param_2) {
            if (local_588 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*param_2 != 0) {
              FUN_1400020a8();
            }
            *param_2 = local_588;
            local_588 = 0;
            *(undefined4 *)(param_2 + 1) = (undefined4)uStack_580;
            *(undefined4 *)((longlong)param_2 + 0xc) = uStack_580._4_4_;
          }
          FUN_14003fbd6();
          param_2[0x1e] = (longlong)DAT_14caea080;
          bVar16 = *(byte *)((longlong)plVar21 + 0x14);
          bVar7 = *(byte *)(param_2 + 0x1f);
        }
        *(byte *)(param_2 + 0x1f) = bVar16 & 1 | bVar7;
        lVar22 = lVar22 + 0x28;
        iVar19 = iVar19 + 1;
      } while (local_5d8 != lVar22);
    }
    if (local_70 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_618) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14366c361 FUN_14366c361 body=24 status=ok
// SIG undefined FUN_14366c361(void)

bool FUN_14366c361(longlong *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x270))();
  return uVar1 < 2;
}



// FUNCTION 14366c379 FUN_14366c379 body=6 status=ok
// SIG undefined FUN_14366c379(void)

bool FUN_14366c379(int param_1)

{
  return param_1 == 0;
}



// FUNCTION 14366c380 FUN_14366c380 body=254 status=ok
// SIG undefined FUN_14366c380(void)

void FUN_14366c380(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((((DAT_14c760e34 != 0) &&
       (lVar1 = (ulonglong)DAT_14ca85550 * 0x3c,
       (*(byte *)((longlong)&DAT_14ca814d8 + lVar1 + 3) & 0x10) != 0)) &&
      (((&DAT_14ca814c8)[(ulonglong)DAT_14ca85550 * 0xf] & 0x20000000) != 0)) &&
     ((*(uint *)(&DAT_14ca814cc + lVar1) & 8) != 0)) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x130,0x10);
    *(undefined4 *)(puVar2 + 1) = 0xffffffff;
    *(undefined2 *)((longlong)puVar2 + 0xc) = 0x103;
    *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0x800000000;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0x200000000;
    puVar2[0x20] = 0;
    puVar2[0x21] = 0x300000000;
    puVar2[0x22] = 0;
    puVar2[0x23] = 0;
    puVar2[0x24] = 0;
    *(undefined4 *)(puVar2 + 0x25) = 0xffffff;
    *puVar2 = &PTR_FUN_14aa62e00;
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    FUN_14006bf18(puVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 14366c47e FUN_14366c47e body=111 status=ok
// SIG undefined FUN_14366c47e(void)

void FUN_14366c47e(longlong param_1)

{
  longlong lVar1;
  
  if ((((DAT_14c760e34 != 0) &&
       (lVar1 = (ulonglong)DAT_14ca85550 * 0x3c,
       (*(byte *)((longlong)&DAT_14ca814d8 + lVar1 + 3) & 0x10) != 0)) &&
      (((&DAT_14ca814c8)[(ulonglong)DAT_14ca85550 * 0xf] & 0x20000000) != 0)) &&
     ((*(uint *)(&DAT_14ca814cc + lVar1) & 8) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 != 0) {
      FUN_144725486(lVar1);
      FUN_1447259a8(lVar1);
      FUN_1400020a8(lVar1);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14366c4ed FUN_14366c4ed body=100 status=ok
// SIG undefined FUN_14366c4ed(void)

void FUN_14366c4ed(void)

{
  DAT_14caff560 = &PTR_FUN_14aa688b0;
  FUN_144725486(&DAT_14caff560);
  DAT_14caff560 = &PTR_FUN_14a38cd70;
  DAT_14caff56e = 2;
  if ((DAT_14caff568 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 14366c566 FUN_14366c566 body=69 status=ok
// SIG undefined FUN_14366c566(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366c566(void)

{
  _DAT_14caff5b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366c5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff5b8,1);
  return;
}



// FUNCTION 14366c5ab FUN_14366c5ab body=69 status=ok
// SIG undefined FUN_14366c5ab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366c5ab(void)

{
  _DAT_14caff5c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366c5ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff5c8,1);
  return;
}



// FUNCTION 14366c5f0 FUN_14366c5f0 body=69 status=ok
// SIG undefined FUN_14366c5f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366c5f0(void)

{
  _DAT_14caff5d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366c632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff5d8,1);
  return;
}



// FUNCTION 14366c635 FUN_14366c635 body=69 status=ok
// SIG undefined FUN_14366c635(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366c635(void)

{
  _DAT_14caff5e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366c677. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff5e8,1);
  return;
}



// FUNCTION 14366c67a FUN_14366c67a body=69 status=ok
// SIG undefined FUN_14366c67a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366c67a(void)

{
  _DAT_14caff5f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366c6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff5f8,1);
  return;
}



// FUNCTION 14366c6bf FUN_14366c6bf body=69 status=ok
// SIG undefined FUN_14366c6bf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366c6bf(void)

{
  _DAT_14caff600 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366c701. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff608,1);
  return;
}



// FUNCTION 14366c704 FUN_14366c704 body=69 status=ok
// SIG undefined FUN_14366c704(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366c704(void)

{
  _DAT_14caff610 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366c746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff618,1);
  return;
}



// FUNCTION 14366c749 FUN_14366c749 body=69 status=ok
// SIG undefined FUN_14366c749(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366c749(void)

{
  _DAT_14caff620 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366c78b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff628,1);
  return;
}



// FUNCTION 14366c78e FUN_14366c78e body=69 status=ok
// SIG undefined FUN_14366c78e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366c78e(void)

{
  _DAT_14caff630 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366c7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff638,1);
  return;
}



// FUNCTION 14366c7d3 FUN_14366c7d3 body=69 status=ok
// SIG undefined FUN_14366c7d3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366c7d3(void)

{
  _DAT_14caff640 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366c815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff648,1);
  return;
}



// FUNCTION 14366c818 FUN_14366c818 body=69 status=ok
// SIG undefined FUN_14366c818(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366c818(void)

{
  _DAT_14caff650 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366c85a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff658,1);
  return;
}



// FUNCTION 14366c85d FUN_14366c85d body=69 status=ok
// SIG undefined FUN_14366c85d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366c85d(void)

{
  _DAT_14caff660 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366c89f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff668,1);
  return;
}



// FUNCTION 14366c8a2 FUN_14366c8a2 body=69 status=ok
// SIG undefined FUN_14366c8a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366c8a2(void)

{
  _DAT_14caff670 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366c8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff678,1);
  return;
}



// FUNCTION 14366c8e7 FUN_14366c8e7 body=69 status=ok
// SIG undefined FUN_14366c8e7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366c8e7(void)

{
  _DAT_14caff680 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366c929. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff688,1);
  return;
}



// FUNCTION 14366c92c FUN_14366c92c body=69 status=ok
// SIG undefined FUN_14366c92c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366c92c(void)

{
  _DAT_14caff690 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366c96e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff698,1);
  return;
}



// FUNCTION 14366c971 FUN_14366c971 body=69 status=ok
// SIG undefined FUN_14366c971(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366c971(void)

{
  _DAT_14caff6a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366c9b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff6a8,1);
  return;
}



// FUNCTION 14366c9b6 FUN_14366c9b6 body=69 status=ok
// SIG undefined FUN_14366c9b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366c9b6(void)

{
  _DAT_14caff6b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366c9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff6b8,1);
  return;
}



// FUNCTION 14366c9fb FUN_14366c9fb body=69 status=ok
// SIG undefined FUN_14366c9fb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366c9fb(void)

{
  _DAT_14caff6c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366ca3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff6c8,1);
  return;
}



// FUNCTION 14366ca40 FUN_14366ca40 body=69 status=ok
// SIG undefined FUN_14366ca40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366ca40(void)

{
  _DAT_14caff6d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366ca82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff6d8,1);
  return;
}



// FUNCTION 14366ca85 FUN_14366ca85 body=69 status=ok
// SIG undefined FUN_14366ca85(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366ca85(void)

{
  _DAT_14caff6e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366cac7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff6e8,1);
  return;
}



// FUNCTION 14366caca FUN_14366caca body=69 status=ok
// SIG undefined FUN_14366caca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366caca(void)

{
  _DAT_14caff6f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366cb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff6f8,1);
  return;
}



// FUNCTION 14366cb0f FUN_14366cb0f body=69 status=ok
// SIG undefined FUN_14366cb0f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366cb0f(void)

{
  _DAT_14caff708 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366cb51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff710,1);
  return;
}



// FUNCTION 14366cb54 FUN_14366cb54 body=69 status=ok
// SIG undefined FUN_14366cb54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366cb54(void)

{
  _DAT_14caff720 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366cb96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff728,1);
  return;
}



// FUNCTION 14366cb99 FUN_14366cb99 body=69 status=ok
// SIG undefined FUN_14366cb99(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366cb99(void)

{
  _DAT_14caff738 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366cbdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff740,1);
  return;
}



// FUNCTION 14366cbde FUN_14366cbde body=69 status=ok
// SIG undefined FUN_14366cbde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366cbde(void)

{
  _DAT_14caff750 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014366cc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caff758,1);
  return;
}



// FUNCTION 14366cd3e FUN_14366cd3e body=1340 status=ok
// SIG undefined FUN_14366cd3e(void)

void FUN_14366cd3e(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined8 **ppuVar9;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((DAT_14c760e34 == 0) ||
       (lVar3 = (ulonglong)DAT_14ca85550 * 0x3c,
       (*(byte *)((longlong)&DAT_14ca814d8 + lVar3 + 3) & 0x10) == 0)) ||
      (((&DAT_14ca814c8)[(ulonglong)DAT_14ca85550 * 0xf] & 0x20000000) == 0)) ||
     ((*(uint *)(&DAT_14ca814cc + lVar3) & 8) == 0)) goto LAB_14366cd94;
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar4 = FUN_145cd3729;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  FUN_1402d2c96(puVar4 + 2,0xf,1);
  lVar3 = *(longlong *)(param_1 + 0x3a0);
  *(undefined8 **)(param_1 + 0x3a0) = puVar4 + 2;
  if (lVar3 != 0) {
    (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x50);
  *puVar4 = FUN_145bcfedd;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 4;
  puVar4[7] = 0;
  *(float *)(puVar4 + 8) = (float)DAT_14c7619a0;
  *(undefined8 *)((longlong)puVar4 + 0x44) = 0;
  FUN_145cee096(puVar4 + 3);
  lVar3 = *(longlong *)(param_1 + 0x698);
  *(undefined8 **)(param_1 + 0x698) = puVar4 + 2;
  if (lVar3 != 0) {
    (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar4 = &LAB_145cd36c1;
  puVar4[1] = 0;
  puVar4[2] = 0x3f800000;
  *(undefined4 *)(puVar4 + 3) = 0;
  lVar3 = *(longlong *)(param_1 + 0x6a0);
  *(undefined8 **)(param_1 + 0x6a0) = puVar4 + 2;
  if (lVar3 != 0) {
    (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
  }
  FUN_14366d27c(param_1);
  iVar2 = DAT_14c761994;
  *(int *)(param_1 + 0x3bc) = DAT_14c761994;
  iVar6 = DAT_14c76199c;
  if (iVar2 <= DAT_14c76199c) {
    iVar6 = iVar2;
  }
  *(int *)(param_1 + 0x3c0) = iVar6;
  FUN_140393c76(param_1 + 0x678,iVar2 * 0x30000,1);
  uVar7 = *(undefined4 *)(param_1 + 0x680);
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar4 = &LAB_145cd36c6;
  puVar4[1] = 0;
  *(undefined4 *)(puVar4 + 2) = uVar7;
  *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
  lVar3 = *(longlong *)(param_1 + 0x688);
  *(undefined8 **)(param_1 + 0x688) = puVar4 + 2;
  if (lVar3 != 0) {
    (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
  }
  FUN_14007fdac(param_1);
  lVar5 = FUN_14001cc68(0xd0,0x10);
  FUN_1463fcc9c(lVar5);
  lVar3 = *(longlong *)(param_1 + 0x690);
  *(longlong *)(param_1 + 0x690) = lVar5 + 0x10;
  if (lVar3 != 0) {
    (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
  }
  bVar8 = DAT_14caff748 != 0 & DAT_14ca85068;
  uVar7 = 0x20000000;
  if (DAT_14ca84df4 == 0x1002) {
    uVar7 = 0x3ffc0000;
  }
  local_50 = (uint)bVar8 << 0x16 | 0x10119;
  local_54 = 1;
  if (bVar8 != 0) {
    local_54 = uVar7;
  }
  local_58 = 4;
  local_48 = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0xa00000000;
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0xa00000000;
  *(undefined1 *)(param_1 + 0x228) = 1;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0xa00000000;
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0xa00000000;
  *(undefined1 *)(param_1 + 0x348) = 1;
  if ((bVar8 & DAT_14caff700 == 0) == 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0xa00000000;
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0xa00000000;
    *(undefined1 *)(param_1 + 0x108) = 1;
  }
  local_68 = 0;
  local_70 = 0x10119;
  local_78 = (undefined8 *)&DAT_100000004;
  FUN_14490af1f(&local_60,&local_78,L"Nanite.StreamingManager.ImposterData",1);
  ppuVar9 = (undefined8 **)(param_1 + 0x388);
  if (ppuVar9 == &local_60) {
LAB_14366d172:
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
  else {
    puVar4 = *ppuVar9;
    *ppuVar9 = local_60;
    local_60 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      goto LAB_14366d172;
    }
  }
  FUN_14490af1f(&local_78,&local_58,L"Nanite.StreamingManager.ClusterPageData",1);
  ppuVar9 = (undefined8 **)(param_1 + 0x148);
  if (ppuVar9 == &local_78) {
LAB_14366d1d8:
    if (local_78 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_78 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_78)(local_78,1);
      }
    }
  }
  else {
    puVar4 = *ppuVar9;
    *ppuVar9 = local_78;
    local_78 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      goto LAB_14366d1d8;
    }
  }
  local_68 = 0;
  local_70 = 0x10119;
  local_78 = (undefined8 *)&DAT_100000004;
  FUN_14490af1f(&local_60,&local_78,L"Nanite.StreamingManager.HierarchyData",1);
  ppuVar9 = (undefined8 **)(param_1 + 0x268);
  if (ppuVar9 != &local_60) {
    puVar4 = *ppuVar9;
    *ppuVar9 = local_60;
    local_60 = (undefined8 *)0x0;
    if (puVar4 == (undefined8 *)0x0) goto LAB_14366cd94;
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (local_60 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_60 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_60)(local_60,1);
    }
  }
LAB_14366cd94:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14366d27c FUN_14366d27c body=125 status=ok
// SIG undefined FUN_14366d27c(void)

void FUN_14366d27c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = DAT_14c761984;
  uVar3 = 0x800;
  if (DAT_14ca84df4 == 0x1002) {
    uVar3 = 0xfff;
  }
  iVar2 = uVar3 - DAT_14c761984;
  if (uVar3 < DAT_14c761984 || iVar2 == 0) {
    FUN_140033559(".\\Runtime/Engine/Private/Rendering/NaniteStreamingManager.cpp",0x544,
                  L"Streaming pool size (%dMB) must be smaller than the largest allocation supported by the graphics hardware (%dMB)"
                  ,DAT_14c761984,uVar3);
  }
  *(uint *)(param_1 + 0x3ac) = uVar1 << 3;
  uVar3 = iVar2 * 0x20;
  *(uint *)(param_1 + 0x3b0) = uVar3;
  uVar1 = DAT_14c761988;
  if (DAT_14c761988 < uVar3) {
    uVar3 = DAT_14c761988;
  }
  *(uint *)(param_1 + 0x3b4) = uVar3;
  *(uint *)(param_1 + 0x3b8) = uVar1;
  return;
}



// FUNCTION 14366d2fa FUN_14366d2fa body=278 status=ok
// SIG undefined FUN_14366d2fa(void)

void FUN_14366d2fa(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((((DAT_14c760e34 != 0) &&
       (lVar2 = (ulonglong)DAT_14ca85550 * 0x3c,
       (*(byte *)((longlong)&DAT_14ca814d8 + lVar2 + 3) & 0x10) != 0)) &&
      (((&DAT_14ca814c8)[(ulonglong)DAT_14ca85550 * 0xf] & 0x20000000) != 0)) &&
     ((*(uint *)(&DAT_14ca814cc + lVar2) & 8) != 0)) {
    iVar1 = *(int *)(param_1 + 0x5f0);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x5e8);
      lVar3 = 0;
      do {
        FUN_1400020a8(*(undefined8 *)(lVar2 + lVar3));
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar1 * 8 != lVar3);
    }
    FUN_145c6ffa6(param_1 + 0x270);
    FUN_145c6ffa6(param_1 + 0x30);
    FUN_145c6ffa6(param_1 + 0x150);
    lVar2 = *(longlong *)(param_1 + 0x698);
    if (lVar2 != 0) {
      *(undefined8 *)(param_1 + 0x698) = 0;
      (**(code **)(lVar2 + -0x10))(lVar2 + -0x10);
    }
    FUN_14008008d(*(undefined8 *)(param_1 + 0x668),*(undefined4 *)(param_1 + 0x670));
    *(undefined4 *)(param_1 + 0x670) = 0;
    if (*(int *)(param_1 + 0x674) != 0) {
      FUN_1463fcd12(param_1 + 0x668);
    }
    lVar2 = *(longlong *)(param_1 + 0x690);
    if (lVar2 != 0) {
      *(undefined8 *)(param_1 + 0x690) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014366d3fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + -0x10))(lVar2 + -0x10);
      return;
    }
  }
  return;
}



// FUNCTION 14366d410 FUN_14366d410 body=2642 status=ok
// SIG undefined FUN_14366d410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366d410(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  bool bVar19;
  
  if (DAT_14c760e34 == 0) {
    return;
  }
  lVar6 = (ulonglong)DAT_14ca85550 * 0x3c;
  if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar6 + 3) & 0x10) == 0) {
    return;
  }
  if (((&DAT_14ca814c8)[(ulonglong)DAT_14ca85550 * 0xf] & 0x20000000) == 0) {
    return;
  }
  if ((*(uint *)(&DAT_14ca814cc + lVar6) & 8) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xac) != -1) {
    return;
  }
  iVar17 = *(int *)(param_1 + 0x50);
  lVar6 = (longlong)DAT_14cb00e2c;
  if (DAT_14cb00e2c < DAT_14cb00e88) {
    puVar10 = DAT_14cb00e80;
    if (DAT_14cb00e80 == (undefined *)0x0) {
      puVar10 = &DAT_14cb00e30;
    }
    iVar13 = DAT_14cb00e88 - DAT_14cb00e2c;
    do {
      if (iVar17 <= *(int *)(puVar10 + lVar6 * 8 + 4)) {
        if (lVar6 != -1) {
          _DAT_14cb00e20 = _DAT_14cb00e20 + iVar17;
          goto LAB_14366d4e8;
        }
        break;
      }
      lVar6 = lVar6 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  if (DAT_14cb00ee8 != 0) {
    FUN_144883418(&DAT_14cb00e20);
    lVar6 = (longlong)DAT_14cb00e2c;
    if (DAT_14cb00e2c < DAT_14cb00e88) {
      puVar10 = &DAT_14cb00e30;
      if (DAT_14cb00e80 != (undefined *)0x0) {
        puVar10 = DAT_14cb00e80;
      }
      iVar13 = DAT_14cb00e88 - DAT_14cb00e2c;
      do {
        if (iVar17 <= *(int *)(puVar10 + lVar6 * 8 + 4)) {
          _DAT_14cb00e20 = _DAT_14cb00e20 + iVar17;
          if (lVar6 != -1) goto LAB_14366d4e8;
          goto LAB_14366d4bb;
        }
        lVar6 = lVar6 + 1;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
  }
  _DAT_14cb00e20 = _DAT_14cb00e20 + iVar17;
LAB_14366d4bb:
  iVar17 = iVar17 + DAT_14cb00e24;
  iVar13 = DAT_14cb00e24;
  iVar4 = iVar17;
  if (iVar17 <= DAT_14cb00e28) {
    iVar4 = DAT_14cb00e28;
  }
LAB_14366d50e:
  DAT_14cb00e28 = iVar4;
  DAT_14cb00e24 = iVar17;
  *(int *)(param_1 + 0xb0) = iVar13;
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x50);
  _DAT_14cb00e18 = _DAT_14cb00e18 + *(int *)(param_1 + 0x50);
  DAT_14cb010b4 = DAT_14cb010b4 + *(int *)(param_1 + 0xbc);
  uVar8 = DAT_14cb010b4;
  if (DAT_14cb010b4 <= DAT_14cb010b8) {
    uVar8 = DAT_14cb010b8;
  }
  iVar17 = *(int *)(param_1 + 0x88);
  lVar6 = (longlong)DAT_14cb00d0c;
  DAT_14cb010b8 = uVar8;
  if (DAT_14cb00d0c < DAT_14cb00d68) {
    puVar10 = DAT_14cb00d60;
    if (DAT_14cb00d60 == (undefined *)0x0) {
      puVar10 = &DAT_14cb00d10;
    }
    iVar13 = DAT_14cb00d68 - DAT_14cb00d0c;
    do {
      if (iVar17 <= *(int *)(puVar10 + lVar6 * 8 + 4)) {
        if (lVar6 != -1) {
          _DAT_14cb00d00 = _DAT_14cb00d00 + iVar17;
          goto LAB_14366d5c1;
        }
        break;
      }
      lVar6 = lVar6 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  if (DAT_14cb00dc8 != 0) {
    FUN_144883418(&DAT_14cb00d00);
    lVar6 = (longlong)DAT_14cb00d0c;
    if (DAT_14cb00d0c < DAT_14cb00d68) {
      puVar10 = &DAT_14cb00d10;
      if (DAT_14cb00d60 != (undefined *)0x0) {
        puVar10 = DAT_14cb00d60;
      }
      iVar13 = DAT_14cb00d68 - DAT_14cb00d0c;
      do {
        if (iVar17 <= *(int *)(puVar10 + lVar6 * 8 + 4)) {
          _DAT_14cb00d00 = _DAT_14cb00d00 + iVar17;
          if (lVar6 != -1) goto LAB_14366d5c1;
          goto LAB_14366d594;
        }
        lVar6 = lVar6 + 1;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
  }
  _DAT_14cb00d00 = _DAT_14cb00d00 + iVar17;
LAB_14366d594:
  iVar17 = iVar17 + DAT_14cb00d04;
  iVar13 = DAT_14cb00d04;
  iVar4 = iVar17;
  if (iVar17 <= DAT_14cb00d08) {
    iVar4 = DAT_14cb00d08;
  }
LAB_14366d5e7:
  DAT_14cb00d08 = iVar4;
  DAT_14cb00d04 = iVar17;
  *(int *)(param_1 + 0xb4) = iVar13;
  if ((DAT_14c761990 == 0) && (DAT_14cb0107c < (uint)(&DAT_14cb00d04)[DAT_14cb00dd0])) {
    FUN_140033559(".\\Runtime/Engine/Private/Rendering/NaniteStreamingManager.cpp",0x59a,
                  L"Out of root pages. Increase the initial root page allocation (r.Nanite.Streaming.NumInitialRootPages) or allow it to grow dynamically (r.Nanite.Streaming.DynamicallyGrowAllocations)."
                 );
  }
  DAT_14cb010a0 = DAT_14cb010a0 + *(int *)(param_1 + 0x88);
  uVar8 = DAT_14cb010a0;
  if (DAT_14cb010a0 <= DAT_14cb010a4) {
    uVar8 = DAT_14cb010a4;
  }
  DAT_14cb010a4 = uVar8;
  if ((DAT_14c761998 != 0) && (*(int *)(param_1 + 0x40) != 0)) {
    lVar6 = (longlong)DAT_14cb00f4c;
    if (DAT_14cb00f4c < DAT_14cb00fa8) {
      puVar10 = DAT_14cb00fa0;
      if (DAT_14cb00fa0 == (undefined *)0x0) {
        puVar10 = &DAT_14cb00f50;
      }
      iVar17 = DAT_14cb00fa8 - DAT_14cb00f4c;
      do {
        if (0 < *(int *)(puVar10 + lVar6 * 8 + 4)) {
          if (lVar6 != -1) {
            _DAT_14cb00f40 = _DAT_14cb00f40 + 1;
            goto LAB_14366d6d9;
          }
          break;
        }
        lVar6 = lVar6 + 1;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
    if (DAT_14cb01008 != 0) {
      FUN_144883418(&DAT_14cb00f40);
      lVar6 = (longlong)DAT_14cb00f4c;
      if (DAT_14cb00f4c < DAT_14cb00fa8) {
        puVar10 = &DAT_14cb00f50;
        if (DAT_14cb00fa0 != (undefined *)0x0) {
          puVar10 = DAT_14cb00fa0;
        }
        iVar17 = DAT_14cb00fa8 - DAT_14cb00f4c;
        do {
          if (0 < *(int *)(puVar10 + lVar6 * 8 + 4)) {
            _DAT_14cb00f40 = _DAT_14cb00f40 + 1;
            if (lVar6 != -1) goto LAB_14366d6d9;
            goto LAB_14366d6ab;
          }
          lVar6 = lVar6 + 1;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
      }
    }
    _DAT_14cb00f40 = _DAT_14cb00f40 + 1;
LAB_14366d6ab:
    iVar17 = DAT_14cb00f44 + 1;
    iVar13 = DAT_14cb00f44;
    if (DAT_14cb00f48 < iVar17) {
      DAT_14cb00f48 = iVar17;
    }
LAB_14366d70c:
    DAT_14cb00f44 = iVar17;
    *(int *)(param_1 + 0xb8) = iVar13;
    if ((DAT_14c761990 == 0) && (DAT_14c76198c < (&DAT_14cb00f44)[DAT_14cb01010])) {
      FUN_140033559(".\\Runtime/Engine/Private/Rendering/NaniteStreamingManager.cpp",0x5aa,
                    L"Out of imposters. Increase the initial imposter allocation (r.Nanite.Streaming.NumInitialImposters) or allow it to grow dynamically (r.Nanite.Streaming.DynamicallyGrowAllocations)."
                   );
    }
    _DAT_14cb00f38 = _DAT_14cb00f38 + 1;
  }
  if (DAT_14cb01078 <= *(uint *)(param_1 + 0xb4)) {
    iVar17 = 0x800;
    if (DAT_14ca84df4 == 0x1002) {
      iVar17 = 0xfff;
    }
    FUN_140033559(".\\Runtime/Engine/Private/Rendering/NaniteStreamingManager.cpp",0x5b5,
                  L"Cannot allocate more root pages %d/%d. Pool resource has grown to maximum size of %dMB.\n%dMB is spent on streaming data, leaving %dMB for %d root pages."
                  ,DAT_14cb01078,DAT_14cb01078,iVar17,DAT_14c761984,iVar17 - DAT_14c761984,
                  DAT_14cb01078);
  }
  FUN_140905cc8(&DAT_14cb00cd8,(&DAT_14cb00d04)[DAT_14cb00dd0]);
  iVar17 = DAT_14cb00cf0;
  if (DAT_14cb00cf0 < (&DAT_14cb00d04)[DAT_14cb00dd0]) {
    iVar17 = (&DAT_14cb00d04)[DAT_14cb00dd0];
  }
  FUN_1401211f6(&DAT_14cb00ce8,iVar17,1);
  iVar17 = *(int *)(param_1 + 0x70);
  lVar6 = (longlong)DAT_14cb01184;
  if (DAT_14cb01184 < DAT_14cb011e0) {
    puVar10 = DAT_14cb011d8;
    if (DAT_14cb011d8 == (undefined *)0x0) {
      puVar10 = &DAT_14cb01188;
    }
    iVar13 = DAT_14cb011e0 - DAT_14cb01184;
    do {
      if (iVar17 <= *(int *)(puVar10 + lVar6 * 8 + 4)) {
        if (lVar6 != -1) {
          _DAT_14cb01178 = _DAT_14cb01178 + iVar17;
          goto LAB_14366d872;
        }
        break;
      }
      lVar6 = lVar6 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  if (DAT_14cb01240 != 0) {
    FUN_144883418(&DAT_14cb01178);
    lVar6 = (longlong)DAT_14cb01184;
    if (DAT_14cb01184 < DAT_14cb011e0) {
      puVar10 = &DAT_14cb01188;
      if (DAT_14cb011d8 != (undefined *)0x0) {
        puVar10 = DAT_14cb011d8;
      }
      iVar13 = DAT_14cb011e0 - DAT_14cb01184;
      do {
        if (iVar17 <= *(int *)(puVar10 + lVar6 * 8 + 4)) {
          _DAT_14cb01178 = _DAT_14cb01178 + iVar17;
          if (lVar6 != -1) goto LAB_14366d872;
          goto LAB_14366d843;
        }
        lVar6 = lVar6 + 1;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
  }
  _DAT_14cb01178 = _DAT_14cb01178 + iVar17;
LAB_14366d843:
  iVar17 = iVar17 + DAT_14cb0117c;
  iVar13 = DAT_14cb0117c;
  iVar4 = iVar17;
  if (iVar17 <= DAT_14cb01180) {
    iVar4 = DAT_14cb01180;
  }
LAB_14366d897:
  DAT_14cb01180 = iVar4;
  DAT_14cb0117c = iVar17;
  FUN_1400802d6(&DAT_14cb01250,(&DAT_14cb0117c)[DAT_14cb01248]);
  uVar8 = *(uint *)(param_1 + 0xb4);
  bVar7 = *(byte *)(DAT_14cb00ce8 + (int)uVar8);
  uVar3 = (uint)bVar7 << 0x11 | uVar8;
  *(byte *)(DAT_14cb00ce8 + (int)uVar8) = bVar7 + 1;
  *(uint *)(param_1 + 0xac) = uVar3;
  if (*(int *)(param_1 + 0x88) != 0) {
    uVar8 = 0;
    do {
      lVar6 = DAT_14cb00cd8;
      lVar14 = (longlong)(int)(*(int *)(param_1 + 0xb4) + uVar8);
      *(longlong *)(DAT_14cb00cd8 + lVar14 * 0x18) = param_1;
      *(uint *)(lVar6 + 8 + lVar14 * 0x18) = uVar3;
      *(uint *)(lVar6 + 0xc + lVar14 * 0x18) = iVar13 + uVar8;
      *(undefined2 *)(lVar6 + 0x10 + lVar14 * 0x18) = 0;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x88));
  }
  iVar13 = DAT_14cb01108;
  iVar17 = DAT_14cb010e0;
  if (DAT_14cb0110c == 0) {
    iVar13 = DAT_14cb010e0 + 1;
    bVar19 = DAT_14cb010e4 == DAT_14cb010e0;
    DAT_14cb010e0 = iVar13;
    if (bVar19) {
      FUN_14482b872(&DAT_14cb010d8,iVar17);
    }
    iVar13 = DAT_14cb01100;
    if (DAT_14cb01100 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = DAT_14cb01100 + 0x1e;
      if (-1 < DAT_14cb01100 + -1) {
        iVar4 = DAT_14cb01100 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    iVar9 = DAT_14cb01100 + 1;
    iVar16 = DAT_14cb01100 + 0x1f;
    if (-1 < DAT_14cb01100) {
      iVar16 = DAT_14cb01100;
    }
    if (iVar16 >> 5 != iVar4) {
      if (DAT_14cb01104 <= DAT_14cb01100) {
        if (DAT_14cb01100 + 0x20U < 0xa0) {
          DAT_14cb01104 = 0x80;
        }
        else {
          uVar8 = DAT_14cb01100 + 0x20U >> 5;
          if (DAT_14cb01104 + 0x1fU < 0xa0) {
            uVar3 = 4;
            if (4 < uVar8) {
              uVar3 = uVar8;
            }
          }
          else {
            uVar3 = uVar8 + (uVar8 * 3 >> 3) + 0x10;
          }
          uVar11 = (ulonglong)(uVar3 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar5 = (uint)(uVar11 + 0xf);
              if (uVar3 < 0x1ffd) {
                uVar11 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar11 + 0xf >> 4]];
              }
              else {
                uVar12 = (ulonglong)(uVar5 & 0xfffffff0);
                if (uVar12 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar5 >> 4];
                  uVar15 = 0x32;
                  if (0x32 < bVar7) {
                    uVar15 = (ulonglong)bVar7;
                  }
                  uVar18 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar11 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar18 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar18 & 0xffffffff] & 0xf) == 0) goto LAB_14366dd7e;
                    lVar6 = uVar15 + 1 + uVar18;
                    uVar18 = uVar18 - 1;
                  } while (lVar6 != 0x33);
                }
                uVar11 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar11 = (ulonglong)DAT_14c841df8;
                }
                uVar11 = -uVar11 & (uVar12 + uVar11) - 1;
              }
            }
            else {
              uVar11 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar11,0);
            }
          }
LAB_14366dd7e:
          iVar4 = (int)(uVar11 >> 2);
          DAT_14cb01104 = -0x20;
          if ((int)uVar8 <= iVar4) {
            DAT_14cb01104 = iVar4 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14cb010e8,DAT_14cb01100);
        iVar9 = DAT_14cb01100 + 1;
      }
      iVar4 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar4 = iVar9;
      }
      if (iVar9 % 0x20 != 0) {
        puVar10 = &DAT_14cb010e8;
        if (DAT_14cb010f8 != (undefined *)0x0) {
          puVar10 = DAT_14cb010f8;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        DAT_14cb01100 = iVar9;
        *(uint *)(puVar10 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)(puVar10 + (longlong)(iVar4 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
        iVar9 = DAT_14cb01100;
      }
    }
    DAT_14cb01100 = iVar9;
    lVar6 = (longlong)iVar17;
    puVar10 = &DAT_14cb010e8;
    if (DAT_14cb010f8 != (undefined *)0x0) {
      puVar10 = DAT_14cb010f8;
    }
    bVar7 = (byte)iVar13 & 0x1f;
    *(uint *)(puVar10 + (longlong)(iVar16 >> 5) * 4) =
         *(uint *)(puVar10 + (longlong)(iVar16 >> 5) * 4) &
         (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    lVar6 = (longlong)DAT_14cb01108;
    DAT_14cb01108 = *(int *)(DAT_14cb010d8 + 4 + lVar6 * 0x18);
    DAT_14cb0110c = DAT_14cb0110c + -1;
    iVar17 = iVar13;
    if (DAT_14cb0110c != 0) {
      *(undefined4 *)(DAT_14cb010d8 + (longlong)DAT_14cb01108 * 0x18) = 0xffffffff;
    }
  }
  puVar10 = &DAT_14cb010e8;
  if (DAT_14cb010f8 != (undefined *)0x0) {
    puVar10 = DAT_14cb010f8;
  }
  iVar13 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar13 = iVar17;
  }
  *(uint *)(puVar10 + (longlong)(iVar13 >> 5) * 4) =
       *(uint *)(puVar10 + (longlong)(iVar13 >> 5) * 4) | 1 << ((byte)iVar17 & 0x1f);
  lVar14 = DAT_14cb010d8;
  iVar13 = 1;
  uVar8 = *(uint *)(param_1 + 0xc4);
  *(uint *)(DAT_14cb010d8 + lVar6 * 0x18) = uVar8;
  *(longlong *)(lVar14 + 8 + lVar6 * 0x18) = param_1;
  *(undefined4 *)(lVar14 + 0x10 + lVar6 * 0x18) = 0xffffffff;
  uVar3 = DAT_14cb010e0 - DAT_14cb0110c;
  if (3 < uVar3) {
    uVar11 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar13 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar3 < 1) || (iVar13 <= DAT_14cb01120)) {
    lVar14 = lVar14 + lVar6 * 0x18;
    uVar8 = DAT_14cb01120 - 1U & uVar8;
    *(uint *)(lVar14 + 0x14) = uVar8;
    puVar10 = DAT_14cb01118;
    if (DAT_14cb01118 == (undefined *)0x0) {
      puVar10 = &DAT_14cb01110;
    }
    *(undefined4 *)(lVar14 + 0x10) =
         *(undefined4 *)(puVar10 + ((longlong)DAT_14cb01120 - 1U & (longlong)(int)uVar8) * 4);
    puVar10 = DAT_14cb01118;
    if (DAT_14cb01118 == (undefined *)0x0) {
      puVar10 = &DAT_14cb01110;
    }
    *(int *)(puVar10 + ((longlong)DAT_14cb01120 - 1U & (longlong)(int)uVar8) * 4) = iVar17;
  }
  else {
    DAT_14cb01120 = iVar13;
    FUN_1417eba70();
  }
  iVar17 = DAT_14cb010d0;
  lVar6 = (longlong)(int)DAT_14cb010d0;
  DAT_14cb010d0 = DAT_14cb010d0 + 1;
  if (DAT_14cb010d4 < DAT_14cb010d0) {
    FUN_1463fcd42(iVar17);
  }
  *(longlong *)(DAT_14cb010c8 + lVar6 * 8) = param_1;
  DAT_14cb0108c = DAT_14cb0108c + 1;
  return;
LAB_14366d4e8:
  iVar9 = (int)lVar6;
  lVar6 = (longlong)iVar9;
  iVar13 = *(int *)(puVar10 + lVar6 * 8);
  *(int *)(puVar10 + lVar6 * 8) = iVar13 + iVar17;
  piVar1 = (int *)(puVar10 + lVar6 * 8 + 4);
  *piVar1 = *piVar1 - iVar17;
  iVar17 = DAT_14cb00e24;
  iVar4 = DAT_14cb00e28;
  if ((*piVar1 == 0) && (DAT_14cb00e2c == iVar9)) {
    DAT_14cb00e2c = iVar9 + 1;
  }
  goto LAB_14366d50e;
LAB_14366d5c1:
  iVar9 = (int)lVar6;
  lVar6 = (longlong)iVar9;
  iVar13 = *(int *)(puVar10 + lVar6 * 8);
  *(int *)(puVar10 + lVar6 * 8) = iVar13 + iVar17;
  piVar1 = (int *)(puVar10 + lVar6 * 8 + 4);
  *piVar1 = *piVar1 - iVar17;
  iVar17 = DAT_14cb00d04;
  iVar4 = DAT_14cb00d08;
  if ((*piVar1 == 0) && (DAT_14cb00d0c == iVar9)) {
    DAT_14cb00d0c = iVar9 + 1;
  }
  goto LAB_14366d5e7;
LAB_14366d6d9:
  iVar9 = (int)lVar6;
  lVar6 = (longlong)iVar9;
  iVar13 = *(int *)(puVar10 + lVar6 * 8);
  iVar4 = *(int *)(puVar10 + lVar6 * 8 + 4);
  *(int *)(puVar10 + lVar6 * 8) = iVar13 + 1;
  *(int *)(puVar10 + lVar6 * 8 + 4) = iVar4 + -1;
  iVar17 = DAT_14cb00f44;
  if ((iVar4 == 1) && (DAT_14cb00f4c == iVar9)) {
    DAT_14cb00f4c = iVar9 + 1;
  }
  goto LAB_14366d70c;
LAB_14366d872:
  iVar9 = (int)lVar6;
  lVar6 = (longlong)iVar9;
  iVar13 = *(int *)(puVar10 + lVar6 * 8);
  *(int *)(puVar10 + lVar6 * 8) = iVar13 + iVar17;
  piVar1 = (int *)(puVar10 + lVar6 * 8 + 4);
  *piVar1 = *piVar1 - iVar17;
  iVar17 = DAT_14cb0117c;
  iVar4 = DAT_14cb01180;
  if ((*piVar1 == 0) && (DAT_14cb01184 == iVar9)) {
    DAT_14cb01184 = iVar9 + 1;
  }
  goto LAB_14366d897;
}



// FUNCTION 14366de62 FUN_14366de62 body=1299 status=ok
// SIG undefined FUN_14366de62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366de62(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  ulonglong uVar16;
  undefined *puVar17;
  int iVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  
  uVar4 = DAT_14cb00ee8;
  if (DAT_14c760e34 != 0) {
    lVar9 = (ulonglong)DAT_14ca85550 * 0x3c;
    if (((((*(byte *)((longlong)&DAT_14ca814d8 + lVar9 + 3) & 0x10) != 0) &&
         (((&DAT_14ca814c8)[(ulonglong)DAT_14ca85550 * 0xf] & 0x20000000) != 0)) &&
        ((*(uint *)(&DAT_14ca814cc + lVar9) & 8) != 0)) && (*(int *)(param_1 + 0xac) != -1)) {
      uVar3 = *(undefined4 *)(param_1 + 0xb0);
      iVar18 = *(int *)(param_1 + 0xbc);
      lVar9 = (longlong)(int)DAT_14cb00ee8;
      DAT_14cb00ee8 = DAT_14cb00ee8 + 1;
      if (DAT_14cb00eec < DAT_14cb00ee8) {
        FUN_14017bd48(&DAT_14cb00e90,uVar4);
      }
      puVar17 = &DAT_14cb00e90;
      if (DAT_14cb00ee0 != (undefined *)0x0) {
        puVar17 = DAT_14cb00ee0;
      }
      *(ulonglong *)(puVar17 + lVar9 * 8) = CONCAT44(iVar18,uVar3);
      _DAT_14cb00e20 = _DAT_14cb00e20 - iVar18;
      *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
      uVar5 = DAT_14cb00dc8;
      uVar4 = *(uint *)(param_1 + 0x88);
      iVar18 = *(int *)(param_1 + 0xb4);
      lVar9 = (longlong)(int)DAT_14cb00dc8;
      DAT_14cb00dc8 = DAT_14cb00dc8 + 1;
      if (DAT_14cb00dcc < DAT_14cb00dc8) {
        FUN_14017bd48(&DAT_14cb00d70,uVar5);
      }
      puVar17 = &DAT_14cb00d70;
      if (DAT_14cb00dc0 != (undefined *)0x0) {
        puVar17 = DAT_14cb00dc0;
      }
      *(ulonglong *)(puVar17 + lVar9 * 8) = CONCAT44(uVar4,iVar18);
      _DAT_14cb00d00 = _DAT_14cb00d00 - uVar4;
      *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
      uVar8 = DAT_14cb01008;
      uVar5 = *(uint *)(param_1 + 0xb8);
      if ((ulonglong)uVar5 != 0xffffffff) {
        lVar9 = (longlong)(int)DAT_14cb01008;
        DAT_14cb01008 = DAT_14cb01008 + 1;
        if (DAT_14cb0100c < DAT_14cb01008) {
          FUN_14017bd48(&DAT_14cb00fb0,uVar8);
        }
        puVar17 = &DAT_14cb00fb0;
        if (DAT_14cb01000 != (undefined *)0x0) {
          puVar17 = DAT_14cb01000;
        }
        *(ulonglong *)(puVar17 + lVar9 * 8) = (ulonglong)uVar5 | 0x100000000;
        _DAT_14cb00f40 = _DAT_14cb00f40 + -1;
        *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
      }
      DAT_14cb010b4 = DAT_14cb010b4 - *(int *)(param_1 + 0xbc);
      uVar5 = *(uint *)(param_1 + 0x70);
      DAT_14cb010a0 = DAT_14cb010a0 - uVar4;
      iVar12 = *(int *)(DAT_14cb00cd8 + 0xc + (longlong)iVar18 * 0x18);
      lVar9 = DAT_14cb00cd8;
      for (uVar8 = uVar4; DAT_14cb00cd8 = lVar9, uVar8 != 0; uVar8 = uVar8 - 1) {
        lVar11 = (longlong)iVar18;
        *(undefined8 *)(lVar9 + lVar11 * 0x18) = 0;
        *(undefined8 *)(lVar9 + 8 + lVar11 * 0x18) = 0xffffffffffffffff;
        *(undefined2 *)(lVar9 + 0x10 + lVar11 * 0x18) = 0;
        uVar16 = (ulonglong)*(byte *)(lVar9 + 0x12 + lVar11 * 0x18);
        if (uVar16 != 0xff) {
          piVar1 = (int *)(*DAT_14cb01068 + uVar16 * 4);
          *piVar1 = *piVar1 + -1;
          *(undefined1 *)(lVar9 + lVar11 * 0x18 + 0x12) = 0xff;
        }
        iVar18 = iVar18 + 1;
        lVar9 = DAT_14cb00cd8;
      }
      if (uVar4 < uVar5) {
        iVar13 = uVar5 - uVar4;
        iVar18 = uVar4 + iVar12;
        do {
          lVar9 = (longlong)*(int *)(DAT_14cb01250 + 4 + (longlong)iVar18 * 8);
          if (lVar9 != -1) {
            puVar2 = (undefined8 *)(DAT_14cb01260 + lVar9 * 0x10);
            *puVar2 = 0xffffffffffffffff;
            puVar2[1] = 0xffffffff;
            lVar10 = DAT_14cb01270;
            lVar9 = lVar9 * 0x50;
            lVar11 = DAT_14cb01270 + 0x4c;
            *(undefined4 *)(DAT_14cb01270 + 0x48 + lVar9) = 0;
            if (*(int *)(lVar11 + lVar9) < 0) {
              FUN_147cd4f0c(lVar10 + lVar9);
            }
          }
          *(undefined8 *)(DAT_14cb01250 + (longlong)iVar18 * 8) = 0xffffffff00000000;
          iVar18 = iVar18 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      uVar4 = DAT_14cb01240;
      lVar9 = (longlong)(int)DAT_14cb01240;
      DAT_14cb01240 = DAT_14cb01240 + 1;
      if (DAT_14cb01244 < DAT_14cb01240) {
        FUN_14017bd48(&DAT_14cb011e8,uVar4);
      }
      puVar17 = &DAT_14cb011e8;
      if (DAT_14cb01238 != (undefined *)0x0) {
        puVar17 = DAT_14cb01238;
      }
      *(ulonglong *)(puVar17 + lVar9 * 8) = CONCAT44(uVar5,iVar12);
      _DAT_14cb01178 = _DAT_14cb01178 - uVar5;
      *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
      if (DAT_14cb01120 != 0) {
        uVar4 = *(uint *)(param_1 + 0xc4);
        puVar17 = DAT_14cb01118;
        if (DAT_14cb01118 == (undefined *)0x0) {
          puVar17 = &DAT_14cb01110;
        }
        iVar18 = *(int *)(puVar17 + (longlong)(int)(DAT_14cb01120 - 1U & uVar4) * 4);
        while (iVar12 = iVar18, iVar12 != -1) {
          iVar18 = *(int *)(DAT_14cb010d8 + 0x10 + (longlong)iVar12 * 0x18);
          lVar9 = DAT_14cb010d8;
          if (*(uint *)(DAT_14cb010d8 + (longlong)iVar12 * 0x18) == uVar4) {
            do {
              lVar11 = (longlong)iVar12;
              if (*(longlong *)(lVar9 + 8 + lVar11 * 0x18) == param_1) {
                puVar17 = DAT_14cb01118;
                if (DAT_14cb01118 == (undefined *)0x0) {
                  puVar17 = &DAT_14cb01110;
                }
                lVar10 = (longlong)*(int *)(lVar9 + 0x14 + lVar11 * 0x18);
                iVar13 = *(int *)(puVar17 + lVar10 * 4);
                if (iVar13 == iVar12) {
                  puVar14 = (undefined4 *)(puVar17 + lVar10 * 4);
                }
                else {
                  do {
                    lVar10 = (longlong)iVar13;
                    iVar13 = *(int *)(lVar9 + 0x10 + lVar10 * 0x18);
                  } while (iVar13 != iVar12);
                  puVar14 = (undefined4 *)(lVar9 + lVar10 * 0x18 + 0x10);
                }
                *puVar14 = *(undefined4 *)(lVar9 + lVar11 * 0x18 + 0x10);
                lVar9 = DAT_14cb010d8;
                if (DAT_14cb0110c != 0) {
                  *(int *)(DAT_14cb010d8 + (longlong)DAT_14cb01108 * 0x18) = iVar12;
                }
                *(undefined4 *)(lVar9 + lVar11 * 0x18) = 0xffffffff;
                iVar13 = -1;
                if (0 < DAT_14cb0110c) {
                  iVar13 = DAT_14cb01108;
                }
                *(int *)(lVar9 + 4 + lVar11 * 0x18) = iVar13;
                DAT_14cb0110c = DAT_14cb0110c + 1;
                puVar17 = DAT_14cb010f8;
                if (DAT_14cb010f8 == (undefined *)0x0) {
                  puVar17 = &DAT_14cb010e8;
                }
                iVar13 = iVar12 + 0x1f;
                if (-1 < iVar12) {
                  iVar13 = iVar12;
                }
                bVar6 = (byte)iVar12 & 0x1f;
                DAT_14cb01108 = iVar12;
                *(uint *)(puVar17 + (longlong)(iVar13 >> 5) * 4) =
                     *(uint *)(puVar17 + (longlong)(iVar13 >> 5) * 4) &
                     (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
                lVar9 = DAT_14cb010d8;
              }
              do {
                iVar12 = iVar18;
                if (iVar12 == -1) goto LAB_14366e2af;
                iVar18 = *(int *)(lVar9 + 0x10 + (longlong)iVar12 * 0x18);
              } while (*(uint *)(lVar9 + (longlong)iVar12 * 0x18) != uVar4);
            } while( true );
          }
        }
      }
LAB_14366e2af:
      *(undefined4 *)(param_1 + 0xc4) = 0;
      iVar18 = DAT_14cb010d0;
      plVar7 = DAT_14cb010c8;
      lVar9 = (longlong)DAT_14cb010d0;
      iVar12 = DAT_14cb010d0;
      if (lVar9 != 0) {
        iVar12 = 0;
        bVar19 = *DAT_14cb010c8 == param_1;
        iVar13 = 0;
        do {
          lVar10 = (longlong)iVar13;
          iVar20 = iVar13;
          lVar11 = lVar10;
          iVar15 = iVar13 + 1;
          if (iVar13 + 1 < iVar18) {
            iVar15 = iVar18;
          }
          do {
            lVar11 = lVar11 + 1;
            iVar21 = iVar15;
            if (lVar9 <= lVar11) break;
            iVar21 = iVar20 + 1;
            iVar20 = iVar21;
          } while (bVar19 == (plVar7[lVar11] == param_1));
          if (bVar19 == false) {
            if (iVar12 != iVar13) {
              memmove(plVar7 + iVar12,plVar7 + lVar10,(longlong)(iVar21 - iVar13) << 3);
            }
            iVar12 = iVar12 + (iVar21 - iVar13);
          }
          bVar19 = (bool)(bVar19 ^ 1);
          iVar13 = iVar21;
        } while (lVar11 < lVar9);
      }
      DAT_14cb010d0 = iVar12;
      DAT_14cb0108c = DAT_14cb0108c + -1;
    }
  }
  return;
}



// FUNCTION 14366e376 FUN_14366e376 body=1398 status=ok
// SIG undefined FUN_14366e376(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14366e376(longlong param_1,longlong param_2,longlong param_3,byte param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  ushort *puVar5;
  int *piVar6;
  int *piVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ushort uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_a8 [35];
  byte local_85;
  int local_84;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  uint local_68;
  int local_64;
  longlong *local_60;
  longlong local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)(param_3 + 0xac);
  local_64 = *(int *)(param_3 + 0xb0);
  uVar13 = *(ushort *)(param_2 + 6);
  local_85 = param_4;
  local_78 = param_2;
  local_58 = param_3;
  if (uVar13 != 0) {
    param_2 = param_2 + 8;
    local_84 = iVar1 * -0x39feb07;
    local_70 = param_1 + 0x630;
    local_60 = (longlong *)(param_1 + 0x390);
    local_68 = param_4 | 0x1c;
    uVar8 = 0;
    do {
      lVar4 = (ulonglong)*(ushort *)(local_78 + 4) * 0x10 + param_2;
      if (local_85 == 0) {
        uVar11 = *(uint *)(lVar4 + 4 + uVar8 * 8);
        uVar10 = uVar11 & 0x1f;
        if (uVar10 == 0) goto LAB_14366e4f5;
        local_80 = CONCAT62(local_80._2_6_,uVar13);
        if (*(int *)(param_1 + 0x600) != *(int *)(param_1 + 0x62c)) {
          lVar12 = *(longlong *)(param_1 + 0x638);
          if (*(longlong *)(param_1 + 0x638) == 0) {
            lVar12 = local_70;
          }
          bVar16 = false;
          uVar14 = 0;
          while( true ) {
            iVar15 = uVar14 + (uVar11 >> 5);
            iVar3 = *(int *)(lVar12 + (ulonglong)
                                      (iVar15 * 0x58399e77 + local_84 &
                                      *(int *)(param_1 + 0x640) - 1U) * 4);
            if (iVar3 == -1) break;
            while( true ) {
              piVar7 = (int *)(*(longlong *)(param_1 + 0x5f8) + (longlong)iVar3 * 0x14);
              if ((*piVar7 == iVar1) &&
                 (*(int *)(*(longlong *)(param_1 + 0x5f8) + 4 + (longlong)iVar3 * 0x14) == iVar15))
              break;
              iVar3 = piVar7[3];
              if (iVar3 == -1) goto LAB_14366e4e2;
            }
            if ((piVar7 == (int *)0x0) || (piVar7 + 2 == (int *)0x0)) break;
            lVar9 = (longlong)piVar7[2];
            if ((*(int *)(*(longlong *)(param_1 + 0x5d8) + lVar9 * 0xc) != iVar1) ||
               (*(int *)(*(longlong *)(param_1 + 0x5d8) + lVar9 * 0xc + 4) != iVar15)) break;
            uVar14 = uVar14 + 1;
            bVar16 = uVar10 <= uVar14;
            if (uVar14 == uVar10) break;
          }
LAB_14366e4e2:
          if (bVar16) goto LAB_14366e4f5;
        }
      }
      else {
LAB_14366e4f5:
        uVar11 = *(uint *)(lVar4 + uVar8 * 8);
        uVar10 = uVar11 >> 8;
        if (uVar10 < *(uint *)(local_58 + 0x88)) {
          iVar3 = uVar10 + *(int *)(local_58 + 0xb4);
          uVar10 = *(int *)(param_1 + 0x3ac) + iVar3;
          puVar5 = (ushort *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0x18 + 0x10);
LAB_14366e533:
          if (uVar10 != 0xffffffff) {
            uVar13 = *puVar5;
            uVar14 = *(uint *)(param_1 + 0x3ac);
            iVar3 = *(int *)(param_1 + 0x398);
            *(uint *)(param_1 + 0x398) = iVar3 + 1U;
            if (*(uint *)(param_1 + 0x39c) < iVar3 + 1U) {
              local_80 = param_2;
              FUN_1447808da(local_60,iVar3);
              param_2 = local_80;
            }
            iVar15 = uVar10 - uVar14;
            if (uVar10 < uVar14) {
              uVar14 = uVar10;
            }
            if (iVar15 < 1) {
              iVar15 = 0;
            }
            *(uint *)(*local_60 + (longlong)iVar3 * 4) =
                 (uVar11 & 0xff) * 0x10 + local_68 + uVar14 * 0x20000 + iVar15 * 0x8000 +
                 (uint)uVar13 * 0x40;
            uVar13 = *(ushort *)(local_78 + 6);
          }
        }
        else if (*(int *)(param_1 + 0x600) != *(int *)(param_1 + 0x62c)) {
          lVar4 = *(longlong *)(param_1 + 0x638);
          if (*(longlong *)(param_1 + 0x638) == 0) {
            lVar4 = local_70;
          }
          iVar3 = *(int *)(lVar4 + (ulonglong)
                                   (*(int *)(param_1 + 0x640) - 1U & uVar10 * 0x58399e77 + local_84)
                                   * 4);
          if (iVar3 != -1) {
            do {
              piVar7 = (int *)(*(longlong *)(param_1 + 0x5f8) + (longlong)iVar3 * 0x14);
              if ((*piVar7 == iVar1) &&
                 (*(uint *)(*(longlong *)(param_1 + 0x5f8) + 4 + (longlong)iVar3 * 0x14) == uVar10))
              {
                if ((uint *)(piVar7 + 2) != (uint *)0x0 && piVar7 != (int *)0x0) {
                  uVar10 = piVar7[2];
                  puVar5 = (ushort *)
                           (*(longlong *)
                             (*(longlong *)(param_1 + 0x5e8) + (longlong)(int)uVar10 * 8) + 2);
                  goto LAB_14366e533;
                }
                break;
              }
              iVar3 = piVar7[3];
            } while (iVar3 != -1);
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar13);
  }
  uVar13 = *(ushort *)(local_78 + 4);
  if (uVar13 != 0) {
    lVar4 = local_78 + 8;
    local_84 = iVar1 * -0x39feb07;
    local_80 = param_1 + 0x630;
    uVar8 = 0;
    local_70 = lVar4;
    do {
      puVar2 = (uint *)(uVar8 * 0x10 + lVar4);
      if (local_85 == 0) {
        uVar11 = puVar2[3] & 0x1f;
        if (uVar11 == 0) {
LAB_14366e79b:
          uVar11 = *puVar2;
          if (uVar11 < *(uint *)(local_58 + 0x88)) {
            iVar3 = uVar11 + *(int *)(param_1 + 0x3ac) + *(int *)(local_58 + 0xb4);
          }
          else {
            iVar3 = _DAT_00000000;
            if (*(int *)(param_1 + 0x600) != *(int *)(param_1 + 0x62c)) {
              lVar12 = *(longlong *)(param_1 + 0x638);
              if (*(longlong *)(param_1 + 0x638) == 0) {
                lVar12 = local_80;
              }
              iVar3 = *(int *)(lVar12 + (ulonglong)
                                        (*(int *)(param_1 + 0x640) - 1U &
                                        uVar11 * 0x58399e77 + local_84) * 4);
              if (iVar3 != -1) {
                do {
                  piVar7 = (int *)(*(longlong *)(param_1 + 0x5f8) + (longlong)iVar3 * 0x14);
                  if ((*piVar7 == iVar1) &&
                     (*(uint *)(*(longlong *)(param_1 + 0x5f8) + 4 + (longlong)iVar3 * 0x14) ==
                      uVar11)) goto LAB_14366e829;
                  iVar3 = piVar7[3];
                } while (iVar3 != -1);
              }
              piVar7 = (int *)0x0;
LAB_14366e829:
              piVar6 = piVar7 + 2;
              if (piVar7 == (int *)0x0) {
                piVar6 = (int *)0x0;
              }
              iVar3 = *piVar6;
            }
          }
          uVar11 = puVar2[1];
          local_4c = iVar3 << 8 | puVar2[2];
          goto LAB_14366e83f;
        }
        lVar4 = local_70;
        if (*(int *)(param_1 + 0x600) != *(int *)(param_1 + 0x62c)) {
          lVar12 = *(longlong *)(param_1 + 0x638);
          if (*(longlong *)(param_1 + 0x638) == 0) {
            lVar12 = local_80;
          }
          bVar16 = false;
          uVar10 = 0;
          while( true ) {
            iVar15 = (puVar2[3] >> 5) + uVar10;
            iVar3 = *(int *)(lVar12 + (ulonglong)
                                      (iVar15 * 0x58399e77 + local_84 &
                                      *(int *)(param_1 + 0x640) - 1U) * 4);
            if (iVar3 == -1) break;
            while( true ) {
              piVar7 = (int *)(*(longlong *)(param_1 + 0x5f8) + (longlong)iVar3 * 0x14);
              if ((*piVar7 == iVar1) &&
                 (*(int *)(*(longlong *)(param_1 + 0x5f8) + 4 + (longlong)iVar3 * 0x14) == iVar15))
              break;
              iVar3 = piVar7[3];
              if (iVar3 == -1) goto LAB_14366e78c;
            }
            if ((piVar7 == (int *)0x0) || (piVar7 + 2 == (int *)0x0)) break;
            lVar9 = (longlong)piVar7[2];
            if ((*(int *)(*(longlong *)(param_1 + 0x5d8) + lVar9 * 0xc) != iVar1) ||
               (*(int *)(*(longlong *)(param_1 + 0x5d8) + lVar9 * 0xc + 4) != iVar15)) break;
            uVar10 = uVar10 + 1;
            bVar16 = uVar11 <= uVar10;
            if (uVar10 == uVar11) break;
          }
LAB_14366e78c:
          if (bVar16) goto LAB_14366e79b;
        }
      }
      else {
        uVar11 = puVar2[1];
        local_4c = 0xffffffff;
LAB_14366e83f:
        *(uint *)(*(longlong *)(param_1 + 0x230) + (ulonglong)*(uint *)(param_1 + 0x240) * 4) =
             ((uVar11 >> 6) + local_64) * 0xd0 + (uVar11 & 0x3f) * 0x10 + 0x80 >> 2 | 3;
        iVar3 = *(int *)(param_1 + 0x240);
        *(int *)(param_1 + 0x240) = iVar3 + 1;
        memcpy((void *)((ulonglong)(*(uint *)(param_1 + 0x248) * iVar3) +
                       *(longlong *)(param_1 + 0x238)),&local_4c,
               (ulonglong)*(uint *)(param_1 + 0x248));
        uVar13 = *(ushort *)(local_78 + 4);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14366e8ee FUN_14366e8ee body=1289 status=ok
// SIG undefined FUN_14366e8ee(void)

void FUN_14366e8ee(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  ulonglong local_a0;
  undefined1 local_98;
  longlong local_90;
  ulonglong *local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined1 local_69;
  undefined8 *local_68;
  longlong lStack_60;
  undefined *local_58;
  ulonglong local_48;
  undefined6 uVar12;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar4 = *(char *)(param_3 + 0x68);
  puVar1 = (ulonglong *)(param_2 + 0x70);
  puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x48);
    puVar11 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar11 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar9;
  puVar11[1] = *(undefined8 *)(param_3 + 8);
  puVar11[2] = 0;
  *(undefined1 *)(puVar11 + 3) = 2;
  *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar11 + 5) = 0;
  *puVar11 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar11 + 6) = cVar4 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar11 + 0x31) = 0;
  puVar11[7] = param_3;
  iVar5 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar5);
  }
  puVar9 = (undefined8 *)(param_1 + 0x390);
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar5 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  iVar5 = *(int *)(param_1 + 0x398);
  if (iVar5 != 0) {
    uVar3 = (ulonglong)(iVar5 - 1) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_a0 = (ulonglong)(uint)(iVar5 * 4);
    local_a8 = *puVar9;
    local_98 = 0;
    local_90 = param_2 + 0x198;
    local_80 = puVar9;
    local_78 = param_1;
    lVar8 = FUN_144942e63(param_2,L"Nanite.PackedClusterUpdatesBuffer",4,1 << ((byte)lVar8 & 0x1f));
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar14 + 6;
    if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
      FUN_140023dd8(puVar1,0x40);
      puVar14 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar9 = puVar14 + 6;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar9;
    *puVar14 = &PTR_FUN_14aa67e90;
    puVar14[3] = 0;
    puVar14[4] = 0;
    iVar6 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar6 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar6 + 1U) {
      FUN_1448cfae8(param_2 + 0x98,iVar6);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar6 * 8) = puVar14;
    *(int *)(puVar14 + 2) = iVar5;
    cVar4 = *(char *)(lVar8 + 0x68);
    puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar13 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
      FUN_140023dd8(puVar1,0x50);
      puVar13 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar13 + 9;
    }
    puVar2 = puVar14 + 2;
    *(undefined8 **)(param_2 + 0x70) = puVar9;
    puVar13[1] = *(undefined8 *)(lVar8 + 8);
    puVar13[2] = 0;
    *(undefined1 *)(puVar13 + 3) = 3;
    *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
    *puVar13 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar13 + 5) = cVar4 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar13 + 0x2c) = 0xffffffff00000000;
    puVar13[7] = 0;
    puVar13[8] = lVar8;
    iVar6 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar6 + 1U;
    local_88 = puVar1;
    if (*(uint *)(param_2 + 0x1a4) < iVar6 + 1U) {
      FUN_1447568fc(local_90,iVar6);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar6 * 8) = puVar13;
    *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar14[3] = puVar13;
    puVar14[4] = puVar11;
    uVar7 = *(undefined8 *)
             (&DAT_14ca8c1f0 +
             (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
    FUN_141573162();
    FUN_141573162();
    FUN_1448e935e(uVar7,&local_68,&DAT_14caffa18,0);
    FUN_141573162();
    lVar8 = lStack_60;
    puVar9 = local_68;
    iVar6 = iVar5 + 0x7e;
    if (-1 < iVar5 + 0x3f) {
      iVar6 = iVar5 + 0x3f;
    }
    FUN_141573284();
    local_68 = (undefined8 *)0x0;
    lStack_60 = 0;
    FUN_1448f70da(puVar9,&DAT_14cafffc0,puVar2,&local_68);
    FUN_140069376(param_2);
    puVar1 = local_88;
    uVar12 = (undefined6)((ulonglong)puVar11 >> 0x10);
    uVar10 = (undefined4)CONCAT62(uVar12,2);
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
       ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
      uVar10 = (undefined4)CONCAT62(uVar12,4);
    }
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar14 + 0x3d;
    if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
      local_90 = lVar8;
      FUN_140023dd8(local_88,0x1f0);
      puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar14 + 0x3d;
      lVar8 = local_90;
    }
    *local_88 = (ulonglong)puVar11;
    lStack_60 = DAT_14cb00008;
    if (DAT_14cb00008 != 0) {
      LOCK();
      *(int *)(DAT_14cb00008 + 8) = *(int *)(DAT_14cb00008 + 8) + 1;
      UNLOCK();
    }
    local_58 = &DAT_14cafffc0;
    local_a8 = CONCAT71(local_a8._1_7_,2);
    local_68 = puVar2;
    FUN_140068f1a(puVar14,&local_69,&local_68,uVar10);
    *puVar14 = &PTR_FUN_14aa67ea0;
    puVar14[0x37] = &DAT_14cafffc0;
    puVar14[0x38] = puVar2;
    puVar14[0x39] = puVar9;
    puVar14[0x3a] = lVar8;
    *(int *)(puVar14 + 0x3b) = iVar6 >> 6;
    *(undefined1 **)((longlong)puVar14 + 0x1dc) = &DAT_100000001;
    iVar5 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar5 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar5 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar5 * 8) = puVar14;
    *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_140069100(param_2,puVar14);
    puVar9 = local_80;
    param_1 = local_78;
  }
  *(undefined4 *)(param_1 + 0x398) = 0;
  if (*(int *)(param_1 + 0x39c) != 0) {
    FUN_14480809c(puVar9,0);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14366edf8 FUN_14366edf8 body=603 status=ok
// SIG undefined FUN_14366edf8(void)

void FUN_14366edf8(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_c8 [32];
  uint *local_a8;
  uint local_94;
  undefined8 local_90;
  uint local_84;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined1 local_65;
  uint local_64;
  undefined8 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar8 = (uint)param_4;
  local_94 = param_3;
  local_90 = param_4;
  if (param_3 != uVar8) {
    uVar9 = uVar8 - param_3;
    if (uVar8 < param_3) {
      uVar9 = -(uVar8 - param_3);
    }
    uVar8 = uVar9;
    if (param_5 < uVar9) {
      uVar8 = param_5;
    }
    if (0xffffff < uVar8) {
      uVar8 = 0x1000000;
    }
    if (param_5 != 0) {
      local_78 = (longlong *)(param_1 + 0x70);
      local_80 = (longlong *)(param_1 + 0x98);
      uVar10 = 0;
      local_70 = param_2;
      uVar7 = param_5;
      do {
        plVar2 = local_78;
        uVar3 = param_5;
        if (uVar9 < param_5) {
          uVar3 = uVar9;
        }
        if (uVar7 <= uVar3) {
          uVar3 = uVar7;
        }
        if (0xffffff < uVar3) {
          uVar3 = 0x1000000;
        }
        local_84 = uVar7 - uVar8;
        uVar6 = uVar7;
        if (uVar8 <= uVar7) {
          uVar6 = uVar8;
        }
        uVar7 = uVar7 - uVar3;
        if (local_94 <= (uint)local_90) {
          uVar7 = uVar10;
        }
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar4 = puVar5 + 6;
        if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
          FUN_140023dd8(local_78,0x40);
          puVar5 = (undefined8 *)(*plVar2 + 0xfU & 0xfffffffffffffff0);
          puVar4 = puVar5 + 6;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar4;
        *puVar5 = &PTR_FUN_14aa67eb8;
        puVar5[4] = 0;
        iVar1 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar1 + 1U) {
          FUN_1448cfae8(local_80,iVar1);
        }
        *(undefined8 **)(*local_80 + (longlong)iVar1 * 8) = puVar5;
        *(uint *)(puVar5 + 2) = (int)local_90 + uVar7;
        *(uint *)((longlong)puVar5 + 0x14) = uVar7 + local_94;
        *(uint *)(puVar5 + 3) = uVar6 >> 4;
        puVar5[4] = local_70;
        FUN_147ccf814(*(undefined8 *)
                       (&DAT_14ca8c1f0 +
                       (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8),
                      local_58);
        local_64 = (uVar6 >> 4) + 0x3f >> 6;
        local_60 = &DAT_100000001;
        uVar7 = 1;
        if (DAT_14ca84f24 < (int)local_64) {
          uVar7 = local_64 + 0x7f >> 7;
          local_60 = (undefined1 *)CONCAT44(1,uVar7);
          local_64 = 0x80;
        }
        if (DAT_14ca84f28 < (int)uVar7) {
          local_60 = (undefined1 *)CONCAT44(uVar7 + 0x7f >> 7,0x80);
        }
        local_a8 = &local_64;
        FUN_147ccf881(param_1,&local_65,local_58,puVar5 + 2);
        uVar10 = uVar10 + uVar8;
        uVar7 = local_84;
      } while (uVar10 < param_5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14366f054 FUN_14366f054 body=3892 status=ok
// SIG undefined FUN_14366f054(void)

void FUN_14366f054(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  uint *puVar7;
  void *_Dst;
  int *piVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  char cVar14;
  ulonglong uVar15;
  byte bVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  longlong *plVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  char cVar24;
  uint uVar25;
  undefined8 *puVar26;
  int iVar27;
  int iVar28;
  bool bVar29;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined4 local_130;
  longlong *local_128;
  int *local_120;
  ulonglong local_118;
  longlong local_110;
  undefined8 *local_108;
  longlong *local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined8 *local_d8;
  ulonglong *local_d0;
  int local_c8;
  int local_c4;
  longlong *local_c0;
  undefined8 *local_b8;
  undefined1 local_a9;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar21 = *(longlong *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_1[1] + 0x28);
  local_110 = param_2;
  if (*(char *)(lVar21 + 0x69) == '\0') {
    FUN_14002049c(lVar21,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar21,uVar4);
    FUN_14002049c(lVar21,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar21,uVar4);
  }
  lVar21 = local_110;
  if ((int)param_1[8] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_158);
  }
  local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,(int)param_1[8]);
  iVar6 = (int)param_1[6] * 0x10;
  uVar17 = (ulonglong)(iVar6 + -1 + (uint)(iVar6 == 0)) * 2 + 1;
  lVar9 = 0x3f;
  if (uVar17 != 0) {
    for (; uVar17 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  uVar22 = 1 << ((byte)lVar9 & 0x1f);
  lVar9 = *param_1;
  if ((lVar9 == 0) || ((uint)(*(int *)(lVar9 + 0x14) * *(int *)(lVar9 + 0x10)) < uVar22)) {
    local_88 = 0;
    puStack_90 = (undefined8 *)CONCAT44(puStack_90._4_4_,0x10100);
    local_98 = (undefined *)CONCAT44(uVar22 >> 4,0x10);
    FUN_1449ed2ff(&local_98,param_1,L"Nanite.ClusterInstallInfoUploadBuffer",1);
    lVar9 = *param_1;
  }
  lVar21 = *(longlong *)(lVar21 + 0x18);
  uVar4 = *(undefined8 *)(lVar9 + 0x28);
  cVar24 = *(char *)(lVar21 + 0x69);
  local_128 = param_1;
  local_e8 = (longlong *)param_3;
  if (cVar24 == '\0') {
    FUN_14002049c(lVar21,1);
  }
  local_138 = (undefined8 *)CONCAT44(local_138._4_4_,uVar22);
  local_130 = 1;
  puVar7 = (uint *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar21,uVar4,0);
  if (cVar24 == '\0') {
    FUN_14002049c(lVar21,0);
  }
  lVar21 = local_110;
  iVar6 = 0x1000;
  if (0x1000 < (int)local_128[0x14]) {
    iVar6 = (int)local_128[0x14];
  }
  uVar17 = (ulonglong)(iVar6 * 4 + -1 + (uint)(iVar6 * 4 == 0)) * 2 + 1;
  lVar9 = 0x3f;
  if (uVar17 != 0) {
    for (; uVar17 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  uVar22 = 1 << ((byte)lVar9 & 0x1f);
  plVar2 = local_128 + 2;
  lVar9 = local_128[2];
  if ((lVar9 == 0) || ((uint)(*(int *)(lVar9 + 0x14) * *(int *)(lVar9 + 0x10)) < uVar22)) {
    local_88 = 0;
    puStack_90 = (undefined8 *)CONCAT44(puStack_90._4_4_,0x10100);
    local_98 = (undefined *)CONCAT44(uVar22 >> 2,4);
    FUN_1449ed2ff(&local_98,plVar2,L"Nanite.PageDependenciesBuffer",1);
    lVar9 = *plVar2;
  }
  lVar21 = *(longlong *)(lVar21 + 0x18);
  uVar4 = *(undefined8 *)(lVar9 + 0x28);
  cVar24 = *(char *)(lVar21 + 0x69);
  local_c0 = plVar2;
  if (cVar24 == '\0') {
    FUN_14002049c(lVar21,1);
  }
  local_138 = (undefined8 *)CONCAT44(local_138._4_4_,uVar22);
  local_130 = 1;
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar21,uVar4,0);
  if (cVar24 == '\0') {
    FUN_14002049c(lVar21,0);
  }
  memcpy(_Dst,(void *)local_128[0x13],(longlong)(int)local_128[0x14] << 2);
  lVar21 = *(longlong *)(local_110 + 0x18);
  if (*(char *)(lVar21 + 0x69) == '\0') {
    FUN_14002049c(lVar21,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar21);
    FUN_14002049c(lVar21,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar21);
  }
  local_e0 = local_128 + 1;
  local_d0 = (ulonglong *)(local_128 + 0x15);
  plVar2 = local_128 + 0x10;
  iVar6 = 0;
  do {
    uVar22 = *(uint *)(local_128 + 0x16);
    if ((longlong)(int)local_128[8] == 0) {
      uVar15 = 0;
      uVar23 = 0;
      uVar17 = (ulonglong)uVar22;
    }
    else {
      piVar8 = (int *)local_128[7];
      local_120 = piVar8 + (longlong)(int)local_128[8] * 9;
      uVar23 = 0;
      uVar15 = 0;
      do {
        if (uVar22 <= (uint)piVar8[8]) {
          local_108 = (undefined8 *)CONCAT44(local_108._4_4_,uVar23);
          local_118 = CONCAT44(local_118._4_4_,iVar6);
          local_f8 = uVar15;
          if (piVar8[5] != 0) {
            iVar27 = 0;
            do {
              if ((int)local_128[10] != *(int *)((longlong)local_128 + 0x7c)) {
                iVar19 = *(int *)(local_128[0x13] + (longlong)(iVar27 + piVar8[4]) * 4);
                plVar20 = (longlong *)local_128[0x11];
                if ((longlong *)local_128[0x11] == (longlong *)0x0) {
                  plVar20 = plVar2;
                }
                iVar28 = *(int *)((longlong)plVar20 +
                                 (ulonglong)
                                 ((int)local_128[0x12] - 1U &
                                 iVar19 * 0x58399e77 + *piVar8 * -0x39feb07) * 4);
                if (iVar28 != -1) {
                  do {
                    piVar1 = (int *)(local_128[9] + (longlong)iVar28 * 0x14);
                    if ((*piVar1 == *piVar8) &&
                       (*(int *)(local_128[9] + 4 + (longlong)iVar28 * 0x14) == iVar19)) {
                      if ((piVar1 + 2 != (int *)0x0 && piVar1 != (int *)0x0) &&
                         (uVar22 <= *(uint *)(local_128[7] + 0x20 + (longlong)piVar1[2] * 0x24)))
                      goto LAB_14366f503;
                      break;
                    }
                    iVar28 = piVar1[3];
                  } while (iVar28 != -1);
                }
              }
              iVar27 = iVar27 + 1;
            } while (iVar27 != piVar8[5]);
          }
          piVar8[8] = uVar22;
          if (piVar8[7] == 0) {
            uVar11 = 0;
          }
          else {
            uVar25 = 0;
            do {
              *puVar7 = uVar25 | iVar6 << 8;
              puVar7[1] = piVar8[2];
              puVar7[2] = piVar8[3];
              puVar7[3] = piVar8[4];
              puVar7 = puVar7 + 4;
              uVar25 = uVar25 + 1;
              uVar11 = piVar8[7];
            } while (uVar25 < uVar11);
          }
          iVar6 = iVar6 + 1;
          uVar23 = uVar23 + 1;
          uVar15 = (ulonglong)((int)uVar15 + uVar11);
        }
LAB_14366f503:
        piVar8 = piVar8 + 9;
      } while (piVar8 != local_120);
      uVar17 = (ulonglong)*(uint *)(local_128 + 0x16);
      local_f0 = (ulonglong)uVar22;
    }
    uVar22 = (int)uVar17 + 1;
    *(uint *)(local_128 + 0x16) = uVar22;
    if (*(uint *)((longlong)local_128 + 0xb4) < uVar22) {
      FUN_1417eb500(local_d0,uVar17);
    }
    plVar20 = local_128;
    uVar15 = (ulonglong)uVar23 | uVar15 << 0x20;
    *(ulonglong *)(*local_d0 + (longlong)(int)uVar17 * 8) = uVar15;
    iVar27 = (int)local_d8 - uVar23;
    local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,iVar27);
    if (iVar27 == 0) {
      lVar21 = *(longlong *)(local_110 + 0x18);
      uVar4 = *(undefined8 *)(*local_128 + 0x28);
      if (*(char *)(lVar21 + 0x69) == '\0') {
        FUN_14002049c(lVar21,CONCAT71((int7)(uVar15 >> 8),1));
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar21,uVar4);
        FUN_14002049c(lVar21,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar21,uVar4);
      }
      plVar5 = local_e8;
      lVar21 = local_110;
      lVar9 = FUN_144735dd8(local_110,local_e0,0);
      cVar24 = *(char *)(lVar9 + 0x68);
      plVar2 = (longlong *)(lVar21 + 0x70);
      puVar12 = (undefined8 *)(*(longlong *)(lVar21 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar12 + 9;
      local_100 = plVar2;
      if (*(undefined8 **)(lVar21 + 0x78) < puVar10) {
        FUN_140023dd8(plVar2,0x50);
        puVar12 = (undefined8 *)(*plVar2 + 7U & 0xfffffffffffffff8);
        puVar10 = puVar12 + 9;
      }
      lVar3 = lVar21 + 0x198;
      *(undefined8 **)(lVar21 + 0x70) = puVar10;
      puVar12[1] = *(undefined8 *)(lVar9 + 8);
      puVar12[2] = 0;
      *(undefined1 *)(puVar12 + 3) = 3;
      *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
      *puVar12 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar12 + 5) = cVar24 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar12 + 0x2c) = 0xffffffff00000000;
      puVar12[7] = 0;
      puVar12[8] = lVar9;
      iVar6 = *(int *)(lVar21 + 0x1a0);
      *(uint *)(lVar21 + 0x1a0) = iVar6 + 1U;
      local_108 = puVar12;
      if (*(uint *)(lVar21 + 0x1a4) < iVar6 + 1U) {
        FUN_1447568fc(lVar3,iVar6);
      }
      *(undefined8 **)(*(longlong *)(lVar21 + 0x198) + (longlong)iVar6 * 8) = local_108;
      *(int *)((longlong)local_108 + 0x1c) = *(int *)(lVar21 + 0x1a0) + -1;
      lVar9 = FUN_144735dd8(lVar21,plVar20,0);
      plVar2 = local_100;
      cVar24 = *(char *)(lVar9 + 0x68);
      puVar12 = (undefined8 *)(*(longlong *)(lVar21 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar12 + 9;
      if (*(undefined8 **)(lVar21 + 0x78) < puVar10) {
        FUN_140023dd8(local_100,0x50);
        puVar12 = (undefined8 *)(*plVar2 + 7U & 0xfffffffffffffff8);
        puVar10 = puVar12 + 9;
      }
      *(undefined8 **)(lVar21 + 0x70) = puVar10;
      puVar12[1] = *(undefined8 *)(lVar9 + 8);
      puVar12[2] = 0;
      *(undefined1 *)(puVar12 + 3) = 3;
      *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
      *puVar12 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar12 + 5) = cVar24 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar12 + 0x2c) = 0xffffffff00000000;
      puVar12[7] = 0;
      puVar12[8] = lVar9;
      iVar6 = *(int *)(lVar21 + 0x1a0);
      *(uint *)(lVar21 + 0x1a0) = iVar6 + 1U;
      if (*(uint *)(lVar21 + 0x1a4) < iVar6 + 1U) {
        FUN_1447568fc(lVar3,iVar6);
      }
      *(undefined8 **)(*(longlong *)(lVar21 + 0x198) + (longlong)iVar6 * 8) = puVar12;
      *(int *)((longlong)puVar12 + 0x1c) = *(int *)(lVar21 + 0x1a0) + -1;
      lVar9 = FUN_144735dd8(lVar21,local_c0,0);
      plVar2 = local_100;
      cVar24 = *(char *)(lVar9 + 0x68);
      puVar13 = (undefined8 *)(*(longlong *)(lVar21 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar13 + 9;
      local_120 = (int *)puVar12;
      if (*(undefined8 **)(lVar21 + 0x78) < puVar10) {
        FUN_140023dd8(local_100,0x50);
        puVar13 = (undefined8 *)(*plVar2 + 7U & 0xfffffffffffffff8);
        puVar10 = puVar13 + 9;
      }
      piVar8 = local_120;
      *(undefined8 **)(lVar21 + 0x70) = puVar10;
      puVar13[1] = *(undefined8 *)(lVar9 + 8);
      puVar13[2] = 0;
      *(undefined1 *)(puVar13 + 3) = 3;
      *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
      *puVar13 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar13 + 5) = cVar24 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar13 + 0x2c) = 0xffffffff00000000;
      puVar13[7] = 0;
      puVar13[8] = lVar9;
      iVar6 = *(int *)(lVar21 + 0x1a0);
      *(uint *)(lVar21 + 0x1a0) = iVar6 + 1U;
      if (*(uint *)(lVar21 + 0x1a4) < iVar6 + 1U) {
        FUN_1447568fc(lVar3,iVar6);
      }
      plVar2 = local_100;
      *(undefined8 **)(*(longlong *)(lVar21 + 0x198) + (longlong)iVar6 * 8) = puVar13;
      *(int *)((longlong)puVar13 + 0x1c) = *(int *)(lVar21 + 0x1a0) + -1;
      cVar24 = *(char *)((longlong)plVar5 + 0x68);
      puVar12 = (undefined8 *)(*(longlong *)(lVar21 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar12 + 8;
      if (*(undefined8 **)(lVar21 + 0x78) < puVar10) {
        FUN_140023dd8(local_100,0x48);
        puVar12 = (undefined8 *)(*plVar2 + 7U & 0xfffffffffffffff8);
        puVar10 = puVar12 + 8;
        piVar8 = local_120;
      }
      *(undefined8 **)(lVar21 + 0x70) = puVar10;
      puVar12[1] = *(undefined8 *)((longlong)plVar5 + 8);
      puVar12[2] = 0;
      *(undefined1 *)(puVar12 + 3) = 2;
      *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar12 + 5) = 0;
      *puVar12 = &PTR_FUN_14a1fb3e8;
      *(byte *)(puVar12 + 6) = cVar24 >> 7 & 0x1c;
      *(undefined2 *)((longlong)puVar12 + 0x31) = 0;
      puVar12[7] = plVar5;
      iVar6 = *(int *)(lVar21 + 0x1a0);
      *(uint *)(lVar21 + 0x1a0) = iVar6 + 1U;
      if (*(uint *)(lVar21 + 0x1a4) < iVar6 + 1U) {
        FUN_1447568fc(lVar3,iVar6);
      }
      plVar2 = local_100;
      *(undefined8 **)(*(longlong *)(lVar21 + 0x198) + (longlong)iVar6 * 8) = puVar12;
      *(int *)((longlong)puVar12 + 0x1c) = *(int *)(lVar21 + 0x1a0) + -1;
      bVar16 = DAT_14c7619b4 != 0 & DAT_14ca84e23;
      bVar29 = DAT_14c760da4 == 1;
      uVar22 = *(uint *)(DAT_14caff718 + 4);
      if (((int)DAT_14ca84f18 < (int)uVar22 || ((int)uVar22 < DAT_14ca84f14 || uVar22 == 0)) ||
          (uVar22 & uVar22 - 1) != 0) {
        uVar22 = 0x10;
        if ((int)DAT_14ca84f18 < 0x10) {
          uVar22 = DAT_14ca84f18;
        }
        if (0x10 < DAT_14ca84f14) {
          uVar22 = DAT_14ca84f18;
        }
        if (DAT_14ca84df4 != 0x8086) {
          uVar22 = DAT_14ca84f18;
        }
      }
      local_118 = (ulonglong)uVar22;
      puVar26 = (undefined8 *)(*(longlong *)(lVar21 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar10 = puVar26 + 10;
      if (*(undefined8 **)(lVar21 + 0x78) < puVar10) {
        FUN_140023dd8(local_100,0x60);
        puVar26 = (undefined8 *)(*plVar2 + 0xfU & 0xfffffffffffffff0);
        puVar10 = puVar26 + 10;
        piVar8 = local_120;
      }
      *(undefined8 **)(lVar21 + 0x70) = puVar10;
      *puVar26 = &PTR_FUN_14aa67f90;
      plVar2 = (longlong *)(lVar21 + 0x98);
      puVar26[6] = 0;
      puVar26[7] = 0;
      puVar26[8] = 0;
      puVar26[9] = 0;
      iVar6 = *(int *)(lVar21 + 0xa0);
      *(uint *)(lVar21 + 0xa0) = iVar6 + 1U;
      if (*(uint *)(lVar21 + 0xa4) < iVar6 + 1U) {
        FUN_1448cfae8(plVar2,iVar6);
      }
      *(undefined8 **)(*plVar2 + (longlong)iVar6 * 8) = puVar26;
      puVar26[6] = piVar8;
      puVar26[7] = puVar13;
      puVar26[8] = local_108;
      puVar26[9] = puVar12;
      *(undefined4 *)(puVar26 + 2) = 0;
      *(int *)((longlong)puVar26 + 0x14) = (int)local_128[6];
      *(undefined4 *)(puVar26 + 3) = 0;
      lVar21 = local_128[5];
      *(undefined4 *)(puVar26 + 4) = 0;
      *(int *)((longlong)puVar26 + 0x24) = (int)lVar21;
      puVar26[5] = 0;
      iVar6 = (int)local_118;
      if (iVar6 == 4) {
        cVar24 = '\v';
      }
      else if (iVar6 == 8) {
        cVar24 = '\t';
      }
      else {
        cVar14 = '\x05';
        if (iVar6 != 0x20) {
          cVar14 = (iVar6 == 0x40) * '\x02' + '\x01';
        }
        cVar24 = '\a';
        if (iVar6 != 0x10) {
          cVar24 = cVar14;
        }
      }
      local_f8 = CONCAT44(local_f8._4_4_,(uint)(bVar16 & bVar29) * 2 + 2);
      local_e8 = plVar2;
      FUN_1402aa97c(*(undefined8 *)
                     (&DAT_14ca8c1f0 +
                     (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8),
                    &local_a8,cVar24);
      local_78 = (int)local_128[6];
      local_70 = 1;
      if (DAT_14ca84f24 < local_78) {
        iVar6 = local_78 + 0xfe;
        if (-1 < local_78 + 0x7f) {
          iVar6 = local_78 + 0x7f;
        }
        iVar6 = iVar6 >> 7;
        local_78 = 0x80;
      }
      else {
        iVar6 = 1;
      }
      puVar26 = puVar26 + 2;
      if (DAT_14ca84f28 < iVar6) {
        local_70 = iVar6 + 0xfe;
        if (-1 < iVar6 + 0x7f) {
          local_70 = iVar6 + 0x7f;
        }
        local_70 = local_70 >> 7;
        iVar6 = 0x80;
      }
      local_d8 = puVar12;
      FUN_1402aab0e();
      local_98 = (undefined *)0x0;
      puStack_90 = (undefined8 *)0x0;
      FUN_1448f70da(CONCAT44(uStack_a4,local_a8),&DAT_14caffeb0,puVar26,&local_98);
      lVar21 = local_110;
      local_98 = &DAT_14caffeb0;
      uStack_80 = uStack_a0;
      uStack_7c = uStack_9c;
      local_138 = &local_98;
      puStack_90 = puVar26;
      local_74 = iVar6;
      FUN_1417eb666(local_110,&local_a9,puVar26,local_f8 & 0xffffffff);
      local_c4 = (int)local_128[0x16];
      if (local_c4 != 0) {
        iVar27 = (int)local_118;
        iVar6 = 4;
        if (iVar27 != 0x20) {
          iVar6 = (uint)(iVar27 == 0x40) * 2;
        }
        local_c8 = 6;
        if (iVar27 != 0x10) {
          local_c8 = iVar6;
        }
        iVar6 = 0;
        iVar27 = 0;
        local_b8 = puVar13;
        do {
          puVar12 = local_b8;
          plVar2 = local_100;
          uVar17 = *local_d0;
          puVar13 = (undefined8 *)(*(longlong *)(lVar21 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar10 = puVar13 + 10;
          if (*(undefined8 **)(lVar21 + 0x78) < puVar10) {
            FUN_140023dd8(local_100,0x60);
            puVar13 = (undefined8 *)(*plVar2 + 0xfU & 0xfffffffffffffff0);
            puVar10 = puVar13 + 10;
          }
          plVar2 = local_e8;
          *(undefined8 **)(lVar21 + 0x70) = puVar10;
          *puVar13 = &PTR_FUN_14aa67f90;
          puVar13[6] = 0;
          puVar13[7] = 0;
          puVar13[8] = 0;
          puVar13[9] = 0;
          iVar19 = *(int *)(lVar21 + 0xa0);
          *(uint *)(lVar21 + 0xa0) = iVar19 + 1U;
          if (*(uint *)(lVar21 + 0xa4) < iVar19 + 1U) {
            FUN_1448cfae8(local_e8,iVar19);
          }
          *(undefined8 **)(*plVar2 + (longlong)iVar19 * 8) = puVar13;
          lVar9 = (longlong)iVar6;
          puVar13[6] = local_120;
          puVar13[7] = puVar12;
          puVar13[8] = local_108;
          puVar13[9] = local_d8;
          *(int *)(puVar13 + 2) = iVar27;
          *(undefined4 *)((longlong)puVar13 + 0x14) = *(undefined4 *)(uVar17 + 4 + lVar9 * 8);
          *(undefined4 *)(puVar13 + 3) = 0;
          lVar21 = local_128[5];
          *(undefined4 *)(puVar13 + 4) = 0;
          *(int *)((longlong)puVar13 + 0x24) = (int)lVar21;
          puVar13[5] = 0;
          if ((int)local_118 == 4) {
            iVar19 = 10;
          }
          else {
            iVar19 = local_c8;
            if ((int)local_118 == 8) {
              iVar19 = 8;
            }
          }
          FUN_1402aa97c(*(undefined8 *)
                         (&DAT_14ca8c1f0 +
                         (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8),
                        &local_a8,iVar19);
          iVar19 = *(int *)(uVar17 + 4 + lVar9 * 8);
          iVar28 = 1;
          if (DAT_14ca84f24 < iVar19) {
            iVar18 = iVar19 + 0xfe;
            if (-1 < iVar19 + 0x7f) {
              iVar18 = iVar19 + 0x7f;
            }
            iVar18 = iVar18 >> 7;
            iVar19 = 0x80;
          }
          else {
            iVar18 = 1;
          }
          if (DAT_14ca84f28 < iVar18) {
            iVar28 = iVar18 + 0xfe;
            if (-1 < iVar18 + 0x7f) {
              iVar28 = iVar18 + 0x7f;
            }
            iVar28 = iVar28 >> 7;
            iVar18 = 0x80;
          }
          puVar13 = puVar13 + 2;
          local_f0 = uVar17;
          FUN_1402aab0e();
          local_98 = (undefined *)0x0;
          puStack_90 = (undefined8 *)0x0;
          FUN_1448f70da(CONCAT44(uStack_a4,local_a8),&DAT_14caffeb0,puVar13,&local_98);
          lVar21 = local_110;
          local_98 = &DAT_14caffeb0;
          uStack_80 = uStack_a0;
          uStack_7c = uStack_9c;
          local_138 = &local_98;
          puStack_90 = puVar13;
          local_78 = iVar19;
          local_74 = iVar18;
          local_70 = iVar28;
          FUN_1417eb666(local_110,&local_a9,puVar13,local_f8 & 0xffffffff);
          iVar27 = iVar27 + *(int *)(local_f0 + 4 + lVar9 * 8);
          iVar6 = iVar6 + 1;
        } while (local_c4 != iVar6);
      }
      plVar2 = local_128;
      puVar10 = (undefined8 *)*local_128;
      if (puVar10 != (undefined8 *)0x0) {
        *local_128 = 0;
        LOCK();
        piVar8 = (int *)(puVar10 + 1);
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (*piVar8 == 0) {
          (**(code **)*puVar10)(puVar10,1);
        }
      }
      plVar20 = local_c0;
      puVar10 = (undefined8 *)*local_e0;
      if (puVar10 != (undefined8 *)0x0) {
        *local_e0 = 0;
        LOCK();
        piVar8 = (int *)(puVar10 + 1);
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (*piVar8 == 0) {
          (**(code **)*puVar10)(puVar10,1);
        }
      }
      puVar10 = (undefined8 *)*plVar20;
      if (puVar10 != (undefined8 *)0x0) {
        *plVar20 = 0;
        LOCK();
        piVar8 = (int *)(puVar10 + 1);
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (*piVar8 == 0) {
          (**(code **)*puVar10)(puVar10,1);
        }
      }
      FUN_1405c0cf2(plVar2);
      if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 14366ffac FUN_14366ffac body=259 status=ok
// SIG undefined FUN_14366ffac(void)

void FUN_14366ffac(longlong param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  
  if (param_2 == 0xffffffff) {
    return;
  }
  uVar5 = param_2 & 0x1ffff;
  if (*(uint *)(param_1 + 0x18) <= uVar5) {
    return;
  }
  if (*(uint *)(*(longlong *)(param_1 + 0x10) + 8 + (ulonglong)uVar5 * 0x18) != param_2) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x10) + (ulonglong)uVar5 * 0x18;
  if (lVar1 == 0) {
    return;
  }
  uVar4 = *(int *)(lVar1 + 0xc) + param_3;
  lVar1 = *(longlong *)(param_1 + 0x588);
  lVar6 = (longlong)(int)uVar4;
  uVar5 = *(uint *)(lVar1 + lVar6 * 8);
  if (*(int *)(lVar1 + 4 + lVar6 * 8) == -1) {
    if (uVar5 != 0) goto LAB_14367000c;
    iVar3 = *(int *)(param_1 + 0x650);
    *(uint *)(param_1 + 0x650) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x654) < iVar3 + 1U) {
      FUN_1463fcdd0((longlong *)(param_1 + 0x648),iVar3);
    }
    puVar2 = (uint *)(*(longlong *)(param_1 + 0x648) + (longlong)iVar3 * 0xc);
    puVar7 = puVar2 + 2;
    *puVar2 = param_2;
    puVar2[1] = param_3;
  }
  else {
    if (uVar5 != 0) goto LAB_14367000c;
    iVar3 = *(int *)(param_1 + 0x660);
    *(uint *)(param_1 + 0x660) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x664) < iVar3 + 1U) {
      FUN_1447808da((longlong *)(param_1 + 0x658),iVar3);
    }
    puVar7 = (uint *)((longlong)iVar3 * 4 + *(longlong *)(param_1 + 0x658));
  }
  *puVar7 = uVar4;
  uVar5 = *(uint *)(lVar1 + lVar6 * 8);
LAB_14367000c:
  if (param_4 < uVar5) {
    param_4 = uVar5;
  }
  *(uint *)(lVar1 + lVar6 * 8) = param_4;
  return;
}



// FUNCTION 1436700b0 FUN_1436700b0 body=8221 status=ok
// SIG undefined FUN_1436700b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436700b0(longlong param_1,longlong param_2)

{
  int *piVar1;
  wchar_t *pwVar2;
  byte bVar3;
  ushort uVar4;
  undefined1 auVar5 [12];
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  void *pvVar10;
  byte *pbVar11;
  longlong lVar12;
  uint *puVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  ushort uVar23;
  uint uVar24;
  longlong lVar25;
  uint *puVar26;
  int iVar27;
  uint uVar28;
  longlong lVar29;
  longlong *plVar30;
  undefined8 *puVar31;
  int iVar32;
  uint uVar33;
  longlong lVar34;
  int iVar35;
  uint uVar36;
  undefined8 *puVar37;
  ulonglong uVar38;
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  undefined1 auVar42 [16];
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar47 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar48 [16];
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  wchar_t *local_200;
  longlong *local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  wchar_t *local_1d0;
  uint local_1c4;
  ulonglong local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined8 local_188;
  longlong local_180;
  longlong *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_15c [4];
  undefined1 local_158 [16];
  undefined8 *local_148;
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1e8 = param_2;
  local_170 = CONCAT44(local_170._4_4_,(int)local_170);
  local_168 = (longlong *)CONCAT44(local_168._4_4_,(int)local_168);
  if ((((DAT_14c760e34 == 0) ||
       (lVar9 = (ulonglong)DAT_14ca85550 * 0x3c,
       local_170 = CONCAT44(local_170._4_4_,(int)local_170),
       local_168 = (longlong *)CONCAT44(local_168._4_4_,(int)local_168),
       (*(byte *)((longlong)&DAT_14ca814d8 + lVar9 + 3) & 0x10) == 0)) ||
      (local_170 = CONCAT44(local_170._4_4_,(int)local_170),
      local_168 = (longlong *)CONCAT44(local_168._4_4_,(int)local_168),
      ((&DAT_14ca814c8)[(ulonglong)DAT_14ca85550 * 0xf] & 0x20000000) == 0)) ||
     (local_170 = CONCAT44(local_170._4_4_,(int)local_170),
     local_168 = (longlong *)CONCAT44(local_168._4_4_,(int)local_168),
     (*(uint *)(&DAT_14ca814cc + lVar9) & 8) == 0)) goto LAB_143671606;
  *(undefined1 (*) [16])(param_1 + 0x6d8) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x6e8) = 0;
  *(undefined1 *)(param_1 + 0x6e8) = 1;
  local_1f0 = param_1;
  FUN_144883418(param_1 + 0x4b0);
  FUN_1400802d6(local_1f0 + 0x588,
                *(undefined4 *)(local_1f0 + 0x4b4 + (ulonglong)*(byte *)(local_1f0 + 0x580) * 4));
  uVar19 = *(uint *)(local_1f0 + 0x3ac);
  FUN_144883418(local_1f0 + 0x38);
  uVar33 = *(uint *)(local_1f0 + 0x3c + (ulonglong)*(byte *)(local_1f0 + 0x108) * 4);
  uVar24 = *(uint *)(*(longlong *)(local_1f0 + 0x148) + 0x18);
  if (DAT_14c7619c4 != 0) {
    FUN_14366d27c(local_1f0);
  }
  if ((uVar24 >> 0x16 & 1) == 0) {
    uVar20 = *(uint *)(local_1f0 + 0x3b4);
    if (uVar20 < uVar33 && DAT_14c761990 != 0) {
      uVar38 = (ulonglong)(uVar33 - 1) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar38 != 0) {
        for (; uVar38 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = ((uint)lVar9 ^ 0xffffffc0) + 0x3e;
      iVar32 = 0;
      if (0 < iVar7) {
        iVar32 = iVar7;
      }
      uVar8 = -1 << ((byte)iVar32 & 0x1f);
      uVar8 = ~uVar8 + uVar33 & uVar8;
      if (*(uint *)(local_1f0 + 0x3b0) <= uVar8) {
        uVar8 = *(uint *)(local_1f0 + 0x3b0);
      }
      if (uVar20 <= uVar8) {
        uVar20 = uVar8;
      }
    }
  }
  else {
    uVar20 = 0;
    if (DAT_14c7619c8 == 0) {
      uVar20 = *(uint *)(local_1f0 + 0x3b4);
    }
    if (uVar20 < uVar33) {
      uVar20 = uVar33 + 0x1ff & 0xfffffe00;
      uVar8 = *(uint *)(local_1f0 + 0x3b0 + (ulonglong)(DAT_14c761990 == 0) * 4);
      if (uVar8 <= uVar20) {
        uVar20 = uVar8;
      }
    }
  }
  plVar17 = (longlong *)(local_1f0 + 0x148);
  *(uint *)(local_1f0 + 1000) = uVar20;
  uVar8 = *(uint *)(local_1f0 + 0x3ac) * 0x20000 + uVar20 * 0x8000;
  if ((*(char *)(local_1f0 + 0x3d4) == '\x01') &&
     ((*(uint *)(local_1f0 + 0x3ac) != uVar19 || ((DAT_14caffd28 & 1) != 0)))) {
    local_1a8 = CONCAT44(local_1a8._4_4_,uVar24);
    uVar24 = *(uint *)(local_1f0 + 0x18);
    uVar36 = 0;
    local_1e0 = plVar17;
    local_1c4 = uVar20;
    local_1a0 = (ulonglong)uVar33;
    if ((int)uVar24 < 1) {
      local_1c0 = 0;
    }
    else {
      plVar17 = (longlong *)(local_1f0 + 0x390);
      lVar9 = local_1f0;
      uVar33 = uVar19;
      do {
        uVar20 = uVar33;
        if (uVar19 < uVar33) {
          uVar20 = uVar19;
        }
        uVar21 = 0;
        if (0 < (int)uVar36) {
          uVar21 = uVar36;
        }
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 8 + (longlong)(int)uVar36 * 0x18) != -1) &&
           (uVar23 = *(ushort *)(*(longlong *)(lVar9 + 0x10) + (longlong)(int)uVar36 * 0x18 + 0x10),
           uVar28 = (uint)uVar23, uVar23 != 0)) {
          iVar32 = uVar28 * 0x40 + uVar21 * 0x8000 + uVar20 * 0x20000 + 0x1e;
          do {
            iVar7 = *(int *)(lVar9 + 0x398);
            *(uint *)(lVar9 + 0x398) = iVar7 + 1U;
            if (*(uint *)(lVar9 + 0x39c) < iVar7 + 1U) {
              FUN_1447808da(plVar17,iVar7);
              lVar9 = local_1f0;
            }
            *(int *)(*plVar17 + (longlong)iVar7 * 4) = iVar32;
            iVar32 = iVar32 + 0x10;
            uVar28 = uVar28 - 1;
          } while (uVar28 != 0);
          uVar24 = *(uint *)(lVar9 + 0x18);
        }
        lVar25 = local_1e8;
        uVar36 = uVar36 + 1;
        uVar33 = uVar33 + 1;
      } while (uVar36 < uVar24);
      local_1c0 = FUN_144735dd8(local_1e8,local_1e0,0);
      FUN_14366e8ee(local_1f0,lVar25,local_1c0);
    }
    lVar9 = local_1f0;
    if (uVar19 != 0) {
      lVar25 = local_1f0 + 0x460;
      uVar33 = 0;
      do {
        puVar13 = (uint *)(*(longlong *)(lVar9 + 0x5d8) + (longlong)(int)uVar33 * 0xc);
        uVar24 = *puVar13;
        if (uVar24 != 0xffffffff) {
          uVar20 = uVar24 & 0x1ffff;
          if (((uVar20 < *(uint *)(lVar9 + 0x18)) &&
              (*(uint *)(*(longlong *)(lVar9 + 0x10) + 8 + (ulonglong)uVar20 * 0x18) == uVar24)) &&
             (lVar34 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + (ulonglong)uVar20 * 0x18),
             lVar34 != 0)) {
            *(int *)(lVar34 + 0xc0) =
                 *(int *)(lVar34 + 0xc0) -
                 (uint)*(ushort *)
                        (*(longlong *)(*(longlong *)(lVar9 + 0x5e8) + (longlong)(int)uVar33 * 8) + 2
                        );
            local_158._8_8_ = lVar34 + 0xc0;
            local_158._0_8_ = puVar13;
            FUN_14499e2d8(lVar25,&local_170,local_158,0);
            lVar9 = local_1f0;
          }
          piVar1 = (int *)(**(longlong **)(lVar9 + 0x3a0) + (ulonglong)(byte)puVar13[2] * 4);
          *piVar1 = *piVar1 + -1;
        }
        *puVar13 = 0xffffffff;
        uVar33 = uVar33 + 1;
      } while (uVar19 != uVar33);
    }
    lVar25 = local_1e8;
    lVar9 = FUN_144735dd8(local_1e8,lVar9 + 0x268,0);
    iVar32 = *(int *)(local_1f0 + 0x15c + (ulonglong)*(byte *)(local_1f0 + 0x228) * 4);
    local_1d8 = (longlong *)(lVar25 + 0x70);
    puVar37 = (undefined8 *)(*(longlong *)(lVar25 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar18 = puVar37 + 6;
    if (*(undefined8 **)(lVar25 + 0x78) < puVar18) {
      FUN_140023dd8(local_1d8,0x40);
      puVar37 = (undefined8 *)(*local_1d8 + 0xfU & 0xfffffffffffffff0);
      puVar18 = puVar37 + 6;
    }
    lVar25 = local_1e8;
    iVar32 = iVar32 * 4;
    *(undefined8 **)(local_1e8 + 0x70) = puVar18;
    *puVar37 = &PTR_FUN_14aa68948;
    puVar37[4] = 0;
    iVar7 = *(int *)(local_1e8 + 0xa0);
    *(uint *)(local_1e8 + 0xa0) = iVar7 + 1U;
    if (*(uint *)(local_1e8 + 0xa4) < iVar7 + 1U) {
      FUN_1448cfae8(local_1e8 + 0x98,iVar7);
    }
    plVar17 = local_1d8;
    *(undefined8 **)(*(longlong *)(lVar25 + 0x98) + (longlong)iVar7 * 8) = puVar37;
    *(uint *)(puVar37 + 2) = uVar19;
    *(undefined4 *)((longlong)puVar37 + 0x14) = *(undefined4 *)(local_1f0 + 0x3ac);
    *(int *)(puVar37 + 3) = iVar32;
    cVar6 = *(char *)(lVar9 + 0x68);
    puVar31 = (undefined8 *)(*(longlong *)(lVar25 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar31 + 8;
    if (*(undefined8 **)(lVar25 + 0x78) < puVar18) {
      FUN_140023dd8(local_1d8,0x48);
      puVar31 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
      puVar18 = puVar31 + 8;
      lVar25 = local_1e8;
    }
    local_1d0 = (wchar_t *)(lVar25 + 0x198);
    *(undefined8 **)(lVar25 + 0x70) = puVar18;
    puVar31[1] = *(undefined8 *)(lVar9 + 8);
    puVar31[2] = 0;
    *(undefined1 *)(puVar31 + 3) = 2;
    *(undefined8 *)((longlong)puVar31 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar31 + 5) = 0;
    *puVar31 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar31 + 6) = cVar6 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar31 + 0x31) = 0;
    puVar31[7] = lVar9;
    iVar7 = *(int *)(lVar25 + 0x1a0);
    *(uint *)(lVar25 + 0x1a0) = iVar7 + 1U;
    if (*(uint *)(lVar25 + 0x1a4) < iVar7 + 1U) {
      FUN_1447568fc(local_1d0,iVar7);
      lVar25 = local_1e8;
    }
    *(undefined8 **)(*(longlong *)(lVar25 + 0x198) + (longlong)iVar7 * 8) = puVar31;
    *(int *)((longlong)puVar31 + 0x1c) = *(int *)(lVar25 + 0x1a0) + -1;
    puVar37[4] = puVar31;
    FUN_147cccd7e(*(undefined8 *)
                   (&DAT_14ca8c1f0 +
                   (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8),
                  local_158);
    lVar9 = local_1e8;
    iVar7 = iVar32 + 0x7e;
    if (-1 < iVar32 + 0x3f) {
      iVar7 = iVar32 + 0x3f;
    }
    local_170._0_4_ = iVar7 >> 6;
    local_170._4_4_ = 1;
    local_168._0_4_ = 1;
    if (DAT_14ca84f24 < (int)local_170) {
      iVar32 = (int)local_170 + 0xfe;
      if (-1 < (int)local_170 + 0x7f) {
        iVar32 = (int)local_170 + 0x7f;
      }
      local_170._4_4_ = iVar32 >> 7;
      local_170._0_4_ = 0x80;
    }
    if (DAT_14ca84f28 < (int)local_170._4_4_) {
      iVar32 = local_170._4_4_ + 0xfe;
      if (-1 < (int)(local_170._4_4_ + 0x7f)) {
        iVar32 = local_170._4_4_ + 0x7f;
      }
      local_168._0_4_ = iVar32 >> 7;
      local_170._4_4_ = 0x80;
    }
    local_208 = &local_170;
    FUN_147cccdeb(local_1e8,local_15c,local_158,puVar37 + 2);
    lVar25 = local_1e8;
    uVar33 = (int)local_1a0 << 0xf;
    if (((uint)local_1a8 >> 0x16 & 1) == 0) {
      uVar16 = FUN_144735dd8(lVar9,local_1e0,0);
      plVar17 = local_1d8;
      uVar24 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar24 = DAT_14ca84e48;
      }
      local_158._8_4_ = 0x10119;
      uVar20 = uVar8 >> 2;
      if (DAT_14ca84e48 <= uVar8 >> 2) {
        uVar20 = DAT_14ca84e48;
      }
      local_148 = (undefined8 *)0x0;
      local_158._4_4_ = uVar20 + (uVar20 == 0);
      local_158._0_4_ = uVar24 + (uVar24 == 0);
      uVar38 = *(longlong *)(lVar9 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar22 = uVar38 + 0x150;
      if (*(ulonglong *)(lVar9 + 0x78) < uVar22) {
        FUN_140023dd8(local_1d8,0x160);
        uVar38 = *plVar17 + 0xfU & 0xfffffffffffffff0;
        uVar22 = uVar38 + 0x150;
        lVar9 = local_1e8;
      }
      *(ulonglong *)(lVar9 + 0x70) = uVar22;
      FUN_1456bd266(uVar38,L"Nanite.StreamingManager.ClusterPageData",local_158,0);
      iVar32 = *(int *)(local_1e8 + 400);
      *(uint *)(local_1e8 + 400) = iVar32 + 1U;
      if (*(uint *)(local_1e8 + 0x194) < iVar32 + 1U) {
        FUN_144737178(local_1e8 + 0x188,iVar32);
      }
      lVar25 = local_1e8;
      lVar9 = local_1f0;
      *(ulonglong *)(*(longlong *)(local_1e8 + 0x188) + (longlong)iVar32 * 8) = uVar38;
      *(int *)(uVar38 + 0x7c) = *(int *)(local_1e8 + 400) + -1;
      local_200 = (wchar_t *)(ulonglong)uVar33;
      local_208 = (undefined8 *)(ulonglong)(uVar19 << 0x11);
      FUN_143211d72(local_1e8,uVar38,*(int *)(local_1f0 + 0x3ac) << 0x11,uVar16);
      plVar17 = (longlong *)FUN_1449609de(lVar25,uVar38);
      puVar18 = (undefined8 *)*plVar17;
      puVar37 = *(undefined8 **)(lVar9 + 0x148);
      if (puVar37 != puVar18) {
        *local_1e0 = (longlong)puVar18;
        if (puVar18 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
        }
        if (puVar37 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar37 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar37)(puVar37,1);
            lVar9 = local_1f0;
          }
        }
      }
    }
    else if (*(uint *)(local_1f0 + 0x3ac) < uVar19) {
      lVar9 = FUN_144735dd8(local_1e8,local_1e0,0);
      plVar17 = local_1d8;
      iVar32 = *(int *)(local_1f0 + 0x3ac);
      cVar6 = *(char *)(lVar9 + 0x68);
      puVar37 = (undefined8 *)(*(longlong *)(lVar25 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar18 = puVar37 + 8;
      if (*(undefined8 **)(lVar25 + 0x78) < puVar18) {
        FUN_140023dd8(local_1d8,0x48);
        puVar37 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar18 = puVar37 + 8;
        lVar25 = local_1e8;
      }
      *(undefined8 **)(lVar25 + 0x70) = puVar18;
      puVar37[1] = *(undefined8 *)(lVar9 + 8);
      puVar37[2] = 0;
      *(undefined1 *)(puVar37 + 3) = 2;
      *(undefined8 *)((longlong)puVar37 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar37 + 5) = 0;
      *puVar37 = &PTR_FUN_14a1fb3e8;
      *(byte *)(puVar37 + 6) = cVar6 >> 7 & 0x1c;
      *(undefined2 *)((longlong)puVar37 + 0x31) = 0;
      puVar37[7] = lVar9;
      iVar7 = *(int *)(lVar25 + 0x1a0);
      *(uint *)(lVar25 + 0x1a0) = iVar7 + 1U;
      if (*(uint *)(lVar25 + 0x1a4) < iVar7 + 1U) {
        FUN_1447568fc(local_1d0,iVar7);
        lVar25 = local_1e8;
      }
      *(undefined8 **)(*(longlong *)(lVar25 + 0x198) + (longlong)iVar7 * 8) = puVar37;
      *(int *)((longlong)puVar37 + 0x1c) = *(int *)(lVar25 + 0x1a0) + -1;
      local_208 = (undefined8 *)CONCAT44(local_208._4_4_,uVar33);
      FUN_14366edf8(local_1e8,puVar37,iVar32 << 0x11,uVar19 << 0x11);
      local_148 = (undefined8 *)0x0;
      local_158._8_4_ = 0x10119;
      local_158._4_4_ = uVar8 >> 2;
      local_158._0_4_ = 4;
      uVar38 = FUN_1447f2a09(local_1e8,local_1e0,local_158,
                             L"Nanite.StreamingManager.ClusterPageData");
      lVar9 = local_1f0;
    }
    else {
      uVar38 = local_1c0;
      lVar9 = local_1f0;
      if (uVar19 < *(uint *)(local_1f0 + 0x3ac)) {
        local_148 = (undefined8 *)0x0;
        local_158._8_4_ = 0x10119;
        local_158._4_4_ = uVar8 >> 2;
        local_158._0_4_ = 4;
        uVar38 = FUN_1447f2a09(local_1e8,local_1e0,local_158,
                               L"Nanite.StreamingManager.ClusterPageData");
        plVar17 = local_1d8;
        iVar32 = *(int *)(local_1f0 + 0x3ac);
        cVar6 = *(char *)(uVar38 + 0x68);
        puVar37 = (undefined8 *)(*(longlong *)(local_1e8 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar18 = puVar37 + 8;
        if (*(undefined8 **)(local_1e8 + 0x78) < puVar18) {
          FUN_140023dd8(local_1d8,0x48);
          puVar37 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
          puVar18 = puVar37 + 8;
        }
        *(undefined8 **)(local_1e8 + 0x70) = puVar18;
        puVar37[1] = *(undefined8 *)(uVar38 + 8);
        puVar37[2] = 0;
        *(undefined1 *)(puVar37 + 3) = 2;
        *(undefined8 *)((longlong)puVar37 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar37 + 5) = 0;
        *puVar37 = &PTR_FUN_14a1fb3e8;
        *(byte *)(puVar37 + 6) = cVar6 >> 7 & 0x1c;
        *(undefined2 *)((longlong)puVar37 + 0x31) = 0;
        puVar37[7] = uVar38;
        iVar7 = *(int *)(local_1e8 + 0x1a0);
        *(uint *)(local_1e8 + 0x1a0) = iVar7 + 1U;
        if (*(uint *)(local_1e8 + 0x1a4) < iVar7 + 1U) {
          FUN_1447568fc(local_1d0,iVar7);
        }
        *(undefined8 **)(*(longlong *)(local_1e8 + 0x198) + (longlong)iVar7 * 8) = puVar37;
        *(int *)((longlong)puVar37 + 0x1c) = *(int *)(local_1e8 + 0x1a0) + -1;
        local_208 = (undefined8 *)CONCAT44(local_208._4_4_,uVar33);
        FUN_14366edf8(local_1e8,puVar37,iVar32 << 0x11,uVar19 << 0x11);
        lVar9 = local_1f0;
      }
    }
    auVar46 = local_158;
    plVar17 = local_1d8;
    auVar5._4_8_ = local_158._8_8_;
    auVar5._0_4_ = (*(uint *)(lVar9 + 0x3ac) & 0x7fff) << 0xf;
    local_158._0_8_ = auVar5._0_8_ << 0x20;
    local_158._12_4_ = auVar46._12_4_;
    local_158._8_4_ = 0;
    cVar6 = *(char *)(uVar38 + 0x68);
    puVar37 = (undefined8 *)(*(longlong *)(local_1e8 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar37 + 8;
    if (*(undefined8 **)(local_1e8 + 0x78) < puVar18) {
      FUN_140023dd8(local_1d8,0x48);
      puVar37 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
      puVar18 = puVar37 + 8;
    }
    *(undefined8 **)(local_1e8 + 0x70) = puVar18;
    puVar37[1] = *(undefined8 *)(uVar38 + 8);
    puVar37[2] = 0;
    *(undefined1 *)(puVar37 + 3) = 2;
    *(undefined8 *)((longlong)puVar37 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar37 + 5) = 0;
    *puVar37 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar37 + 6) = cVar6 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar37 + 0x31) = 0;
    puVar37[7] = uVar38;
    iVar32 = *(int *)(local_1e8 + 0x1a0);
    *(uint *)(local_1e8 + 0x1a0) = iVar32 + 1U;
    local_1c0 = uVar38;
    if (*(uint *)(local_1e8 + 0x1a4) < iVar32 + 1U) {
      FUN_1447568fc(local_1d0,iVar32);
    }
    *(undefined8 **)(*(longlong *)(local_1e8 + 0x198) + (longlong)iVar32 * 8) = puVar37;
    *(int *)((longlong)puVar37 + 0x1c) = *(int *)(local_1e8 + 0x1a0) + -1;
    FUN_14323c24f(local_1e8,puVar37);
    lVar9 = local_1f0;
    FUN_14007fdac(local_1f0);
    DAT_14caffd28 = 0;
  }
  else {
    local_148 = (undefined8 *)0x0;
    local_158._8_4_ = 0x10119;
    local_158._4_4_ = uVar8 >> 2;
    local_158._0_4_ = 4;
    local_1c0 = FUN_1447f2a09(local_1e8,plVar17,local_158,L"Nanite.StreamingManager.ClusterPageData"
                             );
    *(undefined1 *)(local_1f0 + 0x3d4) = 1;
    lVar9 = local_1f0;
  }
  local_1b0 = (longlong *)(lVar9 + 0x10);
  FUN_140905cc8();
  lVar9 = local_1f0;
  if (*(int *)(local_1f0 + 0x408) != 0) {
    FUN_144883418(local_1f0 + 0x158);
    iVar32 = *(int *)(lVar9 + 0x15c + (ulonglong)*(byte *)(lVar9 + 0x228) * 4);
    uVar38 = (ulonglong)(iVar32 + -1 + (uint)(iVar32 == 0)) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar38 != 0) {
      for (; uVar38 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_148 = (undefined8 *)0x0;
    local_158._8_4_ = 0x10119;
    local_158._4_4_ = (uint)(0xd0 << ((byte)lVar25 & 0x1f)) >> 2;
    local_158._0_4_ = 4;
    local_188 = FUN_1447f2a09(local_1e8,lVar9 + 0x268,local_158,L"Nanite.StreamingManager.Hierarchy"
                             );
    iVar32 = 0;
    if ((DAT_14c761998 == 0) || (uVar38 = 0, *(int *)(lVar9 + 0x270) < 1)) {
      uVar16 = 0;
      local_1b8 = 0;
      lVar25 = local_1e8;
    }
    else {
      FUN_144883418(lVar9 + 0x278);
      lVar25 = local_1e8;
      iVar7 = *(int *)(local_1f0 + 0x27c + (ulonglong)*(byte *)(local_1f0 + 0x348) * 4);
      uVar22 = (ulonglong)(iVar7 + -1 + (uint)(iVar7 == 0)) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar19 = ((uint)lVar9 ^ 0xffffffc0) + 0x3e;
      if (0 < (int)uVar19) {
        uVar38 = (ulonglong)uVar19;
      }
      uVar19 = -1 << ((byte)uVar38 & 0x1f);
      uVar19 = ~uVar19 + iVar7 & uVar19;
      if (uVar19 < DAT_14c76198c) {
        uVar19 = DAT_14c76198c;
      }
      local_148 = (undefined8 *)0x0;
      local_158._8_4_ = 0x10119;
      local_158._4_4_ = uVar19 * 0xa200 >> 2;
      local_158._0_4_ = 4;
      local_1b8 = FUN_1447f2a09(local_1e8,local_1f0 + 0x388,local_158,
                                L"Nanite.StreamingManager.ImposterData");
      local_200 = L"Nanite.StreamingManager.ImposterDataUpload";
      local_208 = (undefined8 *)((ulonglong)local_208 & 0xffffffffffffff00);
      FUN_14323c536(local_1f0 + 0x350,lVar25,*(undefined4 *)(local_1f0 + 0x270),0xa200);
      uVar16 = CONCAT71((int7)(uVar38 >> 8),1);
      lVar9 = local_1f0;
    }
    local_190 = lVar9 + 0x230;
    local_200 = L"Nanite.StreamingManager.HierarchyUpload";
    local_208 = (undefined8 *)((ulonglong)local_208 & 0xffffffffffffff00);
    FUN_14323c536(local_190,lVar25,*(undefined4 *)(lVar9 + 0x150));
    iVar7 = 0;
    if ((longlong)*(int *)(lVar9 + 0x408) != 0) {
      plVar14 = *(longlong **)(local_1f0 + 0x400);
      plVar17 = plVar14 + *(int *)(lVar9 + 0x408);
      iVar7 = 0;
      iVar32 = 0;
      do {
        iVar27 = *(int *)(*plVar14 + 0x88);
        if (iVar27 != 0) {
          iVar35 = 0;
          do {
            iVar7 = iVar7 + *(int *)(*(longlong *)(*plVar14 + 0x68) + 8 + (longlong)iVar35 * 0x14);
            iVar35 = iVar35 + 1;
          } while (iVar27 != iVar35);
        }
        iVar32 = iVar32 + iVar27;
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar17);
    }
    local_f0 = 0;
    local_e8 = 0;
    local_158 = (undefined1  [16])0x0;
    local_148 = (undefined8 *)0x0;
    local_120 = (undefined1  [16])0x0;
    local_110 = (undefined1  [16])0x0;
    local_e4 = 0xffffffff00000080;
    local_dc = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = (undefined1  [16])0x0;
    local_b0 = (undefined1  [16])0x0;
    FUN_1405c0cf2(local_158);
    lVar9 = local_1f0;
    local_208 = (undefined8 *)CONCAT44(local_208._4_4_,*(undefined4 *)(local_1f0 + 0x3ac));
    FUN_1405c0b02(local_158,local_1e8,iVar32,iVar7);
    local_1d0 = (wchar_t *)(lVar9 + 0x720);
    *(undefined4 *)(lVar9 + 0x728) = 0;
    if (*(int *)(lVar9 + 0x72c) < 0) {
      FUN_14480809c(local_1d0,0);
      lVar9 = local_1f0;
    }
    auVar46 = _DAT_149931e80;
    if ((longlong)*(int *)(lVar9 + 0x408) != 0) {
      plVar17 = *(longlong **)(lVar9 + 0x400);
      local_178 = plVar17 + *(int *)(lVar9 + 0x408);
      local_180 = lVar9 + 0x460;
      auVar45 = pmovsxbq(unaff_XMM6,0x302);
      auVar47 = pmovsxbq(unaff_XMM7,0x100);
      auVar48 = pmovsxbq(unaff_XMM10,0x404);
      local_198 = uVar16;
      do {
        plVar14 = (longlong *)*plVar17;
        *(undefined4 *)(plVar14 + 0x18) = 0;
        local_1d8 = plVar17;
        if ((int)plVar14[0x11] != 0) {
          uVar19 = 0;
          do {
            lVar25 = *plVar14;
            lVar34 = (longlong)(int)uVar19;
            local_1e0 = (longlong *)(lVar34 * 5);
            iVar32 = uVar19 + *(int *)((longlong)plVar14 + 0xb4);
            local_1a0 = plVar14[0xd];
            uVar33 = *(uint *)(lVar9 + 0x3ac);
            local_170._4_4_ = uVar33 + iVar32;
            uVar38 = (ulonglong)*(uint *)(local_1a0 + lVar34 * 0x14);
            uVar23 = *(ushort *)(lVar25 + 4 + uVar38);
            local_1a8 = (ulonglong)*(ushort *)(lVar25 + 6 + uVar38);
            uVar4 = *(ushort *)(lVar25 + 2 + uVar38);
            local_170._0_4_ = *(undefined4 *)((longlong)plVar14 + 0xac);
            if (local_170._4_4_ < uVar33) {
              uVar33 = local_170._4_4_;
            }
            uVar22 = (ulonglong)*(uint *)(local_1a0 + 8 + lVar34 * 0x14);
            iVar7 = 0;
            if (0 < iVar32) {
              iVar7 = iVar32;
            }
            local_200 = local_1d0;
            local_208 = &local_170;
            local_1c4 = (uint)uVar4;
            pvVar10 = (void *)FUN_14482213a(local_158,uVar22,uVar4,iVar7 * 0x8000 + uVar33 * 0x20000
                                           );
            memcpy(pvVar10,(void *)((ulonglong)uVar23 * 0x10 + lVar25 + uVar38 + local_1a8 * 8 + 8),
                   uVar22);
            uVar23 = *(ushort *)(lVar25 + 4 + uVar38);
            if (uVar23 != 0) {
              pbVar11 = (byte *)(lVar25 + uVar38 + 0x14);
              uVar22 = 0;
              do {
                if ((*pbVar11 & 0x1f) == 0) {
                  *(uint *)((ulonglong)((*(uint *)(pbVar11 + -8) & 0x3f) << 4) + 0x8c +
                           (ulonglong)(*(uint *)(pbVar11 + -8) >> 6) * 0xd0 + plVar14[9]) =
                       (*(int *)((longlong)plVar14 + 0xb4) + *(int *)(pbVar11 + -0xc) +
                       *(int *)(local_1f0 + 0x3ac)) * 0x100 | *(uint *)(pbVar11 + -4);
                  uVar23 = *(ushort *)(lVar25 + uVar38 + 4);
                }
                uVar22 = uVar22 + 1;
                pbVar11 = pbVar11 + 0x10;
              } while (uVar22 < uVar23);
            }
            lVar9 = *(longlong *)(local_1f0 + 0x10);
            lVar25 = (longlong)iVar32;
            *(undefined4 *)(lVar9 + 8 + lVar25 * 0x18) = *(undefined4 *)((longlong)plVar14 + 0xac);
            *(short *)(lVar9 + 0x10 + lVar25 * 0x18) = (short)local_1c4;
            bVar3 = *(byte *)(local_1a0 + (longlong)local_1e0 * 4 + 0x12);
            *(byte *)(lVar9 + 0x12 + lVar25 * 0x18) = bVar3;
            piVar1 = (int *)(**(longlong **)(local_1f0 + 0x3a0) + (ulonglong)bVar3 * 4);
            *piVar1 = *piVar1 + 1;
            *(uint *)(plVar14 + 0x18) = (int)plVar14[0x18] + local_1c4;
            uVar19 = uVar19 + 1;
            lVar9 = local_1f0;
          } while (uVar19 < *(uint *)(plVar14 + 0x11));
        }
        local_168 = plVar14 + 0x18;
        local_170 = (longlong)plVar14 + 0xac;
        FUN_14499e2d8(local_180,local_15c,&local_170,0);
        uVar16 = local_198;
        uVar19 = *(uint *)(plVar14 + 10);
        uVar38 = (ulonglong)uVar19;
        pvVar10 = (void *)plVar14[9];
        uVar33 = *(uint *)(local_1f0 + 0x240);
        if (uVar38 != 0) {
          iVar32 = (int)plVar14[0x16];
          lVar9 = uVar38 - 1;
          auVar40._8_4_ = (int)lVar9;
          auVar40._0_8_ = lVar9;
          auVar40._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
          lVar9 = *(longlong *)(local_1f0 + 0x230) + (ulonglong)uVar33 * 4;
          uVar22 = 0;
          auVar42 = auVar47;
          auVar44 = auVar45;
          do {
            lVar25 = SUB168(auVar40 ^ auVar46,0);
            if ((bool)(~(lVar25 < SUB168(auVar42 ^ auVar46,0)) & 1)) {
              *(int *)(lVar9 + uVar22) = iVar32;
            }
            if (SUB168(auVar42 ^ auVar46,8) <= SUB168(auVar40 ^ auVar46,8)) {
              *(int *)(lVar9 + 4 + uVar22) = iVar32 + 1;
            }
            if ((longlong)(auVar44._0_8_ ^ auVar46._0_8_) <= lVar25) {
              *(int *)(lVar9 + 8 + uVar22) = iVar32 + 2;
              *(int *)(lVar9 + 0xc + uVar22) = iVar32 + 3;
            }
            lVar25 = auVar42._8_8_;
            auVar42._0_8_ = auVar42._0_8_ + auVar48._0_8_;
            auVar42._8_8_ = lVar25 + auVar48._8_8_;
            lVar25 = auVar44._8_8_;
            auVar44._0_8_ = auVar44._0_8_ + auVar48._0_8_;
            auVar44._8_8_ = lVar25 + auVar48._8_8_;
            uVar22 = uVar22 + 0x10;
            iVar32 = iVar32 + 4;
          } while ((uVar38 * 4 + 0xc & 0xfffffffffffffff0) != uVar22);
          uVar33 = *(uint *)(local_1f0 + 0x240);
        }
        *(uint *)(local_1f0 + 0x240) = uVar33 + uVar19;
        memcpy((void *)((ulonglong)(*(int *)(local_1f0 + 0x248) * uVar33) +
                       *(longlong *)(local_1f0 + 0x238)),pvVar10,
               (ulonglong)(*(int *)(local_1f0 + 0x248) * uVar19));
        if (((char)uVar16 != '\0') && (0 < (int)plVar14[8])) {
          pvVar10 = (void *)plVar14[7];
          *(int *)(*(longlong *)(local_1f0 + 0x350) + (ulonglong)*(uint *)(local_1f0 + 0x360) * 4) =
               (int)plVar14[0x17];
          iVar32 = *(int *)(local_1f0 + 0x360);
          *(int *)(local_1f0 + 0x360) = iVar32 + 1;
          memcpy((void *)((ulonglong)(*(uint *)(local_1f0 + 0x368) * iVar32) +
                         *(longlong *)(local_1f0 + 0x358)),pvVar10,
                 (ulonglong)*(uint *)(local_1f0 + 0x368));
        }
        *(undefined4 *)(plVar14 + 1) = 0;
        if (*(int *)((longlong)plVar14 + 0xc) != 0) {
          FUN_144893a1c(plVar14,0);
        }
        *(undefined4 *)(plVar14 + 10) = 0;
        if (*(int *)((longlong)plVar14 + 0x54) != 0) {
          FUN_1404127be(plVar14 + 9,0);
        }
        *(undefined4 *)(plVar14 + 8) = 0;
        if (*(int *)((longlong)plVar14 + 0x44) != 0) {
          FUN_1448759c8(plVar14 + 7,0);
        }
        plVar17 = local_1d8 + 1;
        lVar9 = local_1f0;
      } while (plVar17 != local_178);
    }
    *(undefined4 *)(lVar9 + 0x150) = 0;
    FUN_14323c904(local_190,local_1e8,local_188);
    FUN_14366f054(local_158);
    if ((char)uVar16 != '\0') {
      *(undefined4 *)(lVar9 + 0x270) = 0;
      FUN_14323c904(lVar9 + 0x350);
    }
    *(undefined4 *)(lVar9 + 0x408) = 0;
    if (*(int *)(lVar9 + 0x40c) < 0) {
      FUN_147cd5420(local_1f0 + 0x400);
    }
    FUN_14092322a(local_158);
  }
  uVar19 = *(uint *)(local_1f0 + 0x3bc);
  iVar32 = *(int *)(local_1f0 + 0x3cc);
  iVar7 = *(int *)(local_1f0 + 0x3c8);
  QueryPerformanceCounter((LARGE_INTEGER *)local_158);
  lVar9 = *(longlong *)(local_1f0 + 0x3f8);
  ((LARGE_INTEGER *)(local_1f0 + 0x3f8))->QuadPart = local_158._0_8_;
  lVar25 = local_1f0;
  if (*(int *)(local_1f0 + 0x3c8) == 0) {
    *(undefined4 *)(local_1f0 + 0x6e4) = 0;
  }
  else {
    lVar34 = local_158._0_8_ - lVar9;
    if (lVar9 == 0) {
      lVar34 = 0;
    }
    auVar46._8_4_ = (int)((ulonglong)lVar34 >> 0x20);
    auVar46._0_8_ = lVar34;
    auVar46._12_4_ = 0x45300000;
    iVar27 = 0;
    uVar33 = 0;
    plVar17 = local_1b0;
    do {
      if (*(uint *)(lVar25 + 0x3c0) <= uVar33) {
LAB_143670dec:
        *(uint *)(lVar25 + 0x6e4) = uVar33;
        if (uVar33 != 0) goto LAB_143670df7;
        goto LAB_143670e52;
      }
      lVar9 = *(longlong *)(lVar25 + 0x668);
      lVar29 = (longlong)
               (int)((uVar33 + ((iVar32 + uVar19) - iVar7) % uVar19) % *(uint *)(lVar25 + 0x3bc)) *
               0x20;
      plVar14 = *(longlong **)(lVar9 + 8 + lVar29);
      if (plVar14 == (longlong *)0x0) goto LAB_143670dec;
      if (*(code **)(*plVar14 + 0x20) != (code *)&LAB_14688ab4e) {
        uVar24 = (**(code **)(*plVar14 + 0x20))();
        lVar25 = local_1f0;
        plVar17 = local_1b0;
        if (1 < uVar24) goto LAB_143670bfc;
        goto LAB_143670dec;
      }
      iVar35 = DAT_14c844ee0;
      if (plVar14[2] != 0) {
        iVar35 = *(int *)(plVar14[2] + 0xb4);
      }
      if (iVar35 == 1) goto LAB_143670dec;
LAB_143670bfc:
      pwVar2 = (wchar_t *)(lVar9 + lVar29);
      plVar30 = (longlong *)(lVar9 + lVar29 + 8);
      plVar14 = (longlong *)*plVar30;
      if (plVar14 == (longlong *)0x0) {
LAB_143670c36:
        uVar24 = *(uint *)(pwVar2 + 10);
        if (((uVar24 != 0xffffffff) &&
            (uVar20 = uVar24 & 0x1ffff, uVar20 < *(uint *)(lVar25 + 0x18))) &&
           (lVar9 = *(longlong *)(*plVar17 + (ulonglong)uVar20 * 0x18),
           lVar9 != 0 && *(uint *)(*plVar17 + 8 + (ulonglong)uVar20 * 0x18) == uVar24)) {
          local_158._0_12_ = ZEXT412(1) << 0x40;
          local_148 = (undefined8 *)0x0;
          local_208 = (undefined8 *)CONCAT44(local_208._4_4_,1);
          local_200 = pwVar2;
          local_1f8 = plVar30;
          FUN_1449baf38(local_158,lVar9 + 0x10,
                        *(undefined4 *)
                         (*(longlong *)(lVar9 + 0x68) + (longlong)*(int *)(pwVar2 + 0xc) * 0x14),
                        *(undefined4 *)
                         (*(longlong *)(lVar9 + 0x68) + 4 + (longlong)*(int *)(pwVar2 + 0xc) * 0x14)
                       );
          FUN_1403c8d20(local_158);
          lVar25 = local_1f0;
          if (local_148 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_148 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*local_148)(local_148,1);
              lVar25 = local_1f0;
            }
          }
          goto LAB_143670dec;
        }
      }
      else if (*(code **)(*plVar14 + 0x20) == (code *)&LAB_14688ab4e) {
        iVar35 = DAT_14c844ee0;
        if (plVar14[2] != 0) {
          iVar35 = *(int *)(plVar14[2] + 0xb4);
        }
        if (iVar35 != 0) goto LAB_143670c36;
      }
      else {
        iVar35 = (**(code **)(*plVar14 + 0x20))();
        lVar25 = local_1f0;
        plVar17 = local_1b0;
        if (iVar35 != 2) goto LAB_143670c36;
      }
      if (0.0 <= DAT_14c761980) {
        uVar24 = *(uint *)(pwVar2 + 0xe);
        uVar20 = (uint)(longlong)
                       ((double)DAT_14c761980 *
                        DAT_14c83f418 *
                        (((double)CONCAT44(0x43300000,(int)lVar34) - 4503599627370496.0) +
                        (auVar46._8_8_ - 1.9342813113834067e+25)) * 1048576.0);
        iVar35 = uVar24 - uVar20;
        if (uVar20 > uVar24) {
          iVar35 = 0;
        }
        *(int *)(pwVar2 + 0xe) = iVar35;
        if (uVar20 <= uVar24 && uVar24 - uVar20 != 0) goto LAB_143670dec;
      }
      puVar13 = *(uint **)(lVar25 + 0x688);
      uVar24 = puVar13[1] + *(uint *)(*(longlong *)pwVar2 + 8);
      if (*puVar13 < uVar24) {
        uVar24 = *(uint *)(*(longlong *)pwVar2 + 8);
      }
      puVar13[1] = uVar24;
      uVar24 = *(uint *)(pwVar2 + 10);
      if (((uVar24 != 0xffffffff) && (uVar20 = uVar24 & 0x1ffff, uVar20 < *(uint *)(lVar25 + 0x18)))
         && (lVar9 = *(longlong *)(*plVar17 + (ulonglong)uVar20 * 0x18),
            lVar9 != 0 && *(uint *)(*plVar17 + 8 + (ulonglong)uVar20 * 0x18) == uVar24)) {
        iVar27 = iVar27 + *(int *)(*(longlong *)(lVar9 + 0x68) + 8 +
                                  (longlong)*(int *)(pwVar2 + 0xc) * 0x14);
      }
      uVar33 = uVar33 + 1;
    } while (uVar33 < *(uint *)(lVar25 + 0x3c8));
    *(uint *)(lVar25 + 0x6e4) = uVar33;
LAB_143670df7:
    lVar9 = local_1e8;
    local_208 = (undefined8 *)CONCAT44(local_208._4_4_,*(undefined4 *)(lVar25 + 0x3ac));
    FUN_1405c0b02(*(undefined8 *)(lVar25 + 0x690),local_1e8,uVar33,iVar27);
    local_200 = L"Nanite.HierarchyUploadBuffer";
    local_208 = (undefined8 *)((ulonglong)local_208 & 0xffffffffffffff00);
    FUN_14323c536(local_1f0 + 0x230,lVar9,uVar33 << 9,4);
    lVar25 = local_1f0;
  }
LAB_143670e52:
  lVar9 = *(longlong *)(lVar25 + 0x698);
  *(undefined4 *)(lVar25 + 0x6e0) = 0;
  iVar32 = *(int *)(lVar9 + 0x24);
  if (iVar32 != 0) {
    uVar38 = (ulonglong)*(uint *)(lVar9 + 0x28);
    lVar25 = *(longlong *)(lVar9 + 8);
    do {
      iVar7 = (int)uVar38;
      lVar12 = (longlong)iVar7;
      lVar34 = *(longlong *)(lVar25 + lVar12 * 0x10);
      lVar29 = *(longlong *)(lVar34 + 8);
      if (lVar29 != 0) {
        if (*(int *)(lVar29 + 0x10) != 0) break;
        cVar6 = (**(code **)(**(longlong **)(lVar34 + 8) + 0x18))();
        if (cVar6 == '\0') break;
        iVar7 = *(int *)(lVar9 + 0x28);
        lVar25 = *(longlong *)(lVar9 + 8);
        iVar32 = *(int *)(lVar9 + 0x24);
        lVar12 = (longlong)iVar7;
      }
      *(longlong *)(lVar9 + 0x18) = lVar12 * 0x10 + lVar25;
      uVar38 = (ulonglong)(iVar7 + 1) % (ulonglong)*(uint *)(lVar9 + 0x20);
      *(int *)(lVar9 + 0x28) = (int)uVar38;
      iVar32 = iVar32 + -1;
      *(int *)(lVar9 + 0x24) = iVar32;
    } while (iVar32 != 0);
  }
  plVar17 = *(longlong **)(lVar9 + 0x18);
  if (plVar17 == (longlong *)0x0) {
    puVar13 = (uint *)0x0;
  }
  else {
    lVar25 = *plVar17;
    uVar19 = *(uint *)(lVar25 + 0x10);
    if (uVar19 == 0) {
      uVar33 = 0x20;
    }
    else {
      uVar33 = 0;
      if (uVar19 != 0) {
        for (; (uVar19 >> uVar33 & 1) == 0; uVar33 = uVar33 + 1) {
        }
      }
    }
    lVar34 = *(longlong *)(lVar25 + 0x18 + (ulonglong)uVar33 * 8);
    if (lVar34 == 0) {
      puVar13 = (uint *)0x0;
    }
    else {
      lVar29 = plVar17[1];
      *(uint *)(lVar25 + 0x14) = uVar33;
      local_200 = (wchar_t *)CONCAT44(local_200._4_4_,(int)lVar29 * 0xc);
      local_208 = (undefined8 *)((ulonglong)local_208 & 0xffffffff00000000);
      puVar13 = (uint *)(**(code **)(*DAT_14ca83900 + 0xf8))
                                  (DAT_14ca83900,&DAT_14ca85100,lVar34,*(undefined8 *)(lVar25 + 8));
    }
    uVar19 = *puVar13;
    fVar43 = (float)uVar19;
    fVar41 = (float)((longlong)(fVar43 * 1.25) & 0xffffffff);
    fVar39 = *(float *)(lVar9 + 0x30);
    if (fVar39 < fVar41) {
      uVar33 = *(int *)(lVar9 + 0x34) + 1;
      *(uint *)(lVar9 + 0x34) = uVar33;
      if (fVar39 * 0.5 <= fVar43) {
        *(undefined4 *)(lVar9 + 0x38) = 0;
        if (uVar33 < 2) goto LAB_143670fa1;
      }
      else {
        uVar24 = *(int *)(lVar9 + 0x38) + 1;
        *(uint *)(lVar9 + 0x38) = uVar24;
        if (uVar33 < 2) goto LAB_143670f94;
      }
      if (fVar39 <= fVar41) {
        fVar39 = fVar41;
      }
    }
    else {
      *(undefined4 *)(lVar9 + 0x34) = 0;
      if (fVar39 * 0.5 <= fVar43) {
        *(undefined4 *)(lVar9 + 0x38) = 0;
      }
      else {
        uVar24 = *(int *)(lVar9 + 0x38) + 1;
        *(uint *)(lVar9 + 0x38) = uVar24;
LAB_143670f94:
        if (0x1d < uVar24) {
          fVar39 = fVar39 * 0.98;
        }
      }
    }
LAB_143670fa1:
    iVar32 = DAT_14c7619a0;
    if (0xfffff < DAT_14c7619a0) {
      iVar32 = 0x100000;
    }
    iVar7 = 0x1000;
    if (0x1000 < iVar32) {
      iVar7 = iVar32;
    }
    iVar32 = 0x100000;
    if (DAT_14c7619a4 < 0x100000) {
      iVar32 = DAT_14c7619a4;
    }
    if (iVar32 < iVar7) {
      iVar32 = iVar7;
    }
    if ((float)iVar32 <= fVar39) {
      fVar39 = (float)iVar32;
    }
    if (fVar39 <= (float)iVar7) {
      fVar39 = (float)iVar7;
    }
    *(float *)(lVar9 + 0x30) = fVar39;
    uVar33 = *(int *)(*(longlong *)(lVar9 + 0x18) + 8) - 1;
    if (uVar19 < uVar33) {
      uVar33 = uVar19;
    }
    *(uint *)(local_1f0 + 0x6e0) = uVar33;
    puVar13 = puVar13 + 3;
  }
  *(uint **)(local_1f0 + 0x6d8) = puVar13;
  plVar17 = *(longlong **)(local_1f0 + 0x698);
  uVar33 = (uint)(longlong)*(float *)(plVar17 + 6);
  uVar19 = 1;
  if (1 < uVar33) {
    uVar19 = uVar33;
  }
  uVar38 = (ulonglong)(uVar19 - 1) * 2 + 1;
  lVar9 = 0x3f;
  if (uVar38 != 0) {
    for (; uVar38 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  iVar7 = ((uint)lVar9 ^ 0xffffffc0) + 0x3e;
  iVar32 = 0;
  if (0 < iVar7) {
    iVar32 = iVar7;
  }
  uVar19 = -1 << ((byte)iVar32 & 0x1f);
  uVar19 = ~uVar19 + uVar33 & uVar19;
  if ((*plVar17 == 0) || (*(uint *)(*plVar17 + 0x14) != uVar19)) {
    uVar33 = 0xc;
    if (DAT_14ca84e48 < 0xc) {
      uVar33 = DAT_14ca84e48;
    }
    local_158._8_4_ = 0x10129;
    local_148 = (undefined8 *)0x0;
    uVar24 = DAT_14ca84e48;
    if (uVar19 < DAT_14ca84e48) {
      uVar24 = uVar19;
    }
    local_158._4_4_ = uVar24 + (uVar24 == 0);
    local_158._0_4_ = uVar33 + (uVar33 == 0);
    plVar14 = (longlong *)(local_1e8 + 0x70);
    uVar22 = *(longlong *)(local_1e8 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar38 = uVar22 + 0x150;
    if (*(ulonglong *)(local_1e8 + 0x78) < uVar38) {
      FUN_140023dd8(plVar14,0x160);
      uVar22 = *plVar14 + 0xfU & 0xfffffffffffffff0;
      uVar38 = uVar22 + 0x150;
    }
    *(ulonglong *)(local_1e8 + 0x70) = uVar38;
    FUN_1456bd266(uVar22,L"Nanite.StreamingRequests",local_158,0);
    iVar32 = *(int *)(local_1e8 + 400);
    *(uint *)(local_1e8 + 400) = iVar32 + 1U;
    if (*(uint *)(local_1e8 + 0x194) < iVar32 + 1U) {
      FUN_144737178(local_1e8 + 0x188,iVar32);
    }
    *(ulonglong *)(*(longlong *)(local_1e8 + 0x188) + (longlong)iVar32 * 8) = uVar22;
    *(int *)(uVar22 + 0x7c) = *(int *)(local_1e8 + 400) + -1;
    cVar6 = *(char *)(uVar22 + 0x68);
    puVar37 = (undefined8 *)(*(longlong *)(local_1e8 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar37 + 8;
    if (*(undefined8 **)(local_1e8 + 0x78) < puVar18) {
      FUN_140023dd8(plVar14,0x48);
      puVar37 = (undefined8 *)(*plVar14 + 7U & 0xfffffffffffffff8);
      puVar18 = puVar37 + 8;
    }
    *(undefined8 **)(local_1e8 + 0x70) = puVar18;
    puVar37[1] = *(undefined8 *)(uVar22 + 8);
    puVar37[2] = 0;
    *(undefined1 *)(puVar37 + 3) = 2;
    *(undefined8 *)((longlong)puVar37 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar37 + 5) = 0;
    *puVar37 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar37 + 6) = cVar6 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar37 + 0x31) = 0;
    puVar37[7] = uVar22;
    iVar32 = *(int *)(local_1e8 + 0x1a0);
    *(uint *)(local_1e8 + 0x1a0) = iVar32 + 1U;
    if (*(uint *)(local_1e8 + 0x1a4) < iVar32 + 1U) {
      FUN_1447568fc(local_1e8 + 0x198,iVar32);
    }
    lVar9 = local_1e8;
    *(undefined8 **)(*(longlong *)(local_1e8 + 0x198) + (longlong)iVar32 * 8) = puVar37;
    *(int *)((longlong)puVar37 + 0x1c) = *(int *)(local_1e8 + 0x1a0) + -1;
    FUN_14367a6bb(local_1e8,puVar37);
    plVar14 = (longlong *)FUN_1449609de(lVar9,uVar22);
    puVar18 = (undefined8 *)*plVar14;
    puVar37 = (undefined8 *)*plVar17;
    if (puVar37 != puVar18) {
      *plVar17 = (longlong)puVar18;
      if (puVar18 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
        UNLOCK();
      }
      if (puVar37 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar37 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar37)(puVar37,1);
        }
      }
    }
  }
  if (DAT_14c76197c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_228);
  }
  lVar9 = local_1f0 + 0x6a8;
  puVar18 = (undefined8 *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308)
  ;
  puVar13 = (uint *)*puVar18;
  if (puVar13 != (uint *)0x0) goto LAB_143671318;
  while( true ) {
    uVar19 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar19 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar19 | 1;
      __tlregdtor(&LAB_143679e2b);
    }
    lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar15 = *(undefined4 **)(lVar25 + 0x310);
    *(undefined8 *)(lVar25 + 0x310) = 0;
    if (puVar15 == (undefined4 *)0x0) {
      puVar15 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar15 = 0xffffffff;
    *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
    puVar15[0x12] = 0;
    *puVar18 = puVar15;
    FUN_140217a48(puVar18);
    puVar13 = (uint *)*puVar18;
LAB_143671318:
    puVar37 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar26 = (uint *)(puVar37 + 0x16);
    uVar19 = puVar13[0x12];
    if (puVar26 <= puVar13 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
      LOCK();
      uVar33 = *puVar13;
      *puVar13 = *puVar13 + uVar19 + 1;
      UNLOCK();
      if ((uVar33 ^ uVar19) != 0xffffffff) break;
      puVar13 = (uint *)*puVar18;
      *puVar13 = 0xffffffff;
      *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
      puVar13[0x12] = 0;
      *puVar18 = puVar13;
      puVar37 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
      puVar26 = (uint *)(puVar37 + 0x16);
      uVar19 = 0;
      if (puVar26 <= puVar13 + 0x4000) {
        uVar19 = 1;
        goto LAB_143671398;
      }
    }
  }
  uVar19 = uVar19 + 1;
LAB_143671398:
  *(uint **)(puVar13 + 0x10) = puVar26;
  puVar13[0x12] = uVar19;
  FUN_1447247dc(puVar37,0);
  *puVar37 = &PTR_FUN_14aa68968;
  puVar37[0x15] = local_1f0;
  if (*(code **)(puVar37[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar37[0xe] + 0x18))(puVar37 + 0xe,puVar37 + 9);
  }
  puVar37[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar37[9] = puVar37;
  puVar37[10] = puVar37;
  lVar25 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8)
  ;
  if (lVar25 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(undefined8 *)(lVar25 + 0x30);
  }
  puVar37[0xf] = uVar16;
  puVar37[0x10] = 0xc80000527800b400;
  *(undefined4 *)((longlong)puVar37 + 0x1c) = 0;
  if (puVar37 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar37 + 1) = *(int *)(puVar37 + 1) + 1;
    UNLOCK();
  }
  local_158[0] = 1;
  FUN_1447439e4(puVar37);
  iVar32 = *(int *)(local_1f0 + 0x6d0);
  *(uint *)(local_1f0 + 0x6d0) = iVar32 + 1U;
  if (*(uint *)(local_1f0 + 0x6d4) < iVar32 + 1U) {
    FUN_14476a5c8(lVar9,iVar32);
  }
  if (*(longlong *)(local_1f0 + 0x6c8) != 0) {
    lVar9 = *(longlong *)(local_1f0 + 0x6c8);
  }
  *(undefined8 **)(lVar9 + (longlong)iVar32 * 8) = puVar37;
LAB_143671606:
  if ((local_a0 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143672114 FUN_143672114 body=624 status=ok
// SIG undefined FUN_143672114(void)

void FUN_143672114(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  if ((((DAT_14c760e34 != 0) &&
       (lVar6 = (ulonglong)DAT_14ca85550 * 0x3c,
       (*(byte *)((longlong)&DAT_14ca814d8 + lVar6 + 3) & 0x10) != 0)) &&
      (((&DAT_14ca814c8)[(ulonglong)DAT_14ca85550 * 0xf] & 0x20000000) != 0)) &&
     ((*(uint *)(&DAT_14ca814cc + lVar6) & 8) != 0)) {
    puVar3 = *(ulonglong **)(param_2 + 0x18);
    uVar5 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar1 = *(uint *)((longlong)puVar3 + 0x17c);
    if (uVar1 != uVar5) {
      *(uint *)((longlong)puVar3 + 0x17c) = uVar5;
      puVar7 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar7 + 3;
      if ((undefined8 *)puVar3[1] < puVar10) {
        FUN_140023dd8(puVar3,0x20);
        puVar7 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar7 + 3;
      }
      *puVar3 = (ulonglong)puVar10;
      *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
      *(undefined8 **)puVar3[6] = puVar7;
      puVar3[6] = (ulonglong)(puVar7 + 1);
      uVar2 = *(undefined4 *)((longlong)puVar3 + 0x17c);
      puVar7[1] = 0;
      *puVar7 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar7 + 2) = uVar2;
    }
    if (DAT_14c76197c != 0) {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,param_1 + 0x6a8,DAT_14c7585d4);
    }
    lVar6 = *(longlong *)(param_1 + 0x6c8);
    if (*(longlong *)(param_1 + 0x6c8) == 0) {
      lVar6 = param_1 + 0x6a8;
    }
    FUN_144717c65(lVar6,*(undefined4 *)(param_1 + 0x6d0));
    *(undefined4 *)(param_1 + 0x6d0) = 0;
    if (*(int *)(param_1 + 0x6d4) != 0) {
      FUN_14473dbc4(param_1 + 0x6a8,0);
    }
    if (*(longlong *)(param_1 + 0x6d8) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x698);
      lVar4 = **(longlong **)(lVar6 + 0x18);
      (**(code **)(*DAT_14ca83900 + 0x100))
                (DAT_14ca83900,&DAT_14ca85100,
                 *(undefined8 *)(lVar4 + 0x18 + (ulonglong)*(uint *)(lVar4 + 0x14) * 8));
      *(undefined8 *)(lVar6 + 0x18) = 0;
    }
    if (*(int *)(param_1 + 0x6e4) != 0) {
      uVar8 = FUN_144735dd8(param_2,param_1 + 0x148,0);
      FUN_14366f054(*(undefined8 *)(param_1 + 0x690),param_2,uVar8);
      uVar9 = FUN_144735dd8(param_2,param_1 + 0x268,0);
      FUN_14323c904(param_1 + 0x230,param_2,uVar9);
      FUN_14366e8ee(param_1,param_2,uVar8);
      *(int *)(param_1 + 0x3c8) = *(int *)(param_1 + 0x3c8) - *(int *)(param_1 + 0x6e4);
    }
    *(undefined1 *)(param_1 + 0x6e8) = 0;
    if (*(uint *)((longlong)puVar3 + 0x17c) != uVar1) {
      *(uint *)((longlong)puVar3 + 0x17c) = uVar1;
      puVar7 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar7 + 3;
      if ((undefined8 *)puVar3[1] < puVar10) {
        FUN_140023dd8(puVar3,0x20);
        puVar7 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar7 + 3;
      }
      *puVar3 = (ulonglong)puVar10;
      *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
      *(undefined8 **)puVar3[6] = puVar7;
      puVar3[6] = (ulonglong)(puVar7 + 1);
      uVar2 = *(undefined4 *)((longlong)puVar3 + 0x17c);
      puVar7[1] = 0;
      *puVar7 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar7 + 2) = uVar2;
    }
  }
  return;
}



// FUNCTION 143672384 FUN_143672384 body=71 status=ok
// SIG undefined FUN_143672384(void)

void FUN_143672384(longlong param_1)

{
  longlong lVar1;
  
  if ((((DAT_14c760e34 != 0) &&
       (lVar1 = (ulonglong)DAT_14ca85550 * 0x3c,
       (*(byte *)((longlong)&DAT_14ca814d8 + lVar1 + 3) & 0x10) != 0)) &&
      (((&DAT_14ca814c8)[(ulonglong)DAT_14ca85550 * 0xf] & 0x20000000) != 0)) &&
     ((*(uint *)(&DAT_14ca814cc + lVar1) & 8) != 0)) {
    FUN_1436723cc(*(undefined8 *)(param_1 + 0x698));
    return;
  }
  return;
}



// FUNCTION 1436723cc FUN_1436723cc body=1162 status=ok
// SIG undefined FUN_1436723cc(void)

void FUN_1436723cc(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  bool bVar17;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_61;
  undefined8 *local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(uint *)((longlong)param_1 + 0x24) != *(uint *)(param_1 + 4)) {
    lVar7 = param_1[1];
    lVar14 = (longlong)
             (int)((*(uint *)((longlong)param_1 + 0x24) + (int)param_1[5]) % *(uint *)(param_1 + 4))
             * 0x10;
    lVar15 = 0x58;
    puVar8 = (undefined8 *)FUN_14001cc68(0x58,0x10);
    FUN_1446f470e(&local_60,L"Nanite.StreamingRequestReadback",1);
    FUN_14047abb0(puVar8,local_60);
    *puVar8 = &PTR_FUN_14a37f800;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar12 = *(undefined8 **)(lVar7 + lVar14);
    *(undefined8 **)(lVar7 + lVar14) = puVar8;
    if (puVar12 != (undefined8 *)0x0) {
      do {
        lVar11 = *(longlong *)((longlong)puVar12 + lVar15 + -8);
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
              plVar9 = (longlong *)FUN_14001cc68(0x10,8);
              plVar9[1] = lVar11;
              plVar13 = DAT_14ca843c0;
              plVar10 = DAT_14ca843c8;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar9 = (longlong)plVar13;
                  LOCK();
                  bVar17 = plVar13 != DAT_14ca843c0;
                  plVar10 = plVar9;
                  if (bVar17) {
                    plVar13 = DAT_14ca843c0;
                    plVar10 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar10;
                  UNLOCK();
                } while (bVar17);
              }
              else {
                do {
                  *plVar9 = (longlong)plVar10;
                  LOCK();
                  bVar17 = plVar10 != DAT_14ca843c8;
                  plVar13 = plVar9;
                  if (bVar17) {
                    plVar10 = DAT_14ca843c8;
                    plVar13 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar13;
                  UNLOCK();
                } while (bVar17);
              }
            }
          }
        }
        lVar15 = lVar15 + -8;
      } while (lVar15 != 0x18);
      *puVar12 = &PTR_LAB_14a217b60;
      lVar15 = puVar12[1];
      if (lVar15 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar15 + 8);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar15 + 8);
          LOCK();
          uVar3 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar3 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(lVar15 + 0xd);
            plVar9 = (longlong *)FUN_14001cc68(0x10,8);
            plVar9[1] = lVar15;
            plVar13 = DAT_14ca843c0;
            plVar10 = DAT_14ca843c8;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar9 = (longlong)plVar13;
                LOCK();
                bVar17 = plVar13 != DAT_14ca843c0;
                plVar10 = plVar9;
                if (bVar17) {
                  plVar13 = DAT_14ca843c0;
                  plVar10 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar10;
                UNLOCK();
              } while (bVar17);
            }
            else {
              do {
                *plVar9 = (longlong)plVar10;
                LOCK();
                bVar17 = plVar10 != DAT_14ca843c8;
                plVar13 = plVar9;
                if (bVar17) {
                  plVar10 = DAT_14ca843c8;
                  plVar13 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar13;
                UNLOCK();
              } while (bVar17);
            }
          }
        }
      }
      FUN_1400020a8(puVar12);
    }
    *(undefined4 *)(lVar7 + lVar14 + 8) = *(undefined4 *)(*param_1 + 0x14);
    lVar15 = FUN_144735dd8(param_2,param_1,0);
    puVar2 = (ulonglong *)(param_2 + 0x70);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar12 = puVar8 + 4;
    if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
      FUN_140023dd8(puVar2,0x30);
      puVar8 = (undefined8 *)(*puVar2 + 0xf & 0xfffffffffffffff0);
      puVar12 = puVar8 + 4;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar12;
    *puVar8 = &PTR_FUN_14a20c998;
    puVar8[2] = 0;
    *(undefined4 *)(puVar8 + 3) = 0x80;
    iVar6 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar6 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar6 + 1U) {
      FUN_1448cfae8(param_2 + 0x98,iVar6);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar6 * 8) = puVar8;
    puVar8[2] = lVar15;
    *(undefined4 *)(puVar8 + 3) = 0x80;
    lVar11 = FUN_1406be90a();
    FUN_140069376(param_2);
    puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar16 + 0x39;
    if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
      FUN_140023dd8(puVar2,0x1d0);
      puVar16 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar16 + 0x39;
    }
    *puVar2 = (ulonglong)puVar12;
    local_58 = *(longlong *)(lVar11 + 0x48);
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
      UNLOCK();
    }
    local_78 = 2;
    local_60 = puVar8 + 2;
    local_50 = lVar11;
    FUN_140068f1a(puVar16,&local_61,&local_60,0x18);
    *puVar16 = &PTR_FUN_14aa68080;
    puVar16[0x37] = lVar7 + lVar14;
    puVar16[0x38] = lVar15;
    iVar6 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar6 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar6 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar6);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar6 * 8) = puVar16;
    *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_140069100(param_2,puVar16);
    cVar5 = *(char *)(lVar15 + 0x68);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar8 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
      FUN_140023dd8(puVar2,0x48);
      puVar8 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar8 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar12;
    puVar8[1] = *(undefined8 *)(lVar15 + 8);
    puVar8[2] = 0;
    *(undefined1 *)(puVar8 + 3) = 2;
    *(undefined8 *)((longlong)puVar8 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar8 + 5) = 0;
    *puVar8 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar8 + 6) = cVar5 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar8 + 0x31) = 0;
    puVar8[7] = lVar15;
    iVar6 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar6 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar6 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar6);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar6 * 8) = puVar8;
    *(int *)((longlong)puVar8 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    FUN_14367a6bb(param_2,puVar8);
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
    *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + 1;
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143672857 FUN_143672857 body=47 status=ok
// SIG undefined FUN_143672857(void)

void FUN_143672857(void)

{
  DAT_14cb00cc8 = &PTR_FUN_14aa68980;
  FUN_144725486(&DAT_14cb00cc8);
  FUN_145cd33cc(&DAT_14cb00cc8);
  return;
}



// FUNCTION 143672886 FUN_143672886 body=55 status=ok
// SIG undefined FUN_143672886(void)

void FUN_143672886(void)

{
  undefined8 uVar1;
  
  if (DAT_14caffd40 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caffd40 = FUN_14171c317(FUN_1463fc75a,uVar1,L"ENeuralProfileFormat");
  }
  return;
}



// FUNCTION 1436728bd FUN_1436728bd body=55 status=ok
// SIG undefined FUN_1436728bd(void)

void FUN_1436728bd(void)

{
  undefined8 uVar1;
  
  if (DAT_14caffd58 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caffd58 = FUN_14171c317(FUN_1463fc789,uVar1,L"ENeuralModelTileType");
  }
  return;
}



// FUNCTION 1436728f4 FUN_1436728f4 body=55 status=ok
// SIG undefined FUN_1436728f4(void)

void FUN_1436728f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14caffd70 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caffd70 = FUN_14171c317(FUN_1463fc7b8,uVar1,L"ETileOverlapResolveType");
  }
  return;
}



// FUNCTION 14367292b FUN_14367292b body=55 status=ok
// SIG undefined FUN_14367292b(void)

void FUN_14367292b(void)

{
  undefined8 uVar1;
  
  if (DAT_14caffd88 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caffd88 = FUN_14171c317(FUN_1463fc7e7,uVar1,L"ENeuralProfileRuntimeType");
  }
  return;
}



// FUNCTION 14367296e FUN_14367296e body=1191 status=ok
// SIG undefined FUN_14367296e(void)

void FUN_14367296e(undefined8 param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1436729ab;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1436729b0;
      goto LAB_1436729d8;
    }
  }
  else {
LAB_1436729ab:
    if (iVar6 != 0x10) {
LAB_1436729d8:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_1436729b0;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_1436729b0;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143672b38;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143679e2b);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143672b38:
          puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
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
            puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar15 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143672bb8;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143672bb8:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14aa68a90;
        puVar15[0x15] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar15[0xf] = uVar11;
        puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar6;
        if (puVar15 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
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
        local_48 = &PTR_LAB_14aa68a70;
        local_68[0] = &LAB_14367e288;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"RemoveNeuralProfile",&DAT_14cb0032c);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143672a6f;
    }
  }
LAB_1436729b0:
  FUN_14367da9e(param_1);
LAB_143672a6f:
  switchD_143c3d4dc::caseD_1d(param_1);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143672e16 FUN_143672e16 body=1711 status=ok
// SIG undefined FUN_143672e16(void)

void FUN_143672e16(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  ulonglong uVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined1 auStack_f8 [32];
  code **local_d8;
  undefined2 local_c8;
  undefined1 local_c6;
  undefined2 local_c0;
  undefined1 local_be;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_be = *(undefined1 *)(param_1 + 0x2a);
  local_c0 = *(undefined2 *)(param_1 + 0x28);
  lVar4 = *(longlong *)(param_1 + 0x30);
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
  }
  local_88 = *(undefined1 *)(param_1 + 0x68);
  local_b8 = *(undefined4 *)(param_1 + 0x38);
  uStack_b4 = *(undefined4 *)(param_1 + 0x3c);
  uStack_b0 = *(undefined4 *)(param_1 + 0x40);
  uStack_ac = *(undefined4 *)(param_1 + 0x44);
  local_a8 = *(undefined4 *)(param_1 + 0x48);
  uStack_a4 = *(undefined4 *)(param_1 + 0x4c);
  uStack_a0 = *(undefined4 *)(param_1 + 0x50);
  uStack_9c = *(undefined4 *)(param_1 + 0x54);
  local_98 = *(undefined4 *)(param_1 + 0x58);
  uStack_94 = *(undefined4 *)(param_1 + 0x5c);
  uStack_90 = *(undefined4 *)(param_1 + 0x60);
  uStack_8c = *(undefined4 *)(param_1 + 100);
  if (DAT_14cad8310 == (longlong *)0x0) {
    FUN_1446f470e(local_78,L"Renderer",1);
    pcVar6 = local_78[0];
    uVar14 = FUN_144a52528();
    DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar14,pcVar6);
  }
  (**(code **)(*DAT_14cad8310 + 0x1f8))();
  local_c6 = local_be;
  local_c8 = local_c0;
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
  }
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar17 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar17 != 2) {
      if (iVar17 != 1) goto LAB_143672ee1;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_143672ee6;
      goto LAB_143672f59;
    }
  }
  else {
LAB_143672ee1:
    if (iVar17 != 0x10) {
LAB_143672f59:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar17 = *(int *)(lVar5 + 0xc60), iVar17 == 2))
        goto LAB_143672ee6;
        if (iVar17 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143672ee6;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar2;
        if (puVar13 != (uint *)0x0) goto LAB_14367313f;
        do {
          uVar8 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar8 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar8 | 1;
            __tlregdtor(&LAB_143679e2b);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar2 = puVar12;
          FUN_140217a48(puVar2);
          puVar13 = (uint *)*puVar2;
LAB_14367313f:
          uVar15 = *(longlong *)(puVar13 + 0x10) + 7;
          uVar8 = puVar13[0x12];
          while( true ) {
            puVar16 = (undefined8 *)(uVar15 & 0xfffffffffffffff8);
            if (puVar16 + 0x1f <= puVar13 + 0x4000) {
              *(undefined8 **)(puVar13 + 0x10) = puVar16 + 0x1f;
              puVar13[0x12] = uVar8 + 1;
              FUN_1447247dc(puVar16,0);
              *puVar16 = &PTR_FUN_14aa68ae8;
              *(undefined2 *)(puVar16 + 0x15) = local_c8;
              *(undefined1 *)((longlong)puVar16 + 0xaa) = local_c6;
              puVar16[0x16] = lVar4;
              if ((lVar4 != 0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c(lVar4);
              }
              *(undefined1 *)(puVar16 + 0x1d) = local_88;
              *(undefined4 *)(puVar16 + 0x1b) = local_98;
              *(undefined4 *)((longlong)puVar16 + 0xdc) = uStack_94;
              *(undefined4 *)(puVar16 + 0x1c) = uStack_90;
              *(undefined4 *)((longlong)puVar16 + 0xe4) = uStack_8c;
              *(undefined4 *)(puVar16 + 0x19) = local_a8;
              *(undefined4 *)((longlong)puVar16 + 0xcc) = uStack_a4;
              *(undefined4 *)(puVar16 + 0x1a) = uStack_a0;
              *(undefined4 *)((longlong)puVar16 + 0xd4) = uStack_9c;
              *(undefined4 *)(puVar16 + 0x17) = local_b8;
              *(undefined4 *)((longlong)puVar16 + 0xbc) = uStack_b4;
              *(undefined4 *)(puVar16 + 0x18) = uStack_b0;
              *(undefined4 *)((longlong)puVar16 + 0xc4) = uStack_ac;
              puVar16[0x1e] = param_1;
              if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                uVar8 = DAT_14c7585c8 >> 10 & 3;
                iVar17 = 0;
                if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
                  iVar17 = 0;
                }
                else {
                  uVar15 = 2;
                }
              }
              else {
                iVar17 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                         *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                uVar15 = 5;
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
              lVar4 = *(longlong *)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
              if (lVar4 == 0) {
                uVar7 = 1;
                if ((char)uVar15 != '\x06') {
                  uVar7 = uVar15;
                }
                uVar15 = uVar7;
                uVar14 = 0;
              }
              else {
                if ((char)uVar15 == '\x06') {
                  uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
                }
                uVar14 = *(undefined8 *)(lVar4 + 0x30);
              }
              puVar16[0xf] = uVar14;
              puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
              *(int *)((longlong)puVar16 + 0x1c) = iVar17;
              if (puVar16 == (undefined8 *)0x0) {
                local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
                FUN_1447439e4(0);
              }
              else {
                LOCK();
                *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
                UNLOCK();
                local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
                FUN_1447439e4(puVar16);
                LOCK();
                piVar1 = (int *)(puVar16 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)*puVar16)(puVar16,1);
                }
              }
              goto LAB_143673077;
            }
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar3 = *puVar13;
            *puVar13 = *puVar13 + uVar8 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar8) != 0xffffffff) break;
            puVar13 = (uint *)*puVar2;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar2 = puVar13;
            uVar15 = (longlong)puVar13 + 0x5f;
            uVar8 = 0;
          }
        } while( true );
      }
      local_78[0] = (code *)0x0;
      plVar11 = (longlong *)FUN_14001cc68(0x58,8);
      *plVar11 = (longlong)&PTR_LAB_14aa68aa0;
      *(undefined1 *)((longlong)plVar11 + 10) = local_be;
      *(undefined2 *)(plVar11 + 1) = local_c0;
      plVar11[2] = lVar4;
      local_68 = plVar11;
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar4);
      }
      *(undefined1 *)(plVar11 + 9) = local_88;
      *(undefined4 *)(plVar11 + 7) = local_98;
      *(undefined4 *)((longlong)plVar11 + 0x3c) = uStack_94;
      *(undefined4 *)(plVar11 + 8) = uStack_90;
      *(undefined4 *)((longlong)plVar11 + 0x44) = uStack_8c;
      *(undefined4 *)(plVar11 + 5) = local_a8;
      *(undefined4 *)((longlong)plVar11 + 0x2c) = uStack_a4;
      *(undefined4 *)(plVar11 + 6) = uStack_a0;
      *(undefined4 *)((longlong)plVar11 + 0x34) = uStack_9c;
      *(undefined4 *)(plVar11 + 3) = local_b8;
      *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_b4;
      *(undefined4 *)(plVar11 + 4) = uStack_b0;
      *(undefined4 *)((longlong)plVar11 + 0x24) = uStack_ac;
      plVar11[10] = param_1;
      if (plVar11 != (longlong *)&DAT_fffffffffffffff8) {
        local_78[0] = FUN_14367e43c;
      }
      local_d8 = local_78;
      FUN_14005a792(&DAT_14ca9a440,L"UpdateNeuralProfile",&DAT_14cb00330);
      if (local_78[0] != (code *)0x0) {
        plVar11 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar11 = local_58;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      goto LAB_143673077;
    }
  }
LAB_143672ee6:
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
  }
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
  }
LAB_143673077:
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436734c6 FUN_1436734c6 body=69 status=ok
// SIG undefined FUN_1436734c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436734c6(void)

{
  _DAT_14caffde8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143673508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caffdf0,1);
  return;
}



// FUNCTION 14367350b FUN_14367350b body=69 status=ok
// SIG undefined FUN_14367350b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14367350b(void)

{
  _DAT_14caffe00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014367354d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caffe08,1);
  return;
}



// FUNCTION 143673550 FUN_143673550 body=69 status=ok
// SIG undefined FUN_143673550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143673550(void)

{
  _DAT_14caffe18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143673592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caffe20,1);
  return;
}



// FUNCTION 143673595 FUN_143673595 body=69 status=ok
// SIG undefined FUN_143673595(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143673595(void)

{
  _DAT_14caffe28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436735d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caffe30,1);
  return;
}



// FUNCTION 1436735da FUN_1436735da body=69 status=ok
// SIG undefined FUN_1436735da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436735da(void)

{
  _DAT_14caffe38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014367361c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caffe40,1);
  return;
}



// FUNCTION 14367361f FUN_14367361f body=69 status=ok
// SIG undefined FUN_14367361f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14367361f(void)

{
  _DAT_14caffe48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143673661. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caffe50,1);
  return;
}



// FUNCTION 143673664 FUN_143673664 body=69 status=ok
// SIG undefined FUN_143673664(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143673664(void)

{
  _DAT_14caffe58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436736a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caffe60,1);
  return;
}



// FUNCTION 1436736aa FUN_1436736aa body=178 status=ok
// SIG undefined FUN_1436736aa(void)

int FUN_1436736aa(longlong param_1,undefined8 param_2,byte param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [40];
  int local_50 [2];
  undefined4 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = 0;
  if (param_3 < 4) {
    uVar1 = *(undefined4 *)(&DAT_14aa69504 + (ulonglong)param_3 * 4);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  FUN_147cd586a(param_1 + 0x30,local_50);
  *local_48 = 0xffffffff;
  local_48[1] = uVar1;
  *(undefined8 *)(local_48 + 2) = param_2;
  local_48[4] = 0;
  *(int *)(*(longlong *)(param_1 + 0x30) + (longlong)local_50[0] * 0x18) = local_50[0];
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return local_50[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14367375e FUN_14367375e body=56 status=ok
// SIG undefined FUN_14367375e(void)

void FUN_14367375e(longlong param_1,undefined4 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  FUN_147cd5950(param_1 + 0x30,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014367378f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 143673796 FUN_143673796 body=229 status=ok
// SIG undefined FUN_143673796(void)

undefined4 FUN_143673796(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_c8 [44];
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  local_68 = 0;
  local_60 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0xff;
  local_34 = 0;
  local_9c = 0xffffffff;
  FUN_1448156a8(&local_98,&local_9c,param_2);
  local_34 = 1;
  local_38 = param_3;
  uVar1 = FUN_147ccd180(param_1 + 0xb0,&local_98);
  FUN_147ccd1fe(&local_98);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14367387c FUN_14367387c body=387 status=ok
// SIG undefined FUN_14367387c(void)

void FUN_14367387c(longlong param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  int *piVar11;
  
  lVar6 = (longlong)param_2 * 0x68;
  piVar9 = (int *)(*(longlong *)(param_1 + 0xb0) + 100 + lVar6);
  *piVar9 = *piVar9 + -1;
  if (*piVar9 == 0) {
    FUN_147ccd1fe(lVar6 + *(longlong *)(param_1 + 0xb0));
    FUN_147cd5bb2(param_1 + 0xb0,param_2);
    if (*(int *)(param_1 + 0x278) != *(int *)(param_1 + 0x2a4)) {
      lVar6 = *(longlong *)(param_1 + 0x2b0);
      if (*(longlong *)(param_1 + 0x2b0) == 0) {
        lVar6 = param_1 + 0x2a8;
      }
      piVar9 = (int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x2b8) - 1U & (longlong)param_2) * 4);
      do {
        iVar3 = *piVar9;
        lVar6 = (longlong)iVar3;
        if (lVar6 == -1) {
          return;
        }
        piVar1 = (int *)(*(longlong *)(param_1 + 0x270) + lVar6 * 0xc);
        iVar4 = *piVar1;
        if (iVar4 == param_2) {
          lVar10 = *(longlong *)(param_1 + 0x2b0);
          if (*(longlong *)(param_1 + 0x2b0) == 0) {
            lVar10 = param_1 + 0x2a8;
          }
          iVar8 = *(int *)(lVar10 + (longlong)piVar1[2] * 4);
          if (iVar8 == iVar3) {
            piVar11 = (int *)(lVar10 + (longlong)piVar1[2] * 4);
          }
          else {
            do {
              piVar11 = (int *)(*(longlong *)(param_1 + 0x270) + (longlong)iVar8 * 0xc + 4);
              iVar8 = *piVar11;
            } while (iVar8 != iVar3);
          }
          *piVar11 = piVar1[1];
          lVar10 = *(longlong *)(param_1 + 0x270);
          if (*(int *)(param_1 + 0x2a4) != 0) {
            *(int *)(lVar10 + (longlong)*(int *)(param_1 + 0x2a0) * 0xc) = iVar3;
          }
          *(undefined4 *)(lVar10 + lVar6 * 0xc) = 0xffffffff;
          uVar7 = 0xffffffff;
          if (0 < *(int *)(param_1 + 0x2a4)) {
            uVar7 = *(undefined4 *)(param_1 + 0x2a0);
          }
          *(undefined4 *)(lVar10 + lVar6 * 0xc + 4) = uVar7;
          *(int *)(param_1 + 0x2a0) = iVar3;
          *(int *)(param_1 + 0x2a4) = *(int *)(param_1 + 0x2a4) + 1;
          lVar6 = *(longlong *)(param_1 + 0x290);
          if (*(longlong *)(param_1 + 0x290) == 0) {
            lVar6 = param_1 + 0x280;
          }
          iVar8 = iVar3 + 0x1f;
          if (-1 < iVar3) {
            iVar8 = iVar3;
          }
          bVar5 = (byte)iVar3 & 0x1f;
          puVar2 = (uint *)(lVar6 + (longlong)(iVar8 >> 5) * 4);
          *puVar2 = *puVar2 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
        }
        else {
          piVar9 = piVar1 + 1;
        }
      } while (iVar4 != param_2);
    }
  }
  return;
}



// FUNCTION 143673a00 FUN_143673a00 body=680 status=ok
// SIG undefined FUN_143673a00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_143673a00(longlong param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  DWORD DVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_88 [40];
  DWORD local_60;
  undefined1 local_5c [4];
  int local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  FUN_147cd5c26(param_1 + 0xe8,local_58);
  *local_50 = 0;
  local_50[1] = 0;
  *(undefined4 *)(local_50 + 2) = 0;
  local_50[3] = 0;
  local_50[4] = 0;
  *(undefined2 *)(local_50 + 5) = 0xffff;
  *(undefined1 *)((longlong)local_50 + 0x2a) = 0;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  *(longlong *)(lVar4 + (longlong)local_58[0] * 0x30) = param_2;
  *(undefined8 *)(lVar4 + 8 + (longlong)local_58[0] * 0x30) = 0;
  if ((longlong)*(int *)(param_2 + 0x98) != -1) {
    lVar4 = *(longlong *)(param_1 + 0xb0);
    lVar12 = (longlong)*(int *)(param_2 + 0x98) * 0x68;
    *(int *)(*(longlong *)(lVar4 + lVar12) + (longlong)*(char *)(param_2 + 0x9c) * 4) = local_58[0];
    piVar1 = (int *)(lVar4 + 100 + lVar12);
    *piVar1 = *piVar1 + 1;
    cVar2 = *(char *)(param_2 + 0x9c);
    iVar11 = *(int *)(lVar4 + 8 + lVar12) - _DAT_14c7619d4;
    if (iVar11 <= cVar2) {
      FUN_1447cbafe(param_1 + 0x178,local_5c,local_58,0);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca97070) {
      FUN_144b3d300(&DAT_14ca97070);
      if (DAT_14ca97070 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar9 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
        if (plVar9 == (longlong *)0x0) {
          DAT_14ca97068 = 0;
        }
        else {
          DAT_14ca97068 = (**(code **)(*plVar9 + 0x68))(plVar9);
        }
        _Init_thread_footer(&DAT_14ca97070);
      }
    }
    lVar5 = DAT_14ca97068;
    bVar13 = true;
    cVar6 = DAT_14ca96da8;
    if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
      iVar3 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      cVar6 = '\x02';
      if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
        uVar10 = 0;
      }
      else if (iVar3 == 1) {
        local_60 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        uVar10 = (ulonglong)(local_60 != DVar8);
        cVar6 = DAT_14ca96da8;
      }
      else {
        uVar10 = 1;
      }
      bVar13 = *(int *)(lVar5 + uVar10 * 4) != 0;
    }
    if (((bVar13) && (cVar6 != '\0')) &&
       ((int)(uint)*(byte *)(lVar4 + lVar12 + 0x60) <= (int)*(char *)(param_2 + 0x9c))) {
      bVar7 = FUN_147430d07();
      if ((cVar2 < iVar11 & bVar7) == 0) {
        FUN_1447cbafe(param_1 + 0x2c0,local_5c,local_58,0);
      }
    }
  }
  (**(code **)(*DAT_14ca964f8 + 0x58))(DAT_14ca964f8,local_58[0]);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_58[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143673caa FUN_143673caa body=1856 status=ok
// SIG undefined FUN_143673caa(void)

void FUN_143673caa(longlong param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  uVar8 = (ulonglong)param_2;
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0xe8) + uVar8 * 0x30);
  lVar5 = (longlong)*(short *)(*(longlong *)(param_1 + 0xe8) + 0x28 + uVar8 * 0x30);
  if (lVar5 != -1) {
    FUN_147ccd27c(lVar5 * 0x18 + *(longlong *)(param_1 + 0x310));
    *(undefined2 *)(plVar1 + 5) = 0xffff;
  }
  lVar5 = (longlong)*(int *)(*plVar1 + 0x98);
  if (lVar5 != -1) {
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(param_1 + 0xb0) + lVar5 * 0x68) +
     (longlong)*(char *)(*plVar1 + 0x9c) * 4) = 0xffffffff;
    FUN_14367387c(param_1,*(undefined4 *)(*plVar1 + 0x98));
  }
  if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
    lVar5 = *(longlong *)(param_1 + 0x160);
    if (*(longlong *)(param_1 + 0x160) == 0) {
      lVar5 = param_1 + 0x158;
    }
    piVar12 = (int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x168) - 1U & uVar8) * 4);
    iVar6 = 0;
    do {
      iVar3 = *piVar12;
      lVar5 = (longlong)iVar3;
      if (lVar5 == -1) break;
      piVar13 = (int *)(lVar5 * 0xc + *(longlong *)(param_1 + 0x120));
      iVar11 = *piVar13;
      if (iVar11 == param_2) {
        lVar9 = *(longlong *)(param_1 + 0x160);
        if (*(longlong *)(param_1 + 0x160) == 0) {
          lVar9 = param_1 + 0x158;
        }
        iVar7 = *(int *)(lVar9 + (longlong)piVar13[2] * 4);
        if (iVar7 == iVar3) {
          piVar14 = (int *)(lVar9 + (longlong)piVar13[2] * 4);
        }
        else {
          do {
            piVar14 = (int *)((longlong)iVar7 * 0xc + 4 + *(longlong *)(param_1 + 0x120));
            iVar7 = *piVar14;
          } while (iVar7 != iVar3);
        }
        *piVar14 = piVar13[1];
        lVar9 = *(longlong *)(param_1 + 0x120);
        if (*(int *)(param_1 + 0x154) != 0) {
          *(int *)(lVar9 + (longlong)*(int *)(param_1 + 0x150) * 0xc) = iVar3;
        }
        *(undefined4 *)(lVar9 + lVar5 * 0xc) = 0xffffffff;
        uVar10 = 0xffffffff;
        if (0 < *(int *)(param_1 + 0x154)) {
          uVar10 = *(undefined4 *)(param_1 + 0x150);
        }
        *(undefined4 *)(lVar9 + lVar5 * 0xc + 4) = uVar10;
        *(int *)(param_1 + 0x150) = iVar3;
        *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + 1;
        lVar5 = *(longlong *)(param_1 + 0x140);
        if (*(longlong *)(param_1 + 0x140) == 0) {
          lVar5 = param_1 + 0x130;
        }
        iVar7 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar7 = iVar3;
        }
        bVar4 = (byte)iVar3 & 0x1f;
        puVar2 = (uint *)(lVar5 + (longlong)(iVar7 >> 5) * 4);
        *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
        iVar6 = iVar6 + 1;
      }
      else {
        piVar12 = piVar13 + 1;
      }
    } while (iVar11 != param_2);
    if (0 < iVar6) {
      *(longlong *)(param_1 + 0x170) =
           *(longlong *)(param_1 + 0x170) - (ulonglong)*(uint *)(plVar1 + 2);
    }
  }
  if (*(int *)(param_1 + 0x180) != *(int *)(param_1 + 0x1ac)) {
    lVar5 = *(longlong *)(param_1 + 0x1b8);
    if (*(longlong *)(param_1 + 0x1b8) == 0) {
      lVar5 = param_1 + 0x1b0;
    }
    piVar12 = (int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x1c0) - 1U & uVar8) * 4);
    iVar6 = 0;
    do {
      iVar3 = *piVar12;
      lVar5 = (longlong)iVar3;
      if (lVar5 == -1) break;
      piVar13 = (int *)(lVar5 * 0xc + *(longlong *)(param_1 + 0x178));
      iVar11 = *piVar13;
      if (iVar11 == param_2) {
        lVar9 = *(longlong *)(param_1 + 0x1b8);
        if (*(longlong *)(param_1 + 0x1b8) == 0) {
          lVar9 = param_1 + 0x1b0;
        }
        iVar7 = *(int *)(lVar9 + (longlong)piVar13[2] * 4);
        if (iVar7 == iVar3) {
          piVar14 = (int *)(lVar9 + (longlong)piVar13[2] * 4);
        }
        else {
          do {
            piVar14 = (int *)((longlong)iVar7 * 0xc + 4 + *(longlong *)(param_1 + 0x178));
            iVar7 = *piVar14;
          } while (iVar7 != iVar3);
        }
        *piVar14 = piVar13[1];
        lVar9 = *(longlong *)(param_1 + 0x178);
        if (*(int *)(param_1 + 0x1ac) != 0) {
          *(int *)(lVar9 + (longlong)*(int *)(param_1 + 0x1a8) * 0xc) = iVar3;
        }
        *(undefined4 *)(lVar9 + lVar5 * 0xc) = 0xffffffff;
        uVar10 = 0xffffffff;
        if (0 < *(int *)(param_1 + 0x1ac)) {
          uVar10 = *(undefined4 *)(param_1 + 0x1a8);
        }
        *(undefined4 *)(lVar9 + lVar5 * 0xc + 4) = uVar10;
        *(int *)(param_1 + 0x1a8) = iVar3;
        *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
        lVar5 = *(longlong *)(param_1 + 0x198);
        if (*(longlong *)(param_1 + 0x198) == 0) {
          lVar5 = param_1 + 0x188;
        }
        iVar7 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar7 = iVar3;
        }
        bVar4 = (byte)iVar3 & 0x1f;
        puVar2 = (uint *)(lVar5 + (longlong)(iVar7 >> 5) * 4);
        *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
        iVar6 = iVar6 + 1;
      }
      else {
        piVar12 = piVar13 + 1;
      }
    } while (iVar11 != param_2);
    if (0 < iVar6) {
      *(longlong *)(param_1 + 0x1c8) =
           *(longlong *)(param_1 + 0x1c8) - (ulonglong)*(uint *)(plVar1 + 2);
    }
  }
  if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x204)) {
    lVar5 = *(longlong *)(param_1 + 0x210);
    if (*(longlong *)(param_1 + 0x210) == 0) {
      lVar5 = param_1 + 0x208;
    }
    piVar12 = (int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x218) - 1U & uVar8) * 4);
    do {
      iVar6 = *piVar12;
      lVar5 = (longlong)iVar6;
      if (lVar5 == -1) break;
      piVar13 = (int *)(*(longlong *)(param_1 + 0x1d0) + lVar5 * 0xc);
      iVar3 = *piVar13;
      if (iVar3 == param_2) {
        lVar9 = *(longlong *)(param_1 + 0x210);
        if (*(longlong *)(param_1 + 0x210) == 0) {
          lVar9 = param_1 + 0x208;
        }
        iVar11 = *(int *)(lVar9 + (longlong)piVar13[2] * 4);
        if (iVar11 == iVar6) {
          piVar14 = (int *)(lVar9 + (longlong)piVar13[2] * 4);
        }
        else {
          do {
            piVar14 = (int *)(*(longlong *)(param_1 + 0x1d0) + (longlong)iVar11 * 0xc + 4);
            iVar11 = *piVar14;
          } while (iVar11 != iVar6);
        }
        *piVar14 = piVar13[1];
        lVar9 = *(longlong *)(param_1 + 0x1d0);
        if (*(int *)(param_1 + 0x204) != 0) {
          *(int *)(lVar9 + (longlong)*(int *)(param_1 + 0x200) * 0xc) = iVar6;
        }
        *(undefined4 *)(lVar9 + lVar5 * 0xc) = 0xffffffff;
        uVar10 = 0xffffffff;
        if (0 < *(int *)(param_1 + 0x204)) {
          uVar10 = *(undefined4 *)(param_1 + 0x200);
        }
        *(undefined4 *)(lVar9 + lVar5 * 0xc + 4) = uVar10;
        *(int *)(param_1 + 0x200) = iVar6;
        *(int *)(param_1 + 0x204) = *(int *)(param_1 + 0x204) + 1;
        lVar5 = *(longlong *)(param_1 + 0x1f0);
        if (*(longlong *)(param_1 + 0x1f0) == 0) {
          lVar5 = param_1 + 0x1e0;
        }
        iVar11 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar11 = iVar6;
        }
        bVar4 = (byte)iVar6 & 0x1f;
        puVar2 = (uint *)(lVar5 + (longlong)(iVar11 >> 5) * 4);
        *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      }
      else {
        piVar12 = piVar13 + 1;
      }
    } while (iVar3 != param_2);
  }
  FUN_147cd5d14(param_1 + 0xe8,param_2);
  if (*(int *)(param_1 + 0x228) != *(int *)(param_1 + 0x254)) {
    lVar5 = *(longlong *)(param_1 + 0x260);
    if (*(longlong *)(param_1 + 0x260) == 0) {
      lVar5 = param_1 + 600;
    }
    piVar12 = (int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x268) - 1U & uVar8) * 4);
    do {
      iVar6 = *piVar12;
      lVar5 = (longlong)iVar6;
      if (lVar5 == -1) break;
      piVar13 = (int *)(*(longlong *)(param_1 + 0x220) + lVar5 * 0xc);
      iVar3 = *piVar13;
      if (iVar3 == param_2) {
        lVar9 = *(longlong *)(param_1 + 0x260);
        if (*(longlong *)(param_1 + 0x260) == 0) {
          lVar9 = param_1 + 600;
        }
        iVar11 = *(int *)(lVar9 + (longlong)piVar13[2] * 4);
        if (iVar11 == iVar6) {
          piVar14 = (int *)(lVar9 + (longlong)piVar13[2] * 4);
        }
        else {
          do {
            piVar14 = (int *)(*(longlong *)(param_1 + 0x220) + (longlong)iVar11 * 0xc + 4);
            iVar11 = *piVar14;
          } while (iVar11 != iVar6);
        }
        *piVar14 = piVar13[1];
        lVar9 = *(longlong *)(param_1 + 0x220);
        if (*(int *)(param_1 + 0x254) != 0) {
          *(int *)(lVar9 + (longlong)*(int *)(param_1 + 0x250) * 0xc) = iVar6;
        }
        *(undefined4 *)(lVar9 + lVar5 * 0xc) = 0xffffffff;
        uVar10 = 0xffffffff;
        if (0 < *(int *)(param_1 + 0x254)) {
          uVar10 = *(undefined4 *)(param_1 + 0x250);
        }
        *(undefined4 *)(lVar9 + lVar5 * 0xc + 4) = uVar10;
        *(int *)(param_1 + 0x250) = iVar6;
        *(int *)(param_1 + 0x254) = *(int *)(param_1 + 0x254) + 1;
        lVar5 = *(longlong *)(param_1 + 0x240);
        if (*(longlong *)(param_1 + 0x240) == 0) {
          lVar5 = param_1 + 0x230;
        }
        iVar11 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar11 = iVar6;
        }
        bVar4 = (byte)iVar6 & 0x1f;
        puVar2 = (uint *)(lVar5 + (longlong)(iVar11 >> 5) * 4);
        *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      }
      else {
        piVar12 = piVar13 + 1;
      }
    } while (iVar3 != param_2);
  }
  if (*(int *)(param_1 + 0x2c8) != *(int *)(param_1 + 0x2f4)) {
    lVar5 = *(longlong *)(param_1 + 0x300);
    if (*(longlong *)(param_1 + 0x300) == 0) {
      lVar5 = param_1 + 0x2f8;
    }
    piVar12 = (int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x308) - 1U & uVar8) * 4);
    do {
      iVar6 = *piVar12;
      lVar5 = (longlong)iVar6;
      if (lVar5 == -1) break;
      piVar13 = (int *)(*(longlong *)(param_1 + 0x2c0) + lVar5 * 0xc);
      iVar3 = *piVar13;
      if (iVar3 == param_2) {
        lVar9 = *(longlong *)(param_1 + 0x300);
        if (*(longlong *)(param_1 + 0x300) == 0) {
          lVar9 = param_1 + 0x2f8;
        }
        iVar11 = *(int *)(lVar9 + (longlong)piVar13[2] * 4);
        if (iVar11 == iVar6) {
          piVar14 = (int *)(lVar9 + (longlong)piVar13[2] * 4);
        }
        else {
          do {
            piVar14 = (int *)(*(longlong *)(param_1 + 0x2c0) + (longlong)iVar11 * 0xc + 4);
            iVar11 = *piVar14;
          } while (iVar11 != iVar6);
        }
        *piVar14 = piVar13[1];
        lVar9 = *(longlong *)(param_1 + 0x2c0);
        if (*(int *)(param_1 + 0x2f4) != 0) {
          *(int *)(lVar9 + (longlong)*(int *)(param_1 + 0x2f0) * 0xc) = iVar6;
        }
        *(undefined4 *)(lVar9 + lVar5 * 0xc) = 0xffffffff;
        uVar10 = 0xffffffff;
        if (0 < *(int *)(param_1 + 0x2f4)) {
          uVar10 = *(undefined4 *)(param_1 + 0x2f0);
        }
        *(undefined4 *)(lVar9 + lVar5 * 0xc + 4) = uVar10;
        *(int *)(param_1 + 0x2f0) = iVar6;
        *(int *)(param_1 + 0x2f4) = *(int *)(param_1 + 0x2f4) + 1;
        lVar5 = *(longlong *)(param_1 + 0x2e0);
        if (*(longlong *)(param_1 + 0x2e0) == 0) {
          lVar5 = param_1 + 0x2d0;
        }
        iVar11 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar11 = iVar6;
        }
        bVar4 = (byte)iVar6 & 0x1f;
        puVar2 = (uint *)(lVar5 + (longlong)(iVar11 >> 5) * 4);
        *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      }
      else {
        piVar12 = piVar13 + 1;
      }
    } while (iVar3 != param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001436743e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  return;
}



// FUNCTION 1436743ea FUN_1436743ea body=726 status=ok
// SIG undefined FUN_1436743ea(void)

void FUN_1436743ea(longlong param_1,undefined8 param_2,int param_3,byte param_4)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)param_3 * 0x68);
  bVar3 = *(byte *)(*(longlong *)(param_1 + 0xb0) + 0x60 + (longlong)param_3 * 0x68);
  if (bVar3 < param_4) {
    iVar8 = (uint)param_4 - (uint)bVar3;
    local_58 = 0;
    uStack_50 = 0;
    local_60 = param_2;
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8);
    }
    FUN_1417b3222(&local_58);
    uVar9 = (ulonglong)*(byte *)(plVar1 + 0xc);
    if (*(byte *)(plVar1 + 0xc) < param_4) {
      do {
        lVar6 = (longlong)*(int *)(*plVar1 + uVar9 * 4);
        if ((lVar6 != -1) &&
           (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + lVar6 * 0x30),
           (*(byte *)(lVar6 + 0xa0) & 8) == 0)) {
          FUN_147427ff8(lVar6,&local_60);
        }
        uVar9 = uVar9 + 1;
      } while (param_4 != uVar9);
    }
    if ((int)uStack_50 != 0) {
      (**(code **)(*DAT_14ca83900 + 0x148))(DAT_14ca83900,local_60,&local_58);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca97070) && (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar7 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
      if (plVar7 == (longlong *)0x0) {
        DAT_14ca97068 = 0;
      }
      else {
        DAT_14ca97068 = (**(code **)(*plVar7 + 0x68))(plVar7);
      }
      _Init_thread_footer(&DAT_14ca97070);
    }
    lVar6 = DAT_14ca97068;
    bVar10 = true;
    cVar2 = DAT_14ca96da8;
    if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
      iVar8 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      cVar2 = '\x02';
      if (((iVar8 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar8 == 2)) {
        uVar9 = 0;
      }
      else if (iVar8 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        uVar9 = (ulonglong)(DVar4 != DVar5);
        cVar2 = DAT_14ca96da8;
      }
      else {
        uVar9 = 1;
      }
      bVar10 = *(int *)(lVar6 + uVar9 * 4) != 0;
    }
    if (((bVar10) && (cVar2 != '\0')) &&
       ((cVar2 = FUN_147430d07(), cVar2 == '\0' &&
        (bVar3 = *(byte *)(plVar1 + 0xc), param_4 < bVar3)))) {
      uVar9 = (ulonglong)param_4;
      lVar6 = (ulonglong)param_4 << 2;
      do {
        if (*(int *)(*plVar1 + lVar6) != -1) {
          FUN_1447cbafe(param_1 + 0x2c0,&local_60,*plVar1 + lVar6,0);
          bVar3 = *(byte *)(plVar1 + 0xc);
        }
        uVar9 = uVar9 + 1;
        lVar6 = lVar6 + 4;
      } while (uVar9 < bVar3);
    }
  }
  *(byte *)(plVar1 + 0xc) = param_4;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436746ca FUN_1436746ca body=10361 status=ok
// SIG undefined FUN_1436746ca(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436746ca(longlong *param_1,undefined1 *param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  byte bVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  DWORD DVar15;
  DWORD DVar16;
  undefined ********ppppppppuVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  uint *puVar22;
  int *piVar23;
  undefined1 *puVar24;
  longlong lVar25;
  longlong *******ppppppplVar26;
  undefined ***pppuVar27;
  longlong lVar28;
  undefined **ppuVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  undefined1 **ppuVar33;
  undefined **ppuVar34;
  ulonglong uVar35;
  undefined ***pppuVar36;
  int *piVar37;
  int *piVar38;
  uint *puVar39;
  uint *puVar40;
  uint *puVar41;
  longlong *plVar42;
  undefined **ppuVar43;
  undefined **ppuVar44;
  uint uVar45;
  undefined **ppuVar46;
  undefined **ppuVar47;
  int iVar48;
  longlong *plVar49;
  undefined **ppuVar50;
  undefined **ppuVar51;
  byte bVar52;
  ulonglong uVar53;
  undefined **ppuVar54;
  ulonglong uVar55;
  bool bVar56;
  float fVar57;
  undefined1 auStack_458 [32];
  longlong *local_438;
  undefined ***local_428;
  undefined ***local_420;
  uint *local_418;
  undefined1 *local_410;
  ulonglong local_408;
  longlong *local_400;
  longlong *local_3f8;
  ulonglong local_3f0;
  uint *local_3e8;
  LPCRITICAL_SECTION local_3e0;
  undefined **local_3d8;
  int local_3d0;
  undefined **local_3c8;
  undefined8 uStack_3c0;
  undefined1 *local_3b8;
  ulonglong uStack_3b0;
  longlong *******local_3a8 [2];
  undefined ********local_398;
  int local_390;
  uint uStack_38c;
  int iStack_388;
  int iStack_384;
  undefined1 local_380 [8];
  undefined1 *local_378;
  int local_370;
  undefined **local_368;
  longlong local_360;
  undefined8 local_358;
  longlong local_350;
  undefined4 local_348;
  ulonglong local_340;
  longlong *local_310;
  longlong local_2f0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  ulonglong local_2c8;
  undefined8 local_2c0;
  longlong local_290;
  undefined8 local_288;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_458;
  local_410 = param_2;
  if (DAT_14c872bf0 != '\0') goto LAB_14367558c;
  local_3e0 = (LPCRITICAL_SECTION)(param_1 + 0x11);
  EnterCriticalSection(local_3e0);
  if (DAT_14caffe68 == '\x01') {
    DAT_14caffe68 = '\0';
    local_428 = (undefined ***)(param_1 + 0x2f);
    iVar30 = 0;
    FUN_14068ded2(local_428,0);
    param_1[0x39] = 0;
    puVar40 = (uint *)(param_1 + 0x1f);
    iVar11 = (int)param_1[0x22];
    if (iVar11 == 0) {
      uVar53 = 1;
      uVar55 = 0;
      iVar10 = 0;
    }
    else {
      puVar22 = (uint *)param_1[0x21];
      if ((uint *)param_1[0x21] == (uint *)0x0) {
        puVar22 = puVar40;
      }
      uVar32 = *puVar22;
      if (uVar32 == 0) {
        iVar30 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar30 = iVar11 + -1;
        }
        uVar55 = 0;
        uVar53 = (ulonglong)(uint)(iVar30 >> 5);
        if (iVar30 >> 5 < 1) {
          uVar53 = uVar55;
        }
        iVar30 = 0;
        do {
          if (uVar53 == uVar55) goto LAB_1436747e4;
          iVar30 = iVar30 + 0x20;
          uVar32 = puVar22[uVar55 + 1];
          uVar55 = uVar55 + 1;
        } while (uVar32 == 0);
      }
      else {
        iVar30 = 0;
        uVar55 = 0;
      }
      uVar53 = (ulonglong)(-uVar32 & uVar32);
      uVar35 = uVar53 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      iVar10 = (iVar30 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
      if (iVar11 <= iVar10) {
        iVar10 = iVar11;
      }
    }
    if (iVar10 != iVar11) {
      local_3f8 = param_1 + 0x58;
      local_420 = (undefined ***)(param_1 + 0x41);
      local_400 = param_1 + 0x3c;
      uVar32 = 0xffffffff;
      local_418 = puVar40;
      do {
        lVar25 = *(longlong *)(param_1[0x1d] + (longlong)iVar10 * 0x30);
        if ((longlong)*(int *)(lVar25 + 0x98) != -1) {
          plVar42 = (longlong *)(param_1[0x1d] + (longlong)iVar10 * 0x30);
          if ((int)*(char *)(lVar25 + 0x9c) <
              *(int *)(param_1[0x16] + 8 + (longlong)*(int *)(lVar25 + 0x98) * 0x68) -
              _DAT_14c7619d4) {
            cVar9 = FUN_147430d07();
            if ((cVar9 != '\0') && (*(longlong *)(*plVar42 + 0x90) != 0)) {
              FUN_1474280ce();
            }
          }
          else {
            FUN_1447cbafe(local_428,&local_368,lVar25 + 0xa8,0);
            param_1[0x39] = param_1[0x39] + (ulonglong)*(uint *)(plVar42 + 2);
            plVar21 = (longlong *)*plVar42;
            if (((*(uint *)(plVar21 + 0x14) & 8) != 0) && (plVar21[6] == -1)) {
              *(uint *)(plVar21 + 0x14) = *(uint *)(plVar21 + 0x14) & 0xfffffff7;
              (**(code **)(*plVar21 + 8))(plVar21,local_410);
              plVar21 = (longlong *)*plVar42;
            }
            cVar9 = FUN_143676f44(param_1,local_410,(int)plVar21[0x15]);
            if (cVar9 == '\0') {
              FUN_1447cbafe(local_3f8,&local_368,*plVar42 + 0xa8,0);
            }
            if ((int)param_1[0x3b] != *(int *)((longlong)param_1 + 0x204)) {
              iVar10 = *(int *)(*plVar42 + 0xa8);
              pppuVar36 = (undefined ***)param_1[0x42];
              if ((undefined ***)param_1[0x42] == (undefined ***)0x0) {
                pppuVar36 = local_420;
              }
              piVar23 = (int *)((longlong)pppuVar36 +
                               ((longlong)(int)param_1[0x43] - 1U & (longlong)iVar10) * 4);
              do {
                iVar31 = *piVar23;
                lVar25 = (longlong)iVar31;
                if (lVar25 == -1) break;
                piVar38 = (int *)(param_1[0x3a] + lVar25 * 0xc);
                iVar13 = *piVar38;
                if (iVar13 == iVar10) {
                  pppuVar36 = (undefined ***)param_1[0x42];
                  if ((undefined ***)param_1[0x42] == (undefined ***)0x0) {
                    pppuVar36 = local_420;
                  }
                  iVar48 = *(int *)((longlong)pppuVar36 + (longlong)piVar38[2] * 4);
                  if (iVar48 == iVar31) {
                    piVar37 = (int *)((longlong)pppuVar36 + (longlong)piVar38[2] * 4);
                  }
                  else {
                    do {
                      piVar37 = (int *)(param_1[0x3a] + (longlong)iVar48 * 0xc + 4);
                      iVar48 = *piVar37;
                    } while (iVar48 != iVar31);
                  }
                  *piVar37 = piVar38[1];
                  lVar28 = param_1[0x3a];
                  if (*(int *)((longlong)param_1 + 0x204) != 0) {
                    *(int *)(lVar28 + (longlong)(int)param_1[0x40] * 0xc) = iVar31;
                  }
                  *(undefined4 *)(lVar28 + lVar25 * 0xc) = 0xffffffff;
                  uVar12 = 0xffffffff;
                  if (0 < *(int *)((longlong)param_1 + 0x204)) {
                    uVar12 = (undefined4)param_1[0x40];
                  }
                  *(undefined4 *)(lVar28 + lVar25 * 0xc + 4) = uVar12;
                  *(int *)(param_1 + 0x40) = iVar31;
                  *(int *)((longlong)param_1 + 0x204) = *(int *)((longlong)param_1 + 0x204) + 1;
                  plVar42 = (longlong *)param_1[0x3e];
                  if ((longlong *)param_1[0x3e] == (longlong *)0x0) {
                    plVar42 = local_400;
                  }
                  iVar48 = iVar31 + 0x1f;
                  if (-1 < iVar31) {
                    iVar48 = iVar31;
                  }
                  bVar52 = (byte)iVar31 & 0x1f;
                  puVar40 = (uint *)((longlong)plVar42 + (longlong)(iVar48 >> 5) * 4);
                  *puVar40 = *puVar40 & (-2 << bVar52 | 0xfffffffeU >> 0x20 - bVar52);
                  puVar40 = local_418;
                  local_408 = uVar55;
                }
                else {
                  piVar23 = piVar38 + 1;
                }
              } while (iVar13 != iVar10);
            }
          }
        }
        uVar32 = uVar32 & ~(uint)uVar53;
        puVar22 = (uint *)param_1[0x21];
        if ((uint *)param_1[0x21] == (uint *)0x0) {
          puVar22 = puVar40;
        }
        iVar31 = (int)param_1[0x22];
        iVar10 = (int)uVar55;
        lVar25 = (longlong)iVar10;
        uVar14 = puVar22[lVar25] & uVar32;
        if (uVar14 == 0) {
          iVar13 = iVar31 + 0x1e;
          if (-1 < iVar31 + -1) {
            iVar13 = iVar31 + -1;
          }
          iVar13 = iVar13 >> 5;
          iVar30 = iVar30 + 0x20;
          iVar48 = iVar13;
          if (iVar13 < iVar10) {
            iVar48 = iVar10;
          }
          if (iVar10 < iVar13) {
            lVar28 = 0;
            do {
              uVar14 = puVar22[lVar25 + lVar28 + 1];
              if (uVar14 != 0) {
                uVar55 = (ulonglong)(iVar10 + (int)lVar28 + 1);
                uVar32 = 0xffffffff;
                goto LAB_143674beb;
              }
              iVar30 = iVar30 + 0x20;
              lVar28 = lVar28 + 1;
            } while (iVar48 - lVar25 != lVar28);
            uVar32 = 0xffffffff;
            iVar10 = iVar48;
          }
          uVar55 = (ulonglong)(iVar10 + 1);
          puVar40 = local_418;
          iVar10 = iVar31;
        }
        else {
LAB_143674beb:
          uVar53 = (ulonglong)(-uVar14 & uVar14);
          uVar35 = uVar53 * 2 + 1;
          lVar25 = 0x3f;
          if (uVar35 != 0) {
            for (; uVar35 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          iVar10 = (iVar30 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
          if (iVar31 <= iVar10) {
            iVar10 = iVar31;
          }
        }
      } while (iVar10 != iVar11);
    }
  }
LAB_1436747e4:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca97070) && (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar42 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable");
    if (plVar42 == (longlong *)0x0) {
      DAT_14ca97068 = 0;
    }
    else {
      DAT_14ca97068 = (**(code **)(*plVar42 + 0x68))(plVar42);
    }
    _Init_thread_footer(&DAT_14ca97070);
  }
  lVar25 = DAT_14ca97068;
  bVar56 = true;
  cVar9 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    iVar11 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if (iVar11 == 0x40000002) {
      cVar9 = '\x02';
      uVar53 = 0;
    }
    else {
      bVar56 = true;
      cVar9 = '\x02';
      if ((DAT_14c86a9f8 == '\x01') && (iVar11 != 2)) {
        if (iVar11 == 1) {
          DVar15 = FUN_140ad26c0();
          DVar16 = GetCurrentThreadId();
          bVar56 = DVar15 == DVar16;
          cVar9 = DAT_14ca96da8;
        }
        else {
          bVar56 = false;
        }
      }
      uVar53 = (ulonglong)(bVar56 ^ 1);
    }
    bVar56 = *(int *)(lVar25 + uVar53 * 4) != 0;
  }
  if ((bVar56) && (cVar9 != '\0')) {
    cVar9 = FUN_147430d07();
    if (cVar9 == '\0') {
      if (DAT_14caffe69 == '\x01') {
        iVar11 = (int)param_1[0x22];
        if (iVar11 == 0) {
          uVar55 = 1;
          uVar53 = 0;
          iVar10 = 0;
          iVar30 = 0;
        }
        else {
          puVar40 = (uint *)param_1[0x21];
          if ((uint *)param_1[0x21] == (uint *)0x0) {
            puVar40 = (uint *)(param_1 + 0x1f);
          }
          uVar32 = *puVar40;
          if (uVar32 == 0) {
            iVar30 = iVar11 + 0x1e;
            if (-1 < iVar11 + -1) {
              iVar30 = iVar11 + -1;
            }
            uVar53 = 0;
            uVar55 = (ulonglong)(uint)(iVar30 >> 5);
            if (iVar30 >> 5 < 1) {
              uVar55 = uVar53;
            }
            iVar10 = 0;
            do {
              if (uVar55 == uVar53) goto LAB_143674c59;
              iVar10 = iVar10 + 0x20;
              uVar32 = puVar40[uVar53 + 1];
              uVar53 = uVar53 + 1;
            } while (uVar32 == 0);
          }
          else {
            uVar53 = 0;
            iVar10 = 0;
          }
          uVar55 = (ulonglong)(-uVar32 & uVar32);
          uVar35 = uVar55 * 2 + 1;
          lVar25 = 0x3f;
          if (uVar35 != 0) {
            for (; uVar35 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          iVar30 = (iVar10 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
          if (iVar11 <= iVar30) {
            iVar30 = iVar11;
          }
        }
        if (iVar30 != iVar11) {
          local_420 = (undefined ***)(param_1 + 0x58);
          uVar32 = 0xffffffff;
          do {
            plVar42 = (longlong *)(param_1[0x1d] + (longlong)iVar30 * 0x30);
            plVar21 = *(longlong **)(param_1[0x1d] + (longlong)iVar30 * 0x30);
            if (((*(uint *)(plVar21 + 0x14) & 8) != 0) && (plVar21[6] == -1)) {
              *(uint *)(plVar21 + 0x14) = *(uint *)(plVar21 + 0x14) & 0xfffffff7;
              (**(code **)(*plVar21 + 8))(plVar21,local_410);
              plVar21 = (longlong *)*plVar42;
            }
            cVar9 = FUN_143676f44(param_1,local_410,(int)plVar21[0x15]);
            if (cVar9 == '\0') {
              FUN_1447cbafe(local_420,&local_368,*plVar42 + 0xa8,0);
            }
            uVar32 = uVar32 & ~(uint)uVar55;
            puVar40 = (uint *)param_1[0x21];
            if ((uint *)param_1[0x21] == (uint *)0x0) {
              puVar40 = (uint *)(param_1 + 0x1f);
            }
            iVar31 = (int)param_1[0x22];
            iVar30 = (int)uVar53;
            lVar25 = (longlong)iVar30;
            uVar14 = puVar40[lVar25] & uVar32;
            if (uVar14 == 0) {
              iVar13 = iVar31 + 0x1e;
              if (-1 < iVar31 + -1) {
                iVar13 = iVar31 + -1;
              }
              iVar13 = iVar13 >> 5;
              iVar10 = iVar10 + 0x20;
              iVar48 = iVar13;
              if (iVar13 < iVar30) {
                iVar48 = iVar30;
              }
              if (iVar30 < iVar13) {
                lVar28 = 0;
                do {
                  uVar14 = puVar40[lVar25 + lVar28 + 1];
                  if (uVar14 != 0) {
                    uVar53 = (ulonglong)(iVar30 + (int)lVar28 + 1);
                    uVar32 = 0xffffffff;
                    goto LAB_1436758d1;
                  }
                  iVar10 = iVar10 + 0x20;
                  lVar28 = lVar28 + 1;
                } while (iVar48 - lVar25 != lVar28);
                uVar32 = 0xffffffff;
                iVar30 = iVar48;
              }
              uVar53 = (ulonglong)(iVar30 + 1);
              iVar30 = iVar31;
            }
            else {
LAB_1436758d1:
              uVar55 = (ulonglong)(-uVar14 & uVar14);
              uVar35 = uVar55 * 2 + 1;
              lVar25 = 0x3f;
              if (uVar35 != 0) {
                for (; uVar35 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                }
              }
              iVar30 = (iVar10 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
              if (iVar31 <= iVar30) {
                iVar30 = iVar31;
              }
            }
          } while (iVar30 != iVar11);
        }
      }
      goto LAB_143674c59;
    }
    if ((char)param_1[0x65] == '\x01') {
      *(undefined1 *)(param_1 + 0x65) = 0;
      if (DAT_14caffe69 == '\x01') {
        iVar11 = (int)param_1[0x34];
        if (iVar11 == 0) {
          uVar35 = 1;
          iVar30 = 0;
          uVar53 = 0;
          iVar10 = 0;
        }
        else {
          puVar40 = (uint *)param_1[0x33];
          if ((uint *)param_1[0x33] == (uint *)0x0) {
            puVar40 = (uint *)(param_1 + 0x31);
          }
          uVar32 = *puVar40;
          if (uVar32 == 0) {
            iVar30 = iVar11 + 0x1e;
            if (-1 < iVar11 + -1) {
              iVar30 = iVar11 + -1;
            }
            uVar53 = 0;
            uVar55 = (ulonglong)(uint)(iVar30 >> 5);
            if (iVar30 >> 5 < 1) {
              uVar55 = uVar53;
            }
            iVar30 = 0;
            do {
              if (uVar55 == uVar53) goto LAB_1436759ae;
              iVar30 = iVar30 + 0x20;
              uVar32 = puVar40[uVar53 + 1];
              uVar53 = uVar53 + 1;
            } while (uVar32 == 0);
          }
          else {
            iVar30 = 0;
            uVar53 = 0;
          }
          uVar35 = (ulonglong)(-uVar32 & uVar32);
          uVar55 = uVar35 * 2 + 1;
          lVar25 = 0x3f;
          if (uVar55 != 0) {
            for (; uVar55 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          iVar10 = (iVar30 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
          if (iVar11 <= iVar10) {
            iVar10 = iVar11;
          }
        }
        if (iVar10 != iVar11) {
          uVar32 = 0xffffffff;
          do {
            iVar10 = *(int *)(param_1[0x2f] + (longlong)iVar10 * 0xc);
            uVar55 = (ulonglong)iVar10;
            local_368 = (undefined **)CONCAT44(local_368._4_4_,iVar10);
            plVar42 = *(longlong **)(param_1[0x1d] + uVar55 * 0x30);
            if (((*(uint *)(plVar42 + 0x14) & 8) != 0) && (plVar42[6] == -1)) {
              *(uint *)(plVar42 + 0x14) = *(uint *)(plVar42 + 0x14) & 0xfffffff7;
              (**(code **)(*plVar42 + 8))(plVar42,local_410);
              uVar55 = (ulonglong)local_368 & 0xffffffff;
            }
            cVar9 = FUN_143676f44(param_1,local_410,uVar55);
            if (cVar9 == '\0') {
              FUN_1447cbafe(param_1 + 0x58,&local_3b8,&local_368,0);
            }
            uVar32 = uVar32 & ~(uint)uVar35;
            puVar40 = (uint *)param_1[0x33];
            if ((uint *)param_1[0x33] == (uint *)0x0) {
              puVar40 = (uint *)(param_1 + 0x31);
            }
            iVar31 = (int)param_1[0x34];
            iVar10 = (int)uVar53;
            lVar25 = (longlong)iVar10;
            uVar14 = puVar40[lVar25] & uVar32;
            if (uVar14 == 0) {
              iVar13 = iVar31 + 0x1e;
              if (-1 < iVar31 + -1) {
                iVar13 = iVar31 + -1;
              }
              iVar13 = iVar13 >> 5;
              iVar30 = iVar30 + 0x20;
              iVar48 = iVar13;
              if (iVar13 < iVar10) {
                iVar48 = iVar10;
              }
              if (iVar10 < iVar13) {
                lVar28 = 0;
                do {
                  uVar14 = puVar40[lVar25 + lVar28 + 1];
                  if (uVar14 != 0) {
                    uVar53 = (ulonglong)(iVar10 + (int)lVar28 + 1);
                    uVar32 = 0xffffffff;
                    goto LAB_143676dc1;
                  }
                  iVar30 = iVar30 + 0x20;
                  lVar28 = lVar28 + 1;
                } while (iVar48 - lVar25 != lVar28);
                uVar32 = 0xffffffff;
                iVar10 = iVar48;
              }
              uVar53 = (ulonglong)(iVar10 + 1);
              iVar10 = iVar31;
            }
            else {
LAB_143676dc1:
              uVar35 = (ulonglong)(-uVar14 & uVar14);
              uVar55 = uVar35 * 2 + 1;
              lVar25 = 0x3f;
              if (uVar55 != 0) {
                for (; uVar55 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                }
              }
              iVar10 = (iVar30 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
              if (iVar31 <= iVar10) {
                iVar10 = iVar31;
              }
            }
          } while (iVar10 != iVar11);
        }
      }
LAB_1436759ae:
      pppuVar36 = (undefined ***)0x0;
      local_398 = (undefined ********)0x0;
      local_390 = 0;
      local_3b8 = (undefined1 *)0x0;
      uStack_3b0 = 0;
      uStack_38c = 0x80;
      iStack_388 = -1;
      iStack_384 = 0;
      local_378 = (undefined1 *)0x0;
      local_370 = 0;
      FUN_145c3f772(&local_3b8,param_1 + 0x3a);
      local_418 = (uint *)(param_1 + 0x46);
      local_3c8 = (undefined **)0x0;
      uStack_3c0 = 0;
      uVar32 = *(uint *)(param_1 + 0x49);
      uVar53 = 1;
      iVar11 = 0;
      uVar14 = 0;
      if (uVar32 != 0) {
        puVar40 = (uint *)param_1[0x48];
        if ((uint *)param_1[0x48] == (uint *)0x0) {
          puVar40 = local_418;
        }
        uVar14 = *puVar40;
        if (uVar14 == 0) {
          iVar11 = uVar32 + 0x1e;
          if (-1 < (int)(uVar32 - 1)) {
            iVar11 = uVar32 - 1;
          }
          local_408 = 0;
          pppuVar27 = (undefined ***)(ulonglong)(uint)(iVar11 >> 5);
          if (iVar11 >> 5 < 1) {
            pppuVar27 = (undefined ***)0x0;
          }
          pppuVar36 = (undefined ***)0x0;
          iVar11 = 0;
          do {
            if (pppuVar27 == pppuVar36) goto LAB_143675aa1;
            iVar11 = iVar11 + 0x20;
            uVar14 = puVar40[(longlong)pppuVar36 + 1];
            pppuVar36 = (undefined ***)((longlong)pppuVar36 + 1);
          } while (uVar14 == 0);
        }
        else {
          pppuVar36 = (undefined ***)0x0;
          iVar11 = 0;
        }
        uVar53 = (ulonglong)(-uVar14 & uVar14);
        uVar55 = uVar53 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar55 != 0) {
          for (; uVar55 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        uVar14 = (iVar11 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
        if ((int)uVar32 <= (int)uVar14) {
          uVar14 = uVar32;
        }
      }
      if (uVar14 == uVar32) {
        local_408 = 0;
      }
      else {
        uVar45 = 0xffffffff;
        local_408 = 0;
        local_400 = (longlong *)(ulonglong)uVar32;
        do {
          uVar55 = uStack_3c0;
          local_428 = (undefined ***)CONCAT44(local_428._4_4_,iVar11);
          lVar25 = param_1[0x1d];
          iVar11 = *(int *)(param_1[0x44] + (longlong)(int)uVar14 * 0xc);
          lVar18 = (longlong)iVar11 * 0x30;
          *(undefined8 *)(lVar25 + 8 + lVar18) = DAT_14c867d10;
          lVar28 = (longlong)(int)uStack_3c0;
          uVar32 = (int)uStack_3c0 + 1;
          uStack_3c0 = CONCAT44(uStack_3c0._4_4_,uVar32);
          local_420 = pppuVar36;
          if (uStack_3c0._4_4_ < uVar32) {
            FUN_1446f48e2(&local_3c8,uVar55 & 0xffffffff);
          }
          *(int *)((longlong)local_3c8 + lVar28 * 4) = iVar11;
          if ((int)uStack_3b0 != iStack_384) {
            puVar24 = local_378;
            if (local_378 == (undefined1 *)0x0) {
              puVar24 = local_380;
            }
            piVar23 = (int *)(puVar24 + ((longlong)local_370 - 1U & (longlong)iVar11) * 4);
            do {
              iVar30 = *piVar23;
              lVar28 = (longlong)iVar30;
              if (lVar28 == -1) break;
              piVar38 = (int *)(local_3b8 + lVar28 * 0xc);
              iVar10 = *piVar38;
              if (iVar10 == iVar11) {
                puVar24 = local_378;
                if (local_378 == (undefined1 *)0x0) {
                  puVar24 = local_380;
                }
                iVar31 = *(int *)(puVar24 + (longlong)piVar38[2] * 4);
                if (iVar31 == iVar30) {
                  piVar37 = (int *)(puVar24 + (longlong)piVar38[2] * 4);
                }
                else {
                  do {
                    piVar37 = (int *)(local_3b8 + (longlong)iVar31 * 0xc + 4);
                    iVar31 = *piVar37;
                  } while (iVar31 != iVar30);
                }
                *piVar37 = piVar38[1];
                if (iStack_384 != 0) {
                  *(int *)(local_3b8 + (longlong)iStack_388 * 0xc) = iVar30;
                }
                *(undefined4 *)(local_3b8 + lVar28 * 0xc) = 0xffffffff;
                iVar31 = -1;
                if (0 < iStack_384) {
                  iVar31 = iStack_388;
                }
                *(int *)(local_3b8 + lVar28 * 0xc + 4) = iVar31;
                iStack_388 = iVar30;
                iStack_384 = iStack_384 + 1;
                ppppppppuVar17 = local_398;
                if (local_398 == (undefined ********)0x0) {
                  ppppppppuVar17 = (undefined ********)local_3a8;
                }
                iVar31 = iVar30 + 0x1f;
                if (-1 < iVar30) {
                  iVar31 = iVar30;
                }
                bVar52 = (byte)iVar30 & 0x1f;
                puVar40 = (uint *)((longlong)ppppppppuVar17 + (longlong)(iVar31 >> 5) * 4);
                *puVar40 = *puVar40 & (-2 << bVar52 | 0xfffffffeU >> 0x20 - bVar52);
              }
              else {
                piVar23 = piVar38 + 1;
              }
            } while (iVar10 != iVar11);
          }
          plVar42 = (longlong *)(lVar25 + lVar18);
          uVar45 = uVar45 & ~(uint)uVar53;
          puVar40 = (uint *)param_1[0x48];
          if ((uint *)param_1[0x48] == (uint *)0x0) {
            puVar40 = local_418;
          }
          uVar32 = *(uint *)(param_1 + 0x49);
          iVar30 = (int)local_420;
          lVar25 = (longlong)iVar30;
          uVar14 = puVar40[lVar25] & uVar45;
          pppuVar36 = local_420;
          iVar11 = (int)local_428;
          if (uVar14 == 0) {
            iVar10 = uVar32 + 0x1e;
            if (-1 < (int)(uVar32 - 1)) {
              iVar10 = uVar32 - 1;
            }
            iVar10 = iVar10 >> 5;
            iVar11 = (int)local_428 + 0x20;
            iVar31 = iVar10;
            if (iVar10 < iVar30) {
              iVar31 = iVar30;
            }
            if (iVar30 < iVar10) {
              lVar28 = 0;
              do {
                uVar14 = puVar40[lVar25 + lVar28 + 1];
                if (uVar14 != 0) {
                  uVar45 = 0xffffffff;
                  pppuVar36 = (undefined ***)(ulonglong)(iVar30 + (int)lVar28 + 1);
                  goto LAB_143676927;
                }
                iVar11 = iVar11 + 0x20;
                lVar28 = lVar28 + 1;
              } while (iVar31 - lVar25 != lVar28);
              uVar45 = 0xffffffff;
              lVar25 = (longlong)iVar31;
            }
            pppuVar36 = (undefined ***)(lVar25 + 1U & 0xffffffff);
            uVar14 = uVar32;
          }
          else {
LAB_143676927:
            uVar53 = (ulonglong)(-uVar14 & uVar14);
            uVar55 = uVar53 * 2 + 1;
            lVar25 = 0x3f;
            if (uVar55 != 0) {
              for (; uVar55 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            uVar14 = (iVar11 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
            if ((int)uVar32 <= (int)uVar14) {
              uVar14 = uVar32;
            }
          }
          local_408 = local_408 +
                      ((*(int *)(*plVar42 + 0xa0) << 0x1c) >> 0x1f & *(uint *)(plVar42 + 2));
        } while (uVar14 != (uint)local_400);
      }
LAB_143675aa1:
      puVar40 = (uint *)(param_1 + 0x50);
      uVar32 = *(uint *)(param_1 + 0x53);
      if (uVar32 == 0) {
        plVar42 = (longlong *)&DAT_00000001;
        puVar41 = (uint *)0x0;
        iVar11 = 0;
        uVar14 = 0;
      }
      else {
        puVar22 = (uint *)param_1[0x52];
        if ((uint *)param_1[0x52] == (uint *)0x0) {
          puVar22 = puVar40;
        }
        uVar14 = *puVar22;
        if (uVar14 == 0) {
          iVar11 = uVar32 + 0x1e;
          if (-1 < (int)(uVar32 - 1)) {
            iVar11 = uVar32 - 1;
          }
          puVar41 = (uint *)0x0;
          puVar39 = (uint *)(ulonglong)(uint)(iVar11 >> 5);
          if (iVar11 >> 5 < 1) {
            puVar39 = puVar41;
          }
          iVar11 = 0;
          do {
            if (puVar39 == puVar41) goto LAB_143675b35;
            iVar11 = iVar11 + 0x20;
            uVar14 = puVar22[(longlong)puVar41 + 1];
            puVar41 = (uint *)((longlong)puVar41 + 1);
          } while (uVar14 == 0);
        }
        else {
          puVar41 = (uint *)0x0;
          iVar11 = 0;
        }
        plVar42 = (longlong *)(ulonglong)(-uVar14 & uVar14);
        uVar53 = (longlong)plVar42 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar53 != 0) {
          for (; uVar53 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        uVar14 = (iVar11 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
        if ((int)uVar32 <= (int)uVar14) {
          uVar14 = uVar32;
        }
      }
      if (uVar14 != uVar32) {
        uVar45 = 0xffffffff;
        local_3f0 = (ulonglong)uVar32;
        local_3e8 = puVar40;
        do {
          local_3f8 = (longlong *)CONCAT44(local_3f8._4_4_,uVar45);
          local_428 = (undefined ***)CONCAT44(local_428._4_4_,iVar11);
          lVar25 = param_1[0x16];
          lVar28 = (longlong)*(int *)(param_1[0x4e] + (longlong)(int)uVar14 * 0xc) * 0x68;
          bVar52 = *(byte *)(lVar25 + 0x60 + lVar28);
          local_418 = puVar41;
          local_400 = plVar42;
          if ((int)(uint)bVar52 < *(int *)(lVar25 + 8 + lVar28)) {
            plVar42 = (longlong *)(lVar25 + lVar28);
            do {
              uVar53 = uStack_3c0;
              iVar11 = *(int *)(*plVar42 + (ulonglong)bVar52 * 4);
              uVar55 = (ulonglong)iVar11;
              if (uVar55 != 0xffffffffffffffff) {
                lVar25 = param_1[0x1d];
                lVar28 = uVar55 * 0x30;
                *(undefined8 *)(lVar25 + 8 + lVar28) = DAT_14c867d10;
                if ((int)*(char *)(*(longlong *)(lVar25 + lVar28) + 0x9c) <
                    (int)plVar42[1] - _DAT_14c7619d4) {
                  lVar18 = (longlong)(int)uStack_3c0;
                  uVar32 = (int)uStack_3c0 + 1;
                  uStack_3c0 = CONCAT44(uStack_3c0._4_4_,uVar32);
                  if (uStack_3c0._4_4_ < uVar32) {
                    FUN_1446f48e2(&local_3c8,uVar53 & 0xffffffff);
                  }
                  *(int *)((longlong)local_3c8 + lVar18 * 4) = iVar11;
                  if ((int)uStack_3b0 != iStack_384) {
                    puVar24 = local_378;
                    if (local_378 == (undefined1 *)0x0) {
                      puVar24 = local_380;
                    }
                    pppuVar36 = (undefined ***)(puVar24 + ((longlong)local_370 - 1U & uVar55) * 4);
                    do {
                      iVar30 = *(int *)pppuVar36;
                      lVar18 = (longlong)iVar30;
                      if (lVar18 == -1) break;
                      piVar23 = (int *)(local_3b8 + lVar18 * 0xc);
                      iVar10 = *piVar23;
                      if (iVar10 == iVar11) {
                        puVar24 = local_378;
                        if (local_378 == (undefined1 *)0x0) {
                          puVar24 = local_380;
                        }
                        iVar31 = *(int *)(puVar24 + (longlong)piVar23[2] * 4);
                        if (iVar31 == iVar30) {
                          piVar38 = (int *)(puVar24 + (longlong)piVar23[2] * 4);
                        }
                        else {
                          do {
                            piVar38 = (int *)(local_3b8 + (longlong)iVar31 * 0xc + 4);
                            iVar31 = *piVar38;
                          } while (iVar31 != iVar30);
                        }
                        *piVar38 = piVar23[1];
                        if (iStack_384 != 0) {
                          *(int *)(local_3b8 + (longlong)iStack_388 * 0xc) = iVar30;
                        }
                        *(undefined4 *)(local_3b8 + lVar18 * 0xc) = 0xffffffff;
                        iVar31 = -1;
                        if (0 < iStack_384) {
                          iVar31 = iStack_388;
                        }
                        *(int *)(local_3b8 + lVar18 * 0xc + 4) = iVar31;
                        iStack_388 = iVar30;
                        iStack_384 = iStack_384 + 1;
                        ppppppppuVar17 = local_398;
                        if (local_398 == (undefined ********)0x0) {
                          ppppppppuVar17 = (undefined ********)local_3a8;
                        }
                        iVar31 = iVar30 + 0x1f;
                        if (-1 < iVar30) {
                          iVar31 = iVar30;
                        }
                        bVar6 = (byte)iVar30 & 0x1f;
                        puVar40 = (uint *)((longlong)ppppppppuVar17 + (longlong)(iVar31 >> 5) * 4);
                        *puVar40 = *puVar40 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
                        local_420 = pppuVar36;
                      }
                      else {
                        pppuVar36 = (undefined ***)(piVar23 + 1);
                      }
                    } while (iVar10 != iVar11);
                  }
                  if ((*(byte *)(*(longlong *)(lVar25 + lVar28) + 0xa0) & 8) != 0) {
                    local_408 = local_408 + *(uint *)((longlong *)(lVar25 + lVar28) + 2);
                  }
                }
              }
              bVar52 = bVar52 + 1;
            } while ((int)(uint)bVar52 < (int)plVar42[1]);
            uVar32 = *(uint *)(param_1 + 0x53);
          }
          uVar45 = (uint)local_3f8 & ~(uint)local_400;
          puVar22 = (uint *)param_1[0x52];
          if ((uint *)param_1[0x52] == (uint *)0x0) {
            puVar22 = local_3e8;
          }
          iVar30 = (int)local_418;
          puVar39 = (uint *)(longlong)iVar30;
          uVar14 = puVar22[(longlong)puVar39] & uVar45;
          puVar41 = local_418;
          puVar40 = puVar39;
          iVar11 = (int)local_428;
          if (uVar14 == 0) {
            iVar10 = uVar32 + 0x1e;
            if (-1 < (int)(uVar32 - 1)) {
              iVar10 = uVar32 - 1;
            }
            iVar10 = iVar10 >> 5;
            iVar11 = (int)local_428 + 0x20;
            iVar31 = iVar10;
            if (iVar10 < iVar30) {
              iVar31 = iVar30;
            }
            if (iVar30 < iVar10) {
              puVar41 = (uint *)((longlong)iVar31 + 1);
              puVar40 = (uint *)0x0;
              do {
                uVar14 = puVar22[(longlong)puVar39 + (longlong)puVar40 + 1];
                if (uVar14 != 0) {
                  puVar41 = (uint *)(ulonglong)(iVar30 + (int)puVar40 + 1);
                  uVar45 = 0xffffffff;
                  goto LAB_143676c6a;
                }
                iVar11 = iVar11 + 0x20;
                puVar40 = (uint *)((longlong)puVar40 + 1);
              } while ((uint *)((longlong)iVar31 - (longlong)puVar39) != puVar40);
              uVar45 = 0xffffffff;
            }
            else {
              puVar41 = (uint *)((longlong)puVar39 + 1);
              puVar40 = puVar41;
            }
            puVar41 = (uint *)((ulonglong)puVar41 & 0xffffffff);
            plVar42 = local_400;
            uVar14 = uVar32;
          }
          else {
LAB_143676c6a:
            plVar42 = (longlong *)(ulonglong)(-uVar14 & uVar14);
            uVar53 = (longlong)plVar42 * 2 + 1;
            lVar25 = 0x3f;
            if (uVar53 != 0) {
              for (; uVar53 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            uVar14 = (iVar11 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
            if ((int)uVar32 <= (int)uVar14) {
              uVar14 = uVar32;
            }
          }
        } while (uVar14 != (uint)local_3f0);
      }
LAB_143675b35:
      iVar11 = FUN_146b4543c(DAT_14c7619d0,0x33,CONCAT71((int7)((ulonglong)puVar40 >> 8),0x31));
      local_418 = (uint *)(longlong)iVar11;
      puVar40 = (uint *)param_1[0x2e];
      if (local_418 < (uint *)(local_408 + (longlong)puVar40)) {
        FUN_140619b9c(&local_3b8);
        iVar11 = local_3d0;
        ppuVar43 = local_3d8;
        lVar25 = (longlong)local_3d0;
        if (1 < lVar25) {
          memset(&local_358,0,0x2f0);
          local_368 = ppuVar43;
          local_360 = (longlong)ppuVar43 + lVar25 * 4 + -4;
          fVar57 = logf((float)iVar11);
          local_358 = (undefined8 *)CONCAT44(local_358._4_4_,(int)(longlong)(fVar57 + fVar57));
          pppuVar36 = &local_368;
          do {
            ppuVar29 = *pppuVar36;
            ppuVar43 = pppuVar36[1];
            iVar11 = *(int *)(pppuVar36 + 2);
            iVar30 = (int)((ulonglong)((longlong)ppuVar43 - (longlong)ppuVar29) >> 2);
            uVar32 = iVar30 + 1;
            ppuVar47 = ppuVar43;
            ppuVar54 = ppuVar29;
            local_428 = pppuVar36;
            if (iVar11 != 0) {
LAB_143675c06:
              ppuVar34 = ppuVar29;
              pppuVar36 = local_428;
              if (8 < (int)uVar32) {
                local_420 = (undefined ***)CONCAT44(local_420._4_4_,iVar11);
                uVar14 = *(uint *)((longlong)ppuVar34 + (ulonglong)(uVar32 >> 1) * 4);
                *(uint *)((longlong)ppuVar34 + (ulonglong)(uVar32 >> 1) * 4) = *(uint *)ppuVar34;
                *(uint *)ppuVar34 = uVar14;
                ppuVar46 = (undefined **)((longlong)ppuVar43 + 4);
                ppuVar29 = ppuVar34;
                do {
                  ppuVar8 = (undefined **)((longlong)ppuVar29 + 4);
                  ppuVar44 = (undefined **)((longlong)ppuVar29 + 4);
                  do {
                    ppuVar29 = ppuVar44;
                    ppuVar50 = ppuVar8;
                    if (ppuVar43 < ppuVar29) break;
                    lVar25 = param_1[0x1d];
                    uVar53 = *(ulonglong *)(lVar25 + 8 + (longlong)(int)*(uint *)ppuVar34 * 0x30);
                    uVar55 = *(ulonglong *)(lVar25 + 8 + (longlong)(int)*(uint *)ppuVar29 * 0x30);
                    bVar56 = uVar53 < uVar55;
                    if (uVar53 == uVar55) {
                      bVar56 = *(uint *)(lVar25 + 0x10 + (longlong)(int)*(uint *)ppuVar29 * 0x30) <
                               *(uint *)(lVar25 + 0x10 + (longlong)(int)*(uint *)ppuVar34 * 0x30);
                    }
                    ppuVar8 = (undefined **)((longlong)ppuVar50 + 4);
                    ppuVar44 = (undefined **)((longlong)ppuVar29 + 4);
                  } while (!bVar56);
                  ppuVar8 = ppuVar46 + -1;
                  do {
                    ppuVar44 = ppuVar46;
                    ppuVar51 = ppuVar8;
                    ppuVar46 = (undefined **)((longlong)ppuVar44 + -4);
                    if (ppuVar46 <= ppuVar34) break;
                    lVar25 = param_1[0x1d];
                    uVar53 = *(ulonglong *)(lVar25 + 8 + (longlong)(int)*(uint *)ppuVar46 * 0x30);
                    uVar55 = *(ulonglong *)(lVar25 + 8 + (longlong)(int)*(uint *)ppuVar34 * 0x30);
                    bVar56 = uVar53 < uVar55;
                    if (uVar53 == uVar55) {
                      bVar56 = *(uint *)(lVar25 + 0x10 + (longlong)(int)*(uint *)ppuVar34 * 0x30) <
                               *(uint *)(lVar25 + 0x10 + (longlong)(int)*(uint *)ppuVar46 * 0x30);
                    }
                    ppuVar8 = (undefined **)((longlong)ppuVar51 + -4);
                  } while (!bVar56);
                  if (ppuVar46 < ppuVar29) goto LAB_143675d0b;
                  uVar32 = *(uint *)ppuVar29;
                  *(uint *)ppuVar29 = *(uint *)ppuVar46;
                  *(uint *)ppuVar46 = uVar32;
                } while( true );
              }
              if (ppuVar34 < ppuVar43) {
                do {
                  ppuVar29 = ppuVar34;
                  if ((undefined **)((longlong)ppuVar34 + 4U) <= ppuVar43) {
                    lVar25 = param_1[0x1d];
                    uVar53 = (ulonglong)*(uint *)ppuVar34;
                    ppuVar47 = (undefined **)((longlong)ppuVar34 + 4U);
                    ppuVar54 = ppuVar34;
                    do {
                      lVar28 = (longlong)(int)uVar53 * 0x30;
                      lVar18 = (longlong)(int)*(uint *)ppuVar47 * 0x30;
                      uVar55 = *(ulonglong *)(lVar25 + 8 + lVar28);
                      uVar35 = *(ulonglong *)(lVar25 + 8 + lVar18);
                      bVar56 = uVar55 < uVar35;
                      if (uVar55 == uVar35) {
                        bVar56 = *(uint *)(lVar25 + 0x10 + lVar18) <
                                 *(uint *)(lVar25 + 0x10 + lVar28);
                      }
                      ppuVar29 = ppuVar47;
                      uVar55 = (longlong)(int)*(uint *)ppuVar47;
                      if (!bVar56) {
                        ppuVar29 = ppuVar54;
                        uVar55 = uVar53;
                      }
                      ppuVar47 = (undefined **)((longlong)ppuVar47 + 4);
                      uVar53 = uVar55 & 0xffffffff;
                      ppuVar54 = ppuVar29;
                    } while (ppuVar47 <= ppuVar43);
                  }
                  uVar32 = *(uint *)ppuVar29;
                  *(uint *)ppuVar29 = *(uint *)ppuVar43;
                  *(uint *)ppuVar43 = uVar32;
                  ppuVar43 = (undefined **)((longlong)ppuVar43 - 4);
                } while (ppuVar34 < ppuVar43);
              }
              goto LAB_143676082;
            }
LAB_143675dbe:
            pppuVar36 = local_428;
            if (uVar32 != 0) {
              iVar11 = (iVar30 - (iVar30 + -1 >> 0x1f)) + -1 >> 1;
              iVar30 = iVar11;
joined_r0x000143675de5:
              do {
                iVar10 = iVar11 * 2 + 1;
                if (iVar10 < (int)uVar32) {
                  iVar31 = iVar11 * 2 + 2;
                  lVar25 = param_1[0x1d];
                  if (iVar31 < (int)uVar32) {
                    lVar28 = (longlong)(int)*(uint *)((longlong)ppuVar29 + (longlong)iVar31 * 4) *
                             0x30;
                    lVar18 = (longlong)(int)*(uint *)((longlong)ppuVar29 + (longlong)iVar10 * 4) *
                             0x30;
                    uVar53 = *(ulonglong *)(lVar25 + 8 + lVar28);
                    uVar55 = *(ulonglong *)(lVar25 + 8 + lVar18);
                    bVar56 = uVar53 < uVar55;
                    if (uVar53 == uVar55) {
                      bVar56 = *(uint *)(lVar25 + 0x10 + lVar18) < *(uint *)(lVar25 + 0x10 + lVar28)
                      ;
                    }
                    if (!bVar56) {
                      iVar10 = iVar31;
                    }
                  }
                  uVar14 = *(uint *)((longlong)ppuVar29 + (longlong)iVar11 * 4);
                  lVar18 = (longlong)(int)uVar14 * 0x30;
                  uVar45 = *(uint *)((longlong)ppuVar29 + (longlong)iVar10 * 4);
                  lVar28 = (longlong)(int)uVar45 * 0x30;
                  uVar53 = *(ulonglong *)(lVar25 + 8 + lVar18);
                  uVar55 = *(ulonglong *)(lVar25 + 8 + lVar28);
                  bVar56 = uVar53 < uVar55;
                  if (uVar53 == uVar55) {
                    bVar56 = *(uint *)(lVar25 + 0x10 + lVar28) < *(uint *)(lVar25 + 0x10 + lVar18);
                  }
                  if (bVar56) {
                    *(uint *)((longlong)ppuVar29 + (longlong)iVar11 * 4) = uVar45;
                    *(uint *)((longlong)ppuVar29 + (longlong)iVar10 * 4) = uVar14;
                    iVar11 = iVar10;
                    goto joined_r0x000143675de5;
                  }
                }
                bVar56 = iVar30 != 0;
                iVar11 = iVar30 + -1;
                iVar30 = iVar11;
              } while (bVar56);
              if (1 < (int)uVar32) {
                uVar53 = (ulonglong)uVar32;
                uVar14 = *(uint *)ppuVar29;
                *(uint *)ppuVar29 = *(uint *)((longlong)ppuVar29 + (uVar53 - 1) * 4);
                *(uint *)((longlong)ppuVar29 + (uVar53 - 1) * 4) = uVar14;
                if (uVar32 != 2) {
                  do {
                    uVar55 = uVar53 - 1;
                    iVar11 = 0;
                    iVar10 = 1;
                    iVar30 = 0;
                    do {
                      iVar11 = iVar11 + 2;
                      lVar25 = param_1[0x1d];
                      iVar31 = iVar10;
                      if ((longlong)iVar11 < (longlong)uVar55) {
                        lVar18 = (longlong)(int)*(uint *)((longlong)ppuVar29 + (longlong)iVar11 * 4)
                                 * 0x30;
                        lVar28 = (longlong)(int)*(uint *)((longlong)ppuVar29 + (longlong)iVar10 * 4)
                                 * 0x30;
                        uVar35 = *(ulonglong *)(lVar25 + 8 + lVar18);
                        uVar5 = *(ulonglong *)(lVar25 + 8 + lVar28);
                        bVar56 = uVar35 < uVar5;
                        if (uVar35 == uVar5) {
                          bVar56 = *(uint *)(lVar25 + 0x10 + lVar28) <
                                   *(uint *)(lVar25 + 0x10 + lVar18);
                        }
                        if (!bVar56) {
                          iVar31 = iVar11;
                        }
                      }
                      uVar32 = *(uint *)((longlong)ppuVar29 + (longlong)iVar30 * 4);
                      lVar28 = (longlong)(int)uVar32 * 0x30;
                      uVar14 = *(uint *)((longlong)ppuVar29 + (longlong)iVar31 * 4);
                      lVar18 = (longlong)(int)uVar14 * 0x30;
                      uVar35 = *(ulonglong *)(lVar25 + 8 + lVar28);
                      uVar5 = *(ulonglong *)(lVar25 + 8 + lVar18);
                      bVar56 = uVar35 < uVar5;
                      if (uVar35 == uVar5) {
                        bVar56 = *(uint *)(lVar25 + 0x10 + lVar18) <
                                 *(uint *)(lVar25 + 0x10 + lVar28);
                      }
                      if (!bVar56) break;
                      *(uint *)((longlong)ppuVar29 + (longlong)iVar30 * 4) = uVar14;
                      *(uint *)((longlong)ppuVar29 + (longlong)iVar31 * 4) = uVar32;
                      iVar11 = iVar31 * 2;
                      iVar10 = iVar31 * 2 + 1;
                      iVar30 = iVar31;
                    } while ((longlong)iVar10 < (longlong)uVar55);
                    uVar32 = *(uint *)ppuVar29;
                    *(uint *)ppuVar29 = *(uint *)((longlong)ppuVar29 + (uVar53 - 2) * 4);
                    *(uint *)((longlong)ppuVar29 + (uVar53 - 2) * 4) = uVar32;
                    uVar53 = uVar55;
                  } while (2 < uVar55);
                }
              }
            }
LAB_143676082:
            pppuVar36 = pppuVar36 + -3;
          } while (&local_368 <= pppuVar36);
        }
        puVar40 = (uint *)param_1[0x2e];
        if ((local_418 < (uint *)(local_408 + (longlong)puVar40)) && (0 < local_3d0)) {
          lVar25 = 1;
          do {
            FUN_1474280ce(*(undefined8 *)
                           (param_1[0x1d] +
                           (longlong)*(int *)((longlong)local_3d8 + lVar25 * 4 + -4) * 0x30));
            puVar40 = (uint *)param_1[0x2e];
            if ((uint *)(local_408 + (longlong)puVar40) <= local_418) break;
            bVar56 = lVar25 < local_3d0;
            lVar25 = lVar25 + 1;
          } while (bVar56);
        }
        if (local_3d8 != (undefined **)0x0) {
          FUN_1400020a8();
          puVar40 = (uint *)param_1[0x2e];
        }
      }
      ppuVar43 = local_3c8;
      if (puVar40 < local_418) {
        iVar11 = (int)uStack_3c0;
        lVar25 = (longlong)(int)uStack_3c0;
        if (1 < lVar25) {
          memset(&local_358,0,0x2f0);
          local_368 = ppuVar43;
          local_360 = (longlong)ppuVar43 + lVar25 * 4 + -4;
          fVar57 = logf((float)iVar11);
          local_358 = (undefined8 *)CONCAT44(local_358._4_4_,(int)(longlong)(fVar57 + fVar57));
          pppuVar36 = &local_368;
          do {
            ppuVar29 = *pppuVar36;
            ppuVar43 = pppuVar36[1];
            iVar11 = *(int *)(pppuVar36 + 2);
            iVar30 = (int)((ulonglong)((longlong)ppuVar43 - (longlong)ppuVar29) >> 2);
            uVar53 = (ulonglong)(iVar30 + 1);
            ppuVar47 = ppuVar43;
            ppuVar54 = ppuVar29;
            local_420 = pppuVar36;
            if (iVar11 != 0) {
LAB_1436761c2:
              ppuVar34 = ppuVar29;
              if (8 < (int)(uint)uVar53) {
                uVar53 = (ulonglong)((uint)uVar53 >> 1);
                iVar30 = *(int *)((longlong)ppuVar34 + uVar53 * 4);
                *(int *)((longlong)ppuVar34 + uVar53 * 4) = *(int *)ppuVar34;
                *(int *)ppuVar34 = iVar30;
                ppuVar46 = (undefined **)((longlong)ppuVar43 + 4);
                ppuVar29 = ppuVar34;
                do {
                  ppuVar8 = (undefined **)((longlong)ppuVar29 + 4);
                  ppuVar44 = (undefined **)((longlong)ppuVar29 + 4);
                  do {
                    ppuVar29 = ppuVar44;
                    ppuVar50 = ppuVar8;
                    if (ppuVar43 < ppuVar29) break;
                    ppuVar8 = (undefined **)((longlong)ppuVar50 + 4);
                    ppuVar44 = (undefined **)((longlong)ppuVar29 + 4);
                  } while (*(uint *)(param_1[0x1d] + 0x10 + (longlong)*(int *)ppuVar29 * 0x30) <=
                           *(uint *)(param_1[0x1d] + 0x10 + (longlong)*(int *)ppuVar34 * 0x30));
                  ppuVar8 = ppuVar46 + -1;
                  do {
                    ppuVar44 = ppuVar46;
                    ppuVar51 = ppuVar8;
                    ppuVar46 = (undefined **)((longlong)ppuVar44 + -4);
                    if (ppuVar46 <= ppuVar34) break;
                    ppuVar8 = (undefined **)((longlong)ppuVar51 + -4);
                  } while (*(uint *)(param_1[0x1d] + 0x10 + (longlong)*(int *)ppuVar34 * 0x30) <=
                           *(uint *)(param_1[0x1d] + 0x10 + (longlong)*(int *)ppuVar46 * 0x30));
                  if (ppuVar46 < ppuVar29) goto LAB_143676289;
                  iVar30 = *(int *)ppuVar29;
                  *(int *)ppuVar29 = *(int *)ppuVar46;
                  *(int *)ppuVar46 = iVar30;
                } while( true );
              }
              if (ppuVar34 < ppuVar43) {
                do {
                  ppuVar29 = ppuVar34;
                  if ((undefined **)((longlong)ppuVar34 + 4U) <= ppuVar43) {
                    iVar11 = *(int *)ppuVar34;
                    ppuVar47 = (undefined **)((longlong)ppuVar34 + 4U);
                    do {
                      ppuVar54 = ppuVar47;
                      iVar30 = *(int *)ppuVar47;
                      if (*(uint *)(param_1[0x1d] + 0x10 + (longlong)*(int *)ppuVar47 * 0x30) <=
                          *(uint *)(param_1[0x1d] + 0x10 + (longlong)iVar11 * 0x30)) {
                        ppuVar54 = ppuVar29;
                        iVar30 = iVar11;
                      }
                      iVar11 = iVar30;
                      ppuVar29 = ppuVar54;
                      ppuVar47 = (undefined **)((longlong)ppuVar47 + 4);
                    } while (ppuVar47 <= ppuVar43);
                  }
                  iVar11 = *(int *)ppuVar29;
                  *(int *)ppuVar29 = *(int *)ppuVar43;
                  *(int *)ppuVar43 = iVar11;
                  ppuVar43 = (undefined **)((longlong)ppuVar43 - 4);
                } while (ppuVar34 < ppuVar43);
              }
              goto LAB_14367654e;
            }
LAB_143676330:
            iVar11 = (int)uVar53;
            if (iVar11 != 0) {
              iVar30 = (iVar30 - (iVar30 + -1 >> 0x1f)) + -1 >> 1;
              iVar10 = iVar30;
joined_r0x000143676357:
              do {
                iVar31 = iVar30 * 2 + 1;
                if (iVar31 < iVar11) {
                  iVar13 = iVar30 * 2 + 2;
                  lVar25 = param_1[0x1d];
                  if ((iVar13 < iVar11) &&
                     (*(uint *)(lVar25 + 0x10 +
                               (longlong)*(int *)((longlong)ppuVar29 + (longlong)iVar31 * 4) * 0x30)
                      <= *(uint *)(lVar25 + 0x10 +
                                  (longlong)*(int *)((longlong)ppuVar29 + (longlong)iVar13 * 4) *
                                  0x30))) {
                    iVar31 = iVar13;
                  }
                  iVar13 = *(int *)((longlong)ppuVar29 + (longlong)iVar30 * 4);
                  iVar48 = *(int *)((longlong)ppuVar29 + (longlong)iVar31 * 4);
                  if (*(uint *)(lVar25 + 0x10 + (longlong)iVar13 * 0x30) <
                      *(uint *)(lVar25 + 0x10 + (longlong)iVar48 * 0x30)) {
                    *(int *)((longlong)ppuVar29 + (longlong)iVar30 * 4) = iVar48;
                    *(int *)((longlong)ppuVar29 + (longlong)iVar31 * 4) = iVar13;
                    iVar30 = iVar31;
                    goto joined_r0x000143676357;
                  }
                }
                bVar56 = iVar10 != 0;
                iVar30 = iVar10 + -1;
                iVar10 = iVar30;
              } while (bVar56);
              if (1 < iVar11) {
                iVar30 = *(int *)ppuVar29;
                *(int *)ppuVar29 = *(int *)((longlong)ppuVar29 + (uVar53 - 1) * 4);
                *(int *)((longlong)ppuVar29 + (uVar53 - 1) * 4) = iVar30;
                if (iVar11 != 2) {
                  do {
                    uVar55 = uVar53 - 1;
                    iVar11 = 0;
                    iVar10 = 1;
                    iVar30 = 0;
                    do {
                      iVar11 = iVar11 + 2;
                      lVar25 = param_1[0x1d];
                      iVar31 = iVar10;
                      if (((longlong)iVar11 < (longlong)uVar55) &&
                         (*(uint *)(lVar25 + 0x10 +
                                   (longlong)*(int *)((longlong)ppuVar29 + (longlong)iVar10 * 4) *
                                   0x30) <=
                          *(uint *)(lVar25 + 0x10 +
                                   (longlong)*(int *)((longlong)ppuVar29 + (longlong)iVar11 * 4) *
                                   0x30))) {
                        iVar31 = iVar11;
                      }
                      iVar11 = *(int *)((longlong)ppuVar29 + (longlong)iVar30 * 4);
                      iVar10 = *(int *)((longlong)ppuVar29 + (longlong)iVar31 * 4);
                      if (*(uint *)(lVar25 + 0x10 + (longlong)iVar10 * 0x30) <=
                          *(uint *)(lVar25 + 0x10 + (longlong)iVar11 * 0x30)) break;
                      *(int *)((longlong)ppuVar29 + (longlong)iVar30 * 4) = iVar10;
                      *(int *)((longlong)ppuVar29 + (longlong)iVar31 * 4) = iVar11;
                      iVar11 = iVar31 * 2;
                      iVar10 = iVar31 * 2 + 1;
                      iVar30 = iVar31;
                    } while ((longlong)iVar10 < (longlong)uVar55);
                    iVar11 = *(int *)ppuVar29;
                    *(int *)ppuVar29 = *(int *)((longlong)ppuVar29 + (uVar53 - 2) * 4);
                    *(int *)((longlong)ppuVar29 + (uVar53 - 2) * 4) = iVar11;
                    uVar53 = uVar55;
                  } while (2 < uVar55);
                }
              }
            }
LAB_14367654e:
            pppuVar36 = local_420 + -3;
          } while (&local_368 <= pppuVar36);
          puVar40 = (uint *)param_1[0x2e];
        }
        if ((puVar40 < local_418) && (0 < (int)uStack_3c0)) {
          lVar25 = 1;
          do {
            iVar11 = *(int *)((longlong)local_3c8 + lVar25 * 4 + -4);
            plVar42 = *(longlong **)(param_1[0x1d] + (longlong)iVar11 * 0x30);
            if (((*(uint *)(plVar42 + 0x14) & 8) != 0) && (plVar42[6] == -1)) {
              *(uint *)(plVar42 + 0x14) = *(uint *)(plVar42 + 0x14) & 0xfffffff7;
              (**(code **)(*plVar42 + 8))(plVar42,local_410);
            }
            FUN_143676f44(param_1,local_410,iVar11);
            if (local_418 <= (uint *)param_1[0x2e]) break;
            bVar56 = lVar25 < (int)uStack_3c0;
            lVar25 = lVar25 + 1;
          } while (bVar56);
        }
      }
      if (local_3c8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      local_370 = 0;
      if (local_378 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      uVar53 = uStack_3b0 >> 0x20;
      uStack_3b0 = uStack_3b0 & 0xffffffff00000000;
      if ((int)uVar53 != 0) {
        FUN_1447a08a2(&local_3b8,0);
      }
      iStack_388 = 0xffffffff;
      iStack_384 = 0;
      local_390 = 0;
      if (0x80 < uStack_38c) {
        uStack_38c = 0x80;
        FUN_1446efbd8(local_3a8,0);
      }
      if (local_398 != (undefined ********)0x0) {
        FUN_1400020a8();
      }
      if (local_3b8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143674c59;
    }
  }
  else {
    if (DAT_14caffe69 == '\x01') {
      iVar11 = (int)param_1[0x22];
      if (iVar11 == 0) {
        uVar55 = 1;
        iVar10 = 0;
        uVar53 = 0;
        iVar30 = 0;
      }
      else {
        puVar40 = (uint *)param_1[0x21];
        if ((uint *)param_1[0x21] == (uint *)0x0) {
          puVar40 = (uint *)(param_1 + 0x1f);
        }
        uVar32 = *puVar40;
        if (uVar32 == 0) {
          iVar30 = iVar11 + 0x1e;
          if (-1 < iVar11 + -1) {
            iVar30 = iVar11 + -1;
          }
          uVar53 = 0;
          uVar55 = (ulonglong)(uint)(iVar30 >> 5);
          if (iVar30 >> 5 < 1) {
            uVar55 = uVar53;
          }
          iVar10 = 0;
          do {
            if (uVar55 == uVar53) goto LAB_143674c4b;
            iVar10 = iVar10 + 0x20;
            uVar32 = puVar40[uVar53 + 1];
            uVar53 = uVar53 + 1;
          } while (uVar32 == 0);
        }
        else {
          iVar10 = 0;
          uVar53 = 0;
        }
        uVar55 = (ulonglong)(-uVar32 & uVar32);
        uVar35 = uVar55 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar35 != 0) {
          for (; uVar35 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        iVar30 = (iVar10 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
        if (iVar11 <= iVar30) {
          iVar30 = iVar11;
        }
      }
      if (iVar30 != iVar11) {
        uVar32 = 0xffffffff;
        iVar31 = iVar11;
        do {
          if (*(longlong *)(*(longlong *)(param_1[0x1d] + (longlong)iVar30 * 0x30) + 0x90) != 0) {
            FUN_1474280ce();
            iVar31 = (int)param_1[0x22];
          }
          uVar32 = uVar32 & ~(uint)uVar55;
          puVar40 = (uint *)param_1[0x21];
          if ((uint *)param_1[0x21] == (uint *)0x0) {
            puVar40 = (uint *)(param_1 + 0x1f);
          }
          iVar30 = (int)uVar53;
          lVar25 = (longlong)iVar30;
          uVar14 = puVar40[lVar25] & uVar32;
          if (uVar14 == 0) {
            iVar13 = iVar31 + 0x1e;
            if (-1 < iVar31 + -1) {
              iVar13 = iVar31 + -1;
            }
            iVar13 = iVar13 >> 5;
            iVar10 = iVar10 + 0x20;
            iVar48 = iVar13;
            if (iVar13 < iVar30) {
              iVar48 = iVar30;
            }
            if (iVar30 < iVar13) {
              lVar28 = 0;
              do {
                uVar14 = puVar40[lVar25 + lVar28 + 1];
                if (uVar14 != 0) {
                  uVar53 = (ulonglong)(iVar30 + (int)lVar28 + 1);
                  uVar32 = 0xffffffff;
                  goto LAB_143675666;
                }
                iVar10 = iVar10 + 0x20;
                lVar28 = lVar28 + 1;
              } while (iVar48 - lVar25 != lVar28);
              uVar32 = 0xffffffff;
              lVar25 = (longlong)iVar48;
            }
            uVar53 = lVar25 + 1U & 0xffffffff;
            iVar30 = iVar31;
          }
          else {
LAB_143675666:
            uVar55 = (ulonglong)(-uVar14 & uVar14);
            uVar35 = uVar55 * 2 + 1;
            lVar25 = 0x3f;
            if (uVar35 != 0) {
              for (; uVar35 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            iVar30 = (iVar10 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
            if (iVar31 <= iVar30) {
              iVar30 = iVar31;
            }
          }
        } while (iVar30 != iVar11);
      }
LAB_143674c4b:
      FUN_14068ded2(param_1 + 0x58,0);
    }
LAB_143674c59:
    uVar53 = 0;
    local_398 = (undefined ********)0x0;
    local_390 = 0;
    local_3b8 = (undefined1 *)0x0;
    uStack_3b0 = 0;
    uStack_38c = 0x80;
    iStack_388 = 0xffffffff;
    iStack_384 = 0;
    local_378 = (undefined1 *)0x0;
    local_370 = 0;
    plVar42 = param_1 + 0x58;
    ppuVar33 = &local_3b8;
    pppuVar36 = &local_368;
    for (lVar25 = 10; lVar25 != 0; lVar25 = lVar25 + -1) {
      *pppuVar36 = (undefined **)*ppuVar33;
      ppuVar33 = ppuVar33 + 1;
      pppuVar36 = pppuVar36 + 1;
    }
    plVar21 = plVar42;
    ppuVar33 = &local_3b8;
    for (lVar25 = 10; lVar25 != 0; lVar25 = lVar25 + -1) {
      *ppuVar33 = (undefined1 *)*plVar21;
      plVar21 = plVar21 + 1;
      ppuVar33 = ppuVar33 + 1;
    }
    pppuVar36 = &local_368;
    plVar21 = plVar42;
    for (lVar25 = 10; lVar25 != 0; lVar25 = lVar25 + -1) {
      *plVar21 = (longlong)*pppuVar36;
      pppuVar36 = pppuVar36 + 1;
      plVar21 = plVar21 + 1;
    }
    uVar55 = (longlong)(int)uStack_3b0 - (longlong)iStack_384;
    uVar32 = (uint)uVar55;
    if ((uint)((int)param_1[0x59] - *(int *)((longlong)param_1 + 0x2f4)) < uVar32) {
      if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b(uVar55);
      }
      FUN_1400bac10(plVar42,uVar55 & 0xffffffff);
      iVar11 = 1;
      if (3 < uVar32) {
        uVar32 = (uVar32 | 1) + 0xe;
        iVar11 = 0x1f;
        if (uVar32 != 0) {
          for (; uVar32 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        iVar11 = 1 << ((byte)iVar11 & 0x1f);
      }
      if (((int)param_1[0x61] == 0) || ((int)param_1[0x61] < iVar11)) {
        *(int *)(param_1 + 0x61) = iVar11;
        FUN_144a56d22(plVar42);
      }
    }
    iVar11 = local_390;
    if (local_390 == 0) {
      uVar55 = 1;
      iVar10 = 0;
      iVar30 = 0;
    }
    else {
      ppppppppuVar17 = local_398;
      if (local_398 == (undefined ********)0x0) {
        ppppppppuVar17 = (undefined ********)local_3a8;
      }
      uVar32 = *(uint *)ppppppppuVar17;
      if (uVar32 == 0) {
        iVar30 = local_390 + 0x1e;
        if (-1 < local_390 + -1) {
          iVar30 = local_390 + -1;
        }
        uVar53 = 0;
        uVar55 = (ulonglong)(uint)(iVar30 >> 5);
        if (iVar30 >> 5 < 1) {
          uVar55 = uVar53;
        }
        iVar10 = 0;
        do {
          if (uVar55 == uVar53) goto LAB_143674db5;
          iVar10 = iVar10 + 0x20;
          uVar32 = *(uint *)((longlong)ppppppppuVar17 + (uVar53 + 1) * 4);
          uVar53 = uVar53 + 1;
        } while (uVar32 == 0);
      }
      else {
        uVar53 = 0;
        iVar10 = 0;
      }
      uVar55 = (ulonglong)(-uVar32 & uVar32);
      uVar35 = uVar55 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      iVar30 = (iVar10 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
      if (local_390 <= iVar30) {
        iVar30 = local_390;
      }
    }
    if (iVar30 != local_390) {
      uVar32 = 0xffffffff;
      iVar31 = local_390;
      do {
        local_368 = (undefined **)
                    CONCAT44(local_368._4_4_,*(undefined4 *)(local_3b8 + (longlong)iVar30 * 0xc));
        cVar9 = FUN_143676f44(param_1,local_410);
        if (cVar9 == '\0') {
          FUN_1447cbafe(plVar42,&local_3c8,&local_368,0);
          iVar31 = local_390;
        }
        uVar32 = uVar32 & ~(uint)uVar55;
        ppppppppuVar17 = local_398;
        if (local_398 == (undefined ********)0x0) {
          ppppppppuVar17 = (undefined ********)local_3a8;
        }
        iVar30 = (int)uVar53;
        lVar25 = (longlong)iVar30;
        uVar14 = *(uint *)((longlong)ppppppppuVar17 + lVar25 * 4) & uVar32;
        if (uVar14 == 0) {
          iVar13 = iVar31 + 0x1e;
          if (-1 < iVar31 + -1) {
            iVar13 = iVar31 + -1;
          }
          iVar13 = iVar13 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar48 = iVar13;
          if (iVar13 < iVar30) {
            iVar48 = iVar30;
          }
          if (iVar30 < iVar13) {
            lVar28 = 0;
            do {
              uVar14 = *(uint *)((longlong)ppppppppuVar17 + (lVar25 + lVar28 + 1) * 4);
              if (uVar14 != 0) {
                uVar53 = (ulonglong)(iVar30 + (int)lVar28 + 1);
                uVar32 = 0xffffffff;
                goto LAB_14367543c;
              }
              iVar10 = iVar10 + 0x20;
              lVar28 = lVar28 + 1;
            } while (iVar48 - lVar25 != lVar28);
            uVar32 = 0xffffffff;
            iVar30 = iVar48;
          }
          uVar53 = (ulonglong)(iVar30 + 1);
          iVar30 = iVar31;
        }
        else {
LAB_14367543c:
          uVar55 = (ulonglong)(-uVar14 & uVar14);
          uVar35 = uVar55 * 2 + 1;
          lVar25 = 0x3f;
          if (uVar35 != 0) {
            for (; uVar35 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          iVar30 = (iVar10 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
          if (iVar31 <= iVar30) {
            iVar30 = iVar31;
          }
        }
      } while (iVar30 != iVar11);
    }
LAB_143674db5:
    local_370 = 0;
    if (local_378 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    uVar53 = uStack_3b0 >> 0x20;
    uStack_3b0 = uStack_3b0 & 0xffffffff00000000;
    if ((int)uVar53 != 0) {
      FUN_1447a08a2(&local_3b8,0);
    }
    iStack_388 = 0xffffffff;
    iStack_384 = 0;
    local_390 = 0;
    if (0x80 < uStack_38c) {
      uStack_38c = 0x80;
      FUN_1446efbd8(local_3a8,0);
    }
    if (local_398 != (undefined ********)0x0) {
      FUN_1400020a8();
    }
    if (local_3b8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    iVar11 = ((*(int *)((longlong)param_1 + 0x324) + DAT_14c7619cc) - (int)param_1[100]) %
             DAT_14c7619cc;
    if ((int)param_1[100] < 1) {
      iVar30 = 0;
    }
    else {
      iVar30 = 0;
      iVar10 = 0;
      do {
        lVar25 = (longlong)((iVar10 + iVar11) % DAT_14c7619cc);
        if (*(int *)(param_1[0x62] + 0x10 + lVar25 * 0x18) != -1) {
          plVar42 = (longlong *)(param_1[0x62] + lVar25 * 0x18);
          plVar21 = (longlong *)plVar42[1];
          if (plVar21 == (longlong *)0x0) break;
          if (*(code **)(*plVar21 + 0x20) == (code *)&LAB_14688ab4e) {
            iVar31 = DAT_14c844ee0;
            if (plVar21[2] != 0) {
              iVar31 = *(int *)(plVar21[2] + 0xb4);
            }
            if (iVar31 == 1) break;
          }
          else {
            uVar32 = (**(code **)(*plVar21 + 0x20))();
            if (uVar32 < 2) break;
          }
          iVar31 = iVar30 + 1;
          lVar25 = param_1[0x1d];
          lVar18 = (longlong)(int)plVar42[2] * 0x30;
          *(undefined2 *)(lVar25 + 0x28 + lVar18) = 0xffff;
          lVar28 = *(longlong *)(lVar25 + lVar18);
          if (((*(byte *)(lVar28 + 0xa0) & 8) == 0) &&
             ((int)(uint)*(byte *)(param_1[0x16] + 0x60 + (longlong)*(int *)(lVar28 + 0x98) * 0x68)
              <= (int)*(char *)(lVar28 + 0x9c))) {
            plVar49 = (longlong *)(lVar25 + lVar18);
            plVar21 = (longlong *)plVar42[1];
            if (plVar21 == (longlong *)0x0) {
LAB_14367547b:
              local_368 = (undefined **)0x0;
              local_360 = CONCAT44(local_360._4_4_,1);
              local_358 = (undefined8 *)0x0;
              local_290 = 0;
              local_288 = 0x800000000;
              FUN_1427d8b7a(&local_368,plVar49[3],(int)plVar49[4],
                            *(undefined4 *)((longlong)plVar49 + 0x24));
              local_3a8[0] = (longlong *******)0x0;
              local_398 = (undefined ********)&PTR_LAB_14aa69440;
              local_390 = 0x4367fcc8;
              uStack_38c = 1;
              local_3b8 = &LAB_147cd5d8e;
              local_438 = plVar42 + 1;
              FUN_141713140(&local_368,plVar42,1,&local_3b8);
              if (local_3b8 != (undefined1 *)0x0) {
                ppppppplVar26 = local_3a8[0];
                if (local_3a8[0] == (longlong *******)0x0) {
                  ppppppplVar26 = (longlong *******)&local_398;
                }
                (*(code *)(*ppppppplVar26)[2])();
              }
              if (local_290 != 0) {
                FUN_1400020a8();
              }
              iVar30 = iVar31;
              if (local_358 != (undefined8 *)0x0) {
                LOCK();
                piVar23 = (int *)(local_358 + 1);
                *piVar23 = *piVar23 + -1;
                UNLOCK();
                if (*piVar23 == 0) {
                  (**(code **)*local_358)(local_358,1);
                }
              }
              break;
            }
            if (*(code **)(*plVar21 + 0x20) == (code *)&LAB_14688ab4e) {
              iVar13 = DAT_14c844ee0;
              if (plVar21[2] != 0) {
                iVar13 = *(int *)(plVar21[2] + 0xb4);
              }
              if (iVar13 != 0) goto LAB_14367547b;
            }
            else {
              iVar13 = (**(code **)(*plVar21 + 0x20))();
              if (iVar13 != 2) goto LAB_14367547b;
            }
            puVar3 = (undefined8 *)*plVar42;
            uVar12 = *(undefined4 *)(puVar3 + 1);
            uVar2 = *(undefined1 *)(puVar3 + 3);
            uVar4 = *puVar3;
            memset(&local_368,0,0x90);
            FUN_144869430(&local_368);
            local_2d8 = 0;
            local_368 = &PTR_FUN_149e1ddc0;
            local_2c0 = 0x7fffffffffffffff;
            local_340 = local_340 | 1;
            local_2d0 = uVar4;
            local_2c8 = (ulonglong)CONCAT14(uVar2,uVar12);
            FUN_1449c2eca(&local_368,1);
            FUN_140397b96(*plVar49 + 0x18,&local_368,0);
            plVar21 = local_310;
            local_368 = &PTR__purecall_149e35f70;
            if (local_310 != (longlong *)0x0) {
              if (*local_310 != 0) {
                FUN_1400020a8();
              }
              FUN_1400020a8(plVar21);
            }
            lVar25 = local_2f0;
            if (local_2f0 != 0) {
              if (*(longlong *)(local_2f0 + 0x40) != 0) {
                FUN_1400020a8();
              }
              FUN_1400020a8(lVar25);
            }
            local_3b8 = local_410;
            uStack_3b0 = 0;
            local_3a8[0] = (longlong *******)0x0;
            FUN_1417b3222(&uStack_3b0,1);
            FUN_147377468(&local_368,*plVar49 + 0x40);
            local_358 = (undefined8 *)CONCAT17(2,(undefined7)local_358);
            if (*(int *)(*plVar49 + 0x20) != 0) {
              local_340 = *plVar49 + 0x10;
            }
            (**(code **)(*DAT_14ca83900 + 0x4d8))(DAT_14ca83900,&local_3c8,local_410,&local_368);
            lVar25 = *plVar49;
            if ((local_340 == 0) || (cVar9 = (**(code **)(*local_3c8 + 0x10))(), cVar9 != '\0')) {
              pbVar1 = (byte *)(lVar25 + 0xa0);
              *pbVar1 = *pbVar1 | 1;
            }
            else {
              pbVar1 = (byte *)(lVar25 + 0xa0);
              *pbVar1 = *pbVar1 & 0xfe;
            }
            FUN_147427f7e(*plVar49,local_3c8,&local_3b8);
            ppuVar43 = local_3c8;
            if (local_3c8 != (undefined **)0x0) {
              LOCK();
              ppuVar29 = local_3c8 + 1;
              puVar7 = *ppuVar29;
              *(uint *)ppuVar29 = *(uint *)ppuVar29 - 1;
              UNLOCK();
              if (((ulonglong)puVar7 & 0x3fffffff) == 1) {
                ppuVar29 = local_3c8 + 1;
                LOCK();
                uVar32 = *(uint *)ppuVar29;
                *(uint *)ppuVar29 = *(uint *)ppuVar29 | 0x40000000;
                UNLOCK();
                if ((uVar32 >> 0x1e & 1) == 0) {
                  bVar52 = *(byte *)((longlong)local_3c8 + 0xd);
                  plVar19 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar19[1] = (longlong)ppuVar43;
                  plVar21 = DAT_14ca843c0;
                  plVar20 = DAT_14ca843c8;
                  if ((bVar52 & 2) == 0) {
                    do {
                      *plVar19 = (longlong)plVar21;
                      LOCK();
                      bVar56 = plVar21 != DAT_14ca843c0;
                      plVar20 = plVar19;
                      if (bVar56) {
                        plVar21 = DAT_14ca843c0;
                        plVar20 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar20;
                      UNLOCK();
                    } while (bVar56);
                  }
                  else {
                    do {
                      *plVar19 = (longlong)plVar20;
                      LOCK();
                      bVar56 = plVar20 != DAT_14ca843c8;
                      plVar21 = plVar19;
                      if (bVar56) {
                        plVar20 = DAT_14ca843c8;
                        plVar21 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar21;
                      UNLOCK();
                    } while (bVar56);
                  }
                }
              }
            }
            FUN_14005bcf4(local_350,local_348);
            if (local_350 != 0) {
              FUN_1400020a8();
            }
            ppuVar43 = local_368;
            if (local_368 != (undefined **)0x0) {
              LOCK();
              ppuVar29 = local_368 + 1;
              puVar7 = *ppuVar29;
              *(uint *)ppuVar29 = *(uint *)ppuVar29 - 1;
              UNLOCK();
              if (((ulonglong)puVar7 & 0x3fffffff) == 1) {
                ppuVar29 = local_368 + 1;
                LOCK();
                uVar32 = *(uint *)ppuVar29;
                *(uint *)ppuVar29 = *(uint *)ppuVar29 | 0x40000000;
                UNLOCK();
                if ((uVar32 >> 0x1e & 1) == 0) {
                  bVar52 = *(byte *)((longlong)local_368 + 0xd);
                  plVar19 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar19[1] = (longlong)ppuVar43;
                  plVar21 = DAT_14ca843c0;
                  plVar20 = DAT_14ca843c8;
                  if ((bVar52 & 2) == 0) {
                    do {
                      *plVar19 = (longlong)plVar21;
                      LOCK();
                      bVar56 = plVar21 != DAT_14ca843c0;
                      plVar20 = plVar19;
                      if (bVar56) {
                        plVar21 = DAT_14ca843c0;
                        plVar20 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar20;
                      UNLOCK();
                    } while (bVar56);
                  }
                  else {
                    do {
                      *plVar19 = (longlong)plVar20;
                      LOCK();
                      bVar56 = plVar20 != DAT_14ca843c8;
                      plVar21 = plVar19;
                      if (bVar56) {
                        plVar20 = DAT_14ca843c8;
                        plVar21 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar21;
                      UNLOCK();
                    } while (bVar56);
                  }
                }
              }
            }
            if ((int)local_3a8[0] != 0) {
              (**(code **)(*DAT_14ca83900 + 0x148))(DAT_14ca83900,local_3b8,&uStack_3b0);
            }
            if (uStack_3b0 != 0) {
              FUN_1400020a8();
            }
            *(undefined1 *)((longlong)plVar49 + 0x2a) = 2;
            lVar25 = *plVar49;
            if ((*(byte *)(lVar25 + 0xa0) & 1) == 0) {
              (**(code **)(*param_1 + 0x50))(param_1,*(undefined4 *)(lVar25 + 0x98));
              lVar25 = *plVar49;
              if ((*(byte *)(lVar25 + 0xa0) & 1) != 0) goto LAB_14367520a;
            }
            else {
LAB_14367520a:
              uVar12 = (**(code **)(*DAT_14ca964f8 + 8))(DAT_14ca964f8,lVar25,2,0);
              *(undefined4 *)(lVar25 + 0xa4) = uVar12;
              *(byte *)(lVar25 + 0xa0) = *(byte *)(lVar25 + 0xa0) & 0xfe;
            }
            FUN_147ccd27c(plVar42);
          }
        }
        iVar30 = iVar30 + 1;
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)param_1[100]);
    }
    *(int *)(param_1 + 100) = (int)param_1[100] - iVar30;
    FUN_1402226aa(param_1 + 0x44);
    FUN_1402226aa(param_1 + 0x4e);
    DAT_14caffe69 = '\0';
  }
  LeaveCriticalSection(local_3e0);
LAB_14367558c:
  if ((local_60 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143675d0b:
  uVar32 = *(uint *)ppuVar34;
  *(uint *)ppuVar34 = *(uint *)ppuVar46;
  *(uint *)ppuVar46 = uVar32;
  iVar11 = iVar11 + -1;
  ppuVar44 = ppuVar44 + -1;
  if ((longlong)ppuVar51 - (longlong)ppuVar54 < (longlong)ppuVar47 - (longlong)ppuVar50) {
    if (ppuVar29 < ppuVar43) {
      *local_428 = ppuVar29;
      local_428[1] = ppuVar43;
      *(int *)(local_428 + 2) = iVar11;
      local_428 = local_428 + 3;
    }
    pppuVar36 = local_428;
    ppuVar29 = ppuVar34;
    if (ppuVar46 <= (undefined **)((longlong)ppuVar34 + 4U)) goto LAB_143676082;
  }
  else {
    if ((undefined **)((longlong)ppuVar34 + 4U) < ppuVar46) {
      *local_428 = ppuVar34;
      local_428[1] = ppuVar44;
      *(int *)(local_428 + 2) = iVar11;
      pppuVar36 = local_428 + 3;
    }
    ppuVar34 = ppuVar50;
    ppuVar44 = ppuVar43;
    ppuVar51 = ppuVar43;
    if (ppuVar43 <= ppuVar29) goto LAB_143676082;
  }
  local_428 = pppuVar36;
  iVar30 = (int)((ulonglong)((longlong)ppuVar51 - (longlong)ppuVar34) >> 2);
  uVar32 = iVar30 + 1;
  ppuVar43 = ppuVar44;
  ppuVar47 = ppuVar51;
  ppuVar54 = ppuVar34;
  if (iVar11 == 0) goto LAB_143675dbe;
  goto LAB_143675c06;
LAB_143676289:
  iVar30 = *(int *)ppuVar34;
  *(int *)ppuVar34 = *(int *)ppuVar46;
  *(int *)ppuVar46 = iVar30;
  iVar11 = iVar11 + -1;
  ppuVar44 = ppuVar44 + -1;
  if ((longlong)ppuVar51 - (longlong)ppuVar54 < (longlong)ppuVar47 - (longlong)ppuVar50) {
    if (ppuVar29 < ppuVar43) {
      *local_420 = ppuVar29;
      local_420[1] = ppuVar43;
      *(int *)(local_420 + 2) = iVar11;
      local_420 = local_420 + 3;
    }
    ppuVar29 = ppuVar34;
    if (ppuVar46 <= (undefined **)((longlong)ppuVar34 + 4U)) goto LAB_14367654e;
  }
  else {
    if ((undefined **)((longlong)ppuVar34 + 4U) < ppuVar46) {
      *local_420 = ppuVar34;
      local_420[1] = ppuVar44;
      *(int *)(local_420 + 2) = iVar11;
      local_420 = local_420 + 3;
    }
    ppuVar34 = ppuVar50;
    ppuVar44 = ppuVar43;
    ppuVar51 = ppuVar43;
    if (ppuVar43 <= ppuVar29) goto LAB_14367654e;
  }
  iVar30 = (int)((ulonglong)((longlong)ppuVar51 - (longlong)ppuVar34) >> 2);
  uVar53 = (ulonglong)(iVar30 + 1);
  ppuVar43 = ppuVar44;
  ppuVar47 = ppuVar51;
  ppuVar54 = ppuVar34;
  if (iVar11 == 0) goto LAB_143676330;
  goto LAB_1436761c2;
}



// FUNCTION 143676f44 FUN_143676f44 body=1569 status=ok
// SIG undefined FUN_143676f44(void)

ulonglong FUN_143676f44(longlong param_1,undefined1 *param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined **ppuVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  char cVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined ***pppuVar17;
  undefined8 unaff_RBX;
  ulonglong uVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_1c8 [32];
  undefined ***local_1a8;
  longlong *local_1a0;
  undefined **local_198;
  ulonglong local_190;
  undefined8 uStack_188;
  undefined1 local_180;
  undefined1 *local_178;
  longlong local_170;
  undefined ***pppuStack_168;
  undefined **local_158;
  undefined *local_150;
  undefined **local_130;
  undefined4 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined4 local_110;
  undefined ***local_108;
  longlong *local_d8;
  longlong local_b8;
  undefined8 local_a0;
  longlong local_98;
  ulonglong local_90;
  undefined8 local_88;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + (longlong)param_3 * 0x30);
  uVar18 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (((*(char *)(lVar8 + 0x57) != '\x01') ||
      (lVar19 = *(longlong *)(param_1 + 0xe8) + (longlong)param_3 * 0x30,
      *(char *)(lVar19 + 0x2a) == '\x01')) ||
     (((longlong)*(int *)(lVar8 + 0x98) != -1 &&
      ((int)*(char *)(lVar8 + 0x9c) <
       (int)(uint)*(byte *)(*(longlong *)(param_1 + 0xb0) + 0x60 +
                           (longlong)*(int *)(lVar8 + 0x98) * 0x68))))) goto LAB_1436771c1;
  plVar16 = *(longlong **)(lVar19 + 0x18);
  local_190 = 0;
  uStack_188 = 0;
  local_198 = &PTR_FUN_14a3d4750;
  local_180 = 1;
  if (*(int *)(lVar19 + 0x24) == 0) {
    pppuVar17 = (undefined ***)0x0;
LAB_1436772da:
    *(undefined1 *)(lVar19 + 0x2a) = 2;
LAB_1436772e0:
    local_170 = 0;
    pppuStack_168 = (undefined ***)0x0;
    local_178 = param_2;
    FUN_1417b3222(&local_170,1);
    FUN_147377468(&local_130,lVar8 + 0x40);
    local_120 = (undefined8 *)CONCAT17(2,(undefined7)local_120);
    local_108 = pppuVar17;
    (**(code **)(*DAT_14ca83900 + 0x4d8))(DAT_14ca83900,&local_1a0,param_2,&local_130);
    if ((local_108 == (undefined ***)0x0) ||
       (cVar11 = (**(code **)(*local_1a0 + 0x10))(), cVar11 != '\0')) {
      *(byte *)(lVar8 + 0xa0) = *(byte *)(lVar8 + 0xa0) | 1;
    }
    else {
      *(byte *)(lVar8 + 0xa0) = *(byte *)(lVar8 + 0xa0) & 0xfe;
    }
    FUN_147427f7e(lVar8,local_1a0,&local_178);
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      puVar2 = (uint *)(local_1a0 + 1);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_1a0 + 1);
        LOCK();
        uVar4 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar5 = *(byte *)((longlong)local_1a0 + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = (longlong)local_1a0;
          plVar16 = DAT_14ca843c0;
          plVar15 = DAT_14ca843c8;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar16;
              LOCK();
              bVar20 = plVar16 != DAT_14ca843c0;
              plVar15 = plVar14;
              if (bVar20) {
                plVar16 = DAT_14ca843c0;
                plVar15 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar15;
              UNLOCK();
            } while (bVar20);
          }
          else {
            do {
              *plVar14 = (longlong)plVar15;
              LOCK();
              bVar20 = plVar15 != DAT_14ca843c8;
              plVar16 = plVar14;
              if (bVar20) {
                plVar15 = DAT_14ca843c8;
                plVar16 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar16;
              UNLOCK();
            } while (bVar20);
          }
        }
      }
    }
    FUN_14005bcf4(local_118,local_110);
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    ppuVar9 = local_130;
    if (local_130 != (undefined **)0x0) {
      LOCK();
      ppuVar3 = local_130 + 1;
      puVar10 = *ppuVar3;
      *(uint *)ppuVar3 = *(uint *)ppuVar3 - 1;
      UNLOCK();
      if (((ulonglong)puVar10 & 0x3fffffff) == 1) {
        ppuVar3 = local_130 + 1;
        LOCK();
        uVar4 = *(uint *)ppuVar3;
        *(uint *)ppuVar3 = *(uint *)ppuVar3 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar5 = *(byte *)((longlong)local_130 + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = (longlong)ppuVar9;
          plVar16 = DAT_14ca843c0;
          plVar15 = DAT_14ca843c8;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar16;
              LOCK();
              bVar20 = plVar16 != DAT_14ca843c0;
              plVar15 = plVar14;
              if (bVar20) {
                plVar16 = DAT_14ca843c0;
                plVar15 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar15;
              UNLOCK();
            } while (bVar20);
          }
          else {
            do {
              *plVar14 = (longlong)plVar15;
              LOCK();
              bVar20 = plVar15 != DAT_14ca843c8;
              plVar16 = plVar14;
              if (bVar20) {
                plVar15 = DAT_14ca843c8;
                plVar16 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar16;
              UNLOCK();
            } while (bVar20);
          }
        }
      }
    }
    if ((int)pppuStack_168 != 0) {
      (**(code **)(*DAT_14ca83900 + 0x148))(DAT_14ca83900,local_178,&local_170);
    }
    if (local_170 != 0) {
      FUN_1400020a8();
    }
    uVar18 = CONCAT71((int7)((ulonglong)&local_170 >> 8),1);
    if ((*(byte *)(lVar8 + 0xa0) & 1) != 0) {
      uVar12 = (**(code **)(*DAT_14ca964f8 + 8))(DAT_14ca964f8,lVar8,2,0);
      *(undefined4 *)(lVar8 + 0xa4) = uVar12;
      *(byte *)(lVar8 + 0xa0) = *(byte *)(lVar8 + 0xa0) & 0xfe;
    }
  }
  else {
    if (*plVar16 != 0) {
      lVar13 = FUN_14031511a(plVar16);
      uVar4 = *(uint *)(lVar19 + 0x20);
      uVar7 = *(uint *)(lVar19 + 0x24);
      memset(&local_130,0,0x90);
      FUN_144869430(&local_130);
      local_a0 = 0;
      local_130 = &PTR_FUN_149e1ddc0;
      local_88 = 0x7fffffffffffffff;
      local_108 = (undefined ***)((ulonglong)local_108 | 1);
      local_98 = (ulonglong)uVar4 + lVar13;
      local_90 = (ulonglong)uVar7;
      FUN_1449c2eca(&local_130,1);
      FUN_140397b96(&local_190,&local_130,0);
      *(undefined1 *)((longlong)plVar16 + 0x13) = 0;
      if ((*(byte *)((longlong)plVar16 + 0x14) & 8) != 0) {
        FUN_1400ea36e(plVar16,plVar16);
      }
      local_130 = &PTR__purecall_149e35f70;
      if (local_d8 != (longlong *)0x0) {
        if (*local_d8 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_d8);
      }
      if (local_b8 != 0) {
        if (*(longlong *)(local_b8 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_b8);
      }
      pppuVar17 = (undefined ***)0x0;
      if ((int)uStack_188 != 0) {
        pppuVar17 = &local_198;
      }
      goto LAB_1436772da;
    }
    if (*(int *)(param_1 + 800) < DAT_14c7619cc) {
      *(undefined2 *)(lVar19 + 0x28) = *(undefined2 *)(param_1 + 0x324);
      iVar6 = *(int *)(param_1 + 0x324);
      *(int *)(param_1 + 0x324) = (iVar6 + 1) % DAT_14c7619cc;
      *(int *)(param_1 + 800) = *(int *)(param_1 + 800) + 1;
      pppuVar17 = (undefined ***)(*(longlong *)(param_1 + 0x310) + (longlong)iVar6 * 0x18);
      *(undefined4 *)(pppuVar17 + 2) = *(undefined4 *)(lVar8 + 0xa8);
      FUN_1400eecdc(&local_130,*(undefined4 *)(lVar19 + 0x24));
      if (pppuVar17 == &local_130) {
LAB_1436770a3:
        ppuVar9 = local_130;
        if (local_130 != (undefined **)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_130 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            FUN_144716208(local_130);
            FUN_1400020a8(ppuVar9);
          }
        }
      }
      else {
        ppuVar9 = *pppuVar17;
        *pppuVar17 = local_130;
        local_130 = (undefined **)0x0;
        if (ppuVar9 != (undefined **)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)ppuVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            FUN_144716208(ppuVar9);
            FUN_1400020a8(ppuVar9);
          }
          goto LAB_1436770a3;
        }
      }
      local_130 = (undefined **)0x0;
      local_128 = 1;
      local_120 = (undefined8 *)0x0;
      local_58 = 0;
      local_50 = 0x800000000;
      FUN_1427d8b7a(&local_130,plVar16,*(undefined4 *)(lVar19 + 0x20),*(undefined4 *)(lVar19 + 0x24)
                   );
      local_1a8 = pppuVar17 + 1;
      pppuStack_168 = (undefined ***)0x0;
      local_158 = &PTR_LAB_14aa69440;
      local_150 = &DAT_14367fcc6;
      local_178 = &LAB_147cd5d8e;
      FUN_141713140(&local_130,pppuVar17,1,&local_178);
      if (local_178 != (undefined1 *)0x0) {
        pppuVar17 = pppuStack_168;
        if (pppuStack_168 == (undefined ***)0x0) {
          pppuVar17 = &local_158;
        }
        (*(code *)(*pppuVar17)[2])();
      }
      *(undefined1 *)(lVar19 + 0x2a) = 1;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_120 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_120 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_120)(local_120,1);
        }
      }
      uVar18 = CONCAT71((int7)((ulonglong)&local_178 >> 8),1);
      if (*(char *)(lVar19 + 0x2a) != '\x02') goto LAB_1436771ac;
      pppuVar17 = (undefined ***)0x0;
      goto LAB_1436772e0;
    }
    uVar18 = 0;
  }
LAB_1436771ac:
  if (local_190 != 0 && (local_190 & 1) == 0) {
    FUN_1400020a8();
  }
LAB_1436771c1:
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18 & 0xffffffff;
}



// FUNCTION 143677566 FUN_143677566 body=292 status=ok
// SIG undefined FUN_143677566(void)

void FUN_143677566(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  lVar1 = param_1 + 0x78;
  iVar2 = *(int *)(param_1 + 0x84);
  if (*(int *)(param_1 + 0x84) < (int)param_3[1]) {
    iVar2 = (int)param_3[1];
  }
  FUN_1472b4930(lVar1,iVar2);
  lVar4 = param_3[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_3;
    lVar7 = 0;
    do {
      lVar5 = (longlong)*(int *)(*(longlong *)(lVar3 + lVar7) + 0xa4);
      if (lVar5 != -1) {
        FUN_14367768c(param_1,lVar5 * 0x18 + *(longlong *)(param_1 + 0x30),lVar1,1);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar7);
  }
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar6 = 0;
  }
  else {
    local_58 = *(undefined8 *)(param_1 + 0x78);
    local_50 = *(int *)(param_1 + 0x80);
    FUN_147412722(param_2);
    uVar6 = *(undefined4 *)(param_1 + 0x80);
  }
  iVar2 = *(int *)(param_1 + 0x84);
  FUN_141538e31(*(undefined8 *)(param_1 + 0x78),uVar6);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x84) != 0)) {
    FUN_1472c16f4(lVar1,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14367768c FUN_14367768c body=324 status=ok
// SIG undefined FUN_14367768c(void)

void FUN_14367768c(longlong *param_1,undefined4 *param_2,longlong *param_3,char param_4)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  
  lVar7 = *(longlong *)(*(longlong *)(param_2 + 2) + 0x90);
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  uVar5 = param_2[4];
  iVar6 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
    FUN_1471b2712(param_3,iVar6);
  }
  lVar1 = *param_3 + (longlong)iVar6 * 0x20;
  *(longlong *)(*param_3 + (longlong)iVar6 * 0x20) = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(lVar1 + 8) = uVar5;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined4 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(*(longlong *)(param_2 + 2) + 0xa4) = 0xffffffff;
  if (*(int *)(*(longlong *)(param_2 + 2) + 0x98) != -1) {
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  if (param_4 != '\0') {
    FUN_147cd5950(param_1 + 6,*param_2);
  }
  if (lVar7 != 0) {
    LOCK();
    puVar2 = (uint *)(lVar7 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(lVar7 + 8);
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar7 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar7;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  return;
}



// FUNCTION 1436777d0 FUN_1436777d0 body=2808 status=ok
// SIG undefined FUN_1436777d0(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436777d0(longlong param_1,undefined8 param_2,byte param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  float *pfVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  int iVar21;
  undefined8 *puVar22;
  longlong lVar23;
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar24;
  ulonglong uVar25;
  undefined4 *puVar26;
  undefined8 uVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  longlong lVar32;
  int iVar33;
  uint uVar34;
  undefined8 *puVar35;
  ulonglong uVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  bool bVar39;
  float fVar40;
  undefined1 auStack_3d8 [39];
  byte local_3b1;
  longlong *local_3b0;
  longlong local_3a8;
  undefined8 local_3a0;
  ulonglong local_398;
  LPCRITICAL_SECTION local_390;
  undefined8 local_388;
  undefined4 local_380;
  longlong local_378;
  longlong local_370;
  undefined4 local_368 [188];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(lpCriticalSection);
  iVar12 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 100);
  if (iVar12 != 0) {
    local_3a8 = param_1 + 0x78;
    iVar33 = *(int *)(param_1 + 0x84);
    if (*(int *)(param_1 + 0x84) < iVar12) {
      iVar33 = iVar12;
    }
    FUN_1472b4930(local_3a8,iVar33);
    local_3a0 = param_2;
    if (DAT_14c7619d8 < 1) {
      *(undefined4 *)(param_1 + 0x70) = 0;
      if (*(int *)(param_1 + 0x74) != 0) {
        FUN_147cd5db4(param_1 + 0x68,0);
      }
      iVar12 = *(int *)(param_1 + 0x58);
      if (iVar12 == 0) {
        uVar28 = 1;
        iVar13 = 0;
        uVar25 = 0;
        iVar33 = 0;
      }
      else {
        puVar15 = *(uint **)(param_1 + 0x50);
        if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
          puVar15 = (uint *)(param_1 + 0x40);
        }
        uVar34 = *puVar15;
        if (uVar34 == 0) {
          iVar33 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar33 = iVar12 + -1;
          }
          uVar25 = 0;
          uVar28 = (ulonglong)(uint)(iVar33 >> 5);
          if (iVar33 >> 5 < 1) {
            uVar28 = uVar25;
          }
          iVar13 = 0;
          do {
            if (uVar28 == uVar25) goto LAB_143678118;
            iVar13 = iVar13 + 0x20;
            uVar34 = puVar15[uVar25 + 1];
            uVar25 = uVar25 + 1;
          } while (uVar34 == 0);
        }
        else {
          iVar13 = 0;
          uVar25 = 0;
        }
        uVar28 = (ulonglong)(-uVar34 & uVar34);
        uVar36 = uVar28 * 2 + 1;
        lVar32 = 0x3f;
        if (uVar36 != 0) {
          for (; uVar36 >> lVar32 == 0; lVar32 = lVar32 + -1) {
          }
        }
        iVar33 = (iVar13 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
        if (iVar12 <= iVar33) {
          iVar33 = iVar12;
        }
      }
      if (iVar33 != iVar12) {
        uVar34 = 0xffffffff;
        do {
          FUN_14367768c(param_1,(longlong)iVar33 * 0x18 + *(longlong *)(param_1 + 0x30),local_3a8,0)
          ;
          uVar34 = ~(uint)uVar28 & uVar34;
          puVar15 = *(uint **)(param_1 + 0x50);
          if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
            puVar15 = (uint *)(param_1 + 0x40);
          }
          iVar21 = *(int *)(param_1 + 0x58);
          iVar33 = (int)uVar25;
          lVar32 = (longlong)iVar33;
          uVar14 = puVar15[lVar32] & uVar34;
          if (uVar14 == 0) {
            iVar17 = iVar21 + 0x1e;
            if (-1 < iVar21 + -1) {
              iVar17 = iVar21 + -1;
            }
            iVar17 = iVar17 >> 5;
            iVar13 = iVar13 + 0x20;
            iVar18 = iVar17;
            if (iVar17 < iVar33) {
              iVar18 = iVar33;
            }
            if (iVar33 < iVar17) {
              lVar23 = 0;
              do {
                uVar14 = puVar15[lVar32 + lVar23 + 1];
                if (uVar14 != 0) {
                  uVar25 = (ulonglong)(iVar33 + (int)lVar23 + 1);
                  uVar34 = 0xffffffff;
                  goto LAB_143678246;
                }
                iVar13 = iVar13 + 0x20;
                lVar23 = lVar23 + 1;
              } while (iVar18 - lVar32 != lVar23);
              uVar34 = 0xffffffff;
              lVar32 = (longlong)iVar18;
            }
            uVar25 = lVar32 + 1U & 0xffffffff;
            iVar33 = iVar21;
          }
          else {
LAB_143678246:
            uVar28 = (ulonglong)(-uVar14 & uVar14);
            uVar36 = uVar28 * 2 + 1;
            lVar32 = 0x3f;
            if (uVar36 != 0) {
              for (; uVar36 >> lVar32 == 0; lVar32 = lVar32 + -1) {
              }
            }
            iVar33 = (iVar13 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
            if (iVar21 <= iVar33) {
              iVar33 = iVar21;
            }
          }
        } while (iVar33 != iVar12);
      }
LAB_143678118:
      *(undefined4 *)(param_1 + 0x38) = 0;
      if (*(int *)(param_1 + 0x3c) < 0) {
        FUN_144727cd0(param_1 + 0x30,0);
      }
      *(undefined8 *)(param_1 + 0x60) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x58) = 0;
      uVar27 = local_3a0;
    }
    else {
      iVar12 = *(int *)(param_1 + 0x74);
      iVar13 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 100);
      iVar33 = iVar12;
      if (iVar12 < iVar13) {
        iVar33 = iVar13;
      }
      if (iVar33 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar33);
      }
      local_3b0 = (longlong *)(param_1 + 0x68);
      *(undefined4 *)(param_1 + 0x70) = 0;
      if (iVar12 < iVar13) {
        FUN_147cd5db4(local_3b0);
      }
      uVar34 = *(uint *)(param_1 + 0x58);
      uVar28 = (ulonglong)uVar34;
      local_3b1 = param_3;
      local_390 = lpCriticalSection;
      if (uVar34 == 0) {
        uVar25 = 1;
        uVar36 = 0;
        iVar12 = 0;
        uVar14 = 0;
      }
      else {
        puVar15 = *(uint **)(param_1 + 0x50);
        if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
          puVar15 = (uint *)(param_1 + 0x40);
        }
        uVar14 = *puVar15;
        if (uVar14 == 0) {
          iVar12 = uVar34 + 0x1e;
          if (-1 < (int)(uVar34 - 1)) {
            iVar12 = uVar34 - 1;
          }
          uVar36 = 0;
          uVar25 = (ulonglong)(uint)(iVar12 >> 5);
          if (iVar12 >> 5 < 1) {
            uVar25 = uVar36;
          }
          iVar12 = 0;
          do {
            if (uVar25 == uVar36) goto LAB_1436779ef;
            iVar12 = iVar12 + 0x20;
            uVar14 = puVar15[uVar36 + 1];
            uVar36 = uVar36 + 1;
          } while (uVar14 == 0);
        }
        else {
          uVar36 = 0;
          iVar12 = 0;
        }
        uVar25 = (ulonglong)(-uVar14 & uVar14);
        uVar2 = uVar25 * 2 + 1;
        lVar32 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar32 == 0; lVar32 = lVar32 + -1) {
          }
        }
        uVar14 = (iVar12 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
        if ((int)uVar34 <= (int)uVar14) {
          uVar14 = uVar34;
        }
      }
      if (uVar14 != uVar34) {
        uVar34 = 0xffffffff;
        local_398 = uVar28;
        do {
          puVar26 = (undefined4 *)((longlong)(int)uVar14 * 0x18 + *(longlong *)(param_1 + 0x30));
          iVar33 = *(int *)(param_1 + 0x70);
          *(uint *)(param_1 + 0x70) = iVar33 + 1U;
          if (*(uint *)(param_1 + 0x74) < iVar33 + 1U) {
            FUN_147cd5e24(local_3b0,iVar33);
            uVar28 = local_398;
          }
          lVar32 = *(longlong *)(param_1 + 0x68);
          *(undefined8 *)(lVar32 + 0x10 + (longlong)iVar33 * 0x18) = *(undefined8 *)(puVar26 + 4);
          uVar5 = puVar26[1];
          uVar6 = puVar26[2];
          uVar7 = puVar26[3];
          puVar1 = (undefined4 *)(lVar32 + (longlong)iVar33 * 0x18);
          *puVar1 = *puVar26;
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          uVar34 = uVar34 & ~(uint)uVar25;
          puVar15 = *(uint **)(param_1 + 0x50);
          if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
            puVar15 = (uint *)(param_1 + 0x40);
          }
          uVar4 = *(uint *)(param_1 + 0x58);
          iVar33 = (int)uVar36;
          lVar32 = (longlong)iVar33;
          uVar14 = puVar15[lVar32] & uVar34;
          if (uVar14 == 0) {
            iVar13 = uVar4 + 0x1e;
            if (-1 < (int)(uVar4 - 1)) {
              iVar13 = uVar4 - 1;
            }
            iVar13 = iVar13 >> 5;
            iVar12 = iVar12 + 0x20;
            iVar21 = iVar13;
            if (iVar13 < iVar33) {
              iVar21 = iVar33;
            }
            if (iVar33 < iVar13) {
              lVar23 = 0;
              do {
                uVar14 = (puVar15 + lVar32 + 1)[lVar23];
                if (uVar14 != 0) {
                  uVar36 = (ulonglong)(iVar33 + (int)lVar23 + 1);
                  uVar34 = 0xffffffff;
                  goto LAB_1436780a9;
                }
                iVar12 = iVar12 + 0x20;
                lVar23 = lVar23 + 1;
              } while (iVar21 - lVar32 != lVar23);
              uVar34 = 0xffffffff;
              iVar33 = iVar21;
            }
            uVar36 = (ulonglong)(iVar33 + 1);
            uVar14 = uVar4;
          }
          else {
LAB_1436780a9:
            uVar25 = (ulonglong)(-uVar14 & uVar14);
            uVar2 = uVar25 * 2 + 1;
            lVar32 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar32 == 0; lVar32 = lVar32 + -1) {
              }
            }
            uVar14 = (iVar12 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
            if ((int)uVar4 <= (int)uVar14) {
              uVar14 = uVar4;
            }
          }
        } while (uVar14 != (uint)uVar28);
      }
LAB_1436779ef:
      iVar12 = *(int *)(param_1 + 0x70);
      if (1 < (longlong)iVar12) {
        lVar32 = *local_3b0;
        memset(local_368,0,0x2f0);
        local_370 = lVar32 + (longlong)iVar12 * 0x18 + -0x18;
        local_378 = lVar32;
        fVar40 = logf((float)iVar12);
        local_368[0] = (int)(longlong)(fVar40 + fVar40);
        plVar16 = &local_378;
        do {
          puVar20 = (undefined8 *)*plVar16;
          puVar22 = (undefined8 *)plVar16[1];
          iVar12 = (int)plVar16[2];
          iVar33 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar20) >> 3) * -0x55555555;
          uVar34 = iVar33 + 1;
          puVar29 = puVar22;
          puVar37 = puVar20;
          if (iVar12 != 0) {
LAB_143677a81:
            if (8 < (int)uVar34) {
              uVar28 = (ulonglong)(uVar34 >> 1);
              uVar27 = puVar20[uVar28 * 3 + 2];
              uVar8 = puVar20[uVar28 * 3];
              uVar9 = (puVar20 + uVar28 * 3)[1];
              puVar20[uVar28 * 3 + 2] = puVar20[2];
              uVar10 = puVar20[1];
              puVar20[uVar28 * 3] = *puVar20;
              (puVar20 + uVar28 * 3)[1] = uVar10;
              puVar20[2] = uVar27;
              *puVar20 = uVar8;
              puVar20[1] = uVar9;
              puVar31 = puVar29 + 3;
              puVar19 = puVar20;
              do {
                puVar11 = puVar19 + 3;
                puVar30 = puVar19 + 3;
                do {
                  puVar19 = puVar30;
                  puVar38 = puVar11;
                  if (puVar29 < puVar19) break;
                  puVar11 = puVar38 + 3;
                  puVar30 = puVar19 + 3;
                } while (*(float *)((longlong)puVar20 + 4) < *(float *)((longlong)puVar19 + 4) ||
                         *(float *)((longlong)puVar20 + 4) == *(float *)((longlong)puVar19 + 4));
                puVar11 = puVar31 + -6;
                do {
                  puVar30 = puVar31;
                  puVar35 = puVar11;
                  puVar31 = puVar30 + -3;
                  if (puVar31 <= puVar20) break;
                  puVar11 = puVar35 + -3;
                } while (*(float *)((longlong)puVar30 + -0x14) < *(float *)((longlong)puVar20 + 4)
                         || *(float *)((longlong)puVar30 + -0x14) ==
                            *(float *)((longlong)puVar20 + 4));
                if (puVar31 < puVar19) goto LAB_143677b7a;
                uVar27 = puVar19[2];
                uVar8 = *puVar19;
                uVar9 = puVar19[1];
                puVar19[2] = puVar30[-1];
                uVar10 = puVar30[-2];
                *puVar19 = *puVar31;
                puVar19[1] = uVar10;
                puVar30[-1] = uVar27;
                *puVar31 = uVar8;
                puVar30[-2] = uVar9;
              } while( true );
            }
            for (; puVar22 = puVar20, puVar37 = puVar20, puVar20 < puVar29; puVar29 = puVar29 + -3)
            {
              while (puVar31 = puVar22, puVar22 = puVar37 + 3, puVar22 <= puVar29) {
                pfVar3 = (float *)((longlong)puVar37 + 0x1c);
                puVar37 = puVar22;
                if (*(float *)((longlong)puVar31 + 4) < *pfVar3 ||
                    *(float *)((longlong)puVar31 + 4) == *pfVar3) {
                  puVar22 = puVar31;
                }
              }
              local_68 = puVar31[2];
              local_78 = *puVar31;
              uStack_70 = puVar31[1];
              uVar8 = local_78;
              uVar9 = uStack_70;
              puVar31[2] = puVar29[2];
              uVar27 = puVar29[1];
              *puVar31 = *puVar29;
              puVar31[1] = uVar27;
              puVar29[2] = local_68;
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
              *(undefined4 *)puVar29 = (undefined4)local_78;
              *(undefined4 *)((longlong)puVar29 + 4) = local_78._4_4_;
              *(undefined4 *)(puVar29 + 1) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)puVar29 + 0xc) = uStack_70._4_4_;
              local_78 = uVar8;
              uStack_70 = uVar9;
            }
            goto LAB_143677f22;
          }
LAB_143677c4b:
          if (uVar34 != 0) {
            iVar12 = (iVar33 - (iVar33 + -1 >> 0x1f)) + -1 >> 1;
            iVar33 = iVar12;
joined_r0x000143677c72:
            do {
              iVar13 = iVar12 * 2 + 1;
              if (iVar13 < (int)uVar34) {
                iVar21 = iVar12 * 2 + 2;
                if ((iVar21 < (int)uVar34) &&
                   (fVar40 = *(float *)((longlong)puVar20 + ((longlong)iVar21 * 6 + 1) * 4),
                   pfVar3 = (float *)((longlong)puVar20 + ((longlong)iVar13 * 6 + 1) * 4),
                   fVar40 < *pfVar3 || fVar40 == *pfVar3)) {
                  iVar13 = iVar21;
                }
                fVar40 = *(float *)((longlong)puVar20 + ((longlong)iVar12 * 6 + 1) * 4);
                pfVar3 = (float *)((longlong)puVar20 + ((longlong)iVar13 * 6 + 1) * 4);
                if (*pfVar3 <= fVar40 && fVar40 != *pfVar3) {
                  puVar29 = puVar20 + (longlong)iVar12 * 3;
                  puVar22 = puVar20 + (longlong)iVar13 * 3;
                  local_68 = puVar29[2];
                  local_78 = *puVar29;
                  uStack_70 = puVar29[1];
                  uVar8 = local_78;
                  uVar9 = uStack_70;
                  puVar29[2] = puVar22[2];
                  uVar27 = puVar22[1];
                  *puVar29 = *puVar22;
                  puVar29[1] = uVar27;
                  puVar22[2] = local_68;
                  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
                  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
                  *(undefined4 *)puVar22 = (undefined4)local_78;
                  *(undefined4 *)((longlong)puVar22 + 4) = local_78._4_4_;
                  *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_70;
                  *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_70._4_4_;
                  iVar12 = iVar13;
                  local_78 = uVar8;
                  uStack_70 = uVar9;
                  goto joined_r0x000143677c72;
                }
              }
              bVar39 = iVar33 != 0;
              iVar12 = iVar33 + -1;
              iVar33 = iVar12;
            } while (bVar39);
            if (1 < (int)uVar34) {
              uVar28 = (ulonglong)uVar34 - 1;
              local_68 = puVar20[2];
              local_78 = *puVar20;
              uStack_70 = puVar20[1];
              uVar8 = local_78;
              uVar9 = uStack_70;
              puVar20[2] = puVar20[uVar28 * 3 + 2];
              uVar27 = (puVar20 + uVar28 * 3)[1];
              *puVar20 = puVar20[uVar28 * 3];
              puVar20[1] = uVar27;
              puVar20[uVar28 * 3 + 2] = local_68;
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
              puVar29 = puVar20 + uVar28 * 3;
              *(undefined4 *)puVar29 = (undefined4)local_78;
              *(undefined4 *)((longlong)puVar29 + 4) = local_78._4_4_;
              *(undefined4 *)(puVar29 + 1) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)puVar29 + 0xc) = uStack_70._4_4_;
              local_78 = uVar8;
              uStack_70 = uVar9;
              if (uVar34 != 2) {
                do {
                  iVar12 = 0;
                  iVar13 = 1;
                  iVar33 = 0;
                  do {
                    iVar12 = iVar12 + 2;
                    iVar21 = iVar13;
                    if (((longlong)iVar12 < (longlong)uVar28) &&
                       (fVar40 = *(float *)((longlong)puVar20 + ((longlong)iVar12 * 6 + 1) * 4),
                       pfVar3 = (float *)((longlong)puVar20 + ((longlong)iVar13 * 6 + 1) * 4),
                       fVar40 < *pfVar3 || fVar40 == *pfVar3)) {
                      iVar21 = iVar12;
                    }
                    fVar40 = *(float *)((longlong)puVar20 + ((longlong)iVar33 * 6 + 1) * 4);
                    pfVar3 = (float *)((longlong)puVar20 + ((longlong)iVar21 * 6 + 1) * 4);
                    if (fVar40 < *pfVar3 || fVar40 == *pfVar3) break;
                    puVar29 = puVar20 + (longlong)iVar33 * 3;
                    puVar22 = puVar20 + (longlong)iVar21 * 3;
                    uVar27 = puVar29[2];
                    uVar8 = *puVar29;
                    uVar9 = puVar29[1];
                    puVar29[2] = puVar22[2];
                    uVar10 = puVar22[1];
                    *puVar29 = *puVar22;
                    puVar29[1] = uVar10;
                    puVar22[2] = uVar27;
                    *puVar22 = uVar8;
                    puVar22[1] = uVar9;
                    iVar12 = iVar21 * 2;
                    iVar13 = iVar21 * 2 + 1;
                    iVar33 = iVar21;
                  } while ((longlong)iVar13 < (longlong)uVar28);
                  uVar25 = uVar28 - 1;
                  local_68 = puVar20[2];
                  local_78 = *puVar20;
                  uStack_70 = puVar20[1];
                  uVar8 = local_78;
                  uVar9 = uStack_70;
                  puVar20[2] = puVar20[uVar25 * 3 + 2];
                  uVar27 = (puVar20 + uVar25 * 3)[1];
                  *puVar20 = puVar20[uVar25 * 3];
                  puVar20[1] = uVar27;
                  puVar20[uVar25 * 3 + 2] = local_68;
                  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
                  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
                  puVar29 = puVar20 + uVar25 * 3;
                  *(undefined4 *)puVar29 = (undefined4)local_78;
                  *(undefined4 *)((longlong)puVar29 + 4) = local_78._4_4_;
                  *(undefined4 *)(puVar29 + 1) = (undefined4)uStack_70;
                  *(undefined4 *)((longlong)puVar29 + 0xc) = uStack_70._4_4_;
                  bVar39 = 2 < uVar28;
                  uVar28 = uVar25;
                  local_78 = uVar8;
                  uStack_70 = uVar9;
                } while (bVar39);
              }
            }
          }
LAB_143677f22:
          plVar16 = plVar16 + -3;
        } while (&local_378 <= plVar16);
        iVar12 = *(int *)(param_1 + 0x70);
      }
      if (iVar12 != 0) {
        lVar32 = *local_3b0;
        lVar23 = (longlong)iVar12 * 0x18;
        bVar24 = 1;
        uVar28 = 0;
        do {
          if ((bVar24 != 0) || (1.0 <= *(float *)(lVar32 + 4))) {
            FUN_14367768c(param_1,lVar32,local_3a8,1);
            uVar28 = uVar28 + *(uint *)(*(longlong *)(lVar32 + 8) + 0x50);
            bVar24 = bVar24 & (uVar28 <= (ulonglong)(longlong)DAT_14c7619d8 | local_3b1);
          }
          else {
            *(float *)(lVar32 + 4) = *(float *)(lVar32 + 4) + _DAT_14c7619dc;
            bVar24 = 0;
          }
          lVar32 = lVar32 + 0x18;
          lVar23 = lVar23 + -0x18;
        } while (lVar23 != 0);
      }
      lpCriticalSection = local_390;
      uVar27 = local_3a0;
      *(undefined4 *)(param_1 + 0x70) = 0;
      if (*(int *)(param_1 + 0x74) < 0) {
        FUN_147cd5db4(local_3b0,0);
      }
    }
    local_388 = *(undefined8 *)(param_1 + 0x78);
    local_380 = *(undefined4 *)(param_1 + 0x80);
    FUN_147412722(uVar27);
    iVar12 = *(int *)(param_1 + 0x84);
    FUN_141538e31(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0x80) = 0;
    if ((iVar12 < 0) && (*(int *)(param_1 + 0x84) != 0)) {
      FUN_1472c16f4(local_3a8,0);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  if ((local_60 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143677b7a:
  local_68 = puVar20[2];
  local_78 = *puVar20;
  uStack_70 = puVar20[1];
  uVar8 = local_78;
  uVar9 = uStack_70;
  puVar20[2] = puVar30[-1];
  uVar27 = puVar30[-2];
  *puVar20 = *puVar31;
  puVar20[1] = uVar27;
  puVar30[-1] = local_68;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  *(undefined4 *)puVar31 = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar30 + -0x14) = local_78._4_4_;
  *(undefined4 *)(puVar30 + -2) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar30 + -0xc) = uStack_70._4_4_;
  iVar12 = iVar12 + -1;
  puVar30 = puVar30 + -6;
  local_78 = uVar8;
  uStack_70 = uVar9;
  if ((longlong)puVar35 - (longlong)puVar37 < (longlong)puVar22 - (longlong)puVar38) {
    if (puVar19 < puVar29) {
      *plVar16 = (longlong)puVar19;
      plVar16[1] = (longlong)puVar29;
      *(int *)(plVar16 + 2) = iVar12;
      plVar16 = plVar16 + 3;
    }
    puVar22 = puVar35;
    puVar38 = puVar20;
    if (puVar31 <= puVar20 + 3) goto LAB_143677f22;
  }
  else {
    if (puVar20 + 3 < puVar31) {
      *plVar16 = (longlong)puVar20;
      plVar16[1] = (longlong)puVar30;
      *(int *)(plVar16 + 2) = iVar12;
      plVar16 = plVar16 + 3;
    }
    puVar20 = puVar19;
    puVar30 = puVar29;
    puVar22 = puVar29;
    if (puVar29 <= puVar19) goto LAB_143677f22;
  }
  iVar33 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar38) >> 3) * -0x55555555;
  uVar34 = iVar33 + 1;
  puVar29 = puVar30;
  puVar37 = puVar38;
  if (iVar12 == 0) goto LAB_143677c4b;
  goto LAB_143677a81;
}



// FUNCTION 1436782d6 FUN_1436782d6 body=1046 status=ok
// SIG undefined FUN_1436782d6(void)

void FUN_1436782d6(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  uint local_5c;
  undefined1 local_58;
  undefined4 local_54;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))();
  local_80 = 0;
  local_70 = 1;
  local_6c = 0;
  uStack_64 = 0;
  local_5c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_58 = 0;
  local_54 = 0;
  local_50 = L"SkeletalMeshAttributeVertexBuffer";
  local_48 = 0;
  uStack_40 = 0;
  iVar5 = (**(code **)(*local_78 + 0x10))(local_78);
  local_98 = (undefined1)iVar5;
  uStack_97 = (undefined1)((uint)iVar5 >> 8);
  uStack_96 = (undefined1)((uint)iVar5 >> 0x10);
  uStack_95 = (undefined1)((uint)iVar5 >> 0x18);
  uStack_94 = 0;
  uStack_90 = 0x4101;
  if (iVar5 == 0) {
    FUN_14570b4be(param_2,&local_80,0x4101,0);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_80;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_80;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  lVar10 = local_a0;
  plVar9 = (longlong *)(param_1 + 0x10);
  if (plVar9 == &local_a0) {
LAB_143678498:
    lVar10 = local_a0;
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
          plVar6[1] = lVar10;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    lVar10 = *plVar9;
  }
  else {
    lVar4 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar4 != 0) {
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
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_143678498;
    }
  }
  uStack_97 = *(undefined1 *)(param_1 + 0x2c);
  if ((lVar10 == 0) || ((*(byte *)(lVar10 + 0x28) & 0x10) == 0)) {
    local_b8 = &local_98;
    local_98 = 0;
    uStack_95 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_96 = 1;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  }
  else {
    local_b8 = &local_98;
    local_98 = 0;
    uStack_97 = 0;
    uStack_95 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_96 = 4;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  }
  plVar9 = (longlong *)(param_1 + 0x18);
  if (plVar9 != &local_a0) {
    lVar10 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar10 == 0) goto LAB_143678643;
    LOCK();
    puVar1 = (uint *)(lVar10 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar10 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar10 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar10;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
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
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
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
  lVar10 = local_a0;
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
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar10;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
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
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
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
LAB_143678643:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436786ee FUN_1436786ee body=163 status=ok
// SIG undefined FUN_1436786ee(void)

void FUN_1436786ee(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    iVar1 = *(int *)(param_2 + 0x10);
    lVar3 = (longlong)iVar1;
    *(uint *)(param_2 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x14) < iVar1 + 1U) {
      FUN_14742d27e((longlong *)(param_2 + 8),iVar1);
    }
    lVar2 = *(longlong *)(param_2 + 8);
    *(undefined8 *)(lVar2 + lVar3 * 0x18) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(lVar2 + 8 + lVar3 * 0x18) = 0;
    *(undefined1 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0;
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    iVar1 = *(int *)(param_2 + 0x10);
    lVar3 = (longlong)iVar1;
    *(uint *)(param_2 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x14) < iVar1 + 1U) {
      FUN_14742d27e((longlong *)(param_2 + 8),iVar1);
    }
    lVar2 = *(longlong *)(param_2 + 8);
    *(undefined8 *)(lVar2 + lVar3 * 0x18) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(lVar2 + 8 + lVar3 * 0x18) = 0;
    *(undefined1 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0;
  }
  return;
}



// FUNCTION 143678792 FUN_143678792 body=1342 status=ok
// SIG undefined FUN_143678792(void)

void FUN_143678792(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1417ea9a0(param_1,&local_48,param_2);
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (lVar3 != local_48) {
    *(longlong *)(param_1 + 0x50) = local_48;
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar3 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
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
  }
  lVar3 = *(longlong *)(param_1 + 0x60);
  if (lVar3 != local_40) {
    *(longlong *)(param_1 + 0x60) = local_40;
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar3 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
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
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    local_38[1] = 0;
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x50) + 0x28);
    bVar4 = 4;
    if (((uVar2 & 0x10) == 0) && (bVar4 = 2, (uVar2 >> 0x10 & 1) == 0)) {
      bVar4 = ((byte)(uVar2 >> 0xd) & 1) * '\x02' + 1;
    }
    local_58 = local_38;
    local_38[0] = (ulonglong)bVar4 << 0x10;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_50,param_2);
    plVar7 = (longlong *)(param_1 + 0x58);
    if (plVar7 != &local_50) {
      lVar3 = *plVar7;
      *plVar7 = local_50;
      local_50 = 0;
      if (lVar3 == 0) goto LAB_1436789e9;
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar3 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
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
    lVar3 = local_50;
    if (local_50 != 0) {
      LOCK();
      puVar1 = (uint *)(local_50 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_50 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_50 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
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
  }
LAB_1436789e9:
  if (*(longlong *)(param_1 + 0x60) != 0) {
    local_38[1] = 0;
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0x28);
    bVar4 = 4;
    if (((uVar2 & 0x10) == 0) && (bVar4 = 2, (uVar2 >> 0x10 & 1) == 0)) {
      bVar4 = ((byte)(uVar2 >> 0xd) & 1) * '\x02' + 1;
    }
    local_58 = local_38;
    local_38[0] = (ulonglong)bVar4 << 0x10;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_50,param_2);
    plVar7 = (longlong *)(param_1 + 0x68);
    if (plVar7 != &local_50) {
      lVar3 = *plVar7;
      *plVar7 = local_50;
      local_50 = 0;
      if (lVar3 == 0) goto LAB_143678b21;
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar3 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
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
    lVar3 = local_50;
    if (local_50 != 0) {
      LOCK();
      puVar1 = (uint *)(local_50 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_50 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_50 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
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
  }
LAB_143678b21:
  if (local_40 != 0) {
    LOCK();
    puVar1 = (uint *)(local_40 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_40 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(local_40 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = local_40;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
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
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(local_48 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = local_48;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
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
  if ((local_38[2] ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143678cd2 FUN_143678cd2 body=99 status=ok
// SIG undefined FUN_143678cd2(void)

void FUN_143678cd2(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    iVar1 = *(int *)(param_3 + 0x10);
    lVar3 = (longlong)iVar1;
    *(uint *)(param_3 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
      FUN_14742d27e((longlong *)(param_3 + 8),iVar1);
    }
    lVar2 = *(longlong *)(param_3 + 8);
    *(undefined8 *)(lVar2 + lVar3 * 0x18) = *(undefined8 *)(param_1 + 0x10);
    *(longlong *)(lVar2 + 8 + lVar3 * 0x18) = param_2;
    *(undefined1 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0;
  }
  return;
}



// FUNCTION 143678d36 FUN_143678d36 body=87 status=ok
// SIG undefined FUN_143678d36(void)

void FUN_143678d36(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(param_2 + 0x10);
    lVar3 = (longlong)iVar1;
    *(uint *)(param_2 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x14) < iVar1 + 1U) {
      FUN_14742d27e((longlong *)(param_2 + 8),iVar1);
    }
    lVar2 = *(longlong *)(param_2 + 8);
    *(undefined8 *)(lVar2 + lVar3 * 0x18) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(lVar2 + 8 + lVar3 * 0x18) = 0;
    *(undefined1 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0;
  }
  return;
}



// FUNCTION 143678d8e FUN_143678d8e body=744 status=ok
// SIG undefined FUN_143678d8e(void)

void FUN_143678d8e(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  ulonglong *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  longlong local_50;
  ulonglong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = L"FSkeletalMeshVertexClothBuffer";
  local_68 = (ulonglong *)CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x44));
  local_60 = 0x101;
  FUN_1406dfa7a(param_1,local_48,param_2,param_1 + 0x30);
  uVar10 = local_48[0];
  puVar1 = (ulonglong *)(param_1 + 0x10);
  if (puVar1 == local_48) {
LAB_143678e60:
    uVar10 = local_48[0];
    if (local_48[0] != 0) {
      LOCK();
      puVar2 = (uint *)(local_48[0] + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_48[0] + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_48[0] + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = uVar10;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
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
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
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
    uVar10 = *puVar1;
  }
  else {
    uVar5 = *puVar1;
    *puVar1 = local_48[0];
    local_48[0] = 0;
    if (uVar5 != 0) {
      LOCK();
      puVar2 = (uint *)(uVar5 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(uVar5 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(uVar5 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = uVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
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
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
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
      goto LAB_143678e60;
    }
  }
  if (uVar10 != 0) {
    if ((*(byte *)(uVar10 + 0x28) & 0x10) == 0) {
      local_48[0]._0_3_ = 0x10100;
    }
    else {
      local_48[0]._0_3_ = 0x40000;
    }
    local_48[0] = (ulonglong)(uint3)local_48[0];
    local_48[1] = 0;
    local_68 = local_48;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_50,param_2);
    plVar9 = (longlong *)(param_1 + 0x18);
    if (plVar9 != &local_50) {
      lVar6 = *plVar9;
      *plVar9 = local_50;
      local_50 = 0;
      if (lVar6 == 0) goto LAB_143678fee;
      LOCK();
      puVar2 = (uint *)(lVar6 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar6 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar6 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar6;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
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
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
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
    lVar6 = local_50;
    if (local_50 != 0) {
      LOCK();
      puVar2 = (uint *)(local_50 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_50 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_50 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar6;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
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
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
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
LAB_143678fee:
  if ((local_48[2] ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143679078 FUN_143679078 body=761 status=ok
// SIG undefined FUN_143679078(void)

void FUN_143679078(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  ulonglong *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  longlong local_50;
  ulonglong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = L"FSkinWeightLookupVertexBuffer";
  local_68 = (ulonglong *)CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x38));
  local_60 = 0x121;
  FUN_1402b31d8(param_1,local_48,param_2,param_1 + 0x28);
  uVar10 = local_48[0];
  puVar1 = (ulonglong *)(param_1 + 0x10);
  if (puVar1 == local_48) {
LAB_14367914a:
    uVar10 = local_48[0];
    if (local_48[0] != 0) {
      LOCK();
      puVar2 = (uint *)(local_48[0] + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_48[0] + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_48[0] + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = uVar10;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
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
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
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
    uVar10 = *puVar1;
  }
  else {
    uVar5 = *puVar1;
    *puVar1 = local_48[0];
    local_48[0] = 0;
    if (uVar5 != 0) {
      LOCK();
      puVar2 = (uint *)(uVar5 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(uVar5 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(uVar5 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = uVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
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
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
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
      goto LAB_14367914a;
    }
  }
  if ((uVar10 != 0) && ((DAT_14c873978 & 1) != 0 || *(char *)(param_1 + 0x20) != '\0')) {
    if ((*(byte *)(uVar10 + 0x28) & 0x10) == 0) {
      local_48[0]._0_3_ = 0x11c00;
    }
    else {
      local_48[0]._0_3_ = 0x40000;
    }
    local_48[0] = (ulonglong)(uint3)local_48[0];
    local_48[1] = 0;
    local_68 = local_48;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_50,param_2);
    plVar9 = (longlong *)(param_1 + 0x18);
    if (plVar9 != &local_50) {
      lVar6 = *plVar9;
      *plVar9 = local_50;
      local_50 = 0;
      if (lVar6 == 0) goto LAB_1436792e9;
      LOCK();
      puVar2 = (uint *)(lVar6 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar6 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar6 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar6;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
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
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
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
    lVar6 = local_50;
    if (local_50 != 0) {
      LOCK();
      puVar2 = (uint *)(local_50 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_50 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_50 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar6;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
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
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
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
LAB_1436792e9:
  if ((local_48[2] ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143679372 FUN_143679372 body=99 status=ok
// SIG undefined FUN_143679372(void)

void FUN_143679372(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    iVar1 = *(int *)(param_3 + 0x10);
    lVar3 = (longlong)iVar1;
    *(uint *)(param_3 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
      FUN_14742d27e((longlong *)(param_3 + 8),iVar1);
    }
    lVar2 = *(longlong *)(param_3 + 8);
    *(undefined8 *)(lVar2 + lVar3 * 0x18) = *(undefined8 *)(param_1 + 0x10);
    *(longlong *)(lVar2 + 8 + lVar3 * 0x18) = param_2;
    *(undefined1 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0;
  }
  return;
}



// FUNCTION 1436793d6 FUN_1436793d6 body=87 status=ok
// SIG undefined FUN_1436793d6(void)

void FUN_1436793d6(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(param_2 + 0x10);
    lVar3 = (longlong)iVar1;
    *(uint *)(param_2 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x14) < iVar1 + 1U) {
      FUN_14742d27e((longlong *)(param_2 + 8),iVar1);
    }
    lVar2 = *(longlong *)(param_2 + 8);
    *(undefined8 *)(lVar2 + lVar3 * 0x18) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(lVar2 + 8 + lVar3 * 0x18) = 0;
    *(undefined1 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0;
  }
  return;
}



// FUNCTION 14367942e FUN_14367942e body=97 status=ok
// SIG undefined FUN_14367942e(void)

void FUN_14367942e(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    iVar1 = *(int *)(param_3 + 0x10);
    lVar3 = (longlong)iVar1;
    *(uint *)(param_3 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
      FUN_14742d27e((longlong *)(param_3 + 8),iVar1);
    }
    lVar2 = *(longlong *)(param_3 + 8);
    *(undefined8 *)(lVar2 + lVar3 * 0x18) = *(undefined8 *)(param_1 + 0x10);
    *(longlong *)(lVar2 + 8 + lVar3 * 0x18) = param_2;
    *(undefined1 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0;
  }
  return;
}



// FUNCTION 143679490 FUN_143679490 body=85 status=ok
// SIG undefined FUN_143679490(void)

void FUN_143679490(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(param_2 + 0x10);
    lVar3 = (longlong)iVar1;
    *(uint *)(param_2 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x14) < iVar1 + 1U) {
      FUN_14742d27e((longlong *)(param_2 + 8),iVar1);
    }
    lVar2 = *(longlong *)(param_2 + 8);
    *(undefined8 *)(lVar2 + lVar3 * 0x18) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(lVar2 + 8 + lVar3 * 0x18) = 0;
    *(undefined1 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0;
  }
  return;
}



// FUNCTION 1436794e6 FUN_1436794e6 body=822 status=ok
// SIG undefined FUN_1436794e6(void)

void FUN_1436794e6(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte bVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  ulonglong *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  longlong local_50;
  ulonglong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = L"FSkinWeightDataVertexBuffer";
  local_68 = (ulonglong *)CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x44));
  local_60 = 0x121;
  FUN_1402b31d8(param_1,local_48,param_2,param_1 + 0x30);
  uVar11 = local_48[0];
  puVar1 = (ulonglong *)(param_1 + 0x10);
  if (puVar1 == local_48) {
LAB_1436795b8:
    uVar11 = local_48[0];
    if (local_48[0] != 0) {
      LOCK();
      puVar2 = (uint *)(local_48[0] + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_48[0] + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar6 = *(byte *)(local_48[0] + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = uVar11;
          plVar10 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar6 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar10;
              LOCK();
              bVar12 = plVar10 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar12) {
                plVar10 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar12);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar12 = plVar8 != DAT_14ca843c8;
              plVar10 = plVar7;
              if (bVar12) {
                plVar8 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar12);
          }
        }
      }
    }
    uVar11 = *puVar1;
  }
  else {
    uVar4 = *puVar1;
    *puVar1 = local_48[0];
    local_48[0] = 0;
    if (uVar4 != 0) {
      LOCK();
      puVar2 = (uint *)(uVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(uVar4 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar6 = *(byte *)(uVar4 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = uVar4;
          plVar10 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar6 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar10;
              LOCK();
              bVar12 = plVar10 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar12) {
                plVar10 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar12);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar12 = plVar8 != DAT_14ca843c8;
              plVar10 = plVar7;
              if (bVar12) {
                plVar8 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar12);
          }
        }
      }
      goto LAB_1436795b8;
    }
  }
  if (uVar11 == 0) {
    if (*(char *)(param_1 + 0x20) == '\0') goto LAB_143679794;
    bVar6 = 0x1c;
    if (*(char *)(param_1 + 0x21) != '\0') {
      bVar6 = 0x39;
    }
LAB_143679689:
    local_48[0]._0_2_ = (ushort)bVar6 << 8;
    local_48[0]._0_3_ = CONCAT12(1,(short)local_48[0]);
  }
  else {
    puVar9 = &DAT_14c873950;
    if (*(char *)(param_1 + 0x21) != '\0') {
      puVar9 = &DAT_14c873ec0;
    }
    if ((puVar9[0x28] & 1) == 0 && *(char *)(param_1 + 0x20) == '\0') goto LAB_143679794;
    bVar6 = 0x1c;
    if (*(char *)(param_1 + 0x21) != '\0') {
      bVar6 = 0x39;
    }
    if ((*(byte *)(uVar11 + 0x28) & 0x10) == 0) goto LAB_143679689;
    local_48[0]._0_3_ = 0x40000;
  }
  local_48[0] = (ulonglong)(uint3)local_48[0];
  local_48[1] = 0;
  local_68 = local_48;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_50,param_2);
  plVar10 = (longlong *)(param_1 + 0x18);
  if (plVar10 != &local_50) {
    lVar5 = *plVar10;
    *plVar10 = local_50;
    local_50 = 0;
    if (lVar5 == 0) goto LAB_143679794;
    LOCK();
    puVar2 = (uint *)(lVar5 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(lVar5 + 8);
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar6 = *(byte *)(lVar5 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar6 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar10;
            LOCK();
            bVar12 = plVar10 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar12) {
              plVar10 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar12 = plVar8 != DAT_14ca843c8;
            plVar10 = plVar7;
            if (bVar12) {
              plVar8 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
  lVar5 = local_50;
  if (local_50 != 0) {
    LOCK();
    puVar2 = (uint *)(local_50 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(local_50 + 8);
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar6 = *(byte *)(local_50 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar6 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar10;
            LOCK();
            bVar12 = plVar10 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar12) {
              plVar10 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar12 = plVar8 != DAT_14ca843c8;
            plVar10 = plVar7;
            if (bVar12) {
              plVar8 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
LAB_143679794:
  if ((local_48[2] ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14367981e FUN_14367981e body=117 status=ok
// SIG undefined FUN_14367981e(void)

void FUN_14367981e(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14aa66e10;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 4;
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x56) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = &PTR_FUN_14aa66da0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1436798de FUN_1436798de body=31 status=ok
// SIG undefined FUN_1436798de(void)

undefined8 FUN_1436798de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436798fe FUN_1436798fe body=1324 status=ok
// SIG undefined FUN_1436798fe(void)

void FUN_1436798fe(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143679e52 FUN_143679e52 body=481 status=ok
// SIG undefined FUN_143679e52(void)

void FUN_143679e52(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147ccfafa(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14367a034 FUN_14367a034 body=232 status=ok
// SIG undefined FUN_14367a034(void)

void FUN_14367a034(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14367a11c FUN_14367a11c body=81 status=ok
// SIG undefined FUN_14367a11c(void)

void FUN_14367a11c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147ccfb9d(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14367a16e FUN_14367a16e body=31 status=ok
// SIG undefined FUN_14367a16e(void)

undefined8 FUN_14367a16e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14367a18e FUN_14367a18e body=1324 status=ok
// SIG undefined FUN_14367a18e(void)

void FUN_14367a18e(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14367a6bb FUN_14367a6bb body=934 status=ok
// SIG undefined FUN_14367a6bb(void)

void FUN_14367a6bb(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined8 unaff_RBP;
  undefined8 *puVar12;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  uint local_70;
  undefined1 local_69;
  undefined8 *local_68;
  longlong lStack_60;
  undefined *local_58;
  ulonglong local_48;
  undefined6 uVar11;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar3 = *(ulonglong **)(param_1 + 0x18);
  uVar6 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_70 = *(uint *)((longlong)puVar3 + 0x17c);
  if (local_70 != uVar6) {
    *(uint *)((longlong)puVar3 + 0x17c) = uVar6;
    puVar7 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar7 + 3;
    if ((undefined8 *)puVar3[1] < puVar8) {
      FUN_140023dd8(puVar3,0x20);
      puVar7 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar7 + 3;
    }
    *puVar3 = (ulonglong)puVar8;
    *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
    *(undefined8 **)puVar3[6] = puVar7;
    puVar3[6] = (ulonglong)(puVar7 + 1);
    uVar10 = *(undefined4 *)((longlong)puVar3 + 0x17c);
    puVar7[1] = 0;
    *puVar7 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar7 + 2) = uVar10;
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar8 = puVar7 + 4;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(puVar1,0x30);
    puVar7 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar8 = puVar7 + 4;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar8;
  *puVar7 = &PTR_FUN_14aa68010;
  puVar8 = puVar7 + 2;
  puVar7[2] = 0;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar7;
  puVar7[2] = param_2;
  uVar4 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  FUN_1415a6536();
  FUN_1415a6536();
  FUN_1448e935e(uVar4,&local_68,&DAT_14caff8f0,0);
  FUN_1415a6536();
  lVar5 = lStack_60;
  puVar7 = local_68;
  FUN_1415a6658();
  local_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  FUN_1448f70da(puVar7,&DAT_14cafff38,puVar8,&local_68);
  FUN_140069376(param_1);
  uVar11 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar10 = (undefined4)CONCAT62(uVar11,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar10 = (undefined4)CONCAT62(uVar11,4);
  }
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar12 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar9;
  lStack_60 = DAT_14cafff80;
  if (DAT_14cafff80 != 0) {
    LOCK();
    *(int *)(DAT_14cafff80 + 8) = *(int *)(DAT_14cafff80 + 8) + 1;
    UNLOCK();
  }
  local_58 = &DAT_14cafff38;
  local_78 = 2;
  local_68 = puVar8;
  FUN_140068f1a(puVar12,&local_69,&local_68,uVar10);
  *puVar12 = &PTR_FUN_14aa68020;
  puVar12[0x37] = &DAT_14cafff38;
  puVar12[0x38] = puVar8;
  puVar12[0x39] = puVar7;
  puVar12[0x3a] = lVar5;
  puVar12[0x3b] = &DAT_100000001;
  *(undefined4 *)(puVar12 + 0x3c) = 1;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar12);
  if (*(uint *)((longlong)puVar3 + 0x17c) != local_70) {
    *(uint *)((longlong)puVar3 + 0x17c) = local_70;
    puVar7 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar7 + 3;
    if ((undefined8 *)puVar3[1] < puVar8) {
      FUN_140023dd8(puVar3,0x20);
      puVar7 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar7 + 3;
    }
    *puVar3 = (ulonglong)puVar8;
    *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
    *(undefined8 **)puVar3[6] = puVar7;
    puVar3[6] = (ulonglong)(puVar7 + 1);
    uVar10 = *(undefined4 *)((longlong)puVar3 + 0x17c);
    puVar7[1] = 0;
    *puVar7 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar7 + 2) = uVar10;
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14367aa62 FUN_14367aa62 body=31 status=ok
// SIG undefined FUN_14367aa62(void)

undefined8 FUN_14367aa62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14367aa82 FUN_14367aa82 body=1324 status=ok
// SIG undefined FUN_14367aa82(void)

void FUN_14367aa82(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14367afb0 FUN_14367afb0 body=464 status=ok
// SIG undefined FUN_14367afb0(void)

void FUN_14367afb0(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14178d776(**(undefined8 **)(param_1 + 0x1b8),param_2,
                *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x10),0);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14367b190 FUN_14367b190 body=107 status=ok
// SIG undefined FUN_14367b190(void)

int FUN_14367b190(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_147cd044c(lVar1 + (longlong)iVar4 * 0x28,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x20 + (longlong)iVar4 * 0x28);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 14367b1fc FUN_14367b1fc body=308 status=ok
// SIG undefined FUN_14367b1fc(void)

void FUN_14367b1fc(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14367b262;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_14367b262:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,4);
  }
  return;
}



// FUNCTION 14367b330 FUN_14367b330 body=19 status=ok
// SIG undefined FUN_14367b330(void)

void FUN_14367b330(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,CONCAT31((int3)(param_2 >> 8),0xff),(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 14367b344 FUN_14367b344 body=346 status=ok
// SIG undefined FUN_14367b344(void)

void FUN_14367b344(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14367b3d6;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_14367b3d6:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 14367b49e FUN_14367b49e body=86 status=ok
// SIG undefined FUN_14367b49e(void)

undefined8 * FUN_14367b49e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa68510;
  FUN_141538e31(param_1[0x37],*(undefined4 *)(param_1 + 0x38));
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14367b4f4 FUN_14367b4f4 body=219 status=ok
// SIG undefined FUN_14367b4f4(void)

void FUN_14367b4f4(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1d0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_14367b626(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 14367b5d0 FUN_14367b5d0 body=86 status=ok
// SIG undefined FUN_14367b5d0(void)

undefined8 * FUN_14367b5d0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa68510;
  FUN_141538e31(param_1[0x37],*(undefined4 *)(param_1 + 0x38));
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14367b626 FUN_14367b626 body=874 status=ok
// SIG undefined FUN_14367b626(void)

void FUN_14367b626(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  void *_Src_00;
  size_t _Size;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 **_Src_01;
  undefined1 *_Src_02;
  size_t sVar5;
  size_t _Size_00;
  void *_Dst;
  undefined8 *puVar6;
  void *_Dst_00;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  ulonglong *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 **local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar6 + 0x11;
  local_d8 = param_2;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x90);
    puVar6 = (undefined8 *)(*local_d8 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar6 + 0x11;
  }
  *local_d8 = (ulonglong)puVar3;
  *(int *)(local_d8 + 0xc) = (int)local_d8[0xc] + 1;
  *(undefined8 **)local_d8[6] = puVar6;
  local_d8[6] = (ulonglong)(puVar6 + 1);
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14a1fb978;
  puVar6[3] = 0;
  *(int *)(puVar6 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x24) = 8;
  }
  else {
    _Src_01 = &local_c0;
    if (local_b8 != (undefined8 **)0x0) {
      _Src_01 = local_b8;
    }
    FUN_1446fe144(puVar6 + 2,local_b0,0);
    puVar3 = (undefined8 *)puVar6[3];
    if ((undefined8 *)puVar6[3] == (undefined8 *)0x0) {
      puVar3 = puVar6 + 2;
    }
    memcpy(puVar3,_Src_01,(longlong)local_b0);
  }
  puVar6[0xd] = 0;
  *(int *)(puVar6 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x74) = 8;
  }
  else {
    _Src_02 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src_02 = local_a8;
    }
    FUN_1446fe1b8(puVar6 + 5,local_60,0);
    puVar3 = (undefined8 *)puVar6[0xd];
    if ((undefined8 *)puVar6[0xd] == (undefined8 *)0x0) {
      puVar3 = puVar6 + 5;
    }
    memcpy(puVar3,_Src_02,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar6 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar6 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar6 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar6 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined8 **)0x0) {
    FUN_1400020a8();
  }
  _Src = *(void **)(param_1 + 0x1b8);
  local_c8 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x10);
  iVar2 = *(int *)(param_1 + 0x1c0);
  lVar7 = (longlong)iVar2;
  _Size_00 = lVar7 * 0x20;
  _Dst = (void *)(*local_d8 + 7 & 0xfffffffffffffff8);
  pvVar4 = (void *)((longlong)_Dst + _Size_00);
  if ((void *)local_d8[1] < pvVar4) {
    FUN_140023dd8(local_d8,(uint)_Size_00 | 8);
    _Dst = (void *)(*local_d8 + 7 & 0xfffffffffffffff8);
    pvVar4 = (void *)((longlong)_Dst + _Size_00);
  }
  *local_d8 = (ulonglong)pvVar4;
  memcpy(_Dst,_Src,_Size_00);
  local_d0 = lVar7;
  if (0 < iVar2) {
    sVar5 = 0;
    do {
      iVar2 = *(int *)((longlong)_Src + sVar5 + 0x18);
      if ((longlong)iVar2 != 0) {
        _Src_00 = *(void **)((longlong)_Src + sVar5 + 0x10);
        _Size = (longlong)iVar2 * 0x28;
        _Dst_00 = (void *)(*local_d8 + 7 & 0xfffffffffffffff8);
        pvVar4 = (void *)(_Size + (longlong)_Dst_00);
        if ((void *)local_d8[1] < pvVar4) {
          FUN_140023dd8(local_d8,(int)_Size + 8);
          _Dst_00 = (void *)(*local_d8 + 7 & 0xfffffffffffffff8);
          pvVar4 = (void *)(_Size + (longlong)_Dst_00);
        }
        *local_d8 = (ulonglong)pvVar4;
        memcpy(_Dst_00,_Src_00,_Size);
        *(void **)((longlong)_Dst + sVar5 + 0x10) = _Dst_00;
        *(int *)((longlong)_Dst + sVar5 + 0x18) = iVar2;
      }
      sVar5 = sVar5 + 0x20;
    } while (_Size_00 != sVar5);
  }
  puVar6 = (undefined8 *)(*local_d8 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar6 + 8;
  if ((undefined8 *)local_d8[1] < puVar3) {
    FUN_140023dd8(local_d8,0x48);
    puVar6 = (undefined8 *)(*local_d8 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar6 + 8;
  }
  *local_d8 = (ulonglong)puVar3;
  *(int *)(local_d8 + 0xc) = (int)local_d8[0xc] + 1;
  *(undefined8 **)local_d8[6] = puVar6;
  local_d8[6] = (ulonglong)(puVar6 + 1);
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14a236970;
  puVar6[2] = _Dst;
  *(int *)(puVar6 + 3) = (int)local_d0;
  puVar6[4] = local_c8;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = local_c8;
  FUN_14494c7ac(local_d8,&local_c0,1);
  if (local_c0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_c0 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_c0)(local_c0,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14367b9b8 FUN_14367b9b8 body=29 status=ok
// SIG undefined FUN_14367b9b8(void)

void FUN_14367b9b8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14367b9d6 FUN_14367b9d6 body=29 status=ok
// SIG undefined FUN_14367b9d6(void)

undefined8 FUN_14367b9d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14367b9f4 FUN_14367b9f4 body=282 status=ok
// SIG undefined FUN_14367b9f4(void)

undefined8 * FUN_14367b9f4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143679e2b);
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



// FUNCTION 14367bb0e FUN_14367bb0e body=120 status=ok
// SIG undefined FUN_14367bb0e(void)

void FUN_14367bb0e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14603e430(&DAT_14cb05370,&DAT_14ca85100,0xb0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14603e430(&DAT_14cb05370,&DAT_14ca85100,param_1 + 0x16);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014367bb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14367bb86 FUN_14367bb86 body=68 status=ok
// SIG undefined FUN_14367bb86(void)

undefined8 * FUN_14367bb86(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa68630;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14367bbca FUN_14367bbca body=466 status=ok
// SIG undefined FUN_14367bbca(void)

void FUN_14367bbca(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar4 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar4 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar4;
  param_2[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_14a1fb978;
  puVar4[3] = 0;
  *(int *)(puVar4 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x24) = 8;
  }
  else {
    puVar3 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar3 = local_b0;
    }
    FUN_1446fe144(puVar4 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar4[3];
    if ((undefined8 *)puVar4[3] == (undefined8 *)0x0) {
      puVar1 = puVar4 + 2;
    }
    memcpy(puVar1,puVar3,(longlong)local_a8);
  }
  puVar4[0xd] = 0;
  *(int *)(puVar4 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x74) = 8;
  }
  else {
    puVar3 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar3 = local_a0;
    }
    FUN_1446fe1b8(puVar4 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar4[0xd];
    if ((undefined8 *)puVar4[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar4 + 5;
    }
    memcpy(puVar1,puVar3,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar4 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar4 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar4 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar4 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)FUN_147381ad4();
  (**(code **)(*plVar2 + 0x10))(plVar2,param_2,1,param_1 + 0x1b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14367bdaa FUN_14367bdaa body=68 status=ok
// SIG undefined FUN_14367bdaa(void)

undefined8 * FUN_14367bdaa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa68630;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14367bdee FUN_14367bdee body=38 status=ok
// SIG undefined FUN_14367bdee(void)

undefined8 FUN_14367bdee(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14367be14 FUN_14367be14 body=429 status=ok
// SIG undefined FUN_14367be14(void)

void FUN_14367be14(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  undefined1 local_98 [64];
  undefined1 *local_58;
  int local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b0);
  puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar4 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar4 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar4;
  param_2[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_14a1fb978;
  puVar4[3] = 0;
  *(int *)(puVar4 + 4) = local_a0;
  if ((longlong)local_a0 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x24) = 8;
  }
  else {
    puVar3 = local_b0;
    if (local_a8 != (undefined1 *)0x0) {
      puVar3 = local_a8;
    }
    FUN_1446fe144(puVar4 + 2,local_a0,0);
    puVar1 = (undefined8 *)puVar4[3];
    if ((undefined8 *)puVar4[3] == (undefined8 *)0x0) {
      puVar1 = puVar4 + 2;
    }
    memcpy(puVar1,puVar3,(longlong)local_a0);
  }
  puVar4[0xd] = 0;
  *(int *)(puVar4 + 0xe) = local_50;
  if ((longlong)local_50 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x74) = 8;
  }
  else {
    puVar3 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar3 = local_98;
    }
    FUN_1446fe1b8(puVar4 + 5,local_50,0);
    puVar1 = (undefined8 *)puVar4[0xd];
    if ((undefined8 *)puVar4[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar4 + 5;
    }
    memcpy(puVar1,puVar3,(longlong)local_50 << 3);
  }
  *(undefined4 *)(puVar4 + 0xf) = local_48;
  *(undefined4 *)((longlong)puVar4 + 0x7c) = uStack_44;
  *(undefined4 *)(puVar4 + 0x10) = uStack_40;
  *(undefined4 *)((longlong)puVar4 + 0x84) = uStack_3c;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8(local_58);
  }
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)FUN_147381ad4();
  (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14367bfc2 FUN_14367bfc2 body=327 status=ok
// SIG undefined FUN_14367bfc2(void)

undefined8 FUN_14367bfc2(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar6 = (ulonglong)param_2 * 0x1c;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar6 + 0xf;
      if (param_2 < 0x492) {
        uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x1ffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar7 = 0x32;
          if (0x32 < bVar2) {
            uVar7 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14367c02a;
            lVar1 = uVar7 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar6 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar6 = (ulonglong)DAT_14c841df8;
        }
        uVar6 = -uVar6 & ((uVar4 & 0x1ffffffff0) + uVar6) - 1;
      }
    }
    else {
      uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,4);
    }
  }
LAB_14367c02a:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar6 >> 2;
  uVar5 = SUB168(auVar3 * ZEXT816(0x4924924924924925),0);
  uVar6 = (uVar6 >> 2) / 7;
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)uVar6) {
    uVar4 = uVar6 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar5 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x1c,4);
  }
  return uVar5;
}



// FUNCTION 14367c10a FUN_14367c10a body=371 status=ok
// SIG undefined FUN_14367c10a(void)

void FUN_14367c10a(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
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
    lVar5 = (longlong)(int)uVar3;
  }
  else {
    lVar5 = (longlong)(int)uVar2 + ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + 0x10;
  }
  uVar4 = lVar5 * 0x1c;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar4 + 0xf;
      if (uVar4 < 0x7ff1) {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
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
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14367c1a5;
            lVar5 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar5 != 0x33);
        }
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar4 = -uVar4 & ((uVar7 & 0xfffffffffffffff0) + uVar4) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
    }
  }
LAB_14367c1a5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar4 / 0x1c)) {
    uVar7 = uVar4 / 0x1c & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x1c,4);
  return;
}



// FUNCTION 14367c27e FUN_14367c27e body=366 status=ok
// SIG undefined FUN_14367c27e(void)

void FUN_14367c27e(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x44;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14367c317;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_14367c317:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x44)) {
    uVar7 = uVar5 / 0x44 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x44,4);
  return;
}



// FUNCTION 14367c3ec FUN_14367c3ec body=29 status=ok
// SIG undefined FUN_14367c3ec(void)

undefined8 FUN_14367c3ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14367c41e FUN_14367c41e body=85 status=ok
// SIG undefined FUN_14367c41e(void)

void FUN_14367c41e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa68670;
  return;
}



// FUNCTION 14367c474 FUN_14367c474 body=85 status=ok
// SIG undefined FUN_14367c474(void)

void FUN_14367c474(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa68670;
  return;
}



// FUNCTION 14367c4ca FUN_14367c4ca body=118 status=ok
// SIG undefined FUN_14367c4ca(void)

void FUN_14367c4ca(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14aa68670;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014367c531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14367c540 FUN_14367c540 body=81 status=ok
// SIG undefined FUN_14367c540(void)

void FUN_14367c540(void)

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



// FUNCTION 14367c592 FUN_14367c592 body=83 status=ok
// SIG undefined FUN_14367c592(void)

undefined8 FUN_14367c592(void)

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



// FUNCTION 14367c5e6 FUN_14367c5e6 body=29 status=ok
// SIG undefined FUN_14367c5e6(void)

undefined8 FUN_14367c5e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14367c618 FUN_14367c618 body=85 status=ok
// SIG undefined FUN_14367c618(void)

void FUN_14367c618(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa686e0;
  return;
}



// FUNCTION 14367c66e FUN_14367c66e body=85 status=ok
// SIG undefined FUN_14367c66e(void)

void FUN_14367c66e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa686e0;
  return;
}



// FUNCTION 14367c6c4 FUN_14367c6c4 body=118 status=ok
// SIG undefined FUN_14367c6c4(void)

void FUN_14367c6c4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14aa686e0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014367c72b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14367c73a FUN_14367c73a body=81 status=ok
// SIG undefined FUN_14367c73a(void)

void FUN_14367c73a(void)

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



// FUNCTION 14367c78c FUN_14367c78c body=83 status=ok
// SIG undefined FUN_14367c78c(void)

undefined8 FUN_14367c78c(void)

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



// FUNCTION 14367c7f2 FUN_14367c7f2 body=12 status=ok
// SIG undefined FUN_14367c7f2(void)

void FUN_14367c7f2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014367c7fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14367c7fe FUN_14367c7fe body=29 status=ok
// SIG undefined FUN_14367c7fe(void)

undefined8 FUN_14367c7fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14367c81c FUN_14367c81c body=282 status=ok
// SIG undefined FUN_14367c81c(void)

undefined8 * FUN_14367c81c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143679e2b);
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



// FUNCTION 14367c936 FUN_14367c936 body=94 status=ok
// SIG undefined FUN_14367c936(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14367c936(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14366d410(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14366d410(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014367c972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14367c9a6 FUN_14367c9a6 body=12 status=ok
// SIG undefined FUN_14367c9a6(void)

void FUN_14367c9a6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014367c9af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14367c9b2 FUN_14367c9b2 body=29 status=ok
// SIG undefined FUN_14367c9b2(void)

undefined8 FUN_14367c9b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14367c9d0 FUN_14367c9d0 body=282 status=ok
// SIG undefined FUN_14367c9d0(void)

undefined8 * FUN_14367c9d0(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143679e2b);
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



// FUNCTION 14367caea FUN_14367caea body=94 status=ok
// SIG undefined FUN_14367caea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14367caea(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14366de62(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14366de62(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014367cb26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14367cb48 FUN_14367cb48 body=354 status=ok
// SIG undefined FUN_14367cb48(void)

void FUN_14367cb48(longlong *param_1)

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
    if (lVar4 == 0) goto LAB_14367cc5b;
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
LAB_14367cc5b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14367ccb6 FUN_14367ccb6 body=29 status=ok
// SIG undefined FUN_14367ccb6(void)

void FUN_14367ccb6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14367ccd4 FUN_14367ccd4 body=57 status=ok
// SIG undefined FUN_14367ccd4(void)

undefined8 * FUN_14367ccd4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14aa68810;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


